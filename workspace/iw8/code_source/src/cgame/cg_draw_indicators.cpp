/*
==============
CG_DrawFlashDamage
==============
*/

void __fastcall CG_DrawFlashDamage(const cg_t *cgameGlob)
{
  ?CG_DrawFlashDamage@@YAXPEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_AddHudGrenade
==============
*/

void __fastcall CG_AddHudGrenade(cg_t *cgameGlob, const centity_t *grenadeEnt)
{
  ?CG_AddHudGrenade@@YAXPEAVcg_t@@PEBUcentity_t@@@Z(cgameGlob, grenadeEnt);
}

/*
==============
CG_ClearHudGrenades
==============
*/

void __fastcall CG_ClearHudGrenades(cg_t *cgameGlob)
{
  ?CG_ClearHudGrenades@@YAXPEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_DrawDamageDirectionIndicators
==============
*/

void __fastcall CG_DrawDamageDirectionIndicators(LocalClientNum_t localClientNum)
{
  ?CG_DrawDamageDirectionIndicators@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ShouldDrawDamageDirectionIndicators
==============
*/

bool __fastcall CG_ShouldDrawDamageDirectionIndicators(LocalClientNum_t localClientNum, const cg_t *cgameGlob)
{
  return ?CG_ShouldDrawDamageDirectionIndicators@@YA_NW4LocalClientNum_t@@PEBVcg_t@@@Z(localClientNum, cgameGlob);
}

/*
==============
CG_DrawGrenadeIndicators
==============
*/

void __fastcall CG_DrawGrenadeIndicators(LocalClientNum_t localClientNum)
{
  ?CG_DrawGrenadeIndicators@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_AddHudGrenade
==============
*/
void CG_AddHudGrenade(cg_t *cgameGlob, const centity_t *grenadeEnt)
{
  entityType_s eType; 
  __int64 localClientNum; 
  CgWeaponMap *v6; 
  const Weapon *Weapon; 
  bool inAltWeaponMode; 
  double v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 
  float v13; 
  double Float_Internal_DebugName; 
  float v15; 
  double v16; 
  Material *v17; 
  bool v18; 
  Material *grenadeIconThrowBack; 
  Material *v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  float v24; 
  float v25; 
  double v26; 
  double v27; 
  float v28; 
  double v29; 
  centity_t *LinkToParent; 
  entityType_s v31; 
  __int64 v32; 
  __int64 v33; 
  float outMaxOffset; 
  vec3_t outOrigin; 
  __int64 v36; 

  v36 = -2i64;
  eType = grenadeEnt->nextState.eType;
  if ( eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 612, ASSERT_TYPE_ASSERT, "( ( state->eType == ET_MISSILE ) )", "( state->eType ) = %i", eType) )
    __debugbreak();
  outMaxOffset = grenadeEnt->nextState.lerp.pos.trDelta.v[0];
  if ( (LODWORD(outMaxOffset) & 0x7F800000) == 2139095040 || (outMaxOffset = grenadeEnt->nextState.lerp.pos.trDelta.v[1], (LODWORD(outMaxOffset) & 0x7F800000) == 2139095040) || (outMaxOffset = grenadeEnt->nextState.lerp.pos.trDelta.v[2], (LODWORD(outMaxOffset) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 614, ASSERT_TYPE_SANITY, "( !IS_NAN( ( state->lerp.pos.trDelta )[0] ) && !IS_NAN( ( state->lerp.pos.trDelta )[1] ) && !IS_NAN( ( state->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( state->lerp.pos.trDelta )[0] ) && !IS_NAN( ( state->lerp.pos.trDelta )[1] ) && !IS_NAN( ( state->lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  if ( (*((_BYTE *)&grenadeEnt->nextState.lerp.u.ragdollConstraint + 16) & 0x10) == 0 )
  {
    localClientNum = cgameGlob->localClientNum;
    if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v6 = CgWeaponMap::ms_instance[localClientNum];
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v6, grenadeEnt->nextState.weaponHandle);
    inAltWeaponMode = grenadeEnt->nextState.inAltWeaponMode;
    if ( !BG_HideWarningIcons(Weapon, inAltWeaponMode) && cgameGlob->predictedPlayerState.pm_type < 7 )
    {
      if ( grenadeEnt->nextState.otherEntityNum != cgameGlob->predictedPlayerState.clientNum || (v9 = BG_WarningIconsDelay(Weapon, inAltWeaponMode), *(float *)&v9 <= 0.0) || cgameGlob->time - cgameGlob->predictedPlayerState.deltaTime - grenadeEnt->nextState.lerp.u.anonymous.data[2] > (int)(float)(*(float *)&v9 * 1000.0) )
      {
        v10 = BG_ProjExplosionType(Weapon, inAltWeaponMode);
        if ( BG_GetWeaponType(Weapon, inAltWeaponMode) == WEAPTYPE_GRENADE )
        {
          if ( v10 > 7 )
            return;
          v11 = 133;
          if ( !_bittest(&v11, v10) )
            return;
        }
        else if ( v10 )
        {
          return;
        }
        if ( BG_TimedDetonation(Weapon, inAltWeaponMode) )
        {
          v12 = cgameGlob->localClientNum;
          if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", cgameGlob->localClientNum) )
            __debugbreak();
          if ( (unsigned int)v12 >= CgWeaponSystem::ms_allocatedCount )
          {
            LODWORD(v33) = CgWeaponSystem::ms_allocatedCount;
            LODWORD(v32) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          if ( !CgWeaponSystem::ms_weaponSystemArray[v12] )
          {
            LODWORD(v33) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v33) )
              __debugbreak();
          }
          if ( CgWeaponSystem::ms_weaponSystemArray[v12]->IsGrenadeDangerous(CgWeaponSystem::ms_weaponSystemArray[v12], grenadeEnt) )
          {
            if ( !v10 || v10 == 7 )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed, "bg_maxGrenadeIndicatorSpeed");
              v15 = *(float *)&Float_Internal_DebugName;
              v16 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed, "bg_maxGrenadeIndicatorSpeed");
              v13 = v15 * *(float *)&v16;
            }
            else
            {
              v13 = FLOAT_1_0;
            }
            if ( (float)((float)((float)(grenadeEnt->nextState.lerp.pos.trDelta.v[0] * grenadeEnt->nextState.lerp.pos.trDelta.v[0]) + (float)(grenadeEnt->nextState.lerp.pos.trDelta.v[1] * grenadeEnt->nextState.lerp.pos.trDelta.v[1])) + (float)(grenadeEnt->nextState.lerp.pos.trDelta.v[2] * grenadeEnt->nextState.lerp.pos.trDelta.v[2])) <= v13 && CG_AddHudGrenade_PositionCheck(cgameGlob, grenadeEnt, Weapon, inAltWeaponMode, &outMaxOffset) )
            {
              v17 = BG_DangerIcon(Weapon, inAltWeaponMode);
              v18 = 0;
              if ( !v10 || v10 == 7 )
              {
                if ( cgameGlob->predictedPlayerState.cursorHint == HINT_WEAPON && cgameGlob->predictedPlayerState.cursorHintClass == USE_CLASS_GENTITY && cgameGlob->predictedPlayerState.cursorHintEntIndex == grenadeEnt->nextState.number )
                {
                  v20 = BG_ThrowBackIcon(Weapon, inAltWeaponMode);
                  grenadeIconThrowBack = cgMedia.grenadeIconThrowBack;
                  if ( v20 )
                    grenadeIconThrowBack = v20;
                  v18 = 1;
                  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x33u) )
                    return;
                  goto LABEL_60;
                }
                grenadeIconThrowBack = cgMedia.grenadeIconFrag;
              }
              else
              {
                if ( v10 != 2 )
                {
                  LODWORD(v32) = v10;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 728, ASSERT_TYPE_ASSERT, "( ( projExplosionType == WEAPPROJEXP_FLASHBANG ) )", "( projExplosionType ) = %i", v32) )
                    __debugbreak();
                }
                if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_hudGrenadeIconEnabledFlash, "cg_hudGrenadeIconEnabledFlash") )
                  return;
                grenadeIconThrowBack = cgMedia.grenadeIconFlash;
              }
              if ( v17 )
                grenadeIconThrowBack = v17;
LABEL_60:
              v21 = Sys_InterlockedExchangeAdd((volatile int *)&cgameGlob->hudGrenadeCount, 1);
              v22 = v21;
              if ( (unsigned __int64)v21 < 0x20 )
              {
                if ( (unsigned int)v21 >= 0x20 )
                {
                  LODWORD(v33) = 32;
                  LODWORD(v32) = v21;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 755, ASSERT_TYPE_ASSERT, "(unsigned)( hudGrenadeIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->hudGrenades ) ) + 0 ) )", "hudGrenadeIndex doesn't index cgameGlob->hudGrenades\n\t%i not in [0, %i)", v32, v33) )
                    __debugbreak();
                }
                v23 = v22;
                CG_GetPoseOrigin(&grenadeEnt->pose, &outOrigin);
                if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_LOOP) )
                {
                  cgameGlob->hudGrenades[v23].lerpDistanceAmount = 1.0;
                  v24 = fsqrt((float)((float)((float)(outOrigin.v[1] - cgameGlob->predictedPlayerState.origin.v[1]) * (float)(outOrigin.v[1] - cgameGlob->predictedPlayerState.origin.v[1])) + (float)((float)(outOrigin.v[0] - cgameGlob->predictedPlayerState.origin.v[0]) * (float)(outOrigin.v[0] - cgameGlob->predictedPlayerState.origin.v[0]))) + (float)((float)(outOrigin.v[2] - cgameGlob->predictedPlayerState.origin.v[2]) * (float)(outOrigin.v[2] - cgameGlob->predictedPlayerState.origin.v[2])));
                  v25 = outMaxOffset;
                  if ( outMaxOffset < v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 768, ASSERT_TYPE_ASSERT, "( maxOffset ) >= ( grenadeOffsetLength )", "%s >= %s\n\t%g, %g", "maxOffset", "grenadeOffsetLength", outMaxOffset, v24) )
                    __debugbreak();
                  v26 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance, "cg_hudGrenadeDangerCloseDistance");
                  if ( v24 > *(float *)&v26 )
                  {
                    v27 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance, "cg_hudGrenadeDangerCloseDistance");
                    v28 = v24 - *(float *)&v27;
                    v29 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance, "cg_hudGrenadeDangerCloseDistance");
                    cgameGlob->hudGrenades[v23].lerpDistanceAmount = 1.0 - (float)(v28 / (float)(v25 - *(float *)&v29));
                  }
                }
                else
                {
                  cgameGlob->hudGrenades[v23].lerpDistanceAmount = 0.0;
                }
                cgameGlob->hudGrenades[v23].origin = outOrigin;
                cgameGlob->hudGrenades[v23].material = grenadeIconThrowBack;
                cgameGlob->hudGrenades[v23].isThrowback = v18;
                cgameGlob->hudGrenades[v23].stuckToCharacterNum = 2047;
                if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_DROP) )
                {
                  LinkToParent = CG_Entity_GetLinkToParent(cgameGlob->localClientNum, grenadeEnt);
                  if ( LinkToParent )
                  {
                    while ( (LinkToParent->flags & 1) != 0 )
                    {
                      if ( LinkToParent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
                        __debugbreak();
                      v31 = LinkToParent->nextState.eType;
                      if ( ((v31 - 1) & 0xFFED) == 0 && v31 != ET_ITEM )
                      {
                        cgameGlob->hudGrenades[v23].stuckToCharacterNum = LinkToParent->nextState.number;
                        break;
                      }
                      LinkToParent = CG_Entity_GetLinkToParent(cgameGlob->localClientNum, LinkToParent);
                      if ( !LinkToParent )
                        break;
                    }
                  }
                }
                memset(&outOrigin, 0, sizeof(outOrigin));
              }
              else
              {
                Sys_InterlockedDecrement((volatile int *)&cgameGlob->hudGrenadeCount);
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_AddHudGrenade_PositionCheck
==============
*/
__int64 CG_AddHudGrenade_PositionCheck(cg_t *cgameGlob, const centity_t *grenadeEnt, const Weapon *weapon, bool isAlternate, float *outMaxOffset)
{
  float v9; 
  float v10; 
  float v11; 
  unsigned int weaponIdx; 
  weapProjExposion_t v13; 
  const dvar_t *v14; 
  double GrenadeDangerIconDistance; 
  float value; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  unsigned __int8 v19; 
  __int64 v21; 
  vec3_t outOrigin; 
  __int64 v23; 

  v23 = -2i64;
  if ( !grenadeEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 530, ASSERT_TYPE_ASSERT, "(grenadeEnt)", (const char *)&queryFormat, "grenadeEnt") )
    __debugbreak();
  CG_GetPoseOrigin(&grenadeEnt->pose, &outOrigin);
  v9 = outOrigin.v[0] - cgameGlob->predictedPlayerState.origin.v[0];
  v10 = outOrigin.v[1] - cgameGlob->predictedPlayerState.origin.v[1];
  v11 = outOrigin.v[2] - cgameGlob->predictedPlayerState.origin.v[2];
  weaponIdx = weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v21) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v21, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[(unsigned __int16)weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v13 = BG_ProjExplosionType(weapon, isAlternate);
  if ( v13 == WEAPPROJEXP_GRENADE || v13 == WEAPPROJEXP_HEAVY )
  {
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 329, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( cls.m_activeGameHardcoreSetting )
    {
      value = 0.0;
    }
    else
    {
      v17 = DCONST_DVARMPFLT_cg_hudGrenadeIconMaxRangeFrag;
      if ( !DCONST_DVARMPFLT_cg_hudGrenadeIconMaxRangeFrag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconMaxRangeFrag") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      value = v17->current.value;
    }
    GrenadeDangerIconDistance = BG_GetGrenadeDangerIconDistance(weapon, isAlternate, value);
    if ( *(float *)&GrenadeDangerIconDistance > 0.0 )
      *(float *)&GrenadeDangerIconDistance = *(float *)&GrenadeDangerIconDistance + 23.0;
  }
  else
  {
    if ( v13 != WEAPPROJEXP_FLASHBANG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 558, ASSERT_TYPE_ASSERT, "(projExplosionType == WEAPPROJEXP_FLASHBANG)", (const char *)&queryFormat, "projExplosionType == WEAPPROJEXP_FLASHBANG") )
      __debugbreak();
    v14 = DCONST_DVARFLT_cg_hudGrenadeIconMaxRangeFlash;
    if ( !DCONST_DVARFLT_cg_hudGrenadeIconMaxRangeFlash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconMaxRangeFlash") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    GrenadeDangerIconDistance = BG_GetGrenadeDangerIconDistance(weapon, isAlternate, v14->current.value);
  }
  if ( outMaxOffset )
    *outMaxOffset = *(float *)&GrenadeDangerIconDistance;
  if ( (float)((float)((float)(v9 * v9) + (float)(v10 * v10)) + (float)(v11 * v11)) > (float)(*(float *)&GrenadeDangerIconDistance * *(float *)&GrenadeDangerIconDistance) )
    goto LABEL_38;
  if ( v11 >= 0.0 )
  {
    if ( !BG_WeaponSticksToWalls(weapon, isAlternate) )
    {
      CG_AddHudGrenade_UpdateHudGrenadeMaxHeight(cgameGlob);
      if ( cgameGlob->hudGrenadeMaxHeightIsDirty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 584, ASSERT_TYPE_ASSERT, "(!cgameGlob->hudGrenadeMaxHeightIsDirty)", (const char *)&queryFormat, "!cgameGlob->hudGrenadeMaxHeightIsDirty") )
        __debugbreak();
      if ( v11 > cgameGlob->hudGrenadeMaxHeight )
        goto LABEL_38;
    }
LABEL_45:
    v19 = 1;
    goto LABEL_39;
  }
  v18 = DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight;
  if ( !DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconMaxHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v11 >= COERCE_FLOAT(v18->current.integer ^ _xmm) )
    goto LABEL_45;
LABEL_38:
  v19 = 0;
LABEL_39:
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v19;
}

