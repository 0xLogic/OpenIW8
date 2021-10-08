/*
==============
RB_Stream_TreeDebugDrawEnabled
==============
*/

bool __fastcall RB_Stream_TreeDebugDrawEnabled()
{
  return ?RB_Stream_TreeDebugDrawEnabled@@YA_NXZ();
}

/*
==============
RB_Stream_DebugDrawXModelStreamTreeGridCell
==============
*/

void __fastcall RB_Stream_DebugDrawXModelStreamTreeGridCell(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const int drawMode, const StreamTreeGrid *xmodelStreamTreeGrid, const XModelStreamTreeGridCell *xmodelStreamTreeGridCell)
{
  ?RB_Stream_DebugDrawXModelStreamTreeGridCell@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@HAEBUStreamTreeGrid@@AEBUXModelStreamTreeGridCell@@@Z(gfxContext, viewInfo, drawMode, xmodelStreamTreeGrid, xmodelStreamTreeGridCell);
}

/*
==============
Stream_TransientZoneStreamingQualitySufficient
==============
*/

bool __fastcall Stream_TransientZoneStreamingQualitySufficient(unsigned int transientZoneIndex)
{
  return ?Stream_TransientZoneStreamingQualitySufficient@@YA_NI@Z(transientZoneIndex);
}

/*
==============
FindGridCellIndex
==============
*/

unsigned int __fastcall FindGridCellIndex(const StreamTreeGrid *streamTreeGrid, const float streamTreeGridCellSize, const float4 *viewPos)
{
  return ?FindGridCellIndex@@YAIAEBUStreamTreeGrid@@MAEBUfloat4@@@Z(streamTreeGrid, streamTreeGridCellSize, viewPos);
}

/*
==============
Stream_TraverseStreamTree
==============
*/

void __fastcall Stream_TraverseStreamTree(const StreamTree *streamTree, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility)
{
  ?Stream_TraverseStreamTree@@YAXPEBUStreamTree@@W4LocalClientNum_t@@AEBUfloat4@@2MMMPEBV?$bitarray@$0GAA@@@@Z(streamTree, localClientIndex, viewPos, viewDir, zoomFactor, cosFovLimit, distanceScale, transientVisibility);
}

/*
==============
Stream_TraverseMaterialHybridStreamTree
==============
*/

void __fastcall Stream_TraverseMaterialHybridStreamTree(const StreamTree *materialStreamTree, const StreamTreeGrid *materialStreamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility)
{
  ?Stream_TraverseMaterialHybridStreamTree@@YAXAEBUStreamTree@@AEBUStreamTreeGrid@@IW4LocalClientNum_t@@AEBUfloat4@@3MMMPEBV?$bitarray@$0GAA@@@@Z(materialStreamTree, materialStreamTreeGrid, viewIndex, localClientIndex, viewPos, viewDir, zoomFactor, cosFovLimit, distanceScale, transientVisibility);
}

/*
==============
Stream_TraverseMaterialZoneCmd
==============
*/

void __fastcall Stream_TraverseMaterialZoneCmd(const void *const data)
{
  ?Stream_TraverseMaterialZoneCmd@@YAXQEBX@Z(data);
}

/*
==============
RB_Stream_XModelTreeDebugDraw
==============
*/

void __fastcall RB_Stream_XModelTreeDebugDraw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_Stream_XModelTreeDebugDraw@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
Stream_TraverseMaterialStreamTreeGrid
==============
*/

void __fastcall Stream_TraverseMaterialStreamTreeGrid(const StreamTreeGrid *materialStreamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility, bool useWorkers)
{
  ?Stream_TraverseMaterialStreamTreeGrid@@YAXAEBUStreamTreeGrid@@IW4LocalClientNum_t@@AEBUfloat4@@2MMMPEBV?$bitarray@$0GAA@@@_N@Z(materialStreamTreeGrid, viewIndex, localClientIndex, viewPos, viewDir, zoomFactor, cosFovLimit, distanceScale, transientVisibility, useWorkers);
}

/*
==============
Stream_MaterialMinDistancesTable_Recompute
==============
*/

void Stream_MaterialMinDistancesTable_Recompute(void)
{
  ?Stream_MaterialMinDistancesTable_Recompute@@YAXXZ();
}

/*
==============
Stream_TraverseXModelStreamTreeGrid
==============
*/

void __fastcall Stream_TraverseXModelStreamTreeGrid(const StreamTreeGrid *xmodelStreamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility)
{
  ?Stream_TraverseXModelStreamTreeGrid@@YAXAEBUStreamTreeGrid@@IW4LocalClientNum_t@@AEBUfloat4@@2MMMPEBV?$bitarray@$0GAA@@@@Z(xmodelStreamTreeGrid, viewIndex, localClientIndex, viewPos, viewDir, zoomFactor, cosFovLimit, distanceScale, transientVisibility);
}

/*
==============
ScopedStreamTreeLock::~ScopedStreamTreeLock
==============
*/

void __fastcall ScopedStreamTreeLock::~ScopedStreamTreeLock(ScopedStreamTreeLock *this)
{
  ??1ScopedStreamTreeLock@@QEAA@XZ(this);
}

/*
==============
Stream_TraverseFixOverrideImages
==============
*/

void __fastcall Stream_TraverseFixOverrideImages(const StreamTree *tree, const StreamTreeOverride *treeOverride)
{
  ?Stream_TraverseFixOverrideImages@@YAXPEBUStreamTree@@PEBUStreamTreeOverride@@@Z(tree, treeOverride);
}

/*
==============
RB_Stream_XModelTreeDebugDrawEnabled
==============
*/

bool __fastcall RB_Stream_XModelTreeDebugDrawEnabled()
{
  return ?RB_Stream_XModelTreeDebugDrawEnabled@@YA_NXZ();
}

/*
==============
RB_Stream_DebugDrawXModelStreamTreeGrid
==============
*/

void __fastcall RB_Stream_DebugDrawXModelStreamTreeGrid(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const int drawMode, const StreamTreeGrid *xmodelStreamTreeGrid)
{
  ?RB_Stream_DebugDrawXModelStreamTreeGrid@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@HAEBUStreamTreeGrid@@@Z(gfxContext, viewInfo, drawMode, xmodelStreamTreeGrid);
}

/*
==============
RB_Stream_TreeDebugDraw
==============
*/

void __fastcall RB_Stream_TreeDebugDraw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_Stream_TreeDebugDraw@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
ScopedStreamTreeLock::~ScopedStreamTreeLock
==============
*/
void ScopedStreamTreeLock::~ScopedStreamTreeLock(ScopedStreamTreeLock *this)
{
  Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
}

/*
==============
ComputeInstanceLodExtentBounds
==============
*/
void ComputeInstanceLodExtentBounds(ExtentBounds *lodExtentBounds, const unsigned __int64 lodIndex, const XModelInstance *instance, const XModel *xmodel)
{
  float v37; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
  }
  _RDI = xmodel;
  _RBP = instance;
  _RSI = lodExtentBounds;
  if ( lodIndex >= xmodel->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1221, ASSERT_TYPE_ASSERT, "(lodIndex < xmodel.numLods)", (const char *)&queryFormat, "lodIndex < xmodel.numLods") )
    __debugbreak();
  __asm
  {
    vmovsd  xmm7, qword ptr [rbp+0]
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, eax
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, eax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
  }
  v37 = _RBP->position.v[2];
  _RBX = lodIndex << 6;
  __asm
  {
    vmovsd  [rsp+88h+var_58], xmm7
    vmovss  xmm0, dword ptr [rbx+rdi+0F0h]
    vmulss  xmm1, xmm0, dword ptr [rax+20h]
    vaddss  xmm5, xmm4, xmm1
    vaddss  xmm4, xmm3, xmm1
    vmovss  xmm3, dword ptr [rsp+88h+var_58+4]
    vaddss  xmm6, xmm2, xmm1
    vmovss  xmm2, [rsp+88h+var_50]
    vsubss  xmm0, xmm7, xmm5
    vmovss  dword ptr [rsi], xmm0
    vsubss  xmm1, xmm3, xmm4
    vmovss  dword ptr [rsi+4], xmm1
    vsubss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rsi+8], xmm0
    vaddss  xmm1, xmm5, xmm7
    vmovss  dword ptr [rsi+0Ch], xmm1
    vaddss  xmm1, xmm6, xmm2
    vaddss  xmm0, xmm4, xmm3
    vmovss  dword ptr [rsi+14h], xmm1
    vmovss  dword ptr [rsi+10h], xmm0
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
}

/*
==============
ComputeMaterialMinDistancesForXModel
==============
*/
void ComputeMaterialMinDistancesForXModel(XAssetHeader header, void *data)
{
  int v7; 
  int v9; 
  unsigned int MaterialIndex; 
  unsigned __int64 v13; 
  unsigned int v14; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  void *retaddr; 
  int v25; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  v7 = 0;
  v25 = 0;
  if ( header.physicsLibrary->isMotionPropertiesList )
  {
    _R15 = (unsigned __int16 *)&header.physicsLibrary[10].name + 2;
    do
    {
      v9 = 0;
      if ( *_R15 )
      {
        _R13 = s_minDistSqForMaterials;
        do
        {
          MaterialIndex = DB_GetMaterialIndex(*(const Material **)&header.physicsLibrary[9].name[8 * v9 + 8 * _R15[1]]);
          _RDI = (int)MaterialIndex;
          if ( MaterialIndex >= 0xB400 )
          {
            LODWORD(v20) = 46080;
            LODWORD(v19) = MaterialIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v19, v20) )
              __debugbreak();
          }
          v13 = (unsigned __int64)(unsigned int)_RDI >> 5;
          v14 = 0x80000000 >> (_RDI & 0x1F);
          if ( (v14 & *((_DWORD *)data + v13 + 2)) != 0 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r13+rdi*4+0]
              vminss  xmm1, xmm0, xmm6
              vmovss  dword ptr [r13+rdi*4+0], xmm1
            }
          }
          else
          {
            __asm { vmovss  dword ptr [r13+rdi*4+0], xmm6 }
            if ( (unsigned int)_RDI >= 0xB400 )
            {
              LODWORD(v22) = 46080;
              LODWORD(v21) = _RDI;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v21, v22) )
                __debugbreak();
            }
            *((_DWORD *)data + v13 + 2) |= v14;
          }
          ++v9;
        }
        while ( v9 < *_R15 );
        v7 = v25;
      }
      __asm { vmovss  xmm0, dword ptr [r15-4] }
      ++v7;
      _R15 += 32;
      v25 = v7;
      __asm { vmulss  xmm6, xmm0, xmm0 }
    }
    while ( v7 < header.physicsLibrary->isMotionPropertiesList );
  }
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
}

/*
==============
FindClosestGridCell
==============
*/
StreamKey *FindClosestGridCell(const StreamTreeGrid *xmodelStreamTreeGrid, float4 *viewPos)
{
  unsigned int v16; 
  unsigned __int16 columnCount; 
  unsigned int i; 
  __int64 v23; 
  bool v41; 
  StreamKey *result; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps [rsp+118h+var_A8], xmm12 }
  _R14 = viewPos;
  __asm
  {
    vmovaps [rsp+118h+var_B8], xmm13
    vmovaps [rsp+118h+var_C8], xmm14
  }
  v16 = 0;
  __asm
  {
    vmovss  xmm12, cs:__real@7f7fffff
    vxorps  xmm14, xmm14, xmm14
    vxorps  xmm13, xmm13, xmm13
  }
  if ( xmodelStreamTreeGrid->rowCount )
  {
    __asm
    {
      vmovaps xmmword ptr [rax-48h], xmm6
      vmovaps xmmword ptr [rax-58h], xmm7
      vmovaps xmmword ptr [rax-68h], xmm8
      vmovaps xmmword ptr [rax-78h], xmm9
      vmovaps xmmword ptr [rax-88h], xmm10
      vmovaps xmmword ptr [rax-98h], xmm11
      vmovaps [rsp+118h+var_D8], xmm15
      vmovss  xmm15, cs:__real@3a83126f
    }
    do
    {
      columnCount = xmodelStreamTreeGrid->columnCount;
      for ( i = 0; i < columnCount; columnCount = xmodelStreamTreeGrid->columnCount )
      {
        v23 = i + v16 * columnCount;
        if ( xmodelStreamTreeGrid->cellKeys[v23] && Stream_GenericIsSafeToUse(xmodelStreamTreeGrid->cellKeys[v23]) )
        {
          __asm
          {
            vmovss  xmm3, cs:?g_xmodelStreamTreeGridCellSize@@3MB; float const g_xmodelStreamTreeGridCellSize
            vmovups xmm11, xmmword ptr [r14]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm3
            vaddss  xmm2, xmm1, dword ptr [rsi+28h]
            vxorps  xmm0, xmm0, xmm0
            vmulss  xmm7, xmm3, xmm15
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm3
            vaddss  xmm9, xmm1, dword ptr [rsi+2Ch]
            vaddss  xmm0, xmm2, xmm3
            vsubss  xmm6, xmm0, xmm7
            vaddss  xmm8, xmm2, xmm7
            vcomiss xmm8, xmm6
            vaddss  xmm10, xmm9, xmm3
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  [rsp+118h+var_E8], xmm0
            vcvtss2sd xmm1, xmm8, xmm8
            vmovsd  [rsp+118h+var_F0], xmm1
          }
          v41 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v68, v70);
          if ( v41 )
            __debugbreak();
          __asm
          {
            vmaxss  xmm0, xmm11, xmm8
            vmovss  xmm11, dword ptr [r14+4]
            vminss  xmm8, xmm0, xmm6
            vsubss  xmm6, xmm10, xmm7
            vaddss  xmm7, xmm9, xmm7
            vcomiss xmm7, xmm6
          }
          if ( v41 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm6, xmm6
              vmovsd  [rsp+118h+var_E8], xmm0
              vcvtss2sd xmm1, xmm7, xmm7
              vmovsd  [rsp+118h+var_F0], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v69, v71) )
              __debugbreak();
          }
          __asm
          {
            vmovups xmm1, xmmword ptr [r14]
            vmaxss  xmm0, xmm11, xmm7
            vminss  xmm3, xmm0, xmm6
            vshufps xmm0, xmm1, xmm1, 55h ; 'U'
            vsubss  xmm0, xmm0, xmm3
            vsubss  xmm1, xmm1, xmm8
            vmulss  xmm2, xmm0, xmm0
            vmulss  xmm1, xmm1, xmm1
            vaddss  xmm4, xmm2, xmm1
            vcomiss xmm4, xmm12
          }
        }
        ++i;
      }
      ++v16;
    }
    while ( v16 < xmodelStreamTreeGrid->rowCount );
    __asm { vmovaps xmm15, [rsp+118h+var_D8] }
    result = NULL;
    __asm
    {
      vmovaps xmm11, [rsp+118h+var_98]
      vmovaps xmm10, [rsp+118h+var_88]
      vmovaps xmm9, [rsp+118h+var_78]
      vmovaps xmm8, [rsp+118h+var_68]
      vmovaps xmm7, [rsp+118h+var_58]
      vmovaps xmm6, [rsp+118h+var_48]
    }
  }
  else
  {
    result = NULL;
  }
  __asm
  {
    vmovaps xmm12, [rsp+118h+var_A8]
    vmovaps xmm13, [rsp+118h+var_B8]
    vmovaps xmm14, [rsp+118h+var_C8]
  }
  return result;
}

/*
==============
FindGridCellIndex
==============
*/

