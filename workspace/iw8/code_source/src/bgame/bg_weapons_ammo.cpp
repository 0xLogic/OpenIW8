/*
==============
BG_GetClipAmmoPtr
==============
*/

ClipAmmo *__fastcall BG_GetClipAmmoPtr(playerState_s *ps, const AmmoStore *r_clipIndex)
{
  return ?BG_GetClipAmmoPtr@@YAPEAUClipAmmo@@PEAUplayerState_s@@AEBUAmmoStore@@@Z(ps, r_clipIndex);
}

/*
==============
PM_WeaponClipEmpty
==============
*/

int __fastcall PM_WeaponClipEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps, PlayerHandIndex hand)
{
  return ?PM_WeaponClipEmpty@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@W4PlayerHandIndex@@@Z(weaponMap, ps, hand);
}

/*
==============
BG_AmmoStoreForWeapon
==============
*/

AmmoStore *__fastcall BG_AmmoStoreForWeapon(AmmoStore *result, const Weapon *weapon, bool isAlternate)
{
  return ?BG_AmmoStoreForWeapon@@YA?AUAmmoStore@@AEBUWeapon@@_N@Z(result, weapon, isAlternate);
}

/*
==============
PM_ReloadClip
==============
*/

void __fastcall PM_ReloadClip(pmove_t *pm, PlayerHandIndex hand)
{
  ?PM_ReloadClip@@YAXPEAVpmove_t@@W4PlayerHandIndex@@@Z(pm, hand);
}

/*
==============
BG_OffhandDoesNotConsumeAmmo
==============
*/

bool __fastcall BG_OffhandDoesNotConsumeAmmo(const Weapon *weapon, bool isAlternate)
{
  return ?BG_OffhandDoesNotConsumeAmmo@@YA_NAEBUWeapon@@_N@Z(weapon, isAlternate);
}

/*
==============
BG_IsValidAmmo
==============
*/

int __fastcall BG_IsValidAmmo(const AmmoStore *r_ammo)
{
  return ?BG_IsValidAmmo@@YAHAEBUAmmoStore@@@Z(r_ammo);
}

/*
==============
BG_CreateClipAmmoPtr
==============
*/

ClipAmmo *__fastcall BG_CreateClipAmmoPtr(playerState_s *ps, const AmmoStore *r_clipIndex)
{
  return ?BG_CreateClipAmmoPtr@@YAPEAUClipAmmo@@PEAUplayerState_s@@AEBUAmmoStore@@@Z(ps, r_clipIndex);
}

/*
==============
PM_WeaponPassClipAmmoToRightHand
==============
*/

void __fastcall PM_WeaponPassClipAmmoToRightHand(playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  ?PM_WeaponPassClipAmmoToRightHand@@YAXPEAUplayerState_s@@AEBUWeapon@@_N@Z(ps, r_weapon, isAlternate);
}

/*
==============
PM_WeaponRechamberAmmo
==============
*/

void __fastcall PM_WeaponRechamberAmmo(playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand)
{
  ?PM_WeaponRechamberAmmo@@YAXPEAUplayerState_s@@AEBUWeapon@@_NW4PlayerHandIndex@@@Z(ps, r_weapon, isAlternate, hand);
}

/*
==============
BG_WeaponAmmo
==============
*/

int __fastcall BG_WeaponAmmo(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  return ?BG_WeaponAmmo@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@_N@Z(weaponMap, ps, weapon, isAlternate);
}

/*
==============
BG_GetWeaponAmmoPoolName
==============
*/

bool __fastcall BG_GetWeaponAmmoPoolName(const Weapon *weapon, bool isAlternate, const BgHandler *const handler, char *outAmmoName, unsigned __int64 maxStringLen)
{
  return ?BG_GetWeaponAmmoPoolName@@YA_NAEBUWeapon@@_NQEBVBgHandler@@PEAD_K@Z(weapon, isAlternate, handler, outAmmoName, maxStringLen);
}

/*
==============
BG_WeaponWillHaveEnoughAmmoToFireAfterAutoReload
==============
*/

bool __fastcall BG_WeaponWillHaveEnoughAmmoToFireAfterAutoReload(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_WeaponWillHaveEnoughAmmoToFireAfterAutoReload@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_IsAmmoCompatible
==============
*/

int __fastcall BG_IsAmmoCompatible(const AmmoStore *r_ammo1, const AmmoStore *r_ammo2)
{
  return ?BG_IsAmmoCompatible@@YAHAEBUAmmoStore@@0@Z(r_ammo1, r_ammo2);
}

/*
==============
BG_GetWeaponHudIconOverrideAmmo
==============
*/

int __fastcall BG_GetWeaponHudIconOverrideAmmo(const playerState_s *const ps, int weaponIndex)
{
  return ?BG_GetWeaponHudIconOverrideAmmo@@YAHQEBUplayerState_s@@H@Z(ps, weaponIndex);
}

/*
==============
BG_RemoveClipAmmo
==============
*/

void __fastcall BG_RemoveClipAmmo(playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  ?BG_RemoveClipAmmo@@YAXPEAUplayerState_s@@AEBUWeapon@@_N@Z(ps, weapon, isAlternate);
}

/*
==============
PM_CalcBaselineAmmoAdd
==============
*/

int __fastcall PM_CalcBaselineAmmoAdd(pmove_t *pm, const PlayerHandIndex hand, const Weapon *currentWeapon, const bool isAlternate, const bool checkOtherHandReloadState)
{
  return ?PM_CalcBaselineAmmoAdd@@YAHPEAVpmove_t@@W4PlayerHandIndex@@AEBUWeapon@@_N3@Z(pm, hand, currentWeapon, isAlternate, checkOtherHandReloadState);
}

/*
==============
PM_GetWeaponLastChamberFired
==============
*/

int __fastcall PM_GetWeaponLastChamberFired(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand)
{
  return ?PM_GetWeaponLastChamberFired@@YAHPEBUplayerState_s@@AEBUWeapon@@_NW4PlayerHandIndex@@@Z(ps, r_weapon, isAlternate, hand);
}

/*
==============
BG_GetMaxChamberedAmmo
==============
*/

int __fastcall BG_GetMaxChamberedAmmo(const Weapon *r_weapon, bool isAlternate)
{
  return ?BG_GetMaxChamberedAmmo@@YAHAEBUWeapon@@_N@Z(r_weapon, isAlternate);
}

/*
==============
BG_WeaponIsClipOnly
==============
*/

int __fastcall BG_WeaponIsClipOnly(const Weapon *weapon, bool isAlternate)
{
  return ?BG_WeaponIsClipOnly@@YAHAEBUWeapon@@_N@Z(weapon, isAlternate);
}

/*
==============
BG_WeaponBothClipEmpty
==============
*/

int __fastcall BG_WeaponBothClipEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_WeaponBothClipEmpty@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_WeaponUseAmmo
==============
*/

void __fastcall PM_WeaponUseAmmo(playerState_s *ps, const Weapon *weapon, bool isAlternate, int amount, PlayerHandIndex hand)
{
  ?PM_WeaponUseAmmo@@YAXPEAUplayerState_s@@AEBUWeapon@@_NHW4PlayerHandIndex@@@Z(ps, weapon, isAlternate, amount, hand);
}

/*
==============
PM_WeaponDistributeClipAmmoBetweenHands
==============
*/

void __fastcall PM_WeaponDistributeClipAmmoBetweenHands(playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  ?PM_WeaponDistributeClipAmmoBetweenHands@@YAXPEAUplayerState_s@@AEBUWeapon@@_N@Z(ps, r_weapon, isAlternate);
}

/*
==============
BG_GetTotalAmmoReserve
==============
*/

int __fastcall BG_GetTotalAmmoReserve(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  return ?BG_GetTotalAmmoReserve@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@_N@Z(weaponMap, ps, weapon, isAlternate);
}

/*
==============
BG_AddClipAmmo
==============
*/

void __fastcall BG_AddClipAmmo(playerState_s *ps, const AmmoStore *r_clipIndex, PlayerHandIndex hand, int amount)
{
  ?BG_AddClipAmmo@@YAXPEAUplayerState_s@@AEBUAmmoStore@@W4PlayerHandIndex@@H@Z(ps, r_clipIndex, hand, amount);
}

/*
==============
BG_SetWeaponHudIconOverrideAmmo
==============
*/

void __fastcall BG_SetWeaponHudIconOverrideAmmo(playerState_s *ps, int weaponIndex, int ammoCount)
{
  ?BG_SetWeaponHudIconOverrideAmmo@@YAXPEAUplayerState_s@@HH@Z(ps, weaponIndex, ammoCount);
}

/*
==============
BG_SetClipAmmo
==============
*/

void __fastcall BG_SetClipAmmo(playerState_s *ps, const AmmoStore *r_clipIndex, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand, int amount)
{
  ?BG_SetClipAmmo@@YAXPEAUplayerState_s@@AEBUAmmoStore@@AEBUWeapon@@_NW4PlayerHandIndex@@H@Z(ps, r_clipIndex, r_weapon, isAlternate, hand, amount);
}

/*
==============
BG_IsRemoveWeaponOnEmpty
==============
*/

int __fastcall BG_IsRemoveWeaponOnEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  return ?BG_IsRemoveWeaponOnEmpty@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@_N@Z(weaponMap, ps, weapon, isAlternate);
}

