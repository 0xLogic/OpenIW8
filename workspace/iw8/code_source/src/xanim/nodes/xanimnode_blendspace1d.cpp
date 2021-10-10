/*
==============
XAnimBlendSpace_SetAnims
==============
*/

void __fastcall XAnimBlendSpace_SetAnims(DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, scr_string_t animArray)
{
  ?XAnimBlendSpace_SetAnims@@YAXPEAUDObj@@IW4XAnimSubTreeID@@IW4scr_string_t@@@Z(obj, graftAnimIndex, subTreeID, animIndex, animArray);
}

/*
==============
XAnimBlendSpace_GetLength
==============
*/

double __fastcall XAnimBlendSpace_GetLength(const XAnim_s *anims, unsigned int animIndex)
{
  double result; 

  *(float *)&result = ?XAnimBlendSpace_GetLength@@YAMPEBUXAnim_s@@I@Z(anims, animIndex);
  return result;
}

/*
==============
XAnimBlendSpace_IsBlendspaceNode
==============
*/

bool __fastcall XAnimBlendSpace_IsBlendspaceNode(const XAnim_s *anims, const unsigned int animIndex)
{
  return ?XAnimBlendSpace_IsBlendspaceNode@@YA_NPEBUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimBlendSpace1D_CalcWeights
==============
*/

bool __fastcall XAnimBlendSpace1D_CalcWeights(const XAnimFieldArray<float> *coords, float value, vec2_t *weights, bool *outOutsideRange, unsigned int *outChildIndex)
{
  return ?XAnimBlendSpace1D_CalcWeights@@YA_NPEBU?$XAnimFieldArray@M@@MAEATvec2_t@@PEA_NPEAI@Z(coords, value, weights, outOutsideRange, outChildIndex);
}

/*
==============
XAnimBlendSpace_GetNotifyParameters
==============
*/

void __fastcall XAnimBlendSpace_GetNotifyParameters(const XAnimInfo *animInfo, XAnimOwner owner, scr_string_t notifyName, bool allAnimsNotify, unsigned int numAnims, float *weights, unsigned int *outNotifyTypes, scr_string_t *outNotifyNames, unsigned int *outMaxAnimIndex)
{
  ?XAnimBlendSpace_GetNotifyParameters@@YAXPEBUXAnimInfo@@W4XAnimOwner@@W4scr_string_t@@_NIPEAMPEAIPEAW43@5@Z(animInfo, owner, notifyName, allAnimsNotify, numAnims, weights, outNotifyTypes, outNotifyNames, outMaxAnimIndex);
}

/*
==============
XAnimBlendSpace_HandleServerNotifyChild
==============
*/

void __fastcall XAnimBlendSpace_HandleServerNotifyChild(const XAnimTree *tree, XAnimInfo *animInfo, unsigned int graftIndex, bool allAnimsNotify, const unsigned int *childAnimIndex, unsigned int maxWeightAnimIndex)
{
  ?XAnimBlendSpace_HandleServerNotifyChild@@YAXPEBUXAnimTree@@PEAUXAnimInfo@@I_NPEBII@Z(tree, animInfo, graftIndex, allAnimsNotify, childAnimIndex, maxWeightAnimIndex);
}

/*
==============
XAnimBlendSpace_GetLengthMsec
==============
*/

int __fastcall XAnimBlendSpace_GetLengthMsec(const XAnim_s *anims, unsigned int anim)
{
  return ?XAnimBlendSpace_GetLengthMsec@@YAHPEBUXAnim_s@@I@Z(anims, anim);
}

/*
==============
XAnimBlendSpace1D_Register
==============
*/

void XAnimBlendSpace1D_Register(void)
{
  ?XAnimBlendSpace1D_Register@@YAXXZ();
}

/*
==============
XAnimBlendSpace_ToggleUpdate
==============
*/

void __fastcall XAnimBlendSpace_ToggleUpdate(DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, bool enableUpdate)
{
  ?XAnimBlendSpace_ToggleUpdate@@YAXPEAUDObj@@IW4XAnimSubTreeID@@I_N@Z(obj, graftAnimIndex, subTreeID, animIndex, enableUpdate);
}

/*
==============
XAnimBlendSpace1D_Destroy
==============
*/
void XAnimBlendSpace1D_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimBlendSpace1D_Update
==============
*/
void XAnimBlendSpace1D_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime, const bool isInstantInit, XModelNameMap *modelNameMap)
{
  const DObj *v9; 
  unsigned int v11; 
  unsigned int v12; 
  char v13; 
  unsigned __int16 InfoIndex; 
  float v15; 
  int v16; 
  float v17; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  scr_string_t v19; 
  unsigned int size; 
  float v21; 
  const XAnimFieldArray<unsigned int> *UIntFieldArray; 
  int *v23; 
  __int64 v24; 
  __m256i v25; 
  __int128 v26; 
  const XAnimTree *tree; 
  const XAnim_s *SubTreeAnims; 
  unsigned int v29; 
  unsigned int *v30; 
  unsigned int ChildAt; 
  bool v32; 
  unsigned int v33; 
  unsigned int v34; 
  XAnimSubTreeID subTreeID; 
  XAnimTree *v36; 
  unsigned int v37; 
  XAnimTree *v38; 
  BOOL notifyType; 
  scr_string_t v40; 
  scr_string_t notifyName; 
  unsigned int v42; 
  char v43; 
  bool v44; 
  float v45; 
  unsigned int v46; 
  vec2_t *p_weights; 
  unsigned int v48; 
  __int64 v50; 
  unsigned int v52; 
  __int64 v53; 
  XAnimTree *v54; 
  unsigned int v55; 
  unsigned int v56; 
  scr_string_t v57; 
  float v58; 
  char v59; 
  float v60; 
  unsigned int v61; 
  bool v62; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  unsigned int v67; 
  unsigned int v70; 
  XModelNameMap *v71; 
  unsigned int v72; 
  __int64 v73; 
  __int64 rate; 
  bool outOutsideRange[8]; 
  unsigned int outChildIndex[2]; 
  unsigned int graftAnimIndex[2]; 
  __int64 v78; 
  unsigned int childAnimIndex[2]; 
  XModelNameMap *cachedModelNameMap; 
  vec2_t weights; 
  unsigned int v82; 
  unsigned int animIndex[195]; 

  v44 = *((_BYTE *)nodeData + 32) == 0;
  cachedModelNameMap = modelNameMap;
  v9 = obj;
  *(_QWORD *)childAnimIndex = obj;
  if ( v44 )
    return;
  v11 = XAnimGetGraftAnimIndex(animInfoIndex);
  v44 = animInfo->state.weight == 0.0;
  v12 = v11;
  graftAnimIndex[0] = v11;
  if ( v44 )
  {
    if ( animInfo->state.goalWeight == 0.0 )
    {
      XAnimClearTreeGoalWeightsNode(v9->tree, animInfoIndex, 0.0, 1, LINEAR);
      return;
    }
    goto LABEL_7;
  }
  if ( animInfo->state.goalWeight != 0.0 )
  {
LABEL_7:
    v13 = 0;
    goto LABEL_8;
  }
  v13 = 1;
LABEL_8:
  if ( *((_BYTE *)nodeData + 21) && v13 )
  {
    XAnimClearTreeGoalWeightsNode(v9->tree, animInfoIndex, animInfo->state.goalTime, 0, LINEAR);
    return;
  }
  InfoIndex = XAnimGetInfoIndex(v9->tree, v12, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex);
  if ( (animInfo->state.goalWeight != 0.0 || InfoIndex == animInfoIndex) && !*((_BYTE *)nodeData + 33) )
  {
    v15 = (float)*((unsigned int *)nodeData + 2);
    v16 = *((_DWORD *)nodeData + 3);
    v17 = v15 * 0.001;
    if ( (!v16 || v16 == scr_const._) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 409, ASSERT_TYPE_ASSERT, "(node->coords != ( static_cast< scr_string_t >( 0 ) ) && node->coords != scr_const._)", (const char *)&queryFormat, "node->coords != NULL_SCR_STRING && node->coords != scr_const._") )
      __debugbreak();
    FloatFieldArray = XAnimNode_GetFloatFieldArray((scr_string_t)*((_DWORD *)nodeData + 3));
    if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 412, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
      __debugbreak();
    v19 = *((_DWORD *)nodeData + 7);
    size = FloatFieldArray->size;
    v21 = *((float *)nodeData + 6);
    if ( v19 )
    {
      UIntFieldArray = XAnimNode_GetUIntFieldArray(v19);
      if ( !UIntFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 421, ASSERT_TYPE_ASSERT, "(childAnimArray)", (const char *)&queryFormat, "childAnimArray") )
        __debugbreak();
      v23 = (int *)&v82;
      v24 = 6i64;
      do
      {
        v23 += 32;
        v25 = *(__m256i *)&UIntFieldArray->size;
        v26 = *(_OWORD *)&UIntFieldArray->values[27];
        UIntFieldArray = (const XAnimFieldArray<unsigned int> *)((char *)UIntFieldArray + 128);
        *((__m256i *)v23 - 4) = v25;
        *((__m256i *)v23 - 3) = *(__m256i *)&UIntFieldArray[-1].values[168];
        *((__m256i *)v23 - 2) = *(__m256i *)&UIntFieldArray[-1].values[176];
        *((_OWORD *)v23 - 2) = *(_OWORD *)&UIntFieldArray[-1].values[184];
        *((_OWORD *)v23 - 1) = v26;
        --v24;
      }
      while ( v24 );
      *v23 = UIntFieldArray->size;
    }
    else
    {
      tree = v9->tree;
      if ( !v9->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 429, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
        __debugbreak();
      SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)animInfo->subTreeID);
      if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 432, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
        __debugbreak();
      v29 = 0;
      if ( size )
      {
        v30 = animIndex;
        do
        {
          ChildAt = XAnimGetChildAt(SubTreeAnims, animInfo->animIndex, v29++);
          *v30++ = ChildAt;
        }
        while ( v29 < size );
        v12 = graftAnimIndex[0];
      }
      v9 = *(const DObj **)childAnimIndex;
      v82 = size;
    }
    outOutsideRange[0] = 0;
    *(_QWORD *)outChildIndex = 0i64;
    weights.v[0] = 0.0;
    weights.v[1] = 0.0;
    v32 = XAnimBlendSpace1D_CalcWeights(FloatFieldArray, v21, &weights, outOutsideRange, outChildIndex);
    if ( outOutsideRange[0] )
    {
      v33 = outChildIndex[0];
      if ( outChildIndex[0] >= size )
      {
        LODWORD(v73) = outChildIndex[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 450, ASSERT_TYPE_ASSERT, "(unsigned)( childIndex[0] ) < (unsigned)( numPoints )", "childIndex[0] doesn't index numPoints\n\t%i not in [0, %i)", v73, size) )
          __debugbreak();
      }
      v34 = animInfo->animIndex;
      subTreeID = animInfo->subTreeID;
      v36 = v9->tree;
      v37 = animIndex[v33];
      childAnimIndex[0] = v37;
      XAnimClearChildGoalWeights(v36, v12, subTreeID, v34, v17, LINEAR);
      v38 = v9->tree;
      notifyType = 0;
      v40 = animInfo->notifyName;
      notifyName = 0;
      LODWORD(v78) = 0;
      v42 = -1;
      outChildIndex[0] = 0;
      v43 = v38->owner[0];
      if ( v43 == 1 )
      {
        v44 = animInfo->notifyType == 0;
      }
      else
      {
        if ( v43 )
          goto LABEL_48;
        v44 = v40 == 0;
      }
      if ( v44 )
      {
LABEL_60:
        XAnimSetGoalWeight(v9, graftAnimIndex[0], animInfo->subTreeID, v37, 1.0, v17, animInfo->state.rate, notifyName, notifyType, 0, LINEAR, cachedModelNameMap);
        XAnimBlendSpace_HandleServerNotifyChild(v9->tree, animInfo, graftAnimIndex[0], *((_BYTE *)nodeData + 20), childAnimIndex, v42);
LABEL_90:
        *((float *)nodeData + 9) = v21;
        return;
      }