__int64 __fastcall FindGridCellIndex(const StreamTreeGrid *streamTreeGrid, double streamTreeGridCellSize, const float4 *viewPos)
{
  int columnCount; 
  int rowCount; 
  unsigned int v20; 
  __int64 result; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RBX = viewPos;
  __asm { vmovaps xmm6, xmm1 }
  Sys_ProfBeginNamedEvent(0xFF808080, "FindGridCellIndex");
  __asm
  {
    vmovups xmm2, xmmword ptr [rbx]
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vsubss  xmm1, xmm2, dword ptr [rbp+28h]
    vsubss  xmm3, xmm0, dword ptr [rbp+2Ch]
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm2, xmm0, xmm6
    vmulss  xmm1, xmm2, xmm1
    vcvttss2si esi, xmm1
    vmulss  xmm0, xmm2, xmm3
    vcvttss2si edi, xmm0
  }
  columnCount = streamTreeGrid->columnCount;
  if ( columnCount - 1 < 0 )
  {
    v26 = columnCount - 1;
    v24 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v24, v26) )
      __debugbreak();
  }
  if ( columnCount <= _ESI )
    _ESI = columnCount - 1;
  if ( _ESI < 0 )
    _ESI = 0;
  rowCount = streamTreeGrid->rowCount;
  if ( rowCount - 1 < 0 )
  {
    LODWORD(v25) = rowCount - 1;
    LODWORD(v23) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v23, v25) )
      __debugbreak();
  }
  if ( rowCount <= _EDI )
    _EDI = rowCount - 1;
  if ( _EDI < 0 )
    _EDI = 0;
  v20 = _ESI + _EDI * streamTreeGrid->columnCount;
  if ( v20 >= streamTreeGrid->columnCount * (unsigned int)streamTreeGrid->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1544, ASSERT_TYPE_ASSERT, "(gridCellIndex < static_cast<uint>( streamTreeGrid.rowCount * streamTreeGrid.columnCount ))", (const char *)&queryFormat, "gridCellIndex < static_cast<uint>( streamTreeGrid.rowCount * streamTreeGrid.columnCount )") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  result = v20;
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
GetHimipDistanceFactor
==============
*/
float GetHimipDistanceFactor()
{
  const dvar_t *v6; 

  _RAX = streamFrontendGlob;
  _RBX = DVARFLT_stream_treeDistanceFactor;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  xmm7, dword ptr [rax+0B96B3Ch]
  }
  if ( !DVARFLT_stream_treeDistanceFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDistanceFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v6 = DVARFLT_stream_treeDistanceMinClamp;
  if ( !DVARFLT_stream_treeDistanceMinClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDistanceMinClamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  __asm
  {
    vmulss  xmm0, xmm6, xmm7
    vmaxss  xmm0, xmm0, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
RB_Stream_DebugDrawImages
==============
*/
__int64 RB_Stream_DebugDrawImages(GfxCmdBufContext *gfxContext, const MaterialStreamTreeCellContext *context, unsigned int groupStartIndex, unsigned int instanceGroupCount, unsigned int instanceIndex, int drawAssetIndex, const GfxMatrix *viewProjectionMatrix)
{
  __int64 v8; 
  unsigned int v9; 
  const MaterialStreamTreeGridCell *gridCell; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int GfxImageIndex; 
  unsigned __int16 v17; 
  unsigned int v18; 
  __int64 v20; 
  __int64 v22; 
  __int64 v23; 
  const StreamTreeGrid *streamTreeGrid; 
  GfxCmdBufContext v25; 
  __int64 v26; 
  unsigned int v27; 

  v27 = groupStartIndex;
  _R13 = gfxContext;
  v8 = instanceGroupCount;
  v9 = groupStartIndex;
  if ( !context->streamTreeGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1948, ASSERT_TYPE_ASSERT, "(context.streamTreeGrid != nullptr)", (const char *)&queryFormat, "context.streamTreeGrid != nullptr") )
    __debugbreak();
  streamTreeGrid = context->streamTreeGrid;
  if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1951, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
    __debugbreak();
  gridCell = context->gridCell;
  v12 = gridCell->materialInstanceCount + gridCell->imageInstanceCount;
  if ( !(_DWORD)v8 )
    return instanceIndex;
  v13 = instanceIndex;
  v14 = v8;
  v26 = v8;
  do
  {
    if ( v9 >= gridCell->instanceGroupCount )
    {
      LODWORD(v23) = gridCell->instanceGroupCount;
      LODWORD(v22) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1961, ASSERT_TYPE_ASSERT, "(unsigned)( imgInstanceGroupIndex ) < (unsigned)( gridCell.instanceGroupCount )", "imgInstanceGroupIndex doesn't index gridCell.instanceGroupCount\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v15 = (__int64)&gridCell->instanceGroups[v9];
    if ( !*(_WORD *)(v15 + 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1965, ASSERT_TYPE_ASSERT, "(imgInstanceGroup.instanceCount > 0)", (const char *)&queryFormat, "imgInstanceGroup.instanceCount > 0") )
      __debugbreak();
    if ( *(unsigned __int16 *)(v15 + 4) >= streamTreeGrid->imageCount )
    {
      LODWORD(v23) = streamTreeGrid->imageCount;
      LODWORD(v22) = *(unsigned __int16 *)(v15 + 4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1966, ASSERT_TYPE_ASSERT, "(unsigned)( imgInstanceGroup.assetIndex ) < (unsigned)( streamTreeGrid.imageCount )", "imgInstanceGroup.assetIndex doesn't index streamTreeGrid.imageCount\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    GfxImageIndex = DB_GetGfxImageIndex(streamTreeGrid->images[*(unsigned __int16 *)(v15 + 4)]);
    v17 = *(_WORD *)(v15 + 6);
    if ( GfxImageIndex == drawAssetIndex )
    {
      v18 = 0;
      if ( v17 )
      {
        do
        {
          if ( v13 >= v12 )
          {
            LODWORD(v23) = v12;
            LODWORD(v22) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1979, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( cellInstanceCount )", "instanceIndex doesn't index cellInstanceCount\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          __asm { vmovups xmm0, xmmword ptr [r13+0] }
          v20 = v13++;
          __asm { vmovups [rsp+98h+var_48], xmm0 }
          RB_Stream_StreamTreeDebugBox(&v25, &gridCell->instances[v20].bounds.mins, &gridCell->instances[v20].bounds.maxs, &colorMagenta, viewProjectionMatrix);
          ++v18;
        }
        while ( v18 < *(unsigned __int16 *)(v15 + 6) );
        v9 = v27;
        v14 = v26;
      }
    }
    else
    {
      v13 += v17;
    }
    ++v9;
    --v14;
    v27 = v9;
    v26 = v14;
  }
  while ( v14 );
  return v13;
}

/*
==============
RB_Stream_DebugDrawMaterials
==============
*/
__int64 RB_Stream_DebugDrawMaterials(GfxCmdBufContext *gfxContext, const MaterialStreamTreeCellContext *context, unsigned int groupStartIndex, unsigned int instanceGroupCount, unsigned int instanceIndex, int drawAssetIndex, const GfxMatrix *viewProjectionMatrix)
{
  __int64 v8; 
  unsigned int v9; 
  const MaterialStreamTreeGridCell *gridCell; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int MaterialIndex; 
  unsigned __int16 v17; 
  unsigned int v18; 
  __int64 v20; 
  __int64 v22; 
  __int64 v23; 
  const StreamTreeGrid *streamTreeGrid; 
  GfxCmdBufContext v25; 
  __int64 v26; 
  unsigned int v27; 

  v27 = groupStartIndex;
  _R13 = gfxContext;
  v8 = instanceGroupCount;
  v9 = groupStartIndex;
  if ( !context->streamTreeGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1900, ASSERT_TYPE_ASSERT, "(context.streamTreeGrid != nullptr)", (const char *)&queryFormat, "context.streamTreeGrid != nullptr") )
    __debugbreak();
  streamTreeGrid = context->streamTreeGrid;
  if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1903, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
    __debugbreak();
  gridCell = context->gridCell;
  v12 = gridCell->materialInstanceCount + gridCell->imageInstanceCount;
  if ( !(_DWORD)v8 )
    return instanceIndex;
  v13 = instanceIndex;
  v14 = v8;
  v26 = v8;
  do
  {
    if ( v9 >= gridCell->instanceGroupCount )
    {
      LODWORD(v23) = gridCell->instanceGroupCount;
      LODWORD(v22) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1913, ASSERT_TYPE_ASSERT, "(unsigned)( mtlInstanceGroupIndex ) < (unsigned)( gridCell.instanceGroupCount )", "mtlInstanceGroupIndex doesn't index gridCell.instanceGroupCount\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    v15 = (__int64)&gridCell->instanceGroups[v9];
    if ( !*(_WORD *)(v15 + 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1917, ASSERT_TYPE_ASSERT, "(mtlInstanceGroup.instanceCount > 0)", (const char *)&queryFormat, "mtlInstanceGroup.instanceCount > 0") )
      __debugbreak();
    if ( *(unsigned __int16 *)(v15 + 4) >= streamTreeGrid->materialCount )
    {
      LODWORD(v23) = streamTreeGrid->materialCount;
      LODWORD(v22) = *(unsigned __int16 *)(v15 + 4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1918, ASSERT_TYPE_ASSERT, "(unsigned)( mtlInstanceGroup.assetIndex ) < (unsigned)( streamTreeGrid.materialCount )", "mtlInstanceGroup.assetIndex doesn't index streamTreeGrid.materialCount\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    MaterialIndex = DB_GetMaterialIndex(streamTreeGrid->materials[*(unsigned __int16 *)(v15 + 4)]);
    v17 = *(_WORD *)(v15 + 6);
    if ( MaterialIndex == drawAssetIndex )
    {
      v18 = 0;
      if ( v17 )
      {
        do
        {
          if ( v13 >= v12 )
          {
            LODWORD(v23) = v12;
            LODWORD(v22) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1931, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( cellInstanceCount )", "instanceIndex doesn't index cellInstanceCount\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          __asm { vmovups xmm0, xmmword ptr [r13+0] }
          v20 = v13++;
          __asm { vmovups [rsp+98h+var_48], xmm0 }
          RB_Stream_StreamTreeDebugBox(&v25, &gridCell->instances[v20].bounds.mins, &gridCell->instances[v20].bounds.maxs, &colorMagenta, viewProjectionMatrix);
          ++v18;
        }
        while ( v18 < *(unsigned __int16 *)(v15 + 6) );
        v9 = v27;
        v14 = v26;
      }
    }
    else
    {
      v13 += v17;
    }
    ++v9;
    --v14;
    v27 = v9;
    v26 = v14;
  }
  while ( v14 );
  return v13;
}

/*
==============
RB_Stream_DebugDrawStreamTreeRecursive
==============
*/
void RB_Stream_DebugDrawStreamTreeRecursive(GfxCmdBufContext *gfxContext, const StreamTreeNode *node, const MaterialStreamTreeContext *context, int curDepth, int drawAssetIndex, int maxDepth, const GfxMatrix *viewProjectionMatrix)
{
  const StreamTreeNode *v8; 
  char v11; 
  char v12; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  bool v18; 
  int v19; 
  StreamKey *volumesKey; 
  const streamer_handle_t *p_dataHandle; 
  unsigned __int8 *data; 
  int imgInfoCount; 
  unsigned int v24; 
  unsigned int v25; 
  StreamMtlImgInfo *infos; 
  __int64 v27; 
  unsigned int i; 
  __int64 v30; 
  unsigned int v31; 
  StreamMtlImgInfo *v32; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v37; 
  int v38; 
  const StreamTree *v40; 
  const StreamTree *v42; 
  const vec4_t *v44; 
  unsigned __int16 v45; 
  unsigned __int16 v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  int v50; 
  const StreamTree *streamTree; 
  unsigned int v52; 
  GfxCmdBufContext v53; 

  v8 = node;
  _R15 = gfxContext;
  _RSI = context;
  *(float *)&_XMM0 = Stream_DistanceSqToAABB(context, &node->aabb);
  __asm { vcomiss xmm0, cs:__real@4bbebc20 }
  if ( !(v11 | v12) )
    return;
  __asm
  {
    vaddss  xmm0, xmm0, cs:__real@3f800000
    vmulss  xmm0, xmm0, dword ptr [r14+34h]
    vmulss  xmm1, xmm0, dword ptr [rsi+28h]
    vcomiss xmm1, dword ptr [rsi+2Ch]
  }
  if ( !(v11 | v12) )
    return;
  if ( !_RSI->streamTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1744, ASSERT_TYPE_ASSERT, "(context.streamTree != nullptr)", (const char *)&queryFormat, "context.streamTree != nullptr") )
    __debugbreak();
  v16 = v8->childNodes[0];
  v17 = v8->childNodes[1];
  streamTree = _RSI->streamTree;
  v45 = v16;
  v46 = v17;
  v18 = v16 == 0xFFFF && v17 == 0xFFFF;
  v19 = drawAssetIndex;
  if ( drawAssetIndex == -1 )
  {
    __asm { vmovups xmm0, xmmword ptr [r15] }
    v44 = &colorGreen;
    if ( v18 )
      v44 = &colorBlue;
    __asm { vmovups xmmword ptr [rsp+0B8h+var_58.source], xmm0 }
    RB_Stream_StreamTreeDebugBox(&v53, &v8->aabb.mins, &v8->aabb.maxs, v44, viewProjectionMatrix);
  }
  else
  {
    if ( !v8->volumesKey )
      goto LABEL_44;
    if ( Stream_GenericIsSafeToUse(v8->volumesKey) )
    {
      volumesKey = v8->volumesKey;
      p_dataHandle = &v8->volumesKey->data.dataHandle;
      if ( (v8->volumesKey->flags & 2) != 0 )
        data = (unsigned __int8 *)p_dataHandle->data;
      else
        data = Stream_AddressSpace_ResolveHandle(p_dataHandle);
      if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1760, ASSERT_TYPE_ASSERT, "(volumes != nullptr)", (const char *)&queryFormat, "volumes != nullptr") )
        __debugbreak();
      imgInfoCount = v8->imgInfoCount;
      v52 = volumesKey->dataSize / 0x18;
      v50 = v8->mtlInfoCount + imgInfoCount;
      v49 = 0;
      v24 = 0;
      v25 = 0;
      if ( v8->mtlInfoCount )
      {
        do
        {
          infos = v8->infos;
          v27 = v24++;
          v47 = v24;
          if ( DB_GetMaterialIndex(streamTree->materials[infos[v27].assetIndex]) == drawAssetIndex )
          {
            for ( i = 0; i < infos[v27].volumeCount; ++i )
            {
              __asm { vmovups xmm0, xmmword ptr [r15] }
              v30 = v25++;
              __asm { vmovups xmmword ptr [rsp+0B8h+var_58.source], xmm0 }
              RB_Stream_DebugDrawStreamTreeVolume(&v53, (const StreamVolumeCompressed *)&data[24 * v30], viewProjectionMatrix);
            }
            v24 = v47;
          }
          else
          {
            v25 += infos[v27].volumeCount;
          }
          ++v49;
        }
        while ( v49 < v8->mtlInfoCount );
        LOWORD(imgInfoCount) = v8->imgInfoCount;
      }
      v31 = 0;
      if ( (_WORD)imgInfoCount )
      {
        do
        {
          v32 = v8->infos;
          v33 = v24++;
          v48 = v24;
          if ( DB_GetGfxImageIndex(streamTree->images[v32[v33].assetIndex]) == drawAssetIndex )
          {
            v34 = 0;
            if ( v32[v33].volumeCount )
            {
              _R14 = gfxContext;
              do
              {
                __asm { vmovups xmm0, xmmword ptr [r14] }
                v37 = v25++;
                __asm { vmovups xmmword ptr [rsp+0B8h+var_58.source], xmm0 }
                RB_Stream_DebugDrawStreamTreeVolume(&v53, (const StreamVolumeCompressed *)&data[24 * v37], viewProjectionMatrix);
                ++v34;
              }
              while ( v34 < v32[v33].volumeCount );
              v8 = node;
            }
            v24 = v48;
          }
          else
          {
            v25 += v32[v33].volumeCount;
          }
          ++v31;
        }
        while ( v31 < v8->imgInfoCount );
      }
      if ( v24 != v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1817, ASSERT_TYPE_ASSERT, "(nodeInfoIndex == nodeInfoCount)", (const char *)&queryFormat, "nodeInfoIndex == nodeInfoCount") )
        __debugbreak();
      if ( v25 != v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1818, ASSERT_TYPE_ASSERT, "(nodeVolumeIndex == totalVolumeCount)", (const char *)&queryFormat, "nodeVolumeIndex == totalVolumeCount") )
        __debugbreak();
      v17 = v46;
      v19 = drawAssetIndex;
      _RSI = context;
      _R15 = gfxContext;
    }
  }
  v16 = v45;
LABEL_44:
  if ( curDepth < maxDepth )
  {
    v38 = curDepth + 1;
    if ( v16 != 0xFFFF )
    {
      __asm { vmovups xmm0, xmmword ptr [r15] }
      v40 = _RSI->streamTree;
      __asm { vmovups xmmword ptr [rsp+0B8h+var_58.source], xmm0 }
      RB_Stream_DebugDrawStreamTreeRecursive(&v53, &v40->nodes[v16], _RSI, v38, v19, maxDepth, viewProjectionMatrix);
    }
    if ( v17 != 0xFFFF )
    {
      __asm { vmovups xmm0, xmmword ptr [r15] }
      v42 = _RSI->streamTree;
      __asm { vmovups xmmword ptr [rsp+0B8h+var_58.source], xmm0 }
      RB_Stream_DebugDrawStreamTreeRecursive(&v53, &v42->nodes[v17], _RSI, v38, v19, maxDepth, viewProjectionMatrix);
    }
  }
}

/*
==============
RB_Stream_DebugDrawStreamTreeVolume
==============
*/
void RB_Stream_DebugDrawStreamTreeVolume(GfxCmdBufContext *gfxContext, const StreamVolumeCompressed *volume, const GfxMatrix *viewProjectionMatrix)
{
  GfxCmdBufContext v25; 
  __int128 v26; 
  vec3_t v27; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
  }
  HIDWORD(v26) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+40h]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rdx]
    vinsertps xmm4, xmm4, xmm1, 10h
    vinsertps xmm4, xmm4, xmm2, 20h ; ' '
    vmovups xmmword ptr [rsp+40h], xmm4
  }
  HIDWORD(v26) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+40h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rdx+8], 20h ; ' '
    vmovups xmm0, xmmword ptr [rcx]
    vsubps  xmm2, xmm3, xmm4
    vaddps  xmm1, xmm3, xmm4
    vmovups xmmword ptr [rsp+40h], xmm3
  }
  HIDWORD(v26) = HIDWORD(_RT0);
  __asm
  {
    vmovss  [rsp+78h+var_28], xmm1
    vextractps [rsp+78h+var_24], xmm1, 1
    vextractps [rsp+78h+var_20], xmm1, 2
    vmovss  [rsp+78h+var_38], xmm2
    vextractps [rsp+78h+var_34], xmm2, 1
    vextractps [rsp+78h+var_30], xmm2, 2
    vmovups [rsp+78h+var_48], xmm0
  }
  RB_Stream_StreamTreeDebugBox(&v25, (const vec3_t *)&v26, &v27, &colorMagenta, viewProjectionMatrix);
}

