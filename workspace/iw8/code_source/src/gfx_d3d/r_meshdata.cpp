/*
==============
R_ShutdownWorldMultiLightGridFXLightingBuffers
==============
*/

void __fastcall R_ShutdownWorldMultiLightGridFXLightingBuffers(GfxMultiLightGridFXLightingBuffers *lightGridBuffers)
{
  ?R_ShutdownWorldMultiLightGridFXLightingBuffers@@YAXPEAUGfxMultiLightGridFXLightingBuffers@@@Z(lightGridBuffers);
}

/*
==============
R_ResetMesh
==============
*/

void __fastcall R_ResetMesh(GfxMeshData *mesh, GfxMultiLightGridFXLightingBuffers *lightGridBuffers)
{
  ?R_ResetMesh@@YAXPEAUGfxMeshData@@PEAUGfxMultiLightGridFXLightingBuffers@@@Z(mesh, lightGridBuffers);
}

/*
==============
R_SetQuadMesh
==============
*/

void __fastcall R_SetQuadMesh(GfxQuadMeshData *quadMesh, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color)
{
  ?R_SetQuadMesh@@YAXPEAUGfxQuadMeshData@@MMMMMMMMI@Z(quadMesh, x, y, w, h, s0, t0, s1, t1, color);
}

/*
==============
R_ReserveMeshVerts
==============
*/

bool __fastcall R_ReserveMeshVerts(GfxMeshData *mesh, int vertCount, int *baseVertex)
{
  return ?R_ReserveMeshVerts@@YA_NPEAUGfxMeshData@@HPEAH@Z(mesh, vertCount, baseVertex);
}

/*
==============
R_SetBoxMesh
==============
*/

void __fastcall R_SetBoxMesh(GfxBoxMeshData *mesh, float x, float y, float z, float w, float h, float d, float s0, float t0, float s1, float t1, unsigned int color)
{
  ?R_SetBoxMesh@@YAXPEAUGfxBoxMeshData@@MMMMMMMMMMI@Z(mesh, x, y, z, w, h, d, s0, t0, s1, t1, color);
}

/*
==============
R_SetBoxMeshData
==============
*/

void __fastcall R_SetBoxMeshData(GfxMeshData *mesh, float x, float y, float z, float w, float h, float d, float s0, float t0, float s1, float t1, unsigned int color)
{
  ?R_SetBoxMeshData@@YAXPEAUGfxMeshData@@MMMMMMMMMMI@Z(mesh, x, y, z, w, h, d, s0, t0, s1, t1, color);
}

/*
==============
R_InitBatchedQuadMesh
==============
*/

void __fastcall R_InitBatchedQuadMesh(GfxMeshData *mesh, int quadCount)
{
  ?R_InitBatchedQuadMesh@@YAXPEAUGfxMeshData@@H@Z(mesh, quadCount);
}

/*
==============
R_InitWorldMultiLightGridFXLightingBuffers
==============
*/

void __fastcall R_InitWorldMultiLightGridFXLightingBuffers(const GfxMeshData *mesh, GfxMultiLightGridFXLightingBuffers *lightGridBuffers, unsigned int totalLightGridSampleCount)
{
  ?R_InitWorldMultiLightGridFXLightingBuffers@@YAXPEBUGfxMeshData@@PEAUGfxMultiLightGridFXLightingBuffers@@I@Z(mesh, lightGridBuffers, totalLightGridSampleCount);
}

/*
==============
R_DrawBatchedQuadMesh
==============
*/

void __fastcall R_DrawBatchedQuadMesh(GfxCmdBufContext *context, const Material *material, GfxMeshData *mesh, int quadCount)
{
  ?R_DrawBatchedQuadMesh@@YAXUGfxCmdBufContext@@PEBUMaterial@@PEAUGfxMeshData@@H@Z(context, material, mesh, quadCount);
}

/*
==============
R_DrawBoxMesh
==============
*/

void __fastcall R_DrawBoxMesh(GfxCmdBufContext *context, const Material *material, GfxMeshData *mesh, MaterialTechniqueType techType)
{
  ?R_DrawBoxMesh@@YAXUGfxCmdBufContext@@PEBUMaterial@@PEAUGfxMeshData@@W4MaterialTechniqueType@@@Z(context, material, mesh, techType);
}

/*
==============
R_GetQuadMeshData
==============
*/

void __fastcall R_GetQuadMeshData(GfxDevice *device, GfxMeshData *meshData, int width, int height, float z)
{
  ?R_GetQuadMeshData@@YAXPEAUGfxDevice@@PEAUGfxMeshData@@HHM@Z(device, meshData, width, height, z);
}

/*
==============
R_InitDynamicMesh
==============
*/

void __fastcall R_InitDynamicMesh(GfxMeshData *mesh, const char *debugName, unsigned int indexCount, unsigned int vertCount, unsigned int vertSize, unsigned int quadCount, unsigned int lightingCount, unsigned int perEmitterDataCount, unsigned int perFlareDataCount, unsigned int packedAtlasDataCount, unsigned int perGlassVertexDataCount)
{
  ?R_InitDynamicMesh@@YAXPEAUGfxMeshData@@PEBDIIIIIIIII@Z(mesh, debugName, indexCount, vertCount, vertSize, quadCount, lightingCount, perEmitterDataCount, perFlareDataCount, packedAtlasDataCount, perGlassVertexDataCount);
}

