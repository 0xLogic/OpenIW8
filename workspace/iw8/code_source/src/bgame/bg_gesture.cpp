/*
==============
BG_Gesture_GetWalkAnimDuration
==============
*/

int __fastcall BG_Gesture_GetWalkAnimDuration(const Gesture *gesture)
{
  return ?BG_Gesture_GetWalkAnimDuration@@YAHPEBUGesture@@@Z(gesture);
}

/*
==============
BG_Gesture_IsBlendToDemeanorLoop
==============
*/

bool __fastcall BG_Gesture_IsBlendToDemeanorLoop(const unsigned int index)
{
  return ?BG_Gesture_IsBlendToDemeanorLoop@@YA_NI@Z(index);
}

/*
==============
BG_Gesture_ShouldBlendOutToState
==============
*/

bool __fastcall BG_Gesture_ShouldBlendOutToState(const playerState_s *ps, const unsigned int slot, const GestureWeaponState weaponState)
{
  return ?BG_Gesture_ShouldBlendOutToState@@YA_NPEBUplayerState_s@@IW4GestureWeaponState@@@Z(ps, slot, weaponState);
}

/*
==============
BG_Gesture_FindSlotUsingBlendToLoop
==============
*/

unsigned int __fastcall BG_Gesture_FindSlotUsingBlendToLoop(const playerState_s *ps)
{
  return ?BG_Gesture_FindSlotUsingBlendToLoop@@YAIPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Gesture_GetAvailableSlotCount
==============
*/

unsigned int __fastcall BG_Gesture_GetAvailableSlotCount(const playerState_s *ps)
{
  return ?BG_Gesture_GetAvailableSlotCount@@YAIPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Gesture_GetNameFromIndex
==============
*/

const char *__fastcall BG_Gesture_GetNameFromIndex(unsigned int gestureIndex)
{
  return ?BG_Gesture_GetNameFromIndex@@YAPEBDI@Z(gestureIndex);
}

/*
==============
BG_Gesture_IsGestureTypePlaying
==============
*/

bool __fastcall BG_Gesture_IsGestureTypePlaying(const playerState_s *ps, GestureType gestureType)
{
  return ?BG_Gesture_IsGestureTypePlaying@@YA_NPEBUplayerState_s@@W4GestureType@@@Z(ps, gestureType);
}

/*
==============
BG_Gesture_GetAnimLengthInSeconds
==============
*/

double __fastcall BG_Gesture_GetAnimLengthInSeconds(const Gesture *gesture)
{
  double result; 

  *(float *)&result = ?BG_Gesture_GetAnimLengthInSeconds@@YAMPEBUGesture@@@Z(gesture);
  return result;
}

/*
==============
BG_Gesture_Play
==============
*/

bool __fastcall BG_Gesture_Play(const BgWeaponMap *weaponMap, playerState_s *ps, unsigned int gestureIndex, int gameTime, int startTime, bool checkStateAkimboHands, bool stopAllGestures, bool ignoreGamePlayState, bool slotBlend, int slotBlendDuration, bool cancelTransitions, int targetEntNumber, unsigned int *outSlot, GestureError *outErrorCode)
{
  return ?BG_Gesture_Play@@YA_NPEBVBgWeaponMap@@PEAUplayerState_s@@IHH_N222H2HPEAIPEAW4GestureError@@@Z(weaponMap, ps, gestureIndex, gameTime, startTime, checkStateAkimboHands, stopAllGestures, ignoreGamePlayState, slotBlend, slotBlendDuration, cancelTransitions, targetEntNumber, outSlot, outErrorCode);
}

/*
==============
BG_Gesture_SetState_Stopping
==============
*/

void __fastcall BG_Gesture_SetState_Stopping(playerState_s *ps, const unsigned int slot, int gameTime, bool cancelTransitions)
{
  ?BG_Gesture_SetState_Stopping@@YAXPEAUplayerState_s@@IH_N@Z(ps, slot, gameTime, cancelTransitions);
}

/*
==============
BG_Gesture_GetMainAnimations
==============
*/

void __fastcall BG_Gesture_GetMainAnimations(const Gesture *gesture, XAnimParts **mainAnimation, XAnimParts **inAnimation, XAnimParts **outAnimation)
{
  ?BG_Gesture_GetMainAnimations@@YAXPEBUGesture@@PEAPEAUXAnimParts@@11@Z(gesture, mainAnimation, inAnimation, outAnimation);
}

/*
==============
PM_Gesture_SendNotiftyEvent
==============
*/

void __fastcall PM_Gesture_SendNotiftyEvent(pmove_t *pm, playerState_s *ps, const unsigned int slot)
{
  ?PM_Gesture_SendNotiftyEvent@@YAXPEAVpmove_t@@PEAUplayerState_s@@I@Z(pm, ps, slot);
}

/*
==============
BG_Gesture_StopAll
==============
*/

void __fastcall BG_Gesture_StopAll(playerState_s *ps, int gameTime, bool earlyOut, int outDuration, bool cancelTransitions)
{
  ?BG_Gesture_StopAll@@YAXPEAUplayerState_s@@H_NH1@Z(ps, gameTime, earlyOut, outDuration, cancelTransitions);
}

/*
==============
BG_Gesture_GetBlendFromNotetrack
==============
*/

void __fastcall BG_Gesture_GetBlendFromNotetrack(const Gesture *gesture, XAnimParts *mainAnimation, scr_string_t notetrack, const float defaultBlend, float *outBlend)
{
  ?BG_Gesture_GetBlendFromNotetrack@@YAXPEBUGesture@@PEAUXAnimParts@@W4scr_string_t@@MPEAM@Z(gesture, mainAnimation, notetrack, defaultBlend, outBlend);
}

/*
==============
BG_Gesture_GetCurrentAsset
==============
*/

const Gesture *__fastcall BG_Gesture_GetCurrentAsset(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_GetCurrentAsset@@YAPEBUGesture@@PEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
PM_Gesture_ShouldStartSprint
==============
*/

bool __fastcall PM_Gesture_ShouldStartSprint(pmove_t *pm)
{
  return ?PM_Gesture_ShouldStartSprint@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_Gesture_SetState_Off
==============
*/

void __fastcall PM_Gesture_SetState_Off(playerState_s *ps, const unsigned int slot, bool blendOut, int gameTime)
{
  ?PM_Gesture_SetState_Off@@YAXPEAUplayerState_s@@I_NH@Z(ps, slot, blendOut, gameTime);
}

/*
==============
BG_Gesture_GetRemainingTime
==============
*/

int __fastcall BG_Gesture_GetRemainingTime(const playerState_s *ps, const unsigned int slot, const int gameTime)
{
  return ?BG_Gesture_GetRemainingTime@@YAHPEBUplayerState_s@@IH@Z(ps, slot, gameTime);
}

/*
==============
BG_Gesture_GetBlendToDemeanorLoop
==============
*/

bool __fastcall BG_Gesture_GetBlendToDemeanorLoop(const playerState_s *ps)
{
  return ?BG_Gesture_GetBlendToDemeanorLoop@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Gesture_SetAnimationSettings
==============
*/

void __fastcall BG_Gesture_SetAnimationSettings(const Gesture *gesture)
{
  ?BG_Gesture_SetAnimationSettings@@YAXPEBUGesture@@@Z(gesture);
}

/*
==============
BG_Gesture_GetIndexFromGesture
==============
*/

unsigned int __fastcall BG_Gesture_GetIndexFromGesture(const Gesture *gesture)
{
  return ?BG_Gesture_GetIndexFromGesture@@YAIPEBUGesture@@@Z(gesture);
}

/*
==============
BG_Gesture_GetWalkAnimGroupBySlot
==============
*/

weapAnimFiles_t __fastcall BG_Gesture_GetWalkAnimGroupBySlot(const unsigned int slot)
{
  return ?BG_Gesture_GetWalkAnimGroupBySlot@@YA?AW4weapAnimFiles_t@@I@Z(slot);
}

/*
==============
BG_Gesture_CalculateCrossfadeOutStart
==============
*/

double __fastcall BG_Gesture_CalculateCrossfadeOutStart(float time, float endTime)
{
  double result; 

  *(float *)&result = ?BG_Gesture_CalculateCrossfadeOutStart@@YAMMM@Z(time, endTime);
  return result;
}

/*
==============
BG_Gesture_GetGestureHandCheckType
==============
*/

GestureHandCheck __fastcall BG_Gesture_GetGestureHandCheckType(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_GetGestureHandCheckType@@YA?AW4GestureHandCheck@@PEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
BG_Gesture_SetState_Playing
==============
*/

void __fastcall BG_Gesture_SetState_Playing(playerState_s *ps, const unsigned int slot, const unsigned int gestureIndex, int gameTime, int jumpTime, bool forcePlay, bool checkStateBothHandsAkimbo, bool slotBlend, int slotBlendDuration, int targetEntNumber)
{
  ?BG_Gesture_SetState_Playing@@YAXPEAUplayerState_s@@IIHH_N11HH@Z(ps, slot, gestureIndex, gameTime, jumpTime, forcePlay, checkStateBothHandsAkimbo, slotBlend, slotBlendDuration, targetEntNumber);
}

/*
==============
BG_Gesture_IsJumpTimeBlendActive
==============
*/

bool __fastcall BG_Gesture_IsJumpTimeBlendActive(const playerState_s *ps, const unsigned int slot, const int gameTime)
{
  return ?BG_Gesture_IsJumpTimeBlendActive@@YA_NPEBUplayerState_s@@IH@Z(ps, slot, gameTime);
}

/*
==============
BG_Gesture_IsPlayingBySlot
==============
*/

bool __fastcall BG_Gesture_IsPlayingBySlot(const playerState_s *ps, const unsigned int slot, unsigned int *outGestureIndex)
{
  return ?BG_Gesture_IsPlayingBySlot@@YA_NPEBUplayerState_s@@IPEAI@Z(ps, slot, outGestureIndex);
}

/*
==============
BG_Gesture_GetBlendingOutCount
==============
*/

unsigned int __fastcall BG_Gesture_GetBlendingOutCount(const playerState_s *ps, int gameTime, int minDuration)
{
  return ?BG_Gesture_GetBlendingOutCount@@YAIPEBUplayerState_s@@HH@Z(ps, gameTime, minDuration);
}

/*
==============
BG_Gesture_GetIndexBySlot
==============
*/

unsigned int __fastcall BG_Gesture_GetIndexBySlot(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_GetIndexBySlot@@YAIPEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
BG_Gesture_IsPlaying
==============
*/

bool __fastcall BG_Gesture_IsPlaying(const playerState_s *ps, const int gameTime, const bool ignoreBlendingOut)
{
  return ?BG_Gesture_IsPlaying@@YA_NPEBUplayerState_s@@H_N@Z(ps, gameTime, ignoreBlendingOut);
}

/*
==============
BG_Gesture_IsPlayingByIndex
==============
*/

bool __fastcall BG_Gesture_IsPlayingByIndex(const playerState_s *ps, const unsigned int gestureIndex, unsigned int *outSlot)
{
  return ?BG_Gesture_IsPlayingByIndex@@YA_NPEBUplayerState_s@@IPEAI@Z(ps, gestureIndex, outSlot);
}

/*
==============
BG_Gesture_GetWalkAnimOverride
==============
*/

bool __fastcall BG_Gesture_GetWalkAnimOverride(const playerState_s *ps, weapAnimFiles_t *outWalkAnimGroup, const Gesture **outGesture)
{
  return ?BG_Gesture_GetWalkAnimOverride@@YA_NPEBUplayerState_s@@PEAW4weapAnimFiles_t@@PEAPEBUGesture@@@Z(ps, outWalkAnimGroup, outGesture);
}

/*
==============
BG_Gesture_GetTargetEntity
==============
*/

int __fastcall BG_Gesture_GetTargetEntity(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_GetTargetEntity@@YAHPEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
BG_Gesture_ClearGestures
==============
*/

void BG_Gesture_ClearGestures(void)
{
  ?BG_Gesture_ClearGestures@@YAXXZ();
}

/*
==============
BG_Gesture_ShouldHideReticle
==============
*/

bool __fastcall BG_Gesture_ShouldHideReticle(const playerState_s *ps)
{
  return ?BG_Gesture_ShouldHideReticle@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Gesture_IsCancelTransitions
==============
*/

bool __fastcall BG_Gesture_IsCancelTransitions(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_IsCancelTransitions@@YA_NPEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
BG_Gesture_GetSectionStartTime
==============
*/

int __fastcall BG_Gesture_GetSectionStartTime(const unsigned int gestureIndex, const GestureSectionType section)
{
  return ?BG_Gesture_GetSectionStartTime@@YAHIW4GestureSectionType@@@Z(gestureIndex, section);
}

/*
==============
BG_Gesture_GetState
==============
*/

GestureStateType __fastcall BG_Gesture_GetState(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_GetState@@YA?AW4GestureStateType@@PEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
BG_Gesture_GetAssetFromIndex
==============
*/

const Gesture *__fastcall BG_Gesture_GetAssetFromIndex(unsigned int gestureIndex)
{
  return ?BG_Gesture_GetAssetFromIndex@@YAPEBUGesture@@I@Z(gestureIndex);
}

/*
==============
BG_Gesture_CalcRestartTimeOutToIn
==============
*/

int __fastcall BG_Gesture_CalcRestartTimeOutToIn(const playerState_s *ps, const unsigned int gestureIndex, const int gameTime)
{
  return ?BG_Gesture_CalcRestartTimeOutToIn@@YAHPEBUplayerState_s@@IH@Z(ps, gestureIndex, gameTime);
}

/*
==============
PM_Gesture_ProcessState
==============
*/

void __fastcall PM_Gesture_ProcessState(pmove_t *pm)
{
  ?PM_Gesture_ProcessState@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_Gesture_GetAvailableSlot
==============
*/

bool __fastcall BG_Gesture_GetAvailableSlot(const playerState_s *ps, unsigned int *outSlot)
{
  return ?BG_Gesture_GetAvailableSlot@@YA_NPEBUplayerState_s@@PEAI@Z(ps, outSlot);
}

/*
==============
BG_Gesture_SetEndTime
==============
*/

void __fastcall BG_Gesture_SetEndTime(playerState_s *ps, const unsigned int slot, const int outDuration)
{
  ?BG_Gesture_SetEndTime@@YAXPEAUplayerState_s@@IH@Z(ps, slot, outDuration);
}

/*
==============
BG_Gesture_InitGestures
==============
*/

void __fastcall BG_Gesture_InitGestures(bool isFullInit)
{
  ?BG_Gesture_InitGestures@@YAX_N@Z(isFullInit);
}

/*
==============
BG_Gesture_GetJumpTimeNormalized
==============
*/

double __fastcall BG_Gesture_GetJumpTimeNormalized(const playerState_s *ps, const Gesture *gesture, const unsigned int slot)
{
  double result; 

  *(float *)&result = ?BG_Gesture_GetJumpTimeNormalized@@YAMPEBUplayerState_s@@PEBUGesture@@I@Z(ps, gesture, slot);
  return result;
}

/*
==============
BG_Gesture_GetNotetrackTimes
==============
*/

void __fastcall BG_Gesture_GetNotetrackTimes(const Gesture *gesture, scr_string_t notetrack, int maxNotetracks, float *outTimes, int *outNumNotetracks)
{
  ?BG_Gesture_GetNotetrackTimes@@YAXPEBUGesture@@W4scr_string_t@@HPEAMPEAH@Z(gesture, notetrack, maxNotetracks, outTimes, outNumNotetracks);
}

/*
==============
BG_Gesture_GetErrorDescription
==============
*/

const char *__fastcall BG_Gesture_GetErrorDescription(const GestureError errorCode)
{
  return ?BG_Gesture_GetErrorDescription@@YAPEBDW4GestureError@@@Z(errorCode);
}

/*
==============
BG_Gesture_StopByIndex
==============
*/

bool __fastcall BG_Gesture_StopByIndex(playerState_s *ps, const unsigned int index, int gameTime, bool earlyOut, int outDuration, bool cancelTransitions)
{
  return ?BG_Gesture_StopByIndex@@YA_NPEAUplayerState_s@@IH_NH1@Z(ps, index, gameTime, earlyOut, outDuration, cancelTransitions);
}

/*
==============
BG_Gesture_GetFireDelayTime
==============
*/

int __fastcall BG_Gesture_GetFireDelayTime(const playerState_s *ps, const PlayerHandIndex hand, const bool isDualWield, const int fireDelay, const int gameTime)
{
  return ?BG_Gesture_GetFireDelayTime@@YAHPEBUplayerState_s@@W4PlayerHandIndex@@_NHH@Z(ps, hand, isDualWield, fireDelay, gameTime);
}

/*
==============
BG_Gesture_GetAssetNameFromSlot
==============
*/

const char *__fastcall BG_Gesture_GetAssetNameFromSlot(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_GetAssetNameFromSlot@@YAPEBDPEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
BG_Gesture_GetElapsedTime
==============
*/

double __fastcall BG_Gesture_GetElapsedTime(const playerState_s *ps, const unsigned int slot, const int gameTime)
{
  double result; 

  *(float *)&result = ?BG_Gesture_GetElapsedTime@@YAMPEBUplayerState_s@@IH@Z(ps, slot, gameTime);
  return result;
}

/*
==============
BG_Gesture_IsStoppingByIndex
==============
*/

bool __fastcall BG_Gesture_IsStoppingByIndex(const playerState_s *ps, const unsigned int gestureIndex)
{
  return ?BG_Gesture_IsStoppingByIndex@@YA_NPEBUplayerState_s@@I@Z(ps, gestureIndex);
}

/*
==============
BG_Gesture_GetAnimationSettings
==============
*/

GestureAnimationSettings *__fastcall BG_Gesture_GetAnimationSettings(const Gesture *gesture)
{
  return ?BG_Gesture_GetAnimationSettings@@YAPEAUGestureAnimationSettings@@PEBUGesture@@@Z(gesture);
}

/*
==============
BG_Gesture_GetNotetrackTime
==============
*/

bool __fastcall BG_Gesture_GetNotetrackTime(const Gesture *const gesture, const XAnimParts *const mainAnimation, scr_string_t notetrack, float *outTime)
{
  return ?BG_Gesture_GetNotetrackTime@@YA_NQEBUGesture@@QEBUXAnimParts@@W4scr_string_t@@PEAM@Z(gesture, mainAnimation, notetrack, outTime);
}

/*
==============
BG_Gesture_IgnoresGamePlayState
==============
*/

bool __fastcall BG_Gesture_IgnoresGamePlayState(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_IgnoresGamePlayState@@YA_NPEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
BG_Gesture_GetIndexFromName
==============
*/

unsigned int __fastcall BG_Gesture_GetIndexFromName(const char *gestureName)
{
  return ?BG_Gesture_GetIndexFromName@@YAIPEBD@Z(gestureName);
}

/*
==============
BG_Gesture_GetWalkFootstepInfo
==============
*/

const FootstepAnim *__fastcall BG_Gesture_GetWalkFootstepInfo(const Gesture *gesture)
{
  return ?BG_Gesture_GetWalkFootstepInfo@@YAPEBUFootstepAnim@@PEBUGesture@@@Z(gesture);
}

/*
==============
BG_Gesture_StopBySlot
==============
*/

bool __fastcall BG_Gesture_StopBySlot(playerState_s *ps, const unsigned int slot, int gameTime, bool earlyOut, int outDuration, bool cancelTransitions)
{
  return ?BG_Gesture_StopBySlot@@YA_NPEAUplayerState_s@@IH_NH1@Z(ps, slot, gameTime, earlyOut, outDuration, cancelTransitions);
}

/*
==============
BG_Gesture_GetStartTime
==============
*/

int __fastcall BG_Gesture_GetStartTime(const playerState_s *ps, const unsigned int slot)
{
  return ?BG_Gesture_GetStartTime@@YAHPEBUplayerState_s@@I@Z(ps, slot);
}

/*
==============
BG_Gesture_UpdateSlotBlend
==============
*/

void __fastcall BG_Gesture_UpdateSlotBlend(playerState_s *ps, int gameTime)
{
  ?BG_Gesture_UpdateSlotBlend@@YAXPEAUplayerState_s@@H@Z(ps, gameTime);
}

/*
==============
BG_Gesture_IsReadyToBlendOut
==============
*/

bool __fastcall BG_Gesture_IsReadyToBlendOut(const playerState_s *ps, const unsigned int slot, int gameTime, int minDuration)
{
  return ?BG_Gesture_IsReadyToBlendOut@@YA_NPEBUplayerState_s@@IHH@Z(ps, slot, gameTime, minDuration);
}

/*
==============
BG_Gesture_CalcRestartTimeOutToIn
==============
*/

__int64 __fastcall BG_Gesture_CalcRestartTimeOutToIn(const playerState_s *ps, const unsigned int gestureIndex, const int gameTime, double _XMM3_8)
{
  unsigned int v16; 
  int *p_stopTime; 
  const Gesture *CurrentAsset; 
  __int64 result; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _ER12 = 0;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _ER14 = 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 650, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@42c80000
    vmovss  xmm9, cs:__real@3dcccccd
    vmovss  xmm6, cs:__real@3f800000
  }
  v16 = 0;
  p_stopTime = &ps->gestureState.gestures[0].stopTime;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  do
  {
    if ( BG_Gesture_GetIndexBySlot(ps, v16) == gestureIndex && BG_Gesture_GetState(ps, v16) == GESTURE_STATE_STOPPING )
    {
      CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v16);
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vmovd   xmm1, r12d
        vcvtsi2ss xmm3, xmm3, ecx
      }
      _ECX = BG_Gesture_GetAnimationSettings(CurrentAsset)->hasTransitions;
      __asm
      {
        vmovd   xmm0, ecx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm7, xmm2
        vaddss  xmm2, xmm3, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rax+8]
        vdivss  xmm2, xmm2, xmm1
        vmaxss  xmm0, xmm2, xmm9
        vminss  xmm3, xmm0, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+4]
        vsubss  xmm1, xmm6, xmm3
        vmulss  xmm1, xmm1, xmm0
        vcvttss2si r14d, xmm1
      }
    }
    ++v16;
    p_stopTime += 8;
  }
  while ( v16 < 2 );
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  _R11 = &v44;
  result = _ER14;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  return result;
}

/*
==============
BG_Gesture_CalculateCrossfadeOutStart
==============
*/

float __fastcall BG_Gesture_CalculateCrossfadeOutStart(double time, double endTime)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm6, xmm1
    vmovaps xmm8, xmm0
    vdivss  xmm0, xmm8, xmm6; val
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vsubss  xmm2, xmm6, xmm0
    vaddss  xmm1, xmm2, cs:__real@3dcccccd
    vcmpltss xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Gesture_CheckXAnimReference
==============
*/
char BG_Gesture_CheckXAnimReference(const Gesture *gesture, const XAnimParts *anim, int length)
{
  const char *name; 
  const char *v6; 
  __int64 v7; 
  signed __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 

  if ( anim && !length )
  {
    name = gesture->name;
    v6 = "void";
    v7 = 0x7FFFFFFFi64;
    if ( !gesture->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v8 = name - "void";
    do
    {
      v9 = v6[v8];
      v10 = v7;
      v11 = *v6++;
      --v7;
      if ( !v10 )
        break;
      if ( v9 != v11 )
      {
        Com_PrintWarning(19, "WARNING: XAnim '%s' referenced by gesture '%s' is not loaded. Gesture anim setting initialization failed. Make sure xanims are not directly referenced in a different fast file that is not loaded yet.\n", anim->name, gesture->name);
        return 0;
      }
    }
    while ( v9 );
  }
  return 1;
}

/*
==============
BG_Gesture_ClearGestures
==============
*/
void BG_Gesture_ClearGestures(void)
{
  s_bgGesturesInitialized = 0;
  memset_0(s_bgGesturesDefs, 0, sizeof(s_bgGesturesDefs));
}

/*
==============
BG_Gesture_FindSlotUsingBlendToLoop
==============
*/
__int64 BG_Gesture_FindSlotUsingBlendToLoop(const playerState_s *ps)
{
  unsigned int v2; 
  GestureState *i; 
  unsigned int IndexBySlot; 
  const Gesture *AssetFromIndex; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 962, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = 0;
  for ( i = &ps->gestureState; ; i = (GestureState *)((char *)i + 32) )
  {
    if ( i->gestures[0].state )
    {
      IndexBySlot = BG_Gesture_GetIndexBySlot(ps, v2);
      AssetFromIndex = BG_Gesture_GetAssetFromIndex(IndexBySlot);
      if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 970, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
        __debugbreak();
      if ( AssetFromIndex->weaponSettings.blendToDemeanorLoop )
        break;
    }
    if ( ++v2 >= 2 )
      return 2i64;
  }
  return v2;
}

/*
==============
BG_Gesture_GetAnimLengthInSeconds
==============
*/
float BG_Gesture_GetAnimLengthInSeconds(const Gesture *gesture)
{
  if ( gesture )
  {
    if ( !BG_Gesture_GetAnimationSettings(gesture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 836, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
      vmulss  xmm0, xmm0, cs:__real@3a83126f
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Gesture_GetAnimationSettings
==============
*/
GestureAnimationSettings *BG_Gesture_GetAnimationSettings(const Gesture *gesture)
{
  unsigned int IndexFromGesture; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 229, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesture);
  if ( IndexFromGesture == 256 )
    return 0i64;
  else
    return &s_bgGesturesDefs[IndexFromGesture].animSettings;
}

/*
==============
BG_Gesture_GetAssetFromIndex
==============
*/
const Gesture *BG_Gesture_GetAssetFromIndex(unsigned int gestureIndex)
{
  __int64 v1; 
  bool v2; 
  GestureDef *v3; 
  int v6; 

  v1 = gestureIndex;
  if ( gestureIndex >= 0x100 )
  {
    v6 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 463, ASSERT_TYPE_ASSERT, "(unsigned)( gestureIndex ) < (unsigned)( (1<<8) )", "gestureIndex doesn't index MAX_GESTURE_DEFS\n\t%i not in [0, %i)", gestureIndex, v6) )
      __debugbreak();
  }
  if ( !s_bgGesturesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 464, ASSERT_TYPE_ASSERT, "(s_bgGesturesInitialized)", (const char *)&queryFormat, "s_bgGesturesInitialized") )
    __debugbreak();
  v2 = s_bgGesturesDefs[v1].asset == NULL;
  v3 = &s_bgGesturesDefs[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 465, ASSERT_TYPE_ASSERT, "(s_bgGesturesDefs[gestureIndex].asset)", (const char *)&queryFormat, "s_bgGesturesDefs[gestureIndex].asset") )
    __debugbreak();
  return v3->asset;
}

/*
==============
BG_Gesture_GetAssetNameFromSlot
==============
*/
char *BG_Gesture_GetAssetNameFromSlot(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  unsigned int index; 
  bool NameFromIndex; 
  __int64 v6; 
  __int64 v8; 
  char *outName; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 624, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 625, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  index = ps->gestureState.gestures[v2].index;
  if ( index == 256 )
    return 0i64;
  NameFromIndex = NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_GESTURE, index, (const char **)&outName);
  v6 = 0i64;
  if ( NameFromIndex )
    return outName;
  return (char *)v6;
}

/*
==============
BG_Gesture_GetAvailableSlot
==============
*/
char BG_Gesture_GetAvailableSlot(const playerState_s *ps, unsigned int *outSlot)
{
  GestureState *p_gestureState; 
  unsigned int v5; 

  if ( !outSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1390, ASSERT_TYPE_ASSERT, "(outSlot)", (const char *)&queryFormat, "outSlot") )
    __debugbreak();
  *outSlot = 2;
  p_gestureState = &ps->gestureState;
  v5 = 0;
  while ( 1 )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 847, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( p_gestureState->gestures[0].state == GESTURE_STATE_OFF )
      break;
    ++v5;
    p_gestureState = (GestureState *)((char *)p_gestureState + 32);
    if ( v5 >= 2 )
      return 0;
  }
  *outSlot = v5;
  return 1;
}

/*
==============
BG_Gesture_GetAvailableSlotCount
==============
*/
__int64 BG_Gesture_GetAvailableSlotCount(const playerState_s *ps)
{
  __int64 result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 985, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = (unsigned int)(ps->gestureState.gestures[0].state == GESTURE_STATE_OFF) + 1;
  if ( ps->gestureState.gestures[1].state )
    return ps->gestureState.gestures[0].state == GESTURE_STATE_OFF;
  return result;
}

/*
==============
BG_Gesture_GetBlendFromNotetrack
==============
*/

void __fastcall BG_Gesture_GetBlendFromNotetrack(const Gesture *gesture, XAnimParts *mainAnimation, scr_string_t notetrack, double defaultBlend, float *outBlend)
{
  XAnimNotifyInfo *notify; 
  int v11; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 77, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !mainAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 78, ASSERT_TYPE_ASSERT, "(mainAnimation)", (const char *)&queryFormat, "mainAnimation") )
    __debugbreak();
  _R8 = outBlend;
  __asm { vmovss  dword ptr [r8], xmm6 }
  notify = mainAnimation->notify;
  if ( notify )
  {
    v11 = 0;
    if ( mainAnimation->notifyCount )
    {
      while ( notify->name != notetrack )
      {
        ++v11;
        ++notify;
        if ( v11 >= mainAnimation->notifyCount )
          goto LABEL_13;
      }
      *outBlend = notify->time;
    }
  }
LABEL_13:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
BG_Gesture_GetBlendToDemeanorLoop
==============
*/
__int64 BG_Gesture_GetBlendToDemeanorLoop(const playerState_s *ps)
{
  unsigned __int8 v1; 
  unsigned int v3; 
  GestureState *p_gestureState; 
  unsigned int IndexBySlot; 
  const Gesture *AssetFromIndex; 

  v1 = 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 945, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = 0;
  p_gestureState = &ps->gestureState;
  do
  {
    if ( p_gestureState->gestures[0].state )
    {
      IndexBySlot = BG_Gesture_GetIndexBySlot(ps, v3);
      AssetFromIndex = BG_Gesture_GetAssetFromIndex(IndexBySlot);
      if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 935, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
        __debugbreak();
      v1 |= AssetFromIndex->weaponSettings.blendToDemeanorLoop;
    }
    ++v3;
    p_gestureState = (GestureState *)((char *)p_gestureState + 32);
  }
  while ( v3 < 2 );
  return v1;
}

/*
==============
BG_Gesture_GetBlendingOutCount
==============
*/
__int64 BG_Gesture_GetBlendingOutCount(const playerState_s *ps, int gameTime, int minDuration)
{
  GestureState *p_gestureState; 
  unsigned int v15; 
  bool v16; 
  const Gesture *AssetFromIndex; 
  unsigned int IndexFromGesture; 
  GestureAnimationSettings *p_animSettings; 
  bool ShouldEnableBlendToLoop; 
  bool v21; 
  GestureStateType state; 
  const Gesture *CurrentAsset; 
  GestureAnimationSettings *AnimationSettings; 
  int endTime; 
  int v26; 
  char v36; 
  char v37; 
  unsigned int v38; 
  __int64 result; 
  unsigned int v50; 

  __asm
  {
    vmovaps [rsp+0C8h+var_68], xmm8
    vmovaps [rsp+0C8h+var_78], xmm9
    vmovaps [rsp+0C8h+var_88], xmm10
  }
  v50 = 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 919, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm10, cs:__real@447a0000
    vmovss  xmm8, cs:__real@3a83126f
    vmovss  xmm9, cs:__real@3d4ccccd
    vmovaps [rsp+0C8h+var_48], xmm6
  }
  p_gestureState = &ps->gestureState;
  __asm { vmovaps [rsp+0C8h+var_58], xmm7 }
  v15 = 0;
  do
  {
    v16 = 0;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 857, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(p_gestureState->gestures[0].index);
    if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 229, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
      __debugbreak();
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(AssetFromIndex);
    if ( IndexFromGesture == 256 )
    {
      p_animSettings = NULL;
    }
    else
    {
      p_animSettings = &s_bgGesturesDefs[IndexFromGesture].animSettings;
      if ( p_animSettings )
        goto LABEL_16;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 863, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
LABEL_16:
    if ( p_gestureState->gestures[0].state == GESTURE_STATE_OFF )
      goto LABEL_48;
    ShouldEnableBlendToLoop = BG_Demeanor_ShouldEnableBlendToLoop(ps, p_gestureState->gestures[0].index);
    v21 = ShouldEnableBlendToLoop;
    if ( p_animSettings->hasTransitions )
    {
      state = p_gestureState->gestures[0].state;
      if ( !ShouldEnableBlendToLoop )
      {
        v16 = state == GESTURE_STATE_STOPPING;
        goto LABEL_48;
      }
      if ( state != GESTURE_STATE_STOPPING )
        goto LABEL_48;
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1213, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( gameTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1214, ASSERT_TYPE_ASSERT, "(gameTime > 0)", (const char *)&queryFormat, "gameTime > 0") )
        __debugbreak();
      if ( p_gestureState->gestures[0].state == GESTURE_STATE_OFF )
        goto LABEL_39;
      CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v15);
      if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1222, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
        __debugbreak();
      AnimationSettings = BG_Gesture_GetAnimationSettings(CurrentAsset);
      if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1225, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
        __debugbreak();
      endTime = p_gestureState->gestures[0].endTime;
      if ( endTime && endTime > p_gestureState->gestures[0].startTime )
      {
        v26 = endTime - gameTime;
        goto LABEL_40;
      }
      if ( AnimationSettings->hasTransitions && CurrentAsset->looping )
      {
LABEL_39:
        v26 = -1;
      }
      else
      {
        *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v15, gameTime);
        __asm
        {
          vmulss  xmm1, xmm0, xmm10
          vcvttss2si eax, xmm1
        }
        v26 = AnimationSettings->animationLength - _EAX;
      }
LABEL_40:
      if ( v26 <= p_animSettings->animationLength - p_animSettings->blendOutStartTime + 50 )
        v16 = 1;
      goto LABEL_48;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+20h]
      vmulss  xmm6, xmm0, xmm8
    }
    *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v15, gameTime);
    __asm { vmovaps xmm7, xmm0 }
    if ( v21 )
      __asm { vsubss  xmm6, xmm6, xmm9 }
    *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(AssetFromIndex);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edi
      vmulss  xmm2, xmm1, xmm8
      vsubss  xmm0, xmm0, xmm2
      vminss  xmm3, xmm0, xmm6
      vcomiss xmm7, xmm3
    }
    if ( !(v36 | v37) || p_gestureState->gestures[0].state == GESTURE_STATE_STOPPING )
      v16 = 1;
LABEL_48:
    v38 = v50 + 1;
    if ( !v16 )
      v38 = v50;
    ++v15;
    p_gestureState = (GestureState *)((char *)p_gestureState + 32);
    v50 = v38;
    result = v38;
  }
  while ( v15 < 2 );
  __asm
  {
    vmovaps xmm7, [rsp+0C8h+var_58]
    vmovaps xmm6, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_68]
    vmovaps xmm9, [rsp+0C8h+var_78]
    vmovaps xmm10, [rsp+0C8h+var_88]
  }
  return result;
}

