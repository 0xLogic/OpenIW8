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
  bool v2; 
  unsigned __int64 v3; 
  _BYTE v23[32]; 
  __int64 v24; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
  }
  v3 = (unsigned __int64)v23 ^ _security_cookie;
  v2 = (unsigned __int64)v23 == _security_cookie;
  __asm
  {
    vmovups xmm0, cs:__xmm@4080000040400000400000003f800000
    vcvtps2pd xmm6, xmm0
    vucomisd xmm6, cs:__real@3ff0000000000000
    vmovups [rsp+98h+var_58], xmm0
    vshufps xmm0, xmm0, xmm0, 0EEh ; 'î'
    vcvtps2pd xmm7, xmm0
  }
  if ( (unsigned __int64)v23 != _security_cookie )
  {
    LODWORD(v24) = g_unitSavedSeed_0;
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (double) component", "Double4LoadFloat4", v24);
    v2 = (_BYTE)v3 == 0;
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+var_58+4]
    vcvtss2sd xmm0, xmm0, xmm0
    vunpckhpd xmm1, xmm6, xmm6
    vucomisd xmm1, xmm0
  }
  if ( !v2 )
  {
    LODWORD(v24) = g_unitSavedSeed_0;
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (double) component", "Double4LoadFloat4", v24);
    v2 = (_BYTE)v3 == 0;
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+var_58+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vucomisd xmm7, xmm0
  }
  if ( !v2 )
  {
    LODWORD(v24) = g_unitSavedSeed_0;
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (double) component", "Double4LoadFloat4", v24);
    v2 = (_BYTE)v3 == 0;
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+var_58+0Ch]
    vcvtss2sd xmm0, xmm0, xmm0
    vunpckhpd xmm1, xmm7, xmm7
    vucomisd xmm1, xmm0
  }
  if ( !v2 )
  {
    LODWORD(v24) = g_unitSavedSeed_0;
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (double) component", "Double4LoadFloat4", v24);
    v2 = (_BYTE)v3 == 0;
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  __asm
  {
    vmovupd xmm6, cs:__xmm@40290000000000004029000000000000
    vmovsd  xmm7, cs:__real@4029000000000000
    vucomisd xmm6, xmm7
  }
  if ( !v2 )
  {
    LODWORD(v24) = g_unitSavedSeed_0;
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (double) component", "Double4LoadDouble", v24);
    v2 = (_BYTE)v3 == 0;
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm0, xmm6, xmm6
    vucomisd xmm0, xmm7
  }
  if ( !v2 )
  {
    LODWORD(v24) = g_unitSavedSeed_0;
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (double) component", "Double4LoadDouble", v24);
    v2 = (_BYTE)v3 == 0;
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  __asm { vucomisd xmm6, xmm7 }
  if ( !v2 )
  {
    LODWORD(v24) = g_unitSavedSeed_0;
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (double) component", "Double4LoadDouble", v24);
    v2 = (_BYTE)v3 == 0;
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm0, xmm6, xmm6
    vucomisd xmm0, xmm7
  }
  if ( !v2 )
  {
    LODWORD(v24) = g_unitSavedSeed_0;
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (double) component", "Double4LoadDouble", v24);
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
  return v3;
}

/*
==============
Double4MathTest
==============
*/

void __fastcall Double4MathTest(__int64 a1, __int64 a2, __int64 a3, double _XMM3_8)
{
  char v40; 
  bool v62; 
  bool v65; 
  bool v68; 
  char v96; 
  bool v123; 
  bool v127; 
  bool v130; 
  char v165; 
  bool v188; 
  bool v191; 
  bool v194; 
  char v210; 
  bool v234; 
  bool v238; 
  bool v241; 
  char v276; 
  bool v308; 
  bool v312; 
  bool v315; 
  char v332; 
  bool v361; 
  bool v366; 
  bool v370; 
  char v404; 
  bool v417; 
  bool v422; 
  bool v427; 
  char v462; 
  bool v475; 
  bool v480; 
  bool v485; 
  char v520; 
  bool v533; 
  bool v538; 
  bool v543; 
  char v578; 
  bool v591; 
  bool v596; 
  bool v601; 
  char v627; 
  bool v641; 
  bool v646; 
  bool v650; 
  bool v666; 
  bool v679; 
  bool v682; 
  bool v684; 
  __int64 v698; 
  unsigned int v699; 
  char v704; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps [rsp+118h+var_A8], xmm12
    vmovaps [rsp+118h+var_B8], xmm13
    vmovaps [rsp+118h+var_C8], xmm14
    vmovaps [rsp+118h+var_D8], xmm15
    vmovss  xmm13, cs:__real@41000000
    vmovss  xmm14, cs:__real@c1000000
    vmovaps xmm1, xmm13; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm12, xmm0, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm13; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm11, xmm0, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm13; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm12
    vmovaps xmm2, xmm11
    vcvtss2sd xmm10, xmm0, xmm0
    vunpcklpd xmm9, xmm1, xmm2
    vxorpd  xmm1, xmm1, xmm1
    vmovaps xmm0, xmm10
    vunpcklpd xmm7, xmm0, xmm1
    vmovaps xmm1, xmm13; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm8, xmm0, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm13; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm13; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovsd  xmm15, qword ptr cs:__xmm@7fffffffffffffff7fffffffffffffff
    vmovsd  xmm14, cs:__real@3f50624de0000000
    vcvtss2sd xmm5, xmm0, xmm0
    vmovaps xmm2, xmm6
    vmovaps xmm1, xmm8
    vunpcklpd xmm4, xmm1, xmm2
    vmovaps xmm0, xmm5
    vmulpd  xmm2, xmm4, xmm9
    vxorpd  xmm3, xmm3, xmm3
    vunpcklpd xmm1, xmm0, xmm3
    vmulpd  xmm1, xmm1, xmm7
    vhaddpd xmm0, xmm2, xmm2
    vaddpd  xmm1, xmm0, xmm1
    vmovddup xmm7, xmm1
    vmulsd  xmm1, xmm6, xmm11
    vmulsd  xmm0, xmm8, xmm12
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm5, xmm10
    vaddsd  xmm6, xmm2, xmm1
    vsubsd  xmm0, xmm7, xmm6
    vandpd  xmm0, xmm0, xmm15
    vcomisd xmm0, xmm14
  }
  if ( !v40 )
  {
    v699 = g_unitSavedSeed_0;
    v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double3Dot", v699);
    v40 = 0;
    if ( v62 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm1, xmm7, xmm6
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm14
  }
  if ( !v40 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v65 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double3Dot", v698);
    v40 = 0;
    if ( v65 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm0, xmm7, xmm6
    vandpd  xmm0, xmm0, xmm15
    vcomisd xmm0, xmm14
  }
  if ( !v40 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v68 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double3Dot", v698);
    v40 = 0;
    if ( v68 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm1, xmm7, xmm6
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm14
  }
  if ( !v40 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double3Dot", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@c1000000
    vmovaps xmm1, xmm13; max
    vmovaps xmm0, xmm6; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vcvtss2sd xmm13, xmm0, xmm0
    vmovaps xmm1, xmm7; max
    vmovaps xmm0, xmm6; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm11, xmm0, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm9, xmm0, xmm0
    vmovaps xmm0, xmm9
    vmovaps xmm2, xmm11
    vmovaps xmm1, xmm13
    vxorpd  xmm3, xmm3, xmm3
    vunpcklpd xmm10, xmm0, xmm3
    vunpcklpd xmm12, xmm1, xmm2
    vmovaps xmm1, xmm7; max
    vmovaps xmm0, xmm6; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm8, xmm0, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm4, xmm0, xmm0
    vmovaps xmm2, xmm6
    vmovaps xmm1, xmm8
    vunpcklpd xmm7, xmm1, xmm2
    vsubsd  xmm2, xmm11, xmm6
    vmovaps xmm0, xmm4
    vxorpd  xmm3, xmm3, xmm3
    vunpcklpd xmm5, xmm0, xmm3
    vsubsd  xmm0, xmm13, xmm8
    vmulsd  xmm1, xmm0, xmm0
    vmulsd  xmm0, xmm2, xmm2
    vaddsd  xmm2, xmm1, xmm0
    vsubpd  xmm0, xmm12, xmm7
    vsubsd  xmm3, xmm9, xmm4
    vmulsd  xmm1, xmm3, xmm3
    vaddsd  xmm2, xmm2, xmm1
    vsqrtsd xmm8, xmm2, xmm2
    vmulpd  xmm2, xmm0, xmm0
    vhaddpd xmm0, xmm2, xmm2
    vsubpd  xmm1, xmm10, xmm5
    vmulpd  xmm1, xmm1, xmm1
    vaddpd  xmm1, xmm0, xmm1
    vmovddup xmm2, xmm1
    vsqrtpd xmm6, xmm2
    vsubsd  xmm0, xmm6, xmm8
    vandpd  xmm0, xmm0, xmm15
    vcomisd xmm0, xmm14
  }
  if ( !v96 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v123 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double3Distance", v698);
    v96 = 0;
    if ( v123 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm0, xmm6, xmm6
    vsubsd  xmm1, xmm0, xmm8
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm14
  }
  if ( !v96 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v127 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double3Distance", v698);
    v96 = 0;
    if ( v127 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm0, xmm6, xmm8
    vandpd  xmm0, xmm0, xmm15
    vcomisd xmm0, xmm14
  }
  if ( !v96 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v130 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double3Distance", v698);
    v96 = 0;
    if ( v130 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm0, xmm6, xmm6
    vsubsd  xmm1, xmm0, xmm8
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm14
  }
  if ( !v96 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double3Distance", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@41000000
    vmovss  xmm7, cs:__real@c1000000
    vmovaps xmm1, xmm6; max
    vmovaps xmm0, xmm7; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm14, xmm0, xmm0
    vmovaps xmm0, xmm7; min
    vmovaps xmm1, xmm6; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm13, xmm0, xmm0
    vmovaps xmm0, xmm7; min
    vmovaps xmm1, xmm6; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm12, xmm0, xmm0
    vmovaps xmm0, xmm7; min
    vmovaps xmm1, xmm6; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm11, xmm0, xmm0
    vmovaps xmm3, xmm11
    vmovaps xmm2, xmm13
    vmovaps xmm1, xmm14
    vmovaps xmm0, xmm12
    vunpcklpd xmm8, xmm0, xmm3
    vunpcklpd xmm10, xmm1, xmm2
    vmovaps xmm1, xmm6; max
    vmovaps xmm0, xmm7; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm9, xmm0, xmm0
    vmovaps xmm0, xmm7; min
    vmovaps xmm1, xmm6; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm7, xmm0, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm6; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@41000000; max
    vcvtss2sd xmm6, xmm0, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm5, xmm0, xmm0
    vmovaps xmm0, xmm6
    vmovaps xmm2, xmm7
    vmovaps xmm1, xmm9
    vunpcklpd xmm4, xmm1, xmm2
    vmulpd  xmm2, xmm4, xmm10
    vmovsd  xmm10, cs:__real@3f50624de0000000
    vmovaps xmm3, xmm5
    vunpcklpd xmm1, xmm0, xmm3
    vmulpd  xmm0, xmm1, xmm8
    vhaddpd xmm1, xmm2, xmm0
    vhaddpd xmm2, xmm1, xmm1
    vmulsd  xmm1, xmm7, xmm13
    vmulsd  xmm0, xmm9, xmm14
    vmovddup xmm8, xmm2
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm6, xmm12
    vaddsd  xmm3, xmm2, xmm1
    vmulsd  xmm0, xmm5, xmm11
    vaddsd  xmm6, xmm3, xmm0
    vsubsd  xmm1, xmm8, xmm6
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm10
  }
  if ( !v165 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v188 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Dot", v698);
    v165 = 0;
    if ( v188 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm1, xmm8, xmm6
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm10
  }
  if ( !v165 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v191 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Dot", v698);
    v165 = 0;
    if ( v191 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm0, xmm8, xmm6
    vandpd  xmm0, xmm0, xmm15
    vcomisd xmm0, xmm10
  }
  if ( !v165 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v194 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Dot", v698);
    v165 = 0;
    if ( v194 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm1, xmm8, xmm6
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm10
  }
  if ( !v165 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Dot", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, cs:__real@41000000
    vmovss  xmm12, cs:__real@c1000000
    vmovaps xmm1, xmm6; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm9, xmm0, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm6; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm8, xmm0, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm6; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm7, xmm0, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm6; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm5, xmm0, xmm0
    vmovaps xmm0, xmm7
    vmovaps xmm3, xmm5
    vunpcklpd xmm4, xmm0, xmm3
    vmovaps xmm2, xmm8
    vmovaps xmm1, xmm9
    vunpcklpd xmm6, xmm1, xmm2
    vmulsd  xmm0, xmm9, xmm9
    vmulsd  xmm1, xmm8, xmm8
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm7, xmm7
    vaddsd  xmm3, xmm2, xmm1
    vmulsd  xmm0, xmm5, xmm5
    vaddsd  xmm2, xmm3, xmm0
    vmulpd  xmm0, xmm4, xmm4
    vmulpd  xmm1, xmm6, xmm6
    vhaddpd xmm1, xmm1, xmm0
    vsqrtsd xmm7, xmm2, xmm2
    vhaddpd xmm2, xmm1, xmm1
    vmovddup xmm0, xmm2
    vsqrtpd xmm6, xmm0
    vsubsd  xmm0, xmm6, xmm7
    vandpd  xmm0, xmm0, xmm15
    vcomisd xmm0, xmm10
  }
  if ( !v210 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v234 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Length", v698);
    v210 = 0;
    if ( v234 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm0, xmm6, xmm6
    vsubsd  xmm1, xmm0, xmm7
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm10
  }
  if ( !v210 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v238 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Length", v698);
    v210 = 0;
    if ( v238 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm0, xmm6, xmm7
    vandpd  xmm0, xmm0, xmm15
    vcomisd xmm0, xmm10
  }
  if ( !v210 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v241 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Length", v698);
    v210 = 0;
    if ( v241 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm0, xmm6, xmm6
    vsubsd  xmm1, xmm0, xmm7
    vandpd  xmm1, xmm1, xmm15
    vcomisd xmm1, xmm10
  }
  if ( !v210 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Length", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@41000000
    vmovaps xmm1, xmm7; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm15, xmm0, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm14, xmm0, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm11, xmm0, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm10, xmm0, xmm0
    vmovaps xmm3, xmm10
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm15
    vmovaps xmm0, xmm11
    vunpcklpd xmm12, xmm0, xmm3
    vunpcklpd xmm13, xmm1, xmm2
    vmovss  xmm6, cs:__real@c1000000
    vmovaps xmm1, xmm7; max
    vmovaps xmm0, xmm6; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm9, xmm0, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm8, xmm0, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm7; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm4, xmm0, xmm0
    vmovaps xmm3, xmm4
    vmovaps xmm0, xmm6
    vunpcklpd xmm5, xmm0, xmm3
    vsubsd  xmm3, xmm11, xmm6
    vmovsd  xmm11, cs:__real@3f50624de0000000
    vmovaps xmm2, xmm8
    vmovaps xmm1, xmm9
    vunpcklpd xmm7, xmm1, xmm2
    vsubsd  xmm2, xmm14, xmm8
    vsubsd  xmm0, xmm15, xmm9
    vmulsd  xmm1, xmm0, xmm0
    vmulsd  xmm0, xmm2, xmm2
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm1, xmm3, xmm3
    vaddsd  xmm3, xmm2, xmm1
    vsubsd  xmm4, xmm10, xmm4
    vmovsd  xmm10, qword ptr cs:__xmm@7fffffffffffffff7fffffffffffffff
    vmulsd  xmm0, xmm4, xmm4
    vaddsd  xmm2, xmm3, xmm0
    vsqrtsd xmm8, xmm2, xmm2
    vsubpd  xmm1, xmm13, xmm7
    vmulpd  xmm2, xmm1, xmm1
    vsubpd  xmm0, xmm12, xmm5
    vmulpd  xmm0, xmm0, xmm0
    vhaddpd xmm1, xmm2, xmm0
    vhaddpd xmm2, xmm1, xmm1
    vmovddup xmm0, xmm2
    vsqrtpd xmm6, xmm0
    vsubsd  xmm0, xmm6, xmm8
    vandpd  xmm0, xmm0, xmm10
    vcomisd xmm0, xmm11
  }
  if ( !v276 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v308 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Distance", v698);
    v276 = 0;
    if ( v308 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm0, xmm6, xmm6
    vsubsd  xmm1, xmm0, xmm8
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v276 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v312 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Distance", v698);
    v276 = 0;
    if ( v312 )
      __debugbreak();
  }
  __asm
  {
    vsubsd  xmm0, xmm6, xmm8
    vandpd  xmm0, xmm0, xmm10
    vcomisd xmm0, xmm11
  }
  if ( !v276 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v315 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Distance", v698);
    v276 = 0;
    if ( v315 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm0, xmm6, xmm6
    vsubsd  xmm1, xmm0, xmm8
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v276 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Distance", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm12, cs:__real@41000000
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm14, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm15, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm7, xmm0, xmm0
    vmovaps xmm3, xmm7
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm6
    vunpcklpd xmm5, xmm1, xmm2
    vmovaps xmm0, xmm15
    vunpcklpd xmm4, xmm0, xmm3
    vmulpd  xmm0, xmm4, xmm4
    vmulpd  xmm1, xmm5, xmm5
    vhaddpd xmm1, xmm1, xmm0
    vhaddpd xmm2, xmm1, xmm1
    vmovddup xmm0, xmm2
    vsqrtpd xmm1, xmm0
    vdivpd  xmm9, xmm5, xmm1
    vdivpd  xmm8, xmm4, xmm1
    vmulsd  xmm1, xmm14, xmm14
    vmulsd  xmm0, xmm6, xmm6
    vaddsd  xmm2, xmm1, xmm0
    vmulsd  xmm0, xmm7, xmm7
    vmulsd  xmm1, xmm15, xmm15
    vaddsd  xmm3, xmm2, xmm1
    vaddsd  xmm2, xmm3, xmm0
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vsqrtsd xmm1, xmm2, xmm2
    vmovsd  [rsp+118h+arg_0], xmm7
    vdivsd  xmm7, xmm0, xmm1
    vmulsd  xmm0, xmm7, xmm6
    vsubsd  xmm1, xmm9, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v332 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v361 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Normalize", v698);
    v332 = 0;
    if ( v361 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm9, xmm9
    vmulsd  xmm0, xmm7, xmm14
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v332 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v366 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Normalize", v698);
    v332 = 0;
    if ( v366 )
      __debugbreak();
  }
  __asm
  {
    vmulsd  xmm0, xmm7, xmm15
    vsubsd  xmm1, xmm8, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v332 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v370 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Normalize", v698);
    v332 = 0;
    if ( v370 )
      __debugbreak();
  }
  __asm
  {
    vmulsd  xmm0, xmm7, [rsp+118h+arg_0]
    vunpckhpd xmm1, xmm8, xmm8
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v332 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Normalize", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm9, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm14, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
    vmovsd  [rsp+118h+arg_8], xmm6
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_18], xmm0
    vmovaps xmm0, xmm6
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm9
    vunpcklpd xmm7, xmm0, xmm3
    vunpcklpd xmm8, xmm1, xmm2
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm15, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+118h+arg_0], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_10], xmm0
    vmovsd  xmm0, [rsp+118h+arg_0]
    vmovaps xmm1, xmm6
    vmovaps xmm2, xmm15
    vunpcklpd xmm4, xmm1, xmm2
    vunpcklpd xmm1, xmm0, xmm3
    vaddpd  xmm7, xmm1, xmm7
    vaddsd  xmm0, xmm6, xmm9
    vaddpd  xmm8, xmm4, xmm8
    vsubsd  xmm1, xmm8, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v404 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v417 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Add", v698);
    v404 = 0;
    if ( v417 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm8, xmm8
    vaddsd  xmm0, xmm15, xmm14
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v404 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v422 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Add", v698);
    v404 = 0;
    if ( v422 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, [rsp+118h+arg_0]
    vaddsd  xmm0, xmm0, [rsp+118h+arg_8]
    vsubsd  xmm1, xmm7, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v404 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v427 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Add", v698);
    v404 = 0;
    if ( v427 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, [rsp+118h+arg_10]
    vaddsd  xmm0, xmm0, [rsp+118h+arg_18]
    vunpckhpd xmm1, xmm7, xmm7
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v404 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Add", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm9, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm14, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
    vmovsd  [rsp+118h+arg_8], xmm6
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_10], xmm0
    vmovaps xmm0, xmm6
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm9
    vunpcklpd xmm7, xmm0, xmm3
    vunpcklpd xmm8, xmm1, xmm2
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm15, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+118h+arg_0], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_18], xmm0
    vmovsd  xmm0, [rsp+118h+arg_0]
    vmovaps xmm1, xmm6
    vmovaps xmm2, xmm15
    vunpcklpd xmm4, xmm1, xmm2
    vunpcklpd xmm1, xmm0, xmm3
    vsubpd  xmm7, xmm7, xmm1
    vsubsd  xmm0, xmm9, xmm6
    vsubpd  xmm8, xmm8, xmm4
    vsubsd  xmm1, xmm8, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v462 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v475 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Sub", v698);
    v462 = 0;
    if ( v475 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm8, xmm8
    vsubsd  xmm0, xmm14, xmm15
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v462 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v480 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Sub", v698);
    v462 = 0;
    if ( v480 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, [rsp+118h+arg_8]
    vsubsd  xmm0, xmm0, [rsp+118h+arg_0]
    vsubsd  xmm1, xmm7, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v462 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v485 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Sub", v698);
    v462 = 0;
    if ( v485 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, [rsp+118h+arg_10]
    vsubsd  xmm0, xmm0, [rsp+118h+arg_18]
    vunpckhpd xmm1, xmm7, xmm7
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v462 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Sub", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm9, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm14, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
    vmovsd  [rsp+118h+arg_8], xmm6
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_18], xmm0
    vmovaps xmm0, xmm6
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm9
    vunpcklpd xmm7, xmm0, xmm3
    vunpcklpd xmm8, xmm1, xmm2
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm15, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+118h+arg_0], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_10], xmm0
    vmovsd  xmm0, [rsp+118h+arg_0]
    vmovaps xmm1, xmm6
    vmovaps xmm2, xmm15
    vunpcklpd xmm4, xmm1, xmm2
    vunpcklpd xmm1, xmm0, xmm3
    vmulpd  xmm7, xmm1, xmm7
    vmulsd  xmm0, xmm6, xmm9
    vmulpd  xmm8, xmm4, xmm8
    vsubsd  xmm1, xmm8, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v520 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v533 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Mul", v698);
    v520 = 0;
    if ( v533 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm8, xmm8
    vmulsd  xmm0, xmm15, xmm14
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v520 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v538 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Mul", v698);
    v520 = 0;
    if ( v538 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, [rsp+118h+arg_0]
    vmulsd  xmm0, xmm0, [rsp+118h+arg_8]
    vsubsd  xmm1, xmm7, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v520 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v543 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Mul", v698);
    v520 = 0;
    if ( v543 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, [rsp+118h+arg_10]
    vmulsd  xmm0, xmm0, [rsp+118h+arg_18]
    vunpckhpd xmm1, xmm7, xmm7
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v520 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Mul", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm9, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm14, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
    vmovsd  [rsp+118h+arg_8], xmm6
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_10], xmm0
    vmovaps xmm0, xmm6
    vmovaps xmm2, xmm14
    vmovaps xmm1, xmm9
    vunpcklpd xmm7, xmm0, xmm3
    vunpcklpd xmm8, xmm1, xmm2
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm15, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+118h+arg_0], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_18], xmm0
    vmovsd  xmm0, [rsp+118h+arg_0]
    vmovaps xmm1, xmm6
    vmovaps xmm2, xmm15
    vunpcklpd xmm4, xmm1, xmm2
    vunpcklpd xmm1, xmm0, xmm3
    vdivpd  xmm7, xmm7, xmm1
    vdivsd  xmm0, xmm9, xmm6
    vdivpd  xmm8, xmm8, xmm4
    vsubsd  xmm1, xmm8, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v578 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v591 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4Div", v698);
    v578 = 0;
    if ( v591 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm8, xmm8
    vdivsd  xmm0, xmm14, xmm15
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v578 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v596 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4Div", v698);
    v578 = 0;
    if ( v596 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, [rsp+118h+arg_8]
    vdivsd  xmm0, xmm0, [rsp+118h+arg_0]
    vsubsd  xmm1, xmm7, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v578 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v601 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4Div", v698);
    v578 = 0;
    if ( v601 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm0, [rsp+118h+arg_10]
    vdivsd  xmm0, xmm0, [rsp+118h+arg_18]
    vunpckhpd xmm1, xmm7, xmm7
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v578 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4Div", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm8, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm14, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm15, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovaps xmm3, xmm0
    vmovsd  [rsp+118h+arg_0], xmm0
    vmovaps xmm1, xmm8
    vmovaps xmm0, xmm15
    vmovaps xmm2, xmm14
    vunpcklpd xmm6, xmm0, xmm3
    vunpcklpd xmm7, xmm1, xmm2
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcmpneqss xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm1, xmm0, xmm2
    vcvtss2sd xmm4, xmm0, xmm0
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vmovddup xmm3, xmm4
    vdivpd  xmm9, xmm7, xmm3
    vdivpd  xmm7, xmm6, xmm3
    vdivsd  xmm6, xmm0, xmm4
    vmulsd  xmm0, xmm8, xmm6
    vsubsd  xmm1, xmm9, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v627 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v641 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component (double) out of range", "Double4DivDouble", v698);
    v627 = 0;
    if ( v641 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm9, xmm9
    vmulsd  xmm0, xmm14, xmm6
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v627 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v646 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component (double) out of range", "Double4DivDouble", v698);
    v627 = 0;
    if ( v646 )
      __debugbreak();
  }
  __asm
  {
    vmulsd  xmm0, xmm15, xmm6
    vsubsd  xmm1, xmm7, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v627 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v650 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component (double) out of range", "Double4DivDouble", v698);
    v627 = 0;
    if ( v650 )
      __debugbreak();
  }
  __asm
  {
    vmulsd  xmm0, xmm6, [rsp+118h+arg_0]
    vunpckhpd xmm1, xmm7, xmm7
    vsubsd  xmm1, xmm1, xmm0
    vandpd  xmm1, xmm1, xmm10
    vcomisd xmm1, xmm11
  }
  if ( !v627 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component (double) out of range", "Double4DivDouble", v698) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm12; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm6, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm10, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcvtss2sd xmm11, xmm0, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm12; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovsd  xmm7, qword ptr cs:__xmm@80000000000000008000000000000000
    vcvtss2sd xmm12, xmm0, xmm0
    vmovaps xmm2, xmm10
    vmovaps xmm1, xmm6
    vunpcklpd xmm4, xmm1, xmm2
    vmovaps xmm0, xmm11
    vxorpd  xmm1, xmm1, xmm1
    vmovaps xmm3, xmm12
    vunpcklpd xmm2, xmm0, xmm3
    vsubpd  xmm9, xmm1, xmm4
    vxorpd  xmm0, xmm6, xmm7
    vucomisd xmm9, xmm0
    vsubpd  xmm8, xmm1, xmm2
  }
  if ( !v666 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v679 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (double) component", "Double4Negate", v698);
    v666 = !v679;
    if ( v679 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm9, xmm9
    vxorpd  xmm0, xmm10, xmm7
    vucomisd xmm1, xmm0
  }
  if ( !v666 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v682 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (double) component", "Double4Negate", v698);
    v666 = !v682;
    if ( v682 )
      __debugbreak();
  }
  __asm
  {
    vxorpd  xmm0, xmm11, xmm7
    vucomisd xmm8, xmm0
  }
  if ( !v666 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    v684 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (double) component", "Double4Negate", v698);
    v666 = !v684;
    if ( v684 )
      __debugbreak();
  }
  __asm
  {
    vunpckhpd xmm1, xmm8, xmm8
    vxorpd  xmm0, xmm12, xmm7
    vucomisd xmm1, xmm0
  }
  if ( !v666 )
  {
    LODWORD(v698) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (double) component", "Double4Negate", v698) )
      __debugbreak();
  }
  __asm { vmovaps xmm13, [rsp+118h+var_B8] }
  _R11 = &v704;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, [rsp+118h+var_C8]
    vmovaps xmm15, [rsp+118h+var_D8]
  }
}

/*
==============
Float4LoadStoreTest
==============
*/

void __fastcall Float4LoadStoreTest(__int64 a1, double _XMM1_8)
{
  bool v13; 
  bool v17; 
  bool v20; 
  bool v23; 
  bool v26; 
  bool v32; 
  bool v35; 
  bool v38; 
  bool v41; 
  bool v44; 
  bool v47; 
  bool v50; 
  bool v53; 
  bool v63; 
  bool v66; 
  bool v69; 
  char v73; 
  __int64 v74; 
  unsigned __int64 v75; 
  unsigned __int64 v76; 
  bool v79; 
  unsigned __int64 v80; 
  bool v81; 
  bool v85; 
  bool v88; 
  char v91; 
  __int64 v92; 
  bool v94; 
  unsigned __int64 v95; 
  bool v96; 
  bool v99; 
  bool v102; 
  bool v105; 
  bool v110; 
  bool v113; 
  bool v116; 
  bool v119; 
  bool v124; 
  bool v127; 
  bool v130; 
  bool v133; 
  bool v137; 
  bool v140; 
  bool v143; 
  bool v146; 
  bool v150; 
  bool v153; 
  bool v156; 
  bool v159; 
  bool v163; 
  bool v166; 
  bool v169; 
  bool v182; 
  bool v199; 
  bool v202; 
  bool v205; 
  bool v210; 
  bool v218; 
  bool v220; 
  bool v222; 
  bool v224; 
  bool v228; 
  bool v231; 
  bool v234; 
  bool v237; 
  bool v242; 
  bool v247; 
  bool v252; 
  bool v257; 
  bool v264; 
  bool v269; 
  bool v274; 
  bool v277; 
  bool v282; 
  bool v287; 
  bool v292; 
  bool v297; 
  bool v303; 
  bool v308; 
  bool v313; 
  bool v316; 
  bool v321; 
  bool v326; 
  bool v331; 
  bool v336; 
  bool v344; 
  bool v349; 
  bool v354; 
  bool v397; 
  bool v398; 
  bool v471; 
  bool v472; 
  bool v504; 
  bool v511; 
  bool v514; 
  bool v517; 
  bool v520; 
  bool v523; 
  bool v525; 
  bool v527; 
  bool v556; 
  bool v567; 
  bool v570; 
  bool v573; 
  bool v576; 
  bool v583; 
  bool v586; 
  bool v589; 
  bool v592; 
  bool v599; 
  bool v602; 
  bool v605; 
  bool v608; 
  bool v615; 
  bool v618; 
  bool v621; 
  bool v624; 
  bool v628; 
  bool v631; 
  bool v634; 
  bool v637; 
  bool v644; 
  bool v647; 
  bool v650; 
  bool v653; 
  bool v661; 
  bool v664; 
  bool v667; 
  bool v670; 
  bool v674; 
  bool v677; 
  bool v680; 
  bool v709; 
  bool v722; 
  bool v725; 
  bool v728; 
  bool v731; 
  bool v739; 
  bool v742; 
  bool v745; 
  bool v748; 
  bool v756; 
  bool v759; 
  bool v762; 
  bool v765; 
  bool v773; 
  bool v776; 
  bool v779; 
  bool v793; 
  bool v800; 
  bool v803; 
  bool v806; 
  bool v811; 
  bool v816; 
  bool v818; 
  bool v820; 
  bool v833; 
  bool v843; 
  bool v845; 
  bool v847; 
  bool v860; 
  bool v870; 
  bool v872; 
  bool v874; 
  bool v887; 
  bool v897; 
  bool v899; 
  bool v901; 
  bool v914; 
  bool v925; 
  bool v927; 
  bool v929; 
  bool v942; 
  bool v959; 
  bool v960; 
  bool v961; 
  bool v999; 
  bool v1006; 
  bool v1019; 
  bool v1030; 
  bool v1042; 
  bool v1056; 
  bool v1057; 
  bool v1069; 
  bool v1077; 
  bool v1079; 
  bool v1081; 
  bool v1094; 
  bool v1102; 
  bool v1104; 
  bool v1106; 
  bool v1119; 
  bool v1127; 
  bool v1129; 
  bool v1131; 
  bool v1144; 
  bool v1152; 
  bool v1154; 
  bool v1156; 
  bool v1169; 
  bool v1178; 
  bool v1180; 
  bool v1182; 
  bool v1214; 
  bool v1228; 
  bool v1231; 
  bool v1234; 
  bool v1237; 
  bool v1238; 
  bool v1241; 
  bool v1244; 
  bool v1303; 
  bool v1329; 
  bool v1333; 
  bool v1336; 
  bool v1339; 
  bool v1341; 
  bool v1344; 
  bool v1347; 
  bool v1350; 
  bool v1352; 
  bool v1355; 
  bool v1358; 
  bool v1361; 
  bool v1364; 
  bool v1367; 
  bool v1370; 
  bool v1429; 
  bool v1463; 
  bool v1467; 
  bool v1470; 
  bool v1473; 
  bool v1475; 
  bool v1478; 
  bool v1481; 
  bool v1484; 
  bool v1486; 
  bool v1489; 
  bool v1492; 
  bool v1495; 
  bool v1498; 
  bool v1501; 
  bool v1504; 
  bool v1562; 
  bool v1564; 
  bool v1566; 
  bool v1568; 
  bool v1570; 
  bool v1572; 
  bool v1574; 
  bool v1576; 
  bool v1578; 
  bool v1580; 
  bool v1582; 
  bool v1584; 
  bool v1586; 
  bool v1588; 
  bool v1590; 
  bool v1592; 
  bool v1648; 
  bool v1650; 
  bool v1652; 
  bool v1654; 
  bool v1656; 
  bool v1658; 
  bool v1660; 
  bool v1662; 
  bool v1664; 
  bool v1666; 
  bool v1668; 
  bool v1670; 
  bool v1672; 
  bool v1674; 
  bool v1676; 
  bool v1678; 
  bool v1720; 
  bool v1722; 
  bool v1725; 
  bool v1726; 
  bool v1728; 
  bool v1730; 
  bool v1732; 
  bool v1733; 
  bool v1735; 
  bool v1737; 
  bool v1739; 
  bool v1785; 
  bool v1787; 
  bool v1789; 
  bool v1791; 
  bool v1793; 
  bool v1795; 
  bool v1797; 
  bool v1799; 
  bool v1801; 
  bool v1803; 
  bool v1805; 
  bool v1807; 
  bool v1808; 
  bool v1810; 
  bool v1812; 
  bool v1814; 
  _BYTE v1826[32]; 
  __int64 v1827; 
  int v1828; 
  __int128 v1840; 
  __int128 v1841; 
  vec3_t element; 
  vec3_t v1846; 
  vec3_t v1847; 
  __int128 v1857; 
  float4 result[2]; 
  float4 v1860[2]; 
  __m256i v1865; 
  char v1881; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  v13 = (unsigned __int64)v1826 == _security_cookie;
  __asm
  {
    vmovups xmm6, cs:__xmm@4080000040400000400000003f800000
    vmovss  xmm15, cs:__real@3f800000
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_2F8], xmm6
    vmovups [rsp+3B8h+var_2F8], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( (unsigned __int64)v1826 != _security_cookie )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Load", v1827);
    v13 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, dword ptr [rsp+3B8h+var_288+4]
    vmovups [rsp+3B8h+var_308], xmm6
    vmovups [rsp+3B8h+var_308], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Load", v1827);
    v13 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, dword ptr [rsp+3B8h+var_288+8]
    vmovups [rsp+3B8h+var_308], xmm6
    vmovups [rsp+3B8h+var_308], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Load", v1827);
    v13 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, dword ptr [rsp+3B8h+var_288+0Ch]
    vmovups [rsp+3B8h+var_308], xmm6
    vmovups [rsp+3B8h+var_308], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Load", v1827);
    v13 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, cs:__xmm@40400000400000003f80000000000000
    vmovss  xmm8, cs:__real@40800000
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmm6, xmmword ptr [rsp+3B8h+result.v+4]
    vinsertps xmm6, xmm6, xmm8, 30h ; '0'
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v+4], xmm6
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadUnaligned", v1827);
    v13 = !v32;
    if ( v32 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, dword ptr [rsp+3B8h+result.v+8]
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadUnaligned", v1827);
    v13 = !v35;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, dword ptr [rsp+3B8h+result.v+0Ch]
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadUnaligned", v1827);
    v13 = !v38;
    if ( v38 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm8
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadUnaligned", v1827);
    v13 = !v41;
    if ( v41 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, cs:__xmm@4080000040400000400000003f800000
    vucomiss xmm6, xmm15
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v+10h], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadOffset", v1827);
    v13 = !v44;
    if ( v44 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, dword ptr [rsp+3B8h+result.v+14h]
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadOffset", v1827);
    v13 = !v47;
    if ( v47 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, dword ptr [rsp+3B8h+result.v+18h]
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadOffset", v1827);
    v13 = !v50;
    if ( v50 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, dword ptr [rsp+3B8h+result.v+1Ch]
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadOffset", v1827);
    v13 = !v53;
    if ( v53 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovss  xmm7, cs:__real@40000000
    vmovss  xmm10, cs:__real@40400000
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmm6, xmmword ptr [rsp+3B8h+result.v+0Ch]
    vinsertps xmm6, xmm6, xmm7, 10h
    vinsertps xmm6, xmm6, xmm10, 20h ; ' '
    vinsertps xmm6, xmm6, xmm8, 30h ; '0'
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v+0Ch], xmm6
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v63 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadUnalignedOffset", v1827);
    v13 = !v63;
    if ( v63 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v66 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadUnalignedOffset", v1827);
    v13 = !v66;
    if ( v66 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v69 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadUnalignedOffset", v1827);
    v13 = !v69;
    if ( v69 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm8
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadUnalignedOffset", v1827) )
      __debugbreak();
  }
  __asm { vmovaps ymm0, cs:__ymm@40a000004080000040400000400000003f800000000000000000000000000000 }
  v74 = (v73 - 36) & 0xF;
  v75 = 0i64;
  v76 = 0i64;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovups ymmword ptr [rsp+1D0h], ymm0
    vxorps  xmm9, xmm9, xmm9
    vmovups [rsp+3B8h+var_2F8], xmm1
  }
  v80 = 16 - v74;
  v79 = v74 == 16;
  if ( v74 != 16 )
  {
    do
    {
      *((_BYTE *)&v1841 + v76) = v1865.m256i_i8[v76 + 12];
      v79 = ++v76 == v80;
    }
    while ( v76 < v80 );
    __asm { vmovups xmm1, [rsp+3B8h+var_2F8] }
  }
  __asm
  {
    vucomiss xmm1, [rsp+3B8h+var_1DC]
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v79 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v81 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadLeft (1)", v1827);
    v79 = !v81;
    if ( v81 )
      __debugbreak();
    __asm { vmovups xmm1, [rsp+3B8h+var_2F8] }
  }
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vxorps  xmm13, xmm13, xmm13
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm1
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v79 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v85 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadLeft (1)", v1827);
    v79 = !v85;
    if ( v85 )
      __debugbreak();
    __asm { vmovups xmm1, [rsp+3B8h+var_2F8] }
  }
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm1
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v79 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v88 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadLeft (1)", v1827);
    v79 = !v88;
    if ( v88 )
      __debugbreak();
    __asm { vmovups xmm1, [rsp+3B8h+var_2F8] }
  }
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm1
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v79 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadLeft (1)", v1827) )
      __debugbreak();
  }
  v92 = (v91 - 40) & 0xF;
  __asm
  {
    vmovups xmm1, xmm9
    vmovups [rsp+3B8h+var_288], xmm9
    vmovups [rsp+3B8h+var_2F8], xmm1
  }
  v95 = 16 - v92;
  v94 = v92 == 16;
  if ( 16 != v92 )
  {
    do
    {
      *((_BYTE *)&v1841 + v75) = v1865.m256i_i8[v75 + 8];
      v94 = ++v75 == v95;
    }
    while ( v75 < v95 );
    __asm { vmovups xmm1, [rsp+3B8h+var_2F8] }
  }
  __asm
  {
    vucomiss xmm1, [rsp+3B8h+var_1E0]
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v96 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadLeft (2)", v1827);
    v94 = !v96;
    if ( v96 )
      __debugbreak();
    __asm { vmovups xmm1, [rsp+3B8h+var_2F8] }
  }
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_1DC]
    vmovups [rsp+3B8h+var_288], xmm1
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v99 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadLeft (2)", v1827);
    v94 = !v99;
    if ( v99 )
      __debugbreak();
    __asm { vmovups xmm1, [rsp+3B8h+var_2F8] }
  }
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm1
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v102 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadLeft (2)", v1827);
    v94 = !v102;
    if ( v102 )
      __debugbreak();
    __asm { vmovups xmm1, [rsp+3B8h+var_2F8] }
  }
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm1
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v105 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadLeft (2)", v1827);
    v94 = !v105;
    if ( v105 )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm2, xmm15
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm6, xmm1, xmm2
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v110 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadX", v1827);
    v94 = !v110;
    if ( v110 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v113 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadX", v1827);
    v94 = !v113;
    if ( v113 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v116 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadX", v1827);
    v94 = !v116;
    if ( v116 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v119 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadX", v1827);
    v94 = !v119;
    if ( v119 )
      __debugbreak();
  }
  __asm
  {
    vunpcklps xmm3, xmm15, xmm7
    vxorpd  xmm2, xmm2, xmm2
    vmovsd  xmm6, xmm2, xmm3
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v124 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadXY", v1827);
    v94 = !v124;
    if ( v124 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v127 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadXY", v1827);
    v94 = !v127;
    if ( v127 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v130 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadXY", v1827);
    v94 = !v130;
    if ( v130 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v133 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadXY", v1827);
    v94 = !v133;
    if ( v133 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, cs:__xmm@0000000000000000400000003f800000
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v137 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadVec2", v1827);
    v94 = !v137;
    if ( v137 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v140 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadVec2", v1827);
    v94 = !v140;
    if ( v140 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v143 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadVec2", v1827);
    v94 = !v143;
    if ( v143 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v146 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadVec2", v1827);
    v94 = !v146;
    if ( v146 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, cs:__xmm@0000000040400000400000003f800000
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v150 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadVec3", v1827);
    v94 = !v150;
    if ( v150 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v153 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadVec3", v1827);
    v94 = !v153;
    if ( v153 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v156 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadVec3", v1827);
    v94 = !v156;
    if ( v156 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v159 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadVec3", v1827);
    v94 = !v159;
    if ( v159 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, cs:__xmm@0000000040400000400000003f800000
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v163 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadVec3Aligned", v1827);
    v94 = !v163;
    if ( v163 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v166 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadVec3Aligned", v1827);
    v94 = !v166;
    if ( v166 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v169 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadVec3Aligned", v1827);
    v94 = !v169;
    if ( v169 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v94 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadVec3Aligned", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, cs:__real@41000000
    vmovss  xmm11, cs:__real@c1000000
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups xmm14, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovaps xmm12, xmm0
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, xmm6, 0
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm12, 20h ; ' '
    vmovdqa [rsp+3B8h+var_288], xmm0
    vmovups xmm1, [rsp+3B8h+var_288]
    vmovss  xmm1, xmm1, xmm6
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm12, 20h ; ' '
    vinsertps xmm7, xmm1, xmm14, 0F0h ; 'ð'
    vucomiss xmm7, xmm6
    vmovups [rsp+3B8h+var_288], xmm1
    vmovdqa [rsp+3B8h+var_288], xmm1
    vmovups [rsp+3B8h+var_288], xmm1
    vmovdqa [rsp+3B8h+var_288], xmm7
    vmovdqa [rsp+3B8h+var_288], xmm7
    vmovups [rsp+3B8h+var_288], xmm7
  }
  if ( !v182 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v199 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadVec3Homogenous", v1827);
    v182 = !v199;
    if ( v199 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm0, xmm8
    vmovups [rsp+3B8h+var_288], xmm7
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v182 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v202 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadVec3Homogenous", v1827);
    v182 = !v202;
    if ( v202 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm0, xmm12
    vmovups [rsp+3B8h+var_288], xmm7
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v182 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v205 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadVec3Homogenous", v1827);
    v182 = !v205;
    if ( v205 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vucomiss xmm0, xmm15
    vmovups [rsp+3B8h+var_288], xmm7
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v182 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadVec3Homogenous", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmm6, xmm7
    vshufps xmm6, xmm6, xmm6, 0
    vucomiss xmm6, xmm7
    vinsertps xmm0, xmm0, xmm7, 0
    vmovdqa [rsp+3B8h+var_288], xmm0
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v218 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadFloat", v1827);
    v210 = !v218;
    if ( v218 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm7
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v220 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadFloat", v1827);
    v210 = !v220;
    if ( v220 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm7
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v222 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadFloat", v1827);
    v210 = !v222;
    if ( v222 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm7
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v224 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadFloat", v1827);
    v210 = !v224;
    if ( v224 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, cs:__xmm@3f8000003f8000003f8000003f800000
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  LODWORD(v1840) = 1065353216;
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v228 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadUInt", v1827);
    v210 = !v228;
    if ( v228 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm15
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v231 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadUInt", v1827);
    v210 = !v231;
    if ( v231 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm15
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v234 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadUInt", v1827);
    v210 = !v234;
    if ( v234 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm15
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v237 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadUInt", v1827);
    v210 = !v237;
    if ( v237 )
      __debugbreak();
  }
  *(_QWORD *)&v1840 = 0x7FFF800000020001i64;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_308]
    vpmovsxwd xmm1, xmm0
    vcvtdq2ps xmm6, xmm1
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v242 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadShort4", v1827);
    v210 = !v242;
    if ( v242 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v247 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadShort4", v1827);
    v210 = !v247;
    if ( v247 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v252 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadShort4", v1827);
    v210 = !v252;
    if ( v252 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0FFh
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v257 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadShort4", v1827);
    v210 = !v257;
    if ( v257 )
      __debugbreak();
  }
  LODWORD(v1857) = 131073;
  WORD2(v1857) = 0x7FFF;
  __asm
  {
    vlddqu  xmm1, [rsp+3B8h+var_288]
    vpxor   xmm0, xmm0, xmm0
    vpunpcklwd xmm1, xmm1, xmm0
    vcvtdq2ps xmm2, xmm1
    vinsertps xmm6, xmm2, xmm2, 8
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v264 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadUShort3", v1827);
    v210 = !v264;
    if ( v264 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v269 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadUShort3", v1827);
    v210 = !v269;
    if ( v269 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v274 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadUShort3", v1827);
    v210 = !v274;
    if ( v274 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v277 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadUShort3", v1827);
    v210 = !v277;
    if ( v277 )
      __debugbreak();
  }
  LODWORD(v1840) = -16580095;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_308]
    vpmovzxbd xmm1, xmm0
    vcvtdq2ps xmm6, xmm1
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v282 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadByte4", v1827);
    v210 = !v282;
    if ( v282 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v287 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadByte4", v1827);
    v210 = !v287;
    if ( v287 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v292 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadByte4", v1827);
    v210 = !v292;
    if ( v292 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0FFh
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v297 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadByte4", v1827);
    v210 = !v297;
    if ( v297 )
      __debugbreak();
  }
  LOWORD(v1857) = 513;
  BYTE2(v1857) = -1;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_288]
    vpmovzxbd xmm1, xmm0
    vcvtdq2ps xmm2, xmm1
    vinsertps xmm6, xmm2, xmm2, 8
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v303 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadByte4", v1827);
    v210 = !v303;
    if ( v303 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v308 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadByte4", v1827);
    v210 = !v308;
    if ( v308 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v313 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadByte4", v1827);
    v210 = !v313;
    if ( v313 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v316 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadByte4", v1827);
    v210 = !v316;
    if ( v316 )
      __debugbreak();
  }
  LODWORD(v1840) = 2139095553;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_308]
    vpmovsxbd xmm1, xmm0
    vcvtdq2ps xmm6, xmm1
    vucomiss xmm6, xmm15
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v321 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadChar4", v1827);
    v210 = !v321;
    if ( v321 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v326 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadChar4", v1827);
    v210 = !v326;
    if ( v326 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v331 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadChar4", v1827);
    v210 = !v331;
    if ( v331 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0FFh
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v336 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadChar4", v1827);
    v210 = !v336;
    if ( v336 )
      __debugbreak();
  }
  LOWORD(v1857) = -32767;
  BYTE2(v1857) = 127;
  __asm
  {
    vlddqu  xmm0, [rsp+3B8h+var_288]
    vpmovsxbd xmm1, xmm0
    vcvtdq2ps xmm2, xmm1
    vinsertps xmm6, xmm2, xmm2, 8
    vucomiss xmm6, xmm15
    vmovups [rsp+3B8h+var_288], xmm2
    vmovups [rsp+3B8h+var_288], xmm6
    vmovdqa [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm6
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v344 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4LoadChar4", v1827);
    v210 = !v344;
    if ( v344 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v349 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4LoadChar4", v1827);
    v210 = !v349;
    if ( v349 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vucomiss xmm1, xmm0
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm1
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v354 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4LoadChar4", v1827);
    v210 = !v354;
    if ( v354 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
    vmovups [rsp+3B8h+var_288], xmm6
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v210 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4LoadChar4", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm2, xmm12
    vinsertps xmm2, xmm2, xmm7, 10h
    vinsertps xmm2, xmm2, xmm8, 20h ; ' '
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
    vcvtps2dq xmm0, xmm14
    vmovss  xmm14, cs:__real@45800000
    vpslld  xmm1, xmm0, 0Ch
    vcvtdq2ps xmm13, xmm1
    vmulps  xmm0, xmm2, xmm13
    vcvttps2dq xmm6, xmm0
    vmulss  xmm0, xmm12, xmm14
    vcvttss2si eax, xmm0
    vmovdqa [rsp+3B8h+var_288], xmm2
    vmovups [rsp+3B8h+var_308], xmm6
    vpextrd rcx, xmm6, 0
    vmovdqa [rsp+3B8h+var_288], xmm2
    vmovups [rsp+3B8h+var_308], xmm6
    vmovups [rsp+3B8h+var_288], xmm2
    vmovups [rsp+3B8h+var_308], xmm6
    vmovups [rsp+3B8h+var_288], xmm13
    vpextrd rbx, xmm6, 1
    vpextrd rdi, xmm6, 2
    vmovups [rsp+3B8h+var_308], xmm6
    vpextrd rsi, xmm6, 3
  }
  if ( (_DWORD)_RCX != _EAX )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (1)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm7, xmm14
    vcvttss2si eax, xmm0
  }
  if ( (_DWORD)_RBX != _EAX )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (2)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm8, xmm14
    vcvttss2si eax, xmm0
  }
  if ( (_DWORD)_RDI != _EAX )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (3)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm15, xmm14
    vcvttss2si eax, xmm0
  }
  v397 = (unsigned int)_RSI < _EAX;
  if ( (_DWORD)_RSI != _EAX )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v398 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (4)", v1827);
    v397 = 0;
    if ( v398 )
      __debugbreak();
  }
  __asm
  {
    vrcpps  xmm1, xmm13
    vmovss  xmm13, cs:__real@3c23d70b
    vcvtdq2ps xmm0, xmm6
    vmovups [rsp+3B8h+var_308], xmm6
    vmulps  xmm6, xmm0, xmm1
    vsubss  xmm0, xmm6, xmm12
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups [rsp+3B8h+var_308], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v397 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ConvertFromFixedSigned", v1827) )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vsubss  xmm0, xmm0, xmm7
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  LODWORD(v1827) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ConvertFromFixedSigned", v1827) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vsubss  xmm0, xmm0, xmm8
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  LODWORD(v1827) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ConvertFromFixedSigned", v1827) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vsubss  xmm0, xmm0, xmm15
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  LODWORD(v1827) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ConvertFromFixedSigned", v1827) )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm7, xmm0, xmm1
    vshufps xmm0, xmm7, xmm7, 0FFh
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vshufps xmm8, xmm7, xmm7, 55h ; 'U'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vshufps xmm15, xmm7, xmm7, 0AAh ; 'ª'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmulps  xmm0, xmm7, [rsp+3B8h+var_288]
    vcvttps2dq xmm6, xmm0
    vmulss  xmm0, xmm7, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vcvttss2si rax, xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vpextrd rcx, xmm6, 0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vpextrd rbx, xmm6, 1
    vpextrd rdi, xmm6, 2
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vpextrd rsi, xmm6, 3
  }
  if ( (_DWORD)_RCX != (_DWORD)_RAX )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (5)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm8, xmm14
    vcvttss2si rax, xmm0
  }
  if ( (_DWORD)_RBX != (_DWORD)_RAX )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (6)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm15, xmm14
    vcvttss2si rax, xmm0
  }
  if ( (_DWORD)_RDI != (_DWORD)_RAX )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (7)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vmulss  xmm0, xmm0, xmm14
    vcvttss2si rax, xmm0
  }
  v471 = (unsigned int)_RSI < (unsigned int)_RAX;
  if ( (_DWORD)_RSI != (_DWORD)_RAX )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v472 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ConvertToFixed (8)", v1827);
    v471 = 0;
    if ( v472 )
      __debugbreak();
  }
  __asm
  {
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm6
    vcvtdq2ps xmm0, xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmulps  xmm6, xmm0, [rsp+3B8h+var_308]
    vsubss  xmm0, xmm6, xmm7
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v471 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ConvertFromFixed", v1827) )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vsubss  xmm0, xmm0, xmm8
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  LODWORD(v1827) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ConvertFromFixed", v1827) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vsubss  xmm0, xmm0, xmm15
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  LODWORD(v1827) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ConvertFromFixed", v1827) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vshufps xmm1, xmm7, xmm7, 0FFh
    vsubss  xmm0, xmm0, xmm1
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  LODWORD(v1827) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ConvertFromFixed", v1827) )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm9, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm9
  }
  if ( !v504 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v511 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Clear", v1827);
    v504 = !v511;
    if ( v511 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmm9
    vucomiss xmm0, xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v504 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v514 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Clear", v1827);
    v504 = !v514;
    if ( v514 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmm9
    vucomiss xmm0, xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v504 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v517 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Clear", v1827);
    v504 = !v517;
    if ( v517 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmm9
    vucomiss xmm0, xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v504 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v520 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Clear", v1827);
    v504 = !v520;
    if ( v520 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm1, cs:__xmm@4100000040e0000040c0000040a00000
    vucomiss xmm1, cs:__real@40a00000
    vmovups xmm0, cs:__xmm@4080000040400000400000003f800000
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v+10h], xmm1
    vmovups [rsp+3B8h+var_278], xmm1
  }
  if ( !v504 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v523 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CopyOffset (1)", v1827);
    v504 = !v523;
    if ( v523 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+14h]
    vucomiss xmm0, dword ptr [rsp+3B8h+var_278+4]
  }
  if ( !v504 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v525 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CopyOffset (2)", v1827);
    v504 = !v525;
    if ( v525 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+18h]
    vucomiss xmm0, dword ptr [rsp+3B8h+var_278+8]
  }
  if ( !v504 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v527 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CopyOffset (3)", v1827);
    v504 = !v527;
    if ( v527 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+1Ch]
    vucomiss xmm0, dword ptr [rsp+3B8h+var_278+0Ch]
  }
  if ( !v504 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CopyOffset (4)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm9
    vinsertps xmm7, xmm7, xmm12, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovaps xmm14, xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_370], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_36C], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm6, xmm6, xmm8, 10h
    vinsertps xmm6, xmm6, xmm15, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+3B8h+var_368], xmm0
    vshufps xmm0, xmm6, xmm7, 50h ; 'P'
    vshufps xmm8, xmm0, xmm7, 0E8h ; 'è'
    vucomiss xmm8, [rsp+3B8h+var_370]
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v567 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyX", v1827);
    v556 = !v567;
    if ( v567 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v570 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyX", v1827);
    v556 = !v570;
    if ( v570 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v573 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyX", v1827);
    v556 = !v573;
    if ( v573 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v576 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyX", v1827);
    v556 = !v576;
    if ( v576 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm6, 50h ; 'P'
    vshufps xmm8, xmm0, xmm7, 0E8h ; 'è'
    vucomiss xmm8, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v583 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyY", v1827);
    v556 = !v583;
    if ( v583 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_36C]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v586 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyY", v1827);
    v556 = !v586;
    if ( v586 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v589 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyY", v1827);
    v556 = !v589;
    if ( v589 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v592 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyY", v1827);
    v556 = !v592;
    if ( v592 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm7, 0FAh ; 'ú'
    vshufps xmm8, xmm7, xmm0, 84h ; '„'
    vucomiss xmm8, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v599 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyZ", v1827);
    v556 = !v599;
    if ( v599 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v602 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyZ", v1827);
    v556 = !v602;
    if ( v602 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v605 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyZ", v1827);
    v556 = !v605;
    if ( v605 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v608 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyZ", v1827);
    v556 = !v608;
    if ( v608 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm6, 0FAh ; 'ú'
    vshufps xmm8, xmm7, xmm0, 84h ; '„'
    vucomiss xmm8, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v615 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyW", v1827);
    v556 = !v615;
    if ( v615 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v618 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyW", v1827);
    v556 = !v618;
    if ( v618 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v621 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyW", v1827);
    v556 = !v621;
    if ( v621 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, [rsp+3B8h+var_368]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v624 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyW", v1827);
    v556 = !v624;
    if ( v624 )
      __debugbreak();
  }
  __asm
  {
    vblendps xmm8, xmm7, xmm6, 0Ch
    vucomiss xmm8, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v628 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyZW", v1827);
    v556 = !v628;
    if ( v628 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v631 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyZW", v1827);
    v556 = !v631;
    if ( v631 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v634 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyZW", v1827);
    v556 = !v634;
    if ( v634 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, [rsp+3B8h+var_368]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v637 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyZW", v1827);
    v556 = !v637;
    if ( v637 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm6, 0
    vshufps xmm8, xmm0, xmm7, 0E8h ; 'è'
    vucomiss xmm8, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v644 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyXToY", v1827);
    v556 = !v644;
    if ( v644 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_370]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v647 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyXToY", v1827);
    v556 = !v647;
    if ( v647 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v650 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyXToY", v1827);
    v556 = !v650;
    if ( v650 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v653 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyXToY", v1827);
    v556 = !v653;
    if ( v653 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm15, [rsp+3B8h+var_36C]
    vshufps xmm0, xmm7, xmm6, 55h ; 'U'
    vshufps xmm8, xmm0, xmm7, 0E6h ; 'æ'
    vucomiss xmm8, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v661 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyYToX", v1827);
    v556 = !v661;
    if ( v661 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v664 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyYToX", v1827);
    v556 = !v664;
    if ( v664 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v667 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyYToX", v1827);
    v556 = !v667;
    if ( v667 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v670 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyYToX", v1827);
    v556 = !v670;
    if ( v670 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vshufps xmm6, xmm7, xmm6, 44h ; 'D'
    vucomiss xmm6, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v674 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyXYToZW", v1827);
    v556 = !v674;
    if ( v674 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v677 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyXYToZW", v1827);
    v556 = !v677;
    if ( v677 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_370]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v680 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyXYToZW", v1827);
    v556 = !v680;
    if ( v680 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v556 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyXYToZW", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_374], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm6
    vinsertps xmm8, xmm8, xmm7, 10h
    vinsertps xmm8, xmm8, xmm9, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovss  [rsp+3B8h+var_364], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm13
    vinsertps xmm7, xmm7, xmm14, 10h
    vinsertps xmm7, xmm7, xmm15, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm12, xmm0
    vshufps xmm0, xmm8, xmm7, 50h ; 'P'
    vshufps xmm9, xmm0, xmm7, 0E8h ; 'è'
    vucomiss xmm9, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm9
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v722 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyXTo", v1827);
    v709 = !v722;
    if ( v722 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v725 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyXTo", v1827);
    v709 = !v725;
    if ( v725 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v728 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyXTo", v1827);
    v709 = !v728;
    if ( v728 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0FFh
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v731 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyXTo", v1827);
    v709 = !v731;
    if ( v731 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm8, 50h ; 'P'
    vshufps xmm6, xmm0, xmm7, 0E8h ; 'è'
    vucomiss xmm6, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v739 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyYTo", v1827);
    v709 = !v739;
    if ( v739 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_378]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v742 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyYTo", v1827);
    v709 = !v742;
    if ( v742 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v745 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyYTo", v1827);
    v709 = !v745;
    if ( v745 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v748 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyYTo", v1827);
    v709 = !v748;
    if ( v748 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm7, 0FAh ; 'ú'
    vshufps xmm6, xmm7, xmm0, 84h ; '„'
    vucomiss xmm6, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v756 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyZTo", v1827);
    v709 = !v756;
    if ( v756 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v759 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyZTo", v1827);
    v709 = !v759;
    if ( v759 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_374]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v762 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyZTo", v1827);
    v709 = !v762;
    if ( v762 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v765 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyZTo", v1827);
    v709 = !v765;
    if ( v765 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm8, 0FAh ; 'ú'
    vshufps xmm6, xmm7, xmm0, 84h ; '„'
    vucomiss xmm6, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v773 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CopyWTo", v1827);
    v709 = !v773;
    if ( v773 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v776 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CopyWTo", v1827);
    v709 = !v776;
    if ( v776 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v779 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CopyWTo", v1827);
    v709 = !v779;
    if ( v779 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, [rsp+3B8h+var_364]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v709 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CopyWTo", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm6
    vinsertps xmm7, xmm7, xmm8, 10h
    vinsertps xmm7, xmm7, xmm9, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vucomiss xmm7, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovaps xmm12, xmm0
  }
  if ( !v793 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v800 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Set", v1827);
    v793 = !v800;
    if ( v800 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm0, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v793 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v803 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Set", v1827);
    v793 = !v803;
    if ( v803 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm0, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v793 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v806 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Set", v1827);
    v793 = !v806;
    if ( v806 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v793 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Set", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vshufps xmm6, xmm6, xmm6, 0
    vucomiss xmm6, xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovaps xmm7, xmm0
  }
  if ( !v811 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v816 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Splat", v1827);
    v811 = !v816;
    if ( v816 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v811 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v818 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Splat", v1827);
    v811 = !v818;
    if ( v818 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v811 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v820 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Splat", v1827);
    v811 = !v820;
    if ( v820 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v811 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Splat", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vshufps xmm6, xmm1, xmm1, 0
    vucomiss xmm6, xmm8
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v833 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v843 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4SplatX", v1827);
    v833 = !v843;
    if ( v843 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v833 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v845 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4SplatX", v1827);
    v833 = !v845;
    if ( v845 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v833 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v847 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4SplatX", v1827);
    v833 = !v847;
    if ( v847 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v833 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4SplatX", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vshufps xmm6, xmm1, xmm1, 55h ; 'U'
    vucomiss xmm6, xmm8
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v860 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v870 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4SplatY", v1827);
    v860 = !v870;
    if ( v870 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v860 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v872 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4SplatY", v1827);
    v860 = !v872;
    if ( v872 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v860 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v874 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4SplatY", v1827);
    v860 = !v874;
    if ( v874 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v860 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4SplatY", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm8, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vshufps xmm6, xmm1, xmm1, 0AAh ; 'ª'
    vucomiss xmm6, xmm8
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v887 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v897 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4SplatZ", v1827);
    v887 = !v897;
    if ( v897 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v887 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v899 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4SplatZ", v1827);
    v887 = !v899;
    if ( v899 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v887 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v901 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4SplatZ", v1827);
    v887 = !v901;
    if ( v901 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v887 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4SplatZ", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm8
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm6, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vshufps xmm6, xmm0, xmm0, 0FFh
    vucomiss xmm6, xmm9
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v914 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v925 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4SplatW", v1827);
    v914 = !v925;
    if ( v925 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v914 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v927 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4SplatW", v1827);
    v914 = !v927;
    if ( v927 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v914 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v929 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4SplatW", v1827);
    v914 = !v929;
    if ( v929 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm6, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v914 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4SplatW", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vinsertps xmm0, xmm0, xmm13, 30h ; '0'
    vucomiss xmm0, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vshufps xmm8, xmm0, xmm0, 55h ; 'U'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vshufps xmm12, xmm0, xmm0, 0AAh ; 'ª'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm12
    vshufps xmm14, xmm0, xmm0, 0FFh
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm14
  }
  if ( !v942 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v959 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractX", v1827);
    v942 = !v959;
    if ( v959 )
      __debugbreak();
  }
  __asm { vucomiss xmm8, xmm7 }
  if ( !v942 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v960 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractY", v1827);
    v942 = !v960;
    if ( v960 )
      __debugbreak();
  }
  __asm { vucomiss xmm12, xmm9 }
  if ( !v942 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v961 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractZ", v1827);
    v942 = !v961;
    if ( v961 )
      __debugbreak();
  }
  __asm { vucomiss xmm14, xmm13 }
  if ( !v942 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractW", v1827) )
      __debugbreak();
  }
  LODWORD(v1840) = 1;
  *(_QWORD *)((char *)&v1840 + 4) = 0x300000002i64;
  HIDWORD(v1840) = 4;
  __asm
  {
    vmovups xmm0, [rsp+3B8h+var_308]
    vpextrd rax, xmm0, 0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vpextrd rbx, xmm0, 1
    vpextrd rdi, xmm0, 2
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vpextrd rsi, xmm0, 3
  }
  if ( (_DWORD)_RAX != 1 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractUintX", v1827) )
      __debugbreak();
  }
  if ( (_DWORD)_RBX != 2 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractUintY", v1827) )
      __debugbreak();
  }
  if ( (_DWORD)_RDI != 3 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractUintZ", v1827) )
      __debugbreak();
  }
  if ( (_DWORD)_RSI != 4 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4ExtractUintW", v1827) )
      __debugbreak();
  }
  LODWORD(v1840) = 1;
  *(_QWORD *)((char *)&v1840 + 4) = 0x300000002i64;
  HIDWORD(v1840) = 4;
  __asm
  {
    vmovups xmm0, [rsp+3B8h+var_308]
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( v1828 != 1 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUInt", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vucomiss xmm1, xmm8
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovss  dword ptr [rsp+3B8h+var_308], xmm1
  }
  if ( !v13 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreX (1)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vucomiss xmm1, xmm7
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovsd  qword ptr [rsp+3B8h+var_308], xmm1
  }
  if ( !v999 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1006 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreXY (1)", v1827);
    v999 = !v1006;
    if ( v1006 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_308+4]
    vucomiss xmm0, xmm8
  }
  if ( !v999 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreXY (2)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm7
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vucomiss xmm1, xmm7
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vshufps xmm6, xmm1, xmm1, 55h ; 'U'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v1019 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1030 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec2 (1)", v1827);
    v1019 = !v1030;
    if ( v1030 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm8 }
  if ( !v1019 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec2 (2)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm9, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vucomiss xmm1, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vshufps xmm8, xmm1, xmm1, 55h ; 'U'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vshufps xmm12, xmm1, xmm1, 0AAh ; 'ª'
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm12
  }
  if ( !v1042 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1056 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec3 (1)", v1827);
    v1042 = !v1056;
    if ( v1056 )
      __debugbreak();
  }
  __asm { vucomiss xmm8, xmm7 }
  if ( !v1042 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1057 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec3 (2)", v1827);
    v1042 = !v1057;
    if ( v1057 )
      __debugbreak();
  }
  __asm { vucomiss xmm12, xmm9 }
  if ( !v1042 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec3 (3)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vucomiss xmm0, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v1069 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1077 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec4 (1)", v1827);
    v1069 = !v1077;
    if ( v1077 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_288+4]
    vucomiss xmm0, xmm7
  }
  if ( !v1069 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1079 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec4 (2)", v1827);
    v1069 = !v1079;
    if ( v1079 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_288+8]
    vucomiss xmm0, xmm8
  }
  if ( !v1069 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1081 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec4 (3)", v1827);
    v1069 = !v1081;
    if ( v1081 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_288+0Ch]
    vucomiss xmm0, xmm9
  }
  if ( !v1069 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreVec4 (4)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vucomiss xmm0, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v+10h], xmm0
  }
  if ( !v1094 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1102 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreOffset (1)", v1827);
    v1094 = !v1102;
    if ( v1102 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+14h]
    vucomiss xmm0, xmm7
  }
  if ( !v1094 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1104 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreOffset (2)", v1827);
    v1094 = !v1104;
    if ( v1104 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+18h]
    vucomiss xmm0, xmm8
  }
  if ( !v1094 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1106 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreOffset (3)", v1827);
    v1094 = !v1106;
    if ( v1106 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+1Ch]
    vucomiss xmm0, xmm9
  }
  if ( !v1094 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreOffset (4)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vucomiss xmm0, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v+0Ch], xmm0
  }
  if ( !v1119 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1127 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnalignedOffset (1)", v1827);
    v1119 = !v1127;
    if ( v1127 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+10h]
    vucomiss xmm0, xmm7
  }
  if ( !v1119 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1129 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnalignedOffset (2)", v1827);
    v1119 = !v1129;
    if ( v1129 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+14h]
    vucomiss xmm0, xmm8
  }
  if ( !v1119 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1131 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnalignedOffset (3)", v1827);
    v1119 = !v1131;
    if ( v1131 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+18h]
    vucomiss xmm0, xmm9
  }
  if ( !v1119 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnalignedOffset (4)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vucomiss xmm0, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( !v1144 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1152 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Store (1)", v1827);
    v1144 = !v1152;
    if ( v1152 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_288+4]
    vucomiss xmm0, xmm7
  }
  if ( !v1144 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1154 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Store (2)", v1827);
    v1144 = !v1154;
    if ( v1154 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_288+8]
    vucomiss xmm0, xmm8
  }
  if ( !v1144 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1156 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Store (3)", v1827);
    v1144 = !v1156;
    if ( v1156 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_288+0Ch]
    vucomiss xmm0, xmm9
  }
  if ( !v1144 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Store (4)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vucomiss xmm0, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  result[0].v.m128_i32[0] = _RT0;
  __asm { vmovups xmmword ptr [rsp+3B8h+result.v+4], xmm0 }
  if ( !v1169 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1178 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnaligned (1)", v1827);
    v1169 = !v1178;
    if ( v1178 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+8]
    vucomiss xmm0, xmm7
  }
  if ( !v1169 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1180 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnaligned (2)", v1827);
    v1169 = !v1180;
    if ( v1180 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+0Ch]
    vucomiss xmm0, xmm8
  }
  if ( !v1169 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1182 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnaligned (3)", v1827);
    v1169 = !v1182;
    if ( v1182 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+result.v+10h]
    vucomiss xmm0, xmm9
  }
  if ( !v1169 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUnaligned (4)", v1827) )
      __debugbreak();
  }
  *(_QWORD *)&v1840 = 0x200000001i64;
  *((_QWORD *)&v1840 + 1) = 0x400000003i64;
  __asm
  {
    vmovups xmm0, [rsp+3B8h+var_308]
    vmovd   eax, xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups [rsp+3B8h+var_288], xmm0
  }
  if ( _EAX != 1 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUint4 (1)", v1827) )
      __debugbreak();
  }
  if ( DWORD1(v1857) != 2 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUint4 (2)", v1827) )
      __debugbreak();
  }
  if ( DWORD2(v1857) != 3 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUint4 (3)", v1827) )
      __debugbreak();
  }
  if ( HIDWORD(v1857) != 4 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4StoreUint4 (4)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, xmm13, 20h ; ' '
    vinsertps xmm0, xmm0, xmm14, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_36C], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm0
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovaps xmm0, xmm9
    vinsertps xmm0, xmm0, xmm15, 10h
    vinsertps xmm0, xmm0, xmm7, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vinsertps xmm8, xmm6, xmm12, 10h
    vinsertps xmm7, xmm9, xmm15, 10h
    vinsertps xmm7, xmm7, [rsp+3B8h+var_36C], 20h
    vinsertps xmm8, xmm8, xmm13, 20h ; ' '
    vinsertps xmm8, xmm8, xmm14, 30h ; '0'
    vucomiss xmm8, xmm6
    vinsertps xmm7, xmm7, xmm1, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups [rsp+3B8h+var_168], xmm7
    vmovups [rsp+3B8h+var_178], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
  }
  if ( !v1214 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1228 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x2Load (1)", v1827);
    v1214 = !v1228;
    if ( v1228 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1214 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1231 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x2Load (1)", v1827);
    v1214 = !v1231;
    if ( v1231 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1214 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1234 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x2Load (1)", v1827);
    v1214 = !v1234;
    if ( v1234 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1214 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1237 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x2Load (1)", v1827);
    v1214 = !v1237;
    if ( v1237 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm7, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
  }
  if ( !v1214 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1238 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x2Load (2)", v1827);
    v1214 = !v1238;
    if ( v1238 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1214 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1241 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x2Load (2)", v1827);
    v1214 = !v1241;
    if ( v1241 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_36C]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1214 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1244 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x2Load (2)", v1827);
    v1214 = !v1244;
    if ( v1244 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vucomiss xmm0, [rsp+3B8h+var_378]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1214 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x2Load (2)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm12
    vinsertps xmm0, xmm0, xmm13, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm15, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups [rsp+3B8h+var_288], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_370], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_368], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_36C], xmm0
    vmovaps xmm3, xmm0
    vmovss  xmm0, dword ptr [rsp+3B8h+var_288]
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups [rsp+3B8h+var_308], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_364], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_374], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups xmm3, [rsp+3B8h+var_308]
    vmovaps xmm1, xmm0
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovaps xmm0, xmm3
    vinsertps xmm0, xmm0, [rsp+3B8h+var_364], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_374], 20h
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vinsertps xmm0, xmm12, xmm13, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm15, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v+10h], xmm0
    vmovups [rsp+3B8h+var_148], xmm0
    vmovups xmm0, [rsp+3B8h+var_288]
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 20h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_36C], 30h
    vmovups [rsp+3B8h+var_138], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+var_248.v], xmm0
    vinsertps xmm0, xmm3, [rsp+3B8h+var_364], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_374], 20h
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vinsertps xmm2, xmm6, xmm7, 10h
    vinsertps xmm2, xmm2, xmm8, 20h ; ' '
    vinsertps xmm2, xmm2, xmm9, 30h ; '0'
    vucomiss xmm2, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm2
    vmovups ymm1, ymmword ptr [rsp+3B8h+result.v]
    vmovups [rsp+3B8h+var_128], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+var_248.v+10h], xmm0
    vmovups ymm0, ymmword ptr [rsp+3B8h+var_248.v]
    vmovups [rsp+3B8h+var_328], ymm0
    vmovups [rsp+3B8h+var_348], ymm1
    vmovups [rsp+3B8h+var_328], ymm0
    vmovups [rsp+3B8h+var_158], xmm2
    vmovups [rsp+3B8h+var_348], ymm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm2
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1329 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Load (1)", v1827);
    v1303 = !v1329;
    if ( v1329 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_348]
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1333 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Load (1)", v1827);
    v1303 = !v1333;
    if ( v1333 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1336 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Load (1)", v1827);
    v1303 = !v1336;
    if ( v1336 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1339 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Load (1)", v1827);
    v1303 = !v1339;
    if ( v1339 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_348+10h]
    vucomiss xmm6, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1341 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Load (2)", v1827);
    v1303 = !v1341;
    if ( v1341 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1344 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Load (2)", v1827);
    v1303 = !v1344;
    if ( v1344 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1347 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Load (2)", v1827);
    v1303 = !v1347;
    if ( v1347 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1350 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Load (2)", v1827);
    v1303 = !v1350;
    if ( v1350 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_328]
    vucomiss xmm6, dword ptr [rsp+3B8h+var_288]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1352 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Load (3)", v1827);
    v1303 = !v1352;
    if ( v1352 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_370]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1355 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Load (3)", v1827);
    v1303 = !v1355;
    if ( v1355 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_368]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1358 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Load (3)", v1827);
    v1303 = !v1358;
    if ( v1358 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, [rsp+3B8h+var_36C]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1361 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Load (3)", v1827);
    v1303 = !v1361;
    if ( v1361 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_328+10h]
    vmovups xmm0, [rsp+3B8h+var_308]
    vucomiss xmm6, xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1364 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Load (4)", v1827);
    v1303 = !v1364;
    if ( v1364 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_364]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1367 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Load (4)", v1827);
    v1303 = !v1367;
    if ( v1367 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_374]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1370 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Load (4)", v1827);
    v1303 = !v1370;
    if ( v1370 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, [rsp+3B8h+var_378]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1303 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Load (4)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm12
    vinsertps xmm0, xmm0, xmm13, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm15, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups [rsp+3B8h+var_288], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_368], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_370], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovaps xmm3, xmm0
    vmovss  xmm0, dword ptr [rsp+3B8h+var_288]
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups [rsp+3B8h+var_308], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_374], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_364], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups xmm3, [rsp+3B8h+var_308]
    vmovaps xmm1, xmm0
    vmovss  [rsp+3B8h+var_36C], xmm0
    vmovaps xmm0, xmm3
    vinsertps xmm0, xmm0, [rsp+3B8h+var_374], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_364], 20h
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vinsertps xmm0, xmm12, xmm13, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm15, 30h ; '0'
    vmovdqa xmmword ptr [rsp+3B8h+var_348+10h], xmm0
    vmovups [rsp+3B8h+var_104], xmm0
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm2, xmm6, xmm7, 10h
    vinsertps xmm2, xmm2, xmm8, 20h ; ' '
    vinsertps xmm2, xmm2, xmm9, 30h ; '0'
    vucomiss xmm2, xmm6
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm2
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm2
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovups xmm0, [rsp+3B8h+var_288]
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 20h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_378], 30h
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+var_328], xmm0
    vmovups [rsp+3B8h+var_F4], xmm0
    vinsertps xmm0, xmm3, [rsp+3B8h+var_374], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_364], 20h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_36C], 30h
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+var_348], xmm2
    vmovdqa xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovdqa xmmword ptr [rsp+3B8h+var_328+10h], xmm0
    vmovss  [rsp+3B8h+var_118], xmm1
    vmovups ymm1, [rsp+3B8h+var_348]
    vmovups [rsp+3B8h+var_E4], xmm0
    vmovups ymm0, [rsp+3B8h+var_328]
    vmovups ymmword ptr [rsp+3B8h+result.v], ymm1
  }
  result[1] = *(float4 *)&_RT0.m256i_u64[2];
  __asm
  {
    vmovups ymmword ptr [rsp+3B8h+var_248.v], ymm0
    vmovups [rsp+3B8h+var_328], ymm0
    vmovups [rsp+3B8h+var_114], xmm2
    vmovups [rsp+3B8h+var_348], ymm1
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm2
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1463 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4LoadUnaligned (1)", v1827);
    v1429 = !v1463;
    if ( v1463 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_348]
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1467 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4LoadUnaligned (1)", v1827);
    v1429 = !v1467;
    if ( v1467 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm8
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1470 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4LoadUnaligned (1)", v1827);
    v1429 = !v1470;
    if ( v1470 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm9
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1473 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4LoadUnaligned (1)", v1827);
    v1429 = !v1473;
    if ( v1473 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_348+10h]
    vucomiss xmm6, xmm12
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1475 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4LoadUnaligned (2)", v1827);
    v1429 = !v1475;
    if ( v1475 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm13
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1478 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4LoadUnaligned (2)", v1827);
    v1429 = !v1478;
    if ( v1478 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm14
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1481 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4LoadUnaligned (2)", v1827);
    v1429 = !v1481;
    if ( v1481 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm15
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1484 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4LoadUnaligned (2)", v1827);
    v1429 = !v1484;
    if ( v1484 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_328]
    vucomiss xmm6, dword ptr [rsp+3B8h+var_288]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1486 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4LoadUnaligned (3)", v1827);
    v1429 = !v1486;
    if ( v1486 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_368]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1489 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4LoadUnaligned (3)", v1827);
    v1429 = !v1489;
    if ( v1489 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_370]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1492 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4LoadUnaligned (3)", v1827);
    v1429 = !v1492;
    if ( v1492 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, [rsp+3B8h+var_378]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1495 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4LoadUnaligned (3)", v1827);
    v1429 = !v1495;
    if ( v1495 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_328+10h]
    vmovups xmm0, [rsp+3B8h+var_308]
    vucomiss xmm6, xmm0
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1498 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4LoadUnaligned (4)", v1827);
    v1429 = !v1498;
    if ( v1498 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_374]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1501 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4LoadUnaligned (4)", v1827);
    v1429 = !v1501;
    if ( v1501 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_364]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    v1504 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4LoadUnaligned (4)", v1827);
    v1429 = !v1504;
    if ( v1504 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, [rsp+3B8h+var_36C]
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm6
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
  }
  if ( !v1429 )
  {
    LODWORD(v1827) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4LoadUnaligned (4)", v1827) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm9
    vinsertps xmm8, xmm8, xmm12, 10h
    vinsertps xmm8, xmm8, xmm13, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovaps xmm14, xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_35C], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm15
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+3B8h+var_378], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+3B8h+var_358], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_354], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_374], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_364], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+3B8h+var_374], 10h
    vinsertps xmm6, xmm6, [rsp+3B8h+var_364], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+3B8h+var_360], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_36C], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_368], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_370], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vucomiss xmm8, xmm9
    vmovss  dword ptr [rsp+3B8h+var_308], xmm0
    vmovaps xmm3, xmm0
    vmovss  xmm0, [rsp+3B8h+var_36C]
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vmovaps [rsp+3B8h+var_1F8], xmm0
    vmovups [rsp+3B8h+var_228], xmm8
    vmovaps [rsp+3B8h+var_218], xmm7
    vmovaps [rsp+3B8h+var_208], xmm6
  }
  v1562 = v13;
  unitCheck(v1562, "Float4x4Store (xx)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_228+4]
    vucomiss xmm0, xmm12
  }
  v1564 = v13;
  unitCheck(v1564, "Float4x4Store (xy)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_228+8]
    vucomiss xmm0, xmm13
  }
  v1566 = v13;
  unitCheck(v1566, "Float4x4Store (xz)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_228+0Ch]
    vucomiss xmm0, xmm14
  }
  v1568 = v13;
  unitCheck(v1568, "Float4x4Store (xw)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_218]
    vucomiss xmm0, xmm15
  }
  v1570 = v13;
  unitCheck(v1570, "Float4x4Store (yx)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_218+4]
    vucomiss xmm0, [rsp+3B8h+var_35C]
  }
  v1572 = v13;
  unitCheck(v1572, "Float4x4Store (yy)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_218+8]
    vucomiss xmm0, [rsp+3B8h+var_378]
  }
  v1574 = v13;
  unitCheck(v1574, "Float4x4Store (yz)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_218+0Ch]
    vucomiss xmm0, [rsp+3B8h+var_358]
  }
  v1576 = v13;
  unitCheck(v1576, "Float4x4Store (yw)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_208]
    vucomiss xmm0, [rsp+3B8h+var_354]
  }
  v1578 = v13;
  unitCheck(v1578, "Float4x4Store (zx)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_208+4]
    vucomiss xmm0, [rsp+3B8h+var_374]
  }
  v1580 = v13;
  unitCheck(v1580, "Float4x4Store (zy)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_208+8]
    vucomiss xmm0, [rsp+3B8h+var_364]
  }
  v1582 = v13;
  unitCheck(v1582, "Float4x4Store (zz)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_208+0Ch]
    vucomiss xmm0, [rsp+3B8h+var_360]
  }
  v1584 = v13;
  unitCheck(v1584, "Float4x4Store (zw)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1F8]
    vucomiss xmm0, [rsp+3B8h+var_36C]
  }
  v1586 = v13;
  unitCheck(v1586, "Float4x4Store (wx)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1F8+4]
    vucomiss xmm0, [rsp+3B8h+var_368]
  }
  v1588 = v13;
  unitCheck(v1588, "Float4x4Store (wy)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1F8+8]
    vucomiss xmm0, [rsp+3B8h+var_370]
  }
  v1590 = v13;
  unitCheck(v1590, "Float4x4Store (wz)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1F8+0Ch]
    vucomiss xmm0, dword ptr [rsp+3B8h+var_308]
  }
  v1592 = v13;
  unitCheck(v1592, "Float4x4Store (ww)", "Incorrect result");
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm9
    vinsertps xmm8, xmm8, xmm12, 10h
    vinsertps xmm8, xmm8, xmm13, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovaps xmm14, xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rsp+3B8h+var_308], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm15
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+3B8h+var_378], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+3B8h+var_360], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_354], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_374], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_364], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+3B8h+var_374], 10h
    vinsertps xmm6, xmm6, [rsp+3B8h+var_364], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+3B8h+var_358], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_36C], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_368], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_370], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vucomiss xmm8, xmm9
    vmovss  [rsp+3B8h+var_35C], xmm0
    vmovaps xmm3, xmm0
    vmovss  xmm0, [rsp+3B8h+var_36C]
    vinsertps xmm0, xmm0, [rsp+3B8h+var_368], 10h
    vinsertps xmm0, xmm0, [rsp+3B8h+var_370], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vmovups [rsp+3B8h+var_194], xmm0
    vmovups [rsp+3B8h+var_1C4], xmm8
    vmovups [rsp+3B8h+var_1B4], xmm7
    vmovups [rsp+3B8h+var_1A4], xmm6
  }
  v1648 = v13;
  unitCheck(v1648, "Float4x4StoreUnaligned (xx)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1C4+4]
    vucomiss xmm0, xmm12
  }
  v1650 = v13;
  unitCheck(v1650, "Float4x4StoreUnaligned (xy)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1C4+8]
    vucomiss xmm0, xmm13
  }
  v1652 = v13;
  unitCheck(v1652, "Float4x4StoreUnaligned (xz)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1C4+0Ch]
    vucomiss xmm0, xmm14
  }
  v1654 = v13;
  unitCheck(v1654, "Float4x4StoreUnaligned (xw)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1B4]
    vucomiss xmm0, xmm15
  }
  v1656 = v13;
  unitCheck(v1656, "Float4x4StoreUnaligned (yx)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1B4+4]
    vucomiss xmm0, dword ptr [rsp+3B8h+var_308]
  }
  v1658 = v13;
  unitCheck(v1658, "Float4x4StoreUnaligned (yy)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1B4+8]
    vucomiss xmm0, [rsp+3B8h+var_378]
  }
  v1660 = v13;
  unitCheck(v1660, "Float4x4StoreUnaligned (yz)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1B4+0Ch]
    vucomiss xmm0, [rsp+3B8h+var_360]
  }
  v1662 = v13;
  unitCheck(v1662, "Float4x4StoreUnaligned (yw)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1A4]
    vucomiss xmm0, [rsp+3B8h+var_354]
  }
  v1664 = v13;
  unitCheck(v1664, "Float4x4StoreUnaligned (zx)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1A4+4]
    vucomiss xmm0, [rsp+3B8h+var_374]
  }
  v1666 = v13;
  unitCheck(v1666, "Float4x4StoreUnaligned (zy)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1A4+8]
    vucomiss xmm0, [rsp+3B8h+var_364]
  }
  v1668 = v13;
  unitCheck(v1668, "Float4x4StoreUnaligned (zz)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_1A4+0Ch]
    vucomiss xmm0, [rsp+3B8h+var_358]
  }
  v1670 = v13;
  unitCheck(v1670, "Float4x4StoreUnaligned (zw)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_194]
    vucomiss xmm0, [rsp+3B8h+var_36C]
  }
  v1672 = v13;
  unitCheck(v1672, "Float4x4StoreUnaligned (wx)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_194+4]
    vucomiss xmm0, [rsp+3B8h+var_368]
  }
  v1674 = v13;
  unitCheck(v1674, "Float4x4StoreUnaligned (wy)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_194+8]
    vucomiss xmm0, [rsp+3B8h+var_370]
  }
  v1676 = v13;
  unitCheck(v1676, "Float4x4StoreUnaligned (wz)", "Incorrect result");
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3B8h+var_194+0Ch]
    vucomiss xmm0, [rsp+3B8h+var_35C]
  }
  v1678 = v13;
  unitCheck(v1678, "Float4x4StoreUnaligned (ww)", "Incorrect result");
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rsp+3B8h+var_308], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_374], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_29C], xmm9
    vmovss  [rsp+3B8h+var_2A0], xmm8
    vmovss  [rsp+3B8h+var_2A4], xmm7
  }
  HIDWORD(v1857) = 0;
  __asm
  {
    vmovups xmm9, [rsp+3B8h+var_288]
    vmovss  xmm9, xmm9, xmm6
    vmovaps xmm1, xmm0
    vinsertps xmm9, xmm9, xmm12, 10h
    vinsertps xmm9, xmm9, xmm13, 20h ; ' '
    vmovups [rsp+3B8h+var_288], xmm9
  }
  HIDWORD(v1857) = 0;
  __asm
  {
    vmovups xmm8, [rsp+3B8h+var_288]
    vmovss  xmm8, xmm8, xmm14
    vinsertps xmm8, xmm8, xmm15, 10h
    vinsertps xmm8, xmm8, xmm7, 20h ; ' '
    vmovups [rsp+3B8h+var_288], xmm8
  }
  HIDWORD(v1857) = 0;
  __asm
  {
    vmovups xmm7, [rsp+3B8h+var_288]
    vmovss  [rsp+3B8h+var_360], xmm0
    vmovss  [rsp+3B8h+var_298], xmm0
    vmovss  xmm0, [rsp+3B8h+var_378]
    vmovss  xmm7, xmm7, xmm0
    vinsertps xmm7, xmm7, [rsp+3B8h+var_374], 10h
    vinsertps xmm7, xmm7, xmm1, 20h ; ' '
    vmovups [rsp+3B8h+var_288], xmm7
    vmovss  [rsp+3B8h+var_2B8], xmm6
    vmovss  [rsp+3B8h+var_2B4], xmm12
    vmovss  [rsp+3B8h+var_2B0], xmm13
    vmovss  [rsp+3B8h+var_2AC], xmm14
    vmovss  [rsp+3B8h+var_2A8], xmm15
    vucomiss xmm9, xmm6
  }
  unitCheck(1, "Float4x4LoadMat33Unaligned (1)", "Incorrect X component");
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vucomiss xmm0, xmm12
  }
  v1720 = v13;
  unitCheck(v1720, "Float4x4LoadMat33Unaligned (1)", "Incorrect Y component");
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vucomiss xmm0, xmm13
  }
  v1722 = v13;
  unitCheck(v1722, "Float4x4LoadMat33Unaligned (1)", "Incorrect Z component");
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0FFh
    vxorps  xmm13, xmm13, xmm13
    vucomiss xmm0, xmm13
  }
  v1725 = v13;
  unitCheck(v1725, "Float4x4LoadMat33Unaligned (1)", "Incorrect W component");
  __asm { vucomiss xmm8, xmm14 }
  v1726 = v13;
  unitCheck(v1726, "Float4x4LoadMat33Unaligned (2)", "Incorrect X component");
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, xmm15
  }
  v1728 = v13;
  unitCheck(v1728, "Float4x4LoadMat33Unaligned (2)", "Incorrect Y component");
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, dword ptr [rsp+3B8h+var_308]
  }
  v1730 = v13;
  unitCheck(v1730, "Float4x4LoadMat33Unaligned (2)", "Incorrect Z component");
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, xmm13
  }
  v1732 = v13;
  unitCheck(v1732, "Float4x4LoadMat33Unaligned (2)", "Incorrect W component");
  __asm { vucomiss xmm7, [rsp+3B8h+var_378] }
  v1733 = v13;
  unitCheck(v1733, "Float4x4LoadMat33Unaligned (3)", "Incorrect X component");
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_374]
  }
  v1735 = v13;
  unitCheck(v1735, "Float4x4LoadMat33Unaligned (3)", "Incorrect Y component");
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_360]
  }
  v1737 = v13;
  unitCheck(v1737, "Float4x4LoadMat33Unaligned (3)", "Incorrect Z component");
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vucomiss xmm0, xmm13
  }
  v1739 = v13;
  unitCheck(v1739, "Float4x4LoadMat33Unaligned (3)", "Incorrect W component");
  __asm
  {
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_354], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_358], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rsp+3B8h+var_308], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_360], xmm0
    vmovaps xmm1, xmm10; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_378], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+3B8h+var_374], xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm10; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm10, dword ptr [rsp+3B8h+var_308]
    vmovss  xmm11, [rsp+3B8h+var_360]
    vmovss  [rsp+3B8h+var_35C], xmm0
    vmovaps xmm1, xmm0
    vmovss  xmm0, [rsp+3B8h+var_378]
    vmovss  dword ptr [rsp+3B8h+var_2C4], xmm0
    vmovss  xmm0, [rsp+3B8h+var_374]
    vmovss  dword ptr [rsp+3B8h+var_2C4+4], xmm0
    vmovss  [rsp+3B8h+var_2E8], xmm6
    vmovss  [rsp+3B8h+var_2E4], xmm9
    vmovss  [rsp+3B8h+var_2E0], xmm12
    vmovss  dword ptr [rsp+3B8h+element], xmm14
    vmovss  dword ptr [rsp+3B8h+element+4], xmm15
    vmovss  dword ptr [rsp+3B8h+element+8], xmm7
    vmovss  dword ptr [rsp+3B8h+var_2D0], xmm8
    vmovss  dword ptr [rsp+3B8h+var_2D0+4], xmm10
    vmovss  dword ptr [rsp+3B8h+var_2D0+8], xmm11
  }
  HIDWORD(v1857) = 0;
  __asm
  {
    vmovups xmm0, [rsp+3B8h+var_288]
    vmovss  xmm0, xmm0, xmm6
    vinsertps xmm0, xmm0, xmm9, 10h
    vinsertps xmm0, xmm0, xmm12, 20h ; ' '
    vmovups xmmword ptr [rsp+3B8h+result.v], xmm0
    vmovss  dword ptr [rsp+3B8h+var_2C4+8], xmm1
  }
  Float4LoadVec3(&element, &result[1]);
  Float4LoadVec3(&v1846, v1860);
  Float4LoadVec3(&v1847, &v1860[1]);
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+3B8h+var_248.v+10h]
    vxorps  xmm1, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovups xmm8, xmmword ptr [rsp+3B8h+result.v]
    vucomiss xmm8, xmm6
    vandps  xmm2, xmm1, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
    vxorps  xmm7, xmm2, xmm3
  }
  v1785 = v13;
  unitCheck(v1785, "Float4x4LoadMat43 (1)", "Incorrect X component");
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vucomiss xmm0, xmm9
  }
  v1787 = v13;
  unitCheck(v1787, "Float4x4LoadMat43 (1)", "Incorrect Y component");
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vucomiss xmm0, xmm12
  }
  v1789 = v13;
  unitCheck(v1789, "Float4x4LoadMat43 (1)", "Incorrect Z component");
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vucomiss xmm0, xmm13
  }
  v1791 = v13;
  unitCheck(v1791, "Float4x4LoadMat43 (1)", "Incorrect W component");
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+result.v+10h]
    vucomiss xmm6, xmm14
  }
  v1793 = v13;
  unitCheck(v1793, "Float4x4LoadMat43 (2)", "Incorrect X component");
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm15
  }
  v1795 = v13;
  unitCheck(v1795, "Float4x4LoadMat43 (2)", "Incorrect Y component");
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_354]
  }
  v1797 = v13;
  unitCheck(v1797, "Float4x4LoadMat43 (2)", "Incorrect Z component");
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
  }
  v1799 = v13;
  unitCheck(v1799, "Float4x4LoadMat43 (2)", "Incorrect W component");
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+3B8h+var_248.v]
    vucomiss xmm6, [rsp+3B8h+var_358]
  }
  v1801 = v13;
  unitCheck(v1801, "Float4x4LoadMat43 (3)", "Incorrect X component");
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm10
  }
  v1803 = v13;
  unitCheck(v1803, "Float4x4LoadMat43 (3)", "Incorrect Y component");
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm11
  }
  v1805 = v13;
  unitCheck(v1805, "Float4x4LoadMat43 (3)", "Incorrect Z component");
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm13
  }
  v1807 = v13;
  unitCheck(v1807, "Float4x4LoadMat43 (3)", "Incorrect W component");
  __asm { vucomiss xmm7, [rsp+3B8h+var_378] }
  v1808 = v13;
  unitCheck(v1808, "Float4x4LoadMat43 (4)", "Incorrect X component");
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm0, [rsp+3B8h+var_374]
  }
  v1810 = v13;
  unitCheck(v1810, "Float4x4LoadMat43 (4)", "Incorrect Y component");
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+3B8h+var_35C]
  }
  v1812 = v13;
  unitCheck(v1812, "Float4x4LoadMat43 (4)", "Incorrect Z component");
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vucomiss xmm0, cs:__real@3f800000
  }
  v1814 = v13;
  unitCheck(v1814, "Float4x4LoadMat43 (4)", "Incorrect W component");
  _R11 = &v1881;
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
Float4LogicalTest
==============
*/
bool Float4LogicalTest()
{
  int v45; 
  int v79; 
  int v113; 
  int v147; 
  int v177; 
  bool v184; 
  bool v185; 
  unsigned int v186; 
  bool v187; 
  bool v188; 
  unsigned int v189; 
  bool v190; 
  bool v191; 
  int v192; 
  unsigned int v226; 
  bool v228; 
  bool v229; 
  unsigned int v230; 
  bool v231; 
  bool v232; 
  unsigned int v233; 
  bool v234; 
  bool v235; 
  int v236; 
  int v270; 
  bool v271; 
  bool v272; 
  int v273; 
  bool v274; 
  bool v275; 
  int v276; 
  bool v277; 
  bool v278; 
  int v279; 
  int v313; 
  bool v314; 
  bool v315; 
  int v316; 
  bool v317; 
  bool v318; 
  int v319; 
  bool v320; 
  bool v321; 
  int v322; 
  unsigned int v356; 
  bool v358; 
  bool v359; 
  unsigned int v360; 
  bool v361; 
  bool v362; 
  unsigned int v363; 
  bool v364; 
  bool v365; 
  int v367; 
  unsigned int v401; 
  bool v403; 
  bool v404; 
  unsigned int v405; 
  bool v406; 
  bool v407; 
  unsigned int v408; 
  bool v409; 
  bool v410; 
  int v412; 
  bool v447; 
  int v448; 
  int v449; 
  bool result; 
  __int64 v556; 
  __int128 v561; 
  __int128 v562; 
  __int128 v563; 
  __int128 v564; 
  __int128 v565; 
  __int128 v566; 
  __int128 v567; 
  __int128 v568; 
  __int128 v569; 
  __int128 v570; 
  __int128 v571; 
  __int128 v572; 
  __int128 v573; 
  __int128 v574; 
  __int128 v575; 
  __int128 v576; 
  __int128 v577; 
  __int128 v578; 
  char v579; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovss  xmm11, cs:__real@41000000
    vmovss  xmm12, cs:__real@c1000000
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovd   eax, xmm9
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vorps   xmm0, xmm1, xmm9
    vmovd   ecx, xmm1
  }
  v45 = _EAX | _ECX;
  __asm
  {
    vmovd   eax, xmm0
    vmovups [rsp+140h+var_D8+8], xmm9
    vmovups [rsp+140h+var_E8+8], xmm1
    vmovups [rsp+140h+var_F8+8], xmm0
  }
  if ( _EAX != v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Or (1)", g_unitSavedSeed_0) )
    __debugbreak();
  if ( DWORD1(v561) != (DWORD1(v575) | DWORD1(v569)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Or (2)", v556) )
      __debugbreak();
  }
  if ( DWORD2(v561) != (DWORD2(v575) | DWORD2(v569)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Or (3)", v556) )
      __debugbreak();
  }
  if ( HIDWORD(v561) != (HIDWORD(v575) | HIDWORD(v569)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Or (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovd   eax, xmm9
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vxorps  xmm0, xmm1, xmm9
    vmovd   ecx, xmm1
  }
  v79 = _EAX ^ _ECX;
  __asm
  {
    vmovd   eax, xmm0
    vmovups [rsp+140h+var_D8+8], xmm9
    vmovups [rsp+140h+var_F8+8], xmm1
    vmovups [rsp+140h+var_E8+8], xmm0
  }
  if ( _EAX != v79 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Xor (1)", v556) )
      __debugbreak();
  }
  if ( DWORD1(v570) != (DWORD1(v576) ^ DWORD1(v562)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Xor (2)", v556) )
      __debugbreak();
  }
  if ( DWORD2(v570) != (DWORD2(v576) ^ DWORD2(v562)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Xor (3)", v556) )
      __debugbreak();
  }
  if ( HIDWORD(v570) != (HIDWORD(v576) ^ HIDWORD(v562)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Xor (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovd   eax, xmm9
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vandps  xmm0, xmm1, xmm9
    vmovd   ecx, xmm1
  }
  v113 = _EAX & _ECX;
  __asm
  {
    vmovd   eax, xmm0
    vmovups [rsp+140h+var_D8+8], xmm9
    vmovups [rsp+140h+var_F8+8], xmm1
    vmovups [rsp+140h+var_E8+8], xmm0
  }
  if ( _EAX != v113 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4And (1)", v556) )
      __debugbreak();
  }
  if ( DWORD1(v571) != (DWORD1(v577) & DWORD1(v563)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4And (2)", v556) )
      __debugbreak();
  }
  if ( DWORD2(v571) != (DWORD2(v577) & DWORD2(v563)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4And (3)", v556) )
      __debugbreak();
  }
  if ( HIDWORD(v571) != (HIDWORD(v577) & HIDWORD(v563)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4And (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovd   eax, xmm9
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vandnps xmm0, xmm1, xmm9
    vmovd   ecx, xmm1
  }
  v147 = _EAX & ~_ECX;
  __asm
  {
    vmovd   eax, xmm0
    vmovups [rsp+140h+var_D8+8], xmm9
    vmovups [rsp+140h+var_F8+8], xmm1
    vmovups [rsp+140h+var_E8+8], xmm0
  }
  if ( _EAX != v147 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Andc (1)", v556) )
      __debugbreak();
  }
  if ( DWORD1(v572) != (DWORD1(v578) & ~DWORD1(v564)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Andc (2)", v556) )
      __debugbreak();
  }
  if ( DWORD2(v572) != (DWORD2(v578) & ~DWORD2(v564)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Andc (3)", v556) )
      __debugbreak();
  }
  if ( HIDWORD(v572) != (HIDWORD(v578) & ~HIDWORD(v564)) )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4Andc (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm9, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm15, xmm0
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm0
    vmovss  [rsp+140h+var_100], xmm0
  }
  v177 = 0;
  __asm
  {
    vcomiss xmm8, xmm6
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcmpltps xmm1, xmm0, xmm7
    vmovd   eax, xmm1
    vmovups [rsp+140h+var_F8+8], xmm1
  }
  v184 = _EAX == 0;
  if ( _EAX )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v185 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGtfp (1)", v556);
    v184 = !v185;
    if ( v185 )
      __debugbreak();
  }
  __asm { vcomiss xmm9, xmm10 }
  v186 = 0;
  if ( !v184 )
    v186 = -1;
  v187 = DWORD1(v565) <= v186;
  if ( DWORD1(v565) != v186 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v188 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGtfp (2)", v556);
    v187 = !v188;
    if ( v188 )
      __debugbreak();
  }
  __asm { vcomiss xmm13, xmm14 }
  v189 = 0;
  if ( !v187 )
    v189 = -1;
  v190 = DWORD2(v565) <= v189;
  if ( DWORD2(v565) != v189 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v191 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGtfp (3)", v556);
    v190 = !v191;
    if ( v191 )
      __debugbreak();
  }
  __asm { vcomiss xmm15, [rsp+140h+var_100] }
  v192 = 0;
  if ( !v190 )
    v192 = -1;
  if ( HIDWORD(v565) != v192 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGtfp (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm9, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm15, xmm0
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm0
    vmovss  [rsp+140h+var_100], xmm0
    vcomiss xmm8, xmm6
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcmpleps xmm1, xmm0, xmm7
  }
  v226 = 0;
  __asm { vmovd   eax, xmm1 }
  if ( !v228 )
    v226 = -1;
  __asm { vmovups [rsp+140h+var_F8+8], xmm1 }
  v228 = _EAX < v226;
  if ( _EAX != v226 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v229 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGefp (1)", v556);
    v228 = 0;
    if ( v229 )
      __debugbreak();
  }
  __asm { vcomiss xmm9, xmm10 }
  v230 = 0;
  if ( !v228 )
    v230 = -1;
  v231 = DWORD1(v566) < v230;
  if ( DWORD1(v566) != v230 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v232 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGefp (2)", v556);
    v231 = 0;
    if ( v232 )
      __debugbreak();
  }
  __asm { vcomiss xmm13, xmm14 }
  v233 = 0;
  if ( !v231 )
    v233 = -1;
  v234 = DWORD2(v566) < v233;
  if ( DWORD2(v566) != v233 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v235 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGefp (3)", v556);
    v234 = 0;
    if ( v235 )
      __debugbreak();
  }
  __asm { vcomiss xmm15, [rsp+140h+var_100] }
  v236 = 0;
  if ( !v234 )
    v236 = -1;
  if ( HIDWORD(v566) != v236 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpGefp (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vucomiss xmm7, xmm6
    vmovaps xmm15, xmm0
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm13, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovaps xmm0, xmm7
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm14, 30h ; '0'
    vcmpeqps xmm0, xmm1, xmm0
    vmovaps [rsp+140h+var_E8+8], xmm0
  }
  v270 = -1;
  if ( !v271 )
    v270 = 0;
  v271 = (_DWORD)v573 == v270;
  if ( (_DWORD)v573 != v270 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v272 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpEqfp (1)", v556);
    v271 = !v272;
    if ( v272 )
      __debugbreak();
  }
  __asm { vucomiss xmm8, xmm9 }
  v273 = -1;
  if ( !v271 )
    v273 = 0;
  v274 = DWORD1(v573) == v273;
  if ( DWORD1(v573) != v273 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v275 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpEqfp (2)", v556);
    v274 = !v275;
    if ( v275 )
      __debugbreak();
  }
  __asm { vucomiss xmm10, xmm13 }
  v276 = -1;
  if ( !v274 )
    v276 = 0;
  v277 = DWORD2(v573) == v276;
  if ( DWORD2(v573) != v276 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v278 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpEqfp (3)", v556);
    v277 = !v278;
    if ( v278 )
      __debugbreak();
  }
  __asm { vucomiss xmm14, xmm15 }
  v279 = -1;
  if ( !v277 )
    v279 = 0;
  if ( HIDWORD(v573) != v279 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpEqfp (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vucomiss xmm7, xmm6
    vmovaps xmm15, xmm0
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm9, 10h
    vinsertps xmm1, xmm1, xmm13, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovaps xmm0, xmm7
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm14, 30h ; '0'
    vcmpneqps xmm0, xmm1, xmm0
    vmovaps [rsp+140h+var_E8+8], xmm0
  }
  v313 = -1;
  if ( v271 )
    v313 = 0;
  v314 = (_DWORD)v574 == v313;
  if ( (_DWORD)v574 != v313 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v315 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpNeqfp (1)", v556);
    v314 = !v315;
    if ( v315 )
      __debugbreak();
  }
  __asm { vucomiss xmm8, xmm9 }
  v316 = -1;
  if ( v314 )
    v316 = 0;
  v317 = DWORD1(v574) == v316;
  if ( DWORD1(v574) != v316 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v318 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpNeqfp (2)", v556);
    v317 = !v318;
    if ( v318 )
      __debugbreak();
  }
  __asm { vucomiss xmm10, xmm13 }
  v319 = -1;
  if ( v317 )
    v319 = 0;
  v320 = DWORD2(v574) == v319;
  if ( DWORD2(v574) != v319 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v321 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpNeqfp (3)", v556);
    v320 = !v321;
    if ( v321 )
      __debugbreak();
  }
  __asm { vucomiss xmm14, xmm15 }
  v322 = -1;
  if ( v320 )
    v322 = 0;
  if ( HIDWORD(v574) != v322 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpNeqfp (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm9, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm15, xmm0
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm0
    vmovss  [rsp+140h+var_100], xmm0
    vcomiss xmm6, xmm8
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcmpleps xmm1, xmm7, xmm0
  }
  v356 = 0;
  __asm { vmovd   eax, xmm1 }
  if ( !v228 )
    v356 = -1;
  __asm { vmovups [rsp+140h+var_F8+8], xmm1 }
  v358 = _EAX < v356;
  if ( _EAX != v356 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v359 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLefp (1)", v556);
    v358 = 0;
    if ( v359 )
      __debugbreak();
  }
  __asm { vcomiss xmm10, xmm9 }
  v360 = 0;
  if ( !v358 )
    v360 = -1;
  v361 = DWORD1(v567) < v360;
  if ( DWORD1(v567) != v360 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v362 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLefp (2)", v556);
    v361 = 0;
    if ( v362 )
      __debugbreak();
  }
  __asm { vcomiss xmm14, xmm13 }
  v363 = 0;
  if ( !v361 )
    v363 = -1;
  v364 = DWORD2(v567) < v363;
  if ( DWORD2(v567) != v363 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v365 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLefp (3)", v556);
    v364 = 0;
    if ( v365 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+140h+var_100]
    vcomiss xmm0, xmm15
  }
  v367 = 0;
  if ( !v364 )
    v367 = -1;
  if ( HIDWORD(v567) != v367 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLefp (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm9, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm15, xmm0
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm0
    vmovss  [rsp+140h+var_100], xmm0
    vcomiss xmm6, xmm8
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm14, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcmpltps xmm1, xmm7, xmm0
  }
  v401 = 0;
  __asm { vmovd   eax, xmm1 }
  if ( !v228 && !v271 )
    v401 = -1;
  __asm { vmovups [rsp+140h+var_F8+8], xmm1 }
  v403 = _EAX <= v401;
  if ( _EAX != v401 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v404 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLtfp (1)", v556);
    v403 = !v404;
    if ( v404 )
      __debugbreak();
  }
  __asm { vcomiss xmm10, xmm9 }
  v405 = 0;
  if ( !v403 )
    v405 = -1;
  v406 = DWORD1(v568) <= v405;
  if ( DWORD1(v568) != v405 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v407 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLtfp (2)", v556);
    v406 = !v407;
    if ( v407 )
      __debugbreak();
  }
  __asm { vcomiss xmm14, xmm13 }
  v408 = 0;
  if ( !v406 )
    v408 = -1;
  v409 = DWORD2(v568) <= v408;
  if ( DWORD2(v568) != v408 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    v410 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLtfp (3)", v556);
    v409 = !v410;
    if ( v410 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+140h+var_100]
    vcomiss xmm0, xmm15
  }
  v412 = 0;
  if ( !v409 )
    v412 = -1;
  if ( HIDWORD(v568) != v412 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpLtfp (4)", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm2, xmm0
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm13, 10h
    vinsertps xmm1, xmm1, xmm14, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovaps xmm0, xmm7
    vinsertps xmm0, xmm0, xmm9, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm8, 30h ; '0'
    vcmpltps xmm0, xmm0, xmm1
    vmovmskps eax, xmm0
  }
  LOBYTE(_EAX) = _EAX & 0xF;
  v447 = (unsigned __int8)_EAX < 0xFu;
  v448 = (_BYTE)_EAX == 15;
  __asm { vcomiss xmm7, xmm6 }
  if ( (unsigned __int8)_EAX >= 0xFu )
    goto LABEL_171;
  __asm
  {
    vcomiss xmm9, xmm13
    vcomiss xmm10, xmm14
    vcomiss xmm8, xmm2
  }
  v449 = 1;
  if ( !v447 )
LABEL_171:
    v449 = 0;
  if ( v448 != v449 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4AllLt", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm2, xmm0
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm10, 10h
    vinsertps xmm1, xmm1, xmm14, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovaps xmm0, xmm7
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm13, 20h ; ' '
    vinsertps xmm0, xmm0, xmm9, 30h ; '0'
    vcmpltps xmm0, xmm0, xmm1
    vmovmskps eax, xmm0
    vcomiss xmm7, xmm6
    vcomiss xmm8, xmm10
    vcomiss xmm13, xmm14
    vcomiss xmm9, xmm2
  }
  if ( (_EAX & 0xF) != 0 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4AllLt", v556) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm10
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vcomiss xmm1, xmm9
    vcomiss xmm8, xmm10
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm10
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vcomiss xmm1, xmm9
  }
  result = !v228 && !v271;
  __asm { vcomiss xmm8, xmm10 }
  LOBYTE(v177) = result;
  if ( result != v177 )
  {
    LODWORD(v556) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CmpXLt", v556);
    if ( result )
      __debugbreak();
  }
  _R11 = &v579;
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
  return result;
}

/*
==============
Float4MathTest
==============
*/
void Float4MathTest()
{
  bool v25; 
  bool v33; 
  bool v36; 
  char v60; 
  bool v79; 
  bool v83; 
  bool v87; 
  char v111; 
  bool v129; 
  bool v136; 
  char v151; 
  bool v174; 
  bool v179; 
  char v205; 
  bool v229; 
  bool v233; 
  bool v237; 
  char v279; 
  bool v291; 
  bool v298; 
  bool v305; 
  char v350; 
  bool v362; 
  bool v369; 
  bool v377; 
  char v413; 
  bool v432; 
  bool v436; 
  bool v440; 
  char v456; 
  bool v474; 
  bool v478; 
  bool v482; 
  char v497; 
  bool v517; 
  bool v521; 
  bool v525; 
  char v557; 
  bool v583; 
  bool v587; 
  bool v591; 
  char v607; 
  bool v631; 
  bool v636; 
  bool v641; 
  char v657; 
  bool v681; 
  bool v686; 
  bool v691; 
  char v704; 
  bool v705; 
  bool v724; 
  bool v729; 
  bool v734; 
  bool v739; 
  bool v743; 
  bool v745; 
  bool v747; 
  char v760; 
  char v761; 
  bool v791; 
  bool v796; 
  bool v801; 
  char v817; 
  char v818; 
  bool v851; 
  bool v856; 
  bool v861; 
  char v877; 
  bool v899; 
  bool v905; 
  bool v911; 
  char v928; 
  bool v943; 
  bool v949; 
  bool v955; 
  char v986; 
  bool v996; 
  bool v1001; 
  bool v1006; 
  char v1037; 
  bool v1047; 
  bool v1052; 
  bool v1057; 
  char v1088; 
  bool v1098; 
  bool v1103; 
  bool v1108; 
  char v1139; 
  bool v1149; 
  bool v1154; 
  bool v1159; 
  char v1183; 
  bool v1190; 
  bool v1195; 
  bool v1200; 
  bool v1216; 
  bool v1226; 
  bool v1229; 
  bool v1232; 
  bool v1246; 
  bool v1255; 
  bool v1258; 
  bool v1261; 
  char v1275; 
  bool v1289; 
  bool v1294; 
  bool v1299; 
  bool v1331; 
  bool v1339; 
  bool v1342; 
  bool v1345; 
  bool v1376; 
  bool v1384; 
  bool v1387; 
  bool v1390; 
  char v1436; 
  char v1437; 
  bool v1524; 
  bool v1525; 
  bool v1527; 
  bool v1529; 
  bool v1531; 
  bool v1544; 
  bool v1553; 
  bool v1557; 
  bool v1561; 
  bool v1565; 
  bool v1567; 
  bool v1569; 
  bool v1571; 
  bool v1584; 
  bool v1593; 
  bool v1597; 
  bool v1601; 
  bool v1616; 
  bool v1629; 
  bool v1633; 
  bool v1637; 
  __int64 v1652; 
  unsigned int v1653; 
  char v1700; 
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
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm12, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
    vxorps  xmm7, xmm7, xmm7
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm9, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vsubps  xmm7, xmm7, xmm1
    vxorps  xmm0, xmm6, xmm10
    vucomiss xmm7, xmm0
  }
  if ( !v25 )
  {
    v1653 = g_unitSavedSeed_0;
    v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3Negate", v1653);
    v25 = !v33;
    if ( v33 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vxorps  xmm0, xmm8, xmm10
    vucomiss xmm1, xmm0
  }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3Negate", v1652);
    v25 = !v36;
    if ( v36 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vxorps  xmm0, xmm9, xmm10
    vucomiss xmm1, xmm0
  }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3Negate", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vinsertps xmm8, xmm8, xmm11, 0
    vinsertps xmm8, xmm8, xmm10, 10h
    vinsertps xmm8, xmm8, xmm0, 20h ; ' '
    vmovaps xmm9, xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm13, cs:__real@3a83126f
    vmovaps xmm3, xmm0
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, xmm7, 0
    vinsertps xmm0, xmm0, xmm6, 10h
    vinsertps xmm0, xmm0, xmm3, 20h ; ' '
    vmulps  xmm0, xmm0, xmm8
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vmulss  xmm1, xmm6, xmm10
    vmulss  xmm0, xmm7, xmm11
    vhaddps xmm8, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm9
    vaddss  xmm6, xmm2, xmm1
    vsubss  xmm0, xmm8, xmm6
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm13
  }
  if ( !v60 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v79 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Dot", v1652);
    v60 = 0;
    if ( v79 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm6
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v60 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Dot", v1652);
    v60 = 0;
    if ( v83 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm6
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v60 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v87 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Dot", v1652);
    v60 = 0;
    if ( v87 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vsubss  xmm1, xmm0, xmm6
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v60 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3Dot", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vinsertps xmm6, xmm6, xmm7, 0
    vinsertps xmm6, xmm6, xmm11, 10h
    vinsertps xmm6, xmm6, xmm0, 20h ; ' '
    vmovaps xmm9, xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_10C], xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vinsertps xmm2, xmm2, xmm8, 0
    vinsertps xmm2, xmm2, [rsp+158h+var_10C], 10h
    vinsertps xmm2, xmm2, xmm0, 20h ; ' '
    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
    vmovaps xmm10, xmm0
    vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
    vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm6, xmm0, xmm3
    vmulss  xmm0, xmm9, [rsp+158h+var_10C]
    vmulss  xmm1, xmm10, xmm11
    vsubss  xmm1, xmm1, xmm0
    vsubss  xmm2, xmm6, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v111 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v129 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Cross", v1652);
    v111 = 0;
    if ( v129 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, xmm9
    vmulss  xmm0, xmm10, xmm7
    vsubss  xmm1, xmm1, xmm0
    vshufps xmm2, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v111 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v136 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Cross", v1652);
    v111 = 0;
    if ( v136 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm7, [rsp+158h+var_10C]
    vmulss  xmm0, xmm8, xmm11
    vsubss  xmm1, xmm1, xmm0
    vshufps xmm2, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v111 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Cross", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vxorps  xmm3, xmm3, xmm3
    vinsertps xmm3, xmm3, xmm6, 0
    vinsertps xmm3, xmm3, xmm8, 10h
    vinsertps xmm3, xmm3, xmm0, 20h ; ' '
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vmulps  xmm7, xmm1, xmm3
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm2, xmm8, xmm8
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm3, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm0, xmm2, xmm2
    vdivss  xmm10, xmm1, xmm0
    vmulss  xmm0, xmm10, xmm6
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v151 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v174 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3NormalizeEstimate", v1652);
    v151 = 0;
    if ( v174 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vmulss  xmm0, xmm10, xmm8
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v151 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v179 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3NormalizeEstimate", v1652);
    v151 = 0;
    if ( v179 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vmulss  xmm0, xmm10, xmm9
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v151 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3NormalizeEstimate", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vinsertps xmm10, xmm10, xmm11, 0
    vinsertps xmm10, xmm10, xmm9, 10h
    vinsertps xmm10, xmm10, xmm0, 20h ; ' '
    vmovaps xmm8, xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm0
    vxorps  xmm4, xmm4, xmm4
    vinsertps xmm4, xmm4, xmm7, 0
    vsubss  xmm2, xmm9, xmm6
    vsubss  xmm3, xmm8, xmm1
    vinsertps xmm4, xmm4, xmm6, 10h
    vinsertps xmm4, xmm4, xmm0, 20h ; ' '
    vsubss  xmm0, xmm11, xmm7
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsubps  xmm0, xmm10, xmm4
    vmulps  xmm1, xmm0, xmm0
    vsqrtss xmm7, xmm2, xmm2
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm6, xmm0
    vsubss  xmm0, xmm6, xmm7
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm13
  }
  if ( !v205 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v229 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Distance", v1652);
    v205 = 0;
    if ( v229 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v205 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v233 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Distance", v1652);
    v205 = 0;
    if ( v233 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v205 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v237 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Distance", v1652);
    v205 = 0;
    if ( v237 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm13
  }
  if ( !v205 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3Distance", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_104], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm10
    vinsertps xmm9, xmm9, xmm11, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_FC], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_114], xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+158h+var_114], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_110], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_10C], xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_108], xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_100], xmm0
    vmovaps xmm3, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, [rsp+158h+var_10C], 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_108], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vmulps  xmm0, xmm0, xmm7
    vaddps  xmm7, xmm0, xmm9
    vmulss  xmm0, xmm6, xmm8
    vaddss  xmm1, xmm0, xmm10
    vsubss  xmm2, xmm7, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v279 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v291 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Mad", v1652);
    v279 = 0;
    if ( v291 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_10C]
    vmulss  xmm0, xmm0, [rsp+158h+var_FC]
    vaddss  xmm1, xmm0, xmm11
    vshufps xmm2, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v279 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v298 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Mad", v1652);
    v279 = 0;
    if ( v298 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_108]
    vmulss  xmm0, xmm0, [rsp+158h+var_114]
    vaddss  xmm1, xmm0, [rsp+158h+var_104]
    vshufps xmm2, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v279 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v305 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Mad", v1652);
    v279 = 0;
    if ( v305 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_100]
    vmulss  xmm0, xmm0, [rsp+158h+var_110]
    vaddss  xmm1, xmm0, [rsp+158h+var_118]
    vshufps xmm2, xmm7, xmm7, 0FFh
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v279 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Mad", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_110], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm10
    vinsertps xmm9, xmm9, xmm11, 10h
    vinsertps xmm9, xmm9, xmm6, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_FC], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_10C], xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+158h+var_10C], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_104], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_114], xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_108], xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_100], xmm0
    vmovaps xmm3, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_108], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vmulps  xmm0, xmm0, xmm7
    vsubps  xmm7, xmm9, xmm0
    vmulss  xmm0, xmm6, xmm8
    vsubss  xmm1, xmm10, xmm0
    vsubss  xmm2, xmm7, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v350 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v362 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Nms", v1652);
    v350 = 0;
    if ( v362 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_114]
    vmulss  xmm0, xmm0, [rsp+158h+var_118]
    vsubss  xmm1, xmm11, xmm0
    vshufps xmm2, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v350 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v369 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Nms", v1652);
    v350 = 0;
    if ( v369 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_108]
    vmulss  xmm0, xmm0, [rsp+158h+var_10C]
    vmovss  xmm1, [rsp+158h+var_110]
    vsubss  xmm1, xmm1, xmm0
    vshufps xmm2, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v350 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v377 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Nms", v1652);
    v350 = 0;
    if ( v377 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_100]
    vmulss  xmm0, xmm0, [rsp+158h+var_104]
    vmovss  xmm1, [rsp+158h+var_FC]
    vsubss  xmm1, xmm1, xmm0
    vshufps xmm2, xmm7, xmm7, 0FFh
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm14
    vcomiss xmm2, xmm13
  }
  if ( !v350 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Nms", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm12; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm6, cs:__real@c1000000
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm13
    vinsertps xmm9, xmm9, xmm12, 10h
    vinsertps xmm9, xmm9, xmm11, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovaps xmm10, xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm6; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm5, xmm0
    vmovaps xmm0, xmm8
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm6, 20h ; ' '
    vinsertps xmm0, xmm0, xmm5, 30h ; '0'
    vmulps  xmm0, xmm0, xmm9
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm9, xmm1, xmm1
    vmulss  xmm1, xmm6, xmm11
    vmulss  xmm0, xmm8, xmm13
    vmulss  xmm2, xmm7, xmm12
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm5, xmm10
    vmovss  xmm10, cs:__real@3a83126f
    vaddss  xmm6, xmm4, xmm0
    vsubss  xmm1, xmm9, xmm6
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v413 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v432 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Dot", v1652);
    v413 = 0;
    if ( v432 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm6
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v413 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v436 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Dot", v1652);
    v413 = 0;
    if ( v436 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm6
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v413 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v440 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Dot", v1652);
    v413 = 0;
    if ( v440 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0FFh
    vsubss  xmm1, xmm0, xmm6
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v413 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Dot", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm4, xmm0
    vmulss  xmm1, xmm7, xmm7
    vmovaps xmm5, xmm8
    vinsertps xmm5, xmm5, xmm7, 10h
    vinsertps xmm5, xmm5, xmm6, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 30h ; '0'
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm7, xmm3, xmm0
    vmulps  xmm1, xmm5, xmm5
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm6, xmm0, xmm0
    vsubss  xmm0, xmm6, xmm7
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm10
  }
  if ( !v456 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v474 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4LengthSq", v1652);
    v456 = 0;
    if ( v474 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v456 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v478 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4LengthSq", v1652);
    v456 = 0;
    if ( v478 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v456 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v482 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4LengthSq", v1652);
    v456 = 0;
    if ( v482 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v456 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4LengthSq", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm4, xmm0
    vmulss  xmm1, xmm7, xmm7
    vmovaps xmm5, xmm8
    vinsertps xmm5, xmm5, xmm7, 10h
    vinsertps xmm5, xmm5, xmm6, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 30h ; '0'
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmulps  xmm1, xmm5, xmm5
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm6, xmm0
    vsqrtss xmm7, xmm2, xmm2
    vsubss  xmm0, xmm6, xmm7
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm10
  }
  if ( !v497 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v517 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Length", v1652);
    v497 = 0;
    if ( v517 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v497 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v521 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Length", v1652);
    v497 = 0;
    if ( v521 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v497 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v525 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Length", v1652);
    v497 = 0;
    if ( v525 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v497 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Length", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm13
    vinsertps xmm12, xmm12, xmm11, 10h
    vinsertps xmm12, xmm12, xmm10, 20h ; ' '
    vinsertps xmm12, xmm12, xmm0, 30h ; '0'
    vmovaps xmm9, xmm0
    vmovss  xmm6, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm6; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm0, cs:__real@c1000000; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm0
    vsubss  xmm4, xmm9, xmm1
    vsubss  xmm3, xmm10, xmm6
    vmovss  xmm10, cs:__real@3a83126f
    vsubss  xmm2, xmm11, xmm7
    vmovaps xmm5, xmm8
    vinsertps xmm5, xmm5, xmm7, 10h
    vinsertps xmm5, xmm5, xmm6, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 30h ; '0'
    vsubss  xmm0, xmm13, xmm8
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm7, xmm2, xmm2
    vsubps  xmm1, xmm12, xmm5
    vmulps  xmm0, xmm1, xmm1
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm6, xmm0
    vsubss  xmm0, xmm6, xmm7
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm10
  }
  if ( !v557 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v583 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Distance", v1652);
    v557 = 0;
    if ( v583 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v557 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v587 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Distance", v1652);
    v557 = 0;
    if ( v587 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v557 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v591 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Distance", v1652);
    v557 = 0;
    if ( v591 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v557 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Distance", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm2, xmm6
    vinsertps xmm2, xmm2, xmm11, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm2, xmm1
    vmulss  xmm2, xmm11, xmm11
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm12, xmm12
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm2, xmm4, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vsqrtss xmm1, xmm2, xmm2
    vdivss  xmm8, xmm0, xmm1
    vmulss  xmm0, xmm8, xmm6
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v607 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v631 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Normalize", v1652);
    v607 = 0;
    if ( v631 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vmulss  xmm0, xmm8, xmm11
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v607 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v636 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Normalize", v1652);
    v607 = 0;
    if ( v636 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vmulss  xmm0, xmm8, xmm12
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v607 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v641 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Normalize", v1652);
    v607 = 0;
    if ( v641 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0FFh
    vmulss  xmm0, xmm8, xmm13
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v607 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Normalize", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm2, xmm6
    vinsertps xmm2, xmm2, xmm11, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vrsqrtps xmm1, xmm0
    vmulps  xmm7, xmm1, xmm2
    vmulss  xmm2, xmm11, xmm11
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm12, xmm12
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm2, xmm4, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vsqrtss xmm1, xmm2, xmm2
    vdivss  xmm8, xmm0, xmm1
    vmulss  xmm0, xmm8, xmm6
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v657 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v681 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4NormalizeEst", v1652);
    v657 = 0;
    if ( v681 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vmulss  xmm0, xmm8, xmm11
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v657 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v686 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4NormalizeEst", v1652);
    v657 = 0;
    if ( v686 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vmulss  xmm0, xmm8, xmm12
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v657 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v691 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4NormalizeEst", v1652);
    v657 = 0;
    if ( v691 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0FFh
    vmulss  xmm0, xmm8, xmm13
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v657 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4NormalizeEst", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vandps  xmm1, xmm11, xmm14
    vandps  xmm0, xmm6, xmm14
    vaddss  xmm2, xmm1, xmm0
    vandps  xmm1, xmm12, xmm14
    vaddss  xmm13, xmm2, xmm1
    vmovaps xmm3, xmm6
    vinsertps xmm3, xmm3, xmm11, 10h
    vinsertps xmm3, xmm3, xmm12, 20h ; ' '
    vinsertps xmm3, xmm3, xmm13, 30h ; '0'
    vshufps xmm0, xmm3, xmm3, 0FFh
    vrcpps  xmm1, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmulps  xmm7, xmm1, xmm3
    vdivss  xmm8, xmm0, xmm13
    vmulss  xmm0, xmm6, xmm8
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v704 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v724 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4DivWEstimate", v1652);
    v704 = 0;
    v705 = !v724;
    if ( v724 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vmulss  xmm0, xmm11, xmm8
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v704 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v729 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4DivWEstimate", v1652);
    v704 = 0;
    v705 = !v729;
    if ( v729 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vmulss  xmm0, xmm12, xmm8
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v704 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v734 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4DivWEstimate", v1652);
    v704 = 0;
    v705 = !v734;
    if ( v734 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0FFh
    vmulss  xmm0, xmm13, xmm8
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v704 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v739 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4DivWEstimate", v1652);
    v705 = !v739;
    if ( v739 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@7f800000
    vxorps  xmm0, xmm0, xmm0
    vrcpps  xmm6, xmm0
    vucomiss xmm6, xmm7
  }
  if ( !v705 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v743 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4RcpEstimateZero", v1652);
    v705 = !v743;
    if ( v743 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
  }
  if ( !v705 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v745 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4RcpEstimateZero", v1652);
    v705 = !v745;
    if ( v745 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm7
  }
  if ( !v705 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v747 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4RcpEstimateZero", v1652);
    v705 = !v747;
    if ( v747 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v705 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4RcpEstimateZero", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@3dcccccd
    vmovss  xmm2, cs:__real@bdcccccd
    vmovaps xmm12, xmm0
    vandps  xmm0, xmm8, xmm14
    vcomiss xmm0, xmm1
    vxorps  xmm13, xmm13, xmm13
  }
  if ( v760 | v761 )
  {
    __asm
    {
      vcmpless xmm0, xmm13, xmm8
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm8, xmm0
      vmovss  [rsp+158h+var_118], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm7, xmm14
    vcomiss xmm0, xmm1
  }
  if ( v760 | v761 )
  {
    __asm
    {
      vcmpless xmm0, xmm13, xmm7
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm7, xmm0
      vmovss  [rsp+158h+var_118], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm11, xmm14
    vcomiss xmm0, xmm1
  }
  if ( v760 | v761 )
  {
    __asm
    {
      vcmpless xmm0, xmm13, xmm11
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm11, xmm0
      vmovss  [rsp+158h+var_118], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm12, xmm14
    vcomiss xmm0, xmm1
  }
  if ( v760 | v761 )
  {
    __asm
    {
      vcmpless xmm0, xmm13, xmm12
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm12, xmm0
      vmovss  [rsp+158h+var_118], xmm0
    }
  }
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovaps xmm0, xmm8
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
    vrcpps  xmm6, xmm0
    vdivss  xmm0, xmm13, xmm8
    vmovss  xmm8, cs:__real@3b83126f
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm8
  }
  if ( !v760 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v791 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RcpEstimate", v1652);
    v760 = 0;
    if ( v791 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vdivss  xmm0, xmm13, xmm7
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm8
  }
  if ( !v760 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v796 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RcpEstimate", v1652);
    v760 = 0;
    if ( v796 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vdivss  xmm0, xmm13, xmm11
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm8
  }
  if ( !v760 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v801 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RcpEstimate", v1652);
    v760 = 0;
    if ( v801 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0FFh
    vdivss  xmm0, xmm13, xmm12
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm8
  }
  if ( !v760 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RcpEstimate", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:__real@2edbe6ff
    vmovss  xmm2, cs:__real@aedbe6ff
    vmovaps xmm12, xmm0
    vandps  xmm0, xmm11, xmm14
    vcomiss xmm0, xmm1
    vxorps  xmm3, xmm3, xmm3
  }
  if ( v817 | v818 )
  {
    __asm
    {
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm11, xmm0
      vmovss  [rsp+158h+var_118], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm7, xmm14
    vcomiss xmm0, xmm1
  }
  if ( v817 | v818 )
  {
    __asm
    {
      vcmpless xmm0, xmm3, xmm7
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm7, xmm0
      vmovss  [rsp+158h+var_118], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm8, xmm14
    vcomiss xmm0, xmm1
  }
  if ( v817 | v818 )
  {
    __asm
    {
      vcmpless xmm0, xmm3, xmm8
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm8, xmm0
      vmovss  [rsp+158h+var_118], xmm0
    }
  }
  __asm
  {
    vandps  xmm0, xmm12, xmm14
    vcomiss xmm0, xmm1
  }
  if ( v817 | v818 )
  {
    __asm
    {
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovaps xmm12, xmm0
      vmovss  [rsp+158h+var_118], xmm0
    }
  }
  __asm
  {
    vmovaps xmm2, xmm11
    vinsertps xmm2, xmm2, xmm7, 10h
    vinsertps xmm2, xmm2, xmm8, 20h ; ' '
    vinsertps xmm2, xmm2, xmm12, 30h ; '0'
    vrcpps  xmm1, xmm2
    vmulps  xmm0, xmm1, xmm1
    vaddps  xmm1, xmm1, xmm1
    vmulps  xmm2, xmm0, xmm2
    vsubps  xmm6, xmm1, xmm2
    vdivss  xmm0, xmm13, xmm11
    vmovss  xmm11, cs:__real@38d1b717
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm11
  }
  if ( !v817 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v851 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Rcp", v1652);
    v817 = 0;
    if ( v851 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vdivss  xmm0, xmm13, xmm7
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm11
  }
  if ( !v817 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v856 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Rcp", v1652);
    v817 = 0;
    if ( v856 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vdivss  xmm0, xmm13, xmm8
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm11
  }
  if ( !v817 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v861 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Rcp", v1652);
    v817 = 0;
    if ( v861 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0FFh
    vdivss  xmm0, xmm13, xmm12
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm11
  }
  if ( !v817 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Rcp", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm5, xmm0, xmm1
    vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vrsqrtps xmm4, xmm5
    vmulps  xmm0, xmm4, xmm4
    vmulps  xmm2, xmm0, xmm5
    vmulps  xmm0, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm2, xmm3, xmm0
    vsqrtss xmm0, xmm5, xmm5
    vdivss  xmm0, xmm13, xmm0
    vaddps  xmm6, xmm2, xmm4
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
    vshufps xmm7, xmm5, xmm5, 55h ; 'U'
    vshufps xmm8, xmm5, xmm5, 0AAh ; 'ª'
    vshufps xmm11, xmm5, xmm5, 0FFh
  }
  if ( !v877 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v899 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ReciprocalSqrt", v1652);
    v877 = 0;
    if ( v899 )
      __debugbreak();
  }
  __asm
  {
    vsqrtss xmm0, xmm7, xmm7
    vdivss  xmm0, xmm13, xmm0
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v877 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v905 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ReciprocalSqrt", v1652);
    v877 = 0;
    if ( v905 )
      __debugbreak();
  }
  __asm
  {
    vsqrtss xmm0, xmm8, xmm8
    vdivss  xmm0, xmm13, xmm0
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v877 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v911 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ReciprocalSqrt", v1652);
    v877 = 0;
    if ( v911 )
      __debugbreak();
  }
  __asm
  {
    vsqrtss xmm0, xmm11, xmm11
    vdivss  xmm0, xmm13, xmm0
    vshufps xmm1, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v877 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ReciprocalSqrt", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm2, xmm0, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vdivss  xmm0, xmm13, xmm0
    vrsqrtps xmm6, xmm2
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
    vshufps xmm7, xmm2, xmm2, 55h ; 'U'
    vshufps xmm8, xmm2, xmm2, 0AAh ; 'ª'
    vshufps xmm11, xmm2, xmm2, 0FFh
  }
  if ( !v928 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v943 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ReciprocalSqrtEst", v1652);
    v928 = 0;
    if ( v943 )
      __debugbreak();
  }
  __asm
  {
    vsqrtss xmm0, xmm7, xmm7
    vdivss  xmm0, xmm13, xmm0
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v928 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v949 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ReciprocalSqrtEst", v1652);
    v928 = 0;
    if ( v949 )
      __debugbreak();
  }
  __asm
  {
    vsqrtss xmm0, xmm8, xmm8
    vdivss  xmm0, xmm13, xmm0
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v928 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v955 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ReciprocalSqrtEst", v1652);
    v928 = 0;
    if ( v955 )
      __debugbreak();
  }
  __asm
  {
    vsqrtss xmm0, xmm11, xmm11
    vdivss  xmm0, xmm13, xmm0
    vshufps xmm1, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v928 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ReciprocalSqrtEst", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_110], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_114], xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm2, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 20h
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vaddps  xmm7, xmm0, xmm7
    vaddss  xmm0, xmm6, xmm8
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v986 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v996 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Add", v1652);
    v986 = 0;
    if ( v996 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vaddss  xmm0, xmm12, xmm11
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v986 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1001 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Add", v1652);
    v986 = 0;
    if ( v1001 )
      __debugbreak();
  }
  __asm
  {
    vaddss  xmm0, xmm13, [rsp+158h+var_114]
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v986 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1006 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Add", v1652);
    v986 = 0;
    if ( v1006 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_118]
    vaddss  xmm0, xmm0, [rsp+158h+var_110]
    vshufps xmm1, xmm7, xmm7, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v986 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Add", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_114], xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_110], xmm0
    vmovaps xmm2, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 20h
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vsubps  xmm7, xmm7, xmm0
    vsubss  xmm0, xmm8, xmm6
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1037 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1047 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Sub", v1652);
    v1037 = 0;
    if ( v1047 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm0, xmm11, xmm12
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1037 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1052 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Sub", v1652);
    v1037 = 0;
    if ( v1052 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm13, [rsp+158h+var_114]
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1037 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1057 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Sub", v1652);
    v1037 = 0;
    if ( v1057 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_118]
    vsubss  xmm0, xmm0, [rsp+158h+var_110]
    vshufps xmm1, xmm7, xmm7, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1037 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Sub", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_110], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_114], xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm2, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 20h
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vmulps  xmm7, xmm0, xmm7
    vmulss  xmm0, xmm6, xmm8
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1088 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1098 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Mul", v1652);
    v1088 = 0;
    if ( v1098 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vmulss  xmm0, xmm12, xmm11
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1088 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1103 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Mul", v1652);
    v1088 = 0;
    if ( v1103 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm13, [rsp+158h+var_114]
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1088 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1108 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Mul", v1652);
    v1088 = 0;
    if ( v1108 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_118]
    vmulss  xmm0, xmm0, [rsp+158h+var_110]
    vshufps xmm1, xmm7, xmm7, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1088 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Mul", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_114], xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_110], xmm0
    vmovaps xmm2, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm12, 10h
    vinsertps xmm0, xmm0, [rsp+158h+var_114], 20h
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vdivps  xmm7, xmm7, xmm0
    vdivss  xmm0, xmm8, xmm6
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1139 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1149 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Div", v1652);
    v1139 = 0;
    if ( v1149 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vdivss  xmm0, xmm11, xmm12
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1139 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1154 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Div", v1652);
    v1139 = 0;
    if ( v1154 )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm0, xmm13, [rsp+158h+var_114]
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1139 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1159 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Div", v1652);
    v1139 = 0;
    if ( v1159 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_118]
    vdivss  xmm0, xmm0, [rsp+158h+var_110]
    vshufps xmm1, xmm7, xmm7, 0FFh
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1139 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Div", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm6, xmm7
    vinsertps xmm6, xmm6, xmm11, 10h
    vinsertps xmm6, xmm6, xmm12, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm6, xmm0, xmm6
    vmulss  xmm0, xmm8, xmm7
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1183 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1190 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4MulFloat", v1652);
    v1183 = 0;
    if ( v1190 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vmulss  xmm0, xmm8, xmm11
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1183 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1195 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4MulFloat", v1652);
    v1183 = 0;
    if ( v1195 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vmulss  xmm0, xmm8, xmm12
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1183 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1200 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4MulFloat", v1652);
    v1183 = 0;
    if ( v1200 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0FFh
    vmulss  xmm0, xmm8, xmm13
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1183 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4MulFloat", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
    vxorps  xmm1, xmm1, xmm1
    vsubps  xmm7, xmm1, xmm0
    vxorps  xmm0, xmm6, xmm13
    vucomiss xmm7, xmm0
  }
  if ( !v1216 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1226 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Negate", v1652);
    v1216 = !v1226;
    if ( v1226 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vxorps  xmm0, xmm8, xmm13
    vucomiss xmm1, xmm0
  }
  if ( !v1216 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1229 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Negate", v1652);
    v1216 = !v1229;
    if ( v1229 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vxorps  xmm0, xmm11, xmm13
    vucomiss xmm1, xmm0
  }
  if ( !v1216 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1232 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Negate", v1652);
    v1216 = !v1232;
    if ( v1232 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0FFh
    vxorps  xmm0, xmm12, xmm13
    vucomiss xmm1, xmm0
  }
  if ( !v1216 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Negate", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm11, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovaps xmm12, xmm0
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm7, xmm0, xmm1
    vandps  xmm6, xmm6, xmm14
    vucomiss xmm7, xmm6
  }
  if ( !v1246 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1255 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Abs", v1652);
    v1246 = !v1255;
    if ( v1255 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vandps  xmm8, xmm8, xmm14
    vucomiss xmm0, xmm8
  }
  if ( !v1246 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1258 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Abs", v1652);
    v1246 = !v1258;
    if ( v1258 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vandps  xmm11, xmm11, xmm14
    vucomiss xmm0, xmm11
  }
  if ( !v1246 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1261 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Abs", v1652);
    v1246 = !v1261;
    if ( v1261 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vandps  xmm12, xmm12, xmm14
    vucomiss xmm0, xmm12
  }
  if ( !v1246 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Abs", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm2, xmm0, xmm1
    vsqrtps xmm6, xmm2
    vsqrtss xmm0, xmm2, xmm2
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
    vshufps xmm7, xmm2, xmm2, 55h ; 'U'
    vshufps xmm8, xmm2, xmm2, 0AAh ; 'ª'
    vshufps xmm11, xmm2, xmm2, 0FFh
  }
  if ( !v1275 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1289 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Sqrt", v1652);
    v1275 = 0;
    if ( v1289 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 55h ; 'U'
    vsqrtss xmm0, xmm7, xmm7
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1275 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1294 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Sqrt", v1652);
    v1275 = 0;
    if ( v1294 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vsqrtss xmm0, xmm8, xmm8
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1275 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1299 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Sqrt", v1652);
    v1275 = 0;
    if ( v1299 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm6, xmm6, 0FFh
    vsqrtss xmm0, xmm11, xmm11
    vsubss  xmm1, xmm1, xmm0
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm10
  }
  if ( !v1275 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Sqrt", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm10, 10h
    vinsertps xmm7, xmm7, xmm12, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm14, xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm1, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm11, 10h
    vinsertps xmm0, xmm0, xmm13, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vminps  xmm7, xmm7, xmm0
    vminss  xmm0, xmm6, xmm8
    vucomiss xmm7, xmm0
  }
  if ( !v1331 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1339 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Min", v1652);
    v1331 = !v1339;
    if ( v1339 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vminss  xmm0, xmm11, xmm10
    vucomiss xmm1, xmm0
  }
  if ( !v1331 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1342 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Min", v1652);
    v1331 = !v1342;
    if ( v1342 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vminss  xmm0, xmm13, xmm12
    vucomiss xmm1, xmm0
  }
  if ( !v1331 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1345 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Min", v1652);
    v1331 = !v1345;
    if ( v1345 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_118]
    vminss  xmm0, xmm0, xmm14
    vshufps xmm1, xmm7, xmm7, 0FFh
    vucomiss xmm1, xmm0
  }
  if ( !v1331 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Min", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm10, 10h
    vinsertps xmm7, xmm7, xmm12, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm14, xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm1, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm11, 10h
    vinsertps xmm0, xmm0, xmm13, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vmaxps  xmm7, xmm7, xmm0
    vmaxss  xmm0, xmm6, xmm8
    vucomiss xmm7, xmm0
  }
  if ( !v1376 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1384 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Max", v1652);
    v1376 = !v1384;
    if ( v1384 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vmaxss  xmm0, xmm11, xmm10
    vucomiss xmm1, xmm0
  }
  if ( !v1376 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1387 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Max", v1652);
    v1376 = !v1387;
    if ( v1387 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vmaxss  xmm0, xmm13, xmm12
    vucomiss xmm1, xmm0
  }
  if ( !v1376 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1390 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Max", v1652);
    v1376 = !v1390;
    if ( v1390 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_118]
    vmaxss  xmm0, xmm0, xmm14
    vshufps xmm1, xmm7, xmm7, 0FFh
    vucomiss xmm1, xmm0
  }
  if ( !v1376 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Max", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_118], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_110], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_100], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+158h+var_104], xmm0
    vmovaps xmm1, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm7, 10h
    vinsertps xmm0, xmm0, xmm8, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vmovups [rsp+158h+var_E8], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm11, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+158h+var_10C], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm10
    vinsertps xmm6, xmm6, xmm12, 10h
    vinsertps xmm6, xmm6, xmm14, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vcomiss xmm7, xmm6
    vmovss  [rsp+158h+var_114], xmm0
    vmovaps xmm2, xmm0
  }
  if ( !(v1436 | v1437) )
  {
    __asm
    {
      vmovaps xmm0, xmm6
      vshufps xmm0, xmm0, xmm0, 0
      vmovaps xmm1, xmm7
      vshufps xmm0, xmm0, xmm7, 50h ; 'P'
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm7, xmm0, xmm7, 0E8h ; 'è'
      vshufps xmm0, xmm1, xmm6, 50h ; 'P'
      vmovaps xmm1, xmm8
      vmovaps xmm8, xmm10
      vmovaps xmm10, xmm1
      vshufps xmm6, xmm0, xmm6, 0E8h ; 'è'
    }
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vcomiss xmm1, xmm0
  }
  if ( !(v1436 | v1437) )
  {
    __asm
    {
      vshufps xmm0, xmm6, xmm6, 55h ; 'U'
      vshufps xmm0, xmm7, xmm0, 50h ; 'P'
      vshufps xmm7, xmm0, xmm7, 0E8h ; 'è'
      vshufps xmm0, xmm6, xmm1, 50h ; 'P'
      vmovaps xmm1, xmm11
      vmovaps xmm11, xmm12
      vmovaps xmm12, xmm1
      vshufps xmm6, xmm0, xmm6, 0E8h ; 'è'
    }
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vcomiss xmm1, xmm0
  }
  if ( !(v1436 | v1437) )
  {
    __asm
    {
      vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
      vshufps xmm0, xmm0, xmm7, 0FAh ; 'ú'
      vshufps xmm7, xmm7, xmm0, 84h ; '„'
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vmovaps xmm1, xmm13
      vmovaps xmm13, xmm14
      vmovaps xmm14, xmm1
      vshufps xmm6, xmm6, xmm0, 84h ; '„'
    }
  }
  __asm
  {
    vshufps xmm1, xmm7, xmm7, 0FFh
    vshufps xmm0, xmm6, xmm6, 0FFh
    vcomiss xmm1, xmm0
  }
  if ( !(v1436 | v1437) )
  {
    __asm
    {
      vshufps xmm0, xmm6, xmm6, 0FFh
      vshufps xmm0, xmm7, xmm0, 0FAh ; 'ú'
      vshufps xmm7, xmm7, xmm0, 84h ; '„'
      vshufps xmm0, xmm6, xmm1, 0FAh ; 'ú'
      vmovss  xmm1, [rsp+158h+var_10C]
      vmovss  [rsp+158h+var_114], xmm1
      vmovss  [rsp+158h+var_10C], xmm2
      vshufps xmm6, xmm6, xmm0, 84h ; '„'
    }
  }
  __asm
  {
    vcmpltps xmm0, xmm6, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, [rsp+158h+var_E8]
    vmaxps  xmm0, xmm0, xmm7
    vminps  xmm7, xmm0, xmm6
    vmovss  xmm0, [rsp+158h+var_118]; val
    vmovaps xmm2, xmm10; max
    vmovaps xmm1, xmm8; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vucomiss xmm7, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Clamp", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_110]; val
    vmovaps xmm2, xmm12; max
    vmovaps xmm1, xmm11; min
    vshufps xmm6, xmm7, xmm7, 55h ; 'U'
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Clamp", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+158h+var_100]; val
    vmovaps xmm2, xmm14; max
    vmovaps xmm1, xmm13; min
    vshufps xmm6, xmm7, xmm7, 0AAh ; 'ª'
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Clamp", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, [rsp+158h+var_114]; max
    vmovss  xmm1, [rsp+158h+var_10C]; min
    vmovss  xmm0, [rsp+158h+var_104]; val
    vshufps xmm6, xmm7, xmm7, 0FFh
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Clamp", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff; X
    vroundps xmm7, cs:__xmm@d01502f958635fa9ff7fffff7f7fffff, 0
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vucomiss xmm7, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4RoundSpecialValues", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm13, cs:__real@ff7fffff
    vmovaps xmm0, xmm13; X
    vshufps xmm6, xmm7, xmm7, 55h ; 'U'
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4RoundSpecialValues", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm14, cs:__real@58635fa9
    vmovaps xmm0, xmm14; X
    vshufps xmm6, xmm7, xmm7, 0AAh ; 'ª'
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4RoundSpecialValues", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm12, cs:__real@d01502f9
    vmovaps xmm0, xmm12; X
    vshufps xmm6, xmm7, xmm7, 0FFh
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4RoundSpecialValues", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm11, 30h ; '0'
    vroundps xmm7, xmm0, 0
    vmovaps xmm0, xmm6; X
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vucomiss xmm7, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Round", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm8; X
    vshufps xmm6, xmm7, xmm7, 55h ; 'U'
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Round", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm10; X
    vshufps xmm6, xmm7, xmm7, 0AAh ; 'ª'
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v25 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Round", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm11; X
    vshufps xmm6, xmm7, xmm7, 0FFh
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vucomiss xmm6, xmm0 }
  if ( !v1524 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1525 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Round", v1652);
    v1524 = !v1525;
    if ( v1525 )
      __debugbreak();
  }
  __asm
  {
    vroundps xmm6, cs:__xmm@d01502f958635fa9ff7fffff7f7fffff, 1
    vucomiss xmm6, cs:__real@7f7fffff
  }
  if ( !v1524 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1527 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4FloorSpecialValues", v1652);
    v1524 = !v1527;
    if ( v1527 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm13
  }
  if ( !v1524 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1529 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4FloorSpecialValues", v1652);
    v1524 = !v1529;
    if ( v1529 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm14
  }
  if ( !v1524 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1531 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4FloorSpecialValues", v1652);
    v1524 = !v1531;
    if ( v1531 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm12
  }
  if ( !v1524 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4FloorSpecialValues", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm11, 30h ; '0'
    vxorps  xmm1, xmm1, xmm1
    vroundps xmm7, xmm0, 1
    vroundss xmm1, xmm1, xmm6, 1
    vucomiss xmm7, xmm1
  }
  if ( !v1544 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1553 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Floor", v1652);
    v1544 = !v1553;
    if ( v1553 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm8, 1
    vshufps xmm2, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm2, xmm1
  }
  if ( !v1544 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1557 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Floor", v1652);
    v1544 = !v1557;
    if ( v1557 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm10, 1
    vshufps xmm2, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm2, xmm1
  }
  if ( !v1544 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1561 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Floor", v1652);
    v1544 = !v1561;
    if ( v1561 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm11, 1
    vshufps xmm2, xmm7, xmm7, 0FFh
    vucomiss xmm2, xmm1
  }
  if ( !v1544 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1565 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Floor", v1652);
    v1544 = !v1565;
    if ( v1565 )
      __debugbreak();
  }
  __asm
  {
    vroundps xmm6, cs:__xmm@d01502f958635fa9ff7fffff7f7fffff, 2
    vucomiss xmm6, cs:__real@7f7fffff
  }
  if ( !v1544 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1567 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4CeilSpecialValues", v1652);
    v1544 = !v1567;
    if ( v1567 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm13
  }
  if ( !v1544 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1569 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4CeilSpecialValues", v1652);
    v1544 = !v1569;
    if ( v1569 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm14
  }
  if ( !v1544 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1571 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4CeilSpecialValues", v1652);
    v1544 = !v1571;
    if ( v1571 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm12
  }
  if ( !v1544 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4CeilSpecialValues", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm8, 10h
    vinsertps xmm0, xmm0, xmm10, 20h ; ' '
    vinsertps xmm0, xmm0, xmm11, 30h ; '0'
    vxorps  xmm1, xmm1, xmm1
    vroundps xmm7, xmm0, 2
    vroundss xmm1, xmm1, xmm6, 2
    vucomiss xmm7, xmm1
  }
  if ( !v1584 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1593 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Ceil", v1652);
    v1584 = !v1593;
    if ( v1593 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm8, 2
    vshufps xmm2, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm2, xmm1
  }
  if ( !v1584 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1597 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Ceil", v1652);
    v1584 = !v1597;
    if ( v1597 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm10, 2
    vshufps xmm2, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm2, xmm1
  }
  if ( !v1584 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1601 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Ceil", v1652);
    v1584 = !v1601;
    if ( v1601 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm11, 2
    vshufps xmm2, xmm7, xmm7, 0FFh
    vucomiss xmm2, xmm1
  }
  if ( !v1584 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Ceil", v1652) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm8, 10h
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vandps  xmm2, xmm1, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vorps   xmm7, xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
    vxorps  xmm13, xmm13, xmm13
    vcmpless xmm1, xmm13, xmm6
    vmovss  xmm6, cs:__real@bf800000
    vmovaps xmm9, xmm0
    vblendvps xmm0, xmm6, xmm11, xmm1
    vucomiss xmm7, xmm0
  }
  if ( !v1616 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1629 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Sign", v1652);
    v1616 = !v1629;
    if ( v1629 )
      __debugbreak();
  }
  __asm
  {
    vcmpless xmm0, xmm13, xmm8
    vblendvps xmm0, xmm6, xmm11, xmm0
    vshufps xmm1, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm1, xmm0
  }
  if ( !v1616 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1633 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Sign", v1652);
    v1616 = !v1633;
    if ( v1633 )
      __debugbreak();
  }
  __asm
  {
    vcmpless xmm0, xmm13, xmm10
    vblendvps xmm0, xmm6, xmm11, xmm0
    vshufps xmm1, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm1, xmm0
  }
  if ( !v1616 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    v1637 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Sign", v1652);
    v1616 = !v1637;
    if ( v1637 )
      __debugbreak();
  }
  __asm
  {
    vcmpless xmm0, xmm13, xmm9
    vblendvps xmm0, xmm6, xmm11, xmm0
    vshufps xmm1, xmm7, xmm7, 0FFh
    vucomiss xmm1, xmm0
  }
  if ( !v1616 )
  {
    LODWORD(v1652) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Sign", v1652) )
      __debugbreak();
  }
  _R11 = &v1700;
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
Float4MiscTest
==============
*/
unsigned __int8 Float4MiscTest()
{
  bool v24; 
  bool v30; 
  bool v32; 
  bool v33; 
  bool v35; 
  bool v37; 
  bool v38; 
  bool v40; 
  bool v41; 
  bool v42; 
  bool v44; 
  bool v45; 
  bool v47; 
  bool v48; 
  bool v50; 
  bool v51; 
  bool v53; 
  bool v54; 
  bool v56; 
  bool v57; 
  bool v59; 
  bool v60; 
  bool v62; 
  bool v63; 
  bool v65; 
  bool v66; 
  bool v68; 
  bool v70; 
  bool v72; 
  bool v74; 
  bool v76; 
  bool v78; 
  bool v80; 
  bool v82; 
  bool v84; 
  bool v86; 
  bool v88; 
  bool v90; 
  bool v92; 
  bool v94; 
  bool v96; 
  bool v98; 
  bool v100; 
  bool v101; 
  bool v103; 
  bool v105; 
  bool v106; 
  bool v108; 
  bool v110; 
  bool v112; 
  bool v114; 
  bool v116; 
  bool v117; 
  bool v119; 
  bool v121; 
  bool v122; 
  bool v124; 
  bool v126; 
  bool v127; 
  bool v129; 
  bool v131; 
  bool v133; 
  bool v135; 
  bool v136; 
  bool v137; 
  bool v139; 
  bool v141; 
  bool v143; 
  bool v207; 
  bool v214; 
  bool v216; 
  bool v218; 
  const float4 *v309; 
  float4 *v310; 
  const float4 *v351; 
  float4 *v352; 
  const float4 *v386; 
  float4 *v387; 
  const float4 *v422; 
  float4 *v423; 
  const float4 *v456; 
  const float4 *v521; 
  float4 *v522; 
  char v527; 
  const float4 *v528; 
  float4 *v529; 
  bool v534; 
  bool v539; 
  bool v544; 
  char v550; 
  const float4 *v551; 
  vector3 *v552; 
  bool v556; 
  bool v560; 
  bool v564; 
  char v569; 
  const float4 *v570; 
  float4 *v571; 
  bool v576; 
  bool v582; 
  bool v586; 
  bool v589; 
  bool v594; 
  bool v598; 
  bool v602; 
  bool v605; 
  bool v609; 
  bool v614; 
  bool v619; 
  const float4 *v623; 
  vector3 *v624; 
  char v625; 
  const float4 *v626; 
  float4 *v627; 
  bool v632; 
  bool v637; 
  bool v642; 
  bool v645; 
  bool v649; 
  bool v653; 
  bool v657; 
  bool v660; 
  bool v663; 
  bool v667; 
  bool v671; 
  const float4 *v675; 
  vector3 *v676; 
  char v677; 
  unsigned __int8 result; 
  __int64 v724; 
  unsigned int v725; 
  float4 v726; 
  float4 v728; 
  char v729; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovaps xmm6, xmm7
    vinsertps xmm6, xmm6, xmm8, 10h
    vinsertps xmm6, xmm6, xmm10, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vucomiss xmm6, xmm7
    vmovaps xmm11, xmm0
  }
  if ( !v24 )
  {
    v725 = g_unitSavedSeed_0;
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXYXY", v725);
    v24 = !v30;
    if ( v30 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXYXY", v724);
    v24 = !v32;
    if ( v32 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXYXY", v724);
    v24 = !v33;
    if ( v33 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXYXY", v724);
    v24 = !v35;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 11h
    vucomiss xmm9, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYXYX", v724);
    v24 = !v37;
    if ( v37 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYXYX", v724);
    v24 = !v38;
    if ( v38 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYXYX", v724);
    v24 = !v40;
    if ( v40 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYXYX", v724);
    v24 = !v41;
    if ( v41 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXWXZ", v724);
    v24 = !v42;
    if ( v42 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXWXZ", v724);
    v24 = !v44;
    if ( v44 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXWXZ", v724);
    v24 = !v45;
    if ( v45 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXWXZ", v724);
    v24 = !v47;
    if ( v47 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXWXW", v724);
    v24 = !v48;
    if ( v48 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXWXW", v724);
    v24 = !v50;
    if ( v50 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v51 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXWXW", v724);
    v24 = !v51;
    if ( v51 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXWXW", v724);
    v24 = !v53;
    if ( v53 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXZXZ", v724);
    v24 = !v54;
    if ( v54 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXZXZ", v724);
    v24 = !v56;
    if ( v56 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v57 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXZXZ", v724);
    v24 = !v57;
    if ( v57 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXZXZ", v724);
    v24 = !v59;
    if ( v59 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXZXW", v724);
    v24 = !v60;
    if ( v60 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXZXW", v724);
    v24 = !v62;
    if ( v62 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v63 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXZXW", v724);
    v24 = !v63;
    if ( v63 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v65 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXZXW", v724);
    v24 = !v65;
    if ( v65 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v66 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXZYZ", v724);
    v24 = !v66;
    if ( v66 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v68 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXZYZ", v724);
    v24 = !v68;
    if ( v68 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v70 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXZYZ", v724);
    v24 = !v70;
    if ( v70 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v72 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXZYZ", v724);
    v24 = !v72;
    if ( v72 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 99h ; '™'
    vucomiss xmm9, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v74 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYZYZ", v724);
    v24 = !v74;
    if ( v74 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v76 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYZYZ", v724);
    v24 = !v76;
    if ( v76 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v78 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYZYZ", v724);
    v24 = !v78;
    if ( v78 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v80 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYZYZ", v724);
    v24 = !v80;
    if ( v80 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 0D9h ; 'Ù'
    vucomiss xmm9, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v82 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYZYW", v724);
    v24 = !v82;
    if ( v82 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v84 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYZYW", v724);
    v24 = !v84;
    if ( v84 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v86 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYZYW", v724);
    v24 = !v86;
    if ( v86 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v88 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYZYW", v724);
    v24 = !v88;
    if ( v88 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 0DDh ; 'Ý'
    vucomiss xmm9, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v90 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYWYW", v724);
    v24 = !v90;
    if ( v90 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v92 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYWYW", v724);
    v24 = !v92;
    if ( v92 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYWYW", v724);
    v24 = !v94;
    if ( v94 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v96 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYWYW", v724);
    v24 = !v96;
    if ( v96 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 0C9h ; 'É'
    vucomiss xmm9, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v98 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYZWX", v724);
    v24 = !v98;
    if ( v98 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v100 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYZWX", v724);
    v24 = !v100;
    if ( v100 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v101 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYZWX", v724);
    v24 = !v101;
    if ( v101 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v103 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYZWX", v724);
    v24 = !v103;
    if ( v103 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 0D2h ; 'Ò'
    vucomiss xmm9, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v105 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleZXYW", v724);
    v24 = !v105;
    if ( v105 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v106 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleZXYW", v724);
    v24 = !v106;
    if ( v106 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v108 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleZXYW", v724);
    v24 = !v108;
    if ( v108 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v110 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleZXYW", v724);
    v24 = !v110;
    if ( v110 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 1Bh
    vucomiss xmm9, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v112 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleWZYX", v724);
    v24 = !v112;
    if ( v112 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v114 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleWZYX", v724);
    v24 = !v114;
    if ( v114 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v116 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleWZYX", v724);
    v24 = !v116;
    if ( v116 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v117 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleWZYX", v724);
    v24 = !v117;
    if ( v117 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 4Eh ; 'N'
    vucomiss xmm9, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v119 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleZWXY", v724);
    v24 = !v119;
    if ( v119 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v121 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleZWXY", v724);
    v24 = !v121;
    if ( v121 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v122 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleZWXY", v724);
    v24 = !v122;
    if ( v122 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v124 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleZWXY", v724);
    v24 = !v124;
    if ( v124 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 0B1h ; '±'
    vucomiss xmm9, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v126 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYXWZ", v724);
    v24 = !v126;
    if ( v126 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v127 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYXWZ", v724);
    v24 = !v127;
    if ( v127 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v129 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYXWZ", v724);
    v24 = !v129;
    if ( v129 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v131 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYXWZ", v724);
    v24 = !v131;
    if ( v131 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm9, xmm6, xmm6, 5
    vucomiss xmm9, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v133 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleYYXX", v724);
    v24 = !v133;
    if ( v133 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v135 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleYYXX", v724);
    v24 = !v135;
    if ( v135 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v136 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleYYXX", v724);
    v24 = !v136;
    if ( v136 )
      __debugbreak();
    __asm { vucomiss xmm6, xmm7 }
    if ( v136 )
    {
      LODWORD(v724) = g_unitSavedSeed_0;
      v137 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleYYXX", v724);
      v24 = !v137;
      if ( v137 )
        __debugbreak();
    }
  }
  __asm
  {
    vshufps xmm6, xmm6, xmm6, 14h
    vucomiss xmm6, xmm7
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v139 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4ShuffleXYYX", v724);
    v24 = !v139;
    if ( v139 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v141 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4ShuffleXYYX", v724);
    v24 = !v141;
    if ( v141 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm8
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v143 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4ShuffleXYYX", v724);
    v24 = !v143;
    if ( v143 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v24 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4ShuffleXYYX", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
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
    vmovaps xmm8, xmm9
    vinsertps xmm8, xmm8, xmm7, 10h
    vinsertps xmm8, xmm8, xmm6, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovaps xmm11, xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovaps xmm7, xmm0
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
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  *(unsigned __int64 *)((char *)v726.v.m128_u64 + 4) = -1i64;
  __asm
  {
    vmovaps xmm1, xmm6
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm10, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
  }
  v726.v.m128_i32[0] = 0;
  v726.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm0, [rsp+158h+var_118]
    vblendvps xmm6, xmm8, xmm1, xmm0
    vucomiss xmm6, xmm9
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm7
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm10
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm11
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm9
    vinsertps xmm8, xmm8, xmm10, 10h
    vinsertps xmm8, xmm8, xmm6, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovaps xmm6, xmm0
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
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm7
    vinsertps xmm0, xmm0, xmm6, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
    vblendps xmm6, xmm8, xmm0, 0Ch
    vucomiss xmm6, xmm9
  }
  if ( !v207 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v214 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4Blend", v724);
    v207 = !v214;
    if ( v214 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, xmm10
  }
  if ( !v207 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v216 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4Blend", v724);
    v207 = !v216;
    if ( v216 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, xmm11
  }
  if ( !v207 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v218 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4Blend", v724);
    v207 = !v218;
    if ( v218 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm12
  }
  if ( !v207 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4Blend", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm2, xmm0, xmm1
    vxorps  xmm6, xmm6, xmm6
    vmaxps  xmm0, xmm2, xmm6
    vcvttps2dq xmm3, xmm0
    vmovaps xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vshufps xmm7, xmm2, xmm2, 55h ; 'U'
    vshufps xmm8, xmm2, xmm2, 0AAh ; 'ª'
    vshufps xmm9, xmm2, xmm2, 0FFh
    vroundss xmm2, xmm6, xmm1, 1
    vcvttss2si ecx, xmm2
    vpextrd rax, xmm3, 0
    vpextrd rbx, xmm3, 1
    vpextrd rdi, xmm3, 2
    vpextrd rsi, xmm3, 3
  }
  if ( (_DWORD)_RAX != _ECX )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CastUint (1)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm7
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm6, xmm1, 1
    vcvttss2si eax, xmm2
  }
  if ( (_DWORD)_RBX != _EAX )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CastUint (2)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm8
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm6, xmm1, 1
    vcvttss2si eax, xmm2
  }
  if ( (_DWORD)_RDI != _EAX )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CastUint (3)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm9
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm6, xmm1, 1
    vcvttss2si eax, xmm2
  }
  if ( (_DWORD)_RSI != _EAX )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4CastUint (4)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vcmpneqps xmm0, xmm1, xmm1
    vmovmskps eax, xmm0
  }
  if ( _EAX )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4IsNaN", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups xmm13, cs:__xmm@41000000410000004100000041000000
    vmovups xmm14, cs:__xmm@3fc90fdb3fc90fdb3fc90fdb3fc90fdb
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vandnps xmm1, xmm0, xmm1
    vdivps  xmm2, xmm1, xmm13
    vmulps  xmm6, xmm2, xmm14
    vmovups xmm0, xmm6
    vshufps xmm8, xmm6, xmm6, 55h ; 'U'
    vshufps xmm11, xmm6, xmm6, 0AAh ; 'ª'
    vshufps xmm12, xmm6, xmm6, 0FFh
  }
  Float4CosEst(v310, v309);
  __asm
  {
    vmovups xmm7, xmm0
    vmovaps xmm0, xmm6; X
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm10, cs:__real@3c23d70b
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4CosEst", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm8; X
    vshufps xmm6, xmm7, xmm7, 55h ; 'U'
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4CosEst", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm11; X
    vshufps xmm6, xmm7, xmm7, 0AAh ; 'ª'
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4CosEst", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm12; X
    vshufps xmm6, xmm7, xmm7, 0FFh
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4CosEst", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm11, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm11; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm11; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8
    vinsertps xmm1, xmm1, xmm7, 10h
    vinsertps xmm1, xmm1, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vdivps  xmm0, xmm1, xmm13
    vmulps  xmm6, xmm0, xmm14
    vaddps  xmm0, xmm6, xmmword ptr cs:?g_3PiOver2@@3Ufloat4@@B.v; float4 const g_3PiOver2
    vshufps xmm8, xmm6, xmm6, 55h ; 'U'
    vshufps xmm11, xmm6, xmm6, 0AAh ; 'ª'
    vshufps xmm12, xmm6, xmm6, 0FFh
  }
  Float4CosEst(v352, v351);
  __asm
  {
    vmovups xmm7, xmm0
    vmovaps xmm0, xmm6; X
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm7, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4SinEst", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm8; X
    vshufps xmm6, xmm7, xmm7, 55h ; 'U'
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4SinEst", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm11; X
    vshufps xmm6, xmm7, xmm7, 0AAh ; 'ª'
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4SinEst", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm12; X
    vshufps xmm6, xmm7, xmm7, 0FFh
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4SinEst", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm14, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
  }
  Float4CosEst(v387, v386);
  __asm
  {
    vmovups xmm8, xmm0
    vmovaps xmm0, xmm6; X
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm7, cs:__real@3a83126f
    vsubss  xmm1, xmm8, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Cos", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm10; X
    vshufps xmm6, xmm8, xmm8, 55h ; 'U'
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Cos", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm11; X
    vshufps xmm6, xmm8, xmm8, 0AAh ; 'ª'
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Cos", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm12; X
    vshufps xmm6, xmm8, xmm8, 0FFh
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Cos", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm6
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm12, 30h ; '0'
    vaddps  xmm0, xmm0, xmmword ptr cs:?g_3PiOver2@@3Ufloat4@@B.v; float4 const g_3PiOver2
  }
  Float4CosEst(v423, v422);
  __asm
  {
    vmovups xmm8, xmm0
    vmovaps xmm0, xmm6; X
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm8, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Sin", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm10; X
    vshufps xmm6, xmm8, xmm8, 55h ; 'U'
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Sin", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm11; X
    vshufps xmm6, xmm8, xmm8, 0AAh ; 'ª'
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Sin", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm12; X
    vshufps xmm6, xmm8, xmm8, 0FFh
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Sin", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm12
    vinsertps xmm0, xmm0, xmm10, 10h
    vinsertps xmm0, xmm0, xmm11, 20h ; ' '
    vinsertps xmm0, xmm0, xmm13, 30h ; '0'
  }
  Float4SinCos(v456, &v726, &v728);
  __asm
  {
    vmovups xmm8, [rsp+158h+var_118]
    vmovaps xmm0, xmm12; X
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm8, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4SinCos (1)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm10; X
    vshufps xmm6, xmm8, xmm8, 55h ; 'U'
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4SinCos (1)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm11; X
    vshufps xmm6, xmm8, xmm8, 0AAh ; 'ª'
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4SinCos (1)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm13; X
    vshufps xmm6, xmm8, xmm8, 0FFh
  }
  sinf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4SinCos (1)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm8, [rsp+158h+var_D8]
    vmovaps xmm0, xmm12; X
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm8, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4SinCos (2)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm10; X
    vshufps xmm6, xmm8, xmm8, 55h ; 'U'
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4SinCos (2)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm11; X
    vshufps xmm6, xmm8, xmm8, 0AAh ; 'ª'
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4SinCos (2)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm13; X
    vshufps xmm6, xmm8, xmm8, 0FFh
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4SinCos (2)", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm2, xmm6
    vinsertps xmm2, xmm2, xmm11, 10h
    vinsertps xmm2, xmm2, xmm12, 20h ; ' '
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
    vmovaps xmm13, xmm0
    vmulps  xmm0, xmm2, cs:__xmm@3e0000003e0000003e0000003e000000
  }
  *(double *)&_XMM0 = j___vdecl_acosf4();
  __asm
  {
    vmovss  xmm10, cs:__real@3e000000
    vmovups xmm8, xmm0
    vmulss  xmm0, xmm6, xmm10; X
  }
  acosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm8, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4ACos", v724) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm11, xmm10; X
    vshufps xmm6, xmm8, xmm8, 55h ; 'U'
  }
  acosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4ACos", v724) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm12, xmm10; X
    vshufps xmm6, xmm8, xmm8, 0AAh ; 'ª'
  }
  acosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4ACos", v724) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm13, xmm10; X
    vshufps xmm6, xmm8, xmm8, 0FFh
  }
  acosf_0(*(float *)&_XMM0);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4ACos", v724) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm13, cs:__xmm@000000004234000041f0000041700000
    vmulps  xmm0, xmm13, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian
  }
  Float4RadianToQuat(v522, v521);
  __asm
  {
    vmovss  xmm12, cs:__real@3eaba882
    vmovups xmm6, xmm0
    vsubss  xmm1, xmm6, xmm12
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v534 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4AnglesToQuat", v724);
    v527 = 0;
    if ( v534 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, cs:__real@3e5bd274
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm0, xmm0, xmm8
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v539 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4AnglesToQuat", v724);
    v527 = 0;
    if ( v539 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, cs:__real@3e415a08
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm0, xmm0, xmm10
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v544 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4AnglesToQuat", v724);
    v527 = 0;
    if ( v544 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm11, cs:__real@3f65cf03
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm0, xmm0, xmm11
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v527 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4AnglesToQuat", v724) )
      __debugbreak();
  }
  __asm { vmovups xmm0, cs:__xmm@000000003f490fdb3f060a923e860a92 }
  Float4RadianToQuat(v529, v528);
  __asm
  {
    vmovups xmm6, xmm0
    vsubss  xmm1, xmm6, xmm12
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v550 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v556 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RadianToQuat", v724);
    v550 = 0;
    if ( v556 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm8
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v550 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v560 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RadianToQuat", v724);
    v550 = 0;
    if ( v560 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm10
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v550 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v564 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RadianToQuat", v724);
    v550 = 0;
    if ( v564 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, xmm11
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v550 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RadianToQuat", v724) )
      __debugbreak();
  }
  __asm { vmovups xmm0, cs:__xmm@3f65cf033e415a083e5bd2743eaba882 }
  Float4UnitQuatToAxis(v552, v551);
  __asm
  {
    vmovups xmmword ptr [rsp+158h+var_108], xmm0
    vsubss  xmm0, xmm0, cs:__real@3f56262d
    vmovups xmmword ptr [rsp+158h+var_108+10h], xmm1
    vmovups ymm1, [rsp+158h+var_108]
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
    vmovups xmm8, xmm2
    vmovups [rsp+158h+var_108], ymm1
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v576 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnitQuatToAxis (1)", v724);
    v569 = 0;
    if ( v576 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+158h+var_108]
    vmovss  xmm14, cs:__real@3ef743e9
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm0, xmm0, xmm14
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v582 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnitQuatToAxis (1)", v724);
    v569 = 0;
    if ( v582 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm0, xmm0, cs:__real@be84816f
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v586 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnitQuatToAxis (1)", v724);
    v569 = 0;
    if ( v586 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v589 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnitQuatToAxis (1)", v724);
    v569 = 0;
    if ( v589 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+158h+var_108+10h]
    vmovss  xmm15, cs:__real@be47bdcf
    vsubss  xmm0, xmm6, xmm15
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v594 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnitQuatToAxis (2)", v724);
    v569 = 0;
    if ( v594 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm0, xmm0, cs:__real@3f34317b
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v598 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnitQuatToAxis (2)", v724);
    v569 = 0;
    if ( v598 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm0, xmm0, cs:__real@3f2ed9be
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v602 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnitQuatToAxis (2)", v724);
    v569 = 0;
    if ( v602 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v605 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnitQuatToAxis (2)", v724);
    v569 = 0;
    if ( v605 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm11, cs:__real@3f031466
    vsubss  xmm0, xmm8, xmm11
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v609 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnitQuatToAxis (3)", v724);
    v569 = 0;
    if ( v609 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm12, cs:__real@bf0557bc
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vsubss  xmm0, xmm0, xmm12
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v614 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnitQuatToAxis (3)", v724);
    v569 = 0;
    if ( v614 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, cs:__real@3f2eda66
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vsubss  xmm0, xmm0, xmm10
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v619 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnitQuatToAxis (3)", v724);
    v569 = 0;
    if ( v619 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v569 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnitQuatToAxis (3)", v724) )
      __debugbreak();
  }
  __asm { vmulps  xmm0, xmm13, xmmword ptr cs:?g_degreeToRadian@@3Ufloat4@@B.v; float4 const g_degreeToRadian }
  Float4RadianToQuat(v571, v570);
  Float4UnitQuatToAxis(v624, v623);
  __asm
  {
    vmovups xmmword ptr [rsp+158h+var_108], xmm0
    vsubss  xmm0, xmm0, cs:__real@3f56262d
    vmovups xmmword ptr [rsp+158h+var_108+10h], xmm1
    vmovups ymm1, [rsp+158h+var_108]
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
    vmovups xmm8, xmm2
    vmovups [rsp+158h+var_108], ymm1
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v632 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4AnglesToAxis (1)", v724);
    v625 = 0;
    if ( v632 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+158h+var_108]
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm14
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v637 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4AnglesToAxis (1)", v724);
    v625 = 0;
    if ( v637 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm13, cs:__real@be84816f
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm13
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v642 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4AnglesToAxis (1)", v724);
    v625 = 0;
    if ( v642 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v645 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4AnglesToAxis (1)", v724);
    v625 = 0;
    if ( v645 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+158h+var_108+10h]
    vsubss  xmm0, xmm6, xmm15
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v649 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4AnglesToAxis (2)", v724);
    v625 = 0;
    if ( v649 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, cs:__real@3f34317b
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v653 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4AnglesToAxis (2)", v724);
    v625 = 0;
    if ( v653 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, cs:__real@3f2ed9be
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v657 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4AnglesToAxis (2)", v724);
    v625 = 0;
    if ( v657 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v660 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4AnglesToAxis (2)", v724);
    v625 = 0;
    if ( v660 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm8, xmm11
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v663 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4AnglesToAxis (3)", v724);
    v625 = 0;
    if ( v663 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm12
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v667 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4AnglesToAxis (3)", v724);
    v625 = 0;
    if ( v667 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm10
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    v671 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4AnglesToAxis (3)", v724);
    v625 = 0;
    if ( v671 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v625 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4AnglesToAxis (3)", v724) )
      __debugbreak();
  }
  __asm { vmovups xmm0, cs:__xmm@000000003f490fdb3f060a923e860a92 }
  Float4RadianToQuat(v627, v626);
  result = (unsigned __int8)Float4UnitQuatToAxis(v676, v675);
  __asm
  {
    vmovups xmmword ptr [rsp+158h+var_108], xmm0
    vsubss  xmm0, xmm0, cs:__real@3f56262d
    vmovups xmmword ptr [rsp+158h+var_108+10h], xmm1
    vmovups ymm1, [rsp+158h+var_108]
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
    vmovups xmm8, xmm2
    vmovups [rsp+158h+var_108], ymm1
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RadianToAxis (1)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+158h+var_108]
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm14
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RadianToAxis (1)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm13
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RadianToAxis (1)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RadianToAxis (1)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+158h+var_108+10h]
    vsubss  xmm0, xmm6, xmm15
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RadianToAxis (2)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, cs:__real@3f34317b
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RadianToAxis (2)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, cs:__real@3f2ed9be
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RadianToAxis (2)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RadianToAxis (2)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm8, xmm11
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RadianToAxis (3)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm12
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RadianToAxis (3)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm10
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RadianToAxis (3)", v724);
    v677 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
  }
  if ( !v677 )
  {
    LODWORD(v724) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RadianToAxis (3)", v724);
    if ( result )
      __debugbreak();
  }
  _R11 = &v729;
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
  return result;
}

/*
==============
Float4PackTest
==============
*/

unsigned __int8 __fastcall Float4PackTest(__int64 a1, __int64 a2, __int64 a3, double _XMM3_8)
{
  unsigned int v27; 
  bool v31; 
  unsigned int v32; 
  bool v38; 
  bool v54; 
  unsigned int v55; 
  bool v60; 
  bool v68; 
  unsigned int v69; 
  bool v75; 
  bool v97; 
  unsigned int v98; 
  bool v102; 
  bool v109; 
  unsigned int v110; 
  bool v115; 
  bool v124; 
  unsigned int v125; 
  bool v129; 
  bool v134; 
  unsigned int v135; 
  bool v139; 
  bool v161; 
  bool v165; 
  bool v169; 
  bool v173; 
  char v221; 
  const float4 *v222; 
  float4 *v223; 
  const float4 *v224; 
  const float4 *v225; 
  bool v328; 
  bool v333; 
  bool v338; 
  bool v346; 
  bool v350; 
  bool v354; 
  bool v362; 
  bool v366; 
  bool v370; 
  bool v378; 
  bool v382; 
  bool v386; 
  bool v408; 
  bool v411; 
  bool v414; 
  bool v417; 
  bool v437; 
  bool v440; 
  bool v443; 
  bool v446; 
  bool v466; 
  bool v469; 
  bool v472; 
  bool v475; 
  bool v495; 
  bool v498; 
  bool v501; 
  char v507; 
  unsigned __int8 result; 
  __int64 v671; 
  unsigned int v672; 
  unsigned int v673; 
  unsigned int v674; 
  int v675; 
  unsigned int v676; 
  int v677; 
  unsigned int v678; 
  int v679; 
  unsigned int v680; 
  int v681; 
  unsigned int v682; 
  int v684; 
  int v695; 
  unsigned int v696; 
  int v697; 
  unsigned int v698; 
  __int64 v699; 
  int v701; 
  char v702; 
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
    vmovss  xmm11, cs:__real@41000000
    vmovss  xmm14, cs:__real@c1000000
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm14; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, xmm8, 0
    vinsertps xmm0, xmm0, xmm9, 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  [rsp+1B8h+var_178], xmm0
  }
  v27 = v672;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( (_WORD)v672 )
  {
    v673 = ((v672 & 0x8000) << 16) | (((((v672 & 0x3FFF) << 14) - (~((unsigned __int16)v672 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  v31 = __CFSHR__(v27, 16);
  v32 = HIWORD(v27);
  if ( v32 )
  {
    v31 = 0;
    v674 = ((v32 & 0xFFFF8000) << 16) | (((((v32 & 0x3FFF) << 14) - (~(v32 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm7, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm13, cs:__real@3c23d70b
    vsubss  xmm0, xmm8, xmm0
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v31 )
  {
    v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (1)", g_unitSavedSeed_0);
    v31 = 0;
    if ( v38 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm9, xmm7
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v31 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (2)", v671) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, xmm8, 0
    vinsertps xmm0, xmm0, xmm9, 10h
    vcvtps2ph xmm0, xmm0, 0
    vpextrd rdx, xmm0, 0
  }
  if ( (_WORD)_RDX )
  {
    v675 = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm1, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  v54 = __CFSHR__(_RDX, 16);
  v55 = WORD1(_RDX);
  if ( v55 )
  {
    v54 = 0;
    v676 = ((v55 & 0xFFFF8000) << 16) | (((((v55 & 0x3FFF) << 14) - (~(v55 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm7, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  __asm
  {
    vsubss  xmm0, xmm8, xmm1
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v54 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (5)", v671);
    v54 = 0;
    if ( v60 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm9, xmm7
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v54 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (6)", v671) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, cs:__xmm@0000000000000000000000003f800000
    vcvtps2ph xmm0, xmm0, 0
    vpextrd rdx, xmm0, 0
  }
  if ( (_WORD)_RDX )
  {
    v677 = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  v68 = __CFSHR__(_RDX, 16);
  v69 = WORD1(_RDX);
  if ( v69 )
  {
    v68 = 0;
    v678 = ((v69 & 0xFFFF8000) << 16) | (((((v69 & 0x3FFF) << 14) - (~(v69 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm9, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm9, xmm9, xmm9 }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm8, cs:__real@3a83126f
    vsubss  xmm0, xmm7, xmm0
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm8
  }
  if ( !v68 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v75 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (7)", v671);
    v68 = 0;
    if ( v75 )
      __debugbreak();
  }
  __asm
  {
    vandps  xmm9, xmm9, xmm12
    vcomiss xmm9, xmm8
  }
  if ( !v68 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_2 (8)", v671) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm15, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+1B8h+var_174], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rsp+1B8h+var_E8], xmm0
    vmovaps xmm1, xmm0
    vmovaps xmm0, xmm10
    vinsertps xmm0, xmm0, xmm15, 10h
    vinsertps xmm0, xmm0, xmm9, 20h ; ' '
    vinsertps xmm0, xmm0, xmm1, 30h ; '0'
    vcvtps2ph xmm0, xmm0, 0
    vpextrd rdx, xmm0, 0
    vmovups [rsp+1B8h+var_168], xmm0
  }
  if ( (_WORD)_RDX )
  {
    v679 = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  v97 = __CFSHR__(_RDX, 16);
  v98 = WORD1(_RDX);
  if ( v98 )
  {
    v97 = 0;
    v680 = ((v98 & 0xFFFF8000) << 16) | (((((v98 & 0x3FFF) << 14) - (~(v98 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm9, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm9, xmm9, xmm9 }
  }
  __asm
  {
    vsubss  xmm0, xmm10, xmm0
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v97 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v102 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (1)", v671);
    v97 = 0;
    if ( v102 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm15, xmm9
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v97 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (2)", v671) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, [rsp+1B8h+var_168]
    vpextrd rdx, xmm0, 1
  }
  if ( (_WORD)_RDX )
  {
    v681 = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  v109 = __CFSHR__(_RDX, 16);
  v110 = WORD1(_RDX);
  if ( v110 )
  {
    v109 = 0;
    v682 = ((v110 & 0xFFFF8000) << 16) | (((((v110 & 0x3FFF) << 14) - (~(v110 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm9, [rsp+1B8h+var_178] }
  }
  else
  {
    __asm { vxorps  xmm9, xmm9, xmm9 }
  }
  __asm
  {
    vmovss  xmm1, [rsp+1B8h+var_174]
    vsubss  xmm0, xmm1, xmm0
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v109 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v115 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (3)", v671);
    v109 = 0;
    if ( v115 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1B8h+var_E8]
    vsubss  xmm0, xmm0, xmm9
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v109 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (4)", v671) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, cs:__xmm@00000000bf800000000000003f800000
    vcvtps2ph xmm10, xmm0, 0
    vpextrd rdx, xmm10, 0
  }
  if ( (_WORD)_RDX )
  {
    v695 = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, dword ptr [rsp+1B8h+var_E8] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  v124 = __CFSHR__(_RDX, 16);
  v125 = WORD1(_RDX);
  if ( v125 )
  {
    v124 = 0;
    v696 = ((v125 & 0xFFFF8000) << 16) | (((((v125 & 0x3FFF) << 14) - (~(v125 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm9, dword ptr [rsp+1B8h+var_E8] }
  }
  else
  {
    __asm { vxorps  xmm9, xmm9, xmm9 }
  }
  __asm
  {
    vsubss  xmm0, xmm7, xmm0
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm8
  }
  if ( !v124 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v129 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (5)", v671);
    v124 = 0;
    if ( v129 )
      __debugbreak();
  }
  __asm
  {
    vandps  xmm9, xmm9, xmm12
    vcomiss xmm9, xmm8
  }
  if ( !v124 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (6)", v671) )
      __debugbreak();
  }
  __asm { vpextrd rdx, xmm10, 1 }
  if ( (_WORD)_RDX )
  {
    v697 = ((_RDX & 0x8000) << 16) | ((unsigned __int64)((((_RDX & 0x3FFF) << 14) - (~((unsigned __int16)_RDX << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm0, dword ptr [rsp+1B8h+var_E8] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  v134 = __CFSHR__(_RDX, 16);
  v135 = WORD1(_RDX);
  if ( v135 )
  {
    v134 = 0;
    v698 = ((v135 & 0xFFFF8000) << 16) | (((((v135 & 0x3FFF) << 14) - (~(v135 << 14) & 0x10000000)) ^ 0x80000001) >> 1);
    __asm { vmovss  xmm6, dword ptr [rsp+1B8h+var_E8] }
  }
  __asm
  {
    vmovss  xmm1, cs:__real@bf800000
    vsubss  xmm0, xmm1, xmm0
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm8
  }
  if ( !v134 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v139 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (7)", v671);
    v134 = 0;
    if ( v139 )
      __debugbreak();
  }
  __asm
  {
    vandps  xmm6, xmm6, xmm12
    vcomiss xmm6, xmm8
  }
  if ( !v134 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Result out of range", "Float4PackFloat16_4 (8)", v671) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vxorps  xmm0, xmm0, xmm0
    vinsertps xmm0, xmm0, xmm6, 0
    vinsertps xmm0, xmm0, xmm8, 10h
    vcvtps2ph xmm0, xmm0, 0
    vmovss  dword ptr [rsp+1B8h+var_E8], xmm0
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm1, xmm1, xmm9, 0
    vinsertps xmm1, xmm1, xmm10, 10h
    vcvtps2ph xmm0, xmm1, 0
    vmovss  [rsp+1B8h+var_174], xmm0
  }
  HIDWORD(v699) = v684;
  v161 = __CFSHR__(v684, 16);
  __asm
  {
    vcvtph2ps xmm7, qword ptr [rsp+1B8h+var_E8]
    vsubss  xmm0, xmm7, xmm6
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !__CFSHR__(v684, 16) )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v165 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4LoadHalf4", v671);
    v161 = 0;
    if ( v165 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm8
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v161 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v169 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4LoadHalf4", v671);
    v161 = 0;
    if ( v169 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm9
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v161 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v173 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4LoadHalf4", v671);
    v161 = 0;
    if ( v173 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vsubss  xmm1, xmm0, xmm10
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v161 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4LoadHalf4", v671) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vinsertps xmm10, xmm10, xmm7, 0
    vinsertps xmm10, xmm10, xmm6, 10h
    vinsertps xmm10, xmm10, xmm0, 20h ; ' '
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vinsertps xmm9, xmm9, xmm7, 0
    vinsertps xmm9, xmm9, xmm6, 10h
    vinsertps xmm9, xmm9, xmm0, 20h ; ' '
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vinsertps xmm8, xmm8, xmm7, 0
    vinsertps xmm8, xmm8, xmm6, 10h
    vinsertps xmm8, xmm8, xmm0, 20h ; ' '
    vmovaps xmm1, xmm11; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm11; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vinsertps xmm3, xmm3, xmm7, 0
    vinsertps xmm3, xmm3, xmm6, 10h
    vinsertps xmm3, xmm3, xmm0, 20h ; ' '
    vmulps  xmm0, xmm10, xmm10
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vmulps  xmm0, xmm9, xmm9
    vmulps  xmm6, xmm1, xmm10
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vmovups xmm14, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovups xmm7, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vmovups xmm15, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vmovups xmm10, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vmulps  xmm5, xmm1, xmm9
    vmulps  xmm0, xmm8, xmm8
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vmulps  xmm4, xmm1, xmm8
    vmovups xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vmovups xmm0, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
    vandps  xmm5, xmm5, xmm0
    vandps  xmm11, xmm6, xmm0
    vmulps  xmm3, xmm1, xmm3
    vandps  xmm2, xmm3, xmm0
    vandps  xmm1, xmm4, xmm0
    vmovups [rsp+1B8h+var_E8], xmm1
    vmovups [rsp+1B8h+var_168], xmm2
    vshufps xmm0, xmm5, xmm5, 55h ; 'U'
    vmovups [rsp+1B8h+var_148], xmm0
    vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
    vmovups [rsp+1B8h+var_138], xmm0
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovups [rsp+1B8h+var_128], xmm0
    vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
    vmovups [rsp+1B8h+var_118], xmm0
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vmovups [rsp+1B8h+var_108], xmm0
    vshufps xmm0, xmm2, xmm2, 0AAh ; 'ª'
    vmovups [rsp+1B8h+var_F8], xmm0
    vmaxps  xmm0, xmm11, xmm8
    vminps  xmm0, xmm0, xmm14
    vaddps  xmm1, xmm0, xmm14
    vmulps  xmm1, xmm1, xmm7
    vcvttps2dq xmm0, xmm1
    vpand   xmm2, xmm0, xmm15
    vpshufd xmm1, xmm2, 0EEh ; 'î'
    vpor    xmm3, xmm1, xmm2
    vpshufd xmm0, xmm3, 55h ; 'U'
    vpor    xmm1, xmm0, xmm3
    vpor    xmm9, xmm1, xmm10
    vmaxps  xmm0, xmm5, xmm8
    vminps  xmm1, xmm0, xmm14
    vaddps  xmm2, xmm1, xmm14
    vmulps  xmm3, xmm2, xmm7
    vcvttps2dq xmm0, xmm3
    vpand   xmm4, xmm0, xmm15
    vpshufd xmm1, xmm4, 0EEh ; 'î'
    vpor    xmm2, xmm1, xmm4
    vpshufd xmm0, xmm2, 0
    vpor    xmm1, xmm0, xmm2
    vmovups xmm0, [rsp+1B8h+var_E8]
    vmaxps  xmm0, xmm0, xmm8
    vpor    xmm6, xmm1, xmm10
    vminps  xmm1, xmm0, xmm14
    vaddps  xmm2, xmm1, xmm14
    vmulps  xmm3, xmm2, xmm7
    vcvttps2dq xmm0, xmm3
    vpand   xmm4, xmm0, xmm15
    vpshufd xmm1, xmm4, 44h ; 'D'
    vpor    xmm2, xmm1, xmm4
    vpshufd xmm0, xmm2, 0FFh
    vpor    xmm1, xmm0, xmm2
    vmovups xmm0, [rsp+1B8h+var_168]
    vmaxps  xmm0, xmm0, xmm8
    vmovups [rsp+1B8h+var_158], xmm5
    vpor    xmm5, xmm1, xmm10
    vminps  xmm1, xmm0, xmm14
    vaddps  xmm2, xmm1, xmm14
    vmulps  xmm3, xmm2, xmm7
    vcvttps2dq xmm0, xmm3
    vpand   xmm4, xmm0, xmm15
    vpshufd xmm1, xmm4, 44h ; 'D'
    vpor    xmm2, xmm1, xmm4
    vpshufd xmm0, xmm2, 0AAh ; 'ª'
    vpor    xmm1, xmm0, xmm2
    vpor    xmm3, xmm1, xmm10
    vxorps  xmm7, xmm7, xmm7
    vblendps xmm0, xmm7, xmm9, 1
    vblendps xmm1, xmm0, xmm6, 2
    vblendps xmm2, xmm1, xmm5, 4
    vblendps xmm8, xmm2, xmm3, 8
    vshufps xmm0, xmm8, xmm8, 0
    vandps  xmm1, xmm0, xmm15
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm11
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v328 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32X (1)", v671);
    v221 = 0;
    if ( v328 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vshufps xmm1, xmm11, xmm11, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm1
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v333 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32X (1)", v671);
    v221 = 0;
    if ( v333 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vshufps xmm1, xmm11, xmm11, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm1
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v338 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32X (1)", v671);
    v221 = 0;
    if ( v338 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 55h ; 'U'
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, dword ptr [rsp+1B8h+var_158]
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v346 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Y (1)", v671);
    v221 = 0;
    if ( v346 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, dword ptr [rsp+1B8h+var_148]
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v350 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Y (1)", v671);
    v221 = 0;
    if ( v350 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, dword ptr [rsp+1B8h+var_138]
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v354 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Y (1)", v671);
    v221 = 0;
    if ( v354 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0AAh ; 'ª'
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, dword ptr [rsp+1B8h+var_E8]
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v362 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Z (1)", v671);
    v221 = 0;
    if ( v362 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, dword ptr [rsp+1B8h+var_128]
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v366 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Z (1)", v671);
    v221 = 0;
    if ( v366 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, dword ptr [rsp+1B8h+var_118]
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v370 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Z (1)", v671);
    v221 = 0;
    if ( v370 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm8, xmm8, 0FFh
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, dword ptr [rsp+1B8h+var_168]
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v378 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32W (1)", v671);
    v221 = 0;
    if ( v378 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, dword ptr [rsp+1B8h+var_108]
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v382 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32W (1)", v671);
    v221 = 0;
    if ( v382 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, dword ptr [rsp+1B8h+var_F8]
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v386 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32W (1)", v671);
    v221 = 0;
    if ( v386 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm9, cs:__xmm@0000000000000000000000003f800000
    vmaxps  xmm0, xmm9, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vmovss  xmm8, cs:__real@3f800000
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 1
    vshufps xmm0, xmm0, xmm0, 0
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm8
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v408 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32X (2)", v671);
    v221 = 0;
    if ( v408 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v411 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32X (2)", v671);
    v221 = 0;
    if ( v411 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v414 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32X (2)", v671);
    v221 = 0;
    if ( v414 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v417 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32X (2)", v671);
    v221 = 0;
    if ( v417 )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm9, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 2
    vshufps xmm0, xmm0, xmm0, 55h ; 'U'
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm8
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v437 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Y (2)", v671);
    v221 = 0;
    if ( v437 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v440 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Y (2)", v671);
    v221 = 0;
    if ( v440 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v443 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Y (2)", v671);
    v221 = 0;
    if ( v443 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v446 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32Y (2)", v671);
    v221 = 0;
    if ( v446 )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm9, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0FFh
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 4
    vshufps xmm0, xmm0, xmm0, 0AAh ; 'ª'
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm8
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v466 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Z (2)", v671);
    v221 = 0;
    if ( v466 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v469 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Z (2)", v671);
    v221 = 0;
    if ( v469 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v472 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Z (2)", v671);
    v221 = 0;
    if ( v472 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v475 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32Z (2)", v671);
    v221 = 0;
    if ( v475 )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm9, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0AAh ; 'ª'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 8
    vshufps xmm0, xmm0, xmm0, 0FFh
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm8
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v495 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32W (2)", v671);
    v221 = 0;
    if ( v495 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v498 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32W (2)", v671);
    v221 = 0;
    if ( v498 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    v501 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32W (2)", v671);
    v221 = 0;
    if ( v501 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v221 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32W (2)", v671) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm1, cs:__xmm@00000000000000003f80000000000000
    vmovups xmm2, cs:__xmm@000000003f8000000000000000000000
    vmovups xmm0, xmm9
  }
  result = (unsigned __int8)Float4PackNormPackedNrmTanBin(v223, v222, v224, v225);
  __asm
  {
    vshufps xmm1, xmm7, xmm0, 0
    vshufps xmm9, xmm1, xmm0, 98h ; '˜'
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm8
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vandps  xmm0, xmm6, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm8
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0FFh
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vandps  xmm0, xmm6, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm8
    vandps  xmm1, xmm1, xmm12
    vcomiss xmm1, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPackedNrmTanBin (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm8, cs:__xmm@000000000000000000000000bf800000
    vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vmovss  xmm9, cs:__real@bf800000
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 1
    vshufps xmm0, xmm0, xmm0, 0
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm9
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32X (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32X (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32X (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32X (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 2
    vshufps xmm0, xmm0, xmm0, 55h ; 'U'
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm9
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Y (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Y (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Y (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32Y (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0FFh
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 4
    vshufps xmm0, xmm0, xmm0, 0AAh ; 'ª'
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm9
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32Z (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32Z (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32Z (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32Z (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmaxps  xmm0, xmm8, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 44h ; 'D'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 0AAh ; 'ª'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm7, xmm2, 8
    vshufps xmm0, xmm0, xmm0, 0FFh
    vandps  xmm1, xmm0, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vcvtdq2ps xmm1, xmm1
    vaddps  xmm0, xmm1, xmmword ptr cs:?g_packAdd1010102@@3Ufloat4@@B.v; float4 const g_packAdd1010102
    vmulps  xmm6, xmm0, xmmword ptr cs:?g_packMul1010102@@3Ufloat4@@B.v; float4 const g_packMul1010102
    vsubss  xmm0, xmm6, xmm9
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4PackNormPacked32W (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4PackNormPacked32W (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4PackNormPacked32W (2)", v671);
    v507 = 0;
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v507 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4PackNormPacked32W (2)", v671);
    if ( result )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, cs:__xmm@3f8000003f0000003e80000000000000
    vmaxps  xmm1, xmm0, xmm7
    vminps  xmm1, xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm3, xmm1, cs:__xmm@437f0000437f0000437f0000437f0000
    vaddps  xmm0, xmm3, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vroundps xmm1, xmm0, 1
    vcvtps2dq xmm2, xmm1
    vpshufb xmm3, xmm2, xmmword ptr cs:?g_packMaskUInt@@3Ufloat4@@B.v; float4 const g_packMaskUInt
    vmovss  dword ptr [rsp+1B8h+var_E8], xmm3
  }
  if ( v701 != 4227327 )
  {
    LODWORD(v671) = g_unitSavedSeed_0;
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Float4PackUInt", v671);
    if ( result )
      __debugbreak();
  }
  _R11 = &v702;
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
  return result;
}

/*
==============
Float4QuatTest
==============
*/
void Float4QuatTest()
{
  const float4 *v116; 
  const float4 *v122; 
  const float4 *v123; 
  const float4 *v124; 
  char v125; 
  bool v129; 
  bool v133; 
  bool v137; 
  bool v158; 
  bool v162; 
  unsigned int v174; 
  __int64 v175; 
  __int64 v176; 
  __int64 v177; 
  __int64 v178; 
  __int64 v179; 
  __int64 v180; 
  __int64 v181; 
  __int64 v182; 
  __int64 v183; 
  __int64 v184; 
  __int64 v185; 
  __int64 v186; 
  __int64 v187; 
  __int64 v188; 
  __int64 v189; 
  __int64 v190; 
  __int64 v191; 
  __int64 v192; 
  __int64 v193; 
  __int64 v194; 
  float4 v195; 
  float4 v196; 
  char v197; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovups xmm6, cs:__xmm@3f65a8073e405aa43e5b51cf3eaceaf1
    vmovss  xmm10, cs:__real@3eaba882
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3ca3d70b
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vshufps xmm2, xmm6, xmm6, 0FFh
    vinsertps xmm6, xmm6, xmm0, 10h
    vinsertps xmm6, xmm6, xmm1, 20h ; ' '
    vinsertps xmm6, xmm6, xmm2, 30h ; '0'
    vsubss  xmm0, xmm6, xmm10
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm7
    vmovups [rsp+108h+var_A8], xmm6
  }
  v174 = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnpackQuat", v174) )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3e5bd274
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm8
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  LODWORD(v175) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnpackQuat", v175) )
    __debugbreak();
  __asm
  {
    vmovss  xmm11, cs:__real@3e415a08
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm11
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  LODWORD(v176) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnpackQuat", v176) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, cs:__real@3f65cf03
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm7
  }
  LODWORD(v177) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnpackQuat", v177) )
    __debugbreak();
  __asm
  {
    vmovups xmm6, cs:__xmm@3f65cedf3e4159f03e5bd5b13eabaa4c
    vsubss  xmm0, xmm6, xmm10
    vmovss  xmm10, cs:__real@3a83126f
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm10
  }
  LODWORD(v178) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnpackPrecisionQuat", v178) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, xmm8
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v179) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnpackPrecisionQuat", v179) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm11
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v180) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnpackPrecisionQuat", v180) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, cs:__real@3f65cf03
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v181) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnpackPrecisionQuat", v181) )
    __debugbreak();
  __asm
  {
    vmovups xmm6, cs:__xmm@3f77dec9be8001590000000000000000
    vandps  xmm0, xmm6, xmm9
    vcomiss xmm0, xmm10
  }
  LODWORD(v182) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4UnpackSimpleQuat", v182) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm10
  }
  LODWORD(v183) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4UnpackSimpleQuat", v183) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, cs:__real@be7ffac2
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v184) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4UnpackSimpleQuat", v184) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, cs:__real@3f77dfe3
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v185) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4UnpackSimpleQuat", v185) )
    __debugbreak();
  __asm
  {
    vmovups xmm11, cs:__xmm@3f65cf033e415a083e5bd2743eaba882
    vshufps xmm7, xmm11, xmm11, 0FFh
    vshufps xmm2, xmm11, xmm11, 0C9h ; 'É'
    vshufps xmm0, xmm11, xmm11, 0D2h ; 'Ò'
    vmulps  xmm1, xmm0, xmm2
    vmulps  xmm0, xmm0, xmm2
    vmovups xmm2, cs:__xmm@3f4e4c033d1208e03d3cc1bf3de63519
    vsubps  xmm4, xmm1, xmm0
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vmulps  xmm3, xmm7, xmm11
    vmulps  xmm0, xmm7, xmm7
    vsubps  xmm2, xmm0, xmm2
    vmulps  xmm1, xmm7, xmm11
    vaddps  xmm1, xmm3, xmm1
    vaddps  xmm0, xmm4, xmm1
    vblendps xmm6, xmm2, xmm0, 7
    vmulss  xmm0, xmm7, xmm11
    vmulss  xmm0, xmm0, cs:__real@40000000
    vshufps xmm8, xmm11, xmm11, 55h ; 'U'
    vshufps xmm12, xmm11, xmm11, 0AAh ; 'ª'
    vmulss  xmm2, xmm12, xmm8
    vaddss  xmm1, xmm0, xmm2
    vsubss  xmm2, xmm1, xmm2
    vsubss  xmm3, xmm6, xmm2
    vandps  xmm3, xmm3, xmm9
    vcomiss xmm3, xmm10
  }
  LODWORD(v186) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4QuatMultiply", v186) )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm8, cs:__real@40000000
    vmulss  xmm1, xmm0, xmm7
    vshufps xmm2, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm2, xmm2, xmm1
    vandps  xmm2, xmm2, xmm9
    vcomiss xmm2, xmm10
  }
  LODWORD(v187) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4QuatMultiply", v187) )
    __debugbreak();
  __asm
  {
    vmulss  xmm2, xmm7, xmm12
    vmulss  xmm1, xmm8, xmm11
    vaddss  xmm0, xmm1, xmm2
    vsubss  xmm1, xmm0, xmm1
    vaddss  xmm2, xmm1, xmm2
    vshufps xmm3, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm3, xmm3, xmm2
    vandps  xmm3, xmm3, xmm9
    vcomiss xmm3, xmm10
  }
  LODWORD(v188) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4QuatMultiply", v188) )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm11, xmm11
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm12, xmm12
    vsubss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v189) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4QuatMultiply", v189) )
    __debugbreak();
  __asm
  {
    vmovups xmm6, cs:__xmm@3f65cf03be415a08be5bd274beaba882
    vsubss  xmm0, xmm6, cs:__real@beaba882
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm10
  }
  LODWORD(v190) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4QuatInverse", v190) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, cs:__real@be5bd274
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v191) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4QuatInverse", v191) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, cs:__real@be415a08
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v192) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4QuatInverse", v192) )
    __debugbreak();
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm0, cs:__real@3f65cf03
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  LODWORD(v193) = g_unitSavedSeed_0;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4QuatInverse", v193) )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmulps  xmm0, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
  }
  Float4SinCos(v116, &v195, &v196);
  __asm
  {
    vmovups xmm0, cs:__xmm@00000000404000004080000040a00000
    vmovups xmm2, cs:__xmm@000000003f8000003f80000040000000
    vmovups xmm1, xmm11
  }
  Float3RotateQuatAroundOrigin(v123, v122, v124, &v196);
  __asm
  {
    vmovups xmm6, [rsp+108h+var_A8]
    vsubss  xmm0, xmm6, cs:__real@409e594b
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm10
  }
  if ( !v125 )
  {
    LODWORD(v194) = g_unitSavedSeed_0;
    v129 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3RotateQuatAroundOrigin", v194);
    v125 = 0;
    if ( v129 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, cs:__real@40613405
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v125 )
  {
    LODWORD(v194) = g_unitSavedSeed_0;
    v133 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3RotateQuatAroundOrigin", v194);
    v125 = 0;
    if ( v133 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, cs:__real@4068ded3
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v125 )
  {
    LODWORD(v194) = g_unitSavedSeed_0;
    v137 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3RotateQuatAroundOrigin", v194);
    v125 = 0;
    if ( v137 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm7, cs:__xmm@00000000400000004040000040400000
    vshufps xmm6, xmm11, xmm11, 0C9h ; 'É'
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vshufps xmm8, xmm11, xmm11, 0D2h ; 'Ò'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vshufps xmm5, xmm11, xmm11, 0FFh
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm7
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm6, xmm1, xmm5
    vsubss  xmm0, xmm6, cs:__real@403cb296
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm10
  }
  if ( !v125 )
  {
    LODWORD(v194) = g_unitSavedSeed_0;
    v158 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4QuatTransform", v194);
    v125 = 0;
    if ( v158 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm0, cs:__real@40213405
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v125 )
  {
    LODWORD(v194) = g_unitSavedSeed_0;
    v162 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4QuatTransform", v194);
    v125 = 0;
    if ( v162 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, cs:__real@4028ded3
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, xmm10
  }
  if ( !v125 )
  {
    LODWORD(v194) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4QuatTransform", v194) )
      __debugbreak();
  }
  _R11 = &v197;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
Float4UnitTest
==============
*/
void Float4UnitTest(__int64 a1, double a2, __int64 a3, double a4)
{
  unsigned __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 

  v4 = Sys_Microseconds();
  Float4LoadStoreTest(v5, a2);
  Double4LoadStoreTest();
  Float4MathTest();
  Double4MathTest(v7, v6, v8, a4);
  Float4PackTest(v10, v9, v11, a4);
  Float4XFormTest();
  Float4LogicalTest();
  Float4MiscTest();
  Float4QuatTest();
  Int4MiscTest();
  v12 = Sys_Microseconds();
  Com_Printf(16, "Float4 unit tests calculated in %zd ticks.\n", v12 - v4);
}

/*
==============
Float4XFormTest
==============
*/
unsigned __int8 Float4XFormTest()
{
  char v79; 
  bool v106; 
  bool v116; 
  bool v126; 
  char v187; 
  bool v210; 
  bool v219; 
  bool v228; 
  char v245; 
  bool v282; 
  bool v285; 
  bool v288; 
  char v360; 
  bool v391; 
  bool v402; 
  bool v413; 
  char v478; 
  bool v501; 
  bool v510; 
  bool v519; 
  char v587; 
  bool v632; 
  bool v643; 
  bool v654; 
  char v720; 
  bool v761; 
  bool v770; 
  bool v779; 
  bool v822; 
  bool v834; 
  bool v836; 
  bool v838; 
  bool v841; 
  bool v842; 
  bool v844; 
  bool v846; 
  bool v848; 
  bool v849; 
  bool v851; 
  bool v853; 
  bool v895; 
  bool v908; 
  bool v910; 
  bool v912; 
  bool v915; 
  bool v916; 
  bool v918; 
  bool v920; 
  bool v922; 
  bool v923; 
  bool v925; 
  bool v927; 
  bool v983; 
  bool v995; 
  bool v997; 
  bool v999; 
  bool v1001; 
  bool v1002; 
  bool v1004; 
  bool v1006; 
  bool v1008; 
  bool v1009; 
  bool v1011; 
  bool v1013; 
  bool v1062; 
  bool v1079; 
  bool v1081; 
  bool v1083; 
  bool v1085; 
  bool v1086; 
  bool v1088; 
  bool v1090; 
  bool v1092; 
  bool v1093; 
  bool v1095; 
  bool v1097; 
  bool v1099; 
  bool v1100; 
  bool v1102; 
  bool v1104; 
  const vector4 *v1212; 
  char v1213; 
  const vector4 *v1214; 
  bool v1230; 
  bool v1242; 
  bool v1253; 
  bool v1265; 
  bool v1277; 
  bool v1290; 
  bool v1301; 
  bool v1312; 
  bool v1327; 
  bool v1339; 
  bool v1350; 
  bool v1361; 
  bool v1376; 
  bool v1387; 
  bool v1398; 
  char v1411; 
  unsigned __int8 v1412; 
  __int64 v1466; 
  unsigned int v1467; 
  vector4 M1; 
  vector4 result; 
  char v1615; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovss  xmm15, cs:__real@41000000
    vmovss  xmm14, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm13
    vinsertps xmm12, xmm12, xmm6, 10h
    vinsertps xmm12, xmm12, xmm7, 20h ; ' '
    vinsertps xmm12, xmm12, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_194], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm11
    vinsertps xmm10, xmm10, xmm6, 10h
    vinsertps xmm10, xmm10, xmm7, 20h ; ' '
    vinsertps xmm10, xmm10, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm9
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm8, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_198], xmm0
    vmovaps xmm1, xmm15; max
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  __asm { vmovaps xmm0, xmm14; min }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A4], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_19C], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm8
    vinsertps xmm6, xmm6, [rsp+208h+var_1A4], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_19C], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_190], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A8], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm2, [rsp+208h+var_1C4]
    vinsertps xmm2, xmm2, [rsp+208h+var_1C8], 10h
    vinsertps xmm2, xmm2, [rsp+208h+var_1A8], 20h
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
    vshufps xmm0, xmm2, xmm2, 0AAh ; 'ª'
    vmulps  xmm0, xmm7, xmm0
    vmovss  xmm7, [rsp+208h+var_1C4]
    vshufps xmm1, xmm2, xmm2, 55h ; 'U'
    vshufps xmm4, xmm2, xmm2, 0
    vaddps  xmm2, xmm0, xmm6
    vmulps  xmm1, xmm10, xmm1
    vmovss  xmm10, [rsp+208h+var_1C8]
    vaddps  xmm3, xmm1, xmm2
    vmulps  xmm0, xmm12, xmm4
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddps  xmm6, xmm0, xmm3
    vmulss  xmm0, xmm7, xmm13
    vmovss  xmm13, cs:__real@3a83126f
    vmulss  xmm1, xmm10, xmm11
    vmovss  xmm11, [rsp+208h+var_1A8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm9
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, xmm8
    vsubss  xmm3, xmm6, xmm0
    vandps  xmm3, xmm3, xmm12
    vcomiss xmm3, xmm13
  }
  if ( !v79 )
  {
    v1467 = g_unitSavedSeed_0;
    v106 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Transform", v1467);
    v79 = 0;
    if ( v106 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_1AC]
    vmulss  xmm0, xmm7, [rsp+208h+var_1B0]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_1B4]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, [rsp+208h+var_1A4]
    vshufps xmm3, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm3, xmm3, xmm0
    vandps  xmm3, xmm3, xmm12
    vcomiss xmm3, xmm13
  }
  if ( !v79 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v116 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Transform", v1466);
    v79 = 0;
    if ( v116 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_1B8]
    vmulss  xmm0, xmm7, [rsp+208h+var_1BC]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_1C0]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, [rsp+208h+var_19C]
    vshufps xmm3, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm3, xmm3, xmm0
    vandps  xmm3, xmm3, xmm12
    vcomiss xmm3, xmm13
  }
  if ( !v79 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v126 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Transform", v1466);
    v79 = 0;
    if ( v126 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_1A0]
    vmulss  xmm0, xmm7, [rsp+208h+var_194]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_198]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, [rsp+208h+var_190]
    vshufps xmm3, xmm6, xmm6, 0FFh
    vsubss  xmm3, xmm3, xmm0
    vandps  xmm3, xmm3, xmm12
    vcomiss xmm3, xmm13
  }
  if ( !v79 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3Transform", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm11
    vinsertps xmm10, xmm10, xmm6, 10h
    vinsertps xmm10, xmm10, xmm7, 20h ; ' '
    vinsertps xmm10, xmm10, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm9
    vinsertps xmm8, xmm8, xmm6, 10h
    vinsertps xmm8, xmm8, xmm7, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A4], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_19C], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm7
    vinsertps xmm6, xmm6, [rsp+208h+var_1A4], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_19C], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A8], xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, [rsp+208h+var_1C4]
    vinsertps xmm1, xmm1, [rsp+208h+var_1C8], 10h
    vinsertps xmm1, xmm1, [rsp+208h+var_1A8], 20h
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vshufps xmm2, xmm1, xmm1, 55h ; 'U'
    vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
    vshufps xmm3, xmm1, xmm1, 0
    vmulps  xmm1, xmm6, xmm0
    vmulps  xmm0, xmm8, xmm2
    vmovss  xmm8, [rsp+208h+var_1C4]
    vaddps  xmm2, xmm0, xmm1
    vmulps  xmm1, xmm10, xmm3
    vmovss  xmm10, [rsp+208h+var_1C8]
    vaddps  xmm6, xmm1, xmm2
    vmulss  xmm1, xmm10, xmm9
    vmovss  xmm9, [rsp+208h+var_1A8]
    vmulss  xmm0, xmm8, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm7
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm6, xmm2
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v187 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v210 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3TransformNormal", v1466);
    v187 = 0;
    if ( v210 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_1AC]
    vmulss  xmm0, xmm8, [rsp+208h+var_1B0]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_1A4]
    vaddss  xmm2, xmm2, xmm1
    vshufps xmm3, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm0, xmm3, xmm2
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v187 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v219 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3TransformNormal", v1466);
    v187 = 0;
    if ( v219 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_1B4]
    vmulss  xmm0, xmm8, [rsp+208h+var_1B8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_19C]
    vaddss  xmm2, xmm2, xmm1
    vshufps xmm3, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm0, xmm3, xmm2
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v187 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v228 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3TransformNormal", v1466);
    v187 = 0;
    if ( v228 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_1BC]
    vmulss  xmm0, xmm8, [rsp+208h+var_1C0]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_1A0]
    vaddss  xmm2, xmm2, xmm1
    vshufps xmm3, xmm6, xmm6, 0FFh
    vsubss  xmm0, xmm3, xmm2
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v187 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3TransformNormal", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vinsertps xmm3, xmm3, xmm7, 0
    vinsertps xmm3, xmm3, xmm6, 10h
    vinsertps xmm3, xmm3, xmm0, 20h ; ' '
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vmulps  xmm7, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm2, xmm0, xmm7
    vshufps xmm5, xmm7, xmm7, 59h ; 'Y'
    vcmpltps xmm1, xmm5, xmm0
    vshufps xmm6, xmm7, xmm7, 0AAh ; 'ª'
    vcmpltps xmm0, xmm6, xmm0
    vpcmpeqd xmm4, xmm0, xmm1
    vaddps  xmm1, xmm6, xmm5
    vshufps xmm0, xmm1, xmm2, 0
    vshufps xmm3, xmm0, xmm2, 8
    vsubps  xmm1, xmm5, xmm6
    vshufps xmm0, xmm1, xmm7, 0
    vshufps xmm2, xmm0, xmm7, 8
    vmovups xmm0, xmm4
    vblendvps xmm5, xmm2, xmm3, xmm0
    vmulps  xmm1, xmm5, xmm5
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm5
    vmulps  xmm3, xmm2, xmm7
    vinsertps xmm0, xmm3, xmm3, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm6, xmm1, xmm1
    vandps  xmm0, xmm6, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v245 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v282 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float3Orthogonal", v1466);
    v245 = 0;
    if ( v282 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v245 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v285 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float3Orthogonal", v1466);
    v245 = 0;
    if ( v285 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v245 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v288 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float3Orthogonal", v1466);
    v245 = 0;
    if ( v288 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm12
    vcomiss xmm0, xmm13
  }
  if ( !v245 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float3Orthogonal", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm14; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm6
    vinsertps xmm13, xmm13, xmm7, 10h
    vinsertps xmm13, xmm13, xmm8, 20h ; ' '
    vinsertps xmm13, xmm13, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm14; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm6, cs:__real@c1000000
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_19C], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm14
    vinsertps xmm12, xmm12, xmm7, 10h
    vinsertps xmm12, xmm12, xmm8, 20h ; ' '
    vinsertps xmm12, xmm12, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_198], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm6; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A4], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm11
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm8, 20h ; ' '
    vinsertps xmm9, xmm9, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_194], xmm0
    vmovaps xmm1, xmm15; max
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  __asm { vmovaps xmm0, xmm6; min }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm10
    vinsertps xmm7, xmm7, xmm8, 10h
    vinsertps xmm7, xmm7, [rsp+208h+var_1C4], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_190], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm6; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A8], xmm0
    vmovaps xmm0, xmm6; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_18C], xmm0
    vshufps xmm2, xmm13, xmm13, 55h ; 'U'
    vmulps  xmm3, xmm9, xmm2
    vmovss  xmm9, [rsp+208h+var_1B0]
    vmovaps xmm6, xmm8
    vinsertps xmm6, xmm6, [rsp+208h+var_1C8], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_1A8], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vshufps xmm0, xmm13, xmm13, 0
    vmulps  xmm1, xmm12, xmm0
    vmovss  xmm12, [rsp+208h+var_1AC]
    vshufps xmm4, xmm13, xmm13, 0AAh ; 'ª'
    vmulps  xmm0, xmm7, xmm4
    vmovss  xmm7, cs:__real@3a83126f
    vaddps  xmm2, xmm0, xmm1
    vshufps xmm5, xmm13, xmm13, 0FFh
    vmulps  xmm1, xmm6, xmm5
    vaddps  xmm0, xmm1, xmm3
    vaddps  xmm6, xmm0, xmm2
    vmulss  xmm0, xmm14, xmm9
    vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm11, xmm12
    vmovss  xmm11, [rsp+208h+var_1B4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm11
    vmovss  xmm10, [rsp+208h+var_1B8]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm10
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm6, xmm2
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm7
  }
  if ( !v360 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v391 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Transform", v1466);
    v360 = 0;
    if ( v391 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm12, [rsp+208h+var_1BC]
    vmulss  xmm0, xmm9, [rsp+208h+var_1C0]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_1A0]
    vmulss  xmm0, xmm10, [rsp+208h+var_1C8]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm7
  }
  if ( !v360 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v402 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Transform", v1466);
    v360 = 0;
    if ( v402 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm12, [rsp+208h+var_1A4]
    vmulss  xmm0, xmm9, [rsp+208h+var_19C]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_1C4]
    vmulss  xmm0, xmm10, [rsp+208h+var_1A8]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm7
  }
  if ( !v360 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v413 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Transform", v1466);
    v360 = 0;
    if ( v413 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm12, [rsp+208h+var_194]
    vmulss  xmm0, xmm9, [rsp+208h+var_198]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_190]
    vmulss  xmm0, xmm10, [rsp+208h+var_18C]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm14
    vcomiss xmm1, xmm7
  }
  if ( !v360 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Transform", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm13, cs:__real@c1000000
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vinsertps xmm11, xmm11, xmm6, 0
    vinsertps xmm11, xmm11, xmm7, 10h
    vinsertps xmm11, xmm11, xmm0, 20h ; ' '
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vinsertps xmm9, xmm9, xmm12, 0
    vinsertps xmm9, xmm9, xmm6, 10h
    vinsertps xmm9, xmm9, xmm0, 20h ; ' '
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vinsertps xmm7, xmm7, xmm10, 0
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm0, 20h ; ' '
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
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
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vinsertps xmm6, xmm6, xmm8, 0
    vinsertps xmm6, xmm6, [rsp+208h+var_1C8], 10h
    vinsertps xmm6, xmm6, xmm0, 20h ; ' '
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vshufps xmm2, xmm11, xmm11, 55h ; 'U'
    vshufps xmm0, xmm11, xmm11, 0
    vmulps  xmm0, xmm9, xmm0
    vaddps  xmm3, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vmovss  xmm9, [rsp+208h+var_1B0]
    vmulps  xmm0, xmm7, xmm2
    vaddps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vshufps xmm4, xmm11, xmm11, 0AAh ; 'ª'
    vmovss  xmm11, [rsp+208h+var_1AC]
    vmulps  xmm1, xmm6, xmm4
    vmovss  xmm6, cs:__real@3a83126f
    vaddps  xmm0, xmm1, xmm3
    vaddps  xmm2, xmm2, xmm0
    vandps  xmm7, xmm2, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
    vmulss  xmm1, xmm10, xmm11
    vmovss  xmm10, [rsp+208h+var_1B4]
    vmulss  xmm0, xmm12, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm10
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm7, xmm2
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm6
  }
  if ( !v478 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v501 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4Rotate", v1466);
    v478 = 0;
    if ( v501 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm11, [rsp+208h+var_1B8]
    vmulss  xmm0, xmm9, [rsp+208h+var_1BC]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, [rsp+208h+var_1C8]
    vaddss  xmm2, xmm2, xmm1
    vshufps xmm3, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm0, xmm3, xmm2
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm6
  }
  if ( !v478 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v510 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4Rotate", v1466);
    v478 = 0;
    if ( v510 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm11, [rsp+208h+var_1C0]
    vmulss  xmm0, xmm9, [rsp+208h+var_1A0]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, [rsp+208h+var_1C4]
    vaddss  xmm2, xmm2, xmm1
    vshufps xmm3, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm0, xmm3, xmm2
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm6
  }
  if ( !v478 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v519 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4Rotate", v1466);
    v478 = 0;
    if ( v519 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vandps  xmm0, xmm0, xmm14
    vcomiss xmm0, xmm6
  }
  if ( !v478 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4Rotate", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm15; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm6
    vinsertps xmm11, xmm11, xmm7, 10h
    vinsertps xmm11, xmm11, xmm8, 20h ; ' '
    vinsertps xmm11, xmm11, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm1, xmm15; max
    vmovaps xmm0, xmm13; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm8, cs:__real@41000000
    vmovaps xmm15, xmm0
    vmovaps xmm1, xmm8; max
    vmovaps xmm0, xmm13; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm14, xmm0
    vmovaps xmm0, xmm13; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm9, cs:__real@c1000000
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm1, xmm8; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm6
    vinsertps xmm7, xmm7, xmm10, 10h
    vinsertps xmm7, xmm7, [rsp+208h+var_1C8], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm1, xmm8; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_194], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm1, xmm8; max
    vmovaps xmm0, xmm9; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_19C], xmm0
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm6, xmm6, xmm10, 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_1C4], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_198], xmm0
    vmovaps xmm1, xmm8; max
    vmovaps xmm0, xmm9; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_190], xmm0
    vmovaps xmm10, xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A8], xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A4], xmm0
    vmovaps xmm0, xmm9; min
    vmovaps xmm1, xmm8; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_18C], xmm0
    vshufps xmm8, xmm11, xmm11, 0
    vshufps xmm9, xmm11, xmm11, 55h ; 'U'
    vmovaps xmm1, xmm10
    vinsertps xmm1, xmm1, [rsp+208h+var_1A8], 10h
    vinsertps xmm1, xmm1, [rsp+208h+var_1A4], 20h
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vshufps xmm0, xmm6, xmm1, 44h ; 'D'
    vshufps xmm1, xmm6, xmm1, 0EEh ; 'î'
    vshufps xmm10, xmm11, xmm11, 0AAh ; 'ª'
    vmovdqa xmmword ptr [rsp+208h+M1.baseclass_0.z.v], xmm6
    vshufps xmm11, xmm11, xmm11, 0FFh
    vmovaps xmm3, xmm15
    vinsertps xmm3, xmm3, xmm14, 10h
    vinsertps xmm3, xmm3, xmm13, 20h ; ' '
    vinsertps xmm3, xmm3, xmm12, 30h ; '0'
    vshufps xmm2, xmm3, xmm7, 44h ; 'D'
    vshufps xmm4, xmm2, xmm0, 88h ; 'ˆ'
    vshufps xmm5, xmm2, xmm0, 0DDh ; 'Ý'
    vshufps xmm3, xmm3, xmm7, 0EEh ; 'î'
    vshufps xmm6, xmm3, xmm1, 88h ; 'ˆ'
    vmulps  xmm0, xmm8, xmm4
    vaddps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vmulps  xmm0, xmm9, xmm5
    vmovss  xmm9, [rsp+208h+var_1B0]
    vmovdqa xmmword ptr [rsp+208h+M1.baseclass_0.y.v], xmm7
    vshufps xmm7, xmm3, xmm1, 0DDh ; 'Ý'
    vaddps  xmm3, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vmulps  xmm1, xmm10, xmm6
    vmovss  xmm10, [rsp+208h+var_1AC]
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddps  xmm2, xmm1, xmm2
    vmulps  xmm0, xmm11, xmm7
    vmovss  xmm11, [rsp+208h+var_1B4]
    vaddps  xmm1, xmm0, xmm3
    vaddps  xmm8, xmm1, xmm2
    vmulss  xmm1, xmm14, xmm10
    vmulss  xmm0, xmm15, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm11
    vmovss  xmm13, [rsp+208h+var_1B8]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm12, xmm13
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm8, xmm2
    vandps  xmm1, xmm1, xmm6
    vmovss  xmm7, cs:__real@3a83126f
    vcomiss xmm1, xmm7
  }
  if ( !v587 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v632 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4TransformTranspose", v1466);
    v587 = 0;
    if ( v632 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_1BC]
    vmulss  xmm0, xmm9, [rsp+208h+var_1C0]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_1C8]
    vmulss  xmm0, xmm13, [rsp+208h+var_1A0]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm8, xmm8, 55h ; 'U'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, xmm7
  }
  if ( !v587 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v643 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4TransformTranspose", v1466);
    v587 = 0;
    if ( v643 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_19C]
    vmulss  xmm0, xmm9, [rsp+208h+var_194]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_1C4]
    vmulss  xmm0, xmm13, [rsp+208h+var_198]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm8, xmm8, 0AAh ; 'ª'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, xmm7
  }
  if ( !v587 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v654 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4TransformTranspose", v1466);
    v587 = 0;
    if ( v654 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm10, [rsp+208h+var_1A8]
    vmulss  xmm0, xmm9, [rsp+208h+var_190]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, [rsp+208h+var_1A4]
    vmulss  xmm0, xmm13, [rsp+208h+var_18C]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm8, xmm8, 0FFh
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm6
    vcomiss xmm1, xmm7
  }
  if ( !v587 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4TransformTranspose", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm14, cs:__real@41000000
    vmovss  xmm15, cs:__real@c1000000
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vinsertps xmm8, xmm8, xmm6, 0
    vinsertps xmm8, xmm8, xmm7, 10h
    vinsertps xmm8, xmm8, xmm0, 20h ; ' '
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm11, xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vinsertps xmm10, xmm10, xmm6, 0
    vinsertps xmm10, xmm10, xmm7, 10h
    vinsertps xmm10, xmm10, xmm0, 20h ; ' '
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vinsertps xmm9, xmm9, xmm6, 0
    vinsertps xmm9, xmm9, xmm7, 10h
    vinsertps xmm9, xmm9, xmm0, 20h ; ' '
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
    vinsertps xmm1, xmm1, xmm7, 0
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm0, 20h ; ' '
    vxorps  xmm2, xmm2, xmm2
    vinsertps xmm2, xmm2, xmm13, 0
    vinsertps xmm2, xmm2, xmm12, 10h
    vinsertps xmm2, xmm2, xmm11, 20h ; ' '
    vmovdqa xmmword ptr [rsp+208h+M1.w.v], xmm1
    vshufps xmm1, xmm2, xmm10, 44h ; 'D'
    vshufps xmm6, xmm8, xmm8, 0
    vshufps xmm7, xmm8, xmm8, 55h ; 'U'
    vxorps  xmm4, xmm4, xmm4
    vshufps xmm0, xmm9, xmm4, 44h ; 'D'
    vshufps xmm3, xmm1, xmm0, 88h ; 'ˆ'
    vshufps xmm5, xmm1, xmm0, 0DDh ; 'Ý'
    vshufps xmm1, xmm2, xmm10, 0EEh ; 'î'
    vshufps xmm0, xmm9, xmm4, 0EEh ; 'î'
    vshufps xmm4, xmm1, xmm0, 88h ; 'ˆ'
    vmulps  xmm0, xmm6, xmm3
    vaddps  xmm3, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vmulps  xmm0, xmm7, xmm5
    vaddps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vmovss  xmm7, [rsp+208h+var_1B0]
    vshufps xmm8, xmm8, xmm8, 0AAh ; 'ª'
    vmulps  xmm1, xmm8, xmm4
    vmovss  xmm8, [rsp+208h+var_1AC]
    vaddps  xmm0, xmm1, xmm3
    vaddps  xmm2, xmm0, xmm2
    vandps  xmm6, xmm2, xmmword ptr cs:?g_keepXYZ@@3Ufloat4@@B.v; float4 const g_keepXYZ
    vmulss  xmm0, xmm13, xmm7
    vmulss  xmm1, xmm12, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmovdqa xmmword ptr [rsp+208h+M1.baseclass_0.z.v], xmm9
    vmovss  xmm9, [rsp+208h+var_1B4]
    vmulss  xmm1, xmm11, xmm9
    vmovss  xmm11, cs:__real@3a83126f
    vaddss  xmm2, xmm2, xmm1
    vmovdqa xmmword ptr [rsp+208h+M1.baseclass_0.y.v], xmm10
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm6, xmm2
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm11
  }
  if ( !v720 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v761 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4RotateTranspose", v1466);
    v720 = 0;
    if ( v761 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_1B8]
    vmulss  xmm0, xmm7, [rsp+208h+var_1BC]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_1C0]
    vaddss  xmm2, xmm2, xmm1
    vshufps xmm3, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm0, xmm3, xmm2
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm11
  }
  if ( !v720 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v770 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4RotateTranspose", v1466);
    v720 = 0;
    if ( v770 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_1A0]
    vmulss  xmm0, xmm7, [rsp+208h+var_1C8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_1C4]
    vaddss  xmm2, xmm2, xmm1
    vshufps xmm3, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm0, xmm3, xmm2
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm11
  }
  if ( !v720 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v779 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4RotateTranspose", v1466);
    v720 = 0;
    if ( v779 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm11
  }
  if ( !v720 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4RotateTranspose", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm9, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm13
    vinsertps xmm6, xmm6, xmm9, 10h
    vinsertps xmm6, xmm6, xmm12, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vshufps xmm1, xmm7, xmm6, 44h ; 'D'
    vmovaps xmm3, xmm9
    vinsertps xmm3, xmm3, xmm12, 10h
    vinsertps xmm3, xmm3, [rsp+208h+var_1C8], 20h
    vinsertps xmm3, xmm3, xmm0, 30h ; '0'
    vshufps xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v, 44h ; 'D'; float4 const g_one
    vshufps xmm12, xmm1, xmm0, 88h ; 'ˆ'
    vshufps xmm9, xmm1, xmm0, 0DDh ; 'Ý'
    vshufps xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v, 0EEh ; 'î'; float4 const g_one
    vshufps xmm1, xmm7, xmm6, 0EEh ; 'î'
    vshufps xmm6, xmm1, xmm0, 88h ; 'ˆ'
    vucomiss xmm12, xmm8
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v834 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3Tranpose (1)", v1466);
    v822 = !v834;
    if ( v834 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 55h ; 'U'
    vucomiss xmm0, xmm13
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v836 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3Tranpose (1)", v1466);
    v822 = !v836;
    if ( v836 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1AC]
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v838 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3Tranpose (1)", v1466);
    v822 = !v838;
    if ( v838 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vshufps xmm0, xmm12, xmm12, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v841 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3Tranpose (1)", v1466);
    v822 = !v841;
    if ( v841 )
      __debugbreak();
  }
  __asm { vucomiss xmm9, [rsp+208h+var_1B0] }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v842 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3Tranpose (2)", v1466);
    v822 = !v842;
    if ( v842 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1B4]
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v844 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3Tranpose (2)", v1466);
    v822 = !v844;
    if ( v844 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1B8]
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v846 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3Tranpose (2)", v1466);
    v822 = !v846;
    if ( v846 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v848 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3Tranpose (2)", v1466);
    v822 = !v848;
    if ( v848 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, [rsp+208h+var_1BC] }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v849 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3Tranpose (3)", v1466);
    v822 = !v849;
    if ( v849 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1C0]
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v851 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3Tranpose (3)", v1466);
    v822 = !v851;
    if ( v851 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1C8]
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v853 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3Tranpose (3)", v1466);
    v822 = !v853;
    if ( v853 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v822 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3Tranpose (3)", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm8
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm9, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm6, xmm13
    vinsertps xmm6, xmm6, xmm9, 10h
    vinsertps xmm6, xmm6, xmm12, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vshufps xmm1, xmm7, xmm6, 44h ; 'D'
    vmovaps xmm2, xmm9
    vinsertps xmm2, xmm2, xmm12, 10h
    vinsertps xmm2, xmm2, [rsp+208h+var_1C8], 20h
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
    vxorps  xmm3, xmm3, xmm3
    vshufps xmm0, xmm2, xmm3, 44h ; 'D'
    vshufps xmm12, xmm1, xmm0, 88h ; 'ˆ'
    vshufps xmm9, xmm1, xmm0, 0DDh ; 'Ý'
    vshufps xmm1, xmm7, xmm6, 0EEh ; 'î'
    vshufps xmm0, xmm2, xmm3, 0EEh ; 'î'
    vshufps xmm6, xmm1, xmm0, 88h ; 'ˆ'
    vucomiss xmm12, xmm8
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v908 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3TransposeNormals (1)", v1466);
    v895 = !v908;
    if ( v908 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 55h ; 'U'
    vucomiss xmm0, xmm13
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v910 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3TransposeNormals (1)", v1466);
    v895 = !v910;
    if ( v910 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1AC]
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v912 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3TransposeNormals (1)", v1466);
    v895 = !v912;
    if ( v912 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 0FFh
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm0, xmm7
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v915 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3TransposeNormals (1)", v1466);
    v895 = !v915;
    if ( v915 )
      __debugbreak();
  }
  __asm { vucomiss xmm9, [rsp+208h+var_1B0] }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v916 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3TransposeNormals (2)", v1466);
    v895 = !v916;
    if ( v916 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1B4]
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v918 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3TransposeNormals (2)", v1466);
    v895 = !v918;
    if ( v918 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1B8]
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v920 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3TransposeNormals (2)", v1466);
    v895 = !v920;
    if ( v920 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v922 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3TransposeNormals (2)", v1466);
    v895 = !v922;
    if ( v922 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, [rsp+208h+var_1BC] }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v923 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float3x3TransposeNormals (3)", v1466);
    v895 = !v923;
    if ( v923 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1C0]
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v925 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float3x3TransposeNormals (3)", v1466);
    v895 = !v925;
    if ( v925 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1C8]
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v927 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float3x3TransposeNormals (3)", v1466);
    v895 = !v927;
    if ( v927 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, xmm7
  }
  if ( !v895 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float3x3TransposeNormals (3)", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm9
    vinsertps xmm8, xmm8, xmm6, 10h
    vinsertps xmm8, xmm8, xmm7, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A8], xmm0
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm6
    vinsertps xmm7, xmm7, xmm12, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A4], xmm0
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm6, xmm6, xmm12, 10h
    vinsertps xmm6, xmm6, xmm13, 20h ; ' '
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vshufps xmm1, xmm8, xmm7, 44h ; 'D'
    vmovaps xmm2, xmm12
    vinsertps xmm2, xmm2, xmm13, 10h
    vinsertps xmm2, xmm2, [rsp+208h+var_1C8], 20h
    vinsertps xmm2, xmm2, xmm0, 30h ; '0'
    vshufps xmm0, xmm6, xmm2, 44h ; 'D'
    vshufps xmm13, xmm1, xmm0, 88h ; 'ˆ'
    vucomiss xmm13, xmm9
    vshufps xmm12, xmm1, xmm0, 0DDh ; 'Ý'
    vshufps xmm1, xmm8, xmm7, 0EEh ; 'î'
    vshufps xmm0, xmm6, xmm2, 0EEh ; 'î'
    vshufps xmm6, xmm1, xmm0, 88h ; 'ˆ'
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v995 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x3Tranpose (1)", v1466);
    v983 = !v995;
    if ( v995 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm13, xmm13, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1AC]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v997 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x3Tranpose (1)", v1466);
    v983 = !v997;
    if ( v997 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm13, xmm13, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1B0]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v999 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x3Tranpose (1)", v1466);
    v983 = !v999;
    if ( v999 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm13, xmm13, 0FFh
    vucomiss xmm0, [rsp+208h+var_1B4]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1001 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x3Tranpose (1)", v1466);
    v983 = !v1001;
    if ( v1001 )
      __debugbreak();
  }
  __asm { vucomiss xmm12, [rsp+208h+var_1B8] }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1002 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x3Tranpose (2)", v1466);
    v983 = !v1002;
    if ( v1002 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1BC]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1004 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x3Tranpose (2)", v1466);
    v983 = !v1004;
    if ( v1004 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1C0]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1006 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x3Tranpose (2)", v1466);
    v983 = !v1006;
    if ( v1006 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 0FFh
    vucomiss xmm0, [rsp+208h+var_1A0]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1008 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x3Tranpose (2)", v1466);
    v983 = !v1008;
    if ( v1008 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, [rsp+208h+var_1C4] }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1009 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x3Tranpose (3)", v1466);
    v983 = !v1009;
    if ( v1009 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1A8]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1011 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x3Tranpose (3)", v1466);
    v983 = !v1011;
    if ( v1011 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1A4]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1013 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x3Tranpose (3)", v1466);
    v983 = !v1013;
    if ( v1013 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, [rsp+208h+var_1C8]
  }
  if ( !v983 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x3Tranpose (3)", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_19C], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm13
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, xmm9, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A8], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm6, xmm6, xmm9, 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_1A8], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_194], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A4], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm9
    vinsertps xmm1, xmm1, [rsp+208h+var_1C8], 10h
    vinsertps xmm1, xmm1, [rsp+208h+var_1A4], 20h
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovaps xmm3, xmm8
    vinsertps xmm3, xmm3, xmm12, 10h
    vinsertps xmm3, xmm3, [rsp+208h+var_1C4], 20h
    vinsertps xmm3, xmm3, [rsp+208h+var_19C], 30h
    vshufps xmm2, xmm3, xmm7, 44h ; 'D'
    vshufps xmm3, xmm3, xmm7, 0EEh ; 'î'
    vmovss  [rsp+208h+var_198], xmm0
    vshufps xmm0, xmm6, xmm1, 44h ; 'D'
    vshufps xmm1, xmm6, xmm1, 0EEh ; 'î'
    vshufps xmm9, xmm2, xmm0, 88h ; 'ˆ'
    vucomiss xmm9, xmm8
    vshufps xmm6, xmm2, xmm0, 0DDh ; 'Ý'
    vshufps xmm7, xmm3, xmm1, 88h ; 'ˆ'
    vshufps xmm12, xmm3, xmm1, 0DDh ; 'Ý'
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1079 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Tranpose (1)", v1466);
    v1062 = !v1079;
    if ( v1079 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 55h ; 'U'
    vucomiss xmm0, xmm13
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1081 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Tranpose (1)", v1466);
    v1062 = !v1081;
    if ( v1081 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1AC]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1083 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Tranpose (1)", v1466);
    v1062 = !v1083;
    if ( v1083 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm9, xmm9, 0FFh
    vucomiss xmm0, [rsp+208h+var_1B0]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1085 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Tranpose (1)", v1466);
    v1062 = !v1085;
    if ( v1085 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, [rsp+208h+var_1B4] }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1086 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Tranpose (2)", v1466);
    v1062 = !v1086;
    if ( v1086 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1B8]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1088 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Tranpose (2)", v1466);
    v1062 = !v1088;
    if ( v1088 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1BC]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1090 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Tranpose (2)", v1466);
    v1062 = !v1090;
    if ( v1090 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm6, xmm6, 0FFh
    vucomiss xmm0, [rsp+208h+var_1C8]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1092 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Tranpose (2)", v1466);
    v1062 = !v1092;
    if ( v1092 )
      __debugbreak();
  }
  __asm { vucomiss xmm7, [rsp+208h+var_1C4] }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1093 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Tranpose (3)", v1466);
    v1062 = !v1093;
    if ( v1093 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1C0]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1095 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Tranpose (3)", v1466);
    v1062 = !v1095;
    if ( v1095 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_1A8]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1097 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Tranpose (3)", v1466);
    v1062 = !v1097;
    if ( v1097 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vucomiss xmm0, [rsp+208h+var_1A4]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1099 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Tranpose (3)", v1466);
    v1062 = !v1099;
    if ( v1099 )
      __debugbreak();
  }
  __asm { vucomiss xmm12, [rsp+208h+var_19C] }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1100 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X component", "Float4x4Tranpose (4)", v1466);
    v1062 = !v1100;
    if ( v1100 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 55h ; 'U'
    vucomiss xmm0, [rsp+208h+var_1A0]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1102 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y component", "Float4x4Tranpose (4)", v1466);
    v1062 = !v1102;
    if ( v1102 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 0AAh ; 'ª'
    vucomiss xmm0, [rsp+208h+var_194]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1104 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z component", "Float4x4Tranpose (4)", v1466);
    v1062 = !v1104;
    if ( v1104 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm12, xmm12, 0FFh
    vucomiss xmm0, [rsp+208h+var_198]
  }
  if ( !v1062 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W component", "Float4x4Tranpose (4)", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_170], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_174], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_16C], xmm0
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm8, xmm6
    vinsertps xmm8, xmm8, xmm7, 10h
    vinsertps xmm8, xmm8, xmm9, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_168], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm12, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm13, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm7, xmm9
    vinsertps xmm7, xmm7, xmm12, 10h
    vinsertps xmm7, xmm7, xmm13, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_164], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_160], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1BC], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B8], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+208h+var_1BC], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_1B8], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_15C], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B0], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1B4], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1AC], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_158], xmm0
    vmovaps xmm3, xmm0
    vmovss  xmm0, [rsp+208h+var_1B0]
    vinsertps xmm0, xmm0, [rsp+208h+var_1B4], 10h
    vinsertps xmm0, xmm0, [rsp+208h+var_1AC], 20h
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vmovdqa xmmword ptr [rsp+208h+result.w.v], xmm0
    vmovdqa xmmword ptr [rsp+208h+result.baseclass_0.x.v], xmm8
    vmovdqa xmmword ptr [rsp+208h+result.baseclass_0.y.v], xmm7
    vmovdqa xmmword ptr [rsp+208h+result.baseclass_0.z.v], xmm6
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_198], xmm0
    vmovaps xmm8, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1C0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_19C], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm8, xmm8, xmm6, 10h
    vinsertps xmm8, xmm8, xmm7, 20h ; ' '
    vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1C8], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_190], xmm0
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_1A0], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_180], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm7, xmm7, [rsp+208h+var_180], 20h
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1A4], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_194], xmm0
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_18C], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_17C], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vinsertps xmm6, xmm6, [rsp+208h+var_18C], 10h
    vinsertps xmm6, xmm6, [rsp+208h+var_17C], 20h
    vinsertps xmm6, xmm6, xmm0, 30h ; '0'
    vmovss  [rsp+208h+var_1A8], xmm0
    vmovaps xmm1, xmm14; max
    vmovaps xmm0, xmm15; min
  }
  g_unitSavedSeed_0 = *GetRandSeed();
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_188], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_184], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  [rsp+208h+var_178], xmm0
    vmovaps xmm0, xmm15; min
    vmovaps xmm1, xmm14; max
  }
  *(double *)&_XMM0 = I_flrand(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, [rsp+208h+var_188]
    vinsertps xmm1, xmm1, [rsp+208h+var_184], 10h
    vinsertps xmm1, xmm1, [rsp+208h+var_178], 20h
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovdqa xmmword ptr [rsp+208h+M1.w.v], xmm1
    vmovss  [rsp+208h+var_1C4], xmm0
    vmovdqa xmmword ptr [rsp+208h+M1.baseclass_0.x.v], xmm8
    vmovdqa xmmword ptr [rsp+208h+M1.baseclass_0.y.v], xmm7
    vmovdqa xmmword ptr [rsp+208h+M1.baseclass_0.z.v], xmm6
  }
  Float4x4Mul(&result, &M1, v1212);
  __asm
  {
    vmovss  xmm8, [rsp+208h+var_174]
    vmovss  xmm7, [rsp+208h+var_170]
    vmovss  xmm14, [rsp+208h+var_16C]
    vmovss  xmm15, [rsp+208h+var_168]
    vmovups xmmword ptr [rsp+208h+result.baseclass_0.y.v], xmm1
    vmovups xmmword ptr [rsp+208h+result.baseclass_0.x.v], xmm0
    vmovups ymm1, ymmword ptr [rsp+208h+result.baseclass_0.x.v]
    vmovups xmmword ptr [rsp+208h+result.w.v], xmm3
    vmulss  xmm3, xmm8, [rsp+208h+var_190]
    vmovups xmmword ptr [rsp+208h+result.baseclass_0.z.v], xmm2
    vmovups ymm2, ymmword ptr [rsp+208h+result.baseclass_0.z.v]
    vmovups ymmword ptr [rsp+208h+M1.baseclass_0.x.v], ymm1
    vmulss  xmm1, xmm7, [rsp+208h+var_198]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm15, [rsp+208h+var_188]
    vmovups ymmword ptr [rsp+208h+M1.baseclass_0.z.v], ymm2
    vmulss  xmm2, xmm14, [rsp+208h+var_194]
    vaddss  xmm5, xmm4, xmm2
    vaddss  xmm3, xmm5, xmm1
    vsubss  xmm0, xmm0, xmm3
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1230 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Tranpose (1)", v1466);
    v1213 = 0;
    if ( v1230 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_1A0]
    vmulss  xmm0, xmm7, [rsp+208h+var_1C0]
    vmovups xmm6, xmmword ptr [rsp+208h+M1.baseclass_0.x.v]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, [rsp+208h+var_18C]
    vmulss  xmm0, xmm15, [rsp+208h+var_184]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1242 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Tranpose (1)", v1466);
    v1213 = 0;
    if ( v1242 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_180]
    vmulss  xmm0, xmm7, [rsp+208h+var_19C]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, [rsp+208h+var_17C]
    vmulss  xmm0, xmm15, [rsp+208h+var_178]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1253 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Tranpose (1)", v1466);
    v1213 = 0;
    if ( v1253 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_1A4]
    vmovss  xmm8, [rsp+208h+var_1C8]
    vmulss  xmm0, xmm8, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, [rsp+208h+var_1A8]
    vmulss  xmm0, xmm15, [rsp+208h+var_1C4]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1265 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Tranpose (1)", v1466);
    v1213 = 0;
    if ( v1265 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm12, [rsp+208h+var_190]
    vmulss  xmm0, xmm9, [rsp+208h+var_198]
    vmovss  xmm7, [rsp+208h+var_164]
    vmovups xmm6, xmmword ptr [rsp+208h+M1.baseclass_0.y.v]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, [rsp+208h+var_194]
    vmulss  xmm0, xmm7, [rsp+208h+var_188]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm6, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1277 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Tranpose (2)", v1466);
    v1213 = 0;
    if ( v1277 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm15, [rsp+208h+var_1A0]
    vmovss  xmm14, [rsp+208h+var_1C0]
    vmulss  xmm1, xmm15, xmm12
    vmulss  xmm0, xmm14, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, [rsp+208h+var_18C]
    vmulss  xmm0, xmm7, [rsp+208h+var_184]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1290 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Tranpose (2)", v1466);
    v1213 = 0;
    if ( v1290 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm12, [rsp+208h+var_180]
    vmulss  xmm0, xmm9, [rsp+208h+var_19C]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, [rsp+208h+var_17C]
    vmulss  xmm0, xmm7, [rsp+208h+var_178]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1301 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Tranpose (2)", v1466);
    v1213 = 0;
    if ( v1301 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm12, [rsp+208h+var_1A4]
    vmulss  xmm0, xmm8, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, [rsp+208h+var_1A8]
    vmulss  xmm0, xmm7, [rsp+208h+var_1C4]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1312 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Tranpose (2)", v1466);
    v1213 = 0;
    if ( v1312 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, [rsp+208h+var_1BC]
    vmulss  xmm1, xmm8, [rsp+208h+var_190]
    vmovss  xmm7, [rsp+208h+var_160]
    vmulss  xmm0, xmm7, [rsp+208h+var_198]
    vmovss  xmm9, [rsp+208h+var_1B8]
    vmovss  xmm12, [rsp+208h+var_15C]
    vmovups xmm6, xmmword ptr [rsp+208h+M1.baseclass_0.z.v]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_194]
    vmulss  xmm0, xmm12, [rsp+208h+var_188]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm6, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1327 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Tranpose (3)", v1466);
    v1213 = 0;
    if ( v1327 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm13, [rsp+208h+var_18C]
    vmulss  xmm1, xmm15, xmm8
    vmulss  xmm0, xmm14, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm12, [rsp+208h+var_184]
    vmulss  xmm1, xmm13, xmm9
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1339 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Tranpose (3)", v1466);
    v1213 = 0;
    if ( v1339 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_180]
    vmulss  xmm0, xmm7, [rsp+208h+var_19C]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_17C]
    vmulss  xmm0, xmm12, [rsp+208h+var_178]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1350 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Tranpose (3)", v1466);
    v1213 = 0;
    if ( v1350 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_1A4]
    vmulss  xmm0, xmm7, [rsp+208h+var_1C8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_1A8]
    vmulss  xmm0, xmm12, [rsp+208h+var_1C4]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1361 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Tranpose (3)", v1466);
    v1213 = 0;
    if ( v1361 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, [rsp+208h+var_1B4]
    vmulss  xmm1, xmm8, [rsp+208h+var_190]
    vmovss  xmm7, [rsp+208h+var_1B0]
    vmulss  xmm0, xmm7, [rsp+208h+var_198]
    vmovss  xmm9, [rsp+208h+var_1AC]
    vmovss  xmm12, [rsp+208h+var_158]
    vmovups xmm6, xmmword ptr [rsp+208h+M1.w.v]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_194]
    vmulss  xmm0, xmm12, [rsp+208h+var_188]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm6, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1376 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Tranpose (4)", v1466);
    v1213 = 0;
    if ( v1376 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm15, xmm8
    vmulss  xmm0, xmm14, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm12, [rsp+208h+var_184]
    vmulss  xmm1, xmm13, xmm9
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 55h ; 'U'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1387 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Tranpose (4)", v1466);
    v1213 = 0;
    if ( v1387 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_180]
    vmulss  xmm0, xmm7, [rsp+208h+var_19C]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_17C]
    vmulss  xmm0, xmm12, [rsp+208h+var_178]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1398 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Tranpose (4)", v1466);
    v1213 = 0;
    if ( v1398 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm8, [rsp+208h+var_1A4]
    vmulss  xmm0, xmm7, [rsp+208h+var_1C8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, [rsp+208h+var_1A8]
    vmulss  xmm0, xmm12, [rsp+208h+var_1C4]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vshufps xmm4, xmm6, xmm6, 0FFh
    vsubss  xmm1, xmm4, xmm2
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm11
  }
  if ( !v1213 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Tranpose (4)", v1466) )
      __debugbreak();
  }
  __asm
  {
    vmovaps ymm3, cs:__ymm@3f8000003f7fe00000000000335ce913b33bbd2eb33ba5b6000000003f969dc1
    vmovaps ymm1, cs:__ymm@00000000c07fe000000000000000000000000000000000004005e18f00000000
    vmovups ymmword ptr [rsp+208h+M1.baseclass_0.x.v], ymm3
    vmovups ymmword ptr [rsp+208h+M1.baseclass_0.z.v], ymm1
  }
  v1412 = (unsigned __int8)Float4x4Inverse(&M1, v1214);
  __asm
  {
    vmovss  xmm6, cs:__real@3b03126f
    vmovups xmmword ptr [rsp+208h+M1.baseclass_0.x.v], xmm0
    vsubss  xmm0, xmm0, cs:__real@3f598f3f
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
    vmovups xmmword ptr [rsp+208h+M1.w.v], xmm3
    vmovups xmmword ptr [rsp+208h+M1.baseclass_0.z.v], xmm2
    vmovups ymm2, ymmword ptr [rsp+208h+M1.baseclass_0.z.v]
    vmovups xmmword ptr [rsp+208h+M1.baseclass_0.y.v], xmm1
    vmovups ymm1, ymmword ptr [rsp+208h+M1.baseclass_0.x.v]
    vmovups ymmword ptr [rsp+208h+result.baseclass_0.x.v], ymm1
    vmovups ymmword ptr [rsp+208h+result.baseclass_0.z.v], ymm2
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Inverse (1)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+208h+result.baseclass_0.x.v]
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm1, xmm0, cs:__real@331f8c69
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Inverse (1)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Inverse (1)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Inverse (1)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+208h+result.baseclass_0.y.v]
    vandps  xmm0, xmm7, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Inverse (2)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Inverse (2)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, cs:__real@3ef4c127
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Inverse (2)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Inverse (2)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+208h+result.baseclass_0.z.v]
    vandps  xmm0, xmm7, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Inverse (3)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Inverse (3)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Inverse (3)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vsubss  xmm1, xmm0, cs:__real@be801002
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Inverse (3)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+208h+result.w.v]
    vsubss  xmm0, xmm7, cs:__real@b33bbd2d
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "X component out of range", "Float4x4Inverse (4)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 55h ; 'U'
    vsubss  xmm1, xmm0, cs:__real@3f800000
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Y component out of range", "Float4x4Inverse (4)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0AAh ; 'ª'
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Z component out of range", "Float4x4Inverse (4)", v1466);
    v1411 = 0;
    if ( v1412 )
      __debugbreak();
  }
  __asm
  {
    vshufps xmm0, xmm7, xmm7, 0FFh
    vsubss  xmm1, xmm0, cs:__real@3e800000
    vandps  xmm1, xmm1, xmm10
    vcomiss xmm1, xmm6
  }
  if ( !v1411 )
  {
    LODWORD(v1466) = g_unitSavedSeed_0;
    v1412 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "W component out of range", "Float4x4Inverse (4)", v1466);
    if ( v1412 )
      __debugbreak();
  }
  _R11 = &v1615;
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
  return v1412;
}

/*
==============
Int4MiscTest
==============
*/
char Int4MiscTest()
{
  __int64 v46; 
  unsigned int v47; 
  unsigned __int64 v48; 
  unsigned __int64 v49; 
  unsigned __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  unsigned __int64 v53; 
  __int128 v54; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v48 = 0xFE060504FF030201ui64;
  __asm
  {
    vmovq   xmm6, [rbp+57h+var_70]
    vpextrd rax, xmm6, 0
  }
  if ( (_DWORD)_RAX != -16580095 )
  {
    v47 = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4LoadByte8", v47) )
      __debugbreak();
  }
  __asm { vpextrd rdx, xmm6, 1 }
  if ( (_DWORD)_RDX != -33159932 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4LoadByte8", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4LoadByte8", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4LoadByte8", v46) )
      __debugbreak();
  }
  __asm
  {
    vmovdqu xmm6, cs:__xmm@21212121212121212121212121212121
    vpextrd rax, xmm6, 0
  }
  if ( (_DWORD)_RAX != 555819297 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4LoadByte", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 1 }
  if ( (_DWORD)_RAX != 555819297 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4LoadByte", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX != 555819297 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4LoadByte", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX != 555819297 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4LoadByte", v46) )
      __debugbreak();
  }
  v50 = 0xFE060504FF030201ui64;
  __asm { vmovq   xmm0, qword ptr [rbp+57h+var_60] }
  v49 = 0xFE070605FF040302ui64;
  __asm
  {
    vmovq   xmm1, [rbp+57h+var_70]
    vpcmpeqb xmm1, xmm1, xmm0
    vpmovmskb eax, xmm1
  }
  if ( _EAX != 65416 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4CmpEqByte", v46) )
      __debugbreak();
  }
  __asm
  {
    vcvttps2dq xmm6, cs:__xmm@c080000040400000400000003f800000
    vpextrd rax, xmm6, 0
  }
  if ( (_DWORD)_RAX != 1 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Float4ConvertToInt4", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 1 }
  if ( (_DWORD)_RAX != 2 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Float4ConvertToInt4", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX != 3 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Float4ConvertToInt4", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX != -4 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Float4ConvertToInt4", v46) )
      __debugbreak();
  }
  __asm
  {
    vpslld  xmm6, xmm6, 2
    vpextrd rax, xmm6, 0
  }
  if ( (_DWORD)_RAX != 4 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4ShiftLeft", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 1 }
  if ( (_DWORD)_RAX != 8 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4ShiftLeft", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX != 12 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4ShiftLeft", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX != -16 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4ShiftLeft", v46) )
      __debugbreak();
  }
  __asm
  {
    vpsrld  xmm7, xmm6, 2
    vpextrd rax, xmm7, 0
  }
  if ( (_DWORD)_RAX != 1 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4ShiftRight", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm7, 1 }
  if ( (_DWORD)_RAX != 2 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4ShiftRight", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm7, 2 }
  if ( (_DWORD)_RAX != 3 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4ShiftRight", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm7, 3 }
  if ( (_DWORD)_RAX != 1073741820 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4ShiftRight", v46) )
      __debugbreak();
  }
  __asm { vmovlps qword ptr [rbp+57h+var_60], xmm6 }
  if ( (_DWORD)v51 != 4 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4StoreXY (0)", v46) )
      __debugbreak();
  }
  if ( HIDWORD(v51) != 8 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4StoreXY (1)", v46) )
      __debugbreak();
  }
  __asm { vmovhps qword ptr [rbp+57h+var_60], xmm7 }
  if ( (_DWORD)v52 != 3 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4StoreZW (0)", v46) )
      __debugbreak();
  }
  if ( HIDWORD(v52) != 1073741820 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect result", "Int4StoreZW (1)", v46) )
      __debugbreak();
  }
  __asm
  {
    vmovq   xmm1, cs:qword_14416B570
    vmovdqu xmm0, cs:__xmm@ffffffffffffffffffffffffffffffff
  }
  v53 = 0xFE060504FF030201ui64;
  __asm
  {
    vmovq   xmm2, qword ptr [rbp+57h+var_60]
    vmovdqu [rbp+57h+var_60], xmm0
  }
  *((_QWORD *)&v54 + 1) = *((_QWORD *)&_RT0 + 1);
  __asm
  {
    vpshufb xmm2, xmm2, xmm1
    vmovq   qword ptr [rbp+57h+var_60], xmm2
    vmovdqu xmm6, [rbp+57h+var_60]
    vpextrd rax, xmm6, 0
  }
  if ( (_DWORD)_RAX != 83821057 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect X (int) component", "Int4RequeueByteXY", v46) )
      __debugbreak();
  }
  __asm { vpextrd rdx, xmm6, 1 }
  if ( (_DWORD)_RDX != 66979333 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Y (int) component", "Int4RequeueByteXY", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 2 }
  if ( (_DWORD)_RAX != -1 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect Z (int) component", "Int4RequeueByteXY", v46) )
      __debugbreak();
  }
  __asm { vpextrd rax, xmm6, 3 }
  if ( (_DWORD)_RAX != -1 )
  {
    LODWORD(v46) = g_unitSavedSeed_0;
    LOBYTE(_RAX) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4_unittest.cpp", 15, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unit test failure: %s for test '%s' (seed = 0x%x).\n", "Incorrect W (int) component", "Int4RequeueByteXY", v46);
    if ( (_BYTE)_RAX )
      __debugbreak();
  }
  _R11 = &v56;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B0h+var_48+8]
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

