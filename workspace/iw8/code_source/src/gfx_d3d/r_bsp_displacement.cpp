/*
==============
R_BuildSubDomainRangeConstantBuffers
==============
*/

void R_BuildSubDomainRangeConstantBuffers(void)
{
  ?R_BuildSubDomainRangeConstantBuffers@@YAXXZ();
}

/*
==============
R_AllocBspSurfIndirectArgs
==============
*/

bool __fastcall R_AllocBspSurfIndirectArgs(int *offset)
{
  return ?R_AllocBspSurfIndirectArgs@@YA_NPEAH@Z(offset);
}

/*
==============
R_ShutdownSubDomainRangeConstantBuffers
==============
*/

void R_ShutdownSubDomainRangeConstantBuffers(void)
{
  ?R_ShutdownSubDomainRangeConstantBuffers@@YAXXZ();
}

/*
==============
R_ExecuteBspTessFactorsComputeCmds
==============
*/

void __fastcall R_ExecuteBspTessFactorsComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *firstHeader)
{
  ?R_ExecuteBspTessFactorsComputeCmds@@YAXPEAUComputeCmdBufState@@PEBUComputeCmdList@@W4ComputeCmdType@@PEBUComputeCmdHeader@@@Z(state, list, type, firstHeader);
}

/*
==============
R_ShutdownBspTessFactorsConstantBuffers
==============
*/

void R_ShutdownBspTessFactorsConstantBuffers(void)
{
  ?R_ShutdownBspTessFactorsConstantBuffers@@YAXXZ();
}

/*
==============
R_AddBspSurfTessFactorsComputeCmd
==============
*/

bool __fastcall R_AddBspSurfTessFactorsComputeCmd(GfxBackEndData *data, GfxSceneViewType sceneViewType, const GfxPlacement *placement, GfxDrawSurf *drawSurf, unsigned int firstSurfIndex, unsigned int surfCount, unsigned int indirectArgsOffset, int enableNoTess)
{
  return ?R_AddBspSurfTessFactorsComputeCmd@@YA_NPEAUGfxBackEndData@@W4GfxSceneViewType@@PEBUGfxPlacement@@TGfxDrawSurf@@IIIH@Z(data, sceneViewType, placement, drawSurf, firstSurfIndex, surfCount, indirectArgsOffset, enableNoTess);
}

/*
==============
R_ReleaseDisplacementParms
==============
*/

