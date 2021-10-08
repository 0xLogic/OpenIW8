/*
==============
R_DOF_Median
==============
*/

void __fastcall R_DOF_Median(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *halfAlphaPingPongHandle, R_RT_ColorHandle *halfColorPingPongHandle)
{
  ?R_DOF_Median@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(gfxContext, halfAlphaPingPongHandle, halfColorPingPongHandle);
}

/*
==============
R_DOF_TileDownsample_Horizontal
==============
*/

void __fastcall R_DOF_TileDownsample_Horizontal(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *texture0, const vec2_t *bias, const vec2_t *scale)
{
  ?R_DOF_TileDownsample_Horizontal@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@AEBTvec2_t@@2@Z(gfxContext, texture0, bias, scale);
}

/*
==============
RB_DOF_GetCircleOfConfusionClip
==============
*/

double __fastcall RB_DOF_GetCircleOfConfusionClip()
{
  double result; 

  *(float *)&result = ?RB_DOF_GetCircleOfConfusionClip@@YAMXZ();
  return result;
}

/*
==============
R_DOF_Downsample
==============
*/

void __fastcall R_DOF_Downsample(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *sourceHandle, const R_RT_ColorHandle *outputHandle)
{
  ?R_DOF_Downsample@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@AEBV3@@Z(computeState, viewInfo, sourceHandle, outputHandle);
}

/*
==============
R_DOF_TileDownsample_GetParams
==============
*/

void __fastcall R_DOF_TileDownsample_GetParams(unsigned int inputWidth, unsigned int inputHeight, unsigned int tileWidth, unsigned int tileHeight, vec2_t *bias, vec2_t *scale)
{
  ?R_DOF_TileDownsample_GetParams@@YAXIIIIAEATvec2_t@@0@Z(inputWidth, inputHeight, tileWidth, tileHeight, bias, scale);
}

/*
==============
R_DOF_GetEquationParams
==============
*/

void __fastcall R_DOF_GetEquationParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, vec4_t *dofEquationLinear, vec4_t *dofEquationClip)
{
  ?R_DOF_GetEquationParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEATvec4_t@@2@Z(gfxContext, viewInfo, dofEquationLinear, dofEquationClip);
}

/*
==============
R_DOF_Upsample
==============
*/

void __fastcall R_DOF_Upsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *halfColorPingPongHandle, R_RT_ColorHandle *halfAlphaHandle, R_RT_ColorHandle *halfPrepassHandle, R_RT_ColorHandle *scopeBuffer, R_RT_ColorHandle *floatZColorRt, R_RT_ColorHandle *sourceHandle)
{
  ?R_DOF_Upsample@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@222222@Z(gfxContext, viewInfo, tile1Handle, halfColorPingPongHandle, halfAlphaHandle, halfPrepassHandle, scopeBuffer, floatZColorRt, sourceHandle);
}

/*
==============
R_DOF_TileNeighor
==============
*/

void __fastcall R_DOF_TileNeighor(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *tile0Handle)
{
  ?R_DOF_TileNeighor@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(gfxContext, tile0Handle);
}

/*
==============
R_DOF_TileDownsample_Vertical
==============
*/

void __fastcall R_DOF_TileDownsample_Vertical(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *texture0, const vec2_t *bias, const vec2_t *scale)
{
  ?R_DOF_TileDownsample_Vertical@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@AEBTvec2_t@@2@Z(gfxContext, texture0, bias, scale);
}

/*
==============
R_DOF_UpdateEquationParams
==============
*/

void __fastcall R_DOF_UpdateEquationParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_DOF_UpdateEquationParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_DOF_Sharpen
==============
*/

void __fastcall R_DOF_Sharpen(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *halfColorHandle)
{
  ?R_DOF_Sharpen@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(gfxContext, halfColorHandle);
}

/*
==============
R_DOF_CircularFilterFullres
==============
*/

void __fastcall R_DOF_CircularFilterFullres(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHalfResHandle, R_RT_ColorHandle *sourceHandle, R_RT_ColorHandle *floatZColorRt, R_RT_ColorHandle *scopeBuffer)
{
  ?R_DOF_CircularFilterFullres@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2222@Z(gfxContext, viewInfo, tile1Handle, sourceHalfResHandle, sourceHandle, floatZColorRt, scopeBuffer);
}

/*
==============
R_DOF_Prepass
==============
*/

void __fastcall R_DOF_Prepass(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *floatZ, R_RT_ColorHandle *prevHalfColorHandle, R_RT_ColorHandle *prevHalfPrepassHandle, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHandle, R_RT_ColorHandle *halfVelocityRt)
{
  ?R_DOF_Prepass@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@11111@Z(gfxContext, floatZ, prevHalfColorHandle, prevHalfPrepassHandle, tile1Handle, sourceHandle, halfVelocityRt);
}

/*
==============
RB_DOF_GetDistance
==============
*/

double __fastcall RB_DOF_GetDistance()
{
  double result; 

  *(float *)&result = ?RB_DOF_GetDistance@@YAMXZ();
  return result;
}

/*
==============
RB_DOF_UpdateDistanceMeter
==============
*/

void __fastcall RB_DOF_UpdateDistanceMeter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *floatZColorRt)
{
  ?RB_DOF_UpdateDistanceMeter@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, floatZColorRt);
}

/*
==============
RB_ApplyDepthOfField
==============
*/

void __fastcall RB_ApplyDepthOfField(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, R_RT_ColorHandle *scopeBuffer, const GfxBackEndData *data)
{
  ?RB_ApplyDepthOfField@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@VR_RT_ColorHandle@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, activeGroup, scopeBuffer, data);
}

/*
==============
RB_DepthOfField_FreeTemporalRts
==============
*/

void RB_DepthOfField_FreeTemporalRts(void)
{
  ?RB_DepthOfField_FreeTemporalRts@@YAXXZ();
}

/*
==============
R_DOF_TemporalSampling
==============
*/

bool __fastcall R_DOF_TemporalSampling(const GfxViewInfo *viewInfo)
{
  return ?R_DOF_TemporalSampling@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_DOF_UpdateBufferParams
==============
*/

void __fastcall R_DOF_UpdateBufferParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, unsigned int rtWidth, unsigned int rtHeight)
{
  ?R_DOF_UpdateBufferParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@II@Z(gfxContext, viewInfo, rtWidth, rtHeight);
}

/*
==============
R_DOF_CircularFilter
==============
*/

void __fastcall R_DOF_CircularFilter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *halfPrepassHandle, R_RT_ColorHandle *halfColorHandle, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHandle)
{
  ?R_DOF_CircularFilter@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@222@Z(gfxContext, viewInfo, halfPrepassHandle, halfColorHandle, tile1Handle, sourceHandle);
}

/*
==============
RB_DOF_GetCircleOfConfusionLinear
==============
*/

double __fastcall RB_DOF_GetCircleOfConfusionLinear()
{
  double result; 

  *(float *)&result = ?RB_DOF_GetCircleOfConfusionLinear@@YAMXZ();
  return result;
}

/*
==============
RB_ApplyDepthOfField
==============
*/
void RB_ApplyDepthOfField(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, R_RT_ColorHandle *scopeBuffer)
{
  const dvar_t *v13; 
  int v14; 
  int v15; 
  const dvar_t *v16; 
  int v17; 
  int rtFlags; 
  unsigned int m_allocHeight; 
  unsigned int m_allocWidth; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  bool v31; 
  __int16 v32; 
  unsigned __int16 v33; 
  const char *v37; 
  int v38; 
  const char *v39; 
  unsigned int width; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  bool v48; 
  unsigned int v65; 
  bool v70; 
  bool v84; 
  GfxCmdBufState *state; 
  int v104; 
  bool v108; 
  int v109; 
  bool v113; 
  bool v117; 
  unsigned int v122; 
  unsigned int v123; 
  bool v127; 
  bool v131; 
  __int64 frameIndex; 
  bool v136; 
  bool v140; 
  __int64 v141; 
  bool v145; 
  unsigned int v150; 
  const R_RT_Surface *v151; 
  const char *m_location; 
  unsigned int v179; 
  const R_RT_Surface *v180; 
  const char *v191; 
  GfxCmdBufState *v209; 
  R_RT_Handle v221; 
  R_RT_Handle v222; 
  R_RT_Handle v223; 
  R_RT_Handle result; 
  int v225; 
  R_RT_ColorHandle *v226; 
  R_RT_Group *v227; 
  R_RT_ColorHandle v228; 
  DepthOfField_RenderState v229; 
  R_RT_ColorHandle v230; 
  R_RT_ColorHandle v231; 
  R_RT_ColorHandle v232; 
  R_RT_Handle v233; 
  char *v234[4]; 
  R_RT_ColorHandle v235; 
  R_RT_Group v236; 
  R_RT_Group v237; 

  _RBX = activeGroup;
  v226 = scopeBuffer;
  _R14 = gfxContext;
  v227 = activeGroup;
  _R15 = viewInfo;
  if ( !R_UsingDepthOfField(viewInfo) )
    return;
  v48 = _RBX->m_colorRtCount == 1;
  __asm
  {
    vmovaps [rsp+5F0h+var_50], xmm6
    vmovaps [rsp+5F0h+var_60], xmm7
    vmovaps [rsp+5F0h+var_70], xmm8
    vmovaps [rsp+5F0h+var_80], xmm9
  }
  if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rbx+8] }
  v13 = DCONST_DVARINT_r_dccPostFX;
  __asm { vmovups ymmword ptr [rbp+4D0h+var_490.m_surfaceID], ymm0 }
  if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v48 = v13->current.integer == 1;
  v14 = 0;
  v225 = 8;
  if ( v48 )
    v14 = 8;
  v15 = 2112;
  if ( Dvar_GetBool_Internal(r_deviceDebug) )
    goto LABEL_15;
  v16 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = 2112;
  if ( !v16->current.enabled )
