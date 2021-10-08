/*
==============
CG_Gesture_UpdateAnims
==============
*/

void __fastcall CG_Gesture_UpdateAnims(LocalClientNum_t localClientNum, const Gesture *gesture, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, DObj *obj, float animTime, float blendTime)
{
  ?CG_Gesture_UpdateAnims@@YAXW4LocalClientNum_t@@PEBUGesture@@PEBUplayerState_s@@IW4PlayerHandIndex@@PEAUDObj@@MM@Z(localClientNum, gesture, ps, slot, hand, obj, animTime, blendTime);
}

/*
==============
CG_Gesture_StartCenterAnimations
==============
*/

void __fastcall CG_Gesture_StartCenterAnimations(DObj *obj, XAnimTree *animTree, const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, GestureDirectionalAssetIndex anim, GestureDirectionalAssetIndex animAdditive, float startTime, float blendTime)
{
  ?CG_Gesture_StartCenterAnimations@@YAXPEAUDObj@@PEAUXAnimTree@@PEBUGesture@@IW4PlayerHandIndex@@_NW4GestureDirectionalAssetIndex@@5MM@Z(obj, animTree, gesture, slot, hand, isDualWield, anim, animAdditive, startTime, blendTime);
}

/*
==============
CG_Gesture_GetAnimationSlot
==============
*/

bool __fastcall CG_Gesture_GetAnimationSlot(const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, GestureDirectionalAssetIndex assetIndex, bool returnOverlay, weapAnimFiles_t *outIndex)
{
  return ?CG_Gesture_GetAnimationSlot@@YA_NPEBUGesture@@IW4PlayerHandIndex@@_NW4GestureDirectionalAssetIndex@@_NPEAW4weapAnimFiles_t@@@Z(gesture, slot, hand, isDualWield, assetIndex, returnOverlay, outIndex);
}

/*
==============
CG_Gesture_Init
==============
*/

void CG_Gesture_Init(void)
{
  ?CG_Gesture_Init@@YAXXZ();
}

/*
==============
CG_Gesture_AssignAnimationSlots
==============
*/

void CG_Gesture_AssignAnimationSlots(void)
{
  ?CG_Gesture_AssignAnimationSlots@@YAXXZ();
}

/*
==============
CG_Gesture_IsEnabled
==============
*/

bool __fastcall CG_Gesture_IsEnabled(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand)
{
  return ?CG_Gesture_IsEnabled@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@IW4PlayerHandIndex@@@Z(localClientNum, ps, slot, hand);
}

/*
==============
CG_Gesture_SetRebuildTree
==============
*/

bool __fastcall CG_Gesture_SetRebuildTree(LocalClientNum_t localClientNum, const playerState_s *ps, const Weapon *r_weapon)
{
  return ?CG_Gesture_SetRebuildTree@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@AEBUWeapon@@@Z(localClientNum, ps, r_weapon);
}

/*
==============
CG_Gesture_GetAnimTimeArchived
==============
*/

double __fastcall CG_Gesture_GetAnimTimeArchived(LocalClientNum_t localClientNum, const unsigned int slot, const PlayerHandIndex hand, const Gesture *gesture)
{
  double result; 

  *(float *)&result = ?CG_Gesture_GetAnimTimeArchived@@YAMW4LocalClientNum_t@@IW4PlayerHandIndex@@PEBUGesture@@@Z(localClientNum, slot, hand, gesture);
  return result;
}

/*
==============
CG_Gesture_CalcYawLerpInRate
==============
*/

double __fastcall CG_Gesture_CalcYawLerpInRate(const GestureLookAroundSettings *lookAroundSettings, const float velocity)
{
  double result; 

  *(float *)&result = ?CG_Gesture_CalcYawLerpInRate@@YAMPEBUGestureLookAroundSettings@@M@Z(lookAroundSettings, velocity);
  return result;
}

/*
==============
CG_Gesture_StopAnim
==============
*/

void __fastcall CG_Gesture_StopAnim(DObj *obj, XAnimTree *animTree, weapAnimFiles_t animIndex, const float weight, const float blendOut)
{
  ?CG_Gesture_StopAnim@@YAXPEAUDObj@@PEAUXAnimTree@@W4weapAnimFiles_t@@MM@Z(obj, animTree, animIndex, weight, blendOut);
}

/*
==============
CG_Gesture_ValidateTargetEntity
==============
*/

bool __fastcall CG_Gesture_ValidateTargetEntity(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot)
{
  return ?CG_Gesture_ValidateTargetEntity@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@I@Z(localClientNum, ps, slot);
}

/*
==============
CG_Gesture_GetAnimTimeFromTree
==============
*/

void __fastcall CG_Gesture_GetAnimTimeFromTree(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const Gesture *gesture, const XAnimTree *animTree, float *outTimeInSeconds, float *outNormalizedTime)
{
  ?CG_Gesture_GetAnimTimeFromTree@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@IW4PlayerHandIndex@@PEBUGesture@@PEBUXAnimTree@@PEAM5@Z(localClientNum, ps, slot, hand, gesture, animTree, outTimeInSeconds, outNormalizedTime);
}

/*
==============
CG_Gesture_ShouldShutDown
==============
*/

bool __fastcall CG_Gesture_ShouldShutDown(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand)
{
  return ?CG_Gesture_ShouldShutDown@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@IW4PlayerHandIndex@@@Z(localClientNum, ps, slot, hand);
}

/*
==============
CG_Gesture_GetAnimMappingInfo
==============
*/

const GestureAnimSlotInfo *__fastcall CG_Gesture_GetAnimMappingInfo(const unsigned int gestureSlot, unsigned int mappingIndex)
{
  return ?CG_Gesture_GetAnimMappingInfo@@YAPEBUGestureAnimSlotInfo@@II@Z(gestureSlot, mappingIndex);
}

/*
==============
CG_Gesture_GetLastTreeRebuildTime
==============
*/

int __fastcall CG_Gesture_GetLastTreeRebuildTime(const LocalClientNum_t localClientNum, const unsigned int slot, const PlayerHandIndex hand)
{
  return ?CG_Gesture_GetLastTreeRebuildTime@@YAHW4LocalClientNum_t@@IW4PlayerHandIndex@@@Z(localClientNum, slot, hand);
}

/*
==============
CG_Gesture_XAnimExists
==============
*/

bool __fastcall CG_Gesture_XAnimExists(const Gesture *gesture, const GestureMappingInfo *mappingInfo, const PlayerHandIndex hand, const bool isDualWield)
{
  return ?CG_Gesture_XAnimExists@@YA_NPEBUGesture@@PEBUGestureMappingInfo@@W4PlayerHandIndex@@_N@Z(gesture, mappingInfo, hand, isDualWield);
}

/*
==============
CG_Gesture_ProcessViewmodel
==============
*/

void __fastcall CG_Gesture_ProcessViewmodel(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, const Weapon *weapon)
{
  ?CG_Gesture_ProcessViewmodel@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@W4PlayerHandIndex@@AEBUWeapon@@@Z(localClientNum, ps, hand, weapon);
}

/*
==============
CG_Gesture_GetAnimTimeParameterIndex
==============
*/

unsigned __int16 __fastcall CG_Gesture_GetAnimTimeParameterIndex(const unsigned int slot)
{
  return ?CG_Gesture_GetAnimTimeParameterIndex@@YAGI@Z(slot);
}

/*
==============
CG_Gesture_GetAnimationState
==============
*/

GestureAnimationState __fastcall CG_Gesture_GetAnimationState(const LocalClientNum_t localClientNum, const unsigned int slot, const PlayerHandIndex hand)
{
  return ?CG_Gesture_GetAnimationState@@YA?AW4GestureAnimationState@@W4LocalClientNum_t@@IW4PlayerHandIndex@@@Z(localClientNum, slot, hand);
}

/*
==============
CG_Gesture_ClearMainTreeWeights
==============
*/

void __fastcall CG_Gesture_ClearMainTreeWeights(LocalClientNum_t localClientNum, PlayerHandIndex hand)
{
  ?CG_Gesture_ClearMainTreeWeights@@YAXW4LocalClientNum_t@@W4PlayerHandIndex@@@Z(localClientNum, hand);
}

/*
==============
CG_Gesture_StopAnims
==============
*/

void __fastcall CG_Gesture_StopAnims(const playerState_s *ps, const unsigned int slot, DObj *obj, const float blendOut, const bool blendOutGestureAnims, const bool blendOutToZero)
{
  ?CG_Gesture_StopAnims@@YAXPEBUplayerState_s@@IPEAUDObj@@M_N2@Z(ps, slot, obj, blendOut, blendOutGestureAnims, blendOutToZero);
}

/*
==============
CG_Gesture_UpdateMainTree
==============
*/

void __fastcall CG_Gesture_UpdateMainTree(LocalClientNum_t localClientNum, DObj *obj, const playerState_s *ps, const PlayerHandIndex hand, bool inState, bool outState, float *outMainTreeWeight)
{
  ?CG_Gesture_UpdateMainTree@@YAXW4LocalClientNum_t@@PEAUDObj@@PEBUplayerState_s@@W4PlayerHandIndex@@_N4PEAM@Z(localClientNum, obj, ps, hand, inState, outState, outMainTreeWeight);
}

/*
==============
CG_Gesture_StartAnims
==============
*/

void __fastcall CG_Gesture_StartAnims(LocalClientNum_t localClientNum, const Gesture *gesture, const playerState_s *ps, const unsigned int slot, DObj *obj, const PlayerHandIndex hand, const bool isDualWield, const float blendTime)
{
  ?CG_Gesture_StartAnims@@YAXW4LocalClientNum_t@@PEBUGesture@@PEBUplayerState_s@@IPEAUDObj@@W4PlayerHandIndex@@_NM@Z(localClientNum, gesture, ps, slot, obj, hand, isDualWield, blendTime);
}

/*
==============
CG_Gesture_LoadXAnimFromAsset
==============
*/

void __fastcall CG_Gesture_LoadXAnimFromAsset(const Gesture *gesture, WeaponXAnim *pAnims, const GestureMappingInfo *mappingInfo, weapAnimFiles_t targetIndex, PlayerHandIndex hand, bool isDualWield)
{
  ?CG_Gesture_LoadXAnimFromAsset@@YAXPEBUGesture@@PEAUWeaponXAnim@@PEBUGestureMappingInfo@@W4weapAnimFiles_t@@W4PlayerHandIndex@@_N@Z(gesture, pAnims, mappingInfo, targetIndex, hand, isDualWield);
}

/*
==============
CG_Gesture_CalcEaseTime
==============
*/

double __fastcall CG_Gesture_CalcEaseTime(float newTimeLinear)
{
  double result; 

  *(float *)&result = ?CG_Gesture_CalcEaseTime@@YAMM@Z(newTimeLinear);
  return result;
}

/*
==============
CG_Gesture_StopMainAnimations
==============
*/

void __fastcall CG_Gesture_StopMainAnimations(DObj *obj, XAnimTree *animTree, const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, float blendTime)
{
  ?CG_Gesture_StopMainAnimations@@YAXPEAUDObj@@PEAUXAnimTree@@PEBUGesture@@IW4PlayerHandIndex@@_NM@Z(obj, animTree, gesture, slot, hand, isDualWield, blendTime);
}

/*
==============
CG_Gesture_SwitchMainAnimations
==============
*/

void __fastcall CG_Gesture_SwitchMainAnimations(LocalClientNum_t localClientNum, DObj *obj, XAnimTree *animTree, const Gesture *gesture, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const float blendTime, const bool crossfadeInOut, const float crossfadeOutStartTime)
{
  ?CG_Gesture_SwitchMainAnimations@@YAXW4LocalClientNum_t@@PEAUDObj@@PEAUXAnimTree@@PEBUGesture@@PEBUplayerState_s@@IW4PlayerHandIndex@@_NM6M@Z(localClientNum, obj, animTree, gesture, ps, slot, hand, isDualWield, blendTime, crossfadeInOut, crossfadeOutStartTime);
}

/*
==============
CG_Gesture_CreateTree
==============
*/

void __fastcall CG_Gesture_CreateTree(LocalClientNum_t localClientNum, const playerState_s *ps, WeaponXAnim *pAnims, const PlayerHandIndex hand, const bool isDualWield, bool additiveAnimations)
{
  ?CG_Gesture_CreateTree@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEAUWeaponXAnim@@W4PlayerHandIndex@@_N_N@Z(localClientNum, ps, pAnims, hand, isDualWield, additiveAnimations);
}

/*
==============
CG_Gesture_Shutdown
==============
*/

void __fastcall CG_Gesture_Shutdown(LocalClientNum_t localClientNum, const unsigned int slot, const PlayerHandIndex hand)
{
  ?CG_Gesture_Shutdown@@YAXW4LocalClientNum_t@@IW4PlayerHandIndex@@@Z(localClientNum, slot, hand);
}

/*
==============
CG_Gesture_ShouldBlendOutOfAnim
==============
*/

bool __fastcall CG_Gesture_ShouldBlendOutOfAnim(const LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, const GestureWeaponAnimBlendOutInfo **outBlendOutInfo)
{
  return ?CG_Gesture_ShouldBlendOutOfAnim@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@W4PlayerHandIndex@@PEAPEBUGestureWeaponAnimBlendOutInfo@@@Z(localClientNum, ps, hand, outBlendOutInfo);
}

/*
==============
CG_Gesture_UpdateAkimboAnims
==============
*/

void __fastcall CG_Gesture_UpdateAkimboAnims(LocalClientNum_t localClientNum, const playerState_s *ps, DObj *obj, const PlayerHandIndex hand, const bool isDualWield, const float mainTreeWeight, const bool inState, const bool outState, const bool useIdleLeft)
{
  ?CG_Gesture_UpdateAkimboAnims@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEAUDObj@@W4PlayerHandIndex@@_NM444@Z(localClientNum, ps, obj, hand, isDualWield, mainTreeWeight, inState, outState, useIdleLeft);
}

/*
==============
CG_Gesture_ClearEmptyAnimNodes
==============
*/

void __fastcall CG_Gesture_ClearEmptyAnimNodes(DObj *viewModelDObj)
{
  ?CG_Gesture_ClearEmptyAnimNodes@@YAXPEAUDObj@@@Z(viewModelDObj);
}

/*
==============
CG_Gesture_GetInfo
==============
*/

GestureSlotInfo *__fastcall CG_Gesture_GetInfo(LocalClientNum_t localClientNum, unsigned int slot, PlayerHandIndex hand)
{
  return ?CG_Gesture_GetInfo@@YAPEAUGestureSlotInfo@@W4LocalClientNum_t@@IW4PlayerHandIndex@@@Z(localClientNum, slot, hand);
}

/*
==============
CG_Gesture_ClearClientInfo
==============
*/

void __fastcall CG_Gesture_ClearClientInfo(LocalClientNum_t localClientNum)
{
  ?CG_Gesture_ClearClientInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Gesture_GetAnimChildIndex
==============
*/

weapAnimFiles_t __fastcall CG_Gesture_GetAnimChildIndex(const unsigned int gestureSlot, unsigned int mappingIndex)
{
  return ?CG_Gesture_GetAnimChildIndex@@YA?AW4weapAnimFiles_t@@II@Z(gestureSlot, mappingIndex);
}

/*
==============
CG_Gesture_TransitionKillcamGestures
==============
*/

void __fastcall CG_Gesture_TransitionKillcamGestures(LocalClientNum_t localClientNum, const playerState_s *const ps)
{
  ?CG_Gesture_TransitionKillcamGestures@@YAXW4LocalClientNum_t@@QEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CG_Gesture_Initialize
==============
*/

void __fastcall CG_Gesture_Initialize(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand)
{
  ?CG_Gesture_Initialize@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@IW4PlayerHandIndex@@@Z(localClientNum, ps, slot, hand);
}

/*
==============
CG_Gesture_ForceRestoreAnims
==============
*/

void __fastcall CG_Gesture_ForceRestoreAnims(LocalClientNum_t localClientNum, const playerState_s *ps, const Weapon *r_weapon)
{
  ?CG_Gesture_ForceRestoreAnims@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@AEBUWeapon@@@Z(localClientNum, ps, r_weapon);
}

/*
==============
CG_Gesture_GetWeaponAnims
==============
*/

void __fastcall CG_Gesture_GetWeaponAnims(const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, weapAnimFiles_t *outMainAnimation, weapAnimFiles_t *outInAnimation, weapAnimFiles_t *outOutAnimation)
{
  ?CG_Gesture_GetWeaponAnims@@YAXPEBUGesture@@IW4PlayerHandIndex@@_NPEAW4weapAnimFiles_t@@33@Z(gesture, slot, hand, isDualWield, outMainAnimation, outInAnimation, outOutAnimation);
}

/*
==============
CG_Gesture_CreateWalkAnimOverrides
==============
*/

void __fastcall CG_Gesture_CreateWalkAnimOverrides(const Gesture *gesture, const unsigned int slot, WeaponXAnim *pAnims)
{
  ?CG_Gesture_CreateWalkAnimOverrides@@YAXPEBUGesture@@IPEAUWeaponXAnim@@@Z(gesture, slot, pAnims);
}

/*
==============
CG_Gesture_GetAnimParentIndex
==============
*/

weapAnimFiles_t __fastcall CG_Gesture_GetAnimParentIndex(const unsigned int gestureSlot, unsigned int mappingIndex)
{
  return ?CG_Gesture_GetAnimParentIndex@@YA?AW4weapAnimFiles_t@@II@Z(gestureSlot, mappingIndex);
}

/*
==============
CG_Gesture_UpdateAnimationState
==============
*/

void __fastcall CG_Gesture_UpdateAnimationState(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const Gesture *gesture, const XAnimTree *animTree)
{
  ?CG_Gesture_UpdateAnimationState@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@IW4PlayerHandIndex@@_NPEBUGesture@@PEBUXAnimTree@@@Z(localClientNum, ps, slot, hand, isDualWield, gesture, animTree);
}

/*
==============
CG_Gesture_GetMainAnimMappings
==============
*/

void __fastcall CG_Gesture_GetMainAnimMappings(const GestureDirectionalAssetIndex mainIndex, const GestureDirectionalAssetIndex inIndex, const GestureDirectionalAssetIndex outIndex, const GestureMappingInfo **outMain, const GestureMappingInfo **outIn, const GestureMappingInfo **outOut)
{
  ?CG_Gesture_GetMainAnimMappings@@YAXW4GestureDirectionalAssetIndex@@00PEAPEBUGestureMappingInfo@@11@Z(mainIndex, inIndex, outIndex, outMain, outIn, outOut);
}

/*
==============
CG_Gesture_CalcYawRange
==============
*/

double __fastcall CG_Gesture_CalcYawRange(const GestureLookAroundSettings *lookAroundSettings, const float oldTime, const float yaw, const float time, CG_Gesture_LookAroundBlendNode *outNode)
{
  double result; 

  *(float *)&result = ?CG_Gesture_CalcYawRange@@YAMPEBUGestureLookAroundSettings@@MMMPEAUCG_Gesture_LookAroundBlendNode@@@Z(lookAroundSettings, oldTime, yaw, time, outNode);
  return result;
}

/*
==============
CG_Gesture_Normalize
==============
*/

double __fastcall CG_Gesture_Normalize(float value, float min, float max)
{
  double result; 

  *(float *)&result = ?CG_Gesture_Normalize@@YAMMMM@Z(value, min, max);
  return result;
}

/*
==============
CG_Gesture_CalculateSlotBlendOverride
==============
*/

void __fastcall CG_Gesture_CalculateSlotBlendOverride(const playerState_s *ps, const unsigned int slot, const int gameTime, const GestureAnimationState animState, float *outOutDuration, float *outBlendInEndTime)
{
  ?CG_Gesture_CalculateSlotBlendOverride@@YAXPEBUplayerState_s@@IHW4GestureAnimationState@@PEAM2@Z(ps, slot, gameTime, animState, outOutDuration, outBlendInEndTime);
}

/*
==============
CG_Gesture_UpdateBlendingParameters
==============
*/

void __fastcall CG_Gesture_UpdateBlendingParameters(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const Gesture *gesture, const XAnimTree *animTree, float *outBlendTime, bool *outShouldCrossfadeInOut, bool *outShouldBlendOut, float *outCrossfadeOutStartTime, bool *outShouldBlendOutToZero)
{
  ?CG_Gesture_UpdateBlendingParameters@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@IW4PlayerHandIndex@@_NPEBUGesture@@PEBUXAnimTree@@PEAMPEA_N767@Z(localClientNum, ps, slot, hand, isDualWield, gesture, animTree, outBlendTime, outShouldCrossfadeInOut, outShouldBlendOut, outCrossfadeOutStartTime, outShouldBlendOutToZero);
}

/*
==============
CG_Gesture_ShutdownSlots
==============
*/

void __fastcall CG_Gesture_ShutdownSlots(LocalClientNum_t localClientNum, const PlayerHandIndex hand)
{
  ?CG_Gesture_ShutdownSlots@@YAXW4LocalClientNum_t@@W4PlayerHandIndex@@@Z(localClientNum, hand);
}

/*
==============
CG_Gesture_ArchiveState
==============
*/

void __fastcall CG_Gesture_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile, bool isWriting)
{
  ?CG_Gesture_ArchiveState@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@_N@Z(localClientNum, memFile, isWriting);
}

/*
==============
CG_Gesture_DirectionalBlendNode_Update
==============
*/
void CG_Gesture_DirectionalBlendNode_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  bool v22; 
  char v60; 
  unsigned int v68; 
  unsigned int ChildAt; 
  bool IsValidNode; 
  float fmt; 
  float fmta; 
  float fmtb; 
  int forceBlendTime; 
  float objID; 
  vec3_t result; 
  __int128 v87; 
  char v98; 

  __asm
  {
    vmovaps [rsp+168h+var_88], xmm10
    vmovaps [rsp+168h+var_98], xmm11
    vmovaps [rsp+168h+var_A8], xmm12
    vmovaps [rsp+168h+var_B8], xmm13
  }
  _R12 = animInfo;
  _RSI = (CG_Gesture_DirectionalBlendNode *)nodeData;
  if ( !*((_QWORD *)nodeData + 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3064, ASSERT_TYPE_ASSERT, "(node->directionalSettings != 0)", (const char *)&queryFormat, "node->directionalSettings != NULL") )
    __debugbreak();
  CG_Gesture_DirectionalBlendNode_CalculateRelativeTargetVector(_RSI, &result);
  v22 = !_RSI->initialized;
  __asm
  {
    vmovss  xmm12, dword ptr [rsp+168h+result+8]
    vmovss  xmm13, dword ptr [rsp+168h+result+4]
    vmovss  xmm11, dword ptr [rsp+168h+result]
  }
  if ( !_RSI->initialized )
  {
    _RSI->initialized = 1;
    __asm
    {
      vmovss  dword ptr [rsi+34h], xmm11
      vmovss  dword ptr [rsi+38h], xmm13
      vmovss  dword ptr [rsi+3Ch], xmm12
    }
  }
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vucomiss xmm10, dword ptr [r12+3Ch]
  }
  if ( v22 )
  {
    __asm { vmovss  dword ptr [rsp+168h+fmt], xmm10 }
    XAnimClearTreeGoalWeights(obj->tree, 0, XANIM_SUBTREE_DEFAULT, _R12->animIndex, fmt, 1, NULL, LINEAR);
  }
  else
  {
    __asm { vcomiss xmm13, xmm10 }
    _RBX = _RSI->directionalSettings;
    __asm
    {
      vmovaps [rsp+168h+var_48], xmm6
      vmovaps [rsp+168h+var_58], xmm7
      vmovaps [rsp+168h+var_68], xmm8
      vmovaps [rsp+168h+var_78], xmm9
      vxorps  xmm0, xmm0, xmm0
      vmovaps [rsp+168h+var_C8], xmm14
      vmovaps [rsp+168h+var_D8], xmm15
      vmovups [rsp+168h+var_F8], xmm0
    }
    if ( v22 )
      __asm { vmovss  xmm15, dword ptr [rbx+18h] }
    else
      __asm { vmovss  xmm15, dword ptr [rbx+14h] }
    __asm { vcomiss xmm12, xmm10 }
    if ( v22 )
      __asm { vmovss  xmm14, dword ptr [rbx+20h] }
    else
      __asm { vmovss  xmm14, dword ptr [rbx+1Ch] }
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm0, xmm13, xmm9; value
      vmovaps xmm2, xmm15; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, xmm0
      vandps  xmm0, xmm12, xmm9; value
      vmovaps xmm2, xmm14; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, [rsp+168h+dtime]; dTime
      vmovaps xmm1, xmm8; angle
      vmovaps xmm7, xmm0
    }
    *(float *)&_XMM0 = CG_Gesture_CalcLerpRate(_RBX, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, [rsp+168h+dtime]; dTime
      vmovaps xmm1, xmm7; angle
      vmovaps xmm8, xmm0
    }
    CG_Gesture_CalcLerpRate(_RBX, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm3, xmm13, xmm8
      vmovss  dword ptr [rsi+34h], xmm11
      vmovss  xmm11, cs:__real@3f800000
      vsubss  xmm1, xmm11, xmm8
      vmulss  xmm4, xmm1, dword ptr [rsi+38h]
      vsubss  xmm1, xmm11, xmm0
      vaddss  xmm6, xmm4, xmm3
      vmulss  xmm3, xmm1, dword ptr [rsi+3Ch]
      vmulss  xmm0, xmm12, xmm0
      vaddss  xmm7, xmm3, xmm0
      vandps  xmm0, xmm6, xmm9; value
      vmovaps xmm2, xmm15; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovss  dword ptr [rsi+3Ch], xmm7
      vmovss  dword ptr [rsi+38h], xmm6
    }
    *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  xmm3, dword ptr [rsi+3Ch] }
    _RAX = 4i64;
    __asm
    {
      vcomiss xmm6, xmm10
      vmovaps xmm2, xmm14; max
    }
    if ( v60 | v22 )
      _RAX = 8i64;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1; min
      vmovss  dword ptr [rsp+rax+168h+var_F8], xmm0
      vandps  xmm0, xmm3, xmm9; value
    }
    *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm15, [rsp+168h+var_D8] }
    _R15 = &v87;
    __asm
    {
      vmovaps xmm14, [rsp+168h+var_C8]
      vmovaps xmm9, [rsp+168h+var_78]
      vmovaps xmm8, [rsp+168h+var_68]
    }
    v68 = 0;
    __asm
    {
      vmovaps xmm6, [rsp+168h+var_48]
      vcomiss xmm7, xmm10
      vmovaps xmm7, [rsp+168h+var_58]
    }
    _RAX = 0i64;
    __asm { vmovss  dword ptr [rsp+rax+168h+var_F8], xmm0 }
    *(_QWORD *)result.v = obj->tree->anims;
    do
    {
      ChildAt = XAnimGetChildAt(obj->tree->anims, _R12->animIndex, v68);
      IsValidNode = XAnimIsValidNode(*(const XAnim_s **)result.v, ChildAt);
      if ( IsValidNode )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vcomiss xmm0, xmm10
          vmovss  dword ptr [rsp+168h+objID], xmm11
          vmovss  [rsp+168h+forceBlendTime], xmm10
          vmovss  dword ptr [rsp+168h+fmt], xmm0
        }
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, fmta, *(float *)&forceBlendTime, objID, (scr_string_t)0, IsValidNode, 0, LINEAR, modelNameMap);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+30h]
          vmovss  dword ptr [rsp+168h+fmt], xmm0
        }
        XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt, fmtb);
      }
      ++v68;
      _R15 = (__int128 *)((char *)_R15 + 4);
    }
    while ( v68 < 4 );
  }
  _R11 = &v98;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-68h]
    vmovaps xmm11, xmmword ptr [r11-78h]
    vmovaps xmm12, xmmword ptr [r11-88h]
    vmovaps xmm13, xmmword ptr [r11-98h]
  }
}

/*
==============
CG_Gesture_DirectionalBlendNode_Archive
==============
*/
void CG_Gesture_DirectionalBlendNode_Archive(void *nodeData, MemoryFile *memFile)
{
  MemFile_ArchiveData(memFile, 12, nodeData);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 12);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 24);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 12);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 52);
  MemFile_ArchiveData(memFile, 1, (char *)nodeData + 64);
}

