/*
==============
XAnimReadAnimTreeForAntilag
==============
*/

void __fastcall XAnimReadAnimTreeForAntilag(DObj *obj, AntilagAnimInfo *antilagAnimInfo, const unsigned int antilagAnimInfoCount, const unsigned __int8 *antilagCustomNodeData, unsigned int antilagCustomNodeDataSize, float weightScale)
{
  ?XAnimReadAnimTreeForAntilag@@YAXPEAUDObj@@PEAUAntilagAnimInfo@@IPEBEIM@Z(obj, antilagAnimInfo, antilagAnimInfoCount, antilagCustomNodeData, antilagCustomNodeDataSize, weightScale);
}

/*
==============
XAnimLoadAnimTreeWithVersion
==============
*/

void __fastcall XAnimLoadAnimTreeWithVersion(DObj *obj, MemoryFile *memFile, unsigned __int8 currentVersion, unsigned int (__fastcall *fixupAnimIndex)(unsigned int, unsigned __int8, unsigned __int8))
{
  ?XAnimLoadAnimTreeWithVersion@@YAXPEAUDObj@@PEAUMemoryFile@@EP6AIIEE@Z@Z(obj, memFile, currentVersion, fixupAnimIndex);
}

/*
==============
XAnimCreateRootNodeForAntilag
==============
*/

XAnimInfo *__fastcall XAnimCreateRootNodeForAntilag(DObj *obj)
{
  return ?XAnimCreateRootNodeForAntilag@@YAPEAUXAnimInfo@@PEAUDObj@@@Z(obj);
}

/*
==============
XAnimLoadAnimTree
==============
*/

void __fastcall XAnimLoadAnimTree(DObj *obj, MemoryFile *memFile)
{
  ?XAnimLoadAnimTree@@YAXPEAUDObj@@PEAUMemoryFile@@@Z(obj, memFile);
}

/*
==============
XAnimReadSimpleAnimTree
==============
*/

void __fastcall XAnimReadSimpleAnimTree(DObj *obj, MemoryFile *memFile, XAnimOwner owner)
{
  ?XAnimReadSimpleAnimTree@@YAXPEAUDObj@@PEAUMemoryFile@@W4XAnimOwner@@@Z(obj, memFile, owner);
}

/*
==============
XAnimWriteSimpleAnimTree
==============
*/

void __fastcall XAnimWriteSimpleAnimTree(DObj *obj, MemoryFile *memFile)
{
  ?XAnimWriteSimpleAnimTree@@YAXPEAUDObj@@PEAUMemoryFile@@@Z(obj, memFile);
}

/*
==============
XAnimSaveAnimTreeWithVersion
==============
*/

void __fastcall XAnimSaveAnimTreeWithVersion(const DObj *obj, MemoryFile *memFile, unsigned __int8 currentVersion)
{
  ?XAnimSaveAnimTreeWithVersion@@YAXPEBUDObj@@PEAUMemoryFile@@E@Z(obj, memFile, currentVersion);
}

/*
==============
XAnimLoadAnimTree_r
==============
*/

void __fastcall XAnimLoadAnimTree_r(DObj *obj, MemoryFile *memFile, unsigned int animIndex, unsigned __int16 parentInfoIndex)
{
  ?XAnimLoadAnimTree_r@@YAXPEAUDObj@@PEAUMemoryFile@@IG@Z(obj, memFile, animIndex, parentInfoIndex);
}

/*
==============
XAnimWriteSimpleBlendAnimTree
==============
*/

void __fastcall XAnimWriteSimpleBlendAnimTree(DObj *obj, MemoryFile *memFile)
{
  ?XAnimWriteSimpleBlendAnimTree@@YAXPEAUDObj@@PEAUMemoryFile@@@Z(obj, memFile);
}

/*
==============
XAnimReadSimpleBlendAnimTree
==============
*/

void __fastcall XAnimReadSimpleBlendAnimTree(DObj *obj, MemoryFile *memFile, XAnimOwner owner)
{
  ?XAnimReadSimpleBlendAnimTree@@YAXPEAUDObj@@PEAUMemoryFile@@W4XAnimOwner@@@Z(obj, memFile, owner);
}

/*
==============
XAnimSaveAnimTreeForAntilag
==============
*/

