/*
==============
CG_PutAwayOffhand
==============
*/

void __fastcall CG_PutAwayOffhand(LocalClientNum_t localClientNum, const entityState_t *ent, const Weapon *weapon, bool isPlayerView)
{
  ?CG_PutAwayOffhand@@YAXW4LocalClientNum_t@@PEBUentityState_t@@AEBUWeapon@@_N@Z(localClientNum, ent, weapon, isPlayerView);
}

/*
==============
CG_GetOffHandSpecialAmmo
==============
*/

int __fastcall CG_GetOffHandSpecialAmmo(LocalClientNum_t localClientNum)
{
  return ?CG_GetOffHandSpecialAmmo@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Weapons_IsOffHandDisplayVisible
==============
*/

bool __fastcall CG_Weapons_IsOffHandDisplayVisible(const cg_t *cgameGlob)
{
  return ?CG_Weapons_IsOffHandDisplayVisible@@YA_NPEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_GetOffHandPrimaryAmmo
==============
*/

int __fastcall CG_GetOffHandPrimaryAmmo(LocalClientNum_t localClientNum)
{
  return ?CG_GetOffHandPrimaryAmmo@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystem::OffHandGetFireFxInfo
==============
*/

ClientOffHandCameraFireFxInfo *__fastcall CgWeaponSystem::OffHandGetFireFxInfo(CgWeaponSystem *this, int fireFxIndex)
{
  return ?OffHandGetFireFxInfo@CgWeaponSystem@@IEBAPEAUClientOffHandCameraFireFxInfo@@H@Z(this, fireFxIndex);
}

/*
==============
CG_GetOffhandPrimaryMaterial
==============
*/

GfxImage *__fastcall CG_GetOffhandPrimaryMaterial(LocalClientNum_t localClientNum)
{
  return ?CG_GetOffhandPrimaryMaterial@@YAPEAUGfxImage@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystem::OffHandWeaponsStopPlayerFireFx
==============
*/

void __fastcall CgWeaponSystem::OffHandWeaponsStopPlayerFireFx(CgWeaponSystem *this, int fireFxIndex)
{
  ?OffHandWeaponsStopPlayerFireFx@CgWeaponSystem@@QEBAXH@Z(this, fireFxIndex);
}

/*
==============
CG_PrepOffHand
==============
*/

void __fastcall CG_PrepOffHand(LocalClientNum_t localClientNum, const entityState_t *ent, const Weapon *weapon, bool isPlayerView)
{
  ?CG_PrepOffHand@@YAXW4LocalClientNum_t@@PEBUentityState_t@@AEBUWeapon@@_N@Z(localClientNum, ent, weapon, isPlayerView);
}

/*
==============
CG_Weapons_GetOffhandWeaponForHUD
==============
*/

const Weapon *__fastcall CG_Weapons_GetOffhandWeaponForHUD(LocalClientNum_t localClientNum, const OffhandSlot slot)
{
  return ?CG_Weapons_GetOffhandWeaponForHUD@@YAAEBUWeapon@@W4LocalClientNum_t@@W4OffhandSlot@@@Z(localClientNum, slot);
}

/*
==============
CgWeaponSystem::OffHandWeaponsPlayerFireFx
==============
*/

void __fastcall CgWeaponSystem::OffHandWeaponsPlayerFireFx(CgWeaponSystem *this, const centity_t *cent, const Weapon *weapon, bool isAlternate)
{
  ?OffHandWeaponsPlayerFireFx@CgWeaponSystem@@QEBAXPEBUcentity_t@@AEBUWeapon@@_N@Z(this, cent, weapon, isAlternate);
}

/*
==============
CG_GetOffhandPrimaryWeapon
==============
*/

const Weapon *__fastcall CG_GetOffhandPrimaryWeapon(LocalClientNum_t localClientNum)
{
  return ?CG_GetOffhandPrimaryWeapon@@YAAEBUWeapon@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SetEquippedOffHand
==============
*/

void __fastcall CG_SetEquippedOffHand(LocalClientNum_t localClientNum, const Weapon *offHand)
{
  ?CG_SetEquippedOffHand@@YAXW4LocalClientNum_t@@AEBUWeapon@@@Z(localClientNum, offHand);
}

/*
==============
CG_CalcOffHandAmmo
==============
*/

int __fastcall CG_CalcOffHandAmmo(const LocalClientNum_t localClientNum, const playerState_s *predictedPlayerState, const OffhandSlot slot)
{
  return ?CG_CalcOffHandAmmo@@YAHW4LocalClientNum_t@@PEBUplayerState_s@@W4OffhandSlot@@@Z(localClientNum, predictedPlayerState, slot);
}

/*
==============
CgWeaponSystem::OffHandWeaponGetFireFxIndexForWeapon
==============
*/

int __fastcall CgWeaponSystem::OffHandWeaponGetFireFxIndexForWeapon(CgWeaponSystem *this, const Weapon *weapon)
{
  return ?OffHandWeaponGetFireFxIndexForWeapon@CgWeaponSystem@@QEBAHAEBUWeapon@@@Z(this, weapon);
}

/*
==============
CG_Weapons_GetBestOffhand
==============
*/

const Weapon *__fastcall CG_Weapons_GetBestOffhand(const LocalClientNum_t localClientNum, const playerState_s *predictedPlayerState, const OffhandSlot slot)
{
  return ?CG_Weapons_GetBestOffhand@@YAAEBUWeapon@@W4LocalClientNum_t@@PEBUplayerState_s@@W4OffhandSlot@@@Z(localClientNum, predictedPlayerState, slot);
}

/*
==============
CG_GetOffhandSecondaryMaterial
==============
*/

GfxImage *__fastcall CG_GetOffhandSecondaryMaterial(LocalClientNum_t localClientNum)
{
  return ?CG_GetOffhandSecondaryMaterial@@YAPEAUGfxImage@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetOffHandSecondaryAmmo
==============
*/

int __fastcall CG_GetOffHandSecondaryAmmo(LocalClientNum_t localClientNum)
{
  return ?CG_GetOffHandSecondaryAmmo@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystem::OffHandWeaponsUpdate
==============
*/

void __fastcall CgWeaponSystem::OffHandWeaponsUpdate(CgWeaponSystem *this, const playerState_s *ps)
{
  ?OffHandWeaponsUpdate@CgWeaponSystem@@QEBAXPEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CG_OffhandShield_PopulateDepthScanParams
==============
*/

bool __fastcall CG_OffhandShield_PopulateDepthScanParams(const LocalClientNum_t localClientNum)
{
  return ?CG_OffhandShield_PopulateDepthScanParams@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_UseOffHand
==============
*/

void __fastcall CG_UseOffHand(LocalClientNum_t localClientNum, const centity_t *cent, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  ?CG_UseOffHand@@YAXW4LocalClientNum_t@@PEBUcentity_t@@AEBUWeapon@@_N3@Z(localClientNum, cent, weapon, isAlternate, isPlayerView);
}

/*
==============
CgWeaponSystem::OffHandFindFreeFirxFxIndex
==============
*/

int __fastcall CgWeaponSystem::OffHandFindFreeFirxFxIndex(CgWeaponSystem *this)
{
  return ?OffHandFindFreeFirxFxIndex@CgWeaponSystem@@IEBAHXZ(this);
}

/*
==============
CG_QuickPullbackOffhand
==============
*/

void __fastcall CG_QuickPullbackOffhand(LocalClientNum_t localClientNum, const entityState_t *ent, const Weapon *weapon, bool isPlayerView)
{
  ?CG_QuickPullbackOffhand@@YAXW4LocalClientNum_t@@PEBUentityState_t@@AEBUWeapon@@_N@Z(localClientNum, ent, weapon, isPlayerView);
}

/*
==============
CgWeaponSystem::OffHandGetWeaponInfo
==============
*/

ClientOffHandWeaponInfo *__fastcall CgWeaponSystem::OffHandGetWeaponInfo(CgWeaponSystem *this)
{
  return ?OffHandGetWeaponInfo@CgWeaponSystem@@IEBAPEAUClientOffHandWeaponInfo@@XZ(this);
}

/*
==============
CG_GetOffhandSecondaryWeapon
==============
*/

const Weapon *__fastcall CG_GetOffhandSecondaryWeapon(LocalClientNum_t localClientNum)
{
  return ?CG_GetOffhandSecondaryWeapon@@YAAEBUWeapon@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SwitchOffHandCmd
==============
*/

void __fastcall CG_SwitchOffHandCmd(LocalClientNum_t localClientNum)
{
  ?CG_SwitchOffHandCmd@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CalcOffHandAmmo
==============
*/
__int64 CG_CalcOffHandAmmo(const LocalClientNum_t localClientNum, const playerState_s *predictedPlayerState, const OffhandSlot slot)
{
  unsigned int v6; 
  CgWeaponMap **v9; 
  BgWeaponMap *v11; 
  const dvar_t *v12; 
  unsigned int NumWeapons; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  OffhandClass OffhandClass; 
  WeaponDef **v17; 
  WeaponDef *v18; 
  int v19; 
  bool v25; 
  WeaponDef **v26; 
  WeaponDef *v27; 
  int EquippedWeaponIndex; 
  __int64 v29; 
  PlayerEquippedWeaponState *v30; 
  OffhandClass v31; 
  int AmmoInClip; 
  __int64 v34; 
  __int64 v35; 
  Weapon r_weapon; 

  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  v6 = 0;
  v9 = &CgWeaponMap::ms_instance[localClientNum];
  __asm
  {
    vmovups ymmword ptr [rsp+0D8h+r_weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovups xmmword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  qword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  if ( !*v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v11 = *v9;
  v12 = DVARBOOL_bg_giveAll;
  if ( DVARBOOL_bg_giveAll && (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), v12->current.enabled) )
  {
    NumWeapons = BG_GetNumWeapons();
    v14 = NumWeapons;
    if ( NumWeapons > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)NumWeapons, "unsigned", NumWeapons) )
      __debugbreak();
    v15 = 1;
    OffhandClass = BG_GetOffhandClass(predictedPlayerState, slot, v11);
    if ( v14 > 1u )
    {
      v17 = &bg_weaponDefs[1];
      do
      {
        r_weapon.weaponIdx = v15;
        if ( v15 > bg_lastParsedWeaponIndex )
        {
          LODWORD(v35) = bg_lastParsedWeaponIndex;
          LODWORD(v34) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v34, v35) )
            __debugbreak();
        }
        if ( !*v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        v18 = *v17;
        if ( !*v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 156, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
          __debugbreak();
        if ( v18->offhandClass == OffhandClass )
          v6 += BG_GetAmmoInClip(predictedPlayerState, &r_weapon, 0, WEAPON_HAND_DEFAULT);
        ++v15;
        ++v17;
      }
      while ( v15 < v14 );
    }
  }
  else
  {
    v19 = 0;
    while ( 1 )
    {
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      _RAX = BgWeaponMap::GetWeapon(v11, predictedPlayerState->weaponsEquipped[v19]);
      __asm
      {
        vmovups ymm2, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+0D8h+r_weapon.weaponIdx], ymm2
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+5], xmm0
        vmovsd  xmm1, qword ptr [rax+30h]
        vmovd   ebx, xmm2
        vmovsd  qword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+15h], xmm1
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      if ( (_WORD)_EBX )
      {
        if ( (unsigned __int16)_EBX > bg_lastParsedWeaponIndex )
        {
          LODWORD(v35) = bg_lastParsedWeaponIndex;
          LODWORD(v34) = (unsigned __int16)_EBX;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v34, v35) )
            __debugbreak();
        }
        v25 = bg_weaponDefs[(unsigned __int16)_EBX] == NULL;
        v26 = &bg_weaponDefs[(unsigned __int16)_EBX];
        if ( v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        v27 = *v26;
        if ( !*v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 173, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
          __debugbreak();
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( !predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v11, predictedPlayerState, &r_weapon);
        if ( EquippedWeaponIndex >= 0 )
        {
          v29 = EquippedWeaponIndex;
          v30 = &predictedPlayerState->weapEquippedData[v29];
          if ( (const playerState_s *)((char *)predictedPlayerState + 4 * v29) != (const playerState_s *)-1540i64 )
          {
            v31 = BG_GetOffhandClass(predictedPlayerState, slot, v11);
            if ( v30->offhandSlot == slot && v31 == v27->offhandClass )
            {
              AmmoInClip = BG_GetAmmoInClip(predictedPlayerState, &r_weapon, 0, WEAPON_HAND_DEFAULT);
              if ( AmmoInClip > 0 )
                break;
            }
          }
        }
      }
      if ( (unsigned int)++v19 >= 0xF )
        return v6;
    }
    return (unsigned int)AmmoInClip;
  }
  return v6;
}

/*
==============
CG_GetOffHandAmmoCommon
==============
*/
__int64 CG_GetOffHandAmmoCommon(LocalClientNum_t localClientNum, const OffhandSlot offhandSlot)
{
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  unsigned int v6; 
  playerState_s *p_predictedPlayerState; 
  int v8; 
  __int64 v10; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( LocalClientGlobals->predictedPlayerState.pm_type >= 7 )
    return 0i64;
  v6 = 1;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0xAu) )
    return 0i64;
  p_predictedPlayerState = &v5->predictedPlayerState;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 0xBu) || CG_Draw_IsHudHidden() )
    return 0i64;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 235, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = offhandSlot == OFFHAND_SLOT_PRIMARY ? p_predictedPlayerState->weapCommon.offhandPrimary : p_predictedPlayerState->weapCommon.offhandSecondary;
  if ( !v8 )
    return 0i64;
  if ( v8 >= 8 )
  {
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 242, ASSERT_TYPE_ASSERT, "( ( weaponType < OFFHAND_CLASS_COUNT ) )", "( weaponType ) = %i", v10) )
      __debugbreak();
  }
  if ( (v8 != p_predictedPlayerState->weapCommon.offhandPrimary || !p_predictedPlayerState->weaponHudIconOverrides[0]) && (v8 != p_predictedPlayerState->weapCommon.offhandSecondary || !p_predictedPlayerState->weaponHudIconOverrides[1]) && (v8 != p_predictedPlayerState->weapCommon.offhandSpecial || !p_predictedPlayerState->weaponHudIconOverrides[2]) )
  {
    if ( !CG_Weapons_GetBestOffhand(localClientNum, p_predictedPlayerState, offhandSlot)->weaponIdx )
      return 0i64;
    return (unsigned int)CG_CalcOffHandAmmo(localClientNum, p_predictedPlayerState, offhandSlot);
  }
  return v6;
}

/*
==============
CG_GetOffHandPrimaryAmmo
==============
*/
__int64 CG_GetOffHandPrimaryAmmo(LocalClientNum_t localClientNum)
{
  return CG_GetOffHandAmmoCommon(localClientNum, OFFHAND_SLOT_PRIMARY);
}

/*
==============
CG_GetOffHandSecondaryAmmo
==============
*/
__int64 CG_GetOffHandSecondaryAmmo(LocalClientNum_t localClientNum)
{
  return CG_GetOffHandAmmoCommon(localClientNum, OFFHAND_SLOT_SECONDARY);
}

/*
==============
CG_GetOffHandSpecialAmmo
==============
*/
__int64 CG_GetOffHandSpecialAmmo(LocalClientNum_t localClientNum)
{
  return CG_GetOffHandAmmoCommon(localClientNum, OFFHAND_SLOT_SPECIAL);
}

/*
==============
CG_GetOffhandPrimaryMaterial
==============
*/
GfxImage *CG_GetOffhandPrimaryMaterial(LocalClientNum_t localClientNum)
{
  const Weapon *OffhandWeaponForHUD; 

  OffhandWeaponForHUD = CG_Weapons_GetOffhandWeaponForHUD(localClientNum, OFFHAND_SLOT_PRIMARY);
  return BG_HudIcon(OffhandWeaponForHUD, 0);
}

/*
==============
CG_GetOffhandPrimaryWeapon
==============
*/
const Weapon *CG_GetOffhandPrimaryWeapon(LocalClientNum_t localClientNum)
{
  return CG_Weapons_GetOffhandWeaponForHUD(localClientNum, OFFHAND_SLOT_PRIMARY);
}

/*
==============
CG_GetOffhandSecondaryMaterial
==============
*/
GfxImage *CG_GetOffhandSecondaryMaterial(LocalClientNum_t localClientNum)
{
  const Weapon *OffhandWeaponForHUD; 

  OffhandWeaponForHUD = CG_Weapons_GetOffhandWeaponForHUD(localClientNum, OFFHAND_SLOT_SECONDARY);
  return BG_HudIcon(OffhandWeaponForHUD, 0);
}

/*
==============
CG_GetOffhandSecondaryWeapon
==============
*/
const Weapon *CG_GetOffhandSecondaryWeapon(LocalClientNum_t localClientNum)
{
  return CG_Weapons_GetOffhandWeaponForHUD(localClientNum, OFFHAND_SLOT_SECONDARY);
}

/*
==============
CG_OffhandShield_PopulateDepthScanParams
==============
*/
bool CG_OffhandShield_PopulateDepthScanParams(const LocalClientNum_t localClientNum)
{
  return 0;
}

/*
==============
CG_PrepOffHand
==============
*/
void CG_PrepOffHand(LocalClientNum_t localClientNum, const entityState_t *ent, const Weapon *weapon, bool isPlayerView)
{
  unsigned __int16 weaponIdx; 
  CgWeaponSystem *WeaponSystem; 

  if ( BG_IsCharacterEntity(ent) )
  {
    weaponIdx = weapon->weaponIdx;
    if ( (!weapon->weaponIdx || weaponIdx >= BG_GetNumWeapons()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 347, ASSERT_TYPE_ASSERT, "( ( weapon.weaponIdx != 0 && weapon.weaponIdx < BG_GetNumWeapons() ) )", "( weapon.weaponIdx ) = %i", weaponIdx) )
      __debugbreak();
    BG_WeaponDef(weapon, 0);
    WeaponSystem = CgWeaponSystem::GetWeaponSystem(localClientNum);
    if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 352, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
      __debugbreak();
    CgWeaponSystem::PlayPullbackSound(WeaponSystem, ent->number, isPlayerView, weapon, 0);
  }
}

/*
==============
CG_PutAwayOffhand
==============
*/
void CG_PutAwayOffhand(LocalClientNum_t localClientNum, const entityState_t *ent, const Weapon *weapon, bool isPlayerView)
{
  CgSoundSystem *SoundSystem; 
  unsigned __int16 weaponIdx; 
  CgSoundSystem *v10; 
  const WeaponDef *v11; 
  CgWeaponSystem *WeaponSystem; 
  WeaponSFXPackage *sfxPackage; 
  WeaponSFXPackageSounds *sounds; 
  SndAliasLookup v15; 

  if ( BG_IsCharacterEntity(ent) )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    weaponIdx = weapon->weaponIdx;
    v10 = SoundSystem;
    if ( (!weapon->weaponIdx || weaponIdx >= BG_GetNumWeapons()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 371, ASSERT_TYPE_ASSERT, "( ( weapon.weaponIdx != 0 && weapon.weaponIdx < BG_GetNumWeapons() ) )", "( weapon.weaponIdx ) = %i", weaponIdx) )
      __debugbreak();
    v11 = BG_WeaponDef(weapon, 0);
    WeaponSystem = CgWeaponSystem::GetWeaponSystem(localClientNum);
    CgWeaponSystem::StopPullbackSound(WeaponSystem, ent->number);
    sfxPackage = v11->sfxPackage;
    if ( sfxPackage )
    {
      sounds = sfxPackage->sounds;
      if ( isPlayerView )
      {
        if ( !sounds->putawaySoundPlayer.name )
          return;
        v15.name = sounds->putawaySoundPlayer.name;
      }
      else
      {
        if ( !sounds->putawaySound.name )
          return;
        v15.name = sounds->putawaySound.name;
      }
      CgSoundSystem::PlayEntitySoundAliasByLookup(v10, ent->number, v15);
    }
  }
}

/*
==============
CG_QuickPullbackOffhand
==============
*/
void CG_QuickPullbackOffhand(LocalClientNum_t localClientNum, const entityState_t *ent, const Weapon *weapon, bool isPlayerView)
{
  CgSoundSystem *SoundSystem; 
  unsigned __int16 weaponIdx; 
  CgSoundSystem *v10; 
  const WeaponDef *v11; 
  CgWeaponSystem *WeaponSystem; 
  WeaponSFXPackage *sfxPackage; 
  WeaponSFXPackageSounds *sounds; 
  SndAliasLookup v15; 

  if ( BG_IsCharacterEntity(ent) )
  {
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    weaponIdx = weapon->weaponIdx;
    v10 = SoundSystem;
    if ( (!weapon->weaponIdx || weaponIdx >= BG_GetNumWeapons()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 409, ASSERT_TYPE_ASSERT, "( ( weapon.weaponIdx != 0 && weapon.weaponIdx < BG_GetNumWeapons() ) )", "( weapon.weaponIdx ) = %i", weaponIdx) )
      __debugbreak();
    v11 = BG_WeaponDef(weapon, 0);
    WeaponSystem = CgWeaponSystem::GetWeaponSystem(localClientNum);
    CgWeaponSystem::StopPullbackSound(WeaponSystem, ent->number);
    sfxPackage = v11->sfxPackage;
    if ( sfxPackage )
    {
      sounds = sfxPackage->sounds;
      if ( isPlayerView )
      {
        if ( !sounds->pullbackSoundQuickPlayer.name )
          return;
        v15.name = sounds->pullbackSoundQuickPlayer.name;
      }
      else
      {
        if ( !sounds->pullbackSoundQuick.name )
          return;
        v15.name = sounds->pullbackSoundQuick.name;
      }
      CgSoundSystem::PlayEntitySoundAliasByLookup(v10, ent->number, v15);
    }
  }
}

/*
==============
CG_SetEquippedOffHand
==============
*/
void CG_SetEquippedOffHand(LocalClientNum_t localClientNum, const Weapon *offHand)
{
  unsigned __int16 weaponIdx; 
  bool v5; 
  WeaponDef **v6; 
  const char *WeaponName; 
  int v12; 
  unsigned int v13; 
  char output[1024]; 

  weaponIdx = offHand->weaponIdx;
  _RBX = offHand;
  if ( offHand->weaponIdx )
  {
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      v13 = bg_lastParsedWeaponIndex;
      v12 = weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v12, v13) )
        __debugbreak();
    }
    v5 = bg_weaponDefs[weaponIdx] == NULL;
    v6 = &bg_weaponDefs[weaponIdx];
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    if ( (*v6)->offhandClass == OFFHAND_CLASS_NONE )
    {
      WeaponName = BG_GetWeaponName(_RBX, output, 0x400u);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 950, ASSERT_TYPE_ASSERT, "(offHand.weaponIdx == 0 || BG_WeaponDef( offHand, false )->offhandClass != OFFHAND_CLASS_NONE)", "%s\n\toffHand = %s\n", "offHand.weaponIdx == WP_NONE || BG_WeaponDef( offHand, false )->offhandClass != OFFHAND_CLASS_NONE", WeaponName) )
        __debugbreak();
    }
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rax+499C8h], ymm0
    vmovups xmm1, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rax+499E8h], xmm1
    vmovsd  xmm0, qword ptr [rbx+30h]
    vmovsd  qword ptr [rax+499F8h], xmm0
  }
  *(_DWORD *)&_RAX->equippedOffHand.weaponCamo = *(_DWORD *)&_RBX->weaponCamo;
}

