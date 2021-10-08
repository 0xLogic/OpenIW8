/*
==============
BG_WeaponCompare
==============
*/

int __fastcall BG_WeaponCompare(const Weapon *r_weapon1, const Weapon *r_weapon2)
{
  return ?BG_WeaponCompare@@YAHAEBUWeapon@@0@Z(r_weapon1, r_weapon2);
}

/*
==============
BG_PWF_UseAlternateAsOffhand
==============
*/

bool __fastcall BG_PWF_UseAlternateAsOffhand(const playerState_s *playerState)
{
  return ?BG_PWF_UseAlternateAsOffhand@@YA_NPEBUplayerState_s@@@Z(playerState);
}

/*
==============
BG_GetAmmoInClip
==============
*/

int __fastcall BG_GetAmmoInClip(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand)
{
  return ?BG_GetAmmoInClip@@YAHPEBUplayerState_s@@AEBUWeapon@@_NW4PlayerHandIndex@@@Z(ps, r_weapon, isAlternate, hand);
}

/*
==============
BG_GetAmmoNotInClip
==============
*/

int __fastcall BG_GetAmmoNotInClip(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  return ?BG_GetAmmoNotInClip@@YAHPEBUplayerState_s@@AEBUWeapon@@_N@Z(ps, r_weapon, isAlternate);
}

/*
==============
BG_WeaponDef
==============
*/

const WeaponDef *__fastcall BG_WeaponDef(const Weapon *r_weapon, bool isAlternate)
{
  return ?BG_WeaponDef@@YAPEBUWeaponDef@@AEBUWeapon@@_N@Z(r_weapon, isAlternate);
}

/*
==============
BG_IsWeaponLastShotAltFire
==============
*/

bool __fastcall BG_IsWeaponLastShotAltFire(const playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_IsWeaponLastShotAltFire@@YA_NPEBUplayerState_s@@AEBUWeapon@@@Z(ps, r_weapon);
}

/*
==============
BG_GetAmmoInClipForClipType
==============
*/

int __fastcall BG_GetAmmoInClipForClipType(const playerState_s *ps, const AmmoStore *r_clipIndex, PlayerHandIndex hand)
{
  return ?BG_GetAmmoInClipForClipType@@YAHPEBUplayerState_s@@AEBUAmmoStore@@W4PlayerHandIndex@@@Z(ps, r_clipIndex, hand);
}

/*
==============
BG_IsWeaponInList
==============
*/

bool __fastcall BG_IsWeaponInList(const Weapon *r_weapon, const Weapon *checkWeapons, const unsigned int checkWeaponCount)
{
  return ?BG_IsWeaponInList@@YA_NAEBUWeapon@@PEBU1@I@Z(r_weapon, checkWeapons, checkWeaponCount);
}

/*
==============
BG_SetPlayerUsingOffhandUnderbarrelWeapon
==============
*/

void __fastcall BG_SetPlayerUsingOffhandUnderbarrelWeapon(playerState_s *ps, int isOn)
{
  ?BG_SetPlayerUsingOffhandUnderbarrelWeapon@@YAXPEAUplayerState_s@@H@Z(ps, isOn);
}

/*
==============
BG_GetAmmoInClipBothHands
==============
*/

int __fastcall BG_GetAmmoInClipBothHands(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  return ?BG_GetAmmoInClipBothHands@@YAHPEBUplayerState_s@@AEBUWeapon@@_N@Z(ps, r_weapon, isAlternate);
}

/*
==============
BG_UsingAlternate
==============
*/

