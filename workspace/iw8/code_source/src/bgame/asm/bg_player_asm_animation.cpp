/*
==============
BG_PlayerASM_GetNumEntriesForStateIndex
==============
*/

int __fastcall BG_PlayerASM_GetNumEntriesForStateIndex(const unsigned int animsetIndex, int stateIndex)
{
  return ?BG_PlayerASM_GetNumEntriesForStateIndex@@YAHIH@Z(animsetIndex, stateIndex);
}

/*
==============
BG_PlayerASM_GetXAnimIndex
==============
*/

unsigned int __fastcall BG_PlayerASM_GetXAnimIndex(const entityState_t *es, const PlayerASM_AnimSlot slot)
{
  return ?BG_PlayerASM_GetXAnimIndex@@YAIPEBUentityState_t@@W4PlayerASM_AnimSlot@@@Z(es, slot);
}

/*
==============
BG_PlayerASM_GetAlwaysOnState
==============
*/

bool __fastcall BG_PlayerASM_GetAlwaysOnState(const unsigned int animsetIndex, int *pOutAlwaysOnState)
{
  return ?BG_PlayerASM_GetAlwaysOnState@@YA_NIPEAH@Z(animsetIndex, pOutAlwaysOnState);
}

/*
==============
BG_PlayerASM_FindParentKnob
==============
*/

void __fastcall BG_PlayerASM_FindParentKnob(const XAnimTree *tree, unsigned int *inOutGraftAnimIndex, XAnimSubTreeID *inOutSubTreeID, unsigned int *inOutAnimIndex)
{
  ?BG_PlayerASM_FindParentKnob@@YAXPEBUXAnimTree@@PEAIPEAW4XAnimSubTreeID@@1@Z(tree, inOutGraftAnimIndex, inOutSubTreeID, inOutAnimIndex);
}

/*
==============
BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry
==============
*/

void __fastcall BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry(const unsigned int animsetIndex, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID)
{
  ?BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry@@YAXIHHPEAI0PEAW4XAnimSubTreeID@@PEAW4XAnimCurveID@@@Z(animsetIndex, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimCurveID);
}

/*
==============
BG_PlayerASM_DebugOverrideParameters
==============
*/

void __fastcall BG_PlayerASM_DebugOverrideParameters(DObj *obj, characterInfo_t *ci)
{
  ?BG_PlayerASM_DebugOverrideParameters@@YAXPEAUDObj@@PEAUcharacterInfo_t@@@Z(obj, ci);
}

/*
==============
BG_PlayerASM_CheckAnimsetIndex
==============
*/

void __fastcall BG_PlayerASM_CheckAnimsetIndex(const entityState_t *es, characterInfo_t *ci, PlayerASM_AnimSlot slot)
{
  ?BG_PlayerASM_CheckAnimsetIndex@@YAXPEBUentityState_t@@PEAUcharacterInfo_t@@W4PlayerASM_AnimSlot@@@Z(es, ci, slot);
}

/*
==============
BG_PlayerASM_GetXAnimIndex
==============
*/

unsigned int __fastcall BG_PlayerASM_GetXAnimIndex(const unsigned int animsetIndex, unsigned int packedAnim)
{
  return ?BG_PlayerASM_GetXAnimIndex@@YAIII@Z(animsetIndex, packedAnim);
}

/*
==============
BG_PlayerASM_FindWeaponPackageAnim
==============
*/

int __fastcall BG_PlayerASM_FindWeaponPackageAnim(const characterInfo_t *ci, const XAnimTree *tree, const PlayerCustomAnimHandlerType animType, const XAnimParts *parts, int *outParentNode)
{
  return ?BG_PlayerASM_FindWeaponPackageAnim@@YAHPEBUcharacterInfo_t@@PEBUXAnimTree@@W4PlayerCustomAnimHandlerType@@PEBUXAnimParts@@PEAH@Z(ci, tree, animType, parts, outParentNode);
}

/*
==============
BG_PlayerASM_GetClearKnob
==============
*/

unsigned int __fastcall BG_PlayerASM_GetClearKnob(const unsigned int animsetIndex)
{
  return ?BG_PlayerASM_GetClearKnob@@YAII@Z(animsetIndex);
}

/*
==============
BG_PlayerASM_GetNotify
==============
*/

scr_string_t __fastcall BG_PlayerASM_GetNotify(const Animset *pAnimset, const unsigned int animStateIndex)
{
  return ?BG_PlayerASM_GetNotify@@YA?AW4scr_string_t@@PEBUAnimset@@I@Z(pAnimset, animStateIndex);
}

/*
==============
BG_PlayerASM_GetXAnimData
==============
*/

void __fastcall BG_PlayerASM_GetXAnimData(const unsigned int animsetIndex, const unsigned int animStateIndex, const unsigned int animEntryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftIndex, XAnimSubTreeID *pOutSubtreeID)
{
  ?BG_PlayerASM_GetXAnimData@@YAXIIIPEAI0PEAW4XAnimSubTreeID@@@Z(animsetIndex, animStateIndex, animEntryIndex, pOutAnimIndex, pOutGraftIndex, pOutSubtreeID);
}

/*
==============
BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry
==============
*/

void __fastcall BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry(const unsigned int animsetIndex, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, const XAnim_s **pSubtreeAnims)
{
  ?BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry@@YAXIHHPEAI0PEAPEBUXAnim_s@@@Z(animsetIndex, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pSubtreeAnims);
}

/*
==============
BG_PlayerASM_GetParameterValue
==============
*/

double __fastcall BG_PlayerASM_GetParameterValue(const characterInfo_t *ci, unsigned __int16 parameterIndex)
{
  double result; 

  *(float *)&result = ?BG_PlayerASM_GetParameterValue@@YAMPEBUcharacterInfo_t@@G@Z(ci, parameterIndex);
  return result;
}

/*
==============
BG_PlayerASM_ApplyAnim
==============
*/

void __fastcall BG_PlayerASM_ApplyAnim(const entityState_t *es, characterInfo_t *ci, const PlayerASM_AnimSlot slot, lerpFrame_t *lf, const unsigned int flags, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles, PlayerASM_AnimOverrides *animOverrides, XModelNameMap *modelNameMap, bool previousSlotStateChanged)
{
  ?BG_PlayerASM_ApplyAnim@@YAXPEBUentityState_t@@PEAUcharacterInfo_t@@W4PlayerASM_AnimSlot@@PEAUlerpFrame_t@@IAEBTvec3_t@@4PEAUPlayerASM_AnimOverrides@@PEAUXModelNameMap@@_N@Z(es, ci, slot, lf, flags, movingPlatformOrigin, movingPlatformAngles, animOverrides, modelNameMap, previousSlotStateChanged);
}

/*
==============
BG_PlayerASM_GetStateNameFromIndex
==============
*/

scr_string_t __fastcall BG_PlayerASM_GetStateNameFromIndex(const unsigned int animsetIndex, int stateIndex)
{
  return ?BG_PlayerASM_GetStateNameFromIndex@@YA?AW4scr_string_t@@IH@Z(animsetIndex, stateIndex);
}

/*
==============
BG_PlayerASM_GetAnimFromIndex
==============
*/

scr_anim_t __fastcall BG_PlayerASM_GetAnimFromIndex(const unsigned int animsetIndex, const scr_string_t stateName, int index)
{
  return ?BG_PlayerASM_GetAnimFromIndex@@YA?BUscr_anim_t@@IW4scr_string_t@@H@Z(animsetIndex, stateName, index);
}

/*
==============
BG_PlayerASM_GetStateInfoByName
==============
*/

bool __fastcall BG_PlayerASM_GetStateInfoByName(const unsigned int animsetIndex, const scr_string_t stateName, AnimsetState **outState, int *pOutStateIndex)
{
  return ?BG_PlayerASM_GetStateInfoByName@@YA_NIW4scr_string_t@@PEAPEAUAnimsetState@@PEAH@Z(animsetIndex, stateName, outState, pOutStateIndex);
}

/*
==============
BG_PlayerASM_UpdateTreeParameters
==============
*/

void __fastcall BG_PlayerASM_UpdateTreeParameters(DObj *obj, characterInfo_t *ci, bool isNewAnim)
{
  ?BG_PlayerASM_UpdateTreeParameters@@YAXPEAUDObj@@PEAUcharacterInfo_t@@_N@Z(obj, ci, isNewAnim);
}

/*
==============
BG_PlayerASM_IsForceUpdate
==============
*/

bool __fastcall BG_PlayerASM_IsForceUpdate(const entityState_t *es, const characterInfo_t *ci)
{
  return ?BG_PlayerASM_IsForceUpdate@@YA_NPEBUentityState_t@@PEBUcharacterInfo_t@@@Z(es, ci);
}

/*
==============
BG_PlayerASM_GetStateInfoByIndex
==============
*/

bool __fastcall BG_PlayerASM_GetStateInfoByIndex(const unsigned int animsetIndex, int stateIndex, AnimsetState **outState)
{
  return ?BG_PlayerASM_GetStateInfoByIndex@@YA_NIHPEAPEAUAnimsetState@@@Z(animsetIndex, stateIndex, outState);
}

/*
==============
BG_PlayerASM_GetXAnimIndex
==============
*/

unsigned int __fastcall BG_PlayerASM_GetXAnimIndex(const playerState_s *ps, const PlayerASM_AnimSlot slot)
{
  return ?BG_PlayerASM_GetXAnimIndex@@YAIPEBUplayerState_s@@W4PlayerASM_AnimSlot@@@Z(ps, slot);
}

/*
==============
BG_PlayerASM_GetLeadAnimationInfo
==============
*/

bool __fastcall BG_PlayerASM_GetLeadAnimationInfo(characterInfo_t *ci, unsigned int animsetIndex, unsigned int packedAnim, const PlayerASM_AnimSlot slot, const XAnim_s *anims, const unsigned int animIndex, const float rate, unsigned int *outLeadIndex, const XAnimParts **outLeadParts, float *outFrequency)
{
  return ?BG_PlayerASM_GetLeadAnimationInfo@@YA_NPEAUcharacterInfo_t@@IIW4PlayerASM_AnimSlot@@PEBUXAnim_s@@IMPEAIPEAPEBUXAnimParts@@PEAM@Z(ci, animsetIndex, packedAnim, slot, anims, animIndex, rate, outLeadIndex, outLeadParts, outFrequency);
}

/*
==============
BG_PlayerASM_DebugOverrideAnimTimersSlot
==============
*/

void __fastcall BG_PlayerASM_DebugOverrideAnimTimersSlot(DObj *obj, const characterInfo_t *ci, const PlayerASM_AnimSlot slot, const float time)
{
  ?BG_PlayerASM_DebugOverrideAnimTimersSlot@@YAXPEAUDObj@@PEBUcharacterInfo_t@@W4PlayerASM_AnimSlot@@M@Z(obj, ci, slot, time);
}

/*
==============
BG_PlayerASM_AddNotify
==============
*/

void __fastcall BG_PlayerASM_AddNotify(scr_string_t notifyName, scr_string_t notetrackName, float frac, unsigned __int16 notifyType, const XAnimParts *parts, void *customData, XAnimNotifyHandle *inOutNotifyHead)
{
  ?BG_PlayerASM_AddNotify@@YAXW4scr_string_t@@0MGPEBUXAnimParts@@PEAXAEAVXAnimNotifyHandle@@@Z(notifyName, notetrackName, frac, notifyType, parts, customData, inOutNotifyHead);
}

/*
==============
BG_PlayerASM_FindWeaponPackageKnobNode
==============
*/

int __fastcall BG_PlayerASM_FindWeaponPackageKnobNode(const characterInfo_t *ci, const PlayerCustomAnimHandlerType animType)
{
  return ?BG_PlayerASM_FindWeaponPackageKnobNode@@YAHPEBUcharacterInfo_t@@W4PlayerCustomAnimHandlerType@@@Z(ci, animType);
}

/*
==============
BG_PlayerASM_AddNotify
==============
*/
void BG_PlayerASM_AddNotify(scr_string_t notifyName, scr_string_t notetrackName, float frac, unsigned __int16 notifyType, const XAnimParts *parts, void *customData, XAnimNotifyHandle *inOutNotifyHead)
{
  const PlayerASM_Context *v9; 

  if ( !customData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1763, ASSERT_TYPE_ASSERT, "(customData)", (const char *)&queryFormat, "customData") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1766, ASSERT_TYPE_ASSERT, "(notetrackContext)", (const char *)&queryFormat, "notetrackContext") )
      __debugbreak();
  }
  if ( !*(_QWORD *)customData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1767, ASSERT_TYPE_ASSERT, "(notetrackContext->context)", (const char *)&queryFormat, "notetrackContext->context") )
    __debugbreak();
  if ( !*((_QWORD *)customData + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1768, ASSERT_TYPE_ASSERT, "(notetrackContext->instance)", (const char *)&queryFormat, "notetrackContext->instance") )
    __debugbreak();
  v9 = *(const PlayerASM_Context **)customData;
  if ( !*(_QWORD *)(*(_QWORD *)customData + 24i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1771, ASSERT_TYPE_ASSERT, "(context->playerAsm)", (const char *)&queryFormat, "context->playerAsm") )
    __debugbreak();
  if ( !v9->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1772, ASSERT_TYPE_ASSERT, "(context->ps)", (const char *)&queryFormat, "context->ps") )
    __debugbreak();
  BgPlayer_Asm::RunNotetrackHandler(v9->playerAsm, v9, *((const PlayerASM_Instance **)customData + 1), notifyName, notetrackName);
}

/*
==============
BG_PlayerASM_ApplyAimAnims
==============
*/
bool BG_PlayerASM_ApplyAimAnims(characterInfo_t *ci, DObj *obj, XAnimTree *tree, const unsigned int animsetIndex, const AnimsetAlias *pAlias, const float aimBlendTime, bool clear, bool animStateHasChanged, XModelNameMap *modelNameMap, const unsigned int flags)
{
  const AnimsetAlias *v13; 
  scr_string_t redAnims; 
  const Animset *AnimsetByIndex; 
  int IndexOfRandomAnimFrom; 
  int v28; 
  const Animset *v29; 
  unsigned int Anim; 
  PlayerASM_AnimSlot v31; 
  unsigned int v32; 
  unsigned int v33; 
  bool v34; 
  const dvar_t *v35; 
  bool v36; 
  unsigned __int16 InfoIndex; 
  bool result; 
  unsigned int TreeParent; 
  float aliasName; 
  float aliasNamea; 
  float aliasNameb; 
  float aliasNamec; 
  int animEntryToSkip; 
  float pOutAnimCurveID; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  float outAimCircleAngleNormalized; 
  float outAimConeAngleNormalized; 
  int pOutStateIndex; 
  float outAimConeAngleNormalizedStrafe; 
  float outAimCircleAngleNormalizedStrafe; 
  AnimsetState *outState; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  v13 = pAlias;
  __asm
  {
    vmovss  xmm3, [rbp+27h+aimBlendTime]
    vucomiss xmm3, cs:__real@bf800000
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _ECX = 0;
  redAnims = (scr_string_t)v13->u.m_AIAnimsetAlias[3].redAnims;
  __asm { vmovd   xmm1, ecx }
  LODWORD(_RAX) = flags & 4;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vxorps  xmm7, xmm7, xmm7
    vblendvps xmm0, xmm7, xmm3, xmm2
    vmovss  dword ptr [rbp+27h+pAlias], xmm0
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !BG_Animset_GetStateInfoByName(AnimsetByIndex, redAnims, &outState, &pOutStateIndex) || (IndexOfRandomAnimFrom = BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(NULL, ci->entityNum, animsetIndex, outState, SHIDWORD(v13->u.m_AIAnimsetAlias[3].redAnims), 0), IndexOfRandomAnimFrom < 0) || (v28 = pOutStateIndex, v29 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex), BG_Animset_GetAnimIndexFromStateIndexAndEntry(v29, v28, IndexOfRandomAnimFrom, &pOutAnimIndex, &pOutGraftNode, (XAnimSubTreeID *)&flags, (XAnimCurveID *)&aimBlendTime), !pOutAnimIndex) )
  {
    result = 0;
    goto LABEL_28;
  }
  Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
  LOBYTE(v31) = 1;
  v32 = Anim;
  v33 = BG_PlayerASM_GetAnim(ci, v31);
  v34 = BG_PlayerASM_IsNoAimingAlias(v32, animsetIndex) || BG_PlayerASM_IsNoAimingAlias(v33, animsetIndex);
  v35 = DCONST_DVARBOOL_playerasm_enableAiming;
  if ( !DCONST_DVARBOOL_playerasm_enableAiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_enableAiming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  v36 = !v35->current.enabled || v34;
  __asm { vmovaps xmmword ptr [rsp+0D0h+var_38+8], xmm6 }
  if ( clear || v36 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+27h+pAlias]
      vmovss  [rsp+0D0h+aliasName], xmm6
    }
    XAnimClearGoalWeight(tree, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex, aliasNameb, EASE_IN_OUT_SINE);
    LODWORD(outAimCircleAngleNormalized) = pOutAnimIndex;
    LODWORD(outAimConeAngleNormalized) = pOutGraftNode;
    LOWORD(pAlias) = flags;
    BG_PlayerASM_FindParentKnob(tree, (unsigned int *)&outAimConeAngleNormalized, (XAnimSubTreeID *)&pAlias, (unsigned int *)&outAimCircleAngleNormalized);
    TreeParent = LODWORD(outAimCircleAngleNormalized);
    if ( LODWORD(outAimCircleAngleNormalized) == pOutAnimIndex )
      TreeParent = XAnimGetTreeParent(tree->anims, pOutAnimIndex);
    if ( TreeParent )
    {
      __asm { vmovss  [rsp+0D0h+aliasName], xmm6 }
      XAnimClearGoalWeight(tree, LODWORD(outAimConeAngleNormalized), (const XAnimSubTreeID)pAlias, TreeParent, aliasNamec, EASE_IN_OUT_SINE);
    }
    goto LABEL_26;
  }
  BG_PlayerASM_CalculateAimScrubTimeAndWeight(ci, &outAimConeAngleNormalized, &outAimCircleAngleNormalized, &outAimConeAngleNormalizedStrafe, &outAimCircleAngleNormalizedStrafe);
  __asm
  {
    vmovss  xmm6, [rbp+27h+outAimConeAngleNormalized]
    vmovaps xmm2, xmm6; value
  }
  XAnimSetFloatGameParameterByIndex(obj, 0x27u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, [rbp+27h+outAimCircleAngleNormalized]; value }
  XAnimSetFloatGameParameterByIndex(obj, 0x28u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, [rbp+27h+outAimConeAngleNormalizedStrafe]; value }
  XAnimSetFloatGameParameterByIndex(obj, 0x29u, *(float *)&_XMM2);
  __asm { vmovss  xmm2, [rbp+27h+outAimCircleAngleNormalizedStrafe]; value }
  XAnimSetFloatGameParameterByIndex(obj, 0x2Au, *(float *)&_XMM2);
  if ( !animStateHasChanged )
  {
LABEL_26:
    __asm { vmovaps xmm6, xmmword ptr [rsp+0D0h+var_38+8] }
    result = 1;
    goto LABEL_28;
  }
  InfoIndex = XAnimGetInfoIndex(tree, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+27h+pAlias]
    vmovss  xmm1, cs:__real@3f800000
    vmovss  dword ptr [rsp+0D0h+pOutAnimCurveID], xmm7
    vmovss  [rsp+0D0h+animEntryToSkip], xmm0
    vmovss  [rsp+0D0h+aliasName], xmm1
  }
  if ( InfoIndex )
  {
    XAnimSetCompleteGoalWeight(obj, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex, aliasName, *(float *)&animEntryToSkip, pOutAnimCurveID, (scr_string_t)0, 0, 0, EASE_IN_OUT_SINE, modelNameMap);
    __asm { vmovaps xmm6, xmmword ptr [rsp+0D0h+var_38+8] }
  }
  else
  {
    XAnimSetCompleteGoalWeight(obj, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex, aliasName, *(float *)&animEntryToSkip, pOutAnimCurveID, (scr_string_t)0, 0, 0, EASE_IN_OUT_SINE, modelNameMap);
    __asm { vmovss  [rsp+0D0h+aliasName], xmm6 }
    XAnimSetTime(tree, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex, aliasNamea);
    __asm { vmovaps xmm6, xmmword ptr [rsp+0D0h+var_38+8] }
  }
  result = 1;
LABEL_28:
  _R11 = &v68;
  __asm { vmovaps xmm7, xmmword ptr [r11-20h] }
  return result;
}