LABEL_48:
      if ( *((_BYTE *)nodeData + 20) )
      {
        if ( weights.v[0] > 0.0 )
        {
          notifyType = v43 == 1;
          notifyName = v40;
        }
      }
      else
      {
        v45 = FLOAT_N3_4028235e38;
        v46 = -1;
        p_weights = &weights;
        v48 = 0;
        do
        {
          _XMM0 = LODWORD(p_weights->v[0]);
          v50 = v48;
          p_weights = (vec2_t *)((char *)p_weights + 4);
          if ( *(float *)&_XMM0 <= v45 )
            v50 = v46;
          ++v48;
          v46 = v50;
          __asm { vmaxss  xmm2, xmm0, xmm1 }
          v45 = *(float *)&_XMM2;
        }
        while ( !v48 );
        if ( *(float *)&_XMM2 > 0.0 )
        {
          if ( v43 )
          {
            childAnimIndex[v50 - 2] = v43 == 1;
            notifyType = v78;
            outChildIndex[v50] = v40;
            notifyName = outChildIndex[0];
          }
          else if ( v40 )
          {
            v42 = v50;
          }
        }
      }
      goto LABEL_60;
    }
    if ( !v32 )
      goto LABEL_90;
    v52 = outChildIndex[0];
    if ( outChildIndex[0] >= size )
    {
      LODWORD(v73) = outChildIndex[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( childIndex[0] ) < (unsigned)( numPoints )", "childIndex[0] doesn't index numPoints\n\t%i not in [0, %i)", v73, size) )
        __debugbreak();
    }
    v53 = outChildIndex[1];
    if ( outChildIndex[1] >= size )
    {
      LODWORD(rate) = size;
      LODWORD(v73) = outChildIndex[1];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( childIndex[1] ) < (unsigned)( numPoints )", "childIndex[1] doesn't index numPoints\n\t%i not in [0, %i)", v73, rate) )
        __debugbreak();
    }
    v54 = v9->tree;
    v55 = -1;
    v56 = animIndex[v53];
    v57 = animInfo->notifyName;
    v58 = weights.v[1];
    v59 = v9->tree->owner[0];
    v60 = weights.v[0];
    childAnimIndex[1] = v56;
    v61 = animIndex[v52];
    childAnimIndex[0] = v61;
    v78 = 0i64;
    *(_QWORD *)outChildIndex = 0i64;
    if ( v59 == 1 )
    {
      v62 = animInfo->notifyType == 0;
    }
    else
    {
      if ( v59 )
        goto LABEL_73;
      v62 = v57 == 0;
    }
    if ( v62 )
    {
LABEL_89:
      XAnimClearChildGoalWeights(v54, graftAnimIndex[0], (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex, v17, LINEAR);
      v70 = v61;
      v71 = cachedModelNameMap;
      v72 = graftAnimIndex[0];
      XAnimSetGoalWeight(v9, graftAnimIndex[0], animInfo->subTreeID, v70, v60, v17, *((float *)nodeData + 4), (scr_string_t)outChildIndex[0], v78, 0, LINEAR, cachedModelNameMap);
      XAnimSetGoalWeight(v9, v72, animInfo->subTreeID, v56, v58, v17, *((float *)nodeData + 4), (scr_string_t)outChildIndex[1], HIDWORD(v78), 0, LINEAR, v71);
      XAnimBlendSpace_HandleServerNotifyChild(v9->tree, animInfo, v72, *((_BYTE *)nodeData + 20), childAnimIndex, v55);
      goto LABEL_90;
    }
LABEL_73:
    if ( *((_BYTE *)nodeData + 20) )
    {
      if ( weights.v[0] > 0.0 )
      {
        LODWORD(v78) = v59 == 1;
        outChildIndex[0] = v57;
      }
      if ( weights.v[1] > 0.0 )
      {
        HIDWORD(v78) = v59 == 1;
        outChildIndex[1] = v57;
      }
    }
    else
    {
      _XMM3 = LODWORD(FLOAT_N3_4028235e38);
      LODWORD(v64) = -1;
      v65 = 0i64;
      do
      {
        v66 = (unsigned int)(v65 + 1);
        v67 = v65;
        if ( weights.v[v65] <= *(float *)&_XMM3 )
          v67 = v64;
        v64 = (unsigned int)v66;
        __asm
        {
          vmaxss  xmm2, xmm3, xmm1
          vmaxss  xmm4, xmm2, xmm0
        }
        if ( weights.v[v66] <= *(float *)&_XMM2 )
          v64 = v67;
        v65 = (unsigned int)(v65 + 2);
        _XMM3 = _XMM4;
      }
      while ( (unsigned int)v65 < 2 );
      if ( *(float *)&_XMM4 > 0.0 )
      {
        if ( v59 )
        {
          childAnimIndex[v64 - 2] = v59 == 1;
          outChildIndex[v64] = v57;
        }
        else if ( v57 )
        {
          v55 = v64;
        }
      }
    }
    goto LABEL_89;
  }
}

