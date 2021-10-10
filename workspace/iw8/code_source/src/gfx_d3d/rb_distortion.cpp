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
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  int v12; 
  int rtFlags; 
  unsigned int m_allocHeight; 
  unsigned int m_allocWidth; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v18; 
  bool v20; 
  GfxCmdBufState *state; 
  unsigned int v22; 
  const R_RT_Surface *v23; 
  GfxCmdBufContext v24; 
  R_RT_Handle v25; 
  R_RT_Handle v26; 
  R_RT_Handle result; 
  R_RT_ColorHandle *v28; 
  R_RT_Handle v29; 
  R_RT_Handle v30; 
  R_RT_Group v31; 
  R_RT_Group v32; 

  v28 = packedStencil;
  if ( R_Distortion_GetEffectType(viewInfo) )
  {
    R_ProfBeginNamedEvent(gfxContext->state, "RB_ApplyUVDistortion");
    R_GPU_BeginTimer(GPU_TIMER_MERGED_POSTFX);
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    v8 = DCONST_DVARINT_r_dccPostFX;
    v30 = (R_RT_Handle)activeGroup->m_colorRts[0];
    v26 = v30;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.integer == 1 )
      v9 = 8;
    else
      v9 = 0;
    v10 = r_deviceDebug;
    if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
      goto LABEL_19;
    v11 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = 2112;
    if ( !v11->current.enabled )