/*
==============
BG_PlayerASM_ApplyAliasAddonAnims
==============
*/
void BG_PlayerASM_ApplyAliasAddonAnims(characterInfo_t *ci, DObj *obj, XAnimTree *tree, const PlayerASM_AnimSlot slot, const unsigned int animsetIndex, const AnimsetAlias *pAlias, PlayerASM_AnimOverrides *animOverrides, const AnimsetAlias *newAnimAlias, const bool clear, XModelNameMap *modelNameMap, const unsigned int flags)
{
  unsigned __int8 v15; 
  const AnimsetAlias *v17; 
  unsigned int v18; 
  BgStatic *ActiveStatics; 
  __int64 m_AIAnimsetAlias; 
  unsigned int v21; 
  PlayerASM_AnimOverrides *v22; 
  scr_string_t v26; 
  const Animset *AnimsetByIndex; 
  int IndexOfRandomAnimFrom; 
  const AnimsetAlias *v29; 
  int v33; 
  const Animset *v34; 
  bool ShouldSkipAddon; 
  const AnimsetAlias *v36; 
  const XAnim_s *SubTreeAnims; 
  int v40; 
  AnimsetAlias_Union v42; 
  unsigned int redAnims; 
  unsigned int v44; 
  __int64 v46; 
  XAnimNodeTypeID nodeType; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 animEntryToSkip; 
  __int64 animEntryToSkipa; 
  int animEntryToSkipb; 
  int animEntryToSkipc; 
  XAnimCurveID *pOutAnimCurveID; 
  XAnimCurveID *pOutAnimCurveIDa; 
  float pOutAnimCurveIDb; 
  float pOutAnimCurveIDc; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  int pOutStateIndex; 
  AnimsetState *outState; 
  __int64 v74; 
  XAnimSubTreeID pOutAnimSubtreeID; 
  XAnimTree *treea; 
  XAnimCurveID curveID; 

  treea = tree;
  v15 = slot;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 602, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 603, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 604, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v17 = pAlias;
  if ( !pAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 605, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  v18 = animsetIndex;
  if ( animsetIndex >= 4 )
  {
    LODWORD(animEntryToSkip) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 606, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animEntryToSkip, 4) )
      __debugbreak();
  }
  if ( v15 >= 2u )
  {
    LODWORD(pOutAnimCurveID) = 2;
    LODWORD(animEntryToSkip) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 607, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", animEntryToSkip, pOutAnimCurveID) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( v17 )
  {
    m_AIAnimsetAlias = (__int64)v17->u.m_AIAnimsetAlias;
    v74 = m_AIAnimsetAlias;
    if ( !m_AIAnimsetAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 618, ASSERT_TYPE_ASSERT, "(playerAlias)", (const char *)&queryFormat, "playerAlias") )
      __debugbreak();
    v21 = 0;
    if ( *(_DWORD *)(m_AIAnimsetAlias + 96) )
    {
      v22 = animOverrides;
      __asm
      {
        vmovaps [rsp+0F0h+var_60], xmm7
        vmovaps [rsp+0F0h+var_70], xmm8
        vmovss  xmm8, cs:__real@3f800000
        vmovaps [rsp+0F0h+var_50], xmm6
        vxorps  xmm7, xmm7, xmm7
      }
      do
      {
        pAlias = NULL;
        _RDI = *(_QWORD *)(m_AIAnimsetAlias + 88) + 32i64 * v21;
        if ( !*(_DWORD *)(_RDI + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 624, ASSERT_TYPE_ASSERT, "(addonEntry->addonType != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "addonEntry->addonType != NULL_SCR_STRING") )
          __debugbreak();
        v26 = *(_DWORD *)_RDI;
        if ( *(_DWORD *)_RDI )
        {
          if ( *(_DWORD *)(_RDI + 4) )
          {
            AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v18);
            if ( BG_Animset_GetStateInfoByName(AnimsetByIndex, v26, &outState, &pOutStateIndex) )
            {
              IndexOfRandomAnimFrom = BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(NULL, ci->entityNum, v18, outState, *(const scr_string_t *)(_RDI + 4), 0);
              if ( IndexOfRandomAnimFrom >= 0 )
              {
                v33 = pOutStateIndex;
                v34 = BG_PlayerASM_GetAnimsetByIndex(v18);
                BG_Animset_GetAnimIndexFromStateIndexAndEntry(v34, v33, IndexOfRandomAnimFrom, &pOutAnimIndex, &pOutGraftNode, &pOutAnimSubtreeID, &curveID);
                ShouldSkipAddon = BG_PlayerASM_ShouldSkipAddon(ci, v18, pOutStateIndex, IndexOfRandomAnimFrom);
                if ( clear )
                {
                  SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, pOutAnimSubtreeID);
                  if ( pOutAnimIndex >= SubTreeAnims->size )
                  {
                    LODWORD(pOutAnimCurveIDa) = SubTreeAnims->size;
                    LODWORD(animEntryToSkipa) = pOutAnimIndex;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 669, ASSERT_TYPE_ASSERT, "(unsigned)( addonAnimIndex ) < (unsigned)( anims->size )", "addonAnimIndex doesn't index anims->size\n\t%i not in [0, %i)", animEntryToSkipa, pOutAnimCurveIDa) )
                      __debugbreak();
                  }
                  __asm { vmovss  xmm6, dword ptr [rdi+0Ch] }
                  v40 = *(_DWORD *)(_RDI + 8);
                  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 564, ASSERT_TYPE_ASSERT, "(addonType != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "addonType != NULL_SCR_STRING") )
                    __debugbreak();
                  _R10 = newAnimAlias;
                  if ( newAnimAlias )
                  {
                    v42.m_AIAnimsetAlias = (AIAnimsetAlias *)newAnimAlias->u;
                    if ( !v42.m_AIAnimsetAlias )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 572, ASSERT_TYPE_ASSERT, "(newAnimPlayerAlias)", (const char *)&queryFormat, "newAnimPlayerAlias") )
                        __debugbreak();
                      _R10 = newAnimAlias;
                    }
                    redAnims = (unsigned int)v42.m_AIAnimsetAlias[6].redAnims;
                    v44 = 0;
                    if ( redAnims )
                    {
                      _R8 = *(_QWORD *)&v42.m_AIAnimsetAlias[5].numRedAnims;
                      while ( 1 )
                      {
                        v46 = 32i64 * v44;
                        if ( *(_DWORD *)(v46 + _R8) )
                        {
                          if ( *(_DWORD *)(v46 + _R8 + 8) == v40 )
                            break;
                        }
                        if ( ++v44 >= redAnims )
                          goto LABEL_68;
                      }
                      _RDX = 32i64 * v44;
                      __asm { vmovss  xmm6, dword ptr [rdx+r8+0Ch] }
                    }
                    else
                    {
LABEL_68:
                      __asm { vmovss  xmm6, dword ptr [r10+3Ch] }
                    }
                  }
                  _EDI = 0;
                  _EAX = flags & 4;
                  __asm
                  {
                    vmovd   xmm0, eax
                    vmovd   xmm1, edi
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm7, xmm6, xmm2
                  }
                  nodeType = SubTreeAnims->entries[pOutAnimIndex].nodeType;
                  __asm { vmovss  [rbp+2Fh+animsetIndex], xmm0 }
                  if ( XAnimIsCustomNodeType(nodeType) )
                  {
                    __asm
                    {
                      vmovss  xmm0, [rbp+2Fh+animsetIndex]
                      vmovss  dword ptr [rsp+0F0h+pOutAnimCurveID], xmm8
                      vmovss  [rsp+0F0h+animEntryToSkip], xmm0
                      vmovss  dword ptr [rsp+0F0h+fmt], xmm7
                    }
                    XAnimSetGoalWeight(obj, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, fmta, *(float *)&animEntryToSkipc, pOutAnimCurveIDc, (scr_string_t)0, 0, 0, curveID, modelNameMap);
                  }
                  else
                  {
                    BG_PlayerASM_FindParentKnob(treea, &pOutGraftNode, &pOutAnimSubtreeID, &pOutAnimIndex);
                    __asm
                    {
                      vmovss  xmm0, [rbp+2Fh+animsetIndex]
                      vmovss  dword ptr [rsp+0F0h+fmt], xmm0
                    }
                    XAnimClearTreeGoalWeights(treea, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, fmtb, 0, obj, curveID);
                  }
                }
                else if ( !ShouldSkipAddon )
                {
                  if ( v22 )
                  {
                    if ( BG_PlayerASM_FindValidAliasAddonOverrides(v22, *(scr_string_t *)(_RDI + 8), (PlayerASM_AnimOverrideEntry **)&pAlias) )
                    {
                      BG_PlayerASM_ApplyAliasAddonOverrides(obj, ci, v22, *(scr_string_t *)(_RDI + 8), 1, modelNameMap, flags);
                      v36 = pAlias;
                      *(_QWORD *)&pAlias->name = 0i64;
                      v36->anims = NULL;
                      *(_QWORD *)&v36->numAnims = 0i64;
                      LODWORD(v36->funcs) = 0;
                    }
                    if ( v22->count >= 0x10 )
                    {
                      LODWORD(pOutAnimCurveIDa) = 16;
                      LODWORD(animEntryToSkipa) = v22->count;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 701, ASSERT_TYPE_ASSERT, "(unsigned)( animOverrides->count ) < (unsigned)( ((8) * 2) )", "animOverrides->count doesn't index PLAYERASM_MAX_ADDON_OVERRIDES\n\t%i not in [0, %i)", animEntryToSkipa, pOutAnimCurveIDa) )
                        __debugbreak();
                    }
                    pAlias = (const AnimsetAlias *)&v22->entries[v22->count];
                    LODWORD(pAlias->anims) = v18;
                    pAlias->name = *(_DWORD *)_RDI;
                    pAlias->numAnims = *(_DWORD *)(_RDI + 12);
                    *(&pAlias->numAnims + 1) = *(_DWORD *)(_RDI + 16);
                    HIDWORD(pAlias->anims) = IndexOfRandomAnimFrom;
                    *((_DWORD *)&pAlias->name + 1) = *(_DWORD *)(_RDI + 8);
                    LOBYTE(pAlias->funcs) = *(_BYTE *)(_RDI + 20);
                    ++v22->count;
                  }
                  else
                  {
                    if ( (flags & 4) != 0 )
                      __asm { vmovaps xmm0, xmm7 }
                    else
                      __asm { vmovss  xmm0, dword ptr [rdi+0Ch] }
                    __asm
                    {
                      vmovss  dword ptr [rsp+0F0h+pOutAnimCurveID], xmm8
                      vmovss  [rsp+0F0h+animEntryToSkip], xmm0
                      vmovss  dword ptr [rsp+0F0h+fmt], xmm8
                    }
                    XAnimSetCompleteGoalWeight(obj, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, fmt, *(float *)&animEntryToSkipb, pOutAnimCurveIDb, (scr_string_t)0, 0, 0, curveID, modelNameMap);
                  }
                }
              }
              else if ( !clear && v22 && BG_PlayerASM_FindValidAliasAddonOverrides(v22, *(scr_string_t *)(_RDI + 8), (PlayerASM_AnimOverrideEntry **)&pAlias) )
              {
                BG_PlayerASM_ApplyAliasAddonOverrides(obj, ci, v22, *(scr_string_t *)(_RDI + 8), 1, modelNameMap, flags);
                v29 = pAlias;
                *(_QWORD *)&pAlias->name = 0i64;
                v29->anims = NULL;
                *(_QWORD *)&v29->numAnims = 0i64;
                LODWORD(v29->funcs) = 0;
              }
            }
          }
        }
        m_AIAnimsetAlias = v74;
        ++v21;
      }
      while ( v21 < *(_DWORD *)(v74 + 96) );
      __asm
      {
        vmovaps xmm8, [rsp+0F0h+var_70]
        vmovaps xmm7, [rsp+0F0h+var_60]
        vmovaps xmm6, [rsp+0F0h+var_50]
      }
    }
  }
}

