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
  float v10; 
  float v11; 
  float v12; 
  const GestureDirectionalSettings *v13; 
  float limitRight; 
  float limitDown; 
  double v16; 
  float v17; 
  double v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  double v23; 
  int v24; 
  __int64 v25; 
  double v26; 
  float *v27; 
  __int64 v28; 
  unsigned int v29; 
  unsigned int ChildAt; 
  vec3_t result; 
  __int128 v32; 

  if ( !*((_QWORD *)nodeData + 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3064, ASSERT_TYPE_ASSERT, "(node->directionalSettings != 0)", (const char *)&queryFormat, "node->directionalSettings != NULL") )
    __debugbreak();
  CG_Gesture_DirectionalBlendNode_CalculateRelativeTargetVector((CG_Gesture_DirectionalBlendNode *)nodeData, &result);
  v10 = result.v[2];
  v11 = result.v[1];
  v12 = result.v[0];
  if ( !*((_BYTE *)nodeData + 64) )
  {
    *((_BYTE *)nodeData + 64) = 1;
    *((float *)nodeData + 13) = v12;
    *((float *)nodeData + 14) = v11;
    *((float *)nodeData + 15) = v10;
  }
  if ( animInfo->state.weight == 0.0 )
  {
    XAnimClearTreeGoalWeights(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animInfo->animIndex, 0.0, 1, NULL, LINEAR);
  }
  else
  {
    v13 = (const GestureDirectionalSettings *)*((_QWORD *)nodeData + 5);
    v32 = 0i64;
    if ( v11 <= 0.0 )
      limitRight = v13->limitRight;
    else
      limitRight = v13->limitLeft;
    if ( v10 <= 0.0 )
      limitDown = v13->limitDown;
    else
      limitDown = v13->limitUp;
    v16 = CG_Gesture_Normalize(COERCE_FLOAT(LODWORD(v11) & _xmm), 0.0, limitRight);
    v17 = *(float *)&v16;
    v18 = CG_Gesture_Normalize(COERCE_FLOAT(LODWORD(v10) & _xmm), 0.0, limitDown);
    v19 = *(float *)&v18;
    v20 = CG_Gesture_CalcLerpRate(v13, v17, dtime);
    *(float *)&v18 = CG_Gesture_CalcLerpRate(v13, v19, dtime);
    *((float *)nodeData + 13) = v12;
    v21 = (float)((float)(1.0 - v20) * *((float *)nodeData + 14)) + (float)(v11 * v20);
    v22 = (float)((float)(1.0 - *(float *)&v18) * *((float *)nodeData + 15)) + (float)(v10 * *(float *)&v18);
    *((float *)nodeData + 15) = v22;
    *((float *)nodeData + 14) = v21;
    v23 = CG_Gesture_Normalize(COERCE_FLOAT(LODWORD(v21) & _xmm), 0.0, limitRight);
    v24 = *((_DWORD *)nodeData + 15);
    v25 = 4i64;
    if ( v21 <= 0.0 )
      v25 = 8i64;
    *(float *)((char *)&v32 + v25) = *(float *)&v23;
    v26 = CG_Gesture_Normalize(COERCE_FLOAT(v24 & _xmm), 0.0, limitDown);
    v27 = (float *)&v32;
    v28 = 12i64;
    v29 = 0;
    if ( v22 <= 0.0 )
      v28 = 0i64;
    *(float *)((char *)&v32 + v28) = *(float *)&v26;
    *(_QWORD *)result.v = obj->tree->anims;
    do
    {
      ChildAt = XAnimGetChildAt(obj->tree->anims, animInfo->animIndex, v29);
      if ( XAnimIsValidNode(*(const XAnim_s **)result.v, ChildAt) )
      {
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, *v27, 0.0, 1.0, (scr_string_t)0, *v27 > 0.0, 0, LINEAR, modelNameMap);
        XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, ChildAt, *((float *)nodeData + 12));
      }
      ++v29;
      ++v27;
    }
    while ( v29 < 4 );
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
  unsigned int v10; 
  float v11; 
  float v12; 
  XAnim_s *v13; 
  unsigned int ChildAt; 
  unsigned int v15; 
  double Time; 
  XModelNameMap *v17; 
  float v18; 
  double NotetrackTimeFromCharString; 
  const dvar_t *v20; 
  float value; 
  const dvar_t *v22; 
  float v25; 
  float v26; 
  double v27; 
  float v28; 
  double v29; 
  double v30; 
  const GestureLookAroundSettings *v31; 
  double v32; 
  XAnim_s *v33; 
  unsigned int v34; 
  float *v35; 
  unsigned int v36; 
  double v37; 
  float v38; 
  bool HasFinished; 
  float v40; 
  int bRestart; 
  XModelNameMap *cachedModelNameMap; 
  unsigned int animIndex; 
  int v44; 
  int v45; 
  XAnim_s *anims; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3241, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3242, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3243, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !*((_QWORD *)nodeData + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3247, ASSERT_TYPE_ASSERT, "(node->lookAroundSettings != 0)", (const char *)&queryFormat, "node->lookAroundSettings != NULL") )
    __debugbreak();
  v10 = animInfo->animIndex;
  v11 = *(float *)nodeData;
  v12 = *((float *)nodeData + 1);
  v13 = obj->tree->anims;
  anims = v13;
  ChildAt = XAnimGetChildAt(v13, v10, 2u);
  animIndex = ChildAt;
  v15 = XAnimGetChildAt(obj->tree->anims, animInfo->animIndex, 1u);
  Time = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v15);
  v17 = modelNameMap;
  v18 = *(float *)&Time;
  if ( !*((_BYTE *)nodeData + 41) )
  {
    *((_BYTE *)nodeData + 41) = 1;
    *((_DWORD *)nodeData + 11) = -1082130432;
    *((float *)nodeData + 8) = v12;
    v18 = FLOAT_0_5;
    if ( XAnimIsValidNode(v13, ChildAt) )
    {
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, ChildAt, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, v17);
      NotetrackTimeFromCharString = XAnimGetNotetrackTimeFromCharString(v13, ChildAt, "interruptible");
      *((float *)nodeData + 11) = *(float *)&NotetrackTimeFromCharString;
    }
  }
  if ( animInfo->state.weight == 0.0 )
  {
    XAnimClearTreeGoalWeights(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animInfo->animIndex, 0.0, 1, NULL, LINEAR);
    return;
  }
  v20 = DCONST_DVARMPFLT_player_view_pitch_up;
  if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  value = v20->current.value;
  v22 = DCONST_DVARMPFLT_player_view_pitch_down;
  if ( !DCONST_DVARMPFLT_player_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  v25 = (float)((float)(v11 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  LODWORD(v26) = LODWORD(v25) & _xmm;
  if ( v25 >= 0.0 )
  {
    v29 = CG_Gesture_Normalize(v26, 0.0, v22->current.value);
    v28 = 0.5 - (float)(*(float *)&v29 * 0.5);
  }
  else
  {
    v27 = CG_Gesture_Normalize(v26, 0.0, value);
    v28 = (float)(*(float *)&v27 + 1.0) * 0.5;
  }
  v30 = I_fclamp(v28, 0.0, 1.0);
  v31 = (const GestureLookAroundSettings *)*((_QWORD *)nodeData + 2);
  v44 = SLODWORD(v30);
  v32 = CG_Gesture_CalcYawRange(v31, v18, v12, dtime, (CG_Gesture_LookAroundBlendNode *)nodeData);
  v33 = anims;
  v34 = 0;
  v35 = (float *)&v44;
  v45 = SLODWORD(v32);
  do
  {
    v36 = XAnimGetChildAt(obj->tree->anims, animInfo->animIndex, v34);
    if ( XAnimIsValidNode(v33, v36) )
    {
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v36, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, v17);
      XAnimSetAnimRate(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v36, 0.0);
      XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v36, *v35);
    }
    ++v34;
    ++v35;
  }
  while ( v34 < 2 );
  if ( !animIndex )
    return;
  v37 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  v38 = *(float *)&v37;
  HasFinished = XAnimHasFinished(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  if ( !*((_BYTE *)nodeData + 28) )
  {
    if ( !HasFinished )
      return;
    goto LABEL_41;
  }
  if ( *(float *)&v37 <= 0.0 )
  {
    cachedModelNameMap = v17;
    bRestart = 0;
LABEL_35:
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, 1.0, 0.2, 1.0, (scr_string_t)0, 1u, bRestart, LINEAR, cachedModelNameMap);
    return;
  }
  if ( HasFinished )
  {
LABEL_41:
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, 0.0, 0.19999999, 1.0, (scr_string_t)0, 0, 0, LINEAR, v17);
    return;
  }
  v40 = *((float *)nodeData + 11);
  if ( v40 > 0.0 && v38 >= v40 )
  {
    cachedModelNameMap = v17;
    bRestart = 1;
    goto LABEL_35;
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
  float v11; 
  __int128 v13; 
  const float4 *v16; 
  const float4 *v17; 
  __int128 v18; 
  vec4_t quat; 

  dObjData = animCalcInfo->ikCalcInfo->dObjData;
  if ( (dObjData->boneInfo[0].allBonesFound || dObjData->boneInfo[0].targetBoneIndex != 255) && !bitarray_base<bitarray<256>>::testBit(&animCalcInfo->ignorePartBits, dObjData->boneInfo[0].targetBoneIndex) )
  {
    v11 = *(float *)nodeData - *((float *)nodeData + 6);
    AnglesToQuat((const vec3_t *)nodeData + 1, &quat);
    HIDWORD(v18) = 0;
    v13 = v18;
    *(float *)&v13 = v11;
    _XMM1 = v13;
    __asm
    {
      vinsertps xmm1, xmm1, xmm7, 10h
      vinsertps xmm1, xmm1, xmm8, 20h ; ' '
    }
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, dObjData->boneInfo[0].targetBoneIndex, v16, v17, weightScale);
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
  __int128 v2; 

  v2 = *(_OWORD *)&newTimeLinear;
  *(float *)&v2 = *(float *)&newTimeLinear - 0.5;
  _XMM3 = v2;
  __asm
  {
    vcmpltss xmm0, xmm0, xmm2
    vblendvps xmm1, xmm3, xmm1, xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM1 * 2.0, 0.0, 1.0);
  return 1.0 - *(float *)&_XMM0;
}

/*
==============
CG_Gesture_CalcLerpRate
==============
*/
double CG_Gesture_CalcLerpRate(const GestureDirectionalSettings *settings, float angle, float dTime)
{
  float maxAngle; 
  float v6; 
  float v7; 
  float v8; 

  if ( settings->maxAngle <= settings->widthCushionAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 391, ASSERT_TYPE_ASSERT, "(settings->widthCushionAngle < settings->maxAngle)", (const char *)&queryFormat, "settings->widthCushionAngle < settings->maxAngle") )
    __debugbreak();
  maxAngle = settings->maxAngle;
  v6 = settings->maxAngle - settings->widthCushionAngle;
  v7 = settings->maxAngle + settings->widthCushionAngle;
  if ( angle >= 0.001 )
  {
    if ( angle >= v6 )
    {
      if ( angle >= maxAngle )
      {
        if ( angle >= v7 )
        {
          v8 = FLOAT_0_0099999998;
        }
        else
        {
          if ( (float)((float)(settings->maxAngle + settings->widthCushionAngle) - maxAngle) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 418, ASSERT_TYPE_ASSERT, "(factor > 0.0f)", (const char *)&queryFormat, "factor > 0.0f") )
            __debugbreak();
          v8 = (float)((float)(1.0 - (float)((float)(angle - settings->maxAngle) / (float)(v7 - maxAngle))) * settings->lerpAtMaxAngle) + (float)((float)((float)(angle - settings->maxAngle) / (float)(v7 - maxAngle)) * settings->lerpAtMaxCushionAngle);
        }
      }
      else
      {
        if ( (float)(maxAngle - v6) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 410, ASSERT_TYPE_ASSERT, "(factor > 0.0f)", (const char *)&queryFormat, "factor > 0.0f") )
          __debugbreak();
        v8 = (float)((float)(1.0 - (float)((float)(angle - v6) / (float)(maxAngle - v6))) * settings->lerpAtMinCushionAngle) + (float)((float)((float)(angle - v6) / (float)(maxAngle - v6)) * settings->lerpAtMaxAngle);
      }
    }
    else
    {
      if ( v6 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 402, ASSERT_TYPE_ASSERT, "(minCushionAngle > 0.0f)", (const char *)&queryFormat, "minCushionAngle > 0.0f") )
        __debugbreak();
      v8 = (float)((float)(angle / v6) * settings->lerpAtMinCushionAngle) + (float)(1.0 - (float)(angle / v6));
    }
  }
  else
  {
    v8 = FLOAT_1_0;
  }
  return I_fclamp((float)(v8 * dTime) * 60.0, 0.0, 1.0);
}

/*
==============
CG_Gesture_CalcYawLerpInRate
==============
*/
float CG_Gesture_CalcYawLerpInRate(const GestureLookAroundSettings *lookAroundSettings, const float velocity)
{
  float v2; 
  float v3; 
  double v5; 

  LODWORD(v2) = LODWORD(velocity) & _xmm;
  v3 = lookAroundSettings->yawLerpIn * 10.0;
  if ( COERCE_FLOAT(LODWORD(velocity) & _xmm) < 0.1 )
    return 0.0;
  if ( v2 < 0.30000001 )
    return v3 * velocity;
  if ( v2 >= 0.80000001 )
    return lookAroundSettings->yawLerpIn * 10.0;
  v5 = CG_Gesture_Normalize(v2, 0.30000001, 0.80000001);
  return v3 * *(float *)&v5;
}