void __fastcall R_ReleaseDisplacementParms(GfxWorld *world)
{
  ?R_ReleaseDisplacementParms@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_GetSubdomainMappingBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetSubdomainMappingBuffer()
{
  return ?R_GetSubdomainMappingBuffer@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
R_InitBspTessFactorsConstantBuffers
==============
*/

void R_InitBspTessFactorsConstantBuffers(void)
{
  ?R_InitBspTessFactorsConstantBuffers@@YAXXZ();
}

/*
==============
R_AddBspSurfTessFactorsComputeCmd
==============
*/
bool R_AddBspSurfTessFactorsComputeCmd(GfxBackEndData *data, GfxSceneViewType sceneViewType, const GfxPlacement *placement, GfxDrawSurf *drawSurf, unsigned int firstSurfIndex, unsigned int surfCount, unsigned int indirectArgsOffset, int enableNoTess)
{
  ComputeCmdList *cmdList; 
  _DWORD *v13; 
  GfxDrawSurfFields fields; 

  cmdList = data->compute.cmdList;
  v13 = R_AllocComputeCmdDataAligned(cmdList, 64, 8u);
  if ( !v13 )
    return 0;
  fields = drawSurf->fields;
  v13[9] = firstSurfIndex;
  v13[10] = surfCount;
  *(_QWORD *)v13 = data;
  *((_QWORD *)v13 + 1) = placement;
  *((GfxDrawSurfFields *)v13 + 1) = fields;
  v13[8] = sceneViewType;
  v13[11] = indirectArgsOffset;
  *((_QWORD *)v13 + 6) = 0i64;
  v13[14] = enableNoTess;
  return R_AddComputeCmd(cmdList, COMPUTECMD_BSP_TESS_FACTORS, v13);
}

/*
==============
R_AllocBspSurfIndirectArgs
==============
*/
bool R_AllocBspSurfIndirectArgs(int *offset)
{
  GfxComputeBufferState *tessFactorsBuffer; 
  int v3; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 554, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( !frontEndDataOut->tessFactorsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 555, ASSERT_TYPE_ASSERT, "(frontEndDataOut->tessFactorsBuffer)", (const char *)&queryFormat, "frontEndDataOut->tessFactorsBuffer") )
    __debugbreak();
  tessFactorsBuffer = frontEndDataOut->tessFactorsBuffer;
  if ( ((unsigned __int8)tessFactorsBuffer & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", frontEndDataOut->tessFactorsBuffer) )
    __debugbreak();
  v3 = _InterlockedExchangeAdd(&tessFactorsBuffer->used, 1u);
  *offset = v3;
  return v3 < 1024;
}

/*
==============
R_BuildSubDomainRangeConstantBuffers
==============
*/
void R_BuildSubDomainRangeConstantBuffers(void)
{
  vec4_t *initialData; 

  initialData = (vec4_t *)PMem_Alloc(0xC000ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Subdomain Mapping");
  memset_0(initialData, 0, 0xC000ui64);
  R_BuildSubDomainRemapEntries(initialData);
  R_CreateGfxWrappedBuffer(&bspDisplacementGlob.subdomainMappingBuffer, GfxWrappedBuffer_Structured, 16, 0xC00u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "Subdomain Mapping Constant Buffer");
  *(_QWORD *)&bspDisplacementGlob.sliceIndicesMinFree = -1i64;
}

/*
==============
R_BuildSubDomainRemapEntries
==============
*/
void R_BuildSubDomainRemapEntries(vec4_t *remapTable)
{
  unsigned __int8 v1; 
  unsigned __int8 *v2; 
  unsigned int v4; 
  const unsigned __int8 *subtris; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int mirror; 

  v1 = subdomainRemapInitTable[0];
  v2 = subdomainRemapInitTable;
  if ( subdomainRemapInitTable[0] != 0xFF )
  {
    while ( 1 )
    {
      if ( (v1 & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 327, ASSERT_TYPE_ASSERT, "(*pSubDivs & 64)", (const char *)&queryFormat, "*pSubDivs & SD_FLAG_SUBDIV") )
        __debugbreak();
      v4 = *v2;
      subtris = v2 + 1;
      v6 = (v4 >> 4) & 3;
      v7 = (v4 >> 2) & 3;
      v8 = v4 & 3;
      v9 = (v6 != v7) + (v7 != v8);
      v2 = (unsigned __int8 *)R_BuildSubDomainRemapSubDivEntries(v6, v7, v8, 1u, 0, 0, v2 + 1, remapTable);
      if ( v9 )
      {
        R_BuildSubDomainRemapSubDivEntries(v7, v8, v6, 1u, 1u, 0, subtris, remapTable);
        R_BuildSubDomainRemapSubDivEntries(v8, v6, v7, 1u, 2u, 0, subtris, remapTable);
        if ( v9 >= 2 )
        {
          R_BuildSubDomainRemapSubDivEntries(v7, v6, v8, 1u, 0, 1u, subtris, remapTable);
          R_BuildSubDomainRemapSubDivEntries(v8, v7, v6, 1u, 1u, 1u, subtris, remapTable);
          R_BuildSubDomainRemapSubDivEntries(v6, v8, v7, 1u, 2u, 1u, subtris, remapTable);
        }
      }
      v10 = v6;
      if ( v6 == v7 )
        break;
      if ( v7 == v8 )
      {
        R_BuildSubDomainRemapSubDivEntries(v6, v7, v8, 1u, 2u, 1u, subtris, remapTable);
        R_BuildSubDomainRemapSubDivEntries(v7, v8, v6, 1u, 1u, 1u, subtris, remapTable);
        v10 = v8;
        v11 = 1;
        v12 = 0;
LABEL_15:
        mirror = v11;
        goto LABEL_16;
      }
      R_BuildSubDomainRemapSubDivEntries(v6, v7, v8, 0, 0, 0, subtris, remapTable);
      R_BuildSubDomainRemapSubDivEntries(v7, v8, v6, 0, 1u, 0, subtris, remapTable);
      R_BuildSubDomainRemapSubDivEntries(v8, v6, v7, 0, 2u, 0, subtris, remapTable);
      R_BuildSubDomainRemapSubDivEntries(v7, v6, v8, 0, 0, 1u, subtris, remapTable);
      R_BuildSubDomainRemapSubDivEntries(v8, v7, v6, 0, 1u, 1u, subtris, remapTable);
      v12 = 2;
      v10 = v6;
      v6 = v8;
      v11 = 0;
      mirror = 1;
LABEL_16:
      R_BuildSubDomainRemapSubDivEntries(v10, v6, v7, v11, v12, mirror, subtris, remapTable);
      v1 = *v2;
      if ( *v2 == 0xFF )
        return;
    }
    if ( v7 == v8 )
    {
      v6 = v7;
      v11 = 0;
      v7 = v8;
      v12 = 0;
    }
    else
    {
      R_BuildSubDomainRemapSubDivEntries(v6, v7, v8, 1u, 0, 1u, subtris, remapTable);
      R_BuildSubDomainRemapSubDivEntries(v7, v8, v6, 1u, 2u, 1u, subtris, remapTable);
      v11 = 1;
      v10 = v8;
      v12 = 1;
    }
    goto LABEL_15;
  }
}

/*
==============
R_BuildSubDomainRemapSubDivEntries
==============
*/
const unsigned __int8 *R_BuildSubDomainRemapSubDivEntries(unsigned int subdiv0, unsigned int subdiv1, unsigned int subdiv2, unsigned int tilt, unsigned int offset, unsigned int mirror, const unsigned __int8 *subtris, vec4_t *mappings)
{
  const unsigned __int8 *v8; 
  unsigned int v9; 
  vec4_t *v10; 
  unsigned __int8 v11; 
  int v12; 
  __int64 v13; 
  float v14; 
  __int64 v15; 
  const unsigned __int8 *v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned __int8 v21; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  int v24; 
  int v25; 
  float v26; 
  int v27; 
  float v28; 
  int v29; 
  float v30; 
  int v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  __int64 v39; 
  __int64 v40; 

  v8 = subtris;
  v9 = 0;
  v10 = &mappings[24 * (mirror ^ (tilt + 2 * (subdiv2 + 4 * (subdiv1 + 4 * subdiv0))))];
  if ( (*subtris & 0xC0) == 0 )
  {
    do
    {
      if ( ++v9 > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 280, ASSERT_TYPE_ASSERT, "(instances <= 12)", (const char *)&queryFormat, "instances <= R_MAX_SUBDOMAIN_INSTANCES") )
        __debugbreak();
    }
    while ( (subtris[3 * v9] & 0xC0) == 0 );
    v11 = *subtris;
    if ( (*subtris & 0xC0) == 0 )
    {
      v12 = 2;
      if ( mirror )
        v12 = 0;
      v13 = (offset + v12) % 3;
      v14 = (float)v9;
      v15 = 2 - mirror;
      v16 = &subtris[v15];
      v17 = (offset + (mirror != 0 ? 2 : 0)) % 3;
      v18 = mirror + 1 - (unsigned __int64)(unsigned int)v15;
      do
      {
        v19 = v16[v18];
        v8 += 3;
        v20 = *v16;
        v16 += 3;
        v10->v[3] = v14;
        v21 = fractTable[((unsigned __int64)v11 >> 3) & 7];
        BYTE1(v39) = fractTable[v11 & 7];
        LOBYTE(v39) = v21;
        BYTE2(v39) = 24 - BYTE1(v39) - v21;
        v22 = fractTable[(v19 >> 3) & 7];
        BYTE4(v39) = fractTable[v19 & 7];
        BYTE3(v39) = v22;
        BYTE5(v39) = 24 - BYTE4(v39) - v22;
        v23 = fractTable[(v20 >> 3) & 7];
        HIBYTE(v39) = fractTable[v20 & 7];
        BYTE6(v39) = v23;
        LOBYTE(v40) = 24 - HIBYTE(v39) - v23;
        v24 = *((unsigned __int8 *)&v39 + v13 + 3);
        v25 = *((unsigned __int8 *)&v39 + v13);
        v10->v[0] = (float)(*((unsigned __int8 *)&v39 + v13 + 6) - v24) * 0.041666668;
        v26 = (float)(v25 - v24);
        v27 = *((unsigned __int8 *)&v39 + v17 + 6);
        v10->v[1] = v26 * 0.041666668;
        v28 = (float)v24;
        v29 = *((unsigned __int8 *)&v39 + v17 + 3);
        v10->v[2] = v28 * 0.041666668;
        v10[1].v[3] = 0.0;
        v30 = (float)(v27 - v29);
        v31 = *((unsigned __int8 *)&v39 + v17);
        v10[1].v[0] = v30 * 0.041666668;
        v10[1].v[2] = (float)v29 * 0.041666668;
        v10[1].v[1] = (float)(v31 - v29) * 0.041666668;
        v32 = v10->v[2];
        if ( (v32 < 0.0 || v32 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 308, ASSERT_TYPE_ASSERT, "(mappings[0][2]>=0.0f && mappings[0][2]<=1.0f)", (const char *)&queryFormat, "mappings[0][2]>=0.0f && mappings[0][2]<=1.0f", v39, v40) )
          __debugbreak();
        v33 = v10->v[2] + v10->v[0];
        if ( (v33 < 0.0 || v33 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 309, ASSERT_TYPE_ASSERT, "((float)(mappings[0][0]+mappings[0][2])>=0.0f && (float)(mappings[0][0]+mappings[0][2])<=1.0f)", (const char *)&queryFormat, "(float)(mappings[0][0]+mappings[0][2])>=0.0f && (float)(mappings[0][0]+mappings[0][2])<=1.0f") )
          __debugbreak();
        v34 = v10->v[2] + v10->v[1];
        if ( (v34 < 0.0 || v34 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 310, ASSERT_TYPE_ASSERT, "((float)(mappings[0][1]+mappings[0][2])>=0.0f && (float)(mappings[0][1]+mappings[0][2])<=1.0f)", (const char *)&queryFormat, "(float)(mappings[0][1]+mappings[0][2])>=0.0f && (float)(mappings[0][1]+mappings[0][2])<=1.0f") )
          __debugbreak();
        v35 = v10[1].v[2];
        if ( (v35 < 0.0 || v35 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 311, ASSERT_TYPE_ASSERT, "(mappings[1][2]>=0.0f && mappings[1][2]<=1.0f)", (const char *)&queryFormat, "mappings[1][2]>=0.0f && mappings[1][2]<=1.0f") )
          __debugbreak();
        v36 = v10[1].v[2] + v10[1].v[0];
        if ( (v36 < 0.0 || v36 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 312, ASSERT_TYPE_ASSERT, "((float)(mappings[1][0]+mappings[1][2])>=0.0f && (float)(mappings[1][0]+mappings[1][2])<=1.0f)", (const char *)&queryFormat, "(float)(mappings[1][0]+mappings[1][2])>=0.0f && (float)(mappings[1][0]+mappings[1][2])<=1.0f") )
          __debugbreak();
        v37 = v10[1].v[1] + v10[1].v[2];
        if ( (v37 < 0.0 || v37 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 313, ASSERT_TYPE_ASSERT, "((float)(mappings[1][1]+mappings[1][2])>=0.0f && (float)(mappings[1][1]+mappings[1][2])<=1.0f)", (const char *)&queryFormat, "(float)(mappings[1][1]+mappings[1][2])>=0.0f && (float)(mappings[1][1]+mappings[1][2])<=1.0f") )
          __debugbreak();
        v11 = *v8;
        v10 += 2;
      }
      while ( (*v8 & 0xC0) == 0 );
    }
  }
  return v8;
}

/*
==============
R_ExecuteBspTessFactorsComputeCmds
==============
*/
void R_ExecuteBspTessFactorsComputeCmds(ComputeCmdBufState *state, const ComputeCmdList *list, ComputeCmdType type, const ComputeCmdHeader *firstHeader)
{
  GfxBackEndData *v4; 
  ComputeCmdBufState *v5; 
  const dvar_t *v6; 
  unsigned int flags; 
  GfxComputeBufferState *tessFactorsBuffer; 
  _DWORD *v9; 
  unsigned int used; 
  unsigned int surfsLimit; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  __int64 v17; 
  unsigned int sliceIndicesMinFree; 
  unsigned int sliceTessfactorsMinFree; 
  unsigned int noTessTrisLimit; 
  unsigned int tessTrisLimit; 
  GfxBackEndData *v22; 
  GfxShaderBufferView *v23; 
  ComputeCmdHeader *ComputeCmdOfSameType; 
  unsigned int surfCount; 
  int *ComputeCmdData; 
  __int64 v27; 
  GfxSurface *surfaces; 
  unsigned __int64 transientZone; 
  GfxSurface *v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned __int16 *p_triCount; 
  unsigned __int16 v35; 
  ComputeCmdBufState *v36; 
  GfxWorldDrawVerts *v37; 
  unsigned int displacementParmsOffset; 
  __int64 v39; 
  unsigned int surfDataIndex; 
  GfxBspTessFactorsSurf *v41; 
  int v42; 
  unsigned int v43; 
  bool v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned __int16 v47; 
  GfxShaderBufferRWView *views; 
  ComputeCmdBufState *statea; 
  GfxBackEndData *data; 
  ComputeCmdHeader *header; 
  ComputeCmdList *lista; 
  GfxShaderBufferView *v53; 
  GfxShaderBufferView *v54; 
  GfxShaderBufferView *v55; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *v57; 
  GfxShaderBufferView *v58; 
  BspTessFactorsBuildList buildList; 
  GfxShaderBufferView *p_indexBufferView; 
  GfxShaderBufferView *p_displacementParmsView; 
  GfxShaderBufferView *p_view; 

  v4 = (GfxBackEndData *)state->data;
  statea = state;
  v5 = state;
  header = (ComputeCmdHeader *)firstHeader;
  lista = (ComputeCmdList *)list;
  data = v4;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 867, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  v6 = DCONST_DVARINT_r_tessellationSlice;
  if ( !DCONST_DVARINT_r_tessellationSlice && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tessellationSlice") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v6->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
      __debugbreak();
  }
  bspDisplacementGlob.sliceCount = v6->current.unsignedInt;
  tessFactorsBuffer = v4->tessFactorsBuffer;
  v9 = tessFactorsBuffer->wrappedBuffer.data;
  used = tessFactorsBuffer->used;
  surfsLimit = used;
  bspDisplacementGlob.surfsUsed = used;
  if ( bspDisplacementGlob.surfsLimit > used )
    surfsLimit = bspDisplacementGlob.surfsLimit;
  bspDisplacementGlob.surfsLimit = surfsLimit;
  if ( used > 0x400 )
    R_WarnOncePerFrame(R_WARN_MAX_TESS_SURFACES, used);
  *(_QWORD *)&bspDisplacementGlob.tessTrisUsed = 0i64;
  v12 = 0;
  v13 = 0x40000 / bspDisplacementGlob.sliceCount;
  v14 = 0x14000 / bspDisplacementGlob.sliceCount;
  do
  {
    v15 = v9[2 * v12 + 16];
    v16 = v9[2 * v12 + 17];
    v17 = 3 * (v16 + v15);
    sliceIndicesMinFree = v13 - v17;
    if ( v13 - (unsigned int)v17 > bspDisplacementGlob.sliceIndicesMinFree )
      sliceIndicesMinFree = bspDisplacementGlob.sliceIndicesMinFree;
    bspDisplacementGlob.sliceIndicesMinFree = sliceIndicesMinFree;
    sliceTessfactorsMinFree = v14 - v15;
    if ( v14 - v15 > bspDisplacementGlob.sliceTessfactorsMinFree )
      sliceTessfactorsMinFree = bspDisplacementGlob.sliceTessfactorsMinFree;
    bspDisplacementGlob.sliceTessfactorsMinFree = sliceTessfactorsMinFree;
    if ( (unsigned int)v17 > v13 )
      R_WarnOncePerFrame(R_WARN_MAX_TESS_INDICIES, v12, v17, v13);
    if ( v15 > v14 )
      R_WarnOncePerFrame(R_WARN_MAX_TESS_FACTORS, v12, v15, v14);
    ++v12;
    noTessTrisLimit = v16 + bspDisplacementGlob.noTessTrisUsed;
    tessTrisLimit = v15 + bspDisplacementGlob.tessTrisUsed;
    bspDisplacementGlob.noTessTrisUsed += v16;
    bspDisplacementGlob.tessTrisUsed += v15;
  }
  while ( v12 < 8 );
  if ( bspDisplacementGlob.noTessTrisLimit > noTessTrisLimit )
    noTessTrisLimit = bspDisplacementGlob.noTessTrisLimit;
  bspDisplacementGlob.noTessTrisLimit = noTessTrisLimit;
  if ( bspDisplacementGlob.tessTrisLimit > tessTrisLimit )
    tessTrisLimit = bspDisplacementGlob.tessTrisLimit;
  bspDisplacementGlob.tessTrisLimit = tessTrisLimit;
  R_ComputeWaitForCompute(v5, PIPE_FLUSH_PARTIAL);
  if ( !R_ComputeCheckReserveDescriptorHeaps(v5) )
    Sys_Error((const ObfuscateErrorText)&stru_1443C5C90);
  v22 = data;
  views = &data->tessFactorsBuffer->wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(v5, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v23 = (GfxShaderBufferView *)v22->transientDrawContext.drawVertsPtr[0];
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 887, ASSERT_TYPE_ASSERT, "(worldDrawVerts)", (const char *)&queryFormat, "worldDrawVerts") )
    __debugbreak();
  p_indexBufferView = v23 + 7;
  p_displacementParmsView = &g_worldDraw->displacementParmsView;
  p_view = &bspDisplacementGlob.subdomainMappingBuffer.view;
  R_SetComputeViews(v5, 0, 3, (const GfxShaderBufferView *const *)&p_indexBufferView);
  v53 = &rgp.world->surfaces.surfDataBuffer.view;
  R_SetComputeViews(v5, 13, 1, (const GfxShaderBufferView *const *)&v53);
  v54 = v23 + 2;
  R_SetComputeViews(v5, 14, 1, (const GfxShaderBufferView *const *)&v54);
  v55 = v23 + 4;
  R_SetComputeViews(v5, 15, 1, (const GfxShaderBufferView *const *)&v55);
  v47 = 0;
  buffers = v22->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(v5, 7, 1, &buffers);
  R_SetupBspTessFactorsSceneConstants(v5, v22);
  ComputeCmdOfSameType = header;
  surfCount = 0;
  buildList.surfCount = 0;
  LODWORD(views) = 0;
  do
  {
    ComputeCmdData = (int *)R_GetComputeCmdData(lista, ComputeCmdOfSameType);
    v27 = *(_QWORD *)ComputeCmdData;
    surfaces = rgp.world->surfaces.surfaces;
    transientZone = surfaces[ComputeCmdData[9]].transientZone;
    v30 = &surfaces[ComputeCmdData[9]];
    if ( !v30->transientZone )
      goto LABEL_45;
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( (unsigned int)transientZone >= 0x600 )
    {
      LODWORD(v46) = 1536;
      LODWORD(v45) = transientZone;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v45, v46) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (transientZone & 0x1F)) & *(_DWORD *)(v27 + 4 * (transientZone >> 5) + 1481980)) != 0 )
    {
LABEL_45:
      v31 = 0;
      v32 = v30->tris.baseIndex / 3;
      v33 = 0;
      if ( !ComputeCmdData[10] )
        goto LABEL_81;
      p_triCount = &v30->tris.triCount;
      do
      {
        if ( *(_DWORD *)(p_triCount + 1) != 3 * (v31 + v32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 927, ASSERT_TYPE_ASSERT, "(surface->tris.baseIndex == ( firstTri + triCount ) * 3)", (const char *)&queryFormat, "surface->tris.baseIndex == ( firstTri + triCount ) * 3") )
          __debugbreak();
        if ( *(_DWORD *)(p_triCount - 5) != v30->tris.posOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 928, ASSERT_TYPE_ASSERT, "(surface->tris.posOffset == firstSurface->tris.posOffset)", (const char *)&queryFormat, "surface->tris.posOffset == firstSurface->tris.posOffset") )
          __debugbreak();
        ++v33;
        v31 += *p_triCount;
        p_triCount += 20;
      }
      while ( v33 < ComputeCmdData[10] );
      surfCount = buildList.surfCount;
      if ( !v31 )
      {
LABEL_81:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 931, ASSERT_TYPE_ASSERT, "(triCount)", (const char *)&queryFormat, "triCount") )
          __debugbreak();
      }
      v35 = v30->transientZone;
      if ( v35 != v47 )
      {
        v36 = statea;
        if ( surfCount )
        {
          R_FlushBspTessFactorsComputeBatch(statea, &buildList);
          v35 = v30->transientZone;
          surfCount = 0;
          buildList.surfCount = 0;
        }
        if ( v35 >= data->transientDrawContext.zoneCount )
        {
          LODWORD(v46) = data->transientDrawContext.zoneCount;
          LODWORD(v45) = v35;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v45, v46) )
            __debugbreak();
        }
        v37 = data->transientDrawContext.drawVertsPtr[v35];
        if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 943, ASSERT_TYPE_ASSERT, "(worldDrawVerts)", (const char *)&queryFormat, "worldDrawVerts") )
          __debugbreak();
        p_indexBufferView = &v37->indexBufferView;
        p_displacementParmsView = &g_worldDraw->displacementParmsView;
        R_SetComputeViews(v36, 0, 3, (const GfxShaderBufferView *const *)&p_indexBufferView);
        v57 = &v37->posBuffer.view;
        R_SetComputeViews(v36, 14, 1, (const GfxShaderBufferView *const *)&v57);
        v58 = &v37->auxBuffer.view;
        R_SetComputeViews(v36, 15, 1, (const GfxShaderBufferView *const *)&v58);
        v47 = v30->transientZone;
      }
      displacementParmsOffset = v30->tris.displacementParmsOffset;
      v39 = surfCount;
      surfDataIndex = v30->surfDataIndex;
      *((_QWORD *)&buildList.surfArray[-2].displacementParmsOffset + v39) = *((_QWORD *)ComputeCmdData + 1);
      v41 = &buildList.surfArray[buildList.surfCount];
      if ( displacementParmsOffset == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 702, ASSERT_TYPE_ASSERT, "(displacementParmsOffset != (-1))", (const char *)&queryFormat, "displacementParmsOffset != INVALID_DISPLACEMENT_PARMS_OFFSET") )
        __debugbreak();
      v42 = ComputeCmdData[11] + 3074;
      v41->triCount = v31;
      v43 = (unsigned int)views;
      v44 = (ComputeCmdData[8] & 0xFFFFFF00) == 0;
      v41->displacementParmsOffset = displacementParmsOffset;
      v41->surfID = surfDataIndex;
      v41->firstTri = v32;
      v41->indirectArgsOffset = 16 * v42;
      v41->sequence = v43;
      if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 712, ASSERT_TYPE_ASSERT, "(!(cmd->sceneViewType & ~0xff))", (const char *)&queryFormat, "!(cmd->sceneViewType & ~0xff)") )
        __debugbreak();
      v5 = statea;
      v41->sceneViewTypeAndNoTess = ComputeCmdData[8] | (ComputeCmdData[14] << 8);
      LODWORD(views) = v43 + 1;
      surfCount = ++buildList.surfCount;
      if ( buildList.surfCount == bspDisplacementGlob.sliceCount )
      {
        R_FlushBspTessFactorsComputeBatch(v5, &buildList);
        surfCount = 0;
        buildList.surfCount = 0;
      }
    }
    ComputeCmdOfSameType = (ComputeCmdHeader *)R_NextComputeCmdOfSameType(lista, header);
    header = ComputeCmdOfSameType;
  }
  while ( ComputeCmdOfSameType );
  if ( surfCount )
    R_FlushBspTessFactorsComputeBatch(v5, &buildList);
  R_ComputeWaitForCompute(v5, PIPE_FLUSH_PARTIAL);
}

