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
void ComputeInstanceLodExtentBounds(ExtentBounds *lodExtentBounds, const unsigned __int64 lodIndex, const XModelInstance *instance, const XModel *xmodel, const XModelStreamTreeContext *context)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 v15; 

  if ( lodIndex >= xmodel->numLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1221, ASSERT_TYPE_ASSERT, "(lodIndex < xmodel.numLods)", (const char *)&queryFormat, "lodIndex < xmodel.numLods") )
    __debugbreak();
  v15 = *(_QWORD *)instance->position.v;
  v9 = xmodel->lodInfo[lodIndex].dist * context->zoomFactor;
  v10 = (float)instance->halfExtents.x + v9;
  v11 = (float)instance->halfExtents.y + v9;
  LODWORD(v12) = HIDWORD(*(_QWORD *)instance->position.v);
  v13 = (float)instance->halfExtents.z + v9;
  v14 = instance->position.v[2];
  lodExtentBounds->mins.v[0] = COERCE_FLOAT(*(_QWORD *)instance->position.v) - v10;
  lodExtentBounds->mins.v[1] = v12 - v11;
  lodExtentBounds->mins.v[2] = v14 - v13;
  lodExtentBounds->maxs.v[0] = v10 + *(float *)&v15;
  lodExtentBounds->maxs.v[2] = v13 + v14;
  lodExtentBounds->maxs.v[1] = v11 + v12;
}

/*
==============
ComputeMaterialMinDistancesForXModel
==============
*/
void ComputeMaterialMinDistancesForXModel(XAssetHeader header, void *data)
{
  float v4; 
  int v5; 
  float *v6; 
  int v7; 
  unsigned int MaterialIndex; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  float v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 

  v4 = 0.0;
  v5 = 0;
  v19 = 0;
  if ( header.physicsLibrary->isMotionPropertiesList )
  {
    v6 = (float *)&header.physicsLibrary[10].name + 1;
    do
    {
      v7 = 0;
      if ( *(_WORD *)v6 )
      {
        do
        {
          MaterialIndex = DB_GetMaterialIndex(*(const Material **)&header.physicsLibrary[9].name[8 * v7 + 8 * *((unsigned __int16 *)v6 + 1)]);
          v9 = (int)MaterialIndex;
          if ( MaterialIndex >= 0xB400 )
          {
            LODWORD(v16) = 46080;
            LODWORD(v15) = MaterialIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v15, v16) )
              __debugbreak();
          }
          v10 = (unsigned __int64)(unsigned int)v9 >> 5;
          v11 = 0x80000000 >> (v9 & 0x1F);
          if ( (v11 & *((_DWORD *)data + v10 + 2)) != 0 )
          {
            _XMM0 = LODWORD(s_minDistSqForMaterials[v9]);
            __asm { vminss  xmm1, xmm0, xmm6 }
            s_minDistSqForMaterials[v9] = *(float *)&_XMM1;
          }
          else
          {
            s_minDistSqForMaterials[v9] = v4;
            if ( (unsigned int)v9 >= 0xB400 )
            {
              LODWORD(v18) = 46080;
              LODWORD(v17) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v17, v18) )
                __debugbreak();
            }
            *((_DWORD *)data + v10 + 2) |= v11;
          }
          ++v7;
        }
        while ( v7 < *(unsigned __int16 *)v6 );
        v5 = v19;
      }
      v14 = *(v6 - 1);
      ++v5;
      v6 += 16;
      v19 = v5;
      v4 = v14 * v14;
    }
    while ( v5 < header.physicsLibrary->isMotionPropertiesList );
  }
}

/*
==============
FindClosestGridCell
==============
*/
StreamKey *FindClosestGridCell(const StreamTreeGrid *xmodelStreamTreeGrid, float4 *viewPos)
{
  StreamKey *v4; 
  unsigned int v5; 
  float v6; 
  __int128 v7; 
  unsigned __int16 columnCount; 
  unsigned int i; 
  __int64 v10; 
  StreamKey *v11; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v25; 
  float v26; 
  StreamKey *result; 
  __m128 v; 

  v4 = NULL;
  v5 = 0;
  v6 = FLOAT_3_4028235e38;
  v7 = 0i64;
  if ( !xmodelStreamTreeGrid->rowCount )
    return 0i64;
  do
  {
    columnCount = xmodelStreamTreeGrid->columnCount;
    for ( i = 0; i < columnCount; columnCount = xmodelStreamTreeGrid->columnCount )
    {
      v10 = i + v5 * columnCount;
      v11 = xmodelStreamTreeGrid->cellKeys[v10];
      if ( v11 && Stream_GenericIsSafeToUse(xmodelStreamTreeGrid->cellKeys[v10]) )
      {
        _XMM11 = viewPos->v;
        v13 = (float)i;
        v14 = (float)(v13 * 5000.0) + xmodelStreamTreeGrid->bounds.mins.v[0];
        v15 = 5000.0 * 0.001;
        v16 = (float)v5;
        v17 = (float)(v16 * 5000.0) + xmodelStreamTreeGrid->bounds.mins.v[1];
        v18 = (float)(v14 + 5000.0) - (float)(5000.0 * 0.001);
        v19 = v17 + 5000.0;
        if ( (float)(v14 + (float)(5000.0 * 0.001)) > v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", (float)(v14 + (float)(5000.0 * 0.001)), v18) )
          __debugbreak();
        __asm { vmaxss  xmm0, xmm11, xmm8 }
        _XMM11 = viewPos->v.m128_u32[1];
        __asm { vminss  xmm8, xmm0, xmm6 }
        if ( (float)(v17 + v15) > (float)(v19 - v15) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", (float)(v17 + v15), (float)(v19 - v15)) )
          __debugbreak();
        __asm
        {
          vmaxss  xmm0, xmm11, xmm7
          vminss  xmm3, xmm0, xmm6
        }
        v25 = _mm_shuffle_ps(viewPos->v, viewPos->v, 85).m128_f32[0] - *(float *)&_XMM3;
        v26 = (float)(v25 * v25) + (float)((float)(COERCE_FLOAT(*viewPos) - *(float *)&_XMM8) * (float)(COERCE_FLOAT(*viewPos) - *(float *)&_XMM8));
        if ( v26 < v6 )
        {
          v6 = v26;
          v7 = _XMM8;
          v4 = v11;
        }
      }
      ++i;
    }
    ++v5;
  }
  while ( v5 < xmodelStreamTreeGrid->rowCount );
  result = v4;
  if ( v4 )
  {
    v = viewPos->v;
    _mm_shuffle_ps(v, v, 255);
    _XMM1 = v7;
    __asm { vinsertps xmm1, xmm1, xmm14, 10h }
    _mm_shuffle_ps(v, v, 170);
    __asm
    {
      vinsertps xmm1, xmm1, xmm0, 20h ; ' '
      vinsertps xmm1, xmm1, xmm2, 30h ; '0'
    }
    *viewPos = (float4)_XMM1.v;
  }
  return result;
}

/*
==============
FindGridCellIndex
==============
*/
__int64 FindGridCellIndex(const StreamTreeGrid *streamTreeGrid, const float streamTreeGridCellSize, const float4 *viewPos)
{
  int v5; 
  int v6; 
  int columnCount; 
  int rowCount; 
  unsigned int v9; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 

  Sys_ProfBeginNamedEvent(0xFF808080, "FindGridCellIndex");
  v5 = (int)(float)((float)(1.0 / streamTreeGridCellSize) * (float)(COERCE_FLOAT(*viewPos) - streamTreeGrid->bounds.mins.v[0]));
  v6 = (int)(float)((float)(1.0 / streamTreeGridCellSize) * (float)(_mm_shuffle_ps(viewPos->v, viewPos->v, 85).m128_f32[0] - streamTreeGrid->bounds.mins.v[1]));
  columnCount = streamTreeGrid->columnCount;
  if ( columnCount - 1 < 0 )
  {
    v14 = columnCount - 1;
    v12 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v12, v14) )
      __debugbreak();
  }
  if ( columnCount <= v5 )
    v5 = columnCount - 1;
  if ( v5 < 0 )
    v5 = 0;
  rowCount = streamTreeGrid->rowCount;
  if ( rowCount - 1 < 0 )
  {
    LODWORD(v13) = rowCount - 1;
    LODWORD(v11) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v11, v13) )
      __debugbreak();
  }
  if ( rowCount <= v6 )
    v6 = rowCount - 1;
  if ( v6 < 0 )
    v6 = 0;
  v9 = v5 + v6 * streamTreeGrid->columnCount;
  if ( v9 >= streamTreeGrid->columnCount * (unsigned int)streamTreeGrid->rowCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1544, ASSERT_TYPE_ASSERT, "(gridCellIndex < static_cast<uint>( streamTreeGrid.rowCount * streamTreeGrid.columnCount ))", (const char *)&queryFormat, "gridCellIndex < static_cast<uint>( streamTreeGrid.rowCount * streamTreeGrid.columnCount )") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  return v9;
}

