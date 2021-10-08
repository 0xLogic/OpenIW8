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
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  _BYTE *v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  GfxBufferCreationContext v11; 
  ID3D12QueryHeap *v12; 
  int v13[4]; 
  D3D12_RESOURCE_DESC v14; 

  Sys_EnterCriticalSection(CRITSECT_OCCLUSION_QUERY);
  if ( s_occlusionQueriesAllocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 822, ASSERT_TYPE_ASSERT, "(!s_occlusionQueriesAllocated)", (const char *)&queryFormat, "!s_occlusionQueriesAllocated") )
    __debugbreak();
  v13[1] = 1026;
  v13[0] = 0;
  v13[2] = 1;
  v0 = ((__int64 (__fastcall *)(ID3D12Device *, int *, GUID *, ID3D12QueryHeap **))g_dx.d3d12device->m_pFunction[13].QueryInterface)(g_dx.d3d12device, v13, &GUID_0d9658ae_ed45_469e_a61d_970ec583cab4, &v12);
  if ( v0 < 0 )
  {
    v1 = R_ErrorDescription(v0);
    Sys_Error((const ObfuscateErrorText)&stru_1444552C0, 123i64, v1);
  }
  g_dx.occlusionQueryHeap.heap = v12;
  *(_QWORD *)&g_dx.occlusionQueryHeap.used = 1i64;
  v11.zoneName = (char *)&queryFormat.fmt + 3;
  g_dx.occlusionQueryHeap.numQueries = 1026;
  v11.objectName = "query heap readback buffer";
  __asm { vmovups xmm0, [rsp+0D8h+var_98] }
  v14.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
  v14.Alignment = 0i64;
  *(_QWORD *)&v14.DepthOrArraySize = 65537i64;
  v14.Width = 8208i64;
  v14.Height = 1;
  v14.SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  *(_QWORD *)&v14.Layout = 1i64;
  __asm { vmovdqa [rsp+0D8h+var_98], xmm0 }
  g_dx.occlusionQueryHeap.data = (unsigned __int64 *)R_DX12_CreateBuffer(&v14, D3D12_HEAP_TYPE_READBACK, D3D12_RESOURCE_STATE_COPY_DEST, NULL, NULL, 0x2010u, &g_dx.occlusionQueryHeap.buffer, &v11);
  g_dx.occlusionQueryHeap.fences = (unsigned __int64 *)PMem_Alloc(0x2010ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "query heap fences");
  memset_0(g_dx.occlusionQueryHeap.fences, 0, 0x2010ui64);
  used = g_dx.occlusionQueryHeap.used;
  v4 = 48i64;
  v5 = 44i64;
  v6 = 2i64;
  do
  {
    v7 = (char *)occlusionQueryArray + v5;
    v8 = 512i64;
    do
    {
      if ( used >= g_dx.occlusionQueryHeap.numQueries )
      {
        LODWORD(v10) = used;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 180, ASSERT_TYPE_ASSERT, "( ( handle->used < handle->numQueries ) )", "( handle->used ) = %u", v10) )
          __debugbreak();
        used = g_dx.occlusionQueryHeap.used;
      }
      v9 = used++;
      *(_DWORD *)&v7[v4 - v5] = v9;
      *v7 = 0;
      v7 += 68;
      g_dx.occlusionQueryHeap.used = used;
      --v8;
    }
    while ( v8 );
    v4 += 4i64;
    ++v5;
    --v6;
  }
  while ( v6 );
  s_occlusionQueriesAllocated = 1;
  Sys_LeaveCriticalSection(CRITSECT_OCCLUSION_QUERY);
}

/*
==============
RB_AllocOcclusionQuery
==============
*/

__int64 __fastcall RB_AllocOcclusionQuery(LocalClientNum_t localClientNum, const vec3_t *position, bool isWorldPos, double depthBias)
{
  unsigned __int16 v9; 
  unsigned int v11; 
  __int64 result; 
  unsigned int v13; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  Sys_EnterCriticalSection(CRITSECT_OCCLUSION_QUERY);
  if ( (!s_occlusionQueriesInited || !s_occlusionQueriesAllocated) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 900, ASSERT_TYPE_ASSERT, "(s_occlusionQueriesInited && s_occlusionQueriesAllocated)", (const char *)&queryFormat, "s_occlusionQueriesInited && s_occlusionQueriesAllocated") )
    __debugbreak();
  v9 = 0;
  while ( 1 )
  {
    _R8 = &occlusionQueryArray[v9];
    if ( (*(_DWORD *)_R8 & 1) == 0 )
      break;
    if ( ++v9 >= 0x200u )
    {
      Sys_LeaveCriticalSection(CRITSECT_OCCLUSION_QUERY);
      R_WarnOncePerFrame(R_WARN_MAX_OCCLUSION_QUERIES, 512i64);
      result = 0xFFFFi64;
      goto LABEL_13;
    }
  }
  v11 = *(_DWORD *)_R8;
  if ( position )
  {
    *(_DWORD *)_R8 = v11 & 0xFFFFFFF9 | (4 * isWorldPos) | 9;
    _R8->position.v[0] = position->v[0];
    _R8->position.v[1] = position->v[1];
    _R8->position.v[2] = position->v[2];
    v13 = *(_DWORD *)_R8;
  }
  else
  {
    v13 = v11 & 0xFFFFFFF1 | (4 * isWorldPos) & 0xFFF7 | 1;
  }
  _R8->lastVisibility = 0.0;
  *(_DWORD *)_R8 = v13 & 0xFFFFFF1F;
  __asm { vmovss  dword ptr [r8+18h], xmm6 }
  _R8->localClientNum = localClientNum;
  *(_QWORD *)&_R8->hitNum = 0i64;
  *(_WORD *)_R8->issued = 0;
  Sys_LeaveCriticalSection(CRITSECT_OCCLUSION_QUERY);
  result = v9;
