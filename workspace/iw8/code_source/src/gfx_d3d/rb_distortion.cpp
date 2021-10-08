/*
==============
R_Distortion_UpdateDigitalDistortionParams
==============
*/

void __fastcall R_Distortion_UpdateDigitalDistortionParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_Distortion_UpdateDigitalDistortionParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_Distortion_Scoped
==============
*/

bool __fastcall R_Distortion_Scoped(const GfxViewInfo *viewInfo)
{
  return ?R_Distortion_Scoped@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Distortion_GetMaterialAndUpdateParams
==============
*/

Material *__fastcall R_Distortion_GetMaterialAndUpdateParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DistortionEffectType distortionType)
{
  return ?R_Distortion_GetMaterialAndUpdateParams@@YAPEAUMaterial@@UGfxCmdBufContext@@PEBUGfxViewInfo@@W4DistortionEffectType@@@Z(gfxContext, viewInfo, distortionType);
}

/*
==============
R_Distortion_UpdateAnalogDistortionParams
==============
*/

void __fastcall R_Distortion_UpdateAnalogDistortionParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_Distortion_UpdateAnalogDistortionParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_Distortion_Apply
==============
*/

void __fastcall R_Distortion_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColor, R_RT_ColorHandle *packedStencil)
{
  ?R_Distortion_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2@Z(gfxContext, viewInfo, srcColor, packedStencil);
}

/*
==============
RB_Distortion_Apply
==============
*/

void __fastcall RB_Distortion_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, R_RT_ColorHandle *packedStencil)
{
  ?RB_Distortion_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, activeGroup, packedStencil);
}

/*
==============
R_UsingDistortion
==============
*/