/*
==============
GetHimipDistanceFactor
==============
*/
float GetHimipDistanceFactor()
{
  const dvar_t *v0; 
  float smoothedImageCurrentReadDistanceSq; 
  __int128 unsignedInt; 
  const dvar_t *v3; 
  __int128 v5; 

  v0 = DVARFLT_stream_treeDistanceFactor;
  smoothedImageCurrentReadDistanceSq = streamFrontendGlob->smoothedImageCurrentReadDistanceSq;
  if ( !DVARFLT_stream_treeDistanceFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDistanceFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  unsignedInt = v0->current.unsignedInt;
  v3 = DVARFLT_stream_treeDistanceMinClamp;
  if ( !DVARFLT_stream_treeDistanceMinClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDistanceMinClamp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v5 = unsignedInt;
  *(float *)&v5 = *(float *)&unsignedInt * smoothedImageCurrentReadDistanceSq;
  _XMM0 = v5;
  __asm { vmaxss  xmm0, xmm0, dword ptr [rbx+28h] }
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
  __int64 v19; 
  __int64 v21; 
  __int64 v22; 
  const StreamTreeGrid *streamTreeGrid; 
  GfxCmdBufContext v24; 
  __int64 v25; 
  unsigned int v26; 

  v26 = groupStartIndex;
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
  v25 = v8;
  do
  {
    if ( v9 >= gridCell->instanceGroupCount )
    {
      LODWORD(v22) = gridCell->instanceGroupCount;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1961, ASSERT_TYPE_ASSERT, "(unsigned)( imgInstanceGroupIndex ) < (unsigned)( gridCell.instanceGroupCount )", "imgInstanceGroupIndex doesn't index gridCell.instanceGroupCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v15 = (__int64)&gridCell->instanceGroups[v9];
    if ( !*(_WORD *)(v15 + 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1965, ASSERT_TYPE_ASSERT, "(imgInstanceGroup.instanceCount > 0)", (const char *)&queryFormat, "imgInstanceGroup.instanceCount > 0") )
      __debugbreak();
    if ( *(unsigned __int16 *)(v15 + 4) >= streamTreeGrid->imageCount )
    {
      LODWORD(v22) = streamTreeGrid->imageCount;
      LODWORD(v21) = *(unsigned __int16 *)(v15 + 4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1966, ASSERT_TYPE_ASSERT, "(unsigned)( imgInstanceGroup.assetIndex ) < (unsigned)( streamTreeGrid.imageCount )", "imgInstanceGroup.assetIndex doesn't index streamTreeGrid.imageCount\n\t%i not in [0, %i)", v21, v22) )
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
            LODWORD(v22) = v12;
            LODWORD(v21) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1979, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( cellInstanceCount )", "instanceIndex doesn't index cellInstanceCount\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          v19 = v13++;
          v24 = *gfxContext;
          RB_Stream_StreamTreeDebugBox(&v24, &gridCell->instances[v19].bounds.mins, &gridCell->instances[v19].bounds.maxs, &colorMagenta, viewProjectionMatrix);
          ++v18;
        }
        while ( v18 < *(unsigned __int16 *)(v15 + 6) );
        v9 = v26;
        v14 = v25;
      }
    }
    else
    {
      v13 += v17;
    }
    ++v9;
    --v14;
    v26 = v9;
    v25 = v14;
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
  __int64 v19; 
  __int64 v21; 
  __int64 v22; 
  const StreamTreeGrid *streamTreeGrid; 
  GfxCmdBufContext v24; 
  __int64 v25; 
  unsigned int v26; 

  v26 = groupStartIndex;
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
  v25 = v8;
  do
  {
    if ( v9 >= gridCell->instanceGroupCount )
    {
      LODWORD(v22) = gridCell->instanceGroupCount;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1913, ASSERT_TYPE_ASSERT, "(unsigned)( mtlInstanceGroupIndex ) < (unsigned)( gridCell.instanceGroupCount )", "mtlInstanceGroupIndex doesn't index gridCell.instanceGroupCount\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v15 = (__int64)&gridCell->instanceGroups[v9];
    if ( !*(_WORD *)(v15 + 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1917, ASSERT_TYPE_ASSERT, "(mtlInstanceGroup.instanceCount > 0)", (const char *)&queryFormat, "mtlInstanceGroup.instanceCount > 0") )
      __debugbreak();
    if ( *(unsigned __int16 *)(v15 + 4) >= streamTreeGrid->materialCount )
    {
      LODWORD(v22) = streamTreeGrid->materialCount;
      LODWORD(v21) = *(unsigned __int16 *)(v15 + 4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1918, ASSERT_TYPE_ASSERT, "(unsigned)( mtlInstanceGroup.assetIndex ) < (unsigned)( streamTreeGrid.materialCount )", "mtlInstanceGroup.assetIndex doesn't index streamTreeGrid.materialCount\n\t%i not in [0, %i)", v21, v22) )
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
            LODWORD(v22) = v12;
            LODWORD(v21) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1931, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( cellInstanceCount )", "instanceIndex doesn't index cellInstanceCount\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          v19 = v13++;
          v24 = *gfxContext;
          RB_Stream_StreamTreeDebugBox(&v24, &gridCell->instances[v19].bounds.mins, &gridCell->instances[v19].bounds.maxs, &colorMagenta, viewProjectionMatrix);
          ++v18;
        }
        while ( v18 < *(unsigned __int16 *)(v15 + 6) );
        v9 = v26;
        v14 = v25;
      }
    }
    else
    {
      v13 += v17;
    }
    ++v9;
    --v14;
    v26 = v9;
    v25 = v14;
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
  const StreamTreeNode *v7; 
  GfxCmdBufContext *v8; 
  const MaterialStreamTreeContext *v9; 
  float v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  bool v13; 
  int v14; 
  StreamKey *volumesKey; 
  const streamer_handle_t *p_dataHandle; 
  unsigned __int8 *data; 
  int imgInfoCount; 
  unsigned int v19; 
  unsigned int v20; 
  StreamMtlImgInfo *infos; 
  __int64 v22; 
  unsigned int i; 
  __int64 v24; 
  unsigned int v25; 
  StreamMtlImgInfo *v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  int v30; 
  const StreamTree *v31; 
  const StreamTree *v32; 
  const vec4_t *v33; 
  unsigned __int16 v34; 
  unsigned __int16 v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  int v39; 
  const StreamTree *streamTree; 
  unsigned int v41; 
  GfxCmdBufContext v42; 

  v7 = node;
  v8 = gfxContext;
  v9 = context;
  v10 = Stream_DistanceSqToAABB(context, &node->aabb);
  if ( v10 > 25000000.0 || (float)((float)((float)(v10 + 1.0) * v7->minLomipInvSqRadiiOfChildren) * v9->distanceScale) > v9->streamerMaxDistToRead )
    return;
  if ( !v9->streamTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1744, ASSERT_TYPE_ASSERT, "(context.streamTree != nullptr)", (const char *)&queryFormat, "context.streamTree != nullptr") )
    __debugbreak();
  v11 = v7->childNodes[0];
  v12 = v7->childNodes[1];
  streamTree = v9->streamTree;
  v34 = v11;
  v35 = v12;
  v13 = v11 == 0xFFFF && v12 == 0xFFFF;
  v14 = drawAssetIndex;
  if ( drawAssetIndex == -1 )
  {
    v33 = &colorGreen;
    if ( v13 )
      v33 = &colorBlue;
    v42 = *v8;
    RB_Stream_StreamTreeDebugBox(&v42, &v7->aabb.mins, &v7->aabb.maxs, v33, viewProjectionMatrix);
  }
  else
  {
    if ( !v7->volumesKey )
      goto LABEL_43;
    if ( Stream_GenericIsSafeToUse(v7->volumesKey) )
    {
      volumesKey = v7->volumesKey;
      p_dataHandle = &v7->volumesKey->data.dataHandle;
      if ( (v7->volumesKey->flags & 2) != 0 )
        data = (unsigned __int8 *)p_dataHandle->data;
      else
        data = Stream_AddressSpace_ResolveHandle(p_dataHandle);
      if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1760, ASSERT_TYPE_ASSERT, "(volumes != nullptr)", (const char *)&queryFormat, "volumes != nullptr") )
        __debugbreak();
      imgInfoCount = v7->imgInfoCount;
      v41 = volumesKey->dataSize / 0x18;
      v39 = v7->mtlInfoCount + imgInfoCount;
      v38 = 0;
      v19 = 0;
      v20 = 0;
      if ( v7->mtlInfoCount )
      {
        do
        {
          infos = v7->infos;
          v22 = v19++;
          v36 = v19;
          if ( DB_GetMaterialIndex(streamTree->materials[infos[v22].assetIndex]) == drawAssetIndex )
          {
            for ( i = 0; i < infos[v22].volumeCount; ++i )
            {
              v24 = v20++;
              v42 = *v8;
              RB_Stream_DebugDrawStreamTreeVolume(&v42, (const StreamVolumeCompressed *)&data[24 * v24], viewProjectionMatrix);
            }
            v19 = v36;
          }
          else
          {
            v20 += infos[v22].volumeCount;
          }
          ++v38;
        }
        while ( v38 < v7->mtlInfoCount );
        LOWORD(imgInfoCount) = v7->imgInfoCount;
      }
      v25 = 0;
      if ( (_WORD)imgInfoCount )
      {
        do
        {
          v26 = v7->infos;
          v27 = v19++;
          v37 = v19;
          if ( DB_GetGfxImageIndex(streamTree->images[v26[v27].assetIndex]) == drawAssetIndex )
          {
            v28 = 0;
            if ( v26[v27].volumeCount )
            {
              do
              {
                v29 = v20++;
                v42 = *gfxContext;
                RB_Stream_DebugDrawStreamTreeVolume(&v42, (const StreamVolumeCompressed *)&data[24 * v29], viewProjectionMatrix);
                ++v28;
              }
              while ( v28 < v26[v27].volumeCount );
              v7 = node;
            }
            v19 = v37;
          }
          else
          {
            v20 += v26[v27].volumeCount;
          }
          ++v25;
        }
        while ( v25 < v7->imgInfoCount );
      }
      if ( v19 != v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1817, ASSERT_TYPE_ASSERT, "(nodeInfoIndex == nodeInfoCount)", (const char *)&queryFormat, "nodeInfoIndex == nodeInfoCount") )
        __debugbreak();
      if ( v20 != v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1818, ASSERT_TYPE_ASSERT, "(nodeVolumeIndex == totalVolumeCount)", (const char *)&queryFormat, "nodeVolumeIndex == totalVolumeCount") )
        __debugbreak();
      v12 = v35;
      v14 = drawAssetIndex;
      v9 = context;
      v8 = gfxContext;
    }
  }
  v11 = v34;
LABEL_43:
  if ( curDepth < maxDepth )
  {
    v30 = curDepth + 1;
    if ( v11 != 0xFFFF )
    {
      v31 = v9->streamTree;
      v42 = *v8;
      RB_Stream_DebugDrawStreamTreeRecursive(&v42, &v31->nodes[v11], v9, v30, v14, maxDepth, viewProjectionMatrix);
    }
    if ( v12 != 0xFFFF )
    {
      v32 = v9->streamTree;
      v42 = *v8;
      RB_Stream_DebugDrawStreamTreeRecursive(&v42, &v32->nodes[v12], v9, v30, v14, maxDepth, viewProjectionMatrix);
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
  float x; 
  __m128 v5; 
  float v6; 
  __m128 v10; 
  GfxCmdBufContext v13; 
  GfxCmdBufContext v16; 
  __m128 v17; 
  vec3_t v18; 

  x = (float)volume->halfExtent.x;
  v17.m128_i32[3] = 0;
  v5 = v17;
  v5.m128_f32[0] = x;
  _XMM4 = v5;
  v6 = volume->wldCenter.v[0];
  __asm
  {
    vinsertps xmm4, xmm4, xmm1, 10h
    vinsertps xmm4, xmm4, xmm2, 20h ; ' '
  }
  v17 = _XMM4;
  v17.m128_i32[3] = 0;
  v10 = v17;
  v10.m128_f32[0] = v6;
  _XMM3 = v10;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rdx+8], 20h ; ' '
  }
  v13 = *gfxContext;
  _XMM2 = _mm128_sub_ps(_XMM3, _XMM4);
  _XMM1 = _mm128_add_ps(_XMM3, _XMM4);
  v17.m128_i32[3] = _XMM3.m128_i32[3];
  v18.v[0] = _XMM1.m128_f32[0];
  __asm
  {
    vextractps [rsp+78h+var_24], xmm1, 1
    vextractps [rsp+78h+var_20], xmm1, 2
  }
  v17.m128_f32[0] = _XMM2.m128_f32[0];
  __asm
  {
    vextractps [rsp+78h+var_34], xmm2, 1
    vextractps [rsp+78h+var_30], xmm2, 2
  }
  v16 = v13;
  RB_Stream_StreamTreeDebugBox(&v16, (const vec3_t *)&v17, &v18, &colorMagenta, viewProjectionMatrix);
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
  unsigned int v14; 
  unsigned int v15; 
  unsigned int imageInstanceGroupCount; 
  bool v17; 
  GfxCmdBufContext v18; 
  vec4_t *v19; 
  unsigned __int16 v20; 
  const MaterialStreamTreeGridCell *gridCell; 
  unsigned __int16 v22; 
  const MaterialStreamTreeNode *v23; 
  const MaterialStreamTreeNode *v24; 
  GfxCmdBufContext v25; 
  vec4_t v26; 

  if ( drawAssetIndex == -1 )
  {
    v17 = node->childNodes[0] == 0xFFFF && node->childNodes[1] == 0xFFFF;
    v18 = *gfxContext;
    v19 = &colorGreen;
    if ( v17 )
      v19 = &colorBlue;
    v26 = *v19;
    v25 = v18;
    RB_Stream_StreamTreeDebugBox(&v25, &node->bounds.mins, &node->bounds.maxs, &v26, viewProjectionMatrix);
  }
  else
  {
    instanceStartIndex = node->instanceStartIndex;
    materialInstanceGroupCount = node->materialInstanceGroupCount;
    instanceGroupStartIndex = node->instanceGroupStartIndex;
    v26 = *(vec4_t *)gfxContext;
    v14 = RB_Stream_DebugDrawMaterials((GfxCmdBufContext *)&v26, context, instanceGroupStartIndex, materialInstanceGroupCount, instanceStartIndex, drawAssetIndex, viewProjectionMatrix);
    v15 = node->instanceGroupStartIndex + node->materialInstanceGroupCount;
    imageInstanceGroupCount = node->imageInstanceGroupCount;
    v26 = *(vec4_t *)gfxContext;
    if ( (unsigned int)RB_Stream_DebugDrawImages((GfxCmdBufContext *)&v26, context, v15, imageInstanceGroupCount, v14, drawAssetIndex, viewProjectionMatrix) - node->instanceStartIndex != node->instanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2008, ASSERT_TYPE_ASSERT, "(( instanceIndex - node.instanceStartIndex ) == node.instanceCount)", (const char *)&queryFormat, "( instanceIndex - node.instanceStartIndex ) == node.instanceCount") )
      __debugbreak();
  }
  if ( curDepth < maxDepth )
  {
    if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2020, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
      __debugbreak();
    v20 = node->childNodes[0];
    gridCell = context->gridCell;
    v22 = node->childNodes[1];
    if ( v20 != 0xFFFF )
    {
      v23 = &gridCell->nodes[v20];
      v25 = *gfxContext;
      RB_Stream_DebugDrawStreamTreeZoneRecursive(&v25, v23, context, curDepth + 1, drawAssetIndex, maxDepth, viewProjectionMatrix);
    }
    if ( v22 != 0xFFFF )
    {
      v24 = &gridCell->nodes[v22];
      v25 = *gfxContext;
      RB_Stream_DebugDrawStreamTreeZoneRecursive(&v25, v24, context, curDepth + 1, drawAssetIndex, maxDepth, viewProjectionMatrix);
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
  float v8; 
  __m128 v; 
  unsigned int GridCellIndex; 
  __int64 v14; 
  const StreamKey *v15; 
  const XModelStreamTreeGridCell *v16; 
  __m128 v17; 
  float v18; 
  __m128 v20; 
  const dvar_t *v23; 
  const XModelStreamTreeNode *nodes; 
  const dvar_t *v25; 
  int integer; 
  const dvar_t *v27; 
  XModelStreamTreeContext v29; 
  float4 viewPos; 

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
    v8 = viewInfo->viewParmsSet.frames[2].viewParms.camera.origin.v[0];
    viewPos.v.m128_i32[3] = 0;
    v = viewPos.v;
    v.m128_f32[0] = v8;
    _XMM3 = v;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsi+404h], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+408h], 20h ; ' '
    }
    viewPos.v = _XMM3;
    GridCellIndex = FindGridCellIndex(xmodelStreamTreeGrid, 5000.0, &viewPos);
    v14 = GridCellIndex;
    if ( GridCellIndex >= xmodelStreamTreeGrid->rowCount * (unsigned int)xmodelStreamTreeGrid->columnCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2288, ASSERT_TYPE_ASSERT, "(gridCellIndex < static_cast<uint>( xmodelStreamTreeGrid.rowCount * xmodelStreamTreeGrid.columnCount ))", (const char *)&queryFormat, "gridCellIndex < static_cast<uint>( xmodelStreamTreeGrid.rowCount * xmodelStreamTreeGrid.columnCount )") )
      __debugbreak();
    v15 = cellKeys[v14];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2291, ASSERT_TYPE_ASSERT, "(gridCellKey != nullptr)", (const char *)&queryFormat, "gridCellKey != nullptr") )
      __debugbreak();
    if ( Stream_GenericIsSafeToUse(v15) )
    {
      Stream_UsedGeneric(v15);
      v16 = XModelStreamTreeGridCell::DeserializeBegin(v15);
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2310, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
        __debugbreak();
      v17 = *(__m128 *)gfxContext;
      if ( v16->nodes )
      {
        v18 = viewInfo->viewParmsSet.frames[2].viewParms.camera.origin.v[0];
        viewPos.v.m128_i32[3] = 0;
        v20 = viewPos.v;
        v20.m128_f32[0] = v18;
        _XMM3 = v20;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rsi+404h], 10h
          vinsertps xmm3, xmm3, dword ptr [rsi+408h], 20h ; ' '
        }
        viewPos.v = _XMM3;
        v29.viewPos.v.m128_f32[0] = _XMM3.m128_f32[0];
        __asm
        {
          vextractps [rbp+57h+var_BC], xmm3, 1
          vextractps [rbp+57h+var_B8], xmm3, 2
          vextractps [rbp+57h+var_B4], xmm3, 3
        }
        v29.zoomFactor = FLOAT_1_0;
        v29.cosFovLimit = 0.0;
        v29.distanceScale = FLOAT_1_0;
        v29.streamerMaxDistToRead = GetHimipDistanceFactor();
        v23 = DVARINT_stream_treeSpanBoost;
        if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        v29.spanBoost = v23->current.integer;
        v29.streamTreeGrid = xmodelStreamTreeGrid;
        v29.gridCell = v16;
        v29.transientVisibility = NULL;
        nodes = v16->nodes;
        v25 = DCONST_DVARINT_stream_treeDrawMaxDepth;
        if ( !DCONST_DVARINT_stream_treeDrawMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDrawMaxDepth") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        integer = v25->current.integer;
        viewPos.v = v17;
        RB_Stream_DebugDrawXModelStreamTreeRecursive((GfxCmdBufContext *)&viewPos, nodes, &v29, 0, drawMode > 1, integer, &viewInfo->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
      }
      XModelStreamTreeGridCell::DeserializeEnd(v16);
    }
    else
    {
      Stream_RequestGeneric(v15);
      v27 = DVARINT_stream_treeSpanBoost;
      if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      Stream_BoostGeneric(v15, v27->current.integer);
    }
    Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
  }
}