LABEL_15:
    v17 = 2048;
  rtFlags = v14 | v17;
  m_allocHeight = R_RT_Handle::GetSurface(&v229.sourceHandle)->m_allocHeight;
  m_allocWidth = R_RT_Handle::GetSurface(&v229.sourceHandle)->m_allocWidth;
  height = R_RT_Handle::GetSurface(&v229.sourceHandle)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v229.sourceHandle);
  _RAX = R_RT_CreateInternal(&result, Surface->m_image.m_base.width, height, m_allocWidth, m_allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)rtFlags, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "dof color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(619)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v223);
    if ( (R_RT_Handle::GetSurface(&v223)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups [rbp+4D0h+var_470], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
  }
  R_RT_Group::AssignColor(v227, (R_RT_ColorHandle *)&v223);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15+3340h]
    vmovups [rbp+4D0h+var_4B0], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_448.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&result, &v223, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_290.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v233);
    if ( (R_RT_Handle::GetSurface(&v233)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v233.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v233.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_290.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v233.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v233.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_290.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID] }
      if ( v31 )
        __debugbreak();
    }
  }
  __asm { vmovups [rbp+4D0h+var_250], ymm0 }
  v32 = _EBX & 0x7FFF;
  if ( v32 )
    v33 = v32 | 0x8000;
  else
    v33 = 0;
  v223.m_surfaceID = v33;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+4D0h+var_290.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rbp+4D0h+var_290.m_tracking.m_location]
    vmovups xmmword ptr [rbp+4D0h+var_510.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+4D0h+var_510.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID]
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
  }
  if ( v33 )
  {
    R_RT_Handle::GetSurface(&v223);
    if ( (R_RT_Handle::GetSurface(&v223)->m_rtFlagsInternal & 0x18) != 0 )
    {
      v37 = "!unionHandle.IsValid() || unionHandle.IsColor()";
      v38 = 217;
      v39 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
LABEL_40:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v38, ASSERT_TYPE_ASSERT, v39, (const char *)&queryFormat, v37) )
        __debugbreak();
    }
  }
  else if ( (_DWORD)_RDI )
  {
    v37 = "!this->m_tracking.m_allocCounter";
    v38 = 100;
    v39 = "(!this->m_tracking.m_allocCounter)";
    goto LABEL_40;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID]
    vmovups ymmword ptr [rbp+4D0h+var_428.m_surfaceID], ymm0
  }
  width = R_RT_Handle::GetSurface(&v229.floatZColorRt)->m_image.m_base.width;
  v229.sceneWidth = width;
  v42 = R_RT_Handle::GetSurface(&v229.floatZColorRt)->m_image.m_base.height;
  v229.sceneHeight = v42;
  v43 = truncate_cast<unsigned short,unsigned int>(width >> 4);
  v229.tileWidth = v43;
  v44 = truncate_cast<unsigned short,unsigned int>(v42 >> 4);
  v229.tileHeight = v44;
  if ( Dvar_GetBool_Internal(r_deviceDebug) )
    goto LABEL_47;
  v45 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  if ( !v45->current.enabled )