/*
==============
CG_AddHudGrenade_UpdateHudGrenadeMaxHeight
==============
*/
void CG_AddHudGrenade_UpdateHudGrenadeMaxHeight(cg_t *cgameGlob)
{
  const dvar_t *v2; 
  float v3; 
  __int32 v4; 
  float v5; 
  hkMemoryAllocator *v6; 
  hkMemoryAllocator *v7; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v10; 
  vec3_t end; 
  PhysicsQuery_RaycastHit hit; 

  v10 = -2i64;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 465, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_ENTITY_WORKER_GRENADE_HUD);
  if ( cgameGlob->hudGrenadeMaxHeightIsDirty )
  {
    v2 = DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight;
    if ( !DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconMaxHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    v3 = v2->current.value + cgameGlob->predictedPlayerState.viewHeightCurrent;
    cgameGlob->hudGrenadeMaxHeight = v3;
    cgameGlob->hudGrenadeMaxHeightIsDirty = 0;
    *(_QWORD *)end.v = *(_QWORD *)cgameGlob->predictedPlayerState.origin.v;
    end.v[2] = v3 + cgameGlob->predictedPlayerState.origin.v[2];
    v4 = 3 * cgameGlob->localClientNum + 2;
    extendedData.ignoreBodies = NULL;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = 9441297;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
    HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
    PhysicsQuery_AddEntityChainToIgnoreList(cgameGlob->predictedPlayerState.clientNum, &ignoreBodies, 1, 1, 0, 1, 1);
    ignoreBodies.m_ignoreTransparentVolumes = 1;
    CG_EntityWorkers_AcquireReadLock_Physics(BASE);
    PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v4, &cgameGlob->predictedPlayerState.origin, &end, &extendedData, &hit);
    CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
    if ( hit.isValid && hit.fraction < 1.0 )
    {
      v5 = hit.position.v[2] - cgameGlob->predictedPlayerState.origin.v[2];
      cgameGlob->hudGrenadeMaxHeight = v5;
      if ( v5 > v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 505, ASSERT_TYPE_ASSERT, "( cgameGlob->hudGrenadeMaxHeight ) <= ( maxHeight )", "%s <= %s\n\t%g, %g", "cgameGlob->hudGrenadeMaxHeight", "maxHeight", v5, v3) )
        __debugbreak();
    }
    v6 = hkMemHeapAllocator();
    ignoreBodies.m_ignoreBodies.m_size = 0;
    if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v6, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    ignoreBodies.m_ignoreBodies.m_data = NULL;
    ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v7 = hkMemHeapAllocator();
    ignoreBodies.m_ignoreEntities.m_size = 0;
    if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v7, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  Sys_LeaveCriticalSection(CRITSECT_ENTITY_WORKER_GRENADE_HUD);
}

