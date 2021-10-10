/*
==============
XAnimToggle_Register
==============
*/

void XAnimToggle_Register(void)
{
  ?XAnimToggle_Register@@YAXXZ();
}

/*
==============
XAnimToggleAll_Register
==============
*/

void XAnimToggleAll_Register(void)
{
  ?XAnimToggleAll_Register@@YAXXZ();
}

/*
==============
XAnimToggle_Init
==============
*/
void XAnimToggle_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 56, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType) )
    *(_DWORD *)nodeData = 1045220557;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.restart, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 4) = 1;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendcurve, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 4) = scr_const.xanimcurve_linear;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.notifyname, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 5) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.clearwhendone, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 5) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.clearonnotetrack, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 2) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.clearifnochild, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 6) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.errorifnochild, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 7) = 1;
  *((_WORD *)nodeData + 12) = 0;
  *((_DWORD *)nodeData + 3) = -1082130432;
  *((_BYTE *)nodeData + 26) = 0;
}

/*
==============
XAnimToggle_Destroy
==============
*/
void XAnimToggle_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimToggle_Update
==============
*/
void XAnimToggle_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  unsigned int GraftAnimIndex; 
  XAnimCurveID curveID; 
  float goalWeight; 
  bool v15; 
  XModelNameMap *cachedModelNameMap; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int8 v19; 
  __int64 ChildAt; 
  const XAnim_s *v21; 
  int NumChildren; 
  int v23; 
  const char *AnimDebugName; 
  unsigned int v25; 
  double Time; 
  float v27; 
  double v28; 
  float v29; 
  double Weight; 
  char v31; 
  char v32; 
  int bRestart; 
  scr_string_t notifyName; 
  scr_string_t v35; 
  double NotetrackTime; 
  __int64 goalTime; 
  XAnim_s *anims; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 118, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 119, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 120, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  curveID = XAnimCurve_GetID(*((const scr_string_t *)nodeData + 4));
  LODWORD(_XMM6) = *(_DWORD *)nodeData;
  if ( !*((_BYTE *)nodeData + 26) )
    *((_BYTE *)nodeData + 26) = 1;
  goalWeight = animInfo->state.goalWeight;
  v15 = goalWeight == 1.0 && animInfo->state.goalTime > 0.001;
  if ( goalWeight == 0.0 )
  {
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, animInfo->state.goalTime, 0, (const XAnimCurveID)animInfo->state.curveID);
    *((_DWORD *)nodeData + 3) = -1082130432;
    *((_BYTE *)nodeData + 25) = 0;
    return;
  }
  if ( !v15 )
    goto LABEL_22;
  _XMM0 = LODWORD(animInfo->state.goalDuration);
  curveID = animInfo->state.curveID;
  __asm { vminss  xmm6, xmm0, xmm6 }
  if ( *((_BYTE *)nodeData + 6) )
  {
    cachedModelNameMap = modelNameMap;
    if ( !*((_BYTE *)nodeData + 24) )
      XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, animInfo->animIndex, 0.001, *(float *)&_XMM6, 1.0, animInfo->notifyName, animInfo->notifyType, 0, curveID, modelNameMap);
  }
  else
  {
LABEL_22:
    cachedModelNameMap = modelNameMap;
  }
  SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
  anims = (XAnim_s *)SubTreeAnims;
  if ( *((unsigned __int8 *)nodeData + 25) - 1 >= XAnimGetNumChildren(SubTreeAnims, animInfo->animIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 156, ASSERT_TYPE_ASSERT, "(pNode->m_PrevChildIndex - 1 < XAnimGetNumChildren( anims, animInfo->animIndex ))", (const char *)&queryFormat, "pNode->m_PrevChildIndex - 1 < XAnimGetNumChildren( anims, animInfo->animIndex )") )
    __debugbreak();
  v19 = *((_BYTE *)nodeData + 25);
  if ( v19 && v19 != *((_BYTE *)nodeData + 24) )
  {
    ChildAt = (int)XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, v19 - 1);
    if ( obj->tree->owner[0] || (v21 = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID), !v21->entries[ChildAt].numAnims) || (v21->entries[ChildAt].animParent.flags & 0x800) == 0 )
      XAnimClearGoalWeight(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, ChildAt, *(float *)&_XMM6, curveID);
    if ( *((_BYTE *)nodeData + 6) && !*((_BYTE *)nodeData + 24) )
      XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, animInfo->animIndex, 0.001, *(float *)&_XMM6, 1.0, animInfo->notifyName, animInfo->notifyType, 0, curveID, cachedModelNameMap);
    *((_DWORD *)nodeData + 3) = -1082130432;
  }
  NumChildren = XAnimGetNumChildren(SubTreeAnims, animInfo->animIndex);
  v23 = *((unsigned __int8 *)nodeData + 24);
  if ( v23 - 1 >= NumChildren )
  {
    if ( !*((_BYTE *)nodeData + 7) && NumChildren > 0 )
    {
      *((_BYTE *)nodeData + 24) = 1;
      LOBYTE(v23) = 1;
      goto LABEL_44;
    }
    AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, animInfo->animIndex);
    LODWORD(goalTime) = *((unsigned __int8 *)nodeData + 24) - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 182, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XAnimToggle_Update: Invalid child index (%d) for anim node '%s'\n", goalTime, AnimDebugName) )
      __debugbreak();
    LOBYTE(v23) = *((_BYTE *)nodeData + 24);
  }
  if ( (_BYTE)v23 )
  {
LABEL_44:
    v25 = XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, (unsigned __int8)v23 - 1);
    Time = XAnimGetTime(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, v25);
    if ( *((_BYTE *)nodeData + 5) && *(float *)&Time >= 1.0 || (v27 = *((float *)nodeData + 3), v27 > 0.0) && *(float *)&Time >= v27 )
    {
      XAnimClearGoalWeight(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, v25, *(float *)&_XMM6, curveID);
      if ( *((_BYTE *)nodeData + 6) )
        XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, animInfo->animIndex, 0.001, *(float *)&_XMM6, 1.0, animInfo->notifyName, animInfo->notifyType, 0, curveID, modelNameMap);
      *((_DWORD *)nodeData + 3) = -1082130432;
    }
    else
    {
      v28 = XAnimGetGoalWeight(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, v25);
      v29 = *(float *)&v28;
      Weight = XAnimGetWeight(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, v25);
      v31 = *((_BYTE *)nodeData + 25);
      v32 = *((_BYTE *)nodeData + 24);
      if ( v31 != v32 || !*((_BYTE *)nodeData + 5) && v29 <= 0.0 && *(float *)&Weight > 0.0 )
      {
        bRestart = *((_BYTE *)nodeData + 4) && (v31 != v32 || !animInfo->children);
        notifyName = *((_DWORD *)nodeData + 5);
        if ( !notifyName )
          notifyName = animInfo->notifyName;
        if ( XAnimToggle_ShouldSetChildIndexWeight(obj->tree, animInfo->subTreeID, v25) )
          XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, v25, 1.0, *(float *)&_XMM6, 1.0, notifyName, animInfo->notifyType, bRestart, curveID, modelNameMap);
        v35 = *((_DWORD *)nodeData + 2);
        if ( v35 )
        {
          NotetrackTime = XAnimGetNotetrackTime(anims, v25, v35);
          *((float *)nodeData + 3) = *(float *)&NotetrackTime;
        }
        if ( *((_BYTE *)nodeData + 6) )
          XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, animInfo->animIndex, 1.0, *(float *)&_XMM6, 1.0, animInfo->notifyName, animInfo->notifyType, 0, curveID, modelNameMap);
      }
    }
  }
  *((_BYTE *)nodeData + 25) = *((_BYTE *)nodeData + 24);
}