/*
==============
RB_Stream_DebugDrawStreamTreeZoneRecursive
==============
*/
void RB_Stream_DebugDrawStreamTreeZoneRecursive(GfxCmdBufContext *gfxContext, const MaterialStreamTreeNode *node, const MaterialStreamTreeCellContext *context, int curDepth, int drawAssetIndex, int maxDepth, const GfxMatrix *viewProjectionMatrix)
{
  unsigned int instanceStartIndex; 
  unsigned int materialInstanceGroupCount; 
  unsigned int instanceGroupStartIndex; 
  unsigned int v15; 
  unsigned int v17; 
  unsigned int imageInstanceGroupCount; 
  bool v19; 
  unsigned __int16 v23; 
  const MaterialStreamTreeGridCell *gridCell; 
  unsigned __int16 v25; 
  const MaterialStreamTreeNode *v27; 
  const MaterialStreamTreeNode *v29; 
  GfxCmdBufContext v30; 
  GfxCmdBufContext v31; 

  _R14 = gfxContext;
  if ( drawAssetIndex == -1 )
  {
    v19 = node->childNodes[0] == 0xFFFF && node->childNodes[1] == 0xFFFF;
    __asm { vmovups xmm1, xmmword ptr [r14] }
    _RAX = &colorGreen;
    if ( v19 )
      _RAX = &colorBlue;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rsp+0B8h+var_68], xmm0
      vmovups [rsp+0B8h+var_78], xmm1
    }
    RB_Stream_StreamTreeDebugBox(&v30, &node->bounds.mins, &node->bounds.maxs, (const vec4_t *)&v31, viewProjectionMatrix);
  }
  else
  {
    instanceStartIndex = node->instanceStartIndex;
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    materialInstanceGroupCount = node->materialInstanceGroupCount;
    instanceGroupStartIndex = node->instanceGroupStartIndex;
    __asm { vmovups [rsp+0B8h+var_68], xmm0 }
    v15 = RB_Stream_DebugDrawMaterials(&v31, context, instanceGroupStartIndex, materialInstanceGroupCount, instanceStartIndex, drawAssetIndex, viewProjectionMatrix);
    __asm { vmovups xmm0, xmmword ptr [r14] }
    v17 = node->instanceGroupStartIndex + node->materialInstanceGroupCount;
    imageInstanceGroupCount = node->imageInstanceGroupCount;
    __asm { vmovups [rsp+0B8h+var_68], xmm0 }
    if ( (unsigned int)RB_Stream_DebugDrawImages(&v31, context, v17, imageInstanceGroupCount, v15, drawAssetIndex, viewProjectionMatrix) - node->instanceStartIndex != node->instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2008, ASSERT_TYPE_ASSERT, "(( instanceIndex - node.instanceStartIndex ) == node.instanceCount)", (const char *)&queryFormat, "( instanceIndex - node.instanceStartIndex ) == node.instanceCount") )
      __debugbreak();
  }
  if ( curDepth < maxDepth )
  {
    if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2020, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
      __debugbreak();
    v23 = node->childNodes[0];
    gridCell = context->gridCell;
    v25 = node->childNodes[1];
    if ( v23 != 0xFFFF )
    {
      __asm { vmovups xmm0, xmmword ptr [r14] }
      v27 = &gridCell->nodes[v23];
      __asm { vmovups [rsp+0B8h+var_78], xmm0 }
      RB_Stream_DebugDrawStreamTreeZoneRecursive(&v30, v27, context, curDepth + 1, drawAssetIndex, maxDepth, viewProjectionMatrix);
    }
    if ( v25 != 0xFFFF )
    {
      __asm { vmovups xmm0, xmmword ptr [r14] }
      v29 = &gridCell->nodes[v25];
      __asm { vmovups [rsp+0B8h+var_78], xmm0 }
      RB_Stream_DebugDrawStreamTreeZoneRecursive(&v30, v29, context, curDepth + 1, drawAssetIndex, maxDepth, viewProjectionMatrix);
    }
  }
}

/*
==============
RB_Stream_DebugDrawXModelStreamTreeGrid
==============
*/
void RB_Stream_DebugDrawXModelStreamTreeGrid(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const int drawMode, const StreamTreeGrid *xmodelStreamTreeGrid)
{
  StreamKey **cellKeys; 
  unsigned int GridCellIndex; 
  __int64 v18; 
  const StreamKey *v19; 
  const XModelStreamTreeGridCell *v20; 
  const dvar_t *v29; 
  const XModelStreamTreeNode *nodes; 
  const dvar_t *v31; 
  int integer; 
  const dvar_t *v33; 
  XModelStreamTreeContext v36; 
  float4 viewPos; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RSI = viewInfo;
  _R15 = gfxContext;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2268, ASSERT_TYPE_ASSERT, "(viewInfo != nullptr)", (const char *)&queryFormat, "viewInfo != nullptr") )
    __debugbreak();
  if ( xmodelStreamTreeGrid->version != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2270, ASSERT_TYPE_ASSERT, "(xmodelStreamTreeGrid.version == STREAM_XMODEL_TREE_VERSION)", (const char *)&queryFormat, "xmodelStreamTreeGrid.version == STREAM_XMODEL_TREE_VERSION") )
    __debugbreak();
  cellKeys = xmodelStreamTreeGrid->cellKeys;
  if ( xmodelStreamTreeGrid->cellKeys )
  {
    Sys_EnterCriticalSection(CRITSECT_STREAM_TREE_DRAW);
    if ( !xmodelStreamTreeGrid->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2280, ASSERT_TYPE_ASSERT, "(xmodelStreamTreeGrid.rowCount > 0)", (const char *)&queryFormat, "xmodelStreamTreeGrid.rowCount > 0") )
      __debugbreak();
    if ( !xmodelStreamTreeGrid->columnCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2281, ASSERT_TYPE_ASSERT, "(xmodelStreamTreeGrid.columnCount > 0)", (const char *)&queryFormat, "xmodelStreamTreeGrid.columnCount > 0") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rsi+400h] }
    viewPos.v.m128_i32[3] = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp-9]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsi+404h], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+408h], 20h ; ' '
      vmovups xmmword ptr [rbp-9], xmm3
      vmovups xmmword ptr [rbp-9], xmm3
      vmovss  xmm1, cs:?g_xmodelStreamTreeGridCellSize@@3MB; streamTreeGridCellSize
    }
    GridCellIndex = FindGridCellIndex(xmodelStreamTreeGrid, *(const float *)&_XMM1, &viewPos);
    v18 = GridCellIndex;
    if ( GridCellIndex >= xmodelStreamTreeGrid->rowCount * (unsigned int)xmodelStreamTreeGrid->columnCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2288, ASSERT_TYPE_ASSERT, "(gridCellIndex < static_cast<uint>( xmodelStreamTreeGrid.rowCount * xmodelStreamTreeGrid.columnCount ))", (const char *)&queryFormat, "gridCellIndex < static_cast<uint>( xmodelStreamTreeGrid.rowCount * xmodelStreamTreeGrid.columnCount )") )
      __debugbreak();
    v19 = cellKeys[v18];
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2291, ASSERT_TYPE_ASSERT, "(gridCellKey != nullptr)", (const char *)&queryFormat, "gridCellKey != nullptr") )
      __debugbreak();
    if ( Stream_GenericIsSafeToUse(v19) )
    {
      Stream_UsedGeneric(v19);
      v20 = XModelStreamTreeGridCell::DeserializeBegin(v19);
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2310, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
        __debugbreak();
      __asm { vmovups xmm6, xmmword ptr [r15] }
      if ( v20->nodes )
      {
        __asm { vmovss  xmm0, dword ptr [rsi+400h] }
        viewPos.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rbp+57h+viewPos.v]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rsi+404h], 10h
          vinsertps xmm3, xmm3, dword ptr [rsi+408h], 20h ; ' '
          vmovups xmmword ptr [rbp+57h+viewPos.v], xmm3
          vmovss  [rbp+57h+var_C0], xmm3
          vextractps [rbp+57h+var_BC], xmm3, 1
          vextractps [rbp+57h+var_B8], xmm3, 2
          vextractps [rbp+57h+var_B4], xmm3, 3
          vmovss  xmm1, cs:__real@3f800000
          vmovss  [rbp+57h+var_A0], xmm1
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rbp+57h+var_9C], xmm0
          vmovss  [rbp+57h+var_98], xmm1
        }
        *(float *)&_XMM0 = GetHimipDistanceFactor();
        __asm { vmovss  [rbp+57h+var_94], xmm0 }
        v29 = DVARINT_stream_treeSpanBoost;
        if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        v36.spanBoost = v29->current.integer;
        v36.streamTreeGrid = xmodelStreamTreeGrid;
        v36.gridCell = v20;
        v36.transientVisibility = NULL;
        nodes = v20->nodes;
        v31 = DCONST_DVARINT_stream_treeDrawMaxDepth;
        if ( !DCONST_DVARINT_stream_treeDrawMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDrawMaxDepth") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        integer = v31->current.integer;
        __asm { vmovdqa xmmword ptr [rbp+57h+viewPos.v], xmm6 }
        RB_Stream_DebugDrawXModelStreamTreeRecursive((GfxCmdBufContext *)&viewPos, nodes, &v36, 0, drawMode > 1, integer, &_RSI->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
      }
      XModelStreamTreeGridCell::DeserializeEnd(v20);
    }
    else
    {
      Stream_RequestGeneric(v19);
      v33 = DVARINT_stream_treeSpanBoost;
      if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      Stream_BoostGeneric(v19, v33->current.integer);
    }
    Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
  }
  __asm { vmovaps xmm6, xmmword ptr [rsp+110h+var_48+8] }
}

/*
==============
RB_Stream_DebugDrawXModelStreamTreeGridCell
==============
*/
void RB_Stream_DebugDrawXModelStreamTreeGridCell(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const int drawMode, const StreamTreeGrid *xmodelStreamTreeGrid, const XModelStreamTreeGridCell *xmodelStreamTreeGridCell)
{
  const GfxViewInfo *v8; 
  const dvar_t *v17; 
  int integer; 
  XModelStreamTreeNode *nodes; 
  bool v20; 
  const dvar_t *v21; 
  int v23; 
  XModelStreamTreeContext v24; 
  GfxCmdBufContext v25; 
  void *retaddr; 

  _R11 = &retaddr;
  v8 = viewInfo;
  _R15 = gfxContext;
  if ( xmodelStreamTreeGridCell->nodes )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+400h]
      vmovss  xmm1, cs:__real@3f800000
    }
    HIDWORD(v25.state) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [r11-58h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rdx+404h], 10h
      vinsertps xmm3, xmm3, dword ptr [rdx+408h], 20h ; ' '
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0F8h+var_B8], xmm3
      vextractps [rsp+0F8h+var_B4], xmm3, 1
      vextractps [rsp+0F8h+var_B0], xmm3, 2
      vextractps [rsp+0F8h+var_AC], xmm3, 3
      vmovups xmmword ptr [r11-58h], xmm3
      vmovss  [rsp+0F8h+var_98], xmm1
      vmovss  [rsp+0F8h+var_94], xmm0
      vmovss  [rsp+0F8h+var_90], xmm1
    }
    *(float *)&_XMM0 = GetHimipDistanceFactor();
    v17 = DVARINT_stream_treeSpanBoost;
    __asm { vmovss  [rsp+0F8h+var_8C], xmm0 }
    if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    integer = v17->current.integer;
    nodes = xmodelStreamTreeGridCell->nodes;
    v24.gridCell = xmodelStreamTreeGridCell;
    v20 = drawMode > 1;
    v21 = DCONST_DVARINT_stream_treeDrawMaxDepth;
    v24.spanBoost = integer;
    v24.streamTreeGrid = xmodelStreamTreeGrid;
    v24.transientVisibility = NULL;
    if ( !DCONST_DVARINT_stream_treeDrawMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDrawMaxDepth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    __asm { vmovups xmm0, xmmword ptr [r15] }
    v23 = v21->current.integer;
    __asm { vmovups [rsp+0F8h+var_58], xmm0 }
    RB_Stream_DebugDrawXModelStreamTreeRecursive(&v25, nodes, &v24, 0, v20, v23, &v8->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
  }
}

/*
==============
RB_Stream_DebugDrawXModelStreamTreeRecursive
==============
*/
void RB_Stream_DebugDrawXModelStreamTreeRecursive(GfxCmdBufContext *gfxContext, const XModelStreamTreeNode *node, const XModelStreamTreeContext *context, int curDepth, bool drawVolumes, int maxDepth, const GfxMatrix *viewProjectionMatrix)
{
  ExtentBounds *p_bounds; 
  int v14; 
  char v17; 
  char v18; 
  unsigned __int16 v19; 
  const XModelStreamTreeGridCell *gridCell; 
  unsigned int v21; 
  __int64 v24; 
  unsigned int v25; 
  const XModelInstance *v26; 
  const XModel *v27; 
  const vec4_t *v50; 
  __int64 v55; 
  __int64 v56; 
  float v57; 
  float v58; 
  float v59; 
  unsigned __int16 v60; 
  unsigned __int16 v61; 
  GfxCmdBufContext v63; 
  XModelStreamTreeContext *contexta; 
  const StreamTreeGrid *streamTreeGrid; 
  float4 v66; 
  float4 v67; 
  float4 v68; 
  float4 v69; 
  ExtentBounds lodExtentBounds; 
  __int128 v71; 
  __int128 v72; 

  __asm { vmovaps [rsp+180h+var_50], xmm6 }
  p_bounds = &node->bounds;
  _R12 = gfxContext;
  contexta = (XModelStreamTreeContext *)context;
  v14 = curDepth;
  _R15 = context;
  *(float *)&_XMM0 = Stream_DistanceSqToAABB(context, &node->bounds);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( v17 | v18 )
  {
    streamTreeGrid = _R15->streamTreeGrid;
    v60 = node->childNodes[0];
    v19 = node->childNodes[1];
    gridCell = _R15->gridCell;
    v61 = v19;
    if ( drawVolumes )
    {
      v21 = 0;
      if ( node->instanceCount )
      {
        __asm
        {
          vmovaps [rsp+180h+var_60], xmm7
          vmovss  xmm7, cs:__real@3f800000
          vmovaps [rsp+180h+var_70], xmm8
          vmovss  xmm8, cs:__real@481c4000
        }
        do
        {
          v24 = v21 + node->instanceStartIndex;
          if ( (unsigned int)v24 >= gridCell->instanceIndexCount )
          {
            LODWORD(v56) = gridCell->instanceIndexCount;
            LODWORD(v55) = v21 + node->instanceStartIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2178, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndexIndex ) < (unsigned)( gridCell.instanceIndexCount )", "instanceIndexIndex doesn't index gridCell.instanceIndexCount\n\t%i not in [0, %i)", v55, v56) )
              __debugbreak();
          }
          v25 = gridCell->instanceIndices[v24];
          if ( v25 >= gridCell->instanceCount )
          {
            LODWORD(v56) = gridCell->instanceCount;
            LODWORD(v55) = v25;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2181, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( gridCell.instanceCount )", "instanceIndex doesn't index gridCell.instanceCount\n\t%i not in [0, %i)", v55, v56) )
              __debugbreak();
          }
          v26 = &gridCell->instances[(unsigned __int16)v25];
          v27 = streamTreeGrid->xmodels[v26->xmodelIndex];
          if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2186, ASSERT_TYPE_ASSERT, "(xmodel != nullptr)", (const char *)&queryFormat, "xmodel != nullptr") )
            __debugbreak();
          ComputeInstanceLodExtentBounds(&lodExtentBounds, 0i64, v26, v27);
          _R15 = contexta;
          __asm { vmovss  xmm0, dword ptr [rbp+80h+lodExtentBounds.maxs] }
          HIDWORD(v71) = 0;
          __asm
          {
            vmovups xmm5, xmmword ptr [rbp-20h]
            vmovss  xmm5, xmm5, xmm0
            vmovss  xmm0, dword ptr [rbp+80h+lodExtentBounds.mins]
            vinsertps xmm5, xmm5, dword ptr [rbp+80h+lodExtentBounds.maxs+4], 80h+var_70
            vinsertps xmm5, xmm5, dword ptr [rbp+80h+lodExtentBounds.maxs+8], 80h+var_60
          }
          HIDWORD(v72) = 0;
          __asm
          {
            vmovups xmm4, xmmword ptr [rbp-10h]
            vmovss  xmm4, xmm4, xmm0
            vminps  xmm0, xmm5, xmmword ptr [r15]
            vinsertps xmm4, xmm4, dword ptr [rbp+80h+lodExtentBounds.mins+4], 80h+var_70
            vinsertps xmm4, xmm4, dword ptr [rbp+80h+lodExtentBounds.mins+8], 80h+var_60
            vmaxps  xmm3, xmm0, xmm4
            vsubps  xmm1, xmm3, xmmword ptr [r15]
            vmulps  xmm2, xmm1, xmm1
            vinsertps xmm0, xmm2, xmm2, 8
            vmovss  [rsp+180h+var_140], xmm6
            vhaddps xmm1, xmm0, xmm0
            vmovups xmm0, xmmword ptr [r15+10h]
            vmovss  [rsp+180h+var_148], xmm7
            vmovss  dword ptr [rsp+180h+var_150], xmm7
            vhaddps xmm2, xmm1, xmm1
            vmovups xmm1, xmmword ptr [r15]
            vmovups [rbp+80h+var_F0], xmm1
            vmovups xmmword ptr [rbp-20h], xmm5
            vmovups xmmword ptr [rbp-10h], xmm4
            vmovups [rbp+80h+var_100], xmm0
            vmovdqa [rbp+80h+var_E0], xmm3
            vmovdqa [rbp+80h+var_D0], xmm5
            vmovdqa [rsp+180h+var_120], xmm4
          }
          *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor((const float4 *)&v63, &v69, *(float *)&_XMM2, &v68, &v67, &v66, v57, v58, v59);
          __asm { vcomiss xmm0, xmm8 }
          if ( v17 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovups [rsp+180h+var_120], xmm0
            }
            RB_Stream_StreamTreeDebugBox(&v63, &lodExtentBounds.mins, &lodExtentBounds.maxs, &colorRed, viewProjectionMatrix);
          }
          ++v21;
        }
        while ( v21 < node->instanceCount );
        v19 = v61;
        p_bounds = &node->bounds;
        __asm
        {
          vmovaps xmm8, [rsp+180h+var_70]
          vmovaps xmm7, [rsp+180h+var_60]
        }
      }
      v14 = curDepth;
    }
    if ( v60 != 0xFFFF || (v50 = &colorBlue, v19 != 0xFFFF) )
      v50 = &colorGreen;
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups [rsp+180h+var_120], xmm0
    }
    RB_Stream_StreamTreeDebugBox(&v63, &p_bounds->mins, &node->bounds.maxs, v50, viewProjectionMatrix);
    if ( v14 < maxDepth )
    {
      if ( v60 != 0xFFFF )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
          vmovups [rsp+180h+var_120], xmm0
        }
        RB_Stream_DebugDrawXModelStreamTreeRecursive(&v63, &gridCell->nodes[v60], _R15, v14 + 1, drawVolumes, maxDepth, viewProjectionMatrix);
      }
      if ( v61 != 0xFFFF )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
          vmovups [rsp+180h+var_120], xmm0
        }
        RB_Stream_DebugDrawXModelStreamTreeRecursive(&v63, &gridCell->nodes[v61], _R15, v14 + 1, drawVolumes, maxDepth, viewProjectionMatrix);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+180h+var_50] }
}

