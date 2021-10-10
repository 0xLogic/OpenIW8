/*
==============
R_InitCmdBufState
==============
*/

void __fastcall R_InitCmdBufState(GfxCmdBufState *state)
{
  ?R_InitCmdBufState@@YAXPEAUGfxCmdBufState@@@Z(state);
}

/*
==============
R_GetTrilinearWindow
==============
*/

double __fastcall R_GetTrilinearWindow(unsigned int windowID)
{
  double result; 

  *(float *)&result = ?R_GetTrilinearWindow@@YAMI@Z(windowID);
  return result;
}

/*
==============
R_Set3D
==============
*/

void __fastcall R_Set3D(GfxCmdBufSourceState *source)
{
  ?R_Set3D@@YAXPEAUGfxCmdBufSourceState@@@Z(source);
}

/*
==============
R_GetAnisoWindow
==============
*/

double __fastcall R_GetAnisoWindow(unsigned int windowID)
{
  double result; 

  *(float *)&result = ?R_GetAnisoWindow@@YAMI@Z(windowID);
  return result;
}

/*
==============
R_DebugDuplicateAllImageReferences
==============
*/

void __fastcall R_DebugDuplicateAllImageReferences(GfxCmdBufInput *input, const char *fileAndLine)
{
  ?R_DebugDuplicateAllImageReferences@@YAXPEAUGfxCmdBufInput@@PEBD@Z(input, fileAndLine);
}

/*
==============
R_CmdBufSet3D
==============
*/

void __fastcall R_CmdBufSet3D(GfxCmdBufSourceState *source)
{
  ?R_CmdBufSet3D@@YAXPEAUGfxCmdBufSourceState@@@Z(source);
}

/*
==============
GfxCmdBufState::~GfxCmdBufState
==============
*/

void __fastcall GfxCmdBufState::~GfxCmdBufState(GfxCmdBufState *this)
{
  ??1GfxCmdBufState@@QEAA@XZ(this);
}

/*
==============
GfxCmdBufState::GfxCmdBufState
==============
*/

void __fastcall GfxCmdBufState::GfxCmdBufState(GfxCmdBufState *this, bool debugIsLocal)
{
  ??0GfxCmdBufState@@QEAA@_N@Z(this, debugIsLocal);
}

/*
==============
R_ForceSet2D
==============
*/

void __fastcall R_ForceSet2D(GfxCmdBufSourceState *source, const GfxViewport *viewport)
{
  ?R_ForceSet2D@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxViewport@@@Z(source, viewport);
}

/*
==============
GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal
==============
*/

void __fastcall GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(GfxCmdBufSourceStateLocal *this)
{
  ??1GfxCmdBufSourceStateLocal@@QEAA@XZ(this);
}

/*
==============
R_CopyCmdBufInput
==============
*/

void __fastcall R_CopyCmdBufInput(GfxCmdBufInput *dstInput, const GfxCmdBufInput *srcInput)
{
  ?R_CopyCmdBufInput@@YAXPEAUGfxCmdBufInput@@PEBU1@@Z(dstInput, srcInput);
}

/*
==============
R_FindTrilinearWindowID
==============
*/

unsigned int __fastcall R_FindTrilinearWindowID(float window)
{
  return ?R_FindTrilinearWindowID@@YAIM@Z(window);
}

/*
==============
GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal
==============
*/

void __fastcall GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(GfxCmdBufSourceStateLocal *this)
{
  ??0GfxCmdBufSourceStateLocal@@QEAA@XZ(this);
}

/*
==============
GfxCmdBufState::Copy
==============
*/

void __fastcall GfxCmdBufState::Copy(GfxCmdBufState *out, const GfxCmdBufState *in)
{
  ?Copy@GfxCmdBufState@@SAXPEAU1@PEBU1@@Z(out, in);
}

/*
==============
GfxCmdBufStateLocal::~GfxCmdBufStateLocal
==============
*/

void __fastcall GfxCmdBufStateLocal::~GfxCmdBufStateLocal(GfxCmdBufStateLocal *this)
{
  ??1GfxCmdBufStateLocal@@QEAA@XZ(this);
}

/*
==============
R_Set2D
==============
*/

void __fastcall R_Set2D(GfxCmdBufSourceState *source)
{
  ?R_Set2D@@YAXPEAUGfxCmdBufSourceState@@@Z(source);
}

/*
==============
GfxCmdBufStateLocal::GfxCmdBufStateLocal
==============
*/

void __fastcall GfxCmdBufStateLocal::GfxCmdBufStateLocal(GfxCmdBufStateLocal *this)
{
  ??0GfxCmdBufStateLocal@@QEAA@XZ(this);
}

/*
==============
R_FindAnisoWindowID
==============
*/

unsigned int __fastcall R_FindAnisoWindowID(float window)
{
  return ?R_FindAnisoWindowID@@YAIM@Z(window);
}

/*
==============
R_BeginViewInternal
==============
*/

void __fastcall R_BeginViewInternal(GfxCmdBufSourceState *source, const GfxSceneDef *sceneDef, const GfxViewParms *viewParms, const GfxViewParms *prevFrameViewParms)
{
  ?R_BeginViewInternal@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxSceneDef@@PEBUGfxViewParms@@2@Z(source, sceneDef, viewParms, prevFrameViewParms);
}

/*
==============
R_InitCmdBufSourceState
==============
*/