LABEL_13:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
RB_DrawOcclusionQueries
==============
*/
void RB_DrawOcclusionQueries(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  unsigned int clientIndex; 
  OcclusionQuery *v6; 
  OcclusionQuery *v7; 
  materialCommands_t *Tess; 
  materialCommands_t *v11; 
  __int64 v14; 
  unsigned int maxClientRenderViews; 
  GfxCmdBufContext v16; 

  clientIndex = viewInfo->clientIndex;
  _RSI = gfxContext;
  if ( (!s_occlusionQueriesInited || !s_occlusionQueriesAllocated) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 760, ASSERT_TYPE_ASSERT, "(s_occlusionQueriesInited && s_occlusionQueriesAllocated)", (const char *)&queryFormat, "s_occlusionQueriesInited && s_occlusionQueriesAllocated") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 761, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( clientIndex >= gfxCfg.maxClientRenderViews )
  {
    maxClientRenderViews = gfxCfg.maxClientRenderViews;
    LODWORD(v14) = clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 762, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientRenderViews )", "localClientNum doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", v14, maxClientRenderViews) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+78h+var_38], xmm0
  }
  RB_SetIdentity(&v16);
  v6 = occlusionQueryArray;
  do
  {
    v7 = v6;
    if ( (*(_BYTE *)v6 & 1) != 0 && v6->localClientNum == clientIndex )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+78h+var_38], xmm0
      }
      RB_DrawOcclusionQuerySprite(&v16, viewInfo, v6);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+78h+var_38], xmm0
      }
      Tess = R_GetTess(&v16);
      v11 = Tess;
      if ( Tess->vertexCount )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rsp+78h+var_38], xmm0
        }
        RB_EndTessSurfaceInternal(&v16, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
      }
      else
      {
        if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
          __debugbreak();
        v11->viewStatsTarget = GFX_VIEW_STATS_INVALID;
        v11->primStatsTarget = GFX_PRIM_STATS_INVALID;
      }
    }
    ++v6;
  }
  while ( (__int64)v6 < (__int64)&marker_rb_query );
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+78h+var_38], xmm0
  }
  RB_FinishSpriteOcclusionQueries(&v16, viewInfo, v7);
}