/*
==============
BG_Gesture_GetCurrentAsset
==============
*/
const Gesture *BG_Gesture_GetCurrentAsset(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  __int64 v5; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 615, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 616, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return BG_Gesture_GetAssetFromIndex(ps->gestureState.gestures[v2].index);
}

/*
==============
BG_Gesture_GetElapsedTime
==============
*/
float BG_Gesture_GetElapsedTime(const playerState_s *ps, const unsigned int slot, const int gameTime)
{
  __int64 v8; 
  const Gesture *CurrentAsset; 
  __int64 v18; 

  v8 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1099, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v8 >= 2 )
  {
    LODWORD(v18) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1100, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v18, 2) )
      __debugbreak();
  }
  if ( (const playerState_s *)((char *)ps + 32 * v8) == (const playerState_s *)-1052i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1104, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v8);
  if ( CurrentAsset )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    if ( gameTime > ps->gestureState.gestures[v8].startTime )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm6, xmm0, cs:__real@3a83126f
      }
    }
    if ( !CurrentAsset->looping )
    {
      *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(CurrentAsset);
      __asm
      {
        vmovaps xmm2, xmm0; max
        vmovaps xmm0, xmm6; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Gesture_GetErrorDescription
==============
*/
const char *BG_Gesture_GetErrorDescription(const GestureError errorCode)
{
  __int64 v1; 
  int v4; 

  v1 = errorCode;
  if ( (unsigned int)errorCode >= GESTURE_ERROR_NUM )
  {
    v4 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1742, ASSERT_TYPE_ASSERT, "(unsigned)( errorCode ) < (unsigned)( GESTURE_ERROR_NUM )", "errorCode doesn't index GESTURE_ERROR_NUM\n\t%i not in [0, %i)", errorCode, v4) )
      __debugbreak();
  }
  return s_gestureErrorDescriptions[v1];
}

