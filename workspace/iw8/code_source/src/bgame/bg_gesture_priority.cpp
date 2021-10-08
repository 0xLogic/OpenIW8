/*
==============
BG_GesturePriority_AllowReload
==============
*/

bool __fastcall BG_GesturePriority_AllowReload(const pmove_t *pm, const PlayerHandIndex hand)
{
  return ?BG_GesturePriority_AllowReload@@YA_NPEBVpmove_t@@W4PlayerHandIndex@@@Z(pm, hand);
}

/*
==============
BG_GesturePriority_CanPlay
==============
*/

bool __fastcall BG_GesturePriority_CanPlay(const GesturePlayRequest *request)
{
  return ?BG_GesturePriority_CanPlay@@YA_NPEBUGesturePlayRequest@@@Z(request);
}

/*
==============
BG_GesturePriority_GetGestureInterruptingState
==============
*/

GestureWeaponState __fastcall BG_GesturePriority_GetGestureInterruptingState(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmHandler, const Gesture *gesture, GestureHandCheck handCheck)
{
  return ?BG_GesturePriority_GetGestureInterruptingState@@YA?AW4GestureWeaponState@@PEBVBgWeaponMap@@PEBUplayerState_s@@PEBVBgHandler@@PEBUGesture@@W4GestureHandCheck@@@Z(weaponMap, ps, pmHandler, gesture, handCheck);
}

/*
==============
BG_GesturePriority_AllowFire
==============
*/

bool __fastcall BG_GesturePriority_AllowFire(const pmove_t *pm, const PlayerHandIndex hand)
{
  return ?BG_GesturePriority_AllowFire@@YA_NPEBVpmove_t@@W4PlayerHandIndex@@@Z(pm, hand);
}

/*
==============
BG_GesturePriority_AllowSprintAnims
==============
*/

