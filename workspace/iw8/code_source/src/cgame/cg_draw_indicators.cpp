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
  CgWeaponMap *v12; 
  const Weapon *Weapon; 
  bool inAltWeaponMode; 
  unsigned int v17; 
  int v18; 
  __int64 v19; 
  bool v21; 
  bool v22; 
  Material *v33; 
  char v34; 
  Material *grenadeIconThrowBack; 
  Material *v36; 
  int v37; 
  __int64 v38; 
  centity_t *LinkToParent; 
  entityType_s v61; 
  __int64 v66; 
  __int64 v67; 
  float outMaxOffset; 
  vec3_t outOrigin; 
  __int64 v70; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RDI = grenadeEnt;
  _RBX = cgameGlob;
  eType = grenadeEnt->nextState.eType;
  if ( eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 612, ASSERT_TYPE_ASSERT, "( ( state->eType == ET_MISSILE ) )", "( state->eType ) = %i", eType) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1B8h]
    vmovss  [rsp+0D8h+outMaxOffset], xmm0
  }
  if ( (LODWORD(outMaxOffset) & 0x7F800000) == 2139095040 )
    goto LABEL_84;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1BCh]
    vmovss  [rsp+0D8h+outMaxOffset], xmm0
  }
  if ( (LODWORD(outMaxOffset) & 0x7F800000) == 2139095040 )
    goto LABEL_84;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1C0h]
    vmovss  [rsp+0D8h+outMaxOffset], xmm0
  }
  if ( (LODWORD(outMaxOffset) & 0x7F800000) == 2139095040 )
  {
LABEL_84:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 614, ASSERT_TYPE_SANITY, "( !IS_NAN( ( state->lerp.pos.trDelta )[0] ) && !IS_NAN( ( state->lerp.pos.trDelta )[1] ) && !IS_NAN( ( state->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( state->lerp.pos.trDelta )[0] ) && !IS_NAN( ( state->lerp.pos.trDelta )[1] ) && !IS_NAN( ( state->lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  if ( (*((_BYTE *)&_RDI->nextState.lerp.u.ragdollConstraint + 16) & 0x10) == 0 )
  {
    localClientNum = _RBX->localClientNum;
    if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v12 = CgWeaponMap::ms_instance[localClientNum];
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v12, _RDI->nextState.weaponHandle);
    inAltWeaponMode = _RDI->nextState.inAltWeaponMode;
    if ( !BG_HideWarningIcons(Weapon, inAltWeaponMode) && _RBX->predictedPlayerState.pm_type < 7 )
    {
      if ( _RDI->nextState.otherEntityNum != _RBX->predictedPlayerState.clientNum )
        goto LABEL_21;
      *(double *)&_XMM0 = BG_WarningIconsDelay(Weapon, inAltWeaponMode);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm0, xmm1
      }
      if ( v21 || v22 )
        goto LABEL_21;
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@447a0000
        vcvttss2si ecx, xmm0
      }
      if ( _RBX->time - _RBX->predictedPlayerState.deltaTime - _RDI->nextState.lerp.u.anonymous.data[2] > _ECX )
      {
LABEL_21:
        v17 = BG_ProjExplosionType(Weapon, inAltWeaponMode);
        if ( BG_GetWeaponType(Weapon, inAltWeaponMode) == WEAPTYPE_GRENADE )
        {
          if ( v17 > 7 )
            goto LABEL_81;
          v18 = 133;
          if ( !_bittest(&v18, v17) )
            goto LABEL_81;
        }
        else if ( v17 )
        {
          goto LABEL_81;
        }
        if ( BG_TimedDetonation(Weapon, inAltWeaponMode) )
        {
          v19 = _RBX->localClientNum;
          if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", _RBX->localClientNum) )
            __debugbreak();
          if ( (unsigned int)v19 >= CgWeaponSystem::ms_allocatedCount )
          {
            LODWORD(v67) = CgWeaponSystem::ms_allocatedCount;
            LODWORD(v66) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v66, v67) )
              __debugbreak();
          }
          if ( !CgWeaponSystem::ms_weaponSystemArray[v19] )
          {
            LODWORD(v67) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v67) )
              __debugbreak();
          }
          if ( CgWeaponSystem::ms_weaponSystemArray[v19]->IsGrenadeDangerous(CgWeaponSystem::ms_weaponSystemArray[v19], _RDI) )
          {
            __asm { vmovss  xmm8, cs:__real@3f800000 }
            if ( !v17 || (v21 = v17 < 7, v22 = v17 == 7) )
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed, "bg_maxGrenadeIndicatorSpeed");
              __asm { vmovaps xmm6, xmm0 }
              Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_maxGrenadeIndicatorSpeed, "bg_maxGrenadeIndicatorSpeed");
              __asm { vmulss  xmm4, xmm6, xmm0 }
            }
            else
            {
              __asm { vmovaps xmm4, xmm8 }
            }
            __asm
            {
              vmovss  xmm2, dword ptr [rdi+1BCh]
              vmovss  xmm0, dword ptr [rdi+1B8h]
              vmovss  xmm3, dword ptr [rdi+1C0h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vcomiss xmm2, xmm4
            }
            if ( (v21 || v22) && CG_AddHudGrenade_PositionCheck(_RBX, _RDI, Weapon, inAltWeaponMode, &outMaxOffset) )
            {
              v33 = BG_DangerIcon(Weapon, inAltWeaponMode);
              v34 = 0;
              if ( !v17 || v17 == 7 )
              {
                if ( _RBX->predictedPlayerState.cursorHint == HINT_WEAPON && _RBX->predictedPlayerState.cursorHintClass == USE_CLASS_GENTITY && _RBX->predictedPlayerState.cursorHintEntIndex == _RDI->nextState.number )
                {
                  v36 = BG_ThrowBackIcon(Weapon, inAltWeaponMode);
                  grenadeIconThrowBack = cgMedia.grenadeIconThrowBack;
                  if ( v36 )
                    grenadeIconThrowBack = v36;
                  v34 = 1;
                  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x33u) )
                    goto LABEL_81;
                  goto LABEL_60;
                }
                grenadeIconThrowBack = cgMedia.grenadeIconFrag;
              }
              else
              {
                if ( v17 != 2 )
                {
                  LODWORD(v66) = v17;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 728, ASSERT_TYPE_ASSERT, "( ( projExplosionType == WEAPPROJEXP_FLASHBANG ) )", "( projExplosionType ) = %i", v66) )
                    __debugbreak();
                }
                if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_hudGrenadeIconEnabledFlash, "cg_hudGrenadeIconEnabledFlash") )
                  goto LABEL_81;
                grenadeIconThrowBack = cgMedia.grenadeIconFlash;
              }
              if ( v33 )
                grenadeIconThrowBack = v33;
