/*
==============
Float4UnitTest
==============
*/

void Float4UnitTest(void)
{
  ?Float4UnitTest@@YAXXZ();
}

/*
==============
Double4LoadStoreTest
==============
*/
char Double4LoadStoreTest()
{
  unsigned __int64 v0; 
  __int64 v9; 
  __int64 v10; 
  __m128 v11; 

  v0 = (unsigned __int64)&v9 ^ _security_cookie;
  _XMM6 = _mm_cvtps_pd((__m128)_xmm);
  v11 = (__m128)_xmm;
  _XMM7 = _mm_cvtps_pd(_mm_shuffle_ps(v11, v11, 238));
  if ( _XMM6.m128d_f64[0] != 1.0 )
  {
    LODWORD(v10) = g_unitSavedSeed_0;
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (double) component", "Double4LoadFloat4", v10);
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm6, xmm6 }
  if ( *(double *)&_XMM1 != v11.m128_f32[1] )
  {
    LODWORD(v10) = g_unitSavedSeed_0;
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (double) component", "Double4LoadFloat4", v10);
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  if ( _XMM7.m128d_f64[0] != v11.m128_f32[2] )
  {
    LODWORD(v10) = g_unitSavedSeed_0;
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (double) component", "Double4LoadFloat4", v10);
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm7, xmm7 }
  if ( *(double *)&_XMM1 != v11.m128_f32[3] )
  {
    LODWORD(v10) = g_unitSavedSeed_0;
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (double) component", "Double4LoadFloat4", v10);
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  __asm { vmovupd xmm6, cs:__xmm@40290000000000004029000000000000 }
  if ( *(double *)&_XMM6 != 12.5 )
  {
    LODWORD(v10) = g_unitSavedSeed_0;
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (double) component", "Double4LoadDouble", v10);
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  __asm { vunpckhpd xmm0, xmm6, xmm6 }
  if ( *(double *)&_XMM0 != 12.5 )
  {
    LODWORD(v10) = g_unitSavedSeed_0;
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (double) component", "Double4LoadDouble", v10);
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  if ( *(double *)&_XMM6 != 12.5 )
  {
    LODWORD(v10) = g_unitSavedSeed_0;
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (double) component", "Double4LoadDouble", v10);
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  __asm { vunpckhpd xmm0, xmm6, xmm6 }
  if ( *(double *)&_XMM0 != 12.5 )
  {
    LODWORD(v10) = g_unitSavedSeed_0;
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (double) component", "Double4LoadDouble", v10);
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  return v0;
}

/*
==============
Double4MathTest
==============
*/

void __fastcall Double4MathTest(__int64 a1, __int64 a2, __int64 a3, double _XMM3_8)
{
  double v4; 
  __int128 v5; 
  double v6; 
  double v7; 
  double v8; 
  double v10; 
  __int128 v15; 
  double v16; 
  double v17; 
  double v28; 
  __int128 v30; 
  __int128 v33; 
  __int128 v36; 
  __int128 v39; 
  double v41; 
  __int128 v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  __int128 v52; 
  double v53; 
  double v54; 
  __int128 v60; 
  __int128 v75; 
  __int128 v78; 
  __int128 v82; 
  double v84; 
  __int128 v85; 
  double v86; 
  double v87; 
  double v88; 
  __int128 v89; 
  double v90; 
  double v91; 
  __int128 v96; 
  double v97; 
  __int128 v98; 
  double v99; 
  double v109; 
  __int128 v111; 
  __int128 v114; 
  __int128 v117; 
  __int128 v120; 
  double v122; 
  __int128 v123; 
  double v124; 
  __int128 v125; 
  double v126; 
  __int128 v127; 
  double v128; 
  double v129; 
  __int128 v134; 
  __int128 v147; 
  __int128 v150; 
  __int128 v154; 
  double v156; 
  __int128 v157; 
  double v158; 
  double v159; 
  double v160; 
  __int128 v161; 
  double v162; 
  double v163; 
  __int128 v168; 
  double v169; 
  double v170; 
  unsigned __int64 v171; 
  double v172; 
  __int128 v177; 
  __int128 v192; 
  __int128 v195; 
  __int128 v199; 
  double v201; 
  __int128 v202; 
  double v203; 
  __int128 v204; 
  double v205; 
  double v206; 
  unsigned __int64 v207; 
  double v208; 
  double v209; 
  __int128 v222; 
  double v225; 
  __int128 v230; 
  __int128 v233; 
  __int128 v237; 
  double v239; 
  __int128 v240; 
  double v241; 
  double v242; 
  double v243; 
  unsigned __int64 v244; 
  double v245; 
  __int128 v250; 
  double v251; 
  __int128 v259; 
  __int128 v263; 
  __int128 v266; 
  __int128 v270; 
  double v272; 
  __int128 v273; 
  double v274; 
  double v275; 
  double v276; 
  unsigned __int64 v277; 
  double v278; 
  __int128 v283; 
  double v284; 
  __int128 v292; 
  __int128 v296; 
  __int128 v299; 
  __int128 v303; 
  double v305; 
  __int128 v306; 
  double v307; 
  double v308; 
  double v309; 
  unsigned __int64 v310; 
  double v311; 
  __int128 v316; 
  double v317; 
  __int128 v325; 
  __int128 v329; 
  __int128 v332; 
  __int128 v336; 
  double v338; 
  __int128 v339; 
  double v340; 
  double v341; 
  double v342; 
  unsigned __int64 v343; 
  double v344; 
  __int128 v349; 
  double v350; 
  __int128 v358; 
  __int128 v362; 
  __int128 v365; 
  __int128 v369; 
  double v371; 
  __int128 v372; 
  double v373; 
  double v374; 
  double v375; 
  __int128 v376; 
  double v377; 
  __int128 v387; 
  double v391; 
  __int128 v396; 
  __int128 v399; 
  __int128 v403; 
  double v405; 
  double v407; 
  double v409; 
  double v411; 
  __int128 v413; 
  __int64 v427; 
  double v428; 
  double v429; 
  double v430; 
  double v431; 
  double v432; 
  double v433; 
  double v434; 
  double v435; 
  double v436; 
  double v437; 
  double v438; 
  double v439; 
  double v440; 
  double v441; 
  double v442; 
  double v443; 
  double v444; 
  double v445; 

  g_unitSavedSeed_0 = *GetRandSeed();
  v4 = I_flrand(-8.0, 8.0);
  v5 = COERCE_UNSIGNED_INT64(*(float *)&v4);
  v6 = I_flrand(-8.0, 8.0);
  v7 = *(float *)&v6;
  v8 = I_flrand(-8.0, 8.0);
  _XMM1 = v5;
  v10 = *(float *)&v8;
  __asm
  {
    vunpcklpd xmm9, xmm1, xmm2
    vxorpd  xmm1, xmm1, xmm1
  }
  _XMM0 = COERCE_UNSIGNED_INT64(*(float *)&v8);
  __asm { vunpcklpd xmm7, xmm0, xmm1 }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v15 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v16 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v17 = *(float *)&_XMM0;
  _XMM1 = v15;
  __asm { vunpcklpd xmm4, xmm1, xmm2 }
  _XMM0 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  __asm
  {
    vmulpd  xmm2, xmm4, xmm9
    vxorpd  xmm3, xmm3, xmm3
    vunpcklpd xmm1, xmm0, xmm3
    vmulpd  xmm1, xmm1, xmm7
    vhaddpd xmm0, xmm2, xmm2
    vaddpd  xmm1, xmm0, xmm1
    vmovddup xmm7, xmm1
  }
  v28 = v16 * v7 + *(double *)&v15 * *(double *)&v5 + v17 * v10;
  *((_QWORD *)&v30 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v30 = *(double *)&_XMM7 - v28;
  _XMM0 = v30;
  __asm { vandpd  xmm0, xmm0, xmm15 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double3Dot", g_unitSavedSeed_0) )
    __debugbreak();
  *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v33 = *(double *)&_XMM7 - v28;
  _XMM1 = v33;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double3Dot", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v36 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v36 = *(double *)&_XMM7 - v28;
  _XMM0 = v36;
  __asm { vandpd  xmm0, xmm0, xmm15 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double3Dot", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v39 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v39 = *(double *)&_XMM7 - v28;
  _XMM1 = v39;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double3Dot", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v41 = I_flrand(-8.0, 8.0);
  v42 = COERCE_UNSIGNED_INT64(*(float *)&v41);
  v43 = I_flrand(-8.0, 8.0);
  v44 = *(float *)&v43;
  v45 = I_flrand(-8.0, 8.0);
  v46 = *(float *)&v45;
  _XMM0 = COERCE_UNSIGNED_INT64(*(float *)&v45);
  _XMM1 = v42;
  __asm
  {
    vxorpd  xmm3, xmm3, xmm3
    vunpcklpd xmm10, xmm0, xmm3
    vunpcklpd xmm12, xmm1, xmm2
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v52 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v53 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v54 = *(float *)&_XMM0;
  _XMM1 = v52;
  __asm { vunpcklpd xmm7, xmm1, xmm2 }
  _XMM0 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  __asm
  {
    vxorpd  xmm3, xmm3, xmm3
    vunpcklpd xmm5, xmm0, xmm3
  }
  *((_QWORD *)&v60 + 1) = *((_QWORD *)&v42 + 1);
  __asm { vsubpd  xmm0, xmm12, xmm7 }
  *(double *)&v60 = (*(double *)&v42 - *(double *)&v52) * (*(double *)&v42 - *(double *)&v52) + (v44 - v53) * (v44 - v53) + (v46 - v54) * (v46 - v54);
  _XMM2 = v60;
  __asm
  {
    vsqrtsd xmm8, xmm2, xmm2
    vmulpd  xmm2, xmm0, xmm0
    vhaddpd xmm0, xmm2, xmm2
    vsubpd  xmm1, xmm10, xmm5
    vmulpd  xmm1, xmm1, xmm1
    vaddpd  xmm1, xmm0, xmm1
    vmovddup xmm2, xmm1
    vsqrtpd xmm6, xmm2
  }
  *((_QWORD *)&v60 + 1) = *((_QWORD *)&_XMM6 + 1);
  *(double *)&v60 = *(double *)&_XMM6 - *(double *)&_XMM8;
  _XMM0 = v60;
  __asm { vandpd  xmm0, xmm0, xmm15 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double3Distance", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm0, xmm6, xmm6 }
  *((_QWORD *)&v75 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v75 = *(double *)&_XMM0 - *(double *)&_XMM8;
  _XMM1 = v75;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double3Distance", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v78 + 1) = *((_QWORD *)&_XMM6 + 1);
  *(double *)&v78 = *(double *)&_XMM6 - *(double *)&_XMM8;
  _XMM0 = v78;
  __asm { vandpd  xmm0, xmm0, xmm15 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double3Distance", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm0, xmm6, xmm6 }
  *((_QWORD *)&v82 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v82 = *(double *)&_XMM0 - *(double *)&_XMM8;
  _XMM1 = v82;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double3Distance", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v84 = I_flrand(-8.0, 8.0);
  v85 = COERCE_UNSIGNED_INT64(*(float *)&v84);
  v86 = I_flrand(-8.0, 8.0);
  v87 = *(float *)&v86;
  v88 = I_flrand(-8.0, 8.0);
  v89 = COERCE_UNSIGNED_INT64(*(float *)&v88);
  v90 = I_flrand(-8.0, 8.0);
  v91 = *(float *)&v90;
  _XMM1 = v85;
  _XMM0 = v89;
  __asm
  {
    vunpcklpd xmm8, xmm0, xmm3
    vunpcklpd xmm10, xmm1, xmm2
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v96 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v97 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v98 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v99 = *(float *)&_XMM0;
  _XMM0 = v98;
  _XMM1 = v96;
  __asm
  {
    vunpcklpd xmm4, xmm1, xmm2
    vmulpd  xmm2, xmm4, xmm10
    vunpcklpd xmm1, xmm0, xmm3
    vmulpd  xmm0, xmm1, xmm8
    vhaddpd xmm1, xmm2, xmm0
    vhaddpd xmm2, xmm1, xmm1
    vmovddup xmm8, xmm2
  }
  v109 = v97 * v87 + *(double *)&v96 * *(double *)&v85 + *(double *)&v98 * *(double *)&v89 + v99 * v91;
  *((_QWORD *)&v111 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v111 = *(double *)&_XMM8 - v109;
  _XMM1 = v111;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Dot", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v114 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v114 = *(double *)&_XMM8 - v109;
  _XMM1 = v114;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Dot", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v117 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v117 = *(double *)&_XMM8 - v109;
  _XMM0 = v117;
  __asm { vandpd  xmm0, xmm0, xmm15 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Dot", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v120 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v120 = *(double *)&_XMM8 - v109;
  _XMM1 = v120;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Dot", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v122 = I_flrand(-8.0, 8.0);
  v123 = COERCE_UNSIGNED_INT64(*(float *)&v122);
  v124 = I_flrand(-8.0, 8.0);
  v125 = COERCE_UNSIGNED_INT64(*(float *)&v124);
  v126 = I_flrand(-8.0, 8.0);
  v127 = COERCE_UNSIGNED_INT64(*(float *)&v126);
  v128 = I_flrand(-8.0, 8.0);
  v129 = *(float *)&v128;
  _XMM0 = v127;
  __asm { vunpcklpd xmm4, xmm0, xmm3 }
  _XMM1 = v123;
  __asm { vunpcklpd xmm6, xmm1, xmm2 }
  *((_QWORD *)&v134 + 1) = *((_QWORD *)&v125 + 1);
  *(double *)&v134 = *(double *)&v125 * *(double *)&v125 + *(double *)&v123 * *(double *)&v123 + *(double *)&v127 * *(double *)&v127 + v129 * v129;
  _XMM2 = v134;
  __asm
  {
    vmulpd  xmm0, xmm4, xmm4
    vmulpd  xmm1, xmm6, xmm6
    vhaddpd xmm1, xmm1, xmm0
    vsqrtsd xmm7, xmm2, xmm2
    vhaddpd xmm2, xmm1, xmm1
    vmovddup xmm0, xmm2
    vsqrtpd xmm6, xmm0
  }
  *((_QWORD *)&v134 + 1) = *((_QWORD *)&_XMM6 + 1);
  *(double *)&v134 = *(double *)&_XMM6 - *(double *)&_XMM7;
  _XMM0 = v134;
  __asm { vandpd  xmm0, xmm0, xmm15 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Length", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm0, xmm6, xmm6 }
  *((_QWORD *)&v147 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v147 = *(double *)&_XMM0 - *(double *)&_XMM7;
  _XMM1 = v147;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Length", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v150 + 1) = *((_QWORD *)&_XMM6 + 1);
  *(double *)&v150 = *(double *)&_XMM6 - *(double *)&_XMM7;
  _XMM0 = v150;
  __asm { vandpd  xmm0, xmm0, xmm15 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Length", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm0, xmm6, xmm6 }
  *((_QWORD *)&v154 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v154 = *(double *)&_XMM0 - *(double *)&_XMM7;
  _XMM1 = v154;
  __asm { vandpd  xmm1, xmm1, xmm15 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Length", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v156 = I_flrand(-8.0, 8.0);
  v157 = COERCE_UNSIGNED_INT64(*(float *)&v156);
  v158 = I_flrand(-8.0, 8.0);
  v159 = *(float *)&v158;
  v160 = I_flrand(-8.0, 8.0);
  v161 = COERCE_UNSIGNED_INT64(*(float *)&v160);
  v162 = I_flrand(-8.0, 8.0);
  v163 = *(float *)&v162;
  _XMM1 = v157;
  _XMM0 = v161;
  __asm
  {
    vunpcklpd xmm12, xmm0, xmm3
    vunpcklpd xmm13, xmm1, xmm2
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v168 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v169 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  *(double *)&v171 = *(float *)&_XMM0;
  v170 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v172 = *(float *)&_XMM0;
  _XMM0 = v171;
  __asm { vunpcklpd xmm5, xmm0, xmm3 }
  _XMM1 = v168;
  __asm { vunpcklpd xmm7, xmm1, xmm2 }
  *((_QWORD *)&v177 + 1) = *((_QWORD *)&v157 + 1);
  *(double *)&v177 = (*(double *)&v157 - *(double *)&v168) * (*(double *)&v157 - *(double *)&v168) + (v159 - v169) * (v159 - v169) + (*(double *)&v161 - v170) * (*(double *)&v161 - v170) + (v163 - v172) * (v163 - v172);
  _XMM2 = v177;
  __asm
  {
    vsqrtsd xmm8, xmm2, xmm2
    vsubpd  xmm1, xmm13, xmm7
    vmulpd  xmm2, xmm1, xmm1
    vsubpd  xmm0, xmm12, xmm5
    vmulpd  xmm0, xmm0, xmm0
    vhaddpd xmm1, xmm2, xmm0
    vhaddpd xmm2, xmm1, xmm1
    vmovddup xmm0, xmm2
    vsqrtpd xmm6, xmm0
  }
  *((_QWORD *)&v177 + 1) = *((_QWORD *)&_XMM6 + 1);
  *(double *)&v177 = *(double *)&_XMM6 - *(double *)&_XMM8;
  _XMM0 = v177;
  __asm { vandpd  xmm0, xmm0, xmm10 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Distance", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm0, xmm6, xmm6 }
  *((_QWORD *)&v192 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v192 = *(double *)&_XMM0 - *(double *)&_XMM8;
  _XMM1 = v192;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Distance", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v195 + 1) = *((_QWORD *)&_XMM6 + 1);
  *(double *)&v195 = *(double *)&_XMM6 - *(double *)&_XMM8;
  _XMM0 = v195;
  __asm { vandpd  xmm0, xmm0, xmm10 }
  if ( *(double *)&_XMM0 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Distance", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm0, xmm6, xmm6 }
  *((_QWORD *)&v199 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v199 = *(double *)&_XMM0 - *(double *)&_XMM8;
  _XMM1 = v199;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Distance", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v201 = I_flrand(-8.0, 8.0);
  v202 = COERCE_UNSIGNED_INT64(*(float *)&v201);
  v203 = I_flrand(-8.0, 8.0);
  v204 = COERCE_UNSIGNED_INT64(*(float *)&v203);
  v205 = I_flrand(-8.0, 8.0);
  *(double *)&v207 = *(float *)&v205;
  v206 = *(float *)&v205;
  v208 = I_flrand(-8.0, 8.0);
  v209 = *(float *)&v208;
  _XMM1 = v202;
  __asm { vunpcklpd xmm5, xmm1, xmm2 }
  _XMM0 = v207;
  __asm
  {
    vunpcklpd xmm4, xmm0, xmm3
    vmulpd  xmm0, xmm4, xmm4
    vmulpd  xmm1, xmm5, xmm5
    vhaddpd xmm1, xmm1, xmm0
    vhaddpd xmm2, xmm1, xmm1
    vmovddup xmm0, xmm2
    vsqrtpd xmm1, xmm0
    vdivpd  xmm9, xmm5, xmm1
    vdivpd  xmm8, xmm4, xmm1
  }
  *((_QWORD *)&v222 + 1) = *((_QWORD *)&v204 + 1);
  *(double *)&v222 = *(double *)&v204 * *(double *)&v204 + *(double *)&v202 * *(double *)&v202 + v206 * v206 + v209 * v209;
  _XMM2 = v222;
  __asm { vsqrtsd xmm1, xmm2, xmm2 }
  v428 = v209;
  v225 = 1.0 / *(double *)&_XMM1;
  *((_QWORD *)&v222 + 1) = *((_QWORD *)&_XMM9 + 1);
  *(double *)&v222 = *(double *)&_XMM9 - 1.0 / *(double *)&_XMM1 * *(double *)&v202;
  _XMM1 = v222;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Normalize", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm9, xmm9 }
  *((_QWORD *)&v230 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v230 = *(double *)&_XMM1 - v225 * *(double *)&v204;
  _XMM1 = v230;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Normalize", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v233 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v233 = *(double *)&_XMM8 - v225 * v206;
  _XMM1 = v233;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Normalize", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm8, xmm8 }
  *((_QWORD *)&v237 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v237 = *(double *)&_XMM1 - v225 * v428;
  _XMM1 = v237;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Normalize", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v239 = I_flrand(-8.0, 8.0);
  v240 = COERCE_UNSIGNED_INT64(*(float *)&v239);
  v241 = I_flrand(-8.0, 8.0);
  v242 = *(float *)&v241;
  v243 = I_flrand(-8.0, 8.0);
  *(double *)&v244 = *(float *)&v243;
  v434 = *(float *)&v243;
  v245 = I_flrand(-8.0, 8.0);
  v442 = *(float *)&v245;
  _XMM0 = v244;
  _XMM1 = v240;
  __asm
  {
    vunpcklpd xmm7, xmm0, xmm3
    vunpcklpd xmm8, xmm1, xmm2
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v250 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v251 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v429 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v438 = *(float *)&_XMM0;
  _XMM0 = *(unsigned __int64 *)&v429;
  _XMM1 = v250;
  __asm
  {
    vunpcklpd xmm4, xmm1, xmm2
    vunpcklpd xmm1, xmm0, xmm3
    vaddpd  xmm7, xmm1, xmm7
    vaddpd  xmm8, xmm4, xmm8
  }
  *((_QWORD *)&v259 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v259 = *(double *)&_XMM8 - (*(double *)&v250 + *(double *)&v240);
  _XMM1 = v259;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Add", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm8, xmm8 }
  *((_QWORD *)&v263 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v263 = *(double *)&_XMM1 - (v251 + v242);
  _XMM1 = v263;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Add", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v266 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v266 = *(double *)&_XMM7 - (v429 + v434);
  _XMM1 = v266;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Add", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm7, xmm7 }
  *((_QWORD *)&v270 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v270 = *(double *)&_XMM1 - (v438 + v442);
  _XMM1 = v270;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Add", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v272 = I_flrand(-8.0, 8.0);
  v273 = COERCE_UNSIGNED_INT64(*(float *)&v272);
  v274 = I_flrand(-8.0, 8.0);
  v275 = *(float *)&v274;
  v276 = I_flrand(-8.0, 8.0);
  *(double *)&v277 = *(float *)&v276;
  v435 = *(float *)&v276;
  v278 = I_flrand(-8.0, 8.0);
  v439 = *(float *)&v278;
  _XMM0 = v277;
  _XMM1 = v273;
  __asm
  {
    vunpcklpd xmm7, xmm0, xmm3
    vunpcklpd xmm8, xmm1, xmm2
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v283 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v284 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v430 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v443 = *(float *)&_XMM0;
  _XMM0 = *(unsigned __int64 *)&v430;
  _XMM1 = v283;
  __asm
  {
    vunpcklpd xmm4, xmm1, xmm2
    vunpcklpd xmm1, xmm0, xmm3
    vsubpd  xmm7, xmm7, xmm1
    vsubpd  xmm8, xmm8, xmm4
  }
  *((_QWORD *)&v292 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v292 = *(double *)&_XMM8 - (*(double *)&v273 - *(double *)&v283);
  _XMM1 = v292;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Sub", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm8, xmm8 }
  *((_QWORD *)&v296 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v296 = *(double *)&_XMM1 - (v275 - v284);
  _XMM1 = v296;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Sub", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v299 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v299 = *(double *)&_XMM7 - (v435 - v430);
  _XMM1 = v299;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Sub", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm7, xmm7 }
  *((_QWORD *)&v303 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v303 = *(double *)&_XMM1 - (v439 - v443);
  _XMM1 = v303;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Sub", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v305 = I_flrand(-8.0, 8.0);
  v306 = COERCE_UNSIGNED_INT64(*(float *)&v305);
  v307 = I_flrand(-8.0, 8.0);
  v308 = *(float *)&v307;
  v309 = I_flrand(-8.0, 8.0);
  *(double *)&v310 = *(float *)&v309;
  v436 = *(float *)&v309;
  v311 = I_flrand(-8.0, 8.0);
  v444 = *(float *)&v311;
  _XMM0 = v310;
  _XMM1 = v306;
  __asm
  {
    vunpcklpd xmm7, xmm0, xmm3
    vunpcklpd xmm8, xmm1, xmm2
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v316 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v317 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v431 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v440 = *(float *)&_XMM0;
  _XMM0 = *(unsigned __int64 *)&v431;
  _XMM1 = v316;
  __asm
  {
    vunpcklpd xmm4, xmm1, xmm2
    vunpcklpd xmm1, xmm0, xmm3
    vmulpd  xmm7, xmm1, xmm7
    vmulpd  xmm8, xmm4, xmm8
  }
  *((_QWORD *)&v325 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v325 = *(double *)&_XMM8 - *(double *)&v316 * *(double *)&v306;
  _XMM1 = v325;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Mul", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm8, xmm8 }
  *((_QWORD *)&v329 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v329 = *(double *)&_XMM1 - v317 * v308;
  _XMM1 = v329;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Mul", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v332 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v332 = *(double *)&_XMM7 - v431 * v436;
  _XMM1 = v332;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Mul", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm7, xmm7 }
  *((_QWORD *)&v336 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v336 = *(double *)&_XMM1 - v440 * v444;
  _XMM1 = v336;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Mul", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v338 = I_flrand(-8.0, 8.0);
  v339 = COERCE_UNSIGNED_INT64(*(float *)&v338);
  v340 = I_flrand(-8.0, 8.0);
  v341 = *(float *)&v340;
  v342 = I_flrand(-8.0, 8.0);
  *(double *)&v343 = *(float *)&v342;
  v437 = *(float *)&v342;
  v344 = I_flrand(-8.0, 8.0);
  v441 = *(float *)&v344;
  _XMM0 = v343;
  _XMM1 = v339;
  __asm
  {
    vunpcklpd xmm7, xmm0, xmm3
    vunpcklpd xmm8, xmm1, xmm2
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v349 = COERCE_UNSIGNED_INT64(*(float *)&_XMM0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v350 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v432 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v445 = *(float *)&_XMM0;
  _XMM0 = *(unsigned __int64 *)&v432;
  _XMM1 = v349;
  __asm
  {
    vunpcklpd xmm4, xmm1, xmm2
    vunpcklpd xmm1, xmm0, xmm3
    vdivpd  xmm7, xmm7, xmm1
    vdivpd  xmm8, xmm8, xmm4
  }
  *((_QWORD *)&v358 + 1) = *((_QWORD *)&_XMM8 + 1);
  *(double *)&v358 = *(double *)&_XMM8 - *(double *)&v339 / *(double *)&v349;
  _XMM1 = v358;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Div", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm8, xmm8 }
  *((_QWORD *)&v362 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v362 = *(double *)&_XMM1 - v341 / v350;
  _XMM1 = v362;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Div", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v365 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v365 = *(double *)&_XMM7 - v437 / v432;
  _XMM1 = v365;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Div", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm7, xmm7 }
  *((_QWORD *)&v369 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v369 = *(double *)&_XMM1 - v441 / v445;
  _XMM1 = v369;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Div", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v371 = I_flrand(-8.0, 8.0);
  v372 = COERCE_UNSIGNED_INT64(*(float *)&v371);
  v373 = I_flrand(-8.0, 8.0);
  v374 = *(float *)&v373;
  v375 = I_flrand(-8.0, 8.0);
  v376 = COERCE_UNSIGNED_INT64(*(float *)&v375);
  v377 = I_flrand(-8.0, 8.0);
  v433 = *(float *)&v377;
  _XMM1 = v372;
  _XMM0 = v376;
  __asm
  {
    vunpcklpd xmm6, xmm0, xmm3
    vunpcklpd xmm7, xmm1, xmm2
  }
  _XMM0 = LODWORD(FLOAT_N8_0);
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  __asm { vcmpneqss xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
  *((_QWORD *)&v387 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v387 = *(float *)&_XMM0;
  _XMM4 = v387;
  __asm
  {
    vmovddup xmm3, xmm4
    vdivpd  xmm9, xmm7, xmm3
    vdivpd  xmm7, xmm6, xmm3
  }
  v391 = 1.0 / *(float *)&_XMM0;
  *((_QWORD *)&v387 + 1) = *((_QWORD *)&_XMM9 + 1);
  *(double *)&v387 = *(double *)&_XMM9 - *(double *)&v372 * v391;
  _XMM1 = v387;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4DivDouble", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm9, xmm9 }
  *((_QWORD *)&v396 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v396 = *(double *)&_XMM1 - v374 * v391;
  _XMM1 = v396;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4DivDouble", v427) )
      __debugbreak();
  }
  *((_QWORD *)&v399 + 1) = *((_QWORD *)&_XMM7 + 1);
  *(double *)&v399 = *(double *)&_XMM7 - *(double *)&v376 * v391;
  _XMM1 = v399;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4DivDouble", v427) )
      __debugbreak();
  }
  __asm { vunpckhpd xmm1, xmm7, xmm7 }
  *((_QWORD *)&v403 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v403 = *(double *)&_XMM1 - v391 * v433;
  _XMM1 = v403;
  __asm { vandpd  xmm1, xmm1, xmm10 }
  if ( *(double *)&_XMM1 >= 0.001000000047497451 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4DivDouble", v427) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v405 = I_flrand(-8.0, 8.0);
  _XMM6 = COERCE_UNSIGNED_INT64(*(float *)&v405);
  v407 = I_flrand(-8.0, 8.0);
  _XMM10 = COERCE_UNSIGNED_INT64(*(float *)&v407);
  v409 = I_flrand(-8.0, 8.0);
  _XMM11 = COERCE_UNSIGNED_INT64(*(float *)&v409);
  v411 = I_flrand(-8.0, 8.0);
  *((_QWORD *)&v413 + 1) = 0i64;
  *(double *)&v413 = *(float *)&v411;
  _XMM12 = v413;
  _XMM1 = _XMM6;
  __asm { vunpcklpd xmm4, xmm1, xmm2 }
  _XMM0 = _XMM11;
  __asm
  {
    vxorpd  xmm1, xmm1, xmm1
    vunpcklpd xmm2, xmm0, xmm3
    vsubpd  xmm9, xmm1, xmm4
    vxorpd  xmm0, xmm6, xmm7
    vsubpd  xmm8, xmm1, xmm2
  }
  if ( *(double *)&_XMM9 != *(double *)&_XMM0 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (double) component", "Double4Negate", v427) )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm9, xmm9
    vxorpd  xmm0, xmm10, xmm7
  }
  if ( *(double *)&_XMM1 != *(double *)&_XMM0 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (double) component", "Double4Negate", v427) )
      __debugbreak();
  }
  __asm { vxorpd  xmm0, xmm11, xmm7 }
  if ( *(double *)&_XMM8 != *(double *)&_XMM0 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (double) component", "Double4Negate", v427) )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm8, xmm8
    vxorpd  xmm0, xmm12, xmm7
  }
  if ( *(double *)&_XMM1 != *(double *)&_XMM0 )
  {
    LODWORD(v427) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (double) component", "Double4Negate", v427) )
      __debugbreak();
  }
}

/*
==============
Float4LoadStoreTest
==============
*/
void Float4LoadStoreTest()
{
  __m128 v1; 
  char v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  __m128 v12; 
  char v13; 
  __m128 v14; 
  unsigned __int64 v15; 
  __m128 v17; 
  __m128 v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  float v27; 
  __int128 v33; 
  __m128 v37; 
  __m128 v38; 
  __m128 v40; 
  __m128 v44; 
  __int128 v46; 
  __m128 v54; 
  __m128 v61; 
  __int128 v66; 
  __int128 v67; 
  float v68; 
  float v69; 
  float v70; 
  __m128 v85; 
  __int128 v86; 
  __int128 v87; 
  float v94; 
  float v95; 
  __m128 v102; 
  __int128 v103; 
  __int128 v104; 
  __int128 v109; 
  __int128 v110; 
  float v111; 
  float v112; 
  float v117; 
  __int128 v118; 
  float v120; 
  double v121; 
  __m128 v125; 
  __m128 v126; 
  __m128 v127; 
  __m128 v128; 
  __m128 v130; 
  __m128 v131; 
  __m128 v132; 
  __int128 v133; 
  __int128 v134; 
  __int128 v139; 
  __int128 v140; 
  float v141; 
  float v142; 
  double v143; 
  __m128 v148; 
  __m128 v149; 
  __m128 v150; 
  __m128 v151; 
  __int128 v152; 
  __int128 v153; 
  float v154; 
  float v155; 
  double v156; 
  __m128 v161; 
  __m128 v162; 
  __int128 v163; 
  __int128 v164; 
  __m128 v169; 
  __int128 v170; 
  __int128 v171; 
  float v172; 
  __m128 v177; 
  __int128 v178; 
  __int128 v179; 
  float v180; 
  __m128 v185; 
  __int128 v186; 
  __int128 v187; 
  float v188; 
  __m128 v193; 
  __int128 v194; 
  __int128 v195; 
  float v196; 
  float v197; 
  float v198; 
  float v203; 
  float v204; 
  __m128 v205; 
  __int128 v211; 
  __int128 v212; 
  __int128 v217; 
  __int128 v218; 
  float v219; 
  __int128 v224; 
  __int128 v225; 
  float v226; 
  __m128 v231; 
  __int128 v232; 
  __int128 v233; 
  float v234; 
  float v235; 
  float v240; 
  __m128 v241; 
  __int128 v242; 
  __int128 v243; 
  float v244; 
  float v245; 
  float v246; 
  __int128 v251; 
  __int128 v252; 
  float v253; 
  float v254; 
  float v255; 
  __int128 v260; 
  __int128 v261; 
  float v262; 
  float v263; 
  float v264; 
  __int128 v269; 
  __int128 v270; 
  float v271; 
  float v272; 
  float v273; 
  __int128 v278; 
  __int128 v279; 
  float v280; 
  float v281; 
  float v282; 
  __int128 v287; 
  float v289; 
  float v290; 
  float v291; 
  __int128 v296; 
  float v298; 
  __int128 v309; 
  float v311; 
  float v312; 
  float v313; 
  __int128 v318; 
  float v320; 
  float v321; 
  float v322; 
  __m128 v327; 
  __int128 v332; 
  __int128 v351; 
  float v353; 
  float v354; 
  float v355; 
  __int128 v360; 
  float v362; 
  float v363; 
  float v364; 
  __m128 v369; 
  __int128 v374; 
  __int128 v393; 
  __int128 v394; 
  float v395; 
  float v396; 
  float v401; 
  __int128 v402; 
  __int128 v403; 
  __int128 v408; 
  __int128 v417; 
  __int128 v418; 
  float v419; 
  float v420; 
  float v425; 
  __int128 v426; 
  __int128 v427; 
  __int128 v432; 
  float v441; 
  float v442; 
  float v443; 
  __m128 v445; 
  __m128 v449; 
  __m128 v453; 
  float v456; 
  float v457; 
  float v458; 
  __m128 v460; 
  __m128 v463; 
  __m128 v464; 
  __m128 v465; 
  __m128 v466; 
  __int64 v467; 
  float v468; 
  float v469; 
  float v470; 
  float v471; 
  float v472; 
  float v473; 
  float v474; 
  float v475; 
  float v476; 
  float v477; 
  float v478; 
  float v479; 
  float v480; 
  float v481; 
  float v482; 
  float v483; 
  float v484; 
  float v485; 
  float v486; 
  float v487; 
  float v488; 
  float v489; 
  float v490; 
  float v491; 
  unsigned int v492; 
  unsigned int v493; 
  float v494; 
  float v495; 
  float v496; 
  float v497; 
  float v498; 
  float v499; 
  float v500; 
  float v501; 
  float v502; 
  float v503; 
  float v504; 
  float v505; 
  float v506; 
  float v507; 
  float v508; 
  float v509; 
  float v510; 
  float v511; 
  float v512; 
  float v513; 
  float v514; 
  __m256i v515; 
  __m128 v516; 
  __m256i v517; 
  __m256i v518; 
  __int128 v519; 
  __m128 v520; 
  float4 v521; 
  float4 v522; 
  double v523; 
  float4 v524; 
  __int128 v525; 
  __int128 v526; 
  float v527; 
  float v528; 
  float v529; 
  float v530; 
  __m128 v531; 
  int v532; 
  int v533; 
  float v534; 
  vec3_t element; 
  vec3_t v536; 
  vec3_t v537; 
  int v538; 
  float v539; 
  float v540; 
  float v541; 
  int v542; 
  int v543; 
  int v544; 
  int v545; 
  int v546; 
  __m128 v; 
  __int128 v548; 
  float4 result[2]; 
  float4 v550[2]; 
  __int128 v551; 
  __int128 v552; 
  __int128 v553; 
  __int128 v554; 
  __m256i v555; 
  __int128 v556; 
  __int128 v557; 
  __int128 v558; 
  __int128 v559; 
  __m128 v560; 
  __m128 v561; 
  __m128 v562; 
  __m128 v563; 
  __m128 v564; 
  __m128 v565; 
  float v566; 
  __m128 v567; 
  __int128 v568; 
  __int128 v569; 
  __m128 v570; 

  _XMM15 = LODWORD(FLOAT_1_0);
  v531 = (__m128)_xmm;
  v = (__m128)_xmm;
  if ( _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_f32[0] != 2.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Load", g_unitSavedSeed_0) )
    __debugbreak();
  if ( _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_f32[0] != v.m128_f32[2] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Load", v467) )
      __debugbreak();
  }
  v1 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255);
  *((_QWORD *)&v519 + 1) = v1.m128_u64[1];
  if ( v1.m128_f32[0] != v.m128_f32[3] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Load", v467) )
      __debugbreak();
  }
  result[0] = (float4)_xmm;
  _XMM6 = *(__int128 *)((char *)result + 4);
  __asm { vinsertps xmm6, xmm6, xmm8, 30h ; '0' }
  v = _XMM6;
  *(__m128 *)((char *)result + 4) = _XMM6;
  if ( _XMM6.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadUnaligned", v467) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != result[0].v.m128_f32[2] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadUnaligned", v467) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != result[0].v.m128_f32[3] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadUnaligned", v467) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != 4.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadUnaligned", v467) )
      __debugbreak();
  }
  result[0] = 0i64;
  result[1] = (float4)_xmm;
  v = (__m128)_xmm;
  if ( _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_f32[0] != 2.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadOffset", v467) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_f32[0] != result[1].v.m128_f32[2] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadOffset", v467) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_f32[0] != result[1].v.m128_f32[3] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadOffset", v467) )
      __debugbreak();
  }
  result[0] = (float4)_xmm;
  _XMM6 = *(__int128 *)((char *)result + 12);
  __asm
  {
    vinsertps xmm6, xmm6, xmm7, 10h
    vinsertps xmm6, xmm6, xmm10, 20h ; ' '
    vinsertps xmm6, xmm6, xmm8, 30h ; '0'
  }
  v = _XMM6;
  *(__m128 *)((char *)result + 12) = _XMM6;
  if ( _XMM6.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadUnalignedOffset", v467) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != 2.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadUnalignedOffset", v467) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != 3.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadUnalignedOffset", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 255);
  if ( v.m128_f32[0] != 4.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadUnalignedOffset", v467) )
      __debugbreak();
  }
  v9 = (v8 - 36) & 0xF;
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v555 = _ymm;
  v531 = 0i64;
  if ( v9 != 16 )
  {
    do
    {
      v531.m128_i8[v11] = v555.m256i_i8[v11 + 12];
      ++v11;
    }
    while ( v11 < 16 - v9 );
    v12 = v531;
  }
  v = v12;
  if ( v12.m128_f32[0] != *(float *)&v555.m256i_i32[3] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadLeft (1)", v467) )
      __debugbreak();
    v12 = v531;
  }
  v = _mm_shuffle_ps(v12, v12, 85);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadLeft (1)", v467) )
      __debugbreak();
    v12 = v531;
  }
  v = _mm_shuffle_ps(v12, v12, 170);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadLeft (1)", v467) )
      __debugbreak();
    v12 = v531;
  }
  v = _mm_shuffle_ps(v12, v12, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadLeft (1)", v467) )
      __debugbreak();
  }
  v14 = 0i64;
  v = 0i64;
  v531 = 0i64;
  v15 = 16i64 - ((v13 - 40) & 0xF);
  if ( v15 )
  {
    do
    {
      v531.m128_i8[v10] = v555.m256i_i8[v10 + 8];
      ++v10;
    }
    while ( v10 < v15 );
    v14 = v531;
  }
  v = v14;
  if ( v14.m128_f32[0] != *(float *)&v555.m256i_i32[2] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadLeft (2)", v467) )
      __debugbreak();
    v14 = v531;
  }
  v = _mm_shuffle_ps(v14, v14, 85);
  if ( v.m128_f32[0] != *(float *)&v555.m256i_i32[3] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadLeft (2)", v467) )
      __debugbreak();
    v14 = v531;
  }
  v = _mm_shuffle_ps(v14, v14, 170);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadLeft (2)", v467) )
      __debugbreak();
    v14 = v531;
  }
  v = _mm_shuffle_ps(v14, v14, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadLeft (2)", v467) )
      __debugbreak();
  }
  _XMM2 = LODWORD(FLOAT_1_0);
  v17 = 0i64;
  v17.m128_f32[0] = 1.0;
  v = _mm_shuffle_ps(v17, v17, 85);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadX", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v17, v17, 170);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadX", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v17, v17, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadX", v467) )
      __debugbreak();
  }
  __asm
  {
    vunpcklps xmm3, xmm15, xmm7
    vxorpd  xmm2, xmm2, xmm2
  }
  v20.m128_u64[1] = *((_QWORD *)&_XMM2 + 1);
  v20.m128_u64[0] = *(unsigned __int64 *)&_XMM3;
  v = v20;
  if ( v20.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadXY", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v20, v20, 85);
  if ( v.m128_f32[0] != 2.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadXY", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v20, v20, 170);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadXY", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v20, v20, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadXY", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85);
  if ( v.m128_f32[0] != 2.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadVec2", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadVec2", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadVec2", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85);
  if ( v.m128_f32[0] != 2.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadVec3", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170);
  if ( v.m128_f32[0] != 3.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadVec3", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadVec3", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85);
  if ( v.m128_f32[0] != 2.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadVec3Aligned", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170);
  if ( v.m128_f32[0] != 3.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadVec3Aligned", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadVec3Aligned", v467) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v21 = I_flrand(-8.0, 8.0);
  v22 = *(float *)&v21;
  v23 = I_flrand(-8.0, 8.0);
  v24 = *(float *)&v23;
  v25 = I_flrand(-8.0, 8.0);
  _XMM14 = _xmm;
  v27 = *(float *)&v25;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, xmm6, 0
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm12, 20h ; ' '
  }
  v33 = _XMM0;
  *(float *)&v33 = v22;
  _XMM1 = v33;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm12, 20h ; ' '
    vinsertps xmm7, xmm1, xmm14, 0F0h ; 'ð'
  }
  v = _XMM7;
  if ( _XMM7.m128_f32[0] != v22 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadVec3Homogenous", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM7, _XMM7, 85);
  if ( v.m128_f32[0] != v24 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadVec3Homogenous", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM7, _XMM7, 170);
  if ( v.m128_f32[0] != v27 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadVec3Homogenous", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM7, _XMM7, 255);
  if ( v.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadVec3Homogenous", v467) )
      __debugbreak();
  }
  v37 = (__m128)LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)v37.m128_u64 = I_flrand(-8.0, 8.0);
  v38 = v37;
  _XMM0 = 0i64;
  v40 = _mm_shuffle_ps(v38, v38, 0);
  __asm { vinsertps xmm0, xmm0, xmm7, 0 }
  v = v40;
  if ( v40.m128_f32[0] != v38.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadFloat", v467) )
      __debugbreak();
  }
  v = v40;
  if ( v40.m128_f32[0] != v38.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadFloat", v467) )
      __debugbreak();
  }
  v = v40;
  if ( v40.m128_f32[0] != v38.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadFloat", v467) )
      __debugbreak();
  }
  v = v40;
  if ( v40.m128_f32[0] != v38.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadFloat", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85);
  if ( v.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadUInt", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170);
  if ( v.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadUInt", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255);
  if ( v.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadUInt", v467) )
      __debugbreak();
  }
  *(_QWORD *)&v519 = 0x7FFF800000020001i64;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_308]
    vpmovsxwd xmm1, xmm0
  }
  v44 = _mm_cvtepi32_ps(_XMM1);
  v = v44;
  if ( v44.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadShort4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v44, v44, 85);
  if ( v.m128_f32[0] != (float)2 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadShort4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v44, v44, 170);
  if ( v.m128_f32[0] != (float)-32768 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadShort4", v467) )
      __debugbreak();
  }
  v46 = 0i64;
  *(float *)&v46 = (float)0x7FFF;
  _XMM0 = v46;
  v = _mm_shuffle_ps(v44, v44, 255);
  if ( v.m128_f32[0] != (float)0x7FFF )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadShort4", v467) )
      __debugbreak();
  }
  v.m128_i32[0] = 131073;
  v.m128_i16[2] = 0x7FFF;
  __asm
  {
    vlddqu  xmm1, [rsp+3B8h+var_288]
    vpxor   xmm0, xmm0, xmm0
    vpunpcklwd xmm1, xmm1, xmm0
  }
  _XMM2 = _mm_cvtepi32_ps(_XMM1);
  __asm { vinsertps xmm6, xmm2, xmm2, 8 }
  v = _XMM6;
  if ( _XMM6.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadUShort3", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 85);
  if ( v.m128_f32[0] != (float)2 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadUShort3", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 170);
  if ( v.m128_f32[0] != (float)0x7FFF )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadUShort3", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadUShort3", v467) )
      __debugbreak();
  }
  LODWORD(v519) = -16580095;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_308]
    vpmovzxbd xmm1, xmm0
  }
  v54 = _mm_cvtepi32_ps(_XMM1);
  v = v54;
  if ( v54.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadByte4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v54, v54, 85);
  if ( v.m128_f32[0] != (float)2 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadByte4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v54, v54, 170);
  if ( v.m128_f32[0] != (float)3 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadByte4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v54, v54, 255);
  if ( v.m128_f32[0] != (float)255 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadByte4", v467) )
      __debugbreak();
  }
  v.m128_i16[0] = 513;
  v.m128_i8[2] = -1;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_288]
    vpmovzxbd xmm1, xmm0
  }
  _XMM2 = _mm_cvtepi32_ps(_XMM1);
  __asm { vinsertps xmm6, xmm2, xmm2, 8 }
  v = _XMM6;
  if ( _XMM6.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadByte4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 85);
  if ( v.m128_f32[0] != (float)2 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadByte4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 170);
  if ( v.m128_f32[0] != (float)255 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadByte4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadByte4", v467) )
      __debugbreak();
  }
  LODWORD(v519) = 2139095553;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_308]
    vpmovsxbd xmm1, xmm0
  }
  v61 = _mm_cvtepi32_ps(_XMM1);
  v = v61;
  if ( v61.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadChar4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v61, v61, 85);
  if ( v.m128_f32[0] != (float)2 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadChar4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v61, v61, 170);
  if ( v.m128_f32[0] != (float)-128 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadChar4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(v61, v61, 255);
  if ( v.m128_f32[0] != (float)127 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadChar4", v467) )
      __debugbreak();
  }
  v.m128_i16[0] = -32767;
  v.m128_i8[2] = 127;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_288]
    vpmovsxbd xmm1, xmm0
  }
  _XMM2 = _mm_cvtepi32_ps(_XMM1);
  __asm { vinsertps xmm6, xmm2, xmm2, 8 }
  v = _XMM6;
  if ( _XMM6.m128_f32[0] != 1.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadChar4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 85);
  if ( v.m128_f32[0] != (float)-128 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadChar4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 170);
  if ( v.m128_f32[0] != (float)127 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadChar4", v467) )
      __debugbreak();
  }
  v = _mm_shuffle_ps(_XMM6, _XMM6, 255);
  if ( v.m128_f32[0] != 0.0 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadChar4", v467) )
      __debugbreak();
  }
  v66 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v66 = I_flrand(-8.0, 8.0);
  v67 = v66;
  *(double *)&v66 = I_flrand(-8.0, 8.0);
  v68 = *(float *)&v66;
  *(double *)&v66 = I_flrand(-8.0, 8.0);
  v69 = *(float *)&v66;
  *(double *)&v66 = I_flrand(-8.0, 8.0);
  v70 = *(float *)&v66;
  _XMM2 = v67;
  __asm
  {
    vinsertps xmm2, xmm2, xmm7, 10h
    vinsertps xmm2, xmm2, xmm8, 20h ; ' '
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
    vcvtps2dq xmm0, xmm14
    vpslld  xmm1, xmm0, 0Ch
  }
  _XMM13 = _mm_cvtepi32_ps(_XMM1);
  _XMM0 = _mm128_mul_ps(_XMM2, _XMM13);
  __asm
  {
    vcvttps2dq xmm6, xmm0
    vpextrd rcx, xmm6, 0
  }
  v = _XMM13;
  __asm
  {
    vpextrd rbx, xmm6, 1
    vpextrd rdi, xmm6, 2
    vpextrd rsi, xmm6, 3
  }
  if ( (_DWORD)_RCX != (int)(float)(*(float *)&v67 * 4096.0) )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (1)", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RBX != (int)(float)(v68 * 4096.0) )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (2)", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RDI != (int)(float)(v69 * 4096.0) )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (3)", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RSI != (int)(float)(v70 * 4096.0) )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (4)", v467) )
      __debugbreak();
  }
  __asm { vrcpps  xmm1, xmm13 }
  v85 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM6), _XMM1);
  v520 = _XMM1;
  result[0] = (float4)v85;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v85.m128_f32[0] - *(float *)&v67) & _xmm) >= 0.010000001 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ConvertFromFixedSigned", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v85, v85, 85);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(result[0].v.m128_f32[0] - v68) & _xmm) >= 0.010000001 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ConvertFromFixedSigned", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v85, v85, 170);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(result[0].v.m128_f32[0] - v69) & _xmm) >= 0.010000001 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ConvertFromFixedSigned", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v85, v85, 255);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(result[0].v.m128_f32[0] - v70) & _xmm) >= 0.010000001 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ConvertFromFixedSigned", v467) )
      __debugbreak();
  }
  v86 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v86 = I_flrand(-8.0, 8.0);
  v87 = v86;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v87;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm7, xmm0, xmm1 }
  _mm_shuffle_ps(_XMM7, _XMM7, 255);
  LODWORD(v94) = _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_u32[0];
  LODWORD(v95) = _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_u32[0];
  _XMM0 = _mm128_mul_ps(_XMM7, v);
  __asm
  {
    vcvttps2dq xmm6, xmm0
    vpextrd rcx, xmm6, 0
    vpextrd rbx, xmm6, 1
    vpextrd rdi, xmm6, 2
  }
  result[0] = (float4)_XMM6;
  __asm { vpextrd rsi, xmm6, 3 }
  if ( (_DWORD)_RCX != (int)(float)(_XMM7.m128_f32[0] * 4096.0) )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (5)", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RBX != (int)(float)(v94 * 4096.0) )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (6)", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RDI != (int)(float)(v95 * 4096.0) )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (7)", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RSI != (int)(float)(_mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] * 4096.0) )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (8)", v467) )
      __debugbreak();
  }
  v102 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM6), v520);
  result[0] = (float4)v102;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v102.m128_f32[0] - _XMM7.m128_f32[0]) & _xmm) >= 0.010000001 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ConvertFromFixed", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v102, v102, 85);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(result[0].v.m128_f32[0] - v94) & _xmm) >= 0.010000001 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ConvertFromFixed", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v102, v102, 170);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(result[0].v.m128_f32[0] - v95) & _xmm) >= 0.010000001 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ConvertFromFixed", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v102, v102, 255);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(result[0].v.m128_f32[0] - _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0]) & _xmm) >= 0.010000001 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ConvertFromFixed", v467) )
      __debugbreak();
  }
  v103 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v103 = I_flrand(-8.0, 8.0);
  v104 = v103;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v104;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  result[0] = (float4)_xmm;
  result[1] = (float4)_xmm;
  v548 = _xmm;
  v109 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v109 = I_flrand(-8.0, 8.0);
  v110 = v109;
  *(double *)&v109 = I_flrand(-8.0, 8.0);
  v111 = *(float *)&v109;
  *(double *)&v109 = I_flrand(-8.0, 8.0);
  v112 = *(float *)&v109;
  *(double *)&v109 = I_flrand(-8.0, 8.0);
  _XMM7 = v110;
  __asm
  {
    vinsertps xmm7, xmm7, xmm12, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  result[0] = (float4)_XMM7;
  v117 = *(float *)&v109;
  v118 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v118 = I_flrand(-8.0, 8.0);
  v483 = *(float *)&v118;
  _XMM6 = v118;
  *(double *)&v118 = I_flrand(-8.0, 8.0);
  v488 = *(float *)&v118;
  *(double *)&v118 = I_flrand(-8.0, 8.0);
  v120 = *(float *)&v118;
  v121 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm6, xmm6, xmm8, 10h
    vinsertps xmm6, xmm6, xmm15, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v125 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM6, _XMM7, 80), _XMM7, 232);
  result[0] = (float4)v125;
  if ( v125.m128_f32[0] != v483 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyX", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v125, v125, 85);
  if ( result[0].v.m128_f32[0] != v111 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyX", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v125, v125, 170);
  if ( result[0].v.m128_f32[0] != v112 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyX", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v125, v125, 255);
  if ( result[0].v.m128_f32[0] != v117 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyX", v467) )
      __debugbreak();
  }
  v126 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM7, _XMM6, 80), _XMM7, 232);
  result[0] = (float4)v126;
  if ( v126.m128_f32[0] != *(float *)&v110 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyY", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v126, v126, 85);
  if ( result[0].v.m128_f32[0] != v488 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyY", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v126, v126, 170);
  if ( result[0].v.m128_f32[0] != v112 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyY", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v126, v126, 255);
  if ( result[0].v.m128_f32[0] != v117 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyY", v467) )
      __debugbreak();
  }
  v127 = _mm_shuffle_ps(_XMM7, _mm_shuffle_ps(_XMM6, _XMM7, 250), 132);
  result[0] = (float4)v127;
  if ( v127.m128_f32[0] != *(float *)&v110 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyZ", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v127, v127, 85);
  if ( result[0].v.m128_f32[0] != v111 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyZ", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v127, v127, 170);
  if ( result[0].v.m128_f32[0] != v120 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyZ", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v127, v127, 255);
  if ( result[0].v.m128_f32[0] != v117 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyZ", v467) )
      __debugbreak();
  }
  v128 = _mm_shuffle_ps(_XMM7, _mm_shuffle_ps(_XMM7, _XMM6, 250), 132);
  result[0] = (float4)v128;
  if ( v128.m128_f32[0] != *(float *)&v110 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v128, v128, 85);
  if ( result[0].v.m128_f32[0] != v111 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v128, v128, 170);
  if ( result[0].v.m128_f32[0] != v112 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v128, v128, 255);
  if ( result[0].v.m128_f32[0] != *(float *)&v121 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyW", v467) )
      __debugbreak();
  }
  __asm { vblendps xmm8, xmm7, xmm6, 0Ch }
  result[0] = (float4)_XMM8;
  if ( _XMM8.m128_f32[0] != *(float *)&v110 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyZW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM8, _XMM8, 85);
  if ( result[0].v.m128_f32[0] != v111 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyZW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM8, _XMM8, 170);
  if ( result[0].v.m128_f32[0] != v120 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyZW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM8, _XMM8, 255);
  if ( result[0].v.m128_f32[0] != *(float *)&v121 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyZW", v467) )
      __debugbreak();
  }
  v130 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM7, _XMM6, 0), _XMM7, 232);
  result[0] = (float4)v130;
  if ( v130.m128_f32[0] != *(float *)&v110 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyXToY", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v130, v130, 85);
  if ( result[0].v.m128_f32[0] != v483 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyXToY", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v130, v130, 170);
  if ( result[0].v.m128_f32[0] != v112 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyXToY", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v130, v130, 255);
  if ( result[0].v.m128_f32[0] != v117 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyXToY", v467) )
      __debugbreak();
  }
  v131 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM7, _XMM6, 85), _XMM7, 230);
  result[0] = (float4)v131;
  if ( v131.m128_f32[0] != v488 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyYToX", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v131, v131, 85);
  if ( result[0].v.m128_f32[0] != v111 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyYToX", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v131, v131, 170);
  if ( result[0].v.m128_f32[0] != v112 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyYToX", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v131, v131, 255);
  if ( result[0].v.m128_f32[0] != v117 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyYToX", v467) )
      __debugbreak();
  }
  v132 = _mm_shuffle_ps(_XMM7, _XMM6, 68);
  result[0] = (float4)v132;
  if ( v132.m128_f32[0] != *(float *)&v110 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyXYToZW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v132, v132, 85);
  if ( result[0].v.m128_f32[0] != v111 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyXYToZW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v132, v132, 170);
  if ( result[0].v.m128_f32[0] != v483 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyXYToZW", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v132, v132, 255);
  if ( result[0].v.m128_f32[0] != v488 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyXYToZW", v467) )
      __debugbreak();
  }
  v133 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v133 = I_flrand(-8.0, 8.0);
  v134 = v133;
  *(double *)&v133 = I_flrand(-8.0, 8.0);
  v468 = *(float *)&v133;
  *(double *)&v133 = I_flrand(-8.0, 8.0);
  v476 = *(float *)&v133;
  *(double *)&v133 = I_flrand(-8.0, 8.0);
  _XMM8 = v134;
  __asm
  {
    vinsertps xmm8, xmm8, xmm7, 10h
    vinsertps xmm8, xmm8, xmm9, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  result[0] = (float4)_XMM8;
  v498 = *(float *)&v133;
  v139 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v139 = I_flrand(-8.0, 8.0);
  v140 = v139;
  *(double *)&v139 = I_flrand(-8.0, 8.0);
  v141 = *(float *)&v139;
  *(double *)&v139 = I_flrand(-8.0, 8.0);
  v142 = *(float *)&v139;
  v143 = I_flrand(-8.0, 8.0);
  _XMM7 = v140;
  __asm
  {
    vinsertps xmm7, xmm7, xmm14, 10h
    vinsertps xmm7, xmm7, xmm15, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v148 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM8, _XMM7, 80), _XMM7, 232);
  result[0] = (float4)v148;
  if ( v148.m128_f32[0] != *(float *)&v134 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyXTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v148, v148, 85);
  if ( result[0].v.m128_f32[0] != v141 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyXTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v148, v148, 170);
  if ( result[0].v.m128_f32[0] != v142 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyXTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v148, v148, 255);
  if ( result[0].v.m128_f32[0] != *(float *)&v143 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyXTo", v467) )
      __debugbreak();
  }
  v149 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM7, _XMM8, 80), _XMM7, 232);
  result[0] = (float4)v149;
  if ( v149.m128_f32[0] != *(float *)&v140 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyYTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v149, v149, 85);
  if ( result[0].v.m128_f32[0] != v468 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyYTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v149, v149, 170);
  if ( result[0].v.m128_f32[0] != v142 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyYTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v149, v149, 255);
  if ( result[0].v.m128_f32[0] != *(float *)&v143 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyYTo", v467) )
      __debugbreak();
  }
  v150 = _mm_shuffle_ps(_XMM7, _mm_shuffle_ps(_XMM8, _XMM7, 250), 132);
  result[0] = (float4)v150;
  if ( v150.m128_f32[0] != *(float *)&v140 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyZTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v150, v150, 85);
  if ( result[0].v.m128_f32[0] != v141 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyZTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v150, v150, 170);
  if ( result[0].v.m128_f32[0] != v476 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyZTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v150, v150, 255);
  if ( result[0].v.m128_f32[0] != *(float *)&v143 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyZTo", v467) )
      __debugbreak();
  }
  v151 = _mm_shuffle_ps(_XMM7, _mm_shuffle_ps(_XMM7, _XMM8, 250), 132);
  result[0] = (float4)v151;
  if ( v151.m128_f32[0] != *(float *)&v140 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyWTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v151, v151, 85);
  if ( result[0].v.m128_f32[0] != v141 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyWTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v151, v151, 170);
  if ( result[0].v.m128_f32[0] != v142 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyWTo", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v151, v151, 255);
  if ( result[0].v.m128_f32[0] != v498 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyWTo", v467) )
      __debugbreak();
  }
  v152 = LODWORD(FLOAT_N8_0);
  *(double *)&v152 = I_flrand(-8.0, 8.0);
  v153 = v152;
  *(double *)&v152 = I_flrand(-8.0, 8.0);
  v154 = *(float *)&v152;
  *(double *)&v152 = I_flrand(-8.0, 8.0);
  v155 = *(float *)&v152;
  v156 = I_flrand(-8.0, 8.0);
  _XMM7 = v153;
  __asm
  {
    vinsertps xmm7, xmm7, xmm8, 10h
    vinsertps xmm7, xmm7, xmm9, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  result[0] = (float4)_XMM7;
  if ( _XMM7.m128_f32[0] != *(float *)&v153 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Set", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM7, _XMM7, 85);
  if ( result[0].v.m128_f32[0] != v154 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Set", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM7, _XMM7, 170);
  if ( result[0].v.m128_f32[0] != v155 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Set", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM7, _XMM7, 255);
  if ( result[0].v.m128_f32[0] != *(float *)&v156 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Set", v467) )
      __debugbreak();
  }
  v161 = (__m128)LODWORD(FLOAT_N8_0);
  *(double *)v161.m128_u64 = I_flrand(-8.0, 8.0);
  v162 = _mm_shuffle_ps(v161, v161, 0);
  result[0] = (float4)v162;
  if ( v162.m128_f32[0] != v161.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Splat", v467) )
      __debugbreak();
  }
  result[0] = (float4)v162;
  if ( v162.m128_f32[0] != v161.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Splat", v467) )
      __debugbreak();
  }
  result[0] = (float4)v162;
  if ( v162.m128_f32[0] != v161.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Splat", v467) )
      __debugbreak();
  }
  result[0] = (float4)v162;
  if ( v162.m128_f32[0] != v161.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Splat", v467) )
      __debugbreak();
  }
  v163 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v163 = I_flrand(-8.0, 8.0);
  v164 = v163;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v164;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v169 = _mm_shuffle_ps(_XMM1, _XMM1, 0);
  result[0] = (float4)v169;
  if ( v169.m128_f32[0] != *(float *)&v164 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4SplatX", v467) )
      __debugbreak();
  }
  result[0] = (float4)v169;
  if ( v169.m128_f32[0] != *(float *)&v164 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4SplatX", v467) )
      __debugbreak();
  }
  result[0] = (float4)v169;
  if ( v169.m128_f32[0] != *(float *)&v164 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4SplatX", v467) )
      __debugbreak();
  }
  result[0] = (float4)v169;
  if ( v169.m128_f32[0] != *(float *)&v164 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4SplatX", v467) )
      __debugbreak();
  }
  v170 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v170 = I_flrand(-8.0, 8.0);
  v171 = v170;
  *(double *)&v170 = I_flrand(-8.0, 8.0);
  v172 = *(float *)&v170;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v171;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v177 = _mm_shuffle_ps(_XMM1, _XMM1, 85);
  result[0] = (float4)v177;
  if ( v177.m128_f32[0] != v172 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4SplatY", v467) )
      __debugbreak();
  }
  result[0] = (float4)v177;
  if ( v177.m128_f32[0] != v172 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4SplatY", v467) )
      __debugbreak();
  }
  result[0] = (float4)v177;
  if ( v177.m128_f32[0] != v172 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4SplatY", v467) )
      __debugbreak();
  }
  result[0] = (float4)v177;
  if ( v177.m128_f32[0] != v172 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4SplatY", v467) )
      __debugbreak();
  }
  v178 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v178 = I_flrand(-8.0, 8.0);
  v179 = v178;
  I_flrand(-8.0, 8.0);
  *(double *)&v178 = I_flrand(-8.0, 8.0);
  v180 = *(float *)&v178;
  I_flrand(-8.0, 8.0);
  _XMM1 = v179;
  __asm
  {
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm8, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v185 = _mm_shuffle_ps(_XMM1, _XMM1, 170);
  result[0] = (float4)v185;
  if ( v185.m128_f32[0] != v180 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4SplatZ", v467) )
      __debugbreak();
  }
  result[0] = (float4)v185;
  if ( v185.m128_f32[0] != v180 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4SplatZ", v467) )
      __debugbreak();
  }
  result[0] = (float4)v185;
  if ( v185.m128_f32[0] != v180 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4SplatZ", v467) )
      __debugbreak();
  }
  result[0] = (float4)v185;
  if ( v185.m128_f32[0] != v180 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4SplatZ", v467) )
      __debugbreak();
  }
  v186 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v186 = I_flrand(-8.0, 8.0);
  v187 = v186;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  *(double *)&v186 = I_flrand(-8.0, 8.0);
  v188 = *(float *)&v186;
  _XMM0 = v187;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm6, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
  }
  v193 = _mm_shuffle_ps(_XMM0, _XMM0, 255);
  result[0] = (float4)v193;
  if ( v193.m128_f32[0] != v188 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4SplatW", v467) )
      __debugbreak();
  }
  result[0] = (float4)v193;
  if ( v193.m128_f32[0] != v188 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4SplatW", v467) )
      __debugbreak();
  }
  result[0] = (float4)v193;
  if ( v193.m128_f32[0] != v188 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4SplatW", v467) )
      __debugbreak();
  }
  result[0] = (float4)v193;
  if ( v193.m128_f32[0] != v188 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4SplatW", v467) )
      __debugbreak();
  }
  v194 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  v195 = v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  v196 = *(float *)&v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  v197 = *(float *)&v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  v198 = *(float *)&v194;
  _XMM0 = v195;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vinsertps xmm0, xmm0, xmm13, 30h ; '0'
  }
  LODWORD(v203) = _mm_shuffle_ps(_XMM0, _XMM0, 85).m128_u32[0];
  LODWORD(v204) = _mm_shuffle_ps(_XMM0, _XMM0, 170).m128_u32[0];
  v205 = _mm_shuffle_ps(_XMM0, _XMM0, 255);
  result[0] = (float4)v205;
  if ( _XMM0.m128_f32[0] != *(float *)&v195 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractX", v467) )
      __debugbreak();
  }
  if ( v203 != v196 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractY", v467) )
      __debugbreak();
  }
  if ( v204 != v197 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractZ", v467) )
      __debugbreak();
  }
  if ( v205.m128_f32[0] != v198 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractW", v467) )
      __debugbreak();
  }
  v521.v.m128_i32[0] = 1;
  *(unsigned __int64 *)((char *)v521.v.m128_u64 + 4) = 0x300000002i64;
  v521.v.m128_i32[3] = 4;
  _XMM0 = v521.v;
  __asm
  {
    vpextrd rax, xmm0, 0
    vpextrd rbx, xmm0, 1
    vpextrd rdi, xmm0, 2
  }
  result[0] = (float4)v521.v;
  __asm { vpextrd rsi, xmm0, 3 }
  if ( (_DWORD)_RAX != 1 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractUintX", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RBX != 2 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractUintY", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RDI != 3 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractUintZ", v467) )
      __debugbreak();
  }
  if ( (_DWORD)_RSI != 4 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractUintW", v467) )
      __debugbreak();
  }
  v522.v.m128_i32[0] = 1;
  *(unsigned __int64 *)((char *)v522.v.m128_u64 + 4) = 0x300000002i64;
  v522.v.m128_i32[3] = 4;
  result[0] = (float4)v522.v;
  v211 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v211 = I_flrand(-8.0, 8.0);
  v212 = v211;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v212;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  result[0] = (float4)_XMM1.v;
  if ( _XMM1.v.m128_f32[0] != *(float *)&v212 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreX (1)", v467) )
      __debugbreak();
  }
  v217 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v217 = I_flrand(-8.0, 8.0);
  v218 = v217;
  *(double *)&v217 = I_flrand(-8.0, 8.0);
  v219 = *(float *)&v217;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v218;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  result[0] = (float4)_XMM1.v;
  v523 = *(double *)_XMM1.v.m128_u64;
  if ( _XMM1.v.m128_f32[0] != *(float *)&v218 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreXY (1)", v467) )
      __debugbreak();
  }
  if ( *((float *)&v523 + 1) != v219 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreXY (2)", v467) )
      __debugbreak();
  }
  v224 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v224 = I_flrand(-8.0, 8.0);
  v225 = v224;
  *(double *)&v224 = I_flrand(-8.0, 8.0);
  v226 = *(float *)&v224;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v225;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v231 = _mm_shuffle_ps(_XMM1, _XMM1, 85);
  result[0] = (float4)v231;
  if ( _XMM1.m128_f32[0] != *(float *)&v225 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec2 (1)", v467) )
      __debugbreak();
  }
  if ( v231.m128_f32[0] != v226 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec2 (2)", v467) )
      __debugbreak();
  }
  v232 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v232 = I_flrand(-8.0, 8.0);
  v233 = v232;
  *(double *)&v232 = I_flrand(-8.0, 8.0);
  v234 = *(float *)&v232;
  *(double *)&v232 = I_flrand(-8.0, 8.0);
  v235 = *(float *)&v232;
  I_flrand(-8.0, 8.0);
  _XMM1 = v233;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm9, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  LODWORD(v240) = _mm_shuffle_ps(_XMM1, _XMM1, 85).m128_u32[0];
  v241 = _mm_shuffle_ps(_XMM1, _XMM1, 170);
  result[0] = (float4)v241;
  if ( _XMM1.m128_f32[0] != *(float *)&v233 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec3 (1)", v467) )
      __debugbreak();
  }
  if ( v240 != v234 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec3 (2)", v467) )
      __debugbreak();
  }
  if ( v241.m128_f32[0] != v235 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec3 (3)", v467) )
      __debugbreak();
  }
  v242 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v242 = I_flrand(-8.0, 8.0);
  v243 = v242;
  *(double *)&v242 = I_flrand(-8.0, 8.0);
  v244 = *(float *)&v242;
  *(double *)&v242 = I_flrand(-8.0, 8.0);
  v245 = *(float *)&v242;
  *(double *)&v242 = I_flrand(-8.0, 8.0);
  v246 = *(float *)&v242;
  _XMM0 = v243;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v = _XMM0.v;
  if ( _XMM0.v.m128_f32[0] != *(float *)&v243 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec4 (1)", v467) )
      __debugbreak();
  }
  if ( v.m128_f32[1] != v244 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec4 (2)", v467) )
      __debugbreak();
  }
  if ( v.m128_f32[2] != v245 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec4 (3)", v467) )
      __debugbreak();
  }
  if ( v.m128_f32[3] != v246 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec4 (4)", v467) )
      __debugbreak();
  }
  v251 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v251 = I_flrand(-8.0, 8.0);
  v252 = v251;
  *(double *)&v251 = I_flrand(-8.0, 8.0);
  v253 = *(float *)&v251;
  *(double *)&v251 = I_flrand(-8.0, 8.0);
  v254 = *(float *)&v251;
  *(double *)&v251 = I_flrand(-8.0, 8.0);
  v255 = *(float *)&v251;
  _XMM0 = v252;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  result[1] = (float4)_XMM0.v;
  if ( _XMM0.v.m128_f32[0] != *(float *)&v252 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreOffset (1)", v467) )
      __debugbreak();
  }
  if ( result[1].v.m128_f32[1] != v253 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreOffset (2)", v467) )
      __debugbreak();
  }
  if ( result[1].v.m128_f32[2] != v254 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreOffset (3)", v467) )
      __debugbreak();
  }
  if ( result[1].v.m128_f32[3] != v255 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreOffset (4)", v467) )
      __debugbreak();
  }
  v260 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v260 = I_flrand(-8.0, 8.0);
  v261 = v260;
  *(double *)&v260 = I_flrand(-8.0, 8.0);
  v262 = *(float *)&v260;
  *(double *)&v260 = I_flrand(-8.0, 8.0);
  v263 = *(float *)&v260;
  *(double *)&v260 = I_flrand(-8.0, 8.0);
  v264 = *(float *)&v260;
  _XMM0 = v261;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  *(float4 *)((char *)result + 12) = (float4)_XMM0.v;
  if ( _XMM0.v.m128_f32[0] != *(float *)&v261 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnalignedOffset (1)", v467) )
      __debugbreak();
  }
  if ( result[1].v.m128_f32[0] != v262 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnalignedOffset (2)", v467) )
      __debugbreak();
  }
  if ( result[1].v.m128_f32[1] != v263 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnalignedOffset (3)", v467) )
      __debugbreak();
  }
  if ( result[1].v.m128_f32[2] != v264 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnalignedOffset (4)", v467) )
      __debugbreak();
  }
  v269 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v269 = I_flrand(-8.0, 8.0);
  v270 = v269;
  *(double *)&v269 = I_flrand(-8.0, 8.0);
  v271 = *(float *)&v269;
  *(double *)&v269 = I_flrand(-8.0, 8.0);
  v272 = *(float *)&v269;
  *(double *)&v269 = I_flrand(-8.0, 8.0);
  v273 = *(float *)&v269;
  _XMM0 = v270;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v = _XMM0.v;
  if ( _XMM0.v.m128_f32[0] != *(float *)&v270 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Store (1)", v467) )
      __debugbreak();
  }
  if ( v.m128_f32[1] != v271 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Store (2)", v467) )
      __debugbreak();
  }
  if ( v.m128_f32[2] != v272 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Store (3)", v467) )
      __debugbreak();
  }
  if ( v.m128_f32[3] != v273 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Store (4)", v467) )
      __debugbreak();
  }
  v278 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v278 = I_flrand(-8.0, 8.0);
  v279 = v278;
  *(double *)&v278 = I_flrand(-8.0, 8.0);
  v280 = *(float *)&v278;
  *(double *)&v278 = I_flrand(-8.0, 8.0);
  v281 = *(float *)&v278;
  *(double *)&v278 = I_flrand(-8.0, 8.0);
  v282 = *(float *)&v278;
  _XMM0 = v279;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
  }
  result[0].v.m128_i32[0] = _XMM0.v.m128_i32[0];
  *(float4 *)((char *)result + 4) = (float4)_XMM0.v;
  if ( _XMM0.v.m128_f32[0] != *(float *)&v279 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnaligned (1)", v467) )
      __debugbreak();
  }
  if ( result[0].v.m128_f32[2] != v280 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnaligned (2)", v467) )
      __debugbreak();
  }
  if ( result[0].v.m128_f32[3] != v281 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnaligned (3)", v467) )
      __debugbreak();
  }
  if ( result[1].v.m128_f32[0] != v282 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnaligned (4)", v467) )
      __debugbreak();
  }
  v524.v.m128_u64[0] = 0x200000001i64;
  v524.v.m128_u64[1] = 0x400000003i64;
  result[0] = (float4)v524.v;
  v = v524.v;
  v287 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v287 = I_flrand(-8.0, 8.0);
  _XMM6 = v287;
  *(double *)&v287 = I_flrand(-8.0, 8.0);
  v289 = *(float *)&v287;
  *(double *)&v287 = I_flrand(-8.0, 8.0);
  v290 = *(float *)&v287;
  *(double *)&v287 = I_flrand(-8.0, 8.0);
  v291 = *(float *)&v287;
  _XMM0 = _XMM6;
  __asm
  {
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, xmm13, 20h ; ' '
    vinsertps xmm0, xmm0, xmm14, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v296 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v296 = I_flrand(-8.0, 8.0);
  _XMM9 = v296;
  *(double *)&v296 = I_flrand(-8.0, 8.0);
  v298 = *(float *)&v296;
  *(double *)&v296 = I_flrand(-8.0, 8.0);
  v489 = *(float *)&v296;
  *(double *)&v296 = I_flrand(-8.0, 8.0);
  v469 = *(float *)&v296;
  _XMM0 = _XMM9;
  __asm
  {
    vinsertps xmm0, xmm0, xmm15, 10h
    vinsertps xmm0, xmm0, xmm7, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vinsertps xmm8, xmm6, xmm12, 10h
    vinsertps xmm7, xmm9, xmm15, 10h
    vinsertps xmm7, xmm7, [rsp+3B8h+var_36C], 20h
    vinsertps xmm8, xmm8, xmm13, 20h ; ' '
    vinsertps xmm8, xmm8, xmm14, 30h ; '0'
    vinsertps xmm7, xmm7, xmm1, 30h ; '0'
  }
  v561 = _XMM7;
  v560 = _XMM8;
  result[0] = (float4)_XMM8;
  if ( _XMM8.m128_f32[0] != *(float *)&_XMM6 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x2Load (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM8, _XMM8, 85);
  if ( result[0].v.m128_f32[0] != v289 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x2Load (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM8, _XMM8, 170);
  if ( result[0].v.m128_f32[0] != v290 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x2Load (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM8, _XMM8, 255);
  if ( result[0].v.m128_f32[0] != v291 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x2Load (1)", v467) )
      __debugbreak();
  }
  result[0] = (float4)_XMM7;
  if ( _XMM7.m128_f32[0] != *(float *)&_XMM9 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x2Load (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM7, _XMM7, 85);
  if ( result[0].v.m128_f32[0] != v298 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x2Load (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM7, _XMM7, 170);
  if ( result[0].v.m128_f32[0] != v489 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x2Load (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM7, _XMM7, 255);
  if ( result[0].v.m128_f32[0] != v469 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x2Load (2)", v467) )
      __debugbreak();
  }
  v309 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v309 = I_flrand(-8.0, 8.0);
  _XMM6 = v309;
  *(double *)&v309 = I_flrand(-8.0, 8.0);
  v311 = *(float *)&v309;
  *(double *)&v309 = I_flrand(-8.0, 8.0);
  v312 = *(float *)&v309;
  *(double *)&v309 = I_flrand(-8.0, 8.0);
  v313 = *(float *)&v309;
  _XMM0 = _XMM6;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v318 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v318 = I_flrand(-8.0, 8.0);
  _XMM12 = v318;
  *(double *)&v318 = I_flrand(-8.0, 8.0);
  v320 = *(float *)&v318;
  *(double *)&v318 = I_flrand(-8.0, 8.0);
  v321 = *(float *)&v318;
  *(double *)&v318 = I_flrand(-8.0, 8.0);
  v322 = *(float *)&v318;
  _XMM0 = _XMM12;
  __asm
  {
    vinsertps xmm0, xmm0, xmm13, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm15, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v327 = (__m128)LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)v327.m128_u64 = I_flrand(-8.0, 8.0);
  v = v327;
  *(double *)v327.m128_u64 = I_flrand(-8.0, 8.0);
  v484 = v327.m128_f32[0];
  *(double *)v327.m128_u64 = I_flrand(-8.0, 8.0);
  v494 = v327.m128_f32[0];
  *(double *)v327.m128_u64 = I_flrand(-8.0, 8.0);
  v490 = v327.m128_f32[0];
  _XMM0 = v.m128_u32[0];
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v332 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v332 = I_flrand(-8.0, 8.0);
  v525 = v332;
  *(double *)&v332 = I_flrand(-8.0, 8.0);
  v499 = *(float *)&v332;
  *(double *)&v332 = I_flrand(-8.0, 8.0);
  v477 = *(float *)&v332;
  *(double *)&v332 = I_flrand(-8.0, 8.0);
  _XMM3 = v525;
  v470 = *(float *)&v332;
  _XMM0 = v525;
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+3B8h+var_364], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_374], 20h
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vinsertps xmm0, xmm12, xmm13, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm15, 30h ; '0'
  }
  result[1] = (float4)_XMM0.v;
  v563 = _XMM0.v;
  _XMM0 = v;
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 20h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_36C], 30h
  }
  v564 = _XMM0.v;
  v550[0] = (float4)_XMM0.v;
  __asm
  {
    vinsertps xmm0, xmm3, [rsp+3B8h+var_364], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_374], 20h
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vinsertps xmm2, xmm6, xmm7, 10h
    vinsertps xmm2, xmm2, xmm8, 20h ; ' '
    vinsertps xmm2, xmm2, xmm9, 30h ; '0'
  }
  result[0] = (float4)_XMM2.v;
  v565 = _XMM0.v;
  v550[1] = (float4)_XMM0.v;
  v517 = *(__m256i *)v550[0].v.m128_f32;
  v562 = _XMM2.v;
  v515 = *(__m256i *)result[0].v.m128_f32;
  result[0] = (float4)_XMM2.v;
  if ( _XMM2.v.m128_f32[0] != *(float *)&_XMM6 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Load (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v515.m256i_i8, *(__m128 *)v515.m256i_i8, 85);
  if ( result[0].v.m128_f32[0] != v311 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Load (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v515.m256i_i8, *(__m128 *)v515.m256i_i8, 170);
  if ( result[0].v.m128_f32[0] != v312 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Load (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v515.m256i_i8, *(__m128 *)v515.m256i_i8, 255);
  if ( result[0].v.m128_f32[0] != v313 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Load (1)", v467) )
      __debugbreak();
  }
  result[0] = *(float4 *)&v515.m256i_u64[2];
  if ( *(float *)&v515.m256i_i32[4] != *(float *)&_XMM12 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Load (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)&v515.m256i_u64[2], *(__m128 *)&v515.m256i_u64[2], 85);
  if ( result[0].v.m128_f32[0] != v320 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Load (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)&v515.m256i_u64[2], *(__m128 *)&v515.m256i_u64[2], 170);
  if ( result[0].v.m128_f32[0] != v321 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Load (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)&v515.m256i_u64[2], *(__m128 *)&v515.m256i_u64[2], 255);
  if ( result[0].v.m128_f32[0] != v322 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Load (2)", v467) )
      __debugbreak();
  }
  result[0] = *(float4 *)v517.m256i_i8;
  if ( *(float *)v517.m256i_i32 != v.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Load (3)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v517.m256i_i8, *(__m128 *)v517.m256i_i8, 85);
  if ( result[0].v.m128_f32[0] != v484 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Load (3)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v517.m256i_i8, *(__m128 *)v517.m256i_i8, 170);
  if ( result[0].v.m128_f32[0] != v494 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Load (3)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v517.m256i_i8, *(__m128 *)v517.m256i_i8, 255);
  if ( result[0].v.m128_f32[0] != v490 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Load (3)", v467) )
      __debugbreak();
  }
  result[0] = *(float4 *)&v517.m256i_u64[2];
  if ( *(float *)&v517.m256i_i32[4] != *(float *)&v525 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Load (4)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)&v517.m256i_u64[2], *(__m128 *)&v517.m256i_u64[2], 85);
  if ( result[0].v.m128_f32[0] != v499 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Load (4)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)&v517.m256i_u64[2], *(__m128 *)&v517.m256i_u64[2], 170);
  if ( result[0].v.m128_f32[0] != v477 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Load (4)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)&v517.m256i_u64[2], *(__m128 *)&v517.m256i_u64[2], 255);
  if ( result[0].v.m128_f32[0] != v470 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Load (4)", v467) )
      __debugbreak();
  }
  v351 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v351 = I_flrand(-8.0, 8.0);
  _XMM6 = v351;
  *(double *)&v351 = I_flrand(-8.0, 8.0);
  v353 = *(float *)&v351;
  *(double *)&v351 = I_flrand(-8.0, 8.0);
  v354 = *(float *)&v351;
  *(double *)&v351 = I_flrand(-8.0, 8.0);
  v355 = *(float *)&v351;
  _XMM0 = _XMM6;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v360 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v360 = I_flrand(-8.0, 8.0);
  _XMM12 = v360;
  *(double *)&v360 = I_flrand(-8.0, 8.0);
  v362 = *(float *)&v360;
  *(double *)&v360 = I_flrand(-8.0, 8.0);
  v363 = *(float *)&v360;
  *(double *)&v360 = I_flrand(-8.0, 8.0);
  v364 = *(float *)&v360;
  _XMM0 = _XMM12;
  __asm
  {
    vinsertps xmm0, xmm0, xmm13, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm15, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v369 = (__m128)LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)v369.m128_u64 = I_flrand(-8.0, 8.0);
  v = v369;
  *(double *)v369.m128_u64 = I_flrand(-8.0, 8.0);
  v495 = v369.m128_f32[0];
  *(double *)v369.m128_u64 = I_flrand(-8.0, 8.0);
  v485 = v369.m128_f32[0];
  *(double *)v369.m128_u64 = I_flrand(-8.0, 8.0);
  v471 = v369.m128_f32[0];
  _XMM0 = v.m128_u32[0];
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
  }
  result[0] = (float4)_XMM0.v;
  v374 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v374 = I_flrand(-8.0, 8.0);
  v526 = v374;
  *(double *)&v374 = I_flrand(-8.0, 8.0);
  v478 = *(float *)&v374;
  *(double *)&v374 = I_flrand(-8.0, 8.0);
  v500 = *(float *)&v374;
  *(double *)&v374 = I_flrand(-8.0, 8.0);
  _XMM3 = v526;
  v491 = *(float *)&v374;
  _XMM0 = v526;
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+3B8h+var_374], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_364], 20h
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vinsertps xmm0, xmm12, xmm13, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm15, 30h ; '0'
  }
  v516 = (__m128)_XMM0;
  v568 = _XMM0;
  __asm
  {
    vinsertps xmm2, xmm6, xmm7, 10h
    vinsertps xmm2, xmm2, xmm8, 20h ; ' '
    vinsertps xmm2, xmm2, xmm9, 30h ; '0'
  }
  _XMM0 = v;
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 20h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_378], 30h
  }
  *(_OWORD *)v518.m256i_i8 = _XMM0;
  v569 = _XMM0;
  __asm
  {
    vinsertps xmm0, xmm3, [rsp+3B8h+var_374], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_364], 20h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_36C], 30h
  }
  *(__m128 *)&v518.m256i_u64[2] = _XMM0;
  v566 = 0.0;
  v570 = _XMM0;
  result[1] = (float4)v516;
  *(__m256i *)v550[0].v.m128_f32 = v518;
  v567 = _XMM2;
  result[0] = (float4)_XMM2;
  if ( _XMM2.m128_f32[0] != *(float *)&_XMM6 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4LoadUnaligned (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM2, _XMM2, 85);
  if ( result[0].v.m128_f32[0] != v353 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4LoadUnaligned (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM2, _XMM2, 170);
  if ( result[0].v.m128_f32[0] != v354 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4LoadUnaligned (1)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM2, _XMM2, 255);
  if ( result[0].v.m128_f32[0] != v355 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4LoadUnaligned (1)", v467) )
      __debugbreak();
  }
  result[0] = (float4)v516;
  if ( v516.m128_f32[0] != *(float *)&_XMM12 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4LoadUnaligned (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v516, v516, 85);
  if ( result[0].v.m128_f32[0] != v362 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4LoadUnaligned (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v516, v516, 170);
  if ( result[0].v.m128_f32[0] != v363 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4LoadUnaligned (2)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(v516, v516, 255);
  if ( result[0].v.m128_f32[0] != v364 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4LoadUnaligned (2)", v467) )
      __debugbreak();
  }
  result[0] = *(float4 *)v518.m256i_i8;
  if ( *(float *)v518.m256i_i32 != v.m128_f32[0] )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4LoadUnaligned (3)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v518.m256i_i8, *(__m128 *)v518.m256i_i8, 85);
  if ( result[0].v.m128_f32[0] != v495 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4LoadUnaligned (3)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v518.m256i_i8, *(__m128 *)v518.m256i_i8, 170);
  if ( result[0].v.m128_f32[0] != v485 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4LoadUnaligned (3)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(*(__m128 *)v518.m256i_i8, *(__m128 *)v518.m256i_i8, 255);
  if ( result[0].v.m128_f32[0] != v471 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4LoadUnaligned (3)", v467) )
      __debugbreak();
  }
  result[0] = (float4)_XMM0;
  if ( _XMM0.m128_f32[0] != *(float *)&v526 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4LoadUnaligned (4)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM0, _XMM0, 85);
  if ( result[0].v.m128_f32[0] != v478 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4LoadUnaligned (4)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM0, _XMM0, 170);
  if ( result[0].v.m128_f32[0] != v500 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4LoadUnaligned (4)", v467) )
      __debugbreak();
  }
  result[0].v = _mm_shuffle_ps(_XMM0, _XMM0, 255);
  if ( result[0].v.m128_f32[0] != v491 )
  {
    LODWORD(v467) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4LoadUnaligned (4)", v467) )
      __debugbreak();
  }
  v393 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v393 = I_flrand(-8.0, 8.0);
  v394 = v393;
  *(double *)&v393 = I_flrand(-8.0, 8.0);
  v395 = *(float *)&v393;
  *(double *)&v393 = I_flrand(-8.0, 8.0);
  v396 = *(float *)&v393;
  *(double *)&v393 = I_flrand(-8.0, 8.0);
  _XMM8 = v394;
  __asm
  {
    vinsertps xmm8, xmm8, xmm12, 10h
    vinsertps xmm8, xmm8, xmm13, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  v401 = *(float *)&v393;
  v402 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v402 = I_flrand(-8.0, 8.0);
  v403 = v402;
  *(double *)&v402 = I_flrand(-8.0, 8.0);
  v506 = *(float *)&v402;
  *(double *)&v402 = I_flrand(-8.0, 8.0);
  v472 = *(float *)&v402;
  *(double *)&v402 = I_flrand(-8.0, 8.0);
  _XMM7 = v403;
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+3B8h+var_378], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v509 = *(float *)&v402;
  v408 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v408 = I_flrand(-8.0, 8.0);
  v512 = *(float *)&v408;
  _XMM6 = v408;
  *(double *)&v408 = I_flrand(-8.0, 8.0);
  v479 = *(float *)&v408;
  *(double *)&v408 = I_flrand(-8.0, 8.0);
  v501 = *(float *)&v408;
  *(double *)&v408 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+3B8h+var_374], 10h
    vinsertps xmm6, xmm6, [rsp+3B8h+var_364], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v503 = *(float *)&v408;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v408 = I_flrand(-8.0, 8.0);
  v492 = v408;
  *(double *)&v408 = I_flrand(-8.0, 8.0);
  v496 = *(float *)&v408;
  *(double *)&v408 = I_flrand(-8.0, 8.0);
  v486 = *(float *)&v408;
  *(double *)&v408 = I_flrand(-8.0, 8.0);
  v527 = *(float *)&v408;
  _XMM0 = v492;
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
  }
  v554 = _XMM0;
  v551 = _XMM8;
  v552 = _XMM7;
  v553 = _XMM6;
  unitCheck(*(float *)&_XMM8 == *(float *)&v394, "Float4x4Store (xx)", "Incorrect result");
  unitCheck(*((float *)&v551 + 1) == v395, "Float4x4Store (xy)", "Incorrect result");
  unitCheck(*((float *)&v551 + 2) == v396, "Float4x4Store (xz)", "Incorrect result");
  unitCheck(*((float *)&v551 + 3) == v401, "Float4x4Store (xw)", "Incorrect result");
  unitCheck(*(float *)&v552 == *(float *)&v403, "Float4x4Store (yx)", "Incorrect result");
  unitCheck(*((float *)&v552 + 1) == v506, "Float4x4Store (yy)", "Incorrect result");
  unitCheck(*((float *)&v552 + 2) == v472, "Float4x4Store (yz)", "Incorrect result");
  unitCheck(*((float *)&v552 + 3) == v509, "Float4x4Store (yw)", "Incorrect result");
  unitCheck(*(float *)&v553 == v512, "Float4x4Store (zx)", "Incorrect result");
  unitCheck(*((float *)&v553 + 1) == v479, "Float4x4Store (zy)", "Incorrect result");
  unitCheck(*((float *)&v553 + 2) == v501, "Float4x4Store (zz)", "Incorrect result");
  unitCheck(*((float *)&v553 + 3) == v503, "Float4x4Store (zw)", "Incorrect result");
  unitCheck(*(float *)&v554 == *(float *)&v492, "Float4x4Store (wx)", "Incorrect result");
  unitCheck(*((float *)&v554 + 1) == v496, "Float4x4Store (wy)", "Incorrect result");
  unitCheck(*((float *)&v554 + 2) == v486, "Float4x4Store (wz)", "Incorrect result");
  unitCheck(*((float *)&v554 + 3) == v527, "Float4x4Store (ww)", "Incorrect result");
  v417 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v417 = I_flrand(-8.0, 8.0);
  v418 = v417;
  *(double *)&v417 = I_flrand(-8.0, 8.0);
  v419 = *(float *)&v417;
  *(double *)&v417 = I_flrand(-8.0, 8.0);
  v420 = *(float *)&v417;
  *(double *)&v417 = I_flrand(-8.0, 8.0);
  _XMM8 = v418;
  __asm
  {
    vinsertps xmm8, xmm8, xmm12, 10h
    vinsertps xmm8, xmm8, xmm13, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  v425 = *(float *)&v417;
  v426 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v426 = I_flrand(-8.0, 8.0);
  v427 = v426;
  *(double *)&v426 = I_flrand(-8.0, 8.0);
  v528 = *(float *)&v426;
  *(double *)&v426 = I_flrand(-8.0, 8.0);
  v473 = *(float *)&v426;
  *(double *)&v426 = I_flrand(-8.0, 8.0);
  _XMM7 = v427;
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+3B8h+var_378], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v504 = *(float *)&v426;
  v432 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  v513 = *(float *)&v432;
  _XMM6 = v432;
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  v480 = *(float *)&v432;
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  v502 = *(float *)&v432;
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+3B8h+var_374], 10h
    vinsertps xmm6, xmm6, [rsp+3B8h+var_364], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v510 = *(float *)&v432;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  v493 = v432;
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  v497 = *(float *)&v432;
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  v487 = *(float *)&v432;
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  v507 = *(float *)&v432;
  _XMM0 = v493;
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
  }
  v559 = _XMM0;
  v556 = _XMM8;
  v557 = _XMM7;
  v558 = _XMM6;
  unitCheck(*(float *)&_XMM8 == *(float *)&v418, "Float4x4StoreUnaligned (xx)", "Incorrect result");
  unitCheck(*((float *)&v556 + 1) == v419, "Float4x4StoreUnaligned (xy)", "Incorrect result");
  unitCheck(*((float *)&v556 + 2) == v420, "Float4x4StoreUnaligned (xz)", "Incorrect result");
  unitCheck(*((float *)&v556 + 3) == v425, "Float4x4StoreUnaligned (xw)", "Incorrect result");
  unitCheck(*(float *)&v557 == *(float *)&v427, "Float4x4StoreUnaligned (yx)", "Incorrect result");
  unitCheck(*((float *)&v557 + 1) == v528, "Float4x4StoreUnaligned (yy)", "Incorrect result");
  unitCheck(*((float *)&v557 + 2) == v473, "Float4x4StoreUnaligned (yz)", "Incorrect result");
  unitCheck(*((float *)&v557 + 3) == v504, "Float4x4StoreUnaligned (yw)", "Incorrect result");
  unitCheck(*(float *)&v558 == v513, "Float4x4StoreUnaligned (zx)", "Incorrect result");
  unitCheck(*((float *)&v558 + 1) == v480, "Float4x4StoreUnaligned (zy)", "Incorrect result");
  unitCheck(*((float *)&v558 + 2) == v502, "Float4x4StoreUnaligned (zz)", "Incorrect result");
  unitCheck(*((float *)&v558 + 3) == v510, "Float4x4StoreUnaligned (zw)", "Incorrect result");
  unitCheck(*(float *)&v559 == *(float *)&v493, "Float4x4StoreUnaligned (wx)", "Incorrect result");
  unitCheck(*((float *)&v559 + 1) == v497, "Float4x4StoreUnaligned (wy)", "Incorrect result");
  unitCheck(*((float *)&v559 + 2) == v487, "Float4x4StoreUnaligned (wz)", "Incorrect result");
  unitCheck(*((float *)&v559 + 3) == v507, "Float4x4StoreUnaligned (ww)", "Incorrect result");
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  LODWORD(_XMM6) = _XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v441 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v442 = *(float *)&_XMM0;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v443 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  LODWORD(v427) = _XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v529 = *(float *)&_XMM0;
  LODWORD(_XMM7) = _XMM0;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v474 = *(float *)&_XMM0;
  LODWORD(_XMM8) = _XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v481 = *(float *)&_XMM0;
  LODWORD(v418) = _XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v545 = v418;
  v544 = _XMM8;
  v543 = _XMM7;
  v.m128_i32[3] = 0;
  v445 = v;
  v445.m128_f32[0] = *(float *)&_XMM6;
  _XMM9 = v445;
  __asm
  {
    vinsertps xmm9, xmm9, xmm12, 10h
    vinsertps xmm9, xmm9, xmm13, 20h ; ' '
  }
  v = _XMM9;
  v.m128_i32[3] = 0;
  v449 = v;
  v449.m128_f32[0] = v443;
  _XMM8 = v449;
  __asm
  {
    vinsertps xmm8, xmm8, xmm15, 10h
    vinsertps xmm8, xmm8, xmm7, 20h ; ' '
  }
  v = _XMM8;
  v.m128_i32[3] = 0;
  v546 = _XMM0;
  v453 = v;
  v453.m128_f32[0] = v474;
  _XMM7 = v453;
  __asm
  {
    vinsertps xmm7, xmm7, [rsp+3B8h+var_374], 10h
    vinsertps xmm7, xmm7, xmm1, 20h ; ' '
  }
  v = _XMM7;
  v538 = _XMM6;
  v539 = v441;
  v540 = v442;
  v541 = v443;
  v542 = v427;
  unitCheck(_XMM9.m128_f32[0] == *(float *)&_XMM6, "Float4x4LoadMat33Unaligned (1)", "Incorrect X component");
  unitCheck(_mm_shuffle_ps(_XMM9, _XMM9, 85).m128_f32[0] == v441, "Float4x4LoadMat33Unaligned (1)", "Incorrect Y component");
  unitCheck(_mm_shuffle_ps(_XMM9, _XMM9, 170).m128_f32[0] == v442, "Float4x4LoadMat33Unaligned (1)", "Incorrect Z component");
  unitCheck(_mm_shuffle_ps(_XMM9, _XMM9, 255).m128_f32[0] == 0.0, "Float4x4LoadMat33Unaligned (1)", "Incorrect W component");
  unitCheck(_XMM8.m128_f32[0] == v443, "Float4x4LoadMat33Unaligned (2)", "Incorrect X component");
  unitCheck(_mm_shuffle_ps(_XMM8, _XMM8, 85).m128_f32[0] == *(float *)&v427, "Float4x4LoadMat33Unaligned (2)", "Incorrect Y component");
  unitCheck(_mm_shuffle_ps(_XMM8, _XMM8, 170).m128_f32[0] == v529, "Float4x4LoadMat33Unaligned (2)", "Incorrect Z component");
  unitCheck(_mm_shuffle_ps(_XMM8, _XMM8, 255).m128_f32[0] == 0.0, "Float4x4LoadMat33Unaligned (2)", "Incorrect W component");
  unitCheck(_XMM7.m128_f32[0] == v474, "Float4x4LoadMat33Unaligned (3)", "Incorrect X component");
  unitCheck(_mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] == v481, "Float4x4LoadMat33Unaligned (3)", "Incorrect Y component");
  unitCheck(_mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] == *(float *)&_XMM0, "Float4x4LoadMat33Unaligned (3)", "Incorrect Z component");
  unitCheck(_mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] == 0.0, "Float4x4LoadMat33Unaligned (3)", "Incorrect W component");
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  LODWORD(_XMM6) = _XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  _XMM9.m128_i32[0] = _XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v456 = *(float *)&_XMM0;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v457 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  LODWORD(v427) = _XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v514 = *(float *)&_XMM0;
  _XMM7.m128_i32[0] = _XMM0;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v511 = *(float *)&_XMM0;
  _XMM8.m128_i32[0] = _XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v530 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v505 = *(float *)&_XMM0;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v475 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v482 = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_flrand(-8.0, 8.0);
  v508 = *(float *)&_XMM0;
  v458 = *(float *)&_XMM0;
  v537.v[0] = v475;
  v537.v[1] = v482;
  v532 = _XMM6;
  v533 = _XMM9.m128_i32[0];
  v534 = v456;
  element.v[0] = v457;
  element.v[1] = *(float *)&v427;
  element.v[2] = _XMM7.m128_f32[0];
  v536.v[0] = _XMM8.m128_f32[0];
  v536.v[1] = v530;
  v536.v[2] = v505;
  v.m128_i32[3] = 0;
  v460 = v;
  v460.m128_f32[0] = *(float *)&_XMM6;
  _XMM0 = v460;
  __asm
  {
    vinsertps xmm0, xmm0, xmm9, 10h
    vinsertps xmm0, xmm0, xmm12, 20h ; ' '
  }
  result[0] = (float4)_XMM0.v;
  v537.v[2] = v458;
  Float4LoadVec3(&element, &result[1]);
  Float4LoadVec3(&v536, v550);
  Float4LoadVec3(&v537, &v550[1]);
  v463 = result[0].v;
  v464 = (__m128)((*(_OWORD *)&v550[1] ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v ^ *(_OWORD *)&v550[1]);
  unitCheck(result[0].v.m128_f32[0] == *(float *)&_XMM6, "Float4x4LoadMat43 (1)", "Incorrect X component");
  unitCheck(_mm_shuffle_ps(v463, v463, 85).m128_f32[0] == _XMM9.m128_f32[0], "Float4x4LoadMat43 (1)", "Incorrect Y component");
  unitCheck(_mm_shuffle_ps(v463, v463, 170).m128_f32[0] == v456, "Float4x4LoadMat43 (1)", "Incorrect Z component");
  unitCheck(_mm_shuffle_ps(v463, v463, 255).m128_f32[0] == 0.0, "Float4x4LoadMat43 (1)", "Incorrect W component");
  v465 = result[1].v;
  unitCheck(result[1].v.m128_f32[0] == v457, "Float4x4LoadMat43 (2)", "Incorrect X component");
  unitCheck(_mm_shuffle_ps(v465, v465, 85).m128_f32[0] == *(float *)&v427, "Float4x4LoadMat43 (2)", "Incorrect Y component");
  unitCheck(_mm_shuffle_ps(v465, v465, 170).m128_f32[0] == v514, "Float4x4LoadMat43 (2)", "Incorrect Z component");
  unitCheck(_mm_shuffle_ps(v465, v465, 255).m128_f32[0] == 0.0, "Float4x4LoadMat43 (2)", "Incorrect W component");
  v466 = v550[0].v;
  unitCheck(v550[0].v.m128_f32[0] == v511, "Float4x4LoadMat43 (3)", "Incorrect X component");
  unitCheck(_mm_shuffle_ps(v466, v466, 85).m128_f32[0] == v530, "Float4x4LoadMat43 (3)", "Incorrect Y component");
  unitCheck(_mm_shuffle_ps(v466, v466, 170).m128_f32[0] == v505, "Float4x4LoadMat43 (3)", "Incorrect Z component");
  unitCheck(_mm_shuffle_ps(v466, v466, 255).m128_f32[0] == 0.0, "Float4x4LoadMat43 (3)", "Incorrect W component");
  unitCheck(v464.m128_f32[0] == v475, "Float4x4LoadMat43 (4)", "Incorrect X component");
  unitCheck(_mm_shuffle_ps(v464, v464, 85).m128_f32[0] == v482, "Float4x4LoadMat43 (4)", "Incorrect Y component");
  unitCheck(_mm_shuffle_ps(v464, v464, 170).m128_f32[0] == v508, "Float4x4LoadMat43 (4)", "Incorrect Z component");
  unitCheck(_mm_shuffle_ps(v464, v464, 255).m128_f32[0] == 1.0, "Float4x4LoadMat43 (4)", "Incorrect W component");
}

/*
==============
Float4LogicalTest
==============
*/
bool Float4LogicalTest()
{
  __int128 v0; 
  __int128 v5; 
  __int128 v6; 
  __int128 v11; 
  __int128 v16; 
  __int128 v17; 
  __int128 v22; 
  __int128 v27; 
  __int128 v28; 
  __int128 v33; 
  __int128 v38; 
  __int128 v39; 
  __int128 v45; 
  __int128 v46; 
  float v47; 
  float v48; 
  float v53; 
  __int128 v54; 
  __int128 v55; 
  float v56; 
  float v57; 
  int v58; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  __int128 v68; 
  __int128 v69; 
  float v70; 
  float v71; 
  float v76; 
  __int128 v77; 
  __int128 v78; 
  float v79; 
  float v80; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  __int128 v90; 
  __int128 v91; 
  float v92; 
  float v93; 
  float v94; 
  __int128 v95; 
  __int128 v96; 
  float v97; 
  float v98; 
  float v99; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  __int128 v113; 
  __int128 v114; 
  float v115; 
  float v116; 
  float v117; 
  __int128 v118; 
  __int128 v119; 
  float v120; 
  float v121; 
  float v122; 
  int v132; 
  int v133; 
  int v134; 
  int v135; 
  __int128 v136; 
  __int128 v137; 
  float v138; 
  float v139; 
  float v144; 
  __int128 v145; 
  __int128 v146; 
  float v147; 
  float v148; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  __int128 v158; 
  __int128 v159; 
  float v160; 
  float v161; 
  float v166; 
  __int128 v167; 
  __int128 v168; 
  float v169; 
  float v170; 
  int v176; 
  int v177; 
  int v178; 
  int v179; 
  __int128 v180; 
  __int128 v181; 
  float v182; 
  float v183; 
  float v184; 
  __int128 v185; 
  __int128 v186; 
  float v187; 
  float v188; 
  float v189; 
  int v200; 
  int v201; 
  int v202; 
  __int128 v203; 
  __int128 v204; 
  float v205; 
  float v206; 
  float v207; 
  __int128 v208; 
  __int128 v209; 
  float v210; 
  float v211; 
  float v212; 
  int v223; 
  __int128 v224; 
  __int128 v225; 
  __int128 v230; 
  __int128 v231; 
  __int128 v236; 
  __int128 v237; 
  __int128 v242; 
  __int128 v243; 
  bool result; 
  __int64 v249; 
  float v250; 
  float v251; 
  float v252; 
  float v253; 

  v0 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  _XMM9 = v0;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v5 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v5 = I_flrand(-8.0, 8.0);
  v6 = v5;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v6;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  if ( ((unsigned __int64)_XMM1 | (unsigned __int64)_XMM9) >> 32 != (DWORD1(_XMM9) | DWORD1(_XMM1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Or (2)", g_unitSavedSeed_0) )
    __debugbreak();
  v11 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v11 = I_flrand(-8.0, 8.0);
  _XMM9 = v11;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v16 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v16 = I_flrand(-8.0, 8.0);
  v17 = v16;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v17;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  if ( ((unsigned __int64)_XMM1 ^ (unsigned __int64)_XMM9) >> 32 != (DWORD1(_XMM9) ^ DWORD1(_XMM1)) )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Xor (2)", v249) )
      __debugbreak();
  }
  v22 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v22 = I_flrand(-8.0, 8.0);
  _XMM9 = v22;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v27 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v27 = I_flrand(-8.0, 8.0);
  v28 = v27;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v28;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  if ( ((unsigned __int64)_XMM1 & (unsigned __int64)_XMM9) >> 32 != (DWORD1(_XMM9) & DWORD1(_XMM1)) )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4And (2)", v249) )
      __debugbreak();
  }
  v33 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v33 = I_flrand(-8.0, 8.0);
  _XMM9 = v33;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v38 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v38 = I_flrand(-8.0, 8.0);
  v39 = v38;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v39;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vandnps xmm0, xmm1, xmm9
  }
  if ( (_DWORD)_XMM0 != ((unsigned int)_XMM9 & ~(_DWORD)_XMM1) )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Andc (1)", v249) )
      __debugbreak();
  }
  if ( DWORD1(_XMM0) != (DWORD1(_XMM9) & ~DWORD1(_XMM1)) )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Andc (2)", v249) )
      __debugbreak();
  }
  if ( DWORD2(_XMM0) != (DWORD2(_XMM9) & ~DWORD2(_XMM1)) )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Andc (3)", v249) )
      __debugbreak();
  }
  if ( HIDWORD(_XMM0) != (HIDWORD(_XMM9) & ~HIDWORD(_XMM1)) )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Andc (4)", v249) )
      __debugbreak();
  }
  v45 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v45 = I_flrand(-8.0, 8.0);
  v46 = v45;
  *(double *)&v45 = I_flrand(-8.0, 8.0);
  v47 = *(float *)&v45;
  *(double *)&v45 = I_flrand(-8.0, 8.0);
  v48 = *(float *)&v45;
  *(double *)&v45 = I_flrand(-8.0, 8.0);
  _XMM7 = v46;
  __asm
  {
    vinsertps xmm7, xmm7, xmm9, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v53 = *(float *)&v45;
  v54 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v54 = I_flrand(-8.0, 8.0);
  v55 = v54;
  *(double *)&v54 = I_flrand(-8.0, 8.0);
  v56 = *(float *)&v54;
  *(double *)&v54 = I_flrand(-8.0, 8.0);
  v57 = *(float *)&v54;
  *(double *)&v54 = I_flrand(-8.0, 8.0);
  v250 = *(float *)&v54;
  v58 = 0;
  _XMM0 = v55;
  __asm
  {
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcmpltps xmm1, xmm0, xmm7
  }
  v64 = 0;
  if ( *(float *)&v46 > *(float *)&v55 )
    v64 = -1;
  if ( (_DWORD)_XMM1 != v64 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGtfp (1)", v249) )
      __debugbreak();
  }
  v65 = 0;
  if ( v47 > v56 )
    v65 = -1;
  if ( DWORD1(_XMM1) != v65 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGtfp (2)", v249) )
      __debugbreak();
  }
  v66 = 0;
  if ( v48 > v57 )
    v66 = -1;
  if ( DWORD2(_XMM1) != v66 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGtfp (3)", v249) )
      __debugbreak();
  }
  v67 = 0;
  if ( v53 > v250 )
    v67 = -1;
  if ( HIDWORD(_XMM1) != v67 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGtfp (4)", v249) )
      __debugbreak();
  }
  v68 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v68 = I_flrand(-8.0, 8.0);
  v69 = v68;
  *(double *)&v68 = I_flrand(-8.0, 8.0);
  v70 = *(float *)&v68;
  *(double *)&v68 = I_flrand(-8.0, 8.0);
  v71 = *(float *)&v68;
  *(double *)&v68 = I_flrand(-8.0, 8.0);
  _XMM7 = v69;
  __asm
  {
    vinsertps xmm7, xmm7, xmm9, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v76 = *(float *)&v68;
  v77 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v77 = I_flrand(-8.0, 8.0);
  v78 = v77;
  *(double *)&v77 = I_flrand(-8.0, 8.0);
  v79 = *(float *)&v77;
  *(double *)&v77 = I_flrand(-8.0, 8.0);
  v80 = *(float *)&v77;
  *(double *)&v77 = I_flrand(-8.0, 8.0);
  v251 = *(float *)&v77;
  _XMM0 = v78;
  __asm
  {
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcmpleps xmm1, xmm0, xmm7
  }
  v86 = 0;
  if ( *(float *)&v69 >= *(float *)&v78 )
    v86 = -1;
  if ( (_DWORD)_XMM1 != v86 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGefp (1)", v249) )
      __debugbreak();
  }
  v87 = 0;
  if ( v70 >= v79 )
    v87 = -1;
  if ( DWORD1(_XMM1) != v87 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGefp (2)", v249) )
      __debugbreak();
  }
  v88 = 0;
  if ( v71 >= v80 )
    v88 = -1;
  if ( DWORD2(_XMM1) != v88 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGefp (3)", v249) )
      __debugbreak();
  }
  v89 = 0;
  if ( v76 >= v251 )
    v89 = -1;
  if ( HIDWORD(_XMM1) != v89 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGefp (4)", v249) )
      __debugbreak();
  }
  v90 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v90 = I_flrand(-8.0, 8.0);
  v91 = v90;
  *(double *)&v90 = I_flrand(-8.0, 8.0);
  v92 = *(float *)&v90;
  *(double *)&v90 = I_flrand(-8.0, 8.0);
  v93 = *(float *)&v90;
  *(double *)&v90 = I_flrand(-8.0, 8.0);
  v94 = *(float *)&v90;
  v95 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v95 = I_flrand(-8.0, 8.0);
  v96 = v95;
  *(double *)&v95 = I_flrand(-8.0, 8.0);
  v97 = *(float *)&v95;
  *(double *)&v95 = I_flrand(-8.0, 8.0);
  v98 = *(float *)&v95;
  *(double *)&v95 = I_flrand(-8.0, 8.0);
  v99 = *(float *)&v95;
  _XMM1 = v96;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm13, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = v91;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm14, 30h ; '0'
    vcmpeqps xmm0, xmm1, xmm0
  }
  v109 = -1;
  if ( *(float *)&v91 != *(float *)&v96 )
    v109 = 0;
  if ( (_DWORD)_XMM0 != v109 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpEqfp (1)", v249) )
      __debugbreak();
  }
  v110 = -1;
  if ( v92 != v97 )
    v110 = 0;
  if ( DWORD1(_XMM0) != v110 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpEqfp (2)", v249) )
      __debugbreak();
  }
  v111 = -1;
  if ( v93 != v98 )
    v111 = 0;
  if ( DWORD2(_XMM0) != v111 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpEqfp (3)", v249) )
      __debugbreak();
  }
  v112 = -1;
  if ( v94 != v99 )
    v112 = 0;
  if ( HIDWORD(_XMM0) != v112 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpEqfp (4)", v249) )
      __debugbreak();
  }
  v113 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v113 = I_flrand(-8.0, 8.0);
  v114 = v113;
  *(double *)&v113 = I_flrand(-8.0, 8.0);
  v115 = *(float *)&v113;
  *(double *)&v113 = I_flrand(-8.0, 8.0);
  v116 = *(float *)&v113;
  *(double *)&v113 = I_flrand(-8.0, 8.0);
  v117 = *(float *)&v113;
  v118 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v118 = I_flrand(-8.0, 8.0);
  v119 = v118;
  *(double *)&v118 = I_flrand(-8.0, 8.0);
  v120 = *(float *)&v118;
  *(double *)&v118 = I_flrand(-8.0, 8.0);
  v121 = *(float *)&v118;
  *(double *)&v118 = I_flrand(-8.0, 8.0);
  v122 = *(float *)&v118;
  _XMM1 = v119;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm13, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = v114;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm14, 30h ; '0'
    vcmpneqps xmm0, xmm1, xmm0
  }
  v132 = -1;
  if ( *(float *)&v114 == *(float *)&v119 )
    v132 = 0;
  if ( (_DWORD)_XMM0 != v132 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpNeqfp (1)", v249) )
      __debugbreak();
  }
  v133 = -1;
  if ( v115 == v120 )
    v133 = 0;
  if ( DWORD1(_XMM0) != v133 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpNeqfp (2)", v249) )
      __debugbreak();
  }
  v134 = -1;
  if ( v116 == v121 )
    v134 = 0;
  if ( DWORD2(_XMM0) != v134 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpNeqfp (3)", v249) )
      __debugbreak();
  }
  v135 = -1;
  if ( v117 == v122 )
    v135 = 0;
  if ( HIDWORD(_XMM0) != v135 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpNeqfp (4)", v249) )
      __debugbreak();
  }
  v136 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v136 = I_flrand(-8.0, 8.0);
  v137 = v136;
  *(double *)&v136 = I_flrand(-8.0, 8.0);
  v138 = *(float *)&v136;
  *(double *)&v136 = I_flrand(-8.0, 8.0);
  v139 = *(float *)&v136;
  *(double *)&v136 = I_flrand(-8.0, 8.0);
  _XMM7 = v137;
  __asm
  {
    vinsertps xmm7, xmm7, xmm9, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v144 = *(float *)&v136;
  v145 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v145 = I_flrand(-8.0, 8.0);
  v146 = v145;
  *(double *)&v145 = I_flrand(-8.0, 8.0);
  v147 = *(float *)&v145;
  *(double *)&v145 = I_flrand(-8.0, 8.0);
  v148 = *(float *)&v145;
  *(double *)&v145 = I_flrand(-8.0, 8.0);
  v252 = *(float *)&v145;
  _XMM0 = v146;
  __asm
  {
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcmpleps xmm1, xmm7, xmm0
  }
  v154 = 0;
  if ( *(float *)&v146 >= *(float *)&v137 )
    v154 = -1;
  if ( (_DWORD)_XMM1 != v154 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLefp (1)", v249) )
      __debugbreak();
  }
  v155 = 0;
  if ( v147 >= v138 )
    v155 = -1;
  if ( DWORD1(_XMM1) != v155 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLefp (2)", v249) )
      __debugbreak();
  }
  v156 = 0;
  if ( v148 >= v139 )
    v156 = -1;
  if ( DWORD2(_XMM1) != v156 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLefp (3)", v249) )
      __debugbreak();
  }
  v157 = 0;
  if ( v252 >= v144 )
    v157 = -1;
  if ( HIDWORD(_XMM1) != v157 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLefp (4)", v249) )
      __debugbreak();
  }
  v158 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v158 = I_flrand(-8.0, 8.0);
  v159 = v158;
  *(double *)&v158 = I_flrand(-8.0, 8.0);
  v160 = *(float *)&v158;
  *(double *)&v158 = I_flrand(-8.0, 8.0);
  v161 = *(float *)&v158;
  *(double *)&v158 = I_flrand(-8.0, 8.0);
  _XMM7 = v159;
  __asm
  {
    vinsertps xmm7, xmm7, xmm9, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v166 = *(float *)&v158;
  v167 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v167 = I_flrand(-8.0, 8.0);
  v168 = v167;
  *(double *)&v167 = I_flrand(-8.0, 8.0);
  v169 = *(float *)&v167;
  *(double *)&v167 = I_flrand(-8.0, 8.0);
  v170 = *(float *)&v167;
  *(double *)&v167 = I_flrand(-8.0, 8.0);
  v253 = *(float *)&v167;
  _XMM0 = v168;
  __asm
  {
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcmpltps xmm1, xmm7, xmm0
  }
  v176 = 0;
  if ( *(float *)&v168 > *(float *)&v159 )
    v176 = -1;
  if ( (_DWORD)_XMM1 != v176 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLtfp (1)", v249) )
      __debugbreak();
  }
  v177 = 0;
  if ( v169 > v160 )
    v177 = -1;
  if ( DWORD1(_XMM1) != v177 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLtfp (2)", v249) )
      __debugbreak();
  }
  v178 = 0;
  if ( v170 > v161 )
    v178 = -1;
  if ( DWORD2(_XMM1) != v178 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLtfp (3)", v249) )
      __debugbreak();
  }
  v179 = 0;
  if ( v253 > v166 )
    v179 = -1;
  if ( HIDWORD(_XMM1) != v179 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLtfp (4)", v249) )
      __debugbreak();
  }
  v180 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v180 = I_flrand(-8.0, 8.0);
  v181 = v180;
  *(double *)&v180 = I_flrand(-8.0, 8.0);
  v182 = *(float *)&v180;
  *(double *)&v180 = I_flrand(-8.0, 8.0);
  v183 = *(float *)&v180;
  *(double *)&v180 = I_flrand(-8.0, 8.0);
  v184 = *(float *)&v180;
  v185 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v185 = I_flrand(-8.0, 8.0);
  v186 = v185;
  *(double *)&v185 = I_flrand(-8.0, 8.0);
  v187 = *(float *)&v185;
  *(double *)&v185 = I_flrand(-8.0, 8.0);
  v188 = *(float *)&v185;
  *(double *)&v185 = I_flrand(-8.0, 8.0);
  v189 = *(float *)&v185;
  _XMM1 = v186;
  __asm
  {
    vinsertps xmm1, xmm1, xmm13, 10h
    vinsertps xmm1, xmm1, xmm14, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = v181;
  __asm
  {
    vinsertps xmm0, xmm0, xmm9, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm8, 30h ; '0'
    vcmpltps xmm0, xmm0, xmm1
    vmovmskps eax, xmm0
  }
  v200 = 1;
  v201 = (_EAX & 0xF) == 15;
  if ( *(float *)&v181 >= *(float *)&v186 || v182 >= v187 || v183 >= v188 || (v202 = 1, v184 >= v189) )
    v202 = 0;
  if ( v201 != v202 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4AllLt", v249) )
      __debugbreak();
  }
  v203 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v203 = I_flrand(-8.0, 8.0);
  v204 = v203;
  *(double *)&v203 = I_flrand(-8.0, 8.0);
  v205 = *(float *)&v203;
  *(double *)&v203 = I_flrand(-8.0, 8.0);
  v206 = *(float *)&v203;
  *(double *)&v203 = I_flrand(-8.0, 8.0);
  v207 = *(float *)&v203;
  v208 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v208 = I_flrand(-8.0, 8.0);
  v209 = v208;
  *(double *)&v208 = I_flrand(-8.0, 8.0);
  v210 = *(float *)&v208;
  *(double *)&v208 = I_flrand(-8.0, 8.0);
  v211 = *(float *)&v208;
  *(double *)&v208 = I_flrand(-8.0, 8.0);
  v212 = *(float *)&v208;
  _XMM1 = v209;
  __asm
  {
    vinsertps xmm1, xmm1, xmm10, 10h
    vinsertps xmm1, xmm1, xmm14, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = v204;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm13, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vcmpltps xmm0, xmm0, xmm1
    vmovmskps eax, xmm0
  }
  v223 = (_EAX & 0xF) != 0;
  if ( *(float *)&v204 >= *(float *)&v209 && v205 >= v210 && v206 >= v211 && v207 >= v212 )
    v200 = 0;
  if ( v223 != v200 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4AllLt", v249) )
      __debugbreak();
  }
  v224 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v224 = I_flrand(-8.0, 8.0);
  v225 = v224;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM9 = v225;
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v230 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v230 = I_flrand(-8.0, 8.0);
  v231 = v230;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v231;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  if ( *(float *)&_XMM1 > *(float *)&_XMM9 != *(float *)&v231 > *(float *)&v225 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpXLt", v249) )
      __debugbreak();
  }
  v236 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v236 = I_flrand(-8.0, 8.0);
  v237 = v236;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM9 = v237;
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v242 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v242 = I_flrand(-8.0, 8.0);
  v243 = v242;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v243;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  result = *(float *)&_XMM1 > *(float *)&_XMM9;
  LOBYTE(v58) = *(float *)&v243 > *(float *)&v237;
  if ( *(float *)&_XMM1 > *(float *)&_XMM9 != v58 )
  {
    LODWORD(v249) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpXLt", v249);
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
Float4MathTest
==============
*/
void Float4MathTest()
{
  __int128 v0; 
  __int128 v1; 
  int v2; 
  int v3; 
  __m128 v8; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  float v18; 
  double v19; 
  float v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  float v33; 
  double v34; 
  float v35; 
  double v36; 
  float v37; 
  double v38; 
  float v43; 
  double v44; 
  float v45; 
  double v46; 
  double v47; 
  __m128 v52; 
  double v53; 
  float v54; 
  double v55; 
  float v56; 
  double v57; 
  float v58; 
  __m128 v68; 
  float v69; 
  double v70; 
  float v71; 
  double v72; 
  float v73; 
  double v74; 
  float v79; 
  double v80; 
  float v81; 
  double v82; 
  float v83; 
  double v84; 
  float v89; 
  __m128 v90; 
  float v92; 
  __m128 v96; 
  __int128 v97; 
  __int128 v98; 
  float v99; 
  __int128 v104; 
  __int128 v105; 
  __int128 v110; 
  __int128 v111; 
  __m128 v116; 
  __int128 v117; 
  __int128 v118; 
  float v119; 
  __int128 v124; 
  __int128 v125; 
  __int128 v130; 
  __int128 v131; 
  __m128 v136; 
  __int128 v137; 
  __int128 v138; 
  float v139; 
  float v140; 
  float v145; 
  __int128 v146; 
  __int128 v147; 
  float v148; 
  float v149; 
  float v150; 
  float v158; 
  __int128 v159; 
  __int128 v160; 
  float v161; 
  float v162; 
  float v167; 
  __int128 v171; 
  __int128 v172; 
  float v173; 
  float v174; 
  float v179; 
  __m128 v183; 
  float v184; 
  __int128 v185; 
  __int128 v186; 
  float v187; 
  float v188; 
  float v193; 
  __int128 v194; 
  __int128 v195; 
  float v196; 
  float v197; 
  float v202; 
  __m128 v203; 
  __m128 v207; 
  __int128 v208; 
  __int128 v209; 
  float v210; 
  float v211; 
  float v212; 
  __m128 v220; 
  float v221; 
  __int128 v222; 
  __int128 v223; 
  float v224; 
  float v225; 
  float v226; 
  __m128 v235; 
  float v236; 
  __int128 v237; 
  __int128 v238; 
  float v239; 
  float v240; 
  float v241; 
  __m128 v248; 
  float v249; 
  __int128 v252; 
  __int128 v253; 
  float v254; 
  float v255; 
  float v257; 
  __int128 v272; 
  __int128 v273; 
  float v274; 
  float v275; 
  float v277; 
  __m128 v292; 
  __int128 v293; 
  __int128 v294; 
  __m128 v302; 
  float v303; 
  float v304; 
  float v305; 
  __int128 v306; 
  __int128 v307; 
  float v315; 
  float v316; 
  float v317; 
  __int128 v318; 
  __int128 v319; 
  float v320; 
  float v321; 
  __int128 v326; 
  __int128 v327; 
  float v328; 
  __m128 v333; 
  __int128 v334; 
  __int128 v335; 
  float v336; 
  float v337; 
  __int128 v342; 
  __int128 v343; 
  float v344; 
  __m128 v349; 
  __int128 v350; 
  __int128 v351; 
  float v352; 
  float v353; 
  __int128 v358; 
  __int128 v359; 
  float v360; 
  __m128 v365; 
  __int128 v366; 
  __int128 v367; 
  float v368; 
  float v369; 
  __int128 v374; 
  __int128 v375; 
  float v376; 
  __m128 v381; 
  __int128 v382; 
  __int128 v383; 
  float v384; 
  float v385; 
  float v386; 
  __m128 v391; 
  __m128 v392; 
  __int128 v393; 
  __int128 v394; 
  int v395; 
  int v396; 
  int v397; 
  __m128 v402; 
  __int128 v403; 
  __int128 v404; 
  int v405; 
  int v406; 
  int v411; 
  __int128 v414; 
  __int128 v415; 
  __m128 v422; 
  float v423; 
  float v424; 
  float v425; 
  __int128 v426; 
  __int128 v427; 
  __int128 v432; 
  __int128 v434; 
  __int128 v436; 
  __int128 v448; 
  __int128 v449; 
  __int128 v454; 
  __int128 v456; 
  __int128 v458; 
  __int128 v470; 
  __int128 v471; 
  __int128 v476; 
  __int128 v477; 
  float v478; 
  float v479; 
  __int128 v484; 
  __int128 v485; 
  float v486; 
  float v487; 
  float v492; 
  __m128 v493; 
  __m128 v494; 
  __m128 v495; 
  __m128 v496; 
  float v497; 
  __m128 v498; 
  __m128 v499; 
  float v500; 
  __m128 v501; 
  __int128 v508; 
  __int128 v509; 
  float v510; 
  float v511; 
  float v512; 
  __int128 v519; 
  __int128 v520; 
  __int128 v535; 
  __int128 v536; 
  __int128 v550; 
  __int128 v551; 
  __int128 v556; 
  __int64 v567; 
  unsigned int v568; 
  float v569; 
  float v570; 
  float v571; 
  float v572; 
  float v573; 
  float v574; 
  float v575; 
  float v576; 
  float v577; 
  float v578; 
  float v579; 
  float v580; 
  float v581; 
  float v582; 
  float v583; 
  float v584; 
  float v585; 
  float v586; 
  float v587; 
  float v588; 
  float v589; 
  float v590; 
  float v591; 
  float v592; 
  float v593; 
  float v594; 
  float v595; 
  float v596; 
  float v597; 
  float v598; 
  float v599; 
  float v600; 
  float v601; 
  float v602; 
  float v603; 
  float v604; 
  float v605; 
  __int128 v606; 

  v0 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v1 = v0;
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v2 = v0;
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v3 = v0;
  I_flrand(-8.0, 8.0);
  _XMM1 = v1;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm9, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v8 = _mm128_sub_ps((__m128)0i64, _XMM1);
  if ( v8.m128_f32[0] != COERCE_FLOAT(v1 ^ _xmm) )
  {
    v568 = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3Negate", v568) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v8, v8, 85).m128_f32[0] != COERCE_FLOAT(v2 ^ _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3Negate", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v8, v8, 170).m128_f32[0] != COERCE_FLOAT(v3 ^ _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3Negate", v567) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v9 = I_flrand(-8.0, 8.0);
  v10 = *(float *)&v9;
  v11 = I_flrand(-8.0, 8.0);
  v12 = *(float *)&v11;
  v13 = I_flrand(-8.0, 8.0);
  _XMM8 = 0i64;
  __asm
  {
    vinsertps xmm8, xmm8, xmm11, 0
    vinsertps xmm8, xmm8, xmm10, 10h
    vinsertps xmm8, xmm8, xmm0, 20h ; ' '
  }
  v18 = *(float *)&v13;
  g_unitSavedSeed_0 = *GetRandSeed();
  v19 = I_flrand(-8.0, 8.0);
  v20 = *(float *)&v19;
  v21 = I_flrand(-8.0, 8.0);
  v22 = *(float *)&v21;
  v23 = I_flrand(-8.0, 8.0);
  v24 = *(float *)&v23;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 0
    vinsertps xmm0, xmm0, xmm6, 10h
    vinsertps xmm0, xmm0, xmm3, 20h ; ' '
  }
  _XMM0 = _mm128_mul_ps(_XMM0, _XMM8);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm8, xmm2, xmm2
  }
  v33 = (float)((float)(v22 * v12) + (float)(v20 * v10)) + (float)(v24 * v18);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM8.m128_f32[0] - v33) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Dot", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM8, _XMM8, 85).m128_f32[0] - v33) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Dot", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM8, _XMM8, 170).m128_f32[0] - v33) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Dot", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM8, _XMM8, 255).m128_f32[0] - v33) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3Dot", v567) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v34 = I_flrand(-8.0, 8.0);
  v35 = *(float *)&v34;
  v36 = I_flrand(-8.0, 8.0);
  v37 = *(float *)&v36;
  v38 = I_flrand(-8.0, 8.0);
  _XMM6 = 0i64;
  __asm
  {
    vinsertps xmm6, xmm6, xmm7, 0
    vinsertps xmm6, xmm6, xmm11, 10h
    vinsertps xmm6, xmm6, xmm0, 20h ; ' '
  }
  v43 = *(float *)&v38;
  g_unitSavedSeed_0 = *GetRandSeed();
  v44 = I_flrand(-8.0, 8.0);
  v45 = *(float *)&v44;
  v46 = I_flrand(-8.0, 8.0);
  v592 = *(float *)&v46;
  v47 = I_flrand(-8.0, 8.0);
  _XMM2 = 0i64;
  __asm
  {
    vinsertps xmm2, xmm2, xmm8, 0
    vinsertps xmm2, xmm2, [rsp+158h+var_10C], 10h
    vinsertps xmm2, xmm2, xmm0, 20h ; ' '
  }
  v52 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM2, _XMM2, 210), _mm_shuffle_ps(_XMM6, _XMM6, 201)), _mm128_mul_ps(_mm_shuffle_ps(_XMM2, _XMM2, 201), _mm_shuffle_ps(_XMM6, _XMM6, 210)));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v52.m128_f32[0] - (float)((float)(*(float *)&v47 * v37) - (float)(v43 * v592))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Cross", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v52, v52, 85).m128_f32[0] - (float)((float)(v45 * v43) - (float)(*(float *)&v47 * v35))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Cross", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v52, v52, 170).m128_f32[0] - (float)((float)(v35 * v592) - (float)(v45 * v37))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Cross", v567) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v53 = I_flrand(-8.0, 8.0);
  v54 = *(float *)&v53;
  v55 = I_flrand(-8.0, 8.0);
  v56 = *(float *)&v55;
  v57 = I_flrand(-8.0, 8.0);
  v58 = *(float *)&v57;
  _XMM3 = 0i64;
  __asm
  {
    vinsertps xmm3, xmm3, xmm6, 0
    vinsertps xmm3, xmm3, xmm8, 10h
    vinsertps xmm3, xmm3, xmm0, 20h ; ' '
  }
  _XMM0 = _mm128_mul_ps(_XMM3, _XMM3);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  v68 = _mm128_mul_ps(_XMM1, _XMM3);
  v69 = 1.0 / fsqrt((float)((float)(v56 * v56) + (float)(v54 * v54)) + (float)(v58 * v58));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v68.m128_f32[0] - (float)(v69 * v54)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3NormalizeEstimate", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v68, v68, 85).m128_f32[0] - (float)(v69 * v56)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3NormalizeEstimate", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v68, v68, 170).m128_f32[0] - (float)(v69 * v58)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3NormalizeEstimate", v567) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v70 = I_flrand(-8.0, 8.0);
  v71 = *(float *)&v70;
  v72 = I_flrand(-8.0, 8.0);
  v73 = *(float *)&v72;
  v74 = I_flrand(-8.0, 8.0);
  _XMM10 = 0i64;
  __asm
  {
    vinsertps xmm10, xmm10, xmm11, 0
    vinsertps xmm10, xmm10, xmm9, 10h
    vinsertps xmm10, xmm10, xmm0, 20h ; ' '
  }
  v79 = *(float *)&v74;
  g_unitSavedSeed_0 = *GetRandSeed();
  v80 = I_flrand(-8.0, 8.0);
  v81 = *(float *)&v80;
  v82 = I_flrand(-8.0, 8.0);
  v83 = *(float *)&v82;
  v84 = I_flrand(-8.0, 8.0);
  _XMM4 = 0i64;
  __asm
  {
    vinsertps xmm4, xmm4, xmm7, 0
    vinsertps xmm4, xmm4, xmm6, 10h
    vinsertps xmm4, xmm4, xmm0, 20h ; ' '
  }
  v89 = (float)((float)((float)(v71 - v81) * (float)(v71 - v81)) + (float)((float)(v73 - v83) * (float)(v73 - v83))) + (float)((float)(v79 - *(float *)&v84) * (float)(v79 - *(float *)&v84));
  v90 = _mm128_sub_ps(_XMM10, _XMM4);
  _XMM1 = _mm128_mul_ps(v90, v90);
  v92 = fsqrt(v89);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  v96 = _mm_sqrt_ps(_XMM0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v96.m128_f32[0] - v92) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Distance", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v96, v96, 85).m128_f32[0] - v92) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Distance", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v96, v96, 170).m128_f32[0] - v92) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Distance", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v96, v96, 255).m128_f32[0] - v92) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3Distance", v567) )
      __debugbreak();
  }
  v97 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v98 = v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v99 = *(float *)&v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v598 = *(float *)&v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  _XMM9 = v98;
  __asm
  {
    vinsertps xmm9, xmm9, xmm11, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v569 = *(float *)&v97;
  v104 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v104 = I_flrand(-8.0, 8.0);
  v105 = v104;
  *(double *)&v104 = I_flrand(-8.0, 8.0);
  v604 = *(float *)&v104;
  *(double *)&v104 = I_flrand(-8.0, 8.0);
  v578 = *(float *)&v104;
  *(double *)&v104 = I_flrand(-8.0, 8.0);
  _XMM7 = v105;
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+158h+var_114], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v585 = *(float *)&v104;
  v110 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v110 = I_flrand(-8.0, 8.0);
  v111 = v110;
  *(double *)&v110 = I_flrand(-8.0, 8.0);
  v593 = *(float *)&v110;
  *(double *)&v110 = I_flrand(-8.0, 8.0);
  v596 = *(float *)&v110;
  *(double *)&v110 = I_flrand(-8.0, 8.0);
  v601 = *(float *)&v110;
  _XMM0 = v111;
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+158h+var_10C], 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_108], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
  }
  v116 = _mm128_add_ps(_mm128_mul_ps(_XMM0, _XMM7), _XMM9);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v116.m128_f32[0] - (float)((float)(*(float *)&v111 * *(float *)&v105) + *(float *)&v98)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Mad", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v116, v116, 85).m128_f32[0] - (float)((float)(v593 * v604) + v99)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Mad", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v116, v116, 170).m128_f32[0] - (float)((float)(v596 * v578) + v598)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Mad", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v116, v116, 255).m128_f32[0] - (float)((float)(v601 * v585) + v569)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Mad", v567) )
      __debugbreak();
  }
  v117 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v117 = I_flrand(-8.0, 8.0);
  v118 = v117;
  *(double *)&v117 = I_flrand(-8.0, 8.0);
  v119 = *(float *)&v117;
  *(double *)&v117 = I_flrand(-8.0, 8.0);
  v586 = *(float *)&v117;
  *(double *)&v117 = I_flrand(-8.0, 8.0);
  _XMM9 = v118;
  __asm
  {
    vinsertps xmm9, xmm9, xmm11, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v605 = *(float *)&v117;
  v124 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v124 = I_flrand(-8.0, 8.0);
  v125 = v124;
  *(double *)&v124 = I_flrand(-8.0, 8.0);
  v570 = *(float *)&v124;
  *(double *)&v124 = I_flrand(-8.0, 8.0);
  v594 = *(float *)&v124;
  *(double *)&v124 = I_flrand(-8.0, 8.0);
  _XMM7 = v125;
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+158h+var_10C], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v599 = *(float *)&v124;
  v130 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v130 = I_flrand(-8.0, 8.0);
  v131 = v130;
  *(double *)&v130 = I_flrand(-8.0, 8.0);
  v579 = *(float *)&v130;
  *(double *)&v130 = I_flrand(-8.0, 8.0);
  v597 = *(float *)&v130;
  *(double *)&v130 = I_flrand(-8.0, 8.0);
  v602 = *(float *)&v130;
  _XMM0 = v131;
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_108], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
  }
  v136 = _mm128_sub_ps(_XMM9, _mm128_mul_ps(_XMM0, _XMM7));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v136.m128_f32[0] - (float)(*(float *)&v118 - (float)(*(float *)&v131 * *(float *)&v125))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Nms", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v136, v136, 85).m128_f32[0] - (float)(v119 - (float)(v579 * v570))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Nms", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v136, v136, 170).m128_f32[0] - (float)(v586 - (float)(v597 * v594))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Nms", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v136, v136, 255).m128_f32[0] - (float)(v605 - (float)(v602 * v599))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Nms", v567) )
      __debugbreak();
  }
  v137 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v137 = I_flrand(-8.0, 8.0);
  v138 = v137;
  *(double *)&v137 = I_flrand(-8.0, 8.0);
  v139 = *(float *)&v137;
  *(double *)&v137 = I_flrand(-8.0, 8.0);
  v140 = *(float *)&v137;
  *(double *)&v137 = I_flrand(-8.0, 8.0);
  _XMM9 = v138;
  __asm
  {
    vinsertps xmm9, xmm9, xmm12, 10h
    vinsertps xmm9, xmm9, xmm11, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v145 = *(float *)&v137;
  v146 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v146 = I_flrand(-8.0, 8.0);
  v147 = v146;
  *(double *)&v146 = I_flrand(-8.0, 8.0);
  v148 = *(float *)&v146;
  *(double *)&v146 = I_flrand(-8.0, 8.0);
  v149 = *(float *)&v146;
  *(double *)&v146 = I_flrand(-8.0, 8.0);
  v150 = *(float *)&v146;
  _XMM0 = v147;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm6, 20h ; ' '
    vinsertps xmm0, xmm0, xmm5, 30h ; '0'
  }
  _XMM0 = _mm128_mul_ps(_XMM0, _XMM9);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm9, xmm1, xmm1
  }
  v158 = (float)((float)((float)(v148 * v139) + (float)(*(float *)&v147 * *(float *)&v138)) + (float)(v149 * v140)) + (float)(v150 * v145);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM9.m128_f32[0] - v158) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Dot", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM9, _XMM9, 85).m128_f32[0] - v158) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Dot", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM9, _XMM9, 170).m128_f32[0] - v158) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Dot", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM9, _XMM9, 255).m128_f32[0] - v158) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Dot", v567) )
      __debugbreak();
  }
  v159 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v159 = I_flrand(-8.0, 8.0);
  v160 = v159;
  *(double *)&v159 = I_flrand(-8.0, 8.0);
  v161 = *(float *)&v159;
  *(double *)&v159 = I_flrand(-8.0, 8.0);
  v162 = *(float *)&v159;
  *(double *)&v159 = I_flrand(-8.0, 8.0);
  _XMM5 = v160;
  __asm
  {
    vinsertps xmm5, xmm5, xmm7, 10h
    vinsertps xmm5, xmm5, xmm6, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 30h ; '0'
  }
  v167 = (float)((float)((float)(v161 * v161) + (float)(*(float *)&v160 * *(float *)&v160)) + (float)(v162 * v162)) + (float)(*(float *)&v159 * *(float *)&v159);
  _XMM1 = _mm128_mul_ps(_XMM5, _XMM5);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm6, xmm0, xmm0
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM6.m128_f32[0] - v167) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4LengthSq", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] - v167) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4LengthSq", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] - v167) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4LengthSq", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] - v167) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4LengthSq", v567) )
      __debugbreak();
  }
  v171 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v171 = I_flrand(-8.0, 8.0);
  v172 = v171;
  *(double *)&v171 = I_flrand(-8.0, 8.0);
  v173 = *(float *)&v171;
  *(double *)&v171 = I_flrand(-8.0, 8.0);
  v174 = *(float *)&v171;
  *(double *)&v171 = I_flrand(-8.0, 8.0);
  _XMM5 = v172;
  __asm
  {
    vinsertps xmm5, xmm5, xmm7, 10h
    vinsertps xmm5, xmm5, xmm6, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 30h ; '0'
  }
  v179 = (float)((float)((float)(v173 * v173) + (float)(*(float *)&v172 * *(float *)&v172)) + (float)(v174 * v174)) + (float)(*(float *)&v171 * *(float *)&v171);
  _XMM1 = _mm128_mul_ps(_XMM5, _XMM5);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
  }
  v183 = _mm_sqrt_ps(_XMM0);
  v184 = fsqrt(v179);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v183.m128_f32[0] - v184) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Length", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v183, v183, 85).m128_f32[0] - v184) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Length", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v183, v183, 170).m128_f32[0] - v184) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Length", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v183, v183, 255).m128_f32[0] - v184) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Length", v567) )
      __debugbreak();
  }
  v185 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v185 = I_flrand(-8.0, 8.0);
  v186 = v185;
  *(double *)&v185 = I_flrand(-8.0, 8.0);
  v187 = *(float *)&v185;
  *(double *)&v185 = I_flrand(-8.0, 8.0);
  v188 = *(float *)&v185;
  *(double *)&v185 = I_flrand(-8.0, 8.0);
  _XMM12 = v186;
  __asm
  {
    vinsertps xmm12, xmm12, xmm11, 10h
    vinsertps xmm12, xmm12, xmm10, 20h ; ' '
    vinsertps xmm12, xmm12, xmm0, 30h ; '0'
  }
  v193 = *(float *)&v185;
  v194 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  v195 = v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  v196 = *(float *)&v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  v197 = *(float *)&v194;
  *(double *)&v194 = I_flrand(-8.0, 8.0);
  _XMM5 = v195;
  __asm
  {
    vinsertps xmm5, xmm5, xmm7, 10h
    vinsertps xmm5, xmm5, xmm6, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 30h ; '0'
  }
  v202 = fsqrt((float)((float)((float)((float)(*(float *)&v186 - *(float *)&v195) * (float)(*(float *)&v186 - *(float *)&v195)) + (float)((float)(v187 - v196) * (float)(v187 - v196))) + (float)((float)(v188 - v197) * (float)(v188 - v197))) + (float)((float)(v193 - *(float *)&v194) * (float)(v193 - *(float *)&v194)));
  v203 = _mm128_sub_ps(_XMM12, _XMM5);
  _XMM0 = _mm128_mul_ps(v203, v203);
  __asm
  {
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  v207 = _mm_sqrt_ps(_XMM0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v207.m128_f32[0] - v202) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Distance", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v207, v207, 85).m128_f32[0] - v202) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Distance", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v207, v207, 170).m128_f32[0] - v202) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Distance", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v207, v207, 255).m128_f32[0] - v202) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Distance", v567) )
      __debugbreak();
  }
  v208 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v208 = I_flrand(-8.0, 8.0);
  v209 = v208;
  *(double *)&v208 = I_flrand(-8.0, 8.0);
  v210 = *(float *)&v208;
  *(double *)&v208 = I_flrand(-8.0, 8.0);
  v211 = *(float *)&v208;
  *(double *)&v208 = I_flrand(-8.0, 8.0);
  v212 = *(float *)&v208;
  _XMM2 = v209;
  __asm
  {
    vinsertps xmm2, xmm2, xmm11, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
  }
  _XMM0 = _mm128_mul_ps(_XMM2, _XMM2);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v220 = _mm128_div_ps(_XMM2, _mm_sqrt_ps(_XMM0));
  v221 = 1.0 / fsqrt((float)((float)((float)(v210 * v210) + (float)(*(float *)&v209 * *(float *)&v209)) + (float)(v211 * v211)) + (float)(v212 * v212));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v220.m128_f32[0] - (float)(v221 * *(float *)&v209)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Normalize", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v220, v220, 85).m128_f32[0] - (float)(v221 * v210)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Normalize", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v220, v220, 170).m128_f32[0] - (float)(v221 * v211)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Normalize", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v220, v220, 255).m128_f32[0] - (float)(v221 * v212)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Normalize", v567) )
      __debugbreak();
  }
  v222 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v222 = I_flrand(-8.0, 8.0);
  v223 = v222;
  *(double *)&v222 = I_flrand(-8.0, 8.0);
  v224 = *(float *)&v222;
  *(double *)&v222 = I_flrand(-8.0, 8.0);
  v225 = *(float *)&v222;
  *(double *)&v222 = I_flrand(-8.0, 8.0);
  v226 = *(float *)&v222;
  _XMM2 = v223;
  __asm
  {
    vinsertps xmm2, xmm2, xmm11, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
  }
  _XMM0 = _mm128_mul_ps(_XMM2, _XMM2);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
  }
  v235 = _mm128_mul_ps(_XMM1, _XMM2);
  v236 = 1.0 / fsqrt((float)((float)((float)(v224 * v224) + (float)(*(float *)&v223 * *(float *)&v223)) + (float)(v225 * v225)) + (float)(v226 * v226));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v235.m128_f32[0] - (float)(v236 * *(float *)&v223)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4NormalizeEst", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v235, v235, 85).m128_f32[0] - (float)(v236 * v224)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4NormalizeEst", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v235, v235, 170).m128_f32[0] - (float)(v236 * v225)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4NormalizeEst", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v235, v235, 255).m128_f32[0] - (float)(v236 * v226)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4NormalizeEst", v567) )
      __debugbreak();
  }
  v237 = LODWORD(FLOAT_N8_0);
  *(double *)&v237 = I_flrand(-8.0, 8.0);
  v238 = v237;
  *(double *)&v237 = I_flrand(-8.0, 8.0);
  v239 = *(float *)&v237;
  *(double *)&v237 = I_flrand(-8.0, 8.0);
  v240 = *(float *)&v237;
  v241 = (float)(COERCE_FLOAT(LODWORD(v239) & _xmm) + COERCE_FLOAT(v238 & _xmm)) + COERCE_FLOAT(v237 & _xmm);
  _XMM3 = v238;
  __asm
  {
    vinsertps xmm3, xmm3, xmm11, 10h
    vinsertps xmm3, xmm3, xmm12, 20h ; ' '
    vinsertps xmm3, xmm3, xmm13, 30h ; '0'
  }
  _XMM0 = _mm_shuffle_ps(_XMM3, _XMM3, 255);
  __asm { vrcpps  xmm1, xmm0 }
  v248 = _mm128_mul_ps(_XMM1, _XMM3);
  v249 = 1.0 / v241;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v248.m128_f32[0] - (float)(*(float *)&v238 * (float)(1.0 / v241))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4DivWEstimate", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v248, v248, 85).m128_f32[0] - (float)(v239 * v249)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4DivWEstimate", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v248, v248, 170).m128_f32[0] - (float)(v240 * v249)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4DivWEstimate", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v248, v248, 255).m128_f32[0] - (float)(v241 * v249)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4DivWEstimate", v567) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vrcpps  xmm6, xmm0 }
  if ( _XMM6.m128_f32[0] != INFINITY )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4RcpEstimateZero", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != INFINITY )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4RcpEstimateZero", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != INFINITY )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4RcpEstimateZero", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != INFINITY )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4RcpEstimateZero", v567) )
      __debugbreak();
  }
  v252 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v252 = I_flrand(-8.0, 8.0);
  v253 = v252;
  *(double *)&v252 = I_flrand(-8.0, 8.0);
  v254 = *(float *)&v252;
  *(double *)&v252 = I_flrand(-8.0, 8.0);
  v255 = *(float *)&v252;
  *(double *)&v252 = I_flrand(-8.0, 8.0);
  _XMM2 = LODWORD(FLOAT_N0_1);
  v257 = *(float *)&v252;
  _XMM13 = 0i64;
  if ( COERCE_FLOAT(v253 & _xmm) <= 0.1 )
  {
    __asm
    {
      vcmpless xmm0, xmm13, xmm8
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v253 = _XMM0;
  }
  if ( COERCE_FLOAT(LODWORD(v254) & _xmm) <= 0.1 )
  {
    __asm
    {
      vcmpless xmm0, xmm13, xmm7
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v254 = *(float *)&_XMM0;
  }
  if ( COERCE_FLOAT(LODWORD(v255) & _xmm) <= 0.1 )
  {
    __asm
    {
      vcmpless xmm0, xmm13, xmm11
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v255 = *(float *)&_XMM0;
  }
  if ( COERCE_FLOAT(LODWORD(v257) & _xmm) <= 0.1 )
  {
    __asm
    {
      vcmpless xmm0, xmm13, xmm12
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v257 = *(float *)&_XMM0;
  }
  _XMM0 = v253;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
    vrcpps  xmm6, xmm0
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM6.m128_f32[0] - (float)(1.0 / *(float *)&v253)) & _xmm) >= 0.0040000002 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RcpEstimate", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] - (float)(1.0 / v254)) & _xmm) >= 0.0040000002 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RcpEstimate", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] - (float)(1.0 / v255)) & _xmm) >= 0.0040000002 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RcpEstimate", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] - (float)(1.0 / v257)) & _xmm) >= 0.0040000002 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RcpEstimate", v567) )
      __debugbreak();
  }
  v272 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v272 = I_flrand(-8.0, 8.0);
  v273 = v272;
  *(double *)&v272 = I_flrand(-8.0, 8.0);
  v274 = *(float *)&v272;
  *(double *)&v272 = I_flrand(-8.0, 8.0);
  v275 = *(float *)&v272;
  *(double *)&v272 = I_flrand(-8.0, 8.0);
  _XMM2 = LODWORD(FLOAT_N1_0eN10);
  v277 = *(float *)&v272;
  _XMM3 = 0i64;
  if ( COERCE_FLOAT(v273 & _xmm) <= 1.0e-10 )
  {
    __asm
    {
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v273 = _XMM0;
  }
  if ( COERCE_FLOAT(LODWORD(v274) & _xmm) <= 1.0e-10 )
  {
    __asm
    {
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v274 = *(float *)&_XMM0;
  }
  if ( COERCE_FLOAT(LODWORD(v275) & _xmm) <= 1.0e-10 )
  {
    __asm
    {
      vcmpless xmm0, xmm3, xmm8
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v275 = *(float *)&_XMM0;
  }
  if ( COERCE_FLOAT(LODWORD(v277) & _xmm) <= 1.0e-10 )
  {
    __asm
    {
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v277 = *(float *)&_XMM0;
  }
  _XMM2 = v273;
  __asm
  {
    vinsertps xmm2, xmm2, xmm7, 10h
    vinsertps xmm2, xmm2, xmm8, 20h ; ' '
    vinsertps xmm2, xmm2, xmm12, 30h ; '0'
    vrcpps  xmm1, xmm2
  }
  v292 = _mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v292.m128_f32[0] - (float)(1.0 / *(float *)&v273)) & _xmm) >= 0.000099999997 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Rcp", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v292, v292, 85).m128_f32[0] - (float)(1.0 / v274)) & _xmm) >= 0.000099999997 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Rcp", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v292, v292, 170).m128_f32[0] - (float)(1.0 / v275)) & _xmm) >= 0.000099999997 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Rcp", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v292, v292, 255).m128_f32[0] - (float)(1.0 / v277)) & _xmm) >= 0.000099999997 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Rcp", v567) )
      __debugbreak();
  }
  v293 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v293 = I_flrand(-8.0, 8.0);
  v294 = v293;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v294;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vandnps xmm5, xmm0, xmm1
    vrsqrtps xmm4, xmm5
  }
  v302 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM5)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4);
  LODWORD(v303) = _mm_shuffle_ps(_XMM5, _XMM5, 85).m128_u32[0];
  LODWORD(v304) = _mm_shuffle_ps(_XMM5, _XMM5, 170).m128_u32[0];
  LODWORD(v305) = _mm_shuffle_ps(_XMM5, _XMM5, 255).m128_u32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v302.m128_f32[0] - (float)(1.0 / fsqrt(_XMM5.m128_f32[0]))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ReciprocalSqrt", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v302, v302, 85).m128_f32[0] - (float)(1.0 / fsqrt(v303))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ReciprocalSqrt", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v302, v302, 170).m128_f32[0] - (float)(1.0 / fsqrt(v304))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ReciprocalSqrt", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v302, v302, 255).m128_f32[0] - (float)(1.0 / fsqrt(v305))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ReciprocalSqrt", v567) )
      __debugbreak();
  }
  v306 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v306 = I_flrand(-8.0, 8.0);
  v307 = v306;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v307;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vandnps xmm2, xmm0, xmm1
    vrsqrtps xmm6, xmm2
  }
  LODWORD(v315) = _mm_shuffle_ps(_XMM2, _XMM2, 85).m128_u32[0];
  LODWORD(v316) = _mm_shuffle_ps(_XMM2, _XMM2, 170).m128_u32[0];
  LODWORD(v317) = _mm_shuffle_ps(_XMM2, _XMM2, 255).m128_u32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM6.m128_f32[0] - (float)(1.0 / fsqrt(_XMM2.m128_f32[0]))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ReciprocalSqrtEst", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] - (float)(1.0 / fsqrt(v315))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ReciprocalSqrtEst", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] - (float)(1.0 / fsqrt(v316))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ReciprocalSqrtEst", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] - (float)(1.0 / fsqrt(v317))) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ReciprocalSqrtEst", v567) )
      __debugbreak();
  }
  v318 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v318 = I_flrand(-8.0, 8.0);
  v319 = v318;
  *(double *)&v318 = I_flrand(-8.0, 8.0);
  v320 = *(float *)&v318;
  *(double *)&v318 = I_flrand(-8.0, 8.0);
  v321 = *(float *)&v318;
  *(double *)&v318 = I_flrand(-8.0, 8.0);
  _XMM7 = v319;
  __asm
  {
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v587 = *(float *)&v318;
  v326 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v326 = I_flrand(-8.0, 8.0);
  v327 = v326;
  *(double *)&v326 = I_flrand(-8.0, 8.0);
  v328 = *(float *)&v326;
  *(double *)&v326 = I_flrand(-8.0, 8.0);
  v580 = *(float *)&v326;
  *(double *)&v326 = I_flrand(-8.0, 8.0);
  v571 = *(float *)&v326;
  _XMM0 = v327;
  __asm
  {
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 20h
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
  }
  v333 = _mm128_add_ps(_XMM0, _XMM7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v333.m128_f32[0] - (float)(*(float *)&v327 + *(float *)&v319)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Add", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v333, v333, 85).m128_f32[0] - (float)(v328 + v320)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Add", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v333, v333, 170).m128_f32[0] - (float)(v321 + v580)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Add", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v333, v333, 255).m128_f32[0] - (float)(v571 + v587)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Add", v567) )
      __debugbreak();
  }
  v334 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v334 = I_flrand(-8.0, 8.0);
  v335 = v334;
  *(double *)&v334 = I_flrand(-8.0, 8.0);
  v336 = *(float *)&v334;
  *(double *)&v334 = I_flrand(-8.0, 8.0);
  v337 = *(float *)&v334;
  *(double *)&v334 = I_flrand(-8.0, 8.0);
  _XMM7 = v335;
  __asm
  {
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v572 = *(float *)&v334;
  v342 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v342 = I_flrand(-8.0, 8.0);
  v343 = v342;
  *(double *)&v342 = I_flrand(-8.0, 8.0);
  v344 = *(float *)&v342;
  *(double *)&v342 = I_flrand(-8.0, 8.0);
  v581 = *(float *)&v342;
  *(double *)&v342 = I_flrand(-8.0, 8.0);
  v588 = *(float *)&v342;
  _XMM0 = v343;
  __asm
  {
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 20h
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
  }
  v349 = _mm128_sub_ps(_XMM7, _XMM0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v349.m128_f32[0] - (float)(*(float *)&v335 - *(float *)&v343)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Sub", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v349, v349, 85).m128_f32[0] - (float)(v336 - v344)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Sub", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v349, v349, 170).m128_f32[0] - (float)(v337 - v581)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Sub", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v349, v349, 255).m128_f32[0] - (float)(v572 - v588)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Sub", v567) )
      __debugbreak();
  }
  v350 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v350 = I_flrand(-8.0, 8.0);
  v351 = v350;
  *(double *)&v350 = I_flrand(-8.0, 8.0);
  v352 = *(float *)&v350;
  *(double *)&v350 = I_flrand(-8.0, 8.0);
  v353 = *(float *)&v350;
  *(double *)&v350 = I_flrand(-8.0, 8.0);
  _XMM7 = v351;
  __asm
  {
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v589 = *(float *)&v350;
  v358 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v359 = v358;
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v360 = *(float *)&v358;
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v582 = *(float *)&v358;
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v573 = *(float *)&v358;
  _XMM0 = v359;
  __asm
  {
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 20h
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
  }
  v365 = _mm128_mul_ps(_XMM0, _XMM7);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v365.m128_f32[0] - (float)(*(float *)&v359 * *(float *)&v351)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Mul", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v365, v365, 85).m128_f32[0] - (float)(v360 * v352)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Mul", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v365, v365, 170).m128_f32[0] - (float)(v353 * v582)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Mul", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v365, v365, 255).m128_f32[0] - (float)(v573 * v589)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Mul", v567) )
      __debugbreak();
  }
  v366 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v366 = I_flrand(-8.0, 8.0);
  v367 = v366;
  *(double *)&v366 = I_flrand(-8.0, 8.0);
  v368 = *(float *)&v366;
  *(double *)&v366 = I_flrand(-8.0, 8.0);
  v369 = *(float *)&v366;
  *(double *)&v366 = I_flrand(-8.0, 8.0);
  _XMM7 = v367;
  __asm
  {
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v574 = *(float *)&v366;
  v374 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v374 = I_flrand(-8.0, 8.0);
  v375 = v374;
  *(double *)&v374 = I_flrand(-8.0, 8.0);
  v376 = *(float *)&v374;
  *(double *)&v374 = I_flrand(-8.0, 8.0);
  v583 = *(float *)&v374;
  *(double *)&v374 = I_flrand(-8.0, 8.0);
  v590 = *(float *)&v374;
  _XMM0 = v375;
  __asm
  {
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 20h
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
  }
  v381 = _mm128_div_ps(_XMM7, _XMM0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v381.m128_f32[0] - (float)(*(float *)&v367 / *(float *)&v375)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Div", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v381, v381, 85).m128_f32[0] - (float)(v368 / v376)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Div", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v381, v381, 170).m128_f32[0] - (float)(v369 / v583)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Div", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v381, v381, 255).m128_f32[0] - (float)(v574 / v590)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Div", v567) )
      __debugbreak();
  }
  v382 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v382 = I_flrand(-8.0, 8.0);
  v383 = v382;
  *(double *)&v382 = I_flrand(-8.0, 8.0);
  v384 = *(float *)&v382;
  *(double *)&v382 = I_flrand(-8.0, 8.0);
  v385 = *(float *)&v382;
  *(double *)&v382 = I_flrand(-8.0, 8.0);
  v386 = *(float *)&v382;
  _XMM6 = v383;
  __asm
  {
    vinsertps xmm6, xmm6, xmm11, 10h
    vinsertps xmm6, xmm6, xmm12, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v391 = (__m128)LODWORD(FLOAT_N8_0);
  *(double *)v391.m128_u64 = I_flrand(-8.0, 8.0);
  v392 = _mm128_mul_ps(_mm_shuffle_ps(v391, v391, 0), _XMM6);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v392.m128_f32[0] - (float)(v391.m128_f32[0] * *(float *)&v383)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4MulFloat", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v392, v392, 85).m128_f32[0] - (float)(v391.m128_f32[0] * v384)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4MulFloat", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v392, v392, 170).m128_f32[0] - (float)(v391.m128_f32[0] * v385)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4MulFloat", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v392, v392, 255).m128_f32[0] - (float)(v391.m128_f32[0] * v386)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4MulFloat", v567) )
      __debugbreak();
  }
  v393 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v393 = I_flrand(-8.0, 8.0);
  v394 = v393;
  *(double *)&v393 = I_flrand(-8.0, 8.0);
  v395 = v393;
  *(double *)&v393 = I_flrand(-8.0, 8.0);
  v396 = v393;
  *(double *)&v393 = I_flrand(-8.0, 8.0);
  v397 = v393;
  _XMM0 = v394;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
  }
  v402 = _mm128_sub_ps((__m128)0i64, _XMM0);
  if ( v402.m128_f32[0] != COERCE_FLOAT(v394 ^ _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Negate", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v402, v402, 85).m128_f32[0] != COERCE_FLOAT(v395 ^ _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Negate", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v402, v402, 170).m128_f32[0] != COERCE_FLOAT(v396 ^ _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Negate", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v402, v402, 255).m128_f32[0] != COERCE_FLOAT(v397 ^ _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Negate", v567) )
      __debugbreak();
  }
  v403 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v403 = I_flrand(-8.0, 8.0);
  v404 = v403;
  *(double *)&v403 = I_flrand(-8.0, 8.0);
  v405 = v403;
  *(double *)&v403 = I_flrand(-8.0, 8.0);
  v406 = v403;
  *(double *)&v403 = I_flrand(-8.0, 8.0);
  _XMM1 = v404;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v411 = v403;
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm7, xmm0, xmm1 }
  if ( _XMM7.m128_f32[0] != COERCE_FLOAT(v404 & _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Abs", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] != COERCE_FLOAT(v405 & _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Abs", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] != COERCE_FLOAT(v406 & _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Abs", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] != COERCE_FLOAT(v411 & _xmm) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Abs", v567) )
      __debugbreak();
  }
  v414 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v414 = I_flrand(-8.0, 8.0);
  v415 = v414;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v415;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm2, xmm0, xmm1 }
  v422 = _mm_sqrt_ps(_XMM2);
  LODWORD(v423) = _mm_shuffle_ps(_XMM2, _XMM2, 85).m128_u32[0];
  LODWORD(v424) = _mm_shuffle_ps(_XMM2, _XMM2, 170).m128_u32[0];
  LODWORD(v425) = _mm_shuffle_ps(_XMM2, _XMM2, 255).m128_u32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v422.m128_f32[0] - fsqrt(_XMM2.m128_f32[0])) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Sqrt", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v422, v422, 85).m128_f32[0] - fsqrt(v423)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Sqrt", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v422, v422, 170).m128_f32[0] - fsqrt(v424)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Sqrt", v567) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v422, v422, 255).m128_f32[0] - fsqrt(v425)) & _xmm) >= 0.001 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Sqrt", v567) )
      __debugbreak();
  }
  v426 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v426 = I_flrand(-8.0, 8.0);
  v427 = v426;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM7 = v427;
  __asm
  {
    vinsertps xmm7, xmm7, xmm10, 10h
    vinsertps xmm7, xmm7, xmm12, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v432 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v432 = I_flrand(-8.0, 8.0);
  _XMM6 = v432;
  v434 = LODWORD(FLOAT_N8_0);
  *(double *)&v434 = I_flrand(-8.0, 8.0);
  _XMM11 = v434;
  v436 = LODWORD(FLOAT_N8_0);
  *(double *)&v436 = I_flrand(-8.0, 8.0);
  _XMM13 = v436;
  *(double *)&v436 = I_flrand(-8.0, 8.0);
  v575 = *(float *)&v436;
  _XMM0 = _XMM6;
  __asm
  {
    vinsertps xmm0, xmm0, xmm11, 10h
    vinsertps xmm0, xmm0, xmm13, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vminps  xmm7, xmm7, xmm0
    vminss  xmm0, xmm6, xmm8
  }
  if ( _XMM7.m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Min", v567) )
      __debugbreak();
  }
  __asm { vminss  xmm0, xmm11, xmm10 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Min", v567) )
      __debugbreak();
  }
  __asm { vminss  xmm0, xmm13, xmm12 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Min", v567) )
      __debugbreak();
  }
  _XMM0 = LODWORD(v575);
  __asm { vminss  xmm0, xmm0, xmm14 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Min", v567) )
      __debugbreak();
  }
  v448 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v448 = I_flrand(-8.0, 8.0);
  v449 = v448;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM7 = v449;
  __asm
  {
    vinsertps xmm7, xmm7, xmm10, 10h
    vinsertps xmm7, xmm7, xmm12, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v454 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v454 = I_flrand(-8.0, 8.0);
  _XMM6 = v454;
  v456 = LODWORD(FLOAT_N8_0);
  *(double *)&v456 = I_flrand(-8.0, 8.0);
  _XMM11 = v456;
  v458 = LODWORD(FLOAT_N8_0);
  *(double *)&v458 = I_flrand(-8.0, 8.0);
  _XMM13 = v458;
  *(double *)&v458 = I_flrand(-8.0, 8.0);
  v576 = *(float *)&v458;
  _XMM0 = _XMM6;
  __asm
  {
    vinsertps xmm0, xmm0, xmm11, 10h
    vinsertps xmm0, xmm0, xmm13, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vmaxps  xmm7, xmm7, xmm0
    vmaxss  xmm0, xmm6, xmm8
  }
  if ( _XMM7.m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Max", v567) )
      __debugbreak();
  }
  __asm { vmaxss  xmm0, xmm11, xmm10 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Max", v567) )
      __debugbreak();
  }
  __asm { vmaxss  xmm0, xmm13, xmm12 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Max", v567) )
      __debugbreak();
  }
  _XMM0 = LODWORD(v576);
  __asm { vmaxss  xmm0, xmm0, xmm14 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Max", v567) )
      __debugbreak();
  }
  v470 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v470 = I_flrand(-8.0, 8.0);
  v577 = *(float *)&v470;
  v471 = v470;
  *(double *)&v470 = I_flrand(-8.0, 8.0);
  v591 = *(float *)&v470;
  *(double *)&v470 = I_flrand(-8.0, 8.0);
  v603 = *(float *)&v470;
  *(double *)&v470 = I_flrand(-8.0, 8.0);
  v600 = *(float *)&v470;
  _XMM0 = v471;
  __asm
  {
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
  }
  v606 = _XMM0;
  v476 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v476 = I_flrand(-8.0, 8.0);
  v477 = v476;
  *(double *)&v476 = I_flrand(-8.0, 8.0);
  v478 = *(float *)&v476;
  *(double *)&v476 = I_flrand(-8.0, 8.0);
  v479 = *(float *)&v476;
  *(double *)&v476 = I_flrand(-8.0, 8.0);
  _XMM7 = v477;
  __asm
  {
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v595 = *(float *)&v476;
  v484 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v484 = I_flrand(-8.0, 8.0);
  v485 = v484;
  *(double *)&v484 = I_flrand(-8.0, 8.0);
  v486 = *(float *)&v484;
  *(double *)&v484 = I_flrand(-8.0, 8.0);
  v487 = *(float *)&v484;
  *(double *)&v484 = I_flrand(-8.0, 8.0);
  _XMM6 = v485;
  __asm
  {
    vinsertps xmm6, xmm6, xmm12, 10h
    vinsertps xmm6, xmm6, xmm14, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v584 = *(float *)&v484;
  v492 = *(float *)&v484;
  if ( _XMM7.m128_f32[0] > _XMM6.m128_f32[0] )
  {
    v493 = _mm_shuffle_ps(_XMM7, _XMM7, 0);
    _XMM7 = _mm_shuffle_ps(_mm_shuffle_ps(_mm_shuffle_ps(_XMM6, _XMM6, 0), _XMM7, 80), _XMM7, 232);
    v494 = _mm_shuffle_ps(v493, _XMM6, 80);
    v493.m128_i32[0] = v477;
    LODWORD(v477) = v485;
    LODWORD(v485) = v493.m128_i32[0];
    _XMM6 = _mm_shuffle_ps(v494, _XMM6, 232);
  }
  v495 = _mm_shuffle_ps(_XMM7, _XMM7, 85);
  if ( v495.m128_f32[0] > _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] )
  {
    _XMM7 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM7, _mm_shuffle_ps(_XMM6, _XMM6, 85), 80), _XMM7, 232);
    v496 = _mm_shuffle_ps(_XMM6, v495, 80);
    v497 = v478;
    v478 = v486;
    v486 = v497;
    _XMM6 = _mm_shuffle_ps(v496, _XMM6, 232);
  }
  v498 = _mm_shuffle_ps(_XMM7, _XMM7, 170);
  if ( v498.m128_f32[0] > _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] )
  {
    _XMM7 = _mm_shuffle_ps(_XMM7, _mm_shuffle_ps(_mm_shuffle_ps(_XMM6, _XMM6, 170), _XMM7, 250), 132);
    v499 = _mm_shuffle_ps(v498, _XMM6, 250);
    v500 = v479;
    v479 = v487;
    v487 = v500;
    _XMM6 = _mm_shuffle_ps(_XMM6, v499, 132);
  }
  v501 = _mm_shuffle_ps(_XMM7, _XMM7, 255);
  if ( v501.m128_f32[0] > _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] )
  {
    _mm_shuffle_ps(_XMM7, _mm_shuffle_ps(_XMM7, _mm_shuffle_ps(_XMM6, _XMM6, 255), 250), 132);
    v584 = v595;
    v595 = v492;
    _XMM6 = _mm_shuffle_ps(_XMM6, _mm_shuffle_ps(_XMM6, v501, 250), 132);
  }
  __asm
  {
    vcmpltps xmm0, xmm6, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  _XMM0 = v606;
  __asm
  {
    vmaxps  xmm0, xmm0, xmm7
    vminps  xmm7, xmm0, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(v577, *(float *)&v477, *(float *)&v485);
  if ( _XMM7.m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Clamp", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] != COERCE_FLOAT(COERCE_UNSIGNED_INT64(I_fclamp(v591, v478, v486))) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Clamp", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] != COERCE_FLOAT(COERCE_UNSIGNED_INT64(I_fclamp(v603, v479, v487))) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Clamp", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] != COERCE_FLOAT(COERCE_UNSIGNED_INT64(I_fclamp(v600, v595, v584))) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Clamp", v567) )
      __debugbreak();
  }
  __asm { vroundps xmm7, cs:__xmm@d01502f958635fa9ff7fffff7f7fffff, 0 }
  if ( _XMM7.m128_f32[0] != roundf(3.4028235e38) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4RoundSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] != roundf(-3.4028235e38) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4RoundSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] != roundf(9.9999999e14) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4RoundSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] != roundf(-1.0e10) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4RoundSpecialValues", v567) )
      __debugbreak();
  }
  v508 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v508 = I_flrand(-8.0, 8.0);
  v509 = v508;
  *(double *)&v508 = I_flrand(-8.0, 8.0);
  v510 = *(float *)&v508;
  *(double *)&v508 = I_flrand(-8.0, 8.0);
  v511 = *(float *)&v508;
  *(double *)&v508 = I_flrand(-8.0, 8.0);
  v512 = *(float *)&v508;
  _XMM0 = v509;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm11, 30h ; '0'
    vroundps xmm7, xmm0, 0
  }
  if ( _XMM7.m128_f32[0] != roundf(*(float *)&v509) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Round", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] != roundf(v510) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Round", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] != roundf(v511) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Round", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] != roundf(v512) )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Round", v567) )
      __debugbreak();
  }
  __asm { vroundps xmm6, cs:__xmm@d01502f958635fa9ff7fffff7f7fffff, 1 }
  if ( _XMM6.m128_f32[0] != 3.4028235e38 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4FloorSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != -3.4028235e38 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4FloorSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != 9.9999999e14 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4FloorSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != -1.0e10 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4FloorSpecialValues", v567) )
      __debugbreak();
  }
  v519 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v519 = I_flrand(-8.0, 8.0);
  v520 = v519;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM0 = v520;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm11, 30h ; '0'
  }
  _XMM1 = 0i64;
  __asm
  {
    vroundps xmm7, xmm0, 1
    vroundss xmm1, xmm1, xmm6, 1
  }
  if ( _XMM7.m128_f32[0] != *(float *)&_XMM1 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Floor", v567) )
      __debugbreak();
  }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm8, 1 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] != *(float *)&_XMM1 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Floor", v567) )
      __debugbreak();
  }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm10, 1 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] != *(float *)&_XMM1 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Floor", v567) )
      __debugbreak();
  }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm11, 1 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] != *(float *)&_XMM1 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Floor", v567) )
      __debugbreak();
  }
  __asm { vroundps xmm6, cs:__xmm@d01502f958635fa9ff7fffff7f7fffff, 2 }
  if ( _XMM6.m128_f32[0] != 3.4028235e38 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CeilSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != -3.4028235e38 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CeilSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != 9.9999999e14 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CeilSpecialValues", v567) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != -1.0e10 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CeilSpecialValues", v567) )
      __debugbreak();
  }
  v535 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v535 = I_flrand(-8.0, 8.0);
  v536 = v535;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM0 = v536;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm11, 30h ; '0'
  }
  _XMM1 = 0i64;
  __asm
  {
    vroundps xmm7, xmm0, 2
    vroundss xmm1, xmm1, xmm6, 2
  }
  if ( _XMM7.m128_f32[0] != *(float *)&_XMM1 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Ceil", v567) )
      __debugbreak();
  }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm8, 2 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] != *(float *)&_XMM1 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Ceil", v567) )
      __debugbreak();
  }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm10, 2 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] != *(float *)&_XMM1 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Ceil", v567) )
      __debugbreak();
  }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm11, 2 }
  if ( _mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] != *(float *)&_XMM1 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Ceil", v567) )
      __debugbreak();
  }
  v550 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v550 = I_flrand(-8.0, 8.0);
  v551 = v550;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v551;
  __asm
  {
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v556 = _XMM1 & *(_OWORD *)&g_negativeZero.v | _xmm;
  _XMM13 = 0i64;
  __asm { vcmpless xmm1, xmm13, xmm6 }
  _XMM6 = LODWORD(FLOAT_N1_0);
  __asm { vblendvps xmm0, xmm6, xmm11, xmm1 }
  if ( *(float *)&v556 != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Sign", v567) )
      __debugbreak();
  }
  __asm
  {
    vcmpless xmm0, xmm13, xmm8
    vblendvps xmm0, xmm6, xmm11, xmm0
  }
  if ( _mm_shuffle_ps((__m128)v556, (__m128)v556, 85).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Sign", v567) )
      __debugbreak();
  }
  __asm
  {
    vcmpless xmm0, xmm13, xmm10
    vblendvps xmm0, xmm6, xmm11, xmm0
  }
  if ( _mm_shuffle_ps((__m128)v556, (__m128)v556, 170).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Sign", v567) )
      __debugbreak();
  }
  __asm
  {
    vcmpless xmm0, xmm13, xmm9
    vblendvps xmm0, xmm6, xmm11, xmm0
  }
  if ( _mm_shuffle_ps((__m128)v556, (__m128)v556, 255).m128_f32[0] != *(float *)&_XMM0 )
  {
    LODWORD(v567) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Sign", v567) )
      __debugbreak();
  }
}

