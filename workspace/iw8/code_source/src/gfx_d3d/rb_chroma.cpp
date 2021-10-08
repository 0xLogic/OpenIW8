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
  int v31; 
  int v74; 
  __int64 v78; 
  int v130; 

  _R12 = vignette;
  _RBP = tcaBlue;
  __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
  _RSI = tcaRed;
  _RDI = distort;
  switch ( lensProfileMode )
  {
    case LENS_PROFILE_NONE:
      break;
    case LENS_PROFILE_COMPACT_PORTABLE:
      _R13 = &s_lensProfile_CompactPortable;
      goto LABEL_12;
    case LENS_PROFILE_SMARTPHONE:
      _RBX = &s_lensProfile_Smartphone;
      goto LABEL_8;
    case LENS_PROFILE_CINEMATIC_PRIME:
      _RBX = &s_lensProfile_CinematicPrime;
      goto LABEL_8;
    case LENS_PROFILE_ACTIONCAM_1:
      _RBX = &s_lensProfile_ActionCam1;
      goto LABEL_8;
    case LENS_PROFILE_ACTIONCAM_2:
      _RBX = &s_lensProfile_ActionCam2;
      goto LABEL_8;
    case LENS_PROFILE_DRONECAM:
      _RBX = &s_lensProfile_DroneCam;
LABEL_8:
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+4]
        vsubss  xmm2, xmm1, dword ptr [rbx]
        vmovss  xmm0, [rsp+0F8h+aperture]
        vsubss  xmm3, xmm0, dword ptr [rbx]
        vdivss  xmm0, xmm3, xmm2; val
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@40400000
        vmovsd  xmm0, qword ptr [rbx+8]
        vmovsd  qword ptr [rdi], xmm0
      }
      _RDI->v[2] = _RBX->distortCurve.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx+14h]
        vmovsd  qword ptr [rsi], xmm0
      }
      _RSI->v[2] = _RBX->tcaRedCurve.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx+20h]
        vmovsd  qword ptr [rbp+0], xmm0
      }
      _RBP->v[2] = _RBX->tcaBlueCurve.v[2];
      v31 = 3;
      __asm
      {
        vcvttss2si r8d, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r8d
        vsubss  xmm6, xmm1, xmm0
      }
      if ( _ER8 + 1 < 3 )
        v31 = _ER8 + 1;
      _RDX = 3i64 * v31;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rdx*4+2Ch]
        vsubss  xmm1, xmm0, dword ptr [rbx+rcx*4+2Ch]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rbx+rcx*4+2Ch]
        vmovss  dword ptr [r12], xmm3
        vmovss  xmm0, dword ptr [rbx+rdx*4+30h]
        vsubss  xmm1, xmm0, dword ptr [rbx+rcx*4+30h]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rbx+rcx*4+30h]
        vmovss  dword ptr [r12+4], xmm3
        vmovss  xmm0, dword ptr [rbx+rdx*4+34h]
        vsubss  xmm1, xmm0, dword ptr [rbx+rcx*4+34h]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rbx+rcx*4+34h]
        vmovss  dword ptr [r12+8], xmm3
      }
      break;
    case LENS_PROFILE_TELESCOPIC:
      _R13 = &s_lensProfile_Telescopic;
LABEL_12:
      __asm
      {
        vmovss  xmm1, dword ptr [r13+4]
        vsubss  xmm2, xmm1, dword ptr [r13+0]
        vmovss  xmm0, [rsp+0F8h+focalLength]
        vsubss  xmm3, xmm0, dword ptr [r13+0]
        vmovaps [rsp+0F8h+var_58], xmm7
        vmovaps [rsp+0F8h+var_68], xmm8
        vmovss  xmm8, cs:__real@3f800000
        vmovaps [rsp+0F8h+var_78], xmm9
        vmovaps [rsp+0F8h+var_88], xmm10
        vdivss  xmm0, xmm3, xmm2; val
        vmovaps [rsp+0F8h+var_98], xmm11
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps [rsp+0F8h+var_A8], xmm12
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm6, xmm1, xmm0
        vmovss  xmm1, dword ptr [r13+0Ch]
        vsubss  xmm2, xmm1, dword ptr [r13+8]
        vmovss  xmm0, [rsp+0F8h+aperture]
        vsubss  xmm3, xmm0, dword ptr [r13+8]
        vdivss  xmm0, xmm3, xmm2; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm12, xmm0, cs:__real@40400000
        vxorps  xmm0, xmm0, xmm0
        vcvttss2si esi, xmm6
        vcvtsi2ss xmm0, xmm0, esi
        vcvttss2si r15d, xmm12
        vsubss  xmm0, xmm6, xmm0; val
        vmovaps xmm2, xmm8; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      v74 = _R13->numCurveTableEntries - 1;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, cs:__real@40400000; Y
        vmovaps xmm11, xmm0
      }
      if ( _ESI + 1 < v74 )
        v74 = _ESI + 1;
      v78 = v74;
      _RBX = 3i64 * _ESI;
      _RDI = 3i64 * v74;
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, dword ptr [r13+rdi*4+14h]
        vsubss  xmm2, xmm1, dword ptr [r13+rbx*4+14h]
      }
      _RAX = distort;
      __asm
      {
        vmulss  xmm0, xmm0, xmm2
        vaddss  xmm3, xmm0, dword ptr [r13+rbx*4+14h]
        vmulss  xmm1, xmm11, xmm11
        vmovss  dword ptr [rax], xmm3
        vmovss  xmm0, dword ptr [r13+rdi*4+18h]
        vsubss  xmm2, xmm0, dword ptr [r13+rbx*4+18h]
        vmulss  xmm2, xmm2, xmm1
        vaddss  xmm0, xmm2, dword ptr [r13+rbx*4+18h]
        vmovss  dword ptr [rax+4], xmm0
        vmovss  xmm1, dword ptr [r13+rdi*4+1Ch]
        vsubss  xmm0, xmm1, dword ptr [r13+rbx*4+1Ch]
        vmulss  xmm2, xmm0, xmm11
        vaddss  xmm3, xmm2, dword ptr [r13+rbx*4+1Ch]
        vmovss  dword ptr [rax+8], xmm3
        vmovss  xmm3, dword ptr [r13+rbx*4+314h]
        vmovss  xmm0, dword ptr [r13+rdi*4+314h]
      }
      _RAX = tcaRed;
      __asm
      {
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rax], xmm3
        vmovss  xmm4, dword ptr [r13+rbx*4+318h]
        vmovss  xmm0, dword ptr [r13+rdi*4+318h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rax+4], xmm3
        vmovss  xmm5, dword ptr [r13+rbx*4+31Ch]
        vmovss  xmm0, dword ptr [r13+rdi*4+31Ch]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rax+8], xmm3
        vmovss  xmm3, dword ptr [r13+rbx*4+614h]
        vmovss  xmm0, dword ptr [r13+rdi*4+614h]
      }
      _RAX = tcaBlue;
      __asm
      {
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rax], xmm3
        vmovss  xmm4, dword ptr [r13+rbx*4+618h]
        vmovss  xmm0, dword ptr [r13+rdi*4+618h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rax+4], xmm3
        vmovss  xmm5, dword ptr [r13+rbx*4+61Ch]
        vmovss  xmm0, dword ptr [r13+rdi*4+61Ch]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rax+8], xmm3
      }
      _RDX = 3 * (_ER15 + 4 * v78);
      __asm { vmovss  xmm0, dword ptr [r13+rdx*4+914h] }
      _RCX = 3 * (_ER15 + 4i64 * _ESI);
      v130 = 3;
      __asm
      {
        vmovss  xmm3, dword ptr [r13+rcx*4+914h]
        vmovss  xmm4, dword ptr [r13+rcx*4+918h]
        vsubss  xmm1, xmm0, xmm3
        vmovss  xmm0, dword ptr [r13+rdx*4+918h]
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm9, xmm2, xmm3
        vmovss  xmm3, dword ptr [r13+rcx*4+91Ch]
        vsubss  xmm1, xmm0, xmm4
        vmovss  xmm0, dword ptr [r13+rdx*4+91Ch]
        vmulss  xmm2, xmm1, xmm11
        vsubss  xmm1, xmm0, xmm3
        vaddss  xmm8, xmm2, xmm4
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm10, xmm2, xmm3
      }
      if ( _ER15 + 1 < 3 )
        v130 = _ER15 + 1;
      _RDX = 3 * (v130 + 4 * v78);
      __asm { vmovss  xmm0, dword ptr [r13+rdx*4+914h] }
      _RCX = 3 * (v130 + 4i64 * _ESI);
      __asm
      {
        vmovss  xmm3, dword ptr [r13+rcx*4+914h]
        vmovss  xmm4, dword ptr [r13+rcx*4+918h]
        vmovss  xmm6, dword ptr [r13+rcx*4+91Ch]
        vsubss  xmm1, xmm0, xmm3
        vmovss  xmm0, dword ptr [r13+rdx*4+918h]
        vmulss  xmm2, xmm1, xmm11
        vsubss  xmm1, xmm0, xmm4
        vaddss  xmm5, xmm2, xmm3
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm3, xmm2, xmm4
        vmovss  xmm4, dword ptr [r13+rdx*4+91Ch]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r15d
        vsubss  xmm7, xmm12, xmm0
        vsubss  xmm1, xmm5, xmm9
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm0, xmm2, xmm9
        vsubss  xmm1, xmm3, xmm8
        vmulss  xmm2, xmm1, xmm7
        vmovss  dword ptr [r12], xmm0
        vaddss  xmm0, xmm2, xmm8
        vsubss  xmm1, xmm4, xmm6
        vmulss  xmm2, xmm1, xmm11
        vmovss  dword ptr [r12+4], xmm0
        vaddss  xmm0, xmm2, xmm6
        vsubss  xmm3, xmm0, xmm10
        vmovaps xmm12, [rsp+0F8h+var_A8]
        vmovaps xmm11, [rsp+0F8h+var_98]
        vmovaps xmm9, [rsp+0F8h+var_78]
        vmovaps xmm8, [rsp+0F8h+var_68]
        vmulss  xmm1, xmm3, xmm7
        vmovaps xmm7, [rsp+0F8h+var_58]
        vaddss  xmm2, xmm1, xmm10
        vmovaps xmm10, [rsp+0F8h+var_88]
        vmovss  dword ptr [r12+8], xmm2
      }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp", 111, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown lens profile.") )
        __debugbreak();
      break;
  }
  __asm { vmovaps xmm6, [rsp+0F8h+var_48]; jumptable 00000001423C8916 case 0 }
}

