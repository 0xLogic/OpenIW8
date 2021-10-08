/*
==============
BG_HeliCmdScale
==============
*/

void __fastcall BG_HeliCmdScale(bool scaleMovement, const char (*move)[4], vec4_t *outFracs, bool allowDeadzone)
{
  ?BG_HeliCmdScale@@YAX_NAEAY03$$CBDAEATvec4_t@@0@Z(scaleMovement, move, outFracs, allowDeadzone);
}

/*
==============
BG_VehicleHelicopterMove
==============
*/

void __fastcall BG_VehicleHelicopterMove(pmove_t *pm, const pml_t *pml)
{
  ?BG_VehicleHelicopterMove@@YAXPEAVpmove_t@@PEBUpml_t@@@Z(pm, pml);
}

/*
==============
BG_HeliCalcAccel
==============
*/
void BG_HeliCalcAccel(const pmove_t *pm, const pml_t *pml, VehicleState *vehicleState, const vec4_t *moveRequest, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  int v27; 
  bool v30; 
  unsigned int v86; 
  bool v99; 
  bool v100; 
  bool v125; 
  bool v126; 
  bool v135; 
  bool v136; 
  bool v144; 
  bool v145; 
  unsigned int v194; 
  bool v196; 
  bool v197; 
  bool v199; 
  bool v200; 
  char v223; 
  bool v224; 
  bool v243; 
  bool v247; 
  unsigned int v293; 
  bool v294; 
  bool v295; 
  bool v296; 
  bool v297; 
  bool v298; 
  bool v299; 
  bool v300; 
  bool v301; 
  __int64 v327; 
  __int64 v328; 
  __int64 v329; 
  __int64 v330; 
  __int64 v331; 
  double v332; 
  double v333; 
  double v334; 
  __int64 v335; 
  __int64 v336; 
  __int64 v337; 
  __int64 v338; 
  __int64 v339; 
  double v340; 
  double v341; 
  double v342; 
  int v346[2]; 
  vec3_t out; 
  vec3_t outAccel; 
  vec3_t angles; 
  vec3_t in1; 
  tmat43_t<vec3_t> forward; 
  char v360; 
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
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RSI = moveRequest;
  _R12 = vehicleState;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 191, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 192, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 193, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !BG_GetVehicleDef(pm) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 196, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 97, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@418ccccd
    vmulss  xmm9, xmm2, dword ptr [r14+60Ch]
    vmulss  xmm1, xmm2, dword ptr [r14+614h]
    vmulss  xmm10, xmm2, dword ptr [r14+610h]
    vmulss  xmm15, xmm2, dword ptr [r14+618h]
    vmovss  xmm8, cs:__real@3f800000
  }
  v27 = 0;
  _RDI = 0i64;
  __asm
  {
    vmovss  [rbp+120h+var_168], xmm9
    vmovss  [rbp+120h+var_164], xmm9
    vmovss  [rbp+120h+var_160], xmm10
    vmovss  [rsp+220h+var_1B0], xmm1
    vmovss  [rsp+220h+var_1AC], xmm1
    vmovss  [rsp+220h+var_1A8], xmm15
    vxorps  xmm12, xmm12, xmm12
  }
  v30 = 1;
  do
  {
    if ( !v30 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
      LODWORD(v336) = 3;
      LODWORD(v328) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v328, v336) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, [rbp+rdi+120h+var_168]
      vmovss  xmm0, [rsp+rdi+220h+var_1B0]
      vdivss  xmm7, xmm0, xmm6
    }
    if ( (unsigned int)v27 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm
    {
      vcmpless xmm0, xmm12, xmm6
      vblendvps xmm0, xmm8, xmm7, xmm0
      vmovss  [rsp+220h+var_1B8], xmm0
    }
    if ( (unsigned int)v27 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, [rsp+220h+var_1B8]
      vmovss  [rbp+rdi+120h+var_140], xmm0
    }
    _RDI += 4i64;
    v30 = (unsigned int)++v27 < 3;
  }
  while ( v27 < 3 );
  _R15 = pml;
  __asm
  {
    vmovss  xmm6, dword ptr [rsi]
    vmovss  xmm7, dword ptr [rsi+4]
    vmovss  xmm8, dword ptr [rsi+8]
  }
  BG_HelicopterHovering(pm, pml, _RSI, _R12, &outAccel);
  __asm
  {
    vmovss  xmm3, dword ptr [r15+24h]
    vmulss  xmm2, xmm3, dword ptr [rbp+120h+outAccel]
    vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm9, xmm6
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm2, xmm3, dword ptr [rbp+120h+outAccel+4]
    vmulss  xmm1, xmm9, xmm7
    vaddss  xmm5, xmm2, xmm1
    vmulss  xmm2, xmm3, dword ptr [rbp+120h+outAccel+8]
    vmulss  xmm1, xmm10, xmm8
    vaddss  xmm13, xmm2, xmm1
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm13
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm11, xmm2, xmm2
    vmovss  xmm2, cs:__real@3f800000
    vcomiss xmm11, xmm2
    vcmpless xmm0, xmm11, cs:__real@80000000
    vblendvps xmm0, xmm11, xmm2, xmm0
    vdivss  xmm1, xmm2, xmm0
    vmulss  xmm7, xmm1, xmm4
    vmulss  xmm8, xmm1, xmm5
    vmulss  xmm9, xmm1, xmm13
    vmovss  [rbp+120h+var_158], xmm4
    vmovss  [rbp+120h+var_154], xmm5
    vmovss  [rbp+120h+var_150], xmm13
  }
  if ( v30 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12+4Ch]
      vmovss  xmm1, dword ptr [r12+50h]
      vmovss  dword ptr [rbp+120h+outAccel], xmm0
      vmovss  xmm0, dword ptr [r12+54h]
      vmovss  dword ptr [rbp+120h+outAccel+8], xmm0
      vmovss  dword ptr [rbp+120h+outAccel+4], xmm1
      vmovss  [rbp+120h+var_178], xmm12
      vmovss  [rbp+120h+var_174], xmm12
      vmovss  [rbp+120h+var_170], xmm12
      vmovaps xmm11, xmm12
      vmovaps xmm10, xmm12
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm8, dword ptr [r12+50h]
      vmulss  xmm0, xmm7, dword ptr [r12+4Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, dword ptr [r12+54h]
      vaddss  xmm10, xmm2, xmm1
      vxorps  xmm3, xmm10, xmm14
      vmulss  xmm0, xmm3, xmm7
      vaddss  xmm1, xmm0, dword ptr [r12+4Ch]
      vmulss  xmm2, xmm3, xmm8
      vaddss  xmm0, xmm2, dword ptr [r12+50h]
      vmovss  dword ptr [rbp+120h+outAccel+4], xmm0
      vmovss  dword ptr [rbp+120h+outAccel], xmm1
      vmulss  xmm0, xmm7, xmm10
      vmulss  xmm1, xmm3, xmm9
      vaddss  xmm2, xmm1, dword ptr [r12+54h]
      vmovss  [rbp+120h+var_178], xmm0
      vmulss  xmm0, xmm9, xmm10
      vmulss  xmm1, xmm8, xmm10
      vmovss  [rbp+120h+var_170], xmm0
      vmovss  dword ptr [rbp+120h+outAccel+8], xmm2
      vmovss  [rbp+120h+var_174], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+61Ch]
    vmovss  xmm1, dword ptr [r14+620h]
  }
  _RSI = outBodyAccel;
  v86 = 0;
  __asm
  {
    vmovss  [rbp+120h+var_148], xmm0
    vmovss  [rbp+120h+var_144], xmm1
  }
  _RDI = 0i64;
  __asm
  {
    vmovss  [rbp+120h+var_190], xmm12
    vmovss  [rbp+120h+var_18C], xmm12
    vmovss  [rsp+220h+var_1B8], xmm12
    vmovss  [rsp+220h+var_1B4], xmm12
  }
  do
  {
    __asm { vmovss  xmm8, dword ptr [r15+24h] }
    if ( v86 >= 2 )
    {
      LODWORD(v335) = 2;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    if ( v86 >= 4 )
    {
      LODWORD(v335) = 4;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, [rbp+rdi*4+120h+var_140]
      vmulss  xmm7, xmm0, [rbp+rdi*4+120h+var_148]
    }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+rdi*4+120h+outAccel]
      vmovaps xmm1, xmm6; cur
      vmovaps xmm3, xmm8; deltaTime
      vmovaps xmm2, xmm7; rate
      vmovaps xmm0, xmm12; tgt
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovaps xmm7, xmm0 }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vdivss  xmm6, xmm0, dword ptr [r15+24h]
    }
    v99 = v86 <= 2;
    if ( v86 >= 2 )
    {
      LODWORD(v335) = 2;
      LODWORD(v327) = v86;
      v100 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
      v99 = !v100;
      if ( v100 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm11, xmm10
      vmovss  xmm7, dword ptr [r15+24h]
      vmovss  [rsp+rdi*4+220h+var_1B8], xmm6
    }
    if ( v99 )
    {
      if ( v86 >= 2 )
      {
        LODWORD(v335) = 2;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      if ( v86 >= 4 )
      {
        LODWORD(v335) = 4;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rbp+rdi*4+120h+var_140]
        vmulss  xmm6, xmm0, [rbp+rdi*4+120h+var_148]
      }
      if ( v86 >= 3 )
      {
        LODWORD(v335) = 3;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
        LODWORD(v338) = 3;
        LODWORD(v330) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v330, v338) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, [rbp+rdi*4+120h+var_178]; cur
        vmovss  xmm0, [rbp+rdi*4+120h+var_158]; tgt
        vmovaps xmm3, xmm7; deltaTime
        vmovaps xmm2, xmm6; rate
      }
      *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vmovaps xmm6, xmm0 }
      if ( v86 >= 3 )
      {
        LODWORD(v335) = 3;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm0, xmm6, [rbp+rdi*4+120h+var_178]
        vdivss  xmm6, xmm0, dword ptr [r15+24h]
      }
      if ( v86 >= 2 )
      {
        LODWORD(v335) = 2;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, [rsp+rdi*4+220h+var_1B8]
        vmovss  [rsp+rdi*4+220h+var_1B8], xmm0
      }
    }
    else
    {
      if ( v86 >= 4 )
      {
        LODWORD(v335) = 4;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      if ( v86 >= 3 )
      {
        LODWORD(v335) = 3;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
        LODWORD(v337) = 3;
        LODWORD(v329) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v329, v337) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm2, [rbp+rdi*4+120h+var_140]; rate
        vmovss  xmm1, [rbp+rdi*4+120h+var_178]; cur
        vmovss  xmm0, [rbp+rdi*4+120h+var_158]; tgt
        vmovaps xmm3, xmm7; deltaTime
      }
      *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vmovaps xmm6, xmm0 }
      if ( v86 >= 3 )
      {
        LODWORD(v335) = 3;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm0, xmm6, [rbp+rdi*4+120h+var_178]
        vdivss  xmm6, xmm0, dword ptr [r15+24h]
      }
      if ( v86 >= 2 )
      {
        LODWORD(v335) = 2;
        LODWORD(v327) = v86;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, [rbp+rdi*4+120h+var_190]
        vmovss  [rbp+rdi*4+120h+var_190], xmm0
      }
    }
    if ( v86 >= 2 )
    {
      LODWORD(v335) = 2;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
      LODWORD(v339) = 2;
      LODWORD(v331) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v331, v339) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, [rbp+rdi*4+120h+var_190]
      vaddss  xmm6, xmm0, [rsp+rdi*4+220h+var_1B8]
    }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rsi+rdi*4], xmm6 }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, [rsp+rdi*4+220h+var_1B0]
      vmovaps xmm7, xmm6
    }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
      {
        __debugbreak();
        __asm { vmovaps xmm7, xmm6 }
      }
    }
    __asm { vxorps  xmm7, xmm7, xmm14 }
    v125 = v86 <= 3;
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      v126 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
      v125 = !v126;
      if ( v126 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm7, xmm6
      vmovss  xmm8, dword ptr [rsi+rdi*4]
    }
    if ( !v125 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+220h+var_1F0], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+220h+var_1F8], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v332, v340) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm7, xmm8
      vminss  xmm6, xmm0, xmm6
    }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rsi+rdi*4], xmm6 }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, [rsp+rdi*4+220h+var_1B0]
      vmovaps xmm7, xmm6
    }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
      {
        __debugbreak();
        __asm { vmovaps xmm7, xmm6 }
      }
    }
    __asm { vxorps  xmm7, xmm7, xmm14 }
    v135 = v86 <= 2;
    if ( v86 >= 2 )
    {
      LODWORD(v335) = 2;
      LODWORD(v327) = v86;
      v136 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
      v135 = !v136;
      if ( v136 )
        __debugbreak();
    }
    __asm { vcomiss xmm7, xmm6 }
    if ( !v135 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+220h+var_1F0], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+220h+var_1F8], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v333, v341) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm7, [rsp+rdi*4+220h+var_1B8]
      vminss  xmm6, xmm0, xmm6
    }
    if ( v86 >= 2 )
    {
      LODWORD(v335) = 2;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm { vmovss  [rsp+rdi*4+220h+var_1B8], xmm6 }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, [rsp+rdi*4+220h+var_1B0]
      vmovaps xmm7, xmm6
    }
    if ( v86 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
      {
        __debugbreak();
        __asm { vmovaps xmm7, xmm6 }
      }
    }
    __asm { vxorps  xmm7, xmm7, xmm14 }
    v144 = v86 <= 2;
    if ( v86 >= 2 )
    {
      LODWORD(v335) = 2;
      LODWORD(v327) = v86;
      v145 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
      v144 = !v145;
      if ( v145 )
        __debugbreak();
    }
    __asm { vcomiss xmm7, xmm6 }
    if ( !v144 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+220h+var_1F0], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+220h+var_1F8], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v334, v342) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm7, [rbp+rdi*4+120h+var_190]
      vminss  xmm6, xmm0, xmm6
    }
    if ( v86 >= 2 )
    {
      LODWORD(v335) = 2;
      LODWORD(v327) = v86;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
        __debugbreak();
    }
    __asm { vmovss  [rbp+rdi*4+120h+var_190], xmm6 }
    ++_RDI;
    ++v86;
  }
  while ( (int)v86 < 2 );
  _R12 = vehicleState;
  __asm
  {
    vmovss  xmm1, dword ptr [r12+54h]; cur
    vcomiss xmm1, xmm13
  }
  if ( v86 <= 2 )
  {
    __asm { vmovss  xmm2, [rbp+120h+var_138]; rate }
  }
  else
  {
    __asm
    {
      vcomiss xmm1, xmm12
      vmovss  xmm0, [rbp+120h+var_138]
      vmulss  xmm2, xmm0, dword ptr [r14+624h]
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [r15+24h]; deltaTime
    vmovaps xmm0, xmm13; tgt
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vsubss  xmm1, xmm0, dword ptr [r12+54h]
    vdivss  xmm0, xmm1, dword ptr [r15+24h]; val
    vxorps  xmm1, xmm15, xmm14; min
    vmovaps xmm2, xmm15; max
    vmovss  dword ptr [rsi+8], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+8], xmm0
    vcomiss xmm12, dword ptr [r14+628h]
  }
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 269, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxYawRate > 0.0f)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxYawRate > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14+62Ch]
    vdivss  xmm7, xmm0, dword ptr [r14+628h]
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm6, dword ptr [r12+44h]
    vmovss  xmm3, dword ptr [r15+24h]; deltaTime
    vmovaps xmm2, xmm7; rate
    vmovss  xmm0, dword ptr [rax+1DCh]; tgt
    vmovaps xmm1, xmm6; cur
  }
  *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm11, cs:__real@3f000000
    vsubss  xmm0, xmm0, xmm6
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vxorps  xmm0, xmm0, xmm0
    vaddss  xmm1, xmm4, xmm11
    vmovss  xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm2, 1
    vmovss  xmm2, dword ptr [r14+628h]; max
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vdivss  xmm0, xmm1, dword ptr [r15+24h]; val
    vxorps  xmm1, xmm2, xmm14; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm1, dword ptr [r12+2Ch]; cur
    vandps  xmm3, xmm1, xmm8
    vandps  xmm4, xmm0, xmm8
    vcomiss xmm4, xmm3
  }
  if ( !v30 && !v224 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r15+24h]; deltaTime
      vmovaps xmm2, xmm7; rate
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  xmm1, dword ptr [r12+2Ch] }
  }
  _R13 = outRotAccel;
  __asm
  {
    vsubss  xmm0, xmm0, xmm1
    vdivss  xmm0, xmm0, dword ptr [r15+24h]; val
    vmovss  dword ptr [r13+4], xmm0
    vmovss  xmm2, dword ptr [r14+62Ch]; max
    vxorps  xmm1, xmm2, xmm14; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm7, cs:__real@418ccccd }
  v194 = 0;
  __asm { vmovss  dword ptr [r13+4], xmm0 }
  _RDI = 0i64;
  do
  {
    v196 = v194 < 3;
    if ( v194 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v194;
      v197 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
      v196 = 0;
      if ( v197 )
        __debugbreak();
    }
    __asm { vcomiss xmm12, [rbp+rdi+120h+var_168] }
    if ( !v196 )
    {
      __asm { vcomiss xmm12, dword ptr [r14+60Ch] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 286, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxSpeed > 0.0f)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxSpeed > 0.0f") )
        __debugbreak();
      __asm { vmulss  xmm6, xmm7, dword ptr [r14+60Ch] }
      if ( v194 >= 3 )
      {
        LODWORD(v335) = 3;
        LODWORD(v327) = v194;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      __asm { vmovss  [rbp+rdi+120h+var_168], xmm6 }
    }
    v199 = v194 < 3;
    if ( v194 >= 3 )
    {
      LODWORD(v335) = 3;
      LODWORD(v327) = v194;
      v200 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
      v199 = 0;
      if ( v200 )
        __debugbreak();
    }
    __asm { vcomiss xmm12, [rsp+rdi+220h+var_1B0] }
    if ( !v199 )
    {
      __asm { vcomiss xmm12, dword ptr [r14+614h] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 291, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxAccel > 0.0f)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxAccel > 0.0f") )
        __debugbreak();
      __asm { vmulss  xmm6, xmm7, dword ptr [r14+614h] }
      if ( v194 >= 3 )
      {
        LODWORD(v335) = 3;
        LODWORD(v327) = v194;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      __asm { vmovss  [rsp+rdi+220h+var_1B0], xmm6 }
    }
    ++v194;
    _RDI += 4i64;
  }
  while ( (int)v194 < 2 );
  _R12 = vehicleState;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+14h]
    vmovss  dword ptr [rbp+120h+angles+4], xmm0
    vmovss  dword ptr [rbp+120h+angles], xmm12
    vmovss  dword ptr [rbp+120h+angles+8], xmm12
  }
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vdivss  xmm5, xmm13, [rsp+220h+var_1B0]
    vmovss  xmm6, [rbp+120h+var_168]
    vmovss  xmm10, cs:__real@bf800000
    vmovss  [rbp+120h+var_EC], xmm12
    vmovss  [rbp+120h+var_E8], xmm12
    vmovss  [rbp+120h+var_E4], xmm12
    vdivss  xmm1, xmm13, xmm6
    vmulss  xmm0, xmm1, [rbp+120h+var_158]
    vmulss  xmm2, xmm0, dword ptr [r14+634h]
    vmulss  xmm1, xmm1, dword ptr [r12+4Ch]
    vmulss  xmm0, xmm1, dword ptr [r14+630h]
    vmulss  xmm1, xmm5, [rbp+120h+var_190]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm1, dword ptr [r14+638h]
    vmulss  xmm1, xmm5, [rsp+220h+var_1B8]
    vaddss  xmm4, xmm3, xmm0
    vmovss  dword ptr [rbp+120h+out], xmm4
    vmulss  xmm2, xmm1, dword ptr [r14+63Ch]
    vaddss  xmm0, xmm2, xmm4; val
    vmovaps xmm2, xmm13; max
    vmovaps xmm1, xmm10; min
    vmovss  dword ptr [rbp+120h+out], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm12, dword ptr [r12+4Ch]
    vdivss  xmm1, xmm13, [rbp+120h+var_164]
    vdivss  xmm5, xmm13, [rsp+220h+var_1AC]
  }
  _R15 = pml;
  _R13 = outRotAccel;
  __asm
  {
    vmovss  dword ptr [rbp+120h+out], xmm0
    vmulss  xmm0, xmm1, dword ptr [r12+50h]
    vmulss  xmm3, xmm0, dword ptr [r14+630h]
    vmulss  xmm1, xmm1, [rbp+120h+var_154]
    vmulss  xmm2, xmm1, dword ptr [r14+634h]
    vmulss  xmm1, xmm5, [rbp+120h+var_18C]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm1, dword ptr [r14+638h]
    vmulss  xmm1, xmm5, [rsp+220h+var_1B4]
    vaddss  xmm3, xmm4, xmm2
    vmovss  dword ptr [rbp+120h+out+4], xmm3
    vmulss  xmm2, xmm1, dword ptr [r14+63Ch]
    vaddss  xmm3, xmm2, xmm3
    vmovss  dword ptr [rbp+120h+out+4], xmm3
  }
  if ( v223 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12+2Ch]
      vandps  xmm0, xmm0, xmm8
      vcomiss xmm0, xmm12
    }
    if ( !(v223 | v224) )
    {
      __asm { vcomiss xmm6, xmm12 }
      if ( v223 | v224 )
      {
        v243 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 319, ASSERT_TYPE_ASSERT, "(maxSpeed[0] > 0)", (const char *)&queryFormat, "maxSpeed[0] > 0");
        v223 = 0;
        v224 = !v243;
        if ( v243 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r12+4Ch]
        vdivss  xmm6, xmm0, xmm6
        vmovss  xmm0, dword ptr [r14+640h]
        vcomiss xmm6, xmm0
      }
      if ( v223 )
      {
        __asm { vcomiss xmm0, xmm12 }
        if ( v223 | v224 )
        {
          v247 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 323, ASSERT_TYPE_SANITY, "( vehDef->vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt > 0 )", (const char *)&queryFormat, "vehDef->vehHelicopterTiltFromFwdAndYaw_VelAtMaxTilt > 0");
          v223 = 0;
          if ( v247 )
            __debugbreak();
        }
        __asm { vdivss  xmm6, xmm6, dword ptr [r14+640h] }
      }
      else
      {
        __asm { vmovaps xmm6, xmm13 }
      }
      __asm { vcomiss xmm12, dword ptr [r14+628h] }
      if ( !v223 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 329, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxYawRate > 0.0f)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxYawRate > 0.0f") )
        __debugbreak();
      __asm
      {
        vmulss  xmm2, xmm6, dword ptr [r14+644h]
        vmovss  xmm0, dword ptr [r12+2Ch]
        vdivss  xmm1, xmm0, dword ptr [r14+628h]
        vmulss  xmm3, xmm2, xmm1
        vmovss  xmm2, dword ptr [rbp+120h+out+4]
        vsubss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbp+120h+out+4], xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+120h+out+4]; val
    vmovaps xmm2, xmm13; max
    vmovaps xmm1, xmm10; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+120h+out]
    vmulss  xmm1, xmm5, dword ptr [rbp+120h+forward]
    vmulss  xmm3, xmm0, dword ptr [rbp+120h+right]
    vmulss  xmm4, xmm0, dword ptr [rbp+120h+right+4]
    vaddss  xmm3, xmm3, xmm1
    vmulss  xmm1, xmm5, dword ptr [rbp+120h+forward+4]
    vsubss  xmm6, xmm3, dword ptr [r12+58h]
    vaddss  xmm2, xmm4, xmm1
    vsubss  xmm9, xmm2, dword ptr [r12+5Ch]
    vmovss  dword ptr [rbp+120h+out+4], xmm0
    vmovss  dword ptr [rbp+120h+out+8], xmm12
    vucomiss xmm12, dword ptr [r14+648h]
  }
  if ( v224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 341, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterTiltMomentum)", (const char *)&queryFormat, "vehDef->vehHelicopterTiltMomentum") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [r15+24h]
    vdivss  xmm0, xmm13, dword ptr [r14+648h]
    vmulss  xmm5, xmm0, dword ptr [r14+64Ch]
    vxorps  xmm4, xmm0, xmm14
  }
  _RDI = &vehicleState->tiltVelocity;
  __asm
  {
    vmovss  xmm7, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rdi+4]
    vmulss  xmm1, xmm5, xmm6
    vmulss  xmm0, xmm4, xmm7
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, xmm3
    vaddss  xmm6, xmm2, xmm7
    vmovss  dword ptr [rdi], xmm6
    vmulss  xmm1, xmm9, xmm5
    vmulss  xmm0, xmm4, xmm8
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, xmm3
    vaddss  xmm5, xmm2, dword ptr [r12+64h]
    vmovss  dword ptr [rdi+4], xmm5
    vmovss  xmm4, dword ptr [r15+24h]
    vaddss  xmm0, xmm6, xmm7
    vmulss  xmm1, xmm0, xmm11
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm3, xmm2, dword ptr [r12+58h]
    vaddss  xmm0, xmm5, xmm8
    vmulss  xmm1, xmm0, xmm11
    vmulss  xmm2, xmm1, xmm4
    vmovss  dword ptr [r12+58h], xmm3
    vaddss  xmm3, xmm2, dword ptr [r12+5Ch]
  }
  v293 = 0;
  __asm { vmovss  dword ptr [r12+5Ch], xmm3 }
  v294 = 1;
  do
  {
    if ( !v294 )
    {
      LODWORD(v335) = 2;
      LODWORD(v327) = v293;
      v295 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
      v294 = 0;
      if ( v295 )
        __debugbreak();
    }
    __asm { vcomiss xmm13, dword ptr [rdi-8] }
    if ( v294 )
    {
      if ( v293 >= 2 )
      {
        LODWORD(v335) = 2;
        LODWORD(v327) = v293;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
          __debugbreak();
      }
      _RDI[-1].v[0] = 1.0;
      v296 = v293 < 2;
      if ( v293 >= 2 )
      {
        LODWORD(v335) = 2;
        LODWORD(v327) = v293;
        v297 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
        v296 = 0;
        if ( v297 )
          __debugbreak();
      }
      __asm { vcomiss xmm12, dword ptr [rdi] }
      if ( v296 )
        goto LABEL_207;
    }
    else
    {
      v298 = v293 <= 2;
      if ( v293 >= 2 )
      {
        LODWORD(v335) = 2;
        LODWORD(v327) = v293;
        v299 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
        v298 = !v299;
        if ( v299 )
          __debugbreak();
      }
      __asm { vcomiss xmm10, dword ptr [rdi-8] }
      if ( !v298 )
      {
        if ( v293 >= 2 )
        {
          LODWORD(v335) = 2;
          LODWORD(v327) = v293;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
            __debugbreak();
        }
        _RDI[-1].v[0] = -1.0;
        v300 = v293 <= 2;
        if ( v293 >= 2 )
        {
          LODWORD(v335) = 2;
          LODWORD(v327) = v293;
          v301 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335);
          v300 = !v301;
          if ( v301 )
            __debugbreak();
        }
        __asm { vcomiss xmm12, dword ptr [rdi] }
        if ( !v300 )
        {
LABEL_207:
          if ( v293 >= 2 )
          {
            LODWORD(v335) = 2;
            LODWORD(v327) = v293;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v327, v335) )
              __debugbreak();
          }
          _RDI->v[0] = 0.0;
        }
      }
    }
    ++v293;
    _RDI = (vec2_t *)((char *)_RDI + 4);
    v294 = v293 < 2;
  }
  while ( (int)v293 < 2 );
  __asm
  {
    vmovss  xmm0, dword ptr [r12+58h]
    vmovss  xmm1, dword ptr [r12+5Ch]
    vmovss  dword ptr [rbp+120h+in1], xmm0
    vmovss  dword ptr [rbp+120h+in1+4], xmm1
    vmovss  dword ptr [rbp+120h+in1+8], xmm12
  }
  MatrixTransposeTransformVector43(&in1, &forward, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+120h+out]
    vmulss  xmm1, xmm0, dword ptr [r14+650h]
    vaddss  xmm2, xmm1, dword ptr [r14+604h]
    vmovss  xmm0, dword ptr [rbp+120h+out+4]
  }
  _RSI = outBodyAccel;
  __asm
  {
    vmovss  dword ptr [r13+0], xmm2
    vmulss  xmm1, xmm0, dword ptr [r14+654h]
    vmovss  dword ptr [r13+8], xmm1
    vmovss  xmm2, dword ptr [rsi]
    vmovss  [rsp+220h+var_1B8], xmm2
  }
  if ( (v346[0] & 0x7F800000) == 2139095040 )
    goto LABEL_225;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+220h+var_1B8], xmm0
  }
  if ( (v346[0] & 0x7F800000) == 2139095040 )
    goto LABEL_225;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+220h+var_1B8], xmm0
  }
  if ( (v346[0] & 0x7F800000) == 2139095040 )
  {
LABEL_225:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 373, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outBodyAccel )[0] ) && !IS_NAN( ( outBodyAccel )[1] ) && !IS_NAN( ( outBodyAccel )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  [rsp+220h+var_1B8], xmm0
  }
  if ( (v346[0] & 0x7F800000) == 2139095040 )
    goto LABEL_226;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+4]
    vmovss  [rsp+220h+var_1B8], xmm0
  }
  if ( (v346[0] & 0x7F800000) == 2139095040 )
    goto LABEL_226;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  [rsp+220h+var_1B8], xmm0
  }
  if ( (v346[0] & 0x7F800000) == 2139095040 )
  {
LABEL_226:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 374, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRotAccel )[0] ) && !IS_NAN( ( outRotAccel )[1] ) && !IS_NAN( ( outRotAccel )[2] )") )
      __debugbreak();
  }
  _R11 = &v360;
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
BG_HeliCalcTargetMoveRequest
==============
*/
__int64 BG_HeliCalcTargetMoveRequest(const pmove_t *pm, const pml_t *pml, const VehicleState *vehicleState, const int targetEntity, vec4_t *outMoveRequest)
{
  __int64 v17; 
  CgStatic *v18; 
  char v26; 
  char v44; 
  bool v45; 
  bool v53; 
  __int64 result; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec3_t right; 
  char v105; 

  _R14 = outMoveRequest;
  _RDI = vehicleState;
  _R15 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 456, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 457, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 458, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+128h+var_48], xmm6
    vmovaps [rsp+128h+var_58], xmm7
    vmovaps [rsp+128h+var_68], xmm8
    vmovaps [rsp+128h+var_78], xmm9
    vmovaps [rsp+128h+var_88], xmm10
    vmovaps [rsp+128h+var_98], xmm11
  }
  if ( targetEntity == 2047 )
    goto LABEL_46;
  _RBP = BG_GetVehicleDef(pm);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 464, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  v17 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v18 = *(CgStatic **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v17) + 272i64);
  if ( v18->IsClient(v18) )
    CgStatic::GetOrigin(v18, targetEntity, &outOrigin);
  else
    ((void (__fastcall *)(CgStatic *, _QWORD, vec3_t *))v18->GetClientInfo)(v18, (unsigned int)targetEntity, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+outOrigin]
    vsubss  xmm7, xmm0, dword ptr [rdi+4]
  }
  _RBX = DCONST_DVARFLT_bg_vehicle_target_min_speed;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+outOrigin+8]
    vmovss  xmm1, dword ptr [rsp+128h+outOrigin+4]
    vsubss  xmm8, xmm0, dword ptr [rdi+0Ch]
    vsubss  xmm9, xmm1, dword ptr [rdi+8]
  }
  if ( !DCONST_DVARFLT_bg_vehicle_target_min_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_target_min_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm5, dword ptr [rdi+20h]
    vmovss  xmm10, dword ptr [rdi+1Ch]
    vmovss  xmm11, dword ptr [rdi+24h]
    vmovss  xmm4, dword ptr [rbx+28h]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vcomiss xmm3, xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  if ( !(v26 | v45) )
  {
    __asm
    {
      vmulss  xmm1, xmm10, xmm7
      vmulss  xmm0, xmm9, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, xmm8
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm6
    }
    if ( v26 )
      goto LABEL_46;
  }
  _RBX = DCONST_DVARFLT_bg_vehicle_target_radius;
  if ( !DCONST_DVARFLT_bg_vehicle_target_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_target_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+28h]
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm10, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm10
    vmulss  xmm0, xmm3, xmm3
    vcomiss xmm2, xmm0
  }
  if ( v44 )
  {
LABEL_46:
    result = 0i64;
    goto LABEL_47;
  }
  __asm { vucomiss xmm6, dword ptr [rbp+614h] }
  if ( v45 )
  {
    v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 482, ASSERT_TYPE_ASSERT, "(vehDef->vehHelicopterMaxAccel)", (const char *)&queryFormat, "vehDef->vehHelicopterMaxAccel");
    v44 = 0;
    v45 = !v53;
    if ( v53 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm4, dword ptr [r15+24h]
    vmovss  xmm2, dword ptr [rdi+24h]
    vsqrtss xmm1, xmm10, xmm10
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
    vdivss  xmm1, xmm11, xmm0
    vmovss  xmm0, dword ptr [rbp+660h]
    vmulss  xmm10, xmm7, xmm1
    vmovss  xmm7, dword ptr [rbp+618h]
    vcomiss xmm7, xmm6
    vmulss  xmm9, xmm9, xmm1
  }
  if ( v44 | v45 )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
    goto LABEL_42;
  }
  __asm
  {
    vucomiss xmm8, xmm6
    vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm3, xmm7, xmm1
  }
  if ( v45 )
  {
    __asm { vcomiss xmm4, xmm6 }
    if ( v44 | v45 )
    {
      __asm
      {
        vcmpless xmm0, xmm6, xmm2
        vblendvps xmm0, xmm3, xmm7, xmm0
        vxorps  xmm7, xmm0, xmm1
      }
      goto LABEL_42;
    }
    __asm
    {
      vdivss  xmm0, xmm2, xmm4
      vxorps  xmm0, xmm0, xmm1
    }
    goto LABEL_40;
  }
  __asm { vcomiss xmm0, xmm6 }
  if ( !(v44 | v45) )
  {
    __asm
    {
      vdivss  xmm0, xmm8, xmm0
      vsubss  xmm0, xmm0, xmm2; val
    }
LABEL_40:
    __asm
    {
      vmovaps xmm2, xmm7; max
      vmovaps xmm1, xmm3; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vdivss  xmm7, xmm0, xmm7 }
    goto LABEL_42;
  }
  __asm
  {
    vcmpless xmm1, xmm6, xmm8
    vblendvps xmm7, xmm3, xmm7, xmm1
  }