bool __fastcall BG_UsingAlternate(const playerState_s *ps)
{
  return ?BG_UsingAlternate@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_GetAmmoInClipForWeapon
==============
*/

int __fastcall BG_GetAmmoInClipForWeapon(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand)
{
  return ?BG_GetAmmoInClipForWeapon@@YAHPEBUplayerState_s@@AEBUWeapon@@_NW4PlayerHandIndex@@@Z(ps, r_weapon, isAlternate, hand);
}

/*
==============
BG_UsingAlternateMelee
==============
*/

bool __fastcall BG_UsingAlternateMelee(const playerState_s *ps)
{
  return ?BG_UsingAlternateMelee@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_IsWeaponTriggerLeftAltFireFlagSet
==============
*/

bool __fastcall BG_IsWeaponTriggerLeftAltFireFlagSet(const playerState_s *ps)
{
  return ?BG_IsWeaponTriggerLeftAltFireFlagSet@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_PlayerUsingOffhandUnderbarrelShotgun
==============
*/

int __fastcall BG_PlayerUsingOffhandUnderbarrelShotgun(const playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_PlayerUsingOffhandUnderbarrelShotgun@@YAHPEBUplayerState_s@@AEBUWeapon@@@Z(ps, r_weapon);
}

/*
==============
BG_WeaponDefAtIndex
==============
*/

const WeaponDef *__fastcall BG_WeaponDefAtIndex(const unsigned __int16 weaponIdx)
{
  return ?BG_WeaponDefAtIndex@@YAPEBUWeaponDef@@G@Z(weaponIdx);
}

/*
==============
BG_IsUsingTurretViewarms
==============
*/

bool __fastcall BG_IsUsingTurretViewarms(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_IsUsingTurretViewarms@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
BG_IsAlternate
==============
*/

bool __fastcall BG_IsAlternate(const char *weaponName)
{
  return ?BG_IsAlternate@@YA_NPEBD@Z(weaponName);
}

/*
==============
BG_WeaponDisableSwitchToEmpty
==============
*/

int __fastcall BG_WeaponDisableSwitchToEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?BG_WeaponDisableSwitchToEmpty@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@@Z(weaponMap, ps, r_weapon);
}

/*
==============
BG_GetBulletRange<CgBallisticInstance>
==============
*/

double __fastcall BG_GetBulletRange<CgBallisticInstance>(const BgWeaponMap *weaponMap, const BgBallistics<CgBallisticInstance> *ballisticSystem, const playerState_s *ps, const entityState_t *entState, const bitarray<64> *r_perks, const Weapon *r_weapon, bool isAlternate)
{
  double result; 

  *(float *)&result = ??$BG_GetBulletRange@UCgBallisticInstance@@@@YAMPEBVBgWeaponMap@@PEBV?$BgBallistics@UCgBallisticInstance@@@@PEBUplayerState_s@@PEBUentityState_t@@AEBV?$bitarray@$0EA@@@AEBUWeapon@@_N@Z(weaponMap, ballisticSystem, ps, entState, r_perks, r_weapon, isAlternate);
  return result;
}

/*
==============
BG_PlayerDualWielding
==============
*/

int __fastcall BG_PlayerDualWielding(const playerState_s *ps)
{
  return ?BG_PlayerDualWielding@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_WeaponCompleteDef
==============
*/

const WeaponCompleteDef *__fastcall BG_WeaponCompleteDef(const Weapon *r_weapon, bool isAlternate)
{
  return ?BG_WeaponCompleteDef@@YAPEBUWeaponCompleteDef@@AEBUWeapon@@_N@Z(r_weapon, isAlternate);
}

/*
==============
BG_SupportsAlternateMelee
==============
*/

bool __fastcall BG_SupportsAlternateMelee(const Weapon *r_weapon, const bool isAlternate)
{
  return ?BG_SupportsAlternateMelee@@YA_NAEBUWeapon@@_N@Z(r_weapon, isAlternate);
}

/*
==============
BG_MaxBulletRange
==============
*/

double __fastcall BG_MaxBulletRange()
{
  double result; 

  *(float *)&result = ?BG_MaxBulletRange@@YAMXZ();
  return result;
}

/*
==============
BG_GlobalAmmoForAmmoType
==============
*/

GlobalAmmo *__fastcall BG_GlobalAmmoForAmmoType(playerState_s *ps, const AmmoStore *r_ammoType)
{
  return ?BG_GlobalAmmoForAmmoType@@YAPEAUGlobalAmmo@@PEAUplayerState_s@@AEBUAmmoStore@@@Z(ps, r_ammoType);
}

/*
==============
BG_GetBulletRange<GBallisticInstance>
==============
*/

double __fastcall BG_GetBulletRange<GBallisticInstance>(const BgWeaponMap *weaponMap, const BgBallistics<GBallisticInstance> *ballisticSystem, const playerState_s *ps, const entityState_t *entState, const bitarray<64> *r_perks, const Weapon *r_weapon, bool isAlternate)
{
  double result; 

  *(float *)&result = ??$BG_GetBulletRange@UGBallisticInstance@@@@YAMPEBVBgWeaponMap@@PEBV?$BgBallistics@UGBallisticInstance@@@@PEBUplayerState_s@@PEBUentityState_t@@AEBV?$bitarray@$0EA@@@AEBUWeapon@@_N@Z(weaponMap, ballisticSystem, ps, entState, r_perks, r_weapon, isAlternate);
  return result;
}

/*
==============
BgWeaponScalarAccumulator::BgWeaponScalarAccumulator
==============
*/

void __fastcall BgWeaponScalarAccumulator::BgWeaponScalarAccumulator(BgWeaponScalarAccumulator *this)
{
  ??0BgWeaponScalarAccumulator@@QEAA@XZ(this);
}

/*
==============
BG_GetAmmoInClipBothHandsForWeapon
==============
*/

int __fastcall BG_GetAmmoInClipBothHandsForWeapon(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  return ?BG_GetAmmoInClipBothHandsForWeapon@@YAHPEBUplayerState_s@@AEBUWeapon@@_N@Z(ps, r_weapon, isAlternate);
}

/*
==============
BG_IsAirburstWeapon
==============
*/

bool __fastcall BG_IsAirburstWeapon(const Weapon *r_weapon)
{
  return ?BG_IsAirburstWeapon@@YA_NAEBUWeapon@@@Z(r_weapon);
}

/*
==============
BG_PlayerDualWielding
==============
*/
_BOOL8 BG_PlayerDualWielding(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !BG_Skydive_IsSkydiving(ps) && BG_Ladder_IsDualWieldingAllowed(ps) && ps->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
}

/*
==============
BG_UsingAlternate
==============
*/
bool BG_UsingAlternate(const playerState_s *ps)
{
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 

  if ( ps )
  {
    p_weapFlags = &ps->weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
      return 0;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) )
      return 1;
  }
  else
  {
    p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
  }
  return ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
}

/*
==============
BG_WeaponDef
==============
*/
WeaponDef *BG_WeaponDef(const Weapon *r_weapon, bool isAlternate)
{
  unsigned int weaponIdx; 
  bool v3; 
  WeaponDef **v4; 
  int v6; 
  unsigned int v7; 

  weaponIdx = r_weapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    v7 = bg_lastParsedWeaponIndex;
    v6 = r_weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v6, v7) )
      __debugbreak();
  }
  v3 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v4 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  return *v4;
}

