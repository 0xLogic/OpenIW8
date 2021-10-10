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
char BG_PlayerASM_ApplyAimAnims(characterInfo_t *ci, DObj *obj, XAnimTree *tree, const unsigned int animsetIndex, const AnimsetAlias *pAlias, const float aimBlendTime, bool clear, bool animStateHasChanged, XModelNameMap *modelNameMap, const unsigned int flags)
{
  const AnimsetAlias *v10; 
  scr_string_t redAnims; 
  const Animset *AnimsetByIndex; 
  int IndexOfRandomAnimFrom; 
  int v22; 
  const Animset *v23; 
  unsigned int Anim; 
  PlayerASM_AnimSlot v25; 
  unsigned int v26; 
  unsigned int v27; 
  bool v28; 
  const dvar_t *v29; 
  bool v30; 
  float v31; 
  float v33; 
  unsigned int TreeParent; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  float outAimCircleAngleNormalized; 
  float outAimConeAngleNormalized; 
  int pOutStateIndex; 
  float outAimConeAngleNormalizedStrafe; 
  float outAimCircleAngleNormalizedStrafe; 
  AnimsetState *outState; 

  v10 = pAlias;
  redAnims = (scr_string_t)pAlias->u.m_AIAnimsetAlias[3].redAnims;
  _XMM0 = flags & 4;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM7 = 0i64;
  __asm { vblendvps xmm0, xmm7, xmm3, xmm2 }
  *(float *)&pAlias = *(float *)&_XMM0;
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  if ( !BG_Animset_GetStateInfoByName(AnimsetByIndex, redAnims, &outState, &pOutStateIndex) )
    return 0;
  IndexOfRandomAnimFrom = BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(NULL, ci->entityNum, animsetIndex, outState, SHIDWORD(v10->u.m_AIAnimsetAlias[3].redAnims), 0);
  if ( IndexOfRandomAnimFrom < 0 )
    return 0;
  v22 = pOutStateIndex;
  v23 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  BG_Animset_GetAnimIndexFromStateIndexAndEntry(v23, v22, IndexOfRandomAnimFrom, &pOutAnimIndex, &pOutGraftNode, (XAnimSubTreeID *)&flags, (XAnimCurveID *)&aimBlendTime);
  if ( !pOutAnimIndex )
    return 0;
  Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
  LOBYTE(v25) = 1;
  v26 = Anim;
  v27 = BG_PlayerASM_GetAnim(ci, v25);
  v28 = BG_PlayerASM_IsNoAimingAlias(v26, animsetIndex) || BG_PlayerASM_IsNoAimingAlias(v27, animsetIndex);
  v29 = DCONST_DVARBOOL_playerasm_enableAiming;
  if ( !DCONST_DVARBOOL_playerasm_enableAiming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_enableAiming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v30 = !v29->current.enabled || v28;
  if ( clear || v30 )
  {
    v33 = *(float *)&pAlias;
    XAnimClearGoalWeight(tree, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex, *(float *)&pAlias, EASE_IN_OUT_SINE);
    LODWORD(outAimCircleAngleNormalized) = pOutAnimIndex;
    LODWORD(outAimConeAngleNormalized) = pOutGraftNode;
    LOWORD(pAlias) = flags;
    BG_PlayerASM_FindParentKnob(tree, (unsigned int *)&outAimConeAngleNormalized, (XAnimSubTreeID *)&pAlias, (unsigned int *)&outAimCircleAngleNormalized);
    TreeParent = LODWORD(outAimCircleAngleNormalized);
    if ( LODWORD(outAimCircleAngleNormalized) == pOutAnimIndex )
      TreeParent = XAnimGetTreeParent(tree->anims, pOutAnimIndex);
    if ( TreeParent )
      XAnimClearGoalWeight(tree, LODWORD(outAimConeAngleNormalized), (const XAnimSubTreeID)pAlias, TreeParent, v33, EASE_IN_OUT_SINE);
    return 1;
  }
  BG_PlayerASM_CalculateAimScrubTimeAndWeight(ci, &outAimConeAngleNormalized, &outAimCircleAngleNormalized, &outAimConeAngleNormalizedStrafe, &outAimCircleAngleNormalizedStrafe);
  v31 = outAimConeAngleNormalized;
  XAnimSetFloatGameParameterByIndex(obj, 0x27u, outAimConeAngleNormalized);
  XAnimSetFloatGameParameterByIndex(obj, 0x28u, outAimCircleAngleNormalized);
  XAnimSetFloatGameParameterByIndex(obj, 0x29u, outAimConeAngleNormalizedStrafe);
  XAnimSetFloatGameParameterByIndex(obj, 0x2Au, outAimCircleAngleNormalizedStrafe);
  if ( !animStateHasChanged )
    return 1;
  if ( XAnimGetInfoIndex(tree, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex) )
  {
    XAnimSetCompleteGoalWeight(obj, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex, 1.0, *(float *)&pAlias, 0.0, (scr_string_t)0, 0, 0, EASE_IN_OUT_SINE, modelNameMap);
  }
  else
  {
    XAnimSetCompleteGoalWeight(obj, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex, 1.0, *(float *)&pAlias, 0.0, (scr_string_t)0, 0, 0, EASE_IN_OUT_SINE, modelNameMap);
    XAnimSetTime(tree, pOutGraftNode, (const XAnimSubTreeID)flags, pOutAnimIndex, v31);
  }
  return 1;
}

/*
==============
BG_PlayerASM_ApplyAliasAddonAnims
==============
*/
void BG_PlayerASM_ApplyAliasAddonAnims(characterInfo_t *ci, DObj *obj, XAnimTree *tree, const PlayerASM_AnimSlot slot, const unsigned int animsetIndex, const AnimsetAlias *pAlias, PlayerASM_AnimOverrides *animOverrides, const AnimsetAlias *newAnimAlias, const bool clear, XModelNameMap *modelNameMap, const unsigned int flags)
{
  unsigned __int8 v12; 
  const AnimsetAlias *v14; 
  unsigned int v15; 
  BgStatic *ActiveStatics; 
  __int64 m_AIAnimsetAlias; 
  unsigned int v18; 
  PlayerASM_AnimOverrides *v19; 
  __int64 v21; 
  scr_string_t v22; 
  const Animset *AnimsetByIndex; 
  int IndexOfRandomAnimFrom; 
  const AnimsetAlias *v25; 
  int v26; 
  const Animset *v27; 
  bool ShouldSkipAddon; 
  const AnimsetAlias *v29; 
  float v30; 
  const XAnim_s *SubTreeAnims; 
  int v32; 
  AnimsetAlias_Union v33; 
  unsigned int redAnims; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  XAnimNodeTypeID nodeType; 
  __int64 animEntryToSkip; 
  __int64 animEntryToSkipa; 
  XAnimCurveID *pOutAnimCurveID; 
  XAnimCurveID *pOutAnimCurveIDa; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  int pOutStateIndex; 
  AnimsetState *outState; 
  __int64 v50; 
  XAnimSubTreeID pOutAnimSubtreeID; 
  XAnimTree *treea; 
  XAnimCurveID curveID; 

  treea = tree;
  v12 = slot;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 602, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 603, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 604, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v14 = pAlias;
  if ( !pAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 605, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  v15 = animsetIndex;
  if ( animsetIndex >= 4 )
  {
    LODWORD(animEntryToSkip) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 606, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animEntryToSkip, 4) )
      __debugbreak();
  }
  if ( v12 >= 2u )
  {
    LODWORD(pOutAnimCurveID) = 2;
    LODWORD(animEntryToSkip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 607, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", animEntryToSkip, pOutAnimCurveID) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( v14 )
  {
    m_AIAnimsetAlias = (__int64)v14->u.m_AIAnimsetAlias;
    v50 = m_AIAnimsetAlias;
    if ( !m_AIAnimsetAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 618, ASSERT_TYPE_ASSERT, "(playerAlias)", (const char *)&queryFormat, "playerAlias") )
      __debugbreak();
    v18 = 0;
    if ( *(_DWORD *)(m_AIAnimsetAlias + 96) )
    {
      v19 = animOverrides;
      _XMM7 = 0i64;
      do
      {
        pAlias = NULL;
        v21 = *(_QWORD *)(m_AIAnimsetAlias + 88) + 32i64 * v18;
        if ( !*(_DWORD *)(v21 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 624, ASSERT_TYPE_ASSERT, "(addonEntry->addonType != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "addonEntry->addonType != NULL_SCR_STRING") )
          __debugbreak();
        v22 = *(_DWORD *)v21;
        if ( *(_DWORD *)v21 )
        {
          if ( *(_DWORD *)(v21 + 4) )
          {
            AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v15);
            if ( BG_Animset_GetStateInfoByName(AnimsetByIndex, v22, &outState, &pOutStateIndex) )
            {
              IndexOfRandomAnimFrom = BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(NULL, ci->entityNum, v15, outState, *(const scr_string_t *)(v21 + 4), 0);
              if ( IndexOfRandomAnimFrom >= 0 )
              {
                v26 = pOutStateIndex;
                v27 = BG_PlayerASM_GetAnimsetByIndex(v15);
                BG_Animset_GetAnimIndexFromStateIndexAndEntry(v27, v26, IndexOfRandomAnimFrom, &pOutAnimIndex, &pOutGraftNode, &pOutAnimSubtreeID, &curveID);
                ShouldSkipAddon = BG_PlayerASM_ShouldSkipAddon(ci, v15, pOutStateIndex, IndexOfRandomAnimFrom);
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
                  v32 = *(_DWORD *)(v21 + 8);
                  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 564, ASSERT_TYPE_ASSERT, "(addonType != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "addonType != NULL_SCR_STRING") )
                    __debugbreak();
                  if ( newAnimAlias )
                  {
                    v33.m_AIAnimsetAlias = (AIAnimsetAlias *)newAnimAlias->u;
                    if ( !v33.m_AIAnimsetAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 572, ASSERT_TYPE_ASSERT, "(newAnimPlayerAlias)", (const char *)&queryFormat, "newAnimPlayerAlias") )
                      __debugbreak();
                    redAnims = (unsigned int)v33.m_AIAnimsetAlias[6].redAnims;
                    v35 = 0;
                    if ( redAnims )
                    {
                      v36 = *(_QWORD *)&v33.m_AIAnimsetAlias[5].numRedAnims;
                      do
                      {
                        v37 = 32i64 * v35;
                        if ( *(_DWORD *)(v37 + v36) && *(_DWORD *)(v37 + v36 + 8) == v32 )
                          break;
                        ++v35;
                      }
                      while ( v35 < redAnims );
                    }
                  }
                  _XMM0 = flags & 4;
                  __asm
                  {
                    vpcmpeqd xmm2, xmm0, xmm1
                    vblendvps xmm0, xmm7, xmm6, xmm2
                  }
                  nodeType = SubTreeAnims->entries[pOutAnimIndex].nodeType;
                  animsetIndex = _XMM0;
                  if ( XAnimIsCustomNodeType(nodeType) )
                  {
                    XAnimSetGoalWeight(obj, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, 0.0, *(float *)&animsetIndex, 1.0, (scr_string_t)0, 0, 0, curveID, modelNameMap);
                  }
                  else
                  {
                    BG_PlayerASM_FindParentKnob(treea, &pOutGraftNode, &pOutAnimSubtreeID, &pOutAnimIndex);
                    XAnimClearTreeGoalWeights(treea, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, *(float *)&animsetIndex, 0, obj, curveID);
                  }
                }
                else if ( !ShouldSkipAddon )
                {
                  if ( v19 )
                  {
                    if ( BG_PlayerASM_FindValidAliasAddonOverrides(v19, *(scr_string_t *)(v21 + 8), (PlayerASM_AnimOverrideEntry **)&pAlias) )
                    {
                      BG_PlayerASM_ApplyAliasAddonOverrides(obj, ci, v19, *(scr_string_t *)(v21 + 8), 1, modelNameMap, flags);
                      v29 = pAlias;
                      *(_QWORD *)&pAlias->name = 0i64;
                      v29->anims = NULL;
                      *(_QWORD *)&v29->numAnims = 0i64;
                      LODWORD(v29->funcs) = 0;
                    }
                    if ( v19->count >= 0x10 )
                    {
                      LODWORD(pOutAnimCurveIDa) = 16;
                      LODWORD(animEntryToSkipa) = v19->count;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 701, ASSERT_TYPE_ASSERT, "(unsigned)( animOverrides->count ) < (unsigned)( ((8) * 2) )", "animOverrides->count doesn't index PLAYERASM_MAX_ADDON_OVERRIDES\n\t%i not in [0, %i)", animEntryToSkipa, pOutAnimCurveIDa) )
                        __debugbreak();
                    }
                    pAlias = (const AnimsetAlias *)&v19->entries[v19->count];
                    LODWORD(pAlias->anims) = v15;
                    pAlias->name = *(_DWORD *)v21;
                    pAlias->numAnims = *(_DWORD *)(v21 + 12);
                    *(&pAlias->numAnims + 1) = *(_DWORD *)(v21 + 16);
                    HIDWORD(pAlias->anims) = IndexOfRandomAnimFrom;
                    *((_DWORD *)&pAlias->name + 1) = *(_DWORD *)(v21 + 8);
                    LOBYTE(pAlias->funcs) = *(_BYTE *)(v21 + 20);
                    ++v19->count;
                  }
                  else
                  {
                    if ( (flags & 4) != 0 )
                      v30 = 0.0;
                    else
                      v30 = *(float *)(v21 + 12);
                    XAnimSetCompleteGoalWeight(obj, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, 1.0, v30, 1.0, (scr_string_t)0, 0, 0, curveID, modelNameMap);
                  }
                }
              }
              else if ( !clear && v19 && BG_PlayerASM_FindValidAliasAddonOverrides(v19, *(scr_string_t *)(v21 + 8), (PlayerASM_AnimOverrideEntry **)&pAlias) )
              {
                BG_PlayerASM_ApplyAliasAddonOverrides(obj, ci, v19, *(scr_string_t *)(v21 + 8), 1, modelNameMap, flags);
                v25 = pAlias;
                *(_QWORD *)&pAlias->name = 0i64;
                v25->anims = NULL;
                *(_QWORD *)&v25->numAnims = 0i64;
                LODWORD(v25->funcs) = 0;
              }
            }
          }
        }
        m_AIAnimsetAlias = v50;
        ++v18;
      }
      while ( v18 < *(_DWORD *)(v50 + 96) );
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
  lerpFrame_t *v10; 
  unsigned __int8 v11; 
  float v15; 
  const BgStatic *ActiveStatics; 
  DObj *DObj; 
  DObj *v18; 
  XAnimTree *v19; 
  XAnimTree *v20; 
  unsigned int animationNumber; 
  float v22; 
  float v23; 
  float v24; 
  unsigned int v25; 
  bool v26; 
  XAnimTree *v27; 
  unsigned int Animset; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  const Animset *AnimsetByIndex; 
  AnimsetAlias *v34; 
  scr_string_t curveName; 
  const char *v36; 
  AnimsetAlias_Union v37; 
  __int64 v38; 
  int latestSnapshotTime; 
  float v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  const Animset *v47; 
  XAnimSubTreeID v48; 
  const Animset *v49; 
  scr_string_t clearStateName; 
  const Animset *v51; 
  __int64 v52; 
  unsigned int numAnimAliases; 
  AnimsetAlias *animAliases; 
  unsigned int index; 
  int v56; 
  int v57; 
  const Animset *v58; 
  XAnimSubTreeID v59; 
  unsigned int v60; 
  unsigned int v61; 
  const XAnim_s *SubTreeAnims; 
  double Time; 
  unsigned int v64; 
  unsigned int v65; 
  float v66; 
  const Animset *v67; 
  unsigned int v68; 
  unsigned int v69; 
  __int64 v70; 
  const Animset *v71; 
  const Animset *v72; 
  unsigned int numStates; 
  scr_string_t AnimsetNameByIndex; 
  const char *v75; 
  scr_string_t StateNameFromIndex; 
  const char *v77; 
  unsigned int v78; 
  int v79; 
  int v80; 
  int v81; 
  const Animset *v82; 
  unsigned int v83; 
  const XAnim_s *v84; 
  scr_string_t v85; 
  scr_string_t AnimTree; 
  const char *v87; 
  scr_string_t v88; 
  const char *v89; 
  bool v90; 
  AnimsetAlias *v91; 
  bool AnimSyncParameters; 
  unsigned int v93; 
  unsigned __int8 v94; 
  __int64 v95; 
  XAnimSubTreeID v96; 
  unsigned int v97; 
  const XAnim_s *v98; 
  unsigned int parent; 
  unsigned __int16 InfoIndex; 
  XAnimSyncGroupID v101; 
  unsigned int v102; 
  XAnimSubTreeID v103; 
  unsigned int v104; 
  unsigned __int16 v105; 
  vec3_t *v106; 
  entityState_t *v107; 
  int v108; 
  vec3_t *v109; 
  char *fmt; 
  PlayerASM_AnimSlot fmta; 
  PlayerASM_AnimSlot fmtb; 
  __int64 animsetIndex; 
  unsigned int animsetIndexa; 
  __int64 animsetIndexb; 
  __int64 animsetIndexc; 
  XAnimCurveID *pOutAnimCurveID; 
  unsigned int pOutAnimCurveIDa; 
  XAnimCurveID *pOutAnimCurveIDb; 
  XAnimCurveID *pOutAnimCurveIDc; 
  unsigned int animStateIndex; 
  unsigned int animEntryIndex; 
  float lastAnimsetIndex; 
  bool animStateHasChanged; 
  XModelNameMap *v125; 
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
  unsigned int v140; 
  unsigned int v141; 
  unsigned int packedAnimIndex; 
  unsigned int outSyncRootAnimIndex; 
  unsigned int pOutGraftNode; 
  unsigned int pOutAnimIndex; 
  XModelNameMap *cachedModelNameMap; 
  DObj *obj; 
  AnimsetState *outState; 
  AnimsetAlias *newAnimAlias; 
  PlayerASM_AnimOverrides *v150; 
  AnimsetAlias *ppOutAlias; 
  characterInfo_t *cia; 
  const BgAnimStatic *v153; 
  lerpFrame_t *v154; 
  entityState_t *v155; 
  AnimsetAnim *ppOutAnim; 
  XAnimTree *tree; 
  vec3_t *v158; 
  vec3_t *v159; 
  vec3_t outAngleDela; 

  v10 = lf;
  v159 = (vec3_t *)movingPlatformOrigin;
  v11 = slot;
  v158 = (vec3_t *)movingPlatformAngles;
  v150 = animOverrides;
  cachedModelNameMap = modelNameMap;
  v154 = lf;
  outIsRestartSyncNode = slot;
  cia = ci;
  v155 = (entityState_t *)es;
  BG_CheckThread();
  v141 = 0;
  *(float *)&pOutAnimIndex = 0.0;
  pOutGraftNode = 0;
  pOutAnimSubtreeID = XANIM_SUBTREE_DEFAULT;
  _XMM8 = 0i64;
  v15 = 0.0;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1495, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1496, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  DObj = BG_GetDObj(ActiveStatics, es->number);
  obj = DObj;
  v18 = DObj;
  if ( DObj )
  {
    v19 = DObjGetTree(DObj);
    tree = v19;
    v20 = v19;
    if ( v19 )
    {
      Profile_Begin((v19->owner[0] != 0) + 439);
      v153 = ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v153 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1522, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      animationNumber = v10->animationNumber;
      v22 = FLOAT_3_0;
      v23 = FLOAT_65_0;
      newAnimAlias = NULL;
      BYTE1(outSyncGroup) = 0;
      stateIndex = -1;
      entryIndex = -1;
      outSyncRootAnimIndex = (flags >> 3) & 1;
      *(float *)&inOutAnimIndex = 0.0;
      outAnimState = -1;
      outAnimEntry = -1;
      v24 = FLOAT_1_0;
      packedAnimIndex = animationNumber;
      v25 = BG_PlayerASM_UnpackAnimFromCi(ci, (const PlayerASM_AnimSlot)v11, &outAnimsetIndex, &outAnimState, &outAnimEntry);
      v26 = v25 == animationNumber;
      v140 = v25;
      v27 = v18->tree;
      outResetSyncGroup = !v26;
      if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 485, ASSERT_TYPE_ASSERT, "(animTree)", (const char *)&queryFormat, "animTree") )
        __debugbreak();
      if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 487, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( (flags & 0x10) != 0 )
      {
        if ( v27->owner[0] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 492, ASSERT_TYPE_ASSERT, "(animTree->owner == XAnimOwner::CLIENT)", (const char *)&queryFormat, "animTree->owner == XAnimOwner::CLIENT") )
          __debugbreak();
LABEL_24:
        if ( (flags & 0x10) != 0 )
        {
          if ( packedAnimIndex )
          {
            Animset = BG_PlayerASM_GetAnimset(ci);
            v29 = Animset;
            if ( Animset >= 4 )
            {
              LODWORD(animsetIndex) = Animset;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1552, ASSERT_TYPE_ASSERT, "(unsigned)( lastAnimsetIndex ) < (unsigned)( (1 << 2) )", "lastAnimsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
                __debugbreak();
            }
            BG_PlayerASM_UnpackAnim(v29, packedAnimIndex, &stateIndex, &entryIndex);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_playerasm_client_update_lod_warn, "playerasm_client_update_lod_warn") && (outResetSyncGroup || previousSlotStateChanged) )
            {
              LODWORD(animsetIndex) = v10->animationNumber;
              LODWORD(fmt) = v140;
              Com_PrintWarning(19, "[Entity %d, slot %d] Applying old anims to tree at low LOD (anim: %x, lf: %x)\n", (unsigned int)ci->entityNum, v11, fmt, animsetIndex);
            }
            lastSubtreeID = flags;
            v125 = cachedModelNameMap;
            animStateHasChanged = 0;
            lastAnimsetIndex = FLOAT_N1_0;
            animEntryIndex = entryIndex;
            animStateIndex = stateIndex;
            pOutAnimCurveIDa = packedAnimIndex;
            animsetIndexa = v29;
            goto LABEL_36;
          }
        }
        else if ( v140 )
        {
          lastSubtreeID = flags;
          v125 = cachedModelNameMap;
          animStateHasChanged = previousSlotStateChanged;
          lastAnimsetIndex = FLOAT_N1_0;
          animEntryIndex = outAnimEntry;
          animStateIndex = outAnimState;
          pOutAnimCurveIDa = v140;
          animsetIndexa = outAnimsetIndex;
LABEL_36:
          LOBYTE(fmt) = v11;
          BG_PlayerASM_ApplyExtraAnims(ci, v18, v20, v150, (const PlayerASM_AnimSlot)fmt, animsetIndexa, pOutAnimCurveIDa, animStateIndex, animEntryIndex, lastAnimsetIndex, NULL, 0, animStateHasChanged, v125, lastSubtreeID);
        }
        Profile_EndInternal(NULL);
        return;
      }
      if ( (flags & 2) == 0 && v10->animationNumber == BG_PlayerASM_GetAnim(ci, (const PlayerASM_AnimSlot)v11) )
        goto LABEL_24;
      v30 = outAnimsetIndex;
      v31 = outAnimEntry;
      v32 = outAnimState;
      if ( outAnimsetIndex >= 4 )
      {
        LODWORD(animsetIndex) = outAnimsetIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 148, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
          __debugbreak();
      }
      ppOutAlias = NULL;
      ppOutAnim = NULL;
      IDFromPrimitiveCurveName = LINEAR;
      if ( v140 )
      {
        AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(v30);
        if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 169, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
          __debugbreak();
        if ( AnimsetByIndex->mode != ASM_MODE_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 170, ASSERT_TYPE_ASSERT, "(animset->mode == ASM_MODE_PLAYER)", (const char *)&queryFormat, "animset->mode == ASM_MODE_PLAYER") )
          __debugbreak();
        if ( BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, v32, v31) )
        {
          BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(AnimsetByIndex, v32, v31, (const AnimsetAlias **)&ppOutAlias, (const AnimsetAnim **)&ppOutAnim);
          v34 = ppOutAlias;
          if ( ppOutAlias )
          {
            curveName = ppOutAlias->curveName;
            v24 = *((float *)&ppOutAlias->u.m_AIAnimsetAlias->redAnims + 1);
            if ( curveName )
            {
              IDFromPrimitiveCurveName = XAnimCurve_GetIDFromPrimitiveCurveName(curveName);
              if ( IDFromPrimitiveCurveName == CURVE_ASSET_END )
              {
                v36 = SL_ConvertToString(curveName);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 184, ASSERT_TYPE_ASSERT, "(*outCurveID != XAnimCurveID::MAX)", "%s\n\tInvalid xanim curve name '%s'\n", "*outCurveID != XAnimCurveID::MAX", v36) )
                  __debugbreak();
              }
              v34 = ppOutAlias;
            }
            v37.m_AIAnimsetAlias = (AIAnimsetAlias *)v34->u;
            newAnimAlias = v34;
            v22 = *(float *)&v37.m_AIAnimsetAlias[4].numRedAnims;
            v23 = *((float *)&v37.m_AIAnimsetAlias[4].numRedAnims + 1);
          }
        }
      }
      v38 = 0i64;
      _XMM0 = flags & 4;
      latestSnapshotTime = v153->latestSnapshotTime;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm6, xmm2
      }
      inOutAnimIndex = _XMM0;
      if ( v10->oldFrameSnapshotTime == latestSnapshotTime )
      {
        v43 = 0.0;
        outSyncRootAnimIndex = 1;
      }
      else
      {
        v43 = *(float *)&inOutAnimIndex;
      }
      v44 = packedAnimIndex;
      if ( !packedAnimIndex )
        goto LABEL_110;
      v45 = BG_PlayerASM_GetAnimset(ci);
      v141 = v45;
      v46 = v45;
      if ( v45 >= 4 )
      {
        LODWORD(pOutAnimCurveID) = 4;
        LODWORD(animsetIndex) = v45;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1596, ASSERT_TYPE_ASSERT, "(unsigned)( lastAnimsetIndex ) < (unsigned)( (1 << 2) )", "lastAnimsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
          __debugbreak();
      }
      BG_PlayerASM_UnpackAnim(v46, v44, &stateIndex, &entryIndex);
      v47 = BG_PlayerASM_GetAnimsetByIndex(v46);
      if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1600, ASSERT_TYPE_ASSERT, "(lastAnimset)", (const char *)&queryFormat, "lastAnimset") )
        __debugbreak();
      if ( !BG_PlayerASM_IsAnimEntryValid(v47, stateIndex, entryIndex) )
        goto LABEL_110;
      *(float *)&inOutAnimIndex = 0.0;
      v48 = XANIM_SUBTREE_DEFAULT;
      if ( !outResetSyncGroup || outIsRestartSyncNode )
        goto LABEL_85;
      if ( v46 >= 4 )
      {
        LODWORD(pOutAnimCurveID) = 4;
        LODWORD(animsetIndex) = v46;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2670, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
          __debugbreak();
      }
      v49 = BG_PlayerASM_GetAnimsetByIndex(v46);
      if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2672, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
        __debugbreak();
      clearStateName = v49->clearStateName;
      if ( clearStateName && v49->clearAliasName && (outState = NULL, v51 = BG_PlayerASM_GetAnimsetByIndex(v141), BG_Animset_GetStateInfoByName(v51, clearStateName, &outState, NULL)) && (v52 = 0i64, (numAnimAliases = outState->numAnimAliases) != 0) )
      {
        animAliases = outState->animAliases;
        while ( animAliases[v52].name != v49->clearAliasName || !animAliases[v52].numAnims )
        {
          v52 = (unsigned int)(v52 + 1);
          if ( (unsigned int)v52 >= numAnimAliases )
            goto LABEL_83;
        }
        index = animAliases[v52].anims->anim.index;
      }
      else
      {
LABEL_83:
        index = 0;
      }
      if ( !index )
      {
LABEL_85:
        v56 = entryIndex;
        v57 = stateIndex;
        v58 = BG_PlayerASM_GetAnimsetByIndex(v141);
        BG_Animset_GetAnimIndexFromStateIndexAndEntry(v58, v57, v56, &pOutAnimIndex, &pOutGraftNode, &pOutAnimSubtreeID, NULL);
        inOutSubTreeID[0] = pOutAnimSubtreeID;
        inOutAnimIndex = pOutAnimIndex;
        inOutGraftAnimIndex = pOutGraftNode;
        XAnimBlendSpace_ToggleUpdate(v18, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, 0);
        BG_PlayerASM_FindParentKnob(v20, &inOutGraftAnimIndex, inOutSubTreeID, &inOutAnimIndex);
        v59 = pOutAnimSubtreeID;
        v60 = pOutAnimIndex;
        v61 = pOutGraftNode;
        SubTreeAnims = XAnimGetSubTreeAnims(v20, pOutAnimSubtreeID);
        if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1414, ASSERT_TYPE_ASSERT, "(animTreeAnims)", (const char *)&queryFormat, "animTreeAnims") )
          __debugbreak();
        if ( v60 >= SubTreeAnims->size )
        {
          LODWORD(pOutAnimCurveIDb) = SubTreeAnims->size;
          LODWORD(animsetIndexb) = v60;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1415, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( animTreeAnims->size )", "animIndex doesn't index animTreeAnims->size\n\t%i not in [0, %i)", animsetIndexb, pOutAnimCurveIDb) )
            __debugbreak();
        }
        if ( XAnimHasTime(SubTreeAnims, v60) )
        {
          Time = XAnimGetTime(v20, v61, v59, v60);
          v15 = *(float *)&Time;
          if ( XAnimHasFinished(v20, v61, v59, v60) && XAnimIsLooped(SubTreeAnims, v60) )
          {
            v15 = 0.0;
          }
          else if ( (*(float *)&Time < 0.0 || *(float *)&Time > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1431, ASSERT_TYPE_ASSERT, "(time >= 0.f && time <= 1.f)", (const char *)&queryFormat, "time >= 0.f && time <= 1.f") )
          {
            __debugbreak();
          }
        }
        else
        {
          v15 = 0.0;
        }
        v48 = inOutSubTreeID[0];
        LODWORD(v38) = inOutGraftAnimIndex;
        index = inOutAnimIndex;
      }
      XAnimClearTreeGoalWeights(v20, v38, v48, index, v43, 0, v18, IDFromPrimitiveCurveName);
      v64 = v141;
      if ( outResetSyncGroup )
      {
        BG_PlayerASM_ClearGraftTrees(v18, v141, stateIndex, v43, IDFromPrimitiveCurveName);
      }
      else
      {
        v65 = entryIndex;
        if ( entryIndex == outAnimEntry )
        {
LABEL_106:
          if ( newAnimAlias )
            v66 = *(float *)&newAnimAlias->u.m_AIAnimsetAlias[4].redAnims;
          else
            v66 = FLOAT_N1_0;
          LOBYTE(fmta) = outIsRestartSyncNode;
          BG_PlayerASM_ApplyExtraAnims(cia, v18, v20, v150, fmta, v64, packedAnimIndex, stateIndex, v65, v66, newAnimAlias, 1, 1, cachedModelNameMap, flags);
          v38 = 0i64;
LABEL_110:
          v67 = BG_PlayerASM_GetAnimsetByIndex(outAnimsetIndex);
          if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1648, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
            __debugbreak();
          v68 = v140;
          if ( v140 && BG_PlayerASM_IsAnimEntryValid(v67, outAnimState, outAnimEntry) )
          {
            v69 = outAnimsetIndex;
            v70 = (int)outAnimState;
            if ( outAnimsetIndex >= 4 )
            {
              LODWORD(pOutAnimCurveID) = 4;
              LODWORD(animsetIndex) = outAnimsetIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
                __debugbreak();
              if ( v69 >= 4 )
              {
                LODWORD(pOutAnimCurveID) = 4;
                LODWORD(animsetIndex) = v69;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
                  __debugbreak();
              }
            }
            v71 = BG_PlayerASM_GetAnimsetByIndex(v69);
            v72 = v71;
            if ( v71 )
            {
              numStates = v71->numStates;
              if ( (unsigned int)v70 >= numStates )
              {
                LODWORD(pOutAnimCurveID) = numStates;
                LODWORD(animsetIndex) = v70;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
                  __debugbreak();
              }
              v38 = (__int64)&v72->states[v70];
            }
            if ( !v38 )
            {
              AnimsetNameByIndex = BG_PlayerASM_GetAnimsetNameByIndex(v69);
              v75 = SL_ConvertToString(AnimsetNameByIndex);
              StateNameFromIndex = BG_PlayerASM_GetStateNameFromIndex(v69, v70);
              v77 = SL_ConvertToString(StateNameFromIndex);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 129, ASSERT_TYPE_ASSERT, "(pState)", "%s\n\tunable to find state %s in animset %s", "pState", v77, v75) )
                __debugbreak();
            }
            v78 = outAnimsetIndex;
            v26 = *(_BYTE *)(v38 + 100) == 0;
            v79 = outAnimEntry;
            v80 = outAnimState;
            v81 = outSyncRootAnimIndex | !v26;
            LODWORD(outState) = v81;
            inOutGraftAnimIndex = 0;
            *(float *)&inOutAnimIndex = 0.0;
            inOutSubTreeID[0] = XANIM_SUBTREE_DEFAULT;
            if ( outAnimsetIndex >= 4 )
            {
              LODWORD(pOutAnimCurveID) = 4;
              LODWORD(animsetIndex) = outAnimsetIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, pOutAnimCurveID) )
                __debugbreak();
            }
            v82 = BG_PlayerASM_GetAnimsetByIndex(v78);
            v83 = 0;
            BG_Animset_GetAnimIndexFromStateIndexAndEntry(v82, v80, v79, &inOutGraftAnimIndex, &inOutAnimIndex, inOutSubTreeID, NULL);
            v84 = XAnimGetSubTreeAnims(v20, inOutSubTreeID[0]);
            if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1666, ASSERT_TYPE_ASSERT, "(animTreeAnims)", (const char *)&queryFormat, "animTreeAnims") )
              __debugbreak();
            if ( inOutGraftAnimIndex >= v84->size )
            {
              v85 = BG_PlayerASM_GetAnimsetNameByIndex(outAnimsetIndex);
              AnimTree = BG_Animset_GetAnimTree(v85);
              v87 = SL_ConvertToString(AnimTree);
              v88 = BG_PlayerASM_GetAnimsetNameByIndex(outAnimsetIndex);
              v89 = SL_ConvertToString(v88);
              Com_Printf(18, "BG_PlayerASM_ApplyState: Bad anim index.  entnum = %d  animset = '%s' animtree = '%s'\n", (unsigned int)v155->number, v89, v87);
              v83 = 0;
            }
            v90 = !v20->children || (flags & 0xB) != 0;
            LOBYTE(v83) = v153->anim_user == 0;
            if ( outResetSyncGroup || v90 )
            {
              v91 = newAnimAlias;
              if ( !newAnimAlias )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1684, ASSERT_TYPE_ASSERT, "(alias)", (const char *)&queryFormat, "alias") )
                  __debugbreak();
                v91 = newAnimAlias;
              }
              BG_PlayerASM_UpdateAlwaysOn(cia, obj, (const PlayerASM_AnimSlot)outIsRestartSyncNode, outAnimsetIndex, outAnimState, v43, IDFromPrimitiveCurveName, (const PlayerCustomAnimHandlerType)v91->u.m_AIAnimsetAlias[5].redAnims, cachedModelNameMap);
              if ( outResetSyncGroup || v90 )
                BG_PlayerASM_GraftTrees(obj, outAnimsetIndex, outAnimState, v43, (const scr_string_t)0, v83, IDFromPrimitiveCurveName, cachedModelNameMap);
            }
            BG_PlayerASM_GraftAddons(obj, outAnimsetIndex, outAnimState, v43, (const scr_string_t)0, v83, IDFromPrimitiveCurveName, cachedModelNameMap);
            v68 = v140;
            LOBYTE(fmtb) = outIsRestartSyncNode;
            BG_PlayerASM_ApplyExtraAnims(cia, obj, v20, v150, fmtb, outAnimsetIndex, v140, outAnimState, outAnimEntry, -1.0, NULL, 0, 1, cachedModelNameMap, flags);
            if ( XAnimIsLeafNode(v84, inOutGraftAnimIndex) || XAnimIsCustomNodeType(v84->entries[inOutGraftAnimIndex].nodeType) )
            {
              outSyncRootAnimIndex = 0;
              outResetSyncGroup = 0;
              LOBYTE(outSyncGroup) = 4;
              outIsRestartSyncNode = 0;
              AnimSyncParameters = BG_PlayerASM_GetAnimSyncParameters(v20, v67, outAnimsetIndex, v68, outAnimState, outAnimEntry, inOutAnimIndex, inOutSubTreeID[0], inOutGraftAnimIndex, v141, packedAnimIndex, stateIndex, entryIndex, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, &outResetSyncGroup, &outSyncGroup, &outIsRestartSyncNode, &outSyncRootAnimIndex);
              v93 = outSyncRootAnimIndex;
              BYTE1(outSyncGroup) = AnimSyncParameters;
              if ( outIsRestartSyncNode && outSyncRootAnimIndex )
              {
                XAnimSetGoalWeight(obj, inOutAnimIndex, inOutSubTreeID[0], outSyncRootAnimIndex, 1.0, v43, v24, (scr_string_t)0, v83, 1, IDFromPrimitiveCurveName, cachedModelNameMap);
                XAnimClearChildGoalWeights(v20, inOutAnimIndex, inOutSubTreeID[0], v93, 0.0, LINEAR);
              }
              XAnimSetCompleteGoalWeight(obj, inOutAnimIndex, inOutSubTreeID[0], inOutGraftAnimIndex, 1.0, v43, v24, (scr_string_t)0, v83, v81, IDFromPrimitiveCurveName, cachedModelNameMap);
              XAnimBlendSpace_ToggleUpdate(obj, inOutAnimIndex, inOutSubTreeID[0], inOutGraftAnimIndex, 1);
              if ( outResetSyncGroup )
              {
                v94 = outSyncGroup;
                v95 = inOutGraftAnimIndex;
                v96 = inOutSubTreeID[0];
                v97 = inOutAnimIndex;
                if ( (unsigned __int8)outSyncGroup > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1149, ASSERT_TYPE_ASSERT, "(oldSyncGroup <= XAnimSyncGroupID::COUNT)", (const char *)&queryFormat, "oldSyncGroup <= XAnimSyncGroupID::COUNT") )
                  __debugbreak();
                v98 = XAnimGetSubTreeAnims(v20, v96);
                if ( (unsigned int)v95 >= v98->size )
                {
                  LODWORD(pOutAnimCurveIDc) = v98->size;
                  LODWORD(animsetIndexc) = v95;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1152, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", animsetIndexc, pOutAnimCurveIDc) )
                    __debugbreak();
                }
                parent = v98->entries[v95].parent;
                v20 = tree;
                InfoIndex = XAnimGetInfoIndex(tree, v97, v96, parent);
                if ( InfoIndex )
                {
                  LOBYTE(v101) = 4;
                  XAnimResetSyncGroupChildren(v20, InfoIndex, (const XAnimSyncGroupID)v94, v101);
                }
                v10 = v154;
                v81 = (int)outState;
              }
              if ( BYTE1(outSyncGroup) )
              {
                if ( v81 && v93 )
                {
                  v102 = inOutGraftAnimIndex;
                  if ( v93 != inOutGraftAnimIndex )
                    v102 = v93;
                  inOutGraftAnimIndex = v102;
                }
                else
                {
                  v102 = inOutGraftAnimIndex;
                }
                v103 = inOutSubTreeID[0];
                v104 = inOutAnimIndex;
                if ( v102 >= v84->size )
                {
                  LODWORD(pOutAnimCurveIDc) = v84->size;
                  LODWORD(animsetIndexc) = v102;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1441, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( animTreeAnims->size )", "animIndex doesn't index animTreeAnims->size\n\t%i not in [0, %i)", animsetIndexc, pOutAnimCurveIDc) )
                    __debugbreak();
                }
                if ( (v15 < 0.0 || v15 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1442, ASSERT_TYPE_ASSERT, "(currentTime >= 0.f && currentTime <= 1.f)", (const char *)&queryFormat, "currentTime >= 0.f && currentTime <= 1.f") )
                  __debugbreak();
                if ( XAnimHasTime(v84, v102) )
                {
                  if ( !XAnimIsLeafNode(v84, v102) )
                  {
                    v105 = XAnimGetInfoIndex(v20, v104, v103, v102);
                    if ( v105 )
                      XAnimGetAnimInfo(v105)->state.currentAnimTime = v15;
                  }
                  XAnimSetTreeChildTimes(v20, v104, v103, v102, v15);
                }
              }
              v68 = v140;
            }
            v106 = v158;
            v107 = v155;
            BGMovingPlatformPlayerAnim::PlayerAnimApplyRotation(&v10->movingPlatformPlayerAnim, v155, v158, v10, &outAngleDela);
            v108 = v153->latestSnapshotTime;
            if ( v108 != v10->oldFrameSnapshotTime )
            {
              v109 = v159;
              v10->oldFrameSnapshotTime = v108;
              BGMovingPlatformPlayerAnim::PlayerAnimCachePosition(&v10->movingPlatformPlayerAnim, v107, v10, v109, v106);
            }
            v10->lerpStrengthMin = v22;
            v10->lerpStrengthMax = v23;
          }
          v10->animsetIndex = outAnimsetIndex;
          v10->animationNumber = v68;
          Profile_EndInternal(NULL);
          return;
        }
      }
      BG_PlayerASM_ClearGraftAddons(v18, v64, stateIndex, v43, IDFromPrimitiveCurveName);
      v65 = entryIndex;
      goto LABEL_106;
    }
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
  AnimsetAlias *ppOutAlias; 
  AnimsetAnim *ppOutAnim; 
  PlayerASM_AnimOverrides *v28; 

  v28 = animOverrides;
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
        BG_PlayerASM_ApplyAliasAddonAnims(ci, obj, tree, (const PlayerASM_AnimSlot)(unsigned __int8)slot, v18, ppOutAlias, v28, newAnimAlias, clear, modelNameMap, flags);
      BG_PlayerASM_PlayMoveTurnAnim(ci, obj, tree, (const PlayerASM_AnimSlot)(unsigned __int8)slot, v18, packedAnimIndex, ppOutAlias, v25, v24, v23);
      if ( ppOutAlias )
      {
        if ( HIDWORD(ppOutAlias->u.m_AIAnimsetAlias[3].redAnims) )
          BG_PlayerASM_ApplyAimAnims(ci, obj, tree, v18, ppOutAlias, aimBlendTime, v25, animStateHasChanged, v24, v23);
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
  const dvar_t *v9; 
  BgStatic *ActiveStatics; 
  __int64 v11; 
  const dvar_t *v12; 
  float value; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  bool v18; 
  int IsMoveBackwardAlias; 
  float v20; 
  bool v21; 
  const dvar_t *v23; 
  float v25; 
  float v26; 
  __int128 v28; 
  double Float_Internal_DebugName; 
  double v31; 
  float v32; 
  float yawAngle; 
  double v34; 
  float v35; 
  float pitchAngle; 
  float *outAimCircleAngleNormalizeda; 
  vec3_t v3; 

  *(_QWORD *)v3.v = outAimCircleAngleNormalizedStrafe;
  if ( BG_IsPlayingVehicleOccupancyAnims(ci) )
  {
    AnglesSubtract(&ci->vehicleAnimation.viewAngles, &ci->playerAngles, &v3);
    AnglesNormalize360(&v3, &v3);
    BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit(v3.v[0], v3.v[1], 0.0, 0.0, v3.v[2], outAimConeAngleNormalized, outAimCircleAngleNormalized);
    *outAimConeAngleNormalizedStrafe = *outAimConeAngleNormalized;
    *outAimCircleAngleNormalizedStrafe = *outAimCircleAngleNormalized;
  }
  else
  {
    v9 = DCONST_DVARBOOL_playerasm_strafeyaw_smoothing_enabled;
    if ( !DCONST_DVARBOOL_playerasm_strafeyaw_smoothing_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      ActiveStatics = BgStatic::GetActiveStatics();
      if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 907, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
        __debugbreak();
      v11 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 910, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v12 = DCONST_DVARFLT_playerasm_strafeyaw_smoothing_min_factor;
      if ( !DCONST_DVARFLT_playerasm_strafeyaw_smoothing_min_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_min_factor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      value = v12->current.value;
      v14 = DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_factor;
      if ( !DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_max_factor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v15 = v14->current.value;
      v16 = DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_player_speed;
      if ( !DCONST_DVARFLT_playerasm_strafeyaw_smoothing_max_player_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_max_player_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      v17 = v16->current.value;
      v18 = BG_PlayerASM_IsMoveForwardAlias(ci->legs.animationNumber, ci->legs.animsetIndex) != 0;
      IsMoveBackwardAlias = BG_PlayerASM_IsMoveBackwardAlias(ci->legs.animationNumber, ci->legs.animsetIndex);
      v20 = (float)ci->speed / v17;
      v21 = IsMoveBackwardAlias != 0;
      _XMM7 = 0i64;
      I_fclamp(v20, 0.0, 1.0);
      v23 = DCONST_DVARFLT_playerasm_strafeyaw_smoothing_in;
      _XMM6 = LODWORD(ci->playerASMLocomotion.lerpStrafeAngle);
      if ( !DCONST_DVARFLT_playerasm_strafeyaw_smoothing_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_strafeyaw_smoothing_in") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      v25 = v23->current.value;
      v26 = (float)((float)(1.0 - v20) * value) + (float)(v20 * v15);
      if ( v21 )
      {
        v28 = _XMM6;
        *(float *)&v28 = *(float *)&_XMM6 + 180.0;
        _XMM2 = v28;
        __asm
        {
          vcmpltss xmm0, xmm7, xmm6
          vblendvps xmm6, xmm2, xmm1, xmm0
        }
      }
      else if ( !v18 )
      {
        LODWORD(_XMM6) = 0;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerasm_strafeyaw_smoothing_out, "playerasm_strafeyaw_smoothing_out");
        v25 = *(float *)&Float_Internal_DebugName;
      }
      v31 = AngleNormalize360(ci->torso.yawAngle - (float)(v26 * *(float *)&_XMM6));
      v32 = _mm_cvtepi32_ps((__m128i)*(unsigned int *)(v11 + 19540)).m128_f32[0] * 0.001;
      yawAngle = *(float *)&v31;
      if ( v32 > 0.0 )
      {
        v34 = LinearTrackAngle(*(float *)&v31, ci->playerASMLocomotion.lerpStrafeYawAngle, v25, v32);
        yawAngle = *(float *)&v34;
      }
    }
    else
    {
      yawAngle = ci->torso.yawAngle;
    }
    v35 = ci->legs.yawAngle;
    pitchAngle = ci->legs.pitchAngle;
    outAimCircleAngleNormalizeda = *(float **)v3.v;
    ci->playerASMLocomotion.lerpStrafeYawAngle = yawAngle;
    BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit(ci->torso.pitchAngle, yawAngle, pitchAngle, v35, ci->playerAngles.v[2], outAimConeAngleNormalizedStrafe, outAimCircleAngleNormalizeda);
    BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit(ci->torso.pitchAngle, ci->torso.yawAngle, ci->legs.pitchAngle, ci->legs.yawAngle, ci->playerAngles.v[2], outAimConeAngleNormalized, outAimCircleAngleNormalized);
  }
}

/*
==============
BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit
==============
*/
void BG_PlayerASM_CalculateAimScrubTimeAndWeightExplicit(float torsoPitchAngle, float torsoYawAngle, float legsPitchAngle, float legsYawAngle, float playerRollAngle, float *outAimConeAngleNormalized, float *outAimCircleAngleNormalized)
{
  float v9; 
  float v12; 
  double v13; 
  float v14; 
  float v15; 
  __int128 v17; 
  const dvar_t *v19; 
  __int128 unsignedInt; 
  __int128 v23; 
  float v27; 
  unsigned int v28; 
  double v29; 
  int v30; 
  double v31; 
  float v32; 
  vec3_t outProjectedPoint; 
  vec3_t angles; 
  vec3_t planeNormal; 
  vec3_t forward; 

  if ( !outAimCircleAngleNormalized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 830, ASSERT_TYPE_ASSERT, "(outAimCircleAngleNormalized != 0)", (const char *)&queryFormat, "outAimCircleAngleNormalized != NULL") )
    __debugbreak();
  if ( !outAimConeAngleNormalized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 831, ASSERT_TYPE_ASSERT, "(outAimConeAngleNormalized != 0)", (const char *)&queryFormat, "outAimConeAngleNormalized != NULL") )
    __debugbreak();
  v9 = 0.0;
  if ( legsPitchAngle != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 833, ASSERT_TYPE_ASSERT, "( ( legsPitchAngle == 0.0f ) )", "( legsPitchAngle ) = %g", legsPitchAngle) )
    __debugbreak();
  angles.v[2] = playerRollAngle;
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  v12 = (float)((float)(torsoPitchAngle * 0.0013888889) - *(float *)&_XMM3) * 360.0;
  angles.v[0] = v12;
  if ( v12 > 90.0 )
    angles.v[0] = v12 - 180.0;
  v13 = AngleNormalize360(torsoYawAngle - legsYawAngle);
  angles.v[1] = *(float *)&v13;
  AngleVectors(&angles, &forward, NULL, NULL);
  v14 = fsqrt((float)(forward.v[1] * forward.v[1]) + (float)(forward.v[2] * forward.v[2]));
  I_fclamp(v14, 0.0, 1.0);
  v15 = v14;
  if ( v14 >= 0.94999999 )
  {
    v17 = LODWORD(FLOAT_1_0);
    *(float *)&v17 = 1.0 - (float)((float)(v15 - 0.94999999) * 20.0);
    _XMM2 = v17;
    __asm { vmaxss  xmm0, xmm2, xmm7 }
    fsqrt(*(float *)&_XMM0);
  }
  else
  {
    I_fclamp((float)((float)((float)((float)(v14 * v14) * (float)(v14 * v14)) * v14) * 0.391) + v14, -1.5707964, 1.5707964);
  }
  v19 = DCONST_DVARFLT_playerasm_maxAimConeAngle;
  if ( !DCONST_DVARFLT_playerasm_maxAimConeAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_maxAimConeAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  unsignedInt = v19->current.unsignedInt;
  *(float *)&unsignedInt = v19->current.value * 0.011111111;
  _XMM1 = unsignedInt;
  __asm { vminss  xmm8, xmm1, xmm8 }
  if ( v15 > 0.0 )
  {
    planeNormal.v[0] = FLOAT_1_0;
    planeNormal.v[1] = 0.0;
    planeNormal.v[2] = 0.0;
    ProjectPointOnPlane(&forward, &planeNormal, &outProjectedPoint);
    v23 = LODWORD(outProjectedPoint.v[0]);
    *(float *)&v23 = fsqrt((float)((float)(outProjectedPoint.v[0] * outProjectedPoint.v[0]) + (float)(outProjectedPoint.v[1] * outProjectedPoint.v[1])) + (float)(outProjectedPoint.v[2] * outProjectedPoint.v[2]));
    _XMM2 = v23;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm9, xmm0
    }
    LODWORD(v27) = COERCE_UNSIGNED_INT(outProjectedPoint.v[1] * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
    v28 = COERCE_UNSIGNED_INT(outProjectedPoint.v[2] * (float)(1.0 / *(float *)&_XMM0)) & 0x7F800000;
    outProjectedPoint.v[0] = outProjectedPoint.v[2] * (float)(1.0 / *(float *)&_XMM0);
    outProjectedPoint.v[1] = v27;
    outProjectedPoint.v[2] = 0.0;
    if ( (v28 == 2139095040 || (LODWORD(v27) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 880, ASSERT_TYPE_SANITY, "( !IS_NAN( ( proj )[0] ) && !IS_NAN( ( proj )[1] ) && !IS_NAN( ( proj )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( proj )[0] ) && !IS_NAN( ( proj )[1] ) && !IS_NAN( ( proj )[2] )") )
      __debugbreak();
    v29 = vectoyaw((const vec2_t *)&outProjectedPoint);
    v30 = LODWORD(v29);
    v31 = AngleNormalize360(*(const float *)&v29);
    v32 = *(float *)&v31 * 0.0027777778;
    fmodf_0(*(float *)&v31 * 0.0027777778, 1.0);
    v9 = v32;
    if ( (v30 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 886, ASSERT_TYPE_SANITY, "( !IS_NAN( yaw ) )", (const char *)&queryFormat, "!IS_NAN( yaw )") )
      __debugbreak();
  }
  if ( (_XMM8 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 889, ASSERT_TYPE_SANITY, "( !IS_NAN( aimWeight ) )", (const char *)&queryFormat, "!IS_NAN( aimWeight )") )
    __debugbreak();
  if ( (LODWORD(v9) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 890, ASSERT_TYPE_SANITY, "( !IS_NAN( aimDir ) )", (const char *)&queryFormat, "!IS_NAN( aimDir )") )
    __debugbreak();
  *outAimConeAngleNormalized = v9;
  *outAimCircleAngleNormalized = *(float *)&_XMM8;
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
          XAnimClearTreeGoalWeights(objID->tree, 0, XANIM_SUBTREE_DEFAULT, 0, 0.050000001, 1, objID, LINEAR);
      }
    }
  }
}