/*
==============
RB_Lens_Apply
==============
*/
void RB_Lens_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, GFX_LENS_PROFILE_PASS pass, R_RT_ColorHandle *scopeBuffer, const GfxBackEndData *data)
{
  const GfxViewInfo *v9; 
  GfxCmdBufState *state; 
  __int64 v14; 
  const dvar_t *v16; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  int rtFlags; 
  unsigned int m_allocHeight; 
  unsigned int m_allocWidth; 
  unsigned int height; 
  unsigned int width; 
  bool v28; 
  unsigned int v30; 
  const R_RT_Surface *Surface; 
  const char *m_location; 
  R_RT_Handle v51; 
  R_RT_Handle v52; 
  R_RT_Handle result; 
  GfxCmdBufContext *v54; 
  R_RT_ColorHandle *v55; 
  R_RT_Group *v56; 
  R_RT_ColorHandle v57; 
  R_RT_Group v59; 
  R_RT_Group v60; 

  v55 = scopeBuffer;
  _RSI = activeGroup;
  v9 = viewInfo;
  v56 = activeGroup;
  _RBX = gfxContext;
  v54 = gfxContext;
  if ( !r_lensProfileOverrideMode->current.integer && !viewInfo->lensProfile.mode && !viewInfo->radialMotionBlur.enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdx+0AACh]
    }
    return;
  }
  state = gfxContext->state;
  R_ProfBeginNamedEvent(state, "RB_ApplyLensEffect");
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rbp+220h+var_2A0.m_surfaceID], xmm0
  }
  if ( !R_Lens_SetConstants((GfxCmdBufContext *)&v51, v9, data) )
  {
    if ( pass )
    {
      v14 = 3i64;
      if ( pass == GFX_LENS_PROFILE_DISTORTION )
        v14 = 1i64;
    }
    else
    {
      v14 = 3i64;
    }
    goto LABEL_12;
  }
  if ( pass == GFX_LENS_PROFILE_CONVOLUTION )
  {
    v14 = 3i64;
LABEL_12:
    if ( _RSI->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rsi+8] }
    v16 = DCONST_DVARINT_r_dccPostFX;
    __asm
    {
      vmovups [rbp+220h+var_200], ymm0
      vmovups ymmword ptr [rbp+220h+var_280.m_surfaceID], ymm0
    }
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.integer == 1 )
      v17 = 8;
    else
      v17 = 0;
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_26;
    v18 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = 2112;
    if ( !v18->current.enabled )
