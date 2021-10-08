/*
==============
R_FogSpline_Update
==============
*/

bool __fastcall R_FogSpline_Update(const GfxViewInfo *viewInfo)
{
  return ?R_FogSpline_Update@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_FogSpline_DestroyResources
==============
*/

void R_FogSpline_DestroyResources(void)
{
  ?R_FogSpline_DestroyResources@@YAXXZ();
}

/*
==============
R_FogSplineLive_ProcessToken
==============
*/

bool __fastcall R_FogSplineLive_ProcessToken(const char *fogSplineImageValue)
{
  return ?R_FogSplineLive_ProcessToken@@YA_NPEBD@Z(fogSplineImageValue);
}

/*
==============
RB_FogSpline_ProcessBlend
==============
*/

void __fastcall RB_FogSpline_ProcessBlend(ComputeCmdBufState *computeState, const GfxViewInfo *const viewInfo, const GfxBackEndData *data)
{
  ?RB_FogSpline_ProcessBlend@@YAXPEAUComputeCmdBufState@@QEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_FogSpline_CreateResources
==============
*/

void R_FogSpline_CreateResources(void)
{
  ?R_FogSpline_CreateResources@@YAXXZ();
}

/*
==============
RB_FogSpline_GetImage
==============
*/

const GfxImage *__fastcall RB_FogSpline_GetImage(const GfxFog *fog, LocalClientNum_t clientIndex)
{
  return ?RB_FogSpline_GetImage@@YAPEBUGfxImage@@PEBUGfxFog@@W4LocalClientNum_t@@@Z(fog, clientIndex);
}

/*
==============
R_FogSplineLive_GetImage
==============
*/

const GfxImage *__fastcall R_FogSplineLive_GetImage()
{
  return ?R_FogSplineLive_GetImage@@YAPEBUGfxImage@@XZ();
}

/*
==============
RB_FogSpline_GetImage
==============
*/
const GfxImage *RB_FogSpline_GetImage(const GfxFog *fog, LocalClientNum_t clientIndex)
{
  __int64 v2; 
  const GfxImage *result; 

  v2 = clientIndex;
  if ( clientIndex >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 63, ASSERT_TYPE_ASSERT, "(clientIndex < 2)", (const char *)&queryFormat, "clientIndex < R_FOG_SPLINE_BLEND_TARGET_COUNT") )
    __debugbreak();
  if ( !fog->useAtmosphericScattering )
    return rgp.zero1DImage;
  if ( fog->fogSplineBlendCount > 1u )
    return s_fogSplines.fogSplineBlendImage[v2];
  result = rgp.zero1DImage;
  if ( fog->fogSplineBlendEntry[0].image )
    return fog->fogSplineBlendEntry[0].image;
  return result;
}

/*
==============
RB_FogSpline_ProcessBlend
==============
*/
void RB_FogSpline_ProcessBlend(ComputeCmdBufState *computeState, const GfxViewInfo *const viewInfo, const GfxBackEndData *data)
{
  __int64 clientIndex; 
  GfxTexture *Resident; 
  GfxFogSplineBlendParameters *v25; 
  GfxTexture *textures; 
  GfxFogSplineBlendParameters outParameters; 

  clientIndex = (unsigned int)viewInfo->clientIndex;
  R_FogSpline_GetBlendParameters(&viewInfo->fog, viewInfo->clientIndex, &outParameters);
  if ( viewInfo->fog.fogSplineBlendCount > 1u )
  {
    if ( r_fogSplineForceUpdate->current.enabled || memcmp_0(&s_fogSplines.blendParameters[clientIndex], &outParameters, 0xD0ui64) )
    {
      _RCX = &s_fogSplines.blendParameters[clientIndex];
      _RAX = &outParameters;
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
        vmovups ymmword ptr [rcx+0A0h], ymm1
        vmovups xmm1, xmmword ptr [rax+0C0h]
        vmovups xmmword ptr [rcx+0C0h], xmm1
      }
      R_LockIfGfxImmediateContext(computeState->device);
      R_ProfBeginNamedEvent(computeState, "Fog Spline Blend");
      R_GPU_BeginTimer(GPU_TIMER_FOG_SPLINE_BLEND);
      Resident = (GfxTexture *)R_Texture_GetResident(s_fogSplines.fogSplineBlendImage[viewInfo->clientIndex]->textureId);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(computeState);
      v25 = &s_fogSplines.blendParameters[viewInfo->clientIndex];
      R_SetComputeShader(computeState, rgp.fogSplineBlend);
      R_SetComputeTextures(computeState, 0, 8, v25->textures);
      textures = Resident;
      R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
      R_UploadAndSetComputeConstants(computeState, 0, v25, 0x90u, NULL);
      R_Dispatch(computeState, 2u, 1u, 1u);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(computeState);
      R_GPU_EndTimer();
      R_ProfEndNamedEvent(computeState);
      R_UnlockIfGfxImmediateContext(computeState->device);
    }
  }
  else
  {
    _RCX = &s_fogSplines.blendParameters[clientIndex];
    _RAX = &outParameters;
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
      vmovups ymmword ptr [rcx+0A0h], ymm1
      vmovups xmm1, xmmword ptr [rax+0C0h]
      vmovups xmmword ptr [rcx+0C0h], xmm1
    }
  }
}