bool __fastcall R_UsingDistortion(const GfxViewInfo *viewInfo)
{
  return ?R_UsingDistortion@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Distortion_Enabled
==============
*/

bool __fastcall R_Distortion_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_Distortion_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Distortion_GetEffectType
==============
*/

DistortionEffectType __fastcall R_Distortion_GetEffectType(const GfxViewInfo *viewInfo)
{
  return ?R_Distortion_GetEffectType@@YA?AW4DistortionEffectType@@PEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Distortion_UpdateWaterSheetingParams
==============
*/

void __fastcall R_Distortion_UpdateWaterSheetingParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_Distortion_UpdateWaterSheetingParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_Distortion_Apply
==============
*/
void RB_Distortion_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, R_RT_ColorHandle *packedStencil)
{
  const dvar_t *v9; 
  int v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  int v13; 
  int rtFlags; 
  unsigned int m_allocHeight; 
  unsigned int m_allocWidth; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  bool v22; 
  GfxCmdBufState *state; 
  unsigned int v24; 
  const R_RT_Surface *v25; 
  const char *m_location; 
  R_RT_Handle v45; 
  R_RT_Handle v46; 
  R_RT_Handle result; 
  R_RT_ColorHandle *v48; 
  R_RT_ColorHandle v49; 
  R_RT_Group v51; 
  R_RT_Group v52; 

  _R12 = gfxContext;
  v48 = packedStencil;
  _R15 = activeGroup;
  if ( R_Distortion_GetEffectType(viewInfo) )
  {
    R_ProfBeginNamedEvent(_R12->state, "RB_ApplyUVDistortion");
    R_GPU_BeginTimer(GPU_TIMER_MERGED_POSTFX);
    if ( _R15->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [r15+8] }
    v9 = DCONST_DVARINT_r_dccPostFX;
    __asm
    {
      vmovups [rbp+220h+var_210], ymm0
      vmovups ymmword ptr [rbp+220h+var_280.m_surfaceID], ymm0
    }
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.integer == 1 )
      v10 = 8;
    else
      v10 = 0;
    v11 = r_deviceDebug;
    if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
      goto LABEL_19;
    v12 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = 2112;
    if ( !v12->current.enabled )
LABEL_19:
      v13 = 2048;
    rtFlags = v10 | v13;
    m_allocHeight = R_RT_Handle::GetSurface(&v46)->m_allocHeight;
    m_allocWidth = R_RT_Handle::GetSurface(&v46)->m_allocWidth;
    height = R_RT_Handle::GetSurface(&v46)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v46);
    _RAX = R_RT_CreateInternal(&result, Surface->m_image.m_base.width, height, m_allocWidth, m_allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "uv distort color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp(191)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+220h+var_280.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+220h+var_2A0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v45);
      if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+220h+var_2A0.m_surfaceID]
          vmovups ymmword ptr [rbp+220h+var_280.m_surfaceID], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+220h+var_2A0.m_surfaceID]
          vmovups ymmword ptr [rbp+220h+var_280.m_surfaceID], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+220h+var_280.m_surfaceID] }
        if ( v22 )
          __debugbreak();
      }
    }
    state = _R12->state;
    __asm
    {
      vmovups ymmword ptr [rbp+220h+var_2A0.m_surfaceID], ymm0
      vmovups [rbp+220h+var_230], ymm0
    }
    R_AddRenderTargetTransition(state, &v49, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    v24 = R_RT_Handle::GetSurface(&v45)->m_image.m_base.height;
    v25 = R_RT_Handle::GetSurface(&v45);
    R_SetRenderTargetSize(_R12->source, v25->m_image.m_base.width, v24, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+220h+var_280.m_surfaceID]
      vmovups [rbp+220h+var_230], ymm0
    }
    R_RT_Group::AssignColor(&v51, &v49);
    _RCX = &v52;
    _RAX = &v51;
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
      vmovups xmm0, xmmword ptr [r12]
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
    }
    m_location = v51.m_vrsRt.m_tracking.m_location;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v52.m_vrsRt.m_tracking.m_location = m_location;
    __asm { vmovups xmmword ptr [rbp+220h+var_2A0.m_surfaceID], xmm0 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v45, &v52, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp(197)");
    _RAX = v48;
    __asm
    {
      vmovups ymm1, [rbp+220h+var_210]
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rbp+220h+var_230], ymm0
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+220h+var_2A0.m_surfaceID], xmm0
      vmovups ymmword ptr [rbp+220h+result.m_surfaceID], ymm1
    }
    R_Distortion_Apply((GfxCmdBufContext *)&v45, viewInfo, (R_RT_ColorHandle *)&result, &v49);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+220h+var_280.m_surfaceID]
      vmovups ymmword ptr [rbp+220h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups ymm0, [rbp+220h+var_210]
      vmovups ymmword ptr [rbp+220h+result.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+220h+var_2A0.m_surfaceID], xmm0
    }
    R_RT_Destroy((GfxCmdBufContext *)&v45, (R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+220h+var_280.m_surfaceID]
      vmovups ymmword ptr [rbp+220h+result.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(_R15, (R_RT_ColorHandle *)&result);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(state);
  }
}