/*
==============
CG_Gesture_LookAroundBlendNode_Update
==============
*/
void CG_Gesture_LookAroundBlendNode_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  unsigned int v20; 
  XAnim_s *v23; 
  unsigned int ChildAt; 
  unsigned int v25; 
  XModelNameMap *cachedModelNameMap; 
  bool v31; 
  bool IsValidNode; 
  char v44; 
  const GestureLookAroundSettings *lookAroundSettings; 
  XAnim_s *v55; 
  unsigned int v56; 
  unsigned int v59; 
  bool HasFinished; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float goalTime; 
  float goalTimea; 
  float goalTimeb; 
  float goalTimec; 
  float objID; 
  float objIDa; 
  float objIDb; 
  float objIDc; 
  char v90; 
  void *retaddr; 
  unsigned int animIndex; 
  int v93; 
  XAnim_s *anims; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _R15 = animInfo;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _R14 = (CG_Gesture_LookAroundBlendNode *)nodeData;
  __asm
  {
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps [rsp+108h+var_98], xmm11
    vmovaps [rsp+108h+var_A8], xmm12
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3241, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3242, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3243, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !_R14->lookAroundSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3247, ASSERT_TYPE_ASSERT, "(node->lookAroundSettings != 0)", (const char *)&queryFormat, "node->lookAroundSettings != NULL") )
    __debugbreak();
  v20 = _R15->animIndex;
  __asm
  {
    vmovss  xmm12, dword ptr [r14]
    vmovss  xmm10, dword ptr [r14+4]
  }
  v23 = obj->tree->anims;
  anims = v23;
  ChildAt = XAnimGetChildAt(v23, v20, 2u);
  animIndex = ChildAt;
  v25 = XAnimGetChildAt(obj->tree->anims, _R15->animIndex, 1u);
  *(double *)&_XMM0 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v25);
  cachedModelNameMap = modelNameMap;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm8, cs:__real@3f000000
    vmovaps xmm11, xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  v31 = !_R14->initialized;
  if ( !_R14->initialized )
  {
    _R14->initialized = 1;
    _R14->weaponCheckInterruptible = -1.0;
    __asm
    {
      vmovss  dword ptr [r14+20h], xmm10
      vmovaps xmm11, xmm8
    }
    IsValidNode = XAnimIsValidNode(v23, ChildAt);
    v31 = !IsValidNode;
    if ( IsValidNode )
    {
      __asm
      {
        vmovss  dword ptr [rsp+108h+objID], xmm7
        vmovss  [rsp+108h+goalTime], xmm6
        vmovss  dword ptr [rsp+108h+fmt], xmm6
      }
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, fmt, goalTime, objID, (scr_string_t)0, 0, 0, LINEAR, cachedModelNameMap);
      *(double *)&_XMM0 = XAnimGetNotetrackTimeFromCharString(v23, ChildAt, "interruptible");
      __asm { vmovss  dword ptr [r14+2Ch], xmm0 }
    }
  }
  __asm { vucomiss xmm6, dword ptr [r15+3Ch] }
  if ( v31 )
  {
    __asm { vmovss  dword ptr [rsp+108h+fmt], xmm6 }
    XAnimClearTreeGoalWeights(obj->tree, 0, XANIM_SUBTREE_DEFAULT, _R15->animIndex, fmta, 1, NULL, LINEAR);
  }
  else
  {
    _RBX = DCONST_DVARMPFLT_player_view_pitch_up;
    __asm { vmovaps [rsp+108h+var_78], xmm9 }
    if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm9, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARMPFLT_player_view_pitch_down;
    if ( !DCONST_DVARMPFLT_player_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_down") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmulss  xmm4, xmm12, cs:__real@3b360b61
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm4, xmm8
      vroundss xmm3, xmm1, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; value
      vcomiss xmm1, xmm6
      vxorps  xmm1, xmm1, xmm1; min
    }
    if ( v44 )
    {
      __asm { vmovaps xmm2, xmm9; max }
      *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vaddss  xmm1, xmm0, xmm7
        vmulss  xmm0, xmm1, xmm8
      }
    }
    else
    {
      __asm { vmovss  xmm2, dword ptr [rbx+28h]; max }
      *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm8
        vsubss  xmm0, xmm8, xmm1; val
      }
    }
    __asm
    {
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  xmm3, [rsp+108h+dtime]; time }
    lookAroundSettings = _R14->lookAroundSettings;
    __asm
    {
      vmovaps xmm2, xmm10; yaw
      vmovaps xmm1, xmm11; oldTime
      vmovss  [rsp+108h+arg_8], xmm0
    }
    *(double *)&_XMM0 = CG_Gesture_CalcYawRange(lookAroundSettings, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, _R14);
    v55 = anims;
    v56 = 0;
    __asm { vmovaps xmm9, [rsp+108h+var_78] }
    _RSI = &v93;
    __asm { vmovss  [rsp+108h+arg_C], xmm0 }
    do
    {
      v59 = XAnimGetChildAt(obj->tree->anims, _R15->animIndex, v56);
      if ( XAnimIsValidNode(v55, v59) )
      {
        __asm
        {
          vmovss  dword ptr [rsp+108h+objID], xmm7
          vmovss  [rsp+108h+goalTime], xmm6
          vmovss  dword ptr [rsp+108h+fmt], xmm7
        }
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v59, fmtb, goalTimea, objIDa, (scr_string_t)0, 0, 0, LINEAR, cachedModelNameMap);
        __asm { vmovss  dword ptr [rsp+108h+fmt], xmm6 }
        XAnimSetAnimRate(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v59, fmtc);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vmovss  dword ptr [rsp+108h+fmt], xmm0
        }
        XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v59, fmtd);
      }
      ++v56;
      ++_RSI;
    }
    while ( v56 < 2 );
    if ( animIndex )
    {
      *(double *)&_XMM0 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
      __asm { vmovaps xmm8, xmm0 }
      HasFinished = XAnimHasFinished(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
      if ( _R14->playWeaponCheck )
      {
        __asm { vcomiss xmm8, xmm6 }
        if ( !_R14->playWeaponCheck )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3e4ccccd
            vmovss  dword ptr [rsp+108h+objID], xmm7
            vmovss  [rsp+108h+goalTime], xmm0
            vmovss  dword ptr [rsp+108h+fmt], xmm7
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, fmte, goalTimeb, objIDb, (scr_string_t)0, 1u, 0, LINEAR, cachedModelNameMap);
          goto LABEL_39;
        }
        if ( !HasFinished )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r14+2Ch]
            vcomiss xmm0, xmm6
          }
          goto LABEL_39;
        }
      }
      else if ( !HasFinished )
      {
        goto LABEL_39;
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3e4ccccc
        vmovss  dword ptr [rsp+108h+objID], xmm7
        vmovss  [rsp+108h+goalTime], xmm0
        vmovss  dword ptr [rsp+108h+fmt], xmm6
      }
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, fmtf, goalTimec, objIDc, (scr_string_t)0, 0, 0, LINEAR, cachedModelNameMap);
    }
  }
LABEL_39:
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CG_Gesture_LookAroundBlendNode_Archive
==============
*/
void CG_Gesture_LookAroundBlendNode_Archive(void *nodeData, MemoryFile *memFile)
{
  MemFile_ArchiveData(memFile, 12, nodeData);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 6);
  MemFile_ArchiveData(memFile, 1, (char *)nodeData + 28);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 8);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 9);
  MemFile_ArchiveData(memFile, 1, (char *)nodeData + 40);
  MemFile_ArchiveData(memFile, 1, (char *)nodeData + 41);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 11);
}

/*
==============
CG_Gesture_IKTarget_Update
==============
*/
void CG_Gesture_IKTarget_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  refdef_t *v4; 

  v4 = g_activeRefDef;
  if ( g_activeRefDef )
  {
    *((_DWORD *)nodeData + 6) = LODWORD(g_activeRefDef->viewOffset.v[0]);
    *((_DWORD *)nodeData + 7) = LODWORD(v4->viewOffset.v[1]);
    *((_DWORD *)nodeData + 8) = LODWORD(v4->viewOffset.v[2]);
  }
}

/*
==============
CG_Gesture_IKTarget_Calc
==============
*/
void CG_Gesture_IKTarget_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  XAnimIKDObjData *dObjData; 
  const float4 *v29; 
  const float4 *v30; 
  float v31; 
  __int128 v32; 
  vec4_t quat; 

  _RSI = (const vec3_t *)nodeData;
  dObjData = animCalcInfo->ikCalcInfo->dObjData;
  if ( (dObjData->boneInfo[0].allBonesFound || dObjData->boneInfo[0].targetBoneIndex != 255) && !bitarray_base<bitarray<256>>::testBit(&animCalcInfo->ignorePartBits, dObjData->boneInfo[0].targetBoneIndex) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovaps [rsp+0C8h+var_38], xmm6
      vsubss  xmm6, xmm0, dword ptr [rsi+18h]
      vmovss  xmm0, dword ptr [rsi+8]
      vmovaps [rsp+0C8h+var_48], xmm7
      vsubss  xmm7, xmm1, dword ptr [rsi+1Ch]
      vmovaps [rsp+0C8h+var_58], xmm8
      vsubss  xmm8, xmm0, dword ptr [rsi+20h]
    }
    AnglesToQuat(_RSI + 1, &quat);
    __asm
    {
      vmovss  xmm2, [rsp+0C8h+weightScale]
      vmovups xmm0, xmmword ptr [rsp+0C8h+quat]
    }
    HIDWORD(v32) = 0;
    __asm
    {
      vmovups xmm1, xmmword ptr [rsp+40h]
      vmovss  xmm1, xmm1, xmm6
      vinsertps xmm1, xmm1, xmm7, 10h
      vinsertps xmm1, xmm1, xmm8, 20h ; ' '
      vmovss  [rsp+0C8h+var_98], xmm2
    }
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, dObjData->boneInfo[0].targetBoneIndex, v29, v30, v31);
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_58]
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
}

/*
==============
CG_Gesture_IKTarget_Archive
==============
*/
void CG_Gesture_IKTarget_Archive(void *nodeData, MemoryFile *memFile)
{
  MemFile_ArchiveData(memFile, 12, nodeData);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 12);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 24);
}

/*
==============
CG_Gesture_ArchiveState
==============
*/
void CG_Gesture_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile, bool isWriting)
{
  cg_t *LocalClientGlobals; 
  PlayerHandIndex i; 
  unsigned int j; 
  GestureSlotInfo *Info; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  MemFile_ArchiveData(memFile, 1, &LocalClientGlobals->gestureInfo.isBlendingSlots);
  MemFile_ArchiveData(memFile, 304, &LocalClientGlobals->gestureInfo);
  if ( !isWriting )
  {
    for ( i = WEAPON_HAND_DEFAULT; (unsigned int)i < NUM_WEAPON_HANDS; ++i )
    {
      for ( j = 0; j < 2; ++j )
      {
        Info = CG_Gesture_GetInfo(localClientNum, j, i);
        if ( Info->animState )
          Info->restoreAnims = 1;
      }
    }
  }
}

/*
==============
CG_Gesture_AssignAnimationSlots
==============
*/
void CG_Gesture_AssignAnimationSlots(void)
{
  int v0; 
  GestureAnimSlotInfo (*v1)[22]; 
  int v2; 
  int v3; 
  int v4; 
  const GestureMappingInfo *v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = 16;
  v1 = s_animSlotMappings;
  v2 = 2;
  v3 = 16;
  v7 = 2i64;
  v4 = 123;
  do
  {
    v5 = s_blendTreeMappings;
    v6 = 22i64;
    do
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 265, ASSERT_TYPE_ASSERT, "(mappingInfo)", (const char *)&queryFormat, "mappingInfo") )
        __debugbreak();
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 267, ASSERT_TYPE_ASSERT, "(animMappingInfo)", (const char *)&queryFormat, "animMappingInfo") )
        __debugbreak();
      switch ( v5->nodeType )
      {
        case GESTURE_NODE_TYPE_RELATIVE:
          *(_DWORD *)v1 = v3;
          (*v1)[0].childIndex = v0;
          if ( (unsigned int)(v0 - 16) > 0xB && (unsigned int)(v0 - 123) > 0x27 && v0 != 15 && (unsigned int)(v0 - 2) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 246, ASSERT_TYPE_ASSERT, "(( ( currentSlot >= WEAP_ANIM_GESTURE_RELATIVE_START && currentSlot <= WEAP_ANIM_GESTURE_RELATIVE_END ) || ( currentSlot >= WEAP_ANIM_GESTURE_ADDITIVE_START && currentSlot <= WEAP_ANIM_GESTURE_ADDITIVE_END ) || ( currentSlot == WEAP_ANIM_GESTURE_LEFT_IDLE ) || (currentSlot >= WEAP_ANIM_GESTURE_IK_TARGET_1 && currentSlot <= WEAP_ANIM_GESTURE_IK_TARGET_4 ) ))", (const char *)&queryFormat, "IS_GESTURE_ANIMATION( currentSlot )") )
            __debugbreak();
          ++v0;
          break;
        case GESTURE_NODE_TYPE_RELATIVE_ROOT:
          *(_DWORD *)v1 = v0;
          v3 = v0;
          if ( (unsigned int)(v0 - 16) > 0xB && (unsigned int)(v0 - 123) > 0x27 && v0 != 15 && (unsigned int)(v0 - 2) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 246, ASSERT_TYPE_ASSERT, "(( ( currentSlot >= WEAP_ANIM_GESTURE_RELATIVE_START && currentSlot <= WEAP_ANIM_GESTURE_RELATIVE_END ) || ( currentSlot >= WEAP_ANIM_GESTURE_ADDITIVE_START && currentSlot <= WEAP_ANIM_GESTURE_ADDITIVE_END ) || ( currentSlot == WEAP_ANIM_GESTURE_LEFT_IDLE ) || (currentSlot >= WEAP_ANIM_GESTURE_IK_TARGET_1 && currentSlot <= WEAP_ANIM_GESTURE_IK_TARGET_4 ) ))", (const char *)&queryFormat, "IS_GESTURE_ANIMATION( currentSlot )") )
            __debugbreak();
          (*v1)[0].childIndex = ++v0;
          break;
        case GESTURE_NODE_TYPE_ADDITIVE:
          *(_DWORD *)v1 = v4;
          if ( (unsigned int)(v4 - 16) > 0xB && (unsigned int)(v4 - 123) > 0x27 && v4 != 15 && (unsigned int)(v4 - 2) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 246, ASSERT_TYPE_ASSERT, "(( ( currentSlot >= WEAP_ANIM_GESTURE_RELATIVE_START && currentSlot <= WEAP_ANIM_GESTURE_RELATIVE_END ) || ( currentSlot >= WEAP_ANIM_GESTURE_ADDITIVE_START && currentSlot <= WEAP_ANIM_GESTURE_ADDITIVE_END ) || ( currentSlot == WEAP_ANIM_GESTURE_LEFT_IDLE ) || (currentSlot >= WEAP_ANIM_GESTURE_IK_TARGET_1 && currentSlot <= WEAP_ANIM_GESTURE_IK_TARGET_4 ) ))", (const char *)&queryFormat, "IS_GESTURE_ANIMATION( currentSlot )") )
            __debugbreak();
          (*v1)[0].childIndex = v4 + 1;
          if ( (unsigned int)(v4 - 15) > 0xB && (unsigned int)(v4 - 122) > 0x27 && v4 != 14 && (unsigned int)(v4 - 1) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 246, ASSERT_TYPE_ASSERT, "(( ( currentSlot >= WEAP_ANIM_GESTURE_RELATIVE_START && currentSlot <= WEAP_ANIM_GESTURE_RELATIVE_END ) || ( currentSlot >= WEAP_ANIM_GESTURE_ADDITIVE_START && currentSlot <= WEAP_ANIM_GESTURE_ADDITIVE_END ) || ( currentSlot == WEAP_ANIM_GESTURE_LEFT_IDLE ) || (currentSlot >= WEAP_ANIM_GESTURE_IK_TARGET_1 && currentSlot <= WEAP_ANIM_GESTURE_IK_TARGET_4 ) ))", (const char *)&queryFormat, "IS_GESTURE_ANIMATION( currentSlot )") )
            __debugbreak();
          v4 += 2;
          break;
        case GESTURE_NODE_TYPE_ADDITIVE_DIRECTIONAL_BLEND:
        case GESTURE_NODE_TYPE_ADDITIVE_LOOK_AROUND:
          *(_DWORD *)v1 = v4;
          if ( (unsigned int)(v4 - 16) > 0xB && (unsigned int)(v4 - 123) > 0x27 && v4 != 15 && (unsigned int)(v4 - 2) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 246, ASSERT_TYPE_ASSERT, "(( ( currentSlot >= WEAP_ANIM_GESTURE_RELATIVE_START && currentSlot <= WEAP_ANIM_GESTURE_RELATIVE_END ) || ( currentSlot >= WEAP_ANIM_GESTURE_ADDITIVE_START && currentSlot <= WEAP_ANIM_GESTURE_ADDITIVE_END ) || ( currentSlot == WEAP_ANIM_GESTURE_LEFT_IDLE ) || (currentSlot >= WEAP_ANIM_GESTURE_IK_TARGET_1 && currentSlot <= WEAP_ANIM_GESTURE_IK_TARGET_4 ) ))", (const char *)&queryFormat, "IS_GESTURE_ANIMATION( currentSlot )") )
            __debugbreak();
          (*v1)[0].childIndex = ++v4;
          break;
        case GESTURE_NODE_TYPE_ADDITIVE_UNNORMALIZED:
          *(_DWORD *)v1 = v4;
          (*v1)[0].childIndex = v4;
          if ( (unsigned int)(v4 - 16) > 0xB && (unsigned int)(v4 - 123) > 0x27 && v4 != 15 && (unsigned int)(v4 - 2) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 246, ASSERT_TYPE_ASSERT, "(( ( currentSlot >= WEAP_ANIM_GESTURE_RELATIVE_START && currentSlot <= WEAP_ANIM_GESTURE_RELATIVE_END ) || ( currentSlot >= WEAP_ANIM_GESTURE_ADDITIVE_START && currentSlot <= WEAP_ANIM_GESTURE_ADDITIVE_END ) || ( currentSlot == WEAP_ANIM_GESTURE_LEFT_IDLE ) || (currentSlot >= WEAP_ANIM_GESTURE_IK_TARGET_1 && currentSlot <= WEAP_ANIM_GESTURE_IK_TARGET_4 ) ))", (const char *)&queryFormat, "IS_GESTURE_ANIMATION( currentSlot )") )
            __debugbreak();
          ++v4;
          break;
        case GESTURE_NODE_TYPE_IK_TARGET:
          *(_DWORD *)v1 = v2;
          if ( (unsigned int)(v2 - 16) > 0xB && (unsigned int)(v2 - 123) > 0x27 && v2 != 15 && (unsigned int)(v2 - 2) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 246, ASSERT_TYPE_ASSERT, "(( ( currentSlot >= WEAP_ANIM_GESTURE_RELATIVE_START && currentSlot <= WEAP_ANIM_GESTURE_RELATIVE_END ) || ( currentSlot >= WEAP_ANIM_GESTURE_ADDITIVE_START && currentSlot <= WEAP_ANIM_GESTURE_ADDITIVE_END ) || ( currentSlot == WEAP_ANIM_GESTURE_LEFT_IDLE ) || (currentSlot >= WEAP_ANIM_GESTURE_IK_TARGET_1 && currentSlot <= WEAP_ANIM_GESTURE_IK_TARGET_4 ) ))", (const char *)&queryFormat, "IS_GESTURE_ANIMATION( currentSlot )") )
            __debugbreak();
          (*v1)[0].childIndex = v2 + 1;
          if ( (unsigned int)(v2 - 15) > 0xB && (unsigned int)(v2 - 122) > 0x27 && v2 != 14 && (unsigned int)(v2 - 1) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 246, ASSERT_TYPE_ASSERT, "(( ( currentSlot >= WEAP_ANIM_GESTURE_RELATIVE_START && currentSlot <= WEAP_ANIM_GESTURE_RELATIVE_END ) || ( currentSlot >= WEAP_ANIM_GESTURE_ADDITIVE_START && currentSlot <= WEAP_ANIM_GESTURE_ADDITIVE_END ) || ( currentSlot == WEAP_ANIM_GESTURE_LEFT_IDLE ) || (currentSlot >= WEAP_ANIM_GESTURE_IK_TARGET_1 && currentSlot <= WEAP_ANIM_GESTURE_IK_TARGET_4 ) ))", (const char *)&queryFormat, "IS_GESTURE_ANIMATION( currentSlot )") )
            __debugbreak();
          v2 += 2;
          break;
        default:
          break;
      }
      v1 = (GestureAnimSlotInfo (*)[22])((char *)v1 + 8);
      ++v5;
      --v6;
    }
    while ( v6 );
    --v7;
  }
  while ( v7 );
}

/*
==============
CG_Gesture_CalcEaseTime
==============
*/

float __fastcall CG_Gesture_CalcEaseTime(double newTimeLinear)
{
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vsubss  xmm1, xmm2, xmm0
    vsubss  xmm3, xmm0, xmm2
    vcmpltss xmm0, xmm0, xmm2
    vblendvps xmm1, xmm3, xmm1, xmm0
    vmulss  xmm0, xmm1, cs:__real@40000000; val
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm6; max
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm6, xmm0
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Gesture_CalcLerpRate
==============
*/

double __fastcall CG_Gesture_CalcLerpRate(const GestureDirectionalSettings *settings, double angle, double dTime)
{
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, dword ptr [rcx+8]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = settings;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm11, xmm2
    vmovaps xmm6, xmm1
    vcomiss xmm6, cs:__real@3a83126f
    vmovss  xmm1, dword ptr [rbx]
    vsubss  xmm7, xmm1, dword ptr [rbx+8]
    vaddss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm6, xmm7
    vcomiss xmm6, xmm1
    vcomiss xmm6, xmm2
    vmovss  xmm0, cs:__real@3c23d70a
    vmulss  xmm0, xmm0, xmm11
    vmulss  xmm0, xmm0, cs:__real@42700000; val
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm7, [rsp+98h+var_28]
  }
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
CG_Gesture_CalcYawLerpInRate
==============
*/

float __fastcall CG_Gesture_CalcYawLerpInRate(const GestureLookAroundSettings *lookAroundSettings, double velocity)
{
  __asm
  {
    vandps  xmm3, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm3, cs:__real@3dcccccd
    vmovss  xmm0, dword ptr [rcx]
    vmovaps [rsp+38h+var_18], xmm6
    vmulss  xmm6, xmm0, cs:__real@41200000
    vmovaps xmm2, xmm1
    vmovss  xmm1, cs:__real@3e99999a; min
    vcomiss xmm3, xmm1
    vmovss  xmm2, cs:__real@3f4ccccd; max
    vcomiss xmm3, xmm2
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Gesture_CalcYawRange
==============
*/

double __fastcall CG_Gesture_CalcYawRange(const GestureLookAroundSettings *lookAroundSettings, double oldTime, double yaw, double time, CG_Gesture_LookAroundBlendNode *outNode)
{
  bool v22; 
  bool v23; 
  char v39; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RDI = lookAroundSettings;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0C8h+var_88], xmm14
    vmovaps [rsp+0C8h+var_98], xmm15
    vmovaps xmm14, xmm2
    vmovaps xmm12, xmm3
    vmovaps xmm11, xmm1
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  if ( !lookAroundSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3161, ASSERT_TYPE_ASSERT, "(lookAroundSettings)", (const char *)&queryFormat, "lookAroundSettings") )
    __debugbreak();
  _RBX = outNode;
  v22 = outNode == NULL;
  if ( !outNode )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3162, ASSERT_TYPE_ASSERT, "(outNode)", (const char *)&queryFormat, "outNode");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vucomiss xmm12, xmm7
    vmovss  xmm0, dword ptr [rdi+4]
    vmulss  xmm15, xmm0, cs:__real@41200000
    vsubss  xmm0, xmm14, dword ptr [rbx+20h]
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vmovss  xmm10, cs:__real@3f000000
    vaddss  xmm1, xmm3, xmm10
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
  }
  if ( !v22 )
  {
    __asm
    {
      vsubss  xmm0, xmm3, xmm4
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vdivss  xmm6, xmm1, xmm12
    }
  }
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm0, xmm6, cs:__real@3b800000; val
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm2, xmm9; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm1, xmm11, xmm10
    vandps  xmm1, xmm1, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v39 )
    outNode->isReturning = 0;
  __asm
  {
    vaddss  xmm0, xmm0, dword ptr [rbx+24h]
    vmulss  xmm8, xmm0, xmm10
    vandps  xmm3, xmm8, xmm2
    vcomiss xmm3, cs:__real@3a83126f
    vmovss  dword ptr [rbx+24h], xmm8
  }
  if ( v39 )
    goto LABEL_15;
  if ( !outNode->isReturning )
    goto LABEL_14;
  __asm { vcomiss xmm3, cs:__real@3d4ccccd }
  if ( !outNode->isReturning )
  {
LABEL_15:
    __asm
    {
      vmulss  xmm1, xmm15, xmm12
      vsubss  xmm0, xmm9, xmm1
      vmulss  xmm2, xmm0, xmm11
      vmulss  xmm1, xmm1, xmm10
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm2, xmm3, xmm10
      vsubss  xmm1, xmm10, xmm3
      vcmpltss xmm0, xmm3, xmm10
      vblendvps xmm1, xmm2, xmm1, xmm0
      vmulss  xmm0, xmm1, cs:__real@40000000; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm9; max
      vsubss  xmm6, xmm11, xmm3
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm0, xmm9, xmm0
      vmulss  xmm0, xmm0, cs:__real@3fc90fdb; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm3, xmm0, xmm6 }
    outNode->isReturning = 1;
  }
  else
  {
LABEL_14:
    __asm
    {
      vcomiss xmm3, cs:__real@3dcccccd
      vmovss  xmm0, dword ptr [rdi]
      vmulss  xmm6, xmm0, cs:__real@41200000
      vmovss  xmm1, cs:__real@3e99999a; min
      vcomiss xmm3, xmm1
      vmovss  xmm2, cs:__real@3f4ccccd; max
      vcomiss xmm3, xmm2
      vmulss  xmm0, xmm8, xmm12
      vmulss  xmm6, xmm0, xmm6
      vsubss  xmm0, xmm11, xmm6; newTimeLinear
    }
    *(double *)&_XMM0 = CG_Gesture_CalcEaseTime(*(float *)&_XMM0);
    __asm { vmulss  xmm0, xmm0, cs:__real@40490fdb; X }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm
    {
      vsubss  xmm1, xmm0, xmm9
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm3, xmm2, cs:__real@bf000000
    }
  }
  __asm
  {
    vsubss  xmm0, xmm11, xmm3; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  dword ptr [rbx+20h], xmm14
    vmovaps xmm15, [rsp+0C8h+var_98]
  }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
CG_Gesture_CalculateSlotBlendOverride
==============
*/
void CG_Gesture_CalculateSlotBlendOverride(const playerState_s *ps, const unsigned int slot, const int gameTime, const GestureAnimationState animState, float *outOutDuration, float *outBlendInEndTime)
{
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2000, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = outOutDuration;
  if ( !outOutDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2001, ASSERT_TYPE_ASSERT, "(outOutDuration)", (const char *)&queryFormat, "outOutDuration") )
    __debugbreak();
  _RDI = outBlendInEndTime;
  if ( !outBlendInEndTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2002, ASSERT_TYPE_ASSERT, "(outBlendInEndTime)", (const char *)&queryFormat, "outBlendInEndTime") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbp+460h]
    vmulss  xmm6, xmm0, cs:__real@3a83126f
  }
  if ( BG_Gesture_IsJumpTimeBlendActive(ps, slot, gameTime) )
  {
    __asm { vmovss  dword ptr [rbx], xmm6 }
  }
  else if ( animState == GESTURE_ANIM_STATE_OUT )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vminss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rbx], xmm1
    }
  }
  else if ( animState == GESTURE_ANIM_STATE_IN )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vminss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rdi], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
}

/*
==============
CG_Gesture_CheckRestoreMainAnims
==============
*/
void CG_Gesture_CheckRestoreMainAnims(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const unsigned int currentGesture, bool viewmodelChanged)
{
  GestureSlotInfo *Info; 
  unsigned int lastGesture; 
  bool v12; 
  GestureAnimationState animState; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1253, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v15) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1254, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v16) = 2;
    LODWORD(v15) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1255, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, slot, hand);
  lastGesture = Info->lastGesture;
  v12 = lastGesture && lastGesture == currentGesture;
  animState = Info->animState;
  if ( (unsigned int)(animState - 1) <= 1 && (unsigned int)(ps->weapState[0].weaponState - 1) <= 4 )
  {
    v14 = !v12;
    goto LABEL_20;
  }
  if ( v12 && viewmodelChanged )
  {
    v14 = animState == GESTURE_ANIM_STATE_OFF;
LABEL_20:
    if ( !v14 )
      Info->restoreAnims = 1;
  }
}

