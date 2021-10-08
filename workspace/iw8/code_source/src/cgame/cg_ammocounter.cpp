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

bool __fastcall CG_ActionSlotIsUsable(const LocalClientNum_t localClientNum, unsigned int slotIdx, double _XMM2_8)
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
  const dvar_t *v21; 
  int EquippedWeaponIndex; 
  __int64 v23; 
  bool v24; 
  unsigned __int16 weaponIdx; 
  bool v26; 
  bool v27; 
  WeaponDef **v28; 
  CgWeaponMap *v29; 
  __int64 v30; 
  __int64 v31; 
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
          LODWORD(v31) = 7;
          LODWORD(v30) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1028, ASSERT_TYPE_ASSERT, "(unsigned)( actionSlotIndex ) < (unsigned)( 7 )", "actionSlotIndex doesn't index ACTIONSLOTS_COUNT_STATIC\n\t%i not in [0, %i)", v30, v31) )
            __debugbreak();
        }
        if ( !BG_ActionSlotIsWeaponType(p_predictedPlayerState, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1029, ASSERT_TYPE_ASSERT, "(BG_ActionSlotIsWeaponType( ps, actionSlotIndex ))", (const char *)&queryFormat, "BG_ActionSlotIsWeaponType( ps, actionSlotIndex )") )
          __debugbreak();
        _RAX = BgWeaponMap::GetWeapon(Instance, p_predictedPlayerState->actionSlotParam[v4].specifyWeapon.weaponHandle);
        __asm
        {
          vmovups ymm2, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+0B8h+r_weapon.weaponIdx], ymm2
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+5], xmm0
          vmovsd  xmm1, qword ptr [rax+30h]
          vmovsd  qword ptr [rsp+0B8h+r_weapon.attachmentVariationIndices+15h], xmm1
        }
        *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        __asm { vmovd   eax, xmm2 }
        r_weapon.weaponIdx = (unsigned __int16)_RAX;
        if ( (_WORD)_RAX )
        {
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          v21 = DVARBOOL_bg_giveAll;
          if ( DVARBOOL_bg_giveAll )
          {
            Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll);
            if ( v21->current.enabled )
              goto LABEL_70;
          }
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          if ( r_weapon.weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, p_predictedPlayerState, &r_weapon), EquippedWeaponIndex >= 0) )
            v23 = (__int64)&p_predictedPlayerState->weapEquippedData[EquippedWeaponIndex];
          else
            v23 = 0i64;
          if ( v23 )
          {
LABEL_70:
            if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1384, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            v24 = BG_UsingAlternate(p_predictedPlayerState);
            weaponIdx = r_weapon.weaponIdx;
            v26 = v24;
            if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
            {
              LODWORD(v31) = bg_lastParsedWeaponIndex;
              LODWORD(v30) = r_weapon.weaponIdx;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v30, v31) )
                __debugbreak();
            }
            v27 = bg_weaponDefs[weaponIdx] == NULL;
            v28 = &bg_weaponDefs[weaponIdx];
            if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
              __debugbreak();
            if ( !(*v28)->disableSwitchToWhenEmpty || BG_WeaponAmmo(Instance, p_predictedPlayerState, &r_weapon, v26) )
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
        v29 = CgWeaponMap::GetInstance(localClientNum);
        return BG_GetFirstEquippedOffhandBySlot(v29, p_predictedPlayerState, OFFHAND_SLOT_TAUNT)->weaponIdx != 0;
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
  int v8; 

  _RDI = weapon;
  _RBX = result;
  if ( !weapon->weaponIdx || BG_AmmoCounterClip(weapon, isAlternate) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups xmm1, xmmword ptr [rdi+20h]
    }
    v8 = *(_DWORD *)&_RDI->weaponCamo;
    __asm
    {
      vmovups ymmword ptr [rbx], ymm0
      vmovsd  xmm0, qword ptr [rdi+30h]
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    }
    v8 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    __asm
    {
      vmovups ymmword ptr [rbx], ymm0
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
  }
  __asm
  {
    vmovups xmmword ptr [rbx+20h], xmm1
    vmovsd  qword ptr [rbx+30h], xmm0
  }
  *(_DWORD *)&_RBX->weaponCamo = v8;
  return _RBX;
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
  bool v8; 
  int v12; 
  CgWeaponMap *Instance; 
  Weapon r_weapon; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  _RAX = CG_GetWeaponForHud(LocalClientGlobals);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+88h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+88h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+88h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
  }
  else if ( BG_UsingAlternate(p_predictedPlayerState) )
  {
    v8 = 1;
    goto LABEL_9;
  }
  v8 = 0;
LABEL_9:
  if ( !r_weapon.weaponIdx || BG_AmmoCounterClip(&r_weapon, v8) )
  {
    v12 = *(_DWORD *)&r_weapon.weaponCamo;
    __asm
    {
      vmovsd  xmm2, qword ptr [rsp+88h+r_weapon.attachmentVariationIndices+15h]
      vmovups xmm1, xmmword ptr [rsp+88h+r_weapon.attachmentVariationIndices+5]
      vmovups ymm0, ymmword ptr [rsp+88h+r_weapon.weaponIdx]
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovsd  xmm2, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    }
    v12 = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  }
  *(_DWORD *)&r_weapon.weaponCamo = v12;
  __asm
  {
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+88h+r_weapon.weaponIdx], ymm0
    vmovups xmmword ptr [rsp+88h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  qword ptr [rsp+88h+r_weapon.attachmentVariationIndices+15h], xmm2
  }
  if ( !(_WORD)_EAX )
    return 0;
  Instance = CgWeaponMap::GetInstance(localClientNum);
  return BG_GetTotalAmmoReserve(Instance, p_predictedPlayerState, &r_weapon, v8);
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

