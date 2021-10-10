/*
==============
R_ReflectionProbeRelighting_WorldShutdown
==============
*/

void R_ReflectionProbeRelighting_WorldShutdown(void)
{
  ?R_ReflectionProbeRelighting_WorldShutdown@@YAXXZ();
}

/*
==============
R_ReflectionProbeRelighting_RegisterDvars
==============
*/

void R_ReflectionProbeRelighting_RegisterDvars(void)
{
  ?R_ReflectionProbeRelighting_RegisterDvars@@YAXXZ();
}

/*
==============
RB_ReflectionProbeRelighting_Update
==============
*/

void __fastcall RB_ReflectionProbeRelighting_Update(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_ReflectionProbeRelighting_Update@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_ReflectionProbeRelightingCmd
==============
*/

void __fastcall R_ReflectionProbeRelightingCmd(const void *const cmd)
{
  ?R_ReflectionProbeRelightingCmd@@YAXQEBX@Z(cmd);
}

/*
==============
R_ReflectionProbeRelighting_GetRelightableProbeVisibility
==============
*/

void __fastcall R_ReflectionProbeRelighting_GetRelightableProbeVisibility(bitarray<128> *relightableProbeVisibility)
{
  ?R_ReflectionProbeRelighting_GetRelightableProbeVisibility@@YAXAEAV?$bitarray@$0IA@@@@Z(relightableProbeVisibility);
}

/*
==============
R_ReflectionProbeRelighting_CopyCurrentRadiometricScale
==============
*/

void R_ReflectionProbeRelighting_CopyCurrentRadiometricScale(void)
{
  ?R_ReflectionProbeRelighting_CopyCurrentRadiometricScale@@YAXXZ();
}

/*
==============
R_ReflectionProbeRelighting_Startup
==============
*/

void R_ReflectionProbeRelighting_Startup(void)
{
  ?R_ReflectionProbeRelighting_Startup@@YAXXZ();
}

/*
==============
R_ReflectionProbeRelighting_Shutdown
==============
*/

void R_ReflectionProbeRelighting_Shutdown(void)
{
  ?R_ReflectionProbeRelighting_Shutdown@@YAXXZ();
}

/*
==============
R_ReflectionProbeRelighting_ShouldUpdate
==============
*/

bool __fastcall R_ReflectionProbeRelighting_ShouldUpdate(const GfxViewportFeatures *viewportFeatures)
{
  return ?R_ReflectionProbeRelighting_ShouldUpdate@@YA_NAEBUGfxViewportFeatures@@@Z(viewportFeatures);
}

/*
==============
R_ReflectionProbeRelighting_Update
==============
*/

void __fastcall R_ReflectionProbeRelighting_Update(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxImage **sunShadowImages, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxImage *spotshadowArrayImage)
{
  ?R_ReflectionProbeRelighting_Update@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@QEAPEBUGfxImage@@PEBU4@44@Z(computeState, viewInfo, data, sunShadowImages, translucentSunShadowImage, translucentSunShadowMaskImage, spotshadowArrayImage);
}

/*
==============
R_ReflectionProbeRelighting_UpdateProbeRadiometricScale
==============
*/

void __fastcall R_ReflectionProbeRelighting_UpdateProbeRadiometricScale(const GfxBackEndData *data)
{
  ?R_ReflectionProbeRelighting_UpdateProbeRadiometricScale@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_ReflectionProbeRelighting_SetProbeTransform
==============
*/

void __fastcall R_ReflectionProbeRelighting_SetProbeTransform(const unsigned int probeRelightingIndex, const vec3_t *probePosition, const vec4_t *probeRotation)
{
  ?R_ReflectionProbeRelighting_SetProbeTransform@@YAXIAEBTvec3_t@@AEBTvec4_t@@@Z(probeRelightingIndex, probePosition, probeRotation);
}

/*
==============
R_ReflectionProbeRelighting_WorldStartup
==============
*/

void R_ReflectionProbeRelighting_WorldStartup(void)
{
  ?R_ReflectionProbeRelighting_WorldStartup@@YAXXZ();
}

/*
==============
RB_ReflectionProbeRelighting_Update
==============
*/
void RB_ReflectionProbeRelighting_Update(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __int16 v3; 
  GfxImage *SunShadowmapImage; 
  bool v8; 
  R_RT_Image *p_m_image; 
  GfxImage *translucentSunShadowMaskImage; 
  const GfxImage *spotshadowArrayImage; 
  GfxImage *sunShadowImages[3]; 
  R_RT_Handle m_translucentShadowRt; 

  if ( R_UseBakedLighting() && (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x20000000) != 0 )
  {
    if ( !s_reflectionProbeRelighting.m_relightingImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 1078, ASSERT_TYPE_ASSERT, "(s_reflectionProbeRelighting.m_relightingImage != nullptr)", (const char *)&queryFormat, "s_reflectionProbeRelighting.m_relightingImage != nullptr") )
      __debugbreak();
    sunShadowImages[0] = (GfxImage *)R_GetSunShadowmapImage(viewInfo, 0);
    sunShadowImages[1] = (GfxImage *)R_GetSunShadowmapImage(viewInfo, 1u);
    SunShadowmapImage = (GfxImage *)R_GetSunShadowmapImage(viewInfo, 2u);
    v8 = (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) == 0;
    sunShadowImages[2] = SunShadowmapImage;
    if ( !v8 && rg.useTransSunShadow )
    {
      m_translucentShadowRt = (R_RT_Handle)viewInfo->sceneRtInput.m_translucentShadowRt;
      if ( v3 )
      {
        R_RT_Handle::GetSurface(&m_translucentShadowRt);
        p_m_image = &R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_image;
        goto LABEL_13;
      }
      if ( m_translucentShadowRt.m_tracking.m_allocCounter )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    p_m_image = (R_RT_Image *)rgp.zeroImage;
LABEL_13:
    translucentSunShadowMaskImage = rgp.blackImage;
    spotshadowArrayImage = R_GetSpotShadowArrayImageDraw3D();
    R_LockGfxImmediateContext();
    R_GPU_BeginTimer(GPU_TIMER_REFLECTION_PROBE_RELIGHTING);
    R_ReflectionProbeRelighting_Update(computeState, viewInfo, data, (const GfxImage **)sunShadowImages, &p_m_image->m_base, translucentSunShadowMaskImage, spotshadowArrayImage);
    R_GPU_EndTimer();
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
R_ReflectionProbeRelightingCmd
==============
*/
void R_ReflectionProbeRelightingCmd(const void *const cmd)
{
  GfxBackEndData *v2; 
  unsigned int relightingIndexToCopy; 
  const dvar_t *v4; 
  unsigned int unsignedInt; 
  unsigned int i; 

  if ( !s_reflectionProbeRelighting.m_relightingImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 996, ASSERT_TYPE_ASSERT, "(s_reflectionProbeRelighting.m_relightingImage != nullptr)", (const char *)&queryFormat, "s_reflectionProbeRelighting.m_relightingImage != nullptr") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 997, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  ++s_reflectionProbeRelighting.updateTicksElapsed;
  ++s_reflectionProbeRelighting.frameIndex;
  frontEndDataOut->reflectionProbeRelightingData.reflectionProbeRelightingIndex = -1;
  v2 = frontEndDataOut;
  relightingIndexToCopy = frontEndDataOut->reflectionProbeRelightingData.relightingIndexToCopy;
  if ( relightingIndexToCopy != -1 )
  {
    R_ReflectionProbe_InvalidateCachedImage(g_worldDraw->reflectionProbeData.probeRelightingData[relightingIndexToCopy].reflectionProbeIndex);
    v2 = frontEndDataOut;
  }
  v2->reflectionProbeRelightingData.relightingIndexToCopy = -1;
  v4 = r_reflectionProbeLightingStagesPerFrame;
  if ( !r_reflectionProbeLightingStagesPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  unsignedInt = v4->current.unsignedInt;
  for ( i = 0; i < unsignedInt; ++i )
  {
    if ( !R_ReflectionProbeRelighting_IssueRelightingStage((const GfxViewParms *)cmd) )
      break;
  }
}

/*
==============
R_ReflectionProbeRelighting_CopyCurrentRadiometricScale
==============
*/
void R_ReflectionProbeRelighting_CopyCurrentRadiometricScale(void)
{
  GfxViewInfo *v0; 
  float outPrevFrameRadiometricScale; 
  float outRadiometricScale; 

  if ( s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex != -1 && s_reflectionProbeRelighting.bufferState[0].radiometricScale == 0.0 )
  {
    v0 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
    R_Tonemap_GetRadiometricScale(frontEndDataOut, v0, &outRadiometricScale, &outPrevFrameRadiometricScale);
    _XMM0 = LODWORD(v0->input.sceneConstants.radiometricScale.v[0]);
    _XMM3 = LODWORD(v0->input.sceneConstants.radiometricScale.v[1]);
    __asm
    {
      vcmpless xmm2, xmm0, cs:__real@358637bd
      vblendvps xmm0, xmm3, xmm1, xmm2
    }
    s_reflectionProbeRelighting.bufferState[0].radiometricScale = *(float *)&_XMM0;
  }
}

/*
==============
R_ReflectionProbeRelighting_GetProbeToRelight
==============
*/
__int64 R_ReflectionProbeRelighting_GetProbeToRelight(const GfxBackEndData *data, const vec3_t *viewPosition)
{
  const dvar_t *v2; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int probeRelightingCount; 
  char v7; 
  int integer; 
  float v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  float *v13; 
  GfxReflectionProbeRelightingData *probeRelightingData; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  __int64 v19; 
  bitarray<128> relightableProbeVisibility; 

  v2 = r_reflectionProbeLightingEnabled;
  if ( !r_reflectionProbeLightingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return 0xFFFFFFFFi64;
  v4 = 0;
  v5 = -1;
  probeRelightingCount = s_reflectionProbeRelighting.probeRelightingCount;
  v7 = 1;
  integer = r_reflectionProbeLightingProbeIndexOverride->current.integer;
  v9 = FLOAT_N3_4028235e38;
  if ( integer == -1 || (v10 = 0, !s_reflectionProbeRelighting.probeRelightingCount) )
  {
LABEL_10:
    R_ReflectionProbeRelighting_GetRelightableProbeVisibility(&relightableProbeVisibility);
    if ( probeRelightingCount )
    {
      v11 = 0i64;
      v12 = 0i64;
      v13 = &s_reflectionProbeRelighting.probeRelightingState[0].reflectionProbePosition.v[2];
      do
      {
        probeRelightingData = g_worldDraw->reflectionProbeData.probeRelightingData;
        if ( !R_ReflectionProbe_IsTransientStreamingEnabled() || R_ReflectionProbe_IsRelightableReflectionProbeImageLoaded(data, probeRelightingData[v11].reflectionProbeIndex) )
        {
          if ( v4 >= 0x80 )
          {
            LODWORD(v19) = 128;
            LODWORD(v18) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, v19) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v4 & 0x1F)) & relightableProbeVisibility.array[v12 >> 5]) != 0 )
          {
            v15 = *(v13 - 1) - viewPosition->v[1];
            v16 = 1.0 / (float)((float)(fsqrt((float)((float)(v15 * v15) + (float)((float)(*(v13 - 2) - viewPosition->v[0]) * (float)(*(v13 - 2) - viewPosition->v[0]))) + (float)((float)(*v13 - viewPosition->v[2]) * (float)(*v13 - viewPosition->v[2]))) * 0.001) + 1.0);
            v17 = _mm_cvtepi32_ps((__m128i)(s_reflectionProbeRelighting.updateTicksElapsed - *((_DWORD *)v13 - 3))).m128_f32[0] * (float)(v16 * v16);
            if ( v7 || v17 > v9 )
            {
              v9 = v17;
              v5 = v4;
              v7 = 0;
            }
          }
        }
        ++v4;
        ++v12;
        ++v11;
        v13 += 10;
      }
      while ( v4 < probeRelightingCount );
    }
    return v5;
  }
  else
  {
    while ( g_worldDraw->reflectionProbeData.probeRelightingData[v10].reflectionProbeIndex != integer )
    {
      if ( ++v10 >= s_reflectionProbeRelighting.probeRelightingCount )
        goto LABEL_10;
    }
    return v10;
  }
}

/*
==============
R_ReflectionProbeRelighting_GetRelightableProbeVisibility
==============
*/
void R_ReflectionProbeRelighting_GetRelightableProbeVisibility(bitarray<128> *relightableProbeVisibility)
{
  bitarray<128> *v1; 
  unsigned __int16 probeRelightingIndex; 
  unsigned __int64 v3; 
  __int64 v4; 
  unsigned int reflectionProbeVisDataCount; 
  unsigned int *reflectionProbeVisData; 
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned __int16 v12; 
  unsigned __int64 v13; 
  unsigned int sceneReflectionProbeInstanceCount; 
  unsigned int i; 
  unsigned __int16 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  *(_QWORD *)relightableProbeVisibility->array = 0i64;
  *(_QWORD *)&relightableProbeVisibility->array[2] = 0i64;
  v1 = relightableProbeVisibility;
  if ( g_worldDraw->reflectionProbeData.reflectionProbeInstanceCount )
  {
    probeRelightingIndex = g_worldDraw->reflectionProbeData.reflectionProbes[g_worldDraw->reflectionProbeData.reflectionProbeInstances->probeImageIndex].probeRelightingIndex;
    if ( probeRelightingIndex != 0xFFFF )
    {
      v3 = probeRelightingIndex;
      if ( probeRelightingIndex >= 0x80u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", probeRelightingIndex, 128) )
        __debugbreak();
      v1->array[v3 >> 5] |= 0x80000000 >> (v3 & 0x1F);
    }
  }
  LODWORD(v4) = 0;
  reflectionProbeVisDataCount = rgp.world->dpvs.reflectionProbeVisDataCount;
  reflectionProbeVisData = rgp.world->dpvs.reflectionProbeVisData;
  if ( reflectionProbeVisDataCount )
    v7 = *reflectionProbeVisData;
  else
    v7 = 0;
  while ( 1 )
  {
    v8 = v7;
    if ( !v7 )
      break;
LABEL_13:
    v9 = __lzcnt(v8);
    v10 = v9 + 32 * (_DWORD)v4;
    if ( v9 >= 0x20 )
    {
      LODWORD(v19) = 32;
      LODWORD(v18) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v11 = 0x80000000 >> v9;
    if ( ((0x80000000 >> v9) & v8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
      __debugbreak();
    v1 = relightableProbeVisibility;
    v7 = v8 & ~v11;
    v12 = g_worldDraw->reflectionProbeData.reflectionProbes[g_worldDraw->reflectionProbeData.reflectionProbeInstances[v10].probeImageIndex].probeRelightingIndex;
    if ( v12 != 0xFFFF )
    {
      v13 = v12;
      if ( v12 >= 0x80u )
      {
        LODWORD(v21) = 128;
        LODWORD(v20) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v20, v21) )
          __debugbreak();
      }
      v1 = relightableProbeVisibility;
      relightableProbeVisibility->array[v13 >> 5] |= 0x80000000 >> (v13 & 0x1F);
    }
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= reflectionProbeVisDataCount )
      break;
    v8 = reflectionProbeVisData[v4];
    if ( v8 )
      goto LABEL_13;
  }
  sceneReflectionProbeInstanceCount = scene.sceneReflectionProbeInstanceCount;
  for ( i = 0; i < sceneReflectionProbeInstanceCount; ++i )
  {
    v16 = g_worldDraw->reflectionProbeData.reflectionProbes[scene.sceneReflectionProbeInstances[i].reflectionProbeInstance.probeImageIndex].probeRelightingIndex;
    if ( v16 != 0xFFFF )
    {
      v17 = v16;
      if ( v16 >= 0x80u )
      {
        LODWORD(v21) = 128;
        LODWORD(v20) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v20, v21) )
          __debugbreak();
      }
      v1->array[v17 >> 5] |= 0x80000000 >> (v17 & 0x1F);
      sceneReflectionProbeInstanceCount = scene.sceneReflectionProbeInstanceCount;
    }
  }
}

/*
==============
R_ReflectionProbeRelighting_IssueRelightingStage
==============
*/
bool R_ReflectionProbeRelighting_IssueRelightingStage(const GfxViewParms *viewParms)
{
  const GfxImage *ProbeOctahedronImageArray; 
  GfxPixelFormat format; 
  GfxBackEndData *v4; 
  __int64 v5; 
  unsigned int currentProbeRelightingIndex; 
  bool result; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int frameIndex; 
  unsigned int labelIndex; 
  const GfxLabelSyncInfo *waitLabelInfo; 
  GfxReflectionProbeFilteringMethod v13; 
  unsigned int ProbeToRelight; 
  __int64 v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  const dvar_t *v19; 
  float value; 
  int Int_Internal; 
  int v22; 
  int v23; 
  int v24; 
  unsigned __int64 *gpuLabelRelightingComplete; 
  unsigned int v26; 

  if ( rg.useRProbeOctahedron )
    ProbeOctahedronImageArray = R_ReflectionProbe_GetProbeOctahedronImageArray();
  else
    ProbeOctahedronImageArray = R_ReflectionProbe_GetProbeImageArray();
  format = ProbeOctahedronImageArray->format;
  v4 = frontEndDataOut;
  v5 = 1i64;
  if ( format == GFX_PF_BC6H )
    v5 = 2i64;
  currentProbeRelightingIndex = s_reflectionProbeRelighting.bufferState[v5].currentProbeRelightingIndex;
  if ( currentProbeRelightingIndex != -1 )
  {
    frontEndDataOut->reflectionProbeRelightingData.relightingIndexToCopy = currentProbeRelightingIndex;
    v4->reflectionProbeRelightingData.relitReflectionProbeRadiometricScale = s_reflectionProbeRelighting.bufferState[v5].radiometricScale;
    result = 1;
    s_reflectionProbeRelighting.bufferState[v5].currentProbeRelightingIndex = -1;
    *(_QWORD *)&s_reflectionProbeRelighting.bufferState[v5].labelIndex = 0i64;
    return result;
  }
  v8 = s_reflectionProbeRelighting.bufferState[1].currentProbeRelightingIndex;
  if ( s_reflectionProbeRelighting.bufferState[1].currentProbeRelightingIndex != -1 )
  {
    if ( format != GFX_PF_BC6H || R_ReflectionProbeFiltering_CompressFilteredImage(NULL, 0, 1) )
    {
      s_reflectionProbeRelighting.bufferState[2].radiometricScale = s_reflectionProbeRelighting.bufferState[1].radiometricScale;
      s_reflectionProbeRelighting.bufferState[2].currentProbeRelightingIndex = v8;
      s_reflectionProbeRelighting.bufferState[2].labelIndex = s_reflectionProbeRelighting.bufferState[1].labelIndex;
      result = 1;
      s_reflectionProbeRelighting.bufferState[1].radiometricScale = 0.0;
      s_reflectionProbeRelighting.bufferState[1].currentProbeRelightingIndex = -1;
      s_reflectionProbeRelighting.bufferState[1].labelIndex = 0;
      return result;
    }
    return 1;
  }
  v9 = s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex;
  if ( s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex != -1 )
  {
    frameIndex = s_reflectionProbeRelighting.frameIndex;
    labelIndex = s_reflectionProbeRelighting.bufferState[0].labelIndex;
    waitLabelInfo = NULL;
    if ( s_reflectionProbeRelighting.frameIndex <= s_reflectionProbeRelighting.bufferState[0].labelIndex )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 861, ASSERT_TYPE_ASSERT, "( s_reflectionProbeRelighting.frameIndex ) > ( s_reflectionProbeRelighting.bufferState[REFLECTION_PROBE_RELIGHTING_BUFFER_RELIGHT].labelIndex )", "%s > %s\n\t%u, %u", "s_reflectionProbeRelighting.frameIndex", "s_reflectionProbeRelighting.bufferState[REFLECTION_PROBE_RELIGHTING_BUFFER_RELIGHT].labelIndex", s_reflectionProbeRelighting.frameIndex, s_reflectionProbeRelighting.bufferState[0].labelIndex) )
        __debugbreak();
      frameIndex = s_reflectionProbeRelighting.frameIndex;
      labelIndex = s_reflectionProbeRelighting.bufferState[0].labelIndex;
    }
    if ( labelIndex + 1 == frameIndex )
    {
      waitLabelInfo = (const GfxLabelSyncInfo *)&gpuLabelRelightingComplete;
      gpuLabelRelightingComplete = s_reflectionProbeRelighting.gpuLabelRelightingComplete;
      v26 = labelIndex;
    }
    v13 = BRUTE_FORCE;
    if ( v4->reflectionProbeRelightingData.debugMode )
      v13 = BOX;
    if ( R_ReflectionProbeFiltering_FilterImage(s_reflectionProbeRelighting.m_relightingImage, v13, 0, 1, 0x10u, g_worldDraw->reflectionProbeData.probeRelightingData[v9].reflectionProbeIndex, waitLabelInfo) )
    {
      s_reflectionProbeRelighting.bufferState[1].radiometricScale = s_reflectionProbeRelighting.bufferState[0].radiometricScale;
      s_reflectionProbeRelighting.bufferState[0].radiometricScale = 0.0;
      s_reflectionProbeRelighting.bufferState[1].currentProbeRelightingIndex = v9;
      s_reflectionProbeRelighting.bufferState[1].labelIndex = s_reflectionProbeRelighting.bufferState[0].labelIndex;
      s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex = -1;
      s_reflectionProbeRelighting.bufferState[0].labelIndex = 0;
    }
    return 1;
  }
  ProbeToRelight = R_ReflectionProbeRelighting_GetProbeToRelight(frontEndDataOut, &viewParms->camera.origin);
  v15 = ProbeToRelight;
  if ( ProbeToRelight != -1 )
  {
    if ( r_reflectionProbeShowRelitProbe && r_reflectionProbeShowRelitProbe->current.enabled )
      R_AddDebugStar(&frontEndDataOut->debugGlobals, &g_worldDraw->reflectionProbeData.reflectionProbes[g_worldDraw->reflectionProbeData.probeRelightingData[ProbeToRelight].reflectionProbeIndex].origin, 64.0, &colorYellowHeat);
    v4->reflectionProbeRelightingData.reflectionProbeRelightingIndex = v15;
    v16 = 0;
    v4->reflectionProbeRelightingData.frameIndex = s_reflectionProbeRelighting.frameIndex;
    s_reflectionProbeRelighting.probeRelightingState[v15].lastUpdateTick = s_reflectionProbeRelighting.updateTicksElapsed;
    v4->reflectionProbeRelightingData.reflectionProbePosition.v[0] = s_reflectionProbeRelighting.probeRelightingState[v15].reflectionProbePosition.v[0];
    v4->reflectionProbeRelightingData.reflectionProbePosition.v[1] = s_reflectionProbeRelighting.probeRelightingState[v15].reflectionProbePosition.v[1];
    v4->reflectionProbeRelightingData.reflectionProbePosition.v[2] = s_reflectionProbeRelighting.probeRelightingState[v15].reflectionProbePosition.v[2];
    v4->reflectionProbeRelightingData.reflectionProbeRotation.v[0] = s_reflectionProbeRelighting.probeRelightingState[v15].reflectionProbeRotation.v[0];
    v4->reflectionProbeRelightingData.reflectionProbeRotation.v[1] = s_reflectionProbeRelighting.probeRelightingState[v15].reflectionProbeRotation.v[1];
    v4->reflectionProbeRelightingData.reflectionProbeRotation.v[2] = s_reflectionProbeRelighting.probeRelightingState[v15].reflectionProbeRotation.v[2];
    v4->reflectionProbeRelightingData.reflectionProbeRotation.v[3] = s_reflectionProbeRelighting.probeRelightingState[v15].reflectionProbeRotation.v[3];
    v4->reflectionProbeRelightingData.sunIntensityScale = s_reflectionProbeRelighting.probeRelightingState[v15].sunIntensityScale;
    v17 = *((_DWORD *)&v4->reflectionProbeRelightingData + 12) & 0xFFFFFFFE | s_reflectionProbeRelighting.probeRelightingState[v15].disableSunShadowmap;
    *((_DWORD *)&v4->reflectionProbeRelightingData + 12) = v17;
    v18 = v17 & 0xFFFFFFFD | (s_reflectionProbeRelighting.probeRelightingState[v15].disableSunGBufferMask ? 2 : 0);
    *((_DWORD *)&v4->reflectionProbeRelightingData + 12) = v18;
    *((_DWORD *)&v4->reflectionProbeRelightingData + 12) = v18 & 0xFFFFFFFB | (s_reflectionProbeRelighting.probeRelightingState[v15].disableOtherShadowmap ? 4 : 0);
    v4->reflectionProbeRelightingData.debugMode = Dvar_GetInt_Internal(r_reflectionProbeLightingDebugMode);
    v4->reflectionProbeRelightingData.debugTimestamp = s_reflectionProbeRelighting.updateTicksElapsed;
    v19 = r_reflectionProbeLightingSunOverride;
    if ( !r_reflectionProbeLightingSunOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    value = v19->current.value;
    if ( value >= 0.0 )
      v4->reflectionProbeRelightingData.sunIntensityScale = value;
    Int_Internal = Dvar_GetInt_Internal(r_reflectionProbeLightingSunShadowmapOverride);
    if ( Int_Internal >= 0 )
    {
      *((_DWORD *)&v4->reflectionProbeRelightingData + 12) &= ~1u;
      *((_DWORD *)&v4->reflectionProbeRelightingData + 12) |= Int_Internal != 1;
    }
    v22 = Dvar_GetInt_Internal(r_reflectionProbeLightingSunMaskOverride);
    if ( v22 >= 0 )
    {
      *((_DWORD *)&v4->reflectionProbeRelightingData + 12) &= ~2u;
      v23 = 0;
      if ( v22 != 1 )
        v23 = 2;
      *((_DWORD *)&v4->reflectionProbeRelightingData + 12) |= v23;
    }
    v24 = Dvar_GetInt_Internal(r_reflectionProbeLightingOtherShadowmapOverride);
    if ( v24 >= 0 )
    {
      *((_DWORD *)&v4->reflectionProbeRelightingData + 12) &= ~4u;
      if ( v24 != 1 )
        v16 = 4;
      *((_DWORD *)&v4->reflectionProbeRelightingData + 12) |= v16;
    }
    s_reflectionProbeRelighting.bufferState[0].radiometricScale = 0.0;
    s_reflectionProbeRelighting.bufferState[0].labelIndex = s_reflectionProbeRelighting.frameIndex;
    s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex = v15;
  }
  return 0;
}