LABEL_47:
    v15 = 2048;
  v46 = DCONST_DVARINT_r_dccPostFX;
  if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  if ( v46->current.integer != 1 )
    v225 = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  R_DOF_GetEquationParams((GfxCmdBufContext *)&v221, _R15, (vec4_t *)v234, (vec4_t *)&v233);
  R_DOF_GetBokehMaxCocDiameter(_R15);
  __asm { vmovss  xmm9, cs:__real@3f800000 }
  _RAX = _R14->source;
  __asm
  {
    vdivss  xmm0, xmm9, xmm0
    vmulss  xmm2, xmm0, dword ptr [r15+0CA4h]
    vmulss  xmm5, xmm2, dword ptr [rbp+4D0h+var_270]
    vucomiss xmm5, dword ptr [rax+960h]
    vmulss  xmm4, xmm2, dword ptr [rbp+4D0h+var_270+4]
    vmulss  xmm3, xmm2, dword ptr [rbp+4D0h+var_270+8]
    vmulss  xmm1, xmm2, dword ptr [rbp+4D0h+var_270+0Ch]
  }
  if ( !v48 )
    goto LABEL_57;
  __asm { vucomiss xmm4, dword ptr [rax+964h] }
  if ( !v48 )
    goto LABEL_57;
  __asm { vucomiss xmm3, dword ptr [rax+968h] }
  if ( !v48 )
    goto LABEL_57;
  __asm { vucomiss xmm1, dword ptr [rax+96Ch] }
  if ( !v48 )
  {
LABEL_57:
    __asm
    {
      vmovss  dword ptr [rax+960h], xmm5
      vmovss  dword ptr [rax+964h], xmm4
      vmovss  dword ptr [rax+968h], xmm3
      vmovss  dword ptr [rax+96Ch], xmm1
    }
    ++_RAX->constVersions[38];
  }
  R_RT_Handle::GetSurface(&v229.sourceHandle);
  R_RT_Handle::GetSurface(&v229.sourceHandle);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  *(double *)&_XMM0 = R_DOF_GetBokehMaxCocDiameter(_R15);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  v65 = _R15->postAA.mode - 2;
  __asm
  {
    vdivss  xmm8, xmm2, xmm1
    vdivss  xmm7, xmm2, xmm0
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm3, xmm3, xmm3
  }
  v70 = v65 == 1;
  if ( v65 <= 1 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (Sys_Microseconds() & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@37c9539c
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm0, xmm0, xmm1, 1; X
      vmovss  xmm1, cs:__real@44160000; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vaddss  xmm3, xmm0, cs:__real@44800000 }
  }
  _RAX = *(_QWORD *)&v221.m_surfaceID;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.dofFilter.fireflySuppression; r_globals_t rg
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm5, xmm5, xmm5
    vucomiss xmm8, dword ptr [rax+970h]
    vcvtsi2ss xmm4, xmm4, r13
    vcvtsi2ss xmm5, xmm5, rbx
  }
  if ( !v70 )
    goto LABEL_66;
  __asm { vucomiss xmm7, dword ptr [rax+974h] }
  if ( !v70 )
    goto LABEL_66;
  __asm { vucomiss xmm6, dword ptr [rax+978h] }
  if ( !v70 )
    goto LABEL_66;
  __asm { vucomiss xmm0, dword ptr [rax+97Ch] }
  if ( v70 )
  {
    v84 = 1;
    _ER13 = 0;
  }
  else
  {
LABEL_66:
    _ER13 = 0;
    *(_DWORD *)(*(_QWORD *)&v221.m_surfaceID + 2424i64) = 0;
    __asm
    {
      vmovss  dword ptr [rax+970h], xmm8
      vmovss  dword ptr [rax+974h], xmm7
      vmovss  dword ptr [rax+97Ch], xmm0
    }
    v84 = (*(_WORD *)(_RAX + 10242))++ == 0xFFFF;
  }
  __asm
  {
    vmovd   xmm0, cs:?rg@@3Ur_globals_t@@A.dofFilter.temporalFilterEnabled; r_globals_t rg
    vmovd   xmm1, r13d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.dofFilter.bokehEdgeSharpness; r_globals_t rg
    vucomiss xmm1, dword ptr [rax+990h]
    vblendvps xmm0, xmm9, xmm6, xmm2
  }
  if ( !v84 )
    goto LABEL_72;
  __asm { vucomiss xmm6, dword ptr [rax+994h] }
  if ( !v84 )
    goto LABEL_72;
  __asm { vucomiss xmm0, dword ptr [rax+998h] }
  if ( !v84 )
    goto LABEL_72;
  __asm { vucomiss xmm3, dword ptr [rax+99Ch] }
  if ( !v84 )
  {
LABEL_72:
    __asm
    {
      vmovss  dword ptr [rax+990h], xmm1
      vmovss  dword ptr [rax+998h], xmm0
      vmovss  dword ptr [rax+99Ch], xmm3
    }
    *(_DWORD *)(_RAX + 2452) = 0;
    v84 = (*(_WORD *)(_RAX + 10246))++ == 0xFFFF;
  }
  __asm
  {
    vmovd   xmm0, cs:?rg@@3Ur_globals_t@@A.dofFilter.backgroundReconstruction; r_globals_t rg
    vmovd   xmm1, r13d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.dofFilter.sharpen; r_globals_t rg
    vucomiss xmm1, dword ptr [rax+9A0h]
    vmulss  xmm3, xmm5, xmm7
    vmovaps xmm7, [rsp+5F0h+var_60]
    vmulss  xmm4, xmm4, xmm8
    vmovaps xmm8, [rsp+5F0h+var_70]
    vblendvps xmm0, xmm9, xmm6, xmm2
    vmovaps xmm9, [rsp+5F0h+var_80]
  }
  if ( !v84 )
    goto LABEL_77;
  __asm { vucomiss xmm0, dword ptr [rax+9A4h] }
  if ( !v84 )
    goto LABEL_77;
  __asm { vucomiss xmm4, dword ptr [rax+9A8h] }
  if ( !v84 )
    goto LABEL_77;
  __asm { vucomiss xmm3, dword ptr [rax+9ACh] }
  if ( !v84 )
  {
LABEL_77:
    __asm
    {
      vmovss  dword ptr [rax+9A0h], xmm1
      vmovss  dword ptr [rax+9A4h], xmm0
      vmovss  dword ptr [rax+9A8h], xmm4
      vmovss  dword ptr [rax+9ACh], xmm3
    }
    ++*(_WORD *)(_RAX + 10248);
  }
  __asm
  {
    vmovups ymm0, [rbp+4D0h+var_4B0]
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  RB_DOF_UpdateDistanceMeter((GfxCmdBufContext *)&v221, _R15, (R_RT_ColorHandle *)&v223);
  __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
  state = _R14->state;
  __asm { vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0 }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v222, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v104 = v225 | v15;
  _RAX = R_RT_CreateInternal(&result, v43, v44, v43, v44, 1u, 1u, 1u, g_R_RT_renderTargetFmts[24], (R_RT_Flags)v104, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_TILE1", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(641)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v222);
    if ( (R_RT_Handle::GetSurface(&v222)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v108 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID] }
      if ( v108 )
        __debugbreak();
    }
  }
  __asm { vmovups [rbp+4D0h+var_3D8], ymm0 }
  R_ProfBeginNamedEvent(state, "Bokeh DoF");
  R_GPU_BeginTimer(GPU_TIMER_DOF_TILE);
  v109 = R_RT_Handle::GetSurface(&v229.floatZColorRtForTileDownsample)->m_image.m_base.height >> 1;
  _RAX = R_RT_CreateInternal(&result, v43, v44, v43, v44, 1u, 1u, 1u, g_R_RT_renderTargetFmts[24], (R_RT_Flags)v104, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_TILE0", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(647)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v222);
    if ( (R_RT_Handle::GetSurface(&v222)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v113 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID] }
      if ( v113 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymmword ptr [r15+3668h], ymm0
    vmovups [rbp+4D0h+var_3F8], ymm0
  }
  _RAX = R_RT_CreateInternal(&result, v43, v109, v43, v109, 1u, 1u, 1u, g_R_RT_renderTargetFmts[24], (R_RT_Flags)v104, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_TILE0_PINGPONG", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(649)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v222);
    if ( (R_RT_Handle::GetSurface(&v222)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v117 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID] }
      if ( v117 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups [rbp+4D0h+var_318], ymm0
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  RB_DOF_TileDownsample((GfxCmdBufContext *)&v221, _R15, &v229);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  RB_DOF_TileNeighbor((GfxCmdBufContext *)&v221, _R15, &v229);
  __asm
  {
    vmovups ymm0, [rbp+4D0h+var_318]
    vmovups xmm1, xmmword ptr [r14]
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v221, (R_RT_ColorHandle *)&v222);
  R_GPU_EndTimer();
  v234[0] = "R_RENDERTARGET_DOF_HALF_COLOR_PINGPONG_0";
  v234[1] = "R_RENDERTARGET_DOF_HALF_COLOR_PINGPONG_1";
  *(_QWORD *)&v221.m_surfaceID = "R_RENDERTARGET_DOF_HALF_PREPASS_0";
  *(_QWORD *)&v221.m_tracking.m_allocCounter = "R_RENDERTARGET_DOF_HALF_PREPASS_1";
  v122 = v229.sceneWidth >> 1;
  v123 = v229.sceneHeight >> 1;
  _RAX = R_RT_CreateInternal(&result, v229.sceneWidth >> 1, v229.sceneHeight >> 1, v229.sceneWidth >> 1, v229.sceneHeight >> 1, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)v104, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_HALF_COLOR", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(661)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+4D0h+var_4B0], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v222);
    if ( (R_RT_Handle::GetSurface(&v222)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
        vmovups [rbp+4D0h+var_4B0], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
        vmovups [rbp+4D0h+var_4B0], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v127 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+4D0h+var_4B0] }
      if ( v127 )
        __debugbreak();
    }
  }
  __asm { vmovups [rbp+4D0h+var_398], ymm0 }
  _RAX = R_RT_CreateInternal(&result, v122, v123, v122, v123, 1u, 1u, 1u, g_R_RT_renderTargetFmts[27], (R_RT_Flags)v104, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_HALF_ALPHA", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(662)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_290.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v222);
    if ( (R_RT_Handle::GetSurface(&v222)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_290.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_290.m_surfaceID], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v131 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_290.m_surfaceID] }
      if ( v131 )
        __debugbreak();
    }
  }
  frameIndex = _R15->input.data->frameIndex;
  __asm { vmovups [rbp+4D0h+var_378], ymm0 }
  _RAX = R_RT_CreateInternal(&result, v122, v123, v122, v123, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)v104, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v234[frameIndex], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(663)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_270], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v222);
    if ( (R_RT_Handle::GetSurface(&v222)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_270], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_270], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v136 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_270] }
      if ( v136 )
        __debugbreak();
    }
  }
  __asm { vmovups [rbp+4D0h+var_358], ymm0 }
  _RAX = R_RT_CreateInternal(&result, v122, v123, v122, v123, 1u, 1u, 1u, g_R_RT_renderTargetFmts[27], (R_RT_Flags)v104, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_HALF_ALPHA_PINGPONG", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(664)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v222);
    if ( (R_RT_Handle::GetSurface(&v222)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v140 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID] }
      if ( v140 )
        __debugbreak();
    }
  }
  v141 = _R15->input.data->frameIndex;
  __asm { vmovups [rbp+4D0h+var_338], ymm0 }
  _RAX = R_RT_CreateInternal(&result, v122, v123, v122, v123, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)v104, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *((const char **)&v221.m_surfaceID + v141), 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(665)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+4D0h+var_550.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v221);
    if ( (R_RT_Handle::GetSurface(&v221)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_550.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
      }
      __debugbreak();
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+4D0h+var_550.m_surfaceID]
        vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
      }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v145 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID] }
      if ( v145 )
        __debugbreak();
    }
  }
  __asm { vmovups [rbp+4D0h+var_3B8], ymm0 }
  if ( rg.dofFilter.fullres )
  {
    R_GPU_BeginTimer(GPU_TIMER_DOF_FILTER);
    __asm
    {
      vmovups xmm6, xmmword ptr [r14]
      vpextrq rdi, xmm6, 1
    }
    R_ProfBeginNamedEvent(_RDI, "DOF Circular Filter");
    __asm
    {
      vmovups ymm0, [rbp+4D0h+var_3D8]
      vmovups ymmword ptr [rbp+4D0h+var_550.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&v221, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    __asm
    {
      vmovups ymm0, [rbp+4D0h+var_470]
      vmovups ymmword ptr [rbp+4D0h+var_550.m_surfaceID], ymm0
    }
    v150 = R_RT_Handle::GetSurface(&v221)->m_image.m_base.height;
    v151 = R_RT_Handle::GetSurface(&v221);
    __asm { vmovq   rcx, xmm6; source }
    R_SetRenderTargetSize(_RCX, v151->m_image.m_base.width, v150, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, [rbp+4D0h+var_470]
      vmovups ymmword ptr [rbp+4D0h+var_550.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(&v236, (R_RT_ColorHandle *)&v221);
    _RCX = &v237;
    _RAX = &v236;
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
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
    }
    m_location = v236.m_vrsRt.m_tracking.m_location;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v237.m_vrsRt.m_tracking.m_location = m_location;
    __asm { vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v221, &v237, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(476)");
    __asm { vmovups ymm1, ymmword ptr [r15+3340h] }
    _RSI = v226;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups [rbp+4D0h+var_2F0], ymm0
      vmovups ymm0, ymmword ptr [rbp+4D0h+var_490.m_surfaceID]
      vmovups [rbp+4D0h+var_2B0], ymm0
      vmovups [rbp+4D0h+var_250], ymm0
      vmovups ymm0, [rbp+4D0h+var_3D8]
      vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
      vmovups [rbp+4D0h+var_2D0], ymm1
      vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm6
    }
    R_DOF_CircularFilterFullres((GfxCmdBufContext *)&v221, _R15, (R_RT_ColorHandle *)&result, &v235, &v232, &v231, &v230);
    R_ProfEndNamedEvent(_RDI);
  }
  else
  {
    R_GPU_BeginTimer(GPU_TIMER_DOF_FILTER);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
    }
    RB_DOF_Prepass((GfxCmdBufContext *)&v221, _R15, &v229);
    __asm { vmovups xmm1, xmmword ptr [r14] }
    _RSI = v226;
    __asm
    {
      vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm1
      vmovups ymm0, ymmword ptr [rsi]
      vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    }
    RB_DOF_CircularFilter((GfxCmdBufContext *)&v221, _R15, &v229, (R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
    }
    RB_DOF_Median((GfxCmdBufContext *)&v221, _R15, &v229);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
    }
    RB_DOF_Sharpen((GfxCmdBufContext *)&v221, _R15, &v229);
    __asm
    {
      vmovups xmm6, xmmword ptr [r14]
      vpextrq rdi, xmm6, 1
    }
    R_ProfBeginNamedEvent(_RDI, "DOF Upsample");
    __asm
    {
      vmovups ymm0, [rbp+4D0h+var_358]
      vmovups ymmword ptr [rbp+4D0h+var_270], ymm0
      vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, [rbp+4D0h+var_378]
      vmovups ymmword ptr [rbp+4D0h+var_290.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    __asm
    {
      vmovups ymm0, [rbp+4D0h+var_470]
      vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
    }
    v179 = R_RT_Handle::GetSurface(&v222)->m_image.m_base.height;
    v180 = R_RT_Handle::GetSurface(&v222);
    __asm { vmovq   rcx, xmm6; source }
    R_SetRenderTargetSize(_RCX, v180->m_image.m_base.width, v179, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, [rbp+4D0h+var_470]
      vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(&v237, (R_RT_ColorHandle *)&result);
    _RAX = &v237;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymm1, ymmword ptr [rax+80h]
    }
    _RCX = &v236;
    __asm
    {
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
    }
    v191 = v237.m_vrsRt.m_tracking.m_location;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v236.m_vrsRt.m_tracking.m_location = v191;
    __asm { vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v221, &v236, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(601)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+4D0h+var_490.m_surfaceID]
      vmovups ymm1, ymmword ptr [rsi]
      vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [rbp+4D0h+var_448.m_surfaceID]
      vmovups [rbp+4D0h+var_250], ymm0
      vmovups ymm0, [rbp+4D0h+var_3B8]
      vmovups ymmword ptr [rbp+4D0h+var_530.m_surfaceID], ymm0
      vmovups [rbp+4D0h+var_2D0], ymm0
      vmovups ymm0, ymmword ptr [rbp+4D0h+var_270]
      vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
      vmovups ymm0, [rbp+4D0h+var_3D8]
      vmovups [rbp+4D0h+var_2B0], ymm1
      vmovups ymm1, ymmword ptr [rbp+4D0h+var_290.m_surfaceID]
      vmovups [rbp+4D0h+var_4B0], ymm0
      vmovups [rbp+4D0h+var_2F0], ymm1
      vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm6
    }
    R_DOF_Upsample((GfxCmdBufContext *)&v221, _R15, &v228, (R_RT_ColorHandle *)&v223, &v230, &v231, &v232, &v235, (R_RT_ColorHandle *)&result);
    R_ProfEndNamedEvent(_RDI);
    __asm
    {
      vmovups ymm0, [rbp+4D0h+var_338]
      vmovups ymmword ptr [rbp+4D0h+var_510.m_surfaceID], ymm0
      vmovups ymm0, [rbp+4D0h+var_398]
      vmovups [rbp+4D0h+var_4B0], ymm0
    }
  }
  R_GPU_EndTimer();
  __asm
  {
    vmovups ymm0, [rbp+4D0h+var_4B0]
    vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  R_RT_Destroy((GfxCmdBufContext *)&v221, (R_RT_ColorHandle *)&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+4D0h+var_290.m_surfaceID]
    vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  R_RT_Destroy((GfxCmdBufContext *)&v221, (R_RT_ColorHandle *)&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+4D0h+var_510.m_surfaceID]
    vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  R_RT_Destroy((GfxCmdBufContext *)&v221, (R_RT_ColorHandle *)&result);
  __asm
  {
    vmovups ymm0, [rbp+4D0h+var_3D8]
    vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0
  }
  R_RT_Destroy((GfxCmdBufContext *)&v221, (R_RT_ColorHandle *)&result);
  v209 = _R14->state;
  R_ProfEndNamedEvent(v209);
  __asm
  {
    vmovups ymm0, [rbp+4D0h+var_470]
    vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(v209, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v209);
  __asm { vmovaps xmm6, [rsp+5F0h+var_50] }
  if ( s_dofPrevHalfHandlesValid )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_dofPrevHalfPrepassHandle.baseclass_0.m_surfaceID
      vmovups xmm1, xmmword ptr [r14]
      vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
      vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm1
    }
    R_RT_Destroy((GfxCmdBufContext *)&v221, (R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_dofPrevHalfColorHandle.baseclass_0.m_surfaceID
      vmovups xmm1, xmmword ptr [r14]
      vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
      vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm1
    }
    R_RT_Destroy((GfxCmdBufContext *)&v221, (R_RT_ColorHandle *)&result);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+4D0h+var_530.m_surfaceID]
    vmovups ymmword ptr cs:s_dofPrevHalfPrepassHandle.baseclass_0.m_surfaceID, ymm0
    vmovups ymm0, ymmword ptr [rbp+4D0h+var_270]
    vmovups ymmword ptr cs:s_dofPrevHalfColorHandle.baseclass_0.m_surfaceID, ymm0
    vmovups ymm0, ymmword ptr [rbp+4D0h+var_490.m_surfaceID]
    vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [r14]
  }
  s_dofPrevHalfHandlesValid = 1;
  __asm { vmovups xmmword ptr [rbp+4D0h+var_550.m_surfaceID], xmm0 }
  R_RT_Destroy((GfxCmdBufContext *)&v221, (R_RT_ColorHandle *)&result);
  __asm
  {
    vmovups ymm0, [rbp+4D0h+var_470]
    vmovups ymmword ptr [rbp+4D0h+result.m_surfaceID], ymm0
  }
  R_RT_Group::AssignColor(v227, (R_RT_ColorHandle *)&result);
}

/*
==============
RB_DOF_CircularFilter
==============
*/
void RB_DOF_CircularFilter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState, R_RT_ColorHandle *scopeBuffer)
{
  GfxCmdBufState *state; 
  __int64 v15; 
  const char *v30; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v40; 
  GfxCmdBufContext v41; 
  const GfxViewInfo *v42; 
  R_RT_Handle v43; 
  R_RT_ColorHandle v44; 
  char v45[136]; 
  const char *v47; 
  R_RT_Group v48; 
  R_RT_ColorHandle v49[2]; 

  state = gfxContext->state;
  _R14 = dofState;
  v42 = viewInfo;
  v41.source = (GfxCmdBufSourceState *)gfxContext;
  R_ProfBeginNamedEvent(state, "DOF Circular Filter");
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+0D8h]
    vmovups ymmword ptr [rsp+2D0h+var_2A0.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v40, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+0F8h]
    vmovups ymmword ptr [rsp+2D0h+var_2A0.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v40, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+138h]
    vmovups ymmword ptr [rsp+2D0h+var_2A0.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v40, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+158h]
    vmovups ymmword ptr [rsp+2D0h+var_2A0.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v40, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+138h]
    vmovups ymm1, ymmword ptr [r14+158h]
  }
  _RBX = 0i64;
  v45[0] = 2;
  __asm
  {
    vmovups [rbp+1D0h+var_80], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2D0h+var_2A0.m_tracking.m_name], xmm0
  }
  v15 = 2i64;
  v40.m_surfaceID = 0;
  __asm { vmovups [rbp+1D0h+var_60], ymm1 }
  v40.m_tracking.m_allocCounter = 0;
  do
  {
    __asm
    {
      vmovups ymm0, [rbp+rbx+1D0h+var_80]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+2D0h+var_260.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v43);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rbp+rbx+1D0h+var_80]
      vmovups [rbp+rbx+1D0h+var_218], ymm0
    }
    _RBX += 32i64;
    --v15;
  }
  while ( v15 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+2D0h+var_2A0.m_surfaceID]
    vmovups [rbp+1D0h+var_198], ymm0
  }
  _RCX = &v48;
  _RAX = v45;
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
    vmovups ymm0, ymmword ptr [r14+138h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v30 = v47;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v48.m_vrsRt.m_tracking.m_location = v30;
  __asm { vmovups ymmword ptr [rsp+2D0h+var_2A0.m_surfaceID], ymm0 }
  height = R_RT_Handle::GetSurface(&v40)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v40);
  _R15 = v41.source;
  R_SetRenderTargetSize(*(GfxCmdBufSourceState **)v41.source->matrices.matrix[0].m.m[0].v, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rsp+2D0h+var_280], xmm0
  }
  R_SetRenderTargetsInternal(&v41, &v48, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(458)");
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymm1, ymmword ptr [r14+0B8h]
    vmovups ymmword ptr [rsp+2D0h+var_260.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [r14+0F8h]
    vmovups [rbp+1D0h+var_240], ymm0
    vmovups xmm0, xmmword ptr [r15]
    vmovups ymmword ptr [rsp+2D0h+var_2A0.m_surfaceID], ymm1
    vmovups ymm1, ymmword ptr [r14+0D8h]
    vmovups [rsp+2D0h+var_280], xmm0
    vmovups [rbp+1D0h+var_80], ymm1
  }
  R_DOF_CircularFilter(&v41, v42, v49, &v44, (R_RT_ColorHandle *)&v40, (R_RT_ColorHandle *)&v43);
  R_ProfEndNamedEvent(*(CmdBufState **)&_R15->matrices.matrix[0].m.row0.xyz.z);
}

