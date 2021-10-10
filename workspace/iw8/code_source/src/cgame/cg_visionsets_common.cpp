/*
==============
RawBufferOpen
==============
*/

const char *__fastcall RawBufferOpen(const char *name, const char *formatFullPath, char *buf, int size)
{
  return ?RawBufferOpen@@YAPEBDPEBD0PEADH@Z(name, formatFullPath, buf, size);
}

/*
==============
CG_VisionSetGetAssetHash
==============
*/

unsigned int __fastcall CG_VisionSetGetAssetHash(const VisionSetAssetKey *key)
{
  return ?CG_VisionSetGetAssetHash@@YAIPEBUVisionSetAssetKey@@@Z(key);
}

/*
==============
CG_VisionSetGetXAssetType
==============
*/

XAssetType __fastcall CG_VisionSetGetXAssetType(VisionSetAssetType visionSetAssetType)
{
  return ?CG_VisionSetGetXAssetType@@YA?AW4XAssetType@@W4VisionSetAssetType@@@Z(visionSetAssetType);
}

/*
==============
CG_VisionSetApplyDefaultToField
==============
*/

bool __fastcall CG_VisionSetApplyDefaultToField(unsigned int fieldNum, visionSetVars_t *settings)
{
  return ?CG_VisionSetApplyDefaultToField@@YA_NIPEAUvisionSetVars_t@@@Z(fieldNum, settings);
}

/*
==============
CG_VisionSet_LoadAssetIndex
==============
*/

unsigned __int8 __fastcall CG_VisionSet_LoadAssetIndex(VisionSetAssetType assetType, const char *assetName)
{
  return ?CG_VisionSet_LoadAssetIndex@@YAEW4VisionSetAssetType@@PEBD@Z(assetType, assetName);
}

/*
==============
CG_VisionSetLoadVisionSettingsFromBuffer
==============
*/

bool __fastcall CG_VisionSetLoadVisionSettingsFromBuffer(const char *buffer, const char *filename, visionSetVars_t *settings)
{
  return ?CG_VisionSetLoadVisionSettingsFromBuffer@@YA_NPEBD0PEAUvisionSetVars_t@@@Z(buffer, filename, settings);
}

/*
==============
CG_VisionSetGetVisionSet
==============
*/

bool __fastcall CG_VisionSetGetVisionSet(const char *name, visionSetVars_t *resultSettings)
{
  return ?CG_VisionSetGetVisionSet@@YA_NPEBDPEAUvisionSetVars_t@@@Z(name, resultSettings);
}

/*
==============
CG_VisionSet_GetColorGradingClutSet
==============
*/

void __fastcall CG_VisionSet_GetColorGradingClutSet(GfxColorGradingClutSet *outColorGradingClutSet, const CG_VisionSet_AssetBlendSet *visionsetAssetBlendSet)
{
  ?CG_VisionSet_GetColorGradingClutSet@@YAXPEAUGfxColorGradingClutSet@@PEBUCG_VisionSet_AssetBlendSet@@@Z(outColorGradingClutSet, visionsetAssetBlendSet);
}

/*
==============
CG_VisionSetApplyTokenToField
==============
*/

bool __fastcall CG_VisionSetApplyTokenToField(unsigned int fieldNum, const char *token, visionSetVars_t *settings)
{
  return ?CG_VisionSetApplyTokenToField@@YA_NIPEBDPEAUvisionSetVars_t@@@Z(fieldNum, token, settings);
}

/*
==============
CG_VisionSetApplyDefault
==============
*/

void __fastcall CG_VisionSetApplyDefault(visionSetVars_t *visionSet)
{
  ?CG_VisionSetApplyDefault@@YAXPEAUvisionSetVars_t@@@Z(visionSet);
}

/*
==============
CG_VisionSetApplyNamedVisionSetToRefdef
==============
*/

void __fastcall CG_VisionSetApplyNamedVisionSetToRefdef(const char *name, refdef_t *refDef)
{
  ?CG_VisionSetApplyNamedVisionSetToRefdef@@YAXPEBDPEAUrefdef_t@@@Z(name, refDef);
}

/*
==============
CG_VisionSet_ResetAssets
==============
*/

void CG_VisionSet_ResetAssets(void)
{
  ?CG_VisionSet_ResetAssets@@YAXXZ();
}

/*
==============
CG_VisionSetGetAssetName
==============
*/

const char *__fastcall CG_VisionSetGetAssetName(const CG_VisionSet_Asset *asset)
{
  return ?CG_VisionSetGetAssetName@@YAPEBDPEBUCG_VisionSet_Asset@@@Z(asset);
}

/*
==============
CG_VisionSetApplyToRefdef_Internal
==============
*/

void __fastcall CG_VisionSetApplyToRefdef_Internal(refdef_t *refDef, const visionSetVarsBase_t *set, int full)
{
  ?CG_VisionSetApplyToRefdef_Internal@@YAXPEAUrefdef_t@@PEBUvisionSetVarsBase_t@@H@Z(refDef, set, full);
}

/*
==============
CG_VisionSet_FixupAssetIndices
==============
*/

void __fastcall CG_VisionSet_FixupAssetIndices(visionSetVarsBase_t *vision, const unsigned __int8 *oldToNewAssetIndexMap, unsigned int oldAssetCount)
{
  ?CG_VisionSet_FixupAssetIndices@@YAXPEAUvisionSetVarsBase_t@@PEBEI@Z(vision, oldToNewAssetIndexMap, oldAssetCount);
}

/*
==============
CG_VisionSetApplySingleToRefDef
==============
*/

void __fastcall CG_VisionSetApplySingleToRefDef(refdef_t *refDef, visionSetVarsBase_t *visionSet)
{
  ?CG_VisionSetApplySingleToRefDef@@YAXPEAUrefdef_t@@PEAUvisionSetVarsBase_t@@@Z(refDef, visionSet);
}

/*
==============
CG_VisionSetApplyDefault
==============
*/
void CG_VisionSetApplyDefault(visionSetVars_t *visionSet)
{
  unsigned int v1; 
  VisionFieldType *p_fieldType; 
  VisionFieldType *v4; 
  VisionFieldType v5; 

  v1 = 0;
  p_fieldType = &visionDefFields[0].fieldType;
  do
  {
    if ( !visionSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 433, ASSERT_TYPE_ASSERT, "(settings)", (const char *)&queryFormat, "settings") )
      __debugbreak();
    v4 = (VisionFieldType *)((char *)visionSet + *((unsigned __int16 *)p_fieldType - 2));
    bitarray_base<bitarray<224>>::resetBit(&visionSet->inUse, v1);
    v5 = *p_fieldType;
    if ( *p_fieldType )
    {
      if ( v5 == FTYPE_FLOAT )
      {
        *v4 = p_fieldType[3];
      }
      else if ( v5 == FTYPE_VEC3 )
      {
        *v4 = p_fieldType[3];
        v4[1] = p_fieldType[4];
        v4[2] = p_fieldType[5];
      }
      else if ( (unsigned int)(v5 - 3) > 2 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 462, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported token type") )
          __debugbreak();
      }
      else
      {
        *(_WORD *)v4 = -256;
        *((_BYTE *)v4 + 3) = 0;
      }
    }
    else
    {
      *(_BYTE *)v4 = *((_BYTE *)p_fieldType + 12);
    }
    bitarray_base<bitarray<224>>::setBit(&visionSet->inUse, v1++);
    p_fieldType += 10;
  }
  while ( v1 < 0xDA );
}

/*
==============
CG_VisionSetApplyDefaultToField
==============
*/
char CG_VisionSetApplyDefaultToField(unsigned int fieldNum, visionSetVars_t *settings)
{
  __int64 v2; 
  bool *v4; 
  VisionFieldType fieldType; 

  v2 = fieldNum;
  if ( fieldNum > 0xDA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 432, ASSERT_TYPE_ASSERT, "( fieldNum ) <= ( ( sizeof( *array_counter( visionDefFields ) ) + 0 ) )", "fieldNum not in [0, ARRAY_COUNT( visionDefFields )]\n\t%u not in [0, %u]", fieldNum, 218) )
    __debugbreak();
  if ( !settings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 433, ASSERT_TYPE_ASSERT, "(settings)", (const char *)&queryFormat, "settings") )
    __debugbreak();
  v4 = (bool *)settings + visionDefFields[v2].offset;
  bitarray_base<bitarray<224>>::resetBit(&settings->inUse, v2);
  fieldType = visionDefFields[v2].fieldType;
  if ( fieldType )
  {
    if ( fieldType == FTYPE_FLOAT )
    {
      *(float *)v4 = visionDefFields[v2].def.value;
    }
    else if ( fieldType == FTYPE_VEC3 )
    {
      *(float *)v4 = visionDefFields[v2].def.value;
      *((_DWORD *)v4 + 1) = LODWORD(visionDefFields[v2].def.vector.v[1]);
      *((_DWORD *)v4 + 2) = LODWORD(visionDefFields[v2].def.vector.v[2]);
    }
    else if ( (unsigned int)(fieldType - 3) > 2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 462, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported token type") )
        __debugbreak();
    }
    else
    {
      *(_WORD *)v4 = -256;
      v4[3] = 0;
    }
  }
  else
  {
    *v4 = visionDefFields[v2].def.enabled;
  }
  bitarray_base<bitarray<224>>::setBit(&settings->inUse, v2);
  return 1;
}

/*
==============
CG_VisionSetApplyNamedVisionSetToRefdef
==============
*/
void CG_VisionSetApplyNamedVisionSetToRefdef(const char *name, refdef_t *refDef)
{
  unsigned int v2; 
  unsigned __int64 v4; 
  visionSetVars_t resultSettings; 
  char namea[64]; 

  v2 = 0;
  memset(&resultSettings.inUse, 0, sizeof(resultSettings.inUse));
  Com_sprintf(namea, 0x40ui64, "vision/%s.vision", name);
  if ( namea[0] && CG_VisionSetLoadVisionFile(namea, &resultSettings) )
  {
    v4 = 0i64;
    do
    {
      if ( ((0x80000000 >> (v2 & 0x1F)) & resultSettings.inUse.array[v4 >> 5]) == 0 )
        CG_VisionSetApplyDefaultToField(v2, &resultSettings);
      ++v2;
      ++v4;
    }
    while ( v2 < 0xDA );
    CG_VisionSetApplyToRefdef_Internal(refDef, &resultSettings, 1);
  }
}