/*
==============
R_ReflectionProbeRelighting_RegisterDvars
==============
*/
void R_ReflectionProbeRelighting_RegisterDvars(void)
{
  r_reflectionProbeLightingSunOverride = Dvar_RegisterFloat("LKPMNRSKRT", -1.0, -1.0, 1.0, 0, "Reflection probe relighting sun intensity override");
  r_reflectionProbeLightingSunShadowmapOverride = Dvar_RegisterInt("LLSQQOKNLN", -1, -1, 1, 0, "Reflection probe relighting sun shadowmap override");
  r_reflectionProbeLightingSunMaskOverride = Dvar_RegisterInt("LKNMLKRTRL", -1, -1, 1, 0, "Reflection probe relighting sun gbuffer mask override");
  r_reflectionProbeLightingOtherShadowmapOverride = Dvar_RegisterInt("NKQNMMMNLR", -1, -1, 1, 0, "Reflection probe relighting other (not sun) shadowmap override");
  r_reflectionProbeLightingDebugMode = Dvar_RegisterEnum("NSMOTOSQRN", s_probeRelightingDebugModeNames, 0, 0, "Reflection probe relighting shader debug mode");
  r_reflectionProbeLightingProbeIndexOverride = Dvar_RegisterInt("PTSTSNQR", -1, -1, 128, 0, "Reflection probe index for relighting override");
  r_reflectionProbeShowRelitProbe = Dvar_RegisterBool("LNOQKTRPTK", 0, 0, "Show the probe getting relit this frame");
  r_reflectionProbeLightingEnabled = Dvar_RegisterBool("TSSONTORK", 1, 0x40u, "Reflection probe relighting enable");
  r_reflectionProbeLightingStagesPerFrame = Dvar_RegisterInt("NTSMKLPMNK", 4, 1, 4, 0, "Reflection probe relighting update stages per frame");
}

