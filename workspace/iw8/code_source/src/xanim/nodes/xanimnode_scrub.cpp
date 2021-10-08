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
  unsigned __int16 v12; 
  const DObj *v14; 
  bool v16; 
  unsigned int v20; 
  unsigned __int16 InfoIndex; 
  XAnimTree *v22; 
  const XAnim_s *SubTreeAnims; 
  int NumChildren; 
  __int16 v25; 
  unsigned int v27; 
  unsigned int ChildAt; 
  unsigned __int16 children; 
  unsigned int v30; 
  char v31; 
  bool v33; 
  int animIndex; 
  XModelNameMap *cachedModelNameMap; 
  unsigned int v40; 
  char v46; 
  bool v47; 
  bool v48; 
  float curveID; 
  float curveIDa; 
  float goalTime; 
  float goalTimea; 
  float rate; 
  float ratea; 
  float notifyName; 
  double notifyNamea; 
  double notifyType; 
  XAnimTree *tree; 
  unsigned int graftAnimIndex; 
  XAnimInfo *v80; 

  v80 = animInfo;
  v12 = animInfoIndex;
  _RDI = animInfo;
  v14 = obj;
  _RSI = nodeData;
  if ( *((_BYTE *)nodeData + 24) )
  {
    v16 = !isInstantInit;
    if ( !isInstantInit )
    {
      v16 = animInfo->children == 0;
      if ( !animInfo->children )
      {
        v16 = *((_BYTE *)nodeData + 23) == 0;
        if ( !*((_BYTE *)nodeData + 23) )
        {
          __asm { vxorps  xmm2, xmm2, xmm2; blendTime }
          XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 1, LINEAR);
          return;
        }
      }
    }
    __asm
    {
      vmovaps [rsp+0E8h+var_58], xmm6
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm6, dword ptr [r8+3Ch]
    }
    if ( v16 )
    {
      __asm { vucomiss xmm6, dword ptr [r8+38h] }
      if ( v16 )
      {
        __asm { vxorps  xmm2, xmm2, xmm2; blendTime }
        XAnimClearTreeGoalWeightsNode(obj->tree, animInfoIndex, *(float *)&_XMM2, 1, LINEAR);
LABEL_48:
        __asm { vmovaps xmm6, [rsp+0E8h+var_58] }
        return;
      }
    }
    v20 = XAnimGetGraftAnimIndex(animInfoIndex);
    graftAnimIndex = v20;
    InfoIndex = XAnimGetInfoIndex(v14->tree, v20, (const XAnimSubTreeID)_RDI->subTreeID, _RDI->animIndex);
    __asm { vucomiss xmm6, dword ptr [rdi+38h] }
    if ( v16 && InfoIndex != v12 )
      goto LABEL_48;
    v22 = v14->tree;
    __asm { vmovaps [rsp+0E8h+var_78], xmm8 }
    tree = v14->tree;
    if ( !v14->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 123, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
      __debugbreak();
    __asm { vmovaps [rsp+0E8h+var_68], xmm7 }
    SubTreeAnims = XAnimGetSubTreeAnims(v22, (const XAnimSubTreeID)_RDI->subTreeID);
    NumChildren = XAnimGetNumChildren(SubTreeAnims, _RDI->animIndex);
    v25 = _RSI[10];
    __asm { vmovss  xmm8, cs:__real@3f800000 }
    if ( v25 >= 1 && NumChildren > 0 )
    {
      v27 = v25 - 1;
      if ( v27 >= NumChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 133, ASSERT_TYPE_ASSERT, "(childIndex < static_cast<uint>( numChildren ))", "%s\n\tXAnimScrub1D_Update invalid 'childindex'=(%d) parameter. Node has (%d) child nodes only.", "childIndex < static_cast<uint>( numChildren )", v25 - 1, NumChildren) )
        __debugbreak();
      ChildAt = XAnimGetChildAt(SubTreeAnims, _RDI->animIndex, v27);
      children = _RDI->children;
      v30 = ChildAt;
      v31 = 1;
      __asm { vmovss  xmm7, cs:__real@3a83126f }
      v33 = children == 0;
      if ( !children )
        goto LABEL_29;
      do
      {
        _RBX = XAnimGetAnimInfo(children);
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 143, ASSERT_TYPE_ASSERT, "( childInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "childInfo", "nullptr", NULL, NULL) )
          __debugbreak();
        animIndex = _RBX->animIndex;
        if ( animIndex == v30 )
        {
          v31 = 0;
        }
        else
        {
          __asm { vucomiss xmm6, dword ptr [rbx+38h] }
          if ( animIndex != v30 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vmulss  xmm2, xmm0, xmm7; blendTime
            }
            XAnimClearTreeGoalWeightsNode(tree, children, *(float *)&_XMM2, 0, LINEAR);
          }
        }
        children = _RBX->next;
      }
      while ( children );
      _RDI = v80;
      v14 = obj;
      v12 = animInfoIndex;
      v33 = v31 == 0;
      if ( v31 )
      {
LABEL_29:
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+10h]
          vcomiss xmm2, xmm6
        }
        cachedModelNameMap = modelNameMap;
        if ( v33 )
        {
          v22 = tree;
          v20 = graftAnimIndex;
        }
        else
        {
          v40 = v30;
          v20 = graftAnimIndex;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm7
            vmovss  [rsp+0E8h+rate], xmm8
            vmovss  [rsp+0E8h+goalTime], xmm1
            vmovss  dword ptr [rsp+0E8h+curveID], xmm2
          }
          XAnimSetCompleteGoalWeight(v14, graftAnimIndex, (const XAnimSubTreeID)_RDI->subTreeID, v40, curveID, goalTime, rate, (scr_string_t)0, 1u, 0, LINEAR, modelNameMap);
          v22 = tree;
        }
        goto LABEL_34;
      }
      v22 = tree;
      v20 = graftAnimIndex;
    }
    cachedModelNameMap = modelNameMap;