/*
==============
RB_Stream_DebugDrawXModelStreamTreeGridCell
==============
*/
void RB_Stream_DebugDrawXModelStreamTreeGridCell(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const int drawMode, const StreamTreeGrid *xmodelStreamTreeGrid, const XModelStreamTreeGridCell *xmodelStreamTreeGridCell)
{
  float v9; 
  GfxCmdBufContext v11; 
  float HimipDistanceFactor; 
  const dvar_t *v15; 
  int integer; 
  XModelStreamTreeNode *nodes; 
  bool v18; 
  const dvar_t *v19; 
  int v20; 
  XModelStreamTreeContext v21; 
  GfxCmdBufContext v22; 

  if ( xmodelStreamTreeGridCell->nodes )
  {
    v9 = viewInfo->viewParmsSet.frames[2].viewParms.camera.origin.v[0];
    HIDWORD(v22.state) = 0;
    v11 = v22;
    *(float *)&v11.source = v9;
    _XMM3 = v11;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rdx+404h], 10h
      vinsertps xmm3, xmm3, dword ptr [rdx+408h], 20h ; ' '
    }
    v21.viewPos.v.m128_f32[0] = *(float *)&_XMM3.source;
    __asm
    {
      vextractps [rsp+0F8h+var_B4], xmm3, 1
      vextractps [rsp+0F8h+var_B0], xmm3, 2
      vextractps [rsp+0F8h+var_AC], xmm3, 3
    }
    v22 = _XMM3;
    v21.zoomFactor = FLOAT_1_0;
    v21.cosFovLimit = 0.0;
    v21.distanceScale = FLOAT_1_0;
    HimipDistanceFactor = GetHimipDistanceFactor();
    v15 = DVARINT_stream_treeSpanBoost;
    v21.streamerMaxDistToRead = HimipDistanceFactor;
    if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    integer = v15->current.integer;
    nodes = xmodelStreamTreeGridCell->nodes;
    v21.gridCell = xmodelStreamTreeGridCell;
    v18 = drawMode > 1;
    v19 = DCONST_DVARINT_stream_treeDrawMaxDepth;
    v21.spanBoost = integer;
    v21.streamTreeGrid = xmodelStreamTreeGrid;
    v21.transientVisibility = NULL;
    if ( !DCONST_DVARINT_stream_treeDrawMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDrawMaxDepth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = v19->current.integer;
    v22 = *gfxContext;
    RB_Stream_DebugDrawXModelStreamTreeRecursive(&v22, nodes, &v21, 0, v18, v20, &viewInfo->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
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
  int v10; 
  const XModelStreamTreeContext *v11; 
  unsigned __int16 v12; 
  const XModelStreamTreeGridCell *gridCell; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  const XModelInstance *v17; 
  const XModel *v18; 
  __m128 v20; 
  GfxCmdBufContext v24; 
  __m128 v29; 
  __m128 v; 
  const vec4_t *v35; 
  __int64 v36; 
  __int64 v37; 
  unsigned __int16 v38; 
  unsigned __int16 v39; 
  GfxCmdBufContext v41; 
  XModelStreamTreeContext *contexta; 
  const StreamTreeGrid *streamTreeGrid; 
  float4 v44; 
  float4 v45; 
  float4 v46; 
  float4 v47; 
  ExtentBounds lodExtentBounds; 
  __m128 v49; 
  GfxCmdBufContext v50; 

  p_bounds = &node->bounds;
  contexta = (XModelStreamTreeContext *)context;
  v10 = curDepth;
  v11 = context;
  if ( Stream_DistanceSqToAABB(context, &node->bounds) <= 0.0 )
  {
    streamTreeGrid = v11->streamTreeGrid;
    v38 = node->childNodes[0];
    v12 = node->childNodes[1];
    gridCell = v11->gridCell;
    v39 = v12;
    if ( drawVolumes )
    {
      v14 = 0;
      if ( node->instanceCount )
      {
        do
        {
          v15 = v14 + node->instanceStartIndex;
          if ( (unsigned int)v15 >= gridCell->instanceIndexCount )
          {
            LODWORD(v37) = gridCell->instanceIndexCount;
            LODWORD(v36) = v14 + node->instanceStartIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2178, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndexIndex ) < (unsigned)( gridCell.instanceIndexCount )", "instanceIndexIndex doesn't index gridCell.instanceIndexCount\n\t%i not in [0, %i)", v36, v37) )
              __debugbreak();
          }
          v16 = gridCell->instanceIndices[v15];
          if ( v16 >= gridCell->instanceCount )
          {
            LODWORD(v37) = gridCell->instanceCount;
            LODWORD(v36) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2181, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( gridCell.instanceCount )", "instanceIndex doesn't index gridCell.instanceCount\n\t%i not in [0, %i)", v36, v37) )
              __debugbreak();
          }
          v17 = &gridCell->instances[(unsigned __int16)v16];
          v18 = streamTreeGrid->xmodels[v17->xmodelIndex];
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2186, ASSERT_TYPE_ASSERT, "(xmodel != nullptr)", (const char *)&queryFormat, "xmodel != nullptr") )
            __debugbreak();
          ComputeInstanceLodExtentBounds(&lodExtentBounds, 0i64, v17, v18, contexta);
          v11 = contexta;
          v49.m128_i32[3] = 0;
          v20 = v49;
          v20.m128_f32[0] = lodExtentBounds.maxs.v[0];
          _XMM5 = v20;
          __asm
          {
            vinsertps xmm5, xmm5, dword ptr [rbp+80h+lodExtentBounds.maxs+4], 80h+var_70
            vinsertps xmm5, xmm5, dword ptr [rbp+80h+lodExtentBounds.maxs+8], 80h+var_60
          }
          HIDWORD(v50.state) = 0;
          v24 = v50;
          *(float *)&v24.source = lodExtentBounds.mins.v[0];
          _XMM4 = v24;
          __asm
          {
            vminps  xmm0, xmm5, xmmword ptr [r15]
            vinsertps xmm4, xmm4, dword ptr [rbp+80h+lodExtentBounds.mins+4], 80h+var_70
            vinsertps xmm4, xmm4, dword ptr [rbp+80h+lodExtentBounds.mins+8], 80h+var_60
            vmaxps  xmm3, xmm0, xmm4
          }
          v29 = _mm128_sub_ps(_XMM3, contexta->viewPos.v);
          _XMM2 = _mm128_mul_ps(v29, v29);
          __asm
          {
            vinsertps xmm0, xmm2, xmm2, 8
            vhaddps xmm1, xmm0, xmm0
          }
          v = contexta->viewDir.v;
          __asm { vhaddps xmm2, xmm1, xmm1 }
          v45.v = (__m128)contexta->viewPos;
          v49 = _XMM5;
          v50 = _XMM4;
          v44.v = v;
          v46.v = _XMM3;
          v47.v = _XMM5;
          v41 = _XMM4;
          if ( Stream_CalculateDistanceSq_ApplyZoomFactor((const float4 *)&v41, &v47, *(float *)&_XMM2, &v46, &v45, &v44, 1.0, 1.0, 0.0) < 160000.0 )
          {
            v41 = *gfxContext;
            RB_Stream_StreamTreeDebugBox(&v41, &lodExtentBounds.mins, &lodExtentBounds.maxs, &colorRed, viewProjectionMatrix);
          }
          ++v14;
        }
        while ( v14 < node->instanceCount );
        v12 = v39;
        p_bounds = &node->bounds;
      }
      v10 = curDepth;
    }
    if ( v38 != 0xFFFF || (v35 = &colorBlue, v12 != 0xFFFF) )
      v35 = &colorGreen;
    v41 = *gfxContext;
    RB_Stream_StreamTreeDebugBox(&v41, &p_bounds->mins, &node->bounds.maxs, v35, viewProjectionMatrix);
    if ( v10 < maxDepth )
    {
      if ( v38 != 0xFFFF )
      {
        v41 = *gfxContext;
        RB_Stream_DebugDrawXModelStreamTreeRecursive(&v41, &gridCell->nodes[v38], v11, v10 + 1, drawVolumes, maxDepth, viewProjectionMatrix);
      }
      if ( v39 != 0xFFFF )
      {
        v41 = *gfxContext;
        RB_Stream_DebugDrawXModelStreamTreeRecursive(&v41, &gridCell->nodes[v39], v11, v10 + 1, drawVolumes, maxDepth, viewProjectionMatrix);
      }
    }
  }
}

/*
==============
RB_Stream_StreamTreeDebugBox
==============
*/
void RB_Stream_StreamTreeDebugBox(GfxCmdBufContext *gfxContext, const vec3_t *p0, const vec3_t *p1, const vec4_t *color)
{
  double v4; 
  __int128 v5; 
  float v6; 
  const std::pair<int,int> *v7; 
  float v8; 
  float *v9; 
  float v10; 
  float v11; 
  __int128 v13; 
  float v15; 
  __int128 v18; 
  __int128 v21; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  _QWORD v26[3]; 
  double v27; 
  float v28; 
  __int64 v29; 
  float v30; 
  float v31; 
  float v32; 
  int v33[22]; 

  v4 = *(double *)p0->v;
  v5 = *(unsigned __int64 *)p1->v;
  v6 = p0->v[2];
  v7 = iEdgePairs_9;
  v8 = (float)(*(float *)&v5 + COERCE_FLOAT(*(_QWORD *)p0->v)) * 0.5;
  v29 = *(_QWORD *)p1->v;
  v28 = v6;
  v9 = &s_debugLineVerts[0].xyz.v[2];
  v10 = p1->v[2];
  v27 = v4;
  v11 = (float)(*((float *)&v29 + 1) + *((float *)&v27 + 1)) * 0.5;
  v13 = v5;
  *(float *)&v13 = *(float *)&v5 - v8;
  _XMM2 = v13;
  v30 = v10;
  v15 = (float)(v10 + v28) * 0.5;
  __asm { vmaxss  xmm7, xmm2, xmm1 }
  v18 = LODWORD(v10);
  *(float *)&v18 = v10 - v15;
  _XMM2 = v18;
  __asm { vmaxss  xmm4, xmm2, xmm1 }
  v21 = HIDWORD(v29);
  *(float *)&v21 = *((float *)&v29 + 1) - v11;
  _XMM3 = v21;
  __asm { vmaxss  xmm3, xmm3, xmm0 }
  *(float *)v33 = v15 - *(float *)&_XMM4;
  *(float *)&v33[3] = v15 - *(float *)&_XMM4;
  *(float *)&v33[6] = v15 - *(float *)&_XMM4;
  *(float *)&v33[9] = v15 - *(float *)&_XMM4;
  *(float *)&v33[12] = *(float *)&_XMM4 + v15;
  *(float *)&v33[15] = *(float *)&_XMM4 + v15;
  *(float *)&v33[18] = *(float *)&_XMM4 + v15;
  *(float *)&v33[21] = *(float *)&_XMM4 + v15;
  v31 = v8 - *(float *)&_XMM7;
  v32 = v11 - *(float *)&_XMM3;
  *(float *)&v33[1] = *(float *)&_XMM7 + v8;
  *(float *)&v33[2] = v11 - *(float *)&_XMM3;
  *(float *)&v33[4] = v8 - *(float *)&_XMM7;
  *(float *)&v33[5] = *(float *)&_XMM3 + v11;
  *(float *)&v33[7] = *(float *)&_XMM7 + v8;
  *(float *)&v33[8] = *(float *)&_XMM3 + v11;
  *(float *)&v33[10] = v8 - *(float *)&_XMM7;
  *(float *)&v33[11] = v11 - *(float *)&_XMM3;
  *(float *)&v33[13] = *(float *)&_XMM7 + v8;
  *(float *)&v33[14] = v11 - *(float *)&_XMM3;
  *(float *)&v33[16] = v8 - *(float *)&_XMM7;
  *(float *)&v33[17] = *(float *)&_XMM3 + v11;
  *(float *)&v33[19] = *(float *)&_XMM7 + v8;
  *(float *)&v33[20] = *(float *)&_XMM3 + v11;
  v26[1] = gfxContext;
  v23 = 0;
  do
  {
    v24 = 3i64 * v7->second;
    v25 = 3i64 * v7->first;
    Byte4PackVertexColor(color, s_debugLineVerts[v23].color);
    Byte4PackVertexColor(color, s_debugLineVerts[v23 + 1].color);
    v23 += 2;
    *(v9 - 2) = *(&v31 + v25);
    v9 += 8;
    ++v7;
    *(v9 - 9) = *(float *)&v33[v25 - 1];
    *((_DWORD *)v9 - 8) = v33[v25];
    *(v9 - 6) = *(&v31 + v24);
    *(v9 - 5) = *(float *)&v33[v24 - 1];
    *((_DWORD *)v9 - 4) = v33[v24];
  }
  while ( v7 != (const std::pair<int,int> *)&unk_147F85BA0 );
  *(_OWORD *)&v26[1] = *(_OWORD *)v26[1];
  RB_DrawLines3D((GfxCmdBufContext *)&v26[1], 12, 1, s_debugLineVerts, 1);
}

