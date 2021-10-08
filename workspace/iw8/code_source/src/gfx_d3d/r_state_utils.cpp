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
  __int64 v11; 
  __int64 v13; 
  __int64 v24; 
  GfxMatrix *ActiveMatrixForEdit; 
  char v42; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = viewParms;
  _RBP = sceneDef;
  _RSI = source;
  if ( !sceneDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 647, ASSERT_TYPE_ASSERT, "(sceneDef)", (const char *)&queryFormat, "sceneDef") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 648, ASSERT_TYPE_ASSERT, "(viewParms)", (const char *)&queryFormat, "viewParms") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rbp+0] }
  _RCX = &_RSI->viewParms3D;
  v11 = 3i64;
  __asm { vmovups ymmword ptr [rsi+2CE4h], ymm0 }
  _RAX = &_RSI->viewParms3D;
  v13 = 3i64;
  _RDX = _RBX;
  do
  {
    _RAX = (GfxViewParms *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rdx] }
    _RDX = (const GfxViewParms *)((char *)_RDX + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rdx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rdx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rdx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rdx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rdx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rdx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v13;
  }
  while ( v13 );
  _RAX = &_RSI->prevFrameViewParms3D;
  v24 = 3i64;
  if ( prevFrameViewParms )
    _RBX = prevFrameViewParms;
  do
  {
    _RAX = (GfxViewParms *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    _RBX = (const GfxViewParms *)((char *)_RBX + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rbx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rbx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rbx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rbx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rbx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rbx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rbx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v24;
  }
  while ( v24 );
  _RSI->skinnedPlacement.base.origin.v[0] = _RBP->viewOffset.v[0];
  _RSI->skinnedPlacement.base.origin.v[1] = _RBP->viewOffset.v[1];
  _RSI->skinnedPlacement.base.origin.v[2] = _RBP->viewOffset.v[2];
  _RSI->skinnedPlacementPrevFrame.base.origin.v[0] = _RBP->viewOffsetPrev.v[0];
  _RSI->skinnedPlacementPrevFrame.base.origin.v[1] = _RBP->viewOffsetPrev.v[1];
  _RSI->skinnedPlacementPrevFrame.base.origin.v[2] = _RBP->viewOffsetPrev.v[2];
  _RAX = &_RSI->viewParms;
  _RSI->viewMode = VIEW_MODE_3D;
  do
  {
    _RAX = (GfxViewParms *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups xmm1, xmmword ptr [rcx+70h]
    }
    _RCX = (GfxViewParms *)((char *)_RCX + 128);
    __asm
    {
      vmovups ymmword ptr [rax-80h], ymm0
      vmovups ymm0, ymmword ptr [rcx-60h]
      vmovups ymmword ptr [rax-60h], ymm0
      vmovups ymm0, ymmword ptr [rcx-40h]
      vmovups ymmword ptr [rax-40h], ymm0
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v11;
  }
  while ( v11 );
  _RSI->eyeOffset.v[0] = _RSI->viewParms.camera.origin.v[0];
  _RSI->eyeOffset.v[1] = _RSI->viewParms.camera.origin.v[1];
  _RSI->eyeOffset.v[2] = _RSI->viewParms.camera.origin.v[2];
  _RSI->eyeOffset.v[3] = 1.0;
  _RSI->prevFrameEyeOffset.v[0] = _RSI->prevFrameViewParms3D.camera.origin.v[0];
  _RSI->prevFrameEyeOffset.v[1] = _RSI->prevFrameViewParms3D.camera.origin.v[1];
  _RSI->prevFrameEyeOffset.v[2] = _RSI->prevFrameViewParms3D.camera.origin.v[2];
  _RSI->prevFrameEyeOffset.v[3] = 1.0;
  R_MatrixNeedsRefresh(_RSI, 0xA0u);
  R_MatrixNeedsRefresh(_RSI, 0xA2u);
  ActiveMatrixForEdit = R_GetActiveMatrixForEdit(_RSI, 0xAAu);
  MatrixIdentity44(&ActiveMatrixForEdit->m);
  _RSI->input.consts[0].v[0] = _RSI->eyeOffset.v[0];
  _RSI->input.consts[0].v[1] = _RSI->eyeOffset.v[1];
  _RSI->input.consts[0].v[2] = _RSI->eyeOffset.v[2];
  _RSI->input.consts[0].v[3] = _RSI->eyeOffset.v[3];
  ++_RSI->constVersions[0];
  R_SetPreciseCodeConstantFromVec4(_RSI, 1u, &_RSI->eyeOffset);
  _RSI->input.consts[11].v[0] = _RSI->prevFrameEyeOffset.v[0];
  _RSI->input.consts[11].v[1] = _RSI->prevFrameEyeOffset.v[1];
  _RSI->input.consts[11].v[2] = _RSI->prevFrameEyeOffset.v[2];
  _RSI->input.consts[11].v[3] = _RSI->prevFrameEyeOffset.v[3];
  ++_RSI->constVersions[11];
  R_SetPreciseCodeConstantFromVec4(_RSI, 0xCu, &_RSI->prevFrameEyeOffset);
  MatrixInverse44Aligned(&_RSI->viewParms.viewProjectionMatrix.m, &_RSI->inverseViewProjectionMatrixNoOrigin3D.m);
  __asm { vmovss  xmm1, cs:__real@3f800000; msScale }
  R_SetViewportMSParams(_RSI, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rsi+2D28h]
  }
  if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 665, ASSERT_TYPE_ASSERT, "(!source->materialTime)", (const char *)&queryFormat, "!source->materialTime") )
    __debugbreak();
  __asm { vmovss  xmm1, dword ptr [rbp+4]; gameTime }
  R_SetGameTime(_RSI, *(float *)&_XMM1);
  R_SetScriptablePackedColorEmissive(_RSI, &SCRIPTABLE_PACKED_COLOR_EMISSIVE_DEFAULT_1);
  R_SetScriptableTemperature(_RSI, &SCRIPTABLE_TEMPERATURE_DEFAULT_1);
  R_SetMaterialEntityID(_RSI, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; eyePupilSize
    vmovaps xmm6, [rsp+48h+var_18]
  }
  R_SetEyeSensorPupilSize(_RSI, *(float *)&_XMM1);
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