/*
==============
CG_Gesture_CleanSlot
==============
*/
bool CG_Gesture_CleanSlot(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand)
{
  __int64 v5; 
  bool result; 
  cg_t *LocalClientGlobals; 
  WeaponHand *ViewModelHand; 
  DObj *viewModelDObj; 
  bool rebuildTree; 
  char v16; 
  unsigned int lastGesture; 
  bool v18; 
  char v19; 
  bool v20; 
  __int64 blendOutToZero; 
  DObj *v23; 

  v5 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2744, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(blendOutToZero) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2745, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", blendOutToZero, 2) )
      __debugbreak();
  }
  _RBX = CG_Gesture_GetInfo(localClientNum, v5, hand);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2748, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( _RBX->restoreAnims )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ViewModelHand = cg_t::GetViewModelHand(LocalClientGlobals, hand);
  if ( !ViewModelHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2758, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
    __debugbreak();
  viewModelDObj = ViewModelHand->viewModelDObj;
  v23 = ViewModelHand->viewModelDObj;
  if ( (const playerState_s *)((char *)ps + 32 * v5) == (const playerState_s *)-1052i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2762, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    viewModelDObj = v23;
  }
  rebuildTree = _RBX->rebuildTree;
  if ( _RBX->isInitialized )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, cs:__real@bf800000
    vucomiss xmm0, dword ptr [rbx+2Ch]
  }
  if ( !_RBX->isInitialized )
LABEL_22:
    v16 = 0;
  else
    v16 = 1;
  lastGesture = _RBX->lastGesture;
  v18 = ps->gestureState.gestures[v5].index == lastGesture || !lastGesture;
  v19 = 0;
  v20 = 0;
  if ( !v16 )
    goto LABEL_31;
  if ( v18 )
  {
    if ( _RBX->animState == GESTURE_ANIM_STATE_OUT )
    {
      v19 = 1;
LABEL_34:
      __asm { vxorps  xmm3, xmm3, xmm3; blendOut }
      CG_Gesture_StopAnims(ps, v5, viewModelDObj, *(const float *)&_XMM3, 1, 1);
      CG_Gesture_Shutdown(localClientNum, v5, hand);
      goto LABEL_35;
    }
LABEL_31:
    if ( v18 )
      goto LABEL_35;
  }
  if ( _RBX->animState )
  {
    v20 = 1;
    goto LABEL_34;
  }
LABEL_35:
  _RBX->isRestarting = v19;
  result = v20;
  _RBX->rebuildTree = rebuildTree;
  return result;
}

/*
==============
CG_Gesture_ClearClientInfo
==============
*/
void CG_Gesture_ClearClientInfo(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  memset_0(&LocalClientGlobals->gestureInfo, 0, sizeof(LocalClientGlobals->gestureInfo));
}

/*
==============
CG_Gesture_ClearEmptyAnimNodes
==============
*/
void CG_Gesture_ClearEmptyAnimNodes(DObj *viewModelDObj)
{
  XAnimTree *tree; 
  XAnim_s *anims; 
  int size; 
  unsigned int i; 
  unsigned int j; 
  const GestureAnimSlotInfo *AnimMappingInfo; 
  __int64 childIndex; 
  const GestureAnimSlotInfo *v9; 
  __int64 parentIndex; 

  if ( !viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1418, ASSERT_TYPE_ASSERT, "(viewModelDObj)", (const char *)&queryFormat, "viewModelDObj") )
    __debugbreak();
  tree = viewModelDObj->tree;
  if ( tree )
  {
    anims = tree->anims;
    if ( anims )
    {
      size = anims->size;
      if ( (int)anims->size > 0 )
      {
        for ( i = 0; i < 2; ++i )
        {
          for ( j = 0; j < 0x16; ++j )
          {
            AnimMappingInfo = CG_Gesture_GetAnimMappingInfo(i, j);
            if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
              __debugbreak();
            childIndex = AnimMappingInfo->childIndex;
            v9 = CG_Gesture_GetAnimMappingInfo(i, j);
            if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
              __debugbreak();
            parentIndex = v9->parentIndex;
            if ( (int)childIndex < size && !anims->entries[childIndex].parts )
              BG_CreateXAnim(anims, childIndex, "void", 0);
            if ( (int)parentIndex < size && !anims->entries[parentIndex].parts )
              BG_CreateXAnim(anims, parentIndex, "void", 0);
          }
        }
      }
    }
  }
}

/*
==============
CG_Gesture_ClearMainTreeWeights
==============
*/
void CG_Gesture_ClearMainTreeWeights(LocalClientNum_t localClientNum, PlayerHandIndex hand)
{
  __int64 v3; 
  unsigned int v4; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 
  __int64 v8; 

  v3 = hand;
  v4 = 0;
  do
  {
    if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = hand;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 234, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ++v4;
    LocalClientGlobals->gestureInfo.gestures[0][v3].mainTreeWeight = -1.0;
    LocalClientGlobals->gestureInfo.gestures[0][v3].additiveAdsWeight = -1.0;
    LocalClientGlobals->gestureInfo.gestures[0][v3].fingerPoseWeight = -1.0;
    v3 += 2i64;
  }
  while ( v4 < 2 );
}

/*
==============
CG_Gesture_CreateTree
==============
*/
void CG_Gesture_CreateTree(LocalClientNum_t localClientNum, const playerState_s *ps, WeaponXAnim *pAnims, const PlayerHandIndex hand, const bool isDualWield, bool additiveAnimations)
{
  PlayerHandIndex v6; 
  const playerState_s *v7; 
  LocalClientNum_t v8; 
  unsigned int i; 
  cg_t *LocalClientGlobals; 
  GestureSlotInfo *Info; 
  const snapshot_t *nextSnap; 
  GestureSlotInfo *v13; 
  bool v14; 
  bool v15; 
  GestureSlotInfo *v16; 
  const Gesture *CurrentAsset; 
  unsigned int IndexFromGesture; 
  WeaponXAnim *v19; 
  unsigned int j; 
  const GestureAnimSlotInfo *AnimMappingInfo; 
  unsigned int childIndex; 
  unsigned int *v23; 
  unsigned int v24; 
  unsigned int v25; 
  GestureSlotInfo *v26; 
  unsigned int lastGesture; 
  const Gesture *AssetFromIndex; 
  const Gesture *v29; 
  WeaponXAnim *pAnimsa; 
  __int64 v31; 
  GestureSlotInfo *v32; 

  v6 = hand;
  v7 = ps;
  v8 = localClientNum;
  if ( !pAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1541, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
    __debugbreak();
  for ( i = 0; i < 2; ++i )
  {
    if ( CG_Gesture_IsEnabled(v8, v7, i, v6) )
    {
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 889, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)v6 >= NUM_WEAPON_HANDS )
      {
        LODWORD(v31) = 2;
        LODWORD(pAnimsa) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 891, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", pAnimsa, v31) )
          __debugbreak();
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(v8);
      Info = CG_Gesture_GetInfo(v8, i, v6);
      nextSnap = LocalClientGlobals->nextSnap;
      v13 = Info;
      v14 = BG_Gesture_GetState(v7, i) == GESTURE_STATE_OFF && v13->animState;
      v15 = nextSnap && LocalClientGlobals->killCamEndTime == nextSnap->serverTime;
      if ( v14 && v15 || !BG_Gesture_GetCurrentAsset(v7, i) )
      {
        v8 = localClientNum;
        CG_Gesture_Shutdown(localClientNum, i, v6);
      }
      else
      {
        v8 = localClientNum;
        v32 = CG_Gesture_GetInfo(localClientNum, i, v6);
        v16 = v32;
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1556, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        CurrentAsset = BG_Gesture_GetCurrentAsset(v7, i);
        if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1559, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
          __debugbreak();
        IndexFromGesture = BG_Gesture_GetIndexFromGesture(CurrentAsset);
        if ( additiveAnimations )
        {
          if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1457, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
            __debugbreak();
          v19 = pAnims;
          if ( !pAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1458, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
            __debugbreak();
          if ( CurrentAsset->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
          {
            for ( j = 0; j < 0x16; ++j )
            {
              AnimMappingInfo = CG_Gesture_GetAnimMappingInfo(i, j);
              if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
                __debugbreak();
              childIndex = AnimMappingInfo->childIndex;
              v23 = (unsigned int *)CG_Gesture_GetAnimMappingInfo(i, j);
              if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
                __debugbreak();
              v24 = *v23;
              v25 = childIndex;
              v19 = pAnims;
              BG_CreateXAnim(&pAnims->xanim, v25, "void", 0);
              BG_CreateXAnim(&pAnims->xanim, v24, "void", 0);
            }
            v6 = hand;
            v16 = v32;
            v8 = localClientNum;
          }
        }
        else
        {
          v19 = pAnims;
        }
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1513, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
          __debugbreak();
        v26 = CG_Gesture_GetInfo(v8, i, v6);
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1516, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( v26->restoreAnims )
        {
          lastGesture = v26->lastGesture;
          if ( lastGesture )
          {
            if ( lastGesture != IndexFromGesture )
            {
              AssetFromIndex = BG_Gesture_GetAssetFromIndex(lastGesture);
              if ( !AssetFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1524, ASSERT_TYPE_ASSERT, "(lastGesture)", (const char *)&queryFormat, "lastGesture") )
                __debugbreak();
              v29 = BG_Gesture_GetAssetFromIndex(IndexFromGesture);
              if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1527, ASSERT_TYPE_ASSERT, "(curGesture)", (const char *)&queryFormat, "curGesture") )
                __debugbreak();
              if ( AssetFromIndex->type != v29->type )
                CG_Gesture_CreateTreeForGesture(AssetFromIndex, v6, isDualWield, additiveAnimations, i, v19);
              v8 = localClientNum;
            }
          }
        }
        CG_Gesture_CreateTreeForGesture(CurrentAsset, v6, isDualWield, additiveAnimations, i, v19);
        v7 = ps;
        v16->rebuildTree = 0;
        if ( !additiveAnimations )
          CG_Gesture_CheckRestoreMainAnims(v8, ps, i, v6, IndexFromGesture, 0);
      }
    }
  }
}

/*
==============
CG_Gesture_CreateTreeForGesture
==============
*/
void CG_Gesture_CreateTreeForGesture(const Gesture *gesture, const PlayerHandIndex hand, const bool isDualWield, bool additiveAnimations, unsigned int slot, WeaponXAnim *pAnims)
{
  unsigned int v9; 
  GestureDirectionalAssetIndex *p_assetIndex; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  WeaponXAnim *v15; 
  __int64 v16; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1479, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !pAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1480, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
    __debugbreak();
  if ( gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
  {
    v9 = 0;
    p_assetIndex = &s_blendTreeMappings[0].assetIndex;
    do
    {
      v11 = *((_DWORD *)p_assetIndex + 1);
      switch ( v11 )
      {
        case 3:
          v12 = gesture->type == GESTURE_TYPE_DIRECTIONAL;
          break;
        case 5:
          v12 = gesture->type == GESTURE_TYPE_LOOK_AROUND;
          break;
        case 6:
          v12 = gesture->type == GESTURE_TYPE_IK_TARGET;
          break;
        default:
          v12 = v11 == 1;
          break;
      }
      if ( v12 )
        goto LABEL_26;
      v13 = *(int *)p_assetIndex;
      if ( (_DWORD)v13 != 23 )
      {
        if ( (unsigned int)v13 >= 0x16 )
        {
          LODWORD(v16) = 22;
          SLODWORD(v15) = *p_assetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "assetIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        if ( !isDualWield || (v14 = *((_DWORD *)p_assetIndex + 2), hand == v14) || v14 == 2 || !gesture->weaponSettings.splitAnimsAkimbo )
        {
          if ( gesture->anims[v13] )
          {
LABEL_26:
            if ( additiveAnimations )
              CG_Gesture_Create_AdditiveAnims(gesture, slot, hand, isDualWield, v9, pAnims);
            else
              CG_Gesture_Create_RelativeAnims(gesture, slot, hand, isDualWield, v9, pAnims);
          }
        }
      }
      ++v9;
      p_assetIndex += 6;
    }
    while ( v9 < 0x16 );
  }
  if ( additiveAnimations )
    CG_Gesture_CreateWalkAnimOverrides(gesture, slot, pAnims);
}

/*
==============
CG_Gesture_CreateWalkAnimOverrides
==============
*/
void CG_Gesture_CreateWalkAnimOverrides(const Gesture *gesture, const unsigned int slot, WeaponXAnim *pAnims)
{
  int v6; 
  bool v7; 
  __int64 v8; 
  XAnimParts *v9; 
  weapAnimFiles_t WalkAnimGroupBySlot; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1389, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !pAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1390, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v12) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1391, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  if ( gesture->type == GESTURE_TYPE_LOOK_AROUND )
  {
    v6 = 17;
    v7 = 1;
    v8 = 17i64;
    do
    {
      if ( !v7 )
      {
        LODWORD(v13) = 22;
        LODWORD(v12) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1397, ASSERT_TYPE_ASSERT, "(unsigned)( gestureAnim ) < (unsigned)( GESTURE_ASSET_NUM )", "gestureAnim doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v9 = gesture->anims[v8];
      if ( v9 )
      {
        if ( (unsigned int)(v6 - 17) >= 5 )
        {
          LODWORD(v13) = 5;
          LODWORD(v12) = v6 - 17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1402, ASSERT_TYPE_ASSERT, "(unsigned)( blendIndex ) < (unsigned)( NUM_ADDITIVE_WALK_BLENDS )", "blendIndex doesn't index NUM_ADDITIVE_WALK_BLENDS\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        WalkAnimGroupBySlot = BG_Gesture_GetWalkAnimGroupBySlot(slot);
        v11 = WalkAnimGroupBySlot + v6 - 17;
        if ( (unsigned int)(WalkAnimGroupBySlot + v6 - 90) > 0x13 )
        {
          LODWORD(v14) = 92;
          LODWORD(v13) = 73;
          LODWORD(v12) = WalkAnimGroupBySlot + v6 - 17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1406, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_ADDITIVE_WALK_START ) <= ( targetAnim ) && ( targetAnim ) <= ( (WEAP_ANIM_ADDITIVE_WALK_END - 1) )", "targetAnim not in [WEAP_ANIM_ADDITIVE_WALK_START, (WEAP_ANIM_ADDITIVE_WALK_END - 1)]\n\t%i not in [%i, %i]", v12, v13, v14) )
            __debugbreak();
        }
        BG_CreateXAnimFromParts(&pAnims->xanim, v11, v9, 0);
      }
      ++v6;
      ++v8;
      v7 = (unsigned int)v6 < 0x16;
    }
    while ( v6 < 22 );
  }
}

/*
==============
CG_Gesture_Create_AdditiveAnims
==============
*/
void CG_Gesture_Create_AdditiveAnims(const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, unsigned int mappingIndex, WeaponXAnim *pAnims)
{
  const GestureMappingInfo *v9; 
  unsigned int *AnimMappingInfo; 
  unsigned int v11; 
  const GestureAnimSlotInfo *v12; 
  signed int childIndex; 
  const char *NodeName; 
  GestureNodeType nodeType; 
  const char *v16; 
  scr_string_t syncTime; 
  unsigned __int16 AnimTimeParameterIndex; 
  scr_string_t v19; 
  unsigned __int16 v20; 
  __int64 flags; 
  __int64 syncGroup; 
  __int64 allowAllocs; 

  if ( !pAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1178, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
    __debugbreak();
  if ( mappingIndex >= 0x16 )
  {
    LODWORD(flags) = mappingIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1179, ASSERT_TYPE_ASSERT, "(unsigned)( mappingIndex ) < (unsigned)( NUM_BLEND_TREE_MAPPINGS )", "mappingIndex doesn't index NUM_BLEND_TREE_MAPPINGS\n\t%i not in [0, %i)", flags, 22) )
      __debugbreak();
  }
  if ( slot >= 2 )
  {
    LODWORD(syncGroup) = 2;
    LODWORD(flags) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1180, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", flags, syncGroup) )
      __debugbreak();
  }
  v9 = &s_blendTreeMappings[mappingIndex];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1183, ASSERT_TYPE_ASSERT, "(mappingInfo)", (const char *)&queryFormat, "mappingInfo") )
    __debugbreak();
  AnimMappingInfo = (unsigned int *)CG_Gesture_GetAnimMappingInfo(slot, mappingIndex);
  if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
    __debugbreak();
  v11 = *AnimMappingInfo;
  v12 = CG_Gesture_GetAnimMappingInfo(slot, mappingIndex);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
    __debugbreak();
  childIndex = v12->childIndex;
  NodeName = CG_Gesture_GetNodeName(v9, slot);
  nodeType = v9->nodeType;
  v16 = NodeName;
  switch ( nodeType )
  {
    case GESTURE_NODE_TYPE_ADDITIVE:
      if ( v11 - 28 > 0xCF )
      {
        LODWORD(syncGroup) = 28;
        LODWORD(flags) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1193, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_ADDITIVE_START ) <= ( parentIndex ) && ( parentIndex ) <= ( WEAP_ANIM_ADDITIVE_END )", "parentIndex not in [WEAP_ANIM_ADDITIVE_START, WEAP_ANIM_ADDITIVE_END]\n\t%i not in [%i, %i]", flags, syncGroup, 235) )
          __debugbreak();
      }
      if ( (unsigned int)(childIndex - 28) > 0xCF )
      {
        LODWORD(allowAllocs) = 235;
        LODWORD(syncGroup) = 28;
        LODWORD(flags) = childIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1194, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_ADDITIVE_START ) <= ( childIndex ) && ( childIndex ) <= ( WEAP_ANIM_ADDITIVE_END )", "childIndex not in [WEAP_ANIM_ADDITIVE_START, WEAP_ANIM_ADDITIVE_END]\n\t%i not in [%i, %i]", flags, syncGroup, allowAllocs) )
          __debugbreak();
      }
      LOBYTE(syncGroup) = 4;
      XAnimBlend(&pAnims->xanim, v11, v16, childIndex, 1u, 0x10u, (const XAnimSyncGroupID)syncGroup, 0);
LABEL_48:
      CG_Gesture_LoadXAnimFromAsset(gesture, pAnims, v9, (weapAnimFiles_t)childIndex, hand, isDualWield);
      return;
    case GESTURE_NODE_TYPE_ADDITIVE_DIRECTIONAL_BLEND:
      if ( gesture->type == GESTURE_TYPE_DIRECTIONAL )
      {
        if ( v11 - 28 > 0xCF )
        {
          LODWORD(syncGroup) = 28;
          LODWORD(flags) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1201, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_ADDITIVE_START ) <= ( parentIndex ) && ( parentIndex ) <= ( WEAP_ANIM_ADDITIVE_END )", "parentIndex not in [WEAP_ANIM_ADDITIVE_START, WEAP_ANIM_ADDITIVE_END]\n\t%i not in [%i, %i]", flags, syncGroup, 235) )
            __debugbreak();
        }
        if ( (unsigned int)(childIndex - 28) > 0xCF )
        {
          LODWORD(allowAllocs) = 235;
          LODWORD(syncGroup) = 28;
          LODWORD(flags) = childIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1202, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_ADDITIVE_START ) <= ( childIndex ) && ( childIndex ) <= ( WEAP_ANIM_ADDITIVE_END )", "childIndex not in [WEAP_ANIM_ADDITIVE_START, WEAP_ANIM_ADDITIVE_END]\n\t%i not in [%i, %i]", flags, syncGroup, allowAllocs) )
            __debugbreak();
        }
        LOBYTE(allowAllocs) = 4;
        XAnimCustomNode(scr_const.xanim_gesture_directional_blend, &pAnims->xanim, v11, v16, childIndex, 4u, 0x30u, (const XAnimSyncGroupID)allowAllocs, 0);
        if ( !CG_Gesture_UseTargetOffsets(&gesture->directionalSettings) )
          XAnimBindGameParameterFieldToNodeParameterByIndex(&pAnims->xanim, v11, 2u, scr_const.origin, scr_const.targetPos);
        XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, v11, 0, scr_const.viewOrigin);
        XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, v11, 1u, scr_const.viewAngles);
        syncTime = scr_const.syncTime;
        AnimTimeParameterIndex = CG_Gesture_GetAnimTimeParameterIndex(slot);
        XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, v11, AnimTimeParameterIndex, syncTime);
        XAnimBindPointerToNodeParameter(&pAnims->xanim, v11, scr_const.directionalSettings, &gesture->directionalSettings);
      }
      break;
    case GESTURE_NODE_TYPE_ADDITIVE_LOOK_AROUND:
      if ( gesture->type == GESTURE_TYPE_LOOK_AROUND )
      {
        if ( v11 - 28 > 0xCF )
        {
          LODWORD(syncGroup) = 28;
          LODWORD(flags) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1224, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_ADDITIVE_START ) <= ( parentIndex ) && ( parentIndex ) <= ( WEAP_ANIM_ADDITIVE_END )", "parentIndex not in [WEAP_ANIM_ADDITIVE_START, WEAP_ANIM_ADDITIVE_END]\n\t%i not in [%i, %i]", flags, syncGroup, 235) )
            __debugbreak();
        }
        if ( (unsigned int)(childIndex - 28) > 0xCF )
        {
          LODWORD(allowAllocs) = 235;
          LODWORD(syncGroup) = 28;
          LODWORD(flags) = childIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1225, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_ADDITIVE_START ) <= ( childIndex ) && ( childIndex ) <= ( WEAP_ANIM_ADDITIVE_END )", "childIndex not in [WEAP_ANIM_ADDITIVE_START, WEAP_ANIM_ADDITIVE_END]\n\t%i not in [%i, %i]", flags, syncGroup, allowAllocs) )
            __debugbreak();
        }
        LOBYTE(allowAllocs) = 4;
        XAnimCustomNode(scr_const.xanim_gesture_lookaround_blend, &pAnims->xanim, v11, v16, childIndex, 3u, 0x30u, (const XAnimSyncGroupID)allowAllocs, 0);
        XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, v11, 1u, scr_const.viewAngles);
        v19 = scr_const.syncTime;
        v20 = CG_Gesture_GetAnimTimeParameterIndex(slot);
        XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, v11, v20, v19);
        XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, v11, 5u, scr_const.playWeaponCheck);
        XAnimBindPointerToNodeParameter(&pAnims->xanim, v11, scr_const.lookAroundSettings, &gesture->lookAroundSettings);
      }
      break;
    case GESTURE_NODE_TYPE_ADDITIVE_UNNORMALIZED:
      goto LABEL_48;
    default:
      return;
  }
}

/*
==============
CG_Gesture_Create_RelativeAnims
==============
*/
void CG_Gesture_Create_RelativeAnims(const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, unsigned int mappingIndex, WeaponXAnim *pAnims)
{
  const GestureMappingInfo *v10; 
  unsigned int *AnimMappingInfo; 
  unsigned int v12; 
  const GestureAnimSlotInfo *v13; 
  GestureNodeType nodeType; 
  signed int childIndex; 
  const char *NodeName; 
  const char *v17; 
  __int64 flags; 
  __int64 syncGroup; 
  __int64 allowAllocs; 

  if ( !pAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1132, ASSERT_TYPE_ASSERT, "(pAnims)", (const char *)&queryFormat, "pAnims") )
    __debugbreak();
  if ( mappingIndex >= 0x16 )
  {
    LODWORD(flags) = mappingIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1133, ASSERT_TYPE_ASSERT, "(unsigned)( mappingIndex ) < (unsigned)( NUM_BLEND_TREE_MAPPINGS )", "mappingIndex doesn't index NUM_BLEND_TREE_MAPPINGS\n\t%i not in [0, %i)", flags, 22) )
      __debugbreak();
  }
  if ( slot >= 2 )
  {
    LODWORD(syncGroup) = 2;
    LODWORD(flags) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1134, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", flags, syncGroup) )
      __debugbreak();
  }
  v10 = &s_blendTreeMappings[mappingIndex];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1137, ASSERT_TYPE_ASSERT, "(mappingInfo)", (const char *)&queryFormat, "mappingInfo") )
    __debugbreak();
  AnimMappingInfo = (unsigned int *)CG_Gesture_GetAnimMappingInfo(slot, mappingIndex);
  if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
    __debugbreak();
  v12 = *AnimMappingInfo;
  v13 = CG_Gesture_GetAnimMappingInfo(slot, mappingIndex);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
    __debugbreak();
  nodeType = v10->nodeType;
  childIndex = v13->childIndex;
  if ( nodeType == GESTURE_NODE_TYPE_RELATIVE_ROOT )
  {
    if ( v12 - 16 > 0xB )
    {
      LODWORD(syncGroup) = 16;
      LODWORD(flags) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1145, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_GESTURE_RELATIVE_START ) <= ( parentIndex ) && ( parentIndex ) <= ( WEAP_ANIM_GESTURE_RELATIVE_END )", "parentIndex not in [WEAP_ANIM_GESTURE_RELATIVE_START, WEAP_ANIM_GESTURE_RELATIVE_END]\n\t%i not in [%i, %i]", flags, syncGroup, 27) )
        __debugbreak();
    }
    if ( (unsigned int)(childIndex - 16) > 0xB )
    {
      LODWORD(allowAllocs) = 27;
      LODWORD(syncGroup) = 16;
      LODWORD(flags) = childIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1146, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_GESTURE_RELATIVE_START ) <= ( childIndex ) && ( childIndex ) <= ( WEAP_ANIM_GESTURE_RELATIVE_END )", "childIndex not in [WEAP_ANIM_GESTURE_RELATIVE_START, WEAP_ANIM_GESTURE_RELATIVE_END]\n\t%i not in [%i, %i]", flags, syncGroup, allowAllocs) )
        __debugbreak();
    }
    NodeName = CG_Gesture_GetNodeName(v10, slot);
    LOBYTE(syncGroup) = 4;
    XAnimBlend(&pAnims->xanim, v12, NodeName, childIndex, 3u, 0, (const XAnimSyncGroupID)syncGroup, 0);
  }
  else if ( nodeType )
  {
    if ( nodeType == GESTURE_NODE_TYPE_IK_TARGET )
    {
      if ( v12 - 2 > 3 )
      {
        LODWORD(syncGroup) = 2;
        LODWORD(flags) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1157, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_GESTURE_IK_TARGET_1 ) <= ( parentIndex ) && ( parentIndex ) <= ( WEAP_ANIM_GESTURE_IK_TARGET_4 )", "parentIndex not in [WEAP_ANIM_GESTURE_IK_TARGET_1, WEAP_ANIM_GESTURE_IK_TARGET_4]\n\t%i not in [%i, %i]", flags, syncGroup, 5) )
          __debugbreak();
      }
      if ( (unsigned int)(childIndex - 2) > 3 )
      {
        LODWORD(allowAllocs) = 5;
        LODWORD(syncGroup) = 2;
        LODWORD(flags) = childIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1158, ASSERT_TYPE_ASSERT, "( WEAP_ANIM_GESTURE_IK_TARGET_1 ) <= ( childIndex ) && ( childIndex ) <= ( WEAP_ANIM_GESTURE_IK_TARGET_4 )", "childIndex not in [WEAP_ANIM_GESTURE_IK_TARGET_1, WEAP_ANIM_GESTURE_IK_TARGET_4]\n\t%i not in [%i, %i]", flags, syncGroup, allowAllocs) )
          __debugbreak();
      }
      v17 = CG_Gesture_GetNodeName(v10, slot);
      LOBYTE(allowAllocs) = 4;
      XAnimCustomNode(scr_const.xanim_gesture_ik_target, &pAnims->xanim, v12, v17, childIndex, 1u, 0, (const XAnimSyncGroupID)allowAllocs, 0);
      XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, v12, 0xAu, scr_const.targetPos);
      XAnimBindGameParameterToNodeParameterByIndex(&pAnims->xanim, v12, 0xBu, scr_const.targetAngles);
    }
  }
  else
  {
    CG_Gesture_LoadXAnimFromAsset(gesture, pAnims, v10, (weapAnimFiles_t)childIndex, hand, isDualWield);
  }
}

