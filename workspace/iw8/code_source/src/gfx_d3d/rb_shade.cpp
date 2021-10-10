/*
==============
RB_UpdateSceneConstantBuffer
==============
*/

void __fastcall RB_UpdateSceneConstantBuffer(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?RB_UpdateSceneConstantBuffer@@YAXPEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
RB_EndTessSurfaceWithScissorInternal
==============
*/

void __fastcall RB_EndTessSurfaceWithScissorInternal(GfxCmdBufContext *gfxContext, const GfxViewport *scissorViewport, const char *fileAndLine)
{
  ?RB_EndTessSurfaceWithScissorInternal@@YAXUGfxCmdBufContext@@PEBUGfxViewport@@PEBD@Z(gfxContext, scissorViewport, fileAndLine);
}

/*
==============
RB_CheckRingBufferOverflow
==============
*/

bool __fastcall RB_CheckRingBufferOverflow(DynamicRingBuffer *ringBuffer, int allocSize)
{
  return ?RB_CheckRingBufferOverflow@@YA_NPEAUDynamicRingBuffer@@H@Z(ringBuffer, allocSize);
}

/*
==============
RB_SetTessTechnique
==============
*/

void __fastcall RB_SetTessTechnique(GfxCmdBufContext *gfxContext, const Material *material, MaterialTechniqueType techType, GfxPrimStatsTarget primStatsTarget)
{
  ?RB_SetTessTechnique@@YAXUGfxCmdBufContext@@PEBUMaterial@@W4MaterialTechniqueType@@W4GfxPrimStatsTarget@@@Z(gfxContext, material, techType, primStatsTarget);
}

/*
==============
RB_EndTessSurfaceInternal
==============
*/

void __fastcall RB_EndTessSurfaceInternal(GfxCmdBufContext *gfxContext, const char *fileAndLine)
{
  ?RB_EndTessSurfaceInternal@@YAXUGfxCmdBufContext@@PEBD@Z(gfxContext, fileAndLine);
}

/*
==============
RB_TessOverflowInternal
==============
*/

void __fastcall RB_TessOverflowInternal(GfxCmdBufContext *gfxContext, const char *fileAndLine)
{
  ?RB_TessOverflowInternal@@YAXUGfxCmdBufContext@@PEBD@Z(gfxContext, fileAndLine);
}

/*
==============
RB_BeginSurface
==============
*/

void __fastcall RB_BeginSurface(GfxCmdBufContext *gfxContext, const Material *material, MaterialTechniqueType techType, GfxPrimStatsTarget primStatsTarget, bool setGenericDecl)
{
  ?RB_BeginSurface@@YAXUGfxCmdBufContext@@PEBUMaterial@@W4MaterialTechniqueType@@W4GfxPrimStatsTarget@@_N@Z(gfxContext, material, techType, primStatsTarget, setGenericDecl);
}

/*
==============
RB_BeginSurface
==============
*/
void RB_BeginSurface(GfxCmdBufContext *gfxContext, const Material *material, MaterialTechniqueType techType, GfxPrimStatsTarget primStatsTarget, bool setGenericDecl)
{
  materialCommands_t *Tess; 
  bool v10; 
  MaterialTechniqueSet *techniqueSet; 
  const MaterialTechnique *TechSetTechnique; 
  GfxCmdBufState *state; 
  GfxCmdBufState *v14; 
  const char *TechniqueNameFromType; 
  __int64 v16; 
  GfxCmdBufContext v17; 

  v17 = *gfxContext;
  Tess = R_GetTess(&v17);
  if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 167, ASSERT_TYPE_ASSERT, "( ( tess.indexCount == 0 ) )", "( tess.indexCount ) = %i", Tess->indexCount) )
    __debugbreak();
  if ( Tess->vertexCount )
  {
    LODWORD(v16) = Tess->vertexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 168, ASSERT_TYPE_ASSERT, "( ( tess.vertexCount == 0 ) )", "( tess.vertexCount ) = %i", v16) )
      __debugbreak();
  }
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 170, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( Tess->viewStatsTarget != GFX_VIEW_STATS_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 172, ASSERT_TYPE_ASSERT, "(tess.viewStatsTarget == GFX_VIEW_STATS_INVALID)", (const char *)&queryFormat, "tess.viewStatsTarget == GFX_VIEW_STATS_INVALID") )
    __debugbreak();
  v10 = Tess->primStatsTarget == GFX_PRIM_STATS_INVALID;
  Tess->viewStatsTarget = gfxContext->source->viewStatsTarget;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 174, ASSERT_TYPE_ASSERT, "(tess.primStatsTarget == GFX_PRIM_STATS_INVALID)", (const char *)&queryFormat, "tess.primStatsTarget == GFX_PRIM_STATS_INVALID") )
    __debugbreak();
  Tess->primStatsTarget = primStatsTarget;
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 464, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", material->name) )
    __debugbreak();
  techniqueSet = material->techniqueSet;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  TechSetTechnique = Material_GetTechSetTechnique(techniqueSet, techType);
  state = gfxContext->state;
  v14 = state;
  state->technique = TechSetTechnique;
  if ( !TechSetTechnique )
  {
    TechniqueNameFromType = R_GetTechniqueNameFromType(techType);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 183, ASSERT_TYPE_ASSERT, "(gfxContext.state->technique)", "%s\n\tNo technique found for material %s with techtype %s", "gfxContext.state->technique", material->name, TechniqueNameFromType) )
      __debugbreak();
  }
  if ( setGenericDecl )
  {
    if ( state->vertDeclType != VERTDECL_GENERIC )
      state->pipelineStateDirty = 1;
    v14 = state;
    state->vertDeclType = VERTDECL_GENERIC;
  }
  v14->material = material;
  v14->techType = techType;
  if ( !v14->technique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 201, ASSERT_TYPE_ASSERT, "( ( gfxContext.state->technique ) )", "( gfxContext.state->material->name ) = %s", material->name) )
    __debugbreak();
}