LABEL_60:
              v37 = Sys_InterlockedExchangeAdd((volatile int *)&_RBX->hudGrenadeCount, 1);
              v38 = v37;
              if ( (unsigned __int64)v37 < 0x20 )
              {
                if ( (unsigned int)v37 >= 0x20 )
                {
                  LODWORD(v67) = 32;
                  LODWORD(v66) = v37;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 755, ASSERT_TYPE_ASSERT, "(unsigned)( hudGrenadeIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->hudGrenades ) ) + 0 ) )", "hudGrenadeIndex doesn't index cgameGlob->hudGrenades\n\t%i not in [0, %i)", v66, v67) )
                    __debugbreak();
                }
                _RBP = v38;
                CG_GetPoseOrigin(&_RDI->pose, &outOrigin);
                if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_LOOP) )
                {
                  _RBX->hudGrenades[_RBP].lerpDistanceAmount = 1.0;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin]
                    vsubss  xmm3, xmm0, dword ptr [rbx+38h]
                    vmovss  xmm1, dword ptr [rsp+0D8h+outOrigin+4]
                    vsubss  xmm2, xmm1, dword ptr [rbx+3Ch]
                    vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+8]
                    vsubss  xmm4, xmm0, dword ptr [rbx+40h]
                    vmulss  xmm2, xmm2, xmm2
                    vmulss  xmm1, xmm3, xmm3
                    vaddss  xmm3, xmm2, xmm1
                    vmulss  xmm0, xmm4, xmm4
                    vaddss  xmm2, xmm3, xmm0
                    vsqrtss xmm6, xmm2, xmm2
                    vmovss  xmm7, [rsp+0D8h+outMaxOffset]
                    vcomiss xmm7, xmm6
                  }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance, "cg_hudGrenadeDangerCloseDistance");
                  __asm { vcomiss xmm6, xmm0 }
                  if ( !v21 && !v22 )
                  {
                    Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance, "cg_hudGrenadeDangerCloseDistance");
                    __asm { vsubss  xmm6, xmm6, xmm0 }
                    Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance, "cg_hudGrenadeDangerCloseDistance");
                    __asm
                    {
                      vsubss  xmm1, xmm7, xmm0
                      vdivss  xmm2, xmm6, xmm1
                      vsubss  xmm0, xmm8, xmm2
                      vmovss  dword ptr [rbx+rbp+59940h], xmm0
                    }
                  }
                }
                else
                {
                  _RBX->hudGrenades[_RBP].lerpDistanceAmount = 0.0;
                }
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin]
                  vmovss  dword ptr [rbx+rbp+59928h], xmm0
                  vmovss  xmm1, dword ptr [rsp+0D8h+outOrigin+4]
                  vmovss  dword ptr [rbx+rbp+5992Ch], xmm1
                  vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+8]
                  vmovss  dword ptr [rbx+rbp+59930h], xmm0
                }
                _RBX->hudGrenades[_RBP].material = grenadeIconThrowBack;
                _RBX->hudGrenades[_RBP].isThrowback = v34;
                _RBX->hudGrenades[_RBP].stuckToCharacterNum = 2047;
                if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_DROP) )
                {
                  LinkToParent = CG_Entity_GetLinkToParent(_RBX->localClientNum, _RDI);
                  if ( LinkToParent )
                  {
                    while ( (LinkToParent->flags & 1) != 0 )
                    {
                      if ( LinkToParent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
                        __debugbreak();
                      v61 = LinkToParent->nextState.eType;
                      if ( ((v61 - 1) & 0xFFED) == 0 && v61 != ET_ITEM )
                      {
                        _RBX->hudGrenades[_RBP].stuckToCharacterNum = LinkToParent->nextState.number;
                        break;
                      }
                      LinkToParent = CG_Entity_GetLinkToParent(_RBX->localClientNum, LinkToParent);
                      if ( !LinkToParent )
                        break;
                    }
                  }
                }
                memset(&outOrigin, 0, sizeof(outOrigin));
              }
              else
              {
                Sys_InterlockedDecrement((volatile int *)&_RBX->hudGrenadeCount);
              }
            }
          }
        }
      }
    }
  }
LABEL_81:
  _R11 = &v71;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_AddHudGrenade_PositionCheck
==============
*/
__int64 CG_AddHudGrenade_PositionCheck(cg_t *cgameGlob, const centity_t *grenadeEnt, const Weapon *weapon, bool isAlternate, float *outMaxOffset)
{
  unsigned int weaponIdx; 
  weapProjExposion_t v23; 
  char v29; 
  unsigned __int8 v36; 
  __int64 result; 
  bool v43; 
  bool v44; 
  __int64 v45; 
  vec3_t outOrigin; 
  __int64 v47; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  v47 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps [rsp+0E8h+var_88], xmm9
  }
  _RDI = cgameGlob;
  _R12 = outMaxOffset;
  if ( !grenadeEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 530, ASSERT_TYPE_ASSERT, "(grenadeEnt)", (const char *)&queryFormat, "grenadeEnt") )
    __debugbreak();
  CG_GetPoseOrigin(&grenadeEnt->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+outOrigin]
    vsubss  xmm8, xmm0, dword ptr [rdi+38h]
    vmovss  xmm1, dword ptr [rsp+0E8h+outOrigin+4]
    vsubss  xmm9, xmm1, dword ptr [rdi+3Ch]
    vmovss  xmm0, dword ptr [rsp+0E8h+outOrigin+8]
    vsubss  xmm6, xmm0, dword ptr [rdi+40h]
  }
  weaponIdx = weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v45) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v45, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponDefs[(unsigned __int16)weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v23 = BG_ProjExplosionType(weapon, isAlternate);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( v23 == WEAPPROJEXP_GRENADE || v23 == WEAPPROJEXP_HEAVY )
  {
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 329, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( cls.m_activeGameHardcoreSetting )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    else
    {
      _RBX = DCONST_DVARMPFLT_cg_hudGrenadeIconMaxRangeFrag;
      if ( !DCONST_DVARMPFLT_cg_hudGrenadeIconMaxRangeFrag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconMaxRangeFrag") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm2, dword ptr [rbx+28h]; defaultValue }
    }
    *(double *)&_XMM0 = BG_GetGrenadeDangerIconDistance(weapon, isAlternate, *(const float *)&_XMM2);
    __asm { vcomiss xmm0, xmm7 }
    if ( !(v29 | v43) )
      __asm { vaddss  xmm0, xmm0, cs:__real@41b80000 }
  }
  else
  {
    if ( v23 != WEAPPROJEXP_FLASHBANG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 558, ASSERT_TYPE_ASSERT, "(projExplosionType == WEAPPROJEXP_FLASHBANG)", (const char *)&queryFormat, "projExplosionType == WEAPPROJEXP_FLASHBANG") )
      __debugbreak();
    _RBX = DCONST_DVARFLT_cg_hudGrenadeIconMaxRangeFlash;
    if ( !DCONST_DVARFLT_cg_hudGrenadeIconMaxRangeFlash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconMaxRangeFlash") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm2, dword ptr [rbx+28h]; defaultValue }
    *(double *)&_XMM0 = BG_GetGrenadeDangerIconDistance(weapon, isAlternate, *(const float *)&_XMM2);
  }
  if ( outMaxOffset )
    __asm { vmovss  dword ptr [r12], xmm0 }
  __asm
  {
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm1, xmm8, xmm8
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, xmm3
  }
  if ( outMaxOffset )
    goto LABEL_34;
  __asm { vcomiss xmm6, xmm7 }
  if ( BG_WeaponSticksToWalls(weapon, isAlternate) )
    goto LABEL_41;
  CG_AddHudGrenade_UpdateHudGrenadeMaxHeight(_RDI);
  v43 = !_RDI->hudGrenadeMaxHeightIsDirty;
  if ( _RDI->hudGrenadeMaxHeightIsDirty )
  {
    v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 584, ASSERT_TYPE_ASSERT, "(!cgameGlob->hudGrenadeMaxHeightIsDirty)", (const char *)&queryFormat, "!cgameGlob->hudGrenadeMaxHeightIsDirty");
    v43 = !v44;
    if ( v44 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rdi+59D2Ch] }
  if ( v43 )
LABEL_41:
    v36 = 1;
  else
LABEL_34:
    v36 = 0;
  memset(&outOrigin, 0, sizeof(outOrigin));
  result = v36;
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  return result;
}