/*
==============
BG_Gesture_GetFireDelayTime
==============
*/
__int64 BG_Gesture_GetFireDelayTime(const playerState_s *ps, const PlayerHandIndex hand, const bool isDualWield, const int fireDelay, const int gameTime)
{
  unsigned int v10; 
  unsigned int i; 
  bool v12; 
  GesturePriority priority; 

  v10 = fireDelay;
  if ( ps )
  {
    for ( i = 0; i < 2; ++i )
    {
      v12 = hand == WEAPON_HAND_DEFAULT && isDualWield;
      if ( !BG_Gesture_IgnoresGamePlayState(ps, i) && BG_Gesture_GetState(ps, i) == GESTURE_STATE_PLAYING && BG_Gesture_ShouldBlendOutToState(ps, i, GESTURE_WEAPON_STATE_FIRE) && !v12 )
      {
        priority = BG_Gesture_GetCurrentAsset(ps, i)->priority;
        if ( priority == GESTURE_PRIORITY_SCRIPT || priority == GESTURE_PRIORITY_DEMEANOR )
        {
          BG_Gesture_GetWeaponStateDelayTime(ps, i, gameTime);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm0, xmm0, dword ptr [rsi+24h]
            vcvttss2si ecx, xmm0
          }
          v10 = fireDelay;
          if ( _ECX > fireDelay )
            v10 = _ECX;
        }
      }
    }
  }
  return v10;
}

