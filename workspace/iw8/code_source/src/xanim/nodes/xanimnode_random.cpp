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
  XAnimCurveID v14; 
  char v15; 
  const XAnim_s *SubTreeAnims; 
  unsigned int GraftAnimIndex; 
  int v19; 
  unsigned int v20; 
  int NumChildren; 
  unsigned int v22; 
  unsigned int ChildAt; 
  float fmt; 
  float fmta; 
  float curveID; 
  float v30; 
  unsigned int pHoldrand; 

  _RBP = animInfo;
  _RSI = (const scr_string_t *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 62, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 63, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 64, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  ID = XAnimCurve_GetID(_RSI[2]);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbp+38h]
  }
  v14 = ID;
  if ( v15 )
  {
    *((_BYTE *)_RSI + 20) = 0;
    __asm { vmovss  xmm2, dword ptr [rbp+34h]; blendTime }
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 0, ID);
  }
  else if ( !*((_BYTE *)_RSI + 20) || *((_DWORD *)_RSI + 4) != *((_DWORD *)_RSI + 3) )
  {
    SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)_RBP->subTreeID);
    GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
    v19 = *((_DWORD *)_RSI + 3);
    v20 = GraftAnimIndex;
    *((_DWORD *)_RSI + 4) = v19;
    pHoldrand = v19 + obj->entnum + GraftAnimIndex - 1;
    BG_srand(&pHoldrand);
    NumChildren = XAnimGetNumChildren(SubTreeAnims, _RBP->animIndex);
    v22 = BG_irand(0, NumChildren, &pHoldrand);
    ChildAt = XAnimGetChildAt(SubTreeAnims, _RBP->animIndex, v22);
    __asm { vmovss  xmm0, dword ptr [rsi] }
    LODWORD(SubTreeAnims) = ChildAt;
    __asm { vmovss  dword ptr [rsp+78h+fmt], xmm0 }
    XAnimClearChildGoalWeights(obj->tree, v20, (const XAnimSubTreeID)_RBP->subTreeID, _RBP->animIndex, fmt, v14);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+78h+var_48], xmm1
      vmovss  dword ptr [rsp+78h+curveID], xmm0
      vmovss  dword ptr [rsp+78h+fmt], xmm1
    }
    XAnimSetGoalWeight(obj, v20, _RBP->subTreeID, (unsigned int)SubTreeAnims, fmta, curveID, v30, _RBP->notifyName, _RBP->notifyType, *((unsigned __int8 *)_RSI + 4), v14, modelNameMap);
    *((_BYTE *)_RSI + 20) = 1;
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
  __int64 v13; 
  const char *AnimDebugName; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 119, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  _RAX = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType);
  _RBX = _RAX;
  if ( !_RAX )
    return 1;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vcomiss xmm1, cs:__real@42480000
  }
  AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_20], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 129, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "blendtime is in seconds, not milliseconds.  are you sure you want a blendtime of %.4f seconds for %s?", v13, AnimDebugName) )
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
  XAnimCurveID v13; 
  char v14; 
  const XAnim_s *SubTreeAnims; 
  unsigned int GraftAnimIndex; 
  bool v18; 
  unsigned int v19; 
  int v20; 
  int v21; 
  unsigned int animIndex; 
  int NumChildren; 
  unsigned int v26; 
  unsigned int ChildAt; 
  const char *AnimDebugName; 
  float fmt; 
  float fmta; 
  float curveID; 
  float graftIndex; 
  float notifyName; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
  _RDI = animInfo;
  _RBX = (char *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 208, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 209, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 210, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  ID = XAnimCurve_GetID(*((const scr_string_t *)_RBX + 2));
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm7, dword ptr [rdi+38h]
  }
  v13 = ID;
  if ( v14 )
  {
    _RBX[36] = 0;
    __asm { vmovss  xmm2, dword ptr [rdi+34h]; blendTime }
    XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 0, ID);
  }
  else
  {
    SubTreeAnims = XAnimGetSubTreeAnims(obj->tree, (const XAnimSubTreeID)_RDI->subTreeID);
    GraftAnimIndex = XAnimGetGraftAnimIndex(animInfoIndex);
    v18 = 0;
    v19 = GraftAnimIndex;
    v20 = SubTreeAnims->entries[_RDI->animIndex].animParent.flags & 3;
    if ( !_RBX[36] || *((_DWORD *)_RBX + 6) != *((_DWORD *)_RBX + 3) )
    {
      v21 = *((_DWORD *)_RBX + 3);
      *((_DWORD *)_RBX + 5) = v21;
      *((_DWORD *)_RBX + 6) = v21;
      *((_DWORD *)_RBX + 5) = v21 + obj->entnum + GraftAnimIndex - 1;
      BG_srand((unsigned int *)_RBX + 5);
      _RBX[36] = 1;
      *(_QWORD *)(_RBX + 28) = 0i64;
      v18 = 1;
    }
    if ( v20 )
    {
      __asm
      {
        vmovaps [rsp+0A8h+var_38], xmm6
        vmovss  xmm6, cs:__real@3f800000
      }
      if ( !v18 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vcomiss xmm0, xmm6
        }
      }
      animIndex = _RDI->animIndex;
      NumChildren = XAnimGetNumChildren(SubTreeAnims, animIndex);
      if ( _RBX[5] )
        --NumChildren;
      v26 = BG_irand(0, NumChildren, (unsigned int *)_RBX + 5);
      if ( _RBX[5] && v26 >= *((_DWORD *)_RBX + 4) )
        ++v26;
      *((_DWORD *)_RBX + 4) = v26;
      ChildAt = XAnimGetChildAt(SubTreeAnims, animIndex, v26);
      if ( !XAnimIsLeafNode(SubTreeAnims, ChildAt) )
      {
        AnimDebugName = XAnimGetAnimDebugName(SubTreeAnims, ChildAt);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 279, ASSERT_TYPE_ASSERT, "( XAnimIsLeafNode( anims, childIndex ) )", "Child of random node must be a leaf. '%s'", AnimDebugName) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  dword ptr [rsp+0A8h+fmt], xmm0
      }
      XAnimClearChildGoalWeights(obj->tree, v19, (const XAnimSubTreeID)_RDI->subTreeID, _RDI->animIndex, fmt, v13);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+0A8h+graftIndex], xmm6
        vmovss  dword ptr [rsp+0A8h+curveID], xmm0
        vmovss  dword ptr [rsp+0A8h+fmt], xmm6
      }
      XAnimSetGoalWeight(obj, v19, _RDI->subTreeID, ChildAt, fmta, curveID, graftIndex, _RDI->notifyName, _RDI->notifyType, (unsigned __int8)_RBX[4], v13, NULL);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbx+20h], xmm0
        vmovaps xmm6, [rsp+0A8h+var_38]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rsp+0A8h+dtime]
        vmovss  [rsp+0A8h+notifyName], xmm0
      }
      XAnimRandomLoop_UpdateNotSynced(obj, _RDI, animInfoIndex, SubTreeAnims, (XAnimRandomLoop *)_RBX, v13, v19, notifyName, v18);
    }
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
}