/*
==============
BG_PlayerASM_ApplyAnim
==============
*/
void BG_PlayerASM_ApplyAnim(const entityState_t *es, characterInfo_t *ci, const PlayerASM_AnimSlot slot, lerpFrame_t *lf, const unsigned int flags, const vec3_t *movingPlatformOrigin, const vec3_t *movingPlatformAngles, PlayerASM_AnimOverrides *animOverrides, XModelNameMap *modelNameMap, bool previousSlotStateChanged)
{
  unsigned __int8 v20; 
  const BgStatic *ActiveStatics; 
  DObj *DObj; 
  DObj *v27; 
  XAnimTree *v28; 
  XAnimTree *v29; 
  unsigned int animationNumber; 
  unsigned int v35; 
  XAnimTree *v36; 
  unsigned int Animset; 
  unsigned int v38; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  const Animset *AnimsetByIndex; 
  scr_string_t curveName; 
  const char *v49; 
  int latestSnapshotTime; 
  unsigned int v59; 
  unsigned int v61; 
  unsigned int v62; 
  const Animset *v63; 
  XAnimSubTreeID v64; 
  const Animset *v65; 
  scr_string_t clearStateName; 
  const Animset *v67; 
  __int64 v68; 
  unsigned int numAnimAliases; 
  AnimsetAlias *animAliases; 
  unsigned int index; 
  int v72; 
  int v73; 
  const Animset *v74; 
  XAnimSubTreeID v75; 
  unsigned int v76; 
  unsigned int v77; 
  const XAnim_s *v78; 
  bool HasFinished; 
  bool v80; 
  bool IsLooped; 
  unsigned int v82; 
  unsigned int v84; 
  const Animset *v88; 
  unsigned int v89; 
  unsigned int v90; 
  __int64 v91; 
  const Animset *v92; 
  const Animset *v93; 
  unsigned int numStates; 
  scr_string_t AnimsetNameByIndex; 
  const char *v96; 
  scr_string_t StateNameFromIndex; 
  const char *v98; 
  unsigned int v99; 
  int v100; 
  int v101; 
  int v102; 
  const Animset *v103; 
  unsigned int v104; 
  const XAnim_s *SubTreeAnims; 
  scr_string_t v106; 
  scr_string_t AnimTree; 
  const char *v108; 
  scr_string_t v109; 
  const char *v110; 
  bool v111; 
  AnimsetAlias *v112; 
  bool AnimSyncParameters; 
  unsigned int v116; 
  unsigned __int8 v117; 
  __int64 v118; 
  XAnimSubTreeID v119; 
  unsigned int v120; 
  const XAnim_s *v121; 
  unsigned int parent; 
  unsigned __int16 InfoIndex; 
  XAnimSyncGroupID v124; 
  unsigned int v125; 
  XAnimSubTreeID v126; 
  unsigned int v127; 
  bool v128; 
  bool v129; 
  bool v130; 
  unsigned __int16 v131; 
  vec3_t *v133; 
  entityState_t *v134; 
  int v135; 
  vec3_t *v136; 
  char *fmt; 
  float fmtb; 
  PlayerASM_AnimSlot fmta; 
  PlayerASM_AnimSlot fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  __int64 animsetIndex; 
  unsigned int animsetIndexa; 
  __int64 animsetIndexb; 
  float animsetIndexd; 
  float animsetIndexe; 
  float animsetIndexf; 
  __int64 animsetIndexc; 
  XAnimCurveID *pOutAnimCurveID; 
  unsigned int pOutAnimCurveIDa; 
  XAnimCurveID *pOutAnimCurveIDb; 
  float pOutAnimCurveIDd; 
  float pOutAnimCurveIDe; 
  XAnimCurveID *pOutAnimCurveIDc; 
  unsigned int animStateIndex; 
  unsigned int animEntryIndex; 
  unsigned int lastAnimsetIndex; 
  unsigned int lastAnimsetIndexa; 
  unsigned int lastAnimsetIndexb; 
  bool animStateHasChanged; 
  XModelNameMap *v172; 
  unsigned int lastSubtreeID; 
  bool outResetSyncGroup; 
  XAnimCurveID IDFromPrimitiveCurveName; 
  bool outIsRestartSyncNode; 
  XAnimSubTreeID inOutSubTreeID[2]; 
  unsigned int inOutAnimIndex; 
  unsigned int inOutGraftAnimIndex; 
  unsigned int outAnimsetIndex; 
  XAnimSyncGroupID outSyncGroup; 
  unsigned int outAnimState; 
  XAnimSubTreeID pOutAnimSubtreeID; 
  unsigned int stateIndex; 
  unsigned int entryIndex; 
  unsigned int outAnimEntry; 
  unsigned int v187; 
  unsigned int v188; 
  unsigned int packedAnimIndex; 
  unsigned int outSyncRootAnimIndex; 
  unsigned int pOutGraftNode; 
  unsigned int pOutAnimIndex; 
  XModelNameMap *cachedModelNameMap; 
  DObj *obj; 
  AnimsetState *outState; 
  AnimsetAlias *newAnimAlias; 
  PlayerASM_AnimOverrides *v197; 
  AnimsetAlias *ppOutAlias; 
  characterInfo_t *cia; 
  const BgAnimStatic *v200; 
  lerpFrame_t *v201; 
  entityState_t *v202; 
  AnimsetAnim *ppOutAnim; 
  XAnimTree *tree; 
  vec3_t *v205; 
  vec3_t *v206; 
  vec3_t outAngleDela; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _R13 = lf;
  v206 = (vec3_t *)movingPlatformOrigin;
  v20 = slot;
  v205 = (vec3_t *)movingPlatformAngles;
  v197 = animOverrides;
  cachedModelNameMap = modelNameMap;
  v201 = lf;
  outIsRestartSyncNode = slot;
  cia = ci;
  v202 = (entityState_t *)es;
  BG_CheckThread();
  v188 = 0;
  pOutAnimIndex = 0;
  pOutGraftNode = 0;
  pOutAnimSubtreeID = XANIM_SUBTREE_DEFAULT;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1495, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1496, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  DObj = BG_GetDObj(ActiveStatics, es->number);
  obj = DObj;
  v27 = DObj;
  if ( DObj )
  {
    v28 = DObjGetTree(DObj);
    tree = v28;
    v29 = v28;
    if ( v28 )
    {
      __asm
      {
        vmovaps [rsp+230h+var_98+8], xmm10
        vmovaps [rsp+230h+var_A8+8], xmm11
      }
      v80 = v28->owner[0] == 0;
      __asm
      {
        vmovaps [rsp+230h+var_B8+8], xmm12
        vmovaps [rsp+230h+var_C8+8], xmm13
      }
      Profile_Begin(!v80 + 439);
      v200 = ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1522, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      animationNumber = _R13->animationNumber;
      __asm
      {
        vmovss  xmm10, cs:__real@3f800000
        vmovss  xmm12, cs:__real@40400000
        vmovss  xmm13, cs:__real@42820000
      }
      newAnimAlias = NULL;
      BYTE1(outSyncGroup) = 0;
      stateIndex = -1;
      entryIndex = -1;
      outSyncRootAnimIndex = (flags >> 3) & 1;
      __asm { vmovss  [rbp+110h+inOutAnimIndex], xmm8 }
      outAnimState = -1;
      outAnimEntry = -1;
      __asm { vmovaps xmm11, xmm10 }
      packedAnimIndex = animationNumber;
      v35 = BG_PlayerASM_UnpackAnimFromCi(ci, (const PlayerASM_AnimSlot)v20, &outAnimsetIndex, &outAnimState, &outAnimEntry);
      v80 = v35 == animationNumber;
      v187 = v35;
      v36 = v27->tree;
      outResetSyncGroup = !v80;
      if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 485, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
        __debugbreak();
      if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 487, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( (flags & 0x10) != 0 )
      {
        if ( v36->owner[0] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 492, ASSERT_TYPE_ASSERT, "(animTree->owner == XAnimOwner::CLIENT)", (const char *)&queryFormat, "animTree->owner == XAnimOwner::CLIENT") )
          __debugbreak();
LABEL_24:
        if ( (flags & 0x10) != 0 )
        {
          if ( packedAnimIndex )
          {
            Animset = BG_PlayerASM_GetAnimset(ci);
            v38 = Animset;
            if ( Animset >= 4 )
            {
              LODWORD(animsetIndex) = Animset;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1552, ASSERT_TYPE_ASSERT, "(unsigned)( lastAnimsetIndex ) < (unsigned)( (1 << 2) )", "lastAnimsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
                __debugbreak();
            }
            BG_PlayerASM_UnpackAnim(v38, packedAnimIndex, &stateIndex, &entryIndex);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerasm_client_update_lod_warn, "playerasm_client_update_lod_warn") && (outResetSyncGroup || previousSlotStateChanged) )
            {
              LODWORD(animsetIndex) = _R13->animationNumber;
              LODWORD(fmt) = v187;
              Com_PrintWarning(19, "[Entity %d, slot %d] Applying old anims to tree at low LOD (anim: %x, lf: %x)\n", (unsigned int)ci->entityNum, v20, fmt, animsetIndex);
            }
            __asm { vmovss  xmm0, cs:__real@bf800000 }
            lastSubtreeID = flags;
            v172 = cachedModelNameMap;
            animStateHasChanged = 0;
            __asm { vmovss  [rsp+230h+lastAnimsetIndex], xmm0 }
            animEntryIndex = entryIndex;
            animStateIndex = stateIndex;
            pOutAnimCurveIDa = packedAnimIndex;
            animsetIndexa = v38;
            goto LABEL_36;
          }
        }
        else if ( v187 )
        {
          __asm { vmovss  xmm0, cs:__real@bf800000 }
          lastSubtreeID = flags;
          v172 = cachedModelNameMap;
          animStateHasChanged = previousSlotStateChanged;
          __asm { vmovss  [rsp+230h+lastAnimsetIndex], xmm0 }
          animEntryIndex = outAnimEntry;
          animStateIndex = outAnimState;
          pOutAnimCurveIDa = v187;
          animsetIndexa = outAnimsetIndex;
LABEL_36:
          LOBYTE(fmt) = v20;
          BG_PlayerASM_ApplyExtraAnims(ci, v27, v29, v197, (const PlayerASM_AnimSlot)fmt, animsetIndexa, pOutAnimCurveIDa, animStateIndex, animEntryIndex, *(const float *)&lastAnimsetIndex, NULL, 0, animStateHasChanged, v172, lastSubtreeID);
        }
        Profile_EndInternal(NULL);
LABEL_188:
        __asm
        {
          vmovaps xmm12, [rsp+230h+var_B8+8]
          vmovaps xmm11, [rsp+230h+var_A8+8]
          vmovaps xmm10, [rsp+230h+var_98+8]
          vmovaps xmm13, [rsp+230h+var_C8+8]
        }
        goto LABEL_189;
      }
      if ( (flags & 2) == 0 && _R13->animationNumber == BG_PlayerASM_GetAnim(ci, (const PlayerASM_AnimSlot)v20) )
        goto LABEL_24;
      v41 = outAnimsetIndex;
      v42 = outAnimEntry;
      v43 = outAnimState;
      __asm
      {
        vmovaps xmmword ptr [rsp+230h+var_58+8], xmm6
        vmovaps [rsp+230h+var_88+8], xmm9
      }
      if ( outAnimsetIndex >= 4 )
      {
        LODWORD(animsetIndex) = outAnimsetIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 148, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
          __debugbreak();
      }
      __asm { vmovss  xmm6, cs:__real@3e4ccccd }
      ppOutAlias = NULL;
      ppOutAnim = NULL;
      IDFromPrimitiveCurveName = LINEAR;
      if ( v187 )
      {
        AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v41);
        if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 169, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
          __debugbreak();
        if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 170, ASSERT_TYPE_ASSERT, "(animset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "animset->mode == ASM_MODE_PLAYER") )
          __debugbreak();
        if ( BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, v43, v42) )
        {
          BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v43, v42, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
          _RDX = ppOutAlias;
          if ( ppOutAlias )
          {
            _RAX.m_AIAnimsetAlias = (AIAnimsetAlias *)ppOutAlias->u;
            curveName = ppOutAlias->curveName;
            __asm
            {
              vmovss  xmm6, dword ptr [rdx+3Ch]
              vmovss  xmm11, dword ptr [rax+4]
            }
            if ( curveName )
            {
              IDFromPrimitiveCurveName = XAnimCurve_GetIDFromPrimitiveCurveName(curveName);
              if ( IDFromPrimitiveCurveName == CURVE_ASSET_END )
              {
                v49 = SL_ConvertToString(curveName);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 184, ASSERT_TYPE_ASSERT, "(*outCurveID != XAnimCurveID::MAX)", "%s\n\tInvalid xanim curve name '%s'\n", "*outCurveID != XAnimCurveID::MAX", v49) )
                  __debugbreak();
              }
              _RDX = ppOutAlias;
            }
            _RAX.m_AIAnimsetAlias = (AIAnimsetAlias *)_RDX->u;
            newAnimAlias = _RDX;
            __asm
            {
              vmovss  xmm12, dword ptr [rax+48h]
              vmovss  xmm13, dword ptr [rax+4Ch]
            }
          }
        }
      }
      _RSI = 0i64;
      _EAX = flags & 4;
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, esi
      }
      latestSnapshotTime = v200->latestSnapshotTime;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm6, xmm2
        vmovss  [rbp+110h+inOutAnimIndex], xmm0
      }
      if ( _R13->oldFrameSnapshotTime == latestSnapshotTime )
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
        outSyncRootAnimIndex = 1;
      }
      else
      {
        __asm { vmovss  xmm6, [rbp+110h+inOutAnimIndex] }
      }
      v59 = packedAnimIndex;
      __asm { vmovss  xmm9, cs:__real@bf800000 }
      if ( !packedAnimIndex )
        goto LABEL_109;
      v61 = BG_PlayerASM_GetAnimset(ci);
      v188 = v61;
      v62 = v61;
      if ( v61 >= 4 )
      {
        LODWORD(pOutAnimCurveID) = 4;
        LODWORD(animsetIndex) = v61;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1596, ASSERT_TYPE_ASSERT, "(unsigned)( lastAnimsetIndex ) < (unsigned)( (1 << 2) )", "lastAnimsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
          __debugbreak();
      }
      BG_PlayerASM_UnpackAnim(v62, v59, &stateIndex, &entryIndex);
      v63 = BG_PlayerASM_GetAnimsetByIndex(v62);
      if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1600, ASSERT_TYPE_ASSERT, "(lastAnimset)", (const char *)&queryFormat, "lastAnimset") )
        __debugbreak();
      if ( !BG_PlayerASM_IsAnimEntryValid(v63, stateIndex, entryIndex) )
      {
LABEL_109:
        v88 = BG_PlayerASM_GetAnimsetByIndex(outAnimsetIndex);
        if ( !v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1648, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
          __debugbreak();
        v89 = v187;
        if ( v187 && BG_PlayerASM_IsAnimEntryValid(v88, outAnimState, outAnimEntry) )
        {
          v90 = outAnimsetIndex;
          v91 = (int)outAnimState;
          if ( outAnimsetIndex >= 4 )
          {
            LODWORD(pOutAnimCurveID) = 4;
            LODWORD(animsetIndex) = outAnimsetIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
              __debugbreak();
            if ( v90 >= 4 )
            {
              LODWORD(pOutAnimCurveID) = 4;
              LODWORD(animsetIndex) = v90;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
                __debugbreak();
            }
          }
          v92 = BG_PlayerASM_GetAnimsetByIndex(v90);
          v93 = v92;
          if ( v92 )
          {
            numStates = v92->numStates;
            if ( (unsigned int)v91 >= numStates )
            {
              LODWORD(pOutAnimCurveID) = numStates;
              LODWORD(animsetIndex) = v91;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
                __debugbreak();
            }
            _RSI = (__int64)&v93->states[v91];
          }
          if ( !_RSI )
          {
            AnimsetNameByIndex = BG_PlayerASM_GetAnimsetNameByIndex(v90);
            v96 = SL_ConvertToString(AnimsetNameByIndex);
            StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(v90, v91);
            v98 = SL_ConvertToString(StateNameFromIndex);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 129, ASSERT_TYPE_ASSERT, "(pState)", "%s\n\tunable to find state %s in animset %s", "pState", v98, v96) )
              __debugbreak();
          }
          v99 = outAnimsetIndex;
          v80 = *(_BYTE *)(_RSI + 100) == 0;
          v100 = outAnimEntry;
          v101 = outAnimState;
          v102 = outSyncRootAnimIndex | !v80;
          LODWORD(outState) = v102;
          inOutGraftAnimIndex = 0;
          inOutAnimIndex = 0;
          inOutSubTreeID[0] = XANIM_SUBTREE_DEFAULT;
          if ( outAnimsetIndex >= 4 )
          {
            LODWORD(pOutAnimCurveID) = 4;
            LODWORD(animsetIndex) = outAnimsetIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
              __debugbreak();
          }
          v103 = BG_PlayerASM_GetAnimsetByIndex(v99);
          v104 = 0;
          BG_Animset_GetAnimIndexFromStateIndexAndEntry(v103, v101, v100, &inOutGraftAnimIndex, &inOutAnimIndex, inOutSubTreeID, NULL);
          SubTreeAnims = XAnimGetSubTreeAnims(v29, inOutSubTreeID[0]);
          if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1666, ASSERT_TYPE_ASSERT, "(animTreeAnims)", (const char *)&queryFormat, "animTreeAnims") )
            __debugbreak();
          if ( inOutGraftAnimIndex >= SubTreeAnims->size )
          {
            v106 = BG_PlayerASM_GetAnimsetNameByIndex(outAnimsetIndex);
            AnimTree = BG_Animset_GetAnimTree(v106);
            v108 = SL_ConvertToString(AnimTree);
            v109 = BG_PlayerASM_GetAnimsetNameByIndex(outAnimsetIndex);
            v110 = SL_ConvertToString(v109);
            Com_Printf(18, "BG_PlayerASM_ApplyState: Bad anim index.  entnum = %d  animset = '%s' animtree = '%s'\n", (unsigned int)v202->number, v110, v108);
            v104 = 0;
          }
          v111 = !v29->children || (flags & 0xB) != 0;
          LOBYTE(v104) = v200->anim_user == 0;
          if ( outResetSyncGroup || v111 )
          {
            v112 = newAnimAlias;
            if ( !newAnimAlias )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1684, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
                __debugbreak();
              v112 = newAnimAlias;
            }
            __asm { vmovss  [rsp+230h+animsetIndex], xmm6 }
            BG_PlayerASM_UpdateAlwaysOn(cia, obj, (const PlayerASM_AnimSlot)outIsRestartSyncNode, outAnimsetIndex, outAnimState, animsetIndexd, IDFromPrimitiveCurveName, (const PlayerCustomAnimHandlerType)v112->u.m_AIAnimsetAlias[5].redAnims, cachedModelNameMap);
            if ( outResetSyncGroup || v111 )
            {
              __asm { vmovaps xmm3, xmm6; blendTime }
              BG_PlayerASM_GraftTrees(obj, outAnimsetIndex, outAnimState, *(float *)&_XMM3, (const scr_string_t)0, v104, IDFromPrimitiveCurveName, cachedModelNameMap);
            }
          }
          __asm { vmovaps xmm3, xmm6; blendTime }
          BG_PlayerASM_GraftAddons(obj, outAnimsetIndex, outAnimState, *(float *)&_XMM3, (const scr_string_t)0, v104, IDFromPrimitiveCurveName, cachedModelNameMap);
          v89 = v187;
          __asm { vmovss  [rsp+230h+lastAnimsetIndex], xmm9 }
          LOBYTE(fmtc) = outIsRestartSyncNode;
          BG_PlayerASM_ApplyExtraAnims(cia, obj, v29, v197, fmtc, outAnimsetIndex, v187, outAnimState, outAnimEntry, *(const float *)&lastAnimsetIndexb, NULL, 0, 1, cachedModelNameMap, flags);
          if ( XAnimIsLeafNode(SubTreeAnims, inOutGraftAnimIndex) || XAnimIsCustomNodeType(SubTreeAnims->entries[inOutGraftAnimIndex].nodeType) )
          {
            outSyncRootAnimIndex = 0;
            outResetSyncGroup = 0;
            LOBYTE(outSyncGroup) = 4;
            outIsRestartSyncNode = 0;
            AnimSyncParameters = BG_PlayerASM_GetAnimSyncParameters(v29, v88, outAnimsetIndex, v89, outAnimState, outAnimEntry, inOutAnimIndex, inOutSubTreeID[0], inOutGraftAnimIndex, v188, packedAnimIndex, stateIndex, entryIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, &outResetSyncGroup, &outSyncGroup, &outIsRestartSyncNode, &outSyncRootAnimIndex);
            v116 = outSyncRootAnimIndex;
            BYTE1(outSyncGroup) = AnimSyncParameters;
            if ( outIsRestartSyncNode && outSyncRootAnimIndex )
            {
              __asm
              {
                vmovss  dword ptr [rsp+230h+pOutAnimCurveID], xmm11
                vmovss  [rsp+230h+animsetIndex], xmm6
                vmovss  dword ptr [rsp+230h+fmt], xmm10
              }
              XAnimSetGoalWeight(obj, inOutAnimIndex, inOutSubTreeID[0], outSyncRootAnimIndex, fmtd, animsetIndexe, pOutAnimCurveIDd, (scr_string_t)0, v104, 1, IDFromPrimitiveCurveName, cachedModelNameMap);
              __asm { vmovss  dword ptr [rsp+230h+fmt], xmm8 }
              XAnimClearChildGoalWeights(v29, inOutAnimIndex, inOutSubTreeID[0], v116, fmte, LINEAR);
            }
            __asm
            {
              vmovss  dword ptr [rsp+230h+pOutAnimCurveID], xmm11
              vmovss  [rsp+230h+animsetIndex], xmm6
              vmovss  dword ptr [rsp+230h+fmt], xmm10
            }
            XAnimSetCompleteGoalWeight(obj, inOutAnimIndex, inOutSubTreeID[0], inOutGraftAnimIndex, fmtf, animsetIndexf, pOutAnimCurveIDe, (scr_string_t)0, v104, v102, IDFromPrimitiveCurveName, cachedModelNameMap);
            XAnimBlendSpace_ToggleUpdate(obj, inOutAnimIndex, inOutSubTreeID[0], inOutGraftAnimIndex, 1);
            if ( outResetSyncGroup )
            {
              v117 = outSyncGroup;
              v118 = inOutGraftAnimIndex;
              v119 = inOutSubTreeID[0];
              v120 = inOutAnimIndex;
              if ( (unsigned __int8)outSyncGroup > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1149, ASSERT_TYPE_ASSERT, "(oldSyncGroup <= XAnimSyncGroupID::COUNT)", (const char *)&queryFormat, "oldSyncGroup <= XAnimSyncGroupID::COUNT") )
                __debugbreak();
              v121 = XAnimGetSubTreeAnims(v29, v119);
              if ( (unsigned int)v118 >= v121->size )
              {
                LODWORD(pOutAnimCurveIDc) = v121->size;
                LODWORD(animsetIndexc) = v118;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1152, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animsetIndexc, pOutAnimCurveIDc) )
                  __debugbreak();
              }
              parent = v121->entries[v118].parent;
              v29 = tree;
              InfoIndex = XAnimGetInfoIndex(tree, v120, v119, parent);
              if ( InfoIndex )
              {
                LOBYTE(v124) = 4;
                XAnimResetSyncGroupChildren(v29, InfoIndex, (const XAnimSyncGroupID)v117, v124);
              }
              _R13 = v201;
              v102 = (int)outState;
            }
            if ( BYTE1(outSyncGroup) )
            {
              if ( v102 && v116 )
              {
                v125 = inOutGraftAnimIndex;
                if ( v116 != inOutGraftAnimIndex )
                  v125 = v116;
                inOutGraftAnimIndex = v125;
              }
              else
              {
                v125 = inOutGraftAnimIndex;
              }
              v126 = inOutSubTreeID[0];
              v127 = inOutAnimIndex;
              v128 = v125 < SubTreeAnims->size;
              v129 = v125 <= SubTreeAnims->size;
              if ( v125 >= SubTreeAnims->size )
              {
                LODWORD(pOutAnimCurveIDc) = SubTreeAnims->size;
                LODWORD(animsetIndexc) = v125;
                v130 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1441, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( animTreeAnims->size )", "animIndex doesn't index animTreeAnims->size\n\t%i not in [0, %i)", animsetIndexc, pOutAnimCurveIDc);
                v128 = 0;
                v129 = !v130;
                if ( v130 )
                  __debugbreak();
              }
              __asm { vcomiss xmm7, xmm8 }
              if ( v128 )
                goto LABEL_192;
              __asm { vcomiss xmm7, xmm10 }
              if ( !v129 )
              {
LABEL_192:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1442, ASSERT_TYPE_ASSERT, "(currentTime >= 0.f && currentTime <= 1.f)", (const char *)&queryFormat, "currentTime >= 0.f && currentTime <= 1.f") )
                  __debugbreak();
              }
              if ( XAnimHasTime(SubTreeAnims, v125) )
              {
                if ( !XAnimIsLeafNode(SubTreeAnims, v125) )
                {
                  v131 = XAnimGetInfoIndex(v29, v127, v126, v125);
                  if ( v131 )
                  {
                    _RAX = XAnimGetAnimInfo(v131);
                    __asm { vmovss  dword ptr [rax+28h], xmm7 }
                  }
                }
                __asm { vmovss  dword ptr [rsp+230h+fmt], xmm7 }
                XAnimSetTreeChildTimes(v29, v127, v126, v125, fmtg);
              }
            }
            v89 = v187;
          }
          v133 = v205;
          v134 = v202;
          BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation(&_R13->movingPlatformPlayerAnim, v202, v205, _R13, &outAngleDela);
          v135 = v200->latestSnapshotTime;
          if ( v135 != _R13->oldFrameSnapshotTime )
          {
            v136 = v206;
            _R13->oldFrameSnapshotTime = v135;
            BGMovingPlatformPlayerAnim::PlayerAnimCachePosition(&_R13->movingPlatformPlayerAnim, v134, _R13, v136, v133);
          }
          __asm
          {
            vmovss  dword ptr [r13+28h], xmm12
            vmovss  dword ptr [r13+2Ch], xmm13
          }
        }
        _R13->animsetIndex = outAnimsetIndex;
        _R13->animationNumber = v89;
        Profile_EndInternal(NULL);
        __asm
        {
          vmovaps xmm9, [rsp+230h+var_88+8]
          vmovaps xmm6, xmmword ptr [rsp+230h+var_58+8]
        }
        goto LABEL_188;
      }
      inOutAnimIndex = 0;
      v64 = XANIM_SUBTREE_DEFAULT;
      if ( !outResetSyncGroup || outIsRestartSyncNode )
        goto LABEL_85;
      if ( v62 >= 4 )
      {
        LODWORD(pOutAnimCurveID) = 4;
        LODWORD(animsetIndex) = v62;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2670, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
          __debugbreak();
      }
      v65 = BG_PlayerASM_GetAnimsetByIndex(v62);
      if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2672, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
        __debugbreak();
      clearStateName = v65->clearStateName;
      if ( clearStateName && v65->clearAliasName && (outState = NULL, v67 = BG_PlayerASM_GetAnimsetByIndex(v188), BG_Animset_GetStateInfoByName(v67, clearStateName, &outState, NULL)) && (v68 = 0i64, (numAnimAliases = outState->numAnimAliases) != 0) )
      {
        animAliases = outState->animAliases;
        while ( animAliases[v68].name != v65->clearAliasName || !animAliases[v68].numAnims )
        {
          v68 = (unsigned int)(v68 + 1);
          if ( (unsigned int)v68 >= numAnimAliases )
            goto LABEL_83;
        }
        index = animAliases[v68].anims->anim.index;
      }
      else
      {
LABEL_83:
        index = 0;
      }
      if ( !index )
      {
LABEL_85:
        v72 = entryIndex;
        v73 = stateIndex;
        v74 = BG_PlayerASM_GetAnimsetByIndex(v188);
        BG_Animset_GetAnimIndexFromStateIndexAndEntry(v74, v73, v72, &pOutAnimIndex, &pOutGraftNode, &pOutAnimSubtreeID, NULL);
        inOutSubTreeID[0] = pOutAnimSubtreeID;
        inOutAnimIndex = pOutAnimIndex;
        inOutGraftAnimIndex = pOutGraftNode;
        XAnimBlendSpace_ToggleUpdate(v27, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, 0);
        BG_PlayerASM_FindParentKnob(v29, &inOutGraftAnimIndex, inOutSubTreeID, &inOutAnimIndex);
        v75 = pOutAnimSubtreeID;
        v76 = pOutAnimIndex;
        v77 = pOutGraftNode;
        v78 = XAnimGetSubTreeAnims(v29, pOutAnimSubtreeID);
        if ( !v78 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1414, ASSERT_TYPE_ASSERT, "(animTreeAnims)", (const char *)&queryFormat, "animTreeAnims") )
          __debugbreak();
        if ( v76 >= v78->size )
        {
          LODWORD(pOutAnimCurveIDb) = v78->size;
          LODWORD(animsetIndexb) = v76;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1415, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( animTreeAnims->size )", "animIndex doesn't index animTreeAnims->size\n\t%i not in [0, %i)", animsetIndexb, pOutAnimCurveIDb) )
            __debugbreak();
        }
        if ( XAnimHasTime(v78, v76) )
        {
          *(double *)&_XMM0 = XAnimGetTime(v29, v77, v75, v76);
          __asm { vmovaps xmm7, xmm0 }
          HasFinished = XAnimHasFinished(v29, v77, v75, v76);
          v80 = !HasFinished;
          if ( HasFinished && (IsLooped = XAnimIsLooped(v78, v76), v80 = !IsLooped, IsLooped) )
          {
            __asm { vmovaps xmm7, xmm8 }
          }
          else
          {
            __asm
            {
              vcomiss xmm7, xmm8
              vcomiss xmm7, xmm10
            }
            if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1431, ASSERT_TYPE_ASSERT, "(time >= 0.f && time <= 1.f)", (const char *)&queryFormat, "time >= 0.f && time <= 1.f") )
              __debugbreak();
          }
        }
        else
        {
          __asm { vmovaps xmm7, xmm8 }
        }
        v64 = inOutSubTreeID[0];
        LODWORD(_RSI) = inOutGraftAnimIndex;
        index = inOutAnimIndex;
      }
      __asm { vmovss  dword ptr [rsp+230h+fmt], xmm6 }
      XAnimClearTreeGoalWeights(v29, _RSI, v64, index, fmtb, 0, v27, IDFromPrimitiveCurveName);
      v82 = v188;
      if ( outResetSyncGroup )
      {
        __asm { vmovaps xmm3, xmm6; blendTime }
        BG_PlayerASM_ClearGraftTrees(v27, v188, stateIndex, *(float *)&_XMM3, IDFromPrimitiveCurveName);
      }
      else
      {
        v84 = entryIndex;
        if ( entryIndex == outAnimEntry )
        {
LABEL_105:
          if ( newAnimAlias )
          {
            _RAX.m_AIAnimsetAlias = (AIAnimsetAlias *)newAnimAlias->u;
            __asm { vmovss  xmm0, dword ptr [rax+40h] }
          }
          else
          {
            __asm { vmovaps xmm0, xmm9 }
          }
          __asm { vmovss  [rsp+230h+lastAnimsetIndex], xmm0 }
          LOBYTE(fmta) = outIsRestartSyncNode;
          BG_PlayerASM_ApplyExtraAnims(cia, v27, v29, v197, fmta, v82, packedAnimIndex, stateIndex, v84, *(const float *)&lastAnimsetIndexa, newAnimAlias, 1, 1, cachedModelNameMap, flags);
          _RSI = 0i64;
          goto LABEL_109;
        }
      }
      __asm { vmovaps xmm3, xmm6; blendTime }
      BG_PlayerASM_ClearGraftAddons(v27, v82, stateIndex, *(float *)&_XMM3, IDFromPrimitiveCurveName);
      v84 = entryIndex;
      goto LABEL_105;
    }
  }
LABEL_189:
  __asm
  {
    vmovaps xmm7, [rsp+230h+var_68+8]
    vmovaps xmm8, [rsp+230h+var_78+8]
  }
}

/*
==============
BG_PlayerASM_ApplyExtraAnims
==============
*/
void BG_PlayerASM_ApplyExtraAnims(characterInfo_t *ci, DObj *obj, XAnimTree *tree, PlayerASM_AnimOverrides *animOverrides, const PlayerASM_AnimSlot slot, unsigned int animsetIndex, const unsigned int packedAnimIndex, unsigned int animStateIndex, unsigned int animEntryIndex, const float aimBlendTime, const AnimsetAlias *newAnimAlias, bool clear, bool animStateHasChanged, XModelNameMap *modelNameMap, const unsigned int flags)
{
  unsigned int v18; 
  const Animset *AnimsetByIndex; 
  const Animset *v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  XModelNameMap *v24; 
  bool v25; 
  float pAlias; 
  AnimsetAlias *ppOutAlias; 
  AnimsetAnim *ppOutAnim; 
  PlayerASM_AnimOverrides *v30; 

  v30 = animOverrides;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1110, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1111, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1112, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v18 = animsetIndex;
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v20 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    v21 = animStateIndex;
    v22 = animEntryIndex;
    if ( BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, animStateIndex, animEntryIndex) )
    {
      ppOutAlias = NULL;
      ppOutAnim = NULL;
      BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(v20, v21, v22, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
      v23 = flags;
      v24 = modelNameMap;
      v25 = clear;
      if ( animStateHasChanged )
        BG_PlayerASM_ApplyAliasAddonAnims(ci, obj, tree, (const PlayerASM_AnimSlot)(unsigned __int8)slot, v18, ppOutAlias, v30, newAnimAlias, clear, modelNameMap, flags);
      BG_PlayerASM_PlayMoveTurnAnim(ci, obj, tree, (const PlayerASM_AnimSlot)(unsigned __int8)slot, v18, packedAnimIndex, ppOutAlias, v25, v24, v23);
      if ( ppOutAlias )
      {
        if ( HIDWORD(ppOutAlias->u.m_AIAnimsetAlias[3].redAnims) )
        {
          __asm
          {
            vmovss  xmm0, [rsp+98h+aimBlendTime]
            vmovss  dword ptr [rsp+98h+pAlias], xmm0
          }
          BG_PlayerASM_ApplyAimAnims(ci, obj, tree, v18, ppOutAlias, pAlias, v25, animStateHasChanged, v24, v23);
        }
      }
    }
  }
}