/*
==============
Float4MiscTest
==============
*/
unsigned __int8 Float4MiscTest()
{
  __int128 v0; 
  __int128 v1; 
  float v2; 
  float v3; 
  double v4; 
  __m128 v9; 
  __int128 v10; 
  __int128 v11; 
  float v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  __int128 v26; 
  __int128 v27; 
  float v28; 
  __int128 v33; 
  __int128 v34; 
  float v35; 
  float v36; 
  __int128 v42; 
  __int128 v43; 
  __int128 v61; 
  __int128 v62; 
  __int128 v69; 
  __int128 v70; 
  __m128 v77; 
  float v78; 
  float v79; 
  float v80; 
  const float4 *v81; 
  float4 *v82; 
  __int128 v83; 
  __int128 v84; 
  __m128 v89; 
  __m128 v90; 
  float v91; 
  float v92; 
  float v93; 
  const float4 *v94; 
  float4 *v95; 
  __m128 v96; 
  __int128 v97; 
  __int128 v98; 
  float v99; 
  float v100; 
  float v101; 
  const float4 *v106; 
  float4 *v107; 
  __m128 v108; 
  __int128 v109; 
  __int128 v110; 
  float v111; 
  float v112; 
  float v113; 
  __m128 v118; 
  const float4 *v119; 
  float4 *v120; 
  __m128 v121; 
  __int128 v122; 
  __int128 v123; 
  float v124; 
  float v125; 
  float v126; 
  const float4 *v131; 
  __m128 v; 
  float v133; 
  __m128 v134; 
  float v135; 
  __int128 v136; 
  __int128 v137; 
  float v138; 
  float v139; 
  float v144; 
  __m128 v145; 
  __m128 v146; 
  const float4 *v147; 
  float4 *v148; 
  __m128 v149; 
  const float4 *v150; 
  float4 *v151; 
  const float4 *v152; 
  vector3 *v153; 
  __m128 v154; 
  __m128 v155; 
  const float4 *v156; 
  float4 *v157; 
  __m128 v158; 
  __m128 v159; 
  __m128 v160; 
  const float4 *v161; 
  vector3 *v162; 
  const float4 *v163; 
  float4 *v164; 
  __m128 v165; 
  __m128 v166; 
  __m128 v167; 
  __m128 v168; 
  const float4 *v169; 
  vector3 *v170; 
  unsigned __int8 result; 
  __m128 v172; 
  __m128 v173; 
  __int64 v174; 
  unsigned int v175; 
  float4 v176; 
  __int128 v177; 
  __m128 v178; 
  float4 v179; 

  v0 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v1 = v0;
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v2 = *(float *)&v0;
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v3 = *(float *)&v0;
  v4 = I_flrand(-8.0, 8.0);
  _XMM6 = v1;
  __asm
  {
    vinsertps xmm6, xmm6, xmm8, 10h
    vinsertps xmm6, xmm6, xmm10, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    v175 = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXYXY", v175) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXYXY", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXYXY", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXYXY", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 17).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYXYX", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYXYX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYXYX", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYXYX", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXWXZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXWXZ", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXWXZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXWXZ", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXWXW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXWXW", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXWXW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXWXW", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXZXZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXZXZ", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXZXZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXZXZ", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXZXW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXZXW", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXZXW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXZXW", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXZYZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXZYZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXZYZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXZYZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 153).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYZYZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYZYZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYZYZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYZYZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 217).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYZYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYZYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYZYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYZYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 221).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYWYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYWYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYWYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYWYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 201).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYZWX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYZWX", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYZWX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYZWX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 210).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleZXYW", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleZXYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleZXYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleZXYW", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 27).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleWZYX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleWZYX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleWZYX", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleWZYX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 78).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleZWXY", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleZWXY", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleZWXY", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleZWXY", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 177).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYXWZ", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYXWZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != *(float *)&v4 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYXWZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v3 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYXWZ", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 5).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYYXX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYYXX", v174) )
      __debugbreak();
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYYXX", v174) )
      __debugbreak();
    if ( _XMM6.m128_f32[0] != *(float *)&v1 )
    {
      LODWORD(v174) = g_unitSavedSeed_0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYYXX", v174) )
        __debugbreak();
    }
  }
  v9 = _mm_shuffle_ps(_XMM6, _XMM6, 20);
  if ( v9.m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXYYX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v9, v9, 85).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXYYX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v9, v9, 170).m128_f32[0] != v2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXYYX", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v9, v9, 255).m128_f32[0] != *(float *)&v1 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXYYX", v174) )
      __debugbreak();
  }
  v10 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v10 = I_flrand(-8.0, 8.0);
  v11 = v10;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  *(double *)&v10 = I_flrand(-8.0, 8.0);
  _XMM8 = v11;
  __asm
  {
    vinsertps xmm8, xmm8, xmm7, 10h
    vinsertps xmm8, xmm8, xmm6, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  v16 = *(float *)&v10;
  v17 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v17 = I_flrand(-8.0, 8.0);
  v18 = v17;
  *(double *)&v17 = I_flrand(-8.0, 8.0);
  v19 = *(float *)&v17;
  *(double *)&v17 = I_flrand(-8.0, 8.0);
  v20 = *(float *)&v17;
  I_flrand(-8.0, 8.0);
  *(unsigned __int64 *)((char *)v176.v.m128_u64 + 4) = -1i64;
  _XMM1 = v18;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v176.v.m128_i32[0] = 0;
  v176.v.m128_i32[3] = 0;
  __asm { vblendvps xmm6, xmm8, xmm1, xmm0 }
  if ( _XMM6.m128_f32[0] != *(float *)&v11 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Sel", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v19 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Sel", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v20 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Sel", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != v16 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Sel", v174) )
      __debugbreak();
  }
  v26 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v26 = I_flrand(-8.0, 8.0);
  v27 = v26;
  *(double *)&v26 = I_flrand(-8.0, 8.0);
  v28 = *(float *)&v26;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM8 = v27;
  __asm
  {
    vinsertps xmm8, xmm8, xmm10, 10h
    vinsertps xmm8, xmm8, xmm6, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  v33 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v33 = I_flrand(-8.0, 8.0);
  v34 = v33;
  I_flrand(-8.0, 8.0);
  *(double *)&v33 = I_flrand(-8.0, 8.0);
  v35 = *(float *)&v33;
  *(double *)&v33 = I_flrand(-8.0, 8.0);
  v36 = *(float *)&v33;
  _XMM0 = v34;
  __asm
  {
    vinsertps xmm0, xmm0, xmm6, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
    vblendps xmm6, xmm8, xmm0, 0Ch
  }
  if ( _XMM6.m128_f32[0] != *(float *)&v27 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Blend", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] != v28 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Blend", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] != v35 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Blend", v174) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] != v36 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Blend", v174) )
      __debugbreak();
  }
  v42 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v42 = I_flrand(-8.0, 8.0);
  v43 = v42;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v43;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm2, xmm0, xmm1 }
  _XMM6 = 0i64;
  __asm
  {
    vmaxps  xmm0, xmm2, xmm6
    vcvttps2dq xmm3, xmm0
  }
  _mm_shuffle_ps(_XMM2, _XMM2, 85);
  _mm_shuffle_ps(_XMM2, _XMM2, 170);
  _mm_shuffle_ps(_XMM2, _XMM2, 255);
  __asm
  {
    vroundss xmm2, xmm6, xmm1, 1
    vpextrd rax, xmm3, 0
    vpextrd rbx, xmm3, 1
    vpextrd rdi, xmm3, 2
    vpextrd rsi, xmm3, 3
  }
  if ( (_DWORD)_RAX != (int)*(float *)&_XMM2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CastUint (1)", v174) )
      __debugbreak();
  }
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  if ( (_DWORD)_RBX != (int)*(float *)&_XMM2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CastUint (2)", v174) )
      __debugbreak();
  }
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  if ( (_DWORD)_RDI != (int)*(float *)&_XMM2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CastUint (3)", v174) )
      __debugbreak();
  }
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  if ( (_DWORD)_RSI != (int)*(float *)&_XMM2 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CastUint (4)", v174) )
      __debugbreak();
  }
  v61 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v61 = I_flrand(-8.0, 8.0);
  v62 = v61;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v62;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vcmpneqps xmm0, xmm1, xmm1
    vmovmskps eax, xmm0
  }
  if ( _EAX )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4IsNaN", v174) )
      __debugbreak();
  }
  v69 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v69 = I_flrand(-8.0, 8.0);
  v70 = v69;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v70;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm1, xmm0, xmm1 }
  v77 = _mm128_mul_ps(_mm128_div_ps(_XMM1, (__m128)_xmm), (__m128)_xmm);
  LODWORD(v78) = _mm_shuffle_ps(v77, v77, 85).m128_u32[0];
  LODWORD(v79) = _mm_shuffle_ps(v77, v77, 170).m128_u32[0];
  LODWORD(v80) = _mm_shuffle_ps(v77, v77, 255).m128_u32[0];
  Float4CosEst(v82, v81);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v77.m128_f32[0] - cosf_0(v77.m128_f32[0])) & _xmm) >= 0.010000001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4CosEst", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v77, v77, 85).m128_f32[0] - cosf_0(v78)) & _xmm) >= 0.010000001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4CosEst", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v77, v77, 170).m128_f32[0] - cosf_0(v79)) & _xmm) >= 0.010000001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4CosEst", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v77, v77, 255).m128_f32[0] - cosf_0(v80)) & _xmm) >= 0.010000001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4CosEst", v174) )
      __debugbreak();
  }
  v83 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v83 = I_flrand(-8.0, 8.0);
  v84 = v83;
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = v84;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v89 = _mm128_mul_ps(_mm128_div_ps(_XMM1, (__m128)_xmm), (__m128)_xmm);
  v90 = _mm128_add_ps(v89, g_3PiOver2.v);
  LODWORD(v91) = _mm_shuffle_ps(v89, v89, 85).m128_u32[0];
  LODWORD(v92) = _mm_shuffle_ps(v89, v89, 170).m128_u32[0];
  LODWORD(v93) = _mm_shuffle_ps(v89, v89, 255).m128_u32[0];
  Float4CosEst(v95, v94);
  v96 = v90;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v90.m128_f32[0] - sinf_0(v89.m128_f32[0])) & _xmm) >= 0.010000001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4SinEst", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v96, v96, 85).m128_f32[0] - sinf_0(v91)) & _xmm) >= 0.010000001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4SinEst", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v96, v96, 170).m128_f32[0] - sinf_0(v92)) & _xmm) >= 0.010000001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4SinEst", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v96, v96, 255).m128_f32[0] - sinf_0(v93)) & _xmm) >= 0.010000001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4SinEst", v174) )
      __debugbreak();
  }
  v97 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v98 = v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v99 = *(float *)&v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v100 = *(float *)&v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v101 = *(float *)&v97;
  _XMM0 = v98;
  __asm
  {
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
  }
  Float4CosEst(v107, v106);
  v108 = _XMM0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM0.m128_f32[0] - cosf_0(*(float *)&v98)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Cos", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v108, v108, 85).m128_f32[0] - cosf_0(v99)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Cos", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v108, v108, 170).m128_f32[0] - cosf_0(v100)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Cos", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v108, v108, 255).m128_f32[0] - cosf_0(v101)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Cos", v174) )
      __debugbreak();
  }
  v109 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v109 = I_flrand(-8.0, 8.0);
  v110 = v109;
  *(double *)&v109 = I_flrand(-8.0, 8.0);
  v111 = *(float *)&v109;
  *(double *)&v109 = I_flrand(-8.0, 8.0);
  v112 = *(float *)&v109;
  *(double *)&v109 = I_flrand(-8.0, 8.0);
  v113 = *(float *)&v109;
  _XMM0 = v110;
  __asm
  {
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
  }
  v118 = _mm128_add_ps(_XMM0, g_3PiOver2.v);
  Float4CosEst(v120, v119);
  v121 = v118;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v118.m128_f32[0] - sinf_0(*(float *)&v110)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Sin", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v121, v121, 85).m128_f32[0] - sinf_0(v111)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Sin", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v121, v121, 170).m128_f32[0] - sinf_0(v112)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Sin", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v121, v121, 255).m128_f32[0] - sinf_0(v113)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Sin", v174) )
      __debugbreak();
  }
  v122 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v122 = I_flrand(-8.0, 8.0);
  v123 = v122;
  *(double *)&v122 = I_flrand(-8.0, 8.0);
  v124 = *(float *)&v122;
  *(double *)&v122 = I_flrand(-8.0, 8.0);
  v125 = *(float *)&v122;
  *(double *)&v122 = I_flrand(-8.0, 8.0);
  v126 = *(float *)&v122;
  _XMM0 = v123;
  __asm
  {
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm13, 30h ; '0'
  }
  Float4SinCos(v131, &v176, &v179);
  v = v176.v;
  v133 = v176.v.m128_f32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v133 - sinf_0(*(float *)&v123)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4SinCos (1)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v, v, 85).m128_f32[0] - sinf_0(v124)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4SinCos (1)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v, v, 170).m128_f32[0] - sinf_0(v125)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4SinCos (1)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v, v, 255).m128_f32[0] - sinf_0(v126)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4SinCos (1)", v174) )
      __debugbreak();
  }
  v134 = v179.v;
  v135 = v179.v.m128_f32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v135 - cosf_0(*(float *)&v123)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4SinCos (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v134, v134, 85).m128_f32[0] - cosf_0(v124)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4SinCos (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v134, v134, 170).m128_f32[0] - cosf_0(v125)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4SinCos (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v134, v134, 255).m128_f32[0] - cosf_0(v126)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4SinCos (2)", v174) )
      __debugbreak();
  }
  v136 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v136 = I_flrand(-8.0, 8.0);
  v137 = v136;
  *(double *)&v136 = I_flrand(-8.0, 8.0);
  v138 = *(float *)&v136;
  *(double *)&v136 = I_flrand(-8.0, 8.0);
  v139 = *(float *)&v136;
  *(double *)&v136 = I_flrand(-8.0, 8.0);
  _XMM2 = v137;
  __asm
  {
    vinsertps xmm2, xmm2, xmm11, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
  }
  v144 = *(float *)&v136;
  v145 = _mm128_mul_ps(_XMM2, (__m128)_xmm);
  *(double *)v145.m128_u64 = j___vdecl_acosf4();
  v146 = v145;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v145.m128_f32[0] - acosf_0(*(float *)&v137 * 0.125)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ACos", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v146, v146, 85).m128_f32[0] - acosf_0(v138 * 0.125)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ACos", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v146, v146, 170).m128_f32[0] - acosf_0(v139 * 0.125)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ACos", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v146, v146, 255).m128_f32[0] - acosf_0(v144 * 0.125)) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ACos", v174) )
      __debugbreak();
  }
  v149 = _mm128_mul_ps((__m128)_xmm, g_degreeToRadian.v);
  Float4RadianToQuat(v148, v147);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v149.m128_f32[0] - 0.33526999) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4AnglesToQuat", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v149, v149, 85).m128_f32[0] - 0.21467) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4AnglesToQuat", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v149, v149, 170).m128_f32[0] - 0.18882) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4AnglesToQuat", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v149, v149, 255).m128_f32[0] - 0.89769) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4AnglesToQuat", v174) )
      __debugbreak();
  }
  Float4RadianToQuat(v151, v150);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(0.2617994 - 0.33526999) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RadianToQuat", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_f32[0] - 0.21467) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RadianToQuat", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_f32[0] - 0.18882) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RadianToQuat", v174) )
      __debugbreak();
  }
  v154 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255);
  v155 = v154;
  v155.m128_f32[0] = v154.m128_f32[0] - 0.89769;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v154.m128_f32[0] - 0.89769) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RadianToQuat", v174) )
      __debugbreak();
  }
  Float4UnitQuatToAxis(v153, v152);
  v177 = _xmm;
  v178 = (__m128)(*(_OWORD *)&v155 & (unsigned int)_xmm);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(0.33526999 - 0.83652002) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnitQuatToAxis (1)", v174) )
      __debugbreak();
  }
  v158 = (__m128)v177;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v158, v158, 85).m128_f32[0] - 0.48293999) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnitQuatToAxis (1)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v158, v158, 170).m128_f32[0] - -0.2588) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnitQuatToAxis (1)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v158, v158, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnitQuatToAxis (1)", v174) )
      __debugbreak();
  }
  v159 = v178;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v178.m128_f32[0] - -0.19506) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnitQuatToAxis (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v159, v159, 85).m128_f32[0] - 0.70388001) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnitQuatToAxis (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v159, v159, 170).m128_f32[0] - 0.68300998) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnitQuatToAxis (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v159, v159, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnitQuatToAxis (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM2.m128_f32[0] - 0.51203001) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnitQuatToAxis (3)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM2, _XMM2, 85).m128_f32[0] - -0.52086997) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnitQuatToAxis (3)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM2, _XMM2, 170).m128_f32[0] - 0.68302) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnitQuatToAxis (3)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(_XMM2, _XMM2, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnitQuatToAxis (3)", v174) )
      __debugbreak();
  }
  v160 = _mm128_mul_ps((__m128)_xmm, g_degreeToRadian.v);
  Float4RadianToQuat(v157, v156);
  Float4UnitQuatToAxis(v162, v161);
  v177 = (__int128)v160;
  v178 = (__m128)(*(_OWORD *)&v155 & (unsigned int)_xmm);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v160.m128_f32[0] - 0.83652002) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4AnglesToAxis (1)", v174) )
      __debugbreak();
  }
  v165 = (__m128)v177;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v165, v165, 85).m128_f32[0] - 0.48293999) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4AnglesToAxis (1)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v165, v165, 170).m128_f32[0] - -0.2588) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4AnglesToAxis (1)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v165, v165, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4AnglesToAxis (1)", v174) )
      __debugbreak();
  }
  v166 = v178;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v178.m128_f32[0] - -0.19506) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4AnglesToAxis (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v166, v166, 85).m128_f32[0] - 0.70388001) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4AnglesToAxis (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v166, v166, 170).m128_f32[0] - 0.68300998) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4AnglesToAxis (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v166, v166, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4AnglesToAxis (2)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM2.m128_f32[0] - 0.51203001) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4AnglesToAxis (3)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM2, _XMM2, 85).m128_f32[0] - -0.52086997) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4AnglesToAxis (3)", v174) )
      __debugbreak();
  }
  v167 = _mm_shuffle_ps(_XMM2, _XMM2, 170);
  v168 = v167;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v167.m128_f32[0] - 0.68302) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4AnglesToAxis (3)", v174) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(_XMM2, _XMM2, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4AnglesToAxis (3)", v174) )
      __debugbreak();
  }
  Float4RadianToQuat(v164, v163);
  result = (unsigned __int8)Float4UnitQuatToAxis(v170, v169);
  v177 = _xmm;
  v168.m128_f32[0] = v167.m128_f32[0] - 0.68302;
  v178 = (__m128)(*(_OWORD *)&v168 & (unsigned int)_xmm);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(0.2617994 - 0.83652002) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RadianToAxis (1)", v174);
    if ( result )
      __debugbreak();
  }
  v172 = (__m128)v177;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v172, v172, 85).m128_f32[0] - 0.48293999) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RadianToAxis (1)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v172, v172, 170).m128_f32[0] - -0.2588) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RadianToAxis (1)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v172, v172, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RadianToAxis (1)", v174);
    if ( result )
      __debugbreak();
  }
  v173 = v178;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v178.m128_f32[0] - -0.19506) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RadianToAxis (2)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v173, v173, 85).m128_f32[0] - 0.70388001) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RadianToAxis (2)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v173, v173, 170).m128_f32[0] - 0.68300998) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RadianToAxis (2)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v173, v173, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RadianToAxis (2)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM2.m128_f32[0] - 0.51203001) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RadianToAxis (3)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM2, _XMM2, 85).m128_f32[0] - -0.52086997) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RadianToAxis (3)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM2, _XMM2, 170).m128_f32[0] - 0.68302) & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RadianToAxis (3)", v174);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(_XMM2, _XMM2, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v174) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RadianToAxis (3)", v174);
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
Float4PackTest
==============
*/
unsigned __int8 Float4PackTest()
{
  double v0; 
  float v1; 
  double v2; 
  float v3; 
  unsigned int v8; 
  unsigned int v9; 
  float v10; 
  unsigned int v11; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  float v16; 
  float v22; 
  unsigned int v23; 
  float v24; 
  float v28; 
  unsigned int v29; 
  unsigned int v30; 
  __int128 v31; 
  __int128 v32; 
  float v33; 
  float v40; 
  unsigned int v41; 
  float v42; 
  float v45; 
  unsigned int v46; 
  float v47; 
  float v51; 
  unsigned int v52; 
  unsigned int v53; 
  float v55; 
  unsigned int v56; 
  double v57; 
  float v58; 
  double v59; 
  float v60; 
  double v61; 
  float v62; 
  double v63; 
  float v64; 
  const float4 *v86; 
  float4 *v87; 
  const float4 *v88; 
  const float4 *v89; 
  __m128 v100; 
  __m128 v105; 
  __m128 v111; 
  __m128 v166; 
  __m128 v167; 
  __m128 v168; 
  __m128 v169; 
  __m128 v182; 
  __m128 v194; 
  __m128 v206; 
  __m128 v218; 
  unsigned __int8 result; 
  __m128 v220; 
  __m128 v221; 
  __m128 v222; 
  __m128 v223; 
  __m128 v236; 
  __m128 v248; 
  __m128 v260; 
  __m128 v272; 
  __int64 v280; 
  float v281; 
  __int128 v282; 
  __m128 v283; 
  float v284; 
  float v285; 
  float v286; 
  float v287; 
  float v288; 
  float v289; 
  float v290; 
  float v291; 
  __int64 v292; 
  __m128 v293; 

  v0 = I_flrand(-8.0, 8.0);
  v1 = *(float *)&v0;
  v2 = I_flrand(-8.0, 8.0);
  v3 = *(float *)&v2;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 0
    vinsertps xmm0, xmm0, xmm9, 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  v8 = _XMM0;
  v9 = 0;
  if ( (_WORD)_XMM0 )
    LODWORD(v10) = ((_XMM0 & 0x8000) << 16) | ((unsigned __int128)((((_XMM0 & 0x3FFF) << 14) - (~((unsigned __int16)_XMM0 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v10 = 0.0;
  v11 = HIWORD(v8);
  if ( v11 )
    LODWORD(v12) = ((v11 & 0xFFFF8000) << 16) | (((((v11 & 0x3FFF) << 14) - (~(v11 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v12 = 0.0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v1 - v10) & _xmm) >= 0.010000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (1)", g_unitSavedSeed_0) )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 - v12) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (2)", v280) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v13 = I_flrand(-8.0, 8.0);
  v14 = *(float *)&v13;
  v15 = I_flrand(-8.0, 8.0);
  v16 = *(float *)&v15;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, xmm8, 0
    vinsertps xmm0, xmm0, xmm9, 10h
    vcvtps2ph xmm0, xmm0, 0
    vpextrd rdx, xmm0, 0
  }
  if ( (_WORD)_RDX )
    LODWORD(v22) = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v22 = 0.0;
  v23 = WORD1(_RDX);
  if ( v23 )
    LODWORD(v24) = ((v23 & 0xFFFF8000) << 16) | (((((v23 & 0x3FFF) << 14) - (~(v23 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v24 = 0.0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - v22) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (5)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - v24) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (6)", v280) )
      __debugbreak();
  }
  _XMM0 = _xmm;
  __asm
  {
    vcvtps2ph xmm0, xmm0, 0
    vpextrd rdx, xmm0, 0
  }
  if ( (_WORD)_RDX )
    LODWORD(v28) = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v28 = 0.0;
  v29 = WORD1(_RDX);
  if ( v29 )
    v30 = ((v29 & 0xFFFF8000) << 16) | (((((v29 & 0x3FFF) << 14) - (~(v29 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v30 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(1.0 - v28) & _xmm) >= 0.001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (7)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(v30 & _xmm) >= 0.001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (8)", v280) )
      __debugbreak();
  }
  v31 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v31 = I_flrand(-8.0, 8.0);
  v32 = v31;
  *(double *)&v31 = I_flrand(-8.0, 8.0);
  v33 = *(float *)&v31;
  *(double *)&v31 = I_flrand(-8.0, 8.0);
  v281 = *(float *)&v31;
  *(double *)&v31 = I_flrand(-8.0, 8.0);
  v291 = *(float *)&v31;
  _XMM0 = v32;
  __asm
  {
    vinsertps xmm0, xmm0, xmm15, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcvtps2ph xmm0, xmm0, 0
    vpextrd rdx, xmm0, 0
  }
  v282 = _XMM0;
  if ( (_WORD)_RDX )
    LODWORD(v40) = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v40 = 0.0;
  v41 = WORD1(_RDX);
  if ( v41 )
    LODWORD(v42) = ((v41 & 0xFFFF8000) << 16) | (((((v41 & 0x3FFF) << 14) - (~(v41 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v42 = 0.0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v32 - v40) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v33 - v42) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (2)", v280) )
      __debugbreak();
  }
  _XMM0 = v282;
  __asm { vpextrd rdx, xmm0, 1 }
  if ( (_WORD)_RDX )
    LODWORD(v45) = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v45 = 0.0;
  v46 = WORD1(_RDX);
  if ( v46 )
    LODWORD(v47) = ((v46 & 0xFFFF8000) << 16) | (((((v46 & 0x3FFF) << 14) - (~(v46 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v47 = 0.0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v281 - v45) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (3)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v291 - v47) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (4)", v280) )
      __debugbreak();
  }
  _XMM0 = _xmm;
  __asm
  {
    vcvtps2ph xmm10, xmm0, 0
    vpextrd rdx, xmm10, 0
  }
  if ( (_WORD)_RDX )
    LODWORD(v51) = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v51 = 0.0;
  v52 = WORD1(_RDX);
  if ( v52 )
    v53 = ((v52 & 0xFFFF8000) << 16) | (((((v52 & 0x3FFF) << 14) - (~(v52 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v53 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(1.0 - v51) & _xmm) >= 0.001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (5)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(v53 & _xmm) >= 0.001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (6)", v280) )
      __debugbreak();
  }
  __asm { vpextrd rdx, xmm10, 1 }
  if ( (_WORD)_RDX )
    LODWORD(v55) = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v55 = 0.0;
  v56 = WORD1(_RDX);
  if ( v56 )
    v9 = ((v56 & 0xFFFF8000) << 16) | (((((v56 & 0x3FFF) << 14) - (~(v56 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(-1.0 - v55) & _xmm) >= 0.001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (7)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(v9 & _xmm) >= 0.001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (8)", v280) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v57 = I_flrand(-8.0, 8.0);
  v58 = *(float *)&v57;
  v59 = I_flrand(-8.0, 8.0);
  v60 = *(float *)&v59;
  v61 = I_flrand(-8.0, 8.0);
  v62 = *(float *)&v61;
  v63 = I_flrand(-8.0, 8.0);
  v64 = *(float *)&v63;
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, xmm6, 0
    vinsertps xmm0, xmm0, xmm8, 10h
    vcvtps2ph xmm0, xmm0, 0
  }
  LOWORD(v292) = _XMM0;
  WORD1(v292) = WORD1(_XMM0);
  _XMM1 = 0i64;
  __asm
  {
    vinsertps xmm1, xmm1, xmm9, 0
    vinsertps xmm1, xmm1, xmm10, 10h
    vcvtps2ph xmm0, xmm1, 0
  }
  WORD2(v292) = _XMM0;
  HIWORD(v292) = WORD1(_XMM0);
  __asm { vcvtph2ps xmm7, qword ptr [rsp+1B8h+var_E8] }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM7.m128_f32[0] - v58) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4LoadHalf4", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM7, _XMM7, 85).m128_f32[0] - v60) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4LoadHalf4", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM7, _XMM7, 170).m128_f32[0] - v62) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4LoadHalf4", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM7, _XMM7, 255).m128_f32[0] - v64) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4LoadHalf4", v280) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM10 = 0i64;
  __asm
  {
    vinsertps xmm10, xmm10, xmm7, 0
    vinsertps xmm10, xmm10, xmm6, 10h
    vinsertps xmm10, xmm10, xmm0, 20h ; ' '
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM9 = 0i64;
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 0
    vinsertps xmm9, xmm9, xmm6, 10h
    vinsertps xmm9, xmm9, xmm0, 20h ; ' '
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM8 = 0i64;
  __asm
  {
    vinsertps xmm8, xmm8, xmm7, 0
    vinsertps xmm8, xmm8, xmm6, 10h
    vinsertps xmm8, xmm8, xmm0, 20h ; ' '
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM3 = 0i64;
  __asm
  {
    vinsertps xmm3, xmm3, xmm7, 0
    vinsertps xmm3, xmm3, xmm6, 10h
    vinsertps xmm3, xmm3, xmm0, 20h ; ' '
  }
  _XMM0 = _mm128_mul_ps(_XMM10, _XMM10);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  _XMM0 = _mm128_mul_ps(_XMM9, _XMM9);
  v100 = _mm128_mul_ps(_XMM1, _XMM10);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  v105 = _mm128_mul_ps(_XMM1, _XMM9);
  _XMM0 = _mm128_mul_ps(_XMM8, _XMM8);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  v111 = _mm128_mul_ps(_XMM1, _XMM8);
  _XMM0 = _mm128_mul_ps(_XMM3, _XMM3);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  _XMM5 = (__m128)(*(_OWORD *)&v105 & *(_OWORD *)&g_keepXYZ.v);
  _XMM11 = (__m128)(*(_OWORD *)&v100 & *(_OWORD *)&g_keepXYZ.v);
  v293 = (__m128)(*(_OWORD *)&v111 & *(_OWORD *)&g_keepXYZ.v);
  v283 = (__m128)(*(_OWORD *)&_mm128_mul_ps(_XMM1, _XMM3) & *(_OWORD *)&g_keepXYZ.v);
  LODWORD(v285) = _mm_shuffle_ps(_XMM5, _XMM5, 85).m128_u32[0];
  LODWORD(v286) = _mm_shuffle_ps(_XMM5, _XMM5, 170).m128_u32[0];
  LODWORD(v287) = _mm_shuffle_ps(v293, v293, 85).m128_u32[0];
  LODWORD(v288) = _mm_shuffle_ps(v293, v293, 170).m128_u32[0];
  LODWORD(v289) = _mm_shuffle_ps(v283, v283, 85).m128_u32[0];
  LODWORD(v290) = _mm_shuffle_ps(v283, v283, 170).m128_u32[0];
  __asm
  {
    vmaxps  xmm0, xmm11, xmm8
    vminps  xmm0, xmm0, xmm14
  }
  _XMM1 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm0, xmm1
    vpand   xmm2, xmm0, xmm15
    vpshufd xmm1, xmm2, 0EEh ; 'î'
    vpor    xmm3, xmm1, xmm2
    vpshufd xmm0, xmm3, 55h ; 'U'
    vpor    xmm1, xmm0, xmm3
    vpor    xmm9, xmm1, xmm10
    vmaxps  xmm0, xmm5, xmm8
    vminps  xmm1, xmm0, xmm14
  }
  _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM1, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm0, xmm3
    vpand   xmm4, xmm0, xmm15
    vpshufd xmm1, xmm4, 0EEh ; 'î'
    vpor    xmm2, xmm1, xmm4
    vpshufd xmm0, xmm2, 0
    vpor    xmm1, xmm0, xmm2
  }
  _XMM0 = v293;
  __asm
  {
    vmaxps  xmm0, xmm0, xmm8
    vpor    xmm6, xmm1, xmm10
    vminps  xmm1, xmm0, xmm14
  }
  _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM1, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm0, xmm3
    vpand   xmm4, xmm0, xmm15
    vpshufd xmm1, xmm4, 44h ; 'D'
    vpor    xmm2, xmm1, xmm4
    vpshufd xmm0, xmm2, 0FFh
    vpor    xmm1, xmm0, xmm2
  }
  _XMM0 = v283;
  __asm { vmaxps  xmm0, xmm0, xmm8 }
  v284 = _XMM5.m128_f32[0];
  __asm
  {
    vpor    xmm5, xmm1, xmm10
    vminps  xmm1, xmm0, xmm14
  }
  _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM1, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm0, xmm3
    vpand   xmm4, xmm0, xmm15
    vpshufd xmm1, xmm4, 44h ; 'D'
    vpor    xmm2, xmm1, xmm4
    vpshufd xmm0, xmm2, 0AAh ; 'ª'
    vpor    xmm1, xmm0, xmm2
    vpor    xmm3, xmm1, xmm10
  }
  _XMM7 = 0i64;
  __asm
  {
    vblendps xmm0, xmm7, xmm9, 1
    vblendps xmm1, xmm0, xmm6, 2
    vblendps xmm2, xmm1, xmm5, 4
    vblendps xmm8, xmm2, xmm3, 8
  }
  v166 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM8, _XMM8, 0) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v166.m128_f32[0] - _XMM11.m128_f32[0]) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32X (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v166, v166, 85).m128_f32[0] - _mm_shuffle_ps(_XMM11, _XMM11, 85).m128_f32[0]) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32X (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v166, v166, 170).m128_f32[0] - _mm_shuffle_ps(_XMM11, _XMM11, 170).m128_f32[0]) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32X (1)", v280) )
      __debugbreak();
  }
  v167 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM8, _XMM8, 85) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v167.m128_f32[0] - v284) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Y (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v167, v167, 85).m128_f32[0] - v285) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Y (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v167, v167, 170).m128_f32[0] - v286) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Y (1)", v280) )
      __debugbreak();
  }
  v168 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM8, _XMM8, 170) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v168.m128_f32[0] - v293.m128_f32[0]) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Z (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v168, v168, 85).m128_f32[0] - v287) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Z (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v168, v168, 170).m128_f32[0] - v288) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Z (1)", v280) )
      __debugbreak();
  }
  v169 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM8, _XMM8, 255) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v169.m128_f32[0] - v283.m128_f32[0]) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32W (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v169, v169, 85).m128_f32[0] - v289) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32W (1)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v169, v169, 170).m128_f32[0] - v290) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32W (1)", v280) )
      __debugbreak();
  }
  _XMM9 = _xmm;
  __asm
  {
    vmaxps  xmm0, xmm9, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 1
  }
  v182 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM0, _XMM0, 0) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v182.m128_f32[0] - 1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32X (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v182, v182, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32X (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v182, v182, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32X (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v182, v182, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32X (2)", v280) )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm9, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 2
  }
  v194 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM0, _XMM0, 85) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v194.m128_f32[0] - 1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Y (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v194, v194, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Y (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v194, v194, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Y (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v194, v194, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32Y (2)", v280) )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm9, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0FFh
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 4
  }
  v206 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM0, _XMM0, 170) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v206.m128_f32[0] - 1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Z (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v206, v206, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Z (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v206, v206, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Z (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v206, v206, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32Z (2)", v280) )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm9, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0AAh ; 'ª'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 8
  }
  v218 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM0, _XMM0, 255) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v218.m128_f32[0] - 1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32W (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v218, v218, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32W (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v218, v218, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32W (2)", v280) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v218, v218, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32W (2)", v280) )
      __debugbreak();
  }
  result = (unsigned __int8)Float4PackNormPackedNrmTanBin(v87, v86, v88, v89);
  v220 = _mm_shuffle_ps(_mm_shuffle_ps((__m128)0i64, (__m128)_xmm, 0), (__m128)_xmm, 152);
  v221 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(v220, v220, 85) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v221.m128_f32[0] - 1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v221, v221, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v221, v221, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v221, v221, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  v222 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(v220, v220, 170) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(v222.m128_i32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v222, v222, 85).m128_f32[0] - 1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v222, v222, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v222, v222, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  v223 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(v220, v220, 255) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(v223.m128_i32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v223, v223, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v223, v223, 170).m128_f32[0] - 1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v223, v223, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPackedNrmTanBin (2)", v280);
    if ( result )
      __debugbreak();
  }
  _XMM8 = _xmm;
  __asm
  {
    vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 1
  }
  v236 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM0, _XMM0, 0) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v236.m128_f32[0] - -1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32X (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v236, v236, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32X (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v236, v236, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32X (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v236, v236, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32X (2)", v280);
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 2
  }
  v248 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM0, _XMM0, 85) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v248.m128_f32[0] - -1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Y (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v248, v248, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Y (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v248, v248, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Y (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v248, v248, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32Y (2)", v280);
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0FFh
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 4
  }
  v260 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM0, _XMM0, 170) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v260.m128_f32[0] - -1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Z (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v260, v260, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Z (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v260, v260, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Z (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v260, v260, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32Z (2)", v280);
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0AAh ; 'ª'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 8
  }
  v272 = _mm128_mul_ps(_mm128_add_ps(_mm_cvtepi32_ps((__m128i)(*(_OWORD *)&_mm_shuffle_ps(_XMM0, _XMM0, 255) & *(_OWORD *)&g_packMask1010102.v)), g_packAdd1010102.v), g_packMul1010102.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v272.m128_f32[0] - -1.0) & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32W (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v272, v272, 85).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32W (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v272, v272, 170).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32W (2)", v280);
    if ( result )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v272, v272, 255).m128_u32[0] & _xmm) >= 0.010000001 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32W (2)", v280);
    if ( result )
      __debugbreak();
  }
  _XMM0 = _xmm;
  __asm
  {
    vmaxps  xmm1, xmm0, xmm7
    vminps  xmm1, xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM0 = _mm128_add_ps(_mm128_mul_ps(_XMM1, (__m128)_xmm), g_oneHalf.v);
  __asm
  {
    vroundps xmm1, xmm0, 1
    vcvtps2dq xmm2, xmm1
    vpshufb xmm3, xmm2, xmmword ptr cs:?g_packMaskUInt@@3Ufloat4@@B.v; float4 const g_packMaskUInt
  }
  if ( (_DWORD)_XMM3 != 4227327 )
  {
    LODWORD(v280) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4PackUInt", v280);
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
Float4QuatTest
==============
*/
void Float4QuatTest(const float4 *a1)
{
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v12; 
  float v18; 
  float v19; 
  const float4 *v20; 
  const float4 *v21; 
  const float4 *v22; 
  __m128 v; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __int64 v29; 
  unsigned int v30; 
  float4 v31; 
  float4 v32; 

  _XMM6 = (__m128)_xmm;
  _mm_shuffle_ps(_XMM6, _XMM6, 85);
  _mm_shuffle_ps(_XMM6, _XMM6, 170);
  _mm_shuffle_ps(_XMM6, _XMM6, 255);
  __asm
  {
    vinsertps xmm6, xmm6, xmm0, 10h
    vinsertps xmm6, xmm6, xmm1, 20h ; ' '
    vinsertps xmm6, xmm6, xmm2, 30h ; '0'
  }
  v32.v = _XMM6;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM6.m128_f32[0] - 0.33526999) & _xmm) >= 0.020000001 )
  {
    v30 = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnpackQuat", v30) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] - 0.21467) & _xmm) >= 0.020000001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnpackQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] - 0.18882) & _xmm) >= 0.020000001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnpackQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] - 0.89769) & _xmm) >= 0.020000001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnpackQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(0.33528364 - 0.33526999) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnpackPrecisionQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_f32[0] - 0.21467) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnpackPrecisionQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_f32[0] - 0.18882) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnpackPrecisionQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_f32[0] - 0.89769) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnpackPrecisionQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_xmm & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnpackSimpleQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnpackSimpleQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_f32[0] - -0.24998) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnpackSimpleQuat", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_f32[0] - 0.96825999) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnpackSimpleQuat", v29) )
      __debugbreak();
  }
  v5 = (__m128)_xmm;
  v6 = _mm_shuffle_ps(v5, v5, 255);
  v7 = _mm_shuffle_ps(v5, v5, 201);
  v8 = _mm_shuffle_ps(v5, v5, 210);
  v9 = _mm128_mul_ps(v8, v7);
  v10 = _mm128_mul_ps(v8, v7);
  _XMM2 = _xmm;
  v12 = _mm128_sub_ps(v9, v10);
  __asm
  {
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
  }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v6, v6), _XMM2);
  _mm128_add_ps(v12, _mm128_add_ps(_mm128_mul_ps(v6, (__m128)_xmm), _mm128_mul_ps(v6, (__m128)_xmm)));
  __asm { vblendps xmm6, xmm2, xmm0, 7 }
  v18 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v19 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM6.m128_f32[0] - (float)((float)((float)((float)(v6.m128_f32[0] * 0.33526999) * 2.0) + (float)(v19 * v18)) - (float)(v19 * v18))) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4QuatMultiply", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 85).m128_f32[0] - (float)((float)(v18 * 2.0) * v6.m128_f32[0])) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4QuatMultiply", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 170).m128_f32[0] - (float)((float)((float)((float)(v18 * 0.33526999) + (float)(v6.m128_f32[0] * v19)) - (float)(v18 * 0.33526999)) + (float)(v6.m128_f32[0] * v19))) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4QuatMultiply", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0] - (float)((float)((float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) - (float)(0.33526999 * 0.33526999)) - (float)(v18 * v18)) - (float)(v19 * v19))) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4QuatMultiply", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(-0.33526999 - -0.33526999) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4QuatInverse", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_f32[0] - -0.21467) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4QuatInverse", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_f32[0] - -0.18882) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4QuatInverse", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_f32[0] - 0.89769) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4QuatInverse", v29) )
      __debugbreak();
  }
  _mm128_mul_ps((__m128)0i64, g_oneHalf.v);
  Float4SinCos(a1, &v31, &v32);
  Float3RotateQuatAroundOrigin(v21, v20, v22, &v32);
  v = v32.v;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32.v.m128_f32[0] - 4.9484) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3RotateQuatAroundOrigin", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v, v, 85).m128_f32[0] - 3.5188) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3RotateQuatAroundOrigin", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v, v, 170).m128_f32[0] - 3.6386001) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3RotateQuatAroundOrigin", v29) )
      __debugbreak();
  }
  v24 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 201);
  v25 = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 210);
  v26 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 210), v24), _mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 201), v25));
  v27 = _mm128_add_ps(v26, v26);
  v28 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v27, v27, 210), v24), _mm128_mul_ps(_mm_shuffle_ps(v27, v27, 201), v25)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255), v27), (__m128)_xmm));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v28.m128_f32[0] - 2.9484) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4QuatTransform", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v28, v28, 85).m128_f32[0] - 2.5188) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4QuatTransform", v29) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v28, v28, 170).m128_f32[0] - 2.6386001) & _xmm) >= 0.001 )
  {
    LODWORD(v29) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4QuatTransform", v29) )
      __debugbreak();
  }
}