/*
==============
CG_AddHudGrenade_UpdateHudGrenadeMaxHeight
==============
*/
void CG_AddHudGrenade_UpdateHudGrenadeMaxHeight(cg_t *cgameGlob)
{
  int v10; 
  hkMemoryAllocator *v13; 
  hkMemoryAllocator *v14; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v19; 
  vec3_t end; 
  PhysicsQuery_RaycastHit hit; 
  char v22; 
  void *retaddr; 

  _RAX = &retaddr;
  v19 = -2i64;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RSI = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 465, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_ENTITY_WORKER_GRENADE_HUD);
  if ( _RSI->hudGrenadeMaxHeightIsDirty )
  {
    _RBX = DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight;
    if ( !DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconMaxHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vaddss  xmm6, xmm0, dword ptr [rsi+1F0h]
      vmovss  dword ptr [rsi+59D2Ch], xmm6
    }
    _RSI->hudGrenadeMaxHeightIsDirty = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+38h]
      vmovss  dword ptr [rbp+30h+end], xmm0
      vmovss  xmm1, dword ptr [rsi+3Ch]
      vmovss  dword ptr [rbp+30h+end+4], xmm1
      vaddss  xmm0, xmm6, dword ptr [rsi+40h]
      vmovss  dword ptr [rbp+30h+end+8], xmm0
    }
    v10 = 3 * _RSI->localClientNum + 2;
    extendedData.ignoreBodies = NULL;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+130h+extendedData.collisionBuffer], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = 9441297;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
    HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
    PhysicsQuery_AddEntityChainToIgnoreList(_RSI->predictedPlayerState.clientNum, &ignoreBodies, 1, 1, 0, 1, 1);
    ignoreBodies.m_ignoreTransparentVolumes = 1;
    CG_EntityWorkers_AcquireReadLock_Physics(BASE);
    PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v10, &_RSI->predictedPlayerState.origin, &end, &extendedData, &hit);
    CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
    if ( hit.isValid )
    {
      __asm
      {
        vmovss  xmm0, [rbp+30h+hit.fraction]
        vcomiss xmm0, cs:__real@3f800000
      }
    }
    v13 = hkMemHeapAllocator();
    ignoreBodies.m_ignoreBodies.m_size = 0;
    if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v13, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    ignoreBodies.m_ignoreBodies.m_data = NULL;
    ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v14 = hkMemHeapAllocator();
    ignoreBodies.m_ignoreEntities.m_size = 0;
    if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v14, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  Sys_LeaveCriticalSection(CRITSECT_ENTITY_WORKER_GRENADE_HUD);
  _R11 = &v22;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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