/*
==============
RB_DOF_GetCircleOfConfusionClip
==============
*/
float RB_DOF_GetCircleOfConfusionClip()
{
  __asm { vmovss  xmm0, cs:s_circleOfConfusionClip }
  return *(float *)&_XMM0;
}

/*
==============
RB_DOF_GetCircleOfConfusionLinear
==============
*/
float RB_DOF_GetCircleOfConfusionLinear()
{
  __asm { vmovss  xmm0, cs:s_circleOfConfusionLinear }
  return *(float *)&_XMM0;
}

/*
==============
RB_DOF_GetDistance
==============
*/
float RB_DOF_GetDistance()
{
  __asm { vmovss  xmm0, cs:s_distance }
  return *(float *)&_XMM0;
}

/*
==============
RB_DOF_Median
==============
*/
void RB_DOF_Median(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  __int64 v14; 
  const char *v29; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v37; 
  GfxCmdBufContext v38; 
  R_RT_Handle v39; 
  char v40[136]; 
  const char *v42; 
  R_RT_Group v43; 

  state = gfxContext->state;
  v38.source = (GfxCmdBufSourceState *)gfxContext;
  _R14 = dofState;
  R_ProfBeginNamedEvent(state, "DOF Median");
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+138h]
    vmovups ymmword ptr [rsp+2A0h+var_270.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v37, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+158h]
    vmovups ymmword ptr [rsp+2A0h+var_270.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v37, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+0F8h]
    vmovups ymmword ptr [rsp+2A0h+var_270.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v37, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+118h]
    vmovups ymmword ptr [rsp+2A0h+var_270.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v37, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+0F8h]
    vmovups ymm1, ymmword ptr [r14+118h]
  }
  _RBX = 0i64;
  v40[0] = 2;
  __asm
  {
    vmovups [rbp+1A0h+var_80], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2A0h+var_270.m_tracking.m_name], xmm0
  }
  v14 = 2i64;
  v37.m_surfaceID = 0;
  __asm { vmovups [rbp+1A0h+var_60], ymm1 }
  v37.m_tracking.m_allocCounter = 0;
  do
  {
    __asm
    {
      vmovups ymm0, [rbp+rbx+1A0h+var_80]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+2A0h+var_240.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v39);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rbp+rbx+1A0h+var_80]
      vmovups [rbp+rbx+1A0h+var_218], ymm0
    }
    _RBX += 32i64;
    --v14;
  }
  while ( v14 );
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+2A0h+var_270.m_surfaceID]
    vmovups [rbp+1A0h+var_198], ymm0
  }
  _RCX = &v43;
  _RAX = v40;
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
    vmovups ymm0, ymmword ptr [r14+0F8h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v29 = v42;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v43.m_vrsRt.m_tracking.m_location = v29;
  __asm { vmovups ymmword ptr [rsp+2A0h+var_270.m_surfaceID], ymm0 }
  height = R_RT_Handle::GetSurface(&v37)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v37);
  _R15 = v38.source;
  R_SetRenderTargetSize(*(GfxCmdBufSourceState **)v38.source->matrices.matrix[0].m.m[0].v, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rsp+2A0h+var_250], xmm0
  }
  R_SetRenderTargetsInternal(&v38, &v43, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(515)");
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+138h]
    vmovups ymm1, ymmword ptr [r14+158h]
    vmovups ymmword ptr [rsp+2A0h+var_240.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rsp+2A0h+var_250], xmm0
    vmovups ymmword ptr [rsp+2A0h+var_270.m_surfaceID], ymm1
  }
  R_DOF_Median(&v38, (R_RT_ColorHandle *)&v37, (R_RT_ColorHandle *)&v39);
  R_ProfEndNamedEvent(*(CmdBufState **)&_R15->matrices.matrix[0].m.row0.xyz.z);
}

/*
==============
RB_DOF_Prepass
==============
*/
void RB_DOF_Prepass(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  const GfxBackEndData *data; 
  __int64 clientIndex; 
  int v10; 
  unsigned int frameCount; 
  __int64 v21; 
  const char *v37; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v50; 
  R_RT_ColorHandle *v51; 
  GfxCmdBufContext v52; 
  DepthOfField_RenderState *v53; 
  R_RT_Handle v54; 
  R_RT_ColorHandle v55; 
  char v56[136]; 
  const char *v58; 
  R_RT_ColorHandle v59; 
  R_RT_ColorHandle v60; 
  R_RT_ColorHandle result; 
  R_RT_Group v62; 
  R_RT_ColorHandle v63[2]; 

  state = gfxContext->state;
  v52.source = (GfxCmdBufSourceState *)gfxContext;
  v53 = dofState;
  _R13 = dofState;
  R_ProfBeginNamedEvent(state, "DOF Prepass");
  data = viewInfo->input.data;
  _RBX = 0i64;
  if ( !s_dofPrevHalfHandlesValid )
  {
    LODWORD(clientIndex) = viewInfo->clientIndex;
    goto LABEL_5;
  }
  clientIndex = viewInfo->clientIndex;
  if ( data->frameCount - s_temporalSamplingLastValidFrame[clientIndex] != 1 )
  {
LABEL_5:
    v10 = 0;
    goto LABEL_6;
  }
  v10 = 1;
LABEL_6:
  frameCount = data->frameCount;
  v51 = &v59;
  s_temporalSamplingLastValidFrame[(int)clientIndex] = frameCount;
  if ( v10 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_dofPrevHalfColorHandle.baseclass_0.m_surfaceID
      vmovups [rbp+250h+var_1B0], ymm0
    }
  }
  else
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+250h+var_1B0+10h], xmm0
    }
    v59.m_surfaceID = 0;
    v59.m_tracking.m_allocCounter = 0;
  }
  _R15 = &v60;
  if ( v10 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_dofPrevHalfPrepassHandle.baseclass_0.m_surfaceID
      vmovups [rbp+250h+var_190], ymm0
    }
  }
  else
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+250h+var_190+10h], xmm0
    }
    v60.m_surfaceID = 0;
    v60.m_tracking.m_allocCounter = 0;
  }
  RB_GetHalfVelocityRt(&result, viewInfo, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0B8h]
    vmovups ymmword ptr [rsp+350h+var_310.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v50, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0D8h]
    vmovups ymmword ptr [rsp+350h+var_310.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v50, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0F8h]
    vmovups ymmword ptr [rsp+350h+var_310.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v50, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0F8h]
    vmovups ymm1, ymmword ptr [r13+0D8h]
    vmovups [rbp+250h+var_80], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+350h+var_310.m_tracking.m_name], xmm0
    vmovups [rbp+250h+var_60], ymm1
  }
  v50.m_surfaceID = 0;
  v50.m_tracking.m_allocCounter = 0;
  v56[0] = 2;
  v21 = 2i64;
  do
  {
    __asm
    {
      vmovups ymm0, [rbp+rbx+250h+var_80]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+250h+var_2C0.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v54);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rbp+rbx+250h+var_80]
      vmovups [rbp+rbx+250h+var_278], ymm0
    }
    _RBX += 32i64;
    --v21;
  }
  while ( v21 );
  __asm { vmovups ymm0, ymmword ptr [rsp+350h+var_310.m_surfaceID] }
  _R13 = v53;
  _RCX = &v62;
  __asm { vmovups [rbp+250h+var_1F8], ymm0 }
  _RAX = v56;
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
    vmovups ymm0, ymmword ptr [r13+0D8h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v37 = v58;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v62.m_vrsRt.m_tracking.m_location = v37;
  __asm { vmovups ymmword ptr [rsp+350h+var_310.m_surfaceID], ymm0 }
  height = R_RT_Handle::GetSurface(&v50)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v50);
  _R12 = v52.source;
  R_SetRenderTargetSize(*(GfxCmdBufSourceState **)v52.source->matrices.matrix[0].m.m[0].v, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rsp+350h+var_2E0], xmm0
  }
  R_SetRenderTargetsInternal(&v52, &v62, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(365)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+250h+result.baseclass_0.m_surfaceID]
    vmovups ymm1, ymmword ptr [r13+0]
  }
  _R14 = (__int64)v51;
  __asm
  {
    vmovups ymmword ptr [rbp+250h+var_2C0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [r13+0B8h]
    vmovups [rbp+250h+var_2A0], ymm0
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr [rsp+350h+var_310.m_surfaceID], ymm1
    vmovups ymm1, ymmword ptr [r15]
    vmovups [rbp+250h+var_1B0], ymm0
    vmovups ymm0, ymmword ptr [r13+48h]
    vmovups [rbp+250h+var_190], ymm1
    vmovups xmm1, xmmword ptr [r12]
    vmovups [rbp+250h+var_80], ymm0
    vmovups [rsp+350h+var_2E0], xmm1
  }
  R_DOF_Prepass(&v52, v63, &v59, &v60, &v55, (R_RT_ColorHandle *)&v50, (R_RT_ColorHandle *)&v54);
  R_ProfEndNamedEvent(*(CmdBufState **)&_R12->matrices.matrix[0].m.row0.xyz.z);
}

