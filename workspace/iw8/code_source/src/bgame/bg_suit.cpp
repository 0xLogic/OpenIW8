/*
==============
BG_Suit_InitAssets
==============
*/

void __fastcall BG_Suit_InitAssets(bool isFullInit)
{
  ?BG_Suit_InitAssets@@YAX_N@Z(isFullInit);
}

/*
==============
BG_Suit_IsRoboticIKEnabled
==============
*/

bool __fastcall BG_Suit_IsRoboticIKEnabled(const int suitIndex)
{
  return ?BG_Suit_IsRoboticIKEnabled@@YA_NH@Z(suitIndex);
}

/*
==============
BG_Suit_GetGesture
==============
*/

Gesture *__fastcall BG_Suit_GetGesture(const playerState_s *ps, const PlayerHandIndex hand, const Weapon *r_weapon, const bool isAlternate, const bool isDualWielding, gestureAnimType_t gestureAnimType)
{
  return ?BG_Suit_GetGesture@@YAPEAUGesture@@PEBUplayerState_s@@W4PlayerHandIndex@@AEBUWeapon@@_N3W4gestureAnimType_t@@@Z(ps, hand, r_weapon, isAlternate, isDualWielding, gestureAnimType);
}

/*
==============
BG_Suit_GetOverriddenAnims
==============
*/

void __fastcall BG_Suit_GetOverriddenAnims(const playerState_s *ps, const Weapon *r_weapon, RawWeaponAnimArrays *outAnimArrays)
{
  ?BG_Suit_GetOverriddenAnims@@YAXPEBUplayerState_s@@AEBUWeapon@@PEAURawWeaponAnimArrays@@@Z(ps, r_weapon, outAnimArrays);
}

/*
==============
BG_Suit_MyChanges
==============
*/

void BG_Suit_MyChanges(void)
{
  ?BG_Suit_MyChanges@@YAXXZ();
}

/*
==============
BG_Suit_ShouldUseSuitAnim
==============
*/

bool __fastcall BG_Suit_ShouldUseSuitAnim(const playerState_s *ps, const Weapon *weapon, const bool isAlternate, const bool isDualWielding, const weapAnimFiles_t weapAnim, const weapAnimFiles_t suitAnim)
{
  return ?BG_Suit_ShouldUseSuitAnim@@YA_NPEBUplayerState_s@@AEBUWeapon@@_N2W4weapAnimFiles_t@@3@Z(ps, weapon, isAlternate, isDualWielding, weapAnim, suitAnim);
}

/*
==============
BG_Suit_GetCinematicMotionDef
==============
*/

const CinematicMotionDef *__fastcall BG_Suit_GetCinematicMotionDef(const playerState_s *ps, const BgWeaponMap *weaponMap)
{
  return ?BG_Suit_GetCinematicMotionDef@@YAPEBUCinematicMotionDef@@PEBUplayerState_s@@PEBVBgWeaponMap@@@Z(ps, weaponMap);
}

/*
==============
BG_GetSuitDef
==============
*/

const SuitDef *__fastcall BG_GetSuitDef(int suitIndex)
{
  return ?BG_GetSuitDef@@YAPEBUSuitDef@@H@Z(suitIndex);
}

/*
==============
BG_Suit_GetAnimOverrideEntry
==============
*/

bool __fastcall BG_Suit_GetAnimOverrideEntry(const WeaponDef *weapDef, const SuitAnimPackage *suitAnimPackage, weapAnimFiles_t anim, SuitAnimEntry **outSuitAnimEntry)
{
  return ?BG_Suit_GetAnimOverrideEntry@@YA_NPEBUWeaponDef@@PEBUSuitAnimPackage@@W4weapAnimFiles_t@@PEAPEAUSuitAnimEntry@@@Z(weapDef, suitAnimPackage, anim, outSuitAnimEntry);
}

/*
==============
BG_Suit_GetAnimTime
==============
*/

int __fastcall BG_Suit_GetAnimTime(const playerState_s *ps, const Weapon *weapon, weapAnimFiles_t anim, const bool isAlternate, const bool isDualWielding, int *outInterruptTime)
{
  return ?BG_Suit_GetAnimTime@@YAHPEBUplayerState_s@@AEBUWeapon@@W4weapAnimFiles_t@@_N3PEAH@Z(ps, weapon, anim, isAlternate, isDualWielding, outInterruptTime);
}

/*
==============
BG_Suit_GetBounds
==============
*/

const Bounds *__fastcall BG_Suit_GetBounds(const int suitIndex, const EffectiveStance effStance)
{
  return ?BG_Suit_GetBounds@@YAPEBUBounds@@HW4EffectiveStance@@@Z(suitIndex, effStance);
}

/*
==============
BG_SetSuit
==============
*/

void __fastcall BG_SetSuit(const BgHandler *const handler, playerState_s *ps, const int suitIndex)
{
  ?BG_SetSuit@@YAXQEBVBgHandler@@PEAUplayerState_s@@H@Z(handler, ps, suitIndex);
}

/*
==============
BG_GetSuitAnimIndexFromPS
==============
*/

