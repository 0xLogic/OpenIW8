/*
==============
BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch
==============
*/

void __fastcall BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch(pmove_t *pm)
{
  ?BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_HighPriorityWeapon_WeaponSwitchAllowed
==============
*/

bool __fastcall BG_HighPriorityWeapon_WeaponSwitchAllowed(const playerState_s *ps)
{
  return ?BG_HighPriorityWeapon_WeaponSwitchAllowed@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_HighPriorityWeapon_OnCancelWeaponChange
==============
*/

void __fastcall PM_HighPriorityWeapon_OnCancelWeaponChange(pmove_t *pm, const Weapon *r_weapon)
{
  ?PM_HighPriorityWeapon_OnCancelWeaponChange@@YAXPEAVpmove_t@@AEBUWeapon@@@Z(pm, r_weapon);
}

/*
==============
BG_HighPriorityWeapon_Get
==============
*/

const Weapon *__fastcall BG_HighPriorityWeapon_Get(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_HighPriorityWeapon_Get@@YAAEBUWeapon@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_HighPriorityWeapon_Clear
==============
*/

void __fastcall BG_HighPriorityWeapon_Clear(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_HighPriorityWeapon_Clear@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_HighPriorityWeapon_OnFinishWeaponChange
==============
*/

void __fastcall BG_HighPriorityWeapon_OnFinishWeaponChange(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_newweapon)
{
  ?BG_HighPriorityWeapon_OnFinishWeaponChange@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_newweapon);
}

/*
==============
BG_HighPriorityWeapon_OnWeaponSwitchCommon
==============
*/

void __fastcall BG_HighPriorityWeapon_OnWeaponSwitchCommon(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_HighPriorityWeapon_OnWeaponSwitchCommon@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_HighPriorityWeapon_Set
==============
*/

void __fastcall BG_HighPriorityWeapon_Set(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_HighPriorityWeapon_Set@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
PM_HighPriorityWeapon_OnBeginWeaponChange
==============
*/

void __fastcall PM_HighPriorityWeapon_OnBeginWeaponChange(pmove_t *pm, const Weapon *r_newweapon)
{
  ?PM_HighPriorityWeapon_OnBeginWeaponChange@@YAXPEAVpmove_t@@AEBUWeapon@@@Z(pm, r_newweapon);
}

/*
==============
BG_HighPriorityWeapon_MustSwitch
==============
*/

bool __fastcall BG_HighPriorityWeapon_MustSwitch(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_HighPriorityWeapon_MustSwitch@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_HighPriorityWeapon_SetDirectly
==============
*/

void __fastcall BG_HighPriorityWeapon_SetDirectly(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  ?BG_HighPriorityWeapon_SetDirectly@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_HighPriorityWeapon_CanBeCancelled
==============
*/
char BG_HighPriorityWeapon_CanBeCancelled(const Weapon *r_weapon)
{
  const dvar_t *v2; 
  const WeaponCompleteDef *v3; 
  unsigned int weaponIdx; 
  bool v6; 
  WeaponDef **v7; 
  WeaponDef *v8; 
  const dvar_t *v9; 
  const WeaponCompleteDef *v10; 
  const WeaponCompleteDef *v11; 

  if ( BG_IsBallWeapon(r_weapon) )
  {
    v2 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      v3 = BG_WeaponCompleteDef(r_weapon, 0);
      Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_CanBeCancelled: returning false for highPriorityWeapon %s, BG_IsBallWeapon\n", v3->szInternalName);
      return 0;
    }
    return 0;
  }
  weaponIdx = r_weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", r_weapon->weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v6 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v7 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v8 = *v7;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 131, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v6 = v8->weapClass == WEAPCLASS_TURRET;
  v9 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( v6 )
  {
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      v10 = BG_WeaponCompleteDef(r_weapon, 0);
      Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_CanBeCancelled: returning false for highPriorityWeapon %s, weapClass == WEAPCLASS_TURRET\n", v10->szInternalName);
    }
    return 0;
  }
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v11 = BG_WeaponCompleteDef(r_weapon, 0);
    Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_CanBeCancelled: returning true for highPriorityWeapon %s\n", v11->szInternalName);
  }
  return 1;
}

/*
==============
BG_HighPriorityWeapon_Clear
==============
*/
void BG_HighPriorityWeapon_Clear(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  const Weapon *v6; 
  const dvar_t *v7; 
  const WeaponCompleteDef *v8; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 63, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 64, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ps->highPriorityWeapInfo.weaponHandle.m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 66, ASSERT_TYPE_ASSERT, "(!ps->highPriorityWeapInfo.weaponHandle.IsNull())", "%s\n\tYou must not clear the high priority weapon when there is none set. Please verify the script implementation.", "!ps->highPriorityWeapInfo.weaponHandle.IsNull()") )
    __debugbreak();
  v6 = BG_HighPriorityWeapon_Get(weaponMap, ps);
  if ( memcmp_0(v6, r_weapon, 0x3Cui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 67, ASSERT_TYPE_ASSERT, "(BG_AreWeaponsEqual( BG_HighPriorityWeapon_Get( weaponMap, ps ), r_weapon ))", "%s\n\tThe weapon passed in to clear the high priority weapon does not match with what is set as the high priority weapon. Please verify the script implementation.", "BG_AreWeaponsEqual( BG_HighPriorityWeapon_Get( weaponMap, ps ), r_weapon )") )
    __debugbreak();
  v7 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = BG_WeaponCompleteDef(r_weapon, 0);
    Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_Clear: clearing high priority weapon %s\n", v8->szInternalName);
  }
  weaponMap->ClearWeapon(weaponMap, (BgWeaponHandle *)&ps->highPriorityWeapInfo);
  ps->highPriorityWeapInfo.flags = 0;
}

/*
==============
BG_HighPriorityWeapon_Get
==============
*/
const Weapon *BG_HighPriorityWeapon_Get(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 9, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 10, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->highPriorityWeapInfo.weaponHandle);
}