/*
==============
R_FlushBspTessFactorsComputeBatch
==============
*/
void R_FlushBspTessFactorsComputeBatch(ComputeCmdBufState *state, BspTessFactorsBuildList *buildList)
{
  unsigned int surfCount; 
  unsigned int i; 
  __int64 v6; 
  __int64 v7; 
  __int64 indirectArgsOffset; 
  float v9; 
  float sequence; 
  unsigned int j; 
  __int64 v12; 
  int data[36]; 
  vector4 worldMatrix; 
  __m256i v15; 

  if ( buildList->surfCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 724, ASSERT_TYPE_ASSERT, "(buildList->surfCount <= 8)", (const char *)&queryFormat, "buildList->surfCount <= BSP_TESSFACTORS_MAX_SLICES") )
    __debugbreak();
  R_ComputeWaitForCompute(state, PIPE_FLUSH_FULL);
  if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
    Sys_Error((const ObfuscateErrorText)&stru_1443C5C90);
  surfCount = buildList->surfCount;
  for ( i = 0; i < buildList->surfCount; ++i )
  {
    v6 = i;
    v7 = 2i64 * i;
    indirectArgsOffset = buildList->surfArray[v6].indirectArgsOffset;
    v9 = (float)indirectArgsOffset;
    sequence = (float)buildList->surfArray[v6].sequence;
    *(float *)&data[2 * v7] = v9;
    *(float *)&data[2 * v7 + 1] = sequence;
    if ( (int)v9 != (_DWORD)indirectArgsOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 745, ASSERT_TYPE_ASSERT, "(static_cast< uint >( headersConsts.headerArray[surfIter].indirectArgsOffset ) == surf->indirectArgsOffset)", (const char *)&queryFormat, "static_cast< uint >( headersConsts.headerArray[surfIter].indirectArgsOffset ) == surf->indirectArgsOffset") )
      __debugbreak();
    if ( (int)*(float *)&data[4 * i + 1] != buildList->surfArray[v6].sequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 746, ASSERT_TYPE_ASSERT, "(static_cast< uint >( headersConsts.headerArray[surfIter].sequence ) == surf->sequence)", (const char *)&queryFormat, "static_cast< uint >( headersConsts.headerArray[surfIter].sequence ) == surf->sequence") )
      __debugbreak();
    surfCount = buildList->surfCount;
  }
  data[32] = surfCount;
  R_UploadAndSetComputeConstants(state, 2, data, 0x90u, NULL);
  R_SetComputeShader(state, rgp.bspTessFactorsHeadersComputeShader);
  R_Dispatch(state, 1u, 1u, 1u);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_SetComputeShader(state, rgp.bspTessFactorsSingleComputeShader);
  for ( j = 0; j < buildList->surfCount; ++j )
  {
    v12 = j;
    R_SetupBspTessFactorsPlacement(buildList->placementArray[j], &worldMatrix);
    v15 = (__m256i)buildList->surfArray[v12];
    R_UploadAndSetComputeConstants(state, 3, &worldMatrix, 0x60u, NULL);
    R_Dispatch(state, (buildList->surfArray[v12].triCount + 63) >> 6, 1u, 1u);
  }
}