/*
==============
CG_Gesture_DirectionalBlendNode_CalculateRelativeTargetVector
==============
*/
void CG_Gesture_DirectionalBlendNode_CalculateRelativeTargetVector(CG_Gesture_DirectionalBlendNode *node, vec3_t *result)
{
  const GestureDirectionalSettings *directionalSettings; 
  unsigned __int8 *v10; 
  vec3_t angles; 
  vec3_t v80; 
  tmat33_t<vec3_t> v81; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v83; 
  tmat43_t<vec3_t> out; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  directionalSettings = node->directionalSettings;
  _RDI = result;
  _RBX = node;
  if ( !directionalSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 378, ASSERT_TYPE_ASSERT, "(directionalSettings)", (const char *)&queryFormat, "directionalSettings") )
    __debugbreak();
  if ( directionalSettings->useTargetOffset )
  {
    v10 = (unsigned __int8 *)_RBX->directionalSettings;
    _EDX = 0;
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+0Ch]
      vmovss  xmm5, dword ptr [rbx+10h]
      vmovss  xmm6, dword ptr [rbx+14h]
      vmovss  dword ptr [rsp+160h+angles], xmm3
      vmovss  dword ptr [rsp+160h+angles+4], xmm5
      vmovss  dword ptr [rsp+160h+angles+8], xmm6
    }
    _EAX = v10[64];
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, edx
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm4, xmm4, xmm4
      vblendvps xmm0, xmm4, xmm3, xmm2
      vmovss  dword ptr [rsp+160h+angles], xmm0
    }
    _EAX = v10[65];
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, edx
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm5, xmm2
      vmovss  dword ptr [rsp+160h+angles+4], xmm0
    }
    _EAX = v10[66];
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, edx
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm6, xmm2
      vmovss  dword ptr [rsp+160h+angles+8], xmm0
    }
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
    _RAX = _RBX->directionalSettings;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  [rbp+60h+var_C4], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  [rbp+60h+var_BC], xmm0
      vmovss  [rbp+60h+var_C0], xmm1
      vmovss  xmm2, dword ptr [rax+3Ch]
      vmovss  xmm1, dword ptr [rax+34h]
      vmovss  xmm0, dword ptr [rax+38h]
      vmovss  xmm6, dword ptr [rax+28h]
      vmovss  xmm7, dword ptr [rax+2Ch]
      vmovss  xmm8, dword ptr [rax+30h]
      vmovss  dword ptr [rsp+160h+var_120], xmm0
      vmovss  dword ptr [rsp+160h+var_120+4], xmm1
      vmovss  dword ptr [rsp+160h+var_120+8], xmm2
    }
    AnglesToAxis(&v80, (tmat33_t<vec3_t> *)&v83);
    __asm
    {
      vmovss  [rbp+60h+var_94], xmm6
      vmovss  [rbp+60h+var_90], xmm7
      vmovss  [rbp+60h+var_8C], xmm8
    }
    MatrixMultiply43(&v83, &axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+60h+out+24h]
      vmovss  xmm1, dword ptr [rbp+60h+out+28h]
      vmovss  xmm2, dword ptr [rbp+60h+out+2Ch]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vmovss  xmm2, dword ptr [rbx+20h]
    }
  }
  __asm
  {
    vsubss  xmm5, xmm1, dword ptr [rbx+4]
    vsubss  xmm4, xmm0, dword ptr [rbx]
    vsubss  xmm6, xmm2, dword ptr [rbx+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm7, xmm4, xmm1
    vmulss  xmm8, xmm5, xmm1
    vmulss  xmm6, xmm6, xmm1
  }
  AnglesToAxis(&_RBX->viewAngles, &v81);
  if ( &v80 == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmulss  xmm3, xmm8, dword ptr [rsp+160h+var_110+4]
    vmulss  xmm2, xmm7, dword ptr [rsp+160h+var_110]
    vmulss  xmm1, xmm6, dword ptr [rsp+160h+var_110+8]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm8, dword ptr [rsp+160h+var_110+10h]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+160h+var_110+14h]
    vmovss  dword ptr [rdi], xmm2
    vmulss  xmm2, xmm7, dword ptr [rsp+160h+var_110+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm8, dword ptr [rsp+160h+var_110+1Ch]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+160h+var_110+20h]
    vmovss  dword ptr [rdi+4], xmm2
    vmulss  xmm2, xmm7, dword ptr [rsp+160h+var_110+18h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_Gesture_ForceRestoreAnims
==============
*/
void CG_Gesture_ForceRestoreAnims(LocalClientNum_t localClientNum, const playerState_s *ps, const Weapon *r_weapon)
{
  __int64 v3; 
  CgWeaponMap *v6; 
  PlayerHandIndex WeaponHandForWeapon; 
  unsigned int i; 
  PlayerHandIndex v9; 
  const Gesture *CurrentAsset; 
  unsigned int IndexFromGesture; 

  v3 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1279, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1281, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( BG_IsValidWeapon(r_weapon, 0) )
  {
    WeaponHandForWeapon = BG_PlayerLastWeaponHandForWeapon(v6, ps, r_weapon);
    for ( i = 0; i < 2; ++i )
    {
      v9 = WEAPON_HAND_DEFAULT;
      do
      {
        if ( CG_Gesture_IsEnabled((LocalClientNum_t)v3, ps, i, v9) )
        {
          CurrentAsset = BG_Gesture_GetCurrentAsset(ps, i);
          if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1298, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
            __debugbreak();
          IndexFromGesture = BG_Gesture_GetIndexFromGesture(CurrentAsset);
          CG_Gesture_CheckRestoreMainAnims((LocalClientNum_t)v3, ps, i, v9, IndexFromGesture, 1);
        }
        ++v9;
      }
      while ( v9 <= (unsigned int)WeaponHandForWeapon );
    }
  }
}

/*
==============
CG_Gesture_GetAnimChildIndex
==============
*/
__int64 CG_Gesture_GetAnimChildIndex(const unsigned int gestureSlot, unsigned int mappingIndex)
{
  const GestureAnimSlotInfo *AnimMappingInfo; 

  AnimMappingInfo = CG_Gesture_GetAnimMappingInfo(gestureSlot, mappingIndex);
  if ( AnimMappingInfo )
    return (unsigned int)AnimMappingInfo->childIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
    __debugbreak();
  return MEMORY[4];
}

/*
==============
CG_Gesture_GetAnimMappingInfo
==============
*/
GestureAnimSlotInfo *CG_Gesture_GetAnimMappingInfo(const unsigned int gestureSlot, unsigned int mappingIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = mappingIndex;
  v3 = gestureSlot;
  if ( gestureSlot >= 2 )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 331, ASSERT_TYPE_ASSERT, "(unsigned)( gestureSlot ) < (unsigned)( 2 )", "gestureSlot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", gestureSlot, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 0x16 )
  {
    LODWORD(v7) = 22;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( mappingIndex ) < (unsigned)( NUM_BLEND_TREE_MAPPINGS )", "mappingIndex doesn't index NUM_BLEND_TREE_MAPPINGS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &s_animSlotMappings[v3][v2];
}

/*
==============
CG_Gesture_GetAnimParentIndex
==============
*/
__int64 CG_Gesture_GetAnimParentIndex(const unsigned int gestureSlot, unsigned int mappingIndex)
{
  const GestureAnimSlotInfo *AnimMappingInfo; 

  AnimMappingInfo = CG_Gesture_GetAnimMappingInfo(gestureSlot, mappingIndex);
  if ( AnimMappingInfo )
    return (unsigned int)AnimMappingInfo->parentIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
CG_Gesture_GetAnimTimeArchived
==============
*/
double CG_Gesture_GetAnimTimeArchived(LocalClientNum_t localClientNum, const unsigned int slot, const PlayerHandIndex hand, const Gesture *gesture)
{
  GestureAnimationState animState; 
  GestureAnimationSettings *AnimationSettings; 
  __int64 v33; 
  __int64 v34; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 923, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v33) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 924, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v33, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v34) = 2;
    LODWORD(v33) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 925, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v33, v34) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RBX = CG_Gesture_GetInfo(localClientNum, slot, hand);
  animState = _RBX->animState;
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmulss  xmm3, xmm0, cs:__real@447a0000
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1; min
  }
  if ( !AnimationSettings->hasTransitions )
  {
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rax+0Ch]; max
    }
    goto LABEL_18;
  }
  __asm
  {
    vcvtsi2ss xmm1, xmm1, dword ptr [rax+4]
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, dword ptr [rax]
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, dword ptr [rax+8]
  }
  switch ( animState )
  {
    case GESTURE_ANIM_STATE_IN:
      __asm
      {
        vmovaps xmm2, xmm1
        vxorps  xmm1, xmm1, xmm1
      }
LABEL_18:
      __asm { vmovaps xmm0, xmm3; value }
      goto LABEL_19;
    case GESTURE_ANIM_STATE_PLAYING:
      __asm
      {
        vsubss  xmm0, xmm3, xmm1; X
        vmovaps xmm1, xmm6; Y
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm2, xmm6
        vxorps  xmm1, xmm1, xmm1
      }
LABEL_19:
      *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      break;
    case GESTURE_ANIM_STATE_OUT:
      __asm
      {
        vsubss  xmm0, xmm3, xmm1
        vsubss  xmm0, xmm0, xmm6; X
        vmovaps xmm1, xmm7; Y
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovaps xmm2, xmm7
        vxorps  xmm1, xmm1, xmm1
      }
      goto LABEL_19;
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm6, [rsp+68h+var_18]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
CG_Gesture_GetAnimTimeFromTree
==============
*/
void CG_Gesture_GetAnimTimeFromTree(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const Gesture *gesture, const XAnimTree *animTree, float *outTimeInSeconds, float *outNormalizedTime)
{
  unsigned int animState; 
  GestureAnimationSettings *AnimationSettings; 
  unsigned int mainAnim; 
  char v22; 
  bool IsLooped; 
  char v25; 
  bool v28; 
  __int64 v49; 
  __int64 v50; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 978, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 979, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  _R13 = outTimeInSeconds;
  if ( !outTimeInSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 980, ASSERT_TYPE_ASSERT, "(outTimeInSeconds)", (const char *)&queryFormat, "outTimeInSeconds") )
    __debugbreak();
  _R12 = outNormalizedTime;
  if ( !outNormalizedTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 981, ASSERT_TYPE_ASSERT, "(outNormalizedTime)", (const char *)&queryFormat, "outNormalizedTime") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v49) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 982, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v49, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v50) = 2;
    LODWORD(v49) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 983, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v49, v50) )
      __debugbreak();
  }
  _RSI = CG_Gesture_GetInfo(localClientNum, slot, hand);
  animState = _RSI->animState;
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 988, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  *outTimeInSeconds = -1.0;
  *outNormalizedTime = -1.0;
  mainAnim = _RSI->mainAnim;
  if ( mainAnim && gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
  {
    if ( _RSI->isMainAnimAdditive )
      mainAnim = XAnimGetChildAt(animTree->anims, mainAnim, 0);
    __asm { vmovaps [rsp+88h+var_38], xmm6 }
    if ( XAnimHasFinished(animTree, 0, XANIM_SUBTREE_DEFAULT, mainAnim) )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( !_RSI->cancelTransitions )
        goto LABEL_30;
      __asm { vcomiss xmm6, dword ptr [rsi+30h] }
      if ( _RSI->cancelTransitions )
LABEL_30:
        v22 = 0;
      else
        v22 = 1;
      IsLooped = XAnimIsLooped(animTree->anims, mainAnim);
      if ( v22 || !IsLooped )
        __asm { vmovss  xmm1, cs:__real@3f800000 }
      else
        __asm { vxorps  xmm1, xmm1, xmm1 }
    }
    else
    {
      *(double *)&_XMM0 = XAnimGetWeight(animTree, 0, XANIM_SUBTREE_DEFAULT, mainAnim);
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vucomiss xmm0, xmm6
      }
      if ( v25 )
      {
LABEL_50:
        __asm { vmovaps xmm6, [rsp+88h+var_38] }
        return;
      }
      *(double *)&_XMM0 = XAnimGetTime(animTree, 0, XANIM_SUBTREE_DEFAULT, mainAnim);
      __asm { vmovaps xmm1, xmm0 }
    }
    __asm
    {
      vmovaps [rsp+88h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, dword ptr [rbx+0Ch]
    }
    if ( animState == 2 )
    {
      v28 = 0;
      if ( AnimationSettings->hasTransitions )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+4]
          vmulss  xmm0, xmm0, xmm1
        }
LABEL_46:
        __asm
        {
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm1, xmm0 }
      }
    }
    else if ( animState == 1 )
    {
      v28 = 0;
      if ( AnimationSettings->hasTransitions )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
          vmulss  xmm2, xmm0, xmm1
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, dword ptr [rbx+4]
          vaddss  xmm0, xmm2, xmm1
        }
        goto LABEL_46;
      }
    }
    else
    {
      v28 = animState < 3;
      if ( animState == 3 )
      {
        v28 = 0;
        if ( AnimationSettings->hasTransitions )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+8]
            vmulss  xmm2, xmm0, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+4]
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rbx]
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm0, xmm3, xmm0; value
          }
          goto LABEL_46;
        }
      }
    }
    __asm
    {
      vcomiss xmm1, xmm6
      vmovss  dword ptr [r12], xmm1
    }
    if ( !v28 )
    {
      __asm
      {
        vmulss  xmm0, xmm7, xmm1
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vmovss  dword ptr [r13+0], xmm1
      }
    }
    __asm { vmovaps xmm7, [rsp+88h+var_48] }
    goto LABEL_50;
  }
}

/*
==============
CG_Gesture_GetAnimTimeParameterIndex
==============
*/
__int64 CG_Gesture_GetAnimTimeParameterIndex(const unsigned int slot)
{
  int v4; 

  if ( slot >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( WEAP_ANIM_PARAM_ANIM_TIME_COUNT )", "slot doesn't index WEAP_ANIM_PARAM_ANIM_TIME_COUNT\n\t%i not in [0, %i)", slot, v4) )
      __debugbreak();
  }
  return slot + 3;
}

/*
==============
CG_Gesture_GetAnimationSlot
==============
*/
char CG_Gesture_GetAnimationSlot(const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, GestureDirectionalAssetIndex assetIndex, bool returnOverlay, weapAnimFiles_t *outIndex)
{
  unsigned int v11; 
  GestureDirectionalAssetIndex *i; 
  __int64 v13; 
  int v14; 
  bool v15; 
  int v16; 
  const GestureAnimSlotInfo *AnimMappingInfo; 
  weapAnimFiles_t *v19; 
  __int64 v20; 
  __int64 v21; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 763, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 764, ASSERT_TYPE_ASSERT, "(outIndex)", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  v11 = 0;
  *outIndex = WEAP_ANIM_ROOT;
  if ( (unsigned int)assetIndex >= GESTURE_ASSET_WALK_ADDITIVE_END )
  {
    LODWORD(v20) = assetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "assetIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", v20, 22) )
      __debugbreak();
  }
  if ( slot >= 2 )
  {
    LODWORD(v21) = 2;
    LODWORD(v20) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 768, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  for ( i = &s_blendTreeMappings[0].assetIndex; ; i += 6 )
  {
    v13 = *(int *)i;
    if ( (_DWORD)v13 == assetIndex )
    {
      v14 = *((_DWORD *)i + 1);
      if ( v14 == 3 )
      {
        v15 = gesture->type == GESTURE_TYPE_DIRECTIONAL;
      }
      else if ( v14 == 5 )
      {
        v15 = gesture->type == GESTURE_TYPE_LOOK_AROUND;
      }
      else
      {
        v15 = v14 == 6 ? gesture->type == GESTURE_TYPE_IK_TARGET : v14 == 1;
      }
      if ( v15 )
        break;
      if ( (_DWORD)v13 != 23 )
      {
        if ( (unsigned int)v13 >= 0x16 )
        {
          LODWORD(v21) = 22;
          SLODWORD(v20) = *i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "assetIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        if ( !isDualWield || (v16 = *((_DWORD *)i + 2), hand == v16) || v16 == 2 || !gesture->weaponSettings.splitAnimsAkimbo )
        {
          if ( gesture && gesture->anims[v13] )
            break;
        }
      }
    }
    if ( ++v11 >= 0x16 )
      return 0;
  }
  AnimMappingInfo = CG_Gesture_GetAnimMappingInfo(slot, v11);
  v19 = (weapAnimFiles_t *)AnimMappingInfo;
  if ( returnOverlay )
  {
    if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
      __debugbreak();
    *outIndex = *v19;
    return 1;
  }
  else
  {
    if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
      __debugbreak();
    *outIndex = v19[1];
    return 1;
  }
}

/*
==============
CG_Gesture_GetAnimationState
==============
*/
__int64 CG_Gesture_GetAnimationState(const LocalClientNum_t localClientNum, const unsigned int slot, const PlayerHandIndex hand)
{
  __int64 v7; 
  __int64 v9; 
  int v10; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3462, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( slot >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3463, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (unsigned int)CG_Gesture_GetInfo(localClientNum, slot, hand)->animState;
}

/*
==============
CG_Gesture_GetInfo
==============
*/
GestureSlotInfo *CG_Gesture_GetInfo(LocalClientNum_t localClientNum, unsigned int slot, PlayerHandIndex hand)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = hand;
  v5 = slot;
  if ( slot >= 2 )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 233, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", slot, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 234, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (GestureSlotInfo *)((char *)&CG_GetLocalClientGlobals(localClientNum)->gestureInfo + 152 * v5 + 76 * v3);
}

/*
==============
CG_Gesture_GetLastTreeRebuildTime
==============
*/
__int64 CG_Gesture_GetLastTreeRebuildTime(const LocalClientNum_t localClientNum, const unsigned int slot, const PlayerHandIndex hand)
{
  __int64 v7; 
  __int64 v9; 
  int v10; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3473, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( slot >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3474, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (unsigned int)CG_Gesture_GetInfo(localClientNum, slot, hand)->lastRebuildTree;
}

/*
==============
CG_Gesture_GetMainAnimMappings
==============
*/
void CG_Gesture_GetMainAnimMappings(const GestureDirectionalAssetIndex mainIndex, const GestureDirectionalAssetIndex inIndex, const GestureDirectionalAssetIndex outIndex, const GestureMappingInfo **outMain, const GestureMappingInfo **outIn, const GestureMappingInfo **outOut)
{
  __int64 v10; 
  const GestureMappingInfo *v11; 
  GestureDirectionalAssetIndex assetIndex; 
  const GestureMappingInfo *v13; 
  GestureDirectionalAssetIndex v14; 
  const GestureMappingInfo *v15; 
  GestureDirectionalAssetIndex v16; 
  const GestureMappingInfo *v17; 
  GestureDirectionalAssetIndex v18; 
  const GestureMappingInfo *v19; 
  GestureDirectionalAssetIndex v20; 
  const GestureMappingInfo *v21; 
  GestureDirectionalAssetIndex v22; 
  const GestureMappingInfo *v23; 
  GestureDirectionalAssetIndex v24; 
  const GestureMappingInfo *v25; 
  GestureDirectionalAssetIndex v26; 
  const GestureMappingInfo *v27; 
  GestureDirectionalAssetIndex v28; 
  const GestureMappingInfo *v29; 
  GestureDirectionalAssetIndex v30; 
  const GestureMappingInfo *v31; 
  GestureDirectionalAssetIndex v32; 
  const GestureMappingInfo *v33; 
  GestureDirectionalAssetIndex v34; 
  const GestureMappingInfo *v35; 
  GestureDirectionalAssetIndex v36; 
  const GestureMappingInfo *v37; 
  GestureDirectionalAssetIndex v38; 
  const GestureMappingInfo *v39; 
  GestureDirectionalAssetIndex v40; 
  const GestureMappingInfo *v41; 
  GestureDirectionalAssetIndex v42; 
  const GestureMappingInfo *v43; 
  GestureDirectionalAssetIndex v44; 
  const GestureMappingInfo *v45; 
  GestureDirectionalAssetIndex v46; 
  const GestureMappingInfo *v47; 
  GestureDirectionalAssetIndex v48; 
  const GestureMappingInfo *v49; 
  GestureDirectionalAssetIndex v50; 
  const GestureMappingInfo *v51; 
  GestureDirectionalAssetIndex v52; 
  const GestureMappingInfo *v53; 
  GestureDirectionalAssetIndex v54; 
  __int64 v55; 
  __int64 v56; 

  if ( (unsigned int)mainIndex >= GESTURE_ASSET_WALK_ADDITIVE_END && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 728, ASSERT_TYPE_ASSERT, "(unsigned)( mainIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "mainIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", mainIndex, 22) )
    __debugbreak();
  if ( (unsigned int)inIndex >= GESTURE_ASSET_WALK_ADDITIVE_END )
  {
    LODWORD(v56) = 22;
    LODWORD(v55) = inIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 729, ASSERT_TYPE_ASSERT, "(unsigned)( inIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "inIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", v55, v56) )
      __debugbreak();
  }
  if ( (unsigned int)outIndex >= GESTURE_ASSET_WALK_ADDITIVE_END )
  {
    LODWORD(v56) = 22;
    LODWORD(v55) = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 730, ASSERT_TYPE_ASSERT, "(unsigned)( outIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "outIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", v55, v56) )
      __debugbreak();
  }
  if ( !outMain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 732, ASSERT_TYPE_ASSERT, "(outMain)", (const char *)&queryFormat, "outMain") )
    __debugbreak();
  if ( !outIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 733, ASSERT_TYPE_ASSERT, "(outIn)", (const char *)&queryFormat, "outIn") )
    __debugbreak();
  if ( !outOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 734, ASSERT_TYPE_ASSERT, "(outOut)", (const char *)&queryFormat, "outOut") )
    __debugbreak();
  v10 = 0i64;
  do
  {
    v11 = &s_blendTreeMappings[v10];
    assetIndex = v11->assetIndex;
    if ( mainIndex == assetIndex )
    {
      *outMain = v11;
      assetIndex = v11->assetIndex;
    }
    if ( inIndex == assetIndex )
    {
      *outIn = v11;
      assetIndex = v11->assetIndex;
    }
    if ( outIndex == assetIndex )
      *outOut = v11;
    v13 = &s_blendTreeMappings[(unsigned int)(v10 + 1)];
    v14 = v13->assetIndex;
    if ( mainIndex == v14 )
    {
      *outMain = v13;
      v14 = v13->assetIndex;
    }
    if ( inIndex == v14 )
    {
      *outIn = v13;
      v14 = v13->assetIndex;
    }
    if ( outIndex == v14 )
      *outOut = v13;
    v15 = &s_blendTreeMappings[(unsigned int)(v10 + 2)];
    v16 = v15->assetIndex;
    if ( mainIndex == v16 )
    {
      *outMain = v15;
      v16 = v15->assetIndex;
    }
    if ( inIndex == v16 )
    {
      *outIn = v15;
      v16 = v15->assetIndex;
    }
    if ( outIndex == v16 )
      *outOut = v15;
    v17 = &s_blendTreeMappings[(unsigned int)(v10 + 3)];
    v18 = v17->assetIndex;
    if ( mainIndex == v18 )
    {
      *outMain = v17;
      v18 = v17->assetIndex;
    }
    if ( inIndex == v18 )
    {
      *outIn = v17;
      v18 = v17->assetIndex;
    }
    if ( outIndex == v18 )
      *outOut = v17;
    v19 = &s_blendTreeMappings[(unsigned int)(v10 + 4)];
    v20 = v19->assetIndex;
    if ( mainIndex == v20 )
    {
      *outMain = v19;
      v20 = v19->assetIndex;
    }
    if ( inIndex == v20 )
    {
      *outIn = v19;
      v20 = v19->assetIndex;
    }
    if ( outIndex == v20 )
      *outOut = v19;
    v21 = &s_blendTreeMappings[(unsigned int)(v10 + 5)];
    v22 = v21->assetIndex;
    if ( mainIndex == v22 )
    {
      *outMain = v21;
      v22 = v21->assetIndex;
    }
    if ( inIndex == v22 )
    {
      *outIn = v21;
      v22 = v21->assetIndex;
    }
    if ( outIndex == v22 )
      *outOut = v21;
    v23 = &s_blendTreeMappings[(unsigned int)(v10 + 6)];
    v24 = v23->assetIndex;
    if ( mainIndex == v24 )
    {
      *outMain = v23;
      v24 = v23->assetIndex;
    }
    if ( inIndex == v24 )
    {
      *outIn = v23;
      v24 = v23->assetIndex;
    }
    if ( outIndex == v24 )
      *outOut = v23;
    v25 = &s_blendTreeMappings[(unsigned int)(v10 + 7)];
    v26 = v25->assetIndex;
    if ( mainIndex == v26 )
    {
      *outMain = v25;
      v26 = v25->assetIndex;
    }
    if ( inIndex == v26 )
    {
      *outIn = v25;
      v26 = v25->assetIndex;
    }
    if ( outIndex == v26 )
      *outOut = v25;
    v27 = &s_blendTreeMappings[(unsigned int)(v10 + 8)];
    v28 = v27->assetIndex;
    if ( mainIndex == v28 )
    {
      *outMain = v27;
      v28 = v27->assetIndex;
    }
    if ( inIndex == v28 )
    {
      *outIn = v27;
      v28 = v27->assetIndex;
    }
    if ( outIndex == v28 )
      *outOut = v27;
    v29 = &s_blendTreeMappings[(unsigned int)(v10 + 9)];
    v30 = v29->assetIndex;
    if ( mainIndex == v30 )
    {
      *outMain = v29;
      v30 = v29->assetIndex;
    }
    if ( inIndex == v30 )
    {
      *outIn = v29;
      v30 = v29->assetIndex;
    }
    if ( outIndex == v30 )
      *outOut = v29;
    v31 = &s_blendTreeMappings[(unsigned int)(v10 + 10)];
    v32 = v31->assetIndex;
    if ( mainIndex == v32 )
    {
      *outMain = v31;
      v32 = v31->assetIndex;
    }
    if ( inIndex == v32 )
    {
      *outIn = v31;
      v32 = v31->assetIndex;
    }
    if ( outIndex == v32 )
      *outOut = v31;
    v33 = &s_blendTreeMappings[(unsigned int)(v10 + 11)];
    v34 = v33->assetIndex;
    if ( mainIndex == v34 )
    {
      *outMain = v33;
      v34 = v33->assetIndex;
    }
    if ( inIndex == v34 )
    {
      *outIn = v33;
      v34 = v33->assetIndex;
    }
    if ( outIndex == v34 )
      *outOut = v33;
    v35 = &s_blendTreeMappings[(unsigned int)(v10 + 12)];
    v36 = v35->assetIndex;
    if ( mainIndex == v36 )
    {
      *outMain = v35;
      v36 = v35->assetIndex;
    }
    if ( inIndex == v36 )
    {
      *outIn = v35;
      v36 = v35->assetIndex;
    }
    if ( outIndex == v36 )
      *outOut = v35;
    v37 = &s_blendTreeMappings[(unsigned int)(v10 + 13)];
    v38 = v37->assetIndex;
    if ( mainIndex == v38 )
    {
      *outMain = v37;
      v38 = v37->assetIndex;
    }
    if ( inIndex == v38 )
    {
      *outIn = v37;
      v38 = v37->assetIndex;
    }
    if ( outIndex == v38 )
      *outOut = v37;
    v39 = &s_blendTreeMappings[(unsigned int)(v10 + 14)];
    v40 = v39->assetIndex;
    if ( mainIndex == v40 )
    {
      *outMain = v39;
      v40 = v39->assetIndex;
    }
    if ( inIndex == v40 )
    {
      *outIn = v39;
      v40 = v39->assetIndex;
    }
    if ( outIndex == v40 )
      *outOut = v39;
    v41 = &s_blendTreeMappings[(unsigned int)(v10 + 15)];
    v42 = v41->assetIndex;
    if ( mainIndex == v42 )
    {
      *outMain = v41;
      v42 = v41->assetIndex;
    }
    if ( inIndex == v42 )
    {
      *outIn = v41;
      v42 = v41->assetIndex;
    }
    if ( outIndex == v42 )
      *outOut = v41;
    v43 = &s_blendTreeMappings[(unsigned int)(v10 + 16)];
    v44 = v43->assetIndex;
    if ( mainIndex == v44 )
    {
      *outMain = v43;
      v44 = v43->assetIndex;
    }
    if ( inIndex == v44 )
    {
      *outIn = v43;
      v44 = v43->assetIndex;
    }
    if ( outIndex == v44 )
      *outOut = v43;
    v45 = &s_blendTreeMappings[(unsigned int)(v10 + 17)];
    v46 = v45->assetIndex;
    if ( mainIndex == v46 )
    {
      *outMain = v45;
      v46 = v45->assetIndex;
    }
    if ( inIndex == v46 )
    {
      *outIn = v45;
      v46 = v45->assetIndex;
    }
    if ( outIndex == v46 )
      *outOut = v45;
    v47 = &s_blendTreeMappings[(unsigned int)(v10 + 18)];
    v48 = v47->assetIndex;
    if ( mainIndex == v48 )
    {
      *outMain = v47;
      v48 = v47->assetIndex;
    }
    if ( inIndex == v48 )
    {
      *outIn = v47;
      v48 = v47->assetIndex;
    }
    if ( outIndex == v48 )
      *outOut = v47;
    v49 = &s_blendTreeMappings[(unsigned int)(v10 + 19)];
    v50 = v49->assetIndex;
    if ( mainIndex == v50 )
    {
      *outMain = v49;
      v50 = v49->assetIndex;
    }
    if ( inIndex == v50 )
    {
      *outIn = v49;
      v50 = v49->assetIndex;
    }
    if ( outIndex == v50 )
      *outOut = v49;
    v51 = &s_blendTreeMappings[(unsigned int)(v10 + 20)];
    v52 = v51->assetIndex;
    if ( mainIndex == v52 )
    {
      *outMain = v51;
      v52 = v51->assetIndex;
    }
    if ( inIndex == v52 )
    {
      *outIn = v51;
      v52 = v51->assetIndex;
    }
    if ( outIndex == v52 )
      *outOut = v51;
    v53 = &s_blendTreeMappings[(unsigned int)(v10 + 21)];
    v54 = v53->assetIndex;
    if ( mainIndex == v54 )
    {
      *outMain = v53;
      v54 = v53->assetIndex;
    }
    if ( inIndex == v54 )
    {
      *outIn = v53;
      v54 = v53->assetIndex;
    }
    if ( outIndex == v54 )
      *outOut = v53;
    v10 = (unsigned int)(v10 + 22);
  }
  while ( (unsigned int)v10 < 0x16 );
}