/*
==============
CG_SwitchOffHandCmd
==============
*/
void CG_SwitchOffHandCmd(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const Weapon *p_equippedOffHand; 
  CgWeaponMap *Instance; 
  const PlayerEquippedWeaponState *EquippedWeaponState; 
  const char *WeaponName; 
  __int64 v18; 
  unsigned int v19; 
  Weapon r_weapon; 
  char output[1024]; 

  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rsp+4A8h+r_weapon.weaponIdx], ymm0
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rsp+4A8h+r_weapon.attachmentVariationIndices+15h], xmm0
    vmovups xmmword ptr [rsp+4A8h+r_weapon.attachmentVariationIndices+5], xmm1
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_equippedOffHand = &LocalClientGlobals->equippedOffHand;
  if ( LocalClientGlobals->equippedOffHand.weaponIdx )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( BG_WeaponDef(p_equippedOffHand, 0)->offhandClass == OFFHAND_CLASS_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 319, ASSERT_TYPE_ASSERT, "(weapDef->offhandClass != OFFHAND_CLASS_NONE)", (const char *)&queryFormat, "weapDef->offhandClass != OFFHAND_CLASS_NONE") )
      __debugbreak();
    EquippedWeaponState = BG_GetEquippedWeaponState(Instance, &LocalClientGlobals->predictedPlayerState, p_equippedOffHand);
    if ( EquippedWeaponState )
    {
      _RAX = BG_GetFirstAvailableOffhandBySlot(Instance, &LocalClientGlobals->predictedPlayerState, (const OffhandSlot)EquippedWeaponState->offhandSlot);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+4A8h+r_weapon.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+4A8h+r_weapon.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsp+4A8h+r_weapon.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    }
    if ( r_weapon.weaponIdx )
    {
      if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
      {
        v19 = bg_lastParsedWeaponIndex;
        LODWORD(v18) = r_weapon.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v18, v19) )
          __debugbreak();
      }
      if ( !bg_weaponDefs[r_weapon.weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      if ( bg_weaponDefs[r_weapon.weaponIdx]->offhandClass == OFFHAND_CLASS_NONE )
      {
        WeaponName = BG_GetWeaponName(&r_weapon, output, 0x400u);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 950, ASSERT_TYPE_ASSERT, "(offHand.weaponIdx == 0 || BG_WeaponDef( offHand, false )->offhandClass != OFFHAND_CLASS_NONE)", "%s\n\toffHand = %s\n", "offHand.weaponIdx == WP_NONE || BG_WeaponDef( offHand, false )->offhandClass != OFFHAND_CLASS_NONE", WeaponName) )
          __debugbreak();
      }
      _RAX = CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+4A8h+r_weapon.weaponIdx]
        vmovups ymmword ptr [rax+499C8h], ymm0
        vmovups xmm1, xmmword ptr [rsp+4A8h+r_weapon.attachmentVariationIndices+5]
        vmovups xmmword ptr [rax+499E8h], xmm1
        vmovsd  xmm0, qword ptr [rsp+4A8h+r_weapon.attachmentVariationIndices+15h]
        vmovsd  qword ptr [rax+499F8h], xmm0
      }
      *(_DWORD *)&_RAX->equippedOffHand.weaponCamo = *(_DWORD *)&r_weapon.weaponCamo;
    }
  }
}