/*
==============
RB_CheckRingBufferOverflow
==============
*/
bool RB_CheckRingBufferOverflow(DynamicRingBuffer *ringBuffer, int allocSize)
{
  int beginIndexReady; 
  int bufSize; 
  int pendingSize; 
  __int64 v11; 
  __int64 v12; 

  if ( allocSize > ringBuffer->bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 239, ASSERT_TYPE_ASSERT, "( allocSize ) <= ( ringBuffer->bufSize )", "%s <= %s\n\t%u, %u", "allocSize", "ringBuffer->bufSize", allocSize, ringBuffer->bufSize) )
    __debugbreak();
  if ( !ringBuffer->settings.disableFenceOnAcquire )
    return 0;
  beginIndexReady = ringBuffer->beginIndexReady;
  bufSize = ringBuffer->bufSize;
  pendingSize = ringBuffer->pendingSize;
  if ( beginIndexReady + allocSize > bufSize )
  {
    if ( beginIndexReady > bufSize )
    {
      LODWORD(v12) = ringBuffer->bufSize;
      LODWORD(v11) = ringBuffer->beginIndexReady;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 247, ASSERT_TYPE_ASSERT, "( ringBuffer->beginIndexReady ) <= ( ringBuffer->bufSize )", "%s <= %s\n\t%i, %i", "ringBuffer->beginIndexReady", "ringBuffer->bufSize", v11, v12) )
        __debugbreak();
    }
    bufSize = ringBuffer->bufSize;
    pendingSize += bufSize - ringBuffer->beginIndexReady;
  }
  _XMM3 = LODWORD(ringBuffer->settings.fractionFlush);
  __asm
  {
    vcmpeqss xmm2, xmm3, xmm0
    vblendvps xmm3, xmm3, xmm1, xmm2
  }
  return pendingSize >= (int)(float)((float)bufSize * *(float *)&_XMM3) || pendingSize + allocSize > bufSize;
}