/*
==============
RB_Stream_TreeDebugDraw
==============
*/
void RB_Stream_TreeDebugDraw(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufContext v4; 
  const dvar_t *v5; 
  int integer; 
  StreamTree *p_streamTree; 
  const dvar_t *v8; 
  int v9; 
  int v10; 
  float v11; 
  GfxCmdBufContext v13; 
  const StreamTreeNode *nodes; 
  MaterialStreamTreeContext v17; 
  GfxCmdBufContext v18; 

  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2131, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( rgp.world->materialStreamTreeGrid.cellKeys )
  {
    v18 = *gfxContext;
    RB_Stream_ZoneStreamTreeDebugDraw(&v18, viewInfo);
  }
  else
  {
    v4 = *gfxContext;
    v5 = DCONST_DVARINT_stream_treeDraw;
    if ( !DCONST_DVARINT_stream_treeDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    integer = v5->current.integer;
    if ( integer )
    {
      if ( rgp.world )
      {
        p_streamTree = &rgp.world->streamTree;
        if ( rgp.world->streamTree.nodeCount )
        {
          v8 = DCONST_DVARINT_stream_treeDrawMaxDepth;
          v9 = -1;
          if ( integer > 1 )
            v9 = integer;
          if ( !DCONST_DVARINT_stream_treeDrawMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDrawMaxDepth") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          v10 = v8->current.integer;
          v11 = viewInfo->viewParmsSet.frames[2].viewParms.camera.origin.v[0];
          HIDWORD(v18.state) = 0;
          v13 = v18;
          *(float *)&v13.source = v11;
          _XMM3 = v13;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rsi+404h], 10h
            vinsertps xmm3, xmm3, dword ptr [rsi+408h], 20h ; ' '
          }
          v17.viewPos.v.m128_f32[0] = *(float *)&_XMM3.source;
          __asm
          {
            vextractps [rsp+0E8h+var_A4], xmm3, 1
            vextractps [rsp+0E8h+var_A0], xmm3, 2
            vextractps [rsp+0E8h+var_9C], xmm3, 3
          }
          v18 = _XMM3;
          v17.streamerMaxDistToRead = GetHimipDistanceFactor();
          v17.distanceScale = FLOAT_1_0;
          v17.streamTree = p_streamTree;
          R_Set3D(v4.source);
          nodes = p_streamTree->nodes;
          v18 = v4;
          RB_Stream_DebugDrawStreamTreeRecursive(&v18, nodes, &v17, 0, v9, v10, &viewInfo->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
          v18 = v4;
          RB_EndSurfaceIfNeeded(&v18);
        }
      }
    }
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
  GfxCmdBufContext v7; 

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
        R_Set3D(gfxContext->source);
        v7 = *gfxContext;
        RB_Stream_DebugDrawXModelStreamTreeGrid(&v7, viewInfo, integer, p_xmodelStreamTreeGrid);
        v7 = *gfxContext;
        RB_EndSurfaceIfNeeded(&v7);
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
  const dvar_t *v4; 
  int integer; 
  StreamTreeGrid *p_materialStreamTreeGrid; 
  StreamKey **cellKeys; 
  int v8; 
  const dvar_t *v9; 
  unsigned __int16 i; 
  StreamKey *v11; 
  const MaterialStreamTreeGridCell *data; 
  float v13; 
  __int128 v15; 
  float v18; 
  __m128 v20; 
  unsigned int v23; 
  int v24; 
  _QWORD v25[3]; 
  bitarray_base<bitarray<1536> > *p_transientVisibility; 
  StreamKey **v27; 
  __int64 v28; 
  MaterialStreamTreeCellContext v29; 
  __int128 v30; 
  __m128 v; 

  v28 = -2i64;
  v4 = DCONST_DVARINT_stream_treeDraw;
  if ( !DCONST_DVARINT_stream_treeDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer )
  {
    if ( rgp.world )
    {
      p_materialStreamTreeGrid = &rgp.world->materialStreamTreeGrid;
      cellKeys = rgp.world->materialStreamTreeGrid.cellKeys;
      v27 = cellKeys;
      if ( cellKeys )
      {
        Sys_EnterCriticalSection(CRITSECT_STREAM_TREE_DRAW);
        p_transientVisibility = &streamFrontendGlob->transientVisibility;
        v8 = -1;
        if ( integer > 1 )
          v8 = integer;
        v9 = DCONST_DVARINT_stream_treeDrawMaxDepth;
        if ( !DCONST_DVARINT_stream_treeDrawMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeDrawMaxDepth") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        v24 = v9->current.integer;
        R_Set3D(gfxContext->source);
        for ( i = 0; i < p_materialStreamTreeGrid->rowCount; ++i )
        {
          if ( bitarray_base<bitarray<1536>>::testBit(p_transientVisibility, i) )
          {
            v11 = cellKeys[i];
            if ( v11 )
            {
              if ( Stream_GenericIsSafeToUse(cellKeys[i]) )
              {
                if ( (v11->flags & 2) != 0 )
                  data = (const MaterialStreamTreeGridCell *)v11->data.dataHandle.data;
                else
                  data = (const MaterialStreamTreeGridCell *)Stream_AddressSpace_ResolveHandle(&v11->data.dataHandle);
                if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 2092, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
                  __debugbreak();
                v13 = viewInfo->viewParmsSet.frames[2].viewParms.camera.origin.v[0];
                HIDWORD(v30) = 0;
                v15 = v30;
                *(float *)&v15 = v13;
                _XMM3 = v15;
                __asm
                {
                  vinsertps xmm3, xmm3, dword ptr [r14+404h], 10h
                  vinsertps xmm3, xmm3, dword ptr [r14+408h], 20h ; ' '
                }
                v30 = _XMM3;
                v29.viewPos.v.m128_f32[0] = *(float *)&_XMM3;
                __asm
                {
                  vextractps [rbp+50h+var_CC], xmm3, 1
                  vextractps [rbp+50h+var_C8], xmm3, 2
                  vextractps [rbp+50h+var_C4], xmm3, 3
                }
                v18 = viewInfo->viewParmsSet.frames[2].viewParms.camera.axis.m[1].v[0];
                v.m128_i32[3] = 0;
                v20 = v;
                v20.m128_f32[0] = v18;
                _XMM3 = v20;
                __asm
                {
                  vinsertps xmm3, xmm3, dword ptr [r14+41Ch], 10h
                  vinsertps xmm3, xmm3, dword ptr [r14+420h], 20h ; ' '
                }
                v = _XMM3.v;
                v29.viewDir = (float4)_XMM3.v;
                v29.zoomFactor = FLOAT_1_0;
                v29.cosFovLimit = 0.0;
                v29.distanceScale = FLOAT_1_0;
                v29.streamerMaxDistToRead = GetHimipDistanceFactor();
                v29.spanBoost = Dvar_GetInt_Internal_DebugName(DVARINT_stream_treeSpanBoost, "stream_treeSpanBoost");
                v29.gridCell = data;
                v29.streamTreeGrid = p_materialStreamTreeGrid;
                MaterialStreamTreeGridCell::DeserializeBegin(data);
                if ( data->nodeCount )
                {
                  *(GfxCmdBufContext *)&v25[1] = *gfxContext;
                  RB_Stream_DebugDrawStreamTreeZoneRecursive((GfxCmdBufContext *)&v25[1], data->nodes, &v29, 0, v8, v24, &viewInfo->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
                }
                *(GfxCmdBufContext *)&v25[1] = *gfxContext;
                v23 = RB_Stream_DebugDrawMaterials((GfxCmdBufContext *)&v25[1], &v29, 0, data->largeMaterialInstanceGroupCount, 0, v8, &viewInfo->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
                *(GfxCmdBufContext *)&v25[1] = *gfxContext;
                RB_Stream_DebugDrawImages((GfxCmdBufContext *)&v25[1], &v29, data->largeMaterialInstanceGroupCount, data->largeImageInstanceGroupCount, v23, v8, &viewInfo->viewParmsSet.frames[2].viewParms.viewProjectionMatrix);
                MaterialStreamTreeGridCell::DeserializeEnd(data);
                cellKeys = v27;
              }
            }
          }
        }
        *(GfxCmdBufContext *)&v25[1] = *gfxContext;
        RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v25[1]);
        Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
      }
    }
  }
}

/*
==============
Stream_DistanceSqToAABB
==============
*/
float Stream_DistanceSqToAABB(const StreamTreeContext *context, const ExtentBounds *aabb)
{
  float v2; 
  float cosFovLimit; 
  float zoomFactor; 
  __m128 v; 
  float v7; 
  __m128 v11; 
  __m128 v16; 
  float4 v22; 
  float4 v23; 
  float4 v24; 
  float4 v25; 
  float4 v26; 

  v2 = aabb->maxs.v[0];
  cosFovLimit = context->cosFovLimit;
  zoomFactor = context->zoomFactor;
  v26.v.m128_i32[3] = 0;
  v = v26.v;
  v.m128_f32[0] = v2;
  _XMM7 = v;
  v7 = aabb->mins.v[0];
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [rdx+10h], 10h
    vinsertps xmm7, xmm7, dword ptr [rdx+14h], 20h ; ' '
  }
  v26.v = _XMM7;
  v26.v.m128_i32[3] = 0;
  v11 = v26.v;
  v11.m128_f32[0] = v7;
  _XMM6 = v11;
  __asm
  {
    vminps  xmm0, xmm7, xmmword ptr [rcx]
    vinsertps xmm6, xmm6, dword ptr [rdx+4], 10h
    vinsertps xmm6, xmm6, dword ptr [rdx+8], 20h ; ' '
    vmaxps  xmm3, xmm0, xmm6
  }
  v16 = _mm128_sub_ps(_XMM3, context->viewPos.v);
  _XMM2 = _mm128_mul_ps(v16, v16);
  __asm
  {
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
  }
  v26.v = (__m128)context->viewDir;
  __asm { vhaddps xmm2, xmm1, xmm1 }
  v22.v = (__m128)context->viewPos;
  v23.v = _XMM3;
  v24.v = _XMM7;
  v25.v = _XMM6;
  return Stream_CalculateDistanceSq_ApplyZoomFactor(&v25, &v24, *(float *)&_XMM2, &v23, &v22, &v26, zoomFactor, cosFovLimit, 1.0);
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
  float4 v8; 
  float4 v9; 
  float4 v10; 
  float4 v11; 
  float4 v12; 
  float4 v13; 
  float4 v14; 
  float4 v15; 
  float4 v16; 
  float4 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  const MaterialStreamTreeGridCell *gridCell; 
  unsigned int v23; 
  MatImgInstanceGroup *instanceGroups; 
  __int64 v25; 
  int instanceCount; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int MaterialIndex; 
  StreamFrontendGlob *v31; 
  __int64 v32; 
  unsigned int mValue; 
  float v34; 
  __int64 v35; 
  MatImgInstance *instances; 
  __m128 v42; 
  __m128 v44; 
  __m128 v52; 
  __int128 v59; 
  float v61; 
  unsigned int v62; 
  StreamFrontendGlob *v63; 
  __int64 v64; 
  MatImgInstanceGroup *v65; 
  bool v66; 
  unsigned int v67; 
  unsigned int GfxImageIndex; 
  StreamFrontendGlob *v69; 
  __int64 v70; 
  unsigned int v71; 
  float v72; 
  float himipInvSqRadii; 
  float distanceScale; 
  MatImgInstance *v76; 
  __m128 v79; 
  __m128 v81; 
  __m128 v89; 
  float v95; 
  unsigned int v96; 
  const dvar_t *v97; 
  StreamFrontendGlob *v98; 
  __int64 v99; 
  __int64 v100; 
  float zoomFactor; 
  float v102; 
  float cosFovLimit; 
  float v104; 
  unsigned int v105; 
  int v106; 
  unsigned int v108; 
  __int16 v110; 
  const MaterialStreamTreeGridCell *v112; 
  __int64 v113; 
  __int64 v114; 
  __int64 v116; 
  const StreamTreeGrid *streamTreeGrid; 
  float4 v118; 
  float4 v119; 
  float4 v120; 
  float4 v121; 
  float4 v122[15]; 

  v18 = totalInstanceCount;
  v19 = imageGroupCount;
  v20 = instanceGroupStartIndex;
  v21 = materialGroupCount;
  if ( totalInstanceCount )
  {
    v66 = context->streamTreeGrid == NULL;
    v122[6] = (float4)v13.v;
    v122[5] = (float4)v14.v;
    v122[4] = (float4)v15.v;
    v122[3] = (float4)v16.v;
    v122[2] = (float4)v17.v;
    if ( v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 585, ASSERT_TYPE_ASSERT, "(context.streamTreeGrid != nullptr)", (const char *)&queryFormat, "context.streamTreeGrid != nullptr") )
      __debugbreak();
    streamTreeGrid = context->streamTreeGrid;
    if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 588, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
      __debugbreak();
    gridCell = context->gridCell;
    v23 = 0;
    v122[11] = (float4)v8.v;
    v122[10] = (float4)v9.v;
    v122[9] = (float4)v10.v;
    v122[8] = (float4)v11.v;
    v112 = gridCell;
    if ( (_DWORD)v21 )
    {
      v105 = v20;
      v113 = v21;
      v122[7] = (float4)v12.v;
      do
      {
        if ( v20 >= gridCell->instanceGroupCount )
        {
          LODWORD(v100) = gridCell->instanceGroupCount;
          LODWORD(v99) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 598, ASSERT_TYPE_ASSERT, "(unsigned)( mtlInstanceGroupIndex ) < (unsigned)( gridCell.instanceGroupCount )", "mtlInstanceGroupIndex doesn't index gridCell.instanceGroupCount\n\t%i not in [0, %i)", v99, v100) )
            __debugbreak();
        }
        instanceGroups = gridCell->instanceGroups;
        v25 = v20;
        v116 = v20;
        instanceCount = instanceGroups[v20].instanceCount;
        v110 = (unsigned __int16)instanceCount >> 15;
        v27 = instanceCount & 0xFFFF7FFF;
        if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 605, ASSERT_TYPE_ASSERT, "(instanceCount > 0)", (const char *)&queryFormat, "instanceCount > 0") )
          __debugbreak();
        if ( instanceGroups[v25].assetIndex >= streamTreeGrid->materialCount )
        {
          LODWORD(v100) = streamTreeGrid->materialCount;
          LODWORD(v99) = instanceGroups[v25].assetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 606, ASSERT_TYPE_ASSERT, "(unsigned)( mtlInstanceGroup.assetIndex ) < (unsigned)( streamTreeGrid.materialCount )", "mtlInstanceGroup.assetIndex doesn't index streamTreeGrid.materialCount\n\t%i not in [0, %i)", v99, v100) )
            __debugbreak();
        }
        v28 = v27 + v23;
        v29 = v18;
        if ( v18 > v28 )
          v29 = v28;
        MaterialIndex = DB_GetMaterialIndex(streamTreeGrid->materials[instanceGroups[v25].assetIndex]);
        v31 = streamFrontendGlob;
        v32 = MaterialIndex;
        if ( MaterialIndex >= 0xB400 )
        {
          LODWORD(v100) = 46080;
          LODWORD(v99) = MaterialIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v99, v100) )
            __debugbreak();
        }
        mValue = v31->materialDistance.mDistances[(int)v32].mValue;
        if ( mValue == -1 )
          v34 = FLOAT_3_4027977e38;
        else
          LODWORD(v34) = mValue << 7;
        if ( nodeStreamDistance < v34 )
        {
          v35 = v32;
          _XMM10 = LODWORD(s_minDistSqForMaterials[v32]);
          __asm { vmaxss  xmm0, xmm10, xmm15 }
          if ( (float)((float)((float)(*(float *)&_XMM0 + 1.0) * instanceGroups[v25].himipInvSqRadii) * context->distanceScale) < v34 )
          {
            _XMM8 = LODWORD(FLOAT_3_4028235e38);
            if ( v23 < v29 )
            {
              do
              {
                instances = v112->instances;
                _XMM7 = _xmm;
                _XMM6 = _xmm;
                v42 = (__m128)*(unsigned __int64 *)instances[v23 + instanceStartIndex].bounds.mins.v;
                _mm_shuffle_ps(v42, v42, 85);
                __asm { vinsertps xmm7, xmm7, xmm1, 0 }
                v44 = (__m128)*(unsigned __int64 *)instances[v23 + instanceStartIndex].bounds.maxs.v;
                __asm
                {
                  vinsertps xmm7, xmm7, xmm0, 10h
                  vinsertps xmm6, xmm6, xmm1, 0
                }
                _mm_shuffle_ps(v44, v44, 85);
                __asm
                {
                  vinsertps xmm7, xmm7, [rbp+100h+var_158], 100h+var_E0
                  vinsertps xmm6, xmm6, xmm0, 10h
                  vinsertps xmm6, xmm6, [rbp+100h+var_148], 100h+var_E0
                  vminps  xmm0, xmm6, xmmword ptr [r13+0]
                  vmaxps  xmm3, xmm0, xmm7
                }
                v52 = _mm128_sub_ps(_XMM3, context->viewPos.v);
                _XMM2 = _mm128_mul_ps(v52, v52);
                __asm
                {
                  vinsertps xmm0, xmm2, xmm2, 8
                  vhaddps xmm1, xmm0, xmm0
                }
                _XMM0 = context->viewDir.v;
                cosFovLimit = context->cosFovLimit;
                zoomFactor = context->zoomFactor;
                __asm { vhaddps xmm2, xmm1, xmm1 }
                v119.v = (__m128)context->viewPos;
                v118.v = _XMM0;
                v120.v = _XMM3;
                v121.v = _XMM6;
                v122[0] = (float4)_XMM7.v;
                _XMM0.m128_f32[0] = Stream_CalculateDistanceSq_ApplyZoomFactor(v122, &v121, *(float *)&_XMM2, &v120, &v119, &v118, zoomFactor, cosFovLimit, 1.0);
                ++v23;
                __asm { vminss  xmm8, xmm0, xmm8 }
              }
              while ( v23 < v29 );
              v25 = v116;
              v35 = v32;
            }
            if ( (_BYTE)v110 )
            {
              if ( context->localClientIndex >= (unsigned int)LOCAL_CLIENT_COUNT )
              {
                LODWORD(v100) = 2;
                LODWORD(v99) = context->localClientIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 643, ASSERT_TYPE_ASSERT, "(unsigned)( context.localClientIndex ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->minDistanceToClutter ) ) + 0 ) )", "context.localClientIndex doesn't index streamFrontendGlob->minDistanceToClutter\n\t%i not in [0, %i)", v99, v100) )
                  __debugbreak();
              }
              v59 = LODWORD(streamFrontendGlob->minDistanceToClutter[context->localClientIndex]);
              *(float *)&v59 = *(float *)&v59 * *(float *)&v59;
              _XMM1 = v59;
              __asm { vmaxss  xmm8, xmm1, xmm8 }
            }
            __asm { vmaxss  xmm0, xmm8, xmm10 }
            v61 = (float)((float)(*(float *)&_XMM0 + 1.0) * instanceGroups[v25].himipInvSqRadii) * context->distanceScale;
            if ( v61 < v34 )
            {
              if ( (LODWORD(v61) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
                __debugbreak();
              v62 = LODWORD(v61) >> 7;
              if ( (unsigned int)v32 >= 0xB400 )
              {
                LODWORD(v100) = 46080;
                LODWORD(v99) = v32;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 435, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ((( 43 * 1024 ) + 1024 + MATERIAL_POOL_SIZE_PRELOAD_PROCESS) + 1024) )", "materialIndex doesn't index MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v99, v100) )
                  __debugbreak();
              }
              v63 = streamFrontendGlob;
              if ( (unsigned int)v32 >= 0xB400 )
              {
                LODWORD(v100) = 46080;
                LODWORD(v99) = v32;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v99, v100) )
                  __debugbreak();
              }
              if ( v62 < v63->materialDistance.mDistances[v35].mValue )
                v63->materialDistance.mDistances[v35].mValue = v62;
              Com_BitSetAssert(v63->materialDistance.mValueSet, v32, 5760);
            }
          }
          else
          {
            v23 = v29;
          }
        }
        else
        {
          v23 = v29;
        }
        gridCell = v112;
        v18 = totalInstanceCount;
        v20 = v105 + 1;
        v66 = v113-- == 1;
        ++v105;
      }
      while ( !v66 );
      LODWORD(v21) = materialGroupCount;
      v20 = instanceGroupStartIndex;
      v19 = imageGroupCount;
    }
    v64 = (unsigned int)v21 + v20;
    v106 = v64;
    if ( v19 )
    {
      v114 = v19;
      do
      {
        if ( (unsigned int)v64 >= gridCell->instanceGroupCount )
        {
          LODWORD(v100) = gridCell->instanceGroupCount;
          LODWORD(v99) = v64;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 659, ASSERT_TYPE_ASSERT, "(unsigned)( imgInstanceGroupIndex ) < (unsigned)( gridCell.instanceGroupCount )", "imgInstanceGroupIndex doesn't index gridCell.instanceGroupCount\n\t%i not in [0, %i)", v99, v100) )
            __debugbreak();
        }
        v65 = gridCell->instanceGroups;
        v66 = v65[v64].instanceCount == 0;
        if ( (v65[v64].instanceCount & 0x8000u) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 663, ASSERT_TYPE_ASSERT, "(( imgInstanceGroup.instanceCount & STREAM_MATERIAL_TREE_CLUTTER_BIT ) == 0)", (const char *)&queryFormat, "( imgInstanceGroup.instanceCount & STREAM_MATERIAL_TREE_CLUTTER_BIT ) == 0") )
            __debugbreak();
          v66 = v65[v64].instanceCount == 0;
        }
        if ( v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 664, ASSERT_TYPE_ASSERT, "(imgInstanceGroup.instanceCount > 0)", (const char *)&queryFormat, "imgInstanceGroup.instanceCount > 0") )
          __debugbreak();
        if ( v65[v64].assetIndex >= streamTreeGrid->imageCount )
        {
          LODWORD(v100) = streamTreeGrid->imageCount;
          LODWORD(v99) = v65[v64].assetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 665, ASSERT_TYPE_ASSERT, "(unsigned)( imgInstanceGroup.assetIndex ) < (unsigned)( streamTreeGrid.imageCount )", "imgInstanceGroup.assetIndex doesn't index streamTreeGrid.imageCount\n\t%i not in [0, %i)", v99, v100) )
            __debugbreak();
        }
        v67 = v18;
        if ( v18 > v23 + v65[v64].instanceCount )
          v67 = v23 + v65[v64].instanceCount;
        GfxImageIndex = DB_GetGfxImageIndex(streamTreeGrid->images[v65[v64].assetIndex]);
        v69 = streamFrontendGlob;
        v70 = (int)GfxImageIndex;
        v108 = GfxImageIndex;
        if ( GfxImageIndex >= 0x14000 )
        {
          LODWORD(v100) = 81920;
          LODWORD(v99) = GfxImageIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v99, v100) )
            __debugbreak();
        }
        v71 = v69->imageDistance.mDistances[v70].mValue;
        if ( v71 == -1 )
          v72 = FLOAT_3_4027977e38;
        else
          LODWORD(v72) = v71 << 7;
        if ( nodeStreamDistance < v72 )
        {
          himipInvSqRadii = v65[v64].himipInvSqRadii;
          distanceScale = context->distanceScale;
          if ( (float)((float)((float)(nodeDistSq + 1.0) * himipInvSqRadii) * distanceScale) < v72 )
          {
            *(float *)&_XMM9 = FLOAT_3_4028235e38;
            if ( v23 < v67 )
            {
              do
              {
                v76 = v112->instances;
                _XMM7 = _xmm;
                _XMM6 = _xmm;
                v79 = (__m128)*(unsigned __int64 *)v76[v23 + instanceStartIndex].bounds.mins.v;
                _mm_shuffle_ps(v79, v79, 85);
                __asm { vinsertps xmm7, xmm7, xmm1, 0 }
                v81 = (__m128)*(unsigned __int64 *)v76[v23 + instanceStartIndex].bounds.maxs.v;
                __asm
                {
                  vinsertps xmm7, xmm7, xmm0, 10h
                  vinsertps xmm6, xmm6, xmm1, 0
                }
                _mm_shuffle_ps(v81, v81, 85);
                __asm
                {
                  vinsertps xmm7, xmm7, [rbp+100h+var_148], 100h+var_E0
                  vinsertps xmm6, xmm6, xmm0, 10h
                  vinsertps xmm6, xmm6, [rbp+100h+var_158], 100h+var_E0
                  vminps  xmm0, xmm6, xmmword ptr [r13+0]
                  vmaxps  xmm3, xmm0, xmm7
                }
                v89 = _mm128_sub_ps(_XMM3, context->viewPos.v);
                _XMM2 = _mm128_mul_ps(v89, v89);
                __asm
                {
                  vinsertps xmm0, xmm2, xmm2, 8
                  vhaddps xmm1, xmm0, xmm0
                }
                _XMM0.v = (__m128)context->viewDir;
                v104 = context->cosFovLimit;
                v102 = context->zoomFactor;
                __asm { vhaddps xmm2, xmm1, xmm1 }
                v121.v = (__m128)context->viewPos;
                v122[0] = (float4)_XMM0.v;
                v120.v = _XMM3;
                v119.v = _XMM6;
                v118.v = _XMM7;
                _XMM0.v.m128_f32[0] = Stream_CalculateDistanceSq_ApplyZoomFactor(&v118, &v119, *(float *)&_XMM2, &v120, &v121, v122, v102, v104, 1.0);
                ++v23;
                __asm { vminss  xmm9, xmm0, xmm9 }
              }
              while ( v23 < v67 );
              distanceScale = context->distanceScale;
              LODWORD(v70) = v108;
              himipInvSqRadii = v65[v64].himipInvSqRadii;
            }
            v95 = (float)((float)(*(float *)&_XMM9 + 1.0) * himipInvSqRadii) * distanceScale;
            if ( v95 < v72 )
            {
              if ( (LODWORD(v95) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
                __debugbreak();
              v96 = LODWORD(v95) >> 7;
              if ( (unsigned int)v70 >= 0x14000 )
              {
                LODWORD(v100) = 81920;
                LODWORD(v99) = v70;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 421, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "imageIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v99, v100) )
                  __debugbreak();
              }
              v97 = DCONST_DVARBOOL_stream_pedanticAddImageChecks;
              if ( !DCONST_DVARBOOL_stream_pedanticAddImageChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_pedanticAddImageChecks") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v97);
              if ( v97->current.enabled && (DB_GetGfxImageAtIndex(v70)->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_internal.h", 426, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
                __debugbreak();
              v98 = streamFrontendGlob;
              if ( (unsigned int)v70 >= 0x14000 )
              {
                LODWORD(v100) = 81920;
                LODWORD(v99) = v70;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 366, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v99, v100) )
                  __debugbreak();
              }
              if ( v96 < v98->imageDistance.mDistances[(unsigned int)v70].mValue )
                v98->imageDistance.mDistances[(unsigned int)v70].mValue = v96;
              Com_BitSetAssert(v98->imageDistance.mValueSet, v70, 10240);
            }
          }
          else
          {
            v23 = v67;
          }
        }
        else
        {
          v23 = v67;
        }
        gridCell = v112;
        v18 = totalInstanceCount;
        v64 = (unsigned int)(v106 + 1);
        v66 = v114-- == 1;
        ++v106;
      }
      while ( !v66 );
    }
    if ( v23 != totalInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 707, ASSERT_TYPE_ASSERT, "(instanceIndex == totalInstanceCount)", (const char *)&queryFormat, "instanceIndex == totalInstanceCount") )
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
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  const XModel *v7; 
  signed int v8; 
  int v9; 
  int v10; 
  unsigned __int64 v11; 
  int forceLod; 
  float distanceScale; 
  float cosFovLimit; 
  __m128 v16; 
  __int128 v20; 
  __m128 v25; 
  __m128 v; 
  int v31; 
  int v32; 
  unsigned __int8 v33; 
  StreamFrontendGlob *v34; 
  __int64 v35; 
  __int64 xmodelIndex; 
  unsigned __int8 v37; 
  __int64 v38; 
  const XModelSurfs *v39; 
  char v40; 
  signed __int64 v41; 
  int v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  unsigned __int8 v46; 
  const XModel *v47; 
  unsigned __int8 v48; 
  const dvar_t *v49; 
  __int64 v50; 
  __int64 v51; 
  char v52; 
  int v53; 
  XModelSurfs *mesha; 
  const StreamTreeGrid *streamTreeGrid; 
  signed __int64 v57; 
  int v58; 
  const XModel *v59; 
  float4 v60; 
  float4 v61; 
  float4 v62; 
  float4 v63; 
  __m128 v64; 
  ExtentBounds lodExtentBounds; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 

  if ( !context->streamTreeGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1254, ASSERT_TYPE_ASSERT, "(context.streamTreeGrid != nullptr)", (const char *)&queryFormat, "context.streamTreeGrid != nullptr") )
    __debugbreak();
  if ( instance->xmodelIndex >= context->streamTreeGrid->xmodelCount )
  {
    LODWORD(v50) = instance->xmodelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1255, ASSERT_TYPE_ASSERT, "(unsigned)( instance.xmodelIndex ) < (unsigned)( context.streamTreeGrid->xmodelCount )", "instance.xmodelIndex doesn't index context.streamTreeGrid->xmodelCount\n\t%i not in [0, %i)", v50, context->streamTreeGrid->xmodelCount) )
      __debugbreak();
  }
  streamTreeGrid = context->streamTreeGrid;
  v7 = streamTreeGrid->xmodels[instance->xmodelIndex];
  v59 = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1259, ASSERT_TYPE_ASSERT, "(xmodel != nullptr)", (const char *)&queryFormat, "xmodel != nullptr") )
    __debugbreak();
  v8 = XModelHighLod(v7);
  v9 = -1;
  v10 = v7->numLods - 2;
  v11 = v8;
  forceLod = context->forceLod;
  if ( forceLod == -1 )
  {
    if ( v10 < (int)v11 )
      return;
    v69 = v2;
    v68 = v3;
    v67 = v4;
    do
    {
      ComputeInstanceLodExtentBounds(&lodExtentBounds, v10, instance, v7, context);
      distanceScale = context->distanceScale;
      cosFovLimit = context->cosFovLimit;
      v64.m128_i32[3] = 0;
      v16 = v64;
      v16.m128_f32[0] = lodExtentBounds.maxs.v[0];
      _XMM7 = v16;
      __asm
      {
        vinsertps xmm7, xmm7, dword ptr [rbp+70h+lodExtentBounds.maxs+4], 70h+var_60
        vinsertps xmm7, xmm7, dword ptr [rbp+70h+lodExtentBounds.maxs+8], 70h+var_50
      }
      HIDWORD(v66) = 0;
      v20 = v66;
      *(float *)&v20 = lodExtentBounds.mins.v[0];
      _XMM6 = v20;
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [rbp+70h+lodExtentBounds.mins+4], 70h+var_60
        vinsertps xmm6, xmm6, dword ptr [rbp+70h+lodExtentBounds.mins+8], 70h+var_50
        vminps  xmm0, xmm7, xmmword ptr [rdi]
        vmaxps  xmm3, xmm0, xmm6
      }
      v25 = _mm128_sub_ps(_XMM3, context->viewPos.v);
      _XMM2 = _mm128_mul_ps(v25, v25);
      __asm
      {
        vinsertps xmm0, xmm2, xmm2, 8
        vhaddps xmm1, xmm0, xmm0
      }
      v = context->viewDir.v;
      __asm { vhaddps xmm2, xmm1, xmm1 }
      v61.v = (__m128)context->viewPos;
      v64 = _XMM7;
      v66 = _XMM6;
      v60.v = v;
      v62.v = _XMM3;
      v63.v = _XMM7;
      *(_OWORD *)lodExtentBounds.mins.v = _XMM6;
      v31 = Stream_CalculateDistanceSq_ApplyZoomFactor((const float4 *)&lodExtentBounds, &v63, *(float *)&_XMM2, &v62, &v61, &v60, 1.0, cosFovLimit, distanceScale);
      v32 = 0x80000000 - v31;
      if ( v31 >= 0 )
        v32 = v31;
      if ( (int)abs32(v32) > 8 )
        break;
      v9 = v10--;
    }
    while ( v10 >= (int)v11 );
  }
  else
  {
    if ( forceLod > v10 )
      return;
    v9 = context->forceLod;
  }
  if ( v9 != -1 )
  {
    v33 = 1 << v9;
    if ( instance->collectionIndirectIndex >= streamTreeGrid->smodelCollectionIndexCount )
    {
      LODWORD(v51) = streamTreeGrid->smodelCollectionIndexCount;
      LODWORD(v50) = instance->collectionIndirectIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1296, ASSERT_TYPE_ASSERT, "(unsigned)( instance.collectionIndirectIndex ) < (unsigned)( streamTreeGrid.smodelCollectionIndexCount )", "instance.collectionIndirectIndex doesn't index streamTreeGrid.smodelCollectionIndexCount\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    v34 = streamFrontendGlob;
    v35 = streamTreeGrid->smodelCollectionIndices[instance->collectionIndirectIndex];
    xmodelIndex = instance->xmodelIndex;
    v37 = streamFrontendGlob->smodelsCollectionLodsTemp[v35];
    if ( (v37 & v33) == 0 )
    {
      if ( (v33 & streamFrontendGlob->xmodelLodsAvailableTemp[xmodelIndex]) != 0 )
      {
        streamFrontendGlob->smodelsCollectionLodsTemp[v35] = v33 | v37;
      }
      else
      {
        v57 = v9;
        v38 = (__int64)&v7->lodInfo[(__int64)v9];
        v39 = *(const XModelSurfs **)v38;
        mesha = *(XModelSurfs **)v38;
        if ( !*(_QWORD *)v38 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1318, ASSERT_TYPE_ASSERT, "(chosenModelSurfsStaging != nullptr)", (const char *)&queryFormat, "chosenModelSurfsStaging != nullptr") )
            __debugbreak();
          v39 = NULL;
        }
        if ( (v33 & v34->xmodelLodsTestedTemp[xmodelIndex]) == 0 && *(_QWORD *)(v38 + 8) && Stream_MeshIsSafeToUse(v39) )
        {
          v34->smodelsCollectionLodsTemp[v35] |= v33;
          v34->xmodelLodsAvailableTemp[xmodelIndex] |= v33;
          v34->xmodelLodsTestedTemp[xmodelIndex] |= v33;
          Stream_UsedMesh(mesha);
        }
        else
        {
          v34->xmodelLodsTestedTemp[xmodelIndex] |= v33;
          v40 = 0;
          v41 = v11;
          v64.m128_u64[0] = v11;
          v52 = 0;
          v42 = 0;
          v43 = v9;
          v44 = v38;
          do
          {
            v38 += 64i64;
            v44 -= 64i64;
            ++v42;
            --v57;
            v45 = v43 - 1;
            v53 = v42;
            ++v9;
            v58 = v45;
            if ( v57 >= v41 )
            {
              v46 = 1 << v45;
              if ( ((unsigned __int8)(1 << v45) & v34->xmodelLodsTestedTemp[xmodelIndex]) == 0 )
              {
                if ( *(_QWORD *)(v44 + 8) && Stream_MeshIsSafeToUse(*(const XModelSurfs **)v44) )
                {
                  Stream_UsedMesh(*(const XModelSurfs **)v44);
                  v34->xmodelLodsAvailableTemp[xmodelIndex] |= v46;
                }
                v34->xmodelLodsTestedTemp[xmodelIndex] |= v46;
              }
              if ( (v46 & v34->xmodelLodsAvailableTemp[xmodelIndex]) != 0 )
              {
                v34->smodelsCollectionLodsTemp[v35] |= v46;
                v40 = 1;
                v52 = 1;
              }
              else
              {
                v40 = v52;
              }
              v42 = v53;
            }
            v47 = v59;
            if ( v9 < v59->numLods - 1 )
            {
              v48 = 1 << v9;
              if ( ((unsigned __int8)(1 << v9) & v34->xmodelLodsTestedTemp[xmodelIndex]) == 0 )
              {
                if ( *(_QWORD *)(v38 + 8) )
                {
                  if ( Stream_MeshIsSafeToUse(*(const XModelSurfs **)v38) )
                  {
                    Stream_UsedMesh(*(const XModelSurfs **)v38);
                    v34->xmodelLodsAvailableTemp[xmodelIndex] |= v48;
                  }
                  v47 = v59;
                }
                v34->xmodelLodsTestedTemp[xmodelIndex] |= v48;
              }
              if ( (v48 & v34->xmodelLodsAvailableTemp[xmodelIndex]) != 0 )
              {
                v34->smodelsCollectionLodsTemp[v35] |= v48;
                v40 = 1;
                v52 = 1;
              }
              else
              {
                v40 = v52;
              }
              v42 = v53;
            }
            if ( v42 == v47->numLods )
              break;
            v43 = v58;
            v41 = v64.m128_u64[0];
          }
          while ( !v40 );
          Stream_RequestMesh(mesha);
          v49 = DVARINT_stream_missingXModelLodBoost;
          if ( !DVARINT_stream_missingXModelLodBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_missingXModelLodBoost") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v49);
          Stream_BoostMesh(mesha, 1 << (v42 * v49->current.integer));
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
  __int64 v1; 
  __int64 v2; 
  char v3; 
  bool result; 
  StreamTreeGrid *p_materialStreamTreeGrid; 
  StreamKey **cellKeys; 
  const StreamKey *v7; 
  double Float_Internal_DebugName; 
  const streamer_handle_t *p_dataHandle; 
  unsigned __int8 *data; 
  unsigned int v11; 
  __int64 sortListRead; 
  __int64 v13; 
  int v14; 
  char v15; 
  bool v16; 
  __int64 v17; 
  __int64 v18[2]; 
  __int64 v19[3]; 
  unsigned int instanceGroupStartIndex[2]; 
  __int64 *v21; 
  StreamTreeGrid *v22; 
  __int64 *v23; 
  __int64 *v24; 
  char v25; 
  StreamDistance v26; 
  StreamSortListFrame *v27; 
  unsigned __int8 *v28; 

  v1 = transientZoneIndex;
  if ( !transientZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1154, ASSERT_TYPE_SANITY, "( transientZoneIndex != 0 )", (const char *)&queryFormat, "transientZoneIndex != 0") )
    __debugbreak();
  v2 = v1;
  v3 = streamFrontendGlob->transientZoneStreamingQuality[1536 * streamFrontendGlob->sortListRead + v1];
  if ( !v3 )
    return 0;
  if ( v3 != 1 )
    return v3 == 2;
  if ( !rgp.world )
    return 0;
  p_materialStreamTreeGrid = &rgp.world->materialStreamTreeGrid;
  cellKeys = rgp.world->materialStreamTreeGrid.cellKeys;
  if ( !cellKeys )
    return 0;
  if ( (unsigned int)v1 >= rgp.world->materialStreamTreeGrid.rowCount * (unsigned int)rgp.world->materialStreamTreeGrid.columnCount )
  {
    LODWORD(v17) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1180, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( materialStreamTreeGrid.rowCount * materialStreamTreeGrid.columnCount )", "transientZoneIndex doesn't index materialStreamTreeGrid.rowCount * materialStreamTreeGrid.columnCount\n\t%i not in [0, %i)", v17, rgp.world->materialStreamTreeGrid.rowCount * rgp.world->materialStreamTreeGrid.columnCount) )
      __debugbreak();
  }
  v7 = cellKeys[v1];
  if ( !v7 || !Stream_GenericIsSafeToUse(v7) )
    return 0;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_stream_distanceImageNeededForTransientZone, "stream_distanceImageNeededForTransientZone");
  StreamDistance::StreamDistance(&v26, *(float *)&Float_Internal_DebugName * *(float *)&Float_Internal_DebugName);
  p_dataHandle = &v7->data.dataHandle;
  if ( (v7->flags & 2) != 0 )
    data = (unsigned __int8 *)p_dataHandle->data;
  else
    data = Stream_AddressSpace_ResolveHandle(p_dataHandle);
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1196, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
    __debugbreak();
  v11 = *((_DWORD *)data + 17);
  v22 = p_materialStreamTreeGrid;
  sortListRead = streamFrontendGlob->sortListRead;
  v25 = 1;
  v27 = &streamFrontendGlob->sortLists[sortListRead];
  v13 = 52i64 * *((unsigned int *)data + 12);
  v19[0] = (__int64)&v27;
  v28 = &data[v13 + 80];
  v19[1] = (__int64)&v26;
  v19[2] = (__int64)&v25;
  v18[0] = (__int64)&v25;
  v18[1] = (__int64)v19;
  *(_QWORD *)instanceGroupStartIndex = &v25;
  v21 = (__int64 *)&v28;
  v23 = v18;
  v24 = v19;
  lambda_c61fc1d736f22d4f58b3f923e6e6bf39_::operator()((unsigned int)instanceGroupStartIndex, 0, v11);
  v14 = 0;
  if ( *((_DWORD *)data + 12) )
  {
    while ( 1 )
    {
      v15 = v25;
      v16 = v25 == 0;
      if ( !v25 )
        break;
      lambda_c61fc1d736f22d4f58b3f923e6e6bf39_::operator()((unsigned int)instanceGroupStartIndex, *(_DWORD *)&data[52 * v14 + 116], *(_DWORD *)&data[52 * v14 + 120]);
      if ( (unsigned int)++v14 >= *((_DWORD *)data + 12) )
        goto LABEL_23;
    }
  }
  else
  {
LABEL_23:
    v15 = v25;
    v16 = v25 == 0;
  }
  result = v15 != 0;
  streamFrontendGlob->transientZoneStreamingQuality[1536 * streamFrontendGlob->sortListRead + v2] = v16 + 2;
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
  const dvar_t *v10; 
  __int64 v14; 
  bool useWorkers; 

  v10 = DCONST_DVARBOOL_stream_treeEnableMaterialGridWorkers;
  v14 = viewIndex;
  if ( !DCONST_DVARBOOL_stream_treeEnableMaterialGridWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeEnableMaterialGridWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  useWorkers = v10->current.enabled;
  if ( useWorkers )
    s_streamTreeGridTraversalContexts[v14].soloTree = materialStreamTree;
  Stream_TraverseMaterialStreamTreeGrid(materialStreamTreeGrid, v14, localClientIndex, viewPos, viewDir, zoomFactor, cosFovLimit, distanceScale, transientVisibility, useWorkers);
  if ( !useWorkers )
    Stream_TraverseStreamTree(materialStreamTree, localClientIndex, viewPos, viewDir, zoomFactor, cosFovLimit, distanceScale, transientVisibility);
}

/*
==============
Stream_TraverseMaterialStreamTree
==============
*/
void Stream_TraverseMaterialStreamTree(MaterialStreamTreeCellContext *context)
{
  const MaterialStreamTreeGridCell *gridCell; 
  float nodeDistSq; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TraverseMaterialStreamTree");
  if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 784, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
    __debugbreak();
  if ( !context->streamTreeGrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 785, ASSERT_TYPE_ASSERT, "(context.streamTreeGrid != nullptr)", (const char *)&queryFormat, "context.streamTreeGrid != nullptr") )
    __debugbreak();
  gridCell = context->gridCell;
  nodeDistSq = Stream_DistanceSqToAABB(context, &gridCell->bounds);
  Sys_ProfBeginNamedEvent(0xFF808080, "Process large materials");
  Stream_ProcessMatImgInstanceGroups(0, 0, gridCell->largeMaterialInstanceGroupCount, gridCell->largeImageInstanceGroupCount, gridCell->largeInstanceCount, nodeDistSq, 0.0, context);
  Sys_ProfEndNamedEvent();
  if ( gridCell->nodes )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Process materials in tree");
    if ( !gridCell->nodeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 813, ASSERT_TYPE_ASSERT, "(materialStreamTreeCell.nodeCount > 0)", (const char *)&queryFormat, "materialStreamTreeCell.nodeCount > 0") )
      __debugbreak();
    Stream_TraverseMaterialStreamTreeRecursive(gridCell->nodes, context, nodeDistSq, (float)((float)(nodeDistSq + 1.0) * gridCell->nodes->minHimipInvSqRadiiOfChildren) * context->distanceScale);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TraverseMaterialStreamTreeGrid
==============
*/
void Stream_TraverseMaterialStreamTreeGrid(const StreamTreeGrid *materialStreamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility, bool useWorkers)
{
  StreamKey **cellKeys; 
  float HimipDistanceFactor; 
  __int64 v15; 
  StreamMaterialSortGridList *p_materialSortGridList; 
  MaterialStreamTreeCellContext *p_materialCellContext; 
  const dvar_t *v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  const StreamKey *v21; 
  unsigned __int8 *residentData; 
  __int64 sortCellCount; 
  __m128 v; 
  __m128 v35; 
  const dvar_t *v40; 
  const MaterialStreamTreeGridCell *gridCell; 
  __int64 v42; 
  __int64 v43; 
  StreamMaterialSortGridList::Sort::__l2::<lambda_103be8987fb214e831bfdf2d62fe101e> v44; 
  unsigned int data; 
  const float4 *v46; 
  __int64 v47; 
  float4 v48; 
  float4 v49; 
  float4 v50; 
  float4 v51; 
  float4 v52; 

  v47 = -2i64;
  v46 = viewPos;
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
    HimipDistanceFactor = GetHimipDistanceFactor();
    v15 = data;
    p_materialSortGridList = &s_streamTreeGridTraversalContexts[v15].materialSortGridList;
    p_materialCellContext = &s_streamTreeGridTraversalContexts[v15].materialCellContext;
    memset_0(p_materialSortGridList, 0, sizeof(StreamMaterialSortGridList));
    p_materialCellContext->viewPos = (float4)viewPos->v;
    s_streamTreeGridTraversalContexts[v15].materialCellContext.viewDir = (float4)viewDir->v;
    s_streamTreeGridTraversalContexts[v15].materialCellContext.zoomFactor = zoomFactor;
    s_streamTreeGridTraversalContexts[v15].materialCellContext.cosFovLimit = cosFovLimit;
    s_streamTreeGridTraversalContexts[v15].materialCellContext.distanceScale = distanceScale;
    s_streamTreeGridTraversalContexts[v15].materialCellContext.streamerMaxDistToRead = HimipDistanceFactor;
    v18 = DVARINT_stream_treeSpanBoost;
    if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    s_streamTreeGridTraversalContexts[v15].materialCellContext.spanBoost = v18->current.integer;
    s_streamTreeGridTraversalContexts[v15].materialCellContext.localClientIndex = localClientIndex;
    s_streamTreeGridTraversalContexts[v15].materialCellContext.streamTreeGrid = materialStreamTreeGrid;
    v19 = 0;
    s_streamTreeGridTraversalContexts[v15].materialCellContext.gridCell = NULL;
    s_streamTreeGridTraversalContexts[v15].currentIndex = 0;
    v20 = 0;
    if ( materialStreamTreeGrid->rowCount )
    {
      do
      {
        streamFrontendGlob->transientZoneStreamingQuality[1536 * streamFrontendGlob->sortListWrite + v20] = 0;
        if ( v20 >= 0x600u )
        {
          LODWORD(v43) = 1536;
          LODWORD(v42) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v42, v43) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v20 & 0x1F)) & transientVisibility->array[(unsigned __int64)v20 >> 5]) != 0 )
        {
          v21 = cellKeys[v20];
          if ( v21 )
          {
            if ( Stream_GenericIsSafeToUse(cellKeys[v20]) )
            {
              Stream_UsedGeneric(v21);
              streamFrontendGlob->transientZoneStreamingQuality[1536 * streamFrontendGlob->sortListWrite + v20] = 1;
              Sys_ProfBeginNamedEvent(0xFFFF6347, "Deserialize material stream grid cell");
              if ( (v21->flags & 2) != 0 )
                residentData = v21->data.residentData;
              else
                residentData = Stream_AddressSpace_ResolveHandle(&v21->data.dataHandle);
              if ( !residentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 985, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
                __debugbreak();
              Sys_ProfEndNamedEvent();
              if ( *((_WORD *)residentData + 38) != v20 )
              {
                Com_PrintError(0, "Stream_TraverseMaterialStreamTreeGrid - Corrupt stream key detected. Bailing out to avoid crashing\n");
                Stream_Logger_Dump(residentData);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 992, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Stream_TraverseMaterialStreamTreeGrid - Corrupt stream key detected") )
                  __debugbreak();
              }
              if ( (unsigned int)(*((_DWORD *)residentData + 14) + *((_DWORD *)residentData + 15)) > 0x19 )
              {
                if ( p_materialSortGridList->sortCellCount >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1009, ASSERT_TYPE_ASSERT, "(sortList.sortCellCount < STREAM_MAX_SORTED_GRID_CELLS)", (const char *)&queryFormat, "sortList.sortCellCount < STREAM_MAX_SORTED_GRID_CELLS") )
                  __debugbreak();
                sortCellCount = p_materialSortGridList->sortCellCount;
                p_materialSortGridList->sortCells[p_materialSortGridList->sortCellCount].gridCell = (const MaterialStreamTreeGridCell *)residentData;
                v = v46->v;
                _XMM8 = _xmm;
                __asm
                {
                  vinsertps xmm8, xmm8, dword ptr [rdi+0Ch], 0
                  vinsertps xmm8, xmm8, dword ptr [rdi+10h], 10h
                  vinsertps xmm8, xmm8, dword ptr [rdi+14h], 20h ; ' '
                }
                _XMM7 = _xmm;
                __asm
                {
                  vinsertps xmm7, xmm7, dword ptr [rdi], 0
                  vinsertps xmm7, xmm7, dword ptr [rdi+4], 10h
                  vinsertps xmm7, xmm7, dword ptr [rdi+8], 20h ; ' '
                  vminps  xmm0, xmm8, xmm3
                  vmaxps  xmm4, xmm0, xmm7
                }
                v35 = _mm128_sub_ps(_XMM4, v46->v);
                _XMM2 = _mm128_mul_ps(v35, v35);
                __asm
                {
                  vinsertps xmm0, xmm2, xmm2, 8
                  vhaddps xmm1, xmm0, xmm0
                  vhaddps xmm2, xmm1, xmm1
                }
                v48.v = viewDir->v;
                v49.v = v;
                v50.v = _XMM4;
                v51.v = _XMM8;
                v52.v = _XMM7;
                p_materialSortGridList->sortCells[sortCellCount].distance = Stream_CalculateDistanceSq_ApplyZoomFactor(&v52, &v51, *(float *)&_XMM2, &v50, &v49, &v48, zoomFactor, cosFovLimit, 1.0);
                ++p_materialSortGridList->sortCellCount;
              }
              else
              {
                p_materialCellContext->gridCell = (const MaterialStreamTreeGridCell *)residentData;
                MaterialStreamTreeGridCell::DeserializeBegin((const MaterialStreamTreeGridCell *)residentData);
                Stream_TraverseMaterialStreamTree(p_materialCellContext);
                MaterialStreamTreeGridCell::DeserializeEnd((const MaterialStreamTreeGridCell *)residentData);
              }
            }
            else
            {
              Stream_RequestGeneric(v21);
              v40 = DVARINT_stream_treeSpanBoost;
              if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v40);
              Stream_BoostGeneric(v21, v40->current.integer);
            }
          }
        }
        ++v20;
      }
      while ( v20 < materialStreamTreeGrid->rowCount );
      v19 = 0;
    }
    std::_Sort_unchecked<StreamMaterialSortGridCell *,_lambda_103be8987fb214e831bfdf2d62fe101e_>(p_materialSortGridList->sortCells, &p_materialSortGridList->sortCells[p_materialSortGridList->sortCellCount], p_materialSortGridList->sortCellCount, v44);
    if ( useWorkers )
    {
      Sys_AddWorkerCmd(WRKCMD_STREAM_TRAVERSE_MATERIAL_ZONE, &data);
    }
    else if ( p_materialSortGridList->sortCellCount )
    {
      do
      {
        gridCell = p_materialSortGridList->sortCells[v19].gridCell;
        p_materialCellContext->gridCell = gridCell;
        MaterialStreamTreeGridCell::DeserializeBegin(gridCell);
        Stream_TraverseMaterialStreamTree(p_materialCellContext);
        MaterialStreamTreeGridCell::DeserializeEnd(p_materialCellContext->gridCell);
        ++v19;
      }
      while ( v19 < p_materialSortGridList->sortCellCount );
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TraverseMaterialStreamTreeRecursive
==============
*/
void Stream_TraverseMaterialStreamTreeRecursive(const MaterialStreamTreeNode *node, MaterialStreamTreeCellContext *context, const float distToNodeSq, const float nodeStreamDistance)
{
  const MaterialStreamTreeGridCell *gridCell; 
  __int64 v7; 
  __int64 i; 
  unsigned __int16 v9; 
  float cosFovLimit; 
  float zoomFactor; 
  __int64 v12; 
  MaterialStreamTreeNode *nodes; 
  __m128 v15; 
  float v16; 
  __m128 v20; 
  __m128 v25; 
  __m128 v; 
  float v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned __int16 v34; 
  float v35; 
  const MaterialStreamTreeNode *v36; 
  float v37; 
  int v38[4]; 
  float4 v39; 
  float4 v40; 
  float4 v41; 
  float4 v42; 
  float4 v43; 
  __m128 v44; 
  __m128 v45; 

  Stream_ProcessMatImgInstanceGroups(node->instanceStartIndex, node->instanceGroupStartIndex, node->materialInstanceGroupCount, node->imageInstanceGroupCount, node->instanceCount, distToNodeSq, nodeStreamDistance, context);
  if ( *(_DWORD *)node->childNodes != -1 )
  {
    if ( !context->gridCell && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 733, ASSERT_TYPE_ASSERT, "(context.gridCell != nullptr)", (const char *)&queryFormat, "context.gridCell != nullptr") )
      __debugbreak();
    gridCell = context->gridCell;
    v7 = 0i64;
    for ( i = 0i64; i < 2; ++i )
    {
      v9 = node->childNodes[i];
      if ( v9 == 0xFFFF )
      {
        v31 = FLOAT_3_4028235e38;
      }
      else
      {
        cosFovLimit = context->cosFovLimit;
        zoomFactor = context->zoomFactor;
        v12 = v9;
        nodes = gridCell->nodes;
        v44.m128_i32[3] = 0;
        v15 = v44;
        v15.m128_f32[0] = nodes[v12].bounds.maxs.v[0];
        _XMM7 = v15;
        v16 = nodes[v12].bounds.mins.v[0];
        __asm
        {
          vinsertps xmm7, xmm7, dword ptr [rcx+rax+14h], 10h
          vinsertps xmm7, xmm7, dword ptr [rcx+rax+18h], 20h ; ' '
        }
        v45.m128_i32[3] = 0;
        v20 = v45;
        v20.m128_f32[0] = v16;
        _XMM6 = v20;
        __asm
        {
          vminps  xmm0, xmm7, xmmword ptr [rdi]
          vinsertps xmm6, xmm6, xmm1, 10h
          vinsertps xmm6, xmm6, xmm2, 20h ; ' '
          vmaxps  xmm3, xmm0, xmm6
        }
        v25 = _mm128_sub_ps(_XMM3, context->viewPos.v);
        _XMM2 = _mm128_mul_ps(v25, v25);
        __asm
        {
          vinsertps xmm0, xmm2, xmm2, 8
          vhaddps xmm1, xmm0, xmm0
        }
        v = context->viewDir.v;
        __asm { vhaddps xmm2, xmm1, xmm1 }
        v40.v = (__m128)context->viewPos;
        v44 = _XMM7;
        v45 = _XMM6;
        v39.v = v;
        v41.v = _XMM3;
        v42.v = _XMM7;
        v43.v = _XMM6;
        v31 = Stream_CalculateDistanceSq_ApplyZoomFactor(&v43, &v42, *(float *)&_XMM2, &v41, &v40, &v39, zoomFactor, cosFovLimit, 1.0);
      }
      *(float *)&v38[i] = v31;
    }
    v32 = 0i64;
    LOBYTE(v32) = *(float *)&v38[1] < *(float *)v38;
    v33 = 2i64;
    do
    {
      v34 = node->childNodes[v32 ^ v7];
      if ( v34 != 0xFFFF )
      {
        v35 = *(float *)&v38[v32 ^ v7];
        v36 = &gridCell->nodes[v34];
        v37 = (float)((float)(v35 + 1.0) * v36->minHimipInvSqRadiiOfChildren) * context->distanceScale;
        if ( v37 <= context->streamerMaxDistToRead )
          Stream_TraverseMaterialStreamTreeRecursive(v36, context, v35, v37);
      }
      ++v7;
      --v33;
    }
    while ( v33 );
  }
}

