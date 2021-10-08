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

  _RSI = context;
  if ( context->source->viewMode != VIEW_MODE_2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 882, ASSERT_TYPE_ASSERT, "(context.source->viewMode == VIEW_MODE_2D)", (const char *)&queryFormat, "context.source->viewMode == VIEW_MODE_2D") )
    __debugbreak();
  state = _RSI->state;
  if ( R_BeginMaterial(state, material, TECHNIQUE_EMISSIVE) )
  {
    if ( state->vertDeclType != VERTDECL_GENERIC )
      state->pipelineStateDirty = 1;
    source = _RSI->source;
    state->vertDeclType = VERTDECL_GENERIC;
    if ( (*((_BYTE *)source + 11668) & 2) != 0 )
    {
      R_GetViewport(source, &outViewport);
      R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
      R_UpdateViewport(source, &outViewport);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rsp+0B8h+outViewport.x], xmm0
    }
    if ( R_SetupPass((GfxCmdBufContext *)&outViewport) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0B8h+outViewport.x], xmm0
      }
      R_SetupPassStableArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(907)");
      R_SetMeshStream(state, mesh, 4 * quadCount);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0B8h+outViewport.x], xmm0
      }
      R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(911)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0B8h+outViewport.x], xmm0
      }
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
  _RSI = context;
  if ( R_BeginMaterial(state, material, techType) )
  {
    if ( state->vertDeclType != VERTDECL_GENERIC )
      state->pipelineStateDirty = 1;
    source = _RSI->source;
    v8 = _RSI->source;
    state->vertDeclType = VERTDECL_GENERIC;
    R_Set3D(v8);
    if ( (*((_BYTE *)source + 11668) & 2) != 0 )
    {
      R_GetViewport(source, &outViewport);
      R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
      R_UpdateViewport(source, &outViewport);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rsp+0A8h+outViewport.x], xmm0
    }
    if ( R_SetupPass((GfxCmdBufContext *)&outViewport) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0A8h+outViewport.x], xmm0
      }
      R_SetupPassStableArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(1058)");
      R_SetMeshStream(state, mesh, 8u);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0A8h+outViewport.x], xmm0
      }
      R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(1065)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0A8h+outViewport.x], xmm0
      }
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
  _RSI = context;
  if ( R_BeginMaterial(state, material, TECHNIQUE_EMISSIVE) )
  {
    if ( state->vertDeclType != VERTDECL_GENERIC )
      state->pipelineStateDirty = 1;
    source = _RSI->source;
    v7 = _RSI->source;
    state->vertDeclType = VERTDECL_GENERIC;
    R_Set2D(v7);
    if ( (*((_BYTE *)source + 11668) & 2) != 0 )
    {
      R_GetViewport(source, &outViewport);
      R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
      R_UpdateViewport(source, &outViewport);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rsp+0A8h+outViewport.x], xmm0
    }
    if ( R_SetupPass((GfxCmdBufContext *)&outViewport) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0A8h+outViewport.x], xmm0
      }
      R_SetupPassStableArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(795)");
      R_SetMeshStream(state, quadMesh, 4u);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0A8h+outViewport.x], xmm0
      }
      R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&outViewport, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp(799)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rsp+0A8h+outViewport.x], xmm0
      }
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
  int v22; 
  unsigned int v23; 
  GfxMeshDataLightingInput *v24; 
  const char *v25; 
  bool v28; 
  GfxSpriteQuad *v30; 
  GfxSpriteEmitter *v32; 
  GfxEffectFlare *v34; 
  GfxPackedAtlasData *v36; 
  GfxGlassVertex *v38; 
  ID3D12Resource **p_ib; 
  unsigned __int16 *v41; 
  unsigned __int8 **placement; 
  void *initialData; 
  GfxBufferCreationContext v45; 
  GfxBufferCreationContext v46; 
  GfxBufferCreationContext v47; 
  GfxBufferCreationContext v48; 
  GfxBufferCreationContext v49; 
  GfxBufferCreationContext v50; 
  GfxBufferCreationContext v51; 
  GfxBufferCreationContext v52; 
  GfxBufferCreationContext v53; 
  GfxBufferCreationContext v54; 
  __int64 v55; 

  lightingBufferData = mesh->lightingBufferData;
  v12 = debugName;
  mesh->vertSize = vertSize;
  v48.zoneName = (const char *)2;
  v13 = 69i64;
  v47.zoneName = NULL;
  v55 = 69i64;
  v15 = lightingCount;
  v16 = NULL;
  do
  {
    zoneName = 6i64;
    v18 = 0i64;
    v46.zoneName = (const char *)6;
    v19 = 1;
    v20 = 0i64;
    do
    {
      if ( v15 )
      {
        v49.zoneName = (char *)&queryFormat.fmt + 3;
        v49.objectName = "lightingBufferData";
        __asm { vmovups xmm0, [rbp+3Fh+var_A0] }
        v22 = v15;
        __asm { vmovdqa [rbp+3Fh+var_80], xmm0 }
        if ( v15 > 512 / v19 * (512 / v19) )
          v22 = 512 / v19 * (512 / v19);
        *(&mesh->perGlassVertexDataCount + v13 + v18) = v22;
        v23 = 32 * v22;
        v24 = (GfxMeshDataLightingInput *)R_AllocGfxBufferMemory(v23, &v51);
        (*lightingBufferData)[0] = v24;
        v50.zoneName = (char *)&queryFormat.fmt + 3;
        v25 = &v16[v20];
        v50.objectName = debugName;
        __asm
        {
          vmovups xmm0, [rbp+3Fh+var_90]
          vmovdqa [rbp+3Fh+var_70], xmm0
        }
        R_CreateComputeRawBuffer(v23, 0, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v24, &mesh->lightingBuffer[0][(_QWORD)v25], &v52);
        v12 = debugName;
        v45.zoneName = (char *)&queryFormat.fmt + 3;
        v45.objectName = debugName;
        __asm
        {
          vmovups xmm0, [rsp+130h+var_E0]
          vmovdqa [rbp+3Fh+var_60], xmm0
        }
        R_CreateComputeRawBufferView(*((ID3D12Resource **)&mesh->indexCount + v18 + v55), &mesh->lightingView[0][(_QWORD)v25], &v53);
        zoneName = (__int64)v46.zoneName;
        v15 = lightingCount;
        v13 = v55;
        v16 = v47.zoneName;
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
      v46.zoneName = (const char *)--zoneName;
    }
    while ( zoneName );
    v16 += 6;
    v13 += 6i64;
    v28 = v48.zoneName-- == (const char *)1;
    v47.zoneName = v16;
    v55 = v13;
  }
  while ( !v28 );
  if ( quadCount )
  {
    v45.zoneName = (char *)&queryFormat.fmt + 3;
    v45.objectName = "perQuadBufferData";
    __asm
    {
      vmovups xmm0, [rsp+130h+var_E0]
      vmovdqa [rsp+130h+var_E0], xmm0
    }
    v30 = (GfxSpriteQuad *)R_AllocGfxBufferMemory(quadCount << 7, &v45);
    mesh->perQuadDataLimit = quadCount;
    mesh->perQuadBufferData = v30;
    R_CreateGfxWrappedBuffer(&mesh->perQuadBuffer, GfxWrappedBuffer_Structured, 128, quadCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v30, "perQuadDataBuffer");
  }
  else
  {
    mesh->perQuadBufferData = NULL;
  }
  if ( perEmitterDataCount )
  {
    v45.zoneName = (char *)&queryFormat.fmt + 3;
    v45.objectName = "perEmitterBufferData";
    __asm
    {
      vmovups xmm0, [rsp+130h+var_E0]
      vmovdqa [rbp+3Fh+var_90], xmm0
    }
    v32 = (GfxSpriteEmitter *)R_AllocGfxBufferMemory(192 * perEmitterDataCount, &v50);
    mesh->perEmitterBufferData = v32;
    mesh->perEmitterDataCount = 0;
    mesh->perEmitterDataLimit = perEmitterDataCount;
    R_CreateGfxWrappedBuffer(&mesh->perEmitterBuffer, GfxWrappedBuffer_Structured, 192, perEmitterDataCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v32, "perEmitterDataBuffer");
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
    v45.zoneName = (char *)&queryFormat.fmt + 3;
    v45.objectName = "perFlareData";
    __asm
    {
      vmovups xmm0, [rsp+130h+var_E0]
      vmovdqa [rbp+3Fh+var_A0], xmm0
    }
    v34 = (GfxEffectFlare *)R_AllocGfxBufferMemory(12 * perFlareDataCount, &v49);
    mesh->perFlareData = v34;
    mesh->perFlareDataCount = 0;
    mesh->perFlareDataLimit = perFlareDataCount;
    R_CreateGfxWrappedBuffer(&mesh->perFlareDataBuffer, GfxWrappedBuffer_Structured, 12, perFlareDataCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v34, "perFlareDataBuffer");
  }
  else
  {
    mesh->perFlareData = NULL;
  }
  if ( packedAtlasDataCount )
  {
    v45.zoneName = (char *)&queryFormat.fmt + 3;
    v45.objectName = "packedAtlasData";
    __asm
    {
      vmovups xmm0, [rsp+130h+var_E0]
      vmovdqa [rbp+3Fh+var_B0], xmm0
    }
    v36 = (GfxPackedAtlasData *)R_AllocGfxBufferMemory(24 * packedAtlasDataCount, &v48);
    mesh->packedAtlasData = v36;
    mesh->packedAtlasDataCount = 0;
    mesh->packedAtlasDataLimit = packedAtlasDataCount;
    R_CreateGfxWrappedBuffer(&mesh->packedAtlasBuffer, GfxWrappedBuffer_Structured, 24, packedAtlasDataCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v36, "packedAtlasBuffer");
  }
  else
  {
    mesh->packedAtlasData = NULL;
  }
  if ( perGlassVertexDataCount )
  {
    v45.objectName = "perGlassVertexData";
    v45.zoneName = (char *)&queryFormat.fmt + 3;
    __asm
    {
      vmovups xmm0, [rsp+130h+var_E0]
      vmovdqa [rsp+130h+var_C0], xmm0
    }
    v38 = (GfxGlassVertex *)R_AllocGfxBufferMemory(28 * perGlassVertexDataCount, &v47);
    mesh->perGlassVertexData = v38;
    mesh->perGlassVertexDataCount = 0;
    mesh->perGlassVertexDataLimit = perGlassVertexDataCount;
    R_CreateGfxWrappedBuffer(&mesh->perGlassVertexDataBuffer, GfxWrappedBuffer_Structured, 28, perGlassVertexDataCount, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, v38, "glassVertexDataBuffer");
  }
  else
  {
    mesh->perGlassVertexData = NULL;
  }
  p_ib = &mesh->ib;
  if ( indexCount )
  {
    v45.zoneName = (char *)&queryFormat.fmt + 3;
    v45.objectName = v12;
    __asm
    {
      vmovups xmm0, [rsp+130h+var_E0]
      vmovdqa [rsp+130h+var_D0], xmm0
    }
    v41 = (unsigned __int16 *)R_AllocDynamicIndexBuffer(p_ib, 2 * indexCount, &v46);
  }
  else
  {
    R_AssignNullBuffer(p_ib);
    v41 = NULL;
  }
  mesh->indices = v41;
  mesh->totalIndexCount = indexCount;
  mesh->indexCount = 0;
  if ( vertCount )
  {
    v45.zoneName = (char *)&queryFormat.fmt + 3;
    v45.objectName = v12;
    __asm
    {
      vmovups xmm0, [rsp+130h+var_E0]
      vmovdqa [rbp+3Fh+var_50], xmm0
    }
    R_InitDynamicVertexBufferState(&mesh->vb, vertSize * vertCount, 0, D3D12_RESOURCE_STATE_GENERIC_READ, &v54);
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

void __fastcall R_SetBoxMesh(GfxBoxMeshData *mesh, double x, double y, double z, float w, float h, float d, float s0, float t0, float s1, float t1, unsigned int color)
{
  __asm { vmovaps [rsp+98h+var_18], xmm6 }
  _RBX = mesh;
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 1019, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, [rsp+98h+d]
    vmovss  xmm3, [rsp+98h+h]
    vmovss  xmm4, [rsp+98h+w]
    vmovss  dword ptr [rbx+10h], xmm3
    vmovss  dword ptr [rbx+14h], xmm2
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rbx], xmm8
    vmovss  dword ptr [rbx+4], xmm7
    vmovss  dword ptr [rbx+8], xmm6
    vmovss  dword ptr [rbx+0Ch], xmm4
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
  }
  R_SetBoxMeshData(&_RBX->meshData, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, w, h, d, s0, t0, s1, t1, color);
}