/*
==============
CG_Gesture_CalcYawRange
==============
*/
double CG_Gesture_CalcYawRange(const GestureLookAroundSettings *lookAroundSettings, const float oldTime, const float yaw, const float time, CG_Gesture_LookAroundBlendNode *outNode)
{
  float v9; 
  float v10; 
  double v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  __int128 v22; 

  v9 = 0.0;
  if ( !lookAroundSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3161, ASSERT_TYPE_ASSERT, "(lookAroundSettings)", (const char *)&queryFormat, "lookAroundSettings") )
    __debugbreak();
  if ( !outNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3162, ASSERT_TYPE_ASSERT, "(outNode)", (const char *)&queryFormat, "outNode") )
    __debugbreak();
  v10 = lookAroundSettings->yawLerpOut * 10.0;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  if ( time != 0.0 )
    v9 = (float)((float)((float)((float)(yaw - outNode->oldYaw) * 0.0027777778) - *(float *)&_XMM4) * 360.0) / time;
  v13 = I_fclamp(v9 * 0.00390625, -1.0, 1.0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(oldTime - 0.5) & _xmm) < 0.000001 )
    outNode->isReturning = 0;
  v14 = (float)(*(float *)&v13 + outNode->oldVelocity) * 0.5;
  LODWORD(v15) = LODWORD(v14) & _xmm;
  outNode->oldVelocity = v14;
  if ( COERCE_FLOAT(LODWORD(v14) & _xmm) < 0.001 || outNode->isReturning && v15 <= 0.050000001 )
  {
    v22 = LODWORD(FLOAT_1_0);
    *(float *)&v22 = (float)((float)(1.0 - (float)(v10 * time)) * oldTime) + (float)((float)(v10 * time) * 0.5);
    _XMM3 = v22;
    *(float *)&v22 = *(float *)&v22 - 0.5;
    _XMM2 = v22;
    __asm
    {
      vcmpltss xmm0, xmm3, xmm10
      vblendvps xmm1, xmm2, xmm1, xmm0
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM1 * 2.0, 0.0, 1.0);
    v21 = sinf_0((float)(1.0 - *(float *)&_XMM0) * 1.5707964) * (float)(oldTime - *(float *)&_XMM3);
    outNode->isReturning = 1;
  }
  else
  {
    v17 = lookAroundSettings->yawLerpIn * 10.0;
    v16 = v17;
    if ( v15 >= 0.1 )
    {
      if ( v15 >= 0.30000001 )
      {
        if ( v15 < 0.80000001 )
        {
          v18 = CG_Gesture_Normalize(v15, 0.30000001, 0.80000001);
          v16 = v17 * *(float *)&v18;
        }
      }
      else
      {
        v16 = v17 * v14;
      }
    }
    else
    {
      v16 = 0.0;
    }
    v19 = (float)(v14 * time) * v16;
    v20 = CG_Gesture_CalcEaseTime(oldTime - v19);
    v21 = (float)((float)(cosf_0(*(float *)&v20 * 3.1415927) - 1.0) * v19) * -0.5;
  }
  outNode->oldYaw = yaw;
  return I_fclamp(oldTime - v21, 0.0, 1.0);
}

/*
==============
CG_Gesture_CalculateSlotBlendOverride
==============
*/
void CG_Gesture_CalculateSlotBlendOverride(const playerState_s *ps, const unsigned int slot, const int gameTime, const GestureAnimationState animState, float *outOutDuration, float *outBlendInEndTime)
{
  float v10; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2000, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outOutDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2001, ASSERT_TYPE_ASSERT, "(outOutDuration)", (const char *)&queryFormat, "outOutDuration") )
    __debugbreak();
  if ( !outBlendInEndTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2002, ASSERT_TYPE_ASSERT, "(outBlendInEndTime)", (const char *)&queryFormat, "outBlendInEndTime") )
    __debugbreak();
  v10 = (float)ps->gestureState.slotBlendDuration * 0.001;
  if ( BG_Gesture_IsJumpTimeBlendActive(ps, slot, gameTime) )
  {
    *outOutDuration = v10;
  }
  else if ( animState == GESTURE_ANIM_STATE_OUT )
  {
    _XMM0 = *(unsigned int *)outOutDuration;
    __asm { vminss  xmm1, xmm0, xmm6 }
    *outOutDuration = *(float *)&_XMM1;
  }
  else if ( animState == GESTURE_ANIM_STATE_IN )
  {
    _XMM0 = *(unsigned int *)outBlendInEndTime;
    __asm { vminss  xmm1, xmm0, xmm6 }
    *outBlendInEndTime = *(float *)&_XMM1;
  }
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
  __int64 v4; 
  GestureSlotInfo *Info; 
  bool result; 
  cg_t *LocalClientGlobals; 
  WeaponHand *ViewModelHand; 
  DObj *viewModelDObj; 
  bool rebuildTree; 
  bool v14; 
  unsigned int lastGesture; 
  bool v16; 
  char v17; 
  bool v18; 
  __int64 blendOutToZero; 
  DObj *v20; 

  v4 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2744, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(blendOutToZero) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2745, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", blendOutToZero, 2) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, v4, hand);
  if ( !Info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2748, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( Info->restoreAnims )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ViewModelHand = cg_t::GetViewModelHand(LocalClientGlobals, hand);
  if ( !ViewModelHand && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2758, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
    __debugbreak();
  viewModelDObj = ViewModelHand->viewModelDObj;
  v20 = ViewModelHand->viewModelDObj;
  if ( (const playerState_s *)((char *)ps + 32 * v4) == (const playerState_s *)-1052i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2762, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    viewModelDObj = v20;
  }
  rebuildTree = Info->rebuildTree;
  v14 = !Info->isInitialized && -1.0 != Info->animTime;
  lastGesture = Info->lastGesture;
  v16 = ps->gestureState.gestures[v4].index == lastGesture || !lastGesture;
  v17 = 0;
  v18 = 0;
  if ( !v14 )
    goto LABEL_31;
  if ( v16 )
  {
    if ( Info->animState == GESTURE_ANIM_STATE_OUT )
    {
      v17 = 1;
LABEL_34:
      CG_Gesture_StopAnims(ps, v4, viewModelDObj, 0.0, 1, 1);
      CG_Gesture_Shutdown(localClientNum, v4, hand);
      goto LABEL_35;
    }
LABEL_31:
    if ( v16 )
      goto LABEL_35;
  }
  if ( Info->animState )
  {
    v18 = 1;
    goto LABEL_34;
  }
LABEL_35:
  Info->isRestarting = v17;
  result = v18;
  Info->rebuildTree = rebuildTree;
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
  const GestureDirectionalSettings *v5; 
  float v6; 
  float v7; 
  const GestureDirectionalSettings *v18; 
  float v19; 
  float targetOffsetYaw; 
  float targetOffsetX; 
  float targetOffsetY; 
  float targetOffsetZ; 
  float v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  vec3_t angles; 
  vec3_t v44; 
  tmat33_t<vec3_t> v45; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v47; 
  tmat43_t<vec3_t> out; 

  directionalSettings = node->directionalSettings;
  if ( !directionalSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 378, ASSERT_TYPE_ASSERT, "(directionalSettings)", (const char *)&queryFormat, "directionalSettings") )
    __debugbreak();
  if ( directionalSettings->useTargetOffset )
  {
    v5 = node->directionalSettings;
    v6 = node->viewAngles.v[1];
    v7 = node->viewAngles.v[2];
    angles.v[0] = node->viewAngles.v[0];
    angles.v[1] = v6;
    angles.v[2] = v7;
    _XMM0 = v5->ignoreViewPitchForTargetOffset;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM4 = 0i64;
    __asm { vblendvps xmm0, xmm4, xmm3, xmm2 }
    angles.v[0] = *(float *)&_XMM0;
    _XMM0 = v5->ignoreViewYawForTargetOffset;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm5, xmm2
    }
    angles.v[1] = *(float *)&_XMM0;
    _XMM0 = v5->ignoreViewRollForTargetOffset;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm4, xmm6, xmm2
    }
    angles.v[2] = *(float *)&_XMM0;
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
    v18 = node->directionalSettings;
    v19 = node->viewOrigin.v[1];
    axis.m[3].v[0] = node->viewOrigin.v[0];
    axis.m[3].v[2] = node->viewOrigin.v[2];
    axis.m[3].v[1] = v19;
    *(float *)&_XMM2 = v18->targetOffsetRoll;
    targetOffsetYaw = v18->targetOffsetYaw;
    targetOffsetX = v18->targetOffsetX;
    targetOffsetY = v18->targetOffsetY;
    targetOffsetZ = v18->targetOffsetZ;
    v44.v[0] = v18->targetOffsetPitch;
    v44.v[1] = targetOffsetYaw;
    v44.v[2] = *(float *)&_XMM2;
    AnglesToAxis(&v44, (tmat33_t<vec3_t> *)&v47);
    v47.m[3].v[0] = targetOffsetX;
    v47.m[3].v[1] = targetOffsetY;
    v47.m[3].v[2] = targetOffsetZ;
    MatrixMultiply43(&v47, &axis, &out);
    v24 = out.m[3].v[0];
    v25 = LODWORD(out.m[3].v[1]);
    v26 = out.m[3].v[2];
  }
  else
  {
    v24 = node->targetPos.v[0];
    v25 = LODWORD(node->targetPos.v[1]);
    v26 = node->targetPos.v[2];
  }
  v28 = v25;
  v27 = *(float *)&v25 - node->viewOrigin.v[1];
  v29 = v24 - node->viewOrigin.v[0];
  v30 = v26 - node->viewOrigin.v[2];
  *(float *)&v28 = fsqrt((float)((float)(v27 * v27) + (float)(v29 * v29)) + (float)(v30 * v30));
  _XMM3 = v28;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v34 = v29 * (float)(1.0 / *(float *)&_XMM0);
  v35 = v27 * (float)(1.0 / *(float *)&_XMM0);
  v36 = v30 * (float)(1.0 / *(float *)&_XMM0);
  AnglesToAxis(&node->viewAngles, &v45);
  if ( &v44 == result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1103, ASSERT_TYPE_ASSERT, "(&in1 != &out)", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v37 = v35 * v45.m[1].v[1];
  v38 = v36 * v45.m[1].v[2];
  result->v[0] = (float)((float)(v35 * v45.m[0].v[1]) + (float)(v34 * v45.m[0].v[0])) + (float)(v36 * v45.m[0].v[2]);
  v39 = v37 + (float)(v34 * v45.m[1].v[0]);
  v40 = v35 * v45.m[2].v[1];
  v41 = v39 + v38;
  v42 = v36 * v45.m[2].v[2];
  result->v[1] = v41;
  result->v[2] = (float)(v40 + (float)(v34 * v45.m[2].v[0])) + v42;
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
  GestureSlotInfo *Info; 
  GestureAnimationState animState; 
  GestureAnimationSettings *AnimationSettings; 
  float v11; 
  double v12; 
  float inAnimLength; 
  float mainAnimLength; 
  float outAnimLength; 
  float animationLength; 
  float v17; 
  __int64 v19; 
  __int64 v20; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 923, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v19) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 924, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v19, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v20) = 2;
    LODWORD(v19) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 925, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, slot, hand);
  animState = Info->animState;
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  v11 = Info->animTime * 1000.0;
  LODWORD(v12) = 0;
  if ( !AnimationSettings->hasTransitions )
  {
    animationLength = (float)AnimationSettings->animationLength;
    goto LABEL_18;
  }
  inAnimLength = (float)AnimationSettings->inAnimLength;
  mainAnimLength = (float)AnimationSettings->mainAnimLength;
  outAnimLength = (float)AnimationSettings->outAnimLength;
  switch ( animState )
  {
    case GESTURE_ANIM_STATE_IN:
      animationLength = (float)AnimationSettings->inAnimLength;
LABEL_18:
      v17 = Info->animTime * 1000.0;
      goto LABEL_19;
    case GESTURE_ANIM_STATE_PLAYING:
      v17 = fmodf_0(v11 - inAnimLength, mainAnimLength);
      animationLength = mainAnimLength;
LABEL_19:
      v12 = CG_Gesture_Normalize(v17, 0.0, animationLength);
      return I_fclamp(*(float *)&v12, 0.0, 1.0);
    case GESTURE_ANIM_STATE_OUT:
      v17 = fmodf_0((float)(v11 - inAnimLength) - mainAnimLength, outAnimLength);
      animationLength = outAnimLength;
      goto LABEL_19;
  }
  return I_fclamp(*(float *)&v12, 0.0, 1.0);
}