LABEL_26:
      v19 = 2048;
    rtFlags = v17 | v19;
    m_allocHeight = R_RT_Handle::GetSurface(&v52)->m_allocHeight;
    m_allocWidth = R_RT_Handle::GetSurface(&v52)->m_allocWidth;
    height = R_RT_Handle::GetSurface(&v52)->m_image.m_base.height;
    width = R_RT_Handle::GetSurface(&v52)->m_image.m_base.width;
    _RAX = R_RT_CreateInternal(&result, width, height, m_allocWidth, m_allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[v14], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "chromatic color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(386)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+220h+var_280.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+220h+var_2A0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v51);
      if ( (R_RT_Handle::GetSurface(&v51)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
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
        v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+220h+var_280.m_surfaceID] }
        if ( v28 )
          __debugbreak();
      }
    }
    _RSI = &v54->source;
    __asm
    {
      vmovups ymmword ptr [rbp+220h+var_2A0.m_surfaceID], ymm0
      vmovups [rbp+220h+var_220], ymm0
    }
    state = v54->state;
    R_AddRenderTargetTransition(state, &v57, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    v30 = R_RT_Handle::GetSurface(&v51)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v51);
    R_SetRenderTargetSize(*_RSI, Surface->m_image.m_base.width, v30, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+220h+var_280.m_surfaceID]
      vmovups [rbp+220h+var_220], ymm0
    }
    R_RT_Group::AssignColor(&v59, &v57);
    _RCX = &v60;
    _RAX = &v59;
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
    m_location = v59.m_vrsRt.m_tracking.m_location;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v60.m_vrsRt.m_tracking.m_location = m_location;
    __asm { vmovups xmmword ptr [rbp+220h+var_2A0.m_surfaceID], xmm0 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v51, &v60, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(392)");
    _RAX = v55;
    __asm
    {
      vmovups ymm1, [rbp+220h+var_200]
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rbp+220h+var_220], ymm0
      vmovups xmm0, xmmword ptr [rsi]
      vmovups ymmword ptr [rbp+220h+result.m_surfaceID], ymm1
      vmovups xmmword ptr [rbp+220h+var_2A0.m_surfaceID], xmm0
    }
    R_Lens_Apply((GfxCmdBufContext *)&v51, v9, data, pass, (R_RT_ColorHandle *)&result, &v57);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+220h+var_280.m_surfaceID]
      vmovups ymmword ptr [rbp+220h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups ymm0, [rbp+220h+var_200]
      vmovups ymmword ptr [rbp+220h+result.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rbp+220h+var_2A0.m_surfaceID], xmm0
    }
    R_RT_Destroy((GfxCmdBufContext *)&v51, (R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+220h+var_280.m_surfaceID]
      vmovups ymmword ptr [rbp+220h+result.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(v56, (R_RT_ColorHandle *)&result);
  }
  R_ProfEndNamedEvent(state);
}