unsigned int __fastcall XAnimSaveAnimTreeForAntilag(const DObj *obj, AntilagAnimInfo *antilagAnimInfo, unsigned int antilagAnimInfoSize, unsigned __int8 *customNodeDataBuffer, unsigned int customNodeDataBufferSize, unsigned int *outCustomNodeDataWritten)
{
  return ?XAnimSaveAnimTreeForAntilag@@YAIPEBUDObj@@PEAUAntilagAnimInfo@@IPEAEIPEAI@Z(obj, antilagAnimInfo, antilagAnimInfoSize, customNodeDataBuffer, customNodeDataBufferSize, outCustomNodeDataWritten);
}

/*
==============
XAnimSaveAnimTree
==============
*/

void __fastcall XAnimSaveAnimTree(const DObj *obj, MemoryFile *memFile)
{
  ?XAnimSaveAnimTree@@YAXPEBUDObj@@PEAUMemoryFile@@@Z(obj, memFile);
}

/*
==============
XAnimArchiveAnimState
==============
*/
void XAnimArchiveAnimState(XAnimState *state, MemoryFile *memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, 40ui64, state);
}

/*
==============
XAnimCreateRootNodeForAntilag
==============
*/
XAnimInfo *XAnimCreateRootNodeForAntilag(DObj *obj)
{
  XAnimInfo *v1; 
  XAnimInfo *result; 

  v1 = XAnimAllocInfo(obj, 0, XANIM_SUBTREE_DEFAULT, 0, 1);
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 629, ASSERT_TYPE_ASSERT, "( rootInfo )", (const char *)&queryFormat, "rootInfo") )
    __debugbreak();
  *(_QWORD *)&v1->state.currentAnimTime = 0i64;
  *(_QWORD *)&v1->state.cycleCount = 0i64;
  *(_QWORD *)&v1->state.goalWeight = 0i64;
  *(_QWORD *)&v1->state.rate = 0i64;
  *(_QWORD *)&v1->state.startWeight = 0i64;
  result = v1;
  v1->notifyName = 0;
  *(_DWORD *)&v1->notifyChild = -65536;
  v1->notifyType = 0;
  v1->state.weight = 1.0;
  v1->subTreeID = XANIM_SUBTREE_DEFAULT;
  return result;
}

/*
==============
XAnimLoadAnimInfo
==============
*/
void XAnimLoadAnimInfo(XAnimTree *tree, XAnimInfo *info, MemoryFile *memFile)
{
  __int16 p; 

  MemFile_ReadData(memFile, 2ui64, &p);
  info->notifyIndex = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  info->notifyChild = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  info->notifyType = p;
  info->notifyName = Scr_ReadString(memFile);
  XAnimArchiveAnimState(&info->state, memFile);
  XAnimReadCustomNode(tree, info, memFile);
}

/*
==============
XAnimLoadAnimTree
==============
*/
void XAnimLoadAnimTree(DObj *obj, MemoryFile *memFile)
{
  XAnimTree *tree; 
  unsigned __int16 p; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 185, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree )
  {
    if ( tree->children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 190, ASSERT_TYPE_ASSERT, "(!tree->children)", (const char *)&queryFormat, "!tree->children") )
      __debugbreak();
    MemFile_ReadData(memFile, 1ui64, &p);
    tree->clientNotifyEnabled = p & 1;
    XAnimReadParameterValues(tree, memFile);
    MemFile_ReadData(memFile, 2ui64, &p);
    if ( p != 0xFFFF )
      XAnimLoadAnimTree_r(obj, memFile, p, 0);
  }
}

/*
==============
XAnimLoadAnimTreeWithVersion
==============
*/
void XAnimLoadAnimTreeWithVersion(DObj *obj, MemoryFile *memFile, unsigned __int8 currentVersion, unsigned int (*fixupAnimIndex)(unsigned int, unsigned __int8, unsigned __int8))
{
  XAnimTree *tree; 
  unsigned __int8 v9; 
  unsigned __int16 p; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 149, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree )
  {
    if ( tree->children && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 157, ASSERT_TYPE_ASSERT, "(!tree->children)", (const char *)&queryFormat, "!tree->children") )
      __debugbreak();
    MemFile_ReadData(memFile, 1ui64, &p);
    v9 = p;
    tree->clientNotifyEnabled = p & 1;
    XAnimReadParameterValues(tree, memFile);
    MemFile_ReadData(memFile, 2ui64, &p);
    if ( p != 0xFFFF )
      XAnimLoadAnimTreeWithVersion_r(obj, memFile, p, 0, v9 >> 4, currentVersion, fixupAnimIndex);
  }
}

