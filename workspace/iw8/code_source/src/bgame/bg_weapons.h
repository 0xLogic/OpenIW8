/*
==============
BG_SetExecutionWeaponForPlayerEntity
==============
*/

void __fastcall BG_SetExecutionWeaponForPlayerEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  ?BG_SetExecutionWeaponForPlayerEntity@@YAXPEAVBgWeaponMap@@PEAUentityState_t@@AEBUWeapon@@@Z(weaponMap, es, r_weapon);
}

/*
==============
BG_SetEquippedWeaponForPlayer
==============
*/

void __fastcall BG_SetEquippedWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, int equippedIndex, const Weapon *r_weapon)
{
  ?BG_SetEquippedWeaponForPlayer@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@HAEBUWeapon@@@Z(weaponMap, ps, equippedIndex, r_weapon);
}

/*
==============
BG_PlayerHasWeapon
==============
*/

int __fastcall BG_PlayerHasWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_PlayerHasWeapon@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_GetCurrentWeaponForPlayerThirdPerson
==============
*/

const Weapon *__fastcall BG_GetCurrentWeaponForPlayerThirdPerson(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetCurrentWeaponForPlayerThirdPerson@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_GetEquippedWeaponState
==============
*/

const PlayerEquippedWeaponState *__fastcall BG_GetEquippedWeaponState(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_GetEquippedWeaponState@@YAPEBUPlayerEquippedWeaponState@@PEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
PM_SetMeleeComboSeqIdx
==============
*/

void __fastcall PM_SetMeleeComboSeqIdx(playerState_s *ps, int seqIdx)
{
  ?PM_SetMeleeComboSeqIdx@@YAXPEAUplayerState_s@@H@Z(ps, seqIdx);
}

/*
==============
BG_SetExecutionFlagsForPlayerEntity
==============
*/

void __fastcall BG_SetExecutionFlagsForPlayerEntity(entityState_t *es, const bool isExecutionAttacker, bool isExecutionVictim, bool isUsingExecutionProp)
{
  ?BG_SetExecutionFlagsForPlayerEntity@@YAXPEAUentityState_t@@_N_N2@Z(es, isExecutionAttacker, isExecutionVictim, isUsingExecutionProp);
}

/*
==============
BG_SetWeaponForEntityEventParm
==============
*/

void __fastcall BG_SetWeaponForEntityEventParm(BgWeaponMap *weaponMap, unsigned int *eventParm, const Weapon *r_weapon)
{
  ?BG_SetWeaponForEntityEventParm@@YAXPEAVBgWeaponMap@@PEAIAEBUWeapon@@@Z(weaponMap, eventParm, r_weapon);
}

/*
==============
BG_SetOffHandWeaponForPlayerEntity
==============
*/

void __fastcall BG_SetOffHandWeaponForPlayerEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  ?BG_SetOffHandWeaponForPlayerEntity@@YAXPEAVBgWeaponMap@@PEAUentityState_t@@AEBUWeapon@@@Z(weaponMap, es, r_weapon);
}

/*
==============
BG_IsQASBoth
==============
*/

bool __fastcall BG_IsQASBoth(const playerState_s *ps, QueuedActionState qas)
{
  return ?BG_IsQASBoth@@YA_NPEBUplayerState_s@@W4QueuedActionState@@@Z(ps, qas);
}

/*
==============
BG_SetAccessoryWeaponForPlayerEntity
==============
*/

void __fastcall BG_SetAccessoryWeaponForPlayerEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  ?BG_SetAccessoryWeaponForPlayerEntity@@YAXPEAVBgWeaponMap@@PEAUentityState_t@@AEBUWeapon@@@Z(weaponMap, es, r_weapon);
}

/*
==============
BG_PlayerDualWieldingWeapon
==============
*/

int __fastcall BG_PlayerDualWieldingWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_PlayerDualWieldingWeapon@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_WeaponClearViewModelAnimOverride
==============
*/