/*
==============
RB_Stream_StreamTreeDebugBox
==============
*/
void RB_Stream_StreamTreeDebugBox(GfxCmdBufContext *gfxContext, const vec3_t *p0, const vec3_t *p1, const vec4_t *color)
{
  const std::pair<int,int> *v13; 
  float *v17; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  _QWORD v50[4]; 
  int v51; 
  int v53; 
  int v54; 
  int v56[22]; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovsd  xmm7, qword ptr [rdx]
    vmovsd  xmm2, qword ptr [r8]
    vmovss  xmm1, cs:__real@3f000000
  }
  *(float *)&_RAX = p0->v[2];
  v13 = iEdgePairs_9;
  __asm
  {
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm8, xmm0, xmm1
    vmovsd  qword ptr [rsp+140h+var_F4], xmm2
    vmovss  xmm3, [rsp+140h+var_F0]
  }
  v51 = (int)_RAX;
  v17 = &s_debugLineVerts[0].xyz.v[2];
  *(float *)&_RAX = p1->v[2];
  __asm
  {
    vmovsd  qword ptr [rsp+140h+var_100], xmm7
    vaddss  xmm0, xmm3, dword ptr [rsp+140h+var_FC]
    vmulss  xmm9, xmm0, xmm1
    vsubss  xmm2, xmm2, xmm8
  }
  v53 = (int)_RAX;
  __asm
  {
    vmovss  xmm4, [rsp+140h+var_EC]
    vaddss  xmm0, xmm4, dword ptr [rsp+140h+var_FC+4]
    vmulss  xmm10, xmm0, xmm1
    vsubss  xmm0, xmm9, dword ptr [rsp+140h+var_FC]
    vsubss  xmm1, xmm8, xmm7
    vmaxss  xmm7, xmm2, xmm1
    vsubss  xmm1, xmm10, dword ptr [rsp+140h+var_FC+4]
    vsubss  xmm6, xmm8, xmm7
    vaddss  xmm5, xmm7, xmm8
    vsubss  xmm2, xmm4, xmm10
    vmaxss  xmm4, xmm2, xmm1
    vsubss  xmm3, xmm3, xmm9
    vmaxss  xmm3, xmm3, xmm0
    vsubss  xmm0, xmm10, xmm4
    vsubss  xmm2, xmm9, xmm3
    vaddss  xmm1, xmm3, xmm9
    vmovss  [rsp+140h+var_D8], xmm0
    vmovss  [rsp+140h+var_CC], xmm0
    vmovss  [rbp+40h+var_C0], xmm0
    vmovss  [rbp+40h+var_B4], xmm0
    vaddss  xmm0, xmm4, xmm10
    vmovss  [rbp+40h+var_A8], xmm0
    vmovss  [rbp+40h+var_9C], xmm0
    vmovss  [rbp+40h+var_90], xmm0
    vmovss  [rbp+40h+var_84], xmm0
    vmovss  [rsp+140h+var_E0], xmm6
    vmovss  [rsp+140h+var_DC], xmm2
    vmovss  [rsp+140h+var_D4], xmm5
    vmovss  [rsp+140h+var_D0], xmm2
    vmovss  [rsp+140h+var_C8], xmm6
    vmovss  [rsp+140h+var_C4], xmm1
    vmovss  [rbp+40h+var_BC], xmm5
    vmovss  [rbp+40h+var_B8], xmm1
    vmovss  [rbp+40h+var_B0], xmm6
    vmovss  [rbp+40h+var_AC], xmm2
    vmovss  [rbp+40h+var_A4], xmm5
    vmovss  [rbp+40h+var_A0], xmm2
    vmovss  [rbp+40h+var_98], xmm6
    vmovss  [rbp+40h+var_94], xmm1
    vmovss  [rbp+40h+var_8C], xmm5
    vmovss  [rbp+40h+var_88], xmm1
  }
  v50[1] = gfxContext;
  v39 = 0;
  do
  {
    v40 = 3i64 * v13->second;
    v41 = 3i64 * v13->first;
    Byte4PackVertexColor(color, s_debugLineVerts[v39].color);
    Byte4PackVertexColor(color, s_debugLineVerts[v39 + 1].color);
    v39 += 2;
    *((_DWORD *)v17 - 2) = *(&v54 + v41);
    v17 += 8;
    ++v13;
    *((_DWORD *)v17 - 9) = v56[v41 - 1];
    *((_DWORD *)v17 - 8) = v56[v41];
    *((_DWORD *)v17 - 6) = *(&v54 + v40);
    *((_DWORD *)v17 - 5) = v56[v40 - 1];
    *((_DWORD *)v17 - 4) = v56[v40];
  }
  while ( v13 != (const std::pair<int,int> *)&unk_147F85BA0 );
  _R13 = v50[1];
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups xmmword ptr [rsp+140h+var_118+8], xmm0
  }
  RB_DrawLines3D((GfxCmdBufContext *)&v50[1], 12, 1, s_debugLineVerts, 1);
  _R11 = &v57;
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
RB_Stream_TreeDebugDraw
==============
*/
void RB_Stream_TreeDebugDraw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  const dvar_t *v7; 
  int integer; 
  StreamTree *p_streamTree; 
  const dvar_t *v10; 
  int v11; 
  int v12; 
  const StreamTreeNode *nodes; 
  MaterialStreamTreeContext v22; 
  GfxCmdBufContext v23; 

  _RSI = viewInfo;
  _RBX = gfxContext;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2131, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( rgp.world->materialStreamTreeGrid.cellKeys )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+0E8h+var_58], xmm0
    }
    RB_Stream_ZoneStreamTreeDebugDraw(&v23, _RSI);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_38], xmm6
      vmovups xmm6, xmmword ptr [rbx]
    }
    v7 = DCONST_DVARINT_stream_treeDraw;
    if ( !DCONST_DVARINT_stream_treeDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    integer = v7->current.integer;
    if ( integer )
    {
      if ( rgp.world )
      {
        p_streamTree = &rgp.world->streamTree;
        if ( rgp.world->streamTree.nodeCount )
        {
          v10 = DCONST_DVARINT_stream_treeDrawMaxDepth;
          v11 = -1;
          if ( integer > 1 )
            v11 = integer;
          if ( !DCONST_DVARINT_stream_treeDrawMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDrawMaxDepth") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v10);
          v12 = v10->current.integer;
          __asm { vmovss  xmm0, dword ptr [rsi+400h] }
          HIDWORD(v23.state) = 0;
          __asm
          {
            vmovups xmm3, [rsp+0E8h+var_58]
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, dword ptr [rsi+404h], 10h
            vinsertps xmm3, xmm3, dword ptr [rsi+408h], 20h ; ' '
            vmovss  [rsp+0E8h+var_A8], xmm3
            vextractps [rsp+0E8h+var_A4], xmm3, 1
            vextractps [rsp+0E8h+var_A0], xmm3, 2
            vextractps [rsp+0E8h+var_9C], xmm3, 3
            vmovups [rsp+0E8h+var_58], xmm3
          }
          *(float *)&_XMM0 = GetHimipDistanceFactor();
          __asm
          {
            vmovss  [rsp+0E8h+var_7C], xmm0
            vmovss  xmm0, cs:__real@3f800000
            vmovq   rcx, xmm6; source
            vmovss  [rsp+0E8h+var_80], xmm0
          }
          v22.streamTree = p_streamTree;
          R_Set3D(_RCX);
          nodes = p_streamTree->nodes;
          __asm { vmovdqa [rsp+0E8h+var_58], xmm6 }
          RB_Stream_DebugDrawStreamTreeRecursive(&v23, nodes, &v22, 0, v11, v12, &_RSI->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
          __asm { vmovdqa [rsp+0E8h+var_58], xmm6 }
          RB_EndSurfaceIfNeeded(&v23);
        }
      }
    }
    __asm { vmovaps xmm6, [rsp+0E8h+var_38] }
  }
}

/*
==============
RB_Stream_TreeDebugDrawEnabled
==============
*/
bool RB_Stream_TreeDebugDrawEnabled()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARINT_stream_treeDraw;
  if ( !DCONST_DVARINT_stream_treeDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.integer != 0;
}

/*
==============
RB_Stream_XModelTreeDebugDraw
==============
*/
void RB_Stream_XModelTreeDebugDraw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  const dvar_t *v4; 
  int integer; 
  StreamTreeGrid *p_xmodelStreamTreeGrid; 
  GfxCmdBufContext v9; 

  _RSI = gfxContext;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2321, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  v4 = DCONST_DVARINT_stream_xmodelTreeDraw;
  if ( !DCONST_DVARINT_stream_xmodelTreeDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_xmodelTreeDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer )
  {
    if ( rgp.world )
    {
      p_xmodelStreamTreeGrid = &rgp.world->xmodelStreamTreeGrid;
      if ( rgp.world != (GfxWorld *)-16776i64 && rgp.world->xmodelStreamTreeGrid.version == 1 )
      {
        R_Set3D(_RSI->source);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
        }
        RB_Stream_DebugDrawXModelStreamTreeGrid(&v9, viewInfo, integer, p_xmodelStreamTreeGrid);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
        }
        RB_EndSurfaceIfNeeded(&v9);
      }
    }
  }
}

/*
==============
RB_Stream_XModelTreeDebugDrawEnabled
==============
*/
bool RB_Stream_XModelTreeDebugDrawEnabled()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARINT_stream_xmodelTreeDraw;
  if ( !DCONST_DVARINT_stream_xmodelTreeDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_xmodelTreeDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.integer != 0;
}

/*
==============
RB_Stream_ZoneStreamTreeDebugDraw
==============
*/
void RB_Stream_ZoneStreamTreeDebugDraw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  const dvar_t *v7; 
  int integer; 
  StreamTreeGrid *p_materialStreamTreeGrid; 
  StreamKey **cellKeys; 
  int v11; 
  const dvar_t *v12; 
  unsigned __int16 v13; 
  StreamKey *v16; 
  const MaterialStreamTreeGridCell *data; 
  unsigned int v30; 
  int v36; 
  _QWORD v37[3]; 
  bitarray_base<bitarray<1536> > *p_transientVisibility; 
  StreamKey **v39; 
  __int64 v40; 
  MaterialStreamTreeCellContext v41; 
  __int128 v42; 
  __int128 v43; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  v40 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R14 = viewInfo;
  _R15 = gfxContext;
  v7 = DCONST_DVARINT_stream_treeDraw;
  if ( !DCONST_DVARINT_stream_treeDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  if ( integer )
  {
    if ( rgp.world )
    {
      p_materialStreamTreeGrid = &rgp.world->materialStreamTreeGrid;
      cellKeys = rgp.world->materialStreamTreeGrid.cellKeys;
      v39 = cellKeys;
      if ( cellKeys )
      {
        Sys_EnterCriticalSection(CRITSECT_STREAM_TREE_DRAW);
        p_transientVisibility = &streamFrontendGlob->transientVisibility;
        v11 = -1;
        if ( integer > 1 )
          v11 = integer;
        v12 = DCONST_DVARINT_stream_treeDrawMaxDepth;
        if ( !DCONST_DVARINT_stream_treeDrawMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDrawMaxDepth") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        v36 = v12->current.integer;
        R_Set3D(_R15->source);
        v13 = 0;
        if ( p_materialStreamTreeGrid->rowCount )
        {
          __asm
          {
            vmovss  xmm6, cs:__real@3f800000
            vxorps  xmm7, xmm7, xmm7
          }
          do
          {
            if ( bitarray_base<bitarray<1536>>::testBit(p_transientVisibility, v13) )
            {
              v16 = cellKeys[v13];
              if ( v16 )
              {
                if ( Stream_GenericIsSafeToUse(cellKeys[v13]) )
                {
                  if ( (v16->flags & 2) != 0 )
                    data = (const MaterialStreamTreeGridCell *)v16->data.dataHandle.data;
                  else
                    data = (const MaterialStreamTreeGridCell *)Stream_AddressSpace_ResolveHandle(&v16->data.dataHandle);
                  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2092, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
                    __debugbreak();
                  __asm { vmovss  xmm0, dword ptr [r14+400h] }
                  HIDWORD(v42) = 0;
                  __asm
                  {
                    vmovups xmm3, xmmword ptr [rbp-30h]
                    vmovss  xmm3, xmm3, xmm0
                    vinsertps xmm3, xmm3, dword ptr [r14+404h], 10h
                    vinsertps xmm3, xmm3, dword ptr [r14+408h], 20h ; ' '
                    vmovups xmmword ptr [rbp-30h], xmm3
                    vmovss  [rbp+50h+var_D0], xmm3
                    vextractps [rbp+50h+var_CC], xmm3, 1
                    vextractps [rbp+50h+var_C8], xmm3, 2
                    vextractps [rbp+50h+var_C4], xmm3, 3
                    vmovss  xmm0, dword ptr [r14+418h]
                  }
                  HIDWORD(v43) = 0;
                  __asm
                  {
                    vmovups xmm3, xmmword ptr [rbp-20h]
                    vmovss  xmm3, xmm3, xmm0
                    vinsertps xmm3, xmm3, dword ptr [r14+41Ch], 10h
                    vinsertps xmm3, xmm3, dword ptr [r14+420h], 20h ; ' '
                    vmovups xmmword ptr [rbp-20h], xmm3
                    vmovups [rbp+50h+var_C0], xmm3
                    vmovss  [rbp+50h+var_B0], xmm6
                    vmovss  [rbp+50h+var_AC], xmm7
                    vmovss  [rbp+50h+var_A8], xmm6
                  }
                  *(float *)&_XMM0 = GetHimipDistanceFactor();
                  __asm { vmovss  [rbp+50h+var_A4], xmm0 }
                  v41.spanBoost = Dvar_GetInt_Internal_DebugName(DVARINT_stream_treeSpanBoost, "stream_treeSpanBoost");
                  v41.gridCell = data;
                  v41.streamTreeGrid = p_materialStreamTreeGrid;
                  MaterialStreamTreeGridCell::DeserializeBegin(data);
                  if ( data->nodeCount )
                  {
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r15]
                      vmovups xmmword ptr [rsp+150h+var_108+8], xmm0
                    }
                    RB_Stream_DebugDrawStreamTreeZoneRecursive((GfxCmdBufContext *)&v37[1], data->nodes, &v41, 0, v11, v36, &_R14->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
                  }
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r15]
                    vmovups xmmword ptr [rsp+150h+var_108+8], xmm0
                  }
                  v30 = RB_Stream_DebugDrawMaterials((GfxCmdBufContext *)&v37[1], &v41, 0, data->largeMaterialInstanceGroupCount, 0, v11, &_R14->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r15]
                    vmovups xmmword ptr [rsp+150h+var_108+8], xmm0
                  }
                  RB_Stream_DebugDrawImages((GfxCmdBufContext *)&v37[1], &v41, data->largeMaterialInstanceGroupCount, data->largeImageInstanceGroupCount, v30, v11, &_R14->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
                  MaterialStreamTreeGridCell::DeserializeEnd(data);
                  cellKeys = v39;
                }
              }
            }
            ++v13;
          }
          while ( v13 < p_materialStreamTreeGrid->rowCount );
        }
        __asm
        {
          vmovups xmm0, xmmword ptr [r15]
          vmovups xmmword ptr [rsp+150h+var_108+8], xmm0
        }
        RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v37[1]);
        Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
      }
    }
  }
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
Stream_DistanceSqToAABB
==============
*/
float Stream_DistanceSqToAABB(const StreamTreeContext *context, const ExtentBounds *aabb)
{
  float result; 
  float v30; 
  float v31; 
  float v32; 
  float4 v33; 
  float4 v34; 
  float4 v35; 
  float4 v36; 
  float4 v37[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmovss  xmm4, dword ptr [rcx+24h]
    vmovss  xmm5, dword ptr [rcx+20h]
  }
  v37[0].v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [r11-48h]
    vmovss  xmm7, xmm7, xmm0
    vmovss  xmm0, dword ptr [rdx]
    vinsertps xmm7, xmm7, dword ptr [rdx+10h], 10h
    vinsertps xmm7, xmm7, dword ptr [rdx+14h], 20h ; ' '
    vmovups xmmword ptr [r11-48h], xmm7
  }
  v37[0].v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [r11-48h]
    vmovss  xmm6, xmm6, xmm0
    vminps  xmm0, xmm7, xmmword ptr [rcx]
    vinsertps xmm6, xmm6, dword ptr [rdx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rdx+8], 20h ; ' '
    vmaxps  xmm3, xmm0, xmm6
    vsubps  xmm1, xmm3, xmmword ptr [rcx]
    vmulps  xmm2, xmm1, xmm1
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vmovups xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [r11-48h], xmm6
    vmovups xmmword ptr [r11-48h], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0D8h+var_98], xmm0
    vmovss  [rsp+0D8h+var_A0], xmm4
    vmovss  [rsp+0D8h+var_A8], xmm5
    vhaddps xmm2, xmm1, xmm1
    vmovups xmm1, xmmword ptr [rcx]
    vmovups [rsp+0D8h+var_88], xmm1
    vmovdqa [rsp+0D8h+var_78], xmm3
    vmovdqa [rsp+0D8h+var_68], xmm7
    vmovdqu xmmword ptr [r11-58h], xmm6
  }
  result = Stream_CalculateDistanceSq_ApplyZoomFactor(&v36, &v35, *(float *)&_XMM2, &v34, &v33, v37, v30, v31, v32);
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_18]
    vmovaps xmm7, [rsp+0D8h+var_28]
  }
  return result;
}

