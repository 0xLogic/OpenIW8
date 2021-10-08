/*
==============
R_HDRGradingClutImage_GenerateVersionInfoImage
==============
*/

void __fastcall R_HDRGradingClutImage_GenerateVersionInfoImage(ImageDesc *versionInfoImageDesc, GfxHdrGradingClutInputColorimetry inputColorimetry, GfxHdrGradingClutOutputColorimetry outputColorimetry)
{
  ?R_HDRGradingClutImage_GenerateVersionInfoImage@@YAXPEAUImageDesc@@W4GfxHdrGradingClutInputColorimetry@@W4GfxHdrGradingClutOutputColorimetry@@@Z(versionInfoImageDesc, inputColorimetry, outputColorimetry);
}

/*
==============
R_HDRGradingClutImage_ProcessPQFromLinear
==============
*/

unsigned __int16 __fastcall R_HDRGradingClutImage_ProcessPQFromLinear(float inputLinear)
{
  return ?R_HDRGradingClutImage_ProcessPQFromLinear@@YAGM@Z(inputLinear);
}

/*
==============
R_HDRGradingClutImage_ProcessPQFromPQ
==============
*/

unsigned __int16 __fastcall R_HDRGradingClutImage_ProcessPQFromPQ(float inputPQ)
{
  return ?R_HDRGradingClutImage_ProcessPQFromPQ@@YAGM@Z(inputPQ);
}

/*
==============
R_HDRGradingClutImage_GenerateImage
==============
*/

void __fastcall R_HDRGradingClutImage_GenerateImage(ImageDesc *clutImageDesc, const GfxPixelFormat pixelFormat, GfxHdrGradingClutInputColorimetry inputColorimetry)
{
  ?R_HDRGradingClutImage_GenerateImage@@YAXPEAUImageDesc@@W4GfxPixelFormat@@W4GfxHdrGradingClutInputColorimetry@@@Z(clutImageDesc, pixelFormat, inputColorimetry);
}

/*
==============
R_HDRGradingClutImage_PQFromSource
==============
*/

unsigned __int16 __fastcall R_HDRGradingClutImage_PQFromSource(float input, GfxHdrGradingClutOutputColorimetry colorimetry)
{
  return ?R_HDRGradingClutImage_PQFromSource@@YAGMW4GfxHdrGradingClutOutputColorimetry@@@Z(input, colorimetry);
}