/*
==============
CG_UseOffHand
==============
*/
void CG_UseOffHand(LocalClientNum_t localClientNum, const centity_t *cent, const Weapon *weapon, bool isAlternate, bool isPlayerView)
{
  unsigned __int16 weaponIdx; 
  cg_t *LocalClientGlobals; 
  const DObj *viewModelDObj; 
  bool TagNameAndBoneIndex; 
  const centity_t *p_viewModelPose; 
  CgSoundSystem *SoundSystem; 
  CgWeaponSystem *WeaponSystem; 
  CgSoundSystem *v16; 
  const SndAliasList *v17; 
  __int64 v18; 
  unsigned __int8 outBoneIndex[4]; 
  scr_string_t outTagName; 
  TagPair result; 
  SndAliasList *aliasList; 
  CgTrajectory v23; 
  vec3_t outPos; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 903, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( BG_IsCharacterEntity(&cent->nextState) )
  {
    weaponIdx = weapon->weaponIdx;
    if ( !weapon->weaponIdx || weaponIdx >= BG_GetNumWeapons() )
    {
      LODWORD(v18) = weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 910, ASSERT_TYPE_ASSERT, "( ( weapon.weaponIdx != 0 && weapon.weaponIdx < BG_GetNumWeapons() ) )", "( weapon.weaponIdx ) = %i", v18) )
        __debugbreak();
    }
    if ( isPlayerView )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      aliasList = (SndAliasList *)BG_FireSound(weapon, isAlternate, 1);
      if ( !aliasList )
        goto LABEL_19;
      BG_GetWeaponFlashTagname(&result, weapon, isAlternate, 0);
      CgTrajectory::CgTrajectory(&v23, localClientNum, cent, &cent->nextState.lerp);
      viewModelDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
      outBoneIndex[0] = -2;
      outTagName = 0;
      TagNameAndBoneIndex = TagPair::GetTagNameAndBoneIndex(&result, viewModelDObj, &outTagName, outBoneIndex);
      if ( cent->nextState.number == LocalClientGlobals->predictedPlayerState.clientNum )
      {
        CG_UpdateViewModelPose(viewModelDObj, localClientNum);
        if ( !TagNameAndBoneIndex )
          goto LABEL_17;
        p_viewModelPose = (const centity_t *)&LocalClientGlobals->viewModelPose;
      }
      else
      {
        if ( !TagNameAndBoneIndex )
          goto LABEL_17;
        p_viewModelPose = cent;
      }
      if ( CG_DObjGetWorldTagPos(&p_viewModelPose->pose, viewModelDObj, outTagName, &outPos) )
      {
LABEL_18:
        SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
        CgSoundSystem::PlaySoundAlias(SoundSystem, cent->nextState.number, &outPos, aliasList);
LABEL_19:
        WeaponSystem = CgWeaponSystem::GetWeaponSystem(localClientNum);
        CgWeaponSystem::OffHandWeaponsPlayerFireFx(WeaponSystem, cent, weapon, isAlternate);
        if ( !BG_WeaponDef(weapon, isAlternate)->disableBreathOffhand )
          CG_SND_PlayerBreathsSetOffhand(localClientNum);
        return;
      }