/*
==============
CG_VisionSetApplySingleToRefDef
==============
*/
void CG_VisionSetApplySingleToRefDef(refdef_t *refDef, visionSetVarsBase_t *visionSet)
{
  CG_VisionSetApplyToRefdef_Internal(refDef, visionSet, 1);
}

/*
==============
CG_VisionSetApplyToRefdef_Internal
==============
*/
void CG_VisionSetApplyToRefdef_Internal(refdef_t *refDef, const visionSetVarsBase_t *set, int full)
{
  const GfxImage *v3; 
  float r_ssaoStrength; 
  GfxColorGradingAnalytical *v7; 
  __m256i v8; 
  __m256i v9; 
  double v10; 
  __m256i v11; 
  const GfxGradingClut *v12; 
  bool v13; 
  unsigned __int8 m_assetIndex; 
  __int64 v15; 
  float r_volumeLightScatter; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  bool v19; 
  float volumetricAbsorption; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  __int128 cloudShadowScrollHeading_low; 
  double v25; 
  double v26; 
  float cloudShadowScrollRate; 
  __int128 cloudShadowLowThreshold_low; 
  unsigned __int8 v35; 
  __int64 v36; 
  GfxColorGradingAnalytical result; 
  _BYTE outColorGradingClutSet[64]; 
  _BYTE outColorGradingClutSet_64[128]; 

  v3 = NULL;
  r_ssaoStrength = 0.0;
  if ( full )
  {
    refDef->chromaticAberration = *(GfxChromaticAberration *)&set->chromaRadius;
    if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 642, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
      __debugbreak();
    if ( set->assetTableResetCounter != s_CG_VisionSet.m_resetCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 643, ASSERT_TYPE_ASSERT, "(set->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", (const char *)&queryFormat, "set->assetTableResetCounter == s_CG_VisionSet.m_resetCounter") )
      __debugbreak();
    CG_VisionSet_GetColorGradingClutSet((GfxColorGradingClutSet *)outColorGradingClutSet, &set->clutSet);
    v7 = GfxColorGradingAnalytical_Construct(&result, (const GfxColorGradingAnalytical_Config *)&set->hdrColorizeKeyA_Pos);
    v8 = *(__m256i *)&v7->key[0].saturation;
    *(__m256i *)&outColorGradingClutSet_64[16] = *(__m256i *)v7->keyPositions;
    v9 = *(__m256i *)&v7->key[2].saturation;
    *(__m256i *)&outColorGradingClutSet_64[48] = v8;
    v10 = *(double *)v7->gain.v;
    *(float *)&outColorGradingClutSet_64[120] = v7->gain.v[2];
    *(__m256i *)&outColorGradingClutSet_64[80] = v9;
    *(double *)&outColorGradingClutSet_64[112] = v10;
    v11 = *(__m256i *)&outColorGradingClutSet_64[64];
    *(__m256i *)&refDef->colorGrading.clutSet.m_clutCount = *(__m256i *)outColorGradingClutSet;
    *(__m256i *)&refDef->colorGrading.clutSet.m_clutArray[2] = *(__m256i *)&outColorGradingClutSet[32];
    *(__m256i *)&refDef->colorGrading.clutSet.m_clutArray[6] = *(__m256i *)outColorGradingClutSet_64;
    *(__m256i *)&refDef->colorGrading.colorGradingAnalytical.keyMidpoints[1] = *(__m256i *)&outColorGradingClutSet_64[32];
    *(__m256i *)&refDef->colorGrading.colorGradingAnalytical.key[1].saturation = v11;
    *(__m256i *)&refDef->colorGrading.colorGradingAnalytical.lift.z = *(__m256i *)&outColorGradingClutSet_64[96];
    if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 657, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
      __debugbreak();
    if ( set->assetTableResetCounter != s_CG_VisionSet.m_resetCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 658, ASSERT_TYPE_ASSERT, "(set->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", (const char *)&queryFormat, "set->assetTableResetCounter == s_CG_VisionSet.m_resetCounter") )
      __debugbreak();
    CG_VisionSet_GetColorGradingClutSet((GfxColorGradingClutSet *)outColorGradingClutSet, &set->nvgCLutSet);
    GfxColorGradingAnalytical_Construct(&result, (const GfxColorGradingAnalytical_Config *)&set->hdrColorizeKeyA_Pos);
    v12 = NULL;
    if ( outColorGradingClutSet[0] )
      v12 = *(const GfxGradingClut **)&outColorGradingClutSet[16];
    refDef->nvgColorGrading = v12;
    refDef->lightTweakUVIntensityScale = set->r_lightTweakUVIntensityScale;
    refDef->rimLighting.rimLightScale = set->r_rimLightScale;
    refDef->rimLighting.rimLightStartDistance = set->r_rimLightStartDistance;
    refDef->rimLighting.rimLightDistance = set->r_rimLightDistance;
    refDef->rimLighting.rimLightFill = set->r_rimLightFill;
    refDef->rimLighting.EVCompBounds = set->r_EVCompBounds;
    refDef->rimLighting.EVCompGrayReference = set->r_EVCompGrayReference;
    refDef->skyBlendAmount = set->r_skyBlendAmount;
    refDef->skyBlendFeather = set->r_skyBlendFeather;
    refDef->tonemap.enabled = 1;
    v13 = set->tonemapAuto > 0.5;
    refDef->tonemap.blendExposure = 1;
    refDef->tonemap.autoExposure = v13;
    refDef->tonemap.lockAutoExposureAdjust = set->tonemapAutoExposureAdjustCurve < 0.5;
    refDef->tonemap.userMaxExposure = set->tonemapMaxExposure;
    refDef->tonemap.userExposure = set->tonemapExposure;
    refDef->tonemap.userExposureAdjust = set->tonemapExposureAdjust;
    refDef->tonemap.userAutoExposureAdjust = set->tonemapAutoExposureAdjust;
    refDef->tonemap.adaptSpeed = set->tonemapAdaptSpeed;
    refDef->tonemap.darkEv = set->tonemapDarkEv;
    refDef->tonemap.midEv = set->tonemapMidEv;
    refDef->tonemap.lightEv = set->tonemapLightEv;
    refDef->tonemap.darkExposureAdjust = set->tonemapDarkExposureAdjust;
    refDef->tonemap.midExposureAdjust = set->tonemapMidExposureAdjust;
    refDef->tonemap.lightExposureAdjust = set->tonemapLightExposureAdjust;
    refDef->tonemap.maxExposureAdjust = set->tonemapMaxExposureAdjust;
    refDef->tonemap.minExposureAdjust = set->tonemapMinExposureAdjust;
    refDef->tonemap.grainStrength = set->tonemapGrainStrength;
    refDef->tonemap.localStrength = set->tonemapLocalStrength;
    refDef->tonemap.localEvBounds = set->tonemapLocalEvBounds;
    refDef->perceptual.veilStrength = set->veilStrength;
    refDef->tonemap.whitePoint.v[0] = set->toneWhitePoint.v[0];
    refDef->tonemap.whitePoint.v[1] = set->toneWhitePoint.v[1];
    refDef->tonemap.whitePoint.v[2] = set->toneWhitePoint.v[2];
    refDef->thermalParams.useNightAndThermalVisionCombo = 1.0 == set->nightAndThermalVisionCombo;
    refDef->thermalParams.useScopedNVG = 1.0 == set->scopedNVG;
    refDef->thermalParams.nightVisionExposureAdjustment = set->nightVisionExposureAdjustment;
    refDef->thermalParams.nightVisionMinExposureBias = set->nightVisionMinExposureBias;
    refDef->thermalParams.thermalAmbientTemperature = set->thermalAmbientTemperature;
    refDef->thermalParams.thermalAmbientReflection = set->thermalAmbientReflection;
    refDef->thermalParams.thermalColdColor.v[0] = set->thermalColdColor.v[0];
    refDef->thermalParams.thermalColdColor.v[1] = set->thermalColdColor.v[1];
    refDef->thermalParams.thermalColdColor.v[2] = set->thermalColdColor.v[2];
    refDef->thermalParams.thermalHotColor.v[0] = set->thermalHotColor.v[0];
    refDef->thermalParams.thermalHotColor.v[1] = set->thermalHotColor.v[1];
    refDef->thermalParams.thermalHotColor.v[2] = set->thermalHotColor.v[2];
    refDef->thermalParams.thermalColorScale = set->thermalColorScale;
    refDef->thermalParams.thermalRadiationMin = set->thermalRadiationMin;
    refDef->thermalParams.thermalRadiationMax = set->thermalRadiationMax;
    refDef->thermalParams.lightIntensityScreen = set->lightIntensityScopeScreen;
    refDef->thermalParams.thermalFogExtinctionWeight = set->thermalFogExtinctionWeight;
    refDef->thermalParams.thermalSurfaceNormalStrength = set->thermalSurfaceNormalStrength;
    refDef->thermalParams.thermalAOStrength = set->thermalAOStrength;
    refDef->thermalParams.thermalCutoff = set->thermalCutoff;
    refDef->thermalParams.thermalFog = set->thermalFog;
    refDef->thermalParams.thermalRadiationLut = NULL;
    m_assetIndex = set->thermalRadiationLut.m_assets[0].m_assetIndex;
    if ( m_assetIndex )
    {
      v15 = 2i64 * m_assetIndex;
      if ( s_CG_VisionSet.m_assetNodes[8 * v15 - 4080].m_nextAssetIndex == 1 )
        refDef->thermalParams.thermalRadiationLut = *(const GfxImage **)&s_CG_VisionSet.m_assetNodes[8 * v15 - 4072].m_nextAssetIndex;
    }
    refDef->whiteBalance.method = (int)set->whiteBalanceMethod;
    refDef->whiteBalance.illuminant = (int)set->whiteBalanceIlluminant;
    refDef->whiteBalance.colorTempK = set->whiteBalanceColorTempK;
    refDef->whiteBalance.colorGreenMagentaShift = set->whiteBalanceGreenMagentaShift;
    refDef->droneCameraEffects.enabled = set->droneCameraEnabled != 0.0;
    refDef->droneCameraEffects.downsampleScale = (int)set->droneCameraDownsampleScale;
    refDef->droneCameraEffects.pixelSize = set->droneCameraPixelSize;
    refDef->droneCameraEffects.filterMultiplier = (int)set->droneCameraFilterMultiplier;
    refDef->droneCameraEffects.filterType = (int)set->droneCameraFilterType;
    refDef->droneCameraEffects.filterShakeStrength = set->droneCameraFilterShakeStrength;
    refDef->droneCameraEffects.levelsOnOff = set->droneCameraLevelsOnOff != 0.0;
    refDef->droneCameraEffects.levelsMin = 0.0039215689 * set->droneCameraLevelsMin;
    refDef->droneCameraEffects.levelsMax = 0.0039215689 * set->droneCameraLevelsMax;
    refDef->droneCameraEffects.levelsGamma = set->droneCameraLevelsGamma;
    refDef->droneCameraEffects.posterizationOnOff = set->droneCameraPosterizationOnOff != 0.0;
    refDef->droneCameraEffects.posterizationGamma = set->droneCameraPosterizationGamma;
    refDef->droneCameraEffects.posterizationPower = set->droneCameraPosterizationPower;
    refDef->droneCameraEffects.saturation = set->droneCameraSaturation;
    refDef->droneCameraEffects.deformScreenOnOff = set->droneCameraDeformScreenOnOff != 0.0;
    refDef->droneCameraEffects.deformScreenThreshold = set->droneCameraDeformScreenThreshold;
    refDef->droneCameraEffects.deformScreenScale = set->droneCameraDeformScreenScale;
    refDef->droneCameraEffects.deformScreenSeed = set->droneCameraDeformScreenSeed;
    refDef->droneCameraEffects.deformScreenProbability = set->droneCameraDeformScreenProbability;
    refDef->droneCameraEffects.shakeCameraOnOff = set->droneCameraShakeCameraOnOff != 0.0;
    refDef->droneCameraEffects.shakeCameraVal1 = set->droneCameraShakeCameraVal1;
    refDef->droneCameraEffects.shakeCameraVal2 = set->droneCameraShakeCameraVal2;
    refDef->droneCameraEffects.shakeCameraVal3 = set->droneCameraShakeCameraVal3;
    refDef->droneCameraEffects.scanlinesOnOff = set->droneCameraScanlinesOnOff != 0.0;
    refDef->droneCameraEffects.scanline1_InterpolationPower = set->droneCameraScanline1_InterpolationPower;
    refDef->droneCameraEffects.scanline2_InterpolationPower = set->droneCameraScanline2_InterpolationPower;
    refDef->droneCameraEffects.scanline1_Size = set->droneCameraScanline1_Size;
    refDef->droneCameraEffects.scanline1_Speed = set->droneCameraScanline1_Speed;
    refDef->droneCameraEffects.scanline2_Size = set->droneCameraScanline2_Size;
    refDef->droneCameraEffects.scanline2_Speed = set->droneCameraScanline2_Speed;
    refDef->droneCameraEffects.vignetteOnOff = set->droneCameraVignetteOnOff != 0.0;
    refDef->droneCameraEffects.vignetteSize = set->droneCameraVignetteSize;
    refDef->droneCameraEffects.vignetteSmoothness = set->droneCameraVignetteSmoothness;
    refDef->droneCameraEffects.vignetteEdges = set->droneCameraVignetteEdges;
    refDef->droneCameraEffects.zoomUV = set->droneCameraZoomUV;
    refDef->analogEffects.analogCrtEffectAmount = set->analogCrtEffectAmount;
    refDef->analogEffects.analogInterferenceAmount = set->analogInterferenceAmount;
    refDef->analogEffects.analogRewindAmount = set->analogRewindAmount;
    refDef->analogEffects.analogRollEffectAmount = set->analogRollEffectAmount;
    refDef->analogEffects.analogChromaSeparationEffectAmount = set->analogChromaSeparationEffectAmount;
  }
  refDef->dust.dustHeading = set->r_dustHeading;
  refDef->dust.dustPitch = set->r_dustPitch;
  refDef->dust.dustTiling = set->r_dustTiling;
  refDef->dust.dustIntensity = set->r_dustIntensity;
  refDef->dust.dustPowerCurve = set->r_dustPowerCurv;
  refDef->dust.dustSmoothMin = set->r_dustSmoothMin;
  refDef->dust.dustSmoothMax = set->r_dustSmoothMax;
  refDef->volumeLightScatter.enabled = set->r_volumeLightScatter > 0.0;
  refDef->volumeLightScatter.attenuation.v[0] = set->r_volumeLightScatterLinearAtten;
  refDef->volumeLightScatter.attenuation.v[1] = set->r_volumeLightScatterQuadraticAtten;
  refDef->volumeLightScatter.attenuation.v[2] = set->r_volumeLightScatterAngularAtten;
  refDef->volumeLightScatter.depthAttenuation.v[0] = set->r_volumeLightScatterDepthAttenNear;
  refDef->volumeLightScatter.depthAttenuation.v[1] = set->r_volumeLightScatterDepthAttenFar;
  refDef->volumeLightScatter.backgroundDistance = set->r_volumeLightScatterBackgroundDistance;
  r_volumeLightScatter = set->r_volumeLightScatter;
  refDef->volumeLightScatter.lightColor.v[0] = r_volumeLightScatter * set->r_volumeLightScatterColor.v[0];
  refDef->volumeLightScatter.lightColor.v[1] = r_volumeLightScatter * set->r_volumeLightScatterColor.v[1];
  refDef->volumeLightScatter.lightColor.v[2] = r_volumeLightScatter * set->r_volumeLightScatterColor.v[2];
  v17 = DVARBOOL_r_volumetrics;
  if ( !DVARBOOL_r_volumetrics )
    goto LABEL_28;
  Dvar_CheckFrontendServerThread(DVARBOOL_r_volumetrics);
  if ( !v17->current.enabled )
    goto LABEL_28;
  v18 = DCONST_DVARBOOL_r_volumetricsA;
  if ( !DCONST_DVARBOOL_r_volumetricsA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_volumetricsA") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled && r_volumetricsDisableHack->current.enabled )
    v19 = 1;
  else
LABEL_28:
    v19 = 0;
  refDef->volumetrics.enabled = v19;
  refDef->volumetrics.airDensity = set->volumetricAirDensity;
  if ( set->volumetricAirDensity <= 0.0 )
    volumetricAbsorption = 0.0;
  else
    volumetricAbsorption = set->volumetricAbsorption;
  refDef->volumetrics.absorption = volumetricAbsorption;
  refDef->volumetrics.albedo.v[0] = set->volumetricAlbedo.v[0];
  refDef->volumetrics.albedo.v[1] = set->volumetricAlbedo.v[1];
  refDef->volumetrics.albedo.v[2] = set->volumetricAlbedo.v[2];
  refDef->volumetrics.sunBrightness = set->volumetricSunBrightness;
  refDef->volumetrics.spotBrightness = set->volumetricSpotBrightness;
  refDef->volumetrics.omniBrightness = set->volumetricOmniBrightness;
  refDef->volumetrics.ambientBrightness = set->volumetricAmbientBrightness;
  refDef->volumetrics.sunAnisotropy = set->volumetricSunAnisotropy;
  LODWORD(refDef->volumetrics.attenuationClamp) = r_volumetricsAttenuationClamp->current.integer;
  LODWORD(refDef->volumetrics.bulbAttenClamp) = r_volumetricsBulbAttenClamp->current.integer;
  refDef->volumetrics.heightFogBaseHeight = set->volumetricHeightFogBaseHeight;
  refDef->volumetrics.heightFogHalfPlaneDistance = set->volumetricHeightFogHalfPlaneDistance;
  v21 = r_volumetricsDensityTemporalFactor;
  if ( !r_volumetricsDensityTemporalFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  LODWORD(refDef->volumetrics.densityTemporalFactor) = v21->current.integer;
  v22 = r_volumetricsScatterTemporalFactor;
  if ( !r_volumetricsScatterTemporalFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  LODWORD(refDef->volumetrics.scatterTemporalFactor) = v22->current.integer;
  v23 = r_volumetricsAmbientTemporalFactor;
  if ( !r_volumetricsAmbientTemporalFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  LODWORD(refDef->volumetrics.ambientTemporalFactor) = v23->current.integer;
  refDef->sunshadowSoftness = set->sunshadowSoftness;
  refDef->sunshadowSampleSizeNear = set->sunshadowSampleSizeNear;
  cloudShadowScrollHeading_low = LODWORD(set->cloudShadowScrollHeading);
  *(float *)&cloudShadowScrollHeading_low = set->cloudShadowScrollHeading * 0.017453292;
  v25 = I_fclamp(*(float *)&cloudShadowScrollHeading_low, -3.1415925, 3.1415925);
  refDef->cloudShadow.scale = set->cloudShadowScale;
  v26 = FastSinBetweenMinusPiAndPi(*(float *)&v25);
  _XMM8 = LODWORD(FLOAT_3_1415927);
  refDef->cloudShadow.scroll.v[1] = *(float *)&v26;
  if ( (*(float *)&cloudShadowScrollHeading_low < -3.1415927 || *(float *)&cloudShadowScrollHeading_low > 3.1415927) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 810, ASSERT_TYPE_ASSERT, "(radians >= -M_PI_F && radians <= M_PI_F)", (const char *)&queryFormat, "radians >= -M_PI_F && radians <= M_PI_F") )
    __debugbreak();
  *(float *)&cloudShadowScrollHeading_low = *(float *)&cloudShadowScrollHeading_low + 1.5707964;
  _XMM2 = cloudShadowScrollHeading_low;
  __asm
  {
    vcmpless xmm0, xmm8, xmm2
    vblendvps xmm0, xmm2, xmm1, xmm0; radians
  }
  *(double *)&_XMM0 = FastSinBetweenMinusPiAndPi(*(float *)&_XMM0);
  refDef->cloudShadow.scroll.v[0] = *(float *)&_XMM0;
  cloudShadowScrollRate = set->cloudShadowScrollRate;
  refDef->cloudShadow.scroll.v[0] = cloudShadowScrollRate * *(float *)&_XMM0;
  refDef->cloudShadow.scroll.v[1] = cloudShadowScrollRate * refDef->cloudShadow.scroll.v[1];
  refDef->cloudShadow.opacity = set->cloudShadowOpacity;
  refDef->cloudShadow.min = set->cloudShadowLowThreshold;
  cloudShadowLowThreshold_low = LODWORD(set->cloudShadowLowThreshold);
  *(float *)&cloudShadowLowThreshold_low = set->cloudShadowLowThreshold + 0.00000011920929;
  _XMM1 = cloudShadowLowThreshold_low;
  __asm { vmaxss  xmm2, xmm1, dword ptr [rdi+0A0h] }
  refDef->cloudShadow.max = *(float *)&_XMM2;
  if ( !CL_IsRenderingSplitScreen() )
    r_ssaoStrength = set->r_ssaoStrength;
  refDef->ssao.strength = r_ssaoStrength;
  refDef->mdaoCullDistance = set->r_mdaoCullDistance;
  refDef->mdaoFadeoutDistance = set->r_mdaoFadeoutDistance;
  refDef->mdaoBoneSizeThreshold = set->r_mdaoBoneSizeThreshold;
  CG_VisionSetApplyToRefdef_InternalFog(refDef, set);
  refDef->screenSpaceShadows.spotOmniScreenSpaceShadowsSamplesPerLight = set->screenSpaceShadowsSamplesPerLight;
  refDef->screenSpaceShadows.spotOmniScreenSpaceshadowSamplesTotal = set->screenSpaceShadowsSamplesTotal;
  refDef->screenSpaceShadows.spotOmniScreenSpaceShadowsTraceDistance = set->screenSpaceShadowsTraceDistance;
  refDef->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDistance = set->sunSceneScreenSpaceShadowTraceDistance;
  refDef->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDelta = set->sunSceneScreenSpaceShadowTraceDelta;
  refDef->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDistance = set->sunViewmodelScreenSpaceshadowTraceDistance;
  refDef->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta = set->sunViewmodelScreenSpaceshadowTraceDelta;
  refDef->skyIlluminationRadialDistanceBias = set->skyIlluminationRadialDistanceBias;
  refDef->eyeVirtualHighlight.eyeHighlightBulbRadius = set->eyeHighlightBulbRadius;
  *(double *)refDef->eyeVirtualHighlight.eyeHighlightColor.v = *(double *)set->eyeHighlightColor.v;
  refDef->eyeVirtualHighlight.eyeHighlightColor.v[2] = set->eyeHighlightColor.v[2];
  refDef->eyeVirtualHighlight.eyeHighlightHeading = set->eyeHighlightHeading;
  refDef->eyeVirtualHighlight.eyeHighlightIntensity = set->eyeHighlightIntensity;
  refDef->eyeVirtualHighlight.eyeHighlightPitch = set->eyeHighlightPitch;
  refDef->vignetteFromVisionSet.intensity = set->vignetteIntensity;
  refDef->vignetteFromVisionSet.squareAspectRatioWeight = set->vignetteSquareAspectRatioWeight;
  refDef->vignetteFromVisionSet.size.v[0] = set->vignetteSizeX;
  refDef->vignetteFromVisionSet.size.v[1] = set->vignetteSizeY;
  refDef->vignetteFromVisionSet.falloff = set->vignetteFalloff;
  refDef->vignetteFromVisionSet.falloffStart = set->vignetteFalloffStart;
  refDef->vignetteFromVisionSet.boxSize.v[0] = set->vignetteBoxSizeX;
  refDef->vignetteFromVisionSet.boxSize.v[1] = set->vignetteBoxSizeY;
  refDef->vignetteFromVisionSet.offset.v[0] = set->vignetteOffsetX;
  refDef->vignetteFromVisionSet.offset.v[1] = set->vignetteOffsetY;
  refDef->vignetteFromVisionSet.vignetteImage = NULL;
  v35 = set->vignetteImage.m_assets[0].m_assetIndex;
  if ( v35 )
  {
    v36 = 2i64 * v35;
    if ( s_CG_VisionSet.m_assetNodes[8 * v36 - 4080].m_nextAssetIndex == 1 )
    {
      v3 = *(const GfxImage **)&s_CG_VisionSet.m_assetNodes[8 * v36 - 4072].m_nextAssetIndex;
      refDef->vignetteFromVisionSet.vignetteImage = v3;
    }
  }
  refDef->vignette.vignetteImage = v3;
  refDef->decalVolumes.drawDistance = set->decalVolumeDrawDistance;
  refDef->lightingFraction.bias = set->lightingFractionBias;
}

/*
==============
CG_VisionSetApplyToRefdef_InternalFog
==============
*/
void CG_VisionSetApplyToRefdef_InternalFog(refdef_t *refDef, const visionSetVarsBase_t *set)
{
  float v4; 
  float fogHalfPlaneDistance; 
  float v6; 
  __int128 v8; 
  __int128 v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v33; 
  __int128 v34; 
  __int128 v38; 
  __int128 v39; 
  __int128 v43; 
  float fogHeightFogHalfPlaneDistance; 
  float v47; 
  bool v48; 
  float fogColorIntensity; 
  float fogSunColorIntensity; 
  float fogDensity; 
  __int128 v52; 
  float v55; 
  float fogSunDensity; 
  __int128 v57; 
  float v60; 
  float v61; 
  float v62; 
  unsigned int density[4]; 

  v4 = powf_0(2.0, set->fogInscatteringEv - 2.8399999) * 0.001;
  fogHalfPlaneDistance = set->fogHalfPlaneDistance;
  v6 = 0.0;
  if ( fogHalfPlaneDistance == 0.0 )
  {
    LODWORD(_XMM1) = 0;
  }
  else
  {
    v8 = LODWORD(FLOAT_0_69314718);
    *(float *)&v8 = 0.69314718 / fogHalfPlaneDistance;
    _XMM0 = v8;
    __asm { vmaxss  xmm1, xmm0, xmm11 }
  }
  refDef->fog.startDist = set->fogStartDist;
  refDef->fog.skyDistance = set->fogSkyDistance;
  refDef->fog.maxDistance = set->fogMaxDistance;
  density[0] = _XMM1;
  CG_VisionSetApplyToRefdef_InternalFogSpline(refDef, set, (float *)density);
  refDef->fog.rayleighCoeffs.v[0] = set->fogRayleighAlbedo.v[0];
  refDef->fog.rayleighCoeffs.v[1] = set->fogRayleighAlbedo.v[1];
  refDef->fog.rayleighCoeffs.v[2] = set->fogRayleighAlbedo.v[2];
  GammaToLinearColor_Srgb(&refDef->fog.rayleighCoeffs);
  v10 = density[0];
  v11 = (float)(1.0 - set->fogMieBlendStrength) * *(float *)density;
  refDef->fog.rayleighCoeffs.v[0] = v11 * refDef->fog.rayleighCoeffs.v[0];
  refDef->fog.rayleighCoeffs.v[1] = v11 * refDef->fog.rayleighCoeffs.v[1];
  refDef->fog.rayleighCoeffs.v[2] = v11 * refDef->fog.rayleighCoeffs.v[2];
  refDef->fog.mieCoeffs.v[0] = set->fogMieAlbedo.v[0];
  refDef->fog.mieCoeffs.v[1] = set->fogMieAlbedo.v[1];
  refDef->fog.mieCoeffs.v[2] = set->fogMieAlbedo.v[2];
  GammaToLinearColor_Srgb(&refDef->fog.mieCoeffs);
  v13 = v10;
  *(float *)&v13 = *(float *)&v10 * set->fogMieBlendStrength;
  v12 = v13;
  *(float *)&v13 = *(float *)&v13 * refDef->fog.mieCoeffs.v[0];
  v14 = v13;
  refDef->fog.mieCoeffs.v[0] = *(float *)&v13;
  v16 = v12;
  *(float *)&v16 = *(float *)&v12 * refDef->fog.mieCoeffs.v[1];
  v15 = v16;
  refDef->fog.mieCoeffs.v[1] = *(float *)&v16;
  v18 = v12;
  *(float *)&v18 = *(float *)&v12 * refDef->fog.mieCoeffs.v[2];
  v17 = v18;
  refDef->fog.mieCoeffs.v[2] = *(float *)&v18;
  *(float *)&v12 = set->fogExtinctionDesaturation;
  v19 = *(float *)&v12 * *(float *)&v10;
  v20 = 1.0 - *(float *)&v12;
  v21 = v14;
  *(float *)&v21 = (float)(*(float *)&v14 + refDef->fog.rayleighCoeffs.v[0]) * (float)(1.0 - *(float *)&v12);
  v22 = v21;
  v24 = v15;
  *(float *)&v24 = *(float *)&v15 + refDef->fog.rayleighCoeffs.v[1];
  v23 = v24;
  v26 = v22;
  *(float *)&v26 = *(float *)&v22 + v19;
  _XMM2 = v26;
  v28 = v23;
  *(float *)&v28 = *(float *)&v23 * v20;
  v27 = v28;
  v30 = v17;
  *(float *)&v30 = *(float *)&v17 + refDef->fog.rayleighCoeffs.v[2];
  v29 = v30;
  __asm { vmaxss  xmm9, xmm2, xmm10 }
  v33 = v27;
  *(float *)&v33 = *(float *)&v27 + v19;
  _XMM2 = v33;
  v34 = v29;
  __asm { vmaxss  xmm8, xmm2, xmm10 }
  *(float *)&v34 = (float)(*(float *)&v29 * v20) + v19;
  _XMM2 = v34;
  refDef->fog.rayleighCoeffs.v[0] = (float)(v4 / *(float *)&_XMM9) * refDef->fog.rayleighCoeffs.v[0];
  refDef->fog.rayleighCoeffs.v[1] = (float)(v4 / *(float *)&_XMM8) * refDef->fog.rayleighCoeffs.v[1];
  __asm { vmaxss  xmm5, xmm2, xmm10 }
  refDef->fog.rayleighCoeffs.v[2] = (float)(v4 / *(float *)&_XMM5) * refDef->fog.rayleighCoeffs.v[2];
  refDef->fog.mieCoeffs.v[0] = (float)(v4 / *(float *)&_XMM9) * refDef->fog.mieCoeffs.v[0];
  refDef->fog.mieCoeffs.v[1] = (float)(v4 / *(float *)&_XMM8) * refDef->fog.mieCoeffs.v[1];
  refDef->fog.mieCoeffs.v[2] = (float)(v4 / *(float *)&_XMM5) * refDef->fog.mieCoeffs.v[2];
  *(float *)&_XMM2 = 1.442695 * refDef->fog.maxDistance;
  refDef->fog.maxOpticalDepth.v[0] = *(float *)&_XMM2 * *(float *)&_XMM9;
  refDef->fog.maxOpticalDepth.v[1] = *(float *)&_XMM8 * *(float *)&_XMM2;
  refDef->fog.maxOpticalDepth.v[2] = *(float *)&_XMM5 * *(float *)&_XMM2;
  refDef->fog.mieAnisotropy = set->fogMieAnisotropy;
  v38 = LODWORD(set->fogSunDir.v[0]);
  v39 = v38;
  *(float *)&v39 = fsqrt((float)((float)(*(float *)&v38 * *(float *)&v38) + (float)(set->fogSunDir.v[1] * set->fogSunDir.v[1])) + (float)(set->fogSunDir.v[2] * set->fogSunDir.v[2]));
  _XMM4 = v39;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm13, xmm0
  }
  refDef->fog.sunDir.v[0] = *(float *)&v38 * (float)(1.0 / *(float *)&_XMM0);
  refDef->fog.sunDir.v[1] = (float)(1.0 / *(float *)&_XMM0) * set->fogSunDir.v[1];
  refDef->fog.sunDir.v[2] = (float)(1.0 / *(float *)&_XMM0) * set->fogSunDir.v[2];
  *(float *)&_XMM4 = 0.017453292 * set->fogSkyMinAngle;
  v43 = LODWORD(FLOAT_0_017453292);
  *(float *)&v43 = (float)(0.017453292 * set->fogSkyMaxAngle) - *(float *)&_XMM4;
  _XMM2 = v43;
  __asm { vmaxss  xmm3, xmm2, xmm10 }
  *(float *)&v27 = (float)(1.0 / *(float *)&_XMM3) * -1.5707964;
  refDef->fog.skyFalloffScale = *(float *)&v27;
  refDef->fog.skyFalloffBias = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(1.0 / *(float *)&_XMM3) * *(float *)&_XMM4) + *(float *)&v27) ^ _xmm);
  refDef->fog.heightFogBaseHeight = set->fogHeightFogBaseHeight;
  fogHeightFogHalfPlaneDistance = set->fogHeightFogHalfPlaneDistance;
  if ( fogHeightFogHalfPlaneDistance <= 0.0 )
    v47 = 0.0;
  else
    v47 = 0.69314718 / fogHeightFogHalfPlaneDistance;
  refDef->fog.heightFogDenstiy = v47;
  refDef->fog.heightFogMaximumOffset = set->fogHeightFogMaximumOffset;
  refDef->fog.heightFogAdditionalFog = set->fogHeightFogAdditionalFog;
  v48 = set->fogAtmosphericScattering > 0.0;
  refDef->fog.useAtmosphericScattering = v48;
  if ( !v48 )
  {
    refDef->fog.rayleighCoeffs.v[0] = set->fogColor.v[0];
    refDef->fog.rayleighCoeffs.v[1] = set->fogColor.v[1];
    refDef->fog.rayleighCoeffs.v[2] = set->fogColor.v[2];
    GammaToLinearColor_Srgb(&refDef->fog.rayleighCoeffs);
    fogColorIntensity = set->fogColorIntensity;
    refDef->fog.rayleighCoeffs.v[0] = fogColorIntensity * refDef->fog.rayleighCoeffs.v[0];
    refDef->fog.rayleighCoeffs.v[1] = fogColorIntensity * refDef->fog.rayleighCoeffs.v[1];
    refDef->fog.rayleighCoeffs.v[2] = fogColorIntensity * refDef->fog.rayleighCoeffs.v[2];
    refDef->fog.mieCoeffs.v[0] = set->fogSunColor.v[0];
    refDef->fog.mieCoeffs.v[1] = set->fogSunColor.v[1];
    refDef->fog.mieCoeffs.v[2] = set->fogSunColor.v[2];
    GammaToLinearColor_Srgb(&refDef->fog.mieCoeffs);
    fogSunColorIntensity = set->fogSunColorIntensity;
    refDef->fog.mieCoeffs.v[0] = fogSunColorIntensity * refDef->fog.mieCoeffs.v[0];
    refDef->fog.mieCoeffs.v[1] = fogSunColorIntensity * refDef->fog.mieCoeffs.v[1];
    refDef->fog.mieCoeffs.v[2] = fogSunColorIntensity * refDef->fog.mieCoeffs.v[2];
    refDef->fog.maxDistance = set->fogMaxOpacity;
    refDef->fog.skyDistance = set->fogSkyIntensity * set->fogMaxOpacity;
    fogDensity = set->fogDensity;
    if ( fogDensity == 0.0 )
    {
      v55 = 0.0;
    }
    else
    {
      v52 = LODWORD(FLOAT_0_69314718);
      *(float *)&v52 = (float)(0.69314718 / fogDensity) - 0.0000099999997;
      _XMM1 = v52;
      __asm { vmaxss  xmm1, xmm1, xmm11 }
      v55 = *(float *)&_XMM1 * 1.442695;
    }
    refDef->fog.maxOpticalDepth.v[0] = v55;
    fogSunDensity = set->fogSunDensity;
    if ( fogSunDensity != 0.0 )
    {
      v57 = LODWORD(FLOAT_0_69314718);
      *(float *)&v57 = (float)(0.69314718 / fogSunDensity) - 0.0000099999997;
      _XMM1 = v57;
      __asm { vmaxss  xmm1, xmm1, xmm11 }
      v6 = *(float *)&_XMM1 * 1.442695;
    }
    refDef->fog.maxOpticalDepth.v[1] = v6;
    refDef->fog.maxOpticalDepth.v[2] = 0.0;
    refDef->fog.heightFogDenstiy = 0.0;
    refDef->fog.mieAnisotropy = 1.0 - set->fogMaxOpacity;
    v60 = cosf_0(0.017453292 * set->fogSunBeginFadeAngle);
    v61 = cosf_0(0.017453292 * set->fogSunEndFadeAngle);
    if ( v60 <= v61 )
      v62 = FLOAT_100_0;
    else
      v62 = 1.0 / (float)(v60 - v61);
    refDef->fog.sunFalloffBias = COERCE_FLOAT(COERCE_UNSIGNED_INT(v62 * v61) ^ _xmm);
    refDef->fog.sunFalloffScale = v62;
  }
}

