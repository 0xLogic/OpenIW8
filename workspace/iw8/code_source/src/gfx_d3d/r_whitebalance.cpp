/*
==============
R_WhiteBalance_Init
==============
*/

void R_WhiteBalance_Init(void)
{
  ?R_WhiteBalance_Init@@YAXXZ();
}

/*
==============
ChromaticAdaptationTransform_CAT02
==============
*/

void __fastcall ChromaticAdaptationTransform_CAT02(const vec3_t *whitePoint, tmat33_t<vec3_t> *transform)
{
  ?ChromaticAdaptationTransform_CAT02@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(whitePoint, transform);
}

/*
==============
ChromaticAdaptationTransform_sRGB
==============
*/

void __fastcall ChromaticAdaptationTransform_sRGB(const vec3_t *whitePoint, tmat33_t<vec3_t> *transform)
{
  ?ChromaticAdaptationTransform_sRGB@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(whitePoint, transform);
}

/*
==============
R_WhiteBalance_SetMatrix
==============
*/

void __fastcall R_WhiteBalance_SetMatrix(const GfxWhiteBalance *whiteBalance, const vec3_t *sRGBWhitePoint, tmat33_t<vec3_t> *matrix)
{
  ?R_WhiteBalance_SetMatrix@@YAXPEBUGfxWhiteBalance@@AEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(whiteBalance, sRGBWhitePoint, matrix);
}

/*
==============
ChromaticAdaptationTransform_CAT02
==============
*/
void ChromaticAdaptationTransform_CAT02(const vec3_t *whitePoint, tmat33_t<vec3_t> *transform)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  tmat33_t<vec3_t> in2; 
  char v12; 

  if ( whitePoint == (const vec3_t *)&v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v4 = whitePoint->v[1];
  v5 = whitePoint->v[0];
  v6 = whitePoint->v[2];
  v7 = (float)((float)(whitePoint->v[0] * 0.21259999) + (float)(v4 * 0.71520001)) + (float)(v6 * 0.0722);
  v8 = (float)(0.94927287 / (float)((float)((float)(whitePoint->v[0] * 0.39040545) + (float)(v4 * 0.54994112)) + (float)(v6 * 0.0089263199))) * v7;
  in2.m[0].v[0] = v8 * 2.8584676;
  in2.m[0].v[1] = v8 * -0.21018226;
  in2.m[0].v[2] = v8 * -0.041812003;
  v9 = (float)(1.0353711 / (float)((float)((float)(v5 * 0.070841588) + (float)(v4 * 0.96317178)) + (float)(v6 * 0.00135775))) * v7;
  in2.m[1].v[0] = v9 * -1.6287878;
  in2.m[1].v[1] = v9 * 1.1582009;
  in2.m[1].v[2] = v9 * -0.11816935;
  v10 = (float)(1.0873741 / (float)((float)((float)(v5 * 0.023108181) + (float)(v4 * 0.12802079)) + (float)(v6 * 0.93624514))) * v7;
  in2.m[2].v[0] = v10 * -0.024891036;
  in2.m[2].v[2] = v10 * 1.0686663;
  in2.m[2].v[1] = v10 * 0.00032428149;
  MatrixMultiply(&s_sRGBToCAT02LMS, &in2, transform);
}

/*
==============
ChromaticAdaptationTransform_sRGB
==============
*/
void ChromaticAdaptationTransform_sRGB(const vec3_t *whitePoint, tmat33_t<vec3_t> *transform)
{
  float v2; 
  float v3; 
  float v4; 
  vec3_t scale; 

  v2 = whitePoint->v[1];
  v3 = whitePoint->v[2];
  v4 = (float)((float)(v2 * 0.71520001) + (float)(whitePoint->v[0] * 0.21259999)) + (float)(v3 * 0.0722);
  scale.v[0] = v4 / whitePoint->v[0];
  scale.v[2] = v4 / v3;
  scale.v[1] = v4 / v2;
  MatrixScale(&scale, transform);
}

