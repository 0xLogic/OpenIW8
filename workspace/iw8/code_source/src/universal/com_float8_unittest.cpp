/*
==============
Float8UnitTest
==============
*/

void Float8UnitTest(void)
{
  ?Float8UnitTest@@YAXXZ();
}

/*
==============
Float8LoadStoreTest
==============
*/
void Float8LoadStoreTest()
{
  __m256i *v0; 
  __m128 v10; 
  __int64 v16; 
  __int64 v17; 
  char v18[112]; 

  v0 = (__m256i *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64);
  v0[2].m256i_i64[0] = (unsigned __int64)&v16 ^ _security_cookie;
  _YMM0 = _ymm;
  __asm { vextractf128 xmm6, ymm0, 0 }
  *v0 = _ymm;
  if ( _XMM6.m128_f32[0] != 1.0 )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 4) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 8) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Set", v17) )
      __debugbreak();
  }
  _YMM0 = _ymm;
  __asm { vextractf128 xmm6, ymm0, 1 }
  if ( _XMM6.m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Set", v17) )
      __debugbreak();
  }
  *v0 = _ymm;
  _YMM0 = (__m256i)(unsigned __int128)_xmm;
  __asm
  {
    vinsertf128 ymm0, ymm0, cs:__xmm@4100000040e0000040c0000040a00000, 1
    vextractf128 xmm6, ymm0, 0
  }
  *(__m256i *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = _YMM0;
  if ( _XMM6.m128_f32[0] != 1.0 )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 4) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 8) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Set", v17) )
      __debugbreak();
  }
  _YMM0 = *(__m256i *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  __asm { vextractf128 xmm6, ymm0, 1 }
  if ( _XMM6.m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Set", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C) )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Set", v17) )
      __debugbreak();
  }
  v10 = (__m128)LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)v10.m128_u64 = I_flrand(-8.0, 8.0);
  _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v10, v10, 0);
  __asm
  {
    vinsertf128 ymm0, ymm0, xmm0, 1
    vextractf128 xmm6, ymm0, 0
  }
  *(__m256i *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = _YMM0;
  if ( _XMM6.m128_f32[0] != v10.m128_f32[0] )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8LoadFloat", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v10.m128_f32[0] )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8LoadFloat", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v10.m128_f32[0] )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8LoadFloat", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != v10.m128_f32[0] )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8LoadFloat", v17) )
      __debugbreak();
  }
  _YMM0 = *(__m256i *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  __asm { vextractf128 xmm6, ymm0, 1 }
  if ( _XMM6.m128_f32[0] != v10.m128_f32[0] )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8LoadFloat", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v10.m128_f32[0] )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8LoadFloat", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v10.m128_f32[0] )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8LoadFloat", v17) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != v10.m128_f32[0] )
  {
    LODWORD(v17) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8LoadFloat", v17) )
      __debugbreak();
  }
}