/*
==============
R_ReflectionProbeRelighting_RelightReflectionProbe
==============
*/
void R_ReflectionProbeRelighting_RelightReflectionProbe(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxImage **sunShadowImages, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxImage *spotShadowArrayImage)
{
  GfxReflectionProbeRelightingData *v10; 
  __int64 gBufferNormalImageIndex; 
  __int64 gBufferSecondaryDiffuseImageIndex; 
  GfxTexture *v13; 
  ComputeShader *reflectionProbeRelightingDebugShader; 
  GfxTexture *v15; 
  int v16; 
  int v17; 
  GfxTexture *textures; 
  GfxTexture *Resident; 
  GfxTexture *v20; 
  GfxTexture *v21[3]; 

  if ( !g_worldDraw->reflectionProbeData.reflectionProbeGBufferImageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 227, ASSERT_TYPE_ASSERT, "(g_worldDraw->reflectionProbeData.reflectionProbeGBufferImageCount > 0)", (const char *)&queryFormat, "g_worldDraw->reflectionProbeData.reflectionProbeGBufferImageCount > 0") )
    __debugbreak();
  if ( data->reflectionProbeRelightingData.reflectionProbeRelightingIndex == -1 )
  {
    v17 = -1;
    v16 = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 228, ASSERT_TYPE_ASSERT, "( relightingBackEndData->reflectionProbeRelightingIndex ) != ( 0xffffffff )", "%s != %s\n\t%u, %u", "relightingBackEndData->reflectionProbeRelightingIndex", "REFLECTION_PROBE_INVALID_RELIGHTING_INDEX", v16, v17) )
      __debugbreak();
  }
  v10 = &g_worldDraw->reflectionProbeData.probeRelightingData[data->reflectionProbeRelightingData.reflectionProbeRelightingIndex];
  gBufferNormalImageIndex = v10->gBufferNormalImageIndex;
  gBufferSecondaryDiffuseImageIndex = v10->gBufferSecondaryDiffuseImageIndex;
  Resident = (GfxTexture *)R_Texture_GetResident(g_worldDraw->reflectionProbeData.reflectionProbeGBufferImages[v10->gBufferAlbedoImageIndex]->textureId);
  v20 = (GfxTexture *)R_Texture_GetResident(g_worldDraw->reflectionProbeData.reflectionProbeGBufferImages[gBufferNormalImageIndex]->textureId);
  v13 = (GfxTexture *)R_Texture_GetResident(g_worldDraw->reflectionProbeData.reflectionProbeGBufferImages[gBufferSecondaryDiffuseImageIndex]->textureId);
  if ( data->viewInfo[data->viewInfoIndex].input.data != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 240, ASSERT_TYPE_ASSERT, "(data->viewInfo[data->viewInfoIndex].input.data == data)", (const char *)&queryFormat, "data->viewInfo[data->viewInfoIndex].input.data == data") )
    __debugbreak();
  R_ProfBeginNamedEvent(state, "RelightReflectionProbe");
  reflectionProbeRelightingDebugShader = rgp.reflectionProbeRelightingDebugShader;
  if ( !data->reflectionProbeRelightingData.debugMode )
    reflectionProbeRelightingDebugShader = rgp.reflectionProbeRelightingShader;
  R_SetComputeShader(state, reflectionProbeRelightingDebugShader);
  v15 = (GfxTexture *)R_Texture_GetResident(s_reflectionProbeRelighting.m_relightingImage->textureId);
  R_HW_AddResourceTransition(state, v15, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  textures = v15;
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&textures);
  v21[0] = Resident;
  v21[1] = v20;
  v21[2] = v13;
  R_SetComputeTextures(state, 2, 3, (const GfxTexture *const *)v21);
  R_ReflectionProbeRelighting_RelightReflectionProbe_BindCommonInput(state, data, sunShadowImages, translucentSunShadowImage, translucentSunShadowMaskImage, spotShadowArrayImage);
  R_Dispatch(state, 0x10u, 0x10u, 6u);
  R_HW_AddResourceTransition(state, v15, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
}