/*
==============
BG_PlayerASM_ClearGraftAddons
==============
*/
void BG_PlayerASM_ClearGraftAddons(DObj *obj, const unsigned int animsetIndex, unsigned int stateIndex, float blendTime, const XAnimCurveID curveID)
{
  __int64 v6; 
  const Animset *AnimsetByIndex; 
  const Animset *v9; 
  unsigned int numStates; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  XAnimCurveID v17; 
  __int64 v18; 
  scr_string_t v19; 
  const Animset *v20; 
  __int64 v21; 
  __int64 v22; 
  AnimsetState *outState; 
  int pOutStateIndex; 

  v6 = (int)stateIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 378, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( animsetIndex >= 4 )
  {
    LODWORD(v21) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 379, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v21, 4) )
      __debugbreak();
  }
  outState = NULL;
  if ( animsetIndex >= 4 )
  {
    LODWORD(v22) = 4;
    LODWORD(v21) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v9 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v6 >= numStates )
    {
      LODWORD(v22) = numStates;
      LODWORD(v21) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v11 = 0;
    v12 = 0;
    v13 = (__int64)&v9->states[v6];
    v14 = *(_DWORD *)(v13 + 16);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v13 + 8) + 80i64 * v12;
        if ( v11 + *(_DWORD *)(v15 + 16) > v11 )
          break;
        ++v12;
        v11 += *(_DWORD *)(v15 + 16);
        if ( v12 >= v14 )
          return;
      }
      v16 = 0;
      if ( *(_DWORD *)(v15 + 48) )
      {
        v17 = curveID;
        do
        {
          v18 = *(_QWORD *)(v15 + 40);
          outState = NULL;
          v19 = *(_DWORD *)(v18 + 4i64 * v16);
          v20 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
          if ( BG_Animset_GetStateInfoByName(v20, v19, &outState, &pOutStateIndex) )
            BG_PlayerASM_ClearGraftTrees(obj, animsetIndex, pOutStateIndex, blendTime, v17);
          ++v16;
        }
        while ( v16 < *(_DWORD *)(v15 + 48) );
      }
    }
  }
}

