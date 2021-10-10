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
  characterAnimState_t *v6; 
  unsigned __int16 animAimRoot; 
  scr_string_t AnimsetName; 
  AnimsetState *AimSet; 
  unsigned int index; 
  unsigned int numAnimAliases; 
  unsigned int v14; 
  __int64 v15; 

  v6 = charAnimState;
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
  animAimRoot = v6->animAimRoot;
  if ( animAimRoot )
  {
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animAimRoot, 0.0, blendTime, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    XAnimClearChildGoalWeights(pAnimTree, 0, XANIM_SUBTREE_DEFAULT, v6->animAimRoot, blendTime, LINEAR);
    v6->animAimRoot = 0;
  }
  AnimsetName = BG_AnimationState_GetAnimsetName(es);
  AimSet = BG_AnimationState_GetAimSet(AnimsetName, es);
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x11u) && AimSet )
  {
    index = AimSet->aimsetRootAnim.index;
    XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, index, 1.0, blendTime, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
    numAnimAliases = AimSet->numAnimAliases;
    v14 = 0;
    if ( numAnimAliases )
    {
      do
      {
        v15 = (__int64)&AimSet->animAliases[v14];
        if ( *(_DWORD *)(v15 + 16) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 317, ASSERT_TYPE_ASSERT, "(pAlias->numAnims == 1)", "%s\n\tCannot support aimset alias with multiple anims.  Makes no sense.", "pAlias->numAnims == 1") )
          __debugbreak();
        XAnimSetGoalWeightKnobAll(obj, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(*(_QWORD *)(v15 + 8) + 16i64), XANIM_SUBTREE_DEFAULT, index, 1.0, blendTime, 0.0, (scr_string_t)0, 0, LINEAR);
        numAnimAliases = AimSet->numAnimAliases;
        ++v14;
      }
      while ( v14 < numAnimAliases );
      v6 = charAnimState;
    }
    if ( numAnimAliases != 5 )
      v6->animAimRoot = index;
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
  void *v5; 
  char v6; 
  const entityState_t *v8; 
  const BgStatic *ActiveStatics; 
  DObj *DObj; 
  const BgAnimStatic *v11; 
  int v12; 
  scr_string_t AnimsetName; 
  scr_string_t String; 
  int v15; 
  int animClass; 
  int animTime; 
  float v18; 
  char *v19; 
  float animRate; 
  int v21; 
  scr_string_t v22; 
  const char *v23; 
  scr_string_t StateNameFromIndex; 
  const char *v25; 
  bool v26; 
  scr_string_t animEntryMap; 
  float v28; 
  const char *v29; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v31; 
  scr_string_t AnimTree; 
  const char *v33; 
  const char *v34; 
  int IsLeafNode; 
  double Length; 
  const char *AnimDebugName; 
  double v38; 
  float v39; 
  unsigned int v42; 
  unsigned int animData; 
  int v44; 
  characterAnimState_t *v45; 
  int animState; 
  int v47; 
  int animEntry; 
  int v49; 
  bool v50; 
  DObj *v51; 
  DObj *v52; 
  int v53; 
  int v54; 
  unsigned int v55; 
  int v56; 
  Animset *v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int v60; 
  __int64 v61; 
  unsigned int v62; 
  char *v63; 
  scr_string_t Notify; 
  int v65; 
  XAnimCurveID v66; 
  unsigned int v67; 
  int v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  __int64 v72; 
  unsigned int v73; 
  unsigned int v74; 
  char v75; 
  int v76; 
  unsigned int v77; 
  unsigned int v78; 
  XAnimTree *v79; 
  characterAnimState_t *v80; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  XAnimCurveID v83; 
  XAnimCurveID curveID; 
  bool v85; 
  XAnimSubTreeID v86; 
  bool v87; 
  AnimsetState *outState; 
  XAnimSubTreeID v89; 
  XAnimTree *tree; 
  int v91; 
  int v92; 
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
  const entityState_t *v104; 
  const XAnim_s *v105; 
  int *v106; 
  __int64 v107; 
  XModelNameMap pModelNameMap; 

  v5 = alloca(v4);
  v107 = -2i64;
  v6 = flags;
  v106 = pTreeDirty;
  charAnimStatea = charAnimState;
  v8 = es;
  v104 = es;
  BG_CheckThread();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 547, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !charAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 548, ASSERT_TYPE_ASSERT, "(charAnimState)", (const char *)&queryFormat, "charAnimState") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Animstate_ApplyState");
  ActiveStatics = BgStatic::GetActiveStatics();
  DObj = BG_GetDObj(ActiveStatics, v8->number);
  obj = DObj;
  if ( DObj )
  {
    tree = DObjGetTree(DObj);
    if ( tree )
    {
      v11 = ActiveStatics->GetAnimStatics(ActiveStatics);
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 563, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v12 = v11->time - v11->deltaTime;
      AnimsetName = BG_AnimationState_GetAnimsetName(v8);
      if ( NetConstStrings_GetNameFromIndex(NETCONSTSTRINGTYPE_ANIMSET, charAnimState->animClass, (const char **)&outName) )
        String = SL_FindString(outName);
      else
        String = 0;
      outName = (char *)Animset_Find(AnimsetName);
      pAnimset = Animset_Find(String);
      pOutGraftNode = 0;
      v86 = XANIM_SUBTREE_DEFAULT;
      curveID = LINEAR;
      v15 = (v8->animInfo.animData >> 18) & 0x3F;
      v92 = v15;
      animClass = charAnimState->animClass;
      v91 = animClass;
      animTime = v8->animInfo.animTime;
      if ( v12 >= animTime )
      {
        v18 = (float)(v12 - animTime) * 0.001;
      }
      else
      {
        if ( (v6 & 1) == 0 && animClass == v15 && tree->children )
          goto LABEL_127;
        v18 = 0.0;
      }
      BG_CheckThread();
      v19 = outName;
      if ( !outName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 152, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
        __debugbreak();
      BG_Animset_GetAnimIndexFromStateIndexAndEntry((const Animset *)v19, (v8->animInfo.animData >> 1) & 0x3FF, (v8->animInfo.animData >> 11) & 0x7F, &pOutAnimIndex, &pOutGraftNode, &v86, NULL);
      if ( v8->eType == ET_AGENT )
        animRate = v8->un.animRate;
      else
        animRate = FLOAT_1_0;
      if ( (v6 & 8) != 0 )
        goto LABEL_33;
      v21 = (v8->animInfo.animData >> 1) & 0x3FF;
      outState = NULL;
      v22 = BG_AnimationState_GetAnimsetName(v8);
      BG_Animset_GetStateInfoByIndex(v22, v21, &outState);
      if ( !outState )
      {
        v23 = SL_ConvertToString(v22);
        StateNameFromIndex = BG_Animset_GetStateNameFromIndex(v22, v21);
        v25 = SL_ConvertToString(StateNameFromIndex);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 174, ASSERT_TYPE_ASSERT, "(pState)", "%s\n\tunable to find state %s in animset %s", "pState", v25, v23) )
          __debugbreak();
        v19 = outName;
      }
      v26 = !outState->restart;
      bRestart = 0;
      if ( !v26 )
LABEL_33:
        bRestart = 1;
      if ( (v6 & 4) != 0 )
      {
        v28 = 0.0;
      }
      else
      {
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 212, ASSERT_TYPE_ASSERT, "(pAnimset)", (const char *)&queryFormat, "pAnimset") )
          __debugbreak();
        outState = NULL;
        ppOutAnim = NULL;
        BG_Animset_GetAliasAndAnimFromStateIndexAndEntry((const Animset *)v19, (v8->animInfo.animData >> 1) & 0x3FF, (v8->animInfo.animData >> 11) & 0x7F, (const AnimsetAlias **)&outState, (const AnimsetAnim **)&ppOutAnim);
        animEntryMap = (scr_string_t)outState->animEntryMap;
        if ( animEntryMap )
        {
          curveID = XAnimCurve_GetIDFromPrimitiveCurveName(animEntryMap);
          if ( curveID == CURVE_ASSET_END )
          {
            v29 = SL_ConvertToString((scr_string_t)LODWORD(outState->animEntryMap));
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 223, ASSERT_TYPE_ASSERT, "(*pOutCurveID != XAnimCurveID::MAX)", "%s\n\tInvalid xanim curve name %s", "*pOutCurveID != XAnimCurveID::MAX", v29) )
              __debugbreak();
          }
          v28 = *((float *)&outState->numAnims + 1);
        }
        else
        {
          curveID = LINEAR;
          v28 = *((float *)&outState->numAnims + 1);
        }
      }
      pModelNameMap.initialized = 0;
      SubTreeAnims = XAnimGetSubTreeAnims(tree, v86);
      v105 = SubTreeAnims;
      v31 = (unsigned __int16)pOutAnimIndex;
      if ( (unsigned __int16)pOutAnimIndex >= SubTreeAnims->size )
      {
        AnimTree = BG_Animset_GetAnimTree(AnimsetName);
        v33 = SL_ConvertToString(AnimTree);
        v34 = SL_ConvertToString(AnimsetName);
        Com_Printf(18, "BG_AnimationState_ApplyState: Bad anim index.  entnum = %d  animset = (%s) animtree = (%s)\n", (unsigned int)v8->number, v34, v33);
      }
      IsLeafNode = XAnimIsLeafNode(SubTreeAnims, v31);
      v87 = IsLeafNode != 0;
      if ( IsLeafNode )
      {
        Length = XAnimGetLength(SubTreeAnims, v31);
        if ( *(float *)&Length <= 0.0 )
        {
          AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, v31);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 629, ASSERT_TYPE_ASSERT, "( XAnimGetLength( animTreeAnims, animIndex ) > 0.0f )", "%s is missing or is not a valid xanim", AnimDebugName) )
            __debugbreak();
        }
        v38 = XAnimGetLength(SubTreeAnims, v31);
        v39 = v18 / *(float *)&v38;
        v18 = v39;
        if ( v39 >= 1.0 )
        {
          if ( XAnimIsLooped(SubTreeAnims, v31) )
          {
            _XMM2 = 0i64;
            __asm { vroundss xmm0, xmm2, xmm1, 1 }
            v18 = v39 - *(float *)&_XMM0;
          }
          else
          {
            v18 = 0.0;
          }
        }
      }
      v42 = 0;
      if ( !v11->anim_user )
        v42 = 3;
      notifyType = v42;
      animData = v8->animInfo.animData;
      v44 = (animData >> 1) & 0x3FF;
      v45 = charAnimStatea;
      animState = charAnimStatea->animState;
      LODWORD(ppOutAnim) = animState;
      v47 = (animData >> 11) & 0x7F;
      animEntry = charAnimStatea->animEntry;
      v49 = v6 & 0xB;
      v50 = !tree->children || animState == v44 && v8->animInfo.animTime != charAnimStatea->animTime || v49;
      v85 = v50;
      animIndex = 0;
      graftAnimIndex = 0;
      v89 = XANIM_SUBTREE_DEFAULT;
      if ( animState != v44 || animEntry != v47 || v50 )
      {
        v51 = obj;
        XAnimSetIntGameParameterByName(obj, scr_const.animclass, (animData >> 18) & 0x3F);
        XAnimSetIntGameParameterByName(v51, scr_const.animstate, (v8->animInfo.animData >> 1) & 0x3FF);
        XAnimSetIntGameParameterByName(v51, scr_const.animentry, (v8->animInfo.animData >> 11) & 0x7F);
        animState = (int)ppOutAnim;
      }
      if ( tree->children )
      {
        if ( !v49 )
        {
          if ( v91 == v92 && animState == v44 )
            BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, v45->animState, v45->animEntry, &animIndex, &graftAnimIndex, &v89, NULL);
          else
            animIndex = BG_Animset_GetClearKnob(pAnimset);
        }
        v52 = obj;
        XAnimClearTreeGoalWeights(tree, graftAnimIndex, v89, animIndex, v28, 1, obj, curveID);
        if ( animState != v44 || (v53 = v92, v54 = v91, v91 != v92) )
        {
          BG_AnimationState_ClearGraftTrees(v52, pAnimset, v45->animState, v28, curveID);
          v53 = v92;
          v54 = v91;
        }
        if ( animState != v44 || v54 != v53 || animEntry != v47 )
        {
          v55 = v45->animEntry;
          v56 = v45->animState;
          v57 = pAnimset;
          if ( v55 >= BG_Animset_GetNumEntriesForStateIndex(pAnimset, v56) )
          {
            LODWORD(pOutAnimCurveID) = BG_Animset_GetNumEntriesForStateIndex(v57, v56);
            LODWORD(pOutAnimSubtreeID) = v55;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 460, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex ) )", "entryIndex doesn't index BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex )\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
              __debugbreak();
          }
          obj = NULL;
          if ( BG_Animset_GetStateInfoByIndex(v57, v56, (AnimsetState **)&obj) )
          {
            v58 = 0;
            v59 = 0;
            v60 = *(_DWORD *)&obj->numBones;
            if ( v60 )
            {
              while ( 1 )
              {
                v61 = *(_QWORD *)&obj->duplicateParts + 80i64 * v59;
                v58 += *(_DWORD *)(v61 + 16);
                if ( v58 > v55 )
                  break;
                if ( ++v59 >= v60 )
                  goto LABEL_93;
              }
              v62 = 0;
              if ( *(_DWORD *)(v61 + 48) )
              {
                do
                {
                  pAnimset = NULL;
                  if ( BG_Animset_GetStateInfoByName(v57, *(const scr_string_t *)(*(_QWORD *)(v61 + 40) + 4i64 * v62), (AnimsetState **)&pAnimset, (int *)&outState) )
                    BG_AnimationState_ClearGraftTrees(v52, v57, (int)outState, v28, curveID);
                  ++v62;
                }
                while ( v62 < *(_DWORD *)(v61 + 48) );
                v8 = v104;
              }
            }
          }
        }
      }
      else
      {
        v52 = obj;
      }