LABEL_34:
    __asm { vmovaps xmm7, [rsp+0E8h+var_68] }
    if ( !*((_BYTE *)_RSI + 22) )
      goto LABEL_42;
    _RBX = XAnimGetAnimInfo(_RDI->children);
    v46 = 0;
    v47 = _RBX == NULL;
    if ( !_RBX )
    {
      v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 169, ASSERT_TYPE_ASSERT, "(childAnimInfo)", (const char *)&queryFormat, "childAnimInfo");
      v46 = 0;
      v47 = !v48;
      if ( v48 )
        __debugbreak();
    }
    __asm { vucomiss xmm6, dword ptr [rbx+38h] }
    if ( v47 )
      goto LABEL_40;
    __asm { vucomiss xmm6, dword ptr [rbx+3Ch] }
    if ( v47 )
    {
LABEL_40:
      __asm { vucomiss xmm6, dword ptr [rbx+3Ch] }
      if ( v47 )
      {
        __asm { vmovaps xmm2, xmm6; blendTime }
        XAnimClearTreeGoalWeightsNode(v14->tree, v12, *(float *)&_XMM2, 1, LINEAR);
LABEL_47:
        __asm { vmovaps xmm8, [rsp+0E8h+var_78] }
        goto LABEL_48;
      }
    }
    else
    {
LABEL_42:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+10h]
        vcomiss xmm0, xmm6
        vmovss  [rsp+0E8h+notifyName], xmm6
        vmovss  [rsp+0E8h+rate], xmm6
        vmovss  [rsp+0E8h+goalTime], xmm0
      }
      XAnimSetChildGoalWeights(v14, v14->tree, v20, (const XAnimSubTreeID)_RDI->subTreeID, _RDI->animIndex, goalTimea, ratea, notifyName, (scr_string_t)0, 0, LINEAR, cachedModelNameMap);
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rsi]
      vmovss  xmm0, dword ptr [rsi+4]
      vcomiss xmm1, xmm0
    }
    if ( !v46 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  qword ptr [rsp+0E8h+notifyType], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+0E8h+notifyName], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 193, ASSERT_TYPE_ASSERT, "( node->timeRange[0] ) < ( node->timeRange[1] )", "%s < %s\n\t%g, %g", "node->timeRange[0]", "node->timeRange[1]", notifyNamea, notifyType) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm3, xmm1, dword ptr [rsi]
      vsubss  xmm4, xmm0, dword ptr [rsi]
      vdivss  xmm0, xmm4, xmm3; val
      vmovaps xmm2, xmm8; max
      vmovaps xmm1, xmm6; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm3, xmm0; time
      vmovss  dword ptr [rsp+0E8h+curveID], xmm6
    }
    XAnimScrub1D_SetChildTimes_r(v22, v20, _RDI, *(float *)&_XMM3, curveIDa);
    goto LABEL_47;
  }
}

/*
==============
XAnimScrub1D_Read
==============
*/
void XAnimScrub1D_Read(void *nodeData, MemoryFile *memFile)
{
  int p; 

  _RDI = nodeData;
  MemFile_ReadData(memFile, 8ui64, nodeData);
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[2] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+0Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+10h], xmm0 }
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 24) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 22) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)_RDI + 10) = p;
}

