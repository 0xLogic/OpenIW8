/*
==============
EDTAA3_edtaa3
==============
*/

void __fastcall EDTAA3_edtaa3(float *img, float *gx, float *gy, int w, int h, __int16 *distx, __int16 *disty, float *dist)
{
  ?EDTAA3_edtaa3@@YAXPEAM00HHPEAF10@Z(img, gx, gy, w, h, distx, disty, dist);
}

/*
==============
EDTAA3_edgedf
==============
*/

double __fastcall EDTAA3_edgedf(float gx, float gy, float a)
{
  double result; 

  *(float *)&result = ?EDTAA3_edgedf@@YAMMMM@Z(gx, gy, a);
  return result;
}

/*
==============
EDTAA3_computegradient
==============
*/

void __fastcall EDTAA3_computegradient(float *img, int w, int h, float *gx, float *gy)
{
  ?EDTAA3_computegradient@@YAXPEAMHH00@Z(img, w, h, gx, gy);
}

/*
==============
EDTAA3_computegradient
==============
*/
void EDTAA3_computegradient(float *img, int w, int h, float *gx, float *gy)
{
  int v5; 
  int v6; 
  int v9; 
  int v10; 
  signed __int64 v11; 
  signed __int64 v12; 
  float *v13; 
  float v14; 
  __int64 v15; 
  int v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  v5 = h - 1;
  v6 = 1;
  if ( h - 1 > 1 )
  {
    v9 = w - 1;
    do
    {
      v10 = 1;
      if ( v9 > 1 )
      {
        v11 = (char *)img - (char *)gx;
        v12 = (char *)gy - (char *)gx;
        v13 = &gx[w * v6 + 1];
        do
        {
          v14 = *(float *)((char *)v13 + v11);
          if ( v14 > 0.0 && v14 < 1.0 )
          {
            v15 = v10 + w * (v6 - 1);
            v16 = v10 + w * (v6 + 1);
            *v13 = (float)((float)(img[v15 + 1] - (float)((float)((float)(1.4142137 * *(float *)((char *)v13 + v11 - 4)) + img[v15 - 1]) + img[v16 - 1])) + (float)(1.4142137 * *(float *)((char *)v13 + v11 + 4))) + img[v16 + 1];
            v17 = (float)((float)(img[v15 + 1] - (float)((float)((float)(1.4142137 * img[v15]) + img[v15 - 1]) + img[v16 - 1])) + (float)(1.4142137 * img[v16])) + img[v16 + 1];
            *(float *)((char *)v13 + v12) = v17;
            v18 = *v13;
            v19 = (float)(v17 * v17) + (float)(v18 * v18);
            if ( v19 > 0.0 )
            {
              v20 = 1.0 / fsqrt(v19);
              *v13 = v18 * v20;
              *(float *)((char *)v13 + v12) = v20 * *(float *)((char *)v13 + v12);
            }
          }
          ++v10;
          ++v13;
        }
        while ( v10 < v9 );
      }
      ++v6;
    }
    while ( v6 < v5 );
  }
}

/*
==============
EDTAA3_edgedf
==============
*/

float __fastcall EDTAA3_edgedf(float gx, double gy, float a)
{
  float v4; 
  __int128 v5; 
  float v9; 
  float v10; 

  if ( gx == 0.0 || *(float *)&gy == 0.0 )
    return 0.5 - a;
  v4 = fsqrt((float)(gx * gx) + (float)(*(float *)&gy * *(float *)&gy));
  if ( v4 > 0.0 )
  {
    v5 = *(_OWORD *)&gy;
    *(float *)&v5 = *(float *)&gy * (float)(1.0 / v4);
    *(_OWORD *)&gy = v5;
  }
  _XMM1 = *(_OWORD *)&gy & _xmm;
  __asm
  {
    vmaxss  xmm7, xmm1, xmm5
    vminss  xmm2, xmm1, xmm5
  }
  v9 = *(float *)&_XMM2 * 0.5;
  v10 = (float)(*(float *)&_XMM2 * 0.5) / *(float *)&_XMM7;
  if ( a < v10 )
    return (float)((float)(*(float *)&_XMM7 * 0.5) + v9) - fsqrt((float)((float)(*(float *)&_XMM7 * 2.0) * *(float *)&_XMM2) * a);
  if ( a >= (float)(1.0 - v10) )
    return fsqrt((float)((float)(*(float *)&_XMM7 * 2.0) * *(float *)&_XMM2) * (float)(1.0 - a)) - (float)((float)(*(float *)&_XMM7 * 0.5) + v9);
  return (float)(0.5 - a) * *(float *)&_XMM7;
}