/*
==============
CG_Gesture_GetNodeName
==============
*/
char *CG_Gesture_GetNodeName(const GestureMappingInfo *const mappingInfo, const unsigned int slot)
{
  __int64 v5; 

  if ( !mappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1119, ASSERT_TYPE_ASSERT, "(mappingInfo)", (const char *)&queryFormat, "mappingInfo") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v5) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1120, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
  }
  return j_va("%s_slot_%d", mappingInfo->rootName, slot);
}

/*
==============
CG_Gesture_GetStateFromAnimTime
==============
*/
__int64 CG_Gesture_GetStateFromAnimTime(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const Gesture *gesture, const int animTime)
{
  GestureAnimationSettings *AnimationSettings; 
  GestureAnimationSettings *v8; 
  int outStartTime; 
  __int64 v11; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1872, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1873, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v11) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1874, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v11, 2) )
      __debugbreak();
  }
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  v8 = AnimationSettings;
  if ( (animTime < 0 || animTime > AnimationSettings->animationLength) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1879, ASSERT_TYPE_ASSERT, "((animTime >= 0) && (animTime <= animSettings->animationLength))", (const char *)&queryFormat, "(animTime >= 0) && (animTime <= animSettings->animationLength)") )
    __debugbreak();
  outStartTime = v8->outStartTime;
  if ( animTime >= outStartTime && animTime <= v8->animationLength )
    return 3i64;
  if ( animTime <= v8->inEndTime )
    return 2i64;
  return animTime < outStartTime;
}

/*
==============
CG_Gesture_GetWeaponAnims
==============
*/
void CG_Gesture_GetWeaponAnims(const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, weapAnimFiles_t *outMainAnimation, weapAnimFiles_t *outInAnimation, weapAnimFiles_t *outOutAnimation)
{
  weapAnimFiles_t *v10; 
  weapAnimFiles_t *v11; 
  weapAnimFiles_t *v12; 
  bool v13; 
  bool v14; 
  int v15; 
  GestureDirectionalAssetIndex v16; 
  GestureMappingInfo *v17; 
  bool v18; 
  bool v19; 
  bool v20; 
  GestureDirectionalAssetIndex v21; 
  bool v22; 
  GestureDirectionalAssetIndex fmt; 
  GestureMappingInfo **outOut; 
  weapAnimFiles_t *outIndex; 
  GestureMappingInfo *outMain; 
  GestureDirectionalAssetIndex assetIndex; 
  bool v28; 

  v28 = isDualWield;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3436, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(outOut) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3437, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", outOut, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(outIndex) = 2;
    LODWORD(outOut) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3438, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outOut, outIndex) )
      __debugbreak();
  }
  v10 = outMainAnimation;
  if ( !outMainAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3439, ASSERT_TYPE_ASSERT, "(outMainAnimation)", (const char *)&queryFormat, "outMainAnimation") )
    __debugbreak();
  v11 = outInAnimation;
  if ( !outInAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3440, ASSERT_TYPE_ASSERT, "(outInAnimation)", (const char *)&queryFormat, "outInAnimation") )
    __debugbreak();
  v12 = outOutAnimation;
  if ( !outOutAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3441, ASSERT_TYPE_ASSERT, "(outOutAnimation)", (const char *)&queryFormat, "outOutAnimation") )
    __debugbreak();
  v13 = 0;
  *v10 = WEAP_ANIM_ROOT;
  *v11 = WEAP_ANIM_ROOT;
  *v12 = WEAP_ANIM_ROOT;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2383, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  v14 = gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET;
  v15 = 22;
  v16 = GESTURE_ASSET_WALK_ADDITIVE_END;
  assetIndex = GESTURE_ASSET_WALK_ADDITIVE_END;
  if ( v14 )
  {
    CG_Gesture_GetMainAnimMappings(GESTURE_ASSET_LEFT_CENTER, GESTURE_ASSET_IN, GESTURE_ASSET_OUT, (const GestureMappingInfo **)&outMain, (const GestureMappingInfo **)&outInAnimation, (const GestureMappingInfo **)&outOutAnimation);
    v17 = outMain;
    if ( !outMain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2401, ASSERT_TYPE_ASSERT, "(mainMapping)", (const char *)&queryFormat, "mainMapping") )
      __debugbreak();
    if ( !outInAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2402, ASSERT_TYPE_ASSERT, "(inMapping)", (const char *)&queryFormat, "inMapping") )
      __debugbreak();
    if ( !outOutAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2403, ASSERT_TYPE_ASSERT, "(outMapping)", (const char *)&queryFormat, "outMapping") )
      __debugbreak();
    v18 = v28;
    if ( CG_Gesture_XAnimExists(gesture, v17, hand, v28) )
    {
      v13 = 0;
      v15 = 0;
    }
    else
    {
      v13 = 1;
      v15 = 5;
    }
    v19 = CG_Gesture_XAnimExists(gesture, (const GestureMappingInfo *)outInAnimation, hand, v18);
    v16 = GESTURE_ASSET_IN_ADDITIVE;
    if ( v19 )
      v16 = GESTURE_ASSET_IN;
    v20 = CG_Gesture_XAnimExists(gesture, (const GestureMappingInfo *)outOutAnimation, hand, v28);
    v21 = GESTURE_ASSET_OUT_ADDITIVE;
    if ( v20 )
      v21 = GESTURE_ASSET_OUT;
    assetIndex = v21;
  }
  fmt = v15;
  v22 = v28;
  CG_Gesture_GetAnimationSlot(gesture, slot, hand, v28, fmt, v13, outMainAnimation);
  CG_Gesture_GetAnimationSlot(gesture, slot, hand, v22, v16, v13, v11);
  CG_Gesture_GetAnimationSlot(gesture, slot, hand, v22, assetIndex, v13, v12);
}

/*
==============
CG_Gesture_Init
==============
*/
void CG_Gesture_Init(void)
{
  XAnimRegisterStructTypeInternal(XAnimGameStructTypeDeclaration<centity_t>::ms_typeInfo);
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<CG_Gesture_DirectionalBlendNode>::ms_typeInfo);
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<CG_Gesture_LookAroundBlendNode>::ms_typeInfo);
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<CG_Gesture_IKTargetNode>::ms_typeInfo);
  CG_Gesture_AssignAnimationSlots();
}

/*
==============
CG_Gesture_Initialize
==============
*/
void CG_Gesture_Initialize(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand)
{
  __int64 v4; 
  GestureSlotInfo *Info; 
  __int64 v9; 
  __int64 v10; 

  v4 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 820, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 821, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v10) = 2;
    LODWORD(v9) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 822, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, v4, hand);
  Info->isInitialized = 1;
  Info->outStartTime = -1.0;
  Info->outEndTime = -1.0;
  Info->outBlendOutStartTime = -1.0;
  Info->outBlendOutEndTime = -1.0;
  Info->lastEndTime = 0;
  *(_QWORD *)&Info->animTime = 0i64;
  Info->isJumpTimeBlendActive = 0;
  Info->lastGesture = ps->gestureState.gestures[v4].index;
  Info->mainAnim = WEAP_ANIM_ROOT;
  Info->jumpTimeStartTime = -1.0;
  Info->jumpTimeEndTime = -1.0;
  Info->cancelTransitions = 0;
}

/*
==============
CG_Gesture_IsEnabled
==============
*/
bool CG_Gesture_IsEnabled(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand)
{
  GestureSlotInfo *Info; 
  GestureStateType State; 
  GestureAnimationState animState; 
  const dvar_t *v11; 
  __int64 v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 796, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v13) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 797, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v13, 2) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, slot, hand);
  State = BG_Gesture_GetState(ps, slot);
  animState = Info->animState;
  if ( State == GESTURE_STATE_OFF )
  {
    if ( animState )
      goto LABEL_13;
    return 0;
  }
  if ( State == GESTURE_STATE_STOPPING && animState == GESTURE_ANIM_STATE_OFF && Info->lastGesture )
    return 0;
LABEL_13:
  v11 = DCONST_DVARBOOL_viewmodelGestures;
  if ( !DCONST_DVARBOOL_viewmodelGestures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewmodelGestures") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  return v11->current.enabled;
}

/*
==============
CG_Gesture_LoadXAnimFromAsset
==============
*/
void CG_Gesture_LoadXAnimFromAsset(const Gesture *gesture, WeaponXAnim *pAnims, const GestureMappingInfo *mappingInfo, weapAnimFiles_t targetIndex, PlayerHandIndex hand, bool isDualWield)
{
  __int64 assetIndex; 
  __int64 v11; 

  if ( !mappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 641, ASSERT_TYPE_ASSERT, "(mappingInfo)", (const char *)&queryFormat, "mappingInfo") )
    __debugbreak();
  assetIndex = mappingInfo->assetIndex;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 645, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( (unsigned int)assetIndex >= 0x16 )
  {
    LODWORD(v11) = assetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 646, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "assetIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", v11, 22) )
      __debugbreak();
  }
  if ( CG_Gesture_XAnimExists(gesture, mappingInfo, hand, isDualWield) )
    BG_CreateXAnimFromParts(&pAnims->xanim, targetIndex, gesture->anims[assetIndex], 0);
}

/*
==============
CG_Gesture_Normalize
==============
*/

float __fastcall CG_Gesture_Normalize(double value, double min, double max)
{
  bool v9; 

  __asm
  {
    vcomiss xmm1, xmm2
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm0
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 210, ASSERT_TYPE_ASSERT, "(min <= max)", (const char *)&queryFormat, "min <= max");
  if ( v9 )
    __debugbreak();
  __asm
  {
    vcomiss xmm8, xmm6
    vcomiss xmm8, xmm7
  }
  if ( v9 )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vucomiss xmm6, xmm7
      vxorps  xmm0, xmm0, xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Gesture_ProcessViewmodel
==============
*/
void CG_Gesture_ProcessViewmodel(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, const Weapon *weapon)
{
  char v8; 
  __int64 v9; 
  __int64 v11; 
  cg_t *LocalClientGlobals; 
  XAnimTree ***v14; 
  DObj *v15; 
  CgWeaponMap *v16; 
  PlayerHandIndex WeaponHandForWeapon; 
  unsigned int v18; 
  unsigned int v19; 
  GestureSlotInfo *Info; 
  char v23; 
  bool v26; 
  const Gesture *CurrentAsset; 
  GestureAnimationState animState; 
  __int64 outState; 
  float outStatea; 
  float *outMainTreeWeight; 
  float outMainTreeWeighta; 
  float outMainTreeWeightb; 
  float outMainTreeWeightc; 
  float outBlendTime; 
  float outBlendTimea; 
  float outBlendTimeb; 
  float outBlendTimec; 
  float useIdleLeft; 
  float outCrossfadeOutStartTime; 
  char v46; 
  bool v47; 
  bool outShouldCrossfadeInOut; 
  bool outShouldBlendOut; 
  float blendTime; 
  float crossfadeOutStartTime; 
  XAnimTree *animTree; 
  void *retaddr; 
  float v56; 
  bool outShouldBlendOutToZero; 
  bool IsJumpTimeBlendActive; 

  _RAX = &retaddr;
  v8 = 0;
  __asm { vmovaps xmmword ptr [rax-58h], xmm7 }
  v9 = hand;
  v11 = localClientNum;
  IsJumpTimeBlendActive = 0;
  v46 = 0;
  LOBYTE(v56) = 0;
  outShouldBlendOutToZero = 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2817, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(outState) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2818, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outState, 2) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(outMainTreeWeight) = 2;
    LODWORD(outState) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outState, outMainTreeWeight) )
      __debugbreak();
  }
  v14 = (XAnimTree ***)&LocalClientGlobals->m_weaponHand[v9];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2823, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
    __debugbreak();
  v15 = (DObj *)*v14;
  animTree = **v14;
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2827, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v16 = CgWeaponMap::ms_instance[v11];
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2830, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  WeaponHandForWeapon = BG_PlayerLastWeaponHandForWeapon(v16, ps, weapon);
  v18 = 0;
  v19 = 0;
  v47 = WeaponHandForWeapon == WEAPON_HAND_LEFT;
  do
  {
    Info = CG_Gesture_GetInfo((LocalClientNum_t)v11, v19++, (PlayerHandIndex)v9);
    Info->mainTreeWeight = -1.0;
    Info->additiveAdsWeight = -1.0;
    Info->fingerPoseWeight = -1.0;
  }
  while ( v19 < 2 );
  __asm
  {
    vmovss  xmm7, cs:__real@bf800000
    vmovaps [rsp+0D8h+var_48], xmm6
  }
  do
  {
    _R15 = CG_Gesture_GetInfo((LocalClientNum_t)v11, v18, (PlayerHandIndex)v9);
    if ( !CG_Gesture_IsEnabled((LocalClientNum_t)v11, ps, v18, (const PlayerHandIndex)v9) )
    {
      CG_Gesture_Shutdown((LocalClientNum_t)v11, v18, (const PlayerHandIndex)v9);
LABEL_27:
      v23 = LOBYTE(v56);
      goto LABEL_28;
    }
    if ( (unsigned int)v9 >= 2 )
    {
      LODWORD(outMainTreeWeight) = 2;
      LODWORD(outState) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 914, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outState, outMainTreeWeight) )
        __debugbreak();
    }
    if ( CG_Gesture_GetInfo((LocalClientNum_t)v11, v18, (PlayerHandIndex)v9)->rebuildTree || CG_Gesture_CleanSlot((LocalClientNum_t)v11, ps, v18, (const PlayerHandIndex)v9) )
      goto LABEL_27;
    CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v18);
    if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2857, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
      __debugbreak();
    CG_Gesture_UpdateAnimationState((LocalClientNum_t)v11, ps, v18, (const PlayerHandIndex)v9, v47, CurrentAsset, animTree);
    CG_Gesture_UpdateBlendingParameters((LocalClientNum_t)v11, ps, v18, (const PlayerHandIndex)v9, v47, CurrentAsset, animTree, &blendTime, &outShouldCrossfadeInOut, &outShouldBlendOut, &crossfadeOutStartTime, &outShouldBlendOutToZero);
    __asm { vmovss  xmm6, [rsp+0D8h+blendTime] }
    if ( !_R15->isInitialized )
      goto LABEL_45;
    if ( !_R15->restoreAnims )
    {
      if ( !CurrentAsset->looping )
        goto LABEL_48;
      __asm { vucomiss xmm7, dword ptr [r15+30h] }
      if ( CurrentAsset->looping || _R15->animState == GESTURE_ANIM_STATE_OFF )
        goto LABEL_48;
LABEL_45:
      if ( !_R15->restoreAnims )
        CG_Gesture_Initialize((LocalClientNum_t)v11, ps, v18, (const PlayerHandIndex)v9);
    }
    __asm { vmovss  dword ptr [rsp+0D8h+outBlendTime], xmm6 }
    CG_Gesture_StartAnims((LocalClientNum_t)v11, CurrentAsset, ps, v18, v15, (const PlayerHandIndex)v9, v47, outBlendTime);
LABEL_48:
    __asm
    {
      vmovss  xmm0, [rsp+0D8h+crossfadeOutStartTime]
      vmovss  dword ptr [rsp+0D8h+outCrossfadeOutStartTime], xmm0
      vmovss  dword ptr [rsp+0D8h+useIdleLeft], xmm6
    }
    CG_Gesture_SwitchMainAnimations((LocalClientNum_t)v11, v15, animTree, CurrentAsset, ps, v18, (const PlayerHandIndex)v9, v47, useIdleLeft, outShouldCrossfadeInOut, outCrossfadeOutStartTime);
    animState = _R15->animState;
    switch ( animState )
    {
      case GESTURE_ANIM_STATE_IN:
        __asm
        {
          vmovss  xmm0, dword ptr [r15+30h]
          vmovss  dword ptr [rsp+0D8h+outBlendTime], xmm6
          vmovss  dword ptr [rsp+0D8h+outMainTreeWeight], xmm0
        }
        CG_Gesture_UpdateAnims((LocalClientNum_t)v11, CurrentAsset, ps, v18, (const PlayerHandIndex)v9, v15, outMainTreeWeighta, outBlendTimea);
        IsJumpTimeBlendActive = 1;
        break;
      case GESTURE_ANIM_STATE_PLAYING:
        __asm
        {
          vmovss  xmm0, dword ptr [r15+30h]
          vmovss  dword ptr [rsp+0D8h+outBlendTime], xmm6
          vmovss  dword ptr [rsp+0D8h+outMainTreeWeight], xmm0
        }
        CG_Gesture_UpdateAnims((LocalClientNum_t)v11, CurrentAsset, ps, v18, (const PlayerHandIndex)v9, v15, outMainTreeWeightb, outBlendTimeb);
        IsJumpTimeBlendActive = BG_Gesture_IsJumpTimeBlendActive(ps, v18, ps->serverTime);
        break;
      case GESTURE_ANIM_STATE_OUT:
        __asm
        {
          vmovss  xmm0, dword ptr [r15+30h]
          vmovss  dword ptr [rsp+0D8h+outBlendTime], xmm6
          vmovss  dword ptr [rsp+0D8h+outMainTreeWeight], xmm0
        }
        CG_Gesture_UpdateAnims((LocalClientNum_t)v11, CurrentAsset, ps, v18, (const PlayerHandIndex)v9, v15, outMainTreeWeightc, outBlendTimec);
        __asm { vmovaps xmm3, xmm6; blendOut }
        CG_Gesture_StopAnims(ps, v18, v15, *(const float *)&_XMM3, outShouldBlendOut, outShouldBlendOutToZero);
        v46 = 1;
        break;
      case GESTURE_ANIM_STATE_OFF:
        __asm { vmovaps xmm3, xmm6; blendOut }
        CG_Gesture_StopAnims(ps, v18, v15, *(const float *)&_XMM3, 1, 1);
        CG_Gesture_Shutdown((LocalClientNum_t)v11, v18, (const PlayerHandIndex)v9);
        break;
    }
    v8 = 1;
    v23 = CurrentAsset->weaponSettings.useLeftIdleAkimbo | LOBYTE(v56);
    LOBYTE(v56) = v23;
LABEL_28:
    ++v18;
  }
  while ( v18 < 2 );
  __asm
  {
    vmovaps xmm7, [rsp+0D8h+var_58]
    vmovaps xmm6, [rsp+0D8h+var_48]
  }
  if ( v8 )
  {
    v26 = IsJumpTimeBlendActive;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0D8h+arg_0], xmm0
    }
    CG_Gesture_UpdateMainTree((LocalClientNum_t)v11, v15, ps, (const PlayerHandIndex)v9, IsJumpTimeBlendActive, v46, &v56);
    __asm
    {
      vmovss  xmm0, [rsp+0D8h+arg_0]
      vmovss  dword ptr [rsp+0D8h+outState], xmm0
    }
    CG_Gesture_UpdateAkimboAnims((LocalClientNum_t)v11, ps, v15, (const PlayerHandIndex)v9, v47, outStatea, v26, v46, v23);
  }
}

/*
==============
CG_Gesture_SetRebuildTree
==============
*/
__int64 CG_Gesture_SetRebuildTree(LocalClientNum_t localClientNum, const playerState_s *ps, const Weapon *r_weapon)
{
  unsigned __int8 v4; 
  CgWeaponMap **v5; 
  const BgWeaponMap *v8; 
  PlayerHandIndex v9; 
  unsigned int i; 
  GestureSlotInfo *Info; 
  int StartTime; 
  bool v13; 
  unsigned int IndexBySlot; 
  unsigned int lastGesture; 
  bool v16; 
  PlayerHandIndex WeaponHandForWeapon; 

  v4 = 0;
  v5 = &CgWeaponMap::ms_instance[localClientNum];
  if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = *v5;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2916, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  WeaponHandForWeapon = BG_PlayerLastWeaponHandForWeapon(v8, ps, r_weapon);
  v9 = WEAPON_HAND_DEFAULT;
  do
  {
    for ( i = 0; i < 2; ++i )
    {
      Info = CG_Gesture_GetInfo(localClientNum, i, v9);
      if ( CG_Gesture_IsEnabled(localClientNum, ps, i, v9) )
      {
        StartTime = BG_Gesture_GetStartTime(ps, i);
        v13 = Info->lastRebuildTree == StartTime;
        IndexBySlot = BG_Gesture_GetIndexBySlot(ps, i);
        lastGesture = Info->lastGesture;
        v16 = lastGesture == IndexBySlot || !lastGesture;
        if ( !v13 || !v16 )
        {
          *(_WORD *)&Info->rebuildTree = 1;
          v4 = 1;
          Info->lastRebuildTree = StartTime;
        }
      }
    }
    ++v9;
  }
  while ( v9 <= (unsigned int)WeaponHandForWeapon );
  return v4;
}

/*
==============
CG_Gesture_SetWeightMainTree
==============
*/

void __fastcall CG_Gesture_SetWeightMainTree(DObj *obj, const playerState_s *ps, double mainTreeWeight, double additiveAdsWeight, float fingerPoseWeight, float blend, bool blendOut)
{
  XAnimTree *Tree; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  XAnimInfo *v30; 
  bool v31; 
  unsigned __int16 animIndex; 
  char v33; 
  char v34; 
  unsigned __int16 v35; 
  char v36; 
  int v38; 
  float fmt; 
  float goalTime; 
  float v56; 

  __asm
  {
    vmovss  [rsp+arg_10], xmm2
    vmovaps [rsp+138h+var_48], xmm6
    vmovaps [rsp+138h+var_D8], xmm15
    vmovaps xmm15, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 502, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  Tree = DObjGetTree(obj);
  if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 504, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !Tree->children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 505, ASSERT_TYPE_ASSERT, "(tree->children)", (const char *)&queryFormat, "tree->children") )
    __debugbreak();
  AnimInfo = GetAnimInfo(Tree->children);
  children = GetAnimInfo(AnimInfo->children)->children;
  if ( children )
  {
    __asm
    {
      vmovaps [rsp+138h+var_88], xmm10
      vmovaps [rsp+138h+var_98], xmm11
      vmovss  xmm11, cs:__real@3a83126f
      vmovaps [rsp+138h+var_A8], xmm12
      vmovss  xmm12, cs:__real@3d4ccccd
      vmovaps [rsp+138h+var_B8], xmm13
      vmovss  xmm13, cs:__real@3f800000
      vmovaps [rsp+138h+var_C8], xmm14
      vmovss  xmm14, [rsp+138h+arg_20]
      vmovaps [rsp+138h+var_58], xmm7
      vmovaps [rsp+138h+var_68], xmm8
      vmovaps [rsp+138h+var_78], xmm9
      vxorps  xmm10, xmm10, xmm10
    }
    while ( 1 )
    {
      v30 = GetAnimInfo(children);
      if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      v31 = v30->animToModel || (v30->animParent.flags & 0x210) == 0;
      animIndex = v30->animIndex;
      if ( v31 || (unsigned __int16)(animIndex - 117) > 2u && animIndex != 120 )
      {
        v33 = 0;
        if ( v31 )
          goto LABEL_27;
      }
      else
      {
        v33 = 1;
      }
      if ( (unsigned __int16)(animIndex - 93) <= 6u && BG_Demeanor_GetTargetState(ps) == DEMEANOR_STATE_NORMAL )
      {
        v34 = 1;
        goto LABEL_28;
      }
LABEL_27:
      v34 = 0;
      if ( v31 )
      {
        v35 = v30->animIndex;
        goto LABEL_31;
      }
LABEL_28:
      v35 = v30->animIndex;
      if ( (unsigned __int16)(v35 - 30) <= 2u )
      {
        v36 = 1;
        __asm { vmovaps xmm7, xmm15 }
        goto LABEL_33;
      }
LABEL_31:
      v36 = 0;
      __asm { vmovaps xmm7, xmm6 }
      if ( v33 )
        __asm { vmovaps xmm7, xmm14 }
LABEL_33:
      if ( v35 <= 0x1Bu )
      {
        v38 = 268402748;
        if ( _bittest(&v38, v35) )
          goto LABEL_56;
      }
      if ( (unsigned __int16)(v35 - 123) <= 0x27u || !v31 && !v33 && !v34 && !v36 && v30->animParent.flags )
        goto LABEL_56;
      *(double *)&_XMM0 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v35);
      __asm { vmovaps xmm9, xmm0 }
      *(double *)&_XMM0 = XAnimGetGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v30->animIndex);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = XAnimGetGoalTime(Tree, 0, XANIM_SUBTREE_DEFAULT, v30->animIndex);
      __asm { vmovss  xmm8, [rsp+138h+arg_28] }
      if ( blendOut )
      {
        __asm
        {
          vcmpltss xmm1, xmm9, xmm6
          vblendvps xmm1, xmm8, xmm0, xmm1
          vmovss  [rsp+138h+arg_0], xmm1
          vminss  xmm7, xmm6, xmm7
        }
        if ( !v34 )
        {
          __asm
          {
            vucomiss xmm6, xmm10
            vcomiss xmm9, xmm11
            vmovss  xmm8, [rsp+138h+arg_0]
          }
          goto LABEL_55;
        }
      }
      else
      {
        __asm { vcomiss xmm6, xmm9 }
        if ( (v30->state.flags & 1) != 0 )
        {
          if ( XAnimInfoIsInstantWeightChange(v30) )
            __asm { vucomiss xmm6, xmm10 }
          goto LABEL_55;
        }
        __asm { vucomiss xmm6, xmm10 }
        if ( (v30->state.flags & 1) == 0 )
        {
          __asm { vmovaps xmm7, xmm6 }
          goto LABEL_55;
        }
        __asm { vucomiss xmm6, xmm13 }
        if ( (v30->state.flags & 1) != 0 )
        {
          __asm { vmaxss  xmm7, xmm6, xmm7 }
          goto LABEL_55;
        }
      }
      __asm { vmovaps xmm8, xmm0 }
LABEL_55:
      *(double *)&_XMM0 = XAnimGetRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v30->animIndex);
      __asm
      {
        vcomiss xmm7, xmm10
        vmovss  [rsp+138h+var_108], xmm0
        vmovss  [rsp+138h+goalTime], xmm8
        vmovss  dword ptr [rsp+138h+fmt], xmm7
      }
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v30->animIndex, fmt, goalTime, v56, (scr_string_t)0, 0, 0, LINEAR, NULL);
      __asm { vmovss  xmm6, [rsp+138h+arg_10] }
LABEL_56:
      children = v30->next;
      if ( !children )
      {
        __asm
        {
          vmovaps xmm14, [rsp+138h+var_C8]
          vmovaps xmm13, [rsp+138h+var_B8]
          vmovaps xmm12, [rsp+138h+var_A8]
          vmovaps xmm11, [rsp+138h+var_98]
          vmovaps xmm10, [rsp+138h+var_88]
          vmovaps xmm9, [rsp+138h+var_78]
          vmovaps xmm8, [rsp+138h+var_68]
          vmovaps xmm7, [rsp+138h+var_58]
        }
        break;
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+138h+var_48]
    vmovaps xmm15, [rsp+138h+var_D8]
  }
}