/*
==============
R_GetSubdomainMappingBuffer
==============
*/
GfxWrappedBuffer *R_GetSubdomainMappingBuffer()
{
  return &bspDisplacementGlob.subdomainMappingBuffer;
}

/*
==============
R_InitBspTessFactorsConstantBuffers
==============
*/
void R_InitBspTessFactorsConstantBuffers(void)
{
  ;
}

/*
==============
R_ReleaseDisplacementParms
==============
*/
void R_ReleaseDisplacementParms(GfxWorld *world)
{
  R_DestroyComputeBuffer(&world->draw.displacementParmsBuffer);
  if ( world->draw.displacementParmsView.view >= 2 )
    R_ReleaseShaderBufferView(&world->draw.displacementParmsView);
}

/*
==============
R_SetupBspTessFactorsPlacement
==============
*/
void R_SetupBspTessFactorsPlacement(const GfxPlacement *placement, vector4 *worldMatrix)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  tmat33_t<vec3_t> axis; 

  if ( placement )
  {
    v4 = placement->quat.v[1];
    v5 = placement->quat.v[0];
    v6 = placement->quat.v[2];
    v7 = placement->quat.v[3];
    v8 = (float)((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6)) + (float)(v7 * v7);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v5, v4, v6, v7, fsqrt(v8)) )
      __debugbreak();
    v9 = 2.0 * placement->quat.v[0];
    v10 = v9 * placement->quat.v[0];
    v11 = placement->quat.v[1];
    v12 = placement->quat.v[2];
    v13 = placement->quat.v[3];
    v14 = v11 * (float)(v11 * 2.0);
    v15 = v12 * (float)(v11 * 2.0);
    v16 = v13 * (float)(v11 * 2.0);
    v17 = v11 * v9;
    v18 = v13 * (float)(v12 * 2.0);
    v19 = v12 * (float)(v12 * 2.0);
    axis.m[0].v[0] = 1.0 - (float)(v19 + v14);
    axis.m[0].v[2] = (float)(v12 * v9) - v16;
    axis.m[0].v[1] = v18 + v17;
    axis.m[1].v[0] = v17 - v18;
    axis.m[1].v[1] = 1.0 - (float)(v19 + v10);
    axis.m[2].v[0] = v16 + (float)(v12 * v9);
    axis.m[1].v[2] = v15 + (float)(v13 * v9);
    axis.m[2].v[2] = 1.0 - (float)(v14 + v10);
    axis.m[2].v[1] = v15 - (float)(v13 * v9);
    MatrixSet44((tmat44_t<vec4_t> *)worldMatrix, &placement->origin, &axis, 1.0);
  }
  else
  {
    MatrixIdentity44((tmat44_t<vec4_t> *)worldMatrix);
  }
}