/*
==============
BG_PlayerASM_CalculateAimScrubTimeAndWeight
==============
*/
void BG_PlayerASM_CalculateAimScrubTimeAndWeight(characterInfo_t *ci, float *outAimConeAngleNormalized, float *outAimCircleAngleNormalized, float *outAimConeAngleNormalizedStrafe, float *outAimCircleAngleNormalizedStrafe)
{
  const dvar_t *v20; 
  BgStatic *ActiveStatics; 
  bool v29; 
  bool v36; 
  char v64; 
  char v65; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float *outAimCircleAngleNormalizeda; 
  vec3_t v3; 

  *(_QWORD *)v3.v = outAimCircleAngleNormalizedStrafe;
  _RBX = ci;
  if ( BG_IsPlayingVehicleOccupancyAnims(ci) )
  {
    AnglesSubtract(&_RBX->vehicleAnimation.viewAngles, &_RBX->playerAngles, &v3);
    AnglesNormalize360(&v3, &v3);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+118h+v3+8]
      vmovss  xmm1, dword ptr [rsp+118h+v3+4]; torsoYawAngle
      vmovss  dword ptr [rsp+118h+fmt], xmm0
      vmovss  xmm0, dword ptr [rsp+118h+v3]; torsoPitchAngle
      vxorps  xmm3, xmm3, xmm3; legsYawAngle
      vxorps  xmm2, xmm2, xmm2; legsPitchAngle
    }
    BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, outAimConeAngleNormalized, outAimCircleAngleNormalized);
    *outAimConeAngleNormalizedStrafe = *outAimConeAngleNormalized;
    *outAimCircleAngleNormalizedStrafe = *outAimCircleAngleNormalized;
  }
  else
  {
    v20 = DCONST_DVARBOOL_playerasm_strafeyaw_smoothing_enabled;
    if ( !DCONST_DVARBOOL_playerasm_strafeyaw_smoothing_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_enabled") )
      __debugbreak();
    __asm { vmovaps [rsp+118h+var_78], xmm8 }
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      __asm
      {
        vmovaps [rsp+118h+var_58], xmm6
        vmovaps [rsp+118h+var_68], xmm7
        vmovaps [rsp+118h+var_88], xmm9
        vmovaps [rsp+118h+var_98], xmm10
        vmovaps [rsp+118h+var_A8], xmm11
        vmovaps [rsp+118h+var_B8], xmm12
      }
      ActiveStatics = BgStatic::GetActiveStatics();
      if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 907, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
        __debugbreak();
      _RBP = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 910, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      _RDI = DCONST_DVARFLT_playerasm_strafeyaw_smoothing_min_factor;
      if ( !DCONST_DVARFLT_playerasm_strafeyaw_smoothing_min_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_min_factor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm11, dword ptr [rdi+28h] }
      _RDI = DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_factor;
      if ( !DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_max_factor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm10, dword ptr [rdi+28h] }
      _RDI = DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_player_speed;
      if ( !DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_player_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_max_player_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
      v29 = BG_PlayerASM_IsMoveForwardAlias(_RBX->legs.animationNumber, _RBX->legs.animsetIndex) != 0;
      __asm
      {
        vmovss  xmm12, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+147Ch]
        vdivss  xmm0, xmm0, xmm6; val
        vmovaps xmm2, xmm12; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      v36 = BG_PlayerASM_IsMoveBackwardAlias(_RBX->legs.animationNumber, _RBX->legs.animsetIndex) != 0;
      __asm { vxorps  xmm7, xmm7, xmm7 }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RDI = DCONST_DVARFLT_playerasm_strafeyaw_smoothing_in;
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+0A38h]
        vmovaps xmm9, xmm0
      }
      if ( !DCONST_DVARFLT_playerasm_strafeyaw_smoothing_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_in") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm8, dword ptr [rdi+28h]
        vsubss  xmm0, xmm12, xmm9
        vmovaps xmm12, [rsp+118h+var_B8]
        vmulss  xmm2, xmm0, xmm11
        vmovaps xmm11, [rsp+118h+var_A8]
        vmulss  xmm1, xmm9, xmm10
        vmovaps xmm10, [rsp+118h+var_98]
        vaddss  xmm9, xmm2, xmm1
      }
      if ( v36 )
      {
        __asm
        {
          vaddss  xmm2, xmm6, cs:__real@43340000
          vsubss  xmm1, xmm6, cs:__real@43340000
          vcmpltss xmm0, xmm7, xmm6
          vblendvps xmm6, xmm2, xmm1, xmm0
        }
      }
      else if ( !v29 )
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerasm_strafeyaw_smoothing_out, "playerasm_strafeyaw_smoothing_out");
        __asm { vmovaps xmm8, xmm0 }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+858h]
        vmulss  xmm2, xmm9, xmm6
        vsubss  xmm0, xmm1, xmm2; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vmovd   xmm1, dword ptr [rbp+4C54h]
        vmovaps xmm9, [rsp+118h+var_88]
        vmovaps xmm6, [rsp+118h+var_58]
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm3, xmm1, cs:__real@3a83126f; deltaTime
        vcomiss xmm3, xmm7
        vmovaps xmm7, [rsp+118h+var_68]
        vmovaps xmm4, xmm0
      }
      if ( !(v64 | v65) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+0A48h]; cur
          vmovaps xmm2, xmm8; rate
        }
        *(double *)&_XMM0 = LinearTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        __asm { vmovaps xmm4, xmm0 }
      }
    }
    else
    {
      __asm { vmovss  xmm4, dword ptr [rbx+858h] }
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+800h]; legsYawAngle
      vmovss  xmm2, dword ptr [rbx+808h]; legsPitchAngle
    }
    outAimCircleAngleNormalizeda = *(float **)v3.v;
    __asm
    {
      vmovss  dword ptr [rbx+0A48h], xmm4
      vmovss  xmm0, dword ptr [rbx+9C8h]
      vmovss  dword ptr [rsp+118h+fmt], xmm0
      vmovss  xmm0, dword ptr [rbx+860h]; torsoPitchAngle
      vmovaps xmm1, xmm4; torsoYawAngle
    }
    BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, outAimConeAngleNormalizedStrafe, outAimCircleAngleNormalizeda);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+9C8h]
      vmovss  xmm3, dword ptr [rbx+800h]; legsYawAngle
      vmovss  xmm2, dword ptr [rbx+808h]; legsPitchAngle
      vmovss  xmm1, dword ptr [rbx+858h]; torsoYawAngle
      vmovss  dword ptr [rsp+118h+fmt], xmm0
      vmovss  xmm0, dword ptr [rbx+860h]; torsoPitchAngle
    }
    BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, outAimConeAngleNormalized, outAimCircleAngleNormalized);
    __asm { vmovaps xmm8, [rsp+118h+var_78] }
  }
}

/*
==============
BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit
==============
*/

void __fastcall BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit(double torsoPitchAngle, double torsoYawAngle, double legsPitchAngle, double legsYawAngle, float playerRollAngle, float *outAimConeAngleNormalized, float *outAimCircleAngleNormalized)
{
  bool v19; 
  bool v20; 
  bool v23; 
  char v46; 
  double v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  vec3_t outProjectedPoint; 
  vec3_t angles; 
  vec3_t planeNormal; 
  vec3_t forward; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _RDI = outAimCircleAngleNormalized;
  _RBX = outAimConeAngleNormalized;
  __asm
  {
    vmovaps xmm10, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm9, xmm1
    vmovaps xmm8, xmm0
  }
  if ( !outAimCircleAngleNormalized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 830, ASSERT_TYPE_ASSERT, "(outAimCircleAngleNormalized != 0)", (const char *)&queryFormat, "outAimCircleAngleNormalized != NULL") )
    __debugbreak();
  v19 = outAimConeAngleNormalized == NULL;
  if ( !outAimConeAngleNormalized )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 831, ASSERT_TYPE_ASSERT, "(outAimConeAngleNormalized != 0)", (const char *)&queryFormat, "outAimConeAngleNormalized != NULL");
    v19 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
  }
  if ( !v19 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+100h+var_D8], xmm0
    }
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 833, ASSERT_TYPE_ASSERT, "( ( legsPitchAngle == 0.0f ) )", "( legsPitchAngle ) = %g", v90);
    v19 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rbp+3Fh+playerRollAngle]
    vmulss  xmm4, xmm8, cs:__real@3ab60b61
    vaddss  xmm1, xmm4, cs:__real@3f000000
    vmovss  dword ptr [rbp+3Fh+angles+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vcomiss xmm1, cs:__real@42b40000
    vmovss  dword ptr [rbp+3Fh+angles], xmm1
  }
  if ( !v19 )
  {
    __asm
    {
      vsubss  xmm0, xmm1, cs:__real@43340000
      vmovss  dword ptr [rbp+3Fh+angles], xmm0
    }
  }
  __asm { vsubss  xmm0, xmm9, xmm10; angle }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm { vmovss  dword ptr [rbp+3Fh+angles+4], xmm0 }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+3Fh+forward+4]
    vmovss  xmm1, dword ptr [rbp+3Fh+forward+8]
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm0, xmm0, xmm0; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  xmm0, cs:__real@3f733333
    vcomiss xmm6, xmm0
  }
  if ( v46 )
  {
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm2, xmm1, xmm1
      vmovss  xmm1, cs:__real@bfc90fdb; min
      vmulss  xmm3, xmm2, xmm6
      vmulss  xmm4, xmm3, cs:__real@3ec83127
      vmovss  xmm2, cs:__real@3fc90fdb; max
      vaddss  xmm0, xmm4, xmm6; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmulss  xmm8, xmm0, cs:__real@3f22f983 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm6, xmm0
      vmulss  xmm1, xmm0, cs:__real@41a00000
      vsubss  xmm2, xmm9, xmm1
      vmaxss  xmm0, xmm2, xmm7
      vsqrtss xmm1, xmm0, xmm0
      vmulss  xmm3, xmm1, cs:__real@3e4f7726
      vsubss  xmm8, xmm9, xmm3
    }
  }
  _RSI = DCONST_DVARFLT_playerasm_maxAimConeAngle;
  if ( !DCONST_DVARFLT_playerasm_maxAimConeAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_maxAimConeAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vcomiss xmm6, xmm7
    vmovss  xmm0, dword ptr [rsi+28h]
    vmulss  xmm1, xmm0, cs:__real@3c360b61
    vminss  xmm8, xmm1, xmm8
  }
  if ( !(v46 | v19) )
  {
    __asm
    {
      vmovss  dword ptr [rbp+3Fh+planeNormal], xmm9
      vmovss  dword ptr [rbp+3Fh+planeNormal+4], xmm7
      vmovss  dword ptr [rbp+3Fh+planeNormal+8], xmm7
    }
    ProjectPointOnPlane(&forward, &planeNormal, &outProjectedPoint);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+3Fh+outProjectedPoint]
      vmovss  xmm5, dword ptr [rbp+3Fh+outProjectedPoint+4]
      vmovss  xmm4, dword ptr [rbp+3Fh+outProjectedPoint+8]
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm2, xmm4, xmm1
      vmovss  [rsp+100h+var_C0], xmm2
      vmulss  xmm0, xmm5, xmm1
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbp+3Fh+outProjectedPoint], xmm2
      vmovss  dword ptr [rbp+3Fh+outProjectedPoint+4], xmm3
      vmovss  dword ptr [rbp+3Fh+outProjectedPoint+8], xmm7
    }
    if ( (v91 & 0x7F800000) == 2139095040 )
      goto LABEL_35;
    __asm { vmovss  [rsp+100h+var_C0], xmm3 }
    if ( (v92 & 0x7F800000) == 2139095040 )
    {
LABEL_35:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 880, ASSERT_TYPE_SANITY, "( !IS_NAN( ( proj )[0] ) && !IS_NAN( ( proj )[1] ) && !IS_NAN( ( proj )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( proj )[0] ) && !IS_NAN( ( proj )[1] ) && !IS_NAN( ( proj )[2] )") )
        __debugbreak();
    }
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&outProjectedPoint);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3b360b61; X
      vmovaps xmm1, xmm9; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  [rsp+100h+var_C0], xmm6
      vmovaps xmm7, xmm0
    }
    if ( (v93 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 886, ASSERT_TYPE_SANITY, "( !IS_NAN( yaw ) )", (const char *)&queryFormat, "!IS_NAN( yaw )") )
      __debugbreak();
  }
  __asm { vmovss  [rsp+100h+var_C0], xmm8 }
  if ( (v94 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 889, ASSERT_TYPE_SANITY, "( !IS_NAN( aimWeight ) )", (const char *)&queryFormat, "!IS_NAN( aimWeight )") )
    __debugbreak();
  __asm { vmovss  [rsp+100h+var_C0], xmm7 }
  if ( (v95 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 890, ASSERT_TYPE_SANITY, "( !IS_NAN( aimDir ) )", (const char *)&queryFormat, "!IS_NAN( aimDir )") )
    __debugbreak();
  __asm
  {
    vmovss  dword ptr [rbx], xmm7
    vmovss  dword ptr [rdi], xmm8
  }
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
BG_PlayerASM_CheckAnimsetIndex
==============
*/
void BG_PlayerASM_CheckAnimsetIndex(const entityState_t *es, characterInfo_t *ci, PlayerASM_AnimSlot slot)
{
  char v3; 
  __int64 v6; 
  char *v7; 
  unsigned int Animset; 
  unsigned int v9; 
  const BgStatic *ActiveStatics; 
  DObj *objID; 
  float fmt; 
  __int64 forceBlendTime; 

  v3 = slot;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2569, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v6 = 2048i64;
  if ( v3 )
    v6 = 2136i64;
  v7 = (char *)ci + v6;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2573, ASSERT_TYPE_ASSERT, "(lf)", (const char *)&queryFormat, "lf") )
    __debugbreak();
  Animset = BG_PlayerASM_GetAnimset(ci);
  v9 = Animset;
  if ( Animset >= 4 )
  {
    LODWORD(forceBlendTime) = Animset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2576, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", forceBlendTime, 4) )
      __debugbreak();
  }
  if ( *((_DWORD *)v7 + 9) != v9 )
  {
    *((_DWORD *)v7 + 9) = v9;
    *((_DWORD *)v7 + 5) = 0;
    *((_QWORD *)v7 + 3) = 0i64;
    if ( !v3 )
    {
      if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1315, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      ActiveStatics = BgStatic::GetActiveStatics();
      objID = BG_GetDObj(ActiveStatics, es->number);
      if ( objID )
      {
        if ( objID->tree )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3d4ccccd
            vmovss  dword ptr [rsp+48h+fmt], xmm0
          }
          XAnimClearTreeGoalWeights(objID->tree, 0, XANIM_SUBTREE_DEFAULT, 0, fmt, 1, objID, LINEAR);
        }
      }
    }
  }
}

/*
==============
BG_PlayerASM_ClearGraftAddons
==============
*/

void __fastcall BG_PlayerASM_ClearGraftAddons(DObj *obj, const unsigned int animsetIndex, unsigned int stateIndex, double blendTime, const XAnimCurveID curveID)
{
  __int64 v7; 
  const Animset *AnimsetByIndex; 
  const Animset *v11; 
  unsigned int numStates; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v19; 
  XAnimCurveID v20; 
  __int64 v21; 
  scr_string_t v22; 
  const Animset *v23; 
  __int64 v26; 
  __int64 v27; 
  AnimsetState *outState; 
  int pOutStateIndex; 

  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  v7 = (int)stateIndex;
  __asm { vmovaps xmm6, xmm3 }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 378, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( animsetIndex >= 4 )
  {
    LODWORD(v26) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 379, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v26, 4) )
      __debugbreak();
  }
  outState = NULL;
  if ( animsetIndex >= 4 )
  {
    LODWORD(v27) = 4;
    LODWORD(v26) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v11 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v7 >= numStates )
    {
      LODWORD(v27) = numStates;
      LODWORD(v26) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    v13 = 0;
    v14 = 0;
    v15 = (__int64)&v11->states[v7];
    v16 = *(_DWORD *)(v15 + 16);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v15 + 8) + 80i64 * v14;
        if ( v13 + *(_DWORD *)(v17 + 16) > v13 )
          break;
        ++v14;
        v13 += *(_DWORD *)(v17 + 16);
        if ( v14 >= v16 )
        {
          __asm { vmovaps xmm6, [rsp+78h+var_38] }
          return;
        }
      }
      v19 = 0;
      if ( *(_DWORD *)(v17 + 48) )
      {
        v20 = curveID;
        do
        {
          v21 = *(_QWORD *)(v17 + 40);
          outState = NULL;
          v22 = *(_DWORD *)(v21 + 4i64 * v19);
          v23 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
          if ( BG_Animset_GetStateInfoByName(v23, v22, &outState, &pOutStateIndex) )
          {
            __asm { vmovaps xmm3, xmm6; blendTime }
            BG_PlayerASM_ClearGraftTrees(obj, animsetIndex, pOutStateIndex, *(float *)&_XMM3, v20);
          }
          ++v19;
        }
        while ( v19 < *(_DWORD *)(v17 + 48) );
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
BG_PlayerASM_ClearGraftTrees
==============
*/

void __fastcall BG_PlayerASM_ClearGraftTrees(DObj *obj, const unsigned int animsetIndex, unsigned int stateIndex, double blendTime, const XAnimCurveID curveID)
{
  __int64 v7; 
  unsigned int v10; 
  const Animset *AnimsetByIndex; 
  const Animset *v12; 
  unsigned int numStates; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  XAnimSubTreeID v18; 
  unsigned int v19; 
  float fmt; 
  __int64 v22; 
  __int64 v23; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  v7 = (int)stateIndex;
  __asm { vmovaps xmm6, xmm3 }
  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 317, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 318, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v10 = 0;
  if ( animsetIndex >= 4 )
  {
    LODWORD(v23) = 4;
    LODWORD(v22) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v12 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v7 >= numStates )
    {
      LODWORD(v23) = numStates;
      LODWORD(v22) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v14 = (__int64)&v12->states[v7];
    if ( *(_DWORD *)(v14 + 32) )
    {
      do
      {
        v15 = *(_QWORD *)(v14 + 24) + 56i64 * v10;
        if ( *(_DWORD *)(v15 + 4) )
        {
          v16 = *(_QWORD *)(v15 + 40);
          v17 = *(_QWORD *)(v15 + 32);
          __asm { vmovss  dword ptr [rsp+68h+fmt], xmm6 }
          if ( v16 )
          {
            v18 = *(_WORD *)(v16 + 60);
            v19 = 1;
            LODWORD(v17) = (unsigned __int16)v17;
          }
          else
          {
            v18 = XANIM_SUBTREE_DEFAULT;
            v19 = (unsigned __int16)v17;
            LODWORD(v17) = 0;
          }
          XAnimClearGoalWeight(obj->tree, v17, v18, v19, fmt, curveID);
        }
        ++v10;
      }
      while ( v10 < *(_DWORD *)(v14 + 32) );
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
BG_PlayerASM_DebugOverrideAnimTimersSlot
==============
*/

void __fastcall BG_PlayerASM_DebugOverrideAnimTimersSlot(DObj *obj, const characterInfo_t *ci, const PlayerASM_AnimSlot slot, double time)
{
  unsigned __int8 v6; 
  XAnimTree *Tree; 
  unsigned int v10; 
  const Animset *AnimsetByIndex; 
  int v12; 
  int v13; 
  const Animset *v14; 
  unsigned int v16; 
  unsigned int v17; 
  XAnimSubTreeID v18; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v23; 
  __int64 v24; 
  unsigned __int16 parent; 
  unsigned __int16 InfoIndex; 
  float outAnimEntry; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  XAnimSubTreeID v32[2]; 
  unsigned int pOutAnimIndex; 
  unsigned int entryIndex; 
  unsigned int outAnimState; 
  unsigned int outAnimsetIndex; 
  unsigned int pOutGraftNode[3]; 

  __asm { vmovaps [rsp+70h+var_10], xmm6 }
  outAnimState = 0;
  v6 = slot;
  entryIndex = 0;
  pOutAnimIndex = 0;
  pOutGraftNode[0] = 0;
  outAnimsetIndex = 0;
  v32[0] = XANIM_SUBTREE_DEFAULT;
  __asm { vmovaps xmm6, xmm3 }
  Tree = DObjGetTree(obj);
  if ( Tree )
  {
    v10 = BG_PlayerASM_UnpackAnimFromCi(ci, (const PlayerASM_AnimSlot)v6, &outAnimsetIndex, &outAnimState, &entryIndex);
    if ( v10 )
    {
      BG_PlayerASM_UnpackAnim(outAnimsetIndex, v10, &outAnimState, &entryIndex);
      AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(outAnimsetIndex);
      if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1354, ASSERT_TYPE_ASSERT, "(lastAnimset)", (const char *)&queryFormat, "lastAnimset") )
        __debugbreak();
      if ( BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, outAnimState, entryIndex) )
      {
        v12 = entryIndex;
        v13 = outAnimState;
        v14 = BG_PlayerASM_GetAnimsetByIndex(outAnimsetIndex);
        BG_Animset_GetAnimIndexFromStateIndexAndEntry(v14, v13, v12, &pOutAnimIndex, pOutGraftNode, v32, NULL);
        __asm { vmovss  xmm2, cs:__real@3f7ff972; max }
        v16 = pOutAnimIndex;
        v17 = pOutGraftNode[0];
        v18 = v32[0];
        __asm
        {
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm0, xmm6; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
        SubTreeAnims = XAnimGetSubTreeAnims(Tree, v18);
        if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1371, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
          __debugbreak();
        if ( XAnimIsLeafNode(SubTreeAnims, pOutAnimIndex) )
        {
          v23 = pOutAnimIndex;
          if ( pOutAnimIndex >= SubTreeAnims->size )
          {
            LODWORD(pOutAnimCurveID) = SubTreeAnims->size;
            LODWORD(pOutAnimSubtreeID) = pOutAnimIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1376, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
              __debugbreak();
            v23 = pOutAnimIndex;
          }
          v24 = 2 * (v23 + 5i64);
          parent = SubTreeAnims->entries[v23].parent;
          if ( parent )
          {
            if ( parent >= SubTreeAnims->size )
            {
              LODWORD(pOutAnimCurveID) = SubTreeAnims->size;
              LODWORD(pOutAnimSubtreeID) = parent;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1380, ASSERT_TYPE_ASSERT, "(unsigned)( anim->parent ) < (unsigned)( anims->size )", "anim->parent doesn't index anims->size\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
                __debugbreak();
            }
            if ( ((__int64)SubTreeAnims->entries[*((unsigned __int16 *)&SubTreeAnims->initialized + 4 * v24)].parts & 3) != 0 )
              v16 = *((unsigned __int16 *)&SubTreeAnims->initialized + 4 * v24);
          }
        }
        if ( XAnimHasTime(SubTreeAnims, v16) && !XAnimIsLeafNode(SubTreeAnims, v16) )
        {
          InfoIndex = XAnimGetInfoIndex(Tree, v17, v18, v16);
          if ( InfoIndex )
          {
            _RAX = XAnimGetAnimInfo(InfoIndex);
            __asm { vmovss  dword ptr [rax+28h], xmm6 }
          }
        }
        __asm { vmovss  dword ptr [rsp+70h+outAnimEntry], xmm6 }
        XAnimSetTreeChildTimes(Tree, v17, v18, v16, outAnimEntry);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+70h+var_10] }
}

/*
==============
BG_PlayerASM_DebugOverrideParameters
==============
*/
void BG_PlayerASM_DebugOverrideParameters(DObj *obj, characterInfo_t *ci)
{
  const dvar_t *v2; 
  const dvar_t *v5; 
  PlayerASM_DebugOverrideDvars *v6; 
  __int64 v7; 
  const dvar_t *v8; 
  unsigned __int16 i; 
  const dvar_t **dvar; 
  unsigned __int8 type; 

  v2 = DCONST_DVARINT_playerasm_debug_override_entnum;
  if ( !DCONST_DVARINT_playerasm_debug_override_entnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_entnum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( ci->entityNum == v2->current.integer )
  {
    v5 = DVARBOOL_playerasm_debug_override_reset;
    if ( !DVARBOOL_playerasm_debug_override_reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_debug_override_reset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = s_playerASMDebugOverrideDvars;
    if ( v5->current.enabled )
    {
      v7 = 65i64;
      do
      {
        if ( v6->dvar )
        {
          v8 = *v6->dvar;
          Dvar_Reset(v8, DVAR_SOURCE_DEVGUI);
          Dvar_ClearModified(v8);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
      Dvar_SetString_Internal(DVARSTR_playerasm_debug_override_main_state_name, (const char *)&queryFormat.fmt + 3);
      Dvar_SetString_Internal(DVARSTR_playerasm_debug_override_sub_state_name, (const char *)&queryFormat.fmt + 3);
      __asm { vmovss  xmm1, cs:__real@bf800000; value }
      Dvar_SetFloat_Internal(DVARFLT_playerasm_debug_override_main_state_time, *(float *)&_XMM1);
      __asm { vmovss  xmm1, cs:__real@bf800000; value }
      Dvar_SetFloat_Internal(DVARFLT_playerasm_debug_override_sub_state_time, *(float *)&_XMM1);
      Dvar_SetBool_Internal(DVARBOOL_playerasm_debug_override_reset, 0);
    }
    else
    {
      for ( i = 0; i < 0x41u; ++i )
      {
        dvar = s_playerASMDebugOverrideDvars[i].dvar;
        if ( dvar )
        {
          _RAX = *dvar;
          if ( _RAX->modified )
          {
            type = _RAX->type;
            if ( type == 1 )
            {
              __asm { vmovss  xmm2, dword ptr [rax+28h]; value }
              XAnimSetFloatGameParameterByIndex(obj, i, *(float *)&_XMM2);
            }
            else if ( type )
            {
              if ( type == 3 )
              {
                XAnimSetVec3GameParameterByIndex(obj, i, (const vec3_t *)&_RAX->current);
              }
              else if ( i == 56 )
              {
                XAnimSetByteGameParameterByIndex(obj, 0x38u, _RAX->current.color[0]);
              }
              else if ( type == 5 )
              {
                XAnimSetIntGameParameterByIndex(obj, i, _RAX->current.integer);
              }
            }
            else
            {
              XAnimSetBoolGameParameterByIndex(obj, i, _RAX->current.enabled);
            }
          }
        }
      }
    }
  }
}

/*
==============
BG_PlayerASM_FindParentKnob
==============
*/
void BG_PlayerASM_FindParentKnob(const XAnimTree *tree, unsigned int *inOutGraftAnimIndex, XAnimSubTreeID *inOutSubTreeID, unsigned int *inOutAnimIndex)
{
  unsigned int v9; 
  XAnimSubTreeID v10; 
  unsigned int v11; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v13; 
  unsigned __int16 parent; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  char v19; 

  if ( !inOutSubTreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 520, ASSERT_TYPE_ASSERT, "(inOutSubTreeID)", (const char *)&queryFormat, "inOutSubTreeID") )
    __debugbreak();
  if ( !inOutAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 521, ASSERT_TYPE_ASSERT, "(inOutAnimIndex)", (const char *)&queryFormat, "inOutAnimIndex") )
    __debugbreak();
  v9 = *inOutAnimIndex;
  v10 = *inOutSubTreeID;
  v11 = *inOutGraftAnimIndex;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 804, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 805, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( v11 && v10 == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 806, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", "%s\n\tInvalid subTreeID.", "!graftAnimIndex || subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
    __debugbreak();
  if ( v11 >= tree->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 807, ASSERT_TYPE_ASSERT, "( graftAnimIndex ) < ( tree->anims->size )", "%s < %s\n\t%i, %i", "graftAnimIndex", "tree->anims->size", v11, tree->anims->size) )
    __debugbreak();
  if ( v11 )
  {
    if ( !XAnimIsGraftNode(tree->anims, v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 808, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || XAnimIsGraftNode( tree->anims, graftAnimIndex ))", "%s\n\tInvalid graft node", "!graftAnimIndex || XAnimIsGraftNode( tree->anims, graftAnimIndex )") )
      __debugbreak();
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 809, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || animIndex != 0)", "%s\n\tCannot use anim index 0 (root) from grafted subtree.", "!graftAnimIndex || animIndex != 0") )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, *inOutGraftAnimIndex, *inOutSubTreeID, *inOutAnimIndex);
  v13 = InfoIndex;
  if ( InfoIndex )
  {
    parent = GetAnimInfo(InfoIndex)->parent;
    if ( parent )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm6
        vxorps  xmm6, xmm6, xmm6
      }
      while ( 1 )
      {
        AnimInfo = GetAnimInfo(parent);
        if ( XAnimGetNumChildInfos(tree, AnimInfo) > 1u )
        {
          children = AnimInfo->children;
          if ( children )
            break;
        }
LABEL_35:
        *inOutAnimIndex = AnimInfo->animIndex;
        v13 = parent;
        *inOutSubTreeID = AnimInfo->subTreeID;
        *inOutGraftAnimIndex = XAnimGetGraftAnimIndex(parent);
        parent = AnimInfo->parent;
        if ( !parent )
          goto LABEL_36;
      }
      while ( 1 )
      {
        _RAX = GetAnimInfo(children);
        __asm { vcomiss xmm6, dword ptr [rax+38h] }
        if ( v19 )
        {
          if ( children != v13 )
            break;
        }
        children = _RAX->next;
        if ( !children )
          goto LABEL_35;
      }
LABEL_36:
      __asm { vmovaps xmm6, [rsp+88h+var_38] }
    }
  }
}

/*
==============
BG_PlayerASM_FindWeaponPackageAnim
==============
*/
__int64 BG_PlayerASM_FindWeaponPackageAnim(const characterInfo_t *ci, const XAnimTree *tree, const PlayerCustomAnimHandlerType animType, const XAnimParts *parts, int *outParentNode)
{
  bool v9; 
  signed int WeaponPackageKnobNode; 
  __int64 v11; 
  XAnim_s *anims; 
  unsigned int v13; 
  unsigned int ChildAt; 
  __int64 v15; 
  const dvar_t *v16; 
  __int64 v18; 
  __int64 v19; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2230, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !outParentNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2231, ASSERT_TYPE_ASSERT, "(outParentNode)", (const char *)&queryFormat, "outParentNode") )
    __debugbreak();
  if ( animType )
  {
    if ( (unsigned __int8)animType < PLAYER_CUSTOM_ANIM_HANDLER_COUNT )
      goto LABEL_13;
    LODWORD(v18) = (unsigned __int8)animType;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2233, ASSERT_TYPE_ASSERT, "(unsigned)( animType ) < (unsigned)( PLAYER_CUSTOM_ANIM_HANDLER_COUNT )", "animType doesn't index PLAYER_CUSTOM_ANIM_HANDLER_COUNT\n\t%i not in [0, %i)", v18, 12);
  }
  else
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2232, ASSERT_TYPE_ASSERT, "(animType != PLAYER_CUSTOM_ANIM_HANDLER_NONE)", (const char *)&queryFormat, "animType != PLAYER_CUSTOM_ANIM_HANDLER_NONE");
  }
  if ( v9 )
    __debugbreak();