bool __fastcall BG_GesturePriority_AllowSprintAnims(const pmove_t *pm)
{
  return ?BG_GesturePriority_AllowSprintAnims@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_GesturePriority_AllowAxeThrow
==============
*/

bool __fastcall BG_GesturePriority_AllowAxeThrow(const pmove_t *pm)
{
  return ?BG_GesturePriority_AllowAxeThrow@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_GesturePriority_ShouldCancelRightHand
==============
*/

bool __fastcall BG_GesturePriority_ShouldCancelRightHand(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmHandler, const unsigned int slot, const Gesture *gesture, const PlayerHandIndex hand, const bool isDualWield)
{
  return ?BG_GesturePriority_ShouldCancelRightHand@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@PEBVBgHandler@@IPEBUGesture@@W4PlayerHandIndex@@_N@Z(weaponMap, ps, pmHandler, slot, gesture, hand, isDualWield);
}

/*
==============
BG_GesturePriority_SetEndTime
==============
*/

void __fastcall BG_GesturePriority_SetEndTime(pmove_t *pm, GestureWeaponState newGamePlayState, unsigned int slot, const Gesture *gesture)
{
  ?BG_GesturePriority_SetEndTime@@YAXPEAVpmove_t@@W4GestureWeaponState@@IPEBUGesture@@@Z(pm, newGamePlayState, slot, gesture);
}

/*
==============
BG_GesturePriority_TryPlay
==============
*/

bool __fastcall BG_GesturePriority_TryPlay(const GesturePlayRequest *request, unsigned int *outSlot, GestureError *outErrorCode)
{
  return ?BG_GesturePriority_TryPlay@@YA_NPEBUGesturePlayRequest@@PEAIPEAW4GestureError@@@Z(request, outSlot, outErrorCode);
}

/*
==============
BG_GesturePriority_Update
==============
*/

void __fastcall BG_GesturePriority_Update(pmove_t *pm)
{
  ?BG_GesturePriority_Update@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_GesturePriority_SetupRequest
==============
*/

GesturePlayRequest *__fastcall BG_GesturePriority_SetupRequest(GesturePlayRequest *result, const BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *pmHandler, unsigned int gestureIndex, const int gameTime)
{
  return ?BG_GesturePriority_SetupRequest@@YA?AUGesturePlayRequest@@PEBVBgWeaponMap@@PEAUplayerState_s@@PEBVBgHandler@@IH@Z(result, weaponMap, ps, pmHandler, gestureIndex, gameTime);
}

/*
==============
BG_GesturePriority_AllowAxeThrow
==============
*/
char BG_GesturePriority_AllowAxeThrow(const pmove_t *pm)
{
  playerState_s *ps; 
  unsigned int v3; 
  GestureState *i; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 848, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 848, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = 0;
  for ( i = &ps->gestureState; i->gestures[0].state == GESTURE_STATE_OFF || BG_Gesture_GetCurrentAsset(ps, v3)->priority > (unsigned int)GESTURE_PRIORITY_SCRIPT || BG_Gesture_IsReadyToBlendOut(ps, v3, pm->cmd.serverTime, 0); i = (GestureState *)((char *)i + 32) )
  {
    if ( ++v3 >= 2 )
      return 1;
  }
  return 0;
}

/*
==============
BG_GesturePriority_AllowFire
==============
*/
char BG_GesturePriority_AllowFire(const pmove_t *pm, const PlayerHandIndex hand)
{
  playerState_s *ps; 
  unsigned int v5; 
  GestureState *p_gestureState; 
  int v7; 
  unsigned int priority; 
  __int64 v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 722, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 722, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v10) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 724, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  if ( hand == WEAPON_HAND_DEFAULT )
    return 1;
  if ( PM_Demeanor_CanFire(ps) )
  {
    v5 = 0;
    p_gestureState = &ps->gestureState;
    v7 = 1312;
    while ( 1 )
    {
      priority = BG_Gesture_GetCurrentAsset(ps, v5)->priority;
      if ( (priority > 0xA || !_bittest(&v7, priority)) && p_gestureState->gestures[0].state && (p_gestureState->gestures[0].state == GESTURE_STATE_PLAYING || !BG_Gesture_IsReadyToBlendOut(ps, v5, pm->cmd.serverTime, 0)) )
        break;
      ++v5;
      p_gestureState = (GestureState *)((char *)p_gestureState + 32);
      if ( v5 >= 2 )
        return 1;
    }
  }
  return 0;
}

/*
==============
BG_GesturePriority_AllowReload
==============
*/
char BG_GesturePriority_AllowReload(const pmove_t *pm, const PlayerHandIndex hand)
{
  playerState_s *ps; 
  unsigned int v5; 
  GestureStateType State; 
  const Gesture *CurrentAsset; 
  __int64 v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 766, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 766, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v9) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 768, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  if ( hand == WEAPON_HAND_DEFAULT )
    return 1;
  v5 = 0;
  while ( 1 )
  {
    State = BG_Gesture_GetState(ps, v5);
    if ( State )
    {
      CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v5);
      if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 784, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
        __debugbreak();
      if ( CurrentAsset->priority == GESTURE_PRIORITY_SCRIPT && (State == GESTURE_STATE_PLAYING || !BG_Gesture_IsReadyToBlendOut(ps, v5, pm->cmd.serverTime, 0)) )
        break;
    }
    if ( ++v5 >= 2 )
      return 1;
  }
  return 0;
}

/*
==============
BG_GesturePriority_AllowSprintAnims
==============
*/
char BG_GesturePriority_AllowSprintAnims(const pmove_t *pm)
{
  playerState_s *ps; 
  unsigned int v3; 
  GestureState *i; 
  GesturePriority priority; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 808, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 808, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = 0;
  for ( i = &ps->gestureState; ; i = (GestureState *)((char *)i + 32) )
  {
    priority = BG_Gesture_GetCurrentAsset(ps, v3)->priority;
    if ( (((priority - 6) & 0xFFFFFFFA) != 0 || priority == GESTURE_PRIORITY_GROUND_POUND) && i->gestures[0].state && (i->gestures[0].state == GESTURE_STATE_PLAYING || !BG_Gesture_IsReadyToBlendOut(ps, v3, pm->cmd.serverTime, 0)) )
      break;
    if ( ++v3 >= 2 )
      return 1;
  }
  return 0;
}