/*
==============
BG_Gesture_GetGestureHandCheckType
==============
*/
__int64 BG_Gesture_GetGestureHandCheckType(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  __int64 v5; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 715, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return (unsigned int)((ps->gestureState.gestures[v2].flags & 2) != 0) + 1;
}

/*
==============
BG_Gesture_GetIndexBySlot
==============
*/
__int64 BG_Gesture_GetIndexBySlot(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  __int64 v5; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 640, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 641, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return ps->gestureState.gestures[v2].index;
}

/*
==============
BG_Gesture_GetIndexFromGesture
==============
*/
__int64 BG_Gesture_GetIndexFromGesture(const Gesture *gesture)
{
  unsigned int v2; 
  GestureDef *v3; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 501, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  v2 = 0;
  v3 = s_bgGesturesDefs;
  while ( v3->asset != gesture )
  {
    ++v2;
    if ( (__int64)++v3 >= (__int64)&unk_148A8DEA0 )
      return 256i64;
  }
  return v2;
}

/*
==============
BG_Gesture_GetIndexFromName
==============
*/
__int64 BG_Gesture_GetIndexFromName(const char *gestureName)
{
  bool IndexFromName; 
  unsigned int v3; 
  unsigned int outIndex; 

  if ( !gestureName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 488, ASSERT_TYPE_ASSERT, "(gestureName)", (const char *)&queryFormat, "gestureName") )
    __debugbreak();
  IndexFromName = NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_GESTURE, gestureName, &outIndex);
  v3 = 256;
  if ( IndexFromName )
    return outIndex;
  return v3;
}

/*
==============
BG_Gesture_GetJumpTimeNormalized
==============
*/
double BG_Gesture_GetJumpTimeNormalized(const playerState_s *ps, const Gesture *gesture, const unsigned int slot)
{
  __int64 v9; 
  GestureAnimationSettings *AnimationSettings; 
  bool v15; 
  __int64 v35; 
  char v39; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
  v9 = slot;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(v35) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 519, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v35, 2) )
      __debugbreak();
  }
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 520, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 523, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, dword ptr [rax+rsi+42Ch]
    vcomiss xmm6, xmm8
  }
  v15 = !__CFSHL__(v9, 5) && 32 * v9 != 0;
  if ( !v15 || !AnimationSettings->hasTransitions )
  {
    if ( !AnimationSettings->animationLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 559, ASSERT_TYPE_ASSERT, "(animSettings->animationLength)", (const char *)&queryFormat, "animSettings->animationLength") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
    }
    goto LABEL_25;
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+20h]
    vcomiss xmm6, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
    vcomiss xmm6, xmm0
  }
  if ( !v15 || !AnimationSettings->hasTransitions )
  {
    if ( AnimationSettings->outDuration )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vsubss  xmm1, xmm6, xmm1
        vdivss  xmm7, xmm1, xmm0
      }
    }
    goto LABEL_26;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+1Ch]
    vcomiss xmm6, xmm0
  }
  if ( !v15 || !AnimationSettings->hasTransitions )
    goto LABEL_29;
  __asm
  {
    vcomiss xmm6, xmm1
    vcomiss xmm6, xmm0
  }
  if ( !v15 || !AnimationSettings->hasTransitions )
  {
LABEL_29:
    if ( AnimationSettings->inDuration )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
      }
LABEL_25:
      __asm { vdivss  xmm7, xmm6, xmm0 }
    }
  }
LABEL_26:
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm7; val
    vmovaps xmm6, [rsp+78h+var_18]
  }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
BG_Gesture_GetMainAnimations
==============
*/
void BG_Gesture_GetMainAnimations(const Gesture *gesture, XAnimParts **mainAnimation, XAnimParts **inAnimation, XAnimParts **outAnimation)
{
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 49, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  *mainAnimation = *gesture->anims;
  *inAnimation = (XAnimParts *)*((_QWORD *)gesture->anims + 10);
  *outAnimation = (XAnimParts *)*((_QWORD *)gesture->anims + 11);
  if ( !*mainAnimation )
    *mainAnimation = (XAnimParts *)*((_QWORD *)gesture->anims + 5);
  if ( !*inAnimation )
    *inAnimation = (XAnimParts *)*((_QWORD *)gesture->anims + 12);
  if ( !*outAnimation )
    *outAnimation = (XAnimParts *)*((_QWORD *)gesture->anims + 13);
}

/*
==============
BG_Gesture_GetNameFromIndex
==============
*/
char *BG_Gesture_GetNameFromIndex(unsigned int gestureIndex)
{
  bool NameFromIndex; 
  __int64 v2; 
  char *outName; 

  NameFromIndex = NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_GESTURE, gestureIndex, (const char **)&outName);
  v2 = 0i64;
  if ( NameFromIndex )
    return outName;
  return (char *)v2;
}

/*
==============
BG_Gesture_GetNotetrackTime
==============
*/
char BG_Gesture_GetNotetrackTime(const Gesture *const gesture, const XAnimParts *const mainAnimation, scr_string_t notetrack, float *outTime)
{
  XAnimNotifyInfo *notify; 
  int v8; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 102, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !mainAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 103, ASSERT_TYPE_ASSERT, "(mainAnimation)", (const char *)&queryFormat, "mainAnimation") )
    __debugbreak();
  if ( !outTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 104, ASSERT_TYPE_ASSERT, "(outTime)", (const char *)&queryFormat, "outTime") )
    __debugbreak();
  notify = mainAnimation->notify;
  if ( !notify )
    return 0;
  v8 = 0;
  if ( !mainAnimation->notifyCount )
    return 0;
  while ( notify->name != notetrack )
  {
    ++v8;
    ++notify;
    if ( v8 >= mainAnimation->notifyCount )
      return 0;
  }
  *outTime = notify->time;
  return 1;
}

/*
==============
BG_Gesture_GetNotetrackTimes
==============
*/
void BG_Gesture_GetNotetrackTimes(const Gesture *gesture, scr_string_t notetrack, int maxNotetracks, float *outTimes, int *outNumNotetracks)
{
  __int64 v18; 
  XAnimParts **p_inAnimation; 
  int v23; 
  XAnimParts *v26; 
  int v28; 
  bool v31; 
  bool v32; 
  unsigned int IndexFromGesture; 
  GestureAnimationSettings *p_animSettings; 
  bool v35; 
  bool v36; 
  __int64 v64; 
  double v65; 
  __int64 v66; 
  double v67; 
  double v68; 
  XAnimParts **v70; 
  XAnimParts *inAnimation; 
  XAnimParts *mainAnimation; 
  XAnimParts *outAnimation; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  v18 = maxNotetracks;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 180, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !outTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 181, ASSERT_TYPE_ASSERT, "(outTimes)", (const char *)&queryFormat, "outTimes") )
    __debugbreak();
  if ( !outNumNotetracks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 182, ASSERT_TYPE_ASSERT, "(outNumNotetracks)", (const char *)&queryFormat, "outNumNotetracks") )
    __debugbreak();
  if ( (int)v18 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 183, ASSERT_TYPE_ASSERT, "(maxNotetracks > 0)", (const char *)&queryFormat, "maxNotetracks > 0") )
    __debugbreak();
  BG_Gesture_GetMainAnimations(gesture, &mainAnimation, &inAnimation, &outAnimation);
  if ( !mainAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 186, ASSERT_TYPE_ASSERT, "(animations[GESTURE_SECTION_LOOP])", (const char *)&queryFormat, "animations[GESTURE_SECTION_LOOP]") )
    __debugbreak();
  memset_0(outTimes, 0, 4 * v18);
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vmovsd  xmm12, cs:__real@3ff0000000000000
    vmovss  xmm9, cs:__real@3a83126f
  }
  p_inAnimation = &inAnimation;
  *outNumNotetracks = 0;
  v70 = &inAnimation;
  v23 = 0;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vxorpd  xmm13, xmm13, xmm13
  }
  do
  {
    v26 = *p_inAnimation;
    if ( *p_inAnimation )
    {
      _RDI = v26->notify;
      if ( _RDI )
      {
        v28 = 0;
        if ( v26->notifyCount )
        {
          while ( 1 )
          {
            if ( _RDI->name != notetrack )
              goto LABEL_52;
            __asm
            {
              vmovss  xmm7, dword ptr [rdi+4]
              vmovaps xmm8, xmm10
            }
            if ( (unsigned int)v23 >= 3 )
            {
              LODWORD(v66) = 3;
              LODWORD(v64) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( section ) < (unsigned)( GESTURE_SECTION_NUM )", "section doesn't index GESTURE_SECTION_NUM\n\t%i not in [0, %i)", v64, v66) )
                __debugbreak();
            }
            v31 = gesture == NULL;
            if ( !gesture )
            {
              v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 131, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture");
              v31 = !v32;
              if ( v32 )
                __debugbreak();
            }
            __asm
            {
              vcomiss xmm7, xmm10
              vcomiss xmm7, xmm11
            }
            if ( !v31 )
            {
              __asm
              {
                vmovsd  [rsp+138h+var_100], xmm12
                vcvtss2sd xmm0, xmm7, xmm7
                vmovsd  [rsp+138h+var_108], xmm13
                vmovsd  [rsp+138h+var_110], xmm0
              }
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 132, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v65, v67, v68) )
                __debugbreak();
            }
            if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 229, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
              __debugbreak();
            IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesture);
            if ( IndexFromGesture == 256 )
            {
              p_animSettings = NULL;
            }
            else
            {
              p_animSettings = &s_bgGesturesDefs[IndexFromGesture].animSettings;
              v35 = p_animSettings == NULL;
              if ( p_animSettings )
                goto LABEL_38;
            }
            v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 135, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings");
            v35 = !v36;
            if ( v36 )
              __debugbreak();
LABEL_38:
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
              vmulss  xmm6, xmm0, xmm9
              vcomiss xmm6, xmm10
            }
            if ( v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 138, ASSERT_TYPE_ASSERT, "(animLength > 0)", (const char *)&queryFormat, "animLength > 0") )
              __debugbreak();
            if ( p_animSettings->hasTransitions )
            {
              if ( v23 )
              {
                if ( v23 == 1 )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
                    vmulss  xmm1, xmm0, xmm9
                    vxorps  xmm2, xmm2, xmm2
                    vcvtsi2ss xmm2, xmm2, dword ptr [rbx+4]
                    vmulss  xmm3, xmm1, xmm7
                    vmulss  xmm0, xmm2, xmm9
                    vaddss  xmm1, xmm3, xmm0
                    vdivss  xmm8, xmm1, xmm6
                  }
                }
                else if ( v23 == 2 )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+8]
                    vmulss  xmm1, xmm0, xmm9
                    vmulss  xmm2, xmm1, xmm7
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, eax
                    vmulss  xmm1, xmm0, xmm9
                    vaddss  xmm2, xmm2, xmm1
                    vdivss  xmm8, xmm2, xmm6
                  }
                }
                else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 161, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid gesture section") )
                {
                  __debugbreak();
                }
              }
              else
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, dword ptr [rbx+4]
                  vmulss  xmm1, xmm0, xmm9
                  vmulss  xmm2, xmm1, xmm7
                  vdivss  xmm8, xmm2, xmm6
                }
              }
            }
            else
            {
              __asm { vmovaps xmm8, xmm7 }
            }
            _RAX = *outNumNotetracks;
            _RBX = outTimes;
            __asm { vmovss  dword ptr [rbx+rax*4], xmm8 }
            if ( ++*outNumNotetracks >= (int)v18 )
            {
LABEL_53:
              p_inAnimation = v70;
              break;
            }
LABEL_52:
            ++v28;
            ++_RDI;
            if ( v28 >= v26->notifyCount )
              goto LABEL_53;
          }
        }
      }
    }
    ++p_inAnimation;
    ++v23;
    v70 = p_inAnimation;
  }
  while ( v23 < 3 );
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
BG_Gesture_GetRemainingTime
==============
*/
__int64 BG_Gesture_GetRemainingTime(const playerState_s *ps, const unsigned int slot, const int gameTime)
{
  __int64 v4; 
  __int64 v7; 
  const Gesture *CurrentAsset; 
  GestureAnimationSettings *AnimationSettings; 
  int endTime; 
  __int64 v14; 

  v4 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1213, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( gameTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1214, ASSERT_TYPE_ASSERT, "(gameTime > 0)", (const char *)&queryFormat, "gameTime > 0") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1215, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v14, 2) )
      __debugbreak();
  }
  v7 = v4;
  if ( ps->gestureState.gestures[v4].state == GESTURE_STATE_OFF )
    return 0xFFFFFFFFi64;
  CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v4);
  if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1222, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  AnimationSettings = BG_Gesture_GetAnimationSettings(CurrentAsset);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1225, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  endTime = ps->gestureState.gestures[v7].endTime;
  if ( endTime && endTime > ps->gestureState.gestures[v7].startTime )
    return (unsigned int)(endTime - gameTime);
  if ( AnimationSettings->hasTransitions && CurrentAsset->looping )
    return 0xFFFFFFFFi64;
  *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v4, gameTime);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si ecx, xmm1
  }
  return (unsigned int)(AnimationSettings->animationLength - _ECX);
}