LABEL_42:
  __asm { vmovss  xmm0, dword ptr [rdi+44h]; yaw }
  YawVectors(*(float *)&_XMM0, &forward, &right);
  __asm
  {
    vmovss  [rsp+128h+var_C0], xmm6
    vmovss  [rsp+128h+var_BC], xmm6
    vmovss  [rsp+128h+var_B8], xmm11
  }
  if ( &v105 == (char *)outMoveRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm9, dword ptr [rsp+128h+forward+4]
    vmulss  xmm0, xmm10, dword ptr [rsp+128h+forward]
    vmulss  xmm3, xmm9, dword ptr [rsp+128h+right+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rsp+128h+forward+8]
    vmulss  xmm0, xmm10, dword ptr [rsp+128h+right]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+128h+right+8]
    vmovss  dword ptr [r14], xmm2
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm3, xmm9, [rsp+128h+var_BC]
    vmulss  xmm0, xmm10, [rsp+128h+var_C0]
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm7, [rsp+128h+var_B8]
    vmovss  dword ptr [r14+4], xmm2
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [r14+8], xmm2
  }
  outMoveRequest->v[3] = 0.0;
  result = 1i64;
LABEL_47:
  __asm
  {
    vmovaps xmm11, [rsp+128h+var_98]
    vmovaps xmm10, [rsp+128h+var_88]
    vmovaps xmm9, [rsp+128h+var_78]
    vmovaps xmm8, [rsp+128h+var_68]
    vmovaps xmm7, [rsp+128h+var_58]
    vmovaps xmm6, [rsp+128h+var_48]
  }
  return result;
}