/*
==============
R_ReflectionProbeRelighting_RelightReflectionProbe_BindCommonInput
==============
*/
void R_ReflectionProbeRelighting_RelightReflectionProbe_BindCommonInput(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxImage **sunShadowImages, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxImage *spotShadowArrayImage)
{
  GfxViewInfo *v10; 
  int v11; 
  float v13; 
  GfxImage *iesLookupTexture; 
  GfxImage *blackImage; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  __int64 voxelTreeZoneIndex; 
  GfxTexture *Resident; 
  ID3D12Resource *buffers; 
  GfxTexture *textures; 
  int dataa[4]; 
  vec4_t reflectionProbeRotation; 
  float sunIntensityScale; 
  int v33; 
  int v34; 
  int v35; 
  unsigned int debugMode; 
  unsigned int debugTimestamp; 
  int v38; 

  textures = (GfxTexture *)translucentSunShadowMaskImage;
  Resident = (GfxTexture *)spotShadowArrayImage;
  v10 = &data->viewInfo[data->viewInfoIndex];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 158, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo", Resident) )
    __debugbreak();
  if ( v10->input.data != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 160, ASSERT_TYPE_ASSERT, "(viewInfo->input.data == data)", (const char *)&queryFormat, "viewInfo->input.data == data") )
    __debugbreak();
  v11 = *((_DWORD *)&data->reflectionProbeRelightingData + 12);
  _XMM3 = LODWORD(FLOAT_1_0);
  v13 = data->reflectionProbeRelightingData.reflectionProbePosition.v[1];
  iesLookupTexture = g_worldDraw->iesLookupTexture;
  blackImage = rgp.blackImage;
  if ( (*((_BYTE *)&v10->viewportFeatures + 44) & 4) != 0 )
    blackImage = rgp.cloudNoiseImage;
  dataa[0] = LODWORD(data->reflectionProbeRelightingData.reflectionProbePosition.v[0]);
  dataa[2] = LODWORD(data->reflectionProbeRelightingData.reflectionProbePosition.v[2]);
  *(float *)&dataa[1] = v13;
  _XMM0 = v11 & 1;
  reflectionProbeRotation = data->reflectionProbeRelightingData.reflectionProbeRotation;
  sunIntensityScale = data->reflectionProbeRelightingData.sunIntensityScale;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  v33 = _XMM0;
  _XMM0 = v11 & 4;
  globalSceneConstantBuffer = data->globalSceneConstantBuffer;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  v35 = _XMM0;
  _XMM0 = v11 & 2;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  v34 = _XMM0;
  buffers = globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(state, 7, 1, &buffers);
  debugMode = data->reflectionProbeRelightingData.debugMode;
  debugTimestamp = data->reflectionProbeRelightingData.debugTimestamp;
  v38 = 0;
  R_UploadAndSetComputeConstants(state, 0, dataa, 0x40u, NULL);
  buffers = (ID3D12Resource *)R_Texture_GetResident((*sunShadowImages)->textureId);
  R_SetComputeTextures(state, 5, 1, (const GfxTexture *const *)&buffers);
  buffers = (ID3D12Resource *)R_Texture_GetResident(sunShadowImages[1]->textureId);
  R_SetComputeTextures(state, 6, 1, (const GfxTexture *const *)&buffers);
  buffers = (ID3D12Resource *)R_Texture_GetResident(sunShadowImages[2]->textureId);
  R_SetComputeTextures(state, 7, 1, (const GfxTexture *const *)&buffers);
  buffers = (ID3D12Resource *)R_Texture_GetResident(blackImage->textureId);
  R_SetComputeTextures(state, 8, 1, (const GfxTexture *const *)&buffers);
  buffers = (ID3D12Resource *)R_Texture_GetResident(translucentSunShadowImage->textureId);
  R_SetComputeTextures(state, 10, 1, (const GfxTexture *const *)&buffers);
  textures = (GfxTexture *)R_Texture_GetResident((GfxTextureId)textures->shaderView.view);
  R_SetComputeTextures(state, 11, 1, (const GfxTexture *const *)&textures);
  Resident = (GfxTexture *)R_Texture_GetResident((GfxTextureId)Resident->shaderView.view);
  R_SetComputeTextures(state, 12, 1, (const GfxTexture *const *)&Resident);
  Resident = (GfxTexture *)R_Texture_GetResident(iesLookupTexture->textureId);
  R_SetComputeTextures(state, 13, 1, (const GfxTexture *const *)&Resident);
  voxelTreeZoneIndex = v10->input.voxelTreeZoneIndex;
  Resident = (GfxTexture *)deviceGlobals.voxelTreeHeaderConstantBuffer[voxelTreeZoneIndex].buffer;
  R_SetComputeConstantBuffers(state, 1, 1, (ID3D12Resource *const *const)&Resident);
  Resident = (GfxTexture *)deviceGlobals.voxelTreeHeaderConstantBuffer[(unsigned int)voxelTreeZoneIndex].buffer;
  R_SetComputeConstantBuffers(state, 1, 1, (ID3D12Resource *const *const)&Resident);
  Resident = (GfxTexture *)&R_CompressedSunShadow_GetBuffer()->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&Resident);
  Resident = (GfxTexture *)&v10->input.data->globalLightConstantBuffer->view;
  R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&Resident);
  Resident = (GfxTexture *)&v10->input.data->globalShadowConstantBuffer->view;
  R_SetComputeViews(state, 20, 1, (const GfxShaderBufferView *const *)&Resident);
  Resident = (GfxTexture *)&deviceGlobals.voxelTopDownViewNodeStructuredBuffer[voxelTreeZoneIndex].view;
  R_SetComputeViews(state, 21, 1, (const GfxShaderBufferView *const *)&Resident);
  Resident = (GfxTexture *)&deviceGlobals.voxelInternalNodeStructuredBuffer[voxelTreeZoneIndex].view;
  R_SetComputeViews(state, 22, 1, (const GfxShaderBufferView *const *)&Resident);
  Resident = (GfxTexture *)&deviceGlobals.voxelLeafNodeDataBuffer[voxelTreeZoneIndex].view;
  R_SetComputeViews(state, 23, 1, (const GfxShaderBufferView *const *)&Resident);
  Resident = (GfxTexture *)&deviceGlobals.voxelLightListDataBuffer[voxelTreeZoneIndex].view;
  R_SetComputeViews(state, 24, 1, (const GfxShaderBufferView *const *)&Resident);
  Resident = (GfxTexture *)(&deviceGlobals.voxelInternalNodeDynamicLightList[0][0].view + 4 * voxelTreeZoneIndex + 2 * v10->input.data->dynamicLightListBufferIndex);
  R_SetComputeViews(state, 25, 1, (const GfxShaderBufferView *const *)&Resident);
}

