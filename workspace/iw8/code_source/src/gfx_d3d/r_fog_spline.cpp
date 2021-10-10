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
  GfxFogSplineBlendParameters *v6; 
  __m256i v7; 
  GfxFogSplineBlendParameters *v8; 
  __m256i v9; 
  GfxTexture *Resident; 
  GfxFogSplineBlendParameters *v11; 
  GfxTexture *textures; 
  GfxFogSplineBlendParameters outParameters; 

  clientIndex = (unsigned int)viewInfo->clientIndex;
  R_FogSpline_GetBlendParameters(&viewInfo->fog, viewInfo->clientIndex, &outParameters);
  if ( viewInfo->fog.fogSplineBlendCount > 1u )
  {
    if ( r_fogSplineForceUpdate->current.enabled || memcmp_0(&s_fogSplines.blendParameters[clientIndex], &outParameters, 0xD0ui64) )
    {
      v8 = &s_fogSplines.blendParameters[clientIndex];
      v9 = *(__m256i *)outParameters.csParams.params[7].v;
      *(__m256i *)&v8->csParams.blendCount = *(__m256i *)&outParameters.csParams.blendCount;
      *(__m256i *)v8->csParams.params[1].v = *(__m256i *)outParameters.csParams.params[1].v;
      *(__m256i *)v8->csParams.params[3].v = *(__m256i *)outParameters.csParams.params[3].v;
      *(__m256i *)v8->csParams.params[5].v = *(__m256i *)outParameters.csParams.params[5].v;
      *(__m256i *)v8->csParams.params[7].v = v9;
      *(__m256i *)&v8->textures[2] = *(__m256i *)&outParameters.textures[2];
      *(_OWORD *)&v8->textures[6] = *(_OWORD *)&outParameters.textures[6];
      R_LockIfGfxImmediateContext(computeState->device);
      R_ProfBeginNamedEvent(computeState, "Fog Spline Blend");
      R_GPU_BeginTimer(GPU_TIMER_FOG_SPLINE_BLEND);
      Resident = (GfxTexture *)R_Texture_GetResident(s_fogSplines.fogSplineBlendImage[viewInfo->clientIndex]->textureId);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(computeState);
      v11 = &s_fogSplines.blendParameters[viewInfo->clientIndex];
      R_SetComputeShader(computeState, rgp.fogSplineBlend);
      R_SetComputeTextures(computeState, 0, 8, v11->textures);
      textures = Resident;
      R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
      R_UploadAndSetComputeConstants(computeState, 0, v11, 0x90u, NULL);
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
    v6 = &s_fogSplines.blendParameters[clientIndex];
    v7 = *(__m256i *)outParameters.csParams.params[7].v;
    *(__m256i *)&v6->csParams.blendCount = *(__m256i *)&outParameters.csParams.blendCount;
    *(__m256i *)v6->csParams.params[1].v = *(__m256i *)outParameters.csParams.params[1].v;
    *(__m256i *)v6->csParams.params[3].v = *(__m256i *)outParameters.csParams.params[3].v;
    *(__m256i *)v6->csParams.params[5].v = *(__m256i *)outParameters.csParams.params[5].v;
    *(__m256i *)v6->csParams.params[7].v = v7;
    *(__m256i *)&v6->textures[2] = *(__m256i *)&outParameters.textures[2];
    *(_OWORD *)&v6->textures[6] = *(_OWORD *)&outParameters.textures[6];
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
  _OWORD *v9; 
  unsigned __int8 *v10; 
  __int64 v11; 
  __int128 v12; 
  unsigned int outlen[2]; 
  __int64 v14[3]; 
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
  v14[0] = 0i64;
  v14[1] = 0i64;
  *(_QWORD *)outlen = 0i64;
  v7 = ((__int64 (__fastcall *)(ID3D12Resource *, _QWORD, __int64 *, unsigned int *))Resident->basemap->m_pFunction[2].Release)(Resident->basemap, 0i64, v14, outlen);
  if ( v7 < 0 )
  {
    v8 = R_ErrorDescription(v7);
    Sys_Error((const ObfuscateErrorText)&stru_143DB8F20, 315i64, v8);
  }
  v9 = *(_OWORD **)outlen;
  v10 = out;
  v11 = 2i64;
  do
  {
    *v9 = *(_OWORD *)v10;
    v9[1] = *((_OWORD *)v10 + 1);
    v9[2] = *((_OWORD *)v10 + 2);
    v9[3] = *((_OWORD *)v10 + 3);
    v9[4] = *((_OWORD *)v10 + 4);
    v9[5] = *((_OWORD *)v10 + 5);
    v9[6] = *((_OWORD *)v10 + 6);
    v12 = *((_OWORD *)v10 + 7);
    v9 += 8;
    v10 += 128;
    *(v9 - 1) = v12;
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
  __m256i v8; 
  __m256i v9; 
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v9.m256i_u64[1] = *(_OWORD *)&_XMM0_8;
    v8.m256i_i32[2] = 1;
    *(__int64 *)((char *)&v8.m256i_i64[1] + 4) = 1i64;
    v9.m256i_i64[0] = 0i64;
    v9.m256i_i32[6] = -1;
    v8.m256i_i64[0] = 0x100000080i64;
    v8.m256i_i32[5] = 8486914;
    v8.m256i_i32[6] = v1;
    *(__m256i *)&params.width = v8;
    *(__m256i *)&params.customAllocFunc = v9;
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
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v9.m256i_u64[1] = _XMM0;
  v8.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v8.m256i_i64[1] + 4) = 1i64;
  v9.m256i_i64[0] = 0i64;
  v9.m256i_i32[6] = -1;
  v8.m256i_i64[0] = 0x100000080i64;
  v8.m256i_i32[5] = 16879666;
  v8.m256i_i32[6] = v1;
  *(__m256i *)&params.width = v8;
  *(__m256i *)&params.customAllocFunc = v9;
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
  GfxFogSplineBlendParameters *v4; 
  unsigned __int8 fogSplineBlendCount; 
  unsigned int v6; 
  unsigned int v7; 
  float v8; 
  __int128 v9; 
  float *v10; 
  float *p_fogMaxDistance; 
  int v12; 
  unsigned __int8 v13; 
  __int64 v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  GfxTextureId textureId; 
  const GfxTexture *Resident; 
  float v23; 
  bool v24; 
  __int128 v25; 
  float v26; 
  float *v27; 
  unsigned int v28; 
  __int64 v29; 
  __int64 v30; 
  float *v31; 
  float maxDistance; 
  __int64 v33; 
  __int64 v34; 
  const GfxTexture **v35; 
  const GfxTexture **textures; 
  __int64 v37; 

  v4 = outParameters;
  if ( !fog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 129, ASSERT_TYPE_ASSERT, "(fog)", (const char *)&queryFormat, "fog") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 130, ASSERT_TYPE_ASSERT, "(outParameters)", (const char *)&queryFormat, "outParameters") )
    __debugbreak();
  fogSplineBlendCount = fog->fogSplineBlendCount;
  if ( fogSplineBlendCount > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 134, ASSERT_TYPE_ASSERT, "( fog->fogSplineBlendCount ) <= ( 8 )", "%s <= %s\n\t%u, %u", "fog->fogSplineBlendCount", "R_FOG_SPLINE_BLEND_MAX", fogSplineBlendCount, 8) )
    __debugbreak();
  v6 = 8;
  if ( fog->fogSplineBlendCount < 8u )
    v6 = fog->fogSplineBlendCount;
  memset_0(v4, 0, sizeof(GfxFogSplineBlendParameters));
  if ( !v6 )
  {
LABEL_43:
    if ( v6 >= 8 )
      return;
    goto LABEL_44;
  }
  if ( v6 != 1 || fog->fogSplineBlendEntry[0].image != s_fogSplines.fogSplineLive )
  {
    v7 = 0;
    v8 = 0.0;
    v9 = 0i64;
    v10 = &v4->csParams.params[0].v[2];
    p_fogMaxDistance = &fog->fogSplineBlendEntry[0].data.fogMaxDistance;
    v12 = 0;
    textures = v4->textures;
    v37 = v6;
    do
    {
      v13 = *((_BYTE *)p_fogMaxDistance + 4);
      v14 = *((_QWORD *)p_fogMaxDistance - 2);
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 156, ASSERT_TYPE_ASSERT, "(weightQ > 0)", (const char *)&queryFormat, "weightQ > 0") )
        __debugbreak();
      v15 = *(p_fogMaxDistance - 1);
      v12 += v13;
      v16 = (float)v13 * 0.0039215689;
      if ( v15 <= 0.0 )
        v17 = 0.0;
      else
        v17 = 0.69314718 / v15;
      v18 = *p_fogMaxDistance * v17;
      if ( *p_fogMaxDistance <= 0.0 )
        v19 = 0.0;
      else
        v19 = 1.0 / *p_fogMaxDistance;
      LODWORD(v20) = COERCE_UNSIGNED_INT(v19 * *(p_fogMaxDistance - 2)) ^ _xmm;
      if ( v14 )
        textureId = *(_DWORD *)(v14 + 16);
      else
        textureId = rgp.zero1DImage->textureId;
      Resident = R_Texture_GetResident(textureId);
      *(v10 - 2) = v16;
      *(v10 - 1) = v18;
      *v10 = v19;
      *textures = Resident;
      v10[1] = v20;
      v23 = v16 * *(p_fogMaxDistance - 1);
      p_fogMaxDistance += 6;
      ++textures;
      v10 += 4;
      v24 = v37-- == 1;
      v25 = v9;
      *(float *)&v25 = *(float *)&v9 + v23;
      v9 = v25;
    }
    while ( !v24 );
    v4 = outParameters;
    if ( v12 != 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_fog_spline.cpp", 172, ASSERT_TYPE_ASSERT, "(sumWeightQ == GFX_FOG_SPLINE_WEIGHT_ONE)", (const char *)&queryFormat, "sumWeightQ == GFX_FOG_SPLINE_WEIGHT_ONE") )
      __debugbreak();
    v26 = *(float *)&v25 * 1.442695;
    if ( v6 >= 4 )
    {
      v27 = &outParameters->csParams.params[1].v[1];
      v28 = ((v6 - 4) >> 2) + 1;
      v29 = v28;
      v7 = 4 * v28;
      do
      {
        *(v27 - 4) = v26 * *(v27 - 4);
        *v27 = v26 * *v27;
        v27[4] = v26 * v27[4];
        v27[8] = v26 * v27[8];
        v27 += 16;
        --v29;
      }
      while ( v29 );
    }
    if ( v7 < v6 )
    {
      v30 = v6 - v7;
      v31 = &outParameters->csParams.params[v7].v[1];
      do
      {
        *v31 = v26 * *v31;
        v31 += 4;
        --v30;
      }
      while ( v30 );
    }
    outParameters->csParams.blendCount = v6;
    maxDistance = fog->maxDistance;
    if ( maxDistance > 0.0 )
      v8 = 1.0 / maxDistance;
    outParameters->csParams.rcpMaxDistance = v8;
    outParameters->csParams.maxDistance = fog->maxDistance;
    outParameters->csParams.startDist = fog->startDist;
    goto LABEL_43;
  }
  v4->textures[0] = R_Texture_GetResident(s_fogSplines.fogSplineLive->textureId);