/*
==============
Stream_MaterialMinDistancesTable_Recompute
==============
*/
void Stream_MaterialMinDistancesTable_Recompute(void)
{
  char *v0; 
  __int64 v1; 
  char inData[8]; 
  char v3; 

  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 150, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()", -2i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_MaterialMinDistancesTable_Recompute");
  v0 = &v3;
  v1 = 90i64;
  do
  {
    *(_QWORD *)v0 = 0i64;
    *((_QWORD *)v0 + 1) = 0i64;
    *((_QWORD *)v0 + 2) = 0i64;
    v0 += 64;
    *((_QWORD *)v0 - 5) = 0i64;
    *((_QWORD *)v0 - 4) = 0i64;
    *((_QWORD *)v0 - 3) = 0i64;
    *((_QWORD *)v0 - 2) = 0i64;
    *((_QWORD *)v0 - 1) = 0i64;
    --v1;
  }
  while ( v1 );
  memset_0(s_minDistSqForMaterials, 0, sizeof(s_minDistSqForMaterials));
  Sys_YieldWorkerCmd();
  DB_EnumXAssets(ASSET_TYPE_XMODEL, ComputeMaterialMinDistancesForXModel, inData, 0);
  Sys_YieldWorkerCmd();
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_ProcessMatImgInstanceGroups
==============
*/
void Stream_ProcessMatImgInstanceGroups(const unsigned int instanceStartIndex, const unsigned int instanceGroupStartIndex, const unsigned int materialGroupCount, const unsigned int imageGroupCount, const unsigned int totalInstanceCount, const float nodeDistSq, const float nodeStreamDistance, MaterialStreamTreeCellContext *context)
{
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v22; 
  __int64 v23; 
  const MaterialStreamTreeGridCell *gridCell; 
  unsigned int v25; 
  MatImgInstanceGroup *instanceGroups; 
  __int64 v32; 
  int instanceCount; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int MaterialIndex; 
  StreamFrontendGlob *v38; 
  unsigned int mValue; 
  bool v41; 
  __int64 v44; 
  bool v76; 
  LocalClientNum_t localClientIndex; 
  bool v78; 
  unsigned int v87; 
  StreamFrontendGlob *v88; 
  bool v92; 
  unsigned int v93; 
  unsigned int GfxImageIndex; 
  StreamFrontendGlob *v95; 
  __int64 v96; 
  unsigned int v97; 
  bool v98; 
  bool v106; 
  unsigned int v137; 
  const dvar_t *v138; 
  StreamFrontendGlob *v139; 
  __int64 v149; 
  __int64 v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  unsigned int v157; 
  int v158; 
  unsigned int v160; 
  unsigned int v161; 
  unsigned int v163; 
  int v164; 
  __int16 v165; 
  unsigned int v166; 
  unsigned int v167; 
  int v168; 
  const MaterialStreamTreeGridCell *v170; 
  __int64 v171; 
  __int64 v172; 
  const StreamTreeGrid *streamTreeGrid; 
  float4 v175; 
  float4 v176; 
  float4 v177; 
  float4 v178; 
  float4 v179[7]; 
  void *retaddr; 

  _R11 = &retaddr;
  v19 = totalInstanceCount;
  v20 = imageGroupCount;
  _R13 = context;
  v22 = instanceGroupStartIndex;
  v23 = materialGroupCount;
  if ( totalInstanceCount )
  {
    v92 = context->streamTreeGrid == NULL;
    __asm
    {
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps xmmword ptr [r11-0A8h], xmm12
      vmovaps xmmword ptr [r11-0B8h], xmm13
      vmovaps xmmword ptr [r11-0C8h], xmm14
      vmovaps xmmword ptr [r11-0D8h], xmm15
    }
    if ( v92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 585, ASSERT_TYPE_ASSERT, "(context.streamTreeGrid != nullptr)", (const char *)&queryFormat, "context.streamTreeGrid != nullptr") )
      __debugbreak();
    streamTreeGrid = context->streamTreeGrid;
    if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 588, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
      __debugbreak();
    gridCell = context->gridCell;
    v25 = 0;
    __asm
    {
      vmovaps [rsp+200h+var_48+8], xmm6
      vmovaps [rsp+200h+var_58+8], xmm7
      vmovaps [rsp+200h+var_68+8], xmm8
      vmovaps [rsp+200h+var_78+8], xmm9
    }
    v170 = gridCell;
    __asm
    {
      vmovss  xmm12, [rbp+100h+nodeStreamDistance]
      vmovss  xmm15, [rbp+100h+nodeDistSq]
      vmovss  xmm13, cs:__real@7f7fff80
      vmovss  xmm11, cs:__real@3f800000
      vmovss  xmm14, cs:__real@7f7fffff
    }
    if ( (_DWORD)v23 )
    {
      v157 = v22;
      v171 = v23;
      __asm { vmovaps [rsp+200h+var_88+8], xmm10 }
      do
      {
        if ( v22 >= gridCell->instanceGroupCount )
        {
          LODWORD(v150) = gridCell->instanceGroupCount;
          LODWORD(v149) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 598, ASSERT_TYPE_ASSERT, "(unsigned)( mtlInstanceGroupIndex ) < (unsigned)( gridCell.instanceGroupCount )", "mtlInstanceGroupIndex doesn't index gridCell.instanceGroupCount\n\t%i not in [0, %i)", v149, v150) )
            __debugbreak();
        }
        instanceGroups = gridCell->instanceGroups;
        v32 = v22;
        instanceCount = instanceGroups[v22].instanceCount;
        v165 = (unsigned __int16)instanceCount >> 15;
        v34 = instanceCount & 0xFFFF7FFF;
        if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 605, ASSERT_TYPE_ASSERT, "(instanceCount > 0)", (const char *)&queryFormat, "instanceCount > 0") )
          __debugbreak();
        if ( instanceGroups[v32].assetIndex >= streamTreeGrid->materialCount )
        {
          LODWORD(v150) = streamTreeGrid->materialCount;
          LODWORD(v149) = instanceGroups[v32].assetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 606, ASSERT_TYPE_ASSERT, "(unsigned)( mtlInstanceGroup.assetIndex ) < (unsigned)( streamTreeGrid.materialCount )", "mtlInstanceGroup.assetIndex doesn't index streamTreeGrid.materialCount\n\t%i not in [0, %i)", v149, v150) )
            __debugbreak();
        }
        v35 = v34 + v25;
        v36 = v19;
        if ( v19 > v35 )
          v36 = v35;
        MaterialIndex = DB_GetMaterialIndex(streamTreeGrid->materials[instanceGroups[v32].assetIndex]);
        v38 = streamFrontendGlob;
        _RDI = MaterialIndex;
        if ( MaterialIndex >= 0xB400 )
        {
          LODWORD(v150) = 46080;
          LODWORD(v149) = MaterialIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v149, v150) )
            __debugbreak();
        }
        mValue = v38->materialDistance.mDistances[(int)_RDI].mValue;
        v41 = mValue != -1;
        if ( mValue == -1 )
        {
          __asm { vmovaps xmm9, xmm13 }
        }
        else
        {
          v41 = __CFSHL__(mValue, 7);
          v167 = mValue << 7;
          __asm { vmovss  xmm9, dword ptr [rsp+200h+var_190] }
        }
        __asm { vcomiss xmm12, xmm9 }
        if ( v41 )
        {
          _RAX = s_minDistSqForMaterials;
          v44 = _RDI;
          __asm
          {
            vmovss  xmm10, dword ptr [rax+rdi*4]
            vmaxss  xmm0, xmm10, xmm15
            vaddss  xmm1, xmm0, xmm11
            vmulss  xmm2, xmm1, dword ptr [r14+rsi*8]
            vmulss  xmm3, xmm2, dword ptr [r13+28h]
            vcomiss xmm3, xmm9
            vmovaps xmm8, xmm14
          }
          if ( v25 < v36 )
          {
            do
            {
              _RCX = v170->instances;
              __asm
              {
                vmovss  xmm4, dword ptr [r13+24h]
                vmovss  xmm5, dword ptr [r13+20h]
                vmovups xmm7, cs:__xmm@3f800000000000000000000000000000
                vmovups xmm6, cs:__xmm@3f800000000000000000000000000000
              }
              _RDX = 3i64 * (v25 + instanceStartIndex);
              __asm
              {
                vmovsd  xmm1, qword ptr [rcx+rdx*8]
                vshufps xmm0, xmm1, xmm1, 55h ; 'U'
                vinsertps xmm7, xmm7, xmm1, 0
                vmovsd  xmm1, qword ptr [rcx+rdx*8+0Ch]
                vinsertps xmm7, xmm7, xmm0, 10h
                vinsertps xmm6, xmm6, xmm1, 0
                vshufps xmm0, xmm1, xmm1, 55h ; 'U'
                vinsertps xmm7, xmm7, [rbp+100h+var_158], 100h+var_E0
                vinsertps xmm6, xmm6, xmm0, 10h
                vinsertps xmm6, xmm6, [rbp+100h+var_148], 100h+var_E0
                vminps  xmm0, xmm6, xmmword ptr [r13+0]
                vmaxps  xmm3, xmm0, xmm7
                vsubps  xmm1, xmm3, xmmword ptr [r13+0]
                vmulps  xmm2, xmm1, xmm1
                vinsertps xmm0, xmm2, xmm2, 8
                vmovss  dword ptr [rsp+40h], xmm11
                vhaddps xmm1, xmm0, xmm0
                vmovups xmm0, xmmword ptr [r13+10h]
                vmovss  [rsp+200h+var_1C8], xmm4
                vmovss  dword ptr [rsp+200h+var_1D0], xmm5
                vhaddps xmm2, xmm1, xmm1
                vmovups xmm1, xmmword ptr [r13+0]
                vmovups [rbp+100h+var_120], xmm1
                vmovups [rbp+100h+var_130], xmm0
                vmovdqa [rbp+100h+var_110], xmm3
                vmovdqa [rbp+100h+var_100], xmm6
                vmovdqa [rbp+100h+var_F0], xmm7
              }
              *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor(v179, &v178, *(float *)&_XMM2, &v177, &v176, &v175, v151, v153, v155);
              ++v25;
              __asm { vminss  xmm8, xmm0, xmm8 }
            }
            while ( v25 < v36 );
            v44 = _RDI;
          }
          v76 = 0;
          if ( (_BYTE)v165 )
          {
            localClientIndex = context->localClientIndex;
            v76 = (unsigned int)localClientIndex < LOCAL_CLIENT_COUNT;
            if ( (unsigned int)localClientIndex >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(v150) = 2;
              LODWORD(v149) = context->localClientIndex;
              v78 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 643, ASSERT_TYPE_ASSERT, "(unsigned)( context.localClientIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->minDistanceToClutter ) ) + 0 ) )", "context.localClientIndex doesn't index streamFrontendGlob->minDistanceToClutter\n\t%i not in [0, %i)", v149, v150);
              v76 = 0;
              if ( v78 )
                __debugbreak();
            }
            _RCX = context->localClientIndex;
            _RAX = streamFrontendGlob;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+rcx*4+0B97260h]
              vmulss  xmm1, xmm0, xmm0
              vmaxss  xmm8, xmm1, xmm8
            }
          }
          __asm
          {
            vmaxss  xmm0, xmm8, xmm10
            vaddss  xmm1, xmm0, xmm11
            vmulss  xmm2, xmm1, dword ptr [r14+rsi*8]
            vmulss  xmm3, xmm2, dword ptr [r13+28h]
            vcomiss xmm3, xmm9
          }
          if ( v76 )
          {
            __asm
            {
              vmovss  dword ptr [rsp+200h+var_190], xmm3
              vmovss  [rsp+200h+var_198], xmm3
            }
            if ( (v168 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
              __debugbreak();
            v87 = v166 >> 7;
            if ( (unsigned int)_RDI >= 0xB400 )
            {
              LODWORD(v150) = 46080;
              LODWORD(v149) = _RDI;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v149, v150) )
                __debugbreak();
            }
            v88 = streamFrontendGlob;
            if ( (unsigned int)_RDI >= 0xB400 )
            {
              LODWORD(v150) = 46080;
              LODWORD(v149) = _RDI;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v149, v150) )
                __debugbreak();
            }
            if ( v87 < v88->materialDistance.mDistances[v44].mValue )
              v88->materialDistance.mDistances[v44].mValue = v87;
            Com_BitSetAssert(v88->materialDistance.mValueSet, _RDI, 5760);
          }
        }
        else
        {
          v25 = v36;
        }
        gridCell = v170;
        v19 = totalInstanceCount;
        v22 = v157 + 1;
        v92 = v171-- == 1;
        ++v157;
      }
      while ( !v92 );
      LODWORD(v23) = materialGroupCount;
      v22 = instanceGroupStartIndex;
      v20 = imageGroupCount;
      __asm { vmovaps xmm10, [rsp+200h+var_88+8] }
    }
    _RBX = (unsigned int)v23 + v22;
    v158 = _RBX;
    if ( v20 )
    {
      v172 = v20;
      do
      {
        if ( (unsigned int)_RBX >= gridCell->instanceGroupCount )
        {
          LODWORD(v150) = gridCell->instanceGroupCount;
          LODWORD(v149) = _RBX;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 659, ASSERT_TYPE_ASSERT, "(unsigned)( imgInstanceGroupIndex ) < (unsigned)( gridCell.instanceGroupCount )", "imgInstanceGroupIndex doesn't index gridCell.instanceGroupCount\n\t%i not in [0, %i)", v149, v150) )
            __debugbreak();
        }
        _RSI = gridCell->instanceGroups;
        v92 = _RSI[_RBX].instanceCount == 0;
        if ( (_RSI[_RBX].instanceCount & 0x8000u) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 663, ASSERT_TYPE_ASSERT, "(( imgInstanceGroup.instanceCount & STREAM_MATERIAL_TREE_CLUTTER_BIT ) == 0)", (const char *)&queryFormat, "( imgInstanceGroup.instanceCount & STREAM_MATERIAL_TREE_CLUTTER_BIT ) == 0") )
            __debugbreak();
          v92 = _RSI[_RBX].instanceCount == 0;
        }
        if ( v92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 664, ASSERT_TYPE_ASSERT, "(imgInstanceGroup.instanceCount > 0)", (const char *)&queryFormat, "imgInstanceGroup.instanceCount > 0") )
          __debugbreak();
        if ( _RSI[_RBX].assetIndex >= streamTreeGrid->imageCount )
        {
          LODWORD(v150) = streamTreeGrid->imageCount;
          LODWORD(v149) = _RSI[_RBX].assetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 665, ASSERT_TYPE_ASSERT, "(unsigned)( imgInstanceGroup.assetIndex ) < (unsigned)( streamTreeGrid.imageCount )", "imgInstanceGroup.assetIndex doesn't index streamTreeGrid.imageCount\n\t%i not in [0, %i)", v149, v150) )
            __debugbreak();
        }
        v93 = v19;
        if ( v19 > v25 + _RSI[_RBX].instanceCount )
          v93 = v25 + _RSI[_RBX].instanceCount;
        GfxImageIndex = DB_GetGfxImageIndex(streamTreeGrid->images[_RSI[_RBX].assetIndex]);
        v95 = streamFrontendGlob;
        v96 = (int)GfxImageIndex;
        v160 = GfxImageIndex;
        if ( GfxImageIndex >= 0x14000 )
        {
          LODWORD(v150) = 81920;
          LODWORD(v149) = GfxImageIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v149, v150) )
            __debugbreak();
        }
        v97 = v95->imageDistance.mDistances[v96].mValue;
        v98 = v97 != -1;
        if ( v97 == -1 )
        {
          __asm { vmovaps xmm8, xmm13 }
        }
        else
        {
          v98 = __CFSHL__(v97, 7);
          v163 = v97 << 7;
          __asm { vmovss  xmm8, [rsp+200h+var_1A0] }
        }
        __asm { vcomiss xmm12, xmm8 }
        if ( v98 )
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rsi+rbx*8]
            vmovss  xmm4, dword ptr [r13+28h]
            vaddss  xmm0, xmm15, xmm11
            vmulss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm1, xmm4
            vcomiss xmm2, xmm8
            vmovaps xmm9, xmm14
          }
          v106 = v25 < v93;
          if ( v25 < v93 )
          {
            do
            {
              _RCX = v170->instances;
              __asm
              {
                vmovss  xmm4, dword ptr [r13+24h]
                vmovss  xmm5, dword ptr [r13+20h]
                vmovups xmm7, cs:__xmm@3f800000000000000000000000000000
                vmovups xmm6, cs:__xmm@3f800000000000000000000000000000
              }
              _RDX = 3i64 * (v25 + instanceStartIndex);
              __asm
              {
                vmovsd  xmm1, qword ptr [rcx+rdx*8]
                vshufps xmm0, xmm1, xmm1, 55h ; 'U'
                vinsertps xmm7, xmm7, xmm1, 0
                vmovsd  xmm1, qword ptr [rcx+rdx*8+0Ch]
                vinsertps xmm7, xmm7, xmm0, 10h
                vinsertps xmm6, xmm6, xmm1, 0
                vshufps xmm0, xmm1, xmm1, 55h ; 'U'
                vinsertps xmm7, xmm7, [rbp+100h+var_148], 100h+var_E0
                vinsertps xmm6, xmm6, xmm0, 10h
                vinsertps xmm6, xmm6, [rbp+100h+var_158], 100h+var_E0
                vminps  xmm0, xmm6, xmmword ptr [r13+0]
                vmaxps  xmm3, xmm0, xmm7
                vsubps  xmm1, xmm3, xmmword ptr [r13+0]
                vmulps  xmm2, xmm1, xmm1
                vinsertps xmm0, xmm2, xmm2, 8
                vmovss  dword ptr [rsp+40h], xmm11
                vhaddps xmm1, xmm0, xmm0
                vmovups xmm0, xmmword ptr [r13+10h]
                vmovss  [rsp+200h+var_1C8], xmm4
                vmovss  dword ptr [rsp+200h+var_1D0], xmm5
                vhaddps xmm2, xmm1, xmm1
                vmovups xmm1, xmmword ptr [r13+0]
                vmovups [rbp+100h+var_100], xmm1
                vmovups [rbp+100h+var_F0], xmm0
                vmovdqa [rbp+100h+var_110], xmm3
                vmovdqa [rbp+100h+var_120], xmm6
                vmovdqa [rbp+100h+var_130], xmm7
              }
              *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor(&v175, &v176, *(float *)&_XMM2, &v177, &v178, v179, v152, v154, v156);
              ++v25;
              __asm { vminss  xmm9, xmm0, xmm9 }
              v106 = v25 < v93;
            }
            while ( v25 < v93 );
            __asm { vmovss  xmm4, dword ptr [r13+28h] }
            LODWORD(v96) = v160;
            __asm { vmovss  xmm3, dword ptr [rsi+rbx*8] }
          }
          __asm
          {
            vaddss  xmm0, xmm9, xmm11
            vmulss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm1, xmm4
            vcomiss xmm2, xmm8
          }
          if ( v106 )
          {
            __asm
            {
              vmovss  [rsp+200h+var_1A0], xmm2
              vmovss  [rsp+200h+var_1A8], xmm2
            }
            if ( (v164 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
              __debugbreak();
            v137 = v161 >> 7;
            if ( (unsigned int)v96 >= 0x14000 )
            {
              LODWORD(v150) = 81920;
              LODWORD(v149) = v96;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v149, v150) )
                __debugbreak();
            }
            v138 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
            if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v138);
            if ( v138->current.enabled && (DB_GetGfxImageAtIndex(v96)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
              __debugbreak();
            v139 = streamFrontendGlob;
            if ( (unsigned int)v96 >= 0x14000 )
            {
              LODWORD(v150) = 81920;
              LODWORD(v149) = v96;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v149, v150) )
                __debugbreak();
            }
            if ( v137 < v139->imageDistance.mDistances[(unsigned int)v96].mValue )
              v139->imageDistance.mDistances[(unsigned int)v96].mValue = v137;
            Com_BitSetAssert(v139->imageDistance.mValueSet, v96, 10240);
          }
        }
        else
        {
          v25 = v93;
        }
        gridCell = v170;
        v19 = totalInstanceCount;
        _RBX = (unsigned int)(v158 + 1);
        v92 = v172-- == 1;
        ++v158;
      }
      while ( !v92 );
    }
    __asm
    {
      vmovaps xmm15, [rsp+200h+var_D8+8]
      vmovaps xmm14, [rsp+200h+var_C8+8]
      vmovaps xmm13, [rsp+200h+var_B8+8]
      vmovaps xmm12, [rsp+200h+var_A8+8]
      vmovaps xmm11, [rsp+200h+var_98+8]
      vmovaps xmm9, [rsp+200h+var_78+8]
      vmovaps xmm8, [rsp+200h+var_68+8]
      vmovaps xmm7, [rsp+200h+var_58+8]
      vmovaps xmm6, [rsp+200h+var_48+8]
    }
    if ( v25 != totalInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 707, ASSERT_TYPE_ASSERT, "(instanceIndex == totalInstanceCount)", (const char *)&queryFormat, "instanceIndex == totalInstanceCount") )
      __debugbreak();
  }
}

