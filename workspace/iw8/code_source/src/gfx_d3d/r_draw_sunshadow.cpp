/*
==============
R_DrawSunshadow_BlitCache
==============
*/

void __fastcall R_DrawSunshadow_BlitCache(const GfxBackEndData *data, GfxCmdBufContext *context, int partitionIndex, R_RT_DepthHandle *sunshadowCacheRt)
{
  ?R_DrawSunshadow_BlitCache@@YAXPEBUGfxBackEndData@@UGfxCmdBufContext@@HVR_RT_DepthHandle@@@Z(data, context, partitionIndex, sunshadowCacheRt);
}

/*
==============
R_DrawSunshadow_DrawTranslucent
==============
*/

void __fastcall R_DrawSunshadow_DrawTranslucent(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, const R_RT_Group *rtGroup, GfxDrawCallOutput *drawOutput)
{
  ?R_DrawSunshadow_DrawTranslucent@@YAXPEBUGfxViewInfo@@PEBUGfxDrawList@@PEBUR_RT_Group@@PEAUGfxDrawCallOutput@@@Z(viewInfo, drawList, rtGroup, drawOutput);
}

/*
==============
R_DrawSunshadow_DrawCacheForCascade
==============
*/

void __fastcall R_DrawSunshadow_DrawCacheForCascade(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, int partitionIndex, int cellIndex, GfxDrawCallOutput *drawOutput, GfxDrawListType drawListType, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES cacheRtBeforeState)
{
  ?R_DrawSunshadow_DrawCacheForCascade@@YAXPEBUGfxViewInfo@@PEBUGfxDrawList@@HHPEAUGfxDrawCallOutput@@W4GfxDrawListType@@VR_RT_DepthHandle@@4W4D3D12_RESOURCE_STATES@@@Z(viewInfo, drawList, partitionIndex, cellIndex, drawOutput, drawListType, sunshadowCacheRt, sunshadowCacheBackfaceRt, cacheRtBeforeState);
}

/*
==============
R_DrawSunshadow_DrawCascade
==============
*/

void __fastcall R_DrawSunshadow_DrawCascade(const GfxViewInfo *viewInfo, GfxDrawListType drawListType, R_RT_DepthHandle *depthRt, MaterialTechniqueType techniqueOverride, GfxDrawCallOutput *drawOutput)
{
  ?R_DrawSunshadow_DrawCascade@@YAXPEBUGfxViewInfo@@W4GfxDrawListType@@VR_RT_DepthHandle@@W4MaterialTechniqueType@@PEAUGfxDrawCallOutput@@@Z(viewInfo, drawListType, depthRt, techniqueOverride, drawOutput);
}

/*
==============
R_DrawSunshadow_DrawCacheForAllCascades
==============
*/

void __fastcall R_DrawSunshadow_DrawCacheForAllCascades(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES cacheRtBeforeState)
{
  ?R_DrawSunshadow_DrawCacheForAllCascades@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@VR_RT_DepthHandle@@3W4D3D12_RESOURCE_STATES@@@Z(gfxContext, data, viewInfo, sunshadowCacheRt, sunshadowCacheBackfaceRt, cacheRtBeforeState);
}

/*
==============
R_DrawSunshadow_BlitCache
==============
*/
void R_DrawSunshadow_BlitCache(const GfxBackEndData *data, GfxCmdBufContext *context, int partitionIndex, R_RT_DepthHandle *sunshadowCacheRt)
{
  unsigned int firstCachedSunShadowPartition; 
  GfxCmdBufContext *v12; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  unsigned int v15; 
  __int64 v18; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  __int64 viewInfoIndex; 
  GfxCmdBufSourceState *v26; 
  GfxQuadMeshData *v27; 
  float fmt; 
  __int64 s0; 
  float s0a; 
  __int64 t0; 
  float t0a; 
  float v65; 
  float v66; 
  float outBias; 
  float outScale; 
  unsigned int gfxCachedSunShadowOverlapCount; 
  GfxCmdBufContext *v70; 
  GfxCmdBufContext v71; 
  R_RT_DepthHandle *v72; 
  R_RT_DepthHandle v73; 
  R_RT_Handle v74; 

  firstCachedSunShadowPartition = data->sunShadow.firstCachedSunShadowPartition;
  v72 = sunshadowCacheRt;
  _RSI = sunshadowCacheRt;
  v70 = context;
  v12 = context;
  if ( (firstCachedSunShadowPartition > partitionIndex || partitionIndex > (unsigned int)data->sunShadow.lastCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 31, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( &data->sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( &data->sunShadow, partitionIndex )") )
    __debugbreak();
  SunShadowPartitionCache = R_GetSunShadowPartitionCache(&data->sunShadow, partitionIndex);
  gfxCachedSunShadowOverlapCount = SunShadowPartitionCache->gfxCachedSunShadowOverlapCount;
  if ( gfxCachedSunShadowOverlapCount )
  {
    __asm { vmovss  xmm1, cs:__real@3f800000 }
    v15 = 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+158h+outBias], xmm0
      vmovss  [rsp+158h+outScale], xmm1
    }
    _RDI = &SunShadowPartitionCache->gfxCachedSunShadowOverlap[0].staticEntryData;
    __asm
    {
      vmovaps [rsp+158h+var_58], xmm6
      vmovaps [rsp+158h+var_68], xmm7
      vmovaps [rsp+158h+var_78], xmm8
    }
    v71.source = NULL;
    do
    {
      v18 = *(_QWORD *)_RDI[-1].viewParms.camera.zPlanes;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups [rsp+158h+var_C8], ymm0
      }
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v74, *(unsigned __int16 *)(v18 + 502), &v73);
      if ( rg.useCompressedSunShadowClipPlanes )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+4]; farClip
          vmovss  xmm1, dword ptr [rdi]; nearClip
        }
        R_CompressedSunShadow_GetClipPlanesScaleBias(&data->sunShadow, *(const float *)&_XMM1, *(const float *)&_XMM2, &outScale, &outBias);
      }
      Surface = R_RT_Handle::GetSurface(&v74);
      source = v12->source;
      p_m_image = &Surface->m_image;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      p_input = &source->input;
      if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      p_input->codeImages[0] = &p_m_image->m_base;
      viewInfoIndex = data->viewInfoIndex;
      if ( (unsigned int)viewInfoIndex >= 6 )
      {
        LODWORD(t0) = 6;
        LODWORD(s0) = data->viewInfoIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 170, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", s0, t0) )
          __debugbreak();
      }
      if ( !R_IsCachedSunShadowPartition(&data->sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 171, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      if ( v15 >= 0xA )
      {
        LODWORD(t0) = 10;
        LODWORD(s0) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 172, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( ( 9 + 1 ) )", "cellIndex doesn't index CACHED_SUN_SHADOW_CELL_MAX_OVERLAP\n\t%i not in [0, %i)", s0, t0) )
          __debugbreak();
      }
      v26 = v71.source;
      v27 = &gfxMeshGlob.sunShadowCacheQuadMesh[0][0][0][(__int64)v71.source + 20 * viewInfoIndex + 10 * (partitionIndex - (unsigned int)data->sunShadow.firstCachedSunShadowPartition)];
      R_RT_Handle::GetSurface(&v74);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vcvtsi2ss xmm1, xmm1, rax
        vdivss  xmm8, xmm1, xmm0
      }
      R_RT_Handle::GetSurface(&v74);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vcvtsi2ss xmm1, xmm1, rax
        vdivss  xmm7, xmm1, xmm0
      }
      R_RT_Handle::GetSurface(&v74);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vcvtsi2ss xmm1, xmm1, rax
        vdivss  xmm1, xmm1, xmm0
        vaddss  xmm6, xmm1, xmm8
      }
      R_RT_Handle::GetSurface(&v74);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi-0Ch]; w
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vcvtsi2ss xmm1, xmm1, rax
        vdivss  xmm1, xmm1, xmm0
        vmovss  xmm0, dword ptr [rdi-8]
        vaddss  xmm2, xmm1, xmm7
        vmovss  xmm1, dword ptr [rdi-14h]; x
        vmovss  [rsp+158h+var_118], xmm2
        vmovss  xmm2, dword ptr [rdi-10h]; y
        vmovss  [rsp+158h+var_120], xmm6
        vmovss  [rsp+158h+t0], xmm7
        vmovss  [rsp+158h+s0], xmm8
        vmovss  dword ptr [rsp+158h+fmt], xmm0
      }
      R_SetQuadMesh(v27, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, s0a, t0a, v65, v66, 0xFFFFFFFF);
      __asm
      {
        vmovss  xmm0, [rsp+158h+outScale]
        vmovss  xmm1, [rsp+158h+outBias]
      }
      _RCX = v70;
      _RAX = v70->source;
      __asm
      {
        vmovss  dword ptr [rax+1060h], xmm0
        vmovups xmm0, xmmword ptr [rcx]
        vmovss  dword ptr [rax+1064h], xmm1
      }
      *(_QWORD *)&_RAX->input.consts[150].xyz.z = 0i64;
      ++_RAX->constVersions[150];
      __asm { vmovups [rsp+158h+var_E8], xmm0 }
      R_DrawQuadMesh(&v71, rgp.floatZWriteDepthMaterial, &v27->meshData);
      v12 = v70;
      ++v15;
      v71.source = (GfxCmdBufSourceState *)((char *)v26->matrices.matrix[0].m.m[0].v + 1);
      _RDI = (GfxCachedSunShadowEntryData *)((char *)_RDI + 864);
      _RSI = v72;
    }
    while ( v15 < gfxCachedSunShadowOverlapCount );
    __asm
    {
      vmovaps xmm8, [rsp+158h+var_78]
      vmovaps xmm7, [rsp+158h+var_68]
      vmovaps xmm6, [rsp+158h+var_58]
    }
  }
}