void __fastcall BG_WeaponClearViewModelAnimOverride(BgWeaponMap *weaponMap, playerState_s *ps)
{
  ?BG_WeaponClearViewModelAnimOverride@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_GetEquippedWeaponStateConst
==============
*/

const PlayerEquippedWeaponState *__fastcall BG_GetEquippedWeaponStateConst(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_GetEquippedWeaponStateConst@@YAPEBUPlayerEquippedWeaponState@@PEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_IsQASWeaponFire
==============
*/

bool __fastcall BG_IsQASWeaponFire(const playerState_s *ps, PlayerHandIndex hand)
{
  return ?BG_IsQASWeaponFire@@YA_NPEBUplayerState_s@@W4PlayerHandIndex@@@Z(ps, hand);
}

/*
==============
BG_SetOffHandWeaponForPlayer
==============
*/

void __fastcall BG_SetOffHandWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_SetOffHandWeaponForPlayer@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_GetQAS
==============
*/

QueuedActionState __fastcall BG_GetQAS(const playerState_s *ps, PlayerHandIndex hand)
{
  return ?BG_GetQAS@@YA?AW4QueuedActionState@@PEBUplayerState_s@@W4PlayerHandIndex@@@Z(ps, hand);
}

/*
==============
BG_GetWeaponForEntity
==============
*/

const Weapon *__fastcall BG_GetWeaponForEntity(const BgWeaponMap *weaponMap, const entityState_t *es)
{
  return ?BG_GetWeaponForEntity@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUentityState_t@@@Z(weaponMap, es);
}

/*
==============
BG_GetThrowbackWeaponForPlayer
==============
*/

const Weapon *__fastcall BG_GetThrowbackWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetThrowbackWeaponForPlayer@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_GetActionSlotWeaponParamForPlayer
==============
*/

const Weapon *__fastcall BG_GetActionSlotWeaponParamForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps, int actionSlotIndex)
{
  return ?BG_GetActionSlotWeaponParamForPlayer@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, actionSlotIndex);
}

/*
==============
BG_SetOriginalViewAnimWeaponForPlayer
==============
*/

void __fastcall BG_SetOriginalViewAnimWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_SetOriginalViewAnimWeaponForPlayer@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_SetWeaponForEntity
==============
*/

void __fastcall BG_SetWeaponForEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  ?BG_SetWeaponForEntity@@YAXPEAVBgWeaponMap@@PEAUentityState_t@@AEBUWeapon@@@Z(weaponMap, es, r_weapon);
}

/*
==============
BG_SetThrowbackWeaponForPlayer
==============
*/

void __fastcall BG_SetThrowbackWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_SetThrowbackWeaponForPlayer@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_GetCurrentWeaponForPlayer
==============
*/

const Weapon *__fastcall BG_GetCurrentWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetCurrentWeaponForPlayer@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_GetOffHandWeaponForPlayerEntity
==============
*/

const Weapon *__fastcall BG_GetOffHandWeaponForPlayerEntity(const BgWeaponMap *weaponMap, const entityState_t *es)
{
  return ?BG_GetOffHandWeaponForPlayerEntity@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUentityState_t@@@Z(weaponMap, es);
}

/*
==============
BG_GetExecutionFlags
==============
*/

void __fastcall BG_GetExecutionFlags(const unsigned __int16 playerFlags, bool *outIsExecutionAttacker, bool *outIsExecutionVictim, bool *outIsUsingExecutionProp)
{
  ?BG_GetExecutionFlags@@YAXGPEA_N00@Z(playerFlags, outIsExecutionAttacker, outIsExecutionVictim, outIsUsingExecutionProp);
}

/*
==============
BG_SetSpawnWeaponForPlayer
==============
*/

void __fastcall BG_SetSpawnWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_SetSpawnWeaponForPlayer@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_GetEquippedWeaponForPlayer
==============
*/

const Weapon *__fastcall BG_GetEquippedWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps, int equippedIndex)
{
  return ?BG_GetEquippedWeaponForPlayer@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, equippedIndex);
}

/*
==============
BG_GetOffHandWeaponForPlayer
==============
*/

const Weapon *__fastcall BG_GetOffHandWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetOffHandWeaponForPlayer@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_GetExecutionFlagsIsUsingProp
==============
*/

bool __fastcall BG_GetExecutionFlagsIsUsingProp(const entityState_t *es)
{
  return ?BG_GetExecutionFlagsIsUsingProp@@YA_NPEBUentityState_t@@@Z(es);
}