/*
==============
RB_DOF_Sharpen
==============
*/
void RB_DOF_Sharpen(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  const char *v26; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Image *p_m_image; 
  CmdBufState *v34; 
  R_RT_Handle v36; 
  R_RT_Handle v37; 
  char v38; 
  const char *v41; 
  R_RT_Group v42; 
  R_RT_Handle v43; 

  __asm { vmovaps [rsp+280h+var_40], xmm6 }
  state = gfxContext->state;
  _RSI = gfxContext;
  _RDI = dofState;
  R_ProfBeginNamedEvent(state, "DOF Sharpen");
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+138h]
    vmovups ymmword ptr [rsp+280h+var_250.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v36, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0F8h]
    vmovups ymmword ptr [rsp+280h+var_250.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v36, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+138h]
    vmovups ymmword ptr [rbp+180h+var_70.m_surfaceID], ymm0
  }
  v38 = 1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+280h+var_250.m_tracking.m_name], xmm0
    vmovups ymm0, ymmword ptr [rdi+138h]
    vmovd   eax, xmm0
  }
  v36.m_surfaceID = 0;
  v36.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymmword ptr [rbp+180h+var_70.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+280h+var_230.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v37);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+180h+var_70.m_surfaceID]
    vmovups [rsp+280h+var_208], ymm0
    vmovups ymm0, ymmword ptr [rsp+280h+var_250.m_surfaceID]
    vmovups [rbp+180h+var_188], ymm0
  }
  _RCX = &v42;
  _RAX = &v38;
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
    vmovups ymm0, ymmword ptr [rdi+0F8h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v26 = v41;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v42.m_vrsRt.m_tracking.m_location = v26;
  __asm { vmovups ymmword ptr [rsp+280h+var_250.m_surfaceID], ymm0 }
  height = R_RT_Handle::GetSurface(&v36)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v36);
  R_SetRenderTargetSize(_RSI->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmmword ptr [rsp+280h+var_250.m_surfaceID], xmm0
  }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v36, &v42, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(549)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0F8h]
    vmovups xmm6, xmmword ptr [rsi]
    vmovups ymmword ptr [rbp+180h+var_70.m_surfaceID], ymm0
    vmovq   rdi, xmm6
  }
  p_m_image = &R_RT_Handle::GetSurface(&v43)->m_image;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RDI == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(_RDI + 8112) = p_m_image;
  __asm { vmovdqa xmmword ptr [rsp+280h+var_250.m_surfaceID], xmm6 }
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v36, rgp.dofSharpenMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(529)");
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RDI == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v34 = _RSI->state;
  *(_QWORD *)(_RDI + 8112) = 0i64;
  R_ProfEndNamedEvent(v34);
  __asm { vmovaps xmm6, [rsp+280h+var_40] }
}

/*
==============
RB_DOF_TileDownsample
==============
*/
void RB_DOF_TileDownsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  const R_RT_Surface *Surface; 
  const char *m_location; 
  unsigned int tileWidth; 
  R_RT_Image *p_m_image; 
  GfxCmdBufState *v41; 
  const R_RT_Surface *v44; 
  const char *v54; 
  unsigned int tileHeight; 
  R_RT_Image *v66; 
  CmdBufState *v67; 
  _QWORD v74[5]; 
  R_RT_Group v75; 
  R_RT_Group v76; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  state = gfxContext->state;
  source = gfxContext->source;
  _RDI = gfxContext;
  _R13 = dofState;
  R_ProfBeginNamedEvent(state, "DOF Tile Downsample");
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+178h]
    vmovups ymmword ptr [rsp+280h+var_258+8], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v74[1], RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+178h]
    vmovups ymmword ptr [rsp+280h+var_258+8], ymm0
  }
  LODWORD(state) = R_RT_Handle::GetSurface((R_RT_Handle *)&v74[1])->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)&v74[1]);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+178h]
    vmovups ymmword ptr [rsp+280h+var_258+8], ymm0
  }
  R_RT_Group::AssignColor(&v75, (R_RT_ColorHandle *)&v74[1]);
  _RCX = &v76;
  _RAX = &v75;
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
    vmovups xmm0, xmmword ptr [rdi]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  m_location = v75.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v76.m_vrsRt.m_tracking.m_location = m_location;
  __asm { vmovups xmmword ptr [rsp+280h+var_258+8], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v74[1], &v76, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(258)");
  tileWidth = _R13->tileWidth;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( R_RT_Handle::GetSurface(&_R13->floatZColorRtForTileDownsample)->m_image.m_base.width )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm8, xmm6, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm8, xmm6 }
  }
  __asm { vmovss  xmm7, cs:__real@3f000000 }
  if ( tileWidth )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rbx
      vdivss  xmm1, xmm7, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm7 }
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+68h]
    vmovups xmm9, xmmword ptr [rdi]
    vmovups ymmword ptr [rsp+280h+var_258+8], ymm0
    vsubss  xmm10, xmm8, xmm1
    vmovq   rbx, xmm9
  }
  p_m_image = &R_RT_Handle::GetSurface((R_RT_Handle *)&v74[1])->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(_RBX + 8112) = p_m_image;
  *(_DWORD *)(_RBX + 2436) = 0;
  *(_DWORD *)(_RBX + 2444) = 0;
  __asm
  {
    vmovss  dword ptr [rbx+980h], xmm10
    vmovss  dword ptr [rbx+988h], xmm8
  }
  ++*(_WORD *)(_RBX + 10244);
  __asm { vmovdqa xmmword ptr [rsp+280h+var_258+8], xmm9 }
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v74[1], rgp.dofTileDownsampleMaterial[0], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(231)");
  __asm { vmovups ymm0, ymmword ptr [r13+178h] }
  v41 = _RDI->state;
  __asm { vmovups ymmword ptr [rsp+280h+var_258+8], ymm0 }
  R_AddRenderTargetTransition(v41, (R_RT_ColorHandle *)&v74[1], RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+98h]
    vmovups ymmword ptr [rsp+280h+var_258+8], ymm0
  }
  R_AddRenderTargetTransition(v41, (R_RT_ColorHandle *)&v74[1], RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v41);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+98h]
    vmovups ymmword ptr [rsp+280h+var_258+8], ymm0
  }
  LODWORD(v41) = R_RT_Handle::GetSurface((R_RT_Handle *)&v74[1])->m_image.m_base.height;
  v44 = R_RT_Handle::GetSurface((R_RT_Handle *)&v74[1]);
  R_SetRenderTargetSize(source, v44->m_image.m_base.width, (unsigned int)v41, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+98h]
    vmovups ymmword ptr [rsp+280h+var_258+8], ymm0
  }
  R_RT_Group::AssignColor(&v76, (R_RT_ColorHandle *)&v74[1]);
  _RCX = &v75;
  _RAX = &v76;
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
  v54 = v76.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
  v75.m_vrsRt.m_tracking.m_location = v54;
  __asm { vmovups xmmword ptr [rsp+280h+var_258+8], xmm9 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v74[1], &v75, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(270)");
  tileHeight = _R13->tileHeight;
  if ( R_RT_Handle::GetSurface(&_R13->pingPongRenderTargetHandle)->m_image.m_base.height )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm6, xmm6, xmm0
    }
  }
  if ( tileHeight )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rbx
      vdivss  xmm1, xmm7, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm7 }
  }
  __asm
  {
    vmulss  xmm0, xmm6, xmm7
    vsubss  xmm8, xmm0, xmm1
    vmovups ymm1, ymmword ptr [r13+178h]
    vmovups ymmword ptr [rsp+280h+var_258+8], ymm1
    vmovups xmm7, xmm9
    vmovq   rbx, xmm7
  }
  v66 = &R_RT_Handle::GetSurface((R_RT_Handle *)&v74[1])->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(_RBX + 8112) = v66;
  __asm
  {
    vmovss  dword ptr [rbx+984h], xmm8
    vmovss  dword ptr [rbx+98Ch], xmm6
  }
  *(_DWORD *)(_RBX + 2432) = 0;
  *(_DWORD *)(_RBX + 2440) = 0;
  ++*(_WORD *)(_RBX + 10244);
  __asm { vmovdqa xmmword ptr [rsp+280h+var_258+8], xmm7 }
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v74[1], rgp.dofTileDownsampleMaterial[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(239)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v67 = _RDI->state;
  source->input.codeImages[22] = NULL;
  R_ProfEndNamedEvent(v67);
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
RB_DOF_TileNeighbor
==============
*/
void RB_DOF_TileNeighbor(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  const char *m_location; 
  R_RT_Image *p_m_image; 
  __int64 v26; 
  CmdBufState *v27; 
  R_RT_Handle v30; 
  R_RT_Group v31; 
  R_RT_Group v32; 
  char v34; 

  __asm { vmovaps [rsp+238h+var_38], xmm6 }
  state = gfxContext->state;
  _RSI = gfxContext;
  _RDI = dofState;
  R_ProfBeginNamedEvent(state, "DOF Tile Neighbor");
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+98h]
    vmovups ymmword ptr [rsp+238h+var_208.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v30, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0B8h]
    vmovups ymmword ptr [rsp+238h+var_208.m_surfaceID], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v30, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0B8h]
    vmovups ymmword ptr [rsp+238h+var_208.m_surfaceID], ymm0
  }
  LODWORD(state) = R_RT_Handle::GetSurface(&v30)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v30);
  R_SetRenderTargetSize(_RSI->source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0B8h]
    vmovups ymmword ptr [rsp+238h+var_208.m_surfaceID], ymm0
  }
  R_RT_Group::AssignColor(&v31, (R_RT_ColorHandle *)&v30);
  _RCX = &v32;
  _RAX = &v31;
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
  m_location = v31.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v32.m_vrsRt.m_tracking.m_location = m_location;
  __asm { vmovups xmmword ptr [rsp+238h+var_208.m_surfaceID], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v30, &v32, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(301)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+98h]
    vmovups xmm6, xmmword ptr [rsi]
    vmovups ymmword ptr [rsp+238h+var_208.m_surfaceID], ymm0
    vmovq   rbx, xmm6
  }
  p_m_image = &R_RT_Handle::GetSurface(&v30)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(_RBX + 8112) = p_m_image;
  __asm { vmovdqa xmmword ptr [rsp+238h+var_208.m_surfaceID], xmm6 }
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v30, rgp.dofTileNeighborMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(286)");
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v26 = _RBX + 1792;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v27 = _RSI->state;
  *(_QWORD *)(v26 + 6320) = 0i64;
  R_ProfEndNamedEvent(v27);
  _R11 = &v34;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RB_DOF_UpdateDistanceMeter