__int64 __fastcall R_FindAnisoWindowID(double window)
{
  bool v1; 
  unsigned int v2; 

  v1 = 1;
  v2 = 0;
  _R8 = s_anisoWindows;
  while ( 1 )
  {
    _RDX = v2 + 1;
    __asm
    {
      vmovss  xmm2, dword ptr [r8+rdx*4]
      vcomiss xmm2, xmm0
    }
    if ( v1 )
    {
      _RAX = v2;
      __asm
      {
        vmovss  xmm1, dword ptr [r8+rax*4]
        vcomiss xmm0, xmm1
      }
      if ( v1 )
        break;
    }
    ++v2;
    v1 = (unsigned int)_RDX <= 7;
    if ( (_DWORD)_RDX == 7 )
      return 7i64;
  }
  __asm
  {
    vsubss  xmm1, xmm1, xmm0
    vsubss  xmm0, xmm0, xmm2
    vcomiss xmm1, xmm0
  }
  return v2;
}

/*
==============
R_FindTrilinearWindowID
==============
*/

__int64 __fastcall R_FindTrilinearWindowID(double window)
{
  bool v1; 
  unsigned int v2; 

  v1 = 1;
  v2 = 0;
  _R8 = s_trilinearWindows;
  while ( 1 )
  {
    _RDX = v2 + 1;
    __asm
    {
      vmovss  xmm2, dword ptr [r8+rdx*4]
      vcomiss xmm2, xmm0
    }
    if ( v1 )
    {
      _RAX = v2;
      __asm
      {
        vmovss  xmm1, dword ptr [r8+rax*4]
        vcomiss xmm0, xmm1
      }
      if ( v1 )
        break;
    }
    ++v2;
    v1 = (unsigned int)_RDX <= 0xF;
    if ( (_DWORD)_RDX == 15 )
      return 15i64;
  }
  __asm
  {
    vsubss  xmm1, xmm1, xmm0
    vsubss  xmm0, xmm0, xmm2
    vcomiss xmm1, xmm0
  }
  return v2;
}