SuitAnimType __fastcall BG_GetSuitAnimIndexFromPS(const playerState_s *ps)
{
  return ?BG_GetSuitAnimIndexFromPS@@YA?AW4SuitAnimType@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Suit_GetAnimFootstepInfo
==============
*/

bool __fastcall BG_Suit_GetAnimFootstepInfo(const playerState_s *const ps, const BgHandler *handler, const BgWeaponMap *const weaponMap, const FootstepAnimType footstepIndex, FootstepInfo *const outInfo)
{
  return ?BG_Suit_GetAnimFootstepInfo@@YA_NQEBUplayerState_s@@PEBVBgHandler@@QEBVBgWeaponMap@@W4FootstepAnimType@@QEAUFootstepInfo@@@Z(ps, handler, weaponMap, footstepIndex, outInfo);
}

/*
==============
BG_Suit_IsSmallBoundsRadius
==============
*/

bool __fastcall BG_Suit_IsSmallBoundsRadius(const playerState_s *ps)
{
  return ?BG_Suit_IsSmallBoundsRadius@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Suit_GetBoundsHeight
==============
*/

double __fastcall BG_Suit_GetBoundsHeight(const playerState_s *ps, const EffectiveStance effStance)
{
  double result; 

  *(float *)&result = ?BG_Suit_GetBoundsHeight@@YAMPEBUplayerState_s@@W4EffectiveStance@@@Z(ps, effStance);
  return result;
}

/*
==============
BG_Suit_SetAnimOverride
==============
*/

void __fastcall BG_Suit_SetAnimOverride(const WeaponDef *weapDef, SuitAnimPackage *const suitAnimPackage, XAnimParts **outXAnims, FootstepAnim *outFootstepAnims)
{
  ?BG_Suit_SetAnimOverride@@YAXPEBUWeaponDef@@QEAUSuitAnimPackage@@QEAPEAUXAnimParts@@QEAUFootstepAnim@@@Z(weapDef, suitAnimPackage, outXAnims, outFootstepAnims);
}

/*
==============
BG_Suit_GetProneViewHeight
==============
*/

int __fastcall BG_Suit_GetProneViewHeight(const SuitDef *const suitDef)
{
  return ?BG_Suit_GetProneViewHeight@@YAHQEBUSuitDef@@@Z(suitDef);
}

/*
==============
BG_Suit_GetBoundsRadius
==============
*/

double __fastcall BG_Suit_GetBoundsRadius(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_Suit_GetBoundsRadius@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_GetSuitMaxFacialTypes
==============
*/

int __fastcall BG_GetSuitMaxFacialTypes(const SuitDef **outSuit)
{
  return ?BG_GetSuitMaxFacialTypes@@YAHPEAPEBUSuitDef@@@Z(outSuit);
}

/*
==============
BG_LoadSuit
==============
*/

void __fastcall BG_LoadSuit(unsigned int suitIndex, const char *suitName)
{
  ?BG_LoadSuit@@YAXIPEBD@Z(suitIndex, suitName);
}

/*
==============
BG_GetSuitFacialAnimType
==============
*/

unsigned __int8 __fastcall BG_GetSuitFacialAnimType(int suitIndex)
{
  return ?BG_GetSuitFacialAnimType@@YAEH@Z(suitIndex);
}

/*
==============
BG_ClearSuits
==============
*/

void BG_ClearSuits(void)
{
  ?BG_ClearSuits@@YAXXZ();
}

/*
==============
BG_GetSuitAnimType
==============
*/

SuitAnimType __fastcall BG_GetSuitAnimType(int suitIndex)
{
  return ?BG_GetSuitAnimType@@YA?AW4SuitAnimType@@H@Z(suitIndex);
}

/*
==============
BG_ClearSuits
==============
*/
void BG_ClearSuits(void)
{
  s_bgSuitsInitialized = 0;
  memset_0(s_suitDefs, 0, sizeof(s_suitDefs));
}

/*
==============
BG_GetSuitAnimIndexFromPS
==============
*/
__int64 BG_GetSuitAnimIndexFromPS(const playerState_s *ps)
{
  const SuitDef *SuitDef; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 178, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( SuitDef )
    return (unsigned int)SuitDef->suitAnimType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 181, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  return MEMORY[0x1B0];
}

/*
==============
BG_GetSuitAnimType
==============
*/
__int64 BG_GetSuitAnimType(int suitIndex)
{
  __int64 v1; 
  const SuitDef *v2; 

  v1 = suitIndex;
  if ( (unsigned int)suitIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 134, ASSERT_TYPE_ASSERT, "(unsigned)( suitIndex ) < (unsigned)( ( sizeof( *array_counter( s_suitDefs ) ) + 0 ) )", "suitIndex doesn't index ARRAY_COUNT( s_suitDefs )\n\t%i not in [0, %i)", suitIndex, 64) )
    __debugbreak();
  v2 = s_suitDefs[v1];
  if ( v2 )
    return (unsigned int)v2->suitAnimType;
  else
    return 4i64;
}

/*
==============
BG_GetSuitDef
==============
*/
const SuitDef *BG_GetSuitDef(int suitIndex)
{
  __int64 v1; 
  bool v2; 
  const SuitDef **v3; 
  int v6; 

  v1 = suitIndex;
  if ( (unsigned int)suitIndex >= 0x40 )
  {
    v6 = 64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 30, ASSERT_TYPE_ASSERT, "(unsigned)( suitIndex ) < (unsigned)( ( sizeof( *array_counter( s_suitDefs ) ) + 0 ) )", "suitIndex doesn't index ARRAY_COUNT( s_suitDefs )\n\t%i not in [0, %i)", suitIndex, v6) )
      __debugbreak();
  }
  if ( !s_bgSuitsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 31, ASSERT_TYPE_ASSERT, "(s_bgSuitsInitialized)", (const char *)&queryFormat, "s_bgSuitsInitialized") )
    __debugbreak();
  v2 = s_suitDefs[v1] == NULL;
  v3 = &s_suitDefs[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 32, ASSERT_TYPE_ASSERT, "(s_suitDefs[suitIndex])", (const char *)&queryFormat, "s_suitDefs[suitIndex]") )
    __debugbreak();
  return *v3;
}

