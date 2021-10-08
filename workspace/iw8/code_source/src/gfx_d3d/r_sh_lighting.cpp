/*
==============
R_GetActiveLightGridsList
==============
*/

const GfxGpuLightGrid **__fastcall R_GetActiveLightGridsList(const GfxBackEndData *data)
{
  return ?R_GetActiveLightGridsList@@YAPEAPEBUGfxGpuLightGrid@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_GpuLightGrid_ShutdownBuffers
==============
*/

void __fastcall R_GpuLightGrid_ShutdownBuffers(GfxGpuLightGrid *lg)
{
  ?R_GpuLightGrid_ShutdownBuffers@@YAXPEAUGfxGpuLightGrid@@@Z(lg);
}

/*
==============
R_GpuLightGrid_DebugDrawVolume
==============
*/

void __fastcall R_GpuLightGrid_DebugDrawVolume(GfxCmdBufContext *context, const GfxGpuLightGrid *lightGrid, vec4_t *color)
{
  ?R_GpuLightGrid_DebugDrawVolume@@YAXUGfxCmdBufContext@@PEBUGfxGpuLightGrid@@Tvec4_t@@@Z(context, lightGrid, color);
}

/*
==============
R_ShutdownWorldSHLighting
==============
*/

void __fastcall R_ShutdownWorldSHLighting(GfxWorld *world)
{
  ?R_ShutdownWorldSHLighting@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_GpuLightGrid_DataAvailable
==============
*/

bool __fastcall R_GpuLightGrid_DataAvailable(const GfxWorld *world)
{
  return ?R_GpuLightGrid_DataAvailable@@YA_NPEBUGfxWorld@@@Z(world);
}

/*
==============
R_ToggleSHLightingFrame
==============
*/

unsigned int __fastcall R_ToggleSHLightingFrame(unsigned int smpFrame)
{
  return ?R_ToggleSHLightingFrame@@YAII@Z(smpFrame);
}

/*
==============
R_InitSHLighting
==============
*/

void R_InitSHLighting(void)
{
  ?R_InitSHLighting@@YAXXZ();
}

/*
==============
R_GetActiveLightGrids
==============
*/

const GfxWrappedBuffer *__fastcall R_GetActiveLightGrids(const GfxBackEndData *data)
{
  return ?R_GetActiveLightGrids@@YAPEBUGfxWrappedBuffer@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_GpuLightGrid_DrawDebugSpheres
==============
*/

void __fastcall R_GpuLightGrid_DrawDebugSpheres(GfxCmdBufContext *context, unsigned int numSpheresToRender)
{
  ?R_GpuLightGrid_DrawDebugSpheres@@YAXUGfxCmdBufContext@@I@Z(context, numSpheresToRender);
}

/*
==============
RB_GpuLightGrid_DataAvailable
==============
*/

bool __fastcall RB_GpuLightGrid_DataAvailable(const GfxViewInfo *viewInfo)
{
  return ?RB_GpuLightGrid_DataAvailable@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_UpdateFallbackProbeData
==============
*/

void __fastcall RB_UpdateFallbackProbeData(GfxCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?RB_UpdateFallbackProbeData@@YAXPEAUGfxCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(state, data, viewInfo);
}

/*
==============
R_GpuLightGrid_SetupFrame
==============
*/

void __fastcall R_GpuLightGrid_SetupFrame(GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?R_GpuLightGrid_SetupFrame@@YAXPEAUGfxBackEndData@@PEBUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
Bounds_IntersectGpuLightGrid
==============
*/

bool __fastcall Bounds_IntersectGpuLightGrid(const Bounds *bounds, const GfxGpuLightGrid *lightGrid)
{
  return ?Bounds_IntersectGpuLightGrid@@YA_NAEBUBounds@@PEBUGfxGpuLightGrid@@@Z(bounds, lightGrid);
}

/*
==============
RB_GpuLightGrid_Update
==============
*/

void __fastcall RB_GpuLightGrid_Update(GfxCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_GpuLightGrid_Update@@YAXPEAUGfxCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(state, viewInfo, data);
}

/*
==============
R_GpuLightGrid_SetResources
==============
*/

void __fastcall R_GpuLightGrid_SetResources(GfxCmdBufInput *input, const GfxGpuLightGrid *gpuLightGrid, unsigned int frameIndex)
{
  ?R_GpuLightGrid_SetResources@@YAXPEAUGfxCmdBufInput@@PEBUGfxGpuLightGrid@@I@Z(input, gpuLightGrid, frameIndex);
}

/*
==============
R_GetFallbackProbe
==============
*/

const GfxWrappedBuffer *__fastcall R_GetFallbackProbe()
{
  return ?R_GetFallbackProbe@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
R_GpuLightGrid_DrawDebug
==============
*/

void __fastcall R_GpuLightGrid_DrawDebug(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxGpuLightGrid *gpuLightGrid, int lightGridDebug, float sphereScale, GfxWrappedBuffer *lightGridSampleRequests, const GfxWrappedRWBuffer *probesBuffer, int numSpheresToRender, int numTriPatchesToRender, int sphereIndexShift)
{
  ?R_GpuLightGrid_DrawDebug@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxGpuLightGrid@@HMPEAUGfxWrappedBuffer@@PEBUGfxWrappedRWBuffer@@HHH@Z(context, viewInfo, gpuLightGrid, lightGridDebug, sphereScale, lightGridSampleRequests, probesBuffer, numSpheresToRender, numTriPatchesToRender, sphereIndexShift);
}

/*
==============
R_GpuLightGrid_GetBoundingPlane
==============
*/

vec4_t *__fastcall R_GpuLightGrid_GetBoundingPlane(vec4_t *result, const GfxGpuLightGrid *lightGrid, int axisIndex, bool positive)
{
  return ?R_GpuLightGrid_GetBoundingPlane@@YA?ATvec4_t@@PEBUGfxGpuLightGrid@@H_N@Z(result, lightGrid, axisIndex, positive);
}

/*
==============
R_GetLightGridMemory
==============
*/

int __fastcall R_GetLightGridMemory(const GfxGpuLightGrid *gpuLightGrid)
{
  return ?R_GetLightGridMemory@@YAHPEBUGfxGpuLightGrid@@@Z(gpuLightGrid);
}

/*
==============
R_GetNumActiveLightGrids
==============
*/

int __fastcall R_GetNumActiveLightGrids(const GfxBackEndData *data)
{
  return ?R_GetNumActiveLightGrids@@YAHPEBUGfxBackEndData@@@Z(data);
}

/*
==============
RB_GpuLightGrid_DebugDrawVolumes
==============
*/

void __fastcall RB_GpuLightGrid_DebugDrawVolumes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?RB_GpuLightGrid_DebugDrawVolumes@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
R_GpuLightGrid_DataAvailable
==============
*/

bool __fastcall R_GpuLightGrid_DataAvailable()
{
  return ?R_GpuLightGrid_DataAvailable@@YA_NXZ();
}

/*
==============
R_GetPrevFrameLightGridIndices
==============
*/

const GfxWrappedBuffer *__fastcall R_GetPrevFrameLightGridIndices(const GfxBackEndData *data)
{
  return ?R_GetPrevFrameLightGridIndices@@YAPEBUGfxWrappedBuffer@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_GpuLightGrid_Init
==============
*/

void R_GpuLightGrid_Init(void)
{
  ?R_GpuLightGrid_Init@@YAXXZ();
}

/*
==============
R_GpuLightGrid_DebugDrawEnabled
==============
*/

bool __fastcall R_GpuLightGrid_DebugDrawEnabled()
{
  return ?R_GpuLightGrid_DebugDrawEnabled@@YA_NXZ();
}

/*
==============
R_GpuLightGrid_DebugDrawVolumes
==============
*/

void __fastcall R_GpuLightGrid_DebugDrawVolumes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?R_GpuLightGrid_DebugDrawVolumes@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
RB_GpuLightGrid_SetResouces
==============
*/

void __fastcall RB_GpuLightGrid_SetResouces(ComputeCmdBufState *computeState, const GfxCmdBufInput *input, const GfxGpuLightGrid *gpuLightGrid)
{
  ?RB_GpuLightGrid_SetResouces@@YAXPEAUComputeCmdBufState@@PEBUGfxCmdBufInput@@PEBUGfxGpuLightGrid@@@Z(computeState, input, gpuLightGrid);
}

/*
==============
R_DirtyFallbackProbe
==============
*/

void R_DirtyFallbackProbe(void)
{
  ?R_DirtyFallbackProbe@@YAXXZ();
}

/*
==============
R_GetPrevFrameLightGridIndicesList
==============
*/

const unsigned int *__fastcall R_GetPrevFrameLightGridIndicesList(const GfxBackEndData *data)
{
  return ?R_GetPrevFrameLightGridIndicesList@@YAPEBIPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_InitWorldSHLighting
==============
*/

void __fastcall R_InitWorldSHLighting(GfxWorld *world)
{
  ?R_InitWorldSHLighting@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
Bounds_IntersectGpuLightGrid
==============
*/
bool Bounds_IntersectGpuLightGrid(const Bounds *bounds, const GfxGpuLightGrid *lightGrid)
{
  __int64 v16; 
  bool v18; 
  bool v19; 
  bool result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rcx+8]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+10h]
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  v16 = 0i64;
  __asm
  {
    vmovss  xmm12, dword ptr [rcx+0Ch]
    vmovaps [rsp+0A8h+var_88], xmm13
  }
  v18 = __CFADD__(lightGrid, 328i64);
  v19 = __CFADD__(lightGrid, 328i64) || lightGrid->boundingVolume == NULL;
  _RDX = lightGrid->boundingVolume;
  __asm
  {
    vmovss  xmm13, dword ptr [rcx+14h]
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovss  xmm14, cs:__real@3f800000
  }
  while ( 1 )
  {
    __asm
    {
      vmovups xmm6, xmmword ptr [rdx]
      vshufps xmm5, xmm6, xmm6, 55h ; 'U'
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm1, xmm1, xmm0
      vsubss  xmm1, xmm14, xmm1
      vmulss  xmm2, xmm8, xmm5
      vmulss  xmm0, xmm9, xmm6
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm11, xmm5
      vsqrtss xmm4, xmm1, xmm1
      vmulss  xmm1, xmm4, xmm10
      vaddss  xmm7, xmm3, xmm1
      vmulss  xmm2, xmm12, xmm6
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm4, xmm13
      vaddss  xmm5, xmm3, xmm1
      vmovups [rsp+0A8h+var_A8], xmm6
      vaddss  xmm0, xmm5, xmm7
      vshufps xmm6, xmm6, xmm6, 0AAh ; 'ª'
      vcomiss xmm0, xmm6
    }
    if ( v19 )
      break;
    __asm
    {
      vsubss  xmm0, xmm7, xmm5
      vcomiss xmm0, dword ptr [rsp+0A8h+var_A8+0Ch]
    }
    if ( !v18 )
      break;
    ++v16;
    ++_RDX;
    v18 = (unsigned __int64)v16 < 7;
    v19 = (unsigned __int64)v16 <= 7;
    if ( v16 >= 7 )
    {
      result = 1;
      goto LABEL_7;
    }
  }
  result = 0;
LABEL_7:
  __asm { vmovaps xmm13, [rsp+0A8h+var_88] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, [rsp+0A8h+var_98]
  }
  return result;
}

/*
==============
RB_GpuLightGrid_DataAvailable
==============
*/
bool RB_GpuLightGrid_DataAvailable(const GfxViewInfo *viewInfo)
{
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp", 203, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  return (signed int)shLightingGlob.frameData[viewInfo->input.data->shLightingIndex].numActiveLightGrids > 0;
}

/*
==============
RB_GpuLightGrid_DebugDrawVolumes
==============
*/
void RB_GpuLightGrid_DebugDrawVolumes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *v32; 
  unsigned int ActiveLightGridsMask; 
  __int64 shLightingIndex; 
  __int64 numActiveLightGrids; 
  SHLightingFrameData *v37; 
  __int64 v38; 
  int v39; 
  const GfxGpuLightGrid *v41; 
  R_RT_Handle result_8; 
  GfxCmdBufState *v48; 
  _QWORD v49[5]; 
  __m256i v51; 
  char v52; 
  const char *v55; 
  R_RT_Group v56; 
  void *retaddr; 

  _R11 = &retaddr;
  _RDI = viewInfo;
  _R14 = context;
  if ( r_lightGridDrawDebugVolumes->current.enabled )
  {
    state = context->state;
    source = context->source;
    v48 = state;
    __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
    v49[0] = source;
    R_InitCmdBufSourceState(source, &viewInfo->input);
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(state->device);
      R_InitCmdBufState(state);
    }
    else
    {
      R_LockGfxImmediateContext();
      _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&result_8);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rdx, xmm0, 1; in
      }
      if ( state != _RDX )
        GfxCmdBufState::Copy(state, _RDX);
    }
    memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
    memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
    memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
    state->data = source->input.data;
    R_BeginViewInternal(source, &_RDI->sceneDef, (const GfxViewParms *)_RDI, &_RDI->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &_RDI->sceneViewport);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+30C0h]
      vmovups ymmword ptr [rsp+2B0h+result.state], ymm0
    }
    height = R_RT_Handle::GetSurface(&result_8)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&result_8);
    R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+31A0h]
      vmovups ymm1, ymmword ptr [rdi+30C0h]
      vmovups xmm6, xmmword ptr [r14]
      vmovd   eax, xmm0
      vmovups [rbp+1B0h+var_230], ymm0
      vmovups ymmword ptr [rsp+2B0h+result.state], ymm0
      vmovups ymmword ptr [rsp+2B0h+var_258+8], ymm1
      vmovups [rbp+1B0h+var_210], ymm1
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&result_8);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+2B0h+result.state]
        vmovups [rbp+1B0h+var_230], ymm0
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+2B0h+var_258+8]
      vmovd   eax, xmm0
    }
    v52 = 1;
    __asm { vmovups ymmword ptr [rsp+2B0h+result.state], ymm0 }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&result_8);
    }
    else
    {
      if ( v51.m256i_i32[2] != (unsigned __int16)_EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&result_8.m_surfaceID, *(_QWORD *)&result_8.m_tracking.m_allocCounter, result_8.m_tracking.m_name, result_8.m_tracking.m_location) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+2B0h+var_258+8]
      vmovups [rbp+1B0h+var_1E8], ymm0
      vmovups ymm0, [rbp+1B0h+var_230]
      vmovups [rbp+1B0h+var_168], ymm0
    }
    _RCX = &v56;
    _RAX = &v52;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymm0, ymmword ptr [rax+0A0h]
    }
    v32 = v55;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    v56.m_vrsRt.m_tracking.m_location = v32;
    __asm { vmovdqa xmmword ptr [rsp+2B0h+var_258+8], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v49[1], &v56, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp(1249)");
    __asm { vmovaps xmm6, [rsp+2B0h+var_48+8] }
    if ( r_lightGridDrawDebugVolumes->current.enabled )
    {
      ActiveLightGridsMask = R_VOL_GetActiveLightGridsMask(_RDI->input.data);
      shLightingIndex = _RDI->input.data->shLightingIndex;
      numActiveLightGrids = (int)shLightingGlob.frameData[shLightingIndex].numActiveLightGrids;
      v37 = &shLightingGlob.frameData[shLightingIndex];
      if ( numActiveLightGrids > 0 )
      {
        v38 = 0i64;
        v39 = 1;
        do
        {
          __asm { vmovups xmm1, xmmword ptr [r14] }
          v41 = v37->activeLightGrids[v38];
          _RAX = &colorRed;
          if ( (v39 & ActiveLightGridsMask) == 0 )
            _RAX = &colorYellow;
          __asm
          {
            vmovups xmmword ptr [rsp+2B0h+result.state], xmm1
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+2B0h+var_258+8], xmm0
          }
          R_GpuLightGrid_DebugDrawVolume((GfxCmdBufContext *)&result_8, v41, (vec4_t *)&v49[1]);
          v39 = __ROL4__(v39, 1);
          ++v38;
        }
        while ( v38 < numActiveLightGrids );
        state = v48;
      }
    }
    R_ResetRenderTargets(state);
    if ( (*(_BYTE *)(v49[0] + 9712i64) & 1) != 0 )
    {
      R_ShutdownCmdBufState(state);
      R_UnlockIfGfxImmediateContext(state->device);
    }
    else
    {
      _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&result_8);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rcx, xmm0, 1; out
      }
      if ( state != _RCX )
      {
        GfxCmdBufState::Copy(_RCX, state);
        R_FlushImmediateContext();
      }
      R_UnlockGfxImmediateContext();
    }
  }
}