/*
==============
R_Distortion_Apply
==============
*/
void R_Distortion_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColor, R_RT_ColorHandle *packedStencil)
{
  DistortionEffectType EffectType; 
  Material *watersheetingMaterial; 
  float analogRewindAmount; 
  float analogRollEffectAmount; 
  float intensity; 
  int duration; 
  bool v26; 
  bool v27; 
  int v28; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v43; 
  GfxCmdBufSourceState *v44; 
  R_RT_Image *v45; 
  GfxCmdBufInput *v46; 
  DistortionEffectType v47; 
  const R_RT_Surface *v49; 
  float fmt; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  GfxCmdBufContext v65; 
  GfxCmdBufContext v66[8]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _RSI = gfxContext;
  _RBX = viewInfo;
  EffectType = R_Distortion_GetEffectType(viewInfo);
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  watersheetingMaterial = NULL;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( EffectType )
  {
    switch ( EffectType )
    {
      case DISTORTION_EFFECT_TYPE_WATER:
        __asm { vmovups xmm0, xmmword ptr [rsi] }
        duration = _RBX->waterSheetingFx.duration;
        __asm { vmovups [rsp+108h+var_88], xmm0 }
        v26 = duration == 0;
        v27 = duration == 0;
        if ( duration )
        {
          v28 = _RBX->waterSheetingFx.startMSec - _RBX->waterSheetingFx.currentTime;
          v26 = duration + v28 == 0;
          v27 = __CFADD__(duration, v28) || v26;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm1, xmm1, eax
            vcvtsi2ss xmm0, xmm0, ecx
            vdivss  xmm2, xmm1, xmm0
            vsubss  xmm3, xmm7, xmm2
          }
        }
        else
        {
          __asm { vxorps  xmm3, xmm3, xmm3 }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0E04h]
          vcomiss xmm0, xmm6
          vmovss  xmm2, dword ptr [rbx+0E10h]
        }
        if ( v27 )
          __asm { vxorps  xmm0, xmm0, xmm0 }
        else
          __asm { vdivss  xmm0, xmm7, xmm0 }
        _RAX = v66[0].source;
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+0E00h]
          vucomiss xmm1, dword ptr [rax+0F50h]
        }
        if ( !v26 )
          goto LABEL_21;
        __asm { vucomiss xmm0, dword ptr [rax+0F54h] }
        if ( !v26 )
          goto LABEL_21;
        __asm { vucomiss xmm2, dword ptr [rax+0F58h] }
        if ( !v26 )
          goto LABEL_21;
        __asm { vucomiss xmm3, dword ptr [rax+0F5Ch] }
        if ( !v26 )
        {
LABEL_21:
          __asm
          {
            vmovss  dword ptr [rax+0F50h], xmm1
            vmovss  dword ptr [rax+0F54h], xmm0
            vmovss  dword ptr [rax+0F58h], xmm2
            vmovss  dword ptr [rax+0F5Ch], xmm3
          }
          ++_RAX->constVersions[133];
        }
        watersheetingMaterial = rgp.watersheetingMaterial;
        break;
      case DISTORTION_EFFECT_TYPE_DIGITAL:
        _RCX = _RSI->source;
        __asm { vmovss  xmm1, dword ptr [rbx+2DD4h] }
        intensity = _RBX->digitalDistort.intensity;
        __asm { vmovss  dword ptr [rcx+0F54h], xmm1 }
        _RCX->input.consts[133].v[0] = intensity;
        *(_QWORD *)&_RCX->input.consts[133].xyz.z = 0i64;
        ++_RCX->constVersions[133];
        watersheetingMaterial = rgp.digitalDistortionMaterial;
        break;
      case DISTORTION_EFFECT_TYPE_ANALOG:
        __asm { vmovss  xmm1, dword ptr [rbx+2DDCh] }
        analogRewindAmount = _RBX->analogEffects.analogRewindAmount;
        _RCX = _RSI->source;
        __asm { vmovss  dword ptr [rcx+0F54h], xmm1 }
        _RCX->input.consts[133].v[0] = analogRewindAmount;
        *(_QWORD *)&_RCX->input.consts[133].xyz.z = 0i64;
        ++_RCX->constVersions[133];
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+2DE0h]
          vmovss  xmm0, dword ptr [rbx+2DE8h]
        }
        analogRollEffectAmount = _RBX->analogEffects.analogRollEffectAmount;
        __asm
        {
          vmovss  dword ptr [rcx+0F64h], xmm0
          vmovss  dword ptr [rcx+0F68h], xmm1
        }
        _RCX->input.consts[134].v[0] = analogRollEffectAmount;
        _RCX->input.consts[134].v[3] = 0.0;
        ++_RCX->constVersions[134];
        watersheetingMaterial = rgp.analogUVColorDistortionMaterial;
        if ( _RBX->thermalParams.useScopedNVG )
          watersheetingMaterial = rgp.analogUVColorDistortionScopedMaterial;
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp", 151, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp(151): unhandled case %d in switch statement", EffectType) )
          __debugbreak();
        goto LABEL_24;
    }
    if ( watersheetingMaterial )
      goto LABEL_26;
  }
LABEL_24:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp", 163, ASSERT_TYPE_ASSERT, "(material != nullptr)", (const char *)&queryFormat, "material != nullptr") )
    __debugbreak();