void __fastcall R_InitCmdBufSourceState(GfxCmdBufSourceState *source, const GfxCmdBufInput *input)
{
  ?R_InitCmdBufSourceState@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxCmdBufInput@@@Z(source, input);
}

/*
==============
GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal
==============
*/
void GfxCmdBufSourceStateLocal::GfxCmdBufSourceStateLocal(GfxCmdBufSourceStateLocal *this)
{
  Profile_Begin(121);
  DebugWipe((char *)&this->input + 7920, 0x20ui64);
  memset_0(this->input.codeImages, 0, 0x6F0ui64);
  DebugWipe(this->constVersions, 0x5FCui64);
  Profile_EndInternal(NULL);
}

/*
==============
GfxCmdBufState::GfxCmdBufState
==============
*/
void GfxCmdBufState::GfxCmdBufState(GfxCmdBufState *this, bool debugIsLocal)
{
  if ( debugIsLocal != Com_DebugMayBeOnStack<GfxCmdBufState>(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 67, ASSERT_TYPE_ASSERT, "(debugIsLocal == Com_DebugMayBeOnStack( this ))", (const char *)&queryFormat, "debugIsLocal == Com_DebugMayBeOnStack( this )") )
    __debugbreak();
  this->debugSelfPointer = this;
  this->debugIsLocal = debugIsLocal;
}

/*
==============
GfxCmdBufStateLocal::GfxCmdBufStateLocal
==============
*/
void GfxCmdBufStateLocal::GfxCmdBufStateLocal(GfxCmdBufStateLocal *this)
{
  if ( !Com_DebugMayBeOnStack<GfxCmdBufState>(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 67, ASSERT_TYPE_ASSERT, "(debugIsLocal == Com_DebugMayBeOnStack( this ))", (const char *)&queryFormat, "debugIsLocal == Com_DebugMayBeOnStack( this )", -2i64) )
    __debugbreak();
  this->debugSelfPointer = this;
  this->debugIsLocal = 1;
  if ( Sys_IsRenderThread() )
    Profile_Begin(121);
  this->rtGroup.m_colorRtCount = 0;
  this->rtGroup.m_depthRt.m_surfaceID = 0;
  this->rtGroup.m_depthRt.m_tracking.m_allocCounter = 0;
  this->rtGroup.m_depthRt.m_tracking.m_name = NULL;
  this->rtGroup.m_depthRt.m_tracking.m_location = NULL;
  this->rtGroup.m_vrsRt.m_surfaceID = 0;
  this->rtGroup.m_vrsRt.m_tracking.m_allocCounter = 0;
  this->rtGroup.m_vrsRt.m_tracking.m_name = NULL;
  this->rtGroup.m_vrsRt.m_tracking.m_location = NULL;
  this->debugSelfPointer = this;
  this->debugIsLocal = 1;
  if ( Sys_IsRenderThread() )
    Profile_EndInternal(NULL);
}

/*
==============
GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal
==============
*/
void GfxCmdBufSourceStateLocal::~GfxCmdBufSourceStateLocal(GfxCmdBufSourceStateLocal *this)
{
  ;
}

/*
==============
GfxCmdBufState::~GfxCmdBufState
==============
*/
void GfxCmdBufState::~GfxCmdBufState(GfxCmdBufState *this)
{
  if ( this->debugSelfPointer != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 75, ASSERT_TYPE_ASSERT, "(this->debugSelfPointer == this)", (const char *)&queryFormat, "this->debugSelfPointer == this", -2i64) )
    __debugbreak();
  if ( this->debugIsLocal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 76, ASSERT_TYPE_ASSERT, "(!this->debugIsLocal)", (const char *)&queryFormat, "!this->debugIsLocal") )
    __debugbreak();
  this->debugSelfPointer = NULL;
}

/*
==============
GfxCmdBufStateLocal::~GfxCmdBufStateLocal
==============
*/
void GfxCmdBufStateLocal::~GfxCmdBufStateLocal(GfxCmdBufStateLocal *this)
{
  if ( !this->debugIsLocal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 114, ASSERT_TYPE_ASSERT, "(this->debugIsLocal)", (const char *)&queryFormat, "this->debugIsLocal", -2i64) )
    __debugbreak();
  this->debugIsLocal = 0;
  R_RT_Group::AssertEmpty(&this->rtGroup);
  GfxCmdBufState::~GfxCmdBufState(this);
}

/*
==============
GfxCmdBufState::Copy
==============
*/
void GfxCmdBufState::Copy(GfxCmdBufState *out, const GfxCmdBufState *in)
{
  bool debugIsLocal; 

  if ( out == in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 83, ASSERT_TYPE_ASSERT, "(out != in)", (const char *)&queryFormat, "out != in") )
    __debugbreak();
  if ( out->debugSelfPointer != out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 84, ASSERT_TYPE_ASSERT, "(out->debugSelfPointer == out)", (const char *)&queryFormat, "out->debugSelfPointer == out") )
    __debugbreak();
  if ( in->debugSelfPointer != in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 85, ASSERT_TYPE_ASSERT, "(in->debugSelfPointer == in)", (const char *)&queryFormat, "in->debugSelfPointer == in") )
    __debugbreak();
  debugIsLocal = out->debugIsLocal;
  R_RT_Group::AssertEmpty(&out->rtGroup);
  memcpy_0(out, in, sizeof(GfxCmdBufState));
  out->debugSelfPointer = out;
  out->debugIsLocal = debugIsLocal;
  R_RT_Tracking_GroupRefIncrement(&out->rtGroup, NULL);
}

