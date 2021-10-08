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
  const GfxImage *v7; 
  bool v11; 
  bool v24; 
  const GfxGradingClut *v25; 
  char v28; 
  char v29; 
  unsigned __int8 m_assetIndex; 
  bool v31; 
  __int64 v32; 
  char v35; 
  char v39; 
  char v43; 
  char v44; 
  char v45; 
  char v46; 
  char v47; 
  const dvar_t *v52; 
  const dvar_t *v53; 
  char v54; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  const dvar_t *v58; 
  char v64; 
  char v65; 
  unsigned __int8 v78; 
  __int64 v79; 
  GfxColorGradingAnalytical result; 
  GfxColorGradingClutSet outColorGradingClutSet; 
  float v90; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v7 = NULL;
  _RDI = set;
  _RBX = refDef;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v11 = 0;
  if ( full )
  {
    refDef->chromaticAberration = *(GfxChromaticAberration *)&set->chromaRadius;
    if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 642, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
      __debugbreak();
    if ( _RDI->assetTableResetCounter != s_CG_VisionSet.m_resetCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 643, ASSERT_TYPE_ASSERT, "(set->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", (const char *)&queryFormat, "set->assetTableResetCounter == s_CG_VisionSet.m_resetCounter") )
      __debugbreak();
    CG_VisionSet_GetColorGradingClutSet(&outColorGradingClutSet, &_RDI->clutSet);
    _RAX = GfxColorGradingAnalytical_Construct(&result, (const GfxColorGradingAnalytical_Config *)&_RDI->hdrColorizeKeyA_Pos);
    __asm
    {
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rsp+1E8h+var_E8], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups [rsp+1E8h+var_C8], ymm1
      vmovsd  xmm1, qword ptr [rax+60h]
    }
    v90 = _RAX->gain.v[2];
    _RAX = &outColorGradingClutSet;
    __asm
    {
      vmovups [rsp+1E8h+var_A8], ymm0
      vmovsd  [rsp+1E8h+var_88], xmm1
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymm1, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rbx+10CC8h], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+10CE8h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+10D08h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rbx+10D28h], ymm0
      vmovups ymmword ptr [rbx+10D48h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
      vmovups ymmword ptr [rbx+10D68h], ymm1
    }
    if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 657, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
      __debugbreak();
    if ( _RDI->assetTableResetCounter != s_CG_VisionSet.m_resetCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 658, ASSERT_TYPE_ASSERT, "(set->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", (const char *)&queryFormat, "set->assetTableResetCounter == s_CG_VisionSet.m_resetCounter") )
      __debugbreak();
    CG_VisionSet_GetColorGradingClutSet(&outColorGradingClutSet, &_RDI->nvgCLutSet);
    GfxColorGradingAnalytical_Construct(&result, (const GfxColorGradingAnalytical_Config *)&_RDI->hdrColorizeKeyA_Pos);
    v24 = outColorGradingClutSet.m_clutCount == 0;
    v25 = NULL;
    __asm { vmovss  xmm0, cs:__real@3f000000 }
    if ( outColorGradingClutSet.m_clutCount )
      v25 = outColorGradingClutSet.m_clutArray[0];
    _RBX->nvgColorGrading = v25;
    _RBX->lightTweakUVIntensityScale = _RDI->r_lightTweakUVIntensityScale;
    _RBX->rimLighting.rimLightScale = _RDI->r_rimLightScale;
    _RBX->rimLighting.rimLightStartDistance = _RDI->r_rimLightStartDistance;
    _RBX->rimLighting.rimLightDistance = _RDI->r_rimLightDistance;
    _RBX->rimLighting.rimLightFill = _RDI->r_rimLightFill;
    _RBX->rimLighting.EVCompBounds = _RDI->r_EVCompBounds;
    _RBX->rimLighting.EVCompGrayReference = _RDI->r_EVCompGrayReference;
    _RBX->skyBlendAmount = _RDI->r_skyBlendAmount;
    _RBX->skyBlendFeather = _RDI->r_skyBlendFeather;
    _RBX->tonemap.enabled = 1;
    __asm { vcomiss xmm0, dword ptr [rdi+1D8h] }
    _RBX->tonemap.blendExposure = 1;
    _RBX->tonemap.autoExposure = 0;
    __asm
    {
      vcomiss xmm0, dword ptr [rdi+1DCh]
      vmovss  xmm0, cs:__real@3f800000
    }
    _RBX->tonemap.lockAutoExposureAdjust = !v24;
    _RBX->tonemap.userMaxExposure = _RDI->tonemapMaxExposure;
    _RBX->tonemap.userExposure = _RDI->tonemapExposure;
    _RBX->tonemap.userExposureAdjust = _RDI->tonemapExposureAdjust;
    _RBX->tonemap.userAutoExposureAdjust = _RDI->tonemapAutoExposureAdjust;
    _RBX->tonemap.adaptSpeed = _RDI->tonemapAdaptSpeed;
    _RBX->tonemap.darkEv = _RDI->tonemapDarkEv;
    _RBX->tonemap.midEv = _RDI->tonemapMidEv;
    _RBX->tonemap.lightEv = _RDI->tonemapLightEv;
    _RBX->tonemap.darkExposureAdjust = _RDI->tonemapDarkExposureAdjust;
    _RBX->tonemap.midExposureAdjust = _RDI->tonemapMidExposureAdjust;
    _RBX->tonemap.lightExposureAdjust = _RDI->tonemapLightExposureAdjust;
    _RBX->tonemap.maxExposureAdjust = _RDI->tonemapMaxExposureAdjust;
    _RBX->tonemap.minExposureAdjust = _RDI->tonemapMinExposureAdjust;
    _RBX->tonemap.grainStrength = _RDI->tonemapGrainStrength;
    _RBX->tonemap.localStrength = _RDI->tonemapLocalStrength;
    _RBX->tonemap.localEvBounds = _RDI->tonemapLocalEvBounds;
    _RBX->perceptual.veilStrength = _RDI->veilStrength;
    _RBX->tonemap.whitePoint.v[0] = _RDI->toneWhitePoint.v[0];
    _RBX->tonemap.whitePoint.v[1] = _RDI->toneWhitePoint.v[1];
    _RBX->tonemap.whitePoint.v[2] = _RDI->toneWhitePoint.v[2];
    __asm { vucomiss xmm0, dword ptr [rdi+2FCh] }
    if ( v24 )
    {
      v28 = 1;
    }
    else
    {
      v28 = 0;
      v24 = 1;
    }
    _RBX->thermalParams.useNightAndThermalVisionCombo = v28;
    __asm { vucomiss xmm0, dword ptr [rdi+49Ch] }
    v29 = v24;
    _RBX->thermalParams.useScopedNVG = v29;
    _RBX->thermalParams.nightVisionExposureAdjustment = _RDI->nightVisionExposureAdjustment;
    _RBX->thermalParams.nightVisionMinExposureBias = _RDI->nightVisionMinExposureBias;
    _RBX->thermalParams.thermalAmbientTemperature = _RDI->thermalAmbientTemperature;
    _RBX->thermalParams.thermalAmbientReflection = _RDI->thermalAmbientReflection;
    _RBX->thermalParams.thermalColdColor.v[0] = _RDI->thermalColdColor.v[0];
    _RBX->thermalParams.thermalColdColor.v[1] = _RDI->thermalColdColor.v[1];
    _RBX->thermalParams.thermalColdColor.v[2] = _RDI->thermalColdColor.v[2];
    _RBX->thermalParams.thermalHotColor.v[0] = _RDI->thermalHotColor.v[0];
    _RBX->thermalParams.thermalHotColor.v[1] = _RDI->thermalHotColor.v[1];
    _RBX->thermalParams.thermalHotColor.v[2] = _RDI->thermalHotColor.v[2];
    _RBX->thermalParams.thermalColorScale = _RDI->thermalColorScale;
    _RBX->thermalParams.thermalRadiationMin = _RDI->thermalRadiationMin;
    _RBX->thermalParams.thermalRadiationMax = _RDI->thermalRadiationMax;
    _RBX->thermalParams.lightIntensityScreen = _RDI->lightIntensityScopeScreen;
    _RBX->thermalParams.thermalFogExtinctionWeight = _RDI->thermalFogExtinctionWeight;
    _RBX->thermalParams.thermalSurfaceNormalStrength = _RDI->thermalSurfaceNormalStrength;
    _RBX->thermalParams.thermalAOStrength = _RDI->thermalAOStrength;
    _RBX->thermalParams.thermalCutoff = _RDI->thermalCutoff;
    _RBX->thermalParams.thermalFog = _RDI->thermalFog;
    _RBX->thermalParams.thermalRadiationLut = NULL;
    m_assetIndex = _RDI->thermalRadiationLut.m_assets[0].m_assetIndex;
    v11 = 0;
    v31 = m_assetIndex == 0;
    if ( m_assetIndex )
    {
      v32 = 2i64 * m_assetIndex;
      v11 = s_CG_VisionSet.m_assetNodes[8 * v32 - 4080].m_nextAssetIndex == 0;
      v31 = s_CG_VisionSet.m_assetNodes[8 * v32 - 4080].m_nextAssetIndex == 1;
      if ( s_CG_VisionSet.m_assetNodes[8 * v32 - 4080].m_nextAssetIndex == 1 )
        _RBX->thermalParams.thermalRadiationLut = *(const GfxImage **)&s_CG_VisionSet.m_assetNodes[8 * v32 - 4072].m_nextAssetIndex;
    }
    __asm { vcvttss2si eax, dword ptr [rdi+220h] }
    _RBX->whiteBalance.method = _EAX;
    __asm { vcvttss2si eax, dword ptr [rdi+224h] }
    _RBX->whiteBalance.illuminant = _EAX;
    _RBX->whiteBalance.colorTempK = _RDI->whiteBalanceColorTempK;
    _RBX->whiteBalance.colorGreenMagentaShift = _RDI->whiteBalanceGreenMagentaShift;
    __asm { vucomiss xmm6, dword ptr [rdi+24Ch] }
    if ( v31 )
    {
      v35 = 0;
      v11 = 0;
      v31 = 1;
    }
    else
    {
      v35 = 1;
    }
    _RBX->droneCameraEffects.enabled = v35;
    __asm { vcvttss2si eax, dword ptr [rdi+250h] }
    _RBX->droneCameraEffects.downsampleScale = _EAX;
    _RBX->droneCameraEffects.pixelSize = _RDI->droneCameraPixelSize;
    __asm { vcvttss2si eax, dword ptr [rdi+258h] }
    _RBX->droneCameraEffects.filterMultiplier = _EAX;
    __asm { vcvttss2si eax, dword ptr [rdi+25Ch] }
    _RBX->droneCameraEffects.filterType = _EAX;
    _RBX->droneCameraEffects.filterShakeStrength = _RDI->droneCameraFilterShakeStrength;
    __asm { vucomiss xmm6, dword ptr [rdi+264h] }
    if ( v31 )
    {
      v11 = 0;
      v31 = 1;
      v39 = 0;
    }
    else
    {
      v39 = 1;
    }
    __asm { vmovss  xmm2, cs:__real@3b808081 }
    _RBX->droneCameraEffects.levelsOnOff = v39;
    __asm
    {
      vmulss  xmm0, xmm2, dword ptr [rdi+268h]
      vmovss  dword ptr [rbx+10C20h], xmm0
      vmulss  xmm2, xmm2, dword ptr [rdi+26Ch]
      vmovss  dword ptr [rbx+10C24h], xmm2
    }
    _RBX->droneCameraEffects.levelsGamma = _RDI->droneCameraLevelsGamma;
    __asm { vucomiss xmm6, dword ptr [rdi+274h] }
    if ( v31 )
    {
      v43 = 0;
      v11 = 0;
      v31 = 1;
    }
    else
    {
      v43 = 1;
    }
    _RBX->droneCameraEffects.posterizationOnOff = v43;
    _RBX->droneCameraEffects.posterizationGamma = _RDI->droneCameraPosterizationGamma;
    _RBX->droneCameraEffects.posterizationPower = _RDI->droneCameraPosterizationPower;
    _RBX->droneCameraEffects.saturation = _RDI->droneCameraSaturation;
    __asm { vucomiss xmm6, dword ptr [rdi+284h] }
    if ( v31 )
    {
      v44 = 0;
      v11 = 0;
      v31 = 1;
    }
    else
    {
      v44 = 1;
    }
    _RBX->droneCameraEffects.deformScreenOnOff = v44;
    _RBX->droneCameraEffects.deformScreenThreshold = _RDI->droneCameraDeformScreenThreshold;
    _RBX->droneCameraEffects.deformScreenScale = _RDI->droneCameraDeformScreenScale;
    _RBX->droneCameraEffects.deformScreenSeed = _RDI->droneCameraDeformScreenSeed;
    _RBX->droneCameraEffects.deformScreenProbability = _RDI->droneCameraDeformScreenProbability;
    __asm { vucomiss xmm6, dword ptr [rdi+298h] }
    if ( v31 )
    {
      v45 = 0;
      v11 = 0;
      v31 = 1;
    }
    else
    {
      v45 = 1;
    }
    _RBX->droneCameraEffects.shakeCameraOnOff = v45;
    _RBX->droneCameraEffects.shakeCameraVal1 = _RDI->droneCameraShakeCameraVal1;
    _RBX->droneCameraEffects.shakeCameraVal2 = _RDI->droneCameraShakeCameraVal2;
    _RBX->droneCameraEffects.shakeCameraVal3 = _RDI->droneCameraShakeCameraVal3;
    __asm { vucomiss xmm6, dword ptr [rdi+2A8h] }
    if ( v31 )
    {
      v46 = 0;
      v11 = 0;
      v31 = 1;
    }
    else
    {
      v46 = 1;
    }
    _RBX->droneCameraEffects.scanlinesOnOff = v46;
    _RBX->droneCameraEffects.scanline1_InterpolationPower = _RDI->droneCameraScanline1_InterpolationPower;
    _RBX->droneCameraEffects.scanline2_InterpolationPower = _RDI->droneCameraScanline2_InterpolationPower;
    _RBX->droneCameraEffects.scanline1_Size = _RDI->droneCameraScanline1_Size;
    _RBX->droneCameraEffects.scanline1_Speed = _RDI->droneCameraScanline1_Speed;
    _RBX->droneCameraEffects.scanline2_Size = _RDI->droneCameraScanline2_Size;
    _RBX->droneCameraEffects.scanline2_Speed = _RDI->droneCameraScanline2_Speed;
    __asm { vucomiss xmm6, dword ptr [rdi+2C4h] }
    if ( v31 )
    {
      v47 = 0;
      v11 = 0;
    }
    else
    {
      v47 = 1;
    }
    _RBX->droneCameraEffects.vignetteOnOff = v47;
    _RBX->droneCameraEffects.vignetteSize = _RDI->droneCameraVignetteSize;
    _RBX->droneCameraEffects.vignetteSmoothness = _RDI->droneCameraVignetteSmoothness;
    _RBX->droneCameraEffects.vignetteEdges = _RDI->droneCameraVignetteEdges;
    _RBX->droneCameraEffects.zoomUV = _RDI->droneCameraZoomUV;
    _RBX->analogEffects.analogCrtEffectAmount = _RDI->analogCrtEffectAmount;
    _RBX->analogEffects.analogInterferenceAmount = _RDI->analogInterferenceAmount;
    _RBX->analogEffects.analogRewindAmount = _RDI->analogRewindAmount;
    _RBX->analogEffects.analogRollEffectAmount = _RDI->analogRollEffectAmount;
    _RBX->analogEffects.analogChromaSeparationEffectAmount = _RDI->analogChromaSeparationEffectAmount;
  }
  _RBX->dust.dustHeading = _RDI->r_dustHeading;
  _RBX->dust.dustPitch = _RDI->r_dustPitch;
  _RBX->dust.dustTiling = _RDI->r_dustTiling;
  _RBX->dust.dustIntensity = _RDI->r_dustIntensity;
  _RBX->dust.dustPowerCurve = _RDI->r_dustPowerCurv;
  _RBX->dust.dustSmoothMin = _RDI->r_dustSmoothMin;
  _RBX->dust.dustSmoothMax = _RDI->r_dustSmoothMax;
  __asm { vcomiss xmm6, dword ptr [rdi+2Ch] }
  _RBX->volumeLightScatter.enabled = v11;
  _RBX->volumeLightScatter.attenuation.v[0] = _RDI->r_volumeLightScatterLinearAtten;
  _RBX->volumeLightScatter.attenuation.v[1] = _RDI->r_volumeLightScatterQuadraticAtten;
  _RBX->volumeLightScatter.attenuation.v[2] = _RDI->r_volumeLightScatterAngularAtten;
  _RBX->volumeLightScatter.depthAttenuation.v[0] = _RDI->r_volumeLightScatterDepthAttenNear;
  _RBX->volumeLightScatter.depthAttenuation.v[1] = _RDI->r_volumeLightScatterDepthAttenFar;
  _RBX->volumeLightScatter.backgroundDistance = _RDI->r_volumeLightScatterBackgroundDistance;
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+2Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+48h]
    vmovss  dword ptr [rbx+10E40h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdi+4Ch]
    vmovss  dword ptr [rbx+10E44h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+50h]
    vmovss  dword ptr [rbx+10E48h], xmm0
  }
  v52 = DVARBOOL_r_volumetrics;
  if ( !DVARBOOL_r_volumetrics )
    goto LABEL_55;
  Dvar_CheckFrontendServerThread(DVARBOOL_r_volumetrics);
  if ( !v52->current.enabled )
    goto LABEL_55;
  v53 = DCONST_DVARBOOL_r_volumetricsA;
  if ( !DCONST_DVARBOOL_r_volumetricsA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_volumetricsA") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( v53->current.enabled && r_volumetricsDisableHack->current.enabled )
    v54 = 1;
  else
LABEL_55:
    v54 = 0;
  _RBX->volumetrics.enabled = v54;
  _RBX->volumetrics.airDensity = _RDI->volumetricAirDensity;
  __asm
  {
    vcomiss xmm6, dword ptr [rdi+54h]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbx+10E6Ch], xmm0
  }
  _RBX->volumetrics.albedo.v[0] = _RDI->volumetricAlbedo.v[0];
  _RBX->volumetrics.albedo.v[1] = _RDI->volumetricAlbedo.v[1];
  _RBX->volumetrics.albedo.v[2] = _RDI->volumetricAlbedo.v[2];
  _RBX->volumetrics.sunBrightness = _RDI->volumetricSunBrightness;
  _RBX->volumetrics.spotBrightness = _RDI->volumetricSpotBrightness;
  _RBX->volumetrics.omniBrightness = _RDI->volumetricOmniBrightness;
  _RBX->volumetrics.ambientBrightness = _RDI->volumetricAmbientBrightness;
  _RBX->volumetrics.sunAnisotropy = _RDI->volumetricSunAnisotropy;
  LODWORD(_RBX->volumetrics.attenuationClamp) = r_volumetricsAttenuationClamp->current.integer;
  LODWORD(_RBX->volumetrics.bulbAttenClamp) = r_volumetricsBulbAttenClamp->current.integer;
  _RBX->volumetrics.heightFogBaseHeight = _RDI->volumetricHeightFogBaseHeight;
  _RBX->volumetrics.heightFogHalfPlaneDistance = _RDI->volumetricHeightFogHalfPlaneDistance;
  v56 = r_volumetricsDensityTemporalFactor;
  if ( !r_volumetricsDensityTemporalFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  LODWORD(_RBX->volumetrics.densityTemporalFactor) = v56->current.integer;
  v57 = r_volumetricsScatterTemporalFactor;
  if ( !r_volumetricsScatterTemporalFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  LODWORD(_RBX->volumetrics.scatterTemporalFactor) = v57->current.integer;
  v58 = r_volumetricsAmbientTemporalFactor;
  if ( !r_volumetricsAmbientTemporalFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  __asm
  {
    vmovss  xmm2, cs:__real@40490fda; max
    vmovss  xmm1, cs:__real@c0490fda; min
  }
  LODWORD(_RBX->volumetrics.ambientTemporalFactor) = v58->current.integer;
  _RBX->sunshadowSoftness = _RDI->sunshadowSoftness;
  _RBX->sunshadowSampleSizeNear = _RDI->sunshadowSampleSizeNear;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+94h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RBX->cloudShadow.scale = _RDI->cloudShadowScale;
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = FastSinBetweenMinusPiAndPi(*(float *)&_XMM0);
  __asm
  {
    vcomiss xmm7, cs:__real@c0490fdb
    vmovss  xmm8, cs:__real@40490fdb
    vmovss  dword ptr [rbx+10EE4h], xmm0
  }
  if ( v64 )
    goto LABEL_77;
  __asm { vcomiss xmm7, xmm8 }
  if ( !(v64 | v65) )
  {
LABEL_77:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 810, ASSERT_TYPE_ASSERT, "(radians >= -M_PI_F && radians <= M_PI_F)", (const char *)&queryFormat, "radians >= -M_PI_F && radians <= M_PI_F") )
      __debugbreak();
  }
  __asm
  {
    vaddss  xmm2, xmm7, cs:__real@3fc90fdb
    vsubss  xmm1, xmm2, cs:__real@40c90fdb
    vcmpless xmm0, xmm8, xmm2
    vblendvps xmm0, xmm2, xmm1, xmm0; radians
  }
  *(double *)&_XMM0 = FastSinBetweenMinusPiAndPi(*(float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+10EE0h], xmm0
    vmovss  xmm1, dword ptr [rdi+90h]
    vmulss  xmm0, xmm1, xmm0
    vmovss  dword ptr [rbx+10EE0h], xmm0
    vmulss  xmm1, xmm1, dword ptr [rbx+10EE4h]
    vmovss  dword ptr [rbx+10EE4h], xmm1
  }
  _RBX->cloudShadow.opacity = _RDI->cloudShadowOpacity;
  _RBX->cloudShadow.min = _RDI->cloudShadowLowThreshold;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+9Ch]
    vaddss  xmm1, xmm0, cs:__real@34000000
    vmaxss  xmm2, xmm1, dword ptr [rdi+0A0h]
    vmovss  dword ptr [rbx+10EF0h], xmm2
  }
  if ( !CL_IsRenderingSplitScreen() )
    __asm { vmovss  xmm6, dword ptr [rdi+0A4h] }
  __asm { vmovss  dword ptr [rbx+10D90h], xmm6 }
  _RBX->mdaoCullDistance = _RDI->r_mdaoCullDistance;
  _RBX->mdaoFadeoutDistance = _RDI->r_mdaoFadeoutDistance;
  _RBX->mdaoBoneSizeThreshold = _RDI->r_mdaoBoneSizeThreshold;
  CG_VisionSetApplyToRefdef_InternalFog(_RBX, _RDI);
  _RBX->screenSpaceShadows.spotOmniScreenSpaceShadowsSamplesPerLight = _RDI->screenSpaceShadowsSamplesPerLight;
  _RBX->screenSpaceShadows.spotOmniScreenSpaceshadowSamplesTotal = _RDI->screenSpaceShadowsSamplesTotal;
  _RBX->screenSpaceShadows.spotOmniScreenSpaceShadowsTraceDistance = _RDI->screenSpaceShadowsTraceDistance;
  _RBX->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDistance = _RDI->sunSceneScreenSpaceShadowTraceDistance;
  _RBX->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDelta = _RDI->sunSceneScreenSpaceShadowTraceDelta;
  _RBX->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDistance = _RDI->sunViewmodelScreenSpaceshadowTraceDistance;
  _RBX->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta = _RDI->sunViewmodelScreenSpaceshadowTraceDelta;
  _RBX->skyIlluminationRadialDistanceBias = _RDI->skyIlluminationRadialDistanceBias;
  _RBX->eyeVirtualHighlight.eyeHighlightBulbRadius = _RDI->eyeHighlightBulbRadius;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+380h]
    vmovsd  qword ptr [rbx+10C00h], xmm0
  }
  _RBX->eyeVirtualHighlight.eyeHighlightColor.v[2] = _RDI->eyeHighlightColor.v[2];
  _RBX->eyeVirtualHighlight.eyeHighlightHeading = _RDI->eyeHighlightHeading;
  _RBX->eyeVirtualHighlight.eyeHighlightIntensity = _RDI->eyeHighlightIntensity;
  _RBX->eyeVirtualHighlight.eyeHighlightPitch = _RDI->eyeHighlightPitch;
  _RBX->vignetteFromVisionSet.intensity = _RDI->vignetteIntensity;
  _RBX->vignetteFromVisionSet.squareAspectRatioWeight = _RDI->vignetteSquareAspectRatioWeight;
  _RBX->vignetteFromVisionSet.size.v[0] = _RDI->vignetteSizeX;
  _RBX->vignetteFromVisionSet.size.v[1] = _RDI->vignetteSizeY;
  _RBX->vignetteFromVisionSet.falloff = _RDI->vignetteFalloff;
  _RBX->vignetteFromVisionSet.falloffStart = _RDI->vignetteFalloffStart;
  _RBX->vignetteFromVisionSet.boxSize.v[0] = _RDI->vignetteBoxSizeX;
  _RBX->vignetteFromVisionSet.boxSize.v[1] = _RDI->vignetteBoxSizeY;
  _RBX->vignetteFromVisionSet.offset.v[0] = _RDI->vignetteOffsetX;
  _RBX->vignetteFromVisionSet.offset.v[1] = _RDI->vignetteOffsetY;
  _RBX->vignetteFromVisionSet.vignetteImage = NULL;
  v78 = _RDI->vignetteImage.m_assets[0].m_assetIndex;
  if ( v78 )
  {
    v79 = 2i64 * v78;
    if ( s_CG_VisionSet.m_assetNodes[8 * v79 - 4080].m_nextAssetIndex == 1 )
    {
      v7 = *(const GfxImage **)&s_CG_VisionSet.m_assetNodes[8 * v79 - 4072].m_nextAssetIndex;
      _RBX->vignetteFromVisionSet.vignetteImage = v7;
    }
  }
  _RBX->vignette.vignetteImage = v7;
  _RBX->decalVolumes.drawDistance = _RDI->decalVolumeDrawDistance;
  _RBX->lightingFraction.bias = _RDI->lightingFractionBias;
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_VisionSetApplyToRefdef_InternalFog
==============
*/
void CG_VisionSetApplyToRefdef_InternalFog(refdef_t *refDef, const visionSetVarsBase_t *set)
{
  bool v30; 
  char v97; 
  float density[4]; 
  char v136; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+150h]
    vsubss  xmm1, xmm0, cs:__real@4035c28f; Y
    vmovss  xmm0, cs:__real@40000000; X
    vmovaps xmmword ptr [rax-28h], xmm6
  }
  _RBX = set;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RDI = refDef;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0D8h+var_88], xmm12
    vmovaps [rsp+0D8h+var_98], xmm13
    vmovaps [rsp+0D8h+var_A8], xmm14
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm14, xmm0, cs:__real@3a83126f
    vmovss  xmm0, dword ptr [rbx+140h]
    vmovss  xmm12, cs:__real@3f317218
    vxorps  xmm11, xmm11, xmm11
    vucomiss xmm0, xmm11
  }
  if ( v97 )
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm12, xmm0
      vmaxss  xmm1, xmm0, xmm11
    }
  }
  _RDI->fog.startDist = _RBX->fogStartDist;
  _RDI->fog.skyDistance = _RBX->fogSkyDistance;
  _RDI->fog.maxDistance = _RBX->fogMaxDistance;
  __asm { vmovss  [rsp+0D8h+density], xmm1 }
  CG_VisionSetApplyToRefdef_InternalFogSpline(_RDI, _RBX, density);
  _RDI->fog.rayleighCoeffs.v[0] = _RBX->fogRayleighAlbedo.v[0];
  _RDI->fog.rayleighCoeffs.v[1] = _RBX->fogRayleighAlbedo.v[1];
  _RDI->fog.rayleighCoeffs.v[2] = _RBX->fogRayleighAlbedo.v[2];
  GammaToLinearColor_Srgb(&_RDI->fog.rayleighCoeffs);
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vsubss  xmm0, xmm13, dword ptr [rbx+170h]
    vmovss  xmm8, [rsp+0D8h+density]
    vmulss  xmm2, xmm0, xmm8
    vmulss  xmm0, xmm2, dword ptr [rdi+0C8h]
    vmovss  dword ptr [rdi+0C8h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdi+0CCh]
    vmovss  dword ptr [rdi+0CCh], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+0D0h]
    vmovss  dword ptr [rdi+0D0h], xmm0
  }
  _RDI->fog.mieCoeffs.v[0] = _RBX->fogMieAlbedo.v[0];
  _RDI->fog.mieCoeffs.v[1] = _RBX->fogMieAlbedo.v[1];
  _RDI->fog.mieCoeffs.v[2] = _RBX->fogMieAlbedo.v[2];
  GammaToLinearColor_Srgb(&_RDI->fog.mieCoeffs);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rbx+170h]
    vmulss  xmm1, xmm0, dword ptr [rdi+0D8h]
    vmovss  xmm10, cs:__real@34000000
    vmovss  dword ptr [rdi+0D8h], xmm1
    vmulss  xmm5, xmm0, dword ptr [rdi+0DCh]
    vmovss  dword ptr [rdi+0DCh], xmm5
    vmulss  xmm6, xmm0, dword ptr [rdi+0E0h]
    vmovss  dword ptr [rdi+0E0h], xmm6
    vmovss  xmm0, dword ptr [rbx+14Ch]
    vmulss  xmm4, xmm0, xmm8
    vsubss  xmm3, xmm13, xmm0
    vaddss  xmm0, xmm1, dword ptr [rdi+0C8h]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm0, xmm5, dword ptr [rdi+0CCh]
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm0, xmm6, dword ptr [rdi+0D0h]
    vmovss  xmm6, cs:__real@3fb8aa3b
    vmaxss  xmm9, xmm2, xmm10
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm0, xmm3
    vmaxss  xmm8, xmm2, xmm10
    vaddss  xmm2, xmm1, xmm4
    vdivss  xmm3, xmm14, xmm9
    vmulss  xmm0, xmm3, dword ptr [rdi+0C8h]
    vmovss  dword ptr [rdi+0C8h], xmm0
    vdivss  xmm4, xmm14, xmm8
    vmulss  xmm1, xmm4, dword ptr [rdi+0CCh]
    vmovss  dword ptr [rdi+0CCh], xmm1
    vmaxss  xmm5, xmm2, xmm10
    vdivss  xmm2, xmm14, xmm5
    vmulss  xmm0, xmm2, dword ptr [rdi+0D0h]
    vmovss  dword ptr [rdi+0D0h], xmm0
    vmulss  xmm0, xmm3, dword ptr [rdi+0D8h]
    vmovss  dword ptr [rdi+0D8h], xmm0
    vmulss  xmm1, xmm4, dword ptr [rdi+0DCh]
    vmovss  dword ptr [rdi+0DCh], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+0E0h]
    vmovss  dword ptr [rdi+0E0h], xmm0
    vmulss  xmm2, xmm6, dword ptr [rdi+0D4h]
    vmulss  xmm0, xmm2, xmm9
    vmulss  xmm1, xmm8, xmm2
    vmovss  dword ptr [rdi+0B8h], xmm0
    vmovss  dword ptr [rdi+0BCh], xmm1
    vmovss  xmm7, cs:__real@3c8efa35
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rdi+0C0h], xmm0
  }
  _RDI->fog.mieAnisotropy = _RBX->fogMieAnisotropy;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+134h]
    vmovss  xmm5, dword ptr [rbx+130h]
    vmovss  xmm3, dword ptr [rbx+138h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm13, xmm0
    vdivss  xmm2, xmm13, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rdi+0E8h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+134h]
    vmovss  dword ptr [rdi+0ECh], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+138h]
    vmovss  dword ptr [rdi+0F0h], xmm0
    vmulss  xmm4, xmm7, dword ptr [rbx+128h]
    vmulss  xmm1, xmm7, dword ptr [rbx+12Ch]
    vsubss  xmm2, xmm1, xmm4
    vmaxss  xmm3, xmm2, xmm10
    vdivss  xmm0, xmm13, xmm3
    vmulss  xmm1, xmm0, cs:__real@bfc90fdb
    vmovss  dword ptr [rdi+0F8h], xmm1
    vmulss  xmm0, xmm0, xmm4
    vaddss  xmm1, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm8
    vmovss  dword ptr [rdi+0FCh], xmm1
  }
  _RDI->fog.heightFogBaseHeight = _RBX->fogHeightFogBaseHeight;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+178h]
    vcomiss xmm0, xmm11
  }
  if ( v30 | v97 )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  else
    __asm { vdivss  xmm0, xmm12, xmm0 }
  __asm { vmovss  dword ptr [rdi+104h], xmm0 }
  _RDI->fog.heightFogMaximumOffset = _RBX->fogHeightFogMaximumOffset;
  _RDI->fog.heightFogAdditionalFog = _RBX->fogHeightFogAdditionalFog;
  __asm { vcomiss xmm11, dword ptr [rbx+198h] }
  _RDI->fog.useAtmosphericScattering = v30;
  if ( !v30 )
  {
    _RDI->fog.rayleighCoeffs.v[0] = _RBX->fogColor.v[0];
    _RDI->fog.rayleighCoeffs.v[1] = _RBX->fogColor.v[1];
    _RDI->fog.rayleighCoeffs.v[2] = _RBX->fogColor.v[2];
    GammaToLinearColor_Srgb(&_RDI->fog.rayleighCoeffs);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+1BCh]
      vmulss  xmm0, xmm2, dword ptr [rdi+0C8h]
      vmovss  dword ptr [rdi+0C8h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rdi+0CCh]
      vmovss  dword ptr [rdi+0CCh], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+0D0h]
      vmovss  dword ptr [rdi+0D0h], xmm0
    }
    _RDI->fog.mieCoeffs.v[0] = _RBX->fogSunColor.v[0];
    _RDI->fog.mieCoeffs.v[1] = _RBX->fogSunColor.v[1];
    _RDI->fog.mieCoeffs.v[2] = _RBX->fogSunColor.v[2];
    GammaToLinearColor_Srgb(&_RDI->fog.mieCoeffs);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+1A8h]
      vmulss  xmm0, xmm2, dword ptr [rdi+0D8h]
      vmovss  dword ptr [rdi+0D8h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rdi+0DCh]
      vmovss  dword ptr [rdi+0DCh], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+0E0h]
      vmovss  xmm2, cs:__real@3727c5ac
      vmovss  dword ptr [rdi+0E0h], xmm0
    }
    _RDI->fog.maxDistance = _RBX->fogMaxOpacity;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1CCh]
      vmulss  xmm1, xmm0, dword ptr [rbx+19Ch]
      vmovss  dword ptr [rdi+0F4h], xmm1
      vmovss  xmm3, dword ptr [rbx+1D0h]
      vucomiss xmm3, xmm11
    }
    if ( v97 )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    else
    {
      __asm
      {
        vdivss  xmm0, xmm12, xmm3
        vsubss  xmm1, xmm0, xmm2
        vmaxss  xmm1, xmm1, xmm11
        vmulss  xmm0, xmm1, xmm6
      }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0B8h], xmm0
      vmovss  xmm1, dword ptr [rbx+1B8h]
      vucomiss xmm1, xmm11
    }
    if ( !v97 )
    {
      __asm
      {
        vdivss  xmm0, xmm12, xmm1
        vsubss  xmm1, xmm0, xmm2
        vmaxss  xmm1, xmm1, xmm11
        vmulss  xmm11, xmm1, xmm6
      }
    }
    __asm { vmovss  dword ptr [rdi+0BCh], xmm11 }
    _RDI->fog.maxOpticalDepth.v[2] = 0.0;
    _RDI->fog.heightFogDenstiy = 0.0;
    __asm
    {
      vsubss  xmm0, xmm13, dword ptr [rbx+19Ch]
      vmovss  dword ptr [rdi+0E4h], xmm0
      vmulss  xmm0, xmm7, dword ptr [rbx+1A0h]; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm6, xmm0
      vmulss  xmm0, xmm7, dword ptr [rbx+1A4h]; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm { vcomiss xmm6, xmm0 }
    if ( v30 | v97 )
    {
      __asm { vmovss  xmm2, cs:__real@42c80000 }
    }
    else
    {
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vdivss  xmm2, xmm13, xmm1
      }
    }
    __asm
    {
      vmulss  xmm0, xmm2, xmm0
      vxorps  xmm1, xmm0, xmm8
      vmovss  dword ptr [rdi+1D8h], xmm1
      vmovss  dword ptr [rdi+1D4h], xmm2
    }
  }
  __asm { vmovaps xmm14, [rsp+0D8h+var_A8] }
  _R11 = &v136;
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
CG_VisionSetApplyToRefdef_InternalFogSpline
==============
*/
void CG_VisionSetApplyToRefdef_InternalFogSpline(refdef_t *refDef, const visionSetVarsBase_t *set, float *density)
{
  cg_t *LocalClientGlobals; 
  __int64 v17; 
  unsigned __int8 m_weight; 
  bool v19; 
  __int64 v20; 

  _RBX = refDef;
  _RSI = set;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)refDef->localClientNum);
  if ( LocalClientGlobals && LocalClientGlobals->cvsData.archived.visionBlends[0].lerpInfo.type == VISIONSETBLENDTYPE_OFF )
  {
    _RBX->fog.fogSplineBlendEntry[0].weight = -1;
    _RBX->fog.fogSplineBlendEntry[0].data.fogStartDist = _RSI->fogStartDist;
    _RBX->fog.fogSplineBlendEntry[0].data.fogHalfPlaneDistance = _RSI->fogHalfPlaneDistance;
    _RBX->fog.fogSplineBlendEntry[0].data.fogMaxDistance = _RSI->fogMaxDistance;
    _RBX->fog.fogSplineBlendEntry[0].image = R_FogSplineLive_GetImage();
    _RBX->fog.fogSplineBlendCount = 1;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
      vmovaps [rsp+0A8h+var_68], xmm9
      vmovaps [rsp+0A8h+var_78], xmm10
    }
    if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 692, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
      __debugbreak();
    __asm
    {
      vmovss  xmm10, cs:__real@3b808081
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm9, xmm9, xmm9
    }
    v17 = 0i64;
    do
    {
      m_weight = _RSI->fogSpline.m_assets[v17].m_weight;
      v19 = m_weight == 0;
      if ( !m_weight )
        break;
      v20 = 2i64 * _RSI->fogSpline.m_assets[v17].m_assetIndex;
      if ( (unsigned int)v17 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 707, ASSERT_TYPE_ASSERT, "(fogSplineBlendCount < ( sizeof( *array_counter( refDef->fog.fogSplineBlendEntry ) ) + 0 ))", (const char *)&queryFormat, "fogSplineBlendCount < ARRAY_COUNT( refDef->fog.fogSplineBlendEntry )") )
        __debugbreak();
      _RDX = 3 * v17;
      _RBX->fog.fogSplineBlendEntry[v17].weight = m_weight;
      if ( s_CG_VisionSet.m_assetNodes[8 * v20 - 4080].m_nextAssetIndex == 3 )
      {
        _RAX = *(_QWORD *)&s_CG_VisionSet.m_assetNodes[8 * v20 - 4072].m_nextAssetIndex;
        __asm
        {
          vmovsd  xmm0, qword ptr [rax+10h]
          vmovsd  qword ptr [rbx+rdx*8+118h], xmm0
        }
        _RBX->fog.fogSplineBlendEntry[v17].data.fogMaxDistance = *(float *)(_RAX + 24);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+rdx*8+118h]
          vmovss  xmm3, dword ptr [rbx+rdx*8+11Ch]
          vmovss  xmm4, dword ptr [rbx+rdx*8+120h]
        }
        _RBX->fog.fogSplineBlendEntry[v17].image = *(const GfxImage **)(*(_QWORD *)&s_CG_VisionSet.m_assetNodes[8 * v20 - 4072].m_nextAssetIndex + 8i64);
      }
      else
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+13Ch]
          vmovss  dword ptr [rbx+rdx*8+118h], xmm1
          vmovss  xmm3, dword ptr [rsi+140h]
          vmovss  dword ptr [rbx+rdx*8+11Ch], xmm3
          vmovss  xmm4, dword ptr [rsi+144h]
          vmovss  dword ptr [rbx+rdx*8+120h], xmm4
        }
        _RBX->fog.fogSplineBlendEntry[v17].image = rgp.zero1DImage;
      }
      v17 = (unsigned int)(v17 + 1);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm2, xmm0, xmm10
        vmulss  xmm1, xmm1, xmm2
        vaddss  xmm8, xmm8, xmm1
        vmulss  xmm1, xmm4, xmm2
        vmulss  xmm0, xmm3, xmm2
        vaddss  xmm9, xmm9, xmm1
        vaddss  xmm7, xmm7, xmm0
      }
      v19 = (_DWORD)v17 == 9;
    }
    while ( (_DWORD)v17 != 9 );
    __asm
    {
      vucomiss xmm7, xmm6
      vmovaps xmm10, [rsp+0A8h+var_78]
      vmovss  dword ptr [rbx+0C4h], xmm8
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovss  dword ptr [rbx+0D4h], xmm9
      vmovaps xmm9, [rsp+0A8h+var_68]
    }
    if ( !v19 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f317218
        vdivss  xmm1, xmm0, xmm7
        vmaxss  xmm6, xmm1, xmm6
      }
    }
    _R12 = density;
    __asm
    {
      vmovss  dword ptr [r12], xmm6
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
    truncate_store<unsigned char,unsigned int>(&_RBX->fog.fogSplineBlendCount, v17);
  }
}