/*
==============
R_FogSplineLive_GetImage
==============
*/
GfxImage *R_FogSplineLive_GetImage()
{
  return s_fogSplines.fogSplineLive;
}

/*
==============
R_FogSplineLive_ProcessToken
==============
*/
char R_FogSplineLive_ProcessToken(const char *fogSplineImageValue)
{
  __int64 v3; 
  GfxImage *fogSplineLive; 
  const GfxTexture *Resident; 
  HRESULT v7; 
  const char *v8; 
  __int64 v11; 
  unsigned int outlen[2]; 
  __int64 v21[3]; 
  unsigned __int8 out[256]; 

  if ( !fogSplineImageValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 353, ASSERT_TYPE_ASSERT, "(fogSplineImageValue)", (const char *)&queryFormat, "fogSplineImageValue") )
    __debugbreak();
  if ( *fogSplineImageValue )
  {
    if ( *fogSplineImageValue != 118 )
      return 0;
    if ( (fogSplineImageValue[1] != 48 || fogSplineImageValue[2] != 48 || fogSplineImageValue[3] != 58) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 365, ASSERT_TYPE_SANITY, "( fogSplineImageValue[0] == 'v' && fogSplineImageValue[1] == '0' && fogSplineImageValue[2] == '0' && fogSplineImageValue[3] == ':' )", (const char *)&queryFormat, "fogSplineImageValue[0] == 'v' && fogSplineImageValue[1] == '0' && fogSplineImageValue[2] == '0' && fogSplineImageValue[3] == ':'") )
      __debugbreak();
    outlen[0] = 256;
    v3 = -1i64;
    while ( fogSplineImageValue[++v3] != 0 )
      ;
    j_base64_decode((const unsigned __int8 *)fogSplineImageValue + 4, v3 - 4, out, outlen);
    if ( outlen[0] != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 371, ASSERT_TYPE_ASSERT, "(outLen == PIXEL_DATA_SIZE)", (const char *)&queryFormat, "outLen == PIXEL_DATA_SIZE") )
      __debugbreak();
  }
  else
  {
    memset_0(out, 0, sizeof(out));
  }
  fogSplineLive = s_fogSplines.fogSplineLive;
  Resident = R_Texture_GetResident(s_fogSplines.fogSplineLive->textureId);
  if ( PixelFormat_GetBytesPerPixel(fogSplineLive->format) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 292, ASSERT_TYPE_ASSERT, "(PixelFormat_GetBytesPerPixel( image->format ) == ( sizeof(half) * channels ))", (const char *)&queryFormat, "PixelFormat_GetBytesPerPixel( image->format ) == ( sizeof(half) * channels )") )
    __debugbreak();
  if ( fogSplineLive->width != 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 293, ASSERT_TYPE_ASSERT, "(image->width == 128)", (const char *)&queryFormat, "image->width == R_FOG_SPLINE_WIDTH") )
    __debugbreak();
  v21[0] = 0i64;
  v21[1] = 0i64;
  *(_QWORD *)outlen = 0i64;
  v7 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, __int64 *, unsigned int *))Resident->basemap->m_pFunction[2].Release)(Resident->basemap, 0i64, v21, outlen);
  if ( v7 < 0 )
  {
    v8 = R_ErrorDescription(v7);
    Sys_Error((const ObfuscateErrorText)&stru_143DB8F20, 315i64, v8);
  }
  _RAX = *(_QWORD *)outlen;
  _RCX = out;
  v11 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rax], xmm0
      vmovups xmm1, xmmword ptr [rcx+10h]
      vmovups xmmword ptr [rax+10h], xmm1
      vmovups xmm0, xmmword ptr [rcx+20h]
      vmovups xmmword ptr [rax+20h], xmm0
      vmovups xmm1, xmmword ptr [rcx+30h]
      vmovups xmmword ptr [rax+30h], xmm1
      vmovups xmm0, xmmword ptr [rcx+40h]
      vmovups xmmword ptr [rax+40h], xmm0
      vmovups xmm1, xmmword ptr [rcx+50h]
      vmovups xmmword ptr [rax+50h], xmm1
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
      vmovups xmm1, xmmword ptr [rcx+70h]
    }
    _RAX += 128i64;
    _RCX += 128;
    __asm { vmovups xmmword ptr [rax-10h], xmm1 }
    --v11;
  }
  while ( v11 );
  Resident->basemap->m_pFunction[3].QueryInterface(Resident->basemap, NULL, NULL);
  return 1;
}