/*
==============
BG_WeaponCompleteDef
==============
*/
WeaponCompleteDef *BG_WeaponCompleteDef(const Weapon *r_weapon, bool isAlternate)
{
  __int64 weaponIdx; 
  bool v3; 
  WeaponCompleteDef **v4; 

  weaponIdx = r_weapon->weaponIdx;
  if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", r_weapon->weaponIdx, bg_lastParsedWeaponIndex) )
    __debugbreak();
  v3 = bg_weaponCompleteDefs[weaponIdx] == NULL;
  v4 = &bg_weaponCompleteDefs[weaponIdx];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  return *v4;
}

/*
==============
BG_GetAmmoInClip
==============
*/
__int64 BG_GetAmmoInClip(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand)
{
  int v11; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_AmmoStoreForWeapon(&result, r_weapon, isAlternate);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0E8h+r_clip2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0E8h+r_clip2.weapon.attachmentVariationIndices+5], ymm1
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_HasLadderHand(ps) && hand == WEAPON_HAND_LEFT )
    hand = WEAPON_HAND_DEFAULT;
  v11 = 0;
  while ( !BG_IsClipCompatible(&ps->weapCommon.ammoInClip[v11].clipIndex, &r_clip2) )
  {
    if ( (unsigned int)++v11 >= 0xF )
      return 0i64;
  }
  return (unsigned int)ps->weapCommon.ammoInClip[v11].ammoCount[hand];
}