/*
==============
BG_GetSuitFacialAnimType
==============
*/
unsigned __int8 BG_GetSuitFacialAnimType(int suitIndex)
{
  __int64 v1; 
  const SuitDef *v2; 

  v1 = suitIndex;
  if ( (unsigned int)suitIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( suitIndex ) < (unsigned)( ( sizeof( *array_counter( s_suitDefs ) ) + 0 ) )", "suitIndex doesn't index ARRAY_COUNT( s_suitDefs )\n\t%i not in [0, %i)", suitIndex, 64) )
    __debugbreak();
  v2 = s_suitDefs[v1];
  if ( v2 )
    return v2->facialAnimType;
  else
    return 0;
}

/*
==============
BG_GetSuitMaxFacialTypes
==============
*/
__int64 BG_GetSuitMaxFacialTypes(const SuitDef **outSuit)
{
  __int64 result; 
  int v3; 
  const SuitDef *v4; 
  const SuitDef *v5; 
  const SuitDef *v6; 
  const SuitDef *v7; 
  const SuitDef *v8; 
  const SuitDef *v9; 
  const SuitDef *v10; 
  const SuitDef *v11; 
  const SuitDef *v12; 
  const SuitDef *v13; 
  const SuitDef *v14; 
  const SuitDef *v15; 
  const SuitDef *v16; 
  const SuitDef *v17; 
  const SuitDef *v18; 
  const SuitDef *v19; 

  if ( !s_bgSuitsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 158, ASSERT_TYPE_ASSERT, "(s_bgSuitsInitialized)", (const char *)&queryFormat, "s_bgSuitsInitialized") )
    __debugbreak();
  result = 0xFFFFFFFFi64;
  *outSuit = NULL;
  v3 = 2;
  do
  {
    v4 = s_suitDefs[v3 - 2];
    if ( v4 && v4->animsetAsset && v4->facialAnimType > (int)result )
    {
      result = v4->facialAnimType;
      *outSuit = v4;
    }
    v5 = s_suitDefs[v3 - 1];
    if ( v5 && v5->animsetAsset && v5->facialAnimType > (int)result )
    {
      result = v5->facialAnimType;
      *outSuit = v5;
    }
    v6 = s_suitDefs[v3];
    if ( v6 && v6->animsetAsset && v6->facialAnimType > (int)result )
    {
      result = v6->facialAnimType;
      *outSuit = v6;
    }
    v7 = s_suitDefs[v3 + 1];
    if ( v7 && v7->animsetAsset && v7->facialAnimType > (int)result )
    {
      result = v7->facialAnimType;
      *outSuit = v7;
    }
    v8 = s_suitDefs[v3 + 2];
    if ( v8 && v8->animsetAsset && v8->facialAnimType > (int)result )
    {
      result = v8->facialAnimType;
      *outSuit = v8;
    }
    v9 = s_suitDefs[v3 + 3];
    if ( v9 && v9->animsetAsset && v9->facialAnimType > (int)result )
    {
      result = v9->facialAnimType;
      *outSuit = v9;
    }
    v10 = s_suitDefs[v3 + 4];
    if ( v10 && v10->animsetAsset && v10->facialAnimType > (int)result )
    {
      result = v10->facialAnimType;
      *outSuit = v10;
    }
    v11 = s_suitDefs[v3 + 5];
    if ( v11 && v11->animsetAsset && v11->facialAnimType > (int)result )
    {
      result = v11->facialAnimType;
      *outSuit = v11;
    }
    v12 = s_suitDefs[v3 + 6];
    if ( v12 && v12->animsetAsset && v12->facialAnimType > (int)result )
    {
      result = v12->facialAnimType;
      *outSuit = v12;
    }
    v13 = s_suitDefs[v3 + 7];
    if ( v13 && v13->animsetAsset && v13->facialAnimType > (int)result )
    {
      result = v13->facialAnimType;
      *outSuit = v13;
    }
    v14 = s_suitDefs[v3 + 8];
    if ( v14 && v14->animsetAsset && v14->facialAnimType > (int)result )
    {
      result = v14->facialAnimType;
      *outSuit = v14;
    }
    v15 = s_suitDefs[v3 + 9];
    if ( v15 && v15->animsetAsset && v15->facialAnimType > (int)result )
    {
      result = v15->facialAnimType;
      *outSuit = v15;
    }
    v16 = s_suitDefs[v3 + 10];
    if ( v16 && v16->animsetAsset && v16->facialAnimType > (int)result )
    {
      result = v16->facialAnimType;
      *outSuit = v16;
    }
    v17 = s_suitDefs[v3 + 11];
    if ( v17 && v17->animsetAsset && v17->facialAnimType > (int)result )
    {
      result = v17->facialAnimType;
      *outSuit = v17;
    }
    v18 = s_suitDefs[v3 + 12];
    if ( v18 && v18->animsetAsset && v18->facialAnimType > (int)result )
    {
      result = v18->facialAnimType;
      *outSuit = v18;
    }
    v19 = s_suitDefs[v3 + 13];
    if ( v19 && v19->animsetAsset && v19->facialAnimType > (int)result )
    {
      result = v19->facialAnimType;
      *outSuit = v19;
    }
    v3 += 16;
  }
  while ( (unsigned int)(v3 - 2) < 0x40 );
  return result;
}

/*
==============
BG_LoadSuit
==============
*/
void BG_LoadSuit(unsigned int suitIndex, const char *suitName)
{
  __int64 v2; 
  const SuitDef *v4; 

  v2 = suitIndex;
  if ( suitIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 40, ASSERT_TYPE_ASSERT, "(unsigned)( suitIndex ) < (unsigned)( ( sizeof( *array_counter( s_suitDefs ) ) + 0 ) )", "suitIndex doesn't index ARRAY_COUNT( s_suitDefs )\n\t%i not in [0, %i)", suitIndex, 64) )
    __debugbreak();
  if ( !suitName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 41, ASSERT_TYPE_ASSERT, "(suitName)", (const char *)&queryFormat, "suitName") )
    __debugbreak();
  v4 = NULL;
  if ( !s_bgSuitsInitialized )
  {
    if ( (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 45, ASSERT_TYPE_ASSERT, "( suitIndex ) == ( 0 )", "%s == %s\n\t%i, %i", "suitIndex", "0", v2, 0i64) )
      __debugbreak();
    s_bgSuitsInitialized = 1;
  }
  if ( *suitName )
    v4 = Suit_Register(suitName);
  s_suitDefs[v2] = v4;
}

/*
==============
BG_SetSuit
==============
*/
void BG_SetSuit(const BgHandler *const handler, playerState_s *ps, const int suitIndex)
{
  const dvar_t *v6; 
  __int64 turn; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 55, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)suitIndex >= 0x40 )
  {
    LODWORD(turn) = suitIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 56, ASSERT_TYPE_ASSERT, "(unsigned)( suitIndex ) < (unsigned)( ( sizeof( *array_counter( s_suitDefs ) ) + 0 ) )", "suitIndex doesn't index ARRAY_COUNT( s_suitDefs )\n\t%i not in [0, %i)", turn, 64) )
      __debugbreak();
  }
  if ( ps->suitIndex != suitIndex )
  {
    ps->suitIndex = suitIndex;
    if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT|0x80) )
    {
      *(_QWORD *)&ps->viewHeightTarget = 0i64;
      ps->viewHeightLerpTarget = 0;
      v6 = DVARBOOL_killswitch_suit_change_view_height_stuck_fix_enabled;
      if ( !DVARBOOL_killswitch_suit_change_view_height_stuck_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_suit_change_view_height_stuck_fix_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled )
        ps->viewHeightLerpTime = 0;
    }
    if ( PlayerASM_IsEnabled() )
    {
      if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
      {
        *(_QWORD *)&ps->animState.animSet = 0i64;
        *(_QWORD *)&ps->animState.slot[0].packedAnim = 0i64;
        ps->animState.slot[1].packedAnim = 0;
        ps->animState.animSet = BG_PlayerASM_GetAnimsetIndexBySuit(ps->suitIndex);
      }
    }
    else
    {
      *(_QWORD *)&ps->legsTimer = 0i64;
      *(_QWORD *)&ps->torsoTimer = 0i64;
      BG_AnimScriptAnimation(handler, ps, AISTATE_COMBAT, ANIM_MT_IDLE, 1, 0);
    }
  }
}