LABEL_44:
  v33 = v6;
  v34 = 8 - v6;
  v35 = &v4->textures[v33];
  do
  {
    *v35++ = R_Texture_GetResident(rgp.zero1DImage->textureId);
    --v34;
  }
  while ( v34 );
}

/*
==============
R_FogSpline_Update
==============
*/
bool R_FogSpline_Update(const GfxViewInfo *viewInfo)
{
  __int64 clientIndex; 
  GfxFogSplineBlendParameters *v3; 
  __int128 v4; 
  bool result; 
  GfxFogSplineBlendParameters outParameters; 

  clientIndex = (unsigned int)viewInfo->clientIndex;
  R_FogSpline_GetBlendParameters(&viewInfo->fog, viewInfo->clientIndex, &outParameters);
  if ( viewInfo->fog.fogSplineBlendCount <= 1u )
  {
    v3 = &s_fogSplines.blendParameters[clientIndex];
    *(__m256i *)&v3->csParams.blendCount = *(__m256i *)&outParameters.csParams.blendCount;
    *(__m256i *)v3->csParams.params[1].v = *(__m256i *)outParameters.csParams.params[1].v;
    *(__m256i *)v3->csParams.params[3].v = *(__m256i *)outParameters.csParams.params[3].v;
    *(__m256i *)v3->csParams.params[5].v = *(__m256i *)outParameters.csParams.params[5].v;
    *(__m256i *)v3->csParams.params[7].v = *(__m256i *)outParameters.csParams.params[7].v;
    *(__m256i *)&v3->textures[2] = *(__m256i *)&outParameters.textures[2];
    v4 = *(_OWORD *)&outParameters.textures[6];
    result = 0;
LABEL_6:
    *(_OWORD *)&v3->textures[6] = v4;
    return result;
  }
  if ( r_fogSplineForceUpdate->current.enabled || (result = memcmp_0(&s_fogSplines.blendParameters[clientIndex], &outParameters, 0xD0ui64) != 0) )
  {
    v3 = &s_fogSplines.blendParameters[clientIndex];
    *(__m256i *)&v3->csParams.blendCount = *(__m256i *)&outParameters.csParams.blendCount;
    *(__m256i *)v3->csParams.params[1].v = *(__m256i *)outParameters.csParams.params[1].v;
    *(__m256i *)v3->csParams.params[3].v = *(__m256i *)outParameters.csParams.params[3].v;
    *(__m256i *)v3->csParams.params[5].v = *(__m256i *)outParameters.csParams.params[5].v;
    *(__m256i *)v3->csParams.params[7].v = *(__m256i *)outParameters.csParams.params[7].v;
    *(__m256i *)&v3->textures[2] = *(__m256i *)&outParameters.textures[2];
    v4 = *(_OWORD *)&outParameters.textures[6];
    result = 1;
    goto LABEL_6;
  }
  return result;
}