/*
==============
BgWeaponScalarAccumulator::BgWeaponScalarAccumulator
==============
*/
void BgWeaponScalarAccumulator::BgWeaponScalarAccumulator(BgWeaponScalarAccumulator *this)
{
  this->m_additiveScale = 1.0;
  this->m_multiplicativeScale = 1.0;
}

/*
==============
BG_GetBulletRange<CgBallisticInstance>
==============
*/
float BG_GetBulletRange<CgBallisticInstance>(const BgWeaponMap *weaponMap, const BgBallistics<CgBallisticInstance> *ballisticSystem, const playerState_s *ps, const entityState_t *entState, const bitarray<64> *r_perks, const Weapon *r_weapon, bool isAlternate)
{
  bool v14; 
  const Weapon *v15; 
  bool IsBeamWeapon; 
  const bitarray<64> *v17; 
  bool v18; 
  __int64 clientNum; 
  char v22; 
  char v23; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ballisticSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1530, ASSERT_TYPE_ASSERT, "(ballisticSystem)", (const char *)&queryFormat, "ballisticSystem") )
    __debugbreak();
  if ( !entState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1531, ASSERT_TYPE_ASSERT, "(entState)", (const char *)&queryFormat, "entState") )
    __debugbreak();
  v14 = isAlternate;
  v15 = r_weapon;
  if ( BG_GetWeaponType(r_weapon, isAlternate) != WEAPTYPE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1532, ASSERT_TYPE_ASSERT, "(BG_GetWeaponType( r_weapon, isAlternate ) == WEAPTYPE_BULLET)", (const char *)&queryFormat, "BG_GetWeaponType( r_weapon, isAlternate ) == WEAPTYPE_BULLET") )
    __debugbreak();
  IsBeamWeapon = BG_IsBeamWeapon(v15, v14);
  v17 = r_perks;
  v18 = IsBeamWeapon;
  if ( !BG_WeaponBulletFire_ShouldSpread(*r_perks, v15, v14) && !v18 )
    goto LABEL_15;
  if ( !ps )
  {
    if ( !entState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1896, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entState->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x19u) && BG_AlwaysFireAtMaxRangeInAds(NULL, NULL, v15, v14) )
      goto LABEL_15;
LABEL_22:
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, weaponMap, ps, v17, v15, v14, &minDamageRange, &maxDamageRange);
    __asm { vmovss  xmm0, [rsp+88h+arg_8] }
    return *(float *)&_XMM0;
  }
  if ( !BG_InADS(ps) || !BG_AlwaysFireAtMaxRangeInAds(weaponMap, ps, v15, v14) )
    goto LABEL_22;
