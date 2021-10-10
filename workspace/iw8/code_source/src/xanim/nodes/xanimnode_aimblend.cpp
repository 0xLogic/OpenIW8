/*
==============
XAnim4PtBlend_Register
==============
*/

void XAnim4PtBlend_Register(void)
{
  ?XAnim4PtBlend_Register@@YAXXZ();
}

/*
==============
XAnim9PtBlend_FindAndCopyNodeState
==============
*/

void __fastcall XAnim9PtBlend_FindAndCopyNodeState(XAnim9PtBlend *pNode, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  ?XAnim9PtBlend_FindAndCopyNodeState@@YAXPEAUXAnim9PtBlend@@PEBUDObj@@PEAUXAnimInfo@@G@Z(pNode, obj, animInfo, animInfoIndex);
}

/*
==============
XAnim9PtBlend_Register
==============
*/

void XAnim9PtBlend_Register(void)
{
  ?XAnim9PtBlend_Register@@YAXXZ();
}

/*
==============
XAnim4PtBlend_Destroy
==============
*/
void XAnim4PtBlend_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnim4PtBlend_Update
==============
*/
void XAnim4PtBlend_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  unsigned int GraftAnimIndex; 
  float v12; 
  unsigned int v13; 
  scr_string_t AnimsetNameByIndex; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  double v19; 
  float v20; 
  double v21; 
  double v22; 
  unsigned __int8 v23; 
  float v24; 
  signed int v25; 
  float v30; 
  float v31; 
  float v32; 
  scr_string_t aliases[6]; 
  int outAnimIndices[8]; 

  Sys_ProfBeginNamedEvent(0xFF808080, "XAnim4PtBlend_Update");
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 85, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 86, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 87, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 96, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
    __debugbreak();
  v12 = 0.0;
  if ( animInfo->state.goalWeight == 0.0 )
  {
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *((float *)nodeData + 3), 0, LINEAR);
  }
  else
  {
    if ( !*((_BYTE *)nodeData + 76) || *((_DWORD *)nodeData + 17) != *((unsigned __int16 *)nodeData + 30) || *((_DWORD *)nodeData + 18) != *((unsigned __int16 *)nodeData + 31) )
    {
      if ( animInfo->children )
      {
        v13 = XAnimGetGraftAnimIndex(animInfoIndex);
        XAnimClearTreeGoalWeightsStrict(obj->tree, v13, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex, *((float *)nodeData + 3), NULL, LINEAR);
      }
      *((_BYTE *)nodeData + 76) = 0;
      AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(*((_DWORD *)nodeData + 16));
      aliases[0] = scr_const.aim_2;
      aliases[1] = scr_const.aim_4;
      aliases[2] = scr_const.aim_6;
      aliases[3] = scr_const.aim_8;
      aliases[4] = scr_const.aim_5;
      if ( BG_Animset_GetAddonAnimsFromState(AnimsetNameByIndex, *((_DWORD *)nodeData + 17), *((_DWORD *)nodeData + 18), ANIMSTATE_AIMSET, aliases, 5, outAnimIndices) )
      {
        *((_DWORD *)nodeData + 10) = outAnimIndices[0];
        *((_DWORD *)nodeData + 11) = outAnimIndices[1];
        *((_DWORD *)nodeData + 12) = outAnimIndices[2];
        *((_DWORD *)nodeData + 13) = outAnimIndices[3];
        *((_DWORD *)nodeData + 14) = outAnimIndices[4];
        *((_WORD *)nodeData + 30) = *((_WORD *)nodeData + 34);
        *((_WORD *)nodeData + 31) = *((_WORD *)nodeData + 36);
        *((_BYTE *)nodeData + 76) = 1;
      }
    }
    if ( *((_BYTE *)nodeData + 76) )
    {
      v15 = *((float *)nodeData + 2);
      v16 = dtime * *((float *)nodeData + 6);
      v17 = (float)(COERCE_FLOAT(*((_DWORD *)nodeData + 9) & _xmm) * dtime) + v16;
      v18 = I_fclamp(*(float *)nodeData, *((float *)nodeData + 7) - v17, v17 + *((float *)nodeData + 7));
      *((float *)nodeData + 7) = *(float *)&v18;
      v19 = I_fclamp(*(float *)&v18, COERCE_FLOAT(*((_DWORD *)nodeData + 4) ^ _xmm), *((float *)nodeData + 4));
      *((float *)nodeData + 7) = *(float *)&v19;
      if ( *((_BYTE *)nodeData + 77) )
        v20 = *(float *)&v19 / *((float *)nodeData + 4);
      else
        v20 = 0.0;
      v21 = I_fclamp(*((float *)nodeData + 1), *((float *)nodeData + 8) - v16, v16 + *((float *)nodeData + 8));
      *((float *)nodeData + 8) = *(float *)&v21;
      v22 = I_fclamp(*(float *)&v21, COERCE_FLOAT(*((_DWORD *)nodeData + 5) ^ _xmm), *((float *)nodeData + 5));
      *((float *)nodeData + 8) = *(float *)&v22;
      v23 = *((_BYTE *)nodeData + 77);
      if ( v23 )
        v24 = *(float *)&v22 / *((float *)nodeData + 5);
      else
        v24 = 0.0;
      v25 = *((_DWORD *)nodeData + 14);
      _XMM10 = LODWORD(FLOAT_1_0);
      if ( v25 >= 0 )
      {
        _XMM0 = v23;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm10, xmm6, xmm2
        }
        XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, v25, *(float *)&_XMM0, v15, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      }
      v30 = 0.0;
      v31 = 0.0;
      v32 = 0.0;
      if ( v20 <= 0.0 )
      {
        if ( v20 < 0.0 )
          LODWORD(v31) = LODWORD(v20) ^ _xmm;
      }
      else
      {
        v30 = v20;
      }
      if ( v24 <= 0.0 )
      {
        if ( v24 < 0.0 )
          LODWORD(v32) = LODWORD(v24) ^ _xmm;
      }
      else
      {
        v12 = v24;
      }
      XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, *((_DWORD *)nodeData + 10), v12, v15, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, *((_DWORD *)nodeData + 11), v30, v15, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, *((_DWORD *)nodeData + 12), v31, v15, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
      XAnimSetGoalWeight(obj, GraftAnimIndex, animInfo->subTreeID, *((_DWORD *)nodeData + 13), v32, v15, 1.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
XAnim4PtBlend_Read
==============
*/
void XAnim4PtBlend_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  int p; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 153, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 76) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 77) = p;
  Float = MemFile_ReadFloat(memFile);
  *(float *)nodeData = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 1) = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 9) = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 7) = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 8) = *(float *)&v8;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 10) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 11) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 12) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 13) = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 14) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 30) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 31) = p;
}

