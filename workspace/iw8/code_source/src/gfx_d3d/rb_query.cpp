/*
==============
RB_DrawOcclusionQueries
==============
*/

void __fastcall RB_DrawOcclusionQueries(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_DrawOcclusionQueries@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_InvalidateOcclusionQuerySize
==============
*/

void __fastcall RB_InvalidateOcclusionQuerySize(unsigned __int16 handle)
{
  ?RB_InvalidateOcclusionQuerySize@@YAXG@Z(handle);
}

/*
==============
RB_SetOcclusionQuerySize
==============
*/

void __fastcall RB_SetOcclusionQuerySize(unsigned __int16 handle, float width, float height)
{
  ?RB_SetOcclusionQuerySize@@YAXGMM@Z(handle, width, height);
}

/*
==============
RB_GetOcclusionQueryVisibility
==============
*/

double __fastcall RB_GetOcclusionQueryVisibility(unsigned __int16 handle)
{
  double result; 

  *(float *)&result = ?RB_GetOcclusionQueryVisibility@@YAMG@Z(handle);
  return result;
}

/*
==============
RB_InsertFrameEndQuery_GPUTimer
==============
*/

void RB_InsertFrameEndQuery_GPUTimer(void)
{
  ?RB_InsertFrameEndQuery_GPUTimer@@YAXXZ();
}

/*
==============
RB_OcclusionQueryUseOffscreenRaycastResult
==============
*/

bool __fastcall RB_OcclusionQueryUseOffscreenRaycastResult(unsigned __int16 handle)
{
  return ?RB_OcclusionQueryUseOffscreenRaycastResult@@YA_NG@Z(handle);
}

/*
==============
RB_InitOcclusionQueries
==============
*/

void RB_InitOcclusionQueries(void)
{
  ?RB_InitOcclusionQueries@@YAXXZ();
}

/*
==============
RB_AllocOcclusionQueries
==============
*/

void RB_AllocOcclusionQueries(void)
{
  ?RB_AllocOcclusionQueries@@YAXXZ();
}

/*
==============
RB_InsertFrameBeginQuery
==============
*/

void RB_InsertFrameBeginQuery(void)
{
  ?RB_InsertFrameBeginQuery@@YAXXZ();
}

/*
==============
RB_InsertFrameBeginQuery_GPUTimer
==============
*/

void RB_InsertFrameBeginQuery_GPUTimer(void)
{
  ?RB_InsertFrameBeginQuery_GPUTimer@@YAXXZ();
}

/*
==============
RB_Query_Save
==============
*/

void __fastcall RB_Query_Save(MemoryFile *memFile)
{
  ?RB_Query_Save@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
RB_AllocOcclusionQuery
==============
*/

unsigned __int16 __fastcall RB_AllocOcclusionQuery(LocalClientNum_t localClientNum, const vec3_t *position, bool isWorldPos, float depthBias)
{
  return ?RB_AllocOcclusionQuery@@YAGW4LocalClientNum_t@@PEBTvec3_t@@_NM@Z(localClientNum, position, isWorldPos, depthBias);
}

/*
==============
R_GetLatestFrameDuration
==============
*/

double __fastcall R_GetLatestFrameDuration()
{
  double result; 

  *(float *)&result = ?R_GetLatestFrameDuration@@YAMXZ();
  return result;
}

/*
==============
RB_SetOcclusionQueryDepthHack
==============
*/

void __fastcall RB_SetOcclusionQueryDepthHack(unsigned __int16 handle, bool inDepthHack)
{
  ?RB_SetOcclusionQueryDepthHack@@YAXG_N@Z(handle, inDepthHack);
}

/*
==============
RB_InsertWaitFlipEndQuery
==============
*/

void RB_InsertWaitFlipEndQuery(void)
{
  ?RB_InsertWaitFlipEndQuery@@YAXXZ();
}

/*
==============
RB_FreeOcclusionQuery
==============
*/

void __fastcall RB_FreeOcclusionQuery(unsigned __int16 handle)
{
  ?RB_FreeOcclusionQuery@@YAXG@Z(handle);
}

/*
==============
RB_GetOcclusionQueryOffscreenRaycastHandle
==============
*/

unsigned int __fastcall RB_GetOcclusionQueryOffscreenRaycastHandle(unsigned __int16 handle)
{
  return ?RB_GetOcclusionQueryOffscreenRaycastHandle@@YAIG@Z(handle);
}

/*
==============
RB_SetOcclusionQueryPosition
==============
*/

void __fastcall RB_SetOcclusionQueryPosition(unsigned __int16 handle, const vec3_t *position)
{
  ?RB_SetOcclusionQueryPosition@@YAXGAEBTvec3_t@@@Z(handle, position);
}

/*
==============
RB_Query_Archive
==============
*/

void __fastcall RB_Query_Archive(MemoryFile *memFile)
{
  ?RB_Query_Archive@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
R_UpdateOverTime
==============
*/

double __fastcall R_UpdateOverTime(float fCurrent, float fGoal, int iFadeInTime, int iFadeOutTime, int frametime)
{
  double result; 

  *(float *)&result = ?R_UpdateOverTime@@YAMMMHHH@Z(fCurrent, fGoal, iFadeInTime, iFadeOutTime, frametime);
  return result;
}

/*
==============
RB_InsertFrameEndQuery
==============
*/

void RB_InsertFrameEndQuery(void)
{
  ?RB_InsertFrameEndQuery@@YAXXZ();
}

/*
==============
RB_AllocFrameDurationQueries
==============
*/

void RB_AllocFrameDurationQueries(void)
{
  ?RB_AllocFrameDurationQueries@@YAXXZ();
}

/*
==============
RB_TessRectBillboard
==============
*/

void __fastcall RB_TessRectBillboard(GfxCmdBufContext *gfxContext, const vec3_t *inPos, bool isWorldPos, bool isWorldWidthHeight, float widthInPixels, float heightInPixels, GfxColor color, float depthBias, GfxViewport *viewport, bool setTechnique, unsigned int *outSamplesCovered, bool *outAnyPortionOffscreen)
{
  ?RB_TessRectBillboard@@YAXUGfxCmdBufContext@@AEBTvec3_t@@_N2MMTGfxColor@@MUGfxViewport@@2PEAIPEA_N@Z(gfxContext, inPos, isWorldPos, isWorldWidthHeight, widthInPixels, heightInPixels, color, depthBias, viewport, setTechnique, outSamplesCovered, outAnyPortionOffscreen);
}

/*
==============
RB_HaveAnyOcclusionQueries
==============
*/

bool __fastcall RB_HaveAnyOcclusionQueries(LocalClientNum_t localClientNum)
{
  return ?RB_HaveAnyOcclusionQueries@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
RB_InitOcclusionQueryBatch
==============
*/

GfxVertex *__fastcall RB_InitOcclusionQueryBatch(GfxCmdBufContext *gfxContext, GfxColor color, bool setTechnique)
{
  return ?RB_InitOcclusionQueryBatch@@YAPEAUGfxVertex@@UGfxCmdBufContext@@TGfxColor@@_N@Z(gfxContext, color, setTechnique);
}

/*
==============
RB_Query_Restore
==============
*/

void __fastcall RB_Query_Restore(MemoryFile *memFile)
{
  ?RB_Query_Restore@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
RB_GetOcclusionQueryOffscreenRaycastSent
==============
*/

bool __fastcall RB_GetOcclusionQueryOffscreenRaycastSent(unsigned __int16 handle)
{
  return ?RB_GetOcclusionQueryOffscreenRaycastSent@@YA_NG@Z(handle);
}

/*
==============
RB_OcclusionQueryOffscreenRaycastSent
==============
*/

void __fastcall RB_OcclusionQueryOffscreenRaycastSent(unsigned __int16 handle, unsigned int raycastHandle)
{
  ?RB_OcclusionQueryOffscreenRaycastSent@@YAXGI@Z(handle, raycastHandle);
}

/*
==============
RB_InsertWaitFlipBeginQuery
==============
*/

void RB_InsertWaitFlipBeginQuery(void)
{
  ?RB_InsertWaitFlipBeginQuery@@YAXXZ();
}

/*
==============
RB_AllocFrameDurationQueries
==============
*/
void RB_AllocFrameDurationQueries(void)
{
  bool v0; 
  GfxTimestampQuery *queryHistory; 

  s_frameQueries.latestQuery.frameBegin = 0i64;
  s_frameQueries.latestQuery.waitBegin = 0i64;
  s_frameQueries.latestQuery.waitEnd = 0i64;
  s_frameQueries.latestQuery.frameEnd = 0i64;
  s_frameQueries.queryHistory = NULL;
  *(_QWORD *)&s_frameQueries.queryIndex = 0i64;
  v0 = PMem_AuxAllocationsEnabled();
  if ( v0 )
    PMem_PopAuxAllocations();
  queryHistory = (GfxTimestampQuery *)PMem_Alloc(0x80ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frame duration queries");
  s_frameQueries.queryHistory = queryHistory;
  if ( v0 )
  {
    PMem_PushAuxAllocations();
    queryHistory = s_frameQueries.queryHistory;
  }
  memset_0(queryHistory, 0, 0x80ui64);
}

/*
==============
RB_AllocOcclusionQueries
==============
*/
void RB_AllocOcclusionQueries(void)
{
  HRESULT v0; 
  const char *v1; 
  unsigned int used; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  _BYTE *v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  GfxBufferCreationContext v10; 
  ID3D12QueryHeap *v11; 
  int v12[4]; 
  D3D12_RESOURCE_DESC v13; 

  Sys_EnterCriticalSection(CRITSECT_OCCLUSION_QUERY);
  if ( s_occlusionQueriesAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 822, ASSERT_TYPE_ASSERT, "(!s_occlusionQueriesAllocated)", (const char *)&queryFormat, "!s_occlusionQueriesAllocated") )
    __debugbreak();
  v12[1] = 1026;
  v12[0] = 0;
  v12[2] = 1;
  v0 = ((__int64 (__fastcall *)(ID3D12Device *, int *, GUID *, ID3D12QueryHeap **))g_dx.d3d12device->m_pFunction[13].QueryInterface)(g_dx.d3d12device, v12, &GUID_0d9658ae_ed45_469e_a61d_970ec583cab4, &v11);
  if ( v0 < 0 )
  {
    v1 = R_ErrorDescription(v0);
    Sys_Error((const ObfuscateErrorText)&stru_1444552C0, 123i64, v1);
  }
  g_dx.occlusionQueryHeap.heap = v11;
  *(_QWORD *)&g_dx.occlusionQueryHeap.used = 1i64;
  v10.zoneName = (char *)&queryFormat.fmt + 3;
  g_dx.occlusionQueryHeap.numQueries = 1026;
  v10.objectName = "query heap readback buffer";
  v13.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  v13.Alignment = 0i64;
  *(_QWORD *)&v13.DepthOrArraySize = 65537i64;
  v13.Width = 8208i64;
  v13.Height = 1;
  v13.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  *(_QWORD *)&v13.Layout = 1i64;
  g_dx.occlusionQueryHeap.data = (unsigned __int64 *)R_DX12_CreateBuffer(&v13, D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST, NULL, NULL, 0x2010u, &g_dx.occlusionQueryHeap.buffer, &v10);
  g_dx.occlusionQueryHeap.fences = (unsigned __int64 *)PMem_Alloc(0x2010ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "query heap fences");
  memset_0(g_dx.occlusionQueryHeap.fences, 0, 0x2010ui64);
  used = g_dx.occlusionQueryHeap.used;
  v3 = 48i64;
  v4 = 44i64;
  v5 = 2i64;
  do
  {
    v6 = (char *)occlusionQueryArray + v4;
    v7 = 512i64;
    do
    {
      if ( used >= g_dx.occlusionQueryHeap.numQueries )
      {
        LODWORD(v9) = used;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 180, ASSERT_TYPE_ASSERT, "( ( handle->used < handle->numQueries ) )", "( handle->used ) = %u", v9) )
          __debugbreak();
        used = g_dx.occlusionQueryHeap.used;
      }
      v8 = used++;
      *(_DWORD *)&v6[v3 - v4] = v8;
      *v6 = 0;
      v6 += 68;
      g_dx.occlusionQueryHeap.used = used;
      --v7;
    }
    while ( v7 );
    v3 += 4i64;
    ++v4;
    --v5;
  }
  while ( v5 );
  s_occlusionQueriesAllocated = 1;
  Sys_LeaveCriticalSection(CRITSECT_OCCLUSION_QUERY);
}

/*
==============
RB_AllocOcclusionQuery
==============
*/
__int64 RB_AllocOcclusionQuery(LocalClientNum_t localClientNum, const vec3_t *position, bool isWorldPos, float depthBias)
{
  unsigned __int16 v7; 
  OcclusionQuery *v8; 
  unsigned int v9; 
  unsigned int v11; 

  Sys_EnterCriticalSection(CRITSECT_OCCLUSION_QUERY);
  if ( (!s_occlusionQueriesInited || !s_occlusionQueriesAllocated) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 900, ASSERT_TYPE_ASSERT, "(s_occlusionQueriesInited && s_occlusionQueriesAllocated)", (const char *)&queryFormat, "s_occlusionQueriesInited && s_occlusionQueriesAllocated") )
    __debugbreak();
  v7 = 0;
  while ( 1 )
  {
    v8 = &occlusionQueryArray[v7];
    if ( (*(_DWORD *)v8 & 1) == 0 )
      break;
    if ( ++v7 >= 0x200u )
    {
      Sys_LeaveCriticalSection(CRITSECT_OCCLUSION_QUERY);
      R_WarnOncePerFrame(R_WARN_MAX_OCCLUSION_QUERIES, 512i64);
      return 0xFFFFi64;
    }
  }
  v9 = *(_DWORD *)v8;
  if ( position )
  {
    *(_DWORD *)v8 = v9 & 0xFFFFFFF9 | (4 * isWorldPos) | 9;
    v8->position.v[0] = position->v[0];
    v8->position.v[1] = position->v[1];
    v8->position.v[2] = position->v[2];
    v11 = *(_DWORD *)v8;
  }
  else
  {
    v11 = v9 & 0xFFFFFFF1 | (4 * isWorldPos) & 0xFFF7 | 1;
  }
  v8->lastVisibility = 0.0;
  *(_DWORD *)v8 = v11 & 0xFFFFFF1F;
  v8->depthBias = depthBias;
  v8->localClientNum = localClientNum;
  *(_QWORD *)&v8->hitNum = 0i64;
  *(_WORD *)v8->issued = 0;
  Sys_LeaveCriticalSection(CRITSECT_OCCLUSION_QUERY);
  return v7;
}

/*
==============
RB_DrawOcclusionQueries
==============
*/
void RB_DrawOcclusionQueries(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  unsigned int clientIndex; 
  OcclusionQuery *v5; 
  OcclusionQuery *v6; 
  materialCommands_t *Tess; 
  materialCommands_t *v8; 
  __int64 v9; 
  unsigned int maxClientRenderViews; 
  GfxCmdBufContext v11; 

  clientIndex = viewInfo->clientIndex;
  if ( (!s_occlusionQueriesInited || !s_occlusionQueriesAllocated) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 760, ASSERT_TYPE_ASSERT, "(s_occlusionQueriesInited && s_occlusionQueriesAllocated)", (const char *)&queryFormat, "s_occlusionQueriesInited && s_occlusionQueriesAllocated") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 761, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( clientIndex >= gfxCfg.maxClientRenderViews )
  {
    maxClientRenderViews = gfxCfg.maxClientRenderViews;
    LODWORD(v9) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 762, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientRenderViews )", "localClientNum doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", v9, maxClientRenderViews) )
      __debugbreak();
  }
  v11 = *gfxContext;
  RB_SetIdentity(&v11);
  v5 = occlusionQueryArray;
  do
  {
    v6 = v5;
    if ( (*(_BYTE *)v5 & 1) != 0 && v5->localClientNum == clientIndex )
    {
      v11 = *gfxContext;
      RB_DrawOcclusionQuerySprite(&v11, viewInfo, v5);
      v11 = *gfxContext;
      Tess = R_GetTess(&v11);
      v8 = Tess;
      if ( Tess->vertexCount )
      {
        v11 = *gfxContext;
        RB_EndTessSurfaceInternal(&v11, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
      }
      else
      {
        if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
          __debugbreak();
        v8->viewStatsTarget = GFX_VIEW_STATS_INVALID;
        v8->primStatsTarget = GFX_PRIM_STATS_INVALID;
      }
    }
    ++v5;
  }
  while ( (__int64)v5 < (__int64)&marker_rb_query );
  v11 = *gfxContext;
  RB_FinishSpriteOcclusionQueries(&v11, viewInfo, v6);
}

/*
==============
RB_DrawOcclusionQuerySprite
==============
*/
void RB_DrawOcclusionQuerySprite(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, OcclusionQuery *occlusionQuery)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  int v11; 
  __int64 v12; 
  GfxCmdBufSourceState *source; 
  float SampleRectRelativeArea; 
  int hitNum; 
  float v16; 
  float v17; 
  int v18; 
  char *Value; 
  unsigned int *v20; 
  unsigned int v21; 
  _QWORD *v22; 
  char *v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  ThreadContext CurrentThreadContext; 
  int v27; 
  int v28; 
  GfxCmdBufSourceState *v29; 
  float width; 
  float height; 
  float v32; 
  float v33; 
  float tanHalfFovX; 
  float tanHalfFovY; 
  float v36; 
  float v37; 
  GfxCmdBufState *state; 
  GfxDepthRangeType v39; 
  int v40; 
  GfxCmdBufContext v41; 
  bool v42; 
  bool v43; 
  __int64 v44; 
  unsigned __int64 *fences; 
  __int64 v46; 
  __int64 v47; 
  __int128 v48; 
  __int128 v49; 
  float v50; 
  __int128 v52; 
  unsigned int v54; 
  bool v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  bool v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  float depthBias; 
  bool v64; 
  unsigned int v65[3]; 
  GfxViewport v66; 
  GfxCmdBufContext v67; 
  GfxCmdBufContext v68; 
  GfxViewport outViewport; 
  vec3_t end; 
  tmat44_t<vec4_t> in2; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 

  v64 = 0;
  if ( !occlusionQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 559, ASSERT_TYPE_ASSERT, "(occlusionQuery)", (const char *)&queryFormat, "occlusionQuery") )
    __debugbreak();
  if ( (*(_BYTE *)occlusionQuery & 8) != 0 )
  {
    v11 = r_glob.backEndFrameCount % 2;
    if ( (unsigned int)(r_glob.backEndFrameCount % 2) >= 2 )
    {
      LODWORD(v60) = r_glob.backEndFrameCount % 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 565, ASSERT_TYPE_ASSERT, "(unsigned)( queryIndex ) < (unsigned)( ( sizeof( *array_counter( occlusionQuery->query ) ) + 0 ) )", "queryIndex doesn't index ARRAY_COUNT( occlusionQuery->query )\n\t%i not in [0, %i)", v60, 2) )
        __debugbreak();
    }
    v12 = v11;
    if ( !occlusionQuery->query[v11] )
    {
      source = gfxContext->source;
      SampleRectRelativeArea = RB_GetSampleRectRelativeArea(gfxContext->source, &occlusionQuery->position, 16, 16);
      occlusionQuery->lastVisibility = SampleRectRelativeArea;
      if ( SampleRectRelativeArea != 0.0 )
      {
        hitNum = occlusionQuery->hitNum;
        v16 = 262144.0 * occlusionQuery->position.v[1];
        end.v[0] = (float)(262144.0 * occlusionQuery->position.v[0]) + source->viewParms3D.camera.origin.v[0];
        v17 = 262144.0 * occlusionQuery->position.v[2];
        end.v[1] = v16 + source->viewParms3D.camera.origin.v[1];
        end.v[2] = v17 + source->viewParms3D.camera.origin.v[2];
        v18 = R_LightSightTrace(hitNum, &source->viewParms3D.camera.origin, &end, 0, 8195);
        occlusionQuery->hitNum = v18;
        if ( v18 )
          occlusionQuery->lastVisibility = 0.0;
      }
      return;
    }
    v74 = v5;
    v73 = v6;
    v72 = v7;
    Value = (char *)Sys_GetValue(0);
    v20 = (unsigned int *)(Value + 6416);
    if ( (unsigned int)(*((_DWORD *)Value + 1604) + 1) >= 3 )
    {
      LODWORD(v62) = 3;
      LODWORD(v60) = *((_DWORD *)Value + 1604) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v60, v62) )
        __debugbreak();
    }
    v21 = *v20 + 1;
    *v20 = v21;
    if ( v21 >= 3 )
    {
      LODWORD(v62) = 3;
      LODWORD(v60) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v60, v62) )
        __debugbreak();
    }
    v22 = Value + 2088;
    v23 = Value + 40;
    if ( *v22 < (unsigned __int64)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v22 += 8i64;
    if ( *v22 >= (unsigned __int64)v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v22 = v20;
    if ( *v22 <= (unsigned __int64)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v24 = (int)*v20;
    v25 = __rdtsc();
    v20[v24 + 2] = v25;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    v27 = 0;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 108, NULL, 0);
    v28 = *(_DWORD *)occlusionQuery;
    v29 = gfxContext->source;
    if ( (*(_DWORD *)occlusionQuery & 0x10) != 0 )
    {
      width = occlusionQuery->width;
      height = occlusionQuery->height;
    }
    else
    {
      R_GetViewport(gfxContext->source, &outViewport);
      v32 = (float)outViewport.width;
      width = v32 * 0.0083333338;
      v33 = (float)outViewport.height;
      height = v33 * 0.014814815;
      v28 = *(_DWORD *)occlusionQuery;
    }
    if ( (v28 & 0x80u) == 0 )
    {
      state = gfxContext->state;
      if ( state->depthRangeType == GFX_DEPTH_RANGE_SCENE )
        goto LABEL_39;
      v39 = GFX_DEPTH_RANGE_SCENE;
    }
    else
    {
      tanHalfFovX = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
      tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
      v76 = v3;
      v36 = tanHalfFovX / viewInfo->viewParmsSet.frames[0].viewParms.camera.depthHackFoV.tanHalfFovX;
      v75 = v4;
      v37 = tanHalfFovY / viewInfo->viewParmsSet.frames[0].viewParms.camera.depthHackFoV.tanHalfFovY;
      *(vec4_t *)((char *)&in2.row0 + 4) = 0ui64;
      in2.m[0].v[0] = v36;
      in2.m[1].v[1] = v37;
      in2.m[2].v[2] = FLOAT_1_0;
      in2.m[3].v[3] = FLOAT_1_0;
      *(vec4_t *)((char *)&in2.row1 + 8) = 0ui64;
      *(vec4_t *)((char *)&in2.row2 + 12) = 0ui64;
      MatrixMultiply44(&v29->viewParms3D.viewProjectionMatrix.m, &in2, &v29->viewParms3D.viewProjectionMatrix.m);
      state = gfxContext->state;
      v29->viewParms3D.projectionMatrix.m.m[0].v[0] = v36 * v29->viewParms3D.projectionMatrix.m.m[0].v[0];
      v29->viewParms3D.projectionMatrix.m.m[1].v[1] = v37 * v29->viewParms3D.projectionMatrix.m.m[1].v[1];
      if ( state->depthRangeType == GFX_DEPTH_RANGE_VIEWMODEL )
        goto LABEL_39;
      v39 = GFX_DEPTH_RANGE_VIEWMODEL;
    }
    R_ChangeDepthRange(state, v39);
LABEL_39:
    v40 = (*((unsigned __int8 *)v29 + 11668) >> 5) & 1;
    R_GetViewport(v29, &outViewport);
    v41 = *gfxContext;
    outViewport.width <<= v40;
    outViewport.height <<= v40;
    v42 = (*(_DWORD *)occlusionQuery & 0x14) == 20;
    v43 = (*(_DWORD *)occlusionQuery & 4) != 0;
    v66 = outViewport;
    depthBias = occlusionQuery->depthBias;
    v67 = v41;
    RB_TessRectBillboard(&v67, &occlusionQuery->position, v43, v42, width, height, (GfxColor)-16777216, depthBias, &v66, 1, v65, &v64);
    if ( !occlusionQuery->issued[v12] )
    {
      v54 = *(_DWORD *)occlusionQuery | 0x40;
      LODWORD(_XMM2) = 0;
LABEL_59:
      if ( (v54 & 2) == 0 )
        occlusionQuery->lastVisibility = *(float *)&_XMM2;
      v55 = v64;
      *(_DWORD *)occlusionQuery = v54 & 0xFFFFFFFD;
      v56 = v65[0];
      occlusionQuery->samplesCovered[v12] = v65[0];
      occlusionQuery->anyPortionOffscreen[v12] = v55;
      if ( v56 )
      {
        v57 = occlusionQuery->query[v12];
        if ( !g_dx.occlusionQueryHeap.heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 192, ASSERT_TYPE_ASSERT, "(handle->heap)", (const char *)&queryFormat, "handle->heap") )
          __debugbreak();
        if ( v57 >= g_dx.occlusionQueryHeap.numQueries )
        {
          LODWORD(v61) = v57;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 193, ASSERT_TYPE_ASSERT, "( ( static_cast<uint>( query ) < handle->numQueries ) )", "( query ) = %i", v61) )
            __debugbreak();
        }
        if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
          __debugbreak();
        ((void (__fastcall *)(GfxDevice *, ID3D12QueryHeap *, _QWORD, _QWORD))g_dx.immediateContext->m_pFunction[9].AddRef)(g_dx.immediateContext, g_dx.occlusionQueryHeap.heap, (unsigned int)g_dx.occlusionQueryHeap.queryType, v57);
        v68 = *gfxContext;
        RB_EndTessSurfaceWithScissorInternal(&v68, &viewInfo->scissorGeoViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp(673)");
        v58 = occlusionQuery->query[v12];
        if ( !g_dx.occlusionQueryHeap.heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 204, ASSERT_TYPE_ASSERT, "(handle->heap)", (const char *)&queryFormat, "handle->heap") )
          __debugbreak();
        if ( v58 >= g_dx.occlusionQueryHeap.numQueries )
        {
          LODWORD(v61) = v58;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 205, ASSERT_TYPE_ASSERT, "( ( static_cast<uint>( query ) < handle->numQueries ) )", "( query ) = %i", v61) )
            __debugbreak();
        }
        if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
          __debugbreak();
        ((void (__fastcall *)(GfxDevice *, ID3D12QueryHeap *, _QWORD, _QWORD))g_dx.immediateContext->m_pFunction[9].Release)(g_dx.immediateContext, g_dx.occlusionQueryHeap.heap, (unsigned int)g_dx.occlusionQueryHeap.queryType, v58);
        v59 = 1;
      }
      else
      {
        v59 = 0;
      }
      occlusionQuery->issued[v12] = v59;
      Profile_EndInternal(NULL);
      return;
    }
    v44 = occlusionQuery->query[v12];
    fences = g_dx.occlusionQueryHeap.fences;
    g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence);
    if ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue >= fences[v44] )
    {
      if ( (unsigned int)v44 >= g_dx.occlusionQueryHeap.numQueries )
      {
        LODWORD(v61) = v44;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 251, ASSERT_TYPE_ASSERT, "( ( static_cast<uint>( query ) < handle->numQueries ) )", "( query ) = %i", v61) )
          __debugbreak();
      }
      v46 = g_dx.occlusionQueryHeap.data[v44];
      if ( v46 != 0xFFFFFFFFi64 )
        goto LABEL_47;
    }
    else
    {
      v46 = 0xFFFFFFFFi64;
    }
    *(_DWORD *)occlusionQuery |= 2u;