/*
==============
CG_ClearHudGrenades
==============
*/
void CG_ClearHudGrenades(cg_t *cgameGlob)
{
  cgameGlob->hudGrenadeCount = 0;
  cgameGlob->hudGrenadeMaxHeightIsDirty = 1;
  cgameGlob->hudGrenadeMaxHeight = 3.4028235e38;
}

/*
==============
CG_DrawDamageDirectionIndicators
==============
*/
void CG_DrawDamageDirectionIndicators(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int entity; 
  bool v4; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v6; 
  double v7; 
  float v8; 
  double v9; 
  const dvar_t *v10; 
  float value; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  viewDamage_t *viewDamage; 
  int v20; 
  int duration; 
  unsigned int type; 
  Material *damageMaterial; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  double v27; 
  float v28; 
  __int128 v30; 
  DamageFeedbackType v32; 
  float yaw; 
  double Float_Internal_DebugName; 
  float v35; 
  double v36; 
  float v37; 
  double v38; 
  float v39; 
  double v40; 
  int v41; 
  double v42; 
  vec2_t *p_verts; 
  double v44; 
  float v45; 
  double v46; 
  float v47; 
  double v48; 
  int v49; 
  float optionalOutData; 
  vec4_t *color; 
  Material *material; 
  Material *materiala; 
  bool v54; 
  float x; 
  float y; 
  int result[2]; 
  vec4_t v58; 
  int v59[8]; 
  int v60[8]; 
  vec2_t verts; 
  int v62; 
  float v63; 
  int v64; 
  float v65; 
  float v66; 
  float v67; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->nextSnap && !CG_GetFlashbangedRemainingTime(localClientNum) && (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 && (!CG_GetWeapReticleZoom(LocalClientGlobals, NULL) || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_hudDamageIconInScope, "cg_hudDamageIconInScope")) && (!CG_GetOmnvar_IntegerByName(localClientNum, "post_game_state", result, NULL, NULL) || !result[0] || (unsigned int)(result[0] - 3) <= 1) )
  {
    entity = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.vehicleState.entity;
    v4 = entity && entity != 2047 || CG_Vehicle_RemoteControlledVehicleType(localClientNum, NULL) != VEH_TYPE_COUNT;
    v54 = v4;
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    if ( CG_GetWeapReticleZoom(LocalClientGlobals, NULL) )
    {
      v6 = DCONST_DVARBOOL_cg_hudDamageIconInScope;
      if ( !DCONST_DVARBOOL_cg_hudDamageIconInScope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudDamageIconInScope") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( !v6->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 205, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_cg_hudDamageIconInScope, \"cg_hudDamageIconInScope\" ))", (const char *)&queryFormat, "Dconst_GetBool( cg_hudDamageIconInScope )") )
        __debugbreak();
      CG_CalcCrosshairPosition(LocalClientGlobals, 640.0, 480.0, &x, &y);
      v7 = ScrPlace_ApplyX(ActivePlacement, x, 2);
      v8 = y;
    }
    else
    {
      v7 = ScrPlace_ApplyX(ActivePlacement, 0.0, 2);
      v8 = 0.0;
    }
    x = *(float *)&v7;
    v9 = ScrPlace_ApplyY(ActivePlacement, v8, 2);
    v10 = DCONST_DVARFLT_cg_hudDamageIconWidth;
    y = *(float *)&v9;
    if ( !DCONST_DVARFLT_cg_hudDamageIconWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudDamageIconWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    value = v10->current.value;
    v12 = DCONST_DVARFLT_cg_hudDamageIconHeight;
    if ( !DCONST_DVARFLT_cg_hudDamageIconHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudDamageIconHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.value;
    v14 = DCONST_DVARFLT_cg_hudDamageIconOffset;
    if ( !DCONST_DVARFLT_cg_hudDamageIconOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudDamageIconOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = ActivePlacement->scaleVirtualToReal.v[1];
    v16 = (float)(cg_hudSplitscreenScale * v14->current.value) * v15;
    v17 = (float)((float)(cg_hudSplitscreenScale * value) * ActivePlacement->scaleVirtualToReal.v[0]) * 0.5;
    v62 = LODWORD(v17) ^ _xmm;
    v64 = LODWORD(v17) ^ _xmm;
    v18 = 12i64;
    v58 = colorWhite;
    verts.v[0] = v17;
    verts.v[1] = (float)((float)(cg_hudSplitscreenScale * v13) * v15) + v16;
    v63 = verts.v[1];
    v65 = v16;
    v66 = v17;
    v67 = v16;
    viewDamage = LocalClientGlobals->viewDamage;
    *(_QWORD *)result = 12i64;
    do
    {
      if ( v4 == viewDamage->inVehicle )
      {
        v20 = LocalClientGlobals->time - viewDamage->time;
        if ( v20 > 0 )
        {
          duration = viewDamage->duration;
          if ( v20 < duration )
          {
            type = viewDamage->type;
            if ( type != 5 )
            {
              if ( type >= 7 )
              {
                LODWORD(material) = 7;
                LODWORD(color) = viewDamage->type;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( damageFeedbackType ) < (unsigned)( DamageFeedbackType::COUNT )", "damageFeedbackType doesn't index DamageFeedbackType::COUNT\n\t%i not in [0, %i)", color, material) )
                  __debugbreak();
              }
              damageMaterial = cgMedia.damageMaterial;
              v24 = type - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  v26 = v25 - 1;
                  if ( v26 )
                  {
                    if ( v26 == 1 )
                      damageMaterial = cgMedia.damageMaterialArmor;
                  }
                  else
                  {
                    damageMaterial = cgMedia.damageMaterialRicochet;
                  }
                }
                else
                {
                  damageMaterial = cgMedia.damageMaterialStun;
                }
              }
              else
              {
                damageMaterial = cgMedia.damageMaterialWhizby;
              }
              v27 = vectoyaw((const vec2_t *)&LocalClientGlobals->refdef.view.axis);
              v28 = *(float *)&v27 - viewDamage->yaw;
              v30 = LODWORD(FLOAT_2_0);
              *(float *)&v30 = 2.0 - (float)((float)((float)v20 * 2.0) / (float)duration);
              _XMM0 = v30;
              __asm { vminss  xmm1, xmm0, xmm13 }
              v58.v[3] = *(float *)&_XMM1;
              v32 = viewDamage->type;
              if ( v32 == DODGE )
              {
                yaw = viewDamage->yaw;
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyWidth, "hudWhizbyWidth");
                v35 = (float)((float)(*(float *)&Float_Internal_DebugName * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0]) * 0.5;
                v36 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyHeight, "hudWhizbyHeight");
                v37 = (float)(*(float *)&v36 * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[1];
                sinf_0(0.017453292 * yaw);
                v38 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyAddOffset, "hudWhizbyAddOffset");
                v39 = COERCE_FLOAT(COERCE_UNSIGNED_INT(0.017453292 * yaw) & _xmm) * *(float *)&v38;
                v40 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyOffset, "hudWhizbyOffset");
                *(float *)&v41 = (float)((float)(*(float *)&v40 + v39) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0];
                *(float *)&v59[1] = *(float *)&v41 + v37;
                *(float *)&v59[3] = *(float *)&v41 + v37;
                *(float *)v59 = v35;
                v59[2] = LODWORD(v35) ^ _xmm;
                v59[4] = LODWORD(v35) ^ _xmm;
                v59[5] = v41;
                *(float *)&v59[6] = v35;
                v59[7] = v41;
                v42 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyAlphaMult, "hudWhizbyAlphaMult");
                materiala = damageMaterial;
                p_verts = (vec2_t *)v59;
                optionalOutData = yaw;
                v58.v[3] = *(float *)&v42 * v58.v[3];
              }
              else
              {
                if ( v32 == (COUNT|DODGE) )
                {
                  v44 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudRicochetDamageIconWidth, "cg_hudRicochetDamageIconWidth");
                  v45 = (float)((float)(*(float *)&v44 * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0]) * 0.5;
                  v46 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudRicochetDamageIconHeight, "cg_hudRicochetDamageIconHeight");
                  v47 = (float)(*(float *)&v46 * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[1];
                  v48 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudRicochetDamageIconOffset, "cg_hudRicochetDamageIconOffset");
                  *(float *)&v49 = (float)(*(float *)&v48 * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[1];
                  *(float *)&v60[1] = *(float *)&v49 + v47;
                  *(float *)&v60[3] = *(float *)&v49 + v47;
                  *(float *)v60 = v45;
                  v60[2] = LODWORD(v45) ^ _xmm;
                  v60[4] = LODWORD(v45) ^ _xmm;
                  v60[5] = v49;
                  *(float *)&v60[6] = v45;
                  v60[7] = v49;
                  p_verts = (vec2_t *)v60;
                }
                else
                {
                  p_verts = &verts;
                }
                materiala = damageMaterial;
                optionalOutData = v28;
              }
              CG_DrawRotatedQuadPic(ActivePlacement, x, y, p_verts, optionalOutData, &v58, materiala);
              v18 = *(_QWORD *)result;
              v4 = v54;
            }
          }
        }
      }
      ++viewDamage;
      *(_QWORD *)result = --v18;
    }
    while ( v18 );
  }
}