/*
==============
XAnimLoadAnimTreeWithVersion_r
==============
*/
void XAnimLoadAnimTreeWithVersion_r(DObj *obj, MemoryFile *memFile, unsigned int savedAnimIndex, unsigned __int16 parentInfoIndex, unsigned __int8 savedVersion, unsigned __int8 currentVersion, unsigned int (*fixupAnimIndexFunc)(unsigned int, unsigned __int8, unsigned __int8))
{
  unsigned int (__fastcall *v10)(unsigned int, unsigned __int8, unsigned __int8); 
  XAnimTree *v11; 
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  unsigned __int16 v14; 
  XAnimInfo *AnimInfo; 
  __int64 v16; 
  unsigned int v17; 
  XAnimTree *tree; 
  unsigned __int16 p; 
  unsigned __int16 v20; 

  v20 = parentInfoIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 107, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v10 = fixupAnimIndexFunc;
  v11 = obj->tree;
  v12 = currentVersion;
  v13 = savedVersion;
  tree = obj->tree;
  if ( fixupAnimIndexFunc )
  {
    savedAnimIndex = fixupAnimIndexFunc(savedAnimIndex, savedVersion, currentVersion);
    if ( savedAnimIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 116, ASSERT_TYPE_ASSERT, "(animIndex != static_cast< unsigned short >( 0xFFFF ))", (const char *)&queryFormat, "animIndex != NO_ANIM_DATA") )
      __debugbreak();
  }
  MemFile_ReadData(memFile, 2ui64, &p);
  XAnimAssertAnimIndex(v11, (const XAnimSubTreeID)p, savedAnimIndex);
  v14 = XAnimAllocChildInfoIndex(obj, (const XAnimSubTreeID)p, savedAnimIndex, v20);
  AnimInfo = GetAnimInfo(v14);
  MemFile_ReadData(memFile, 2ui64, &p);
  v16 = (unsigned int)(__int16)p;
  XAnimLoadAnimInfo(tree, AnimInfo, memFile);
  if ( (_DWORD)v16 )
  {
    do
    {
      MemFile_ReadData(memFile, 2ui64, &p);
      v17 = p;
      if ( p == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 137, ASSERT_TYPE_ASSERT, "(childAnimIndex != static_cast< unsigned short >( 0xFFFF ))", (const char *)&queryFormat, "childAnimIndex != NO_ANIM_DATA") )
        __debugbreak();
      XAnimLoadAnimTreeWithVersion_r(obj, memFile, v17, v14, v13, v12, v10);
      --v16;
    }
    while ( v16 );
  }
}