/*
==============
XAnimBlendSpace1D_Read
==============
*/
void XAnimBlendSpace1D_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  int p; 

  *((_DWORD *)nodeData + 7) = 0;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 2) = p;
  Float = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 6) = *(float *)&Float;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 32) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 33) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 20) = p;
  MemFile_ReadData(memFile, 8ui64, nodeData);
  *((_DWORD *)nodeData + 3) = XAnimReadConstStringOfSize(memFile);
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( (_BYTE)p )
    *((_DWORD *)nodeData + 7) = XAnimReadConstStringOfSize(memFile);
}

/*
==============
XAnimBlendSpace1D_Write
==============
*/
void XAnimBlendSpace1D_Write(void *nodeData, MemoryFile *memFile)
{
  int v2; 
  int p; 

  v2 = *((_DWORD *)nodeData + 7);
  p = *((_DWORD *)nodeData + 2);
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 6));
  LOBYTE(p) = *((_BYTE *)nodeData + 32);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 33);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 20);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 8ui64, nodeData);
  XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)nodeData + 3));
  LOBYTE(p) = v2 != 0;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v2 )
    XAnimWriteConstStringOfSize(memFile, *((scr_string_t *)nodeData + 7));
}

/*
==============
XAnimBlendSpace1D_Init
==============
*/
void XAnimBlendSpace1D_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  const XAnimTypeFields *TypeFieldsForNodeType; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 158, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 159, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( anims->subTreeID > 0x80u || XAnimBlendSpace1D_ValidateConstParameters(anims, v3, *((const scr_string_t *)nodeData + 3), (const vec2_t *)nodeData) )
  {
    *((_DWORD *)nodeData + 7) = 0;
    *((_WORD *)nodeData + 16) = 1;
    TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v3].nodeType);
    if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 180, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
      __debugbreak();
    if ( !XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v3, scr_const.xanimBlendSpaceRate, TypeFieldsForNodeType) )
      *((_DWORD *)nodeData + 4) = 1065353216;
  }
  else
  {
    *((_BYTE *)nodeData + 32) = 0;
  }
}