/*
==============
R_BeginUpdateBatchedQuadMesh
==============
*/

void __fastcall R_BeginUpdateBatchedQuadMesh(GfxMeshData *mesh)
{
  ?R_BeginUpdateBatchedQuadMesh@@YAXPEAUGfxMeshData@@@Z(mesh);
}

/*
==============
R_GetMeshVerts
==============
*/

unsigned __int8 *__fastcall R_GetMeshVerts(GfxMeshData *mesh, int baseVertex)
{
  return ?R_GetMeshVerts@@YAPEAEPEAUGfxMeshData@@H@Z(mesh, baseVertex);
}

/*
==============
R_DrawQuadMesh
==============
*/

void __fastcall R_DrawQuadMesh(GfxCmdBufContext *context, const Material *material, GfxMeshData *quadMesh)
{
  ?R_DrawQuadMesh@@YAXUGfxCmdBufContext@@PEBUMaterial@@PEAUGfxMeshData@@@Z(context, material, quadMesh);
}

/*
==============
R_EndUpdateBatchedQuadMesh
==============
*/

void __fastcall R_EndUpdateBatchedQuadMesh(GfxMeshData *mesh)
{
  ?R_EndUpdateBatchedQuadMesh@@YAXPEAUGfxMeshData@@@Z(mesh);
}

/*
==============
R_UpdateBatchedQuadMesh
==============
*/

void __fastcall R_UpdateBatchedQuadMesh(GfxMeshData *mesh, int quadIndex, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color)
{
  ?R_UpdateBatchedQuadMesh@@YAXPEAUGfxMeshData@@HMMMMMMMMI@Z(mesh, quadIndex, x, y, w, h, s0, t0, s1, t1, color);
}

/*
==============
R_BeginUpdateBatchedQuadMesh
==============
*/
void R_BeginUpdateBatchedQuadMesh(GfxMeshData *mesh)
{
  ;
}

/*
==============
R_DrawBatchedQuadMesh
==============
*/
void R_DrawBatchedQuadMesh(GfxCmdBufContext *context, const Material *material, GfxMeshData *mesh, int quadCount)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  GfxViewport outViewport; 
  GfxDrawPrimArgs outArgs; 

  if ( context->source->viewMode != VIEW_MODE_2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 882, ASSERT_TYPE_ASSERT, "(context.source->viewMode == VIEW_MODE_2D)", (const char *)&queryFormat, "context.source->viewMode == VIEW_MODE_2D") )
    __debugbreak();
  state = context->state;
  if ( R_BeginMaterial(state, material, TECHNIQUE_EMISSIVE) )
  {
    if ( state->vertDeclType != VERTDECL_GENERIC )
      state->pipelineStateDirty = 1;
    source = context->source;
    state->vertDeclType = VERTDECL_GENERIC;
    if ( (*((_BYTE *)source + 11668) & 2) != 0 )
    {
      R_GetViewport(source, &outViewport);
      R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
      R_UpdateViewport(source, &outViewport);
    }
    outViewport = (GfxViewport)*context;
    if ( R_SetupPass((GfxCmdBufContext *)&outViewport) )
    {
      outViewport = (GfxViewport)*context;
      R_SetupPassStableArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(907)");
      R_SetMeshStream(state, mesh, 4 * quadCount);
      outViewport = (GfxViewport)*context;
      R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(911)");
      outViewport = (GfxViewport)*context;
      R_SetupPassPerPrimArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(912)");
      R_AssignDrawPrimArgsInternal(&outArgs, 4 * quadCount, 2 * quadCount, 0, 0, source->input.data->endSwapFrame, source->viewStatsTarget, GFX_PRIM_STATS_CODE, GFX_TRI_SOURCE_DYNAMIC);
      R_DrawIndexedPrimitive(state, &outArgs);
    }
  }
}

/*
==============
R_DrawBoxMesh
==============
*/
void R_DrawBoxMesh(GfxCmdBufContext *context, const Material *material, GfxMeshData *mesh, MaterialTechniqueType techType)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufSourceState *v8; 
  GfxViewport outViewport; 
  GfxDrawPrimArgs outArgs; 

  state = context->state;
  if ( R_BeginMaterial(state, material, techType) )
  {
    if ( state->vertDeclType != VERTDECL_GENERIC )
      state->pipelineStateDirty = 1;
    source = context->source;
    v8 = context->source;
    state->vertDeclType = VERTDECL_GENERIC;
    R_Set3D(v8);
    if ( (*((_BYTE *)source + 11668) & 2) != 0 )
    {
      R_GetViewport(source, &outViewport);
      R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
      R_UpdateViewport(source, &outViewport);
    }
    outViewport = (GfxViewport)*context;
    if ( R_SetupPass((GfxCmdBufContext *)&outViewport) )
    {
      outViewport = (GfxViewport)*context;
      R_SetupPassStableArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(1058)");
      R_SetMeshStream(state, mesh, 8u);
      outViewport = (GfxViewport)*context;
      R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(1065)");
      outViewport = (GfxViewport)*context;
      R_SetupPassPerPrimArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(1066)");
      R_AssignDrawPrimArgsInternal(&outArgs, 8, 12, 0, 0, source->input.data->endSwapFrame, source->viewStatsTarget, GFX_PRIM_STATS_CODE, GFX_TRI_SOURCE_DYNAMIC);
      R_DrawIndexedPrimitive(state, &outArgs);
    }
  }
}