/*
==============
BG_SetStowedWeaponForPlayerEntity
==============
*/

void __fastcall BG_SetStowedWeaponForPlayerEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  ?BG_SetStowedWeaponForPlayerEntity@@YAXPEAVBgWeaponMap@@PEAUentityState_t@@AEBUWeapon@@@Z(weaponMap, es, r_weapon);
}

/*
==============
BG_SetExecutionWeaponForPlayer
==============
*/

void __fastcall BG_SetExecutionWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_SetExecutionWeaponForPlayer@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_SetQAS
==============
*/

void __fastcall BG_SetQAS(playerState_s *ps, PlayerHandIndex hand, QueuedActionState qas)
{
  ?BG_SetQAS@@YAXPEAUplayerState_s@@W4PlayerHandIndex@@W4QueuedActionState@@@Z(ps, hand, qas);
}

/*
==============
BG_GetEquippedWeaponStateNonConst
==============
*/

PlayerEquippedWeaponState *__fastcall BG_GetEquippedWeaponStateNonConst(const BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_GetEquippedWeaponStateNonConst@@YAPEAUPlayerEquippedWeaponState@@PEBVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_GetServerDObjHeldWeaponForPlayer
==============
*/

const Weapon *__fastcall BG_GetServerDObjHeldWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_GetServerDObjHeldWeaponForPlayer@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_GetStowedWeaponForPlayerEntity
==============
*/

const Weapon *__fastcall BG_GetStowedWeaponForPlayerEntity(const BgWeaponMap *weaponMap, const entityState_t *es)
{
  return ?BG_GetStowedWeaponForPlayerEntity@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUentityState_t@@@Z(weaponMap, es);
}

/*
==============
BG_GetCurrentWeaponForPlayer
==============
*/
Weapon *BG_GetCurrentWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  unsigned int m_mapEntryId; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  __int64 v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  m_mapEntryId = ps->weapCommon.weaponHandle.m_mapEntryId;
  if ( !weaponMap->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v5 = truncate_cast<unsigned short,unsigned int>(m_mapEntryId);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v5 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( weaponMap->m_entries[v5].index != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 173, ASSERT_TYPE_ASSERT, "(IsEntryValid( mapEntryId ))", "%s\n\tTrying to retrieve an invalid weapon entry from the weapon map.", "IsEntryValid( mapEntryId )") )
    __debugbreak();
  v6 = truncate_cast<unsigned short,unsigned int>(m_mapEntryId);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v6 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 177, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  v7 = v6;
  if ( weaponMap->m_entries[v7].index != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 178, ASSERT_TYPE_ASSERT, "(m_entries[mapEntryIndex].index == mapEntryIndex)", "%s\n\tHandle points to invalid entry in map.", "m_entries[mapEntryIndex].index == mapEntryIndex") )
    __debugbreak();
  return &weaponMap->m_entries[v7].weapon;
}

/*
==============
BG_SetExecutionWeaponForPlayer
==============
*/
void BG_SetExecutionWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 830, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 831, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &ps->executionWeapon, r_weapon);
}

/*
==============
BG_GetWeaponForEntity
==============
*/
const Weapon *BG_GetWeaponForEntity(const BgWeaponMap *weaponMap, const entityState_t *es)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->weaponHandle);
}

/*
==============
BG_SetEquippedWeaponForPlayer
==============
*/
void BG_SetEquippedWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, int equippedIndex, const Weapon *r_weapon)
{
  __int64 v4; 
  __int64 v8; 

  v4 = equippedIndex;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 851, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 852, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xF )
  {
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 853, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v8, 15) )
      __debugbreak();
  }
  weaponMap->SetWeapon(weaponMap, &ps->weaponsEquipped[v4], r_weapon);
}

/*
==============
BG_SetWeaponForEntity
==============
*/
void BG_SetWeaponForEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 448, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &es->weaponHandle, r_weapon);
}