/*
==============
XAnimBlendSpace1D_PostParse
==============
*/
bool XAnimBlendSpace1D_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  const XAnimTypeFields *TypeFieldsForNodeType; 
  const XAnimParameterBinding *ConstantBindParameterByFieldNameAllBindings; 
  const XAnimParameterBinding *v6; 
  bool v7; 
  __int64 int32Value; 
  float v10; 
  __int64 v11; 
  vec2_t range; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 119, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v11) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v11, anims->size) )
      __debugbreak();
  }
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v2].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 125, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  ConstantBindParameterByFieldNameAllBindings = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimBlendSpaceCoords, TypeFieldsForNodeType);
  v6 = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimBlendSpace1DRange, TypeFieldsForNodeType);
  if ( !v6 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 132, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace. Range not specified.");
LABEL_14:
    if ( v7 )
      __debugbreak();
    return 0;
  }
  if ( !ConstantBindParameterByFieldNameAllBindings )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 138, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace. Coords is not specified.");
    goto LABEL_14;
  }
  int32Value = ConstantBindParameterByFieldNameAllBindings->constant.int32Value;
  v10 = v6->constant.vec3Value.v[1];
  LODWORD(range.v[0]) = v6->constant.uint32Value;
  range.v[1] = v10;
  if ( (unsigned int)int32Value > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum scr_string_t __cdecl truncate_cast_impl<enum scr_string_t,unsigned int>(unsigned int)", "signed", int32Value, "unsigned", (unsigned int)int32Value) )
    __debugbreak();
  return XAnimBlendSpace1D_ValidateConstParameters(anims, v2, (const scr_string_t)int32Value, &range);
}