/*
==============
XAnimScrub1D_Write
==============
*/
void XAnimScrub1D_Write(void *nodeData, MemoryFile *memFile)
{
  int p; 

  _RBX = nodeData;
  MemFile_WriteData(memFile, 8ui64, nodeData);
  p = _RBX[2];
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbx+0Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+10h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  LOBYTE(p) = *((_BYTE *)_RBX + 24);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)_RBX + 22);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOWORD(p) = *((_WORD *)_RBX + 10);
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
  const char *AnimDebugName; 
  __int64 v10; 
  vec2_t timeRange; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 258, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 259, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v10, anims->size) )
      __debugbreak();
  }
  TypeFieldsForNodeType = XAnimGetTypeFieldsForNodeType(anims->entries[v2].nodeType);
  if ( !TypeFieldsForNodeType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 263, ASSERT_TYPE_ASSERT, "(typeFields)", (const char *)&queryFormat, "typeFields") )
    __debugbreak();
  if ( !XAnimFindConstantBindParameterByFieldNameAllBindings(anims, v2, scr_const.xanimScrubTimeRange, TypeFieldsForNodeType) )
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
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  xmm1, dword ptr [rbp+0Ch]
    vmovss  dword ptr [rsp+78h+timeRange], xmm0
    vmovss  dword ptr [rsp+78h+timeRange+4], xmm1
  }
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
  char *fmt; 
  double v20; 
  double v21; 
  double v22; 

  v6 = size;
  _RBP = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 293, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( _RBP[24] )
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
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+10h]
      vmovss  xmm1, dword ptr [rbp+0Ch]
      vmovss  xmm2, dword ptr [rbp+4]
      vmovss  xmm3, dword ptr [rbp+0]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+48h+var_18], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+48h+var_20], xmm2
      vmovsd  [rsp+48h+fmt], xmm3
    }
    Com_sprintfPos_truncate(buffer, v9, inoutPos, "   ^5timeRange={%.3f,%.3f}, timeValue=%.3f, weightValue=%.3f\n", *(double *)&fmt, v20, v21, v22);
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

void __fastcall XAnimScrub1D_SetChildTimes_r(XAnimTree *tree, unsigned int graftAnimIndex, const XAnimInfo *info, double time, float rate)
{
  const XAnim_s *SubTreeAnims; 
  unsigned __int16 children; 
  unsigned __int8 *v14; 
  __int64 v15; 
  const XAnim_s *v16; 
  float fmt; 
  __int64 v23; 
  __int64 v24; 

  __asm
  {
    vmovaps [rsp+98h+var_48], xmm7
    vmovaps xmm7, xmm3
  }
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)info->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 62, ASSERT_TYPE_ASSERT, "( anims ) != ( nullptr )", "%s != %s\n\t%p, %p", "anims", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !graftAnimIndex && XAnimIsGraftNode(SubTreeAnims, info->animIndex) )
    graftAnimIndex = info->animIndex;
  children = info->children;
  if ( children )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovss  xmm6, [rsp+98h+rate]
    }
    do
    {
      if ( (children & 0x8000u) != 0 )
      {
        v15 = 32 * (children & 0x7FFFu);
        if ( (unsigned int)v15 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v23) = 32 * (children & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v23, v24) )
            __debugbreak();
        }
        v14 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v15];
      }
      else
      {
        if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v23) = children;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v14 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
      }
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 72, ASSERT_TYPE_ASSERT, "( childInfo ) != ( nullptr )", "%s != %s\n\t%p, %p", "childInfo", "nullptr", NULL, NULL) )
        __debugbreak();
      v16 = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)*((_WORD *)v14 + 8));
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 75, ASSERT_TYPE_ASSERT, "( childAnims ) != ( nullptr )", "%s != %s\n\t%p, %p", "childAnims", "nullptr", NULL, NULL) )
        __debugbreak();
      if ( XAnimIsLeafNode(v16, *((unsigned __int16 *)v14 + 3)) )
      {
        v14[77] |= 0x10u;
        __asm { vmovaps xmm2, xmm7; time }
        XAnimSetTimeNode(tree, children, *(float *)&_XMM2);
      }
      else
      {
        __asm
        {
          vmovaps xmm3, xmm7; time
          vmovss  dword ptr [rsp+98h+fmt], xmm6
        }
        XAnimScrub1D_SetChildTimes_r(tree, graftAnimIndex, (const XAnimInfo *)v14, *(float *)&_XMM3, fmt);
      }
      __asm { vmovaps xmm2, xmm6; rate }
      XAnimSetAnimRateNode(tree, children, *(float *)&_XMM2);
      children = *((_WORD *)v14 + 5);
    }
    while ( children );
    __asm { vmovaps xmm6, [rsp+98h+var_38] }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
}

/*
==============
XAnimScrub1D_ValidateConstParameters
==============
*/
char XAnimScrub1D_ValidateConstParameters(const XAnim_s *anims, unsigned int animIndex, const vec2_t *timeRange)
{
  bool v7; 
  bool v8; 
  const char *AnimDebugName; 

  _RBX = timeRange;
  v7 = anims == NULL;
  if ( !anims )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_scrub.cpp", 357, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims");
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  if ( !v7 )
    __asm { vucomiss xmm1, dword ptr [rbx+4] }
  __asm { vcomiss xmm0, dword ptr [rbx+4] }
  if ( v7 )
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

