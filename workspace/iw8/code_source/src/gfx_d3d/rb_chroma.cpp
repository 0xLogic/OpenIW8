/*
==============
R_Lens_GetScopeRtSize
==============
*/

void __fastcall R_Lens_GetScopeRtSize(unsigned int sceneWidth, unsigned int sceneHeight, unsigned int *width, unsigned int *height)
{
  ?R_Lens_GetScopeRtSize@@YAXIIAEAI0@Z(sceneWidth, sceneHeight, width, height);
}

/*
==============
RB_Lens_Apply
==============
*/

void __fastcall RB_Lens_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, GFX_LENS_PROFILE_PASS pass, R_RT_ColorHandle *scopeBuffer, const GfxBackEndData *data)
{
  ?RB_Lens_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@W4GFX_LENS_PROFILE_PASS@@VR_RT_ColorHandle@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, activeGroup, pass, scopeBuffer, data);
}

/*
==============
RB_Lens_ScopeDistortion
==============
*/

R_RT_ColorHandle *__fastcall RB_Lens_ScopeDistortion(R_RT_ColorHandle *result, GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  return ?RB_Lens_ScopeDistortion@@YA?AVR_RT_ColorHandle@@UGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(result, gfxContext, viewInfo, data);
}

/*
==============
RB_InterpolateLensProfileParams
==============
*/

void __fastcall RB_InterpolateLensProfileParams(LensProfileMode lensProfileMode, vec3_t *distort, vec3_t *tcaRed, vec3_t *tcaBlue, vec3_t *vignette, float focalLength, float aperture)
{
  ?RB_InterpolateLensProfileParams@@YAXW4LensProfileMode@@AEATvec3_t@@111MM@Z(lensProfileMode, distort, tcaRed, tcaBlue, vignette, focalLength, aperture);
}

/*
==============
R_InitLensDistortProfiles
==============
*/

void R_InitLensDistortProfiles(void)
{
  ?R_InitLensDistortProfiles@@YAXXZ();
}

/*
==============
R_Lens_GetScopeEnabled
==============
*/

bool __fastcall R_Lens_GetScopeEnabled(const GfxViewInfo *viewInfo)
{
  return ?R_Lens_GetScopeEnabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Lens_ScopeDistortion
==============
*/

void __fastcall R_Lens_ScopeDistortion(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?R_Lens_ScopeDistortion@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, data);
}

/*
==============
R_Lens_SetConstants
==============
*/

bool __fastcall R_Lens_SetConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  return ?R_Lens_SetConstants@@YA_NUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, data);
}

/*
==============
R_Lens_Apply
==============
*/

void __fastcall R_Lens_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, GFX_LENS_PROFILE_PASS pass, R_RT_ColorHandle *srcSceneColorRt, R_RT_ColorHandle *scrScopeBufferRt)
{
  ?R_Lens_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@W4GFX_LENS_PROFILE_PASS@@VR_RT_ColorHandle@@4@Z(gfxContext, viewInfo, data, pass, srcSceneColorRt, scrScopeBufferRt);
}

/*
==============
R_Lens_GetEnabled
==============
*/