LABEL_17:
      BgTrajectory::EvaluatePosTrajectory(&v23, LocalClientGlobals->time, &outPos);
      goto LABEL_18;
    }
    v16 = CgSoundSystem::GetSoundSystem(localClientNum);
    v17 = BG_FireSound(weapon, isAlternate, 0);
    if ( v17 )
      CgSoundSystem::PlayEntitySoundAlias(v16, cent->nextState.number, v17);
  }
}

/*
==============
CG_Weapons_GetBestOffhand
==============
*/
const Weapon *CG_Weapons_GetBestOffhand(const LocalClientNum_t localClientNum, const playerState_s *predictedPlayerState, const OffhandSlot slot)
{
  CgWeaponMap **v5; 
  const BgWeaponMap *v6; 
  const Weapon *result; 

  v5 = &CgWeaponMap::ms_instance[localClientNum];
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = *v5;
  result = BG_GetFirstAvailableOffhandBySlot(v6, predictedPlayerState, slot);
  if ( !result->weaponIdx )
    return BG_GetFirstEquippedOffhandBySlot(v6, predictedPlayerState, slot);
  return result;
}

/*
==============
CG_Weapons_GetOffhandWeaponForHUD
==============
*/
Weapon *CG_Weapons_GetOffhandWeaponForHUD(LocalClientNum_t localClientNum, const OffhandSlot slot)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const BgWeaponMap **v5; 
  const BgWeaponMap *v6; 
  const playerState_s *p_predictedPlayerState; 
  int OffhandClass; 
  const Weapon *p_equippedOffHand; 
  const WeaponDef *v11; 
  const PlayerEquippedWeaponState *EquippedWeaponState; 
  OffhandSlot offhandSlot; 
  OffhandClass v14; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v2];
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = *v5;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  OffhandClass = BG_GetOffhandClass(&LocalClientGlobals->predictedPlayerState, slot, *v5);
  if ( !OffhandClass )
    return &NULL_WEAPON;
  if ( OffhandClass <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 90, ASSERT_TYPE_ASSERT, "(weaponType > OFFHAND_CLASS_NONE)", (const char *)&queryFormat, "weaponType > OFFHAND_CLASS_NONE") )
    __debugbreak();
  if ( OffhandClass >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 91, ASSERT_TYPE_ASSERT, "(weaponType < OFFHAND_CLASS_COUNT)", (const char *)&queryFormat, "weaponType < OFFHAND_CLASS_COUNT") )
    __debugbreak();
  p_equippedOffHand = &LocalClientGlobals->equippedOffHand;
  if ( p_equippedOffHand->weaponIdx && (v11 = BG_WeaponDef(p_equippedOffHand, 0), (EquippedWeaponState = BG_GetEquippedWeaponState(v6, p_predictedPlayerState, p_equippedOffHand)) != NULL) && (offhandSlot = EquippedWeaponState->offhandSlot, v14 = BG_GetOffhandClass(p_predictedPlayerState, slot, v6), offhandSlot == slot) && v14 == v11->offhandClass )
    return (Weapon *)p_equippedOffHand;
  else
    return (Weapon *)CG_Weapons_GetBestOffhand((const LocalClientNum_t)v2, p_predictedPlayerState, slot);
}