/*
==============
XAnimLoadAnimTree_r
==============
*/
void XAnimLoadAnimTree_r(DObj *obj, MemoryFile *memFile, unsigned int animIndex, unsigned __int16 parentInfoIndex)
{
  XAnimTree *tree; 
  unsigned __int16 v9; 
  XAnimInfo *AnimInfo; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned __int16 p; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 69, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  MemFile_ReadData(memFile, 2ui64, &p);
  XAnimAssertAnimIndex(tree, (const XAnimSubTreeID)p, animIndex);
  v9 = XAnimAllocChildInfoIndex(obj, (const XAnimSubTreeID)p, animIndex, parentInfoIndex);
  AnimInfo = GetAnimInfo(v9);
  MemFile_ReadData(memFile, 2ui64, &p);
  v11 = (__int16)p;
  XAnimLoadAnimInfo(tree, AnimInfo, memFile);
  if ( v11 )
  {
    v12 = v11;
    do
    {
      MemFile_ReadData(memFile, 2ui64, &p);
      v13 = p;
      if ( p == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 90, ASSERT_TYPE_ASSERT, "(childAnimIndex != static_cast< unsigned short >( 0xFFFF ))", (const char *)&queryFormat, "childAnimIndex != NO_ANIM_DATA") )
        __debugbreak();
      XAnimLoadAnimTree_r(obj, memFile, v13, v9);
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
XAnimReadAnimTreeForAntilag
==============
*/
void XAnimReadAnimTreeForAntilag(DObj *obj, AntilagAnimInfo *antilagAnimInfo, const unsigned int antilagAnimInfoCount, const unsigned __int8 *antilagCustomNodeData, unsigned int antilagCustomNodeDataSize, float weightScale)
{
  __int64 v6; 
  XAnimTree *tree; 
  unsigned __int16 children; 
  int v13; 
  unsigned __int16 *p_subTreeID; 
  __int64 v15; 
  unsigned __int16 *v16; 
  XAnimInfo *v17; 
  XAnimSubTreeID v18; 
  const XAnim_s *SubTreeAnims; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  size_t nodeDataSize; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  XAnimInfo *v25; 
  XAnimInfo *v26; 
  unsigned __int16 v27; 

  v6 = antilagAnimInfoCount;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 645, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree )
  {
    children = tree->children;
    v27 = children;
    v26 = XAnimAllocInfo(obj, 0, XANIM_SUBTREE_DEFAULT, 0, 1);
    _R14 = v26;
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 629, ASSERT_TYPE_ASSERT, "( rootInfo )", (const char *)&queryFormat, "rootInfo") )
      __debugbreak();
    __asm { vmovss  xmm0, [rsp+78h+weightScale] }
    *(_QWORD *)&v26->state.currentAnimTime = 0i64;
    v13 = 0;
    *(_QWORD *)&v26->state.cycleCount = 0i64;
    *(_QWORD *)&v26->state.goalWeight = 0i64;
    *(_QWORD *)&v26->state.rate = 0i64;
    *(_QWORD *)&v26->state.startWeight = 0i64;
    v26->notifyName = 0;
    *(_DWORD *)&v26->notifyChild = -65536;
    v26->notifyType = 0;
    v26->subTreeID = XANIM_SUBTREE_DEFAULT;
    __asm { vmovss  dword ptr [r14+3Ch], xmm0 }
    if ( (_DWORD)v6 )
    {
      p_subTreeID = &antilagAnimInfo->subTreeID;
      v15 = v6;
      do
      {
        if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 479, ASSERT_TYPE_ASSERT, "( obj->tree )", (const char *)&queryFormat, "obj->tree") )
          __debugbreak();
        v16 = p_subTreeID - 1;
        if ( p_subTreeID == (unsigned __int16 *)2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 480, ASSERT_TYPE_ASSERT, "( antilagInfo )", (const char *)&queryFormat, "antilagInfo") )
          __debugbreak();
        if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 481, ASSERT_TYPE_ASSERT, "( antilagInfo->animIndex != 0 )", (const char *)&queryFormat, "antilagInfo->animIndex != 0") )
          __debugbreak();
        v17 = XAnimAllocInfo(obj, p_subTreeID[1], (const XAnimSubTreeID)*p_subTreeID, *v16, 1);
        *(_QWORD *)&v17->state.currentAnimTime = 0i64;
        *(_QWORD *)&v17->state.cycleCount = 0i64;
        *(_QWORD *)&v17->state.goalWeight = 0i64;
        *(_QWORD *)&v17->state.rate = 0i64;
        *(_QWORD *)&v17->state.startWeight = 0i64;
        v17->notifyName = 0;
        *(_DWORD *)&v17->notifyChild = -65536;
        v17->notifyType = 0;
        v18 = *p_subTreeID;
        v17->subTreeID = *p_subTreeID;
        v17->state.currentAnimTime = *(float *)(p_subTreeID + 5);
        v17->state.weight = *(float *)(p_subTreeID + 3);
        SubTreeAnims = XAnimGetSubTreeAnims(tree, v18);
        if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 673, ASSERT_TYPE_ASSERT, "( anims )", (const char *)&queryFormat, "anims") )
          __debugbreak();
        if ( XAnimIsCustomNode(SubTreeAnims, v17) )
        {
          if ( !XAnimIsCustomNode(SubTreeAnims, v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 427, ASSERT_TYPE_ASSERT, "( XAnimIsCustomNode( anims, animInfo ) )", (const char *)&queryFormat, "XAnimIsCustomNode( anims, animInfo )") )
            __debugbreak();
          CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, v17);
          if ( CustomNodeTypeInfo->functions.calc )
          {
            nodeDataSize = CustomNodeTypeInfo->nodeDataSize;
            if ( (unsigned int)nodeDataSize <= antilagCustomNodeDataSize - v13 )
            {
              memcpy_0((char *)v17 + CustomNodeTypeInfo->dataOffset, &antilagCustomNodeData[v13], nodeDataSize);
            }
            else
            {
              LODWORD(nodeDataSize) = -1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 678, ASSERT_TYPE_ASSERT, "(customNodeDataRead != 0xffffffff)", "%s\n\tattempted to read beyond end of custom node data buffer", "customNodeDataRead != UINT_MAX") )
                __debugbreak();
            }
          }
          else
          {
            LODWORD(nodeDataSize) = 0;
          }
          v13 += nodeDataSize;
        }
        p_subTreeID += 8;
        --v15;
      }
      while ( v15 );
      _R14 = v26;
      children = v27;
    }
    if ( v13 != antilagCustomNodeDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 684, ASSERT_TYPE_ASSERT, "( customNodeDataStart == antilagCustomNodeDataSize )", (const char *)&queryFormat, "customNodeDataStart == antilagCustomNodeDataSize") )
      __debugbreak();
    if ( children )
    {
      AnimInfo = GetAnimInfo(children);
      if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 690, ASSERT_TYPE_ASSERT, "( existingRootInfo )", (const char *)&queryFormat, "existingRootInfo") )
        __debugbreak();
      v23 = tree->children;
      tree->children = children;
      _R14->parent = children;
      v24 = AnimInfo->children;
      if ( v24 )
      {
        v25 = GetAnimInfo(v24);
        if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 705, ASSERT_TYPE_ASSERT, "( existingChildInfo )", (const char *)&queryFormat, "existingChildInfo") )
          __debugbreak();
        if ( v25->prev )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 706, ASSERT_TYPE_ASSERT, "( existingChildInfo->prev == 0 )", (const char *)&queryFormat, "existingChildInfo->prev == 0") )
            __debugbreak();
        }
        v25->prev = v23;
        _R14->next = v24;
      }
      AnimInfo->children = v23;
    }
  }
}

