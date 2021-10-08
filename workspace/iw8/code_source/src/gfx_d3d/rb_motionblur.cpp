/*
==============
R_MBlur_TileNeighbor
==============
*/

void __fastcall R_MBlur_TileNeighbor(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *srcVelocityTileRt)
{
  ?R_MBlur_TileNeighbor@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(gfxContext, srcVelocityRt, srcVelocityTileRt);
}

/*
==============
R_MBlur_VelocityTileDownsampleHorizontal
==============
*/

void __fastcall R_MBlur_VelocityTileDownsampleHorizontal(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *dstVelocityRt)
{
  ?R_MBlur_VelocityTileDownsampleHorizontal@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(gfxContext, srcVelocityRt, dstVelocityRt);
}

/*
==============
R_MBlur_Filter
==============
*/

void __fastcall R_MBlur_Filter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcVelocity, R_RT_ColorHandle *srcVelocityTileNeighbor, float aspectRatio)
{
  ?R_MBlur_Filter@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@22M@Z(gfxContext, viewInfo, srcColorRt, srcVelocity, srcVelocityTileNeighbor, aspectRatio);
}

/*
==============
RB_MBlur_Apply
==============
*/

void __fastcall RB_MBlur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  ?RB_MBlur_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, activeGroup);
}

/*
==============
R_MBlur_VelocityTileDownsampleVertical
==============
*/

void __fastcall R_MBlur_VelocityTileDownsampleVertical(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *dstVelocityRt)
{
  ?R_MBlur_VelocityTileDownsampleVertical@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(gfxContext, srcVelocityRt, dstVelocityRt);
}

/*
==============
RB_MBlur_Apply
==============
*/
void RB_MBlur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  bool v9; 
  GfxCmdBufState *state; 
  CmdBufState *v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int m_allocHeight; 
  const dvar_t *v19; 
  int v20; 
  const dvar_t *v21; 
  int v22; 
  int rtFlags; 
  unsigned int v29; 
  const R_RT_Surface *Surface; 
  GfxCmdBufState *v37; 
  unsigned int v39; 
  const R_RT_Surface *v40; 
  GfxCmdBufSourceState *source; 
  const char *m_location; 
  R_RT_Image *p_m_image; 
  __int64 v67; 
  unsigned int v69; 
  const R_RT_Surface *v70; 
  const char *v80; 
  unsigned int v84; 
  const R_RT_Surface *v85; 
  const char *v95; 
  const R_RT_Surface *v107; 
  R_RT_Image *v111; 
  __int64 v112; 
  GfxCmdBufState *v121; 
  unsigned int v123; 
  const R_RT_Surface *v124; 
  const char *v134; 
  R_RT_Image *v138; 
  R_RT_Image *v139; 
  __int64 v140; 
  GfxCmdBufState *v142; 
  const dvar_t *v147; 
  int v148; 
  const dvar_t *v149; 
  int v150; 
  int v151; 
  unsigned int v152; 
  unsigned int m_allocWidth; 
  unsigned int v154; 
  const R_RT_Surface *v155; 
  bool v159; 
  GfxCmdBufState *v160; 
  const char *v170; 
  GfxCmdBufSourceState *v172; 
  float depth; 
  R_RT_Handle result; 
  R_RT_Handle v186; 
  R_RT_Handle v187; 
  R_RT_Handle v188; 
  unsigned int allocHeight; 
  unsigned int height; 
  GfxCmdBufContext v192; 
  R_RT_Image *v193; 
  R_RT_Handle v194; 
  R_RT_ColorHandle v195; 
  R_RT_Group v196; 
  R_RT_Group v197; 
  void *retaddr; 

  _R11 = &retaddr;
  v9 = !viewInfo->motionBlur.enabled;
  _RDI = viewInfo;
  *(_QWORD *)&v194.m_surfaceID = activeGroup;
  _R14 = gfxContext;
  v192.source = (GfxCmdBufSourceState *)viewInfo;
  if ( !v9 )
  {
    state = gfxContext->state;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
    }
    R_ProfBeginNamedEvent(state, "RB_ApplyMotionBlur");
    __asm { vmovups ymm0, ymmword ptr [rdi+3648h] }
    v14 = _R14->state;
    __asm
    {
      vmovups [rbp+2B0h+var_240], ymm0
      vmovups ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID], ymm0
    }
    R_ProfBeginNamedEvent(v14, "RB_MotionBlurPostfxVelocityPass");
    v15 = R_RT_Handle::GetSurface(&v188)->m_image.m_base.width / 0xAu;
    v16 = R_RT_Handle::GetSurface(&v188)->m_image.m_base.height / 0xAu;
    height = v16;
    v17 = R_RT_Handle::GetSurface(&v188)->m_allocWidth / 0xA;
    m_allocHeight = R_RT_Handle::GetSurface(&v188)->m_allocHeight;
    allocHeight = m_allocHeight / 0xA;
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_7;
    v19 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = 2112;
    if ( !v19->current.enabled )