/*
==============
BG_HighPriorityWeapon_MustSwitch
==============
*/
bool BG_HighPriorityWeapon_MustSwitch(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const dvar_t *v4; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 106, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 107, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_HighPriorityWeapon_Get(weaponMap, ps)->weaponIdx )
    return 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 83, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_WeaponSwitchAllowed: returning %i\n", ps->highPriorityWeapInfo.flags & 1);
  return (ps->highPriorityWeapInfo.flags & 1) == 0;
}

/*
==============
BG_HighPriorityWeapon_OnFinishWeaponChange
==============
*/
void BG_HighPriorityWeapon_OnFinishWeaponChange(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_newweapon)
{
  const dvar_t *v6; 
  bool IsServerThread; 
  const WeaponCompleteDef *v8; 
  const char *v9; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 241, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 242, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    IsServerThread = Sys_IsServerThread();
    v8 = BG_WeaponCompleteDef(r_newweapon, 0);
    v9 = "HighPriorityDebug - BG_HighPriorityWeapon_OnFinishWeaponChange SERVER with %s. This is called by BG_SetCurrentWeaponForPlayer()\n";
    if ( !IsServerThread )
      v9 = "HighPriorityDebug - BG_HighPriorityWeapon_OnFinishWeaponChange CLIENT with %s. This is called by BG_SetCurrentWeaponForPlayer()\n";
    Com_Printf(17, v9, v8->szInternalName);
  }
  BG_HighPriorityWeapon_OnWeaponSwitchCommon(weaponMap, ps, r_newweapon);
}