/*
==============
XAnimReadSimpleAnimTree
==============
*/
void XAnimReadSimpleAnimTree(DObj *obj, MemoryFile *memFile, XAnimOwner owner)
{
  unsigned __int8 v3; 
  const char *CString; 
  XAnimTree *SimpleTree; 

  v3 = owner;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 310, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 311, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  CString = MemFile_ReadCString(memFile);
  SimpleTree = XAnimCreateSimpleTree(CString, (XAnimOwner)v3);
  DObjSetTree(obj, SimpleTree);
}

/*
==============
XAnimReadSimpleBlendAnimTree
==============
*/
void XAnimReadSimpleBlendAnimTree(DObj *obj, MemoryFile *memFile, XAnimOwner owner)
{
  unsigned __int8 v3; 
  const char *CString; 
  const char *v7; 
  XAnimTree *SimpleBlendTree; 

  v3 = owner;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 348, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 349, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  CString = MemFile_ReadCString(memFile);
  v7 = MemFile_ReadCString(memFile);
  SimpleBlendTree = XAnimCreateSimpleBlendTree(CString, v7, (XAnimOwner)v3);
  DObjSetTree(obj, SimpleBlendTree);
}

/*
==============
XAnimSaveAnimTree
==============
*/
void XAnimSaveAnimTree(const DObj *obj, MemoryFile *memFile)
{
  XAnimTree *tree; 
  unsigned __int16 children; 
  __int16 p; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 285, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree )
  {
    LOBYTE(p) = tree->clientNotifyEnabled;
    MemFile_WriteData(memFile, 1ui64, &p);
    XAnimWriteParameterValues(tree, memFile);
    children = tree->children;
    if ( children )
    {
      XAnimSaveAnimTree_r(obj, tree, memFile, children);
    }
    else
    {
      p = -1;
      MemFile_WriteData(memFile, 2ui64, &p);
    }
  }
}

