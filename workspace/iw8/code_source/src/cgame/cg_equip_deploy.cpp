/*
==============
CG_Deploy_Update
==============
*/

void __fastcall CG_Deploy_Update(LocalClientNum_t localClientNum)
{
  ?CG_Deploy_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Deploy_AdjustFXHeight
==============
*/
void CG_Deploy_AdjustFXHeight(LocalClientNum_t localClientNum, const WeaponDef *weaponDef, const tmat43_t<vec3_t> *transform, vector4 *matrix)
{
  cg_t *LocalClientGlobals; 
  float v9; 
  __int128 v11; 
  __int128 v14; 

  if ( !weaponDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 16, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  BG_Deploy_ComputeFXOffset(LocalClientGlobals->predictedPlayerState.origin.v[2], weaponDef->deployEffectHeightOffset, transform, (vec3_t *)&v14);
  v9 = *(float *)&v14 + transform->m[3].v[0];
  HIDWORD(v14) = 0;
  v11 = v14;
  *(float *)&v11 = v9;
  _XMM0 = v11;
  __asm
  {
    vinsertps xmm0, xmm0, xmm3, 10h
    vinsertps xmm0, xmm0, xmm4, 20h ; ' '
  }
  matrix->w = (float4)_XMM0.v;
}

/*
==============
CG_Deploy_StopFX
==============
*/
void CG_Deploy_StopFX(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  bool enabled; 
  ParticleManager *ParticleManager; 
  ParticleSystemHandle activeFx; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->equipDeployState.activeFx )
  {
    v3 = DCONST_DVARBOOL_deploy_killFx;
    if ( !DCONST_DVARBOOL_deploy_killFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deploy_killFx") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    enabled = v3->current.enabled;
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    activeFx = LocalClientGlobals->equipDeployState.activeFx;
    if ( enabled )
      ParticleManager::KillSystem(ParticleManager, activeFx);
    else
      ParticleManager::StopSystem(ParticleManager, activeFx);
    LocalClientGlobals->equipDeployState.activeFx = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
}

/*
==============
CG_Deploy_Update
==============
*/
void CG_Deploy_Update(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v3; 
  unsigned __int16 weaponIdx; 
  WeaponDef *v5; 
  unsigned __int64 weaponState; 
  __int64 v7; 
  CgHandler *Handler; 
  CgHandler *v9; 
  CgHandler *v10; 
  int time; 
  cg_t *v12; 
  const ParticleSystemDef *particleSystemDef; 
  cg_t *v14; 
  __int128 v16; 
  __int128 v20; 
  __int128 v24; 
  __int128 v28; 
  __int128 v32; 
  cg_t *v35; 
  __int128 v37; 
  ParticleManager *ParticleManager; 
  __int64 ignoreArbitraryUp; 
  __int128 v; 
  tmat33_t<vec3_t> forward; 
  DeployTestResults outResults; 
  vec3_t outOrigin; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 
  __int128 v48; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[v1];
  LocalClientGlobals->equipDeployState.state = NONE;
  weaponIdx = BG_GetCurrentWeaponForPlayer(v3, &LocalClientGlobals->predictedPlayerState)->weaponIdx;
  if ( !weaponIdx )
    goto LABEL_28;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(ignoreArbitraryUp) = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", ignoreArbitraryUp, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v5 = bg_weaponDefs[weaponIdx];
  if ( v5->weapType != WEAPTYPE_EQUIP_DEPLOY || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x16u) || (weaponState = LocalClientGlobals->predictedPlayerState.weapState[0].weaponState, (unsigned int)weaponState <= 0x32) && (v7 = 0x4000000001FBEi64, _bittest64(&v7, weaponState)) )
  {
LABEL_28:
    CG_Deploy_StopFX((LocalClientNum_t)v1);
  }
  else
  {
    Handler = CgHandler::getHandler((LocalClientNum_t)v1);
    BG_GetPlayerEyePosition(v3, &LocalClientGlobals->predictedPlayerState, &outOrigin, Handler);
    v9 = CgHandler::getHandler((LocalClientNum_t)v1);
    BG_GetPlayerViewDirection(&LocalClientGlobals->predictedPlayerState, forward.m, &forward.m[1], &forward.m[2], v9, 0);
    LODWORD(forward.m[1].v[0]) ^= _xmm;
    LODWORD(forward.m[1].v[2]) ^= _xmm;
    LODWORD(forward.m[1].v[1]) ^= _xmm;
    DeployTestResults::DeployTestResults(&outResults);
    v10 = CgHandler::getHandler((LocalClientNum_t)v1);
    BG_Deploy_TestLocation(v10, (Physics_WorldId)(3 * v1 + 2), &LocalClientGlobals->predictedPlayerState, &outOrigin, &forward, v5, &outResults);
    if ( v5->deployRequireOnWalkableSurface && !outResults.passWalkableTest )
      GenerateAxisFromUpVector(&identityMatrix33.m[2], &forward, (tmat33_t<vec3_t> *)&outResults.transform);
    if ( LocalClientGlobals->equipDeployState.activeFx == PARTICLE_SYSTEM_INVALID_HANDLE )
    {
      time = LocalClientGlobals->time;
      if ( v5 != (WeaponDef *)-4648i64 )
      {
        v12 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
        particleSystemDef = v5->deployEffect.particleSystemDef;
        v14 = v12;
        if ( v12->equipDeployState.activeFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 48, ASSERT_TYPE_ASSERT, "(cgameGlob->equipDeployState.activeFx == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "cgameGlob->equipDeployState.activeFx == PARTICLE_SYSTEM_INVALID_HANDLE") )
          __debugbreak();
        HIDWORD(v) = 0;
        v16 = v;
        *(float *)&v16 = outResults.transform.m[3].v[0];
        _XMM0 = v16;
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [rbp+90h+var_100.transform+28h], 90h+emitterOrientationMat
          vinsertps xmm0, xmm0, dword ptr [rbp+90h+var_100.transform+2Ch], 90h+emitterOrientationMat.y
        }
        v = (__int128)_XMM0;
        emitterPos.v = _XMM0;
        HIDWORD(v) = 0;
        v20 = v;
        *(float *)&v20 = outResults.transform.m[0].v[0];
        _XMM3 = v20;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+4], 90h+emitterOrientationMat
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+8], 90h+emitterOrientationMat.y
        }
        v = (__int128)_XMM3.v;
        emitterOrientationMat.x = (float4)_XMM3.v;
        HIDWORD(v) = 0;
        v24 = v;
        *(float *)&v24 = outResults.transform.m[1].v[0];
        _XMM3 = v24;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+10h], 90h+emitterOrientationMat
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+14h], 90h+emitterOrientationMat.y
        }
        v = (__int128)_XMM3.v;
        emitterOrientationMat.y = (float4)_XMM3.v;
        HIDWORD(v) = 0;
        v28 = v;
        *(float *)&v28 = outResults.transform.m[2].v[0];
        _XMM3 = v28;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+1Ch], 90h+emitterOrientationMat
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+20h], 90h+emitterOrientationMat.y
        }
        v = (__int128)_XMM3.v;
        HIDWORD(v) = 0;
        v32 = v;
        *(float *)&v32 = outResults.transform.m[3].v[0];
        _XMM2 = v32;
        __asm
        {
          vinsertps xmm2, xmm2, dword ptr [rbp+90h+var_100.transform+28h], 90h+emitterOrientationMat
          vinsertps xmm2, xmm2, dword ptr [rbp+90h+var_100.transform+2Ch], 90h+emitterOrientationMat.y
        }
        v = _XMM2;
        v48 = (_XMM2 ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v ^ _XMM2;
        emitterOrientationMat.z = (float4)_XMM3.v;
        v35 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
        BG_Deploy_ComputeFXOffset(v35->predictedPlayerState.origin.v[2], v5->deployEffectHeightOffset, &outResults.transform, (vec3_t *)&v);
        HIDWORD(v) = 0;
        v37 = v;
        *(float *)&v37 = outResults.transform.m[3].v[0] + *(float *)&v;
        _XMM0 = v37;
        __asm
        {
          vinsertps xmm0, xmm0, xmm3, 10h
          vinsertps xmm0, xmm0, xmm4, 20h ; ' '
        }
        v48 = _XMM0;
        ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v1);
        v14->equipDeployState.activeFx = ParticleManager::AddSystem(ParticleManager, (LocalClientNum_t)v1, particleSystemDef, &emitterPos, &emitterOrientationMat, time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
      }
    }
    CG_Deploy_UpdateFX((LocalClientNum_t)v1, &outResults.transform, !outResults.passRangeTest, v5, &LocalClientGlobals->predictedPlayerState.otherFlags, LocalClientGlobals->time);
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x14u) && outResults.passRangeTest )
      LocalClientGlobals->equipDeployState.state = HALF_HALF;
    else
      LocalClientGlobals->equipDeployState.state = HALF;
  }
}