/*
==============
XAnim4PtBlend_Write
==============
*/
void XAnim4PtBlend_Write(void *nodeData, MemoryFile *memFile)
{
  int p; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 179, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  LOBYTE(p) = *((_BYTE *)nodeData + 76);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 77);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteFloat(memFile, *(float *)nodeData);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 1));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 9));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 7));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 8));
  p = *((_DWORD *)nodeData + 10);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 11);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 12);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 13);
  MemFile_WriteData(memFile, 4ui64, &p);
  p = *((_DWORD *)nodeData + 14);
  MemFile_WriteData(memFile, 4ui64, &p);
  LOWORD(p) = *((_WORD *)nodeData + 30);
  MemFile_WriteData(memFile, 2ui64, &p);
  LOWORD(p) = *((_WORD *)nodeData + 31);
  MemFile_WriteData(memFile, 2ui64, &p);
}

/*
==============
XAnim4PtBlend_Init
==============
*/
void XAnim4PtBlend_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  const XAnimTypeFields *TypeFieldsForNodeType; 

  v3 = animIndex;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 206, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 207, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v3].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 212, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.max_yaw, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 4) = 1110704128;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.max_pitch, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 5) = 1110704128;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.blendtime, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 2) = 1041865114;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.blendouttime, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 3) = 1041865114;
  if ( !XAnimFindConstantBindParameterByFieldName(anims, v3, scr_const.max_aim_delta, TypeFieldsForNodeType) )
    *((_DWORD *)nodeData + 6) = 1127481344;
  *(_QWORD *)nodeData = 0i64;
  *(_QWORD *)((char *)nodeData + 28) = 0i64;
  *((_DWORD *)nodeData + 15) = 0;
  *((_WORD *)nodeData + 38) = 0;
  *((_DWORD *)nodeData + 9) = 0;
}