/*
==============
CG_DrawFlashDamage
==============
*/
void CG_DrawFlashDamage(const cg_t *cgameGlob)
{
  __int128 v3; 
  const dvar_t *v4; 
  __int128 v5; 
  int v_dmg_stun_time; 
  int time; 
  __int128 v8; 
  float v9; 
  LocalClientNum_t localClientNum; 
  const ScreenPlacement *ActivePlacement; 
  vec4_t color; 

  if ( cgameGlob->nextSnap )
  {
    _XMM8 = 0i64;
    v3 = 0i64;
    if ( cgameGlob->v_dmg_time > cgameGlob->time )
    {
      v4 = DCONST_DVARMPBOOL_cg_drawDamageFlash;
      if ( !DCONST_DVARMPBOOL_cg_drawDamageFlash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDamageFlash") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled )
      {
        v5 = 0i64;
        *(float *)&v5 = (float)((float)(cgameGlob->v_dmg_time - cgameGlob->time) * cgameGlob->v_dmg_pitch) * 0.0020000001;
        v3 = v5 & _xmm;
      }
    }
    v_dmg_stun_time = cgameGlob->v_dmg_stun_time;
    time = cgameGlob->time;
    if ( v_dmg_stun_time > time )
    {
      v8 = 0i64;
      *(float *)&v8 = (float)((float)(v_dmg_stun_time - time) * cgameGlob->v_dmg_pitch) * 0.0020000001;
      _XMM8 = v8 & _xmm;
    }
    if ( *(float *)&v3 != 0.0 )
      goto LABEL_14;
    if ( *(float *)&_XMM8 == 0.0 )
      return;
    if ( *(float *)&v3 == 0.0 )
    {
      v9 = FLOAT_1_0;
      color.v[1] = FLOAT_1_0;
      color.v[2] = FLOAT_1_0;
    }
    else
    {
LABEL_14:
      v9 = FLOAT_0_2;
      color.v[1] = 0.0;
      color.v[2] = 0.0;
      _XMM8 = v3;
    }
    localClientNum = cgameGlob->localClientNum;
    color.v[0] = v9;
    __asm { vminss  xmm0, xmm8, cs:__real@40a00000 }
    color.v[3] = *(float *)&_XMM0 * 0.14;
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    UI_FillRectPhysical(ActivePlacement->realViewportPosition.v[0], ActivePlacement->realViewportPosition.v[1], ActivePlacement->realViewportSize.v[0], ActivePlacement->realViewportSize.v[1], &color);
  }
}

/*
==============
CG_DrawGrenadeIndicators
==============
*/
void CG_DrawGrenadeIndicators(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const cg_t *v3; 
  VehicleType v4; 
  const ScreenPlacement *ActivePlacement; 
  double v6; 
  float v7; 
  double v8; 
  unsigned int v9; 
  bool v10; 
  __m128 sizeLerpValue; 
  __int64 v12; 
  __m128 v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  __m128 current; 
  const dvar_t *v17; 
  __m128 v18; 
  double Float_Internal_DebugName; 
  float v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  double v26; 
  bool result; 
  float x; 
  float y; 
  vec4_t color; 
  vec3_t grenadeOffset; 
  __m128 v32; 
  __m128 v33; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals;
  if ( LocalClientGlobals->nextSnap && LocalClientGlobals->hudGrenadeCount && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) && (v3->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 && v3->predictedPlayerState.pm_type != 5 )
  {
    if ( v3 == (const cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v3->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    {
      v4 = CG_Vehicle_RemoteControlledVehicleType(localClientNum, NULL);
      if ( v4 != VEH_PLANE && v4 != VEH_HELICOPTER )
      {
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        if ( CG_GetWeapReticleZoom(v3, NULL) )
        {
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_hudGrenadeIconInScope, "cg_hudGrenadeIconInScope") )
            return;
          CG_CalcCrosshairPosition(v3, 640.0, 480.0, &x, &y);
          v6 = ScrPlace_ApplyX(ActivePlacement, x, 2);
          v7 = y;
        }
        else
        {
          v6 = ScrPlace_ApplyX(ActivePlacement, 0.0, 2);
          v7 = 0.0;
        }
        x = *(float *)&v6;
        v8 = ScrPlace_ApplyY(ActivePlacement, v7, 2);
        v9 = 0;
        y = *(float *)&v8;
        CG_GetOmnvar_BooleanByName(localClientNum, "ui_realism_hud", &result, NULL, NULL);
        if ( v3->hudGrenadeCount )
        {
          do
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_DROP) && v3->hudGrenades[v9].stuckToCharacterNum == v3->predictedPlayerState.clientNum )
            {
              v10 = 1;
              sizeLerpValue = (__m128)LODWORD(FLOAT_1_0);
            }
            else
            {
              v10 = 0;
              sizeLerpValue = (__m128)LODWORD(v3->hudGrenades[v9].lerpDistanceAmount);
            }
            v12 = v9;
            v13 = _mm_shuffle_ps(sizeLerpValue, sizeLerpValue, 0);
            grenadeOffset.v[0] = v3->hudGrenades[v12].origin.v[0] - v3->predictedPlayerState.origin.v[0];
            grenadeOffset.v[1] = v3->hudGrenades[v12].origin.v[1] - v3->predictedPlayerState.origin.v[1];
            grenadeOffset.v[2] = v3->hudGrenades[v12].origin.v[2] - v3->predictedPlayerState.origin.v[2];
            if ( v3->hudGrenades[v12].isThrowback )
            {
              v14 = DCONST_DVARVEC4_cg_hudGrenadeColorThrowback;
              if ( !DCONST_DVARVEC4_cg_hudGrenadeColorThrowback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeColorThrowback") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v14);
              color = v14->current.vector;
            }
            else if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_LOOP) )
            {
              v15 = DCONST_DVARVEC4_cg_hudGrenadeColorInProximity;
              if ( !DCONST_DVARVEC4_cg_hudGrenadeColorInProximity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeColorInProximity") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v15);
              current = (__m128)v15->current;
              v17 = DCONST_DVARVEC4_cg_hudGrenadeColorDangerClose;
              v32 = current;
              if ( !DCONST_DVARVEC4_cg_hudGrenadeColorDangerClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeColorDangerClose") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v17);
              v18 = (__m128)v17->current;
              color = (vec4_t)_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v18, v32), v13), v32);
              v33 = v18;
            }
            else
            {
              color = colorWhite;
            }
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadePointerPulseMax, "cg_hudGrenadePointerPulseMax");
            v20 = *(float *)&Float_Internal_DebugName;
            v21 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadePointerPulseMin, "cg_hudGrenadePointerPulseMin");
            v22 = (float)(v20 - *(float *)&v21) * 0.5;
            v23 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadePointerPulseMin, "cg_hudGrenadePointerPulseMin");
            v24 = *(float *)&v23 + v22;
            v25 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadePointerPulseFreq, "cg_hudGrenadePointerPulseFreq");
            color.v[3] = (float)(sinf_0(*(float *)&v25 * (float)((float)v3->time * 0.0062831854)) * v22) + v24;
            v26 = I_fclamp(color.v[3], 0.0, 1.0);
            color.v[3] = *(float *)&v26;
            if ( !result )
            {
              if ( !v10 )
                DrawGrenadePointer(localClientNum, x, y, &grenadeOffset, &color);
              DrawGrenadeIcon(localClientNum, x, y, v10, &grenadeOffset, sizeLerpValue.m128_f32[0], &color, v3->hudGrenades[v12].material);
            }
            ++v9;
          }
          while ( v9 < v3->hudGrenadeCount );
        }
      }
    }
  }
}