/*
==============
CG_VisionSetApplyToRefdef_InternalFogSpline
==============
*/
void CG_VisionSetApplyToRefdef_InternalFogSpline(refdef_t *refDef, const visionSetVarsBase_t *set, float *density)
{
  cg_t *LocalClientGlobals; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int64 v10; 
  unsigned __int8 m_weight; 
  __int64 v12; 
  __int64 v13; 
  float fogStartDist; 
  float fogHalfPlaneDistance; 
  float fogMaxDistance; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v22; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)refDef->localClientNum);
  if ( LocalClientGlobals && LocalClientGlobals->cvsData.archived.visionBlends[0].lerpInfo.type == VISIONSETBLENDTYPE_OFF )
  {
    refDef->fog.fogSplineBlendEntry[0].weight = -1;
    refDef->fog.fogSplineBlendEntry[0].data.fogStartDist = set->fogStartDist;
    refDef->fog.fogSplineBlendEntry[0].data.fogHalfPlaneDistance = set->fogHalfPlaneDistance;
    refDef->fog.fogSplineBlendEntry[0].data.fogMaxDistance = set->fogMaxDistance;
    refDef->fog.fogSplineBlendEntry[0].image = R_FogSplineLive_GetImage();
    refDef->fog.fogSplineBlendCount = 1;
  }
  else
  {
    if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 692, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
      __debugbreak();
    LODWORD(_XMM6) = 0;
    v7 = 0i64;
    v8 = 0i64;
    v9 = 0i64;
    v10 = 0i64;
    do
    {
      m_weight = set->fogSpline.m_assets[v10].m_weight;
      if ( !m_weight )
        break;
      v12 = 2i64 * set->fogSpline.m_assets[v10].m_assetIndex;
      if ( (unsigned int)v10 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 707, ASSERT_TYPE_ASSERT, "(fogSplineBlendCount < ( sizeof( *array_counter( refDef->fog.fogSplineBlendEntry ) ) + 0 ))", (const char *)&queryFormat, "fogSplineBlendCount < ARRAY_COUNT( refDef->fog.fogSplineBlendEntry )") )
        __debugbreak();
      refDef->fog.fogSplineBlendEntry[v10].weight = m_weight;
      if ( s_CG_VisionSet.m_assetNodes[8 * v12 - 4080].m_nextAssetIndex == 3 )
      {
        v13 = *(_QWORD *)&s_CG_VisionSet.m_assetNodes[8 * v12 - 4072].m_nextAssetIndex;
        *(double *)&refDef->fog.fogSplineBlendEntry[v10].data.fogStartDist = *(double *)(v13 + 16);
        refDef->fog.fogSplineBlendEntry[v10].data.fogMaxDistance = *(float *)(v13 + 24);
        fogStartDist = refDef->fog.fogSplineBlendEntry[v10].data.fogStartDist;
        fogHalfPlaneDistance = refDef->fog.fogSplineBlendEntry[v10].data.fogHalfPlaneDistance;
        fogMaxDistance = refDef->fog.fogSplineBlendEntry[v10].data.fogMaxDistance;
        refDef->fog.fogSplineBlendEntry[v10].image = *(const GfxImage **)(*(_QWORD *)&s_CG_VisionSet.m_assetNodes[8 * v12 - 4072].m_nextAssetIndex + 8i64);
      }
      else
      {
        fogStartDist = set->fogStartDist;
        refDef->fog.fogSplineBlendEntry[v10].data.fogStartDist = fogStartDist;
        fogHalfPlaneDistance = set->fogHalfPlaneDistance;
        refDef->fog.fogSplineBlendEntry[v10].data.fogHalfPlaneDistance = fogHalfPlaneDistance;
        fogMaxDistance = set->fogMaxDistance;
        refDef->fog.fogSplineBlendEntry[v10].data.fogMaxDistance = fogMaxDistance;
        refDef->fog.fogSplineBlendEntry[v10].image = rgp.zero1DImage;
      }
      v10 = (unsigned int)(v10 + 1);
      v17 = (float)m_weight * 0.0039215689;
      v18 = v7;
      *(float *)&v18 = *(float *)&v7 + (float)(fogStartDist * v17);
      v7 = v18;
      v19 = v9;
      *(float *)&v19 = *(float *)&v9 + (float)(fogMaxDistance * v17);
      v9 = v19;
      v20 = v8;
      *(float *)&v20 = *(float *)&v8 + (float)(fogHalfPlaneDistance * v17);
      v8 = v20;
    }
    while ( (_DWORD)v10 != 9 );
    refDef->fog.startDist = *(float *)&v7;
    refDef->fog.maxDistance = *(float *)&v9;
    if ( *(float *)&v8 != 0.0 )
    {
      v22 = LODWORD(FLOAT_0_69314718);
      *(float *)&v22 = 0.69314718 / *(float *)&v8;
      _XMM1 = v22;
      __asm { vmaxss  xmm6, xmm1, xmm6 }
    }
    *density = *(float *)&_XMM6;
    truncate_store<unsigned char,unsigned int>(&refDef->fog.fogSplineBlendCount, v10);
  }
}

