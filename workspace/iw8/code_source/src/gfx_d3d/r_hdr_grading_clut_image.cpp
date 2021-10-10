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
  int v3; 
  float v5; 
  float v6; 
  float v7; 
  int i; 
  __m128 v9; 
  __m128 v10; 
  int v11; 
  __m128 v13; 
  float v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v19; 
  float v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v25; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  __int64 v31; 
  vec4_t color; 

  v3 = (unsigned __int8)inputColorimetry;
  R_ImageUtil_SetupDesc(clutImageDesc, pixelFormat, 1024, 32, 1);
  v5 = FLOAT_0_032258064;
  v6 = FLOAT_0_012683313;
  v7 = FLOAT_0_8359375;
  for ( i = 0; i < 32; ++i )
  {
    v10 = _mm_cvtepi32_ps((__m128i)(unsigned int)i);
    v10.m128_f32[0] = v10.m128_f32[0] * v5;
    v9 = v10;
    v11 = 0;
    v9.m128_f32[0] = powf_0(v10.m128_f32[0], v6);
    v13 = v9;
    v13.m128_f32[0] = v9.m128_f32[0] - v7;
    _XMM1 = v13;
    __asm { vmaxss  xmm2, xmm1, xmm7 }
    v15 = powf_0(*(float *)&_XMM2 / (float)(18.851562 - (float)(v9.m128_f32[0] * 18.6875)), 6.2773948) * 1024.0;
    do
    {
      v17 = _mm_cvtepi32_ps((__m128i)(v11 & 0x1F));
      v17.m128_f32[0] = v17.m128_f32[0] * v5;
      v16 = v17;
      v16.m128_f32[0] = powf_0(v17.m128_f32[0], v6);
      v19 = v16;
      v19.m128_f32[0] = v16.m128_f32[0] - v7;
      _XMM1 = v19;
      __asm { vmaxss  xmm2, xmm1, xmm7 }
      v21 = powf_0(*(float *)&_XMM2 / (float)(18.851562 - (float)(v16.m128_f32[0] * 18.6875)), 6.2773948) * 1024.0;
      v23 = _mm_cvtepi32_ps((__m128i)((unsigned int)v11 >> 5));
      v23.m128_f32[0] = v23.m128_f32[0] * v5;
      v22 = v23;
      v22.m128_f32[0] = powf_0(v23.m128_f32[0], v6);
      v25 = v22;
      v25.m128_f32[0] = v22.m128_f32[0] - v7;
      _XMM1 = v25;
      __asm { vmaxss  xmm2, xmm1, xmm2 }
      v28 = powf_0(*(float *)&_XMM2 / (float)(18.851562 - (float)(v22.m128_f32[0] * 18.6875)), 6.2773948) * 1024.0;
      v27 = v28;
      if ( v3 == 1 )
      {
        v29 = v21;
        v30 = v15;
      }
      else if ( v3 == 2 )
      {
        v29 = (float)((float)(v21 * 0.62739998) + (float)(v15 * 0.32929999)) + (float)(v28 * 0.043299999);
        v30 = (float)((float)(v21 * 0.0691) + (float)(v15 * 0.91949999)) + (float)(v28 * 0.0114);
        v27 = (float)((float)(v15 * 0.088) + (float)(v21 * 0.0164)) + (float)(v28 * 0.89560002);
      }
      else
      {
        LODWORD(v31) = v3;
        v29 = v21;
        v30 = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_grading_clut_image.cpp", 310, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HDR Grading CLUT image inputColorimetry %d not supported", v31) )
          __debugbreak();
      }
      color.v[0] = v29;
      color.v[1] = v30;
      color.v[2] = v27;
      color.v[3] = FLOAT_1_0;
      R_ImageUtil_SetPixel(clutImageDesc, v11, i, &color);
      v5 = FLOAT_0_032258064;
      v6 = FLOAT_0_012683313;
      v7 = FLOAT_0_8359375;
      ++v11;
    }
    while ( v11 < 1024 );
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
  float v5; 
  float v6; 
  float v9; 
  float v10; 
  double v11; 
  double v12; 
  double v13; 
  float v16; 
  double v17; 
  double v18; 
  float v19; 
  double v20; 

  v5 = (float)(unsigned __int16)version;
  v6 = v5 * 0.61803401;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm9, 1 }
  v9 = (float)(v6 - *(float *)&_XMM2) * 6.0;
  v10 = fmodf_0(v9, 6.0);
  v11 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 3.0) & _xmm) - 1.0, 0.0, 1.0);
  outSetRGBA->v[0] = *(float *)&v11;
  *(float *)&v11 = fmodf_0(v9 + 4.0, 6.0);
  v12 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v11 - 3.0) & _xmm) - 1.0, 0.0, 1.0);
  outSetRGBA->v[1] = *(float *)&v12;
  *(float *)&v12 = fmodf_0(v9 + 2.0, 6.0);
  v13 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v12 - 3.0) & _xmm) - 1.0, 0.0, 1.0);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm2, 1 }
  outSetRGBA->v[2] = *(float *)&v13;
  v16 = (float)((float)(v6 + 0.5) - *(float *)&_XMM1) * 6.0;
  outSetRGBA->v[3] = 1.0;
  *(float *)&v13 = fmodf_0(v16, 6.0);
  v17 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v13 - 3.0) & _xmm) - 1.0, 0.0, 1.0);
  outClearRGBA->v[0] = *(float *)&v17;
  *(float *)&v17 = fmodf_0(v16 + 4.0, 6.0);
  v18 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v17 - 3.0) & _xmm) - 1.0, 0.0, 1.0);
  outClearRGBA->v[1] = *(float *)&v18;
  LODWORD(v19) = COERCE_UNSIGNED_INT(fmodf_0(v16 + 2.0, 6.0) - 3.0) & _xmm;
  v20 = I_fclamp(v19 - 1.0, 0.0, 1.0);
  outClearRGBA->v[2] = *(float *)&v20;
  outClearRGBA->v[3] = 1.0;
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
__int64 R_HDRGradingClutImage_PQFromSource(float input, GfxHdrGradingClutOutputColorimetry colorimetry)
{
  double v2; 
  double v3; 

  if ( colorimetry != HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_BT2020_PQ )
  {
    if ( colorimetry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hdr_grading_clut_image.cpp", 94, ASSERT_TYPE_ASSERT, "(colorimetry == GfxHdrGradingClutOutputColorimetry::HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_BT2020_LINEAR)", (const char *)&queryFormat, "colorimetry == GfxHdrGradingClutOutputColorimetry::HDR_GRADING_CLUT_OUTPUT_COLORIMETRY_BT2020_LINEAR") )
      __debugbreak();
    v2 = I_fclamp(input, 0.0, 1024.0);
    *(float *)&v2 = powf_0(*(float *)&v2 * 0.0009765625, 0.15930176);
    input = powf_0((float)((float)(*(float *)&v2 * 18.851562) + 0.8359375) / (float)((float)(*(float *)&v2 * 18.6875) + 1.0), 78.84375);
  }
  v3 = I_fclamp(input, 0.0, 1.0);
  return (unsigned int)(int)(float)(*(float *)&v3 * 65535.0);
}

/*
==============
R_HDRGradingClutImage_ProcessPQFromLinear
==============
*/
__int64 R_HDRGradingClutImage_ProcessPQFromLinear(float inputLinear)
{
  double v1; 
  double v2; 

  v1 = I_fclamp(inputLinear, 0.0, 1024.0);
  *(float *)&v1 = powf_0(*(float *)&v1 * 0.0009765625, 0.15930176);
  *(float *)&v1 = powf_0((float)((float)(*(float *)&v1 * 18.851562) + 0.8359375) / (float)((float)(*(float *)&v1 * 18.6875) + 1.0), 78.84375);
  v2 = I_fclamp(*(float *)&v1, 0.0, 1.0);
  return (unsigned int)(int)(float)(*(float *)&v2 * 65535.0);
}

/*
==============
R_HDRGradingClutImage_ProcessPQFromPQ
==============
*/
__int64 R_HDRGradingClutImage_ProcessPQFromPQ(float inputPQ)
{
  double v1; 

  v1 = I_fclamp(inputPQ, 0.0, 1.0);
  return (unsigned int)(int)(float)(*(float *)&v1 * 65535.0);
}