/*
==============
BG_Gesture_GetSectionStartTime
==============
*/
__int64 BG_Gesture_GetSectionStartTime(const unsigned int gestureIndex, const GestureSectionType section)
{
  const Gesture *AssetFromIndex; 
  GestureAnimationSettings *AnimationSettings; 
  __int32 v6; 

  if ( (unsigned int)section >= GESTURE_SECTION_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 677, ASSERT_TYPE_ASSERT, "(unsigned)( section ) < (unsigned)( GESTURE_SECTION_NUM )", "section doesn't index GESTURE_SECTION_NUM\n\t%i not in [0, %i)", section, 3) )
    __debugbreak();
  AssetFromIndex = BG_Gesture_GetAssetFromIndex(gestureIndex);
  if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 680, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  AnimationSettings = BG_Gesture_GetAnimationSettings(AssetFromIndex);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 683, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  if ( section == GESTURE_SECTION_IN )
    return 0i64;
  v6 = section - 1;
  if ( !v6 )
    return (unsigned int)(AnimationSettings->inEndTime + 1);
  if ( v6 != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 697, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid gesture section.") )
      __debugbreak();
    return 0i64;
  }
  return (unsigned int)AnimationSettings->outStartTime;
}

/*
==============
BG_Gesture_GetStartTime
==============
*/
__int64 BG_Gesture_GetStartTime(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  __int64 v5; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1080, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1081, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return (unsigned int)ps->gestureState.gestures[v2].startTime;
}

/*
==============
BG_Gesture_GetState
==============
*/
__int64 BG_Gesture_GetState(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  __int64 v5; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 847, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 848, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return (unsigned int)ps->gestureState.gestures[v2].state;
}

/*
==============
BG_Gesture_GetTargetEntity
==============
*/
__int64 BG_Gesture_GetTargetEntity(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  __int64 v5; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1089, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1090, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return (unsigned int)ps->gestureState.gestures[v2].targetEntNum;
}

/*
==============
BG_Gesture_GetWalkAnimDuration
==============
*/

int __fastcall BG_Gesture_GetWalkAnimDuration(const Gesture *gesture, double _XMM1_8)
{
  XAnimParts **anims; 
  bool v5; 
  bool v6; 
  int result; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1774, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  anims = gesture->anims;
  v5 = anims[17] == NULL;
  if ( !anims[17] )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1775, ASSERT_TYPE_ASSERT, "(gesture->anims[GESTURE_ASSET_WALK_ADDITIVE])", (const char *)&queryFormat, "gesture->anims[GESTURE_ASSET_WALK_ADDITIVE]");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  result = gesture->lookAroundSettings.walkTime;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v5 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm1, xmm0, dword ptr [rcx+64h]
      vmulss  xmm2, xmm1, cs:__real@447a0000
      vcvttss2si eax, xmm2
    }
  }
  return result;
}

/*
==============
BG_Gesture_GetWalkAnimGroupBySlot
==============
*/
__int64 BG_Gesture_GetWalkAnimGroupBySlot(const unsigned int slot)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v6; 
  int v7; 
  int v8; 

  if ( slot >= 2 )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1749, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", slot, v7) )
      __debugbreak();
  }
  v2 = 5 * slot + 83;
  if ( v2 - 83 > 0xA )
  {
    v8 = 93;
    LODWORD(v6) = 83;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1752, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_GESTURE_ADDITIVE_WALK_START ) <= ( targetAnim ) && ( targetAnim ) <= ( WEAP_ANIM_GESTURE_ADDITIVE_WALK_END )", "targetAnim not in [WEAP_ANIM_GESTURE_ADDITIVE_WALK_START, WEAP_ANIM_GESTURE_ADDITIVE_WALK_END]\n\t%i not in [%i, %i]", v4, v6, v8) )
      __debugbreak();
  }
  return v2;
}

/*
==============
BG_Gesture_GetWalkAnimOverride
==============
*/
char BG_Gesture_GetWalkAnimOverride(const playerState_s *ps, weapAnimFiles_t *outWalkAnimGroup, const Gesture **outGesture)
{
  unsigned int CurrentSlot; 
  unsigned int v7; 
  const Gesture *CurrentAsset; 
  weapAnimFiles_t v9; 
  __int64 v11; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1796, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentSlot = BG_Demeanor_GetCurrentSlot(ps);
  v7 = CurrentSlot;
  if ( CurrentSlot == 2 )
    return 0;
  CurrentAsset = BG_Gesture_GetCurrentAsset(ps, CurrentSlot);
  if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1803, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !*((_QWORD *)CurrentAsset->anims + 17) )
    return 0;
  if ( outWalkAnimGroup )
  {
    if ( v7 >= 2 )
    {
      LODWORD(v11) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1749, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v11, 2) )
        __debugbreak();
    }
    v9 = 5 * v7 + 83;
    if ( (unsigned int)(v9 - 83) > 0xA )
    {
      LODWORD(v12) = 83;
      LODWORD(v11) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1752, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_GESTURE_ADDITIVE_WALK_START ) <= ( targetAnim ) && ( targetAnim ) <= ( WEAP_ANIM_GESTURE_ADDITIVE_WALK_END )", "targetAnim not in [WEAP_ANIM_GESTURE_ADDITIVE_WALK_START, WEAP_ANIM_GESTURE_ADDITIVE_WALK_END]\n\t%i not in [%i, %i]", v11, v12, 93) )
        __debugbreak();
    }
    *outWalkAnimGroup = v9;
  }
  if ( outGesture )
    *outGesture = CurrentAsset;
  return 1;
}

/*
==============
BG_Gesture_GetWalkFootstepInfo
==============
*/
FootstepAnim *BG_Gesture_GetWalkFootstepInfo(const Gesture *gesture)
{
  unsigned int IndexFromGesture; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1760, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  IndexFromGesture = BG_Gesture_GetIndexFromGesture(gesture);
  if ( IndexFromGesture == 256 )
    return 0i64;
  else
    return &s_bgGesturesDefs[IndexFromGesture].asset->lookAroundSettings.walkFootStepAnim;
}

/*
==============
BG_Gesture_GetWeaponStateDelayTime
==============
*/
const Gesture *BG_Gesture_GetWeaponStateDelayTime(const playerState_s *ps, const unsigned int slot, const int gameTime)
{
  const Gesture *result; 
  GestureAnimationSettings *AnimationSettings; 
  int inEndTime; 

  if ( slot >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1585, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", slot, 2) )
    __debugbreak();
  result = BG_Gesture_GetCurrentAsset(ps, slot);
  if ( result )
  {
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm8
      vmovaps [rsp+88h+var_48], xmm9
    }
    AnimationSettings = BG_Gesture_GetAnimationSettings(result);
    if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1597, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
    *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, slot, gameTime);
    inEndTime = AnimationSettings->inEndTime;
    __asm { vmovss  xmm9, cs:__real@447a0000 }
    _EBX = AnimationSettings->outDuration;
    __asm
    {
      vmulss  xmm1, xmm0, xmm9
      vcvttss2si eax, xmm1
      vmovaps xmm8, xmm0
    }
    if ( _EAX < inEndTime )
    {
      __asm
      {
        vmovaps [rsp+88h+var_18], xmm6
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, edx
        vmulss  xmm1, xmm6, cs:__real@3a83126f
        vmovaps [rsp+88h+var_28], xmm7
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm1, xmm7
      }
      if ( _EAX <= (unsigned int)inEndTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 602, ASSERT_TYPE_ASSERT, "(endTime > 0.0f)", (const char *)&queryFormat, "endTime > 0.0f") )
        __debugbreak();
      __asm
      {
        vdivss  xmm0, xmm9, xmm6
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm2, xmm6; max
        vmulss  xmm0, xmm0, xmm8; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm7, [rsp+88h+var_28]
        vsubss  xmm2, xmm6, xmm0
        vaddss  xmm1, xmm2, cs:__real@3dcccccd
        vcmpltss xmm0, xmm1, xmm6
        vblendvps xmm0, xmm2, xmm1, xmm0
        vsubss  xmm1, xmm6, xmm0
        vmovaps xmm6, [rsp+88h+var_18]
        vmovd   xmm0, ebx
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm1, xmm0
        vcvttss2si ebx, xmm1
      }
    }
    __asm { vmovaps xmm9, [rsp+88h+var_48] }
    result = (const Gesture *)_EBX;
    __asm { vmovaps xmm8, [rsp+88h+var_38] }
  }
  return result;
}

/*
==============
BG_Gesture_IgnoresGamePlayState
==============
*/
bool BG_Gesture_IgnoresGamePlayState(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  __int64 v5; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 706, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 707, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return ps->gestureState.gestures[v2].flags & 1;
}

/*
==============
BG_Gesture_InitGestures
==============
*/
void BG_Gesture_InitGestures(bool isFullInit)
{
  if ( isFullInit )
  {
    if ( s_bgGesturesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 433, ASSERT_TYPE_ASSERT, "(!s_bgGesturesInitialized)", (const char *)&queryFormat, "!s_bgGesturesInitialized") )
      __debugbreak();
    s_bgGesturesInitialized = 1;
    NetConstStrings_CallForAllGestureStrings(BG_Gesture_LoadCache_Callback);
  }
  else
  {
    if ( !s_bgGesturesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 444, ASSERT_TYPE_ASSERT, "(s_bgGesturesInitialized)", (const char *)&queryFormat, "s_bgGesturesInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllGestureStrings(BG_Gesture_Validate_Callback);
  }
}

/*
==============
BG_Gesture_IsBlendToDemeanorLoop
==============
*/
__int64 BG_Gesture_IsBlendToDemeanorLoop(const unsigned int index)
{
  const Gesture *AssetFromIndex; 

  AssetFromIndex = BG_Gesture_GetAssetFromIndex(index);
  if ( AssetFromIndex )
    return AssetFromIndex->weaponSettings.blendToDemeanorLoop;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 935, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  return MEMORY[0x2E];
}

/*
==============
BG_Gesture_IsCancelTransitions
==============
*/
bool BG_Gesture_IsCancelTransitions(const playerState_s *ps, const unsigned int slot)
{
  __int64 v2; 
  const Gesture *CurrentAsset; 
  GestureAnimationSettings *AnimationSettings; 
  __int64 v7; 

  v2 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 724, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 725, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v2);
  if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 728, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  AnimationSettings = BG_Gesture_GetAnimationSettings(CurrentAsset);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 731, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  return (ps->gestureState.gestures[v2].flags & 4) != 0 && AnimationSettings->hasTransitions;
}

/*
==============
BG_Gesture_IsGestureTypePlaying
==============
*/
char BG_Gesture_IsGestureTypePlaying(const playerState_s *ps, GestureType gestureType)
{
  int v4; 
  unsigned int *i; 
  const Gesture *AssetFromIndex; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1826, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = 0;
  for ( i = &ps->gestureState.gestures[0].index; ; i += 8 )
  {
    if ( *(i - 1) )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 615, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      AssetFromIndex = BG_Gesture_GetAssetFromIndex(*i);
      if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1833, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
        __debugbreak();
      if ( AssetFromIndex->type == gestureType )
        break;
    }
    if ( (unsigned int)++v4 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
BG_Gesture_IsJumpTimeBlendActive
==============
*/
bool BG_Gesture_IsJumpTimeBlendActive(const playerState_s *ps, const unsigned int slot, const int gameTime)
{
  __int64 v6; 
  const Gesture *CurrentAsset; 
  GestureSlotState *v9; 
  GestureAnimationSettings *AnimationSettings; 
  int animationLength; 
  int v13; 
  bool result; 
  __int64 v19; 
  __int64 v20; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  v6 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 585, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 586, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v19, 2) )
      __debugbreak();
  }
  CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v6);
  if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 589, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  v9 = &ps->gestureState.gestures[v6];
  if ( (const playerState_s *)((char *)ps + 32 * v6) == (const playerState_s *)-1052i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 592, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v6, gameTime);
  __asm { vmovaps xmm6, xmm0 }
  if ( ps->gestureState.gestures[v6].jumpTime <= 0 || !ps->gestureState.slotBlend )
    goto LABEL_34;
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v20) = 2;
    LODWORD(v19) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 570, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 571, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  AnimationSettings = BG_Gesture_GetAnimationSettings(CurrentAsset);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 576, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 577, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  animationLength = AnimationSettings->animationLength;
  v13 = v9->jumpTime + ps->gestureState.slotBlendDuration;
  if ( animationLength < 0 )
  {
    LODWORD(v20) = animationLength;
    LODWORD(v19) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v19, v20) )
      __debugbreak();
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( animationLength < v13 )
    v13 = animationLength;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vcomiss xmm6, xmm1
  }
  if ( v13 )
