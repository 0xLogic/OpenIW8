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
  bool v4; 
  bool v8; 
  bool v10; 
  bool v12; 
  bool v14; 
  bool v17; 
  bool v19; 
  bool v21; 
  bool v23; 
  bool v28; 
  bool v30; 
  bool v32; 
  bool v34; 
  bool v37; 
  bool v39; 
  bool v41; 
  bool v45; 
  bool v50; 
  bool v52; 
  bool v54; 
  bool v56; 
  bool v59; 
  bool v61; 
  bool v63; 
  _BYTE v68[32]; 
  __int64 v69; 
  char v70; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RBP = (unsigned __int64)&v70 & 0xFFFFFFFFFFFFFFE0ui64;
  v4 = (unsigned __int64)v68 == _security_cookie;
  *(_QWORD *)(_RBP + 64) = (unsigned __int64)v68 ^ _security_cookie;
  __asm
  {
    vmovups ymm0, cs:__ymm@4100000040e0000040c0000040a000004080000040400000400000003f800000
    vmovss  xmm7, cs:__real@3f800000
    vextractf128 xmm6, ymm0, 0
    vucomiss xmm6, xmm7
    vmovups ymmword ptr [rbp+0], ymm0
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Set", v69);
    v4 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, dword ptr [rbp+4]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Set", v69);
    v4 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, dword ptr [rbp+8]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Set", v69);
    v4 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, dword ptr [rbp+0Ch]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Set", v69);
    v4 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, cs:__ymm@4100000040e0000040c0000040a000004080000040400000400000003f800000
    vextractf128 xmm6, ymm0, 1
    vucomiss xmm6, dword ptr [rbp+10h]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Set", v69);
    v4 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, dword ptr [rbp+14h]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Set", v69);
    v4 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, dword ptr [rbp+18h]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Set", v69);
    v4 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, dword ptr [rbp+1Ch]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Set", v69);
    v4 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, cs:__ymm@4100000040e0000040c0000040a000004080000040400000400000003f800000
    vmovups ymmword ptr [rbp+0], ymm0
    vmovups xmm0, cs:__xmm@4080000040400000400000003f800000
    vinsertf128 ymm0, ymm0, cs:__xmm@4100000040e0000040c0000040a00000, 1
    vextractf128 xmm6, ymm0, 0
    vucomiss xmm6, xmm7
    vmovups ymmword ptr [rbp+20h], ymm0
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Set", v69);
    v4 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, dword ptr [rbp+4]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Set", v69);
    v4 = !v30;
    if ( v30 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, dword ptr [rbp+8]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Set", v69);
    v4 = !v32;
    if ( v32 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, dword ptr [rbp+0Ch]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Set", v69);
    v4 = !v34;
    if ( v34 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+20h]
    vextractf128 xmm6, ymm0, 1
    vucomiss xmm6, dword ptr [rbp+10h]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Set", v69);
    v4 = !v37;
    if ( v37 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, dword ptr [rbp+14h]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Set", v69);
    v4 = !v39;
    if ( v39 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, dword ptr [rbp+18h]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Set", v69);
    v4 = !v41;
    if ( v41 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, dword ptr [rbp+1Ch]
  }
  if ( !v4 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Set", v69) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  xmm0, cs:__real@c1000000; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vshufps xmm0, xmm0, xmm0, 0
    vinsertf128 ymm0, ymm0, xmm0, 1
    vextractf128 xmm6, ymm0, 0
    vucomiss xmm6, xmm7
    vmovups ymmword ptr [rbp+20h], ymm0
  }
  if ( !v45 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8LoadFloat", v69);
    v45 = !v50;
    if ( v50 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
  }
  if ( !v45 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v52 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8LoadFloat", v69);
    v45 = !v52;
    if ( v52 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm7
  }
  if ( !v45 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8LoadFloat", v69);
    v45 = !v54;
    if ( v54 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v45 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8LoadFloat", v69);
    v45 = !v56;
    if ( v56 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+20h]
    vextractf128 xmm6, ymm0, 1
    vucomiss xmm6, xmm7
  }
  if ( !v45 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8LoadFloat", v69);
    v45 = !v59;
    if ( v59 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
  }
  if ( !v45 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8LoadFloat", v69);
    v45 = !v61;
    if ( v61 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm7
  }
  if ( !v45 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    v63 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8LoadFloat", v69);
    v45 = !v63;
    if ( v63 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v45 )
  {
    LODWORD(v69) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8LoadFloat", v69) )
      __debugbreak();
  }
  _R11 = &v71;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Float8LogicalTest
==============
*/
char Float8LogicalTest()
{
  int v68; 
  bool v80; 
  bool v81; 
  unsigned int v82; 
  bool v83; 
  bool v84; 
  unsigned int v85; 
  bool v86; 
  bool v87; 
  unsigned int v88; 
  bool v89; 
  bool v90; 
  unsigned int v91; 
  bool v92; 
  bool v93; 
  unsigned int v95; 
  bool v96; 
  bool v97; 
  unsigned int v99; 
  bool v100; 
  bool v101; 
  int v103; 
  unsigned int v168; 
  bool v170; 
  bool v171; 
  unsigned int v172; 
  bool v173; 
  bool v174; 
  unsigned int v175; 
  bool v176; 
  bool v177; 
  unsigned int v178; 
  bool v179; 
  bool v180; 
  unsigned int v181; 
  bool v182; 
  bool v183; 
  unsigned int v185; 
  bool v186; 
  bool v187; 
  unsigned int v189; 
  bool v190; 
  bool v191; 
  int v193; 
  int v262; 
  bool v263; 
  bool v264; 
  int v265; 
  bool v266; 
  bool v267; 
  int v268; 
  bool v269; 
  bool v270; 
  int v271; 
  bool v272; 
  bool v273; 
  int v274; 
  bool v275; 
  bool v276; 
  int v278; 
  bool v279; 
  bool v280; 
  int v282; 
  bool v283; 
  bool v284; 
  int v286; 
  int v358; 
  bool v359; 
  bool v360; 
  int v361; 
  bool v362; 
  bool v363; 
  int v364; 
  bool v365; 
  bool v366; 
  int v367; 
  bool v368; 
  bool v369; 
  int v370; 
  bool v371; 
  bool v372; 
  int v374; 
  bool v375; 
  bool v376; 
  int v378; 
  bool v379; 
  bool v380; 
  int v382; 
  unsigned int v450; 
  bool v452; 
  bool v453; 
  unsigned int v454; 
  bool v455; 
  bool v456; 
  unsigned int v457; 
  bool v458; 
  bool v459; 
  unsigned int v460; 
  bool v461; 
  bool v462; 
  unsigned int v463; 
  bool v464; 
  bool v465; 
  unsigned int v467; 
  bool v468; 
  bool v469; 
  unsigned int v471; 
  bool v472; 
  bool v473; 
  int v475; 
  unsigned int v539; 
  bool v541; 
  bool v542; 
  unsigned int v543; 
  bool v544; 
  bool v545; 
  unsigned int v546; 
  bool v547; 
  bool v548; 
  unsigned int v549; 
  bool v550; 
  bool v551; 
  unsigned int v552; 
  bool v553; 
  bool v554; 
  unsigned int v556; 
  bool v557; 
  bool v558; 
  unsigned int v560; 
  bool v561; 
  __int64 v575; 
  __int64 v576; 
  char v577[272]; 
  char v578; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RBP = (unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = (unsigned __int64)&v575 ^ _security_cookie;
  __asm
  {
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovaps xmm15, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm4, xmm0
    vmovaps xmm0, xmm15
    vinsertps xmm0, xmm0, dword ptr [rbp+0Ch], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 20h ; ' '
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
  }
  v68 = 0;
  __asm
  {
    vmovaps xmm0, xmm14
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 30h ; '0'
    vmovaps xmm2, xmm7
    vinsertps xmm2, xmm2, xmm8, 10h
    vinsertps xmm2, xmm2, xmm10, 20h ; ' '
    vcomiss xmm7, xmm6
    vinsertps xmm2, xmm2, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vcmpgt_oqps ymm1, ymm0, ymm3
    vmovd   eax, xmm1
    vmovups ymmword ptr [rbp+40h], ymm1
  }
  v80 = _EAX == 0;
  if ( _EAX )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v81 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (1)", v576);
    v80 = !v81;
    if ( v81 )
      __debugbreak();
  }
  __asm { vcomiss xmm8, xmm9 }
  v82 = 0;
  if ( !v80 )
    v82 = -1;
  v83 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) <= v82;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v82 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v84 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (2)", v576);
    v83 = !v84;
    if ( v84 )
      __debugbreak();
  }
  __asm { vcomiss xmm10, xmm11 }
  v85 = 0;
  if ( !v83 )
    v85 = -1;
  v86 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) <= v85;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v85 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v87 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (3)", v576);
    v86 = !v87;
    if ( v87 )
      __debugbreak();
  }
  __asm { vcomiss xmm12, xmm13 }
  v88 = 0;
  if ( !v86 )
    v88 = -1;
  v89 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) <= v88;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v88 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v90 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (4)", v576);
    v89 = !v90;
    if ( v90 )
      __debugbreak();
  }
  __asm { vcomiss xmm14, xmm15 }
  v91 = 0;
  if ( !v89 )
    v91 = -1;
  v92 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) <= v91;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v91 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v93 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (5)", v576);
    v92 = !v93;
    if ( v93 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vcomiss xmm0, dword ptr [rbp+0Ch]
  }
  v95 = 0;
  if ( !v92 )
    v95 = -1;
  v96 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) <= v95;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v95 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v97 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (6)", v576);
    v96 = !v97;
    if ( v97 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vcomiss xmm0, dword ptr [rbp+0]
  }
  v99 = 0;
  if ( !v96 )
    v99 = -1;
  v100 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) <= v99;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v99 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v101 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (7)", v576);
    v100 = !v101;
    if ( v101 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vcomiss xmm0, dword ptr [rbp+14h]
  }
  v103 = 0;
  if ( !v100 )
    v103 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v103 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGtfp (8)", v576) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovaps xmm15, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm4, xmm0
    vmovaps xmm0, xmm15
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0Ch], 20h ; ' '
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovaps xmm0, xmm14
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 30h ; '0'
    vmovaps xmm2, xmm7
    vinsertps xmm2, xmm2, xmm8, 10h
    vinsertps xmm2, xmm2, xmm10, 20h ; ' '
    vcomiss xmm7, xmm6
    vinsertps xmm2, xmm2, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vcmpge_oqps ymm1, ymm0, ymm3
  }
  v168 = 0;
  __asm { vmovd   eax, xmm1 }
  if ( !v170 )
    v168 = -1;
  __asm { vmovups ymmword ptr [rbp+40h], ymm1 }
  v170 = _EAX < v168;
  if ( _EAX != v168 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v171 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (1)", v576);
    v170 = 0;
    if ( v171 )
      __debugbreak();
  }
  __asm { vcomiss xmm8, xmm9 }
  v172 = 0;
  if ( !v170 )
    v172 = -1;
  v173 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) < v172;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v172 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v174 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (2)", v576);
    v173 = 0;
    if ( v174 )
      __debugbreak();
  }
  __asm { vcomiss xmm10, xmm11 }
  v175 = 0;
  if ( !v173 )
    v175 = -1;
  v176 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) < v175;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v175 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v177 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (3)", v576);
    v176 = 0;
    if ( v177 )
      __debugbreak();
  }
  __asm { vcomiss xmm12, xmm13 }
  v178 = 0;
  if ( !v176 )
    v178 = -1;
  v179 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) < v178;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v178 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v180 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (4)", v576);
    v179 = 0;
    if ( v180 )
      __debugbreak();
  }
  __asm { vcomiss xmm14, xmm15 }
  v181 = 0;
  if ( !v179 )
    v181 = -1;
  v182 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) < v181;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v181 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v183 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (5)", v576);
    v182 = 0;
    if ( v183 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vcomiss xmm0, dword ptr [rbp+0]
  }
  v185 = 0;
  if ( !v182 )
    v185 = -1;
  v186 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) < v185;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v185 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v187 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (6)", v576);
    v186 = 0;
    if ( v187 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vcomiss xmm0, dword ptr [rbp+0Ch]
  }
  v189 = 0;
  if ( !v186 )
    v189 = -1;
  v190 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) < v189;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v189 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v191 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (7)", v576);
    v190 = 0;
    if ( v191 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vcomiss xmm0, dword ptr [rbp+14h]
  }
  v193 = 0;
  if ( !v190 )
    v193 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v193 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpGefp (8)", v576) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm2, xmm0
    vmovaps xmm0, xmm14
    vinsertps xmm0, xmm0, xmm6, 10h
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vinsertps xmm1, xmm1, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vmovups ymmword ptr [rbp+20h], ymm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovaps xmm15, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+4], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vucomiss xmm7, xmm6
    vmovups ymm2, ymmword ptr [rbp+20h]
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm4, xmm0
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vmovaps xmm0, xmm15
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 20h ; ' '
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vcmpeqps ymm1, ymm2, ymm0
    vmovaps ymmword ptr [rbp+40h], ymm1
  }
  v262 = -1;
  if ( !v263 )
    v262 = 0;
  v263 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) == v262;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) != v262 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v264 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (1)", v576);
    v263 = !v264;
    if ( v264 )
      __debugbreak();
  }
  __asm { vucomiss xmm8, xmm9 }
  v265 = -1;
  if ( !v263 )
    v265 = 0;
  v266 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) == v265;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v265 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v267 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (2)", v576);
    v266 = !v267;
    if ( v267 )
      __debugbreak();
  }
  __asm { vucomiss xmm10, xmm11 }
  v268 = -1;
  if ( !v266 )
    v268 = 0;
  v269 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) == v268;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v268 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v270 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (3)", v576);
    v269 = !v270;
    if ( v270 )
      __debugbreak();
  }
  __asm { vucomiss xmm12, xmm13 }
  v271 = -1;
  if ( !v269 )
    v271 = 0;
  v272 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) == v271;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v271 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v273 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (4)", v576);
    v272 = !v273;
    if ( v273 )
      __debugbreak();
  }
  __asm { vucomiss xmm14, xmm15 }
  v274 = -1;
  if ( !v272 )
    v274 = 0;
  v275 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) == v274;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v274 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v276 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (5)", v576);
    v275 = !v276;
    if ( v276 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+14h]
    vucomiss xmm0, dword ptr [rbp+4]
  }
  v278 = -1;
  if ( !v275 )
    v278 = 0;
  v279 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) == v278;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v278 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v280 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (6)", v576);
    v279 = !v280;
    if ( v280 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vucomiss xmm0, dword ptr [rbp+0]
  }
  v282 = -1;
  if ( !v279 )
    v282 = 0;
  v283 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) == v282;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v282 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v284 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (7)", v576);
    v283 = !v284;
    if ( v284 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vucomiss xmm0, dword ptr [rbp+8]
  }
  v286 = -1;
  if ( !v283 )
    v286 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v286 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (8)", v576) )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+20h]
    vcmpeqps ymm0, ymm0, ymm0
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+40h], ymm0
  }
  if ( _EAX != -1 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (1)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != -1 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (2)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != -1 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (3)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != -1 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (4)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != -1 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (5)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != -1 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (6)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != -1 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (7)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != -1 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpEqfp (8)", v576) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm2, xmm0
    vmovaps xmm0, xmm14
    vinsertps xmm0, xmm0, xmm6, 10h
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vinsertps xmm1, xmm1, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vmovups ymmword ptr [rbp+20h], ymm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovaps xmm15, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+4], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vucomiss xmm7, xmm6
    vmovups ymm2, ymmword ptr [rbp+20h]
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm4, xmm0
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vmovaps xmm0, xmm15
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 20h ; ' '
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vcmpneq_oqps ymm1, ymm2, ymm0
    vmovaps ymmword ptr [rbp+40h], ymm1
  }
  v358 = -1;
  if ( v263 )
    v358 = 0;
  v359 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) == v358;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) != v358 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v360 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (1)", v576);
    v359 = !v360;
    if ( v360 )
      __debugbreak();
  }
  __asm { vucomiss xmm8, xmm9 }
  v361 = -1;
  if ( v359 )
    v361 = 0;
  v362 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) == v361;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v361 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v363 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (2)", v576);
    v362 = !v363;
    if ( v363 )
      __debugbreak();
  }
  __asm { vucomiss xmm10, xmm11 }
  v364 = -1;
  if ( v362 )
    v364 = 0;
  v365 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) == v364;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v364 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v366 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (3)", v576);
    v365 = !v366;
    if ( v366 )
      __debugbreak();
  }
  __asm { vucomiss xmm12, xmm13 }
  v367 = -1;
  if ( v365 )
    v367 = 0;
  v368 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) == v367;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v367 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v369 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (4)", v576);
    v368 = !v369;
    if ( v369 )
      __debugbreak();
  }
  __asm { vucomiss xmm14, xmm15 }
  v370 = -1;
  if ( v368 )
    v370 = 0;
  v371 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) == v370;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v370 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v372 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (5)", v576);
    v371 = !v372;
    if ( v372 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+14h]
    vucomiss xmm0, dword ptr [rbp+4]
  }
  v374 = -1;
  if ( v371 )
    v374 = 0;
  v375 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) == v374;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v374 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v376 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (6)", v576);
    v375 = !v376;
    if ( v376 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vucomiss xmm0, dword ptr [rbp+0]
  }
  v378 = -1;
  if ( v375 )
    v378 = 0;
  v379 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) == v378;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v378 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v380 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (7)", v576);
    v379 = !v380;
    if ( v380 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vucomiss xmm0, dword ptr [rbp+8]
  }
  v382 = -1;
  if ( v379 )
    v382 = 0;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v382 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (8)", v576) )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+20h]
    vcmpneq_oqps ymm0, ymm0, ymm0
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+40h], ymm0
  }
  if ( _EAX )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (1)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (2)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (3)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (4)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (5)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (6)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (7)", v576) )
      __debugbreak();
  }
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpNeqfp (8)", v576) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovaps xmm15, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+4], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+10h], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm4, xmm0
    vmovaps xmm0, xmm15
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovaps xmm0, xmm14
    vinsertps xmm0, xmm0, dword ptr [rbp+0], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+0Ch], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 30h ; '0'
    vmovaps xmm2, xmm7
    vinsertps xmm2, xmm2, xmm8, 10h
    vinsertps xmm2, xmm2, xmm10, 20h ; ' '
    vcomiss xmm6, xmm7
    vinsertps xmm2, xmm2, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vcmple_oqps ymm1, ymm0, ymm3
  }
  v450 = 0;
  __asm { vmovd   eax, xmm1 }
  if ( !v170 )
    v450 = -1;
  __asm { vmovups ymmword ptr [rbp+40h], ymm1 }
  v452 = _EAX < v450;
  if ( _EAX != v450 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v453 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (1)", v576);
    v452 = 0;
    if ( v453 )
      __debugbreak();
  }
  __asm { vcomiss xmm9, xmm8 }
  v454 = 0;
  if ( !v452 )
    v454 = -1;
  v455 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) < v454;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v454 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v456 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (2)", v576);
    v455 = 0;
    if ( v456 )
      __debugbreak();
  }
  __asm { vcomiss xmm11, xmm10 }
  v457 = 0;
  if ( !v455 )
    v457 = -1;
  v458 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) < v457;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v457 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v459 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (3)", v576);
    v458 = 0;
    if ( v459 )
      __debugbreak();
  }
  __asm { vcomiss xmm13, xmm12 }
  v460 = 0;
  if ( !v458 )
    v460 = -1;
  v461 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) < v460;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v460 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v462 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (4)", v576);
    v461 = 0;
    if ( v462 )
      __debugbreak();
  }
  __asm { vcomiss xmm15, xmm14 }
  v463 = 0;
  if ( !v461 )
    v463 = -1;
  v464 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) < v463;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v463 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v465 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (5)", v576);
    v464 = 0;
    if ( v465 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vcomiss xmm0, dword ptr [rbp+0]
  }
  v467 = 0;
  if ( !v464 )
    v467 = -1;
  v468 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) < v467;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v467 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v469 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (6)", v576);
    v468 = 0;
    if ( v469 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vcomiss xmm0, dword ptr [rbp+0Ch]
  }
  v471 = 0;
  if ( !v468 )
    v471 = -1;
  v472 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) < v471;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v471 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v473 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (7)", v576);
    v472 = 0;
    if ( v473 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+14h]
    vcomiss xmm0, dword ptr [rbp+8]
  }
  v475 = 0;
  if ( !v472 )
    v475 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v475 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLefp (8)", v576) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovaps xmm15, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+4], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vmovss  dword ptr [rbp+10h], xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm2, xmm6
    vinsertps xmm2, xmm2, xmm9, 10h
    vinsertps xmm2, xmm2, xmm11, 20h ; ' '
    vmovaps xmm1, xmm15
    vinsertps xmm1, xmm1, dword ptr [rbp+4], 10h
    vinsertps xmm1, xmm1, dword ptr [rbp+10h], 20h ; ' '
    vinsertps xmm2, xmm2, xmm13, 30h ; '0'
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vinsertf128 ymm4, ymm2, xmm1, 1
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm3, xmm7
    vinsertps xmm3, xmm3, xmm8, 10h
    vinsertps xmm3, xmm3, xmm10, 20h ; ' '
    vcomiss xmm6, xmm7
    vmovaps xmm1, xmm14
    vinsertps xmm1, xmm1, dword ptr [rbp+0], 10h
    vinsertps xmm1, xmm1, dword ptr [rbp+0Ch], 20h ; ' '
    vinsertps xmm1, xmm1, dword ptr [rbp+8], 30h ; '0'
    vinsertps xmm3, xmm3, xmm12, 30h ; '0'
    vinsertf128 ymm0, ymm3, xmm1, 1
    vcmplt_oqps ymm2, ymm0, ymm4
  }
  v539 = 0;
  __asm { vmovd   eax, xmm2 }
  if ( !v170 && !v263 )
    v539 = -1;
  __asm { vmovups ymmword ptr [rbp+40h], ymm2 }
  v541 = _EAX <= v539;
  if ( _EAX != v539 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v542 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (1)", v576);
    v541 = !v542;
    if ( v542 )
      __debugbreak();
  }
  __asm { vcomiss xmm9, xmm8 }
  v543 = 0;
  if ( !v541 )
    v543 = -1;
  v544 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) <= v543;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x44) != v543 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v545 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (2)", v576);
    v544 = !v545;
    if ( v545 )
      __debugbreak();
  }
  __asm { vcomiss xmm11, xmm10 }
  v546 = 0;
  if ( !v544 )
    v546 = -1;
  v547 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) <= v546;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) != v546 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v548 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (3)", v576);
    v547 = !v548;
    if ( v548 )
      __debugbreak();
  }
  __asm { vcomiss xmm13, xmm12 }
  v549 = 0;
  if ( !v547 )
    v549 = -1;
  v550 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) <= v549;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x4C) != v549 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v551 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (4)", v576);
    v550 = !v551;
    if ( v551 )
      __debugbreak();
  }
  __asm { vcomiss xmm15, xmm14 }
  v552 = 0;
  if ( !v550 )
    v552 = -1;
  v553 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) <= v552;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) != v552 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v554 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (5)", v576);
    v553 = !v554;
    if ( v554 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vcomiss xmm0, dword ptr [rbp+0]
  }
  v556 = 0;
  if ( !v553 )
    v556 = -1;
  v557 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) <= v556;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x54) != v556 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    v558 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (6)", v576);
    v557 = !v558;
    if ( v558 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vcomiss xmm0, dword ptr [rbp+0Ch]
  }
  v560 = 0;
  if ( !v557 )
    v560 = -1;
  v561 = *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) <= v560;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x58) != v560 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    LOBYTE(v560) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (7)", v576);
    v561 = (_BYTE)v560 == 0;
    if ( (_BYTE)v560 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+14h]
    vcomiss xmm0, dword ptr [rbp+8]
  }
  if ( !v561 )
    v68 = -1;
  if ( *(_DWORD *)(((unsigned __int64)v577 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) != v68 )
  {
    LODWORD(v576) = g_unitSavedSeed;
    LOBYTE(v560) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float8CmpLtfp (8)", v576);
    if ( (_BYTE)v560 )
      __debugbreak();
  }
  _R11 = &v578;
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
  return v560;
}