/*
==============
R_FogSpline_CreateResources
==============
*/

void __fastcall R_FogSpline_CreateResources(double _XMM0_8)
{
  int v1; 
  GfxFogSplineInternal *v2; 
  unsigned int i; 
  GfxImage *v4; 
  GfxImage *v5; 
  GfxImage *fogSplineLive; 
  __m256i v12; 
  __m256i v13; 
  Image_SetupParams params; 

  v1 = g_R_RT_renderTargetFmts[64];
  v2 = &s_fogSplines;
  for ( i = 0; i < 2; ++i )
  {
    v4 = Image_AllocProg((R_ImageProgID)(i + 34), IMG_CATEGORY_RAW, TS_FUNCTION);
    v2->fogSplineBlendImage[0] = v4;
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 88, ASSERT_TYPE_SANITY, "( s_fogSplines.fogSplineBlendImage[fogSplineIndex] )", (const char *)&queryFormat, "s_fogSplines.fogSplineBlendImage[fogSplineIndex]") )
      __debugbreak();
    v5 = v2->fogSplineBlendImage[0];
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+57h+var_70+8], xmm0
    }
    v12.m256i_i32[2] = 1;
    *(__int64 *)((char *)&v12.m256i_i64[1] + 4) = 1i64;
    v13.m256i_i64[0] = 0i64;
    v13.m256i_i32[6] = -1;
    __asm { vmovups ymm1, [rbp+57h+var_70] }
    v12.m256i_i64[0] = 0x100000080i64;
    v12.m256i_i32[5] = 8486914;
    v12.m256i_i32[6] = v1;
    __asm
    {
      vmovups ymm0, [rbp+57h+var_90]
      vmovups ymmword ptr [rbp+57h+params.width], ymm0
      vmovups ymmword ptr [rbp+57h+params.customAllocFunc], ymm1
    }
    Image_Setup(v5, &params);
    v2 = (GfxFogSplineInternal *)((char *)v2 + 8);
  }
  fogSplineLive = Image_AllocProg(IMAGE_PROG_FOG_SPLINE_LIVE, IMG_CATEGORY_RAW, TS_FUNCTION);
  s_fogSplines.fogSplineLive = fogSplineLive;
  if ( !fogSplineLive )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 98, ASSERT_TYPE_SANITY, "( s_fogSplines.fogSplineLive )", (const char *)&queryFormat, "s_fogSplines.fogSplineLive") )
      __debugbreak();
    fogSplineLive = s_fogSplines.fogSplineLive;
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+57h+var_70+8], xmm0
  }
  v12.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v12.m256i_i64[1] + 4) = 1i64;
  v13.m256i_i64[0] = 0i64;
  v13.m256i_i32[6] = -1;
  __asm { vmovups ymm1, [rbp+57h+var_70] }
  v12.m256i_i64[0] = 0x100000080i64;
  v12.m256i_i32[5] = 16879666;
  v12.m256i_i32[6] = v1;
  __asm
  {
    vmovups ymm0, [rbp+57h+var_90]
    vmovups ymmword ptr [rbp+57h+params.width], ymm0
    vmovups ymmword ptr [rbp+57h+params.customAllocFunc], ymm1
  }
  Image_Setup(fogSplineLive, &params);
}