==============
*/
void RB_DOF_UpdateDistanceMeter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *floatZColorRt)
{
  bool v16; 
  __int16 v18; 
  unsigned __int16 v19; 
  bool v23; 
  int v24; 
  const R_RT_Surface *Surface; 
  unsigned int width; 
  int v30; 
  char v36; 
  char v37; 
  int v67; 
  R_RT_Handle v68; 
  R_RT_Handle v70; 
  R_RT_Handle v71; 
  R_RT_Handle v72; 
  vec4_t v73; 
  vec4_t v74[5]; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = floatZColorRt;
  _RSI = viewInfo;
  _R14 = gfxContext;
  if ( r_dof_physical_distanceMeter->current.enabled )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovups xmmword ptr [rsp+170h+var_128.m_tracking.m_allocCounter], xmm0
    }
    R_DOF_GetEquationParams((GfxCmdBufContext *)&v68, viewInfo, v74, &v73);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups [rbp+70h+var_B0], ymm0
    }
    _RAX = R_RT_GetViewInternal(&v71, &v72, 0, 0);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   ebx, xmm0
      vmovups [rbp+70h+var_B0], ymm0
      vmovups ymmword ptr [rsp+170h+var_128.m_tracking.m_allocCounter], ymm0
    }
    if ( (_WORD)_EBX )
    {
      R_RT_Handle::GetSurface(&v68);
      if ( (R_RT_Handle::GetSurface(&v68)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        LODWORD(_RDI) = v68.m_tracking.m_allocCounter;
        LOWORD(_EBX) = v68.m_surfaceID;
        __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_128.m_tracking.m_allocCounter] }
        __debugbreak();
      }
      else
      {
        LODWORD(_RDI) = v68.m_tracking.m_allocCounter;
        LOWORD(_EBX) = v68.m_surfaceID;
        __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_128.m_tracking.m_allocCounter] }
      }
    }
    else
    {
      __asm { vpextrd rdi, xmm0, 2 }
      if ( (_DWORD)_RDI )
      {
        v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+70h+var_B0] }
        if ( v16 )
          __debugbreak();
      }
    }
    _ER13 = 0;
    __asm { vmovups [rbp+70h+var_B0], ymm0 }
    v18 = _EBX & 0x7FFF;
    if ( v18 )
      v19 = v18 | 0x8000;
    else
      v19 = 0;
    v70.m_surfaceID = v19;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+170h+var_128.m_tracking.m_name]
      vmovsd  xmm1, qword ptr [rsp+170h+var_108]
      vmovups xmmword ptr [rbp+70h+var_100.m_tracking.m_name], xmm0
      vmovsd  [rbp+70h+var_E0], xmm1
      vmovups ymm0, ymmword ptr [rsp+170h+var_100.m_tracking.m_allocCounter]
      vmovups [rbp+70h+var_B0], ymm0
      vmovups ymmword ptr [rsp+170h+var_128.m_tracking.m_allocCounter], ymm0
    }
    if ( v19 )
    {
      R_RT_Handle::GetSurface(&v68);
      if ( (R_RT_Handle::GetSurface(&v68)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+170h+var_128.m_tracking.m_allocCounter]
          vmovups [rbp+70h+var_B0], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+170h+var_128.m_tracking.m_allocCounter]
          vmovups [rbp+70h+var_B0], ymm0
        }
      }
    }
    else if ( (_DWORD)_RDI )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+170h+var_100.m_tracking.m_allocCounter] }
      if ( v23 )
        __debugbreak();
    }
    __asm { vmovups ymmword ptr [rsp+170h+var_100.m_tracking.m_allocCounter], ymm0 }
    v24 = R_RT_Handle::GetSurface(&v70)->m_image.m_base.height >> 1;
    Surface = R_RT_Handle::GetSurface(&v70);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vpextrq r14, xmm0, 1
      vxorps  xmm9, xmm9, xmm9
    }
    width = Surface->m_image.m_base.width;
    __asm { vmovss  [rsp+170h+anonymous_0], xmm9 }
    v30 = width >> 1;
    R_UnlockIfGfxImmediateContext(*(const GfxDevice **)(_R14 + 1360));
    if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, [rbp+70h+var_B0]
      vmovups [rbp+70h+var_B0], ymm0
    }
    R_GetBufferData((R_RT_ColorHandle *)&v72, v30, v24, 1, 1, 4, (unsigned __int8 *)&v67);
    if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    R_LockIfGfxImmediateContext(*(const GfxDevice **)(_R14 + 1360));
    __asm
    {
      vmovss  xmm4, [rsp+170h+anonymous_0]
      vmovss  xmm3, cs:__real@3f7c0000
      vandps  xmm6, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovd   xmm1, r13d
      vcomiss xmm4, xmm9
    }
    v37 = v36;
    _EAX = v36;
    __asm { vmovd   xmm0, eax }
    _EAX = v36;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm0, cs:__real@3c800000
      vblendvps xmm1, xmm0, xmm3, xmm2
      vmovd   xmm2, r13d
      vmovd   xmm0, eax
      vmovss  [rsp+170h+anonymous_0], xmm1
      vpcmpeqd xmm1, xmm0, xmm2
      vblendvps xmm0, xmm3, xmm9, xmm1
      vmovss  dword ptr [rsp+170h+var_100.m_surfaceID], xmm0
    }
    if ( v36 )
      __asm { vmovss  xmm0, dword ptr [rsi+140h] }
    else
      __asm { vmovss  xmm0, dword ptr [rsi+148h] }
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vdivss  xmm0, xmm0, xmm4
      vmulss  xmm2, xmm0, [rsp+170h+anonymous_0]
      vaddss  xmm0, xmm2, dword ptr [rsp+170h+var_100.m_surfaceID]; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm9, [rsp+170h+var_68+8]
      vmovss  cs:s_distance, xmm6
    }
    if ( v37 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, [rbp+70h+var_88]
        vaddss  xmm2, xmm0, [rbp+70h+var_84]
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm0, [rbp+70h+var_90]
        vaddss  xmm2, xmm1, [rbp+70h+var_8C]
      }
    }
    __asm
    {
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vdivss  xmm0, xmm8, xmm6
      vmovaps xmm8, [rsp+170h+var_58+8]
      vmovaps xmm6, [rsp+170h+var_48+8]
      vmovss  cs:s_circleOfConfusionClip, xmm2
    }
    if ( v37 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, [rbp+70h+var_78]
        vaddss  xmm1, xmm0, [rbp+70h+var_74]
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, [rbp+70h+var_80]
        vaddss  xmm1, xmm0, [rbp+70h+var_7C]
      }
    }
    __asm
    {
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  cs:s_circleOfConfusionLinear, xmm1
    }
  }
}

/*
==============
RB_DepthOfField_FreeTemporalRts
==============
*/

void __fastcall RB_DepthOfField_FreeTemporalRts(double _XMM0_8)
{
  R_RT_Handle v6; 

  if ( s_dofPrevHalfPrepassHandle.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_dofPrevHalfPrepassHandle);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_dofPrevHalfPrepassHandle.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v6);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+58h+var_28.m_tracking.m_name], xmm0
    }
    v6.m_surfaceID = 0;
    v6.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, ymmword ptr [rsp+58h+var_28.m_surfaceID]
      vmovups ymmword ptr cs:s_dofPrevHalfPrepassHandle.baseclass_0.m_surfaceID, ymm1
    }
  }
  else if ( s_dofPrevHalfPrepassHandle.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( s_dofPrevHalfColorHandle.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_dofPrevHalfColorHandle);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_dofPrevHalfColorHandle.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v6);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+58h+var_28.m_tracking.m_name], xmm0
    }
    v6.m_surfaceID = 0;
    v6.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, ymmword ptr [rsp+58h+var_28.m_surfaceID]
      vmovups ymmword ptr cs:s_dofPrevHalfColorHandle.baseclass_0.m_surfaceID, ymm1
    }
  }
  else if ( s_dofPrevHalfColorHandle.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_dofPrevHalfColorHandle.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  s_dofPrevHalfHandlesValid = 0;
}