LABEL_13:
  *outParentNode = -1;
  if ( !parts )
    return 0xFFFFFFFFi64;
  if ( !tree )
    return 0xFFFFFFFFi64;
  if ( !tree->anims )
    return 0xFFFFFFFFi64;
  WeaponPackageKnobNode = BG_PlayerASM_FindWeaponPackageKnobNode(ci, animType);
  v11 = WeaponPackageKnobNode;
  if ( WeaponPackageKnobNode <= 0 )
    return 0xFFFFFFFFi64;
  anims = tree->anims;
  if ( XAnimIsLeafNode(anims, WeaponPackageKnobNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2248, ASSERT_TYPE_ASSERT, "(!XAnimIsLeafNode( anims, parentNode ))", "%s\n\tBG_PlayerASM_FindWeaponPackageAnim: animation asset found but a node is expected.", "!XAnimIsLeafNode( anims, parentNode )") )
    __debugbreak();
  v13 = 0;
  if ( !anims->entries[v11].numAnims )
  {
LABEL_27:
    v16 = DCONST_DVARBOOL_playerasm_warn_missing_finger_anims;
    if ( !DCONST_DVARBOOL_playerasm_warn_missing_finger_anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_warn_missing_finger_anims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
      Com_PrintWarning(19, "BG_PlayerASM_FindWeaponPackageAnim(): Finger pose animation '%s' not found in anim tree '%s'. Add it to the .atr file or the ASM archetype.\n", parts->name, anims->debugName);
    return 0xFFFFFFFFi64;
  }
  while ( 1 )
  {
    ChildAt = XAnimGetChildAt(anims, v11, v13);
    v15 = ChildAt;
    if ( ChildAt >= anims->size )
    {
      LODWORD(v19) = anims->size;
      LODWORD(v18) = ChildAt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2253, ASSERT_TYPE_ASSERT, "(unsigned)( childAnimIndex ) < (unsigned)( anims->size )", "childAnimIndex doesn't index anims->size\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( XAnimIsLeafNode(anims, v15) && anims->entries[v15].parts == parts )
      break;
    if ( ++v13 >= anims->entries[v11].numAnims )
      goto LABEL_27;
  }
  *outParentNode = v11;
  return (unsigned int)v15;
}

/*
==============
BG_PlayerASM_FindWeaponPackageKnobNode
==============
*/
__int64 BG_PlayerASM_FindWeaponPackageKnobNode(const characterInfo_t *ci, const PlayerCustomAnimHandlerType animType)
{
  bool v4; 
  unsigned int AnimsetIndexBySuit; 
  unsigned int v6; 
  const Animset *AnimsetByIndex; 
  scr_string_t alwaysOnStateName; 
  const Animset *v9; 
  AnimsetState *v10; 
  __int64 v11; 
  unsigned int numAnimAliases; 
  AnimsetAlias *animAliases; 
  __int64 v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v18; 
  AnimsetState *outState; 
  int pOutStateIndex; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2196, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( animType )
  {
    if ( (unsigned __int8)animType < PLAYER_CUSTOM_ANIM_HANDLER_COUNT )
      goto LABEL_10;
    LODWORD(v17) = (unsigned __int8)animType;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2198, ASSERT_TYPE_ASSERT, "(unsigned)( animType ) < (unsigned)( PLAYER_CUSTOM_ANIM_HANDLER_COUNT )", "animType doesn't index PLAYER_CUSTOM_ANIM_HANDLER_COUNT\n\t%i not in [0, %i)", v17, 12);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2197, ASSERT_TYPE_ASSERT, "(animType != PLAYER_CUSTOM_ANIM_HANDLER_NONE)", (const char *)&queryFormat, "animType != PLAYER_CUSTOM_ANIM_HANDLER_NONE");
  }
  if ( v4 )
    __debugbreak();
LABEL_10:
  AnimsetIndexBySuit = BG_PlayerASM_GetAnimsetIndexBySuit(ci->suitIndex);
  v6 = AnimsetIndexBySuit;
  if ( AnimsetIndexBySuit >= 4 )
  {
    LODWORD(v18) = 4;
    LODWORD(v17) = AnimsetIndexBySuit;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2201, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v6);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2204, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  alwaysOnStateName = AnimsetByIndex->alwaysOnStateName;
  v9 = BG_PlayerASM_GetAnimsetByIndex(v6);
  if ( !BG_Animset_GetStateInfoByName(v9, alwaysOnStateName, &outState, &pOutStateIndex) )
    return 0xFFFFFFFFi64;
  v10 = outState;
  v11 = 0i64;
  numAnimAliases = outState->numAnimAliases;
  if ( !numAnimAliases )
    return 0xFFFFFFFFi64;
  animAliases = outState->animAliases;
  while ( LOBYTE(animAliases[v11].u.m_AIAnimsetAlias[5].redAnims) != animType )
  {
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= numAnimAliases )
      return 0xFFFFFFFFi64;
  }
  v15 = v11;
  if ( !animAliases[v11].numAnims )
  {
    v16 = SL_ConvertToString(animAliases[v11].name);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C880C0, 1131i64, v16);
    v10 = outState;
  }
  return v10->animAliases[v15].anims->anim.index;
}

/*
==============
BG_PlayerASM_GetAlwaysOnState
==============
*/
bool BG_PlayerASM_GetAlwaysOnState(const unsigned int animsetIndex, int *pOutAlwaysOnState)
{
  const Animset *AnimsetByIndex; 
  scr_string_t alwaysOnStateName; 
  const Animset *v6; 
  bool result; 
  AnimsetState *outState; 

  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2652, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2654, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  alwaysOnStateName = AnimsetByIndex->alwaysOnStateName;
  result = 0;
  if ( alwaysOnStateName )
  {
    outState = NULL;
    v6 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
    if ( BG_Animset_GetStateInfoByName(v6, alwaysOnStateName, &outState, pOutAlwaysOnState) )
      return 1;
  }
  return result;
}

/*
==============
BG_PlayerASM_GetAnimFromIndex
==============
*/
scr_anim_t BG_PlayerASM_GetAnimFromIndex(const unsigned int animsetIndex, const scr_string_t stateName, int index)
{
  const Animset *AnimsetByIndex; 

  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  return BG_Animset_GetAnimFromIndex(AnimsetByIndex, stateName, index);
}

/*
==============
BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry
==============
*/
void BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry(const unsigned int animsetIndex, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, const XAnim_s **pSubtreeAnims)
{
  const Animset *AnimsetByIndex; 

  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(AnimsetByIndex, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pSubtreeAnims);
}

/*
==============
BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry
==============
*/
void BG_PlayerASM_GetAnimIndexFromStateIndexAndEntry(const unsigned int animsetIndex, int stateIndex, int entryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftNode, XAnimSubTreeID *pOutAnimSubtreeID, XAnimCurveID *pOutAnimCurveID)
{
  const Animset *AnimsetByIndex; 

  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(AnimsetByIndex, stateIndex, entryIndex, pOutAnimIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimCurveID);
}

/*
==============
BG_PlayerASM_GetAnimSyncParameters
==============
*/
char BG_PlayerASM_GetAnimSyncParameters(XAnimTree *tree, const Animset *pAnimset, const unsigned int animsetIndex, const unsigned int packedAnimIndex, const unsigned int animStateIndex, const unsigned int animEntryIndex, const unsigned int graftNodeIndex, const XAnimSubTreeID subtreeID, const unsigned int animIndex, const unsigned int lastAnimsetIndex, const unsigned int lastPackedAnimIndex, const unsigned int lastAnimStateIndex, const unsigned int lastAnimEntryIndex, const unsigned int lastGraftNodeIndex, const XAnimSubTreeID lastSubtreeID, const unsigned int lastAnimIndex, bool *outResetSyncGroup, XAnimSyncGroupID *outSyncGroup, bool *outIsRestartSyncNode, unsigned int *outSyncRootAnimIndex)
{
  const XAnim_s *v21; 
  const XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  unsigned int v31; 
  const char *AnimDebugName; 
  const char *v33; 
  bool v34; 
  bool v35; 
  bool v36; 
  bool v37; 
  bool IsAnimRestart; 
  unsigned int v39; 
  unsigned __int16 InfoIndex; 
  bool v42; 
  bool v43; 
  XAnim_s **outSyncRootAnims; 
  XAnimSyncGroupID outSyncGroupID; 
  unsigned int outSyncRoot; 
  unsigned int v49; 
  XAnim_s *v50; 
  XAnim_s *v51; 
  char subtreeIDa; 
  char lastPackedAnimIndexa; 
  bool lastSubtreeIDa; 

  v21 = NULL;
  LOBYTE(outSyncGroupID) = 4;
  v51 = NULL;
  v50 = NULL;
  *outResetSyncGroup = 0;
  v49 = 0;
  outSyncRoot = 0;
  BYTE1(outSyncGroupID) = 4;
  *(_BYTE *)outSyncGroup = 4;
  *outIsRestartSyncNode = 0;
  *outSyncRootAnimIndex = 0;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1213, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( animsetIndex >= 4 )
  {
    LODWORD(outSyncRootAnims) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1214, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", outSyncRootAnims, 4) )
      __debugbreak();
  }
  Anims = BG_PlayerASM_GetAnims(animsetIndex);
  if ( !Anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1217, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( subtreeID )
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subtreeID);
  else
    SubTreeAnims = NULL;
  if ( lastSubtreeID )
    v21 = XAnimGetSubTreeAnims(tree, lastSubtreeID);
  v27 = packedAnimIndex && BG_PlayerASM_IsSyncAnim(Anims, graftNodeIndex, SubTreeAnims, animIndex, &outSyncGroupID, (const XAnim_s **)&v50, &outSyncRoot);
  v28 = lastPackedAnimIndex && BG_PlayerASM_IsSyncAnim(Anims, lastGraftNodeIndex, v21, lastAnimIndex, (XAnimSyncGroupID *)((char *)&outSyncGroupID + 1), (const XAnim_s **)&v51, &v49);
  v29 = v27 && (_BYTE)outSyncGroupID != 4;
  if ( !v28 || (subtreeIDa = 1, BYTE1(outSyncGroupID) == 4) )
    subtreeIDa = 0;
  v30 = XAnimIsLeafNode(Anims, animIndex) != 0;
  lastSubtreeIDa = v30;
  if ( lastAnimStateIndex == -1 || animStateIndex == -1 || (lastPackedAnimIndexa = 1, lastAnimStateIndex != animStateIndex) )
    lastPackedAnimIndexa = 0;
  if ( !v27 || v30 )
    goto LABEL_39;
  v31 = outSyncRoot;
  if ( outSyncRoot && outSyncRoot != animIndex )
  {
    AnimDebugName = XAnimGetAnimDebugName(Anims, outSyncRoot);
    v33 = XAnimGetAnimDebugName(Anims, animIndex);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C87250, 6073i64, v33, AnimDebugName);
    v30 = lastSubtreeIDa;
LABEL_39:
    v31 = outSyncRoot;
  }
  if ( v29 && !v30 )
  {
    *outResetSyncGroup = 1;
    *(_BYTE *)outSyncGroup = outSyncGroupID;
  }
  v34 = v27 && v28;
  v35 = v31 == v49;
  v36 = v51 == v50;
  v37 = v34 && !v29 && !subtreeIDa && v31 == v49;
  IsAnimRestart = BG_PlayerASM_IsAnimRestart(pAnimset, animStateIndex, animEntryIndex, lastAnimStateIndex, lastAnimEntryIndex);
  if ( !lastSubtreeIDa )
  {
    if ( !IsAnimRestart )
      goto LABEL_82;
LABEL_77:
    if ( v34 )
    {
      *outIsRestartSyncNode = v36 && v35;
      goto LABEL_74;
    }
    goto LABEL_82;
  }
  if ( IsAnimRestart )
    goto LABEL_77;
  if ( v34 )
  {
LABEL_82:
    v39 = outSyncRoot;
    goto LABEL_83;
  }
  v39 = outSyncRoot;
  if ( outSyncRoot )
  {
    if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1171, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1172, ASSERT_TYPE_ASSERT, "(syncRootAnimIndex)", (const char *)&queryFormat, "syncRootAnimIndex") )
      __debugbreak();
    if ( !animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1173, ASSERT_TYPE_ASSERT, "(animIndex)", (const char *)&queryFormat, "animIndex") )
      __debugbreak();
    InfoIndex = XAnimGetInfoIndex(tree, 0, XANIM_SUBTREE_DEFAULT, v39);
    if ( InfoIndex )
    {
      _RBX = XAnimGetAnimInfo(InfoIndex);
      v42 = _RBX == NULL;
      if ( !_RBX )
      {
        v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1179, ASSERT_TYPE_ASSERT, "(rootInfo)", (const char *)&queryFormat, "rootInfo");
        v42 = !v43;
        if ( v43 )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [rbx+28h]
      }
      if ( !v42 && _RBX->children && !XAnimGetInfoIndex(tree, 0, XANIM_SUBTREE_DEFAULT, animIndex) )
      {
        *outIsRestartSyncNode = 1;
LABEL_74:
        *outSyncRootAnimIndex = outSyncRoot;
        return 0;
      }
    }
    goto LABEL_82;
  }
LABEL_83:
  if ( v37 && lastSubtreeIDa )
  {
    *outSyncRootAnimIndex = v39;
    return 1;
  }
  else
  {
    if ( !v29 || !subtreeIDa || !v36 )
      return 0;
    if ( lastPackedAnimIndexa )
      return (_BYTE)outSyncGroupID == BYTE1(outSyncGroupID);
    else
      return BYTE1(outSyncGroupID) == (_BYTE)outSyncGroupID && !BG_PlayerASM_IsClearSyncGroupAlias(packedAnimIndex, animsetIndex);
  }
}

/*
==============
BG_PlayerASM_GetClearKnob
==============
*/
__int64 BG_PlayerASM_GetClearKnob(const unsigned int animsetIndex)
{
  const Animset *AnimsetByIndex; 
  scr_string_t clearStateName; 
  int v4; 
  const Animset *v5; 
  unsigned int numAnimAliases; 
  AnimsetAlias *animAliases; 
  AnimsetState *outState; 

  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2670, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2672, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
    __debugbreak();
  clearStateName = AnimsetByIndex->clearStateName;
  if ( !clearStateName )
    return 0i64;
  if ( !AnimsetByIndex->clearAliasName )
    return 0i64;
  v4 = 0;
  outState = NULL;
  v5 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !BG_Animset_GetStateInfoByName(v5, clearStateName, &outState, NULL) )
    return 0i64;
  numAnimAliases = outState->numAnimAliases;
  if ( !numAnimAliases )
    return 0i64;
  animAliases = outState->animAliases;
  while ( animAliases[v4].name != AnimsetByIndex->clearAliasName || !animAliases[v4].numAnims )
  {
    if ( ++v4 >= numAnimAliases )
      return 0i64;
  }
  return animAliases[v4].anims->anim.index;
}

