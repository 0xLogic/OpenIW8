/*
==============
R_VRS_GetVrsTexture
==============
*/

R_RT_ColorHandle *__fastcall R_VRS_GetVrsTexture(R_RT_ColorHandle *result)
{
  return ?R_VRS_GetVrsTexture@@YA?AVR_RT_ColorHandle@@XZ(result);
}

/*
==============
R_VRS_GenerateVRSMask
==============
*/

void __fastcall R_VRS_GenerateVRSMask(ComputeCmdBufState *computeCmdBufState, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *vrsTexture, R_RT_ColorHandle *halfVelocityMBlurRt, R_RT_ColorHandle *dofTile0Handle)
{
  ?R_VRS_GenerateVRSMask@@YAXPEAUComputeCmdBufState@@VR_RT_ColorHandle@@111@Z(computeCmdBufState, srcColorRt, vrsTexture, halfVelocityMBlurRt, dofTile0Handle);
}

/*
==============
R_VRS_LazyAllocRts
==============
*/

void __fastcall R_VRS_LazyAllocRts(GfxViewInfo *viewInfo)
{
  ?R_VRS_LazyAllocRts@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_VRS_ApplyVariableRateShading
==============
*/

void __fastcall R_VRS_ApplyVariableRateShading(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture, GfxDrawListType drawListType)
{
  ?R_VRS_ApplyVariableRateShading@@YAXPEBUGfxViewInfo@@UGfxCmdBufContext@@VR_RT_ColorHandle@@W4GfxDrawListType@@@Z(viewInfo, context, vrsTexture, drawListType);
}

/*
==============
R_VRS_ApplyVariableRateShadingForPostProcessing
==============
*/

void __fastcall R_VRS_ApplyVariableRateShadingForPostProcessing(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture)
{
  ?R_VRS_ApplyVariableRateShadingForPostProcessing@@YAXPEBUGfxViewInfo@@UGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(viewInfo, context, vrsTexture);
}

/*
==============
R_VRS_Initialize
==============
*/

void R_VRS_Initialize(void)
{
  ?R_VRS_Initialize@@YAXXZ();
}

/*
==============
R_VRS_Shutdown
==============
*/

void R_VRS_Shutdown(void)
{
  ?R_VRS_Shutdown@@YAXXZ();
}

/*
==============
R_VRS_FreeRts
==============
*/

void R_VRS_FreeRts(void)
{
  ?R_VRS_FreeRts@@YAXXZ();
}

/*
==============
R_VRS_ShowDebugTextureOverlay
==============
*/

void R_VRS_ShowDebugTextureOverlay(void)
{
  ?R_VRS_ShowDebugTextureOverlay@@YAXXZ();
}

/*
==============
R_VRS_GetVrsSurface
==============
*/

const GfxImage *__fastcall R_VRS_GetVrsSurface()
{
  return ?R_VRS_GetVrsSurface@@YAPEBUGfxImage@@XZ();
}

/*
==============
R_VRS_UpdateConstants
==============
*/

void __fastcall R_VRS_UpdateConstants(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt)
{
  ?R_VRS_UpdateConstants@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(computeState, viewInfo, srcColorRt);
}

/*
==============
RB_VRS_GenerateVRSMask
==============
*/

void __fastcall RB_VRS_GenerateVRSMask(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  ?RB_VRS_GenerateVRSMask@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, activeGroup);
}

/*
==============
R_VRS_DisabledVariableRateShading
==============
*/

void __fastcall R_VRS_DisabledVariableRateShading(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture)
{
  ?R_VRS_DisabledVariableRateShading@@YAXPEBUGfxViewInfo@@UGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(viewInfo, context, vrsTexture);
}