/*
==============
CG_Weapons_IsOffHandDisplayVisible
==============
*/
bool CG_Weapons_IsOffHandDisplayVisible(const cg_t *cgameGlob)
{
  playerState_s *p_predictedPlayerState; 

  if ( cgameGlob->predictedPlayerState.pm_type >= 7 || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0xAu) )
    return 0;
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 0xBu) && !CG_Draw_IsHudHidden();
}

/*
==============
CgWeaponSystem::OffHandFindFreeFirxFxIndex
==============
*/
__int64 CgWeaponSystem::OffHandFindFreeFirxFxIndex(CgWeaponSystem *this)
{
  unsigned int v1; 
  __int64 i; 
  cg_t *LocalClientGlobals; 
  ClientOffHandWeaponInfo *p_offHandWeaponInfo; 
  char *v6; 
  __int64 v8; 
  __int64 v9; 

  v1 = 0;
  for ( i = 0i64; ; i += 80i64 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    p_offHandWeaponInfo = &LocalClientGlobals->offHandWeaponInfo;
    if ( LocalClientGlobals == (cg_t *)-491192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1118, ASSERT_TYPE_ASSERT, "(offHandInfo)", (const char *)&queryFormat, "offHandInfo") )
      __debugbreak();
    if ( v1 >= 4 )
    {
      LODWORD(v9) = 4;
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1119, ASSERT_TYPE_ASSERT, "(unsigned)( fireFxIndex ) < (unsigned)( (4) )", "fireFxIndex doesn't index OFFHAND_FIRE_FX_MAX\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v6 = (char *)p_offHandWeaponInfo + i;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1133, ASSERT_TYPE_ASSERT, "(fireFxInfo)", (const char *)&queryFormat, "fireFxInfo") )
      __debugbreak();
    if ( !v6[72] )
      break;
    if ( (int)++v1 >= 4 )
      return 0xFFFFFFFFi64;
  }
  return v1;
}