LABEL_47:
    v47 = occlusionQuery->samplesCovered[v12];
    if ( !(_DWORD)v47 )
    {
      LODWORD(v61) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 642, ASSERT_TYPE_ASSERT, "( ( spriteSamples > 0 ) )", "( spriteSamples ) = %i", v61) )
        __debugbreak();
    }
    if ( v46 > (unsigned __int64)v47 )
    {
      *(_DWORD *)occlusionQuery |= 2u;
      R_WarnOncePerFrame(R_WARN_OCCLUSION_QUERY, v46, (unsigned int)v47);
    }
    v49 = 0i64;
    *(float *)&v49 = (float)v46;
    v48 = v49;
    if ( v46 < 0 )
    {
      *(float *)&v49 = *(float *)&v49 + 1.8446744e19;
      v48 = v49;
    }
    v50 = (float)v47;
    v52 = v48;
    *(float *)&v52 = *(float *)&v48 / v50;
    _XMM1 = v52;
    __asm { vminss  xmm2, xmm1, xmm10 }
    if ( occlusionQuery->anyPortionOffscreen[v12] || v64 )
      v27 = 64;
    v54 = v27 | *(_DWORD *)occlusionQuery & 0xFFFFFFBF;
    goto LABEL_59;
  }
}

/*
==============
RB_FinishSpriteOcclusionQueries
==============
*/
void RB_FinishSpriteOcclusionQueries(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, OcclusionQuery *occlusionQuery)
{
  int v3; 
  LocalClientNum_t clientIndex; 
  __int64 v5; 
  __int64 i; 
  OcclusionQuery *v7; 
  __int64 v8; 
  int v9; 
  OcclusionQuery *v10; 
  int *v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  char *fmt; 
  __int64 v18; 

  v3 = 0;
  clientIndex = viewInfo->clientIndex;
  v5 = r_glob.backEndFrameCount % 2;
  for ( i = 0i64; i < 512; i = v8 )
  {
    v7 = &occlusionQueryArray[i];
    while ( (*(_BYTE *)v7 & 1) == 0 || !v7->issued[v5] || v7->localClientNum != clientIndex )
    {
      ++v3;
      ++i;
      if ( (__int64)++v7 >= (__int64)&marker_rb_query )
        return;
    }
    v8 = i + 1;
    v9 = v3 + 1;
    if ( i + 1 < 512 )
    {
      v10 = &occlusionQueryArray[v8];
      v11 = &occlusionQueryArray[v8].query[v5];
      do
      {
        if ( (*(_BYTE *)v10 & 1) == 0 )
          break;
        if ( !v10->issued[v5] )
          break;
        if ( v10->localClientNum != clientIndex )
          break;
        if ( *v11 != *(v11 - 17) + 1 )
          break;
        ++v9;
        ++v8;
        ++v10;
        v11 += 17;
      }
      while ( (__int64)v10 < (__int64)&marker_rb_query );
    }
    v12 = v9 - v3;
    if ( v9 - v3 > 0 )
    {
      v13 = (unsigned int)occlusionQueryArray[i].query[v5];
      if ( !g_dx.occlusionQueryHeap.heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 216, ASSERT_TYPE_ASSERT, "(handle->heap)", (const char *)&queryFormat, "handle->heap") )
        __debugbreak();
      if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
        __debugbreak();
      LODWORD(fmt) = v12;
      ((void (__fastcall *)(GfxDevice *, ID3D12QueryHeap *, _QWORD, _QWORD, char *, ID3D12Resource *, _QWORD))g_dx.immediateContext->m_pFunction[10].QueryInterface)(g_dx.immediateContext, g_dx.occlusionQueryHeap.heap, (unsigned int)g_dx.occlusionQueryHeap.queryType, (unsigned int)v13, fmt, g_dx.occlusionQueryHeap.buffer, 8 * (int)v13);
      if ( (int)v13 <= 0 )
      {
        LODWORD(v18) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 222, ASSERT_TYPE_ASSERT, "( ( startQuery > 0 ) )", "( startQuery ) = %i", v18) )
          __debugbreak();
      }
      if ( (unsigned int)v13 + v12 > g_dx.occlusionQueryHeap.numQueries )
      {
        LODWORD(v18) = v13 + v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 223, ASSERT_TYPE_ASSERT, "( ( startQuery + queryCount <= handle->numQueries ) )", "( startQuery + queryCount ) = %u", v18) )
          __debugbreak();
      }
      v14 = R_KickImmediateContext(D3D12XBOX_FLUSH_BOP_TEXTURE_L2_WRITEBACK);
      if ( (unsigned int)v13 < (unsigned int)v13 + v12 )
      {
        v15 = v13;
        v16 = v12;
        do
        {
          g_dx.occlusionQueryHeap.fences[v15++] = v14;
          --v16;
        }
        while ( v16 );
      }
    }
    v3 = v9;
  }
}