/*
==============
R_DOF_CircularFilter
==============
*/
void R_DOF_CircularFilter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *halfPrepassHandle, R_RT_ColorHandle *halfColorHandle, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHandle)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v11; 
  R_RT_Image *v12; 
  R_RT_Image *v13; 
  unsigned int preset; 
  __int64 v16; 
  GfxCmdBufContext v17; 

  source = gfxContext->source;
  _R15 = gfxContext;
  p_m_image = &R_RT_Handle::GetSurface(halfPrepassHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  v11 = &R_RT_Handle::GetSurface(halfColorHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = &v11->m_base;
  v12 = &R_RT_Handle::GetSurface(tile1Handle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = &v12->m_base;
  v13 = &R_RT_Handle::GetSurface(sourceHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = &v13->m_base;
  if ( viewInfo->dofPhysical.hipEnabled )
  {
    preset = 0;
  }
  else
  {
    preset = 1;
    if ( rg.dofFilter.preset < 1 )
      preset = rg.dofFilter.preset;
    if ( preset >= 2 )
    {
      LODWORD(v16) = preset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( presetIndex ) < (unsigned)( ( sizeof( *array_counter( rgp.dofCircularMaterial ) ) + 0 ) )", "presetIndex doesn't index ARRAY_COUNT( rgp.dofCircularMaterial )\n\t%i not in [0, %i)", v16, 2) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rsp+78h+var_38], xmm0
  }
  RB_FullScreenFilterInternal(&v17, rgp.dofCircularMaterial[preset], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(384)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = NULL;
}

/*
==============
R_DOF_CircularFilterFullres
==============
*/
void R_DOF_CircularFilterFullres(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHalfResHandle, R_RT_ColorHandle *sourceHandle, R_RT_ColorHandle *floatZColorRt, R_RT_ColorHandle *scopeBuffer)
{
  GfxCmdBufSourceState *source; 
  bool v12; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v14; 
  R_RT_Image *v15; 
  R_RT_Image *blackImage; 
  GfxImage *blueNoiseImage; 
  R_RT_Image *v18; 
  unsigned int preset; 
  __int64 v21; 
  GfxCmdBufContext v22; 

  source = gfxContext->source;
  _R13 = gfxContext;
  v12 = viewInfo->scopeLensDistortionEnabled && R_RT_Handle::IsValid(scopeBuffer);
  p_m_image = &R_RT_Handle::GetSurface(tile1Handle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  v14 = &R_RT_Handle::GetSurface(sourceHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = &v14->m_base;
  v15 = &R_RT_Handle::GetSurface(floatZColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = &v15->m_base;
  if ( v12 )
    blackImage = &R_RT_Handle::GetSurface(scopeBuffer)->m_image;
  else
    blackImage = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = &blackImage->m_base;
  blueNoiseImage = rgp.blueNoiseImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = blueNoiseImage;
  v18 = &R_RT_Handle::GetSurface(sourceHalfResHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[70] = &v18->m_base;
  if ( viewInfo->dofPhysical.hipEnabled || (preset = rg.dofFilter.preset, viewInfo->dofPhysical.adsEnabled) )
    preset = 0;
  if ( preset >= 2 )
  {
    LODWORD(v21) = preset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( presetIndex ) < (unsigned)( ( sizeof( *array_counter( rgp.dofCircularFullresMaterial ) ) + 0 ) )", "presetIndex doesn't index ARRAY_COUNT( rgp.dofCircularFullresMaterial )\n\t%i not in [0, %i)", v21, 2) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r13+0]
    vmovups [rsp+78h+var_38], xmm0
  }
  RB_FullScreenFilterInternal(&v22, rgp.dofCircularFullresMaterial[preset][v12], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(431)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[70] = NULL;
}

/*
==============
R_DOF_Downsample
==============
*/
void R_DOF_Downsample(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *sourceHandle, const R_RT_ColorHandle *outputHandle)
{
  int width; 
  unsigned int v8; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v10; 
  GfxTexture *textures[3]; 

  width = R_RT_Handle::GetSurface(&outputHandle->R_RT_Handle)->m_image.m_base.width;
  v8 = ((unsigned int)R_RT_Handle::GetSurface(&outputHandle->R_RT_Handle)->m_image.m_base.height + 7) >> 3;
  Surface = R_RT_Handle::GetSurface(sourceHandle);
  textures[0] = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  v10 = R_RT_Handle::GetSurface(&outputHandle->R_RT_Handle);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v10->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  R_SetComputeShader(computeState, rgp.dofDownsampleComputeShader);
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, v8, 1u);
}

/*
==============
R_DOF_GetEquationParams
==============
*/
void R_DOF_GetEquationParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, vec4_t *dofEquationLinear, vec4_t *dofEquationClip)
{
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float scale; 
  float scalea; 
  float v70; 
  float bias; 
  float znear; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  vec3_t clipToZ; 
  vec3_t v79; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm2, cs:__real@3f800000
  }
  _RSI = dofEquationClip;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0C90h]
    vmulss  xmm7, xmm0, cs:__real@3d21428b
    vmovss  xmm0, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f820821
    vmovss  dword ptr [rbp+57h+clipToZ+4], xmm0
    vmovss  xmm0, cs:__real@c27c0000
    vmovss  dword ptr [rbp+57h+clipToZ+8], xmm1
    vmovss  xmm1, cs:__real@42800000
    vmovss  dword ptr [rbp+57h+var_60+4], xmm0
    vmovss  xmm0, dword ptr [rdx+0C94h]
    vmovss  dword ptr [rbp+57h+clipToZ], xmm2
    vmovss  dword ptr [rbp+57h+var_60], xmm2
    vmovss  xmm2, dword ptr [rdx+0CA0h]; focusDistance
    vmovss  dword ptr [rbp+57h+var_60+8], xmm1
    vmovss  xmm1, dword ptr [rdx+0C9Ch]; fstop
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, rax
  }
  _RBX = dofEquationLinear;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
  }
  _RDI = viewInfo;
  __asm
  {
    vmovss  dword ptr [rsp+0F0h+var_C0], xmm0
    vmovss  xmm0, dword ptr [rdx+150h]; focalLength
    vmovss  [rsp+0F0h+var_C8], xmm7
    vmovaps xmm3, xmm8; screenWidth
    vmovss  [rsp+0F0h+var_D0], xmm6
  }
  R_GetPhysicalDepthOfFieldEquationLinear(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v56, v60, v64, &v70, &bias);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0C94h]
    vmovss  xmm2, dword ptr [rdi+0CACh]; focusDistance
    vmovss  xmm1, dword ptr [rdi+0CA8h]; fstop
    vmovss  dword ptr [rsp+0F0h+var_C0], xmm0
    vmovss  xmm0, dword ptr [rdi+150h]; focalLength
    vmovss  [rsp+0F0h+var_C8], xmm7
    vmovaps xmm3, xmm8; screenWidth
    vmovss  [rsp+0F0h+var_D0], xmm6
  }
  R_GetPhysicalDepthOfFieldEquationLinear(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v57, v61, v65, &znear, &v73);
  __asm
  {
    vmovss  xmm0, [rbp+57h+var_90]
    vmovss  xmm1, [rbp+57h+var_8C]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, [rbp+57h+znear]
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm1, [rbp+57h+var_84]
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovss  xmm0, dword ptr [rdi+148h]
    vmovss  xmm1, dword ptr [rdi+0C94h]
    vmovss  xmm2, dword ptr [rdi+0CA0h]; focusDistance
    vmovss  dword ptr [rsp+0F0h+scale], xmm0
    vmovss  xmm0, dword ptr [rdi+150h]; focalLength
    vmovss  dword ptr [rsp+0F0h+var_C0], xmm1
    vmovss  xmm1, dword ptr [rdi+0C9Ch]; fstop
    vmovss  [rsp+0F0h+var_C8], xmm7
    vmovaps xmm3, xmm8; screenWidth
    vmovss  [rsp+0F0h+var_D0], xmm6
  }
  R_GetPhysicalDepthOfFieldEquationClip(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v58, v62, v66, scale, &clipToZ, &v74, &v75);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+140h]
    vmovss  dword ptr [rsp+0F0h+scale], xmm0
    vmovss  xmm1, dword ptr [rdi+0C94h]
    vmovss  xmm2, dword ptr [rdi+0CACh]; focusDistance
    vmovss  xmm0, dword ptr [rdi+150h]; focalLength
    vmovss  dword ptr [rsp+0F0h+var_C0], xmm1
    vmovss  xmm1, dword ptr [rdi+0CA8h]; fstop
    vmovss  [rsp+0F0h+var_C8], xmm7
    vmovaps xmm3, xmm8; screenWidth
    vmovss  [rsp+0F0h+var_D0], xmm6
  }
  R_GetPhysicalDepthOfFieldEquationClip(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v59, v63, v67, scalea, &v79, &v76, &v77);
  __asm
  {
    vmovss  xmm0, [rbp+57h+var_80]
    vmovss  xmm1, [rbp+57h+var_7C]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, [rbp+57h+var_78]
    vmovss  dword ptr [rsi+4], xmm1
    vmovss  xmm1, [rbp+57h+var_74]
    vmovss  dword ptr [rsi+8], xmm0
    vmovss  dword ptr [rsi+0Ch], xmm1
  }
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
R_DOF_Median
==============
*/
void R_DOF_Median(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *halfAlphaPingPongHandle, R_RT_ColorHandle *halfColorPingPongHandle)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v7; 
  GfxCmdBufContext v9; 

  source = gfxContext->source;
  _R14 = gfxContext;
  p_m_image = &R_RT_Handle::GetSurface(halfAlphaPingPongHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  v7 = &R_RT_Handle::GetSurface(halfColorPingPongHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [r14] }
  source->input.codeImages[23] = &v7->m_base;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  RB_FullScreenFilterInternal(&v9, rgp.dofMedianMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(492)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
}

/*
==============
R_DOF_Prepass
==============
*/
void R_DOF_Prepass(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *floatZ, R_RT_ColorHandle *prevHalfColorHandle, R_RT_ColorHandle *prevHalfPrepassHandle, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHandle, R_RT_ColorHandle *halfVelocityRt)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  R_RT_Image *blackImage; 
  R_RT_Image *v13; 
  R_RT_Image *v14; 
  R_RT_Image *v15; 
  R_RT_Image *v16; 
  GfxCmdBufContext v18; 

  source = gfxContext->source;
  _R15 = gfxContext;
  p_m_image = &R_RT_Handle::GetSurface(floatZ)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  if ( R_RT_Handle::IsValid(prevHalfColorHandle) )
    blackImage = &R_RT_Handle::GetSurface(prevHalfColorHandle)->m_image;
  else
    blackImage = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = &blackImage->m_base;
  if ( R_RT_Handle::IsValid(prevHalfPrepassHandle) )
    v13 = &R_RT_Handle::GetSurface(prevHalfPrepassHandle)->m_image;
  else
    v13 = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = &v13->m_base;
  v14 = &R_RT_Handle::GetSurface(tile1Handle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = &v14->m_base;
  v15 = &R_RT_Handle::GetSurface(sourceHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = &v15->m_base;
  if ( R_RT_Handle::IsValid(halfVelocityRt) )
    v16 = &R_RT_Handle::GetSurface(halfVelocityRt)->m_image;
  else
    v16 = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [r15] }
  source->input.codeImages[8] = &v16->m_base;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  RB_FullScreenFilterInternal(&v18, rgp.dofPrepassMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(329)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[8] = NULL;
}

/*
==============
R_DOF_Sharpen
==============
*/
void R_DOF_Sharpen(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *halfColorHandle)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufContext v6; 

  source = gfxContext->source;
  _R14 = gfxContext;
  p_m_image = &R_RT_Handle::GetSurface(halfColorHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [r14] }
  source->input.codeImages[22] = &p_m_image->m_base;
  __asm { vmovups [rsp+58h+var_28], xmm0 }
  RB_FullScreenFilterInternal(&v6, rgp.dofSharpenMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(529)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
}

/*
==============
R_DOF_TemporalSampling
==============
*/
bool R_DOF_TemporalSampling(const GfxViewInfo *viewInfo)
{
  return (unsigned int)(viewInfo->postAA.mode - 2) <= 1;
}

/*
==============
R_DOF_TileDownsample_GetParams
==============
*/
void R_DOF_TileDownsample_GetParams(unsigned int inputWidth, unsigned int inputHeight, unsigned int tileWidth, unsigned int tileHeight, vec2_t *bias, vec2_t *scale)
{
  _R10 = bias;
  _R11 = scale;
  __asm
  {
    vmovaps [rsp+18h+var_18], xmm6
    vmovss  xmm4, cs:__real@3f800000
  }
  if ( inputWidth )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm6, xmm4, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm6, xmm4 }
  }
  if ( inputHeight )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm5, xmm4, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm5, xmm4 }
  }
  if ( tileWidth )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm4, xmm0
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm4 }
  }
  if ( tileHeight )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm4, xmm4, xmm0
    }
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vmulss  xmm0, xmm1, xmm3
    vsubss  xmm1, xmm6, xmm0
    vmovss  dword ptr [r10], xmm1
    vmulss  xmm0, xmm4, xmm3
    vmulss  xmm2, xmm5, xmm3
    vsubss  xmm1, xmm2, xmm0
    vmovss  dword ptr [r10+4], xmm1
    vmovss  dword ptr [r11], xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vmovss  dword ptr [r11+4], xmm5
  }
}

