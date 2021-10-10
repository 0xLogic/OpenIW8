/*
==============
XAnimRandom_Register
==============
*/

void XAnimRandom_Register(void)
{
  ?XAnimRandom_Register@@YAXXZ();
}

/*
==============
XAnimRandomLoop_Register
==============
*/

void XAnimRandomLoop_Register(void)
{
  ?XAnimRandomLoop_Register@@YAXXZ();
}

/*
==============
XAnimRandom_Init
==============
*/
void XAnimRandom_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 38, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType) )
    *(_DWORD *)nodeData = 1045220557;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.restart, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 4) = 1;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendcurve, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 2) = scr_const.xanimcurve_linear;
  *((_DWORD *)nodeData + 4) = 0;
  *((_BYTE *)nodeData + 20) = 0;
}

/*
==============
XAnimRandom_Destroy
==============
*/
void XAnimRandom_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimRandom_Update
==============
*/
void XAnimRandom_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  XAnimCurveID ID; 
  XAnimCurveID curveID; 
  const XAnim_s *SubTreeAnims; 
  unsigned int GraftAnimIndex; 
  int v15; 
  unsigned int v16; 
  int NumChildren; 
  unsigned int v18; 
  unsigned int pHoldrand; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 62, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 63, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 64, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  ID = XAnimCurve_GetID(*((const scr_string_t *)nodeData + 2));
  curveID = ID;
  if ( animInfo->state.goalWeight == 0.0 )
  {
    *((_BYTE *)nodeData + 20) = 0;
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, animInfo->state.goalTime, 0, ID);
  }
  else if ( !*((_BYTE *)nodeData + 20) || *((_DWORD *)nodeData + 4) != *((_DWORD *)nodeData + 3) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
    GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
    v15 = *((_DWORD *)nodeData + 3);
    v16 = GraftAnimIndex;
    *((_DWORD *)nodeData + 4) = v15;
    pHoldrand = v15 + obj->entnum + GraftAnimIndex - 1;
    BG_srand(&pHoldrand);
    NumChildren = XAnimGetNumChildren(SubTreeAnims, animInfo->animIndex);
    v18 = BG_irand(0, NumChildren, &pHoldrand);
    LODWORD(SubTreeAnims) = XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, v18);
    XAnimClearChildGoalWeights(obj->tree, v16, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex, *(float *)nodeData, curveID);
    XAnimSetGoalWeight(obj, v16, animInfo->subTreeID, (unsigned int)SubTreeAnims, 1.0, *(float *)nodeData, 1.0, animInfo->notifyName, animInfo->notifyType, *((unsigned __int8 *)nodeData + 4), curveID, modelNameMap);
    *((_BYTE *)nodeData + 20) = 1;
  }
}

/*
==============
XAnimRandom_Read
==============
*/
void XAnimRandom_Read(void *nodeData, MemoryFile *memFile)
{
  int p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 20) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 3) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 4) = p;
}

/*
==============
XAnimRandom_Write
==============
*/
void XAnimRandom_Write(void *nodeData, MemoryFile *memFile)
{
  int p; 

  LOBYTE(p) = *((_BYTE *)nodeData + 20);
  MemFile_WriteData(memFile, 1ui64, &p);
  p = *((_DWORD *)nodeData + 3);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 4);
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
XAnimRandom_PostParse
==============
*/
char XAnimRandom_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  const XAnimParameterBinding *v6; 
  float floatValue; 
  int v8; 
  const char *fmt; 
  const char *AnimDebugName; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 119, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
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
      v8 = 129;
      fmt = "blendtime is in seconds, not milliseconds.  are you sure you want a blendtime of %.4f seconds for %s?";
      goto LABEL_9;
    }
    return 1;
  }
  AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
  v8 = 124;
  fmt = "invalid blendtime value %.f specified in %s";
LABEL_9:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", v8, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, v6->constant.floatValue, AnimDebugName) )
    __debugbreak();
  return 0;
}

/*
==============
XAnimRandomLoop_Init
==============
*/
void XAnimRandomLoop_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 170, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType) )
    *(_DWORD *)nodeData = 1045220557;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.restart, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 4) = 1;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.norepeat, TypeFieldsForNodeType) )
    *((_BYTE *)nodeData + 5) = 0;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, animIndex, scr_const.blendcurve, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 2) = scr_const.xanimcurve_linear;
  *((_DWORD *)nodeData + 4) = XAnimGetNumChildren(anims, animIndex);
  *(_QWORD *)((char *)nodeData + 28) = 0i64;
  *(_QWORD *)((char *)nodeData + 20) = 0i64;
  *((_BYTE *)nodeData + 36) = 0;
}