LABEL_15:
  if ( ps )
    clientNum = (unsigned int)ps->clientNum;
  else
    clientNum = (unsigned int)entState->number;
  if ( ballisticSystem->ShouldFireBallisticBullet((BgBallistics<CgBallisticInstance> *)ballisticSystem, v15, v14, clientNum) )
  {
    __asm { vmovaps [rsp+88h+var_48], xmm6 }
    *(double *)&_XMM0 = BG_GetBallisticMuzzleVelocityScale(v15, v14);
    __asm { vmovaps xmm6, xmm0 }
    if ( !BG_GetBallisticInfo(v15, v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1555, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
      __debugbreak();
    *(double *)&_XMM0 = BG_GetBulletTerminationRange(weaponMap, ps, v15, v14);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    if ( v22 | v23 )
      __asm { vmulss  xmm0, xmm6, dword ptr [rcx+rdx*4-4] }
    __asm { vmovaps xmm6, [rsp+88h+var_48] }
  }
  else if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING|0x80) )
  {
    _RBX = DCONST_DVARFLT_bg_bulletLongHitScanDistance;
    if ( !DCONST_DVARFLT_bg_bulletLongHitScanDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletLongHitScanDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@46000000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_WeaponCompare
==============
*/
int BG_WeaponCompare(const Weapon *r_weapon1, const Weapon *r_weapon2)
{
  return memcmp_0(r_weapon1, r_weapon2, 0x3Cui64);
}

/*
==============
BG_IsAlternate
==============
*/
bool BG_IsAlternate(const char *weaponName)
{
  const char *v2; 
  __int64 v3; 
  char v4; 
  __int64 v5; 
  char v6; 
  unsigned __int64 v8; 

  if ( !weaponName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1138, ASSERT_TYPE_ASSERT, "(weaponName)", (const char *)&queryFormat, "weaponName") )
    __debugbreak();
  v2 = "none";
  v3 = 4i64;
  if ( !weaponName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v4 = v2[weaponName - "none"];
    v5 = v3;
    v6 = *v2++;
    --v3;
    if ( !v5 )
      return 0;
    if ( v4 != v6 )
      break;
    if ( !v4 )
      return 0;
  }
  v8 = -1i64;
  do
    ++v8;
  while ( weaponName[v8] );
  return v8 > 4 && *weaponName == 97 && weaponName[1] == 108 && weaponName[2] == 116 && weaponName[3] == 95;
}

/*
==============
BG_IsUsingTurretViewarms
==============
*/
bool BG_IsUsingTurretViewarms(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *ViewmodelWeapon; 
  const WeaponDef *v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1509, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v5 = BG_WeaponDef(ViewmodelWeapon, 0);
  return v5->weapClass == WEAPCLASS_TURRET && v5->useTurretViewmodelAnims;
}

/*
==============
BG_GetAmmoInClipBothHands
==============
*/
int BG_GetAmmoInClipBothHands(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  int v7; 
  int IsClipCompatible; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1257, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_AmmoStoreForWeapon(&result, r_weapon, isAlternate);
  v7 = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+r_clip2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0D8h+r_clip2.weapon.attachmentVariationIndices+5], ymm1
  }
  while ( 1 )
  {
    IsClipCompatible = BG_IsClipCompatible(&ps->weapCommon.ammoInClip[v7].clipIndex, &r_clip2);
    if ( IsClipCompatible )
      break;
    if ( (unsigned int)++v7 >= 0xF )
      return IsClipCompatible;
  }
  return ps->weapCommon.ammoInClip[v7].ammoCount[0] + ps->weapCommon.ammoInClip[v7].ammoCount[1];
}

/*
==============
BG_IsWeaponInList
==============
*/
char BG_IsWeaponInList(const Weapon *r_weapon, const Weapon *checkWeapons, const unsigned int checkWeaponCount)
{
  int v6; 

  if ( !checkWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1164, ASSERT_TYPE_ASSERT, "(checkWeapons)", (const char *)&queryFormat, "checkWeapons") )
    __debugbreak();
  v6 = 0;
  if ( !checkWeaponCount )
    return 0;
  while ( memcmp_0(&checkWeapons[v6], r_weapon, 0x3Cui64) )
  {
    if ( ++v6 >= checkWeaponCount )
      return 0;
  }
  return 1;
}