/*
==============
BG_Suit_GetAnimFootstepInfo
==============
*/
bool BG_Suit_GetAnimFootstepInfo(const playerState_s *const ps, const BgHandler *handler, const BgWeaponMap *const weaponMap, const FootstepAnimType footstepIndex, FootstepInfo *const outInfo)
{
  __int64 v6; 
  FootstepInfo *v10; 
  const dvar_t *v11; 
  bool v13; 
  char v14; 
  char v15; 
  weapAnimFiles_t AnimForFootsteps; 
  gestureAnimType_t v17; 
  const XAnimParts *AnimParts; 
  Weapon *v19; 
  XAnimParts *v20; 
  int WalkAnimDuration; 
  Gesture *v22; 
  const SuitDef *SuitDef; 
  const SuitDef *v24; 
  const WeaponDef *v25; 
  const SuitAnimPackage *animPackageL; 
  Gesture *GestureInternal; 
  const SuitAnimPackage *AnimPackageWithDemeanor; 
  bool v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  __int64 v41; 
  const PlayerWeaponAnimArrays *v42; 
  Gesture *outGesture; 
  Weapon *r_weapon; 
  char v45; 

  v6 = footstepIndex;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 453, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 454, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0xD )
  {
    LODWORD(v41) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 455, ASSERT_TYPE_ASSERT, "(unsigned)( footstepIndex ) < (unsigned)( FOOTSTEP_ANIM_COUNT )", "footstepIndex doesn't index FOOTSTEP_ANIM_COUNT\n\t%i not in [0, %i)", v41, 13) )
      __debugbreak();
  }
  v10 = outInfo;
  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 456, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  v11 = DCONST_DVARMPBOOL_movementAnimProto;
  outGesture = NULL;
  if ( !DCONST_DVARMPBOOL_movementAnimProto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movementAnimProto") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
    return BG_Suit_GetAnimFootstepInfo_Proto(ps, handler, weaponMap, (const FootstepAnimType)v6, v10);
  r_weapon = (Weapon *)BG_GetViewmodelWeapon(weaponMap, ps);
  v13 = BG_UsingAlternate(ps);
  v14 = BG_PlayerDualWielding(ps) != 0;
  LOBYTE(outInfo) = v14;
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_DROP|0x80) && (_DWORD)v6 == 1 && BG_Gesture_GetWalkAnimOverride(ps, NULL, (const Gesture **)&outGesture) )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    v45 = 0;
    if ( (int)v6 < 9 )
      goto LABEL_24;
  }
  v45 = 1;
LABEL_24:
  v10->animDurationMs = 0;
  v10->footstepAnim = NULL;
  v42 = handler->PlayerWeaponAnimsConst(handler, ps);
  AnimForFootsteps = BG_GetAnimForFootsteps((FootstepAnimType)v6);
  v17 = AnimForFootsteps;
  if ( v45 )
  {
    if ( v15 )
    {
      WalkAnimDuration = BG_Gesture_GetWalkAnimDuration(outGesture);
      v22 = outGesture;
      v10->animDurationMs = WalkAnimDuration;
      v10->footstepAnim = BG_Gesture_GetWalkFootstepInfo(v22);
      return 1;
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 338, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)(v17 - 1) > 0x34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 339, ASSERT_TYPE_ASSERT, "(gestureAnimType >= GESTUREANIMTYPE_BEGIN && gestureAnimType < GESTUREANIMTYPE_NUM)", (const char *)&queryFormat, "gestureAnimType >= GESTUREANIMTYPE_BEGIN && gestureAnimType < GESTUREANIMTYPE_NUM") )
      __debugbreak();
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    v19 = r_weapon;
    v24 = SuitDef;
    v25 = BG_WeaponDef(r_weapon, v13);
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 346, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 347, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( !(_BYTE)outInfo || (animPackageL = v24->animPackageL) == NULL || (GestureInternal = BG_Suit_GetGestureInternal(v25, v17, animPackageL)) == NULL )
    {
      AnimPackageWithDemeanor = BG_Suit_GetAnimPackageWithDemeanor(ps, v24);
      if ( !AnimPackageWithDemeanor )
        return 0;
      GestureInternal = BG_Suit_GetGestureInternal(v25, v17, AnimPackageWithDemeanor);
      if ( !GestureInternal )
        return 0;
    }
    v14 = (char)outInfo;
    v20 = *GestureInternal->anims;
  }
  else
  {
    AnimParts = BG_WeaponGetAnimParts(ps, WEAPON_HAND_LEFT, v13, AnimForFootsteps, handler);
    v19 = r_weapon;
    v20 = (XAnimParts *)AnimParts;
  }
  if ( v20 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm0, dword ptr [rcx+64h]
      vmulss  xmm2, xmm1, cs:__real@447a0000
      vcvttss2si eax, xmm2
    }
    v10->animDurationMs = _EAX;
    if ( _EAX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 511, ASSERT_TYPE_ASSERT, "(outInfo->animDurationMs > 0)", (const char *)&queryFormat, "outInfo->animDurationMs > 0") )
      __debugbreak();
    v34 = v45 == 0;
    v10->footstepAnim = &v42->footsteps[v6];
    if ( !v34 )
      return 1;
    v35 = BG_GetAnimForFootsteps((FootstepAnimType)v6);
    switch ( v35 )
    {
      case 95:
      case 339:
        v40 = BG_SprintLoopTime(ps, v19, v13, v14);
        v10->animDurationMs = v40;
        if ( v40 > 0 )
          return 1;
        v37 = 522;
        break;
      case 73:
        v36 = BG_WalkLoopTime(ps, v19, v13, v14);
        v10->animDurationMs = v36;
        if ( v36 <= 0 )
        {
          v37 = 527;
          break;
        }
        return 1;
      case 78:
        v38 = BG_GungHoSprintLoopTime(ps, v19, v13, v14);
        v10->animDurationMs = v38;
        if ( v38 > 0 )
          return 1;
        v37 = 532;
        break;
      case 110:
        v39 = BG_CrawlLoopTime(ps, v19, v13, v14);
        v10->animDurationMs = v39;
        if ( v39 > 0 )
          return 1;
        v37 = 537;
        break;
      default:
        return 1;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", v37, ASSERT_TYPE_ASSERT, "(outInfo->animDurationMs > 0)", (const char *)&queryFormat, "outInfo->animDurationMs > 0") )
      __debugbreak();
    return 1;
  }
  return 0;
}