/*
==============
CG_Gesture_GetAnimTimeFromTree
==============
*/
void CG_Gesture_GetAnimTimeFromTree(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const Gesture *gesture, const XAnimTree *animTree, float *outTimeInSeconds, float *outNormalizedTime)
{
  GestureSlotInfo *Info; 
  GestureAnimationState animState; 
  GestureAnimationSettings *AnimationSettings; 
  unsigned int mainAnim; 
  bool v15; 
  bool IsLooped; 
  float v17; 
  double Weight; 
  double Time; 
  float animationLength; 
  float v21; 
  double v22; 
  __int64 v23; 
  __int64 v24; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 978, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 979, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !outTimeInSeconds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 980, ASSERT_TYPE_ASSERT, "(outTimeInSeconds)", (const char *)&queryFormat, "outTimeInSeconds") )
    __debugbreak();
  if ( !outNormalizedTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 981, ASSERT_TYPE_ASSERT, "(outNormalizedTime)", (const char *)&queryFormat, "outNormalizedTime") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v23) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 982, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v23, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v24) = 2;
    LODWORD(v23) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 983, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, slot, hand);
  animState = Info->animState;
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 988, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  *outTimeInSeconds = -1.0;
  *outNormalizedTime = -1.0;
  mainAnim = Info->mainAnim;
  if ( mainAnim && gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
  {
    if ( Info->isMainAnimAdditive )
      mainAnim = XAnimGetChildAt(animTree->anims, mainAnim, 0);
    if ( XAnimHasFinished(animTree, 0, XANIM_SUBTREE_DEFAULT, mainAnim) )
    {
      v15 = Info->cancelTransitions && Info->animTimeNormalized >= 0.0;
      IsLooped = XAnimIsLooped(animTree->anims, mainAnim);
      if ( v15 || !IsLooped )
        v17 = FLOAT_1_0;
      else
        v17 = 0.0;
    }
    else
    {
      Weight = XAnimGetWeight(animTree, 0, XANIM_SUBTREE_DEFAULT, mainAnim);
      if ( *(float *)&Weight == 0.0 )
        return;
      Time = XAnimGetTime(animTree, 0, XANIM_SUBTREE_DEFAULT, mainAnim);
      v17 = *(float *)&Time;
    }
    animationLength = (float)AnimationSettings->animationLength;
    if ( animState == GESTURE_ANIM_STATE_IN )
    {
      if ( !AnimationSettings->hasTransitions )
        goto LABEL_47;
      v21 = (float)AnimationSettings->inAnimLength * v17;
    }
    else if ( animState == GESTURE_ANIM_STATE_PLAYING )
    {
      if ( !AnimationSettings->hasTransitions )
        goto LABEL_47;
      v21 = (float)((float)AnimationSettings->mainAnimLength * v17) + (float)AnimationSettings->inAnimLength;
    }
    else
    {
      if ( animState != GESTURE_ANIM_STATE_OUT || !AnimationSettings->hasTransitions )
        goto LABEL_47;
      v21 = (float)((float)((float)AnimationSettings->outAnimLength * v17) + (float)AnimationSettings->mainAnimLength) + (float)AnimationSettings->inAnimLength;
    }
    v22 = CG_Gesture_Normalize(v21, 0.0, animationLength);
    v17 = *(float *)&v22;
LABEL_47:
    *outNormalizedTime = v17;
    if ( v17 >= 0.0 )
      *outTimeInSeconds = (float)(animationLength * v17) * 0.001;
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
float CG_Gesture_Normalize(float value, float min, float max)
{
  if ( min > max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 210, ASSERT_TYPE_ASSERT, "(min <= max)", (const char *)&queryFormat, "min <= max") )
    __debugbreak();
  if ( value < min )
    return 0.0;
  if ( value > max )
    return FLOAT_1_0;
  if ( min == max )
    return 0.0;
  else
    return (float)(value - min) / (float)(max - min);
}

/*
==============
CG_Gesture_ProcessViewmodel
==============
*/
void CG_Gesture_ProcessViewmodel(LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, const Weapon *weapon)
{
  char v4; 
  __int64 v5; 
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  XAnimTree ***v10; 
  DObj *v11; 
  CgWeaponMap *v12; 
  PlayerHandIndex WeaponHandForWeapon; 
  unsigned int v14; 
  unsigned int v15; 
  GestureSlotInfo *Info; 
  GestureSlotInfo *v17; 
  char useIdleLeft; 
  bool v19; 
  const Gesture *CurrentAsset; 
  float v21; 
  GestureAnimationState animState; 
  __int64 outState; 
  float *outMainTreeWeight; 
  char v25; 
  bool v26; 
  bool outShouldCrossfadeInOut; 
  bool outShouldBlendOut; 
  float blendTime; 
  float crossfadeOutStartTime; 
  XAnimTree *animTree; 
  float v32; 
  bool outShouldBlendOutToZero; 
  bool IsJumpTimeBlendActive; 

  v4 = 0;
  v5 = hand;
  v7 = localClientNum;
  IsJumpTimeBlendActive = 0;
  v25 = 0;
  LOBYTE(v32) = 0;
  outShouldBlendOutToZero = 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2817, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(outState) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2818, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outState, 2) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(outMainTreeWeight) = 2;
    LODWORD(outState) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outState, outMainTreeWeight) )
      __debugbreak();
  }
  v10 = (XAnimTree ***)&LocalClientGlobals->m_weaponHand[v5];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2823, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
    __debugbreak();
  v11 = (DObj *)*v10;
  animTree = **v10;
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2827, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v12 = CgWeaponMap::ms_instance[v7];
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2830, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  WeaponHandForWeapon = BG_PlayerLastWeaponHandForWeapon(v12, ps, weapon);
  v14 = 0;
  v15 = 0;
  v26 = WeaponHandForWeapon == WEAPON_HAND_LEFT;
  do
  {
    Info = CG_Gesture_GetInfo((LocalClientNum_t)v7, v15++, (PlayerHandIndex)v5);
    Info->mainTreeWeight = -1.0;
    Info->additiveAdsWeight = -1.0;
    Info->fingerPoseWeight = -1.0;
  }
  while ( v15 < 2 );
  do
  {
    v17 = CG_Gesture_GetInfo((LocalClientNum_t)v7, v14, (PlayerHandIndex)v5);
    if ( !CG_Gesture_IsEnabled((LocalClientNum_t)v7, ps, v14, (const PlayerHandIndex)v5) )
    {
      CG_Gesture_Shutdown((LocalClientNum_t)v7, v14, (const PlayerHandIndex)v5);
LABEL_26:
      useIdleLeft = LOBYTE(v32);
      goto LABEL_27;
    }
    if ( (unsigned int)v5 >= 2 )
    {
      LODWORD(outMainTreeWeight) = 2;
      LODWORD(outState) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 914, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outState, outMainTreeWeight) )
        __debugbreak();
    }
    if ( CG_Gesture_GetInfo((LocalClientNum_t)v7, v14, (PlayerHandIndex)v5)->rebuildTree || CG_Gesture_CleanSlot((LocalClientNum_t)v7, ps, v14, (const PlayerHandIndex)v5) )
      goto LABEL_26;
    CurrentAsset = BG_Gesture_GetCurrentAsset(ps, v14);
    if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2857, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
      __debugbreak();
    CG_Gesture_UpdateAnimationState((LocalClientNum_t)v7, ps, v14, (const PlayerHandIndex)v5, v26, CurrentAsset, animTree);
    CG_Gesture_UpdateBlendingParameters((LocalClientNum_t)v7, ps, v14, (const PlayerHandIndex)v5, v26, CurrentAsset, animTree, &blendTime, &outShouldCrossfadeInOut, &outShouldBlendOut, &crossfadeOutStartTime, &outShouldBlendOutToZero);
    v21 = blendTime;
    if ( !v17->isInitialized )
      goto LABEL_44;
    if ( !v17->restoreAnims )
    {
      if ( !CurrentAsset->looping || -1.0 != v17->animTimeNormalized || v17->animState == GESTURE_ANIM_STATE_OFF )
        goto LABEL_47;
LABEL_44:
      if ( !v17->restoreAnims )
        CG_Gesture_Initialize((LocalClientNum_t)v7, ps, v14, (const PlayerHandIndex)v5);
    }
    CG_Gesture_StartAnims((LocalClientNum_t)v7, CurrentAsset, ps, v14, v11, (const PlayerHandIndex)v5, v26, v21);
LABEL_47:
    CG_Gesture_SwitchMainAnimations((LocalClientNum_t)v7, v11, animTree, CurrentAsset, ps, v14, (const PlayerHandIndex)v5, v26, v21, outShouldCrossfadeInOut, crossfadeOutStartTime);
    animState = v17->animState;
    switch ( animState )
    {
      case GESTURE_ANIM_STATE_IN:
        CG_Gesture_UpdateAnims((LocalClientNum_t)v7, CurrentAsset, ps, v14, (const PlayerHandIndex)v5, v11, v17->animTimeNormalized, v21);
        IsJumpTimeBlendActive = 1;
        break;
      case GESTURE_ANIM_STATE_PLAYING:
        CG_Gesture_UpdateAnims((LocalClientNum_t)v7, CurrentAsset, ps, v14, (const PlayerHandIndex)v5, v11, v17->animTimeNormalized, v21);
        IsJumpTimeBlendActive = BG_Gesture_IsJumpTimeBlendActive(ps, v14, ps->serverTime);
        break;
      case GESTURE_ANIM_STATE_OUT:
        CG_Gesture_UpdateAnims((LocalClientNum_t)v7, CurrentAsset, ps, v14, (const PlayerHandIndex)v5, v11, v17->animTimeNormalized, v21);
        CG_Gesture_StopAnims(ps, v14, v11, v21, outShouldBlendOut, outShouldBlendOutToZero);
        v25 = 1;
        break;
      case GESTURE_ANIM_STATE_OFF:
        CG_Gesture_StopAnims(ps, v14, v11, v21, 1, 1);
        CG_Gesture_Shutdown((LocalClientNum_t)v7, v14, (const PlayerHandIndex)v5);
        break;
    }
    v4 = 1;
    useIdleLeft = CurrentAsset->weaponSettings.useLeftIdleAkimbo | LOBYTE(v32);
    LOBYTE(v32) = useIdleLeft;
LABEL_27:
    ++v14;
  }
  while ( v14 < 2 );
  if ( v4 )
  {
    v19 = IsJumpTimeBlendActive;
    v32 = 0.0;
    CG_Gesture_UpdateMainTree((LocalClientNum_t)v7, v11, ps, (const PlayerHandIndex)v5, IsJumpTimeBlendActive, v25, &v32);
    CG_Gesture_UpdateAkimboAnims((LocalClientNum_t)v7, ps, v11, (const PlayerHandIndex)v5, v26, v32, v19, v25, useIdleLeft);
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
void CG_Gesture_SetWeightMainTree(DObj *obj, const playerState_s *ps, float mainTreeWeight, float additiveAdsWeight, float fingerPoseWeight, float blend, bool blendOut)
{
  __int128 v7; 
  float v10; 
  XAnimTree *Tree; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 i; 
  XAnimInfo *v14; 
  bool v15; 
  unsigned __int16 animIndex; 
  char v17; 
  char v18; 
  unsigned __int16 v19; 
  char v20; 
  int v22; 
  double v25; 
  __int128 goalTime; 
  double Rate; 

  v10 = mainTreeWeight;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 502, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  Tree = DObjGetTree(obj);
  if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 504, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !Tree->children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 505, ASSERT_TYPE_ASSERT, "(tree->children)", (const char *)&queryFormat, "tree->children") )
    __debugbreak();
  AnimInfo = GetAnimInfo(Tree->children);
  for ( i = GetAnimInfo(AnimInfo->children)->children; i; i = v14->next )
  {
    v14 = GetAnimInfo(i);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    v15 = v14->animToModel || (v14->animParent.flags & 0x210) == 0;
    animIndex = v14->animIndex;
    if ( v15 || (unsigned __int16)(animIndex - 117) > 2u && animIndex != 120 )
    {
      v17 = 0;
      if ( v15 )
        goto LABEL_26;
    }
    else
    {
      v17 = 1;
    }
    if ( (unsigned __int16)(animIndex - 93) <= 6u && BG_Demeanor_GetTargetState(ps) == DEMEANOR_STATE_NORMAL )
    {
      v18 = 1;
      goto LABEL_27;
    }
LABEL_26:
    v18 = 0;
    if ( v15 )
    {
      v19 = v14->animIndex;
      goto LABEL_30;
    }
LABEL_27:
    v19 = v14->animIndex;
    if ( (unsigned __int16)(v19 - 30) <= 2u )
    {
      v20 = 1;
      *(float *)&_XMM7 = additiveAdsWeight;
      goto LABEL_32;
    }
LABEL_30:
    v20 = 0;
    *(float *)&_XMM7 = v10;
    if ( v17 )
      *(float *)&_XMM7 = fingerPoseWeight;
LABEL_32:
    if ( v19 <= 0x1Bu )
    {
      v22 = 268402748;
      if ( _bittest(&v22, v19) )
        continue;
    }
    if ( (unsigned __int16)(v19 - 123) <= 0x27u || !v15 && !v17 && !v18 && !v20 && v14->animParent.flags )
      continue;
    *(double *)&v7 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v19);
    _XMM9 = v7;
    *(double *)&v7 = XAnimGetGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v14->animIndex);
    _XMM6 = v7;
    v25 = XAnimGetGoalTime(Tree, 0, XANIM_SUBTREE_DEFAULT, v14->animIndex);
    goalTime = LODWORD(blend);
    if ( blendOut )
    {
      __asm
      {
        vcmpltss xmm1, xmm9, xmm6
        vblendvps xmm1, xmm8, xmm0, xmm1
        vminss  xmm7, xmm6, xmm7
      }
      if ( !v18 )
      {
        if ( *(float *)&_XMM6 == 0.0 && *(float *)&_XMM9 > 0.001 )
          *(float *)&goalTime = FLOAT_0_050000001;
        else
          LODWORD(goalTime) = _XMM1;
        goto LABEL_58;
      }
    }
    else
    {
      if ( (v14->state.flags & 1) != 0 )
      {
        if ( !XAnimInfoIsInstantWeightChange(v14) || *(float *)&_XMM6 != 0.0 )
          goto LABEL_58;
LABEL_57:
        LODWORD(_XMM7) = _XMM6;
        goto LABEL_58;
      }
      if ( *(float *)&_XMM6 == 0.0 )
        goto LABEL_57;
      if ( *(float *)&_XMM6 != 1.0 )
      {
        if ( *(float *)&_XMM6 <= *(float *)&_XMM9 )
        {
          __asm { vmaxss  xmm7, xmm6, xmm7 }
          goto LABEL_58;
        }
LABEL_53:
        if ( v17 )
        {
          LODWORD(goalTime) = 0;
          goto LABEL_58;
        }
        goto LABEL_42;
      }
      if ( *(float *)&_XMM6 > *(float *)&_XMM9 )
        goto LABEL_53;
    }