void __fastcall CG_DrawDamageDirectionIndicators(LocalClientNum_t localClientNum, double _XMM1_8)
{
  cg_t *LocalClientGlobals; 
  int entity; 
  bool v16; 
  const dvar_t *v18; 
  const dvar_t *v28; 
  __int64 v47; 
  unsigned int type; 
  Material *damageMaterial; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  DamageFeedbackType v62; 
  vec2_t *p_verts; 
  float optionalOutData; 
  vec4_t *color; 
  Material *material; 
  Material *materiala; 
  bool v101; 
  float x; 
  float y; 
  int result[2]; 
  vec4_t v105; 
  int v106[8]; 
  int v107[8]; 
  vec2_t verts; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->nextSnap && !CG_GetFlashbangedRemainingTime(localClientNum) && (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 && (!CG_GetWeapReticleZoom(LocalClientGlobals, NULL) || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_hudDamageIconInScope, "cg_hudDamageIconInScope")) && (!CG_GetOmnvar_IntegerByName(localClientNum, "post_game_state", result, NULL, NULL) || !result[0] || (unsigned int)(result[0] - 3) <= 1) )
  {
    __asm
    {
      vmovaps [rsp+190h+var_30], xmm6
      vmovaps [rsp+190h+var_40], xmm7
      vmovaps [rsp+190h+var_70], xmm10
      vmovaps [rsp+190h+var_80], xmm11
      vmovaps [rsp+190h+var_90], xmm12
      vmovaps [rsp+190h+var_A0], xmm13
      vmovaps [rsp+190h+var_B0], xmm14
      vmovaps [rsp+190h+var_C0], xmm15
    }
    entity = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.vehicleState.entity;
    v16 = entity && entity != 2047 || CG_Vehicle_RemoteControlledVehicleType(localClientNum, NULL) != VEH_TYPE_COUNT;
    v101 = v16;
    _R15 = ScrPlace_GetActivePlacement(localClientNum);
    if ( CG_GetWeapReticleZoom(LocalClientGlobals, NULL) )
    {
      v18 = DCONST_DVARBOOL_cg_hudDamageIconInScope;
      if ( !DCONST_DVARBOOL_cg_hudDamageIconInScope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudDamageIconInScope") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( !v18->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 205, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_cg_hudDamageIconInScope, \"cg_hudDamageIconInScope\" ))", (const char *)&queryFormat, "Dconst_GetBool( cg_hudDamageIconInScope )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, cs:__real@43f00000; screenHeight
        vmovss  xmm1, cs:__real@44200000; screenWidth
      }
      CG_CalcCrosshairPosition(LocalClientGlobals, *(const float *)&_XMM1, *(const float *)&_XMM2, &x, &y);
      __asm { vmovss  xmm1, [rsp+190h+x]; x }
      *(double *)&_XMM0 = ScrPlace_ApplyX(_R15, *(float *)&_XMM1, 2);
      __asm { vmovss  xmm1, [rsp+190h+y] }
    }
    else
    {
      __asm { vxorps  xmm1, xmm1, xmm1; x }
      *(double *)&_XMM0 = ScrPlace_ApplyX(_R15, *(float *)&_XMM1, 2);
      __asm { vxorps  xmm1, xmm1, xmm1; y }
    }
    __asm { vmovss  [rsp+190h+x], xmm0 }
    *(double *)&_XMM0 = ScrPlace_ApplyY(_R15, *(float *)&_XMM1, 2);
    _RBX = DCONST_DVARFLT_cg_hudDamageIconWidth;
    __asm { vmovss  [rsp+190h+y], xmm0 }
    if ( !DCONST_DVARFLT_cg_hudDamageIconWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudDamageIconWidth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_cg_hudDamageIconHeight;
    if ( !DCONST_DVARFLT_cg_hudDamageIconHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudDamageIconHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v28 = DCONST_DVARFLT_cg_hudDamageIconOffset;
    if ( !DCONST_DVARFLT_cg_hudDamageIconOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudDamageIconOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    __asm
    {
      vmovss  xmm2, dword ptr [r15+4]
      vmovss  xmm3, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmovss  xmm11, cs:__real@3f000000
      vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm10, cs:__real@40000000
      vmovss  xmm13, cs:__real@3f800000
      vmovss  xmm15, cs:__real@3c8efa35
      vmulss  xmm0, xmm3, xmm7
      vmulss  xmm1, xmm0, dword ptr [r15]
      vmulss  xmm0, xmm3, dword ptr [rbx+28h]
      vmulss  xmm4, xmm0, xmm2
      vmulss  xmm5, xmm1, xmm11
      vmulss  xmm1, xmm3, xmm6
      vmulss  xmm0, xmm1, xmm2
      vaddss  xmm2, xmm0, xmm4
      vxorps  xmm0, xmm5, xmm12
      vmovss  [rbp+90h+var_E0], xmm0
      vmovss  [rbp+90h+var_D8], xmm0
      vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
    }
    v47 = 12i64;
    __asm
    {
      vmovaps [rsp+190h+var_50], xmm8
      vmovups xmmword ptr [rsp+190h+var_138], xmm0
      vmovss  dword ptr [rbp+90h+verts], xmm5
      vmovss  dword ptr [rbp+90h+verts+4], xmm2
      vmovss  [rbp+90h+var_DC], xmm2
      vmovss  [rbp+90h+var_D4], xmm4
      vmovss  [rbp+90h+var_D0], xmm5
      vmovss  [rbp+90h+var_CC], xmm4
    }
    _RDI = LocalClientGlobals->viewDamage;
    *(_QWORD *)result = 12i64;
    __asm { vmovaps [rsp+190h+var_60], xmm9 }
    do
    {
      if ( v16 == _RDI->inVehicle && LocalClientGlobals->time - _RDI->time > 0 && LocalClientGlobals->time - _RDI->time < _RDI->duration )
      {
        type = _RDI->type;
        if ( type != 5 )
        {
          if ( type >= 7 )
          {
            LODWORD(material) = 7;
            LODWORD(color) = _RDI->type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_indicators.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( damageFeedbackType ) < (unsigned)( DamageFeedbackType::COUNT )", "damageFeedbackType doesn't index DamageFeedbackType::COUNT\n\t%i not in [0, %i)", color, material) )
              __debugbreak();
          }
          damageMaterial = cgMedia.damageMaterial;
          v51 = type - 1;
          if ( v51 )
          {
            v52 = v51 - 1;
            if ( v52 )
            {
              v53 = v52 - 1;
              if ( v53 )
              {
                if ( v53 == 1 )
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
          *(double *)&_XMM0 = vectoyaw((const vec2_t *)&LocalClientGlobals->refdef.view.axis);
          __asm
          {
            vsubss  xmm8, xmm0, dword ptr [rdi+14h]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, r14d
            vxorps  xmm1, xmm1, xmm1
            vmulss  xmm2, xmm0, xmm10
            vcvtsi2ss xmm1, xmm1, r12d
            vdivss  xmm3, xmm2, xmm1
            vsubss  xmm0, xmm10, xmm3
            vminss  xmm1, xmm0, xmm13
            vmovss  dword ptr [rsp+190h+var_138+0Ch], xmm1
          }
          v62 = _RDI->type;
          if ( v62 == DODGE )
          {
            __asm { vmovss  xmm9, dword ptr [rdi+14h] }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyWidth, "hudWhizbyWidth");
            __asm
            {
              vmulss  xmm0, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
              vmulss  xmm2, xmm0, dword ptr [r15]
              vmulss  xmm8, xmm2, xmm11
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyHeight, "hudWhizbyHeight");
            __asm
            {
              vmulss  xmm0, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
              vmulss  xmm7, xmm0, dword ptr [r15+4]
              vmulss  xmm0, xmm15, xmm9; X
            }
            *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
            __asm { vandps  xmm6, xmm0, xmm14 }
            Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyAddOffset, "hudWhizbyAddOffset");
            __asm { vmulss  xmm6, xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyOffset, "hudWhizbyOffset");
            __asm
            {
              vaddss  xmm2, xmm0, xmm6
              vmulss  xmm2, xmm2, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
              vmulss  xmm3, xmm2, dword ptr [r15]
              vaddss  xmm1, xmm3, xmm7
              vxorps  xmm0, xmm8, xmm12
              vmovss  [rsp+190h+var_124], xmm1
              vmovss  [rsp+190h+var_11C], xmm1
              vmovss  [rsp+190h+var_128], xmm8
              vmovss  [rsp+190h+var_120], xmm0
              vmovss  [rsp+190h+var_118], xmm0
              vmovss  [rsp+190h+var_114], xmm3
              vmovss  [rbp+90h+var_110], xmm8
              vmovss  [rbp+90h+var_10C], xmm3
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_hudWhizbyAlphaMult, "hudWhizbyAlphaMult");
            __asm { vmulss  xmm0, xmm0, dword ptr [rsp+190h+var_138+0Ch] }
            materiala = damageMaterial;
            p_verts = (vec2_t *)v106;
            __asm
            {
              vmovss  dword ptr [rsp+190h+optionalOutData], xmm9
              vmovss  dword ptr [rsp+190h+var_138+0Ch], xmm0
            }
          }
          else
          {
            if ( v62 == (COUNT|DODGE) )
            {
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudRicochetDamageIconWidth, "cg_hudRicochetDamageIconWidth");
              __asm
              {
                vmulss  xmm0, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
                vmulss  xmm2, xmm0, dword ptr [r15]
                vmulss  xmm7, xmm2, xmm11
              }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudRicochetDamageIconHeight, "cg_hudRicochetDamageIconHeight");
              __asm
              {
                vmulss  xmm0, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
                vmulss  xmm6, xmm0, dword ptr [r15+4]
              }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudRicochetDamageIconOffset, "cg_hudRicochetDamageIconOffset");
              __asm
              {
                vmulss  xmm0, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
                vmulss  xmm2, xmm0, dword ptr [r15+4]
                vaddss  xmm1, xmm2, xmm6
                vxorps  xmm0, xmm7, xmm12
                vmovss  [rbp+90h+var_104], xmm1
                vmovss  [rbp+90h+var_FC], xmm1
                vmovss  [rbp+90h+var_108], xmm7
                vmovss  [rbp+90h+var_100], xmm0
                vmovss  [rbp+90h+var_F8], xmm0
                vmovss  [rbp+90h+var_F4], xmm2
                vmovss  [rbp+90h+var_F0], xmm7
                vmovss  [rbp+90h+var_EC], xmm2
              }
              p_verts = (vec2_t *)v107;
            }
            else
            {
              p_verts = &verts;
            }
            materiala = damageMaterial;
            __asm { vmovss  dword ptr [rsp+190h+optionalOutData], xmm8 }
          }
          __asm
          {
            vmovss  xmm2, [rsp+190h+y]; y
            vmovss  xmm1, [rsp+190h+x]; x
          }
          CG_DrawRotatedQuadPic(_R15, *(float *)&_XMM1, *(float *)&_XMM2, p_verts, optionalOutData, &v105, materiala);
          v47 = *(_QWORD *)result;
          v16 = v101;
        }
      }
      ++_RDI;
      *(_QWORD *)result = --v47;
    }
    while ( v47 );
    __asm
    {
      vmovaps xmm15, [rsp+190h+var_C0]
      vmovaps xmm14, [rsp+190h+var_B0]
      vmovaps xmm13, [rsp+190h+var_A0]
      vmovaps xmm12, [rsp+190h+var_90]
      vmovaps xmm11, [rsp+190h+var_80]
      vmovaps xmm10, [rsp+190h+var_70]
      vmovaps xmm9, [rsp+190h+var_60]
      vmovaps xmm8, [rsp+190h+var_50]
      vmovaps xmm7, [rsp+190h+var_40]
      vmovaps xmm6, [rsp+190h+var_30]
    }
  }
}