/*
==============
XAnimRandomLoop_Destroy
==============
*/
void XAnimRandomLoop_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimRandomLoop_Update
==============
*/
void XAnimRandomLoop_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime)
{
  XAnimCurveID ID; 
  XAnimCurveID curveID; 
  const XAnim_s *SubTreeAnims; 
  unsigned int GraftAnimIndex; 
  bool v13; 
  unsigned int graftIndex; 
  int v15; 
  int v16; 
  float currentAnimTime; 
  unsigned int animIndex; 
  int NumChildren; 
  unsigned int v20; 
  unsigned int ChildAt; 
  const char *AnimDebugName; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 208, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 209, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 210, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  ID = XAnimCurve_GetID(*((const scr_string_t *)nodeData + 2));
  curveID = ID;
  if ( animInfo->state.goalWeight == 0.0 )
  {
    *((_BYTE *)nodeData + 36) = 0;
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, animInfo->state.goalTime, 0, ID);
  }
  else
  {
    SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)animInfo->subTreeID);
    GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
    v13 = 0;
    graftIndex = GraftAnimIndex;
    v15 = SubTreeAnims->entries[animInfo->animIndex].animParent.flags & 3;
    if ( !*((_BYTE *)nodeData + 36) || *((_DWORD *)nodeData + 6) != *((_DWORD *)nodeData + 3) )
    {
      v16 = *((_DWORD *)nodeData + 3);
      *((_DWORD *)nodeData + 5) = v16;
      *((_DWORD *)nodeData + 6) = v16;
      *((_DWORD *)nodeData + 5) = v16 + obj->entnum + GraftAnimIndex - 1;
      BG_srand((unsigned int *)nodeData + 5);
      *((_BYTE *)nodeData + 36) = 1;
      *(_QWORD *)((char *)nodeData + 28) = 0i64;
      v13 = 1;
    }
    if ( v15 )
    {
      if ( v13 || (currentAnimTime = animInfo->state.currentAnimTime, currentAnimTime >= 1.0) || currentAnimTime < *((float *)nodeData + 8) )
      {
        animIndex = animInfo->animIndex;
        NumChildren = XAnimGetNumChildren(SubTreeAnims, animIndex);
        if ( *((_BYTE *)nodeData + 5) )
          --NumChildren;
        v20 = BG_irand(0, NumChildren, (unsigned int *)nodeData + 5);
        if ( *((_BYTE *)nodeData + 5) && v20 >= *((_DWORD *)nodeData + 4) )
          ++v20;
        *((_DWORD *)nodeData + 4) = v20;
        ChildAt = XAnimGetChildAt(SubTreeAnims, animIndex, v20);
        if ( !XAnimIsLeafNode(SubTreeAnims, ChildAt) )
        {
          AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, ChildAt);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 279, ASSERT_TYPE_ASSERT, "( XAnimIsLeafNode( anims, childIndex ) )", "Child of random node must be a leaf. '%s'", AnimDebugName) )
            __debugbreak();
        }
        XAnimClearChildGoalWeights(obj->tree, graftIndex, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex, *(float *)nodeData, curveID);
        XAnimSetGoalWeight(obj, graftIndex, animInfo->subTreeID, ChildAt, 1.0, *(float *)nodeData, 1.0, animInfo->notifyName, animInfo->notifyType, *((unsigned __int8 *)nodeData + 4), curveID, NULL);
        currentAnimTime = 0.0;
      }
      *((float *)nodeData + 8) = currentAnimTime;
    }
    else
    {
      XAnimRandomLoop_UpdateNotSynced(obj, animInfo, animInfoIndex, SubTreeAnims, (XAnimRandomLoop *)nodeData, curveID, graftIndex, dtime, v13);
    }
  }
}

/*
==============
XAnimRandomLoop_Read
==============
*/
void XAnimRandomLoop_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 3) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 4) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 5) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 6) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 7) = p;
  Float = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 8) = *(float *)&Float;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 36) = p;
}

