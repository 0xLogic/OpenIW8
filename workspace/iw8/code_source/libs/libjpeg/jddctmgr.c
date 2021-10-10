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
void start_pass(jpeg_decompress_struct *cinfo, unsigned __int64 a2)
{
  jpeg_inverse_dct *idct; 
  int v3; 
  void (__fastcall *v4)(jpeg_decompress_struct *, jpeg_component_info *, __int16 *, unsigned __int8 **, unsigned int); 
  int v5; 
  void (__fastcall **inverse_DCT)(jpeg_decompress_struct *, jpeg_component_info *, __int16 *, unsigned __int8 **, unsigned int); 
  int *v8; 
  int *i; 
  J_DCT_METHOD dct_method; 
  __int32 v11; 
  __int64 v12; 
  double *v13; 
  __int64 v14; 
  unsigned int v15; 
  double v16; 
  __int128 v20; 
  unsigned __int64 v50; 
  unsigned __int64 v51; 
  const __int16 *v52; 
  int v53; 
  int v54; 
  __int64 v55; 
  char *v56; 
  char *v57; 
  unsigned __int64 v58; 
  unsigned __int64 v87; 
  __int64 v88; 
  unsigned __int64 v89; 
  __int64 v90; 

  idct = cinfo->idct;
  v3 = 0;
  v4 = NULL;
  v5 = 0;
  if ( cinfo->num_components > 0 )
  {
    inverse_DCT = idct->inverse_DCT;
    v8 = (int *)&idct[1];
    for ( i = &cinfo->comp_info->DCT_scaled_size; ; i += 24 )
    {
      if ( *i == 1 )
      {
        v4 = j_jpeg_idct_1x1;
        goto LABEL_19;
      }
      if ( *i == 2 )
      {
        v4 = j_jpeg_idct_2x2;
        goto LABEL_19;
      }
      if ( *i == 4 )
        break;
      if ( *i != 8 )
      {
        cinfo->err->msg_code = 7;
        cinfo->err->msg_parm.i[0] = *i;
LABEL_8:
        ((void (__fastcall *)(jpeg_decompress_struct *, unsigned __int64, const __int16 *))cinfo->err->error_exit)(cinfo, a2, &aanscales_0[63]);
        goto LABEL_20;
      }
      dct_method = cinfo->dct_method;
      if ( dct_method == JDCT_ISLOW )
      {
        v4 = j_jpeg_idct_islow;
LABEL_19:
        v3 = 0;
        goto LABEL_20;
      }
      v11 = dct_method - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
        {
          cinfo->err->msg_code = 48;
          goto LABEL_8;
        }
        v4 = j_jpeg_idct_float;
        v3 = 2;
      }
      else
      {
        v4 = j_jpeg_idct_ifast;
        v3 = 1;
      }
LABEL_20:
      *inverse_DCT = v4;
      if ( *((_BYTE *)i + 12) )
      {
        if ( *v8 != v3 )
        {
          a2 = *(_QWORD *)(i + 11);
          if ( a2 )
          {
            *v8 = v3;
            if ( v3 )
            {
              if ( v3 == 1 )
              {
                v50 = *(_QWORD *)(i + 13);
                v51 = v50 + 252;
                if ( (v50 > (unsigned __int64)&aanscales_0[63] || v51 < (unsigned __int64)aanscales_0) && (v50 > a2 + 126 || v51 < a2) )
                {
                  v55 = v50 + 32;
                  v56 = (char *)aanscales_0 - a2;
                  v57 = (char *)&aanscales_0[4] - a2;
                  v58 = a2 + 16;
                  a2 = 4i64;
                  do
                  {
                    v55 += 64i64;
                    _XMM0 = *(unsigned __int64 *)&v56[v58 - 16];
                    _XMM1 = *(unsigned __int64 *)(v58 - 16);
                    v58 += 32i64;
                    __asm
                    {
                      vpmovsxwd xmm2, xmm0
                      vpmovzxwd xmm0, xmm1
                      vpmulld xmm2, xmm0, xmm2
                    }
                    _XMM0 = *(unsigned __int64 *)&v57[v58 - 48];
                    __asm
                    {
                      vpaddd  xmm3, xmm2, xmm4
                      vpmovsxwd xmm2, xmm0
                      vpsrad  xmm1, xmm3, xmm5
                    }
                    *(_OWORD *)(v55 - 96) = _XMM1;
                    _XMM1 = *(unsigned __int64 *)(v58 - 40);
                    __asm
                    {
                      vpmovzxwd xmm0, xmm1
                      vpmulld xmm2, xmm0, xmm2
                    }
                    _XMM0 = *(unsigned __int64 *)&v56[v58 - 32];
                    __asm
                    {
                      vpaddd  xmm3, xmm2, xmm4
                      vpsrad  xmm1, xmm3, xmm5
                    }
                    *(_OWORD *)(v55 - 80) = _XMM1;
                    _XMM1 = *(unsigned __int64 *)(v58 - 32);
                    __asm
                    {
                      vpmovsxwd xmm2, xmm0
                      vpmovzxwd xmm0, xmm1
                      vpmulld xmm2, xmm0, xmm2
                    }
                    _XMM0 = *(unsigned __int64 *)&v57[v58 - 32];
                    __asm
                    {
                      vpaddd  xmm3, xmm2, xmm4
                      vpsrad  xmm1, xmm3, xmm5
                    }
                    *(_OWORD *)(v55 - 64) = _XMM1;
                    _XMM1 = *(unsigned __int64 *)(v58 - 24);
                    __asm
                    {
                      vpmovsxwd xmm2, xmm0
                      vpmovzxwd xmm0, xmm1
                      vpmulld xmm2, xmm0, xmm2
                      vpaddd  xmm3, xmm2, xmm4
                      vpsrad  xmm1, xmm3, xmm5
                    }
                    *(_OWORD *)(v55 - 48) = _XMM1;
                    --a2;
                  }
                  while ( a2 );
                }
                else
                {
                  v52 = aanscales_0;
                  a2 -= (unsigned __int64)aanscales_0;
                  do
                  {
                    v53 = *(unsigned __int16 *)((char *)v52 + a2);
                    v50 += 4i64;
                    v54 = *v52++;
                    *(_DWORD *)(v50 - 4) = (v54 * v53 + 2048) >> 12;
                  }
                  while ( (__int64)v52 < (__int64)aanscalefactor_0 );
                }
              }
              else
              {
                v12 = *(_QWORD *)(i + 13);
                v13 = (double *)aanscalefactor_0;
                v14 = 0i64;
                do
                {
                  v15 = *(unsigned __int16 *)(a2 + 2 * v14);
                  v14 += 8i64;
                  v16 = *v13;
                  _XMM0 = v15;
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v20 = *(double *)&_XMM0 * *v13;
                  _XMM1 = v20;
                  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                  *(float *)(v12 + 4 * v14 - 32) = *(float *)&_XMM2;
                  ++v13;
                  _XMM0 = *(unsigned __int16 *)(a2 + 2 * v14 - 14);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v20 = *(double *)&_XMM0 * v16 * 1.387039845;
                  _XMM2 = v20;
                  __asm { vcvtsd2ss xmm3, xmm2, xmm2 }
                  *(float *)(v12 + 4 * v14 - 28) = *(float *)&_XMM3;
                  _XMM0 = *(unsigned __int16 *)(a2 + 2 * v14 - 12);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v20 = *(double *)&_XMM0 * v16 * 1.306562965;
                  _XMM2 = v20;
                  __asm { vcvtsd2ss xmm3, xmm2, xmm2 }
                  *(float *)(v12 + 4 * v14 - 24) = *(float *)&_XMM3;
                  _XMM0 = *(unsigned __int16 *)(a2 + 2 * v14 - 10);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v20 = *(double *)&_XMM0 * v16 * 1.175875602;
                  _XMM2 = v20;
                  __asm { vcvtsd2ss xmm3, xmm2, xmm2 }
                  *(float *)(v12 + 4 * v14 - 20) = *(float *)&_XMM3;
                  _XMM0 = *(unsigned __int16 *)(a2 + 2 * v14 - 8);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v20 = *(double *)&_XMM0 * v16;
                  _XMM1 = v20;
                  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                  *(float *)(v12 + 4 * v14 - 16) = *(float *)&_XMM2;
                  _XMM0 = *(unsigned __int16 *)(a2 + 2 * v14 - 6);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v20 = *(double *)&_XMM0 * v16 * 0.785694958;
                  _XMM2 = v20;
                  __asm { vcvtsd2ss xmm3, xmm2, xmm2 }
                  *(float *)(v12 + 4 * v14 - 12) = *(float *)&_XMM3;
                  _XMM0 = *(unsigned __int16 *)(a2 + 2 * v14 - 4);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v20 = *(double *)&_XMM0 * v16 * 0.5411961;
                  _XMM2 = v20;
                  __asm { vcvtsd2ss xmm3, xmm2, xmm2 }
                  *(float *)(v12 + 4 * v14 - 8) = *(float *)&_XMM3;
                  _XMM0 = *(unsigned __int16 *)(a2 + 2 * v14 - 2);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v20 = *(double *)&_XMM0 * v16 * 0.275899379;
                  _XMM2 = v20;
                  __asm { vcvtsd2ss xmm3, xmm2, xmm2 }
                  *(float *)(v12 + 4 * v14 - 4) = *(float *)&_XMM3;
                }
                while ( (__int64)v13 < (__int64)&unk_144750CC0 );
              }
            }
            else
            {
              v87 = *(_QWORD *)(i + 13);
              v88 = 0i64;
              if ( v87 > a2 + 126 || v87 + 252 < a2 )
              {
                v89 = v87 + 32;
                a2 += 16i64;
                v90 = 4i64;
                do
                {
                  v89 += 64i64;
                  _XMM0 = *(unsigned __int64 *)(a2 - 16);
                  a2 += 32i64;
                  __asm { vpmovzxwd xmm1, xmm0 }
                  _XMM0 = *(unsigned __int64 *)(a2 - 40);
                  *(_OWORD *)(v89 - 96) = _XMM1;
                  __asm { vpmovzxwd xmm1, xmm0 }
                  _XMM0 = *(unsigned __int64 *)(a2 - 32);
                  *(_OWORD *)(v89 - 80) = _XMM1;
                  __asm { vpmovzxwd xmm1, xmm0 }
                  _XMM0 = *(unsigned __int64 *)(a2 - 24);
                  *(_OWORD *)(v89 - 64) = _XMM1;
                  __asm { vpmovzxwd xmm1, xmm0 }
                  *(_OWORD *)(v89 - 48) = _XMM1;
                  --v90;
                }
                while ( v90 );
              }
              else
              {
                do
                {
                  *(_DWORD *)(v87 + 4 * v88) = *(unsigned __int16 *)(a2 + 2 * v88);
                  ++v88;
                }
                while ( v88 < 64 );
              }
            }
          }
        }
      }
      ++v5;
      ++v8;
      ++inverse_DCT;
      if ( v5 >= cinfo->num_components )
        return;
    }
    v4 = j_jpeg_idct_4x4;
    goto LABEL_19;
  }
}