/*
==============
BG_PlayerASM_GetLeadAnimationInfo
==============
*/
bool BG_PlayerASM_GetLeadAnimationInfo(characterInfo_t *ci, unsigned int animsetIndex, unsigned int packedAnim, const PlayerASM_AnimSlot slot, const XAnim_s *anims, const unsigned int animIndex, const float rate, unsigned int *outLeadIndex, const XAnimParts **outLeadParts, float *outFrequency)
{
  unsigned int v17; 
  unsigned __int8 v18; 
  __int64 v21; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 
  unsigned __int16 v28; 
  unsigned __int16 v29; 
  unsigned __int16 v30; 
  XAnimParameterBinding *bindings; 
  const XAnimFieldArray<float> *v32; 
  const XAnimFieldArray<unsigned int> *triangleCoords; 
  const XAnimTypeFields *v35; 
  const XAnimParameterBinding *v36; 
  __int64 v37; 
  __int64 v38; 
  const XAnimParameterBinding *v39; 
  signed __int64 v40; 
  vec2_t v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned __int16 v45; 
  unsigned __int16 v46; 
  unsigned __int16 v47; 
  unsigned __int16 v48; 
  unsigned __int16 v49; 
  unsigned __int16 v50; 
  unsigned __int16 v51; 
  unsigned __int16 v52; 
  unsigned __int16 v53; 
  unsigned __int16 v54; 
  unsigned __int16 v55; 
  scr_string_t v56; 
  scr_string_t v57; 
  __int64 v58; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v73; 
  vec2_t v74; 
  bool v77; 
  __int64 v79; 
  __int64 v80; 
  bool result; 
  unsigned int v87; 
  unsigned __int16 v89; 
  unsigned __int16 numBindings; 
  unsigned __int16 v91; 
  unsigned __int16 v92; 
  const XAnimFieldArray<float> *coords; 
  XAnimParameterBinding *v94; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *DynamicBindParameterByFieldName; 
  __int64 v97; 
  signed __int64 v98; 
  unsigned __int16 v99; 
  unsigned __int16 v100; 
  unsigned __int16 v101; 
  scr_string_t v102; 
  bool v105; 
  unsigned int *v106; 
  const XAnimParts **v107; 
  float *v108; 
  unsigned int ChildAt; 
  unsigned int *v114; 
  unsigned int v115; 
  unsigned int *inoutLastTriangleIndex; 
  unsigned int *inoutLastTriangleIndexa; 
  __int64 v130; 
  bool outOutsideRange; 
  unsigned int v132; 
  unsigned int outTriangleIndex; 
  unsigned int outChildIndex[2]; 
  unsigned int v135; 
  unsigned int v136; 
  unsigned int *v137; 
  const XAnimParts **v138; 
  float *v139; 
  const XAnimParameterBinding *v140; 
  __int64 ConstantBindParameterByFieldName; 
  const XAnimParameterBinding *v142; 
  const XAnimParameterBinding *v143; 
  vec2_t weights; 
  vec2_t value; 
  vec3_t outWeights; 

  v17 = animIndex;
  v18 = slot;
  v137 = outLeadIndex;
  v138 = outLeadParts;
  outTriangleIndex = animsetIndex;
  v136 = animIndex;
  v139 = outFrequency;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1918, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1919, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !v137 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1920, ASSERT_TYPE_ASSERT, "(outLeadIndex)", (const char *)&queryFormat, "outLeadIndex") )
    __debugbreak();
  if ( !outFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1921, ASSERT_TYPE_ASSERT, "(outFrequency)", (const char *)&queryFormat, "outFrequency") )
    __debugbreak();
  if ( animIndex >= anims->size )
  {
    LODWORD(inoutLastTriangleIndex) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1922, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", inoutLastTriangleIndex, anims->size) )
      __debugbreak();
  }
  if ( v18 >= 2u )
  {
    LODWORD(v130) = 2;
    LODWORD(inoutLastTriangleIndex) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1923, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+140h+var_40], xmm6
    vmovaps [rsp+140h+var_50], xmm7
    vmovaps [rsp+140h+var_60], xmm8
    vmovaps [rsp+140h+var_70], xmm9
  }
  v21 = v18;
  __asm { vmovaps [rsp+140h+var_80], xmm10 }
  ConstantBindParameterByFieldName = v18;
  if ( !XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace2D) )
  {
    v87 = 0;
    if ( !XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace1D) )
    {
      ci->playerASMLocomotion.animCache[v21].packedAnim = 0;
      result = 0;
      goto LABEL_129;
    }
    __asm { vmovss  xmm9, cs:__real@ff7fffff }
    v132 = -1;
    *(_QWORD *)outChildIndex = 0i64;
    if ( ci->playerASMLocomotion.animCache[v21].animsetIndex == animsetIndex && ci->playerASMLocomotion.animCache[v21].packedAnim == packedAnim )
    {
      v89 = ci->playerASMLocomotion.animCache[v21].bindingIndexes[0];
      numBindings = anims->numBindings;
      if ( v89 >= numBindings )
      {
        LODWORD(v130) = numBindings;
        LODWORD(inoutLastTriangleIndex) = v89;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2096, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[0] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[0] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
          __debugbreak();
      }
      v91 = ci->playerASMLocomotion.animCache[v21].bindingIndexes[1];
      v92 = anims->numBindings;
      if ( v91 >= v92 )
      {
        LODWORD(v130) = v92;
        LODWORD(inoutLastTriangleIndex) = v91;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2097, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[1] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[1] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
          __debugbreak();
      }
      coords = ci->playerASMLocomotion.animCache[v21].coords;
      v94 = &anims->bindings[ci->playerASMLocomotion.animCache[v21].bindingIndexes[1]];
    }
    else
    {
      TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
      if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2107, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
        __debugbreak();
      ConstantBindParameterByFieldName = (__int64)XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpaceCoords, TypeFieldsForNodeType);
      DynamicBindParameterByFieldName = XAnimFindDynamicBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace1DValue, TypeFieldsForNodeType);
      ci->playerASMLocomotion.animCache[v21].animsetIndex = outTriangleIndex;
      v140 = DynamicBindParameterByFieldName;
      ci->playerASMLocomotion.animCache[v21].packedAnim = packedAnim;
      v97 = ConstantBindParameterByFieldName;
      v98 = (signed __int64)(ConstantBindParameterByFieldName - (unsigned __int64)anims->bindings) / 24;
      ci->playerASMLocomotion.animCache[v21].bindingIndexes[0] = v98;
      ci->playerASMLocomotion.animCache[v21].bindingIndexes[1] = DynamicBindParameterByFieldName - anims->bindings;
      v99 = anims->numBindings;
      if ( (unsigned __int16)v98 >= v99 )
      {
        LODWORD(v130) = v99;
        LODWORD(inoutLastTriangleIndex) = (unsigned __int16)v98;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2117, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[0] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[0] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
          __debugbreak();
      }
      v100 = ci->playerASMLocomotion.animCache[v21].bindingIndexes[1];
      v101 = anims->numBindings;
      if ( v100 >= v101 )
      {
        LODWORD(v130) = v101;
        LODWORD(inoutLastTriangleIndex) = v100;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2118, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[1] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[1] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
          __debugbreak();
      }
      v102 = truncate_cast<enum scr_string_t,unsigned int>(*(_DWORD *)(v97 + 8));
      coords = XAnimNode_GetFloatFieldArray(v102);
      if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2123, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
        __debugbreak();
      v94 = (XAnimParameterBinding *)v140;
      ci->playerASMLocomotion.animCache[v21].coords = coords;
    }
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rbp+40h+weights], xmm6
      vmovss  dword ptr [rbp+40h+weights+4], xmm6
    }
    *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(ci, v94->dynamic.sourceParameterIndex);
    __asm { vmovaps xmm1, xmm0; value }
    v105 = XAnimBlendSpace1D_CalcWeights(coords, *(float *)&_XMM1, &weights, &outOutsideRange, outChildIndex);
    v106 = v137;
    v107 = v138;
    v108 = v139;
    *v137 = -1;
    *v107 = NULL;
    *v108 = 0.0;
    if ( outOutsideRange )
    {
      ChildAt = XAnimGetChildAt(anims, animIndex, outChildIndex[0]);
      _RAX = BG_PlayerASM_GetXAnimParts(anims, ChildAt, NULL);
      if ( _RAX )
      {
        __asm { vucomiss xmm6, dword ptr [rax+68h] }
        *v106 = ChildAt;
        *v107 = _RAX;
        *v108 = _RAX->frequency;
        result = 1;
        goto LABEL_129;
      }
    }
    else if ( v105 )
    {
      __asm
      {
        vmovss  xmm10, [rbp+40h+rate]
        vxorps  xmm7, xmm7, xmm7
        vxorps  xmm8, xmm8, xmm8
      }
      v114 = outChildIndex;
      do
      {
        v115 = XAnimGetChildAt(anims, v17, *v114);
        _RAX = BG_PlayerASM_GetXAnimParts(anims, v115, NULL);
        _R15 = _RAX;
        if ( _RAX )
        {
          __asm { vucomiss xmm6, dword ptr [rax+68h] }
          _RSI = (int)v87;
          __asm { vcomiss xmm9, dword ptr [rbp+rsi*4+40h+weights] }
          v132 = v115;
          __asm { vmovss  xmm9, dword ptr [rbp+rsi*4+40h+weights] }
          *v138 = _RAX;
          __asm
          {
            vaddss  xmm7, xmm7, dword ptr [rbp+rsi*4+40h+weights]
            vmovss  xmm0, dword ptr [r15+68h]
            vmulss  xmm1, xmm0, dword ptr [rbp+rsi*4+40h+weights]
            vmulss  xmm2, xmm1, xmm10
            vaddss  xmm8, xmm8, xmm2
          }
        }
        v17 = v136;
        ++v87;
        ++v114;
      }
      while ( v87 < 2 );
      __asm { vucomiss xmm7, xmm6 }
      *v137 = v132;
      if ( v87 != 2 )
        __asm { vdivss  xmm6, xmm8, xmm7 }
      _RAX = v139;
      __asm { vmovss  dword ptr [rax], xmm6 }
    }
    result = 1;
    goto LABEL_129;
  }
  __asm { vmovss  xmm9, cs:__real@ff7fffff }
  v132 = -1;
  if ( ci->playerASMLocomotion.animCache[v18].animsetIndex == animsetIndex && ci->playerASMLocomotion.animCache[v18].packedAnim == packedAnim )
  {
    v23 = ci->playerASMLocomotion.animCache[v18].bindingIndexes[0];
    v24 = anims->numBindings;
    if ( v23 >= v24 )
    {
      LODWORD(v130) = v24;
      LODWORD(inoutLastTriangleIndex) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1952, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[0] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[0] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v25 = ci->playerASMLocomotion.animCache[v18].bindingIndexes[1];
    v26 = anims->numBindings;
    if ( v25 >= v26 )
    {
      LODWORD(v130) = v26;
      LODWORD(inoutLastTriangleIndex) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1953, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[1] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[1] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v27 = ci->playerASMLocomotion.animCache[v18].bindingIndexes[2];
    v28 = anims->numBindings;
    if ( v27 >= v28 )
    {
      LODWORD(v130) = v28;
      LODWORD(inoutLastTriangleIndex) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1954, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[2] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[2] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v29 = ci->playerASMLocomotion.animCache[v18].bindingIndexes[3];
    v30 = anims->numBindings;
    if ( v29 >= v30 )
    {
      LODWORD(v130) = v30;
      LODWORD(inoutLastTriangleIndex) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1955, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[3] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[3] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    if ( !ci->playerASMLocomotion.animCache[v18].coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1957, ASSERT_TYPE_ASSERT, "(animCache->coords)", (const char *)&queryFormat, "animCache->coords") )
      __debugbreak();
    if ( !ci->playerASMLocomotion.animCache[v18].triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1958, ASSERT_TYPE_ASSERT, "(animCache->triangleCoords)", (const char *)&queryFormat, "animCache->triangleCoords") )
      __debugbreak();
    bindings = anims->bindings;
    v32 = ci->playerASMLocomotion.animCache[v18].coords;
    triangleCoords = ci->playerASMLocomotion.animCache[v21].triangleCoords;
    weights = (vec2_t)&bindings[ci->playerASMLocomotion.animCache[v21].bindingIndexes[2]];
    *(_QWORD *)outChildIndex = &bindings[ci->playerASMLocomotion.animCache[v21].bindingIndexes[3]];
    _R15 = (vec2_t)&bindings[ci->playerASMLocomotion.animCache[v21].bindingIndexes[4]];
    v142 = &bindings[ci->playerASMLocomotion.animCache[v21].bindingIndexes[5]];
  }
  else
  {
    v35 = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
    if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1973, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
      __debugbreak();
    v143 = XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpaceCoords, v35);
    v140 = XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DEdges, v35);
    weights = (vec2_t)XAnimFindDynamicBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DValueX, v35);
    *(_QWORD *)outChildIndex = XAnimFindDynamicBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DValueY, v35);
    value = (vec2_t)XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DAxisXRange, v35);
    v36 = XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DAxisYRange, v35);
    v37 = (__int64)v143;
    v38 = (__int64)v140;
    v142 = v36;
    v39 = v143;
    ci->playerASMLocomotion.animCache[v21].animsetIndex = animsetIndex;
    ci->playerASMLocomotion.animCache[v21].packedAnim = packedAnim;
    v40 = v39 - anims->bindings;
    ci->playerASMLocomotion.animCache[v21].bindingIndexes[0] = v40;
    v41 = weights;
    ci->playerASMLocomotion.animCache[v21].bindingIndexes[1] = (__int16)(v38 - LOWORD(anims->bindings)) / 24;
    v42 = (unsigned __int128)((__int64)(*(_QWORD *)&v41 - (unsigned __int64)anims->bindings) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v43 = *(_QWORD *)outChildIndex;
    ci->playerASMLocomotion.animCache[v21].bindingIndexes[2] = ((unsigned __int64)v42 >> 63) + (v42 >> 2);
    v44 = (unsigned __int128)((v43 - (unsigned __int64)anims->bindings) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    LOWORD(v43) = LOWORD(value.v[0]);
    ci->playerASMLocomotion.animCache[v21].bindingIndexes[3] = ((unsigned __int64)v44 >> 63) + (v44 >> 2);
    ci->playerASMLocomotion.animCache[v21].bindingIndexes[4] = (__int16)(v43 - LOWORD(anims->bindings)) / 24;
    ci->playerASMLocomotion.animCache[v21].bindingIndexes[5] = v36 - anims->bindings;
    v45 = anims->numBindings;
    if ( (unsigned __int16)v40 >= v45 )
    {
      LODWORD(v130) = v45;
      LODWORD(inoutLastTriangleIndex) = (unsigned __int16)v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1993, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[0] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[0] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v46 = ci->playerASMLocomotion.animCache[v21].bindingIndexes[1];
    v47 = anims->numBindings;
    if ( v46 >= v47 )
    {
      LODWORD(v130) = v47;
      LODWORD(inoutLastTriangleIndex) = v46;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1994, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[1] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[1] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v48 = ci->playerASMLocomotion.animCache[v21].bindingIndexes[2];
    v49 = anims->numBindings;
    if ( v48 >= v49 )
    {
      LODWORD(v130) = v49;
      LODWORD(inoutLastTriangleIndex) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1995, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[2] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[2] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v50 = ci->playerASMLocomotion.animCache[v21].bindingIndexes[3];
    v51 = anims->numBindings;
    if ( v50 >= v51 )
    {
      LODWORD(v130) = v51;
      LODWORD(inoutLastTriangleIndex) = v50;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1996, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[3] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[3] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v52 = ci->playerASMLocomotion.animCache[v21].bindingIndexes[4];
    v53 = anims->numBindings;
    if ( v52 >= v53 )
    {
      LODWORD(v130) = v53;
      LODWORD(inoutLastTriangleIndex) = v52;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1997, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[4] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[4] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v54 = ci->playerASMLocomotion.animCache[v21].bindingIndexes[5];
    v55 = anims->numBindings;
    if ( v54 >= v55 )
    {
      LODWORD(v130) = v55;
      LODWORD(inoutLastTriangleIndex) = v54;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1998, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[5] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[5] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v130) )
        __debugbreak();
    }
    v56 = truncate_cast<enum scr_string_t,unsigned int>(*(_DWORD *)(v37 + 8));
    v57 = truncate_cast<enum scr_string_t,unsigned int>(*(_DWORD *)(v38 + 8));
    if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
      __debugbreak();
    v32 = (const XAnimFieldArray<float> *)SL_ConvertToString(v56);
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2004, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
      __debugbreak();
    if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
      __debugbreak();
    triangleCoords = (const XAnimFieldArray<unsigned int> *)SL_ConvertToString(v57);
    if ( !triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2007, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
      __debugbreak();
    _R15 = value;
    ci->playerASMLocomotion.animCache[v21].coords = v32;
    ci->playerASMLocomotion.animCache[v21].triangleCoords = triangleCoords;
  }
  v58 = ConstantBindParameterByFieldName;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rbp+40h+outWeights], xmm8
    vmovss  dword ptr [rbp+40h+outWeights+4], xmm8
  }
  v60 = ci->playerASMLocomotion.lastTriangleIndex[ConstantBindParameterByFieldName];
  v61 = -1;
  __asm { vmovss  dword ptr [rbp+40h+outWeights+8], xmm8 }
  v62 = -1;
  if ( v60 < triangleCoords->size / 3 )
    v62 = v60;
  v135 = v62;
  *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(ci, *(_WORD *)(*(_QWORD *)&weights + 12i64));
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(ci, *(_WORD *)(*(_QWORD *)outChildIndex + 12i64));
  __asm
  {
    vmovss  xmm2, dword ptr [r15+0Ch]; max
    vmovss  xmm1, dword ptr [r15+8]; min
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = (__int64)v142;
  __asm
  {
    vmovss  dword ptr [rbp+40h+value], xmm0
    vmovaps xmm0, xmm7; val
    vmovss  xmm2, dword ptr [rax+0Ch]; max
    vmovss  xmm1, dword ptr [rax+8]; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rbp+40h+value+4], xmm0 }
  XAnimBlendSpace2D_CalcWeights(triangleCoords, v32, value, &outWeights, &outTriangleIndex, &v135);
  __asm { vmovss  xmm10, [rbp+40h+rate] }
  v73 = 0;
  ci->playerASMLocomotion.lastTriangleIndex[v58] = v135;
  weights = 0i64;
  v74 = 0i64;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  v77 = 1;
  do
  {
    _RSI = (int)v73;
    __asm { vcomiss xmm8, dword ptr [rbp+rsi*4+40h+outWeights] }
    if ( v77 )
    {
      v79 = 3 * outTriangleIndex;
      if ( (unsigned int)v79 >= triangleCoords->size )
      {
        LODWORD(v130) = triangleCoords->size;
        LODWORD(inoutLastTriangleIndexa) = 3 * outTriangleIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", inoutLastTriangleIndexa, v130) )
          __debugbreak();
      }
      v80 = (__int64)&triangleCoords->values[v79];
      if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2047, ASSERT_TYPE_ASSERT, "(coordIndexes)", (const char *)&queryFormat, "coordIndexes") )
        __debugbreak();
      v61 = XAnimGetChildAt(anims, v136, *(_DWORD *)(v80 + *(_QWORD *)&weights));
      _RAX = BG_PlayerASM_GetXAnimParts(anims, v61, NULL);
      if ( _RAX )
      {
        __asm
        {
          vucomiss xmm8, dword ptr [rax+68h]
          vcomiss xmm9, dword ptr [rbp+rsi*4+40h+outWeights]
        }
        v132 = v61;
        __asm { vmovss  xmm9, dword ptr [rbp+rsi*4+40h+outWeights] }
        *v138 = _RAX;
        __asm
        {
          vaddss  xmm6, xmm6, dword ptr [rbp+rsi*4+40h+outWeights]
          vmovss  xmm0, dword ptr [rbp+rsi*4+40h+outWeights]
          vmulss  xmm1, xmm0, dword ptr [r15+68h]
          vmulss  xmm2, xmm1, xmm10
          vaddss  xmm7, xmm7, xmm2
        }
      }
      else
      {
        v61 = v132;
      }
      v74 = weights;
    }
    *(_QWORD *)&v74 += 4i64;
    ++v73;
    weights = v74;
    v77 = v73 < 3;
  }
  while ( v73 < 3 );
  __asm { vucomiss xmm6, xmm8 }
  *v137 = v61;
  if ( v73 != 3 )
    __asm { vdivss  xmm8, xmm7, xmm6 }
  _RAX = v139;
  __asm { vmovss  dword ptr [rax], xmm8 }
  result = 1;
LABEL_129:
  __asm
  {
    vmovaps xmm10, [rsp+140h+var_80]
    vmovaps xmm9, [rsp+140h+var_70]
    vmovaps xmm8, [rsp+140h+var_60]
    vmovaps xmm7, [rsp+140h+var_50]
    vmovaps xmm6, [rsp+140h+var_40]
  }
  return result;
}

/*
==============
BG_PlayerASM_GetNotify
==============
*/
__int64 BG_PlayerASM_GetNotify(const Animset *pAnimset, const unsigned int animStateIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = animStateIndex;
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 138, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( (unsigned int)v2 >= pAnimset->numStates )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( animStateIndex ) < (unsigned)( pAnimset->numStates )", "animStateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v5, pAnimset->numStates) )
      __debugbreak();
  }
  return (unsigned int)pAnimset->states[v2].name;
}

/*
==============
BG_PlayerASM_GetNumEntriesForStateIndex
==============
*/
int BG_PlayerASM_GetNumEntriesForStateIndex(const unsigned int animsetIndex, int stateIndex)
{
  const Animset *AnimsetByIndex; 

  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2699, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2701, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  return BG_Animset_GetNumEntriesForStateIndex(AnimsetByIndex, stateIndex);
}