/*
==============
R_HDRGradingClutImage_GenerateImage
==============
*/
void R_HDRGradingClutImage_GenerateImage(ImageDesc *clutImageDesc, const GfxPixelFormat pixelFormat, GfxHdrGradingClutInputColorimetry inputColorimetry)
{
  int v14; 
  int v30; 
  __int64 v94; 
  vec4_t color; 
  char v99; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
  }
  v14 = (unsigned __int8)inputColorimetry;
  R_ImageUtil_SetupDesc(clutImageDesc, pixelFormat, 1024, 32, 1);
  __asm
  {
    vmovss  xmm12, cs:__real@3f209d49
    vmovss  xmm13, cs:__real@3ea89a02
    vmovss  xmm14, cs:__real@3d315b57
    vmovss  xmm15, cs:__real@3d8d844d
    vmovss  xmm6, cs:__real@3d042108
    vmovss  xmm9, cs:__real@3c4fcdac
    vmovss  xmm10, cs:__real@3f560000
    vmovss  xmm11, cs:__real@3f800000
  }
  _EDI = 0;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  do
  {
    __asm
    {
      vmovd   xmm0, edi
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm0, xmm0, xmm6; X
      vmovaps xmm1, xmm9; Y
    }
    v30 = 0;
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vsubss  xmm1, xmm0, xmm10
      vmulss  xmm0, xmm0, cs:__real@41958000
      vmaxss  xmm2, xmm1, xmm7
      vmovss  xmm1, cs:__real@4196d000
      vsubss  xmm0, xmm1, xmm0
      vmovss  xmm1, cs:__real@40c8e06b; Y
      vdivss  xmm0, xmm2, xmm0; X
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmulss  xmm8, xmm0, cs:__real@44800000 }
    do
    {
      _EAX = v30 & 0x1F;
      __asm
      {
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm0, xmm0, xmm6; X
        vmovaps xmm1, xmm9; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm1, xmm0, xmm10
        vmulss  xmm0, xmm0, cs:__real@41958000
        vmaxss  xmm2, xmm1, xmm7
        vmovss  xmm1, cs:__real@4196d000
        vsubss  xmm0, xmm1, xmm0
        vmovss  xmm1, cs:__real@40c8e06b; Y
        vdivss  xmm0, xmm2, xmm0; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmulss  xmm7, xmm0, cs:__real@44800000 }
      _EAX = (unsigned int)v30 >> 5;
      __asm
      {
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm0, xmm0, xmm6; X
        vmovaps xmm1, xmm9; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm1, xmm0, xmm10
        vmulss  xmm0, xmm0, cs:__real@41958000
        vxorps  xmm2, xmm2, xmm2
        vmaxss  xmm2, xmm1, xmm2
        vmovss  xmm1, cs:__real@4196d000
        vsubss  xmm0, xmm1, xmm0
        vmovss  xmm1, cs:__real@40c8e06b; Y
        vdivss  xmm0, xmm2, xmm0; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmulss  xmm6, xmm0, cs:__real@44800000 }
      if ( v14 == 1 )
      {
        __asm
        {
          vmovaps xmm9, xmm7
          vmovaps xmm10, xmm8
        }
      }
      else if ( v14 == 2 )
      {
        __asm
        {
          vmulss  xmm1, xmm7, xmm12
          vmulss  xmm0, xmm8, xmm13
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm0, xmm8, cs:__real@3f6b645a
          vmulss  xmm1, xmm6, xmm14
          vaddss  xmm9, xmm2, xmm1
          vmulss  xmm1, xmm6, cs:__real@3c3ac711
          vmulss  xmm3, xmm7, xmm15
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm3, xmm8, cs:__real@3db43958
          vmulss  xmm0, xmm7, cs:__real@3c86594b
          vaddss  xmm10, xmm2, xmm1
          vmulss  xmm1, xmm6, cs:__real@3f65460b
          vaddss  xmm2, xmm3, xmm0
          vaddss  xmm6, xmm2, xmm1
        }
      }
      else
      {
        LODWORD(v94) = v14;
        __asm
        {
          vmovaps xmm9, xmm7
          vmovaps xmm10, xmm8
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_grading_clut_image.cpp", 310, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HDR Grading CLUT image inputColorimetry %d not supported", v94) )
          __debugbreak();
      }
      __asm
      {
        vmovss  dword ptr [rsp+118h+color], xmm9
        vmovss  dword ptr [rsp+118h+color+4], xmm10
        vmovss  dword ptr [rsp+118h+color+8], xmm6
        vmovss  dword ptr [rsp+118h+color+0Ch], xmm11
      }
      R_ImageUtil_SetPixel(clutImageDesc, v30, _EDI, &color);
      __asm
      {
        vmovss  xmm6, cs:__real@3d042108
        vmovss  xmm9, cs:__real@3c4fcdac
        vmovss  xmm10, cs:__real@3f560000
      }
      ++v30;
      __asm { vxorps  xmm7, xmm7, xmm7 }
    }
    while ( v30 < 1024 );
    ++_EDI;
  }
  while ( _EDI < 32 );
  _R11 = &v99;
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
    vmovaps xmm14, [rsp+118h+var_B8]
    vmovaps xmm15, [rsp+118h+var_C8]
  }
}