/*
==============
XAnimSaveAnimTreeForAntilag
==============
*/
unsigned int XAnimSaveAnimTreeForAntilag(const DObj *obj, AntilagAnimInfo *antilagAnimInfo, unsigned int antilagAnimInfoSize, unsigned __int8 *customNodeDataBuffer, unsigned int customNodeDataBufferSize, unsigned int *outCustomNodeDataWritten)
{
  XAnimTree *tree; 
  XAnimInfo *AnimInfo; 
  unsigned __int16 children; 
  XAnimInfo *v13; 
  unsigned int v14; 
  signed __int64 v15; 
  XAnimAntilagBuffers buffers; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 577, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !antilagAnimInfoSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 578, ASSERT_TYPE_ASSERT, "( antilagAnimInfoSize > 0 )", (const char *)&queryFormat, "antilagAnimInfoSize > 0") )
    __debugbreak();
  if ( !customNodeDataBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 579, ASSERT_TYPE_ASSERT, "( customNodeDataBufferSize > 0 )", (const char *)&queryFormat, "customNodeDataBufferSize > 0") )
    __debugbreak();
  if ( !outCustomNodeDataWritten && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 580, ASSERT_TYPE_ASSERT, "( outCustomNodeDataWritten )", (const char *)&queryFormat, "outCustomNodeDataWritten") )
    __debugbreak();
  tree = obj->tree;
  if ( tree && tree->children )
  {
    buffers.animInfo = antilagAnimInfo;
    buffers.animInfoSize = antilagAnimInfoSize;
    buffers.customNodeData = customNodeDataBuffer;
    buffers.customNodeDataSize = customNodeDataBufferSize;
    AnimInfo = GetAnimInfo(tree->children);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 593, ASSERT_TYPE_ASSERT, "( rootInfo )", (const char *)&queryFormat, "rootInfo") )
      __debugbreak();
    children = AnimInfo->children;
    if ( children )
    {
      while ( XAnimSaveAnimTreeForAntilag_r(tree, children, &buffers) )
      {
        v13 = GetAnimInfo(children);
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 612, ASSERT_TYPE_ASSERT, "( currentInfo )", (const char *)&queryFormat, "currentInfo") )
          __debugbreak();
        children = v13->next;
        if ( !children )
          goto LABEL_26;
      }
      Com_PrintError(19, "Anti-lag animation tree archive is not large enough to store all character animation trees.\n");
    }
LABEL_26:
    v14 = truncate_cast<unsigned int,__int64>(buffers.customNodeData - customNodeDataBuffer);
    v15 = (char *)buffers.animInfo - (char *)antilagAnimInfo;
    *outCustomNodeDataWritten = v14;
    return truncate_cast<unsigned int,__int64>(v15 >> 4);
  }
  else
  {
    *outCustomNodeDataWritten = 0;
    return 0;
  }
}