/*
==============
XAnimToggle_Read
==============
*/
void XAnimToggle_Read(void *nodeData, MemoryFile *memFile)
{
  char p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 26) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 24) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 25) = p;
}

/*
==============
XAnimToggle_Write
==============
*/
void XAnimToggle_Write(void *nodeData, MemoryFile *memFile)
{
  char p; 

  p = *((_BYTE *)nodeData + 26);
  MemFile_WriteData(memFile, 1ui64, &p);
  p = *((_BYTE *)nodeData + 24);
  MemFile_WriteData(memFile, 1ui64, &p);
  p = *((_BYTE *)nodeData + 25);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnimToggle_PostParse
==============
*/
char XAnimToggle_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  const XAnimParameterBinding *v6; 
  const char *AnimDebugName; 
  bool v8; 
  int NumChildren; 
  const XAnimParameterBinding *v10; 
  unsigned int v11; 
  unsigned int ChildAt; 
  const char *v14; 
  const char *v15; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 250, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType);
  v6 = ConstantBindParameterByFieldNameAllBindings;
  if ( ConstantBindParameterByFieldNameAllBindings && ConstantBindParameterByFieldNameAllBindings->constant.floatValue < 0.0 )
  {
    AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 255, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid blendtime value %.f specified in %s", v6->constant.floatValue, AnimDebugName);
  }
  else
  {
    NumChildren = XAnimGetNumChildren(anims, animIndex);
    if ( NumChildren <= 254 )
    {
      v10 = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, animIndex, scr_const.clearwhendone, TypeFieldsForNodeType);
      if ( !v10 )
        return 1;
      if ( !v10->constant.boolValue )
        return 1;
      v11 = 0;
      if ( NumChildren <= 0 )
        return 1;
      while ( 1 )
      {
        ChildAt = XAnimGetChildAt(anims, animIndex, v11);
        if ( XAnimIsLooped(anims, ChildAt) )
          break;
        if ( (int)++v11 >= NumChildren )
          return 1;
      }
      v15 = XAnimGetAnimDebugName(anims, ChildAt);
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "clearWhenDone toggle node cannot work with looped anim %s", v15);
    }
    else
    {
      v14 = XAnimGetAnimDebugName(anims, animIndex);
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 262, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "exceeded max number of child anims (254) in %s", v14);
    }
  }
  if ( v8 )
    __debugbreak();
  return 0;
}