/*
==============
R_DrawQuadMesh
==============
*/
void R_DrawQuadMesh(GfxCmdBufContext *context, const Material *material, GfxMeshData *quadMesh)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufSourceState *v7; 
  GfxViewport outViewport; 
  GfxDrawPrimArgs outArgs; 

  state = context->state;
  if ( R_BeginMaterial(state, material, TECHNIQUE_EMISSIVE) )
  {
    if ( state->vertDeclType != VERTDECL_GENERIC )
      state->pipelineStateDirty = 1;
    source = context->source;
    v7 = context->source;
    state->vertDeclType = VERTDECL_GENERIC;
    R_Set2D(v7);
    if ( (*((_BYTE *)source + 11668) & 2) != 0 )
    {
      R_GetViewport(source, &outViewport);
      R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
      R_UpdateViewport(source, &outViewport);
    }
    outViewport = (GfxViewport)*context;
    if ( R_SetupPass((GfxCmdBufContext *)&outViewport) )
    {
      outViewport = (GfxViewport)*context;
      R_SetupPassStableArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(795)");
      R_SetMeshStream(state, quadMesh, 4u);
      outViewport = (GfxViewport)*context;
      R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(799)");
      outViewport = (GfxViewport)*context;
      R_SetupPassPerPrimArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(800)");
      R_AssignDrawPrimArgsInternal(&outArgs, 4, 2, 0, 0, source->input.data->endSwapFrame, source->viewStatsTarget, GFX_PRIM_STATS_CODE, GFX_TRI_SOURCE_DYNAMIC);
      R_DrawIndexedPrimitive(state, &outArgs);
    }
  }
}

/*
==============
R_EndUpdateBatchedQuadMesh
==============
*/
void R_EndUpdateBatchedQuadMesh(GfxMeshData *mesh)
{
  ;
}

/*
==============
R_GetMeshVerts
==============
*/
unsigned __int8 *R_GetMeshVerts(GfxMeshData *mesh, int baseVertex)
{
  return (unsigned __int8 *)mesh->vb.wrappedBuffer.data + baseVertex * mesh->vertSize;
}

/*
==============
R_GetQuadMeshData
==============
*/
void R_GetQuadMeshData(GfxDevice *device, GfxMeshData *meshData, int width, int height)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 751, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_GetQuadMeshData unimplemented on this platform") )
    __debugbreak();
}

/*
==============
R_InitBatchedQuadMesh
==============
*/
void R_InitBatchedQuadMesh(GfxMeshData *mesh, int quadCount)
{
  unsigned __int16 *indices; 
  unsigned __int16 v4; 
  __int64 v6; 
  __int16 v7; 

  indices = mesh->indices;
  v4 = 0;
  if ( quadCount > 0 )
  {
    v6 = 0i64;
    v7 = 2;
    do
    {
      ++v4;
      indices[v6] = v7 + 1;
      v6 += 6i64;
      indices[v6 - 5] = v7 - 2;
      indices[v6 - 4] = v7;
      indices[v6 - 3] = v7;
      indices[v6 - 2] = v7 - 2;
      indices[v6 - 1] = v7 - 1;
      v7 += 4;
    }
    while ( v4 < quadCount );
  }
  if ( 6 * quadCount > mesh->totalIndexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 54, ASSERT_TYPE_ASSERT, "(indexCount <= R_GetMeshTotalIndexCount( mesh ))", (const char *)&queryFormat, "indexCount <= R_GetMeshTotalIndexCount( mesh )") )
    __debugbreak();
  mesh->indexCount = 6 * quadCount;
  R_SetMeshUsedVertexCount(mesh, 4 * quadCount);
}