/*
==============
R_BeginViewInternal
==============
*/
void R_BeginViewInternal(GfxCmdBufSourceState *source, const GfxSceneDef *sceneDef, const GfxViewParms *viewParms, const GfxViewParms *prevFrameViewParms)
{
  GfxViewParms *p_viewParms3D; 
  __int64 v9; 
  GfxViewParms *v10; 
  __int64 v11; 
  const GfxViewParms *v12; 
  vec4_t v13; 
  GfxViewParms *p_prevFrameViewParms3D; 
  __int64 v15; 
  vec4_t v16; 
  GfxViewParms *p_viewParms; 
  __m256i v18; 
  vec4_t v19; 
  GfxMatrix *ActiveMatrixForEdit; 

  if ( !sceneDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 647, ASSERT_TYPE_ASSERT, "(sceneDef)", (const char *)&queryFormat, "sceneDef") )
    __debugbreak();
  if ( !viewParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 648, ASSERT_TYPE_ASSERT, "(viewParms)", (const char *)&queryFormat, "viewParms") )
    __debugbreak();
  p_viewParms3D = &source->viewParms3D;
  v9 = 3i64;
  source->sceneDef = *sceneDef;
  v10 = &source->viewParms3D;
  v11 = 3i64;
  v12 = viewParms;
  do
  {
    v10 = (GfxViewParms *)((char *)v10 + 128);
    v13 = v12->viewMatrix.m.m[0];
    v12 = (const GfxViewParms *)((char *)v12 + 128);
    *(vec4_t *)v10[-1].camera.origin.v = v13;
    *(_OWORD *)&v10[-1].camera.axis.row0.y = *(_OWORD *)&v12[-1].camera.axis.row0.y;
    *(_OWORD *)&v10[-1].camera.axis.row1.z = *(_OWORD *)&v12[-1].camera.axis.row1.z;
    *(_OWORD *)&v10[-1].camera.tanHalfFovX = *(_OWORD *)&v12[-1].camera.tanHalfFovX;
    *(_OWORD *)v10[-1].camera.zPlanes = *(_OWORD *)v12[-1].camera.zPlanes;
    *(_OWORD *)&v10[-1].camera.focalLength = *(_OWORD *)&v12[-1].camera.focalLength;
    *(_OWORD *)&v10[-1].camera.visibilityQueryDistance = *(_OWORD *)&v12[-1].camera.visibilityQueryDistance;
    *(_OWORD *)&v10[-1].cameraMotion = *(_OWORD *)&v12[-1].cameraMotion;
    --v11;
  }
  while ( v11 );
  p_prevFrameViewParms3D = &source->prevFrameViewParms3D;
  v15 = 3i64;
  if ( prevFrameViewParms )
    viewParms = prevFrameViewParms;
  do
  {
    p_prevFrameViewParms3D = (GfxViewParms *)((char *)p_prevFrameViewParms3D + 128);
    v16 = viewParms->viewMatrix.m.m[0];
    viewParms = (const GfxViewParms *)((char *)viewParms + 128);
    *(vec4_t *)p_prevFrameViewParms3D[-1].camera.origin.v = v16;
    *(_OWORD *)&p_prevFrameViewParms3D[-1].camera.axis.row0.y = *(_OWORD *)&viewParms[-1].camera.axis.row0.y;
    *(_OWORD *)&p_prevFrameViewParms3D[-1].camera.axis.row1.z = *(_OWORD *)&viewParms[-1].camera.axis.row1.z;
    *(_OWORD *)&p_prevFrameViewParms3D[-1].camera.tanHalfFovX = *(_OWORD *)&viewParms[-1].camera.tanHalfFovX;
    *(_OWORD *)p_prevFrameViewParms3D[-1].camera.zPlanes = *(_OWORD *)viewParms[-1].camera.zPlanes;
    *(_OWORD *)&p_prevFrameViewParms3D[-1].camera.focalLength = *(_OWORD *)&viewParms[-1].camera.focalLength;
    *(_OWORD *)&p_prevFrameViewParms3D[-1].camera.visibilityQueryDistance = *(_OWORD *)&viewParms[-1].camera.visibilityQueryDistance;
    *(_OWORD *)&p_prevFrameViewParms3D[-1].cameraMotion = *(_OWORD *)&viewParms[-1].cameraMotion;
    --v15;
  }
  while ( v15 );
  source->skinnedPlacement.base.origin.v[0] = sceneDef->viewOffset.v[0];
  source->skinnedPlacement.base.origin.v[1] = sceneDef->viewOffset.v[1];
  source->skinnedPlacement.base.origin.v[2] = sceneDef->viewOffset.v[2];
  source->skinnedPlacementPrevFrame.base.origin.v[0] = sceneDef->viewOffsetPrev.v[0];
  source->skinnedPlacementPrevFrame.base.origin.v[1] = sceneDef->viewOffsetPrev.v[1];
  source->skinnedPlacementPrevFrame.base.origin.v[2] = sceneDef->viewOffsetPrev.v[2];
  p_viewParms = &source->viewParms;
  source->viewMode = VIEW_MODE_3D;
  do
  {
    p_viewParms = (GfxViewParms *)((char *)p_viewParms + 128);
    v18 = *(__m256i *)p_viewParms3D->viewMatrix.m.m[0].v;
    v19 = p_viewParms3D->projectionMatrix.m.m[3];
    p_viewParms3D = (GfxViewParms *)((char *)p_viewParms3D + 128);
    *(__m256i *)p_viewParms[-1].camera.origin.v = v18;
    *(__m256i *)&p_viewParms[-1].camera.axis.row1.z = *(__m256i *)&p_viewParms3D[-1].camera.axis.row1.z;
    *(__m256i *)p_viewParms[-1].camera.zPlanes = *(__m256i *)p_viewParms3D[-1].camera.zPlanes;
    *(_OWORD *)&p_viewParms[-1].camera.visibilityQueryDistance = *(_OWORD *)&p_viewParms3D[-1].camera.visibilityQueryDistance;
    *(vec4_t *)&p_viewParms[-1].cameraMotion = v19;
    --v9;
  }
  while ( v9 );
  source->eyeOffset.v[0] = source->viewParms.camera.origin.v[0];
  source->eyeOffset.v[1] = source->viewParms.camera.origin.v[1];
  source->eyeOffset.v[2] = source->viewParms.camera.origin.v[2];
  source->eyeOffset.v[3] = 1.0;
  source->prevFrameEyeOffset.v[0] = source->prevFrameViewParms3D.camera.origin.v[0];
  source->prevFrameEyeOffset.v[1] = source->prevFrameViewParms3D.camera.origin.v[1];
  source->prevFrameEyeOffset.v[2] = source->prevFrameViewParms3D.camera.origin.v[2];
  source->prevFrameEyeOffset.v[3] = 1.0;
  R_MatrixNeedsRefresh(source, 0xA0u);
  R_MatrixNeedsRefresh(source, 0xA2u);
  ActiveMatrixForEdit = R_GetActiveMatrixForEdit(source, 0xAAu);
  MatrixIdentity44(&ActiveMatrixForEdit->m);
  source->input.consts[0].v[0] = source->eyeOffset.v[0];
  source->input.consts[0].v[1] = source->eyeOffset.v[1];
  source->input.consts[0].v[2] = source->eyeOffset.v[2];
  source->input.consts[0].v[3] = source->eyeOffset.v[3];
  ++source->constVersions[0];
  R_SetPreciseCodeConstantFromVec4(source, 1u, &source->eyeOffset);
  source->input.consts[11].v[0] = source->prevFrameEyeOffset.v[0];
  source->input.consts[11].v[1] = source->prevFrameEyeOffset.v[1];
  source->input.consts[11].v[2] = source->prevFrameEyeOffset.v[2];
  source->input.consts[11].v[3] = source->prevFrameEyeOffset.v[3];
  ++source->constVersions[11];
  R_SetPreciseCodeConstantFromVec4(source, 0xCu, &source->prevFrameEyeOffset);
  MatrixInverse44Aligned(&source->viewParms.viewProjectionMatrix.m, &source->inverseViewProjectionMatrixNoOrigin3D.m);
  R_SetViewportMSParams(source, 1.0);
  if ( source->materialTime != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 665, ASSERT_TYPE_ASSERT, "(!source->materialTime)", (const char *)&queryFormat, "!source->materialTime") )
    __debugbreak();
  R_SetGameTime(source, sceneDef->floatTime);
  R_SetScriptablePackedColorEmissive(source, &SCRIPTABLE_PACKED_COLOR_EMISSIVE_DEFAULT_1);
  R_SetScriptableTemperature(source, &SCRIPTABLE_TEMPERATURE_DEFAULT_1);
  R_SetMaterialEntityID(source, 0);
  R_SetEyeSensorPupilSize(source, 0.0);
}