/*
==============
R_FogSpline_DestroyResources
==============
*/
void R_FogSpline_DestroyResources(void)
{
  GfxFogSplineInternal *v0; 
  __int64 v1; 

  Image_Release(s_fogSplines.fogSplineLive);
  v0 = &s_fogSplines;
  s_fogSplines.fogSplineLive = NULL;
  v1 = 2i64;
  do
  {
    Image_Release(v0->fogSplineBlendImage[0]);
    v0->fogSplineBlendImage[0] = NULL;
    v0 = (GfxFogSplineInternal *)((char *)v0 + 8);
    --v1;
  }
  while ( v1 );
}

/*
==============
R_FogSpline_GetBlendParameters
==============
*/
void R_FogSpline_GetBlendParameters(const GfxFog *const fog, const unsigned int clientIndex, GfxFogSplineBlendParameters *outParameters)
{
  unsigned __int8 fogSplineBlendCount; 
  unsigned int v17; 
  unsigned int v18; 
  int v24; 
  unsigned __int8 v28; 
  __int64 v29; 
  bool v32; 
  GfxTextureId textureId; 
  const GfxTexture *Resident; 
  bool v44; 
  unsigned int v56; 
  __int64 v57; 
  bool v62; 
  __int64 v63; 
  bool v66; 
  __int64 v70; 
  __int64 v71; 
  const GfxTexture **v72; 
  const GfxTexture **textures; 
  __int64 v74; 

  _R14 = outParameters;
  if ( !fog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 129, ASSERT_TYPE_ASSERT, "(fog)", (const char *)&queryFormat, "fog") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 130, ASSERT_TYPE_ASSERT, "(outParameters)", (const char *)&queryFormat, "outParameters") )
    __debugbreak();
  fogSplineBlendCount = fog->fogSplineBlendCount;
  if ( fogSplineBlendCount > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 134, ASSERT_TYPE_ASSERT, "( fog->fogSplineBlendCount ) <= ( 8 )", "%s <= %s\n\t%u, %u", "fog->fogSplineBlendCount", "R_FOG_SPLINE_BLEND_MAX", fogSplineBlendCount, 8) )
    __debugbreak();
  v17 = 8;
  if ( fog->fogSplineBlendCount < 8u )
    v17 = fog->fogSplineBlendCount;
  memset_0(_R14, 0, sizeof(GfxFogSplineBlendParameters));
  if ( !v17 )
  {
LABEL_43:
    if ( v17 >= 8 )
      return;
    goto LABEL_44;
  }
  if ( v17 != 1 || fog->fogSplineBlendEntry[0].image != s_fogSplines.fogSplineLive )
  {
    v18 = 0;
    __asm
    {
      vmovaps [rsp+138h+var_48], xmm6
      vmovaps [rsp+138h+var_98], xmm11
      vmovaps [rsp+138h+var_B8], xmm13
      vmovss  xmm13, cs:__real@3f800000
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm11, xmm11, xmm11
    }
    _R12 = &_R14->csParams.params[0].v[2];
    __asm { vmovaps [rsp+138h+var_58], xmm7 }
    _RBX = &fog->fogSplineBlendEntry[0].data.fogMaxDistance;
    __asm
    {
      vmovaps [rsp+138h+var_68], xmm8
      vmovaps [rsp+138h+var_78], xmm9
    }
    v24 = 0;
    __asm
    {
      vmovaps [rsp+138h+var_88], xmm10
      vmovaps [rsp+138h+var_A8], xmm12
      vmovss  xmm12, cs:__real@3f317218
      vmovaps [rsp+138h+var_C8], xmm14
      vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    textures = _R14->textures;
    __asm
    {
      vmovaps [rsp+138h+var_D8], xmm15
      vmovss  xmm15, cs:__real@3b808081
    }
    v74 = v17;
    do
    {
      v28 = *((_BYTE *)_RBX + 4);
      v29 = *((_QWORD *)_RBX - 2);
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 156, ASSERT_TYPE_ASSERT, "(weightQ > 0)", (const char *)&queryFormat, "weightQ > 0") )
        __debugbreak();
      __asm
      {
        vmovss  xmm1, dword ptr [rbx-4]
        vxorps  xmm0, xmm0, xmm0
      }
      v32 = __CFADD__(v28, v24) || v28 + v24 == 0;
      v24 += v28;
      __asm
      {
        vcomiss xmm1, xmm6
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm10, xmm0, xmm15
      }
      if ( v32 )
        __asm { vmovaps xmm1, xmm6 }
      else
        __asm { vdivss  xmm1, xmm12, xmm1 }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vcomiss xmm0, xmm6
        vmulss  xmm9, xmm0, xmm1
      }
      if ( v32 )
        __asm { vmovaps xmm7, xmm6 }
      else
        __asm { vdivss  xmm7, xmm13, xmm0 }
      __asm
      {
        vmulss  xmm0, xmm7, dword ptr [rbx-8]
        vxorps  xmm8, xmm0, xmm14
      }
      if ( v29 )
        textureId = *(_DWORD *)(v29 + 16);
      else
        textureId = rgp.zero1DImage->textureId;
      Resident = R_Texture_GetResident(textureId);
      __asm
      {
        vmovss  dword ptr [r12-8], xmm10
        vmovss  dword ptr [r12-4], xmm9
        vmovss  dword ptr [r12], xmm7
      }
      *textures = Resident;
      __asm
      {
        vmovss  dword ptr [r12+4], xmm8
        vmulss  xmm0, xmm10, dword ptr [rbx-4]
      }
      _RBX += 6;
      ++textures;
      _R12 += 4;
      v44 = v74-- == 1;
      __asm { vaddss  xmm11, xmm11, xmm0 }
    }
    while ( !v44 );
    __asm { vmovaps xmm15, [rsp+138h+var_D8] }
    v44 = v24 == 255;
    _RBP = fog;
    __asm
    {
      vmovaps xmm14, [rsp+138h+var_C8]
      vmovaps xmm12, [rsp+138h+var_A8]
      vmovaps xmm10, [rsp+138h+var_88]
      vmovaps xmm9, [rsp+138h+var_78]
      vmovaps xmm8, [rsp+138h+var_68]
      vmovaps xmm7, [rsp+138h+var_58]
    }
    _R14 = outParameters;
    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 172, ASSERT_TYPE_ASSERT, "(sumWeightQ == GFX_FOG_SPLINE_WEIGHT_ONE)", (const char *)&queryFormat, "sumWeightQ == GFX_FOG_SPLINE_WEIGHT_ONE") )
      __debugbreak();
    __asm
    {
      vmulss  xmm2, xmm11, cs:__real@3fb8aa3b
      vmovaps xmm11, [rsp+138h+var_98]
    }
    if ( v17 >= 4 )
    {
      _RCX = &outParameters->csParams.params[1].v[1];
      v56 = ((v17 - 4) >> 2) + 1;
      v57 = v56;
      v18 = 4 * v56;
      do
      {
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [rcx-10h]
          vmovss  dword ptr [rcx-10h], xmm0
          vmulss  xmm1, xmm2, dword ptr [rcx]
          vmovss  dword ptr [rcx], xmm1
          vmulss  xmm0, xmm2, dword ptr [rcx+10h]
          vmovss  dword ptr [rcx+10h], xmm0
          vmulss  xmm0, xmm2, dword ptr [rcx+20h]
          vmovss  dword ptr [rcx+20h], xmm0
        }
        _RCX += 16;
        --v57;
      }
      while ( v57 );
    }
    v62 = v18 <= v17;
    if ( v18 < v17 )
    {
      v63 = v17 - v18;
      _RCX = &outParameters->csParams.params[v18].v[1];
      do
      {
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [rcx]
          vmovss  dword ptr [rcx], xmm0
        }
        _RCX += 4;
        v66 = v63-- == 0;
        v62 = v66 || v63 == 0;
      }
      while ( v63 );
    }
    outParameters->csParams.blendCount = v17;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1Ch]
      vcomiss xmm0, xmm6
    }
    if ( !v62 )
      __asm { vdivss  xmm6, xmm13, xmm0 }
    __asm
    {
      vmovaps xmm13, [rsp+138h+var_B8]
      vmovss  dword ptr [r14+4], xmm6
      vmovaps xmm6, [rsp+138h+var_48]
    }
    outParameters->csParams.maxDistance = fog->maxDistance;
    outParameters->csParams.startDist = fog->startDist;
    goto LABEL_43;
  }
  _R14->textures[0] = R_Texture_GetResident(s_fogSplines.fogSplineLive->textureId);