/*
==============
BG_GetMaxPickupableAmmo
==============
*/

int __fastcall BG_GetMaxPickupableAmmo(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  return ?BG_GetMaxPickupableAmmo@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@_N@Z(weaponMap, ps, weapon, isAlternate);
}

/*
==============
BG_GetClipAmmoPtrConst
==============
*/

const ClipAmmo *__fastcall BG_GetClipAmmoPtrConst(const playerState_s *ps, const AmmoStore *r_clipIndex)
{
  return ?BG_GetClipAmmoPtrConst@@YAPEBUClipAmmo@@PEBUplayerState_s@@AEBUAmmoStore@@@Z(ps, r_clipIndex);
}

/*
==============
BG_WeaponAllowsAmmoPickup
==============
*/

int __fastcall BG_WeaponAllowsAmmoPickup(const Weapon *weapon, bool isAlternate)
{
  return ?BG_WeaponAllowsAmmoPickup@@YAHAEBUWeapon@@_N@Z(weapon, isAlternate);
}

/*
==============
BG_GetAmmoPlayerMax
==============
*/

int __fastcall BG_GetAmmoPlayerMax(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate, const Weapon *weaponToSkip)
{
  return ?BG_GetAmmoPlayerMax@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@_N2@Z(weaponMap, ps, weapon, isAlternate, weaponToSkip);
}

/*
==============
BG_IsClipCompatible
==============
*/

int __fastcall BG_IsClipCompatible(const AmmoStore *r_clip1, const AmmoStore *r_clip2)
{
  return ?BG_IsClipCompatible@@YAHAEBUAmmoStore@@0@Z(r_clip1, r_clip2);
}

/*
==============
BG_AddClipAmmo
==============
*/
void BG_AddClipAmmo(playerState_s *ps, const AmmoStore *r_clipIndex, PlayerHandIndex hand, int amount)
{
  __int64 v4; 
  ClipAmmo *ClipAmmoPtr; 

  v4 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 444, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ClipAmmoPtr = BG_CreateClipAmmoPtr(ps, r_clipIndex);
  if ( !ClipAmmoPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 446, ASSERT_TYPE_ASSERT, "(clipAmmo)", "%s\n\tTried to add ammo to clipIndex (ammotype=%i), but we can't find that in our clip ammo list", "clipAmmo", r_clipIndex->ammoType) )
    __debugbreak();
  if ( amount >= 0 || ClipAmmoPtr->ammoCount[v4] >= -amount )
    ClipAmmoPtr->ammoCount[v4] += amount;
  else
    ClipAmmoPtr->ammoCount[v4] = 0;
}

/*
==============
BG_AmmoStoreForWeapon
==============
*/
AmmoStore *BG_AmmoStoreForWeapon(AmmoStore *result, const Weapon *weapon, bool isAlternate)
{
  int v3; 
  __int128 v6; 
  double v7; 
  bool v8; 
  AmmoStore *v9; 

  v3 = *(_DWORD *)&weapon->weaponCamo;
  result->ammoType = WEAPON_AMMO_PRIMARY;
  v6 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  *(__m256i *)&result->weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
  v7 = *(double *)&weapon->attachmentVariationIndices[21];
  *(_OWORD *)&result->weapon.attachmentVariationIndices[5] = v6;
  *(double *)&result->weapon.attachmentVariationIndices[21] = v7;
  *(_DWORD *)&result->weapon.weaponCamo = v3;
  if ( !isAlternate || !BG_HasUnderbarrelAmmo(weapon) )
    return result;
  v8 = !BG_AltSharesAmmo(weapon);
  v9 = result;
  if ( v8 )
    result->ammoType = WEAPON_AMMO_ALTERNATE;
  return v9;
}

/*
==============
BG_CreateClipAmmoPtr
==============
*/
ClipAmmo *BG_CreateClipAmmoPtr(playerState_s *ps, const AmmoStore *r_clipIndex)
{
  ClipAmmo *result; 
  __int64 v5; 
  ClipAmmo *ammoInClip; 
  ClipAmmo *v7; 

  result = BG_GetClipAmmoPtr(ps, r_clipIndex);
  if ( !result )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 388, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v5 = 0i64;
    ammoInClip = ps->weapCommon.ammoInClip;
    v7 = ammoInClip;
    do
    {
      if ( !v7->clipIndex.weapon.weaponIdx )
      {
        memset_0(v7, 0, sizeof(ClipAmmo));
        ammoInClip = v7;
        goto LABEL_11;
      }
      ++v5;
      ++v7;
    }
    while ( v5 < 15 );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 398, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "All clipAmmo slots are full!") )
      __debugbreak();
LABEL_11:
    result = ammoInClip;
    *(__m256i *)&ammoInClip->clipIndex.weapon.weaponIdx = *(__m256i *)&r_clipIndex->weapon.weaponIdx;
    *(__m256i *)&ammoInClip->clipIndex.weapon.attachmentVariationIndices[5] = *(__m256i *)&r_clipIndex->weapon.attachmentVariationIndices[5];
  }
  return result;
}