/*
==============
BG_GesturePriority_CanPlay
==============
*/
bool BG_GesturePriority_CanPlay(const GesturePlayRequest *request)
{
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 533, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  return BG_GesturePriority_CheckPriority(request, 1);
}

/*
==============
BG_GesturePriority_CheckPriority
==============
*/
char BG_GesturePriority_CheckPriority(const GesturePlayRequest *request, bool onlyValidate)
{
  const Gesture *AssetFromIndex; 
  const dvar_t *v4; 
  int gameTime; 
  playerState_s *ps; 
  const Gesture *v7; 
  unsigned int v8; 
  unsigned int v9; 
  const Gesture *CurrentAsset; 
  GestureStateType State; 
  char v12; 
  GesturePriority priority; 
  bool slotBlend; 
  const GesturePriorityBlendOutInfo *v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v19; 
  __int64 cancelTransitions; 
  __int64 v21; 
  char v22; 

  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 468, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  AssetFromIndex = BG_Gesture_GetAssetFromIndex(request->gestureIndex);
  if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 472, ASSERT_TYPE_ASSERT, "(requestedGesture)", (const char *)&queryFormat, "requestedGesture") )
    __debugbreak();
  if ( !request->ignoreGamePlayState && BG_GesturePriority_GetGestureInterruptingState(request->weaponMap, request->ps, request->pmHandler, AssetFromIndex, (GestureHandCheck)(request->checkStateAkimboHands + 1)) != GESTURE_WEAPON_STATE_NUM )
    return 0;
  v4 = DCONST_DVARMPBOOL_gesture_use_priority_system;
  if ( !DCONST_DVARMPBOOL_gesture_use_priority_system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gesture_use_priority_system") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 1;
  gameTime = request->gameTime;
  ps = request->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 431, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = NULL;
  v22 = 0;
  v8 = 0;
  v9 = 2;
  do
  {
    CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v8);
    State = BG_Gesture_GetState(ps, v8);
    if ( State )
    {
      if ( State == GESTURE_STATE_PLAYING && !BG_Gesture_IsReadyToBlendOut(ps, v8, gameTime, 0) )
      {
        v9 = v8;
        v7 = CurrentAsset;
      }
      v12 = v22;
    }
    else
    {
      v12 = 1;
      v22 = 1;
    }
    ++v8;
  }
  while ( v8 < 2 );
  if ( v7 )
  {
    if ( request->stopAllGestures || (priority = AssetFromIndex->priority, priority == GESTURE_PRIORITY_DEMEANOR) && v7->priority == GESTURE_PRIORITY_SCRIPT || priority <= v7->priority )
    {
      if ( AssetFromIndex != v7 )
      {
        if ( !onlyValidate )
        {
          if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 405, ASSERT_TYPE_ASSERT, "(newGesture)", (const char *)&queryFormat, "newGesture") )
            __debugbreak();
          if ( v9 >= 2 )
          {
            LODWORD(v21) = 2;
            LODWORD(cancelTransitions) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 406, ASSERT_TYPE_ASSERT, "(unsigned)( activeSlot ) < (unsigned)( 2 )", "activeSlot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", cancelTransitions, v21) )
              __debugbreak();
          }
          slotBlend = request->slotBlend;
          if ( slotBlend )
          {
            BG_Gesture_StopBySlot(request->ps, v9, request->gameTime, slotBlend, request->slotBlendDuration, request->cancelTransitions);
          }
          else
          {
            v15 = PRIORITY_BLEND_OUT_LIST;
            v16 = 0;
            while ( v7->priority != v15->currentPriority || AssetFromIndex->priority != v15->newPriority )
            {
              ++v16;
              ++v15;
              if ( v16 >= 2 )
              {
                v15 = NULL;
                break;
              }
            }
            v17 = request->gameTime;
            if ( v15 )
              BG_Gesture_StopBySlot(request->ps, v9, v17, v15->earlyOut, v15->outDuration, v15->cancelTransitions);
            else
              BG_Gesture_StopBySlot(request->ps, v9, v17, 0, 0, 0);
          }
          goto LABEL_49;
        }
        return 1;
      }
    }
    return 0;
  }
  if ( !onlyValidate )
  {
LABEL_49:
    if ( !v12 )
    {
      v19 = 0;
      if ( v9 != 2 )
        LOBYTE(v19) = v9 == 0;
      BG_Gesture_StopBySlot(request->ps, v19, request->gameTime, 1, 0, 0);
    }
  }
  return 1;
}

