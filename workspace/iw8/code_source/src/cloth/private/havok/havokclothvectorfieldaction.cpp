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
void HavokCloth_VectorFieldAction::HavokCloth_VectorFieldAction(HavokCloth_VectorFieldAction *this, const unsigned int globalWorldId, const unsigned int instanceId, const float drag)
{
  hclAction::hclAction(this);
  this->m_globalWorldId = globalWorldId;
  this->__vftable = (HavokCloth_VectorFieldAction_vtbl *)&HavokCloth_VectorFieldAction::`vftable';
  this->m_drag = drag;
  this->m_instanceId = instanceId;
}

/*
==============
HavokCloth_VectorFieldAction::apply
==============
*/
void HavokCloth_VectorFieldAction::apply(HavokCloth_VectorFieldAction *this, hclSimClothInstance *simClothInstance, float timeStep, hkVector4f *forceAccumulatorInOut)
{
  const hclSimClothData *m_simClothData; 
  float m_totalMass; 
  __m128 v10; 
  __m128 v11; 
  float v12; 
  hclSimClothData::ParticleData *m_data; 
  hkVector4f *v14; 
  hkVector4f *v15; 
  int m_size; 
  float v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  bool v23; 
  bool v24; 
  Cloth_OwnerType OwnerType; 
  __int128 v27; 
  hkVector4f *v38; 
  __m128 v39; 
  __m128 v40; 
  signed __int64 v41; 
  __int64 v42; 
  signed __int64 v43; 
  __m128 v44; 
  signed __int64 v45; 
  __m128 v50; 
  __m128 v51; 
  float v52; 
  __m128 v53; 
  __m128 v54; 
  signed __int64 v55; 
  __int64 v56; 
  __m128 v57; 
  signed __int64 v58; 
  __m128 v59; 
  __m128 v60; 
  Cloth_OwnerType v61; 
  float c; 
  int v63; 
  __m128 v64; 
  vec3_t outSample; 
  vec3_t forceVec; 
  float s[2]; 
  vec3_t worldPos; 

  if ( !simClothInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 58, ASSERT_TYPE_ASSERT, "(simClothInstance)", (const char *)&queryFormat, "simClothInstance") )
    __debugbreak();
  if ( timeStep <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 59, ASSERT_TYPE_ASSERT, "(timeStep > 0.f)", (const char *)&queryFormat, "timeStep > 0.f") )
    __debugbreak();
  if ( !forceAccumulatorInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 60, ASSERT_TYPE_ASSERT, "(forceAccumulatorInOut)", (const char *)&queryFormat, "forceAccumulatorInOut") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "HavokCloth_VectorFieldAction");
  m_simClothData = simClothInstance->m_simClothData;
  m_totalMass = m_simClothData->m_totalMass;
  if ( m_totalMass != 0.0 )
  {
    v11 = (__m128)LODWORD(FLOAT_1_0);
    v11.m128_f32[0] = 1.0 / m_totalMass;
    v10 = v11;
    if ( !m_simClothData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 78, ASSERT_TYPE_ASSERT, "(simClothData)", (const char *)&queryFormat, "simClothData") )
      __debugbreak();
    v12 = *(float *)&simClothInstance->m_particlePositions.m_size;
    m_data = m_simClothData->m_particleDatas.m_data;
    v14 = simClothInstance->m_particlePositions.m_data;
    v15 = simClothInstance->m_particlePositionsPrevious.m_data;
    c = v12;
    if ( SLODWORD(v12) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\havok\\havokclothvectorfieldaction.cpp", 87, ASSERT_TYPE_ASSERT, "(numParticles > 0)", (const char *)&queryFormat, "numParticles > 0") )
      __debugbreak();
    m_size = simClothInstance->m_particleNormals.m_size;
    worldPos.v[0] = 32.0 * v14->m_quad.m128_f32[0];
    v17 = 32.0 * v14->m_quad.m128_f32[1];
    v63 = m_size;
    v18 = DCONST_DVARBOOL_cloth_VectorFieldOverride;
    *(_QWORD *)s = DCONST_DVARBOOL_cloth_VectorFieldOverride;
    worldPos.v[1] = v17;
    worldPos.v[2] = 32.0 * v14->m_quad.m128_f32[2];
    if ( !DCONST_DVARBOOL_cloth_VectorFieldOverride )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_VectorFieldOverride") )
        __debugbreak();
      v18 = *(const dvar_t **)s;
    }
    Dvar_CheckFrontendServerThread(v18);
    if ( *(_BYTE *)(*(_QWORD *)s + 40i64) )
    {
      v19 = DCONST_DVARFLT_cloth_VectorFieldOverrideDirection;
      v64.m128_u64[0] = (unsigned __int64)DCONST_DVARFLT_cloth_VectorFieldOverrideDirection;
      if ( !DCONST_DVARFLT_cloth_VectorFieldOverrideDirection )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_VectorFieldOverrideDirection") )
          __debugbreak();
        v19 = (const dvar_t *)v64.m128_u64[0];
      }
      Dvar_CheckFrontendServerThread(v19);
      v20 = *(float *)(v64.m128_u64[0] + 40);
      v21 = DCONST_DVARFLT_cloth_VectorFieldOverrideStrength;
      v64.m128_u64[0] = (unsigned __int64)DCONST_DVARFLT_cloth_VectorFieldOverrideStrength;
      if ( !DCONST_DVARFLT_cloth_VectorFieldOverrideStrength )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cloth_VectorFieldOverrideStrength") )
          __debugbreak();
        v21 = (const dvar_t *)v64.m128_u64[0];
      }
      Dvar_CheckFrontendServerThread(v21);
      v22 = *(float *)(v64.m128_u64[0] + 40);
      FastSinCos(v20, s, &c);
      outSample.v[0] = v22 * s[0];
      outSample.v[1] = v22 * c;
      outSample.v[2] = 0.0;
      forceVec.v[0] = 0.0;
      forceVec.v[1] = 0.0;
      forceVec.v[2] = 0.0;
    }
    else
    {
      Sys_ProfBeginNamedEvent(0xFFFA8072, "Vector Field Query");
      v23 = CG_Wind_Sample(&worldPos, &outSample, HALF_HALF);
      v24 = CG_Wind_Sample(&worldPos, &forceVec, HALF) || v23;
      Sys_ProfEndNamedEvent();
      OwnerType = Cloth_GetOwnerType(this->m_globalWorldId, this->m_instanceId);
      Cloth_Debug_Perf_AddClothVectorFieldSearchCount(this->m_globalWorldId, OwnerType, 1);
      if ( !v24 )
      {
        HavokCloth_Debug_SetVectorFieldBasis(this->m_globalWorldId, this->m_instanceId, &worldPos, &vec3_origin, &vec3_origin);
        goto LABEL_43;
      }
      v12 = c;
    }
    HavokCloth_Debug_SetVectorFieldBasis(this->m_globalWorldId, this->m_instanceId, &worldPos, &outSample, &forceVec);
    v27 = LODWORD(outSample.v[0]);
    *(float *)&v27 = outSample.v[0] * 0.03125;
    _XMM7 = v27;
    __asm
    {
      vinsertps xmm7, xmm7, xmm4, 10h
      vinsertps xmm7, xmm7, xmm5, 20h ; ' '
      vinsertps xmm7, xmm7, xmm8, 30h ; '0'
    }
    v64.m128_f32[0] = 0.03125 * forceVec.v[0];
    __asm
    {
      vdpps   xmm2, xmm7, xmm7, 7Fh
      vrsqrtps xmm6, xmm2
    }
    v64.m128_f32[1] = 0.03125 * forceVec.v[1];
    __asm { vcmpleps xmm5, xmm2, xmm1 }
    v64.m128_f32[2] = 0.03125 * forceVec.v[2];
    _XMM0 = _mm128_sub_ps((__m128)0i64, _XMM2);
    __asm { vcmpltps xmm0, xmm0, xmm1 }
    _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM6, _XMM2), _XMM6)), _mm128_mul_ps(_XMM6, *(__m128 *)hkMath::hkSse_floatHalf));
    __asm { vandnps xmm2, xmm5, xmm3 }
    _mm128_mul_ps(_XMM2, _XMM7);
    __asm { vblendvps xmm11, xmm7, xmm5, xmm0 }
    v64.m128_f32[3] = 0.0;
    if ( LODWORD(v12) == v63 )
    {
      v38 = simClothInstance->m_particleNormals.m_data;
      if ( SLODWORD(v12) > 0 )
      {
        v39 = v64;
        v40 = (__m128)LODWORD(FLOAT_N1_0);
        v40.m128_f32[0] = -1.0 / timeStep;
        v41 = (char *)v15 - (char *)forceAccumulatorInOut;
        v42 = LODWORD(v12);
        v43 = (char *)v14 - (char *)forceAccumulatorInOut;
        v44 = _mm_shuffle_ps(v40, v40, 0);
        v45 = (char *)m_data - (char *)forceAccumulatorInOut;
        do
        {
          ++forceAccumulatorInOut;
          _XMM0 = v38->m_quad;
          ++v38;
          __asm { vdpps   xmm1, xmm0, xmm11, 7Fh }
          _XMM1 = *(_OWORD *)hkMath::hkSse_signMask;
          __asm { vandnps xmm3, xmm1, xmm2 }
          v50 = _XMM3;
          v50.m128_f32[0] = (float)(_XMM3.m128_f32[0] * this->m_drag) * (float)(v10.m128_f32[0] * *(float *)((char *)forceAccumulatorInOut[-1].m_quad.m128_f32 + v45));
          v51 = _mm_shuffle_ps(v50, v50, 0);
          forceAccumulatorInOut[-1].m_quad = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)((char *)&forceAccumulatorInOut[-1].m_quad + v43), *(__m128 *)((char *)&forceAccumulatorInOut[-1].m_quad + v41)), v44), _XMM7), v51), forceAccumulatorInOut[-1].m_quad), _mm128_mul_ps(v39, v51));
          --v42;
        }
        while ( v42 );
      }
    }
    else
    {
      v52 = this->m_drag * 0.69999999;
      if ( SLODWORD(v12) > 0 )
      {
        v53 = (__m128)LODWORD(FLOAT_N1_0);
        v53.m128_f32[0] = -1.0 / timeStep;
        v54 = v64;
        v55 = (char *)v15 - (char *)v14;
        v56 = LODWORD(v12);
        v57 = _mm_shuffle_ps(v53, v53, 0);
        v58 = (char *)m_data - (char *)v14;
        do
        {
          ++forceAccumulatorInOut;
          v59 = v10;
          v59.m128_f32[0] = v10.m128_f32[0] * *(float *)((char *)v14->m_quad.m128_f32 + v58);
          ++v14;
          v59.m128_f32[0] = v59.m128_f32[0] * v52;
          v60 = _mm_shuffle_ps(v59, v59, 0);
          forceAccumulatorInOut[-1].m_quad = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v14[-1].m_quad, *(__m128 *)((char *)&v14[-1].m_quad + v55)), v57), _XMM7), v60), forceAccumulatorInOut[-1].m_quad), _mm128_mul_ps(v60, v54));
          --v56;
        }
        while ( v56 );
      }
    }
    v61 = Cloth_GetOwnerType(this->m_globalWorldId, this->m_instanceId);
    Cloth_Debug_Perf_AddParticleVectorFieldCount(this->m_globalWorldId, v61, SLODWORD(v12));
  }
LABEL_43:
  Sys_ProfEndNamedEvent();
}