/*
==============
XAnimSaveAnimTreeForAntilag_r
==============
*/
char XAnimSaveAnimTreeForAntilag_r(const XAnimTree *tree, unsigned __int16 infoIndex, XAnimAntilagBuffers *buffers)
{
  bool v8; 
  bool v9; 
  const XAnim_s *SubTreeAnims; 
  AntilagAnimInfo *animInfo; 
  XAnimInfo *v13; 
  unsigned __int8 *customNodeData; 
  unsigned int customNodeDataSize; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  unsigned int nodeDataSize; 
  unsigned __int16 children; 
  XAnimInfo *v19; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 504, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !buffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 505, ASSERT_TYPE_ASSERT, "( buffers )", (const char *)&queryFormat, "buffers") )
    __debugbreak();
  if ( buffers->animInfoSize )
  {
    _RSI = GetAnimInfo(infoIndex);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 514, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
      __debugbreak();
    v8 = !_RSI->inuse;
    if ( !_RSI->inuse )
    {
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 516, ASSERT_TYPE_ASSERT, "( info->inuse )", (const char *)&queryFormat, "info->inuse");
      v8 = !v9;
      if ( v9 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rsi+3Ch]
    }
    if ( v8 )
      return 1;
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_RSI->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 526, ASSERT_TYPE_ASSERT, "( anims )", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( XAnimIsClientOnlyNode(_RSI) )
      return 1;
    if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 387, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
      __debugbreak();
    if ( !XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)_RSI->subTreeID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 391, ASSERT_TYPE_ASSERT, "( anims )", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( XAnimIsClientOnlyNode(_RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 393, ASSERT_TYPE_ASSERT, "( !XAnimIsClientOnlyNode( animInfo ) )", (const char *)&queryFormat, "!XAnimIsClientOnlyNode( animInfo )") )
      __debugbreak();
    animInfo = buffers->animInfo;
    v13 = GetAnimInfo(infoIndex);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 453, ASSERT_TYPE_ASSERT, "( animInfo )", (const char *)&queryFormat, "animInfo") )
      __debugbreak();
    if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 454, ASSERT_TYPE_ASSERT, "( outAntilagInfo )", (const char *)&queryFormat, "outAntilagInfo") )
      __debugbreak();
    if ( !v13->animIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 455, ASSERT_TYPE_ASSERT, "( animInfo->animIndex != 0 )", (const char *)&queryFormat, "animInfo->animIndex != 0") )
      __debugbreak();
    animInfo->animIndex = v13->animIndex;
    animInfo->subTreeID = v13->subTreeID;
    animInfo->graftAnimIndex = XAnimGetGraftAnimIndex(infoIndex);
    animInfo->time = v13->state.currentAnimTime;
    animInfo->weight = v13->state.weight;
    if ( !XAnimIsCustomNode(SubTreeAnims, _RSI) )
    {
LABEL_49:
      if ( !buffers->animInfoSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 553, ASSERT_TYPE_ASSERT, "(buffers->animInfoSize > 0)", (const char *)&queryFormat, "buffers->animInfoSize > 0") )
        __debugbreak();
      --buffers->animInfoSize;
      ++buffers->animInfo;
      children = _RSI->children;
      if ( children )
      {
        while ( 1 )
        {
          v19 = GetAnimInfo(children);
          if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 560, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
            __debugbreak();
          if ( !XAnimSaveAnimTreeForAntilag_r(tree, children, buffers) )
            break;
          children = v19->next;
          if ( !children )
            return 1;
        }
        return 0;
      }
      return 1;
    }
    customNodeData = buffers->customNodeData;
    customNodeDataSize = buffers->customNodeDataSize;
    if ( !XAnimIsCustomNode(SubTreeAnims, _RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 401, ASSERT_TYPE_ASSERT, "( XAnimIsCustomNode( anims, animInfo ) )", (const char *)&queryFormat, "XAnimIsCustomNode( anims, animInfo )") )
      __debugbreak();
    CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, _RSI);
    if ( !CustomNodeTypeInfo->functions.calc )
    {
      nodeDataSize = 0;
      goto LABEL_45;
    }
    nodeDataSize = CustomNodeTypeInfo->nodeDataSize;
    if ( nodeDataSize <= customNodeDataSize )
    {
      memcpy_0(customNodeData, (char *)_RSI + CustomNodeTypeInfo->dataOffset, CustomNodeTypeInfo->nodeDataSize);
LABEL_45:
      if ( buffers->customNodeDataSize < nodeDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 547, ASSERT_TYPE_ASSERT, "( buffers->customNodeDataSize ) >= ( customNodeDataSize )", "%s >= %s\n\t%i, %i", "buffers->customNodeDataSize", "customNodeDataSize", buffers->customNodeDataSize, nodeDataSize) )
        __debugbreak();
      buffers->customNodeDataSize -= nodeDataSize;
      buffers->customNodeData += nodeDataSize;
      goto LABEL_49;
    }
  }
  return 0;
}

/*
==============
XAnimSaveAnimTreeWithVersion
==============
*/
void XAnimSaveAnimTreeWithVersion(const DObj *obj, MemoryFile *memFile, unsigned __int8 currentVersion)
{
  XAnimTree *tree; 
  unsigned __int16 children; 
  __int16 p; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 254, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  tree = obj->tree;
  if ( obj->tree )
  {
    LOBYTE(p) = (16 * currentVersion) | tree->clientNotifyEnabled;
    MemFile_WriteData(memFile, 1ui64, &p);
    XAnimWriteParameterValues(tree, memFile);
    children = tree->children;
    if ( children )
    {
      XAnimSaveAnimTree_r(obj, tree, memFile, children);
    }
    else
    {
      p = -1;
      MemFile_WriteData(memFile, 2ui64, &p);
    }
  }
}