LABEL_19:
      v12 = 2048;
    rtFlags = v9 | v12;
    m_allocHeight = R_RT_Handle::GetSurface(&v26)->m_allocHeight;
    m_allocWidth = R_RT_Handle::GetSurface(&v26)->m_allocWidth;
    height = R_RT_Handle::GetSurface(&v26)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v26);
    v18 = *R_RT_CreateInternal(&result, Surface->m_image.m_base.width, height, m_allocWidth, m_allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "uv distort color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp(191)");
    v26 = v18;
    v25 = v18;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v25);
      if ( (R_RT_Handle::GetSurface(&v25)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v18 = v25;
        v26 = v25;
        __debugbreak();
      }
      else
      {
        v18 = v25;
        v26 = v25;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v18 = v26;
        if ( v20 )
          __debugbreak();
      }
    }
    state = gfxContext->state;
    v25 = v18;
    v29 = v18;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v29, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    v22 = R_RT_Handle::GetSurface(&v25)->m_image.m_base.height;
    v23 = R_RT_Handle::GetSurface(&v25);
    R_SetRenderTargetSize(gfxContext->source, v23->m_image.m_base.width, v22, GFX_USE_VIEWPORT_FOR_VIEW);
    v29 = v26;
    R_RT_Group::AssignColor(&v31, (R_RT_ColorHandle *)&v29);
    *(__m256i *)&v32.m_colorRtCount = *(__m256i *)&v31.m_colorRtCount;
    *(__m256i *)&v32.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v31.m_colorRts[0].m_tracking.m_location;
    *(__m256i *)&v32.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v31.m_colorRts[1].m_tracking.m_location;
    *(__m256i *)&v32.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v31.m_colorRts[2].m_tracking.m_location;
    v24 = *gfxContext;
    *(__m256i *)&v32.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v31.m_colorRts[3].m_tracking.m_location;
    *(__m256i *)&v32.m_depthRt.m_tracking.m_location = *(__m256i *)&v31.m_depthRt.m_tracking.m_location;
    v32.m_vrsRt.m_tracking.m_location = v31.m_vrsRt.m_tracking.m_location;
    *(GfxCmdBufContext *)&v25.m_surfaceID = v24;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v25, &v32, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp(197)");
    v29 = v28->R_RT_Handle;
    *(GfxCmdBufContext *)&v25.m_surfaceID = *gfxContext;
    result = v30;
    R_Distortion_Apply((GfxCmdBufContext *)&v25, viewInfo, (R_RT_ColorHandle *)&result, (R_RT_ColorHandle *)&v29);
    result = v26;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    result = v30;
    *(GfxCmdBufContext *)&v25.m_surfaceID = *gfxContext;
    R_RT_Destroy((GfxCmdBufContext *)&v25, (R_RT_ColorHandle *)&result);
    result = v26;
    R_RT_Group::AssignColor(activeGroup, (R_RT_ColorHandle *)&result);
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
  GfxCmdBufSourceState *v11; 
  float analogCrtEffectAmount; 
  float analogRollEffectAmount; 
  GfxCmdBufSourceState *v14; 
  float intensity; 
  int duration; 
  float v17; 
  float v18; 
  float distortionMagnitude; 
  float v20; 
  GfxCmdBufSourceState *source; 
  float v22; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v24; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v27; 
  GfxCmdBufSourceState *v28; 
  R_RT_Image *v29; 
  GfxCmdBufInput *v30; 
  DistortionEffectType v31; 
  const R_RT_Surface *v32; 
  __int64 height; 
  float state_low; 
  float v35; 
  GfxCmdBufContext v36; 
  GfxCmdBufContext v37; 

  EffectType = R_Distortion_GetEffectType(viewInfo);
  watersheetingMaterial = NULL;
  if ( EffectType )
  {
    switch ( EffectType )
    {
      case DISTORTION_EFFECT_TYPE_WATER:
        duration = viewInfo->waterSheetingFx.duration;
        v37 = *gfxContext;
        if ( duration )
          v17 = 1.0 - (float)((float)(duration + viewInfo->waterSheetingFx.startMSec - viewInfo->waterSheetingFx.currentTime) / (float)duration);
        else
          v17 = 0.0;
        v18 = viewInfo->waterSheetingFx.distortionScale.v[1];
        distortionMagnitude = viewInfo->waterSheetingFx.distortionMagnitude;
        if ( v18 <= 0.0 )
          v20 = 0.0;
        else
          v20 = 1.0 / v18;
        source = v37.source;
        v22 = viewInfo->waterSheetingFx.distortionScale.v[0];
        if ( v22 != v37.source->input.consts[133].v[0] || v20 != v37.source->input.consts[133].v[1] || distortionMagnitude != v37.source->input.consts[133].v[2] || v17 != v37.source->input.consts[133].v[3] )
        {
          v37.source->input.consts[133].v[0] = v22;
          source->input.consts[133].v[1] = v20;
          source->input.consts[133].v[2] = distortionMagnitude;
          source->input.consts[133].v[3] = v17;
          ++source->constVersions[133];
        }
        watersheetingMaterial = rgp.watersheetingMaterial;
        break;
      case DISTORTION_EFFECT_TYPE_DIGITAL:
        v14 = gfxContext->source;
        intensity = viewInfo->digitalDistort.intensity;
        v14->input.consts[133].v[1] = viewInfo->digitalDistort.timeScale;
        v14->input.consts[133].v[0] = intensity;
        *(_QWORD *)&v14->input.consts[133].xyz.z = 0i64;
        ++v14->constVersions[133];
        watersheetingMaterial = rgp.digitalDistortionMaterial;
        break;
      case DISTORTION_EFFECT_TYPE_ANALOG:
        analogRewindAmount = viewInfo->analogEffects.analogRewindAmount;
        v11 = gfxContext->source;
        v11->input.consts[133].v[1] = viewInfo->analogEffects.analogInterferenceAmount;
        v11->input.consts[133].v[0] = analogRewindAmount;
        *(_QWORD *)&v11->input.consts[133].xyz.z = 0i64;
        ++v11->constVersions[133];
        analogCrtEffectAmount = viewInfo->analogEffects.analogCrtEffectAmount;
        analogRollEffectAmount = viewInfo->analogEffects.analogRollEffectAmount;
        v11->input.consts[134].v[1] = viewInfo->analogEffects.analogChromaSeparationEffectAmount;
        v11->input.consts[134].v[2] = analogCrtEffectAmount;
        v11->input.consts[134].v[0] = analogRollEffectAmount;
        v11->input.consts[134].v[3] = 0.0;
        ++v11->constVersions[134];
        watersheetingMaterial = rgp.analogUVColorDistortionMaterial;
        if ( viewInfo->thermalParams.useScopedNVG )
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
  v24 = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &v24->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  v27 = R_RT_Handle::GetSurface(packedStencil);
  v28 = gfxContext->source;
  v29 = &v27->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v30 = &v28->input;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v30->codeImages[79] = &v29->m_base;
  v31 = R_Distortion_GetEffectType(viewInfo);
  if ( viewInfo->thermalParams.useScopedNVG && v31 == DISTORTION_EFFECT_TYPE_ANALOG )
  {
    v37 = *gfxContext;
    RB_ScopeSizeScreenFilter(&v37, viewInfo, watersheetingMaterial, NULL);
  }
  else
  {
    v37.source = NULL;
    LODWORD(v37.state) = R_RT_Handle::GetSurface(srcColor)->m_image.m_base.width;
    v32 = R_RT_Handle::GetSurface(srcColor);
    v36 = *gfxContext;
    height = v32->m_image.m_base.height;
    state_low = (float)LODWORD(v37.state);
    HIDWORD(v37.state) = v32->m_image.m_base.height;
    v35 = (float)height;
    RB_ViewportFilterDirectInternal(&v36, watersheetingMaterial, 0xFFFFFFFF, (const GfxViewport *)&v37, 0.0, 0.0, state_low, v35, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp(175)");
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
  bool v3; 

  enabled = viewInfo->waterSheetingFx.enabled;
  v3 = R_Distortion_UsingAnalogDistort(viewInfo);
  if ( enabled )
  {
    if ( v3 || viewInfo->digitalDistort.intensity > 0.0 )
      R_WarnOncePerFrame(R_WARN_DISTORTION_CONFLICT, "watersheeting");
    return 1i64;
  }
  else if ( v3 )
  {
    if ( viewInfo->digitalDistort.intensity > 0.0 )
      R_WarnOncePerFrame(R_WARN_DISTORTION_CONFLICT, "analog");
    return 3i64;
  }
  else
  {
    return viewInfo->digitalDistort.intensity > 0.0 ? 2 : 0;
  }
}

/*
==============
R_Distortion_GetMaterialAndUpdateParams
==============
*/
Material *R_Distortion_GetMaterialAndUpdateParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DistortionEffectType distortionType)
{
  Material *result; 
  float analogRewindAmount; 
  GfxCmdBufSourceState *v5; 
  float analogRollEffectAmount; 
  float analogCrtEffectAmount; 
  float intensity; 
  GfxCmdBufSourceState *v9; 
  GfxCmdBufContext v10; 
  int duration; 
  float v12; 
  float v13; 
  float v14; 
  float distortionMagnitude; 
  float v16; 
  GfxCmdBufSourceState *source; 

  switch ( distortionType )
  {
    case DISTORTION_EFFECT_TYPE_NONE:
      return 0i64;
    case DISTORTION_EFFECT_TYPE_WATER:
      v10 = *gfxContext;
      duration = viewInfo->waterSheetingFx.duration;
      source = v10.source;
      v12 = 0.0;
      if ( duration )
        v13 = 1.0 - (float)((float)(duration + viewInfo->waterSheetingFx.startMSec - viewInfo->waterSheetingFx.currentTime) / (float)duration);
      else
        v13 = 0.0;
      v14 = viewInfo->waterSheetingFx.distortionScale.v[1];
      distortionMagnitude = viewInfo->waterSheetingFx.distortionMagnitude;
      if ( v14 > 0.0 )
        v12 = 1.0 / v14;
      v16 = viewInfo->waterSheetingFx.distortionScale.v[0];
      if ( v16 != source->input.consts[133].v[0] || v12 != source->input.consts[133].v[1] || distortionMagnitude != source->input.consts[133].v[2] || v13 != source->input.consts[133].v[3] )
      {
        source->input.consts[133].v[0] = v16;
        source->input.consts[133].v[1] = v12;
        source->input.consts[133].v[2] = distortionMagnitude;
        source->input.consts[133].v[3] = v13;
        ++source->constVersions[133];
      }
      return rgp.watersheetingMaterial;
    case DISTORTION_EFFECT_TYPE_DIGITAL:
      intensity = viewInfo->digitalDistort.intensity;
      v9 = gfxContext->source;
      v9->input.consts[133].v[1] = viewInfo->digitalDistort.timeScale;
      v9->input.consts[133].v[0] = intensity;
      *(_QWORD *)&v9->input.consts[133].xyz.z = 0i64;
      ++v9->constVersions[133];
      return rgp.digitalDistortionMaterial;
    case DISTORTION_EFFECT_TYPE_ANALOG:
      analogRewindAmount = viewInfo->analogEffects.analogRewindAmount;
      v5 = gfxContext->source;
      v5->input.consts[133].v[1] = viewInfo->analogEffects.analogInterferenceAmount;
      v5->input.consts[133].v[0] = analogRewindAmount;
      *(_QWORD *)&v5->input.consts[133].xyz.z = 0i64;
      ++v5->constVersions[133];
      analogRollEffectAmount = viewInfo->analogEffects.analogRollEffectAmount;
      analogCrtEffectAmount = viewInfo->analogEffects.analogCrtEffectAmount;
      v5->input.consts[134].v[1] = viewInfo->analogEffects.analogChromaSeparationEffectAmount;
      v5->input.consts[134].v[2] = analogCrtEffectAmount;
      v5->input.consts[134].v[0] = analogRollEffectAmount;
      v5->input.consts[134].v[3] = 0.0;
      ++v5->constVersions[134];
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
  GfxCmdBufSourceState *source; 
  float analogRewindAmount; 
  float analogCrtEffectAmount; 
  float analogRollEffectAmount; 

  source = gfxContext->source;
  analogRewindAmount = viewInfo->analogEffects.analogRewindAmount;
  source->input.consts[133].v[1] = viewInfo->analogEffects.analogInterferenceAmount;
  source->input.consts[133].v[0] = analogRewindAmount;
  *(_QWORD *)&source->input.consts[133].xyz.z = 0i64;
  ++source->constVersions[133];
  analogCrtEffectAmount = viewInfo->analogEffects.analogCrtEffectAmount;
  analogRollEffectAmount = viewInfo->analogEffects.analogRollEffectAmount;
  source->input.consts[134].v[1] = viewInfo->analogEffects.analogChromaSeparationEffectAmount;
  source->input.consts[134].v[2] = analogCrtEffectAmount;
  source->input.consts[134].v[0] = analogRollEffectAmount;
  source->input.consts[134].v[3] = 0.0;
  ++source->constVersions[134];
}

/*
==============
R_Distortion_UpdateDigitalDistortionParams
==============
*/
void R_Distortion_UpdateDigitalDistortionParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufSourceState *source; 
  float timeScale; 

  source = gfxContext->source;
  timeScale = viewInfo->digitalDistort.timeScale;
  source->input.consts[133].v[0] = viewInfo->digitalDistort.intensity;
  *(_QWORD *)&source->input.consts[133].xyz.z = 0i64;
  source->input.consts[133].v[1] = timeScale;
  ++source->constVersions[133];
}

/*
==============
R_Distortion_UpdateWaterSheetingParams
==============
*/
void R_Distortion_UpdateWaterSheetingParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  int duration; 
  float v3; 
  float v4; 
  float v5; 
  float distortionMagnitude; 
  GfxCmdBufSourceState *source; 
  float v8; 

  duration = viewInfo->waterSheetingFx.duration;
  v3 = 0.0;
  if ( duration )
    v4 = 1.0 - (float)((float)(duration + viewInfo->waterSheetingFx.startMSec - viewInfo->waterSheetingFx.currentTime) / (float)duration);
  else
    v4 = 0.0;
  v5 = viewInfo->waterSheetingFx.distortionScale.v[1];
  distortionMagnitude = viewInfo->waterSheetingFx.distortionMagnitude;
  if ( v5 > 0.0 )
    v3 = 1.0 / v5;
  source = gfxContext->source;
  v8 = viewInfo->waterSheetingFx.distortionScale.v[0];
  if ( v8 != gfxContext->source->input.consts[133].v[0] || v3 != source->input.consts[133].v[1] || distortionMagnitude != source->input.consts[133].v[2] || v4 != source->input.consts[133].v[3] )
  {
    source->input.consts[133].v[0] = v8;
    source->input.consts[133].v[1] = v3;
    source->input.consts[133].v[2] = distortionMagnitude;
    source->input.consts[133].v[3] = v4;
    ++source->constVersions[133];
  }
}

/*
==============
R_Distortion_UsingAnalogDistort
==============
*/
bool R_Distortion_UsingAnalogDistort(const GfxViewInfo *viewInfo)
{
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp", 21, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  return viewInfo->analogEffects.analogCrtEffectAmount > 0.0 || viewInfo->analogEffects.analogInterferenceAmount > 0.0 || viewInfo->analogEffects.analogRewindAmount > 0.0 || viewInfo->analogEffects.analogRollEffectAmount > 0.0 || viewInfo->analogEffects.analogChromaSeparationEffectAmount > 0.0;
}

/*
==============
R_UsingDistortion
==============
*/
bool R_UsingDistortion(const GfxViewInfo *viewInfo)
{
  bool result; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_distortion.cpp", 33, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( viewInfo->digitalDistort.intensity > 0.0 )
    return 1;
  result = R_Distortion_UsingAnalogDistort(viewInfo);
  if ( result || viewInfo->waterSheetingFx.enabled )
    return 1;
  return result;
}