/*
==============
RB_GpuLightGrid_SetResouces
==============
*/
void RB_GpuLightGrid_SetResouces(ComputeCmdBufState *computeState, const GfxCmdBufInput *input, const GfxGpuLightGrid *gpuLightGrid)
{
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  GfxGpuLightGridVoxelTree *v7; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v9; 
  GfxShaderBufferView *v10; 
  GfxShaderBufferView *views; 

  if ( !gpuLightGrid )
    return;
  views = &gpuLightGrid->probesBuffer.view;
  R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->probePositionsBuffer.view;
  R_SetComputeViews(computeState, 1, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->tetrahedronBuffer.view;
  R_SetComputeViews(computeState, 2, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->tetrahedronNeighborsBuffer.view;
  R_SetComputeViews(computeState, 3, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->tetrahedronVisibilityBuffer.view;
  R_SetComputeViews(computeState, 8, 1, (const GfxShaderBufferView *const *)&views);
  zoneVoxelTrees = gpuLightGrid->zoneVoxelTrees;
  if ( !zoneVoxelTrees )
  {
    v7 = NULL;
    goto LABEL_6;
  }
  v7 = &zoneVoxelTrees[(unsigned __int64)input->voxelTreeZoneIndex];
  if ( !v7 )
  {
LABEL_6:
    p_view = &deviceGlobals.voxelTreeHeaderStructuredBuffer[0].view + 2 * input->voxelTreeZoneIndex;
    goto LABEL_7;
  }
  p_view = &v7->treeHeaderBuffer.view;
LABEL_7:
  views = p_view;
  R_SetComputeViews(computeState, 4, 1, (const GfxShaderBufferView *const *)&views);
  if ( v7 )
    v9 = &v7->topDownViewNodeBuffer.view;
  else
    v9 = &deviceGlobals.voxelTopDownViewNodeStructuredBuffer[0].view + 2 * input->voxelTreeZoneIndex;
  views = v9;
  R_SetComputeViews(computeState, 5, 1, (const GfxShaderBufferView *const *)&views);
  if ( v7 )
    v10 = &v7->internalNodeBuffer.view;
  else
    v10 = &deviceGlobals.voxelInternalNodeStructuredBuffer[0].view + 2 * input->voxelTreeZoneIndex;
  views = v10;
  R_SetComputeViews(computeState, 6, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->voxelStartTetrahedronBuffer.view;
  R_SetComputeViews(computeState, 7, 1, (const GfxShaderBufferView *const *)&views);
}

/*
==============
RB_GpuLightGrid_Update
==============
*/
void RB_GpuLightGrid_Update(GfxCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __int64 shLightingIndex; 
  __int64 v4; 
  SHLightingFrameData *v6; 
  __int64 numActiveLightGrids; 
  __int64 v8; 
  __int64 v9; 

  shLightingIndex = (int)data->shLightingIndex;
  v4 = shLightingIndex;
  _RDI = (char *)shLightingGlob.gfxBuffers[shLightingIndex].lightGrids.data;
  v6 = &shLightingGlob.frameData[shLightingIndex];
  numActiveLightGrids = (int)shLightingGlob.frameData[shLightingIndex].numActiveLightGrids;
  v8 = numActiveLightGrids;
  if ( (int)numActiveLightGrids > 0 )
  {
    v9 = 0i64;
    do
    {
      if ( !v6->activeLightGrids[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp", 726, ASSERT_TYPE_ASSERT, "(frameData.activeLightGrids[i])", (const char *)&queryFormat, "frameData.activeLightGrids[i]") )
        __debugbreak();
      _RAX = v6->activeLightGrids[v9++];
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+148h]
        vmovups ymmword ptr [rdi], ymm0
        vmovups ymm1, ymmword ptr [rax+168h]
        vmovups ymmword ptr [rdi+20h], ymm1
        vmovups ymm0, ymmword ptr [rax+188h]
        vmovups ymmword ptr [rdi+40h], ymm0
        vmovups xmm1, xmmword ptr [rax+1A8h]
        vmovups xmmword ptr [rdi+60h], xmm1
      }
      _RDI += 112;
    }
    while ( v9 < v8 );
    LODWORD(numActiveLightGrids) = v6->numActiveLightGrids;
  }
  memcpy_0(shLightingGlob.gfxBuffers[v4].prevFrameLightGridIndices.data, v6->prevFrameLightGridIndex, 4i64 * (unsigned int)numActiveLightGrids);
}

/*
==============
RB_UpdateFallbackProbeData
==============
*/
void RB_UpdateFallbackProbeData(GfxCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  __int64 shLightingIndex; 
  unsigned int voxelTreeZoneIndex; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  bool enabled; 
  int v16; 
  GfxShaderBufferRWView *views; 
  int dataa[8]; 
  __m256i v28; 
  _BYTE v29[32]; 

  Sys_ProfBeginNamedEvent(0xFF800000, "RB_UpdateFallbackProbeData");
  shLightingIndex = data->shLightingIndex;
  if ( (int)shLightingGlob.frameData[shLightingIndex].numActiveLightGrids > 0 )
  {
    _RDI = shLightingGlob.frameData[shLightingIndex].activeLightGrids[0];
    if ( _RDI->probeCount )
    {
      voxelTreeZoneIndex = viewInfo->input.voxelTreeZoneIndex;
      if ( shLightingGlob.fallbackProbeDirty || shLightingGlob.fallbackProbeZoneIndex != voxelTreeZoneIndex )
      {
        __asm
        {
          vmovaps [rsp+118h+var_48], xmm6
          vmovaps [rsp+118h+var_58], xmm7
          vmovaps [rsp+118h+var_68], xmm8
        }
        GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
        R_LockIfGfxImmediateContext(GfxComputeCmdBufState->device);
        R_ProfBeginNamedEvent(GfxComputeCmdBufState, "Update Fallback Probe");
        _RBX = &_RDI->zones[viewInfo->input.voxelTreeZoneIndex];
        enabled = r_fallbackProbeDebug->current.enabled;
        if ( !enabled && (_RDI->fallbackProbeUseCustomSample || r_fallbackProbeUseCustomSample->current.enabled) )
        {
          if ( r_fallbackProbeUseCustomSample->current.enabled )
          {
            _RAX = r_fallbackProbeSamplePos;
            v16 = 1;
            __asm
            {
              vmovss  xmm6, dword ptr [rax+28h]
              vmovss  xmm7, dword ptr [rax+2Ch]
              vmovss  xmm8, dword ptr [rax+30h]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm6, dword ptr [rdi+74h]
              vmovss  xmm7, dword ptr [rdi+78h]
              vmovss  xmm8, dword ptr [rdi+7Ch]
            }
            v16 = 1;
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm6, cs:__real@48000000
            vmovaps xmm7, xmm6
            vmovaps xmm8, xmm6
          }
          v16 = 0;
        }
        R_SetComputeShader(GfxComputeCmdBufState, rgp.sampleFallbackProbe);
        __asm
        {
          vmovss  [rsp+118h+data], xmm6
          vmovaps xmm6, [rsp+118h+var_48]
          vmovss  [rsp+118h+var_D4], xmm7
          vmovaps xmm7, [rsp+118h+var_58]
          vmovss  [rsp+118h+var_D0], xmm8
          vmovaps xmm8, [rsp+118h+var_68]
        }
        if ( _RBX )
        {
          dataa[4] = _RBX->firstTetrahedron;
          dataa[5] = _RBX->firstVoxelTetrahedronIndex;
          dataa[6] = _RBX->voxelTetrahedronInternalNodeShift;
        }
        dataa[7] = v16;
        if ( enabled )
        {
          __asm { vmovss  xmm0, cs:__real@41200000; f }
          *(_OWORD *)&v28.m256i_u64[2] = 0ui64;
          memset(v29, 0, sizeof(v29));
          *(_OWORD *)v28.m256i_i8 = HalfFromFloat(*(float *)&_XMM0);
        }
        else
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx+1Ch]
            vmovups [rsp+118h+var_B8], ymm0
            vmovups ymm1, ymmword ptr [rbx+3Ch]
            vmovups [rsp+118h+var_98], ymm1
          }
        }
        R_UploadAndSetComputeConstants(GfxComputeCmdBufState, 0, dataa, 0x60u, NULL);
        views = &shLightingGlob.fallbackProbe.rwView;
        R_SetComputeRWViewsWithCounters(GfxComputeCmdBufState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
        RB_GpuLightGrid_SetResouces(GfxComputeCmdBufState, &viewInfo->input, _RDI);
        R_Dispatch(GfxComputeCmdBufState, 1u, 1u, 1u);
        R_ProfEndNamedEvent(GfxComputeCmdBufState);
        R_UnlockIfGfxImmediateContext(GfxComputeCmdBufState->device);
        shLightingGlob.fallbackProbeDirty = 0;
        shLightingGlob.fallbackProbeZoneIndex = voxelTreeZoneIndex;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
R_DirtyFallbackProbe
==============
*/
void R_DirtyFallbackProbe(void)
{
  shLightingGlob.fallbackProbeDirty = 1;
}

/*
==============
R_GetActiveLightGrids
==============
*/
SHLightingGlobGfxBuffers *R_GetActiveLightGrids(const GfxBackEndData *data)
{
  return &shLightingGlob.gfxBuffers[data->shLightingIndex];
}

/*
==============
R_GetActiveLightGridsList
==============
*/
const GfxGpuLightGrid **R_GetActiveLightGridsList(const GfxBackEndData *data)
{
  return (const GfxGpuLightGrid **)&shLightingGlob.frameData[data->shLightingIndex];
}

/*
==============
R_GetFallbackProbe
==============
*/
GfxWrappedRWBuffer *R_GetFallbackProbe()
{
  return &shLightingGlob.fallbackProbe;
}

/*
==============
R_GetLightGridMemory
==============
*/
__int64 R_GetLightGridMemory(const GfxGpuLightGrid *gpuLightGrid)
{
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  unsigned int v2; 
  int v3; 
  __int64 v4; 
  __int64 zoneCount; 
  int v6; 
  GfxGpuLightGridVoxelTree *v7; 
  unsigned __int64 v8; 
  int topDownViewNodeCount; 
  int internalNodeCount; 

  zoneVoxelTrees = gpuLightGrid->zoneVoxelTrees;
  v2 = 4 * (gpuLightGrid->voxelStartTetrahedronCount + 3 * gpuLightGrid->probeCount + 8 * (gpuLightGrid->probeCount + gpuLightGrid->tetrahedronCount + 2 * gpuLightGrid->tetrahedronCountVisible));
  if ( !zoneVoxelTrees )
    return v2;
  v3 = 0;
  v4 = 0i64;
  zoneCount = (int)gpuLightGrid->zoneCount;
  v6 = 0;
  if ( zoneCount >= 2 )
  {
    v7 = gpuLightGrid->zoneVoxelTrees;
    v8 = ((unsigned __int64)(zoneCount - 2) >> 1) + 1;
    v4 = 2 * v8;
    do
    {
      topDownViewNodeCount = v7->topDownViewNodeCount;
      internalNodeCount = v7->internalNodeCount;
      v7 += 2;
      v3 += 16 * internalNodeCount + 12 * topDownViewNodeCount;
      v6 += 16 * v7[-1].internalNodeCount + 12 * v7[-1].topDownViewNodeCount;
      --v8;
    }
    while ( v8 );
  }
  if ( v4 < zoneCount )
    v2 += 16 * zoneVoxelTrees[v4].internalNodeCount + 12 * zoneVoxelTrees[v4].topDownViewNodeCount;
  return v2 + v3 + v6;
}

/*
==============
R_GetNumActiveLightGrids
==============
*/
__int64 R_GetNumActiveLightGrids(const GfxBackEndData *data)
{
  return shLightingGlob.frameData[data->shLightingIndex].numActiveLightGrids;
}

/*
==============
R_GetPrevFrameLightGridIndices
==============
*/
GfxWrappedBuffer *R_GetPrevFrameLightGridIndices(const GfxBackEndData *data)
{
  return &shLightingGlob.gfxBuffers[data->shLightingIndex].prevFrameLightGridIndices;
}

/*
==============
R_GetPrevFrameLightGridIndicesList
==============
*/
unsigned int *R_GetPrevFrameLightGridIndicesList(const GfxBackEndData *data)
{
  return shLightingGlob.frameData[data->shLightingIndex].prevFrameLightGridIndex;
}

/*
==============
R_GpuLightGrid_CreateDebugGeometry
==============
*/

void __fastcall R_GpuLightGrid_CreateDebugGeometry(__int64 a1, double _XMM1_8)
{
  char *v8; 
  char *v9; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  _WORD *v18; 
  char *v19; 
  int v23; 
  int v30; 
  __int64 v31; 
  int v32; 
  __int16 v33; 
  int v34; 
  __int16 v35; 
  __int16 v36; 
  __int16 v37; 
  void *v39; 
  void *v40; 
  _WORD *v42; 
  int v45; 
  _WORD *v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  int v57; 
  int v58; 
  __int16 v59; 
  int i; 
  int j; 
  __int64 v62; 
  __int16 v63; 
  int v64; 
  __int64 v65; 
  __int16 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int16 v72; 
  int v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  GfxBufferCreationContext v84[5]; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  R_LockGfxImmediateContext();
  v84[0].objectName = "debugSphere VB";
  v84[0].zoneName = "shLighting";
  __asm
  {
    vmovups xmm0, [rsp+88h+var_68]
    vmovdqa [rsp+88h+var_68], xmm0
  }
  v8 = (char *)R_AllocStaticVertexBuffer(&shLightingGlob.debugLightProbeVerts, 768, v84);
  v84[0].zoneName = "shLighting";
  v9 = v8;
  v84[0].objectName = "debugSphere IB";
  __asm
  {
    vmovups xmm0, [rsp+88h+var_68]
    vmovdqa [rsp+88h+var_68], xmm0
    vmovss  xmm9, cs:__real@3ee5c8fa
    vmovss  xmm8, cs:__real@3f490fdb
  }
  v13 = 0;
  v18 = R_AllocStaticIndexBuffer(&shLightingGlob.debugLightProbeIndices, 672, v84);
  v19 = v9 + 8;
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm0, xmm0, xmm9
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_(v15, v14, v16, v17);
    v23 = 0;
    _RBX = v19;
    v19 += 96;
    __asm { vmovups xmm6, xmm0 }
    do
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edi
        vmulss  xmm0, xmm1, xmm8
      }
      *(double *)&_XMM0 = j___libm_sse2_sincosf_(v15, v14, v16, v17);
      __asm
      {
        vshufps xmm1, xmm0, xmm0, 1
        vmulss  xmm1, xmm1, xmm6
        vmulss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx-8], xmm1
        vmovss  dword ptr [rbx-4], xmm0
        vextractps dword ptr [rbx], xmm6, 1
      }
      _RBX += 12;
      ++v23;
    }
    while ( v23 < 8 );
    ++v13;
  }
  while ( v13 < 8 );
  v30 = 0;
  v31 = 0i64;
  do
  {
    v32 = 0;
    v33 = 8 * v30;
    do
    {
      v34 = v32 + 1;
      v35 = (v32 + 1) % 8;
      v36 = v33 + v32;
      v37 = v33 + 8 + v32;
      v18[v31] = v36;
      v18[v31 + 1] = v33 + v35;
      v18[v31 + 2] = v37;
      v18[v31 + 3] = v33 + v35;
      v18[v31 + 4] = v33 + v35 + 8;
      v18[v31 + 5] = v37;
      v31 += 6i64;
      v32 = v34;
    }
    while ( v34 < 8 );
    ++v30;
  }
  while ( v30 < 7 );
  v84[0].zoneName = "shLighting";
  v84[0].objectName = "debugTriPatch VB";
  __asm
  {
    vmovups xmm0, [rsp+88h+var_68]
    vmovdqa [rsp+88h+var_68], xmm0
  }
  v39 = R_AllocStaticVertexBuffer(&shLightingGlob.debugTriPatchVerts, 180, v84);
  v84[0].zoneName = "shLighting";
  v40 = v39;
  v84[0].objectName = "debugTriPatch IB";
  __asm
  {
    vmovups xmm0, [rsp+88h+var_68]
    vmovdqa [rsp+88h+var_68], xmm0
  }
  v42 = R_AllocStaticIndexBuffer(&shLightingGlob.debugTriPatchIndices, 192, v84);
  __asm
  {
    vmovss  xmm3, cs:__real@3e800000
    vmovss  xmm4, cs:__real@3f800000
  }
  v45 = 0;
  v46 = v42;
  v47 = 0i64;
  do
  {
    v48 = 0;
    v49 = 5 - v45;
    if ( 5 - v45 > 0 )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      _RCX = (__int64)v40 + 12 * v47 + 8;
      __asm { vcvtsi2ss xmm0, xmm0, r10d }
      v47 += (unsigned int)v49;
      __asm { vmulss  xmm2, xmm0, xmm3 }
      do
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r8d
          vmulss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rcx-8], xmm1
          vsubss  xmm0, xmm4, xmm1
          vsubss  xmm1, xmm0, xmm2
        }
        ++v48;
        __asm
        {
          vmovss  dword ptr [rcx], xmm1
          vmovss  dword ptr [rcx-4], xmm2
        }
        _RCX += 12i64;
      }
      while ( v48 < v49 );
    }
    ++v45;
  }
  while ( v45 < 5 );
  v57 = 0;
  v58 = 0;
  v59 = 0;
  for ( i = 4; i > 0; --i )
  {
    for ( j = 0; j < i; ++j )
    {
      v62 = v57;
      v63 = v58 + 1;
      v64 = v57 + 1;
      v46[v62] = v58;
      v65 = v64++;
      v66 = v58 - v59 + 5;
      v46[v65] = v58 + 1;
      v67 = v64++;
      v46[v67] = v66;
      v68 = v64++;
      v46[v68] = v58;
      v69 = v64++;
      v46[v69] = v66;
      v70 = v64;
      v57 = v64 + 1;
      v46[v70] = v58 + 1;
      if ( j != i - 1 )
      {
        v71 = v57;
        v72 = v58 - v59 + 6;
        v73 = v57 + 1;
        v46[v71] = v63;
        v74 = v73++;
        v46[v74] = v72;
        v75 = v73++;
        v46[v75] = v66;
        v76 = v73++;
        v46[v76] = v63;
        v77 = v73++;
        v46[v77] = v66;
        v78 = v73;
        v57 = v73 + 1;
        v46[v78] = v72;
      }
      ++v58;
    }
    ++v58;
    ++v59;
  }
  shLightingGlob.debugLightProbeVertCount = 64;
  shLightingGlob.debugLightProbeVertsStride = 12;
  shLightingGlob.debugLightProbeTriCount = 112;
  shLightingGlob.debugTriPatchVertCount = 15;
  shLightingGlob.debugTriPatchVertsStride = 12;
  shLightingGlob.debugTriPatchTriCount = 32;
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  R_UnlockGfxImmediateContext();
}