/*
==============
R_HDRGradingClutImage_GenerateVersionInfoImage
==============
*/
void R_HDRGradingClutImage_GenerateVersionInfoImage(ImageDesc *versionInfoImageDesc, GfxHdrGradingClutInputColorimetry inputColorimetry, GfxHdrGradingClutOutputColorimetry outputColorimetry)
{
  int i; 
  int j; 
  int VersionInfoBit; 
  __int64 v9; 
  vec4_t outClearRGBA; 
  vec4_t outSetRGBA; 

  R_ImageUtil_SetupDesc(versionInfoImageDesc, GFX_PF_R32G32B32A32F, 32, 32, 1);
  R_HDRGradingClutImage_GetVersionInfoColors(0x3038574Au, &outClearRGBA, &outSetRGBA);
  for ( i = 0; i < 32; ++i )
  {
    for ( j = 0; j < 32; ++j )
    {
      VersionInfoBit = R_HDRGradingClutImage_GetVersionInfoBit(0x3038574Au, inputColorimetry, outputColorimetry, j, i);
      v9 = VersionInfoBit;
      if ( (unsigned int)VersionInfoBit > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_grading_clut_image.cpp", 252, ASSERT_TYPE_ASSERT, "(bit >= 0 && bit < 2)", (const char *)&queryFormat, "bit >= 0 && bit < 2") )
        __debugbreak();
      R_ImageUtil_SetPixel(versionInfoImageDesc, j, i, &outClearRGBA + v9);
    }
  }
}

/*
==============
R_HDRGradingClutImage_GetVersionInfoBit
==============
*/
int R_HDRGradingClutImage_GetVersionInfoBit(unsigned int version, unsigned __int8 inputColorimetry, unsigned __int8 outputColorimetry, const int x, const int y)
{
  int v5; 
  int v6; 
  int result; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 

  v5 = x - 2;
  v6 = y - 2;
  if ( x - 2 < 0 || v6 < 0 || v5 >= 28 || v6 >= 28 )
    return 0;
  result = R_HDRGradingClutImage_GetVersionInfoFinderBit(v5, v6, 3, 3);
  if ( result < 0 )
  {
    result = R_HDRGradingClutImage_GetVersionInfoFinderBit(v5, v12, 24, 3);
    if ( result < 0 )
    {
      result = R_HDRGradingClutImage_GetVersionInfoFinderBit(v5, v13, 3, 24);
      if ( result < 0 )
      {
        v15 = x - 10;
        if ( x - 10 < 0 || v14 < 0 || v15 > 7 || v14 > 3 )
        {
          v16 = v14 - 4;
          if ( v15 < 0 || v16 < 0 || v15 > 7 || v16 > 3 )
          {
            v17 = v14 - 8;
            if ( v15 < 0 || v17 < 0 || v15 > 7 || v17 > 3 )
              return R_HDRGradingClutImage_GetVersionInfoVisualHashBit(version, x - 16, v14 - 14);
            else
              return (((outputColorimetry << 8) | (unsigned int)inputColorimetry) >> (v15 + 8 * v17)) & 1;
          }
          else
          {
            return (0x20u >> (v15 + 8 * v16)) & 1;
          }
        }
        else
        {
          return (version >> (v15 + 8 * v14)) & 1;
        }
      }
    }
  }
  return result;
}

/*
==============
R_HDRGradingClutImage_GetVersionInfoColors
==============
*/
void R_HDRGradingClutImage_GetVersionInfoColors(unsigned int version, vec4_t *outClearRGBA, vec4_t *outSetRGBA)
{
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = outSetRGBA;
  __asm { vmovaps xmmword ptr [rax-28h], xmm9 }
  _RDI = outClearRGBA;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm10
    vmovaps xmmword ptr [rax-48h], xmm11
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmmword ptr [rax-58h], xmm12
    vmovaps xmmword ptr [rax-68h], xmm13
    vmovss  xmm13, cs:__real@40c00000
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm9, xmm0, cs:__real@3f1e377a
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm9, 1
    vsubss  xmm0, xmm9, xmm2
    vmulss  xmm6, xmm0, xmm13
    vmovaps xmm0, xmm6; X
    vmovaps xmm1, xmm13; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm12, cs:__real@40400000
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm1, xmm0, xmm12
    vandps  xmm1, xmm1, xmm10
    vsubss  xmm0, xmm1, xmm11; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm11; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm0, xmm6, cs:__real@40800000; X
    vmovaps xmm1, xmm13; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm1, xmm0, xmm12
    vandps  xmm1, xmm1, xmm10
    vsubss  xmm0, xmm1, xmm11; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm11; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vaddss  xmm0, xmm6, cs:__real@40000000; X
    vmovaps xmm1, xmm13; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm1, xmm0, xmm12
    vandps  xmm1, xmm1, xmm10
    vsubss  xmm0, xmm1, xmm11; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm11; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vaddss  xmm2, xmm9, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm2, 1
    vmovss  dword ptr [rbx+8], xmm0
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm6, xmm0, xmm13
    vmovaps xmm0, xmm6; X
    vmovaps xmm1, xmm13; Y
  }
  _RBX->v[3] = 1.0;
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm1, xmm0, xmm12
    vandps  xmm1, xmm1, xmm10
    vsubss  xmm0, xmm1, xmm11; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm11; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vaddss  xmm0, xmm6, cs:__real@40800000; X
    vmovaps xmm1, xmm13; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm3, xmm0, xmm12
    vandps  xmm3, xmm3, xmm10
    vsubss  xmm0, xmm3, xmm11; val
    vmovaps xmm2, xmm11; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi+4], xmm0
    vaddss  xmm0, xmm6, cs:__real@40000000; X
    vmovaps xmm1, xmm13; Y
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vsubss  xmm3, xmm0, xmm12
    vandps  xmm3, xmm3, xmm10
    vsubss  xmm0, xmm3, xmm11; val
    vmovaps xmm2, xmm11; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v80;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-60h]
    vmovss  dword ptr [rdi+8], xmm0
  }
  _RDI->v[3] = 1.0;
}