LABEL_34:
    result = 0;
  else
    result = 1;
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
  return result;
}

/*
==============
BG_Gesture_IsPlaying
==============
*/
char BG_Gesture_IsPlaying(const playerState_s *ps, const int gameTime, const bool ignoreBlendingOut)
{
  unsigned int v6; 
  GestureState *i; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1000, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 0;
  for ( i = &ps->gestureState; i->gestures[0].state == GESTURE_STATE_OFF || ignoreBlendingOut && i->gestures[0].state != GESTURE_STATE_PLAYING && BG_Gesture_IsReadyToBlendOut(ps, v6, gameTime, 0); i = (GestureState *)((char *)i + 32) )
  {
    if ( ++v6 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
BG_Gesture_IsPlayingByIndex
==============
*/
char BG_Gesture_IsPlayingByIndex(const playerState_s *ps, const unsigned int gestureIndex, unsigned int *outSlot)
{
  unsigned int v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1028, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = 0;
  while ( BG_Gesture_GetState(ps, v6) == GESTURE_STATE_OFF || BG_Gesture_GetIndexBySlot(ps, v6) != gestureIndex )
  {
    if ( ++v6 >= 2 )
      return 0;
  }
  if ( outSlot )
    *outSlot = v6;
  return 1;
}

/*
==============
BG_Gesture_IsPlayingBySlot
==============
*/
char BG_Gesture_IsPlayingBySlot(const playerState_s *ps, const unsigned int slot, unsigned int *outGestureIndex)
{
  __int64 v3; 
  __int64 v7; 

  v3 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1062, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1063, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  if ( BG_Gesture_GetState(ps, v3) == GESTURE_STATE_OFF )
    return 0;
  if ( outGestureIndex )
    *outGestureIndex = ps->gestureState.gestures[v3].index;
  return 1;
}

/*
==============
BG_Gesture_IsReadyToBlendOut
==============
*/
bool BG_Gesture_IsReadyToBlendOut(const playerState_s *ps, const unsigned int slot, int gameTime, int minDuration)
{
  __int64 v8; 
  __int64 v11; 
  const Gesture *AssetFromIndex; 
  GestureAnimationSettings *AnimationSettings; 
  bool ShouldEnableBlendToLoop; 
  bool v15; 
  GestureStateType state; 
  const Gesture *CurrentAsset; 
  GestureAnimationSettings *v18; 
  int endTime; 
  int v20; 
  char v36; 
  char v37; 
  __int64 v38; 

  v8 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 857, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = v8;
  AssetFromIndex = BG_Gesture_GetAssetFromIndex(ps->gestureState.gestures[v8].index);
  AnimationSettings = BG_Gesture_GetAnimationSettings(AssetFromIndex);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 863, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  if ( ps->gestureState.gestures[v11].state == GESTURE_STATE_OFF )
    return 0;
  ShouldEnableBlendToLoop = BG_Demeanor_ShouldEnableBlendToLoop(ps, ps->gestureState.gestures[v11].index);
  v15 = ShouldEnableBlendToLoop;
  if ( AnimationSettings->hasTransitions )
  {
    state = ps->gestureState.gestures[v11].state;
    if ( !ShouldEnableBlendToLoop )
      return state == GESTURE_STATE_STOPPING;
    if ( state != GESTURE_STATE_STOPPING )
      return 0;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1213, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( gameTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1214, ASSERT_TYPE_ASSERT, "(gameTime > 0)", (const char *)&queryFormat, "gameTime > 0") )
      __debugbreak();
    if ( (unsigned int)v8 >= 2 )
    {
      LODWORD(v38) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1215, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v38, 2) )
        __debugbreak();
    }
    if ( ps->gestureState.gestures[v11].state == GESTURE_STATE_OFF )
      goto LABEL_33;
    CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v8);
    if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1222, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
      __debugbreak();
    v18 = BG_Gesture_GetAnimationSettings(CurrentAsset);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1225, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
    endTime = ps->gestureState.gestures[v11].endTime;
    if ( endTime && endTime > ps->gestureState.gestures[v11].startTime )
    {
      v20 = endTime - gameTime;
      return v20 <= AnimationSettings->animationLength - AnimationSettings->blendOutStartTime + 50;
    }
    if ( v18->hasTransitions && CurrentAsset->looping )
    {
LABEL_33:
      v20 = -1;
    }
    else
    {
      *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v8, gameTime);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vcvttss2si eax, xmm1
      }
      v20 = v18->animationLength - _EAX;
    }
    return v20 <= AnimationSettings->animationLength - AnimationSettings->blendOutStartTime + 50;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r15+20h]
    vmovaps [rsp+88h+var_38], xmm6
    vmulss  xmm6, xmm0, cs:__real@3a83126f
    vmovaps [rsp+88h+var_48], xmm8
  }
  *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v8, gameTime);
  __asm { vmovaps xmm8, xmm0 }
  if ( v15 )
    __asm { vsubss  xmm6, xmm6, cs:__real@3d4ccccd }
  *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(AssetFromIndex);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebp
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vsubss  xmm0, xmm0, xmm2
    vminss  xmm3, xmm0, xmm6
    vmovaps xmm6, [rsp+88h+var_38]
    vcomiss xmm8, xmm3
    vmovaps xmm8, [rsp+88h+var_48]
  }
  return !(v36 | v37) || ps->gestureState.gestures[v11].state == GESTURE_STATE_STOPPING;
}

