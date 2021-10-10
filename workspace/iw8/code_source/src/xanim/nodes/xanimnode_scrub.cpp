/*
==============
XAnimScrub1D_Register
==============
*/

void XAnimScrub1D_Register(void)
{
  ?XAnimScrub1D_Register@@YAXXZ();
}

/*
==============
XAnimScrub1D_Destroy
==============
*/
void XAnimScrub1D_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimScrub1D_Update
==============
*/
void XAnimScrub1D_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  unsigned __int16 v7; 
  XAnimInfo *v8; 
  const DObj *v9; 
  unsigned int v11; 
  unsigned __int16 InfoIndex; 
  XAnimTree *v13; 
  const XAnim_s *SubTreeAnims; 
  int NumChildren; 
  __int16 v16; 
  unsigned int v17; 
  unsigned int ChildAt; 
  unsigned __int16 children; 
  unsigned int v20; 
  char v21; 
  XAnimInfo *v22; 
  float v23; 
  float v24; 
  XModelNameMap *cachedModelNameMap; 
  unsigned int v26; 
  float v27; 
  XAnimInfo *v28; 
  float v29; 
  float v30; 
  XAnimTree *tree; 
  unsigned int graftAnimIndex; 

  v7 = animInfoIndex;
  v8 = animInfo;
  v9 = obj;
  if ( !*((_BYTE *)nodeData + 24) )
    return;
  if ( !isInstantInit && !animInfo->children && !*((_BYTE *)nodeData + 23) )
  {
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, 0.0, 1, LINEAR);
    return;
  }
  if ( animInfo->state.weight == 0.0 && animInfo->state.goalWeight == 0.0 )
  {
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, 0.0, 1, LINEAR);
    return;
  }
  v11 = XAnimGetGraftAnimIndex(animInfoIndex);
  graftAnimIndex = v11;
  InfoIndex = XAnimGetInfoIndex(v9->tree, v11, (const XAnimSubTreeID)v8->subTreeID, v8->animIndex);
  if ( v8->state.goalWeight == 0.0 && InfoIndex != v7 )
    return;
  v13 = v9->tree;
  tree = v9->tree;
  if ( !v9->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 123, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(v13, (const XAnimSubTreeID)v8->subTreeID);
  NumChildren = XAnimGetNumChildren(SubTreeAnims, v8->animIndex);
  v16 = *((_WORD *)nodeData + 10);
  if ( v16 < 1 || NumChildren <= 0 )
    goto LABEL_33;
  v17 = v16 - 1;
  if ( v17 >= NumChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 133, ASSERT_TYPE_ASSERT, "(childIndex < static_cast<uint>( numChildren ))", "%s\n\tXAnimScrub1D_Update invalid 'childindex'=(%d) parameter. Node has (%d) child nodes only.", "childIndex < static_cast<uint>( numChildren )", v16 - 1, NumChildren) )
    __debugbreak();
  ChildAt = XAnimGetChildAt(SubTreeAnims, v8->animIndex, v17);
  children = v8->children;
  v20 = ChildAt;
  v21 = 1;
  if ( children )
  {
    do
    {
      v22 = XAnimGetAnimInfo(children);
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 143, ASSERT_TYPE_ASSERT, "( childInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "childInfo", "nullptr", NULL, NULL) )
        __debugbreak();
      if ( v22->animIndex == v20 )
      {
        v21 = 0;
      }
      else if ( v22->state.goalWeight != 0.0 )
      {
        v23 = (float)*((unsigned int *)nodeData + 2);
        XAnimClearTreeGoalWeightsNode(tree, children, v23 * 0.001, 0, LINEAR);
      }
      children = v22->next;
    }
    while ( children );
    v8 = animInfo;
    v9 = obj;
    v7 = animInfoIndex;
    if ( !v21 )
    {
      v13 = tree;
      v11 = graftAnimIndex;
LABEL_33:
      cachedModelNameMap = modelNameMap;
      goto LABEL_34;
    }
  }
  v24 = *((float *)nodeData + 4);
  cachedModelNameMap = modelNameMap;
  if ( v24 <= 0.0 )
  {
    v13 = tree;
    v11 = graftAnimIndex;
  }
  else
  {
    v26 = v20;
    v11 = graftAnimIndex;
    v27 = (float)*((unsigned int *)nodeData + 2);
    XAnimSetCompleteGoalWeight(v9, graftAnimIndex, (const XAnimSubTreeID)v8->subTreeID, v26, v24, v27 * 0.001, 1.0, (scr_string_t)0, 1u, 0, LINEAR, modelNameMap);
    v13 = tree;
  }
  if ( !*((_BYTE *)nodeData + 22) )
    goto LABEL_42;