/*
==============
R_ForceSet2D
==============
*/
void R_ForceSet2D(GfxCmdBufSourceState *source, const GfxViewport *viewport)
{
  __int64 v22; 
  __m256i v23; 
  tmat44_t<vec4_t> out; 

  *((_BYTE *)source + 11668) |= 2u;
  source->viewMode = VIEW_MODE_2D;
  _RDI = source;
  if ( !viewport->width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 520, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
    __debugbreak();
  if ( !viewport->height )
  {
    LODWORD(v22) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 521, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v22) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vpxor   xmm0, xmm0, xmm0
  }
  *(_OWORD *)((char *)v23.m256i_i64 + 4) = 0ui64;
  v23.m256i_i64[3] = 0i64;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, rax
    vmovdqu xmmword ptr [rsp+0C8h+var_78], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm1, xmm0, xmm1
    vmulss  xmm2, xmm1, cs:__real@40000000
    vmovss  xmm0, cs:__real@c0000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  dword ptr [rsp+0C8h+var_98], xmm2
    vmovups xmm2, cs:__xmm@3f800000000000003f800000bf800000
    vdivss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rsp+0C8h+var_98+14h], xmm1
    vmovups xmmword ptr [rsp+0C8h+var_78+10h], xmm2
  }
  MatrixIdentity44(&out);
  MatrixIdentity44(&_RDI->viewParms.viewMatrix.m);
  __asm
  {
    vmovups ymm1, [rsp+0C8h+var_98]
    vmovups ymm0, [rsp+0C8h+var_78]
    vmovups ymmword ptr [rdi+2650h], ymm1
    vmovups ymmword ptr [rdi+2690h], ymm1
    vmovups ymmword ptr [rdi+2670h], ymm0
    vmovups ymmword ptr [rdi+26B0h], ymm0
  }
  *(_QWORD *)_RDI->viewParms.inverseViewProjectionMatrix.m.m[0].v = 0i64;
  *(_QWORD *)&_RDI->viewParms.inverseViewProjectionMatrix.m.row0.xyz.z = 0i64;
  *(_QWORD *)_RDI->viewParms.inverseViewProjectionMatrix.m.row1.v = 0i64;
  *(_QWORD *)&_RDI->viewParms.inverseViewProjectionMatrix.m.row1.xyz.z = 0i64;
  *(_QWORD *)_RDI->viewParms.inverseViewProjectionMatrix.m.row2.v = 0i64;
  *(_QWORD *)&_RDI->viewParms.inverseViewProjectionMatrix.m.row2.xyz.z = 0i64;
  *(_QWORD *)_RDI->viewParms.inverseViewProjectionMatrix.m.row3.v = 0i64;
  *(_QWORD *)&_RDI->viewParms.inverseViewProjectionMatrix.m.row3.xyz.z = 0i64;
  R_MatrixNeedsRefresh(_RDI, 0xA0u);
  R_MatrixNeedsRefresh(_RDI, 0xA2u);
  _RAX = R_GetActiveMatrixForEdit(_RDI, 0xAAu);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+out]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm1, ymmword ptr [rsp+0C8h+out+20h]
    vmovups ymmword ptr [rax+20h], ymm1
  }
}

/*
==============
R_GetAnisoWindow
==============
*/
float R_GetAnisoWindow(unsigned int windowID)
{
  int v6; 

  _RBX = windowID;
  if ( windowID >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 279, ASSERT_TYPE_ASSERT, "(unsigned)( windowID ) < (unsigned)( ( sizeof( *array_counter( s_anisoWindows ) ) + 0 ) )", "windowID doesn't index ARRAY_COUNT( s_anisoWindows )\n\t%i not in [0, %i)", windowID, v6) )
      __debugbreak();
  }
  _RCX = s_anisoWindows;
  __asm { vmovss  xmm0, dword ptr [rcx+rbx*4] }
  return *(float *)&_XMM0;
}