LABEL_42:
    LODWORD(goalTime) = LODWORD(v25);
LABEL_58:
    Rate = XAnimGetRate(Tree, 0, XANIM_SUBTREE_DEFAULT, v14->animIndex);
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v14->animIndex, *(float *)&_XMM7, *(float *)&goalTime, *(float *)&Rate, (scr_string_t)0, *(float *)&_XMM7 > 0.0, 0, LINEAR, NULL);
    v10 = mainTreeWeight;
  }
}

/*
==============
CG_Gesture_ShouldBlendOutOfAnim
==============
*/
char CG_Gesture_ShouldBlendOutOfAnim(const LocalClientNum_t localClientNum, const playerState_s *ps, const PlayerHandIndex hand, const GestureWeaponAnimBlendOutInfo **outBlendOutInfo)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  const XAnimTree **p_tree; 
  const XAnimTree *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int *p_animIndexToBlendOut; 
  double Weight; 
  double GoalWeight; 
  __int64 v17; 
  __int64 v18; 

  v5 = hand;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3385, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3386, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v18) = 2;
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3387, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( !outBlendOutInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3388, ASSERT_TYPE_ASSERT, "(outBlendOutInfo)", (const char *)&queryFormat, "outBlendOutInfo") )
    __debugbreak();
  *outBlendOutInfo = NULL;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3393, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v18) = 2;
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( (cg_t *)((char *)LocalClientGlobals + 40 * v5) == (cg_t *)-807496i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3397, ASSERT_TYPE_ASSERT, "(weapHand)", (const char *)&queryFormat, "weapHand") )
    __debugbreak();
  p_tree = (const XAnimTree **)&LocalClientGlobals->m_weaponHand[v5].viewModelDObj->tree;
  if ( !p_tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3399, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v10 = *p_tree;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 3402, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  v11 = 0;
  while ( !CG_Gesture_IsEnabled(localClientNum, ps, v11, (const PlayerHandIndex)v5) || !BG_Gesture_GetCurrentAsset(ps, v11)->weaponSettings.blendOutRaise )
  {
LABEL_35:
    if ( ++v11 >= 2 )
      return 0;
  }
  v12 = 0;
  p_animIndexToBlendOut = (unsigned int *)&s_raiseBlendOutTable[0].animIndexToBlendOut;
  while ( 1 )
  {
    Weight = XAnimGetWeight(v10, 0, XANIM_SUBTREE_DEFAULT, *p_animIndexToBlendOut);
    if ( *(float *)&Weight > 0.0 )
    {
      GoalWeight = XAnimGetGoalWeight(v10, 0, XANIM_SUBTREE_DEFAULT, *p_animIndexToBlendOut);
      if ( *(float *)&GoalWeight != 0.0 )
        break;
    }
    ++v12;
    p_animIndexToBlendOut += 5;
    if ( v12 >= 5 )
      goto LABEL_35;
  }
  *outBlendOutInfo = (const GestureWeaponAnimBlendOutInfo *)(p_animIndexToBlendOut - 1);
  return 1;
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
  __int64 v11; 
  DObj *v12; 
  float v13; 
  const dvar_t *v14; 
  float value; 
  bool v16; 
  PlayerHandIndex v17; 
  bool AnimationSlot; 
  unsigned int v20; 
  GestureDirectionalAssetIndex *i; 
  int v22; 
  bool v26; 
  __int64 v27; 
  int v28; 
  const GestureAnimSlotInfo *v29; 
  unsigned int childIndex; 
  unsigned int *AnimMappingInfo; 
  __int64 returnOverlay; 
  __int64 returnOverlaya; 
  weapAnimFiles_t *outIndex; 
  weapAnimFiles_t v35; 

  v11 = localClientNum;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1823, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1824, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1825, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(returnOverlay) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1826, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", returnOverlay, 2) )
      __debugbreak();
  }
  v13 = FLOAT_1_0;
  if ( !CgWeaponMap::ms_instance[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_UseFastOffhand(ps, CgWeaponMap::ms_instance[v11]) )
  {
    v14 = DCONST_DVARFLT_perk_fastOffhandMultiplier;
    if ( !DCONST_DVARFLT_perk_fastOffhandMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_fastOffhandMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
    if ( value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1832, ASSERT_TYPE_ASSERT, "(offhandMultiplier > 0.0f)", (const char *)&queryFormat, "offhandMultiplier > 0.0f") )
      __debugbreak();
    v13 = 1.0 / value;
  }
  if ( gesture->type <= (unsigned int)GESTURE_TYPE_IK_TARGET )
  {
    v16 = isDualWield;
    v17 = hand;
    AnimationSlot = CG_Gesture_GetAnimationSlot(gesture, slot, hand, isDualWield, GESTURE_ASSET_RIGHT_CENTER, 1, &v35);
    _XMM8 = LODWORD(blendTime);
    if ( AnimationSlot )
      XAnimSetGoalWeight(v12, 0, XANIM_SUBTREE_DEFAULT, v35, 1.0, blendTime, v13, (scr_string_t)0, 1u, 0, LINEAR, NULL);
    v20 = 0;
    for ( i = &s_blendTreeMappings[0].assetIndex; ; i += 6 )
    {
      v22 = *((_DWORD *)i + 1);
      _XMM0 = v22 & 0xFFFFFFFD;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm9, xmm2
      }
      v35 = _XMM0;
      if ( v22 == 3 )
      {
        v26 = gesture->type == GESTURE_TYPE_DIRECTIONAL;
        goto LABEL_30;
      }
      if ( v22 == 5 )
        break;
      if ( v22 == 6 )
      {
        v26 = gesture->type == GESTURE_TYPE_IK_TARGET;
LABEL_30:
        if ( v26 )
          goto LABEL_52;
        goto LABEL_31;
      }
      if ( v22 == 1 )
      {
LABEL_52:
        AnimMappingInfo = (unsigned int *)CG_Gesture_GetAnimMappingInfo(slot, v20);
        if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
          __debugbreak();
        childIndex = *AnimMappingInfo;
        goto LABEL_44;
      }
LABEL_31:
      v27 = *(int *)i;
      if ( (_DWORD)v27 == 23 )
        goto LABEL_45;
      if ( (unsigned int)v27 >= 0x16 )
      {
        LODWORD(outIndex) = 22;
        SLODWORD(returnOverlaya) = *i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( GESTURE_ASSET_NUM )", "assetIndex doesn't index GESTURE_ASSET_NUM\n\t%i not in [0, %i)", returnOverlaya, outIndex) )
          __debugbreak();
      }
      if ( v16 )
      {
        v28 = *((_DWORD *)i + 2);
        if ( v17 != v28 && v28 != 2 && gesture->weaponSettings.splitAnimsAkimbo )
          goto LABEL_45;
      }
      if ( !gesture->anims[v27] )
        goto LABEL_45;
      v29 = CG_Gesture_GetAnimMappingInfo(slot, v20);
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
        __debugbreak();
      childIndex = v29->childIndex;
LABEL_44:
      XAnimSetGoalWeight(v12, 0, XANIM_SUBTREE_DEFAULT, childIndex, 1.0, *(float *)&v35, v13, (scr_string_t)0, 1u, 1, LINEAR, NULL);
LABEL_45:
      if ( ++v20 >= 0x16 )
        return;
    }
    v26 = gesture->type == GESTURE_TYPE_LOOK_AROUND;
    goto LABEL_30;
  }
}

/*
==============
CG_Gesture_StartCenterAnimations
==============
*/
void CG_Gesture_StartCenterAnimations(DObj *obj, XAnimTree *animTree, const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, GestureDirectionalAssetIndex anim, GestureDirectionalAssetIndex animAdditive, float startTime, float blendTime)
{
  unsigned int v14; 
  float v15; 
  float v16; 
  unsigned int v17; 
  __int64 returnOverlay; 
  weapAnimFiles_t v19; 
  weapAnimFiles_t outIndex; 

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
    CG_Gesture_GetAnimationSlot(gesture, slot, hand, isDualWield, anim, 0, &outIndex);
    CG_Gesture_GetAnimationSlot(gesture, slot, hand, isDualWield, animAdditive, 1, &v19);
    v14 = outIndex;
    v15 = blendTime;
    v16 = startTime;
    if ( outIndex )
    {
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, outIndex, 1.0, blendTime, 1.0, (scr_string_t)0, 1u, 1, LINEAR, NULL);
      XAnimSetTime(animTree, 0, XANIM_SUBTREE_DEFAULT, v14, v16);
    }
    v17 = v19;
    if ( v19 )
    {
      XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v19, 1.0, v15, 1.0, (scr_string_t)0, 1u, 1, LINEAR, NULL);
      XAnimSetChildTimes(animTree, 0, XANIM_SUBTREE_DEFAULT, v17, v16);
    }
  }
}

/*
==============
CG_Gesture_StopAnim
==============
*/
void CG_Gesture_StopAnim(DObj *obj, XAnimTree *animTree, weapAnimFiles_t animIndex, const float weight, const float blendOut)
{
  double v8; 
  double GoalTime; 

  if ( (weight < 0.0 || weight > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1108, ASSERT_TYPE_ASSERT, "(weight >= 0.0f && weight <= 1.0f)", (const char *)&queryFormat, "weight >= 0.0f && weight <= 1.0f") )
    __debugbreak();
  v8 = XAnimGetWeight(animTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  if ( *(float *)&v8 > weight || (GoalTime = XAnimGetGoalTime(animTree, 0, XANIM_SUBTREE_DEFAULT, animIndex), blendOut < *(float *)&GoalTime) )
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, weight, blendOut, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
}

/*
==============
CG_Gesture_StopAnims
==============
*/
void CG_Gesture_StopAnims(const playerState_s *ps, const unsigned int slot, DObj *obj, const float blendOut, const bool blendOutGestureAnims, const bool blendOutToZero)
{
  const XAnimTree *Tree; 
  GestureNodeType *p_nodeType; 
  signed int v11; 
  float v16; 
  unsigned int IndexBySlot; 
  unsigned int v18; 
  bool v19; 
  unsigned int *AnimMappingInfo; 
  unsigned int v21; 
  double Weight; 
  double v23; 
  const GestureAnimSlotInfo *v24; 
  unsigned int childIndex; 
  double v26; 
  double v27; 
  __int64 goalTime; 
  __int64 rate; 

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
    v11 = 0;
    _XMM0 = blendOutToZero;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM9 = 0i64;
    __asm { vblendvps xmm0, xmm9, xmm1, xmm2 }
    v16 = *(float *)&_XMM0;
    do
    {
      IndexBySlot = BG_Gesture_GetIndexBySlot(ps, slot);
      v18 = IndexBySlot;
      if ( IndexBySlot >= 0x100 )
      {
        LODWORD(rate) = 256;
        LODWORD(goalTime) = IndexBySlot;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1799, ASSERT_TYPE_ASSERT, "(unsigned)( gestureIndex ) < (unsigned)( (1<<8) )", "gestureIndex doesn't index MAX_GESTURE_DEFS\n\t%i not in [0, %i)", goalTime, rate) )
          __debugbreak();
      }
      v19 = *p_nodeType == GESTURE_NODE_TYPE_ADDITIVE_LOOK_AROUND && (!BG_Demeanor_IsPlaying(ps) || !BG_Demeanor_ShouldEnableBlendToLoop(ps, v18));
      if ( *p_nodeType == GESTURE_NODE_TYPE_RELATIVE_ROOT || v19 || *p_nodeType == GESTURE_NODE_TYPE_ADDITIVE_DIRECTIONAL_BLEND || blendOutToZero )
      {
        AnimMappingInfo = (unsigned int *)CG_Gesture_GetAnimMappingInfo(slot, v11);
        if ( !AnimMappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 340, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
          __debugbreak();
        v21 = *AnimMappingInfo;
        if ( (v16 < 0.0 || v16 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1108, ASSERT_TYPE_ASSERT, "(weight >= 0.0f && weight <= 1.0f)", (const char *)&queryFormat, "weight >= 0.0f && weight <= 1.0f") )
          __debugbreak();
        Weight = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v21);
        if ( *(float *)&Weight > v16 || (v23 = XAnimGetGoalTime(Tree, 0, XANIM_SUBTREE_DEFAULT, v21), blendOut < *(float *)&v23) )
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v21, v16, blendOut, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        v24 = CG_Gesture_GetAnimMappingInfo(slot, v11);
        if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 348, ASSERT_TYPE_ASSERT, "(mapping)", (const char *)&queryFormat, "mapping") )
          __debugbreak();
        childIndex = v24->childIndex;
        if ( (v16 < 0.0 || v16 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1108, ASSERT_TYPE_ASSERT, "(weight >= 0.0f && weight <= 1.0f)", (const char *)&queryFormat, "weight >= 0.0f && weight <= 1.0f") )
          __debugbreak();
        v26 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, childIndex);
        if ( *(float *)&v26 > v16 || (v27 = XAnimGetGoalTime(Tree, 0, XANIM_SUBTREE_DEFAULT, childIndex), blendOut < *(float *)&v27) )
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, childIndex, v16, blendOut, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
      }
      ++v11;
      p_nodeType += 6;
    }
    while ( v11 < 22 );
  }
}