/*
==============
CgWeaponSystem::OffHandGetFireFxInfo
==============
*/
ClientOffHandCameraFireFxInfo *CgWeaponSystem::OffHandGetFireFxInfo(CgWeaponSystem *this, int fireFxIndex)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  ClientOffHandWeaponInfo *p_offHandWeaponInfo; 
  __int64 v6; 
  int v7; 

  v2 = fireFxIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_offHandWeaponInfo = &LocalClientGlobals->offHandWeaponInfo;
  if ( LocalClientGlobals == (cg_t *)-491192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1118, ASSERT_TYPE_ASSERT, "(offHandInfo)", (const char *)&queryFormat, "offHandInfo") )
    __debugbreak();
  if ( (unsigned int)v2 >= 4 )
  {
    v7 = 4;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1119, ASSERT_TYPE_ASSERT, "(unsigned)( fireFxIndex ) < (unsigned)( (4) )", "fireFxIndex doesn't index OFFHAND_FIRE_FX_MAX\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return (ClientOffHandCameraFireFxInfo *)((char *)p_offHandWeaponInfo + 80 * v2);
}

/*
==============
CgWeaponSystem::OffHandGetWeaponInfo
==============
*/
ClientOffHandWeaponInfo *CgWeaponSystem::OffHandGetWeaponInfo(CgWeaponSystem *this)
{
  return &CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->offHandWeaponInfo;
}