LABEL_93:
      v63 = outName;
      Notify = BG_AnimationState_GetNotify((const Animset *)outName, v8);
      v65 = (int)ppOutAnim;
      if ( (_DWORD)ppOutAnim != v44 || v85 || v91 != v92 )
        BG_AnimationState_UpdateAlwaysOn(v52, (const Animset *)v63, (v8->animInfo.animData >> 1) & 0x3FF, v8->eType == ET_AGENT_CORPSE, &pModelNameMap);
      if ( v65 == v44 && !v85 )
      {
        v66 = curveID;
      }
      else
      {
        v66 = curveID;
        BG_AnimationState_GraftTrees(v52, (const Animset *)v63, (v8->animInfo.animData >> 1) & 0x3FF, v28, curveID, Notify, notifyType, &pModelNameMap);
      }
      v67 = (v8->animInfo.animData >> 11) & 0x7F;
      v68 = (v8->animInfo.animData >> 1) & 0x3FF;
      if ( v67 >= BG_Animset_GetNumEntriesForStateIndex((const Animset *)v63, v68) )
      {
        LODWORD(pOutAnimCurveID) = BG_Animset_GetNumEntriesForStateIndex((const Animset *)v63, v68);
        LODWORD(pOutAnimSubtreeID) = v67;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 497, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex ) )", "entryIndex doesn't index BG_Animset_GetNumEntriesForStateIndex( pAnimset, stateIndex )\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
          __debugbreak();
      }
      obj = NULL;
      if ( BG_Animset_GetStateInfoByIndex((const Animset *)v63, v68, (AnimsetState **)&obj) )
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
            if ( v69 > v67 )
              break;
            if ( ++v70 >= v71 )
              goto LABEL_115;
          }
          v73 = 0;
          if ( *(_DWORD *)(v72 + 48) )
          {
            v74 = notifyType;
            do
            {
              outName = NULL;
              if ( BG_Animset_GetStateInfoByName((const Animset *)v63, *(const scr_string_t *)(*(_QWORD *)(v72 + 40) + 4i64 * v73), (AnimsetState **)&outName, (int *)&outState) )
                BG_AnimationState_GraftTrees(v52, (const Animset *)v63, (int)outState, v28, v66, Notify, v74, &pModelNameMap);
              ++v73;
            }
            while ( v73 < *(_DWORD *)(v72 + 48) );
            v8 = v104;
          }
        }
      }