/*
==============
Stream_ProcessXModelInstance
==============
*/
void Stream_ProcessXModelInstance(const XModelInstance *instance, XModelStreamTreeContext *context)
{
  const XModel *v7; 
  signed int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  int forceLod; 
  int v35; 
  unsigned __int8 v39; 
  StreamFrontendGlob *v40; 
  __int64 v41; 
  __int64 xmodelIndex; 
  unsigned __int8 v43; 
  __int64 v44; 
  const XModelSurfs *v45; 
  char v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  unsigned __int8 v52; 
  const XModel *v53; 
  unsigned __int8 v54; 
  const dvar_t *v55; 
  __int64 v56; 
  __int64 v57; 
  float v58; 
  float v59; 
  float v60; 
  char v61; 
  int v62; 
  int v63; 
  XModelSurfs *mesha; 
  const StreamTreeGrid *streamTreeGrid; 
  __int64 v67; 
  int v68; 
  const XModel *v69; 
  float4 v70; 
  float4 v71; 
  float4 v72; 
  float4 v73; 
  __int128 v74; 
  ExtentBounds lodExtentBounds; 
  __int128 v76; 

  _RDI = context;
  if ( !context->streamTreeGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1254, ASSERT_TYPE_ASSERT, "(context.streamTreeGrid != nullptr)", (const char *)&queryFormat, "context.streamTreeGrid != nullptr") )
    __debugbreak();
  if ( instance->xmodelIndex >= _RDI->streamTreeGrid->xmodelCount )
  {
    LODWORD(v56) = instance->xmodelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1255, ASSERT_TYPE_ASSERT, "(unsigned)( instance.xmodelIndex ) < (unsigned)( context.streamTreeGrid->xmodelCount )", "instance.xmodelIndex doesn't index context.streamTreeGrid->xmodelCount\n\t%i not in [0, %i)", v56, _RDI->streamTreeGrid->xmodelCount) )
      __debugbreak();
  }
  streamTreeGrid = _RDI->streamTreeGrid;
  v7 = streamTreeGrid->xmodels[instance->xmodelIndex];
  v69 = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1259, ASSERT_TYPE_ASSERT, "(xmodel != nullptr)", (const char *)&queryFormat, "xmodel != nullptr") )
    __debugbreak();
  v8 = XModelHighLod(v7);
  v9 = -1;
  v10 = v7->numLods - 2;
  v11 = v8;
  forceLod = _RDI->forceLod;
  if ( forceLod == -1 )
  {
    if ( v10 < (int)v11 )
      return;
    __asm
    {
      vmovaps [rsp+170h+var_40], xmm6
      vmovaps [rsp+170h+var_50], xmm7
      vmovaps [rsp+170h+var_60], xmm8
      vmovss  xmm8, cs:__real@3f800000
    }
    do
    {
      ComputeInstanceLodExtentBounds(&lodExtentBounds, v10, instance, v7);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+70h+lodExtentBounds.maxs]
        vmovss  xmm4, dword ptr [rdi+28h]
        vmovss  xmm5, dword ptr [rdi+24h]
      }
      HIDWORD(v74) = 0;
      __asm
      {
        vmovups xmm7, xmmword ptr [rbp-40h]
        vmovss  xmm7, xmm7, xmm0
        vmovss  xmm0, dword ptr [rbp+70h+lodExtentBounds.mins]
        vinsertps xmm7, xmm7, dword ptr [rbp+70h+lodExtentBounds.maxs+4], 70h+var_60
        vinsertps xmm7, xmm7, dword ptr [rbp+70h+lodExtentBounds.maxs+8], 70h+var_50
      }
      HIDWORD(v76) = 0;
      __asm
      {
        vmovups xmm6, xmmword ptr [rbp-10h]
        vmovss  xmm6, xmm6, xmm0
        vinsertps xmm6, xmm6, dword ptr [rbp+70h+lodExtentBounds.mins+4], 70h+var_60
        vinsertps xmm6, xmm6, dword ptr [rbp+70h+lodExtentBounds.mins+8], 70h+var_50
        vminps  xmm0, xmm7, xmmword ptr [rdi]
        vmaxps  xmm3, xmm0, xmm6
        vsubps  xmm1, xmm3, xmmword ptr [rdi]
        vmulps  xmm2, xmm1, xmm1
        vmovss  [rsp+170h+var_130], xmm4
        vinsertps xmm0, xmm2, xmm2, 8
        vhaddps xmm1, xmm0, xmm0
        vmovups xmm0, xmmword ptr [rdi+10h]
        vmovss  [rsp+170h+var_138], xmm5
        vmovss  dword ptr [rsp+170h+var_140], xmm8
        vhaddps xmm2, xmm1, xmm1
        vmovups xmm1, xmmword ptr [rdi]
        vmovups [rbp+70h+var_E0], xmm1
        vmovups xmmword ptr [rbp-40h], xmm7
        vmovups xmmword ptr [rbp-10h], xmm6
        vmovups [rbp+70h+var_F0], xmm0
        vmovdqa [rbp+70h+var_D0], xmm3
        vmovdqa [rbp+70h+var_C0], xmm7
        vmovdqa xmmword ptr [rbp+70h+lodExtentBounds.mins], xmm6
      }
      *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor((const float4 *)&lodExtentBounds, &v73, *(float *)&_XMM2, &v72, &v71, &v70, v58, v59, v60);
      __asm { vmovss  [rsp+170h+var_11C], xmm0 }
      v35 = 0x80000000 - v62;
      if ( v62 >= 0 )
        v35 = v62;
      if ( (int)abs32(v35) > 8 )
        break;
      v9 = v10--;
    }
    while ( v10 >= (int)v11 );
    __asm
    {
      vmovaps xmm7, [rsp+170h+var_50]
      vmovaps xmm6, [rsp+170h+var_40]
      vmovaps xmm8, [rsp+170h+var_60]
    }
  }
  else
  {
    if ( forceLod > v10 )
      return;
    v9 = _RDI->forceLod;
  }
  if ( v9 != -1 )
  {
    v39 = 1 << v9;
    if ( instance->collectionIndirectIndex >= streamTreeGrid->smodelCollectionIndexCount )
    {
      LODWORD(v57) = streamTreeGrid->smodelCollectionIndexCount;
      LODWORD(v56) = instance->collectionIndirectIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1296, ASSERT_TYPE_ASSERT, "(unsigned)( instance.collectionIndirectIndex ) < (unsigned)( streamTreeGrid.smodelCollectionIndexCount )", "instance.collectionIndirectIndex doesn't index streamTreeGrid.smodelCollectionIndexCount\n\t%i not in [0, %i)", v56, v57) )
        __debugbreak();
    }
    v40 = streamFrontendGlob;
    v41 = streamTreeGrid->smodelCollectionIndices[instance->collectionIndirectIndex];
    xmodelIndex = instance->xmodelIndex;
    v43 = streamFrontendGlob->smodelsCollectionLodsTemp[v41];
    if ( (v43 & v39) == 0 )
    {
      if ( (v39 & streamFrontendGlob->xmodelLodsAvailableTemp[xmodelIndex]) != 0 )
      {
        streamFrontendGlob->smodelsCollectionLodsTemp[v41] = v39 | v43;
      }
      else
      {
        v67 = v9;
        v44 = (__int64)&v7->lodInfo[(__int64)v9];
        v45 = *(const XModelSurfs **)v44;
        mesha = *(XModelSurfs **)v44;
        if ( !*(_QWORD *)v44 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1318, ASSERT_TYPE_ASSERT, "(chosenModelSurfsStaging != nullptr)", (const char *)&queryFormat, "chosenModelSurfsStaging != nullptr") )
            __debugbreak();
          v45 = NULL;
        }
        if ( (v39 & v40->xmodelLodsTestedTemp[xmodelIndex]) == 0 && *(_QWORD *)(v44 + 8) && Stream_MeshIsSafeToUse(v45) )
        {
          v40->smodelsCollectionLodsTemp[v41] |= v39;
          v40->xmodelLodsAvailableTemp[xmodelIndex] |= v39;
          v40->xmodelLodsTestedTemp[xmodelIndex] |= v39;
          Stream_UsedMesh(mesha);
        }
        else
        {
          v40->xmodelLodsTestedTemp[xmodelIndex] |= v39;
          v46 = 0;
          v47 = v11;
          *(_QWORD *)&v74 = v11;
          v61 = 0;
          v48 = 0;
          v49 = v9;
          v50 = v44;
          do
          {
            v44 += 64i64;
            v50 -= 64i64;
            ++v48;
            --v67;
            v51 = v49 - 1;
            v63 = v48;
            ++v9;
            v68 = v51;
            if ( v67 >= v47 )
            {
              v52 = 1 << v51;
              if ( ((unsigned __int8)(1 << v51) & v40->xmodelLodsTestedTemp[xmodelIndex]) == 0 )
              {
                if ( *(_QWORD *)(v50 + 8) && Stream_MeshIsSafeToUse(*(const XModelSurfs **)v50) )
                {
                  Stream_UsedMesh(*(const XModelSurfs **)v50);
                  v40->xmodelLodsAvailableTemp[xmodelIndex] |= v52;
                }
                v40->xmodelLodsTestedTemp[xmodelIndex] |= v52;
              }
              if ( (v52 & v40->xmodelLodsAvailableTemp[xmodelIndex]) != 0 )
              {
                v40->smodelsCollectionLodsTemp[v41] |= v52;
                v46 = 1;
                v61 = 1;
              }
              else
              {
                v46 = v61;
              }
              v48 = v63;
            }
            v53 = v69;
            if ( v9 < v69->numLods - 1 )
            {
              v54 = 1 << v9;
              if ( ((unsigned __int8)(1 << v9) & v40->xmodelLodsTestedTemp[xmodelIndex]) == 0 )
              {
                if ( *(_QWORD *)(v44 + 8) )
                {
                  if ( Stream_MeshIsSafeToUse(*(const XModelSurfs **)v44) )
                  {
                    Stream_UsedMesh(*(const XModelSurfs **)v44);
                    v40->xmodelLodsAvailableTemp[xmodelIndex] |= v54;
                  }
                  v53 = v69;
                }
                v40->xmodelLodsTestedTemp[xmodelIndex] |= v54;
              }
              if ( (v54 & v40->xmodelLodsAvailableTemp[xmodelIndex]) != 0 )
              {
                v40->smodelsCollectionLodsTemp[v41] |= v54;
                v46 = 1;
                v61 = 1;
              }
              else
              {
                v46 = v61;
              }
              v48 = v63;
            }
            if ( v48 == v53->numLods )
              break;
            v49 = v68;
            v47 = v74;
          }
          while ( !v46 );
          Stream_RequestMesh(mesha);
          v55 = DVARINT_stream_missingXModelLodBoost;
          if ( !DVARINT_stream_missingXModelLodBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_missingXModelLodBoost") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v55);
          Stream_BoostMesh(mesha, 1 << (v48 * v55->current.integer));
        }
      }
    }
  }
}

/*
==============
Stream_ProcessXModelInstances
==============
*/
void Stream_ProcessXModelInstances(const unsigned int startIndex, const unsigned int indexCount, XModelStreamTreeContext *context)
{
  __int64 v4; 
  const XModelStreamTreeGridCell *gridCell; 
  __int64 v7; 
  unsigned int v8; 

  v4 = indexCount;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_ProcessXModelInstances");
  if ( (_DWORD)v4 )
  {
    if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1417, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr", -2i64) )
      __debugbreak();
    gridCell = context->gridCell;
    v7 = v4;
    do
    {
      if ( startIndex >= gridCell->instanceIndexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1423, ASSERT_TYPE_ASSERT, "(instanceIndexIndex < gridCell.instanceIndexCount)", (const char *)&queryFormat, "instanceIndexIndex < gridCell.instanceIndexCount") )
        __debugbreak();
      v8 = gridCell->instanceIndices[startIndex];
      if ( v8 >= gridCell->instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1426, ASSERT_TYPE_ASSERT, "(instanceIndex < gridCell.instanceCount)", (const char *)&queryFormat, "instanceIndex < gridCell.instanceCount") )
        __debugbreak();
      Stream_ProcessXModelInstance(&gridCell->instances[(unsigned __int16)v8], context);
      ++startIndex;
      --v7;
    }
    while ( v7 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TransientZoneStreamingQualitySufficient
==============
*/
bool Stream_TransientZoneStreamingQualitySufficient(unsigned int transientZoneIndex)
{
  __int64 v2; 
  __int64 v3; 
  char v4; 
  bool result; 
  StreamTreeGrid *p_materialStreamTreeGrid; 
  StreamKey **cellKeys; 
  const StreamKey *v8; 
  const streamer_handle_t *p_dataHandle; 
  unsigned __int8 *data; 
  unsigned int v12; 
  __int64 sortListRead; 
  __int64 v14; 
  int v15; 
  char v16; 
  bool v17; 
  __int64 v18; 
  __int64 v19[2]; 
  __int64 v20[3]; 
  unsigned int instanceGroupStartIndex[2]; 
  __int64 *v22; 
  StreamTreeGrid *v23; 
  __int64 *v24; 
  __int64 *v25; 
  char v26; 
  StreamDistance v27; 
  StreamSortListFrame *v28; 
  unsigned __int8 *v29; 

  v2 = transientZoneIndex;
  if ( !transientZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1154, ASSERT_TYPE_SANITY, "( transientZoneIndex != 0 )", (const char *)&queryFormat, "transientZoneIndex != 0") )
    __debugbreak();
  v3 = v2;
  v4 = streamFrontendGlob->transientZoneStreamingQuality[1536 * streamFrontendGlob->sortListRead + v2];
  if ( !v4 )
    return 0;
  if ( v4 != 1 )
    return v4 == 2;
  if ( !rgp.world )
    return 0;
  p_materialStreamTreeGrid = &rgp.world->materialStreamTreeGrid;
  cellKeys = rgp.world->materialStreamTreeGrid.cellKeys;
  if ( !cellKeys )
    return 0;
  if ( (unsigned int)v2 >= rgp.world->materialStreamTreeGrid.rowCount * (unsigned int)rgp.world->materialStreamTreeGrid.columnCount )
  {
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1180, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( materialStreamTreeGrid.rowCount * materialStreamTreeGrid.columnCount )", "transientZoneIndex doesn't index materialStreamTreeGrid.rowCount * materialStreamTreeGrid.columnCount\n\t%i not in [0, %i)", v18, rgp.world->materialStreamTreeGrid.rowCount * rgp.world->materialStreamTreeGrid.columnCount) )
      __debugbreak();
  }
  v8 = cellKeys[v2];
  if ( !v8 || !Stream_GenericIsSafeToUse(v8) )
    return 0;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_stream_distanceImageNeededForTransientZone, "stream_distanceImageNeededForTransientZone");
  __asm { vmulss  xmm1, xmm0, xmm0; distance }
  StreamDistance::StreamDistance(&v27, *(float *)&_XMM1);
  p_dataHandle = &v8->data.dataHandle;
  if ( (v8->flags & 2) != 0 )
    data = (unsigned __int8 *)p_dataHandle->data;
  else
    data = Stream_AddressSpace_ResolveHandle(p_dataHandle);
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1196, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
    __debugbreak();
  v12 = *((_DWORD *)data + 17);
  v23 = p_materialStreamTreeGrid;
  sortListRead = streamFrontendGlob->sortListRead;
  v26 = 1;
  v28 = &streamFrontendGlob->sortLists[sortListRead];
  v14 = 52i64 * *((unsigned int *)data + 12);
  v20[0] = (__int64)&v28;
  v29 = &data[v14 + 80];
  v20[1] = (__int64)&v27;
  v20[2] = (__int64)&v26;
  v19[0] = (__int64)&v26;
  v19[1] = (__int64)v20;
  *(_QWORD *)instanceGroupStartIndex = &v26;
  v22 = (__int64 *)&v29;
  v24 = v19;
  v25 = v20;
  lambda_c61fc1d736f22d4f58b3f923e6e6bf39_::operator()((unsigned int)instanceGroupStartIndex, 0, v12);
  v15 = 0;
  if ( *((_DWORD *)data + 12) )
  {
    while ( 1 )
    {
      v16 = v26;
      v17 = v26 == 0;
      if ( !v26 )
        break;
      lambda_c61fc1d736f22d4f58b3f923e6e6bf39_::operator()((unsigned int)instanceGroupStartIndex, *(_DWORD *)&data[52 * v15 + 116], *(_DWORD *)&data[52 * v15 + 120]);
      if ( (unsigned int)++v15 >= *((_DWORD *)data + 12) )
        goto LABEL_23;
    }
  }
  else
  {
LABEL_23:
    v16 = v26;
    v17 = v26 == 0;
  }
  result = v16 != 0;
  streamFrontendGlob->transientZoneStreamingQuality[1536 * streamFrontendGlob->sortListRead + v3] = v17 + 2;
  return result;
}