/*
==============
R_InitDynamicMesh
==============
*/
void R_InitDynamicMesh(GfxMeshData *mesh, const char *debugName, unsigned int indexCount, unsigned int vertCount, unsigned int vertSize, unsigned int quadCount, unsigned int lightingCount, unsigned int perEmitterDataCount, unsigned int perFlareDataCount, unsigned int packedAtlasDataCount, unsigned int perGlassVertexDataCount)
{
  GfxMeshDataLightingInput *(*lightingBufferData)[6]; 
  const char *v12; 
  __int64 v13; 
  unsigned int v15; 
  const char *v16; 
  __int64 zoneName; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  unsigned int v22; 
  GfxMeshDataLightingInput *v23; 
  const char *v24; 
  bool v25; 
  GfxSpriteQuad *v26; 
  GfxSpriteEmitter *v27; 
  GfxEffectFlare *v28; 
  GfxPackedAtlasData *v29; 
  GfxGlassVertex *v30; 
  ID3D12Resource **p_ib; 
  unsigned __int16 *v32; 
  unsigned __int8 **placement; 
  void *initialData; 
  GfxBufferCreationContext v35; 
  GfxBufferCreationContext v36; 
  GfxBufferCreationContext v37; 
  GfxBufferCreationContext v38; 
  GfxBufferCreationContext v39; 
  GfxBufferCreationContext v40; 
  GfxBufferCreationContext v41; 
  GfxBufferCreationContext v42; 
  GfxBufferCreationContext v43; 
  GfxBufferCreationContext v44; 
  __int64 v45; 

  lightingBufferData = mesh->lightingBufferData;
  v12 = debugName;
  mesh->vertSize = vertSize;
  v38.zoneName = (const char *)2;
  v13 = 69i64;
  v37.zoneName = NULL;
  v45 = 69i64;
  v15 = lightingCount;
  v16 = NULL;
  do
  {
    zoneName = 6i64;
    v18 = 0i64;
    v36.zoneName = (const char *)6;
    v19 = 1;
    v20 = 0i64;
    do
    {
      if ( v15 )
      {
        v39.zoneName = (char *)&queryFormat.fmt + 3;
        v39.objectName = "lightingBufferData";
        v21 = v15;
        v41 = v39;
        if ( v15 > 512 / v19 * (512 / v19) )
          v21 = 512 / v19 * (512 / v19);
        *(&mesh->perGlassVertexDataCount + v13 + v18) = v21;
        v22 = 32 * v21;
        v23 = (GfxMeshDataLightingInput *)R_AllocGfxBufferMemory(v22, &v41);
        (*lightingBufferData)[0] = v23;
        v40.zoneName = (char *)&queryFormat.fmt + 3;
        v24 = &v16[v20];
        v40.objectName = debugName;
        v42 = v40;
        R_CreateComputeRawBuffer(v22, 0, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v23, &mesh->lightingBuffer[0][(_QWORD)v24], &v42);
        v12 = debugName;
        v35.zoneName = (char *)&queryFormat.fmt + 3;
        v35.objectName = debugName;
        v43 = v35;
        R_CreateComputeRawBufferView(*((ID3D12Resource **)&mesh->indexCount + v18 + v45), &mesh->lightingView[0][(_QWORD)v24], &v43);
        zoneName = (__int64)v36.zoneName;
        v15 = lightingCount;
        v13 = v45;
        v16 = v37.zoneName;
        mesh->lightGridBuffers = NULL;
      }
      else
      {
        (*lightingBufferData)[0] = NULL;
      }
      ++v20;
      v19 = __ROL4__(v19, 1);
      ++v18;
      lightingBufferData = (GfxMeshDataLightingInput *(*)[6])((char *)lightingBufferData + 8);
      v36.zoneName = (const char *)--zoneName;
    }
    while ( zoneName );
    v16 += 6;
    v13 += 6i64;
    v25 = v38.zoneName-- == (const char *)1;
    v37.zoneName = v16;
    v45 = v13;
  }
  while ( !v25 );
  if ( quadCount )
  {
    v35.zoneName = (char *)&queryFormat.fmt + 3;
    v35.objectName = "perQuadBufferData";
    v26 = (GfxSpriteQuad *)R_AllocGfxBufferMemory(quadCount << 7, &v35);
    mesh->perQuadDataLimit = quadCount;
    mesh->perQuadBufferData = v26;
    R_CreateGfxWrappedBuffer(&mesh->perQuadBuffer, GfxWrappedBuffer_Structured, 128, quadCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v26, "perQuadDataBuffer");
  }
  else
  {
    mesh->perQuadBufferData = NULL;
  }
  if ( perEmitterDataCount )
  {
    v35.zoneName = (char *)&queryFormat.fmt + 3;
    v35.objectName = "perEmitterBufferData";
    v40 = v35;
    v27 = (GfxSpriteEmitter *)R_AllocGfxBufferMemory(192 * perEmitterDataCount, &v40);
    mesh->perEmitterBufferData = v27;
    mesh->perEmitterDataCount = 0;
    mesh->perEmitterDataLimit = perEmitterDataCount;
    R_CreateGfxWrappedBuffer(&mesh->perEmitterBuffer, GfxWrappedBuffer_Structured, 192, perEmitterDataCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v27, "perEmitterDataBuffer");
  }
  else
  {
    mesh->perEmitterBufferData = NULL;
  }
  if ( perFlareDataCount )
  {
    if ( perEmitterDataCount != perFlareDataCount )
    {
      LODWORD(initialData) = perFlareDataCount;
      LODWORD(placement) = perEmitterDataCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 99, ASSERT_TYPE_ASSERT, "( perEmitterDataCount ) == ( perFlareDataCount )", "%s == %s\n\t%u, %u", "perEmitterDataCount", "perFlareDataCount", placement, initialData) )
        __debugbreak();
    }
    v35.zoneName = (char *)&queryFormat.fmt + 3;
    v35.objectName = "perFlareData";
    v39 = v35;
    v28 = (GfxEffectFlare *)R_AllocGfxBufferMemory(12 * perFlareDataCount, &v39);
    mesh->perFlareData = v28;
    mesh->perFlareDataCount = 0;
    mesh->perFlareDataLimit = perFlareDataCount;
    R_CreateGfxWrappedBuffer(&mesh->perFlareDataBuffer, GfxWrappedBuffer_Structured, 12, perFlareDataCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v28, "perFlareDataBuffer");
  }
  else
  {
    mesh->perFlareData = NULL;
  }
  if ( packedAtlasDataCount )
  {
    v35.zoneName = (char *)&queryFormat.fmt + 3;
    v35.objectName = "packedAtlasData";
    v38 = v35;
    v29 = (GfxPackedAtlasData *)R_AllocGfxBufferMemory(24 * packedAtlasDataCount, &v38);
    mesh->packedAtlasData = v29;
    mesh->packedAtlasDataCount = 0;
    mesh->packedAtlasDataLimit = packedAtlasDataCount;
    R_CreateGfxWrappedBuffer(&mesh->packedAtlasBuffer, GfxWrappedBuffer_Structured, 24, packedAtlasDataCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v29, "packedAtlasBuffer");
  }
  else
  {
    mesh->packedAtlasData = NULL;
  }
  if ( perGlassVertexDataCount )
  {
    v35.objectName = "perGlassVertexData";
    v35.zoneName = (char *)&queryFormat.fmt + 3;
    v37 = v35;
    v30 = (GfxGlassVertex *)R_AllocGfxBufferMemory(28 * perGlassVertexDataCount, &v37);
    mesh->perGlassVertexData = v30;
    mesh->perGlassVertexDataCount = 0;
    mesh->perGlassVertexDataLimit = perGlassVertexDataCount;
    R_CreateGfxWrappedBuffer(&mesh->perGlassVertexDataBuffer, GfxWrappedBuffer_Structured, 28, perGlassVertexDataCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v30, "glassVertexDataBuffer");
  }
  else
  {
    mesh->perGlassVertexData = NULL;
  }
  p_ib = &mesh->ib;
  if ( indexCount )
  {
    v35.zoneName = (char *)&queryFormat.fmt + 3;
    v35.objectName = v12;
    v36 = v35;
    v32 = (unsigned __int16 *)R_AllocDynamicIndexBuffer(p_ib, 2 * indexCount, &v36);
  }
  else
  {
    R_AssignNullBuffer(p_ib);
    v32 = NULL;
  }
  mesh->indices = v32;
  mesh->totalIndexCount = indexCount;
  mesh->indexCount = 0;
  if ( vertCount )
  {
    v35.zoneName = (char *)&queryFormat.fmt + 3;
    v35.objectName = v12;
    v44 = v35;
    R_InitDynamicVertexBufferState(&mesh->vb, vertSize * vertCount, 0, D3D12_RESOURCE_STATE_GENERIC_READ, &v44);
  }
  else
  {
    R_AssignNullBuffer(&mesh->vb.wrappedBuffer.buffer);
    mesh->vb.total = 0;
  }
}