/*
==============
R_DrawSunshadow_DrawCacheForAllCascades
==============
*/
void R_DrawSunshadow_DrawCacheForAllCascades(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES cacheRtBeforeState)
{
  unsigned int v11; 
  GfxCmdBufState *state; 
  D3D12_RESOURCE_STATES v17; 
  GfxCmdBufState *v20; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  unsigned int gfxCachedSunShadowOverlapCount; 
  int v27; 
  unsigned __int64 *p_updateExtentsMask; 
  int v29; 
  R_RT_Handle v34; 
  R_RT_Handle v35; 
  R_RT_DepthHandle *v36; 
  R_RT_DepthHandle *v37; 
  GfxDrawCallOutput drawOutput; 

  _R14 = sunshadowCacheBackfaceRt;
  _RDI = gfxContext;
  v36 = sunshadowCacheBackfaceRt;
  _R12 = sunshadowCacheRt;
  v37 = sunshadowCacheRt;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 667, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( viewInfo->useCachedSunShadow )
  {
    v11 = 0;
    if ( R_RT_Handle::GetAuxDirty(_R12) )
    {
      __asm { vmovups ymm0, ymmword ptr [r12] }
      state = _RDI->state;
      __asm { vmovups [rsp+24A0h+var_2450], ymm0 }
      R_HW_AddResourceTransition(state, &v34, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]
        vmovups xmm1, xmmword ptr [rdi]
        vmovups [rsp+24A0h+var_2430], ymm0
        vmovups xmmword ptr [rsp+24A0h+var_2450], xmm1
      }
      R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v34, (R_RT_DepthHandle *)&v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(677)");
      R_ClearScreen(state, 0x10u, 0);
      __asm { vmovups ymm0, ymmword ptr [r12] }
      v17 = cacheRtBeforeState;
      __asm { vmovups [rsp+24A0h+var_2430], ymm0 }
      R_HW_AddResourceTransition(state, &v35, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+24A0h+var_2450], xmm0
      }
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(683)");
    }
    else
    {
      v17 = cacheRtBeforeState;
    }
    if ( R_RT_Handle::IsValid(sunshadowCacheBackfaceRt) && R_RT_Handle::GetAuxDirty(sunshadowCacheBackfaceRt) )
    {
      __asm { vmovups ymm0, ymmword ptr [r14] }
      v20 = _RDI->state;
      __asm { vmovups [rsp+24A0h+var_2430], ymm0 }
      R_HW_AddResourceTransition(v20, &v35, v17, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(v20);
      __asm
      {
        vmovups ymm0, ymmword ptr [r14]
        vmovups xmm1, xmmword ptr [rdi]
        vmovups [rsp+24A0h+var_2430], ymm0
        vmovups xmmword ptr [rsp+24A0h+var_2450], xmm1
      }
      R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v34, (R_RT_DepthHandle *)&v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(690)");
      R_ClearScreen(v20, 0x10u, 0);
      __asm
      {
        vmovups ymm0, ymmword ptr [r14]
        vmovups [rsp+24A0h+var_2430], ymm0
      }
      R_HW_AddResourceTransition(v20, &v35, D3D12_RESOURCE_STATE_DEPTH_WRITE, v17, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(v20);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+24A0h+var_2450], xmm0
      }
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(696)");
    }
    do
    {
      if ( viewInfo->useCachedSunShadow && data->sunShadow.firstCachedSunShadowPartition <= v11 && v11 <= data->sunShadow.lastCachedSunShadowPartition )
      {
        SunShadowPartitionCache = R_GetSunShadowPartitionCache(&data->sunShadow, v11);
        if ( data == (const GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(&data->sunShadow, v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        gfxCachedSunShadowOverlapCount = SunShadowPartitionCache->gfxCachedSunShadowOverlapCount;
        v27 = 10 * (v11 - data->sunShadow.firstCachedSunShadowPartition) + 45;
        if ( gfxCachedSunShadowOverlapCount )
        {
          p_updateExtentsMask = &SunShadowPartitionCache->gfxCachedSunShadowOverlap[0].updateExtentsMask;
          v29 = -v27;
          do
          {
            if ( (*((_BYTE *)p_updateExtentsMask - 4) || *p_updateExtentsMask || *((_BYTE *)p_updateExtentsMask + 8)) && R_RunDrawListCommandBuffer(data, (const GfxDrawListType)v27) )
            {
              R_GPU_BeginRunDrawListTimer((const GfxDrawListType)v27);
              R_ProfBeginDrawListImmediate((const GfxDrawListType)v27);
              R_InitDrawCallOutput(data, &drawOutput);
              _RAX = v36;
              __asm { vmovups ymm0, ymmword ptr [rax] }
              _RAX = v37;
              __asm
              {
                vmovups [rsp+24A0h+var_2430], ymm0
                vmovups ymm1, ymmword ptr [rax]
                vmovups [rsp+24A0h+var_2450], ymm1
              }
              R_DrawSunshadow_DrawCacheForCascade(viewInfo, &viewInfo->drawList[v27], v11, v29 + v27, &drawOutput, (GfxDrawListType)v27, (R_RT_DepthHandle *)&v34, (R_RT_DepthHandle *)&v35, cacheRtBeforeState);
              R_ProfEndDrawListImmediate();
              R_GPU_EndTimer();
            }
            ++v27;
            p_updateExtentsMask += 108;
          }
          while ( v29 + v27 < gfxCachedSunShadowOverlapCount );
        }
      }
      ++v11;
    }
    while ( v11 < 3 );
  }
}

/*
==============
R_DrawSunshadow_DrawCacheForCascade
==============
*/
void R_DrawSunshadow_DrawCacheForCascade(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, int partitionIndex, int cellIndex, GfxDrawCallOutput *drawOutput, GfxDrawListType drawListType, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES cacheRtBeforeState)
{
  signed __int64 v9; 
  void *v20; 
  unsigned __int64 v21; 
  const char *DrawListTypeName; 
  const char *v26; 
  const GfxBackEndData *data; 
  unsigned __int64 v28; 
  GfxViewParms *p_viewParms; 
  __int64 v30; 
  unsigned int v31; 
  const GfxSunShadowPartitionCache *SunShadowPartitionCache; 
  char gen; 
  char skipUpdate; 
  unsigned int cachedSunShadowIndex; 
  GfxCachedSunShadow *bspEntry; 
  __int64 staticEntry; 
  __int64 v49; 
  unsigned int v50; 
  GfxCmdBufSourceState *source; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxDrawListType v62; 
  __int64 v63; 
  __int64 v67; 
  GfxCmdBufSourceState *v71; 
  unsigned int v72; 
  const R_RT_Surface *v73; 
  __int64 v83; 
  unsigned int MapSize; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned int v92; 
  GfxCachedSunShadow *v93; 
  unsigned int y; 
  unsigned int x; 
  unsigned int v97; 
  GfxCmdBufSourceState *v108; 
  unsigned int v109; 
  const R_RT_Surface *v110; 
  __int64 viewInfoIndex; 
  int v131; 
  int v133; 
  unsigned __int64 v150; 
  GfxMeshData *v151; 
  unsigned __int64 v152; 
  int v154; 
  GfxMeshData *v164; 
  GfxCmdBufSourceState *v169; 
  unsigned int v170; 
  const R_RT_Surface *v171; 
  const R_RT_Surface *v172; 
  GfxCmdBufSourceState *v173; 
  GfxDrawListType v176; 
  _DWORD *v177; 
  D3D12_RESOURCE_STATES v182; 
  GfxCmdBufSourceState *v186; 
  unsigned int v187; 
  const R_RT_Surface *v188; 
  GfxCmdBufState *v192; 
  __int64 v194; 
  GfxCmdBufSourceState *v201; 
  unsigned int v202; 
  const R_RT_Surface *v203; 
  GfxCmdBufState *v207; 
  __int64 v212; 
  float prevFrameViewParms; 
  GfxDrawCallOutput *drawOutputa; 
  float drawOutputb; 
  __int64 s0; 
  float s0a; 
  __int64 v230; 
  float v231; 
  float v232; 
  __int64 v233; 
  float v234; 
  float v235; 
  float v236; 
  GfxCmdBufContext ctx; 
  R_RT_Handle v238; 
  char v239; 
  char v240; 
  unsigned int partitionIndexa; 
  GfxDrawListType v242; 
  float h; 
  R_RT_Handle v244; 
  __int64 v245; 
  R_RT_DepthHandle *v246; 
  _DWORD *v247; 
  GfxMeshData *mesh; 
  __int64 v249; 
  GfxDrawCallOutput *v250; 
  __int64 v251; 
  GfxViewport viewport; 
  R_RT_Handle v253; 
  R_RT_Handle v254; 
  GfxDrawList v255; 
  GfxDrawList drawLista; 
  GfxDrawListIter drawListIter; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v259; 
  base_vec4_t<unsigned int> v260[74]; 
  char v261; 

  v20 = alloca(v9);
  v251 = -2i64;
  __asm
  {
    vmovaps [rsp+5A30h+var_50], xmm6
    vmovaps [rsp+5A30h+var_60], xmm7
    vmovaps [rsp+5A30h+var_70], xmm8
    vmovaps [rsp+5A30h+var_80], xmm9
    vmovaps [rsp+5A30h+var_90], xmm10
    vmovaps [rsp+5A30h+var_A0], xmm11
    vmovaps [rsp+5A30h+var_B0], xmm12
    vmovaps [rsp+5A30h+var_C0], xmm13
    vmovaps [rsp+5A30h+var_D0], xmm14
  }
  v21 = cellIndex;
  LODWORD(h) = cellIndex;
  partitionIndexa = partitionIndex;
  _RDI = drawList;
  v250 = drawOutput;
  v242 = drawListType;
  v246 = sunshadowCacheRt;
  Profile_Begin(92);
  DrawListTypeName = R_GetDrawListTypeName(drawListType);
  v26 = j_va("Cached Sun Shadow Map Cell - %s", DrawListTypeName);
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, v26);
  data = viewInfo->input.data;
  *(_QWORD *)&v238.m_surfaceID = data;
  v28 = v21;
  p_viewParms = &R_GetSunShadowPartitionCache(&data->sunShadow, partitionIndex)->gfxCachedSunShadowOverlap[v28].staticEntryData.viewParms;
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v259);
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  v30 = drawListType;
  v245 = v30 * 664;
  data->drawListIter[v30].iteratorCount = 1;
  if ( R_DrawListStart(&state, &v259, viewInfo, p_viewParms, NULL, v250) )
  {
    data->drawListIter[v30].iteratorCount = 0;
    ctx.source = &v259;
    ctx.state = &state;
    R_GP_SetScenePassIndex(&v259, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, data, PERSISTENT_TABLE_SCENE);
    ctx.source->viewStatsTarget = GFX_VIEW_STATS_SHADOW_SUN;
    v31 = partitionIndexa;
    if ( (data->sunShadow.firstCachedSunShadowPartition > partitionIndexa || partitionIndexa > data->sunShadow.lastCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 247, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( &data->sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( &data->sunShadow, partitionIndex )") )
      __debugbreak();
    SunShadowPartitionCache = R_GetSunShadowPartitionCache(&data->sunShadow, v31);
    gen = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].gen;
    v239 = gen;
    skipUpdate = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].skipUpdate;
    v240 = skipUpdate;
    _RCX = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].staticEntry;
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx+1F8h]
      vmovups xmmword ptr [rbp+5930h+viewport.x], xmm0
    }
    cachedSunShadowIndex = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].staticEntry->cachedSunShadowIndex;
    bspEntry = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry;
    if ( bspEntry )
      partitionIndexa = bspEntry->cachedSunShadowIndex;
    else
      partitionIndexa = -1;
    if ( gen && skipUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 257, ASSERT_TYPE_ASSERT, "(!( gen && skip ))", (const char *)&queryFormat, "!( gen && skip )") )
      __debugbreak();
    memset_0(drawLista.smodelSurfList, 0, 0x74ui64);
    drawLista.codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rbp+5930h+drawList.bspSurfList.count], xmm0
      vmovups xmm1, xmmword ptr [rdi+88h]
      vmovups xmmword ptr [rbp+5930h+drawList.superTerrainSurfList.surfs], xmm1
      vpextrd rax, xmm1, 2
    }
    if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].newTerrainSurfs != ((_DWORD)_RAX != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 265, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->newTerrainSurfs == bspDrawList.superTerrainSurfList.count > 0)", (const char *)&queryFormat, "sunShadowOverlap->newTerrainSurfs == bspDrawList.superTerrainSurfList.count > 0") )
      __debugbreak();
    memset_0(&v255, 0, sizeof(v255));
    v255.codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+10h]
      vmovups xmmword ptr [rbp+5930h+var_58E0.smodelSurfList.surfDataBytes], xmm0
      vmovsd  xmm1, qword ptr [rdi+20h]
      vmovsd  [rbp+5930h+var_58E0.smodelSurfList.visData], xmm1
      vmovups xmm0, xmmword ptr [rdi+28h]
      vmovups xmmword ptr [rbp+5930h+var_58E0.smodelSurfList.surfDataBytes+18h], xmm0
      vmovsd  xmm1, qword ptr [rdi+38h]
      vmovsd  [rbp+5930h+var_58E0.smodelSurfList.visData+18h], xmm1
      vmovups xmm0, xmmword ptr [rdi+40h]
      vmovups xmmword ptr [rbp+5930h+var_58E0.smodelSurfList.surfDataBytes+30h], xmm0
      vmovsd  xmm1, qword ptr [rdi+50h]
      vmovsd  [rbp+5930h+var_58E0.smodelSurfList.visData+30h], xmm1
    }
    staticEntry = (__int64)SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].staticEntry;
    v247 = (_DWORD *)staticEntry;
    v49 = (__int64)SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry;
    v249 = v49;
    if ( v239 )
    {
      if ( v49 )
      {
        v50 = partitionIndexa;
        if ( cachedSunShadowIndex == partitionIndexa && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 292, ASSERT_TYPE_ASSERT, "(cachedSunShadowIndex != cachedBspSunShadowIndex)", (const char *)&queryFormat, "cachedSunShadowIndex != cachedBspSunShadowIndex") )
          __debugbreak();
        _RAX = v246;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
        }
        R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v254, v50, (R_RT_DepthHandle *)&v253);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
        }
        source = ctx.source;
        height = R_RT_Handle::GetSurface(&v253)->m_image.m_base.height;
        Surface = R_RT_Handle::GetSurface(&v253);
        R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
        }
        R_HW_AddResourceTransition(ctx.state, &v253, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
          vmovups xmm1, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm1
        }
        R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v238, (R_RT_DepthHandle *)&v253, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(299)");
        if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
          R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
        R_SetViewportStruct(ctx.source, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport);
        R_SetViewportAndScissorSeparate(ctx.state, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_ClearDepthViewport((GfxCmdBufContext *)&v238);
        R_Set3D(ctx.source);
        R_UpdateViewport(ctx.source, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport);
        R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow BSPonly cell");
        R_DrawListIter_Init(&drawLista, &drawListIter);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        v62 = v242;
        R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v238, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v242);
        v63 = v245;
        *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v245) += drawListIter.iteratorCount;
        R_ProfEndNamedEvent(ctx.state);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheBSP, "r_resummarizeSunCacheBSP") )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
            vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
          }
          R_ResummarizeDepth((GfxCmdBufContext *)&v238);
        }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheBSP, "r_resolveSunCacheBSP") )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
            vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
          }
          R_ResolveDepth((GfxCmdBufContext *)&v238);
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
        }
        R_HW_AddResourceTransition(ctx.state, &v253, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        v67 = v249;
        *(_DWORD *)(v249 + 536) = data->frameCount;
        ++*(_DWORD *)(v67 + 548);
      }
      else
      {
        v63 = v245;
        v62 = v242;
      }
      _RAX = v246;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
      }
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v254, cachedSunShadowIndex, (R_RT_DepthHandle *)&v253);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
        vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
      }
      v71 = ctx.source;
      v72 = R_RT_Handle::GetSurface(&v253)->m_image.m_base.height;
      v73 = R_RT_Handle::GetSurface(&v253);
      R_SetRenderTargetSize(v71, v73->m_image.m_base.width, v72, GFX_USE_VIEWPORT_FOR_VIEW);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
        vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
      }
      R_HW_AddResourceTransition(ctx.state, &v253, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
        vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
        vmovups xmm1, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm1
      }
      R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v238, (R_RT_DepthHandle *)&v253, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(360)");
      if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
        R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
      R_SetViewportStruct(ctx.source, &viewport);
      R_SetViewportAndScissorSeparate(ctx.state, &viewport, &viewport);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
      }
      R_ClearDepthViewport((GfxCmdBufContext *)&v238);
      R_Set3D(ctx.source);
      R_UpdateViewport(ctx.source, &viewport);
      R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell BSP");
      R_DrawListIter_Init(&drawLista, &drawListIter);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
      }
      R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v238, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v62);
      *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v63) += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell smodel");
      R_DrawListIter_Init(&v255, &drawListIter);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
      }
      R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v238, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v62);
      *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v63) += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheFinal, "r_resummarizeSunCacheFinal") )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_ResummarizeDepth((GfxCmdBufContext *)&v238);
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheFinal, "r_resolveSunCacheFinal") )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_ResolveDepth((GfxCmdBufContext *)&v238);
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
        vmovups ymmword ptr [rbp+5930h+var_5920.m_surfaceID], ymm0
      }
      R_HW_AddResourceTransition(ctx.state, &v253, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v83 = (__int64)v247;
      v247[134] = data->frameCount;
      ++*(_DWORD *)(v83 + 548);
      goto LABEL_122;
    }
    if ( v240 )
    {
LABEL_122:
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
      }
      R_SetRenderTargetsInternal_None((GfxCmdBufContext *)&v238, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(653)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
      }
      R_DrawListEnd((GfxCmdBufContext *)&v238, v250);
      goto LABEL_123;
    }
    if ( v49 && cachedSunShadowIndex == partitionIndexa && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 411, ASSERT_TYPE_ASSERT, "(!sunShadowOverlap->bspEntry || cachedSunShadowIndex != cachedBspSunShadowIndex)", (const char *)&queryFormat, "!sunShadowOverlap->bspEntry || cachedSunShadowIndex != cachedBspSunShadowIndex") )
      __debugbreak();
    if ( drawLista.bspSurfList.count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 412, ASSERT_TYPE_ASSERT, "(bspDrawList.bspSurfList.count == 0)", (const char *)&queryFormat, "bspDrawList.bspSurfList.count == 0") )
      __debugbreak();
    _RDI = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].updateExtentsMask;
    if ( _RDI )
    {
      R_ProfBeginNamedEvent(ctx.state, "Sun Shadow copy cell BSPonly to Full for smodel lod change rects");
      if ( !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 419, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->bspEntry)", (const char *)&queryFormat, "sunShadowOverlap->bspEntry") )
        __debugbreak();
      _R12 = v246;
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]
        vmovups [rbp+5930h+var_5990], ymm0
      }
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v253, partitionIndexa, (R_RT_DepthHandle *)&v244);
      __asm
      {
        vmovups ymm0, ymmword ptr [r12]
        vmovups [rbp+5930h+var_5990], ymm0
      }
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v254, cachedSunShadowIndex, (R_RT_DepthHandle *)&v244);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_sm_sunBspBlitCS, "sm_sunBspBlitCS") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
        }
        R_HW_AddResourceTransition(ctx.state, &v244, cacheRtBeforeState, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        MapSize = R_SunShadow_GetMapSize();
        v90 = MapSize >> 1;
        v91 = MapSize >> 4;
        if ( ((MapSize >> 4) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 431, ASSERT_TYPE_ASSERT, "( subcellSize % 8 == 0 )", "cached sun shadow subcellSize must be a multiple of 8 for htile copy") )
          __debugbreak();
        if ( viewport.width != v90 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 432, ASSERT_TYPE_ASSERT, "( staticViewport.width ) == ( cellSize )", "%s == %s\n\t%i, %i", "staticViewport.width", "cellSize", viewport.width, v90) )
          __debugbreak();
        if ( viewport.height != v90 )
        {
          LODWORD(v233) = v90;
          LODWORD(v230) = viewport.height;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 433, ASSERT_TYPE_ASSERT, "( staticViewport.height ) == ( cellSize )", "%s == %s\n\t%i, %i", "staticViewport.height", "cellSize", v230, v233) )
            __debugbreak();
        }
        if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport.width != v90 )
        {
          LODWORD(v233) = v90;
          LODWORD(v230) = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport.width;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 434, ASSERT_TYPE_ASSERT, "( sunShadowOverlap->bspEntry->viewport.width ) == ( cellSize )", "%s == %s\n\t%i, %i", "sunShadowOverlap->bspEntry->viewport.width", "cellSize", v230, v233) )
            __debugbreak();
        }
        if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport.height != v90 )
        {
          LODWORD(v233) = v90;
          LODWORD(v230) = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport.height;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 435, ASSERT_TYPE_ASSERT, "( sunShadowOverlap->bspEntry->viewport.height ) == ( cellSize )", "%s == %s\n\t%i, %i", "sunShadowOverlap->bspEntry->viewport.height", "cellSize", v230, v233) )
            __debugbreak();
        }
        v92 = 0;
        v93 = SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry;
        y = viewport.y;
        x = viewport.x;
        do
        {
          __asm { tzcnt   r8, rdi }
          _RDI &= ~(1i64 << _R8);
          v97 = v91 * ((unsigned int)_R8 >> 3);
          LODWORD(_R8) = v91 * (_R8 & 7);
          *(_DWORD *)&v238.m_surfaceID = _R8 + v93->viewport.x;
          *((_DWORD *)&v238.m_surfaceID + 1) = v97 + v93->viewport.y;
          v238.m_tracking.m_allocCounter = x + _R8;
          *(&v238.m_tracking.m_allocCounter + 1) = y + v97;
          _RAX = 2i64 * v92;
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID]
            vmovups [rbp+rax*8+5930h+var_4E0], xmm0
          }
          ++v92;
        }
        while ( _RDI );
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
          vmovups ymm1, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
          vmovups ymmword ptr [rsp+5A30h+var_59C0.m_surfaceID], ymm1
          vmovss  xmm0, cs:__real@3f800000
          vmovss  dword ptr [rsp+5A30h+var_59F0], xmm0
          vxorps  xmm1, xmm1, xmm1
          vmovss  dword ptr [rsp+5A30h+var_59F8], xmm1
        }
        R_CopyCompressedDepthRectList(ctx.state, (R_RT_DepthHandle *)&v238, &v244, v260, v92, v91, v91, v231, v234, 0);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
        }
        R_HW_AddResourceTransition(ctx.state, &v244, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_UNORDERED_ACCESS, (D3D12_RESOURCE_STATES)((unsigned __int8)_RDI + 16), D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
          vmovups xmm1, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm1
        }
        R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v238, (R_RT_DepthHandle *)&v244, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(457)");
        if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
          R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups ymmword ptr [rsp+5A30h+var_59C0.m_surfaceID], ymm0
        }
        v108 = ctx.source;
        v109 = R_RT_Handle::GetSurface(&v238)->m_image.m_base.height;
        v110 = R_RT_Handle::GetSurface(&v238);
        R_SetRenderTargetSize(v108, v110->m_image.m_base.width, v109, GFX_USE_VIEWPORT_FOR_VIEW);
        R_SetViewportStruct(ctx.source, &viewport);
        R_SetViewportAndScissorSeparate(ctx.state, &viewport, &viewport);
        R_Set3D(ctx.source);
        R_UpdateViewport(ctx.source, &viewport);
      }
      else
      {
        R_RT_Handle::GetSurface(&v253);
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, ecx
        }
        R_RT_Handle::GetSurface(&v253);
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, ecx
          vmovss  xmm1, cs:__real@3f800000
          vdivss  xmm4, xmm1, xmm6
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm14, xmm0, xmm4
          vdivss  xmm3, xmm1, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm7, xmm0, xmm3
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vmulss  xmm9, xmm1, xmm4
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm13, xmm0, xmm3
        }
        viewInfoIndex = data->viewInfoIndex;
        if ( (unsigned int)viewInfoIndex >= 6 )
        {
          LODWORD(drawOutputa) = data->viewInfoIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", drawOutputa, 6) )
            __debugbreak();
        }
        if ( !R_IsCachedSunShadowPartition(&data->sunShadow, v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 162, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        if ( LODWORD(h) >= 0xA )
        {
          LODWORD(s0) = 10;
          *(float *)&drawOutputa = h;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_meshdata.h", 163, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( ( 9 + 1 ) )", "cellIndex doesn't index CACHED_SUN_SHADOW_CELL_MAX_OVERLAP\n\t%i not in [0, %i)", drawOutputa, s0) )
            __debugbreak();
        }
        mesh = &gfxMeshGlob.sunShadowBatchedQuadMesh[0][viewInfoIndex][v31 - data->sunShadow.firstCachedSunShadowPartition][LODWORD(h)].meshData;
        R_BeginUpdateBatchedQuadMesh(mesh);
        v131 = 0;
        __asm { tzcnt   rbx, rdi }
        v133 = _RBX & 7;
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, rax
        }
        R_SunShadow_GetMapSize();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmovss  xmm2, cs:__real@3e000000
          vmulss  xmm10, xmm0, xmm2
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vmulss  xmm8, xmm10, xmm1
          vmulss  xmm11, xmm10, xmm6
          vmulss  xmm12, xmm9, xmm2
          vmulss  xmm13, xmm13, xmm2
          vmulss  xmm0, xmm12, xmm1
          vaddss  xmm3, xmm0, xmm14
          vmulss  xmm1, xmm6, xmm13
          vaddss  xmm7, xmm1, xmm7
        }
        v150 = _RDI >> _RBX;
        if ( v150 )
        {
          v151 = mesh;
          while ( 1 )
          {
            v152 = v150;
            __asm { vaddss  xmm9, xmm7, xmm13 }
            if ( (v150 & 1) != 0 )
            {
              v154 = v131++;
              __asm
              {
                vaddss  xmm6, xmm3, xmm12
                vmovss  [rsp+5A30h+var_59E8], xmm9
                vmovss  dword ptr [rsp+5A30h+var_59F0], xmm6
                vmovss  dword ptr [rsp+5A30h+var_59F8], xmm7
                vmovss  [rsp+5A30h+s0], xmm3
                vmovss  dword ptr [rsp+5A30h+drawOutput], xmm10
                vmovss  dword ptr [rsp+5A30h+prevFrameViewParms], xmm10
                vmovaps xmm3, xmm11; y
                vmovaps xmm2, xmm8; x
              }
              R_UpdateBatchedQuadMesh(v151, v154, *(float *)&_XMM2, *(float *)&_XMM3, prevFrameViewParms, drawOutputb, s0a, v232, v235, v236, 0xFFFFFFFF);
              __asm { vmovaps xmm3, xmm6 }
            }
            else
            {
              __asm { vaddss  xmm3, xmm3, xmm12 }
            }
            _EAX = ++v133;
            if ( v133 == 8 )
            {
              v133 = 0;
              __asm
              {
                vxorps  xmm8, xmm8, xmm8
                vaddss  xmm11, xmm11, xmm10
                vmovaps xmm3, xmm14
              }
            }
            else
            {
              __asm { vaddss  xmm8, xmm8, xmm10 }
            }
            v150 >>= 1;
            _ECX = 8;
            __asm
            {
              vmovd   xmm1, ecx
              vmovd   xmm0, eax
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm0, xmm7, xmm9, xmm2
              vmovss  [rbp+5930h+h], xmm0
            }
            if ( v152 < 2 )
              break;
            __asm { vmovss  xmm7, [rbp+5930h+h] }
          }
          data = *(const GfxBackEndData **)&v238.m_surfaceID;
        }
        v164 = mesh;
        R_EndUpdateBatchedQuadMesh(mesh);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
        }
        R_HW_AddResourceTransition(ctx.state, &v244, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
          vmovups xmm1, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm1
        }
        R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v238, (R_RT_DepthHandle *)&v244, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(505)");
        if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
          R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
          vmovups ymmword ptr [rsp+5A30h+var_59C0.m_surfaceID], ymm0
        }
        v169 = ctx.source;
        v170 = R_RT_Handle::GetSurface(&v238)->m_image.m_base.height;
        v171 = R_RT_Handle::GetSurface(&v238);
        R_SetRenderTargetSize(v169, v171->m_image.m_base.width, v170, GFX_USE_VIEWPORT_FOR_VIEW);
        v172 = R_RT_Handle::GetSurface(&v253);
        R_SetCodeImageTextureInternal(ctx.source, 0, &v172->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(509)");
        R_SetViewportStruct(ctx.source, &viewport);
        R_Set2D(ctx.source);
        R_SetViewportAndScissorSeparate(ctx.state, &viewport, &viewport);
        R_UpdateViewport(ctx.source, &viewport);
        v173 = ctx.source;
        *(_QWORD *)ctx.source->input.consts[150].v = 1065353216i64;
        *(_QWORD *)&v173->input.consts[150].xyz.z = 0i64;
        ++v173->constVersions[150];
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_DrawBatchedQuadMesh((GfxCmdBufContext *)&v238, rgp.floatZWriteDepthMaterial, v164, v131);
        R_Set3D(ctx.source);
      }
      R_ProfEndNamedEvent(ctx.state);
      if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].newTerrainSurfs )
      {
        R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell terrain");
        R_DrawListIter_Init(&drawLista, &drawListIter);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        v176 = v242;
        R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v238, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v242);
        *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v245) += drawListIter.iteratorCount;
        R_ProfEndNamedEvent(ctx.state);
        v177 = v247;
        v247[136] = data->frameCount;
        ++v177[139];
      }
      else
      {
        v177 = v247;
        v176 = v242;
      }
      R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell smodels for lod changes");
      R_DrawListIter_Init(&v255, &drawListIter);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
      }
      R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v238, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v176);
      data->drawListIter[v176].iteratorCount += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheFinal, "r_resummarizeSunCacheFinal") )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_ResummarizeDepth((GfxCmdBufContext *)&v238);
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheFinal, "r_resolveSunCacheFinal") )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_ResolveDepth((GfxCmdBufContext *)&v238);
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5900.m_surfaceID]
        vmovups [rbp+5930h+var_5990], ymm0
      }
      v182 = cacheRtBeforeState;
      R_HW_AddResourceTransition(ctx.state, &v244, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v177[135] = data->frameCount;
      ++v177[138];
    }
    else
    {
      if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].newTerrainSurfs )
      {
        _RAX = v246;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups [rbp+5930h+var_5990], ymm0
        }
        R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v253, cachedSunShadowIndex, (R_RT_DepthHandle *)&v244);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
          vmovups ymmword ptr [rbp+5930h+var_5900.m_surfaceID], ymm0
        }
        v186 = ctx.source;
        v187 = R_RT_Handle::GetSurface(&v254)->m_image.m_base.height;
        v188 = R_RT_Handle::GetSurface(&v254);
        R_SetRenderTargetSize(v186, v188->m_image.m_base.width, v187, GFX_USE_VIEWPORT_FOR_VIEW);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
        }
        R_HW_AddResourceTransition(ctx.state, &v244, cacheRtBeforeState, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
          vmovups xmm1, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm1
        }
        R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v238, (R_RT_DepthHandle *)&v244, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(576)");
        v192 = ctx.state;
        if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
        {
          R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
          v192 = ctx.state;
        }
        R_SetViewportAndScissorSeparate(v192, &viewport, &viewport);
        R_SetViewportStruct(ctx.source, &viewport);
        R_Set3D(ctx.source);
        R_UpdateViewport(ctx.source, &viewport);
        R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell terrain");
        R_DrawListIter_Init(&drawLista, &drawListIter);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v238, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v242);
        v194 = v245;
        *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v245) += drawListIter.iteratorCount;
        R_ProfEndNamedEvent(ctx.state);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheFinal, "r_resummarizeSunCacheFinal") )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
            vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
          }
          R_ResummarizeDepth((GfxCmdBufContext *)&v238);
        }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheFinal, "r_resolveSunCacheFinal") )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
            vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
          }
          R_ResolveDepth((GfxCmdBufContext *)&v238);
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
          vmovups [rbp+5930h+var_5990], ymm0
        }
        R_HW_AddResourceTransition(ctx.state, &v244, D3D12_RESOURCE_STATE_DEPTH_WRITE, cacheRtBeforeState, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(ctx.state);
        *(_DWORD *)(staticEntry + 544) = data->frameCount;
        ++*(_DWORD *)(staticEntry + 556);
        v182 = cacheRtBeforeState;
        goto LABEL_110;
      }
      v182 = cacheRtBeforeState;
    }
    v194 = v245;
