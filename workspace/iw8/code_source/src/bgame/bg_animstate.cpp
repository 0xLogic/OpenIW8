/*
==============
BG_AnimationState_GetAnimsetNameByIndex
==============
*/

scr_string_t __fastcall BG_AnimationState_GetAnimsetNameByIndex(const int animsetIndex)
{
  return ?BG_AnimationState_GetAnimsetNameByIndex@@YA?AW4scr_string_t@@H@Z(animsetIndex);
}

/*
==============
BG_AnimationState_SetPlayerInfo
==============
*/

void __fastcall BG_AnimationState_SetPlayerInfo(AnimationController animCtrl, const DObj *obj, clientControllers_t *control, CEntPlayerInfo *info)
{
  ?BG_AnimationState_SetPlayerInfo@@YAXW4AnimationController@@PEBUDObj@@PEAUclientControllers_t@@PEAUCEntPlayerInfo@@@Z(animCtrl, obj, control, info);
}

/*
==============
BG_AnimationState_GetControllerByIndex
==============
*/

AnimationController __fastcall BG_AnimationState_GetControllerByIndex(int animsetIndex)
{
  return ?BG_AnimationState_GetControllerByIndex@@YA?AW4AnimationController@@H@Z(animsetIndex);
}

/*
==============
BG_AnimationState_DoControllers
==============
*/

void __fastcall BG_AnimationState_DoControllers(const CEntPlayerInfo *info, const DObj *obj, DObjPartBits *partBits)
{
  ?BG_AnimationState_DoControllers@@YAXPEBUCEntPlayerInfo@@PEBUDObj@@PEAUDObjPartBits@@@Z(info, obj, partBits);
}

/*
==============
BG_AnimationState_MinimalUpdate
==============
*/

void __fastcall BG_AnimationState_MinimalUpdate(const entityState_t *es, characterAnimState_t *charAnimState, XAnimTree *pTree, int *pTreeDirty, const int flags)
{
  ?BG_AnimationState_MinimalUpdate@@YAXPEBUentityState_t@@PEAUcharacterAnimState_t@@PEAUXAnimTree@@PEAHH@Z(es, charAnimState, pTree, pTreeDirty, flags);
}

/*
==============
BG_AnimationState_GetState
==============
*/

void __fastcall BG_AnimationState_GetState(const entityState_t *es, int *animState, int *animEntry)
{
  ?BG_AnimationState_GetState@@YAXPEBUentityState_t@@PEAH1@Z(es, animState, animEntry);
}

/*
==============
BG_AnimationState_GetClassByIndex
==============
*/

const AnimationClass *__fastcall BG_AnimationState_GetClassByIndex(const int animClassIndex)
{
  return ?BG_AnimationState_GetClassByIndex@@YAPEBUAnimationClass@@H@Z(animClassIndex);
}

/*
==============
BG_AnimationState_Reset
==============
*/

void __fastcall BG_AnimationState_Reset(const entityState_t *es, characterInfo_t *characterInfo)
{
  ?BG_AnimationState_Reset@@YAXPEBUentityState_t@@PEAUcharacterInfo_t@@@Z(es, characterInfo);
}

/*
==============
BG_AnimationState_SetState
==============
*/

void __fastcall BG_AnimationState_SetState(const int animState, const int animEntry, entityState_t *es)
{
  ?BG_AnimationState_SetState@@YAXHHPEAUentityState_t@@@Z(animState, animEntry, es);
}

/*
==============
BG_AnimationState_Update
==============
*/

void __fastcall BG_AnimationState_Update(const entityState_t *es, characterAnimState_t *charAnimState, XAnimTree *pTree, int *pTreeDirty, const int flags)
{
  ?BG_AnimationState_Update@@YAXPEBUentityState_t@@PEAUcharacterAnimState_t@@PEAUXAnimTree@@PEAHH@Z(es, charAnimState, pTree, pTreeDirty, flags);
}

/*
==============
BG_AnimationState_Update
==============
*/

void __fastcall BG_AnimationState_Update(const entityState_t *es, characterInfo_t *characterInfo, const int flags)
{
  ?BG_AnimationState_Update@@YAXPEBUentityState_t@@PEAUcharacterInfo_t@@H@Z(es, characterInfo, flags);
}

/*
==============
BG_AnimationState_GetAnimsetName
==============
*/

scr_string_t __fastcall BG_AnimationState_GetAnimsetName(const entityState_t *es)
{
  return ?BG_AnimationState_GetAnimsetName@@YA?AW4scr_string_t@@PEBUentityState_t@@@Z(es);
}

/*
==============
BG_AnimationState_GetAnimIndex
==============
*/

unsigned __int16 __fastcall BG_AnimationState_GetAnimIndex(const scr_string_t animsetName, const entityState_t *es)
{
  return ?BG_AnimationState_GetAnimIndex@@YAGW4scr_string_t@@PEBUentityState_t@@@Z(animsetName, es);
}

/*
==============
BG_AnimationState_GetNotify
==============
*/

scr_string_t __fastcall BG_AnimationState_GetNotify(const scr_string_t animsetName, const entityState_t *es)
{
  return ?BG_AnimationState_GetNotify@@YA?AW4scr_string_t@@W41@PEBUentityState_t@@@Z(animsetName, es);
}

/*
==============
BG_AnimationState_GetAnims
==============
*/

XAnim_s *__fastcall BG_AnimationState_GetAnims(const entityState_t *es)
{
  return ?BG_AnimationState_GetAnims@@YAPEAUXAnim_s@@PEBUentityState_t@@@Z(es);
}

/*
==============
BG_AnimationState_GetAnims
==============
*/

XAnim_s *__fastcall BG_AnimationState_GetAnims(const scr_string_t animsetName)
{
  return ?BG_AnimationState_GetAnims@@YAPEAUXAnim_s@@W4scr_string_t@@@Z(animsetName);
}

/*
==============
BG_AnimationState_UpdateControllers
==============
*/

int __fastcall BG_AnimationState_UpdateControllers(const entityState_t *es, const characterInfo_t *characterInfo, clientControllers_t *control)
{
  return ?BG_AnimationState_UpdateControllers@@YAHPEBUentityState_t@@PEBUcharacterInfo_t@@PEAUclientControllers_t@@@Z(es, characterInfo, control);
}

/*
==============
BG_AnimationState_GetController
==============
*/

AnimationController __fastcall BG_AnimationState_GetController(const entityState_t *es)
{
  return ?BG_AnimationState_GetController@@YA?AW4AnimationController@@PEBUentityState_t@@@Z(es);
}

/*
==============
BG_AnimationState_GetAnimIndex
==============
*/

unsigned __int16 __fastcall BG_AnimationState_GetAnimIndex(const Animset *pAnimset, const entityState_t *es)
{
  return ?BG_AnimationState_GetAnimIndex@@YAGPEBUAnimset@@PEBUentityState_t@@@Z(pAnimset, es);
}

/*
==============
BG_AnimationState_LerpControllers
==============
*/

int __fastcall BG_AnimationState_LerpControllers(const entityState_t *es, characterInfo_t *characterInfo, int frametime)
{
  return ?BG_AnimationState_LerpControllers@@YAHPEBUentityState_t@@PEAUcharacterInfo_t@@H@Z(es, characterInfo, frametime);
}

/*
==============
BG_AnimationState_GetStateName
==============
*/

scr_string_t __fastcall BG_AnimationState_GetStateName(const entityState_t *es, const int stateIndex)
{
  return ?BG_AnimationState_GetStateName@@YA?AW4scr_string_t@@PEBUentityState_t@@H@Z(es, stateIndex);
}

/*
==============
BG_AnimationState_GetNotify
==============
*/

scr_string_t __fastcall BG_AnimationState_GetNotify(const Animset *pAnimset, const entityState_t *es)
{
  return ?BG_AnimationState_GetNotify@@YA?AW4scr_string_t@@PEBUAnimset@@PEBUentityState_t@@@Z(pAnimset, es);
}