/*
==============
Stream_TraverseMaterialZoneCmd
==============
*/
void Stream_TraverseMaterialZoneCmd(const void *const data)
{
  StreamMaterialTreeGridTraversalContext *v2; 
  const MaterialStreamTreeGridCell *gridCell; 
  unsigned int dataa; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 868, ASSERT_TYPE_ASSERT, "(data != nullptr)", (const char *)&queryFormat, "data != nullptr") )
    __debugbreak();
  dataa = *(_DWORD *)data;
  if ( dataa >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 870, ASSERT_TYPE_ASSERT, "(viewIndex < ( sizeof( *array_counter( s_streamTreeGridTraversalContexts ) ) + 0 ))", (const char *)&queryFormat, "viewIndex < ARRAY_COUNT( s_streamTreeGridTraversalContexts )") )
    __debugbreak();
  v2 = &s_streamTreeGridTraversalContexts[dataa];
  if ( v2->currentIndex == v2->materialSortGridList.sortCellCount )
  {
    Stream_TraverseStreamTree(v2->soloTree, (const LocalClientNum_t)v2->materialCellContext.localClientIndex, &v2->materialCellContext.viewPos, &v2->materialCellContext.viewDir, v2->materialCellContext.zoomFactor, v2->materialCellContext.cosFovLimit, v2->materialCellContext.distanceScale, v2->materialCellContext.transientVisibility);
  }
  else
  {
    Sys_EnterCriticalSection(CRITSECT_STREAM_TREE_DRAW);
    if ( v2->currentIndex >= v2->materialSortGridList.sortCellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 888, ASSERT_TYPE_ASSERT, "(traversalContext.currentIndex < materialSortGridList.sortCellCount)", (const char *)&queryFormat, "traversalContext.currentIndex < materialSortGridList.sortCellCount") )
      __debugbreak();
    gridCell = v2->materialSortGridList.sortCells[v2->currentIndex].gridCell;
    v2->materialCellContext.gridCell = gridCell;
    MaterialStreamTreeGridCell::DeserializeBegin(gridCell);
    Stream_TraverseMaterialStreamTree(&v2->materialCellContext);
    MaterialStreamTreeGridCell::DeserializeEnd(v2->materialSortGridList.sortCells[v2->currentIndex].gridCell);
    ++v2->currentIndex;
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
  const dvar_t *v12; 
  MaterialStreamTreeContext context; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TraverseStreamTree");
  context.viewPos = (float4)viewPos->v;
  context.viewDir = (float4)viewDir->v;
  context.zoomFactor = zoomFactor;
  context.cosFovLimit = cosFovLimit;
  context.distanceScale = distanceScale;
  context.streamerMaxDistToRead = GetHimipDistanceFactor();
  v12 = DVARINT_stream_treeSpanBoost;
  if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  context.spanBoost = v12->current.integer;
  context.streamTree = streamTree;
  context.localClientIndex = localClientIndex;
  context.transientVisibility = transientVisibility;
  Stream_ProcessVolumeSpan_StreamMtlGroup_(&streamTree->largeMtlGroup, &context, 0.0, 0.0);
  if ( streamTree->nodes )
    Stream_TraverseStreamTreeRecursive(streamTree->nodes, &context, 0.0, 0.0);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_TraverseStreamTreeRecursive