/*
==============
BG_PlayerHasWeapon
==============
*/
__int64 BG_PlayerHasWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  const dvar_t *v6; 
  unsigned int v8; 
  int EquippedWeaponIndex; 
  PlayerEquippedWeaponState *v10; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DVARBOOL_bg_giveAll;
  if ( DVARBOOL_bg_giveAll )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll);
    if ( v6->current.enabled )
      return 1i64;
  }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = 0;
  if ( r_weapon->weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, r_weapon), EquippedWeaponIndex >= 0) )
    v10 = &ps->weapEquippedData[EquippedWeaponIndex];
  else
    v10 = NULL;
  LOBYTE(v8) = v10 != NULL;
  return v8;
}

/*
==============
BG_SetAccessoryWeaponForPlayerEntity
==============
*/
void BG_SetAccessoryWeaponForPlayerEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  unsigned int eType; 
  int v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 727, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 728, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)es->eType;
  if ( (unsigned __int16)eType > 0x11u || (v7 = 131111, !_bittest(&v7, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 729, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)((char *)&es->lerp.u.infoVolumeGrapple + 24), r_weapon);
}

/*
==============
BG_SetExecutionWeaponForPlayerEntity
==============
*/
void BG_SetExecutionWeaponForPlayerEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  unsigned int eType; 
  int v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 552, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 553, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)es->eType;
  if ( (unsigned __int16)eType > 0x11u || (v7 = 131111, !_bittest(&v7, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 554, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)((char *)&es->lerp.u.infoVolumeGrapple + 20), r_weapon);
}

/*
==============
BG_SetOffHandWeaponForPlayerEntity
==============
*/
void BG_SetOffHandWeaponForPlayerEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  unsigned int eType; 
  int v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 512, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 513, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)es->eType;
  if ( (unsigned __int16)eType > 0x11u || (v7 = 131111, !_bittest(&v7, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 514, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)&es->staticState, r_weapon);
}

/*
==============
BG_SetStowedWeaponForPlayerEntity
==============
*/
void BG_SetStowedWeaponForPlayerEntity(BgWeaponMap *weaponMap, entityState_t *es, const Weapon *r_weapon)
{
  unsigned int eType; 
  int v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 533, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)es->eType;
  if ( (unsigned __int16)eType > 0x11u || (v7 = 131111, !_bittest(&v7, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 534, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)&es->staticState.turret.carrierEntNum, r_weapon);
}

/*
==============
BG_GetExecutionFlagsIsUsingProp
==============
*/
bool BG_GetExecutionFlagsIsUsingProp(const entityState_t *es)
{
  entityType_s eType; 
  int v3; 
  bool result; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 687, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 595, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = es->eType;
  result = 0;
  if ( (unsigned __int16)eType <= ET_AGENT )
  {
    v3 = 131111;
    if ( _bittest(&v3, eType) )
    {
      if ( (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) != 1 && (((unsigned __int16)es->lerp.u.player.playerFlags >> 5) & 3) == 2 )
        return 1;
    }
  }
  return result;
}

/*
==============
BG_GetOffHandWeaponForPlayerEntity
==============
*/
const Weapon *BG_GetOffHandWeaponForPlayerEntity(const BgWeaponMap *weaponMap, const entityState_t *es)
{
  unsigned int eType; 
  int v5; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 502, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 503, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)es->eType;
  if ( (unsigned __int16)eType > 0x11u || (v5 = 131111, !_bittest(&v5, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 504, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->staticState.player.offhandWeaponHandle);
}

/*
==============
BG_GetStowedWeaponForPlayerEntity
==============
*/
const Weapon *BG_GetStowedWeaponForPlayerEntity(const BgWeaponMap *weaponMap, const entityState_t *es)
{
  unsigned int eType; 
  int v5; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 522, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 523, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)es->eType;
  if ( (unsigned __int16)eType > 0x11u || (v5 = 131111, !_bittest(&v5, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 524, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, es->staticState.player.stowedWeaponHandle);
}

/*
==============
BG_GetCurrentWeaponForPlayerThirdPerson
==============
*/
const Weapon *BG_GetCurrentWeaponForPlayerThirdPerson(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 899, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 900, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_GetCurrentWeaponForPlayer(weaponMap, ps);
}

/*
==============
BG_GetEquippedWeaponForPlayer
==============
*/
const Weapon *BG_GetEquippedWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps, int equippedIndex)
{
  __int64 v3; 
  __int64 v7; 

  v3 = equippedIndex;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xF )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v7, 15) )
      __debugbreak();
  }
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v3]);
}