/*
==============
BG_PlayerASM_ClearGraftTrees
==============
*/
void BG_PlayerASM_ClearGraftTrees(DObj *obj, const unsigned int animsetIndex, unsigned int stateIndex, float blendTime, const XAnimCurveID curveID)
{
  __int64 v6; 
  unsigned int v8; 
  const Animset *AnimsetByIndex; 
  const Animset *v10; 
  unsigned int numStates; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  XAnimSubTreeID v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 

  v6 = (int)stateIndex;
  if ( animsetIndex >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 317, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", animsetIndex, 4) )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 318, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v8 = 0;
  if ( animsetIndex >= 4 )
  {
    LODWORD(v19) = 4;
    LODWORD(v18) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v10 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v6 >= numStates )
    {
      LODWORD(v19) = numStates;
      LODWORD(v18) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v12 = (__int64)&v10->states[v6];
    if ( *(_DWORD *)(v12 + 32) )
    {
      do
      {
        v13 = *(_QWORD *)(v12 + 24) + 56i64 * v8;
        if ( *(_DWORD *)(v13 + 4) )
        {
          v14 = *(_QWORD *)(v13 + 40);
          v15 = *(_QWORD *)(v13 + 32);
          if ( v14 )
          {
            v16 = *(_WORD *)(v14 + 60);
            v17 = 1;
            LODWORD(v15) = (unsigned __int16)v15;
          }
          else
          {
            v16 = XANIM_SUBTREE_DEFAULT;
            v17 = (unsigned __int16)v15;
            LODWORD(v15) = 0;
          }
          XAnimClearGoalWeight(obj->tree, v15, v16, v17, blendTime, curveID);
        }
        ++v8;
      }
      while ( v8 < *(_DWORD *)(v12 + 32) );
    }
  }
}

/*
==============
BG_PlayerASM_DebugOverrideAnimTimersSlot
==============
*/
void BG_PlayerASM_DebugOverrideAnimTimersSlot(DObj *obj, const characterInfo_t *ci, const PlayerASM_AnimSlot slot, const float time)
{
  unsigned __int8 v4; 
  XAnimTree *Tree; 
  unsigned int v7; 
  const Animset *AnimsetByIndex; 
  int v9; 
  int v10; 
  const Animset *v11; 
  unsigned int v12; 
  unsigned int v13; 
  XAnimSubTreeID v14; 
  double v15; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v17; 
  __int64 v18; 
  unsigned __int16 parent; 
  unsigned __int16 InfoIndex; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  XAnimSubTreeID v23[2]; 
  unsigned int pOutAnimIndex; 
  unsigned int entryIndex; 
  unsigned int outAnimState; 
  unsigned int outAnimsetIndex; 
  unsigned int pOutGraftNode[3]; 

  outAnimState = 0;
  v4 = slot;
  entryIndex = 0;
  pOutAnimIndex = 0;
  pOutGraftNode[0] = 0;
  outAnimsetIndex = 0;
  v23[0] = XANIM_SUBTREE_DEFAULT;
  Tree = DObjGetTree(obj);
  if ( Tree )
  {
    v7 = BG_PlayerASM_UnpackAnimFromCi(ci, (const PlayerASM_AnimSlot)v4, &outAnimsetIndex, &outAnimState, &entryIndex);
    if ( v7 )
    {
      BG_PlayerASM_UnpackAnim(outAnimsetIndex, v7, &outAnimState, &entryIndex);
      AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(outAnimsetIndex);
      if ( !AnimsetByIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1354, ASSERT_TYPE_ASSERT, "(lastAnimset)", (const char *)&queryFormat, "lastAnimset") )
        __debugbreak();
      if ( BG_PlayerASM_IsAnimEntryValid(AnimsetByIndex, outAnimState, entryIndex) )
      {
        v9 = entryIndex;
        v10 = outAnimState;
        v11 = BG_PlayerASM_GetAnimsetByIndex(outAnimsetIndex);
        BG_Animset_GetAnimIndexFromStateIndexAndEntry(v11, v10, v9, &pOutAnimIndex, pOutGraftNode, v23, NULL);
        v12 = pOutAnimIndex;
        v13 = pOutGraftNode[0];
        v14 = v23[0];
        v15 = I_fclamp(time, 0.0, 0.99989998);
        SubTreeAnims = XAnimGetSubTreeAnims(Tree, v14);
        if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1371, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
          __debugbreak();
        if ( XAnimIsLeafNode(SubTreeAnims, pOutAnimIndex) )
        {
          v17 = pOutAnimIndex;
          if ( pOutAnimIndex >= SubTreeAnims->size )
          {
            LODWORD(pOutAnimCurveID) = SubTreeAnims->size;
            LODWORD(pOutAnimSubtreeID) = pOutAnimIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1376, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
              __debugbreak();
            v17 = pOutAnimIndex;
          }
          v18 = 2 * (v17 + 5i64);
          parent = SubTreeAnims->entries[v17].parent;
          if ( parent )
          {
            if ( parent >= SubTreeAnims->size )
            {
              LODWORD(pOutAnimCurveID) = SubTreeAnims->size;
              LODWORD(pOutAnimSubtreeID) = parent;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1380, ASSERT_TYPE_ASSERT, "(unsigned)( anim->parent ) < (unsigned)( anims->size )", "anim->parent doesn't index anims->size\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
                __debugbreak();
            }
            if ( ((__int64)SubTreeAnims->entries[*((unsigned __int16 *)&SubTreeAnims->initialized + 4 * v18)].parts & 3) != 0 )
              v12 = *((unsigned __int16 *)&SubTreeAnims->initialized + 4 * v18);
          }
        }
        if ( XAnimHasTime(SubTreeAnims, v12) && !XAnimIsLeafNode(SubTreeAnims, v12) )
        {
          InfoIndex = XAnimGetInfoIndex(Tree, v13, v14, v12);
          if ( InfoIndex )
            XAnimGetAnimInfo(InfoIndex)->state.currentAnimTime = *(float *)&v15;
        }
        XAnimSetTreeChildTimes(Tree, v13, v14, v12, *(float *)&v15);
      }
    }
  }
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
  const dvar_t *v11; 
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
      Dvar_SetFloat_Internal(DVARFLT_playerasm_debug_override_main_state_time, -1.0);
      Dvar_SetFloat_Internal(DVARFLT_playerasm_debug_override_sub_state_time, -1.0);
      Dvar_SetBool_Internal(DVARBOOL_playerasm_debug_override_reset, 0);
    }
    else
    {
      for ( i = 0; i < 0x41u; ++i )
      {
        dvar = s_playerASMDebugOverrideDvars[i].dvar;
        if ( dvar )
        {
          v11 = *dvar;
          if ( v11->modified )
          {
            type = v11->type;
            if ( type == 1 )
            {
              XAnimSetFloatGameParameterByIndex(obj, i, v11->current.value);
            }
            else if ( type )
            {
              if ( type == 3 )
              {
                XAnimSetVec3GameParameterByIndex(obj, i, (const vec3_t *)&v11->current);
              }
              else if ( i == 56 )
              {
                XAnimSetByteGameParameterByIndex(obj, 0x38u, v11->current.color[0]);
              }
              else if ( type == 5 )
              {
                XAnimSetIntGameParameterByIndex(obj, i, v11->current.integer);
              }
            }
            else
            {
              XAnimSetBoolGameParameterByIndex(obj, i, v11->current.enabled);
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
  unsigned int v8; 
  XAnimSubTreeID v9; 
  unsigned int v10; 
  unsigned __int16 InfoIndex; 
  unsigned __int16 v12; 
  unsigned __int16 parent; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  XAnimInfo *v16; 

  if ( !inOutSubTreeID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 520, ASSERT_TYPE_ASSERT, "(inOutSubTreeID)", (const char *)&queryFormat, "inOutSubTreeID") )
    __debugbreak();
  if ( !inOutAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 521, ASSERT_TYPE_ASSERT, "(inOutAnimIndex)", (const char *)&queryFormat, "inOutAnimIndex") )
    __debugbreak();
  v8 = *inOutAnimIndex;
  v9 = *inOutSubTreeID;
  v10 = *inOutGraftAnimIndex;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 804, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 805, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( v10 && v9 == XANIM_SUBTREE_DEFAULT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 806, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT)", "%s\n\tInvalid subTreeID.", "!graftAnimIndex || subTreeID != XAnimSubTreeID::XANIM_SUBTREE_DEFAULT") )
    __debugbreak();
  if ( v10 >= tree->anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 807, ASSERT_TYPE_ASSERT, "( graftAnimIndex ) < ( tree->anims->size )", "%s < %s\n\t%i, %i", "graftAnimIndex", "tree->anims->size", v10, tree->anims->size) )
    __debugbreak();
  if ( v10 )
  {
    if ( !XAnimIsGraftNode(tree->anims, v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 808, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || XAnimIsGraftNode( tree->anims, graftAnimIndex ))", "%s\n\tInvalid graft node", "!graftAnimIndex || XAnimIsGraftNode( tree->anims, graftAnimIndex )") )
      __debugbreak();
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 809, ASSERT_TYPE_ASSERT, "(!graftAnimIndex || animIndex != 0)", "%s\n\tCannot use anim index 0 (root) from grafted subtree.", "!graftAnimIndex || animIndex != 0") )
      __debugbreak();
  }
  InfoIndex = XAnimGetInfoIndex(tree, *inOutGraftAnimIndex, *inOutSubTreeID, *inOutAnimIndex);
  v12 = InfoIndex;
  if ( InfoIndex )
  {
    parent = GetAnimInfo(InfoIndex)->parent;
    if ( parent )
    {
      while ( 1 )
      {
        AnimInfo = GetAnimInfo(parent);
        if ( XAnimGetNumChildInfos(tree, AnimInfo) > 1u )
        {
          children = AnimInfo->children;
          if ( children )
            break;
        }
LABEL_34:
        *inOutAnimIndex = AnimInfo->animIndex;
        v12 = parent;
        *inOutSubTreeID = AnimInfo->subTreeID;
        *inOutGraftAnimIndex = XAnimGetGraftAnimIndex(parent);
        parent = AnimInfo->parent;
        if ( !parent )
          return;
      }
      while ( 1 )
      {
        v16 = GetAnimInfo(children);
        if ( v16->state.goalWeight > 0.0 && children != v12 )
          break;
        children = v16->next;
        if ( !children )
          goto LABEL_34;
      }
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
  const XAnim_s *v20; 
  const XAnim_s *Anims; 
  const XAnim_s *SubTreeAnims; 
  bool v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  unsigned int v30; 
  const char *AnimDebugName; 
  const char *v32; 
  bool v33; 
  bool v34; 
  bool v35; 
  bool v36; 
  bool IsAnimRestart; 
  unsigned int v38; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  XAnim_s **outSyncRootAnims; 
  XAnimSyncGroupID outSyncGroupID; 
  unsigned int outSyncRoot; 
  unsigned int v45; 
  XAnim_s *v46; 
  XAnim_s *v47; 
  char subtreeIDa; 
  char lastPackedAnimIndexa; 
  bool lastSubtreeIDa; 

  v20 = NULL;
  LOBYTE(outSyncGroupID) = 4;
  v47 = NULL;
  v46 = NULL;
  *outResetSyncGroup = 0;
  v45 = 0;
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
    v20 = XAnimGetSubTreeAnims(tree, lastSubtreeID);
  v26 = packedAnimIndex && BG_PlayerASM_IsSyncAnim(Anims, graftNodeIndex, SubTreeAnims, animIndex, &outSyncGroupID, (const XAnim_s **)&v46, &outSyncRoot);
  v27 = lastPackedAnimIndex && BG_PlayerASM_IsSyncAnim(Anims, lastGraftNodeIndex, v20, lastAnimIndex, (XAnimSyncGroupID *)((char *)&outSyncGroupID + 1), (const XAnim_s **)&v47, &v45);
  v28 = v26 && (_BYTE)outSyncGroupID != 4;
  if ( !v27 || (subtreeIDa = 1, BYTE1(outSyncGroupID) == 4) )
    subtreeIDa = 0;
  v29 = XAnimIsLeafNode(Anims, animIndex) != 0;
  lastSubtreeIDa = v29;
  if ( lastAnimStateIndex == -1 || animStateIndex == -1 || (lastPackedAnimIndexa = 1, lastAnimStateIndex != animStateIndex) )
    lastPackedAnimIndexa = 0;
  if ( !v26 || v29 )
    goto LABEL_39;
  v30 = outSyncRoot;
  if ( outSyncRoot && outSyncRoot != animIndex )
  {
    AnimDebugName = XAnimGetAnimDebugName(Anims, outSyncRoot);
    v32 = XAnimGetAnimDebugName(Anims, animIndex);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C87250, 6073i64, v32, AnimDebugName);
    v29 = lastSubtreeIDa;
LABEL_39:
    v30 = outSyncRoot;
  }
  if ( v28 && !v29 )
  {
    *outResetSyncGroup = 1;
    *(_BYTE *)outSyncGroup = outSyncGroupID;
  }
  v33 = v26 && v27;
  v34 = v30 == v45;
  v35 = v47 == v46;
  v36 = v33 && !v28 && !subtreeIDa && v30 == v45;
  IsAnimRestart = BG_PlayerASM_IsAnimRestart(pAnimset, animStateIndex, animEntryIndex, lastAnimStateIndex, lastAnimEntryIndex);
  if ( !lastSubtreeIDa )
  {
    if ( !IsAnimRestart )
      goto LABEL_82;
LABEL_77:
    if ( v33 )
    {
      *outIsRestartSyncNode = v35 && v34;
      goto LABEL_74;
    }
    goto LABEL_82;
  }
  if ( IsAnimRestart )
    goto LABEL_77;
  if ( v33 )
  {
LABEL_82:
    v38 = outSyncRoot;
    goto LABEL_83;
  }
  v38 = outSyncRoot;
  if ( outSyncRoot )
  {
    if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1171, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1172, ASSERT_TYPE_ASSERT, "(syncRootAnimIndex)", (const char *)&queryFormat, "syncRootAnimIndex") )
      __debugbreak();
    if ( !animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1173, ASSERT_TYPE_ASSERT, "(animIndex)", (const char *)&queryFormat, "animIndex") )
      __debugbreak();
    InfoIndex = XAnimGetInfoIndex(tree, 0, XANIM_SUBTREE_DEFAULT, v38);
    if ( InfoIndex )
    {
      AnimInfo = XAnimGetAnimInfo(InfoIndex);
      if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1179, ASSERT_TYPE_ASSERT, "(rootInfo)", (const char *)&queryFormat, "rootInfo") )
        __debugbreak();
      if ( AnimInfo->state.currentAnimTime != 0.0 && AnimInfo->children && !XAnimGetInfoIndex(tree, 0, XANIM_SUBTREE_DEFAULT, animIndex) )
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
  if ( v36 && lastSubtreeIDa )
  {
    *outSyncRootAnimIndex = v38;
    return 1;
  }
  else
  {
    if ( !v28 || !subtreeIDa || !v35 )
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
char BG_PlayerASM_GetLeadAnimationInfo(characterInfo_t *ci, unsigned int animsetIndex, unsigned int packedAnim, const PlayerASM_AnimSlot slot, const XAnim_s *anims, const unsigned int animIndex, const float rate, unsigned int *outLeadIndex, const XAnimParts **outLeadParts, float *outFrequency)
{
  unsigned int v11; 
  unsigned __int8 v12; 
  __int64 v15; 
  float v16; 
  unsigned __int16 v17; 
  unsigned __int16 numBindings; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  XAnimParameterBinding *bindings; 
  const XAnimFieldArray<float> *coords; 
  const XAnimFieldArray<unsigned int> *triangleCoords; 
  vec2_t v28; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *v30; 
  __int64 v31; 
  __int64 v32; 
  const XAnimParameterBinding *v33; 
  signed __int64 v34; 
  vec2_t v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned __int16 v39; 
  unsigned __int16 v40; 
  unsigned __int16 v41; 
  unsigned __int16 v42; 
  unsigned __int16 v43; 
  unsigned __int16 v44; 
  unsigned __int16 v45; 
  unsigned __int16 v46; 
  unsigned __int16 v47; 
  unsigned __int16 v48; 
  unsigned __int16 v49; 
  scr_string_t v50; 
  scr_string_t v51; 
  __int64 v52; 
  float v53; 
  unsigned int v54; 
  unsigned int ChildAt; 
  unsigned int v56; 
  double ParameterValue; 
  float v58; 
  double v59; 
  float v60; 
  double v61; 
  double v62; 
  unsigned int v63; 
  vec2_t v64; 
  __int128 v65; 
  __int128 v66; 
  __int64 v67; 
  __int64 v68; 
  const XAnimParts *XAnimParts; 
  __int128 v70; 
  __int128 v71; 
  unsigned int v73; 
  float v74; 
  unsigned __int16 v75; 
  unsigned __int16 v76; 
  unsigned __int16 v77; 
  unsigned __int16 v78; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  XAnimParameterBinding *v80; 
  const XAnimTypeFields *v81; 
  const XAnimParameterBinding *DynamicBindParameterByFieldName; 
  __int64 v83; 
  signed __int64 v84; 
  unsigned __int16 v85; 
  unsigned __int16 v86; 
  unsigned __int16 v87; 
  scr_string_t v88; 
  float v89; 
  double v90; 
  bool v91; 
  unsigned int *v92; 
  const XAnimParts **v93; 
  float *v94; 
  unsigned int v95; 
  const XAnimParts *v96; 
  __int128 v97; 
  __int128 v98; 
  unsigned int *v99; 
  unsigned int v100; 
  const XAnimParts *v101; 
  __int128 v102; 
  __int128 v103; 
  unsigned int *inoutLastTriangleIndex; 
  unsigned int *inoutLastTriangleIndexa; 
  __int64 v106; 
  bool outOutsideRange; 
  unsigned int v108; 
  unsigned int outTriangleIndex; 
  unsigned int outChildIndex[2]; 
  unsigned int v111; 
  unsigned int v112; 
  unsigned int *v113; 
  const XAnimParts **v114; 
  float *v115; 
  const XAnimParameterBinding *v116; 
  __int64 v117; 
  const XAnimParameterBinding *v118; 
  const XAnimParameterBinding *ConstantBindParameterByFieldName; 
  vec2_t weights; 
  vec2_t value; 
  vec3_t outWeights; 

  v11 = animIndex;
  v12 = slot;
  v113 = outLeadIndex;
  v114 = outLeadParts;
  outTriangleIndex = animsetIndex;
  v112 = animIndex;
  v115 = outFrequency;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1918, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1919, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !v113 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1920, ASSERT_TYPE_ASSERT, "(outLeadIndex)", (const char *)&queryFormat, "outLeadIndex") )
    __debugbreak();
  if ( !outFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1921, ASSERT_TYPE_ASSERT, "(outFrequency)", (const char *)&queryFormat, "outFrequency") )
    __debugbreak();
  if ( animIndex >= anims->size )
  {
    LODWORD(inoutLastTriangleIndex) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1922, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", inoutLastTriangleIndex, anims->size) )
      __debugbreak();
  }
  if ( v12 >= 2u )
  {
    LODWORD(v106) = 2;
    LODWORD(inoutLastTriangleIndex) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1923, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
      __debugbreak();
  }
  v15 = v12;
  v117 = v12;
  if ( XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace2D) )
  {
    v16 = FLOAT_N3_4028235e38;
    v108 = -1;
    if ( ci->playerASMLocomotion.animCache[v12].animsetIndex == animsetIndex && ci->playerASMLocomotion.animCache[v12].packedAnim == packedAnim )
    {
      v17 = ci->playerASMLocomotion.animCache[v12].bindingIndexes[0];
      numBindings = anims->numBindings;
      if ( v17 >= numBindings )
      {
        LODWORD(v106) = numBindings;
        LODWORD(inoutLastTriangleIndex) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1952, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[0] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[0] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v19 = ci->playerASMLocomotion.animCache[v12].bindingIndexes[1];
      v20 = anims->numBindings;
      if ( v19 >= v20 )
      {
        LODWORD(v106) = v20;
        LODWORD(inoutLastTriangleIndex) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1953, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[1] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[1] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v21 = ci->playerASMLocomotion.animCache[v12].bindingIndexes[2];
      v22 = anims->numBindings;
      if ( v21 >= v22 )
      {
        LODWORD(v106) = v22;
        LODWORD(inoutLastTriangleIndex) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1954, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[2] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[2] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v23 = ci->playerASMLocomotion.animCache[v12].bindingIndexes[3];
      v24 = anims->numBindings;
      if ( v23 >= v24 )
      {
        LODWORD(v106) = v24;
        LODWORD(inoutLastTriangleIndex) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1955, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[3] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[3] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      if ( !ci->playerASMLocomotion.animCache[v12].coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1957, ASSERT_TYPE_ASSERT, "(animCache->coords)", (const char *)&queryFormat, "animCache->coords") )
        __debugbreak();
      if ( !ci->playerASMLocomotion.animCache[v12].triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1958, ASSERT_TYPE_ASSERT, "(animCache->triangleCoords)", (const char *)&queryFormat, "animCache->triangleCoords") )
        __debugbreak();
      bindings = anims->bindings;
      coords = ci->playerASMLocomotion.animCache[v12].coords;
      triangleCoords = ci->playerASMLocomotion.animCache[v15].triangleCoords;
      weights = (vec2_t)&bindings[ci->playerASMLocomotion.animCache[v15].bindingIndexes[2]];
      *(_QWORD *)outChildIndex = &bindings[ci->playerASMLocomotion.animCache[v15].bindingIndexes[3]];
      v28 = (vec2_t)&bindings[ci->playerASMLocomotion.animCache[v15].bindingIndexes[4]];
      v118 = &bindings[ci->playerASMLocomotion.animCache[v15].bindingIndexes[5]];
    }
    else
    {
      TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
      if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1973, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
        __debugbreak();
      ConstantBindParameterByFieldName = XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpaceCoords, TypeFieldsForNodeType);
      v116 = XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DEdges, TypeFieldsForNodeType);
      weights = (vec2_t)XAnimFindDynamicBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DValueX, TypeFieldsForNodeType);
      *(_QWORD *)outChildIndex = XAnimFindDynamicBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DValueY, TypeFieldsForNodeType);
      value = (vec2_t)XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DAxisXRange, TypeFieldsForNodeType);
      v30 = XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace2DAxisYRange, TypeFieldsForNodeType);
      v31 = (__int64)ConstantBindParameterByFieldName;
      v32 = (__int64)v116;
      v118 = v30;
      v33 = ConstantBindParameterByFieldName;
      ci->playerASMLocomotion.animCache[v15].animsetIndex = animsetIndex;
      ci->playerASMLocomotion.animCache[v15].packedAnim = packedAnim;
      v34 = v33 - anims->bindings;
      ci->playerASMLocomotion.animCache[v15].bindingIndexes[0] = v34;
      v35 = weights;
      ci->playerASMLocomotion.animCache[v15].bindingIndexes[1] = (__int16)(v32 - LOWORD(anims->bindings)) / 24;
      v36 = (unsigned __int128)((__int64)(*(_QWORD *)&v35 - (unsigned __int64)anims->bindings) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
      v37 = *(_QWORD *)outChildIndex;
      ci->playerASMLocomotion.animCache[v15].bindingIndexes[2] = ((unsigned __int64)v36 >> 63) + (v36 >> 2);
      v38 = (unsigned __int128)((v37 - (unsigned __int64)anims->bindings) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
      LOWORD(v37) = LOWORD(value.v[0]);
      ci->playerASMLocomotion.animCache[v15].bindingIndexes[3] = ((unsigned __int64)v38 >> 63) + (v38 >> 2);
      ci->playerASMLocomotion.animCache[v15].bindingIndexes[4] = (__int16)(v37 - LOWORD(anims->bindings)) / 24;
      ci->playerASMLocomotion.animCache[v15].bindingIndexes[5] = v30 - anims->bindings;
      v39 = anims->numBindings;
      if ( (unsigned __int16)v34 >= v39 )
      {
        LODWORD(v106) = v39;
        LODWORD(inoutLastTriangleIndex) = (unsigned __int16)v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1993, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[0] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[0] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v40 = ci->playerASMLocomotion.animCache[v15].bindingIndexes[1];
      v41 = anims->numBindings;
      if ( v40 >= v41 )
      {
        LODWORD(v106) = v41;
        LODWORD(inoutLastTriangleIndex) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1994, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[1] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[1] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v42 = ci->playerASMLocomotion.animCache[v15].bindingIndexes[2];
      v43 = anims->numBindings;
      if ( v42 >= v43 )
      {
        LODWORD(v106) = v43;
        LODWORD(inoutLastTriangleIndex) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1995, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[2] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[2] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v44 = ci->playerASMLocomotion.animCache[v15].bindingIndexes[3];
      v45 = anims->numBindings;
      if ( v44 >= v45 )
      {
        LODWORD(v106) = v45;
        LODWORD(inoutLastTriangleIndex) = v44;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1996, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[3] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[3] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v46 = ci->playerASMLocomotion.animCache[v15].bindingIndexes[4];
      v47 = anims->numBindings;
      if ( v46 >= v47 )
      {
        LODWORD(v106) = v47;
        LODWORD(inoutLastTriangleIndex) = v46;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1997, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[4] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[4] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v48 = ci->playerASMLocomotion.animCache[v15].bindingIndexes[5];
      v49 = anims->numBindings;
      if ( v48 >= v49 )
      {
        LODWORD(v106) = v49;
        LODWORD(inoutLastTriangleIndex) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1998, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[5] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[5] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
          __debugbreak();
      }
      v50 = truncate_cast<enum scr_string_t,unsigned int>(*(_DWORD *)(v31 + 8));
      v51 = truncate_cast<enum scr_string_t,unsigned int>(*(_DWORD *)(v32 + 8));
      if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
        __debugbreak();
      coords = (const XAnimFieldArray<float> *)SL_ConvertToString(v50);
      if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2004, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
        __debugbreak();
      if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
        __debugbreak();
      triangleCoords = (const XAnimFieldArray<unsigned int> *)SL_ConvertToString(v51);
      if ( !triangleCoords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2007, ASSERT_TYPE_ASSERT, "(triangleCoords)", (const char *)&queryFormat, "triangleCoords") )
        __debugbreak();
      v28 = value;
      ci->playerASMLocomotion.animCache[v15].coords = coords;
      ci->playerASMLocomotion.animCache[v15].triangleCoords = triangleCoords;
    }
    v52 = v117;
    v53 = 0.0;
    outWeights.v[0] = 0.0;
    outWeights.v[1] = 0.0;
    v54 = ci->playerASMLocomotion.lastTriangleIndex[v117];
    ChildAt = -1;
    outWeights.v[2] = 0.0;
    v56 = -1;
    if ( v54 < triangleCoords->size / 3 )
      v56 = v54;
    v111 = v56;
    ParameterValue = BG_PlayerASM_GetParameterValue(ci, *(_WORD *)(*(_QWORD *)&weights + 12i64));
    v58 = *(float *)&ParameterValue;
    v59 = BG_PlayerASM_GetParameterValue(ci, *(_WORD *)(*(_QWORD *)outChildIndex + 12i64));
    v60 = *(float *)&v59;
    v61 = I_fclamp(v58, *(float *)(*(_QWORD *)&v28 + 8i64), *(float *)(*(_QWORD *)&v28 + 12i64));
    value.v[0] = *(float *)&v61;
    v62 = I_fclamp(v60, v118->constant.floatValue, v118->constant.vec3Value.v[1]);
    value.v[1] = *(float *)&v62;
    XAnimBlendSpace2D_CalcWeights(triangleCoords, coords, value, &outWeights, &outTriangleIndex, &v111);
    v63 = 0;
    ci->playerASMLocomotion.lastTriangleIndex[v52] = v111;
    weights = 0i64;
    v64 = 0i64;
    v65 = 0i64;
    v66 = 0i64;
    do
    {
      if ( outWeights.v[v63] > 0.0 )
      {
        v67 = 3 * outTriangleIndex;
        if ( (unsigned int)v67 >= triangleCoords->size )
        {
          LODWORD(v106) = triangleCoords->size;
          LODWORD(inoutLastTriangleIndexa) = 3 * outTriangleIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace.h", 141, ASSERT_TYPE_ASSERT, "(unsigned)( index * 3 ) < (unsigned)( triangleCoord->size )", "index * 3 doesn't index triangleCoord->size\n\t%i not in [0, %i)", inoutLastTriangleIndexa, v106) )
            __debugbreak();
        }
        v68 = (__int64)&triangleCoords->values[v67];
        if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2047, ASSERT_TYPE_ASSERT, "(coordIndexes)", (const char *)&queryFormat, "coordIndexes") )
          __debugbreak();
        ChildAt = XAnimGetChildAt(anims, v112, *(_DWORD *)(v68 + *(_QWORD *)&weights));
        XAnimParts = BG_PlayerASM_GetXAnimParts(anims, ChildAt, NULL);
        if ( !XAnimParts || XAnimParts->frequency == 0.0 )
        {
          ChildAt = v108;
        }
        else
        {
          if ( v16 >= outWeights.v[v63] )
          {
            ChildAt = v108;
          }
          else
          {
            v108 = ChildAt;
            v16 = outWeights.v[v63];
            *v114 = XAnimParts;
          }
          v70 = v65;
          *(float *)&v70 = *(float *)&v65 + outWeights.v[v63];
          v65 = v70;
          v71 = v66;
          *(float *)&v71 = *(float *)&v66 + (float)((float)(outWeights.v[v63] * XAnimParts->frequency) * rate);
          v66 = v71;
        }
        v64 = weights;
      }
      *(_QWORD *)&v64 += 4i64;
      ++v63;
      weights = v64;
    }
    while ( v63 < 3 );
    *v113 = ChildAt;
    if ( *(float *)&v65 != 0.0 )
      v53 = *(float *)&v66 / *(float *)&v65;
    *v115 = v53;
    return 1;
  }
  else
  {
    v73 = 0;
    if ( XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace1D) )
    {
      v74 = FLOAT_N3_4028235e38;
      v108 = -1;
      *(_QWORD *)outChildIndex = 0i64;
      if ( ci->playerASMLocomotion.animCache[v15].animsetIndex == animsetIndex && ci->playerASMLocomotion.animCache[v15].packedAnim == packedAnim )
      {
        v75 = ci->playerASMLocomotion.animCache[v15].bindingIndexes[0];
        v76 = anims->numBindings;
        if ( v75 >= v76 )
        {
          LODWORD(v106) = v76;
          LODWORD(inoutLastTriangleIndex) = v75;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2096, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[0] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[0] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
            __debugbreak();
        }
        v77 = ci->playerASMLocomotion.animCache[v15].bindingIndexes[1];
        v78 = anims->numBindings;
        if ( v77 >= v78 )
        {
          LODWORD(v106) = v78;
          LODWORD(inoutLastTriangleIndex) = v77;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2097, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[1] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[1] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
            __debugbreak();
        }
        FloatFieldArray = ci->playerASMLocomotion.animCache[v15].coords;
        v80 = &anims->bindings[ci->playerASMLocomotion.animCache[v15].bindingIndexes[1]];
      }
      else
      {
        v81 = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
        if ( !v81 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2107, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
          __debugbreak();
        v117 = (__int64)XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpaceCoords, v81);
        DynamicBindParameterByFieldName = XAnimFindDynamicBindParameterByFieldName(anims, animIndex, scr_const.xanimBlendSpace1DValue, v81);
        ci->playerASMLocomotion.animCache[v15].animsetIndex = outTriangleIndex;
        v116 = DynamicBindParameterByFieldName;
        ci->playerASMLocomotion.animCache[v15].packedAnim = packedAnim;
        v83 = v117;
        v84 = (signed __int64)(v117 - (unsigned __int64)anims->bindings) / 24;
        ci->playerASMLocomotion.animCache[v15].bindingIndexes[0] = v84;
        ci->playerASMLocomotion.animCache[v15].bindingIndexes[1] = DynamicBindParameterByFieldName - anims->bindings;
        v85 = anims->numBindings;
        if ( (unsigned __int16)v84 >= v85 )
        {
          LODWORD(v106) = v85;
          LODWORD(inoutLastTriangleIndex) = (unsigned __int16)v84;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2117, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[0] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[0] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
            __debugbreak();
        }
        v86 = ci->playerASMLocomotion.animCache[v15].bindingIndexes[1];
        v87 = anims->numBindings;
        if ( v86 >= v87 )
        {
          LODWORD(v106) = v87;
          LODWORD(inoutLastTriangleIndex) = v86;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2118, ASSERT_TYPE_ASSERT, "(unsigned)( animCache->bindingIndexes[1] ) < (unsigned)( anims->numBindings )", "animCache->bindingIndexes[1] doesn't index anims->numBindings\n\t%i not in [0, %i)", inoutLastTriangleIndex, v106) )
            __debugbreak();
        }
        v88 = truncate_cast<enum scr_string_t,unsigned int>(*(_DWORD *)(v83 + 8));
        FloatFieldArray = XAnimNode_GetFloatFieldArray(v88);
        if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2123, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
          __debugbreak();
        v80 = (XAnimParameterBinding *)v116;
        ci->playerASMLocomotion.animCache[v15].coords = FloatFieldArray;
      }
      v89 = 0.0;
      weights.v[0] = 0.0;
      weights.v[1] = 0.0;
      v90 = BG_PlayerASM_GetParameterValue(ci, v80->dynamic.sourceParameterIndex);
      v91 = XAnimBlendSpace1D_CalcWeights(FloatFieldArray, *(float *)&v90, &weights, &outOutsideRange, outChildIndex);
      v92 = v113;
      v93 = v114;
      v94 = v115;
      *v113 = -1;
      *v93 = NULL;
      *v94 = 0.0;
      if ( outOutsideRange )
      {
        v95 = XAnimGetChildAt(anims, animIndex, outChildIndex[0]);
        v96 = BG_PlayerASM_GetXAnimParts(anims, v95, NULL);
        if ( v96 && v96->frequency != 0.0 )
        {
          *v92 = v95;
          *v93 = v96;
          *v94 = v96->frequency;
          return 1;
        }
      }
      else if ( v91 )
      {
        v97 = 0i64;
        v98 = 0i64;
        v99 = outChildIndex;
        do
        {
          v100 = XAnimGetChildAt(anims, v11, *v99);
          v101 = BG_PlayerASM_GetXAnimParts(anims, v100, NULL);
          if ( v101 && v101->frequency != 0.0 )
          {
            if ( v74 < weights.v[v73] )
            {
              v108 = v100;
              v74 = weights.v[v73];
              *v114 = v101;
            }
            v102 = v97;
            *(float *)&v102 = *(float *)&v97 + weights.v[v73];
            v97 = v102;
            v103 = v98;
            *(float *)&v103 = *(float *)&v98 + (float)((float)(v101->frequency * weights.v[v73]) * rate);
            v98 = v103;
          }
          v11 = v112;
          ++v73;
          ++v99;
        }
        while ( v73 < 2 );
        *v113 = v108;
        if ( *(float *)&v97 != 0.0 )
          v89 = *(float *)&v98 / *(float *)&v97;
        *v115 = v89;
      }
      return 1;
    }
    else
    {
      ci->playerASMLocomotion.animCache[v15].packedAnim = 0;
      return 0;
    }
  }
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
  double result; 
  BgStatic *ActiveStatics; 
  __int64 v6; 
  double v7; 
  scr_string_t *PlayerAnimParameterNameByIndex; 
  const char *v11; 

  if ( parameterIndex >= 0x41u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1780, ASSERT_TYPE_ASSERT, "(unsigned)( parameterIndex ) < (unsigned)( PLAYER_ANIM_PARAM_COUNT )", "parameterIndex doesn't index PLAYER_ANIM_PARAM_COUNT\n\t%i not in [0, %i)", parameterIndex, 65) )
    __debugbreak();
  switch ( parameterIndex )
  {
    case 0u:
      *(_QWORD *)&result = LODWORD(ci->playerASMLocomotion.lerpSpeed);
      break;
    case 3u:
      *(_QWORD *)&result = LODWORD(ci->leftStickInputFastLerp.v[0]);
      break;
    case 4u:
      *(_QWORD *)&result = LODWORD(ci->leftStickInputFastLerp.v[1]);
      break;
    case 5u:
      *(_QWORD *)&result = LODWORD(ci->rightStickInputFastLerp.v[0]);
      break;
    case 6u:
      *(_QWORD *)&result = LODWORD(ci->rightStickInputFastLerp.v[1]);
      break;
    case 7u:
      *(_QWORD *)&result = LODWORD(ci->leftStickInputSlowLerp.v[0]);
      break;
    case 8u:
      *(_QWORD *)&result = LODWORD(ci->leftStickInputSlowLerp.v[1]);
      break;
    case 9u:
      *(_QWORD *)&result = LODWORD(ci->rightStickInputSlowLerp.v[0]);
      break;
    case 0xAu:
      *(_QWORD *)&result = LODWORD(ci->rightStickInputSlowLerp.v[1]);
      break;
    case 0xBu:
      *(_QWORD *)&result = LODWORD(ci->animData.distance2D);
      break;
    case 0xCu:
      *(_QWORD *)&result = LODWORD(ci->animData.distanceZ);
      break;
    case 0xDu:
      *(_QWORD *)&result = LODWORD(ci->animData.angle);
      break;
    case 0xEu:
      *(_QWORD *)&result = LODWORD(ci->mountAnimation.fraction);
      break;
    case 0xFu:
      *(_QWORD *)&result = LODWORD(ci->mountAnimation.angles.v[0]);
      break;
    case 0x10u:
      *(_QWORD *)&result = LODWORD(ci->mountAnimation.angles.v[1]);
      break;
    case 0x11u:
      goto $LN27_0;
    case 0x12u:
      *(_QWORD *)&result = LODWORD(ci->mount.pivotHeight);
      break;
    case 0x13u:
      result = vectosignedyaw((const vec2_t *)&ci->mountAnimation.worldmodelForwardDir);
      break;
    case 0x14u:
      *(_QWORD *)&result = LODWORD(ci->mountAnimation.yawVelocity);
      break;
    case 0x1Du:
      *(_QWORD *)&v7 = LODWORD(ci->torso.pitchAngle);
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      *(float *)&v7 = (float)((float)(ci->torso.pitchAngle * 0.0027777778) - *(float *)&_XMM4) * 360.0;
      result = v7;
      break;
    case 0x1Eu:
      result = AngleDelta(ci->torso.yawAngle, ci->legs.yawAngle);
      break;
    case 0x21u:
      *(_QWORD *)&result = LODWORD(ci->turretPlayerAngles.v[0]);
      break;
    case 0x22u:
      *(_QWORD *)&result = LODWORD(ci->turretPlayerAngles.v[1]);
      break;
    case 0x23u:
      *(_QWORD *)&result = LODWORD(ci->turretPlayerHeight);
      break;
    case 0x24u:
      *(_QWORD *)&result = LODWORD(ci->playerASMLocomotion.lerpStrafeAngle);
      break;
    case 0x25u:
      *(_QWORD *)&result = LODWORD(ci->playerASMLocomotion.stopAngle);
      break;
    case 0x26u:
      *(_QWORD *)&result = LODWORD(ci->playerASMLocomotion.stopSpeed);
      break;
    case 0x2Bu:
      *(_QWORD *)&result = LODWORD(ci->playerASMLocomotion.lerpMoveTurn);
      break;
    case 0x2Cu:
      *(_QWORD *)&result = LODWORD(ci->vehicleAnimation.pitch);
      break;
    case 0x2Du:
      *(_QWORD *)&result = LODWORD(ci->vehicleAnimation.yaw);
      break;
    case 0x2Eu:
      *(_QWORD *)&result = LODWORD(ci->playerASMLocomotion.lerpLegsYawSpeed);
      break;
    case 0x32u:
      ActiveStatics = BgStatic::GetActiveStatics();
      if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1862, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
        __debugbreak();
      v6 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 1864, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      result = BG_Execution_GetScrubTime(ci->execution, (const ExecutionVictimStance)ci->executionStance, ci->executionStartTime, *(_DWORD *)(v6 + 19528), *(_DWORD *)(v6 + 19532));
      break;
    case 0x33u:
      *(_QWORD *)&result = LODWORD(ci->skydivePitchInterpolated);
      break;
    case 0x34u:
      *(_QWORD *)&result = LODWORD(ci->skydiveRollInterpolated);
      break;
    case 0x35u:
      *(_QWORD *)&result = LODWORD(ci->skydiveThrottleInterpolated);
      break;
    case 0x36u:
      *(_QWORD *)&result = LODWORD(ci->skydivePolarAngleInterpolated);
      break;
    case 0x37u:
      *(_QWORD *)&result = LODWORD(ci->skydivePolarRadiusInterpolated);
      break;
    default:
      PlayerAnimParameterNameByIndex = BG_GetPlayerAnimParameterNameByIndex(parameterIndex);
      v11 = SL_ConvertToString(*PlayerAnimParameterNameByIndex);
      Com_PrintWarning(19, "BG_PlayerASM_GetParameterValue(): could not find anim parameter '%s'.\n", v11);
$LN27_0:
      result = 0.0;
      break;
  }
  return result;
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
void BG_PlayerASM_GraftAddons(DObj *obj, const unsigned int animsetIndex, unsigned int stateIndex, float blendTime, const scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  __int64 v9; 
  const Animset *AnimsetByIndex; 
  const Animset *v11; 
  unsigned int numStates; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int v19; 
  scr_string_t v20; 
  XModelNameMap *v21; 
  XAnimCurveID v22; 
  __int64 v23; 
  scr_string_t v24; 
  const Animset *v25; 
  __int64 v26; 
  __int64 v27; 
  AnimsetState *outState; 
  int pOutStateIndex; 

  v9 = (int)stateIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 412, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  outState = NULL;
  if ( animsetIndex >= 4 )
  {
    LODWORD(v26) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", v26, 4) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v11 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v9 >= numStates )
    {
      LODWORD(v27) = numStates;
      LODWORD(v26) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    v13 = 0;
    v14 = 0i64;
    v15 = (__int64)&v11->states[v9];
    v16 = *(_DWORD *)(v15 + 16);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v15 + 8) + 80 * v14;
        if ( v13 + *(_DWORD *)(v17 + 16) > v13 )
          break;
        v14 = (unsigned int)(v14 + 1);
        v13 += *(_DWORD *)(v17 + 16);
        if ( (unsigned int)v14 >= v16 )
          return;
      }
      v18 = 0i64;
      if ( *(_DWORD *)(v17 + 48) )
      {
        v19 = notifyType;
        v20 = notifyName;
        v21 = modelNameMap;
        v22 = curveID;
        do
        {
          v23 = *(_QWORD *)(v17 + 40);
          outState = NULL;
          v24 = *(_DWORD *)(v23 + 4 * v18);
          v25 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
          if ( BG_Animset_GetStateInfoByName(v25, v24, &outState, &pOutStateIndex) )
            BG_PlayerASM_GraftTrees(obj, animsetIndex, pOutStateIndex, blendTime, v20, v19, v22, v21);
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < *(_DWORD *)(v17 + 48) );
      }
    }
  }
}