/*
==============
Float4UnitTest
==============
*/
void Float4UnitTest(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  const float4 *v8; 
  unsigned __int64 v9; 

  v4 = Sys_Microseconds();
  Float4LoadStoreTest();
  Double4LoadStoreTest();
  Float4MathTest();
  Double4MathTest(v6, v5, v7, a4);
  Float4PackTest();
  Float4XFormTest();
  Float4LogicalTest();
  Float4MiscTest();
  Float4QuatTest(v8);
  Int4MiscTest();
  v9 = Sys_Microseconds();
  Com_Printf(16, "Float4 unit tests calculated in %zd ticks.\n", v9 - v4);
}

/*
==============
Float4XFormTest
==============
*/
unsigned __int8 Float4XFormTest()
{
  __int128 v0; 
  __int128 v1; 
  __int128 v6; 
  __int128 v7; 
  __int128 v12; 
  __int128 v13; 
  __int128 v18; 
  __int128 v19; 
  __m128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v35; 
  __int128 v36; 
  __int128 v41; 
  __int128 v42; 
  __m128 v51; 
  __m128 v61; 
  __m128 v62; 
  __int128 v79; 
  __int128 v80; 
  __int128 v85; 
  __int128 v86; 
  __int128 v91; 
  __int128 v92; 
  __int128 v97; 
  __int128 v98; 
  __int128 v103; 
  __int128 v104; 
  double v105; 
  __m128 v110; 
  double v111; 
  double v112; 
  double v113; 
  double v118; 
  float v119; 
  double v120; 
  double v121; 
  double v126; 
  float v127; 
  double v128; 
  double v129; 
  double v134; 
  float v135; 
  double v136; 
  double v137; 
  __m128 v142; 
  __int128 v143; 
  __int128 v144; 
  __int128 v149; 
  __int128 v150; 
  float v151; 
  float v152; 
  float v153; 
  __int128 v154; 
  __int128 v155; 
  __int128 v160; 
  __int128 v165; 
  __int128 v166; 
  __m128 v171; 
  __m128 v172; 
  __m128 v177; 
  __m128 v178; 
  __m128 v179; 
  double v180; 
  double v181; 
  double v182; 
  double v187; 
  float v188; 
  double v189; 
  float v190; 
  double v191; 
  float v192; 
  double v193; 
  double v194; 
  double v195; 
  double v200; 
  double v201; 
  double v202; 
  __m128 v215; 
  __m128 v216; 
  __m128 v217; 
  __int128 v218; 
  __int128 v219; 
  __int128 v224; 
  __int128 v225; 
  __int128 v230; 
  __int128 v231; 
  __m128 v232; 
  __m128 v237; 
  __m128 v238; 
  __m128 v239; 
  __m128 v240; 
  __int128 v241; 
  __int128 v242; 
  __int128 v247; 
  __int128 v248; 
  __int128 v253; 
  __int128 v254; 
  __m128 v255; 
  __m128 v260; 
  __m128 v261; 
  __m128 v262; 
  __m128 v263; 
  __int128 v264; 
  __int128 v265; 
  __int128 v270; 
  __int128 v271; 
  __int128 v276; 
  __int128 v281; 
  __int128 v282; 
  __m128 v283; 
  __m128 v288; 
  __m128 v289; 
  __m128 v290; 
  __m128 v291; 
  __int128 v292; 
  __int128 v293; 
  __int128 v294; 
  __int128 v295; 
  __int128 v300; 
  __int128 v305; 
  __int128 v306; 
  float4 v315; 
  __m128 v316; 
  __m128 v317; 
  __m128 v318; 
  __m128 v319; 
  __m128 v320; 
  __m128 v321; 
  __m128 v322; 
  __int128 v323; 
  __int128 v324; 
  __int128 v329; 
  __int128 v330; 
  float v331; 
  float v332; 
  __int128 v337; 
  __m128 v342; 
  float4 v343; 
  __int128 v348; 
  __int128 v353; 
  __int128 v358; 
  float4 v363; 
  const vector4 *v368; 
  const vector4 *v369; 
  float4 v370; 
  float4 v371; 
  float4 v372; 
  float4 v373; 
  __m128 v374; 
  __m128 v375; 
  float4 v376; 
  __m128 v377; 
  float4 v378; 
  __m128 v379; 
  float4 v380; 
  __m128 v381; 
  __m128 v382; 
  unsigned __int8 v383; 
  float4 v384; 
  float4 v385; 
  float4 v386; 
  float4 v387; 
  __int64 v388; 
  float v389; 
  float v390; 
  float v391; 
  float v392; 
  float v393; 
  float v394; 
  float v395; 
  float v396; 
  float v397; 
  float v398; 
  float v399; 
  float v400; 
  float v401; 
  float v402; 
  float v403; 
  float v404; 
  float v405; 
  float v406; 
  float v407; 
  float v408; 
  float v409; 
  float v410; 
  float v411; 
  float v412; 
  float v413; 
  float v414; 
  float v415; 
  float v416; 
  float v417; 
  float v418; 
  float v419; 
  float v420; 
  float v421; 
  float v422; 
  float v423; 
  float v424; 
  float v425; 
  float v426; 
  float v427; 
  float v428; 
  float v429; 
  float v430; 
  float v431; 
  float v432; 
  float v433; 
  float v434; 
  float v435; 
  float v436; 
  float v437; 
  float v438; 
  float v439; 
  float v440; 
  float v441; 
  float v442; 
  float v443; 
  float v444; 
  float v445; 
  float v446; 
  float v447; 
  float v448; 
  float v449; 
  float v450; 
  float v451; 
  float v452; 
  float v453; 
  float v454; 
  float v455; 
  float v456; 
  float v457; 
  float v458; 
  float v459; 
  float v460; 
  float v461; 
  float v462; 
  float v463; 
  float v464; 
  float v465; 
  float v466; 
  float v467; 
  float v468; 
  float v469; 
  float v470; 
  float v471; 
  float v472; 
  float v473; 
  float v474; 
  float v475; 
  float v476; 
  float v477; 
  float v478; 
  float v479; 
  float v480; 
  float v481; 
  float v482; 
  float v483; 
  float v484; 
  float v485; 
  float v486; 
  float v487; 
  float v488; 
  float v489; 
  float v490; 
  float v491; 
  float v492; 
  float v493; 
  float v494; 
  float v495; 
  float v496; 
  float v497; 
  float v498; 
  float v499; 
  float v500; 
  float v501; 
  float v502; 
  float v503; 
  float v504; 
  float v505; 
  float v506; 
  float v507; 
  float v508; 
  float v509; 
  float v510; 
  float v511; 
  float v512; 
  float v513; 
  float v514; 
  float v515; 
  float v516; 
  float v517; 
  float v518; 
  float v519; 
  float v520; 
  float v521; 
  float v522; 
  float v523; 
  float v524; 
  float v525; 
  float v526; 
  float v527; 
  float v528; 
  float v529; 
  float v530; 
  float v531; 
  vector4 M1; 
  vector4 result; 

  v0 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v1 = v0;
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v452 = *(float *)&v0;
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  v419 = *(float *)&v0;
  *(double *)&v0 = I_flrand(-8.0, 8.0);
  _XMM12 = v1;
  __asm
  {
    vinsertps xmm12, xmm12, xmm6, 10h
    vinsertps xmm12, xmm12, xmm7, 20h ; ' '
    vinsertps xmm12, xmm12, xmm0, 30h ; '0'
  }
  v508 = *(float *)&v0;
  v6 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v6 = I_flrand(-8.0, 8.0);
  v7 = v6;
  *(double *)&v6 = I_flrand(-8.0, 8.0);
  v463 = *(float *)&v6;
  *(double *)&v6 = I_flrand(-8.0, 8.0);
  v430 = *(float *)&v6;
  *(double *)&v6 = I_flrand(-8.0, 8.0);
  _XMM10 = v7;
  __asm
  {
    vinsertps xmm10, xmm10, xmm6, 10h
    vinsertps xmm10, xmm10, xmm7, 20h ; ' '
    vinsertps xmm10, xmm10, xmm0, 30h ; '0'
  }
  v488 = *(float *)&v6;
  v12 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v12 = I_flrand(-8.0, 8.0);
  v13 = v12;
  *(double *)&v12 = I_flrand(-8.0, 8.0);
  v441 = *(float *)&v12;
  *(double *)&v12 = I_flrand(-8.0, 8.0);
  v408 = *(float *)&v12;
  *(double *)&v12 = I_flrand(-8.0, 8.0);
  _XMM7 = v13;
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm8, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v503 = *(float *)&v12;
  g_unitSavedSeed_0 = *GetRandSeed();
  v18 = LODWORD(FLOAT_N8_0);
  *(double *)&v18 = I_flrand(-8.0, 8.0);
  v19 = v18;
  *(double *)&v18 = I_flrand(-8.0, 8.0);
  v481 = *(float *)&v18;
  *(double *)&v18 = I_flrand(-8.0, 8.0);
  v497 = *(float *)&v18;
  *(double *)&v18 = I_flrand(-8.0, 8.0);
  _XMM6 = v19;
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+208h+var_1A4], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_19C], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v513 = *(float *)&v18;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v18 = I_flrand(-8.0, 8.0);
  v400 = *(float *)&v18;
  *(double *)&v18 = I_flrand(-8.0, 8.0);
  v389 = *(float *)&v18;
  *(double *)&v18 = I_flrand(-8.0, 8.0);
  v474 = *(float *)&v18;
  I_flrand(-8.0, 8.0);
  _XMM2 = LODWORD(v400);
  __asm
  {
    vinsertps xmm2, xmm2, [rsp+208h+var_1C8], 10h
    vinsertps xmm2, xmm2, [rsp+208h+var_1A8], 20h
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
  }
  v28 = _mm128_add_ps(_mm128_mul_ps(_XMM12, _mm_shuffle_ps(_XMM2, _XMM2, 0)), _mm128_add_ps(_mm128_mul_ps(_XMM10, _mm_shuffle_ps(_XMM2, _XMM2, 85)), _mm128_add_ps(_mm128_mul_ps(_XMM7, _mm_shuffle_ps(_XMM2, _XMM2, 170)), _XMM6)));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v28.m128_f32[0] - (float)((float)((float)((float)(v389 * *(float *)&v7) + (float)(v400 * *(float *)&v1)) + (float)(v474 * *(float *)&v13)) + *(float *)&v19)) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Transform", g_unitSavedSeed_0) )
    __debugbreak();
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v28, v28, 85).m128_f32[0] - (float)((float)((float)((float)(v389 * v463) + (float)(v400 * v452)) + (float)(v474 * v441)) + v481)) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Transform", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v28, v28, 170).m128_f32[0] - (float)((float)((float)((float)(v389 * v430) + (float)(v400 * v419)) + (float)(v474 * v408)) + v497)) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Transform", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v28, v28, 255).m128_f32[0] - (float)((float)((float)((float)(v389 * v488) + (float)(v400 * v508)) + (float)(v474 * v503)) + v513)) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3Transform", v388) )
      __debugbreak();
  }
  v29 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v29 = I_flrand(-8.0, 8.0);
  v30 = v29;
  *(double *)&v29 = I_flrand(-8.0, 8.0);
  v453 = *(float *)&v29;
  *(double *)&v29 = I_flrand(-8.0, 8.0);
  v431 = *(float *)&v29;
  *(double *)&v29 = I_flrand(-8.0, 8.0);
  _XMM10 = v30;
  __asm
  {
    vinsertps xmm10, xmm10, xmm6, 10h
    vinsertps xmm10, xmm10, xmm7, 20h ; ' '
    vinsertps xmm10, xmm10, xmm0, 30h ; '0'
  }
  v409 = *(float *)&v29;
  v35 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v35 = I_flrand(-8.0, 8.0);
  v36 = v35;
  *(double *)&v35 = I_flrand(-8.0, 8.0);
  v464 = *(float *)&v35;
  *(double *)&v35 = I_flrand(-8.0, 8.0);
  v442 = *(float *)&v35;
  *(double *)&v35 = I_flrand(-8.0, 8.0);
  _XMM8 = v36;
  __asm
  {
    vinsertps xmm8, xmm8, xmm6, 10h
    vinsertps xmm8, xmm8, xmm7, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  v420 = *(float *)&v35;
  v41 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v41 = I_flrand(-8.0, 8.0);
  v42 = v41;
  *(double *)&v41 = I_flrand(-8.0, 8.0);
  v482 = *(float *)&v41;
  *(double *)&v41 = I_flrand(-8.0, 8.0);
  v498 = *(float *)&v41;
  *(double *)&v41 = I_flrand(-8.0, 8.0);
  _XMM6 = v42;
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+208h+var_1A4], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_19C], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v489 = *(float *)&v41;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v41 = I_flrand(-8.0, 8.0);
  v401 = *(float *)&v41;
  *(double *)&v41 = I_flrand(-8.0, 8.0);
  v390 = *(float *)&v41;
  *(double *)&v41 = I_flrand(-8.0, 8.0);
  v475 = *(float *)&v41;
  I_flrand(-8.0, 8.0);
  _XMM1 = LODWORD(v401);
  __asm
  {
    vinsertps xmm1, xmm1, [rsp+208h+var_1C8], 10h
    vinsertps xmm1, xmm1, [rsp+208h+var_1A8], 20h
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v51 = _mm128_add_ps(_mm128_mul_ps(_XMM10, _mm_shuffle_ps(_XMM1, _XMM1, 0)), _mm128_add_ps(_mm128_mul_ps(_XMM8, _mm_shuffle_ps(_XMM1, _XMM1, 85)), _mm128_mul_ps(_XMM6, _mm_shuffle_ps(_XMM1, _XMM1, 170))));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v51.m128_f32[0] - (float)((float)((float)(v390 * *(float *)&v36) + (float)(v401 * *(float *)&v30)) + (float)(v475 * *(float *)&v42))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3TransformNormal", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v51, v51, 85).m128_f32[0] - (float)((float)((float)(v390 * v464) + (float)(v401 * v453)) + (float)(v475 * v482))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3TransformNormal", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v51, v51, 170).m128_f32[0] - (float)((float)((float)(v390 * v442) + (float)(v401 * v431)) + (float)(v475 * v498))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3TransformNormal", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v51, v51, 255).m128_f32[0] - (float)((float)((float)(v390 * v420) + (float)(v401 * v409)) + (float)(v475 * v489))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3TransformNormal", v388) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM3 = 0i64;
  __asm
  {
    vinsertps xmm3, xmm3, xmm7, 0
    vinsertps xmm3, xmm3, xmm6, 10h
    vinsertps xmm3, xmm3, xmm0, 20h ; ' '
  }
  _XMM0 = _mm128_mul_ps(_XMM3, _XMM3);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  v61 = _mm128_mul_ps(_XMM1, _XMM3);
  v62 = _mm128_sub_ps((__m128)0i64, v61);
  _XMM5 = _mm_shuffle_ps(v61, v61, 89);
  __asm { vcmpltps xmm1, xmm5, xmm0 }
  _XMM6 = _mm_shuffle_ps(v61, v61, 170);
  __asm
  {
    vcmpltps xmm0, xmm6, xmm0
    vpcmpeqd xmm4, xmm0, xmm1
  }
  _mm_shuffle_ps(_mm_shuffle_ps(_mm128_add_ps(_XMM6, _XMM5), v62, 0), v62, 8);
  _XMM2 = _mm_shuffle_ps(_mm_shuffle_ps(_mm128_sub_ps(_XMM5, _XMM6), v61, 0), v61, 8);
  __asm { vblendvps xmm5, xmm2, xmm3, xmm0 }
  _XMM1 = _mm128_mul_ps(_XMM5, _XMM5);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
  }
  _XMM3 = _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM5), v61);
  __asm
  {
    vinsertps xmm0, xmm3, xmm3, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm6, xmm1, xmm1
  }
  if ( COERCE_FLOAT(_XMM6.m128_i32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Orthogonal", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(_XMM6, _XMM6, 85).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Orthogonal", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(_XMM6, _XMM6, 170).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Orthogonal", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(_XMM6, _XMM6, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3Orthogonal", v388) )
      __debugbreak();
  }
  v79 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v79 = I_flrand(-8.0, 8.0);
  v454 = *(float *)&v79;
  v80 = v79;
  *(double *)&v79 = I_flrand(-8.0, 8.0);
  v465 = *(float *)&v79;
  *(double *)&v79 = I_flrand(-8.0, 8.0);
  v443 = *(float *)&v79;
  *(double *)&v79 = I_flrand(-8.0, 8.0);
  _XMM13 = v80;
  __asm
  {
    vinsertps xmm13, xmm13, xmm7, 10h
    vinsertps xmm13, xmm13, xmm8, 20h ; ' '
    vinsertps xmm13, xmm13, xmm0, 30h ; '0'
  }
  v432 = *(float *)&v79;
  v85 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v85 = I_flrand(-8.0, 8.0);
  v86 = v85;
  *(double *)&v85 = I_flrand(-8.0, 8.0);
  v410 = *(float *)&v85;
  *(double *)&v85 = I_flrand(-8.0, 8.0);
  v499 = *(float *)&v85;
  *(double *)&v85 = I_flrand(-8.0, 8.0);
  _XMM12 = v86;
  __asm
  {
    vinsertps xmm12, xmm12, xmm7, 10h
    vinsertps xmm12, xmm12, xmm8, 20h ; ' '
    vinsertps xmm12, xmm12, xmm0, 30h ; '0'
  }
  v504 = *(float *)&v85;
  v91 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v91 = I_flrand(-8.0, 8.0);
  v92 = v91;
  *(double *)&v91 = I_flrand(-8.0, 8.0);
  v421 = *(float *)&v91;
  *(double *)&v91 = I_flrand(-8.0, 8.0);
  v483 = *(float *)&v91;
  *(double *)&v91 = I_flrand(-8.0, 8.0);
  _XMM9 = v92;
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm8, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
  }
  v509 = *(float *)&v91;
  g_unitSavedSeed_0 = *GetRandSeed();
  v97 = LODWORD(FLOAT_N8_0);
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v98 = v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v490 = *(float *)&v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  v402 = *(float *)&v97;
  *(double *)&v97 = I_flrand(-8.0, 8.0);
  _XMM7 = v98;
  __asm
  {
    vinsertps xmm7, xmm7, xmm8, 10h
    vinsertps xmm7, xmm7, [rsp+208h+var_1C4], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v514 = *(float *)&v97;
  v103 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v103 = I_flrand(-8.0, 8.0);
  v104 = v103;
  *(double *)&v103 = I_flrand(-8.0, 8.0);
  v391 = *(float *)&v103;
  *(double *)&v103 = I_flrand(-8.0, 8.0);
  v476 = *(float *)&v103;
  v105 = I_flrand(-8.0, 8.0);
  _XMM6 = v104;
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+208h+var_1C8], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_1A8], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v110 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_XMM6, _mm_shuffle_ps(_XMM13, _XMM13, 255)), _mm128_mul_ps(_XMM9, _mm_shuffle_ps(_XMM13, _XMM13, 85))), _mm128_add_ps(_mm128_mul_ps(_XMM7, _mm_shuffle_ps(_XMM13, _XMM13, 170)), _mm128_mul_ps(_XMM12, _mm_shuffle_ps(_XMM13, _XMM13, 0))));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v110.m128_f32[0] - (float)((float)((float)((float)(*(float *)&v92 * v465) + (float)(*(float *)&v86 * v454)) + (float)(*(float *)&v98 * v443)) + (float)(*(float *)&v104 * v432))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Transform", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v110, v110, 85).m128_f32[0] - (float)((float)((float)((float)(v465 * v421) + (float)(v454 * v410)) + (float)(v443 * v490)) + (float)(v432 * v391))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Transform", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v110, v110, 170).m128_f32[0] - (float)((float)((float)((float)(v465 * v483) + (float)(v454 * v499)) + (float)(v443 * v402)) + (float)(v432 * v476))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Transform", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v110, v110, 255).m128_f32[0] - (float)((float)((float)((float)(v465 * v509) + (float)(v454 * v504)) + (float)(v443 * v514)) + (float)(v432 * *(float *)&v105))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Transform", v388) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v111 = I_flrand(-8.0, 8.0);
  v455 = *(float *)&v111;
  v112 = I_flrand(-8.0, 8.0);
  v466 = *(float *)&v112;
  v113 = I_flrand(-8.0, 8.0);
  _XMM11 = 0i64;
  __asm
  {
    vinsertps xmm11, xmm11, xmm6, 0
    vinsertps xmm11, xmm11, xmm7, 10h
    vinsertps xmm11, xmm11, xmm0, 20h ; ' '
  }
  v444 = *(float *)&v113;
  g_unitSavedSeed_0 = *GetRandSeed();
  v118 = I_flrand(-8.0, 8.0);
  v119 = *(float *)&v118;
  v120 = I_flrand(-8.0, 8.0);
  v422 = *(float *)&v120;
  v121 = I_flrand(-8.0, 8.0);
  _XMM9 = 0i64;
  __asm
  {
    vinsertps xmm9, xmm9, xmm12, 0
    vinsertps xmm9, xmm9, xmm6, 10h
    vinsertps xmm9, xmm9, xmm0, 20h ; ' '
  }
  v491 = *(float *)&v121;
  g_unitSavedSeed_0 = *GetRandSeed();
  v126 = I_flrand(-8.0, 8.0);
  v127 = *(float *)&v126;
  v128 = I_flrand(-8.0, 8.0);
  v433 = *(float *)&v128;
  v129 = I_flrand(-8.0, 8.0);
  _XMM7 = 0i64;
  __asm
  {
    vinsertps xmm7, xmm7, xmm10, 0
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm0, 20h ; ' '
  }
  v411 = *(float *)&v129;
  g_unitSavedSeed_0 = *GetRandSeed();
  v134 = I_flrand(-8.0, 8.0);
  v135 = *(float *)&v134;
  v136 = I_flrand(-8.0, 8.0);
  v392 = *(float *)&v136;
  v137 = I_flrand(-8.0, 8.0);
  _XMM6 = 0i64;
  __asm
  {
    vinsertps xmm6, xmm6, xmm8, 0
    vinsertps xmm6, xmm6, [rsp+208h+var_1C8], 10h
    vinsertps xmm6, xmm6, xmm0, 20h ; ' '
  }
  v403 = *(float *)&v137;
  g_unitSavedSeed_0 = *GetRandSeed();
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  v142 = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_XMM7, _mm_shuffle_ps(_XMM11, _XMM11, 85)), g_negativeZero.v), _mm128_add_ps(_mm128_mul_ps(_XMM6, _mm_shuffle_ps(_XMM11, _XMM11, 170)), _mm128_add_ps(_mm128_mul_ps(_XMM9, _mm_shuffle_ps(_XMM11, _XMM11, 0)), g_negativeZero.v))) & *(_OWORD *)&g_keepXYZ.v);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v142.m128_f32[0] - (float)((float)((float)(v127 * v466) + (float)(v119 * v455)) + (float)(v135 * v444))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Rotate", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v142, v142, 85).m128_f32[0] - (float)((float)((float)(v466 * v433) + (float)(v455 * v422)) + (float)(v444 * v392))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Rotate", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v142, v142, 170).m128_f32[0] - (float)((float)((float)(v466 * v411) + (float)(v455 * v491)) + (float)(v444 * v403))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Rotate", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v142, v142, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Rotate", v388) )
      __debugbreak();
  }
  v143 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v143 = I_flrand(-8.0, 8.0);
  v456 = *(float *)&v143;
  v144 = v143;
  *(double *)&v143 = I_flrand(-8.0, 8.0);
  v467 = *(float *)&v143;
  *(double *)&v143 = I_flrand(-8.0, 8.0);
  v445 = *(float *)&v143;
  *(double *)&v143 = I_flrand(-8.0, 8.0);
  _XMM11 = v144;
  __asm
  {
    vinsertps xmm11, xmm11, xmm7, 10h
    vinsertps xmm11, xmm11, xmm8, 20h ; ' '
    vinsertps xmm11, xmm11, xmm0, 30h ; '0'
  }
  v434 = *(float *)&v143;
  v149 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v149 = I_flrand(-8.0, 8.0);
  v150 = v149;
  *(double *)&v149 = I_flrand(-8.0, 8.0);
  v151 = *(float *)&v149;
  *(double *)&v149 = I_flrand(-8.0, 8.0);
  v152 = *(float *)&v149;
  *(double *)&v149 = I_flrand(-8.0, 8.0);
  v153 = *(float *)&v149;
  v154 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v154 = I_flrand(-8.0, 8.0);
  v412 = *(float *)&v154;
  v155 = v154;
  *(double *)&v154 = I_flrand(-8.0, 8.0);
  v423 = *(float *)&v154;
  *(double *)&v154 = I_flrand(-8.0, 8.0);
  v393 = *(float *)&v154;
  *(double *)&v154 = I_flrand(-8.0, 8.0);
  _XMM7 = v155;
  __asm
  {
    vinsertps xmm7, xmm7, xmm10, 10h
    vinsertps xmm7, xmm7, [rsp+208h+var_1C8], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v492 = *(float *)&v154;
  v160 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v160 = I_flrand(-8.0, 8.0);
  v510 = *(float *)&v160;
  _XMM6 = v160;
  *(double *)&v160 = I_flrand(-8.0, 8.0);
  v500 = *(float *)&v160;
  *(double *)&v160 = I_flrand(-8.0, 8.0);
  v404 = *(float *)&v160;
  *(double *)&v160 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm6, xmm6, xmm10, 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_1C4], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v505 = *(float *)&v160;
  v165 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v165 = I_flrand(-8.0, 8.0);
  v515 = *(float *)&v165;
  v166 = v165;
  *(double *)&v165 = I_flrand(-8.0, 8.0);
  v477 = *(float *)&v165;
  *(double *)&v165 = I_flrand(-8.0, 8.0);
  v484 = *(float *)&v165;
  *(double *)&v165 = I_flrand(-8.0, 8.0);
  v517 = *(float *)&v165;
  _XMM1 = v166;
  __asm
  {
    vinsertps xmm1, xmm1, [rsp+208h+var_1A8], 10h
    vinsertps xmm1, xmm1, [rsp+208h+var_1A4], 20h
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v171 = _mm_shuffle_ps(_XMM6.v, _XMM1, 68);
  v172 = _mm_shuffle_ps(_XMM6.v, _XMM1, 238);
  M1.z = (float4)_XMM6.v;
  _XMM3 = v150;
  __asm
  {
    vinsertps xmm3, xmm3, xmm14, 10h
    vinsertps xmm3, xmm3, xmm13, 20h ; ' '
    vinsertps xmm3, xmm3, xmm12, 30h ; '0'
  }
  v177 = _mm_shuffle_ps(_XMM3, _XMM7.v, 68);
  v178 = _mm_shuffle_ps(_XMM3, _XMM7.v, 238);
  M1.y = (float4)_XMM7.v;
  v179 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 255), _mm_shuffle_ps(v178, v172, 221)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 85), _mm_shuffle_ps(v177, v171, 221)), g_negativeZero.v)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 170), _mm_shuffle_ps(v178, v172, 136)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 0), _mm_shuffle_ps(v177, v171, 136)), g_negativeZero.v)));
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v179.m128_f32[0] - (float)((float)((float)((float)(v151 * v467) + (float)(*(float *)&v150 * v456)) + (float)(v152 * v445)) + (float)(v153 * v434))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4TransformTranspose", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v179, v179, 85).m128_f32[0] - (float)((float)((float)((float)(v467 * v423) + (float)(v456 * v412)) + (float)(v445 * v393)) + (float)(v434 * v492))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4TransformTranspose", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v179, v179, 170).m128_f32[0] - (float)((float)((float)((float)(v467 * v500) + (float)(v456 * v510)) + (float)(v445 * v404)) + (float)(v434 * v505))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4TransformTranspose", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v179, v179, 255).m128_f32[0] - (float)((float)((float)((float)(v467 * v477) + (float)(v456 * v515)) + (float)(v445 * v484)) + (float)(v434 * v517))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4TransformTranspose", v388) )
      __debugbreak();
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  v180 = I_flrand(-8.0, 8.0);
  v457 = *(float *)&v180;
  v181 = I_flrand(-8.0, 8.0);
  v468 = *(float *)&v181;
  v182 = I_flrand(-8.0, 8.0);
  _XMM8 = 0i64;
  __asm
  {
    vinsertps xmm8, xmm8, xmm6, 0
    vinsertps xmm8, xmm8, xmm7, 10h
    vinsertps xmm8, xmm8, xmm0, 20h ; ' '
  }
  v446 = *(float *)&v182;
  g_unitSavedSeed_0 = *GetRandSeed();
  v187 = I_flrand(-8.0, 8.0);
  v188 = *(float *)&v187;
  v189 = I_flrand(-8.0, 8.0);
  v190 = *(float *)&v189;
  v191 = I_flrand(-8.0, 8.0);
  v192 = *(float *)&v191;
  g_unitSavedSeed_0 = *GetRandSeed();
  v193 = I_flrand(-8.0, 8.0);
  v424 = *(float *)&v193;
  v194 = I_flrand(-8.0, 8.0);
  v435 = *(float *)&v194;
  v195 = I_flrand(-8.0, 8.0);
  _XMM10 = 0i64;
  __asm
  {
    vinsertps xmm10, xmm10, xmm6, 0
    vinsertps xmm10, xmm10, xmm7, 10h
    vinsertps xmm10, xmm10, xmm0, 20h ; ' '
  }
  v413 = *(float *)&v195;
  g_unitSavedSeed_0 = *GetRandSeed();
  v200 = I_flrand(-8.0, 8.0);
  v394 = *(float *)&v200;
  v201 = I_flrand(-8.0, 8.0);
  v493 = *(float *)&v201;
  v202 = I_flrand(-8.0, 8.0);
  _XMM9 = 0i64;
  __asm
  {
    vinsertps xmm9, xmm9, xmm6, 0
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm0, 20h ; ' '
  }
  v405 = *(float *)&v202;
  g_unitSavedSeed_0 = *GetRandSeed();
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  I_flrand(-8.0, 8.0);
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, xmm7, 0
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm0, 20h ; ' '
  }
  _XMM2 = 0i64;
  __asm
  {
    vinsertps xmm2, xmm2, xmm13, 0
    vinsertps xmm2, xmm2, xmm12, 10h
    vinsertps xmm2, xmm2, xmm11, 20h ; ' '
  }
  M1.w = (float4)_XMM1.v;
  v215 = _mm_shuffle_ps(_XMM2, _XMM10.v, 68);
  v216 = _mm_shuffle_ps(_XMM9.v, (__m128)0i64, 68);
  v217 = (__m128)(*(_OWORD *)&_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 170), _mm_shuffle_ps(_mm_shuffle_ps(_XMM2, _XMM10.v, 238), _mm_shuffle_ps(_XMM9.v, (__m128)0i64, 238), 136)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 0), _mm_shuffle_ps(v215, v216, 136)), g_negativeZero.v)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 85), _mm_shuffle_ps(v215, v216, 221)), g_negativeZero.v)) & *(_OWORD *)&g_keepXYZ.v);
  M1.z = (float4)_XMM9.v;
  M1.y = (float4)_XMM10.v;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v217.m128_f32[0] - (float)((float)((float)(v190 * v468) + (float)(v188 * v457)) + (float)(v192 * v446))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RotateTranspose", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v217, v217, 85).m128_f32[0] - (float)((float)((float)(v468 * v435) + (float)(v457 * v424)) + (float)(v446 * v413))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RotateTranspose", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v217, v217, 170).m128_f32[0] - (float)((float)((float)(v468 * v493) + (float)(v457 * v394)) + (float)(v446 * v405))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RotateTranspose", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v217, v217, 255).m128_u32[0] & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RotateTranspose", v388) )
      __debugbreak();
  }
  v218 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v218 = I_flrand(-8.0, 8.0);
  v219 = v218;
  *(double *)&v218 = I_flrand(-8.0, 8.0);
  v458 = *(float *)&v218;
  *(double *)&v218 = I_flrand(-8.0, 8.0);
  v425 = *(float *)&v218;
  I_flrand(-8.0, 8.0);
  _XMM7 = v219;
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm9, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v224 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v224 = I_flrand(-8.0, 8.0);
  v225 = v224;
  *(double *)&v224 = I_flrand(-8.0, 8.0);
  v447 = *(float *)&v224;
  *(double *)&v224 = I_flrand(-8.0, 8.0);
  v414 = *(float *)&v224;
  I_flrand(-8.0, 8.0);
  _XMM6 = v225;
  __asm
  {
    vinsertps xmm6, xmm6, xmm9, 10h
    vinsertps xmm6, xmm6, xmm12, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v230 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v230 = I_flrand(-8.0, 8.0);
  v469 = *(float *)&v230;
  v231 = v230;
  *(double *)&v230 = I_flrand(-8.0, 8.0);
  v436 = *(float *)&v230;
  *(double *)&v230 = I_flrand(-8.0, 8.0);
  v395 = *(float *)&v230;
  I_flrand(-8.0, 8.0);
  v232 = _mm_shuffle_ps(_XMM7, _XMM6, 68);
  _XMM3 = v231;
  __asm
  {
    vinsertps xmm3, xmm3, xmm12, 10h
    vinsertps xmm3, xmm3, [rsp+208h+var_1C8], 20h
    vinsertps xmm3, xmm3, xmm0, 30h ; '0'
  }
  v237 = _mm_shuffle_ps(_XMM3, g_one.v, 68);
  v238 = _mm_shuffle_ps(v232, v237, 136);
  v239 = _mm_shuffle_ps(v232, v237, 221);
  v240 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM7, _XMM6, 238), _mm_shuffle_ps(_XMM3, g_one.v, 238), 136);
  if ( v238.m128_f32[0] != *(float *)&v219 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v238, v238, 85).m128_f32[0] != *(float *)&v225 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v238, v238, 170).m128_f32[0] != v469 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v238, v238, 255).m128_f32[0] != 1.0 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( v239.m128_f32[0] != v458 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v239, v239, 85).m128_f32[0] != v447 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v239, v239, 170).m128_f32[0] != v436 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v239, v239, 255).m128_f32[0] != 1.0 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( v240.m128_f32[0] != v425 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v240, v240, 85).m128_f32[0] != v414 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v240, v240, 170).m128_f32[0] != v395 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v240, v240, 255).m128_f32[0] != 1.0 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3Tranpose (3)", v388) )
      __debugbreak();
  }
  v241 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v241 = I_flrand(-8.0, 8.0);
  v242 = v241;
  *(double *)&v241 = I_flrand(-8.0, 8.0);
  v459 = *(float *)&v241;
  *(double *)&v241 = I_flrand(-8.0, 8.0);
  v426 = *(float *)&v241;
  I_flrand(-8.0, 8.0);
  _XMM7 = v242;
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm9, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v247 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v247 = I_flrand(-8.0, 8.0);
  v248 = v247;
  *(double *)&v247 = I_flrand(-8.0, 8.0);
  v448 = *(float *)&v247;
  *(double *)&v247 = I_flrand(-8.0, 8.0);
  v415 = *(float *)&v247;
  I_flrand(-8.0, 8.0);
  _XMM6 = v248;
  __asm
  {
    vinsertps xmm6, xmm6, xmm9, 10h
    vinsertps xmm6, xmm6, xmm12, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v253 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v253 = I_flrand(-8.0, 8.0);
  v470 = *(float *)&v253;
  v254 = v253;
  *(double *)&v253 = I_flrand(-8.0, 8.0);
  v437 = *(float *)&v253;
  *(double *)&v253 = I_flrand(-8.0, 8.0);
  v396 = *(float *)&v253;
  I_flrand(-8.0, 8.0);
  v255 = _mm_shuffle_ps(_XMM7, _XMM6, 68);
  _XMM2 = v254;
  __asm
  {
    vinsertps xmm2, xmm2, xmm12, 10h
    vinsertps xmm2, xmm2, [rsp+208h+var_1C8], 20h
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
  }
  v260 = _mm_shuffle_ps(_XMM2, (__m128)0i64, 68);
  v261 = _mm_shuffle_ps(v255, v260, 136);
  v262 = _mm_shuffle_ps(v255, v260, 221);
  v263 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM7, _XMM6, 238), _mm_shuffle_ps(_XMM2, (__m128)0i64, 238), 136);
  if ( v261.m128_f32[0] != *(float *)&v242 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3TransposeNormals (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v261, v261, 85).m128_f32[0] != *(float *)&v248 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3TransposeNormals (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v261, v261, 170).m128_f32[0] != v470 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3TransposeNormals (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v261, v261, 255).m128_f32[0] != 0.0 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3TransposeNormals (1)", v388) )
      __debugbreak();
  }
  if ( v262.m128_f32[0] != v459 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3TransposeNormals (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v262, v262, 85).m128_f32[0] != v448 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3TransposeNormals (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v262, v262, 170).m128_f32[0] != v437 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3TransposeNormals (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v262, v262, 255).m128_f32[0] != 0.0 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3TransposeNormals (2)", v388) )
      __debugbreak();
  }
  if ( v263.m128_f32[0] != v426 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3TransposeNormals (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v263, v263, 85).m128_f32[0] != v415 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3TransposeNormals (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v263, v263, 170).m128_f32[0] != v396 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3TransposeNormals (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v263, v263, 255).m128_f32[0] != 0.0 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3TransposeNormals (3)", v388) )
      __debugbreak();
  }
  v264 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v264 = I_flrand(-8.0, 8.0);
  v265 = v264;
  *(double *)&v264 = I_flrand(-8.0, 8.0);
  v438 = *(float *)&v264;
  *(double *)&v264 = I_flrand(-8.0, 8.0);
  v406 = *(float *)&v264;
  I_flrand(-8.0, 8.0);
  _XMM8 = v265;
  __asm
  {
    vinsertps xmm8, xmm8, xmm6, 10h
    vinsertps xmm8, xmm8, xmm7, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  v270 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v270 = I_flrand(-8.0, 8.0);
  v471 = *(float *)&v270;
  v271 = v270;
  *(double *)&v270 = I_flrand(-8.0, 8.0);
  v427 = *(float *)&v270;
  *(double *)&v270 = I_flrand(-8.0, 8.0);
  v478 = *(float *)&v270;
  I_flrand(-8.0, 8.0);
  _XMM7 = v271;
  __asm
  {
    vinsertps xmm7, xmm7, xmm12, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v276 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v276 = I_flrand(-8.0, 8.0);
  v460 = *(float *)&v276;
  _XMM6 = v276;
  *(double *)&v276 = I_flrand(-8.0, 8.0);
  v416 = *(float *)&v276;
  *(double *)&v276 = I_flrand(-8.0, 8.0);
  v485 = *(float *)&v276;
  I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm6, xmm6, xmm12, 10h
    vinsertps xmm6, xmm6, xmm13, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v281 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v281 = I_flrand(-8.0, 8.0);
  v449 = *(float *)&v281;
  v282 = v281;
  *(double *)&v281 = I_flrand(-8.0, 8.0);
  v494 = *(float *)&v281;
  *(double *)&v281 = I_flrand(-8.0, 8.0);
  v397 = *(float *)&v281;
  I_flrand(-8.0, 8.0);
  v283 = _mm_shuffle_ps(_XMM8, _XMM7, 68);
  _XMM2 = v282;
  __asm
  {
    vinsertps xmm2, xmm2, xmm13, 10h
    vinsertps xmm2, xmm2, [rsp+208h+var_1C8], 20h
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
  }
  v288 = _mm_shuffle_ps(_XMM6, _XMM2, 68);
  v289 = _mm_shuffle_ps(v283, v288, 136);
  v290 = _mm_shuffle_ps(v283, v288, 221);
  v291 = _mm_shuffle_ps(_mm_shuffle_ps(_XMM8, _XMM7, 238), _mm_shuffle_ps(_XMM6, _XMM2, 238), 136);
  if ( v289.m128_f32[0] != *(float *)&v265 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x3Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v289, v289, 85).m128_f32[0] != v471 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x3Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v289, v289, 170).m128_f32[0] != v460 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x3Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v289, v289, 255).m128_f32[0] != v449 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x3Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( v290.m128_f32[0] != v438 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x3Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v290, v290, 85).m128_f32[0] != v427 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x3Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v290, v290, 170).m128_f32[0] != v416 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x3Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v290, v290, 255).m128_f32[0] != v494 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x3Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( v291.m128_f32[0] != v406 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x3Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v291, v291, 85).m128_f32[0] != v478 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x3Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v291, v291, 170).m128_f32[0] != v485 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x3Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v291, v291, 255).m128_f32[0] != v397 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x3Tranpose (3)", v388) )
      __debugbreak();
  }
  v292 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v292 = I_flrand(-8.0, 8.0);
  v293 = v292;
  *(double *)&v292 = I_flrand(-8.0, 8.0);
  v450 = *(float *)&v292;
  *(double *)&v292 = I_flrand(-8.0, 8.0);
  v407 = *(float *)&v292;
  *(double *)&v292 = I_flrand(-8.0, 8.0);
  v501 = *(float *)&v292;
  v294 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v294 = I_flrand(-8.0, 8.0);
  v295 = v294;
  *(double *)&v294 = I_flrand(-8.0, 8.0);
  v439 = *(float *)&v294;
  *(double *)&v294 = I_flrand(-8.0, 8.0);
  v417 = *(float *)&v294;
  *(double *)&v294 = I_flrand(-8.0, 8.0);
  _XMM7 = v295;
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm9, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v495 = *(float *)&v294;
  v300 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v300 = I_flrand(-8.0, 8.0);
  v472 = *(float *)&v300;
  _XMM6 = v300;
  *(double *)&v300 = I_flrand(-8.0, 8.0);
  v428 = *(float *)&v300;
  *(double *)&v300 = I_flrand(-8.0, 8.0);
  v479 = *(float *)&v300;
  *(double *)&v300 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm6, xmm6, xmm9, 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_1A8], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v511 = *(float *)&v300;
  v305 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v305 = I_flrand(-8.0, 8.0);
  v461 = *(float *)&v305;
  v306 = v305;
  *(double *)&v305 = I_flrand(-8.0, 8.0);
  v398 = *(float *)&v305;
  *(double *)&v305 = I_flrand(-8.0, 8.0);
  v486 = *(float *)&v305;
  *(double *)&v305 = I_flrand(-8.0, 8.0);
  _XMM1 = v306;
  __asm
  {
    vinsertps xmm1, xmm1, [rsp+208h+var_1C8], 10h
    vinsertps xmm1, xmm1, [rsp+208h+var_1A4], 20h
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  _XMM3 = v293;
  __asm
  {
    vinsertps xmm3, xmm3, xmm12, 10h
    vinsertps xmm3, xmm3, [rsp+208h+var_1C4], 20h
    vinsertps xmm3, xmm3, [rsp+208h+var_19C], 30h
  }
  v315.v = _mm_shuffle_ps(_XMM3, _XMM7, 68);
  v316 = _mm_shuffle_ps(_XMM3, _XMM7, 238);
  v506 = *(float *)&v305;
  v317 = _mm_shuffle_ps(_XMM6, _XMM1, 68);
  v318 = _mm_shuffle_ps(_XMM6, _XMM1, 238);
  v319 = _mm_shuffle_ps(v315.v, v317, 136);
  v320 = _mm_shuffle_ps(v315.v, v317, 221);
  v321 = _mm_shuffle_ps(v316, v318, 136);
  v322 = _mm_shuffle_ps(v316, v318, 221);
  if ( v319.m128_f32[0] != *(float *)&v293 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v319, v319, 85).m128_f32[0] != *(float *)&v295 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v319, v319, 170).m128_f32[0] != v472 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v319, v319, 255).m128_f32[0] != v461 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( v320.m128_f32[0] != v450 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v320, v320, 85).m128_f32[0] != v439 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v320, v320, 170).m128_f32[0] != v428 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v320, v320, 255).m128_f32[0] != v398 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( v321.m128_f32[0] != v407 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v321, v321, 85).m128_f32[0] != v417 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v321, v321, 170).m128_f32[0] != v479 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v321, v321, 255).m128_f32[0] != v486 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( v322.m128_f32[0] != v501 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Tranpose (4)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v322, v322, 85).m128_f32[0] != v495 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Tranpose (4)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v322, v322, 170).m128_f32[0] != v511 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Tranpose (4)", v388) )
      __debugbreak();
  }
  if ( _mm_shuffle_ps(v322, v322, 255).m128_f32[0] != v506 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Tranpose (4)", v388) )
      __debugbreak();
  }
  v323 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v323 = I_flrand(-8.0, 8.0);
  v525 = *(float *)&v323;
  v324 = v323;
  *(double *)&v323 = I_flrand(-8.0, 8.0);
  v524 = *(float *)&v323;
  *(double *)&v323 = I_flrand(-8.0, 8.0);
  v526 = *(float *)&v323;
  *(double *)&v323 = I_flrand(-8.0, 8.0);
  _XMM8 = v324;
  __asm
  {
    vinsertps xmm8, xmm8, xmm7, 10h
    vinsertps xmm8, xmm8, xmm9, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  v527 = *(float *)&v323;
  v329 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v329 = I_flrand(-8.0, 8.0);
  v330 = v329;
  *(double *)&v329 = I_flrand(-8.0, 8.0);
  v331 = *(float *)&v329;
  *(double *)&v329 = I_flrand(-8.0, 8.0);
  v332 = *(float *)&v329;
  *(double *)&v329 = I_flrand(-8.0, 8.0);
  _XMM7 = v330;
  __asm
  {
    vinsertps xmm7, xmm7, xmm12, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v528 = *(float *)&v329;
  v337 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v337 = I_flrand(-8.0, 8.0);
  v529 = *(float *)&v337;
  _XMM6 = v337;
  *(double *)&v337 = I_flrand(-8.0, 8.0);
  v429 = *(float *)&v337;
  *(double *)&v337 = I_flrand(-8.0, 8.0);
  v440 = *(float *)&v337;
  *(double *)&v337 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+208h+var_1BC], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_1B8], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v530 = *(float *)&v337;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v337 = I_flrand(-8.0, 8.0);
  v462 = *(float *)&v337;
  *(double *)&v337 = I_flrand(-8.0, 8.0);
  v451 = *(float *)&v337;
  *(double *)&v337 = I_flrand(-8.0, 8.0);
  v473 = *(float *)&v337;
  v342 = (__m128)LODWORD(FLOAT_N8_0);
  *(double *)v342.m128_u64 = I_flrand(-8.0, 8.0);
  v531 = v342.m128_f32[0];
  v343.v = v342;
  _XMM0 = LODWORD(v462);
  __asm
  {
    vinsertps xmm0, xmm0, [rsp+208h+var_1B4], 10h
    vinsertps xmm0, xmm0, [rsp+208h+var_1AC], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
  }
  result.w = (float4)_XMM0.v;
  result.x = (float4)_XMM8.v;
  result.y = (float4)_XMM7.v;
  result.z = (float4)_XMM6.v;
  v348 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v348 = I_flrand(-8.0, 8.0);
  v507 = *(float *)&v348;
  _XMM8 = v348;
  *(double *)&v348 = I_flrand(-8.0, 8.0);
  v418 = *(float *)&v348;
  *(double *)&v348 = I_flrand(-8.0, 8.0);
  v502 = *(float *)&v348;
  *(double *)&v348 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm8, xmm8, xmm6, 10h
    vinsertps xmm8, xmm8, xmm7, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
  }
  v399 = *(float *)&v348;
  v353 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v353 = I_flrand(-8.0, 8.0);
  v516 = *(float *)&v353;
  _XMM7 = v353;
  *(double *)&v353 = I_flrand(-8.0, 8.0);
  v496 = *(float *)&v353;
  *(double *)&v353 = I_flrand(-8.0, 8.0);
  v521 = *(float *)&v353;
  *(double *)&v353 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+208h+var_180], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
  }
  v487 = *(float *)&v353;
  v358 = LODWORD(FLOAT_N8_0);
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v512 = *(float *)&v358;
  _XMM6 = v358;
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v518 = *(float *)&v358;
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v522 = *(float *)&v358;
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+208h+var_18C], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_17C], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
  }
  v480 = *(float *)&v358;
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v519 = *(float *)&v358;
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v520 = *(float *)&v358;
  *(double *)&v358 = I_flrand(-8.0, 8.0);
  v523 = *(float *)&v358;
  v363.v = (__m128)LODWORD(FLOAT_N8_0);
  *(double *)v363.v.m128_u64 = I_flrand(-8.0, 8.0);
  _XMM1 = LODWORD(v519);
  __asm
  {
    vinsertps xmm1, xmm1, [rsp+208h+var_184], 10h
    vinsertps xmm1, xmm1, [rsp+208h+var_178], 20h
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  M1.w = (float4)_XMM1.v;
  M1.x = (float4)_XMM8.v;
  M1.y = (float4)_XMM7.v;
  M1.z = (float4)_XMM6.v;
  Float4x4Mul(&result, &M1, v368);
  result.y = (float4)_XMM1.v;
  result.x = (float4)v363.v;
  result.w = (float4)v343.v;
  result.z = (float4)v315.v;
  M1 = result;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v363.v.m128_f32[0] - (float)((float)((float)((float)(v524 * v516) + (float)(v525 * v507)) + (float)(v526 * v512)) + (float)(v527 * v519))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Tranpose (1)", v388) )
      __debugbreak();
  }
  v370.v = (__m128)M1.x;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v370.v, v370.v, 85).m128_f32[0] - (float)((float)((float)((float)(v524 * v496) + (float)(v525 * v418)) + (float)(v526 * v518)) + (float)(v527 * v520))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v370.v, v370.v, 170).m128_f32[0] - (float)((float)((float)((float)(v524 * v521) + (float)(v525 * v502)) + (float)(v526 * v522)) + (float)(v527 * v523))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Tranpose (1)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v370.v, v370.v, 255).m128_f32[0] - (float)((float)((float)((float)(v524 * v487) + (float)(v399 * v525)) + (float)(v526 * v480)) + (float)(v527 * v363.v.m128_f32[0]))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Tranpose (1)", v388) )
      __debugbreak();
  }
  v371.v = (__m128)M1.y;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(M1.y.v.m128_f32[0] - (float)((float)((float)((float)(v331 * v516) + (float)(*(float *)&v330 * v507)) + (float)(v332 * v512)) + (float)(v528 * v519))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v371.v, v371.v, 85).m128_f32[0] - (float)((float)((float)((float)(v496 * v331) + (float)(v418 * *(float *)&v330)) + (float)(v332 * v518)) + (float)(v528 * v520))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v371.v, v371.v, 170).m128_f32[0] - (float)((float)((float)((float)(v331 * v521) + (float)(*(float *)&v330 * v502)) + (float)(v332 * v522)) + (float)(v528 * v523))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Tranpose (2)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v371.v, v371.v, 255).m128_f32[0] - (float)((float)((float)((float)(v331 * v487) + (float)(v399 * *(float *)&v330)) + (float)(v332 * v480)) + (float)(v528 * v363.v.m128_f32[0]))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Tranpose (2)", v388) )
      __debugbreak();
  }
  v372.v = (__m128)M1.z;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(M1.z.v.m128_f32[0] - (float)((float)((float)((float)(v429 * v516) + (float)(v529 * v507)) + (float)(v440 * v512)) + (float)(v530 * v519))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v372.v, v372.v, 85).m128_f32[0] - (float)((float)((float)((float)(v496 * v429) + (float)(v418 * v529)) + (float)(v518 * v440)) + (float)(v530 * v520))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v372.v, v372.v, 170).m128_f32[0] - (float)((float)((float)((float)(v429 * v521) + (float)(v529 * v502)) + (float)(v440 * v522)) + (float)(v530 * v523))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Tranpose (3)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v372.v, v372.v, 255).m128_f32[0] - (float)((float)((float)((float)(v429 * v487) + (float)(v529 * v399)) + (float)(v440 * v480)) + (float)(v530 * v363.v.m128_f32[0]))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Tranpose (3)", v388) )
      __debugbreak();
  }
  v373.v = (__m128)M1.w;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(M1.w.v.m128_f32[0] - (float)((float)((float)((float)(v451 * v516) + (float)(v462 * v507)) + (float)(v473 * v512)) + (float)(v531 * v519))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Tranpose (4)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v373.v, v373.v, 85).m128_f32[0] - (float)((float)((float)((float)(v496 * v451) + (float)(v418 * v462)) + (float)(v518 * v473)) + (float)(v531 * v520))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Tranpose (4)", v388) )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v373.v, v373.v, 170).m128_f32[0] - (float)((float)((float)((float)(v451 * v521) + (float)(v462 * v502)) + (float)(v473 * v522)) + (float)(v531 * v523))) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Tranpose (4)", v388) )
      __debugbreak();
  }
  v374 = (__m128)LODWORD(v451);
  v374.m128_f32[0] = (float)(v451 * v487) + (float)(v462 * v399);
  v375 = v374;
  v377 = (__m128)LODWORD(v531);
  v377.m128_f32[0] = v531 * v363.v.m128_f32[0];
  v376.v = v377;
  v379 = v375;
  v379.m128_f32[0] = v375.m128_f32[0] + (float)(v473 * v480);
  v378.v = v379;
  v379.m128_f32[0] = v379.m128_f32[0] + v376.v.m128_f32[0];
  v380.v = v379;
  v381 = _mm_shuffle_ps(v373.v, v373.v, 255);
  v382 = v381;
  v382.m128_f32[0] = v381.m128_f32[0] - v380.v.m128_f32[0];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v381.m128_f32[0] - v380.v.m128_f32[0]) & _xmm) >= 0.001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Tranpose (4)", v388) )
      __debugbreak();
  }
  *(__m256i *)M1.x.v.m128_f32 = _ymm;
  *(__m256i *)M1.z.v.m128_f32 = _ymm;
  v383 = (unsigned __int8)Float4x4Inverse(&M1, v369);
  M1.x = (float4)v376.v;
  M1.w = (float4)v378.v;
  M1.z = (float4)v380.v;
  M1.y = (float4)(*(_OWORD *)&v382 & (unsigned int)_xmm);
  result = M1;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v376.v.m128_f32[0] - 0.84984201) & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Inverse (1)", v388);
    if ( v383 )
      __debugbreak();
  }
  v384.v = (__m128)result.x;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v384.v, v384.v, 85).m128_f32[0] - 0.000000037147775) & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Inverse (1)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v384.v, v384.v, 170).m128_u32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Inverse (1)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v384.v, v384.v, 255).m128_u32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Inverse (1)", v388);
    if ( v383 )
      __debugbreak();
  }
  v385.v = (__m128)result.y;
  if ( COERCE_FLOAT(result.y.v.m128_i32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Inverse (2)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v385.v, v385.v, 85).m128_u32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Inverse (2)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v385.v, v385.v, 170).m128_f32[0] - 0.47803614) & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Inverse (2)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v385.v, v385.v, 255).m128_u32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Inverse (2)", v388);
    if ( v383 )
      __debugbreak();
  }
  v386.v = (__m128)result.z;
  if ( COERCE_FLOAT(result.z.v.m128_i32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Inverse (3)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v386.v, v386.v, 85).m128_u32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Inverse (3)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v386.v, v386.v, 170).m128_u32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Inverse (3)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v386.v, v386.v, 255).m128_f32[0] - -0.25012213) & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Inverse (3)", v388);
    if ( v383 )
      __debugbreak();
  }
  v387.v = (__m128)result.w;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(result.w.v.m128_f32[0] - -0.000000043711385) & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Inverse (4)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v387.v, v387.v, 85).m128_f32[0] - 1.0) & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Inverse (4)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(_mm_shuffle_ps(v387.v, v387.v, 170).m128_u32[0] & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Inverse (4)", v388);
    if ( v383 )
      __debugbreak();
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v387.v, v387.v, 255).m128_f32[0] - 0.25) & _xmm) >= 0.0020000001 )
  {
    LODWORD(v388) = g_unitSavedSeed_0;
    v383 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Inverse (4)", v388);
    if ( v383 )
      __debugbreak();
  }
  return v383;
}