/*
==============
ColorTemperatureToDIlluminantChromaticity
==============
*/
void ColorTemperatureToDIlluminantChromaticity(float colorTempK, vec2_t *chroma)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 

  v2 = 1.0 / colorTempK;
  v3 = v2 * v2;
  v4 = (float)(v2 * v2) * v2;
  if ( colorTempK > 7000.0 )
    v5 = (float)((float)((float)(v3 * 1901800.0) - (float)(v4 * 2006400000.0)) + (float)(v2 * 247.48)) + 0.23704;
  else
    v5 = (float)((float)((float)(v3 * 2967800.0) - (float)(v4 * 4607000100.0)) + (float)(v2 * 99.110001)) + 0.244063;
  chroma->v[0] = v5;
  chroma->v[1] = (float)((float)(2.8699999 - (float)(chroma->v[0] * 3.0)) * chroma->v[0]) - 0.27500001;
}

/*
==============
IlluminantChromaticityGreenMagentaTint
==============
*/
void IlluminantChromaticityGreenMagentaTint(vec2_t *chroma, float colorTempK, float tint, bool useDIlluminant)
{
  float v5; 
  __int128 v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  float v21; 
  float v25; 
  float v26; 
  float v27; 
  double v28; 
  float v29; 
  float v30; 
  float c; 
  vec2_t chromaa; 

  v5 = colorTempK + 1.0;
  if ( useDIlluminant )
  {
    ColorTemperatureToDIlluminantChromaticity(v5, &chromaa);
    v7 = LODWORD(chromaa.v[1]);
    v8 = chromaa.v[0];
  }
  else
  {
    v9 = 1.0 / v5;
    v10 = v9 * v9;
    v11 = (float)(v9 * v9) * v9;
    v12 = v11 * (float)(v9 * v9);
    v13 = LODWORD(FLOAT_0_243185);
    v8 = (float)((float)((float)((float)(0.243185 - (float)(v12 * 1.8738099e15)) + (float)((float)(v10 * v10) * 5.8426602e12)) - (float)(v11 * 6615550000.0)) + (float)(v10 * 2888860.0)) + (float)((float)(1.0 / v5) * 164.35201);
    *(float *)&v13 = (float)((float)(v8 * 2.8780601) - 0.291251) - (float)((float)((float)((float)((float)((float)(v8 * 0.70877975) - (float)((float)(v8 * v12) * 5.4613505e15)) + (float)((float)(v8 * (float)(v10 * v10)) * 1.7028843e13)) - (float)((float)(v8 * v11) * 1.9281484e10)) + (float)((float)(v8 * v10) * 8419785.0)) + (float)((float)(v8 * (float)(1.0 / v5)) * 479.01544));
    v7 = v13;
  }
  v14 = chroma->v[1];
  v15 = 1.0 / (float)((float)(1.5 - chroma->v[0]) + (float)(v14 * 6.0));
  v16 = (float)(chroma->v[0] * 2.0) * v15;
  v17 = (float)(v14 * 3.0) * v15;
  v18 = (float)(1.5 - v8) + (float)(*(float *)&v7 * 6.0);
  v19 = v7;
  v20 = (float)((float)(*(float *)&v7 * 3.0) / v18) - v17;
  v21 = (float)((float)(v8 * 2.0) / v18) - v16;
  *(float *)&v19 = fsqrt((float)(v20 * v20) + (float)(v21 * v21));
  _XMM3 = v19;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm14, xmm0
  }
  *(float *)&v19 = v21 * (float)(1.0 / *(float *)&_XMM0);
  v25 = v20 * (float)(1.0 / *(float *)&_XMM0);
  FastSinCos(-1.5707964, (float *)&chromaa, &c);
  v26 = (float)((float)(*(float *)&v19 * c) - (float)(v25 * chromaa.v[0])) * (float)(tint * 0.00033333333);
  v27 = (float)(*(float *)&v19 * chromaa.v[0]) + (float)(v25 * c);
  *(float *)&_XMM3 = (float)((float)(v26 + v16) - (float)((float)((float)(v27 * (float)(tint * 0.00033333333)) + v17) * 4.0)) + 2.0;
  *(float *)&v19 = (float)((float)(v26 + v16) * 1.5) / *(float *)&_XMM3;
  chroma->v[1] = (float)((float)(v27 * (float)(tint * 0.00033333333)) + v17) / *(float *)&_XMM3;
  chroma->v[0] = *(float *)&v19;
  *(double *)&_XMM0 = I_fclamp(*(float *)&v19, 0.000001, 0.99999899);
  chroma->v[0] = *(float *)&_XMM0;
  v28 = I_fclamp(chroma->v[1], 0.000001, 0.99999899);
  v29 = chroma->v[0];
  chroma->v[1] = *(float *)&v28;
  if ( (float)(v29 + *(float *)&v28) > 0.99999899 )
  {
    v30 = 0.99999899 / (float)(v29 + *(float *)&v28);
    chroma->v[0] = v29 * v30;
    chroma->v[1] = *(float *)&v28 * v30;
  }
}