/*
==============
CG_VisionSetApplyTokenToField
==============
*/
bool CG_VisionSetApplyTokenToField(unsigned int fieldNum, const char *token, visionSetVars_t *settings)
{
  __int64 v3; 
  float *v6; 
  unsigned int v7; 
  bool enabled; 
  int v9; 
  const char *UnobfuscatedName; 
  float value; 
  float v12; 
  double v13; 
  const char *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  double v20; 
  const char *v21; 
  float v22; 
  float v23; 
  cg_t *LocalClientGlobals; 
  VisionSetAssetType v25; 
  const char *v26; 
  char *name; 
  bool result; 
  char *fmt; 
  __int64 v30; 
  int v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 

  v3 = fieldNum;
  if ( fieldNum > 0xDA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 318, ASSERT_TYPE_ASSERT, "( fieldNum ) <= ( ( sizeof( *array_counter( visionDefFields ) ) + 0 ) )", "fieldNum not in [0, ARRAY_COUNT( visionDefFields )]\n\t%u not in [0, %u]", fieldNum, 218) )
    __debugbreak();
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 319, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !settings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 320, ASSERT_TYPE_ASSERT, "(settings)", (const char *)&queryFormat, "settings") )
    __debugbreak();
  v6 = (float *)((char *)&settings->r_primaryLightTweakDiffuseStrength + visionDefFields[v3].offset);
  bitarray_base<bitarray<224>>::resetBit(&settings->inUse, v3);
  switch ( visionDefFields[v3].fieldType )
  {
    case FTYPE_BOOL:
      v7 = j_sscanf(token, "%i", &v31);
      enabled = v7 == 1;
      if ( v7 > 1 )
      {
        v9 = v31;
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(visionDefFields[v3].name);
        LODWORD(v30) = 1;
        LODWORD(fmt) = v9;
        Com_PrintError(1, "Vision file %s has value for %s of %d outside of the range [%d, %d]\n", settings->name, UnobfuscatedName, fmt, 0i64, v30);
        enabled = visionDefFields[v3].def.enabled;
      }
      if ( !enabled )
        goto LABEL_38;
      *(_BYTE *)v6 = v31 != 0;
      goto LABEL_41;
    case FTYPE_FLOAT:
      if ( j_sscanf(token, "%f", &v32) != 1 )
        goto LABEL_38;
      value = visionDefFields[v3].min.value;
      v12 = v32;
      if ( v32 < value || v32 > visionDefFields[v3].max.value )
      {
        v13 = visionDefFields[v3].max.value;
        v14 = Dvar_DevGetUnobfuscatedName(visionDefFields[v3].name);
        Com_PrintError(1, "Vision file %s has value for %s of %f outside of the range [%f, %f]\n", settings->name, v14, v12, value, v13);
        v12 = visionDefFields[v3].def.value;
        v32 = v12;
      }
      *v6 = v12;
      goto LABEL_41;
    case FTYPE_VEC3:
      if ( j_sscanf(token, "%f %f %f", &v33, &v34, &v35) != 3 )
        goto LABEL_38;
      v15 = v33;
      v16 = v35;
      v17 = v34;
      v18 = visionDefFields[v3].min.value;
      if ( v33 < v18 || (v19 = visionDefFields[v3].max.value, v33 > v19) || v34 < v18 || v34 > v19 || v35 < v18 || v35 > v19 )
      {
        v20 = visionDefFields[v3].max.value;
        v21 = Dvar_DevGetUnobfuscatedName(visionDefFields[v3].name);
        Com_PrintError(1, "Vision file %s has value for %s of { %f, %f, %f } outside of the range [%f, %f]\n", settings->name, v21, v15, v17, v16, v18, v20);
        v15 = visionDefFields[v3].def.value;
        v22 = visionDefFields[v3].def.vector.v[1];
        v23 = visionDefFields[v3].def.vector.v[2];
        v33 = v15;
        v34 = v22;
        v35 = v23;
      }
      *v6 = v15;
      v6[1] = v34;
      v6[2] = v35;
      goto LABEL_41;
    case FTYPE_IMAGESET:
      v25 = VISION_SET_ASSET_TYPE_IMAGE;
      goto LABEL_36;
    case FTYPE_CLUTSET:
      v25 = VISION_SET_ASSET_TYPE_GRADING_CLUT;
LABEL_36:
      v26 = token;
      name = settings->name;
      goto LABEL_37;
    case FTYPE_FOGSPLINESET:
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      if ( LocalClientGlobals && settings == &LocalClientGlobals->cvsData.archived.visionLeaves[1] && R_FogSplineLive_ProcessToken(token) )
      {
        v25 = VISION_SET_ASSET_TYPE_FOG_SPLINE;
        v26 = (char *)&queryFormat.fmt + 3;
        name = settings->name;
      }
      else
      {
        v25 = VISION_SET_ASSET_TYPE_FOG_SPLINE;
        name = settings->name;
        v26 = settings->name;
      }
LABEL_37:
      if ( CG_VisionSet_AssetBlendSet_Load((CG_VisionSet_AssetBlendSet *)v6, v25, v26, name, visionDefFields[v3].name) )
        goto LABEL_41;
LABEL_38:
      result = 0;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 416, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported token type") )
        __debugbreak();
LABEL_41:
      bitarray_base<bitarray<224>>::setBit(&settings->inUse, v3);
      result = 1;
      break;
  }
  return result;
}