/*
==============
CG_Gesture_StopMainAnimations
==============
*/
void CG_Gesture_StopMainAnimations(DObj *obj, XAnimTree *animTree, const Gesture *gesture, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, float blendTime)
{
  PlayerHandIndex v11; 
  bool v12; 
  float v13; 
  __int64 returnOverlay; 
  weapAnimFiles_t v15; 
  weapAnimFiles_t v16[3]; 
  weapAnimFiles_t outIndex; 
  weapAnimFiles_t v18; 
  weapAnimFiles_t v19; 
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
    v11 = hand;
    v12 = isDualWield;
    CG_Gesture_GetAnimationSlot(gesture, slot, hand, isDualWield, GESTURE_ASSET_LEFT_CENTER, 0, &animIndex);
    CG_Gesture_GetAnimationSlot(gesture, slot, v11, v12, GESTURE_ASSET_RIGHT_CENTER, 1, &outIndex);
    CG_Gesture_GetAnimationSlot(gesture, slot, v11, v12, GESTURE_ASSET_IN, 0, &v18);
    CG_Gesture_GetAnimationSlot(gesture, slot, v11, v12, GESTURE_ASSET_IN_ADDITIVE, 1, &v19);
    CG_Gesture_GetAnimationSlot(gesture, slot, v11, v12, GESTURE_ASSET_OUT, 0, &v15);
    CG_Gesture_GetAnimationSlot(gesture, slot, v11, v12, GESTURE_ASSET_OUT_ADDITIVE, 1, v16);
    v13 = blendTime;
    CG_Gesture_StopAnim(obj, animTree, animIndex, 0.0, blendTime);
    CG_Gesture_StopAnim(obj, animTree, outIndex, 0.0, v13);
    CG_Gesture_StopAnim(obj, animTree, v18, 0.0, v13);
    CG_Gesture_StopAnim(obj, animTree, v19, 0.0, v13);
    CG_Gesture_StopAnim(obj, animTree, v15, 0.0, v13);
    CG_Gesture_StopAnim(obj, animTree, v16[0], 0.0, v13);
  }
}

/*
==============
CG_Gesture_SwitchMainAnimations
==============
*/
void CG_Gesture_SwitchMainAnimations(LocalClientNum_t localClientNum, DObj *obj, XAnimTree *animTree, const Gesture *gesture, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const float blendTime, const bool crossfadeInOut, const float crossfadeOutStartTime)
{
  __int128 v11; 
  __int64 v16; 
  PlayerHandIndex v17; 
  GestureSlotInfo *Info; 
  GestureAnimationSettings *AnimationSettings; 
  GestureType type; 
  GestureMappingInfo *v21; 
  GestureMappingInfo *v22; 
  GestureMappingInfo *v23; 
  GestureDirectionalAssetIndex v24; 
  bool v25; 
  GestureDirectionalAssetIndex v26; 
  bool v27; 
  GestureDirectionalAssetIndex v28; 
  bool v29; 
  __int32 v30; 
  float v31; 
  bool v32; 
  char v33; 
  unsigned __int8 v34; 
  float v35; 
  int jumpTime; 
  int StateFromAnimTime; 
  GestureAnimationState v39; 
  PlayerHandIndex v40; 
  BOOL v45; 
  double AnimTimeArchived; 
  float v54; 
  bool v55; 
  GestureMappingInfo **outOut; 
  weapAnimFiles_t *outIndex; 
  weapAnimFiles_t v58; 
  weapAnimFiles_t v59; 
  GestureMappingInfo *outMain; 
  GestureMappingInfo *outIn; 
  GestureMappingInfo *mappingInfo; 
  GestureAnimationSettings *v63; 
  GestureDirectionalAssetIndex animAdditive; 
  GestureAnimationState psa; 
  bool slota; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2512, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2513, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2514, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2515, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v16 = slot;
  if ( slot >= 2 )
  {
    LODWORD(outOut) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2516, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", outOut, 2) )
      __debugbreak();
  }
  v17 = hand;
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(outIndex) = 2;
    LODWORD(outOut) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2517, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", outOut, outIndex) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, slot, v17);
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  psa = Info->animState;
  type = gesture->type;
  v63 = AnimationSettings;
  if ( (unsigned int)type <= GESTURE_TYPE_IK_TARGET )
  {
    hand = WEAPON_HAND_DEFAULT;
    v58 = WEAP_ANIM_ROOT;
    v59 = WEAP_ANIM_ROOT;
    animAdditive = GESTURE_ASSET_RIGHT_CENTER;
    CG_Gesture_GetMainAnimMappings(GESTURE_ASSET_LEFT_CENTER, GESTURE_ASSET_IN, GESTURE_ASSET_OUT, (const GestureMappingInfo **)&outMain, (const GestureMappingInfo **)&outIn, (const GestureMappingInfo **)&mappingInfo);
    v21 = outMain;
    if ( !outMain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2401, ASSERT_TYPE_ASSERT, "(mainMapping)", (const char *)&queryFormat, "mainMapping") )
      __debugbreak();
    v22 = outIn;
    if ( !outIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2402, ASSERT_TYPE_ASSERT, "(inMapping)", (const char *)&queryFormat, "inMapping") )
      __debugbreak();
    v23 = mappingInfo;
    if ( !mappingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2403, ASSERT_TYPE_ASSERT, "(outMapping)", (const char *)&queryFormat, "outMapping") )
      __debugbreak();
    if ( CG_Gesture_XAnimExists(gesture, v21, v17, isDualWield) )
    {
      slota = 0;
      v24 = GESTURE_ASSET_LEFT_CENTER;
    }
    else
    {
      slota = 1;
      v24 = GESTURE_ASSET_RIGHT_CENTER;
    }
    v25 = CG_Gesture_XAnimExists(gesture, v22, v17, isDualWield);
    v26 = GESTURE_ASSET_IN_ADDITIVE;
    if ( v25 )
      v26 = GESTURE_ASSET_IN;
    v27 = CG_Gesture_XAnimExists(gesture, v23, v17, isDualWield);
    v28 = GESTURE_ASSET_OUT_ADDITIVE;
    if ( v27 )
      v28 = GESTURE_ASSET_OUT;
    CG_Gesture_GetAnimationSlot(gesture, v16, v17, isDualWield, v24, slota, (weapAnimFiles_t *)&hand);
    v29 = slota;
    CG_Gesture_GetAnimationSlot(gesture, v16, v17, isDualWield, v26, slota, &v58);
    CG_Gesture_GetAnimationSlot(gesture, v16, v17, isDualWield, v28, slota, &v59);
    v30 = hand;
    v31 = blendTime;
    v32 = crossfadeInOut;
    v33 = 0;
    v34 = 0;
    hand = WEAPON_HAND_DEFAULT;
    v35 = 0.0;
    _XMM10 = 0i64;
    if ( Info->hasJumpTime )
    {
      *(double *)&v11 = BG_Gesture_GetJumpTimeNormalized(ps, gesture, v16);
      _XMM10 = v11;
      jumpTime = ps->gestureState.gestures[v16].jumpTime;
      if ( jumpTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2560, ASSERT_TYPE_ASSERT, "(animJumpTime > 0)", (const char *)&queryFormat, "animJumpTime > 0") )
        __debugbreak();
      StateFromAnimTime = CG_Gesture_GetStateFromAnimTime(localClientNum, ps, v16, gesture, jumpTime);
      v39 = psa;
      if ( psa != StateFromAnimTime || v32 )
      {
        v29 = slota;
        v34 = 0;
        v33 = 0;
      }
      else
      {
        v29 = slota;
        v33 = 0;
        v34 = 1;
      }
    }
    else
    {
      v39 = psa;
    }
    if ( v39 == GESTURE_ANIM_STATE_IN )
    {
      if ( v58 )
      {
        v30 = v58;
        animAdditive = GESTURE_ASSET_IN_ADDITIVE;
        v40 = 10;
      }
      else
      {
        v40 = hand;
      }
      if ( v63->hasTransitions && Info->isRestarting )
        v35 = v31;
    }
    else if ( v39 == GESTURE_ANIM_STATE_OUT && v59 )
    {
      hand = NUM_WEAPON_HANDS|WEAPON_HAND_LEFT|0x8;
      v30 = v59;
      animAdditive = GESTURE_ASSET_OUT_ADDITIVE;
      if ( !v34 )
      {
        _XMM0 = (unsigned int)ps->gestureState.slotBlend;
        __asm { vpcmpeqd xmm2, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_0_050000001);
        __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
        v31 = *(float *)&_XMM0;
        v35 = *(float *)&_XMM0;
      }
      if ( v32 )
      {
        v31 = FLOAT_0_1;
        v35 = FLOAT_0_1;
      }
      v45 = v32;
      v40 = hand;
      _XMM0 = v45;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(crossfadeOutStartTime);
      __asm { vblendvps xmm0, xmm1, xmm9, xmm2 }
      if ( Info->cancelTransitions )
        v33 = 1;
    }
    else
    {
      v40 = hand;
    }
    _XMM0 = v34;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm10, xmm7, xmm2
    }
    if ( Info->restoreAnims )
    {
      AnimTimeArchived = CG_Gesture_GetAnimTimeArchived(localClientNum, v16, v17, gesture);
      v39 = psa;
      v33 = 0;
      v54 = *(float *)&AnimTimeArchived;
      v31 = 0.0;
    }
    else
    {
      v54 = *(float *)&_XMM0;
    }
    if ( Info->mainAnim != v30 || Info->restoreAnims )
    {
      if ( v39 )
      {
        if ( !v33 )
        {
          v55 = isDualWield;
          CG_Gesture_StopMainAnimations(obj, animTree, gesture, v16, v17, isDualWield, v35);
          CG_Gesture_StartCenterAnimations(obj, animTree, gesture, v16, v17, v55, (GestureDirectionalAssetIndex)v40, animAdditive, v54, v31);
          Info->mainAnim = v30;
          Info->isMainAnimAdditive = v29;
          Info->restoreAnims = 0;
        }
      }
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
  __int128 v2; 
  const playerState_s *v3; 
  const dvar_t *v5; 
  CgWeaponMap *Instance; 
  GestureState *p_gestureState; 
  unsigned int i; 
  PlayerHandIndex v9; 
  GestureSlotInfo *Info; 
  GestureSlotInfo *v11; 
  const Gesture *CurrentAsset; 
  GestureAnimationSettings *AnimationSettings; 
  unsigned int IndexFromGesture; 
  __int128 v15; 
  __int128 v16; 
  int SectionStartTime; 
  int v18; 
  __int128 v19; 
  __int64 v20; 
  PlayerHandIndex WeaponHandForViewWeapon; 

  v3 = ps;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1310, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1311, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v3->deltaTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1312, ASSERT_TYPE_ASSERT, "(0 < ps->deltaTime)", "%s\n\tCG_Gesture_TransitionKillcamGestures() invoked while not in killcam", "0 < ps->deltaTime") )
    __debugbreak();
  v5 = DVARBOOL_viewmodelGesturesResetForKillcam;
  if ( !DVARBOOL_viewmodelGesturesResetForKillcam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewmodelGesturesResetForKillcam") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1320, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(Instance, v3);
    p_gestureState = &v3->gestureState;
    for ( i = 0; i < 2; ++i )
    {
      v9 = WEAPON_HAND_DEFAULT;
      do
      {
        Info = CG_Gesture_GetInfo(localClientNum, i, v9);
        v11 = Info;
        if ( p_gestureState->gestures[0].state == GESTURE_STATE_OFF )
        {
          Info->restoreAnims = 0;
          CG_Gesture_Shutdown(localClientNum, i, v9);
          goto LABEL_42;
        }
        CurrentAsset = BG_Gesture_GetCurrentAsset(v3, i);
        if ( !CurrentAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1341, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
          __debugbreak();
        AnimationSettings = BG_Gesture_GetAnimationSettings(CurrentAsset);
        if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1343, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
          __debugbreak();
        IndexFromGesture = BG_Gesture_GetIndexFromGesture(CurrentAsset);
        *(double *)&v2 = BG_Gesture_GetElapsedTime(ps, i, ps->serverTime);
        v16 = v2;
        *(float *)&v16 = *(float *)&v2 * 1000.0;
        v15 = v16;
        if ( CurrentAsset->looping )
        {
          if ( AnimationSettings->hasTransitions )
          {
            if ( p_gestureState->gestures[0].state == GESTURE_STATE_PLAYING )
            {
              if ( (float)AnimationSettings->inEndTime < *(float *)&v16 )
              {
                *(float *)&v16 = *(float *)&v16 - (float)AnimationSettings->inDuration;
                SectionStartTime = BG_Gesture_GetSectionStartTime(IndexFromGesture, GESTURE_SECTION_LOOP);
                *(float *)&v16 = fmodf_0(*(float *)&v16, (float)AnimationSettings->mainAnimLength) + (float)SectionStartTime;
                v15 = v16;
              }
            }
            else if ( p_gestureState->gestures[0].state == GESTURE_STATE_STOPPING )
            {
              if ( p_gestureState->gestures[0].stopTime <= 0 )
              {
                LODWORD(v20) = p_gestureState->gestures[0].stopTime;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1360, ASSERT_TYPE_ASSERT, "( 0 ) < ( gestureState->stopTime )", "%s < %s\n\t%i, %i", "0", "gestureState->stopTime", 0i64, v20) )
                  __debugbreak();
              }
              v18 = BG_Gesture_GetSectionStartTime(IndexFromGesture, GESTURE_SECTION_OUT);
              v3 = ps;
              v19 = 0i64;
              *(float *)&v19 = (float)(ps->serverTime - p_gestureState->gestures[0].stopTime) + (float)v18;
              v15 = v19;
              goto LABEL_31;
            }
          }
          else
          {
            fmodf_0(*(float *)&v16, (float)AnimationSettings->animationLength);
          }
        }
        v3 = ps;
LABEL_31:
        *((_QWORD *)&v2 + 1) = 0i64;
        if ( (float)AnimationSettings->animationLength > *(float *)&v15 )
        {
          CG_Gesture_Initialize(localClientNum, v3, i, v9);
          v11->animTime = *(float *)&v15 * 0.001;
          v11->restoreAnims = 1;
          *((_QWORD *)&v2 + 1) = *((_QWORD *)&v15 + 1);
          *(double *)&v2 = I_fclamp(*(float *)&v15 / (float)AnimationSettings->animationLength, 0.0, 1.0);
          v11->animTimeNormalized = *(float *)&v2;
          v11->animState = CG_Gesture_GetStateFromAnimTime(localClientNum, v3, i, CurrentAsset, (int)*(float *)&v15);
        }
        else
        {
          v11->restoreAnims = 0;
          CG_Gesture_Shutdown(localClientNum, i, v9);
        }
LABEL_42:
        ++v9;
      }
      while ( v9 <= (unsigned int)WeaponHandForViewWeapon );
      p_gestureState = (GestureState *)((char *)p_gestureState + 32);
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
  int v14; 
  const BgWeaponMap *v15; 
  const Weapon *ViewmodelWeapon; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v18; 
  CgHandler *pmoveHandler; 
  unsigned int v20; 
  const XAnimTree *Tree; 
  CgHandler *Handler; 
  double Float_Internal_DebugName; 
  double GoalWeight; 
  double Weight; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  __int64 bIsAlternate; 

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
    v14 = ps->weapState[1].weapAnim & 0xFFFFFF7F;
    v15 = Instance;
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
    if ( ps )
    {
      p_weapFlags = &ps->weapCommon.weapFlags;
      if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
        goto LABEL_14;
    }
    else
    {
      p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
    }
    if ( ps && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu)) )
    {
      v18 = 1;
      goto LABEL_15;
    }