/*
==============
BG_GetAmmoPlayerMax
==============
*/
int BG_GetAmmoPlayerMax(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate, const Weapon *weaponToSkip)
{
  __int16 v5; 
  const WeaponDef *v10; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v13; 
  bool v14; 
  int v15; 
  unsigned int v16; 
  const WeaponDef *v17; 
  __int64 v18; 
  __int64 v19; 
  __m256i v20; 
  __m256i v21; 
  __m256i v22; 
  __m256i v23; 
  Weapon Buf1; 
  AmmoStore r_ammo2; 
  AmmoStore r_ammo1; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 150, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 151, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = BG_WeaponDef(weapon, isAlternate);
  if ( v10->iSharedAmmoCapIndex >= 0 )
    return v10->iSharedAmmoCap;
  if ( BG_WeaponDef(weapon, isAlternate)->bClipOnly )
    return BG_GetClipSize(ps, weapon, isAlternate);
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(7u);
  v13 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
    {
      LODWORD(v18) = PerkNetworkPriorityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, 64) )
        __debugbreak();
    }
    v14 = ((0x80000000 >> (v13 & 0x1F)) & ps->perks.array[v13 >> 5]) != 0;
  }
  else
  {
    v14 = 0;
  }
  v20.m256i_i64[3] = *(unsigned int *)&weapon->weaponCamo;
  v22 = *(__m256i *)&weapon->weaponIdx;
  *(_OWORD *)v20.m256i_i8 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  v20.m256i_i64[2] = *(_QWORD *)&weapon->attachmentVariationIndices[21];
  if ( isAlternate && BG_HasUnderbarrelAmmo(weapon) )
    v20.m256i_i32[7] = !BG_AltSharesAmmo(weapon);
  *(__m256i *)&r_ammo2.weapon.weaponIdx = v22;
  v15 = 0;
  *(__m256i *)&r_ammo2.weapon.attachmentVariationIndices[5] = v20;
  v16 = 0;
  while ( 1 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v16 >= 0xF )
    {
      LODWORD(v19) = 15;
      LODWORD(v18) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    Buf1 = *BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v16]);
    if ( !v5 || !memcmp_0(&Buf1, weaponToSkip, 0x3Cui64) )
      goto LABEL_40;
    v17 = BG_WeaponDef(&Buf1, isAlternate);
    v21.m256i_i64[3] = *(unsigned int *)&Buf1.weaponCamo;
    v23 = *(__m256i *)&Buf1.weaponIdx;
    *(_OWORD *)v21.m256i_i8 = *(_OWORD *)&Buf1.attachmentVariationIndices[5];
    v21.m256i_i64[2] = *(__int64 *)&Buf1.attachmentVariationIndices[21];
    if ( isAlternate && BG_HasUnderbarrelAmmo(&Buf1) )
      v21.m256i_i32[7] = !BG_AltSharesAmmo(&Buf1);
    *(__m256i *)&r_ammo1.weapon.weaponIdx = v23;
    *(__m256i *)&r_ammo1.weapon.attachmentVariationIndices[5] = v21;
    if ( !BG_IsAmmoCompatible(&r_ammo1, &r_ammo2) )
      goto LABEL_40;
    if ( v17->iSharedAmmoCapIndex >= 0 )
      return v17->iSharedAmmoCap;
    if ( !isAlternate || BG_HasUnderbarrelAmmo(&Buf1) )
      v15 += BG_MaxAmmo(&Buf1, isAlternate, v14);
LABEL_40:
    if ( (int)++v16 >= 15 )
      return v15;
  }
}

/*
==============
BG_GetClipAmmoPtr
==============
*/
ClipAmmo *BG_GetClipAmmoPtr(playerState_s *ps, const AmmoStore *r_clipIndex)
{
  WeaponAmmoType ammoType; 
  __int64 v5; 
  ClipAmmo *i; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 351, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ammoType = r_clipIndex->ammoType;
  v5 = 0i64;
  for ( i = ps->weapCommon.ammoInClip; i->clipIndex.ammoType != ammoType || memcmp_0(i, r_clipIndex, 0x3Cui64); ++i )
  {
    if ( ++v5 >= 15 )
      return 0i64;
  }
  return i;
}

/*
==============
BG_GetClipAmmoPtrConst
==============
*/
ClipAmmo *BG_GetClipAmmoPtrConst(const playerState_s *ps, const AmmoStore *r_clipIndex)
{
  WeaponAmmoType ammoType; 
  __int64 v5; 
  ClipAmmo *i; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 368, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ammoType = r_clipIndex->ammoType;
  v5 = 0i64;
  for ( i = ps->weapCommon.ammoInClip; i->clipIndex.ammoType != ammoType || memcmp_0(i, r_clipIndex, 0x3Cui64); ++i )
  {
    if ( ++v5 >= 15 )
      return 0i64;
  }
  return i;
}

/*
==============
BG_GetMaxChamberedAmmo
==============
*/
int BG_GetMaxChamberedAmmo(const Weapon *r_weapon, bool isAlternate)
{
  weapFireType_t WeaponFireType; 

  WeaponFireType = BG_GetWeaponFireType(r_weapon, isAlternate);
  if ( WeaponFireType == WEAPON_FIRETYPE_DOUBLEBARREL )
    return 2;
  if ( WeaponFireType == WEAPON_FIRETYPE_BURST && BG_IsBoltAction(r_weapon, isAlternate) )
    return BG_GetWeaponBurstCount(r_weapon, isAlternate);
  return 1;
}

/*
==============
BG_GetMaxPickupableAmmo
==============
*/
__int64 BG_GetMaxPickupableAmmo(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  unsigned __int16 v4; 
  BgWeaponMap *v8; 
  const WeaponDef *v9; 
  int ClipSize; 
  unsigned int v11; 
  int AmmoPlayerMax; 
  unsigned int iSharedAmmoCap; 
  unsigned int v15; 
  int v16; 
  unsigned __int16 weaponIdx; 
  bool v18; 
  WeaponDef **v19; 
  unsigned int v20; 
  int v21; 
  int ammoCount; 
  __m256i v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __m256i v28; 
  __m256i v29; 
  __m256i v30; 
  const WeaponDef *v31; 
  __m256i v32; 
  __m256i v33; 
  __m256i v34; 
  Weapon r_weapon; 
  AmmoStore r_ammo2; 
  AmmoStore v37; 
  AmmoStore r_ammo1[15]; 

  v8 = (BgWeaponMap *)weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 209, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 210, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = BG_WeaponDef(weapon, isAlternate);
  v31 = v9;
  v28.m256i_i64[3] = *(unsigned int *)&weapon->weaponCamo;
  v32 = *(__m256i *)&weapon->weaponIdx;
  *(_OWORD *)v28.m256i_i8 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  v28.m256i_i64[2] = *(_QWORD *)&weapon->attachmentVariationIndices[21];
  if ( isAlternate && BG_HasUnderbarrelAmmo(weapon) )
    v28.m256i_i32[7] = !BG_AltSharesAmmo(weapon);
  *(__m256i *)&r_ammo2.weapon.weaponIdx = v32;
  *(__m256i *)&r_ammo2.weapon.attachmentVariationIndices[5] = v28;
  if ( v9->iSharedAmmoCapIndex >= 0 )
  {
    iSharedAmmoCap = v9->iSharedAmmoCap;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      r_weapon = *BgWeaponMap::GetWeapon(v8, ps->weaponsEquipped[v16]);
      weaponIdx = v4;
      if ( v4 )
      {
        if ( v4 > bg_lastParsedWeaponIndex )
        {
          LODWORD(v26) = bg_lastParsedWeaponIndex;
          LODWORD(v25) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v25, v26) )
            __debugbreak();
          weaponIdx = r_weapon.weaponIdx;
        }
        if ( !bg_weaponDefs[v4] )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          weaponIdx = r_weapon.weaponIdx;
        }
        if ( bg_weaponDefs[v4]->iSharedAmmoCapIndex == v31->iSharedAmmoCapIndex )
        {
          if ( weaponIdx > bg_lastParsedWeaponIndex )
          {
            LODWORD(v26) = bg_lastParsedWeaponIndex;
            LODWORD(v25) = weaponIdx;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v25, v26) )
              __debugbreak();
          }
          v18 = bg_weaponDefs[weaponIdx] == NULL;
          v19 = &bg_weaponDefs[weaponIdx];
          if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
            __debugbreak();
          if ( (*v19)->bClipOnly )
          {
            v8 = (BgWeaponMap *)weaponMap;
            iSharedAmmoCap -= BG_GetAmmoInClipForWeapon(ps, &r_weapon, isAlternate, WEAPON_HAND_DEFAULT);
            if ( BG_PlayerDualWieldingWeapon(weaponMap, ps, &r_weapon) )
              iSharedAmmoCap -= BG_GetAmmoInClipForWeapon(ps, &r_weapon, isAlternate, WEAPON_HAND_LEFT);
            goto LABEL_69;
          }
          v29.m256i_i64[3] = *(unsigned int *)&r_weapon.weaponCamo;
          v33 = *(__m256i *)&r_weapon.weaponIdx;
          *(_OWORD *)v29.m256i_i8 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
          v29.m256i_i64[2] = *(__int64 *)&r_weapon.attachmentVariationIndices[21];
          if ( isAlternate && BG_HasUnderbarrelAmmo(&r_weapon) )
            v29.m256i_i32[7] = !BG_AltSharesAmmo(&r_weapon);
          v20 = 0;
          *(__m256i *)&r_ammo2.weapon.weaponIdx = v33;
          for ( *(__m256i *)&r_ammo2.weapon.attachmentVariationIndices[5] = v29; v20 < v15; ++v20 )
          {
            if ( BG_IsAmmoCompatible(&r_ammo1[(unsigned __int64)v20], &r_ammo2) )
              break;
          }
          if ( v20 == v15 )
          {
            if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            v30.m256i_i64[3] = *(unsigned int *)&r_weapon.weaponCamo;
            v34 = *(__m256i *)&r_weapon.weaponIdx;
            *(_OWORD *)v30.m256i_i8 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
            v30.m256i_i64[2] = *(__int64 *)&r_weapon.attachmentVariationIndices[21];
            if ( isAlternate && BG_HasUnderbarrelAmmo(&r_weapon) )
              v30.m256i_i32[7] = !BG_AltSharesAmmo(&r_weapon);
            *(__m256i *)&v37.weapon.weaponIdx = v34;
            *(__m256i *)&v37.weapon.attachmentVariationIndices[5] = v30;
            if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            v21 = 0;
            while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v21].ammoType, &v37) )
            {
              if ( (unsigned int)++v21 >= 0xF )
                goto LABEL_66;
            }
            if ( (const playerState_s *)((char *)ps + 68 * v21) == (const playerState_s *)-1912i64 )
            {
LABEL_66:
              ammoCount = 0;
              goto LABEL_67;
            }
            ammoCount = ps->weapCommon.ammoNotInClip[v21].ammoCount;