/*
==============
R_CmdBufSet3D
==============
*/
void R_CmdBufSet3D(GfxCmdBufSourceState *source)
{
  GfxMatrix *ActiveMatrixForEdit; 

  R_MatrixNeedsRefresh(source, 0xA0u);
  R_MatrixNeedsRefresh(source, 0xA2u);
  ActiveMatrixForEdit = R_GetActiveMatrixForEdit(source, 0xAAu);
  MatrixIdentity44(&ActiveMatrixForEdit->m);
  source->input.consts[0] = source->eyeOffset;
  ++source->constVersions[0];
  R_SetPreciseCodeConstantFromVec4(source, 1u, &source->eyeOffset);
  source->input.consts[11] = source->prevFrameEyeOffset;
  ++source->constVersions[11];
  R_SetPreciseCodeConstantFromVec4(source, 0xCu, &source->prevFrameEyeOffset);
}

/*
==============
R_CopyCmdBufInput
==============
*/
void R_CopyCmdBufInput(GfxCmdBufInput *dstInput, const GfxCmdBufInput *srcInput)
{
  if ( dstInput != srcInput )
    memcpy_0(dstInput, srcInput, sizeof(GfxCmdBufInput));
}

/*
==============
R_DebugDuplicateAllImageReferences
==============
*/
void R_DebugDuplicateAllImageReferences(GfxCmdBufInput *input, const char *fileAndLine)
{
  Profile_Begin(121);
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 21, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input", -2i64) )
    __debugbreak();
  R_RT_Tracking_BatchImageRefIncrement_Input(input->codeImages, 0x56u, fileAndLine, (const GfxImage *)0xBAD14A8E90194E69i64);
  R_RT_Tracking_BatchImageRefIncrement_Input(input->codePersistentImages, 0x2Au, fileAndLine, (const GfxImage *)0xBAD14A8E90194E69i64);
  Profile_EndInternal(NULL);
}