/*
==============
BG_HeliCmdScale
==============
*/
void BG_HeliCmdScale(bool scaleMovement, const char (*move)[4], vec4_t *outFracs, bool allowDeadzone)
{
  const char (*v15)[4]; 
  int v16; 
  int v23; 
  int v24; 
  bool v38; 
  bool v39; 
  bool v40; 
  __int64 v55; 
  __int64 v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
  _RBX = outFracs;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( !move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 34, ASSERT_TYPE_ASSERT, "(move)", (const char *)&queryFormat, "move") )
    __debugbreak();
  __asm { vmovss  xmm7, cs:__real@3c010204 }
  v15 = move;
  v16 = 0;
  _RBP = _RBX;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, xmm7
    }
    if ( (unsigned int)v16 >= 4 )
    {
      LODWORD(v56) = 4;
      LODWORD(v55) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v55, v56) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rbp+0], xmm6 }
    _RBP = (vec4_t *)((char *)_RBP + 4);
    ++v16;
    v15 = (const char (*)[4])((char *)v15 + 1);
  }
  while ( v16 < 4 );
  __asm { vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( *(_WORD *)move )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
    }
    v23 = abs8((*move)[0]);
    v24 = abs8((*move)[1]);
    __asm { vsqrtss xmm1, xmm0, xmm0 }
    if ( v24 > v23 )
      v23 = v24;
    if ( v23 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm2, xmm0, xmm1
        vmulss  xmm1, xmm2, dword ptr [rbx]
        vmulss  xmm0, xmm2, dword ptr [rbx+4]
        vmovss  dword ptr [rbx], xmm1
        vmovss  dword ptr [rbx+4], xmm0
      }
    }
    if ( allowDeadzone )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vandps  xmm0, xmm0, xmm8
        vcomiss xmm0, cs:__real@3e99999a
      }
    }
    if ( scaleMovement )
    {
      __asm
      {
        vmovss  xmm7, dword ptr [rbx]
        vmovss  xmm6, dword ptr [rbx+4]
        vmovaps [rsp+0A8h+var_68], xmm9
        vmovss  xmm9, cs:__real@3f800000
        vandps  xmm7, xmm7, xmm8
        vcomiss xmm7, xmm9
        vandps  xmm6, xmm6, xmm8
      }
      v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 66, ASSERT_TYPE_ASSERT, "(absAxis[0] <= 1.0f)", (const char *)&queryFormat, "absAxis[0] <= 1.0f");
      v39 = !v38;
      if ( v38 )
        __debugbreak();
      __asm { vcomiss xmm6, xmm9 }
      if ( v38 )
      {
        v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 67, ASSERT_TYPE_ASSERT, "(absAxis[1] <= 1.0f)", (const char *)&queryFormat, "absAxis[1] <= 1.0f");
        v39 = !v40;
        if ( v40 )
          __debugbreak();
      }
      __asm { vcomiss xmm7, xmm6 }
      if ( v39 )
      {
        __asm
        {
          vsubss  xmm0, xmm6, xmm7
          vsubss  xmm0, xmm9, xmm0
          vmulss  xmm1, xmm0, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm1
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vsubss  xmm0, xmm9, xmm0
          vmulss  xmm1, xmm0, dword ptr [rbx+4]
          vmovss  dword ptr [rbx+4], xmm1
        }
      }
      __asm { vmovaps xmm9, [rsp+0A8h+var_68] }
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  if ( allowDeadzone )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vandps  xmm0, xmm0, xmm8
      vcomiss xmm0, cs:__real@3e99999a
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vandps  xmm0, xmm0, xmm8
      vcomiss xmm0, cs:__real@3e99999a
    }
  }
  __asm { vmovaps xmm8, [rsp+0A8h+var_58] }
}