/*
==============
CG_Deploy_UpdateFX
==============
*/
void CG_Deploy_UpdateFX(LocalClientNum_t localClientNum, const tmat43_t<vec3_t> *transform, const bool isOutOfRange, const WeaponDef *const weaponDef, const GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *r_otherFlags)
{
  __int128 v5; 
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle activeFx; 
  ParticleSystem *v12; 
  unsigned int v13; 
  __int64 v14; 
  __m256i v15; 
  char v16; 
  __m128 v; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m256i v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  bool m_isHighPlayerCount; 
  ParticleGroupID deployOutOfRangeGroupId; 
  bool v28; 
  vector4 result; 
  __int128 v30; 

  v6 = localClientNum;
  if ( !weaponDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 73, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( LocalClientGlobals->equipDeployState.activeFx == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 78, ASSERT_TYPE_ASSERT, "(cgameGlob->equipDeployState.activeFx)", (const char *)&queryFormat, "cgameGlob->equipDeployState.activeFx") )
    __debugbreak();
  activeFx = LocalClientGlobals->equipDeployState.activeFx;
  v12 = NULL;
  v13 = 0;
  if ( g_particleSystemsGeneration[4096 * v6 + (activeFx & 0xFFF)].__all32 == activeFx )
    v13 = activeFx & 0xFFF;
  v14 = (v6 << 12) + v13;
  if ( g_particleSystems[0][v14] >= (ParticleSystem *)0x1000 )
    v12 = g_particleSystems[0][v14];
  if ( v12 )
  {
    v30 = v5;
    Float4x4LoadMat43(transform, &result);
    CG_Deploy_AdjustFXHeight((LocalClientNum_t)v6, weaponDef, transform, &result);
    Particle_AssertFloat4IsNormalized(&result.x);
    Particle_AssertFloat4IsNormalized(&result.y);
    Particle_AssertFloat4IsNormalized(&result.z);
    v15 = *(__m256i *)result.z.v.m128_f32;
    v16 = 1;
    *(__m256i *)v12->m_systemTransform.x.v.m128_f32 = *(__m256i *)result.x.v.m128_f32;
    *(__m256i *)v12->m_systemTransform.z.v.m128_f32 = v15;
    v = v12->m_systemTransform.z.v;
    v18 = _mm_shuffle_ps(v, v12->m_systemTransform.w.v, 68);
    v19 = _mm_shuffle_ps(v, v12->m_systemTransform.w.v, 238);
    v20 = _mm_shuffle_ps(v12->m_systemTransform.x.v, v12->m_systemTransform.y.v, 68);
    v21 = _mm_shuffle_ps(v12->m_systemTransform.x.v, v12->m_systemTransform.y.v, 238);
    result.y.v = _mm_shuffle_ps(v20, v18, 221);
    result.x.v = _mm_shuffle_ps(v20, v18, 136);
    result.z.v = _mm_shuffle_ps(v21, v19, 136);
    result.w.v = _mm_shuffle_ps(v21, v19, 221);
    v22 = *(__m256i *)result.z.v.m128_f32;
    *(__m256i *)v12->m_systemTransformTranspose.x.v.m128_f32 = *(__m256i *)result.x.v.m128_f32;
    *(__m256i *)v12->m_systemTransformTranspose.z.v.m128_f32 = v22;
    v23 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)r_otherFlags, ACTIVE, 0x14u) && !isOutOfRange;
    v24 = !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)r_otherFlags, ACTIVE, 0x14u) && !isOutOfRange;
    v25 = v23 && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)r_otherFlags, ACTIVE, 0x15u);
    if ( v23 )
    {
      if ( isOutOfRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 100, ASSERT_TYPE_ASSERT, "(!(playValidFx && playOutOfRangeFx))", (const char *)&queryFormat, "!(playValidFx && playOutOfRangeFx)") )
        __debugbreak();
      if ( !v24 )
        goto LABEL_35;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 101, ASSERT_TYPE_ASSERT, "(!(playValidFx && playInvalidFx))", (const char *)&queryFormat, "!(playValidFx && playInvalidFx)") )
        __debugbreak();
    }
    if ( v24 && isOutOfRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 102, ASSERT_TYPE_ASSERT, "(!(playInvalidFx && playOutOfRangeFx))", (const char *)&queryFormat, "!(playInvalidFx && playOutOfRangeFx)") )
      __debugbreak();