/*
==============
BG_GetOffHandWeaponForPlayer
==============
*/
const Weapon *BG_GetOffHandWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 917, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weapCommon.offHandHandle);
}

/*
==============
BG_SetExecutionFlagsForPlayerEntity
==============
*/
void BG_SetExecutionFlagsForPlayerEntity(entityState_t *es, const bool isExecutionAttacker, bool isExecutionVictim, bool isUsingExecutionProp)
{
  unsigned int eType; 
  int v9; 
  int v10; 
  int v11; 
  unsigned __int8 v12; 
  entityType_s v13; 
  unsigned __int16 v14; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 623, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( isExecutionAttacker && isExecutionVictim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 624, ASSERT_TYPE_ASSERT, "(!isExecutionAttacker || !isExecutionVictim)", (const char *)&queryFormat, "!isExecutionAttacker || !isExecutionVictim") )
    __debugbreak();
  eType = (unsigned __int16)es->eType;
  if ( (unsigned __int16)eType > 0x11u || (v9 = 131111, !_bittest(&v9, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 625, ASSERT_TYPE_ASSERT, "(es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE)", (const char *)&queryFormat, "es->eType == ET_GENERAL || es->eType == ET_PLAYER || es->eType == ET_PLAYER_CORPSE || es->eType == ET_AGENT || es->eType == ET_INVISIBLE") )
      __debugbreak();
  }
  v10 = 0;
  if ( isExecutionAttacker )
  {
    LOBYTE(v10) = isUsingExecutionProp;
    ++v10;
  }
  else if ( isExecutionVictim )
  {
    v10 = 3;
  }
  v11 = truncate_cast<unsigned short,int>(32 * v10);
  if ( (v11 & 0xFFFFFF9F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 646, ASSERT_TYPE_ASSERT, "( (executionBits & ~((1<<5) | (1<<6))) ) == ( 0 )", "%s == %s\n\t%i, %i", "(executionBits & ~EXECUTION_ENCODING_BITMASK)", "0", v11 & 0xFFFFFF9F, 0i64) )
    __debugbreak();
  v12 = 0;
  v13 = es->eType;
  v14 = v11 | es->lerp.u.player.playerFlags & 0xFF9F;
  v15 = 0;
  es->lerp.u.player.playerFlags = v14;
  v16 = 0;
  if ( v13 >= ET_FIRST && (v13 <= ET_PLAYER_CORPSE || v13 == ET_INVISIBLE || v13 == ET_AGENT) )
  {
    v16 = 0;
    v17 = ((v14 >> 5) & 3) - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          v12 = 1;
      }
      else
      {
        v15 = 1;
        v16 = 1;
      }
    }
    else
    {
      v16 = 1;
    }
  }
  if ( isExecutionAttacker != v16 )
  {
    LODWORD(v20) = v16;
    LODWORD(v19) = isExecutionAttacker;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 658, ASSERT_TYPE_ASSERT, "( isExecutionAttacker ) == ( validateAttacker )", "%s == %s\n\t%i, %i", "isExecutionAttacker", "validateAttacker", v19, v20) )
      __debugbreak();
  }
  if ( isExecutionVictim != v12 )
  {
    LODWORD(v20) = v12;
    LODWORD(v19) = isExecutionVictim;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 659, ASSERT_TYPE_ASSERT, "( isExecutionVictim ) == ( validateVictim )", "%s == %s\n\t%i, %i", "isExecutionVictim", "validateVictim", v19, v20) )
      __debugbreak();
  }
  if ( isUsingExecutionProp != v15 )
  {
    LODWORD(v20) = v15;
    LODWORD(v19) = isUsingExecutionProp;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 660, ASSERT_TYPE_ASSERT, "( isUsingExecutionProp ) == ( validateUsingProp )", "%s == %s\n\t%i, %i", "isUsingExecutionProp", "validateUsingProp", v19, v20) )
      __debugbreak();
  }
}