/*
==============
BG_HelicopterAirMove
==============
*/
void BG_HelicopterAirMove(pmove_t *pm, const pml_t *pml, VehicleState *vehicleState, vec3_t *inOutAccel)
{
  int VehicleTargetEntity; 
  bool v16; 
  bool v17; 
  int clipmask; 
  bool v20; 
  char v25; 
  const dvar_t *v26; 
  int entity; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float inOutAccela; 
  int inOutAccelb; 
  float altitudeMinNormal; 
  float altitudeMinNormala; 
  vec3_t end; 
  vec3_t start; 
  GroundTrace groundTrace; 
  VehicleCollisionInfo outCollisionInfo; 
  trace_t results; 

  __asm { vmovaps [rsp+200h+var_70], xmm8 }
  _RBX = vehicleState;
  _RSI = pml;
  VehicleTargetEntity = BG_GetVehicleTargetEntity(pm);
  _RDI = BG_GetVehicleDef(pm);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 670, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 672, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v16 = _RSI == NULL;
  if ( !_RSI )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 673, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm8, dword ptr [rsi+24h]
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 674, ASSERT_TYPE_ASSERT, "(pml->frametime)", (const char *)&queryFormat, "pml->frametime") )
    __debugbreak();
  clipmask = _RBX->clipmask;
  if ( _RDI->vehHelicopterLockAltitude )
  {
    v20 = VehicleTargetEntity == 2047;
    if ( VehicleTargetEntity == 2047 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmovaps [rsp+200h+var_60], xmm7
        vaddss  xmm7, xmm0, dword ptr [rdi+600h]
      }
      _RBX->clipmask = 512;
      __asm { vmovss  dword ptr [rbx+0Ch], xmm7 }
      if ( _RDI->vehHelicopterOffsetFromMesh )
      {
        _R15 = DCONST_DVARFLT_bg_helicopter_altitude_min_normal;
        __asm
        {
          vmovaps [rsp+200h+var_50], xmm6
          vmovaps [rsp+200h+var_80], xmm9
          vmovaps [rsp+200h+var_90], xmm10
          vmovaps [rsp+200h+var_A0], xmm11
          vmovss  xmm11, dword ptr [rbx+24h]
        }
        if ( !DCONST_DVARFLT_bg_helicopter_altitude_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_min_normal") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R15);
        __asm { vcomiss xmm8, dword ptr [r15+28h] }
        if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 540, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_helicopter_altitude_min_normal, \"bg_helicopter_altitude_min_normal\" ) > 0.0f)", (const char *)&queryFormat, "Dconst_GetFloat( bg_helicopter_altitude_min_normal ) > 0.0f") )
          __debugbreak();
        v26 = DCONST_DVARFLT_bg_helicopter_altitude_min_normal;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+60Ch]
          vmulss  xmm6, xmm0, dword ptr [rdi+660h]
        }
        if ( !DCONST_DVARFLT_bg_helicopter_altitude_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_min_normal") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        __asm
        {
          vmovss  xmm9, cs:__real@3f800000
          vsubss  xmm0, xmm9, dword ptr [r15+28h]
          vdivss  xmm1, xmm0, dword ptr [r15+28h]
        }
        _R15 = DCONST_DVARFLT_bg_helicopter_altitude_min_normal;
        __asm { vmulss  xmm10, xmm1, xmm6 }
        if ( !DCONST_DVARFLT_bg_helicopter_altitude_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_min_normal") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R15);
        __asm
        {
          vmovss  xmm3, dword ptr [rsi+24h]; dt
          vmovss  xmm6, dword ptr [r15+28h]
        }
        BG_HelicopterAltitudeTrace(pm, _RBX, &groundTrace, *(const float *)&_XMM3);
        if ( groundTrace.validGroundNormal )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_helicopter_altitude_min_normal, "bg_helicopter_altitude_min_normal");
          __asm { vcomiss xmm0, dword ptr [rsp+200h+groundTrace.trace.normal+8] }
          if ( !(v25 | v16) )
          {
            __asm
            {
              vmovss  xmm3, dword ptr [rbx+8]
              vmovss  xmm2, dword ptr [rbx+4]
              vcvtss2sd xmm3, xmm3, xmm3
              vcvtss2sd xmm2, xmm2, xmm2
              vmovq   r9, xmm3
              vmovq   r8, xmm2
            }
            Com_PrintError(16, "The normal of the altitude mesh near %f,%f exceeds the maximum allowable slope\n", _R8, _R9);
          }
        }
        __asm
        {
          vmovss  [rsp+200h+altitudeMinNormal], xmm6
          vmovss  dword ptr [rsp+200h+fmt], xmm10
        }
        BG_HelicopterSoftenCollision(pm, _RSI, _RDI, _RBX, fmt, inOutAccel, altitudeMinNormal);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+24h]
          vmulss  xmm0, xmm2, dword ptr [r12]
          vaddss  xmm1, xmm0, dword ptr [rbx+1Ch]
          vmovss  dword ptr [rbx+1Ch], xmm1
          vmulss  xmm0, xmm2, dword ptr [r12+4]
          vaddss  xmm1, xmm0, dword ptr [rbx+20h]
          vmovss  dword ptr [rbx+20h], xmm1
        }
        _R15 = DCONST_DVARFLT_bg_helicopter_stepsize;
        __asm { vmovss  xmm6, dword ptr [rsi+24h] }
        if ( !DCONST_DVARFLT_bg_helicopter_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_stepsize") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_R15);
        __asm
        {
          vmovss  xmm0, dword ptr [r15+28h]
          vmovss  dword ptr [rsp+200h+inOutAccel], xmm6
          vmovss  dword ptr [rsp+200h+fmt], xmm0
        }
        BG_VehicleStepSlideMove(pm, _RBX, &groundTrace, groundTrace.onGround == 0, fmta, inOutAccela, 0);
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+660h]
          vcomiss xmm1, xmm8
          vmovss  xmm6, dword ptr [rsi+24h]
        }
        if ( v25 | v16 )
        {
          __asm { vmovss  xmm0, dword ptr [rbx+0Ch] }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm1, dword ptr [rbx+1Ch]
            vaddss  xmm2, xmm0, dword ptr [rbx+4]
            vmulss  xmm0, xmm1, dword ptr [rbx+20h]
            vaddss  xmm1, xmm0, dword ptr [rbx+8]
          }
          inOutAccelb = _RBX->clipmask;
          entity = _RBX->entity;
          __asm
          {
            vmovss  dword ptr [rsp+200h+end+4], xmm1
            vmovss  dword ptr [rsp+200h+start+4], xmm1
            vaddss  xmm1, xmm10, xmm7
            vsubss  xmm0, xmm7, xmm10
            vmovss  dword ptr [rsp+200h+start+8], xmm1
            vmovss  dword ptr [rsp+200h+end], xmm2
            vmovss  dword ptr [rsp+200h+start], xmm2
            vmovss  dword ptr [rsp+200h+end+8], xmm0
          }
          BG_Vehicle_Trace(pm, &start, &end, &_RBX->bounds, entity, inOutAccelb, &results);
          if ( !results.allsolid && !results.startsolid )
          {
            __asm
            {
              vmovss  xmm0, [rbp+100h+results.fraction]
              vcomiss xmm0, xmm9
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+0Ch]
            vmovss  xmm6, dword ptr [rsi+24h]
          }
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+618h]; max
          vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
          vdivss  xmm5, xmm9, xmm6
          vsubss  xmm0, xmm0, xmm7
          vmulss  xmm3, xmm0, xmm5
          vsubss  xmm4, xmm3, xmm11
          vmulss  xmm0, xmm4, xmm5; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+610h]; max
          vmulss  xmm0, xmm0, dword ptr [rsi+24h]
          vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
          vaddss  xmm0, xmm0, xmm11; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovaps xmm11, [rsp+200h+var_A0]
          vmovaps xmm10, [rsp+200h+var_90]
          vmovaps xmm9, [rsp+200h+var_80]
          vmovaps xmm6, [rsp+200h+var_50]
          vmovss  dword ptr [rbx+24h], xmm0
          vmulss  xmm0, xmm0, dword ptr [rsi+24h]
          vaddss  xmm1, xmm0, xmm7
          vmaxss  xmm2, xmm1, dword ptr [rbx+0Ch]
          vmovss  dword ptr [rbx+0Ch], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  [rsp+200h+altitudeMinNormal], xmm0
        }
        *(_QWORD *)_RBX->groundNormal.v = 0i64;
        _RBX->groundNormal.v[2] = 1.0;
        groundTrace.hasGround = 1;
        __asm { vmovss  dword ptr [rsp+200h+fmt], xmm8 }
        BG_HelicopterSoftenCollision(pm, _RSI, _RDI, _RBX, fmtb, inOutAccel, altitudeMinNormala);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+24h]
          vmulss  xmm0, xmm2, dword ptr [r12]
          vaddss  xmm1, xmm0, dword ptr [rbx+1Ch]
          vmovss  dword ptr [rbx+1Ch], xmm1
          vmulss  xmm0, xmm2, dword ptr [r12+4]
          vaddss  xmm1, xmm0, dword ptr [rbx+20h]
          vmovss  dword ptr [rbx+20h], xmm1
          vmovss  xmm0, dword ptr [rsi+24h]
          vmovss  dword ptr [rsp+200h+fmt], xmm0
        }
        BG_VehicleSlideMove(pm, _RBX, &groundTrace, 0, fmtc, 0, &outCollisionInfo);
        __asm { vmovss  xmm2, dword ptr [rbx+0Ch] }
      }
      __asm
      {
        vsubss  xmm0, xmm2, dword ptr [rdi+600h]
        vmovaps xmm7, [rsp+200h+var_60]
        vmovss  dword ptr [rbx+0Ch], xmm0
      }
      goto LABEL_49;
    }
    goto LABEL_44;
  }
  v20 = VehicleTargetEntity == 2047;
  if ( VehicleTargetEntity != 2047 )