/*
==============
R_ReflectionProbeRelighting_RelightReflectionProbe_Octahedron
==============
*/
void R_ReflectionProbeRelighting_RelightReflectionProbe_Octahedron(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxImage **sunShadowImages, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxImage *spotShadowArrayImage)
{
  GfxReflectionProbeRelightingData *v9; 
  __int64 gBufferNormalImageIndex; 
  __int64 gBufferSecondaryDiffuseImageIndex; 
  GfxTexture *v12; 
  GfxTexture *v13; 
  GfxTexture *v14; 
  GfxTexture *Resident; 
  GfxTexture *v16; 
  int v17; 
  int v18; 
  GfxImage *translucentSunShadowImagea; 
  GfxTexture *textures; 
  GfxImage *v21; 
  GfxImage *v22; 
  GfxTexture *v23[3]; 

  v22 = (GfxImage *)translucentSunShadowMaskImage;
  v21 = (GfxImage *)spotShadowArrayImage;
  translucentSunShadowImagea = (GfxImage *)translucentSunShadowImage;
  if ( !g_worldDraw->reflectionProbeData.reflectionProbeGBufferImageCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 298, ASSERT_TYPE_ASSERT, "(g_worldDraw->reflectionProbeData.reflectionProbeGBufferImageCount > 0)", (const char *)&queryFormat, "g_worldDraw->reflectionProbeData.reflectionProbeGBufferImageCount > 0") )
    __debugbreak();
  if ( data->reflectionProbeRelightingData.reflectionProbeRelightingIndex == -1 )
  {
    v18 = -1;
    v17 = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 299, ASSERT_TYPE_ASSERT, "( relightingBackEndData->reflectionProbeRelightingIndex ) != ( 0xffffffff )", "%s != %s\n\t%u, %u", "relightingBackEndData->reflectionProbeRelightingIndex", "REFLECTION_PROBE_INVALID_RELIGHTING_INDEX", v17, v18) )
      __debugbreak();
  }
  v9 = &g_worldDraw->reflectionProbeData.probeRelightingData[data->reflectionProbeRelightingData.reflectionProbeRelightingIndex];
  gBufferNormalImageIndex = v9->gBufferNormalImageIndex;
  gBufferSecondaryDiffuseImageIndex = v9->gBufferSecondaryDiffuseImageIndex;
  v12 = (GfxTexture *)R_Texture_Get(data, g_worldDraw->reflectionProbeData.reflectionProbeGBufferImages_octahedron[v9->gBufferAlbedoImageIndex]->textureId);
  v13 = (GfxTexture *)R_Texture_Get(data, g_worldDraw->reflectionProbeData.reflectionProbeGBufferImages_octahedron[gBufferNormalImageIndex]->textureId);
  v14 = (GfxTexture *)R_Texture_Get(data, g_worldDraw->reflectionProbeData.reflectionProbeGBufferImages_octahedron[gBufferSecondaryDiffuseImageIndex]->textureId);
  Resident = (GfxTexture *)R_Texture_GetResident(s_reflectionProbeRelighting.m_relightingImage->textureId);
  v16 = (GfxTexture *)R_Texture_GetResident(s_reflectionProbeRelighting.m_relightingImageOctahedron->textureId);
  R_ProfBeginNamedEvent(state, "RelightReflectionProbe");
  R_SetComputeShader(state, rgp.reflectionProbeRelightingShaderOctahedron);
  R_HW_AddResourceTransition(state, v16, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  textures = v16;
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&textures);
  v23[0] = v12;
  v23[1] = v13;
  v23[2] = v14;
  R_SetComputeTextures(state, 2, 3, (const GfxTexture *const *)v23);
  R_ReflectionProbeRelighting_RelightReflectionProbe_BindCommonInput(state, data, sunShadowImages, translucentSunShadowImagea, v22, v21);
  R_Dispatch(state, 0x20u, 0x20u, 1u);
  R_HW_AddResourceTransition(state, v16, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
  R_ProfBeginNamedEvent(state, "Relit octahedron to cube");
  R_SetComputeShader(state, rgp.reflectionProbeRelightingShaderOctahedronToCube);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  translucentSunShadowImagea = (GfxImage *)Resident;
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&translucentSunShadowImagea);
  translucentSunShadowImagea = (GfxImage *)v16;
  R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&translucentSunShadowImagea);
  R_Dispatch(state, 0x10u, 0x10u, 6u);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
}