/*
==============
R_GpuLightGrid_DataAvailable
==============
*/
bool R_GpuLightGrid_DataAvailable(const GfxWorld *world)
{
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp", 189, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  return world->draw.lightGridType != GFX_LIGHTGRID_TYPE_NONE;
}

/*
==============
R_GpuLightGrid_DataAvailable
==============
*/
bool R_GpuLightGrid_DataAvailable()
{
  return s_world.draw.lightGridType != GFX_LIGHTGRID_TYPE_NONE;
}

/*
==============
R_GpuLightGrid_DebugDrawEnabled
==============
*/
__int64 R_GpuLightGrid_DebugDrawEnabled()
{
  return r_lightGridDrawDebugVolumes->current.color[0];
}

/*
==============
R_GpuLightGrid_DebugDrawVolume
==============
*/
void R_GpuLightGrid_DebugDrawVolume(GfxCmdBufContext *context, const GfxGpuLightGrid *lightGrid, vec4_t *color)
{
  __int64 v16; 
  __int64 v25; 
  int v53; 
  int v61; 
  int *v66; 
  int *v68; 
  int v115; 
  unsigned int v145; 
  int v146; 
  __int64 v147; 
  __int64 v157; 
  int v162; 
  int v163; 
  vec4_t *v164; 
  const vec3_t *v165; 
  __int64 v166; 
  const vec3_t *v167; 
  int v181; 
  int v182; 
  int v183; 
  __int64 v184; 
  char *v185; 
  vec4_t *colora; 
  char *v187; 
  float v189; 
  vec3_t start; 
  float v195; 
  char v202; 
  char v203[224]; 
  char v204; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm11, cs:__real@3f800000
  }
  v16 = 7i64;
  colora = color;
  _RCX = v203;
  _RDX = &lightGrid->boundingVolume[0].v[2];
  _ER10 = 1;
  do
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rdx-8]
      vmovss  xmm8, dword ptr [rdx-4]
    }
    _EAX = 0;
    __asm
    {
      vxorps  xmm9, xmm7, xmm13
      vxorps  xmm10, xmm8, xmm13
    }
    v25 = 2i64;
    do
    {
      __asm
      {
        vmovd   xmm1, r10d
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm5, xmm7, xmm9, xmm2
        vmovd   xmm1, r10d
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm6, xmm8, xmm10, xmm2
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm1, xmm11, xmm1
        vsqrtss xmm4, xmm1, xmm1
        vmovd   xmm1, r10d
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vxorps  xmm3, xmm4, xmm13
        vblendvps xmm1, xmm4, xmm3, xmm2
        vmovss  [rsp+860h+var_830], xmm6
        vmovss  [rsp+860h+var_830], xmm5
        vmovss  [rsp+860h+var_830], xmm1
      }
      if ( _EAX == 1 )
      {
        __asm { vmovss  xmm1, dword ptr [rdx] }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+4]
          vxorps  xmm1, xmm0, xmm13
        }
      }
      __asm
      {
        vinsertps xmm5, xmm5, xmm6, 10h
        vinsertps xmm5, xmm5, [rsp+860h+var_830], 20h
        vinsertps xmm5, xmm5, xmm1, 30h ; '0'
        vmovups xmmword ptr [rcx], xmm5
      }
      _RCX += 16;
      ++_EAX;
      __asm { vmovups [rsp+860h+var_7F8+8], xmm5 }
      --v25;
    }
    while ( v25 );
    _RDX += 4;
    --v16;
  }
  while ( v16 );
  __asm { vmovss  xmm10, cs:__real@80000000 }
  v53 = 0;
  _RAX = v203;
  v181 = 0;
  v187 = v203;
  do
  {
    __asm
    {
      vmovups xmm4, xmmword ptr [rax]
      vshufps xmm0, xmm4, xmm4, 0FFh
      vxorps  xmm1, xmm0, xmm13
      vshufps xmm7, xmm4, xmm4, 55h ; 'U'
      vmulss  xmm14, xmm1, xmm4
      vmulss  xmm15, xmm1, xmm7
    }
    v61 = 0;
    __asm
    {
      vshufps xmm6, xmm4, xmm4, 0AAh ; 'ª'
      vmulss  xmm0, xmm1, xmm6
      vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@3ba3d70a
      vmovss  dword ptr [rsp+860h+var_7F8], xmm0
      vmovss  [rsp+860h+var_800], xmm14
      vmovss  [rsp+860h+var_7FC], xmm15
    }
    v182 = 0;
    _RDI = &start;
    v66 = (int *)&v184;
    _RSI = (vec3_t *)&v202;
    v68 = (int *)&v184 + 1;
    __asm
    {
      vmulss  xmm0, xmm7, xmm7
      vxorps  xmm3, xmm4, xmm13
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, xmm10
      vblendvps xmm0, xmm2, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmulss  xmm8, xmm1, xmm7
      vxorps  xmm12, xmm12, xmm12
    }
    _R10 = v203;
    __asm
    {
      vmulss  xmm9, xmm1, xmm3
      vmulss  xmm1, xmm9, xmm6
      vmulss  xmm0, xmm12, xmm7
      vsubss  xmm5, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm6
      vmulss  xmm2, xmm12, xmm4
      vsubss  xmm6, xmm2, xmm1
      vmulss  xmm0, xmm9, xmm4
      vmulss  xmm3, xmm8, xmm7
      vsubss  xmm7, xmm3, xmm0
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, xmm10
      vblendvps xmm0, xmm1, xmm11, xmm0
      vmovss  xmm1, cs:__real@487a0000
      vdivss  xmm2, xmm11, xmm0
      vmovsd  xmm11, qword ptr [rsp+860h+var_800]
      vmulss  xmm10, xmm9, xmm1
      vmulss  xmm12, xmm12, xmm1
      vmulss  xmm0, xmm2, xmm5
      vmulss  xmm9, xmm0, xmm1
      vmulss  xmm8, xmm8, xmm1
      vmulss  xmm0, xmm2, xmm6
      vmulss  xmm6, xmm0, cs:__real@487a0000
      vmulss  xmm0, xmm2, xmm7
      vmulss  xmm5, xmm0, cs:__real@487a0000
      vsubss  xmm4, xmm14, xmm8
      vsubss  xmm3, xmm15, xmm10
      vmovsd  [rbp+760h+var_78C], xmm11
      vsubss  xmm1, xmm4, xmm9
      vmovsd  qword ptr [rbp+760h+start], xmm11
      vmovss  dword ptr [rbp+760h+start], xmm1
      vsubss  xmm1, xmm3, xmm6
      vmovss  dword ptr [rbp+760h+start+4], xmm1
    }
    start.v[2] = v189;
    v115 = 0;
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+760h+start+8]
      vsubss  xmm0, xmm1, xmm12
      vsubss  xmm2, xmm0, xmm5
      vmovss  dword ptr [rbp+760h+start+8], xmm2
      vaddss  xmm1, xmm3, xmm6
      vaddss  xmm3, xmm14, xmm8
      vmovss  xmm14, cs:__real@3ba3d70a
      vaddss  xmm0, xmm4, xmm9
      vmovsd  [rbp+760h+var_7A4], xmm11
      vmovss  dword ptr [rbp+760h+var_7A4], xmm0
      vmovss  dword ptr [rbp+760h+var_7A4+4], xmm1
    }
    v195 = v189;
    __asm
    {
      vmovss  xmm0, [rbp+760h+var_79C]
      vsubss  xmm2, xmm0, xmm12
      vaddss  xmm1, xmm2, xmm5
      vmovss  [rbp+760h+var_79C], xmm1
      vaddss  xmm1, xmm15, xmm10
      vaddss  xmm2, xmm1, xmm6
      vaddss  xmm1, xmm12, [rbp+760h+var_790]
      vmovsd  [rbp+760h+var_798], xmm11
      vmovss  dword ptr [rbp+760h+var_798+4], xmm2
      vaddss  xmm0, xmm3, xmm9
      vmovss  dword ptr [rbp+760h+var_798], xmm0
      vaddss  xmm2, xmm1, xmm5
      vmovss  [rbp+760h+var_790], xmm2
      vaddss  xmm2, xmm10, dword ptr [rbp+760h+var_78C+4]
      vsubss  xmm0, xmm3, xmm9
      vmovss  dword ptr [rbp+760h+var_78C], xmm0
      vsubss  xmm0, xmm2, xmm6
      vaddss  xmm2, xmm12, [rbp+760h+var_784]
      vmovss  dword ptr [rbp+760h+var_78C+4], xmm0
      vsubss  xmm0, xmm2, xmm5
      vmovss  [rbp+760h+var_784], xmm0
    }
    v184 = 4i64;
    v183 = 0;
    v185 = v203;
    while ( *v66 >= 3 )
    {
      if ( ((v53 ^ v115) & 0xFFFFFFFE) != 0 )
      {
        __asm
        {
          vmovups xmm8, xmmword ptr [r10]
          vmulss  xmm0, xmm8, dword ptr [rdi]
          vshufps xmm10, xmm8, xmm8, 55h ; 'U'
          vmulss  xmm1, xmm10, dword ptr [rdi+4]
          vaddss  xmm2, xmm1, xmm0
          vshufps xmm11, xmm8, xmm8, 0AAh ; 'ª'
          vmulss  xmm0, xmm11, dword ptr [rdi+8]
        }
        *v68 = 0;
        v145 = 0;
        v146 = *v66;
        v147 = 0i64;
        __asm
        {
          vaddss  xmm3, xmm2, xmm0
          vmovups [rbp+760h+var_7C0], xmm8
        }
        if ( v146 > 0 )
        {
          __asm
          {
            vmovss  xmm12, dword ptr [rbp+760h+var_7C0+0Ch]
            vxorps  xmm0, xmm12, xmm13
            vmovss  xmm13, cs:__real@bf800000
            vsubss  xmm9, xmm0, xmm14
          }
          do
          {
            __asm
            {
              vcomiss xmm9, xmm3
              vmulss  xmm1, xmm10, dword ptr [rdi+r10*4+4]
              vmulss  xmm0, xmm8, dword ptr [rdi+r10*4]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm11, dword ptr [rdi+r10*4+8]
              vaddss  xmm7, xmm2, xmm1
              vcomiss xmm9, xmm7
            }
            if ( v145 > v146 - 1 )
            {
              v157 = *v68;
              _RDX = 3 * v147;
              __asm { vmovsd  xmm0, qword ptr [rdi+rdx*4] }
              _RCX = v157;
              __asm { vmovsd  qword ptr [rsi+rcx*4], xmm0 }
              _RSI[_RCX].v[2] = _RDI[v147].v[2];
              *v68 = v157 + 1;
            }
            v146 = *v66;
            ++v145;
            ++v147;
            __asm { vmovaps xmm3, xmm7 }
          }
          while ( (int)v145 < *v66 );
          __asm { vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000 }
          v61 = v182;
          v115 = v183;
          _R10 = v185;
          v53 = v181;
        }
        v182 = ++v61;
        v66 = (int *)&v184 + v61 % 2;
        _RDI = &start + 64 * (v61 % 2);
        v162 = (v61 + 1) % 2;
        v68 = (int *)&v184 + v162;
        _RSI = &start + 64 * v162;
      }
      ++v115;
      _R10 += 16;
      v183 = v115;
      v185 = _R10;
      if ( v115 >= 14 )
      {
        if ( *v66 >= 3 )
        {
          v163 = *v66 - 1;
          if ( v163 > 0 )
          {
            v164 = colora;
            v165 = _RDI;
            v166 = (unsigned int)v163;
            do
            {
              v167 = v165 + 1;
              CG_DebugLine(v165, v165 + 1, v164, 1, 0);
              v165 = v167;
              --v166;
            }
            while ( v166 );
          }
          CG_DebugLine(&_RDI[v163], _RDI, colora, 1, 0);
        }
        break;
      }
    }
    ++v53;
    __asm
    {
      vmovss  xmm11, cs:__real@3f800000
      vmovss  xmm10, cs:__real@80000000
    }
    _RAX = v187 + 16;
    v181 = v53;
    v187 += 16;
  }
  while ( v53 < 14 );
  _R11 = &v204;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