LABEL_7:
      v20 = 2048;
    v21 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = 0;
    if ( v21->current.integer == 1 )
      v22 = 8;
    rtFlags = v22 | v20;
    _RAX = R_RT_CreateInternal(&result, v15, v16, v17, m_allocHeight / 0xA, 1u, 1u, 1u, g_R_RT_renderTargetFmts[18], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_VELOCITY_TILE0", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(87)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+2B0h+var_2B0], ymm0
      vmovups ymmword ptr [rbp+2B0h+var_2F0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v187);
      if ( (R_RT_Handle::GetSurface(&v187)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+2B0h+var_2F0.m_surfaceID]
          vmovups [rbp+2B0h+var_2B0], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+2B0h+var_2F0.m_surfaceID]
          vmovups [rbp+2B0h+var_2B0], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    v29 = R_RT_Handle::GetSurface(&v188)->m_allocHeight;
    Surface = R_RT_Handle::GetSurface(&v188);
    _RAX = R_RT_CreateInternal(&result, v15, Surface->m_image.m_base.height, v17, v29, 1u, 1u, 1u, g_R_RT_renderTargetFmts[18], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_VELOCITY_TILE0_TEMP", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(88)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+2B0h+var_2F0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v187);
      if ( (R_RT_Handle::GetSurface(&v187)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+2B0h+var_2F0.m_surfaceID]
          vmovups ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+2B0h+var_2F0.m_surfaceID]
          vmovups ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    R_GPU_BeginTimer(GPU_TIMER_MBLUR_TILE);
    __asm { vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID] }
    v37 = _R14->state;
    __asm { vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0 }
    R_AddRenderTargetTransition(v37, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v37);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
    }
    v39 = R_RT_Handle::GetSurface(&v186)->m_image.m_base.height;
    v40 = R_RT_Handle::GetSurface(&v186);
    source = _R14->source;
    R_SetRenderTargetSize(_R14->source, v40->m_image.m_base.width, v39, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(&v196, (R_RT_ColorHandle *)&result);
    _RCX = &v197;
    _RAX = &v196;
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
      vmovups xmm0, xmmword ptr [r14]
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
    }
    m_location = v196.m_vrsRt.m_tracking.m_location;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v197.m_vrsRt.m_tracking.m_location = m_location;
    __asm { vmovups xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm0 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v187, &v197, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(97)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymm1, [rbp+2B0h+var_240]
      vmovups xmm8, xmmword ptr [r14]
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm1
    }
    R_RT_Handle::GetSurface(&v186);
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm6, xmm9, xmm0
    }
    R_RT_Handle::GetSurface(&v186);
    __asm
    {
      vmulss  xmm2, xmm6, cs:__real@3dcccccd
      vmovss  xmm7, cs:__real@3f000000
      vmovq   rbx, xmm8
      vmulss  xmm1, xmm2, xmm7
      vmulss  xmm0, xmm6, xmm7
      vsubss  xmm1, xmm1, xmm0
    }
    *(_QWORD *)&v187.m_surfaceID = _RBX;
    __asm
    {
      vmovss  dword ptr [rbx+0EB0h], xmm1
      vmovss  dword ptr [rbx+0EB4h], xmm2
    }
    *(_QWORD *)(_RBX + 3768) = 0i64;
    ++*(_WORD *)(_RBX + 10410);
    p_m_image = &R_RT_Handle::GetSurface(&result)->m_image;
    v193 = p_m_image;
    v67 = _RBX + 1792;
    if ( !v67 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      p_m_image = v193;
    }
    __asm { vmovups ymm0, ymmword ptr [rbp+2B0h+var_310.m_surfaceID] }
    *(_QWORD *)(v67 + 6376) = p_m_image;
    __asm { vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0 }
    v69 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
    v70 = R_RT_Handle::GetSurface(&result);
    R_SetRenderTargetSize(*(GfxCmdBufSourceState **)&v187.m_surfaceID, v70->m_image.m_base.width, v69, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_310.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(&v197, (R_RT_ColorHandle *)&result);
    _RCX = &v196;
    _RAX = &v197;
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
    v80 = v197.m_vrsRt.m_tracking.m_location;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    v196.m_vrsRt.m_tracking.m_location = v80;
    __asm { vmovdqa xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm8 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v187, &v196, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(27)");
    __asm { vmovdqa xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm8 }
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v187, rgp.mblurTileDownsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(28)");
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(v37, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(v37, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v37);
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    v84 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
    v85 = R_RT_Handle::GetSurface(&result);
    R_SetRenderTargetSize(source, v85->m_image.m_base.width, v84, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(&v197, (R_RT_ColorHandle *)&result);
    _RAX = &v197;
    __asm { vmovups ymm0, ymmword ptr [rax] }
    _RCX = &v196;
    __asm
    {
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
    v95 = v197.m_vrsRt.m_tracking.m_location;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    v196.m_vrsRt.m_tracking.m_location = v95;
    __asm { vmovups xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm8 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v187, &v196, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(105)");
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
      vmovups xmm6, xmm8
    }
    R_RT_Handle::GetSurface(&result);
    R_RT_Handle::GetSurface(&result);
    __asm
    {
      vmovq   rbx, xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm3, xmm2, cs:__real@3dcccccd
      vmulss  xmm1, xmm3, xmm7
      vmulss  xmm0, xmm2, xmm7
      vsubss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx+0EB0h], xmm1
      vmovss  dword ptr [rbx+0EB4h], xmm3
    }
    *(_DWORD *)(_RBX + 3768) = 0;
    *(_DWORD *)(_RBX + 3772) = 1065353216;
    ++*(_WORD *)(_RBX + 10410);
    v107 = R_RT_Handle::GetSurface(&v186);
    __asm
    {
      vmovaps xmm9, [rsp+3D0h+var_78+8]
      vmovaps xmm8, [rsp+3D0h+var_68+8]
      vmovaps xmm7, [rsp+3D0h+var_58+8]
    }
    v111 = &v107->m_image;
    v112 = _RBX + 1792;
    if ( !v112 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    {
      __debugbreak();
      v37 = _R14->state;
    }
    *(_QWORD *)(v112 + 6376) = v111;
    __asm { vmovdqa xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm6 }
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v187, rgp.mblurTileDownsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(45)");
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(v37, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v37);
    R_GPU_EndTimer();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
      vmovups xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm6
    }
    R_RT_Destroy((GfxCmdBufContext *)&v187, (R_RT_ColorHandle *)&result);
    _RAX = R_RT_CreateInternal(&result, v15, height, v17, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[18], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_VELOCITY_TILE1", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(116)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v186);
      if ( (R_RT_Handle::GetSurface(&v186)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+2B0h+var_310.m_surfaceID]
          vmovups ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+2B0h+var_310.m_surfaceID]
          vmovups ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    R_GPU_BeginTimer(GPU_TIMER_MBLUR_TILE);
    __asm { vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID] }
    v121 = _R14->state;
    __asm { vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0 }
    R_AddRenderTargetTransition(v121, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_R14->state);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    v123 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
    v124 = R_RT_Handle::GetSurface(&result);
    R_SetRenderTargetSize(_R14->source, v124->m_image.m_base.width, v123, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(&v197, (R_RT_ColorHandle *)&result);
    _RCX = &v196;
    _RAX = &v197;
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
    v134 = v197.m_vrsRt.m_tracking.m_location;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    v196.m_vrsRt.m_tracking.m_location = v134;
    __asm { vmovups xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v187, &v196, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(125)");
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
      vmovups ymm0, [rbp+2B0h+var_240]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
      vmovq   rbx, xmm6
    }
    v138 = &R_RT_Handle::GetSurface(&result)->m_image;
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    *(_QWORD *)(_RBX + 8168) = v138;
    v139 = &R_RT_Handle::GetSurface(&v186)->m_image;
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v140 = _RBX + 1792;
    if ( !v140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    *(_QWORD *)(v140 + 6384) = v139;
    __asm { vmovdqa xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm6 }
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v187, rgp.mblurTileNeighborMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(53)");
    __asm { vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID] }
    v142 = _R14->state;
    __asm { vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0 }
    R_AddRenderTargetTransition(v142, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v142);
    R_GPU_EndTimer();
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
      vmovups xmmword ptr [rbp+2B0h+var_2F0.m_surfaceID], xmm6
    }
    R_RT_Destroy((GfxCmdBufContext *)&v187, (R_RT_ColorHandle *)&result);
    R_ProfEndNamedEvent(v142);
    R_GPU_BeginTimer(GPU_TIMER_MBLUR_FILTER);
    _R12 = *(R_RT_Group **)&v194.m_surfaceID;
    __asm { vmovaps xmm6, [rsp+3D0h+var_48+8] }
    if ( **(_BYTE **)&v194.m_surfaceID != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [r12+8] }
    v147 = DCONST_DVARINT_r_dccPostFX;
    __asm
    {
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
    }
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v147);
    v148 = 0;
    if ( v147->current.integer == 1 )
      v148 = 8;
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_69;
    v149 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v149);
    v150 = 2112;
    if ( !v149->current.enabled )
LABEL_69:
      v150 = 2048;
    v151 = v148 | v150;
    v152 = R_RT_Handle::GetSurface(&v186)->m_allocHeight;
    m_allocWidth = R_RT_Handle::GetSurface(&v186)->m_allocWidth;
    v154 = R_RT_Handle::GetSurface(&v186)->m_image.m_base.height;
    v155 = R_RT_Handle::GetSurface(&v186);
    _RAX = R_RT_CreateInternal(&v194, v155->m_image.m_base.width, v154, m_allocWidth, v152, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)v151, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "motionblur color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(143)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+2B0h+var_2B0], ymm0
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v186);
      if ( (R_RT_Handle::GetSurface(&v186)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+2B0h+var_310.m_surfaceID]
          vmovups [rbp+2B0h+var_2B0], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+2B0h+var_310.m_surfaceID]
          vmovups [rbp+2B0h+var_2B0], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v159 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+2B0h+var_2B0] }
        if ( v159 )
          __debugbreak();
      }
    }
    v160 = _R14->state;
    __asm { vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0 }
    R_AddRenderTargetTransition(v160, (R_RT_ColorHandle *)&v186, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v160);
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(&v197, (R_RT_ColorHandle *)&v186);
    _RCX = &v196;
    _RAX = &v197;
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
    v170 = v197.m_vrsRt.m_tracking.m_location;
    __asm
    {
      vmovups ymmword ptr [rcx+0A0h], ymm0
      vmovups xmm0, xmmword ptr [r14]
    }
    v196.m_vrsRt.m_tracking.m_location = v170;
    __asm { vmovups xmmword ptr [rbp+2B0h+var_260.m_surfaceID], xmm0 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v194, &v196, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(148)");
    v172 = v192.source;
    R_DynamicResolutionForceRendertargetConstant(_R14->source, HIWORD(v192.source->decalVolumeSurfType), LOWORD(v192.source->viewStatsTarget));
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovss  xmm1, cs:__real@3fe38e39
      vmovups ymmword ptr [rbp+2B0h+var_310.m_surfaceID], ymm0
      vmovups ymm0, [rbp+2B0h+var_240]
      vmovups [rbp+2B0h+var_240], ymm0
      vmovups ymm0, ymmword ptr [rbp+2B0h+result.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+var_260.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r14]
      vmovss  [rsp+3D0h+depth], xmm1
      vmovups [rbp+2B0h+var_280], xmm0
    }
    R_MBlur_Filter(&v192, (const GfxViewInfo *)v172, (R_RT_ColorHandle *)&v194, &v195, (R_RT_ColorHandle *)&v186, depth);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+result.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r14]
      vmovups [rbp+2B0h+var_280], xmm0
    }
    R_RT_Destroy(&v192, (R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+2B0h+var_2D0.m_surfaceID]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r14]
      vmovups [rbp+2B0h+var_280], xmm0
    }
    R_RT_Destroy(&v192, (R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor(_R12, (R_RT_ColorHandle *)&result);
    __asm
    {
      vmovups ymm0, [rbp+2B0h+var_2B0]
      vmovups ymmword ptr [rbp+2B0h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(v160, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v160);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(v160);
  }
}

/*
==============
R_MBlur_Filter
==============
*/
void R_MBlur_Filter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *srcVelocity, R_RT_ColorHandle *srcVelocityTileNeighbor, float aspectRatio)
{
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *v18; 
  GfxCmdBufInput *v19; 
  const R_RT_Surface *v20; 
  GfxCmdBufSourceState *v21; 
  R_RT_Image *v22; 
  GfxCmdBufInput *v23; 
  Material *mblurFilterMaterial; 
  float fmt; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  GfxCmdBufContext v40; 

  _RBX = gfxContext->source;
  __asm { vmovss  xmm0, [rsp+0A8h+arg_28] }
  _RSI = gfxContext;
  __asm { vmovss  dword ptr [rbx+960h], xmm0 }
  *(_QWORD *)&_RBX->input.consts[38].xyz.y = 0i64;
  _RBX->input.consts[38].v[3] = 0.0;
  ++_RBX->constVersions[38];
  p_m_image = &R_RT_Handle::GetSurface(srcColorRt)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &_RBX->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  Surface = R_RT_Handle::GetSurface(srcVelocity);
  source = _RSI->source;
  v18 = &Surface->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v19 = &source->input;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v19->codeImages[29] = &v18->m_base;
  v20 = R_RT_Handle::GetSurface(srcVelocityTileNeighbor);
  v21 = _RSI->source;
  v22 = &v20->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v23 = &v21->input;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  v23->codeImages[31] = &v22->m_base;
  mblurFilterMaterial = rgp.mblurFilterMaterial;
  if ( rg.cinematic )
    mblurFilterMaterial = rgp.mblurFilterCinematicMaterial;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovups [rsp+0A8h+var_38], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0A8h+var_50], xmm0
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  [rsp+0A8h+var_60], xmm1
    vmovss  [rsp+0A8h+var_68], xmm1
    vmovss  [rsp+0A8h+var_70], xmm3
    vmovss  [rsp+0A8h+var_78], xmm2
    vmovss  dword ptr [rsp+0A8h+var_80], xmm1
    vmovss  dword ptr [rsp+0A8h+fmt], xmm1
  }
  RB_ViewportFilterDirectInternal(&v40, mblurFilterMaterial, 0xFFFFFFFF, &viewInfo->sceneViewport, fmt, v33, v34, v35, v36, v37, v38, v39, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(64)");
}