/*
==============
RB_Lens_ScopeDistortion
==============
*/
R_RT_ColorHandle *RB_Lens_ScopeDistortion(R_RT_ColorHandle *result, GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const dvar_t *v19; 
  unsigned int unsignedInt; 
  const dvar_t *v22; 
  unsigned int v23; 
  const dvar_t *v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *m_location; 
  R_RT_ColorHandle *v84; 
  float fmt; 
  float depth; 
  float arraySliceCount; 
  R_RT_Handle v98; 
  unsigned int sceneRtWidth; 
  unsigned int sceneRtHeight; 
  R_RT_Group v101; 
  vec4_t clearColor; 
  R_RT_Group v103; 
  vec3_t resulta[4]; 
  char v105; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _RSI = gfxContext;
  _R15 = result;
  _R12 = data;
  R_ProfBeginNamedEvent(gfxContext->state, "Scope buffer");
  v19 = DVARINT_r_scopeBufferSizeDivisorX;
  sceneRtHeight = viewInfo->sceneRtInput.sceneRtHeight;
  sceneRtWidth = viewInfo->sceneRtInput.sceneRtWidth;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovups xmmword ptr [rbp+250h+var_1E0], xmm0
  }
  if ( !DVARINT_r_scopeBufferSizeDivisorX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeDivisorX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  unsignedInt = v19->current.unsignedInt;
  v22 = DVARINT_r_scopeBufferSizeDivisorY;
  if ( !DVARINT_r_scopeBufferSizeDivisorY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeDivisorY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = v22->current.unsignedInt;
  v24 = DVARINT_r_scopeBufferSizeMin;
  if ( !DVARINT_r_scopeBufferSizeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopeBufferSizeMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = v24->current.unsignedInt;
  v26 = v25;
  if ( sceneRtWidth / unsignedInt > v25 )
    v26 = sceneRtWidth / unsignedInt;
  v27 = (v26 + 7) & 0xFFFFFFF8;
  if ( sceneRtHeight / v23 > v25 )
    v25 = sceneRtHeight / v23;
  _RAX = R_RT_CreateInternal((R_RT_Handle *)resulta, v27, (v25 + 7) & 0xFFFFFFF8, v27, (v25 + 7) & 0xFFFFFFF8, 1u, 1u, 1u, g_R_RT_renderTargetFmts[72], R_RT_Flag_RTView, R_RT_FlagInternal_None, &clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "ScopeBuffer", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(204)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+250h+var_2D0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast(_R15, &v98);
  __asm { vmovups ymm0, ymmword ptr [r15] }
  state = _RSI->state;
  __asm { vmovups ymmword ptr [rbp+250h+var_2D0.m_surfaceID], ymm0 }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v98, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [rbp+250h+var_2D0.m_surfaceID], ymm0
  }
  height = R_RT_Handle::GetSurface(&v98)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v98);
  R_SetRenderTargetSize(_RSI->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [rbp+250h+var_2D0.m_surfaceID], ymm0
  }
  R_RT_Group::AssignColor(&v101, (R_RT_ColorHandle *)&v98);
  _RAX = &v101;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  _RCX = &v103;
  __asm
  {
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups xmm0, xmmword ptr [rsi]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  m_location = v101.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v103.m_vrsRt.m_tracking.m_location = m_location;
  __asm { vmovups xmmword ptr [rbp+250h+var_2D0.m_surfaceID], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v98, &v103, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(210)");
  R_ClearScreen(state, 0xFu, 0);
  __asm
  {
    vmovups xmm14, xmmword ptr [rsi]
    vmovups xmmword ptr [rbp+250h+var_2D0.m_surfaceID], xmm14
  }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v98);
  __asm { vmovq   rcx, xmm14; source }
  R_Set3D(_RCX);
  __asm { vmovq   rcx, xmm14; source }
  R_ChangeDepthHackNearClip(_RCX, 1u);
  __asm
  {
    vmovss  xmm0, dword ptr [r12+75A850h]
    vmulss  xmm12, xmm0, dword ptr [r12+75A834h]
    vmulss  xmm8, xmm0, dword ptr [r12+75A824h]
    vmulss  xmm9, xmm0, dword ptr [r12+75A828h]
    vmulss  xmm4, xmm0, dword ptr [r12+75A82Ch]
    vmulss  xmm11, xmm0, dword ptr [r12+75A830h]
    vmulss  xmm13, xmm0, dword ptr [r12+75A838h]
    vmovss  xmm0, dword ptr [r12+75A80Ch]
    vsubss  xmm3, xmm0, dword ptr [r14+100h]
    vmovss  xmm0, dword ptr [r12+75A814h]
    vsubss  xmm2, xmm0, dword ptr [r14+108h]
    vmovss  xmm1, dword ptr [r12+75A810h]
    vsubss  xmm5, xmm1, dword ptr [r14+104h]
    vsubss  xmm10, xmm2, xmm4
    vsubss  xmm6, xmm3, xmm8
    vaddss  xmm4, xmm4, xmm2
    vaddss  xmm2, xmm8, xmm3
    vsubss  xmm0, xmm6, xmm11
    vmovss  dword ptr [rbp+250h+result.m_surfaceID], xmm0
    vsubss  xmm0, xmm10, xmm13
    vmovss  [rbp+250h+result.m_tracking.m_allocCounter], xmm0
    vsubss  xmm7, xmm5, xmm9
    vsubss  xmm0, xmm2, xmm11
    vmovss  dword ptr [rbp+250h+result.m_tracking+4], xmm0
    vsubss  xmm1, xmm7, xmm12
    vmovss  dword ptr [rbp+250h+result+4], xmm1
    vaddss  xmm3, xmm9, xmm5
    vsubss  xmm0, xmm4, xmm13
    vmovss  dword ptr [rbp+250h+result.m_tracking.m_name+4], xmm0
    vsubss  xmm1, xmm3, xmm12
    vmovss  dword ptr [rbp+250h+result.m_tracking.m_name], xmm1
    vaddss  xmm0, xmm3, xmm12
    vaddss  xmm1, xmm2, xmm11
    vmovss  dword ptr [rbp+250h+result.m_tracking.m_location+4], xmm0
    vmovss  dword ptr [rbp+250h+result.m_tracking.m_location], xmm1
    vaddss  xmm0, xmm6, xmm11
    vaddss  xmm1, xmm4, xmm13
    vmovss  [rbp+250h+var_DC], xmm0
    vmovss  [rbp+250h+var_E0], xmm1
    vaddss  xmm0, xmm10, xmm13
    vaddss  xmm1, xmm7, xmm12
    vmovss  [rbp+250h+var_D4], xmm0
    vmovss  [rbp+250h+var_D8], xmm1
  }
  if ( !rgp.scopeBufferMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp", 183, ASSERT_TYPE_ASSERT, "(rgp.scopeBufferMaterial)", (const char *)&queryFormat, "rgp.scopeBufferMaterial") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm3, cs:__real@bf800000
    vmovss  [rsp+370h+arraySliceCount], xmm0
    vmovss  [rsp+370h+depth], xmm0
    vmovss  dword ptr [rsp+370h+fmt], xmm3
    vmovdqa xmmword ptr [rbp+250h+var_2D0.m_surfaceID], xmm14
  }
  RB_Draw3DQuadPicST((GfxCmdBufContext *)&v98, rgp.scopeBufferMaterial, (const vec3_t (*)[4])resulta, *(float *)&_XMM3, fmt, depth, arraySliceCount, (GfxColor)0xFFFFFF);
  __asm { vmovdqa xmmword ptr [rbp+250h+var_2D0.m_surfaceID], xmm14 }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v98);
  __asm { vmovq   rcx, xmm14; source }
  R_ChangeDepthHackNearClip(_RCX, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [rbp+250h+var_2D0.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v98, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
  v84 = _R15;
  _R11 = &v105;
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
  }
  return v84;
}

/*
==============
R_InitLensDistortProfiles
==============
*/

void __fastcall R_InitLensDistortProfiles(__int64 a1, __int64 a2, double _XMM2_8)
{
  float v43; 
  float v45; 
  float v48; 
  float v50; 
  float v67; 
  float v76; 
  float v78; 
  float v99; 
  float v102; 
  float v104; 
  float v106; 
  float v109; 
  float v112; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rsp+0D0h+var_88+8], xmm13
    vmovaps [rsp+0D0h+var_98+8], xmm14
    vmovaps [rsp+0D0h+var_A8+8], xmm15
  }
  LensProfile_Init_Compact(&s_lensProfile_CompactPortable);
  __asm
  {
    vmovss  xmm0, cs:__real@3b69f6a9
    vmovss  xmm1, cs:__real@bdfad6cb
    vmovss  xmm14, cs:__real@3ad0891a
    vmovss  xmm12, cs:__real@bf03038e
    vmovss  xmm11, cs:__real@3e99afc0
    vmovss  xmm9, cs:__real@bef9cdc4
    vmovss  xmm8, cs:__real@3e85ec81
    vmovss  xmm15, cs:__real@3f7ffadd
    vmovss  xmm6, cs:__real@bef61199
    vmovss  xmm5, cs:__real@3e7fc58b
    vmovss  xmm13, cs:__real@3f7ffb4d
    vmovss  xmm10, cs:__real@bd1afaf8
    vmovss  xmm7, cs:__real@bdf0c6f8
    vmovss  xmm4, cs:__real@bdea4ca5
    vmovss  xmm3, cs:__real@bde851a8
    vxorps  xmm2, xmm2, xmm2
    vunpcklps xmm0, xmm2, xmm0
    vmovsd  qword ptr cs:s_lensProfile_CinematicPrime.distortCurve, xmm0
    vunpcklps xmm0, xmm2, xmm2
    vmovsd  qword ptr cs:s_lensProfile_CinematicPrime.tcaRedCurve, xmm0
    vunpcklps xmm0, xmm2, xmm2
    vmovsd  qword ptr cs:s_lensProfile_CinematicPrime.tcaBlueCurve, xmm0
    vmovss  xmm0, cs:__real@bde449dc
    vunpcklps xmm0, xmm0, xmm14
    vmovsd  qword ptr cs:s_lensProfile_CinematicPrime.vignetteCurveTable, xmm0
    vmovss  dword ptr [rbp+57h+var_A8], xmm2
    vmovss  xmm2, cs:__real@3d611dbd
  }
  s_lensProfile_CinematicPrime.distortCurve.v[2] = v125;
  __asm
  {
    vunpcklps xmm1, xmm2, xmm1
    vmovss  xmm2, cs:__real@38936e06
    vunpcklps xmm0, xmm12, xmm11
    vmovsd  qword ptr cs:s_lensProfile_CinematicPrime.vignetteCurveTable+0Ch, xmm0
    vunpcklps xmm0, xmm9, xmm8
    vmovsd  qword ptr cs:s_lensProfile_CinematicPrime.vignetteCurveTable+18h, xmm0
    vmovss  dword ptr [rbp+57h+var_A8], xmm15
  }
  s_lensProfile_CinematicPrime.tcaRedCurve.v[2] = v126;
  __asm
  {
    vunpcklps xmm0, xmm6, xmm5
    vmovsd  qword ptr cs:s_lensProfile_CinematicPrime.vignetteCurveTable+24h, xmm0
    vmovss  xmm0, cs:__real@40800000
    vmovss  cs:s_lensProfile_CinematicPrime.apertureMin, xmm0
    vmovss  xmm0, cs:__real@42000000
    vmovss  dword ptr [rbp+57h+var_A8], xmm13
  }
  s_lensProfile_CinematicPrime.tcaBlueCurve.v[2] = v127;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm10 }
  s_lensProfile_CinematicPrime.vignetteCurveTable[0].v[2] = v128;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm7 }
  s_lensProfile_CinematicPrime.vignetteCurveTable[1].v[2] = v129;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm4 }
  v43 = v130;
  __asm
  {
    vmovss  cs:s_lensProfile_CinematicPrime.apertureMax, xmm0
    vmovss  xmm0, cs:__real@3dcfbfc6
    vmovss  dword ptr [rbp+57h+var_A8], xmm3
  }
  s_lensProfile_CinematicPrime.vignetteCurveTable[2].v[2] = v43;
  v45 = v131;
  __asm
  {
    vmovss  dword ptr [rbp+57h+var_A8], xmm0
    vmovss  xmm0, cs:__real@3f80032a
    vmovsd  qword ptr cs:s_lensProfile_Smartphone.distortCurve, xmm1
    vmovss  xmm1, cs:__real@b92e7ba9
  }
  s_lensProfile_CinematicPrime.vignetteCurveTable[3].v[2] = v45;
  v48 = v132;
  __asm
  {
    vunpcklps xmm1, xmm2, xmm1
    vmovss  dword ptr [rbp+57h+var_A8], xmm0
  }
  s_lensProfile_Smartphone.distortCurve.v[2] = v48;
  __asm { vmovsd  qword ptr cs:s_lensProfile_Smartphone.tcaRedCurve, xmm1 }
  v50 = v133;
  __asm
  {
    vmovss  xmm0, cs:__real@3f7ffe8c
    vmovss  xmm2, cs:__real@b7a46aae
    vmovss  xmm1, cs:__real@383673c5
    vmovss  dword ptr [rbp+57h+var_A8], xmm0
    vmovss  xmm0, cs:__real@bde449dc
    vunpcklps xmm0, xmm0, xmm14
    vmovsd  qword ptr cs:s_lensProfile_Smartphone.vignetteCurveTable, xmm0
  }
  s_lensProfile_Smartphone.tcaRedCurve.v[2] = v50;
  s_lensProfile_Smartphone.tcaBlueCurve.v[2] = v134;
  __asm
  {
    vunpcklps xmm1, xmm2, xmm1
    vmovss  xmm2, cs:__real@bd9cf56f
    vunpcklps xmm0, xmm12, xmm11
    vmovsd  qword ptr cs:s_lensProfile_Smartphone.vignetteCurveTable+0Ch, xmm0
    vunpcklps xmm0, xmm9, xmm8
    vmovsd  qword ptr cs:s_lensProfile_Smartphone.vignetteCurveTable+18h, xmm0
    vmovsd  qword ptr cs:s_lensProfile_Smartphone.tcaBlueCurve, xmm1
    vmovss  xmm1, cs:__real@3e609aaa
    vunpcklps xmm1, xmm2, xmm1
    vxorps  xmm2, xmm2, xmm2
    vunpcklps xmm0, xmm6, xmm5
    vmovsd  qword ptr cs:s_lensProfile_Smartphone.vignetteCurveTable+24h, xmm0
    vmovss  xmm0, cs:__real@40800000
    vmovss  cs:s_lensProfile_Smartphone.apertureMin, xmm0
    vmovss  xmm0, cs:__real@42000000
    vmovss  cs:s_lensProfile_Smartphone.apertureMax, xmm0
    vmovss  xmm0, cs:__real@bdda8ac6
    vmovss  dword ptr [rbp+57h+var_A8], xmm10
  }
  s_lensProfile_Smartphone.vignetteCurveTable[0].v[2] = v135;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm7 }
  s_lensProfile_Smartphone.vignetteCurveTable[1].v[2] = v136;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm4 }
  s_lensProfile_Smartphone.vignetteCurveTable[2].v[2] = v137;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm3 }
  v67 = v138;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm0 }
  s_lensProfile_Smartphone.vignetteCurveTable[3].v[2] = v67;
  s_lensProfile_ActionCam1.distortCurve.v[2] = v139;
  __asm
  {
    vunpcklps xmm0, xmm2, xmm2
    vmovsd  qword ptr cs:s_lensProfile_ActionCam1.tcaRedCurve, xmm0
    vunpcklps xmm0, xmm2, xmm2
    vmovss  xmm2, cs:__real@bde449dc
    vmovsd  qword ptr cs:s_lensProfile_ActionCam1.tcaBlueCurve, xmm0
    vunpcklps xmm0, xmm2, xmm14
    vmovsd  qword ptr cs:s_lensProfile_ActionCam1.vignetteCurveTable, xmm0
    vunpcklps xmm0, xmm12, xmm11
    vmovsd  qword ptr cs:s_lensProfile_ActionCam1.vignetteCurveTable+0Ch, xmm0
    vunpcklps xmm0, xmm9, xmm8
    vmovsd  qword ptr cs:s_lensProfile_ActionCam1.vignetteCurveTable+18h, xmm0
    vmovss  dword ptr [rbp+57h+var_A8], xmm15
  }
  s_lensProfile_ActionCam1.tcaRedCurve.v[2] = v140;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm13 }
  s_lensProfile_ActionCam1.tcaBlueCurve.v[2] = v141;
  __asm
  {
    vunpcklps xmm0, xmm6, xmm5
    vmovsd  qword ptr cs:s_lensProfile_ActionCam1.vignetteCurveTable+24h, xmm0
    vmovss  xmm0, cs:__real@40800000
    vmovss  dword ptr [rbp+57h+var_A8], xmm10
  }
  s_lensProfile_ActionCam1.vignetteCurveTable[0].v[2] = v142;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm7 }
  v76 = v143;
  __asm
  {
    vmovss  cs:s_lensProfile_ActionCam1.apertureMin, xmm0
    vmovss  xmm0, cs:__real@42000000
    vmovss  dword ptr [rbp+57h+var_A8], xmm4
  }
  s_lensProfile_ActionCam1.vignetteCurveTable[1].v[2] = v76;
  v78 = v144;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm3 }
  s_lensProfile_ActionCam1.vignetteCurveTable[2].v[2] = v78;
  __asm
  {
    vmovss  cs:s_lensProfile_ActionCam1.apertureMax, xmm0
    vmovss  xmm0, cs:__real@bded6777
    vmovsd  qword ptr cs:s_lensProfile_ActionCam1.distortCurve, xmm1
    vmovss  xmm1, cs:__real@3d02602d
  }
  s_lensProfile_ActionCam1.vignetteCurveTable[3].v[2] = v145;
  __asm
  {
    vunpcklps xmm0, xmm1, xmm0
    vmovss  xmm1, cs:__real@bd6ec46e
    vmovsd  qword ptr cs:s_lensProfile_ActionCam2.distortCurve, xmm0
    vxorps  xmm15, xmm15, xmm15
    vmovss  dword ptr [rbp+57h+var_A8], xmm15
    vmovss  xmm15, cs:__real@3f7ffadd
  }
  s_lensProfile_ActionCam2.distortCurve.v[2] = v146;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm15 }
  s_lensProfile_ActionCam2.tcaRedCurve.v[2] = v147;
  __asm
  {
    vxorps  xmm15, xmm15, xmm15
    vunpcklps xmm0, xmm15, xmm15
    vmovsd  qword ptr cs:s_lensProfile_ActionCam2.tcaRedCurve, xmm0
    vunpcklps xmm0, xmm15, xmm15
    vmovsd  qword ptr cs:s_lensProfile_ActionCam2.tcaBlueCurve, xmm0
    vunpcklps xmm0, xmm2, xmm14
    vmovss  xmm2, cs:__real@3c1d8c63
    vmovsd  qword ptr cs:s_lensProfile_ActionCam2.vignetteCurveTable, xmm0
    vunpcklps xmm1, xmm2, xmm1
    vmovss  xmm2, cs:__real@be98d4fe
    vunpcklps xmm0, xmm12, xmm11
    vmovsd  qword ptr cs:s_lensProfile_ActionCam2.vignetteCurveTable+0Ch, xmm0
    vunpcklps xmm0, xmm9, xmm8
    vmovsd  qword ptr cs:s_lensProfile_ActionCam2.vignetteCurveTable+18h, xmm0
    vunpcklps xmm0, xmm6, xmm5
    vmovss  xmm6, cs:__real@40800000
    vmovss  xmm5, cs:__real@42000000
    vmovsd  qword ptr cs:s_lensProfile_ActionCam2.vignetteCurveTable+24h, xmm0
    vmovss  xmm0, cs:__real@bbb4c732
    vmovss  dword ptr [rbp+57h+var_A8], xmm13
  }
  s_lensProfile_ActionCam2.tcaBlueCurve.v[2] = v148;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm10 }
  s_lensProfile_ActionCam2.vignetteCurveTable[0].v[2] = v149;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm7 }
  s_lensProfile_ActionCam2.vignetteCurveTable[1].v[2] = v150;
  __asm
  {
    vmovss  dword ptr [rbp+57h+var_A8], xmm4
    vmovss  xmm4, cs:__real@bf6c3c9f
  }
  s_lensProfile_ActionCam2.vignetteCurveTable[2].v[2] = v151;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm3 }
  v99 = v152;
  __asm
  {
    vmovss  xmm3, cs:__real@3f09652c
    vmovss  dword ptr [rbp+57h+var_A8], xmm0
    vmovss  xmm0, cs:__real@3f80027d
  }
  s_lensProfile_ActionCam2.vignetteCurveTable[3].v[2] = v99;
  v102 = v153;
  __asm
  {
    vmovss  dword ptr [rbp+57h+var_A8], xmm0
    vmovss  xmm0, cs:__real@3f80001c
  }
  s_lensProfile_DroneCam.distortCurve.v[2] = v102;
  v104 = v154;
  __asm { vmovss  dword ptr [rbp+57h+var_A8], xmm0 }
  s_lensProfile_DroneCam.tcaRedCurve.v[2] = v104;
  s_lensProfile_DroneCam.tcaBlueCurve.v[2] = v155;
  __asm
  {
    vunpcklps xmm0, xmm4, xmm3
    vmovsd  qword ptr cs:s_lensProfile_DroneCam.vignetteCurveTable, xmm0
    vmovss  dword ptr [rbp+57h+var_A8], xmm2
  }
  v106 = v156;
  __asm
  {
    vmovsd  qword ptr cs:s_lensProfile_DroneCam.distortCurve, xmm1
    vunpcklps xmm0, xmm4, xmm3
    vunpcklps xmm1, xmm15, xmm15
    vmovss  dword ptr [rbp+57h+var_A8], xmm2
  }
  s_lensProfile_DroneCam.vignetteCurveTable[0].v[2] = v106;
  v109 = v157;
  __asm
  {
    vmovss  dword ptr [rbp+57h+var_A8], xmm2
    vmovsd  qword ptr cs:s_lensProfile_DroneCam.vignetteCurveTable+0Ch, xmm0
    vmovsd  qword ptr cs:s_lensProfile_DroneCam.tcaRedCurve, xmm1
    vunpcklps xmm0, xmm4, xmm3
    vunpcklps xmm1, xmm15, xmm15
  }
  s_lensProfile_DroneCam.vignetteCurveTable[1].v[2] = v109;
  v112 = v158;
  __asm
  {
    vmovsd  qword ptr cs:s_lensProfile_DroneCam.vignetteCurveTable+18h, xmm0
    vmovss  cs:s_lensProfile_ActionCam2.apertureMin, xmm6
    vmovss  cs:s_lensProfile_ActionCam2.apertureMax, xmm5
    vmovss  dword ptr [rbp+57h+var_A8], xmm2
    vmovsd  qword ptr cs:s_lensProfile_DroneCam.tcaBlueCurve, xmm1
  }
  s_lensProfile_DroneCam.vignetteCurveTable[2].v[2] = v112;
  __asm
  {
    vunpcklps xmm0, xmm4, xmm3
    vmovsd  qword ptr cs:s_lensProfile_DroneCam.vignetteCurveTable+24h, xmm0
    vmovss  cs:s_lensProfile_DroneCam.apertureMin, xmm6
    vmovss  cs:s_lensProfile_DroneCam.apertureMax, xmm5
  }
  s_lensProfile_DroneCam.vignetteCurveTable[3].v[2] = v159;
  __asm { vmovaps xmm14, [rsp+0D0h+var_98+8] }
  _R11 = &vars0;
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
    vmovaps xmm15, [rsp+0D0h+var_A8+8]
  }
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
  const R_RT_Surface *v14; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v18; 
  GfxCmdBufSourceState *v26; 
  GfxCmdBufInput *v27; 
  float fmt; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  GfxCmdBufContext v36; 
  GfxViewport v37; 

  _R14 = gfxContext;
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
        R_SetCodeImageTextureInternal(_R14->source, 0x17u, &Surface->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(351)");
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
  v14 = R_RT_Handle::GetSurface(srcSceneColorRt);
  source = _R14->source;
  p_m_image = &v14->m_image;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  *(_QWORD *)&v37.x = 0i64;
  v37.width = R_RT_Handle::GetSurface(srcSceneColorRt)->m_image.m_base.width;
  v18 = R_RT_Handle::GetSurface(srcSceneColorRt);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
  }
  v37.height = v18->m_image.m_base.height;
  __asm
  {
    vmovups [rsp+0C8h+var_58], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0C8h+var_70], xmm0
    vmovss  [rsp+0C8h+var_78], xmm0
    vmovss  [rsp+0C8h+var_80], xmm1
    vmovss  [rsp+0C8h+var_88], xmm1
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rcx
    vmovss  [rsp+0C8h+var_90], xmm3
    vmovss  [rsp+0C8h+var_98], xmm2
    vmovss  dword ptr [rsp+0C8h+var_A0], xmm1
    vmovss  dword ptr [rsp+0C8h+fmt], xmm1
  }
  RB_ViewportFilterDirectInternal(&v36, lensProfileDistortionMaterial, 0xFFFFFFFF, &v37, fmt, v29, v30, v31, v32, v33, v34, v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp(361)");
  v26 = _R14->source;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v27 = &v26->input;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v27->codeImages[23] = NULL;
  R_GPU_EndTimer();
}