/*
==============
R_DOF_TileDownsample_Horizontal
==============
*/
void R_DOF_TileDownsample_Horizontal(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *texture0, const vec2_t *bias, const vec2_t *scale)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  float v12; 
  GfxCmdBufContext v15; 

  _RDI = gfxContext;
  _RSI = scale;
  Surface = R_RT_Handle::GetSurface(texture0);
  source = _RDI->source;
  p_m_image = &Surface->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rsi] }
  v12 = bias->v[0];
  _RCX = _RDI->source;
  p_input->codeImages[22] = &p_m_image->m_base;
  _RCX->input.consts[40].v[0] = v12;
  __asm
  {
    vmovss  dword ptr [rcx+988h], xmm0
    vmovups xmm0, xmmword ptr [rdi]
  }
  _RCX->input.consts[40].v[1] = 0.0;
  _RCX->input.consts[40].v[3] = 0.0;
  ++_RCX->constVersions[40];
  __asm { vmovups [rsp+58h+var_28], xmm0 }
  RB_FullScreenFilterInternal(&v15, rgp.dofTileDownsampleMaterial[0], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(231)");
}

/*
==============
R_DOF_TileDownsample_Vertical
==============
*/
void R_DOF_TileDownsample_Vertical(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *texture0, const vec2_t *bias, const vec2_t *scale)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v15; 

  _RDI = gfxContext;
  _RSI = scale;
  _RBP = bias;
  Surface = R_RT_Handle::GetSurface(texture0);
  source = _RDI->source;
  p_m_image = &Surface->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbp+4] }
  _RAX = _RDI->source;
  __asm { vmovss  xmm1, dword ptr [rsi+4] }
  p_input->codeImages[22] = &p_m_image->m_base;
  __asm
  {
    vmovss  dword ptr [rax+984h], xmm0
    vmovups xmm0, xmmword ptr [rdi]
  }
  _RAX->input.consts[40].v[0] = 0.0;
  _RAX->input.consts[40].v[2] = 0.0;
  __asm { vmovss  dword ptr [rax+98Ch], xmm1 }
  ++_RAX->constVersions[40];
  __asm { vmovups [rsp+58h+var_28], xmm0 }
  RB_FullScreenFilterInternal(&v15, rgp.dofTileDownsampleMaterial[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(239)");
}

/*
==============
R_DOF_TileNeighor
==============
*/
void R_DOF_TileNeighor(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *tile0Handle)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v8; 
  GfxCmdBufInput *v9; 
  GfxCmdBufContext v10; 

  _RDI = gfxContext;
  Surface = R_RT_Handle::GetSurface(tile0Handle);
  source = _RDI->source;
  p_m_image = &Surface->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rdi] }
  p_input->codeImages[22] = &p_m_image->m_base;
  __asm { vmovups [rsp+58h+var_28], xmm0 }
  RB_FullScreenFilterInternal(&v10, rgp.dofTileNeighborMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(286)");
  v8 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v9 = &v8->input;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v9->codeImages[22] = NULL;
}

/*
==============
R_DOF_UpdateBufferParams
==============
*/
void R_DOF_UpdateBufferParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, unsigned int rtWidth, unsigned int rtHeight)
{
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  *(double *)&_XMM0 = R_DOF_GetBokehMaxCocDiameter(viewInfo);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm8, xmm2, xmm1
    vdivss  xmm7, xmm2, xmm0
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm3, xmm3, xmm3
  }
  if ( (unsigned int)(viewInfo->postAA.mode - 2) <= 1 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (Sys_Microseconds() & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@37c9539c
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm0, xmm0, xmm1, 1; X
      vmovss  xmm1, cs:__real@44160000; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vaddss  xmm3, xmm0, cs:__real@44800000 }
  }
  _RAX = gfxContext->source;
  _ECX = 0;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.dofFilter.fireflySuppression; r_globals_t rg
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm9, xmm9, xmm9
    vucomiss xmm8, dword ptr [rax+970h]
    vcvtsi2ss xmm4, xmm4, rsi
    vcvtsi2ss xmm9, xmm9, rdi
    vucomiss xmm7, dword ptr [rax+974h]
    vucomiss xmm6, dword ptr [rax+978h]
    vucomiss xmm0, dword ptr [rax+97Ch]
    vmovd   xmm0, cs:?rg@@3Ur_globals_t@@A.dofFilter.temporalFilterEnabled; r_globals_t rg
    vmovss  xmm5, cs:__real@3f800000
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.dofFilter.bokehEdgeSharpness; r_globals_t rg
    vucomiss xmm1, dword ptr [rax+990h]
    vblendvps xmm0, xmm5, xmm6, xmm2
    vucomiss xmm6, dword ptr [rax+994h]
    vucomiss xmm0, dword ptr [rax+998h]
    vucomiss xmm3, dword ptr [rax+99Ch]
    vmovd   xmm0, cs:?rg@@3Ur_globals_t@@A.dofFilter.backgroundReconstruction; r_globals_t rg
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.dofFilter.sharpen; r_globals_t rg
    vucomiss xmm1, dword ptr [rax+9A0h]
    vmulss  xmm3, xmm9, xmm7
    vmulss  xmm4, xmm4, xmm8
    vblendvps xmm0, xmm5, xmm6, xmm2
    vucomiss xmm0, dword ptr [rax+9A4h]
    vucomiss xmm4, dword ptr [rax+9A8h]
    vucomiss xmm3, dword ptr [rax+9ACh]
    vmovaps xmm6, [rsp+68h+var_18]
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
R_DOF_UpdateEquationParams
==============
*/
void R_DOF_UpdateEquationParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufContext *v3; 
  char v5; 
  GfxCmdBufContext v14; 
  vec4_t v15; 
  vec4_t v16; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  v3 = gfxContext;
  __asm { vmovups [rsp+68h+var_48], xmm0 }
  R_DOF_GetEquationParams(&v14, viewInfo, &v15, &v16);
  R_DOF_GetBokehMaxCocDiameter(viewInfo);
  __asm { vmovss  xmm1, cs:__real@3f800000 }
  _RAX = v3->source;
  __asm
  {
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm3, xmm2, dword ptr [rbx+0CA4h]
    vmulss  xmm5, xmm3, [rsp+68h+var_38]
    vucomiss xmm5, dword ptr [rax+960h]
    vmulss  xmm4, xmm3, [rsp+68h+var_34]
    vmulss  xmm2, xmm3, [rsp+68h+var_30]
    vmulss  xmm1, xmm3, [rsp+68h+var_2C]
  }
  if ( !v5 )
    goto LABEL_5;
  __asm { vucomiss xmm4, dword ptr [rax+964h] }
  if ( !v5 )
    goto LABEL_5;
  __asm { vucomiss xmm2, dword ptr [rax+968h] }
  if ( !v5 )
    goto LABEL_5;
  __asm { vucomiss xmm1, dword ptr [rax+96Ch] }
  if ( !v5 )
  {
LABEL_5:
    __asm
    {
      vmovss  dword ptr [rax+960h], xmm5
      vmovss  dword ptr [rax+964h], xmm4
      vmovss  dword ptr [rax+968h], xmm2
      vmovss  dword ptr [rax+96Ch], xmm1
    }
    ++_RAX->constVersions[38];
  }
}

/*
==============
R_DOF_Upsample
==============
*/
void R_DOF_Upsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *halfColorPingPongHandle, R_RT_ColorHandle *halfAlphaHandle, R_RT_ColorHandle *halfPrepassHandle, R_RT_ColorHandle *scopeBuffer, R_RT_ColorHandle *floatZColorRt, R_RT_ColorHandle *sourceHandle)
{
  GfxCmdBufSourceState *source; 
  bool v14; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v16; 
  R_RT_Image *v17; 
  R_RT_Image *v18; 
  R_RT_Image *blackImage; 
  R_RT_Image *v20; 
  R_RT_Image *v21; 
  __int32 v23; 
  bool v24; 
  GfxCmdBufContext v25; 

  source = gfxContext->source;
  _R12 = gfxContext;
  v14 = viewInfo->scopeLensDistortionEnabled && R_RT_Handle::IsValid(scopeBuffer);
  p_m_image = &R_RT_Handle::GetSurface(tile1Handle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  v16 = &R_RT_Handle::GetSurface(halfColorPingPongHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = &v16->m_base;
  v17 = &R_RT_Handle::GetSurface(halfAlphaHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = &v17->m_base;
  v18 = &R_RT_Handle::GetSurface(halfPrepassHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = &v18->m_base;
  if ( v14 )
    blackImage = &R_RT_Handle::GetSurface(scopeBuffer)->m_image;
  else
    blackImage = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = &blackImage->m_base;
  v20 = &R_RT_Handle::GetSurface(floatZColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[8] = &v20->m_base;
  v21 = &R_RT_Handle::GetSurface(sourceHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [r12] }
  source->input.codeImages[9] = &v21->m_base;
  v23 = viewInfo->postAA.mode - 2;
  v24 = viewInfo->postAA.mode == POST_AA_MODE_SMAA_T2X;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  RB_FullScreenFilterInternal(&v25, rgp.dofUpsampleMaterial[v24 | (unsigned __int8)(v23 == 1)][v14], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(577)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[8] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[9] = NULL;
}