/*
==============
R_InitWorldMultiLightGridFXLightingBuffers
==============
*/
void R_InitWorldMultiLightGridFXLightingBuffers(const GfxMeshData *mesh, GfxMultiLightGridFXLightingBuffers *lightGridBuffers, unsigned int totalLightGridSampleCount)
{
  unsigned int (*lightingLimit)[6]; 
  GfxMeshDataPerLightGridEntry *(*lightGridLightingElemsPrefixSum)[6]; 
  GfxWrappedBuffer *v5; 
  __int64 v6; 
  unsigned int v7; 
  int ElementSizeForDataFormat; 
  int v9; 
  bool v10; 
  __int64 v11; 
  unsigned int *lightGridDataLimit; 

  v11 = 2i64;
  lightGridDataLimit = lightGridBuffers->lightGridDataLimit;
  lightingLimit = mesh->lightingLimit;
  lightGridLightingElemsPrefixSum = lightGridBuffers->lightGridLightingElemsPrefixSum;
  v5 = lightGridBuffers->lightGridLightingElemsPrefixSumBuffer[0];
  do
  {
    v6 = 6i64;
    do
    {
      v7 = *(_DWORD *)lightingLimit;
      ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
      R_CreateGfxWrappedBuffer(v5 - 12, GfxWrappedBuffer_Data, ElementSizeForDataFormat, v7, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "meshActiveLightGridsBuffer");
      R_CreateGfxWrappedBuffer(v5, GfxWrappedBuffer_Structured, 80, (v7 + 63) >> 6, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "meshLightingElems");
      v9 = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
      R_CreateGfxWrappedBuffer(v5 + 12, GfxWrappedBuffer_Data, v9, v7, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "meshLightingOffsetBuffer");
      (*lightGridLightingElemsPrefixSum)[-12] = (GfxMeshDataPerLightGridEntry *)R_BeginWrappedBufferDataWrite(v5 - 12);
      (*lightGridLightingElemsPrefixSum)[0] = (GfxMeshDataPerLightGridEntry *)R_BeginWrappedBufferDataWrite(v5);
      (*lightGridLightingElemsPrefixSum)[12] = (GfxMeshDataPerLightGridEntry *)R_BeginWrappedBufferDataWrite(v5 + 12);
      ++v5;
      lightGridLightingElemsPrefixSum = (GfxMeshDataPerLightGridEntry *(*)[6])((char *)lightGridLightingElemsPrefixSum + 8);
      lightingLimit = (unsigned int (*)[6])((char *)lightingLimit + 4);
      --v6;
    }
    while ( v6 );
    *lightGridDataLimit = totalLightGridSampleCount;
    v10 = v11-- == 1;
    ++lightGridDataLimit;
  }
  while ( !v10 );
}

