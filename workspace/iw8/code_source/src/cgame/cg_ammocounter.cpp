/*
==============
CG_ClipCounterWeapon
==============
*/

Weapon *__fastcall CG_ClipCounterWeapon(Weapon *result, const cg_t *cgameGlob, const Weapon *weapon, bool isAlternate)
{
  return ?CG_ClipCounterWeapon@@YA?AUWeapon@@PEBVcg_t@@AEBU1@_N@Z(result, cgameGlob, weapon, isAlternate);
}

/*
==============
CG_GetSecondPrimaryWeapon
==============
*/

const Weapon *__fastcall CG_GetSecondPrimaryWeapon(const cg_t *cgameGlob, const playerState_s *ps)
{
  return ?CG_GetSecondPrimaryWeapon@@YAAEBUWeapon@@PEBVcg_t@@PEBUplayerState_s@@@Z(cgameGlob, ps);
}

/*
==============
CG_ActionSlotIsUsable
==============
*/

bool __fastcall CG_ActionSlotIsUsable(const LocalClientNum_t localClientNum, unsigned int slotIdx)
{
  return ?CG_ActionSlotIsUsable@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, slotIdx);
}

/*
==============
CG_GetUsingAltForHud
==============
*/

bool __fastcall CG_GetUsingAltForHud(const playerState_s *ps)
{
  return ?CG_GetUsingAltForHud@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_GetWeaponForHud
==============
*/

const Weapon *__fastcall CG_GetWeaponForHud(const cg_t *cgameGlob)
{
  return ?CG_GetWeaponForHud@@YAAEBUWeapon@@PEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_GetPlayerWeaponAmmoStock
==============
*/

int __fastcall CG_GetPlayerWeaponAmmoStock(LocalClientNum_t localClientNum)
{
  return ?CG_GetPlayerWeaponAmmoStock@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ActionSlotIsUsable
==============
*/

bool __fastcall CG_ActionSlotIsUsable(const LocalClientNum_t localClientNum, unsigned int slotIdx, double a3)
{
  __int64 v4; 
  bool v5; 
  int v6; 
  unsigned int v7; 
  cg_t *LocalClientGlobals; 
  const cg_t *v9; 
  const playerState_s *p_predictedPlayerState; 
  ActionSlotType v11; 
  CgWeaponMap *v12; 
  int v13; 
  const Weapon *EquippedWeaponForPlayer; 
  CgWeaponMap *Instance; 
  const dvar_t *v17; 
  int EquippedWeaponIndex; 
  __int64 v19; 
  bool v20; 
  unsigned __int16 weaponIdx; 
  bool v22; 
  bool v23; 
  WeaponDef **v24; 
  CgWeaponMap *v25; 
  __int64 v26; 
  __int64 v27; 
  Weapon r_weapon; 

  v4 = (int)slotIdx;
  v5 = Com_GameMode_SupportsFeature(WEAPON_DROPPING_QUICK);
  v6 = 3;
  v7 = 3;
  if ( v5 )
    v7 = 6;
  if ( (unsigned int)v4 > v7 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_QUICK) )
      v6 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ammocounter.cpp", 112, ASSERT_TYPE_ASSERT, "( slotIdx ) <= ( ( BG_ActionSlots_GetMaxCount() - 1 ) )", "slotIdx not in [0, ( BG_ActionSlots_GetMaxCount() - 1 )]\n\t%u not in [0, %u]", v4, v6) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals->predictedPlayerState.weaponHudIconOverrides[(unsigned int)(v4 + 3)] )
    return 1;
  v11 = p_predictedPlayerState->actionSlotType[(unsigned int)v4];
  if ( (unsigned int)(v11 - 1) <= 6 )
  {
    switch ( v11 )
    {
      case ACTIONSLOTTYPE_SPECIFYWEAPON:
        Instance = CgWeaponMap::GetInstance(localClientNum);
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1026, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1027, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( (unsigned int)v4 >= 7 )
        {
          LODWORD(v27) = 7;
          LODWORD(v26) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1028, ASSERT_TYPE_ASSERT, "(unsigned)( actionSlotIndex ) < (unsigned)( 7 )", "actionSlotIndex doesn't index ACTIONSLOTS_COUNT_STATIC\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        if ( !BG_ActionSlotIsWeaponType(p_predictedPlayerState, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1029, ASSERT_TYPE_ASSERT, "(BG_ActionSlotIsWeaponType( ps, actionSlotIndex ))", (const char *)&queryFormat, "BG_ActionSlotIsWeaponType( ps, actionSlotIndex )") )
          __debugbreak();
        r_weapon = *BgWeaponMap::GetWeapon(Instance, p_predictedPlayerState->actionSlotParam[v4].specifyWeapon.weaponHandle);
        r_weapon.weaponIdx = LOWORD(a3);
        if ( LOWORD(a3) )
        {
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          v17 = DVARBOOL_bg_giveAll;
          if ( DVARBOOL_bg_giveAll )
          {
            Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll);
            if ( v17->current.enabled )
              goto LABEL_70;
          }
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( r_weapon.weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, p_predictedPlayerState, &r_weapon), EquippedWeaponIndex >= 0) )
            v19 = (__int64)&p_predictedPlayerState->weapEquippedData[EquippedWeaponIndex];
          else
            v19 = 0i64;
          if ( v19 )
          {
LABEL_70:
            if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1384, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            v20 = BG_UsingAlternate(p_predictedPlayerState);
            weaponIdx = r_weapon.weaponIdx;
            v22 = v20;
            if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
            {
              LODWORD(v27) = bg_lastParsedWeaponIndex;
              LODWORD(v26) = r_weapon.weaponIdx;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v26, v27) )
                __debugbreak();
            }
            v23 = bg_weaponDefs[weaponIdx] == NULL;
            v24 = &bg_weaponDefs[weaponIdx];
            if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
              __debugbreak();
            if ( !(*v24)->disableSwitchToWhenEmpty || BG_WeaponAmmo(Instance, p_predictedPlayerState, &r_weapon, v22) )
              return 1;
          }
        }
        return 0;
      case ACTIONSLOTTYPE_ALTWEAPONTOGGLE:
        v12 = CgWeaponMap::GetInstance(localClientNum);
        if ( !CG_GetWeaponForHud(v9)->weaponIdx || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 6u) )
          return 0;
        v13 = 0;
        break;
      case ACTIONSLOTTYPE_NIGHTVISION:
        return 1;
      case ACTIONSLOTTYPE_ZEROGRAV_ROLL_RIGHT:
      case ACTIONSLOTTYPE_ZEROGRAV_ROLL_LEFT:
      case ACTIONSLOTTYPE_ZEROGRAV_AUTO_LEVEL:
        return BG_IsPlayerZeroG(&LocalClientGlobals->predictedPlayerState);
      case ACTIONSLOTTYPE_TAUNT:
        v25 = CgWeaponMap::GetInstance(localClientNum);
        return BG_GetFirstEquippedOffhandBySlot(v25, p_predictedPlayerState, OFFHAND_SLOT_TAUNT)->weaponIdx != 0;
    }
    while ( 1 )
    {
      EquippedWeaponForPlayer = BG_GetEquippedWeaponForPlayer(v12, p_predictedPlayerState, v13);
      if ( EquippedWeaponForPlayer->weaponIdx )
      {
        if ( BG_HasUnderbarrelAmmo(EquippedWeaponForPlayer) )
          break;
      }
      if ( (unsigned int)++v13 >= 0xF )
        return 0;
    }
    return 1;
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ammocounter.cpp", 179, ASSERT_TYPE_ASSERT, "(ps->actionSlotType[slotIdx] == ACTIONSLOTTYPE_DONOTHING)", (const char *)&queryFormat, "ps->actionSlotType[slotIdx] == ACTIONSLOTTYPE_DONOTHING") )
    __debugbreak();
  return 0;
}