LABEL_115:
      v75 = v87;
      if ( (v87 || XAnimIsCustomNodeType(v105->entries[(unsigned __int16)pOutAnimIndex].nodeType)) && (Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SetCompleteGoalWeight"), v83 = v66, v76 = bRestart, v77 = (unsigned __int16)pOutAnimIndex, XAnimSetCompleteGoalWeight(v52, pOutGraftNode, v86, (unsigned __int16)pOutAnimIndex, 1.0, v28, animRate, Notify, notifyType, bRestart, v83, &pModelNameMap), Sys_ProfEndNamedEvent(), v75) && v18 >= 0.0 && v76 )
      {
        v78 = v77;
        v79 = tree;
        XAnimSetTime(tree, pOutGraftNode, v86, v78, v18);
      }
      else
      {
        v79 = tree;
      }
      v80 = charAnimStatea;
      if ( v8->eType != ET_ACTOR )
        BG_AnimationState_ApplyBlends(v8, v79, charAnimStatea, v52, v28);
      if ( v106 )
        *v106 = 0;
      v80->animClass = (v8->animInfo.animData >> 18) & 0x3F;
      v80->animState = (v8->animInfo.animData >> 1) & 0x3FF;
      v80->animEntry = (v8->animInfo.animData >> 11) & 0x7F;
      v80->animTime = v8->animInfo.animTime;
    }
  }