/*
==============
XAnim4PtBlend_PostParse
==============
*/
char XAnim4PtBlend_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  const char *AnimDebugName; 
  bool v5; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  const XAnimParameterBinding *v8; 
  __int64 v10; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 253, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 254, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v10, anims->size) )
      __debugbreak();
  }
  if ( anims->entries[v2].numAnims >= 4u )
  {
    TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v2].nodeType);
    if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 263, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
      __debugbreak();
    ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.max_yaw, TypeFieldsForNodeType);
    if ( ConstantBindParameterByFieldNameAllBindings && ConstantBindParameterByFieldNameAllBindings->constant.floatValue < 0.0 )
    {
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 267, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "max yaw must be greater than zero.");
    }
    else
    {
      v8 = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.max_pitch, TypeFieldsForNodeType);
      if ( !v8 || v8->constant.floatValue >= 0.0 )
        return 1;
      v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "max pitch must be greater than zero.");
    }
  }
  else
  {
    AnimDebugName = XAnimGetAnimDebugName(anims, v2);
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 258, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace %s.  4Pt Blend node requires at least 4 anims.", AnimDebugName);
  }
  if ( v5 )
    __debugbreak();
  return 0;
}

/*
==============
XAnim9PtBlend_Destroy
==============
*/
void XAnim9PtBlend_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnim9PtBlend_Update
==============
*/
void XAnim9PtBlend_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  char *v10; 
  char v11; 
  unsigned int v12; 
  scr_string_t AnimsetNameByIndex; 
  _DWORD *v14; 
  __int64 v15; 
  XAnimInfo *v16; 
  unsigned __int16 dataOffset; 
  XAnimNodeTypeID nodeTypeID; 
  unsigned __int16 children; 
  unsigned __int16 *p_notifyChild; 
  __int64 v21; 
  const XAnim_s *SubTreeAnims; 
  char *v23; 
  int v24; 
  scr_string_t v25; 
  const char *v26; 
  int v27; 
  scr_string_t v28; 
  const char *v29; 
  float v30; 
  float v31; 
  __int64 v32; 
  unsigned __int8 v34; 
  __int64 v35; 
  float v39; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  __int128 v53; 
  float v54; 
  double v55; 
  float v56; 
  float v59; 
  __int64 v61; 
  float v62; 
  __int64 v63; 
  scr_string_t v64; 
  int v65; 
  int v66; 
  signed __int64 v67; 
  float *v68; 
  unsigned int v69; 
  unsigned __int16 v70; 
  bool v71; 
  unsigned __int8 *v72; 
  __int64 v73; 
  float v76; 
  char v77; 
  __int64 curveID; 
  scr_string_t *aliases; 
  char v80; 
  int v82; 
  unsigned int graftAnimIndex; 
  int v84; 
  double v87; 
  signed __int64 v88; 
  vec3_t forward; 
  scr_string_t v90[8]; 
  __m256i v91; 

  v10 = (char *)nodeData;
  Sys_ProfBeginNamedEvent(0xFF808080, "XAnim9PtBlend_Update");
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 437, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 438, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 439, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  graftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 457, ASSERT_TYPE_ASSERT, "(obj->tree)", (const char *)&queryFormat, "obj->tree") )
    __debugbreak();
  v11 = v10[113];
  if ( animInfo->state.goalWeight == 0.0 )
  {
    v80 = 1;
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, animInfo->state.goalTime, 0, LINEAR);
    v10[112] = 0;
    if ( animInfo->state.weight == 0.0 )
      goto LABEL_103;
  }
  else
  {
    v80 = 0;
    if ( !v11 || *((_DWORD *)v10 + 26) != *((unsigned __int16 *)v10 + 46) || *((_DWORD *)v10 + 27) != *((unsigned __int16 *)v10 + 47) )
    {
      if ( animInfo->children )
      {
        v12 = XAnimGetGraftAnimIndex(animInfoIndex);
        XAnimClearChildGoalWeightsWithParent(obj->tree, v12, animInfo->subTreeID, animInfoIndex, animInfo->state.goalTime, LINEAR);
        v10[112] = 0;
      }
      v10[113] = 0;
      AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(*((_DWORD *)v10 + 25));
      v90[0] = scr_const.aim_1;
      v90[1] = scr_const.aim_2;
      v90[2] = scr_const.aim_3;
      v90[3] = scr_const.aim_4;
      v90[4] = scr_const.aim_6;
      v90[5] = scr_const.aim_7;
      v90[6] = scr_const.aim_8;
      v90[7] = scr_const.aim_9;
      v14 = v10 + 20;
      if ( BG_Animset_GetAddonAnimsFromState(AnimsetNameByIndex, *((_DWORD *)v10 + 26), *((_DWORD *)v10 + 27), ANIMSTATE_AIMSET, 1, animInfo->subTreeID, v90, 8, (int *)v10 + 5) )
      {
        v15 = 0i64;
        while ( *v14 != -1 )
        {
          ++v15;
          ++v14;
          if ( v15 >= 8 )
          {
            *((_WORD *)v10 + 46) = *((_WORD *)v10 + 52);
            *((_WORD *)v10 + 47) = *((_WORD *)v10 + 54);
            v10[113] = 1;
            break;
          }
        }
      }
    }
  }
  if ( v10[113] )
  {
    if ( !v11 )
    {
      v16 = XAnimGetAnimInfo(animInfo->parent);
      dataOffset = XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo->dataOffset;
      nodeTypeID = XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo->nodeTypeID;
      children = v16->children;
      if ( children )
      {
        while ( 1 )
        {
          if ( (children & 0x8000u) != 0 )
          {
            v21 = 32 * (children & 0x7FFFu);
            if ( (unsigned int)v21 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
            {
              LODWORD(aliases) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
              LODWORD(curveID) = 32 * (children & 0x7FFF);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", curveID, aliases) )
                __debugbreak();
            }
            p_notifyChild = (unsigned __int16 *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v21];
          }
          else
          {
            if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
            {
              LODWORD(aliases) = g_xanimMemoryGlobals.infoPoolSize;
              LODWORD(curveID) = children;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", curveID, aliases) )
                __debugbreak();
            }
            p_notifyChild = &g_xanimMemoryGlobals.infoPool[children].notifyChild;
          }
          SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)p_notifyChild[8]);
          if ( children != animInfoIndex && SubTreeAnims->entries[p_notifyChild[3]].nodeType == nodeTypeID )
            break;
          children = p_notifyChild[5];
          if ( !children )
            goto LABEL_43;
        }
        v23 = (char *)p_notifyChild + dataOffset;
        *((_DWORD *)v10 + 13) = *((_DWORD *)v23 + 13);
        *((_DWORD *)v10 + 14) = *((_DWORD *)v23 + 14);
        *((_DWORD *)v10 + 15) = *((_DWORD *)v23 + 15);
        *((_DWORD *)v10 + 16) = *((_DWORD *)v23 + 16);
        v10[115] = v23[115];
        *((_DWORD *)v10 + 17) = *((_DWORD *)v23 + 17);
        *((float *)v10 + 18) = *((float *)v23 + 18);
        *((float *)v10 + 19) = *((float *)v23 + 19);
        *((_DWORD *)v10 + 20) = *((_DWORD *)v23 + 20);
        *((float *)v10 + 21) = *((float *)v23 + 21);
        *((float *)v10 + 22) = *((float *)v23 + 22);
      }
    }