/*
==============
BG_PlayerASM_GraftTrees
==============
*/
void BG_PlayerASM_GraftTrees(DObj *obj, const unsigned int animsetIndex, unsigned int stateIndex, float blendTime, const scr_string_t notifyName, unsigned int notifyType, const XAnimCurveID curveID, XModelNameMap *modelNameMap)
{
  __int64 v9; 
  const Animset *AnimsetByIndex; 
  const Animset *v12; 
  unsigned int numStates; 
  __int64 v14; 
  unsigned int i; 
  __int64 v16; 
  char v17; 
  __int64 v18; 
  __int64 v19; 
  scr_string_t v20; 
  unsigned int v21; 
  XAnimSubTreeID v22; 
  unsigned int v23; 
  __int64 goalTime; 
  __int64 rate; 

  v9 = (int)stateIndex;
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
  v12 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    if ( (unsigned int)v9 >= numStates )
    {
      LODWORD(rate) = numStates;
      LODWORD(goalTime) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", goalTime, rate) )
        __debugbreak();
    }
    v14 = (__int64)&v12->states[v9];
    for ( i = 0; i < *(_DWORD *)(v14 + 32); ++i )
    {
      v16 = *(_QWORD *)(v14 + 24) + 56i64 * i;
      if ( *(_DWORD *)(v16 + 4) )
      {
        v17 = *(_BYTE *)(v16 + 48);
        v18 = *(_QWORD *)(v16 + 40);
        v19 = *(_QWORD *)(v16 + 32);
        v20 = 0;
        if ( v17 )
          v20 = notifyName;
        v21 = 0;
        if ( v17 )
          v21 = notifyType;
        if ( v18 )
        {
          v22 = *(_WORD *)(v18 + 60);
          v23 = 1;
          LODWORD(v19) = (unsigned __int16)v19;
        }
        else
        {
          v22 = XANIM_SUBTREE_DEFAULT;
          v23 = (unsigned __int16)v19;
          LODWORD(v19) = 0;
        }
        XAnimSetCompleteGoalWeight(obj, v19, v22, v23, 1.0, blendTime, 1.0, v20, v21, 1, curveID, modelNameMap);
      }
    }
  }
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
  double Weight; 
  bool v9; 
  bool result; 

  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 446, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  result = 1;
  if ( !ci->playerASMLocomotion.forceUpdate )
  {
    DObj = BG_GetDObj(ActiveStatics, es->number);
    if ( !DObj )
      return 0;
    Tree = DObjGetTree(DObj);
    if ( !Tree )
      return 0;
    Animset = BG_PlayerASM_GetAnimset(es);
    v9 = 1;
    if ( Tree->children )
    {
      Weight = XAnimGetWeight(Tree, 0, XANIM_SUBTREE_DEFAULT, 0);
      if ( *(float *)&Weight != 0.0 )
        v9 = 0;
    }
    if ( (!BG_PlayerASM_GetAnimsetNameByIndex(Animset) || !v9) && BG_PlayerASM_GetAnimset(ci) == Animset )
      return 0;
  }
  return result;
}