/*
==============
RB_VRS_GenerateVRSMask
==============
*/
void RB_VRS_GenerateVRSMask(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  GfxCmdBufState *state; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  ComputeCmdBufState *v13; 
  const char *v22; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 
  R_RT_ColorHandle v53; 
  R_RT_ColorHandle v54; 
  char v55; 
  __int16 v56; 
  int v57; 
  __int16 v59; 
  int v60; 
  __int128 v61; 
  GfxCmdBufContext data; 
  __int64 v65; 
  R_RT_Group v66; 
  void *retaddr; 

  _R11 = &retaddr;
  _R14 = activeGroup;
  _RDI = viewInfo;
  _RSI = gfxContext;
  if ( viewInfo->variableRateShading.enabled && viewInfo->variableRateShading.vrsMaskEnabled )
  {
    state = gfxContext->state;
    __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
    GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu [rbp+1C0h+var_178], xmm0
      vmovdqu [rbp+1C0h+var_158], xmm0
    }
    _RCX = &v66;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v13 = GfxComputeCmdBufState;
    _RAX = &v55;
    v59 = 0;
    v60 = 0;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymm1, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups xmm0, xmmword ptr [rsi]
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
    }
    v22 = (const char *)*((_QWORD *)&v61 + 1);
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v66.m_vrsRt.m_tracking.m_location = v22;
    __asm { vmovups [rbp+1C0h+data], xmm0 }
    R_SetRenderTargetsInternal(&data, &v66, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_nvidia_variable_rate_shading.cpp(178)");
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "Variable Rate Shading");
    R_ProfBeginNamedEvent(state, "Variable Rate Shading");
    if ( _R14->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [r14+8]
      vmovss  xmm1, dword ptr [rdi+3C68h]
      vmovups [rsp+2C0h+var_278+8], ymm0
      vmovups ymm0, ymmword ptr [rdi+3648h]
      vmovups [rbp+1C0h+var_230], ymm0
      vmovups ymm0, ymmword ptr [rdi+3668h]
      vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
      vmovups ymm0, ymmword ptr [r14+8]
      vmovups ymmword ptr [rsp+2C0h+var_298.m_tracking.m_allocCounter], ymm0
      vmovss  xmm0, dword ptr [rdi+3C6Ch]
      vmovss  dword ptr [rbp+1C0h+data+4], xmm0
      vmovss  dword ptr [rbp+1C0h+data], xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+3C70h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovss  dword ptr [rbp+1C0h+data+0Ch], xmm0
      vmovss  dword ptr [rbp+1C0h+data+8], xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+3C74h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmovss  [rbp+1C0h+var_12C], xmm0
      vmovss  [rbp+1C0h+var_130], xmm1
    }
    v65 = 0i64;
    R_RT_Handle::GetSurface(&v51);
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm0, xmm6, xmm0
      vmovss  dword ptr [rbp+1C0h+var_128], xmm0
    }
    R_RT_Handle::GetSurface(&v51);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm0, xmm6, xmm0
      vmovss  dword ptr [rbp+1C0h+var_128+4], xmm0
    }
    R_UploadAndSetComputeConstants(v13, 0, &data, 0x20u, NULL);
    R_ProfBeginNamedEvent(v13, "VRS Mask Generator");
    R_GPU_BeginTimer(GPU_TIMER_VRSMASK_GENERATOR);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_VariableRateShadingGlob.vrsTexture.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+2C0h+var_298.m_tracking.m_allocCounter], ymm0
    }
    R_HW_AddResourceTransition(v13, &v51, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v13);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+2C0h+var_258+8]
      vmovups ymm1, [rbp+1C0h+var_230]
      vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
      vmovups ymm0, ymmword ptr cs:s_VariableRateShadingGlob.vrsTexture.baseclass_0.m_surfaceID
      vmovups [rbp+1C0h+var_230], ymm1
      vmovups ymm1, [rsp+2C0h+var_278+8]
      vmovups ymmword ptr [rsp+2C0h+var_298.m_tracking.m_allocCounter], ymm0
      vmovups [rsp+2C0h+var_278+8], ymm1
    }
    R_VRS_GenerateVRSMask(v13, (R_RT_ColorHandle *)&v52, (R_RT_ColorHandle *)&v51, &v54, &v53);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_VariableRateShadingGlob.vrsTexture.baseclass_0.m_surfaceID
      vmovups [rsp+2C0h+var_278+8], ymm0
    }
    R_HW_AddResourceTransition(v13, &v52, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v13);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(v13);
    R_ProfEndNamedEvent(state);
    Sys_ProfEndNamedEvent();
    __asm { vmovaps xmm6, [rsp+2C0h+var_48+8] }
  }
  else
  {
    R_VRS_FreeRts();
  }
}

/*
==============
R_VRS_ApplyVariableRateShading
==============
*/
void R_VRS_ApplyVariableRateShading(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture, GfxDrawListType drawListType)
{
  ;
}

/*
==============
R_VRS_ApplyVariableRateShadingForPostProcessing
==============
*/
void R_VRS_ApplyVariableRateShadingForPostProcessing(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture)
{
  ;
}

/*
==============
R_VRS_DisabledVariableRateShading
==============
*/
void R_VRS_DisabledVariableRateShading(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture)
{
  ;
}

/*
==============
R_VRS_FreeRts
==============
*/