LABEL_14:
    v18 = 0;
LABEL_15:
    pmoveHandler = CgHandler::getHandler(localClientNum);
    v20 = BG_MapWeaponAnimStateToAnimIndex(v15, ps, v14, 0, ViewmodelWeapon, v18, WEAPON_HAND_LEFT, pmoveHandler);
    Tree = DObjGetTree(obj);
    Handler = CgHandler::getHandler(localClientNum);
    if ( BG_ViewModelAnimExists(ps, WEAP_ANIM_GESTURE_LEFT_IDLE, WEAPON_HAND_LEFT, Handler) && useIdleLeft )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_gesture_idle_akimbo_threshold, "gesture_idle_akimbo_threshold");
      if ( mainTreeWeight != 1.0 || inState )
      {
        if ( mainTreeWeight > *(float *)&Float_Internal_DebugName && outState )
        {
          Weight = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, 0x14Du);
          if ( *(float *)&Weight <= 0.0 )
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0x14Du, 1.0, 0.0, 1.0, (scr_string_t)0, 1u, 0, LINEAR, NULL);
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xFu, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
        else if ( mainTreeWeight >= 0.001 )
        {
          v30 = CG_Gesture_Normalize(mainTreeWeight, 0.0, *(float *)&Float_Internal_DebugName);
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xFu, *(float *)&v30, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          if ( v20 - 236 <= 1 )
          {
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xECu, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xEDu, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0x175u, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          }
        }
      }
      else
      {
        _XMM0 = (unsigned int)ps->weapState[1].weaponState;
        __asm { vpcmpeqd xmm3, xmm0, xmm1 }
        _XMM7 = 0i64;
        __asm { vblendvps xmm0, xmm7, xmm2, xmm3 }
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0x14Du, *(float *)&_XMM0, 0.050000001, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xFu, 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        if ( v20 - 236 <= 1 )
        {
          GoalWeight = XAnimGetGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v20);
          if ( *(float *)&GoalWeight <= 0.0 )
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v20, 1.0, 0.050000001, 1.0, (scr_string_t)0, 1u, 0, LINEAR, NULL);
        }
      }
    }
    else
    {
      v31 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, 0xFu);
      if ( *(float *)&v31 > 0.0 )
      {
        v32 = XAnimGetGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, 0xFu);
        if ( *(float *)&v32 != 0.0 )
        {
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xFu, 0.001, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, 0xFu, 0.0, 0.25, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
        if ( v20 - 236 <= 1 )
        {
          v33 = XAnimGetGoalWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, v20);
          if ( *(float *)&v33 <= 0.0 )
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v20, mainTreeWeight, 0.25, 1.0, (scr_string_t)0, 1u, 0, LINEAR, NULL);
        }
      }
    }
  }
}

/*
==============
CG_Gesture_UpdateAnimationState
==============
*/
void CG_Gesture_UpdateAnimationState(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const Gesture *gesture, const XAnimTree *animTree)
{
  __int64 v10; 
  const Gesture *v11; 
  const XAnimTree *v12; 
  GestureSlotInfo *Info; 
  __int64 v14; 
  GestureSlotInfo *v15; 
  float animTime; 
  float animTimeNormalized; 
  GestureAnimationSettings *AnimationSettings; 
  float v19; 
  float v20; 
  double AnimLengthInSeconds; 
  float v22; 
  float v23; 
  GestureStateType state; 
  bool v25; 
  bool v26; 
  const GestureMappingInfo *v27; 
  bool v28; 
  PlayerHandIndex v29; 
  const Gesture *v30; 
  GestureAnimationState animState; 
  bool v32; 
  int v33; 
  GestureAnimationState StateFromAnimTime; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  GestureAnimationState v37; 
  int v38; 
  __int64 handa; 
  float *outTimeInSeconds; 
  float outNormalizedTime; 
  float v42; 

  v10 = slot;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1909, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = gesture;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1910, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  v12 = animTree;
  if ( !animTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1911, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
    __debugbreak();
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(handa) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1912, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", handa, 2) )
      __debugbreak();
  }
  Info = CG_Gesture_GetInfo(localClientNum, v10, hand);
  v14 = v10;
  gesture = (const Gesture *)(32 * v10);
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(outTimeInSeconds) = 2;
    LODWORD(handa) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1062, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", handa, outTimeInSeconds) )
      __debugbreak();
  }
  v15 = CG_Gesture_GetInfo(localClientNum, v10, hand);
  if ( v15->restoreAnims )
  {
    animTime = v15->animTime;
    animTimeNormalized = v15->animTimeNormalized;
  }
  else
  {
    CG_Gesture_GetAnimTimeFromTree(localClientNum, ps, v10, hand, v11, v12, &v42, &outNormalizedTime);
    animTimeNormalized = outNormalizedTime;
    animTime = v42;
  }
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1080, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  AnimationSettings = BG_Gesture_GetAnimationSettings(v11);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1085, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  v19 = (float)AnimationSettings->inEndTime * 0.001;
  v20 = (float)AnimationSettings->outStartTime * 0.001;
  Info->animTime = animTime;
  Info->animTimeNormalized = animTimeNormalized;
  AnimLengthInSeconds = BG_Gesture_GetAnimLengthInSeconds(v11);
  v22 = 1.0 - animTimeNormalized;
  v23 = animTime + 0.00000011920929;
  Info->hasJumpTime = ps->gestureState.gestures[v14].jumpTime > 0;
  Info->isJumpTimeBlendActive = BG_Gesture_IsJumpTimeBlendActive(ps, v10, ps->serverTime);
  Info->cancelTransitions |= BG_Gesture_IsCancelTransitions(ps, v10);
  state = ps->gestureState.gestures[v14].state;
  if ( state == GESTURE_STATE_PLAYING )
  {
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 688, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
      __debugbreak();
    if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
    {
      LODWORD(outTimeInSeconds) = 2;
      LODWORD(handa) = hand;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 689, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", handa, outTimeInSeconds) )
        __debugbreak();
    }
    v25 = isDualWield;
    v26 = 1;
    if ( isDualWield )
    {
      v27 = &s_blendTreeMappings[1];
      v28 = isDualWield;
      v29 = hand;
      v30 = v11;
      if ( v11->weaponSettings.splitAnimsAkimbo )
      {
        if ( hand != WEAPON_HAND_LEFT )
          v27 = &s_blendTreeMappings[4];
      }
      else
      {
        if ( CG_Gesture_XAnimExists(v11, &s_blendTreeMappings[1], hand, isDualWield) )
        {
LABEL_41:
          animState = Info->animState;
          if ( animState == GESTURE_ANIM_STATE_OFF )
          {
LABEL_44:
            v32 = !Info->hasJumpTime;
            Info->animState = GESTURE_ANIM_STATE_IN;
            if ( v32 )
              return;
            v33 = *(int *)((char *)&ps->gestureState.gestures[0].jumpTime + (_QWORD)gesture);
            if ( v33 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1946, ASSERT_TYPE_ASSERT, "(jumpTime > 0)", (const char *)&queryFormat, "jumpTime > 0") )
              __debugbreak();
            StateFromAnimTime = (unsigned int)CG_Gesture_GetStateFromAnimTime(localClientNum, ps, v10, v11, v33);
            goto LABEL_70;
          }
          if ( animTime >= 0.0 )
          {
            if ( animState != GESTURE_ANIM_STATE_OUT )
            {
              Handler = CgHandler::getHandler(localClientNum);
              Instance = CgWeaponMap::GetInstance(localClientNum);
              if ( BG_GesturePriority_ShouldCancelRightHand(Instance, ps, Handler, v10, v11, hand, v25) )
                goto LABEL_69;
            }
          }
          else if ( animState != GESTURE_ANIM_STATE_OUT )
          {
            goto LABEL_44;
          }
          v37 = Info->animState;
          if ( v37 == GESTURE_ANIM_STATE_IN )
          {
            if ( v23 >= v19 )
              Info->animState = GESTURE_ANIM_STATE_PLAYING;
            return;
          }
          if ( v37 == GESTURE_ANIM_STATE_PLAYING )
          {
            if ( !v11->looping && v23 >= v20 )
              Info->animState = GESTURE_ANIM_STATE_OUT;
            return;
          }
          if ( v37 != GESTURE_ANIM_STATE_OUT || v23 < *(float *)&AnimLengthInSeconds )
            return;
LABEL_69:
          StateFromAnimTime = GESTURE_ANIM_STATE_OFF;
LABEL_70:
          Info->animState = StateFromAnimTime;
          return;
        }
        v28 = v25;
        v27 = &s_blendTreeMappings[4];
        v29 = hand;
        v30 = v11;
      }
      v26 = CG_Gesture_XAnimExists(v30, v27, v29, v28);
    }
    if ( !v26 )
      goto LABEL_69;
    goto LABEL_41;
  }
  if ( state != GESTURE_STATE_STOPPING )
  {
    if ( state || animTime >= 0.0 && (float)(v22 * *(float *)&AnimLengthInSeconds) >= 0.00000011920929 && Info->animState == GESTURE_ANIM_STATE_OUT )
      return;
    goto LABEL_69;
  }
  v38 = 3;
  if ( animTime < 0.0 )
    v38 = 0;
  Info->animState = v38;
}