/*
==============
BG_WeaponDefAtIndex
==============
*/
WeaponDef *BG_WeaponDefAtIndex(const unsigned __int16 weaponIdx)
{
  bool v2; 
  WeaponDef **v3; 
  int v5; 
  unsigned int v6; 

  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    v6 = bg_lastParsedWeaponIndex;
    v5 = weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v5, v6) )
      __debugbreak();
  }
  v2 = bg_weaponDefs[weaponIdx] == NULL;
  v3 = &bg_weaponDefs[weaponIdx];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  return *v3;
}

/*
==============
BG_GetAmmoInClipForClipType
==============
*/
int BG_GetAmmoInClipForClipType(const playerState_s *ps, const AmmoStore *r_clipIndex, PlayerHandIndex hand)
{
  int v6; 
  int result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 0;
  if ( BG_HasLadderHand(ps) && hand == WEAPON_HAND_LEFT )
    hand = WEAPON_HAND_DEFAULT;
  while ( 1 )
  {
    result = BG_IsClipCompatible(&ps->weapCommon.ammoInClip[v6].clipIndex, r_clipIndex);
    if ( result )
      break;
    if ( (unsigned int)++v6 >= 0xF )
      return result;
  }
  return ps->weapCommon.ammoInClip[v6].ammoCount[hand];
}

/*
==============
BG_GetAmmoInClipForWeapon
==============
*/
int BG_GetAmmoInClipForWeapon(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate, PlayerHandIndex hand)
{
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_AmmoStoreForWeapon(&result, r_weapon, isAlternate);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+r_clipIndex.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0D8h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
  }
  return BG_GetAmmoInClipForClipType(ps, &r_clipIndex, hand);
}

/*
==============
BG_GetAmmoNotInClip
==============
*/
__int64 BG_GetAmmoNotInClip(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  int v9; 
  AmmoStore result; 
  AmmoStore r_ammo2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1322, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_AmmoStoreForWeapon(&result, r_weapon, isAlternate);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0E8h+r_ammo2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0E8h+r_ammo2.weapon.attachmentVariationIndices+5], ymm1
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1304, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = 0;
  while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v9].ammoType, &r_ammo2) )
  {
    if ( (unsigned int)++v9 >= 0xF )
      return 0i64;
  }
  if ( (const playerState_s *)((char *)ps + 68 * v9) == (const playerState_s *)-1912i64 )
    return 0i64;
  return (unsigned int)ps->weapCommon.ammoNotInClip[v9].ammoCount;
}

/*
==============
BG_IsWeaponLastShotAltFire
==============
*/
bool BG_IsWeaponLastShotAltFire(const playerState_s *ps, const Weapon *r_weapon)
{
  if ( !BG_UseLeftTriggerAltFireMode(r_weapon) )
    return BG_UsingAlternate(ps);
  return ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
}

/*
==============
BG_IsWeaponTriggerLeftAltFireFlagSet
==============
*/
bool BG_IsWeaponTriggerLeftAltFireFlagSet(const playerState_s *ps)
{
  return ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Bu);
}

/*
==============
BG_PWF_UseAlternateAsOffhand
==============
*/
char BG_PWF_UseAlternateAsOffhand(const playerState_s *playerState)
{
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&playerState->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
    __debugbreak();
  return 1;
}

/*
==============
BG_PlayerUsingOffhandUnderbarrelShotgun
==============
*/
_BOOL8 BG_PlayerUsingOffhandUnderbarrelShotgun(const playerState_s *ps, const Weapon *r_weapon)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1451, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_PWF_UseAlternateAsOffhand(ps) && BG_HasUnderbarrelShotgun(r_weapon);
}