/*
==============
R_ReserveMeshVerts
==============
*/
char R_ReserveMeshVerts(GfxMeshData *mesh, int vertCount, int *baseVertex)
{
  unsigned int v6; 
  unsigned __int32 v7; 

  if ( vertCount < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 626, ASSERT_TYPE_ASSERT, "( ( vertCount >= 0 ) )", "( vertCount ) = %i", vertCount) )
    __debugbreak();
  if ( !baseVertex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 627, ASSERT_TYPE_ASSERT, "(baseVertex)", (const char *)&queryFormat, "baseVertex") )
    __debugbreak();
  if ( !mesh->vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 628, ASSERT_TYPE_ASSERT, "(mesh->vertSize)", (const char *)&queryFormat, "mesh->vertSize") )
    __debugbreak();
  v6 = mesh->vertSize * vertCount;
  if ( (((_BYTE)mesh + 24) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &mesh->vb) )
    __debugbreak();
  v7 = _InterlockedExchangeAdd(&mesh->vb.used, v6);
  if ( (signed __int32)(v7 + v6) > mesh->vb.total )
    return 0;
  *baseVertex = v7 / mesh->vertSize;
  return 1;
}

/*
==============
R_ResetMesh
==============
*/
void R_ResetMesh(GfxMeshData *mesh, GfxMultiLightGridFXLightingBuffers *lightGridBuffers)
{
  unsigned int (*m_offsets)[3]; 
  __int64 v4; 
  __int64 v5; 
  unsigned int *v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 

  mesh->lightGridBuffers = lightGridBuffers;
  R_SetMeshUsedVertexCount(mesh, 0);
  m_offsets = mesh->lightmapPacker[0].m_offsets;
  v4 = 2i64;
  mesh->indexCount = 0;
  v5 = 2i64;
  v6 = &mesh->lightingCount[0][2];
  do
  {
    *((_QWORD *)v6 - 1) = 0i64;
    m_offsets += 7;
    *(_QWORD *)v6 = 0i64;
    *((_QWORD *)v6 + 1) = 0i64;
    v6 += 6;
    *(_QWORD *)&(*m_offsets)[-27] = 0i64;
    *(_QWORD *)&(*m_offsets)[-25] = 0i64;
    (*m_offsets)[-23] = 0;
    (*m_offsets)[-22] = 256;
    *(_QWORD *)&(*m_offsets)[-21] = 0i64;
    *(_QWORD *)&(*m_offsets)[-19] = 0i64;
    *(_QWORD *)&(*m_offsets)[-17] = 0i64;
    *(_QWORD *)&(*m_offsets)[-15] = 0i64;
    *(_QWORD *)&(*m_offsets)[-13] = 0i64;
    *(_QWORD *)&(*m_offsets)[-11] = 0i64;
    *(_QWORD *)&(*m_offsets)[-9] = 0i64;
    (*m_offsets)[-7] = 0;
    --v5;
  }
  while ( v5 );
  if ( mesh->lightGridBuffers )
  {
    v7 = 0i64;
    v8 = 1444i64;
    do
    {
      v9 = 6i64;
      do
      {
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[0][5][v8 / 4 + 19] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0] + v8 - 4) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[0][5].data + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0].buffer + v8) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][0].buffer + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 1] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0].buffer + v8 + 4) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][0].buffer + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 2] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0].view.resource + v8) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][0].view.resource + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 3] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0].view.resource + v8 + 4) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][0].view.resource + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 4] = 0;
        *(unsigned int *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0].view.view + v8) = 0;
        *(unsigned int *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][0].view.view + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 5] = 0;
        *(unsigned int *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0].view.view + v8 + 4) = 0;
        *(unsigned int *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][0].view.view + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 6] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0].data + v8) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][0].data + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 7] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][0].data + v8 + 4) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][0].data + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 8] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][1].buffer + v8) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][1].buffer + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 9] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][1].buffer + v8 + 4) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][1].buffer + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 10] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][1].view.resource + v8) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][1].view.resource + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 11] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][1].view.resource + v8 + 4) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][1].view.resource + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 12] = 0;
        *(unsigned int *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][1].view.view + v8) = 0;
        *(unsigned int *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][1].view.view + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 13] = 0;
        *(unsigned int *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][1].view.view + v8 + 4) = 0;
        *(unsigned int *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][1].view.view + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 14] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][1].data + v8) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][1].data + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 15] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][1].data + v8 + 4) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][1].data + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 16] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][2].buffer + v8) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][2].buffer + v8) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 17] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][2].buffer + v8 + 4) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][2].buffer + v8 + 4) = -1;
        mesh->lightGridBuffers->lightGridLightingElemsPrefixSumBufferLastEntry[1][0][v8 / 4 + 18] = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsActiveBuffer[0][2].view.resource + v8) = 0;
        *(_DWORD *)((char *)&mesh->lightGridBuffers->lightGridsDataOffsetBuffer[1][2].view.resource + v8) = -1;
        v8 += 80i64;
        --v9;
      }
      while ( v9 );
      mesh->lightGridBuffers->lightGridDataCount[v7++] = 0;
      --v4;
    }
    while ( v4 );
  }
  mesh->perQuadDataCount = 0;
  mesh->perEmitterDataCount = 0;
  mesh->perFlareDataCount = 0;
  mesh->packedAtlasDataCount = 0;
  mesh->perGlassVertexDataCount = 0;
}