/*
==============
BG_AnimationState_ApplyBlends
==============
*/
void BG_AnimationState_ApplyBlends(const entityState_t *es, XAnimTree *pAnimTree, characterAnimState_t *charAnimState, DObj *obj, const float blendTime)
{
  characterAnimState_t *v9; 
  unsigned __int16 animAimRoot; 
  scr_string_t AnimsetName; 
  AnimsetState *AimSet; 
  unsigned int index; 
  unsigned int numAnimAliases; 
  unsigned int v20; 
  __int64 v21; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float goalTime; 
  float goalTimea; 
  float v30; 
  float v31; 
  float v32; 
  float notifyName; 
  float notifyType; 

  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm6
    vmovaps [rsp+0C8h+var_58], xmm7
  }
  v9 = charAnimState;
  if ( !charAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 288, ASSERT_TYPE_ASSERT, "(charAnimState)", (const char *)&queryFormat, "charAnimState") )
    __debugbreak();
  if ( !pAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 289, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 290, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 291, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1052, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  __asm { vmovss  xmm6, [rsp+0C8h+blendTime] }
  animAimRoot = v9->animAimRoot;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( animAimRoot )
  {
    __asm
    {
      vmovss  [rsp+0C8h+var_98], xmm7
      vmovss  [rsp+0C8h+goalTime], xmm6
      vmovss  dword ptr [rsp+0C8h+fmt], xmm7
    }
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animAimRoot, fmt, goalTime, v30, (scr_string_t)0, 0, 0, LINEAR, NULL);
    __asm { vmovss  dword ptr [rsp+0C8h+fmt], xmm6 }
    XAnimClearChildGoalWeights(pAnimTree, 0, XANIM_SUBTREE_DEFAULT, v9->animAimRoot, fmta, LINEAR);
    v9->animAimRoot = 0;
  }
  AnimsetName = BG_AnimationState_GetAnimsetName(es);
  AimSet = BG_AnimationState_GetAimSet(AnimsetName, es);
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x11u) && AimSet )
  {
    index = AimSet->aimsetRootAnim.index;
    __asm
    {
      vmovss  [rsp+0C8h+var_98], xmm7
      vmovaps [rsp+0C8h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovss  [rsp+0C8h+goalTime], xmm6
      vmovss  dword ptr [rsp+0C8h+fmt], xmm8
    }
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, index, fmtb, goalTimea, v31, (scr_string_t)0, 0, 0, LINEAR, NULL);
    numAnimAliases = AimSet->numAnimAliases;
    v20 = 0;
    if ( numAnimAliases )
    {
      do
      {
        v21 = (__int64)&AimSet->animAliases[v20];
        if ( *(_DWORD *)(v21 + 16) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 317, ASSERT_TYPE_ASSERT, "(pAlias->numAnims == 1)", "%s\n\tCannot support aimset alias with multiple anims.  Makes no sense.", "pAlias->numAnims == 1") )
          __debugbreak();
        __asm
        {
          vmovss  [rsp+0C8h+notifyType], xmm7
          vmovss  [rsp+0C8h+notifyName], xmm6
          vmovss  [rsp+0C8h+var_98], xmm8
        }
        XAnimSetGoalWeightKnobAll(obj, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(*(_QWORD *)(v21 + 8) + 16i64), XANIM_SUBTREE_DEFAULT, index, v32, notifyName, notifyType, (scr_string_t)0, 0, LINEAR);
        numAnimAliases = AimSet->numAnimAliases;
        ++v20;
      }
      while ( v20 < numAnimAliases );
      v9 = charAnimState;
    }
    __asm { vmovaps xmm8, [rsp+0C8h+var_68] }
    if ( numAnimAliases != 5 )
      v9->animAimRoot = index;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_48]
    vmovaps xmm7, [rsp+0C8h+var_58]
  }
}

/*
==============
BG_AnimationState_ApplyState
==============
*/
void BG_AnimationState_ApplyState(const entityState_t *es, characterAnimState_t *charAnimState, int *pTreeDirty, const int flags)
{
  signed __int64 v4; 
  void *v12; 
  char v13; 
  const BgStatic *ActiveStatics; 
  DObj *DObj; 
  const BgAnimStatic *v18; 
  int v19; 
  scr_string_t AnimsetName; 
  scr_string_t String; 
  int v22; 
  int animClass; 
  char *v27; 
  int v30; 
  scr_string_t v31; 
  const char *v32; 
  scr_string_t StateNameFromIndex; 
  const char *v34; 
  bool v35; 
  scr_string_t animEntryMap; 
  const char *v39; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v42; 
  scr_string_t AnimTree; 
  const char *v44; 
  const char *v45; 
  int IsLeafNode; 
  char v47; 
  const char *AnimDebugName; 
  unsigned int v52; 
  unsigned int animData; 
  int v54; 
  characterAnimState_t *v55; 
  int animState; 
  int v57; 
  int animEntry; 
  int v59; 
  bool v60; 
  DObj *v61; 
  DObj *v62; 
  int v63; 
  int v64; 
  unsigned int v66; 
  int v67; 
  Animset *v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  __int64 v72; 
  unsigned int v73; 
  char *v75; 
  scr_string_t Notify; 
  int v77; 
  XAnimCurveID v78; 
  unsigned int v80; 
  int v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int v84; 
  __int64 v85; 
  unsigned int v86; 
  unsigned int v87; 
  char v89; 
  int v90; 
  unsigned int v91; 
  unsigned int v92; 
  XAnimTree *v93; 
  characterAnimState_t *v94; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  float pOutAnimSubtreeIDa; 
  XAnimCurveID *pOutAnimCurveID; 
  float pOutAnimCurveIDa; 
  XAnimCurveID v109; 
  XAnimCurveID curveID; 
  bool v111; 
  XAnimSubTreeID v112; 
  bool v113; 
  AnimsetState *outState; 
  XAnimSubTreeID v115; 
  XAnimTree *tree; 
  int v117; 
  int v118; 
  DObj *obj; 
  char *outName; 
  unsigned int animIndex; 
  unsigned int notifyType; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  Animset *pAnimset; 
  unsigned int graftAnimIndex; 
  int bRestart; 
  AnimsetAnim *ppOutAnim; 
  characterAnimState_t *charAnimStatea; 
  const entityState_t *v130; 
  const XAnim_s *v131; 
  int *v132; 
  __int64 v133; 
  XModelNameMap pModelNameMap; 
  char v140; 

  v12 = alloca(v4);
  v133 = -2i64;
  __asm
  {
    vmovaps [rsp+3190h+var_40], xmm6
    vmovaps [rsp+3190h+var_50], xmm7
    vmovaps [rsp+3190h+var_60], xmm8
    vmovaps [rsp+3190h+var_70], xmm9
    vmovaps [rsp+3190h+var_80], xmm10
  }
  v13 = flags;
  v132 = pTreeDirty;
  charAnimStatea = charAnimState;
  _RSI = es;
  v130 = es;
  BG_CheckThread();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 547, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !charAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 548, ASSERT_TYPE_ASSERT, "(charAnimState)", (const char *)&queryFormat, "charAnimState") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Animstate_ApplyState");
  ActiveStatics = BgStatic::GetActiveStatics();
  DObj = BG_GetDObj(ActiveStatics, _RSI->number);
  obj = DObj;
  if ( DObj )
  {
    tree = DObjGetTree(DObj);
    if ( tree )
    {
      v18 = ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 563, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v19 = v18->time - v18->deltaTime;
      AnimsetName = BG_AnimationState_GetAnimsetName(_RSI);
      if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_ANIMSET, charAnimState->animClass, (const char **)&outName) )
        String = SL_FindString(outName);
      else
        String = 0;
      outName = (char *)Animset_Find(AnimsetName);
      pAnimset = Animset_Find(String);
      pOutGraftNode = 0;
      v112 = XANIM_SUBTREE_DEFAULT;
      curveID = LINEAR;
      v22 = (_RSI->animInfo.animData >> 18) & 0x3F;
      v118 = v22;
      animClass = charAnimState->animClass;
      v117 = animClass;
      __asm { vxorps  xmm8, xmm8, xmm8 }
      if ( v19 >= _RSI->animInfo.animTime )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm7, xmm0, cs:__real@3a83126f
        }
      }
      else
      {
        if ( (v13 & 1) == 0 && animClass == v22 && tree->children )
          goto LABEL_126;
        __asm { vxorps  xmm7, xmm7, xmm7 }
      }
      BG_CheckThread();
      v27 = outName;
      if ( !outName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 152, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
        __debugbreak();
      BG_Animset_GetAnimIndexFromStateIndexAndEntry((const Animset *)v27, (_RSI->animInfo.animData >> 1) & 0x3FF, (_RSI->animInfo.animData >> 11) & 0x7F, &pOutAnimIndex, &pOutGraftNode, &v112, NULL);
      __asm { vmovss  xmm9, cs:__real@3f800000 }
      if ( _RSI->eType == ET_AGENT )
        __asm { vmovss  xmm10, dword ptr [rsi+0C8h] }
      else
        __asm { vmovaps xmm10, xmm9 }
      if ( (v13 & 8) != 0 )
        goto LABEL_33;
      v30 = (_RSI->animInfo.animData >> 1) & 0x3FF;
      outState = NULL;
      v31 = BG_AnimationState_GetAnimsetName(_RSI);
      BG_Animset_GetStateInfoByIndex(v31, v30, &outState);
      if ( !outState )
      {
        v32 = SL_ConvertToString(v31);
        StateNameFromIndex = BG_Animset_GetStateNameFromIndex(v31, v30);
        v34 = SL_ConvertToString(StateNameFromIndex);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 174, ASSERT_TYPE_ASSERT, "(pState)", "%s\n\tunable to find state %s in animset %s", "pState", v34, v32) )
          __debugbreak();
        v27 = outName;
      }
      v35 = !outState->restart;
      bRestart = 0;
      if ( !v35 )