LABEL_67:
            v23 = *(__m256i *)&r_ammo2.weapon.attachmentVariationIndices[5];
            iSharedAmmoCap -= ammoCount;
            v24 = (unsigned __int64)v15++ << 6;
            *(__m256i *)((char *)&r_ammo1[0].weapon.weaponIdx + v24) = *(__m256i *)&r_ammo2.weapon.weaponIdx;
            *(__m256i *)&r_ammo1[0].weapon.attachmentVariationIndices[v24 + 5] = v23;
          }
        }
      }
      v8 = (BgWeaponMap *)weaponMap;
LABEL_69:
      if ( (unsigned int)++v16 >= 0xF )
        return iSharedAmmoCap;
    }
  }
  if ( BG_WeaponDef(weapon, isAlternate)->bClipOnly )
  {
    ClipSize = BG_GetClipSize(ps, weapon, isAlternate);
    v11 = ClipSize - BG_GetAmmoInClipForWeapon(ps, weapon, isAlternate, WEAPON_HAND_DEFAULT);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_Skydive_IsSkydiving(ps) && BG_Ladder_IsDualWieldingAllowed(ps) && ps->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT )
      v11 += ClipSize - BG_GetAmmoInClipForWeapon(ps, weapon, isAlternate, WEAPON_HAND_LEFT);
    return v11;
  }
  else
  {
    AmmoPlayerMax = BG_GetAmmoPlayerMax(v8, ps, weapon, isAlternate, &NULL_WEAPON);
    return (unsigned int)(AmmoPlayerMax - BG_GetAmmoNotInClip(ps, weapon, isAlternate));
  }
}

/*
==============
BG_GetTotalAmmoReserve
==============
*/
int BG_GetTotalAmmoReserve(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  unsigned __int16 v4; 
  BgWeaponMap *v5; 
  int v6; 
  unsigned int v10; 
  int v11; 
  unsigned __int16 weaponIdx; 
  bool v13; 
  WeaponDef **v14; 
  int AmmoInClipBothHands; 
  unsigned int v16; 
  __m256i v17; 
  __m256i v18; 
  unsigned __int64 v19; 
  int v20; 
  __int64 v22; 
  __int64 v23; 
  const WeaponDef *v25; 
  __m256i v26; 
  __m256i v27; 
  __m256i v28; 
  __m256i v29; 
  Weapon r_weapon; 
  AmmoStore r_ammo2; 
  AmmoStore v32; 
  AmmoStore r_ammo1[15]; 

  v5 = (BgWeaponMap *)weaponMap;
  v6 = 0;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 285, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 286, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = 0;
  v25 = BG_WeaponDef(weapon, isAlternate);
  if ( v25->iSharedAmmoCapIndex >= 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      r_weapon = *BgWeaponMap::GetWeapon(v5, ps->weaponsEquipped[v11]);
      weaponIdx = v4;
      if ( !v4 )
        goto LABEL_56;
      if ( v4 > bg_lastParsedWeaponIndex )
      {
        LODWORD(v23) = bg_lastParsedWeaponIndex;
        LODWORD(v22) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v22, v23) )
          __debugbreak();
        weaponIdx = r_weapon.weaponIdx;
      }
      if ( !bg_weaponDefs[v4] )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        weaponIdx = r_weapon.weaponIdx;
      }
      if ( bg_weaponDefs[v4]->iSharedAmmoCapIndex == v25->iSharedAmmoCapIndex )
      {
        if ( weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(v23) = bg_lastParsedWeaponIndex;
          LODWORD(v22) = weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v22, v23) )
            __debugbreak();
        }
        v13 = bg_weaponDefs[weaponIdx] == NULL;
        v14 = &bg_weaponDefs[weaponIdx];
        if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
          __debugbreak();
        if ( (*v14)->bClipOnly )
        {
          AmmoInClipBothHands = BG_GetAmmoInClipBothHands(ps, &r_weapon, isAlternate);
        }
        else
        {
          v26.m256i_i64[3] = *(unsigned int *)&r_weapon.weaponCamo;
          v28 = *(__m256i *)&r_weapon.weaponIdx;
          *(_OWORD *)v26.m256i_i8 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
          v26.m256i_i64[2] = *(__int64 *)&r_weapon.attachmentVariationIndices[21];
          if ( isAlternate && BG_HasUnderbarrelAmmo(&r_weapon) )
            v26.m256i_i32[7] = !BG_AltSharesAmmo(&r_weapon);
          v16 = 0;
          v17 = v28;
          v18 = v26;
          *(__m256i *)&r_ammo2.weapon.weaponIdx = v28;
          *(__m256i *)&r_ammo2.weapon.attachmentVariationIndices[5] = v26;
          if ( v10 )
          {
            do
            {
              if ( BG_IsAmmoCompatible(&r_ammo1[(unsigned __int64)v16], &r_ammo2) )
                break;
              ++v16;
            }
            while ( v16 < v10 );
            v18 = *(__m256i *)&r_ammo2.weapon.attachmentVariationIndices[5];
            v17 = *(__m256i *)&r_ammo2.weapon.weaponIdx;
          }
          if ( v16 != v10 )
            goto LABEL_55;
          v19 = (unsigned __int64)v10++ << 6;
          *(__m256i *)((char *)&r_ammo1[0].weapon.weaponIdx + v19) = v17;
          *(__m256i *)&r_ammo1[0].weapon.attachmentVariationIndices[v19 + 5] = v18;
          if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          v27.m256i_i64[3] = *(unsigned int *)&r_weapon.weaponCamo;
          v29 = *(__m256i *)&r_weapon.weaponIdx;
          *(_OWORD *)v27.m256i_i8 = *(_OWORD *)&r_weapon.attachmentVariationIndices[5];
          v27.m256i_i64[2] = *(__int64 *)&r_weapon.attachmentVariationIndices[21];
          if ( isAlternate && BG_HasUnderbarrelAmmo(&r_weapon) )
            v27.m256i_i32[7] = !BG_AltSharesAmmo(&r_weapon);
          *(__m256i *)&v32.weapon.weaponIdx = v29;
          *(__m256i *)&v32.weapon.attachmentVariationIndices[5] = v27;
          if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          v20 = 0;
          while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v20].ammoType, &v32) )
          {
            if ( (unsigned int)++v20 >= 0xF )
              goto LABEL_53;
          }
          if ( (const playerState_s *)((char *)ps + 68 * v20) == (const playerState_s *)-1912i64 )
          {
LABEL_53:
            AmmoInClipBothHands = 0;
            goto LABEL_54;
          }
          AmmoInClipBothHands = ps->weapCommon.ammoNotInClip[v20].ammoCount;
        }
