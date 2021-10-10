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
  char v1; 
  unsigned int v2; 
  __m256i v3; 
  double DisplayHdrUiMaxLuminance; 
  const dvar_t *v6; 
  unsigned int flags; 
  char v9; 
  double v12; 
  unsigned int clutCount; 
  unsigned int i; 
  const GfxTexture *Resident; 
  unsigned int v16; 
  unsigned int j; 
  GfxTexture *v18; 
  GfxUiClutVariation variation; 
  float minLumScale; 
  float minLumOffset; 
  unsigned int k; 
  const GfxTexture *v23; 
  GfxTexture *textures; 
  GfxDisplayMappingParams result; 
  _BYTE data[24]; 
  float v27; 
  ComputeCmdBufState state; 

  textures = (GfxTexture *)gfxContext;
  v1 = 0;
  v2 = 0;
  if ( s_uiClut.clutCount )
  {
    do
    {
      *(_QWORD *)&data[12] = 0i64;
      *(_DWORD *)&data[20] = 0;
      *(_DWORD *)data = v2;
      *(_DWORD *)&data[4] = R_GetDisplayColorimetry();
      v3 = (__m256i)*(unsigned __int64 *)&R_GetDisplayMappingParams(&result)->gamma;
      _XMM6 = _mm_shuffle_ps(*(__m128 *)v3.m256i_i8, *(__m128 *)v3.m256i_i8, 85);
      DisplayHdrUiMaxLuminance = R_GetDisplayHdrUiMaxLuminance();
      v6 = DCONST_DVARBOOL_r_useBrightnessForUI;
      *(float *)&data[8] = *(float *)&DisplayHdrUiMaxLuminance;
      if ( !DCONST_DVARBOOL_r_useBrightnessForUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_useBrightnessForUI") )
        __debugbreak();
      if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
      {
        flags = v6->flags;
        if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
          __debugbreak();
      }
      _XMM0 = v6->current.color[0];
      v9 = 0;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm8, xmm2
      }
      if ( r_uiClutForceUpdate->current.enabled )
        v9 = 1;
      data[20] = v9;
      *(float *)&data[12] = 1.0 - *(float *)&_XMM1;
      *(float *)&data[16] = *(float *)&_XMM1;
      if ( s_uiClut.parameters[v2].forceUpdate || v9 == 1 || *(_QWORD *)&s_uiClut.parameters[v2].variation != *(_QWORD *)data || *(_QWORD *)&s_uiClut.parameters[v2].hdrUiMaxLuminance != *(_QWORD *)&data[8] || *(_QWORD *)&s_uiClut.parameters[v2].minLumOffset != *(_QWORD *)&data[16] )
      {
        v12 = *(double *)&data[16];
        *(_OWORD *)&s_uiClut.parameters[v2].variation = *(_OWORD *)data;
        *(double *)&s_uiClut.parameters[v2].minLumOffset = v12;
        v1 = 1;
        s_uiClut.requiresUpdate[v2] = 1;
        s_uiClut.parameters[v2].forceUpdate = 0;
      }
      ++v2;
    }
    while ( v2 < s_uiClut.clutCount );
    if ( v1 )
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
      v16 = s_uiClut.clutCount;
      for ( j = 0; j < v16; ++j )
      {
        if ( s_uiClut.requiresUpdate[j] )
        {
          v18 = (GfxTexture *)R_Texture_GetResident(s_uiClut.clutImage[j]->textureId);
          R_SetComputeShader(&state, rgp.uiClutGenerateShader);
          textures = v18;
          R_SetComputeRWTextures(&state, 0, 1, (const GfxTexture *const *)&textures);
          variation = s_uiClut.parameters[j].variation;
          minLumScale = s_uiClut.parameters[j].minLumScale;
          *(float *)&data[16] = s_uiClut.parameters[j].hdrUiMaxLuminance;
          minLumOffset = s_uiClut.parameters[j].minLumOffset;
          *(_DWORD *)data = variation;
          *(_DWORD *)&data[4] = s_uiClut.parameters[j].colorimetry;
          v27 = minLumOffset;
          *(float *)&data[20] = minLumScale;
          R_UploadAndSetComputeConstants(&state, 0, data, 0x20u, NULL);
          R_Dispatch(&state, 4u, 4u, 0x20u);
          v16 = s_uiClut.clutCount;
        }
      }
      for ( k = 0; k < v16; ++k )
      {
        if ( s_uiClut.requiresUpdate[k] )
        {
          v23 = R_Texture_GetResident(s_uiClut.clutImage[k]->textureId);
          R_HW_AddResourceTransition(&state, v23, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          s_uiClut.requiresUpdate[k] = 0;
          v16 = s_uiClut.clutCount;
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
  __int64 v7; 
  __m256i v8; 
  __m256i v9; 
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
  for ( i = 0; i < s_uiClut.clutCount; s_uiClut.clutImage[v7] = v6 )
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v9.m256i_u64[1] = *(_OWORD *)&_XMM0_8;
    *(__int64 *)((char *)&v8.m256i_i64[1] + 4) = 1i64;
    v9.m256i_i64[0] = 0i64;
    v9.m256i_i32[6] = -1;
    v8.m256i_i64[0] = 0x2000000020i64;
    v8.m256i_i32[2] = 32;
    v8.m256i_i32[5] = 8454146;
    v8.m256i_i32[6] = v3;
    *(__m256i *)&params.width = v8;
    *(__m256i *)&params.customAllocFunc = v9;
    Image_Setup(v6, &params);
    v7 = i++;
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