/*
==============
CG_VisionSetGetAssetHash
==============
*/
__int64 CG_VisionSetGetAssetHash(const VisionSetAssetKey *key)
{
  const char *m_name; 
  __int64 result; 
  int i; 

  m_name = key->m_name;
  result = (unsigned __int8)key->m_type;
  for ( i = *m_name; *m_name; i = *m_name )
  {
    ++m_name;
    result = (unsigned int)(i + 33 * result);
  }
  return result;
}

/*
==============
CG_VisionSetGetAssetName
==============
*/
const char *CG_VisionSetGetAssetName(const CG_VisionSet_Asset *asset)
{
  if ( !asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 129, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
    __debugbreak();
  switch ( asset->m_type )
  {
    case VISION_SET_ASSET_TYPE_IDENTITY:
      return "(identity)";
    case VISION_SET_ASSET_TYPE_IMAGE:
      if ( !asset->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 139, ASSERT_TYPE_ASSERT, "(asset->m_header.image)", (const char *)&queryFormat, "asset->m_header.image") )
        __debugbreak();
      break;
    case VISION_SET_ASSET_TYPE_GRADING_CLUT:
      if ( !asset->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 144, ASSERT_TYPE_ASSERT, "(asset->m_header.gradingClut)", (const char *)&queryFormat, "asset->m_header.gradingClut") )
        goto LABEL_10;
      break;
    case VISION_SET_ASSET_TYPE_FOG_SPLINE:
      if ( !asset->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 150, ASSERT_TYPE_ASSERT, "(asset->m_header.fogSpline)", (const char *)&queryFormat, "asset->m_header.fogSpline") )
      {
LABEL_10:
        __debugbreak();
        return asset->m_header.physicsLibrary->name;
      }
      break;
    default:
      return 0i64;
  }
  return asset->m_header.physicsLibrary->name;
}