==============
*/
void Stream_TraverseStreamTreeRecursive(const StreamTreeNode *node, const MaterialStreamTreeContext *context, float distToNodeSq, float streamDist)
{
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  StreamTreeNode *nodes; 
  float v9; 
  float v10; 
  __int64 v11; 
  _BOOL8 v12; 
  __int64 v13; 
  const StreamTreeNode *v14; 
  float v15; 
  float v16; 
  StreamTreeNode *nodea; 
  StreamTreeNode *v18; 
  float v19; 
  float v20; 

  Stream_ProcessVolumeSpan_StreamTreeNode_(node, context, distToNodeSq, streamDist);
  v6 = node->childNodes[0];
  if ( v6 != 0xFFFF )
  {
    v7 = node->childNodes[1];
    if ( v7 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 463, ASSERT_TYPE_ASSERT, "(child1Index != c_streamTreeNoChildIndex)", (const char *)&queryFormat, "child1Index != c_streamTreeNoChildIndex") )
      __debugbreak();
    nodes = context->streamTree->nodes;
    nodea = &nodes[v6];
    v18 = &nodes[v7];
    v19 = Stream_DistanceSqToAABB(context, &nodea->aabb);
    v9 = v19;
    v10 = Stream_DistanceSqToAABB(context, &v18->aabb);
    v11 = 0i64;
    v12 = v10 < v9;
    v13 = 2i64;
    v20 = v10;
    do
    {
      v14 = *(&nodea + (v12 ^ v11));
      v15 = *(&v19 + (v12 ^ v11));
      v16 = (float)((float)(v15 + 1.0) * v14->minLomipInvSqRadiiOfChildren) * context->distanceScale;
      if ( v16 <= context->streamerMaxDistToRead )
        Stream_TraverseStreamTreeRecursive(v14, context, v15, v16);
      ++v11;
      --v13;
    }
    while ( v13 );
  }
}