LABEL_33:
        bRestart = 1;
      if ( (v13 & 4) != 0 )
      {
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
      else
      {
        if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 212, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
          __debugbreak();
        outState = NULL;
        ppOutAnim = NULL;
        BG_Animset_GetAliasAndAnimFromStateIndexAndEntry((const Animset *)v27, (_RSI->animInfo.animData >> 1) & 0x3FF, (_RSI->animInfo.animData >> 11) & 0x7F, (const AnimsetAlias **)&outState, (const AnimsetAnim **)&ppOutAnim);
        _RAX = outState;
        animEntryMap = (scr_string_t)outState->animEntryMap;
        if ( animEntryMap )
        {
          curveID = XAnimCurve_GetIDFromPrimitiveCurveName(animEntryMap);
          if ( curveID == CURVE_ASSET_END )
          {
            v39 = SL_ConvertToString((scr_string_t)LODWORD(outState->animEntryMap));
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 223, ASSERT_TYPE_ASSERT, "(*pOutCurveID != XAnimCurveID::MAX)", "%s\n\tInvalid xanim curve name %s", "*pOutCurveID != XAnimCurveID::MAX", v39) )
              __debugbreak();
          }
          _RAX = outState;
          __asm { vmovss  xmm6, dword ptr [rax+3Ch] }
        }
        else
        {
          curveID = LINEAR;
          __asm { vmovss  xmm6, dword ptr [rax+3Ch] }
        }
      }
      pModelNameMap.initialized = 0;
      SubTreeAnims = XAnimGetSubTreeAnims(tree, v112);
      v131 = SubTreeAnims;
      v42 = (unsigned __int16)pOutAnimIndex;
      if ( (unsigned __int16)pOutAnimIndex >= SubTreeAnims->size )
      {
        AnimTree = BG_Animset_GetAnimTree(AnimsetName);
        v44 = SL_ConvertToString(AnimTree);
        v45 = SL_ConvertToString(AnimsetName);
        Com_Printf(18, "BG_AnimationState_ApplyState: Bad anim index.  entnum = %d  animset = (%s) animtree = (%s)\n", (unsigned int)_RSI->number, v45, v44);
      }
      IsLeafNode = XAnimIsLeafNode(SubTreeAnims, v42);
      v113 = IsLeafNode != 0;
      if ( IsLeafNode )
      {
        *(double *)&_XMM0 = XAnimGetLength(SubTreeAnims, v42);
        __asm { vcomiss xmm0, xmm8 }
        if ( v47 | v35 )
        {
          AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, v42);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 629, ASSERT_TYPE_ASSERT, "( XAnimGetLength( animTreeAnims, animIndex ) > 0.0f )", "%s is missing or is not a valid xanim", AnimDebugName) )
            __debugbreak();
        }
        XAnimGetLength(SubTreeAnims, v42);
        __asm
        {
          vdivss  xmm7, xmm7, xmm0
          vcomiss xmm7, xmm9
        }
        if ( !v47 )
        {
          if ( XAnimIsLooped(SubTreeAnims, v42) )
          {
            __asm
            {
              vmovaps xmm1, xmm7
              vxorps  xmm2, xmm2, xmm2
              vroundss xmm0, xmm2, xmm1, 1
              vsubss  xmm7, xmm7, xmm0
            }
          }
          else
          {
            __asm { vxorps  xmm7, xmm7, xmm7 }
          }
        }
      }
      v52 = 0;
      if ( !v18->anim_user )
        v52 = 3;
      notifyType = v52;
      animData = _RSI->animInfo.animData;
      v54 = (animData >> 1) & 0x3FF;
      v55 = charAnimStatea;
      animState = charAnimStatea->animState;
      LODWORD(ppOutAnim) = animState;
      v57 = (animData >> 11) & 0x7F;
      animEntry = charAnimStatea->animEntry;
      v59 = v13 & 0xB;
      v60 = !tree->children || animState == v54 && _RSI->animInfo.animTime != charAnimStatea->animTime || v59;
      v111 = v60;
      animIndex = 0;
      graftAnimIndex = 0;
      v115 = XANIM_SUBTREE_DEFAULT;
      if ( animState != v54 || animEntry != v57 || v60 )
      {
        v61 = obj;
        XAnimSetIntGameParameterByName(obj, scr_const.animclass, (animData >> 18) & 0x3F);
        XAnimSetIntGameParameterByName(v61, scr_const.animstate, (_RSI->animInfo.animData >> 1) & 0x3FF);
        XAnimSetIntGameParameterByName(v61, scr_const.animentry, (_RSI->animInfo.animData >> 11) & 0x7F);
        animState = (int)ppOutAnim;
      }
      if ( tree->children )
      {
        if ( !v59 )
        {
          if ( v117 == v118 && animState == v54 )
            BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, v55->animState, v55->animEntry, &animIndex, &graftAnimIndex, &v115, NULL);
          else
            animIndex = BG_Animset_GetClearKnob(pAnimset);
        }
        v62 = obj;
        __asm { vmovss  dword ptr [rsp+3190h+fmt], xmm6 }
        XAnimClearTreeGoalWeights(tree, graftAnimIndex, v115, animIndex, fmt, 1, obj, curveID);
        if ( animState != v54 || (v63 = v118, v64 = v117, v117 != v118) )
        {
          __asm { vmovaps xmm3, xmm6; blendTime }
          BG_AnimationState_ClearGraftTrees(v62, pAnimset, v55->animState, *(float *)&_XMM3, curveID);
          v63 = v118;
          v64 = v117;
        }
        if ( animState != v54 || v64 != v63 || animEntry != v57 )
        {
          v66 = v55->animEntry;
          v67 = v55->animState;
          v68 = pAnimset;
          if ( v66 >= BG_Animset_GetNumEntriesForStateIndex(pAnimset, v67) )
          {
            LODWORD(pOutAnimCurveID) = BG_Animset_GetNumEntriesForStateIndex(v68, v67);
            LODWORD(pOutAnimSubtreeID) = v66;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 460, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex ) )", "entryIndex doesn't index BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex )\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
              __debugbreak();
          }
          obj = NULL;
          if ( BG_Animset_GetStateInfoByIndex(v68, v67, (AnimsetState **)&obj) )
          {
            v69 = 0;
            v70 = 0;
            v71 = *(_DWORD *)&obj->numBones;
            if ( v71 )
            {
              while ( 1 )
              {
                v72 = *(_QWORD *)&obj->duplicateParts + 80i64 * v70;
                v69 += *(_DWORD *)(v72 + 16);
                if ( v69 > v66 )
                  break;
                if ( ++v70 >= v71 )
                  goto LABEL_93;
              }
              v73 = 0;
              if ( *(_DWORD *)(v72 + 48) )
              {
                do
                {
                  pAnimset = NULL;
                  if ( BG_Animset_GetStateInfoByName(v68, *(const scr_string_t *)(*(_QWORD *)(v72 + 40) + 4i64 * v73), (AnimsetState **)&pAnimset, (int *)&outState) )
                  {
                    __asm { vmovaps xmm3, xmm6; blendTime }
                    BG_AnimationState_ClearGraftTrees(v62, v68, (int)outState, *(float *)&_XMM3, curveID);
                  }
                  ++v73;
                }
                while ( v73 < *(_DWORD *)(v72 + 48) );
                _RSI = v130;
              }
            }
          }
        }
      }
      else
      {
        v62 = obj;
      }
LABEL_93:
      v75 = outName;
      Notify = BG_AnimationState_GetNotify((const Animset *)outName, _RSI);
      v77 = (int)ppOutAnim;
      if ( (_DWORD)ppOutAnim != v54 || v111 || v117 != v118 )
        BG_AnimationState_UpdateAlwaysOn(v62, (const Animset *)v75, (_RSI->animInfo.animData >> 1) & 0x3FF, _RSI->eType == ET_AGENT_CORPSE, &pModelNameMap);
      if ( v77 == v54 && !v111 )
      {
        v78 = curveID;
      }
      else
      {
        v78 = curveID;
        __asm { vmovaps xmm3, xmm6; blendTime }
        BG_AnimationState_GraftTrees(v62, (const Animset *)v75, (_RSI->animInfo.animData >> 1) & 0x3FF, *(float *)&_XMM3, curveID, Notify, notifyType, &pModelNameMap);
      }
      v80 = (_RSI->animInfo.animData >> 11) & 0x7F;
      v81 = (_RSI->animInfo.animData >> 1) & 0x3FF;
      if ( v80 >= BG_Animset_GetNumEntriesForStateIndex((const Animset *)v75, v81) )
      {
        LODWORD(pOutAnimCurveID) = BG_Animset_GetNumEntriesForStateIndex((const Animset *)v75, v81);
        LODWORD(pOutAnimSubtreeID) = v80;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 497, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex ) )", "entryIndex doesn't index BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex )\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
          __debugbreak();
      }
      obj = NULL;
      if ( BG_Animset_GetStateInfoByIndex((const Animset *)v75, v81, (AnimsetState **)&obj) )
      {
        v82 = 0;
        v83 = 0;
        v84 = *(_DWORD *)&obj->numBones;
        if ( v84 )
        {
          while ( 1 )
          {
            v85 = *(_QWORD *)&obj->duplicateParts + 80i64 * v83;
            v82 += *(_DWORD *)(v85 + 16);
            if ( v82 > v80 )
              break;
            if ( ++v83 >= v84 )
              goto LABEL_115;
          }
          v86 = 0;
          if ( *(_DWORD *)(v85 + 48) )
          {
            v87 = notifyType;
            do
            {
              outName = NULL;
              if ( BG_Animset_GetStateInfoByName((const Animset *)v75, *(const scr_string_t *)(*(_QWORD *)(v85 + 40) + 4i64 * v86), (AnimsetState **)&outName, (int *)&outState) )
              {
                __asm { vmovaps xmm3, xmm6; blendTime }
                BG_AnimationState_GraftTrees(v62, (const Animset *)v75, (int)outState, *(float *)&_XMM3, v78, Notify, v87, &pModelNameMap);
              }
              ++v86;
            }
            while ( v86 < *(_DWORD *)(v85 + 48) );
            _RSI = v130;
          }
        }
      }