/*
==============
RB_DrawOcclusionQuerySprite
==============
*/
void RB_DrawOcclusionQuerySprite(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, OcclusionQuery *occlusionQuery)
{
  int v14; 
  __int64 v15; 
  GfxCmdBufSourceState *source; 
  char v18; 
  int hitNum; 
  int v27; 
  char *Value; 
  unsigned int *v29; 
  unsigned int v30; 
  _QWORD *v31; 
  char *v32; 
  __int64 v33; 
  unsigned __int64 v34; 
  ThreadContext CurrentThreadContext; 
  int v36; 
  int v37; 
  GfxCmdBufState *state; 
  GfxDepthRangeType v55; 
  int v56; 
  bool v59; 
  bool v60; 
  __int64 v64; 
  unsigned __int64 *fences; 
  __int64 v66; 
  unsigned __int64 v67; 
  unsigned int v74; 
  bool v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v80; 
  char v81; 
  float fmt; 
  __int64 v83; 
  float v84; 
  __int64 v85; 
  __int64 v86; 
  float v87; 
  bool v88; 
  unsigned int v89[3]; 
  GfxViewport v90; 
  GfxCmdBufContext v91; 
  GfxCmdBufContext v92; 
  GfxViewport outViewport; 
  vec3_t end; 
  tmat44_t<vec4_t> in2; 

  v88 = 0;
  _R13 = gfxContext;
  _RDI = occlusionQuery;
  _R12 = viewInfo;
  if ( !occlusionQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 559, ASSERT_TYPE_ASSERT, "(occlusionQuery)", (const char *)&queryFormat, "occlusionQuery") )
    __debugbreak();
  if ( (*(_BYTE *)_RDI & 8) != 0 )
  {
    v14 = r_glob.backEndFrameCount % 2;
    if ( (unsigned int)(r_glob.backEndFrameCount % 2) >= 2 )
    {
      LODWORD(v83) = r_glob.backEndFrameCount % 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 565, ASSERT_TYPE_ASSERT, "(unsigned)( queryIndex ) < (unsigned)( ( sizeof( *array_counter( occlusionQuery->query ) ) + 0 ) )", "queryIndex doesn't index ARRAY_COUNT( occlusionQuery->query )\n\t%i not in [0, %i)", v83, 2) )
        __debugbreak();
    }
    v15 = v14;
    if ( !_RDI->query[v14] )
    {
      source = _R13->source;
      *(float *)&_XMM0 = RB_GetSampleRectRelativeArea(_R13->source, &_RDI->position, 16, 16);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm0, xmm1
        vmovss  dword ptr [rdi+1Ch], xmm0
      }
      if ( !v18 )
      {
        __asm
        {
          vmovss  xmm3, cs:__real@48800000
          vmulss  xmm0, xmm3, dword ptr [rdi+4]
        }
        hitNum = _RDI->hitNum;
        __asm
        {
          vaddss  xmm1, xmm0, dword ptr [rdx]
          vmulss  xmm0, xmm3, dword ptr [rdi+8]
          vmovss  dword ptr [rbp+90h+end], xmm1
          vaddss  xmm1, xmm0, dword ptr [rdx+4]
          vmulss  xmm0, xmm3, dword ptr [rdi+0Ch]
          vmovss  dword ptr [rbp+90h+end+4], xmm1
          vaddss  xmm1, xmm0, dword ptr [rdx+8]
          vmovss  dword ptr [rbp+90h+end+8], xmm1
        }
        v27 = R_LightSightTrace(hitNum, &source->viewParms3D.camera.origin, &end, 0, 8195);
        _RDI->hitNum = v27;
        if ( v27 )
          _RDI->lastVisibility = 0.0;
      }
      return;
    }
    __asm
    {
      vmovaps [rsp+190h+var_60], xmm8
      vmovaps [rsp+190h+var_70], xmm9
      vmovaps [rsp+190h+var_80], xmm10
    }
    Value = (char *)Sys_GetValue(0);
    v29 = (unsigned int *)(Value + 6416);
    if ( (unsigned int)(*((_DWORD *)Value + 1604) + 1) >= 3 )
    {
      LODWORD(v86) = 3;
      LODWORD(v83) = *((_DWORD *)Value + 1604) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v83, v86) )
        __debugbreak();
    }
    v30 = *v29 + 1;
    *v29 = v30;
    if ( v30 >= 3 )
    {
      LODWORD(v86) = 3;
      LODWORD(v83) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v83, v86) )
        __debugbreak();
    }
    v31 = Value + 2088;
    v32 = Value + 40;
    if ( *v31 < (unsigned __int64)v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v31 += 8i64;
    if ( *v31 >= (unsigned __int64)v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v31 = v29;
    if ( *v31 <= (unsigned __int64)v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v33 = (int)*v29;
    v34 = __rdtsc();
    v29[v33 + 2] = v34;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    v36 = 0;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 108, NULL, 0);
    v37 = *(_DWORD *)_RDI;
    _RSI = _R13->source;
    if ( (*(_DWORD *)_RDI & 0x10) != 0 )
    {
      __asm
      {
        vmovss  xmm8, dword ptr [rdi+10h]
        vmovss  xmm9, dword ptr [rdi+14h]
      }
    }
    else
    {
      R_GetViewport(_R13->source, &outViewport);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm8, xmm0, cs:__real@3c088889
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vmulss  xmm9, xmm1, cs:__real@3c72b9d6
      }
      v37 = *(_DWORD *)_RDI;
    }
    __asm { vmovss  xmm10, cs:__real@3f800000 }
    if ( (v37 & 0x80u) == 0 )
    {
      state = _R13->state;
      if ( state->depthRangeType == GFX_DEPTH_RANGE_SCENE )
        goto LABEL_39;
      v55 = GFX_DEPTH_RANGE_SCENE;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r12+130h]
        vmovss  xmm1, dword ptr [r12+134h]
        vmovaps [rsp+190h+var_40], xmm6
        vdivss  xmm6, xmm0, dword ptr [r12+138h]
        vmovaps [rsp+190h+var_50], xmm7
        vdivss  xmm7, xmm1, dword ptr [r12+13Ch]
      }
      *(vec4_t *)((char *)&in2.row0 + 4) = 0ui64;
      __asm
      {
        vmovss  dword ptr [rbp+90h+in2], xmm6
        vmovss  dword ptr [rbp+90h+in2+14h], xmm7
        vmovss  dword ptr [rbp+90h+in2+28h], xmm10
        vmovss  dword ptr [rbp+90h+in2+3Ch], xmm10
      }
      *(vec4_t *)((char *)&in2.row1 + 8) = 0ui64;
      *(vec4_t *)((char *)&in2.row2 + 12) = 0ui64;
      MatrixMultiply44(&_RSI->viewParms3D.viewProjectionMatrix.m, &in2, &_RSI->viewParms3D.viewProjectionMatrix.m);
      __asm { vmulss  xmm0, xmm6, dword ptr [rsi+2970h] }
      state = _R13->state;
      __asm
      {
        vmovaps xmm6, [rsp+190h+var_40]
        vmovss  dword ptr [rsi+2970h], xmm0
        vmulss  xmm0, xmm7, dword ptr [rsi+2984h]
        vmovaps xmm7, [rsp+190h+var_50]
        vmovss  dword ptr [rsi+2984h], xmm0
      }
      if ( state->depthRangeType == GFX_DEPTH_RANGE_VIEWMODEL )
        goto LABEL_39;
      v55 = GFX_DEPTH_RANGE_VIEWMODEL;
    }
    R_ChangeDepthRange(state, v55);