/*
==============
BG_PlayerASM_LerpTreeParameters
==============
*/
void BG_PlayerASM_LerpTreeParameters(characterInfo_t *ci)
{
  BgStatic *ActiveStatics; 
  __int64 v3; 
  float v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  float lerpStrengthMin; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  float lerpStrengthMax; 
  float v11; 
  bool v12; 
  bool v13; 
  double v14; 
  double v15; 
  float strafeAngle; 
  double v17; 
  double v18; 
  double v19; 
  float v20; 
  const dvar_t *v23; 
  float value; 
  const dvar_t *v25; 
  float v26; 
  float moveTurn; 
  float lerpLegsYawSpeed; 
  float v29; 
  float v30; 
  double v31; 
  double v32; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2278, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2284, ASSERT_TYPE_ASSERT, "(bgameStatic)", (const char *)&queryFormat, "bgameStatic") )
    __debugbreak();
  v3 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2286, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v4 = (float)*(int *)(v3 + 19540) * 0.001;
  if ( v4 > 0.0 )
  {
    v5 = DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min;
    if ( !DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_parameter_lerp_strength_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( -1.0 == v5->current.value )
    {
      lerpStrengthMin = ci->legs.lerpStrengthMin;
    }
    else
    {
      v6 = DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min;
      if ( !DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_parameter_lerp_strength_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      lerpStrengthMin = v6->current.value;
      if ( lerpStrengthMin < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2298, ASSERT_TYPE_ASSERT, "(lerpStrengthMin >= 0.f)", (const char *)&queryFormat, "lerpStrengthMin >= 0.f") )
        __debugbreak();
    }
    v8 = DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max;
    if ( !DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_parameter_lerp_strength_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( -1.0 == v8->current.value )
    {
      lerpStrengthMax = ci->legs.lerpStrengthMax;
    }
    else
    {
      v9 = DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max;
      if ( !DCONST_DVARFLT_playerasm_loco_parameter_lerp_strength_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_parameter_lerp_strength_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      lerpStrengthMax = v9->current.value;
      if ( lerpStrengthMax < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2309, ASSERT_TYPE_ASSERT, "(lerpStrengthMax >= 0.f)", (const char *)&queryFormat, "lerpStrengthMax >= 0.f") )
        __debugbreak();
    }
    v11 = ci->playerASMLocomotion.lerpSpeed - (float)ci->speed;
    v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT(ci->playerASMLocomotion.lerpMoveTurn - ci->playerASMLocomotion.moveTurn) & _xmm) > 0.025;
    v14 = AngleDelta(ci->playerASMLocomotion.lerpStrafeAngle, ci->playerASMLocomotion.strafeAngle);
    v13 = COERCE_FLOAT(LODWORD(v14) & _xmm) > 0.0099999998;
    *(float *)&v14 = (float)ci->speed;
    if ( COERCE_FLOAT(LODWORD(v11) & _xmm) > 0.0099999998 )
    {
      v15 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)ci->speed - ci->playerASMLocomotion.lerpSpeed) & _xmm) * 0.0066666668, 0.0, 1.0);
      v14 = DiffTrack(_mm_cvtepi32_ps((__m128i)(unsigned int)ci->speed).m128_f32[0], ci->playerASMLocomotion.lerpSpeed, (float)((float)(1.0 - *(float *)&v15) * lerpStrengthMin) + (float)(*(float *)&v15 * lerpStrengthMax), v4);
    }
    ci->playerASMLocomotion.lerpSpeed = *(float *)&v14;
    strafeAngle = ci->playerASMLocomotion.strafeAngle;
    if ( v13 )
    {
      v17 = AngleDelta(ci->playerASMLocomotion.strafeAngle, ci->playerASMLocomotion.lerpStrafeAngle);
      v18 = I_fclamp(COERCE_FLOAT(LODWORD(v17) & _xmm) * 0.0055555557, 0.0, 1.0);
      v19 = DiffTrackAngle(ci->playerASMLocomotion.strafeAngle, ci->playerASMLocomotion.lerpStrafeAngle, (float)((float)(1.0 - *(float *)&v18) * lerpStrengthMin) + (float)(*(float *)&v18 * lerpStrengthMax), v4);
      v20 = *(float *)&v19 * 0.0027777778;
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm3, 1 }
      strafeAngle = (float)(v20 - *(float *)&_XMM4) * 360.0;
    }
    ci->playerASMLocomotion.lerpStrafeAngle = strafeAngle;
    if ( v12 )
    {
      v23 = DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_in;
      if ( !DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_move_turn_lerp_strength_in") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      value = v23->current.value;
      if ( ci->playerASMLocomotion.moveTurn == 0.0 )
      {
        v25 = DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_out;
        if ( !DCONST_DVARFLT_playerasm_loco_move_turn_lerp_strength_out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerasm_loco_move_turn_lerp_strength_out") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        value = v25->current.value;
      }
      v26 = exp2f(COERCE_FLOAT(COERCE_UNSIGNED_INT(value * v4) ^ _xmm));
      moveTurn = (float)((float)(1.0 - (float)(1.0 - v26)) * ci->playerASMLocomotion.lerpMoveTurn) + (float)((float)(1.0 - v26) * ci->playerASMLocomotion.moveTurn);
    }
    else
    {
      moveTurn = ci->playerASMLocomotion.moveTurn;
    }
    ci->playerASMLocomotion.lerpMoveTurn = moveTurn;
    lerpLegsYawSpeed = ci->playerASMLocomotion.lerpLegsYawSpeed;
    v30 = ci->deltaLerpMoveDir / v4;
    v29 = v30;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(lerpLegsYawSpeed - v30) & _xmm) > 0.0099999998 )
    {
      v31 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - lerpLegsYawSpeed) & _xmm) * 0.0066666668, 0.0, 1.0);
      v32 = DiffTrack(v30, ci->playerASMLocomotion.lerpLegsYawSpeed, (float)((float)(1.0 - *(float *)&v31) * lerpStrengthMin) + (float)(*(float *)&v31 * lerpStrengthMax), v4);
      v29 = *(float *)&v32;
    }
    ci->playerASMLocomotion.lerpLegsYawSpeed = v29;
    ci->playerASMLocomotion.lastSpeed = ci->speed;
    ci->playerASMLocomotion.lastStrafeAngle = ci->playerASMLocomotion.strafeAngle;
  }
}