R_GpuLightGrid_DebugDrawVolumes
==============
*/
void R_GpuLightGrid_DebugDrawVolumes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  unsigned int ActiveLightGridsMask; 
  __int64 shLightingIndex; 
  __int64 numActiveLightGrids; 
  SHLightingFrameData *v7; 
  int v8; 
  __int64 i; 
  const GfxGpuLightGrid *v11; 
  vec4_t v14; 
  GfxCmdBufContext v15; 

  _RSI = context;
  if ( r_lightGridDrawDebugVolumes->current.enabled )
  {
    ActiveLightGridsMask = R_VOL_GetActiveLightGridsMask(viewInfo->input.data);
    shLightingIndex = viewInfo->input.data->shLightingIndex;
    numActiveLightGrids = (int)shLightingGlob.frameData[shLightingIndex].numActiveLightGrids;
    v7 = &shLightingGlob.frameData[shLightingIndex];
    if ( numActiveLightGrids > 0 )
    {
      v8 = 1;
      for ( i = 0i64; i < numActiveLightGrids; ++i )
      {
        __asm { vmovups xmm1, xmmword ptr [rsi] }
        v11 = v7->activeLightGrids[i];
        _RAX = &colorRed;
        if ( (v8 & ActiveLightGridsMask) == 0 )
          _RAX = &colorYellow;
        __asm
        {
          vmovups [rsp+68h+var_38], xmm1
          vmovups xmm0, xmmword ptr [rax]
          vmovups [rsp+68h+var_48], xmm0
        }
        R_GpuLightGrid_DebugDrawVolume(&v15, v11, &v14);
        v8 = __ROL4__(v8, 1);
      }
    }
  }
}