LABEL_39:
    v56 = (*((unsigned __int8 *)_RSI + 11668) >> 5) & 1;
    R_GetViewport(_RSI, &outViewport);
    __asm { vmovups xmm1, xmmword ptr [r13+0] }
    outViewport.width <<= v56;
    outViewport.height <<= v56;
    __asm { vmovups xmm0, xmmword ptr [rbp+90h+outViewport.x] }
    v59 = (*(_DWORD *)_RDI & 0x14) == 20;
    v60 = (*(_DWORD *)_RDI & 4) != 0;
    __asm
    {
      vmovdqa [rsp+190h+var_120], xmm0
      vmovss  xmm0, dword ptr [rdi+18h]
      vmovss  [rsp+190h+var_158], xmm0
      vmovss  dword ptr [rsp+190h+var_168], xmm9
      vmovss  dword ptr [rsp+190h+fmt], xmm8
      vmovups [rbp+90h+var_110], xmm1
    }
    RB_TessRectBillboard(&v91, &_RDI->position, v60, v59, fmt, v84, (GfxColor)-16777216, v87, &v90, 1, v89, &v88);
    __asm
    {
      vmovaps xmm9, [rsp+190h+var_70]
      vmovaps xmm8, [rsp+190h+var_60]
    }
    if ( !_RDI->issued[v15] )
    {
      v74 = *(_DWORD *)_RDI | 0x40;
      __asm { vxorps  xmm2, xmm2, xmm2 }
LABEL_59:
      __asm { vmovaps xmm10, [rsp+190h+var_80] }
      if ( (v74 & 2) == 0 )
        __asm { vmovss  dword ptr [rdi+1Ch], xmm2 }
      v76 = v88;
      *(_DWORD *)_RDI = v74 & 0xFFFFFFFD;
      v77 = v89[0];
      _RDI->samplesCovered[v15] = v89[0];
      _RDI->anyPortionOffscreen[v15] = v76;
      if ( v77 )
      {
        v78 = _RDI->query[v15];
        if ( !g_dx.occlusionQueryHeap.heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 192, ASSERT_TYPE_ASSERT, "(handle->heap)", (const char *)&queryFormat, "handle->heap") )
          __debugbreak();
        if ( v78 >= g_dx.occlusionQueryHeap.numQueries )
        {
          LODWORD(v85) = v78;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 193, ASSERT_TYPE_ASSERT, "( ( static_cast<uint>( query ) < handle->numQueries ) )", "( query ) = %i", v85) )
            __debugbreak();
        }
        if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
          __debugbreak();
        ((void (__fastcall *)(GfxDevice *, ID3D12QueryHeap *, _QWORD, _QWORD))g_dx.immediateContext->m_pFunction[9].AddRef)(g_dx.immediateContext, g_dx.occlusionQueryHeap.heap, (unsigned int)g_dx.occlusionQueryHeap.queryType, v78);
        __asm
        {
          vmovups xmm0, xmmword ptr [r13+0]
          vmovups [rbp+90h+var_100], xmm0
        }
        RB_EndTessSurfaceWithScissorInternal(&v92, &_R12->scissorGeoViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp(673)");
        v80 = _RDI->query[v15];
        if ( !g_dx.occlusionQueryHeap.heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 204, ASSERT_TYPE_ASSERT, "(handle->heap)", (const char *)&queryFormat, "handle->heap") )
          __debugbreak();
        if ( v80 >= g_dx.occlusionQueryHeap.numQueries )
        {
          LODWORD(v85) = v80;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 205, ASSERT_TYPE_ASSERT, "( ( static_cast<uint>( query ) < handle->numQueries ) )", "( query ) = %i", v85) )
            __debugbreak();
        }
        if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
          __debugbreak();
        ((void (__fastcall *)(GfxDevice *, ID3D12QueryHeap *, _QWORD, _QWORD))g_dx.immediateContext->m_pFunction[9].Release)(g_dx.immediateContext, g_dx.occlusionQueryHeap.heap, (unsigned int)g_dx.occlusionQueryHeap.queryType, v80);
        v81 = 1;
      }
      else
      {
        v81 = 0;
      }
      _RDI->issued[v15] = v81;
      Profile_EndInternal(NULL);
      return;
    }
    v64 = _RDI->query[v15];
    fences = g_dx.occlusionQueryHeap.fences;
    g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue = ((__int64 (__fastcall *)(ID3D12Fence *))g_dx.immediateCommandQueue.fence->m_pFunction[2].Release)(g_dx.immediateCommandQueue.fence);
    if ( g_dx.immediateCommandQueue.lastQueriedCompletedFenceValue >= fences[v64] )
    {
      if ( (unsigned int)v64 >= g_dx.occlusionQueryHeap.numQueries )
      {
        LODWORD(v85) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 251, ASSERT_TYPE_ASSERT, "( ( static_cast<uint>( query ) < handle->numQueries ) )", "( query ) = %i", v85) )
          __debugbreak();
      }
      v66 = g_dx.occlusionQueryHeap.data[v64];
      if ( v66 != 0xFFFFFFFFi64 )
        goto LABEL_47;
    }
    else
    {
      v66 = 0xFFFFFFFFi64;
    }
    *(_DWORD *)_RDI |= 2u;
LABEL_47:
    v67 = _RDI->samplesCovered[v15];
    if ( !(_DWORD)v67 )
    {
      LODWORD(v85) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 642, ASSERT_TYPE_ASSERT, "( ( spriteSamples > 0 ) )", "( spriteSamples ) = %i", v85) )
        __debugbreak();
    }
    if ( v66 > v67 )
    {
      *(_DWORD *)_RDI |= 2u;
      R_WarnOncePerFrame(R_WARN_OCCLUSION_QUERY, v66, (unsigned int)v67);
    }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rbx
    }
    if ( v66 < 0 )
      __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rsi
      vdivss  xmm1, xmm1, xmm0
      vminss  xmm2, xmm1, xmm10
    }
    if ( _RDI->anyPortionOffscreen[v15] || v88 )
      v36 = 64;
    v74 = v36 | *(_DWORD *)_RDI & 0xFFFFFFBF;
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
  int v6; 
  int v7; 

  if ( handle >= 0x200u )
  {
    v7 = 512;
    v6 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1062, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  _RDI = occlusionQueryArray;
  _RBX = handle;
  if ( (*(_BYTE *)&occlusionQueryArray[_RBX] & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1063, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+rdi+1Ch] }
  return *(float *)&_XMM0;
}