/*
==============
CG_DrawFlashDamage
==============
*/
void CG_DrawFlashDamage(const cg_t *cgameGlob)
{
  int time; 
  const dvar_t *v11; 
  int v_dmg_stun_time; 
  int v16; 
  bool v17; 
  LocalClientNum_t localClientNum; 
  vec4_t color; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( cgameGlob->nextSnap )
  {
    time = cgameGlob->time;
    __asm
    {
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovaps [rsp+98h+var_28], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
    }
    if ( cgameGlob->v_dmg_time > time )
    {
      v11 = DCONST_DVARMPBOOL_cg_drawDamageFlash;
      if ( !DCONST_DVARMPBOOL_cg_drawDamageFlash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDamageFlash") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, dword ptr [rbx+49D7Ch]
          vmulss  xmm7, xmm1, cs:__real@3b03126f
          vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        }
      }
    }
    v_dmg_stun_time = cgameGlob->v_dmg_stun_time;
    v16 = cgameGlob->time;
    v17 = v_dmg_stun_time == v16;
    if ( v_dmg_stun_time > v16 )
    {
      v17 = v_dmg_stun_time == v16;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, dword ptr [rbx+49D7Ch]
        vmulss  xmm8, xmm1, cs:__real@3b03126f
        vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      }
    }
    __asm { vucomiss xmm7, xmm6 }
    if ( !v17 )
      goto LABEL_14;
    __asm { vucomiss xmm8, xmm6 }
    if ( v17 )
    {
LABEL_16:
      __asm
      {
        vmovaps xmm7, [rsp+98h+var_28]
        vmovaps xmm6, [rsp+98h+var_18]
        vmovaps xmm8, [rsp+98h+var_38]
      }
      return;
    }
    __asm { vucomiss xmm7, xmm6 }
    if ( v17 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+98h+var_58+4], xmm0
        vmovss  dword ptr [rsp+98h+var_58+8], xmm0
      }
    }
    else
    {
LABEL_14:
      __asm
      {
        vmovss  xmm0, cs:__real@3e4ccccd
        vmovss  dword ptr [rsp+98h+var_58+4], xmm6
        vmovss  dword ptr [rsp+98h+var_58+8], xmm6
        vmovaps xmm8, xmm7
      }
    }
    localClientNum = cgameGlob->localClientNum;
    __asm
    {
      vmovss  dword ptr [rsp+98h+var_58], xmm0
      vminss  xmm0, xmm8, cs:__real@40a00000
      vmulss  xmm1, xmm0, cs:__real@3e0f5c29
      vmovss  dword ptr [rsp+98h+var_58+0Ch], xmm1
    }
    _RAX = ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovss  xmm3, dword ptr [rax+24h]; height
      vmovss  xmm2, dword ptr [rax+20h]; width
      vmovss  xmm1, dword ptr [rax+1Ch]; y
      vmovss  xmm0, dword ptr [rax+18h]; x
    }
    UI_FillRectPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &color);
    goto LABEL_16;
  }
}

/*
==============
CG_DrawGrenadeIndicators
==============
*/