/*
==============
CG_VisionSetGetVisionSet
==============
*/
bool CG_VisionSetGetVisionSet(const char *name, visionSetVars_t *resultSettings)
{
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 577, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !*name )
    return 0;
  if ( !resultSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 581, ASSERT_TYPE_ASSERT, "(resultSettings)", (const char *)&queryFormat, "resultSettings") )
    __debugbreak();
  return CG_VisionSetLoadVisionFile(name, resultSettings);
}

/*
==============
CG_VisionSetGetXAssetType
==============
*/
__int64 CG_VisionSetGetXAssetType(VisionSetAssetType visionSetAssetType)
{
  switch ( visionSetAssetType )
  {
    case VISION_SET_ASSET_TYPE_IMAGE:
      return 15i64;
    case VISION_SET_ASSET_TYPE_GRADING_CLUT:
      return 31i64;
    case VISION_SET_ASSET_TYPE_FOG_SPLINE:
      return 33i64;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 114, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid vision set asset type\n") )
    __debugbreak();
  return 113i64;
}

/*
==============
CG_VisionSetLoadVisionFile
==============
*/
__int64 CG_VisionSetLoadVisionFile(const char *name, visionSetVars_t *resultSettings)
{
  char *m_ptr; 
  __int64 v5; 
  char *v6; 
  const char *v7; 
  char v8; 
  char v9; 
  const char *RawTextFile; 
  Mem_LargeLocal v13; 
  char dest[64]; 

  Mem_LargeLocal::Mem_LargeLocal(&v13, 0x18000ui64, "max_raw_buf buf");
  m_ptr = (char *)v13.m_ptr;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 557, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4, -2i64) )
    __debugbreak();
  if ( !resultSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 558, ASSERT_TYPE_ASSERT, "(resultSettings)", (const char *)&queryFormat, "resultSettings") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  v6 = resultSettings->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( resultSettings == (visionSetVars_t *)-1080i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = (const char *)(name - v6);
  while ( 1 )
  {
    v8 = v6[(_QWORD)v7];
    v9 = *v6++;
    if ( !v5-- )
    {
LABEL_17:
      LOBYTE(RawTextFile) = 1;
      goto LABEL_18;
    }
    if ( v8 != v9 )
      break;
    if ( !v8 )
      goto LABEL_17;
  }
  Com_sprintf(dest, 0x40ui64, (const char *)&queryFormat, name);
  RawTextFile = Com_LoadRawTextFile(dest, m_ptr, 98304);
  if ( RawTextFile || (Com_PrintError(17, "couldn't open '%s'.\n", dest), (RawTextFile = Com_LoadRawTextFile("vision/default.vision", m_ptr, 98304)) != NULL) )
  {
    Profile_Begin(141);
    LOBYTE(RawTextFile) = CG_VisionSetLoadVisionSettingsFromBuffer(RawTextFile, name, resultSettings);
    Profile_EndInternal(NULL);
  }
  else
  {
    Com_PrintError(17, "couldn't open '%s'. This is a default file that you should have.\n", dest);
  }
LABEL_18:
  Mem_LargeLocal::~Mem_LargeLocal(&v13);
  return (unsigned __int8)RawTextFile;
}