/*
==============
BG_Suit_GetAnimFootstepInfo_Proto
==============
*/
bool BG_Suit_GetAnimFootstepInfo_Proto(const playerState_s *const ps, const BgHandler *handler, const BgWeaponMap *const weaponMap, const FootstepAnimType footstepIndex, FootstepInfo *const outInfo)
{
  __int64 v6; 
  FootstepInfo *v10; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  bool v12; 
  const PlayerWeaponAnimArrays *v13; 
  weapAnimFiles_t AnimForFootsteps; 
  const XAnimParts *AnimParts; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v28; 
  Gesture *outGesture; 
  bool outIsAlternate; 

  v6 = footstepIndex;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 381, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 382, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0xD )
  {
    LODWORD(v28) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( footstepIndex ) < (unsigned)( FOOTSTEP_ANIM_COUNT )", "footstepIndex doesn't index FOOTSTEP_ANIM_COUNT\n\t%i not in [0, %i)", v28, 13) )
      __debugbreak();
  }
  v10 = outInfo;
  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 384, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  outGesture = NULL;
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_DROP|0x80) && (_DWORD)v6 == 1 && BG_Gesture_GetWalkAnimOverride(ps, NULL, (const Gesture **)&outGesture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 393, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Demeanors are not supported while 'movementAnimProto' is active.") )
    __debugbreak();
  v10->animDurationMs = 0;
  v10->footstepAnim = NULL;
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  v12 = BG_PlayerDualWielding(ps) != 0;
  v13 = handler->PlayerWeaponAnimsConst(handler, ps);
  AnimForFootsteps = BG_GetAnimForFootsteps((FootstepAnimType)v6);
  AnimParts = BG_WeaponGetAnimParts(ps, WEAPON_HAND_LEFT, outIsAlternate, AnimForFootsteps, handler);
  if ( AnimParts )
  {
    v10->footstepAnim = &v13->footsteps[v6];
    switch ( AnimForFootsteps )
    {
      case WEAP_ANIM_ADDITIVE_MOVE_CYCLE_START:
        v16 = BG_MoveCycleWalkTime(ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, v12);
        v10->animDurationMs = v16;
        if ( v16 <= 0 )
        {
          v17 = 418;
          break;
        }
LABEL_38:
        LOBYTE(AnimParts) = 1;
        return (char)AnimParts;
      case WEAP_ANIM_ADDITIVE_MOVE_CYCLE_JOG:
        v18 = BG_MoveCycleJogTime(ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, v12);
        v10->animDurationMs = v18;
        if ( v18 > 0 )
          goto LABEL_38;
        v17 = 423;
        break;
      case WEAP_ANIM_ADDITIVE_MOVE_CYCLE_SPRINT:
        v19 = BG_MoveCycleSprintTime(ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, v12);
        v10->animDurationMs = v19;
        if ( v19 > 0 )
          goto LABEL_38;
        v17 = 428;
        break;
      case WEAP_ANIM_ADDITIVE_MOVE_CYCLE_SUPERSPRINT:
        v20 = BG_MoveCycleSuperSprintTime(ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, v12);
        v10->animDurationMs = v20;
        if ( v20 > 0 )
          goto LABEL_38;
        v17 = 433;
        break;
      case WEAP_ANIM_ADDITIVE_CRAWL_LOOP:
        v21 = BG_CrawlLoopTime(ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, v12);
        v10->animDurationMs = v21;
        if ( v21 > 0 )
          goto LABEL_38;
        v17 = 438;
        break;
      default:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm1, xmm0, dword ptr [rdx+64h]
          vmulss  xmm2, xmm1, cs:__real@447a0000
          vcvttss2si eax, xmm2
        }
        v10->animDurationMs = _EAX;
        if ( _EAX > 0 )
          goto LABEL_38;
        v17 = 443;
        break;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", v17, ASSERT_TYPE_ASSERT, "(outInfo->animDurationMs > 0)", (const char *)&queryFormat, "outInfo->animDurationMs > 0") )
      __debugbreak();
    goto LABEL_38;
  }
  return (char)AnimParts;
}

/*
==============
BG_Suit_GetAnimOverrideEntry
==============
*/
char BG_Suit_GetAnimOverrideEntry(const WeaponDef *weapDef, const SuitAnimPackage *suitAnimPackage, weapAnimFiles_t anim, SuitAnimEntry **outSuitAnimEntry)
{
  __int64 v8; 
  unsigned int v9; 
  SuitAnimPerWeapClass *i; 
  int weapClasses; 
  unsigned int numAnims; 
  __int64 v13; 
  SuitAnimEntry *anims; 

  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 249, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !suitAnimPackage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 250, ASSERT_TYPE_ASSERT, "(suitAnimPackage)", (const char *)&queryFormat, "suitAnimPackage") )
    __debugbreak();
  if ( !outSuitAnimEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 251, ASSERT_TYPE_ASSERT, "(outSuitAnimEntry)", (const char *)&queryFormat, "outSuitAnimEntry") )
    __debugbreak();
  *outSuitAnimEntry = NULL;
  if ( !suitAnimPackage->animOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 257, ASSERT_TYPE_ASSERT, "(suitAnimPackage->animOverrides)", (const char *)&queryFormat, "suitAnimPackage->animOverrides") )
    __debugbreak();
  v8 = 5i64;
  v9 = (unsigned __int8)(LOBYTE(weapDef->weapClass) + 1);
  for ( i = suitAnimPackage->animOverrides + 5; ; --i )
  {
    weapClasses = i->weapClasses;
    if ( _bittest(&weapClasses, v9) || !v8 )
    {
      numAnims = i->numAnims;
      v13 = 0i64;
      if ( numAnims )
        break;
    }
LABEL_20:
    if ( --v8 < 0 )
      return 0;
  }
  anims = i->anims;
  while ( anims[v13].animType != anim )
  {
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= numAnims )
      goto LABEL_20;
  }
  *outSuitAnimEntry = &anims[v13];
  return 1;
}

/*
==============
BG_Suit_GetAnimPackageWithDemeanor
==============
*/
SuitAnimPackage *BG_Suit_GetAnimPackageWithDemeanor(const playerState_s *ps, const SuitDef *suitDef)
{
  DemeanorStateType TargetState; 
  DemeanorStateType v5; 
  SuitAnimPackage *result; 
  __int64 v7; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 286, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 287, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_DROP|0x80) )
    return suitDef->animPackage;
  TargetState = BG_Demeanor_GetTargetState(ps);
  v5 = TargetState;
  if ( (unsigned int)TargetState >= DEMEANOR_STATE_NUM )
  {
    LODWORD(v7) = TargetState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( demeanorState ) < (unsigned)( DEMEANOR_STATE_NUM )", "demeanorState doesn't index DEMEANOR_STATE_NUM\n\t%i not in [0, %i)", v7, 3) )
      __debugbreak();
  }
  if ( v5 == DEMEANOR_STATE_RELAXED )
  {
    result = suitDef->animPackageRelaxed;
    if ( result )
      return result;
    return suitDef->animPackage;
  }
  if ( v5 != DEMEANOR_STATE_SAFE )
    return suitDef->animPackage;
  result = suitDef->animPackageSafe;
  if ( !result )
    return suitDef->animPackage;
  return result;
}

/*
==============
BG_Suit_GetAnimTime
==============
*/
__int64 BG_Suit_GetAnimTime(const playerState_s *ps, const Weapon *weapon, weapAnimFiles_t anim, const bool isAlternate, const bool isDualWielding, int *outInterruptTime)
{
  const SuitDef *SuitDef; 
  const WeaponDef *v11; 
  int *v12; 
  const SuitAnimPackage *animPackageL; 
  int *v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 645, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  v11 = BG_WeaponDef(weapon, isAlternate);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 649, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 650, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v12 = outInterruptTime;
  if ( outInterruptTime )
    *outInterruptTime = 0;
  if ( isDualWielding )
    animPackageL = SuitDef->animPackageL;
  else
    animPackageL = SuitDef->animPackage;
  if ( BG_IsAnimInWeaponPackages(weapon, isAlternate, isDualWielding, ps->weapCommon.meleeComboSeqIdx, anim) || !animPackageL || !BG_Suit_GetAnimOverrideEntry(v11, animPackageL, anim, (SuitAnimEntry **)&outInterruptTime) )
    return 0i64;
  v14 = outInterruptTime;
  if ( v12 )
    *v12 = outInterruptTime[3];
  return (unsigned int)v14[2];
}