/*
==============
R_SetBoxMesh
==============
*/
void R_SetBoxMesh(GfxBoxMeshData *mesh, float x, float y, float z, float w, float h, float d, float s0, float t0, float s1, float t1, unsigned int color)
{
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 1019, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  mesh->height = h;
  mesh->depth = d;
  mesh->x = x;
  mesh->y = y;
  mesh->z = z;
  mesh->width = w;
  R_SetBoxMeshData(&mesh->meshData, x, y, z, w, h, d, s0, t0, s1, t1, color);
}

/*
==============
R_SetBoxMeshData
==============
*/
void R_SetBoxMeshData(GfxMeshData *mesh, float x, float y, float z, float w, float h, float d, float s0, float t0, float s1, float t1, unsigned int color)
{
  unsigned int vertSize; 
  unsigned int total; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned __int16 *indices; 
  GfxVertex *data; 
  __int64 v20; 
  __int64 v21; 

  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 925, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( mesh->vertSize != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 926, ASSERT_TYPE_ASSERT, "( mesh->vertSize ) == ( sizeof( GfxVertex ) )", "%s == %s\n\t%i, %i", "mesh->vertSize", "sizeof( GfxVertex )", mesh->vertSize, 32) )
    __debugbreak();
  vertSize = mesh->vertSize;
  if ( !vertSize )
    goto LABEL_17;
  total = mesh->vb.total;
  if ( total % vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
    __debugbreak();
  v15 = mesh->vertSize;
  if ( total / v15 != 8 )
  {
    if ( v15 )
    {
      v16 = mesh->vb.total;
      if ( v16 % v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
        __debugbreak();
      v17 = v16 / mesh->vertSize;
      goto LABEL_18;
    }
LABEL_17:
    v17 = 0;
LABEL_18:
    LODWORD(v21) = 8;
    LODWORD(v20) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 927, ASSERT_TYPE_ASSERT, "( R_GetMeshTotalVertexCount( mesh ) ) == ( 8 )", "%s == %s\n\t%i, %i", "R_GetMeshTotalVertexCount( mesh )", "8", v20, v21) )
      __debugbreak();
  }
  if ( mesh->totalIndexCount != 36 )
  {
    LODWORD(v21) = 36;
    LODWORD(v20) = mesh->totalIndexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 928, ASSERT_TYPE_ASSERT, "( R_GetMeshTotalIndexCount( mesh ) ) == ( 36 )", "%s == %s\n\t%i, %i", "R_GetMeshTotalIndexCount( mesh )", "36", v20, v21) )
      __debugbreak();
  }
  indices = mesh->indices;
  *(_DWORD *)indices = 0x20000;
  *((_DWORD *)indices + 1) = 65537;
  *((_DWORD *)indices + 2) = 196610;
  *((_DWORD *)indices + 3) = 196609;
  *((_DWORD *)indices + 4) = 327685;
  *((_DWORD *)indices + 5) = 458755;
  *((_DWORD *)indices + 6) = 4;
  *((_DWORD *)indices + 7) = 327685;
  *((_DWORD *)indices + 8) = 0x10000;
  *((_DWORD *)indices + 9) = 458757;
  *((_DWORD *)indices + 10) = 262148;
  *((_DWORD *)indices + 11) = 393223;
  *((_QWORD *)indices + 6) = 393220i64;
  *((_DWORD *)indices + 14) = 131078;
  *((_DWORD *)indices + 15) = 393218;
  *((_DWORD *)indices + 16) = 196611;
  *((_DWORD *)indices + 17) = 458758;
  data = (GfxVertex *)mesh->vb.wrappedBuffer.data;
  R_SetVertex3d(data, x + w, y - h, z + d, s0, t0, color);
  R_SetVertex3d(data + 1, x - w, y - h, z + d, s1, t0, color);
  R_SetVertex3d(data + 2, x + w, y - h, z - d, s1, t1, color);
  R_SetVertex3d(data + 3, x - w, y - h, z - d, s0, t1, color);
  R_SetVertex3d(data + 4, x + w, y + h, z + d, s0, t0, color);
  R_SetVertex3d(data + 5, x - w, y + h, z + d, s1, t0, color);
  R_SetVertex3d(data + 6, x + w, y + h, z - d, s1, t1, color);
  R_SetVertex3d(data + 7, x - w, y + h, z - d, s0, t1, color);
  if ( mesh->totalIndexCount < 0x24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 54, ASSERT_TYPE_ASSERT, "(indexCount <= R_GetMeshTotalIndexCount( mesh ))", (const char *)&queryFormat, "indexCount <= R_GetMeshTotalIndexCount( mesh )") )
    __debugbreak();
  mesh->indexCount = 36;
  R_SetMeshUsedVertexCount(mesh, 8u);
}

/*
==============
R_SetQuadMesh
==============
*/
void R_SetQuadMesh(GfxQuadMeshData *quadMesh, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color)
{
  if ( !quadMesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 758, ASSERT_TYPE_ASSERT, "(quadMesh)", (const char *)&queryFormat, "quadMesh") )
    __debugbreak();
  quadMesh->height = h;
  quadMesh->x = x;
  quadMesh->y = y;
  quadMesh->width = w;
  R_SetQuadMeshData(&quadMesh->meshData, x, y, w, h, s0, t0, s1, t1, color, 0.0);
}