/*
==============
BG_Gesture_IsStoppingByIndex
==============
*/
char BG_Gesture_IsStoppingByIndex(const playerState_s *ps, const unsigned int gestureIndex)
{
  unsigned int v4; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1047, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = 0;
  while ( BG_Gesture_GetState(ps, v4) != GESTURE_STATE_STOPPING || BG_Gesture_GetIndexBySlot(ps, v4) != gestureIndex )
  {
    if ( ++v4 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
BG_Gesture_LoadCache_Callback
==============
*/
void BG_Gesture_LoadCache_Callback(const unsigned int gestureIndex, const char *gestureName)
{
  const Gesture *v2; 
  __int64 v3; 

  v2 = NULL;
  v3 = gestureIndex;
  if ( !gestureName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 396, ASSERT_TYPE_ASSERT, "(gestureName)", (const char *)&queryFormat, "gestureName") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x100 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CB7CE8, 503i64, 256i64);
  if ( *gestureName )
    v2 = Gesture_Register(gestureName);
  s_bgGesturesDefs[v3].asset = v2;
  if ( v2 )
    BG_Gesture_SetAnimationSettings(v2);
}

/*
==============
BG_Gesture_Play
==============
*/
char BG_Gesture_Play(const BgWeaponMap *weaponMap, playerState_s *ps, unsigned int gestureIndex, int gameTime, int startTime, bool checkStateAkimboHands, bool stopAllGestures, bool ignoreGamePlayState, bool slotBlend, int slotBlendDuration, bool cancelTransitions, int targetEntNumber, unsigned int *outSlot, GestureError *outErrorCode)
{
  GestureError *v17; 
  const dvar_t *v18; 
  char v19; 
  __int64 v20; 
  unsigned int i; 
  unsigned int j; 
  const Gesture *AssetFromIndex; 
  const Gesture *v24; 
  XAnimParts **anims; 
  unsigned int type; 
  XAnimParts *v28; 
  GestureAnimationSettings *AnimationSettings; 
  GestureType v30; 
  int v31; 
  int *v32; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1411, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1412, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v17 = outErrorCode;
  if ( outErrorCode )
    *outErrorCode = GESTURE_ERROR_NONE;
  v18 = DCONST_DVARBOOL_viewmodelGestures;
  v19 = 0;
  if ( !DCONST_DVARBOOL_viewmodelGestures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewmodelGestures") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( !v18->current.enabled || gestureIndex == 256 )
    return 0;
  v20 = 0i64;
  while ( BG_Gesture_GetState(ps, v20) )
  {
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= 2 )
      return 0;
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1028, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  for ( i = 0; i < 2; ++i )
  {
    if ( BG_Gesture_GetState(ps, i) && BG_Gesture_GetIndexBySlot(ps, i) == gestureIndex )
      return 0;
  }
  if ( !BG_GetCurrentWeaponForPlayer(weaponMap, ps)->weaponIdx )
  {
    if ( outErrorCode )
      *outErrorCode = GESTURE_ERROR_NO_WEAPON;
    return 0;
  }
  if ( stopAllGestures )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1379, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    for ( j = 0; j < 2; ++j )
      BG_Gesture_StopBySlot(ps, j, gameTime, slotBlend, slotBlendDuration, cancelTransitions);
    v17 = outErrorCode;
  }
  if ( BG_Gesture_GetState(ps, v20) )
    return v19;
  AssetFromIndex = BG_Gesture_GetAssetFromIndex(gestureIndex);
  v24 = AssetFromIndex;
  if ( !AssetFromIndex )
    return 0;
  if ( AssetFromIndex->type >= GESTURE_TYPE_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 753, ASSERT_TYPE_ASSERT, "(gesture->type < GESTURE_TYPE_NUM)", (const char *)&queryFormat, "gesture->type < GESTURE_TYPE_NUM") )
    __debugbreak();
  anims = v24->anims;
  if ( !anims )
  {
    Com_PrintWarning(19, "WARNING: Gesture '%s' does not contain animations.\n", v24->name);
    return 0;
  }
  type = v24->type;
  v28 = anims[5];
  if ( type <= 3 && !*anims && !v28 )
  {
    if ( v17 )
      *v17 = GESTURE_ERROR_LEFT_RIGHT_CENTER_REQUIRED;
    return 0;
  }
  if ( type == 1 )
  {
    if ( (anims[6] || anims[7] || anims[8] || anims[9]) && !v28 )
    {
      if ( v17 )
        *v17 = GESTURE_ERROR_RIGHT_CENTER_REQUIRED;
      return 0;
    }
  }
  else if ( type == 2 && (!anims[14] || !anims[15]) )
  {
    if ( v17 )
      *v17 = GESTURE_ERROR_YAW_PITCH_REQUIRED;
    return 0;
  }
  AnimationSettings = BG_Gesture_GetAnimationSettings(v24);
  if ( AnimationSettings && AnimationSettings->isInitialized )
  {
    if ( startTime > 0 && startTime >= AnimationSettings->animationLength )
    {
      if ( v17 )
        *v17 = GESTURE_ERROR_INVALID_START_TIME;
      return 0;
    }
    v30 = v24->type;
    if ( ((v30 - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( (v30 & 0xFFFFFFFD) != 0 )
        v31 = targetEntNumber;
      else
        v31 = 2047;
    }
    else
    {
      v31 = targetEntNumber;
      if ( targetEntNumber != 2047 && (targetEntNumber < 0 || (unsigned int)targetEntNumber >= 0x7FE) )
      {
        if ( v17 )
          *v17 = GESTURE_ERROR_INVALID_TARGET;
        return 0;
      }
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1165, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v32 = &ps->commandTime + 8 * (unsigned int)v20;
    ps->gestureState.gestures[v20].index = gestureIndex;
    v32[266] = gameTime;
    v32[265] = v31;
    v32[270] |= ignoreGamePlayState | (2 * checkStateAkimboHands);
    v32[263] = 1;
    v32[269] = 0;
    v32[267] = startTime;
    ps->gestureState.slotBlend = slotBlend;
    ps->gestureState.slotBlendDuration = slotBlendDuration;
    if ( outSlot )
      *outSlot = v20;
    return 1;
  }
  Com_PrintWarning(19, "WARNING: Gesture '%s' contains uninitialized anim settings. Gestures are not supported in transient files.\n", v24->name);
  return 0;
}

/*
==============
BG_Gesture_SetAnimationSettings
==============
*/

void __fastcall BG_Gesture_SetAnimationSettings(const Gesture *gesture, double _XMM1_8, double _XMM2_8)
{
  GestureAnimationSettings *AnimationSettings; 
  XAnimParts **anims; 
  XAnimParts *v12; 
  XAnimParts *v13; 
  XAnimParts *v14; 
  char v24; 
  char v25; 
  int v26; 
  int blendOutStartTime; 
  int blendInEndTime; 
  int v42; 
  bool v43; 
  bool v44; 
  int v53; 
  bool NotetrackTime; 
  bool v64; 
  XAnimParts **v69; 
  const XAnimParts *v70; 
  char v72; 
  double v84; 
  double v85; 
  float outBlend; 
  int length; 
  int v93; 
  int v94; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 257, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 260, ASSERT_TYPE_ASSERT, "(animationSettings)", (const char *)&queryFormat, "animationSettings") )
    __debugbreak();
  if ( gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
  {
    anims = gesture->anims;
    v12 = anims[11];
    v13 = anims[10];
    v14 = *anims;
    __asm { vmovaps [rsp+0E8h+var_58], xmm6 }
    if ( !*anims )
      v14 = anims[5];
    if ( !v13 )
      v13 = anims[12];
    if ( !v12 )
      v12 = anims[13];
    __asm { vmovss  xmm6, cs:__real@447a0000 }
    _ER12 = 0;
    if ( v14 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm0, dword ptr [r15+64h]
        vmulss  xmm2, xmm1, xmm6
        vcvttss2si edx, xmm2
      }
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 282, ASSERT_TYPE_ASSERT, "(mainAnimation)", (const char *)&queryFormat, "mainAnimation") )
        __debugbreak();
      _EDX = 0;
    }
    v93 = _EDX;
    if ( v13 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm0, dword ptr [r14+64h]
        vmulss  xmm2, xmm1, xmm6
        vcvttss2si ecx, xmm2
      }
    }
    else
    {
      _ECX = 0;
    }
    length = _ECX;
    if ( v12 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm0, dword ptr [rbp+64h]
        vmulss  xmm2, xmm1, xmm6
        vcvttss2si r13d, xmm2
      }
    }
    else
    {
      _ER13 = 0;
    }
    v94 = _EDX + _ER13 + _ECX;
    v24 = BG_Gesture_CheckXAnimReference(gesture, v14, _EDX);
    LOBYTE(outBlend) = BG_Gesture_CheckXAnimReference(gesture, v13, length);
    v25 = BG_Gesture_CheckXAnimReference(gesture, v12, _ER13);
    if ( !v24 || !LOBYTE(outBlend) || !v25 )
      goto LABEL_51;
    v26 = length;
    __asm { vmovaps [rsp+0E8h+var_68], xmm7 }
    AnimationSettings->mainAnimLength = v93;
    __asm { vmovaps [rsp+0E8h+var_78], xmm8 }
    AnimationSettings->animationLength = v94;
    AnimationSettings->inAnimLength = v26;
    AnimationSettings->outAnimLength = _ER13;
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
    if ( v13 || v12 )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@3e4ccccd; defaultBlend
        vmovaps [rsp+0E8h+var_88], xmm9
        vmovaps [rsp+0E8h+var_98], xmm10
      }
      BG_Gesture_GetBlendFromNotetrack(gesture, v13, scr_const.gesture_blend_in, *(const float *)&_XMM3, &outBlend);
      __asm
      {
        vxorps  xmm10, xmm10, xmm10
        vcvtsi2ss xmm10, xmm10, ebx
        vmulss  xmm0, xmm10, [rsp+0E8h+outBlend]
        vcvttss2si eax, xmm0
      }
      AnimationSettings->blendInEndTime = _EAX;
      __asm { vxorps  xmm3, xmm3, xmm3; defaultBlend }
      BG_Gesture_GetBlendFromNotetrack(gesture, v12, scr_const.gesture_blend_out_start, *(const float *)&_XMM3, &outBlend);
      __asm { vsubss  xmm0, xmm8, [rsp+0E8h+outBlend] }
      v53 = v94;
      __asm
      {
        vmovss  xmm3, cs:__real@3f333333; defaultBlend
        vxorps  xmm9, xmm9, xmm9
        vcvtsi2ss xmm9, xmm9, r13d
        vmulss  xmm1, xmm0, xmm9
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, r15d
        vsubss  xmm2, xmm6, xmm1
        vcvttss2si eax, xmm2
      }
      AnimationSettings->blendOutStartTime = _EAX;
      BG_Gesture_GetBlendFromNotetrack(gesture, v12, scr_const.gesture_blend_out_end, *(const float *)&_XMM3, &outBlend);
      __asm
      {
        vsubss  xmm0, xmm8, [rsp+0E8h+outBlend]
        vmulss  xmm1, xmm0, xmm9
        vsubss  xmm2, xmm6, xmm1
        vcvttss2si eax, xmm2
      }
      AnimationSettings->blendOutEndTime = _EAX;
      AnimationSettings->inEndTime = v26;
      AnimationSettings->outStartTime = v53 - _ER13;
      AnimationSettings->inDuration = v26;
      AnimationSettings->outDuration = _ER13;
      AnimationSettings->hasTransitions = 1;
      NotetrackTime = BG_Gesture_GetNotetrackTime(gesture, v13, scr_const.overlay_start, &outBlend);
      v64 = BG_Gesture_GetNotetrackTime(gesture, v12, scr_const.overlay_end, (float *)&length);
      if ( NotetrackTime && v64 )
      {
        __asm
        {
          vmulss  xmm0, xmm10, [rsp+0E8h+outBlend]
          vmulss  xmm1, xmm9, [rsp+0E8h+length]
          vcvttss2si eax, xmm0
        }
        AnimationSettings->adsTransitionInTime = _EAX;
        __asm { vcvttss2si eax, xmm1 }
        AnimationSettings->adsTransitionOutTime = _EAX;
        AnimationSettings->hasAdsTransitions = 1;
      }
      __asm
      {
        vmovaps xmm9, [rsp+0E8h+var_88]
        vmovaps xmm10, [rsp+0E8h+var_98]
      }
      goto LABEL_41;
    }
    __asm { vmovss  xmm3, cs:__real@3e4ccccd; defaultBlend }
    BG_Gesture_GetBlendFromNotetrack(gesture, v14, scr_const.gesture_blend_in, *(const float *)&_XMM3, &outBlend);
    __asm
    {
      vmovss  xmm3, cs:__real@3f4ccccd; defaultBlend
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, [rsp+0E8h+arg_10]
      vmulss  xmm0, xmm6, [rsp+0E8h+outBlend]
      vcvttss2si eax, xmm0
    }
    AnimationSettings->blendInEndTime = _EAX;
    BG_Gesture_GetBlendFromNotetrack(gesture, v14, scr_const.gesture_blend_out_start, *(const float *)&_XMM3, &outBlend);
    __asm
    {
      vmulss  xmm0, xmm6, [rsp+0E8h+outBlend]
      vmovss  xmm3, cs:__real@3f666666; defaultBlend
      vcvttss2si eax, xmm0
    }
    AnimationSettings->blendOutStartTime = _EAX;
    BG_Gesture_GetBlendFromNotetrack(gesture, v14, scr_const.gesture_blend_out_end, *(const float *)&_XMM3, &outBlend);
    blendOutStartTime = AnimationSettings->blendOutStartTime;
    __asm
    {
      vmulss  xmm0, xmm6, [rsp+0E8h+outBlend]
      vcvttss2si eax, xmm0
    }
    AnimationSettings->blendOutEndTime = _EAX;
    blendInEndTime = AnimationSettings->blendInEndTime;
    AnimationSettings->inEndTime = blendInEndTime;
    AnimationSettings->inDuration = blendInEndTime;
    v42 = v94 - blendOutStartTime;
    AnimationSettings->outStartTime = blendOutStartTime;
    AnimationSettings->outDuration = v42;
    AnimationSettings->hasTransitions = 0;
    v43 = BG_Gesture_GetNotetrackTime(gesture, v14, scr_const.overlay_start, &outBlend);
    v44 = BG_Gesture_GetNotetrackTime(gesture, v14, scr_const.overlay_end, (float *)&length);
    if ( v43 )
    {
      __asm
      {
        vmulss  xmm0, xmm6, [rsp+0E8h+outBlend]
        vcvttss2si ecx, xmm0
      }
    }
    else
    {
      if ( !v44 )
      {
LABEL_41:
        if ( gesture->priority == GESTURE_PRIORITY_MOUNT )
        {
          v69 = gesture->anims;
          v70 = v69[10];
          if ( !v70 )
          {
            v70 = v69[12];
            if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 381, ASSERT_TYPE_ASSERT, "(inAnimationMount)", (const char *)&queryFormat, "inAnimationMount") )
              __debugbreak();
          }
          *(double *)&_XMM0 = XAnimGetNotetrackTimeFromParts(v70, scr_const.gesture_mount_contact);
          __asm
          {
            vcomiss xmm0, xmm7
            vmovaps xmm6, xmm0
          }
          if ( v72 )
          {
            __asm
            {
              vcvtss2sd xmm1, xmm6, xmm0
              vmovsd  [rsp+0E8h+var_A8], xmm1
              vxorpd  xmm2, xmm2, xmm2
              vmovsd  [rsp+0E8h+var_B0], xmm2
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 384, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( mountContactFraction )", "%s <= %s\n\t%g, %g", "0.0f", "mountContactFraction", v84, v85) )
              __debugbreak();
          }
          __asm
          {
            vmovaps xmm2, xmm8; max
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm0, xmm6; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rdi+28h]
            vmulss  xmm0, xmm0, xmm1
            vcvttss2si eax, xmm0
          }
          AnimationSettings->mountContactTime = _EAX;
        }
        __asm
        {
          vmovaps xmm8, [rsp+0E8h+var_78]
          vmovaps xmm7, [rsp+0E8h+var_68]
        }
        AnimationSettings->isInitialized = 1;
LABEL_51:
        __asm { vmovaps xmm6, [rsp+0E8h+var_58] }
        return;
      }
      _ECX = 0;
    }
    AnimationSettings->adsTransitionInTime = _ECX;
    if ( v44 )
    {
      __asm
      {
        vmulss  xmm0, xmm6, [rsp+0E8h+length]
        vcvttss2si r12d, xmm0
      }
    }
    AnimationSettings->adsTransitionOutTime = _ER12;
    AnimationSettings->hasAdsTransitions = 1;
    goto LABEL_41;
  }
}

/*
==============
BG_Gesture_SetEndTime
==============
*/
void BG_Gesture_SetEndTime(playerState_s *ps, const unsigned int slot, const int outDuration)
{
  __int64 v3; 
  GestureSlotState *v6; 
  const Gesture *CurrentAsset; 
  GestureAnimationSettings *AnimationSettings; 
  int v9; 
  int endTime; 
  int v11; 
  __int64 v12; 

  v3 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1183, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1184, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( outDuration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1185, ASSERT_TYPE_ASSERT, "(outDuration >= 0)", (const char *)&queryFormat, "outDuration >= 0") )
    __debugbreak();
  v6 = &ps->gestureState.gestures[v3];
  if ( v6->state == GESTURE_STATE_STOPPING )
  {
    CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v3);
    if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1192, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
      __debugbreak();
    AnimationSettings = BG_Gesture_GetAnimationSettings(CurrentAsset);
    if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1194, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
    v9 = AnimationSettings->outDuration;
    endTime = v6->endTime;
    if ( outDuration < v9 )
      v9 = outDuration;
    v11 = v6->stopTime + v9;
    if ( endTime )
    {
      if ( endTime < v11 )
        v11 = v6->endTime;
    }
    v6->endTime = v11;
  }
}

/*
==============
BG_Gesture_SetState_Playing
==============
*/
void BG_Gesture_SetState_Playing(playerState_s *ps, const unsigned int slot, const unsigned int gestureIndex, int gameTime, int jumpTime, bool forcePlay, bool checkStateBothHandsAkimbo, bool slotBlend, int slotBlendDuration, int targetEntNumber)
{
  __int64 v10; 
  int *v14; 
  __int64 v15; 

  v10 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1165, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(v15) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  v14 = &ps->commandTime + 8 * v10;
  ps->gestureState.gestures[v10].index = gestureIndex;
  v14[265] = targetEntNumber;
  v14[267] = jumpTime;
  v14[266] = gameTime;
  v14[270] |= forcePlay | (2 * checkStateBothHandsAkimbo);
  v14[263] = 1;
  v14[269] = 0;
  ps->gestureState.slotBlend = slotBlend;
  ps->gestureState.slotBlendDuration = slotBlendDuration;
}

/*
==============
BG_Gesture_SetState_Stopping
==============
*/
void BG_Gesture_SetState_Stopping(playerState_s *ps, const unsigned int slot, int gameTime, bool cancelTransitions)
{
  __int64 v4; 
  __int64 v8; 
  __int64 v9; 

  v4 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1150, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1151, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  v8 = v4;
  ps->gestureState.gestures[v8].state = GESTURE_STATE_STOPPING;
  ps->gestureState.gestures[v8].stopTime = gameTime;
  if ( cancelTransitions )
    ps->gestureState.gestures[v8].flags |= 4u;
}

/*
==============
BG_Gesture_ShouldBlendOutToState
==============
*/
bool BG_Gesture_ShouldBlendOutToState(const playerState_s *ps, const unsigned int slot, const GestureWeaponState weaponState)
{
  unsigned __int16 v3; 
  const Gesture *CurrentAsset; 
  __int64 v8; 

  v3 = weaponState;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1642, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v8) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1643, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  CurrentAsset = BG_Gesture_GetCurrentAsset(ps, slot);
  return CurrentAsset && (CurrentAsset->weaponSettings.blendToStates & v3) != 0;
}