LABEL_26:
  Surface = R_RT_Handle::GetSurface(srcColor);
  source = _RSI->source;
  p_m_image = &Surface->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  v43 = R_RT_Handle::GetSurface(packedStencil);
  v44 = _RSI->source;
  v45 = &v43->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v46 = &v44->input;
  if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v46->codeImages[79] = &v45->m_base;
  v47 = R_Distortion_GetEffectType(_RBX);
  if ( _RBX->thermalParams.useScopedNVG && v47 == DISTORTION_EFFECT_TYPE_ANALOG )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+108h+var_88], xmm0
    }
    RB_ScopeSizeScreenFilter(v66, _RBX, watersheetingMaterial, NULL);
  }
  else
  {
    v66[0].source = NULL;
    LODWORD(v66[0].state) = R_RT_Handle::GetSurface(srcColor)->m_image.m_base.width;
    v49 = R_RT_Handle::GetSurface(srcColor);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+108h+var_98], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    HIDWORD(v66[0].state) = v49->m_image.m_base.height;
    __asm
    {
      vmovss  [rsp+108h+var_B0], xmm7
      vmovss  [rsp+108h+var_B8], xmm7
      vmovss  [rsp+108h+var_C0], xmm6
      vmovss  [rsp+108h+var_C8], xmm6
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rcx
      vmovss  [rsp+108h+var_D0], xmm1
      vmovss  [rsp+108h+var_D8], xmm0
      vmovss  dword ptr [rsp+108h+var_E0], xmm6
      vmovss  dword ptr [rsp+108h+fmt], xmm6
    }
    RB_ViewportFilterDirectInternal(&v65, watersheetingMaterial, 0xFFFFFFFF, (const GfxViewport *)v66, fmt, v58, v59, v60, v61, v62, v63, v64, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp(175)");
  }
  __asm
  {
    vmovaps xmm6, [rsp+108h+var_58]
    vmovaps xmm7, [rsp+108h+var_68]
  }
}

/*
==============
R_Distortion_Enabled
==============
*/
bool R_Distortion_Enabled(const GfxViewInfo *viewInfo)
{
  return R_Distortion_GetEffectType(viewInfo) != DISTORTION_EFFECT_TYPE_NONE;
}

/*
==============
R_Distortion_GetEffectType
==============
*/
__int64 R_Distortion_GetEffectType(const GfxViewInfo *viewInfo)
{
  bool enabled; 
  char v4; 
  bool v5; 

  enabled = viewInfo->waterSheetingFx.enabled;
  _RBX = viewInfo;
  v5 = R_Distortion_UsingAnalogDistort(viewInfo);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+2DD0h]
  }
  if ( enabled )
  {
    if ( v5 || v4 )
      R_WarnOncePerFrame(R_WARN_DISTORTION_CONFLICT, "watersheeting");
    return 1i64;
  }
  else if ( v5 )
  {
    if ( v4 )
      R_WarnOncePerFrame(R_WARN_DISTORTION_CONFLICT, "analog");
    return 3i64;
  }
  else
  {
    return v4 != 0 ? 2 : 0;
  }
}

/*
==============
R_Distortion_GetMaterialAndUpdateParams
==============
*/