/*
==============
CG_Gesture_ShouldBlendOutOfAnim
==============
*/
bool CG_Gesture_ShouldBlendOutOfAnim(const LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, const GestureWeaponAnimBlendOutInfo **outBlendOutInfo)
{
  __int64 v8; 
  cg_t *LocalClientGlobals; 
  const XAnimTree **p_tree; 
  const XAnimTree *v13; 
  unsigned int v14; 
  unsigned int v16; 
  unsigned int *p_animIndexToBlendOut; 
  char v18; 
  char v19; 
  bool result; 
  __int64 v22; 
  __int64 v23; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v8 = hand;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3385, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3386, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v8 >= 2 )
  {
    LODWORD(v23) = 2;
    LODWORD(v22) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3387, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  if ( !outBlendOutInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3388, ASSERT_TYPE_ASSERT, "(outBlendOutInfo)", (const char *)&queryFormat, "outBlendOutInfo") )
    __debugbreak();
  *outBlendOutInfo = NULL;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3393, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (unsigned int)v8 >= 2 )
  {
    LODWORD(v23) = 2;
    LODWORD(v22) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  if ( (cg_t *)((char *)LocalClientGlobals + 40 * v8) == (cg_t *)-807496i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3397, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
    __debugbreak();
  p_tree = (const XAnimTree **)&LocalClientGlobals->m_weaponHand[v8].viewModelDObj->tree;
  if ( !p_tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3399, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v13 = *p_tree;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3402, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  v14 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  while ( !CG_Gesture_IsEnabled(localClientNum, ps, v14, (const PlayerHandIndex)v8) || !BG_Gesture_GetCurrentAsset(ps, v14)->weaponSettings.blendOutRaise )
  {
LABEL_35:
    if ( ++v14 >= 2 )
    {
      result = 0;
      goto LABEL_37;
    }
  }
  v16 = 0;
  p_animIndexToBlendOut = (unsigned int *)&s_raiseBlendOutTable[0].animIndexToBlendOut;
  while ( 1 )
  {
    *(double *)&_XMM0 = XAnimGetWeight(v13, 0, XANIM_SUBTREE_DEFAULT, *p_animIndexToBlendOut);
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v18 | v19) )
    {
      *(double *)&_XMM0 = XAnimGetGoalWeight(v13, 0, XANIM_SUBTREE_DEFAULT, *p_animIndexToBlendOut);
      __asm { vucomiss xmm0, xmm6 }
      if ( !v19 )
        break;
    }
    ++v16;
    p_animIndexToBlendOut += 5;
    if ( v16 >= 5 )
      goto LABEL_35;
  }
  *outBlendOutInfo = (const GestureWeaponAnimBlendOutInfo *)(p_animIndexToBlendOut - 1);
  result = 1;
LABEL_37:
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
  return result;
}

/*
==============
CG_Gesture_ShouldShutDown
==============
*/
char CG_Gesture_ShouldShutDown(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand)
{
  cg_t *LocalClientGlobals; 
  GestureSlotInfo *Info; 
  const snapshot_t *nextSnap; 
  GestureSlotInfo *v11; 
  bool v12; 
  bool v13; 
  __int64 v15; 
  __int64 v16; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 889, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v15) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 890, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v15, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v16) = 2;
    LODWORD(v15) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 891, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Info = CG_Gesture_GetInfo(localClientNum, slot, hand);
  nextSnap = LocalClientGlobals->nextSnap;
  v11 = Info;
  v12 = BG_Gesture_GetState(ps, slot) == GESTURE_STATE_OFF && v11->animState;
  v13 = nextSnap && LocalClientGlobals->killCamEndTime == nextSnap->serverTime;
  if ( (!v12 || !v13) && BG_Gesture_GetCurrentAsset(ps, slot) )
    return 0;
  CG_Gesture_Shutdown(localClientNum, slot, hand);
  return 1;
}

/*
==============
CG_Gesture_Shutdown
==============
*/
void CG_Gesture_Shutdown(LocalClientNum_t localClientNum, const unsigned int slot, const PlayerHandIndex hand)
{
  GestureSlotInfo *Info; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  if ( slot >= 2 )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 845, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", slot, v10) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 846, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, slot, hand);
  *(_WORD *)&Info->rebuildTree = 1;
  Info->lastEndTime = 0;
  Info->outStartTime = -1.0;
  Info->outEndTime = -1.0;
  Info->outBlendOutStartTime = -1.0;
  Info->outBlendOutEndTime = -1.0;
  *(_QWORD *)&Info->animTime = 0i64;
  *(_QWORD *)&Info->animState = 0i64;
  *(_DWORD *)&Info->isMainAnimAdditive = 0;
  Info->jumpTimeStartTime = -1.0;
  Info->jumpTimeEndTime = -1.0;
  *(_WORD *)&Info->cancelTransitions = 0;
}

/*
==============
CG_Gesture_ShutdownSlots
==============
*/
void CG_Gesture_ShutdownSlots(LocalClientNum_t localClientNum, const PlayerHandIndex hand)
{
  unsigned int i; 
  int v6; 

  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 874, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", hand, v6) )
      __debugbreak();
  }
  for ( i = 0; i < 2; ++i )
  {
    if ( CG_Gesture_GetInfo(localClientNum, i, hand)->animState )
      CG_Gesture_Shutdown(localClientNum, i, hand);
  }
}

/*
==============
CG_Gesture_StartAnims
==============
*/
void CG_Gesture_StartAnims(LocalClientNum_t localClientNum, const Gesture *gesture, const playerState_s *ps, const unsigned int slot, DObj *obj, const PlayerHandIndex hand, const bool isDualWield, const float blendTime)
{
  __int64 v16; 
  DObj *v17; 
  char v23; 
  bool v24; 
  PlayerHandIndex v25; 
  bool AnimationSlot; 
  unsigned int v29; 
  GestureDirectionalAssetIndex *p_assetIndex; 
  int v31; 
  bool v37; 
  __int64 v38; 
  int v39; 
  const GestureAnimSlotInfo *v40; 
  unsigned int childIndex; 
  unsigned int *AnimMappingInfo; 
  float fmt; 
  float fmta; 
  __int64 returnOverlay; 
  __int64 returnOverlaya; 
  float returnOverlayb; 
  float returnOverlayc; 
  weapAnimFiles_t *outIndex; 
  float outIndexa; 
  float outIndexb; 
  char v59; 
  void *retaddr; 
  weapAnimFiles_t v61; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  v16 = localClientNum;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1823, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1824, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v17 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1825, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(returnOverlay) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1826, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", returnOverlay, 2) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm6, xmm7
  }
  if ( !CgWeaponMap::ms_instance[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( BG_UseFastOffhand(ps, CgWeaponMap::ms_instance[v16]) )
  {
    _RBX = DCONST_DVARFLT_perk_fastOffhandMultiplier;
    if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+28h]
      vcomiss xmm6, xmm9
    }
    if ( v23 | v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1832, ASSERT_TYPE_ASSERT, "(offhandMultiplier > 0.0f)", (const char *)&queryFormat, "offhandMultiplier > 0.0f") )
      __debugbreak();
    __asm { vdivss  xmm6, xmm7, xmm6 }
  }
  if ( gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
  {
    v24 = isDualWield;
    v25 = hand;
    __asm { vmovaps [rsp+0C8h+var_58], xmm8 }
    AnimationSlot = CG_Gesture_GetAnimationSlot(gesture, slot, hand, isDualWield, GESTURE_ASSET_RIGHT_CENTER, 1, &v61);
    __asm { vmovss  xmm8, [rsp+0C8h+blendTime] }
    _EBX = 0;
    if ( AnimationSlot )
    {
      __asm
      {
        vmovss  dword ptr [rsp+0C8h+outIndex], xmm6
        vmovss  dword ptr [rsp+0C8h+returnOverlay], xmm8
        vmovss  dword ptr [rsp+0C8h+fmt], xmm7
      }
      XAnimSetGoalWeight(v17, 0, XANIM_SUBTREE_DEFAULT, v61, fmt, returnOverlayb, outIndexa, (scr_string_t)0, 1u, 0, LINEAR, NULL);
    }
    v29 = 0;
    p_assetIndex = &s_blendTreeMappings[0].assetIndex;
    while ( 1 )
    {
      v31 = *((_DWORD *)p_assetIndex + 1);
      _EAX = v31 & 0xFFFFFFFD;
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, ebx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm9, xmm2
        vmovss  [rsp+0C8h+arg_0], xmm0
      }
      if ( v31 == 3 )
      {
        v37 = gesture->type == GESTURE_TYPE_DIRECTIONAL;
        goto LABEL_30;
      }
      if ( v31 == 5 )
        break;
      if ( v31 == 6 )
      {
        v37 = gesture->type == GESTURE_TYPE_IK_TARGET;
LABEL_30:
        if ( v37 )
          goto LABEL_53;
        goto LABEL_31;
      }
      if ( v31 == 1 )
      {
LABEL_53:
        AnimMappingInfo = (unsigned int *)CG_Gesture_GetAnimMappingInfo(slot, v29);
        if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
          __debugbreak();
        childIndex = *AnimMappingInfo;
        goto LABEL_44;
      }
LABEL_31:
      v38 = *(int *)p_assetIndex;
      if ( (_DWORD)v38 == 23 )
        goto LABEL_45;
      if ( (unsigned int)v38 >= 0x16 )
      {
        LODWORD(outIndex) = 22;
        SLODWORD(returnOverlaya) = *p_assetIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "assetIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", returnOverlaya, outIndex) )
          __debugbreak();
      }
      if ( v24 )
      {
        v39 = *((_DWORD *)p_assetIndex + 2);
        if ( v25 != v39 && v39 != 2 && gesture->weaponSettings.splitAnimsAkimbo )
          goto LABEL_45;
      }
      if ( !gesture->anims[v38] )
        goto LABEL_45;
      v40 = CG_Gesture_GetAnimMappingInfo(slot, v29);
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
        __debugbreak();
      childIndex = v40->childIndex;
LABEL_44:
      __asm
      {
        vmovss  xmm0, [rsp+0C8h+arg_0]
        vmovss  dword ptr [rsp+0C8h+outIndex], xmm6
        vmovss  dword ptr [rsp+0C8h+returnOverlay], xmm0
        vmovss  dword ptr [rsp+0C8h+fmt], xmm7
      }
      XAnimSetGoalWeight(v17, 0, XANIM_SUBTREE_DEFAULT, childIndex, fmta, returnOverlayc, outIndexb, (scr_string_t)0, 1u, 1, LINEAR, NULL);
LABEL_45:
      ++v29;
      p_assetIndex += 6;
      _EBX = 0;
      if ( v29 >= 0x16 )
      {
        __asm { vmovaps xmm8, [rsp+0C8h+var_58] }
        goto LABEL_47;
      }
    }
    v37 = gesture->type == GESTURE_TYPE_LOOK_AROUND;
    goto LABEL_30;
  }
LABEL_47:
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CG_Gesture_StartCenterAnimations
==============
*/
void CG_Gesture_StartCenterAnimations(DObj *obj, XAnimTree *animTree, const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, GestureDirectionalAssetIndex anim, GestureDirectionalAssetIndex animAdditive, float startTime, float blendTime)
{
  unsigned int v17; 
  unsigned int v21; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  __int64 returnOverlay; 
  float returnOverlaya; 
  float returnOverlayb; 
  float outIndex; 
  float outIndexa; 
  weapAnimFiles_t v37; 
  weapAnimFiles_t v38; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2474, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2475, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2476, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(returnOverlay) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2477, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", returnOverlay, 2) )
      __debugbreak();
  }
  if ( gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_38], xmm6
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovaps [rsp+0B8h+var_58], xmm8
    }
    CG_Gesture_GetAnimationSlot(gesture, slot, hand, isDualWield, anim, 0, &v38);
    CG_Gesture_GetAnimationSlot(gesture, slot, hand, isDualWield, animAdditive, 1, &v37);
    v17 = v38;
    __asm
    {
      vmovss  xmm7, [rsp+0B8h+blendTime]
      vmovss  xmm8, [rsp+0B8h+startTime]
      vmovss  xmm6, cs:__real@3f800000
    }
    if ( v38 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+outIndex], xmm6
        vmovss  dword ptr [rsp+0B8h+returnOverlay], xmm7
        vmovss  dword ptr [rsp+0B8h+fmt], xmm6
      }
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v38, fmt, returnOverlaya, outIndex, (scr_string_t)0, 1u, 1, LINEAR, NULL);
      __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm8 }
      XAnimSetTime(animTree, 0, XANIM_SUBTREE_DEFAULT, v17, fmta);
    }
    v21 = v37;
    if ( v37 )
    {
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+outIndex], xmm6
        vmovss  dword ptr [rsp+0B8h+returnOverlay], xmm7
        vmovss  dword ptr [rsp+0B8h+fmt], xmm6
      }
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v37, fmtb, returnOverlayb, outIndexa, (scr_string_t)0, 1u, 1, LINEAR, NULL);
      __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm8 }
      XAnimSetChildTimes(animTree, 0, XANIM_SUBTREE_DEFAULT, v21, fmtc);
    }
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm6, [rsp+0B8h+var_38]
      vmovaps xmm8, [rsp+0B8h+var_58]
    }
  }
}

/*
==============
CG_Gesture_StopAnim
==============
*/

void __fastcall CG_Gesture_StopAnim(DObj *obj, XAnimTree *animTree, weapAnimFiles_t animIndex, double weight, const float blendOut)
{
  char v17; 
  char v18; 
  float fmt; 
  float goalTime; 
  float v25; 
  char v27; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm6, xmm3
    vcomiss xmm3, xmm7
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1108, ASSERT_TYPE_ASSERT, "(weight >= 0.0f && weight <= 1.0f)", (const char *)&queryFormat, "weight >= 0.0f && weight <= 1.0f") )
    __debugbreak();
  *(double *)&_XMM0 = XAnimGetWeight(animTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovss  xmm8, [rsp+98h+blendOut]
  }
  if ( !(v17 | v18) )
    goto LABEL_5;
  *(double *)&_XMM0 = XAnimGetGoalTime(animTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  __asm { vcomiss xmm8, xmm0 }
  if ( v17 )
  {
LABEL_5:
    __asm
    {
      vmovss  [rsp+98h+var_68], xmm7
      vmovss  [rsp+98h+goalTime], xmm8
      vmovss  dword ptr [rsp+98h+fmt], xmm6
    }
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, fmt, goalTime, v25, (scr_string_t)0, 0, 0, LINEAR, NULL);
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v27;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_Gesture_StopAnims
==============
*/

void __fastcall CG_Gesture_StopAnims(const playerState_s *ps, const unsigned int slot, DObj *obj, double blendOut, const bool blendOutGestureAnims, const bool blendOutToZero)
{
  const XAnimTree *Tree; 
  GestureNodeType *p_nodeType; 
  unsigned int IndexBySlot; 
  unsigned int v27; 
  bool v28; 
  unsigned int *AnimMappingInfo; 
  bool v30; 
  bool v31; 
  unsigned int v32; 
  char v33; 
  const GestureAnimSlotInfo *v34; 
  bool v35; 
  bool v36; 
  unsigned int childIndex; 
  float fmt; 
  float fmta; 
  __int64 goalTime; 
  float goalTimea; 
  float goalTimeb; 
  __int64 rate; 
  float ratea; 
  float rateb; 

  __asm
  {
    vmovaps [rsp+0C8h+var_58], xmm8
    vmovaps xmm8, xmm3
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1783, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1784, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(goalTime) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1785, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", goalTime, 2) )
      __debugbreak();
  }
  Tree = DObjGetTree(obj);
  if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1788, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( blendOutGestureAnims )
  {
    p_nodeType = &s_blendTreeMappings[0].nodeType;
    _EDI = 0;
    _ER13 = blendOutToZero;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovd   xmm0, r13d
      vmovd   xmm1, eax
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3a83126f
      vmovaps [rsp+0C8h+var_68], xmm9
      vxorps  xmm9, xmm9, xmm9
      vblendvps xmm0, xmm9, xmm1, xmm2
      vmovss  dword ptr [rsp+0C8h+blendOutGestureAnims], xmm0
      vmovss  xmm6, dword ptr [rsp+0C8h+blendOutGestureAnims]
    }
    do
    {
      IndexBySlot = BG_Gesture_GetIndexBySlot(ps, slot);
      v27 = IndexBySlot;
      if ( IndexBySlot >= 0x100 )
      {
        LODWORD(rate) = 256;
        LODWORD(goalTime) = IndexBySlot;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1799, ASSERT_TYPE_ASSERT, "(unsigned)( gestureIndex ) < (unsigned)( (1<<8) )", "gestureIndex doesn't index MAX_GESTURE_DEFS\n\t%i not in [0, %i)", goalTime, rate) )
          __debugbreak();
      }
      v28 = *p_nodeType == GESTURE_NODE_TYPE_ADDITIVE_LOOK_AROUND && (!BG_Demeanor_IsPlaying(ps) || !BG_Demeanor_ShouldEnableBlendToLoop(ps, v27));
      if ( *p_nodeType == GESTURE_NODE_TYPE_RELATIVE_ROOT || v28 || *p_nodeType == GESTURE_NODE_TYPE_ADDITIVE_DIRECTIONAL_BLEND || blendOutToZero )
      {
        AnimMappingInfo = (unsigned int *)CG_Gesture_GetAnimMappingInfo(slot, _EDI);
        v30 = AnimMappingInfo == NULL;
        if ( !AnimMappingInfo )
        {
          v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping");
          v30 = !v31;
          if ( v31 )
            __debugbreak();
        }
        __asm { vcomiss xmm6, xmm9 }
        v32 = *AnimMappingInfo;
        __asm { vcomiss xmm6, xmm7 }
        if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1108, ASSERT_TYPE_ASSERT, "(weight >= 0.0f && weight <= 1.0f)", (const char *)&queryFormat, "weight >= 0.0f && weight <= 1.0f") )
          __debugbreak();
        *(double *)&_XMM0 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v32);
        __asm { vcomiss xmm0, xmm6 }
        if ( !(v33 | v30) )
          goto LABEL_35;
        *(double *)&_XMM0 = XAnimGetGoalTime(Tree, 0, XANIM_SUBTREE_DEFAULT, v32);
        __asm { vcomiss xmm8, xmm0 }
        if ( v33 )
        {
LABEL_35:
          __asm
          {
            vmovss  [rsp+0C8h+rate], xmm7
            vmovss  [rsp+0C8h+goalTime], xmm8
            vmovss  dword ptr [rsp+0C8h+fmt], xmm6
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v32, fmt, goalTimea, ratea, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
        v34 = CG_Gesture_GetAnimMappingInfo(slot, _EDI);
        v35 = v34 == NULL;
        if ( !v34 )
        {
          v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping");
          v35 = !v36;
          if ( v36 )
            __debugbreak();
        }
        __asm { vcomiss xmm6, xmm9 }
        childIndex = v34->childIndex;
        __asm { vcomiss xmm6, xmm7 }
        if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1108, ASSERT_TYPE_ASSERT, "(weight >= 0.0f && weight <= 1.0f)", (const char *)&queryFormat, "weight >= 0.0f && weight <= 1.0f") )
          __debugbreak();
        *(double *)&_XMM0 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, childIndex);
        __asm { vcomiss xmm0, xmm6 }
        if ( !(v33 | v30) )
          goto LABEL_44;
        *(double *)&_XMM0 = XAnimGetGoalTime(Tree, 0, XANIM_SUBTREE_DEFAULT, childIndex);
        __asm { vcomiss xmm8, xmm0 }
        if ( v33 )
        {
LABEL_44:
          __asm
          {
            vmovss  [rsp+0C8h+rate], xmm7
            vmovss  [rsp+0C8h+goalTime], xmm8
            vmovss  dword ptr [rsp+0C8h+fmt], xmm6
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, childIndex, fmta, goalTimeb, rateb, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
      }
      ++_EDI;
      p_nodeType += 6;
    }
    while ( _EDI < 22 );
    __asm
    {
      vmovaps xmm9, [rsp+0C8h+var_68]
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
  __asm { vmovaps xmm8, [rsp+0C8h+var_58] }
}

/*
==============
CG_Gesture_StopMainAnimations
==============
*/
void CG_Gesture_StopMainAnimations(DObj *obj, XAnimTree *animTree, const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, float blendTime)
{
  PlayerHandIndex v13; 
  bool v14; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  __int64 returnOverlay; 
  weapAnimFiles_t v30; 
  weapAnimFiles_t v31[3]; 
  weapAnimFiles_t outIndex; 
  weapAnimFiles_t v34; 
  weapAnimFiles_t v35; 
  weapAnimFiles_t animIndex; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2439, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2440, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2441, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(returnOverlay) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2442, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", returnOverlay, 2) )
      __debugbreak();
  }
  if ( gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
  {
    v13 = hand;
    v14 = isDualWield;
    __asm { vmovaps [rsp+98h+var_48], xmm6 }
    CG_Gesture_GetAnimationSlot(gesture, slot, hand, isDualWield, GESTURE_ASSET_LEFT_CENTER, 0, &animIndex);
    CG_Gesture_GetAnimationSlot(gesture, slot, v13, v14, GESTURE_ASSET_RIGHT_CENTER, 1, &outIndex);
    CG_Gesture_GetAnimationSlot(gesture, slot, v13, v14, GESTURE_ASSET_IN, 0, &v34);
    CG_Gesture_GetAnimationSlot(gesture, slot, v13, v14, GESTURE_ASSET_IN_ADDITIVE, 1, &v35);
    CG_Gesture_GetAnimationSlot(gesture, slot, v13, v14, GESTURE_ASSET_OUT, 0, &v30);
    CG_Gesture_GetAnimationSlot(gesture, slot, v13, v14, GESTURE_ASSET_OUT_ADDITIVE, 1, v31);
    __asm
    {
      vmovss  xmm6, [rsp+98h+blendTime]
      vxorps  xmm3, xmm3, xmm3; weight
      vmovss  dword ptr [rsp+98h+fmt], xmm6
    }
    CG_Gesture_StopAnim(obj, animTree, animIndex, *(const float *)&_XMM3, fmt);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; weight
      vmovss  dword ptr [rsp+98h+fmt], xmm6
    }
    CG_Gesture_StopAnim(obj, animTree, outIndex, *(const float *)&_XMM3, fmta);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; weight
      vmovss  dword ptr [rsp+98h+fmt], xmm6
    }
    CG_Gesture_StopAnim(obj, animTree, v34, *(const float *)&_XMM3, fmtb);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; weight
      vmovss  dword ptr [rsp+98h+fmt], xmm6
    }
    CG_Gesture_StopAnim(obj, animTree, v35, *(const float *)&_XMM3, fmtc);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; weight
      vmovss  dword ptr [rsp+98h+fmt], xmm6
    }
    CG_Gesture_StopAnim(obj, animTree, v30, *(const float *)&_XMM3, fmtd);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; weight
      vmovss  dword ptr [rsp+98h+fmt], xmm6
    }
    CG_Gesture_StopAnim(obj, animTree, v31[0], *(const float *)&_XMM3, fmte);
    __asm { vmovaps xmm6, [rsp+98h+var_48] }
  }
}

/*
==============
CG_Gesture_SwitchMainAnimations
==============
*/
void CG_Gesture_SwitchMainAnimations(LocalClientNum_t localClientNum, DObj *obj, XAnimTree *animTree, const Gesture *gesture, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const float blendTime, const bool crossfadeInOut, const float crossfadeOutStartTime)
{
  __int64 v21; 
  PlayerHandIndex v22; 
  GestureSlotInfo *Info; 
  GestureAnimationSettings *AnimationSettings; 
  GestureType type; 
  GestureMappingInfo *v26; 
  GestureMappingInfo *v27; 
  GestureMappingInfo *v28; 
  GestureDirectionalAssetIndex v29; 
  bool v30; 
  GestureDirectionalAssetIndex v31; 
  bool v32; 
  GestureDirectionalAssetIndex v33; 
  bool v34; 
  __int32 v35; 
  bool v38; 
  char v39; 
  unsigned __int8 v40; 
  int jumpTime; 
  int StateFromAnimTime; 
  GestureAnimationState v47; 
  PlayerHandIndex v48; 
  bool v70; 
  GestureMappingInfo **outOut; 
  weapAnimFiles_t *outIndex; 
  float outIndexa; 
  float v77; 
  float v78; 
  weapAnimFiles_t v79; 
  weapAnimFiles_t v80; 
  GestureMappingInfo *outMain; 
  GestureMappingInfo *outIn; 
  GestureMappingInfo *mappingInfo; 
  GestureAnimationSettings *v84; 
  GestureDirectionalAssetIndex animAdditive; 
  GestureAnimationState psa; 
  bool slota; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2512, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2513, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2514, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  _R15 = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2515, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v21 = slot;
  if ( slot >= 2 )
  {
    LODWORD(outOut) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2516, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", outOut, 2) )
      __debugbreak();
  }
  v22 = hand;
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(outIndex) = 2;
    LODWORD(outOut) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2517, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outOut, outIndex) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, slot, v22);
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  psa = Info->animState;
  type = gesture->type;
  v84 = AnimationSettings;
  if ( (unsigned int)type <= GESTURE_TYPE_IK_TARGET )
  {
    __asm
    {
      vmovaps [rsp+118h+var_58], xmm6
      vmovaps [rsp+118h+var_68], xmm7
      vmovaps [rsp+118h+var_78], xmm8
      vmovaps [rsp+118h+var_88], xmm9
      vmovaps [rsp+118h+var_98], xmm10
    }
    hand = WEAPON_HAND_DEFAULT;
    v79 = WEAP_ANIM_ROOT;
    v80 = WEAP_ANIM_ROOT;
    animAdditive = GESTURE_ASSET_RIGHT_CENTER;
    CG_Gesture_GetMainAnimMappings(GESTURE_ASSET_LEFT_CENTER, GESTURE_ASSET_IN, GESTURE_ASSET_OUT, (const GestureMappingInfo **)&outMain, (const GestureMappingInfo **)&outIn, (const GestureMappingInfo **)&mappingInfo);
    v26 = outMain;
    if ( !outMain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2401, ASSERT_TYPE_ASSERT, "(mainMapping)", (const char *)&queryFormat, "mainMapping") )
      __debugbreak();
    v27 = outIn;
    if ( !outIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2402, ASSERT_TYPE_ASSERT, "(inMapping)", (const char *)&queryFormat, "inMapping") )
      __debugbreak();
    v28 = mappingInfo;
    if ( !mappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2403, ASSERT_TYPE_ASSERT, "(outMapping)", (const char *)&queryFormat, "outMapping") )
      __debugbreak();
    if ( CG_Gesture_XAnimExists(gesture, v26, v22, isDualWield) )
    {
      slota = 0;
      v29 = GESTURE_ASSET_LEFT_CENTER;
    }
    else
    {
      slota = 1;
      v29 = GESTURE_ASSET_RIGHT_CENTER;
    }
    v30 = CG_Gesture_XAnimExists(gesture, v27, v22, isDualWield);
    v31 = GESTURE_ASSET_IN_ADDITIVE;
    if ( v30 )
      v31 = GESTURE_ASSET_IN;
    v32 = CG_Gesture_XAnimExists(gesture, v28, v22, isDualWield);
    v33 = GESTURE_ASSET_OUT_ADDITIVE;
    if ( v32 )
      v33 = GESTURE_ASSET_OUT;
    CG_Gesture_GetAnimationSlot(gesture, v21, v22, isDualWield, v29, slota, (weapAnimFiles_t *)&hand);
    v34 = slota;
    CG_Gesture_GetAnimationSlot(gesture, v21, v22, isDualWield, v31, slota, &v79);
    CG_Gesture_GetAnimationSlot(gesture, v21, v22, isDualWield, v33, slota, &v80);
    v35 = hand;
    _ER9 = 0;
    __asm { vmovss  xmm6, [rsp+118h+blendTime] }
    v38 = crossfadeInOut;
    v39 = 0;
    v40 = 0;
    hand = WEAPON_HAND_DEFAULT;
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm10, xmm10, xmm10
    }
    if ( Info->hasJumpTime )
    {
      *(double *)&_XMM0 = BG_Gesture_GetJumpTimeNormalized(_R15, gesture, v21);
      __asm { vmovaps xmm10, xmm0 }
      jumpTime = _R15->gestureState.gestures[v21].jumpTime;
      if ( jumpTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2560, ASSERT_TYPE_ASSERT, "(animJumpTime > 0)", (const char *)&queryFormat, "animJumpTime > 0") )
        __debugbreak();
      StateFromAnimTime = CG_Gesture_GetStateFromAnimTime(localClientNum, _R15, v21, gesture, jumpTime);
      v47 = psa;
      if ( psa != StateFromAnimTime || v38 )
      {
        v34 = slota;
        v40 = 0;
        v39 = 0;
        _ER9 = 0;
      }
      else
      {
        v34 = slota;
        v39 = 0;
        _ER9 = 0;
        v40 = 1;
      }
    }
    else
    {
      v47 = psa;
    }
    if ( v47 == GESTURE_ANIM_STATE_IN )
    {
      if ( v79 )
      {
        v35 = v79;
        animAdditive = GESTURE_ASSET_IN_ADDITIVE;
        v48 = 10;
      }
      else
      {
        v48 = hand;
      }
      if ( v84->hasTransitions && Info->isRestarting )
        __asm { vmovaps xmm8, xmm6 }
    }
    else if ( v47 == GESTURE_ANIM_STATE_OUT && v80 )
    {
      hand = NUM_WEAPON_HANDS|WEAPON_HAND_LEFT|0x8;
      v35 = v80;
      animAdditive = GESTURE_ASSET_OUT_ADDITIVE;
      __asm { vmovss  xmm3, cs:__real@3dcccccd }
      if ( !v40 )
      {
        __asm
        {
          vmovd   xmm0, dword ptr [r15+45Ch]
          vmovd   xmm1, r9d
          vpcmpeqd xmm2, xmm0, xmm1
          vmovss  xmm1, cs:__real@3d4ccccd
          vblendvps xmm0, xmm1, xmm3, xmm2
          vmovaps xmm6, xmm0
          vmovss  [rsp+118h+slot], xmm0
          vmovaps xmm8, xmm0
        }
      }
      if ( v38 )
      {
        __asm
        {
          vmovaps xmm6, xmm3
          vmovaps xmm8, xmm3
        }
      }
      _EAX = v38;
      v48 = hand;
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, r9d
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, [rsp+118h+crossfadeOutStartTime]
        vblendvps xmm0, xmm1, xmm9, xmm2
        vmovaps xmm7, xmm0
        vmovss  [rsp+118h+slot], xmm0
      }
      if ( Info->cancelTransitions )
        v39 = 1;
    }
    else
    {
      v48 = hand;
    }
    _EAX = v40;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, r9d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm10, xmm7, xmm2
      vmovaps xmm10, [rsp+118h+var_98]
      vmovss  [rsp+118h+slot], xmm0
    }
    if ( Info->restoreAnims )
    {
      *(double *)&_XMM0 = CG_Gesture_GetAnimTimeArchived(localClientNum, v21, v22, gesture);
      v47 = psa;
      v39 = 0;
      __asm
      {
        vmovaps xmm7, xmm0
        vxorps  xmm6, xmm6, xmm6
      }
    }
    else
    {
      __asm { vmovss  xmm7, [rsp+118h+slot] }
    }
    __asm { vmovaps xmm9, [rsp+118h+var_88] }
    if ( Info->mainAnim != v35 || Info->restoreAnims )
    {
      if ( v47 )
      {
        if ( !v39 )
        {
          v70 = isDualWield;
          __asm { vmovss  dword ptr [rsp+118h+outIndex], xmm8 }
          CG_Gesture_StopMainAnimations(obj, animTree, gesture, v21, v22, isDualWield, outIndexa);
          __asm
          {
            vmovss  [rsp+118h+var_D0], xmm6
            vmovss  [rsp+118h+var_D8], xmm7
          }
          CG_Gesture_StartCenterAnimations(obj, animTree, gesture, v21, v22, v70, (GestureDirectionalAssetIndex)v48, animAdditive, v77, v78);
          Info->mainAnim = v35;
          Info->isMainAnimAdditive = v34;
          Info->restoreAnims = 0;
        }
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+118h+var_68]
      vmovaps xmm6, [rsp+118h+var_58]
      vmovaps xmm8, [rsp+118h+var_78]
    }
  }
}