LABEL_43:
    v24 = *((_DWORD *)v10 + 2);
    if ( (!v24 || v24 == scr_const._) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 487, ASSERT_TYPE_ASSERT, "(pNode->m_Degrees != ( static_cast< scr_string_t >( 0 ) ) && pNode->m_Degrees != scr_const._)", (const char *)&queryFormat, "pNode->m_Degrees != NULL_SCR_STRING && pNode->m_Degrees != scr_const._") )
      __debugbreak();
    v25 = *((_DWORD *)v10 + 2);
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
      __debugbreak();
    v26 = SL_ConvertToString(v25);
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 489, ASSERT_TYPE_ASSERT, "(range)", (const char *)&queryFormat, "range") )
      __debugbreak();
    v27 = *((_DWORD *)v10 + 4);
    if ( (!v27 || v27 == scr_const._) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 491, ASSERT_TYPE_ASSERT, "(pNode->m_AimAnims != ( static_cast< scr_string_t >( 0 ) ) && pNode->m_AimAnims != scr_const._)", (const char *)&queryFormat, "pNode->m_AimAnims != NULL_SCR_STRING && pNode->m_AimAnims != scr_const._") )
      __debugbreak();
    v28 = *((_DWORD *)v10 + 4);
    if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_node_api.h", 235, ASSERT_TYPE_ASSERT, "(hash != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "hash != NULL_SCR_STRING") )
      __debugbreak();
    v29 = SL_ConvertToString(v28);
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 493, ASSERT_TYPE_ASSERT, "(aim_anims)", (const char *)&queryFormat, "aim_anims") )
      __debugbreak();
    v30 = *((float *)v10 + 1);
    *(float *)&v87 = v30;
    v31 = *(float *)v10;
    HIDWORD(v87) = *(_DWORD *)v10;
    if ( !v10[114] )
    {
      v30 = 0.0;
      v87 = 0.0;
      v31 = 0.0;
    }
    if ( v30 == *((float *)v10 + 17) && v31 == *((float *)v10 + 18) && *((float *)v10 + 19) == 0.0 )
    {
      v32 = 0i64;
    }
    else
    {
      *(double *)(v10 + 68) = v87;
      *((_DWORD *)v10 + 19) = 0;
      v32 = 0i64;
      *(_QWORD *)(v10 + 52) = 0i64;
      v10[115] = 0;
    }
    _XMM10 = LODWORD(dtime);
    if ( dtime > 0.0 )
    {
      if ( dtime >= 0.082000002 )
      {
        *((float *)v10 + 20) = *((float *)v10 + 17);
        *((float *)v10 + 21) = *((float *)v10 + 18);
        *(_QWORD *)(v10 + 52) = 0i64;
        *(_QWORD *)(v10 + 60) = 0i64;
      }
      else
      {
        v34 = v10[96];
        if ( v34 > 8u )
        {
          LODWORD(curveID) = v34;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 515, ASSERT_TYPE_ASSERT, "( pNode->m_AimState <= 8 )", "m_AimState [%d] in 9pt aim node is invalid", curveID) )
            __debugbreak();
        }
        v35 = (unsigned __int8)v10[96];
        _XMM13 = 0i64;
        do
        {
          __asm
          {
            vminss  xmm8, xmm10, cs:__real@3c8b4396
            vroundss xmm3, xmm13, xmm2, 1
          }
          v39 = (float)((float)((float)(*((float *)v10 + 18) - *((float *)v10 + 21)) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
          __asm { vroundss xmm3, xmm13, xmm2, 1 }
          v41 = (float)((float)((float)(*((float *)v10 + 17) - *((float *)v10 + 20)) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
          v42 = v39 - *((float *)v10 + 13);
          *(float *)&_XMM3 = v41 - *((float *)v10 + 14);
          *((float *)v10 + 13) = v39;
          *((float *)v10 + 14) = v41;
          v43 = _mm_cvtepi32_ps((__m128i)(unsigned __int8)v10[115]).m128_f32[0];
          v44 = (float)(v43 * v42) * (float)(1.0 / *(float *)&_XMM8);
          v45 = (float)(v43 * *(float *)&_XMM3) * (float)(1.0 / *(float *)&_XMM8);
          v10[115] = 1;
          v46 = v44 * TABLE_PD_PARAMS[v35].kd;
          v47 = v45 * TABLE_PD_PARAMS[v35].kd;
          v48 = (float)((float)(v46 + (float)(v39 * TABLE_PD_PARAMS[v35].kp)) * *(float *)&_XMM8) + *((float *)v10 + 15);
          v49 = (float)(v48 * *(float *)&_XMM8) + *((float *)v10 + 21);
          v50 = (float)((float)(v47 + (float)(v41 * TABLE_PD_PARAMS[v35].kp)) * *(float *)&_XMM8) + *((float *)v10 + 16);
          __asm { vroundss xmm2, xmm13, xmm3, 1 }
          *((float *)v10 + 20) = (float)((float)((float)((float)(v50 * *(float *)&_XMM8) + *((float *)v10 + 20)) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
          __asm { vroundss xmm3, xmm13, xmm2, 1 }
          *((float *)v10 + 21) = (float)((float)(v49 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
          *((float *)v10 + 15) = v48;
          *((float *)v10 + 16) = v50;
          v53 = _XMM10;
          *(float *)&v53 = *(float *)&_XMM10 - *(float *)&_XMM8;
          _XMM10 = v53;
        }
        while ( *(float *)&v53 > 0.0 );
      }
    }
    AngleVectors((const vec3_t *)(v10 + 80), &forward, NULL, NULL);
    v54 = acosf_0(forward.v[0]);
    v55 = I_fclamp(v54 * 0.63661975, 0.0, 1.0);
    v56 = *(float *)&v55;
    *(float *)&v55 = atan2f_0(COERCE_FLOAT(LODWORD(forward.v[2]) ^ _xmm), forward.v[1]);
    _XMM5 = 0i64;
    __asm { vroundss xmm1, xmm5, xmm3, 1 }
    v59 = (float)((float)(*(float *)&v55 * 0.15915494) - *(float *)&_XMM1) * 360.0;
    __asm { vroundss xmm0, xmm5, xmm1, 1 }
    v61 = (unsigned int)I_clamp((int)*(float *)&_XMM0, 0, 7);
    *(__m256i *)v90 = (__m256i)0i64;
    v91 = (__m256i)0i64;
    v62 = (float)(sinf_0(1.9634955 - (float)((float)(v59 - *(float *)&v26[4 * v61 + 4]) * 0.017453292)) * v56) * 1.0823922;
    *(double *)&_XMM0 = I_fclamp(v62, 0.0, 1.0);
    v63 = ((_BYTE)v61 + 1) & 7;
    *(float *)&v64 = (float)(v59 - *(float *)&v26[4 * v61 + 4]) * 0.022222223;
    v90[v63] = v64;
    *(float *)&v90[v61] = 1.0 - *(float *)&v64;
    v91.m256i_i32[v61] = _XMM0;
    v91.m256i_i32[v63] = _XMM0;
    v65 = 0;
    v84 = 0;
    v66 = 1;
    v82 = 1;
    v67 = v29 - (const char *)v90;
    v88 = v67;
    do
    {
      v68 = (float *)&v90[v32];
      v69 = *(_DWORD *)&v10[4 * *(unsigned int *)((char *)&v90[v32 + 1] + v67) + 20];
      if ( obj->tree->owner[0] == 1 || *v68 > 0.0 || ((unsigned __int8)v66 & (unsigned __int8)v10[112]) != 0 )
      {
        if ( v80 )
        {
          v70 = XAnimGetAnimInfo(animInfoIndex)->children;
          v71 = (v70 & 0x8000u) != 0;
          if ( v70 )
          {
            do
            {
              if ( v71 )
              {
                v73 = 32 * (v70 & 0x7FFFu);
                if ( (unsigned int)v73 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
                {
                  LODWORD(aliases) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
                  LODWORD(curveID) = 32 * (v70 & 0x7FFF);
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", curveID, aliases) )
                    __debugbreak();
                }
                v72 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v73];
              }
              else
              {
                if ( (unsigned int)v70 >= g_xanimMemoryGlobals.infoPoolSize )
                {
                  LODWORD(aliases) = g_xanimMemoryGlobals.infoPoolSize;
                  LODWORD(curveID) = v70;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", curveID, aliases) )
                    __debugbreak();
                }
                v72 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[v70];
              }
              if ( *((unsigned __int16 *)v72 + 3) == v69 )
              {
                _XMM0 = *(unsigned int *)v68;
                if ( *(float *)&_XMM0 == 0.0 )
                  LODWORD(_XMM6) = 0;
                else
                  __asm { vmaxss  xmm6, xmm0, xmm7 }
                XAnimSetTimeNode(obj->tree, v70, *(float *)&v91.m256i_i32[v32]);
                XAnimSetGoalWeightNode(obj, obj->tree, v70, *(float *)&_XMM6, 0.0, 0.0, (scr_string_t)0, 0, LINEAR, modelNameMap);
              }
              v70 = *((_WORD *)v72 + 5);
              v71 = (v70 & 0x8000u) != 0;
            }
            while ( v70 );
            v10 = (char *)nodeData;
            v65 = v84;
          }
          v66 = v82;
        }
        else
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "XAnim 9Pt Set");
          v76 = *v68;
          XAnimSetGoalWeightWithParent(obj, graftAnimIndex, animInfo->subTreeID, animInfoIndex, v69, *v68, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, modelNameMap);
          XAnimSetTime(obj->tree, graftAnimIndex, (const XAnimSubTreeID)animInfo->subTreeID, v69, *(float *)&v91.m256i_i32[v32]);
          Sys_ProfEndNamedEvent();
          v77 = v10[112];
          if ( v76 <= 0.0 )
            v10[112] = v77 & ~(1 << v65);
          else
            v10[112] = v77 | (1 << v65);
        }
      }
      v84 = ++v65;
      v66 = __ROL4__(v66, 1);
      v82 = v66;
      ++v32;
      v67 = v88;
    }
    while ( v65 < 8 );
  }
LABEL_103:
  Sys_ProfEndNamedEvent();
}

/*
==============
XAnim9PtBlend_Read
==============
*/
void XAnim9PtBlend_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  _DWORD *v6; 
  __int64 v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  int p; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 681, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 113) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 114) = p;
  Float = MemFile_ReadFloat(memFile);
  *(float *)nodeData = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 1) = *(float *)&v5;
  *((_DWORD *)nodeData + 2) = XAnimReadConstStringOfSize(memFile);
  *((_DWORD *)nodeData + 3) = XAnimReadConstStringOfSize(memFile);
  *((_DWORD *)nodeData + 4) = XAnimReadConstStringOfSize(memFile);
  v6 = (char *)nodeData + 20;
  v7 = 8i64;
  do
  {
    MemFile_ReadData(memFile, 4ui64, &p);
    *v6++ = p;
    --v7;
  }
  while ( v7 );
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 112) = p;
  v8 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 13) = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 14) = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 15) = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 16) = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 17) = *(float *)&v12;
  v13 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 18) = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 19) = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 20) = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 21) = *(float *)&v16;
  v17 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 22) = *(float *)&v17;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 46) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 47) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 115) = p;
}