/*
==============
XAnimBlendSpace1D_PrintDebug
==============
*/
void XAnimBlendSpace1D_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  const dvar_t *v10; 
  unsigned int flags; 
  char v12; 
  __int64 v13; 
  const char *v14; 

  v6 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 627, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 628, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 629, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 630, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 631, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_xanim_display_blendspaces_info;
  if ( !DCONST_DVARBOOL_xanim_display_blendspaces_info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_display_blendspaces_info") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v10->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v10->name) )
      __debugbreak();
  }
  if ( v10->current.enabled )
  {
    if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 639, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    v12 = *((_BYTE *)nodeData + 32);
    if ( v12 )
    {
      if ( depth > 0 )
      {
        v13 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v6, inoutPos, "  ");
          --v13;
        }
        while ( v13 );
        v12 = *((_BYTE *)nodeData + 32);
      }
      v14 = "false";
      if ( v12 )
        v14 = "true";
      Com_sprintfPos_truncate(buffer, v6, inoutPos, "  [oldValue: %.2f - curValue: %.2f - init: %s]\n", *((float *)nodeData + 9), *((float *)nodeData + 6), v14);
    }
  }
}

/*
==============
XAnimBlendSpace1D_CalcWeights
==============
*/
char XAnimBlendSpace1D_CalcWeights(const XAnimFieldArray<float> *coords, float value, vec2_t *weights, bool *outOutsideRange, unsigned int *outChildIndex)
{
  unsigned int size; 
  char result; 
  __int64 v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  float v13; 
  float v14; 

  if ( !coords && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 299, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
    __debugbreak();
  if ( !outOutsideRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 300, ASSERT_TYPE_ASSERT, "(outOutsideRange)", (const char *)&queryFormat, "outOutsideRange") )
    __debugbreak();
  if ( !outChildIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 301, ASSERT_TYPE_ASSERT, "(outChildIndex)", (const char *)&queryFormat, "outChildIndex") )
    __debugbreak();
  size = coords->size;
  result = 0;
  *weights = 0i64;
  *(_QWORD *)outChildIndex = 0i64;
  if ( value <= coords->values[0] )
  {
    *outOutsideRange = 1;
    weights->v[0] = 1.0;
    return result;
  }
  v10 = size - 1;
  if ( value >= coords->values[v10] )
  {
    *outChildIndex = v10;
    *outOutsideRange = 1;
    weights->v[0] = 1.0;
    return 0;
  }
  *outOutsideRange = 0;
  v11 = 0;
  if ( !size )
    return 0;
  do
  {
    if ( value <= coords->values[v11] )
      break;
    ++v11;
  }
  while ( v11 < size );
  if ( !v11 )
    return 0;
  v12 = (unsigned __int8)(v11 - 1);
  LODWORD(v13) = COERCE_UNSIGNED_INT(coords->values[v11] - coords->values[v12]) & _xmm;
  if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 345, ASSERT_TYPE_ASSERT, "(segment > 0.f)", (const char *)&queryFormat, "segment > 0.f") )
    __debugbreak();
  v14 = COERCE_FLOAT(COERCE_UNSIGNED_INT(value - coords->values[v12]) & _xmm) / v13;
  weights->v[1] = v14;
  weights->v[0] = 1.0 - v14;
  *outChildIndex = (unsigned __int8)(v11 - 1);
  outChildIndex[1] = v11;
  return 1;
}

/*
==============
XAnimBlendSpace1D_Register
==============
*/
void XAnimBlendSpace1D_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimBlendSpace1D>::ms_typeInfo);
}