/*
==============
BG_PlayerASM_GetParameterValue
==============
*/
double BG_PlayerASM_GetParameterValue(const characterInfo_t *ci, unsigned __int16 parameterIndex)
{
  BgStatic *ActiveStatics; 
  __int64 v7; 
  scr_string_t *PlayerAnimParameterNameByIndex; 
  const char *v16; 

  _RBX = ci;
  if ( parameterIndex >= 0x41u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1780, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( PLAYER_ANIM_PARAM_COUNT )", "parameterIndex doesn't index PLAYER_ANIM_PARAM_COUNT\n\t%i not in [0, %i)", parameterIndex, 65) )
    __debugbreak();
  switch ( parameterIndex )
  {
    case 0u:
      __asm { vmovss  xmm0, dword ptr [rbx+0A3Ch]; jumptable 000000014023E5CF case 0 }
      break;
    case 3u:
      __asm { vmovss  xmm0, dword ptr [rbx+8DCh]; jumptable 000000014023E5CF case 3 }
      break;
    case 4u:
      __asm { vmovss  xmm0, dword ptr [rbx+8E0h]; jumptable 000000014023E5CF case 4 }
      break;
    case 5u:
      __asm { vmovss  xmm0, dword ptr [rbx+8F4h]; jumptable 000000014023E5CF case 5 }
      break;
    case 6u:
      __asm { vmovss  xmm0, dword ptr [rbx+8F8h]; jumptable 000000014023E5CF case 6 }
      break;
    case 7u:
      __asm { vmovss  xmm0, dword ptr [rbx+8E4h]; jumptable 000000014023E5CF case 7 }
      break;
    case 8u:
      __asm { vmovss  xmm0, dword ptr [rbx+8E8h]; jumptable 000000014023E5CF case 8 }
      break;
    case 9u:
      __asm { vmovss  xmm0, dword ptr [rbx+8FCh]; jumptable 000000014023E5CF case 9 }
      break;
    case 0xAu:
      __asm { vmovss  xmm0, dword ptr [rbx+900h]; jumptable 000000014023E5CF case 10 }
      break;
    case 0xBu:
      __asm { vmovss  xmm0, dword ptr [rbx+0AE4h]; jumptable 000000014023E5CF case 11 }
      break;
    case 0xCu:
      __asm { vmovss  xmm0, dword ptr [rbx+0AE8h]; jumptable 000000014023E5CF case 12 }
      break;
    case 0xDu:
      __asm { vmovss  xmm0, dword ptr [rbx+0AECh]; jumptable 000000014023E5CF case 13 }
      break;
    case 0xEu:
      __asm { vmovss  xmm0, dword ptr [rbx+998h]; jumptable 000000014023E5CF case 14 }
      break;
    case 0xFu:
      __asm { vmovss  xmm0, dword ptr [rbx+9B4h]; jumptable 000000014023E5CF case 15 }
      break;
    case 0x10u:
      __asm { vmovss  xmm0, dword ptr [rbx+9B8h]; jumptable 000000014023E5CF case 16 }
      break;
    case 0x11u:
      goto $LN27_0;
    case 0x12u:
      __asm { vmovss  xmm0, dword ptr [rbx+994h]; jumptable 000000014023E5CF case 18 }
      break;
    case 0x13u:
      *(double *)&_XMM0 = vectosignedyaw((const vec2_t *)&_RBX->mountAnimation.worldmodelForwardDir);
      break;
    case 0x14u:
      __asm { vmovss  xmm0, dword ptr [rbx+9BCh]; jumptable 000000014023E5CF case 20 }
      break;
    case 0x1Du:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+860h]; jumptable 000000014023E5CF case 29
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm5, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vsubss  xmm1, xmm5, xmm4
        vmulss  xmm0, xmm1, cs:__real@43b40000
      }
      break;
    case 0x1Eu:
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+800h]; jumptable 000000014023E5CF case 30
        vmovss  xmm0, dword ptr [rbx+858h]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      break;
    case 0x21u:
      __asm { vmovss  xmm0, dword ptr [rbx+8C8h]; jumptable 000000014023E5CF case 33 }
      break;
    case 0x22u:
      __asm { vmovss  xmm0, dword ptr [rbx+8CCh]; jumptable 000000014023E5CF case 34 }
      break;
    case 0x23u:
      __asm { vmovss  xmm0, dword ptr [rbx+8D0h]; jumptable 000000014023E5CF case 35 }
      break;
    case 0x24u:
      __asm { vmovss  xmm0, dword ptr [rbx+0A38h]; jumptable 000000014023E5CF case 36 }
      break;
    case 0x25u:
      __asm { vmovss  xmm0, dword ptr [rbx+0A18h]; jumptable 000000014023E5CF case 37 }
      break;
    case 0x26u:
      __asm { vmovss  xmm0, dword ptr [rbx+0A1Ch]; jumptable 000000014023E5CF case 38 }
      break;
    case 0x2Bu:
      __asm { vmovss  xmm0, dword ptr [rbx+0A40h]; jumptable 000000014023E5CF case 43 }
      break;
    case 0x2Cu:
      __asm { vmovss  xmm0, dword ptr [rbx+9F4h]; jumptable 000000014023E5CF case 44 }
      break;
    case 0x2Du:
      __asm { vmovss  xmm0, dword ptr [rbx+9F0h]; jumptable 000000014023E5CF case 45 }
      break;
    case 0x2Eu:
      __asm { vmovss  xmm0, dword ptr [rbx+0A44h]; jumptable 000000014023E5CF case 46 }
      break;
    case 0x32u:
      ActiveStatics = BgStatic::GetActiveStatics();
      if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1862, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
        __debugbreak();
      v7 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1864, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      *(double *)&_XMM0 = BG_Execution_GetScrubTime(_RBX->execution, (const ExecutionVictimStance)_RBX->executionStance, _RBX->executionStartTime, *(_DWORD *)(v7 + 19528), *(_DWORD *)(v7 + 19532));
      break;
    case 0x33u:
      __asm { vmovss  xmm0, dword ptr [rbx+904h]; jumptable 000000014023E5CF case 51 }
      break;
    case 0x34u:
      __asm { vmovss  xmm0, dword ptr [rbx+908h]; jumptable 000000014023E5CF case 52 }
      break;
    case 0x35u:
      __asm { vmovss  xmm0, dword ptr [rbx+90Ch]; jumptable 000000014023E5CF case 53 }
      break;
    case 0x36u:
      __asm { vmovss  xmm0, dword ptr [rbx+910h]; jumptable 000000014023E5CF case 54 }
      break;
    case 0x37u:
      __asm { vmovss  xmm0, dword ptr [rbx+914h]; jumptable 000000014023E5CF case 55 }
      break;
    default:
      PlayerAnimParameterNameByIndex = BG_GetPlayerAnimParameterNameByIndex(parameterIndex);
      v16 = SL_ConvertToString(*PlayerAnimParameterNameByIndex);
      Com_PrintWarning(19, "BG_PlayerASM_GetParameterValue(): could not find anim parameter '%s'.\n", v16);
$LN27_0:
      __asm { vxorps  xmm0, xmm0, xmm0 }
      break;
  }
  return *(double *)&_XMM0;
}

/*
==============
BG_PlayerASM_GetStateInfoByIndex
==============
*/
bool BG_PlayerASM_GetStateInfoByIndex(const unsigned int animsetIndex, int stateIndex, AnimsetState **outState)
{
  __int64 v3; 
  const Animset *AnimsetByIndex; 
  const Animset *v7; 
  unsigned int numStates; 
  __int64 v10; 
  __int64 v11; 

  v3 = stateIndex;
  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2596, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v7 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v3 >= numStates )
    {
      LODWORD(v11) = numStates;
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    LOBYTE(AnimsetByIndex) = 1;
    *outState = &v7->states[v3];
  }
  return (char)AnimsetByIndex;
}

/*
==============
BG_PlayerASM_GetStateInfoByName
==============
*/
bool BG_PlayerASM_GetStateInfoByName(const unsigned int animsetIndex, const scr_string_t stateName, AnimsetState **outState, int *pOutStateIndex)
{
  const Animset *AnimsetByIndex; 

  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  return BG_Animset_GetStateInfoByName(AnimsetByIndex, stateName, outState, pOutStateIndex);
}

/*
==============
BG_PlayerASM_GetStateNameFromIndex
==============
*/
__int64 BG_PlayerASM_GetStateNameFromIndex(const unsigned int animsetIndex, int stateIndex)
{
  __int64 v2; 
  const Animset *AnimsetByIndex; 
  __int64 v6; 
  __int64 v7; 

  v2 = stateIndex;
  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2612, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2615, ASSERT_TYPE_ASSERT, "(pAnimset)", "%s\n\tunable to find animset", "pAnimset") )
    __debugbreak();
  if ( (unsigned int)v2 >= AnimsetByIndex->numStates )
  {
    LODWORD(v7) = AnimsetByIndex->numStates;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2616, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( pAnimset->numStates )", "stateIndex doesn't index pAnimset->numStates\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return (unsigned int)AnimsetByIndex->states[v2].name;
}

/*
==============
BG_PlayerASM_GetXAnimData
==============
*/
void BG_PlayerASM_GetXAnimData(const unsigned int animsetIndex, const unsigned int animStateIndex, const unsigned int animEntryIndex, unsigned int *pOutAnimIndex, unsigned int *pOutGraftIndex, XAnimSubTreeID *pOutSubtreeID)
{
  const Animset *AnimsetByIndex; 

  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  if ( !pOutAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 113, ASSERT_TYPE_ASSERT, "(pOutAnimIndex)", (const char *)&queryFormat, "pOutAnimIndex") )
    __debugbreak();
  if ( !pOutGraftIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 114, ASSERT_TYPE_ASSERT, "(pOutGraftIndex)", (const char *)&queryFormat, "pOutGraftIndex") )
    __debugbreak();
  if ( !pOutSubtreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 115, ASSERT_TYPE_ASSERT, "(pOutSubtreeID)", (const char *)&queryFormat, "pOutSubtreeID") )
    __debugbreak();
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(AnimsetByIndex, animStateIndex, animEntryIndex, pOutAnimIndex, pOutGraftIndex, pOutSubtreeID, NULL);
}

/*
==============
BG_PlayerASM_GetXAnimIndex
==============
*/
__int64 BG_PlayerASM_GetXAnimIndex(const unsigned int animsetIndex, unsigned int packedAnim)
{
  scr_string_t StateNameFromIndex; 
  int v5; 
  scr_string_t v6; 
  const Animset *AnimsetByIndex; 
  unsigned int outAnimState; 
  unsigned int outAnimEntry; 

  if ( !packedAnim )
    return 0i64;
  BG_PlayerASM_UnpackAnim(animsetIndex, packedAnim, &outAnimState, &outAnimEntry);
  StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(animsetIndex, outAnimState);
  v5 = outAnimEntry;
  v6 = StateNameFromIndex;
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  return BG_Animset_GetAnimFromIndex(AnimsetByIndex, v6, v5).index;
}

/*
==============
BG_PlayerASM_GetXAnimIndex
==============
*/
unsigned int BG_PlayerASM_GetXAnimIndex(const entityState_t *es, const PlayerASM_AnimSlot slot)
{
  unsigned __int8 v2; 
  unsigned int result; 
  scr_string_t StateNameFromIndex; 
  int v6; 
  const Animset *AnimsetByIndex; 
  unsigned int outAnimState; 
  unsigned int outAnimsetIndex; 
  unsigned int outAnimEntry; 

  v2 = slot;
  if ( (unsigned __int8)slot >= (unsigned int)COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", (unsigned __int8)slot, 2) )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 55, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  result = BG_PlayerASM_UnpackAnimFromEntity(es, (const PlayerASM_AnimSlot)v2, &outAnimsetIndex, &outAnimState, &outAnimEntry);
  if ( result )
  {
    StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(outAnimsetIndex, outAnimState);
    v6 = outAnimEntry;
    AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(outAnimsetIndex);
    return BG_Animset_GetAnimFromIndex(AnimsetByIndex, StateNameFromIndex, v6).index;
  }
  return result;
}

/*
==============
BG_PlayerASM_GetXAnimIndex
==============
*/
unsigned int BG_PlayerASM_GetXAnimIndex(const playerState_s *ps, const PlayerASM_AnimSlot slot)
{
  unsigned __int8 v2; 
  unsigned int result; 
  scr_string_t StateNameFromIndex; 
  int v6; 
  const Animset *AnimsetByIndex; 
  unsigned int outAnimState; 
  unsigned int outAnimSetIndex; 
  unsigned int outAnimEntry; 

  v2 = slot;
  if ( (unsigned __int8)slot >= (unsigned int)COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", (unsigned __int8)slot, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 76, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = BG_PlayerASM_UnpackAnimFromPs(ps, (const PlayerASM_AnimSlot)v2, &outAnimSetIndex, &outAnimState, &outAnimEntry);
  if ( result )
  {
    StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(outAnimSetIndex, outAnimState);
    v6 = outAnimEntry;
    AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(outAnimSetIndex);
    return BG_Animset_GetAnimFromIndex(AnimsetByIndex, StateNameFromIndex, v6).index;
  }
  return result;
}

/*
==============
BG_PlayerASM_GraftAddons
==============
*/

void __fastcall BG_PlayerASM_GraftAddons(DObj *obj, const unsigned int animsetIndex, unsigned int stateIndex, double blendTime, const scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  __int64 v10; 
  const Animset *AnimsetByIndex; 
  const Animset *v13; 
  unsigned int numStates; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v21; 
  unsigned int v22; 
  scr_string_t v23; 
  XModelNameMap *v24; 
  XAnimCurveID v25; 
  __int64 v26; 
  scr_string_t v27; 
  const Animset *v28; 
  __int64 v31; 
  __int64 v32; 
  AnimsetState *outState; 
  int pOutStateIndex; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  v10 = (int)stateIndex;
  __asm { vmovaps xmm6, xmm3 }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 412, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  outState = NULL;
  if ( animsetIndex >= 4 )
  {
    LODWORD(v31) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v31, 4) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v13 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v10 >= numStates )
    {
      LODWORD(v32) = numStates;
      LODWORD(v31) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    v15 = 0;
    v16 = 0i64;
    v17 = (__int64)&v13->states[v10];
    v18 = *(_DWORD *)(v17 + 16);
    if ( v18 )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v17 + 8) + 80 * v16;
        if ( v15 + *(_DWORD *)(v19 + 16) > v15 )
          break;
        v16 = (unsigned int)(v16 + 1);
        v15 += *(_DWORD *)(v19 + 16);
        if ( (unsigned int)v16 >= v18 )
        {
          __asm { vmovaps xmm6, [rsp+98h+var_48] }
          return;
        }
      }
      v21 = 0i64;
      if ( *(_DWORD *)(v19 + 48) )
      {
        v22 = notifyType;
        v23 = notifyName;
        v24 = modelNameMap;
        v25 = curveID;
        do
        {
          v26 = *(_QWORD *)(v19 + 40);
          outState = NULL;
          v27 = *(_DWORD *)(v26 + 4 * v21);
          v28 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
          if ( BG_Animset_GetStateInfoByName(v28, v27, &outState, &pOutStateIndex) )
          {
            __asm { vmovaps xmm3, xmm6; blendTime }
            BG_PlayerASM_GraftTrees(obj, animsetIndex, pOutStateIndex, *(float *)&_XMM3, v23, v22, v25, v24);
          }
          v21 = (unsigned int)(v21 + 1);
        }
        while ( (unsigned int)v21 < *(_DWORD *)(v19 + 48) );
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
}

/*
==============
BG_PlayerASM_GraftTrees
==============
*/

void __fastcall BG_PlayerASM_GraftTrees(DObj *obj, const unsigned int animsetIndex, unsigned int stateIndex, double blendTime, const scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  __int64 v11; 
  const Animset *AnimsetByIndex; 
  const Animset *v15; 
  unsigned int numStates; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v20; 
  char v21; 
  __int64 v22; 
  __int64 v23; 
  scr_string_t v24; 
  unsigned int v25; 
  XAnimSubTreeID v26; 
  unsigned int v27; 
  float fmt; 
  __int64 goalTime; 
  float goalTimea; 
  __int64 rate; 
  float ratea; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
  v11 = (int)stateIndex;
  __asm { vmovaps xmm7, xmm3 }
  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 346, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 347, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( animsetIndex >= 4 )
  {
    LODWORD(rate) = 4;
    LODWORD(goalTime) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", goalTime, rate) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v15 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v11 >= numStates )
    {
      LODWORD(rate) = numStates;
      LODWORD(goalTime) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", goalTime, rate) )
        __debugbreak();
    }
    v17 = (__int64)&v15->states[v11];
    v18 = 0;
    if ( *(_DWORD *)(v17 + 32) )
    {
      __asm
      {
        vmovaps [rsp+0A8h+var_38], xmm6
        vmovss  xmm6, cs:__real@3f800000
      }
      do
      {
        v20 = *(_QWORD *)(v17 + 24) + 56i64 * v18;
        if ( *(_DWORD *)(v20 + 4) )
        {
          v21 = *(_BYTE *)(v20 + 48);
          v22 = *(_QWORD *)(v20 + 40);
          v23 = *(_QWORD *)(v20 + 32);
          v24 = 0;
          if ( v21 )
            v24 = notifyName;
          v25 = 0;
          if ( v21 )
            v25 = notifyType;
          __asm
          {
            vmovss  [rsp+0A8h+rate], xmm6
            vmovss  [rsp+0A8h+goalTime], xmm7
            vmovss  dword ptr [rsp+0A8h+fmt], xmm6
          }
          if ( v22 )
          {
            v26 = *(_WORD *)(v22 + 60);
            v27 = 1;
            LODWORD(v23) = (unsigned __int16)v23;
          }
          else
          {
            v26 = XANIM_SUBTREE_DEFAULT;
            v27 = (unsigned __int16)v23;
            LODWORD(v23) = 0;
          }
          XAnimSetCompleteGoalWeight(obj, v23, v26, v27, fmt, goalTimea, ratea, v24, v25, 1, curveID, modelNameMap);
        }
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v17 + 32) );
      __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
    }
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
}

/*
==============
BG_PlayerASM_IsForceUpdate
==============
*/
bool BG_PlayerASM_IsForceUpdate(const entityState_t *es, const characterInfo_t *ci)
{
  const BgStatic *ActiveStatics; 
  const DObj *DObj; 
  XAnimTree *Tree; 
  unsigned int Animset; 
  char v11; 
  char v12; 

  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 446, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  if ( ci->playerASMLocomotion.forceUpdate )
    return 1;
  DObj = BG_GetDObj(ActiveStatics, es->number);
  if ( !DObj )
    return 0;
  Tree = DObjGetTree(DObj);
  if ( !Tree )
    return 0;
  Animset = BG_PlayerASM_GetAnimset(es);
  if ( !Tree->children )
    goto LABEL_10;
  *(double *)&_XMM0 = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  if ( v11 )
LABEL_10:
    v12 = 1;
  else
    v12 = 0;
  return BG_PlayerASM_GetAnimsetNameByIndex(Animset) && v12 || BG_PlayerASM_GetAnimset(ci) != Animset;
}

/*
==============
BG_PlayerASM_LerpTreeParameters
==============
*/

void __fastcall BG_PlayerASM_LerpTreeParameters(characterInfo_t *ci, double _XMM1_8)
{
  BgStatic *ActiveStatics; 
  __int64 v15; 
  bool v16; 
  bool v17; 
  char v28; 
  bool v29; 
  bool v32; 
  bool v44; 
  bool v50; 
  char v86; 
  bool v87; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RBX = ci;
  __asm { vmovaps xmmword ptr [rax-68h], xmm10 }
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2278, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2284, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  v15 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  v16 = v15 == 0;
  if ( !v15 )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2286, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+4C54h]
    vmulss  xmm10, xmm0, cs:__real@3a83126f
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm10, xmm7
  }
  if ( !v16 )
  {
    _RDI = DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min;
    __asm
    {
      vmovaps [rsp+0E8h+var_28], xmm6
      vmovaps [rsp+0E8h+var_48], xmm8
      vmovaps [rsp+0E8h+var_58], xmm9
      vmovaps [rsp+0E8h+var_98], xmm13
      vmovaps [rsp+0E8h+var_A8], xmm14
    }
    if ( !DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_parameter_lerp_strength_min") )
      __debugbreak();
    __asm { vmovaps [rsp+0E8h+var_88], xmm12 }
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm6, cs:__real@bf800000
      vucomiss xmm6, dword ptr [rdi+28h]
    }
    if ( v16 )
    {
      __asm { vmovss  xmm12, dword ptr [rbx+828h] }
    }
    else
    {
      _RDI = DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min;
      if ( !DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_parameter_lerp_strength_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm12, dword ptr [rdi+28h]
        vcomiss xmm12, xmm7
      }
      if ( v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2298, ASSERT_TYPE_ASSERT, "(lerpStrengthMin >= 0.f)", (const char *)&queryFormat, "lerpStrengthMin >= 0.f") )
        __debugbreak();
    }
    _RDI = DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max;
    if ( !DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_parameter_lerp_strength_max") )
      __debugbreak();
    __asm { vmovaps [rsp+0E8h+var_78], xmm11 }
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vucomiss xmm6, dword ptr [rdi+28h] }
    if ( v29 )
    {
      __asm { vmovss  xmm11, dword ptr [rbx+82Ch] }
    }
    else
    {
      _RDI = DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max;
      if ( !DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_parameter_lerp_strength_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm11, dword ptr [rdi+28h]
        vcomiss xmm11, xmm7
      }
      if ( v28 )
      {
        v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2309, ASSERT_TYPE_ASSERT, "(lerpStrengthMax >= 0.f)", (const char *)&queryFormat, "lerpStrengthMax >= 0.f");
        v28 = 0;
        v29 = !v32;
        if ( v32 )
          __debugbreak();
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0A3Ch]
      vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rbx+147Ch]
      vsubss  xmm6, xmm0, xmm1
      vmovss  xmm0, dword ptr [rbx+0A40h]
      vsubss  xmm1, xmm0, dword ptr [rbx+0A20h]
      vmovss  xmm0, dword ptr [rbx+0A38h]; angle1
      vandps  xmm1, xmm1, xmm9
      vcomiss xmm1, cs:__real@3ccccccd
      vmovss  xmm1, dword ptr [rbx+0A14h]; angle2
    }
    v44 = !(v28 | v29);
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vmovss  xmm13, cs:__real@3c23d70a
      vmovss  xmm14, cs:__real@3bda740e
      vmovss  xmm8, cs:__real@3f800000
      vandps  xmm0, xmm0, xmm9
      vcomiss xmm0, xmm13
      vandps  xmm6, xmm6, xmm9
    }
    v50 = !(v28 | v16);
    __asm
    {
      vcomiss xmm6, xmm13
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+147Ch]
    }
    if ( !(v28 | v16) )
    {
      __asm
      {
        vsubss  xmm0, xmm0, dword ptr [rbx+0A3Ch]
        vandps  xmm0, xmm0, xmm9
        vmulss  xmm0, xmm0, xmm14; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm8, xmm0
        vmulss  xmm0, xmm0, xmm11
        vmulss  xmm2, xmm1, xmm12
        vmovss  xmm1, dword ptr [rbx+0A3Ch]; cur
        vaddss  xmm2, xmm2, xmm0; rate
        vmovd   xmm0, dword ptr [rbx+147Ch]
        vcvtdq2ps xmm0, xmm0; tgt
        vmovaps xmm3, xmm10; deltaTime
      }
      *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    __asm
    {
      vmovss  dword ptr [rbx+0A3Ch], xmm0
      vmovss  xmm2, dword ptr [rbx+0A14h]
    }
    if ( v50 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+0A38h]; angle2
        vmovaps xmm0, xmm2; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vandps  xmm0, xmm0, xmm9
        vmulss  xmm0, xmm0, cs:__real@3bb60b61; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm8, xmm0
        vmulss  xmm2, xmm1, xmm12
        vmovss  xmm1, dword ptr [rbx+0A38h]; cur
        vmulss  xmm0, xmm0, xmm11
        vaddss  xmm2, xmm2, xmm0; rate
        vmovss  xmm0, dword ptr [rbx+0A14h]; tgt
        vmovaps xmm3, xmm10; deltaTime
      }
      *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm5, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm3, xmm1, xmm2
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm3, 1
        vsubss  xmm1, xmm5, xmm4
        vmulss  xmm2, xmm1, cs:__real@43b40000
      }
    }
    __asm { vmovss  dword ptr [rbx+0A38h], xmm2 }
    v86 = 0;
    v87 = !v44;
    if ( v44 )
    {
      _RDI = DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_in;
      if ( !DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_move_turn_lerp_strength_in") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vucomiss xmm7, dword ptr [rbx+0A20h]
        vmovss  xmm0, dword ptr [rdi+28h]
      }
      if ( v16 )
      {
        _RDI = DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_out;
        if ( !DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_move_turn_lerp_strength_out") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm0, dword ptr [rdi+28h] }
      }
      __asm
      {
        vmulss  xmm0, xmm0, xmm10
        vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000; X
      }
      exp2f(*(float *)&_XMM0);
      __asm
      {
        vsubss  xmm1, xmm8, xmm0
        vsubss  xmm0, xmm8, xmm1
        vmulss  xmm2, xmm0, dword ptr [rbx+0A40h]
        vmulss  xmm1, xmm1, dword ptr [rbx+0A20h]
        vaddss  xmm0, xmm2, xmm1
      }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rbx+0A20h] }
    }
    __asm
    {
      vmovss  dword ptr [rbx+0A40h], xmm0
      vmovss  xmm0, dword ptr [rbx+8C0h]
      vmovss  xmm1, dword ptr [rbx+0A44h]
      vdivss  xmm6, xmm0, xmm10
      vsubss  xmm0, xmm1, xmm6
      vandps  xmm0, xmm0, xmm9
      vcomiss xmm0, xmm13
      vmovaps xmm13, [rsp+0E8h+var_98]
    }
    if ( !(v86 | v87) )
    {
      __asm
      {
        vsubss  xmm0, xmm6, xmm1
        vandps  xmm0, xmm0, xmm9
        vmulss  xmm0, xmm0, xmm14; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm8, xmm0
        vmulss  xmm2, xmm1, xmm12
        vmovss  xmm1, dword ptr [rbx+0A44h]; cur
        vmulss  xmm0, xmm0, xmm11
        vaddss  xmm2, xmm2, xmm0; rate
        vmovaps xmm0, xmm6; tgt
        vmovaps xmm3, xmm10; deltaTime
      }
      *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm
    {
      vmovss  dword ptr [rbx+0A44h], xmm6
      vmovaps xmm14, [rsp+0E8h+var_A8]
      vmovaps xmm12, [rsp+0E8h+var_88]
      vmovaps xmm11, [rsp+0E8h+var_78]
      vmovaps xmm9, [rsp+0E8h+var_58]
      vmovaps xmm8, [rsp+0E8h+var_48]
      vmovaps xmm6, [rsp+0E8h+var_28]
    }
    _RBX->playerASMLocomotion.lastSpeed = _RBX->speed;
    _RBX->playerASMLocomotion.lastStrafeAngle = _RBX->playerASMLocomotion.strafeAngle;
  }
  __asm
  {
    vmovaps xmm7, [rsp+0E8h+var_38]
    vmovaps xmm10, [rsp+0E8h+var_68]
  }
}