/*
==============
R_FindAnisoWindowID
==============
*/
__int64 R_FindAnisoWindowID(float window)
{
  unsigned int i; 
  __int64 v2; 
  float v3; 
  float v4; 

  for ( i = 0; ; ++i )
  {
    v2 = i + 1;
    v3 = s_anisoWindows[v2];
    if ( v3 <= window )
    {
      v4 = s_anisoWindows[i];
      if ( window <= v4 )
        break;
    }
    if ( (_DWORD)v2 == 7 )
      return 7i64;
  }
  if ( (float)(v4 - window) <= (float)(window - v3) )
    return i;
  else
    return i + 1;
}

/*
==============
R_FindTrilinearWindowID
==============
*/
__int64 R_FindTrilinearWindowID(float window)
{
  unsigned int i; 
  __int64 v2; 
  float v3; 
  float v4; 

  for ( i = 0; ; ++i )
  {
    v2 = i + 1;
    v3 = s_trilinearWindows[v2];
    if ( v3 <= window )
    {
      v4 = s_trilinearWindows[i];
      if ( window <= v4 )
        break;
    }
    if ( (_DWORD)v2 == 15 )
      return 15i64;
  }
  if ( (float)(v4 - window) <= (float)(window - v3) )
    return i;
  else
    return i + 1;
}

/*
==============
R_ForceSet2D
==============
*/
void R_ForceSet2D(GfxCmdBufSourceState *source, const GfxViewport *viewport)
{
  float width; 
  float v7; 
  float height; 
  GfxMatrix *ActiveMatrixForEdit; 
  __int64 v10; 
  __m256i v11; 
  __m256i v12; 
  tmat44_t<vec4_t> out; 

  *((_BYTE *)source + 11668) |= 2u;
  source->viewMode = VIEW_MODE_2D;
  if ( !viewport->width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 520, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
    __debugbreak();
  if ( !viewport->height )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 521, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v10) )
      __debugbreak();
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)((char *)v11.m256i_i64 + 4) = 0ui64;
  v11.m256i_i64[3] = 0i64;
  width = (float)viewport->width;
  *(_OWORD *)v12.m256i_i8 = _XMM0;
  v7 = (float)(1.0 / width) * 2.0;
  height = (float)viewport->height;
  *(float *)v11.m256i_i32 = v7;
  *(float *)&v11.m256i_i32[5] = -2.0 / height;
  *(_OWORD *)&v12.m256i_u64[2] = _xmm;
  MatrixIdentity44(&out);
  MatrixIdentity44(&source->viewParms.viewMatrix.m);
  *(__m256i *)source->viewParms.projectionMatrix.m.m[0].v = v11;
  *(__m256i *)source->viewParms.viewProjectionMatrix.m.m[0].v = v11;
  *(__m256i *)source->viewParms.projectionMatrix.m.row2.v = v12;
  *(__m256i *)source->viewParms.viewProjectionMatrix.m.row2.v = v12;
  *(_QWORD *)source->viewParms.inverseViewProjectionMatrix.m.m[0].v = 0i64;
  *(_QWORD *)&source->viewParms.inverseViewProjectionMatrix.m.row0.xyz.z = 0i64;
  *(_QWORD *)source->viewParms.inverseViewProjectionMatrix.m.row1.v = 0i64;
  *(_QWORD *)&source->viewParms.inverseViewProjectionMatrix.m.row1.xyz.z = 0i64;
  *(_QWORD *)source->viewParms.inverseViewProjectionMatrix.m.row2.v = 0i64;
  *(_QWORD *)&source->viewParms.inverseViewProjectionMatrix.m.row2.xyz.z = 0i64;
  *(_QWORD *)source->viewParms.inverseViewProjectionMatrix.m.row3.v = 0i64;
  *(_QWORD *)&source->viewParms.inverseViewProjectionMatrix.m.row3.xyz.z = 0i64;
  R_MatrixNeedsRefresh(source, 0xA0u);
  R_MatrixNeedsRefresh(source, 0xA2u);
  ActiveMatrixForEdit = R_GetActiveMatrixForEdit(source, 0xAAu);
  ActiveMatrixForEdit->m = out;
}

/*
==============
R_GetAnisoWindow
==============
*/
float R_GetAnisoWindow(unsigned int windowID)
{
  __int64 v1; 
  int v4; 

  v1 = windowID;
  if ( windowID >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 279, ASSERT_TYPE_ASSERT, "(unsigned)( windowID ) < (unsigned)( ( sizeof( *array_counter( s_anisoWindows ) ) + 0 ) )", "windowID doesn't index ARRAY_COUNT( s_anisoWindows )\n\t%i not in [0, %i)", windowID, v4) )
      __debugbreak();
  }
  return s_anisoWindows[v1];
}

/*
==============
R_GetTrilinearWindow
==============
*/
float R_GetTrilinearWindow(unsigned int windowID)
{
  __int64 v1; 
  int v4; 

  v1 = windowID;
  if ( windowID >= 0x10 )
  {
    v4 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( windowID ) < (unsigned)( ( sizeof( *array_counter( s_trilinearWindows ) ) + 0 ) )", "windowID doesn't index ARRAY_COUNT( s_trilinearWindows )\n\t%i not in [0, %i)", windowID, v4) )
      __debugbreak();
  }
  return s_trilinearWindows[v1];
}