/*
==============
XAnimBlendSpace1D_ValidateConstParameters
==============
*/
char XAnimBlendSpace1D_ValidateConstParameters(const XAnim_s *anims, unsigned int animIndex, const scr_string_t coordsSrt, const vec2_t *range)
{
  __int64 v4; 
  bool v8; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  unsigned int size; 
  const char *v11; 
  __int64 v12; 
  unsigned int numAnims; 
  unsigned int ChildAt; 
  const char *v15; 
  const char *v16; 
  float v17; 
  int v18; 
  float *i; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *AnimDebugName; 
  int destPos[4]; 
  char dest[2048]; 

  v4 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 44, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (range->v[0] == 0.0 || range->v[1] != 0.0) && range->v[0] <= range->v[1] )
  {
    if ( !coordsSrt || coordsSrt == scr_const._ )
    {
      AnimDebugName = XAnimGetAnimDebugName(anims, v4);
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 54, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Coords property is required.", AnimDebugName);
    }
    else
    {
      FloatFieldArray = XAnimNode_GetFloatFieldArray(coordsSrt);
      size = FloatFieldArray->size;
      if ( FloatFieldArray->size >= 2 )
      {
        if ( size < 0x10 )
        {
          v12 = 0i64;
          numAnims = anims->entries[v4].numAnims;
          if ( numAnims >= size )
          {
            do
            {
              v17 = FloatFieldArray->values[v12];
              if ( v17 < range->v[0] || v17 > range->v[1] )
              {
                v21 = XAnimGetAnimDebugName(anims, v4);
                v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 96, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Out of range coordinate value '%f'. ", v21, v17);
                goto LABEL_29;
              }
              v12 = (unsigned int)(v12 + 1);
            }
            while ( (unsigned int)v12 < size );
            v18 = 1;
            for ( i = &FloatFieldArray->values[1]; *i > FloatFieldArray->values[v18 - 1]; ++i )
            {
              if ( ++v18 >= size )
                return 1;
            }
            v24 = XAnimGetAnimDebugName(anims, v4);
            v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 106, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Repeated coordinate values or not sorted. ", v24);
          }
          else
          {
            destPos[0] = 0;
            if ( numAnims )
            {
              do
              {
                ChildAt = XAnimGetChildAt(anims, v4, v12);
                v15 = XAnimGetAnimDebugName(anims, ChildAt);
                Com_sprintfPos_truncate(dest, 0x800ui64, destPos, "'%s', ", v15);
                numAnims = anims->entries[v4].numAnims;
                LODWORD(v12) = v12 + 1;
              }
              while ( (unsigned int)v12 < numAnims );
              size = FloatFieldArray->size;
            }
            v16 = XAnimGetAnimDebugName(anims, v4);
            v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 87, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. 1D Blendspace node requires at least %d child anim nodes. Found %d child anims: [%s]\n", v16, size, (unsigned __int16)numAnims, dest);
          }
        }
        else
        {
          v11 = XAnimGetAnimDebugName(anims, v4);
          v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 70, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Max number of node coordinates supported by the blendspace node is '%d'.", v11, 16);
        }
      }
      else
      {
        v23 = XAnimGetAnimDebugName(anims, v4);
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 63, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Blendspace requires at least two coordinates.", v23);
      }
    }
  }
  else
  {
    v22 = XAnimGetAnimDebugName(anims, v4);
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 48, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to initialize blendspace '%s'. Range is invalid.", v22);
  }
LABEL_29:
  if ( v8 )
    __debugbreak();
  return 0;
}

/*
==============
XAnimBlendSpace_GetLength
==============
*/
double XAnimBlendSpace_GetLength(const XAnim_s *anims, unsigned int animIndex)
{
  unsigned int ChildAt; 
  __int64 v6; 
  __int64 v7; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 737, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 738, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", animIndex, anims->size) )
    __debugbreak();
  if ( animIndex >= anims->size )
  {
    LODWORD(v7) = anims->size;
    LODWORD(v6) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 657, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace2D) && !XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace1D) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 740, ASSERT_TYPE_ASSERT, "(XAnimBlendSpace_IsBlendspaceNode( anims, animIndex ))", (const char *)&queryFormat, "XAnimBlendSpace_IsBlendspaceNode( anims, animIndex )") )
    __debugbreak();
  ChildAt = XAnimGetChildAt(anims, animIndex, 0);
  return XAnimGetLength(anims, ChildAt);
}

/*
==============
XAnimBlendSpace_GetLengthMsec
==============
*/
__int64 XAnimBlendSpace_GetLengthMsec(const XAnim_s *anims, unsigned int anim)
{
  unsigned int ChildAt; 
  double Length; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 737, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( anim >= anims->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 738, ASSERT_TYPE_ASSERT, "( animIndex ) < ( anims->size )", "%s < %s\n\t%i, %i", "animIndex", "anims->size", anim, anims->size) )
    __debugbreak();
  if ( !XAnimBlendSpace_IsBlendspaceNode(anims, anim) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 740, ASSERT_TYPE_ASSERT, "(XAnimBlendSpace_IsBlendspaceNode( anims, animIndex ))", (const char *)&queryFormat, "XAnimBlendSpace_IsBlendspaceNode( anims, animIndex )") )
    __debugbreak();
  ChildAt = XAnimGetChildAt(anims, anim, 0);
  Length = XAnimGetLength(anims, ChildAt);
  return (unsigned int)(int)(float)(*(float *)&Length * 1000.0);
}