LABEL_110:
    if ( SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].newTerrainSurfs && !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].terrainSkipBspTile )
    {
      if ( !SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 613, ASSERT_TYPE_ASSERT, "(sunShadowOverlap->bspEntry)", (const char *)&queryFormat, "sunShadowOverlap->bspEntry") )
        __debugbreak();
      _RAX = v246;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rbp+5930h+var_5990], ymm0
      }
      R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v253, partitionIndexa, (R_RT_DepthHandle *)&v244);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
        vmovups ymmword ptr [rbp+5930h+var_5900.m_surfaceID], ymm0
      }
      v201 = ctx.source;
      v202 = R_RT_Handle::GetSurface(&v254)->m_image.m_base.height;
      v203 = R_RT_Handle::GetSurface(&v254);
      R_SetRenderTargetSize(v201, v203->m_image.m_base.width, v202, GFX_USE_VIEWPORT_FOR_VIEW);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
        vmovups [rbp+5930h+var_5990], ymm0
      }
      R_HW_AddResourceTransition(ctx.state, &v244, v182, D3D12_RESOURCE_STATE_DEPTH_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
        vmovups [rbp+5930h+var_5990], ymm0
        vmovups xmm1, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm1
      }
      R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v238, (R_RT_DepthHandle *)&v244, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(620)");
      v207 = ctx.state;
      if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      {
        R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
        v207 = ctx.state;
      }
      R_SetViewportAndScissorSeparate(v207, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport);
      R_SetViewportStruct(ctx.source, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport);
      R_Set3D(ctx.source);
      R_UpdateViewport(ctx.source, &SunShadowPartitionCache->gfxCachedSunShadowOverlap[v28].bspEntry->viewport);
      R_ProfBeginNamedEvent(ctx.state, "Cached Sun Shadow cell terrain in BSP tile");
      R_DrawListIter_Init(&drawLista, &drawListIter);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
        vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
      }
      R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v238, &drawListIter, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v242);
      *(unsigned int *)((char *)&data->drawListIter[0].iteratorCount + v194) += drawListIter.iteratorCount;
      R_ProfEndNamedEvent(ctx.state);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCacheBSP, "r_resummarizeSunCacheBSP") )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_ResummarizeDepth((GfxCmdBufContext *)&v238);
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCacheBSP, "r_resolveSunCacheBSP") )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+5A30h+ctx.source]
          vmovdqa xmmword ptr [rsp+5A30h+var_59C0.m_surfaceID], xmm0
        }
        R_ResolveDepth((GfxCmdBufContext *)&v238);
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+5930h+var_5920.m_surfaceID]
        vmovups [rbp+5930h+var_5990], ymm0
      }
      R_HW_AddResourceTransition(ctx.state, &v244, D3D12_RESOURCE_STATE_DEPTH_WRITE, v182, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(ctx.state);
      v212 = v249;
      *(_DWORD *)(v249 + 544) = data->frameCount;
      ++*(_DWORD *)(v212 + 556);
    }
    goto LABEL_122;
  }