/*
==============
CG_ShouldDrawDamageDirectionIndicators
==============
*/
bool CG_ShouldDrawDamageDirectionIndicators(LocalClientNum_t localClientNum, const cg_t *cgameGlob)
{
  int result; 

  return cgameGlob->nextSnap && !CG_GetFlashbangedRemainingTime(localClientNum) && (cgameGlob->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 && (!CG_GetWeapReticleZoom(cgameGlob, NULL) || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_hudDamageIconInScope, "cg_hudDamageIconInScope")) && (!CG_GetOmnvar_IntegerByName(localClientNum, "post_game_state", &result, NULL, NULL) || !result || (unsigned int)(result - 3) <= 1);
}

/*
==============
DrawGrenadeIcon
==============
*/
void DrawGrenadeIcon(LocalClientNum_t localClientNum, float centerX, float centerY, const bool isStuckToLocalPlayer, const vec3_t *grenadeOffset, const float sizeLerpValue, const vec4_t *color, Material *material)
{
  const dvar_t *v8; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v13; 
  float value; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  float v20; 
  const dvar_t *v21; 
  const char *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  CgHandler *Handler; 
  float v32; 
  double v33; 
  float v34; 
  float s; 
  float c; 
  vec3_t inOutViewAngles; 
  WorldUpReferenceFrame v38; 
  vec2_t verts; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 

  v8 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    if ( CL_IsRenderingSplitScreen() )
    {
      v13 = DCONST_DVARFLT_cg_hudGrenadeIconWidthMinSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconWidthMinSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconWidthMinSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      value = v13->current.value;
      v15 = DCONST_DVARFLT_cg_hudGrenadeIconHeightMinSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconHeightMinSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconHeightMinSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v16 = v15->current.value;
      v17 = DCONST_DVARFLT_cg_hudGrenadeIconWidthSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconWidthSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconWidthSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      v18 = v17->current.value;
      v19 = DCONST_DVARFLT_cg_hudGrenadeIconHeightSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconHeightSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconHeightSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v20 = v19->current.value;
      v21 = DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen;
      if ( DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen )
        goto LABEL_36;
      v22 = "cg_hudGrenadeIconOffsetSplitscreen";
    }
    else
    {
      v23 = DCONST_DVARFLT_cg_hudGrenadeIconWidthMin;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconWidthMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconWidthMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      value = v23->current.value;
      v24 = DCONST_DVARFLT_cg_hudGrenadeIconHeightMin;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconHeightMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconHeightMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      v16 = v24->current.value;
      v25 = DCONST_DVARFLT_cg_hudGrenadeIconWidth;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      v18 = v25->current.value;
      v26 = DCONST_DVARFLT_cg_hudGrenadeIconHeight;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      v20 = v26->current.value;
      v21 = DCONST_DVARFLT_cg_hudGrenadeIconOffset;
      if ( DCONST_DVARFLT_cg_hudGrenadeIconOffset )
        goto LABEL_36;
      v22 = "cg_hudGrenadeIconOffset";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v22) )
      __debugbreak();