/*
==============
R_SetBoxMeshData
==============
*/

void __fastcall R_SetBoxMeshData(GfxMeshData *mesh, double x, double y, double z, float w, float h, float d, float s0, float t0, float s1, float t1, unsigned int color)
{
  unsigned int vertSize; 
  unsigned int total; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int16 *indices; 
  GfxVertex *data; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float t; 
  float ta; 
  float tb; 
  float tc; 
  float td; 
  float te; 
  float tf; 
  float tg; 
  __int64 v95; 
  __int64 v96; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  dword ptr [rax+18h], xmm2
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
    vmovaps xmm11, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm10, xmm1
  }
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
  v28 = mesh->vertSize;
  if ( total / v28 != 8 )
  {
    if ( v28 )
    {
      v29 = mesh->vb.total;
      if ( v29 % v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
        __debugbreak();
      v30 = v29 / mesh->vertSize;
      goto LABEL_18;
    }
LABEL_17:
    v30 = 0;
LABEL_18:
    LODWORD(v96) = 8;
    LODWORD(v95) = v30;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 927, ASSERT_TYPE_ASSERT, "( R_GetMeshTotalVertexCount( mesh ) ) == ( 8 )", "%s == %s\n\t%i, %i", "R_GetMeshTotalVertexCount( mesh )", "8", v95, v96) )
      __debugbreak();
  }
  if ( mesh->totalIndexCount != 36 )
  {
    LODWORD(v96) = 36;
    LODWORD(v95) = mesh->totalIndexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 928, ASSERT_TYPE_ASSERT, "( R_GetMeshTotalIndexCount( mesh ) ) == ( 36 )", "%s == %s\n\t%i, %i", "R_GetMeshTotalIndexCount( mesh )", "36", v95, v96) )
      __debugbreak();
  }
  indices = mesh->indices;
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+s0]
    vaddss  xmm13, xmm11, [rsp+0F8h+d]
    vsubss  xmm8, xmm6, [rsp+0F8h+h]
    vaddss  xmm15, xmm10, [rsp+0F8h+w]
    vmovss  xmm12, [rsp+0F8h+t0]
  }
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
  __asm
  {
    vmovss  [rsp+0F8h+t], xmm12
    vmovaps xmm3, xmm13; z
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm0
  }
  R_SetVertex3d(data, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, t, color);
  __asm
  {
    vsubss  xmm14, xmm10, [rsp+0F8h+w]
    vmovss  xmm10, [rsp+0F8h+s1]
    vmovaps xmm1, xmm14; x
    vmovss  [rsp+0F8h+t], xmm12
    vmovaps xmm3, xmm13; z
    vmovaps xmm2, xmm8; y
    vmovss  dword ptr [rsp+0F8h+fmt], xmm10
  }
  R_SetVertex3d(data + 1, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, ta, color);
  __asm
  {
    vsubss  xmm11, xmm11, [rsp+0F8h+d]
    vmovss  xmm7, [rsp+0F8h+t1]
    vmovss  [rsp+0F8h+t], xmm7
    vmovaps xmm3, xmm11; z
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm10
  }
  R_SetVertex3d(data + 2, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, tb, color);
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+s0]
    vmovss  [rsp+0F8h+t], xmm7
    vmovaps xmm3, xmm11; z
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm14; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm0
  }
  R_SetVertex3d(data + 3, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, tc, color);
  __asm
  {
    vmovss  xmm0, [rsp+0F8h+arg_10]
    vaddss  xmm6, xmm0, [rsp+0F8h+h]
    vmovss  xmm8, [rsp+0F8h+s0]
    vmovaps xmm2, xmm6; y
    vmovss  [rsp+0F8h+t], xmm12
    vmovaps xmm3, xmm13; z
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm8
  }
  R_SetVertex3d(data + 4, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, td, color);
  __asm
  {
    vmovss  [rsp+0F8h+t], xmm12
    vmovaps xmm3, xmm13; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm14; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm10
  }
  R_SetVertex3d(data + 5, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, te, color);
  __asm
  {
    vmovss  [rsp+0F8h+t], xmm7
    vmovaps xmm3, xmm11; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm10
  }
  R_SetVertex3d(data + 6, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, tf, color);
  __asm
  {
    vmovss  [rsp+0F8h+t], xmm7
    vmovaps xmm3, xmm11; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm14; x
    vmovss  dword ptr [rsp+0F8h+fmt], xmm8
  }
  R_SetVertex3d(data + 7, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, tg, color);
  __asm
  {
    vmovaps xmm15, [rsp+0F8h+var_A8]
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm13, [rsp+0F8h+var_88]
    vmovaps xmm12, [rsp+0F8h+var_78]
    vmovaps xmm11, [rsp+0F8h+var_68]
    vmovaps xmm10, [rsp+0F8h+var_58]
    vmovaps xmm8, [rsp+0F8h+var_48]
    vmovaps xmm7, [rsp+0F8h+var_38]
    vmovaps xmm6, [rsp+0F8h+var_28]
  }
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

