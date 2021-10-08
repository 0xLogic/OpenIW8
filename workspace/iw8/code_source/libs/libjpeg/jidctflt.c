/*
==============
jpeg_idct_float
==============
*/
void jpeg_idct_float(jpeg_decompress_struct *cinfo, jpeg_component_info *compptr, __int16 *coef_block, unsigned __int8 **output_buf, unsigned int output_col)
{
  char *dct_table; 
  unsigned __int8 *sample_range_limit; 
  __int64 v21; 
  __int16 v25; 
  __int16 v96; 
  unsigned __int8 *v165; 
  unsigned __int8 *v222; 
  char v269; 
  char v270; 
  char v271; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
  }
  dct_table = (char *)compptr->dct_table;
  _RDX = &v269;
  sample_range_limit = cinfo->sample_range_limit;
  v21 = 4i64;
  __asm
  {
    vmovss  xmm14, cs:__real@3fb504f3
    vmovss  xmm15, cs:__real@3fec835e
    vmovss  xmm13, cs:__real@40273d75
  }
  do
  {
    v25 = coef_block[8];
    if ( v25 || coef_block[16] || coef_block[24] || coef_block[32] || coef_block[40] || coef_block[48] || coef_block[56] )
    {
      _EAX = *coef_block;
      __asm { vmovd   xmm0, eax }
      _EAX = coef_block[16];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm3, xmm0, dword ptr [r10]
        vmovd   xmm1, eax
      }
      _EAX = coef_block[32];
      __asm
      {
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm6, xmm1, dword ptr [r10+40h]
        vmovd   xmm0, eax
      }
      _EAX = coef_block[48];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm2, xmm0, dword ptr [r10+80h]
        vaddss  xmm4, xmm2, xmm3
        vsubss  xmm5, xmm3, xmm2
        vmovd   xmm1, eax
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm0, xmm1, dword ptr [r10+0C0h]
        vaddss  xmm3, xmm0, xmm6
        vsubss  xmm0, xmm6, xmm0
        vmulss  xmm1, xmm0, xmm14
        vsubss  xmm2, xmm1, xmm3
        vaddss  xmm11, xmm2, xmm5
        vaddss  xmm12, xmm3, xmm4
        vsubss  xmm13, xmm4, xmm3
        vsubss  xmm10, xmm5, xmm2
      }
      _EAX = v25;
      __asm { vmovd   xmm0, eax }
      _EAX = coef_block[24];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm5, xmm0, dword ptr [r10+20h]
        vmovd   xmm0, eax
      }
      _EAX = coef_block[40];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm3, xmm0, dword ptr [r10+60h]
        vmovd   xmm1, eax
      }
      _EAX = coef_block[56];
      __asm
      {
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm2, xmm1, dword ptr [r10+0A0h]
        vaddss  xmm6, xmm2, xmm3
        vsubss  xmm3, xmm2, xmm3
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, dword ptr [r10+0E0h]
        vaddss  xmm4, xmm1, xmm5
        vsubss  xmm7, xmm5, xmm1
        vmulss  xmm1, xmm3, cs:__real@40273d75
        vaddss  xmm9, xmm4, xmm6
        vaddss  xmm0, xmm7, xmm3
        vmulss  xmm5, xmm0, xmm15
        vsubss  xmm2, xmm5, xmm1
        vsubss  xmm8, xmm2, xmm9
        vmulss  xmm2, xmm7, cs:__real@3f8a8bd4
        vsubss  xmm0, xmm4, xmm6
        vmulss  xmm1, xmm0, xmm14
        vsubss  xmm3, xmm1, xmm8
        vsubss  xmm0, xmm2, xmm5
        vaddss  xmm4, xmm0, xmm3
        vsubss  xmm1, xmm12, xmm9
        vsubss  xmm0, xmm11, xmm8
        vmovss  dword ptr [rdx+0E0h], xmm1
        vsubss  xmm1, xmm13, xmm4
        vmovss  dword ptr [rdx+0C0h], xmm0
        vsubss  xmm0, xmm10, xmm3
        vaddss  xmm2, xmm3, xmm10
        vaddss  xmm4, xmm4, xmm13
        vmovss  xmm13, cs:__real@40273d75
        vaddss  xmm3, xmm8, xmm11
        vaddss  xmm5, xmm9, xmm12
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, dword ptr [r10]
        vmovss  dword ptr [rdx+0C0h], xmm1
        vmovss  dword ptr [rdx+0E0h], xmm1
        vmovaps xmm0, xmm1
        vmovaps xmm2, xmm1
        vmovaps xmm3, xmm1
        vmovaps xmm5, xmm1
        vmovaps xmm4, xmm1
      }
    }
    __asm
    {
      vmovss  dword ptr [rdx+80h], xmm4
      vmovss  dword ptr [rdx], xmm5
      vmovss  dword ptr [rdx+20h], xmm3
      vmovss  dword ptr [rdx+40h], xmm2
      vmovss  dword ptr [rdx+0A0h], xmm0
      vmovss  dword ptr [rdx+60h], xmm1
    }
    _RCX = _RDX + 4;
    v96 = coef_block[9];
    if ( v96 || coef_block[17] || coef_block[25] || coef_block[33] || coef_block[41] || coef_block[49] || coef_block[57] )
    {
      _EAX = coef_block[1];
      __asm { vmovd   xmm0, eax }
      _EAX = coef_block[17];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm3, xmm0, dword ptr [r10+4]
        vmovd   xmm1, eax
      }
      _EAX = coef_block[33];
      __asm
      {
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm6, xmm1, dword ptr [r10+44h]
        vmovd   xmm0, eax
      }
      _EAX = coef_block[49];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm2, xmm0, dword ptr [r10+84h]
        vaddss  xmm4, xmm2, xmm3
        vsubss  xmm5, xmm3, xmm2
        vmovd   xmm1, eax
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm0, xmm1, dword ptr [r10+0C4h]
        vaddss  xmm3, xmm0, xmm6
        vsubss  xmm0, xmm6, xmm0
        vmulss  xmm1, xmm0, xmm14
        vsubss  xmm2, xmm1, xmm3
        vaddss  xmm10, xmm2, xmm5
        vsubss  xmm11, xmm5, xmm2
        vaddss  xmm9, xmm3, xmm4
        vsubss  xmm12, xmm4, xmm3
      }
      _EAX = v96;
      __asm { vmovd   xmm0, eax }
      _EAX = coef_block[25];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm5, xmm0, dword ptr [r10+24h]
        vmovd   xmm0, eax
      }
      _EAX = coef_block[41];
      __asm
      {
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm3, xmm0, dword ptr [r10+64h]
        vmovd   xmm1, eax
      }
      _RAX = (unsigned int)coef_block[57];
      __asm
      {
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm2, xmm1, dword ptr [r10+0A4h]
        vaddss  xmm6, xmm2, xmm3
        vsubss  xmm3, xmm2, xmm3
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, dword ptr [r10+0E4h]
        vaddss  xmm4, xmm1, xmm5
        vsubss  xmm7, xmm5, xmm1
        vaddss  xmm8, xmm4, xmm6
        vaddss  xmm0, xmm7, xmm3
        vmulss  xmm5, xmm0, xmm15
        vmulss  xmm1, xmm3, xmm13
        vsubss  xmm2, xmm5, xmm1
        vsubss  xmm3, xmm2, xmm8
        vmulss  xmm2, xmm7, cs:__real@3f8a8bd4
        vsubss  xmm0, xmm4, xmm6
        vmulss  xmm1, xmm0, xmm14
        vsubss  xmm4, xmm1, xmm3
        vsubss  xmm0, xmm2, xmm5
        vaddss  xmm2, xmm0, xmm4
        vaddss  xmm1, xmm8, xmm9
        vmovss  dword ptr [rcx], xmm1
        vsubss  xmm0, xmm9, xmm8
        vmovss  dword ptr [rcx+0E0h], xmm0
        vaddss  xmm1, xmm3, xmm10
        vmovss  dword ptr [rcx+20h], xmm1
        vsubss  xmm0, xmm10, xmm3
        vmovss  dword ptr [rcx+0C0h], xmm0
        vaddss  xmm1, xmm4, xmm11
        vmovss  dword ptr [rcx+40h], xmm1
        vsubss  xmm0, xmm11, xmm4
        vmovss  dword ptr [rcx+0A0h], xmm0
        vaddss  xmm1, xmm2, xmm12
        vsubss  xmm0, xmm12, xmm2
        vmovss  dword ptr [rcx+80h], xmm1
        vmovss  dword ptr [rcx+60h], xmm0
      }
    }
    else
    {
      _RAX = (unsigned int)coef_block[1];
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, dword ptr [r10+4]
        vmovss  dword ptr [rcx], xmm1
        vmovss  dword ptr [rcx+20h], xmm1
        vmovss  dword ptr [rcx+40h], xmm1
        vmovss  dword ptr [rcx+60h], xmm1
        vmovss  dword ptr [rcx+80h], xmm1
        vmovss  dword ptr [rcx+0A0h], xmm1
        vmovss  dword ptr [rcx+0C0h], xmm1
        vmovss  dword ptr [rcx+0E0h], xmm1
      }
    }
    coef_block += 2;
    _RDX = _RCX + 4;
    dct_table += 8;
    --v21;
  }
  while ( v21 );
  _RDX = &v270;
  do
  {
    v165 = output_buf[v21];
    __asm
    {
      vmovss  xmm0, dword ptr [rdx-18h]
      vaddss  xmm5, xmm0, dword ptr [rdx-8]
      vsubss  xmm6, xmm0, dword ptr [rdx-8]
      vmovss  xmm1, dword ptr [rdx-10h]
      vaddss  xmm4, xmm1, dword ptr [rdx]
      vsubss  xmm0, xmm1, dword ptr [rdx]
      vmulss  xmm1, xmm0, xmm14
      vsubss  xmm3, xmm1, xmm4
      vmovss  xmm1, dword ptr [rdx-4]
      vaddss  xmm7, xmm1, dword ptr [rdx-0Ch]
      vaddss  xmm10, xmm3, xmm6
      vsubss  xmm11, xmm6, xmm3
      vsubss  xmm3, xmm1, dword ptr [rdx-0Ch]
      vmovss  xmm1, dword ptr [rdx-14h]
      vsubss  xmm6, xmm1, dword ptr [rdx+4]
      vaddss  xmm9, xmm4, xmm5
      vsubss  xmm12, xmm5, xmm4
      vaddss  xmm4, xmm1, dword ptr [rdx+4]
      vaddss  xmm8, xmm4, xmm7
      vaddss  xmm0, xmm6, xmm3
      vmulss  xmm5, xmm0, xmm15
      vmulss  xmm1, xmm3, xmm13
      vsubss  xmm2, xmm5, xmm1
      vsubss  xmm3, xmm2, xmm8
      vmulss  xmm2, xmm6, cs:__real@3f8a8bd4
      vsubss  xmm0, xmm4, xmm7
      vmulss  xmm1, xmm0, xmm14
      vsubss  xmm4, xmm1, xmm3
      vsubss  xmm0, xmm2, xmm5
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm0, xmm9, xmm8
      vaddss  xmm1, xmm8, xmm9
      vcvttss2si eax, xmm1
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v165[output_col] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vaddss  xmm0, xmm3, xmm10
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v165[output_col + 7] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vsubss  xmm0, xmm10, xmm3
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v165[output_col + 1] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vaddss  xmm0, xmm4, xmm11
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v165[output_col + 6] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vsubss  xmm0, xmm11, xmm4
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v165[output_col + 2] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vaddss  xmm0, xmm2, xmm12
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v165[output_col + 5] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vsubss  xmm0, xmm12, xmm2
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v165[output_col + 4] = _RAX;
    __asm
    {
      vmovss  xmm1, dword ptr [rdx+10h]
      vaddss  xmm4, xmm1, dword ptr [rdx+20h]
      vcvttss2si eax, xmm0
      vmovss  xmm0, dword ptr [rdx+8]
      vaddss  xmm5, xmm0, dword ptr [rdx+18h]
      vsubss  xmm6, xmm0, dword ptr [rdx+18h]
      vsubss  xmm0, xmm1, dword ptr [rdx+20h]
      vmulss  xmm1, xmm0, xmm14
      vsubss  xmm3, xmm1, xmm4
      vmovss  xmm1, dword ptr [rdx+1Ch]
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    __asm { vaddss  xmm7, xmm1, dword ptr [rdx+14h] }
    v165[output_col + 3] = _RAX;
    v222 = output_buf[v21 + 1];
    __asm
    {
      vaddss  xmm10, xmm3, xmm6
      vsubss  xmm11, xmm6, xmm3
      vsubss  xmm3, xmm1, dword ptr [rdx+14h]
      vmovss  xmm1, dword ptr [rdx+0Ch]
      vsubss  xmm6, xmm1, dword ptr [rdx+24h]
      vaddss  xmm9, xmm4, xmm5
      vsubss  xmm12, xmm5, xmm4
      vaddss  xmm4, xmm1, dword ptr [rdx+24h]
      vaddss  xmm8, xmm4, xmm7
      vaddss  xmm0, xmm6, xmm3
      vmulss  xmm5, xmm0, xmm15
      vmulss  xmm1, xmm3, xmm13
      vsubss  xmm2, xmm5, xmm1
      vsubss  xmm3, xmm2, xmm8
      vmulss  xmm2, xmm6, cs:__real@3f8a8bd4
      vsubss  xmm0, xmm4, xmm7
      vmulss  xmm1, xmm0, xmm14
      vsubss  xmm4, xmm1, xmm3
      vsubss  xmm0, xmm2, xmm5
      vaddss  xmm2, xmm0, xmm4
      vsubss  xmm0, xmm9, xmm8
      vaddss  xmm1, xmm8, xmm9
      vcvttss2si eax, xmm1
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v222[output_col] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vaddss  xmm0, xmm3, xmm10
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v222[output_col + 7] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vsubss  xmm0, xmm10, xmm3
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v222[output_col + 1] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vaddss  xmm0, xmm4, xmm11
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v222[output_col + 6] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vsubss  xmm0, xmm11, xmm4
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v222[output_col + 2] = _RAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vaddss  xmm0, xmm2, xmm12
    }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v222[output_col + 5] = _RAX;
    __asm { vcvttss2si eax, xmm0 }
    _RDX += 64;
    v21 += 2i64;
    __asm { vsubss  xmm0, xmm12, xmm2 }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v222[output_col + 4] = _RAX;
    __asm { vcvttss2si eax, xmm0 }
    _RAX = sample_range_limit[(((_RAX + 4) >> 3) & 0x3FF) + 128];
    v222[output_col + 3] = _RAX;
  }
  while ( v21 < 8 );
  _R11 = &v271;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