LABEL_115:
      v89 = v113;
      if ( !v113 && !XAnimIsCustomNodeType(v131->entries[(unsigned __int16)pOutAnimIndex].nodeType) )
        goto LABEL_120;
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SetCompleteGoalWeight");
      v109 = v78;
      v90 = bRestart;
      __asm
      {
        vmovss  dword ptr [rsp+3190h+pOutAnimCurveID], xmm10
        vmovss  dword ptr [rsp+3190h+pOutAnimSubtreeID], xmm6
        vmovss  dword ptr [rsp+3190h+fmt], xmm9
      }
      v91 = (unsigned __int16)pOutAnimIndex;
      XAnimSetCompleteGoalWeight(v62, pOutGraftNode, v112, (unsigned __int16)pOutAnimIndex, fmta, pOutAnimSubtreeIDa, pOutAnimCurveIDa, Notify, notifyType, bRestart, v109, &pModelNameMap);
      Sys_ProfEndNamedEvent();
      if ( !v89 )
        goto LABEL_120;
      __asm { vcomiss xmm7, xmm8 }
      if ( v90 )
      {
        __asm { vmovss  dword ptr [rsp+3190h+fmt], xmm7 }
        v92 = v91;
        v93 = tree;
        XAnimSetTime(tree, pOutGraftNode, v112, v92, fmtb);
      }
      else
      {
LABEL_120:
        v93 = tree;
      }
      v94 = charAnimStatea;
      if ( _RSI->eType != ET_ACTOR )
      {
        __asm { vmovss  dword ptr [rsp+3190h+fmt], xmm6 }
        BG_AnimationState_ApplyBlends(_RSI, v93, charAnimStatea, v62, fmtc);
      }
      if ( v132 )
        *v132 = 0;
      v94->animClass = (_RSI->animInfo.animData >> 18) & 0x3F;
      v94->animState = (_RSI->animInfo.animData >> 1) & 0x3FF;
      v94->animEntry = (_RSI->animInfo.animData >> 11) & 0x7F;
      v94->animTime = _RSI->animInfo.animTime;
    }
  }
LABEL_126:
  Sys_ProfEndNamedEvent();
  _R11 = &v140;
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
BG_AnimationState_ClearGraftTrees
==============
*/

void __fastcall BG_AnimationState_ClearGraftTrees(DObj *obj, const Animset *pAnimset, int stateIndex, double blendTime, XAnimCurveID curveID)
{
  unsigned int v10; 
  AnimsetState *v11; 
  XAnimCurveID v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  XAnimSubTreeID v16; 
  unsigned int v17; 
  float fmt; 
  AnimsetState *outState; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 393, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v10 = 0;
  outState = NULL;
  if ( BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState) )
  {
    v11 = outState;
    if ( outState->numBlendtreeAliases )
    {
      v12 = curveID;
      do
      {
        v13 = (__int64)&v11->blendtreeAliases[v10];
        if ( *(_DWORD *)(v13 + 4) )
        {
          v14 = *(_QWORD *)(v13 + 40);
          v15 = *(_QWORD *)(v13 + 32);
          __asm { vmovss  dword ptr [rsp+48h+fmt], xmm6 }
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
          XAnimClearGoalWeight(obj->tree, v15, v16, v17, fmt, v12);
          v11 = outState;
        }
        ++v10;
      }
      while ( v10 < v11->numBlendtreeAliases );
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
BG_AnimationState_DoControllers
==============
*/
void BG_AnimationState_DoControllers(const CEntPlayerInfo *info, const DObj *obj, DObjPartBits *partBits)
{
  if ( info->animCtrl == 1 )
  {
    BG_Pose_DoPlayerControllers(info, obj, partBits);
  }
  else if ( info->animCtrl == 2 )
  {
    BG_Pose_DoDogControllers(info, obj, partBits);
  }
}

/*
==============
BG_AnimationState_GetAimSet
==============
*/
AnimsetState *BG_AnimationState_GetAimSet(const scr_string_t animsetName, const entityState_t *es)
{
  unsigned int animData; 
  int v5; 
  int v6; 
  const Animset *v7; 
  scr_string_t aimsetTarget; 
  unsigned int numAnimAliases; 
  int v11; 
  AnimsetAlias *animAliases; 
  int numAnims; 
  AnimsetState *outState; 
  AnimsetState *v15; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1052, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  animData = es->animInfo.animData;
  v5 = (animData >> 11) & 0x7F;
  v6 = (animData >> 1) & 0x3FF;
  v7 = Animset_Find(animsetName);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 240, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  outState = NULL;
  BG_Animset_GetStateInfoByIndex(v7, v6, &outState);
  aimsetTarget = outState->aimsetTarget;
  if ( !aimsetTarget )
  {
    numAnimAliases = outState->numAnimAliases;
    v11 = 0;
    if ( !numAnimAliases )
      return 0i64;
    animAliases = outState->animAliases;
    while ( 1 )
    {
      numAnims = animAliases[v11].numAnims;
      if ( v5 < numAnims )
        break;
      v5 -= numAnims;
      if ( ++v11 >= numAnimAliases )
        return 0i64;
    }
    aimsetTarget = animAliases[v11].anims[v5].aimsetName;
    if ( !aimsetTarget )
      return 0i64;
  }
  v15 = NULL;
  if ( BG_Animset_GetStateInfoByName(v7, aimsetTarget, &v15, NULL) )
    return v15;
  else
    return 0i64;
}

/*
==============
BG_AnimationState_GetAnimIndex
==============
*/
scr_anim_t BG_AnimationState_GetAnimIndex(const Animset *pAnimset, const entityState_t *es)
{
  unsigned int animData; 
  int v5; 
  scr_string_t StateNameFromIndex; 

  BG_CheckThread();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 132, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !pAnimset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 133, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1052, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  animData = es->animInfo.animData;
  v5 = (animData >> 11) & 0x7F;
  StateNameFromIndex = BG_Animset_GetStateNameFromIndex(pAnimset, (animData >> 1) & 0x3FF);
  return BG_Animset_GetAnimFromIndex(pAnimset, StateNameFromIndex, v5);
}

/*
==============
BG_AnimationState_GetAnimIndex
==============
*/
scr_anim_t BG_AnimationState_GetAnimIndex(const scr_string_t animsetName, const entityState_t *es)
{
  const Animset *v3; 
  unsigned int animData; 
  int v5; 
  scr_string_t StateNameFromIndex; 

  v3 = Animset_Find(animsetName);
  BG_CheckThread();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 132, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 133, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1052, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  animData = es->animInfo.animData;
  v5 = (animData >> 11) & 0x7F;
  StateNameFromIndex = BG_Animset_GetStateNameFromIndex(v3, (animData >> 1) & 0x3FF);
  return BG_Animset_GetAnimFromIndex(v3, StateNameFromIndex, v5);
}

/*
==============
BG_AnimationState_GetAnims
==============
*/
XAnim_s *BG_AnimationState_GetAnims(const entityState_t *es)
{
  BgStatic *ActiveStatics; 
  __int64 v3; 

  BG_CheckThread();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1131, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  v3 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1135, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  if ( (es->animInfo.animData & 1) != 0 )
    return *(XAnim_s **)(v3 + 8i64 * ((es->animInfo.animData >> 18) & 0x3F) + 17992);
  else
    return *(XAnim_s **)(v3 + 17712);
}

/*
==============
BG_AnimationState_GetAnims
==============
*/
XAnim_s *BG_AnimationState_GetAnims(const scr_string_t animsetName)
{
  BgStatic *ActiveStatics; 
  __int64 v3; 
  const char *v4; 
  __int64 v5; 
  __int64 v7; 
  unsigned int outIndex; 

  BG_CheckThread();
  ActiveStatics = BgStatic::GetActiveStatics();
  v3 = (__int64)ActiveStatics->GetAnimStatics(ActiveStatics);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1107, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v4 = SL_ConvertToString(animsetName);
  if ( !NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_ANIMSET, v4, &outIndex) )
    return 0i64;
  v5 = outIndex;
  if ( outIndex >= 0x40 )
  {
    LODWORD(v7) = outIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1112, ASSERT_TYPE_ASSERT, "(unsigned)( animsetIndex ) < (unsigned)( (1 << 6) )", "animsetIndex doesn't index MAX_ANIM_CLASS_COUNT\n\t%i not in [0, %i)", v7, 64) )
      __debugbreak();
    v5 = outIndex;
  }
  return *(XAnim_s **)(v3 + 8 * v5 + 17992);
}

/*
==============
BG_AnimationState_GetAnimsetName
==============
*/
scr_string_t BG_AnimationState_GetAnimsetName(const entityState_t *es)
{
  char *outName; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 109, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_ANIMSET, (es->animInfo.animData >> 18) & 0x3F, (const char **)&outName) )
    return SL_FindString(outName);
  else
    return 0;
}