/*
==============
XAnim9PtBlend_Write
==============
*/
void XAnim9PtBlend_Write(void *nodeData, MemoryFile *memFile)
{
  int *v4; 
  __int64 v5; 
  int p; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 717, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  LOBYTE(p) = *((_BYTE *)nodeData + 113);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 114);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteFloat(memFile, *(float *)nodeData);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 1));
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)nodeData + 2));
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)nodeData + 3));
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)nodeData + 4));
  v4 = (int *)((char *)nodeData + 20);
  v5 = 8i64;
  do
  {
    p = *v4;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++v4;
    --v5;
  }
  while ( v5 );
  LOBYTE(p) = *((_BYTE *)nodeData + 112);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 13));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 14));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 15));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 16));
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 68);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 80);
  LOWORD(p) = *((_WORD *)nodeData + 46);
  MemFile_WriteData(memFile, 2ui64, &p);
  LOWORD(p) = *((_WORD *)nodeData + 47);
  MemFile_WriteData(memFile, 2ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 115);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnim9PtBlend_Init
==============
*/
void XAnim9PtBlend_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 754, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 755, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  *(_QWORD *)nodeData = 0i64;
  *(_QWORD *)((char *)nodeData + 52) = 0i64;
  *(_QWORD *)((char *)nodeData + 60) = 0i64;
  *(_QWORD *)((char *)nodeData + 68) = 0i64;
  *(_QWORD *)((char *)nodeData + 76) = 0i64;
  *(_QWORD *)((char *)nodeData + 84) = 0i64;
  *((_DWORD *)nodeData + 23) = 0;
  *((_WORD *)nodeData + 56) = 0;
  *((_BYTE *)nodeData + 114) = 0;
}