/*
==============
R_GetTrilinearWindow
==============
*/
float R_GetTrilinearWindow(unsigned int windowID)
{
  int v6; 

  _RBX = windowID;
  if ( windowID >= 0x10 )
  {
    v6 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( windowID ) < (unsigned)( ( sizeof( *array_counter( s_trilinearWindows ) ) + 0 ) )", "windowID doesn't index ARRAY_COUNT( s_trilinearWindows )\n\t%i not in [0, %i)", windowID, v6) )
      __debugbreak();
  }
  _RCX = s_trilinearWindows;
  __asm { vmovss  xmm0, dword ptr [rcx+rbx*4] }
  return *(float *)&_XMM0;
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
  const GfxBackEndData *v7; 
  const MaterialUpdateFrequency *v8; 
  unsigned __int16 *constVersions; 
  __int64 v10; 
  _QWORD *p_z; 
  bool v13; 
  bool v14; 
  GfxCmdBufContext result; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = source;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 143, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( input == &_RBX->input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 144, ASSERT_TYPE_ASSERT, "(input != &source->input)", (const char *)&queryFormat, "input != &source->input") )
    __debugbreak();
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 145, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  memset_0(_RBX, 0, sizeof(GfxCmdBufSourceState));
  if ( &_RBX->input != input )
    memcpy_0(&_RBX->input, input, sizeof(_RBX->input));
  data = input->data;
  if ( data && data->viewInfoCount )
    clientIndex = data->viewInfo[data->viewInfoIndex].clientIndex;
  else
    clientIndex = LOCAL_CLIENT_0;
  RB_RTT_UpdateInputCodeImages(clientIndex, _RBX);
  if ( input == &g_gfxCmdBufInput )
  {
    if ( RB_GetBackendCmdBufContext(&result)->source != _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 162, ASSERT_TYPE_ASSERT, "(RB_GetBackendCmdBufContext().source == source)", (const char *)&queryFormat, "RB_GetBackendCmdBufContext().source == source") )
      __debugbreak();
    v7 = _RBX->input.data;
    if ( v7 && v7 != backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 163, ASSERT_TYPE_ASSERT, "(source->input.data == nullptr || source->input.data == backEndData)", (const char *)&queryFormat, "source->input.data == nullptr || source->input.data == backEndData") )
      __debugbreak();
    _RBX->input.data = backEndData;
  }
  _RBX->forceTransposeMatrixChange = 0;
  v8 = s_codeConstUpdateFreq;
  constVersions = _RBX->constVersions;
  v10 = 160i64;
  p_z = (_QWORD *)&_RBX->input.consts[0].xyz.z;
  do
  {
    if ( input == &g_gfxCmdBufInput || *v8 != MTL_UPDATE_STABLE )
    {
      *((_DWORD *)p_z - 2) = 2139095039;
      *((_DWORD *)p_z - 1) = 2139095039;
      *p_z = 2139095039i64;
    }
    else
    {
      *constVersions = 1;
    }
    ++constVersions;
    p_z += 2;
    ++v8;
    --v10;
  }
  while ( v10 );
  __asm { vxorps  xmm6, xmm6, xmm6 }
  _RBX->tess = RB_GetBackEndTess();
  __asm { vucomiss xmm6, dword ptr [rbx+2C74h] }
  if ( !v13 )
    goto LABEL_44;
  __asm { vucomiss xmm6, dword ptr [rbx+2C78h] }
  if ( !v13 )
    goto LABEL_44;
  __asm { vucomiss xmm6, dword ptr [rbx+2C7Ch] }
  if ( !v13 )
  {
LABEL_44:
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 189, ASSERT_TYPE_ASSERT, "(( source->skinnedPlacement.base.quat[0] == 0.f ) && ( source->skinnedPlacement.base.quat[1] == 0.f ) && ( source->skinnedPlacement.base.quat[2] == 0.f ))", (const char *)&queryFormat, "( source->skinnedPlacement.base.quat[0] == 0.f ) && ( source->skinnedPlacement.base.quat[1] == 0.f ) && ( source->skinnedPlacement.base.quat[2] == 0.f )");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  _RBX->skinnedPlacement.base.quat.v[3] = 1.0;
  _RBX->skinnedPlacement.scale = 1.0;
  __asm { vucomiss xmm6, dword ptr [rbx+2CC0h] }
  if ( !v13 )
    goto LABEL_45;
  __asm { vucomiss xmm6, dword ptr [rbx+2CC4h] }
  if ( !v13 )
    goto LABEL_45;
  __asm { vucomiss xmm6, dword ptr [rbx+2CC8h] }
  if ( !v13 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 194, ASSERT_TYPE_ASSERT, "(( source->skinnedPlacementPrevFrame.base.quat[0] == 0.f ) && ( source->skinnedPlacementPrevFrame.base.quat[1] == 0.f ) && ( source->skinnedPlacementPrevFrame.base.quat[2] == 0.f ))", (const char *)&queryFormat, "( source->skinnedPlacementPrevFrame.base.quat[0] == 0.f ) && ( source->skinnedPlacementPrevFrame.base.quat[1] == 0.f ) && ( source->skinnedPlacementPrevFrame.base.quat[2] == 0.f )") )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  _RBX->skinnedPlacementPrevFrame.base.quat.v[3] = 1.0;
  *((_BYTE *)_RBX + 11668) &= 0xCFu;
  _RBX->mtlFlagsFilter = 0;
  _RBX->viewStatsTarget = GFX_VIEW_STATS_2D;
  _RBX->skinnedPlacementPrevFrame.scale = 1.0;
  _RBX->drawListType = DRAWLIST_BACKEND_COUNT;
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