/*
==============
R_InitCmdBufSourceState
==============
*/
void R_InitCmdBufSourceState(GfxCmdBufSourceState *source, const GfxCmdBufInput *input)
{
  const GfxBackEndData *data; 
  LocalClientNum_t clientIndex; 
  const GfxBackEndData *v6; 
  const MaterialUpdateFrequency *v7; 
  unsigned __int16 *constVersions; 
  __int64 v9; 
  float *v10; 
  GfxCmdBufContext result; 

  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 143, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( input == &source->input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 144, ASSERT_TYPE_ASSERT, "(input != &source->input)", (const char *)&queryFormat, "input != &source->input") )
    __debugbreak();
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 145, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  memset_0(source, 0, sizeof(GfxCmdBufSourceState));
  if ( &source->input != input )
    memcpy_0(&source->input, input, sizeof(source->input));
  data = input->data;
  if ( data && data->viewInfoCount )
    clientIndex = data->viewInfo[data->viewInfoIndex].clientIndex;
  else
    clientIndex = LOCAL_CLIENT_0;
  RB_RTT_UpdateInputCodeImages(clientIndex, source);
  if ( input == &g_gfxCmdBufInput )
  {
    if ( RB_GetBackendCmdBufContext(&result)->source != source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 162, ASSERT_TYPE_ASSERT, "(RB_GetBackendCmdBufContext().source == source)", (const char *)&queryFormat, "RB_GetBackendCmdBufContext().source == source") )
      __debugbreak();
    v6 = source->input.data;
    if ( v6 && v6 != backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 163, ASSERT_TYPE_ASSERT, "(source->input.data == nullptr || source->input.data == backEndData)", (const char *)&queryFormat, "source->input.data == nullptr || source->input.data == backEndData") )
      __debugbreak();
    source->input.data = backEndData;
  }
  source->forceTransposeMatrixChange = 0;
  v7 = s_codeConstUpdateFreq;
  constVersions = source->constVersions;
  v9 = 160i64;
  v10 = &source->input.consts[0].v[2];
  do
  {
    if ( input == &g_gfxCmdBufInput || *v7 != MTL_UPDATE_STABLE )
    {
      *(v10 - 2) = 3.4028235e38;
      *(v10 - 1) = 3.4028235e38;
      *(_QWORD *)v10 = 2139095039i64;
    }
    else
    {
      *constVersions = 1;
    }
    ++constVersions;
    v10 += 4;
    ++v7;
    --v9;
  }
  while ( v9 );
  source->tess = RB_GetBackEndTess();
  if ( (source->skinnedPlacement.base.quat.v[0] != 0.0 || source->skinnedPlacement.base.quat.v[1] != 0.0 || source->skinnedPlacement.base.quat.v[2] != 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 189, ASSERT_TYPE_ASSERT, "(( source->skinnedPlacement.base.quat[0] == 0.f ) && ( source->skinnedPlacement.base.quat[1] == 0.f ) && ( source->skinnedPlacement.base.quat[2] == 0.f ))", (const char *)&queryFormat, "( source->skinnedPlacement.base.quat[0] == 0.f ) && ( source->skinnedPlacement.base.quat[1] == 0.f ) && ( source->skinnedPlacement.base.quat[2] == 0.f )") )
    __debugbreak();
  source->skinnedPlacement.base.quat.v[3] = 1.0;
  source->skinnedPlacement.scale = 1.0;
  if ( (source->skinnedPlacementPrevFrame.base.quat.v[0] != 0.0 || source->skinnedPlacementPrevFrame.base.quat.v[1] != 0.0 || source->skinnedPlacementPrevFrame.base.quat.v[2] != 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 194, ASSERT_TYPE_ASSERT, "(( source->skinnedPlacementPrevFrame.base.quat[0] == 0.f ) && ( source->skinnedPlacementPrevFrame.base.quat[1] == 0.f ) && ( source->skinnedPlacementPrevFrame.base.quat[2] == 0.f ))", (const char *)&queryFormat, "( source->skinnedPlacementPrevFrame.base.quat[0] == 0.f ) && ( source->skinnedPlacementPrevFrame.base.quat[1] == 0.f ) && ( source->skinnedPlacementPrevFrame.base.quat[2] == 0.f )") )
    __debugbreak();
  source->skinnedPlacementPrevFrame.base.quat.v[3] = 1.0;
  *((_BYTE *)source + 11668) &= 0xCFu;
  source->mtlFlagsFilter = 0;
  source->viewStatsTarget = GFX_VIEW_STATS_2D;
  source->skinnedPlacementPrevFrame.scale = 1.0;
  source->drawListType = DRAWLIST_BACKEND_COUNT;
}