/*
==============
XAnimRandomLoop_Read
==============
*/
void XAnimRandomLoop_Read(void *nodeData, MemoryFile *memFile)
{
  int p; 

  _RDI = nodeData;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[3] = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[4] = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[5] = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[6] = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[7] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+20h], xmm0 }
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 36) = p;
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
  _RBX = nodeData;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX[4];
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX[5];
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX[6];
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX[7];
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbx+20h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  LOBYTE(p) = *((_BYTE *)_RBX + 36);
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
  __int64 v13; 
  const char *AnimDebugName; 

  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[animIndex].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 357, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  _RAX = XAnimFindConstantBindParameterByFieldNameAllBindings(anims, animIndex, scr_const.blendtime, TypeFieldsForNodeType);
  _RBX = _RAX;
  if ( !_RAX )
    return 1;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vcomiss xmm1, cs:__real@42480000
  }
  AnimDebugName = XAnimGetAnimDebugName(anims, animIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_20], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 367, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "blendtime is in seconds, not milliseconds.  are you sure you want a blendtime of %.4f seconds for %s?", v13, AnimDebugName) )
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
  unsigned int v21; 
  unsigned int ChildAt; 
  int LengthMsec; 
  const char *AnimDebugName; 
  int v26; 
  const char *v32; 
  float fmt; 
  float fmta; 
  float fmtb; 
  double v40; 
  float v41; 
  float v42; 

  _RSI = pNode;
  m_remainingTime = pNode->m_remainingTime;
  if ( !initialized )
  {
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+dtime]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si eax, xmm1
    }
    m_remainingTime -= _EAX;
    pNode->m_remainingTime = m_remainingTime;
  }
  if ( m_remainingTime <= 0 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
    }
    do
    {
      animIndex = animInfo->animIndex;
      NumChildren = XAnimGetNumChildren(anims, animIndex);
      if ( pNode->m_bNoRepeat )
        --NumChildren;
      v21 = BG_irand(0, NumChildren, &pNode->m_nextSeed);
      if ( pNode->m_bNoRepeat && v21 >= pNode->m_previousChildIndex )
        ++v21;
      pNode->m_previousChildIndex = v21;
      ChildAt = XAnimGetChildAt(anims, animIndex, v21);
      LengthMsec = XAnimGetLengthMsec(anims, ChildAt);
      if ( LengthMsec <= 0 )
      {
        AnimDebugName = XAnimGetAnimDebugName(anims, ChildAt);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 316, ASSERT_TYPE_ASSERT, "( animLength > 0 )", "Animation length is 0, is the animation missing? '%s'", AnimDebugName) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
      }
      v26 = pNode->m_remainingTime + LengthMsec;
      pNode->m_remainingTime = v26;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vdivss  xmm6, xmm1, xmm0
      }
    }
    while ( v26 <= 0 );
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
      vcomiss xmm6, xmm7
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  qword ptr [rsp+0A8h+var_80], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 321, ASSERT_TYPE_ASSERT, "( startTime >= 0.f && startTime <= 1.f )", "time %.2f must be between 0 and 1 for looping anims.", v40) )
      __debugbreak();
    if ( !XAnimIsLeafNode(anims, ChildAt) )
    {
      v32 = XAnimGetAnimDebugName(anims, ChildAt);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_random.cpp", 322, ASSERT_TYPE_ASSERT, "( XAnimIsLeafNode( anims, childIndex ) )", "Child of random node must be a leaf. '%s'", v32) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  dword ptr [rsp+0A8h+fmt], xmm0
    }
    XAnimClearChildGoalWeights(obj->tree, graftIndex, (const XAnimSubTreeID)animInfo->subTreeID, animInfo->animIndex, fmt, curveID);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+0A8h+var_78], xmm7
      vmovss  dword ptr [rsp+0A8h+var_80], xmm0
      vmovss  dword ptr [rsp+0A8h+fmt], xmm7
    }
    XAnimSetGoalWeight(obj, graftIndex, animInfo->subTreeID, ChildAt, fmta, v41, v42, animInfo->notifyName, animInfo->notifyType, pNode->m_bRestart, curveID, NULL);
    __asm { vmovss  dword ptr [rsp+0A8h+fmt], xmm6 }
    XAnimSetTime(obj->tree, graftIndex, (const XAnimSubTreeID)animInfo->subTreeID, ChildAt, fmtb);
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
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