/*
==============
CgWeaponSystem::OffHandWeaponGetFireFxIndexForWeapon
==============
*/
__int64 CgWeaponSystem::OffHandWeaponGetFireFxIndexForWeapon(CgWeaponSystem *this, const Weapon *weapon)
{
  unsigned int v2; 
  __int64 i; 
  cg_t *LocalClientGlobals; 
  ClientOffHandWeaponInfo *p_offHandWeaponInfo; 
  __int64 v9; 
  __int64 v10; 

  v2 = 0;
  for ( i = 0i64; ; ++i )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    p_offHandWeaponInfo = &LocalClientGlobals->offHandWeaponInfo;
    if ( LocalClientGlobals == (cg_t *)-491192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1118, ASSERT_TYPE_ASSERT, "(offHandInfo)", (const char *)&queryFormat, "offHandInfo") )
      __debugbreak();
    if ( v2 >= 4 )
    {
      LODWORD(v10) = 4;
      LODWORD(v9) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1119, ASSERT_TYPE_ASSERT, "(unsigned)( fireFxIndex ) < (unsigned)( (4) )", "fireFxIndex doesn't index OFFHAND_FIRE_FX_MAX\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( p_offHandWeaponInfo->fireFxInfos[i].isPlaying && p_offHandWeaponInfo->fireFxInfos[i].weapon.weaponIdx == weapon->weaponIdx )
      break;
    if ( (int)++v2 >= 4 )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
CgWeaponSystem::OffHandWeaponsPlayerFireFx
==============
*/
void CgWeaponSystem::OffHandWeaponsPlayerFireFx(CgWeaponSystem *this, const centity_t *cent, const Weapon *weapon, bool isAlternate)
{
  int v10; 
  ClientOffHandCameraFireFxInfo *FireFxInfo; 
  unsigned int v12; 
  ClientOffHandCameraFireFxInfo *v13; 
  char v16; 
  int time; 
  FxCombinedDef v23; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  cg_t *LocalClientGlobals; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v42; 
  const char *WeaponName; 
  vec3_t origin; 
  __int64 v45; 
  tmat33_t<vec3_t> axis; 
  char dest[1024]; 

  v45 = -2i64;
  _R15 = weapon;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 991, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v10 = 0;
  while ( 1 )
  {
    FireFxInfo = CgWeaponSystem::OffHandGetFireFxInfo(this, v10);
    if ( FireFxInfo->isPlaying && FireFxInfo->weapon.weaponIdx == _R15->weaponIdx )
      break;
    if ( ++v10 >= 4 )
      goto LABEL_11;
  }
  if ( v10 != -1 )
    CgWeaponSystem::OffHandWeaponsStopPlayerFireFx(this, v10);
LABEL_11:
  v12 = 0;
  while ( 1 )
  {
    v13 = CgWeaponSystem::OffHandGetFireFxInfo(this, v12);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1133, ASSERT_TYPE_ASSERT, "(fireFxInfo)", (const char *)&queryFormat, "fireFxInfo") )
      __debugbreak();
    if ( !v13->isPlaying )
      break;
    if ( (int)++v12 >= 4 )
      goto LABEL_19;
  }
  if ( v12 == -1 )
  {
LABEL_19:
    Com_PrintWarning(17, "Too many concurrent OffHand Weapon Fire FXs - ignoring fire FX request\n");
    return;
  }
  _R14 = CgWeaponSystem::OffHandGetFireFxInfo(this, v12);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1008, ASSERT_TYPE_ASSERT, "(fireFxInfo)", (const char *)&queryFormat, "fireFxInfo") )
    __debugbreak();
  *(double *)&_XMM0 = BG_Weapon_GetCameraFireEffectDurationSec(_R15, isAlternate);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  if ( v16 )
  {
    _R14->endTimeMs = 0;
  }
  else
  {
    time = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->time;
    *(double *)&_XMM0 = BG_Weapon_GetCameraFireEffectDurationSec(_R15, isAlternate);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@c47a0000
      vcvttss2si eax, xmm1
    }
    _R14->endTimeMs = time - _EAX;
  }
  _R14->isPlaying = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [r14+8], ymm0
    vmovups xmm1, xmmword ptr [r15+20h]
    vmovups xmmword ptr [r14+28h], xmm1
    vmovsd  xmm0, qword ptr [r15+30h]
    vmovsd  qword ptr [r14+38h], xmm0
  }
  *(_DWORD *)&_R14->weapon.weaponCamo = *(_DWORD *)&_R15->weaponCamo;
  v23.particleSystemDef = BG_Weapon_GetCameraFireEffect(_R15, isAlternate).particleSystemDef;
  if ( v23.particleSystemDef )
  {
    _R14->regFx.m_particleSystemDef = v23.particleSystemDef;
    AnglesToAxis(&cent->pose.angles, &axis);
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
    FunctionPointer_origin(&cent->pose.origin.origin.origin, &origin);
    if ( cent->pose.isPosePrecise )
    {
      __asm
      {
        vmovd   xmm0, dword ptr [rsp+4C8h+origin]
        vcvtdq2pd xmm0, xmm0
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsp+4C8h+origin], xmm1
        vmovd   xmm2, dword ptr [rsp+4C8h+origin+4]
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsp+4C8h+origin+4], xmm1
        vmovd   xmm2, dword ptr [rsp+4C8h+origin+8]
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsp+4C8h+origin+8], xmm1
      }
    }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    FX_PlayOrientedEffect(this->m_localClientNum, &_R14->regFx, LocalClientGlobals->time, &origin, &axis);
    memset(&origin, 0, sizeof(origin));
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
  ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
  Com_sprintf(dest, 0x400ui64, "cg.player.offhand.fired.%d.active", v12);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, dest);
  LUI_Model_SetBool(ModelFromPath, 1);
  Com_sprintf(dest, 0x400ui64, "cg.player.offhand.fired.%d.name", v12);
  v42 = LUI_Model_CreateModelFromPath(ModelForController, dest);
  WeaponName = BG_GetWeaponName(_R15, dest, 0x400u);
  LUI_Model_SetString(v42, WeaponName);
}