/*
==============
BG_SetWeaponForEntityEventParm
==============
*/
void BG_SetWeaponForEntityEventParm(BgWeaponMap *weaponMap, unsigned int *eventParm, const Weapon *r_weapon)
{
  __int64 v6; 
  unsigned int NumWeapons; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 489, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !eventParm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 490, ASSERT_TYPE_ASSERT, "(eventParm)", (const char *)&queryFormat, "eventParm") )
    __debugbreak();
  if ( r_weapon->weaponIdx >= BG_GetNumWeapons() )
  {
    NumWeapons = BG_GetNumWeapons();
    LODWORD(v6) = r_weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 491, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "r_weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v6, NumWeapons) )
      __debugbreak();
  }
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)eventParm, r_weapon);
}

/*
==============
BG_IsQASBoth
==============
*/
bool BG_IsQASBoth(const playerState_s *ps, QueuedActionState qas)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 422, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return qas == ps->weapState[0].queuedActionState && qas == ps->weapState[1].queuedActionState;
}

/*
==============
BG_GetEquippedWeaponState
==============
*/
PlayerEquippedWeaponState *BG_GetEquippedWeaponState(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  int EquippedWeaponIndex; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, r_weapon);
  if ( EquippedWeaponIndex < 0 )
    return 0i64;
  else
    return &ps->weapEquippedData[EquippedWeaponIndex];
}

/*
==============
BG_GetEquippedWeaponStateConst
==============
*/
PlayerEquippedWeaponState *BG_GetEquippedWeaponStateConst(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  int EquippedWeaponIndex; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( r_weapon->weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, r_weapon), EquippedWeaponIndex >= 0) )
    return &ps->weapEquippedData[EquippedWeaponIndex];
  else
    return 0i64;
}

/*
==============
BG_GetEquippedWeaponStateNonConst
==============
*/
PlayerEquippedWeaponState *BG_GetEquippedWeaponStateNonConst(const BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  int EquippedWeaponIndex; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1076, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1077, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, r_weapon);
  if ( EquippedWeaponIndex < 0 )
    return 0i64;
  else
    return &ps->weapEquippedData[EquippedWeaponIndex];
}

/*
==============
BG_GetQAS
==============
*/
__int64 BG_GetQAS(const playerState_s *ps, PlayerHandIndex hand)
{
  __int64 v2; 

  v2 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 374, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (unsigned int)ps->weapState[v2].queuedActionState;
}

/*
==============
BG_IsQASWeaponFire
==============
*/
bool BG_IsQASWeaponFire(const playerState_s *ps, PlayerHandIndex hand)
{
  __int64 v2; 
  QueuedActionState queuedActionState; 

  v2 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 396, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  queuedActionState = ps->weapState[v2].queuedActionState;
  return ((queuedActionState - 1) & 0xFFFFFFFA) == 0 && queuedActionState != QAS_INSPECT;
}

/*
==============
BG_PlayerDualWieldingWeapon
==============
*/
_BOOL8 BG_PlayerDualWieldingWeapon(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1135, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1136, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !BG_Skydive_IsSkydiving(ps) && BG_Ladder_IsDualWieldingAllowed(ps) && (EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(weaponMap, ps, r_weapon)) != NULL && EquippedWeaponStateConst->dualWielding;
}

/*
==============
BG_SetOffHandWeaponForPlayer
==============
*/
void BG_SetOffHandWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 927, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 928, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)&ps->weapCommon, r_weapon);
}

/*
==============
BG_SetOriginalViewAnimWeaponForPlayer
==============
*/
void BG_SetOriginalViewAnimWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1017, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1018, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &ps->weapCommon.forcedViewAnimOriginalWeaponHandle, r_weapon);
}

/*
==============
BG_SetQAS
==============
*/
void BG_SetQAS(playerState_s *ps, PlayerHandIndex hand, QueuedActionState qas)
{
  __int64 v3; 

  v3 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapState[v3].queuedActionState = qas;
}

/*
==============
BG_WeaponClearViewModelAnimOverride
==============
*/
void BG_WeaponClearViewModelAnimOverride(BgWeaponMap *weaponMap, playerState_s *ps)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1048, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1049, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1050, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_VIEW_ANIM_OVERRIDE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_VIEW_ANIM_OVERRIDE )") )
    __debugbreak();
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 149, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x36u);
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 999, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1000, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &ps->weapCommon.forcedViewAnimWeaponHandle, &NULL_WEAPON);
  BG_SetOriginalViewAnimWeaponForPlayer(weaponMap, ps, &NULL_WEAPON);
  ps->weapCommon.forcedViewAnimWeaponState = 79;
}