/*
==============
R_InitCmdBufState
==============
*/
void R_InitCmdBufState(GfxCmdBufState *state)
{
  GfxDevice *device; 
  GfxDescriptorState *descState; 
  GfxConstantBufferAllocations *constantBufferAllocations; 
  bool debugIsLocal; 
  unsigned int i; 
  __int64 v7; 
  unsigned int j; 
  __int64 v9; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  device = state->device;
  descState = state->descState;
  constantBufferAllocations = state->constantBufferAllocations;
  if ( state->debugSelfPointer != state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 375, ASSERT_TYPE_ASSERT, "(state->debugSelfPointer == state)", (const char *)&queryFormat, "state->debugSelfPointer == state") )
    __debugbreak();
  R_RT_Group::AssertEmpty(&state->rtGroup);
  debugIsLocal = state->debugIsLocal;
  memset_0(state, 0, sizeof(GfxCmdBufState));
  state->debugSelfPointer = state;
  state->debugIsLocal = debugIsLocal;
  state->stageConfig = MTL_STAGE_CONFIG_COUNT;
  R_InitializeDefaultDeviceStates(state);
  state->device = device;
  state->commandSignatureType = GFX_COMMAND_SIGNATURE_INVALID;
  state->constantBufferAllocations = constantBufferAllocations;
  state->descState = descState;
  state->primType = 4;
  state->indexType = DXGI_FORMAT_R16_UINT;
  state->pipelineStateDirty = 1;
  state->depthRangeType = GFX_DEPTH_RANGE_FULL;
  *(_QWORD *)&state->depthRangeNear = 1065353216i64;
  state->rtGroup.m_colorRtCount = 0;
  state->rtGroup.m_depthRt.m_surfaceID = 0;
  state->rtGroup.m_depthRt.m_tracking.m_allocCounter = 0;
  state->rtGroup.m_depthRt.m_tracking.m_name = NULL;
  state->rtGroup.m_depthRt.m_tracking.m_location = NULL;
  state->rtGroup.m_vrsRt.m_surfaceID = 0;
  state->rtGroup.m_vrsRt.m_tracking.m_allocCounter = 0;
  state->rtGroup.m_vrsRt.m_tracking.m_name = NULL;
  state->rtGroup.m_vrsRt.m_tracking.m_location = NULL;
  state->refStateBits.otherBits = 0x1000000040i64;
  state->refStateBits.blendBits = GFXS_BLEND_INVALID;
  state->depthBoundsMin = 0.0;
  state->depthBoundsMax = 1.0;
  *(_QWORD *)&state->perPrimConstantBoundSize = 0i64;
  state->stableConstantBoundSize = 0;
  R_SetCompleteState(state, &state->refStateBits);
  R_SetPrimType(state, 4u);
  for ( i = 0; i < 3; ++i )
  {
    v7 = (unsigned __int8)i;
    state->resourcesDirty[v7] = 0i64;
    state->resourcesClear[v7] = 0i64;
  }
  for ( j = 0; j < 4; ++j )
  {
    v9 = (unsigned __int8)j;
    state->constantsDirty[v9] = 0;
  }
  *(_QWORD *)&state->scissor.x = -1i64;
  state->dynamicIndexBuffer = &gfxBuf.dynamicIndexBuffer;
  *(_QWORD *)&state->scissor.width = -1i64;
  state->dynamicVertexBuffer = &gfxBuf.dynamicVertexBuffer;
  state->dynamicBufferOverflow = 0;
  R_ClearAllDynDescriptorRanges(state);
  R_ClearAllVertexBuffers(state);
  *(_QWORD *)&state->customPixelShaderViewIndex = 0i64;
  state->customPixelShaderRWTextureIndex = 0;
  R_InitGfxComputeCmdBufState(state, state);
}

/*
==============
R_Set2D
==============
*/
void R_Set2D(GfxCmdBufSourceState *source)
{
  unsigned int width; 
  unsigned int height; 
  float v6; 
  float v7; 
  __m256i v8; 
  __m256i v9; 
  GfxMatrix *ActiveMatrixForEdit; 
  __int64 v11; 
  GfxViewport outViewport; 
  __m256i v13; 
  __m256i v14; 
  tmat44_t<vec4_t> out; 

  if ( source->viewMode != VIEW_MODE_2D )
  {
    if ( source->viewportTransformOverride.width )
    {
      _XMM0 = source->viewportTransformOverride;
      outViewport = _XMM0;
    }
    else
    {
      R_GetViewport(source, &outViewport);
    }
    *((_BYTE *)source + 11668) |= 2u;
    width = outViewport.width;
    source->viewMode = VIEW_MODE_2D;
    if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 520, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
      __debugbreak();
    height = outViewport.height;
    if ( !outViewport.height )
    {
      LODWORD(v11) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 521, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v11) )
        __debugbreak();
      height = outViewport.height;
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v6 = (float)outViewport.width;
    *(_OWORD *)v14.m256i_i8 = _XMM0;
    v7 = (float)height;
    *(float *)v13.m256i_i32 = 2.0 / v6;
    *(_OWORD *)&v14.m256i_u64[2] = _xmm;
    *(float *)&v13.m256i_i32[5] = -2.0 / v7;
    *(__int64 *)((char *)v13.m256i_i64 + 4) = 0i64;
    *(__int64 *)((char *)&v13.m256i_i64[1] + 4) = 0i64;
    v13.m256i_i64[3] = 0i64;
    MatrixIdentity44(&out);
    MatrixIdentity44(&source->viewParms.viewMatrix.m);
    v8 = v13;
    v9 = v14;
    *(__m256i *)source->viewParms.projectionMatrix.m.m[0].v = v13;
    *(__m256i *)source->viewParms.viewProjectionMatrix.m.m[0].v = v8;
    *(__m256i *)source->viewParms.projectionMatrix.m.row2.v = v9;
    *(__m256i *)source->viewParms.viewProjectionMatrix.m.row2.v = v9;
    *(_QWORD *)source->viewParms.inverseViewProjectionMatrix.m.m[0].v = 0i64;
    *(_QWORD *)&source->viewParms.inverseViewProjectionMatrix.m.row0.xyz.z = 0i64;
    *(_QWORD *)source->viewParms.inverseViewProjectionMatrix.m.row1.v = 0i64;
    *(_QWORD *)&source->viewParms.inverseViewProjectionMatrix.m.row1.xyz.z = 0i64;
    *(_QWORD *)source->viewParms.inverseViewProjectionMatrix.m.row2.v = 0i64;
    *(_QWORD *)&source->viewParms.inverseViewProjectionMatrix.m.row2.xyz.z = 0i64;
    *(_QWORD *)source->viewParms.inverseViewProjectionMatrix.m.row3.v = 0i64;
    *(_QWORD *)&source->viewParms.inverseViewProjectionMatrix.m.row3.xyz.z = 0i64;
    R_MatrixNeedsRefresh(source, 0xA0u);
    R_MatrixNeedsRefresh(source, 0xA2u);
    ActiveMatrixForEdit = R_GetActiveMatrixForEdit(source, 0xAAu);
    ActiveMatrixForEdit->m = out;
    *(_QWORD *)source->eyeOffset.v = 0i64;
    source->eyeOffset.v[2] = 0.0;
    *(_QWORD *)(&source->eyeOffset.xyz + 1) = 1065353216i64;
    *(_QWORD *)&source->prevFrameEyeOffset.xyz.y = 0i64;
    source->prevFrameEyeOffset.v[3] = 1.0;
    source->input.consts[0].v[0] = source->eyeOffset.v[0];
    source->input.consts[0].v[1] = source->eyeOffset.v[1];
    source->input.consts[0].v[2] = source->eyeOffset.v[2];
    source->input.consts[0].v[3] = source->eyeOffset.v[3];
    ++source->constVersions[0];
    R_SetPreciseCodeConstantFromVec4(source, 1u, &source->eyeOffset);
    source->input.consts[11].v[0] = source->prevFrameEyeOffset.v[0];
    source->input.consts[11].v[1] = source->prevFrameEyeOffset.v[1];
    source->input.consts[11].v[2] = source->prevFrameEyeOffset.v[2];
    source->input.consts[11].v[3] = source->prevFrameEyeOffset.v[3];
    ++source->constVersions[11];
    R_SetPreciseCodeConstantFromVec4(source, 0xCu, &source->prevFrameEyeOffset);
  }
}

