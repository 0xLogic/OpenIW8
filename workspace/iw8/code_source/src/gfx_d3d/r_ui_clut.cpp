/*
==============
R_UiClut_Initialize
==============
*/

void R_UiClut_Initialize(void)
{
  ?R_UiClut_Initialize@@YAXXZ();
}

/*
==============
RB_UiClut_GetVariant
==============
*/

const GfxImage *__fastcall RB_UiClut_GetVariant(GfxUiClutVariation variant)
{
  return ?RB_UiClut_GetVariant@@YAPEBUGfxImage@@W4GfxUiClutVariation@@@Z(variant);
}

/*
==============
RB_UiClut_SetParameters
==============
*/

void __fastcall RB_UiClut_SetParameters(const GfxCmdBufContext *gfxContext)
{
  ?RB_UiClut_SetParameters@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
R_UiClut_Shutdown
==============
*/

void R_UiClut_Shutdown(void)
{
  ?R_UiClut_Shutdown@@YAXXZ();
}

/*
==============
RB_UiClut_Update
==============
*/

void __fastcall RB_UiClut_Update(const GfxCmdBufContext *gfxContext)
{
  ?RB_UiClut_Update@@YAXAEBUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_UiClut_GetVariant
==============
*/
GfxImage *RB_UiClut_GetVariant(GfxUiClutVariation variant)
{
  __int64 v1; 
  int v4; 

  v1 = (unsigned int)variant;
  if ( (unsigned int)variant >= COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_ui_clut.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( variant ) ) < (unsigned)( ( sizeof( *array_counter( s_uiClut.clutImage ) ) + 0 ) )", "static_cast<uint>( variant ) doesn't index ARRAY_COUNT(s_uiClut.clutImage)\n\t%i not in [0, %i)", variant, v4) )
      __debugbreak();
  }
  return s_uiClut.clutImage[v1];
}

/*
==============
RB_UiClut_SetParameters
==============
*/
void RB_UiClut_SetParameters(const GfxCmdBufContext *gfxContext)
{
  GfxCmdBufSourceState *source; 
  GfxImage *v2; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v5; 
  GfxImage *v6; 
  GfxCmdBufInput *v7; 

  source = gfxContext->source;
  v2 = s_uiClut.clutImage[0];
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[81] = v2;
  v5 = gfxContext->source;
  v6 = s_uiClut.clutImage[1];
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v7 = &v5->input;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v7->codeImages[82] = v6;
}

/*
==============
RB_UiClut_Update
==============
*/
void RB_UiClut_Update(const GfxCmdBufContext *gfxContext)
{
  char v6; 
  unsigned int v7; 
  const dvar_t *v14; 
  unsigned int flags; 
  char v18; 
  unsigned int clutCount; 
  unsigned int i; 
  const GfxTexture *Resident; 
  unsigned int v32; 
  unsigned int j; 
  GfxTexture *v34; 
  GfxUiClutVariation variation; 
  unsigned int k; 
  const GfxTexture *v41; 
  GfxTexture *textures; 
  GfxDisplayMappingParams result; 
  _BYTE data[24]; 
  ComputeCmdBufState state; 
  void *retaddr; 

  _R11 = &retaddr;
  _ER12 = 0;
  textures = (GfxTexture *)gfxContext;
  v6 = 0;
  v7 = 0;
  if ( s_uiClut.clutCount )
  {
    _R15 = &s_uiClut;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vmovaps xmmword ptr [r11-58h], xmm8
      vxorps  xmm8, xmm8, xmm8
    }
    do
    {
      *(_QWORD *)&data[12] = 0i64;
      *(_DWORD *)&data[20] = 0;
      *(_DWORD *)data = v7;
      *(_DWORD *)&data[4] = R_GetDisplayColorimetry();
      _RAX = R_GetDisplayMappingParams(&result);
      __asm
      {
        vmovsd  xmm0, qword ptr [rax]
        vshufps xmm6, xmm0, xmm0, 55h ; 'U'
      }
      *(double *)&_XMM0 = R_GetDisplayHdrUiMaxLuminance();
      v14 = DCONST_DVARBOOL_r_useBrightnessForUI;
      __asm { vmovss  dword ptr [rsp+78h], xmm0 }
      if ( !DCONST_DVARBOOL_r_useBrightnessForUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_useBrightnessForUI") )
        __debugbreak();
      if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
      {
        flags = v14->flags;
        if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v14->name) )
          __debugbreak();
      }
      _EAX = v14->current.color[0];
      __asm { vmovd   xmm0, eax }
      v18 = 0;
      __asm
      {
        vmovd   xmm1, r12d
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm8, xmm2
      }
      _RCX = 3i64 * v7;
      if ( r_uiClutForceUpdate->current.enabled )
        v18 = 1;
      __asm { vsubss  xmm0, xmm7, xmm1 }
      data[20] = v18;
      __asm
      {
        vmovss  dword ptr [rsp+7Ch], xmm0
        vmovss  dword ptr [rbp+9E0h+var_A60], xmm1
      }
      if ( s_uiClut.parameters[v7].forceUpdate || v18 == 1 || *(_QWORD *)&s_uiClut.parameters[v7].variation != *(_QWORD *)data || *(_QWORD *)&s_uiClut.parameters[v7].hdrUiMaxLuminance != *(_QWORD *)&data[8] || *(_QWORD *)&s_uiClut.parameters[v7].minLumOffset != *(_QWORD *)&data[16] )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+0AE0h+data]
          vmovsd  xmm1, [rbp+9E0h+var_A60]
          vmovups xmmword ptr [r15+rcx*8+18h], xmm0
          vmovsd  qword ptr [r15+rcx*8+28h], xmm1
        }
        v6 = 1;
        s_uiClut.requiresUpdate[v7] = 1;
        s_uiClut.parameters[v7].forceUpdate = 0;
      }
      ++v7;
    }
    while ( v7 < s_uiClut.clutCount );
    __asm
    {
      vmovaps xmm8, [rsp+0AE0h+var_58+8]
      vmovaps xmm7, [rsp+0AE0h+var_48+8]
      vmovaps xmm6, xmmword ptr [rsp+0AE0h+var_38+8]
    }
    if ( v6 )
    {
      R_LockGfxImmediateContext();
      R_InitGfxComputeCmdBufState(&state, (const GfxCmdBufState *)textures->shaderView.resource);
      R_ProfBeginNamedEvent(&state, "UI CLUT Generate");
      R_GPU_BeginTimer(GPU_TIMER_UI_CLUT_GENERATE);
      clutCount = s_uiClut.clutCount;
      for ( i = 0; i < clutCount; ++i )
      {
        if ( s_uiClut.requiresUpdate[i] )
        {
          Resident = R_Texture_GetResident(s_uiClut.clutImage[i]->textureId);
          R_HW_AddResourceTransition(&state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          clutCount = s_uiClut.clutCount;
        }
      }
      R_HW_FlushResourceTransitions(&state);
      v32 = s_uiClut.clutCount;
      for ( j = 0; j < v32; ++j )
      {
        if ( s_uiClut.requiresUpdate[j] )
        {
          v34 = (GfxTexture *)R_Texture_GetResident(s_uiClut.clutImage[j]->textureId);
          _RDI = 3i64 * j;
          R_SetComputeShader(&state, rgp.uiClutGenerateShader);
          textures = v34;
          R_SetComputeRWTextures(&state, 0, 1, (const GfxTexture *const *)&textures);
          __asm { vmovss  xmm0, dword ptr [r15+rdi*8+20h] }
          variation = s_uiClut.parameters[j].variation;
          __asm
          {
            vmovss  xmm1, dword ptr [r15+rdi*8+24h]
            vmovss  dword ptr [rbp+9E0h+var_A60], xmm0
            vmovss  xmm0, dword ptr [r15+rdi*8+28h]
          }
          *(_DWORD *)data = variation;
          *(_DWORD *)&data[4] = s_uiClut.parameters[j].colorimetry;
          __asm
          {
            vmovss  [rbp+9E0h+var_A58], xmm0
            vmovss  dword ptr [rbp+9E0h+var_A60+4], xmm1
          }
          R_UploadAndSetComputeConstants(&state, 0, data, 0x20u, NULL);
          R_Dispatch(&state, 4u, 4u, 0x20u);
          v32 = s_uiClut.clutCount;
        }
      }
      for ( k = 0; k < v32; ++k )
      {
        if ( s_uiClut.requiresUpdate[k] )
        {
          v41 = R_Texture_GetResident(s_uiClut.clutImage[k]->textureId);
          R_HW_AddResourceTransition(&state, v41, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          s_uiClut.requiresUpdate[k] = 0;
          v32 = s_uiClut.clutCount;
        }
      }
      R_HW_FlushResourceTransitions(&state);
      R_GPU_EndTimer();
      R_ProfEndNamedEvent(&state);
      R_UnlockGfxImmediateContext();
    }
  }
}