/*
==============
BG_PlayerASM_PlayMoveTurnAnim
==============
*/
void BG_PlayerASM_PlayMoveTurnAnim(characterInfo_t *ci, DObj *obj, XAnimTree *tree, const PlayerASM_AnimSlot slot, const unsigned int animsetIndex, const unsigned int packedAnimIndex, const AnimsetAlias *pAlias, const bool clear, XModelNameMap *modelNameMap, const unsigned int flags)
{
  unsigned __int8 v10; 
  const AnimsetAlias *v14; 
  BgStatic *ActiveStatics; 
  __int64 v16; 
  float oldPlayerYawAngle; 
  AnimsetAlias_Union v18; 
  scr_string_t numRedAnims; 
  unsigned int v20; 
  const Animset *AnimsetByIndex; 
  int IndexOfRandomAnimFrom; 
  int v23; 
  const Animset *v24; 
  float v25; 
  unsigned int v26; 
  float v29; 
  float v30; 
  double v31; 
  double Float_Internal_DebugName; 
  double v33; 
  __int64 animEntryToSkip; 
  int pOutStateIndex; 
  AnimsetState *outState; 
  XAnimSubTreeID pOutAnimSubtreeID; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  XAnimCurveID pOutAnimCurveID; 

  v10 = slot;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 740, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 741, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 742, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v14 = pAlias;
  if ( !pAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 743, ASSERT_TYPE_ASSERT, "(pAlias)", (const char *)&queryFormat, "pAlias") )
    __debugbreak();
  if ( v10 >= 2u )
  {
    LODWORD(animEntryToSkip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 744, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( PlayerASM_AnimSlot::COUNT )", "slot doesn't index PlayerASM_AnimSlot::COUNT\n\t%i not in [0, %i)", animEntryToSkip, 2) )
      __debugbreak();
  }
  ActiveStatics = BgStatic::GetActiveStatics();
  v16 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v10 )
  {
    oldPlayerYawAngle = ci->playerASMLocomotion.oldPlayerYawAngle;
    ci->playerASMLocomotion.oldPlayerYawAngle = ci->playerAngles.v[1];
    if ( v14 )
    {
      v18.m_AIAnimsetAlias = (AIAnimsetAlias *)v14->u;
      if ( *(&v18.m_AIAnimsetAlias[3].numRedAnims + 1) )
      {
        numRedAnims = v18.m_AIAnimsetAlias[3].numRedAnims;
        v20 = animsetIndex;
        AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
        if ( BG_Animset_GetStateInfoByName(AnimsetByIndex, numRedAnims, &outState, &pOutStateIndex) )
        {
          IndexOfRandomAnimFrom = BG_PlayerASM_GetIndexOfRandomAnimFromAlias<0>(NULL, ci->entityNum, v20, outState, *((const scr_string_t *)&v14->u.m_AIAnimsetAlias[3].numRedAnims + 1), 0);
          if ( IndexOfRandomAnimFrom < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 770, ASSERT_TYPE_ASSERT, "(entryIndex >= 0)", (const char *)&queryFormat, "entryIndex >= 0") )
            __debugbreak();
          v23 = pOutStateIndex;
          v24 = BG_PlayerASM_GetAnimsetByIndex(v20);
          BG_Animset_GetAnimIndexFromStateIndexAndEntry(v24, v23, IndexOfRandomAnimFrom, &pOutAnimIndex, &pOutGraftNode, &pOutAnimSubtreeID, &pOutAnimCurveID);
          if ( (flags & 4) != 0 )
            v25 = 0.0;
          else
            v25 = *((float *)&v14->u.m_AIAnimsetAlias[4].redAnims + 1);
          if ( clear )
          {
            XAnimClearTreeGoalWeights(tree, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, v25, 0, obj, pOutAnimCurveID);
          }
          else
          {
            v26 = *(_DWORD *)(v16 + 19540);
            if ( v26 )
            {
              _XMM0 = 0i64;
              __asm { vroundss xmm4, xmm0, xmm2, 1 }
              v30 = (float)((float)((float)(oldPlayerYawAngle - ci->playerAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * (float)(360000.0 / _mm_cvtepi32_ps((__m128i)v26).m128_f32[0]);
              v29 = v30;
              if ( BG_PlayerASM_IsMoveBackwardAlias(packedAnimIndex, v20) )
                LODWORD(v29) = LODWORD(v30) ^ _xmm;
              v31 = I_fclamp(v29 * 0.0055555557, -1.0, 1.0);
              ci->playerASMLocomotion.moveTurn = *(float *)&v31;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 * 0.0055555557) & _xmm) <= 0.2 )
              {
                if ( COERCE_FLOAT(LODWORD(ci->playerASMLocomotion.lerpMoveTurn) & _xmm) < 0.025 )
                  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, pOutAnimIndex, 0.0, v25, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
              }
              else
              {
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_playerasm_loco_move_turn_max_player_speed, "playerasm_loco_move_turn_max_player_speed");
                v33 = I_fclamp((float)ci->speed / *(float *)&Float_Internal_DebugName, 0.0, 1.0);
                XAnimSetCompleteGoalWeight(obj, pOutGraftNode, pOutAnimSubtreeID, pOutAnimIndex, *(float *)&v33, v25, 1.0, (scr_string_t)0, 0, 0, pOutAnimCurveID, modelNameMap);
              }
            }
          }
        }
      }
    }
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
  const Animset *v12; 
  unsigned int numStates; 
  __int64 v14; 
  __int64 v15; 
  const Animset *v16; 
  scr_string_t alwaysOnStateName; 
  const Animset *v18; 
  int v19; 
  const Animset *v20; 
  unsigned int NumEntriesForStateIndex; 
  unsigned int v22; 
  XModelNameMap *v23; 
  float v24; 
  const Animset *v25; 
  PlayerCustomAnimHandlerType v26; 
  int v27; 
  const Animset *v28; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  char v31; 
  XAnimSubTreeID v32; 
  int pOutStateIndex; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  AnimsetState *outState; 
  AnimsetAnim *ppOutAnim; 
  unsigned __int8 v39; 
  XAnimCurveID v40; 

  v39 = slot;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 253, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( animsetIndex >= 4 )
  {
    LODWORD(pOutAnimSubtreeID) = animsetIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2595, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", pOutAnimSubtreeID, 4) )
      __debugbreak();
  }
  AnimsetByIndex = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
  v12 = AnimsetByIndex;
  if ( AnimsetByIndex )
  {
    numStates = AnimsetByIndex->numStates;
    v14 = (int)stateIndex;
    if ( stateIndex >= numStates )
    {
      LODWORD(pOutAnimCurveID) = numStates;
      LODWORD(pOutAnimSubtreeID) = stateIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2604, ASSERT_TYPE_ASSERT, "(unsigned)( stateIndex ) < (unsigned)( animset->numStates )", "stateIndex doesn't index animset->numStates\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
        __debugbreak();
    }
    v15 = (__int64)&v12->states[v14];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 257, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
      __debugbreak();
    v31 = *(_BYTE *)(v15 + 102);
    if ( animsetIndex >= 4 )
    {
      LODWORD(pOutAnimCurveID) = 4;
      LODWORD(pOutAnimSubtreeID) = animsetIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2652, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
        __debugbreak();
    }
    v16 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2654, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
      __debugbreak();
    alwaysOnStateName = v16->alwaysOnStateName;
    if ( alwaysOnStateName )
    {
      outState = NULL;
      v18 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
      if ( BG_Animset_GetStateInfoByName(v18, alwaysOnStateName, &outState, &pOutStateIndex) )
      {
        v19 = pOutStateIndex;
        if ( animsetIndex >= 4 )
        {
          LODWORD(pOutAnimCurveID) = 4;
          LODWORD(pOutAnimSubtreeID) = animsetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2699, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 2) )", "animsetIndex doesn't index MAX_PLAYERANIM_ANIMSET_COUNT\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
            __debugbreak();
        }
        v20 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
        if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2701, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
          __debugbreak();
        NumEntriesForStateIndex = BG_Animset_GetNumEntriesForStateIndex(v20, v19);
        v22 = 0;
        if ( NumEntriesForStateIndex )
        {
          v23 = modelNameMap;
          v24 = mainBlendTime;
          do
          {
            v25 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
            if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 276, ASSERT_TYPE_ASSERT, "(animset)", (const char *)&queryFormat, "animset") )
              __debugbreak();
            BG_Animset_GetAliasAndAnimFromStateIndexAndEntry(v25, pOutStateIndex, v22, (const AnimsetAlias **)&outState, (const AnimsetAnim **)&ppOutAnim);
            v26 = *(_BYTE *)(*(_QWORD *)&outState->stateType + 80i64);
            if ( (unsigned __int8)(v26 - 1) > 2u && (unsigned __int8)(v26 - 10) > 1u )
            {
              v27 = pOutStateIndex;
              v28 = BG_PlayerASM_GetAnimsetByIndex(animsetIndex);
              BG_Animset_GetAnimIndexFromStateIndexAndEntry(v28, v27, v22, &pOutAnimIndex, &pOutGraftNode, &v32, &v40);
              if ( (unsigned __int8)(v26 - 4) > 5u )
              {
                if ( v31 )
                  XAnimClearTreeGoalWeights(obj->tree, pOutGraftNode, v32, pOutAnimIndex, *((float *)&outState->numAnims + 1), 0, NULL, v40);
                else
                  XAnimSetCompleteGoalWeight(obj, pOutGraftNode, v32, pOutAnimIndex, 1.0, *((float *)&outState->numAnims + 1), 1.0, (scr_string_t)0, 0, 0, v40, v23);
              }
              else
              {
                BG_PlayerASM_UpdateAlwaysOn_CustomAnims(obj, ci, (const PlayerASM_AnimSlot)v39, v26, pOutGraftNode, v32, pOutAnimIndex, v24, *((const float *)&outState->numAnims + 1), mainCurveID, mainAliasAnimType, v31 == 0, v23);
              }
            }
            ++v22;
          }
          while ( v22 < NumEntriesForStateIndex );
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
  char v14; 
  __int64 v18; 
  const PlayerASMCustomAlwaysOnAnimHandler *v19; 
  const PlayerASMCustomAlwaysOnAnimHandler *v20; 
  __int64 goalTime; 
  __int64 rate; 

  v14 = slot;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 216, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 217, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( (unsigned __int8)animType >= PLAYER_CUSTOM_ANIM_HANDLER_COUNT )
  {
    LODWORD(goalTime) = (unsigned __int8)animType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 197, ASSERT_TYPE_ASSERT, "(unsigned)( animType ) < (unsigned)( PlayerCustomAnimHandlerType::PLAYER_CUSTOM_ANIM_HANDLER_COUNT )", "animType doesn't index PlayerCustomAnimHandlerType::PLAYER_CUSTOM_ANIM_HANDLER_COUNT\n\t%i not in [0, %i)", goalTime, 12) )
      __debugbreak();
  }
  v18 = 0i64;
  v19 = g_PlayerCustomAlwaysOnAnimHandlers;
  while ( v19->animType != animType )
  {
    v18 = (unsigned int)(v18 + 1);
    ++v19;
    if ( (unsigned int)v18 >= 2 )
    {
      v20 = NULL;
      goto LABEL_15;
    }
  }
  v20 = &g_PlayerCustomAlwaysOnAnimHandlers[v18];
  if ( v20 )
    goto LABEL_17;