/*
==============
XAnim9PtBlend_PostParse
==============
*/
char XAnim9PtBlend_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  bool v6; 
  scr_string_t v7; 
  const char *v8; 
  const XAnimParameterBinding *v9; 
  scr_string_t v10; 
  const XAnimFieldArray<unsigned int> *UIntFieldArray; 
  const char *v12; 
  __int64 v13; 
  unsigned int *i; 
  unsigned int v16; 
  const char *v17; 
  __int64 v18; 
  const char *v19; 
  const char *AnimDebugName; 
  __int64 v21; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 781, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 782, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v18, anims->size) )
      __debugbreak();
  }
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v2].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 785, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.degrees, TypeFieldsForNodeType);
  if ( ConstantBindParameterByFieldNameAllBindings )
  {
    v7 = truncate_cast<enum scr_string_t,unsigned int>(ConstantBindParameterByFieldNameAllBindings->constant.uint32Value);
    if ( !v7 || v7 == scr_const._ )
    {
      AnimDebugName = XAnimGetAnimDebugName(anims, v2);
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 797, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. Degrees property is required.", AnimDebugName);
    }
    else if ( XAnimNode_GetFloatFieldArray(v7)->size == 9 )
    {
      v9 = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.aim_anims, TypeFieldsForNodeType);
      if ( v9 )
      {
        v10 = truncate_cast<enum scr_string_t,unsigned int>(v9->constant.uint32Value);
        if ( !v10 || v10 == scr_const._ )
        {
          v19 = XAnimGetAnimDebugName(anims, v2);
          v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 819, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. Aim anims property is required.", v19);
        }
        else
        {
          UIntFieldArray = XAnimNode_GetUIntFieldArray(v10);
          if ( UIntFieldArray->size == 9 )
          {
            v13 = 0i64;
            for ( i = UIntFieldArray->values; *i < 8; ++i )
            {
              v13 = (unsigned int)(v13 + 1);
              if ( (unsigned int)v13 >= 9 )
                return 1;
            }
            v16 = UIntFieldArray->values[v13];
            v17 = XAnimGetAnimDebugName(anims, v2);
            LODWORD(v21) = v16;
            v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 836, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. Invalid aim anim index '%i'.", v17, v21);
          }
          else
          {
            v12 = XAnimGetAnimDebugName(anims, v2);
            LODWORD(v21) = 9;
            v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 827, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. 9pt blend requires %i aim anims.", v12, v21);
          }
        }
      }
      else
      {
        v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 812, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend. Aim anims is not specified.");
      }
    }
    else
    {
      v8 = XAnimGetAnimDebugName(anims, v2);
      LODWORD(v21) = 9;
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 805, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend '%s'. 9pt blend requires %i degrees.", v8, v21);
    }
  }
  else
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_aimblend.cpp", 790, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize 9pt blend. Degrees is not specified.");
  }
  if ( v6 )
    __debugbreak();
  return 0;
}