void __fastcall R_SetQuadMesh(GfxQuadMeshData *quadMesh, double x, double y, double w, float h, float s0, float t0, float s1, float t1, unsigned int color)
{
  float fmt; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 

  __asm { vmovaps [rsp+98h+var_18], xmm6 }
  _RBX = quadMesh;
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( !quadMesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 758, ASSERT_TYPE_ASSERT, "(quadMesh)", (const char *)&queryFormat, "quadMesh") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, [rsp+98h+h]
    vmovss  xmm1, [rsp+98h+s1]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_48], xmm0
    vmovss  xmm0, [rsp+98h+t1]
    vmovss  [rsp+98h+var_58], xmm0
    vmovss  xmm0, [rsp+98h+t0]
    vmovss  [rsp+98h+var_60], xmm1
    vmovss  xmm1, [rsp+98h+s0]
    vmovss  [rsp+98h+var_68], xmm0
    vmovss  [rsp+98h+var_70], xmm1
    vmovss  dword ptr [rsp+98h+fmt], xmm2
    vmovss  dword ptr [rbx+0Ch], xmm2
    vmovaps xmm2, xmm7; y
    vmovaps xmm3, xmm6; w
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rbx], xmm8
    vmovss  dword ptr [rbx+4], xmm7
    vmovss  dword ptr [rbx+8], xmm6
  }
  R_SetQuadMeshData(&_RBX->meshData, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v31, v32, v33, v34, color, v35);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
  }
}