/*
==============
BG_GesturePriority_GetGameplayStateBlendOutInfo
==============
*/
void BG_GesturePriority_GetGameplayStateBlendOutInfo(const BgWeaponMap *weaponMap, playerState_s *ps, GestureWeaponState newGamePlayState, const unsigned int slot, const Gesture *gesture, bool *outEarlyOut, int *outEarlyOutDuration, bool *outCancelTransitions)
{
  bool *v8; 
  int *v13; 
  bool *v14; 
  const GestureGameplayStateBlendOutInfo *v15; 
  unsigned int i; 
  GesturePriority currentPriority; 
  const Weapon *CurrentWeaponForPlayer; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v20; 
  char v24; 
  char v25; 
  int weaponTime; 
  GestureAnimationSettings *AnimationSettings; 
  int outDuration; 

  v8 = outEarlyOut;
  if ( !outEarlyOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 315, ASSERT_TYPE_ASSERT, "(outEarlyOut)", (const char *)&queryFormat, "outEarlyOut") )
    __debugbreak();
  v13 = outEarlyOutDuration;
  if ( !outEarlyOutDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 316, ASSERT_TYPE_ASSERT, "(outEarlyOutDuration)", (const char *)&queryFormat, "outEarlyOutDuration") )
    __debugbreak();
  v14 = outCancelTransitions;
  if ( !outCancelTransitions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 317, ASSERT_TYPE_ASSERT, "(outCancelTransitions)", (const char *)&queryFormat, "outCancelTransitions") )
    __debugbreak();
  v15 = GAMEPLAY_STATE_BLEND_OUT_LIST;
  for ( i = 0; i < 0xB; ++i )
  {
    currentPriority = v15->currentPriority;
    if ( (currentPriority == GESTURE_PRIORITY_COUNT || gesture->priority == currentPriority) && newGamePlayState == v15->newGamePlayState )
    {
      *v8 = v15->earlyOut;
      *v13 = v15->outDuration;
      *v14 = v15->cancelTransitions;
      return;
    }
    ++v15;
  }
  if ( !BG_Gesture_ShouldBlendOutToState(ps, slot, newGamePlayState) )
  {
    *v8 = 1;
    *v13 = 0;
    goto LABEL_38;
  }
  if ( newGamePlayState == GESTURE_WEAPON_STATE_ADS )
  {
    *v8 = 1;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    if ( ps )
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
        goto LABEL_19;
    }
    else
    {
      p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
    }
    if ( ps && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu)) )
      v20 = 1;
    else
LABEL_19:
      v20 = 0;
    BG_GetADSTransTimes(weaponMap, ps, CurrentWeaponForPlayer, v20, (float *)&outEarlyOutDuration, (float *)&outEarlyOut);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+58h+outEarlyOut]
      vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcvtss2sd xmm0, xmm0, xmm0
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( !(v24 | v25) )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm1, xmm0, xmm1
        vcvttss2si eax, xmm1
      }
      *v13 = _EAX;
      *v14 = 0;
      return;
    }
LABEL_38:
    *v14 = 0;
    return;
  }
  if ( newGamePlayState == GESTURE_WEAPON_STATE_WEAPON_SWITCH )
  {
    weaponTime = ps->weapState[0].weaponTime;
    AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
    if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 355, ASSERT_TYPE_ASSERT, "(settings)", (const char *)&queryFormat, "settings") )
      __debugbreak();
    *v8 = 1;
    outDuration = AnimationSettings->outDuration;
    if ( weaponTime < outDuration )
      outDuration = weaponTime;
    if ( outDuration < 0 )
      outDuration = 0;
    *v13 = outDuration;
    *v14 = 0;
  }
  else
  {
    *v8 = 0;
    *v13 = 0;
    *v14 = 0;
  }
}