bool __fastcall R_Lens_GetEnabled(const GfxViewInfo *viewInfo)
{
  return ?R_Lens_GetEnabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_InterpolateLensProfileParams
==============
*/
void RB_InterpolateLensProfileParams(LensProfileMode lensProfileMode, vec3_t *distort, vec3_t *tcaRed, vec3_t *tcaBlue, vec3_t *vignette, float focalLength, float aperture)
{
  ZoomLensDistortProfile *v10; 
  PrimeLensDistortProfile *v11; 
  double v12; 
  int v13; 
  int v14; 
  float v15; 
  double v16; 
  float v17; 
  double v18; 
  float v19; 
  int v20; 
  int v21; 
  int v22; 
  double v23; 
  float v24; 
  __int64 v25; 
  __int64 v26; 
  float v27; 
  int v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __int64 v35; 
  float v36; 
  __int64 v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 

  switch ( lensProfileMode )
  {
    case LENS_PROFILE_NONE:
      return;
    case LENS_PROFILE_COMPACT_PORTABLE:
      v10 = &s_lensProfile_CompactPortable;
      goto LABEL_12;
    case LENS_PROFILE_SMARTPHONE:
      v11 = &s_lensProfile_Smartphone;
      goto LABEL_8;
    case LENS_PROFILE_CINEMATIC_PRIME:
      v11 = &s_lensProfile_CinematicPrime;
      goto LABEL_8;
    case LENS_PROFILE_ACTIONCAM_1:
      v11 = &s_lensProfile_ActionCam1;
      goto LABEL_8;
    case LENS_PROFILE_ACTIONCAM_2:
      v11 = &s_lensProfile_ActionCam2;
      goto LABEL_8;
    case LENS_PROFILE_DRONECAM:
      v11 = &s_lensProfile_DroneCam;
LABEL_8:
      v12 = I_fclamp((float)(aperture - v11->apertureMin) / (float)(v11->apertureMax - v11->apertureMin), 0.0, 1.0);
      *(double *)distort->v = *(double *)v11->distortCurve.v;
      distort->v[2] = v11->distortCurve.v[2];
      *(double *)tcaRed->v = *(double *)v11->tcaRedCurve.v;
      tcaRed->v[2] = v11->tcaRedCurve.v[2];
      *(double *)tcaBlue->v = *(double *)v11->tcaBlueCurve.v;
      tcaBlue->v[2] = v11->tcaBlueCurve.v[2];
      v13 = 3;
      v14 = (int)(float)(*(float *)&v12 * 3.0);
      v15 = (float)(*(float *)&v12 * 3.0) - (float)v14;
      if ( v14 + 1 < 3 )
        v13 = v14 + 1;
      vignette->v[0] = (float)((float)(v11->vignetteCurveTable[v13].v[0] - v11->vignetteCurveTable[v14].v[0]) * v15) + v11->vignetteCurveTable[v14].v[0];
      vignette->v[1] = (float)((float)(v11->vignetteCurveTable[v13].v[1] - v11->vignetteCurveTable[v14].v[1]) * v15) + v11->vignetteCurveTable[v14].v[1];
      vignette->v[2] = (float)((float)(v11->vignetteCurveTable[v13].v[2] - v11->vignetteCurveTable[v14].v[2]) * (float)((float)(*(float *)&v12 * 3.0) - (float)v14)) + v11->vignetteCurveTable[v14].v[2];
      break;
    case LENS_PROFILE_TELESCOPIC:
      v10 = &s_lensProfile_Telescopic;
LABEL_12:
      v16 = I_fclamp((float)(focalLength - v10->focalLengthMin) / (float)(v10->focalLengthMax - v10->focalLengthMin), 0.0, 1.0);
      v17 = (float)(v10->numCurveTableEntries - 1) * *(float *)&v16;
      v18 = I_fclamp((float)(aperture - v10->apertureMin) / (float)(v10->apertureMax - v10->apertureMin), 0.0, 1.0);
      v19 = *(float *)&v18 * 3.0;
      v20 = (int)v17;
      v21 = (int)(float)(*(float *)&v18 * 3.0);
      v22 = v10->numCurveTableEntries - 1;
      v23 = I_fclamp(v17 - (float)(int)v17, 0.0, 1.0);
      v24 = *(float *)&v23;
      if ( (int)v17 + 1 < v22 )
        v22 = (int)v17 + 1;
      v25 = v22;
      v26 = v22;
      distort->v[0] = (float)(powf_0(*(float *)&v23, 3.0) * (float)(v10->distortCurveTable[v26].v[0] - v10->distortCurveTable[v20].v[0])) + v10->distortCurveTable[v20].v[0];
      distort->v[1] = (float)((float)(v10->distortCurveTable[v26].v[1] - v10->distortCurveTable[v20].v[1]) * (float)(v24 * v24)) + v10->distortCurveTable[v20].v[1];
      distort->v[2] = (float)((float)(v10->distortCurveTable[v26].v[2] - v10->distortCurveTable[v20].v[2]) * v24) + v10->distortCurveTable[v20].v[2];
      tcaRed->v[0] = (float)((float)(v10->tcaRedCurveTable[v26].v[0] - v10->tcaRedCurveTable[v20].v[0]) * v24) + v10->tcaRedCurveTable[v20].v[0];
      tcaRed->v[1] = (float)((float)(v10->tcaRedCurveTable[v26].v[1] - v10->tcaRedCurveTable[v20].v[1]) * v24) + v10->tcaRedCurveTable[v20].v[1];
      tcaRed->v[2] = (float)((float)(v10->tcaRedCurveTable[v26].v[2] - v10->tcaRedCurveTable[v20].v[2]) * v24) + v10->tcaRedCurveTable[v20].v[2];
      tcaBlue->v[0] = (float)((float)(v10->tcaBlueCurveTable[v26].v[0] - v10->tcaBlueCurveTable[v20].v[0]) * v24) + v10->tcaBlueCurveTable[v20].v[0];
      tcaBlue->v[1] = (float)((float)(v10->tcaBlueCurveTable[v26].v[1] - v10->tcaBlueCurveTable[v20].v[1]) * v24) + v10->tcaBlueCurveTable[v20].v[1];
      v27 = v10->tcaBlueCurveTable[v20].v[2];
      tcaBlue->v[2] = (float)((float)(v10->tcaBlueCurveTable[v26].v[2] - v27) * v24) + v27;
      v28 = 3;
      v29 = v10->vignetteCurveTable[v20][v21].v[0];
      v30 = v10->vignetteCurveTable[v20][v21].v[1];
      v31 = (float)((float)(v10->vignetteCurveTable[v25][v21].v[0] - v29) * v24) + v29;
      v32 = v10->vignetteCurveTable[v20][v21].v[2];
      v33 = (float)((float)(v10->vignetteCurveTable[v25][v21].v[1] - v30) * v24) + v30;
      v34 = (float)((float)(v10->vignetteCurveTable[v25][v21].v[2] - v32) * v24) + v32;
      if ( v21 + 1 < 3 )
        v28 = v21 + 1;
      v35 = v28 + 4 * v25;
      v36 = v10->vignetteCurveTable[v25][v28].v[0];
      v37 = v28 + 4i64 * v20;
      v38 = v10->vignetteCurveTable[0][v37].v[2];
      v39 = v10->vignetteCurveTable[0][v35].v[2];
      v40 = v19 - (float)v21;
      v41 = (float)((float)((float)((float)(v10->vignetteCurveTable[0][v35].v[1] - v10->vignetteCurveTable[0][v37].v[1]) * v24) + v10->vignetteCurveTable[0][v37].v[1]) - v33) * v40;
      vignette->v[0] = (float)((float)((float)((float)((float)(v36 - v10->vignetteCurveTable[0][v37].v[0]) * v24) + v10->vignetteCurveTable[0][v37].v[0]) - v31) * v40) + v31;
      vignette->v[1] = v41 + v33;
      vignette->v[2] = (float)((float)((float)((float)((float)(v39 - v38) * v24) + v38) - v34) * v40) + v34;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp", 111, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown lens profile.") )
        __debugbreak();
      break;
  }
}