/*
==============
CG_Gesture_TransitionKillcamGestures
==============
*/
void CG_Gesture_TransitionKillcamGestures(LocalClientNum_t localClientNum, const playerState_s *const ps)
{
  const playerState_s *v9; 
  const dvar_t *v11; 
  CgWeaponMap *Instance; 
  unsigned int *p_gestureState; 
  unsigned int v17; 
  PlayerHandIndex v18; 
  GestureSlotInfo *Info; 
  const Gesture *CurrentAsset; 
  GestureAnimationSettings *AnimationSettings; 
  unsigned int IndexFromGesture; 
  bool v24; 
  bool v25; 
  unsigned int v29; 
  unsigned int serverTime; 
  __int64 v50; 
  PlayerHandIndex WeaponHandForViewWeapon; 

  v9 = ps;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1310, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1311, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v9->deltaTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1312, ASSERT_TYPE_ASSERT, "(0 < ps->deltaTime)", "%s\n\tCG_Gesture_TransitionKillcamGestures() invoked while not in killcam", "0 < ps->deltaTime") )
    __debugbreak();
  v11 = DVARBOOL_viewmodelGesturesResetForKillcam;
  if ( !DVARBOOL_viewmodelGesturesResetForKillcam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewmodelGesturesResetForKillcam") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_48], xmm6
      vmovaps [rsp+0D8h+var_58], xmm7
      vmovaps [rsp+0D8h+var_68], xmm8
      vmovaps [rsp+0D8h+var_78], xmm9
      vmovaps [rsp+0D8h+var_88], xmm10
    }
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1320, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    __asm
    {
      vmovss  xmm8, cs:__real@447a0000
      vmovss  xmm9, cs:__real@3a83126f
      vmovss  xmm10, cs:__real@3f800000
    }
    WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(Instance, v9);
    p_gestureState = (unsigned int *)&v9->gestureState;
    v17 = 0;
    while ( 1 )
    {
      v18 = WEAPON_HAND_DEFAULT;
      do
      {
        Info = CG_Gesture_GetInfo(localClientNum, v17, v18);
        _R15 = Info;
        if ( !*p_gestureState )
        {
          Info->restoreAnims = 0;
          CG_Gesture_Shutdown(localClientNum, v17, v18);
          goto LABEL_42;
        }
        CurrentAsset = BG_Gesture_GetCurrentAsset(v9, v17);
        if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1341, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
          __debugbreak();
        AnimationSettings = BG_Gesture_GetAnimationSettings(CurrentAsset);
        if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1343, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
          __debugbreak();
        IndexFromGesture = BG_Gesture_GetIndexFromGesture(CurrentAsset);
        *(double *)&_XMM0 = BG_Gesture_GetElapsedTime(ps, v17, ps->serverTime);
        v24 = 0;
        v25 = !CurrentAsset->looping;
        __asm { vmulss  xmm6, xmm0, xmm8 }
        if ( CurrentAsset->looping )
        {
          if ( AnimationSettings->hasTransitions )
          {
            v29 = *p_gestureState;
            v24 = *p_gestureState == 0;
            v25 = *p_gestureState == 1;
            if ( *p_gestureState == 1 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [rbx+1Ch]
                vcomiss xmm0, xmm6
              }
              if ( !*p_gestureState )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
                  vsubss  xmm7, xmm6, xmm0
                }
                BG_Gesture_GetSectionStartTime(IndexFromGesture, GESTURE_SECTION_LOOP);
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, dword ptr [rbx]; Y
                  vxorps  xmm6, xmm6, xmm6
                  vmovaps xmm0, xmm7; X
                  vcvtsi2ss xmm6, xmm6, eax
                }
                *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
                __asm { vaddss  xmm6, xmm0, xmm6 }
              }
            }
            else
            {
              v24 = v29 < 2;
              v25 = v29 == 2;
              if ( v29 == 2 )
              {
                if ( (int)p_gestureState[5] <= 0 )
                {
                  LODWORD(v50) = p_gestureState[5];
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1360, ASSERT_TYPE_ASSERT, "( 0 ) < ( gestureState->stopTime )", "%s < %s\n\t%i, %i", "0", "gestureState->stopTime", 0i64, v50) )
                    __debugbreak();
                }
                BG_Gesture_GetSectionStartTime(IndexFromGesture, GESTURE_SECTION_OUT);
                v9 = ps;
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, eax
                  vxorps  xmm0, xmm0, xmm0
                }
                serverTime = ps->serverTime;
                v24 = serverTime < p_gestureState[5];
                v25 = serverTime == p_gestureState[5];
                __asm
                {
                  vcvtsi2ss xmm0, xmm0, eax
                  vaddss  xmm6, xmm0, xmm1
                }
                goto LABEL_31;
              }
            }
          }
          else
          {
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, dword ptr [rbx+0Ch]; Y
              vmovaps xmm0, xmm6; X
            }
            *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
            __asm { vmovaps xmm6, xmm0 }
          }
        }
        v9 = ps;
LABEL_31:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
          vcomiss xmm0, xmm6
        }
        if ( v24 || v25 )
        {
          _R15->restoreAnims = 0;
          CG_Gesture_Shutdown(localClientNum, v17, v18);
        }
        else
        {
          CG_Gesture_Initialize(localClientNum, v9, v17, v18);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vmulss  xmm0, xmm6, xmm9
            vmovss  dword ptr [r15+2Ch], xmm0
          }
          _R15->restoreAnims = 1;
          __asm
          {
            vcvtsi2ss xmm1, xmm1, dword ptr [rbx+0Ch]
            vdivss  xmm0, xmm6, xmm1; val
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm2, xmm10; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vcvttss2si eax, xmm6
            vmovss  dword ptr [r15+30h], xmm0
          }
          _R15->animState = CG_Gesture_GetStateFromAnimTime(localClientNum, v9, v17, CurrentAsset, _EAX);
        }
LABEL_42:
        ++v18;
      }
      while ( v18 <= (unsigned int)WeaponHandForViewWeapon );
      ++v17;
      p_gestureState += 8;
      if ( v17 >= 2 )
      {
        __asm
        {
          vmovaps xmm10, [rsp+0D8h+var_88]
          vmovaps xmm9, [rsp+0D8h+var_78]
          vmovaps xmm8, [rsp+0D8h+var_68]
          vmovaps xmm7, [rsp+0D8h+var_58]
          vmovaps xmm6, [rsp+0D8h+var_48]
        }
        return;
      }
    }
  }
}

/*
==============
CG_Gesture_UpdateAkimboAnims
==============
*/
void CG_Gesture_UpdateAkimboAnims(LocalClientNum_t localClientNum, const playerState_s *ps, DObj *obj, const PlayerHandIndex hand, const bool isDualWield, const float mainTreeWeight, const bool inState, const bool outState, const bool useIdleLeft)
{
  CgWeaponMap *Instance; 
  int v19; 
  const BgWeaponMap *v20; 
  const Weapon *ViewmodelWeapon; 
  __int64 p_weapFlags; 
  bool v24; 
  CgHandler *pmoveHandler; 
  unsigned int v26; 
  const XAnimTree *Tree; 
  CgHandler *Handler; 
  char v29; 
  bool v30; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmt; 
  __int64 bIsAlternate; 
  float bIsAlternateb; 
  float bIsAlternatec; 
  float bIsAlternated; 
  float bIsAlternatee; 
  float bIsAlternatef; 
  float bIsAlternateg; 
  float bIsAlternateh; 
  float bIsAlternatei; 
  float bIsAlternatej; 
  float bIsAlternatea; 
  float handIndexa; 
  float handIndexb; 
  float handIndexc; 
  float handIndexd; 
  float handIndexe; 
  float handIndexf; 
  float handIndexg; 
  float handIndexh; 
  float handIndexi; 
  float handIndex; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1607, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1608, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(bIsAlternate) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1609, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", bIsAlternate, 2) )
      __debugbreak();
  }
  if ( hand == WEAPON_HAND_LEFT && isDualWield )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    v19 = _RBX->weapState[1].weapAnim & 0xFFFFFF7F;
    v20 = Instance;
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, _RBX);
    _ER13 = 1;
    if ( _RBX )
    {
      p_weapFlags = (__int64)&_RBX->weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->weapCommon.weapFlags, ACTIVE, 0x22u) )
        goto LABEL_14;
    }
    else
    {
      p_weapFlags = 1832i64;
    }
    if ( _RBX && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu)) )
    {
      v24 = 1;
LABEL_15:
      __asm
      {
        vmovaps [rsp+0B8h+var_38], xmm6
        vmovaps [rsp+0B8h+var_48], xmm7
        vmovaps [rsp+0B8h+var_58], xmm8
      }
      pmoveHandler = CgHandler::getHandler(localClientNum);
      v26 = BG_MapWeaponAnimStateToAnimIndex(v20, _RBX, v19, 0, ViewmodelWeapon, v24, WEAPON_HAND_LEFT, pmoveHandler);
      Tree = DObjGetTree(obj);
      Handler = CgHandler::getHandler(localClientNum);
      if ( BG_ViewModelAnimExists(_RBX, WEAP_ANIM_GESTURE_LEFT_IDLE, WEAPON_HAND_LEFT, Handler) && useIdleLeft )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_gesture_idle_akimbo_threshold, "gesture_idle_akimbo_threshold");
        __asm
        {
          vmovss  xmm6, cs:__real@3f800000
          vmovaps xmm2, xmm0; max
          vmovss  xmm0, [rsp+0B8h+mainTreeWeight]; value
          vucomiss xmm0, xmm6
        }
        if ( !v30 || (v29 = 0, v30 = !inState, inState) )
        {
          __asm { vcomiss xmm0, xmm2 }
          if ( v29 | v30 || (v29 = 0, !outState) )
          {
            __asm { vcomiss xmm0, cs:__real@3a83126f }
            if ( !v29 )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1; min
                vxorps  xmm7, xmm7, xmm7
              }
              *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  [rsp+0B8h+handIndex], xmm6
                vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm7
                vmovss  dword ptr [rsp+0B8h+fmt], xmm0
              }
              XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xFu, fmtf, bIsAlternateg, handIndexf, (scr_string_t)0, 0, 0, LINEAR, NULL);
              if ( v26 - 236 <= 1 )
              {
                __asm
                {
                  vmovss  [rsp+0B8h+handIndex], xmm6
                  vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm7
                  vmovss  dword ptr [rsp+0B8h+fmt], xmm7
                }
                XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xECu, fmtg, bIsAlternateh, handIndexg, (scr_string_t)0, 0, 0, LINEAR, NULL);
                __asm
                {
                  vmovss  [rsp+0B8h+handIndex], xmm6
                  vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm7
                  vmovss  dword ptr [rsp+0B8h+fmt], xmm7
                }
                XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xEDu, fmth, bIsAlternatei, handIndexh, (scr_string_t)0, 0, 0, LINEAR, NULL);
                __asm
                {
                  vmovss  [rsp+0B8h+handIndex], xmm6
                  vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm7
                  vmovss  dword ptr [rsp+0B8h+fmt], xmm7
                }
                XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0x175u, fmti, bIsAlternatej, handIndexi, (scr_string_t)0, 0, 0, LINEAR, NULL);
              }
            }
          }
          else
          {
            *(double *)&_XMM0 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, 0x14Du);
            __asm
            {
              vxorps  xmm7, xmm7, xmm7
              vcomiss xmm0, xmm7
              vmovss  [rsp+0B8h+handIndex], xmm6
              vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm7
              vmovss  dword ptr [rsp+0B8h+fmt], xmm6
            }
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0x14Du, fmtd, bIsAlternatee, handIndexd, (scr_string_t)0, 1u, 0, LINEAR, NULL);
            __asm
            {
              vmovss  [rsp+0B8h+handIndex], xmm6
              vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm7
              vmovss  dword ptr [rsp+0B8h+fmt], xmm7
            }
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xFu, fmte, bIsAlternatef, handIndexe, (scr_string_t)0, 0, 0, LINEAR, NULL);
          }
        }
        else
        {
          __asm
          {
            vmovd   xmm0, dword ptr [rbx+59Ch]
            vmovss  xmm2, cs:__real@3a83126f
            vmovss  xmm8, cs:__real@3d4ccccd
            vmovd   xmm1, r13d
            vpcmpeqd xmm3, xmm0, xmm1
            vmovss  [rsp+0B8h+handIndex], xmm6
            vxorps  xmm7, xmm7, xmm7
            vblendvps xmm0, xmm7, xmm2, xmm3
            vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm8
            vmovss  dword ptr [rsp+0B8h+fmt], xmm0
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0x14Du, fmta, bIsAlternateb, handIndexa, (scr_string_t)0, 0, 0, LINEAR, NULL);
          __asm
          {
            vmovss  [rsp+0B8h+handIndex], xmm6
            vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm7
            vmovss  dword ptr [rsp+0B8h+fmt], xmm7
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xFu, fmtb, bIsAlternatec, handIndexb, (scr_string_t)0, 0, 0, LINEAR, NULL);
          if ( v26 - 236 <= 1 )
          {
            *(double *)&_XMM0 = XAnimGetGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v26);
            __asm { vcomiss xmm0, xmm7 }
            if ( v29 | v30 )
            {
              __asm
              {
                vmovss  [rsp+0B8h+handIndex], xmm6
                vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm8
                vmovss  dword ptr [rsp+0B8h+fmt], xmm6
              }
              XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v26, fmtc, bIsAlternated, handIndexc, (scr_string_t)0, 1u, 0, LINEAR, NULL);
            }
          }
        }
      }
      else
      {
        *(double *)&_XMM0 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, 0xFu);
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcomiss xmm0, xmm6
        }
        if ( !(v29 | v30) )
        {
          *(double *)&_XMM0 = XAnimGetGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, 0xFu);
          __asm
          {
            vmovss  xmm7, cs:__real@3f800000
            vmovss  xmm8, cs:__real@3e800000
            vucomiss xmm0, xmm6
          }
          if ( v26 - 236 <= 1 )
          {
            *(double *)&_XMM0 = XAnimGetGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v26);
            __asm { vcomiss xmm0, xmm6 }
            if ( v29 | v30 )
            {
              __asm
              {
                vmovss  xmm0, [rsp+0B8h+mainTreeWeight]
                vmovss  [rsp+0B8h+handIndex], xmm7
                vmovss  dword ptr [rsp+0B8h+bIsAlternate], xmm8
                vmovss  dword ptr [rsp+0B8h+fmt], xmm0
              }
              XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v26, fmt, bIsAlternatea, handIndex, (scr_string_t)0, 1u, 0, LINEAR, NULL);
            }
          }
        }
      }
      __asm
      {
        vmovaps xmm7, [rsp+0B8h+var_48]
        vmovaps xmm6, [rsp+0B8h+var_38]
        vmovaps xmm8, [rsp+0B8h+var_58]
      }
      return;
    }
LABEL_14:
    v24 = 0;
    goto LABEL_15;
  }
}

/*
==============
CG_Gesture_UpdateAnimationState
==============
*/
void CG_Gesture_UpdateAnimationState(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const Gesture *gesture, const XAnimTree *animTree)
{
  __int64 v18; 
  const Gesture *v19; 
  const XAnimTree *v20; 
  __int64 v22; 
  GestureStateType state; 
  bool v38; 
  bool v39; 
  const GestureMappingInfo *v40; 
  bool v41; 
  PlayerHandIndex v42; 
  const Gesture *v43; 
  GestureAnimationState animState; 
  bool v46; 
  int v47; 
  GestureAnimationState StateFromAnimTime; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  GestureAnimationState v51; 
  __int64 handa; 
  float *outTimeInSeconds; 
  char v65; 
  void *retaddr; 
  float outNormalizedTime; 
  float v68; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0D8h+var_88], xmm11
    vmovaps [rsp+0D8h+var_98], xmm12
  }
  v18 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1909, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v19 = gesture;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1910, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  v20 = animTree;
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1911, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( (unsigned int)v18 >= 2 )
  {
    LODWORD(handa) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1912, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", handa, 2) )
      __debugbreak();
  }
  _RDI = CG_Gesture_GetInfo(localClientNum, v18, hand);
  v22 = v18;
  gesture = (const Gesture *)(32 * v18);
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(outTimeInSeconds) = 2;
    LODWORD(handa) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1062, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", handa, outTimeInSeconds) )
      __debugbreak();
  }
  _RAX = CG_Gesture_GetInfo(localClientNum, v18, hand);
  if ( _RAX->restoreAnims )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rax+2Ch]
      vmovss  xmm7, dword ptr [rax+30h]
    }
  }
  else
  {
    CG_Gesture_GetAnimTimeFromTree(localClientNum, ps, v18, hand, v19, v20, &v68, &outNormalizedTime);
    __asm
    {
      vmovss  xmm7, [rsp+0D8h+arg_10]
      vmovss  xmm6, [rsp+0D8h+arg_18]
    }
  }
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1080, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !BG_Gesture_GetAnimationSettings(v19) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1085, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+1Ch]
    vmulss  xmm11, xmm0, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+20h]
    vmulss  xmm12, xmm0, cs:__real@3a83126f
    vmovss  dword ptr [rdi+2Ch], xmm6
    vmovss  dword ptr [rdi+30h], xmm7
  }
  *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(v19);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm2, xmm1, xmm7
    vaddss  xmm7, xmm6, cs:__real@34000000
  }
  _RDI->hasJumpTime = ps->gestureState.gestures[v22].jumpTime > 0;
  __asm
  {
    vmovaps xmm10, xmm0
    vmulss  xmm9, xmm2, xmm0
  }
  _RDI->isJumpTimeBlendActive = BG_Gesture_IsJumpTimeBlendActive(ps, v18, ps->serverTime);
  _RDI->cancelTransitions |= BG_Gesture_IsCancelTransitions(ps, v18);
  state = ps->gestureState.gestures[v22].state;
  switch ( state )
  {
    case GESTURE_STATE_PLAYING:
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 688, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
        __debugbreak();
      if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
      {
        LODWORD(outTimeInSeconds) = 2;
        LODWORD(handa) = hand;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 689, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", handa, outTimeInSeconds) )
          __debugbreak();
      }
      v38 = isDualWield;
      v39 = 1;
      if ( isDualWield )
      {
        v40 = &s_blendTreeMappings[1];
        v41 = isDualWield;
        v42 = hand;
        v43 = v19;
        if ( v19->weaponSettings.splitAnimsAkimbo )
        {
          if ( hand != WEAPON_HAND_LEFT )
            v40 = &s_blendTreeMappings[4];
        }
        else
        {
          if ( CG_Gesture_XAnimExists(v19, &s_blendTreeMappings[1], hand, isDualWield) )
          {
LABEL_41:
            animState = _RDI->animState;
            if ( animState == GESTURE_ANIM_STATE_OFF )
            {
              v46 = !_RDI->hasJumpTime;
              _RDI->animState = GESTURE_ANIM_STATE_IN;
              if ( v46 )
                break;
              v47 = *(int *)((char *)&ps->gestureState.gestures[0].jumpTime + (_QWORD)gesture);
              if ( v47 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1946, ASSERT_TYPE_ASSERT, "(jumpTime > 0)", (const char *)&queryFormat, "jumpTime > 0") )
                __debugbreak();
              StateFromAnimTime = (unsigned int)CG_Gesture_GetStateFromAnimTime(localClientNum, ps, v18, v19, v47);
LABEL_64:
              _RDI->animState = StateFromAnimTime;
              break;
            }
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcomiss xmm6, xmm0
            }
            if ( animState == GESTURE_ANIM_STATE_OUT || (Handler = CgHandler::getHandler(localClientNum), Instance = CgWeaponMap::GetInstance(localClientNum), !BG_GesturePriority_ShouldCancelRightHand(Instance, ps, Handler, v18, v19, hand, v38)) )
            {
              v51 = _RDI->animState;
              if ( v51 == GESTURE_ANIM_STATE_IN )
              {
                __asm { vcomiss xmm7, xmm11 }
                _RDI->animState = GESTURE_ANIM_STATE_PLAYING;
                break;
              }
              if ( v51 == GESTURE_ANIM_STATE_PLAYING )
              {
                if ( !v19->looping )
                {
                  __asm { vcomiss xmm7, xmm12 }
                  _RDI->animState = GESTURE_ANIM_STATE_OUT;
                }
                break;
              }
              if ( v51 != GESTURE_ANIM_STATE_OUT )
                break;
              __asm { vcomiss xmm7, xmm10 }
            }
LABEL_63:
            StateFromAnimTime = GESTURE_ANIM_STATE_OFF;
            goto LABEL_64;
          }
          v41 = v38;
          v40 = &s_blendTreeMappings[4];
          v42 = hand;
          v43 = v19;
        }
        v39 = CG_Gesture_XAnimExists(v43, v40, v42, v41);
      }
      if ( !v39 )
        goto LABEL_63;
      goto LABEL_41;
    case GESTURE_STATE_STOPPING:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
      _RDI->animState = GESTURE_ANIM_STATE_OUT;
      break;
    case GESTURE_STATE_OFF:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
        vcomiss xmm9, cs:__real@34000000
      }
      if ( _RDI->animState != GESTURE_ANIM_STATE_OUT )
        goto LABEL_63;
      break;
  }
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_Gesture_UpdateAnims
==============
*/
void CG_Gesture_UpdateAnims(LocalClientNum_t localClientNum, const Gesture *gesture, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, DObj *obj, float animTime)
{
  bool v13; 
  bool useTargetOffset; 
  CgHandler *Handler; 
  int TargetEntity; 
  centity_t *Entity; 
  GestureType type; 
  bool v30; 
  cg_t *LocalClientGlobals; 
  int v37; 
  CgEntitySystem *EntitySystem; 
  DObj *v39; 
  const DObj *v40; 
  scr_string_t targetEntityBoneName; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v62; 
  __int64 v63; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t angles; 
  vec3_t outOrigin; 
  WorldUpReferenceFrame v68; 

  _RDI = ps;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1697, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1698, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1699, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v62) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1700, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v62, 2) )
      __debugbreak();
  }
  if ( gesture == (const Gesture *)-52i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 378, ASSERT_TYPE_ASSERT, "(directionalSettings)", (const char *)&queryFormat, "directionalSettings") )
    __debugbreak();
  v13 = gesture->type == GESTURE_TYPE_DIRECTIONAL;
  __asm { vmovaps [rsp+0F0h+var_50], xmm6 }
  if ( v13 && ((useTargetOffset = gesture->directionalSettings.useTargetOffset) || CG_Gesture_ValidateTargetEntity(localClientNum, _RDI, slot)) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+1D8h]
      vmovss  xmm1, dword ptr [rdi+1DCh]
      vmovss  dword ptr [rbp+3Fh+angles], xmm0
      vmovss  xmm0, dword ptr [rdi+1E0h]
      vmovss  dword ptr [rbp+3Fh+angles+8], xmm0
      vmovss  dword ptr [rbp+3Fh+angles+4], xmm1
    }
    Handler = CgHandler::getHandler(localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v68, _RDI, Handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v68, &angles);
    CG_GetPlayerViewOrigin(localClientNum, _RDI, &outOrigin);
    if ( !useTargetOffset )
    {
      TargetEntity = BG_Gesture_GetTargetEntity(_RDI, slot);
      Entity = CG_GetEntity(localClientNum, TargetEntity);
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1720, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      XAnimSetStructGameParameterByIndex(obj, 2u, XAnimGameStructTypeDeclaration<centity_t>::ms_typeInfo->typeID, Entity);
    }
    XAnimSetVec3GameParameterByIndex(obj, 1u, &angles);
    XAnimSetVec3GameParameterByIndex(obj, 0, &outOrigin);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vmovss  xmm0, [rbp+3Fh+animTime]; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    if ( slot >= 2 )
    {
      LODWORD(v63) = 2;
      LODWORD(v62) = slot;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( WEAP_ANIM_PARAM_ANIM_TIME_COUNT )", "slot doesn't index WEAP_ANIM_PARAM_ANIM_TIME_COUNT\n\t%i not in [0, %i)", v62, v63) )
        __debugbreak();
    }
    __asm { vmovaps xmm2, xmm6; value }
    XAnimSetFloatGameParameterByIndex(obj, slot + 3, *(float *)&_XMM2);
  }
  else
  {
    type = gesture->type;
    if ( type == GESTURE_TYPE_LOOK_AROUND )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1D8h]
        vmovss  xmm1, dword ptr [rdi+1DCh]
        vmovss  dword ptr [rbp+3Fh+angles], xmm0
        vmovss  xmm0, dword ptr [rdi+1E0h]
        vmovss  dword ptr [rbp+3Fh+angles+8], xmm0
        vmovss  dword ptr [rbp+3Fh+angles+4], xmm1
      }
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1588, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( slot >= 2 )
      {
        LODWORD(v63) = 2;
        LODWORD(v62) = slot;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1589, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v62, v63) )
          __debugbreak();
      }
      v30 = 0;
      if ( CG_Gesture_GetInfo(localClientNum, slot, hand)->animState == GESTURE_ANIM_STATE_PLAYING )
        v30 = BG_Demeanor_ShouldPlayWeaponCheck(_RDI);
      XAnimSetVec3GameParameterByIndex(obj, 1u, &angles);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vmovss  xmm0, [rbp+3Fh+animTime]; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
      if ( slot >= 2 )
      {
        LODWORD(v63) = 2;
        LODWORD(v62) = slot;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( WEAP_ANIM_PARAM_ANIM_TIME_COUNT )", "slot doesn't index WEAP_ANIM_PARAM_ANIM_TIME_COUNT\n\t%i not in [0, %i)", v62, v63) )
          __debugbreak();
      }
      __asm { vmovaps xmm2, xmm6; value }
      XAnimSetFloatGameParameterByIndex(obj, slot + 3, *(float *)&_XMM2);
      XAnimSetBoolGameParameterByIndex(obj, 5u, v30);
    }
    else if ( type == GESTURE_TYPE_IK_TARGET && CG_Gesture_ValidateTargetEntity(localClientNum, _RDI, slot) )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v37 = BG_Gesture_GetTargetEntity(_RDI, slot);
      EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
      v39 = EntitySystem->IsMP(EntitySystem) ? CgEntitySystemMP::GetDObj_General((CgEntitySystemMP *)EntitySystem, v37, NULL) : Com_GetClientDObj(v37, EntitySystem->m_localClientNum);
      v40 = v39;
      inOutIndex[0] = -2;
      _RBX = CG_GetEntity(localClientNum, v37);
      if ( !LocalClientGlobals->firstSnapshot )
      {
        targetEntityBoneName = gesture->ikTargetSettings.targetEntityBoneName;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbp+3Fh+outOrigin], xmm0
          vmovss  dword ptr [rbp+3Fh+outOrigin+4], xmm0
          vmovss  dword ptr [rbp+3Fh+outOrigin+8], xmm0
          vmovss  dword ptr [rbp+3Fh+angles], xmm0
          vmovss  dword ptr [rbp+3Fh+angles+4], xmm0
          vmovss  dword ptr [rbp+3Fh+angles+8], xmm0
        }
        if ( targetEntityBoneName && v40 && DObjGetBoneIndexInternal_51(v40, targetEntityBoneName, inOutIndex, &modelIndex) )
        {
          CG_DObjGetWorldBoneMatrix(&_RBX->pose, v40, inOutIndex[0], (tmat33_t<vec3_t> *)&v68, &outOrigin);
          AxisToAngles((const tmat33_t<vec3_t> *)&v68, &angles);
        }
        else if ( _RBX )
        {
          if ( !_RBX->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(_RBX->pose.origin.Get_origin, &_RBX->pose);
          FunctionPointer_origin(&_RBX->pose.origin.origin.origin, &outOrigin);
          if ( _RBX->pose.isPosePrecise )
          {
            __asm
            {
              vmovsd  xmm3, cs:__real@3f30000000000000
              vmovd   xmm0, dword ptr [rbp+3Fh+outOrigin]
              vmovd   xmm2, dword ptr [rbp+3Fh+outOrigin+4]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm0, xmm0, xmm3
              vcvtsd2ss xmm1, xmm0, xmm0
              vcvtdq2pd xmm2, xmm2
              vmulsd  xmm0, xmm2, xmm3
              vmovd   xmm2, dword ptr [rbp+3Fh+outOrigin+8]
              vmovss  dword ptr [rbp+3Fh+outOrigin], xmm1
              vcvtsd2ss xmm1, xmm0, xmm0
              vcvtdq2pd xmm2, xmm2
              vmulsd  xmm0, xmm2, xmm3
              vmovss  dword ptr [rbp+3Fh+outOrigin+4], xmm1
              vcvtsd2ss xmm1, xmm0, xmm0
              vmovss  dword ptr [rbp+3Fh+outOrigin+8], xmm1
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+48h]
            vmovss  dword ptr [rbp+3Fh+angles], xmm0
            vmovss  xmm1, dword ptr [rbx+4Ch]
            vmovss  dword ptr [rbp+3Fh+angles+4], xmm1
            vmovss  xmm0, dword ptr [rbx+50h]
            vmovss  dword ptr [rbp+3Fh+angles+8], xmm0
          }
        }
        XAnimSetVec3GameParameterByIndex(obj, 0xAu, &outOrigin);
        XAnimSetVec3GameParameterByIndex(obj, 0xBu, &angles);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0F0h+var_50] }
}