LABEL_123:
  Sys_ProfEndNamedEvent();
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v259);
  Profile_EndInternal(NULL);
  _R11 = &v261;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
}

/*
==============
R_DrawSunshadow_DrawCascade
==============
*/
void R_DrawSunshadow_DrawCascade(const GfxViewInfo *viewInfo, GfxDrawListType drawListType, R_RT_DepthHandle *depthRt, MaterialTechniqueType techniqueOverride, GfxDrawCallOutput *drawOutput)
{
  __int64 v7; 
  const char *DrawListTypeName; 
  const GfxBackEndData *data; 
  int v18; 
  unsigned int *p_iteratorCount; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext ctx; 
  R_RT_Handle v31; 
  __int64 v32; 
  R_RT_DepthHandle v33; 
  GfxViewport viewport; 
  GfxDrawList drawList; 
  GfxDrawListIter drawListIter; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v38; 

  v32 = -2i64;
  _RBX = depthRt;
  v7 = drawListType;
  _R13 = viewInfo;
  Profile_Begin(91);
  DrawListTypeName = R_GetDrawListTypeName((GfxDrawListType)v7);
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, DrawListTypeName);
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v38);
  *(_QWORD *)&viewport.x = 0i64;
  viewport.width = R_RT_Handle::GetSurface(_RBX)->m_image.m_base.width;
  viewport.height = R_RT_Handle::GetSurface(_RBX)->m_image.m_base.height;
  _RAX = 152 * v7;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+r13+3D88h]
    vmovups ymmword ptr [rbp+5350h+drawList.bspSurfList.count], ymm0
    vmovups ymm1, ymmword ptr [rax+r13+3DA8h]
    vmovups ymmword ptr [rbp+5350h+drawList.smodelSurfList.visData], ymm1
    vmovups ymm0, ymmword ptr [rax+r13+3DC8h]
    vmovups ymmword ptr [rbp+5350h+drawList.smodelSurfList.surfDataBytes+30h], ymm0
    vmovups ymm1, ymmword ptr [rax+r13+3DE8h]
    vmovups ymmword ptr [rbp+5350h+drawList.drawSurfList.count], ymm1
    vmovups xmm0, xmmword ptr [rax+r13+3E08h]
    vmovups xmmword ptr [rbp+5350h+drawList.codeSurfList.count], xmm0
    vmovsd  xmm1, qword ptr [rax+r13+3E18h]
    vmovsd  qword ptr [rbp+5350h+drawList.superTerrainSurfList.count], xmm1
  }
  data = _R13->input.data;
  v18 = 0;
  if ( (_DWORD)v7 != 28 )
    v18 = v7 - 24;
  p_iteratorCount = &data->drawListIter[v7].iteratorCount;
  *p_iteratorCount = 1;
  if ( R_DrawListStart(&state, &v38, _R13, &data->sunShadow.partition[v18].viewParms, NULL, drawOutput) )
  {
    *p_iteratorCount = 0;
    ctx.source = &v38;
    ctx.state = &state;
    v38.viewStatsTarget = GFX_VIEW_STATS_SHADOW_SUN;
    R_GP_SetScenePassIndex(&v38, _R13->input.data, 1u);
    R_SetPersistentTables(&ctx, data, PERSISTENT_TABLE_SCENE);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups [rsp+5450h+var_53E0], ymm0
      vmovups xmm1, xmmword ptr [rsp+5450h+ctx.source]
      vmovdqa xmmword ptr [rsp+5450h+var_5410.m_surfaceID], xmm1
    }
    R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v31, &v33, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(129)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+5450h+var_5410.m_surfaceID], ymm0
    }
    height = R_RT_Handle::GetSurface(&v31)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v31);
    R_SetRenderTargetSize(&v38, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    R_SetViewportStruct(&v38, &viewport);
    R_SetViewportAndScissorSeparate(ctx.state, &viewport, &viewport);
    R_Set3D(ctx.source);
    R_UpdateViewport(ctx.source, &viewport);
    if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCascadeBegin, "r_resummarizeSunCascadeBegin") )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5450h+ctx.source]
        vmovdqa xmmword ptr [rsp+5450h+var_5410.m_surfaceID], xmm0
      }
      R_ResummarizeDepth((GfxCmdBufContext *)&v31);
    }
    R_DrawListIter_Init(&drawList, &drawListIter);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+5450h+ctx.source]
      vmovdqa xmmword ptr [rsp+5450h+var_5410.m_surfaceID], xmm0
    }
    R_DrawSurfs_Unsorted((GfxCmdBufContext *)&v31, &drawListIter, techniqueOverride, (GfxDrawListType)v7);
    *p_iteratorCount = drawListIter.iteratorCount;
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resummarizeSunCascadeEnd, "r_resummarizeSunCascadeEnd") )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5450h+ctx.source]
        vmovdqa xmmword ptr [rsp+5450h+var_5410.m_surfaceID], xmm0
      }
      R_ResummarizeDepth((GfxCmdBufContext *)&v31);
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCascade, "r_resolveSunCascade") && (_DWORD)v7 != 24 || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_resolveSunCascadeViewmodel, "r_resolveSunCascadeViewmodel") && (_DWORD)v7 == 24 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+5450h+ctx.source]
        vmovdqa xmmword ptr [rsp+5450h+var_5410.m_surfaceID], xmm0
      }
      R_ResolveDepth((GfxCmdBufContext *)&v31);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+5450h+ctx.source]
      vmovdqa xmmword ptr [rsp+5450h+var_5410.m_surfaceID], xmm0
    }
    R_DrawListEnd((GfxCmdBufContext *)&v31, drawOutput);
  }
  Sys_ProfEndNamedEvent();
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v38);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawSunshadow_DrawTranslucent
==============
*/
void R_DrawSunshadow_DrawTranslucent(const GfxViewInfo *viewInfo, const GfxDrawList *drawList, const R_RT_Group *rtGroup, GfxDrawCallOutput *drawOutput)
{
  const char *DrawListTypeName; 
  __int16 v9; 
  unsigned __int16 v10; 
  const char *v14; 
  const char *v15; 
  int v16; 
  R_RT_Image *blackImage; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle *AnyRt; 
  unsigned int v25; 
  R_RT_Handle *v26; 
  const R_RT_Surface *v27; 
  GfxCmdBufContext ctx; 
  R_RT_Handle result; 
  R_RT_Handle v32; 
  __int64 v33; 
  GfxCmdBufStateLocal state; 
  GfxCmdBufSourceStateLocal v35; 

  v33 = -2i64;
  _R14 = (R_RT_Group *)rtGroup;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 752, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !drawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 753, ASSERT_TYPE_ASSERT, "(drawList)", (const char *)&queryFormat, "drawList") )
    __debugbreak();
  if ( !drawOutput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp", 754, ASSERT_TYPE_ASSERT, "(drawOutput)", (const char *)&queryFormat, "drawOutput") )
    __debugbreak();
  Profile_Begin(93);
  DrawListTypeName = R_GetDrawListTypeName(DRAWLIST_SUNSHADOW_END);
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, DrawListTypeName);
  GfxCmdBufStateLocal::GfxCmdBufStateLocal(&state);
  GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(&v35);
  if ( R_DrawListStart(&state, &v35, viewInfo, &viewInfo->input.data->sunShadow.partition[3].viewParms, NULL, drawOutput) )
  {
    ctx.source = &v35;
    ctx.state = &state;
    v35.viewStatsTarget = GFX_VIEW_STATS_SHADOW_SUN_TRANS;
    R_GP_SetScenePassIndex(&v35, viewInfo->input.data, 1u);
    R_SetPersistentTables(&ctx, viewInfo->input.data, PERSISTENT_TABLE_SCENE);
    if ( !R_RT_Handle::IsValid(&_R14->m_depthRt) )
    {
      blackImage = (R_RT_Image *)rgp.blackImage;
      goto LABEL_24;
    }
    v9 = _R14->m_depthRt.m_surfaceID & 0x7FFF;
    if ( v9 )
      v10 = v9 | 0x8000;
    else
      v10 = 0;
    result.m_surfaceID = v10;
    __asm
    {
      vmovups xmm0, xmmword ptr [r14+90h]
      vmovups xmmword ptr [rsp+50E0h+result.m_tracking.m_allocCounter], xmm0
      vmovsd  xmm1, qword ptr [r14+0A0h]
      vmovsd  [rsp+50E0h+result.m_tracking.m_location], xmm1
      vmovups ymm0, ymmword ptr [rsp+50E0h+result.m_surfaceID]
      vmovups ymmword ptr [rsp+50E0h+var_5080.m_surfaceID], ymm0
    }
    if ( v10 )
    {
      R_RT_Handle::GetSurface(&v32);
      if ( (R_RT_Handle::GetSurface(&v32)->m_rtFlagsInternal & 0x10) == 0 )
      {
        v14 = "!unionHandle.IsValid() || unionHandle.IsDepth()";
        v15 = "(!unionHandle.IsValid() || unionHandle.IsDepth())";
        v16 = 277;
LABEL_20:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v16, ASSERT_TYPE_ASSERT, v15, (const char *)&queryFormat, v14) )
          __debugbreak();
      }
    }
    else if ( result.m_tracking.m_allocCounter )
    {
      v14 = "!this->m_tracking.m_allocCounter";
      v15 = "(!this->m_tracking.m_allocCounter)";
      v16 = 100;
      goto LABEL_20;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+50E0h+var_5080.m_surfaceID]
      vmovups ymmword ptr [rsp+50E0h+var_5080.m_surfaceID], ymm0
    }
    blackImage = &R_RT_Handle::GetSurface(&v32)->m_image;