/*
==============
R_SetQuadMeshData
==============
*/
void R_SetQuadMeshData(GfxMeshData *mesh, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, float z)
{
  unsigned int vertSize; 
  unsigned int total; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned __int16 *indices; 
  GfxVertex *data; 
  __int64 v19; 
  __int64 v20; 

  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 694, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( mesh->vertSize != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 695, ASSERT_TYPE_ASSERT, "( mesh->vertSize ) == ( sizeof( GfxVertex ) )", "%s == %s\n\t%i, %i", "mesh->vertSize", "sizeof( GfxVertex )", mesh->vertSize, 32) )
    __debugbreak();
  vertSize = mesh->vertSize;
  if ( !vertSize )
    goto LABEL_17;
  total = mesh->vb.total;
  if ( total % vertSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
    __debugbreak();
  v14 = mesh->vertSize;
  if ( total / v14 != 4 )
  {
    if ( v14 )
    {
      v15 = mesh->vb.total;
      if ( v15 % v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
        __debugbreak();
      v16 = v15 / mesh->vertSize;
      goto LABEL_18;
    }
LABEL_17:
    v16 = 0;
LABEL_18:
    LODWORD(v20) = 4;
    LODWORD(v19) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 696, ASSERT_TYPE_ASSERT, "( R_GetMeshTotalVertexCount( mesh ) ) == ( 4 )", "%s == %s\n\t%i, %i", "R_GetMeshTotalVertexCount( mesh )", "4", v19, v20) )
      __debugbreak();
  }
  if ( mesh->totalIndexCount != 6 )
  {
    LODWORD(v20) = 6;
    LODWORD(v19) = mesh->totalIndexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 697, ASSERT_TYPE_ASSERT, "( R_GetMeshTotalIndexCount( mesh ) ) == ( 6 )", "%s == %s\n\t%i, %i", "R_GetMeshTotalIndexCount( mesh )", "6", v19, v20) )
      __debugbreak();
  }
  indices = mesh->indices;
  *(_DWORD *)indices = 3;
  *((_DWORD *)indices + 1) = 131074;
  *((_DWORD *)indices + 2) = 0x10000;
  data = (GfxVertex *)mesh->vb.wrappedBuffer.data;
  R_SetVertex3d(data, x, y, z, s0, t0, color);
  R_SetVertex3d(data + 1, x + w, y, z, s1, t0, color);
  R_SetVertex3d(data + 2, x + w, y + h, z, s1, t1, color);
  R_SetVertex3d(data + 3, x, y + h, z, s0, t1, color);
  if ( mesh->totalIndexCount < 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 54, ASSERT_TYPE_ASSERT, "(indexCount <= R_GetMeshTotalIndexCount( mesh ))", (const char *)&queryFormat, "indexCount <= R_GetMeshTotalIndexCount( mesh )") )
    __debugbreak();
  mesh->indexCount = 6;
  R_SetMeshUsedVertexCount(mesh, 4u);
}

/*
==============
R_ShutdownWorldMultiLightGridFXLightingBuffers
==============
*/
void R_ShutdownWorldMultiLightGridFXLightingBuffers(GfxMultiLightGridFXLightingBuffers *lightGridBuffers)
{
  GfxWrappedBuffer *v1; 
  __int64 v2; 
  __int64 v3; 

  v1 = lightGridBuffers->lightGridLightingElemsPrefixSumBuffer[0];
  v2 = 2i64;
  do
  {
    v3 = 6i64;
    do
    {
      R_ShutdownGfxWrappedBuffer(v1 - 12);
      R_ShutdownGfxWrappedBuffer(v1);
      R_ShutdownGfxWrappedBuffer(v1 + 12);
      ++v1;
      --v3;
    }
    while ( v3 );
    --v2;
  }
  while ( v2 );
}

/*
==============
R_UpdateBatchedQuadMesh
==============
*/
void R_UpdateBatchedQuadMesh(GfxMeshData *mesh, int quadIndex, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color)
{
  GfxVertex *data; 
  int v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 847, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( mesh->vertSize != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 848, ASSERT_TYPE_ASSERT, "( mesh->vertSize ) == ( sizeof( GfxVertex ) )", "%s == %s\n\t%i, %i", "mesh->vertSize", "sizeof( GfxVertex )", mesh->vertSize, 32) )
    __debugbreak();
  if ( mesh->vb.total < (quadIndex + 1) << 7 )
  {
    LODWORD(v16) = (quadIndex + 1) << 7;
    LODWORD(v15) = mesh->vb.total;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 849, ASSERT_TYPE_ASSERT, "( mesh->vb.total ) >= ( static_cast<int>( sizeof( GfxVertex ) * 4 * ( quadIndex + 1 ) ) )", "%s >= %s\n\t%i, %i", "mesh->vb.total", "static_cast<int>( sizeof( GfxVertex ) * 4 * ( quadIndex + 1 ) )", v15, v16) )
      __debugbreak();
  }
  data = (GfxVertex *)mesh->vb.wrappedBuffer.data;
  v14 = 4 * quadIndex;
  R_SetVertex2d(&data[v14], x, y, s0, t0, color);
  R_SetVertex2d(&data[v14 + 1], x + w, y, s1, t0, color);
  R_SetVertex2d(&data[v14 + 2], x + w, y + h, s1, t1, color);
  R_SetVertex2d(&data[v14 + 3], x, y + h, s0, t1, color);
}

