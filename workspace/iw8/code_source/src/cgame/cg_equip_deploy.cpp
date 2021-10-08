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
  __int128 v21; 

  _RBP = matrix;
  _RBX = weaponDef;
  if ( !weaponDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 16, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+121Ch]; desiredHeightOffset
    vmovss  xmm0, dword ptr [rax+40h]; playerZ
  }
  BG_Deploy_ComputeFXOffset(*(float *)&_XMM0, *(float *)&_XMM1, transform, (vec3_t *)&v21);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+var_48]
    vaddss  xmm2, xmm0, dword ptr [rdi+24h]
    vmovss  xmm0, dword ptr [rsp+78h+var_48+8]
    vaddss  xmm4, xmm0, dword ptr [rdi+2Ch]
    vmovss  xmm1, dword ptr [rsp+78h+var_48+4]
    vaddss  xmm3, xmm1, dword ptr [rdi+28h]
  }
  HIDWORD(v21) = 0;
  __asm
  {
    vmovups xmm0, [rsp+78h+var_48]
    vmovss  xmm0, xmm0, xmm2
    vinsertps xmm0, xmm0, xmm3, 10h
    vinsertps xmm0, xmm0, xmm4, 20h ; ' '
    vmovups xmmword ptr [rbp+30h], xmm0
  }
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
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v4; 
  unsigned __int16 weaponIdx; 
  unsigned __int64 weaponState; 
  __int64 v8; 
  CgHandler *Handler; 
  CgHandler *v10; 
  CgHandler *v18; 
  int time; 
  cg_t *v20; 
  const ParticleSystemDef *particleSystemDef; 
  cg_t *v22; 
  ParticleManager *ParticleManager; 
  ParticleSystemHandle v64; 
  __int64 ignoreArbitraryUp; 
  __int128 v67; 
  tmat33_t<vec3_t> forward; 
  DeployTestResults outResults; 
  vec3_t outOrigin; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v2];
  LocalClientGlobals->equipDeployState.state = NONE;
  weaponIdx = BG_GetCurrentWeaponForPlayer(v4, &LocalClientGlobals->predictedPlayerState)->weaponIdx;
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
  _R14 = bg_weaponDefs[weaponIdx];
  if ( _R14->weapType != WEAPTYPE_EQUIP_DEPLOY || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x16u) || (weaponState = LocalClientGlobals->predictedPlayerState.weapState[0].weaponState, (unsigned int)weaponState <= 0x32) && (v8 = 0x4000000001FBEi64, _bittest64(&v8, weaponState)) )
  {
LABEL_28:
    CG_Deploy_StopFX((LocalClientNum_t)v2);
  }
  else
  {
    Handler = CgHandler::getHandler((LocalClientNum_t)v2);
    BG_GetPlayerEyePosition(v4, &LocalClientGlobals->predictedPlayerState, &outOrigin, Handler);
    v10 = CgHandler::getHandler((LocalClientNum_t)v2);
    BG_GetPlayerViewDirection(&LocalClientGlobals->predictedPlayerState, forward.m, &forward.m[1], &forward.m[2], v10, 0);
    __asm
    {
      vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, dword ptr [rsp+190h+right]
      vmovss  xmm2, dword ptr [rsp+190h+right+4]
      vxorps  xmm1, xmm0, xmm3
      vxorps  xmm0, xmm2, xmm3
      vmovss  dword ptr [rsp+190h+right], xmm1
      vmovss  xmm1, dword ptr [rsp+190h+right+8]
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rsp+190h+right+8], xmm2
      vmovss  dword ptr [rsp+190h+right+4], xmm0
    }
    DeployTestResults::DeployTestResults(&outResults);
    v18 = CgHandler::getHandler((LocalClientNum_t)v2);
    BG_Deploy_TestLocation(v18, (Physics_WorldId)(3 * v2 + 2), &LocalClientGlobals->predictedPlayerState, &outOrigin, &forward, _R14, &outResults);
    if ( _R14->deployRequireOnWalkableSurface && !outResults.passWalkableTest )
      GenerateAxisFromUpVector(&identityMatrix33.m[2], &forward, (tmat33_t<vec3_t> *)&outResults.transform);
    if ( LocalClientGlobals->equipDeployState.activeFx == PARTICLE_SYSTEM_INVALID_HANDLE )
    {
      time = LocalClientGlobals->time;
      if ( _R14 != (WeaponDef *)-4648i64 )
      {
        __asm { vmovaps [rsp+190h+var_30], xmm6 }
        v20 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
        particleSystemDef = _R14->deployEffect.particleSystemDef;
        v22 = v20;
        if ( v20->equipDeployState.activeFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 48, ASSERT_TYPE_ASSERT, "(cgameGlob->equipDeployState.activeFx == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "cgameGlob->equipDeployState.activeFx == PARTICLE_SYSTEM_INVALID_HANDLE") )
          __debugbreak();
        __asm { vmovss  xmm4, dword ptr [rbp+90h+var_100.transform+24h] }
        HIDWORD(v67) = 0;
        __asm
        {
          vmovups xmm0, [rsp+190h+var_140]
          vmovss  xmm0, xmm0, xmm4
          vinsertps xmm0, xmm0, dword ptr [rbp+90h+var_100.transform+28h], 90h+emitterOrientationMat
          vinsertps xmm0, xmm0, dword ptr [rbp+90h+var_100.transform+2Ch], 90h+emitterOrientationMat.y
          vmovups [rsp+190h+var_140], xmm0
          vmovups xmmword ptr [rbp+90h+emitterPos.v], xmm0
          vmovss  xmm0, dword ptr [rbp+90h+var_100.transform]
        }
        HIDWORD(v67) = 0;
        __asm
        {
          vmovups xmm3, [rsp+190h+var_140]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+4], 90h+emitterOrientationMat
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+8], 90h+emitterOrientationMat.y
          vmovss  xmm0, dword ptr [rbp+90h+var_100.transform+0Ch]
          vmovups [rsp+190h+var_140], xmm3
          vmovups xmmword ptr [rbp+90h+emitterOrientationMat.x.v], xmm3
        }
        HIDWORD(v67) = 0;
        __asm
        {
          vmovups xmm3, [rsp+190h+var_140]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+10h], 90h+emitterOrientationMat
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+14h], 90h+emitterOrientationMat.y
          vmovss  xmm0, dword ptr [rbp+90h+var_100.transform+18h]
          vmovups [rsp+190h+var_140], xmm3
          vmovups xmmword ptr [rbp+90h+emitterOrientationMat.y.v], xmm3
        }
        HIDWORD(v67) = 0;
        __asm
        {
          vmovups xmm3, [rsp+190h+var_140]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+1Ch], 90h+emitterOrientationMat
          vinsertps xmm3, xmm3, dword ptr [rbp+90h+var_100.transform+20h], 90h+emitterOrientationMat.y
          vmovups [rsp+190h+var_140], xmm3
        }
        HIDWORD(v67) = 0;
        __asm
        {
          vmovups xmm2, [rsp+190h+var_140]
          vmovss  xmm2, xmm2, xmm4
          vinsertps xmm2, xmm2, dword ptr [rbp+90h+var_100.transform+28h], 90h+emitterOrientationMat
          vinsertps xmm2, xmm2, dword ptr [rbp+90h+var_100.transform+2Ch], 90h+emitterOrientationMat.y
          vxorps  xmm0, xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
          vmovups [rsp+190h+var_140], xmm2
          vxorps  xmm2, xmm1, xmm2
          vmovups [rbp+90h+var_50], xmm2
          vmovups xmmword ptr [rbp+90h+emitterOrientationMat.z.v], xmm3
        }
        _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
        __asm
        {
          vmovss  xmm1, dword ptr [r14+121Ch]; desiredHeightOffset
          vmovss  xmm0, dword ptr [rax+40h]; playerZ
        }
        BG_Deploy_ComputeFXOffset(*(float *)&_XMM0, *(float *)&_XMM1, &outResults.transform, (vec3_t *)&v67);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+90h+var_100.transform+24h]
          vaddss  xmm2, xmm0, dword ptr [rsp+190h+var_140]
          vmovss  xmm0, dword ptr [rbp+90h+var_100.transform+2Ch]
          vaddss  xmm4, xmm0, dword ptr [rsp+190h+var_140+8]
          vmovss  xmm1, dword ptr [rbp+90h+var_100.transform+28h]
          vaddss  xmm3, xmm1, dword ptr [rsp+190h+var_140+4]
        }
        HIDWORD(v67) = 0;
        __asm
        {
          vmovups xmm0, [rsp+190h+var_140]
          vmovss  xmm0, xmm0, xmm2
          vinsertps xmm0, xmm0, xmm3, 10h
          vinsertps xmm0, xmm0, xmm4, 20h ; ' '
          vmovups [rbp+90h+var_50], xmm0
        }
        ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v2);
        v64 = ParticleManager::AddSystem(ParticleManager, (LocalClientNum_t)v2, particleSystemDef, &emitterPos, &emitterOrientationMat, time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
        __asm { vmovaps xmm6, [rsp+190h+var_30] }
        v22->equipDeployState.activeFx = v64;
      }
    }
    CG_Deploy_UpdateFX((LocalClientNum_t)v2, &outResults.transform, !outResults.passRangeTest, _R14, &LocalClientGlobals->predictedPlayerState.otherFlags, LocalClientGlobals->time);
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
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  ParticleSystemHandle activeFx; 
  unsigned int v13; 
  __int64 v14; 
  char v17; 
  bool v30; 
  bool v32; 
  bool v33; 
  bool v34; 
  bool m_isHighPlayerCount; 
  ParticleGroupID deployOutOfRangeGroupId; 
  bool v37; 
  vector4 result; 

  v6 = localClientNum;
  if ( !weaponDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 73, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( LocalClientGlobals->equipDeployState.activeFx == PARTICLE_SYSTEM_INVALID_HANDLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 78, ASSERT_TYPE_ASSERT, "(cgameGlob->equipDeployState.activeFx)", (const char *)&queryFormat, "cgameGlob->equipDeployState.activeFx") )
    __debugbreak();
  activeFx = LocalClientGlobals->equipDeployState.activeFx;
  _RBX = NULL;
  v13 = 0;
  if ( g_particleSystemsGeneration[4096 * v6 + (activeFx & 0xFFF)].__all32 == activeFx )
    v13 = activeFx & 0xFFF;
  v14 = (v6 << 12) + v13;
  if ( g_particleSystems[0][v14] >= (ParticleSystem *)0x1000 )
    _RBX = g_particleSystems[0][v14];
  if ( _RBX )
  {
    __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
    Float4x4LoadMat43(transform, &result);
    CG_Deploy_AdjustFXHeight((LocalClientNum_t)v6, weaponDef, transform, &result);
    Particle_AssertFloat4IsNormalized(&result.x);
    Particle_AssertFloat4IsNormalized(&result.y);
    Particle_AssertFloat4IsNormalized(&result.z);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0A8h+result.baseclass_0.x.v]
      vmovups ymm1, ymmword ptr [rsp+0A8h+result.baseclass_0.z.v]
    }
    v17 = 1;
    __asm
    {
      vmovups ymmword ptr [rbx], ymm0
      vmovups ymmword ptr [rbx+20h], ymm1
      vmovups xmm1, xmmword ptr [rbx+20h]
      vshufps xmm4, xmm1, xmmword ptr [rbx+30h], 44h ; 'D'
      vshufps xmm5, xmm1, xmmword ptr [rbx+30h], 0EEh ; 'î'
      vmovups xmm3, xmmword ptr [rbx]
      vshufps xmm6, xmm3, xmmword ptr [rbx+10h], 44h ; 'D'
      vshufps xmm2, xmm3, xmmword ptr [rbx+10h], 0EEh ; 'î'
      vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
      vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+0A8h+result.baseclass_0.y.v], xmm1
      vmovups xmmword ptr [rsp+0A8h+result.baseclass_0.x.v], xmm0
      vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
      vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+0A8h+result.baseclass_0.z.v], xmm0
      vmovups ymm0, ymmword ptr [rsp+0A8h+result.baseclass_0.x.v]
      vmovups xmmword ptr [rsp+0A8h+result.w.v], xmm1
      vmovups ymm1, ymmword ptr [rsp+0A8h+result.baseclass_0.z.v]
      vmovups ymmword ptr [rbx+40h], ymm0
      vmovups ymmword ptr [rbx+60h], ymm1
    }
    v30 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)r_otherFlags, ACTIVE, 0x14u);
    __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    v32 = v30 && !isOutOfRange;
    v33 = !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)r_otherFlags, ACTIVE, 0x14u) && !isOutOfRange;
    v34 = v32 && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)r_otherFlags, ACTIVE, 0x15u);
    if ( v32 )
    {
      if ( isOutOfRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 100, ASSERT_TYPE_ASSERT, "(!(playValidFx && playOutOfRangeFx))", (const char *)&queryFormat, "!(playValidFx && playOutOfRangeFx)") )
        __debugbreak();
      if ( !v33 )
        goto LABEL_35;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 101, ASSERT_TYPE_ASSERT, "(!(playValidFx && playInvalidFx))", (const char *)&queryFormat, "!(playValidFx && playInvalidFx)") )
        __debugbreak();
    }
    if ( v33 && isOutOfRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 102, ASSERT_TYPE_ASSERT, "(!(playInvalidFx && playOutOfRangeFx))", (const char *)&queryFormat, "!(playInvalidFx && playOutOfRangeFx)") )
      __debugbreak();