/*
==============
BG_AnimationState_GetAnimsetNameByIndex
==============
*/
scr_string_t BG_AnimationState_GetAnimsetNameByIndex(const int animsetIndex)
{
  char *outName; 

  if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_ANIMSET, animsetIndex, (const char **)&outName) )
    return SL_FindString(outName);
  else
    return 0;
}

/*
==============
BG_AnimationState_GetClassByIndex
==============
*/
const AnimationClass *BG_AnimationState_GetClassByIndex(const int animClassIndex)
{
  char *outName; 

  if ( !NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_ANIMCLASS, animClassIndex, (const char **)&outName) )
    return 0i64;
  return DB_FindXAssetHeader(ASSET_TYPE_ANIMCLASS, outName, 1).animClass;
}

/*
==============
BG_AnimationState_GetController
==============
*/
AnimationController BG_AnimationState_GetController(const entityState_t *es)
{
  scr_string_t AnimsetName; 

  AnimsetName = BG_AnimationState_GetAnimsetName(es);
  return BG_Animset_GetAnimController(AnimsetName);
}

/*
==============
BG_AnimationState_GetControllerByIndex
==============
*/
AnimationController BG_AnimationState_GetControllerByIndex(int animsetIndex)
{
  scr_string_t String; 
  char *outName; 

  if ( !NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_ANIMSET, animsetIndex, (const char **)&outName) )
    return BG_Animset_GetAnimController((const scr_string_t)0);
  String = SL_FindString(outName);
  return BG_Animset_GetAnimController(String);
}

/*
==============
BG_AnimationState_GetNotify
==============
*/
__int64 BG_AnimationState_GetNotify(const Animset *pAnimset, const entityState_t *es)
{
  int v4; 
  AnimsetState *v5; 
  AnimsetState *outState; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 185, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v4 = (es->animInfo.animData >> 1) & 0x3FF;
  outState = NULL;
  BG_Animset_GetStateInfoByIndex(pAnimset, v4, &outState);
  v5 = outState;
  if ( !outState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 191, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
      __debugbreak();
    v5 = outState;
  }
  return (unsigned int)v5->notify;
}

/*
==============
BG_AnimationState_GetNotify
==============
*/
scr_string_t BG_AnimationState_GetNotify(const scr_string_t animsetName, const entityState_t *es)
{
  const Animset *v4; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 197, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v4 = Animset_Find(animsetName);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 199, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
    __debugbreak();
  return BG_AnimationState_GetNotify(v4, es);
}

/*
==============
BG_AnimationState_GetState
==============
*/
void BG_AnimationState_GetState(const entityState_t *es, int *animState, int *animEntry)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1052, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !animState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1053, ASSERT_TYPE_ASSERT, "(animState)", (const char *)&queryFormat, "animState") )
    __debugbreak();
  if ( !animEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1054, ASSERT_TYPE_ASSERT, "(animEntry)", (const char *)&queryFormat, "animEntry") )
    __debugbreak();
  *animState = (es->animInfo.animData >> 1) & 0x3FF;
  *animEntry = (es->animInfo.animData >> 11) & 0x7F;
}

/*
==============
BG_AnimationState_GetStateName
==============
*/
scr_string_t BG_AnimationState_GetStateName(const entityState_t *es, const int stateIndex)
{
  scr_string_t AnimsetName; 

  AnimsetName = BG_AnimationState_GetAnimsetName(es);
  return BG_Animset_GetStateNameFromIndex(AnimsetName, stateIndex);
}

/*
==============
BG_AnimationState_GraftTrees
==============
*/

void __fastcall BG_AnimationState_GraftTrees(DObj *obj, const Animset *pAnimset, int stateIndex, double blendTime, XAnimCurveID curveID, const scr_string_t notifyName, unsigned int notifyType, XModelNameMap *pModelNameMap)
{
  unsigned int v15; 
  AnimsetState *v16; 
  XModelNameMap *cachedModelNameMap; 
  unsigned int v18; 
  scr_string_t v19; 
  XAnimCurveID v20; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  char v25; 
  scr_string_t v26; 
  unsigned int v27; 
  unsigned int v28; 
  XAnimSubTreeID v29; 
  float fmt; 
  float goalTime; 
  float v35; 
  char v37; 
  void *retaddr; 
  AnimsetState *outState; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm7, xmm3
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Animstate_GraftTrees");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 425, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  outState = NULL;
  if ( BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState) )
  {
    v15 = 0;
    v16 = outState;
    if ( outState->numBlendtreeAliases )
    {
      cachedModelNameMap = pModelNameMap;
      v18 = notifyType;
      v19 = notifyName;
      v20 = curveID;
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      do
      {
        v22 = (__int64)&v16->blendtreeAliases[v15];
        if ( *(_DWORD *)(v22 + 4) )
        {
          LOWORD(v23) = *(_WORD *)(v22 + 32);
          v24 = *(_QWORD *)(v22 + 40);
          v25 = *(_BYTE *)(v22 + 48);
          v26 = 0;
          if ( v25 )
            v26 = v19;
          v27 = 0;
          if ( v25 )
            v27 = v18;
          __asm
          {
            vmovss  [rsp+0A8h+var_78], xmm6
            vmovss  [rsp+0A8h+goalTime], xmm7
            vmovss  dword ptr [rsp+0A8h+fmt], xmm6
          }
          if ( v24 )
          {
            v23 = (unsigned __int16)v23;
            v28 = 1;
            v29 = *(_WORD *)(v24 + 60);
          }
          else
          {
            v28 = (unsigned __int16)v23;
            v29 = XANIM_SUBTREE_DEFAULT;
            v23 = 0;
          }
          XAnimSetCompleteGoalWeight(obj, v23, v29, v28, fmt, goalTime, v35, v26, v27, 1, v20, cachedModelNameMap);
          v16 = outState;
        }
        ++v15;
      }
      while ( v15 < v16->numBlendtreeAliases );
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v37;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
  }
}

/*
==============
BG_AnimationState_LerpControllers
==============
*/
__int64 BG_AnimationState_LerpControllers(const entityState_t *es, characterInfo_t *characterInfo, int frametime)
{
  __int64 v6; 
  clientControllers_t *p_control; 
  __int64 result; 
  clientControllers_t control; 

  if ( !BG_AnimationState_UpdateControllers(es, characterInfo, &control) )
    return 0i64;
  __asm
  {
    vmovaps [rsp+0E8h+var_28], xmm6
    vmovaps [rsp+0E8h+var_38], xmm7
  }
  v6 = 4i64;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, ebx
    vmulss  xmm6, xmm7, cs:__real@3eb851ec
  }
  p_control = &control;
  do
  {
    __asm { vmovaps xmm1, xmm6; maxAngleChange }
    BG_LerpAngles(p_control->angles, *(float *)&_XMM1, (vec3_t *)((char *)&p_control[23].tag_origin_angles.v[1] + (char *)characterInfo - (char *)&control));
    p_control = (clientControllers_t *)((char *)p_control + 12);
    --v6;
  }
  while ( v6 );
  __asm { vmovaps xmm1, xmm6; maxAngleChange }
  BG_LerpAngles(&control.tag_origin_angles, *(float *)&_XMM1, &characterInfo->control.tag_origin_angles);
  __asm { vmulss  xmm1, xmm7, cs:__real@3dcccccd; maxOffsetChange }
  BG_LerpOffset(&control.tag_origin_offset, *(float *)&_XMM1, &characterInfo->control.tag_origin_offset);
  __asm { vmovaps xmm7, [rsp+0E8h+var_38] }
  result = 1i64;
  __asm { vmovaps xmm6, [rsp+0E8h+var_28] }
  return result;
}

/*
==============
BG_AnimationState_MinimalUpdate
==============
*/
void BG_AnimationState_MinimalUpdate(const entityState_t *es, characterAnimState_t *charAnimState, XAnimTree *pTree, int *pTreeDirty)
{
  if ( pTreeDirty )
    *pTreeDirty = 0;
  charAnimState->animClass = (es->animInfo.animData >> 18) & 0x3F;
  charAnimState->animState = (es->animInfo.animData >> 1) & 0x3FF;
  charAnimState->animEntry = (es->animInfo.animData >> 11) & 0x7F;
  charAnimState->animTime = es->animInfo.animTime;
}

/*
==============
BG_AnimationState_Reset
==============
*/
void BG_AnimationState_Reset(const entityState_t *es, characterInfo_t *characterInfo)
{
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1039, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1040, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !characterInfo->usingAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1041, ASSERT_TYPE_ASSERT, "(characterInfo->usingAnimState)", (const char *)&queryFormat, "characterInfo->usingAnimState") )
    __debugbreak();
  BG_AnimationState_ApplyState(es, (characterAnimState_t *)&characterInfo->14780, &characterInfo->animTreeDirty, 13);
}