/*
==============
BG_Gesture_ShouldHideReticle
==============
*/
char BG_Gesture_ShouldHideReticle(const playerState_s *ps)
{
  unsigned int v2; 
  const Gesture *CurrentAsset; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1622, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = 0;
  while ( 1 )
  {
    if ( BG_Gesture_GetState(ps, v2) )
    {
      CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v2);
      if ( CurrentAsset )
      {
        if ( CurrentAsset->weaponSettings.hideReticle )
          break;
      }
    }
    if ( ++v2 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
BG_Gesture_StopAll
==============
*/
void BG_Gesture_StopAll(playerState_s *ps, int gameTime, bool earlyOut, int outDuration, bool cancelTransitions)
{
  unsigned int i; 
  int v10; 
  GestureStateType State; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1379, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  for ( i = 0; i < 2; ++i )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1522, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( cancelTransitions )
    {
      if ( !earlyOut )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1524, ASSERT_TYPE_ASSERT, "((cancelTransitions && earlyOut) || (!cancelTransitions))", (const char *)&queryFormat, "(cancelTransitions && earlyOut) || (!cancelTransitions)") )
          __debugbreak();
LABEL_12:
        if ( BG_Gesture_GetState(ps, i) != GESTURE_STATE_PLAYING )
          continue;
        BG_Gesture_SetState_Stopping(ps, i, gameTime, cancelTransitions);
        v10 = 0x7FFFFFFF;
LABEL_14:
        BG_Gesture_SetEndTime(ps, i, v10);
        continue;
      }
    }
    else if ( !earlyOut )
    {
      goto LABEL_12;
    }
    State = BG_Gesture_GetState(ps, i);
    if ( outDuration )
    {
      if ( State == GESTURE_STATE_PLAYING )
      {
        BG_Gesture_SetState_Stopping(ps, i, gameTime, cancelTransitions);
        v10 = outDuration;
        goto LABEL_14;
      }
    }
    else if ( State )
    {
      PM_Gesture_SetState_Off(ps, i, 0, gameTime);
    }
  }
}

/*
==============
BG_Gesture_StopByIndex
==============
*/
bool BG_Gesture_StopByIndex(playerState_s *ps, const unsigned int index, int gameTime, bool earlyOut, int outDuration, bool cancelTransitions)
{
  unsigned int v10; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1562, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = 0;
  while ( BG_Gesture_GetIndexBySlot(ps, v10) != index )
  {
    if ( ++v10 >= 2 )
      return 0;
  }
  return BG_Gesture_StopBySlot(ps, v10, gameTime, earlyOut, outDuration, cancelTransitions);
}

/*
==============
BG_Gesture_StopBySlot
==============
*/
char BG_Gesture_StopBySlot(playerState_s *ps, const unsigned int slot, int gameTime, bool earlyOut, int outDuration, bool cancelTransitions)
{
  GestureStateType State; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1522, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v12) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1523, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( cancelTransitions )
  {
    if ( !earlyOut )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1524, ASSERT_TYPE_ASSERT, "((cancelTransitions && earlyOut) || (!cancelTransitions))", (const char *)&queryFormat, "(cancelTransitions && earlyOut) || (!cancelTransitions)") )
        __debugbreak();
LABEL_11:
      if ( BG_Gesture_GetState(ps, slot) == GESTURE_STATE_PLAYING )
      {
        BG_Gesture_SetState_Stopping(ps, slot, gameTime, cancelTransitions);
        BG_Gesture_SetEndTime(ps, slot, 0x7FFFFFFF);
        return 1;
      }
      return 0;
    }
  }
  else if ( !earlyOut )
  {
    goto LABEL_11;
  }
  State = BG_Gesture_GetState(ps, slot);
  if ( outDuration )
  {
    if ( State == GESTURE_STATE_PLAYING )
    {
      BG_Gesture_SetState_Stopping(ps, slot, gameTime, cancelTransitions);
      BG_Gesture_SetEndTime(ps, slot, outDuration);
      return 1;
    }
  }
  else if ( State )
  {
    PM_Gesture_SetState_Off(ps, slot, 0, gameTime);
    return 1;
  }
  return 0;
}

/*
==============
BG_Gesture_UpdateSlotBlend
==============
*/
void BG_Gesture_UpdateSlotBlend(playerState_s *ps, int gameTime)
{
  char v7; 
  char v8; 
  char v9; 
  int slotBlendDuration; 
  unsigned int v12; 
  GestureState *p_gestureState; 
  const Gesture *CurrentAsset; 
  unsigned int IndexFromGesture; 
  GestureAnimationSettings *p_animSettings; 
  int blendInEndTime; 
  char v20; 
  char v21; 
  void *retaddr; 

  _RAX = &retaddr;
  v7 = 0;
  v8 = 0;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v9 = 0;
  slotBlendDuration = 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1268, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@3a83126f }
  v12 = 0;
  p_gestureState = &ps->gestureState;
  do
  {
    if ( p_gestureState->gestures[0].state == GESTURE_STATE_OFF )
      goto LABEL_25;
    CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v12);
    if ( !CurrentAsset )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1278, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 229, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
        __debugbreak();
    }
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(CurrentAsset);
    if ( IndexFromGesture == 256 )
    {
      p_animSettings = NULL;
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1281, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
        __debugbreak();
      goto LABEL_16;
    }
    p_animSettings = &s_bgGesturesDefs[IndexFromGesture].animSettings;
    if ( !p_animSettings )
      goto LABEL_14;
LABEL_16:
    blendInEndTime = p_animSettings->blendInEndTime;
    if ( BG_Gesture_IsJumpTimeBlendActive(ps, v12, gameTime) )
    {
      slotBlendDuration = ps->gestureState.slotBlendDuration;
      v9 = 1;
    }
    else
    {
      if ( p_gestureState->gestures[0].state != GESTURE_STATE_PLAYING )
        goto LABEL_23;
      *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v12, gameTime);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edi
        vmulss  xmm2, xmm1, xmm6
        vcomiss xmm0, xmm2
      }
      if ( v20 | v21 )
      {
        v7 = 1;
        if ( ps->gestureState.slotBlend )
          slotBlendDuration = ps->gestureState.slotBlendDuration;
        else
          slotBlendDuration = blendInEndTime;
      }
      else
      {
LABEL_23:
        if ( p_gestureState->gestures[0].state == GESTURE_STATE_STOPPING )
          v8 = 1;
      }
    }
LABEL_25:
    ++v12;
    p_gestureState = (GestureState *)((char *)p_gestureState + 32);
  }
  while ( v12 < 2 );
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
  if ( v8 && v7 || v9 )
  {
    ps->gestureState.slotBlend = 1;
    ps->gestureState.slotBlendDuration = slotBlendDuration;
  }
  else
  {
    ps->gestureState.slotBlend = 0;
    ps->gestureState.slotBlendDuration = slotBlendDuration;
  }
}

/*
==============
BG_Gesture_Validate_Callback
==============
*/
void BG_Gesture_Validate_Callback(const unsigned int gestureIndex, const char *gestureName)
{
  __int64 v2; 
  const char *v3; 
  GestureDef *v4; 
  __int64 v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v2 = gestureIndex;
  v3 = gestureName;
  if ( !gestureName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 420, ASSERT_TYPE_ASSERT, "(gestureName)", (const char *)&queryFormat, "gestureName") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x100 )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 421, ASSERT_TYPE_ASSERT, "(unsigned)( gestureIndex ) < (unsigned)( (1<<8) )", "gestureIndex doesn't index MAX_GESTURE_DEFS\n\t%i not in [0, %i)", v13, 256) )
      __debugbreak();
  }
  v4 = &s_bgGesturesDefs[v2];
  if ( !v4->asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 423, ASSERT_TYPE_ASSERT, "(s_bgGesturesDefs[gestureIndex].asset)", (const char *)&queryFormat, "s_bgGesturesDefs[gestureIndex].asset") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  name = v4->asset->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - v3;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    v9 = v5;
    v10 = *(unsigned __int8 *)v3++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 424, ASSERT_TYPE_ASSERT, "(!I_stricmp( s_bgGesturesDefs[gestureIndex].asset->name, gestureName ))", "%s\n\tInvalid gesture mapping", "!I_stricmp( s_bgGesturesDefs[gestureIndex].asset->name, gestureName )") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v8 );
}

/*
==============
PM_Gesture_ProcessState
==============
*/
void PM_Gesture_ProcessState(pmove_t *pm)
{
  playerState_s *ps; 
  int serverTime; 
  int *p_startTime; 
  unsigned int i; 
  const Gesture *CurrentAsset; 
  const Gesture *v7; 
  GestureAnimationSettings *AnimationSettings; 
  int v9; 
  int v10; 
  int v11; 
  bool v12; 
  bool v13; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1325, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1325, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  serverTime = pm->cmd.serverTime;
  p_startTime = &ps->gestureState.gestures[0].startTime;
  for ( i = 0; i < 2; ++i )
  {
    if ( *(p_startTime - 3) )
    {
      CurrentAsset = BG_Gesture_GetCurrentAsset(ps, i);
      v7 = CurrentAsset;
      if ( CurrentAsset )
      {
        AnimationSettings = BG_Gesture_GetAnimationSettings(CurrentAsset);
        if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1345, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
          __debugbreak();
        v9 = *(p_startTime - 3);
        if ( v9 == 1 )
        {
          v10 = p_startTime[1];
          v11 = *p_startTime + AnimationSettings->animationLength - v10;
          v12 = v7->looping && v10 < AnimationSettings->outStartTime;
          if ( serverTime >= v11 && !v12 )
          {
            v13 = 0;
LABEL_24:
            PM_Gesture_SetState_Off(ps, i, v13, pm->cmd.serverTime);
            PM_Gesture_SendNotiftyEvent(pm, ps, i);
          }
        }
        else if ( v9 == 2 && serverTime >= p_startTime[3] )
        {
          v13 = 1;
          goto LABEL_24;
        }
      }
    }
    p_startTime += 8;
  }
  BG_Gesture_UpdateSlotBlend(ps, pm->cmd.serverTime);
}

/*
==============
PM_Gesture_SendNotiftyEvent
==============
*/
void PM_Gesture_SendNotiftyEvent(pmove_t *pm, playerState_s *ps, const unsigned int slot)
{
  __int64 v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1254, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v6) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1255, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v6, 2) )
      __debugbreak();
  }
  BG_AddPredictableEventToPlayerstate(EV_GESTURE_STOPPED_NOTIFY, slot, pm->cmd.serverTime, pm->weaponMap, ps);
}

/*
==============
PM_Gesture_SetState_Off
==============
*/
void PM_Gesture_SetState_Off(playerState_s *ps, const unsigned int slot, bool blendOut, int gameTime)
{
  __int64 v4; 
  __int64 v8; 
  __int64 v9; 

  v4 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1130, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1131, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  v8 = v4;
  ps->gestureState.gestures[v8].state = GESTURE_STATE_OFF;
  ps->gestureState.gestures[v8].targetEntNum = 2047;
  ps->gestureState.gestures[v8].jumpTime = 0;
  ps->gestureState.gestures[v8].flags = 0;
  *(_QWORD *)&ps->gestureState.slotBlend = 0i64;
  ps->gestureState.gestures[v8].endTime = gameTime;
  if ( !blendOut )
    ps->gestureState.gestures[v8].stopTime = gameTime;
}

/*
==============
PM_Gesture_ShouldStartSprint
==============
*/
__int64 PM_Gesture_ShouldStartSprint(pmove_t *pm)
{
  unsigned int v2; 
  int v4; 
  unsigned __int8 v5; 
  playerState_s *ps; 
  int *p_stopTime; 
  const Gesture *CurrentAsset; 
  GestureStateType State; 

  v2 = 0;
  v4 = 0;
  v5 = 1;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1695, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1698, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_stopTime = &ps->gestureState.gestures[0].stopTime;
  do
  {
    CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v2);
    if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_gesture.cpp", 1704, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
      __debugbreak();
    if ( CurrentAsset->priority == GESTURE_PRIORITY_SCRIPT )
    {
      State = BG_Gesture_GetState(ps, v2);
      if ( !BG_Gesture_IgnoresGamePlayState(ps, v2) && BG_Gesture_ShouldBlendOutToState(ps, v2, GESTURE_WEAPON_STATE_SPRINT) )
      {
        if ( State == GESTURE_STATE_PLAYING )
        {
          BG_Gesture_StopBySlot(ps, v2, pm->cmd.serverTime, 0, 0, 0);
          v5 = 0;
        }
        else if ( State == GESTURE_STATE_STOPPING )
        {
          BG_Gesture_GetWeaponStateDelayTime(ps, v2, pm->cmd.serverTime);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm0, xmm0, dword ptr [rbp+28h]
            vcvttss2si eax, xmm0
          }
          if ( _EAX > v4 )
            v4 = _EAX;
          if ( pm->cmd.serverTime < v4 + *p_stopTime )
            v5 = 0;
        }
      }
    }
    ++v2;
    p_stopTime += 8;
  }
  while ( v2 < 2 );
  return v5;
}