Material *__fastcall R_Distortion_GetMaterialAndUpdateParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DistortionEffectType distortionType, double _XMM3_8)
{
  Material *result; 
  float analogRewindAmount; 
  float analogRollEffectAmount; 
  float intensity; 
  int duration; 
  bool v20; 
  bool v21; 
  int v22; 
  __int128 v33; 

  switch ( distortionType )
  {
    case DISTORTION_EFFECT_TYPE_NONE:
      return 0i64;
    case DISTORTION_EFFECT_TYPE_WATER:
      __asm { vmovups xmm0, xmmword ptr [rcx] }
      duration = viewInfo->waterSheetingFx.duration;
      __asm
      {
        vmovss  xmm5, cs:__real@3f800000
        vmovups [rsp+48h+var_18], xmm0
        vxorps  xmm3, xmm3, xmm3
      }
      v20 = duration == 0;
      v21 = duration == 0;
      if ( duration )
      {
        v22 = viewInfo->waterSheetingFx.startMSec - viewInfo->waterSheetingFx.currentTime;
        v20 = duration + v22 == 0;
        v21 = __CFADD__(duration, v22) || v20;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm2, xmm1, xmm0
          vsubss  xmm4, xmm5, xmm2
        }
      }
      else
      {
        __asm { vxorps  xmm4, xmm4, xmm4 }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+0E04h]
        vcomiss xmm0, xmm3
        vmovss  xmm1, dword ptr [rdx+0E10h]
      }
      if ( !v21 )
        __asm { vdivss  xmm3, xmm5, xmm0 }
      _RAX = v33;
      __asm
      {
        vmovss  xmm0, dword ptr [rdx+0E00h]
        vucomiss xmm0, dword ptr [rax+0F50h]
      }
      if ( !v20 )
        goto LABEL_21;
      __asm { vucomiss xmm3, dword ptr [rax+0F54h] }
      if ( !v20 )
        goto LABEL_21;
      __asm { vucomiss xmm1, dword ptr [rax+0F58h] }
      if ( !v20 )
        goto LABEL_21;
      __asm { vucomiss xmm4, dword ptr [rax+0F5Ch] }
      if ( !v20 )
      {
LABEL_21:
        __asm
        {
          vmovss  dword ptr [rax+0F50h], xmm0
          vmovss  dword ptr [rax+0F54h], xmm3
          vmovss  dword ptr [rax+0F58h], xmm1
          vmovss  dword ptr [rax+0F5Ch], xmm4
        }
        ++*(_WORD *)(v33 + 10430);
      }
      return rgp.watersheetingMaterial;
    case DISTORTION_EFFECT_TYPE_DIGITAL:
      intensity = viewInfo->digitalDistort.intensity;
      _RCX = gfxContext->source;
      __asm
      {
        vmovss  xmm1, dword ptr [rdx+2DD4h]
        vmovss  dword ptr [rcx+0F54h], xmm1
      }
      _RCX->input.consts[133].v[0] = intensity;
      *(_QWORD *)&_RCX->input.consts[133].xyz.z = 0i64;
      ++_RCX->constVersions[133];
      return rgp.digitalDistortionMaterial;
    case DISTORTION_EFFECT_TYPE_ANALOG:
      analogRewindAmount = viewInfo->analogEffects.analogRewindAmount;
      __asm { vmovss  xmm1, dword ptr [rdx+2DDCh] }
      _RCX = gfxContext->source;
      __asm { vmovss  dword ptr [rcx+0F54h], xmm1 }
      _RCX->input.consts[133].v[0] = analogRewindAmount;
      *(_QWORD *)&_RCX->input.consts[133].xyz.z = 0i64;
      ++_RCX->constVersions[133];
      analogRollEffectAmount = viewInfo->analogEffects.analogRollEffectAmount;
      __asm
      {
        vmovss  xmm1, dword ptr [rdx+2DE0h]
        vmovss  xmm0, dword ptr [rdx+2DE8h]
        vmovss  dword ptr [rcx+0F64h], xmm0
        vmovss  dword ptr [rcx+0F68h], xmm1
      }
      _RCX->input.consts[134].v[0] = analogRollEffectAmount;
      _RCX->input.consts[134].v[3] = 0.0;
      ++_RCX->constVersions[134];
      result = rgp.analogUVColorDistortionMaterial;
      if ( viewInfo->thermalParams.useScopedNVG )
        return rgp.analogUVColorDistortionScopedMaterial;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp", 151, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp(151): unhandled case %d in switch statement", distortionType) )
        __debugbreak();
      return 0i64;
  }
  return result;
}

/*
==============
R_Distortion_Scoped
==============
*/
bool R_Distortion_Scoped(const GfxViewInfo *viewInfo)
{
  DistortionEffectType EffectType; 

  EffectType = R_Distortion_GetEffectType(viewInfo);
  return viewInfo->thermalParams.useScopedNVG && EffectType == DISTORTION_EFFECT_TYPE_ANALOG;
}

/*
==============
R_Distortion_UpdateAnalogDistortionParams
==============
*/
void R_Distortion_UpdateAnalogDistortionParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  float analogRewindAmount; 
  float analogRollEffectAmount; 

  _R8 = gfxContext->source;
  __asm { vmovss  xmm0, dword ptr [rdx+2DDCh] }
  analogRewindAmount = viewInfo->analogEffects.analogRewindAmount;
  __asm { vmovss  dword ptr [r8+0F54h], xmm0 }
  _R8->input.consts[133].v[0] = analogRewindAmount;
  *(_QWORD *)&_R8->input.consts[133].xyz.z = 0i64;
  ++_R8->constVersions[133];
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+2DE0h]
    vmovss  xmm0, dword ptr [rdx+2DE8h]
  }
  analogRollEffectAmount = viewInfo->analogEffects.analogRollEffectAmount;
  __asm
  {
    vmovss  dword ptr [r8+0F64h], xmm0
    vmovss  dword ptr [r8+0F68h], xmm1
  }
  _R8->input.consts[134].v[0] = analogRollEffectAmount;
  _R8->input.consts[134].v[3] = 0.0;
  ++_R8->constVersions[134];
}