/*
==============
RB_Lens_Apply
==============
*/
void RB_Lens_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, GFX_LENS_PROFILE_PASS pass, R_RT_ColorHandle *scopeBuffer, const GfxBackEndData *data)
{
  GfxCmdBufState *state; 
  __int64 v12; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  int v16; 
  int rtFlags; 
  unsigned int m_allocHeight; 
  unsigned int m_allocWidth; 
  unsigned int height; 
  unsigned int width; 
  R_RT_Handle v22; 
  bool v24; 
  GfxCmdBufSourceState **p_source; 
  unsigned int v26; 
  const R_RT_Surface *Surface; 
  __int128 v28; 
  __int128 v29; 
  R_RT_Handle v30; 
  R_RT_Handle v31; 
  R_RT_Handle result; 
  GfxCmdBufContext *v33; 
  R_RT_ColorHandle *v34; 
  R_RT_Group *v35; 
  R_RT_Handle v36; 
  R_RT_Handle v37; 
  R_RT_Group v38; 
  R_RT_Group v39; 

  v34 = scopeBuffer;
  v35 = activeGroup;
  v33 = gfxContext;
  if ( r_lensProfileOverrideMode->current.integer || viewInfo->lensProfile.mode || viewInfo->radialMotionBlur.enabled || viewInfo->chromaticAberration.strength > 0.0 && viewInfo->chromaticAberration.radius > 0.0 )
  {
    state = gfxContext->state;
    R_ProfBeginNamedEvent(state, "RB_ApplyLensEffect");
    _XMM0 = *gfxContext;
    *(GfxCmdBufContext *)&v30.m_surfaceID = *gfxContext;
    if ( R_Lens_SetConstants((GfxCmdBufContext *)&v30, viewInfo, data) )
    {
      if ( pass )
      {
LABEL_37:
        R_ProfEndNamedEvent(state);
        return;
      }
      v12 = 3i64;
    }
    else if ( pass )
    {
      v12 = 3i64;
      if ( pass == GFX_LENS_PROFILE_DISTORTION )
        v12 = 1i64;
    }
    else
    {
      v12 = 3i64;
    }
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    v13 = DCONST_DVARINT_r_dccPostFX;
    v37 = (R_RT_Handle)activeGroup->m_colorRts[0];
    v31 = v37;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.integer == 1 )
      v14 = 8;
    else
      v14 = 0;
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_27;
    v15 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = 2112;
    if ( !v15->current.enabled )
LABEL_27:
      v16 = 2048;
    rtFlags = v14 | v16;
    m_allocHeight = R_RT_Handle::GetSurface(&v31)->m_allocHeight;
    m_allocWidth = R_RT_Handle::GetSurface(&v31)->m_allocWidth;
    height = R_RT_Handle::GetSurface(&v31)->m_image.m_base.height;
    width = R_RT_Handle::GetSurface(&v31)->m_image.m_base.width;
    v22 = *R_RT_CreateInternal(&result, width, height, m_allocWidth, m_allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[v12], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "chromatic color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(386)");
    v31 = v22;
    v30 = v22;
    if ( LOWORD(_XMM0.source) )
    {
      R_RT_Handle::GetSurface(&v30);
      if ( (R_RT_Handle::GetSurface(&v30)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v22 = v30;
        v31 = v30;
        __debugbreak();
      }
      else
      {
        v22 = v30;
        v31 = v30;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v22 = v31;
        if ( v24 )
          __debugbreak();
      }
    }
    p_source = &v33->source;
    v30 = v22;
    v36 = v22;
    state = v33->state;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v36, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    v26 = R_RT_Handle::GetSurface(&v30)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v30);
    R_SetRenderTargetSize(*p_source, Surface->m_image.m_base.width, v26, GFX_USE_VIEWPORT_FOR_VIEW);
    v36 = v31;
    R_RT_Group::AssignColor(&v38, (R_RT_ColorHandle *)&v36);
    *(__m256i *)&v39.m_colorRtCount = *(__m256i *)&v38.m_colorRtCount;
    *(__m256i *)&v39.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v38.m_colorRts[0].m_tracking.m_location;
    *(__m256i *)&v39.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v38.m_colorRts[1].m_tracking.m_location;
    *(__m256i *)&v39.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v38.m_colorRts[2].m_tracking.m_location;
    v28 = *(_OWORD *)p_source;
    *(__m256i *)&v39.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v38.m_colorRts[3].m_tracking.m_location;
    *(__m256i *)&v39.m_depthRt.m_tracking.m_location = *(__m256i *)&v38.m_depthRt.m_tracking.m_location;
    v39.m_vrsRt.m_tracking.m_location = v38.m_vrsRt.m_tracking.m_location;
    *(_OWORD *)&v30.m_surfaceID = v28;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v30, &v39, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(392)");
    v36 = v34->R_RT_Handle;
    v29 = *(_OWORD *)p_source;
    result = v37;
    *(_OWORD *)&v30.m_surfaceID = v29;
    R_Lens_Apply((GfxCmdBufContext *)&v30, viewInfo, data, pass, (R_RT_ColorHandle *)&result, (R_RT_ColorHandle *)&v36);
    result = v31;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    result = v37;
    *(_OWORD *)&v30.m_surfaceID = *(_OWORD *)p_source;
    R_RT_Destroy((GfxCmdBufContext *)&v30, (R_RT_ColorHandle *)&result);
    result = v31;
    R_RT_Group::AssignColor(v35, (R_RT_ColorHandle *)&result);
    goto LABEL_37;
  }
}