/*
==============
CG_Gesture_UpdateBlendingParameters
==============
*/
void CG_Gesture_UpdateBlendingParameters(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const Gesture *gesture, const XAnimTree *animTree, float *outBlendTime, bool *outShouldCrossfadeInOut, bool *outShouldBlendOut, float *outCrossfadeOutStartTime, bool *outShouldBlendOutToZero)
{
  __int64 v28; 
  GestureAnimationSettings *AnimationSettings; 
  __int64 v31; 
  int serverTime; 
  GestureAnimationState animState; 
  GestureAnimationState v72; 
  const Gesture *v76; 
  bool v77; 
  bool v78; 
  bool v86; 
  bool v105; 
  char v119; 
  bool v120; 
  bool v126; 
  unsigned int endTime; 
  char v149; 
  unsigned int SlotUsingBlendToLoop; 
  bool v179; 
  bool v180; 
  char v181; 
  __int64 v201; 
  __int64 v202; 
  char v211; 
  void *retaddr; 
  bool blendOutAdditiveADS; 

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
    vmovaps [rsp+138h+var_C8], xmm14
  }
  v28 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2066, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2067, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2068, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !outBlendTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2069, ASSERT_TYPE_ASSERT, "(outBlendTime)", (const char *)&queryFormat, "outBlendTime") )
    __debugbreak();
  if ( !outShouldCrossfadeInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2070, ASSERT_TYPE_ASSERT, "(outShouldCrossfadeInOut)", (const char *)&queryFormat, "outShouldCrossfadeInOut") )
    __debugbreak();
  if ( !outShouldBlendOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2071, ASSERT_TYPE_ASSERT, "(outShouldBlendOut)", (const char *)&queryFormat, "outShouldBlendOut") )
    __debugbreak();
  if ( !outShouldBlendOutToZero && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2072, ASSERT_TYPE_ASSERT, "(outShouldBlendOutToZero)", (const char *)&queryFormat, "outShouldBlendOutToZero") )
    __debugbreak();
  if ( (unsigned int)v28 >= 2 )
  {
    LODWORD(v201) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2073, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v201, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v202) = 2;
    LODWORD(v201) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2074, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v201, v202) )
      __debugbreak();
  }
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2077, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  _RBX = CG_Gesture_GetInfo(localClientNum, v28, hand);
  v31 = v28;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1080, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !BG_Gesture_GetAnimationSettings(gesture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1085, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  __asm { vmovss  xmm12, cs:__real@3a83126f }
  serverTime = ps->serverTime;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+1Ch]
    vmulss  xmm1, xmm0, xmm12
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+20h]
    vmulss  xmm8, xmm0, xmm12
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
    vmulss  xmm11, xmm0, xmm12
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+r13+42Ch]
    vmulss  xmm14, xmm0, xmm12
    vmovss  [rsp+138h+var_EC], xmm1
    vmovss  [rsp+138h+var_F0], xmm8
    vmovss  [rsp+138h+var_F4], xmm8
    vmovaps xmm9, xmm1
  }
  blendOutAdditiveADS = gesture->weaponSettings.blendOutAdditiveADS;
  if ( AnimationSettings->hasTransitions )
  {
    if ( !BG_Gesture_GetAnimationSettings(gesture) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1099, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+10h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi+14h]
      vmulss  xmm9, xmm0, xmm12
      vmulss  xmm0, xmm1, xmm12
      vmovss  [rsp+138h+var_F4], xmm0
    }
  }
  __asm
  {
    vmovss  xmm10, dword ptr [rbx+2Ch]
    vmovss  xmm6, dword ptr [rbx+30h]
  }
  *(double *)&_XMM0 = BG_Gesture_GetAnimLengthInSeconds(gesture);
  __asm { vmovss  xmm13, cs:__real@3f800000 }
  _ER15 = ps->gestureState.gestures[v31].endTime;
  __asm
  {
    vmovaps xmm1, xmm0
    vmovss  [rsp+138h+var_F8], xmm0
    vsubss  xmm4, xmm1, xmm8
    vsubss  xmm0, xmm13, xmm6
    vmulss  xmm0, xmm0, xmm1
    vmovss  [rsp+138h+var_E4], xmm0
    vmovss  [rsp+138h+var_E8], xmm4
    vxorps  xmm8, xmm8, xmm8
  }
  if ( _ER15 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm3, xmm0, xmm12
    }
  }
  else
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  _EAX = 0;
  __asm
  {
    vmovaps [rsp+138h+var_D8], xmm15
    vmovd   xmm0, r15d
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
    vmovss  dword ptr [rsp+138h+animTree], xmm0
  }
  if ( ps->gestureState.slotBlend )
  {
    animState = _RBX->animState;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r13+460h]
      vmulss  xmm15, xmm0, xmm12
    }
    if ( BG_Gesture_IsJumpTimeBlendActive(ps, v28, serverTime) )
      goto LABEL_52;
    if ( animState == GESTURE_ANIM_STATE_OUT )
    {
      __asm { vminss  xmm15, xmm15, dword ptr [rsp+138h+animTree] }
      goto LABEL_52;
    }
    if ( animState == GESTURE_ANIM_STATE_IN )
      __asm { vminss  xmm9, xmm15, xmm9 }
  }
  __asm { vmovss  xmm15, dword ptr [rsp+138h+animTree] }
LABEL_52:
  __asm { vmovss  xmm2, cs:__real@34000000 }
  v72 = _RBX->animState;
  __asm
  {
    vaddss  xmm4, xmm10, xmm2
    vmovss  dword ptr [rsp+138h+animTree], xmm4
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  switch ( v72 )
  {
    case GESTURE_ANIM_STATE_OFF:
      v76 = gesture;
      v77 = 0;
      v78 = 0;
      _ER15 = 0;
      __asm { vmovaps xmm6, xmm13 }
      goto LABEL_125;
    case GESTURE_ANIM_STATE_IN:
      __asm
      {
        vcomiss xmm10, xmm8
        vxorps  xmm11, xmm11, xmm11
      }
      if ( _RBX->hasJumpTime )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbp+28h]
          vmulss  xmm2, xmm0, xmm12; max
          vaddss  xmm0, xmm14, xmm9; val
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm11, xmm14
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm9, xmm0 }
      }
      v86 = !AnimationSettings->hasTransitions;
      if ( AnimationSettings->hasTransitions && (v86 = !_RBX->isRestarting, _RBX->isRestarting) )
      {
        __asm { vmovss  xmm7, cs:__real@3dcccccd }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm9, xmm11
          vmaxss  xmm7, xmm0, xmm8
        }
      }
      __asm
      {
        vcomiss xmm9, xmm8
        vmovaps xmm6, xmm12
      }
      if ( !v86 )
      {
        if ( _RBX->hasJumpTime )
        {
          __asm
          {
            vsubss  xmm1, xmm9, xmm14
            vcomiss xmm1, xmm8
          }
          if ( _RBX->hasJumpTime )
          {
            __asm
            {
              vsubss  xmm0, xmm11, xmm14
              vdivss  xmm1, xmm0, xmm1
            }
          }
          else
          {
            __asm { vmovaps xmm1, xmm13 }
          }
        }
        else
        {
          __asm { vdivss  xmm1, xmm11, xmm9 }
        }
        v76 = gesture;
        v77 = 0;
        __asm
        {
          vsubss  xmm0, xmm13, xmm1
          vmaxss  xmm1, xmm0, xmm12
        }
        v78 = 0;
        __asm { vminss  xmm6, xmm1, xmm13 }
        _ER15 = 0;
        goto LABEL_125;
      }
      goto LABEL_73;
    case GESTURE_ANIM_STATE_PLAYING:
      __asm { vmovaps xmm6, xmm12 }
      if ( _RBX->hasJumpTime )
      {
        __asm { vcomiss xmm14, [rsp+138h+var_EC] }
        if ( _RBX->hasJumpTime && _RBX->isJumpTimeBlendActive )
        {
          __asm
          {
            vcomiss xmm8, dword ptr [rbx+14h]
            vaddss  xmm0, xmm15, xmm11
            vmovss  dword ptr [rbx+18h], xmm0
            vmovss  dword ptr [rbx+14h], xmm11
            vsubss  xmm0, xmm0, xmm11; val
            vmovaps xmm2, xmm13; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm2, dword ptr [rbx+18h]; max
            vmovss  xmm1, dword ptr [rbx+14h]; min
            vmovaps xmm7, xmm0
            vmovaps xmm0, xmm11; value
          }
          CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vsubss  xmm0, xmm13, xmm0; val
            vmovaps xmm2, xmm13; max
            vmovaps xmm1, xmm12; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm6, xmm0 }
        }
      }
      goto LABEL_73;
  }
  if ( v72 != GESTURE_ANIM_STATE_OUT )
  {
LABEL_73:
    v76 = gesture;
    v77 = 0;
    v78 = 0;
    _ER15 = 0;
    goto LABEL_125;
  }
  v105 = !_RBX->cancelTransitions;
  if ( _RBX->cancelTransitions )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+1Ch]
      vucomiss xmm2, cs:__real@bf800000
      vmovaps xmm6, xmm13
    }
    if ( _RBX->cancelTransitions )
    {
      v105 = _ER15 == 0;
      if ( !_ER15 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vcvttss2si eax, xmm1
      }
      v105 = (unsigned int)_EAX <= ps->gestureState.gestures[v31].endTime;
      if ( _EAX <= ps->gestureState.gestures[v31].endTime )
        goto LABEL_82;
      __asm { vaddss  xmm0, xmm2, xmm15 }
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rbx+1Ch], xmm11
        vaddss  xmm0, xmm15, xmm11
      }
    }
    __asm { vmovss  dword ptr [rbx+20h], xmm0 }
LABEL_82:
    __asm { vcomiss xmm10, xmm8 }
    if ( !v105 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vsubss  xmm0, xmm0, xmm11; val
        vmovaps xmm2, xmm13; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+20h]; max
        vmovss  xmm1, dword ptr [rbx+1Ch]; min
        vmovaps xmm7, xmm0
        vmovaps xmm0, xmm11; value
      }
      *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm2, xmm13; max
        vmovaps xmm1, xmm12; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
    v77 = 1;
    _ER15 = 0;
    v76 = gesture;
    v78 = 1;
    goto LABEL_125;
  }
  v119 = 0;
  if ( AnimationSettings->hasTransitions )
    __asm { vcomiss xmm4, xmm9 }
  v120 = ps->gestureState.slotBlend && !_RBX->isJumpTimeBlendActive;
  __asm
  {
    vmovss  xmm3, cs:__real@bf800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm12
    vmaxss  xmm6, xmm1, xmm8
  }
  v126 = _ER15 == 0;
  if ( _ER15 )
  {
    endTime = ps->gestureState.gestures[v31].endTime;
    v126 = endTime == _RBX->lastEndTime;
    if ( endTime != _RBX->lastEndTime )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+24h]
        vucomiss xmm1, xmm3
        vaddss  xmm2, xmm15, xmm2
      }
      if ( endTime == _RBX->lastEndTime )
      {
        __asm { vcomiss xmm2, [rsp+138h+var_E8] }
        if ( endTime < _RBX->lastEndTime )
          goto LABEL_98;
      }
      __asm { vcomiss xmm1, xmm10 }
      if ( endTime > _RBX->lastEndTime )
        goto LABEL_98;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+20h]
        vsubss  xmm1, xmm0, xmm1
        vcomiss xmm1, xmm2
      }
      if ( endTime > _RBX->lastEndTime )
      {
LABEL_98:
        v119 = 1;
      }
      else
      {
        v119 = 0;
        v126 = 1;
      }
      _RBX->lastEndTime = endTime;
    }
  }
  __asm
  {
    vucomiss xmm3, dword ptr [rbx+1Ch]
    vmovss  xmm11, cs:__real@3dcccccd
  }
  if ( v126 || v119 )
  {
    if ( AnimationSettings->hasTransitions )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbp+20h]
        vmulss  xmm1, xmm0, xmm12
        vmaxss  xmm10, xmm1, xmm10
      }
    }
    v86 = !_RBX->isJumpTimeBlendActive;
    __asm
    {
      vmovss  xmm9, [rsp+138h+var_F8]
      vmovss  dword ptr [rbx+1Ch], xmm10
    }
    if ( v86 )
    {
      __asm
      {
        vminss  xmm0, xmm15, [rsp+138h+var_E4]
        vaddss  xmm0, xmm0, xmm10; val
        vmovaps xmm2, xmm9; max
        vmovaps xmm1, xmm10; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    }
    else
    {
      __asm { vmovaps xmm0, xmm9 }
    }
    __asm { vmovss  dword ptr [rbx+20h], xmm0 }
    if ( AnimationSettings->hasTransitions )
    {
      if ( v120 || v119 )
      {
        __asm { vmovss  dword ptr [rbx+24h], xmm10 }
        v149 = 1;
LABEL_115:
        _ER15 = 0;
        goto LABEL_116;
      }
      __asm
      {
        vmovss  xmm3, [rsp+138h+var_F4]
        vmovss  dword ptr [rbx+24h], xmm3
      }
      if ( AnimationSettings->blendOutStartTime == AnimationSettings->outStartTime )
      {
        _EAX = _RBX->isJumpTimeBlendActive;
        _ER15 = 0;
        __asm
        {
          vmovd   xmm1, r15d
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm15, xmm11, xmm2
          vaddss  xmm0, xmm0, xmm3; val
          vmovaps xmm2, xmm9; max
          vmovaps xmm1, xmm10; min
          vmovss  dword ptr [rbx+24h], xmm0
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  dword ptr [rbx+24h], xmm0 }
        v149 = 0;
LABEL_116:
        __asm
        {
          vaddss  xmm0, xmm10, cs:__real@34000000
          vmovss  xmm14, [rsp+138h+var_F0]
          vcomiss xmm0, xmm14
        }
        v76 = gesture;
        if ( v119 || v120 || isDualWield && gesture->weaponSettings.useLeftIdleAkimbo )
        {
          __asm { vmovss  xmm4, dword ptr [rsp+138h+animTree] }
          _RBX->outBlendOutEndTime = _RBX->outEndTime;
        }
        else
        {
          __asm
          {
            vaddss  xmm0, xmm6, dword ptr [rbx+24h]
            vmovss  xmm4, dword ptr [rsp+138h+animTree]
            vminss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rbx+28h], xmm1
          }
        }
        goto LABEL_123;
      }
    }
    else
    {
      __asm { vmovss  dword ptr [rbx+24h], xmm10 }
    }
    v149 = 0;
    goto LABEL_115;
  }
  __asm
  {
    vmovss  xmm9, [rsp+138h+var_F8]
    vmovss  xmm14, [rsp+138h+var_F0]
  }
  v76 = gesture;
  v149 = 0;
  _ER15 = 0;
LABEL_123:
  __asm { vmovaps xmm6, xmm13 }
  SlotUsingBlendToLoop = BG_Gesture_FindSlotUsingBlendToLoop(ps);
  if ( v120 && BG_Demeanor_IsPlaying(ps) && SlotUsingBlendToLoop != 2 && (v179 = SlotUsingBlendToLoop < slot, v180 = SlotUsingBlendToLoop == slot) )
  {
    v181 = 1;
  }
  else
  {
    v181 = 0;
    v179 = 0;
    v180 = 1;
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+24h]; max
    vcomiss xmm10, xmm2
  }
  if ( !v179 || (v179 = 0, v180 = v181 == 0, v181) )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rbx+20h]
      vucomiss xmm2, xmm1
      vcmpltss xmm0, xmm10, xmm2
      vblendvps xmm0, xmm1, xmm2, xmm0
      vmovss  [rsp+138h+arg_10], xmm0
    }
    if ( v180 )
      goto LABEL_140;
    __asm { vcomiss xmm10, xmm2 }
    if ( !v179 || v181 )
LABEL_140:
      v78 = 1;
    else
      v78 = 0;
    __asm
    {
      vmovss  xmm0, [rsp+138h+arg_10]
      vsubss  xmm0, xmm0, xmm10
    }
    v77 = v149 == 0;
    if ( v181 )
    {
      v77 = 1;
      __asm { vmovaps xmm0, xmm15; val }
    }
    __asm
    {
      vmovaps xmm2, xmm9; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vcomiss xmm0, xmm8
      vmovaps xmm7, xmm0
    }
    if ( !v179 && !v86 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+28h]; max
        vmovss  xmm1, dword ptr [rbx+24h]; min
        vmovaps xmm0, xmm10; value
      }
      *(double *)&_XMM0 = CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm2, xmm13; max
        vmovaps xmm1, xmm12; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
  }
  else
  {
    v77 = 0;
    __asm { vmovaps xmm6, xmm12 }
    if ( _RBX->isJumpTimeBlendActive )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+1Ch]; min
        vmovaps xmm0, xmm10; value
        vmovaps xmm7, xmm15
      }
      CG_Gesture_Normalize(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm0, xmm13, xmm0; val
        vmovaps xmm2, xmm13; max
        vmovaps xmm1, xmm12; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
    v78 = 0;
  }
LABEL_125:
  _RAX = outBlendTime;
  _R11 = &v211;
  __asm
  {
    vmovaps xmm15, [rsp+138h+var_D8]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, [rsp+138h+var_C8]
    vmovss  dword ptr [rax], xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  *outShouldCrossfadeInOut = 0;
  __asm { vmovd   xmm1, r15d }
  *outShouldBlendOut = v77;
  _RAX = outCrossfadeOutStartTime;
  __asm
  {
    vmovss  dword ptr [rax], xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  *outShouldBlendOutToZero = v78;
  LODWORD(_RAX) = blendOutAdditiveADS;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm13, xmm2
    vmovss  dword ptr [rbx+38h], xmm0
    vmovss  dword ptr [rbx+34h], xmm6
  }
  LODWORD(_RAX) = v76->weaponSettings.blendOutFingerPose;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm13, xmm2
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rbx+3Ch], xmm0
  }
}

/*
==============
CG_Gesture_UpdateMainTree
==============
*/
void CG_Gesture_UpdateMainTree(LocalClientNum_t localClientNum, DObj *obj, const playerState_s *ps, const PlayerHandIndex hand, bool inState, bool outState, float *outMainTreeWeight)
{
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  bool v25; 
  cg_t *LocalClientGlobals; 
  unsigned int i; 
  GestureAnimationState animState; 
  char v33; 
  const Gesture *AssetFromIndex; 
  bool v35; 
  bool v36; 
  bool v37; 
  char v38; 
  bool blendOut; 
  float fmt; 
  __int64 blend; 
  float blenda; 
  char v69; 
  void *retaddr; 
  bool v73; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0F8h+var_88], xmm10
    vmovaps [rsp+0F8h+var_98], xmm11
    vmovaps [rsp+0F8h+var_A8], xmm12
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2641, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !outMainTreeWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2642, ASSERT_TYPE_ASSERT, "(outMainTreeWeight)", (const char *)&queryFormat, "outMainTreeWeight") )
    __debugbreak();
  v73 = 0;
  v19 = 1;
  v20 = 1;
  __asm
  {
    vmovss  xmm6, cs:__real@bf800000
    vmovaps xmm12, xmm6
    vmovaps xmm11, xmm6
    vmovaps xmm10, xmm6
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2652, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(blend) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2653, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", blend, 2) )
      __debugbreak();
  }
  v25 = inState && outState;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  for ( i = 0; i < 2; ++i )
  {
    _RCX = CG_Gesture_GetInfo(localClientNum, i, hand);
    __asm
    {
      vmovss  xmm9, dword ptr [rax+34h]
      vmovss  xmm7, dword ptr [rax+38h]
      vmovss  xmm8, dword ptr [rax+3Ch]
    }
    animState = _RCX->animState;
    if ( animState == GESTURE_ANIM_STATE_OUT )
    {
      if ( !_RCX->isJumpTimeBlendActive )
        goto LABEL_25;
    }
    else if ( (unsigned int)(animState - 1) > 1 )
    {
LABEL_25:
      v33 = 0;
      goto LABEL_21;
    }
    v33 = 1;
LABEL_21:
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(_RCX->lastGesture);
    v35 = AssetFromIndex && AssetFromIndex->weaponSettings.blendOutAdditiveADS;
    v19 &= v35;
    v36 = AssetFromIndex && AssetFromIndex->weaponSettings.blendOutFingerPose;
    v20 &= v36;
    v37 = v20 == 0;
    __asm { vucomiss xmm9, xmm6 }
    if ( v20 )
    {
      v37 = v33 == 0;
      v38 = v33;
      __asm { vcmpeqss xmm0, xmm12, xmm6 }
      if ( !v33 )
        v38 = v73;
      __asm { vblendvps xmm1, xmm12, xmm9, xmm0 }
      blendOut = v38;
      v73 = v38;
      __asm { vminss  xmm12, xmm9, xmm1 }
    }
    else
    {
      blendOut = v73;
    }
    __asm { vucomiss xmm7, xmm6 }
    if ( !v37 )
    {
      __asm
      {
        vcmpeqss xmm0, xmm11, xmm6
        vblendvps xmm1, xmm11, xmm7, xmm0
        vminss  xmm11, xmm7, xmm1
      }
    }
    __asm { vucomiss xmm8, xmm6 }
    if ( !v37 )
    {
      __asm
      {
        vcmpeqss xmm0, xmm10, xmm6
        vblendvps xmm1, xmm10, xmm8, xmm0
        vminss  xmm10, xmm8, xmm1
      }
    }
  }
  if ( v25 )
  {
    LocalClientGlobals->gestureInfo.isBlendingSlots = 1;
    goto LABEL_46;
  }
  if ( LocalClientGlobals->gestureInfo.isBlendingSlots )
  {
    if ( inState )
    {
LABEL_46:
      __asm { vmovss  xmm12, cs:__real@3a83126f }
      _ECX = 0;
      _EAX = v19;
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, ecx
        vpcmpeqd xmm2, xmm0, xmm1
      }
      _EAX = v20;
      __asm
      {
        vmovd   xmm1, ecx
        vmovd   xmm0, eax
        vblendvps xmm11, xmm12, xmm11, xmm2
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm10, xmm12, xmm10, xmm2
      }
    }
    else
    {
      LocalClientGlobals->gestureInfo.isBlendingSlots = 0;
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0F8h+blend], xmm0
    vmovaps xmm3, xmm11; additiveAdsWeight
    vmovaps xmm2, xmm12; mainTreeWeight
    vmovss  dword ptr [rsp+0F8h+fmt], xmm10
  }
  CG_Gesture_SetWeightMainTree(obj, ps, *(double *)&_XMM2, *(double *)&_XMM3, fmt, blenda, blendOut);
  _RAX = outMainTreeWeight;
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovss  dword ptr [rax], xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CG_Gesture_UseTargetOffsets
==============
*/
__int64 CG_Gesture_UseTargetOffsets(const GestureDirectionalSettings *const directionalSettings)
{
  if ( directionalSettings )
    return directionalSettings->useTargetOffset;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 378, ASSERT_TYPE_ASSERT, "(directionalSettings)", (const char *)&queryFormat, "directionalSettings") )
    __debugbreak();
  return MEMORY[0x24];
}

/*
==============
CG_Gesture_ValidateTargetEntity
==============
*/
bool CG_Gesture_ValidateTargetEntity(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot)
{
  int TargetEntity; 
  __int64 v8; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 362, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v8) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  TargetEntity = BG_Gesture_GetTargetEntity(ps, slot);
  if ( TargetEntity == 2047 )
    return 0;
  else
    return CG_GetEntity(localClientNum, TargetEntity)->flags & 1;
}

/*
==============
CG_Gesture_XAnimExists
==============
*/
char CG_Gesture_XAnimExists(const Gesture *gesture, const GestureMappingInfo *mappingInfo, const PlayerHandIndex hand, const bool isDualWield)
{
  char v4; 
  __int64 assetIndex; 
  PlayerHandIndex v11; 
  __int64 v12; 

  v4 = 0;
  if ( !mappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 611, ASSERT_TYPE_ASSERT, "(mappingInfo)", (const char *)&queryFormat, "mappingInfo") )
    __debugbreak();
  assetIndex = mappingInfo->assetIndex;
  if ( (_DWORD)assetIndex == 23 )
    return 0;
  if ( (unsigned int)assetIndex >= 0x16 )
  {
    LODWORD(v12) = mappingInfo->assetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "assetIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", v12, 22) )
      __debugbreak();
  }
  if ( !isDualWield )
    return gesture && gesture->anims[assetIndex];
  v11 = mappingInfo->hand;
  if ( hand == v11 || v11 == NUM_WEAPON_HANDS || !gesture->weaponSettings.splitAnimsAkimbo )
    return gesture && gesture->anims[assetIndex];
  return v4;
}