/*
==============
BG_GesturePriority_GetGestureInterruptingState
==============
*/
__int64 BG_GesturePriority_GetGestureInterruptingState(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmHandler, const Gesture *gesture, GestureHandCheck handCheck)
{
  unsigned int priority; 
  int v11; 
  PlayerHandIndex WeaponHand; 
  PlayerHandIndex v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  int *i; 
  char v17; 
  GesturePriority v18; 
  int v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  __int64 v23; 

  _R13 = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 176, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pmHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 177, ASSERT_TYPE_ASSERT, "(pmHandler)", (const char *)&queryFormat, "pmHandler") )
    __debugbreak();
  if ( (unsigned int)handCheck >= GESTURE_HAND_CHECK_COUNT )
  {
    LODWORD(v23) = handCheck;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( handCheck ) < (unsigned)( GESTURE_HAND_CHECK_COUNT )", "handCheck doesn't index GESTURE_HAND_CHECK_COUNT\n\t%i not in [0, %i)", v23, 3) )
      __debugbreak();
  }
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 179, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R13->pm_flags, ACTIVE, 9u) )
  {
    priority = gesture->priority;
    if ( priority > 9 )
      return 2i64;
    v11 = 591;
    if ( !_bittest(&v11, priority) )
      return 2i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:ADS_BLEND_THRESHOLD
      vcomiss xmm0, dword ptr [r13+730h]
    }
  }
  WeaponHand = BG_PlayerLastWeaponHand(weaponMap, _R13);
  if ( handCheck )
  {
    v13 = handCheck == GESTURE_HAND_CHECK_LEFT;
    v14 = WeaponHand >= WEAPON_HAND_LEFT;
  }
  else
  {
    v14 = 0i64;
    v13 = WEAPON_HAND_DEFAULT;
  }
  v15 = (unsigned int)v13;
  if ( (unsigned int)v13 > v14 )
    return 512i64;
  for ( i = &_R13->weapState[v13].weaponState; ; i += 20 )
  {
    if ( gesture->priority != GESTURE_PRIORITY_MOUNT )
    {
LABEL_29:
      v17 = 0;
      goto LABEL_30;
    }
    if ( (unsigned int)(*i - 18) > 3 )
    {
      if ( *i == 17 )
      {
        v17 = 1;
      }
      else
      {
        if ( !PM_Weapon_IsInInterruptibleState(weaponMap, _R13, v13, pmHandler) )
          goto LABEL_29;
        v17 = 1;
      }
    }
    else
    {
      v17 = 1;
    }
LABEL_30:
    v18 = gesture->priority;
    if ( v18 != GESTURE_PRIORITY_SCRIPT && v18 != GESTURE_PRIORITY_DEMEANOR )
      goto LABEL_37;
    v19 = *i;
    if ( (unsigned int)(*i - 16) > 1 )
    {
      if ( v19 == 22 )
        goto LABEL_38;
      if ( (unsigned int)(v19 - 23) > 1 )
        goto LABEL_37;
    }
    if ( v19 != 22 )
    {
      if ( (unsigned int)(v19 - 23) > 1 )
        return 1i64;
LABEL_37:
      v19 = *i;
      if ( (unsigned int)(*i - 22) > 2 )
        goto LABEL_39;
    }
LABEL_38:
    if ( !v17 )
      return 128i64;
LABEL_39:
    if ( (v18 == GESTURE_PRIORITY_SCRIPT || v18 == GESTURE_PRIORITY_MOUNT_REACH) && (unsigned int)(v19 - 34) <= 1 || v18 == GESTURE_PRIORITY_DEMEANOR && v19 == 36 && BG_Demeanor_IsFireRequested(_R13) )
      return 4i64;
    v20 = *i;
    if ( (unsigned int)(v20 - 1) <= 4 && gesture->priority == GESTURE_PRIORITY_DEMEANOR && !v17 )
    {
      if ( (_R13->weapState[0].weapAnim & 0xFFFFFF7F) == 15 && BG_Demeanor_GetTargetState(_R13) == DEMEANOR_STATE_SAFE )
        return 16i64;
      return 512i64;
    }
    if ( (unsigned int)v20 <= 0x32 )
    {
      v21 = 0x4000000001FBEi64;
      if ( _bittest64(&v21, v20) )
      {
        if ( !v17 )
          break;
      }
    }
    if ( (unsigned int)(v20 - 18) <= 3 && !v17 )
      return 8i64;
    if ( (_DWORD)v20 == 17 && !v17 )
      return 32i64;
    if ( gesture->priority != GESTURE_PRIORITY_MANTLE && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R13->pm_flags, ACTIVE, 5u) )
      return 256i64;
    ++v13;
    if ( ++v15 > (__int64)v14 )
      return 512i64;
  }
  if ( (unsigned int)(_R13->weapState[v13].weaponState - 9) > 1 || gesture->priority != GESTURE_PRIORITY_DEMEANOR )
    return 16i64;
  return 512i64;
}