/*
==============
CG_VisionSetApplyTokenToField
==============
*/
bool CG_VisionSetApplyTokenToField(unsigned int fieldNum, const char *token, visionSetVars_t *settings)
{
  __int64 v7; 
  __int64 offset; 
  unsigned int v14; 
  bool enabled; 
  int v16; 
  const char *UnobfuscatedName; 
  cg_t *LocalClientGlobals; 
  VisionSetAssetType v29; 
  const char *v30; 
  char *name; 
  bool result; 
  char *fmt; 
  __int64 v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 

  v7 = fieldNum;
  if ( fieldNum > 0xDA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 318, ASSERT_TYPE_ASSERT, "( fieldNum ) <= ( ( sizeof( *array_counter( visionDefFields ) ) + 0 ) )", "fieldNum not in [0, ARRAY_COUNT( visionDefFields )]\n\t%u not in [0, %u]", fieldNum, 218) )
    __debugbreak();
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 319, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !settings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 320, ASSERT_TYPE_ASSERT, "(settings)", (const char *)&queryFormat, "settings") )
    __debugbreak();
  __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
  _RDI = 5 * v7;
  _R12 = 0x140000000ui64;
  __asm { vmovaps [rsp+0F8h+var_58], xmm7 }
  offset = visionDefFields[v7].offset;
  __asm { vmovaps [rsp+0F8h+var_68], xmm8 }
  _RSI = (CG_VisionSet_AssetBlendSet *)((char *)settings + offset);
  bitarray_base<bitarray<224>>::resetBit(&settings->inUse, v7);
  switch ( visionDefFields[v7].fieldType )
  {
    case FTYPE_BOOL:
      v14 = j_sscanf(token, "%i", &v38);
      enabled = v14 == 1;
      if ( v14 > 1 )
      {
        v16 = v38;
        UnobfuscatedName = Dvar_DevGetUnobfuscatedName(visionDefFields[v7].name);
        LODWORD(v37) = 1;
        LODWORD(fmt) = v16;
        Com_PrintError(1, "Vision file %s has value for %s of %d outside of the range [%d, %d]\n", settings->name, UnobfuscatedName, fmt, 0i64, v37);
        enabled = visionDefFields[v7].def.enabled;
      }
      if ( !enabled )
        goto LABEL_28;
      _RSI->m_assets[0].m_assetIndex = v38 != 0;
      goto LABEL_31;
    case FTYPE_FLOAT:
      if ( j_sscanf(token, "%f", &v39) != 1 )
        goto LABEL_28;
      __asm
      {
        vmovss  xmm8, dword ptr rva ?visionDefFields@@3PAUvisField_t@@A.min[r12+rdi*8]; visField_t near * visionDefFields
        vmovss  xmm0, [rsp+0F8h+var_A4]
        vcomiss xmm0, xmm8
        vcomiss xmm0, dword ptr rva ?visionDefFields@@3PAUvisField_t@@A.max[r12+rdi*8]; visField_t near * visionDefFields
        vmovss  dword ptr [rsi], xmm0
      }
      goto LABEL_31;
    case FTYPE_VEC3:
      if ( j_sscanf(token, "%f %f %f", &v40, &v41, &v42) != 3 )
        goto LABEL_28;
      __asm
      {
        vmovss  xmm2, [rsp+0F8h+var_A0]
        vmovss  xmm1, [rsp+0F8h+var_98]
        vmovss  xmm3, [rsp+0F8h+var_9C]
        vmovaps [rsp+0F8h+var_88], xmm10
        vmovss  xmm10, dword ptr rva ?visionDefFields@@3PAUvisField_t@@A.min[r12+rdi*8]; visField_t near * visionDefFields
        vcomiss xmm2, xmm10
        vmovss  xmm0, dword ptr rva ?visionDefFields@@3PAUvisField_t@@A.max[r12+rdi*8]; visField_t near * visionDefFields
        vcomiss xmm2, xmm0
        vcomiss xmm3, xmm10
        vcomiss xmm3, xmm0
        vcomiss xmm1, xmm10
        vcomiss xmm1, xmm0
        vmovaps xmm10, [rsp+0F8h+var_88]
        vmovss  dword ptr [rsi], xmm2
        vmovss  xmm0, [rsp+0F8h+var_9C]
        vmovss  dword ptr [rsi+4], xmm0
        vmovss  xmm1, [rsp+0F8h+var_98]
        vmovss  dword ptr [rsi+8], xmm1
      }
      goto LABEL_31;
    case FTYPE_IMAGESET:
      v29 = VISION_SET_ASSET_TYPE_IMAGE;
      goto LABEL_26;
    case FTYPE_CLUTSET:
      v29 = VISION_SET_ASSET_TYPE_GRADING_CLUT;
LABEL_26:
      v30 = token;
      name = settings->name;
      goto LABEL_27;
    case FTYPE_FOGSPLINESET:
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      if ( LocalClientGlobals && settings == &LocalClientGlobals->cvsData.archived.visionLeaves[1] && R_FogSplineLive_ProcessToken(token) )
      {
        v29 = VISION_SET_ASSET_TYPE_FOG_SPLINE;
        v30 = (char *)&queryFormat.fmt + 3;
        name = settings->name;
      }
      else
      {
        v29 = VISION_SET_ASSET_TYPE_FOG_SPLINE;
        name = settings->name;
        v30 = settings->name;
      }
LABEL_27:
      if ( CG_VisionSet_AssetBlendSet_Load(_RSI, v29, v30, name, visionDefFields[v7].name) )
        goto LABEL_31;
LABEL_28:
      result = 0;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 416, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported token type") )
        __debugbreak();
LABEL_31:
      bitarray_base<bitarray<224>>::setBit(&settings->inUse, v7);
      result = 1;
      break;
  }
  __asm
  {
    vmovaps xmm8, [rsp+0F8h+var_68]
    vmovaps xmm7, [rsp+0F8h+var_58]
    vmovaps xmm6, [rsp+0F8h+var_48]
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
  __int64 v14; 
  unsigned __int8 headNodeIndex; 
  __int64 v17; 
  const char *v18; 
  __int128 v19; 
  VisionSetAssetKey *key; 

  LOBYTE(v2) = *assetName;
  v3 = assetName;
  if ( !*assetName )
    return 0;
  v2 = (char)v2;
  v5 = (unsigned __int8)assetType;
  v6 = (unsigned __int8)assetType;
  LOBYTE(v17) = assetType;
  v18 = assetName;
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
  key = (VisionSetAssetKey *)&v17;
  result = IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey *>(&s_CG_VisionSet.m_assetMap, &key, v6, s_CG_VisionSet.m_assetMap.buckets, 0x3FFu, s_CG_VisionSet.m_assetNodes);
  if ( result == 0xFF )
  {
    LOBYTE(v19) = assetType;
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
    *((XAssetHeader *)&v19 + 1) = DB_FindXAssetHeader(v10, v3, 0);
    if ( *((_QWORD *)&v19 + 1) )
    {
      m_assetCount = s_CG_VisionSet.m_assetCount;
      if ( s_CG_VisionSet.m_assetCount == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets_common.cpp", 260, ASSERT_TYPE_ASSERT, "(assetIndex < ( sizeof( *array_counter( s_CG_VisionSet.m_assetNodes ) ) + 0 ))", (const char *)&queryFormat, "assetIndex < ARRAY_COUNT( s_CG_VisionSet.m_assetNodes )", v17, v18) )
        __debugbreak();
      s_CG_VisionSet.m_assetCount = m_assetCount + 1;
      key = (VisionSetAssetKey *)&v17;
      if ( IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey *>(&s_CG_VisionSet.m_assetMap, &key, v6, s_CG_VisionSet.m_assetMap.buckets, 0x3FFu, s_CG_VisionSet.m_assetNodes) != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\hash_table.h", 372, ASSERT_TYPE_ASSERT, "(this->Find( key, hash, nodes ) == Base::s_nullNodeIndex)", (const char *)&queryFormat, "this->Find( key, hash, nodes ) == Base::s_nullNodeIndex") )
        __debugbreak();
      __asm { vmovups xmm0, [rsp+68h+var_28] }
      _RAX = &s_CG_VisionSet;
      v14 = v6 & 0x3FF;
      headNodeIndex = s_CG_VisionSet.m_assetMap.buckets[v14].headNodeIndex;
      s_CG_VisionSet.m_assetMap.buckets[v14].headNodeIndex = m_assetCount;
      s_CG_VisionSet.m_assetNodes[m_assetCount].m_nextAssetIndex = headNodeIndex;
      _RDX = 2i64 * m_assetCount;
      __asm { vmovups xmmword ptr [rax+rdx*8+408h], xmm0 }
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