LABEL_35:
    if ( v34 )
      v17 = v32;
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_equip_deploy.cpp", 103, ASSERT_TYPE_ASSERT, "(playValidIndoorFx ? playValidFx : true)", (const char *)&queryFormat, "playValidIndoorFx ? playValidFx : true") )
      __debugbreak();
    m_isHighPlayerCount = ParticleManager::GetParticleManager(localClientNum)->m_isHighPlayerCount;
    ParticleSystem::EnableEmitterGroup(_RBX, weaponDef->deployValidGroupId, v32, m_isHighPlayerCount);
    ParticleSystem::EnableEmitterGroup(_RBX, weaponDef->deployIndoorGroupId, v34, m_isHighPlayerCount);
    if ( weaponDef->deployOutOfRangeGroupId )
    {
      ParticleSystem::EnableEmitterGroup(_RBX, weaponDef->deployInvalidGroupId, v33, m_isHighPlayerCount);
      deployOutOfRangeGroupId = weaponDef->deployOutOfRangeGroupId;
      v37 = isOutOfRange;
    }
    else if ( v33 || isOutOfRange )
    {
      deployOutOfRangeGroupId = weaponDef->deployInvalidGroupId;
      v37 = 1;
    }
    else
    {
      deployOutOfRangeGroupId = weaponDef->deployInvalidGroupId;
      v37 = 0;
    }
    ParticleSystem::EnableEmitterGroup(_RBX, deployOutOfRangeGroupId, v37, m_isHighPlayerCount);
  }
}