/*
==============
R_GpuLightGrid_DrawDebug
==============
*/
void R_GpuLightGrid_DrawDebug(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxGpuLightGrid *gpuLightGrid, int lightGridDebug, float sphereScale, GfxWrappedBuffer *lightGridSampleRequests, const GfxWrappedRWBuffer *probesBuffer, int numSpheresToRender, int numTriPatchesToRender, int sphereIndexShift)
{
  __int64 shLightingIndex; 
  __int64 voxelTreeZoneIndex; 
  GfxGpuLightGridZone *zones; 
  unsigned int voxelTetrahedronInternalNodeShift; 
  __int64 v22; 
  __int64 p_input; 
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  __int64 v25; 
  GfxGpuLightGridVoxelTree *v26; 
  GfxWrappedBuffer *p_treeHeaderBuffer; 
  __int64 v28; 
  GfxWrappedBuffer *p_topDownViewNodeBuffer; 
  GfxWrappedBuffer *v31; 
  GfxWrappedBuffer *p_internalNodeBuffer; 
  GfxCmdBufContext v41; 
  GfxCmdBufContext v42; 
  GfxCmdBufContext v43; 
  GfxDrawPrimArgs outArgs; 
  GfxDrawPrimArgs args; 

  _RBX = viewInfo;
  _RSI = context;
  shLightingIndex = (int)context->source->input.data->shLightingIndex;
  if ( !R_BeginMaterial(context->state, rgp.gpuLightGridDebugMaterial, TECHNIQUE_EMISSIVE) )
    return;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0F8h+var_A8], xmm0
  }
  if ( !R_SetupPass(&v41) )
    return;
  voxelTreeZoneIndex = (int)_RBX->input.voxelTreeZoneIndex;
  _R8 = R_BeginWrappedBufferDataWrite(&shLightingGlob.gfxBuffers[shLightingIndex].debugDataBuffer);
  _R8[3] = lightGridDebug - 1;
  _R8[7] = sphereIndexShift;
  zones = gpuLightGrid->zones;
  if ( zones )
  {
    _R8[8] = zones[voxelTreeZoneIndex].firstTetrahedron;
    _R8[9] = gpuLightGrid->zones[voxelTreeZoneIndex].firstVoxelTetrahedronIndex;
    voxelTetrahedronInternalNodeShift = gpuLightGrid->zones[voxelTreeZoneIndex].voxelTetrahedronInternalNodeShift;
  }
  else
  {
    *((_QWORD *)_R8 + 4) = 0i64;
    voxelTetrahedronInternalNodeShift = 0;
  }
  _R8[10] = voxelTetrahedronInternalNodeShift;
  if ( r_lightGridDebugPosLocked->current.enabled )
  {
    *(_QWORD *)_R8 = 0i64;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    _R8[4] = LODWORD(_RBX->viewParmsSet.frames[0].viewParms.camera.origin.v[0]);
    _R8[5] = LODWORD(_RBX->viewParmsSet.frames[0].viewParms.camera.origin.v[1]);
    _R8[6] = LODWORD(_RBX->viewParmsSet.frames[0].viewParms.camera.origin.v[2]);
    *_R8 = LODWORD(_RBX->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0]);
    _R8[1] = LODWORD(_RBX->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1]);
    __asm { vmovss  xmm0, dword ptr [rbx+114h] }
  }
  __asm { vmovss  dword ptr [r8+8], xmm0 }
  R_EndWrappedBufferDataWrite(&shLightingGlob.gfxBuffers[shLightingIndex].debugDataBuffer);
  v22 = _RBX->input.data->shLightingIndex;
  p_input = (__int64)&_RSI->source->input;
  if ( _RSI->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(p_input + 7264) = &gpuLightGrid->probesBuffer;
  *(_QWORD *)(p_input + 7272) = &gpuLightGrid->probePositionsBuffer;
  *(_QWORD *)(p_input + 7280) = &gpuLightGrid->tetrahedronBuffer;
  zoneVoxelTrees = gpuLightGrid->zoneVoxelTrees;
  v25 = *(unsigned int *)(p_input + 7932);
  if ( !zoneVoxelTrees )
  {
    v26 = NULL;
    goto LABEL_16;
  }
  v26 = &zoneVoxelTrees[(unsigned __int64)(unsigned int)v25];
  if ( !v26 )
  {
LABEL_16:
    p_treeHeaderBuffer = &deviceGlobals.voxelTreeHeaderStructuredBuffer[v25];
    goto LABEL_17;
  }
  p_treeHeaderBuffer = &v26->treeHeaderBuffer;
LABEL_17:
  v28 = v25;
  *(_QWORD *)(p_input + 7296) = p_treeHeaderBuffer;
  p_topDownViewNodeBuffer = &v26->topDownViewNodeBuffer;
  if ( !v26 )
    p_topDownViewNodeBuffer = &deviceGlobals.voxelTopDownViewNodeStructuredBuffer[v28];
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  v31 = &deviceGlobals.voxelInternalNodeStructuredBuffer[v28];
  *(_QWORD *)(p_input + 7304) = p_topDownViewNodeBuffer;
  __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
  p_internalNodeBuffer = &v26->internalNodeBuffer;
  if ( !v26 )
    p_internalNodeBuffer = v31;
  *(_QWORD *)(p_input + 7312) = p_internalNodeBuffer;
  *(_QWORD *)(p_input + 7320) = &gpuLightGrid->voxelStartTetrahedronBuffer;
  *(_QWORD *)(p_input + 7288) = &gpuLightGrid->tetrahedronNeighborsBuffer;
  *(_QWORD *)(p_input + 7328) = &gpuLightGrid->tetrahedronVisibilityBuffer;
  *(_QWORD *)(p_input + 7344) = &gfxBuf.dummyBuffer;
  *(_QWORD *)(p_input + 7336) = &shLightingGlob.gfxBuffers[v22].debugDataBuffer;
  *(_QWORD *)(p_input + 7352) = &shLightingGlob.fallbackProbe;
  __asm { vmovups [rsp+0F8h+var_98], xmm0 }
  R_SetupPassStableArgsInternal(&v42, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp(1029)");
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0F8h+var_88], xmm0
  }
  R_SetupPassPerObjectArgsInternal(&v43, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp(1030)");
  if ( numSpheresToRender > 0 )
  {
    __asm
    {
      vmovups xmm6, xmmword ptr [rsi]
      vpextrq rbx, xmm6, 1
    }
    R_SetIndicesWithType(_RBX, shLightingGlob.debugLightProbeIndices, DXGI_FORMAT_R16_UINT);
    R_SetStreamSource(_RBX, R_BASE_VERTEX_STREAM, shLightingGlob.debugLightProbeVerts, 0, shLightingGlob.debugLightProbeVertsStride);
    R_FlushStreamSources(_RBX, shLightingGlob.debugLightProbeVertCount);
    __asm { vmovq   rax, xmm6 }
    R_AssignDrawPrimArgsInternal(&outArgs, shLightingGlob.debugLightProbeVertCount, shLightingGlob.debugLightProbeTriCount, 0, 0, *(_DWORD *)(*(_QWORD *)(_RAX + 9728) + 927460i64), *(GfxViewStatsTarget *)(_RAX + 11688), GFX_PRIM_STATS_DEBUG, GFX_TRI_SOURCE_STATIC);
    R_DrawInstancedIndexedPrimitive(_RBX, &outArgs, numSpheresToRender);
  }
  if ( numTriPatchesToRender > 0 )
  {
    __asm
    {
      vmovups xmm6, xmmword ptr [rsi]
      vpextrq rbx, xmm6, 1
    }
    R_SetIndicesWithType(_RBX, shLightingGlob.debugTriPatchIndices, DXGI_FORMAT_R16_UINT);
    R_SetStreamSource(_RBX, R_BASE_VERTEX_STREAM, shLightingGlob.debugTriPatchVerts, 0, shLightingGlob.debugTriPatchVertsStride);
    R_FlushStreamSources(_RBX, shLightingGlob.debugTriPatchVertCount);
    __asm { vmovq   rax, xmm6 }
    R_AssignDrawPrimArgsInternal(&args, shLightingGlob.debugTriPatchVertCount, shLightingGlob.debugTriPatchTriCount, 0, 0, *(_DWORD *)(*(_QWORD *)(_RAX + 9728) + 927460i64), *(GfxViewStatsTarget *)(_RAX + 11688), GFX_PRIM_STATS_DEBUG, GFX_TRI_SOURCE_STATIC);
    R_DrawInstancedIndexedPrimitive(_RBX, &args, numTriPatchesToRender);
  }
  __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
}