LABEL_54:
        v6 += AmmoInClipBothHands;
      }
LABEL_55:
      v5 = (BgWeaponMap *)weaponMap;
LABEL_56:
      if ( (unsigned int)++v11 >= 0xF )
        return v6;
    }
  }
  if ( BG_WeaponDef(weapon, isAlternate)->bClipOnly )
    return BG_GetAmmoInClipBothHands(ps, weapon, isAlternate);
  else
    return BG_GetAmmoNotInClip(ps, weapon, isAlternate);
}

/*
==============
BG_GetWeaponAmmoPoolName
==============
*/
bool BG_GetWeaponAmmoPoolName(const Weapon *weapon, bool isAlternate, const BgHandler *const handler, char *outAmmoName, unsigned __int64 maxStringLen)
{
  unsigned __int16 weaponIdx; 
  __int64 v10; 
  bool v11; 
  const char ***v12; 
  const char **v13; 
  char *v14; 
  const WeaponAttachment *UnderbarrelAttachment; 
  unsigned __int64 v16; 
  __int64 v18; 
  char *outAmmoNamea; 

  if ( !outAmmoName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 660, ASSERT_TYPE_ASSERT, "(outAmmoName)", (const char *)&queryFormat, "outAmmoName") )
    __debugbreak();
  weaponIdx = weapon->weaponIdx;
  if ( weapon->weaponIdx )
  {
    v10 = weaponIdx;
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(v18) = weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v18, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    v11 = bg_weaponCompleteDefs[v10] == NULL;
    v12 = (const char ***)&bg_weaponCompleteDefs[v10];
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    v13 = *v12;
    outAmmoNamea = NULL;
    BG_GetAmmoIndex(weapon, isAlternate, handler, (const char **)&outAmmoNamea);
    v14 = outAmmoNamea;
    if ( !outAmmoNamea )
    {
      if ( isAlternate && BG_HasUnderbarrelAmmo(weapon) && !BG_AltSharesAmmo(weapon) )
      {
        UnderbarrelAttachment = BG_GetUnderbarrelAttachment(weapon);
        if ( !UnderbarrelAttachment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 679, ASSERT_TYPE_ASSERT, "(weapAttachment)", (const char *)&queryFormat, "weapAttachment") )
          __debugbreak();
        v16 = maxStringLen;
        if ( !maxStringLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 681, ASSERT_TYPE_ASSERT, "(maxStringLen > 0)", (const char *)&queryFormat, "maxStringLen > 0") )
          __debugbreak();
        *outAmmoName = 0;
        I_strcat(outAmmoName, v16, "alt_");
        I_strcat(outAmmoName, v16, *v13);
        I_strcat(outAmmoName, v16, "+");
        I_strcat(outAmmoName, v16, UnderbarrelAttachment->szInternalName);
        goto LABEL_24;
      }
      v14 = (char *)*v13;
    }
    Core_strcpy(outAmmoName, maxStringLen, v14);
LABEL_24:
    LOBYTE(weaponIdx) = 1;
  }
  return weaponIdx;
}

/*
==============
BG_GetWeaponHudIconOverrideAmmo
==============
*/
__int64 BG_GetWeaponHudIconOverrideAmmo(const playerState_s *const ps, int weaponIndex)
{
  return (unsigned int)(ps->weaponHudIconOverridesAmmo[weaponIndex] - 1);
}

/*
==============
BG_IsAmmoCompatible
==============
*/
_BOOL8 BG_IsAmmoCompatible(const AmmoStore *r_ammo1, const AmmoStore *r_ammo2)
{
  WeaponAmmoType ammoType; 
  int AmmoIndex; 
  int v6; 
  __int64 v8; 

  ammoType = r_ammo1->ammoType;
  if ( ammoType != r_ammo2->ammoType || !r_ammo1->weapon.weaponIdx || !r_ammo2->weapon.weaponIdx )
    return 0i64;
  AmmoIndex = BG_GetAmmoIndex(&r_ammo1->weapon, ammoType == WEAPON_AMMO_ALTERNATE, NULL, NULL);
  if ( !AmmoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 33, ASSERT_TYPE_ASSERT, "(ammo1Index != 0)", "%s\n\tAmmo index is 0 for weapon weaponidx=%i.", "ammo1Index != 0", r_ammo1->weapon.weaponIdx) )
    __debugbreak();
  v6 = BG_GetAmmoIndex(&r_ammo2->weapon, r_ammo2->ammoType == WEAPON_AMMO_ALTERNATE, NULL, NULL);
  if ( !v6 )
  {
    LODWORD(v8) = r_ammo2->weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 36, ASSERT_TYPE_ASSERT, "(ammo2Index != 0)", "%s\n\tAmmo index is 0 for weapon weaponidx=%i.", "ammo2Index != 0", v8) )
      __debugbreak();
  }
  return AmmoIndex == v6;
}

/*
==============
BG_IsClipCompatible
==============
*/
_BOOL8 BG_IsClipCompatible(const AmmoStore *r_clip1, const AmmoStore *r_clip2)
{
  return r_clip1->ammoType == r_clip2->ammoType && !memcmp_0(r_clip1, r_clip2, 0x3Cui64);
}