/*
==============
PM_SetMeleeComboSeqIdx
==============
*/
void PM_SetMeleeComboSeqIdx(playerState_s *ps, int seqIdx)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 356, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)seqIdx > 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 357, ASSERT_TYPE_ASSERT, "((seqIdx >= 0) && (seqIdx <= (21 - 1)))", (const char *)&queryFormat, "(seqIdx >= 0) && (seqIdx <= MELEE_COMBO_SEQUENCE_MAX)") )
    __debugbreak();
  ps->weapCommon.meleeComboSeqIdx = seqIdx;
}

/*
==============
BG_GetThrowbackWeaponForPlayer
==============
*/
const Weapon *BG_GetThrowbackWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 767, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 768, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->throwbackWeaponHandle);
}

/*
==============
BG_SetThrowbackWeaponForPlayer
==============
*/
void BG_SetThrowbackWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 776, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 777, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &ps->throwbackWeaponHandle, r_weapon);
}

/*
==============
BG_SetSpawnWeaponForPlayer
==============
*/
void BG_SetSpawnWeaponForPlayer(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 945, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 946, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &ps->weapCommon.weaponSpawnHandle, r_weapon);
}

/*
==============
BG_GetExecutionFlags
==============
*/
void BG_GetExecutionFlags(const unsigned __int16 playerFlags, bool *outIsExecutionAttacker, bool *outIsExecutionVictim, bool *outIsUsingExecutionProp)
{
  if ( !outIsExecutionAttacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 562, ASSERT_TYPE_ASSERT, "(outIsExecutionAttacker)", (const char *)&queryFormat, "outIsExecutionAttacker") )
    __debugbreak();
  if ( !outIsExecutionVictim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 563, ASSERT_TYPE_ASSERT, "(outIsExecutionVictim)", (const char *)&queryFormat, "outIsExecutionVictim") )
    __debugbreak();
  if ( !outIsUsingExecutionProp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 564, ASSERT_TYPE_ASSERT, "(outIsUsingExecutionProp)", (const char *)&queryFormat, "outIsUsingExecutionProp") )
    __debugbreak();
  *outIsExecutionAttacker = 0;
  *outIsExecutionVictim = 0;
  *outIsUsingExecutionProp = 0;
  switch ( (playerFlags >> 5) & 3 )
  {
    case 1:
      *outIsExecutionAttacker = 1;
      break;
    case 2:
      *outIsExecutionAttacker = 1;
      *outIsUsingExecutionProp = 1;
      break;
    case 3:
      *outIsExecutionVictim = 1;
      break;
  }
}

/*
==============
BG_GetServerDObjHeldWeaponForPlayer
==============
*/
const Weapon *BG_GetServerDObjHeldWeaponForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 785, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 786, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->serverDobjHeldWeapon);
}

/*
==============
BG_GetActionSlotWeaponParamForPlayer
==============
*/
const Weapon *BG_GetActionSlotWeaponParamForPlayer(const BgWeaponMap *weaponMap, const playerState_s *ps, int actionSlotIndex)
{
  __int64 v3; 
  __int64 v7; 

  v3 = actionSlotIndex;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1026, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1027, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 7 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1028, ASSERT_TYPE_ASSERT, "(unsigned)( actionSlotIndex ) < (unsigned)( 7 )", "actionSlotIndex doesn't index ACTIONSLOTS_COUNT_STATIC\n\t%i not in [0, %i)", v7, 7) )
      __debugbreak();
  }
  if ( !BG_ActionSlotIsWeaponType(ps, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1029, ASSERT_TYPE_ASSERT, "(BG_ActionSlotIsWeaponType( ps, actionSlotIndex ))", (const char *)&queryFormat, "BG_ActionSlotIsWeaponType( ps, actionSlotIndex )") )
    __debugbreak();
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->actionSlotParam[v3].specifyWeapon.weaponHandle);
}