/*
==============
R_GpuLightGrid_DrawDebugSpheres
==============
*/
void R_GpuLightGrid_DrawDebugSpheres(GfxCmdBufContext *context, unsigned int numSpheresToRender)
{
  GfxCmdBufState *state; 
  GfxDrawPrimArgs outArgs; 

  state = context->state;
  R_SetIndicesWithType(state, shLightingGlob.debugLightProbeIndices, DXGI_FORMAT_R16_UINT);
  R_SetStreamSource(state, R_BASE_VERTEX_STREAM, shLightingGlob.debugLightProbeVerts, 0, shLightingGlob.debugLightProbeVertsStride);
  R_FlushStreamSources(state, shLightingGlob.debugLightProbeVertCount);
  R_AssignDrawPrimArgsInternal(&outArgs, shLightingGlob.debugLightProbeVertCount, shLightingGlob.debugLightProbeTriCount, 0, 0, context->source->input.data->endSwapFrame, context->source->viewStatsTarget, GFX_PRIM_STATS_DEBUG, GFX_TRI_SOURCE_STATIC);
  R_DrawInstancedIndexedPrimitive(state, &outArgs, numSpheresToRender);
}

/*
==============
R_GpuLightGrid_GetBoundingPlane
==============
*/
vec4_t *R_GpuLightGrid_GetBoundingPlane(vec4_t *result, const GfxGpuLightGrid *lightGrid, int axisIndex, bool positive)
{
  __int64 v6; 
  vec4_t *v38; 

  _ER11 = 0;
  v6 = axisIndex;
  _EAX = positive;
  __asm { vmovd   xmm0, eax }
  _R8 = 2i64 * axisIndex;
  _EAX = positive;
  __asm
  {
    vmovaps [rsp+18h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovd   xmm1, r11d
    vmovss  xmm4, dword ptr [rdx+r8*8+148h]
    vpcmpeqd xmm2, xmm0, xmm1
    vxorps  xmm3, xmm4, xmm6
    vblendvps xmm5, xmm3, xmm4, xmm2
    vmovss  xmm4, dword ptr [rdx+r8*8+14Ch]
    vmovd   xmm0, eax
  }
  _EAX = positive;
  __asm
  {
    vmovd   xmm1, r11d
    vpcmpeqd xmm2, xmm0, xmm1
    vxorps  xmm3, xmm4, xmm6
    vblendvps xmm3, xmm3, xmm4, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm2, xmm1, xmm2
    vsqrtss xmm4, xmm2, xmm2
    vmovd   xmm1, r11d
    vmovss  [rsp+18h+arg_18], xmm5
    vmovd   xmm0, eax
    vmovss  dword ptr [rcx+4], xmm3
    vmovss  [rsp+18h+arg_18], xmm3
    vxorps  xmm3, xmm4, xmm6
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm3, xmm4, xmm2
    vmovss  dword ptr [rcx+8], xmm1
    vmovss  dword ptr [rcx], xmm5
  }
  if ( positive )
  {
    _RAX = 2 * (v6 + 21);
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+rax*8]
      vmovss  dword ptr [rcx+0Ch], xmm0
    }
    v38 = result;
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+r8*8+154h]
      vxorps  xmm1, xmm0, xmm6
      vmovaps xmm6, [rsp+18h+var_18]
    }
    v38 = result;
    __asm { vmovss  dword ptr [rcx+0Ch], xmm1 }
  }
  return v38;
}