/*
==============
Float8LogicalTest
==============
*/
char Float8LogicalTest()
{
  float *v0; 
  unsigned __int128 v1; 
  unsigned __int128 v2; 
  float v3; 
  float v4; 
  float v5; 
  __int128 v6; 
  __int128 v7; 
  unsigned __int128 v8; 
  unsigned __int128 v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  int v25; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  unsigned __int128 v45; 
  unsigned __int128 v46; 
  float v47; 
  float v48; 
  float v49; 
  __int128 v50; 
  __int128 v51; 
  unsigned __int128 v52; 
  unsigned __int128 v53; 
  float v54; 
  float v55; 
  float v56; 
  __int128 v57; 
  __int128 v58; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  unsigned __int128 v88; 
  unsigned __int128 v89; 
  float v90; 
  float v91; 
  float v92; 
  __int128 v93; 
  __int128 v94; 
  unsigned __int128 v105; 
  unsigned __int128 v106; 
  float v107; 
  float v108; 
  float v109; 
  __int128 v110; 
  __int128 v111; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v130; 
  float v131; 
  int v132; 
  unsigned __int128 v135; 
  unsigned __int128 v136; 
  float v137; 
  float v138; 
  float v139; 
  __int128 v140; 
  __int128 v141; 
  unsigned __int128 v152; 
  unsigned __int128 v153; 
  float v154; 
  float v155; 
  float v156; 
  __int128 v157; 
  __int128 v158; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  float v178; 
  int v179; 
  unsigned __int128 v182; 
  unsigned __int128 v183; 
  float v184; 
  float v185; 
  float v186; 
  __int128 v187; 
  __int128 v188; 
  unsigned __int128 v189; 
  unsigned __int128 v190; 
  float v191; 
  float v192; 
  float v193; 
  __int128 v194; 
  __int128 v195; 
  int v217; 
  int v218; 
  int v219; 
  int v220; 
  int v221; 
  int v222; 
  int v223; 
  int v224; 
  unsigned __int128 v225; 
  unsigned __int128 v226; 
  float v227; 
  float v228; 
  float v229; 
  __int128 v230; 
  __int128 v231; 
  unsigned __int128 v232; 
  unsigned __int128 v233; 
  float v234; 
  float v235; 
  float v236; 
  __int128 v237; 
  __int128 v238; 
  int v260; 
  int v261; 
  int v262; 
  int v263; 
  int v264; 
  int v265; 
  int v266; 
  __int64 v268; 
  __int64 v269; 
  char v270[272]; 

  v0 = (float *)((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64);
  *(_QWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = (unsigned __int64)&v268 ^ _security_cookie;
  v1 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v1 = I_flrand(-8.0, 8.0);
  v2 = v1;
  *(double *)&v1 = I_flrand(-8.0, 8.0);
  v3 = *(float *)&v1;
  *(double *)&v1 = I_flrand(-8.0, 8.0);
  v4 = *(float *)&v1;
  *(double *)&v1 = I_flrand(-8.0, 8.0);
  v5 = *(float *)&v1;
  v6 = LODWORD(FLOAT_N8_0);
  *(double *)&v6 = I_flrand(-8.0, 8.0);
  v7 = v6;
  *(double *)&v6 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&v6;
  *(double *)&v6 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(float *)&v6;
  *(double *)&v6 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = *(float *)&v6;
  v8 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v8 = I_flrand(-8.0, 8.0);
  v9 = v8;
  *(double *)&v8 = I_flrand(-8.0, 8.0);
  v10 = *(float *)&v8;
  *(double *)&v8 = I_flrand(-8.0, 8.0);
  v11 = *(float *)&v8;
  *(double *)&v8 = I_flrand(-8.0, 8.0);
  v12 = *(float *)&v8;
  v13 = LODWORD(FLOAT_N8_0);
  *(double *)&v13 = I_flrand(-8.0, 8.0);
  v14 = v13;
  *(double *)&v13 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = *(float *)&v13;
  *(double *)&v13 = I_flrand(-8.0, 8.0);
  *(float *)((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) = *(float *)&v13;
  *(double *)&v13 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = *(float *)&v13;
  _XMM0 = v14;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+0Ch], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 20h ; ' '
  }
  _XMM1 = v9;
  _YMM1 = (__m256i)v9;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
  }
  v25 = 0;
  _XMM0 = v7;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 30h ; '0'
  }
  _XMM2 = v2;
  _YMM2 = (__m256i)v2;
  __asm
  {
    vinsertps xmm2, xmm2, xmm8, 10h
    vinsertps xmm2, xmm2, xmm10, 20h ; ' '
    vinsertps xmm2, xmm2, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vcmpgt_oqps ymm1, ymm0, ymm3
  }
  v37 = 0;
  if ( *(float *)&v2 > *(float *)&v9 )
    v37 = -1;
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM1;
  if ( (_DWORD)_XMM1 != v37 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (1)", v269) )
      __debugbreak();
  }
  v38 = 0;
  if ( v3 > v10 )
    v38 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v38 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (2)", v269) )
      __debugbreak();
  }
  v39 = 0;
  if ( v4 > v11 )
    v39 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v39 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (3)", v269) )
      __debugbreak();
  }
  v40 = 0;
  if ( v5 > v12 )
    v40 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v40 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (4)", v269) )
      __debugbreak();
  }
  v41 = 0;
  if ( *(float *)&v7 > *(float *)&v14 )
    v41 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v41 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (5)", v269) )
      __debugbreak();
  }
  v42 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) > *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) )
    v42 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v42 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (6)", v269) )
      __debugbreak();
  }
  v43 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) > *v0 )
    v43 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v43 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (7)", v269) )
      __debugbreak();
  }
  v44 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) > *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) )
    v44 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v44 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (8)", v269) )
      __debugbreak();
  }
  v45 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v45 = I_flrand(-8.0, 8.0);
  v46 = v45;
  *(double *)&v45 = I_flrand(-8.0, 8.0);
  v47 = *(float *)&v45;
  *(double *)&v45 = I_flrand(-8.0, 8.0);
  v48 = *(float *)&v45;
  *(double *)&v45 = I_flrand(-8.0, 8.0);
  v49 = *(float *)&v45;
  v50 = LODWORD(FLOAT_N8_0);
  *(double *)&v50 = I_flrand(-8.0, 8.0);
  v51 = v50;
  *(double *)&v50 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = *(float *)&v50;
  *(double *)&v50 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(float *)&v50;
  *(double *)&v50 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&v50;
  v52 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v52 = I_flrand(-8.0, 8.0);
  v53 = v52;
  *(double *)&v52 = I_flrand(-8.0, 8.0);
  v54 = *(float *)&v52;
  *(double *)&v52 = I_flrand(-8.0, 8.0);
  v55 = *(float *)&v52;
  *(double *)&v52 = I_flrand(-8.0, 8.0);
  v56 = *(float *)&v52;
  v57 = LODWORD(FLOAT_N8_0);
  *(double *)&v57 = I_flrand(-8.0, 8.0);
  v58 = v57;
  *(double *)&v57 = I_flrand(-8.0, 8.0);
  *v0 = *(float *)&v57;
  *(double *)&v57 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = *(float *)&v57;
  *(double *)&v57 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = *(float *)&v57;
  _XMM0 = v58;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0Ch], 20h ; ' '
  }
  _XMM1 = v53;
  _YMM1 = (__m256i)v53;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
  }
  _XMM0 = v51;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 30h ; '0'
  }
  _XMM2 = v46;
  _YMM2 = (__m256i)v46;
  __asm
  {
    vinsertps xmm2, xmm2, xmm8, 10h
    vinsertps xmm2, xmm2, xmm10, 20h ; ' '
    vinsertps xmm2, xmm2, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vcmpge_oqps ymm1, ymm0, ymm3
  }
  v80 = 0;
  if ( *(float *)&v46 >= *(float *)&v53 )
    v80 = -1;
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM1;
  if ( (_DWORD)_XMM1 != v80 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (1)", v269) )
      __debugbreak();
  }
  v81 = 0;
  if ( v47 >= v54 )
    v81 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v81 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (2)", v269) )
      __debugbreak();
  }
  v82 = 0;
  if ( v48 >= v55 )
    v82 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v82 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (3)", v269) )
      __debugbreak();
  }
  v83 = 0;
  if ( v49 >= v56 )
    v83 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v83 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (4)", v269) )
      __debugbreak();
  }
  v84 = 0;
  if ( *(float *)&v51 >= *(float *)&v58 )
    v84 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v84 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (5)", v269) )
      __debugbreak();
  }
  v85 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) >= *v0 )
    v85 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v85 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (6)", v269) )
      __debugbreak();
  }
  v86 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) >= *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) )
    v86 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v86 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (7)", v269) )
      __debugbreak();
  }
  v87 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) >= *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) )
    v87 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v87 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (8)", v269) )
      __debugbreak();
  }
  v88 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v88 = I_flrand(-8.0, 8.0);
  v89 = v88;
  *(double *)&v88 = I_flrand(-8.0, 8.0);
  v90 = *(float *)&v88;
  *(double *)&v88 = I_flrand(-8.0, 8.0);
  v91 = *(float *)&v88;
  *(double *)&v88 = I_flrand(-8.0, 8.0);
  v92 = *(float *)&v88;
  v93 = LODWORD(FLOAT_N8_0);
  *(double *)&v93 = I_flrand(-8.0, 8.0);
  v94 = v93;
  *(double *)&v93 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = *(float *)&v93;
  *(double *)&v93 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(float *)&v93;
  *(double *)&v93 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = *(float *)&v93;
  _XMM0 = v94;
  __asm { vinsertps xmm0, xmm0, xmm6, 10h }
  _XMM1 = v89;
  _YMM1 = (__m256i)v89;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vinsertps xmm1, xmm1, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
  }
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = _YMM0;
  v105 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v105 = I_flrand(-8.0, 8.0);
  v106 = v105;
  *(double *)&v105 = I_flrand(-8.0, 8.0);
  v107 = *(float *)&v105;
  *(double *)&v105 = I_flrand(-8.0, 8.0);
  v108 = *(float *)&v105;
  *(double *)&v105 = I_flrand(-8.0, 8.0);
  v109 = *(float *)&v105;
  v110 = LODWORD(FLOAT_N8_0);
  *(double *)&v110 = I_flrand(-8.0, 8.0);
  v111 = v110;
  *(double *)&v110 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = *(float *)&v110;
  *(double *)&v110 = I_flrand(-8.0, 8.0);
  *v0 = *(float *)&v110;
  *(double *)&v110 = I_flrand(-8.0, 8.0);
  _YMM2 = *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&v110;
  _XMM1 = v106;
  _YMM1 = (__m256i)v106;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
  }
  _XMM0 = v111;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 20h ; ' '
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vcmpeqps ymm1, ymm2, ymm0
  }
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM1;
  v124 = -1;
  if ( *(float *)&v89 != *(float *)&v106 )
    v124 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) != v124 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (1)", v269) )
      __debugbreak();
  }
  v125 = -1;
  if ( v90 != v107 )
    v125 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v125 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (2)", v269) )
      __debugbreak();
  }
  v126 = -1;
  if ( v91 != v108 )
    v126 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v126 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (3)", v269) )
      __debugbreak();
  }
  v127 = -1;
  if ( v92 != v109 )
    v127 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v127 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (4)", v269) )
      __debugbreak();
  }
  v128 = -1;
  if ( *(float *)&v94 != *(float *)&v111 )
    v128 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v128 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (5)", v269) )
      __debugbreak();
  }
  v129 = -1;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) != *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) )
    v129 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v129 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (6)", v269) )
      __debugbreak();
  }
  v130 = -1;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) != *v0 )
    v130 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v130 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (7)", v269) )
      __debugbreak();
  }
  v131 = *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
  v132 = -1;
  if ( v131 != *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) )
    v132 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v132 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (8)", v269) )
      __debugbreak();
  }
  _YMM0 = *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  __asm { vcmpeqps ymm0, ymm0, ymm0 }
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM0;
  if ( v131 != NAN )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (1)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != -1 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (2)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != -1 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (3)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != -1 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (4)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != -1 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (5)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != -1 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (6)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != -1 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (7)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != -1 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (8)", v269) )
      __debugbreak();
  }
  v135 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v135 = I_flrand(-8.0, 8.0);
  v136 = v135;
  *(double *)&v135 = I_flrand(-8.0, 8.0);
  v137 = *(float *)&v135;
  *(double *)&v135 = I_flrand(-8.0, 8.0);
  v138 = *(float *)&v135;
  *(double *)&v135 = I_flrand(-8.0, 8.0);
  v139 = *(float *)&v135;
  v140 = LODWORD(FLOAT_N8_0);
  *(double *)&v140 = I_flrand(-8.0, 8.0);
  v141 = v140;
  *(double *)&v140 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = *(float *)&v140;
  *(double *)&v140 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(float *)&v140;
  *(double *)&v140 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = *(float *)&v140;
  _XMM0 = v141;
  __asm { vinsertps xmm0, xmm0, xmm6, 10h }
  _XMM1 = v136;
  _YMM1 = (__m256i)v136;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vinsertps xmm1, xmm1, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
  }
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = _YMM0;
  v152 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v152 = I_flrand(-8.0, 8.0);
  v153 = v152;
  *(double *)&v152 = I_flrand(-8.0, 8.0);
  v154 = *(float *)&v152;
  *(double *)&v152 = I_flrand(-8.0, 8.0);
  v155 = *(float *)&v152;
  *(double *)&v152 = I_flrand(-8.0, 8.0);
  v156 = *(float *)&v152;
  v157 = LODWORD(FLOAT_N8_0);
  *(double *)&v157 = I_flrand(-8.0, 8.0);
  v158 = v157;
  *(double *)&v157 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = *(float *)&v157;
  *(double *)&v157 = I_flrand(-8.0, 8.0);
  *v0 = *(float *)&v157;
  *(double *)&v157 = I_flrand(-8.0, 8.0);
  _YMM2 = *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&v157;
  _XMM1 = v153;
  _YMM1 = (__m256i)v153;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
  }
  _XMM0 = v158;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 20h ; ' '
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vcmpneq_oqps ymm1, ymm2, ymm0
  }
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM1;
  v171 = -1;
  if ( *(float *)&v136 == *(float *)&v153 )
    v171 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) != v171 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (1)", v269) )
      __debugbreak();
  }
  v172 = -1;
  if ( v137 == v154 )
    v172 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v172 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (2)", v269) )
      __debugbreak();
  }
  v173 = -1;
  if ( v138 == v155 )
    v173 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v173 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (3)", v269) )
      __debugbreak();
  }
  v174 = -1;
  if ( v139 == v156 )
    v174 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v174 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (4)", v269) )
      __debugbreak();
  }
  v175 = -1;
  if ( *(float *)&v141 == *(float *)&v158 )
    v175 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v175 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (5)", v269) )
      __debugbreak();
  }
  v176 = -1;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) == *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) )
    v176 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v176 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (6)", v269) )
      __debugbreak();
  }
  v177 = -1;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) == *v0 )
    v177 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v177 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (7)", v269) )
      __debugbreak();
  }
  v178 = *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC);
  v179 = -1;
  if ( v178 == *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) )
    v179 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v179 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (8)", v269) )
      __debugbreak();
  }
  _YMM0 = *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  __asm { vcmpneq_oqps ymm0, ymm0, ymm0 }
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM0;
  if ( v178 != 0.0 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (1)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (2)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (3)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (4)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (5)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (6)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (7)", v269) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (8)", v269) )
      __debugbreak();
  }
  v182 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v182 = I_flrand(-8.0, 8.0);
  v183 = v182;
  *(double *)&v182 = I_flrand(-8.0, 8.0);
  v184 = *(float *)&v182;
  *(double *)&v182 = I_flrand(-8.0, 8.0);
  v185 = *(float *)&v182;
  *(double *)&v182 = I_flrand(-8.0, 8.0);
  v186 = *(float *)&v182;
  v187 = LODWORD(FLOAT_N8_0);
  *(double *)&v187 = I_flrand(-8.0, 8.0);
  v188 = v187;
  *(double *)&v187 = I_flrand(-8.0, 8.0);
  *v0 = *(float *)&v187;
  *(double *)&v187 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = *(float *)&v187;
  *(double *)&v187 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&v187;
  v189 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v189 = I_flrand(-8.0, 8.0);
  v190 = v189;
  *(double *)&v189 = I_flrand(-8.0, 8.0);
  v191 = *(float *)&v189;
  *(double *)&v189 = I_flrand(-8.0, 8.0);
  v192 = *(float *)&v189;
  *(double *)&v189 = I_flrand(-8.0, 8.0);
  v193 = *(float *)&v189;
  v194 = LODWORD(FLOAT_N8_0);
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  v195 = v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = *(float *)&v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(float *)&v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = *(float *)&v194;
  _XMM0 = v195;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
  }
  _XMM1 = v190;
  _YMM1 = (__m256i)v190;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
  }
  _XMM0 = v188;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0Ch], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 30h ; '0'
  }
  _XMM2 = v183;
  _YMM2 = (__m256i)v183;
  __asm
  {
    vinsertps xmm2, xmm2, xmm8, 10h
    vinsertps xmm2, xmm2, xmm10, 20h ; ' '
    vinsertps xmm2, xmm2, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vcmple_oqps ymm1, ymm0, ymm3
  }
  v217 = 0;
  if ( *(float *)&v190 >= *(float *)&v183 )
    v217 = -1;
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM1;
  if ( (_DWORD)_XMM1 != v217 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (1)", v269) )
      __debugbreak();
  }
  v218 = 0;
  if ( v191 >= v184 )
    v218 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v218 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (2)", v269) )
      __debugbreak();
  }
  v219 = 0;
  if ( v192 >= v185 )
    v219 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v219 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (3)", v269) )
      __debugbreak();
  }
  v220 = 0;
  if ( v193 >= v186 )
    v220 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v220 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (4)", v269) )
      __debugbreak();
  }
  v221 = 0;
  if ( *(float *)&v195 >= *(float *)&v188 )
    v221 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v221 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (5)", v269) )
      __debugbreak();
  }
  v222 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) >= *v0 )
    v222 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v222 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (6)", v269) )
      __debugbreak();
  }
  v223 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) >= *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) )
    v223 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v223 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (7)", v269) )
      __debugbreak();
  }
  v224 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) >= *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) )
    v224 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v224 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (8)", v269) )
      __debugbreak();
  }
  v225 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v225 = I_flrand(-8.0, 8.0);
  v226 = v225;
  *(double *)&v225 = I_flrand(-8.0, 8.0);
  v227 = *(float *)&v225;
  *(double *)&v225 = I_flrand(-8.0, 8.0);
  v228 = *(float *)&v225;
  *(double *)&v225 = I_flrand(-8.0, 8.0);
  v229 = *(float *)&v225;
  v230 = LODWORD(FLOAT_N8_0);
  *(double *)&v230 = I_flrand(-8.0, 8.0);
  v231 = v230;
  *(double *)&v230 = I_flrand(-8.0, 8.0);
  *v0 = *(float *)&v230;
  *(double *)&v230 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) = *(float *)&v230;
  *(double *)&v230 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&v230;
  v232 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&v232 = I_flrand(-8.0, 8.0);
  v233 = v232;
  *(double *)&v232 = I_flrand(-8.0, 8.0);
  v234 = *(float *)&v232;
  *(double *)&v232 = I_flrand(-8.0, 8.0);
  v235 = *(float *)&v232;
  *(double *)&v232 = I_flrand(-8.0, 8.0);
  v236 = *(float *)&v232;
  v237 = LODWORD(FLOAT_N8_0);
  *(double *)&v237 = I_flrand(-8.0, 8.0);
  v238 = v237;
  *(double *)&v237 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) = *(float *)&v237;
  *(double *)&v237 = I_flrand(-8.0, 8.0);
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = *(float *)&v237;
  *(double *)&v237 = I_flrand(-8.0, 8.0);
  _XMM2 = v233;
  _YMM2 = (__m256i)v233;
  __asm
  {
    vinsertps xmm2, xmm2, xmm9, 10h
    vinsertps xmm2, xmm2, xmm11, 20h ; ' '
  }
  _XMM1 = v238;
  __asm
  {
    vinsertps xmm1, xmm1, dword ptr [rbp+4], 10h
    vinsertps xmm1, xmm1, dword ptr [rbp+10h], 20h ; ' '
    vinsertps xmm2, xmm2, xmm13, 30h ; '0'
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vinsertf128 ymm4, ymm2, xmm1, 1
  }
  *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) = *(float *)&v237;
  _XMM3 = v226;
  _YMM3 = (__m256i)v226;
  __asm
  {
    vinsertps xmm3, xmm3, xmm8, 10h
    vinsertps xmm3, xmm3, xmm10, 20h ; ' '
  }
  _XMM1 = v231;
  __asm
  {
    vinsertps xmm1, xmm1, dword ptr [rbp+0], 10h
    vinsertps xmm1, xmm1, dword ptr [rbp+0Ch], 20h ; ' '
    vinsertps xmm1, xmm1, dword ptr [rbp+8], 30h ; '0'
    vinsertps xmm3, xmm3, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm3, xmm1, 1
    vcmplt_oqps ymm2, ymm0, ymm4
  }
  v260 = 0;
  if ( *(float *)&v233 > *(float *)&v226 )
    v260 = -1;
  *(__m256i *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM2;
  if ( (_DWORD)_XMM2 != v260 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (1)", v269) )
      __debugbreak();
  }
  v261 = 0;
  if ( v234 > v227 )
    v261 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v261 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (2)", v269) )
      __debugbreak();
  }
  v262 = 0;
  if ( v235 > v228 )
    v262 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v262 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (3)", v269) )
      __debugbreak();
  }
  v263 = 0;
  if ( v236 > v229 )
    v263 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v263 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (4)", v269) )
      __debugbreak();
  }
  v264 = 0;
  if ( *(float *)&v238 > *(float *)&v231 )
    v264 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v264 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (5)", v269) )
      __debugbreak();
  }
  v265 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 4) > *v0 )
    v265 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v265 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (6)", v269) )
      __debugbreak();
  }
  v266 = 0;
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) > *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC) )
    v266 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v266 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    LOBYTE(v266) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (7)", v269);
    if ( (_BYTE)v266 )
      __debugbreak();
  }
  if ( *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x14) > *(float *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 8) )
    v25 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v270 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v25 )
  {
    LODWORD(v269) = g_unitSavedSeed;
    LOBYTE(v266) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (8)", v269);
    if ( (_BYTE)v266 )
      __debugbreak();
  }
  return v266;
}

/*
==============
Float8MathTest
==============
*/
void Float8MathTest
{
	//Failed decompiling
}

/*
==============
Float8UnitTest
==============
*/
void Float8UnitTest(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 

  v0 = Sys_Microseconds();
  Float8LoadStoreTest();
  Float8MathTest();
  Float8LogicalTest();
  v1 = Sys_Microseconds();
  Com_Printf(16, "Float8 unit tests calculated in %zd ticks.\n", v1 - v0);
}