/*
==============
RB_Lens_ScopeDistortion
==============
*/
R_RT_ColorHandle *RB_Lens_ScopeDistortion(R_RT_ColorHandle *result, GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const dvar_t *v8; 
  unsigned int unsignedInt; 
  const dvar_t *v10; 
  unsigned int v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v19; 
  __int128 v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  R_RT_Handle v33; 
  unsigned int sceneRtWidth; 
  unsigned int sceneRtHeight; 
  R_RT_Group v36; 
  vec4_t clearColor; 
  R_RT_Group v38; 
  vec3_t resulta[4]; 

  R_ProfBeginNamedEvent(gfxContext->state, "Scope buffer");
  v8 = DVARINT_r_scopeBufferSizeDivisorX;
  sceneRtHeight = viewInfo->sceneRtInput.sceneRtHeight;
  sceneRtWidth = viewInfo->sceneRtInput.sceneRtWidth;
  clearColor = 0i64;
  if ( !DVARINT_r_scopeBufferSizeDivisorX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeDivisorX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  unsignedInt = v8->current.unsignedInt;
  v10 = DVARINT_r_scopeBufferSizeDivisorY;
  if ( !DVARINT_r_scopeBufferSizeDivisorY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeDivisorY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.unsignedInt;
  v12 = DVARINT_r_scopeBufferSizeMin;
  if ( !DVARINT_r_scopeBufferSizeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.unsignedInt;
  v14 = v13;
  if ( sceneRtWidth / unsignedInt > v13 )
    v14 = sceneRtWidth / unsignedInt;
  v15 = (v14 + 7) & 0xFFFFFFF8;
  if ( sceneRtHeight / v11 > v13 )
    v13 = sceneRtHeight / v11;
  v33 = *R_RT_CreateInternal((R_RT_Handle *)resulta, v15, (v13 + 7) & 0xFFFFFFF8, v15, (v13 + 7) & 0xFFFFFFF8, 1u, 1u, 1u, g_R_RT_renderTargetFmts[72], R_RT_Flag_RTView, R_RT_FlagInternal_None, &clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "ScopeBuffer", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(204)");
  R_RT_ColorHandle::Cast(result, &v33);
  state = gfxContext->state;
  v33 = result->R_RT_Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v33, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v33 = result->R_RT_Handle;
  height = R_RT_Handle::GetSurface(&v33)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v33);
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v33 = result->R_RT_Handle;
  R_RT_Group::AssignColor(&v36, (R_RT_ColorHandle *)&v33);
  *(__m256i *)&v38.m_colorRtCount = *(__m256i *)&v36.m_colorRtCount;
  *(__m256i *)&v38.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v36.m_colorRts[0].m_tracking.m_location;
  *(__m256i *)&v38.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v36.m_colorRts[1].m_tracking.m_location;
  *(__m256i *)&v38.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v36.m_colorRts[2].m_tracking.m_location;
  v19 = *gfxContext;
  *(__m256i *)&v38.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v36.m_colorRts[3].m_tracking.m_location;
  *(__m256i *)&v38.m_depthRt.m_tracking.m_location = *(__m256i *)&v36.m_depthRt.m_tracking.m_location;
  v38.m_vrsRt.m_tracking.m_location = v36.m_vrsRt.m_tracking.m_location;
  *(GfxCmdBufContext *)&v33.m_surfaceID = v19;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v33, &v38, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(210)");
  R_ClearScreen(state, 0xFu, 0);
  *(GfxCmdBufContext *)&v33.m_surfaceID = *gfxContext;
  v20 = *(_OWORD *)&v33.m_surfaceID;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v33);
  R_Set3D((GfxCmdBufSourceState *)v20);
  R_ChangeDepthHackNearClip((GfxCmdBufSourceState *)v20, 1u);
  *(float *)&v19.source = data->scope.scopeLensRadius;
  v21 = *(float *)&v19.source * data->scope.scopeLensAxis.m[2].v[1];
  v22 = *(float *)&v19.source * data->scope.scopeLensAxis.m[1].v[0];
  v23 = *(float *)&v19.source * data->scope.scopeLensAxis.m[1].v[1];
  v24 = *(float *)&v19.source * data->scope.scopeLensAxis.m[1].v[2];
  v25 = *(float *)&v19.source * data->scope.scopeLensAxis.m[2].v[0];
  v26 = *(float *)&v19.source * data->scope.scopeLensAxis.m[2].v[2];
  v27 = data->scope.scopeLensPos.v[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  v28 = data->scope.scopeLensPos.v[2] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  v29 = data->scope.scopeLensPos.v[1] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  v30 = v28 - v24;
  v31 = v24 + v28;
  resulta[0].v[0] = (float)(v27 - v22) - v25;
  resulta[0].v[2] = v30 - v26;
  resulta[1].v[0] = (float)(v22 + v27) - v25;
  resulta[0].v[1] = (float)(v29 - v23) - v21;
  resulta[1].v[2] = v31 - v26;
  resulta[1].v[1] = (float)(v23 + v29) - v21;
  resulta[2].v[1] = (float)(v23 + v29) + v21;
  resulta[2].v[0] = (float)(v22 + v27) + v25;
  resulta[3].v[0] = (float)(v27 - v22) + v25;
  resulta[2].v[2] = v31 + v26;
  resulta[3].v[2] = v30 + v26;
  resulta[3].v[1] = (float)(v29 - v23) + v21;
  if ( !rgp.scopeBufferMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp", 183, ASSERT_TYPE_ASSERT, "(rgp.scopeBufferMaterial)", (const char *)&queryFormat, "rgp.scopeBufferMaterial") )
    __debugbreak();
  *(_OWORD *)&v33.m_surfaceID = v20;
  RB_Draw3DQuadPicST((GfxCmdBufContext *)&v33, rgp.scopeBufferMaterial, (const vec3_t (*)[4])resulta, -1.0, -1.0, 1.0, 1.0, (GfxColor)0xFFFFFF);
  *(_OWORD *)&v33.m_surfaceID = v20;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v33);
  R_ChangeDepthHackNearClip((GfxCmdBufSourceState *)v20, 0);
  v33 = result->R_RT_Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v33, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
  return result;
}

/*
==============
R_InitLensDistortProfiles
==============
*/
void R_InitLensDistortProfiles(void)
{
  LensProfile_Init_Compact(&s_lensProfile_CompactPortable);
  _XMM12 = LODWORD(FLOAT_N0_51177299);
  _XMM9 = LODWORD(FLOAT_N0_48789799);
  _XMM6 = LODWORD(FLOAT_N0_48060301);
  _XMM2 = 0i64;
  __asm { vunpcklps xmm0, xmm2, xmm0 }
  *(double *)s_lensProfile_CinematicPrime.distortCurve.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm2, xmm2 }
  *(double *)s_lensProfile_CinematicPrime.tcaRedCurve.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm2, xmm2 }
  *(double *)s_lensProfile_CinematicPrime.tcaBlueCurve.v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_111469);
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)s_lensProfile_CinematicPrime.vignetteCurveTable[0].v = *(double *)&_XMM0;
  _XMM2 = LODWORD(FLOAT_0_054960001);
  s_lensProfile_CinematicPrime.distortCurve.v[2] = 0.0;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_000070299997);
  __asm { vunpcklps xmm0, xmm12, xmm11 }
  *(double *)s_lensProfile_CinematicPrime.vignetteCurveTable[1].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm9, xmm8 }
  *(double *)s_lensProfile_CinematicPrime.vignetteCurveTable[2].v = *(double *)&_XMM0;
  s_lensProfile_CinematicPrime.tcaRedCurve.v[2] = FLOAT_0_99992162;
  __asm { vunpcklps xmm0, xmm6, xmm5 }
  *(double *)s_lensProfile_CinematicPrime.vignetteCurveTable[3].v = *(double *)&_XMM0;
  s_lensProfile_CinematicPrime.apertureMin = FLOAT_4_0;
  s_lensProfile_CinematicPrime.tcaBlueCurve.v[2] = FLOAT_0_9999283;
  s_lensProfile_CinematicPrime.vignetteCurveTable[0].v[2] = FLOAT_N0_037836999;
  s_lensProfile_CinematicPrime.vignetteCurveTable[1].v[2] = FLOAT_N0_117567;
  s_lensProfile_CinematicPrime.apertureMax = FLOAT_32_0;
  s_lensProfile_CinematicPrime.vignetteCurveTable[2].v[2] = FLOAT_N0_114404;
  *(double *)s_lensProfile_Smartphone.distortCurve.v = *(double *)&_XMM1;
  s_lensProfile_CinematicPrime.vignetteCurveTable[3].v[2] = FLOAT_N0_113437;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  s_lensProfile_Smartphone.distortCurve.v[2] = FLOAT_0_10144;
  *(double *)s_lensProfile_Smartphone.tcaRedCurve.v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_0000196);
  _XMM0 = LODWORD(FLOAT_N0_111469);
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)s_lensProfile_Smartphone.vignetteCurveTable[0].v = *(double *)&_XMM0;
  s_lensProfile_Smartphone.tcaRedCurve.v[2] = FLOAT_1_0000966;
  s_lensProfile_Smartphone.tcaBlueCurve.v[2] = FLOAT_0_99997783;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_076640002);
  __asm { vunpcklps xmm0, xmm12, xmm11 }
  *(double *)s_lensProfile_Smartphone.vignetteCurveTable[1].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm9, xmm8 }
  *(double *)s_lensProfile_Smartphone.vignetteCurveTable[2].v = *(double *)&_XMM0;
  *(double *)s_lensProfile_Smartphone.tcaBlueCurve.v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = 0i64;
  __asm { vunpcklps xmm0, xmm6, xmm5 }
  *(double *)s_lensProfile_Smartphone.vignetteCurveTable[3].v = *(double *)&_XMM0;
  s_lensProfile_Smartphone.apertureMin = FLOAT_4_0;
  s_lensProfile_Smartphone.apertureMax = FLOAT_32_0;
  s_lensProfile_Smartphone.vignetteCurveTable[0].v[2] = FLOAT_N0_037836999;
  s_lensProfile_Smartphone.vignetteCurveTable[1].v[2] = FLOAT_N0_117567;
  s_lensProfile_Smartphone.vignetteCurveTable[2].v[2] = FLOAT_N0_114404;
  s_lensProfile_Smartphone.vignetteCurveTable[3].v[2] = FLOAT_N0_113437;
  s_lensProfile_ActionCam1.distortCurve.v[2] = FLOAT_N0_10671;
  __asm { vunpcklps xmm0, xmm2, xmm2 }
  *(double *)s_lensProfile_ActionCam1.tcaRedCurve.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm2, xmm2 }
  _XMM2 = LODWORD(FLOAT_N0_111469);
  *(double *)s_lensProfile_ActionCam1.tcaBlueCurve.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm2, xmm14 }
  *(double *)s_lensProfile_ActionCam1.vignetteCurveTable[0].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm12, xmm11 }
  *(double *)s_lensProfile_ActionCam1.vignetteCurveTable[1].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm9, xmm8 }
  *(double *)s_lensProfile_ActionCam1.vignetteCurveTable[2].v = *(double *)&_XMM0;
  s_lensProfile_ActionCam1.tcaRedCurve.v[2] = FLOAT_0_99992162;
  s_lensProfile_ActionCam1.tcaBlueCurve.v[2] = FLOAT_0_9999283;
  __asm { vunpcklps xmm0, xmm6, xmm5 }
  *(double *)s_lensProfile_ActionCam1.vignetteCurveTable[3].v = *(double *)&_XMM0;
  s_lensProfile_ActionCam1.vignetteCurveTable[0].v[2] = FLOAT_N0_037836999;
  s_lensProfile_ActionCam1.apertureMin = FLOAT_4_0;
  s_lensProfile_ActionCam1.vignetteCurveTable[1].v[2] = FLOAT_N0_117567;
  s_lensProfile_ActionCam1.vignetteCurveTable[2].v[2] = FLOAT_N0_114404;
  s_lensProfile_ActionCam1.apertureMax = FLOAT_32_0;
  *(double *)s_lensProfile_ActionCam1.distortCurve.v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_031830002);
  s_lensProfile_ActionCam1.vignetteCurveTable[3].v[2] = FLOAT_N0_113437;
  __asm { vunpcklps xmm0, xmm1, xmm0 }
  *(double *)s_lensProfile_ActionCam2.distortCurve.v = *(double *)&_XMM0;
  s_lensProfile_ActionCam2.distortCurve.v[2] = 0.0;
  s_lensProfile_ActionCam2.tcaRedCurve.v[2] = FLOAT_0_99992162;
  _XMM15 = 0i64;
  __asm { vunpcklps xmm0, xmm15, xmm15 }
  *(double *)s_lensProfile_ActionCam2.tcaRedCurve.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm15, xmm15 }
  *(double *)s_lensProfile_ActionCam2.tcaBlueCurve.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm2, xmm14 }
  _XMM2 = LODWORD(FLOAT_0_0096159903);
  *(double *)s_lensProfile_ActionCam2.vignetteCurveTable[0].v = *(double *)&_XMM0;
  __asm
  {
    vunpcklps xmm1, xmm2, xmm1
    vunpcklps xmm0, xmm12, xmm11
  }
  *(double *)s_lensProfile_ActionCam2.vignetteCurveTable[1].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm9, xmm8 }
  *(double *)s_lensProfile_ActionCam2.vignetteCurveTable[2].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm6, xmm5 }
  *(double *)s_lensProfile_ActionCam2.vignetteCurveTable[3].v = *(double *)&_XMM0;
  s_lensProfile_ActionCam2.tcaBlueCurve.v[2] = FLOAT_0_9999283;
  s_lensProfile_ActionCam2.vignetteCurveTable[0].v[2] = FLOAT_N0_037836999;
  s_lensProfile_ActionCam2.vignetteCurveTable[1].v[2] = FLOAT_N0_117567;
  _XMM4 = LODWORD(FLOAT_N0_9228);
  s_lensProfile_ActionCam2.vignetteCurveTable[2].v[2] = FLOAT_N0_114404;
  s_lensProfile_ActionCam2.vignetteCurveTable[3].v[2] = FLOAT_N0_113437;
  s_lensProfile_DroneCam.distortCurve.v[2] = FLOAT_N0_00551691;
  s_lensProfile_DroneCam.tcaRedCurve.v[2] = FLOAT_1_0000759;
  s_lensProfile_DroneCam.tcaBlueCurve.v[2] = FLOAT_1_0000033;
  __asm { vunpcklps xmm0, xmm4, xmm3 }
  *(double *)s_lensProfile_DroneCam.vignetteCurveTable[0].v = *(double *)&_XMM0;
  *(double *)s_lensProfile_DroneCam.distortCurve.v = *(double *)&_XMM1;
  __asm
  {
    vunpcklps xmm0, xmm4, xmm3
    vunpcklps xmm1, xmm15, xmm15
  }
  s_lensProfile_DroneCam.vignetteCurveTable[0].v[2] = FLOAT_N0_2985;
  *(double *)s_lensProfile_DroneCam.vignetteCurveTable[1].v = *(double *)&_XMM0;
  *(double *)s_lensProfile_DroneCam.tcaRedCurve.v = *(double *)&_XMM1;
  __asm
  {
    vunpcklps xmm0, xmm4, xmm3
    vunpcklps xmm1, xmm15, xmm15
  }
  s_lensProfile_DroneCam.vignetteCurveTable[1].v[2] = FLOAT_N0_2985;
  *(double *)s_lensProfile_DroneCam.vignetteCurveTable[2].v = *(double *)&_XMM0;
  s_lensProfile_ActionCam2.apertureMin = FLOAT_4_0;
  s_lensProfile_ActionCam2.apertureMax = FLOAT_32_0;
  *(double *)s_lensProfile_DroneCam.tcaBlueCurve.v = *(double *)&_XMM1;
  s_lensProfile_DroneCam.vignetteCurveTable[2].v[2] = FLOAT_N0_2985;
  __asm { vunpcklps xmm0, xmm4, xmm3 }
  *(double *)s_lensProfile_DroneCam.vignetteCurveTable[3].v = *(double *)&_XMM0;
  s_lensProfile_DroneCam.apertureMin = FLOAT_4_0;
  s_lensProfile_DroneCam.apertureMax = FLOAT_32_0;
  s_lensProfile_DroneCam.vignetteCurveTable[3].v[2] = FLOAT_N0_2985;
  LensProfile_Init_Telescopic(&s_lensProfile_Telescopic);
}