/*
==============
R_HDRGradingClutImage_GetVersionInfoFinderBit
==============
*/
__int64 R_HDRGradingClutImage_GetVersionInfoFinderBit(const int x, const int y, const int finderPosX, const int finderPosY)
{
  signed int v4; 
  __int64 result; 
  int v6; 
  signed int v7; 

  v4 = abs32(x - finderPosX);
  result = 1i64;
  v6 = 1;
  v7 = abs32(y - finderPosY);
  while ( v4 > v6 || v7 > v6 )
  {
    ++v6;
    result = (unsigned int)(1 - result);
    if ( v6 >= 5 )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
R_HDRGradingClutImage_GetVersionInfoVisualHashBit
==============
*/
__int64 R_HDRGradingClutImage_GetVersionInfoVisualHashBit(unsigned int seed, int x, int y)
{
  unsigned int v3; 
  unsigned int v4; 
  signed int v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 

  v3 = ((((8253729 * seed + 2396403) % 0x7FFF) >> 10) & 0x3FF) - 512;
  v4 = (((8253729 * seed + 2396403) % 0x7FFF) & 0x3FF) - 512;
  v5 = 900 * abs32(x);
  v6 = (int)(900 * abs32(y)) / 1024 - 30;
  v7 = v5 / 1024 - 20 + (int)(v4 * v6) / 1024;
  v8 = 900 * ((HIDWORD(v7) ^ v7) - HIDWORD(v7));
  v9 = v6 + (int)(v3 * (v5 / 1024 - 20)) / 1024;
  v10 = (int)(900 * ((HIDWORD(v9) ^ v9) - HIDWORD(v9))) / 1024 - 30;
  v11 = v8 / 1024 - 20 + (int)(v4 * v10) / 1024;
  v12 = 900 * ((HIDWORD(v11) ^ v11) - HIDWORD(v11));
  v13 = v10 + (int)(v3 * (v8 / 1024 - 20)) / 1024;
  v14 = (int)(900 * ((HIDWORD(v13) ^ v13) - HIDWORD(v13))) / 1024 - 30;
  v15 = v12 / 1024 - 20 + (int)(v4 * v14) / 1024;
  v16 = 900 * ((HIDWORD(v15) ^ v15) - HIDWORD(v15));
  v17 = v14 + (int)(v3 * (v12 / 1024 - 20)) / 1024;
  v18 = (int)(900 * ((HIDWORD(v17) ^ v17) - HIDWORD(v17))) / 1024 - 30;
  return (((unsigned __int8)(v16 / 1024) - 20 + (unsigned __int8)((int)(v4 * v18) / 1024)) * ((unsigned __int8)(v16 / 1024) - 20 + (unsigned __int8)((int)(v4 * v18) / 1024)) + ((_BYTE)v18 + (unsigned __int8)((int)(v3 * (v16 / 1024 - 20)) / 1024)) * ((_BYTE)v18 + (unsigned __int8)((int)(v3 * (v16 / 1024 - 20)) / 1024))) & 1;
}

/*
==============
R_HDRGradingClutImage_PQFromSource
==============
*/

int __fastcall R_HDRGradingClutImage_PQFromSource(double input, GfxHdrGradingClutOutputColorimetry colorimetry)
{
  int result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( colorimetry != HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_BT2020_PQ )
  {
    if ( colorimetry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_grading_clut_image.cpp", 94, ASSERT_TYPE_ASSERT, "(colorimetry == GfxHdrGradingClutOutputColorimetry::HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_BT2020_LINEAR)", (const char *)&queryFormat, "colorimetry == GfxHdrGradingClutOutputColorimetry::HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_BT2020_LINEAR") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, cs:__real@44800000; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm0, xmm6; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3a800000; X
      vmovss  xmm1, cs:__real@3e232000; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm2, xmm0, cs:__real@4196d000
      vmulss  xmm0, xmm0, cs:__real@41958000
      vaddss  xmm0, xmm0, cs:__real@3f800000
      vaddss  xmm3, xmm2, cs:__real@3f560000
      vmovss  xmm1, cs:__real@429db000; Y
      vdivss  xmm0, xmm3, xmm0; X
    }
    *(float *)&input = powf_0(*(float *)&input, *(float *)&_XMM1);
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  input = I_fclamp(*(float *)&input, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@477fff00
    vmovaps xmm6, [rsp+48h+var_18]
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
R_HDRGradingClutImage_ProcessPQFromLinear
==============
*/

int __fastcall R_HDRGradingClutImage_ProcessPQFromLinear(double inputLinear, double _XMM1_8)
{
  int result; 

  __asm
  {
    vmovss  xmm2, cs:__real@44800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  inputLinear = I_fclamp(*(float *)&inputLinear, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3a800000; X
    vmovss  xmm1, cs:__real@3e232000; Y
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@4196d000
    vmulss  xmm0, xmm0, cs:__real@41958000
    vaddss  xmm0, xmm0, cs:__real@3f800000
    vaddss  xmm3, xmm2, cs:__real@3f560000
    vmovss  xmm1, cs:__real@429db000; Y
    vdivss  xmm0, xmm3, xmm0; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@477fff00
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
R_HDRGradingClutImage_ProcessPQFromPQ
==============
*/

int __fastcall R_HDRGradingClutImage_ProcessPQFromPQ(double inputPQ, double _XMM1_8)
{
  int result; 

  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  inputPQ = I_fclamp(*(float *)&inputPQ, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@477fff00
    vcvttss2si eax, xmm1
  }
  return result;
}