void __fastcall R_Set2D(GfxCmdBufSourceState *source, double _XMM1_8, double _XMM2_8)
{
  unsigned int width; 
  __int64 v21; 
  GfxViewport outViewport; 
  __m256i v23; 
  tmat44_t<vec4_t> out; 

  _RDI = source;
  if ( source->viewMode != VIEW_MODE_2D )
  {
    if ( source->viewportTransformOverride.width )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+2D14h]
        vmovups xmmword ptr [rsp+0D8h+outViewport.x], xmm0
      }
    }
    else
    {
      R_GetViewport(source, &outViewport);
    }
    *((_BYTE *)_RDI + 11668) |= 2u;
    width = outViewport.width;
    _RDI->viewMode = VIEW_MODE_2D;
    if ( !width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 520, ASSERT_TYPE_ASSERT, "( ( viewport->width > 0 ) )", "( viewport->width ) = %i", 0) )
      __debugbreak();
    if ( !outViewport.height )
    {
      LODWORD(v21) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state_utils.cpp", 521, ASSERT_TYPE_ASSERT, "( ( viewport->height > 0 ) )", "( viewport->height ) = %i", v21) )
        __debugbreak();
    }
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmovdqu xmmword ptr [rsp+0D8h+var_78], xmm0
      vmovss  xmm0, cs:__real@40000000
      vdivss  xmm1, xmm0, xmm1
      vmovss  xmm0, cs:__real@c0000000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, rax
      vmovss  dword ptr [rsp+0D8h+var_98], xmm1
      vdivss  xmm1, xmm0, xmm2
      vmovups xmm2, cs:__xmm@3f800000000000003f800000bf800000
      vmovups xmmword ptr [rsp+0D8h+var_78+10h], xmm2
      vmovss  dword ptr [rsp+0D8h+var_98+14h], xmm1
    }
    *(__int64 *)((char *)v23.m256i_i64 + 4) = 0i64;
    *(__int64 *)((char *)&v23.m256i_i64[1] + 4) = 0i64;
    v23.m256i_i64[3] = 0i64;
    MatrixIdentity44(&out);
    MatrixIdentity44(&_RDI->viewParms.viewMatrix.m);
    __asm
    {
      vmovups ymm1, [rsp+0D8h+var_98]
      vmovups ymm0, [rsp+0D8h+var_78]
      vmovups ymmword ptr [rdi+2650h], ymm1
      vmovups ymmword ptr [rdi+2690h], ymm1
      vmovups ymmword ptr [rdi+2670h], ymm0
      vmovups ymmword ptr [rdi+26B0h], ymm0
    }
    *(_QWORD *)_RDI->viewParms.inverseViewProjectionMatrix.m.m[0].v = 0i64;
    *(_QWORD *)&_RDI->viewParms.inverseViewProjectionMatrix.m.row0.xyz.z = 0i64;
    *(_QWORD *)_RDI->viewParms.inverseViewProjectionMatrix.m.row1.v = 0i64;
    *(_QWORD *)&_RDI->viewParms.inverseViewProjectionMatrix.m.row1.xyz.z = 0i64;
    *(_QWORD *)_RDI->viewParms.inverseViewProjectionMatrix.m.row2.v = 0i64;
    *(_QWORD *)&_RDI->viewParms.inverseViewProjectionMatrix.m.row2.xyz.z = 0i64;
    *(_QWORD *)_RDI->viewParms.inverseViewProjectionMatrix.m.row3.v = 0i64;
    *(_QWORD *)&_RDI->viewParms.inverseViewProjectionMatrix.m.row3.xyz.z = 0i64;
    R_MatrixNeedsRefresh(_RDI, 0xA0u);
    R_MatrixNeedsRefresh(_RDI, 0xA2u);
    _RAX = R_GetActiveMatrixForEdit(_RDI, 0xAAu);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0D8h+out]
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm1, ymmword ptr [rsp+0D8h+out+20h]
      vmovups ymmword ptr [rax+20h], ymm1
    }
    *(_QWORD *)_RDI->eyeOffset.v = 0i64;
    _RDI->eyeOffset.v[2] = 0.0;
    *(_QWORD *)(&_RDI->eyeOffset.xyz + 1) = 1065353216i64;
    *(_QWORD *)&_RDI->prevFrameEyeOffset.xyz.y = 0i64;
    _RDI->prevFrameEyeOffset.v[3] = 1.0;
    _RDI->input.consts[0].v[0] = _RDI->eyeOffset.v[0];
    _RDI->input.consts[0].v[1] = _RDI->eyeOffset.v[1];
    _RDI->input.consts[0].v[2] = _RDI->eyeOffset.v[2];
    _RDI->input.consts[0].v[3] = _RDI->eyeOffset.v[3];
    ++_RDI->constVersions[0];
    R_SetPreciseCodeConstantFromVec4(_RDI, 1u, &_RDI->eyeOffset);
    _RDI->input.consts[11].v[0] = _RDI->prevFrameEyeOffset.v[0];
    _RDI->input.consts[11].v[1] = _RDI->prevFrameEyeOffset.v[1];
    _RDI->input.consts[11].v[2] = _RDI->prevFrameEyeOffset.v[2];
    _RDI->input.consts[11].v[3] = _RDI->prevFrameEyeOffset.v[3];
    ++_RDI->constVersions[11];
    R_SetPreciseCodeConstantFromVec4(_RDI, 0xCu, &_RDI->prevFrameEyeOffset);
  }
}

/*
==============
R_Set3D
==============
*/
void R_Set3D(GfxCmdBufSourceState *source)
{
  __int64 v4; 
  GfxMatrix *ActiveMatrixForEdit; 

  if ( source->viewMode != VIEW_MODE_3D )
  {
    _RAX = &source->viewParms;
    source->viewMode = VIEW_MODE_3D;
    _RDX = &source->viewParms3D;
    v4 = 3i64;
    do
    {
      _RAX = (GfxViewParms *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymm0, ymmword ptr [rdx]
        vmovups xmm1, xmmword ptr [rdx+70h]
      }
      _RDX = (GfxViewParms *)((char *)_RDX + 128);
      __asm
      {
        vmovups ymmword ptr [rax-80h], ymm0
        vmovups ymm0, ymmword ptr [rdx-60h]
        vmovups ymmword ptr [rax-60h], ymm0
        vmovups ymm0, ymmword ptr [rdx-40h]
        vmovups ymmword ptr [rax-40h], ymm0
        vmovups xmm0, xmmword ptr [rdx-20h]
        vmovups xmmword ptr [rax-20h], xmm0
        vmovups xmmword ptr [rax-10h], xmm1
      }
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