/*
==============
R_ReflectionProbeRelighting_SetProbeTransform
==============
*/
void R_ReflectionProbeRelighting_SetProbeTransform(const unsigned int probeRelightingIndex, const vec3_t *probePosition, const vec4_t *probeRotation)
{
  __int64 v5; 
  __int64 v6; 

  v5 = probeRelightingIndex;
  if ( probeRelightingIndex >= s_reflectionProbeRelighting.probeRelightingCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 758, ASSERT_TYPE_ASSERT, "(probeRelightingIndex < s_reflectionProbeRelighting.probeRelightingCount)", (const char *)&queryFormat, "probeRelightingIndex < s_reflectionProbeRelighting.probeRelightingCount") )
    __debugbreak();
  v6 = v5;
  s_reflectionProbeRelighting.probeRelightingState[v6].reflectionProbePosition.v[0] = probePosition->v[0];
  s_reflectionProbeRelighting.probeRelightingState[v6].reflectionProbePosition.v[1] = probePosition->v[1];
  s_reflectionProbeRelighting.probeRelightingState[v6].reflectionProbePosition.v[2] = probePosition->v[2];
  s_reflectionProbeRelighting.probeRelightingState[v6].reflectionProbeRotation.v[0] = probeRotation->v[0];
  s_reflectionProbeRelighting.probeRelightingState[v6].reflectionProbeRotation.v[1] = probeRotation->v[1];
  s_reflectionProbeRelighting.probeRelightingState[v6].reflectionProbeRotation.v[2] = probeRotation->v[2];
  s_reflectionProbeRelighting.probeRelightingState[v6].reflectionProbeRotation.v[3] = probeRotation->v[3];
}

/*
==============
R_ReflectionProbeRelighting_ShouldUpdate
==============
*/
bool R_ReflectionProbeRelighting_ShouldUpdate(const GfxViewportFeatures *viewportFeatures)
{
  return R_UseBakedLighting() && (*((_DWORD *)viewportFeatures + 10) & 0x20000000) != 0;
}

/*
==============
R_ReflectionProbeRelighting_Shutdown
==============
*/
void R_ReflectionProbeRelighting_Shutdown(void)
{
  if ( !s_reflectionProbeRelighting.m_relightingImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 560, ASSERT_TYPE_ASSERT, "(s_reflectionProbeRelighting.m_relightingImage)", (const char *)&queryFormat, "s_reflectionProbeRelighting.m_relightingImage") )
    __debugbreak();
  Image_Release(s_reflectionProbeRelighting.m_relightingImage);
  s_reflectionProbeRelighting.m_relightingImage = NULL;
  Image_Release(s_reflectionProbeRelighting.m_relightingImageOctahedron);
  s_reflectionProbeRelighting.m_relightingImageOctahedron = NULL;
}

/*
==============
R_ReflectionProbeRelighting_Startup
==============
*/
void R_ReflectionProbeRelighting_Startup(void)
{
  GfxImage *v2; 
  GfxImage *v4; 
  __m256i v5; 
  __m256i v6; 
  GfxBufferCreationContext v7; 
  Image_SetupParams params; 

  s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex = -1;
  _XMM0 = 0i64;
  s_reflectionProbeRelighting.updateTicksElapsed = 0;
  s_reflectionProbeRelighting.bufferState[0].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[1].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[0].radiometricScale = 0.0;
  s_reflectionProbeRelighting.bufferState[1].radiometricScale = 0.0;
  s_reflectionProbeRelighting.bufferState[2].radiometricScale = 0.0;
  s_reflectionProbeRelighting.bufferState[2].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[1].currentProbeRelightingIndex = -1;
  s_reflectionProbeRelighting.bufferState[2].currentProbeRelightingIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v6.m256i_u64[1] = _XMM0;
  v5.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v5.m256i_i64[1] + 4) = 6i64;
  v6.m256i_i64[0] = 0i64;
  v2 = Image_AllocProg(IMAGE_PROG_REFLECTION_PROBE_RELIGHTING, IMG_CATEGORY_RAW, TS_FUNCTION);
  v6.m256i_i32[6] = -1;
  v5.m256i_i64[0] = 0x8000000080i64;
  v5.m256i_i32[5] = 8519682;
  v5.m256i_i32[6] = 32;
  *(__m256i *)&params.width = v5;
  *(__m256i *)&params.customAllocFunc = v6;
  Image_Setup(v2, &params);
  s_reflectionProbeRelighting.m_relightingImage = v2;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v6.m256i_u64[1] = _XMM0;
  v5.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v5.m256i_i64[1] + 4) = 1i64;
  v6.m256i_i64[0] = 0i64;
  v4 = Image_AllocProg(IMAGE_PROG_REFLECTION_PROBE_RELIGHTING_OCTAHEDRON, IMG_CATEGORY_RAW, TS_FUNCTION);
  v6.m256i_i32[6] = -1;
  v5.m256i_i64[0] = 0x10000000100i64;
  v5.m256i_i32[5] = 8519682;
  v5.m256i_i32[6] = 32;
  *(__m256i *)&params.width = v5;
  *(__m256i *)&params.customAllocFunc = v6;
  Image_Setup(v4, &params);
  s_reflectionProbeRelighting.m_relightingImageOctahedron = v4;
  v7.zoneName = (char *)&queryFormat.fmt + 3;
  v7.objectName = "Relighting sync data";
  s_reflectionProbeRelighting.gpuLabelRelightingComplete = (unsigned __int64 *)R_AllocGfxBufferMemory(8u, &v7);
  PIXSetDebugFenceName(s_reflectionProbeRelighting.gpuLabelRelightingComplete, "Probe Relight");
  *(_QWORD *)&s_reflectionProbeRelighting.frameIndex = 0i64;
  s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex = -1;
  s_reflectionProbeRelighting.bufferState[0].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[1].currentProbeRelightingIndex = -1;
  s_reflectionProbeRelighting.bufferState[1].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[2].currentProbeRelightingIndex = -1;
  s_reflectionProbeRelighting.bufferState[2].labelIndex = 0;
  s_reflectionProbeRelighting.probeRelightingCount = 0;
  R_GPULabel_SetCPU(s_reflectionProbeRelighting.gpuLabelRelightingComplete, 0);
}