/*
==============
BG_GesturePriority_SetEndTime
==============
*/
void BG_GesturePriority_SetEndTime(pmove_t *pm, GestureWeaponState newGamePlayState, unsigned int slot, const Gesture *gesture)
{
  __int64 v4; 
  playerState_s *ps; 
  GestureAnimationSettings *AnimationSettings; 
  int outDuration; 
  int v11; 
  char *v12; 
  int v13; 
  int serverTime; 
  int v15; 
  int v16; 
  bool *outEarlyOut; 
  int outEarlyOutDuration; 
  bool v19; 
  bool outCancelTransitions; 

  v4 = slot;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 589, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 589, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( newGamePlayState == GESTURE_WEAPON_STATE_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 591, ASSERT_TYPE_ASSERT, "(newGamePlayState != GESTURE_WEAPON_STATE_NUM)", (const char *)&queryFormat, "newGamePlayState != GESTURE_WEAPON_STATE_NUM") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(outEarlyOut) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 592, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", outEarlyOut, 2) )
      __debugbreak();
  }
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 593, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 596, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  outDuration = AnimationSettings->outDuration;
  v11 = 0;
  v12 = (char *)ps + 32 * v4;
  BG_GesturePriority_GetGameplayStateBlendOutInfo(pm->weaponMap, ps, newGamePlayState, v4, gesture, &v19, &outEarlyOutDuration, &outCancelTransitions);
  v13 = *((_DWORD *)v12 + 269);
  if ( v19 )
  {
    serverTime = pm->cmd.serverTime;
    v15 = *((_DWORD *)v12 + 269);
    if ( v13 )
      v16 = v13 - serverTime;
    else
      v16 = outDuration + *((_DWORD *)v12 + 268) - serverTime;
    if ( v16 > outEarlyOutDuration )
    {
      v11 = pm->cmd.serverTime;
      v15 = serverTime + outEarlyOutDuration;
    }
  }
  else
  {
    v15 = outDuration + *((_DWORD *)v12 + 268);
  }
  if ( v13 )
  {
    if ( v13 < v15 )
      v15 = *((_DWORD *)v12 + 269);
    *((_DWORD *)v12 + 269) = v15;
    if ( v11 )
    {
      if ( *((_DWORD *)v12 + 268) < v11 )
        v11 = *((_DWORD *)v12 + 268);
      *((_DWORD *)v12 + 268) = v11;
    }
  }
  else
  {
    *((_DWORD *)v12 + 269) = v15;
  }
}

/*
==============
BG_GesturePriority_SetupRequest
==============
*/
GesturePlayRequest *BG_GesturePriority_SetupRequest(GesturePlayRequest *result, const BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *pmHandler, unsigned int gestureIndex, const int gameTime)
{
  GesturePlayRequest *v6; 

  *(_QWORD *)&result->startTime = 0i64;
  *(_WORD *)&result->ignoreGamePlayState = 256;
  *(_QWORD *)&result->stopAllGestures = 0i64;
  *((_WORD *)&result->cancelTransitions + 3) = 0;
  result->gestureIndex = gestureIndex;
  result->gameTime = gameTime;
  v6 = result;
  result->weaponMap = weaponMap;
  result->ps = ps;
  result->pmHandler = pmHandler;
  result->targetEntNumber = 2047;
  return v6;
}

