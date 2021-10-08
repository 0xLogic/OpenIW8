/*
==============
HavokCloth_VectorFieldAction::HavokCloth_VectorFieldAction
==============
*/

void __fastcall HavokCloth_VectorFieldAction::HavokCloth_VectorFieldAction(HavokCloth_VectorFieldAction *this, const unsigned int globalWorldId, const unsigned int instanceId, const float drag)
{
  ??0HavokCloth_VectorFieldAction@@QEAA@IIM@Z(this, globalWorldId, instanceId, drag);
}

/*
==============
HavokCloth_VectorFieldAction::apply
==============
*/

void __fastcall HavokCloth_VectorFieldAction::apply(HavokCloth_VectorFieldAction *this, hclSimClothInstance *simClothInstance, float timeStep, hkVector4f *forceAccumulatorInOut)
{
  ?apply@HavokCloth_VectorFieldAction@@UEBAXPEAVhclSimClothInstance@@MPEAVhkVector4f@@@Z(this, simClothInstance, timeStep, forceAccumulatorInOut);
}

/*
==============
HavokCloth_VectorFieldAction::HavokCloth_VectorFieldAction
==============
*/

void __fastcall HavokCloth_VectorFieldAction::HavokCloth_VectorFieldAction(HavokCloth_VectorFieldAction *this, const unsigned int globalWorldId, const unsigned int instanceId, double drag)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  _RSI = this;
  hclAction::hclAction(this);
  _RSI->m_globalWorldId = globalWorldId;
  _RSI->__vftable = (HavokCloth_VectorFieldAction_vtbl *)&HavokCloth_VectorFieldAction::`vftable';
  __asm
  {
    vmovss  dword ptr [rsi+20h], xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  _RSI->m_instanceId = instanceId;
}

/*
==============
HavokCloth_VectorFieldAction::apply
==============
*/

void __fastcall HavokCloth_VectorFieldAction::apply(HavokCloth_VectorFieldAction *this, hclSimClothInstance *simClothInstance, double timeStep, hkVector4f *forceAccumulatorInOut)
{
  bool v14; 
  bool v15; 
  float v21; 
  int m_size; 
  const dvar_t *v27; 
  const dvar_t *v29; 
  const dvar_t *v32; 
  bool v38; 
  bool v39; 
  Cloth_OwnerType OwnerType; 
  unsigned int m_instanceId; 
  unsigned int m_globalWorldId; 
  __int64 v73; 
  __int64 v99; 
  Cloth_OwnerType v112; 
  float c; 
  int v121; 
  __int128 v122; 
  vec3_t outSample; 
  vec3_t forceVec; 
  float s[2]; 
  vec3_t worldPos; 
  char v133; 

  __asm
  {
    vmovaps [rsp+140h+var_60], xmm8
    vmovaps [rsp+140h+var_80], xmm10
  }
  _RDI = forceAccumulatorInOut;
  _R14 = this;
  __asm { vmovaps xmm10, xmm2 }
  v14 = simClothInstance == NULL;
  if ( !simClothInstance )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 58, ASSERT_TYPE_ASSERT, "(simClothInstance)", (const char *)&queryFormat, "simClothInstance");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm10, xmm8
  }
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 59, ASSERT_TYPE_ASSERT, "(timeStep > 0.f)", (const char *)&queryFormat, "timeStep > 0.f") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 60, ASSERT_TYPE_ASSERT, "(forceAccumulatorInOut)", (const char *)&queryFormat, "forceAccumulatorInOut") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_VectorFieldAction");
  _R15 = simClothInstance->m_simClothData;
  __asm
  {
    vmovss  xmm1, dword ptr [r15+108h]
    vucomiss xmm1, xmm8
  }
  if ( !v14 )
  {
    __asm
    {
      vmovaps [rsp+140h+var_70], xmm9
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm9, xmm0, xmm1
    }
    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 78, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
      __debugbreak();
    v21 = *(float *)&simClothInstance->m_particlePositions.m_size;
    _RSI = simClothInstance->m_particlePositions.m_data;
    c = v21;
    if ( SLODWORD(v21) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 87, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, cs:__real@42000000
      vmulss  xmm0, xmm3, dword ptr [rsi]
    }
    m_size = simClothInstance->m_particleNormals.m_size;
    __asm
    {
      vmovss  dword ptr [rbp+40h+worldPos], xmm0
      vmulss  xmm2, xmm3, dword ptr [rsi+4]
    }
    v121 = m_size;
    v27 = DCONST_DVARBOOL_cloth_VectorFieldOverride;
    *(_QWORD *)s = DCONST_DVARBOOL_cloth_VectorFieldOverride;
    __asm
    {
      vmovss  dword ptr [rbp+40h+worldPos+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsi+8]
      vmovss  dword ptr [rbp+40h+worldPos+8], xmm1
    }
    if ( !DCONST_DVARBOOL_cloth_VectorFieldOverride )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_VectorFieldOverride") )
        __debugbreak();
      v27 = *(const dvar_t **)s;
    }
    __asm
    {
      vmovaps [rsp+140h+var_40], xmm6
      vmovaps [rsp+140h+var_50], xmm7
    }
    Dvar_CheckFrontendServerThread(v27);
    if ( *(_BYTE *)(*(_QWORD *)s + 40i64) )
    {
      v29 = DCONST_DVARFLT_cloth_VectorFieldOverrideDirection;
      *(_QWORD *)&v122 = DCONST_DVARFLT_cloth_VectorFieldOverrideDirection;
      if ( !DCONST_DVARFLT_cloth_VectorFieldOverrideDirection )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_VectorFieldOverrideDirection") )
          __debugbreak();
        v29 = (const dvar_t *)v122;
      }
      Dvar_CheckFrontendServerThread(v29);
      _RAX = v122;
      __asm { vmovss  xmm7, dword ptr [rax+28h] }
      v32 = DCONST_DVARFLT_cloth_VectorFieldOverrideStrength;
      *(_QWORD *)&v122 = DCONST_DVARFLT_cloth_VectorFieldOverrideStrength;
      if ( !DCONST_DVARFLT_cloth_VectorFieldOverrideStrength )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_VectorFieldOverrideStrength") )
          __debugbreak();
        v32 = (const dvar_t *)v122;
      }
      Dvar_CheckFrontendServerThread(v32);
      _RAX = v122;
      __asm
      {
        vmovaps xmm0, xmm7; radians
        vmovss  xmm6, dword ptr [rax+28h]
      }
      FastSinCos(*(const float *)&_XMM0, s, &c);
      __asm
      {
        vmulss  xmm1, xmm6, [rbp+40h+s]
        vmulss  xmm0, xmm6, [rsp+140h+c]
        vmovss  dword ptr [rsp+140h+outSample], xmm1
        vmovss  dword ptr [rsp+140h+outSample+4], xmm0
        vmovss  dword ptr [rsp+140h+outSample+8], xmm8
        vmovss  dword ptr [rsp+140h+forceVec], xmm8
        vmovss  dword ptr [rsp+140h+forceVec+4], xmm8
        vmovss  dword ptr [rsp+140h+forceVec+8], xmm8
      }
    }
    else
    {
      Sys_ProfBeginNamedEvent(0xFFFA8072, "Vector Field Query");
      v38 = CG_Wind_Sample(&worldPos, &outSample, HALF_HALF);
      v39 = CG_Wind_Sample(&worldPos, &forceVec, HALF) || v38;
      Sys_ProfEndNamedEvent();
      OwnerType = Cloth_GetOwnerType(_R14->m_globalWorldId, _R14->m_instanceId);
      Cloth_Debug_Perf_AddClothVectorFieldSearchCount(_R14->m_globalWorldId, OwnerType, 1);
      if ( !v39 )
      {
        HavokCloth_Debug_SetVectorFieldBasis(_R14->m_globalWorldId, _R14->m_instanceId, &worldPos, &vec3_origin, &vec3_origin);
LABEL_43:
        __asm
        {
          vmovaps xmm7, [rsp+140h+var_50]
          vmovaps xmm6, [rsp+140h+var_40]
          vmovaps xmm9, [rsp+140h+var_70]
        }
        goto LABEL_44;
      }
      v21 = c;
    }
    m_instanceId = _R14->m_instanceId;
    m_globalWorldId = _R14->m_globalWorldId;
    __asm { vmovaps [rsp+140h+var_90], xmm11 }
    HavokCloth_Debug_SetVectorFieldBasis(m_globalWorldId, m_instanceId, &worldPos, &outSample, &forceVec);
    __asm
    {
      vmovss  xmm3, cs:__real@3d000000
      vmulss  xmm4, xmm3, dword ptr [rsp+140h+outSample+4]
      vmulss  xmm5, xmm3, dword ptr [rsp+140h+outSample+8]
      vmulss  xmm2, xmm3, dword ptr [rsp+140h+forceVec]
      vmulss  xmm1, xmm3, dword ptr [rsp+140h+forceVec+4]
      vmovss  xmm0, dword ptr [rsp+140h+outSample]
      vmulss  xmm7, xmm0, xmm3
      vmulss  xmm0, xmm3, dword ptr [rsp+140h+forceVec+8]
      vinsertps xmm7, xmm7, xmm4, 10h
      vinsertps xmm7, xmm7, xmm5, 20h ; ' '
      vinsertps xmm7, xmm7, xmm8, 30h ; '0'
      vmovss  dword ptr [rsp+140h+var_F0], xmm2
      vdpps   xmm2, xmm7, xmm7, 7Fh
      vrsqrtps xmm6, xmm2
      vmovss  dword ptr [rsp+140h+var_F0+4], xmm1
      vxorps  xmm1, xmm1, xmm1
      vcmpleps xmm5, xmm2, xmm1
      vmovss  dword ptr [rsp+140h+var_F0+8], xmm0
      vsubps  xmm0, xmm1, xmm2
      vcmpltps xmm0, xmm0, xmm1
      vmulps  xmm1, xmm6, xmm2
      vmovups xmm2, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
      vmulps  xmm3, xmm1, xmm6
      vmulps  xmm1, xmm6, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vsubps  xmm4, xmm2, xmm3
      vmulps  xmm3, xmm4, xmm1
      vandnps xmm2, xmm5, xmm3
      vmulps  xmm5, xmm2, xmm7
      vblendvps xmm11, xmm7, xmm5, xmm0
      vmovss  dword ptr [rsp+140h+var_F0+0Ch], xmm8
    }
    if ( LODWORD(v21) == v121 )
    {
      _RAX = simClothInstance->m_particleNormals.m_data;
      if ( SLODWORD(v21) > 0 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@bf800000
          vmovups xmm8, [rsp+140h+var_F0]
          vdivss  xmm6, xmm0, xmm10
        }
        v73 = LODWORD(v21);
        _RSI = (char *)_RSI - (char *)_RDI;
        __asm { vshufps xmm6, xmm6, xmm6, 0 }
        do
        {
          ++_RDI;
          __asm { vmovups xmm0, xmmword ptr [rax] }
          ++_RAX;
          __asm
          {
            vdpps   xmm1, xmm0, xmm11, 7Fh
            vxorps  xmm0, xmm0, xmm0
            vmovss  xmm2, xmm0, xmm1
            vmulss  xmm0, xmm9, dword ptr [r15+rdi-10h]
            vmovups xmm1, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
            vandnps xmm3, xmm1, xmm2
            vmulss  xmm4, xmm3, dword ptr [r14+20h]
            vmulss  xmm5, xmm4, xmm0
            vmovups xmm0, xmmword ptr [rsi+rdi-10h]
            vsubps  xmm1, xmm0, xmmword ptr [r12+rdi-10h]
            vmulps  xmm2, xmm1, xmm6
            vaddps  xmm3, xmm2, xmm7
            vshufps xmm5, xmm5, xmm5, 0
            vmulps  xmm0, xmm3, xmm5
            vaddps  xmm4, xmm0, xmmword ptr [rdi-10h]
            vmulps  xmm1, xmm8, xmm5
            vaddps  xmm2, xmm4, xmm1
            vmovups xmmword ptr [rdi-10h], xmm2
          }
          --v73;
        }
        while ( v73 );
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+20h]
        vmulss  xmm8, xmm0, cs:__real@3f333333
      }
      if ( SLODWORD(v21) > 0 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@bf800000
          vdivss  xmm6, xmm0, xmm10
          vmovups xmm10, [rsp+140h+var_F0]
        }
        v99 = LODWORD(v21);
        __asm { vshufps xmm6, xmm6, xmm6, 0 }
        do
        {
          ++_RDI;
          __asm { vmulss  xmm0, xmm9, dword ptr [r15+rsi] }
          ++_RSI;
          __asm
          {
            vmulss  xmm5, xmm0, xmm8
            vmovups xmm0, xmmword ptr [rsi-10h]
            vsubps  xmm1, xmm0, xmmword ptr [r12+rsi-10h]
            vmulps  xmm2, xmm1, xmm6
            vaddps  xmm3, xmm2, xmm7
            vshufps xmm5, xmm5, xmm5, 0
            vmulps  xmm0, xmm3, xmm5
            vaddps  xmm4, xmm0, xmmword ptr [rdi-10h]
            vmulps  xmm1, xmm5, xmm10
            vaddps  xmm2, xmm4, xmm1
            vmovups xmmword ptr [rdi-10h], xmm2
          }
          --v99;
        }
        while ( v99 );
      }
    }
    v112 = Cloth_GetOwnerType(_R14->m_globalWorldId, _R14->m_instanceId);
    Cloth_Debug_Perf_AddParticleVectorFieldCount(_R14->m_globalWorldId, v112, SLODWORD(v21));
    __asm { vmovaps xmm11, [rsp+140h+var_90] }
    goto LABEL_43;
  }
LABEL_44:
  Sys_ProfEndNamedEvent();
  _R11 = &v133;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