LABEL_34:
  v28 = XAnimGetAnimInfo(v8->children);
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 169, ASSERT_TYPE_ASSERT, "(childAnimInfo)", (const char *)&queryFormat, "childAnimInfo") )
    __debugbreak();
  if ( v28->state.goalWeight == 0.0 || v28->state.weight == 0.0 )
  {
    if ( v28->state.weight == 0.0 )
    {
      XAnimClearTreeGoalWeightsNode(v9->tree, v7, 0.0, 1, LINEAR);
      return;
    }
  }
  else
  {
LABEL_42:
    XAnimSetChildGoalWeights(v9, v9->tree, v11, (const XAnimSubTreeID)v8->subTreeID, v8->animIndex, *((float *)nodeData + 4), 0.0, 0.0, (scr_string_t)0, *((float *)nodeData + 4) > 0.0, LINEAR, cachedModelNameMap);
  }
  v29 = *((float *)nodeData + 1);
  if ( *(float *)nodeData >= v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 193, ASSERT_TYPE_ASSERT, "( node->timeRange[0] ) < ( node->timeRange[1] )", "%s < %s\n\t%g, %g", "node->timeRange[0]", "node->timeRange[1]", *(float *)nodeData, v29) )
    __debugbreak();
  v30 = (float)(*((float *)nodeData + 3) - *(float *)nodeData) / (float)(*((float *)nodeData + 1) - *(float *)nodeData);
  I_fclamp(v30, 0.0, 1.0);
  XAnimScrub1D_SetChildTimes_r(v13, v11, v8, v30, 0.0);
}

/*
==============
XAnimScrub1D_Read
==============
*/
void XAnimScrub1D_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  int p; 

  MemFile_ReadData(memFile, 8ui64, nodeData);
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 2) = p;
  Float = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 3) = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 4) = *(float *)&v5;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 24) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 22) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 10) = p;
}

/*
==============
XAnimScrub1D_Write
==============
*/
void XAnimScrub1D_Write(void *nodeData, MemoryFile *memFile)
{
  int p; 

  MemFile_WriteData(memFile, 8ui64, nodeData);
  p = *((_DWORD *)nodeData + 2);
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 3));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 4));
  LOBYTE(p) = *((_BYTE *)nodeData + 24);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 22);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOWORD(p) = *((_WORD *)nodeData + 10);
  MemFile_WriteData(memFile, 2ui64, &p);
}

/*
==============
XAnimScrub1D_Init
==============
*/
void XAnimScrub1D_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 236, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 237, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( anims->subTreeID > 0x80u || XAnimScrub1D_ValidateConstParameters(anims, animIndex, (const vec2_t *)nodeData) )
  {
    *((_DWORD *)nodeData + 4) = 1065353216;
    *((_BYTE *)nodeData + 24) = 1;
  }
  else
  {
    *((_BYTE *)nodeData + 24) = 0;
  }
}

/*
==============
XAnimScrub1D_PostParse
==============
*/
bool XAnimScrub1D_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  const char *AnimDebugName; 
  float v8; 
  __int64 v9; 
  vec2_t timeRange; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 258, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 259, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v9, anims->size) )
      __debugbreak();
  }
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v2].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 263, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimScrubTimeRange, TypeFieldsForNodeType);
  if ( !ConstantBindParameterByFieldNameAllBindings )
  {
    AnimDebugName = XAnimGetAnimDebugName(anims, v2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 268, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize anim tree node '%s'. The time range 'timerange=' parameter is not specified.", AnimDebugName) )
    {
      __debugbreak();
      return 0;
    }
    return 0;
  }
  if ( !XAnimScrub1D_ValidateFlags_r(anims, v2, anims->entries[v2].nodeType, anims->debugAnimNames[v2]) )
    return 0;
  v8 = ConstantBindParameterByFieldNameAllBindings->constant.vec3Value.v[1];
  LODWORD(timeRange.v[0]) = ConstantBindParameterByFieldNameAllBindings->constant.uint32Value;
  timeRange.v[1] = v8;
  return XAnimScrub1D_ValidateConstParameters(anims, v2, &timeRange);
}

/*
==============
XAnimScrub1D_PrintDebug
==============
*/
void XAnimScrub1D_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  unsigned __int64 v9; 
  __int64 v10; 

  v6 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 293, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_BYTE *)nodeData + 24) )
  {
    v9 = v6;
    if ( depth > 0 )
    {
      v10 = (unsigned int)depth;
      do
      {
        Com_sprintfPos_truncate(buffer, v9, inoutPos, "  ");
        --v10;
      }
      while ( v10 );
    }
    Com_sprintfPos_truncate(buffer, v9, inoutPos, "   ^5timeRange={%.3f,%.3f}, timeValue=%.3f, weightValue=%.3f\n", *(float *)nodeData, *((float *)nodeData + 1), *((float *)nodeData + 3), *((float *)nodeData + 4));
  }
}

/*
==============
XAnimScrub1D_Register
==============
*/
void XAnimScrub1D_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimScrub1D>::ms_typeInfo);
}