/*
==============
RB_DrawTessSurface
==============
*/
void RB_DrawTessSurface(GfxCmdBufContext *gfxContext, const GfxViewport *scissorViewport, const char *fileAndLine)
{
  materialCommands_t *Tess; 
  GfxCmdBufState *state; 
  GfxCmdBufState *v8; 
  int indexCount; 
  GfxCmdBufSourceState *source; 
  const GfxViewport *p_scissor; 
  MaterialVertexDeclType vertDeclType; 
  int v13; 
  int v14; 
  __int64 viewStatsTarget; 
  __int64 primStatsTarget; 
  int endSwapFrame; 
  GfxViewport v18; 
  __int64 v19; 
  GfxViewport scissor; 
  GfxDrawPrimArgs v21; 

  scissor = (GfxViewport)*gfxContext;
  Tess = R_GetTess((GfxCmdBufContext *)&scissor);
  if ( !Tess->vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 299, ASSERT_TYPE_ASSERT, "(tess.vertexCount)", (const char *)&queryFormat, "tess.vertexCount") )
    __debugbreak();
  if ( !Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 300, ASSERT_TYPE_ASSERT, "(tess.indexCount)", (const char *)&queryFormat, "tess.indexCount") )
    __debugbreak();
  state = gfxContext->state;
  v8 = state;
  indexCount = Tess->indexCount;
  if ( state->device == g_dx.immediateContext && (RB_CheckRingBufferOverflow(&gfxBuf.dynamicVertexRingBuffer, 32 * Tess->vertexCount) || RB_CheckRingBufferOverflow(&gfxBuf.dynamicIndexRingBuffer, indexCount) || !R_CheckReserveBuffers(state)) )
  {
    v8 = state;
    if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    scissor = state->scissor;
    if ( !scissor.x && !HIDWORD(*(_QWORD *)&scissor.x) && scissor.width == 4096 && scissor.height == 4096 )
      scissor = state->viewport;
    R_FlushImmediateContext();
    state->device = g_dx.immediateContext;
    R_InvalidateState(state);
    R_ForceSetViewportAndScissorSeparate(state, &state->viewport, &scissor);
  }
  source = gfxContext->source;
  if ( (*((_BYTE *)gfxContext->source + 11668) & 2) != 0 )
  {
    R_GetViewport(gfxContext->source, &scissor);
    p_scissor = &scissor;
    if ( scissorViewport )
      p_scissor = scissorViewport;
    R_SetViewportAndScissorSeparate(v8, &scissor, p_scissor);
    R_UpdateViewport(source, &scissor);
  }
  vertDeclType = v8->vertDeclType;
  if ( vertDeclType != VERTDECL_GENERIC )
  {
    LODWORD(v19) = (unsigned __int16)vertDeclType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 324, ASSERT_TYPE_SANITY, "( ( gfxContext.state->vertDeclType == VERTDECL_GENERIC ) )", "( gfxContext.state->vertDeclType ) = %i", v19) )
    {
      __debugbreak();
      v8 = gfxContext->state;
    }
  }
  v13 = Tess->indexCount / 3;
  v14 = R_SetDynamicIndexData(v8, Tess->indices, v13);
  R_SetPrimType(v8, 4u);
  if ( Tess->viewStatsTarget == GFX_VIEW_STATS_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 334, ASSERT_TYPE_ASSERT, "(tess.viewStatsTarget != GFX_VIEW_STATS_INVALID)", (const char *)&queryFormat, "tess.viewStatsTarget != GFX_VIEW_STATS_INVALID") )
    __debugbreak();
  if ( Tess->primStatsTarget == GFX_PRIM_STATS_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 335, ASSERT_TYPE_ASSERT, "(tess.primStatsTarget != GFX_PRIM_STATS_INVALID)", (const char *)&queryFormat, "tess.primStatsTarget != GFX_PRIM_STATS_INVALID") )
    __debugbreak();
  viewStatsTarget = Tess->viewStatsTarget;
  primStatsTarget = Tess->primStatsTarget;
  endSwapFrame = gfxContext->source->input.data->endSwapFrame;
  v21.vertexCount = Tess->vertexCount;
  v21.primCount = v13;
  v21.baseIndex = v14;
  v21.vertIndexBase = 0;
  v21.trackFrameIndex = endSwapFrame;
  if ( (unsigned int)(viewStatsTarget + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxViewStatsTarget>(enum GfxViewStatsTarget)", "signed", (char)viewStatsTarget, "signed", viewStatsTarget) )
    __debugbreak();
  v21.viewStatsTarget = viewStatsTarget;
  if ( (unsigned int)(primStatsTarget + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxPrimStatsTarget>(enum GfxPrimStatsTarget)", "signed", (char)primStatsTarget, "signed", primStatsTarget) )
    __debugbreak();
  v18 = (GfxViewport)*gfxContext;
  v21.primStatsTarget = primStatsTarget;
  v21.triSource = 2;
  scissor = v18;
  R_DrawTessTechnique((GfxCmdBufContext *)&scissor, &v21, fileAndLine);
  *(_QWORD *)&Tess->indexCount = 0i64;
}

/*
==============
RB_EndSurfaceEpilogue
==============
*/
void RB_EndSurfaceEpilogue(GfxCmdBufContext *gfxContext)
{
  materialCommands_t *Tess; 
  GfxCmdBufContext v2; 

  v2 = *gfxContext;
  Tess = R_GetTess(&v2);
  if ( Tess->vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 222, ASSERT_TYPE_ASSERT, "(tess.vertexCount == 0)", (const char *)&queryFormat, "tess.vertexCount == 0") )
    __debugbreak();
  if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 223, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
    __debugbreak();
  Tess->viewStatsTarget = GFX_VIEW_STATS_INVALID;
  Tess->primStatsTarget = GFX_PRIM_STATS_INVALID;
  Tess->finishedFilling = 0;
}

/*
==============
RB_EndSurfacePrologue
==============
*/
void RB_EndSurfacePrologue(GfxCmdBufContext *gfxContext)
{
  materialCommands_t *Tess; 
  GfxCmdBufContext v3; 

  if ( !gfxContext->state->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 207, ASSERT_TYPE_ASSERT, "(gfxContext.state->material)", (const char *)&queryFormat, "gfxContext.state->material") )
    __debugbreak();
  v3 = *gfxContext;
  Tess = R_GetTess(&v3);
  if ( Tess->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * Tess->vertexCount < Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
    __debugbreak();
  v3 = *gfxContext;
  R_GetTess(&v3)->finishedFilling = 1;
}

/*
==============
RB_EndTessSurfaceInternal
==============
*/
void RB_EndTessSurfaceInternal(GfxCmdBufContext *gfxContext, const char *fileAndLine)
{
  GfxCmdBufContext v4; 

  v4 = *gfxContext;
  RB_EndSurfacePrologue(&v4);
  v4 = *gfxContext;
  RB_DrawTessSurface(&v4, NULL, fileAndLine);
  v4 = *gfxContext;
  RB_EndSurfaceEpilogue(&v4);
}

/*
==============
RB_EndTessSurfaceWithScissorInternal
==============
*/
void RB_EndTessSurfaceWithScissorInternal(GfxCmdBufContext *gfxContext, const GfxViewport *scissorViewport, const char *fileAndLine)
{
  GfxCmdBufContext v6; 

  v6 = *gfxContext;
  RB_EndSurfacePrologue(&v6);
  v6 = *gfxContext;
  RB_DrawTessSurface(&v6, scissorViewport, fileAndLine);
  v6 = *gfxContext;
  RB_EndSurfaceEpilogue(&v6);
}

/*
==============
RB_SetTessTechnique
==============
*/
void RB_SetTessTechnique(GfxCmdBufContext *gfxContext, const Material *material, MaterialTechniqueType techType, GfxPrimStatsTarget primStatsTarget)
{
  materialCommands_t *Tess; 
  GfxPrimStatsTarget v9; 
  bool v10; 
  GfxCmdBufState *state; 
  GfxViewStatsTarget viewStatsTarget; 
  GfxCmdBufSourceState *source; 
  GfxPrimStatsTarget v14; 
  materialCommands_t *v15; 
  materialCommands_t *v16; 
  GfxCmdBufContext v17[2]; 

  v17[0] = *gfxContext;
  Tess = R_GetTess(v17);
  v9 = Tess->primStatsTarget;
  v10 = v9 != GFX_PRIM_STATS_INVALID && v9 != primStatsTarget;
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 141, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  state = gfxContext->state;
  if ( state->material == material && state->techType == techType && !v10 )
  {
    viewStatsTarget = Tess->viewStatsTarget;
    source = gfxContext->source;
    if ( viewStatsTarget != gfxContext->source->viewStatsTarget && viewStatsTarget != GFX_VIEW_STATS_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 151, ASSERT_TYPE_ASSERT, "(tess.viewStatsTarget == gfxContext.source->viewStatsTarget || tess.viewStatsTarget == GFX_VIEW_STATS_INVALID)", (const char *)&queryFormat, "tess.viewStatsTarget == gfxContext.source->viewStatsTarget || tess.viewStatsTarget == GFX_VIEW_STATS_INVALID") )
      __debugbreak();
    Tess->viewStatsTarget = source->viewStatsTarget;
    v14 = Tess->primStatsTarget;
    if ( v14 != primStatsTarget && v14 != GFX_PRIM_STATS_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 153, ASSERT_TYPE_ASSERT, "(tess.primStatsTarget == primStatsTarget || tess.primStatsTarget == GFX_PRIM_STATS_INVALID)", (const char *)&queryFormat, "tess.primStatsTarget == primStatsTarget || tess.primStatsTarget == GFX_PRIM_STATS_INVALID") )
      __debugbreak();
    Tess->primStatsTarget = primStatsTarget;
  }
  else
  {
    v17[0] = *gfxContext;
    v15 = R_GetTess(v17);
    v16 = v15;
    if ( v15->vertexCount )
    {
      v17[0] = *gfxContext;
      RB_EndSurfacePrologue(v17);
      v17[0] = *gfxContext;
      RB_DrawTessSurface(v17, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
      v17[0] = *gfxContext;
      RB_EndSurfaceEpilogue(v17);
    }
    else
    {
      if ( v15->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
      v16->viewStatsTarget = GFX_VIEW_STATS_INVALID;
      v16->primStatsTarget = GFX_PRIM_STATS_INVALID;
    }
    v17[0] = *gfxContext;
    RB_BeginSurface(v17, material, techType, primStatsTarget, 1);
  }
}

/*
==============
RB_TessOverflowInternal
==============
*/
void RB_TessOverflowInternal(GfxCmdBufContext *gfxContext, const char *fileAndLine)
{
  materialCommands_t *Tess; 
  GfxPrimStatsTarget primStatsTarget; 
  GfxCmdBufState *state; 
  GfxCmdBufContext v7; 

  v7 = *gfxContext;
  Tess = R_GetTess(&v7);
  v7 = *gfxContext;
  primStatsTarget = Tess->primStatsTarget;
  RB_EndSurfacePrologue(&v7);
  v7 = *gfxContext;
  RB_DrawTessSurface(&v7, NULL, fileAndLine);
  v7 = *gfxContext;
  RB_EndSurfaceEpilogue(&v7);
  state = gfxContext->state;
  v7 = *gfxContext;
  RB_BeginSurface(&v7, state->material, state->techType, primStatsTarget, 1);
}

/*
==============
RB_UpdateSceneConstantBuffer
==============
*/
void RB_UpdateSceneConstantBuffer(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  Sys_ProfBeginNamedEvent(0xFF800000, "RB_UpdateSceneConstantBuffer");
  R_LockGfxImmediateContext();
  R_UpdateGfxWrappedBuffer(data->globalSceneConstantBuffer, &viewInfo->input.sceneConstants, 0xE00u);
  R_UnlockGfxImmediateContext();
  Sys_ProfEndNamedEvent();
}

/*
==============
R_DrawTessTechnique
==============
*/
void R_DrawTessTechnique(GfxCmdBufContext *context, const GfxDrawPrimArgs *args, const char *fileAndLine)
{
  char *Value; 
  unsigned int *v6; 
  unsigned int v7; 
  _QWORD *v8; 
  char *v9; 
  int *v10; 
  unsigned __int64 v11; 
  ThreadContext CurrentThreadContext; 
  GfxCmdBufState *state; 
  GfxCmdBufState *v14; 
  MaterialVertexDeclType vertDeclType; 
  materialCommands_t *Tess; 
  __int64 v17; 
  __int64 v18; 
  GfxCmdBufContext v19[2]; 

  Value = (char *)Sys_GetValue(0);
  v6 = (unsigned int *)(Value + 4816);
  if ( (unsigned int)(*((_DWORD *)Value + 1204) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1204) + 1, 3) )
    __debugbreak();
  v7 = *v6 + 1;
  *v6 = v7;
  if ( v7 >= 3 )
  {
    LODWORD(v18) = 3;
    LODWORD(v17) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v8 = Value + 2088;
  v9 = Value + 40;
  if ( *v8 < (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v8 += 8i64;
  if ( *v8 >= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v8 = v6;
  if ( *v8 <= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v10 = (int *)&v6[*v6 + 2];
  v11 = __rdtsc();
  *v10 = v11;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 68, NULL, 0);
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 85, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  state = context->state;
  if ( !state->material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 87, ASSERT_TYPE_ASSERT, "(context.state->material)", (const char *)&queryFormat, "context.state->material") )
    __debugbreak();
  v14 = state;
  if ( !state->technique && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 88, ASSERT_TYPE_ASSERT, "( ( context.state->technique ) )", "( context.state->material->name ) = %s", state->material->name) )
  {
    __debugbreak();
    state = context->state;
    v14 = state;
  }
  R_ProfBeginMaterial(v14);
  vertDeclType = v14->vertDeclType;
  if ( vertDeclType != VERTDECL_GENERIC )
  {
    LODWORD(v17) = (unsigned __int16)vertDeclType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp", 96, ASSERT_TYPE_SANITY, "( ( context.state->vertDeclType == VERTDECL_GENERIC ) )", "( context.state->vertDeclType ) = %i", v17) )
    {
      __debugbreak();
      state = context->state;
      v14 = state;
    }
  }
  v19[0] = *context;
  if ( R_SetupPass(v19) )
  {
    v19[0] = *context;
    Tess = R_GetTess(v19);
    R_SetDynamicVertexData(state, Tess->verts, Tess->vertexCount, 32);
    v19[0] = *context;
    R_SetupPassStableArgsInternal(v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp(107)");
    v19[0] = *context;
    R_SetupPassPerObjectArgsInternal(v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp(108)");
    v19[0] = *context;
    R_SetupPassPerPrimArgsInternal(v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_shade.cpp(109)");
    R_FlushStreamSources(state, Tess->vertexCount);
    R_DrawIndexedPrimitive(state, args);
    v14 = state;
  }
  R_ProfEndMaterial(v14);
  Profile_EndInternal(NULL);
}