/*
==============
BG_IsRemoveWeaponOnEmpty
==============
*/
_BOOL8 BG_IsRemoveWeaponOnEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  unsigned int v8; 
  const Weapon *v9; 
  __int64 v11; 
  __int64 v12; 

  if ( !BG_IsThrowingAxe(weapon) )
    return BG_WeaponDef(weapon, isAlternate)->bRemoveWeaponOnEmpty;
  v8 = 0;
  while ( 1 )
  {
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v8 >= 0xF )
    {
      LODWORD(v12) = 15;
      LODWORD(v11) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v9 = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, ps->weaponsEquipped[v8]);
    if ( memcmp_0(weapon, v9, 0x3Cui64) )
    {
      if ( BG_IsFistsWeapon(v9) || BG_IsThrowingAxe(v9) && !BG_GetAmmoInClipBothHands(ps, v9, 0) )
        break;
    }
    if ( (int)++v8 >= 15 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
BG_IsValidAmmo
==============
*/
_BOOL8 BG_IsValidAmmo(const AmmoStore *r_ammo)
{
  return r_ammo->weapon.weaponIdx != 0;
}

/*
==============
BG_OffhandDoesNotConsumeAmmo
==============
*/
_BOOL8 BG_OffhandDoesNotConsumeAmmo(const Weapon *weapon, bool isAlternate)
{
  return BG_WeaponDef(weapon, isAlternate)->bDoesNotConsumeAmmo;
}

/*
==============
BG_RemoveClipAmmo
==============
*/
void BG_RemoveClipAmmo(playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  double v3; 
  int v4; 
  ClipAmmo *ClipAmmoPtr; 
  __m256i v8; 
  AmmoStore r_clipIndex; 

  v3 = *(double *)&weapon->attachmentVariationIndices[21];
  v4 = 0;
  v8.m256i_i64[3] = *(unsigned int *)&weapon->weaponCamo;
  *(__m256i *)&r_clipIndex.weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
  *(_OWORD *)v8.m256i_i8 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
  *(double *)&v8.m256i_i64[2] = v3;
  if ( isAlternate && BG_HasUnderbarrelAmmo(weapon) )
  {
    if ( !BG_AltSharesAmmo(weapon) )
      v4 = 1;
    v8.m256i_i32[7] = v4;
  }
  *(__m256i *)&r_clipIndex.weapon.attachmentVariationIndices[5] = v8;
  ClipAmmoPtr = BG_GetClipAmmoPtr(ps, &r_clipIndex);
  if ( ClipAmmoPtr )
    memset_0(ClipAmmoPtr, 0, sizeof(ClipAmmo));
}

/*
==============
BG_SetClipAmmo
==============
*/
void BG_SetClipAmmo(playerState_s *ps, const AmmoStore *r_clipIndex, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand, int amount)
{
  ClipAmmo *ClipAmmoPtr; 
  const char *WeaponName; 
  double v12; 
  int WeaponBurstCount; 
  ClipAmmo *v14; 
  weapFireType_t WeaponFireType; 
  int v16; 
  __int64 v17; 
  __m256i v18; 
  AmmoStore r_clipIndexa; 
  char output[512]; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 465, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ClipAmmoPtr = BG_CreateClipAmmoPtr(ps, r_clipIndex);
  if ( !ClipAmmoPtr )
  {
    WeaponName = BG_GetWeaponName(&r_clipIndex->weapon, output, 0x200u);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 470, ASSERT_TYPE_ASSERT, "(clipAmmo)", "%s\n\tTried to set ammo for weapon %s, but we can't find that in our clip ammo list", "clipAmmo", WeaponName) )
      __debugbreak();
  }
  if ( amount < 0 )
  {
    LODWORD(v17) = amount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 473, ASSERT_TYPE_ASSERT, "(amount >= 0)", "%s\n\tTried to set the clip ammo to a negative amount (%i).", "amount >= 0", v17) )
      __debugbreak();
  }
  ClipAmmoPtr->ammoCount[hand] = amount;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 501, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = *(double *)&r_weapon->attachmentVariationIndices[21];
  v18.m256i_i64[3] = *(unsigned int *)&r_weapon->weaponCamo;
  *(__m256i *)&r_clipIndexa.weapon.weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
  WeaponBurstCount = 1;
  *(_OWORD *)v18.m256i_i8 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  *(double *)&v18.m256i_i64[2] = v12;
  if ( isAlternate && BG_HasUnderbarrelAmmo(r_weapon) )
    v18.m256i_i32[7] = !BG_AltSharesAmmo(r_weapon);
  *(__m256i *)&r_clipIndexa.weapon.attachmentVariationIndices[5] = v18;
  v14 = BG_GetClipAmmoPtr(ps, &r_clipIndexa);
  if ( v14 )
  {
    WeaponFireType = BG_GetWeaponFireType(r_weapon, isAlternate);
    if ( WeaponFireType == WEAPON_FIRETYPE_DOUBLEBARREL )
    {
      WeaponBurstCount = 2;
    }
    else if ( WeaponFireType == WEAPON_FIRETYPE_BURST && BG_IsBoltAction(r_weapon, isAlternate) )
    {
      WeaponBurstCount = BG_GetWeaponBurstCount(r_weapon, isAlternate);
    }
    v16 = v14->ammoCount[hand];
    if ( WeaponBurstCount < v16 )
      v16 = WeaponBurstCount;
    if ( v16 > 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 514, ASSERT_TYPE_ASSERT, "(chamberCount <= (( ( 1 << 5 ) - 1 )))", (const char *)&queryFormat, "chamberCount <= PLAYER_WEAPONCHAMBER_MAX") )
      __debugbreak();
    v14->chamberedCount[hand] = v16;
    v14->shotsSinceRechamber[hand] = 0;
  }
}

/*
==============
BG_SetWeaponHudIconOverrideAmmo
==============
*/
void BG_SetWeaponHudIconOverrideAmmo(playerState_s *ps, int weaponIndex, int ammoCount)
{
  ps->weaponHudIconOverridesAmmo[weaponIndex] = ammoCount + 1;
}

/*
==============
BG_WeaponAllowsAmmoPickup
==============
*/
_BOOL8 BG_WeaponAllowsAmmoPickup(const Weapon *weapon, bool isAlternate)
{
  return !BG_WeaponDef(weapon, isAlternate)->noAmmoPickup;
}

/*
==============
BG_WeaponAmmo
==============
*/
__int64 BG_WeaponAmmo(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, bool isAlternate)
{
  int AmmoInClipForWeapon; 
  unsigned int v9; 

  AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, weapon, isAlternate, WEAPON_HAND_DEFAULT);
  v9 = BG_GetAmmoNotInClip(ps, weapon, isAlternate) + AmmoInClipForWeapon;
  if ( BG_PlayerDualWieldingWeapon(weaponMap, ps, weapon) )
    return v9 + BG_GetAmmoInClipForWeapon(ps, weapon, isAlternate, WEAPON_HAND_LEFT);
  else
    return v9;
}

/*
==============
BG_WeaponBothClipEmpty
==============
*/
_BOOL8 BG_WeaponBothClipEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 613, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 614, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  return BG_GetAmmoInClipBothHands(ps, CurrentWeaponForPlayer, v5) == 0;
}

/*
==============
BG_WeaponIsClipOnly
==============
*/
_BOOL8 BG_WeaponIsClipOnly(const Weapon *weapon, bool isAlternate)
{
  return BG_WeaponDef(weapon, isAlternate)->bClipOnly;
}

/*
==============
BG_WeaponWillHaveEnoughAmmoToFireAfterAutoReload
==============
*/
bool BG_WeaponWillHaveEnoughAmmoToFireAfterAutoReload(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 
  int v6; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 625, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 626, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  v6 = BG_RequiredAmmoPerShot(CurrentWeaponForPlayer, v5);
  return v6 <= BG_GetAmmoNotInClip(ps, CurrentWeaponForPlayer, v5) && BG_WeaponCanAutoReload(ps, CurrentWeaponForPlayer, v5);
}