/*
==============
BG_AnimationState_SetPlayerInfo
==============
*/
void BG_AnimationState_SetPlayerInfo(AnimationController animCtrl, const DObj *obj, clientControllers_t *control, CEntPlayerInfo *info)
{
  unsigned __int8 *tag; 
  scr_string_t **v9; 
  unsigned __int8 *v10; 
  __int64 v11; 
  int modelIndex; 

  if ( !control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1247, ASSERT_TYPE_ASSERT, "(control)", (const char *)&queryFormat, "control") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1248, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  info->animCtrl = animCtrl;
  info->control = control;
  if ( animCtrl != (unsigned __int8)animCtrl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1253, ASSERT_TYPE_ASSERT, "(animCtrl == static_cast<int>( info->animCtrl ))", (const char *)&queryFormat, "animCtrl == static_cast<int>( info->animCtrl )") )
    __debugbreak();
  tag = info->tag;
  if ( info->animCtrl == 1 )
  {
    v9 = controller_names;
    v10 = tag;
    v11 = 4i64;
    do
    {
      *tag = -2;
      DObjGetBoneIndexInternal_17(obj, **v9, v10++, &modelIndex);
      ++tag;
      ++v9;
      --v11;
    }
    while ( v11 );
  }
  else
  {
    *tag = -2;
    *(_WORD *)&info->tag[1] = -258;
    info->tag[3] = -2;
  }
}

/*
==============
BG_AnimationState_SetState
==============
*/
void BG_AnimationState_SetState(const int animState, const int animEntry, entityState_t *es)
{
  scr_string_t AnimsetName; 
  __int64 v7; 
  __int64 v8; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1078, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( (unsigned int)animState >= 0x400 )
  {
    LODWORD(v7) = animState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1079, ASSERT_TYPE_ASSERT, "(unsigned)( animState ) < (unsigned)( (1 << 10) )", "animState doesn't index MAX_ANIM_STATE_COUNT\n\t%i not in [0, %i)", v7, 1024) )
      __debugbreak();
  }
  if ( (unsigned int)animEntry >= 0x80 )
  {
    LODWORD(v8) = 128;
    LODWORD(v7) = animEntry;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1080, ASSERT_TYPE_ASSERT, "(unsigned)( animEntry ) < (unsigned)( (1 << 7) )", "animEntry doesn't index MAX_ANIM_ENTRY_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  AnimsetName = BG_AnimationState_GetAnimsetName(es);
  if ( animState >= (unsigned int)BG_Animset_GetNumStates(AnimsetName) )
  {
    LODWORD(v8) = BG_Animset_GetNumStates(AnimsetName);
    LODWORD(v7) = animState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1084, ASSERT_TYPE_ASSERT, "(unsigned)( animState ) < (unsigned)( BG_Animset_GetNumStates( animsetName ) )", "animState doesn't index BG_Animset_GetNumStates( animsetName )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( animEntry >= (unsigned int)BG_Animset_GetNumEntriesForStateIndex(AnimsetName, animState) )
  {
    LODWORD(v8) = BG_Animset_GetNumEntriesForStateIndex(AnimsetName, animState);
    LODWORD(v7) = animEntry;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1085, ASSERT_TYPE_ASSERT, "(unsigned)( animEntry ) < (unsigned)( BG_Animset_GetNumEntriesForStateIndex( animsetName, animState ) )", "animEntry doesn't index BG_Animset_GetNumEntriesForStateIndex( animsetName, animState )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  es->animInfo.animData &= 0xFFFC0001;
  es->animInfo.animData |= 2 * (animState & 0x3FF | ((animEntry & 0x7F) << 10));
}

/*
==============
BG_AnimationState_Update
==============
*/
void BG_AnimationState_Update(const entityState_t *es, characterAnimState_t *charAnimState, XAnimTree *pTree, int *pTreeDirty, const int flags)
{
  unsigned int animData; 
  scr_string_t AnimsetName; 
  AnimsetState *AimSet; 
  unsigned int numAnimAliases; 

  if ( pTree )
  {
    if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 978, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( !charAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 979, ASSERT_TYPE_ASSERT, "(charAnimState)", (const char *)&queryFormat, "charAnimState") )
      __debugbreak();
    if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 948, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( !charAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 949, ASSERT_TYPE_ASSERT, "(charState)", (const char *)&queryFormat, "charState") )
      __debugbreak();
    if ( (flags & 2) != 0 || (animData = es->animInfo.animData, ((animData >> 18) & 0x3F) != charAnimState->animClass) || ((animData >> 1) & 0x3FF) != charAnimState->animState || ((animData >> 11) & 0x7F) != charAnimState->animEntry || es->animInfo.animTime != charAnimState->animTime || BG_AnimationState_GetAnimsetName(es) && !pTree->children )
      BG_AnimationState_ApplyState(es, charAnimState, pTreeDirty, flags);
    if ( (unsigned __int16)(es->eType - 18) > 1u )
    {
      AnimsetName = BG_AnimationState_GetAnimsetName(es);
      AimSet = BG_AnimationState_GetAimSet(AnimsetName, es);
      if ( AimSet )
      {
        numAnimAliases = AimSet->numAnimAliases;
        if ( numAnimAliases == 8 )
        {
          BG_AnimationState_UpdateAimSet_9Point(AimSet, es, pTree, charAnimState);
        }
        else if ( numAnimAliases == 5 )
        {
          BG_AnimationState_UpdateAimSet_5Point(AimSet, es, pTree, charAnimState);
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1005, ASSERT_TYPE_ASSERT, "(animAimSet->numAnimAliases == 5 || animAimSet->numAnimAliases == 8)", (const char *)&queryFormat, "animAimSet->numAnimAliases == AIMSET_ENTRY_COUNT_5POINT || animAimSet->numAnimAliases == AIMSET_ENTRY_COUNT_9POINT") )
        {
          __debugbreak();
        }
      }
    }
  }
}

/*
==============
BG_AnimationState_Update
==============
*/
void BG_AnimationState_Update(const entityState_t *es, characterInfo_t *characterInfo, const int flags)
{
  BG_AnimationState_Update(es, (characterAnimState_t *)&characterInfo->14780, characterInfo->pXAnimTree, &characterInfo->animTreeDirty, flags);
}

/*
==============
BG_AnimationState_UpdateAimAnim
==============
*/

void __fastcall BG_AnimationState_UpdateAimAnim(DObj *obj, XAnimTree *pXAnimTree, unsigned int animIndex, double time, float weight, float lerpRate)
{
  char v20; 
  char v21; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  char v48; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm11, xmm3
  }
  *(double *)&_XMM0 = XAnimGetTime(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  __asm { vmovaps xmm12, xmm0 }
  *(double *)&_XMM0 = XAnimGetWeight(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  __asm
  {
    vmovss  xmm10, [rsp+0D8h+weight]
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm10, xmm8
    vmovaps xmm9, xmm0
  }
  if ( !(v20 | v21) )
    goto LABEL_4;
  __asm { vcomiss xmm0, xmm8 }
  if ( v20 | v21 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vmovss  xmm6, [rsp+0D8h+lerpRate]
      vsubss  xmm7, xmm1, xmm6
    }
  }
  else
  {
LABEL_4:
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  xmm6, [rsp+0D8h+lerpRate]
      vsubss  xmm7, xmm0, xmm6
      vmulss  xmm1, xmm7, xmm12
      vmulss  xmm0, xmm11, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmovss  [rsp+0D8h+var_B8], xmm2
    }
    XAnimSetTime(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex, v44);
  }
  __asm
  {
    vmulss  xmm1, xmm7, xmm9
    vmulss  xmm0, xmm10, xmm6
    vmovss  [rsp+0D8h+var_A8], xmm8
    vaddss  xmm2, xmm1, xmm0
    vmovss  [rsp+0D8h+var_B0], xmm8
    vmovss  [rsp+0D8h+var_B8], xmm2
  }
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, v45, v46, v47, (scr_string_t)0, 0, 0, LINEAR, NULL);
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
BG_AnimationState_UpdateAimAnim_5Point
==============
*/
void BG_AnimationState_UpdateAimAnim_5Point(DObj *obj, XAnimTree *pXAnimTree, unsigned int animIndex, float time, float weight, float lerpRate)
{
  float v16; 
  float v17; 
  float v18; 

  *(double *)&_XMM0 = XAnimGetWeight(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovss  xmm2, [rsp+68h+lerpRate]
    vsubss  xmm1, xmm1, xmm2
    vmulss  xmm2, xmm2, [rsp+68h+weight]
    vmulss  xmm3, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+68h+var_38], xmm0
    vaddss  xmm1, xmm3, xmm2
    vmovss  [rsp+68h+var_40], xmm0
    vmovss  [rsp+68h+var_48], xmm1
  }
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, v16, v17, v18, (scr_string_t)0, 0, 0, LINEAR, NULL);
}