/*
==============
EDTAA3_edtaa3
==============
*/
void EDTAA3_edtaa3(float *img, float *gx, float *gy, int w, int h, __int16 *distx, __int16 *disty, float *dist)
{
  int v10; 
  int v11; 
  __int16 *v12; 
  float *v13; 
  signed __int64 v14; 
  __int64 v15; 
  signed __int64 v16; 
  signed __int64 v17; 
  float v18; 
  double v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  float *v24; 
  int v25; 
  float v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  float v34; 
  __m128 v37; 
  __int64 v43; 
  int v44; 
  unsigned int v45; 
  int v46; 
  unsigned int v47; 
  float v51; 
  __m128 v54; 
  __int16 *v60; 
  int v61; 
  __int64 v62; 
  float *v63; 
  __int16 *v64; 
  char *v65; 
  float v66; 
  __int16 v67; 
  int v68; 
  unsigned int v69; 
  float v73; 
  __m128 v76; 
  int v82; 
  unsigned int v83; 
  int v84; 
  unsigned int v85; 
  float v89; 
  __m128 v92; 
  unsigned int v98; 
  int v99; 
  unsigned int v100; 
  float v104; 
  __m128 v107; 
  int v113; 
  unsigned int v114; 
  int v115; 
  unsigned int v116; 
  float v120; 
  __m128 v123; 
  float v129; 
  __int16 *v130; 
  __int16 *v131; 
  int v132; 
  int v133; 
  unsigned int v134; 
  float v138; 
  __m128 v141; 
  __int64 v147; 
  int v148; 
  int v149; 
  unsigned int v150; 
  unsigned int v151; 
  float v155; 
  __m128 v158; 
  __int16 *v164; 
  __int64 v165; 
  int v166; 
  unsigned int v167; 
  unsigned int v168; 
  float v172; 
  __m128 v175; 
  __int16 *v181; 
  float *v182; 
  int v183; 
  float *v184; 
  __int16 *v185; 
  int v186; 
  char *v187; 
  float v188; 
  __int16 v189; 
  int v190; 
  unsigned int v191; 
  float v195; 
  __m128 v198; 
  int v204; 
  float *v205; 
  __int16 *v206; 
  int v207; 
  float v208; 
  __int16 *v209; 
  __int64 v210; 
  int v211; 
  unsigned int v212; 
  unsigned int v213; 
  float v217; 
  __m128 v220; 
  int v226; 
  int v227; 
  int v228; 
  unsigned int v229; 
  unsigned int v230; 
  float v234; 
  __m128 v237; 
  int v243; 
  __int64 v244; 
  __int16 *v245; 
  int v246; 
  char *v247; 
  float v248; 
  __int16 v249; 
  int v250; 
  unsigned int v251; 
  float v255; 
  __m128 v258; 
  int v264; 
  unsigned int v265; 
  int v266; 
  unsigned int v267; 
  float v271; 
  __m128 v274; 
  unsigned int v280; 
  int v281; 
  unsigned int v282; 
  float v286; 
  __m128 v289; 
  __int64 v295; 
  int v296; 
  int v297; 
  unsigned int v298; 
  unsigned int v299; 
  float v303; 
  __m128 v306; 
  float v312; 
  __int16 v313; 
  int v314; 
  unsigned int v315; 
  float v319; 
  __m128 v322; 
  float *v328; 
  __int64 v329; 
  int v330; 
  int v331; 
  unsigned int v332; 
  unsigned int v333; 
  float v337; 
  __m128 v340; 
  __int16 *v346; 
  __int64 v347; 
  int v348; 
  unsigned int v349; 
  unsigned int v350; 
  float v354; 
  __m128 v357; 
  int v363; 
  __int64 v364; 
  signed __int64 v365; 
  float *v366; 
  __int16 *v367; 
  float v368; 
  __int16 v369; 
  int v370; 
  unsigned int v371; 
  float v375; 
  __m128 v378; 
  bool v384; 
  int v385; 
  int v386; 
  int v387; 
  int v388; 
  int v389; 
  int v390; 
  int v391; 
  char *v392; 
  __int64 v393; 
  char *v394; 
  __int64 v395; 
  __int64 v396; 
  char *v397; 
  char *v398; 
  __int64 v399; 
  int v401; 

  v401 = w;
  v10 = -w;
  v11 = 0;
  v387 = -w;
  v388 = 1 - w;
  v391 = w + 1;
  v389 = ~w;
  if ( h * w > 0 )
  {
    v12 = disty;
    v13 = dist;
    v14 = (char *)img - (char *)gy;
    v15 = (unsigned int)(h * w);
    v16 = (char *)gx - (char *)gy;
    v17 = (char *)gy - (char *)dist;
    do
    {
      *(__int16 *)((char *)v12 + (char *)distx - (char *)disty) = 0;
      *v12 = 0;
      v18 = *(float *)((char *)v13 + v17 + v14);
      if ( v18 > 0.0 )
      {
        if ( v18 >= 1.0 )
        {
          *v13 = 0.0;
        }
        else
        {
          v19 = EDTAA3_edgedf(*(float *)((char *)v13 + v17 + v16), *(float *)((char *)v13 + v17), v18);
          *v13 = *(float *)&v19;
        }
      }
      else
      {
        *v13 = 1000000.0;
      }
      ++v12;
      ++v13;
      --v15;
    }
    while ( v15 );
    w = v401;
    v10 = v387;
  }
  v20 = h;
  v21 = h - 2;
  do
  {
    v22 = 1;
    v385 = 1;
    if ( v20 > 1 )
    {
      v23 = w - 2;
      v390 = w - 2;
      do
      {
        v24 = dist;
        v25 = w * v22;
        v26 = dist[w * v22];
        if ( v26 <= 0.0 )
          goto LABEL_33;
        v27 = v25 + v10;
        v28 = distx[v25 + v10];
        v29 = disty[v25 + v10];
        v30 = v29 + 1;
        _XMM0 = LODWORD(img[v27 - w * v29 - v28]);
        __asm
        {
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
        }
        if ( *(float *)&_XMM2 == 0.0 )
        {
          v34 = FLOAT_1000000_0;
        }
        else
        {
          _XMM4 = _mm_cvtepi32_ps((__m128i)v28);
          _XMM3 = _mm_cvtepi32_ps((__m128i)v30);
          v37 = _XMM3;
          v37.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
          _XMM6 = v37;
          __asm
          {
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          w = v401;
          v34 = *(float *)&_XMM0 + v37.m128_f32[0];
        }
        if ( v34 < (float)(v26 - 0.001) )
        {
          distx[v25] = v28;
          if ( v30 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v30, "signed", (int)v30) )
            __debugbreak();
          v11 = 1;
          w = v401;
          v26 = v34;
          disty[v25] = v30;
          dist[v25] = v34;
        }
        v43 = v25 + v388;
        v44 = distx[v43];
        v45 = v44 - 1;
        v46 = disty[v43];
        v47 = v46 + 1;
        _XMM0 = LODWORD(img[v25 + v388 - w * v46 - v44]);
        __asm
        {
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
        }
        if ( *(float *)&_XMM2 == 0.0 )
        {
          v51 = FLOAT_1000000_0;
        }
        else
        {
          _XMM4 = _mm_cvtepi32_ps((__m128i)v45);
          _XMM3 = _mm_cvtepi32_ps((__m128i)v47);
          v54 = _XMM3;
          v54.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
          _XMM6 = v54;
          __asm
          {
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          w = v401;
          v51 = *(float *)&_XMM0 + v54.m128_f32[0];
        }
        if ( v51 >= (float)(v26 - 0.001) )
        {
LABEL_33:
          v60 = disty;
        }
        else
        {
          if ( v45 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v45, "signed", (int)v45) )
            __debugbreak();
          distx[v25] = v45;
          if ( v47 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v47, "signed", (int)v47) )
            __debugbreak();
          v60 = disty;
          v11 = 1;
          w = v401;
          disty[v25] = v47;
          dist[v25] = v51;
        }
        v61 = v25 + 1;
        if ( w - 1 > 1 )
        {
          v62 = (unsigned int)(w - 2);
          v63 = &dist[v61];
          v64 = &v60[v61 - 1];
          v399 = v389;
          v398 = (char *)distx + v399 * 2 - (_QWORD)v60 + 2;
          v393 = v387;
          v392 = (char *)distx + v393 * 2 - (_QWORD)v60 + 2;
          v396 = v388;
          v65 = (char *)((char *)distx - (char *)v60);
          v394 = (char *)distx + v396 * 2 - (_QWORD)v60 + 2;
          while ( 1 )
          {
            v66 = *v63;
            if ( *v63 > 0.0 )
            {
              v67 = *v64;
              v68 = *(__int16 *)((char *)v64 + (_QWORD)v65);
              v69 = v68 + 1;
              _XMM0 = LODWORD(img[v61 - w * *v64 - v68 - 1]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v73 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v69);
                _XMM3 = _mm_cvtepi32_ps((__m128i)(unsigned int)*v64);
                v76 = _XMM3;
                v76.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v76;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v73 = *(float *)&_XMM0 + v76.m128_f32[0];
              }
              if ( v73 < (float)(v66 - 0.001) )
              {
                if ( v69 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v69, "signed", (int)v69) )
                  __debugbreak();
                *(__int16 *)((char *)v64 + (_QWORD)v65 + 2) = v69;
                v11 = 1;
                v64[1] = v67;
                *v63 = v73;
                v66 = v73;
              }
              v82 = *(__int16 *)((char *)v64 + (_QWORD)v398);
              v83 = v82 + 1;
              v84 = v64[v399 + 1];
              v85 = v84 + 1;
              _XMM0 = LODWORD(img[v389 + v61 - v401 * v84 - v82]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v89 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v83);
                _XMM3 = _mm_cvtepi32_ps((__m128i)v85);
                v92 = _XMM3;
                v92.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v92;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v89 = *(float *)&_XMM0 + v92.m128_f32[0];
              }
              if ( v89 < (float)(v66 - 0.001) )
              {
                if ( v83 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v83, "signed", (int)v83) )
                  __debugbreak();
                *(__int16 *)((char *)v64 + (_QWORD)v65 + 2) = v83;
                if ( v85 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v85, "signed", (int)v85) )
                  __debugbreak();
                v64[1] = v85;
                v11 = 1;
                *v63 = v89;
                v66 = v89;
              }
              v98 = *(__int16 *)((char *)v64 + (_QWORD)v392);
              v99 = v64[v393 + 1];
              v100 = v99 + 1;
              _XMM0 = LODWORD(img[v387 + v61 - v401 * v99 - v98]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v104 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v98);
                _XMM3 = _mm_cvtepi32_ps((__m128i)v100);
                v107 = _XMM3;
                v107.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v107;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v104 = *(float *)&_XMM0 + v107.m128_f32[0];
              }
              if ( v104 < (float)(v66 - 0.001) )
              {
                *(__int16 *)((char *)v64 + (_QWORD)v65 + 2) = v98;
                if ( v100 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v100, "signed", (int)v100) )
                  __debugbreak();
                v64[1] = v100;
                v11 = 1;
                *v63 = v104;
                v66 = v104;
              }
              v113 = *(__int16 *)((char *)v64 + (_QWORD)v394);
              v114 = v113 - 1;
              v115 = v64[v396 + 1];
              v116 = v115 + 1;
              _XMM0 = LODWORD(img[v388 + v61 - v401 * v115 - v113]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v120 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v114);
                _XMM3 = _mm_cvtepi32_ps((__m128i)v116);
                v123 = _XMM3;
                v123.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v123;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v120 = *(float *)&_XMM0 + v123.m128_f32[0];
              }
              if ( v120 < (float)(v66 - 0.001) )
              {
                if ( v114 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v114, "signed", (int)v114) )
                  __debugbreak();
                *(__int16 *)((char *)v64 + (_QWORD)v65 + 2) = v114;
                if ( v116 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v116, "signed", (int)v116) )
                  __debugbreak();
                v64[1] = v116;
                v11 = 1;
                *v63 = v120;
              }
            }
            ++v61;
            ++v64;
            ++v63;
            if ( !--v62 )
              break;
            w = v401;
          }
          v22 = v385;
          v23 = v390;
          v24 = dist;
        }
        v129 = v24[v61];
        if ( v129 <= 0.0 )
          goto LABEL_107;
        v130 = disty;
        v131 = distx;
        v132 = disty[v61 - 1];
        v133 = distx[v61 - 1];
        v134 = v133 + 1;
        _XMM0 = LODWORD(img[v61 - v401 * v132 - v133 - 1]);
        __asm
        {
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
        }
        if ( *(float *)&_XMM2 == 0.0 )
        {
          v138 = FLOAT_1000000_0;
        }
        else
        {
          _XMM4 = _mm_cvtepi32_ps((__m128i)v134);
          _XMM3 = _mm_cvtepi32_ps((__m128i)(unsigned int)disty[v61 - 1]);
          v141 = _XMM3;
          v141.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
          _XMM6 = v141;
          __asm
          {
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v130 = disty;
          v131 = distx;
          v138 = *(float *)&_XMM0 + v141.m128_f32[0];
        }
        if ( v138 < (float)(v129 - 0.001) )
        {
          if ( v134 + 0x8000 > 0xFFFF )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v134, "signed", (int)v134) )
              __debugbreak();
            v130 = disty;
            v131 = distx;
          }
          v11 = 1;
          v131[v61] = v134;
          v130[v61] = v132;
          v129 = v138;
          dist[v61] = v138;
        }
        v147 = v61 + v389;
        v148 = v130[v147];
        v149 = v131[v147];
        v150 = v148 + 1;
        v151 = v149 + 1;
        _XMM0 = LODWORD(img[v61 + v389 - v401 * v148 - v149]);
        __asm
        {
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
        }
        if ( *(float *)&_XMM2 == 0.0 )
        {
          v155 = FLOAT_1000000_0;
        }
        else
        {
          _XMM4 = _mm_cvtepi32_ps((__m128i)v151);
          _XMM3 = _mm_cvtepi32_ps((__m128i)v150);
          v158 = _XMM3;
          v158.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
          _XMM6 = v158;
          __asm
          {
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v130 = disty;
          v155 = *(float *)&_XMM0 + v158.m128_f32[0];
        }
        if ( v155 < (float)(v129 - 0.001) )
        {
          if ( v151 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v151, "signed", (int)v151) )
            __debugbreak();
          distx[v61] = v151;
          if ( v150 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v150, "signed", (int)v150) )
            __debugbreak();
          v130 = disty;
          v11 = 1;
          v129 = v155;
          disty[v61] = v150;
          dist[v61] = v155;
        }
        v164 = distx;
        v165 = v61 + v387;
        v166 = v130[v165];
        v167 = distx[v165];
        v168 = v166 + 1;
        _XMM0 = LODWORD(img[v61 + v387 - v401 * v166 - v167]);
        __asm
        {
          vminss  xmm1, xmm0, xmm12
          vmaxss  xmm2, xmm1, xmm8; a
        }
        if ( *(float *)&_XMM2 == 0.0 )
        {
          v172 = FLOAT_1000000_0;
        }
        else
        {
          _XMM4 = _mm_cvtepi32_ps((__m128i)v167);
          _XMM3 = _mm_cvtepi32_ps((__m128i)v168);
          v175 = _XMM3;
          v175.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
          _XMM6 = v175;
          __asm
          {
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm1, xmm3, xmm5, xmm0; gy
            vcmpeqss xmm0, xmm6, xmm8
            vblendvps xmm0, xmm4, xmm9, xmm0; gx
          }
          *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v164 = distx;
          v172 = *(float *)&_XMM0 + v175.m128_f32[0];
        }
        if ( v172 >= (float)(v129 - 0.001) )
        {
LABEL_107:
          v181 = disty;
          v182 = dist;
        }
        else
        {
          v164[v61] = v167;
          if ( v168 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v168, "signed", (int)v168) )
            __debugbreak();
          v181 = disty;
          v11 = 1;
          v182 = dist;
          disty[v61] = v168;
          dist[v61] = v172;
        }
        w = v401;
        v385 = ++v22;
        v183 = v401 * v22 - 2;
        if ( v23 >= 0 )
        {
          v184 = &v182[v183];
          v185 = &v181[v183 + 1];
          v186 = v183 + v401 * (1 - v22);
          v187 = (char *)((char *)distx - (char *)v181);
          do
          {
            v188 = *v184;
            if ( *v184 > 0.0 )
            {
              v189 = *v185;
              v190 = *(__int16 *)((char *)v185 + (_QWORD)v187);
              v191 = v190 - 1;
              _XMM0 = LODWORD(img[v183 - w * *v185 - v190 + 1]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v195 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v191);
                _XMM3 = _mm_cvtepi32_ps((__m128i)(unsigned int)*v185);
                v198 = _XMM3;
                v198.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v198;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v195 = *(float *)&_XMM0 + v198.m128_f32[0];
              }
              if ( v195 < (float)(v188 - 0.001) )
              {
                if ( v191 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v191, "signed", (int)v191) )
                  __debugbreak();
                *(__int16 *)((char *)v185 + (_QWORD)v187 - 2) = v191;
                v11 = 1;
                *(v185 - 1) = v189;
                *v184 = v195;
              }
            }
            w = v401;
            --v183;
            --v185;
            --v184;
            --v186;
          }
          while ( v186 >= 0 );
          v22 = v385;
          v23 = v390;
        }
        v10 = v387;
      }
      while ( v22 < h );
      v21 = h - 2;
    }
    v386 = v21;
    v204 = v21;
    if ( v21 >= 0 )
    {
      do
      {
        v205 = dist;
        v206 = disty;
        v207 = w * (v204 + 1);
        v208 = dist[v207 - 1];
        if ( v208 > 0.0 )
        {
          v209 = distx;
          v210 = v207 + w;
          v211 = disty[v210 - 1];
          v212 = distx[v210 - 1];
          v213 = v211 - 1;
          _XMM0 = LODWORD(img[v207 + w - w * v211 - v212 - 1]);
          __asm
          {
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
          }
          if ( *(float *)&_XMM2 == 0.0 )
          {
            v217 = FLOAT_1000000_0;
          }
          else
          {
            _XMM4 = _mm_cvtepi32_ps((__m128i)v212);
            _XMM3 = _mm_cvtepi32_ps((__m128i)v213);
            v220 = _XMM3;
            v220.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
            _XMM6 = v220;
            __asm
            {
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            w = v401;
            v206 = disty;
            v209 = distx;
            v217 = *(float *)&_XMM0 + v220.m128_f32[0];
          }
          if ( v217 < (float)(v208 - 0.001) )
          {
            v209[v207 - 1] = v212;
            if ( v213 + 0x8000 > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v213, "signed", (int)v213) )
                __debugbreak();
              v206 = disty;
              v209 = distx;
            }
            v11 = 1;
            w = v401;
            v206[v207 - 1] = v213;
            v208 = v217;
            dist[v207 - 1] = v217;
          }
          v226 = v207 + w - 1;
          v227 = v206[v226 - 1];
          v228 = v209[v226 - 1];
          v229 = v227 - 1;
          v230 = v228 + 1;
          _XMM0 = LODWORD(img[v226 - w * v227 - v228 - 1]);
          __asm
          {
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
          }
          if ( *(float *)&_XMM2 == 0.0 )
          {
            v234 = FLOAT_1000000_0;
          }
          else
          {
            _XMM4 = _mm_cvtepi32_ps((__m128i)v230);
            _XMM3 = _mm_cvtepi32_ps((__m128i)v229);
            v237 = _XMM3;
            v237.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
            _XMM6 = v237;
            __asm
            {
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            w = v401;
            v234 = *(float *)&_XMM0 + v237.m128_f32[0];
          }
          if ( v234 >= (float)(v208 - 0.001) )
          {
            v205 = dist;
            v206 = disty;
          }
          else
          {
            if ( v230 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v230, "signed", (int)v230) )
              __debugbreak();
            distx[v207 - 1] = v230;
            if ( v229 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v229, "signed", (int)v229) )
              __debugbreak();
            v206 = disty;
            v11 = 1;
            v205 = dist;
            w = v401;
            disty[v207 - 1] = v229;
            dist[v207 - 1] = v234;
          }
        }
        v243 = v207 - 2;
        if ( w - 2 > 0 )
        {
          v244 = v243;
          v395 = w;
          v245 = &v206[v243 + 1];
          v397 = (char *)distx + v395 * 2 - (_QWORD)v206;
          v246 = v243 + w * -v204;
          v247 = (char *)((char *)distx - (char *)v206);
          do
          {
            v248 = v205[v244];
            if ( v248 > 0.0 )
            {
              v249 = *v245;
              v250 = *(__int16 *)((char *)v245 + (_QWORD)v247);
              v251 = v250 - 1;
              _XMM0 = LODWORD(img[v243 - w * *v245 - v250 + 1]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v255 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v251);
                _XMM3 = _mm_cvtepi32_ps((__m128i)(unsigned int)*v245);
                v258 = _XMM3;
                v258.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v258;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v255 = *(float *)&_XMM0 + v258.m128_f32[0];
              }
              if ( v255 < (float)(v248 - 0.001) )
              {
                if ( v251 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v251, "signed", (int)v251) )
                  __debugbreak();
                v11 = 1;
                *(_WORD *)&v247[(_QWORD)v245 - 2] = v251;
                *(v245 - 1) = v249;
                v248 = v255;
                dist[v244] = v255;
              }
              v264 = *(__int16 *)((char *)v245 + (_QWORD)v397);
              v265 = v264 - 1;
              v266 = v245[v395];
              v267 = v266 - 1;
              _XMM0 = LODWORD(img[v391 + v243 - v401 * v266 - v264]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v271 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v265);
                _XMM3 = _mm_cvtepi32_ps((__m128i)v267);
                v274 = _XMM3;
                v274.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v274;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v271 = *(float *)&_XMM0 + v274.m128_f32[0];
              }
              if ( v271 < (float)(v248 - 0.001) )
              {
                if ( v265 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v265, "signed", (int)v265) )
                  __debugbreak();
                *(_WORD *)&v247[(_QWORD)v245 - 2] = v265;
                if ( v267 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v267, "signed", (int)v267) )
                  __debugbreak();
                v11 = 1;
                *(v245 - 1) = v267;
                v248 = v271;
                dist[v244] = v271;
              }
              v280 = *(__int16 *)((char *)v245 + (_QWORD)(v397 - 2));
              v281 = v245[v395 - 1];
              v282 = v281 - 1;
              _XMM0 = LODWORD(img[v243 + v401 * (1 - v281) - v280]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v286 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v280);
                _XMM3 = _mm_cvtepi32_ps((__m128i)v282);
                v289 = _XMM3;
                v289.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v289;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v286 = *(float *)&_XMM0 + v289.m128_f32[0];
              }
              if ( v286 < (float)(v248 - 0.001) )
              {
                *(_WORD *)&v247[(_QWORD)v245 - 2] = v280;
                if ( v282 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v282, "signed", (int)v282) )
                  __debugbreak();
                v11 = 1;
                *(v245 - 1) = v282;
                v248 = v286;
                dist[v244] = v286;
              }
              w = v401;
              v206 = disty;
              v295 = v401 + v244 - 1;
              v296 = distx[v295];
              v297 = disty[v295];
              v298 = v296 + 1;
              v299 = v297 - 1;
              _XMM0 = LODWORD(img[v401 - 1 + v243 - v401 * v297 - v296]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v303 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v298);
                _XMM3 = _mm_cvtepi32_ps((__m128i)v299);
                v306 = _XMM3;
                v306.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v306;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                w = v401;
                v206 = disty;
                v303 = *(float *)&_XMM0 + v306.m128_f32[0];
              }
              if ( v303 >= (float)(v248 - 0.001) )
              {
                v205 = dist;
              }
              else
              {
                if ( v298 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v298, "signed", (int)v298) )
                  __debugbreak();
                *(_WORD *)&v247[(_QWORD)v245 - 2] = v298;
                if ( v299 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v299, "signed", (int)v299) )
                  __debugbreak();
                v205 = dist;
                v11 = 1;
                w = v401;
                v206 = disty;
                *(v245 - 1) = v299;
                dist[v244] = v303;
              }
            }
            --v243;
            --v246;
            --v244;
            --v245;
          }
          while ( v246 > 0 );
          v204 = v386;
        }
        v312 = v205[v243];
        if ( v312 <= 0.0 )
        {
          v346 = distx;
        }
        else
        {
          v313 = v206[v243 + 1];
          v314 = distx[v243 + 1];
          v315 = v314 - 1;
          _XMM0 = LODWORD(img[v243 - w * v313 - v314 + 1]);
          __asm
          {
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
          }
          if ( *(float *)&_XMM2 == 0.0 )
          {
            v319 = FLOAT_1000000_0;
          }
          else
          {
            _XMM4 = _mm_cvtepi32_ps((__m128i)v315);
            _XMM3 = _mm_cvtepi32_ps((__m128i)(unsigned int)v206[v243 + 1]);
            v322 = _XMM3;
            v322.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
            _XMM6 = v322;
            __asm
            {
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            v206 = disty;
            v319 = *(float *)&_XMM0 + v322.m128_f32[0];
          }
          if ( v319 >= (float)(v312 - 0.001) )
          {
            v328 = dist;
          }
          else
          {
            if ( v315 + 0x8000 > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v315, "signed", (int)v315) )
                __debugbreak();
              v206 = disty;
            }
            v328 = dist;
            v11 = 1;
            distx[v243] = v315;
            v206[v243] = v313;
            v312 = v319;
            dist[v243] = v319;
          }
          v329 = v243 + v391;
          v330 = v206[v329];
          v331 = distx[v329];
          v332 = v330 - 1;
          v333 = v331 - 1;
          _XMM0 = LODWORD(img[v243 + v391 - v401 * v330 - v331]);
          __asm
          {
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
          }
          if ( *(float *)&_XMM2 == 0.0 )
          {
            v337 = FLOAT_1000000_0;
          }
          else
          {
            _XMM4 = _mm_cvtepi32_ps((__m128i)v333);
            _XMM3 = _mm_cvtepi32_ps((__m128i)v332);
            v340 = _XMM3;
            v340.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
            _XMM6 = v340;
            __asm
            {
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            v206 = disty;
            v337 = *(float *)&_XMM0 + v340.m128_f32[0];
          }
          if ( v337 < (float)(v312 - 0.001) )
          {
            if ( v333 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v333, "signed", (int)v333) )
              __debugbreak();
            distx[v243] = v333;
            if ( v332 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v332, "signed", (int)v332) )
              __debugbreak();
            v206 = disty;
            v11 = 1;
            v312 = v337;
            disty[v243] = v332;
            v328[v243] = v337;
          }
          v346 = distx;
          v347 = v243 + v401;
          v348 = v206[v347];
          v349 = distx[v347];
          v350 = v348 - 1;
          _XMM0 = LODWORD(img[v243 + v401 - v401 * v348 - v349]);
          __asm
          {
            vminss  xmm1, xmm0, xmm12
            vmaxss  xmm2, xmm1, xmm8; a
          }
          if ( *(float *)&_XMM2 == 0.0 )
          {
            v354 = FLOAT_1000000_0;
          }
          else
          {
            _XMM4 = _mm_cvtepi32_ps((__m128i)v349);
            _XMM3 = _mm_cvtepi32_ps((__m128i)v350);
            v357 = _XMM3;
            v357.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
            _XMM6 = v357;
            __asm
            {
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm1, xmm3, xmm5, xmm0; gy
              vcmpeqss xmm0, xmm6, xmm8
              vblendvps xmm0, xmm4, xmm9, xmm0; gx
            }
            *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            v206 = disty;
            v354 = *(float *)&_XMM0 + v357.m128_f32[0];
          }
          if ( v354 >= (float)(v312 - 0.001) )
          {
            w = v401;
            v205 = dist;
          }
          else
          {
            distx[v243] = v349;
            if ( v350 + 0x8000 > 0xFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v350, "signed", (int)v350) )
                __debugbreak();
              v206 = disty;
            }
            v205 = dist;
            v11 = 1;
            w = v401;
            v206[v243] = v350;
            dist[v243] = v354;
          }
        }
        v363 = w * v204 + 1;
        if ( w > 1 )
        {
          v364 = (unsigned int)(w - 1);
          v365 = (char *)v346 - (char *)v206;
          v366 = &v205[v363];
          v367 = &v206[v363 - 1];
          do
          {
            v368 = *v366;
            if ( *v366 > 0.0 )
            {
              v369 = *v367;
              v370 = *(__int16 *)((char *)v367 + v365);
              v371 = v370 + 1;
              _XMM0 = LODWORD(img[v363 - w * *v367 - v370 - 1]);
              __asm
              {
                vminss  xmm1, xmm0, xmm12
                vmaxss  xmm2, xmm1, xmm8; a
              }
              if ( *(float *)&_XMM2 == 0.0 )
              {
                v375 = FLOAT_1000000_0;
              }
              else
              {
                _XMM4 = _mm_cvtepi32_ps((__m128i)v371);
                _XMM3 = _mm_cvtepi32_ps((__m128i)(unsigned int)*v367);
                v378 = _XMM3;
                v378.m128_f32[0] = fsqrt((float)(_XMM3.m128_f32[0] * _XMM3.m128_f32[0]) + (float)(_XMM4.m128_f32[0] * _XMM4.m128_f32[0]));
                _XMM6 = v378;
                __asm
                {
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm1, xmm3, xmm5, xmm0; gy
                  vcmpeqss xmm0, xmm6, xmm8
                  vblendvps xmm0, xmm4, xmm9, xmm0; gx
                }
                *(double *)&_XMM0 = EDTAA3_edgedf(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                v375 = *(float *)&_XMM0 + v378.m128_f32[0];
              }
              if ( v375 < (float)(v368 - 0.001) )
              {
                if ( v371 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v371, "signed", (int)v371) )
                  __debugbreak();
                *(__int16 *)((char *)v367 + v365 + 2) = v371;
                v11 = 1;
                v367[1] = v369;
                *v366 = v375;
              }
            }
            w = v401;
            ++v363;
            ++v367;
            ++v366;
            --v364;
          }
          while ( v364 );
          v204 = v386;
        }
        v386 = --v204;
      }
      while ( v204 >= 0 );
      v21 = h - 2;
    }
    v384 = v11 == 0;
    v11 = 0;
    v10 = v387;
    v20 = h;
  }
  while ( !v384 );
}