/*
==============
XAnimBlendSpace_GetNotifyParameters
==============
*/
void XAnimBlendSpace_GetNotifyParameters(const XAnimInfo *animInfo, XAnimOwner owner, scr_string_t notifyName, bool allAnimsNotify, unsigned int numAnims, float *weights, unsigned int *outNotifyTypes, scr_string_t *outNotifyNames, unsigned int *outMaxAnimIndex)
{
  char v10; 
  unsigned int *v11; 
  __int64 v12; 
  unsigned int *v13; 
  int v14; 
  bool v15; 
  __int64 v16; 
  BOOL v17; 
  float v18; 
  float *v19; 
  float v21; 
  int v25; 
  int v26; 
  int v28; 
  float *v31; 
  int v33; 

  v10 = owner;
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 197, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !weights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 198, ASSERT_TYPE_ASSERT, "(weights)", (const char *)&queryFormat, "weights") )
    __debugbreak();
  v11 = outNotifyTypes;
  if ( !outNotifyTypes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 199, ASSERT_TYPE_ASSERT, "(outNotifyTypes)", (const char *)&queryFormat, "outNotifyTypes") )
    __debugbreak();
  if ( !outNotifyNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 200, ASSERT_TYPE_ASSERT, "(outNotifyNames)", (const char *)&queryFormat, "outNotifyNames") )
    __debugbreak();
  if ( !outMaxAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 201, ASSERT_TYPE_ASSERT, "(outMaxAnimIndex)", (const char *)&queryFormat, "outMaxAnimIndex") )
    __debugbreak();
  v12 = numAnims;
  memset_0(outNotifyTypes, 0, 4i64 * numAnims);
  memset_0(outNotifyNames, 0, 4i64 * numAnims);
  v13 = outMaxAnimIndex;
  v14 = -1;
  *outMaxAnimIndex = -1;
  if ( v10 == 1 )
  {
    v15 = animInfo->notifyType == 0;
    goto LABEL_20;
  }
  if ( !v10 )
  {
    v15 = notifyName == 0;
LABEL_20:
    if ( v15 )
      return;
  }
  v16 = 0i64;
  v17 = v10 == 1;
  if ( allAnimsNotify )
  {
    if ( numAnims )
    {
      do
      {
        if ( *(float *)((char *)v11 + (char *)weights - (char *)outNotifyTypes) > 0.0 )
        {
          *v11 = v17;
          *(unsigned int *)((char *)v11 + (char *)outNotifyNames - (char *)outNotifyTypes) = notifyName;
        }
        ++v11;
        --v12;
      }
      while ( v12 );
    }
  }
  else
  {
    v18 = FLOAT_N3_4028235e38;
    if ( numAnims >= 4 )
    {
      v19 = weights + 2;
      do
      {
        _XMM0 = *((unsigned int *)v19 - 2);
        v21 = *(v19 - 1);
        _XMM2 = *(unsigned int *)v19;
        _XMM4 = *((unsigned int *)v19 + 1);
        __asm { vmaxss  xmm3, xmm0, xmm7 }
        v25 = v16;
        v26 = v16 + 1;
        if ( *(float *)&_XMM0 <= v18 )
          v25 = v14;
        v19 += 4;
        __asm { vmaxss  xmm5, xmm3, xmm1 }
        if ( v21 <= *(float *)&_XMM3 )
          v26 = v25;
        v14 = v16 + 3;
        v28 = v16 + 2;
        if ( *(float *)&_XMM2 <= *(float *)&_XMM5 )
          v28 = v26;
        __asm
        {
          vmaxss  xmm6, xmm2, xmm5
          vmaxss  xmm8, xmm4, xmm6
        }
        if ( *(float *)&_XMM4 <= *(float *)&_XMM6 )
          v14 = v28;
        v16 = (unsigned int)(v16 + 4);
        v18 = *(float *)&_XMM8;
      }
      while ( (unsigned int)v16 < numAnims - 3 );
      v13 = outMaxAnimIndex;
    }
    if ( (unsigned int)v16 < numAnims )
    {
      v31 = &weights[v16];
      do
      {
        _XMM0 = *(unsigned int *)v31;
        v33 = v16;
        ++v31;
        if ( *(float *)&_XMM0 <= v18 )
          v33 = v14;
        LODWORD(v16) = v16 + 1;
        v14 = v33;
        __asm { vmaxss  xmm1, xmm0, xmm7 }
        v18 = *(float *)&_XMM1;
      }
      while ( (unsigned int)v16 < numAnims );
    }
    if ( v18 > 0.0 )
    {
      if ( v10 )
      {
        outNotifyTypes[v14] = v17;
        outNotifyNames[v14] = notifyName;
      }
      else if ( notifyName )
      {
        *v13 = v14;
      }
    }
  }
}

/*
==============
XAnimBlendSpace_HandleServerNotifyChild
==============
*/
void XAnimBlendSpace_HandleServerNotifyChild(const XAnimTree *tree, XAnimInfo *animInfo, unsigned int graftIndex, bool allAnimsNotify, const unsigned int *childAnimIndex, unsigned int maxWeightAnimIndex)
{
  unsigned __int16 InfoIndex; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 273, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 274, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !childAnimIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 275, ASSERT_TYPE_ASSERT, "(childAnimIndex)", (const char *)&queryFormat, "childAnimIndex") )
    __debugbreak();
  if ( !allAnimsNotify && maxWeightAnimIndex != -1 )
  {
    if ( tree->owner[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 285, ASSERT_TYPE_ASSERT, "(tree->owner == XAnimOwner::SERVER)", (const char *)&queryFormat, "tree->owner == XAnimOwner::SERVER") )
      __debugbreak();
    InfoIndex = XAnimGetInfoIndex(tree, graftIndex, (const XAnimSubTreeID)animInfo->subTreeID, childAnimIndex[maxWeightAnimIndex]);
    if ( InfoIndex )
      animInfo->notifyChild = XAnimGetDescendantWithGreatestWeight<1>(InfoIndex);
  }
}