/*
==============
BG_AnimationState_UpdateAimSet_5Point
==============
*/
void BG_AnimationState_UpdateAimSet_5Point(const AnimsetState *animAimSet, const entityState_t *es, XAnimTree *pAnimTree, characterAnimState_t *charAnimState)
{
  const BgStatic *ActiveStatics; 
  DObj *DObj; 
  char v17; 
  char v18; 
  char v24; 
  char v25; 
  scr_string_t AnimsetName; 
  int v29; 
  AnimsetAlias *animAliases; 
  scr_string_t name; 
  unsigned int numAnimAliases; 
  int v35; 
  AnimsetAlias *v41; 
  float fmt; 
  float fmta; 
  float lerpRate; 
  float lerpRatea; 
  float v48; 
  AnimsetState *outState; 

  BG_CheckThread();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 764, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !charAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 765, ASSERT_TYPE_ASSERT, "(charAnimState)", (const char *)&queryFormat, "charAnimState") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  DObj = BG_GetDObj(ActiveStatics, es->number);
  if ( !DObj )
    return;
  __asm
  {
    vmovaps [rsp+0D8h+var_28], xmm6
    vmovaps [rsp+0D8h+var_38], xmm7
    vmovaps [rsp+0D8h+var_48], xmm8
  }
  if ( animAimSet->numAnimAliases != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 773, ASSERT_TYPE_ASSERT, "(animAimSet->numAnimAliases == 5)", (const char *)&queryFormat, "animAimSet->numAnimAliases == AIMSET_ENTRY_COUNT_5POINT") )
    __debugbreak();
  if ( es->eType == ET_AGENT_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 776, ASSERT_TYPE_ASSERT, "(es->eType != ET_AGENT_CORPSE)", (const char *)&queryFormat, "es->eType != ET_AGENT_CORPSE") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0D8h+var_68], xmm10
    vmovaps [rsp+0D8h+var_78], xmm11
  }
  *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(es->lerp.u.player.waistPitchPacked);
  __asm
  {
    vmovss  xmm7, cs:__real@bcb60b61
    vmovss  xmm8, cs:__real@3cb60b61
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( v17 )
  {
    __asm { vmulss  xmm11, xmm0, xmm7 }
LABEL_16:
    __asm { vxorps  xmm10, xmm10, xmm10 }
    goto LABEL_17;
  }
  __asm { vxorps  xmm11, xmm11, xmm11 }
  if ( v17 | v18 )
    goto LABEL_16;
  __asm { vmulss  xmm10, xmm0, xmm8 }
LABEL_17:
  __asm { vmovaps [rsp+0D8h+var_58], xmm9 }
  *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(es->lerp.u.player.torsoPitchPacked);
  __asm { vcomiss xmm0, xmm6 }
  if ( v24 )
  {
    __asm { vmulss  xmm9, xmm0, xmm7 }
LABEL_19:
    __asm { vxorps  xmm8, xmm8, xmm8 }
    goto LABEL_20;
  }
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( v24 | v25 )
    goto LABEL_19;
  __asm { vmulss  xmm8, xmm0, xmm8 }
LABEL_20:
  outState = NULL;
  AnimsetName = BG_AnimationState_GetAnimsetName(es);
  if ( BG_Animset_GetStateInfoByName(AnimsetName, (const scr_string_t)scr_const.knobs, &outState, NULL) )
  {
    v29 = 0;
    if ( outState->numAnimAliases )
    {
      __asm { vmovss  xmm7, cs:__real@3e4ccccd }
      while ( 1 )
      {
        animAliases = outState->animAliases;
        name = animAliases[v29].name;
        if ( name == scr_const.aim_2 )
          break;
        if ( name == scr_const.aim_8 )
        {
          __asm
          {
            vmovss  [rsp+0D8h+lerpRate], xmm7
            vmovss  dword ptr [rsp+0D8h+fmt], xmm11
          }
          goto LABEL_35;
        }
        if ( name == scr_const.aim_4 )
        {
          __asm
          {
            vmovss  [rsp+0D8h+lerpRate], xmm7
            vmovss  dword ptr [rsp+0D8h+fmt], xmm8
          }
          goto LABEL_35;
        }
        if ( name == scr_const.aim_6 )
        {
          __asm
          {
            vmovss  [rsp+0D8h+lerpRate], xmm7
            vmovss  dword ptr [rsp+0D8h+fmt], xmm9
          }
          goto LABEL_35;
        }
LABEL_36:
        if ( ++v29 >= outState->numAnimAliases )
          goto LABEL_37;
      }
      __asm
      {
        vmovss  [rsp+0D8h+lerpRate], xmm7
        vmovss  dword ptr [rsp+0D8h+fmt], xmm10
      }
LABEL_35:
      __asm { vmovaps xmm3, xmm6; time }
      BG_AnimationState_UpdateAimAnim_5Point(DObj, pAnimTree, animAliases[v29].anims->anim.index, *(float *)&_XMM3, fmt, lerpRate);
      goto LABEL_36;
    }
  }
LABEL_37:
  numAnimAliases = animAimSet->numAnimAliases;
  v35 = 0;
  __asm
  {
    vmovaps xmm11, [rsp+0D8h+var_78]
    vmovaps xmm10, [rsp+0D8h+var_68]
    vmovaps xmm9, [rsp+0D8h+var_58]
    vmovaps xmm8, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_38]
  }
  if ( numAnimAliases )
  {
    v41 = animAimSet->animAliases;
    while ( v41[v35].name != scr_const.aim_5 )
    {
      if ( ++v35 >= numAnimAliases )
        goto LABEL_43;
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+0D8h+var_A8], xmm6
      vmovss  [rsp+0D8h+lerpRate], xmm6
      vmovss  dword ptr [rsp+0D8h+fmt], xmm0
    }
    XAnimSetCompleteGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, v41[v35].anims->anim.index, fmta, lerpRatea, v48, (scr_string_t)0, 0, 0, LINEAR, NULL);
  }
LABEL_43:
  __asm { vmovaps xmm6, [rsp+0D8h+var_28] }
}

/*
==============
BG_AnimationState_UpdateAimSet_9Point
==============
*/
void BG_AnimationState_UpdateAimSet_9Point(const AnimsetState *animAimSet, const entityState_t *es, XAnimTree *pAnimTree, characterAnimState_t *charAnimState)
{
  const BgStatic *ActiveStatics; 
  DObj *DObj; 
  bool v16; 
  unsigned __int16 torsoPitchPacked; 
  char v20; 
  __int64 v30; 
  AnimsetAlias *v34; 
  scr_string_t name; 
  const char *v52; 
  const char *v53; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float lerpRate; 
  float lerpRatea; 
  float lerpRateb; 
  float lerpRatec; 
  float lerpRated; 
  float lerpRatee; 
  float lerpRatef; 
  float lerpRateg; 
  aimAnimValues_t values; 

  BG_CheckThread();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 873, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !charAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 874, ASSERT_TYPE_ASSERT, "(charAnimState)", (const char *)&queryFormat, "charAnimState") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  DObj = BG_GetDObj(ActiveStatics, es->number);
  if ( DObj && charAnimState->animAimRoot )
  {
    v16 = animAimSet->numAnimAliases == 8;
    __asm
    {
      vmovaps [rsp+108h+var_48], xmm6
      vmovaps [rsp+108h+var_68], xmm10
      vmovaps [rsp+108h+var_78], xmm11
    }
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 885, ASSERT_TYPE_ASSERT, "(animAimSet->numAnimAliases == 8)", (const char *)&queryFormat, "animAimSet->numAnimAliases == AIMSET_ENTRY_COUNT_9POINT") )
      __debugbreak();
    if ( es->eType == ET_AGENT_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 888, ASSERT_TYPE_ASSERT, "(es->eType != ET_AGENT_CORPSE)", (const char *)&queryFormat, "es->eType != ET_AGENT_CORPSE") )
      __debugbreak();
    torsoPitchPacked = es->lerp.u.player.torsoPitchPacked;
    __asm { vmovaps [rsp+108h+var_58], xmm7 }
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(torsoPitchPacked);
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm0, xmm6
    }
    if ( v20 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@bc6a0ea1
        vminss  xmm11, xmm0, xmm7
        vxorps  xmm10, xmm10, xmm10
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3c6a0ea1
        vminss  xmm10, xmm0, xmm7
        vxorps  xmm11, xmm11, xmm11
      }
    }
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(es->lerp.u.player.waistPitchPacked);
    __asm { vcomiss xmm0, xmm6 }
    if ( v20 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@bc6a0ea1
        vminss  xmm6, xmm0, xmm7
        vxorps  xmm1, xmm1, xmm1
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3c6a0ea1
        vminss  xmm1, xmm0, xmm7; fAimFactor2
      }
    }
    __asm
    {
      vmovaps xmm3, xmm11; fAimFactor6
      vmovaps xmm2, xmm10; fAimFactor4
      vmovss  dword ptr [rsp+108h+fmt], xmm6
    }
    BG_CalculateAimAnimValues(&values, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
    __asm { vmovaps xmm11, [rsp+108h+var_78] }
    v30 = 0i64;
    __asm
    {
      vmovaps xmm10, [rsp+108h+var_68]
      vmovaps xmm7, [rsp+108h+var_58]
    }
    if ( animAimSet->numAnimAliases )
    {
      __asm { vmovss  xmm6, cs:__real@3e4ccccd }
      do
      {
        v34 = &animAimSet->animAliases[v30];
        name = v34->name;
        if ( v34->name == scr_const.aim_1 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+values.fStrength1]
            vmovss  xmm3, [rsp+108h+values.fTime1]; time
            vmovss  [rsp+108h+lerpRate], xmm6
            vmovss  dword ptr [rsp+108h+fmt], xmm0
          }
          BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v34->anims->anim.index, *(double *)&_XMM3, fmta, lerpRate);
        }
        else if ( name == scr_const.aim_2 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+values.fStrength2]
            vmovss  xmm3, [rsp+108h+values.fTime2]; time
            vmovss  [rsp+108h+lerpRate], xmm6
            vmovss  dword ptr [rsp+108h+fmt], xmm0
          }
          BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v34->anims->anim.index, *(double *)&_XMM3, fmtb, lerpRatea);
        }
        else if ( name == scr_const.aim_3 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+values.fStrength3]
            vmovss  xmm3, [rsp+108h+values.fTime3]; time
            vmovss  [rsp+108h+lerpRate], xmm6
            vmovss  dword ptr [rsp+108h+fmt], xmm0
          }
          BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v34->anims->anim.index, *(double *)&_XMM3, fmtc, lerpRateb);
        }
        else if ( name == scr_const.aim_4 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+values.fStrength4]
            vmovss  xmm3, [rsp+108h+values.fTime4]; time
            vmovss  [rsp+108h+lerpRate], xmm6
            vmovss  dword ptr [rsp+108h+fmt], xmm0
          }
          BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v34->anims->anim.index, *(double *)&_XMM3, fmtd, lerpRatec);
        }
        else if ( name == scr_const.aim_6 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+values.fStrength6]
            vmovss  xmm3, [rsp+108h+values.fTime6]; time
            vmovss  [rsp+108h+lerpRate], xmm6
            vmovss  dword ptr [rsp+108h+fmt], xmm0
          }
          BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v34->anims->anim.index, *(double *)&_XMM3, fmte, lerpRated);
        }
        else if ( name == scr_const.aim_7 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+values.fStrength7]
            vmovss  xmm3, [rsp+108h+values.fTime7]; time
            vmovss  [rsp+108h+lerpRate], xmm6
            vmovss  dword ptr [rsp+108h+fmt], xmm0
          }
          BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v34->anims->anim.index, *(double *)&_XMM3, fmtf, lerpRatee);
        }
        else if ( name == scr_const.aim_8 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+values.fStrength8]
            vmovss  xmm3, [rsp+108h+values.fTime8]; time
            vmovss  [rsp+108h+lerpRate], xmm6
            vmovss  dword ptr [rsp+108h+fmt], xmm0
          }
          BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v34->anims->anim.index, *(double *)&_XMM3, fmtg, lerpRatef);
        }
        else if ( name == scr_const.aim_9 )
        {
          __asm
          {
            vmovss  xmm0, [rsp+108h+values.fStrength9]
            vmovss  xmm3, [rsp+108h+values.fTime9]; time
            vmovss  [rsp+108h+lerpRate], xmm6
            vmovss  dword ptr [rsp+108h+fmt], xmm0
          }
          BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v34->anims->anim.index, *(double *)&_XMM3, fmth, lerpRateg);
        }
        else
        {
          v52 = SL_ConvertToString(animAimSet->name);
          v53 = SL_ConvertToString(name);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 937, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected alias %s in aim set %s", v53, v52) )
            __debugbreak();
        }
        v30 = (unsigned int)(v30 + 1);
      }
      while ( (unsigned int)v30 < animAimSet->numAnimAliases );
    }
    __asm { vmovaps xmm6, [rsp+108h+var_48] }
  }
}