/*
==============
PM_CalcBaselineAmmoAdd
==============
*/
__int64 PM_CalcBaselineAmmoAdd(pmove_t *pm, const PlayerHandIndex hand, const Weapon *currentWeapon, const bool isAlternate, const bool checkOtherHandReloadState)
{
  playerState_s *ps; 
  int ClipSize; 
  int AmmoNotInClip; 
  PlayerHandIndex WeaponHandForWeapon; 
  const dvar_t *v13; 
  playerState_s *v14; 
  int WeaponBurstCount; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int *p_ReloadType; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v29; 
  int v30; 
  int v31; 
  __int64 v32; 
  int ReloadType; 
  int v34; 
  int AmmoInClipForWeapon; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 738, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 738, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ClipSize = BG_GetClipSize(ps, currentWeapon, isAlternate);
  AmmoNotInClip = BG_GetAmmoNotInClip(ps, currentWeapon, isAlternate);
  AmmoInClipForWeapon = BG_GetAmmoInClipForWeapon(ps, currentWeapon, isAlternate, hand);
  WeaponHandForWeapon = BG_PlayerLastWeaponHandForWeapon(pm->weaponMap, ps, currentWeapon);
  ReloadType = BG_GetReloadType(currentWeapon, isAlternate);
  if ( AmmoNotInClip <= 0 )
    goto LABEL_54;
  v13 = DVARBOOL_killswitch_improved_akimbo_reload_ammo_distribution_enabled;
  if ( !DVARBOOL_killswitch_improved_akimbo_reload_ammo_distribution_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_improved_akimbo_reload_ammo_distribution_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( !v13->current.enabled || WeaponHandForWeapon != WEAPON_HAND_LEFT || ReloadType )
    goto LABEL_54;
  if ( checkOtherHandReloadState )
  {
    v14 = pm->ps;
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 715, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_GetReloadType(currentWeapon, isAlternate) || v14->weapState[hand != WEAPON_HAND_LEFT].weaponState != 18 || BG_GetAmmoInClipForWeapon(v14, currentWeapon, isAlternate, (PlayerHandIndex)(hand != WEAPON_HAND_LEFT)) != v14->weapState[hand != WEAPON_HAND_LEFT].ammoInClipBeforeReload )
      goto LABEL_54;
  }
  if ( AmmoNotInClip >= 2 * ClipSize - AmmoInClipForWeapon - BG_GetAmmoInClipForWeapon(ps, currentWeapon, isAlternate, (PlayerHandIndex)(hand != WEAPON_HAND_LEFT)) )
  {
LABEL_54:
    v31 = ClipSize - AmmoInClipForWeapon;
    if ( v31 > AmmoNotInClip )
      return (unsigned int)AmmoNotInClip;
    return (unsigned int)v31;
  }
  WeaponBurstCount = 1;
  if ( BG_GetWeaponFireType(currentWeapon, isAlternate) == WEAPON_FIRETYPE_BURST )
    WeaponBurstCount = BG_GetWeaponBurstCount(currentWeapon, isAlternate);
  ReloadType = BG_GetAmmoInClipForWeapon(ps, currentWeapon, isAlternate, WEAPON_HAND_DEFAULT);
  v16 = ReloadType;
  v17 = BG_GetAmmoInClipForWeapon(ps, currentWeapon, isAlternate, WEAPON_HAND_LEFT);
  v34 = v17;
  v18 = v17;
  v19 = 2;
  if ( ReloadType > v17 )
  {
    v19 = 0;
    p_ReloadType = &v34;
    goto LABEL_28;
  }
  if ( ReloadType < v17 )
  {
    v19 = 1;
    p_ReloadType = &ReloadType;
LABEL_28:
    v21 = *p_ReloadType;
    v22 = *(&ReloadType + (unsigned int)v19) - *p_ReloadType;
    if ( AmmoNotInClip < v22 )
      v22 = AmmoNotInClip;
    v23 = AmmoNotInClip - v22;
    v24 = v21 + v22;
    v25 = (v21 + v22) % WeaponBurstCount;
    if ( v25 )
    {
      if ( WeaponBurstCount - v25 <= v23 )
      {
        v26 = v22 + WeaponBurstCount - v25;
        AmmoNotInClip -= v26;
        v24 = v21 + v26;
LABEL_36:
        *p_ReloadType = v24;
        v16 = ReloadType;
        v18 = v34;
        goto LABEL_37;
      }
      v27 = v22 - v25;
      if ( v27 > 0 )
      {
        AmmoNotInClip -= v27;
        v24 = v21 + v27;
        goto LABEL_36;
      }
    }
    AmmoNotInClip = v23;
    goto LABEL_36;
  }
LABEL_37:
  if ( WeaponBurstCount == 1 )
  {
    if ( AmmoNotInClip > 0 )
    {
      ReloadType = AmmoNotInClip / 2 + AmmoNotInClip % 2 + v16;
      v34 = AmmoNotInClip / 2 + v18;
      return (unsigned int)(*(&ReloadType + (int)hand) - AmmoInClipForWeapon);
    }
  }
  else
  {
    if ( v19 == 2 || v16 == v18 )
      v19 = 0;
    for ( ; AmmoNotInClip > 0; v19 = (v19 + 1) % 2 )
    {
      v29 = *(&ReloadType + v19);
      v30 = WeaponBurstCount - v29 % WeaponBurstCount;
      if ( AmmoNotInClip < v30 )
        v30 = AmmoNotInClip;
      if ( v30 < 0 )
      {
        LODWORD(v32) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 867, ASSERT_TYPE_ASSERT, "( ammoToDistribute ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ammoToDistribute", "0", v32, 0i64) )
          __debugbreak();
      }
      AmmoNotInClip -= v30;
      *(&ReloadType + v19) = v29 + v30;
      if ( AmmoNotInClip < 0 )
      {
        LODWORD(v32) = AmmoNotInClip;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 871, ASSERT_TYPE_ASSERT, "( ammoReserveRemaining ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ammoReserveRemaining", "0", v32, 0i64) )
          __debugbreak();
      }
    }
  }
  return (unsigned int)(*(&ReloadType + (int)hand) - AmmoInClipForWeapon);
}

/*
==============
PM_GetWeaponLastChamberFired
==============
*/
int PM_GetWeaponLastChamberFired(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand)
{
  __int64 v4; 
  double v8; 
  __int64 v9; 
  int v10; 
  ClipAmmo *i; 
  __m256i v13; 
  __m256i Buf2; 
  __m256i v15; 

  v4 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 522, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = *(double *)&r_weapon->attachmentVariationIndices[21];
  v9 = 0i64;
  v13.m256i_i64[3] = *(unsigned int *)&r_weapon->weaponCamo;
  Buf2 = *(__m256i *)&r_weapon->weaponIdx;
  *(_OWORD *)v13.m256i_i8 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  *(double *)&v13.m256i_i64[2] = v8;
  if ( isAlternate && BG_HasUnderbarrelAmmo(r_weapon) )
    v13.m256i_i32[7] = !BG_AltSharesAmmo(r_weapon);
  v15 = v13;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 368, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = v15.m256i_i32[7];
  for ( i = ps->weapCommon.ammoInClip; i->clipIndex.ammoType != v10 || memcmp_0(i, &Buf2, 0x3Cui64); ++i )
  {
    if ( ++v9 >= 15 )
      return 0;
  }
  if ( (unsigned int)(BG_GetWeaponFireType(r_weapon, isAlternate) - 3) > 1 )
    return 0;
  return I_clamp(i->shotsSinceRechamber[v4] - 1, 0, 31);
}

/*
==============
PM_ReloadClip
==============
*/
void PM_ReloadClip(pmove_t *pm, PlayerHandIndex hand)
{
  BgWeaponMap *weaponMap; 
  playerState_s *ps; 
  int v5; 
  int started; 
  int ClipSize; 
  int v8; 
  ReloadType ReloadType; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v13; 
  int v14; 
  bool v15; 
  Weapon *r_weapon; 
  __int64 v18; 
  __m256i v19; 
  __m256i v20; 
  AmmoStore r_clipIndex; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 907, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 910, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 913, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v15 = BG_UsingAlternate(ps);
  v5 = BG_ReloadAmmoAdd(r_weapon, v15);
  started = BG_ReloadStartAdd(r_weapon, v15);
  v18 = hand;
  if ( ps->weapState[v18].weaponState != 19 || started )
  {
    ClipSize = BG_GetClipSize(ps, r_weapon, v15);
    v8 = PM_CalcBaselineAmmoAdd(pm, hand, r_weapon, v15, 1);
    if ( ps->weapState[v18].weaponState == 19 || (ReloadType = BG_GetReloadType(r_weapon, v15), ReloadType == RELOAD_TYPE_MULTIPLE_BULLET) )
    {
      if ( started < ClipSize && v8 > started )
        v8 = started;
    }
    else if ( ReloadType == RELOAD_TYPE_MULTIPLE_PERCENTAGE )
    {
      BG_GetMultipleReloadClipPercentage(r_weapon, v15);
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm1, 1 }
      if ( v8 > (int)*(float *)&_XMM4 )
        v8 = (int)*(float *)&_XMM4;
    }
    else if ( v5 && v5 < ClipSize && v8 > v5 )
    {
      v8 = v5;
    }
    if ( v8 )
    {
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 700, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 701, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
      v13 = BG_UsingAlternate(ps);
      v14 = 0;
      v19.m256i_i64[3] = *(unsigned int *)&CurrentWeaponForPlayer->weaponCamo;
      v20 = *(__m256i *)&CurrentWeaponForPlayer->weaponIdx;
      *(_OWORD *)v19.m256i_i8 = *(_OWORD *)&CurrentWeaponForPlayer->attachmentVariationIndices[5];
      v19.m256i_i64[2] = *(_QWORD *)&CurrentWeaponForPlayer->attachmentVariationIndices[21];
      if ( v13 && BG_HasUnderbarrelAmmo(CurrentWeaponForPlayer) )
      {
        if ( !BG_AltSharesAmmo(CurrentWeaponForPlayer) )
          v14 = 1;
        v19.m256i_i32[7] = v14;
      }
      *(__m256i *)&r_clipIndex.weapon.weaponIdx = v20;
      *(__m256i *)&r_clipIndex.weapon.attachmentVariationIndices[5] = v19;
      BG_AddClipAmmo(ps, &r_clipIndex, hand, v8);
      BG_AddGlobalAmmoForAmmoType(ps, &r_clipIndex, -v8);
      PM_AddEvent(pm, EV_RELOAD_ADDAMMO);
    }
  }
}