/*
==============
CG_Gesture_UpdateAnims
==============
*/
void CG_Gesture_UpdateAnims(LocalClientNum_t localClientNum, const Gesture *gesture, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, DObj *obj, float animTime)
{
  bool useTargetOffset; 
  float v12; 
  CgHandler *Handler; 
  int TargetEntity; 
  centity_t *Entity; 
  double v16; 
  GestureType type; 
  float v18; 
  bool v19; 
  double v20; 
  cg_t *LocalClientGlobals; 
  int v22; 
  CgEntitySystem *EntitySystem; 
  DObj *v24; 
  const DObj *v25; 
  centity_t *v26; 
  scr_string_t targetEntityBoneName; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v33; 
  __int64 v42; 
  __int64 v43; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t angles; 
  vec3_t outOrigin; 
  WorldUpReferenceFrame v48; 

  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1697, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1698, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1699, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( slot >= 2 )
  {
    LODWORD(v42) = slot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1700, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v42, 2) )
      __debugbreak();
  }
  if ( gesture == (const Gesture *)-52i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 378, ASSERT_TYPE_ASSERT, "(directionalSettings)", (const char *)&queryFormat, "directionalSettings") )
    __debugbreak();
  if ( gesture->type == GESTURE_TYPE_DIRECTIONAL && ((useTargetOffset = gesture->directionalSettings.useTargetOffset) || CG_Gesture_ValidateTargetEntity(localClientNum, ps, slot)) )
  {
    v12 = ps->viewangles.v[1];
    angles.v[0] = ps->viewangles.v[0];
    angles.v[2] = ps->viewangles.v[2];
    angles.v[1] = v12;
    Handler = CgHandler::getHandler(localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v48, ps, Handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v48, &angles);
    CG_GetPlayerViewOrigin(localClientNum, ps, &outOrigin);
    if ( !useTargetOffset )
    {
      TargetEntity = BG_Gesture_GetTargetEntity(ps, slot);
      Entity = CG_GetEntity(localClientNum, TargetEntity);
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1720, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      XAnimSetStructGameParameterByIndex(obj, 2u, XAnimGameStructTypeDeclaration<centity_t>::ms_typeInfo->typeID, Entity);
    }
    XAnimSetVec3GameParameterByIndex(obj, 1u, &angles);
    XAnimSetVec3GameParameterByIndex(obj, 0, &outOrigin);
    v16 = I_fclamp(animTime, 0.0, 1.0);
    if ( slot >= 2 )
    {
      LODWORD(v43) = 2;
      LODWORD(v42) = slot;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( WEAP_ANIM_PARAM_ANIM_TIME_COUNT )", "slot doesn't index WEAP_ANIM_PARAM_ANIM_TIME_COUNT\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    XAnimSetFloatGameParameterByIndex(obj, slot + 3, *(float *)&v16);
  }
  else
  {
    type = gesture->type;
    if ( type == GESTURE_TYPE_LOOK_AROUND )
    {
      v18 = ps->viewangles.v[1];
      angles.v[0] = ps->viewangles.v[0];
      angles.v[2] = ps->viewangles.v[2];
      angles.v[1] = v18;
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1588, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( slot >= 2 )
      {
        LODWORD(v43) = 2;
        LODWORD(v42) = slot;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1589, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      v19 = 0;
      if ( CG_Gesture_GetInfo(localClientNum, slot, hand)->animState == GESTURE_ANIM_STATE_PLAYING )
        v19 = BG_Demeanor_ShouldPlayWeaponCheck(ps);
      XAnimSetVec3GameParameterByIndex(obj, 1u, &angles);
      v20 = I_fclamp(animTime, 0.0, 1.0);
      if ( slot >= 2 )
      {
        LODWORD(v43) = 2;
        LODWORD(v42) = slot;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1170, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( WEAP_ANIM_PARAM_ANIM_TIME_COUNT )", "slot doesn't index WEAP_ANIM_PARAM_ANIM_TIME_COUNT\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      XAnimSetFloatGameParameterByIndex(obj, slot + 3, *(float *)&v20);
      XAnimSetBoolGameParameterByIndex(obj, 5u, v19);
    }
    else if ( type == GESTURE_TYPE_IK_TARGET && CG_Gesture_ValidateTargetEntity(localClientNum, ps, slot) )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v22 = BG_Gesture_GetTargetEntity(ps, slot);
      EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
      v24 = EntitySystem->IsMP(EntitySystem) ? CgEntitySystemMP::GetDObj_General((CgEntitySystemMP *)EntitySystem, v22, NULL) : Com_GetClientDObj(v22, EntitySystem->m_localClientNum);
      v25 = v24;
      inOutIndex[0] = -2;
      v26 = CG_GetEntity(localClientNum, v22);
      if ( !LocalClientGlobals->firstSnapshot )
      {
        targetEntityBoneName = gesture->ikTargetSettings.targetEntityBoneName;
        outOrigin.v[0] = 0.0;
        outOrigin.v[1] = 0.0;
        outOrigin.v[2] = 0.0;
        angles.v[0] = 0.0;
        angles.v[1] = 0.0;
        angles.v[2] = 0.0;
        if ( targetEntityBoneName && v25 && DObjGetBoneIndexInternal_51(v25, targetEntityBoneName, inOutIndex, &modelIndex) )
        {
          CG_DObjGetWorldBoneMatrix(&v26->pose, v25, inOutIndex[0], (tmat33_t<vec3_t> *)&v48, &outOrigin);
          AxisToAngles((const tmat33_t<vec3_t> *)&v48, &angles);
        }
        else if ( v26 )
        {
          if ( !v26->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v26->pose.origin.Get_origin, &v26->pose);
          FunctionPointer_origin(&v26->pose.origin.origin.origin, &outOrigin);
          if ( v26->pose.isPosePrecise )
          {
            _XMM0 = LODWORD(outOrigin.v[0]);
            _XMM2 = LODWORD(outOrigin.v[1]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v33 = *(double *)&_XMM0 * 0.000244140625;
            _XMM0 = v33;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vcvtdq2pd xmm2, xmm2
            }
            *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM2 + 1);
            *(double *)&v33 = *(double *)&_XMM2 * 0.000244140625;
            _XMM0 = v33;
            _XMM2 = LODWORD(outOrigin.v[2]);
            outOrigin.v[0] = *(float *)&_XMM1;
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0
              vcvtdq2pd xmm2, xmm2
            }
            *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM2 + 1);
            *(double *)&v33 = *(double *)&_XMM2 * 0.000244140625;
            _XMM0 = v33;
            outOrigin.v[1] = *(float *)&_XMM1;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            outOrigin.v[2] = *(float *)&_XMM1;
          }
          angles = v26->pose.angles;
        }
        XAnimSetVec3GameParameterByIndex(obj, 0xAu, &outOrigin);
        XAnimSetVec3GameParameterByIndex(obj, 0xBu, &angles);
      }
    }
  }
}

/*
==============
CG_Gesture_UpdateBlendingParameters
==============
*/
void CG_Gesture_UpdateBlendingParameters(LocalClientNum_t localClientNum, const playerState_s *ps, const unsigned int slot, const PlayerHandIndex hand, const bool isDualWield, const Gesture *gesture, const XAnimTree *animTree, float *outBlendTime, bool *outShouldCrossfadeInOut, bool *outShouldBlendOut, float *outCrossfadeOutStartTime, bool *outShouldBlendOutToZero)
{
  __int64 v15; 
  GestureAnimationSettings *AnimationSettings; 
  GestureSlotInfo *Info; 
  __int64 v18; 
  GestureAnimationSettings *v19; 
  int serverTime; 
  __int128 v21; 
  __int128 v22; 
  float v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  GestureAnimationSettings *v29; 
  __int128 v30; 
  double AnimLengthInSeconds; 
  unsigned int endTime; 
  float v34; 
  __int128 v35; 
  GestureAnimationState animState; 
  __int128 v41; 
  GestureAnimationState v43; 
  float v44; 
  const Gesture *v47; 
  bool v48; 
  bool v49; 
  float v50; 
  __int128 v51; 
  __int128 v53; 
  float v54; 
  __int128 v56; 
  float jumpTimeEndTime; 
  float v59; 
  double v60; 
  __int128 v61; 
  float outStartTime; 
  float v63; 
  float v64; 
  __int128 v65; 
  double v66; 
  bool v67; 
  bool v68; 
  bool v69; 
  __int128 v70; 
  int v73; 
  float outBlendOutStartTime; 
  __int128 v75; 
  bool v77; 
  float v78; 
  double v79; 
  char v84; 
  float v85; 
  __int128 v87; 
  double v89; 
  __int128 v90; 
  unsigned int SlotUsingBlendToLoop; 
  bool v98; 
  float v99; 
  double v100; 
  __int128 v101; 
  float outBlendOutEndTime; 
  float v106; 
  double v107; 
  __int128 v108; 
  double v109; 
  __int64 v110; 
  __int64 v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  bool blendOutAdditiveADS; 
  bool v119; 
  float animTreea; 

  v15 = slot;
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
  if ( (unsigned int)v15 >= 2 )
  {
    LODWORD(v110) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2073, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 2 )", "slot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v110, 2) )
      __debugbreak();
  }
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v111) = 2;
    LODWORD(v110) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2074, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v110, v111) )
      __debugbreak();
  }
  AnimationSettings = BG_Gesture_GetAnimationSettings(gesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2077, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  Info = CG_Gesture_GetInfo(localClientNum, v15, hand);
  v18 = v15;
  if ( !gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1080, ASSERT_TYPE_ASSERT, "(gesture)", (const char *)&queryFormat, "gesture") )
    __debugbreak();
  v19 = BG_Gesture_GetAnimationSettings(gesture);
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1085, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
    __debugbreak();
  serverTime = ps->serverTime;
  v21 = 0i64;
  *(float *)&v21 = (float)v19->inEndTime * 0.001;
  v22 = v21;
  v23 = (float)v19->outStartTime * 0.001;
  v24 = 0i64;
  *(float *)&v24 = (float)serverTime * 0.001;
  v25 = v24;
  v26 = 0i64;
  *(float *)&v26 = (float)ps->gestureState.gestures[v18].jumpTime * 0.001;
  v27 = v26;
  v115 = *(float *)&v22;
  v114 = v23;
  v113 = v23;
  _XMM9 = v22;
  blendOutAdditiveADS = gesture->weaponSettings.blendOutAdditiveADS;
  if ( AnimationSettings->hasTransitions )
  {
    v29 = BG_Gesture_GetAnimationSettings(gesture);
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 1099, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
    v30 = 0i64;
    *(float *)&v30 = (float)v29->blendInEndTime * 0.001;
    _XMM9 = v30;
    v113 = (float)v29->blendOutStartTime * 0.001;
  }
  _XMM10 = LODWORD(Info->animTime);
  AnimLengthInSeconds = BG_Gesture_GetAnimLengthInSeconds(gesture);
  endTime = ps->gestureState.gestures[v18].endTime;
  v112 = *(float *)&AnimLengthInSeconds;
  v116 = *(float *)&AnimLengthInSeconds - v23;
  v34 = 0.0;
  if ( endTime )
  {
    v35 = 0i64;
    *(float *)&v35 = (float)(int)(endTime - ps->gestureState.gestures[v18].stopTime) * 0.001;
    _XMM3 = v35;
  }
  else
  {
    _XMM3 = 0i64;
  }
  _XMM0 = endTime;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  if ( ps->gestureState.slotBlend )
  {
    animState = Info->animState;
    v41 = 0i64;
    *(float *)&v41 = (float)ps->gestureState.slotBlendDuration * 0.001;
    _XMM15 = v41;
    if ( BG_Gesture_IsJumpTimeBlendActive(ps, v15, serverTime) )
      goto LABEL_52;
    if ( animState == GESTURE_ANIM_STATE_OUT )
    {
      __asm { vminss  xmm15, xmm15, dword ptr [rsp+138h+animTree] }
      goto LABEL_52;
    }
    if ( animState == GESTURE_ANIM_STATE_IN )
      __asm { vminss  xmm9, xmm15, xmm9 }
  }
  _XMM15 = (unsigned int)_XMM0;