/*
==============
XAnimBlendSpace_IsBlendspaceNode
==============
*/
bool XAnimBlendSpace_IsBlendspaceNode(const XAnim_s *anims, const unsigned int animIndex)
{
  bool result; 
  __int64 v5; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 656, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= anims->size )
  {
    LODWORD(v5) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 657, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v5, anims->size) )
      __debugbreak();
  }
  if ( XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace2D) )
    return 1;
  result = XAnimIsCustomNodeByName(anims, animIndex, scr_const.xanimBlendSpace1D);
  if ( result )
    return 1;
  return result;
}

/*
==============
XAnimBlendSpace_SetAnims
==============
*/
void XAnimBlendSpace_SetAnims(DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, scr_string_t animArray)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  _BYTE *CustomNodeData; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  scr_string_t *v18; 
  scr_string_t *v19; 
  const char *AnimDebugName; 
  const XAnimFieldArray<unsigned int> *UIntFieldArray; 
  const XAnimFieldArray<float> *FloatFieldArray; 
  const char *v23; 
  __int64 v24; 

  if ( !animArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 536, ASSERT_TYPE_ASSERT, "(animArray != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "animArray != NULL_SCR_STRING") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 541, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 544, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    AnimInfo = GetAnimInfo(InfoIndex);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 559, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 562, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    CustomNodeData = XAnimGetCustomNodeData(SubTreeAnims, AnimInfo, AnimInfo->animIndex);
    if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 565, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
      __debugbreak();
    CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, AnimInfo);
    if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 568, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
      __debugbreak();
    if ( *CustomNodeTypeInfo->name == scr_const.xanimBlendSpace2D )
    {
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 578, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v15 = 52i64;
      v16 = 24i64;
      v17 = 48i64;
    }
    else
    {
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 586, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v15 = 32i64;
      v16 = 12i64;
      v17 = 28i64;
    }
    v18 = (scr_string_t *)&CustomNodeData[v17];
    v19 = (scr_string_t *)&CustomNodeData[v16];
    if ( !CustomNodeData[v15] )
    {
      AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, AnimInfo->animIndex);
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 596, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Blendspace node '%s' not initialized.", AnimDebugName) )
        return;
      goto LABEL_34;
    }
    UIntFieldArray = XAnimNode_GetUIntFieldArray(animArray);
    if ( !UIntFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 601, ASSERT_TYPE_ASSERT, "(childAnims)", (const char *)&queryFormat, "childAnims") )
      __debugbreak();
    if ( XAnimBlendSpace_ValidateChildAnims(SubTreeAnims, AnimInfo->animIndex, UIntFieldArray) )
    {
      if ( (!*v19 || *v19 == scr_const._) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 608, ASSERT_TYPE_ASSERT, "(( *nodeCoords ) != ( static_cast< scr_string_t >( 0 ) ) && ( *nodeCoords ) != scr_const._)", (const char *)&queryFormat, "( *nodeCoords ) != NULL_SCR_STRING && ( *nodeCoords ) != scr_const._") )
        __debugbreak();
      FloatFieldArray = XAnimNode_GetFloatFieldArray(*v19);
      if ( !FloatFieldArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 611, ASSERT_TYPE_ASSERT, "(coords)", (const char *)&queryFormat, "coords") )
        __debugbreak();
      if ( FloatFieldArray->size == UIntFieldArray->size )
      {
        *v18 = animArray;
      }
      else
      {
        v23 = XAnimGetAnimDebugName(SubTreeAnims, animIndex);
        LODWORD(v24) = FloatFieldArray->size;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 615, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Num anims must be '%d' for blendspace node '%s'.", v24, v23) )
LABEL_34:
          __debugbreak();
      }
    }
  }
}

/*
==============
XAnimBlendSpace_ToggleUpdate
==============
*/
void XAnimBlendSpace_ToggleUpdate(DObj *obj, unsigned int graftAnimIndex, XAnimSubTreeID subTreeID, unsigned int animIndex, bool enableUpdate)
{
  XAnimTree *tree; 
  unsigned __int16 InfoIndex; 
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  _BYTE *CustomNodeData; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 678, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 681, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  XAnimAssertGraftAnimIndex(tree, graftAnimIndex, subTreeID, animIndex);
  InfoIndex = XAnimGetInfoIndex(tree, graftAnimIndex, subTreeID, animIndex);
  if ( InfoIndex )
  {
    AnimInfo = GetAnimInfo(InfoIndex);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 696, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    SubTreeAnims = XAnimGetSubTreeAnims(tree, subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 699, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( XAnimBlendSpace_IsBlendspaceNode(SubTreeAnims, animIndex) )
    {
      CustomNodeData = XAnimGetCustomNodeData(SubTreeAnims, AnimInfo, AnimInfo->animIndex);
      if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 707, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
        __debugbreak();
      CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, AnimInfo);
      if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 710, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
        __debugbreak();
      if ( *CustomNodeTypeInfo->name == scr_const.xanimBlendSpace2D )
      {
        if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 717, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CustomNodeData[52] )
          CustomNodeData[53] = !enableUpdate;
      }
      else
      {
        if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_blendspace1d.cpp", 726, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CustomNodeData[32] )
          CustomNodeData[33] = !enableUpdate;
      }
    }
  }
}