void __fastcall R_VRS_FreeRts(double _XMM0_8)
{
  R_RT_Handle v4; 

  if ( s_VariableRateShadingGlob.vrsTexture.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_VariableRateShadingGlob.vrsTexture);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_VariableRateShadingGlob.vrsTexture.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v4);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v4.m_surfaceID = 0;
    v4.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rsp+58h+var_28.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rsp+58h+var_28.m_surfaceID]
      vmovups ymmword ptr cs:s_VariableRateShadingGlob.vrsTexture.baseclass_0.m_surfaceID, ymm1
    }
  }
  else if ( s_VariableRateShadingGlob.vrsTexture.m_tracking.m_allocCounter != s_VariableRateShadingGlob.vrsTexture.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

/*
==============
R_VRS_GenerateVRSMask
==============
*/
void R_VRS_GenerateVRSMask(ComputeCmdBufState *computeCmdBufState, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *vrsTexture, R_RT_ColorHandle *halfVelocityMBlurRt, R_RT_ColorHandle *dofTile0Handle)
{
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  GfxDevice *immediateContext; 
  const GfxTexture *v12; 
  __int64 v13; 
  const R_RT_Surface *v14; 
  GfxTextureId textureId; 
  GfxTextureId v16; 
  const R_RT_Surface *v17; 
  int width; 
  const R_RT_Surface *v19; 
  GfxTexture *textures; 
  __int64 v22[2]; 

  if ( R_RT_Handle::IsValid(srcColorRt) || R_RT_Handle::IsValid(vrsTexture) )
  {
    R_SetComputeShader(computeCmdBufState, rgp.nvidiaVariableRateShadingVRSMaskGeneratorComputeShader);
    v22[0] = 0i64;
    v22[1] = 0i64;
    Surface = R_RT_Handle::GetSurface(vrsTexture);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    immediateContext = g_dx.immediateContext;
    v12 = Resident;
    if ( !R_IsLockedIfGfxImmediateContext(g_dx.immediateContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    v13 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v12->shaderRWView.rwView);
    ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __int64 *, _DWORD, _QWORD))immediateContext->m_pFunction[17].Release)(immediateContext, v13 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, v13 + g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr, v12->shaderRWView.rwResource, v22, 0, 0i64);
    v14 = R_RT_Handle::GetSurface(srcColorRt);
    textures = (GfxTexture *)R_Texture_GetResident(v14->m_image.m_base.textureId);
    R_SetComputeTextures(computeCmdBufState, 0, 1, (const GfxTexture *const *)&textures);
    if ( R_RT_Handle::IsValid(halfVelocityMBlurRt) )
      textureId = R_RT_Handle::GetSurface(halfVelocityMBlurRt)->m_image.m_base.textureId;
    else
      textureId = rgp.blackImage->textureId;
    textures = (GfxTexture *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(computeCmdBufState, 1, 1, (const GfxTexture *const *)&textures);
    if ( R_RT_Handle::IsValid(dofTile0Handle) )
      v16 = R_RT_Handle::GetSurface(dofTile0Handle)->m_image.m_base.textureId;
    else
      v16 = rgp.blackImage->textureId;
    textures = (GfxTexture *)R_Texture_GetResident(v16);
    R_SetComputeTextures(computeCmdBufState, 2, 1, (const GfxTexture *const *)&textures);
    v17 = R_RT_Handle::GetSurface(vrsTexture);
    textures = (GfxTexture *)R_Texture_GetResident(v17->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeCmdBufState, 0, 1, (const GfxTexture *const *)&textures);
    width = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
    v19 = R_RT_Handle::GetSurface(srcColorRt);
    R_Dispatch(computeCmdBufState, ((unsigned int)(width + 7) >> 3) + 1, (((unsigned int)v19->m_image.m_base.height + 7) >> 3) + 1, 1u);
    if ( R_CheckDvarModified(r_vrsMaskPreview) )
    {
      if ( r_vrsMaskPreview->current.enabled )
      {
        Dvar_SetInt_Internal(r_debugTextureOverlay, 15);
        __asm { vmovss  xmm1, cs:__real@3f000000 }
      }
      else
      {
        Dvar_SetInt_Internal(r_debugTextureOverlay, 0);
        __asm { vmovss  xmm1, cs:__real@3f800000; value }
      }
      Dvar_SetFloat_Internal(r_debugTextureOverlayBlend, *(float *)&_XMM1);
    }
  }
}