/*
==============
R_Distortion_UpdateDigitalDistortionParams
==============
*/
void R_Distortion_UpdateDigitalDistortionParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  _R8 = gfxContext->source;
  __asm { vmovss  xmm0, dword ptr [rdx+2DD4h] }
  _R8->input.consts[133].v[0] = viewInfo->digitalDistort.intensity;
  *(_QWORD *)&_R8->input.consts[133].xyz.z = 0i64;
  __asm { vmovss  dword ptr [r8+0F54h], xmm0 }
  ++_R8->constVersions[133];
}

/*
==============
R_Distortion_UpdateWaterSheetingParams
==============
*/

void __fastcall R_Distortion_UpdateWaterSheetingParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, __int64 a3, double _XMM3_8)
{
  int duration; 
  bool v10; 
  bool v11; 
  int v12; 

  duration = viewInfo->waterSheetingFx.duration;
  __asm
  {
    vmovss  xmm5, cs:__real@3f800000
    vxorps  xmm3, xmm3, xmm3
  }
  v10 = duration == 0;
  v11 = duration == 0;
  if ( duration )
  {
    v12 = viewInfo->waterSheetingFx.startMSec - viewInfo->waterSheetingFx.currentTime;
    v10 = duration + v12 == 0;
    v11 = __CFADD__(duration, v12) || v10;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, r8d
      vdivss  xmm2, xmm1, xmm0
      vsubss  xmm4, xmm5, xmm2
    }
  }
  else
  {
    __asm { vxorps  xmm4, xmm4, xmm4 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0E04h]
    vcomiss xmm0, xmm3
    vmovss  xmm1, dword ptr [rdx+0E10h]
  }
  if ( !v11 )
    __asm { vdivss  xmm3, xmm5, xmm0 }
  _RAX = gfxContext->source;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0E00h]
    vucomiss xmm0, dword ptr [rax+0F50h]
  }
  if ( !v10 )
    goto LABEL_10;
  __asm { vucomiss xmm3, dword ptr [rax+0F54h] }
  if ( !v10 )
    goto LABEL_10;
  __asm { vucomiss xmm1, dword ptr [rax+0F58h] }
  if ( !v10 )
    goto LABEL_10;
  __asm { vucomiss xmm4, dword ptr [rax+0F5Ch] }
  if ( !v10 )
  {
LABEL_10:
    __asm
    {
      vmovss  dword ptr [rax+0F50h], xmm0
      vmovss  dword ptr [rax+0F54h], xmm3
      vmovss  dword ptr [rax+0F58h], xmm1
      vmovss  dword ptr [rax+0F5Ch], xmm4
    }
    ++_RAX->constVersions[133];
  }
}

/*
==============
R_Distortion_UsingAnalogDistort
==============
*/
bool R_Distortion_UsingAnalogDistort(const GfxViewInfo *viewInfo)
{
  _RBX = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp", 21, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+2DE0h]
    vcomiss xmm0, dword ptr [rbx+2DDCh]
    vcomiss xmm0, dword ptr [rbx+2DD8h]
    vcomiss xmm0, dword ptr [rbx+2DE4h]
    vcomiss xmm0, dword ptr [rbx+2DE8h]
  }
  return 0;
}

/*
==============
R_UsingDistortion
==============
*/
bool R_UsingDistortion(const GfxViewInfo *viewInfo)
{
  bool result; 

  _RBX = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp", 33, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+2DD0h]
  }
  result = R_Distortion_UsingAnalogDistort(_RBX);
  if ( result || _RBX->waterSheetingFx.enabled )
    return 1;
  return result;
}