/*
==============
Stream_TraverseFixOverrideImages
==============
*/
void Stream_TraverseFixOverrideImages(const StreamTree *tree, const StreamTreeOverride *treeOverride)
{
  __int64 i; 
  __int64 v5; 
  const GfxImage **v6; 
  const char *name; 
  char v8; 
  __int64 v9; 
  int v10; 
  bool v11; 
  int v12; 
  unsigned int imageNodeCount; 
  __int64 v14; 
  StreamTreeOverrideImageNode *imageNodes; 
  __int64 v16; 

  for ( i = 0i64; (unsigned int)i < tree->imageCount; i = (unsigned int)(i + 1) )
  {
    v5 = 0i64;
    v6 = &tree->images[i];
    name = (*v6)->name;
    if ( name )
    {
      v8 = *name;
      if ( *name )
      {
        v9 = 0xCBF29CE484222325ui64;
        do
        {
          v10 = v8;
          ++name;
          v11 = (unsigned __int8)(v8 - 65) <= 0x19u;
          v8 = *name;
          v12 = v10 + 32;
          if ( !v11 )
            v12 = v10;
          v9 = 0x100000001B3i64 * (v12 ^ (unsigned __int64)v9);
        }
        while ( v8 );
      }
      else
      {
        v9 = 0i64;
      }
      v5 = v9 & 0x7FFFFFFFFFFFFFFFi64;
    }
    imageNodeCount = treeOverride->imageNodeCount;
    v14 = 0i64;
    if ( imageNodeCount )
    {
      imageNodes = treeOverride->imageNodes;
      v16 = v5 & 0x7FFFFFFFFFFFFFFFi64;
      while ( (imageNodes[v14].srcName.hashPacked & 0x7FFFFFFFFFFFFFFFi64) != v16 )
      {
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= imageNodeCount )
          goto LABEL_17;
      }
      *v6 = imageNodes[v14].desImage;
    }
LABEL_17:
    ;
  }
}

/*
==============
Stream_TraverseMaterialHybridStreamTree
==============
*/
void Stream_TraverseMaterialHybridStreamTree(const StreamTree *materialStreamTree, const StreamTreeGrid *materialStreamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility)
{
  const dvar_t *v14; 
  __int64 v18; 
  bool useWorkers; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  char v35; 
  void *retaddr; 

  _R11 = &retaddr;
  v14 = DCONST_DVARBOOL_stream_treeEnableMaterialGridWorkers;
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
  }
  v18 = viewIndex;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeEnableMaterialGridWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  useWorkers = v14->current.enabled;
  if ( useWorkers )
    s_streamTreeGridTraversalContexts[v18].soloTree = materialStreamTree;
  __asm
  {
    vmovss  xmm6, [rsp+98h+distanceScale]
    vmovss  xmm7, [rsp+98h+cosFovLimit]
    vmovss  xmm8, [rsp+98h+zoomFactor]
    vmovss  dword ptr [rsp+98h+var_60], xmm6
    vmovss  [rsp+98h+var_68], xmm7
    vmovss  [rsp+98h+var_70], xmm8
  }
  Stream_TraverseMaterialStreamTreeGrid(materialStreamTreeGrid, v18, localClientIndex, viewPos, viewDir, v28, v30, v32, transientVisibility, useWorkers);
  if ( !useWorkers )
  {
    __asm
    {
      vmovss  [rsp+98h+var_68], xmm6
      vmovss  [rsp+98h+var_70], xmm7
      vmovss  dword ptr [rsp+98h+var_78], xmm8
    }
    Stream_TraverseStreamTree(materialStreamTree, localClientIndex, viewPos, viewDir, v27, v29, v31, transientVisibility);
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v35;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
Stream_TraverseMaterialStreamTree
==============
*/

void __fastcall Stream_TraverseMaterialStreamTree(MaterialStreamTreeCellContext *context, double _XMM1_8)
{
  const MaterialStreamTreeGridCell *gridCell; 
  float nodeDistSq; 
  float v14; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TraverseMaterialStreamTree");
  if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 784, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
    __debugbreak();
  if ( !context->streamTreeGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 785, ASSERT_TYPE_ASSERT, "(context.streamTreeGrid != nullptr)", (const char *)&queryFormat, "context.streamTreeGrid != nullptr") )
    __debugbreak();
  gridCell = context->gridCell;
  *(float *)&_XMM0 = Stream_DistanceSqToAABB(context, &gridCell->bounds);
  __asm { vmovaps xmm6, xmm0 }
  Sys_ProfBeginNamedEvent(0xFF808080, "Process large materials");
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+68h+var_38], xmm1
    vmovss  [rsp+68h+nodeDistSq], xmm6
  }
  Stream_ProcessMatImgInstanceGroups(0, 0, gridCell->largeMaterialInstanceGroupCount, gridCell->largeImageInstanceGroupCount, gridCell->largeInstanceCount, nodeDistSq, v14, context);
  Sys_ProfEndNamedEvent();
  if ( gridCell->nodes )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Process materials in tree");
    if ( !gridCell->nodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 813, ASSERT_TYPE_ASSERT, "(materialStreamTreeCell.nodeCount > 0)", (const char *)&queryFormat, "materialStreamTreeCell.nodeCount > 0") )
      __debugbreak();
    __asm
    {
      vaddss  xmm0, xmm6, cs:__real@3f800000
      vmulss  xmm1, xmm0, dword ptr [rcx+30h]
      vmulss  xmm3, xmm1, dword ptr [rbx+28h]; nodeStreamDistance
      vmovaps xmm2, xmm6; distToNodeSq
    }
    Stream_TraverseMaterialStreamTreeRecursive(gridCell->nodes, context, *(const float *)&_XMM2, *(const float *)&_XMM3);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
Stream_TraverseMaterialStreamTreeGrid
==============
*/
void Stream_TraverseMaterialStreamTreeGrid(const StreamTreeGrid *materialStreamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility, bool useWorkers)
{
  StreamKey **cellKeys; 
  __int64 v23; 
  const dvar_t *v32; 
  unsigned __int16 v33; 
  unsigned __int16 v34; 
  const StreamKey *v36; 
  unsigned __int8 *residentData; 
  const dvar_t *v57; 
  const MaterialStreamTreeGridCell *gridCell; 
  __int64 v66; 
  __int64 v67; 
  float v68; 
  float v69; 
  float v70; 
  StreamMaterialSortGridList::Sort::__l2::<lambda_103be8987fb214e831bfdf2d62fe101e> v71; 
  unsigned int data; 
  const float4 *v73; 
  __int64 v74; 
  float4 v75; 
  float4 v76; 
  float4 v77; 
  float4 v78; 
  float4 v79; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  v74 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _RBX = viewPos;
  v73 = viewPos;
  data = viewIndex;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TraverseMaterialStreamTreeGrid");
  Sys_EnterCriticalSection(CRITSECT_STREAM_TREE_DRAW);
  if ( !transientVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 913, ASSERT_TYPE_ASSERT, "(transientVisibility != nullptr)", (const char *)&queryFormat, "transientVisibility != nullptr") )
    __debugbreak();
  if ( materialStreamTreeGrid->version != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 915, ASSERT_TYPE_ASSERT, "(materialStreamTreeGrid.version == STREAM_MATERIAL_TREE_VERSION)", (const char *)&queryFormat, "materialStreamTreeGrid.version == STREAM_MATERIAL_TREE_VERSION") )
    __debugbreak();
  cellKeys = materialStreamTreeGrid->cellKeys;
  if ( materialStreamTreeGrid->cellKeys )
  {
    if ( !materialStreamTreeGrid->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 923, ASSERT_TYPE_ASSERT, "(materialStreamTreeGrid.rowCount > 0)", (const char *)&queryFormat, "materialStreamTreeGrid.rowCount > 0") )
      __debugbreak();
    if ( materialStreamTreeGrid->columnCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 924, ASSERT_TYPE_ASSERT, "(materialStreamTreeGrid.columnCount == 1)", (const char *)&queryFormat, "materialStreamTreeGrid.columnCount == 1") )
      __debugbreak();
    *(float *)&_XMM0 = GetHimipDistanceFactor();
    __asm { vmovaps xmm6, xmm0 }
    v23 = data;
    _R14 = &s_streamTreeGridTraversalContexts[v23].materialSortGridList;
    _RSI = &s_streamTreeGridTraversalContexts[v23].materialCellContext;
    memset_0(_R14, 0, sizeof(StreamMaterialSortGridList));
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovdqu xmmword ptr [rsi], xmm0
    }
    _RAX = viewDir;
    __asm
    {
      vmovups xmm1, xmmword ptr [rax]
      vmovdqu xmmword ptr [rsi+10h], xmm1
      vmovss  xmm9, [rsp+168h+zoomFactor]
      vmovss  dword ptr [rsi+20h], xmm9
      vmovss  xmm10, [rsp+168h+cosFovLimit]
      vmovss  dword ptr [rsi+24h], xmm10
      vmovss  xmm0, [rsp+168h+distanceScale]
      vmovss  dword ptr [rsi+28h], xmm0
      vmovss  dword ptr [rsi+2Ch], xmm6
    }
    v32 = DVARINT_stream_treeSpanBoost;
    if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    s_streamTreeGridTraversalContexts[v23].materialCellContext.spanBoost = v32->current.integer;
    s_streamTreeGridTraversalContexts[v23].materialCellContext.localClientIndex = localClientIndex;
    s_streamTreeGridTraversalContexts[v23].materialCellContext.streamTreeGrid = materialStreamTreeGrid;
    v33 = 0;
    s_streamTreeGridTraversalContexts[v23].materialCellContext.gridCell = NULL;
    s_streamTreeGridTraversalContexts[v23].currentIndex = 0;
    v34 = 0;
    if ( materialStreamTreeGrid->rowCount )
    {
      __asm { vmovss  xmm11, cs:__real@3f800000 }
      do
      {
        streamFrontendGlob->transientZoneStreamingQuality[1536 * streamFrontendGlob->sortListWrite + v34] = 0;
        if ( v34 >= 0x600u )
        {
          LODWORD(v67) = 1536;
          LODWORD(v66) = v34;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v66, v67) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v34 & 0x1F)) & transientVisibility->array[(unsigned __int64)v34 >> 5]) != 0 )
        {
          v36 = cellKeys[v34];
          if ( v36 )
          {
            if ( Stream_GenericIsSafeToUse(cellKeys[v34]) )
            {
              Stream_UsedGeneric(v36);
              streamFrontendGlob->transientZoneStreamingQuality[1536 * streamFrontendGlob->sortListWrite + v34] = 1;
              Sys_ProfBeginNamedEvent(0xFFFF6347, "Deserialize material stream grid cell");
              if ( (v36->flags & 2) != 0 )
                residentData = v36->data.residentData;
              else
                residentData = Stream_AddressSpace_ResolveHandle(&v36->data.dataHandle);
              if ( !residentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 985, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
                __debugbreak();
              Sys_ProfEndNamedEvent();
              if ( *((_WORD *)residentData + 38) != v34 )
              {
                Com_PrintError(0, "Stream_TraverseMaterialStreamTreeGrid - Corrupt stream key detected. Bailing out to avoid crashing\n");
                Stream_Logger_Dump(residentData);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 992, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Stream_TraverseMaterialStreamTreeGrid - Corrupt stream key detected") )
                  __debugbreak();
              }
              if ( (unsigned int)(*((_DWORD *)residentData + 14) + *((_DWORD *)residentData + 15)) > 0x19 )
              {
                if ( _R14->sortCellCount >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1009, ASSERT_TYPE_ASSERT, "(sortList.sortCellCount < STREAM_MAX_SORTED_GRID_CELLS)", (const char *)&queryFormat, "sortList.sortCellCount < STREAM_MAX_SORTED_GRID_CELLS") )
                  __debugbreak();
                _RBX = 2i64 * _R14->sortCellCount;
                _R14->sortCells[_R14->sortCellCount].gridCell = (const MaterialStreamTreeGridCell *)residentData;
                _RAX = v73;
                __asm
                {
                  vmovups xmm3, xmmword ptr [rax]
                  vmovups xmm8, cs:__xmm@3f800000000000000000000000000000
                  vinsertps xmm8, xmm8, dword ptr [rdi+0Ch], 0
                  vinsertps xmm8, xmm8, dword ptr [rdi+10h], 10h
                  vinsertps xmm8, xmm8, dword ptr [rdi+14h], 20h ; ' '
                  vmovups xmm7, cs:__xmm@3f800000000000000000000000000000
                  vinsertps xmm7, xmm7, dword ptr [rdi], 0
                  vinsertps xmm7, xmm7, dword ptr [rdi+4], 10h
                  vinsertps xmm7, xmm7, dword ptr [rdi+8], 20h ; ' '
                  vminps  xmm0, xmm8, xmm3
                  vmaxps  xmm4, xmm0, xmm7
                  vsubps  xmm1, xmm4, xmm3
                  vmulps  xmm2, xmm1, xmm1
                  vinsertps xmm0, xmm2, xmm2, 8
                  vhaddps xmm1, xmm0, xmm0
                  vhaddps xmm2, xmm1, xmm1
                }
                _RCX = viewDir;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rcx]
                  vmovups [rsp+168h+var_F8], xmm0
                  vmovups [rsp+168h+var_E8], xmm3
                  vmovdqa [rsp+168h+var_D8], xmm4
                  vmovdqa [rsp+168h+var_C8], xmm8
                  vmovdqa [rsp+168h+var_B8], xmm7
                  vmovss  [rsp+168h+var_128], xmm11
                  vmovss  [rsp+168h+var_130], xmm10
                  vmovss  dword ptr [rsp+168h+var_138], xmm9
                }
                *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor(&v79, &v78, *(float *)&_XMM2, &v77, &v76, &v75, v68, v69, v70);
                __asm { vmovss  dword ptr [r14+rbx*8+8], xmm0 }
                ++_R14->sortCellCount;
              }
              else
              {
                _RSI->gridCell = (const MaterialStreamTreeGridCell *)residentData;
                MaterialStreamTreeGridCell::DeserializeBegin((const MaterialStreamTreeGridCell *)residentData);
                Stream_TraverseMaterialStreamTree(_RSI, *(double *)&_XMM1);
                MaterialStreamTreeGridCell::DeserializeEnd((const MaterialStreamTreeGridCell *)residentData);
              }
            }
            else
            {
              Stream_RequestGeneric(v36);
              v57 = DVARINT_stream_treeSpanBoost;
              if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v57);
              Stream_BoostGeneric(v36, v57->current.integer);
            }
          }
        }
        ++v34;
      }
      while ( v34 < materialStreamTreeGrid->rowCount );
      v33 = 0;
    }
    std::_Sort_unchecked<StreamMaterialSortGridCell *,_lambda_103be8987fb214e831bfdf2d62fe101e_>(_R14->sortCells, &_R14->sortCells[_R14->sortCellCount], _R14->sortCellCount, v71);
    if ( useWorkers )
    {
      Sys_AddWorkerCmd(WRKCMD_STREAM_TRAVERSE_MATERIAL_ZONE, &data);
    }
    else if ( _R14->sortCellCount )
    {
      do
      {
        gridCell = _R14->sortCells[v33].gridCell;
        _RSI->gridCell = gridCell;
        MaterialStreamTreeGridCell::DeserializeBegin(gridCell);
        Stream_TraverseMaterialStreamTree(_RSI, *(double *)&_XMM1);
        MaterialStreamTreeGridCell::DeserializeEnd(_RSI->gridCell);
        ++v33;
      }
      while ( v33 < _R14->sortCellCount );
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
  Sys_ProfEndNamedEvent();
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
Stream_TraverseMaterialStreamTreeRecursive
==============
*/

void __fastcall Stream_TraverseMaterialStreamTreeRecursive(const MaterialStreamTreeNode *node, MaterialStreamTreeCellContext *context, double distToNodeSq, double nodeStreamDistance)
{
  bool v10; 
  const MaterialStreamTreeGridCell *gridCell; 
  __int64 v12; 
  unsigned __int16 v16; 
  _BOOL8 v45; 
  __int64 v47; 
  unsigned __int16 v49; 
  __int64 v51; 
  bool v53; 
  const MaterialStreamTreeNode *v54; 
  float nodeDistSq; 
  float v59; 
  float v60; 
  float contexta; 
  float v62; 
  float4 v64; 
  float4 v65; 
  float4 v66; 
  float4 v67; 
  float4 v68; 
  __int128 v69; 
  __int128 v70; 

  _RDI = context;
  __asm
  {
    vmovss  [rsp+150h+var_120], xmm3
    vmovss  [rsp+150h+nodeDistSq], xmm2
  }
  Stream_ProcessMatImgInstanceGroups(node->instanceStartIndex, node->instanceGroupStartIndex, node->materialInstanceGroupCount, node->imageInstanceGroupCount, node->instanceCount, nodeDistSq, v59, context);
  if ( *(_DWORD *)node->childNodes != -1 )
  {
    v10 = _RDI->gridCell == NULL;
    __asm
    {
      vmovaps [rsp+150h+var_60], xmm8
      vmovaps [rsp+150h+var_70], xmm9
    }
    if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 733, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
      __debugbreak();
    gridCell = _RDI->gridCell;
    v12 = 0i64;
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm8, cs:__real@7f7fffff
      vmovaps [rsp+150h+var_40], xmm6
    }
    _RBX = 0i64;
    __asm { vmovaps [rsp+150h+var_50], xmm7 }
    do
    {
      v16 = node->childNodes[_RBX];
      if ( v16 == 0xFFFF )
      {
        __asm { vmovaps xmm0, xmm8 }
      }
      else
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rdi+24h]
          vmovss  xmm5, dword ptr [rdi+20h]
        }
        _RCX = 52i64 * v16;
        _RAX = gridCell->nodes;
        HIDWORD(v69) = 0;
        __asm
        {
          vmovups xmm7, xmmword ptr [rbp-50h]
          vmovss  [rsp+150h+var_110], xmm9
          vmovss  xmm0, dword ptr [rcx+rax+10h]
          vmovss  xmm1, dword ptr [rcx+rax+8]
          vmovss  xmm2, dword ptr [rcx+rax+0Ch]
          vmovss  xmm7, xmm7, xmm0
          vmovss  xmm0, dword ptr [rcx+rax+4]
          vinsertps xmm7, xmm7, dword ptr [rcx+rax+14h], 10h
          vinsertps xmm7, xmm7, dword ptr [rcx+rax+18h], 20h ; ' '
        }
        HIDWORD(v70) = 0;
        __asm
        {
          vmovups xmm6, xmmword ptr [rbp-40h]
          vmovss  xmm6, xmm6, xmm0
          vminps  xmm0, xmm7, xmmword ptr [rdi]
          vinsertps xmm6, xmm6, xmm1, 10h
          vinsertps xmm6, xmm6, xmm2, 20h ; ' '
          vmaxps  xmm3, xmm0, xmm6
          vsubps  xmm1, xmm3, xmmword ptr [rdi]
          vmulps  xmm2, xmm1, xmm1
          vinsertps xmm0, xmm2, xmm2, 8
          vhaddps xmm1, xmm0, xmm0
          vmovups xmm0, xmmword ptr [rdi+10h]
          vmovss  dword ptr [rsp+150h+context], xmm4
          vmovss  [rsp+150h+var_120], xmm5
          vhaddps xmm2, xmm1, xmm1
          vmovups xmm1, xmmword ptr [rdi]
          vmovups [rsp+150h+var_E0], xmm1
          vmovups xmmword ptr [rbp-50h], xmm7
          vmovups xmmword ptr [rbp-40h], xmm6
          vmovups [rsp+150h+var_F0], xmm0
          vmovdqa [rbp+50h+var_D0], xmm3
          vmovdqa [rbp+50h+var_C0], xmm7
          vmovdqa [rbp+50h+var_B0], xmm6
        }
        *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor(&v68, &v67, *(float *)&_XMM2, &v66, &v65, &v64, v60, contexta, v62);
      }
      __asm { vmovss  [rsp+rbx*4+150h+var_100], xmm0 }
      ++_RBX;
    }
    while ( _RBX < 2 );
    __asm
    {
      vmovss  xmm0, [rsp+150h+var_FC]
      vcomiss xmm0, [rsp+150h+var_100]
      vmovaps xmm8, [rsp+150h+var_60]
      vmovaps xmm7, [rsp+150h+var_50]
    }
    v45 = (unsigned __int64)_RBX < 2;
    __asm { vmovaps xmm6, [rsp+150h+var_40] }
    v47 = 2i64;
    do
    {
      _RAX = v45 ^ v12;
      v49 = node->childNodes[v45 ^ v12];
      if ( v49 != 0xFFFF )
      {
        __asm { vmovss  xmm2, [rsp+rax*4+150h+var_100]; distToNodeSq }
        v51 = v49;
        __asm { vaddss  xmm0, xmm2, xmm9 }
        v53 = __CFADD__(gridCell->nodes, v51 * 52) || &gridCell->nodes[v51] == NULL;
        v54 = &gridCell->nodes[v51];
        __asm
        {
          vmulss  xmm0, xmm0, dword ptr [rcx+30h]
          vmulss  xmm3, xmm0, dword ptr [rdi+28h]; nodeStreamDistance
          vcomiss xmm3, dword ptr [rdi+2Ch]
        }
        if ( v53 )
          Stream_TraverseMaterialStreamTreeRecursive(v54, _RDI, *(const float *)&_XMM2, *(const float *)&_XMM3);
      }
      ++v12;
      --v47;
    }
    while ( v47 );
    __asm { vmovaps xmm9, [rsp+150h+var_70] }
  }
}