LABEL_35:
    if ( v25 )
      v16 = v23;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 103, ASSERT_TYPE_ASSERT, "(playValidIndoorFx ? playValidFx : true)", (const char *)&queryFormat, "playValidIndoorFx ? playValidFx : true") )
      __debugbreak();
    m_isHighPlayerCount = ParticleManager::GetParticleManager(localClientNum)->m_isHighPlayerCount;
    ParticleSystem::EnableEmitterGroup(v12, weaponDef->deployValidGroupId, v23, m_isHighPlayerCount);
    ParticleSystem::EnableEmitterGroup(v12, weaponDef->deployIndoorGroupId, v25, m_isHighPlayerCount);
    if ( weaponDef->deployOutOfRangeGroupId )
    {
      ParticleSystem::EnableEmitterGroup(v12, weaponDef->deployInvalidGroupId, v24, m_isHighPlayerCount);
      deployOutOfRangeGroupId = weaponDef->deployOutOfRangeGroupId;
      v28 = isOutOfRange;
    }
    else if ( v24 || isOutOfRange )
    {
      deployOutOfRangeGroupId = weaponDef->deployInvalidGroupId;
      v28 = 1;
    }
    else
    {
      deployOutOfRangeGroupId = weaponDef->deployInvalidGroupId;
      v28 = 0;
    }
    ParticleSystem::EnableEmitterGroup(v12, deployOutOfRangeGroupId, v28, m_isHighPlayerCount);
  }
}