/*
==============
CG_ClipCounterWeapon
==============
*/
Weapon *CG_ClipCounterWeapon(Weapon *result, const cg_t *cgameGlob, const Weapon *weapon, bool isAlternate)
{
  __int128 v6; 
  int v7; 
  double v8; 

  if ( !weapon->weaponIdx || BG_AmmoCounterClip(weapon, isAlternate) )
  {
    v6 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
    v7 = *(_DWORD *)&weapon->weaponCamo;
    *(__m256i *)&result->weaponIdx = *(__m256i *)&weapon->weaponIdx;
    v8 = *(double *)&weapon->attachmentVariationIndices[21];
  }
  else
  {
    v6 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    v7 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    *(__m256i *)&result->weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
    v8 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
  }
  *(_OWORD *)&result->attachmentVariationIndices[5] = v6;
  *(double *)&result->attachmentVariationIndices[21] = v8;
  *(_DWORD *)&result->weaponCamo = v7;
  return result;
}

/*
==============
CG_GetPlayerWeaponAmmoStock
==============
*/
int CG_GetPlayerWeaponAmmoStock(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const Weapon *WeaponForHud; 
  __int64 v5; 
  bool v6; 
  __m256i v7; 
  __int128 v8; 
  double v9; 
  int v10; 
  CgWeaponMap *Instance; 
  Weapon r_weapon; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  WeaponForHud = CG_GetWeaponForHud(LocalClientGlobals);
  *(__m256i *)&r_weapon.weaponIdx = *(__m256i *)&WeaponForHud->weaponIdx;
  *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = *(_OWORD *)&WeaponForHud->attachmentVariationIndices[5];
  v5 = *(_QWORD *)&WeaponForHud->attachmentVariationIndices[21];
  *(_QWORD *)&r_weapon.attachmentVariationIndices[21] = v5;
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&WeaponForHud->weaponCamo;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
  }
  else if ( BG_UsingAlternate(p_predictedPlayerState) )
  {
    v6 = 1;
    goto LABEL_9;
  }
  v6 = 0;