void __fastcall CG_DrawGrenadeIndicators(LocalClientNum_t localClientNum, double _XMM1_8)
{
  cg_t *LocalClientGlobals; 
  VehicleType v12; 
  const ScreenPlacement *ActivePlacement; 
  unsigned int v19; 
  bool v23; 
  float sizeLerpValue; 
  bool result; 
  float x; 
  float y; 
  vec4_t color; 
  vec3_t grenadeOffset; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBX = LocalClientGlobals;
  if ( LocalClientGlobals->nextSnap && LocalClientGlobals->hudGrenadeCount && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) && (_RBX->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 && _RBX->predictedPlayerState.pm_type != 5 )
  {
    if ( _RBX == (const cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    {
      v12 = CG_Vehicle_RemoteControlledVehicleType(localClientNum, NULL);
      if ( v12 != VEH_PLANE && v12 != VEH_HELICOPTER )
      {
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        if ( CG_GetWeapReticleZoom(_RBX, NULL) )
        {
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_hudGrenadeIconInScope, "cg_hudGrenadeIconInScope") )
            return;
          __asm
          {
            vmovss  xmm2, cs:__real@43f00000; screenHeight
            vmovss  xmm1, cs:__real@44200000; screenWidth
          }
          CG_CalcCrosshairPosition(_RBX, *(const float *)&_XMM1, *(const float *)&_XMM2, &x, &y);
          __asm { vmovss  xmm1, [rsp+120h+x]; x }
          *(double *)&_XMM0 = ScrPlace_ApplyX(ActivePlacement, *(float *)&_XMM1, 2);
          __asm { vmovss  xmm1, [rsp+120h+y] }
        }
        else
        {
          __asm { vxorps  xmm1, xmm1, xmm1; x }
          *(double *)&_XMM0 = ScrPlace_ApplyX(ActivePlacement, *(float *)&_XMM1, 2);
          __asm { vxorps  xmm1, xmm1, xmm1; y }
        }
        __asm { vmovss  [rsp+120h+x], xmm0 }
        *(double *)&_XMM0 = ScrPlace_ApplyY(ActivePlacement, *(float *)&_XMM1, 2);
        v19 = 0;
        __asm { vmovss  [rsp+120h+y], xmm0 }
        CG_GetOmnvar_BooleanByName(localClientNum, "ui_realism_hud", &result, NULL, NULL);
        if ( _RBX->hudGrenadeCount )
        {
          __asm
          {
            vmovaps [rsp+120h+var_30], xmm6
            vmovaps [rsp+120h+var_40], xmm7
            vmovaps [rsp+120h+var_50], xmm8
            vmovaps [rsp+120h+var_60], xmm9
            vmovss  xmm9, cs:__real@3f800000
            vmovaps [rsp+120h+var_70], xmm10
            vmovss  xmm10, cs:__real@3f000000
            vmovaps [rsp+120h+var_80], xmm11
            vmovss  xmm11, cs:__real@3bcde32e
          }
          do
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_DROP) && _RBX->hudGrenades[v19].stuckToCharacterNum == _RBX->predictedPlayerState.clientNum )
            {
              v23 = 1;
              __asm { vmovaps xmm8, xmm9 }
            }
            else
            {
              v23 = 0;
              _RAX = 32 * (v19 + 11466i64);
              __asm { vmovss  xmm8, dword ptr [rax+rbx] }
            }
            _RSI = v19;
            __asm
            {
              vmovaps xmm6, xmm8
              vshufps xmm6, xmm6, xmm6, 0
              vmovss  xmm0, dword ptr [rsi+rbx+59928h]
              vsubss  xmm1, xmm0, dword ptr [rbx+38h]
              vmovss  dword ptr [rsp+120h+grenadeOffset], xmm1
              vmovss  xmm2, dword ptr [rsi+rbx+5992Ch]
              vsubss  xmm0, xmm2, dword ptr [rbx+3Ch]
              vmovss  dword ptr [rsp+120h+grenadeOffset+4], xmm0
              vmovss  xmm1, dword ptr [rsi+rbx+59930h]
              vsubss  xmm2, xmm1, dword ptr [rbx+40h]
              vmovss  dword ptr [rsp+120h+grenadeOffset+8], xmm2
            }
            if ( _RBX->hudGrenades[_RSI].isThrowback )
            {
              _RDI = DCONST_DVARVEC4_cg_hudGrenadeColorThrowback;
              if ( !DCONST_DVARVEC4_cg_hudGrenadeColorThrowback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeColorThrowback") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(_RDI);
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+28h]
                vmovss  dword ptr [rsp+120h+color], xmm0
                vmovss  xmm1, dword ptr [rdi+2Ch]
                vmovss  dword ptr [rsp+120h+color+4], xmm1
                vmovss  xmm0, dword ptr [rdi+30h]
                vmovss  dword ptr [rsp+120h+color+8], xmm0
                vmovss  xmm1, dword ptr [rdi+34h]
                vmovss  dword ptr [rsp+120h+color+0Ch], xmm1
              }
            }
            else if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_LOOP) )
            {
              _RDI = DCONST_DVARVEC4_cg_hudGrenadeColorInProximity;
              if ( !DCONST_DVARVEC4_cg_hudGrenadeColorInProximity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeColorInProximity") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(_RDI);
              __asm { vmovups xmm0, xmmword ptr [rdi+28h] }
              _RDI = DCONST_DVARVEC4_cg_hudGrenadeColorDangerClose;
              __asm { vmovups [rsp+120h+var_B0], xmm0 }
              if ( !DCONST_DVARVEC4_cg_hudGrenadeColorDangerClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeColorDangerClose") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(_RDI);
              __asm
              {
                vmovups xmm0, xmmword ptr [rdi+28h]
                vsubps  xmm1, xmm0, [rsp+120h+var_B0]
                vmulps  xmm2, xmm1, xmm6
                vaddps  xmm3, xmm2, [rsp+120h+var_B0]
                vmovups xmmword ptr [rsp+120h+color], xmm3
                vmovups [rbp+20h+var_A0], xmm0
              }
            }
            else
            {
              __asm
              {
                vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
                vmovups xmmword ptr [rsp+120h+color], xmm0
              }
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadePointerPulseMax, "cg_hudGrenadePointerPulseMax");
            __asm { vmovaps xmm6, xmm0 }
            Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadePointerPulseMin, "cg_hudGrenadePointerPulseMin");
            __asm
            {
              vsubss  xmm1, xmm6, xmm0
              vmulss  xmm7, xmm1, xmm10
            }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadePointerPulseMin, "cg_hudGrenadePointerPulseMin");
            __asm { vaddss  xmm6, xmm0, xmm7 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_hudGrenadePointerPulseFreq, "cg_hudGrenadePointerPulseFreq");
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, dword ptr [rbx+65ECh]
              vmulss  xmm2, xmm1, xmm11
              vmulss  xmm0, xmm0, xmm2; X
            }
            *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
            __asm
            {
              vmulss  xmm1, xmm0, xmm7
              vaddss  xmm0, xmm1, xmm6; val
              vxorps  xmm1, xmm1, xmm1; min
              vmovaps xmm2, xmm9; max
              vmovss  dword ptr [rsp+120h+color+0Ch], xmm0
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmovss  dword ptr [rsp+120h+color+0Ch], xmm0 }
            if ( !result )
            {
              if ( !v23 )
              {
                __asm
                {
                  vmovss  xmm2, [rsp+120h+y]; centerY
                  vmovss  xmm1, [rsp+120h+x]; centerX
                }
                DrawGrenadePointer(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, &grenadeOffset, &color);
              }
              __asm
              {
                vmovss  xmm2, [rsp+120h+y]; centerY
                vmovss  xmm1, [rsp+120h+x]; centerX
                vmovss  [rsp+120h+sizeLerpValue], xmm8
              }
              DrawGrenadeIcon(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, v23, &grenadeOffset, sizeLerpValue, &color, _RBX->hudGrenades[_RSI].material);
            }
            ++v19;
          }
          while ( v19 < _RBX->hudGrenadeCount );
          __asm
          {
            vmovaps xmm11, [rsp+120h+var_80]
            vmovaps xmm10, [rsp+120h+var_70]
            vmovaps xmm9, [rsp+120h+var_60]
            vmovaps xmm8, [rsp+120h+var_50]
            vmovaps xmm7, [rsp+120h+var_40]
            vmovaps xmm6, [rsp+120h+var_30]
          }
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