/*
==============
R_ReflectionProbeRelighting_Update
==============
*/
void R_ReflectionProbeRelighting_Update(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxImage **sunShadowImages, const GfxImage *translucentSunShadowImage, const GfxImage *translucentSunShadowMaskImage, const GfxImage *spotshadowArrayImage)
{
  unsigned int relightingIndexToCopy; 
  const GfxImage **v8; 
  unsigned int v11; 
  unsigned int reflectionProbeIndex; 
  unsigned int v13; 
  GfxImage *ProbeOctahedronImageArray; 
  GfxPixelFormat format; 
  const GfxImage *FilteredImage; 
  GfxImage *v17; 
  const GfxImage *v18; 
  const GfxTexture *Resident; 
  const GfxTexture *v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  GfxDevice *device; 
  __int64 v25; 
  GfxImage *outProbeImage; 
  __int64 v27; 
  int v28; 
  int v29; 
  ID3D12Resource *basemap; 
  int v31; 
  int v32; 
  unsigned int dstProbeIndex; 

  relightingIndexToCopy = data->reflectionProbeRelightingData.relightingIndexToCopy;
  v8 = sunShadowImages;
  if ( relightingIndexToCopy != -1 )
  {
    v11 = 0;
    reflectionProbeIndex = g_worldDraw->reflectionProbeData.probeRelightingData[relightingIndexToCopy].reflectionProbeIndex;
    outProbeImage = NULL;
    if ( R_ReflectionProbe_IsTransientStreamingEnabled() )
    {
      dstProbeIndex = 0;
      v13 = 0;
      if ( !R_ReflectionProbe_GetRelightableReflectionProbeImage(data, reflectionProbeIndex, (const GfxImage **)&outProbeImage) )
      {
LABEL_23:
        v8 = sunShadowImages;
        goto LABEL_24;
      }
      ProbeOctahedronImageArray = outProbeImage;
    }
    else
    {
      v13 = reflectionProbeIndex;
      dstProbeIndex = reflectionProbeIndex;
      if ( rg.useRProbeOctahedron )
        ProbeOctahedronImageArray = (GfxImage *)R_ReflectionProbe_GetProbeOctahedronImageArray();
      else
        ProbeOctahedronImageArray = (GfxImage *)R_ReflectionProbe_GetProbeImageArray();
      outProbeImage = ProbeOctahedronImageArray;
    }
    if ( ProbeOctahedronImageArray )
    {
      format = ProbeOctahedronImageArray->format;
      if ( rg.useRProbeOctahedron )
      {
        if ( format == GFX_PF_BC6H )
        {
          RB_ReflectionProbeCompression_CopyResult_Octahedron(computeState, ProbeOctahedronImageArray, v13);
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 1147, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "non-compressed path not implemented") )
        {
          __debugbreak();
        }
      }
      else if ( format == GFX_PF_BC6H )
      {
        RB_ReflectionProbeCompression_CopyResultToCubemapArrayTexture(computeState, ProbeOctahedronImageArray, v13);
      }
      else
      {
        FilteredImage = R_ReflectionProbeFiltering_GetFilteredImage();
        v17 = outProbeImage;
        v18 = FilteredImage;
        R_ProfBeginNamedEvent(computeState, "RB_ReflectionProbeRelighting_CopyCubemapToArrayTexture");
        Resident = R_Texture_GetResident(v18->textureId);
        v20 = R_Texture_GetResident(v17->textureId);
        R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(computeState);
        v21 = 6 * v13;
        do
        {
          v22 = v11;
          v23 = 6i64;
          do
          {
            device = computeState->device;
            basemap = v20->basemap;
            v32 = v22 + 8 * v21;
            v25 = (__int64)Resident->basemap;
            v31 = 0;
            v28 = 0;
            v27 = v25;
            v29 = v22;
            ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, __int64 *, _QWORD, _DWORD))device->m_pFunction[27].Release)(device, &basemap, 0i64, 0i64, 0, &v27, 0i64, 0);
            v22 += 8;
            --v23;
          }
          while ( v23 );
          ++v11;
        }
        while ( v11 < 8 );
        R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(computeState, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_FlushResourceTransitions(computeState);
        R_ProfEndNamedEvent(computeState);
      }
      R_ReflectionProbeSH_CopySHToSHArrayBuffer(computeState, dstProbeIndex);
    }
    goto LABEL_23;
  }
LABEL_24:
  if ( data->reflectionProbeRelightingData.reflectionProbeRelightingIndex != -1 )
  {
    if ( rg.useRProbeOctahedron )
      R_ReflectionProbeRelighting_RelightReflectionProbe_Octahedron(computeState, data, v8, translucentSunShadowImage, translucentSunShadowMaskImage, spotshadowArrayImage);
    else
      R_ReflectionProbeRelighting_RelightReflectionProbe(computeState, data, v8, translucentSunShadowImage, translucentSunShadowMaskImage, spotshadowArrayImage);
    R_GPULabel_Signal(computeState, s_reflectionProbeRelighting.gpuLabelRelightingComplete, data->reflectionProbeRelightingData.frameIndex);
  }
}

/*
==============
R_ReflectionProbeRelighting_UpdateProbeRadiometricScale
==============
*/
void R_ReflectionProbeRelighting_UpdateProbeRadiometricScale(const GfxBackEndData *data)
{
  unsigned int relightingIndexToCopy; 

  relightingIndexToCopy = data->reflectionProbeRelightingData.relightingIndexToCopy;
  if ( relightingIndexToCopy != -1 )
    g_worldDraw->reflectionProbeData.probeRelightingData[relightingIndexToCopy].relightingScale = data->reflectionProbeRelightingData.relitReflectionProbeRadiometricScale;
}

/*
==============
R_ReflectionProbeRelighting_WorldShutdown
==============
*/
void R_ReflectionProbeRelighting_WorldShutdown(void)
{
  *(_QWORD *)&s_reflectionProbeRelighting.frameIndex = 0i64;
  s_reflectionProbeRelighting.bufferState[0].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[1].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[2].labelIndex = 0;
  s_reflectionProbeRelighting.probeRelightingCount = 0;
  s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex = -1;
  s_reflectionProbeRelighting.bufferState[1].currentProbeRelightingIndex = -1;
  s_reflectionProbeRelighting.bufferState[2].currentProbeRelightingIndex = -1;
  R_GPULabel_SetCPU(s_reflectionProbeRelighting.gpuLabelRelightingComplete, 0);
}