/*
==============
Stream_TraverseXModelStreamTree
==============
*/
void Stream_TraverseXModelStreamTree(const XModelStreamTreeGridCell *xmodelStreamTreeCell, const StreamTreeGrid *streamTreeGrid, const unsigned int viewIndex, const LocalClientNum_t localClientIndex, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float distanceScale, const bitarray<1536> *transientVisibility)
{
  const dvar_t *v14; 
  unsigned int unsignedInt; 
  XModelStreamTreeContext context; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_TraverseXModelStreamTree");
  context.viewPos = (float4)viewPos->v;
  context.viewDir = (float4)viewDir->v;
  context.zoomFactor = zoomFactor;
  context.cosFovLimit = cosFovLimit;
  context.distanceScale = distanceScale;
  context.streamerMaxDistToRead = GetHimipDistanceFactor();
  v14 = DVARINT_stream_treeSpanBoost;
  if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  context.spanBoost = v14->current.integer;
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
  __int64 v15; 
  const StreamKey *v16; 
  bool IsSafeToUse; 
  const StreamKey *v18; 
  const dvar_t *v19; 
  StreamKey *ClosestGridCell; 
  const XModelStreamTreeGridCell *v21; 
  float4 viewPosa; 

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
    GridCellIndex = FindGridCellIndex(xmodelStreamTreeGrid, 5000.0, viewPos);
    v15 = GridCellIndex;
    if ( GridCellIndex >= xmodelStreamTreeGrid->rowCount * (unsigned int)xmodelStreamTreeGrid->columnCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1609, ASSERT_TYPE_ASSERT, "(gridCellIndex < static_cast<uint>( xmodelStreamTreeGrid.rowCount * xmodelStreamTreeGrid.columnCount ))", (const char *)&queryFormat, "gridCellIndex < static_cast<uint>( xmodelStreamTreeGrid.rowCount * xmodelStreamTreeGrid.columnCount )") )
      __debugbreak();
    v16 = cellKeys[v15];
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1612, ASSERT_TYPE_ASSERT, "(gridCellKey != nullptr)", (const char *)&queryFormat, "gridCellKey != nullptr") )
      __debugbreak();
    viewPosa.v = viewPos->v;
    IsSafeToUse = Stream_GenericIsSafeToUse(v16);
    v18 = v16;
    if ( !IsSafeToUse )
    {
      Stream_RequestGeneric(v16);
      v19 = DVARINT_stream_treeSpanBoost;
      if ( !DVARINT_stream_treeSpanBoost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_treeSpanBoost") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      Stream_BoostGeneric(v16, v19->current.integer);
      ClosestGridCell = FindClosestGridCell(xmodelStreamTreeGrid, &viewPosa);
      v16 = ClosestGridCell;
      if ( !ClosestGridCell )
      {
        memset_0(streamFrontendGlob->smodelsCollectionLodsTemp, 0, sizeof(streamFrontendGlob->smodelsCollectionLodsTemp));
LABEL_28:
        Sys_LeaveCriticalSection(CRITSECT_STREAM_TREE_DRAW);
        goto LABEL_29;
      }
      v18 = ClosestGridCell;
    }
    Stream_UsedGeneric(v18);
    Sys_ProfBeginNamedEvent(0xFFFF6347, "Deserialize xmodel stream grid cell");
    v21 = XModelStreamTreeGridCell::DeserializeBegin(v16);
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_tree.cpp", 1643, ASSERT_TYPE_ASSERT, "(gridCell != nullptr)", (const char *)&queryFormat, "gridCell != nullptr") )
      __debugbreak();
    Sys_ProfEndNamedEvent();
    Stream_TraverseXModelStreamTree(v21, xmodelStreamTreeGrid, viewIndex, localClientIndex, viewPos, viewDir, zoomFactor, cosFovLimit, distanceScale, transientVisibility);
    XModelStreamTreeGridCell::DeserializeEnd(v21);
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
  const XModelStreamTreeNode *i; 
  const XModelStreamTreeGridCell *gridCell; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 

  for ( i = node; Stream_DistanceSqToAABB(context, &i->bounds) <= 0.0; i = &gridCell->nodes[v6] )
  {
    gridCell = context->gridCell;
    v5 = i->childNodes[0];
    v6 = i->childNodes[1];
    Stream_ProcessXModelInstances(i->instanceStartIndex, i->instanceCount, context);
    if ( v5 != 0xFFFF )
      Stream_TraverseXModelStreamTreeRecursive(&gridCell->nodes[v5], context);
    if ( v6 == 0xFFFF )
      break;
  }
}