/*
==============
PM_WeaponClipEmpty
==============
*/
_BOOL8 PM_WeaponClipEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps, PlayerHandIndex hand)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 601, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 602, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v7 = BG_UsingAlternate(ps);
  return BG_GetAmmoInClipForWeapon(ps, CurrentWeaponForPlayer, v7, hand) == 0;
}

/*
==============
PM_WeaponDistributeClipAmmoBetweenHands
==============
*/
void PM_WeaponDistributeClipAmmoBetweenHands(playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  double v6; 
  int v7; 
  ClipAmmo *v8; 
  int v9; 
  int v10; 
  __m256i v11; 
  AmmoStore r_clipIndex; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 561, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = *(double *)&r_weapon->attachmentVariationIndices[21];
  v7 = 0;
  v11.m256i_i64[3] = *(unsigned int *)&r_weapon->weaponCamo;
  *(__m256i *)&r_clipIndex.weapon.weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
  *(_OWORD *)v11.m256i_i8 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  *(double *)&v11.m256i_i64[2] = v6;
  if ( isAlternate && BG_HasUnderbarrelAmmo(r_weapon) )
  {
    if ( !BG_AltSharesAmmo(r_weapon) )
      v7 = 1;
    v11.m256i_i32[7] = v7;
  }
  *(__m256i *)&r_clipIndex.weapon.attachmentVariationIndices[5] = v11;
  v8 = BG_CreateClipAmmoPtr(ps, &r_clipIndex);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 566, ASSERT_TYPE_ASSERT, "(clipAmmo)", "%s\n\tTried to distribute ammo for the clipIndex (ammotype=%i), but we can't find that in our clip ammo list", "clipAmmo", r_clipIndex.ammoType) )
    __debugbreak();
  v9 = v8->ammoCount[1] + v8->ammoCount[0];
  v10 = v9 & 1;
  v9 /= 2;
  v8->ammoCount[1] = v9;
  v8->ammoCount[0] = v9 + v10;
}

/*
==============
PM_WeaponPassClipAmmoToRightHand
==============
*/
void PM_WeaponPassClipAmmoToRightHand(playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  double v6; 
  ClipAmmo *v7; 
  __m256i v8; 
  AmmoStore r_clipIndex; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 582, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8.m256i_i64[3] = *(unsigned int *)&r_weapon->weaponCamo;
  v6 = *(double *)&r_weapon->attachmentVariationIndices[21];
  *(__m256i *)&r_clipIndex.weapon.weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
  *(_OWORD *)v8.m256i_i8 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  *(double *)&v8.m256i_i64[2] = v6;
  if ( isAlternate && BG_HasUnderbarrelAmmo(r_weapon) )
    v8.m256i_i32[7] = !BG_AltSharesAmmo(r_weapon);
  *(__m256i *)&r_clipIndex.weapon.attachmentVariationIndices[5] = v8;
  v7 = BG_CreateClipAmmoPtr(ps, &r_clipIndex);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 587, ASSERT_TYPE_ASSERT, "(clipAmmo)", "%s\n\tTried to distribute ammo for the clipIndex (ammotype=%i), but we can't find that in our clip ammo list", "clipAmmo", r_clipIndex.ammoType) )
    __debugbreak();
  v7->ammoCount[0] += v7->ammoCount[1];
  v7->ammoCount[1] = 0;
}

/*
==============
PM_WeaponRechamberAmmo
==============
*/
void PM_WeaponRechamberAmmo(playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand)
{
  __int64 v4; 
  int WeaponBurstCount; 
  double v9; 
  ClipAmmo *ClipAmmoPtr; 
  weapFireType_t WeaponFireType; 
  int v12; 
  __m256i v13; 
  AmmoStore r_clipIndex; 

  v4 = hand;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 501, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WeaponBurstCount = 1;
  v13.m256i_i64[3] = *(unsigned int *)&r_weapon->weaponCamo;
  v9 = *(double *)&r_weapon->attachmentVariationIndices[21];
  *(__m256i *)&r_clipIndex.weapon.weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
  *(_OWORD *)v13.m256i_i8 = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  *(double *)&v13.m256i_i64[2] = v9;
  if ( isAlternate && BG_HasUnderbarrelAmmo(r_weapon) )
    v13.m256i_i32[7] = !BG_AltSharesAmmo(r_weapon);
  *(__m256i *)&r_clipIndex.weapon.attachmentVariationIndices[5] = v13;
  ClipAmmoPtr = BG_GetClipAmmoPtr(ps, &r_clipIndex);
  if ( ClipAmmoPtr )
  {
    WeaponFireType = BG_GetWeaponFireType(r_weapon, isAlternate);
    if ( WeaponFireType == WEAPON_FIRETYPE_DOUBLEBARREL )
    {
      WeaponBurstCount = 2;
    }
    else if ( WeaponFireType == WEAPON_FIRETYPE_BURST && BG_IsBoltAction(r_weapon, isAlternate) )
    {
      WeaponBurstCount = BG_GetWeaponBurstCount(r_weapon, isAlternate);
    }
    v12 = ClipAmmoPtr->ammoCount[v4];
    if ( WeaponBurstCount < v12 )
      v12 = WeaponBurstCount;
    if ( v12 > 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_ammo.cpp", 514, ASSERT_TYPE_ASSERT, "(chamberCount <= (( ( 1 << 5 ) - 1 )))", (const char *)&queryFormat, "chamberCount <= PLAYER_WEAPONCHAMBER_MAX") )
      __debugbreak();
    ClipAmmoPtr->chamberedCount[v4] = v12;
    ClipAmmoPtr->shotsSinceRechamber[v4] = 0;
  }
}

/*
==============
PM_WeaponUseAmmo
==============
*/
void PM_WeaponUseAmmo(playerState_s *ps, const Weapon *weapon, bool isAlternate, int amount, PlayerHandIndex hand)
{
  const dvar_t *v5; 
  double v10; 
  int v11; 
  __m256i v12; 
  AmmoStore r_clipIndex; 

  v5 = DCONST_DVARBOOL_player_sustainAmmo;
  if ( !DCONST_DVARBOOL_player_sustainAmmo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sustainAmmo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
    v10 = *(double *)&weapon->attachmentVariationIndices[21];
    v11 = 0;
    v12.m256i_i64[3] = *(unsigned int *)&weapon->weaponCamo;
    *(__m256i *)&r_clipIndex.weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
    *(_OWORD *)v12.m256i_i8 = *(_OWORD *)&weapon->attachmentVariationIndices[5];
    *(double *)&v12.m256i_i64[2] = v10;
    if ( isAlternate && BG_HasUnderbarrelAmmo(weapon) )
    {
      if ( !BG_AltSharesAmmo(weapon) )
        v11 = 1;
      v12.m256i_i32[7] = v11;
    }
    *(__m256i *)&r_clipIndex.weapon.attachmentVariationIndices[5] = v12;
    BG_AddClipAmmo(ps, &r_clipIndex, hand, -amount);
  }
}