/*
==============
RB_FreeOcclusionQuery
==============
*/
void RB_FreeOcclusionQuery(unsigned __int16 handle)
{
  OcclusionQuery *v2; 
  int v3; 
  int v4; 

  if ( handle >= 0x200u )
  {
    v4 = 512;
    v3 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 951, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  Sys_EnterCriticalSection(CRITSECT_OCCLUSION_QUERY);
  if ( (!s_occlusionQueriesInited || !s_occlusionQueriesAllocated) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 956, ASSERT_TYPE_ASSERT, "(s_occlusionQueriesInited && s_occlusionQueriesAllocated)", (const char *)&queryFormat, "s_occlusionQueriesInited && s_occlusionQueriesAllocated") )
    __debugbreak();
  v2 = &occlusionQueryArray[handle];
  if ( (*(_BYTE *)v2 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 957, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  *(_DWORD *)v2 &= ~1u;
  Sys_LeaveCriticalSection(CRITSECT_OCCLUSION_QUERY);
}

/*
==============
RB_GetOcclusionQueryOffscreenRaycastHandle
==============
*/
__int64 RB_GetOcclusionQueryOffscreenRaycastHandle(unsigned __int16 handle)
{
  __int64 v2; 
  int v4; 
  int v5; 

  if ( handle >= 0x200u )
  {
    v5 = 512;
    v4 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1085, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = handle;
  if ( (*(_BYTE *)&occlusionQueryArray[v2] & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1086, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  return occlusionQueryArray[v2].offscreenRaycastHandle;
}

/*
==============
RB_GetOcclusionQueryOffscreenRaycastSent
==============
*/
bool RB_GetOcclusionQueryOffscreenRaycastSent(unsigned __int16 handle)
{
  OcclusionQuery *v2; 
  int v4; 
  int v5; 

  if ( handle >= 0x200u )
  {
    v5 = 512;
    v4 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1074, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = &occlusionQueryArray[handle];
  if ( (*(_BYTE *)v2 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1075, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  return (*(_DWORD *)v2 & 0x20) != 0;
}

/*
==============
RB_GetOcclusionQueryVisibility
==============
*/
float RB_GetOcclusionQueryVisibility(unsigned __int16 handle)
{
  __int64 v2; 
  int v4; 
  int v5; 

  if ( handle >= 0x200u )
  {
    v5 = 512;
    v4 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1062, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = handle;
  if ( (*(_BYTE *)&occlusionQueryArray[v2] & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1063, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  return occlusionQueryArray[v2].lastVisibility;
}

/*
==============
RB_GetSampleRectRelativeArea
==============
*/
float RB_GetSampleRectRelativeArea(GfxCmdBufSourceState *gfxSource, const vec3_t *position, int widthInPixels, int heightInPixels)
{
  signed int displayWidth; 
  int v9; 
  signed int displayHeight; 
  int v13; 
  int v15; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 432, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( (float)((float)((float)(position->v[0] * gfxSource->viewParms3D.viewProjectionMatrix.m.m[0].v[3]) + (float)(position->v[1] * gfxSource->viewParms3D.viewProjectionMatrix.m.m[1].v[3])) + (float)(position->v[2] * gfxSource->viewParms3D.viewProjectionMatrix.m.m[2].v[3])) <= 0.0 )
    return 0.0;
  displayWidth = vidConfig.displayWidth;
  v9 = 0;
  displayHeight = vidConfig.displayHeight;
  _mm_cvtepi32_ps((__m128i)vidConfig.displayWidth);
  _XMM6 = 0i64;
  _mm_cvtepi32_ps((__m128i)(unsigned int)widthInPixels);
  __asm { vroundss xmm0, xmm6, xmm3, 1 }
  _mm_cvtepi32_ps((__m128i)vidConfig.displayHeight);
  v13 = 0;
  if ( (int)*(float *)&_XMM0 >= 0 )
    v13 = (int)*(float *)&_XMM0;
  if ( (int)*(float *)&_XMM0 + widthInPixels <= (int)vidConfig.displayWidth )
    displayWidth = (int)*(float *)&_XMM0 + widthInPixels;
  _mm_cvtepi32_ps((__m128i)(unsigned int)heightInPixels);
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  v15 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 >= 0 )
    v9 = (int)*(float *)&_XMM1;
  if ( v15 + heightInPixels <= (int)vidConfig.displayHeight )
    displayHeight = v15 + heightInPixels;
  if ( displayWidth <= v13 || displayHeight <= v9 )
    return 0.0;
  else
    return (float)((displayWidth - v13) * (displayHeight - v9)) / (float)(heightInPixels * widthInPixels);
}

/*
==============
RB_HaveAnyOcclusionQueries
==============
*/
char RB_HaveAnyOcclusionQueries(LocalClientNum_t localClientNum)
{
  int *v2; 

  if ( (!s_occlusionQueriesInited || !s_occlusionQueriesAllocated) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 740, ASSERT_TYPE_ASSERT, "(s_occlusionQueriesInited && s_occlusionQueriesAllocated)", (const char *)&queryFormat, "s_occlusionQueriesInited && s_occlusionQueriesAllocated") )
    __debugbreak();
  v2 = (int *)occlusionQueryArray;
  while ( (*(_BYTE *)v2 & 1) == 0 || v2[8] != localClientNum )
  {
    v2 += 17;
    if ( v2 == &marker_rb_query )
      return 0;
  }
  return 1;
}

/*
==============
RB_InitOcclusionQueries
==============
*/
void RB_InitOcclusionQueries(void)
{
  OcclusionQuery *v0; 
  __int64 v1; 

  Sys_EnterCriticalSection(CRITSECT_OCCLUSION_QUERY);
  if ( !s_occlusionQueriesInited )
  {
    v0 = occlusionQueryArray;
    v1 = 512i64;
    do
    {
      *(_QWORD *)v0 = 0i64;
      *(_QWORD *)&v0->position.y = 0i64;
      *(_QWORD *)&v0->width = 0i64;
      *(_QWORD *)&v0->depthBias = 0i64;
      *(_QWORD *)&v0->hitNum = 0i64;
      *(_QWORD *)v0->issued = 0i64;
      *(_QWORD *)&v0->query[1] = 0i64;
      *(_QWORD *)&v0->samplesCovered[1] = 0i64;
      v0->localClientNum = -1;
      ++v0;
      --v1;
    }
    while ( v1 );
    s_occlusionQueriesInited = 1;
  }
  Sys_LeaveCriticalSection(CRITSECT_OCCLUSION_QUERY);
}

/*
==============
RB_InitOcclusionQueryBatch
==============
*/
GfxVertex *RB_InitOcclusionQueryBatch(GfxCmdBufContext *gfxContext, GfxColor color, bool setTechnique)
{
  materialCommands_t *Tess; 
  int vertexCount_low; 
  GfxVertex *result; 
  GfxCmdBufContext v8; 

  if ( setTechnique )
  {
    v8 = *gfxContext;
    RB_SetIdentity(&v8);
    v8 = *gfxContext;
    RB_SetTessTechnique(&v8, rgp.occlusionQueryMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_COUNT_GEO);
  }
  v8 = *gfxContext;
  Tess = R_GetTess(&v8);
  if ( Tess->vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 77, ASSERT_TYPE_ASSERT, "(tess.vertexCount == 0)", (const char *)&queryFormat, "tess.vertexCount == 0") )
    __debugbreak();
  if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 78, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
    __debugbreak();
  vertexCount_low = LOWORD(Tess->vertexCount);
  Tess->indices[Tess->indexCount] = vertexCount_low + 3;
  Tess->indices[Tess->indexCount + 1] = vertexCount_low;
  Tess->indices[Tess->indexCount + 2] = vertexCount_low + 2;
  Tess->indices[Tess->indexCount + 3] = vertexCount_low + 2;
  Tess->indices[Tess->indexCount + 4] = vertexCount_low;
  Tess->indices[Tess->indexCount + 5] = vertexCount_low + 1;
  result = &Tess->verts[vertexCount_low];
  result->normal.packed = 1073643391;
  result->texCoord = 0i64;
  result->color = color;
  result[1].normal.packed = 1073643391;
  result[1].texCoord = (vec2_t)1065353216i64;
  result[1].color = color;
  result[2].normal.packed = 1073643391;
  result[2].texCoord.v[0] = 1.0;
  result[2].texCoord.v[1] = 1.0;
  result[2].color = color;
  result[3].normal.packed = 1073643391;
  result[3].texCoord.v[0] = 0.0;
  result[3].texCoord.v[1] = 1.0;
  result[3].color = color;
  Tess->vertexCount += 4;
  Tess->indexCount += 6;
  return result;
}

/*
==============
RB_InsertFrameBeginQuery
==============
*/
void RB_InsertFrameBeginQuery(void)
{
  R_LockGfxImmediateContext();
  RB_WriteTimestamp(&s_frameQueries.queryHistory[s_frameQueries.queryIndex & 3]);
  R_UnlockGfxImmediateContext();
}

/*
==============
RB_InsertFrameBeginQuery_GPUTimer
==============
*/
void RB_InsertFrameBeginQuery_GPUTimer(void)
{
  ;
}

/*
==============
RB_InsertFrameEndQuery
==============
*/
void RB_InsertFrameEndQuery(void)
{
  R_LockGfxImmediateContext();
  RB_WriteTimestamp(&s_frameQueries.queryHistory[s_frameQueries.queryIndex & 3].frameEnd);
  R_FlushImmediateContext();
  R_UnlockGfxImmediateContext();
  ++s_frameQueries.queryIndex;
}

/*
==============
RB_InsertFrameEndQuery_GPUTimer
==============
*/
void RB_InsertFrameEndQuery_GPUTimer(void)
{
  ;
}

/*
==============
RB_InsertWaitFlipBeginQuery
==============
*/
void RB_InsertWaitFlipBeginQuery(void)
{
  R_LockGfxImmediateContext();
  RB_WriteTimestamp(&s_frameQueries.queryHistory[s_frameQueries.queryIndex & 3].waitBegin);
  R_UnlockGfxImmediateContext();
}

/*
==============
RB_InsertWaitFlipEndQuery
==============
*/
void RB_InsertWaitFlipEndQuery(void)
{
  R_LockGfxImmediateContext();
  RB_WriteTimestamp(&s_frameQueries.queryHistory[s_frameQueries.queryIndex & 3].waitEnd);
  R_UnlockGfxImmediateContext();
}

/*
==============
RB_InvalidateOcclusionQuerySize
==============
*/
void RB_InvalidateOcclusionQuerySize(unsigned __int16 handle)
{
  OcclusionQuery *v2; 
  int v3; 
  int v4; 

  if ( handle >= 0x200u )
  {
    v4 = 512;
    v3 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1038, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = &occlusionQueryArray[handle];
  if ( (*(_BYTE *)v2 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1039, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  *(_DWORD *)v2 &= ~0x10u;
}

/*
==============
RB_OcclusionQueryOffscreenRaycastSent
==============
*/
void RB_OcclusionQueryOffscreenRaycastSent(unsigned __int16 handle, unsigned int raycastHandle)
{
  __int64 v4; 
  int v5; 
  int v6; 

  if ( handle >= 0x200u )
  {
    v6 = 512;
    v5 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 997, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v4 = handle;
  if ( (*(_BYTE *)&occlusionQueryArray[v4] & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 998, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  *(_DWORD *)&occlusionQueryArray[v4] |= 0x20u;
  occlusionQueryArray[v4].offscreenRaycastHandle = raycastHandle;
}

/*
==============
RB_OcclusionQueryUseOffscreenRaycastResult
==============
*/
bool RB_OcclusionQueryUseOffscreenRaycastResult(unsigned __int16 handle)
{
  OcclusionQuery *v2; 
  int v4; 
  int v5; 

  if ( handle >= 0x200u )
  {
    v5 = 512;
    v4 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1096, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = &occlusionQueryArray[handle];
  if ( (*(_BYTE *)v2 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1097, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  return (*(_DWORD *)v2 & 0x40) != 0;
}

/*
==============
RB_Query_Archive
==============
*/
void RB_Query_Archive(MemoryFile *memFile)
{
  OcclusionQuery *v2; 
  __int64 v3; 
  bool *v4; 

  v2 = occlusionQueryArray;
  v3 = 512i64;
  if ( MemFile_IsWriting(memFile) )
  {
    do
    {
      MemFile_WriteData(memFile, 0x2Cui64, v2++);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v4 = &occlusionQueryArray[0].issued[1];
    do
    {
      MemFile_ReadData(memFile, 0x2Cui64, v2++);
      *(_WORD *)(v4 - 1) = 0;
      v4 += 68;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
RB_Query_Restore
==============
*/
void RB_Query_Restore(MemoryFile *memFile)
{
  bool *v2; 
  OcclusionQuery *v3; 
  __int64 v4; 

  v2 = &occlusionQueryArray[0].issued[1];
  v3 = occlusionQueryArray;
  v4 = 512i64;
  do
  {
    MemFile_ReadData(memFile, 0x2Cui64, v3++);
    *(_WORD *)(v2 - 1) = 0;
    v2 += 68;
    --v4;
  }
  while ( v4 );
}

/*
==============
RB_Query_Save
==============
*/
void RB_Query_Save(MemoryFile *memFile)
{
  OcclusionQuery *v2; 
  __int64 v3; 

  v2 = occlusionQueryArray;
  v3 = 512i64;
  do
  {
    MemFile_WriteData(memFile, 0x2Cui64, v2++);
    --v3;
  }
  while ( v3 );
}

/*
==============
RB_SetOcclusionQueryDepthHack
==============
*/
void RB_SetOcclusionQueryDepthHack(unsigned __int16 handle, bool inDepthHack)
{
  OcclusionQuery *v4; 
  int v5; 
  int v6; 

  if ( handle >= 0x200u )
  {
    v6 = 512;
    v5 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1049, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v4 = &occlusionQueryArray[handle];
  if ( (*(_BYTE *)v4 & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1050, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  *(_DWORD *)v4 &= ~0x80u;
  *(_DWORD *)v4 |= inDepthHack << 7;
}

/*
==============
RB_SetOcclusionQueryPosition
==============
*/
void RB_SetOcclusionQueryPosition(unsigned __int16 handle, const vec3_t *position)
{
  __int64 v4; 
  int v5; 
  int v6; 

  if ( handle >= 0x200u )
  {
    v6 = 512;
    v5 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1011, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v4 = handle;
  if ( (*(_BYTE *)&occlusionQueryArray[v4] & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1012, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  occlusionQueryArray[v4].position.v[0] = position->v[0];
  occlusionQueryArray[v4].position.v[1] = position->v[1];
  occlusionQueryArray[v4].position.v[2] = position->v[2];
  *(_DWORD *)&occlusionQueryArray[v4] |= 8u;
}

/*
==============
RB_SetOcclusionQuerySize
==============
*/
void RB_SetOcclusionQuerySize(unsigned __int16 handle, float width, float height)
{
  __int64 v4; 
  int v5; 
  int v6; 

  if ( handle >= 0x200u )
  {
    v6 = 512;
    v5 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1025, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v4 = handle;
  if ( (*(_BYTE *)&occlusionQueryArray[v4] & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1026, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  *(_DWORD *)&occlusionQueryArray[v4] |= 0x10u;
  occlusionQueryArray[v4].width = width;
  occlusionQueryArray[v4].height = height;
}

/*
==============
RB_TessRectBillboard
==============
*/
void RB_TessRectBillboard(GfxCmdBufContext *gfxContext, const vec3_t *inPos, bool isWorldPos, bool isWorldWidthHeight, float widthInPixels, float heightInPixels, GfxColor color, float depthBias, GfxViewport *viewport, bool setTechnique, unsigned int *outSamplesCovered, bool *outAnyPortionOffscreen)
{
  GfxCmdBufSourceState *source; 
  float v17; 
  __int128 v18; 
  __int128 v29; 
  float v38; 
  float v39; 
  float v40; 
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
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  bool v58; 
  float width; 
  float v60; 
  float height; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  bool v73; 
  GfxVertex *inited; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  bool v79; 
  GfxCmdBufContext v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 

  *outSamplesCovered = 0;
  source = gfxContext->source;
  v79 = setTechnique;
  v17 = inPos->v[0];
  if ( isWorldPos )
  {
    *((_QWORD *)&v18 + 1) = 0i64;
    *(double *)&v18 = v17 * 4096.0;
    _XMM0 = v18;
    __asm { vcvttsd2si rcx, xmm0 }
    if ( (unsigned __int64)(_RCX + 0x80000000i64) > 0xFFFFFFFF )
      goto LABEL_6;
    _XMM1 = COERCE_UNSIGNED_INT64(inPos->v[1] * 4096.0);
    __asm { vcvttsd2si rcx, xmm1 }
    if ( (unsigned __int64)(_RCX + 0x80000000i64) > 0xFFFFFFFF )
      goto LABEL_6;
    _XMM1 = COERCE_UNSIGNED_INT64(inPos->v[2] * 4096.0);
    __asm { vcvttsd2si rcx, xmm1 }
    if ( (unsigned __int64)(_RCX + 0x80000000i64) > 0xFFFFFFFF )
    {
LABEL_6:
      R_WarnOncePerFrame(R_WARN_PRECISE_COORD_OUTSIDE_INTEGER_RANGE, "sun or occlusion query");
      *(float *)&_XMM4 = inPos->v[0] - source->viewParms3D.camera.origin.v[0];
      *(float *)&_XMM3 = inPos->v[2] - source->viewParms3D.camera.origin.v[2];
      *(float *)&_XMM5 = inPos->v[1] - source->viewParms3D.camera.origin.v[1];
    }
    else
    {
      _XMM0 = 0i64;
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, r8d }
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v29 = *(double *)&_XMM1 * 0.000244140625;
      _XMM2 = v29;
      __asm { vcvtsi2sd xmm0, xmm0, edx }
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v29;
      __asm { vcvtsd2ss xmm4, xmm0, xmm0 }
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, r9d }
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
      _XMM1 = v29;
      __asm
      {
        vcvtsd2ss xmm3, xmm1, xmm1
        vcvtsd2ss xmm5, xmm2, xmm2
      }
    }
    v17 = *(float *)&_XMM4 + (float)(depthBias * source->viewParms3D.camera.axis.m[0].v[0]);
    v38 = *(float *)&_XMM3 + (float)(depthBias * source->viewParms3D.camera.axis.m[0].v[2]);
    v39 = *(float *)&_XMM5 + (float)(depthBias * source->viewParms3D.camera.axis.m[0].v[1]);
  }
  else
  {
    v39 = inPos->v[1];
    v38 = inPos->v[2];
  }
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 207, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world", setTechnique) )
    __debugbreak();
  v41 = (float)((float)(v39 * source->viewParms3D.viewProjectionMatrix.m.m[1].v[0]) + (float)(v17 * source->viewParms3D.viewProjectionMatrix.m.m[0].v[0])) + (float)(v38 * source->viewParms3D.viewProjectionMatrix.m.m[2].v[0]);
  v40 = v41;
  v42 = (float)((float)(v17 * source->viewParms3D.viewProjectionMatrix.m.m[0].v[1]) + (float)(v39 * source->viewParms3D.viewProjectionMatrix.m.m[1].v[1])) + (float)(v38 * source->viewParms3D.viewProjectionMatrix.m.m[2].v[1]);
  v43 = (float)((float)(v17 * source->viewParms3D.viewProjectionMatrix.m.m[0].v[2]) + (float)(v39 * source->viewParms3D.viewProjectionMatrix.m.m[1].v[2])) + (float)(v38 * source->viewParms3D.viewProjectionMatrix.m.m[2].v[2]);
  v44 = (float)((float)(v17 * source->viewParms3D.viewProjectionMatrix.m.m[0].v[3]) + (float)(v39 * source->viewParms3D.viewProjectionMatrix.m.m[1].v[3])) + (float)(v38 * source->viewParms3D.viewProjectionMatrix.m.m[2].v[3]);
  v84 = v44;
  v81 = v41;
  v82 = v42;
  v83 = v43;
  if ( isWorldPos )
  {
    v40 = v41 + source->viewParms3D.viewProjectionMatrix.m.m[3].v[0];
    v42 = v42 + source->viewParms3D.viewProjectionMatrix.m.m[3].v[1];
    v43 = v43 + source->viewParms3D.viewProjectionMatrix.m.m[3].v[2];
    v44 = v44 + source->viewParms3D.viewProjectionMatrix.m.m[3].v[3];
    v81 = v40;
    v82 = v42;
    v83 = v43;
    v84 = v44;
  }
  v45 = 1.0 / v44;
  v46 = v40 * (float)(1.0 / v44);
  v48 = v42 * (float)(1.0 / v44);
  v47 = v48;
  if ( (float)(v43 * (float)(1.0 / v44)) >= 0.0 )
  {
    if ( isWorldWidthHeight )
    {
      v49 = (float)(widthInPixels * gfxContext->source->viewParms3D.projectionMatrix.m.m[0].v[0]) * 0.5;
      v50 = v49 * v45;
      v51 = (float)(heightInPixels * gfxContext->source->viewParms3D.projectionMatrix.m.m[1].v[1]) * 0.5;
      v52 = v51 * v45;
      if ( (float)(v49 * v45) >= 0.0 && (float)(v51 * v45) >= 0.0 )
      {
        v53 = v46 + v50;
        if ( (float)(v46 + v50) >= -1.0 )
        {
          v54 = v46 - v50;
          if ( (float)(v46 - v50) <= 1.0 )
          {
            v55 = v48 + v52;
            if ( (float)(v48 + v52) >= -1.0 )
            {
              v57 = v48 - v52;
              v56 = v57;
              if ( v57 <= 1.0 )
              {
                v58 = v53 >= 1.0 || v54 <= -1.0 || v55 >= 1.0 || v57 <= -1.0;
                *outAnyPortionOffscreen = v58;
                width = (float)viewport->width;
                v60 = width * 0.5;
                height = (float)viewport->height;
                v62 = height * 0.5;
                v63 = v62 - (float)(v62 * v56);
                v64 = (float)(v53 + 1.0) * v60;
                v65 = roundf((float)(v54 + 1.0) * v60);
                roundf(v64);
                roundf(v63);
                v66 = (float)(v63 - roundf(v62 - (float)(v62 * v55))) * (float)(v64 - v65);
LABEL_40:
                *outSamplesCovered = (int)v66;
                if ( (int)v66 )
                {
                  v80 = *gfxContext;
                  inited = RB_InitOcclusionQueryBatch(&v80, color, v79);
                  v75 = v82;
                  v76 = v83;
                  v77 = v84;
                  v78 = v81;
                  inited->xyzw.v[0] = v81;
                  inited->xyzw.v[1] = v75;
                  inited->xyzw.v[2] = v76;
                  inited->xyzw.v[3] = v77;
                  inited[1].xyzw.v[0] = v78;
                  inited[1].xyzw.v[1] = v75;
                  inited[1].xyzw.v[2] = v76;
                  inited[1].xyzw.v[3] = v77;
                  inited[2].xyzw.v[0] = v78;
                  inited[2].xyzw.v[1] = v75;
                  inited[2].xyzw.v[2] = v76;
                  inited[2].xyzw.v[3] = v77;
                  inited[3].xyzw.v[0] = v78;
                  inited[3].xyzw.v[1] = v75;
                  inited[3].xyzw.v[2] = v76;
                  inited[3].xyzw.v[3] = v77;
                  inited->xyzw.v[0] = v49 + inited->xyzw.v[0];
                  inited->xyzw.v[1] = v51 + inited->xyzw.v[1];
                  inited[1].xyzw.v[0] = v49 + inited[1].xyzw.v[0];
                  inited[1].xyzw.v[1] = inited[1].xyzw.v[1] - v51;
                  inited[2].xyzw.v[0] = inited[2].xyzw.v[0] - v49;
                  inited[2].xyzw.v[1] = inited[2].xyzw.v[1] - v51;
                  inited[3].xyzw.v[0] = inited[3].xyzw.v[0] - v49;
                  inited[3].xyzw.v[1] = v51 + inited[3].xyzw.v[1];
                }
                return;
              }
            }
          }
        }
      }
    }
    else
    {
      v67 = (float)viewport->width;
      v68 = widthInPixels / v67;
      v69 = (float)viewport->height;
      v70 = heightInPixels / v69;
      if ( (float)(v46 + (float)(widthInPixels / v67)) >= -1.0 && (float)(v46 - v68) <= 1.0 )
      {
        v71 = v48 + v70;
        if ( (float)(v48 + v70) >= -1.0 )
        {
          v72 = v48 - v70;
          if ( (float)(v47 - v70) <= 1.0 )
          {
            v73 = (float)(v46 + v68) >= 1.0 || (float)(v46 - v68) <= -1.0 || v71 >= 1.0 || v72 <= -1.0;
            *outAnyPortionOffscreen = v73;
            v51 = v84 * v70;
            v66 = widthInPixels * heightInPixels;
            v49 = v84 * v68;
            goto LABEL_40;
          }
        }
      }
    }
    *outAnyPortionOffscreen = 1;
  }
}

/*
==============
RB_WriteTimestamp
==============
*/
void RB_WriteTimestamp(void *address)
{
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ((void (__fastcall *)(GfxDevice *, void *, _QWORD, _QWORD, int))g_dx.immediateContext->m_pFunction[23].AddRef)(g_dx.immediateContext, address, 0i64, 0i64, 1);
}

/*
==============
R_GetLatestFrameDuration
==============
*/

float __fastcall R_GetLatestFrameDuration(__int64 a1, double _XMM1_8)
{
  unsigned __int64 frameBegin; 
  unsigned __int64 v6; 
  unsigned __int64 v12; 
  unsigned __int64 v18; 
  unsigned __int64 v24; 
  float v27; 

  frameBegin = 0i64;
  s_frameQueries.latestQuery.frameBegin = 0i64;
  s_frameQueries.latestQuery.waitBegin = 0i64;
  s_frameQueries.latestQuery.waitEnd = 0i64;
  s_frameQueries.latestQuery.frameEnd = 0i64;
  _YMM1 = *(__m256i *)s_frameQueries.queryHistory;
  __asm { vpextrq rax, xmm1, 1 }
  if ( *(_QWORD *)&_XMM1_8 < _RAX )
  {
    __asm { vextractf128 xmm0, ymm1, 1 }
    v6 = _XMM0;
    if ( _RAX < (unsigned __int64)_XMM0 )
    {
      __asm
      {
        vextractf128 xmm0, ymm1, 1
        vpextrq rax, xmm0, 1
      }
      if ( v6 < _RAX && _XMM1_8 != 0.0 )
      {
        s_frameQueries.latestQuery = *s_frameQueries.queryHistory;
        frameBegin = s_frameQueries.latestQuery.frameBegin;
      }
    }
  }
  _YMM1 = (__m256i)s_frameQueries.queryHistory[1];
  __asm { vpextrq rax, xmm1, 1 }
  if ( *(_QWORD *)&_XMM1_8 < _RAX )
  {
    __asm { vextractf128 xmm0, ymm1, 1 }
    v12 = _XMM0;
    if ( _RAX < (unsigned __int64)_XMM0 )
    {
      __asm
      {
        vextractf128 xmm0, ymm1, 1
        vpextrq rax, xmm0, 1
      }
      if ( v12 < _RAX && *(_QWORD *)&_XMM1_8 > frameBegin )
      {
        s_frameQueries.latestQuery = s_frameQueries.queryHistory[1];
        frameBegin = s_frameQueries.latestQuery.frameBegin;
      }
    }
  }
  _YMM1 = (__m256i)s_frameQueries.queryHistory[2];
  __asm { vpextrq rax, xmm1, 1 }
  if ( *(_QWORD *)&_XMM1_8 < _RAX )
  {
    __asm { vextractf128 xmm0, ymm1, 1 }
    v18 = _XMM0;
    if ( _RAX < (unsigned __int64)_XMM0 )
    {
      __asm
      {
        vextractf128 xmm0, ymm1, 1
        vpextrq rax, xmm0, 1
      }
      if ( v18 < _RAX && *(_QWORD *)&_XMM1_8 > frameBegin )
      {
        s_frameQueries.latestQuery = s_frameQueries.queryHistory[2];
        frameBegin = s_frameQueries.latestQuery.frameBegin;
      }
    }
  }
  _YMM1 = (__m256i)s_frameQueries.queryHistory[3];
  __asm { vpextrq rax, xmm1, 1 }
  if ( *(_QWORD *)&_XMM1_8 < _RAX )
  {
    __asm { vextractf128 xmm0, ymm1, 1 }
    v24 = _XMM0;
    if ( _RAX < (unsigned __int64)_XMM0 )
    {
      __asm
      {
        vextractf128 xmm0, ymm1, 1
        vpextrq rax, xmm0, 1
      }
      if ( v24 < _RAX && *(_QWORD *)&_XMM1_8 > frameBegin )
      {
        s_frameQueries.latestQuery = s_frameQueries.queryHistory[3];
        frameBegin = s_frameQueries.latestQuery.frameBegin;
      }
    }
  }
  v27 = (float)((s_frameQueries.latestQuery.frameEnd + s_frameQueries.latestQuery.waitBegin - s_frameQueries.latestQuery.waitEnd - frameBegin) / 0x64);
  return v27 * 0.001;
}

/*
==============
R_UpdateOverTime
==============
*/
float R_UpdateOverTime(float fCurrent, float fGoal, int iFadeInTime, int iFadeOutTime, int frametime)
{
  float v7; 
  __int64 v9; 

  v7 = fCurrent;
  if ( frametime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 967, ASSERT_TYPE_ASSERT, "( ( frametime >= 0 ) )", "( frametime ) = %i", frametime) )
    __debugbreak();
  if ( iFadeInTime < 0 )
  {
    LODWORD(v9) = iFadeInTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 968, ASSERT_TYPE_ASSERT, "( ( iFadeInTime >= 0 ) )", "( iFadeInTime ) = %i", v9) )
      __debugbreak();
  }
  if ( iFadeOutTime < 0 )
  {
    LODWORD(v9) = iFadeOutTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 969, ASSERT_TYPE_ASSERT, "( ( iFadeOutTime >= 0 ) )", "( iFadeOutTime ) = %i", v9) )
      __debugbreak();
  }
  if ( fCurrent >= fGoal )
  {
    if ( fCurrent <= fGoal )
      return v7;
    if ( iFadeOutTime > 0 )
    {
      v7 = fCurrent - (float)((float)frametime / (float)iFadeOutTime);
      if ( v7 >= fGoal )
        return v7;
    }
    return fGoal;
  }
  if ( iFadeInTime <= 0 )
    return fGoal;
  v7 = fCurrent + (float)((float)frametime / (float)iFadeInTime);
  if ( v7 > fGoal )
    return fGoal;
  return v7;
}