/*
==============
Float8MathTest
==============
*/
void Float8MathTest()
{
  char v72; 
  bool v73; 
  bool v111; 
  bool v117; 
  bool v124; 
  bool v131; 
  bool v139; 
  bool v146; 
  bool v153; 
  bool v160; 
  bool v165; 
  bool v167; 
  bool v169; 
  bool v171; 
  bool v175; 
  bool v177; 
  bool v179; 
  char v203; 
  char v204; 
  bool v257; 
  bool v263; 
  bool v269; 
  bool v274; 
  bool v280; 
  bool v285; 
  bool v290; 
  char v333; 
  bool v358; 
  bool v363; 
  bool v368; 
  bool v374; 
  bool v381; 
  bool v387; 
  bool v393; 
  char v437; 
  bool v462; 
  bool v467; 
  bool v472; 
  bool v478; 
  bool v485; 
  bool v491; 
  bool v497; 
  char v541; 
  bool v566; 
  bool v571; 
  bool v576; 
  bool v582; 
  bool v589; 
  bool v595; 
  bool v601; 
  char v645; 
  bool v670; 
  bool v675; 
  bool v680; 
  bool v686; 
  bool v693; 
  bool v699; 
  bool v705; 
  char v734; 
  bool v753; 
  bool v758; 
  bool v763; 
  bool v768; 
  bool v774; 
  bool v779; 
  bool v784; 
  bool v812; 
  bool v828; 
  bool v831; 
  bool v834; 
  bool v837; 
  bool v841; 
  bool v845; 
  bool v849; 
  bool v876; 
  bool v890; 
  bool v893; 
  bool v896; 
  bool v899; 
  bool v903; 
  bool v906; 
  bool v910; 
  bool v954; 
  bool v977; 
  bool v980; 
  bool v983; 
  bool v987; 
  bool v992; 
  bool v996; 
  bool v1000; 
  bool v1044; 
  bool v1067; 
  bool v1070; 
  bool v1073; 
  bool v1077; 
  bool v1082; 
  bool v1086; 
  bool v1090; 
  bool v1117; 
  bool v1136; 
  bool v1140; 
  bool v1144; 
  bool v1148; 
  bool v1153; 
  bool v1157; 
  bool v1162; 
  __int64 v1177; 
  unsigned int v1178; 
  char v1179; 
  char v1180; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RBP = (unsigned __int64)&v1179 & 0xFFFFFFFFFFFFFFE0ui64;
  __asm
  {
    vmovss  xmm9, cs:__real@41000000
    vmovss  xmm10, cs:__real@c1000000
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+3Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+24h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+38h], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+2Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+44h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+1Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+34h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+30h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+40h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+28h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+18h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm4, xmm0
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm0, dword ptr [rbp+40h]
    vinsertps xmm0, xmm0, dword ptr [rbp+28h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+18h], 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm15, 10h
    vinsertps xmm1, xmm1, dword ptr [rbp+34h], 20h ; ' '
    vinsertps xmm1, xmm1, dword ptr [rbp+30h], 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovss  xmm0, dword ptr [rbp+44h]
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+1Ch], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 30h ; '0'
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm13, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm1, xmm1, dword ptr [rbp+3Ch], 30h ; '0'
    vmovss  xmm11, cs:__real@3a83126f
    vmovaps xmm2, xmm7
    vinsertps xmm2, xmm2, xmm14, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, dword ptr [rbp+2Ch], 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vmulps  ymm4, ymm3, ymm0
    vmovss  xmm0, dword ptr [rbp+24h]
    vinsertps xmm0, xmm0, dword ptr [rbp+14h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+0Ch], 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vaddps  ymm0, ymm4, ymm0
    vextractf128 xmm12, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm1, xmm0, xmm8
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm2, xmm12, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm11
  }
  if ( !v72 )
  {
    v1178 = g_unitSavedSeed;
    v111 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X0 component out of range", "Float8Mad", v1178);
    v72 = 0;
    v73 = !v111;
    if ( v111 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm15, xmm14
    vaddss  xmm1, xmm0, xmm13
    vshufps xmm2, xmm12, xmm12, 55h ; 'U'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm11
  }
  if ( !v72 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v117 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y0 component out of range", "Float8Mad", v1177);
    v72 = 0;
    v73 = !v117;
    if ( v117 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+34h]
    vmulss  xmm0, xmm0, dword ptr [rbp+38h]
    vaddss  xmm1, xmm0, dword ptr [rbp+20h]
    vshufps xmm2, xmm12, xmm12, 0AAh ; 'ª'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm11
  }
  if ( !v72 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v124 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z0 component out of range", "Float8Mad", v1177);
    v72 = 0;
    v73 = !v124;
    if ( v124 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+30h]
    vmulss  xmm0, xmm0, dword ptr [rbp+2Ch]
    vaddss  xmm1, xmm0, dword ptr [rbp+3Ch]
    vshufps xmm2, xmm12, xmm12, 0FFh
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm11
  }
  if ( !v72 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v131 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W0 component out of range", "Float8Mad", v1177);
    v72 = 0;
    v73 = !v131;
    if ( v131 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmovss  xmm0, dword ptr [rbp+40h]
    vmulss  xmm0, xmm0, dword ptr [rbp+44h]
    vaddss  xmm1, xmm0, dword ptr [rbp+24h]
    vsubss  xmm2, xmm6, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm11
  }
  if ( !v72 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v139 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X1 component out of range", "Float8Mad", v1177);
    v72 = 0;
    v73 = !v139;
    if ( v139 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+28h]
    vmulss  xmm0, xmm0, dword ptr [rbp+10h]
    vaddss  xmm1, xmm0, dword ptr [rbp+14h]
    vshufps xmm2, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm11
  }
  if ( !v72 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v146 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y1 component out of range", "Float8Mad", v1177);
    v72 = 0;
    v73 = !v146;
    if ( v146 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+18h]
    vmulss  xmm0, xmm0, dword ptr [rbp+1Ch]
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vshufps xmm2, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm11
  }
  if ( !v72 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v153 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z1 component out of range", "Float8Mad", v1177);
    v72 = 0;
    v73 = !v153;
    if ( v153 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm0, dword ptr [rbp+8]
    vaddss  xmm1, xmm0, dword ptr [rbp+0Ch]
    vshufps xmm2, xmm6, xmm6, 0FFh
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm11
  }
  if ( !v72 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v160 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W1 component out of range", "Float8Mad", v1177);
    v73 = !v160;
    if ( v160 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@7f800000
    vxorps  xmm0, xmm0, xmm0
    vrcpps  ymm0, ymm0
    vextractf128 xmm7, ymm0, 0
    vucomiss xmm7, xmm6
  }
  if ( !v73 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v165 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8RcpEstimateZero", v1177);
    v73 = !v165;
    if ( v165 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm0, xmm6
  }
  if ( !v73 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v167 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8RcpEstimateZero", v1177);
    v73 = !v167;
    if ( v167 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm0, xmm6
  }
  if ( !v73 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v169 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8RcpEstimateZero", v1177);
    v73 = !v169;
    if ( v169 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vucomiss xmm0, xmm6
  }
  if ( !v73 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v171 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8RcpEstimateZero", v1177);
    v73 = !v171;
    if ( v171 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vrcpps  ymm0, ymm1
    vextractf128 xmm7, ymm0, 1
    vucomiss xmm7, xmm6
  }
  if ( !v73 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v175 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8RcpEstimateZero", v1177);
    v73 = !v175;
    if ( v175 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm0, xmm6
  }
  if ( !v73 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v177 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8RcpEstimateZero", v1177);
    v73 = !v177;
    if ( v177 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm0, xmm6
  }
  if ( !v73 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v179 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8RcpEstimateZero", v1177);
    v73 = !v179;
    if ( v179 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vucomiss xmm0, xmm6
  }
  if ( !v73 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8RcpEstimateZero", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+30h], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+2Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@3dcccccd
    vmovss  xmm2, cs:__real@bdcccccd
    vmovss  dword ptr [rbp+34h], xmm0
    vmovaps xmm4, xmm0
    vandps  xmm0, xmm6, xmm8
    vcomiss xmm0, xmm1
    vxorps  xmm5, xmm5, xmm5
  }
  if ( v203 | v204 )
  {
    __asm
    {
      vcmpless xmm0, xmm5, xmm6
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm6, xmm0
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm12, xmm8
    vcomiss xmm0, xmm1
  }
  if ( v203 | v204 )
  {
    __asm
    {
      vcmpless xmm0, xmm5, xmm12
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm12, xmm0
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm13, xmm8
    vcomiss xmm0, xmm1
  }
  if ( v203 | v204 )
  {
    __asm
    {
      vcmpless xmm0, xmm5, xmm13
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm13, xmm0
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm14, xmm8
    vcomiss xmm0, xmm1
  }
  if ( v203 | v204 )
  {
    __asm
    {
      vcmpless xmm0, xmm5, xmm14
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm14, xmm0
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm15, xmm8
    vcomiss xmm0, xmm1
  }
  if ( v203 | v204 )
  {
    __asm
    {
      vcmpless xmm0, xmm5, xmm15
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm15, xmm0
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm7, xmm8
    vcomiss xmm0, xmm1
  }
  if ( v203 | v204 )
  {
    __asm
    {
      vcmpless xmm0, xmm5, xmm7
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovss  dword ptr [rbp+30h], xmm0
      vmovaps xmm7, xmm0
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+2Ch]
    vandps  xmm0, xmm3, xmm8
    vcomiss xmm0, xmm1
  }
  if ( v203 | v204 )
  {
    __asm
    {
      vcmpless xmm0, xmm5, xmm3
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovss  dword ptr [rbp+2Ch], xmm0
      vmovaps xmm3, xmm0
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm4, xmm8
    vcomiss xmm0, xmm1
  }
  if ( v203 | v204 )
  {
    __asm
    {
      vcmpless xmm0, xmm5, xmm4
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovss  dword ptr [rbp+34h], xmm0
      vmovaps xmm4, xmm0
      vmovss  dword ptr [rbp+0], xmm0
    }
  }
  __asm
  {
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm12, 10h
    vinsertps xmm1, xmm1, xmm13, 20h ; ' '
    vinsertps xmm1, xmm1, xmm14, 30h ; '0'
    vmovaps xmm0, xmm15
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm3, 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vrcpps  ymm0, ymm0
    vextractf128 xmm7, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm0, xmm0, xmm6
    vmovss  xmm6, cs:__real@3b83126f
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm6
  }
  if ( !v203 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v257 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X0 component out of range", "Float8RcpEstimate", v1177);
    v203 = 0;
    if ( v257 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm0, xmm0, xmm12
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm6
  }
  if ( !v203 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v263 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y0 component out of range", "Float8RcpEstimate", v1177);
    v203 = 0;
    if ( v263 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm12, cs:__real@3f800000
    vdivss  xmm0, xmm12, xmm13
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm6
  }
  if ( !v203 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v269 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z0 component out of range", "Float8RcpEstimate", v1177);
    v203 = 0;
    if ( v269 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0FFh
    vdivss  xmm0, xmm12, xmm14
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm6
  }
  if ( !v203 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v274 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W0 component out of range", "Float8RcpEstimate", v1177);
    v203 = 0;
    if ( v274 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm7, ymm0, 1
    vdivss  xmm0, xmm12, xmm15
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm6
  }
  if ( !v203 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v280 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X1 component out of range", "Float8RcpEstimate", v1177);
    v203 = 0;
    if ( v280 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm0, xmm12, dword ptr [rbp+30h]
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm6
  }
  if ( !v203 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v285 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y1 component out of range", "Float8RcpEstimate", v1177);
    v203 = 0;
    if ( v285 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm0, xmm12, dword ptr [rbp+2Ch]
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm6
  }
  if ( !v203 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v290 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z1 component out of range", "Float8RcpEstimate", v1177);
    v203 = 0;
    if ( v290 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm0, xmm12, dword ptr [rbp+34h]
    vshufps xmm1, xmm7, xmm7, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm6
  }
  if ( !v203 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W1 component out of range", "Float8RcpEstimate", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+1Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+28h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+24h], xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+18h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm4, xmm0
    vmovss  xmm0, dword ptr [rbp+4]
    vinsertps xmm0, xmm0, dword ptr [rbp+18h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm14, 10h
    vinsertps xmm1, xmm1, xmm12, 20h ; ' '
    vinsertps xmm1, xmm1, dword ptr [rbp+0Ch], 30h ; '0'
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovss  xmm0, dword ptr [rbp+1Ch]
    vinsertps xmm0, xmm0, dword ptr [rbp+14h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+28h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+24h], 30h ; '0'
    vmovaps xmm2, xmm7
    vinsertps xmm2, xmm2, xmm13, 10h
    vinsertps xmm2, xmm2, xmm15, 20h ; ' '
    vinsertps xmm2, xmm2, dword ptr [rbp+8], 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vaddps  ymm0, ymm3, ymm0
    vextractf128 xmm12, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vaddss  xmm0, xmm6, xmm7
    vsubss  xmm1, xmm12, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v333 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v358 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X0 component out of range", "Float8Add", v1177);
    v333 = 0;
    if ( v358 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm12, xmm12, 55h ; 'U'
    vaddss  xmm0, xmm14, xmm13
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v333 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v363 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y0 component out of range", "Float8Add", v1177);
    v333 = 0;
    if ( v363 )
      __debugbreak();
  }
  __asm
  {
    vaddss  xmm0, xmm15, dword ptr [rbp+0]
    vshufps xmm1, xmm12, xmm12, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v333 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v368 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z0 component out of range", "Float8Add", v1177);
    v333 = 0;
    if ( v368 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vaddss  xmm0, xmm0, dword ptr [rbp+8]
    vshufps xmm1, xmm12, xmm12, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v333 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v374 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W0 component out of range", "Float8Add", v1177);
    v333 = 0;
    if ( v374 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmovss  xmm0, dword ptr [rbp+4]
    vaddss  xmm0, xmm0, dword ptr [rbp+1Ch]
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v333 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v381 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X1 component out of range", "Float8Add", v1177);
    v333 = 0;
    if ( v381 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+18h]
    vaddss  xmm0, xmm0, dword ptr [rbp+14h]
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v333 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v387 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y1 component out of range", "Float8Add", v1177);
    v333 = 0;
    if ( v387 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vaddss  xmm0, xmm0, dword ptr [rbp+28h]
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v333 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v393 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z1 component out of range", "Float8Add", v1177);
    v333 = 0;
    if ( v393 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+20h]
    vaddss  xmm0, xmm0, dword ptr [rbp+24h]
    vshufps xmm1, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v333 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W1 component out of range", "Float8Add", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+18h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+24h], xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+1Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+28h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm5, xmm0
    vmovss  xmm0, dword ptr [rbp+4]
    vinsertps xmm0, xmm0, dword ptr [rbp+18h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+24h], 30h ; '0'
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm13, 10h
    vinsertps xmm1, xmm1, xmm15, 20h ; ' '
    vinsertps xmm1, xmm1, dword ptr [rbp+0Ch], 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovss  xmm0, dword ptr [rbp+1Ch]
    vinsertps xmm0, xmm0, dword ptr [rbp+14h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+28h], 20h ; ' '
    vinsertps xmm0, xmm0, xmm5, 30h ; '0'
    vmovaps xmm2, xmm6
    vinsertps xmm2, xmm2, xmm14, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, dword ptr [rbp+8], 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vsubps  ymm0, ymm3, ymm0
    vextractf128 xmm12, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vsubss  xmm0, xmm7, xmm6
    vsubss  xmm1, xmm12, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v437 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v462 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X0 component out of range", "Float8Sub", v1177);
    v437 = 0;
    if ( v462 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm12, xmm12, 55h ; 'U'
    vsubss  xmm0, xmm13, xmm14
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v437 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v467 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y0 component out of range", "Float8Sub", v1177);
    v437 = 0;
    if ( v467 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm15, dword ptr [rbp+0]
    vshufps xmm1, xmm12, xmm12, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v437 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v472 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z0 component out of range", "Float8Sub", v1177);
    v437 = 0;
    if ( v472 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vsubss  xmm0, xmm0, dword ptr [rbp+8]
    vshufps xmm1, xmm12, xmm12, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v437 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v478 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W0 component out of range", "Float8Sub", v1177);
    v437 = 0;
    if ( v478 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmovss  xmm0, dword ptr [rbp+4]
    vsubss  xmm0, xmm0, dword ptr [rbp+1Ch]
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v437 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v485 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X1 component out of range", "Float8Sub", v1177);
    v437 = 0;
    if ( v485 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+18h]
    vsubss  xmm0, xmm0, dword ptr [rbp+14h]
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v437 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v491 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y1 component out of range", "Float8Sub", v1177);
    v437 = 0;
    if ( v491 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vsubss  xmm0, xmm0, dword ptr [rbp+28h]
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v437 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v497 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z1 component out of range", "Float8Sub", v1177);
    v437 = 0;
    if ( v497 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+24h]
    vsubss  xmm0, xmm0, dword ptr [rbp+20h]
    vshufps xmm1, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v437 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W1 component out of range", "Float8Sub", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+1Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+28h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+24h], xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+18h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm4, xmm0
    vmovss  xmm0, dword ptr [rbp+4]
    vinsertps xmm0, xmm0, dword ptr [rbp+18h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm14, 10h
    vinsertps xmm1, xmm1, xmm12, 20h ; ' '
    vinsertps xmm1, xmm1, dword ptr [rbp+0Ch], 30h ; '0'
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovss  xmm0, dword ptr [rbp+1Ch]
    vinsertps xmm0, xmm0, dword ptr [rbp+14h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+28h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+24h], 30h ; '0'
    vmovaps xmm2, xmm7
    vinsertps xmm2, xmm2, xmm13, 10h
    vinsertps xmm2, xmm2, xmm15, 20h ; ' '
    vinsertps xmm2, xmm2, dword ptr [rbp+8], 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vmulps  ymm0, ymm3, ymm0
    vextractf128 xmm12, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vmulss  xmm0, xmm6, xmm7
    vsubss  xmm1, xmm12, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v541 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v566 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X0 component out of range", "Float8Mul", v1177);
    v541 = 0;
    if ( v566 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm12, xmm12, 55h ; 'U'
    vmulss  xmm0, xmm14, xmm13
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v541 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v571 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y0 component out of range", "Float8Mul", v1177);
    v541 = 0;
    if ( v571 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm15, dword ptr [rbp+0]
    vshufps xmm1, xmm12, xmm12, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v541 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v576 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z0 component out of range", "Float8Mul", v1177);
    v541 = 0;
    if ( v576 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vmulss  xmm0, xmm0, dword ptr [rbp+8]
    vshufps xmm1, xmm12, xmm12, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v541 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v582 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W0 component out of range", "Float8Mul", v1177);
    v541 = 0;
    if ( v582 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmovss  xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm0, dword ptr [rbp+1Ch]
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v541 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v589 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X1 component out of range", "Float8Mul", v1177);
    v541 = 0;
    if ( v589 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+18h]
    vmulss  xmm0, xmm0, dword ptr [rbp+14h]
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v541 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v595 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y1 component out of range", "Float8Mul", v1177);
    v541 = 0;
    if ( v595 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vmulss  xmm0, xmm0, dword ptr [rbp+28h]
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v541 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v601 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z1 component out of range", "Float8Mul", v1177);
    v541 = 0;
    if ( v601 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+20h]
    vmulss  xmm0, xmm0, dword ptr [rbp+24h]
    vshufps xmm1, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v541 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W1 component out of range", "Float8Mul", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+18h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+24h], xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+1Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+28h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm5, xmm0
    vmovss  xmm0, dword ptr [rbp+4]
    vinsertps xmm0, xmm0, dword ptr [rbp+18h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+24h], 30h ; '0'
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm13, 10h
    vinsertps xmm1, xmm1, xmm15, 20h ; ' '
    vinsertps xmm1, xmm1, dword ptr [rbp+0Ch], 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovss  xmm0, dword ptr [rbp+1Ch]
    vinsertps xmm0, xmm0, dword ptr [rbp+14h], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+28h], 20h ; ' '
    vinsertps xmm0, xmm0, xmm5, 30h ; '0'
    vmovaps xmm2, xmm6
    vinsertps xmm2, xmm2, xmm14, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, dword ptr [rbp+8], 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vdivps  ymm0, ymm3, ymm0
    vextractf128 xmm12, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vdivss  xmm0, xmm7, xmm6
    vsubss  xmm1, xmm12, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v645 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v670 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X0 component out of range", "Float8Div", v1177);
    v645 = 0;
    if ( v670 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm12, xmm12, 55h ; 'U'
    vdivss  xmm0, xmm13, xmm14
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v645 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v675 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y0 component out of range", "Float8Div", v1177);
    v645 = 0;
    if ( v675 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm0, xmm15, dword ptr [rbp+0]
    vshufps xmm1, xmm12, xmm12, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v645 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v680 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z0 component out of range", "Float8Div", v1177);
    v645 = 0;
    if ( v680 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vdivss  xmm0, xmm0, dword ptr [rbp+8]
    vshufps xmm1, xmm12, xmm12, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v645 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v686 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W0 component out of range", "Float8Div", v1177);
    v645 = 0;
    if ( v686 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmovss  xmm0, dword ptr [rbp+4]
    vdivss  xmm0, xmm0, dword ptr [rbp+1Ch]
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v645 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v693 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X1 component out of range", "Float8Div", v1177);
    v645 = 0;
    if ( v693 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+18h]
    vdivss  xmm0, xmm0, dword ptr [rbp+14h]
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v645 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v699 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y1 component out of range", "Float8Div", v1177);
    v645 = 0;
    if ( v699 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+10h]
    vdivss  xmm0, xmm0, dword ptr [rbp+28h]
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v645 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v705 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z1 component out of range", "Float8Div", v1177);
    v645 = 0;
    if ( v705 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+24h]
    vdivss  xmm0, xmm0, dword ptr [rbp+20h]
    vshufps xmm1, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v645 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W1 component out of range", "Float8Div", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12
    vinsertps xmm0, xmm0, dword ptr [rbp+0Ch], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 30h ; '0'
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm13, 10h
    vinsertps xmm1, xmm1, xmm14, 20h ; ' '
    vinsertps xmm1, xmm1, xmm15, 30h ; '0'
    vinsertf128 ymm1, ymm1, xmm0, 1
    vmovaps xmm0, xmm7
    vshufps xmm0, xmm0, xmm0, 0
    vinsertf128 ymm0, ymm0, xmm0, 1
    vmulps  ymm0, ymm1, ymm0
    vextractf128 xmm12, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vmulss  xmm0, xmm7, xmm6
    vsubss  xmm1, xmm12, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v734 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v753 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X0 component out of range", "Float8MulFloat", v1177);
    v734 = 0;
    if ( v753 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm12, xmm12, 55h ; 'U'
    vmulss  xmm0, xmm7, xmm13
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v734 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v758 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y0 component out of range", "Float8MulFloat", v1177);
    v734 = 0;
    if ( v758 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm12, xmm12, 0AAh ; 'ª'
    vmulss  xmm0, xmm7, xmm14
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v734 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v763 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z0 component out of range", "Float8MulFloat", v1177);
    v734 = 0;
    if ( v763 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm12, xmm12, 0FFh
    vmulss  xmm0, xmm7, xmm15
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v734 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v768 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W0 component out of range", "Float8MulFloat", v1177);
    v734 = 0;
    if ( v768 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmulss  xmm0, xmm7, dword ptr [rbp+0]
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v734 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v774 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X1 component out of range", "Float8MulFloat", v1177);
    v734 = 0;
    if ( v774 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rbp+0Ch]
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v734 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v779 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y1 component out of range", "Float8MulFloat", v1177);
    v734 = 0;
    if ( v779 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rbp+8]
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v734 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v784 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z1 component out of range", "Float8MulFloat", v1177);
    v734 = 0;
    if ( v784 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rbp+4]
    vshufps xmm1, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm8
    vcomiss xmm1, xmm11
  }
  if ( !v734 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W1 component out of range", "Float8MulFloat", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+38h], xmm0
    vmovaps xmm2, xmm0
    vmovaps xmm0, xmm15
    vinsertps xmm0, xmm0, xmm7, 10h
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm12, 10h
    vinsertps xmm1, xmm1, xmm13, 20h ; ' '
    vinsertps xmm1, xmm1, xmm14, 30h ; '0'
    vinsertf128 ymm1, ymm1, xmm0, 1
    vxorps  xmm0, xmm0, xmm0
    vsubps  ymm0, ymm0, ymm1
    vextractf128 xmm11, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vxorps  xmm0, xmm6, xmm7
    vucomiss xmm11, xmm0
  }
  if ( !v812 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v828 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Negate", v1177);
    v812 = !v828;
    if ( v828 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm11, xmm11, 55h ; 'U'
    vxorps  xmm0, xmm12, xmm7
    vucomiss xmm1, xmm0
  }
  if ( !v812 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v831 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Negate", v1177);
    v812 = !v831;
    if ( v831 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm11, xmm11, 0AAh ; 'ª'
    vxorps  xmm0, xmm13, xmm7
    vucomiss xmm1, xmm0
  }
  if ( !v812 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v834 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Negate", v1177);
    v812 = !v834;
    if ( v834 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm11, xmm11, 0FFh
    vxorps  xmm0, xmm14, xmm7
    vucomiss xmm1, xmm0
  }
  if ( !v812 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v837 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Negate", v1177);
    v812 = !v837;
    if ( v837 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vxorps  xmm0, xmm15, xmm7
    vucomiss xmm6, xmm0
  }
  if ( !v812 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v841 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Negate", v1177);
    v812 = !v841;
    if ( v841 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vxorps  xmm0, xmm0, xmm7
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm1, xmm0
  }
  if ( !v812 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v845 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Negate", v1177);
    v812 = !v845;
    if ( v845 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+20h]
    vxorps  xmm0, xmm0, xmm7
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm1, xmm0
  }
  if ( !v812 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v849 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Negate", v1177);
    v812 = !v849;
    if ( v849 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+38h]
    vxorps  xmm0, xmm0, xmm7
    vshufps xmm1, xmm6, xmm6, 0FFh
    vucomiss xmm1, xmm0
  }
  if ( !v812 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Negate", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm3, xmm0
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm11, 10h
    vmovaps xmm0, xmm14
    vinsertps xmm0, xmm0, xmm15, 10h
    vinsertps xmm0, xmm0, xmm7, 20h ; ' '
    vinsertps xmm1, xmm1, xmm12, 20h ; ' '
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vinsertps xmm1, xmm1, xmm13, 30h ; '0'
    vinsertf128 ymm0, ymm1, xmm0, 1
    vandps  ymm0, ymm0, cs:__ymm@7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff
    vextractf128 xmm7, ymm0, 0
    vandps  xmm6, xmm6, xmm8
    vucomiss xmm7, xmm6
    vmovups ymmword ptr [rbp+60h], ymm0
  }
  if ( !v876 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v890 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Abs", v1177);
    v876 = !v890;
    if ( v890 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vandps  xmm11, xmm11, xmm8
    vucomiss xmm0, xmm11
  }
  if ( !v876 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v893 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Abs", v1177);
    v876 = !v893;
    if ( v893 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vandps  xmm12, xmm12, xmm8
    vucomiss xmm0, xmm12
  }
  if ( !v876 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v896 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Abs", v1177);
    v876 = !v896;
    if ( v896 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vandps  xmm13, xmm13, xmm8
    vucomiss xmm0, xmm13
  }
  if ( !v876 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v899 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Abs", v1177);
    v876 = !v899;
    if ( v899 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vandps  xmm14, xmm14, xmm8
    vucomiss xmm6, xmm14
  }
  if ( !v876 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v903 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Abs", v1177);
    v876 = !v903;
    if ( v903 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm15, xmm15, xmm8
    vucomiss xmm0, xmm15
  }
  if ( !v876 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v906 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Abs", v1177);
    v876 = !v906;
    if ( v906 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+0]
    vandps  xmm1, xmm1, xmm8
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm1
  }
  if ( !v876 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v910 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Abs", v1177);
    v876 = !v910;
    if ( v910 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+20h]
    vandps  xmm1, xmm1, xmm8
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm1
  }
  if ( !v876 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Abs", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+1Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+18h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm4, xmm0
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+18h], 20h ; ' '
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm12, 10h
    vinsertps xmm1, xmm1, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm8, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovss  xmm0, dword ptr [rbp+8]
    vinsertps xmm0, xmm0, dword ptr [rbp+1Ch], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+14h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 30h ; '0'
    vmovaps xmm2, xmm7
    vinsertps xmm2, xmm2, xmm11, 10h
    vinsertps xmm2, xmm2, xmm13, 20h ; ' '
    vinsertps xmm2, xmm2, xmm15, 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vminps  ymm0, ymm0, ymm3
    vextractf128 xmm8, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vminss  xmm0, xmm6, xmm7
    vucomiss xmm8, xmm0
  }
  if ( !v954 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v977 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Min", v1177);
    v954 = !v977;
    if ( v977 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm8, xmm8, 55h ; 'U'
    vminss  xmm0, xmm12, xmm11
    vucomiss xmm1, xmm0
  }
  if ( !v954 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v980 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Min", v1177);
    v954 = !v980;
    if ( v980 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm8, xmm8, 0AAh ; 'ª'
    vminss  xmm0, xmm14, xmm13
    vucomiss xmm1, xmm0
  }
  if ( !v954 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v983 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Min", v1177);
    v954 = !v983;
    if ( v983 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vminss  xmm0, xmm0, xmm15
    vshufps xmm1, xmm8, xmm8, 0FFh
    vucomiss xmm1, xmm0
  }
  if ( !v954 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v987 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Min", v1177);
    v954 = !v987;
    if ( v987 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vminss  xmm0, xmm0, dword ptr [rbp+8]
    vucomiss xmm6, xmm0
  }
  if ( !v954 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v992 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Min", v1177);
    v954 = !v992;
    if ( v992 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vminss  xmm0, xmm0, dword ptr [rbp+1Ch]
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm1, xmm0
  }
  if ( !v954 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v996 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Min", v1177);
    v954 = !v996;
    if ( v996 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+18h]
    vminss  xmm0, xmm0, dword ptr [rbp+14h]
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm1, xmm0
  }
  if ( !v954 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1000 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Min", v1177);
    v954 = !v1000;
    if ( v1000 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+20h]
    vminss  xmm0, xmm0, dword ptr [rbp+10h]
    vshufps xmm1, xmm6, xmm6, 0FFh
    vucomiss xmm1, xmm0
  }
  if ( !v954 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Min", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+8], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+1Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+14h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+10h], xmm0
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0Ch], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+4], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+18h], xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+20h], xmm0
    vmovaps xmm5, xmm0
    vmovss  xmm0, dword ptr [rbp+8]
    vinsertps xmm0, xmm0, dword ptr [rbp+1Ch], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+14h], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbp+10h], 30h ; '0'
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm11, 10h
    vinsertps xmm1, xmm1, xmm13, 20h ; ' '
    vinsertps xmm1, xmm1, xmm15, 30h ; '0'
    vinsertf128 ymm3, ymm1, xmm0, 1
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+18h], 20h ; ' '
    vinsertps xmm0, xmm0, xmm5, 30h ; '0'
    vmovaps xmm2, xmm6
    vinsertps xmm2, xmm2, xmm12, 10h
    vinsertps xmm2, xmm2, xmm14, 20h ; ' '
    vinsertps xmm2, xmm2, xmm8, 30h ; '0'
    vinsertf128 ymm0, ymm2, xmm0, 1
    vmaxps  ymm0, ymm3, ymm0
    vextractf128 xmm8, ymm0, 0
    vmovups ymmword ptr [rbp+60h], ymm0
    vmaxss  xmm0, xmm6, xmm7
    vucomiss xmm8, xmm0
  }
  if ( !v1044 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1067 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Max", v1177);
    v1044 = !v1067;
    if ( v1067 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm8, xmm8, 55h ; 'U'
    vmaxss  xmm0, xmm12, xmm11
    vucomiss xmm1, xmm0
  }
  if ( !v1044 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1070 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Max", v1177);
    v1044 = !v1070;
    if ( v1070 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm8, xmm8, 0AAh ; 'ª'
    vmaxss  xmm0, xmm14, xmm13
    vucomiss xmm1, xmm0
  }
  if ( !v1044 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1073 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Max", v1177);
    v1044 = !v1073;
    if ( v1073 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmaxss  xmm0, xmm0, xmm15
    vshufps xmm1, xmm8, xmm8, 0FFh
    vucomiss xmm1, xmm0
  }
  if ( !v1044 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1077 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Max", v1177);
    v1044 = !v1077;
    if ( v1077 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmovss  xmm0, dword ptr [rbp+0Ch]
    vmaxss  xmm0, xmm0, dword ptr [rbp+8]
    vucomiss xmm6, xmm0
  }
  if ( !v1044 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1082 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Max", v1177);
    v1044 = !v1082;
    if ( v1082 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmaxss  xmm0, xmm0, dword ptr [rbp+1Ch]
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm1, xmm0
  }
  if ( !v1044 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1086 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Max", v1177);
    v1044 = !v1086;
    if ( v1086 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+18h]
    vmaxss  xmm0, xmm0, dword ptr [rbp+14h]
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm1, xmm0
  }
  if ( !v1044 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1090 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Max", v1177);
    v1044 = !v1090;
    if ( v1090 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+20h]
    vmaxss  xmm0, xmm0, dword ptr [rbp+10h]
    vshufps xmm1, xmm6, xmm6, 0FFh
    vucomiss xmm1, xmm0
  }
  if ( !v1044 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Max", v1177) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9; max
    vmovaps xmm0, xmm10; min
  }
  g_unitSavedSeed = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbp+0], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm10; min
    vmovaps xmm1, xmm9; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmm9, xmm0
    vmovaps xmm2, xmm6
    vinsertps xmm2, xmm2, xmm11, 10h
    vmovaps xmm1, xmm14
    vinsertps xmm1, xmm1, xmm15, 10h
    vinsertps xmm1, xmm1, xmm7, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, xmm13, 30h ; '0'
    vinsertf128 ymm1, ymm2, xmm1, 1
    vmaxps  ymm3, ymm1, ymm0
    vminps  ymm0, ymm3, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
    vextractf128 xmm7, ymm0, 0
    vxorps  xmm10, xmm10, xmm10
    vmovups ymmword ptr [rbp+60h], ymm0
    vmaxss  xmm0, xmm6, xmm10
    vminss  xmm1, xmm0, xmm8
    vucomiss xmm7, xmm1
  }
  if ( !v1117 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1136 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X0 component", "Float8Saturate", v1177);
    v1117 = !v1136;
    if ( v1136 )
      __debugbreak();
  }
  __asm
  {
    vmaxss  xmm0, xmm11, xmm10
    vminss  xmm1, xmm0, xmm8
    vshufps xmm2, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm2, xmm1
  }
  if ( !v1117 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1140 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y0 component", "Float8Saturate", v1177);
    v1117 = !v1140;
    if ( v1140 )
      __debugbreak();
  }
  __asm
  {
    vmaxss  xmm0, xmm12, xmm10
    vminss  xmm1, xmm0, xmm8
    vshufps xmm2, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm2, xmm1
  }
  if ( !v1117 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1144 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z0 component", "Float8Saturate", v1177);
    v1117 = !v1144;
    if ( v1144 )
      __debugbreak();
  }
  __asm
  {
    vmaxss  xmm0, xmm13, xmm10
    vminss  xmm1, xmm0, xmm8
    vshufps xmm2, xmm7, xmm7, 0FFh
    vucomiss xmm2, xmm1
  }
  if ( !v1117 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1148 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W0 component", "Float8Saturate", v1177);
    v1117 = !v1148;
    if ( v1148 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+60h]
    vextractf128 xmm6, ymm0, 1
    vmaxss  xmm0, xmm14, xmm10
    vminss  xmm1, xmm0, xmm8
    vucomiss xmm6, xmm1
  }
  if ( !v1117 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1153 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X1 component", "Float8Saturate", v1177);
    v1117 = !v1153;
    if ( v1153 )
      __debugbreak();
  }
  __asm
  {
    vmaxss  xmm0, xmm15, xmm10
    vminss  xmm1, xmm0, xmm8
    vshufps xmm2, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm2, xmm1
  }
  if ( !v1117 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1157 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y1 component", "Float8Saturate", v1177);
    v1117 = !v1157;
    if ( v1157 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmaxss  xmm0, xmm0, xmm10
    vminss  xmm1, xmm0, xmm8
    vshufps xmm2, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm2, xmm1
  }
  if ( !v1117 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    v1162 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z1 component", "Float8Saturate", v1177);
    v1117 = !v1162;
    if ( v1162 )
      __debugbreak();
  }
  __asm
  {
    vmaxss  xmm0, xmm9, xmm10
    vminss  xmm1, xmm0, xmm8
    vshufps xmm2, xmm6, xmm6, 0FFh
    vucomiss xmm2, xmm1
  }
  if ( !v1117 )
  {
    LODWORD(v1177) = g_unitSavedSeed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_float8_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W1 component", "Float8Saturate", v1177) )
      __debugbreak();
  }
  _R11 = &v1180;
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