/*
==============
R_Lens_GetEnabled
==============
*/
char R_Lens_GetEnabled(const GfxViewInfo *viewInfo)
{
  if ( r_lensProfileOverrideMode->current.integer || viewInfo->lensProfile.mode || viewInfo->radialMotionBlur.enabled )
    return 1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rcx+0AACh]
  }
  return 0;
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
  float fmt; 
  float v61; 
  float v62; 
  GfxCmdBufContext v63[4]; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovups xmm0, xmmword ptr [rcx]
  }
  _R14 = gfxContext;
  _RBX = data;
  __asm { vmovups [rsp+118h+var_D8], xmm0 }
  RB_EndSurfaceIfNeeded(v63);
  source = _R14->source;
  R_Set3D(_R14->source);
  R_ChangeDepthHackNearClip(source, 1u);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+75A850h]
    vmulss  xmm12, xmm0, dword ptr [rbx+75A834h]
    vmulss  xmm8, xmm0, dword ptr [rbx+75A824h]
    vmulss  xmm9, xmm0, dword ptr [rbx+75A828h]
    vmulss  xmm4, xmm0, dword ptr [rbx+75A82Ch]
    vmulss  xmm11, xmm0, dword ptr [rbx+75A830h]
    vmulss  xmm13, xmm0, dword ptr [rbx+75A838h]
    vmovss  xmm0, dword ptr [rbx+75A80Ch]
    vsubss  xmm3, xmm0, dword ptr [rdi+100h]
    vmovss  xmm0, dword ptr [rbx+75A814h]
    vsubss  xmm2, xmm0, dword ptr [rdi+108h]
    vmovss  xmm1, dword ptr [rbx+75A810h]
    vsubss  xmm5, xmm1, dword ptr [rdi+104h]
    vsubss  xmm10, xmm2, xmm4
    vsubss  xmm6, xmm3, xmm8
    vaddss  xmm4, xmm2, xmm4
    vaddss  xmm2, xmm3, xmm8
    vsubss  xmm0, xmm6, xmm11
    vmovss  [rsp+118h+var_C8], xmm0
    vsubss  xmm0, xmm10, xmm13
    vmovss  [rsp+118h+var_C0], xmm0
    vsubss  xmm7, xmm5, xmm9
    vsubss  xmm0, xmm2, xmm11
    vmovss  [rsp+118h+var_BC], xmm0
    vsubss  xmm1, xmm7, xmm12
    vmovss  [rsp+118h+var_C4], xmm1
    vaddss  xmm3, xmm5, xmm9
    vsubss  xmm0, xmm4, xmm13
    vmovss  [rsp+118h+var_B4], xmm0
    vsubss  xmm1, xmm3, xmm12
    vmovss  [rsp+118h+var_B8], xmm1
    vaddss  xmm0, xmm3, xmm12
    vaddss  xmm1, xmm2, xmm11
    vmovss  [rsp+118h+var_AC], xmm0
    vmovss  [rsp+118h+var_B0], xmm1
    vaddss  xmm0, xmm6, xmm11
    vaddss  xmm1, xmm4, xmm13
    vmovss  [rsp+118h+var_A4], xmm0
    vmovss  [rsp+118h+var_A8], xmm1
    vaddss  xmm0, xmm10, xmm13
    vaddss  xmm1, xmm7, xmm12
    vmovss  [rsp+118h+var_9C], xmm0
    vmovss  [rsp+118h+var_A0], xmm1
  }
  if ( !rgp.scopeBufferMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_chroma.cpp", 183, ASSERT_TYPE_ASSERT, "(rgp.scopeBufferMaterial)", (const char *)&queryFormat, "rgp.scopeBufferMaterial") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovups xmm0, xmmword ptr [r14]
    vmovss  xmm3, cs:__real@bf800000
    vmovss  [rsp+118h+var_E8], xmm1
    vmovss  dword ptr [rsp+118h+var_F0], xmm1
    vmovss  dword ptr [rsp+118h+fmt], xmm3
    vmovups [rsp+118h+var_D8], xmm0
  }
  RB_Draw3DQuadPicST(v63, rgp.scopeBufferMaterial, (const vec3_t (*)[4])&v63[1], *(float *)&_XMM3, fmt, v61, v62, (GfxColor)0xFFFFFF);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+118h+var_D8], xmm0
  }
  RB_EndSurfaceIfNeeded(v63);
  R_ChangeDepthHackNearClip(source, 0);
  _R11 = &v64;
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
  }
}