LABEL_15:
  LODWORD(rate) = (unsigned __int8)animType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 222, ASSERT_TYPE_ASSERT, "(customHandler)", "%s\n\tInvalid always_on custom anim handler '%d'", "customHandler", rate) )
    __debugbreak();
LABEL_17:
  if ( v20->animSlot[0] == v14 )
  {
    if ( turnOn && BG_GetConditionValue(ci, v20->animCondition) )
    {
      if ( mainAliasAnimType != v20->inAnimType && mainAliasAnimType != v20->outAnimType )
      {
        XAnimSetCompleteGoalWeight(obj, graftNode, subtreeID, animIndex, 1.0, mainBlendtime, 1.0, (scr_string_t)0, 0, 0, curveID, modelNameMap);
        return;
      }
      alwaysOnBlendtime = mainBlendtime;
    }
    XAnimClearTreeGoalWeights(obj->tree, graftNode, subtreeID, animIndex, alwaysOnBlendtime, 0, NULL, LINEAR);
  }
}

/*
==============
BG_PlayerASM_UpdateTreeParameters
==============
*/
void BG_PlayerASM_UpdateTreeParameters(DObj *obj, characterInfo_t *ci, bool isNewAnim)
{
  unsigned int Anim; 
  unsigned int Animset; 
  float lastStrafeAngle; 
  double ParameterValue; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 

  if ( !PlayerASM_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2408, ASSERT_TYPE_ASSERT, "(PlayerASM_IsEnabled())", (const char *)&queryFormat, "PlayerASM_IsEnabled()") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\bg_player_asm_animation.cpp", 2386, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Anim = BG_PlayerASM_GetAnim(ci, MOVEMENT);
  Animset = BG_PlayerASM_GetAnimset(ci);
  if ( isNewAnim && Anim && BG_PlayerASM_IsStopAlias(Anim, Animset) )
  {
    lastStrafeAngle = ci->playerASMLocomotion.lastStrafeAngle;
    ci->playerASMLocomotion.stopSpeed = (float)ci->playerASMLocomotion.lastSpeed;
    ci->playerASMLocomotion.stopAngle = lastStrafeAngle;
  }
  BG_PlayerASM_LerpTreeParameters(ci);
  ParameterValue = BG_PlayerASM_GetParameterValue(ci, 0);
  XAnimSetFloatGameParameterByIndex(obj, 0, *(float *)&ParameterValue);
  v10 = BG_PlayerASM_GetParameterValue(ci, 0x24u);
  XAnimSetFloatGameParameterByIndex(obj, 0x24u, *(float *)&v10);
  v11 = BG_PlayerASM_GetParameterValue(ci, 0x25u);
  XAnimSetFloatGameParameterByIndex(obj, 0x25u, *(float *)&v11);
  v12 = BG_PlayerASM_GetParameterValue(ci, 0x26u);
  XAnimSetFloatGameParameterByIndex(obj, 0x26u, *(float *)&v12);
  v13 = BG_PlayerASM_GetParameterValue(ci, 0x2Bu);
  XAnimSetFloatGameParameterByIndex(obj, 0x2Bu, *(float *)&v13);
  v14 = BG_PlayerASM_GetParameterValue(ci, 0x2Eu);
  XAnimSetFloatGameParameterByIndex(obj, 0x2Eu, *(float *)&v14);
}