/*
==============
XAnimSaveAnimTree_r
==============
*/
void XAnimSaveAnimTree_r(const DObj *obj, const XAnimTree *tree, MemoryFile *memFile, unsigned __int16 infoIndex)
{
  XAnimInfo *AnimInfo; 
  scr_string_t notifyName; 
  const char *v10; 
  unsigned __int16 i; 
  XAnimInfo *v12; 
  unsigned __int16 p; 

  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 214, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  AnimInfo = GetAnimInfo(infoIndex);
  if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 217, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !AnimInfo->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 219, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  p = AnimInfo->animIndex;
  MemFile_WriteData(memFile, 2ui64, &p);
  p = AnimInfo->subTreeID;
  MemFile_WriteData(memFile, 2ui64, &p);
  p = XAnimGetNumChildInfos(tree, AnimInfo);
  MemFile_WriteData(memFile, 2ui64, &p);
  p = AnimInfo->notifyIndex;
  MemFile_WriteData(memFile, 2ui64, &p);
  p = AnimInfo->notifyChild;
  MemFile_WriteData(memFile, 2ui64, &p);
  p = AnimInfo->notifyType;
  MemFile_WriteData(memFile, 2ui64, &p);
  notifyName = AnimInfo->notifyName;
  if ( notifyName )
    v10 = SL_ConvertToString(notifyName);
  else
    v10 = NULL;
  MemFile_WriteCString(memFile, v10);
  XAnimArchiveAnimState(&AnimInfo->state, memFile);
  XAnimWriteCustomNode(tree, AnimInfo, memFile);
  for ( i = AnimInfo->children; i; i = v12->next )
  {
    v12 = GetAnimInfo(i);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 237, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
      __debugbreak();
    if ( XAnimShouldSaveNode(tree, v12) )
      XAnimSaveAnimTree_r(obj, tree, memFile, i);
  }
}

/*
==============
XAnimWriteSimpleAnimTree
==============
*/
void XAnimWriteSimpleAnimTree(DObj *obj, MemoryFile *memFile)
{
  XAnimTree *tree; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 326, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 327, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 330, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 332, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( tree->anims->size != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 333, ASSERT_TYPE_ASSERT, "(tree->anims->size == 2)", (const char *)&queryFormat, "tree->anims->size == XANIM_SIMPLE_TREE_ANIM_COUNT") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 334, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 1)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 1") )
    __debugbreak();
  if ( HIWORD(tree->anims[1].size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 335, ASSERT_TYPE_ASSERT, "(tree->anims->entries[1].numAnims == 0)", (const char *)&queryFormat, "tree->anims->entries[1].numAnims == 0") )
    __debugbreak();
  MemFile_WriteCString(memFile, *(const char **)tree->anims[1].debugName);
}

/*
==============
XAnimWriteSimpleBlendAnimTree
==============
*/
void XAnimWriteSimpleBlendAnimTree(DObj *obj, MemoryFile *memFile)
{
  XAnimTree *tree; 
  XAnim_s *anims; 
  const char **v6; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 366, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 367, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  tree = obj->tree;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 370, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 372, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( tree->anims->size != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 373, ASSERT_TYPE_ASSERT, "(tree->anims->size == 3)", (const char *)&queryFormat, "tree->anims->size == XANIM_SIMPLE_BLEND_TREE_ANIM_COUNT") )
    __debugbreak();
  if ( tree->anims->entries[0].numAnims != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 374, ASSERT_TYPE_ASSERT, "(tree->anims->entries[0].numAnims == 2)", (const char *)&queryFormat, "tree->anims->entries[0].numAnims == 2") )
    __debugbreak();
  if ( HIWORD(tree->anims[1].size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_readwrite.cpp", 375, ASSERT_TYPE_ASSERT, "(tree->anims->entries[1].numAnims == 0)", (const char *)&queryFormat, "tree->anims->entries[1].numAnims == 0") )
    __debugbreak();
  anims = tree->anims;
  v6 = *(const char ***)&tree->anims[1].numGameParameters;
  MemFile_WriteCString(memFile, *(const char **)anims[1].debugName);
  MemFile_WriteCString(memFile, *v6);
}