/*
==============
R_MBlur_TileNeighbor
==============
*/
void R_MBlur_TileNeighbor(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *srcVelocityTileRt)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *v9; 
  GfxCmdBufSourceState *v10; 
  R_RT_Image *v11; 
  GfxCmdBufInput *v12; 
  GfxCmdBufContext v14; 

  _RDI = gfxContext;
  Surface = R_RT_Handle::GetSurface(srcVelocityRt);
  source = _RDI->source;
  p_m_image = &Surface->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[29] = &p_m_image->m_base;
  v9 = R_RT_Handle::GetSurface(srcVelocityTileRt);
  v10 = _RDI->source;
  v11 = &v9->m_image;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v12 = &v10->input;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rdi] }
  v12->codeImages[30] = &v11->m_base;
  __asm { vmovups [rsp+58h+var_28], xmm0 }
  RB_FullScreenFilterInternal(&v14, rgp.mblurTileNeighborMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(53)");
}

/*
==============
R_MBlur_VelocityTileDownsampleHorizontal
==============
*/
void R_MBlur_VelocityTileDownsampleHorizontal(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *dstVelocityRt)
{
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *m_location; 
  R_RT_Handle v35; 
  R_RT_Group v36; 
  R_RT_Group v37; 

  __asm { vmovaps [rsp+238h+var_38], xmm6 }
  _R14 = gfxContext;
  _RSI = dstVelocityRt;
  R_RT_Handle::GetSurface(dstVelocityRt);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edx
    vdivss  xmm6, xmm0, xmm1
  }
  R_RT_Handle::GetSurface(_RSI);
  _RDI = _R14->source;
  __asm
  {
    vmulss  xmm2, xmm6, cs:__real@3dcccccd
    vmulss  xmm1, xmm2, cs:__real@3f000000
    vmulss  xmm0, xmm6, cs:__real@3f000000
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+0EB0h], xmm1
    vmovss  dword ptr [rdi+0EB4h], xmm2
  }
  *(_QWORD *)&_RDI->input.consts[123].xyz.z = 0i64;
  ++_RDI->constVersions[123];
  p_m_image = &R_RT_Handle::GetSurface(srcVelocityRt)->m_image;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &_RDI->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rsi] }
  p_input->codeImages[29] = &p_m_image->m_base;
  __asm { vmovups ymmword ptr [rsp+238h+var_208.m_surfaceID], ymm0 }
  height = R_RT_Handle::GetSurface(&v35)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v35);
  R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rsp+238h+var_208.m_surfaceID], ymm0
  }
  R_RT_Group::AssignColor(&v36, (R_RT_ColorHandle *)&v35);
  _RCX = &v37;
  _RAX = &v36;
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
    vmovups xmm0, xmmword ptr [r14]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  m_location = v36.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v37.m_vrsRt.m_tracking.m_location = m_location;
  __asm { vmovups xmmword ptr [rsp+238h+var_208.m_surfaceID], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v35, &v37, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(27)");
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rsp+238h+var_208.m_surfaceID], xmm0
  }
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v35, rgp.mblurTileDownsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(28)");
  __asm { vmovaps xmm6, [rsp+238h+var_38] }
}