/*
==============
RB_GetSampleRectRelativeArea
==============
*/
float RB_GetSampleRectRelativeArea(GfxCmdBufSourceState *gfxSource, const vec3_t *position, int widthInPixels, int heightInPixels)
{
  bool v11; 
  bool v15; 
  int v29; 
  int v57; 
  char v79; 
  void *retaddr; 

  _R11 = &retaddr;
  v11 = rgp.world == NULL;
  _EBP = heightInPixels;
  __asm { vmovaps [rsp+98h+var_28], xmm7 }
  _EDI = widthInPixels;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmmword ptr [r11-68h], xmm11
  }
  _RSI = position;
  if ( v11 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 432, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world");
    v11 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, dword ptr [rsi+4]
    vmovss  xmm9, dword ptr [rsi]
    vmulss  xmm1, xmm9, dword ptr [rbx+29BCh]
    vmovss  xmm11, dword ptr [rsi+8]
    vmulss  xmm0, xmm10, dword ptr [rbx+29CCh]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, dword ptr [rbx+29DCh]
    vaddss  xmm8, xmm2, xmm1
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm8, xmm7
  }
  if ( v11 )
    goto LABEL_16;
  __asm
  {
    vmulss  xmm1, xmm10, dword ptr [rbx+29C0h]
    vmulss  xmm0, xmm9, dword ptr [rbx+29B0h]
    vmovss  xmm5, cs:__real@3f000000
  }
  _ER10 = vidConfig.displayWidth;
  v29 = 0;
  _ER9 = vidConfig.displayHeight;
  __asm
  {
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, dword ptr [rbx+29D0h]
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm2, xmm0, xmm8
    vaddss  xmm1, xmm2, cs:__real@3f800000
    vmovd   xmm0, r10d
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm3, xmm1, xmm0
    vmovaps [rsp+98h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vmovd   xmm1, edi
    vcvtdq2ps xmm1, xmm1
    vsubss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm9, dword ptr [rbx+29B4h]
    vmulss  xmm0, xmm2, xmm5
    vaddss  xmm3, xmm0, xmm5
    vroundss xmm0, xmm6, xmm3, 1
    vcvttss2si r8d, xmm0
    vmulss  xmm0, xmm10, dword ptr [rbx+29C4h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, dword ptr [rbx+29D4h]
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm2, xmm0, xmm8
    vaddss  xmm3, xmm2, cs:__real@3f800000
    vmovd   xmm1, r9d
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm4, xmm3, xmm1
  }
  v57 = 0;
  if ( _ER8 >= 0 )
    v57 = _ER8;
  __asm { vmovd   xmm0, ebp }
  if ( _ER8 + _EDI <= (int)vidConfig.displayWidth )
    _ER10 = _ER8 + _EDI;
  __asm
  {
    vcvtdq2ps xmm0, xmm0
    vsubss  xmm2, xmm4, xmm0
    vmulss  xmm1, xmm2, xmm5
    vaddss  xmm3, xmm1, xmm5
    vroundss xmm1, xmm6, xmm3, 1
    vmovaps xmm6, [rsp+98h+var_18]
    vcvttss2si ecx, xmm1
  }
  if ( _ECX >= 0 )
    v29 = _ECX;
  if ( _ECX + _EBP <= (int)vidConfig.displayHeight )
    _ER9 = _ECX + _EBP;
  if ( _ER10 <= v57 || _ER9 <= v29 )
  {
LABEL_16:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r9d
      vcvtsi2ss xmm0, xmm0, edi
      vdivss  xmm0, xmm1, xmm0
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v79;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return *(float *)&_XMM0;
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
  GfxCmdBufContext v11; 

  _RDI = gfxContext;
  if ( setTechnique )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_SetIdentity(&v11);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_SetTessTechnique(&v11, rgp.occlusionQueryMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_COUNT_GEO);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
  }
  Tess = R_GetTess(&v11);
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

void __fastcall RB_SetOcclusionQuerySize(unsigned __int16 handle, double width, double height)
{
  int v12; 
  int v13; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  if ( handle >= 0x200u )
  {
    v13 = 512;
    v12 = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1025, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( occlusionQueryArray ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( occlusionQueryArray )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  _RDI = occlusionQueryArray;
  _RBX = handle;
  if ( (*(_BYTE *)&occlusionQueryArray[_RBX] & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 1026, ASSERT_TYPE_ASSERT, "(occlusionQueryArray[handle].enabled)", (const char *)&queryFormat, "occlusionQueryArray[handle].enabled") )
    __debugbreak();
  *(_DWORD *)&occlusionQueryArray[_RBX] |= 0x10u;
  __asm
  {
    vmovss  dword ptr [rbx+rdi+10h], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr [rbx+rdi+14h], xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
}

/*
==============
RB_TessRectBillboard
==============
*/
void RB_TessRectBillboard(GfxCmdBufContext *gfxContext, const vec3_t *inPos, bool isWorldPos, bool isWorldWidthHeight, float widthInPixels, float heightInPixels, GfxColor color, float depthBias, GfxViewport *viewport, bool setTechnique, unsigned int *outSamplesCovered, bool *outAnyPortionOffscreen)
{
  bool v113; 
  bool v178; 
  GfxCmdBufContext v179; 
  char v187; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
  }
  _R13 = gfxContext;
  _RSI = inPos;
  *outSamplesCovered = 0;
  v178 = setTechnique;
  __asm { vmovss  xmm7, dword ptr [rdx] }
  if ( isWorldPos )
  {
    __asm
    {
      vmovsd  xmm2, cs:__real@40b0000000000000
      vcvtss2sd xmm0, xmm7, xmm7
      vmulsd  xmm0, xmm0, xmm2
      vcvttsd2si rcx, xmm0
    }
    if ( (unsigned __int64)(_RCX + 0x80000000i64) > 0xFFFFFFFF )
      goto LABEL_6;
    __asm
    {
      vmovss  xmm5, dword ptr [rsi+4]
      vcvtss2sd xmm0, xmm5, xmm5
      vmulsd  xmm1, xmm0, xmm2
      vcvttsd2si rcx, xmm1
    }
    if ( (unsigned __int64)(_RCX + 0x80000000i64) > 0xFFFFFFFF )
      goto LABEL_6;
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+8]
      vcvtss2sd xmm0, xmm4, xmm4
      vmulsd  xmm1, xmm0, xmm2
      vcvttsd2si rcx, xmm1
    }
    if ( (unsigned __int64)(_RCX + 0x80000000i64) > 0xFFFFFFFF )
    {
LABEL_6:
      R_WarnOncePerFrame(R_WARN_PRECISE_COORD_OUTSIDE_INTEGER_RANGE, "sun or occlusion query");
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm4, xmm0, dword ptr [rdi+2A30h]
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  xmm1, dword ptr [rsi+4]
        vsubss  xmm3, xmm0, dword ptr [rdi+2A38h]
        vsubss  xmm5, xmm1, dword ptr [rdi+2A34h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm3, cs:__real@45800000
        vmulss  xmm1, xmm5, xmm3
        vcvttss2si r8d, xmm1
        vmulss  xmm1, xmm3, dword ptr [rdi+2A34h]
        vcvttss2si eax, xmm1
        vmulss  xmm0, xmm7, xmm3
        vcvttss2si edx, xmm0
        vmulss  xmm0, xmm4, xmm3
        vcvttss2si r9d, xmm0
        vmulss  xmm0, xmm3, dword ptr [rdi+2A30h]
        vcvttss2si ecx, xmm0
        vmulss  xmm0, xmm3, dword ptr [rdi+2A38h]
        vmovsd  xmm3, cs:__real@3f30000000000000
        vcvttss2si eax, xmm0
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2sd xmm1, xmm1, r8d
        vmulsd  xmm2, xmm1, xmm3
        vcvtsi2sd xmm0, xmm0, edx
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm4, xmm0, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, r9d
        vmulsd  xmm1, xmm0, xmm3
        vcvtsd2ss xmm3, xmm1, xmm1
        vcvtsd2ss xmm5, xmm2, xmm2
      }
    }
    __asm
    {
      vmovss  xmm2, [rsp+108h+arg_38]
      vmulss  xmm0, xmm2, dword ptr [rdi+2A3Ch]
      vmulss  xmm1, xmm2, dword ptr [rdi+2A40h]
      vaddss  xmm7, xmm4, xmm0
      vmulss  xmm0, xmm2, dword ptr [rdi+2A44h]
      vaddss  xmm9, xmm3, xmm0
      vaddss  xmm8, xmm5, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rdx+4]
      vmovss  xmm9, dword ptr [rdx+8]
    }
  }
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 207, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world", setTechnique) )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm8, dword ptr [rdi+29C0h]
    vmulss  xmm0, xmm7, dword ptr [rdi+29B0h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rdi+29D0h]
    vmulss  xmm0, xmm8, dword ptr [rdi+29C4h]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rdi+29B4h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rdi+29D4h]
    vmulss  xmm0, xmm8, dword ptr [rdi+29C8h]
    vaddss  xmm5, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rdi+29B8h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rdi+29D8h]
    vmulss  xmm0, xmm8, dword ptr [rdi+29CCh]
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm1, xmm7, dword ptr [rdi+29BCh]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, dword ptr [rdi+29DCh]
    vaddss  xmm0, xmm2, xmm1
    vmovss  [rsp+108h+var_AC], xmm0
    vmovss  [rsp+108h+var_B8], xmm4
    vmovss  [rsp+108h+var_B4], xmm5
    vmovss  [rsp+108h+var_B0], xmm6
  }
  if ( isWorldPos )
  {
    __asm
    {
      vaddss  xmm4, xmm4, dword ptr [rdi+29E0h]
      vaddss  xmm5, xmm5, dword ptr [rdi+29E4h]
      vaddss  xmm6, xmm6, dword ptr [rdi+29E8h]
      vaddss  xmm0, xmm0, dword ptr [rdi+29ECh]
      vmovss  [rsp+108h+var_B8], xmm4
      vmovss  [rsp+108h+var_B4], xmm5
      vmovss  [rsp+108h+var_B0], xmm6
      vmovss  [rsp+108h+var_AC], xmm0
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vdivss  xmm3, xmm2, xmm0
    vmulss  xmm0, xmm6, xmm3
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmulss  xmm4, xmm4, xmm3
    vmulss  xmm5, xmm5, xmm3
    vmovaps [rsp+108h+var_78], xmm10
    vmovaps [rsp+108h+var_88], xmm11
    vmovaps [rsp+108h+var_98], xmm12
  }
  if ( isWorldWidthHeight )
  {
    __asm
    {
      vmovss  xmm0, [rsp+108h+arg_20]
      vmovss  xmm9, cs:__real@3f000000
      vmulss  xmm1, xmm0, dword ptr [rax]
      vmovss  xmm0, [rsp+108h+arg_28]
      vmulss  xmm11, xmm1, xmm9
      vmulss  xmm1, xmm0, dword ptr [rax+14h]
      vmulss  xmm7, xmm11, xmm3
      vcomiss xmm7, xmm6
      vmulss  xmm12, xmm1, xmm9
      vmulss  xmm1, xmm12, xmm3
    }
    if ( _R13->source >= (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 )
      goto LABEL_33;
    __asm { vcomiss xmm1, xmm6 }
    if ( _R13->source >= (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 )
      goto LABEL_33;
    __asm
    {
      vmovss  xmm0, cs:__real@bf800000
      vaddss  xmm6, xmm4, xmm7
      vcomiss xmm6, xmm0
    }
    if ( _R13->source >= (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 )
      goto LABEL_33;
    __asm
    {
      vsubss  xmm8, xmm4, xmm7
      vcomiss xmm8, xmm2
    }
    if ( _R13->source < (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 && _R13->source != (GfxCmdBufSourceState *)-10608i64 )
      goto LABEL_33;
    __asm
    {
      vaddss  xmm7, xmm5, xmm1
      vcomiss xmm7, xmm0
    }
    if ( _R13->source >= (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 )
      goto LABEL_33;
    __asm
    {
      vsubss  xmm5, xmm5, xmm1
      vcomiss xmm5, xmm2
    }
    if ( _R13->source < (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 && _R13->source != (GfxCmdBufSourceState *)-10608i64 )
    {
LABEL_33:
      *outAnyPortionOffscreen = 1;
      goto LABEL_34;
    }
    __asm { vcomiss xmm6, xmm2 }
    if ( _R13->source < (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 )
      goto LABEL_26;
    __asm { vcomiss xmm8, xmm0 }
    if ( _R13->source >= (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 || _R13->source == (GfxCmdBufSourceState *)-10608i64 )
      goto LABEL_26;
    __asm { vcomiss xmm7, xmm2 }
    if ( _R13->source < (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 )
      goto LABEL_26;
    __asm { vcomiss xmm5, xmm0 }
    if ( _R13->source >= (GfxCmdBufSourceState *)0xFFFFFFFFFFFFD690i64 || _R13->source == (GfxCmdBufSourceState *)-10608i64 )
LABEL_26:
      v113 = 1;
    else
      v113 = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
    }
    *outAnyPortionOffscreen = v113;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm4, xmm0, xmm9
      vcvtsi2ss xmm1, xmm1, rax
      vmulss  xmm3, xmm1, xmm9
      vaddss  xmm0, xmm8, xmm2
      vmulss  xmm1, xmm3, xmm5
      vsubss  xmm9, xmm3, xmm1
      vmulss  xmm1, xmm3, xmm7
      vaddss  xmm2, xmm6, xmm2
      vmulss  xmm0, xmm0, xmm4; X
      vsubss  xmm8, xmm3, xmm1
      vmulss  xmm6, xmm2, xmm4
    }
    *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm10, xmm0
      vmovaps xmm0, xmm6; X
    }
    *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm7, xmm0
      vmovaps xmm0, xmm9; X
    }
    *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovaps xmm0, xmm8; X
    }
    roundf(*(float *)&_XMM0);
    __asm
    {
      vsubss  xmm2, xmm6, xmm0
      vsubss  xmm1, xmm7, xmm10
      vmulss  xmm3, xmm2, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm9, [rsp+108h+arg_20]
      vmovss  xmm10, [rsp+108h+arg_28]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm6, xmm9, xmm0
      vmovss  xmm0, cs:__real@bf800000
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm8, xmm4, xmm6
      vcomiss xmm8, xmm0
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm3, xmm10, xmm1
      vsubss  xmm1, xmm4, xmm6
      vcomiss xmm1, xmm2
      vaddss  xmm7, xmm5, xmm3
      vcomiss xmm7, xmm0
      vsubss  xmm4, xmm5, xmm3
      vcomiss xmm4, xmm2
      vcomiss xmm8, xmm2
    }
    *outAnyPortionOffscreen = 1;
    __asm
    {
      vmovss  xmm0, [rsp+108h+var_AC]
      vmulss  xmm12, xmm0, xmm3
      vmulss  xmm3, xmm9, xmm10
      vmulss  xmm11, xmm0, xmm6
    }
  }
  __asm { vcvttss2si rax, xmm3 }
  *outSamplesCovered = _RAX;
  if ( (_DWORD)_RAX )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups [rsp+108h+var_C8], xmm0
    }
    _RAX = RB_InitOcclusionQueryBatch(&v179, color, v178);
    __asm
    {
      vmovss  xmm2, [rsp+108h+var_B4]
      vmovss  xmm1, [rsp+108h+var_B0]
      vmovss  xmm0, [rsp+108h+var_AC]
      vmovss  xmm3, [rsp+108h+var_B8]
      vmovss  dword ptr [rax], xmm3
      vmovss  dword ptr [rax+4], xmm2
      vmovss  dword ptr [rax+8], xmm1
      vmovss  dword ptr [rax+0Ch], xmm0
      vmovss  dword ptr [rax+20h], xmm3
      vmovss  dword ptr [rax+24h], xmm2
      vmovss  dword ptr [rax+28h], xmm1
      vmovss  dword ptr [rax+2Ch], xmm0
      vmovss  dword ptr [rax+40h], xmm3
      vmovss  dword ptr [rax+44h], xmm2
      vmovss  dword ptr [rax+48h], xmm1
      vmovss  dword ptr [rax+4Ch], xmm0
      vmovss  dword ptr [rax+60h], xmm3
      vmovss  dword ptr [rax+64h], xmm2
      vmovss  dword ptr [rax+68h], xmm1
      vmovss  dword ptr [rax+6Ch], xmm0
      vaddss  xmm0, xmm11, dword ptr [rax]
      vmovss  dword ptr [rax], xmm0
      vaddss  xmm1, xmm12, dword ptr [rax+4]
      vmovss  dword ptr [rax+4], xmm1
      vaddss  xmm0, xmm11, dword ptr [rax+20h]
      vmovss  dword ptr [rax+20h], xmm0
      vmovss  xmm1, dword ptr [rax+24h]
      vsubss  xmm0, xmm1, xmm12
      vmovss  dword ptr [rax+24h], xmm0
      vmovss  xmm2, dword ptr [rax+40h]
      vsubss  xmm1, xmm2, xmm11
      vmovss  dword ptr [rax+40h], xmm1
      vmovss  xmm0, dword ptr [rax+44h]
      vsubss  xmm1, xmm0, xmm12
      vmovss  dword ptr [rax+44h], xmm1
      vmovss  xmm2, dword ptr [rax+60h]
      vsubss  xmm0, xmm2, xmm11
      vmovss  dword ptr [rax+60h], xmm0
      vaddss  xmm1, xmm12, dword ptr [rax+64h]
      vmovss  dword ptr [rax+64h], xmm1
    }
  }
LABEL_34:
  __asm
  {
    vmovaps xmm11, [rsp+108h+var_88]
    vmovaps xmm10, [rsp+108h+var_78]
    vmovaps xmm12, [rsp+108h+var_98]
  }
  _R11 = &v187;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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

float __fastcall R_GetLatestFrameDuration(double _XMM0_8, double _XMM1_8)
{
  unsigned __int64 frameBegin; 

  _R9 = s_frameQueries.queryHistory;
  frameBegin = 0i64;
  s_frameQueries.latestQuery.frameBegin = 0i64;
  s_frameQueries.latestQuery.waitBegin = 0i64;
  s_frameQueries.latestQuery.waitEnd = 0i64;
  s_frameQueries.latestQuery.frameEnd = 0i64;
  __asm
  {
    vmovups ymm1, ymmword ptr [r9]
    vmovq   r8, xmm1
    vpextrq rax, xmm1, 1
  }
  if ( _R8 < _RAX )
  {
    __asm
    {
      vextractf128 xmm0, ymm1, 1
      vmovq   rcx, xmm0
    }
    if ( _RAX < _RCX )
    {
      __asm
      {
        vextractf128 xmm0, ymm1, 1
        vpextrq rax, xmm0, 1
      }
      if ( _RCX < _RAX )
      {
        if ( _R8 )
        {
          __asm { vmovups ymmword ptr cs:s_frameQueries.latestQuery.frameBegin, ymm1 }
          frameBegin = s_frameQueries.latestQuery.frameBegin;
        }
      }
    }
  }
  __asm
  {
    vmovups ymm1, ymmword ptr [r9+20h]
    vmovq   r8, xmm1
    vpextrq rax, xmm1, 1
  }
  if ( _R8 < _RAX )
  {
    __asm
    {
      vextractf128 xmm0, ymm1, 1
      vmovq   rcx, xmm0
    }
    if ( _RAX < _RCX )
    {
      __asm
      {
        vextractf128 xmm0, ymm1, 1
        vpextrq rax, xmm0, 1
      }
      if ( _RCX < _RAX && _R8 > frameBegin )
      {
        __asm { vmovups ymmword ptr cs:s_frameQueries.latestQuery.frameBegin, ymm1 }
        frameBegin = s_frameQueries.latestQuery.frameBegin;
      }
    }
  }
  __asm
  {
    vmovups ymm1, ymmword ptr [r9+40h]
    vmovq   r8, xmm1
    vpextrq rax, xmm1, 1
  }
  if ( _R8 < _RAX )
  {
    __asm
    {
      vextractf128 xmm0, ymm1, 1
      vmovq   rcx, xmm0
    }
    if ( _RAX < _RCX )
    {
      __asm
      {
        vextractf128 xmm0, ymm1, 1
        vpextrq rax, xmm0, 1
      }
      if ( _RCX < _RAX && _R8 > frameBegin )
      {
        __asm { vmovups ymmword ptr cs:s_frameQueries.latestQuery.frameBegin, ymm1 }
        frameBegin = s_frameQueries.latestQuery.frameBegin;
      }
    }
  }
  __asm
  {
    vmovups ymm1, ymmword ptr [r9+60h]
    vmovq   r8, xmm1
    vpextrq rax, xmm1, 1
  }
  if ( _R8 < _RAX )
  {
    __asm
    {
      vextractf128 xmm0, ymm1, 1
      vmovq   rcx, xmm0
    }
    if ( _RAX < _RCX )
    {
      __asm
      {
        vextractf128 xmm0, ymm1, 1
        vpextrq rax, xmm0, 1
      }
      if ( _RCX < _RAX && _R8 > frameBegin )
        __asm { vmovups ymmword ptr cs:s_frameQueries.latestQuery.frameBegin, ymm1 }
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm0, xmm0, cs:__real@3a83126f
  }
  return *(float *)&_XMM0;
}

/*
==============
R_UpdateOverTime
==============
*/

float __fastcall R_UpdateOverTime(double fCurrent, double fGoal, int iFadeInTime, int iFadeOutTime, int frametime)
{
  bool v11; 
  bool v12; 
  __int64 v22; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
  }
  if ( frametime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 967, ASSERT_TYPE_ASSERT, "( ( frametime >= 0 ) )", "( frametime ) = %i", frametime) )
    __debugbreak();
  if ( iFadeInTime < 0 )
  {
    LODWORD(v22) = iFadeInTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 968, ASSERT_TYPE_ASSERT, "( ( iFadeInTime >= 0 ) )", "( iFadeInTime ) = %i", v22) )
      __debugbreak();
  }
  v11 = iFadeOutTime == 0;
  if ( iFadeOutTime < 0 )
  {
    LODWORD(v22) = iFadeOutTime;
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_query.cpp", 969, ASSERT_TYPE_ASSERT, "( ( iFadeOutTime >= 0 ) )", "( iFadeOutTime ) = %i", v22);
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm7 }
  if ( !v11 )
  {
    if ( iFadeOutTime <= 0 )
    {
      __asm { vmovaps xmm0, xmm7 }
      goto LABEL_12;
    }
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, esi
      vcvtsi2ss xmm0, xmm0, edi
      vdivss  xmm1, xmm1, xmm0
      vsubss  xmm6, xmm6, xmm1
      vcomiss xmm6, xmm7
    }
  }
  __asm { vmovaps xmm0, xmm6 }
LABEL_12:
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return *(float *)&_XMM0;
}