LABEL_52:
  v43 = Info->animState;
  v119 = 0;
  v44 = *(float *)&_XMM10 + 0.00000011920929;
  animTreea = *(float *)&_XMM10 + 0.00000011920929;
  LODWORD(_XMM7) = 0;
  _XMM6 = 0i64;
  switch ( v43 )
  {
    case GESTURE_ANIM_STATE_OFF:
      v47 = gesture;
      v48 = 0;
      v49 = 0;
      _XMM6 = LODWORD(FLOAT_1_0);
      goto LABEL_137;
    case GESTURE_ANIM_STATE_IN:
      v50 = 0.0;
      if ( *(float *)&_XMM10 <= 0.0 )
      {
        if ( Info->hasJumpTime )
        {
          v51 = v27;
          *(float *)&v51 = *(float *)&v27 + *(float *)&_XMM9;
          v50 = *(float *)&v27;
          I_fclamp(*(float *)&v27 + *(float *)&_XMM9, 0.0, (float)AnimationSettings->inDuration * 0.001);
          _XMM9 = v51;
        }
      }
      else
      {
        v50 = *(float *)&_XMM10;
      }
      if ( AnimationSettings->hasTransitions && Info->isRestarting )
      {
        *(float *)&_XMM7 = FLOAT_0_1;
      }
      else
      {
        v53 = _XMM9;
        *(float *)&v53 = *(float *)&_XMM9 - v50;
        _XMM0 = v53;
        __asm { vmaxss  xmm7, xmm0, xmm8 }
      }
      _XMM6 = LODWORD(FLOAT_0_001);
      if ( *(float *)&_XMM9 > 0.0 )
      {
        if ( Info->hasJumpTime )
        {
          if ( (float)(*(float *)&_XMM9 - *(float *)&v27) <= 0.0 )
            v54 = FLOAT_1_0;
          else
            v54 = (float)(v50 - *(float *)&v27) / (float)(*(float *)&_XMM9 - *(float *)&v27);
        }
        else
        {
          v54 = v50 / *(float *)&_XMM9;
        }
        v47 = gesture;
        v48 = 0;
        v56 = LODWORD(FLOAT_1_0);
        *(float *)&v56 = 1.0 - v54;
        _XMM0 = v56;
        __asm { vmaxss  xmm1, xmm0, xmm12 }
        v49 = 0;
        __asm { vminss  xmm6, xmm1, xmm13 }
        goto LABEL_137;
      }
      goto LABEL_78;
    case GESTURE_ANIM_STATE_PLAYING:
      _XMM6 = LODWORD(FLOAT_0_001);
      if ( Info->hasJumpTime && *(float *)&v27 > *(float *)&v22 && Info->isJumpTimeBlendActive )
      {
        if ( Info->jumpTimeStartTime > 0.0 )
        {
          jumpTimeEndTime = Info->jumpTimeEndTime;
        }
        else
        {
          jumpTimeEndTime = *(float *)&_XMM15 + *(float *)&v25;
          Info->jumpTimeEndTime = *(float *)&_XMM15 + *(float *)&v25;
          Info->jumpTimeStartTime = *(float *)&v25;
        }
        v59 = jumpTimeEndTime - *(float *)&v25;
        I_fclamp(jumpTimeEndTime - *(float *)&v25, 0.0, 1.0);
        *(float *)&_XMM7 = v59;
        v60 = CG_Gesture_Normalize(*(float *)&v25, Info->jumpTimeStartTime, Info->jumpTimeEndTime);
        v61 = LODWORD(FLOAT_1_0);
        *(float *)&v61 = 1.0 - *(float *)&v60;
        I_fclamp(1.0 - *(float *)&v60, 0.001, 1.0);
        _XMM6 = v61;
      }
      goto LABEL_78;
  }
  if ( v43 != GESTURE_ANIM_STATE_OUT )
  {
LABEL_78:
    v47 = gesture;
    v48 = 0;
    v49 = 0;
    goto LABEL_137;
  }
  if ( Info->cancelTransitions )
  {
    outStartTime = Info->outStartTime;
    _XMM6 = LODWORD(FLOAT_1_0);
    v119 = 0;
    if ( outStartTime == -1.0 )
    {
      Info->outStartTime = *(float *)&v25;
      v63 = *(float *)&_XMM15 + *(float *)&v25;
    }
    else
    {
      if ( !endTime || (int)(float)(Info->outEndTime * 1000.0) <= ps->gestureState.gestures[v18].endTime )
        goto LABEL_87;
      v63 = outStartTime + *(float *)&_XMM15;
    }
    Info->outEndTime = v63;
LABEL_87:
    if ( *(float *)&_XMM10 > 0.0 )
    {
      v64 = Info->outEndTime - *(float *)&v25;
      I_fclamp(v64, 0.0, 1.0);
      *(float *)&_XMM7 = v64;
      *((_QWORD *)&v65 + 1) = *((_QWORD *)&v25 + 1);
      v66 = CG_Gesture_Normalize(*(float *)&v25, Info->outStartTime, Info->outEndTime);
      *(double *)&v65 = I_fclamp(*(float *)&v66, 0.001, 1.0);
      _XMM6 = v65;
    }
    v48 = 1;
    v47 = gesture;
    v49 = 1;
    goto LABEL_137;
  }
  v67 = 0;
  v68 = AnimationSettings->hasTransitions && (float)(*(float *)&_XMM10 + 0.00000011920929) < *(float *)&_XMM9 && !Info->isJumpTimeBlendActive;
  v69 = ps->gestureState.slotBlend && !Info->isJumpTimeBlendActive;
  v70 = 0i64;
  *(float *)&v70 = (float)(AnimationSettings->blendOutEndTime - AnimationSettings->blendOutStartTime) * 0.001;
  _XMM1 = v70;
  __asm { vmaxss  xmm6, xmm1, xmm8 }
  if ( endTime )
  {
    v73 = ps->gestureState.gestures[v18].endTime;
    if ( v73 != Info->lastEndTime )
    {
      outBlendOutStartTime = Info->outBlendOutStartTime;
      v67 = outBlendOutStartTime == -1.0 && (float)(*(float *)&_XMM15 + 0.00000011920929) < v116 || outBlendOutStartTime > *(float *)&_XMM10 || (float)(Info->outEndTime - outBlendOutStartTime) > (float)(*(float *)&_XMM15 + 0.00000011920929);
      Info->lastEndTime = v73;
    }
  }
  if ( -1.0 != Info->outStartTime && !v67 )
  {
    v78 = v112;
    v85 = v114;
    v47 = gesture;
    v84 = 0;
    goto LABEL_132;
  }
  if ( AnimationSettings->hasTransitions && !v68 )
  {
    v75 = 0i64;
    *(float *)&v75 = (float)AnimationSettings->outStartTime * 0.001;
    _XMM1 = v75;
    __asm { vmaxss  xmm10, xmm1, xmm10 }
  }
  v77 = !Info->isJumpTimeBlendActive;
  v78 = v112;
  Info->outStartTime = *(float *)&_XMM10;
  if ( v77 )
  {
    __asm { vminss  xmm0, xmm15, [rsp+138h+var_E4] }
    v79 = I_fclamp(*(float *)&_XMM0 + *(float *)&_XMM10, *(float *)&_XMM10, v112);
  }
  else
  {
    *(float *)&v79 = v112;
  }
  Info->outEndTime = *(float *)&v79;
  if ( !AnimationSettings->hasTransitions )
  {
    Info->outBlendOutStartTime = *(float *)&_XMM10;
    goto LABEL_123;
  }
  if ( v69 || v67 )
  {
    Info->outBlendOutStartTime = *(float *)&_XMM10;
    v84 = 1;
    goto LABEL_124;
  }
  Info->outBlendOutStartTime = v113;
  if ( AnimationSettings->blendOutStartTime != AnimationSettings->outStartTime )
  {
LABEL_123:
    v84 = 0;
    goto LABEL_124;
  }
  _XMM0 = Info->isJumpTimeBlendActive;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm15, xmm11, xmm2
  }
  Info->outBlendOutStartTime = *(float *)&_XMM0 + v113;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0 + v113, *(float *)&_XMM10, v112);
  Info->outBlendOutStartTime = *(float *)&_XMM0;
  v84 = 0;
LABEL_124:
  v85 = v114;
  v47 = gesture;
  if ( (float)(*(float *)&_XMM10 + 0.00000011920929) < v114 || v67 || v69 || isDualWield && gesture->weaponSettings.useLeftIdleAkimbo )
  {
    v44 = animTreea;
    Info->outBlendOutEndTime = Info->outEndTime;
  }
  else
  {
    v87 = _XMM6;
    *(float *)&v87 = *(float *)&_XMM6 + Info->outBlendOutStartTime;
    _XMM0 = v87;
    v44 = animTreea;
    __asm { vminss  xmm1, xmm0, xmm9 }
    Info->outBlendOutEndTime = *(float *)&_XMM1;
  }
LABEL_132:
  _XMM6 = LODWORD(FLOAT_1_0);
  if ( v68 )
  {
    v89 = BG_Gesture_CalculateCrossfadeOutStart(v44, v115);
    *(float *)&_XMM7 = (float)(1.0 - *(float *)&v89) * *(float *)&_XMM15;
    v34 = *(float *)&v89;
    v90 = LODWORD(FLOAT_1_0);
    *(float *)&v90 = 1.0 - *(float *)&_XMM10;
    I_fclamp(1.0 - *(float *)&_XMM10, 0.001, 1.0);
    v119 = 1;
    _XMM6 = v90;
    if ( v67 )
    {
      I_fclamp((float)((float)((float)(v34 * (float)(v78 - v85)) + 0.1) + v85) + *(float *)&_XMM15, v85, v78);
      v78 = (float)((float)((float)(v34 * (float)(v78 - v85)) + 0.1) + v85) + *(float *)&_XMM15;
    }
    Info->outEndTime = v78;
    Info->outBlendOutEndTime = v78;
    v48 = 0;
LABEL_136:
    v49 = 0;
    goto LABEL_137;
  }
  SlotUsingBlendToLoop = BG_Gesture_FindSlotUsingBlendToLoop(ps);
  v98 = v69 && BG_Demeanor_IsPlaying(ps) && SlotUsingBlendToLoop != 2 && SlotUsingBlendToLoop == slot;
  v99 = Info->outBlendOutStartTime;
  if ( *(float *)&_XMM10 < v99 && !v98 )
  {
    v48 = 0;
    _XMM6 = LODWORD(FLOAT_0_001);
    if ( Info->isJumpTimeBlendActive )
    {
      LODWORD(_XMM7) = _XMM15;
      v100 = CG_Gesture_Normalize(*(float *)&_XMM10, Info->outStartTime, v99);
      v101 = LODWORD(FLOAT_1_0);
      *(float *)&v101 = 1.0 - *(float *)&v100;
      I_fclamp(1.0 - *(float *)&v100, 0.001, 1.0);
      _XMM6 = v101;
    }
    goto LABEL_136;
  }
  outBlendOutEndTime = Info->outBlendOutEndTime;
  _XMM1 = LODWORD(Info->outEndTime);
  __asm
  {
    vcmpltss xmm0, xmm10, xmm2
    vblendvps xmm0, xmm1, xmm2, xmm0
  }
  v49 = outBlendOutEndTime == *(float *)&_XMM1 || *(float *)&_XMM10 >= outBlendOutEndTime || v98;
  v106 = *(float *)&_XMM0 - *(float *)&_XMM10;
  v48 = v84 == 0;
  if ( v98 )
  {
    v48 = 1;
    v106 = *(float *)&_XMM15;
  }
  v107 = I_fclamp(v106, 0.0, v78);
  LODWORD(_XMM7) = LODWORD(v107);
  if ( *(float *)&v107 > 0.0 )
  {
    *((_QWORD *)&v108 + 1) = *((_QWORD *)&_XMM10 + 1);
    v109 = CG_Gesture_Normalize(*(float *)&_XMM10, Info->outBlendOutStartTime, Info->outBlendOutEndTime);
    *(double *)&v108 = I_fclamp(*(float *)&v109, 0.001, 1.0);
    _XMM6 = v108;
  }
LABEL_137:
  *outBlendTime = *(float *)&_XMM7;
  *outShouldCrossfadeInOut = v119;
  *outShouldBlendOut = v48;
  *outCrossfadeOutStartTime = v34;
  *outShouldBlendOutToZero = v49;
  _XMM0 = blendOutAdditiveADS;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm13, xmm2
  }
  Info->additiveAdsWeight = *(float *)&_XMM0;
  Info->mainTreeWeight = *(float *)&_XMM6;
  _XMM0 = v47->weaponSettings.blendOutFingerPose;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm13, xmm2
  }
  Info->fingerPoseWeight = *(float *)&_XMM0;
}

/*
==============
CG_Gesture_UpdateMainTree
==============
*/
void CG_Gesture_UpdateMainTree(LocalClientNum_t localClientNum, DObj *obj, const playerState_s *ps, const PlayerHandIndex hand, bool inState, bool outState, float *outMainTreeWeight)
{
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  bool v15; 
  cg_t *LocalClientGlobals; 
  unsigned int i; 
  GestureSlotInfo *Info; 
  GestureAnimationState animState; 
  char v23; 
  const Gesture *AssetFromIndex; 
  bool v25; 
  bool v26; 
  char v27; 
  bool blendOut; 
  __int64 blend; 
  bool v42; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2641, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !outMainTreeWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2642, ASSERT_TYPE_ASSERT, "(outMainTreeWeight)", (const char *)&queryFormat, "outMainTreeWeight") )
    __debugbreak();
  v42 = 0;
  v10 = 1;
  v11 = 1;
  _XMM12 = LODWORD(FLOAT_N1_0);
  _XMM11 = LODWORD(FLOAT_N1_0);
  _XMM10 = LODWORD(FLOAT_N1_0);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2652, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(blend) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_gesture.cpp", 2653, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", blend, 2) )
      __debugbreak();
  }
  v15 = inState && outState;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  for ( i = 0; i < 2; ++i )
  {
    Info = CG_Gesture_GetInfo(localClientNum, i, hand);
    _XMM9 = LODWORD(Info->mainTreeWeight);
    _XMM7 = LODWORD(Info->additiveAdsWeight);
    _XMM8 = LODWORD(Info->fingerPoseWeight);
    animState = Info->animState;
    if ( animState == GESTURE_ANIM_STATE_OUT )
    {
      if ( !Info->isJumpTimeBlendActive )
        goto LABEL_25;
    }
    else if ( (unsigned int)(animState - 1) > 1 )
    {
LABEL_25:
      v23 = 0;
      goto LABEL_21;
    }
    v23 = 1;
LABEL_21:
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(Info->lastGesture);
    v25 = AssetFromIndex && AssetFromIndex->weaponSettings.blendOutAdditiveADS;
    v10 &= v25;
    v26 = AssetFromIndex && AssetFromIndex->weaponSettings.blendOutFingerPose;
    v11 &= v26;
    if ( *(float *)&_XMM9 == -1.0 )
    {
      blendOut = v42;
    }
    else
    {
      v27 = v23;
      __asm { vcmpeqss xmm0, xmm12, xmm6 }
      if ( !v23 )
        v27 = v42;
      __asm { vblendvps xmm1, xmm12, xmm9, xmm0 }
      blendOut = v27;
      v42 = v27;
      __asm { vminss  xmm12, xmm9, xmm1 }
    }
    if ( *(float *)&_XMM7 != -1.0 )
    {
      __asm
      {
        vcmpeqss xmm0, xmm11, xmm6
        vblendvps xmm1, xmm11, xmm7, xmm0
        vminss  xmm11, xmm7, xmm1
      }
    }
    if ( *(float *)&_XMM8 != -1.0 )
    {
      __asm
      {
        vcmpeqss xmm0, xmm10, xmm6
        vblendvps xmm1, xmm10, xmm8, xmm0
        vminss  xmm10, xmm8, xmm1
      }
    }
  }
  if ( v15 )
  {
    LocalClientGlobals->gestureInfo.isBlendingSlots = 1;
    goto LABEL_46;
  }
  if ( LocalClientGlobals->gestureInfo.isBlendingSlots )
  {
    if ( inState )
    {
LABEL_46:
      _XMM12 = LODWORD(FLOAT_0_001);
      _XMM0 = v10;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM0 = v11;
      __asm
      {
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
  CG_Gesture_SetWeightMainTree(obj, ps, *(float *)&_XMM12, *(float *)&_XMM11, *(float *)&_XMM10, 0.0, blendOut);
  *outMainTreeWeight = *(float *)&_XMM12;
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