/*
==============
R_ReflectionProbeRelighting_WorldStartup
==============
*/
void R_ReflectionProbeRelighting_WorldStartup(void)
{
  GfxWorldDraw *v0; 
  unsigned int probeRelightingCount; 
  unsigned int v2; 
  float *v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  GfxReflectionProbeRelightingData *probeRelightingData; 
  GfxWorldDraw *v9; 
  GfxReflectionProbe *reflectionProbes; 
  __int64 reflectionProbeIndex; 
  GfxReflectionProbeRelightingData *v15; 
  GfxWorldDraw *v16; 
  GfxReflectionProbe *v17; 
  __int64 v18; 
  GfxReflectionProbeRelightingData *v22; 
  __int64 v23; 
  GfxWorldDraw *v24; 
  GfxReflectionProbeRelightingData *v28; 
  __int64 v29; 
  GfxReflectionProbe *v30; 
  __int64 v34; 
  __int64 v35; 
  float *v36; 
  GfxReflectionProbeRelightingData *v37; 
  __int64 v38; 

  *(_QWORD *)&s_reflectionProbeRelighting.frameIndex = 0i64;
  s_reflectionProbeRelighting.bufferState[0].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[1].labelIndex = 0;
  s_reflectionProbeRelighting.bufferState[2].labelIndex = 0;
  s_reflectionProbeRelighting.probeRelightingCount = 0;
  s_reflectionProbeRelighting.bufferState[0].currentProbeRelightingIndex = -1;
  s_reflectionProbeRelighting.bufferState[1].currentProbeRelightingIndex = -1;
  s_reflectionProbeRelighting.bufferState[2].currentProbeRelightingIndex = -1;
  R_GPULabel_SetCPU(s_reflectionProbeRelighting.gpuLabelRelightingComplete, 0);
  v0 = g_worldDraw;
  probeRelightingCount = g_worldDraw->reflectionProbeData.probeRelightingCount;
  if ( probeRelightingCount >= 0x80 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_relighting.cpp", 596, ASSERT_TYPE_ASSERT, "( ( probeRelightingCount < ( sizeof( *array_counter( s_reflectionProbeRelighting.probeRelightingState ) ) + 0 ) ) )", "( probeRelightingCount ) = %u", g_worldDraw->reflectionProbeData.probeRelightingCount) )
      __debugbreak();
    v0 = g_worldDraw;
  }
  s_reflectionProbeRelighting.probeRelightingCount = probeRelightingCount;
  v2 = 0;
  _XMM4 = LODWORD(FLOAT_1_0);
  if ( probeRelightingCount >= 4 )
  {
    v4 = &s_reflectionProbeRelighting.probeRelightingState[0].reflectionProbePosition.v[2];
    v5 = ((probeRelightingCount - 4) >> 2) + 1;
    v6 = 0i64;
    v7 = v5;
    v2 = 4 * v5;
    do
    {
      *(v4 - 3) = 0.0;
      probeRelightingData = v0->reflectionProbeData.probeRelightingData;
      probeRelightingData[v6].relightingScale = 1.0;
      v9 = g_worldDraw;
      reflectionProbes = g_worldDraw->reflectionProbeData.reflectionProbes;
      reflectionProbeIndex = probeRelightingData[v6].reflectionProbeIndex;
      *(v4 - 2) = reflectionProbes[probeRelightingData[v6].reflectionProbeIndex].origin.v[0];
      *(v4 - 1) = reflectionProbes[reflectionProbeIndex].origin.v[1];
      *v4 = reflectionProbes[reflectionProbeIndex].origin.v[2];
      *(vec4_t *)(v4 + 1) = quat_identity;
      _XMM0 = probeRelightingData[v6].relightingFlags & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm4, xmm3, xmm2
      }
      v4[5] = *(float *)&_XMM0;
      *((_BYTE *)v4 + 24) = (probeRelightingData[v6].relightingFlags & 2) == 0;
      *((_BYTE *)v4 + 26) = (probeRelightingData[v6].relightingFlags & 4) == 0;
      *((_BYTE *)v4 + 25) = (probeRelightingData[v6].relightingFlags & 8) == 0;
      v4[7] = 0.0;
      v15 = v9->reflectionProbeData.probeRelightingData;
      v15[v6 + 1].relightingScale = 1.0;
      v16 = g_worldDraw;
      v17 = g_worldDraw->reflectionProbeData.reflectionProbes;
      v18 = v15[v6 + 1].reflectionProbeIndex;
      v4[8] = v17[v15[v6 + 1].reflectionProbeIndex].origin.v[0];
      v4[9] = v17[v18].origin.v[1];
      v4[10] = v17[v18].origin.v[2];
      *(vec4_t *)(v4 + 11) = quat_identity;
      _XMM0 = v15[v6 + 1].relightingFlags & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm4, xmm3, xmm2
      }
      v4[15] = *(float *)&_XMM0;
      *((_BYTE *)v4 + 64) = (v15[v6 + 1].relightingFlags & 2) == 0;
      *((_BYTE *)v4 + 66) = (v15[v6 + 1].relightingFlags & 4) == 0;
      *((_BYTE *)v4 + 65) = (v15[v6 + 1].relightingFlags & 8) == 0;
      v4[17] = 0.0;
      v22 = v16->reflectionProbeData.probeRelightingData;
      v22[v6 + 2].relightingScale = 1.0;
      v23 = v22[v6 + 2].reflectionProbeIndex;
      v4 += 40;
      v24 = g_worldDraw;
      v6 += 4i64;
      *(vec3_t *)(v4 - 22) = g_worldDraw->reflectionProbeData.reflectionProbes[v23].origin;
      *(vec4_t *)(v4 - 19) = quat_identity;
      _XMM0 = *((_WORD *)&v22[v6 - 1] - 14) & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm4, xmm3, xmm2
      }
      *(v4 - 15) = *(float *)&_XMM0;
      *((_BYTE *)v4 - 56) = (*((_BYTE *)&v22[v6 - 1] - 28) & 2) == 0;
      *((_BYTE *)v4 - 54) = (*((_BYTE *)&v22[v6 - 1] - 28) & 4) == 0;
      *((_BYTE *)v4 - 55) = (*((_BYTE *)&v22[v6 - 1] - 28) & 8) == 0;
      *(v4 - 13) = 0.0;
      v28 = v24->reflectionProbeData.probeRelightingData;
      v28[v6 - 1].relightingScale = 1.0;
      v0 = g_worldDraw;
      v29 = v28[v6 - 1].reflectionProbeIndex;
      v30 = g_worldDraw->reflectionProbeData.reflectionProbes;
      *(v4 - 12) = v30[v28[v6 - 1].reflectionProbeIndex].origin.v[0];
      *(v4 - 11) = v30[v29].origin.v[1];
      *(v4 - 10) = v30[v29].origin.v[2];
      *(vec4_t *)(v4 - 9) = quat_identity;
      _XMM0 = v28[v6 - 1].relightingFlags & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm4, xmm3, xmm2
      }
      *(v4 - 5) = *(float *)&_XMM0;
      *((_BYTE *)v4 - 16) = (v28[v6 - 1].relightingFlags & 2) == 0;
      *((_BYTE *)v4 - 14) = (v28[v6 - 1].relightingFlags & 4) == 0;
      *((_BYTE *)v4 - 15) = (v28[v6 - 1].relightingFlags & 8) == 0;
      --v7;
    }
    while ( v7 );
  }
  if ( v2 < probeRelightingCount )
  {
    v34 = v2;
    v35 = probeRelightingCount - v2;
    v36 = &s_reflectionProbeRelighting.probeRelightingState[v2].reflectionProbePosition.v[2];
    do
    {
      *(v36 - 3) = 0.0;
      v36 += 10;
      v37 = v0->reflectionProbeData.probeRelightingData;
      v38 = v37[v34++].reflectionProbeIndex;
      v37[v34 - 1].relightingScale = 1.0;
      v0 = g_worldDraw;
      *((vec3_t *)v36 - 4) = g_worldDraw->reflectionProbeData.reflectionProbes[v38].origin;
      *(vec4_t *)(v36 - 9) = quat_identity;
      _XMM0 = v37[v34 - 1].relightingFlags & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm4, xmm3, xmm2
      }
      *(v36 - 5) = *(float *)&_XMM0;
      *((_BYTE *)v36 - 16) = (v37[v34 - 1].relightingFlags & 2) == 0;
      *((_BYTE *)v36 - 14) = (v37[v34 - 1].relightingFlags & 4) == 0;
      *((_BYTE *)v36 - 15) = (v37[v34 - 1].relightingFlags & 8) == 0;
      --v35;
    }
    while ( v35 );
  }
}