/*
==============
R_Lens_SetConstants
==============
*/
bool R_Lens_SetConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  bool v14; 
  bool Bool_Internal; 
  bool v27; 
  char v35; 
  float v105; 
  float v106; 
  vec4_t vec; 
  vec4_t out; 
  vec3_t distort; 
  vec3_t vignette; 
  vec3_t tcaRed; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovss  xmm0, dword ptr [rdx+0CB4h] }
  _ESI = viewInfo->lensProfile.mode;
  _RBX = viewInfo;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps xmmword ptr [r11-0A8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  if ( v14 )
    __asm { vmovss  xmm0, dword ptr [rdx+150h] }
  __asm
  {
    vmovss  xmm11, dword ptr [rdx+0CB8h]
    vcomiss xmm11, xmm6
    vmulss  xmm15, xmm0, cs:__real@41cb332c
  }
  if ( v14 )
    __asm { vmovss  xmm11, dword ptr [rdx+0C9Ch] }
  __asm
  {
    vmovss  xmm7, dword ptr [rdx+0CBCh]
    vmovss  xmm12, dword ptr [rdx+0CC0h]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  [rsp+180h+var_140], xmm7
    vmovss  [rsp+180h+var_13C], xmm12
  }
  if ( viewInfo->radialMotionBlur.enabled )
  {
    __asm { vmovaps [rsp+180h+var_B0], xmm14 }
    Bool_Internal = Dvar_GetBool_Internal(r_mbRadialOverridePositionActive);
    _RDI = r_mbRadialOverridePosition;
    v27 = Bool_Internal;
    if ( !r_mbRadialOverridePosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 662, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  dword ptr [rsp+180h+vec], xmm0
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vsubss  xmm0, xmm0, dword ptr [rbx+100h]
      vmovss  dword ptr [rsp+180h+vec+4], xmm1
      vmovss  xmm2, dword ptr [rdi+30h]
      vsubss  xmm1, xmm1, dword ptr [rbx+104h]
      vmovss  dword ptr [rsp+180h+vec], xmm0
      vsubss  xmm0, xmm2, dword ptr [rbx+108h]
      vmovss  dword ptr [rsp+180h+vec+8], xmm0
      vmovss  dword ptr [rsp+180h+vec+4], xmm1
      vmovss  dword ptr [rsp+180h+vec+0Ch], xmm9
    }
    MatrixTransformVector44Aligned(&vec, &_RBX->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+180h+out+0Ch]
      vcomiss xmm0, cs:__real@34000000
    }
    if ( v35 | v14 )
      __asm { vxorps  xmm0, xmm0, xmm0 }
    else
      __asm { vdivss  xmm0, xmm9, xmm0 }
    __asm
    {
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm0, xmm0, xmmword ptr [rsp+180h+out]
      vmovups xmmword ptr [rsp+180h+out], xmm0
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideRadius);
    __asm { vucomiss xmm0, xmm6 }
    if ( v14 )
    {
      __asm { vmovss  xmm7, dword ptr [rbx+37F8h] }
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideRadius);
      __asm { vmovaps xmm7, xmm0 }
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideStrength);
    __asm { vcomiss xmm0, xmm6 }
    if ( v35 | v14 )
    {
      __asm { vmovss  xmm8, dword ptr [rbx+37FCh] }
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideStrength);
      __asm { vmovaps xmm8, xmm0 }
    }
    Dvar_GetFloat_Internal(r_mbRadialOverrideChromaticAberration);
    __asm { vsubss  xmm12, xmm9, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideDistortion);
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideFocusDir);
    __asm { vmovaps xmm13, xmm0 }
    Dvar_GetFloat_Internal(r_mbRadialOverrideAngleAttenuation);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+180h+out]
      vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm14, dword ptr [rsp+180h+out+4]
      vandps  xmm1, xmm14, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmaxss  xmm1, xmm3, xmm1
      vminss  xmm2, xmm1, xmm9
      vsubss  xmm3, xmm2, xmm0
      vsubss  xmm1, xmm9, xmm0
      vdivss  xmm0, xmm3, xmm1
      vmovss  xmm1, dword ptr [rsp+180h+vec]
      vmulss  xmm2, xmm1, dword ptr [rbx+10Ch]
      vmaxss  xmm5, xmm0, xmm6
      vmovss  xmm0, dword ptr [rsp+180h+vec+4]
      vmulss  xmm3, xmm0, dword ptr [rbx+110h]
      vmovss  xmm0, dword ptr [rsp+180h+vec+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+114h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm6
    }
    if ( v35 | v14 )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm5, cs:__real@40000000
        vmovss  xmm0, cs:__real@40400000
        vsubss  xmm2, xmm0, xmm1
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm3, xmm2, xmm1
        vsubss  xmm0, xmm9, xmm3
      }
    }
    if ( v27 )
    {
      __asm
      {
        vmulss  xmm7, xmm7, xmm0
        vmulss  xmm8, xmm8, xmm0
        vmulss  xmm10, xmm10, xmm0
        vmulss  xmm12, xmm12, xmm0
        vxorps  xmm0, xmm14, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rsp+180h+out+4], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rsp+180h+out], xmm6
        vmovss  dword ptr [rsp+180h+out+4], xmm6
      }
    }
    __asm
    {
      vucomiss xmm13, xmm6
      vmovaps xmm14, [rsp+180h+var_B0]
    }
    if ( !v27 )
    {
      __asm
      {
        vucomiss xmm7, xmm6
        vucomiss xmm10, xmm6
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialMinAllowedBlurDistance);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3a72b9d6
        vdivss  xmm7, xmm1, xmm8
      }
    }
    __asm
    {
      vsubss  xmm1, xmm9, xmm7
      vmovss  xmm7, [rsp+180h+var_140]
      vsubss  xmm2, xmm9, xmm12
      vmovss  xmm12, [rsp+180h+var_13C]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdx+0AA8h]
      vmovss  xmm8, dword ptr [rdx+0AACh]
      vmovss  xmm2, dword ptr [rdx+0AB0h]
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rsp+180h+out], xmm0
      vxorps  xmm10, xmm10, xmm10
      vxorps  xmm13, xmm13, xmm13
    }
  }
  _RDI = gfxContext->source;
  _ER14 = 0;
  __asm
  {
    vmovss  dword ptr [rdi+0F74h], xmm8
    vmovaps xmm8, [rsp+180h+var_50]
    vmovss  dword ptr [rdi+0F70h], xmm1
    vmovss  dword ptr [rdi+0F78h], xmm2
    vmovss  dword ptr [rdi+0F7Ch], xmm10
  }
  ++_RDI->constVersions[135];
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+180h+out+4]
    vmovss  xmm0, dword ptr [rsp+180h+out]
    vmovss  dword ptr [rdi+0F88h], xmm13
    vmovaps xmm13, [rsp+180h+var_A0]
    vmovss  dword ptr [rdi+0F80h], xmm0
    vmovss  dword ptr [rdi+0F84h], xmm1
  }
  _RDI->input.consts[136].v[3] = 0.0;
  ++_RDI->constVersions[136];
  if ( _ESI )
  {
    __asm
    {
      vmovss  [rsp+180h+var_150], xmm11
      vmovss  dword ptr [rsp+180h+var_158], xmm15
    }
    RB_InterpolateLensProfileParams((LensProfileMode)_ESI, &distort, &tcaRed, (vec3_t *)&vec, &vignette, v105, v106);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+distort]
    vmovss  xmm1, dword ptr [rbp+80h+distort+4]
    vmovaps xmm15, [rsp+180h+var_C0]
    vmovaps xmm11, [rsp+180h+var_80]
    vmovss  dword ptr [rdi+0F90h], xmm0
    vmovss  xmm0, dword ptr [rbp+80h+distort+8]
    vmovss  dword ptr [rdi+0F98h], xmm0
    vmovss  dword ptr [rdi+0F94h], xmm1
    vmovd   xmm0, esi
    vmovd   xmm1, r14d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, dword ptr [rbp+80h+vignette+4]
    vblendvps xmm0, xmm9, xmm6, xmm2
    vmovaps xmm9, [rsp+180h+var_60]
    vmovss  dword ptr [rdi+0F9Ch], xmm0
  }
  ++_RDI->constVersions[137];
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+vignette]
    vmovss  dword ptr [rdi+0FC0h], xmm0
    vmovss  xmm0, dword ptr [rbp+80h+vignette+8]
    vmovss  dword ptr [rdi+0FC8h], xmm0
    vmovss  xmm0, dword ptr [rbp+80h+tcaRed]
    vmovss  dword ptr [rdi+0FC4h], xmm1
    vmovss  xmm1, dword ptr [rbp+80h+tcaRed+4]
    vmovss  dword ptr [rdi+0FCCh], xmm7
  }
  ++_RDI->constVersions[140];
  __asm
  {
    vmovaps xmm7, [rsp+180h+var_40]
    vmovss  dword ptr [rdi+0FA0h], xmm0
    vmovss  xmm0, dword ptr [rbp+80h+tcaRed+8]
    vmovss  dword ptr [rdi+0FA8h], xmm0
    vmovss  xmm0, dword ptr [rsp+180h+vec]
    vmovss  dword ptr [rdi+0FA4h], xmm1
    vmovss  xmm1, dword ptr [rsp+180h+vec+4]
    vmovss  dword ptr [rdi+0FACh], xmm12
  }
  ++_RDI->constVersions[138];
  __asm
  {
    vmovaps xmm12, [rsp+180h+var_90]
    vmovss  dword ptr [rdi+0FB0h], xmm0
    vmovss  xmm0, dword ptr [rsp+180h+vec+8]
  }
  _RDI->input.consts[139].v[3] = 0.0;
  __asm
  {
    vmovss  dword ptr [rdi+0FB8h], xmm0
    vmovss  dword ptr [rdi+0FB4h], xmm1
  }
  v14 = _RDI->constVersions[139]++ == 0xFFFF;
  __asm
  {
    vucomiss xmm10, xmm6
    vmovaps xmm10, [rsp+180h+var_70]
    vmovaps xmm6, [rsp+180h+var_30]
  }
  return v14 && !_ESI && (*((_DWORD *)&_RBX->viewportFeatures + 11) & 0x100) == 0;
}