/*
==============
XAnimRandomLoop_Write
==============
*/
void XAnimRandomLoop_Write(void *nodeData, MemoryFile *memFile)
{
  int p; 

  p = *((_DWORD *)nodeData + 3);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 4);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 5);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 6);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 7);
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 8));
  LOBYTE(p) = *((_BYTE *)nodeData + 36);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnimRandomLoop_PostParse
==============
*/
char XAnimRandomLoop_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  const XAnimParameterBinding *v6; 
  float floatValue; 
  int v8; 
  const char *fmt; 
  const char *AnimDebugName; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 357, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
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
      v8 = 367;
      fmt = "blendtime is in seconds, not milliseconds.  are you sure you want a blendtime of %.4f seconds for %s?";
      goto LABEL_9;
    }
    return 1;
  }
  AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
  v8 = 362;
  fmt = "invalid blendtime value %.f specified in %s";
LABEL_9:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", v8, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, fmt, v6->constant.floatValue, AnimDebugName) )
    __debugbreak();
  return 0;
}

/*
==============
XAnimRandomLoop_Register
==============
*/
void XAnimRandomLoop_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimRandomLoop>::ms_typeInfo);
}

/*
==============
XAnimRandomLoop_UpdateNotSynced
==============
*/
void XAnimRandomLoop_UpdateNotSynced(const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, const XAnim_s *anims, XAnimRandomLoop *pNode, const XAnimCurveID curveID, unsigned int graftIndex, float dtime, bool initialized)
{
  int m_remainingTime; 
  unsigned int animIndex; 
  int NumChildren; 
  unsigned int v15; 
  unsigned int ChildAt; 
  int LengthMsec; 
  const char *AnimDebugName; 
  float v19; 
  int v20; 
  float v21; 
  const char *v22; 

  m_remainingTime = pNode->m_remainingTime;
  if ( !initialized )
  {
    m_remainingTime -= (int)(float)(dtime * 1000.0);
    pNode->m_remainingTime = m_remainingTime;
  }
  if ( m_remainingTime <= 0 )
  {
    do
    {
      animIndex = animInfo->animIndex;
      NumChildren = XAnimGetNumChildren(anims, animIndex);
      if ( pNode->m_bNoRepeat )
        --NumChildren;
      v15 = BG_irand(0, NumChildren, &pNode->m_nextSeed);
      if ( pNode->m_bNoRepeat && v15 >= pNode->m_previousChildIndex )
        ++v15;
      pNode->m_previousChildIndex = v15;
      ChildAt = XAnimGetChildAt(anims, animIndex, v15);
      LengthMsec = XAnimGetLengthMsec(anims, ChildAt);
      if ( LengthMsec <= 0 )
      {
        AnimDebugName = XAnimGetAnimDebugName(anims, ChildAt);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 316, ASSERT_TYPE_ASSERT, "( animLength > 0 )", "Animation length is 0, is the animation missing? '%s'", AnimDebugName) )
          __debugbreak();
      }
      v19 = (float)(int)abs32(pNode->m_remainingTime);
      v20 = pNode->m_remainingTime + LengthMsec;
      pNode->m_remainingTime = v20;
      v21 = v19 / (float)LengthMsec;
    }
    while ( v20 <= 0 );
    if ( (v21 < 0.0 || v21 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 321, ASSERT_TYPE_ASSERT, "( startTime >= 0.f && startTime <= 1.f )", "time %.2f must be between 0 and 1 for looping anims.", v21) )
      __debugbreak();
    if ( !XAnimIsLeafNode(anims, ChildAt) )
    {
      v22 = XAnimGetAnimDebugName(anims, ChildAt);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 322, ASSERT_TYPE_ASSERT, "( XAnimIsLeafNode( anims, childIndex ) )", "Child of random node must be a leaf. '%s'", v22) )
        __debugbreak();
    }
    XAnimClearChildGoalWeights(obj->tree, graftIndex, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex, pNode->m_blendTime, curveID);
    XAnimSetGoalWeight(obj, graftIndex, animInfo->subTreeID, ChildAt, 1.0, pNode->m_blendTime, 1.0, animInfo->notifyName, animInfo->notifyType, pNode->m_bRestart, curveID, NULL);
    XAnimSetTime(obj->tree, graftIndex, (const XAnimSubTreeID)animInfo->subTreeID, ChildAt, v21);
  }
}

/*
==============
XAnimRandom_Register
==============
*/
void XAnimRandom_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimRandom>::ms_typeInfo);
}