LABEL_44:
  v70 = v17;
  v71 = 8 - v17;
  v72 = &_R14->textures[v70];
  do
  {
    *v72++ = R_Texture_GetResident(rgp.zero1DImage->textureId);
    --v71;
  }
  while ( v71 );
}

/*
==============
R_FogSpline_Update
==============
*/
bool R_FogSpline_Update(const GfxViewInfo *viewInfo)
{
  __int64 clientIndex; 
  bool result; 
  GfxFogSplineBlendParameters outParameters; 

  clientIndex = (unsigned int)viewInfo->clientIndex;
  R_FogSpline_GetBlendParameters(&viewInfo->fog, viewInfo->clientIndex, &outParameters);
  if ( viewInfo->fog.fogSplineBlendCount <= 1u )
  {
    _RCX = &s_fogSplines.blendParameters[clientIndex];
    _RAX = &outParameters;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
    }
    _RAX = &outParameters.csParams.params[7];
    __asm
    {
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm1, ymmword ptr [rax]
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+0A0h], ymm1
      vmovups xmm1, xmmword ptr [rax+40h]
    }
    result = 0;
LABEL_6:
    __asm { vmovups xmmword ptr [rcx+0C0h], xmm1 }
    return result;
  }
  if ( r_fogSplineForceUpdate->current.enabled || (result = memcmp_0(&s_fogSplines.blendParameters[clientIndex], &outParameters, 0xD0ui64) != 0) )
  {
    _RCX = &s_fogSplines.blendParameters[clientIndex];
    _RAX = &outParameters;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
    }
    _RAX = &outParameters.csParams.params[7];
    __asm
    {
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm1, ymmword ptr [rax]
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+0A0h], ymm1
      vmovups xmm1, xmmword ptr [rax+40h]
    }
    result = 1;
    goto LABEL_6;
  }
  return result;
}