/*
==============
XAnim4PtBlend_Register
==============
*/
void XAnim4PtBlend_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnim4PtBlend>::ms_typeInfo);
}

/*
==============
XAnim9PtBlend_FindAndCopyNodeState
==============
*/
void XAnim9PtBlend_FindAndCopyNodeState(XAnim9PtBlend *pNode, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  unsigned __int16 children; 
  unsigned __int16 dataOffset; 
  XAnimNodeTypeID nodeTypeID; 
  unsigned __int16 *p_notifyChild; 
  __int64 v11; 
  const XAnim_s *SubTreeAnims; 
  float *v13; 
  __int64 v14; 
  __int64 v15; 

  children = XAnimGetAnimInfo(animInfo->parent)->children;
  dataOffset = XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo->dataOffset;
  nodeTypeID = XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo->nodeTypeID;
  if ( children )
  {
    while ( 1 )
    {
      if ( (children & 0x8000u) != 0 )
      {
        v11 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v11 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v15) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v14) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v14, v15) )
            __debugbreak();
        }
        p_notifyChild = (unsigned __int16 *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[v11];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v15) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v14) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        p_notifyChild = &g_xanimMemoryGlobals.infoPool[children].notifyChild;
      }
      SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)p_notifyChild[8]);
      if ( children != animInfoIndex && SubTreeAnims->entries[p_notifyChild[3]].nodeType == nodeTypeID )
        break;
      children = p_notifyChild[5];
      if ( !children )
        return;
    }
    v13 = (float *)((char *)p_notifyChild + dataOffset);
    pNode->m_PrevYawError = v13[13];
    pNode->m_PrevPitchError = v13[14];
    pNode->m_PrevYawVel = v13[15];
    pNode->m_PrevPitchVel = v13[16];
    pNode->m_bResetMultiplier = *((_BYTE *)v13 + 115);
    pNode->m_TargetAim.v[0] = v13[17];
    pNode->m_TargetAim.v[1] = v13[18];
    pNode->m_TargetAim.v[2] = v13[19];
    pNode->m_CurrentAim.v[0] = v13[20];
    pNode->m_CurrentAim.v[1] = v13[21];
    pNode->m_CurrentAim.v[2] = v13[22];
  }
}

/*
==============
XAnim9PtBlend_Register
==============
*/
void XAnim9PtBlend_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnim9PtBlend>::ms_typeInfo);
}