/*
==============
BG_Suit_GetBounds
==============
*/
Bounds *BG_Suit_GetBounds(const int suitIndex, const EffectiveStance effStance)
{
  const SuitDef *SuitDef; 
  __int64 v5; 

  SuitDef = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 747, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( effStance == PM_EFF_STANCE_DEFAULT )
    return &SuitDef->bounds_stand;
  if ( effStance == PM_EFF_STANCE_PRONE )
    return &SuitDef->bounds_prone;
  if ( (unsigned int)(effStance - 2) <= 1 )
    return &SuitDef->bounds_crouch;
  LODWORD(v5) = effStance;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 762, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown stance %d", v5) )
    __debugbreak();
  return &playerBox;
}

/*
==============
BG_Suit_GetBoundsHeight
==============
*/
float BG_Suit_GetBoundsHeight(const playerState_s *ps, const EffectiveStance effStance)
{
  __int64 v10; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 771, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_GetSuitDef(ps->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 773, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( effStance )
  {
    if ( effStance == PM_EFF_STANCE_PRONE )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+22Ch]
      }
    }
    else if ( (unsigned int)(effStance - 2) > 1 )
    {
      LODWORD(v10) = effStance;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 788, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unknown stance %d", v10) )
        __debugbreak();
      __asm { vmovss  xmm0, cs:__real@428c0000 }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+228h]
      }
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+224h]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Suit_GetBoundsRadius
==============
*/
float BG_Suit_GetBoundsRadius(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 797, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_GetSuitDef(ps->suitIndex) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+220h]
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 799, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+220h]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Suit_GetCinematicMotionDef
==============
*/
const CinematicMotionDef *BG_Suit_GetCinematicMotionDef(const playerState_s *ps, const BgWeaponMap *weaponMap)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v4; 
  bool v5; 
  const SuitDef *SuitDef; 
  const WeaponDef *v7; 
  SuitAnimPackage *animPackageL; 
  __int64 v9; 
  __int64 i; 
  int v11; 

  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v4 = BG_UsingAlternate(ps);
  v5 = BG_PlayerDualWielding(ps) == 1;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  v7 = BG_WeaponDef(CurrentWeaponForPlayer, v4);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 212, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 213, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v5 )
    animPackageL = SuitDef->animPackageL;
  else
    animPackageL = SuitDef->animPackage;
  if ( !animPackageL )
    return 0i64;
  if ( !animPackageL->animOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 230, ASSERT_TYPE_ASSERT, "(suitAnimPackage->animOverrides)", (const char *)&queryFormat, "suitAnimPackage->animOverrides") )
    __debugbreak();
  v9 = 5i64;
  for ( i = (__int64)&animPackageL->animOverrides[5]; ; i -= 6760i64 )
  {
    v11 = *(_DWORD *)(i + 12);
    if ( _bittest(&v11, (unsigned __int8)(LOBYTE(v7->weapClass) + 1)) || !v9 )
      break;
    if ( --v9 < 0 )
      return 0i64;
  }
  return *(const CinematicMotionDef **)(i + 32);
}

/*
==============
BG_Suit_GetGesture
==============
*/
Gesture *BG_Suit_GetGesture(const playerState_s *ps, const PlayerHandIndex hand, const Weapon *r_weapon, const bool isAlternate, const bool isDualWielding, gestureAnimType_t gestureAnimType)
{
  const SuitDef *SuitDef; 
  const WeaponDef *v11; 
  const SuitAnimPackage *animPackageL; 
  Gesture *result; 
  const SuitAnimPackage *animPackageR; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 338, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(gestureAnimType - 1) > 0x34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 339, ASSERT_TYPE_ASSERT, "(gestureAnimType >= GESTUREANIMTYPE_BEGIN && gestureAnimType < GESTUREANIMTYPE_NUM)", (const char *)&queryFormat, "gestureAnimType >= GESTUREANIMTYPE_BEGIN && gestureAnimType < GESTUREANIMTYPE_NUM") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  v11 = BG_WeaponDef(r_weapon, isAlternate);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 346, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 347, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !isDualWielding )
    goto LABEL_21;
  if ( hand == WEAPON_HAND_LEFT )
  {
    animPackageL = SuitDef->animPackageL;
    if ( animPackageL )
    {
      result = BG_Suit_GetGestureInternal(v11, gestureAnimType, animPackageL);
      if ( result )
        return result;
    }
LABEL_21:
    result = (Gesture *)BG_Suit_GetAnimPackageWithDemeanor(ps, SuitDef);
    if ( result )
      return BG_Suit_GetGestureInternal(v11, gestureAnimType, (const SuitAnimPackage *)result);
    return result;
  }
  if ( hand )
    goto LABEL_21;
  animPackageR = SuitDef->animPackageR;
  if ( !animPackageR )
    goto LABEL_21;
  result = BG_Suit_GetGestureInternal(v11, gestureAnimType, animPackageR);
  if ( !result )
    goto LABEL_21;
  return result;
}

/*
==============
BG_Suit_GetGestureInternal
==============
*/
Gesture *BG_Suit_GetGestureInternal(const WeaponDef *weapDef, gestureAnimType_t gestureAnimType, const SuitAnimPackage *suitAnimPackage)
{
  __int64 v6; 
  unsigned int v7; 
  unsigned int *i; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 

  if ( !suitAnimPackage->animOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 311, ASSERT_TYPE_ASSERT, "(suitAnimPackage->animOverrides)", (const char *)&queryFormat, "suitAnimPackage->animOverrides") )
    __debugbreak();
  v6 = 5i64;
  v7 = (unsigned __int8)(LOBYTE(weapDef->weapClass) + 1);
  for ( i = &suitAnimPackage->animOverrides[5].numGestures; ; i -= 1690 )
  {
    v9 = *(i - 3);
    if ( _bittest(&v9, v7) || !v6 )
    {
      v10 = 0;
      if ( *i )
        break;
    }
LABEL_11:
    if ( --v6 < 0 )
      return 0i64;
  }
  v11 = *((_QWORD *)i - 1);
  while ( gestureAnimType != *(_DWORD *)(v11 + 16i64 * v10 + 8) )
  {
    if ( ++v10 >= *i )
      goto LABEL_11;
  }
  return *(Gesture **)(v11 + 16i64 * v10);
}