LABEL_36:
    Dvar_CheckFrontendServerThread(v21);
    v27 = v21->current.value;
    v28 = (float)((float)(1.0 - sizeLerpValue) * value) + (float)(v18 * sizeLerpValue);
    v29 = (float)((float)(1.0 - sizeLerpValue) * v16) + (float)(v20 * sizeLerpValue);
    v30 = 0.0;
    if ( BG_IsPlayerZeroG(&LocalClientGlobals->predictedPlayerState) )
    {
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v38, &LocalClientGlobals->predictedPlayerState, Handler);
      inOutViewAngles.v[0] = 0.0;
      inOutViewAngles.v[1] = 0.0;
      inOutViewAngles.v[2] = 0.0;
      BG_CalcLinkedViewValues(&LocalClientGlobals->predictedPlayerState, &inOutViewAngles);
      WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v38, &inOutViewAngles);
      v32 = inOutViewAngles.v[1];
    }
    else
    {
      v32 = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
    }
    if ( !isStuckToLocalPlayer )
    {
      v33 = vectoyaw((const vec2_t *)grenadeOffset);
      v34 = *(float *)&v33 - v32;
      AngleNormalize360(*(float *)&v33 - v32);
      v30 = v34;
    }
    FastSinCos(v30 * 0.017453292, &s, &c);
    v44 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 * 0.5) ^ _xmm) - (float)(v27 * s)) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0]) + centerX;
    verts.v[0] = v44;
    v42 = (float)((float)((float)((float)(v28 * 0.5) - (float)(v27 * s)) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0]) + centerX;
    v40 = v42;
    v41 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 * 0.5) ^ _xmm) - (float)(v27 * c)) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[1]) + centerY;
    verts.v[1] = v41;
    v45 = (float)((float)((float)((float)(v29 * 0.5) - (float)(v27 * c)) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[1]) + centerY;
    v43 = v45;
    CG_Draw_UpdateScramblerState(LocalClientGlobals, localClientNum);
    if ( !CG_Draw_IsScramblingActive(localClientNum) )
      R_AddCmdDrawQuadPic(&verts, color, material);
  }
}