/*
==============
R_WhiteBalance_Init
==============
*/
void R_WhiteBalance_Init(void)
{
  if ( !r_whiteBalanceTweaks )
  {
    Dvar_BeginPermanentRegistration();
    r_whiteBalanceTweaks = Dvar_RegisterBool("OLSLLQSNS", 0, 4u, "Use white balance tweaks");
    r_whiteBalanceMethod = Dvar_RegisterEnum("OLLPQNLOPO", methodNames, 0, 0x44u, "White balance method");
    r_whiteBalanceIlluminant = Dvar_RegisterEnum("MNOQRLLRTQ", illuminantNames, 0, 0x44u, "White balance illuminant");
    r_whiteBalanceColorTempK = Dvar_RegisterFloat("NOTKKKNTQN", 5000.0, 2000.0, 40000.0, 0x45u, "White balance color temperature (2000K to 40000K) - only 4000K to 25000K is valid for D Custom");
    r_whiteBalanceGreenMagentaShift = Dvar_RegisterFloat("NNTLNTPRNL", 0.0, -1.0, 1.0, 0x45u, "White balance green / magenta shift");
    Dvar_EndPermanentRegistration();
  }
}

/*
==============
R_WhiteBalance_SetMatrix
==============
*/
void R_WhiteBalance_SetMatrix(const GfxWhiteBalance *whiteBalance, const vec3_t *sRGBWhitePoint, tmat33_t<vec3_t> *matrix)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int64 illuminant; 
  __int64 method; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  tmat33_t<vec3_t> *p_in2; 
  tmat33_t<vec3_t> *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int64 v23; 
  float v24; 
  float cct; 
  bool v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float colorTempK; 
  float colorGreenMagentaShift; 
  float v34; 
  const tmat33_t<vec3_t> *v35; 
  vec3_t out; 
  vec3_t in1; 
  vec3_t v38; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> v40; 
  tmat33_t<vec3_t> v41; 
  tmat33_t<vec3_t> v42; 
  __int128 v43; 
  _OWORD v44[5]; 

  illuminant = whiteBalance->illuminant;
  method = whiteBalance->method;
  if ( (_DWORD)illuminant )
  {
    if ( (_DWORD)illuminant == 1 )
    {
      ColorTemperatureToDIlluminantChromaticity(whiteBalance->colorTempK, (vec2_t *)&out);
      v24 = *(float *)(v23 + 12);
      cct = *(float *)(v23 + 8);
      v26 = 1;
    }
    else
    {
      if ( (_DWORD)illuminant == 2 )
      {
        v44[1] = v3;
        v44[0] = v4;
        v43 = v5;
        v27 = 1.0 / whiteBalance->colorTempK;
        v28 = v27 * v27;
        v29 = v27 * (float)(v27 * v27);
        v30 = (float)(v27 * v28) * v28;
        v31 = (float)((float)((float)((float)(0.243185 - (float)(v30 * 1.8738099e15)) + (float)((float)(v28 * v28) * 5.8426602e12)) - (float)(v29 * 6615550000.0)) + (float)(v28 * 2888860.0)) + (float)(v27 * 164.35201);
        colorTempK = whiteBalance->colorTempK;
        colorGreenMagentaShift = whiteBalance->colorGreenMagentaShift;
        out.v[1] = (float)((float)(v31 * 2.8780601) - 0.291251) - (float)((float)((float)((float)((float)((float)(v31 * 0.70877975) - (float)((float)(v31 * v30) * 5.4613505e15)) + (float)((float)(v31 * (float)(v28 * v28)) * 1.7028843e13)) - (float)((float)(v31 * v29) * 1.9281484e10)) + (float)((float)(v31 * v28) * 8419785.0)) + (float)((float)(v31 * v27) * 479.01544));
        out.v[0] = v31;
        IlluminantChromaticityGreenMagentaTint((vec2_t *)&out, colorTempK, colorGreenMagentaShift, 0);
        goto LABEL_16;
      }
      v24 = whiteBalance->colorGreenMagentaShift;
      v26 = 0;
      cct = illuminants[illuminant].cct;
      out.v[0] = illuminants[illuminant].x2;
      out.v[1] = illuminants[illuminant].y2;
    }
    IlluminantChromaticityGreenMagentaTint((vec2_t *)&out, cct, v24, v26);
  }
  else
  {
    if ( !(_DWORD)method )
    {
      v20 = sRGBWhitePoint->v[1];
      v21 = sRGBWhitePoint->v[2];
      v22 = (float)((float)(v20 * 0.71520001) + (float)(sRGBWhitePoint->v[0] * 0.21259999)) + (float)(v21 * 0.0722);
      out.v[0] = v22 / sRGBWhitePoint->v[0];
      out.v[2] = v22 / v21;
      out.v[1] = v22 / v20;
      MatrixScale(&out, matrix);
      return;
    }
    if ( (_DWORD)method == 1 )
    {
      if ( sRGBWhitePoint == &v38 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v10 = sRGBWhitePoint->v[1];
      v11 = sRGBWhitePoint->v[0];
      v12 = sRGBWhitePoint->v[2];
      v13 = (float)((float)(v10 * 0.71520001) + (float)(sRGBWhitePoint->v[0] * 0.21259999)) + (float)(v12 * 0.0722);
      v14 = (float)(0.94927287 / (float)((float)((float)(v10 * 0.54994112) + (float)(sRGBWhitePoint->v[0] * 0.39040545)) + (float)(v12 * 0.0089263199))) * v13;
      in2.m[0].v[0] = v14 * 2.8584676;
      in2.m[0].v[1] = v14 * -0.21018226;
      in2.m[0].v[2] = v14 * -0.041812003;
      v15 = (float)(1.0353711 / (float)((float)((float)(v10 * 0.96317178) + (float)(v11 * 0.070841588)) + (float)(v12 * 0.00135775))) * v13;
      in2.m[1].v[0] = v15 * -1.6287878;
      in2.m[1].v[1] = v15 * 1.1582009;
      in2.m[1].v[2] = v15 * -0.11816935;
      v16 = (float)(1.0873741 / (float)((float)((float)(v10 * 0.12802079) + (float)(v11 * 0.023108181)) + (float)(v12 * 0.93624514))) * v13;
      in2.m[2].v[0] = v16 * -0.024891036;
      in2.m[2].v[2] = v16 * 1.0686663;
      in2.m[2].v[1] = v16 * 0.00032428149;
      p_in2 = &in2;
      v18 = &s_sRGBToCAT02LMS;
      goto LABEL_22;
    }
    MatrixTransformVector(sRGBWhitePoint, &s_sRGBD65ToXYZ, &out);
    v19 = 1.0 / (float)((float)(out.v[1] + out.v[0]) + out.v[2]);
    out.v[0] = v19 * out.v[0];
    out.v[1] = v19 * out.v[1];
  }
LABEL_16:
  if ( (unsigned int)method >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_whitebalance.cpp", 307, ASSERT_TYPE_ASSERT, "(unsigned)( crd ) < (unsigned)( CRD_COUNT )", "crd doesn't index CRD_COUNT\n\t%i not in [0, %i)", method, 7) )
    __debugbreak();
  if ( (_DWORD)method == 6 )
  {
    MatrixIdentity33(matrix);
    return;
  }
  v34 = out.v[0];
  in1.v[0] = FLOAT_0_95046997;
  out.v[0] = out.v[0] / out.v[1];
  in1.v[2] = FLOAT_1_0888;
  v35 = &s_XYZToCRD[method];
  out.v[2] = (float)((float)(1.0 - v34) - out.v[1]) / out.v[1];
  in1.v[1] = FLOAT_1_0;
  out.v[1] = FLOAT_1_0;
  MatrixTransformVector(&in1, v35, &v38);
  MatrixTransformVector(&out, v35, &in1);
  MatrixIdentity33(&in2);
  in2.m[0].v[0] = v38.v[0] / in1.v[0];
  in2.m[2].v[2] = v38.v[2] / in1.v[2];
  in2.m[1].v[1] = v38.v[1] / in1.v[1];
  MatrixInverse(v35, &v41);
  MatrixMultiply(&s_sRGBD50ToXYZ, v35, &v40);
  MatrixMultiply(&v40, &in2, &v42);
  MatrixMultiply(&v42, &v41, &v40);
  p_in2 = &s_XYZTosRGBD65;
  v18 = &v40;
LABEL_22:
  MatrixMultiply(v18, p_in2, matrix);
}