/*
==============
BG_HighPriorityWeapon_OnWeaponSwitchCommon
==============
*/
void BG_HighPriorityWeapon_OnWeaponSwitchCommon(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  const Weapon *v6; 
  const Weapon *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 156, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 157, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_HighPriorityWeapon_Get(weaponMap, ps);
  v7 = v6;
  if ( v6->weaponIdx )
  {
    if ( !memcmp_0(v6, r_weapon, 0x3Cui64) )
    {
      v9 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
        Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_OnWeaponSwitchCommon: r_weapon = r_highPriorityWeapon, setting WeaponSwitchAllowed\n");
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 98, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      ps->highPriorityWeapInfo.flags |= 1u;
    }
    else if ( BG_HighPriorityWeapon_CanBeCancelled(v7) )
    {
      v10 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
        Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_OnWeaponSwitchCommon: r_weapon != r_highPriorityWeapon, r_highPriorityWeapon can be canceled, calling BG_HighPriorityWeapon_Clear\n");
      BG_HighPriorityWeapon_Clear(weaponMap, ps, v7);
    }
  }
  else
  {
    v8 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
      Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_OnWeaponSwitchCommon: highPriorityWeapon is null\n");
  }
}

/*
==============
BG_HighPriorityWeapon_Set
==============
*/
void BG_HighPriorityWeapon_Set(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  const Weapon *v6; 
  const char *WeaponName; 
  int EquippedWeaponIndex; 
  char output[1024]; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 27, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 28, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_HighPriorityWeapon_Get(weaponMap, ps);
  if ( !v6->weaponIdx )
    goto LABEL_35;
  WeaponName = BG_GetWeaponName(r_weapon, output, 0x400u);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 34, ASSERT_TYPE_ASSERT, "(BG_IsNullWeapon( r_currentHighPriorityWeapon ))", "%s\n\tYou cannot set the high priority weapon when there is already another weapon assigned as the high priority weapon. Current high priority weapon is : %s", "BG_IsNullWeapon( r_currentHighPriorityWeapon )", WeaponName) )
    __debugbreak();
  if ( !v6->weaponIdx )
  {
LABEL_35:
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !r_weapon->weaponIdx || (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(weaponMap, ps, r_weapon), EquippedWeaponIndex < 0) || (playerState_s *)((char *)ps + 16 * EquippedWeaponIndex) == (playerState_s *)-1540i64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 45, ASSERT_TYPE_ASSERT, "(equippedWeapon)", "%s\n\tYou cannot set the high priority weapon to a weapon which does not exist in the player's inventory. Please verify the script implementation.", "equippedWeapon") )
        __debugbreak();
    }
    if ( BG_Weapon_IsScriptedViewModelAnimPlaying(ps) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 47, ASSERT_TYPE_ASSERT, "(!BG_Weapon_IsScriptedViewModelAnimPlaying( ps ))", "%s\n\tYou cannot set the high priority weapon when a scripted viewmodel animation is playing.", "!BG_Weapon_IsScriptedViewModelAnimPlaying( ps )") )
      __debugbreak();
    if ( !BG_Weapon_IsScriptedViewModelAnimPlaying(ps) )
    {
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 18, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 19, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)&ps->highPriorityWeapInfo, r_weapon);
      ps->highPriorityWeapInfo.flags = 0;
    }
  }
}

/*
==============
BG_HighPriorityWeapon_SetDirectly
==============
*/
void BG_HighPriorityWeapon_SetDirectly(BgWeaponMap *weaponMap, playerState_s *ps, const Weapon *r_weapon)
{
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 18, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 19, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, (BgWeaponHandle *)&ps->highPriorityWeapInfo, r_weapon);
}