/*
==============
BG_SetPlayerUsingOffhandUnderbarrelWeapon
==============
*/
void BG_SetPlayerUsingOffhandUnderbarrelWeapon(playerState_s *ps, int isOn)
{
  const dvar_t *v4; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1438, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DVARBOOL_bg_underbarrelWeaponEnabled;
  if ( !DVARBOOL_bg_underbarrelWeaponEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_underbarrelWeaponEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled && isOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1439, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_bg_underbarrelWeaponEnabled, \"bg_underbarrelWeaponEnabled\" ) || !isOn)", (const char *)&queryFormat, "Dvar_GetBool( bg_underbarrelWeaponEnabled ) || !isOn") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1440, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
    __debugbreak();
  p_weapFlags = &ps->weapCommon.weapFlags;
  if ( isOn )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagStrict(p_weapFlags, DEAD|PRONE|0x20);
  else
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagStrict(p_weapFlags, DEAD|PRONE|0x20);
}

/*
==============
BG_SupportsAlternateMelee
==============
*/
char BG_SupportsAlternateMelee(const Weapon *r_weapon, const bool isAlternate)
{
  const WeaponDef *v5; 

  if ( !r_weapon->weaponIdx || BG_IsAimDownSight(r_weapon, isAlternate) )
    return 0;
  if ( isAlternate && BG_IsThrowingAxe(r_weapon) )
    return 1;
  v5 = BG_WeaponDef(r_weapon, isAlternate);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1414, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return v5->supportsAlternateMelee;
}

/*
==============
BG_UsingAlternateMelee
==============
*/
bool BG_UsingAlternateMelee(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x26u);
}

/*
==============
BG_GlobalAmmoForAmmoType
==============
*/
GlobalAmmo *BG_GlobalAmmoForAmmoType(playerState_s *ps, const AmmoStore *r_ammoType)
{
  int v4; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1288, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = 0;
  while ( !BG_IsAmmoCompatible(&ps->weapCommon.ammoNotInClip[v4].ammoType, r_ammoType) )
  {
    if ( (unsigned int)++v4 >= 0xF )
      return 0i64;
  }
  return &ps->weapCommon.ammoNotInClip[v4];
}

/*
==============
BG_GetBulletRange<GBallisticInstance>
==============
*/
float BG_GetBulletRange<GBallisticInstance>(const BgWeaponMap *weaponMap, const BgBallistics<GBallisticInstance> *ballisticSystem, const playerState_s *ps, const entityState_t *entState, const bitarray<64> *r_perks, const Weapon *r_weapon, bool isAlternate)
{
  bool v14; 
  const Weapon *v15; 
  bool IsBeamWeapon; 
  const bitarray<64> *v17; 
  bool v18; 
  __int64 clientNum; 
  char v22; 
  char v23; 
  float minDamageRange; 
  float maxDamageRange; 

  if ( !ballisticSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1530, ASSERT_TYPE_ASSERT, "(ballisticSystem)", (const char *)&queryFormat, "ballisticSystem") )
    __debugbreak();
  if ( !entState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1531, ASSERT_TYPE_ASSERT, "(entState)", (const char *)&queryFormat, "entState") )
    __debugbreak();
  v14 = isAlternate;
  v15 = r_weapon;
  if ( BG_GetWeaponType(r_weapon, isAlternate) != WEAPTYPE_BULLET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1532, ASSERT_TYPE_ASSERT, "(BG_GetWeaponType( r_weapon, isAlternate ) == WEAPTYPE_BULLET)", (const char *)&queryFormat, "BG_GetWeaponType( r_weapon, isAlternate ) == WEAPTYPE_BULLET") )
    __debugbreak();
  IsBeamWeapon = BG_IsBeamWeapon(v15, v14);
  v17 = r_perks;
  v18 = IsBeamWeapon;
  if ( !BG_WeaponBulletFire_ShouldSpread(*r_perks, v15, v14) && !v18 )
    goto LABEL_15;
  if ( !ps )
  {
    if ( !entState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1896, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entState->lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x19u) && BG_AlwaysFireAtMaxRangeInAds(NULL, NULL, v15, v14) )
      goto LABEL_15;