/*
==============
BG_AnimationState_UpdateAlwaysOn
==============
*/
void BG_AnimationState_UpdateAlwaysOn(DObj *obj, const Animset *pAnimset, int stateIndex, bool bCorpse, XModelNameMap *pModelNameMap)
{
  bool v11; 
  bool v12; 
  char v13; 
  bool AlwaysOnState; 
  XModelNameMap *cachedModelNameMap; 
  int v18; 
  int NumEntriesForStateIndex; 
  int v20; 
  int i; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float pOutAnimSubtreeID; 
  float pOutAnimSubtreeIDa; 
  float pOutAnimCurveID; 
  float pOutAnimCurveIDa; 
  XAnimSubTreeID v31[2]; 
  int pOutAlwaysOnState; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  int pOutAlwaysOnInDeathState; 
  AnimsetState *outState; 
  XAnimCurveID curveID; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 332, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  outState = NULL;
  if ( BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState) )
  {
    __asm
    {
      vmovaps [rsp+0C0h+var_30], xmm6
      vmovaps [rsp+0C0h+var_40], xmm7
    }
    if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 336, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
      __debugbreak();
    v11 = !outState->clearAlwaysOn;
    pOutAlwaysOnInDeathState = -1;
    v12 = v11;
    v13 = 0;
    if ( bCorpse && BG_Animset_GetAlwaysOnInDeathState(pAnimset, &pOutAlwaysOnInDeathState) )
    {
      v12 = 0;
      v13 = 1;
    }
    AlwaysOnState = BG_Animset_GetAlwaysOnState(pAnimset, &pOutAlwaysOnState);
    cachedModelNameMap = pModelNameMap;
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm7, cs:__real@3e4ccccd
    }
    if ( AlwaysOnState )
    {
      v18 = 0;
      NumEntriesForStateIndex = BG_Animset_GetNumEntriesForStateIndex(pAnimset, pOutAlwaysOnState);
      if ( NumEntriesForStateIndex > 0 )
      {
        if ( v12 )
        {
          do
          {
            BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, pOutAlwaysOnState, v18, &pOutAnimIndex, &pOutGraftNode, v31, &curveID);
            __asm
            {
              vmovss  dword ptr [rsp+0C0h+pOutAnimCurveID], xmm6
              vmovss  dword ptr [rsp+0C0h+pOutAnimSubtreeID], xmm7
              vmovss  dword ptr [rsp+0C0h+fmt], xmm6
            }
            XAnimSetCompleteGoalWeight(obj, pOutGraftNode, v31[0], pOutAnimIndex, fmt, pOutAnimSubtreeID, pOutAnimCurveID, (scr_string_t)0, 0, 0, curveID, cachedModelNameMap);
            ++v18;
          }
          while ( v18 < NumEntriesForStateIndex );
        }
        else
        {
          do
          {
            BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, pOutAlwaysOnState, v18, &pOutAnimIndex, &pOutGraftNode, v31, &curveID);
            __asm { vmovss  dword ptr [rsp+0C0h+fmt], xmm7 }
            XAnimClearTreeGoalWeights(obj->tree, pOutGraftNode, v31[0], pOutAnimIndex, fmta, 1, NULL, curveID);
            ++v18;
          }
          while ( v18 < NumEntriesForStateIndex );
        }
      }
    }
    if ( v13 )
    {
      if ( !outState->clearAlwaysOn )
      {
        v20 = BG_Animset_GetNumEntriesForStateIndex(pAnimset, pOutAlwaysOnInDeathState);
        for ( i = 0; i < v20; ++i )
        {
          BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, pOutAlwaysOnInDeathState, i, &pOutGraftNode, &pOutAnimIndex, v31, &curveID);
          __asm
          {
            vmovss  dword ptr [rsp+0C0h+pOutAnimCurveID], xmm6
            vmovss  dword ptr [rsp+0C0h+pOutAnimSubtreeID], xmm7
            vmovss  dword ptr [rsp+0C0h+fmt], xmm6
          }
          XAnimSetCompleteGoalWeight(obj, pOutAnimIndex, v31[0], pOutGraftNode, fmtb, pOutAnimSubtreeIDa, pOutAnimCurveIDa, (scr_string_t)0, 0, 0, curveID, cachedModelNameMap);
        }
      }
    }
    __asm
    {
      vmovaps xmm6, [rsp+0C0h+var_30]
      vmovaps xmm7, [rsp+0C0h+var_40]
    }
  }
}

/*
==============
BG_AnimationState_UpdateControllers
==============
*/
__int64 BG_AnimationState_UpdateControllers(const entityState_t *es, const characterInfo_t *characterInfo, clientControllers_t *control)
{
  scr_string_t AnimsetName; 
  __int32 v7; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1192, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1193, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1194, ASSERT_TYPE_ASSERT, "(control)", (const char *)&queryFormat, "control") )
    __debugbreak();
  AnimsetName = BG_AnimationState_GetAnimsetName(es);
  v7 = BG_Animset_GetAnimController(AnimsetName) - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return 0i64;
    if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1176, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    if ( !control && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 1177, ASSERT_TYPE_ASSERT, "(control)", (const char *)&queryFormat, "control") )
      __debugbreak();
    control->tag_origin_angles.v[0] = characterInfo->fTorsoPitch;
    *(_QWORD *)&control->tag_origin_angles.y = 0i64;
    *(_QWORD *)control->tag_origin_offset.v = 0i64;
    control->tag_origin_offset.v[2] = 0.0;
    *(_QWORD *)control->angles[0].v = 0i64;
    *(_QWORD *)&control->angles[0].z = 0i64;
    *(_QWORD *)&control->angles[1].y = 0i64;
    *(_QWORD *)control->angles[2].v = 0i64;
    *(_QWORD *)&control->angles[2].z = 0i64;
    *(_QWORD *)&control->angles[3].y = 0i64;
  }
  else
  {
    BG_Player_DoControllersInternal(es, characterInfo, control);
  }
  return 1i64;
}