/*
==============
R_Lens_Apply
==============
*/
void R_Lens_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, GFX_LENS_PROFILE_PASS pass, R_RT_ColorHandle *srcSceneColorRt, R_RT_ColorHandle *scrScopeBufferRt)
{
  Material *lensProfileDistortionMaterial; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v11; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v15; 
  GfxCmdBufContext v16; 
  __int64 height; 
  float width; 
  float v19; 
  GfxCmdBufSourceState *v20; 
  GfxCmdBufInput *v21; 
  GfxCmdBufContext v22; 
  GfxViewport v23; 

  R_GPU_BeginTimer(GPU_TIMER_RADIAL_BLUR);
  lensProfileDistortionMaterial = NULL;
  if ( pass )
  {
    if ( pass == GFX_LENS_PROFILE_DISTORTION )
    {
      lensProfileDistortionMaterial = rgp.lensProfileDistortionMaterial;
      if ( viewInfo->scopeLensDistortionEnabled )
      {
        lensProfileDistortionMaterial = rgp.lensProfileDistortionLensBufferMaterial;
        if ( !scrScopeBufferRt->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp", 350, ASSERT_TYPE_ASSERT, "(!scrScopeBufferRt.IsNull())", (const char *)&queryFormat, "!scrScopeBufferRt.IsNull()") )
          __debugbreak();
        Surface = R_RT_Handle::GetSurface(scrScopeBufferRt);
        R_SetCodeImageTextureInternal(gfxContext->source, 0x17u, &Surface->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(351)");
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp", 356, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tImplement missing GFX_LENS_PROFILE_MODE", "false") )
    {
      __debugbreak();
    }
  }
  else
  {
    lensProfileDistortionMaterial = rgp.lensProfileConvolutionMaterial;
  }
  v11 = R_RT_Handle::GetSurface(srcSceneColorRt);
  source = gfxContext->source;
  p_m_image = &v11->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  *(_QWORD *)&v23.x = 0i64;
  v23.width = R_RT_Handle::GetSurface(srcSceneColorRt)->m_image.m_base.width;
  v15 = R_RT_Handle::GetSurface(srcSceneColorRt);
  v16 = *gfxContext;
  height = v15->m_image.m_base.height;
  width = (float)v23.width;
  v23.height = v15->m_image.m_base.height;
  v22 = v16;
  v19 = (float)height;
  RB_ViewportFilterDirectInternal(&v22, lensProfileDistortionMaterial, 0xFFFFFFFF, &v23, 0.0, 0.0, width, v19, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(361)");
  v20 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v21 = &v20->input;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v21->codeImages[23] = NULL;
  R_GPU_EndTimer();
}

/*
==============
R_Lens_GetEnabled
==============
*/
bool R_Lens_GetEnabled(const GfxViewInfo *viewInfo)
{
  return r_lensProfileOverrideMode->current.integer || viewInfo->lensProfile.mode || viewInfo->radialMotionBlur.enabled || viewInfo->chromaticAberration.strength > 0.0 && viewInfo->chromaticAberration.radius > 0.0;
}

/*
==============
R_Lens_GetScopeEnabled
==============
*/
_BOOL8 R_Lens_GetScopeEnabled(const GfxViewInfo *viewInfo)
{
  return viewInfo->scopeLensDistortionEnabled;
}

/*
==============
R_Lens_GetScopeRtSize
==============
*/
void R_Lens_GetScopeRtSize(unsigned int sceneWidth, unsigned int sceneHeight, unsigned int *width, unsigned int *height)
{
  const dvar_t *v4; 
  unsigned int unsignedInt; 
  const dvar_t *v10; 
  unsigned int v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  unsigned int v14; 

  v4 = DVARINT_r_scopeBufferSizeDivisorX;
  if ( !DVARINT_r_scopeBufferSizeDivisorX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeDivisorX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  unsignedInt = v4->current.unsignedInt;
  v10 = DVARINT_r_scopeBufferSizeDivisorY;
  if ( !DVARINT_r_scopeBufferSizeDivisorY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeDivisorY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.unsignedInt;
  v12 = DVARINT_r_scopeBufferSizeMin;
  if ( !DVARINT_r_scopeBufferSizeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.unsignedInt;
  v14 = v13;
  if ( sceneWidth / unsignedInt > v13 )
    v14 = sceneWidth / unsignedInt;
  *width = (v14 + 7) & 0xFFFFFFF8;
  if ( sceneHeight / v11 > v13 )
    v13 = sceneHeight / v11;
  *height = (v13 + 7) & 0xFFFFFFF8;
}

/*
==============
R_Lens_ScopeDistortion
==============
*/
void R_Lens_ScopeDistortion(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufSourceState *source; 
  float scopeLensRadius; 
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
  GfxCmdBufContext v19[4]; 

  v19[0] = *gfxContext;
  RB_EndSurfaceIfNeeded(v19);
  source = gfxContext->source;
  R_Set3D(gfxContext->source);
  R_ChangeDepthHackNearClip(source, 1u);
  scopeLensRadius = data->scope.scopeLensRadius;
  v8 = scopeLensRadius * data->scope.scopeLensAxis.m[2].v[1];
  v9 = scopeLensRadius * data->scope.scopeLensAxis.m[1].v[0];
  v10 = scopeLensRadius * data->scope.scopeLensAxis.m[1].v[1];
  v11 = scopeLensRadius * data->scope.scopeLensAxis.m[1].v[2];
  v12 = scopeLensRadius * data->scope.scopeLensAxis.m[2].v[0];
  v13 = scopeLensRadius * data->scope.scopeLensAxis.m[2].v[2];
  v14 = data->scope.scopeLensPos.v[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  v15 = data->scope.scopeLensPos.v[2] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  v16 = data->scope.scopeLensPos.v[1] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  v17 = v15 - v11;
  v18 = v15 + v11;
  *(float *)&v19[1].source = (float)(v14 - v9) - v12;
  *(float *)&v19[1].state = v17 - v13;
  *((float *)&v19[1].state + 1) = (float)(v14 + v9) - v12;
  *((float *)&v19[1].source + 1) = (float)(v16 - v10) - v8;
  *((float *)&v19[2].source + 1) = v18 - v13;
  *(float *)&v19[2].source = (float)(v16 + v10) - v8;
  *((float *)&v19[2].state + 1) = (float)(v16 + v10) + v8;
  *(float *)&v19[2].state = (float)(v14 + v9) + v12;
  *((float *)&v19[3].source + 1) = (float)(v14 - v9) + v12;
  *(float *)&v19[3].source = v18 + v13;
  *((float *)&v19[3].state + 1) = v17 + v13;
  *(float *)&v19[3].state = (float)(v16 - v10) + v8;
  if ( !rgp.scopeBufferMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp", 183, ASSERT_TYPE_ASSERT, "(rgp.scopeBufferMaterial)", (const char *)&queryFormat, "rgp.scopeBufferMaterial") )
    __debugbreak();
  v19[0] = *gfxContext;
  RB_Draw3DQuadPicST(v19, rgp.scopeBufferMaterial, (const vec3_t (*)[4])&v19[1], -1.0, -1.0, 1.0, 1.0, (GfxColor)0xFFFFFF);
  v19[0] = *gfxContext;
  RB_EndSurfaceIfNeeded(v19);
  R_ChangeDepthHackNearClip(source, 0);
}

/*
==============
R_Lens_SetConstants
==============
*/
bool R_Lens_SetConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  float focalLength; 
  int mode; 
  float aperture; 
  float v8; 
  float scale; 
  float UVScale; 
  bool Bool_Internal; 
  const dvar_t *v13; 
  bool v14; 
  float v15; 
  float v16; 
  float v17; 
  __m128 v18; 
  __m128 v19; 
  double Float_Internal; 
  double v21; 
  float radius; 
  double v23; 
  double v24; 
  float strength; 
  double v26; 
  float v27; 
  double v28; 
  float v29; 
  double v30; 
  float v31; 
  double v32; 
  __int128 v36; 
  float v39; 
  double v40; 
  float v41; 
  float aberration; 
  GfxCmdBufSourceState *source; 
  float v44; 
  float v45; 
  float v46; 
  float v49; 
  float v51; 
  float v52; 
  float v54; 
  float v55; 
  vec4_t vec; 
  vec4_t out; 
  vec3_t distort; 
  vec3_t vignette; 
  vec3_t tcaRed; 

  focalLength = viewInfo->lensProfile.focalLength;
  mode = viewInfo->lensProfile.mode;
  if ( focalLength <= 0.0 )
    focalLength = viewInfo->viewParmsSet.frames[0].viewParms.camera.focalLength;
  aperture = viewInfo->lensProfile.aperture;
  v8 = focalLength * 25.399986;
  if ( aperture <= 0.0 )
    aperture = viewInfo->dofPhysical.fstop;
  scale = viewInfo->lensProfile.scale;
  UVScale = viewInfo->lensProfile.UVScale;
  _XMM9 = LODWORD(FLOAT_1_0);
  v54 = scale;
  v55 = UVScale;
  if ( viewInfo->radialMotionBlur.enabled )
  {
    Bool_Internal = Dvar_GetBool_Internal(r_mbRadialOverridePositionActive);
    v13 = r_mbRadialOverridePosition;
    v14 = Bool_Internal;
    if ( !r_mbRadialOverridePosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    LODWORD(vec.v[0]) = v13->current.integer;
    v15 = vec.v[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
    vec.v[1] = v13->current.vector.v[1];
    v16 = v13->current.vector.v[2];
    v17 = vec.v[1] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
    vec.v[0] = v15;
    vec.v[2] = v16 - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
    vec.v[1] = v17;
    vec.v[3] = FLOAT_1_0;
    MatrixTransformVector44Aligned(&vec, &viewInfo->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &out);
    if ( out.v[3] <= 0.00000011920929 )
    {
      v18 = 0i64;
    }
    else
    {
      v19 = (__m128)LODWORD(FLOAT_1_0);
      v19.m128_f32[0] = 1.0 / out.v[3];
      v18 = v19;
    }
    out = (vec4_t)_mm128_mul_ps(_mm_shuffle_ps(v18, v18, 0), (__m128)out);
    Float_Internal = Dvar_GetFloat_Internal(r_mbRadialOverrideRadius);
    if ( *(float *)&Float_Internal == 0.0 )
    {
      radius = viewInfo->radialMotionBlur.radius;
    }
    else
    {
      v21 = Dvar_GetFloat_Internal(r_mbRadialOverrideRadius);
      radius = *(float *)&v21;
    }
    v23 = Dvar_GetFloat_Internal(r_mbRadialOverrideStrength);
    if ( *(float *)&v23 <= 0.0 )
    {
      strength = viewInfo->radialMotionBlur.strength;
    }
    else
    {
      v24 = Dvar_GetFloat_Internal(r_mbRadialOverrideStrength);
      strength = *(float *)&v24;
    }
    v26 = Dvar_GetFloat_Internal(r_mbRadialOverrideChromaticAberration);
    v27 = 1.0 - *(float *)&v26;
    v28 = Dvar_GetFloat_Internal(r_mbRadialOverrideDistortion);
    v29 = *(float *)&v28;
    v30 = Dvar_GetFloat_Internal(r_mbRadialOverrideFocusDir);
    v31 = *(float *)&v30;
    v32 = Dvar_GetFloat_Internal(r_mbRadialOverrideAngleAttenuation);
    _XMM3 = LODWORD(out.v[0]) & (unsigned __int128)_xmm;
    __asm
    {
      vmaxss  xmm1, xmm3, xmm1
      vminss  xmm2, xmm1, xmm9
    }
    v36 = _XMM2;
    *(float *)&v36 = (float)(*(float *)&_XMM2 - *(float *)&v32) / (float)(1.0 - *(float *)&v32);
    _XMM0 = v36;
    __asm { vmaxss  xmm5, xmm0, xmm6 }
    if ( (float)((float)((float)(vec.v[1] * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1]) + (float)(vec.v[0] * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0])) + (float)(vec.v[2] * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2])) > 0.0 )
      v39 = 1.0 - (float)((float)(3.0 - (float)(*(float *)&_XMM5 * 2.0)) * (float)(*(float *)&_XMM5 * *(float *)&_XMM5));
    else
      v39 = 0.0;
    if ( v14 )
    {
      radius = radius * v39;
      strength = strength * v39;
      v29 = v29 * v39;
      v27 = v27 * v39;
      LODWORD(out.v[1]) ^= _xmm;
    }
    else
    {
      out.v[0] = 0.0;
      out.v[1] = 0.0;
    }
    if ( v31 == 0.0 && radius == 0.0 && v29 == 0.0 )
    {
      v40 = Dvar_GetFloat_Internal(r_mbRadialMinAllowedBlurDistance);
      radius = (float)(*(float *)&v40 * 0.00092592591) / strength;
    }
    v41 = 1.0 - radius;
    scale = v54;
    aberration = 1.0 - v27;
    UVScale = v55;
  }
  else
  {
    v41 = viewInfo->chromaticAberration.radius;
    strength = viewInfo->chromaticAberration.strength;
    aberration = viewInfo->chromaticAberration.aberration;
    out = 0i64;
    v29 = 0.0;
    v31 = 0.0;
  }
  source = gfxContext->source;
  source->input.consts[135].v[1] = strength;
  source->input.consts[135].v[0] = v41;
  source->input.consts[135].v[2] = aberration;
  source->input.consts[135].v[3] = v29;
  ++source->constVersions[135];
  v44 = out.v[1];
  v45 = out.v[0];
  source->input.consts[136].v[2] = v31;
  source->input.consts[136].v[0] = v45;
  source->input.consts[136].v[1] = v44;
  source->input.consts[136].v[3] = 0.0;
  ++source->constVersions[136];
  if ( mode )
    RB_InterpolateLensProfileParams((LensProfileMode)mode, &distort, &tcaRed, (vec3_t *)&vec, &vignette, v8, aperture);
  v46 = distort.v[1];
  source->input.consts[137].v[0] = distort.v[0];
  source->input.consts[137].v[2] = distort.v[2];
  source->input.consts[137].v[1] = v46;
  _XMM0 = (unsigned int)mode;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  v49 = vignette.v[1];
  __asm { vblendvps xmm0, xmm9, xmm6, xmm2 }
  source->input.consts[137].v[3] = *(float *)&_XMM0;
  ++source->constVersions[137];
  source->input.consts[140].v[0] = vignette.v[0];
  source->input.consts[140].v[2] = vignette.v[2];
  *(float *)&_XMM0 = tcaRed.v[0];
  source->input.consts[140].v[1] = v49;
  v51 = tcaRed.v[1];
  source->input.consts[140].v[3] = scale;
  ++source->constVersions[140];
  source->input.consts[138].v[0] = *(float *)&_XMM0;
  source->input.consts[138].v[2] = tcaRed.v[2];
  *(float *)&_XMM0 = vec.v[0];
  source->input.consts[138].v[1] = v51;
  v52 = vec.v[1];
  source->input.consts[138].v[3] = UVScale;
  ++source->constVersions[138];
  source->input.consts[139].v[0] = *(float *)&_XMM0;
  *(float *)&_XMM0 = vec.v[2];
  source->input.consts[139].v[3] = 0.0;
  source->input.consts[139].v[2] = *(float *)&_XMM0;
  source->input.consts[139].v[1] = v52;
  ++source->constVersions[139];
  return v29 == 0.0 && !mode && (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0;
}