/*
==============
CG_VisionSetLoadVisionSettingsFromBuffer
==============
*/
char CG_VisionSetLoadVisionSettingsFromBuffer(const char *buffer, const char *filename, visionSetVars_t *settings)
{
  bool v5; 
  const char *i; 
  unsigned int v7; 
  char *v8; 
  visField_t *v9; 
  const char *name; 
  __int64 v11; 
  signed __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  const char *UnobfuscatedName; 
  signed __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  int v23; 
  int v24; 
  const char *v25; 
  int v26; 
  const char **v27; 
  const char *v28; 
  __int64 v29; 
  signed __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  int v35; 
  char *data_p; 
  visionSetVars_t *settingsa; 
  char v39[224]; 

  data_p = (char *)buffer;
  settingsa = settings;
  v5 = I_stricmp(filename, "Rembrandt") == 0;
  if ( !settings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 484, ASSERT_TYPE_ASSERT, "(settings)", (const char *)&queryFormat, "settings", data_p, settingsa) )
    __debugbreak();
  if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 486, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
    __debugbreak();
  settings->assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  memset_0(v39, 0, 0xDAui64);
  Core_strcpy(settings->name, 0x40ui64, filename);
  *(_QWORD *)settings->inUse.array = 0i64;
  *(_QWORD *)&settings->inUse.array[2] = 0i64;
  *(_QWORD *)&settings->inUse.array[4] = 0i64;
  settings->inUse.array[6] = 0;
  Com_BeginParseSession(filename);
  for ( i = Com_Parse((const char **)&data_p); *i; i = Com_Parse((const char **)&data_p) )
  {
    v7 = 0;
    v8 = v39;
    v9 = visionDefFields;
    while ( 2 )
    {
      name = v9->name;
      if ( v5 )
        name = Dvar_DevGetUnobfuscatedName(v9->name);
      v11 = 0x7FFFFFFFi64;
      if ( *v8 )
      {
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v12 = i - name;
        do
        {
          v13 = (unsigned __int8)name[v12];
          v14 = v11;
          v15 = *(unsigned __int8 *)name++;
          --v11;
          if ( !v14 )
            break;
          if ( v13 != v15 )
          {
            v16 = v13 + 32;
            if ( (unsigned int)(v13 - 65) > 0x19 )
              v16 = v13;
            v13 = v16;
            v17 = v15 + 32;
            if ( (unsigned int)(v15 - 65) > 0x19 )
              v17 = v15;
            if ( v13 != v17 )
              goto LABEL_39;
          }
        }
        while ( v13 );
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(i);
        Com_PrintWarning(16, "WARNING: duplicate field '%s' in file '%s'.  Discarding.\n", UnobfuscatedName, filename);
      }
      else
      {
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v19 = i - name;
        while ( 1 )
        {
          v20 = (unsigned __int8)name[v19];
          v21 = v11;
          v22 = *(unsigned __int8 *)name++;
          --v11;
          if ( !v21 )
          {
LABEL_37:
            v25 = Com_ParseOnLine((const char **)&data_p);
            if ( CG_VisionSetApplyTokenToField(v7, v25, settingsa) )
              v39[v7] = 1;
            else
              Com_PrintWarning(16, "WARNING: malformed field '%s' in file '%s'\n", v25, filename);
            goto $next_var;
          }
          if ( v20 != v22 )
          {
            v23 = v20 + 32;
            if ( (unsigned int)(v20 - 65) > 0x19 )
              v23 = v20;
            v20 = v23;
            v24 = v22 + 32;
            if ( (unsigned int)(v22 - 65) > 0x19 )
              v24 = v22;
            if ( v20 != v24 )
              break;
          }
          if ( !v20 )
            goto LABEL_37;
        }
LABEL_39:
        ++v7;
        ++v9;
        ++v8;
        if ( v7 < 0xDA )
          continue;
        v26 = 0;
        if ( visionDefFieldsNotInUseCount <= 0 )
        {
LABEL_56:
          Com_PrintWarning(16, "WARNING: unknown field '%s' in file '%s'\n", i, filename);
        }
        else
        {
          v27 = visionDefFieldsNotInUse;
LABEL_42:
          v28 = *v27;
          v29 = 0x7FFFFFFFi64;
          if ( !*v27 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v30 = i - v28;
          do
          {
            v31 = (unsigned __int8)v28[v30];
            v32 = v29;
            v33 = *(unsigned __int8 *)v28++;
            --v29;
            if ( !v32 )
              break;
            if ( v31 != v33 )
            {
              v34 = v31 + 32;
              if ( (unsigned int)(v31 - 65) > 0x19 )
                v34 = v31;
              v31 = v34;
              v35 = v33 + 32;
              if ( (unsigned int)(v33 - 65) > 0x19 )
                v35 = v33;
              if ( v31 != v35 )
              {
                ++v26;
                ++v27;
                if ( v26 < visionDefFieldsNotInUseCount )
                  goto LABEL_42;
                goto LABEL_56;
              }
            }
          }
          while ( v31 );
        }
      }
      break;
    }
$next_var:
    Com_SkipRestOfLine((const char **)&data_p);
  }
  Com_EndParseSession();
  return 1;
}

/*
==============
CG_VisionSet_AssetBlendSet_Load
==============
*/
bool CG_VisionSet_AssetBlendSet_Load(CG_VisionSet_AssetBlendSet *outAssetBlendSet, const VisionSetAssetType assetType, const char *assetName, const char *visionsetName, const char *fieldName)
{
  unsigned __int8 AssetIndex; 
  const char *UnobfuscatedName; 
  bool result; 

  if ( !assetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 274, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
    __debugbreak();
  if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 275, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
    __debugbreak();
  AssetIndex = CG_VisionSet_LoadAssetIndex(assetType, assetName);
  if ( AssetIndex == 0xFF )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(fieldName);
    Com_PrintError(1, "Vision file '%s' references missing '%s' asset: %s\n", visionsetName, UnobfuscatedName, assetName);
    return 0;
  }
  else
  {
    outAssetBlendSet->m_assets[0].m_assetIndex = AssetIndex;
    result = 1;
    outAssetBlendSet->m_assets[0].m_weight = -1;
    outAssetBlendSet->m_assets[1].m_weight = 0;
  }
  return result;
}

/*
==============
CG_VisionSet_FixupAssetIndices
==============
*/
void CG_VisionSet_FixupAssetIndices(visionSetVarsBase_t *vision, const unsigned __int8 *oldToNewAssetIndexMap, unsigned int oldAssetCount)
{
  int i; 
  CG_VisionSet_AssetBlend *v7; 
  unsigned int m_assetIndex; 
  unsigned int v9; 
  int v10; 
  CG_VisionSet_AssetBlend *v11; 
  unsigned int v12; 

  for ( i = 0; i != 9; ++i )
  {
    v7 = &vision->clutSet.m_assets[i];
    if ( !vision->clutSet.m_assets[i].m_weight )
      break;
    m_assetIndex = v7->m_assetIndex;
    if ( m_assetIndex >= oldAssetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 1146, ASSERT_TYPE_ASSERT, "(oldAssetIndex < oldAssetCount)", (const char *)&queryFormat, "oldAssetIndex < oldAssetCount") )
      __debugbreak();
    v7->m_assetIndex = oldToNewAssetIndexMap[(unsigned __int8)m_assetIndex];
  }
  v9 = vision->thermalRadiationLut.m_assets[0].m_assetIndex;
  v10 = 0;
  if ( v9 >= oldAssetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 1155, ASSERT_TYPE_ASSERT, "(oldAssetIndex < oldAssetCount)", (const char *)&queryFormat, "oldAssetIndex < oldAssetCount") )
    __debugbreak();
  vision->thermalRadiationLut.m_assets[0].m_assetIndex = oldToNewAssetIndexMap[(unsigned __int8)v9];
  do
  {
    v11 = &vision->fogSpline.m_assets[v10];
    if ( !vision->fogSpline.m_assets[v10].m_weight )
      break;
    v12 = v11->m_assetIndex;
    if ( v12 >= oldAssetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 1169, ASSERT_TYPE_ASSERT, "(oldAssetIndex < oldAssetCount)", (const char *)&queryFormat, "oldAssetIndex < oldAssetCount") )
      __debugbreak();
    ++v10;
    v11->m_assetIndex = oldToNewAssetIndexMap[(unsigned __int8)v12];
  }
  while ( v10 != 9 );
  vision->assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
}