/*
==============
BG_PlayerASM_PlayMoveTurnAnim
==============
*/
void BG_PlayerASM_PlayMoveTurnAnim(characterInfo_t *ci, DObj *obj, XAnimTree *tree, const PlayerASM_AnimSlot slot, const unsigned int animsetIndex, const unsigned int packedAnimIndex, const AnimsetAlias *pAlias, const bool clear, XModelNameMap *modelNameMap, const unsigned int flags)
{
  unsigned __int8 v13; 
  const AnimsetAlias *v17; 
  BgStatic *ActiveStatics; 
  __int64 v19; 
  unsigned int v20; 
  AnimsetAlias_Union v22; 
  scr_string_t numRedAnims; 
  unsigned int v24; 
  const Animset *AnimsetByIndex; 
  unsigned int v26; 
  int IndexOfRandomAnimFrom; 
  int v28; 
  const Animset *v29; 
  char v49; 
  char v52; 
  scr_string_t fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  __int64 animEntryToSkip; 
  int animEntryToSkipa; 
  int animEntryToSkipb; 
  float pOutAnimCurveID; 
  float pOutAnimCurveIDa; 
  int pOutStateIndex; 
  AnimsetState *outState; 
  XAnimSubTreeID pOutAnimSubtreeID; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  XAnimCurveID curveID; 

  v13 = slot;
  _RDI = (unsigned int *)ci;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 740, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 741, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 742, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v17 = pAlias;
  if ( !pAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 743, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  if ( v13 >= 2u )
  {
    LODWORD(animEntryToSkip) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 744, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", animEntryToSkip, 2) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v19 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v13 )
  {
    v20 = _RDI[625];
    __asm
    {
      vmovaps [rsp+0E8h+var_68], xmm7
      vmovss  xmm7, dword ptr [rdi+0A34h]
    }
    _RDI[653] = v20;
    if ( v17 )
    {
      v22.m_AIAnimsetAlias = (AIAnimsetAlias *)v17->u;
      if ( *(&v22.m_AIAnimsetAlias[3].numRedAnims + 1) )
      {
        numRedAnims = v22.m_AIAnimsetAlias[3].numRedAnims;
        v24 = animsetIndex;
        AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
        if ( BG_Animset_GetStateInfoByName(AnimsetByIndex, numRedAnims, &outState, &pOutStateIndex) )
        {
          v26 = *_RDI;
          fmt = *(&v17->u.m_AIAnimsetAlias[3].numRedAnims + 1);
          __asm { vmovaps [rsp+0E8h+var_78], xmm8 }
          IndexOfRandomAnimFrom = BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(NULL, v26, v24, outState, fmt, 0);
          if ( IndexOfRandomAnimFrom < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 770, ASSERT_TYPE_ASSERT, "(entryIndex >= 0)", (const char *)&queryFormat, "entryIndex >= 0") )
            __debugbreak();
          v28 = pOutStateIndex;
          __asm { vmovaps [rsp+0E8h+var_58], xmm6 }
          v29 = BG_PlayerASM_GetAnimsetByIndex(v24);
          BG_Animset_GetAnimIndexFromStateIndexAndEntry(v29, v28, IndexOfRandomAnimFrom, &pOutAnimIndex, &pOutGraftNode, &pOutAnimSubtreeID, &curveID);
          __asm { vxorps  xmm8, xmm8, xmm8 }
          if ( (flags & 4) != 0 )
          {
            __asm { vxorps  xmm6, xmm6, xmm6 }
          }
          else
          {
            _RAX.m_AIAnimsetAlias = (AIAnimsetAlias *)v17->u;
            __asm { vmovss  xmm6, dword ptr [rax+44h] }
          }
          if ( clear )
          {
            __asm { vmovss  dword ptr [rsp+0E8h+fmt], xmm6 }
            XAnimClearTreeGoalWeights(tree, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, fmta, 0, obj, curveID);
          }
          else if ( *(_DWORD *)(v19 + 19540) )
          {
            __asm
            {
              vsubss  xmm0, xmm7, dword ptr [rdi+9C4h]
              vmulss  xmm5, xmm0, cs:__real@3b360b61
              vaddss  xmm2, xmm5, cs:__real@3f000000
              vxorps  xmm0, xmm0, xmm0
              vroundss xmm4, xmm0, xmm2, 1
              vmovss  xmm0, cs:__real@48afc800
              vmovd   xmm1, eax
              vcvtdq2ps xmm1, xmm1
              vdivss  xmm1, xmm0, xmm1
              vsubss  xmm2, xmm5, xmm4
              vmulss  xmm7, xmm2, xmm1
            }
            if ( BG_PlayerASM_IsMoveBackwardAlias(packedAnimIndex, v24) )
              __asm { vxorps  xmm7, xmm7, cs:__xmm@80000000800000008000000080000000 }
            __asm
            {
              vmulss  xmm0, xmm7, cs:__real@3bb60b61; val
              vmovss  xmm7, cs:__real@3f800000
              vmovss  xmm1, cs:__real@bf800000; min
              vmovaps xmm2, xmm7; max
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vmovss  dword ptr [rdi+0A20h], xmm0
              vandps  xmm0, xmm0, xmm2
              vcomiss xmm0, cs:__real@3e4ccccd
            }
            if ( v49 | v52 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+0A40h]
                vandps  xmm0, xmm0, xmm2
                vcomiss xmm0, cs:__real@3ccccccd
              }
              if ( v49 )
              {
                __asm
                {
                  vmovss  dword ptr [rsp+0E8h+pOutAnimCurveID], xmm7
                  vmovss  [rsp+0E8h+animEntryToSkip], xmm6
                  vmovss  dword ptr [rsp+0E8h+fmt], xmm8
                }
                XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, pOutAnimIndex, fmtc, *(float *)&animEntryToSkipb, pOutAnimCurveIDa, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
              }
            }
            else
            {
              Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerasm_loco_move_turn_max_player_speed, "playerasm_loco_move_turn_max_player_speed");
              __asm
              {
                vxorps  xmm2, xmm2, xmm2
                vcvtsi2ss xmm2, xmm2, dword ptr [rdi+147Ch]
                vdivss  xmm0, xmm2, xmm0; val
                vmovaps xmm2, xmm7; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmovss  dword ptr [rsp+0E8h+pOutAnimCurveID], xmm7
                vmovss  [rsp+0E8h+animEntryToSkip], xmm6
                vmovss  dword ptr [rsp+0E8h+fmt], xmm0
              }
              XAnimSetCompleteGoalWeight(obj, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, fmtb, *(float *)&animEntryToSkipa, pOutAnimCurveID, (scr_string_t)0, 0, 0, curveID, modelNameMap);
            }
          }
          __asm
          {
            vmovaps xmm6, [rsp+0E8h+var_58]
            vmovaps xmm8, [rsp+0E8h+var_78]
          }
        }
      }
    }
    __asm { vmovaps xmm7, [rsp+0E8h+var_68] }
  }
}

/*
==============
BG_PlayerASM_UpdateAlwaysOn
==============
*/
void BG_PlayerASM_UpdateAlwaysOn(const characterInfo_t *ci, DObj *obj, const PlayerASM_AnimSlot slot, const unsigned int animsetIndex, unsigned int stateIndex, float mainBlendTime, XAnimCurveID mainCurveID, const PlayerCustomAnimHandlerType mainAliasAnimType, XModelNameMap *modelNameMap)
{
  const Animset *AnimsetByIndex; 
  const Animset *v14; 
  unsigned int numStates; 
  __int64 v16; 
  __int64 v17; 
  const Animset *v18; 
  scr_string_t alwaysOnStateName; 
  const Animset *v20; 
  int v21; 
  const Animset *v22; 
  unsigned int NumEntriesForStateIndex; 
  unsigned int v24; 
  XModelNameMap *v25; 
  const Animset *v28; 
  PlayerCustomAnimHandlerType v29; 
  int v30; 
  const Animset *v31; 
  float fmt; 
  float fmta; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  float pOutAnimSubtreeIDa; 
  XAnimCurveID *pOutAnimCurveID; 
  float pOutAnimCurveIDa; 
  scr_string_t notifyName; 
  unsigned int notifyType; 
  char v47; 
  XAnimSubTreeID v48; 
  int pOutStateIndex; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  AnimsetState *outState; 
  AnimsetAnim *ppOutAnim; 
  unsigned __int8 v57; 
  XAnimCurveID v58; 

  v57 = slot;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 253, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( animsetIndex >= 4 )
  {
    LODWORD(pOutAnimSubtreeID) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", pOutAnimSubtreeID, 4) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v14 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    v16 = (int)stateIndex;
    if ( stateIndex >= numStates )
    {
      LODWORD(pOutAnimCurveID) = numStates;
      LODWORD(pOutAnimSubtreeID) = stateIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
        __debugbreak();
    }
    v17 = (__int64)&v14->states[v16];
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 257, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
      __debugbreak();
    v47 = *(_BYTE *)(v17 + 102);
    if ( animsetIndex >= 4 )
    {
      LODWORD(pOutAnimCurveID) = 4;
      LODWORD(pOutAnimSubtreeID) = animsetIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2652, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
        __debugbreak();
    }
    v18 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2654, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
      __debugbreak();
    alwaysOnStateName = v18->alwaysOnStateName;
    if ( alwaysOnStateName )
    {
      outState = NULL;
      v20 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
      if ( BG_Animset_GetStateInfoByName(v20, alwaysOnStateName, &outState, &pOutStateIndex) )
      {
        v21 = pOutStateIndex;
        if ( animsetIndex >= 4 )
        {
          LODWORD(pOutAnimCurveID) = 4;
          LODWORD(pOutAnimSubtreeID) = animsetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2699, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
            __debugbreak();
        }
        v22 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2701, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
          __debugbreak();
        NumEntriesForStateIndex = BG_Animset_GetNumEntriesForStateIndex(v22, v21);
        v24 = 0;
        if ( NumEntriesForStateIndex )
        {
          v25 = modelNameMap;
          __asm
          {
            vmovaps [rsp+100h+var_50], xmm6
            vmovss  xmm6, cs:__real@3f800000
            vmovaps [rsp+100h+var_60], xmm7
            vmovss  xmm7, [rbp+37h+mainBlendTime]
          }
          do
          {
            v28 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
            if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 276, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
              __debugbreak();
            BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(v28, pOutStateIndex, v24, (const AnimsetAlias **)&outState, (const AnimsetAnim **)&ppOutAnim);
            v29 = *(_BYTE *)(*(_QWORD *)&outState->stateType + 80i64);
            if ( (unsigned __int8)(v29 - 1) > 2u && (unsigned __int8)(v29 - 10) > 1u )
            {
              v30 = pOutStateIndex;
              v31 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
              BG_Animset_GetAnimIndexFromStateIndexAndEntry(v31, v30, v24, &pOutAnimIndex, &pOutGraftNode, &v48, &v58);
              if ( (unsigned __int8)(v29 - 4) > 5u )
              {
                _RAX = outState;
                if ( v47 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rax+3Ch]
                    vmovss  dword ptr [rsp+100h+fmt], xmm0
                  }
                  XAnimClearTreeGoalWeights(obj->tree, pOutGraftNode, v48, pOutAnimIndex, fmta, 0, NULL, v58);
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rax+3Ch]
                    vmovss  dword ptr [rsp+100h+pOutAnimCurveID], xmm6
                    vmovss  dword ptr [rsp+100h+pOutAnimSubtreeID], xmm0
                    vmovss  dword ptr [rsp+100h+fmt], xmm6
                  }
                  XAnimSetCompleteGoalWeight(obj, pOutGraftNode, v48, pOutAnimIndex, fmt, pOutAnimSubtreeIDa, pOutAnimCurveIDa, (scr_string_t)0, 0, 0, v58, v25);
                }
              }
              else
              {
                _RAX = outState;
                __asm
                {
                  vmovss  xmm0, dword ptr [rax+3Ch]
                  vmovss  [rsp+100h+notifyType], xmm0
                  vmovss  [rsp+100h+notifyName], xmm7
                }
                BG_PlayerASM_UpdateAlwaysOn_CustomAnims(obj, ci, (const PlayerASM_AnimSlot)v57, v29, pOutGraftNode, v48, pOutAnimIndex, *(const float *)&notifyName, *(const float *)&notifyType, mainCurveID, mainAliasAnimType, v47 == 0, v25);
              }
            }
            ++v24;
          }
          while ( v24 < NumEntriesForStateIndex );
          __asm
          {
            vmovaps xmm7, [rsp+100h+var_60]
            vmovaps xmm6, [rsp+100h+var_50]
          }
        }
      }
    }
  }
}

/*
==============
BG_PlayerASM_UpdateAlwaysOn_CustomAnims
==============
*/
void BG_PlayerASM_UpdateAlwaysOn_CustomAnims(DObj *obj, const characterInfo_t *ci, const PlayerASM_AnimSlot slot, const PlayerCustomAnimHandlerType animType, unsigned int graftNode, XAnimSubTreeID subtreeID, unsigned int animIndex, const float mainBlendtime, const float alwaysOnBlendtime, XAnimCurveID curveID, const PlayerCustomAnimHandlerType mainAliasAnimType, bool turnOn, XModelNameMap *modelNameMap)
{
  char v15; 
  __int64 v19; 
  const PlayerASMCustomAlwaysOnAnimHandler *v20; 
  const PlayerASMCustomAlwaysOnAnimHandler *v21; 
  float fmt; 
  float fmta; 
  __int64 goalTime; 
  float goalTimea; 
  __int64 rate; 
  float ratea; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  v15 = slot;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 216, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 217, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  __asm { vmovss  xmm6, [rsp+88h+alwaysOnBlendtime] }
  if ( (unsigned __int8)animType >= PLAYER_CUSTOM_ANIM_HANDLER_COUNT )
  {
    LODWORD(goalTime) = (unsigned __int8)animType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 197, ASSERT_TYPE_ASSERT, "(unsigned)( animType ) < (unsigned)( PlayerCustomAnimHandlerType::PLAYER_CUSTOM_ANIM_HANDLER_COUNT )", "animType doesn't index PlayerCustomAnimHandlerType::PLAYER_CUSTOM_ANIM_HANDLER_COUNT\n\t%i not in [0, %i)", goalTime, 12) )
      __debugbreak();
  }
  v19 = 0i64;
  v20 = g_PlayerCustomAlwaysOnAnimHandlers;
  while ( v20->animType != animType )
  {
    v19 = (unsigned int)(v19 + 1);
    ++v20;
    if ( (unsigned int)v19 >= 2 )
    {
      v21 = NULL;
      goto LABEL_15;
    }
  }
  v21 = &g_PlayerCustomAlwaysOnAnimHandlers[v19];
  if ( v21 )
    goto LABEL_17;
LABEL_15:
  LODWORD(rate) = (unsigned __int8)animType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 222, ASSERT_TYPE_ASSERT, "(customHandler)", "%s\n\tInvalid always_on custom anim handler '%d'", "customHandler", rate) )
    __debugbreak();
LABEL_17:
  if ( v21->animSlot[0] == v15 )
  {
    if ( turnOn && BG_GetConditionValue(ci, v21->animCondition) )
    {
      if ( mainAliasAnimType != v21->inAnimType && mainAliasAnimType != v21->outAnimType )
      {
        __asm
        {
          vmovss  xmm1, cs:__real@3f800000
          vmovss  xmm0, [rsp+88h+mainBlendtime]
          vmovss  [rsp+88h+rate], xmm1
          vmovss  [rsp+88h+goalTime], xmm0
          vmovss  dword ptr [rsp+88h+fmt], xmm1
        }
        XAnimSetCompleteGoalWeight(obj, graftNode, subtreeID, animIndex, fmt, goalTimea, ratea, (scr_string_t)0, 0, 0, curveID, modelNameMap);
        goto LABEL_25;
      }
      __asm { vmovss  xmm6, [rsp+88h+mainBlendtime] }
    }
    __asm { vmovss  dword ptr [rsp+88h+fmt], xmm6 }
    XAnimClearTreeGoalWeights(obj->tree, graftNode, subtreeID, animIndex, fmta, 0, NULL, LINEAR);
  }
LABEL_25:
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
BG_PlayerASM_UpdateTreeParameters
==============
*/
void BG_PlayerASM_UpdateTreeParameters(DObj *obj, characterInfo_t *ci, bool isNewAnim)
{
  double v4; 
  unsigned int Anim; 
  unsigned int Animset; 
  float lastStrafeAngle; 

  _RBX = ci;
  if ( !PlayerASM_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2408, ASSERT_TYPE_ASSERT, "(PlayerASM_IsEnabled())", (const char *)&queryFormat, "PlayerASM_IsEnabled()") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2386, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Anim = BG_PlayerASM_GetAnim(_RBX, MOVEMENT);
  Animset = BG_PlayerASM_GetAnimset(_RBX);
  if ( isNewAnim && Anim && BG_PlayerASM_IsStopAlias(Anim, Animset) )
  {
    lastStrafeAngle = _RBX->playerASMLocomotion.lastStrafeAngle;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0A28h]
      vmovss  dword ptr [rbx+0A1Ch], xmm0
    }
    _RBX->playerASMLocomotion.stopAngle = lastStrafeAngle;
  }
  BG_PlayerASM_LerpTreeParameters(_RBX, v4);
  *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(_RBX, 0);
  __asm { vmovaps xmm2, xmm0; value }
  XAnimSetFloatGameParameterByIndex(obj, 0, *(float *)&_XMM2);
  *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(_RBX, 0x24u);
  __asm { vmovaps xmm2, xmm0; value }
  XAnimSetFloatGameParameterByIndex(obj, 0x24u, *(float *)&_XMM2);
  *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(_RBX, 0x25u);
  __asm { vmovaps xmm2, xmm0; value }
  XAnimSetFloatGameParameterByIndex(obj, 0x25u, *(float *)&_XMM2);
  *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(_RBX, 0x26u);
  __asm { vmovaps xmm2, xmm0; value }
  XAnimSetFloatGameParameterByIndex(obj, 0x26u, *(float *)&_XMM2);
  *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(_RBX, 0x2Bu);
  __asm { vmovaps xmm2, xmm0; value }
  XAnimSetFloatGameParameterByIndex(obj, 0x2Bu, *(float *)&_XMM2);
  *(double *)&_XMM0 = BG_PlayerASM_GetParameterValue(_RBX, 0x2Eu);
  __asm { vmovaps xmm2, xmm0; value }
  XAnimSetFloatGameParameterByIndex(obj, 0x2Eu, *(float *)&_XMM2);
}