/*
==============
Stream_TraverseMaterialZoneCmd
==============
*/
void Stream_TraverseMaterialZoneCmd(const void *const data, double a2)
{
  const MaterialStreamTreeGridCell *gridCell; 
  float fmt; 
  float cosFovLimit; 
  float v10; 
  unsigned int dataa; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 868, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  dataa = *(_DWORD *)data;
  if ( dataa >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 870, ASSERT_TYPE_ASSERT, "(viewIndex < ( sizeof( *array_counter( s_streamTreeGridTraversalContexts ) ) + 0 ))", (const char *)&queryFormat, "viewIndex < ARRAY_COUNT( s_streamTreeGridTraversalContexts )") )
    __debugbreak();
  _RBX = &s_streamTreeGridTraversalContexts[dataa];
  if ( _RBX->currentIndex == _RBX->materialSortGridList.sortCellCount )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+838h]
      vmovss  [rsp+58h+var_28], xmm0
      vmovss  xmm1, dword ptr [rbx+834h]
      vmovss  [rsp+58h+cosFovLimit], xmm1
      vmovss  xmm0, dword ptr [rbx+830h]
      vmovss  dword ptr [rsp+58h+fmt], xmm0
    }
    Stream_TraverseStreamTree(_RBX->soloTree, (const LocalClientNum_t)_RBX->materialCellContext.localClientIndex, &_RBX->materialCellContext.viewPos, &_RBX->materialCellContext.viewDir, fmt, cosFovLimit, v10, _RBX->materialCellContext.transientVisibility);
  }
  else
  {
    Sys_EnterCriticalSection(CRITSECT_STREAM_TREE_DRAW);
    if ( _RBX->currentIndex >= _RBX->materialSortGridList.sortCellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 888, ASSERT_TYPE_ASSERT, "(traversalContext.currentIndex < materialSortGridList.sortCellCount)", (const char *)&queryFormat, "traversalContext.currentIndex < materialSortGridList.sortCellCount") )
      __debugbreak();
    gridCell = _RBX->materialSortGridList.sortCells[_RBX->currentIndex].gridCell;
    _RBX->materialCellContext.gridCell = gridCell;
    MaterialStreamTreeGridCell::DeserializeBegin(gridCell);
    Stream_TraverseMaterialStreamTree(&_RBX->materialCellContext, a2);
    MaterialStreamTreeGridCell::DeserializeEnd(_RBX->materialSortGridList.sortCells[_RBX->currentIndex].gridCell);
    ++_RBX->currentIndex;
    Sys_AddWorkerCmd(WRKCMD_STREAM_TRAVERSE_MATERIAL_ZONE, &dataa);
    Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
  }
}

/*
==============
Stream_TraverseStreamTree
==============
*/
void Stream_TraverseStreamTree(const StreamTree *streamTree, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility)
{
  const dvar_t *v19; 
  MaterialStreamTreeContext context; 

  _RDI = viewDir;
  _RBX = viewPos;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TraverseStreamTree");
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsp+0D8h+context.baseclass_0.viewPos.v], xmm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+0D8h+context.baseclass_0.viewDir.v], xmm1
    vmovss  xmm0, [rsp+0D8h+zoomFactor]
    vmovss  [rsp+0D8h+context.baseclass_0.zoomFactor], xmm0
    vmovss  xmm1, [rsp+0D8h+cosFovLimit]
    vmovss  [rsp+0D8h+context.baseclass_0.cosFovLimit], xmm1
    vmovss  xmm0, [rsp+0D8h+distanceScale]
    vmovss  [rsp+0D8h+context.baseclass_0.distanceScale], xmm0
  }
  *(float *)&_XMM0 = GetHimipDistanceFactor();
  __asm { vmovss  [rsp+0D8h+context.baseclass_0.streamerMaxDistToRead], xmm0 }
  v19 = DVARINT_stream_treeSpanBoost;
  if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  context.spanBoost = v19->current.integer;
  context.streamTree = streamTree;
  context.localClientIndex = localClientIndex;
  context.transientVisibility = transientVisibility;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; nodeStreamDistance
    vxorps  xmm2, xmm2, xmm2; nodeDistSq
  }
  Stream_ProcessVolumeSpan_StreamMtlGroup_(&streamTree->largeMtlGroup, &context, *(float *)&_XMM2, *(float *)&_XMM3);
  if ( streamTree->nodes )
  {
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; streamDist
      vxorps  xmm2, xmm2, xmm2; distToNodeSq
    }
    Stream_TraverseStreamTreeRecursive(streamTree->nodes, &context, *(float *)&_XMM2, *(float *)&_XMM3);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TraverseStreamTreeRecursive
==============
*/
void Stream_TraverseStreamTreeRecursive(const StreamTreeNode *node, const MaterialStreamTreeContext *context, float distToNodeSq, float streamDist)
{
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  StreamTreeNode *nodes; 
  __int64 v12; 
  __int64 v14; 
  StreamTreeNode *nodea; 
  StreamTreeNode *v22; 

  _RDI = context;
  Stream_ProcessVolumeSpan_StreamTreeNode_(node, context, distToNodeSq, streamDist);
  v8 = node->childNodes[0];
  if ( v8 != 0xFFFF )
  {
    v9 = node->childNodes[1];
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    if ( v9 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 463, ASSERT_TYPE_ASSERT, "(child1Index != c_streamTreeNoChildIndex)", (const char *)&queryFormat, "child1Index != c_streamTreeNoChildIndex") )
      __debugbreak();
    nodes = _RDI->streamTree->nodes;
    nodea = &nodes[v8];
    v22 = &nodes[v9];
    *(float *)&_XMM0 = Stream_DistanceSqToAABB(_RDI, &nodea->aabb);
    __asm
    {
      vmovss  [rsp+58h+arg_0], xmm0
      vmovaps xmm6, xmm0
    }
    *(float *)&_XMM0 = Stream_DistanceSqToAABB(_RDI, &v22->aabb);
    v12 = 0i64;
    __asm
    {
      vcomiss xmm0, xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    v14 = 2i64;
    __asm { vmovss  [rsp+58h+arg_4], xmm0 }
    do
    {
      _RAX = v12;
      __asm
      {
        vmovss  xmm2, [rsp+rax*4+58h+arg_0]; distToNodeSq
        vaddss  xmm0, xmm2, xmm6
        vmulss  xmm1, xmm0, dword ptr [rcx+34h]
        vmulss  xmm3, xmm1, dword ptr [rdi+28h]; streamDist
        vcomiss xmm3, dword ptr [rdi+2Ch]
      }
      if ( !v12 )
        Stream_TraverseStreamTreeRecursive(nodea, _RDI, *(float *)&_XMM2, *(float *)&_XMM3);
      ++v12;
      --v14;
    }
    while ( v14 );
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
}

/*
==============
Stream_TraverseXModelStreamTree
==============
*/
void Stream_TraverseXModelStreamTree(const XModelStreamTreeGridCell *xmodelStreamTreeCell, const StreamTreeGrid *streamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility)
{
  const dvar_t *v21; 
  unsigned int unsignedInt; 
  XModelStreamTreeContext context; 

  _RBX = viewPos;
  _RDI = viewDir;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TraverseXModelStreamTree");
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsp+0F8h+context.baseclass_0.viewPos.v], xmm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+0F8h+context.baseclass_0.viewDir.v], xmm1
    vmovss  xmm0, [rsp+0F8h+zoomFactor]
    vmovss  [rsp+0F8h+context.baseclass_0.zoomFactor], xmm0
    vmovss  xmm1, [rsp+0F8h+cosFovLimit]
    vmovss  [rsp+0F8h+context.baseclass_0.cosFovLimit], xmm1
    vmovss  xmm0, [rsp+0F8h+distanceScale]
    vmovss  [rsp+0F8h+context.baseclass_0.distanceScale], xmm0
  }
  *(float *)&_XMM0 = GetHimipDistanceFactor();
  __asm { vmovss  [rsp+0F8h+context.baseclass_0.streamerMaxDistToRead], xmm0 }
  v21 = DVARINT_stream_treeSpanBoost;
  if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  context.spanBoost = v21->current.integer;
  context.localClientIndex = localClientIndex;
  context.gridCell = xmodelStreamTreeCell;
  context.streamTreeGrid = streamTreeGrid;
  context.transientVisibility = transientVisibility;
  if ( !r_forceLod || (unsignedInt = r_forceLod->current.unsignedInt, unsignedInt > 5) )
    unsignedInt = -1;
  context.forceLod = unsignedInt;
  if ( !viewIndex )
  {
    if ( !streamFrontendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1508, ASSERT_TYPE_ASSERT, "(streamFrontendGlob != nullptr)", (const char *)&queryFormat, "streamFrontendGlob != nullptr") )
      __debugbreak();
    memset_0(streamFrontendGlob->smodelsCollectionLodsTemp, 0, sizeof(streamFrontendGlob->smodelsCollectionLodsTemp));
    memset_0(streamFrontendGlob->xmodelLodsTestedTemp, 0, sizeof(streamFrontendGlob->xmodelLodsTestedTemp));
    memset_0(streamFrontendGlob->xmodelLodsAvailableTemp, 0, sizeof(streamFrontendGlob->xmodelLodsAvailableTemp));
  }
  Sys_ProfBeginNamedEvent(0xFFFF6347, "Process large models");
  Stream_ProcessXModelInstances(0, xmodelStreamTreeCell->largeInstanceIndexCount, &context);
  Sys_ProfEndNamedEvent();
  if ( xmodelStreamTreeCell->nodes )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Process models in tree");
    Stream_TraverseXModelStreamTreeRecursive(xmodelStreamTreeCell->nodes, &context);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TraverseXModelStreamTreeGrid
==============
*/
void Stream_TraverseXModelStreamTreeGrid(const StreamTreeGrid *xmodelStreamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility)
{
  StreamKey **cellKeys; 
  unsigned int GridCellIndex; 
  __int64 v16; 
  const StreamKey *v17; 
  bool IsSafeToUse; 
  const StreamKey *v20; 
  const dvar_t *v21; 
  StreamKey *ClosestGridCell; 
  const XModelStreamTreeGridCell *v23; 
  float v27; 
  float v28; 
  float v29; 
  float4 viewPosa; 

  _RBP = viewPos;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TraverseXModelStreamTreeGrid");
  if ( xmodelStreamTreeGrid->version != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1594, ASSERT_TYPE_ASSERT, "(xmodelStreamTreeGrid.version == STREAM_XMODEL_TREE_VERSION)", (const char *)&queryFormat, "xmodelStreamTreeGrid.version == STREAM_XMODEL_TREE_VERSION") )
    __debugbreak();
  cellKeys = xmodelStreamTreeGrid->cellKeys;
  if ( xmodelStreamTreeGrid->cellKeys )
  {
    Sys_EnterCriticalSection(CRITSECT_STREAM_TREE_DRAW);
    if ( !xmodelStreamTreeGrid->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1604, ASSERT_TYPE_ASSERT, "(xmodelStreamTreeGrid.rowCount > 0)", (const char *)&queryFormat, "xmodelStreamTreeGrid.rowCount > 0") )
      __debugbreak();
    if ( !xmodelStreamTreeGrid->columnCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1605, ASSERT_TYPE_ASSERT, "(xmodelStreamTreeGrid.columnCount > 0)", (const char *)&queryFormat, "xmodelStreamTreeGrid.columnCount > 0") )
      __debugbreak();
    __asm { vmovss  xmm1, cs:?g_xmodelStreamTreeGridCellSize@@3MB; streamTreeGridCellSize }
    GridCellIndex = FindGridCellIndex(xmodelStreamTreeGrid, *(const float *)&_XMM1, _RBP);
    v16 = GridCellIndex;
    if ( GridCellIndex >= xmodelStreamTreeGrid->rowCount * (unsigned int)xmodelStreamTreeGrid->columnCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1609, ASSERT_TYPE_ASSERT, "(gridCellIndex < static_cast<uint>( xmodelStreamTreeGrid.rowCount * xmodelStreamTreeGrid.columnCount ))", (const char *)&queryFormat, "gridCellIndex < static_cast<uint>( xmodelStreamTreeGrid.rowCount * xmodelStreamTreeGrid.columnCount )") )
      __debugbreak();
    v17 = cellKeys[v16];
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1612, ASSERT_TYPE_ASSERT, "(gridCellKey != nullptr)", (const char *)&queryFormat, "gridCellKey != nullptr") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups xmmword ptr [rsp+98h+viewPos.v], xmm0
    }
    IsSafeToUse = Stream_GenericIsSafeToUse(v17);
    v20 = v17;
    if ( !IsSafeToUse )
    {
      Stream_RequestGeneric(v17);
      v21 = DVARINT_stream_treeSpanBoost;
      if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      Stream_BoostGeneric(v17, v21->current.integer);
      ClosestGridCell = FindClosestGridCell(xmodelStreamTreeGrid, &viewPosa);
      v17 = ClosestGridCell;
      if ( !ClosestGridCell )
      {
        memset_0(streamFrontendGlob->smodelsCollectionLodsTemp, 0, sizeof(streamFrontendGlob->smodelsCollectionLodsTemp));
LABEL_28:
        Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
        goto LABEL_29;
      }
      v20 = ClosestGridCell;
    }
    Stream_UsedGeneric(v20);
    Sys_ProfBeginNamedEvent(0xFFFF6347, "Deserialize xmodel stream grid cell");
    v23 = XModelStreamTreeGridCell::DeserializeBegin(v17);
    if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1643, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
      __debugbreak();
    Sys_ProfEndNamedEvent();
    __asm
    {
      vmovss  xmm0, [rsp+98h+distanceScale]
      vmovss  [rsp+98h+var_58], xmm0
      vmovss  xmm1, [rsp+98h+cosFovLimit]
      vmovss  [rsp+98h+var_60], xmm1
      vmovss  xmm0, [rsp+98h+zoomFactor]
      vmovss  [rsp+98h+var_68], xmm0
    }
    Stream_TraverseXModelStreamTree(v23, xmodelStreamTreeGrid, viewIndex, localClientIndex, _RBP, viewDir, v27, v28, v29, transientVisibility);
    XModelStreamTreeGridCell::DeserializeEnd(v23);
    goto LABEL_28;
  }
LABEL_29:
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TraverseXModelStreamTreeRecursive
==============
*/
void Stream_TraverseXModelStreamTreeRecursive(const XModelStreamTreeNode *node, XModelStreamTreeContext *context)
{
  const XModelStreamTreeNode *v5; 
  char v7; 
  char v8; 
  const XModelStreamTreeGridCell *gridCell; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 

  __asm { vmovaps [rsp+48h+var_28], xmm6 }
  v5 = node;
  *(float *)&_XMM0 = Stream_DistanceSqToAABB(context, &node->bounds);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  while ( v7 | v8 )
  {
    gridCell = context->gridCell;
    v10 = v5->childNodes[0];
    v11 = v5->childNodes[1];
    Stream_ProcessXModelInstances(v5->instanceStartIndex, v5->instanceCount, context);
    if ( v10 != 0xFFFF )
      Stream_TraverseXModelStreamTreeRecursive(&gridCell->nodes[v10], context);
    if ( v11 == 0xFFFF )
      break;
    v5 = &gridCell->nodes[v11];
    *(float *)&_XMM0 = Stream_DistanceSqToAABB(context, &v5->bounds);
    __asm { vcomiss xmm0, xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_28] }
}