LABEL_22:
    BG_GetPlayerDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, weaponMap, ps, v17, v15, v14, &minDamageRange, &maxDamageRange);
    __asm { vmovss  xmm0, [rsp+88h+arg_8] }
    return *(float *)&_XMM0;
  }
  if ( !BG_InADS(ps) || !BG_AlwaysFireAtMaxRangeInAds(weaponMap, ps, v15, v14) )
    goto LABEL_22;
LABEL_15:
  if ( ps )
    clientNum = (unsigned int)ps->clientNum;
  else
    clientNum = (unsigned int)entState->number;
  if ( ballisticSystem->ShouldFireBallisticBullet((BgBallistics<GBallisticInstance> *)ballisticSystem, v15, v14, clientNum) )
  {
    __asm { vmovaps [rsp+88h+var_48], xmm6 }
    *(double *)&_XMM0 = BG_GetBallisticMuzzleVelocityScale(v15, v14);
    __asm { vmovaps xmm6, xmm0 }
    if ( !BG_GetBallisticInfo(v15, v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1555, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
      __debugbreak();
    *(double *)&_XMM0 = BG_GetBulletTerminationRange(weaponMap, ps, v15, v14);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    if ( v22 | v23 )
      __asm { vmulss  xmm0, xmm6, dword ptr [rcx+rdx*4-4] }
    __asm { vmovaps xmm6, [rsp+88h+var_48] }
  }
  else if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING|0x80) )
  {
    _RBX = DCONST_DVARFLT_bg_bulletLongHitScanDistance;
    if ( !DCONST_DVARFLT_bg_bulletLongHitScanDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletLongHitScanDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@46000000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_GetAmmoInClipBothHandsForWeapon
==============
*/
int BG_GetAmmoInClipBothHandsForWeapon(const playerState_s *ps, const Weapon *r_weapon, bool isAlternate)
{
  int v7; 
  int IsClipCompatible; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1257, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_AmmoStoreForWeapon(&result, r_weapon, isAlternate);
  v7 = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+r_clip2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+0D8h+r_clip2.weapon.attachmentVariationIndices+5], ymm1
  }
  while ( 1 )
  {
    IsClipCompatible = BG_IsClipCompatible(&ps->weapCommon.ammoInClip[v7].clipIndex, &r_clip2);
    if ( IsClipCompatible )
      break;
    if ( (unsigned int)++v7 >= 0xF )
      return IsClipCompatible;
  }
  return ps->weapCommon.ammoInClip[v7].ammoCount[0] + ps->weapCommon.ammoInClip[v7].ammoCount[1];
}

/*
==============
BG_MaxBulletRange
==============
*/
float BG_MaxBulletRange()
{
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING|0x80) )
  {
    _RBX = DCONST_DVARFLT_bg_bulletLongHitScanDistance;
    if ( !DCONST_DVARFLT_bg_bulletLongHitScanDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletLongHitScanDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@46000000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_IsAirburstWeapon
==============
*/
bool BG_IsAirburstWeapon(const Weapon *r_weapon)
{
  bool result; 
  unsigned int weaponIdx; 
  bool v4; 
  WeaponDef **v5; 
  unsigned int v6; 
  unsigned int v7; 

  result = Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_OFFHAND_END);
  if ( result )
  {
    weaponIdx = r_weapon->weaponIdx;
    if ( weaponIdx > bg_lastParsedWeaponIndex )
    {
      v7 = bg_lastParsedWeaponIndex;
      v6 = weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v6, v7) )
        __debugbreak();
    }
    v4 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
    v5 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    return (*v5)->isAirburstWeapon;
  }
  return result;
}

/*
==============
BG_WeaponDisableSwitchToEmpty
==============
*/
_BOOL8 BG_WeaponDisableSwitchToEmpty(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon)
{
  bool v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1384, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = BG_UsingAlternate(ps);
  return BG_WeaponDef(r_weapon, v6)->disableSwitchToWhenEmpty && !BG_WeaponAmmo(weaponMap, ps, r_weapon, v6);
}