/*
==============
R_UiClut_Initialize
==============
*/

void __fastcall R_UiClut_Initialize(double _XMM0_8)
{
  unsigned int v1; 
  __int64 v2; 
  int v3; 
  unsigned int i; 
  R_ImageProgID v5; 
  GfxImage *v6; 
  __int64 v9; 
  __m256i v10; 
  __m256i v11; 
  Image_SetupParams params; 

  s_uiClut.clutCount = 2;
  v1 = 0;
  do
  {
    v2 = v1++;
    s_uiClut.requiresUpdate[v2] = 1;
  }
  while ( v1 < s_uiClut.clutCount );
  v3 = g_R_RT_renderTargetFmts[1];
  for ( i = 0; i < s_uiClut.clutCount; s_uiClut.clutImage[v9] = v6 )
  {
    if ( i )
    {
      if ( i == 1 )
      {
        v5 = IMAGE_PROG_UI_CLUT_SRGB;
        goto LABEL_9;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_ui_clut.cpp", 65, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CLUT type not handled") )
        __debugbreak();
    }
    v5 = IMAGE_PROG_UI_CLUT_GAMMA2;
LABEL_9:
    v6 = Image_AllocProg(v5, IMG_CATEGORY_RAW, TS_FUNCTION);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_ui_clut.cpp", 77, ASSERT_TYPE_SANITY, "( clutImage )", (const char *)&queryFormat, "clutImage") )
      __debugbreak();
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0D8h+var_88+8], xmm0
    }
    *(__int64 *)((char *)&v10.m256i_i64[1] + 4) = 1i64;
    v11.m256i_i64[0] = 0i64;
    v11.m256i_i32[6] = -1;
    __asm { vmovups ymm1, [rsp+0D8h+var_88] }
    v10.m256i_i64[0] = 0x2000000020i64;
    v10.m256i_i32[2] = 32;
    v10.m256i_i32[5] = 8454146;
    v10.m256i_i32[6] = v3;
    __asm
    {
      vmovups ymm0, [rsp+0D8h+var_A8]
      vmovups ymmword ptr [rsp+0D8h+params.width], ymm0
      vmovups ymmword ptr [rsp+0D8h+params.customAllocFunc], ymm1
    }
    Image_Setup(v6, &params);
    v9 = i++;
  }
}

/*
==============
R_UiClut_Shutdown
==============
*/
void R_UiClut_Shutdown(void)
{
  unsigned int i; 
  GfxImage *v1; 
  GfxImage **v2; 

  for ( i = 0; i < s_uiClut.clutCount; *v2 = NULL )
  {
    v1 = s_uiClut.clutImage[i];
    v2 = &s_uiClut.clutImage[i];
    if ( v1 )
      Image_Release(v1);
    ++i;
  }
  s_uiClut.clutCount = 0;
}