/*
==============
XAnimToggleAll_Init
==============
*/
void XAnimToggleAll_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldName; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 297, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType) )
    *(_DWORD *)nodeData = 1045220557;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.restart, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 4) = 1;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendcurve, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 2) = scr_const.xanimcurve_linear;
  ConstantBindParameterByFieldName = XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.notifyname, TypeFieldsForNodeType);
  *((_BYTE *)nodeData + 16) = 0;
  if ( !ConstantBindParameterByFieldName )
    *((_DWORD *)nodeData + 3) = 0;
}

/*
==============
XAnimToggleAll_Destroy
==============
*/
void XAnimToggleAll_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimToggleAll_Update
==============
*/
void XAnimToggleAll_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  unsigned int GraftAnimIndex; 
  XAnimCurveID ID; 
  XAnimCurveID curveID; 
  const XAnim_s *SubTreeAnims; 
  signed int v15; 
  int NumChildren; 
  unsigned int ChildAt; 
  const XAnim_s *v18; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 324, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 325, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 326, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  ID = XAnimCurve_GetID(*((const scr_string_t *)nodeData + 2));
  curveID = ID;
  if ( animInfo->state.goalWeight == 0.0 )
  {
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, animInfo->state.goalTime, 0, ID);
  }
  else if ( !*((_BYTE *)nodeData + 16) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
    v18 = SubTreeAnims;
    v15 = 0;
    NumChildren = XAnimGetNumChildren(SubTreeAnims, animInfo->animIndex);
    if ( NumChildren > 0 )
    {
      do
      {
        ChildAt = XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, v15);
        XAnimSetCompleteGoalWeight(obj, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, ChildAt, 1.0, *(float *)nodeData, 1.0, *((scr_string_t *)nodeData + 3), animInfo->notifyType, *((unsigned __int8 *)nodeData + 4), curveID, modelNameMap);
        if ( *((_BYTE *)nodeData + 4) )
          XAnimClearTreeGoalWeightsStrict(obj->tree, GraftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, ChildAt, *(float *)nodeData, NULL, curveID);
        SubTreeAnims = v18;
        ++v15;
      }
      while ( v15 < NumChildren );
    }
    *((_BYTE *)nodeData + 16) = 1;
  }
}

/*
==============
XAnimToggleAll_Read
==============
*/
void XAnimToggleAll_Read(void *nodeData, MemoryFile *memFile)
{
  char p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 16) = p;
}

/*
==============
XAnimToggleAll_Write
==============
*/
void XAnimToggleAll_Write(void *nodeData, MemoryFile *memFile)
{
  char p; 

  p = *((_BYTE *)nodeData + 16);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnimToggleAll_PostParse
==============
*/
char XAnimToggleAll_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  const XAnimParameterBinding *v6; 
  float floatValue; 
  int v8; 
  const char *fmt; 
  const char *AnimDebugName; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", 372, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType);
  v6 = ConstantBindParameterByFieldNameAllBindings;
  if ( !ConstantBindParameterByFieldNameAllBindings )
    return 1;
  floatValue = ConstantBindParameterByFieldNameAllBindings->constant.floatValue;
  if ( floatValue >= 0.0 )
  {
    if ( floatValue > 50.0 )
    {
      AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
      v8 = 382;
      fmt = "blendtime is in seconds, not milliseconds.  are you sure you want a blendtime of %.4f seconds for %s?";
      goto LABEL_9;
    }
    return 1;
  }
  AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
  v8 = 377;
  fmt = "invalid blendtime value %.f specified in %s";
LABEL_9:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_toggle.cpp", v8, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, v6->constant.floatValue, AnimDebugName) )
    __debugbreak();
  return 0;
}

/*
==============
XAnimToggleAll_Register
==============
*/
void XAnimToggleAll_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimToggleAll>::ms_typeInfo);
}

/*
==============
XAnimToggle_Register
==============
*/
void XAnimToggle_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimToggle>::ms_typeInfo);
}

/*
==============
XAnimToggle_ShouldSetChildIndexWeight
==============
*/
bool XAnimToggle_ShouldSetChildIndexWeight(XAnimTree *pTree, XAnimSubTreeID subTreeID, int childIndex)
{
  __int64 v3; 
  const XAnim_s *SubTreeAnims; 
  bool result; 

  v3 = childIndex;
  result = 1;
  if ( !pTree->owner[0] )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(pTree, subTreeID);
    if ( SubTreeAnims->entries[v3].numAnims )
    {
      if ( (SubTreeAnims->entries[v3].animParent.flags & 0x800) != 0 )
        return 0;
    }
  }
  return result;
}