LABEL_9:
  if ( !r_weapon.weaponIdx || BG_AmmoCounterClip(&r_weapon, v6) )
  {
    v10 = *(_DWORD *)&r_weapon.weaponCamo;
    v9 = *(double *)&r_weapon.attachmentVariationIndices[21];
    v8 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
    v7 = *(__m256i *)&r_weapon.weaponIdx;
  }
  else
  {
    v7 = *(__m256i *)&NULL_WEAPON.weaponIdx;
    v8 = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
    v9 = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
    v10 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  *(_DWORD *)&r_weapon.weaponCamo = v10;
  *(__m256i *)&r_weapon.weaponIdx = v7;
  *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = v8;
  *(double *)&r_weapon.attachmentVariationIndices[21] = v9;
  if ( !(_WORD)v5 )
    return 0;
  Instance = CgWeaponMap::GetInstance(localClientNum);
  return BG_GetTotalAmmoReserve(Instance, p_predictedPlayerState, &r_weapon, v6);
}

/*
==============
CG_GetSecondPrimaryWeapon
==============
*/
Weapon *CG_GetSecondPrimaryWeapon(const cg_t *cgameGlob, const playerState_s *ps)
{
  const Weapon *WeaponForHud; 
  __int64 localClientNum; 
  CgWeaponMap *v6; 
  WeaponSlot *p_slot; 
  int v8; 
  BgWeaponHandle *i; 
  BgWeaponHandle *v10; 
  const Weapon *Weapon; 
  __int64 v13; 
  __int64 v14; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ammocounter.cpp", 42, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  WeaponForHud = CG_GetWeaponForHud(cgameGlob);
  localClientNum = cgameGlob->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[localClientNum];
  p_slot = &ps->weapEquippedData[0].slot;
  v8 = 0;
  for ( i = ps->weaponsEquipped; ; ++i )
  {
    if ( i->m_mapEntryId )
    {
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)v8 >= 0xF )
      {
        LODWORD(v14) = 15;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v10 = &ps->weaponsEquipped[v8];
      Weapon = BgWeaponMap::GetWeapon(v6, (BgWeaponHandle)v10->m_mapEntryId);
      if ( memcmp_0(WeaponForHud, Weapon, 0x3Cui64) )
      {
        if ( *p_slot == WEAPON_SLOT_PRIMARY )
          break;
      }
    }
    ++v8;
    p_slot += 4;
    if ( v8 >= 15 )
      return &NULL_WEAPON;
  }
  return (Weapon *)BgWeaponMap::GetWeapon(v6, (BgWeaponHandle)v10->m_mapEntryId);
}

/*
==============
CG_GetUsingAltForHud
==============
*/
bool CG_GetUsingAltForHud(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    return 0;
  }
  return BG_UsingAlternate(ps);
}

/*
==============
CG_GetWeaponForHud
==============
*/
const Weapon *CG_GetWeaponForHud(const cg_t *cgameGlob)
{
  __int64 localClientNum; 
  CgWeaponMap *v3; 
  playerState_s *p_predictedPlayerState; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ammocounter.cpp", 32, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[localClientNum];
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BgWeaponMap::GetWeapon(v3, p_predictedPlayerState->weapCommon.weaponHandle);
}