void __fastcall DrawGrenadeIcon(LocalClientNum_t localClientNum, double centerX, double centerY, const bool isStuckToLocalPlayer, const vec3_t *grenadeOffset, const float sizeLerpValue, const vec4_t *color, Material *material)
{
  const dvar_t *v15; 
  const char *v30; 
  CgHandler *Handler; 
  bool IsScramblingActive; 
  float s; 
  float c; 
  vec3_t inOutViewAngles; 
  WorldUpReferenceFrame v88; 
  vec2_t verts; 
  char v103; 

  __asm
  {
    vmovaps [rsp+148h+var_88], xmm11
    vmovaps [rsp+148h+var_98], xmm12
  }
  v15 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  __asm
  {
    vmovaps xmm11, xmm2
    vmovaps xmm12, xmm1
  }
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+148h+var_38], xmm6
      vmovaps [rsp+148h+var_48], xmm7
      vmovaps [rsp+148h+var_58], xmm8
      vmovaps [rsp+148h+var_68], xmm9
      vmovaps [rsp+148h+var_78], xmm10
    }
    _RSI = CG_GetLocalClientGlobals(localClientNum);
    ScrPlace_GetActivePlacement(localClientNum);
    if ( CL_IsRenderingSplitScreen() )
    {
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconWidthMinSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconWidthMinSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconWidthMinSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm10, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconHeightMinSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconHeightMinSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconHeightMinSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm9, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconWidthSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconWidthSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconWidthSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconHeightSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconHeightSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconHeightSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen;
      if ( DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen )
        goto LABEL_36;
      v30 = "cg_hudGrenadeIconOffsetSplitscreen";
    }
    else
    {
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconWidthMin;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconWidthMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconWidthMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm10, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconHeightMin;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconHeightMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconHeightMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm9, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconWidth;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconHeight;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconOffset;
      if ( DCONST_DVARFLT_cg_hudGrenadeIconOffset )
        goto LABEL_36;
      v30 = "cg_hudGrenadeIconOffset";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v30) )
      __debugbreak();