/*
==============
R_SetupBspTessFactorsSceneConstants
==============
*/
void R_SetupBspTessFactorsSceneConstants(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  GfxViewInfo *v3; 
  char *v4; 
  unsigned int i; 
  __m256i *p_viewParms; 
  __int64 v12; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v29; 
  ComputeCmdBufState *statea; 
  int dataa[1192]; 
  char v32; 

  statea = state;
  v3 = &data->viewInfo[data->viewInfoIndex];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 607, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo", state) )
    __debugbreak();
  v4 = &v32;
  dataa[0] = bspDisplacementGlob.sliceCount;
  for ( i = 0; i < 0x21; ++i )
  {
    p_viewParms = NULL;
    if ( (i & 0xFFFFFFDF) != 0 )
    {
      if ( i - 1 > 2 )
      {
        if ( i - 4 > 7 )
        {
          if ( i - 12 > 0x13 )
          {
            LODWORD(v29) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 663, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_SetupBspTessFactorsSceneConstants: unhandled scene view type %d", v29) )
              __debugbreak();
            goto LABEL_24;
          }
          v17 = (i - 12) % 0xA;
          v18 = (i - 12) / 0xA;
          if ( v17 >= data->sunShadow.partitionCache[v18].gfxCachedSunShadowOverlapCount )
            goto LABEL_27;
          v19 = v18 * 8656 + 864i64 * v17;
          if ( (const GfxBackEndData *)((char *)data + v19) == (const GfxBackEndData *)-929984i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 654, ASSERT_TYPE_ASSERT, "(&data->sunShadow.partitionCache[partitionIndex].gfxCachedSunShadowOverlap[cellIndex].staticEntry)", (const char *)&queryFormat, "&data->sunShadow.partitionCache[partitionIndex].gfxCachedSunShadowOverlap[cellIndex].staticEntry") )
            __debugbreak();
          _XMM0 = 0i64;
          p_viewParms = (__m256i *)&(*(GfxCachedSunShadow **)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntry + v19))->viewParms;
          __asm
          {
            vinsertps xmm0, xmm0, dword ptr [rbx+10Ch], 0
            vinsertps xmm0, xmm0, dword ptr [rbx+110h], 10h
            vinsertps xmm0, xmm0, dword ptr [rbx+114h], 20h ; ' '
          }
          *((_OWORD *)v4 - 33) = _XMM0;
          _XMM1 = _xmm;
          R_SunShadow_GetMapSize();
        }
        else
        {
          v12 = i - 4;
          if ( (unsigned int)v12 >= data->spotShadowUpdateCount )
            goto LABEL_24;
          p_viewParms = (__m256i *)&data->spotShadowUpdates[v12].viewportParms.viewParms;
          R_SpotShadow_GetMapSize();
          _XMM0 = _xmm;
          __asm
          {
            vinsertps xmm0, xmm0, dword ptr [rbx+100h], 0
            vinsertps xmm0, xmm0, dword ptr [rbx+104h], 10h
            vinsertps xmm0, xmm0, dword ptr [rbx+108h], 20h ; ' '
          }
          _XMM1 = _xmm;
          *((_OWORD *)v4 - 33) = _XMM0;
        }
      }
      else
      {
        _XMM0 = 0i64;
        p_viewParms = (__m256i *)&data->sunShadow.partition[i - 1];
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [rbx+10Ch], 0
          vinsertps xmm0, xmm0, dword ptr [rbx+110h], 10h
          vinsertps xmm0, xmm0, dword ptr [rbx+114h], 20h ; ' '
        }
        *((_OWORD *)v4 - 33) = _XMM0;
        _XMM1 = _xmm;
        R_SunShadow_GetMapSize();
      }
    }
    else
    {
      _XMM0 = _xmm;
      __asm
      {
        vinsertps xmm0, xmm0, dword ptr [r14+100h], 0
        vinsertps xmm0, xmm0, dword ptr [r14+104h], 10h
        vinsertps xmm0, xmm0, dword ptr [r14+108h], 20h ; ' '
      }
      *((_OWORD *)v4 - 33) = _XMM0;
      p_viewParms = (__m256i *)v3;
      if ( v3->sceneViewport.y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 621, ASSERT_TYPE_ASSERT, "(viewInfo->sceneViewport.y == 0)", (const char *)&queryFormat, "viewInfo->sceneViewport.y == 0") )
        __debugbreak();
      _XMM1 = 0i64;
    }
    __asm { vinsertps xmm1, xmm1, xmm0, 0 }
    *(_OWORD *)v4 = _XMM1;