/*
==============
DrawGrenadePointer
==============
*/
void DrawGrenadePointer(LocalClientNum_t localClientNum, float centerX, float centerY, const vec3_t *grenadeOffset, const vec4_t *color)
{
  const dvar_t *v5; 
  cg_t *LocalClientGlobals; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v10; 
  float value; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  const char *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  CgHandler *Handler; 
  float v24; 
  double v25; 
  float v26; 
  double v27; 
  float v28; 
  float v29; 
  float s; 
  float c; 
  vec3_t inOutViewAngles; 
  WorldUpReferenceFrame v33; 
  vec2_t verts; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 

  v5 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    if ( CL_IsRenderingSplitScreen() )
    {
      v10 = DCONST_DVARFLT_cg_hudGrenadePointerWidthSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadePointerWidthSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadePointerWidthSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      value = v10->current.value;
      v12 = DCONST_DVARFLT_cg_hudGrenadePointerHeightSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadePointerHeightSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadePointerHeightSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      v13 = v12->current.value;
      v14 = DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconOffsetSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v15 = v14->current.value;
      v16 = DCONST_DVARVEC2_cg_hudGrenadePointerPivotSplitscreen;
      if ( DCONST_DVARVEC2_cg_hudGrenadePointerPivotSplitscreen )
        goto LABEL_30;
      v17 = "cg_hudGrenadePointerPivotSplitscreen";
    }
    else
    {
      v18 = DCONST_DVARFLT_cg_hudGrenadePointerWidth;
      if ( !DCONST_DVARFLT_cg_hudGrenadePointerWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadePointerWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      value = v18->current.value;
      v19 = DCONST_DVARFLT_cg_hudGrenadePointerHeight;
      if ( !DCONST_DVARFLT_cg_hudGrenadePointerHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadePointerHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v13 = v19->current.value;
      v20 = DCONST_DVARFLT_cg_hudGrenadeIconOffset;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      v15 = v20->current.value;
      v16 = DCONST_DVARVEC2_cg_hudGrenadePointerPivot;
      if ( DCONST_DVARVEC2_cg_hudGrenadePointerPivot )
        goto LABEL_30;
      v17 = "cg_hudGrenadePointerPivot";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v17) )
      __debugbreak();
LABEL_30:
    Dvar_CheckFrontendServerThread(v16);
    v21 = v16->current.vector.v[1];
    v22 = v16->current.value;
    if ( BG_IsPlayerZeroG(&LocalClientGlobals->predictedPlayerState) )
    {
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v33, &LocalClientGlobals->predictedPlayerState, Handler);
      inOutViewAngles.v[0] = 0.0;
      inOutViewAngles.v[1] = 0.0;
      inOutViewAngles.v[2] = 0.0;
      BG_CalcLinkedViewValues(&LocalClientGlobals->predictedPlayerState, &inOutViewAngles);
      WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v33, &inOutViewAngles);
      v24 = inOutViewAngles.v[1];
    }
    else
    {
      v24 = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
    }
    v25 = vectoyaw((const vec2_t *)grenadeOffset);
    v26 = *(float *)&v25 - v24;
    v27 = AngleNormalize360(*(float *)&v25 - v24);
    FastSinCos(*(float *)&v27 * 0.017453292, &s, &c);
    v28 = centerX - (float)((float)((float)(v15 * s) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0]);
    v29 = (float)((float)(v15 * c) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[1];
    v39 = (float)(COERCE_FLOAT(LODWORD(v22) ^ _xmm) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0];
    verts.v[0] = v39;
    v37 = (float)((float)(value - v22) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0];
    v35 = v37;
    v36 = (float)(COERCE_FLOAT(LODWORD(v21) ^ _xmm) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[1];
    verts.v[1] = v36;
    v40 = (float)((float)(v13 - v21) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[1];
    v38 = v40;
    CG_Draw_UpdateScramblerState(LocalClientGlobals, localClientNum);
    if ( !CG_Draw_IsScramblingActive(localClientNum) )
      CG_DrawRotatedQuadPic(ActivePlacement, v28, centerY - v29, &verts, COERCE_FLOAT(LODWORD(v26) ^ _xmm), color, cgMedia.grenadePointer);
  }
}