/*
==============
BG_Suit_GetOverriddenAnims
==============
*/
void BG_Suit_GetOverriddenAnims(const playerState_s *ps, const Weapon *r_weapon, RawWeaponAnimArrays *outAnimArrays)
{
  const WeaponDef *v6; 
  const SuitDef *SuitDef; 
  const WeaponDef *v8; 
  SuitAnimPackage *AnimPackageWithDemeanor; 
  SuitAnimPackage *v13; 
  WeaponAnimPackage *szXAnimsRightHanded; 
  WeaponAnimPackage *szXAnimsLeftHanded; 

  _R14 = outAnimArrays;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 693, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 694, ASSERT_TYPE_ASSERT, "(outAnimArrays)", (const char *)&queryFormat, "outAnimArrays") )
    __debugbreak();
  v6 = BG_WeaponDef(r_weapon, 0);
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  v8 = BG_WeaponDef(r_weapon, 1);
  if ( v6->szXAnims )
  {
    AnimPackageWithDemeanor = BG_Suit_GetAnimPackageWithDemeanor(ps, SuitDef);
    memcpy_0(_R14, v6->szXAnims->anims, 0x1330ui64);
    memcpy_0(_R14->footsteps, v6->szXAnims->footstep, sizeof(_R14->footsteps));
    BG_Suit_SetAnimOverride(v6, AnimPackageWithDemeanor, _R14->xAnims, _R14->footsteps);
    _RCX = v6->szXAnims->blendSpaces;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [r14+1330h], ymm0
      vmovups ymm1, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [r14+1350h], ymm1
    }
    if ( v6->szXAnims )
    {
      v13 = BG_Suit_GetAnimPackageWithDemeanor(ps, SuitDef);
      memcpy_0(_R14->xAnimsAlt, v8->szXAnims->anims, sizeof(_R14->xAnimsAlt));
      memcpy_0(_R14->footstepsAlt, v6->szXAnims->footstep, sizeof(_R14->footstepsAlt));
      BG_Suit_SetAnimOverride(v8, v13, _R14->xAnimsAlt, _R14->footstepsAlt);
      _RCX = v6->szXAnims->blendSpaces;
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups ymmword ptr [r14+1330h], ymm0
        vmovups ymm1, ymmword ptr [rcx+20h]
        vmovups ymmword ptr [r14+1350h], ymm1
      }
    }
  }
  szXAnimsRightHanded = v6->szXAnimsRightHanded;
  if ( szXAnimsRightHanded )
  {
    memcpy_0(_R14->xAnimsRightHanded, szXAnimsRightHanded->anims, sizeof(_R14->xAnimsRightHanded));
    memcpy_0(_R14->footstepsRightHanded, v6->szXAnimsRightHanded->footstep, sizeof(_R14->footstepsRightHanded));
    BG_Suit_SetAnimOverride(v6, SuitDef->animPackageR, _R14->xAnimsRightHanded, _R14->footstepsRightHanded);
    _RCX = v6->szXAnimsRightHanded->blendSpaces;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [r14+3A10h], ymm0
      vmovups ymm1, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [r14+3A30h], ymm1
    }
  }
  szXAnimsLeftHanded = v6->szXAnimsLeftHanded;
  if ( szXAnimsLeftHanded )
  {
    memcpy_0(_R14->xAnimsLeftHanded, szXAnimsLeftHanded->anims, sizeof(_R14->xAnimsLeftHanded));
    memcpy_0(_R14->footstepsLeftHanded, v6->szXAnimsLeftHanded->footstep, sizeof(_R14->footstepsLeftHanded));
    BG_Suit_SetAnimOverride(v6, SuitDef->animPackageL, _R14->xAnimsLeftHanded, _R14->footstepsLeftHanded);
    _RCX = v6->szXAnimsLeftHanded->blendSpaces;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [r14+4D80h], ymm0
      vmovups ymm1, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [r14+4DA0h], ymm1
    }
  }
}

/*
==============
BG_Suit_GetProneViewHeight
==============
*/
__int64 BG_Suit_GetProneViewHeight(const SuitDef *const suitDef)
{
  const dvar_t *v2; 
  const char *v3; 

  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 814, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( BG_WorldStreaming_IsEnabled() )
  {
    v2 = DVARINT_playerProneViewheightAdjust_worldStreamingMap;
    if ( DVARINT_playerProneViewheightAdjust_worldStreamingMap )
      goto LABEL_11;
    v3 = "playerProneViewheightAdjust_worldStreamingMap";
  }
  else
  {
    v2 = DVARINT_playerProneViewheightAdjust;
    if ( DVARINT_playerProneViewheightAdjust )
      goto LABEL_11;
    v3 = "playerProneViewheightAdjust";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v3) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(v2);
  return (unsigned int)(v2->current.integer + suitDef->viewheight_prone);
}

/*
==============
BG_Suit_InitAssets
==============
*/
void BG_Suit_InitAssets(bool isFullInit)
{
  if ( isFullInit )
  {
    NetConstStrings_CallForAllSuitStrings((void (__fastcall *)(const unsigned int, const char *))BG_LoadSuit);
    s_bgSuitsInitialized = 1;
  }
  else
  {
    if ( !s_bgSuitsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 107, ASSERT_TYPE_ASSERT, "(s_bgSuitsInitialized)", (const char *)&queryFormat, "s_bgSuitsInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllSuitStrings((void (__fastcall *)(const unsigned int, const char *))BG_LoadSuit);
  }
}

/*
==============
BG_Suit_IsRoboticIKEnabled
==============
*/
__int64 BG_Suit_IsRoboticIKEnabled(const int suitIndex)
{
  const SuitDef *SuitDef; 

  if ( (unsigned int)suitIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 189, ASSERT_TYPE_ASSERT, "(unsigned)( suitIndex ) < (unsigned)( ( sizeof( *array_counter( s_suitDefs ) ) + 0 ) )", "suitIndex doesn't index ARRAY_COUNT( s_suitDefs )\n\t%i not in [0, %i)", suitIndex, 64) )
    __debugbreak();
  SuitDef = BG_GetSuitDef(suitIndex);
  if ( SuitDef )
    return SuitDef->enableIKOverride;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 192, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  return MEMORY[0x44];
}

/*
==============
BG_Suit_IsSmallBoundsRadius
==============
*/
bool BG_Suit_IsSmallBoundsRadius(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 797, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_GetSuitDef(ps->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 799, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+220h]
    vcomiss xmm0, cs:__real@41200000
  }
  return 0;
}

/*
==============
BG_Suit_MyChanges
==============
*/
void BG_Suit_MyChanges(void)
{
  s_bgSuitsInitialized = 0;
  memset_0(s_suitDefs, 0, sizeof(s_suitDefs));
  if ( NetConstStrings_AreStringsLoaded() )
  {
    NetConstStrings_CallForAllSuitStrings((void (__fastcall *)(const unsigned int, const char *))BG_LoadSuit);
    s_bgSuitsInitialized = 1;
  }
}