/*
==============
BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch
==============
*/
void BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch(pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *v3; 
  const dvar_t *v4; 
  BgWeaponMap *weaponMap; 
  const Weapon *Weapon; 
  const dvar_t *v7; 
  bool v8; 
  const char *szInternalName; 
  const dvar_t *v10; 
  bool v11; 
  const WeaponCompleteDef *v12; 
  const char *v13; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 264, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 264, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = BG_HighPriorityWeapon_Get(pm->weaponMap, ps);
  if ( v3->weaponIdx )
  {
    weaponMap = pm->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(weaponMap, ps->weapCommon.weaponHandle);
    if ( !memcmp_0(v3, Weapon, 0x3Cui64) )
    {
      v7 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
      {
        v8 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
        szInternalName = BG_WeaponCompleteDef(v3, 0)->szInternalName;
        if ( v8 )
          Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch SERVER: highPriorityWeapon = currentWeapon = %s\n", szInternalName);
        else
          Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch CLIENT: highPriorityWeapon = currentWeapon = %s\n", szInternalName);
      }
    }
    else if ( BG_HighPriorityWeapon_CanBeCancelled(v3) )
    {
      v10 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
      if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        v11 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
        v12 = BG_WeaponCompleteDef(v3, 0);
        v13 = "HighPriorityDebug - BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch SERVER: highPriorityWeapon %s can be cancelled, clearing highPriorityWeapon\n";
        if ( !v11 )
          v13 = "HighPriorityDebug - BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch CLIENT: highPriorityWeapon %s can be cancelled, clearing highPriorityWeapon\n";
        Com_Printf(17, v13, v12->szInternalName);
      }
      BG_HighPriorityWeapon_Clear(pm->weaponMap, ps, v3);
    }
  }
  else
  {
    v4 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      if ( pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler) )
        Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch SERVER: highPriorityWeapon is null\n");
      else
        Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_TryClearHighPriorityWeaponSwitch CLIENT: highPriorityWeapon is null\n");
    }
  }
}

/*
==============
BG_HighPriorityWeapon_WeaponSwitchAllowed
==============
*/
bool BG_HighPriorityWeapon_WeaponSwitchAllowed(const playerState_s *ps)
{
  const dvar_t *v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 83, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    Com_Printf(17, "HighPriorityDebug - BG_HighPriorityWeapon_WeaponSwitchAllowed: returning %i\n", ps->highPriorityWeapInfo.flags & 1);
  return ps->highPriorityWeapInfo.flags & 1;
}

/*
==============
PM_HighPriorityWeapon_OnBeginWeaponChange
==============
*/
void PM_HighPriorityWeapon_OnBeginWeaponChange(pmove_t *pm, const Weapon *r_newweapon)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  bool v6; 
  const WeaponCompleteDef *v7; 
  const char *v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 197, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 197, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v6 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
    v7 = BG_WeaponCompleteDef(r_newweapon, 0);
    v8 = "HighPriorityDebug - PM_HighPriorityWeapon_OnBeginWeaponChange SERVER with %s\n";
    if ( !v6 )
      v8 = "HighPriorityDebug - PM_HighPriorityWeapon_OnBeginWeaponChange CLIENT with %s\n";
    Com_Printf(17, v8, v7->szInternalName);
  }
  BG_HighPriorityWeapon_OnWeaponSwitchCommon(pm->weaponMap, ps, r_newweapon);
}

/*
==============
PM_HighPriorityWeapon_OnCancelWeaponChange
==============
*/
void PM_HighPriorityWeapon_OnCancelWeaponChange(pmove_t *pm, const Weapon *r_weapon)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  bool v6; 
  const WeaponCompleteDef *v7; 
  const char *v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 219, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_high_priority_weapon.cpp", 219, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v6 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
    v7 = BG_WeaponCompleteDef(r_weapon, 0);
    v8 = "HighPriorityDebug - PM_HighPriorityWeapon_OnCancelWeaponChange SERVER with %s\n";
    if ( !v6 )
      v8 = "HighPriorityDebug - PM_HighPriorityWeapon_OnCancelWeaponChange CLIENT with %s\n";
    Com_Printf(17, v8, v7->szInternalName);
  }
  BG_HighPriorityWeapon_OnWeaponSwitchCommon(pm->weaponMap, ps, r_weapon);
}