/*
==============
R_VRS_GetVrsSurface
==============
*/
R_RT_Image *R_VRS_GetVrsSurface()
{
  if ( s_VariableRateShadingGlob.vrsTexture.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_VariableRateShadingGlob.vrsTexture);
    return &R_RT_Handle::GetSurface(&s_VariableRateShadingGlob.vrsTexture)->m_image;
  }
  else
  {
    if ( s_VariableRateShadingGlob.vrsTexture.m_tracking.m_allocCounter != s_VariableRateShadingGlob.vrsTexture.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    return (R_RT_Image *)rgp.defaultUIntImage;
  }
}

/*
==============
R_VRS_GetVrsTexture
==============
*/
R_RT_ColorHandle *R_VRS_GetVrsTexture(R_RT_ColorHandle *result)
{
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_VariableRateShadingGlob.vrsTexture.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rcx], ymm0
  }
  return result;
}

/*
==============
R_VRS_Initialize
==============
*/
void R_VRS_Initialize(void)
{
  ;
}

/*
==============
R_VRS_LazyAllocRts
==============
*/
void R_VRS_LazyAllocRts(GfxViewInfo *viewInfo)
{
  R_RT_Handle v5; 
  R_RT_Handle result; 

  if ( viewInfo->variableRateShading.enabled && viewInfo->variableRateShading.vrsMaskEnabled )
  {
    if ( s_VariableRateShadingGlob.vrsTexture.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&s_VariableRateShadingGlob.vrsTexture);
    }
    else
    {
      if ( s_VariableRateShadingGlob.vrsTexture.m_tracking.m_allocCounter != s_VariableRateShadingGlob.vrsTexture.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_VariableRateShadingGlob.vrsTexture.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      _RAX = R_RT_CreateInternal(&result, (vidConfig.sceneWidth + 3) >> 2, (vidConfig.sceneHeight + 3) >> 2, (vidConfig.sceneWidth + 3) >> 2, (vidConfig.sceneHeight + 3) >> 2, 1u, 1u, 1u, g_R_RT_renderTargetFmts[59], R_RT_Flag_VariableRateShadingMask|R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorWhite, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "VRSMask", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_nvidia_variable_rate_shading.cpp(45)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rsp+108h+var_48], ymm0
        vmovups ymmword ptr [rsp+108h+var_68.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v5);
        if ( (R_RT_Handle::GetSurface(&v5)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+108h+var_68.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rsp+108h+var_68.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          __asm { vmovups ymm0, [rsp+108h+var_48] }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr cs:s_VariableRateShadingGlob.vrsTexture.baseclass_0.m_surfaceID, ymm0 }
    }
  }
}

/*
==============
R_VRS_ShowDebugTextureOverlay
==============
*/
void R_VRS_ShowDebugTextureOverlay(void)
{
  if ( R_CheckDvarModified(r_vrsMaskPreview) )
  {
    if ( r_vrsMaskPreview->current.enabled )
    {
      Dvar_SetInt_Internal(r_debugTextureOverlay, 15);
      __asm { vmovss  xmm1, cs:__real@3f000000; value }
    }
    else
    {
      Dvar_SetInt_Internal(r_debugTextureOverlay, 0);
      __asm { vmovss  xmm1, cs:__real@3f800000; value }
    }
    Dvar_SetFloat_Internal(r_debugTextureOverlayBlend, *(float *)&_XMM1);
  }
}

/*
==============
R_VRS_Shutdown
==============
*/

void R_VRS_Shutdown(void)
{
  R_VRS_FreeRts();
}

/*
==============
R_VRS_UpdateConstants
==============
*/
void R_VRS_UpdateConstants(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt)
{
  int data[8]; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RBX = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_nvidia_variable_rate_shading.cpp", 107, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3C68h]
    vmovss  xmm1, dword ptr [rbx+3C6Ch]
    vmovss  [rsp+88h+data], xmm0
    vmovss  [rsp+88h+var_54], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+3C70h]
    vmovss  [rsp+88h+var_50], xmm0
    vmovss  [rsp+88h+var_4C], xmm1
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+3C74h]
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  [rsp+88h+var_48], xmm0
    vmovss  [rsp+88h+var_44], xmm1
  }
  R_RT_Handle::GetSurface(srcColorRt);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm0, xmm6, xmm0
    vmovss  dword ptr [rsp+88h+var_40], xmm0
  }
  R_RT_Handle::GetSurface(srcColorRt);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vdivss  xmm0, xmm6, xmm0
    vmovss  dword ptr [rsp+88h+var_40+4], xmm0
  }
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