/*
==============
CG_VisionSet_GetColorGradingClutSet
==============
*/
void CG_VisionSet_GetColorGradingClutSet(GfxColorGradingClutSet *outColorGradingClutSet, const CG_VisionSet_AssetBlendSet *visionsetAssetBlendSet)
{
  unsigned __int8 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  unsigned __int8 m_weight; 
  unsigned __int8 m_assetIndex; 
  char v9; 
  unsigned __int8 v10; 
  const CG_VisionSet_AssetBlendSet *v11; 

  v11 = visionsetAssetBlendSet;
  if ( !s_CG_VisionSet.m_wasReset )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 590, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
      __debugbreak();
    visionsetAssetBlendSet = v11;
  }
  v3 = 0;
  v4 = 0i64;
  v5 = 0;
  v6 = 0;
  do
  {
    m_weight = visionsetAssetBlendSet->m_assets[v6].m_weight;
    if ( !m_weight )
      break;
    m_assetIndex = visionsetAssetBlendSet->m_assets[v6].m_assetIndex;
    v9 = 0;
    v5 += m_weight;
    if ( m_assetIndex )
    {
      if ( (unsigned int)v4 >= 8 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 608, ASSERT_TYPE_ASSERT, "(colorGradingClutCount < ( sizeof( *array_counter( outColorGradingClutSet->m_clutArray ) ) + 0 ))", (const char *)&queryFormat, "colorGradingClutCount < ARRAY_COUNT( outColorGradingClutSet->m_clutArray )") )
          __debugbreak();
        visionsetAssetBlendSet = v11;
      }
      if ( s_CG_VisionSet.m_assetNodes[16 * m_assetIndex - 4080].m_nextAssetIndex == 2 )
      {
        v9 = 1;
        outColorGradingClutSet->m_clutArray[v4] = *(const GfxGradingClut **)&s_CG_VisionSet.m_assetNodes[16 * m_assetIndex - 4072].m_nextAssetIndex;
        outColorGradingClutSet->m_weights[v4] = m_weight;
        v4 = (unsigned int)(v4 + 1);
      }
    }
    ++v6;
    v10 = v3 + m_weight;
    if ( v9 )
      v10 = v3;
    v3 = v10;
  }
  while ( v6 != 9 );
  truncate_store<unsigned char,unsigned int>(&outColorGradingClutSet->m_clutCount, v4);
  if ( (_DWORD)v4 )
  {
    if ( v5 != 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 632, ASSERT_TYPE_ASSERT, "(weightTotal == VISIONSET_ASSET_WEIGHT_ONE)", (const char *)&queryFormat, "weightTotal == VISIONSET_ASSET_WEIGHT_ONE") )
      __debugbreak();
    outColorGradingClutSet->m_identityWeight = v3;
  }
  else
  {
    outColorGradingClutSet->m_identityWeight = -1;
  }
}

/*
==============
CG_VisionSet_LoadAssetIndex
==============
*/
unsigned __int8 CG_VisionSet_LoadAssetIndex(VisionSetAssetType assetType, const char *assetName)
{
  int v2; 
  const char *v3; 
  int v5; 
  unsigned int v6; 
  unsigned __int8 result; 
  int v8; 
  int v9; 
  XAssetType v10; 
  unsigned __int8 m_assetCount; 
  __int128 v12; 
  __int64 v13; 
  unsigned __int8 headNodeIndex; 
  __int64 v15; 
  const char *v16; 
  __int128 v17; 
  VisionSetAssetKey *key; 

  LOBYTE(v2) = *assetName;
  v3 = assetName;
  if ( !*assetName )
    return 0;
  v2 = (char)v2;
  v5 = (unsigned __int8)assetType;
  v6 = (unsigned __int8)assetType;
  LOBYTE(v15) = assetType;
  v16 = assetName;
  if ( (_BYTE)v2 )
  {
    do
    {
      ++assetName;
      v6 = v2 + 33 * v6;
      v2 = *assetName;
    }
    while ( *assetName );
  }
  key = (VisionSetAssetKey *)&v15;
  result = IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey *>(&s_CG_VisionSet.m_assetMap, &key, v6, s_CG_VisionSet.m_assetMap.buckets, 0x3FFu, s_CG_VisionSet.m_assetNodes);
  if ( result == 0xFF )
  {
    LOBYTE(v17) = assetType;
    v8 = v5 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = ASSET_TYPE_FOG_SPLINE;
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 114, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid vision set asset type\n") )
            __debugbreak();
          v10 = ASSET_TYPE_COUNT;
        }
      }
      else
      {
        v10 = ASSET_TYPE_GRADING_CLUT;
      }
    }
    else
    {
      v10 = ASSET_TYPE_IMAGE;
    }
    *((XAssetHeader *)&v17 + 1) = DB_FindXAssetHeader(v10, v3, 0);
    if ( *((_QWORD *)&v17 + 1) )
    {
      m_assetCount = s_CG_VisionSet.m_assetCount;
      if ( s_CG_VisionSet.m_assetCount == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 260, ASSERT_TYPE_ASSERT, "(assetIndex < ( sizeof( *array_counter( s_CG_VisionSet.m_assetNodes ) ) + 0 ))", (const char *)&queryFormat, "assetIndex < ARRAY_COUNT( s_CG_VisionSet.m_assetNodes )", v15, v16) )
        __debugbreak();
      s_CG_VisionSet.m_assetCount = m_assetCount + 1;
      key = (VisionSetAssetKey *)&v15;
      if ( IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey *>(&s_CG_VisionSet.m_assetMap, &key, v6, s_CG_VisionSet.m_assetMap.buckets, 0x3FFu, s_CG_VisionSet.m_assetNodes) != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\hash_table.h", 372, ASSERT_TYPE_ASSERT, "(this->Find( key, hash, nodes ) == Base::s_nullNodeIndex)", (const char *)&queryFormat, "this->Find( key, hash, nodes ) == Base::s_nullNodeIndex") )
        __debugbreak();
      v12 = v17;
      v13 = v6 & 0x3FF;
      headNodeIndex = s_CG_VisionSet.m_assetMap.buckets[v13].headNodeIndex;
      s_CG_VisionSet.m_assetMap.buckets[v13].headNodeIndex = m_assetCount;
      s_CG_VisionSet.m_assetNodes[m_assetCount].m_nextAssetIndex = headNodeIndex;
      *(_OWORD *)&s_CG_VisionSet.m_assetNodes[16 * m_assetCount - 4080].m_nextAssetIndex = v12;
      return m_assetCount;
    }
    else
    {
      return -1;
    }
  }
  return result;
}

/*
==============
CG_VisionSet_ResetAssets
==============
*/
void CG_VisionSet_ResetAssets(void)
{
  IWHashTableN<1024,CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher> *p_m_assetMap; 
  __int64 v1; 

  p_m_assetMap = &s_CG_VisionSet.m_assetMap;
  v1 = 16i64;
  do
  {
    *(_QWORD *)&p_m_assetMap->buckets[0].headNodeIndex = -1i64;
    *(_QWORD *)&p_m_assetMap->buckets[8].headNodeIndex = -1i64;
    *(_QWORD *)&p_m_assetMap->buckets[16].headNodeIndex = -1i64;
    p_m_assetMap = (IWHashTableN<1024,CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher> *)((char *)p_m_assetMap + 64);
    *(_QWORD *)&p_m_assetMap[-1].buckets[984].headNodeIndex = -1i64;
    *(_QWORD *)&p_m_assetMap[-1].buckets[992].headNodeIndex = -1i64;
    *(_QWORD *)&p_m_assetMap[-1].buckets[1000].headNodeIndex = -1i64;
    *(_QWORD *)&p_m_assetMap[-1].buckets[1008].headNodeIndex = -1i64;
    *(_QWORD *)&p_m_assetMap[-1].buckets[1016].headNodeIndex = -1i64;
    --v1;
  }
  while ( v1 );
  ++s_CG_VisionSet.m_resetCounter;
  s_CG_VisionSet.m_assetCount = 1;
  s_CG_VisionSet.m_assetArray[0].m_type = VISION_SET_ASSET_TYPE_IDENTITY;
  s_CG_VisionSet.m_assetArray[0].m_header.physicsLibrary = NULL;
  s_CG_VisionSet.m_wasReset = 1;
}

/*
==============
RawBufferOpen
==============
*/
const char *RawBufferOpen(const char *name, const char *formatFullPath, char *buf, int size)
{
  const char *result; 
  char dest[64]; 

  Com_sprintf(dest, 0x40ui64, formatFullPath, name);
  result = Com_LoadRawTextFile(dest, buf, size);
  if ( !result )
  {
    Com_PrintError(17, "couldn't open '%s'.\n", dest);
    result = Com_LoadRawTextFile("vision/default.vision", buf, size);
    if ( !result )
    {
      Com_PrintError(17, "couldn't open '%s'. This is a default file that you should have.\n", dest);
      return 0i64;
    }
  }
  return result;
}