/*
==============
R_GpuLightGrid_Init
==============
*/
void R_GpuLightGrid_Init(__int64 a1, double a2)
{
  __int64 v2; 
  GfxWrappedBuffer *p_prevFrameLightGridIndices; 
  __int64 v4; 
  int ElementSizeForDataFormat; 
  __int64 v6; 
  GfxWrappedBuffer *p_debugDataBuffer; 

  v2 = 2i64;
  p_prevFrameLightGridIndices = &shLightingGlob.gfxBuffers[0].prevFrameLightGridIndices;
  v4 = 2i64;
  do
  {
    R_CreateGfxWrappedBuffer(p_prevFrameLightGridIndices - 1, GfxWrappedBuffer_Structured, 112, 0x14u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Light grid parameters");
    ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
    R_CreateGfxWrappedBuffer(p_prevFrameLightGridIndices, GfxWrappedBuffer_Data, ElementSizeForDataFormat, 0x14u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Light grid indices in the prev frame");
    p_prevFrameLightGridIndices += 3;
    --v4;
  }
  while ( v4 );
  R_GpuLightGrid_CreateDebugGeometry(v6, a2);
  p_debugDataBuffer = &shLightingGlob.gfxBuffers[0].debugDataBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(p_debugDataBuffer, GfxWrappedBuffer_Structured, 48, 1u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "debug");
    p_debugDataBuffer += 3;
    --v2;
  }
  while ( v2 );
}

/*
==============
R_GpuLightGrid_SetResources
==============
*/
void R_GpuLightGrid_SetResources(GfxCmdBufInput *input, const GfxGpuLightGrid *gpuLightGrid, unsigned int frameIndex)
{
  __int64 v3; 
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  __int64 voxelTreeZoneIndex; 
  GfxGpuLightGridVoxelTree *v8; 
  const GfxWrappedBuffer *p_treeHeaderBuffer; 
  __int64 v10; 
  const GfxWrappedBuffer *p_topDownViewNodeBuffer; 
  GfxWrappedBuffer *v12; 
  const GfxWrappedBuffer *p_internalNodeBuffer; 

  if ( !gpuLightGrid )
    return;
  v3 = frameIndex;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  input->codeBuffers[12] = &gpuLightGrid->probesBuffer;
  input->codeBuffers[13] = &gpuLightGrid->probePositionsBuffer;
  input->codeBuffers[14] = &gpuLightGrid->tetrahedronBuffer;
  zoneVoxelTrees = gpuLightGrid->zoneVoxelTrees;
  voxelTreeZoneIndex = input->voxelTreeZoneIndex;
  if ( !zoneVoxelTrees )
  {
    v8 = NULL;
    goto LABEL_9;
  }
  v8 = &zoneVoxelTrees[(unsigned __int64)(unsigned int)voxelTreeZoneIndex];
  if ( !v8 )
  {
LABEL_9:
    p_treeHeaderBuffer = &deviceGlobals.voxelTreeHeaderStructuredBuffer[voxelTreeZoneIndex];
    goto LABEL_10;
  }
  p_treeHeaderBuffer = &v8->treeHeaderBuffer;
LABEL_10:
  v10 = voxelTreeZoneIndex;
  input->codeBuffers[16] = p_treeHeaderBuffer;
  p_topDownViewNodeBuffer = &v8->topDownViewNodeBuffer;
  if ( !v8 )
    p_topDownViewNodeBuffer = &deviceGlobals.voxelTopDownViewNodeStructuredBuffer[v10];
  v12 = &deviceGlobals.voxelInternalNodeStructuredBuffer[v10];
  input->codeBuffers[17] = p_topDownViewNodeBuffer;
  p_internalNodeBuffer = &v8->internalNodeBuffer;
  if ( !v8 )
    p_internalNodeBuffer = v12;
  input->codeBuffers[19] = &gpuLightGrid->voxelStartTetrahedronBuffer;
  input->codeBuffers[15] = &gpuLightGrid->tetrahedronNeighborsBuffer;
  input->codeBuffers[18] = p_internalNodeBuffer;
  input->codeBuffers[20] = &gpuLightGrid->tetrahedronVisibilityBuffer;
  input->codeBuffers[22] = &gfxBuf.dummyBuffer;
  input->codeBuffers[23] = &shLightingGlob.fallbackProbe;
  input->codeBuffers[21] = &shLightingGlob.gfxBuffers[v3].debugDataBuffer;
}

/*
==============
R_GpuLightGrid_SetupFrame
==============
*/
void R_GpuLightGrid_SetupFrame(GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  unsigned int shLightingIndex; 
  unsigned int v11; 
  signed int v12; 
  GfxBackEndData *v13; 
  float (*gpuLightGridCameraDist)[1536]; 
  SHLightingFrameData *v15; 
  __int64 zoneCount; 
  __int64 voxelTreeZoneIndex; 
  __int64 v18; 
  const GfxGpuLightGrid **gpuLightGrid; 
  const GfxGpuLightGrid *v22; 
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  bool v24; 
  bool v30; 
  bool v35; 
  std::_Ref_fn<<lambda_5ecc68168016b79ce6058389727e366a> > v99; 
  __int64 v100; 
  __int64 i; 
  const GfxGpuLightGrid *v102; 
  unsigned __int64 v103; 
  int v104; 
  __int64 numActiveLightGrids; 
  int *v106; 
  int v107; 
  __int64 v108; 
  int v109; 
  __int64 v110; 
  __int64 v111; 
  double v112; 
  double v113; 
  double v114; 
  double v115; 
  double v116; 
  double v117; 
  const GfxGpuLightGrid **v118; 
  __int64 v119; 
  R_GpuLightGrid_SetupFrame::__l2::<lambda_5ecc68168016b79ce6058389727e366a> _Val; 
  unsigned __int64 v122; 
  __int128 v123; 
  __int128 v124; 
  __int128 v125; 
  int _First[256]; 
  int v127[1536]; 
  int v128[1536]; 

  shLightingIndex = data->shLightingIndex;
  v11 = 0;
  v12 = 0;
  v122 = 248i64 * shLightingIndex;
  v13 = data;
  gpuLightGridCameraDist = (float (*)[1536])&shLightingGlob.frameData[v122 / 0xF8];
  _Val.gpuLightGridCenterCameraDist = (float (*)[1536])viewInfo;
  _Val.gpuLightGridCameraDist = gpuLightGridCameraDist;
  v15 = &shLightingGlob.frameData[1 - shLightingIndex];
  zoneCount = (int)data->transientDrawContext.zoneCount;
  v119 = zoneCount;
  if ( zoneCount > 0 )
  {
    voxelTreeZoneIndex = (int)viewInfo->input.voxelTreeZoneIndex;
    __asm { vmovaps [rsp+3580h+var_B0], xmm13 }
    v18 = 0i64;
    __asm
    {
      vmovss  xmm13, cs:__real@3f000000
      vmovaps [rsp+3580h+var_40], xmm6
    }
    _R14 = 0i64;
    __asm { vmovaps [rsp+3580h+var_50], xmm7 }
    gpuLightGrid = data->transientDrawContext.gpuLightGrid;
    __asm
    {
      vmovaps [rsp+3580h+var_60], xmm8
      vmovaps [rsp+3580h+var_70], xmm9
      vmovaps [rsp+3580h+var_80], xmm10
      vmovaps [rsp+3580h+var_90], xmm11
      vmovaps [rsp+3580h+var_A0], xmm12
    }
    v118 = data->transientDrawContext.gpuLightGrid;
    do
    {
      v22 = *gpuLightGrid;
      if ( *gpuLightGrid && v22->probeCount )
      {
        if ( v11 >= 0x600 )
        {
          LODWORD(v111) = 1536;
          LODWORD(v110) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v110, v111) )
            __debugbreak();
          gpuLightGrid = v118;
        }
        if ( ((0x80000000 >> (v11 & 0x1F)) & data->transientVisibility.array[(unsigned __int64)v11 >> 5]) != 0 )
        {
          if ( v18 >= 256 )
          {
            R_WarnOncePerFrame(R_WARN_TOO_MANY_LOADED_GPU_LIGHTGRIDS, 256i64, 20i64, "%s <= %s\n\t%g, %g");
          }
          else
          {
            _First[v18] = v11;
            zoneVoxelTrees = v22->zoneVoxelTrees;
            if ( zoneVoxelTrees )
            {
              v24 = __CFSHL__(voxelTreeZoneIndex, 7) || voxelTreeZoneIndex << 7 == 0;
              _RBX = zoneVoxelTrees[voxelTreeZoneIndex].treeHeader;
              __asm
              {
                vmovss  xmm1, dword ptr [rbx+20h]
                vmovss  xmm0, dword ptr [rbx+30h]
                vcomiss xmm1, xmm0
              }
              if ( !v24 )
              {
                __asm
                {
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmovsd  [rsp+3580h+var_3540], xmm0
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovsd  [rsp+3580h+var_3548], xmm1
                }
                v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 109, ASSERT_TYPE_ASSERT, "( mins.x ) <= ( maxs.x )", "%s <= %s\n\t%g, %g", "mins.x", "maxs.x", v112, v115);
                v24 = !v30;
                if ( v30 )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm1, dword ptr [rbx+24h]
                vmovss  xmm0, dword ptr [rbx+34h]
                vcomiss xmm1, xmm0
              }
              if ( !v24 )
              {
                __asm
                {
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmovsd  [rsp+3580h+var_3540], xmm0
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovsd  [rsp+3580h+var_3548], xmm1
                }
                v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 110, ASSERT_TYPE_ASSERT, "( mins.y ) <= ( maxs.y )", "%s <= %s\n\t%g, %g", "mins.y", "maxs.y", v113, v116);
                v24 = !v35;
                if ( v35 )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm1, dword ptr [rbx+28h]
                vmovss  xmm0, dword ptr [rbx+38h]
                vcomiss xmm1, xmm0
              }
              if ( !v24 )
              {
                __asm
                {
                  vcvtss2sd xmm0, xmm0, xmm0
                  vmovsd  [rsp+3580h+var_3540], xmm0
                  vcvtss2sd xmm1, xmm1, xmm1
                  vmovsd  [rsp+3580h+var_3548], xmm1
                }
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 111, ASSERT_TYPE_ASSERT, "( mins.z ) <= ( maxs.z )", "%s <= %s\n\t%g, %g", "mins.z", "maxs.z", v114, v117) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm6, dword ptr [rbx+30h]
                vaddss  xmm0, xmm6, dword ptr [rbx+20h]
                vmovss  xmm5, dword ptr [rbx+34h]
                vmovss  xmm3, dword ptr [rbx+38h]
                vsubss  xmm1, xmm6, dword ptr [rbx+20h]
              }
              _RDX = _Val.gpuLightGridCenterCameraDist;
              __asm
              {
                vmulss  xmm12, xmm0, xmm13
                vaddss  xmm0, xmm5, dword ptr [rbx+24h]
                vmulss  xmm11, xmm0, xmm13
                vaddss  xmm0, xmm3, dword ptr [rbx+28h]
                vmovss  xmm7, dword ptr [rdx+100h]
                vmovss  xmm8, dword ptr [rdx+104h]
                vmovss  xmm9, dword ptr [rdx+108h]
                vmulss  xmm10, xmm0, xmm13
                vsubss  xmm0, xmm5, dword ptr [rbx+24h]
                vmulss  xmm4, xmm0, xmm13
                vmulss  xmm6, xmm1, xmm13
                vsubss  xmm1, xmm3, dword ptr [rbx+28h]
                vmulss  xmm5, xmm1, xmm13
              }
              HIDWORD(v124) = 0;
              ++v12;
              __asm
              {
                vmovups xmm1, xmmword ptr [rbp-60h]
                vmovss  xmm1, xmm1, xmm7
                vinsertps xmm1, xmm1, xmm8, 10h
                vinsertps xmm1, xmm1, xmm9, 20h ; ' '
                vmovups xmmword ptr [rbp-60h], xmm1
              }
              HIDWORD(v125) = 0;
              ++v18;
              __asm
              {
                vmovups xmm0, xmmword ptr [rbp-50h]
                vmovss  xmm0, xmm0, xmm12
                vinsertps xmm0, xmm0, xmm11, 10h
                vinsertps xmm0, xmm0, xmm10, 20h ; ' '
                vsubps  xmm1, xmm1, xmm0
                vmovups xmmword ptr [rbp-50h], xmm0
                vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
                vandnps xmm2, xmm0, xmm1
                vxorps  xmm0, xmm0, xmm0
              }
              HIDWORD(v123) = 0;
              __asm
              {
                vmovups xmm3, xmmword ptr [rbp-70h]
                vmovss  xmm3, xmm3, xmm6
                vinsertps xmm3, xmm3, xmm4, 10h
                vinsertps xmm3, xmm3, xmm5, 20h ; ' '
                vmovups xmmword ptr [rbp-70h], xmm3
                vsubps  xmm3, xmm2, xmm3
                vmaxps  xmm1, xmm3, xmm0
                vmulps  xmm2, xmm1, xmm1
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm1, xmm0, xmm0
                vsqrtss xmm0, xmm1, xmm1
                vsubss  xmm1, xmm8, xmm11
                vmulss  xmm2, xmm1, xmm1
                vsubss  xmm3, xmm7, xmm12
                vmovss  [rbp+r14*4+3480h+var_30C0], xmm0
                vmulss  xmm0, xmm3, xmm3
                vaddss  xmm3, xmm2, xmm0
                vsubss  xmm4, xmm9, xmm10
                vmulss  xmm1, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm1
                vsqrtss xmm0, xmm2, xmm2
                vmovss  [rbp+r14*4+3480h+var_18C0], xmm0
              }
            }
            else
            {
              ++v12;
              v127[_R14] = 0;
              ++v18;
              v128[_R14] = 0;
            }
          }
          gpuLightGrid = v118;
        }
        zoneCount = v119;
      }
      ++gpuLightGrid;
      ++v11;
      v118 = gpuLightGrid;
      ++_R14;
    }
    while ( _R14 < zoneCount );
    __asm
    {
      vmovaps xmm13, [rsp+3580h+var_B0]
      vmovaps xmm12, [rsp+3580h+var_A0]
      vmovaps xmm11, [rsp+3580h+var_90]
      vmovaps xmm10, [rsp+3580h+var_80]
      vmovaps xmm9, [rsp+3580h+var_70]
      vmovaps xmm8, [rsp+3580h+var_60]
      vmovaps xmm7, [rsp+3580h+var_50]
      vmovaps xmm6, [rsp+3580h+var_40]
    }
    gpuLightGridCameraDist = _Val.gpuLightGridCameraDist;
    if ( v12 > 20 )
      R_WarnOncePerFrame(R_WARN_TOO_MANY_ACTIVE_GPU_LIGHTGRIDS, 20i64, gpuLightGrid, "%s <= %s\n\t%g, %g");
    v13 = data;
  }
  *(_QWORD *)&v123 = v127;
  *((_QWORD *)&v123 + 1) = v128;
  __asm
  {
    vmovups xmm0, [rbp+3480h+var_34F0]
    vmovdqa [rbp+3480h+var_34F0], xmm0
  }
  v99._Fn = std::_Pass_fn__lambda_5ecc68168016b79ce6058389727e366a__0_(&_Val)._Fn;
  std::_Sort_unchecked_int___std::_Ref_fn__lambda_5ecc68168016b79ce6058389727e366a_____(_First, &_First[v100], v100, (std::_Ref_fn<<lambda_5ecc68168016b79ce6058389727e366a> >)v99._Fn->gpuLightGridCameraDist);
  if ( v12 > 20 )
    v12 = 20;
  if ( v12 > 0 )
  {
    for ( i = 0i64; i < v12; *(_QWORD *)&(*gpuLightGridCameraDist)[2 * i++] = v102 )
    {
      v102 = v13->transientDrawContext.gpuLightGrid[_First[i]];
      if ( (!v102 || !v102->probeCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp", 685, ASSERT_TYPE_ASSERT, "(gpuLightGrid && ( gpuLightGrid->probeCount > 0 ))", (const char *)&queryFormat, "gpuLightGrid && ( gpuLightGrid->probeCount > 0 )") )
        __debugbreak();
    }
  }
  v103 = v122;
  v104 = 0;
  shLightingGlob.frameData[v122 / 0xF8].numActiveLightGrids = v12;
  numActiveLightGrids = (int)v15->numActiveLightGrids;
  if ( v12 > 0 )
  {
    v106 = (int *)((char *)shLightingGlob.frameData[0].prevFrameLightGridIndex + v103);
    do
    {
      v107 = 0;
      v108 = 0i64;
      v109 = -1;
      if ( numActiveLightGrids > 0 )
      {
        while ( *(const GfxGpuLightGrid **)&(*gpuLightGridCameraDist)[0] != v15->activeLightGrids[v108] )
        {
          ++v107;
          if ( ++v108 >= numActiveLightGrids )
            goto LABEL_46;
        }
        v109 = v107;
      }
LABEL_46:
      *v106 = v109;
      ++v104;
      ++v106;
      gpuLightGridCameraDist = (float (*)[1536])((char *)gpuLightGridCameraDist + 8);
    }
    while ( v104 < *(_DWORD *)((char *)&shLightingGlob.frameData[0].activeLightGrids[20] + v103) );
  }
}

/*
==============
R_GpuLightGrid_ShutdownBuffers
==============
*/
void R_GpuLightGrid_ShutdownBuffers(GfxGpuLightGrid *lg)
{
  unsigned int rwView; 
  GfxWrappedRWBuffer *p_probesBuffer; 
  __int64 zoneCount; 
  __int64 v5; 
  GfxGpuLightGridVoxelTree *v6; 

  if ( lg )
  {
    if ( lg->probeCount )
    {
      rwView = lg->probesBuffer.rwView.rwView;
      p_probesBuffer = &lg->probesBuffer;
      if ( rwView != 3 && rwView && lg->probesBuffer.data && lg->probesBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(p_probesBuffer);
      if ( lg->probePositionsBuffer.data && lg->probePositionsBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->probePositionsBuffer);
      if ( lg->tetrahedronBuffer.data && lg->tetrahedronBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->tetrahedronBuffer);
      if ( lg->tetrahedronNeighborsBuffer.data && lg->tetrahedronNeighborsBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->tetrahedronNeighborsBuffer);
      if ( lg->tetrahedronVisibilityBuffer.data && lg->tetrahedronVisibilityBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->tetrahedronVisibilityBuffer);
      if ( lg->voxelStartTetrahedronBuffer.data && lg->voxelStartTetrahedronBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->voxelStartTetrahedronBuffer);
    }
    if ( lg->zoneVoxelTrees )
    {
      zoneCount = (int)lg->zoneCount;
      if ( zoneCount > 0 )
      {
        v5 = 0i64;
        do
        {
          v6 = &lg->zoneVoxelTrees[v5];
          if ( v6->treeHeaderBuffer.data && v6->treeHeaderBuffer.view.view >= 2 )
            R_ShutdownGfxWrappedBuffer(&v6->treeHeaderBuffer);
          if ( v6->topDownViewNodeBuffer.data && v6->topDownViewNodeBuffer.view.view >= 2 )
            R_ShutdownGfxWrappedBuffer(&v6->topDownViewNodeBuffer);
          if ( v6->internalNodeBuffer.data )
          {
            if ( v6->internalNodeBuffer.view.view >= 2 )
              R_ShutdownGfxWrappedBuffer(&v6->internalNodeBuffer);
          }
          ++v5;
          --zoneCount;
        }
        while ( zoneCount );
      }
    }
  }
}

/*
==============
R_InitSHLighting
==============
*/
void R_InitSHLighting(__int64 a1, double a2)
{
  __int64 v2; 
  GfxWrappedBuffer *p_prevFrameLightGridIndices; 
  __int64 v4; 
  int ElementSizeForDataFormat; 
  __int64 v6; 
  GfxWrappedBuffer *p_debugDataBuffer; 

  *(_QWORD *)&shLightingGlob.globalFrame = 0i64;
  R_CreateGfxWrappedBuffer(&shLightingGlob.fallbackProbe, GfxWrappedBuffer_Structured, 64, 1u, GFX_DATA_FORMAT_R32_UINT, 0x49u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "lightgrid fallback probe");
  shLightingGlob.fallbackProbeDirty = 1;
  shLightingGlob.fallbackProbeZoneIndex = -1;
  R_LGV_Init();
  v2 = 2i64;
  p_prevFrameLightGridIndices = &shLightingGlob.gfxBuffers[0].prevFrameLightGridIndices;
  v4 = 2i64;
  do
  {
    R_CreateGfxWrappedBuffer(p_prevFrameLightGridIndices - 1, GfxWrappedBuffer_Structured, 112, 0x14u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Light grid parameters");
    ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
    R_CreateGfxWrappedBuffer(p_prevFrameLightGridIndices, GfxWrappedBuffer_Data, ElementSizeForDataFormat, 0x14u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Light grid indices in the prev frame");
    p_prevFrameLightGridIndices += 3;
    --v4;
  }
  while ( v4 );
  R_GpuLightGrid_CreateDebugGeometry(v6, a2);
  p_debugDataBuffer = &shLightingGlob.gfxBuffers[0].debugDataBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(p_debugDataBuffer, GfxWrappedBuffer_Structured, 48, 1u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "debug");
    p_debugDataBuffer += 3;
    --v2;
  }
  while ( v2 );
}

/*
==============
R_InitWorldSHLighting
==============
*/
void R_InitWorldSHLighting(GfxWorld *world)
{
  shLightingGlob.fallbackProbeDirty = 1;
  R_LGV_InitWorld(world);
}

/*
==============
R_ShutdownWorldSHLighting
==============
*/

void __fastcall R_ShutdownWorldSHLighting(GfxWorld *world)
{
  R_LGV_ShutdownWorld(world);
}

/*
==============
R_ToggleSHLightingFrame
==============
*/
__int64 R_ToggleSHLightingFrame(unsigned int smpFrame)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 

  v2 = shLightingGlob.globalFrame + 1;
  v3 = 0;
  v4 = shLightingGlob.globalFrame + 1;
  if ( shLightingGlob.globalFrame == -2 )
    v4 = 0;
  shLightingGlob.globalFrame = v4;
  shLightingGlob.gfxFrame = 1 - shLightingGlob.gfxFrame;
  if ( v2 != -1 )
    v3 = v2;
  R_LGV_ToggleSmpFrame(v3, smpFrame);
  return shLightingGlob.gfxFrame;
}