LABEL_24:
    if ( p_viewParms )
    {
      *(__m256i *)&dataa[16 * (unsigned __int64)i + 4] = p_viewParms[4];
      *(__m256i *)&dataa[16 * (unsigned __int64)i + 12] = p_viewParms[5];
      *(__m256i *)&dataa[16 * (unsigned __int64)i + 532] = p_viewParms[2];
      *(__m256i *)&dataa[16 * (unsigned __int64)i + 540] = p_viewParms[3];
    }
    else
    {
      *((_OWORD *)v4 - 33) = 0i64;
      *(_OWORD *)v4 = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 4] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 6] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 8] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 10] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 12] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 14] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 16] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 18] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 532] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 534] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 536] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 538] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 540] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 542] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 544] = 0i64;
      *(_QWORD *)&dataa[16 * (unsigned __int64)i + 546] = 0i64;
    }
LABEL_27:
    v4 += 16;
  }
  R_UploadAndSetComputeConstants(statea, 0, dataa, 0x14B0u, NULL);
}

/*
==============
R_ShutdownBspTessFactorsConstantBuffers
==============
*/
void R_ShutdownBspTessFactorsConstantBuffers(void)
{
  ;
}

/*
==============
R_ShutdownSubDomainRangeConstantBuffers
==============
*/
void R_ShutdownSubDomainRangeConstantBuffers(void)
{
  R_ShutdownGfxWrappedBuffer(&bspDisplacementGlob.subdomainMappingBuffer);
}