LABEL_24:
    v35.input.codeImages[0] = &blackImage->m_base;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+50E0h+ctx.source]
      vmovdqa xmmword ptr [rsp+50E0h+result.m_surfaceID], xmm0
    }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&result, _R14, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_sunshadow.cpp(785)");
    _RAX = R_RT_Group::GetAnyRt(_R14, &result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+50E0h+var_5080.m_surfaceID], ymm0
    }
    height = R_RT_Handle::GetSurface(&v32)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v32);
    R_SetRenderTargetSize(&v35, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    AnyRt = R_RT_Group::GetAnyRt(_R14, &v32);
    v25 = R_RT_Handle::GetSurface(AnyRt)->m_image.m_base.height;
    v26 = R_RT_Group::GetAnyRt(_R14, &result);
    v27 = R_RT_Handle::GetSurface(v26);
    R_SetViewportValues(&v35, 0, 0, v27->m_image.m_base.width, v25);
    if ( ctx.state->depthRangeType != GFX_DEPTH_RANGE_FULL )
      R_ChangeDepthRange(ctx.state, GFX_DEPTH_RANGE_FULL);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+50E0h+ctx.source]
      vmovdqa xmmword ptr [rsp+50E0h+result.m_surfaceID], xmm0
    }
    R_DrawSurfs_Unsorted((GfxCmdBufContext *)&result, &viewInfo->input.data->drawListIter[27], TECHNIQUE_BUILD_TRANS_SHADOWMAP, DRAWLIST_SUNSHADOW_END);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+50E0h+ctx.source]
      vmovdqa xmmword ptr [rsp+50E0h+result.m_surfaceID], xmm0
    }
    R_DrawListEnd((GfxCmdBufContext *)&result, drawOutput);
  }
  Sys_ProfEndNamedEvent();
  GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(&v35);
  GfxCmdBufStateLocal::~GfxCmdBufStateLocal(&state);
  Profile_EndInternal(NULL);
}

