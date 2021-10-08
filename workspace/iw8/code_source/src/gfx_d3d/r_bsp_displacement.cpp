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

  cmdList = data->compute.cmdList;
  _RSI = drawSurf;
  _RAX = R_AllocComputeCmdDataAligned(cmdList, 64, 8u);
  if ( !_RAX )
    return 0;
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  _RAX[9] = firstSurfIndex;
  _RAX[10] = surfCount;
  *(_QWORD *)_RAX = data;
  *((_QWORD *)_RAX + 1) = placement;
  __asm { vmovups xmmword ptr [rax+10h], xmm0 }
  _RAX[8] = sceneViewType;
  _RAX[11] = indirectArgsOffset;
  *((_QWORD *)_RAX + 6) = 0i64;
  _RAX[14] = enableNoTess;
  return R_AddComputeCmd(cmdList, COMPUTECMD_BSP_TESS_FACTORS, _RAX);
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
  const unsigned __int8 *v14; 
  int v15; 
  unsigned __int8 v17; 
  __int64 v23; 
  const unsigned __int8 *v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned __int8 v31; 
  unsigned __int8 v32; 
  unsigned __int8 v33; 
  unsigned int v41; 
  unsigned int v45; 
  bool v48; 
  bool v49; 
  unsigned int v50; 
  bool v55; 
  bool v58; 
  bool v61; 
  bool v63; 
  bool v66; 
  __int64 v73; 
  __int64 v74; 

  v14 = subtris;
  v15 = 0;
  _RBX = &mappings[24 * (mirror ^ (tilt + 2 * (subdiv2 + 4 * (subdiv1 + 4 * subdiv0))))];
  if ( (*subtris & 0xC0) == 0 )
  {
    do
    {
      if ( (unsigned int)++v15 > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 280, ASSERT_TYPE_ASSERT, "(instances <= 12)", (const char *)&queryFormat, "instances <= R_MAX_SUBDOMAIN_INSTANCES") )
        __debugbreak();
    }
    while ( (subtris[3 * v15] & 0xC0) == 0 );
    v17 = *subtris;
    if ( (*subtris & 0xC0) == 0 )
    {
      __asm
      {
        vmovaps [rsp+0D8h+var_58], xmm6
        vmovss  xmm6, cs:__real@3f800000
        vmovaps [rsp+0D8h+var_68], xmm7
        vmovaps [rsp+0D8h+var_78], xmm8
        vmovaps [rsp+0D8h+var_88], xmm9
        vmovss  xmm8, cs:__real@3d2aaaab
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm9, xmm9, rcx
      }
      v23 = 2 - mirror;
      v24 = &subtris[v23];
      v25 = (offset + (mirror != 0 ? 2 : 0)) % 3;
      v26 = mirror + 1 - (unsigned __int64)(unsigned int)v23;
      do
      {
        v27 = v24[v26];
        v14 += 3;
        v28 = *v24;
        v24 += 3;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbx+0Ch], xmm9
          vxorps  xmm2, xmm2, xmm2
        }
        v31 = fractTable[((unsigned __int64)v17 >> 3) & 7];
        BYTE1(v73) = fractTable[v17 & 7];
        LOBYTE(v73) = v31;
        BYTE2(v73) = 24 - BYTE1(v73) - v31;
        v32 = fractTable[(v27 >> 3) & 7];
        BYTE4(v73) = fractTable[v27 & 7];
        BYTE3(v73) = v32;
        BYTE5(v73) = 24 - BYTE4(v73) - v32;
        v33 = fractTable[(v28 >> 3) & 7];
        HIBYTE(v73) = fractTable[v28 & 7];
        BYTE6(v73) = v33;
        LOBYTE(v74) = 24 - HIBYTE(v73) - v33;
        __asm
        {
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rbx], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rbx+4], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
        }
        v41 = *((unsigned __int8 *)&v73 + v25 + 3);
        __asm
        {
          vmulss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rbx+8], xmm1
          vxorps  xmm0, xmm0, xmm0
        }
        _RBX[1].v[3] = 0.0;
        __asm { vcvtsi2ss xmm0, xmm0, eax }
        v45 = *((unsigned __int8 *)&v73 + v25);
        __asm
        {
          vmulss  xmm1, xmm0, xmm8
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbx+10h], xmm1
        }
        v48 = v45 < v41;
        v50 = v45 - v41;
        v49 = v48 || v50 == 0;
        __asm
        {
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm8
          vcvtsi2ss xmm2, xmm2, ecx
          vmulss  xmm0, xmm2, xmm8
          vmovss  dword ptr [rbx+18h], xmm0
          vmovss  dword ptr [rbx+14h], xmm1
          vmovss  xmm1, dword ptr [rbx+8]
          vcomiss xmm1, xmm7
        }
        if ( v48 )
          goto LABEL_32;
        __asm { vcomiss xmm1, xmm6 }
        if ( !v48 && v50 != 0 )
        {
LABEL_32:
          v55 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 308, ASSERT_TYPE_ASSERT, "(mappings[0][2]>=0.0f && mappings[0][2]<=1.0f)", (const char *)&queryFormat, "mappings[0][2]>=0.0f && mappings[0][2]<=1.0f", v73, v74);
          v49 = !v55;
          if ( v55 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vcomiss xmm1, xmm7
          vcomiss xmm1, xmm6
        }
        if ( !v49 )
        {
          v58 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 309, ASSERT_TYPE_ASSERT, "((float)(mappings[0][0]+mappings[0][2])>=0.0f && (float)(mappings[0][0]+mappings[0][2])<=1.0f)", (const char *)&queryFormat, "(float)(mappings[0][0]+mappings[0][2])>=0.0f && (float)(mappings[0][0]+mappings[0][2])<=1.0f");
          v49 = !v58;
          if ( v58 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vaddss  xmm1, xmm0, dword ptr [rbx+4]
          vcomiss xmm1, xmm7
          vcomiss xmm1, xmm6
        }
        if ( !v49 )
        {
          v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 310, ASSERT_TYPE_ASSERT, "((float)(mappings[0][1]+mappings[0][2])>=0.0f && (float)(mappings[0][1]+mappings[0][2])<=1.0f)", (const char *)&queryFormat, "(float)(mappings[0][1]+mappings[0][2])>=0.0f && (float)(mappings[0][1]+mappings[0][2])<=1.0f");
          v49 = !v61;
          if ( v61 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+18h]
          vcomiss xmm0, xmm7
          vcomiss xmm0, xmm6
        }
        if ( !v49 )
        {
          v63 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 311, ASSERT_TYPE_ASSERT, "(mappings[1][2]>=0.0f && mappings[1][2]<=1.0f)", (const char *)&queryFormat, "mappings[1][2]>=0.0f && mappings[1][2]<=1.0f");
          v49 = !v63;
          if ( v63 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+18h]
          vaddss  xmm1, xmm0, dword ptr [rbx+10h]
          vcomiss xmm1, xmm7
          vcomiss xmm1, xmm6
        }
        if ( !v49 )
        {
          v66 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 312, ASSERT_TYPE_ASSERT, "((float)(mappings[1][0]+mappings[1][2])>=0.0f && (float)(mappings[1][0]+mappings[1][2])<=1.0f)", (const char *)&queryFormat, "(float)(mappings[1][0]+mappings[1][2])>=0.0f && (float)(mappings[1][0]+mappings[1][2])<=1.0f");
          v49 = !v66;
          if ( v66 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+14h]
          vaddss  xmm1, xmm0, dword ptr [rbx+18h]
          vcomiss xmm1, xmm7
          vcomiss xmm1, xmm6
        }
        if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 313, ASSERT_TYPE_ASSERT, "((float)(mappings[1][1]+mappings[1][2])>=0.0f && (float)(mappings[1][1]+mappings[1][2])<=1.0f)", (const char *)&queryFormat, "(float)(mappings[1][1]+mappings[1][2])>=0.0f && (float)(mappings[1][1]+mappings[1][2])<=1.0f") )
          __debugbreak();
        v17 = *v14;
        _RBX += 2;
      }
      while ( (*v14 & 0xC0) == 0 );
      __asm
      {
        vmovaps xmm9, [rsp+0D8h+var_88]
        vmovaps xmm8, [rsp+0D8h+var_78]
        vmovaps xmm7, [rsp+0D8h+var_68]
        vmovaps xmm6, [rsp+0D8h+var_58]
      }
    }
  }
  return v14;
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
  int surfCount; 
  unsigned int i; 
  __int64 v8; 
  unsigned int indirectArgsOffset; 
  unsigned int j; 
  int data[36]; 
  vector4 worldMatrix; 

  _RDI = buildList;
  if ( buildList->surfCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 724, ASSERT_TYPE_ASSERT, "(buildList->surfCount <= 8)", (const char *)&queryFormat, "buildList->surfCount <= BSP_TESSFACTORS_MAX_SLICES") )
    __debugbreak();
  R_ComputeWaitForCompute(state, PIPE_FLUSH_FULL);
  if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
    Sys_Error((const ObfuscateErrorText)&stru_1443C5C90);
  surfCount = _RDI->surfCount;
  for ( i = 0; i < _RDI->surfCount; ++i )
  {
    v8 = i;
    _RSI = 2i64 * i;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    indirectArgsOffset = _RDI->surfArray[v8].indirectArgsOffset;
    __asm
    {
      vcvtsi2ss xmm1, xmm1, rcx
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vcvttss2si rax, xmm1
      vmovss  [rsp+rsi*8+168h+data], xmm1
      vmovss  [rsp+rsi*8+168h+var_134], xmm0
    }
    if ( (_DWORD)_RAX != indirectArgsOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 745, ASSERT_TYPE_ASSERT, "(static_cast< uint >( headersConsts.headerArray[surfIter].indirectArgsOffset ) == surf->indirectArgsOffset)", (const char *)&queryFormat, "static_cast< uint >( headersConsts.headerArray[surfIter].indirectArgsOffset ) == surf->indirectArgsOffset") )
      __debugbreak();
    __asm { vcvttss2si rax, [rsp+rsi*8+168h+var_134] }
    if ( (_DWORD)_RAX != _RDI->surfArray[v8].sequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 746, ASSERT_TYPE_ASSERT, "(static_cast< uint >( headersConsts.headerArray[surfIter].sequence ) == surf->sequence)", (const char *)&queryFormat, "static_cast< uint >( headersConsts.headerArray[surfIter].sequence ) == surf->sequence") )
      __debugbreak();
    surfCount = _RDI->surfCount;
  }
  data[32] = surfCount;
  R_UploadAndSetComputeConstants(state, 2, data, 0x90u, NULL);
  R_SetComputeShader(state, rgp.bspTessFactorsHeadersComputeShader);
  R_Dispatch(state, 1u, 1u, 1u);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_SetComputeShader(state, rgp.bspTessFactorsSingleComputeShader);
  for ( j = 0; j < _RDI->surfCount; ++j )
  {
    _RBX = j;
    R_SetupBspTessFactorsPlacement(_RDI->placementArray[j], &worldMatrix);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+rdi+48h]
      vmovups [rsp+168h+var_68], ymm0
    }
    R_UploadAndSetComputeConstants(state, 3, &worldMatrix, 0x60u, NULL);
    R_Dispatch(state, (_RDI->surfArray[_RBX].triCount + 63) >> 6, 1u, 1u);
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
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = placement;
  if ( placement )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rcx+4]
      vmovss  xmm5, dword ptr [rcx]
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovss  xmm6, dword ptr [rcx+8]
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovss  xmm7, dword ptr [rcx+0Ch]
      vmovaps xmmword ptr [r11-38h], xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
      vmovaps xmmword ptr [r11-58h], xmm10
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmovaps xmmword ptr [r11-68h], xmm11
      vmovaps xmmword ptr [r11-78h], xmm12
      vmulss  xmm0, xmm7, xmm7
      vmovaps xmmword ptr [r11-88h], xmm13
      vmovss  xmm13, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsubss  xmm1, xmm2, xmm13
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@3b03126f
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+108h+var_C0], xmm1
      vcvtss2sd xmm0, xmm4, xmm4
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+108h+var_C8], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+108h+var_D0], xmm3
      vmovsd  [rsp+108h+var_D8], xmm0
      vcvtss2sd xmm4, xmm5, xmm5
      vmovsd  [rsp+108h+var_E0], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v70, v71, v72, v73, v74) )
      __debugbreak();
    __asm
    {
      vmovss  xmm5, cs:__real@40000000
      vmulss  xmm1, xmm5, dword ptr [rbx]
      vmulss  xmm12, xmm1, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  xmm4, dword ptr [rbx+8]
      vmovss  xmm3, dword ptr [rbx+0Ch]
      vmulss  xmm9, xmm4, xmm1
      vmulss  xmm0, xmm2, xmm5
      vmulss  xmm11, xmm2, xmm0
      vmulss  xmm8, xmm4, xmm0
      vmulss  xmm7, xmm3, xmm0
      vmulss  xmm6, xmm2, xmm1
      vmulss  xmm10, xmm3, xmm1
      vmulss  xmm0, xmm4, xmm5
      vmulss  xmm2, xmm3, xmm0
      vmulss  xmm5, xmm4, xmm0
      vaddss  xmm1, xmm5, xmm11
      vsubss  xmm0, xmm13, xmm1
      vmovss  dword ptr [rsp+108h+axis], xmm0
      vsubss  xmm0, xmm9, xmm7
      vmovss  dword ptr [rsp+108h+axis+8], xmm0
      vaddss  xmm1, xmm2, xmm6
      vmovss  dword ptr [rsp+108h+axis+4], xmm1
      vsubss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+108h+axis+0Ch], xmm1
      vaddss  xmm1, xmm8, xmm10
      vaddss  xmm0, xmm5, xmm12
      vsubss  xmm0, xmm13, xmm0
      vmovss  dword ptr [rsp+108h+axis+10h], xmm0
      vaddss  xmm0, xmm7, xmm9
      vmovss  dword ptr [rsp+108h+axis+18h], xmm0
      vaddss  xmm0, xmm11, xmm12
      vmovss  dword ptr [rsp+108h+axis+14h], xmm1
      vsubss  xmm0, xmm13, xmm0
      vsubss  xmm1, xmm8, xmm10
      vmovaps xmm3, xmm13; scale
      vmovss  dword ptr [rsp+108h+axis+20h], xmm0
      vmovss  dword ptr [rsp+108h+axis+1Ch], xmm1
    }
    MatrixSet44((tmat44_t<vec4_t> *)worldMatrix, &_RBX->origin, &axis, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm13, [rsp+108h+var_88]
      vmovaps xmm12, [rsp+108h+var_78]
      vmovaps xmm11, [rsp+108h+var_68]
      vmovaps xmm10, [rsp+108h+var_58]
      vmovaps xmm9, [rsp+108h+var_48]
      vmovaps xmm8, [rsp+108h+var_38]
      vmovaps xmm7, [rsp+108h+var_28]
      vmovaps xmm6, [rsp+108h+var_18]
    }
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
  GfxViewInfo *v5; 
  unsigned int i; 
  __int64 v14; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v33; 
  ComputeCmdBufState *statea; 
  int dataa[1192]; 
  char v36; 

  statea = state;
  v5 = &data->viewInfo[data->viewInfoIndex];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 607, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo", state) )
    __debugbreak();
  _RSI = &v36;
  dataa[0] = bspDisplacementGlob.sliceCount;
  for ( i = 0; i < 0x21; ++i )
  {
    _RBX = NULL;
    if ( (i & 0xFFFFFFDF) != 0 )
    {
      if ( i - 1 > 2 )
      {
        if ( i - 4 > 7 )
        {
          if ( i - 12 > 0x13 )
          {
            LODWORD(v33) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 663, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_SetupBspTessFactorsSceneConstants: unhandled scene view type %d", v33) )
              __debugbreak();
            goto LABEL_24;
          }
          v18 = (i - 12) % 0xA;
          v19 = (i - 12) / 0xA;
          if ( v18 >= data->sunShadow.partitionCache[v19].gfxCachedSunShadowOverlapCount )
            goto LABEL_27;
          v20 = v19 * 8656 + 864i64 * v18;
          if ( (const GfxBackEndData *)((char *)data + v20) == (const GfxBackEndData *)-929984i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 654, ASSERT_TYPE_ASSERT, "(&data->sunShadow.partitionCache[partitionIndex].gfxCachedSunShadowOverlap[cellIndex].staticEntry)", (const char *)&queryFormat, "&data->sunShadow.partitionCache[partitionIndex].gfxCachedSunShadowOverlap[cellIndex].staticEntry") )
            __debugbreak();
          __asm { vxorps  xmm0, xmm0, xmm0 }
          _RBX = &(*(GfxCachedSunShadow **)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntry + v20))->viewParms;
          __asm
          {
            vinsertps xmm0, xmm0, dword ptr [rbx+10Ch], 0
            vinsertps xmm0, xmm0, dword ptr [rbx+110h], 10h
            vinsertps xmm0, xmm0, dword ptr [rbx+114h], 20h ; ' '
            vmovups xmmword ptr [rsi-210h], xmm0
          }
          R_SunShadow_GetMapSize();
          __asm { vmovups xmm1, cs:__xmm@00000000000000003f80000000000000 }
        }
        else
        {
          v14 = i - 4;
          if ( (unsigned int)v14 >= data->spotShadowUpdateCount )
            goto LABEL_24;
          _RBX = &data->spotShadowUpdates[v14].viewportParms.viewParms;
          R_SpotShadow_GetMapSize();
          __asm
          {
            vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
            vinsertps xmm0, xmm0, dword ptr [rbx+100h], 0
            vinsertps xmm0, xmm0, dword ptr [rbx+104h], 10h
            vinsertps xmm0, xmm0, dword ptr [rbx+108h], 20h ; ' '
            vmovups xmm1, cs:__xmm@00000000000000003f80000000000000
            vmovups xmmword ptr [rsi-210h], xmm0
          }
        }
      }
      else
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
        _RBX = &data->sunShadow.partition[i - 1].viewParms;
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [rbx+10Ch], 0
          vinsertps xmm0, xmm0, dword ptr [rbx+110h], 10h
          vinsertps xmm0, xmm0, dword ptr [rbx+114h], 20h ; ' '
          vmovups xmmword ptr [rsi-210h], xmm0
        }
        R_SunShadow_GetMapSize();
        __asm { vmovups xmm1, cs:__xmm@00000000000000003f80000000000000 }
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
        vinsertps xmm0, xmm0, dword ptr [r14+100h], 0
        vinsertps xmm0, xmm0, dword ptr [r14+104h], 10h
        vinsertps xmm0, xmm0, dword ptr [r14+108h], 20h ; ' '
        vmovups xmmword ptr [rsi-210h], xmm0
      }
      _RBX = (GfxViewParms *)v5;
      if ( v5->sceneViewport.y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_displacement.cpp", 621, ASSERT_TYPE_ASSERT, "(viewInfo->sceneViewport.y == 0)", (const char *)&queryFormat, "viewInfo->sceneViewport.y == 0") )
        __debugbreak();
      __asm { vxorps  xmm1, xmm1, xmm1 }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vinsertps xmm1, xmm1, xmm0, 0
      vmovups xmmword ptr [rsi], xmm1
    }
LABEL_24:
    _RAX = (unsigned __int64)i << 6;
    if ( _RBX )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+80h]
        vmovups [rsp+rax+1528h+var_14D8], ymm0
        vmovups ymm1, ymmword ptr [rbx+0A0h]
        vmovups [rsp+rax+1528h+var_14B8], ymm1
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups [rsp+rax+1528h+var_C98], ymm0
        vmovups ymm1, ymmword ptr [rbx+60h]
        vmovups [rsp+rax+1528h+var_C78], ymm1
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rsi-210h], xmm0
        vmovups xmmword ptr [rsi], xmm0
      }
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
    _RSI += 16;
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