/*
==============
XAnimScrub1D_SetChildTimes_r
==============
*/
void XAnimScrub1D_SetChildTimes_r(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimInfo *info, float time, float rate)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 i; 
  unsigned __int8 *v10; 
  __int64 v11; 
  const XAnim_s *v12; 
  __int64 v13; 
  __int64 v14; 

  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)info->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 62, ASSERT_TYPE_ASSERT, "( anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !graftAnimIndex && XAnimIsGraftNode(SubTreeAnims, info->animIndex) )
    graftAnimIndex = info->animIndex;
  for ( i = info->children; i; i = *((_WORD *)v10 + 5) )
  {
    if ( (i & 0x8000u) != 0 )
    {
      v11 = 32 * (i & 0x7FFFu);
      if ( (unsigned int)v11 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
      {
        LODWORD(v14) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
        LODWORD(v13) = 32 * (i & 0x7FFF);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v13, v14) )
          __debugbreak();
      }
      v10 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v11];
    }
    else
    {
      if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
      {
        LODWORD(v14) = g_xanimMemoryGlobals.infoPoolSize;
        LODWORD(v13) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v10 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
    }
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 72, ASSERT_TYPE_ASSERT, "( childInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "childInfo", "nullptr", NULL, NULL) )
      __debugbreak();
    v12 = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)*((_WORD *)v10 + 8));
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 75, ASSERT_TYPE_ASSERT, "( childAnims ) != ( nullptr )", "%s != %s\n\t%p, %p", "childAnims", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( XAnimIsLeafNode(v12, *((unsigned __int16 *)v10 + 3)) )
    {
      v10[77] |= 0x10u;
      XAnimSetTimeNode(tree, i, time);
    }
    else
    {
      XAnimScrub1D_SetChildTimes_r(tree, graftAnimIndex, (const XAnimInfo *)v10, time, rate);
    }
    XAnimSetAnimRateNode(tree, i, rate);
  }
}

/*
==============
XAnimScrub1D_ValidateConstParameters
==============
*/
char XAnimScrub1D_ValidateConstParameters(const XAnim_s *anims, unsigned int animIndex, const vec2_t *timeRange)
{
  const char *AnimDebugName; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 357, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (timeRange->v[0] == 0.0 || timeRange->v[1] != 0.0) && timeRange->v[0] <= timeRange->v[1] )
    return 1;
  AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 361, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize scrub1d node '%s'. Range is invalid.", AnimDebugName) )
    __debugbreak();
  return 0;
}

/*
==============
XAnimScrub1D_ValidateFlags_r
==============
*/
char XAnimScrub1D_ValidateFlags_r(XAnim_s *anims, unsigned int animIndex, XAnimNodeTypeID scrub1DType, const char *scrub1DName)
{
  __int64 v8; 
  const char *AnimDebugName; 
  bool v10; 
  unsigned int v11; 
  __int64 ChildAt; 
  XAnimEntry *v13; 
  const char *v15; 
  const char *v16; 

  v8 = 2 * (animIndex + 5i64);
  if ( ((__int64)anims->entries[animIndex].parts & 3) != 0 )
  {
    AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 320, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize anim tree node '%s'. Node is marked with a time sync keyword, but ancestor '%s' is a scrub1d node that explicitly sets time.", AnimDebugName, scrub1DName);
  }
  else
  {
    v11 = 0;
    if ( !anims->entries[animIndex].numAnims )
      return 1;
    while ( 1 )
    {
      ChildAt = XAnimGetChildAt(anims, animIndex, v11);
      v13 = &anims->entries[ChildAt];
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 328, ASSERT_TYPE_ASSERT, "( childAnimEntry ) != ( nullptr )", "%s != %s\n\t%p, %p", "childAnimEntry", "nullptr", NULL, NULL) )
        __debugbreak();
      if ( scrub1DType == v13->nodeType )
        break;
      if ( XAnimIsLooped(anims, ChildAt) )
      {
        v15 = XAnimGetAnimDebugName(anims, ChildAt);
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 340, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize anim tree node '%s'. Node is a looping animation, but ancestor '%s' is of type 'scrub1d'.  Animations driven by a 'scrub1d' node must not be looping.", v15, scrub1DName);
        goto LABEL_14;
      }
      if ( !XAnimScrub1D_ValidateFlags_r(anims, ChildAt, scrub1DType, scrub1DName) )
        return 0;
      if ( ++v11 >= *((unsigned __int16 *)&anims->size + 4 * v8 + 1) )
        return 1;
    }
    v16 = XAnimGetAnimDebugName(anims, ChildAt);
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 333, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize anim tree node '%s'. Node is scrub1d, but ancestor '%s' is also scrub1d.  Both would attempt to set time on their common descendants.", v16, scrub1DName);
  }
LABEL_14:
  if ( v10 )
    __debugbreak();
  return 0;
}