/*
==============
R_SetQuadMeshData
==============
*/

void __fastcall R_SetQuadMeshData(GfxMeshData *mesh, double x, double y, double w, float h, float s0, float t0, float s1, float t1, unsigned int color, float z)
{
  unsigned int vertSize; 
  unsigned int total; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned __int16 *indices; 
  GfxVertex *data; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float t; 
  float ta; 
  float tb; 
  float tc; 
  __int64 v64; 
  __int64 v65; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0D8h+var_88], xmm12
    vmovaps xmm12, xmm1
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
  }
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
  v25 = mesh->vertSize;
  if ( total / v25 != 4 )
  {
    if ( v25 )
    {
      v26 = mesh->vb.total;
      if ( v26 % v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata_inline.h", 28, ASSERT_TYPE_ASSERT, "(vertexBytes % mesh->vertSize == 0)", (const char *)&queryFormat, "vertexBytes % mesh->vertSize == 0") )
        __debugbreak();
      v27 = v26 / mesh->vertSize;
      goto LABEL_18;
    }
LABEL_17:
    v27 = 0;
LABEL_18:
    LODWORD(v65) = 4;
    LODWORD(v64) = v27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 696, ASSERT_TYPE_ASSERT, "( R_GetMeshTotalVertexCount( mesh ) ) == ( 4 )", "%s == %s\n\t%i, %i", "R_GetMeshTotalVertexCount( mesh )", "4", v64, v65) )
      __debugbreak();
  }
  if ( mesh->totalIndexCount != 6 )
  {
    LODWORD(v65) = 6;
    LODWORD(v64) = mesh->totalIndexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 697, ASSERT_TYPE_ASSERT, "( R_GetMeshTotalIndexCount( mesh ) ) == ( 6 )", "%s == %s\n\t%i, %i", "R_GetMeshTotalIndexCount( mesh )", "6", v64, v65) )
      __debugbreak();
  }
  indices = mesh->indices;
  __asm
  {
    vmovss  xmm6, [rsp+0D8h+t0]
    vmovss  xmm10, [rsp+0D8h+z]
    vmovss  xmm11, [rsp+0D8h+s0]
  }
  *(_DWORD *)indices = 3;
  *((_DWORD *)indices + 1) = 131074;
  *((_DWORD *)indices + 2) = 0x10000;
  data = (GfxVertex *)mesh->vb.wrappedBuffer.data;
  __asm
  {
    vmovss  [rsp+0D8h+t], xmm6
    vmovaps xmm3, xmm10; z
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm12; x
    vmovss  dword ptr [rsp+0D8h+fmt], xmm11
  }
  R_SetVertex3d(data, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, t, color);
  __asm
  {
    vaddss  xmm9, xmm12, xmm7
    vmovss  xmm7, [rsp+0D8h+s1]
    vmovaps xmm1, xmm9; x
    vmovss  [rsp+0D8h+t], xmm6
    vmovaps xmm3, xmm10; z
    vmovaps xmm2, xmm8; y
    vmovss  dword ptr [rsp+0D8h+fmt], xmm7
  }
  R_SetVertex3d(data + 1, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, ta, color);
  __asm
  {
    vaddss  xmm8, xmm8, [rsp+0D8h+h]
    vmovss  xmm6, [rsp+0D8h+t1]
    vmovss  [rsp+0D8h+t], xmm6
    vmovaps xmm2, xmm8; y
    vmovaps xmm3, xmm10; z
    vmovaps xmm1, xmm9; x
    vmovss  dword ptr [rsp+0D8h+fmt], xmm7
  }
  R_SetVertex3d(data + 2, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, tb, color);
  __asm
  {
    vmovss  [rsp+0D8h+t], xmm6
    vmovaps xmm3, xmm10; z
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm12; x
    vmovss  dword ptr [rsp+0D8h+fmt], xmm11
  }
  R_SetVertex3d(data + 3, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, tc, color);
  __asm
  {
    vmovaps xmm12, [rsp+0D8h+var_88]
    vmovaps xmm11, [rsp+0D8h+var_78]
    vmovaps xmm10, [rsp+0D8h+var_68]
    vmovaps xmm9, [rsp+0D8h+var_58]
    vmovaps xmm8, [rsp+0D8h+var_48]
    vmovaps xmm7, [rsp+0D8h+var_38]
    vmovaps xmm6, [rsp+0D8h+var_28]
  }
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