LABEL_44:
    _RBX->clipmask = 1;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+24h]
    vmulss  xmm0, xmm1, dword ptr [r12]
    vaddss  xmm2, xmm0, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rbx+1Ch], xmm2
    vmulss  xmm0, xmm1, dword ptr [r12+4]
    vaddss  xmm4, xmm0, dword ptr [rbx+20h]
    vmovss  dword ptr [rbx+20h], xmm4
    vmulss  xmm0, xmm1, dword ptr [r12+8]
    vaddss  xmm3, xmm0, dword ptr [rbx+24h]
    vmovss  dword ptr [rbx+24h], xmm3
    vucomiss xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  if ( !v20 )
    goto LABEL_48;
  __asm { vucomiss xmm4, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin }
  if ( !v20 )
    goto LABEL_48;
  __asm { vucomiss xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin }
  if ( !v20 )
  {
LABEL_48:
    __asm { vmovss  xmm3, dword ptr [rsi+24h]; dt }
    BG_VehicleGroundTrace(pm, _RBX, &groundTrace, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+200h+groundTrace.trace.normal]
      vmovss  xmm1, dword ptr [rsp+200h+groundTrace.trace.normal+4]
      vmovss  dword ptr [rbx+84h], xmm0
      vmovss  xmm0, dword ptr [rsp+200h+groundTrace.trace.normal+8]
      vmovss  dword ptr [rbx+8Ch], xmm0
      vmovss  dword ptr [rbx+88h], xmm1
      vmovss  xmm0, dword ptr [rsi+24h]
      vmovss  dword ptr [rsp+200h+fmt], xmm0
    }
    BG_VehicleSlideMove(pm, _RBX, &groundTrace, 0, fmtd, 0, &outCollisionInfo);
  }