/*
==============
BG_GesturePriority_ShouldCancelRightHand
==============
*/
bool BG_GesturePriority_ShouldCancelRightHand(const BgWeaponMap *weaponMap, const playerState_s *ps, const BgHandler *pmHandler, const unsigned int slot, const Gesture *gesture, const PlayerHandIndex hand, const bool isDualWield)
{
  __int64 v12; 
  __int64 v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 706, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pmHandler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 707, ASSERT_TYPE_ASSERT, "(pmHandler)", (const char *)&queryFormat, "pmHandler") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v12) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 708, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v13) = 2;
    LODWORD(v12) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 709, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  return !BG_Gesture_IgnoresGamePlayState(ps, slot) && isDualWield && hand == WEAPON_HAND_DEFAULT && BG_GesturePriority_GetGestureInterruptingState(weaponMap, ps, pmHandler, gesture, GESTURE_HAND_CHECK_RIGHT) != GESTURE_WEAPON_STATE_NUM;
}

/*
==============
BG_GesturePriority_TryPlay
==============
*/
char BG_GesturePriority_TryPlay(const GesturePlayRequest *request, unsigned int *outSlot, GestureError *outErrorCode)
{
  char result; 

  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 541, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  if ( outErrorCode )
    *outErrorCode = GESTURE_ERROR_NONE;
  result = BG_GesturePriority_CheckPriority(request, 0);
  if ( result )
    return BG_Gesture_Play(request->weaponMap, request->ps, request->gestureIndex, request->gameTime, request->startTime, request->checkStateAkimboHands, request->stopAllGestures, request->ignoreGamePlayState, request->slotBlend, request->slotBlendDuration, request->cancelTransitions, request->targetEntNumber, outSlot, outErrorCode);
  return result;
}

/*
==============
BG_GesturePriority_Update
==============
*/
void BG_GesturePriority_Update(pmove_t *pm)
{
  playerState_s *ps; 
  GestureState *p_gestureState; 
  unsigned int i; 
  const Gesture *CurrentAsset; 
  GestureHandCheck v6; 
  GestureWeaponState GestureInterruptingState; 
  playerState_s *v8; 
  bool outCancelTransitions; 
  bool outEarlyOut; 
  int outDuration; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 655, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 655, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_gestureState = &ps->gestureState;
  for ( i = 0; i < 2; ++i )
  {
    if ( p_gestureState->gestures[0].state )
    {
      CurrentAsset = BG_Gesture_GetCurrentAsset(ps, i);
      if ( CurrentAsset )
      {
        if ( !BG_Gesture_IgnoresGamePlayState(ps, i) )
        {
          v6 = BG_Gesture_GetGestureHandCheckType(ps, i);
          GestureInterruptingState = BG_GesturePriority_GetGestureInterruptingState(pm->weaponMap, ps, pm->m_bgHandler, CurrentAsset, v6);
          if ( GestureInterruptingState == GESTURE_WEAPON_STATE_NUM )
            return;
          if ( p_gestureState->gestures[0].state == GESTURE_STATE_PLAYING )
          {
            v8 = pm->ps;
            if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 572, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            BG_GesturePriority_GetGameplayStateBlendOutInfo(pm->weaponMap, v8, GestureInterruptingState, i, CurrentAsset, &outEarlyOut, &outDuration, &outCancelTransitions);
            BG_Gesture_StopBySlot(v8, i, pm->cmd.serverTime, outEarlyOut, outDuration, outCancelTransitions);
          }
          else
          {
            if ( p_gestureState->gestures[0].state != GESTURE_STATE_STOPPING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture_priority.cpp", 696, ASSERT_TYPE_ASSERT, "(state->state == GESTURE_STATE_STOPPING)", (const char *)&queryFormat, "state->state == GESTURE_STATE_STOPPING") )
              __debugbreak();
            BG_GesturePriority_SetEndTime(pm, GestureInterruptingState, i, CurrentAsset);
          }
        }
      }
    }
    p_gestureState = (GestureState *)((char *)p_gestureState + 32);
  }
}