LABEL_127:
  Sys_ProfEndNamedEvent();
}

/*
==============
BG_AnimationState_ClearGraftTrees
==============
*/
void BG_AnimationState_ClearGraftTrees(DObj *obj, const Animset *pAnimset, int stateIndex, float blendTime, XAnimCurveID curveID)
{
  unsigned int v8; 
  AnimsetState *v9; 
  XAnimCurveID v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  XAnimSubTreeID v14; 
  unsigned int v15; 
  AnimsetState *outState; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 393, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v8 = 0;
  outState = NULL;
  if ( BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState) )
  {
    v9 = outState;
    if ( outState->numBlendtreeAliases )
    {
      v10 = curveID;
      do
      {
        v11 = (__int64)&v9->blendtreeAliases[v8];
        if ( *(_DWORD *)(v11 + 4) )
        {
          v12 = *(_QWORD *)(v11 + 40);
          v13 = *(_QWORD *)(v11 + 32);
          if ( v12 )
          {
            v14 = *(_WORD *)(v12 + 60);
            v15 = 1;
            LODWORD(v13) = (unsigned __int16)v13;
          }
          else
          {
            v14 = XANIM_SUBTREE_DEFAULT;
            v15 = (unsigned __int16)v13;
            LODWORD(v13) = 0;
          }
          XAnimClearGoalWeight(obj->tree, v13, v14, v15, blendTime, v10);
          v9 = outState;
        }
        ++v8;
      }
      while ( v8 < v9->numBlendtreeAliases );
    }
  }
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
void BG_AnimationState_GraftTrees(DObj *obj, const Animset *pAnimset, int stateIndex, float blendTime, XAnimCurveID curveID, const scr_string_t notifyName, unsigned int notifyType, XModelNameMap *pModelNameMap)
{
  unsigned int v11; 
  AnimsetState *v12; 
  XModelNameMap *cachedModelNameMap; 
  unsigned int v14; 
  scr_string_t v15; 
  XAnimCurveID v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  char v20; 
  scr_string_t v21; 
  unsigned int v22; 
  unsigned int v23; 
  XAnimSubTreeID v24; 
  AnimsetState *outState; 

  Sys_ProfBeginNamedEvent(0xFF808080, "BG_Animstate_GraftTrees");
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 425, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  outState = NULL;
  if ( BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState) )
  {
    v11 = 0;
    v12 = outState;
    if ( outState->numBlendtreeAliases )
    {
      cachedModelNameMap = pModelNameMap;
      v14 = notifyType;
      v15 = notifyName;
      v16 = curveID;
      do
      {
        v17 = (__int64)&v12->blendtreeAliases[v11];
        if ( *(_DWORD *)(v17 + 4) )
        {
          LOWORD(v18) = *(_WORD *)(v17 + 32);
          v19 = *(_QWORD *)(v17 + 40);
          v20 = *(_BYTE *)(v17 + 48);
          v21 = 0;
          if ( v20 )
            v21 = v15;
          v22 = 0;
          if ( v20 )
            v22 = v14;
          if ( v19 )
          {
            v18 = (unsigned __int16)v18;
            v23 = 1;
            v24 = *(_WORD *)(v19 + 60);
          }
          else
          {
            v23 = (unsigned __int16)v18;
            v24 = XANIM_SUBTREE_DEFAULT;
            v18 = 0;
          }
          XAnimSetCompleteGoalWeight(obj, v18, v24, v23, 1.0, blendTime, 1.0, v21, v22, 1, v16, cachedModelNameMap);
          v12 = outState;
        }
        ++v11;
      }
      while ( v11 < v12->numBlendtreeAliases );
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
BG_AnimationState_LerpControllers
==============
*/
__int64 BG_AnimationState_LerpControllers(const entityState_t *es, characterInfo_t *characterInfo, int frametime)
{
  __int64 v5; 
  float v6; 
  float v7; 
  clientControllers_t *p_control; 
  clientControllers_t control; 

  if ( !BG_AnimationState_UpdateControllers(es, characterInfo, &control) )
    return 0i64;
  v5 = 4i64;
  v6 = (float)frametime;
  v7 = (float)frametime * 0.36000001;
  p_control = &control;
  do
  {
    BG_LerpAngles(p_control->angles, v7, (vec3_t *)((char *)&p_control[23].tag_origin_angles.v[1] + (char *)characterInfo - (char *)&control));
    p_control = (clientControllers_t *)((char *)p_control + 12);
    --v5;
  }
  while ( v5 );
  BG_LerpAngles(&control.tag_origin_angles, v7, &characterInfo->control.tag_origin_angles);
  BG_LerpOffset(&control.tag_origin_offset, v6 * 0.1, &characterInfo->control.tag_origin_offset);
  return 1i64;
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
void BG_AnimationState_UpdateAimAnim(DObj *obj, XAnimTree *pXAnimTree, unsigned int animIndex, float time, float weight, float lerpRate)
{
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  float v13; 

  v9 = XAnimGetTime(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  v10 = *(float *)&v9;
  v11 = XAnimGetWeight(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  if ( weight > 0.0 || *(float *)&v11 > 0.0 )
  {
    v12 = lerpRate;
    v13 = 1.0 - lerpRate;
    XAnimSetTime(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex, (float)((float)(1.0 - lerpRate) * v10) + (float)(time * lerpRate));
  }
  else
  {
    v12 = lerpRate;
    v13 = 1.0 - lerpRate;
  }
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, (float)(v13 * *(float *)&v11) + (float)(weight * v12), 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
}

/*
==============
BG_AnimationState_UpdateAimAnim_5Point
==============
*/
void BG_AnimationState_UpdateAimAnim_5Point(DObj *obj, XAnimTree *pXAnimTree, unsigned int animIndex, float time, float weight, float lerpRate)
{
  double v8; 

  v8 = XAnimGetWeight(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, animIndex);
  XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, (float)((float)(1.0 - lerpRate) * *(float *)&v8) + (float)(lerpRate * weight), 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
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
  double v10; 
  float v11; 
  float v12; 
  double v13; 
  float v14; 
  float v15; 
  scr_string_t AnimsetName; 
  unsigned int i; 
  AnimsetAlias *animAliases; 
  scr_string_t name; 
  unsigned int numAnimAliases; 
  int v21; 
  AnimsetAlias *v22; 
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
  if ( animAimSet->numAnimAliases != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 773, ASSERT_TYPE_ASSERT, "(animAimSet->numAnimAliases == 5)", (const char *)&queryFormat, "animAimSet->numAnimAliases == AIMSET_ENTRY_COUNT_5POINT") )
    __debugbreak();
  if ( es->eType == ET_AGENT_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 776, ASSERT_TYPE_ASSERT, "(es->eType != ET_AGENT_CORPSE)", (const char *)&queryFormat, "es->eType != ET_AGENT_CORPSE") )
    __debugbreak();
  v10 = BG_AnimationMP_UnpackPitch(es->lerp.u.player.waistPitchPacked);
  if ( *(float *)&v10 < 0.0 )
  {
    v11 = *(float *)&v10 * -0.022222223;
LABEL_16:
    v12 = 0.0;
    goto LABEL_17;
  }
  v11 = 0.0;
  if ( *(float *)&v10 <= 0.0 )
    goto LABEL_16;
  v12 = *(float *)&v10 * 0.022222223;
LABEL_17:
  v13 = BG_AnimationMP_UnpackPitch(es->lerp.u.player.torsoPitchPacked);
  if ( *(float *)&v13 >= 0.0 )
  {
    v14 = 0.0;
    if ( *(float *)&v13 > 0.0 )
    {
      v15 = *(float *)&v13 * 0.022222223;
      goto LABEL_20;
    }
  }
  else
  {
    v14 = *(float *)&v13 * -0.022222223;
  }
  v15 = 0.0;
LABEL_20:
  outState = NULL;
  AnimsetName = BG_AnimationState_GetAnimsetName(es);
  if ( BG_Animset_GetStateInfoByName(AnimsetName, (const scr_string_t)scr_const.knobs, &outState, NULL) )
  {
    for ( i = 0; i < outState->numAnimAliases; ++i )
    {
      animAliases = outState->animAliases;
      name = animAliases[i].name;
      if ( name == scr_const.aim_2 )
      {
        BG_AnimationState_UpdateAimAnim_5Point(DObj, pAnimTree, animAliases[i].anims->anim.index, 0.0, v12, 0.2);
      }
      else if ( name == scr_const.aim_8 )
      {
        BG_AnimationState_UpdateAimAnim_5Point(DObj, pAnimTree, animAliases[i].anims->anim.index, 0.0, v11, 0.2);
      }
      else if ( name == scr_const.aim_4 )
      {
        BG_AnimationState_UpdateAimAnim_5Point(DObj, pAnimTree, animAliases[i].anims->anim.index, 0.0, v15, 0.2);
      }
      else if ( name == scr_const.aim_6 )
      {
        BG_AnimationState_UpdateAimAnim_5Point(DObj, pAnimTree, animAliases[i].anims->anim.index, 0.0, v14, 0.2);
      }
    }
  }
  numAnimAliases = animAimSet->numAnimAliases;
  v21 = 0;
  if ( numAnimAliases )
  {
    v22 = animAimSet->animAliases;
    while ( v22[v21].name != scr_const.aim_5 )
    {
      if ( ++v21 >= numAnimAliases )
        return;
    }
    XAnimSetCompleteGoalWeight(DObj, 0, XANIM_SUBTREE_DEFAULT, v22[v21].anims->anim.index, 1.0, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
  }
}

/*
==============
BG_AnimationState_UpdateAimSet_9Point
==============
*/
void BG_AnimationState_UpdateAimSet_9Point(const AnimsetState *animAimSet, const entityState_t *es, XAnimTree *pAnimTree, characterAnimState_t *charAnimState)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  const BgStatic *ActiveStatics; 
  DObj *DObj; 
  bool v14; 
  unsigned __int16 torsoPitchPacked; 
  __int128 v18; 
  __int128 v21; 
  __int128 v23; 
  __int128 v26; 
  __int64 i; 
  AnimsetAlias *v28; 
  scr_string_t name; 
  const char *v30; 
  const char *v31; 
  aimAnimValues_t values; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 

  BG_CheckThread();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 873, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !charAnimState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 874, ASSERT_TYPE_ASSERT, "(charAnimState)", (const char *)&queryFormat, "charAnimState") )
    __debugbreak();
  ActiveStatics = BgStatic::GetActiveStatics();
  DObj = BG_GetDObj(ActiveStatics, es->number);
  if ( DObj && charAnimState->animAimRoot )
  {
    v14 = animAimSet->numAnimAliases == 8;
    v34 = v6;
    v33 = v7;
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 885, ASSERT_TYPE_ASSERT, "(animAimSet->numAnimAliases == 8)", (const char *)&queryFormat, "animAimSet->numAnimAliases == AIMSET_ENTRY_COUNT_9POINT") )
      __debugbreak();
    if ( es->eType == ET_AGENT_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 888, ASSERT_TYPE_ASSERT, "(es->eType != ET_AGENT_CORPSE)", (const char *)&queryFormat, "es->eType != ET_AGENT_CORPSE") )
      __debugbreak();
    torsoPitchPacked = es->lerp.u.player.torsoPitchPacked;
    v35 = v5;
    *(double *)&v4 = BG_AnimationMP_UnpackPitch(torsoPitchPacked);
    LODWORD(_XMM6) = 0;
    if ( *(float *)&v4 >= 0.0 )
    {
      v21 = v4;
      *(float *)&v21 = *(float *)&v4 * 0.014285714;
      _XMM0 = v21;
      __asm { vminss  xmm10, xmm0, xmm7 }
      LODWORD(_XMM11) = 0;
    }
    else
    {
      v18 = v4;
      *(float *)&v18 = *(float *)&v4 * -0.014285714;
      _XMM0 = v18;
      __asm { vminss  xmm11, xmm0, xmm7 }
      LODWORD(_XMM10) = 0;
    }
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(es->lerp.u.player.waistPitchPacked);
    if ( *(float *)&_XMM0 >= 0.0 )
    {
      v26 = _XMM0;
      *(float *)&v26 = *(float *)&_XMM0 * 0.014285714;
      _XMM0 = v26;
      __asm { vminss  xmm1, xmm0, xmm7; fAimFactor2 }
    }
    else
    {
      v23 = _XMM0;
      *(float *)&v23 = *(float *)&_XMM0 * -0.014285714;
      _XMM0 = v23;
      __asm { vminss  xmm6, xmm0, xmm7 }
      LODWORD(_XMM1) = 0;
    }
    BG_CalculateAimAnimValues(&values, *(float *)&_XMM1, *(float *)&_XMM10, *(float *)&_XMM11, *(float *)&_XMM6);
    for ( i = 0i64; (unsigned int)i < animAimSet->numAnimAliases; i = (unsigned int)(i + 1) )
    {
      v28 = &animAimSet->animAliases[i];
      name = v28->name;
      if ( v28->name == scr_const.aim_1 )
      {
        BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v28->anims->anim.index, values.fTime1, values.fStrength1, 0.2);
      }
      else if ( name == scr_const.aim_2 )
      {
        BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v28->anims->anim.index, values.fTime2, values.fStrength2, 0.2);
      }
      else if ( name == scr_const.aim_3 )
      {
        BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v28->anims->anim.index, values.fTime3, values.fStrength3, 0.2);
      }
      else if ( name == scr_const.aim_4 )
      {
        BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v28->anims->anim.index, values.fTime4, values.fStrength4, 0.2);
      }
      else if ( name == scr_const.aim_6 )
      {
        BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v28->anims->anim.index, values.fTime6, values.fStrength6, 0.2);
      }
      else if ( name == scr_const.aim_7 )
      {
        BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v28->anims->anim.index, values.fTime7, values.fStrength7, 0.2);
      }
      else if ( name == scr_const.aim_8 )
      {
        BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v28->anims->anim.index, values.fTime8, values.fStrength8, 0.2);
      }
      else if ( name == scr_const.aim_9 )
      {
        BG_AnimationState_UpdateAimAnim(DObj, pAnimTree, v28->anims->anim.index, values.fTime9, values.fStrength9, 0.2);
      }
      else
      {
        v30 = SL_ConvertToString(animAimSet->name);
        v31 = SL_ConvertToString(name);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 937, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected alias %s in aim set %s", v31, v30) )
          __debugbreak();
      }
    }
  }
}