LABEL_49:
  _RBX->clipmask = clipmask;
  __asm { vmovaps xmm8, [rsp+200h+var_70] }
}

/*
==============
BG_HelicopterAltitudeTrace
==============
*/
void BG_HelicopterAltitudeTrace(pmove_t *pm, VehicleState *vehicleState, GroundTrace *groundTrace, const float dt)
{
  const dvar_t *v8; 
  GroundTrace *results; 
  int entity; 
  char v20; 
  char v21; 
  int v38; 
  int contentMask; 
  vec3_t end; 
  vec3_t start; 

  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  xmm6, cs:__real@41900000
  }
  v8 = DCONST_DVARFLT_bg_helicopter_altitude_offset;
  results = groundTrace;
  _RDI = vehicleState;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+0B8h+start], xmm0
    vaddss  xmm0, xmm6, dword ptr [rdx+0Ch]
    vmovss  dword ptr [rsp+0B8h+start+8], xmm0
    vmovss  dword ptr [rsp+0B8h+start+4], xmm1
  }
  if ( !DCONST_DVARFLT_bg_helicopter_altitude_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm2, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, xmm6
    vsubss  xmm3, xmm1, dword ptr [rsi+28h]
    vmovss  xmm0, dword ptr [rdi+8]
  }
  contentMask = _RDI->clipmask;
  entity = _RDI->entity;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+end+8], xmm3
    vmovss  dword ptr [rsp+0B8h+end], xmm2
    vmovss  dword ptr [rsp+0B8h+end+4], xmm0
  }
  BG_Vehicle_Trace(pm, &start, &end, &_RDI->bounds, entity, contentMask, &results->trace);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm7, cs:__real@3f800000
    vcomiss xmm6, xmm7
    vmovss  xmm0, dword ptr [rsp+0B8h+end]
  }
  if ( v20 )
  {
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+start]
      vmovss  xmm0, dword ptr [rsp+0B8h+end+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsp+0B8h+start]
      vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+start+4]
      vmovss  xmm0, dword ptr [rsp+0B8h+end+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+start+8]
      vmovss  dword ptr [rbx+58h], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+0B8h+start+4]
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbx+5Ch], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+0B8h+start+8]
      vmovss  dword ptr [rbx+60h], xmm3
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+0B8h+end+4]
      vmovss  dword ptr [rbx+58h], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+end+8]
      vmovss  dword ptr [rbx+60h], xmm0
      vmovss  dword ptr [rbx+5Ch], xmm1
    }
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( v20 | v21 )
  {
    v38 = 0;
    _RDI->groundNormal.v[2] = 1.0;
    *(_QWORD *)_RDI->groundNormal.v = 0i64;
    *(_QWORD *)&results->onGround = 0i64;
  }
  else
  {
    _RDI->groundNormal.v[0] = results->trace.normal.v[0];
    _RDI->groundNormal.v[1] = results->trace.normal.v[1];
    _RDI->groundNormal.v[2] = results->trace.normal.v[2];
    results->hasGround = 1;
    results->onGround = 1;
    _RDI = DCONST_DVARFLT_bg_helicopter_altitude_min_normal;
    if ( !DCONST_DVARFLT_bg_helicopter_altitude_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_altitude_min_normal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vcomiss xmm0, dword ptr [rbx+18h]
    }
    v38 = 1;
  }
  results->validGroundNormal = v38;
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
}