LABEL_36:
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm3, [rsp+148h+sizeLerpValue]
      vmovss  xmm0, cs:__real@3f800000
      vmovss  xmm8, dword ptr [rbx+28h]
      vsubss  xmm2, xmm0, xmm3
      vmulss  xmm1, xmm2, xmm10
      vmulss  xmm0, xmm7, xmm3
      vaddss  xmm10, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm3
      vmulss  xmm2, xmm2, xmm9
      vaddss  xmm9, xmm2, xmm1
      vxorps  xmm6, xmm6, xmm6
    }
    if ( BG_IsPlayerZeroG(&_RSI->predictedPlayerState) )
    {
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v88, &_RSI->predictedPlayerState, Handler);
      __asm
      {
        vmovss  dword ptr [rsp+148h+inOutViewAngles], xmm6
        vmovss  dword ptr [rsp+148h+inOutViewAngles+4], xmm6
        vmovss  dword ptr [rsp+148h+inOutViewAngles+8], xmm6
      }
      BG_CalcLinkedViewValues(&_RSI->predictedPlayerState, &inOutViewAngles);
      WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v88, &inOutViewAngles);
      __asm { vmovss  xmm7, dword ptr [rsp+148h+inOutViewAngles+4] }
    }
    else
    {
      __asm { vmovss  xmm7, dword ptr [rsi+1E4h] }
    }
    if ( !isStuckToLocalPlayer )
    {
      *(double *)&_XMM0 = vectoyaw((const vec2_t *)grenadeOffset);
      __asm { vsubss  xmm0, xmm0, xmm7; angle }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm { vmulss  xmm0, xmm6, cs:__real@3c8efa35; radians }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmovss  xmm7, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmulss  xmm4, xmm10, cs:__real@3f000000
      vxorps  xmm1, xmm4, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm3, xmm8, [rsp+148h+s]
      vmulss  xmm5, xmm9, cs:__real@3f000000
      vsubss  xmm0, xmm1, xmm3
      vmulss  xmm0, xmm0, xmm7
      vmulss  xmm1, xmm0, dword ptr [r13+0]
      vaddss  xmm2, xmm1, xmm12
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm4, xmm8, [rsp+148h+c]
      vmulss  xmm1, xmm0, xmm7
      vmovss  [rsp+148h+var_B0], xmm2
      vmovss  dword ptr [rsp+148h+verts], xmm2
      vmulss  xmm2, xmm1, dword ptr [r13+0]
      vxorps  xmm1, xmm5, cs:__xmm@80000000800000008000000080000000
      vaddss  xmm3, xmm2, xmm12
      vsubss  xmm0, xmm1, xmm4
      vmulss  xmm2, xmm0, xmm7
      vmovss  [rsp+148h+var_B8], xmm3
      vmovss  [rsp+148h+var_C0], xmm3
      vmulss  xmm3, xmm2, dword ptr [r13+4]
      vaddss  xmm1, xmm3, xmm11
      vmovss  [rsp+148h+var_BC], xmm1
      vmovss  dword ptr [rsp+148h+verts+4], xmm1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm1, dword ptr [r13+4]
      vaddss  xmm3, xmm2, xmm11
      vmovss  [rsp+148h+var_AC], xmm3
      vmovss  [rsp+148h+var_B4], xmm3
    }
    CG_Draw_UpdateScramblerState(_RSI, localClientNum);
    IsScramblingActive = CG_Draw_IsScramblingActive(localClientNum);
    __asm
    {
      vmovaps xmm10, [rsp+148h+var_78]
      vmovaps xmm9, [rsp+148h+var_68]
      vmovaps xmm8, [rsp+148h+var_58]
      vmovaps xmm7, [rsp+148h+var_48]
      vmovaps xmm6, [rsp+148h+var_38]
    }
    if ( !IsScramblingActive )
      R_AddCmdDrawQuadPic(&verts, color, material);
  }
  _R11 = &v103;
  __asm
  {
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
DrawGrenadePointer
==============
*/

void __fastcall DrawGrenadePointer(LocalClientNum_t localClientNum, double centerX, double centerY, const vec3_t *grenadeOffset, const vec4_t *color)
{
  const dvar_t *v15; 
  const ScreenPlacement *ActivePlacement; 
  const char *v29; 
  CgHandler *Handler; 
  bool IsScramblingActive; 
  float fmt; 
  float s; 
  float c; 
  vec3_t inOutViewAngles; 
  WorldUpReferenceFrame v80; 
  vec2_t verts; 

  __asm
  {
    vmovaps [rsp+178h+var_A8], xmm12
    vmovaps [rsp+178h+var_C8], xmm14
  }
  v15 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  __asm
  {
    vmovaps xmm14, xmm2
    vmovaps xmm12, xmm1
  }
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+178h+var_48], xmm6
      vmovaps [rsp+178h+var_58], xmm7
      vmovaps [rsp+178h+var_68], xmm8
      vmovaps [rsp+178h+var_78], xmm9
      vmovaps [rsp+178h+var_88], xmm10
      vmovaps [rsp+178h+var_98], xmm11
      vmovaps [rsp+178h+var_B8], xmm13
    }
    _RSI = CG_GetLocalClientGlobals(localClientNum);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    if ( CL_IsRenderingSplitScreen() )
    {
      _RBX = DCONST_DVARFLT_cg_hudGrenadePointerWidthSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadePointerWidthSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadePointerWidthSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm13, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadePointerHeightSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadePointerHeightSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadePointerHeightSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm11, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconOffsetSplitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm9, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARVEC2_cg_hudGrenadePointerPivotSplitscreen;
      if ( DCONST_DVARVEC2_cg_hudGrenadePointerPivotSplitscreen )
        goto LABEL_30;
      v29 = "cg_hudGrenadePointerPivotSplitscreen";
    }
    else
    {
      _RBX = DCONST_DVARFLT_cg_hudGrenadePointerWidth;
      if ( !DCONST_DVARFLT_cg_hudGrenadePointerWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadePointerWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm13, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadePointerHeight;
      if ( !DCONST_DVARFLT_cg_hudGrenadePointerHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadePointerHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm11, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_cg_hudGrenadeIconOffset;
      if ( !DCONST_DVARFLT_cg_hudGrenadeIconOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudGrenadeIconOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm9, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARVEC2_cg_hudGrenadePointerPivot;
      if ( DCONST_DVARVEC2_cg_hudGrenadePointerPivot )
        goto LABEL_30;
      v29 = "cg_hudGrenadePointerPivot";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v29) )
      __debugbreak();
LABEL_30:
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+2Ch]
      vmovss  xmm6, dword ptr [rbx+28h]
    }
    if ( BG_IsPlayerZeroG(&_RSI->predictedPlayerState) )
    {
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v80, &_RSI->predictedPlayerState, Handler);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+178h+inOutViewAngles], xmm0
        vmovss  dword ptr [rsp+178h+inOutViewAngles+4], xmm0
        vmovss  dword ptr [rsp+178h+inOutViewAngles+8], xmm0
      }
      BG_CalcLinkedViewValues(&_RSI->predictedPlayerState, &inOutViewAngles);
      WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v80, &inOutViewAngles);
      __asm { vmovss  xmm8, dword ptr [rsp+178h+inOutViewAngles+4] }
    }
    else
    {
      __asm { vmovss  xmm8, dword ptr [rsi+1E4h] }
    }
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)grenadeOffset);
    __asm { vsubss  xmm0, xmm0, xmm8; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovaps xmm10, xmm0
      vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmovss  xmm5, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmulss  xmm2, xmm9, [rsp+178h+s]
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm2, xmm5
      vmulss  xmm1, xmm2, dword ptr [rbp+0]
      vsubss  xmm12, xmm12, xmm1
      vmulss  xmm1, xmm9, [rsp+178h+c]
      vmulss  xmm0, xmm1, xmm5
      vmulss  xmm3, xmm0, dword ptr [rbp+4]
      vxorps  xmm0, xmm6, xmm8
      vmulss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, dword ptr [rbp+0]
      vsubss  xmm0, xmm13, xmm6
      vmulss  xmm1, xmm0, xmm5
      vmovss  [rsp+178h+var_E0], xmm2
      vmovss  dword ptr [rsp+178h+verts], xmm2
      vmulss  xmm2, xmm1, dword ptr [rbp+0]
      vxorps  xmm0, xmm7, xmm8
      vmulss  xmm1, xmm0, xmm5
      vmovss  [rsp+178h+var_E8], xmm2
      vmovss  [rsp+178h+var_F0], xmm2
      vmulss  xmm2, xmm1, dword ptr [rbp+4]
      vsubss  xmm0, xmm11, xmm7
      vmulss  xmm1, xmm0, xmm5
      vmovss  [rsp+178h+var_EC], xmm2
      vmovss  dword ptr [rsp+178h+verts+4], xmm2
      vmulss  xmm2, xmm1, dword ptr [rbp+4]
      vmovss  [rsp+178h+var_DC], xmm2
      vmovss  [rsp+178h+var_E4], xmm2
      vsubss  xmm9, xmm14, xmm3
    }
    CG_Draw_UpdateScramblerState(_RSI, localClientNum);
    IsScramblingActive = CG_Draw_IsScramblingActive(localClientNum);
    __asm
    {
      vmovaps xmm13, [rsp+178h+var_B8]
      vmovaps xmm11, [rsp+178h+var_98]
      vmovaps xmm7, [rsp+178h+var_58]
      vmovaps xmm6, [rsp+178h+var_48]
    }
    if ( !IsScramblingActive )
    {
      __asm
      {
        vxorps  xmm0, xmm10, xmm8
        vmovaps xmm2, xmm9; y
        vmovaps xmm1, xmm12; x
        vmovss  dword ptr [rsp+178h+fmt], xmm0
      }
      CG_DrawRotatedQuadPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, &verts, fmt, color, cgMedia.grenadePointer);
    }
    __asm
    {
      vmovaps xmm9, [rsp+178h+var_78]
      vmovaps xmm8, [rsp+178h+var_68]
      vmovaps xmm10, [rsp+178h+var_88]
    }
  }
  __asm
  {
    vmovaps xmm12, [rsp+178h+var_A8]
    vmovaps xmm14, [rsp+178h+var_C8]
  }
}