/*
==============
BG_Suit_SetAnimOverride
==============
*/
void BG_Suit_SetAnimOverride(const WeaponDef *weapDef, SuitAnimPackage *const suitAnimPackage, XAnimParts **outXAnims, FootstepAnim *outFootstepAnims)
{
  SuitAnimPerWeapClass *animOverrides; 
  __int64 v9; 
  unsigned int *p_numGestures; 
  int v11; 
  __int64 i; 
  __int64 v13; 
  __int64 v14; 
  FootstepAnimType FootstepFromAnim; 
  unsigned __int64 v16; 
  __int64 v19; 
  unsigned int j; 
  FootstepAnimType FootstepFromGesture; 
  unsigned __int64 v30; 
  __int64 v33; 

  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 589, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !outXAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 590, ASSERT_TYPE_ASSERT, "(outXAnims)", (const char *)&queryFormat, "outXAnims") )
    __debugbreak();
  if ( !outFootstepAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 591, ASSERT_TYPE_ASSERT, "(outFootstepAnims)", (const char *)&queryFormat, "outFootstepAnims") )
    __debugbreak();
  if ( suitAnimPackage )
  {
    animOverrides = suitAnimPackage->animOverrides;
    if ( !animOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 600, ASSERT_TYPE_ASSERT, "(suitAnimOverrides)", (const char *)&queryFormat, "suitAnimOverrides") )
      __debugbreak();
    v9 = 5i64;
    p_numGestures = &animOverrides[5].numGestures;
    do
    {
      v11 = *(p_numGestures - 3);
      if ( _bittest(&v11, (unsigned __int8)(weapDef->weapClass + 1)) || !v9 )
      {
        for ( i = 0i64; (unsigned int)i < *(p_numGestures - 4); i = (unsigned int)(i + 1) )
        {
          v13 = *((_QWORD *)p_numGestures - 3) + 24 * i;
          v14 = *(int *)(v13 + 16);
          if ( !outXAnims[v14] )
          {
            outXAnims[v14] = *(XAnimParts **)v13;
            FootstepFromAnim = BG_GetFootstepFromAnim((weapAnimFiles_t)v14);
            if ( FootstepFromAnim != FOOTSTEP_ANIM_INVALID )
            {
              v16 = 129i64 * (int)FootstepFromAnim;
              _RDX = &outFootstepAnims[v16 / 0x81];
              _RAX = (int *)&p_numGestures[v16 + 4];
              v19 = 4i64;
              do
              {
                _RDX = (FootstepAnim *)((char *)_RDX + 128);
                __asm { vmovups xmm0, xmmword ptr [rax] }
                _RAX += 32;
                __asm
                {
                  vmovups xmmword ptr [rdx-80h], xmm0
                  vmovups xmm1, xmmword ptr [rax-70h]
                  vmovups xmmword ptr [rdx-70h], xmm1
                  vmovups xmm0, xmmword ptr [rax-60h]
                  vmovups xmmword ptr [rdx-60h], xmm0
                  vmovups xmm1, xmmword ptr [rax-50h]
                  vmovups xmmword ptr [rdx-50h], xmm1
                  vmovups xmm0, xmmword ptr [rax-40h]
                  vmovups xmmword ptr [rdx-40h], xmm0
                  vmovups xmm1, xmmword ptr [rax-30h]
                  vmovups xmmword ptr [rdx-30h], xmm1
                  vmovups xmm0, xmmword ptr [rax-20h]
                  vmovups xmmword ptr [rdx-20h], xmm0
                  vmovups xmm1, xmmword ptr [rax-10h]
                  vmovups xmmword ptr [rdx-10h], xmm1
                }
                --v19;
              }
              while ( v19 );
              _RDX->leftCount = *_RAX;
            }
          }
        }
        for ( j = 0; j < *p_numGestures; ++j )
        {
          FootstepFromGesture = BG_GetFootstepFromGesture(*(gestureAnimType_t *)(*((_QWORD *)p_numGestures - 1) + 16i64 * j + 8));
          if ( FootstepFromGesture != FOOTSTEP_ANIM_INVALID )
          {
            v30 = 129i64 * (int)FootstepFromGesture;
            _RDX = &outFootstepAnims[v30 / 0x81];
            _RAX = (int *)&p_numGestures[v30 + 4];
            v33 = 4i64;
            do
            {
              _RDX = (FootstepAnim *)((char *)_RDX + 128);
              __asm { vmovups xmm0, xmmword ptr [rax] }
              _RAX += 32;
              __asm
              {
                vmovups xmmword ptr [rdx-80h], xmm0
                vmovups xmm1, xmmword ptr [rax-70h]
                vmovups xmmword ptr [rdx-70h], xmm1
                vmovups xmm0, xmmword ptr [rax-60h]
                vmovups xmmword ptr [rdx-60h], xmm0
                vmovups xmm1, xmmword ptr [rax-50h]
                vmovups xmmword ptr [rdx-50h], xmm1
                vmovups xmm0, xmmword ptr [rax-40h]
                vmovups xmmword ptr [rdx-40h], xmm0
                vmovups xmm1, xmmword ptr [rax-30h]
                vmovups xmmword ptr [rdx-30h], xmm1
                vmovups xmm0, xmmword ptr [rax-20h]
                vmovups xmmword ptr [rdx-20h], xmm0
                vmovups xmm1, xmmword ptr [rax-10h]
                vmovups xmmword ptr [rdx-10h], xmm1
              }
              --v33;
            }
            while ( v33 );
            _RDX->leftCount = *_RAX;
          }
        }
      }
      p_numGestures -= 1690;
      --v9;
    }
    while ( v9 >= 0 );
  }
}

/*
==============
BG_Suit_ShouldUseSuitAnim
==============
*/
bool BG_Suit_ShouldUseSuitAnim(const playerState_s *ps, const Weapon *weapon, const bool isAlternate, const bool isDualWielding, const weapAnimFiles_t weapAnim, const weapAnimFiles_t suitAnim)
{
  const SuitDef *SuitDef; 
  const WeaponDef *v11; 
  const SuitAnimPackage *animPackageL; 
  SuitAnimEntry *outSuitAnimEntry; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 550, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  v11 = BG_WeaponDef(weapon, isAlternate);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 555, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_suit.cpp", 556, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( isDualWielding )
    animPackageL = SuitDef->animPackageL;
  else
    animPackageL = SuitDef->animPackage;
  return !BG_IsAnimInWeaponPackages(weapon, isAlternate, isDualWielding, ps->weapCommon.meleeComboSeqIdx, weapAnim) && animPackageL && BG_Suit_GetAnimOverrideEntry(v11, animPackageL, suitAnim, &outSuitAnimEntry);
}