/*
==============
CgWeaponSystem::OffHandWeaponsStopPlayerFireFx
==============
*/
void CgWeaponSystem::OffHandWeaponsStopPlayerFireFx(CgWeaponSystem *this, int fireFxIndex)
{
  ClientOffHandCameraFireFxInfo *FireFxInfo; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  char dest[1024]; 

  if ( fireFxIndex != -1 )
  {
    FireFxInfo = CgWeaponSystem::OffHandGetFireFxInfo(this, fireFxIndex);
    if ( !FireFxInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 1065, ASSERT_TYPE_ASSERT, "(fireFxInfo)", (const char *)&queryFormat, "fireFxInfo") )
      __debugbreak();
    if ( FireFxInfo->isPlaying )
      FX_KillEffectDef(this->m_localClientNum, &FireFxInfo->regFx);
    FireFxInfo->isPlaying = 0;
    Com_sprintf(dest, 0x400ui64, "cg.player.offhand.fired.%d.active", (unsigned int)fireFxIndex);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(this->m_localClientNum);
    ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
    ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, dest);
    LUI_Model_SetBool(ModelFromPath, 0);
  }
}

/*
==============
CgWeaponSystem::OffHandWeaponsUpdate
==============
*/
void CgWeaponSystem::OffHandWeaponsUpdate(CgWeaponSystem *this, const playerState_s *ps)
{
  int i; 
  ClientOffHandCameraFireFxInfo *FireFxInfo; 
  int pm_type; 
  int endTimeMs; 
  cg_t *LocalClientGlobals; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 962, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  for ( i = 0; i < 4; ++i )
  {
    FireFxInfo = CgWeaponSystem::OffHandGetFireFxInfo(this, i);
    if ( !FireFxInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_offhandweapons.cpp", 967, ASSERT_TYPE_ASSERT, "(fireFxInfo)", (const char *)&queryFormat, "fireFxInfo") )
      __debugbreak();
    if ( FireFxInfo->isPlaying )
    {
      pm_type = ps->pm_type;
      endTimeMs = FireFxInfo->endTimeMs;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
      if ( pm_type >= 7 || LocalClientGlobals->time > FireFxInfo->endTimeMs && endTimeMs )
        CgWeaponSystem::OffHandWeaponsStopPlayerFireFx(this, i);
    }
  }
}