/*
==============
BG_HelicopterHovering
==============
*/
void BG_HelicopterHovering(const pmove_t *pm, const pml_t *pml, const vec4_t *move, VehicleState *vehicleState, vec3_t *outAccel)
{
  char v5; 
  char v13; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm2, cs:__real@3a83126f
  }
  _RSI = vehicleState;
  __asm
  {
    vandps  xmm0, xmm0, xmm1
    vcomiss xmm0, xmm2
  }
  if ( !v5 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vandps  xmm0, xmm0, xmm1
    vcomiss xmm0, xmm2
  }
  if ( v5 )
    v13 = 0;
  else
LABEL_4:
    v13 = 1;
  _RDI = DCONST_DVARFLT_bg_helicopter_hover_minspeed;
  if ( !DCONST_DVARFLT_bg_helicopter_hover_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_helicopter_hover_minspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  if ( !v13 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1Ch]
      vmovss  xmm2, dword ptr [rsi+20h]
      vmovss  xmm3, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vcomiss xmm2, xmm1
    }
  }
  *(_QWORD *)outAccel->v = 0i64;
  outAccel->v[2] = 0.0;
}

/*
==============
BG_HelicopterSoftenCollision
==============
*/
void BG_HelicopterSoftenCollision(const pmove_t *pm, const pml_t *pml, const VehicleDef *vehicleDef, const VehicleState *vehicleState, const float maxVerticalOffset)
{
  int skipEntity; 
  _BYTE v26[32]; 
  int contentMask; 
  trace_t *results; 
  vec3_t end; 
  vec3_t start; 
  trace_t v31; 

  __asm
  {
    vmovaps [rsp+158h+var_38], xmm7
    vmovss  xmm5, dword ptr [r8+660h]
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm5, xmm7
  }
  if ( (unsigned __int64)v26 != _security_cookie )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r9+1Ch]
      vucomiss xmm4, dword ptr cs:?vec2_origin@@3Tvec2_t@@B; vec2_t const vec2_origin
    }
    if ( (unsigned __int64)v26 != _security_cookie )
      goto LABEL_4;
    __asm
    {
      vmovss  xmm0, dword ptr cs:?vec2_origin@@3Tvec2_t@@B+4; vec2_t const vec2_origin
      vucomiss xmm0, dword ptr [r9+20h]
    }
    if ( (unsigned __int64)v26 != _security_cookie )
    {
LABEL_4:
      __asm
      {
        vmovss  xmm1, dword ptr [r9+4]
        vmovss  xmm3, dword ptr [r9+8]
        vmovss  xmm0, [rsp+158h+maxVerticalOffset]
        vaddss  xmm2, xmm0, dword ptr [r9+0Ch]
        vmulss  xmm0, xmm4, xmm5
        vmovss  dword ptr [rsp+158h+start], xmm1
        vaddss  xmm1, xmm0, xmm1
        vmulss  xmm0, xmm5, dword ptr [r9+20h]
      }
      results = &v31;
      contentMask = vehicleState->clipmask;
      skipEntity = vehicleState->entity;
      __asm
      {
        vmovss  dword ptr [rsp+158h+end], xmm1
        vaddss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rsp+158h+end+4], xmm1
        vmovss  dword ptr [rsp+158h+start+4], xmm3
        vmovss  dword ptr [rsp+158h+start+8], xmm2
        vmovss  dword ptr [rsp+158h+end+8], xmm2
      }
      BG_Vehicle_Trace(pm, &start, &end, &vehicleState->bounds, skipEntity, contentMask, &v31);
      if ( !*(_WORD *)&v31.allsolid )
      {
        __asm
        {
          vmovaps [rsp+158h+var_28], xmm6
          vmovss  xmm6, [rsp+158h+var_F8.fraction]
          vmovaps [rsp+158h+var_48], xmm8
          vmovss  xmm8, cs:__real@3f800000
          vcomiss xmm6, xmm8
          vmovaps xmm6, [rsp+158h+var_28]
          vmovaps xmm8, [rsp+158h+var_48]
        }
      }
    }
  }
  __asm { vmovaps xmm7, [rsp+158h+var_38] }
}

/*
==============
BG_VehicleHelicopterMove
==============
*/
void BG_VehicleHelicopterMove(pmove_t *pm, const pml_t *pml)
{
  VehicleState vehicleState; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 846, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 847, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 848, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !BG_GetVehicleDef(pm) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 852, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 854, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  memset_0(&vehicleState, 0, sizeof(vehicleState));
  vehicleState.entity = _RDI->vehicleState.entity;
  vehicleState.clipmask = 41943697;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+12Ch]
    vmovss  dword ptr [rbp+57h+vehicleState.origin], xmm0
    vmovss  xmm1, dword ptr [rdi+130h]
    vmovss  dword ptr [rbp+57h+vehicleState.origin+4], xmm1
    vmovss  xmm0, dword ptr [rdi+134h]
    vmovss  dword ptr [rbp+57h+vehicleState.origin+8], xmm0
    vmovss  xmm1, dword ptr [rdi+12Ch]
    vmovss  dword ptr [rbp+57h+vehicleState.previousOrigin], xmm1
    vmovss  xmm0, dword ptr [rdi+130h]
    vmovss  dword ptr [rbp+57h+vehicleState.previousOrigin+4], xmm0
    vmovss  xmm1, dword ptr [rdi+134h]
    vmovss  dword ptr [rbp+57h+vehicleState.previousOrigin+8], xmm1
    vmovss  xmm0, dword ptr [rdi+138h]
    vmovss  dword ptr [rbp+57h+vehicleState.angles], xmm0
    vmovss  xmm1, dword ptr [rdi+13Ch]
    vmovss  dword ptr [rbp+57h+vehicleState.angles+4], xmm1
    vmovss  xmm0, dword ptr [rdi+140h]
    vmovss  dword ptr [rbp+57h+vehicleState.angles+8], xmm0
    vmovss  xmm1, dword ptr [rdi+138h]
    vmovss  dword ptr [rbp+57h+vehicleState.previousAngles], xmm1
    vmovss  xmm0, dword ptr [rdi+13Ch]
    vmovss  dword ptr [rbp+57h+vehicleState.previousAngles+4], xmm0
    vmovss  xmm1, dword ptr [rdi+140h]
    vmovss  dword ptr [rbp+57h+vehicleState.previousAngles+8], xmm1
    vmovss  xmm0, dword ptr [rdi+144h]
    vmovss  dword ptr [rbp+57h+vehicleState.velocity], xmm0
    vmovss  xmm1, dword ptr [rdi+148h]
    vmovss  dword ptr [rbp+57h+vehicleState.velocity+4], xmm1
    vmovss  xmm0, dword ptr [rdi+14Ch]
    vmovss  dword ptr [rbp+57h+vehicleState.velocity+8], xmm0
    vmovss  xmm1, dword ptr [rdi+150h]
    vmovss  dword ptr [rbp+57h+vehicleState.angVelocity], xmm1
    vmovss  xmm0, dword ptr [rdi+154h]
    vmovss  dword ptr [rbp+57h+vehicleState.angVelocity+4], xmm0
    vmovss  xmm1, dword ptr [rdi+158h]
    vmovss  dword ptr [rbp+57h+vehicleState.angVelocity+8], xmm1
    vmovss  xmm0, dword ptr [rdi+15Ch]
    vmovss  dword ptr [rbp+57h+vehicleState.tilt], xmm0
    vmovss  xmm1, dword ptr [rdi+160h]
    vmovss  dword ptr [rbp+57h+vehicleState.tilt+4], xmm1
    vmovss  xmm0, dword ptr [rdi+164h]
    vmovss  dword ptr [rbp+57h+vehicleState.tiltVelocity], xmm0
    vmovss  xmm1, dword ptr [rdi+168h]
    vmovss  dword ptr [rbp+57h+vehicleState.tiltVelocity+4], xmm1
  }
  BG_GetVehicleBounds(pm, &vehicleState.bounds);
  BG_Vehicle_DebugTestVehicleCollisionPoint(pm);
  BG_VehicleHelicopterMoveInternal(pm, pml, &vehicleState);
  BG_Vehicle_DebugTestVehicleCollisionPoint(pm);
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.origin]
    vmovss  dword ptr [rax+12Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+vehicleState.origin+4]
    vmovss  dword ptr [rax+130h], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.origin+8]
    vmovss  dword ptr [rax+134h], xmm0
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.angles]
    vmovss  dword ptr [rax+138h], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+vehicleState.angles+4]
    vmovss  dword ptr [rax+13Ch], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.angles+8]
    vmovss  dword ptr [rax+140h], xmm0
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.velocity]
    vmovss  dword ptr [rax+144h], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+vehicleState.velocity+4]
    vmovss  dword ptr [rax+148h], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.velocity+8]
    vmovss  dword ptr [rax+14Ch], xmm0
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.angVelocity]
    vmovss  dword ptr [rax+150h], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+vehicleState.angVelocity+4]
    vmovss  dword ptr [rax+154h], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.angVelocity+8]
    vmovss  dword ptr [rax+158h], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+vehicleState.tilt]
    vmovss  dword ptr [rdi+15Ch], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.tilt+4]
    vmovss  dword ptr [rdi+160h], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+vehicleState.tiltVelocity]
    vmovss  dword ptr [rdi+164h], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+vehicleState.tiltVelocity+4]
    vmovss  dword ptr [rdi+168h], xmm0
  }
  if ( pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
    _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)pm->localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+vehicleState.acceleration]
      vmovss  dword ptr [rax+0B5348h], xmm0
      vmovss  xmm1, dword ptr [rbp+57h+vehicleState.acceleration+4]
      vmovss  dword ptr [rax+0B534Ch], xmm1
      vmovss  xmm0, dword ptr [rbp+57h+vehicleState.acceleration+8]
      vmovss  dword ptr [rax+0B5350h], xmm0
    }
  }
}