/*
==============
Int4MiscTest
==============
*/
char Int4MiscTest()
{
  __int64 v36; 
  unsigned int v37; 
  __int64 v38; 
  __int64 v39; 
  __int128 v40; 

  _XMM6 = 0xFE060504FF030201ui64;
  __asm { vpextrd rax, xmm6, 0 }
  if ( (_DWORD)_RAX != -16580095 )
  {
    v37 = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4LoadByte8", v37) )
      __debugbreak();
  }
  __asm { vpextrd rdx, xmm6, 1 }
  if ( (_DWORD)_RDX != -33159932 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4LoadByte8", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4LoadByte8", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4LoadByte8", v36) )
      __debugbreak();
  }
  _XMM6 = _xmm;
  __asm { vpextrd rax, xmm6, 0 }
  if ( (_DWORD)_RAX != 555819297 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4LoadByte", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 1 }
  if ( (_DWORD)_RAX != 555819297 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4LoadByte", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX != 555819297 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4LoadByte", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX != 555819297 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4LoadByte", v36) )
      __debugbreak();
  }
  _XMM1 = 0xFE070605FF040302ui64;
  __asm
  {
    vpcmpeqb xmm1, xmm1, xmm0
    vpmovmskb eax, xmm1
  }
  if ( _EAX != 65416 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4CmpEqByte", v36) )
      __debugbreak();
  }
  __asm
  {
    vcvttps2dq xmm6, cs:__xmm@c080000040400000400000003f800000
    vpextrd rax, xmm6, 0
  }
  if ( (_DWORD)_RAX != 1 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Float4ConvertToInt4", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 1 }
  if ( (_DWORD)_RAX != 2 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Float4ConvertToInt4", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX != 3 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Float4ConvertToInt4", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX != -4 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Float4ConvertToInt4", v36) )
      __debugbreak();
  }
  __asm
  {
    vpslld  xmm6, xmm6, 2
    vpextrd rax, xmm6, 0
  }
  if ( (_DWORD)_RAX != 4 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4ShiftLeft", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 1 }
  if ( (_DWORD)_RAX != 8 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4ShiftLeft", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX != 12 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4ShiftLeft", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX != -16 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4ShiftLeft", v36) )
      __debugbreak();
  }
  __asm
  {
    vpsrld  xmm7, xmm6, 2
    vpextrd rax, xmm7, 0
  }
  if ( (_DWORD)_RAX != 1 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4ShiftRight", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm7, 1 }
  if ( (_DWORD)_RAX != 2 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4ShiftRight", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm7, 2 }
  if ( (_DWORD)_RAX != 3 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4ShiftRight", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm7, 3 }
  if ( (_DWORD)_RAX != 1073741820 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4ShiftRight", v36) )
      __debugbreak();
  }
  __asm { vmovlps qword ptr [rbp+57h+var_60], xmm6 }
  if ( (_DWORD)v38 != 4 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4StoreXY (0)", v36) )
      __debugbreak();
  }
  if ( HIDWORD(v38) != 8 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4StoreXY (1)", v36) )
      __debugbreak();
  }
  __asm { vmovhps qword ptr [rbp+57h+var_60], xmm7 }
  if ( (_DWORD)v39 != 3 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4StoreZW (0)", v36) )
      __debugbreak();
  }
  if ( HIDWORD(v39) != 1073741820 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4StoreZW (1)", v36) )
      __debugbreak();
  }
  _XMM2 = 0xFE060504FF030201ui64;
  *((_QWORD *)&v40 + 1) = *((_QWORD *)&_xmm_ffffffffffffffffffffffffffffffff + 1);
  __asm { vpshufb xmm2, xmm2, xmm1 }
  *(_QWORD *)&v40 = _XMM2;
  _XMM6 = v40;
  __asm { vpextrd rax, xmm6, 0 }
  if ( (_DWORD)_RAX != 83821057 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4RequeueByteXY", v36) )
      __debugbreak();
  }
  __asm { vpextrd rdx, xmm6, 1 }
  if ( (_DWORD)_RDX != 66979333 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4RequeueByteXY", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX != -1 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4RequeueByteXY", v36) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX != -1 )
  {
    LODWORD(v36) = g_unitSavedSeed_0;
    LOBYTE(_RAX) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4RequeueByteXY", v36);
    if ( (_BYTE)_RAX )
      __debugbreak();
  }
  return _RAX;
}

/*
==============
unitCheck
==============
*/
void unitCheck(bool pass, const char *func, const char *str)
{
  unsigned int v3; 

  if ( !pass )
  {
    v3 = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", str, func, v3) )
      __debugbreak();
  }
}