/*
==============
R_MBlur_VelocityTileDownsampleVertical
==============
*/
void R_MBlur_VelocityTileDownsampleVertical(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcVelocityRt, R_RT_ColorHandle *dstVelocityRt)
{
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v19; 

  _RSI = gfxContext;
  R_RT_Handle::GetSurface(dstVelocityRt);
  R_RT_Handle::GetSurface(dstVelocityRt);
  _RBX = _RSI->source;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edx
    vdivss  xmm2, xmm0, xmm1
    vmulss  xmm3, xmm2, cs:__real@3dcccccd
    vmulss  xmm1, xmm3, cs:__real@3f000000
    vmulss  xmm0, xmm2, cs:__real@3f000000
    vsubss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbx+0EB0h], xmm1
    vmovss  dword ptr [rbx+0EB4h], xmm3
  }
  _RBX->input.consts[123].v[2] = 0.0;
  _RBX->input.consts[123].v[3] = 1.0;
  ++_RBX->constVersions[123];
  p_m_image = &R_RT_Handle::GetSurface(srcVelocityRt)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &_RBX->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  p_input->codeImages[29] = &p_m_image->m_base;
  __asm { vmovups [rsp+58h+var_28], xmm0 }
  RB_FullScreenFilterInternal(&v19, rgp.mblurTileDownsampleMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_motionblur.cpp(45)");
}