/*
==============
BG_VehicleHelicopterMoveInternal
==============
*/
void BG_VehicleHelicopterMoveInternal(pmove_t *pm, const pml_t *pml, VehicleState *vehicleState)
{
  int VehicleTargetEntity; 
  const VehicleDef *VehicleDef; 
  char v13; 
  __int64 move; 
  vec3_t angles; 
  vec3_t outBodyAccel; 
  vec3_t outRotAccel; 
  tmat43_t<vec3_t> forward; 
  vec4_t outMoveRequest; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  LODWORD(move) = 0;
  _RBX = vehicleState;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 783, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm", move) )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 784, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 785, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+44h]
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rbp+57h+angles], xmm6
    vmovss  dword ptr [rbp+57h+angles+4], xmm0
    vmovss  dword ptr [rbp+57h+angles+8], xmm6
  }
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  __asm
  {
    vmovss  [rbp+57h+var_64], xmm6
    vmovss  [rbp+57h+var_60], xmm6
    vmovss  [rbp+57h+var_5C], xmm6
  }
  MatrixTransposeTransformVector43(&_RBX->velocity, &forward, &_RBX->bodyVelocity);
  VehicleTargetEntity = BG_GetVehicleTargetEntity(pm);
  if ( !(unsigned int)BG_HeliCalcTargetMoveRequest(pm, pml, _RBX, VehicleTargetEntity, &outMoveRequest) )
  {
    pm->ps->vehicleState.targetEntity = 2047;
    LOWORD(move) = *(_WORD *)&pm->cmd.forwardmove;
    VehicleDef = BG_GetVehicleDef(pm);
    if ( !VehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 384, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef", move) )
      __debugbreak();
    if ( VehicleDef->vehHelicopterLockAltitude )
    {
      v13 = 0;
    }
    else
    {
      v13 = (pm->cmd.buttons & 0x10000000000i64) != 0 ? 0 : -127;
      if ( (pm->cmd.buttons & 0x20000000000i64) == 0 )
        v13 = (pm->cmd.buttons & 0x10000000000i64) != 0 ? 0x7F : 0;
    }
    BYTE2(move) = v13;
    BG_HeliCmdScale(1, (const char (*)[4])&move, &outMoveRequest, 1);
  }
  BG_HeliCalcAccel(pm, pml, _RBX, &outMoveRequest, &outBodyAccel, &outRotAccel);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outRotAccel+4]
    vmulss  xmm1, xmm0, dword ptr [rsi+24h]
    vaddss  xmm2, xmm1, dword ptr [rbx+2Ch]
    vmovss  dword ptr [rbx+2Ch], xmm2
    vmulss  xmm0, xmm2, dword ptr [rsi+24h]
    vaddss  xmm1, xmm0, dword ptr [rbx+44h]
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  xmm0, dword ptr [rbp+57h+outRotAccel]
    vmovss  dword ptr [rbx+14h], xmm1
    vmovss  xmm1, dword ptr [rbp+57h+outRotAccel+8]
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  dword ptr [rbx+18h], xmm1
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  dword ptr [rbp+57h+move], xmm0
  }
  if ( (move & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  dword ptr [rbp+57h+move], xmm0
  }
  if ( (move & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm { vmovss  dword ptr [rbp+57h+move], xmm1 }
  if ( (move & 0x7F800000) == 2139095040 )
  {
LABEL_27:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_helicopter.cpp", 820, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vehicleState->angles )[0] ) && !IS_NAN( ( vehicleState->angles )[1] ) && !IS_NAN( ( vehicleState->angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vehicleState->angles )[0] ) && !IS_NAN( ( vehicleState->angles )[1] ) && !IS_NAN( ( vehicleState->angles )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  dword ptr [rbp+57h+angles+4], xmm0
    vmovss  dword ptr [rbp+57h+angles], xmm6
    vmovss  dword ptr [rbp+57h+angles+8], xmm6
  }
  AngleVectors(&angles, forward.m, &forward.m[1], &forward.m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+forward]
    vmulss  xmm2, xmm0, dword ptr [rbp+57h+outBodyAccel]
    vmovss  xmm1, dword ptr [rbp+57h+right]
    vmulss  xmm0, xmm1, dword ptr [rbp+57h+outBodyAccel+4]
    vaddss  xmm2, xmm2, xmm0
    vmovss  xmm0, dword ptr [rbp+57h+forward+4]
    vmulss  xmm3, xmm0, dword ptr [rbp+57h+outBodyAccel]
    vmovss  xmm0, dword ptr [rbp+57h+forward+8]
    vmovss  [rbp+57h+var_64], xmm6
    vmovss  [rbp+57h+var_60], xmm6
    vmovss  [rbp+57h+var_5C], xmm6
    vmovss  xmm6, dword ptr [rbp+57h+outBodyAccel+8]
    vmulss  xmm1, xmm6, dword ptr [rbp+57h+up]
    vaddss  xmm9, xmm2, xmm1
    vmovss  xmm1, dword ptr [rbp+57h+right+4]
    vmulss  xmm2, xmm1, dword ptr [rbp+57h+outBodyAccel+4]
    vmulss  xmm1, xmm6, dword ptr [rbp+57h+up+4]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm0, dword ptr [rbp+57h+outBodyAccel]
    vaddss  xmm5, xmm4, xmm1
    vmovss  xmm1, dword ptr [rbp+57h+right+8]
    vmulss  xmm2, xmm1, dword ptr [rbp+57h+outBodyAccel+4]
    vmulss  xmm1, xmm6, dword ptr [rbp+57h+up+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rbp+57h+outRotAccel+8], xmm2
    vmovss  dword ptr [rbx+98h], xmm2
    vmovss  dword ptr [rbp+57h+outRotAccel], xmm9
    vmovss  dword ptr [rbp+57h+outRotAccel+4], xmm5
    vmovss  dword ptr [rbx+90h], xmm9
    vmovss  dword ptr [rbx+94h], xmm5
  }
  BG_HelicopterAirMove(pm, pml, _RBX, &outRotAccel);
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+0F0h+var_38+8]
    vmovaps xmm9, [rsp+0F0h+var_48+8]
  }
}

