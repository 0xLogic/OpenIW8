/*
==============
CG_HighPriorityWeapon_Update
==============
*/

void __fastcall CG_HighPriorityWeapon_Update(const LocalClientNum_t localClientNum)
{
  ?CG_HighPriorityWeapon_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_HighPriorityWeapon_IsWeaponSwitchAllowed
==============
*/

bool __fastcall CG_HighPriorityWeapon_IsWeaponSwitchAllowed(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?CG_HighPriorityWeapon_IsWeaponSwitchAllowed@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
CG_HighPriorityWeapon_IsWeaponSwitchAllowed
==============
*/
bool CG_HighPriorityWeapon_IsWeaponSwitchAllowed(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  const Weapon *v6; 
  const Weapon *v7; 
  const dvar_t *v8; 
  int v10; 
  const dvar_t *v11; 
  const WeaponCompleteDef *v12; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_high_priority_weapon.cpp", 11, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_high_priority_weapon.cpp", 12, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_HighPriorityWeapon_Get(weaponMap, ps);
  v7 = v6;
  if ( !v6->weaponIdx )
  {
    v8 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      Com_Printf(17, "HighPriorityDebug - CG_HighPriorityWeapon_IsWeaponSwitchAllowed: returning true, highPriorityWeapon is null\n");
      return 1;
    }
    return 1;
  }
  v10 = memcmp_0(r_weapon, v6, 0x3Cui64);
  v11 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
  if ( !v10 )
  {
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      v12 = BG_WeaponCompleteDef(v7, 0);
      Com_Printf(17, "HighPriorityDebug - CG_HighPriorityWeapon_IsWeaponSwitchAllowed: returning true, desired weapon = highPriorityWeapon = %s\n", v12->szInternalName);
    }
    return 1;
  }
  if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
    Com_Printf(17, "HighPriorityDebug - CG_HighPriorityWeapon_IsWeaponSwitchAllowed: returning result of BG_HighPriorityWeapon_WeaponSwitchAllowed\n");
  return BG_HighPriorityWeapon_WeaponSwitchAllowed(ps);
}

/*
==============
CG_HighPriorityWeapon_Update
==============
*/
void CG_HighPriorityWeapon_Update(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgWeaponMap *v2; 
  cg_t *v3; 
  const Weapon *v4; 
  const dvar_t *v5; 
  const Weapon *v6; 
  const WeaponCompleteDef *v7; 
  int EquippedWeaponIndex; 
  const char *WeaponName; 
  const WeaponCompleteDef *v10; 
  ClActiveClient *Client; 
  const WeaponCompleteDef *v12; 
  __int64 v13; 
  __int64 v14; 
  char output[1024]; 

  v1 = localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v2 = CgWeaponMap::ms_instance[v1];
  if ( (unsigned int)v1 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v13) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v13, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v14) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v14) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v14) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v14) )
      __debugbreak();
  }
  v3 = cg_t::ms_cgArray[v1];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_high_priority_weapon.cpp", 55, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !v3->inKillCam && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v3->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && BG_HighPriorityWeapon_MustSwitch(v2, &v3->predictedPlayerState) )
  {
    v4 = BG_HighPriorityWeapon_Get(v2, &v3->predictedPlayerState);
    v5 = DVARBOOL_bg_highPriorityWeaponDebugPrint;
    v6 = v4;
    if ( !DVARBOOL_bg_highPriorityWeaponDebugPrint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_highPriorityWeaponDebugPrint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      v7 = BG_WeaponCompleteDef(v6, 0);
      Com_Printf(17, "HighPriorityDebug - CG_HighPriorityWeapon_Update: Attempting CG_SelectWeapon with %s\n", v7->szInternalName);
    }
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( v3 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !v6->weaponIdx || (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v2, &v3->predictedPlayerState, v6), EquippedWeaponIndex < 0) || (playerState_s *)((char *)&v3->predictedPlayerState + 16 * EquippedWeaponIndex) == (playerState_s *)-1540i64 )
    {
      WeaponName = BG_GetWeaponName(v6, output, 0x400u);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_high_priority_weapon.cpp", 80, ASSERT_TYPE_ASSERT, "(BG_GetEquippedWeaponStateConst( weaponMap, ps, r_highPriorityWeapon ))", "%s\n\tPlayer has a high priority weapon set but they don't have the weapon in their inventory. Please verify the script implementation. Weapon name: %s", "BG_GetEquippedWeaponStateConst( weaponMap, ps, r_highPriorityWeapon )", WeaponName) )
        __debugbreak();
    }
    if ( !memcmp_0(&v3->weaponSelect, v6, 0x3Cui64) )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_highPriorityWeaponDebugPrint, "bg_highPriorityWeaponDebugPrint") )
      {
        v10 = BG_WeaponCompleteDef(v6, 0);
        Com_Printf(17, "HighPriorityDebug - CG_HighPriorityWeapon_Update: Skipping CG_SelectWeapon, cgameGlob->weaponSelect = r_highPriorityWeapon = %s\n", v10->szInternalName);
      }
    }
    else if ( CG_SelectWeapon((LocalClientNum_t)v1, v6, 0) )
    {
      Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
      Client->cgameUserCmdWeapon = *v6;
      Client->cgameUserCmdAlternate = 0;
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_highPriorityWeaponDebugPrint, "bg_highPriorityWeaponDebugPrint") )
      {
        v12 = BG_WeaponCompleteDef(v6, 0);
        Com_Printf(17, "HighPriorityDebug - CG_HighPriorityWeapon_Update: CG_SelectWeapon returned true, cgameUserCmdWeapon set to %s\n", v12->szInternalName);
      }
    }
  }
}