/*
==============
R_Set3D
==============
*/
void R_Set3D(GfxCmdBufSourceState *source)
{
  GfxViewParms *p_viewParms; 
  GfxViewParms *p_viewParms3D; 
  __int64 v4; 
  __m256i v5; 
  vec4_t v6; 
  GfxMatrix *ActiveMatrixForEdit; 

  if ( source->viewMode != VIEW_MODE_3D )
  {
    p_viewParms = &source->viewParms;
    source->viewMode = VIEW_MODE_3D;
    p_viewParms3D = &source->viewParms3D;
    v4 = 3i64;
    do
    {
      p_viewParms = (GfxViewParms *)((char *)p_viewParms + 128);
      v5 = *(__m256i *)p_viewParms3D->viewMatrix.m.m[0].v;
      v6 = p_viewParms3D->projectionMatrix.m.m[3];
      p_viewParms3D = (GfxViewParms *)((char *)p_viewParms3D + 128);
      *(__m256i *)p_viewParms[-1].camera.origin.v = v5;
      *(__m256i *)&p_viewParms[-1].camera.axis.row1.z = *(__m256i *)&p_viewParms3D[-1].camera.axis.row1.z;
      *(__m256i *)p_viewParms[-1].camera.zPlanes = *(__m256i *)p_viewParms3D[-1].camera.zPlanes;
      *(_OWORD *)&p_viewParms[-1].camera.visibilityQueryDistance = *(_OWORD *)&p_viewParms3D[-1].camera.visibilityQueryDistance;
      *(vec4_t *)&p_viewParms[-1].cameraMotion = v6;
      --v4;
    }
    while ( v4 );
    source->eyeOffset.v[0] = source->viewParms.camera.origin.v[0];
    source->eyeOffset.v[1] = source->viewParms.camera.origin.v[1];
    source->eyeOffset.v[2] = source->viewParms.camera.origin.v[2];
    source->eyeOffset.v[3] = 1.0;
    source->prevFrameEyeOffset.v[0] = source->prevFrameViewParms3D.camera.origin.v[0];
    source->prevFrameEyeOffset.v[1] = source->prevFrameViewParms3D.camera.origin.v[1];
    source->prevFrameEyeOffset.v[2] = source->prevFrameViewParms3D.camera.origin.v[2];
    source->prevFrameEyeOffset.v[3] = 1.0;
    R_MatrixNeedsRefresh(source, 0xA0u);
    R_MatrixNeedsRefresh(source, 0xA2u);
    ActiveMatrixForEdit = R_GetActiveMatrixForEdit(source, 0xAAu);
    MatrixIdentity44(&ActiveMatrixForEdit->m);
    source->input.consts[0].v[0] = source->eyeOffset.v[0];
    source->input.consts[0].v[1] = source->eyeOffset.v[1];
    source->input.consts[0].v[2] = source->eyeOffset.v[2];
    source->input.consts[0].v[3] = source->eyeOffset.v[3];
    ++source->constVersions[0];
    R_SetPreciseCodeConstantFromVec4(source, 1u, &source->eyeOffset);
    source->input.consts[11].v[0] = source->prevFrameEyeOffset.v[0];
    source->input.consts[11].v[1] = source->prevFrameEyeOffset.v[1];
    source->input.consts[11].v[2] = source->prevFrameEyeOffset.v[2];
    source->input.consts[11].v[3] = source->prevFrameEyeOffset.v[3];
    ++source->constVersions[11];
    R_SetPreciseCodeConstantFromVec4(source, 0xCu, &source->prevFrameEyeOffset);
  }
}

