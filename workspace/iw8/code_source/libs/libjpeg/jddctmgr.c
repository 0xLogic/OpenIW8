/*
==============
jinit_inverse_dct
==============
*/
void jinit_inverse_dct(jpeg_decompress_struct *cinfo)
{
  jpeg_inverse_dct *v2; 
  int v3; 
  void **p_dct_table; 
  jpeg_inverse_dct *v5; 
  void *v6; 

  v2 = (jpeg_inverse_dct *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 128i64);
  cinfo->idct = v2;
  v3 = 0;
  v2->start_pass = start_pass;
  if ( cinfo->num_components > 0 )
  {
    p_dct_table = &cinfo->comp_info->dct_table;
    v5 = v2 + 1;
    do
    {
      v6 = (void *)cinfo->mem->alloc_small((jpeg_common_struct *)cinfo, 1i64, 256i64);
      *p_dct_table = v6;
      memset_0(v6, 0, 0x100ui64);
      LODWORD(v5->start_pass) = -1;
      v5 = (jpeg_inverse_dct *)((char *)v5 + 4);
      ++v3;
      p_dct_table += 12;
    }
    while ( v3 < cinfo->num_components );
  }
}

/*
==============
start_pass
==============
*/
void start_pass(jpeg_decompress_struct *cinfo, unsigned __int64 _RDX)
{
  jpeg_inverse_dct *idct; 
  int v10; 
  jpeg_component_info *comp_info; 
  void (__fastcall *v12)(jpeg_decompress_struct *, jpeg_component_info *, __int16 *, unsigned __int8 **, unsigned int); 
  int v13; 
  void (__fastcall **inverse_DCT)(jpeg_decompress_struct *, jpeg_component_info *, __int16 *, unsigned __int8 **, unsigned int); 
  int *v16; 
  int *p_DCT_scaled_size; 
  J_DCT_METHOD dct_method; 
  __int32 v25; 
  unsigned __int64 v76; 
  unsigned __int64 v77; 
  const __int16 *v78; 
  int v79; 
  int v80; 
  unsigned __int64 v116; 
  __int64 v117; 
  __int64 v119; 
  void *retaddr; 

  _R11 = &retaddr;
  idct = cinfo->idct;
  v10 = 0;
  comp_info = cinfo->comp_info;
  v12 = NULL;
  v13 = 0;
  if ( cinfo->num_components > 0 )
  {
    inverse_DCT = idct->inverse_DCT;
    __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
    v16 = (int *)&idct[1];
    __asm
    {
      vmovsd  xmm6, cs:__real@3ff63150b14861ef
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovsd  xmm7, cs:__real@3ff4e7ae914d6fca
      vmovaps xmmword ptr [r11-58h], xmm8
    }
    p_DCT_scaled_size = &comp_info->DCT_scaled_size;
    __asm
    {
      vmovsd  xmm8, cs:__real@3ff2d062ef6c11aa
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovsd  xmm9, cs:__real@3fe92469c0a7bf3b
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovsd  xmm10, cs:__real@3fe1517a7bc720bb
      vmovaps [rsp+0A8h+var_88], xmm11
      vmovsd  xmm11, cs:__real@3fd1a855de72ab5d
    }
    while ( 1 )
    {
      if ( *p_DCT_scaled_size == 1 )
      {
        v12 = j_jpeg_idct_1x1;
        goto LABEL_19;
      }
      if ( *p_DCT_scaled_size == 2 )
      {
        v12 = j_jpeg_idct_2x2;
        goto LABEL_19;
      }
      if ( *p_DCT_scaled_size == 4 )
        break;
      if ( *p_DCT_scaled_size != 8 )
      {
        cinfo->err->msg_code = 7;
        cinfo->err->msg_parm.i[0] = *p_DCT_scaled_size;
LABEL_8:
        ((void (__fastcall *)(jpeg_decompress_struct *, unsigned __int64, const __int16 *))cinfo->err->error_exit)(cinfo, _RDX, &aanscales_0[63]);
        goto LABEL_20;
      }
      dct_method = cinfo->dct_method;
      if ( dct_method == JDCT_ISLOW )
      {
        v12 = j_jpeg_idct_islow;
LABEL_19:
        v10 = 0;
        goto LABEL_20;
      }
      v25 = dct_method - 1;
      if ( v25 )
      {
        if ( v25 != 1 )
        {
          cinfo->err->msg_code = 48;
          goto LABEL_8;
        }
        v12 = j_jpeg_idct_float;
        v10 = 2;
      }
      else
      {
        v12 = j_jpeg_idct_ifast;
        v10 = 1;
      }
LABEL_20:
      *inverse_DCT = v12;
      if ( *((_BYTE *)p_DCT_scaled_size + 12) )
      {
        if ( *v16 != v10 )
        {
          _RDX = *(_QWORD *)(p_DCT_scaled_size + 11);
          if ( _RDX )
          {
            *v16 = v10;
            if ( v10 )
            {
              if ( v10 == 1 )
              {
                v76 = *(_QWORD *)(p_DCT_scaled_size + 13);
                v77 = v76 + 252;
                if ( (v76 > (unsigned __int64)&aanscales_0[63] || v77 < (unsigned __int64)aanscales_0) && (v76 > _RDX + 126 || v77 < _RDX) )
                {
                  __asm { vmovdqu xmm4, cs:__xmm@00000800000008000000080000000800 }
                  _EAX = 12;
                  _R9 = v76 + 32;
                  _RCX = (char *)aanscales_0 - _RDX;
                  __asm { vmovd   xmm5, eax }
                  _R8 = (char *)&aanscales_0[4] - _RDX;
                  _RAX = _RDX + 16;
                  _RDX = 4i64;
                  do
                  {
                    _R9 += 64i64;
                    __asm
                    {
                      vmovq   xmm0, qword ptr [rax+rcx-10h]
                      vmovq   xmm1, qword ptr [rax-10h]
                    }
                    _RAX += 32i64;
                    __asm
                    {
                      vpmovsxwd xmm2, xmm0
                      vpmovzxwd xmm0, xmm1
                      vpmulld xmm2, xmm0, xmm2
                      vmovq   xmm0, qword ptr [rax+r8-30h]
                      vpaddd  xmm3, xmm2, xmm4
                      vpmovsxwd xmm2, xmm0
                      vpsrad  xmm1, xmm3, xmm5
                      vmovdqu xmmword ptr [r9-60h], xmm1
                      vmovq   xmm1, qword ptr [rax-28h]
                      vpmovzxwd xmm0, xmm1
                      vpmulld xmm2, xmm0, xmm2
                      vmovq   xmm0, qword ptr [rax+rcx-20h]
                      vpaddd  xmm3, xmm2, xmm4
                      vpsrad  xmm1, xmm3, xmm5
                      vmovdqu xmmword ptr [r9-50h], xmm1
                      vmovq   xmm1, qword ptr [rax-20h]
                      vpmovsxwd xmm2, xmm0
                      vpmovzxwd xmm0, xmm1
                      vpmulld xmm2, xmm0, xmm2
                      vmovq   xmm0, qword ptr [rax+r8-20h]
                      vpaddd  xmm3, xmm2, xmm4
                      vpsrad  xmm1, xmm3, xmm5
                      vmovdqu xmmword ptr [r9-40h], xmm1
                      vmovq   xmm1, qword ptr [rax-18h]
                      vpmovsxwd xmm2, xmm0
                      vpmovzxwd xmm0, xmm1
                      vpmulld xmm2, xmm0, xmm2
                      vpaddd  xmm3, xmm2, xmm4
                      vpsrad  xmm1, xmm3, xmm5
                      vmovdqu xmmword ptr [r9-30h], xmm1
                    }
                    --_RDX;
                  }
                  while ( _RDX );
                }
                else
                {
                  v78 = aanscales_0;
                  _RDX -= (unsigned __int64)aanscales_0;
                  do
                  {
                    v79 = *(unsigned __int16 *)((char *)v78 + _RDX);
                    v76 += 4i64;
                    v80 = *v78++;
                    *(_DWORD *)(v76 - 4) = (v80 * v79 + 2048) >> 12;
                  }
                  while ( (__int64)v78 < (__int64)aanscalefactor_0 );
                }
              }
              else
              {
                _R8 = *(_QWORD *)(p_DCT_scaled_size + 13);
                _R9 = aanscalefactor_0;
                _RCX = 0i64;
                do
                {
                  _EAX = *(unsigned __int16 *)(_RDX + 2 * _RCX);
                  _RCX += 8i64;
                  __asm
                  {
                    vmovsd  xmm4, qword ptr [r9]
                    vmovd   xmm0, eax
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm4
                    vcvtsd2ss xmm2, xmm1, xmm1
                    vmovss  dword ptr [r8+rcx*4-20h], xmm2
                  }
                  _EAX = *(unsigned __int16 *)(_RDX + 2 * _RCX - 14);
                  ++_R9;
                  __asm
                  {
                    vmovd   xmm0, eax
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm4
                    vmulsd  xmm2, xmm1, xmm6
                    vcvtsd2ss xmm3, xmm2, xmm2
                    vmovss  dword ptr [r8+rcx*4-1Ch], xmm3
                  }
                  _EAX = *(unsigned __int16 *)(_RDX + 2 * _RCX - 12);
                  __asm
                  {
                    vmovd   xmm0, eax
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm4
                    vmulsd  xmm2, xmm1, xmm7
                    vcvtsd2ss xmm3, xmm2, xmm2
                    vmovss  dword ptr [r8+rcx*4-18h], xmm3
                  }
                  _EAX = *(unsigned __int16 *)(_RDX + 2 * _RCX - 10);
                  __asm
                  {
                    vmovd   xmm0, eax
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm4
                    vmulsd  xmm2, xmm1, xmm8
                    vcvtsd2ss xmm3, xmm2, xmm2
                    vmovss  dword ptr [r8+rcx*4-14h], xmm3
                  }
                  _EAX = *(unsigned __int16 *)(_RDX + 2 * _RCX - 8);
                  __asm
                  {
                    vmovd   xmm0, eax
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm4
                    vcvtsd2ss xmm2, xmm1, xmm1
                    vmovss  dword ptr [r8+rcx*4-10h], xmm2
                  }
                  _EAX = *(unsigned __int16 *)(_RDX + 2 * _RCX - 6);
                  __asm
                  {
                    vmovd   xmm0, eax
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm4
                    vmulsd  xmm2, xmm1, xmm9
                    vcvtsd2ss xmm3, xmm2, xmm2
                    vmovss  dword ptr [r8+rcx*4-0Ch], xmm3
                  }
                  _EAX = *(unsigned __int16 *)(_RDX + 2 * _RCX - 4);
                  __asm
                  {
                    vmovd   xmm0, eax
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm4
                    vmulsd  xmm2, xmm1, xmm10
                    vcvtsd2ss xmm3, xmm2, xmm2
                    vmovss  dword ptr [r8+rcx*4-8], xmm3
                  }
                  _EAX = *(unsigned __int16 *)(_RDX + 2 * _RCX - 2);
                  __asm
                  {
                    vmovd   xmm0, eax
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm4
                    vmulsd  xmm2, xmm1, xmm11
                    vcvtsd2ss xmm3, xmm2, xmm2
                    vmovss  dword ptr [r8+rcx*4-4], xmm3
                  }
                }
                while ( (__int64)_R9 < (__int64)&unk_144750CC0 );
              }
            }
            else
            {
              v116 = *(_QWORD *)(p_DCT_scaled_size + 13);
              v117 = 0i64;
              if ( v116 > _RDX + 126 || v116 + 252 < _RDX )
              {
                _RAX = v116 + 32;
                _RDX += 16i64;
                v119 = 4i64;
                do
                {
                  _RAX += 64i64;
                  __asm { vmovq   xmm0, qword ptr [rdx-10h] }
                  _RDX += 32i64;
                  __asm
                  {
                    vpmovzxwd xmm1, xmm0
                    vmovq   xmm0, qword ptr [rdx-28h]
                    vmovdqu xmmword ptr [rax-60h], xmm1
                    vpmovzxwd xmm1, xmm0
                    vmovq   xmm0, qword ptr [rdx-20h]
                    vmovdqu xmmword ptr [rax-50h], xmm1
                    vpmovzxwd xmm1, xmm0
                    vmovq   xmm0, qword ptr [rdx-18h]
                    vmovdqu xmmword ptr [rax-40h], xmm1
                    vpmovzxwd xmm1, xmm0
                    vmovdqu xmmword ptr [rax-30h], xmm1
                  }
                  --v119;
                }
                while ( v119 );
              }
              else
              {
                do
                {
                  *(_DWORD *)(v116 + 4 * v117) = *(unsigned __int16 *)(_RDX + 2 * v117);
                  ++v117;
                }
                while ( v117 < 64 );
              }
            }
          }
        }
      }
      ++v13;
      ++v16;
      ++inverse_DCT;
      p_DCT_scaled_size += 24;
      if ( v13 >= cinfo->num_components )
      {
        __asm
        {
          vmovaps xmm11, [rsp+0A8h+var_88]
          vmovaps xmm10, [rsp+0A8h+var_78]
          vmovaps xmm9, [rsp+0A8h+var_68]
          vmovaps xmm8, [rsp+0A8h+var_58]
          vmovaps xmm7, [rsp+0A8h+var_48]
          vmovaps xmm6, [rsp+0A8h+var_38]
        }
        return;
      }
    }
    v12 = j_jpeg_idct_4x4;
    goto LABEL_19;
  }
}