/*
==============
BG_AnimationState_UpdateAlwaysOn
==============
*/
void BG_AnimationState_UpdateAlwaysOn(DObj *obj, const Animset *pAnimset, int stateIndex, bool bCorpse, XModelNameMap *pModelNameMap)
{
  bool v9; 
  bool v10; 
  char v11; 
  bool AlwaysOnState; 
  XModelNameMap *cachedModelNameMap; 
  int v14; 
  int NumEntriesForStateIndex; 
  int v16; 
  int i; 
  XAnimSubTreeID pOutAnimSubtreeID[2]; 
  int pOutAlwaysOnState; 
  unsigned int pOutAnimIndex; 
  unsigned int pOutGraftNode; 
  int pOutAlwaysOnInDeathState; 
  AnimsetState *outState; 
  XAnimCurveID pOutAnimCurveID; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 332, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  outState = NULL;
  if ( BG_Animset_GetStateInfoByIndex(pAnimset, stateIndex, &outState) )
  {
    if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_animstate.cpp", 336, ASSERT_TYPE_ASSERT, "(pState)", (const char *)&queryFormat, "pState") )
      __debugbreak();
    v9 = !outState->clearAlwaysOn;
    pOutAlwaysOnInDeathState = -1;
    v10 = v9;
    v11 = 0;
    if ( bCorpse && BG_Animset_GetAlwaysOnInDeathState(pAnimset, &pOutAlwaysOnInDeathState) )
    {
      v10 = 0;
      v11 = 1;
    }
    AlwaysOnState = BG_Animset_GetAlwaysOnState(pAnimset, &pOutAlwaysOnState);
    cachedModelNameMap = pModelNameMap;
    if ( AlwaysOnState )
    {
      v14 = 0;
      NumEntriesForStateIndex = BG_Animset_GetNumEntriesForStateIndex(pAnimset, pOutAlwaysOnState);
      if ( NumEntriesForStateIndex > 0 )
      {
        if ( v10 )
        {
          do
          {
            BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, pOutAlwaysOnState, v14, &pOutAnimIndex, &pOutGraftNode, pOutAnimSubtreeID, &pOutAnimCurveID);
            XAnimSetCompleteGoalWeight(obj, pOutGraftNode, pOutAnimSubtreeID[0], pOutAnimIndex, 1.0, 0.2, 1.0, (scr_string_t)0, 0, 0, pOutAnimCurveID, cachedModelNameMap);
            ++v14;
          }
          while ( v14 < NumEntriesForStateIndex );
        }
        else
        {
          do
          {
            BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, pOutAlwaysOnState, v14, &pOutAnimIndex, &pOutGraftNode, pOutAnimSubtreeID, &pOutAnimCurveID);
            XAnimClearTreeGoalWeights(obj->tree, pOutGraftNode, pOutAnimSubtreeID[0], pOutAnimIndex, 0.2, 1, NULL, pOutAnimCurveID);
            ++v14;
          }
          while ( v14 < NumEntriesForStateIndex );
        }
      }
    }
    if ( v11 )
    {
      if ( !outState->clearAlwaysOn )
      {
        v16 = BG_Animset_GetNumEntriesForStateIndex(pAnimset, pOutAlwaysOnInDeathState);
        for ( i = 0; i < v16; ++i )
        {
          BG_Animset_GetAnimIndexFromStateIndexAndEntry(pAnimset, pOutAlwaysOnInDeathState, i, &pOutGraftNode, &pOutAnimIndex, pOutAnimSubtreeID, &pOutAnimCurveID);
          XAnimSetCompleteGoalWeight(obj, pOutAnimIndex, pOutAnimSubtreeID[0], pOutGraftNode, 1.0, 0.2, 1.0, (scr_string_t)0, 0, 0, pOutAnimCurveID, cachedModelNameMap);
        }
      }
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