void __fastcall R_UpdateBatchedQuadMesh(GfxMeshData *mesh, int quadIndex, double x, double y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color)
{
  GfxVertex *data; 
  int v21; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 v46; 
  __int64 v47; 
  char v48; 
  void *retaddr; 
  float wa; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm8
    vmovaps xmmword ptr [r11-38h], xmm9
    vmovaps xmmword ptr [r11-48h], xmm11
    vmovaps xmm11, xmm2
    vmovaps xmm8, xmm3
  }
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 847, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
    __debugbreak();
  if ( mesh->vertSize != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 848, ASSERT_TYPE_ASSERT, "( mesh->vertSize ) == ( sizeof( GfxVertex ) )", "%s == %s\n\t%i, %i", "mesh->vertSize", "sizeof( GfxVertex )", mesh->vertSize, 32) )
    __debugbreak();
  if ( mesh->vb.total < (quadIndex + 1) << 7 )
  {
    LODWORD(v47) = (quadIndex + 1) << 7;
    LODWORD(v46) = mesh->vb.total;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.cpp", 849, ASSERT_TYPE_ASSERT, "( mesh->vb.total ) >= ( static_cast<int>( sizeof( GfxVertex ) * 4 * ( quadIndex + 1 ) ) )", "%s >= %s\n\t%i, %i", "mesh->vb.total", "static_cast<int>( sizeof( GfxVertex ) * 4 * ( quadIndex + 1 ) )", v46, v47) )
      __debugbreak();
  }
  data = (GfxVertex *)mesh->vb.wrappedBuffer.data;
  v21 = 4 * quadIndex;
  __asm
  {
    vmovss  xmm6, [rsp+98h+t0]
    vmovss  xmm3, [rsp+98h+s0]; s
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm11; x
    vmovss  dword ptr [rsp+98h+fmt], xmm6
  }
  R_SetVertex2d(&data[v21], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, color);
  __asm
  {
    vaddss  xmm9, xmm11, [rsp+98h+w]
    vmovss  xmm3, [rsp+98h+s1]; s
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm9; x
    vmovss  dword ptr [rsp+98h+fmt], xmm6
  }
  R_SetVertex2d(&data[v21 + 1], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, color);
  __asm
  {
    vaddss  xmm8, xmm8, [rsp+98h+h]
    vmovss  xmm6, [rsp+98h+t1]
    vmovss  xmm3, [rsp+98h+s1]; s
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm9; x
    vmovss  dword ptr [rsp+98h+fmt], xmm6
  }
  R_SetVertex2d(&data[v21 + 2], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, color);
  __asm
  {
    vmovss  xmm3, [rsp+98h+s0]; s
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm11; x
    vmovss  [rsp+98h+w], xmm6
  }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-40h]
  }
  R_SetVertex2d(&data[v21 + 3], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, wa, color);
}

