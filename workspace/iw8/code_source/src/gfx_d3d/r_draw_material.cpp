/*
==============
R_SetDecalVolumeIndexMiscParamsForSource
==============
*/

void __fastcall R_SetDecalVolumeIndexMiscParamsForSource(GfxCmdBufSourceState *source, unsigned int decalVolumeIndex)
{
  ?R_SetDecalVolumeIndexMiscParamsForSource@@YAXPEAUGfxCmdBufSourceState@@I@Z(source, decalVolumeIndex);
}

/*
==============
R_SetLProbeIndirectionMiscParams
==============
*/

void __fastcall R_SetLProbeIndirectionMiscParams(const GfxModelLightingProbeInfo *lightingInfo, vec4_t *out)
{
  ?R_SetLProbeIndirectionMiscParams@@YAXPEBUGfxModelLightingProbeInfo@@AEATvec4_t@@@Z(lightingInfo, out);
}

/*
==============
R_SetSModelIndexMiscParams
==============
*/

void __fastcall R_SetSModelIndexMiscParams(unsigned int smodelIndex, vec4_t *miscObjectParams)
{
  ?R_SetSModelIndexMiscParams@@YAXIAEATvec4_t@@@Z(smodelIndex, miscObjectParams);
}

/*
==============
R_UpdateEyeSensorPupilSize
==============
*/

int __fastcall R_UpdateEyeSensorPupilSize(GfxCmdBufSourceState *source, float eyePupilSize)
{
  return ?R_UpdateEyeSensorPupilSize@@YAHPEAUGfxCmdBufSourceState@@M@Z(source, eyePupilSize);
}

/*
==============
R_SetEyeSensorPupilSize
==============
*/

void __fastcall R_SetEyeSensorPupilSize(GfxCmdBufSourceState *source, float eyePupilSize)
{
  ?R_SetEyeSensorPupilSize@@YAXPEAUGfxCmdBufSourceState@@M@Z(source, eyePupilSize);
}

/*
==============
R_UpdateMaterialEntityID
==============
*/

int __fastcall R_UpdateMaterialEntityID(GfxCmdBufSourceState *source, unsigned __int16 entityID)
{
  return ?R_UpdateMaterialEntityID@@YAHPEAUGfxCmdBufSourceState@@G@Z(source, entityID);
}

/*
==============
R_SetBoundingBoxData
==============
*/

void __fastcall R_SetBoundingBoxData(const Bounds *bounds, vec4_t *outBoundingBoxData)
{
  ?R_SetBoundingBoxData@@YAXAEBUBounds@@AEATvec4_t@@@Z(bounds, outBoundingBoxData);
}

/*
==============
R_MaskSourceState
==============
*/

void __fastcall R_MaskSourceState(GfxCmdBufSourceState *source, const GfxViewInfo *viewInfo, GlobalLightingFlags flags)
{
  ?R_MaskSourceState@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxViewInfo@@W4GlobalLightingFlags@@@Z(source, viewInfo, flags);
}

/*
==============
R_UpdateMaterialTime
==============
*/

int __fastcall R_UpdateMaterialTime(GfxCmdBufSourceState *source, float materialTime)
{
  return ?R_UpdateMaterialTime@@YAHPEAUGfxCmdBufSourceState@@M@Z(source, materialTime);
}

/*
==============
R_SetMiscObjectParamsForSource
==============
*/

void __fastcall R_SetMiscObjectParamsForSource(GfxCmdBufSourceState *source, const vec4_t *miscObjectParams)
{
  ?R_SetMiscObjectParamsForSource@@YAXPEAUGfxCmdBufSourceState@@AEBTvec4_t@@@Z(source, miscObjectParams);
}

/*
==============
R_SetMiscObjectParams
==============
*/

void __fastcall R_SetMiscObjectParams(const vec4_t *srcMicsObjectParams, vec4_t *miscObjectParams)
{
  ?R_SetMiscObjectParams@@YAXAEBTvec4_t@@AEAT1@@Z(srcMicsObjectParams, miscObjectParams);
}

/*
==============
R_UpdateScriptableTemperature
==============
*/

int __fastcall R_UpdateScriptableTemperature(GfxCmdBufSourceState *source, const vec2_t *temperature)
{
  return ?R_UpdateScriptableTemperature@@YAHPEAUGfxCmdBufSourceState@@AEBTvec2_t@@@Z(source, temperature);
}

/*
==============
R_SetPreciseWorldMatrixInstanceDataFromPrecise
==============
*/

void __fastcall R_SetPreciseWorldMatrixInstanceDataFromPrecise(GfxBaseInstanceData *instanceData, const base_vec3_t<int> *preciseOrigin, const vec4_t *orientation, const float scale)
{
  ?R_SetPreciseWorldMatrixInstanceDataFromPrecise@@YAXPEAUGfxBaseInstanceData@@AEBT?$base_vec3_t@H@@AEBTvec4_t@@M@Z(instanceData, preciseOrigin, orientation, scale);
}

/*
==============
R_SetSubdivPatchVelocitySkinnedParmsSurfData
==============
*/

void __fastcall R_SetSubdivPatchVelocitySkinnedParmsSurfData(GfxVelSkinSurfData *surfData, const GfxModelSkinnedSurface *modelSurf, const GfxModelMotionblurSkinnedSurface *motionblurSurf, int subdivLevel)
{
  ?R_SetSubdivPatchVelocitySkinnedParmsSurfData@@YAXPEAUGfxVelSkinSurfData@@PEBUGfxModelSkinnedSurface@@PEBUGfxModelMotionblurSkinnedSurface@@H@Z(surfData, modelSurf, motionblurSurf, subdivLevel);
}

/*
==============
R_SetPrecisePrevWorldMatrixInstanceDataFromPrecise
==============
*/

void __fastcall R_SetPrecisePrevWorldMatrixInstanceDataFromPrecise(GfxVelocityInstanceData *instanceData, const base_vec3_t<int> *preciseOrigin, const vec4_t *orientation, const float scale)
{
  ?R_SetPrecisePrevWorldMatrixInstanceDataFromPrecise@@YAXPEAUGfxVelocityInstanceData@@AEBT?$base_vec3_t@H@@AEBTvec4_t@@M@Z(instanceData, preciseOrigin, orientation, scale);
}

/*
==============
R_SetScriptablePackedColorEmissive
==============
*/

void __fastcall R_SetScriptablePackedColorEmissive(GfxCmdBufSourceState *source, const base_vec4_t<unsigned int> *scriptablePackedColorEmissive)
{
  ?R_SetScriptablePackedColorEmissive@@YAXPEAUGfxCmdBufSourceState@@AEBT?$base_vec4_t@I@@@Z(source, scriptablePackedColorEmissive);
}

/*
==============
R_SetBoundingBoxData
==============
*/

void __fastcall R_SetBoundingBoxData(const vec4_t *srcBoundingBoxData, vec4_t *outBoundingBoxData)
{
  ?R_SetBoundingBoxData@@YAXAEBTvec4_t@@AEAT1@@Z(srcBoundingBoxData, outBoundingBoxData);
}

/*
==============
R_SetSubdivVelocitySkinnedParmsSurfData
==============
*/

void __fastcall R_SetSubdivVelocitySkinnedParmsSurfData(GfxVelSkinSurfData *surfData, const GfxModelSkinnedSurface *modelSurf, const GfxModelMotionblurSkinnedSurface *motionblurSurf, int subdivLevel)
{
  ?R_SetSubdivVelocitySkinnedParmsSurfData@@YAXPEAUGfxVelSkinSurfData@@PEBUGfxModelSkinnedSurface@@PEBUGfxModelMotionblurSkinnedSurface@@H@Z(surfData, modelSurf, motionblurSurf, subdivLevel);
}

/*
==============
R_SetLProbeIndirectionMiscParamsSource
==============
*/

void __fastcall R_SetLProbeIndirectionMiscParamsSource(GfxCmdBufSourceState *source, const GfxModelLightingProbeInfo *lightingInfo)
{
  ?R_SetLProbeIndirectionMiscParamsSource@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxModelLightingProbeInfo@@@Z(source, lightingInfo);
}

/*
==============
R_UpdateScriptablePackedColorEmissive
==============
*/

int __fastcall R_UpdateScriptablePackedColorEmissive(GfxCmdBufSourceState *source, const base_vec4_t<unsigned int> *scriptablePackedColorEmissive)
{
  return ?R_UpdateScriptablePackedColorEmissive@@YAHPEAUGfxCmdBufSourceState@@AEBT?$base_vec4_t@I@@@Z(source, scriptablePackedColorEmissive);
}

/*
==============
R_CalculateGameTime
==============
*/

void __fastcall R_CalculateGameTime(float sceneDefFloatTime, float materialTime, vec4_t *outGameTime)
{
  ?R_CalculateGameTime@@YAXMMAEATvec4_t@@@Z(sceneDefFloatTime, materialTime, outGameTime);
}

/*
==============
R_SetGameTime
==============
*/

void __fastcall R_SetGameTime(GfxCmdBufSourceState *source, float gameTime)
{
  ?R_SetGameTime@@YAXPEAUGfxCmdBufSourceState@@M@Z(source, gameTime);
}

/*
==============
R_SetScriptableTemperature
==============
*/

void __fastcall R_SetScriptableTemperature(GfxCmdBufSourceState *source, const vec2_t *temperature)
{
  ?R_SetScriptableTemperature@@YAXPEAUGfxCmdBufSourceState@@AEBTvec2_t@@@Z(source, temperature);
}

/*
==============
R_SetupDrawGroup
==============
*/

int __fastcall R_SetupDrawGroup(GfxCmdBufContext *context, GfxDrawGroupSetup drawGroup)
{
  return ?R_SetupDrawGroup@@YAHUGfxCmdBufContext@@TGfxDrawGroupSetup@@@Z(context, drawGroup);
}

/*
==============
R_SetBoundingBoxDataForSource
==============
*/

void __fastcall R_SetBoundingBoxDataForSource(GfxCmdBufSourceState *source, const Bounds *bounds)
{
  ?R_SetBoundingBoxDataForSource@@YAXPEAUGfxCmdBufSourceState@@AEBUBounds@@@Z(source, bounds);
}

/*
==============
R_SetVelocitySkinnedParmsSurfData
==============
*/

void __fastcall R_SetVelocitySkinnedParmsSurfData(GfxVelSkinSurfData *surfData, const GfxModelSkinnedSurface *modelSurf, const GfxModelMotionblurSkinnedSurface *motionblurSurf)
{
  ?R_SetVelocitySkinnedParmsSurfData@@YAXPEAUGfxVelSkinSurfData@@PEBUGfxModelSkinnedSurface@@PEBUGfxModelMotionblurSkinnedSurface@@@Z(surfData, modelSurf, motionblurSurf);
}

/*
==============
R_SetMiscObjectSurfData
==============
*/

void __fastcall R_SetMiscObjectSurfData(GfxBaseXModelSurfData *surfData, const vec4_t *srcMiscObjectParams)
{
  ?R_SetMiscObjectSurfData@@YAXPEAUGfxBaseXModelSurfData@@AEBTvec4_t@@@Z(surfData, srcMiscObjectParams);
}

/*
==============
R_SetDecalVolumeIndexMiscParams
==============
*/

void __fastcall R_SetDecalVolumeIndexMiscParams(unsigned int volumeIndex, unsigned int uvbVirtPageStartOrSubdivCacheOffset, vec4_t *miscObjectParams)
{
  ?R_SetDecalVolumeIndexMiscParams@@YAXIIAEATvec4_t@@@Z(volumeIndex, uvbVirtPageStartOrSubdivCacheOffset, miscObjectParams);
}

/*
==============
R_SetMaterialEntityID
==============
*/

void __fastcall R_SetMaterialEntityID(GfxCmdBufSourceState *source, unsigned __int16 entityID)
{
  ?R_SetMaterialEntityID@@YAXPEAUGfxCmdBufSourceState@@G@Z(source, entityID);
}

/*
==============
R_SetBoundingBoxDataForSource
==============
*/

void __fastcall R_SetBoundingBoxDataForSource(GfxCmdBufSourceState *source, const vec4_t *boundingBoxData)
{
  ?R_SetBoundingBoxDataForSource@@YAXPEAUGfxCmdBufSourceState@@AEBTvec4_t@@@Z(source, boundingBoxData);
}

/*
==============
R_CalculateGameTime
==============
*/
void R_CalculateGameTime(float sceneDefFloatTime, float materialTime, vec4_t *outGameTime)
{
  float v6; 
  float s; 
  float c; 

  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm7, 1 }
  v6 = (float)(sceneDefFloatTime - materialTime) - *(float *)&_XMM2;
  FastSinCos(v6 * 6.2831855, &s, &c);
  *(float *)&_XMM2 = c;
  outGameTime->v[0] = s;
  outGameTime->v[1] = *(float *)&_XMM2;
  outGameTime->v[2] = v6;
  outGameTime->v[3] = fmodf_0(sceneDefFloatTime - materialTime, 43200.0);
}

/*
==============
R_MaskSourceState
==============
*/
void R_MaskSourceState(GfxCmdBufSourceState *source, const GfxViewInfo *viewInfo, GlobalLightingFlags flags)
{
  char v3; 

  v3 = flags;
  if ( r_bindingValidation->current.enabled )
  {
    if ( (flags & 0x10) == 0 )
    {
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[10] = NULL;
    }
    if ( (v3 & 2) == 0 )
    {
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[0] = NULL;
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentBuffers[10] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[11] = NULL;
    }
    if ( (v3 & 4) == 0 )
    {
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[2] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[3] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[4] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[1] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[5] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[6] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[7] = NULL;
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentBuffers[11] = NULL;
    }
    if ( (v3 & 8) == 0 )
    {
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[8] = NULL;
    }
    if ( (v3 & 0x20) == 0 )
    {
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[25] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[26] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[27] = NULL;
    }
    if ( (v3 & 0x40) == 0 )
    {
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1585, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codePersistentImages[16] = NULL;
    }
    if ( (v3 & 0x80) == 0 )
    {
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codeImages[36] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codeImages[37] = NULL;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      source->input.codeImages[38] = NULL;
    }
  }
}

/*
==============
R_SetBoundingBoxData
==============
*/
void R_SetBoundingBoxData(const vec4_t *srcBoundingBoxData, vec4_t *outBoundingBoxData)
{
  *outBoundingBoxData = *srcBoundingBoxData;
}

/*
==============
R_SetBoundingBoxData
==============
*/
void R_SetBoundingBoxData(const Bounds *bounds, vec4_t *outBoundingBoxData)
{
  *(double *)outBoundingBoxData->v = *(double *)bounds->midPoint.v;
  outBoundingBoxData->v[2] = bounds->midPoint.v[2];
  _XMM0 = LODWORD(bounds->halfSize.v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rcx+0Ch]
    vmaxss  xmm2, xmm1, dword ptr [rcx+14h]
  }
  outBoundingBoxData->v[3] = *(float *)&_XMM2;
}

/*
==============
R_SetBoundingBoxDataForSource
==============
*/
void R_SetBoundingBoxDataForSource(GfxCmdBufSourceState *source, const vec4_t *boundingBoxData)
{
  source->input.consts[151] = *boundingBoxData;
  ++source->constVersions[151];
}

/*
==============
R_SetBoundingBoxDataForSource
==============
*/
void R_SetBoundingBoxDataForSource(GfxCmdBufSourceState *source, const Bounds *bounds)
{
  __m128 v4; 
  float v5; 

  _XMM0 = LODWORD(bounds->halfSize.v[1]);
  __asm { vmaxss  xmm1, xmm0, dword ptr [rdx+0Ch] }
  v4 = (__m128)*(unsigned __int64 *)bounds->midPoint.v;
  v5 = bounds->midPoint.v[2];
  __asm { vmaxss  xmm2, xmm1, dword ptr [rdx+14h] }
  source->input.consts[151].v[0] = v4.m128_f32[0];
  source->input.consts[151].v[1] = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
  source->input.consts[151].v[2] = v5;
  source->input.consts[151].v[3] = *(float *)&_XMM2;
  ++source->constVersions[151];
}

/*
==============
R_SetDecalVolumeIndexMiscParams
==============
*/
void R_SetDecalVolumeIndexMiscParams(unsigned int volumeIndex, unsigned int uvbVirtPageStartOrSubdivCacheOffset, vec4_t *miscObjectParams)
{
  miscObjectParams->v[0] = *(float *)&uvbVirtPageStartOrSubdivCacheOffset;
  miscObjectParams->v[3] = *(float *)&volumeIndex;
}

/*
==============
R_SetDecalVolumeIndexMiscParamsForSource
==============
*/
void R_SetDecalVolumeIndexMiscParamsForSource(GfxCmdBufSourceState *source, unsigned int decalVolumeIndex)
{
  source->input.consts[150].v[0] = 0;
  source->input.consts[150].v[3] = *(float *)&decalVolumeIndex;
  ++source->constVersions[150];
}

/*
==============
R_SetEyeSensorPupilSize
==============
*/
void R_SetEyeSensorPupilSize(GfxCmdBufSourceState *source, float eyePupilSize)
{
  unsigned int v4; 

  if ( !R_EyeSensor_IsEnabled() || (v4 = 1, eyePupilSize == 0.0) )
    v4 = 0;
  _XMM0 = v4;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_0);
  source->input.consts[20].v[1] = eyePupilSize;
  __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
  source->input.consts[20].v[0] = *(float *)&_XMM0;
  *(_QWORD *)&source->input.consts[20].xyz.z = 0i64;
  ++source->constVersions[20];
}

/*
==============
R_SetGameTime
==============
*/
void R_SetGameTime(GfxCmdBufSourceState *source, float gameTime)
{
  float floatTime; 
  float v5; 
  float v7; 
  float s; 
  float c[3]; 

  floatTime = source->sceneDef.floatTime;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm6, 1 }
  v5 = floatTime - *(float *)&_XMM2;
  FastSinCos((float)(floatTime - *(float *)&_XMM2) * 6.2831855, &s, c);
  v7 = fmodf_0(floatTime, 43200.0);
  *(float *)&_XMM2 = c[0];
  source->input.consts[2].v[0] = s;
  source->input.consts[2].v[1] = *(float *)&_XMM2;
  source->input.consts[2].v[2] = v5;
  source->input.consts[2].v[3] = v7;
  ++source->constVersions[2];
}

/*
==============
R_SetLProbeIndirectionMiscParams
==============
*/
void R_SetLProbeIndirectionMiscParams(const GfxModelLightingProbeInfo *lightingInfo, vec4_t *out)
{
  if ( lightingInfo )
  {
    LODWORD(out->xyz.y) = (GfxModelLightingProbeInfo)lightingInfo->lgv.allocatedVolumeInfoSlot;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 525, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
      __debugbreak();
    LODWORD(out->v[1]) = MEMORY[0];
  }
}

/*
==============
R_SetLProbeIndirectionMiscParamsSource
==============
*/
void R_SetLProbeIndirectionMiscParamsSource(GfxCmdBufSourceState *source, const GfxModelLightingProbeInfo *lightingInfo)
{
  if ( !lightingInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 549, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 525, ASSERT_TYPE_ASSERT, "(lightingInfo)", (const char *)&queryFormat, "lightingInfo") )
      __debugbreak();
  }
  LODWORD(source->input.consts[150].xyz.y) = (GfxModelLightingProbeInfo)lightingInfo->lgv.allocatedVolumeInfoSlot;
  ++source->constVersions[150];
}

/*
==============
R_SetMaterialEntityID
==============
*/
void R_SetMaterialEntityID(GfxCmdBufSourceState *source, unsigned __int16 entityID)
{
  source->input.consts[15].v[0] = (float)(unsigned __int8)entityID * 0.0039215689;
  source->input.consts[15].v[1] = (float)HIBYTE(entityID) * 0.0039215689;
  source->input.consts[15].v[2] = COERCE_FLOAT(entityID);
  source->input.consts[15].v[3] = 1.0;
  ++source->constVersions[15];
}

/*
==============
R_SetMiscObjectParams
==============
*/
void R_SetMiscObjectParams(const vec4_t *srcMicsObjectParams, vec4_t *miscObjectParams)
{
  *miscObjectParams = *srcMicsObjectParams;
}

/*
==============
R_SetMiscObjectParamsForSource
==============
*/
void R_SetMiscObjectParamsForSource(GfxCmdBufSourceState *source, const vec4_t *miscObjectParams)
{
  float v2; 
  float v3; 
  float v4; 

  v2 = miscObjectParams->v[3];
  v3 = miscObjectParams->v[2];
  v4 = miscObjectParams->v[0];
  source->input.consts[150].v[1] = miscObjectParams->v[1];
  source->input.consts[150].v[2] = v3;
  source->input.consts[150].v[3] = v2;
  source->input.consts[150].v[0] = v4;
  ++source->constVersions[150];
}

/*
==============
R_SetMiscObjectSurfData
==============
*/
void R_SetMiscObjectSurfData(GfxBaseXModelSurfData *surfData, const vec4_t *srcMiscObjectParams)
{
  surfData->miscObjectParams = *srcMiscObjectParams;
}

/*
==============
R_SetPrecisePrevWorldMatrixInstanceDataFromPrecise
==============
*/
void R_SetPrecisePrevWorldMatrixInstanceDataFromPrecise(GfxVelocityInstanceData *instanceData, const base_vec3_t<int> *preciseOrigin, const vec4_t *orientation, const float scale)
{
  instanceData->prevFrameQuat = *orientation;
  instanceData->prevFramePreciseOrigin = *preciseOrigin;
  instanceData->prevFrameScale = scale;
}

/*
==============
R_SetPreciseWorldMatrixInstanceDataFromPrecise
==============
*/
void R_SetPreciseWorldMatrixInstanceDataFromPrecise(GfxBaseInstanceData *instanceData, const base_vec3_t<int> *preciseOrigin, const vec4_t *orientation, const float scale)
{
  instanceData->quat = *orientation;
  instanceData->preciseOrigin = *preciseOrigin;
  instanceData->scale = scale;
}

/*
==============
R_SetSModelIndexMiscParams
==============
*/
void R_SetSModelIndexMiscParams(unsigned int smodelIndex, vec4_t *miscObjectParams)
{
  miscObjectParams->v[0] = *(float *)&smodelIndex;
}

/*
==============
R_SetScriptablePackedColorEmissive
==============
*/
void R_SetScriptablePackedColorEmissive(GfxCmdBufSourceState *source, const base_vec4_t<unsigned int> *scriptablePackedColorEmissive)
{
  source->input.consts[18] = (vec4_t)*scriptablePackedColorEmissive;
  ++source->constVersions[18];
}

/*
==============
R_SetScriptableTemperature
==============
*/
void R_SetScriptableTemperature(GfxCmdBufSourceState *source, const vec2_t *temperature)
{
  float v2; 

  v2 = temperature->v[1];
  source->input.consts[19].v[0] = temperature->v[0];
  *(_QWORD *)&source->input.consts[19].xyz.z = 0i64;
  source->input.consts[19].v[1] = v2;
  ++source->constVersions[19];
}

/*
==============
R_SetSubdivPatchVelocitySkinnedParmsSurfData
==============
*/
void R_SetSubdivPatchVelocitySkinnedParmsSurfData(GfxVelSkinSurfData *surfData, const GfxModelSkinnedSurface *modelSurf, const GfxModelMotionblurSkinnedSurface *motionblurSurf, int subdivLevel)
{
  unsigned int subdivCacheOffset; 
  XSurface *xsurf; 
  XSurfaceSubdivLevel *levels; 
  float v8; 

  if ( !motionblurSurf || (subdivCacheOffset = motionblurSurf->cacheOffset[1], subdivCacheOffset == -1) )
    subdivCacheOffset = modelSurf->subdivCacheOffset;
  if ( subdivLevel > 0 )
  {
    xsurf = modelSurf->xsurf;
    levels = xsurf->subdiv->levels;
    subdivCacheOffset += (R_GetSubdivVertex1Stride(xsurf) + 12) * levels[subdivLevel - 1].vertOffset;
  }
  v8 = (float)subdivCacheOffset;
  surfData->velocitySkinnedParms.v[3] = v8;
  *(_QWORD *)surfData->velocitySkinnedParms.v = 1065353216i64;
  surfData->velocitySkinnedParms.v[2] = 12.0;
}

/*
==============
R_SetSubdivVelocitySkinnedParmsSurfData
==============
*/
void R_SetSubdivVelocitySkinnedParmsSurfData(GfxVelSkinSurfData *surfData, const GfxModelSkinnedSurface *modelSurf, const GfxModelMotionblurSkinnedSurface *motionblurSurf, int subdivLevel)
{
  int subdivCacheOffset; 
  unsigned int v6; 

  if ( !motionblurSurf || (subdivCacheOffset = motionblurSurf->cacheOffset[1], subdivCacheOffset == -1) )
    subdivCacheOffset = modelSurf->subdivCacheOffset;
  v6 = (R_GetSubdivVertex1Stride(modelSurf->xsurf) + 12) * modelSurf->xsurf->subdiv->levels[subdivLevel].vertOffset;
  *(_QWORD *)surfData->velocitySkinnedParms.v = 1065353216i64;
  surfData->velocitySkinnedParms.v[2] = 12.0;
  surfData->velocitySkinnedParms.v[3] = (float)(int)(v6 + subdivCacheOffset);
}

/*
==============
R_SetVelocitySkinnedParmsSurfData
==============
*/
void R_SetVelocitySkinnedParmsSurfData(GfxVelSkinSurfData *surfData, const GfxModelSkinnedSurface *modelSurf, const GfxModelMotionblurSkinnedSurface *motionblurSurf)
{
  if ( !motionblurSurf )
    motionblurSurf = (const GfxModelMotionblurSkinnedSurface *)modelSurf;
  surfData->velocitySkinnedParms.v[3] = (float)motionblurSurf->cacheOffset[0];
  *(_QWORD *)surfData->velocitySkinnedParms.v = 1065353216i64;
  surfData->velocitySkinnedParms.v[2] = 20.0;
}

/*
==============
R_SetupDrawGroup
==============
*/
__int64 R_SetupDrawGroup(GfxCmdBufContext *context, GfxDrawGroupSetup drawGroup)
{
  __int64 packed_low; 
  Material *MaterialAtIndex; 
  char v6; 
  GfxCmdBufSourceState *source; 
  int baseTechType; 
  MaterialTechniqueSet *TechniqueSet; 
  unsigned int v10; 
  bool debugShaderEnabled; 
  GfxCmdBufSourceState *v12; 
  int v13; 
  MaterialGeometryType materialType; 
  unsigned int v15; 
  GfxDrawListType drawListType; 
  char v17; 
  char v18; 
  int v19; 
  const MaterialTechnique *Technique; 
  GfxCmdBufState *state; 
  unsigned int mtlFlagsFilter; 
  bool v23; 
  unsigned __int16 flags; 
  int v25; 
  unsigned int v26; 
  __int64 v28; 
  __int64 v29; 

  packed_low = LOWORD(drawGroup.packed);
  if ( LOWORD(drawGroup.packed) >= rgp.materialCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 30, ASSERT_TYPE_ASSERT, "(unsigned)( materialSortedIndex ) < (unsigned)( rgp.materialCount )", "materialSortedIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", LOWORD(drawGroup.packed), rgp.materialCount) )
      __debugbreak();
    if ( (unsigned int)packed_low >= rgp.materialCount )
    {
      LODWORD(v29) = rgp.materialCount;
      LODWORD(v28) = packed_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v28, v29) )
        __debugbreak();
    }
  }
  MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[packed_low]);
  v6 = BYTE2(drawGroup.packed) & 1;
  source = context->source;
  *((_BYTE *)source + 11668) &= ~8u;
  baseTechType = source->baseTechType;
  if ( (unsigned int)(baseTechType % 39 - 30) <= 3 )
  {
    TechniqueSet = Material_GetTechniqueSet(MaterialAtIndex);
    if ( !TechniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 515, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
      __debugbreak();
    if ( (TechniqueSet->techniqueMask.mask[0] & 0x40000000) != 0 )
    {
      *((_BYTE *)context->source + 11668) |= 8u;
      if ( baseTechType == 30 && rg.debugOverdrawOverlay )
        baseTechType = 33;
    }
    else
    {
      switch ( baseTechType )
      {
        case 30:
          baseTechType = 34;
          break;
        case 31:
          baseTechType = 35;
          break;
        case 32:
          baseTechType = 36;
          break;
        case 33:
          break;
        default:
          CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 324, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
          __debugbreak();
      }
    }
  }
  v10 = 0;
  if ( (unsigned int)(baseTechType % 39 - 34) > 4 )
  {
    if ( (unsigned int)(baseTechType % 39) > 0x1A )
    {
      if ( baseTechType == 38 )
        *((_BYTE *)context->source + 11668) |= 8u;
    }
    else
    {
      v12 = context->source;
      *((_BYTE *)v12 + 11668) |= 8u;
      if ( (*((_BYTE *)v12 + 11668) & 0x10) != 0 )
        goto LABEL_125;
      if ( MaterialTechnique_TypeIsVelocity((MaterialTechniqueType)baseTechType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 99, ASSERT_TYPE_ASSERT, "(MaterialTechnique_TypeIsPrepass( techType ) && !MaterialTechnique_TypeIsVelocity( techType ))", (const char *)&queryFormat, "MaterialTechnique_TypeIsPrepass( techType ) && !MaterialTechnique_TypeIsVelocity( techType )") )
        __debugbreak();
      switch ( (drawGroup.packed >> 18) & 0x7F )
      {
        case 5u:
        case 6u:
        case 8u:
        case 0xAu:
          baseTechType += 3;
          break;
        case 7u:
        case 9u:
        case 0xBu:
          baseTechType += 6;
          break;
        default:
          break;
      }
      if ( (*((_BYTE *)v12 + 11668) & 0x10) != 0 )
      {
LABEL_125:
        if ( (MaterialAtIndex->materialType & 0x80000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 190, ASSERT_TYPE_ASSERT, "( Material_TypeIsModel( material->materialType ) )", "Material '%s' in DRAWLIST_EID_ONLY is not a model material and has no valid prepass replacement!", MaterialAtIndex->name) )
          __debugbreak();
        MaterialAtIndex = rgp.eidOnlyPrepassModelMaterial;
      }
      else
      {
        v13 = (LODWORD(MaterialAtIndex->drawSurf.packed.p1) >> 19) & 3;
        if ( v13 == 2 )
        {
          MaterialAtIndex = NULL;
        }
        else if ( !v13 )
        {
          materialType = MaterialAtIndex->materialType;
          if ( (materialType & 0x210000) == 0x200000 )
          {
            MaterialAtIndex = rgp.standardPrepassBModelMaterial;
          }
          else if ( (materialType & 0x200000) != 0 )
          {
            MaterialAtIndex = rgp.standardPrepassWorldMaterial;
          }
          else if ( (materialType & 0xA0000) == 655360 )
          {
            MaterialAtIndex = rgp.standardPrepassSplinedStaticModelMaterial;
          }
          else if ( (materialType & 0x90000) == 589824 )
          {
            MaterialAtIndex = rgp.standardPrepassStaticModelMaterial;
          }
          else if ( (materialType & 0x80000) != 0 )
          {
            MaterialAtIndex = rgp.standardPrepassModelMaterial;
          }
          else if ( (materialType & 0x100000) != 0 )
          {
            MaterialAtIndex = rgp.standardPrepassGlassMaterial;
          }
        }
      }
    }
  }
  else
  {
    *((_BYTE *)context->source + 11668) |= 8u;
    debugShaderEnabled = rg.debugShaderEnabled;
    if ( baseTechType == 34 && MaterialAtIndex && Material_GetTechnique(MaterialAtIndex, TECHNIQUE_LIT_FORWARDPLUS_BITMASK_DEBUG) && debugShaderEnabled )
      baseTechType = 37;
  }
  if ( (*((_BYTE *)context->source + 11668) & 0x20) != 0 )
  {
    v15 = baseTechType % 39;
    if ( (unsigned int)(baseTechType % 39) <= 0x1A || v15 - 34 <= 4 || v15 - 30 <= 3 )
    {
      drawListType = context->source->drawListType;
      if ( v15 > 0x1A && v15 - 34 > 4 && v15 - 30 > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 140, ASSERT_TYPE_ASSERT, "(MaterialTechnique_TypeIsPrepass( techType ) || MaterialTechnique_TypeIsLit( techType ) || MaterialTechnique_TypeIsEmissive( techType ))", (const char *)&queryFormat, "MaterialTechnique_TypeIsPrepass( techType ) || MaterialTechnique_TypeIsLit( techType ) || MaterialTechnique_TypeIsEmissive( techType )") )
        __debugbreak();
      if ( rg.vrs && rg.vrsEmissiveOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 142, ASSERT_TYPE_ASSERT, "(!( rg.vrs && rg.vrsEmissiveOnly ))", (const char *)&queryFormat, "!( rg.vrs && rg.vrsEmissiveOnly )") )
        __debugbreak();
      v17 = 0;
      if ( rg.vrsEmissiveOnly )
      {
        if ( (unsigned int)(drawListType - 19) <= 1 && v15 - 30 <= 3 )
          v17 = 1;
      }
      else
      {
        if ( rg.vrs )
          v17 = (v15 <= 0x1A) + 1;
        if ( v15 - 30 > 3 )
        {
          v18 = 0;
LABEL_79:
          if ( (drawGroup.packed & 0x20000) != 0 && v17 == 1 )
          {
            v17 = 1;
            if ( v18 )
              v17 = 2;
          }
          if ( v17 )
          {
            if ( v17 == 1 )
            {
              ++baseTechType;
            }
            else if ( v17 == 2 )
            {
              baseTechType += 2;
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 175, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
            {
              __debugbreak();
            }
          }
          v6 = BYTE2(drawGroup.packed) & 1;
          goto LABEL_95;
        }
      }
      v18 = 1;
      goto LABEL_79;
    }
  }
LABEL_95:
  v19 = baseTechType;
  if ( baseTechType > 38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_draw_material.cpp", 225, ASSERT_TYPE_ASSERT, "( techType ) <= ( TECHNIQUE_LAST )", "%s <= %s\n\t%i, %i", "techType", "TECHNIQUE_LAST", baseTechType, 38) )
    __debugbreak();
  switch ( 0x40000000u )
  {
    case 0u:
    case 5u:
      baseTechType += 117;
      if ( !v6 )
        baseTechType = v19;
      break;
    case 1u:
      if ( v6 )
        baseTechType += 156;
      break;
    case 3u:
    case 8u:
    case 9u:
      baseTechType += 39;
      break;
    case 4u:
    case 0xAu:
    case 0xBu:
      baseTechType += 78;
      break;
    default:
      break;
  }
  if ( MaterialAtIndex )
    Technique = Material_GetTechnique(MaterialAtIndex, (MaterialTechniqueType)baseTechType);
  else
    Technique = NULL;
  state = context->state;
  state->material = MaterialAtIndex;
  state->technique = Technique;
  state->techType = baseTechType;
  mtlFlagsFilter = context->source->mtlFlagsFilter;
  v23 = Technique == NULL;
  if ( !Technique )
    goto LABEL_121;
  if ( !mtlFlagsFilter )
  {
    v23 = Technique == NULL;
LABEL_121:
    LOBYTE(v10) = !v23;
    return v10;
  }
  flags = Technique->flags;
  v25 = 0;
  if ( (flags & 2) == 0 )
  {
    if ( (flags & 1) != 0 )
      v25 = 2;
    goto LABEL_119;
  }
  v26 = g_drawConsts.sortedMaterialKeys[LOWORD(drawGroup.packed)];
  if ( v26 < s_world.sortKeyDistortion )
  {
LABEL_115:
    if ( v26 >= s_world.sortKeyEffectDistortion )
      goto LABEL_116;
LABEL_119:
    LOBYTE(v10) = (mtlFlagsFilter & v25) == mtlFlagsFilter;
    return v10;
  }
  if ( v26 < s_world.sortKeyEffectDistortion )
  {
    v25 = 1;
    goto LABEL_115;
  }
LABEL_116:
  LOBYTE(v10) = (context->source->mtlFlagsFilter & 2) == context->source->mtlFlagsFilter;
  return v10;
}

/*
==============
R_UpdateEyeSensorPupilSize
==============
*/
__int64 R_UpdateEyeSensorPupilSize(GfxCmdBufSourceState *source, float eyePupilSize)
{
  __int64 result; 
  unsigned int v5; 

  if ( eyePupilSize == source->eyePupilSize )
    return 0i64;
  source->eyePupilSize = eyePupilSize;
  if ( !R_EyeSensor_IsEnabled() || (v5 = 1, eyePupilSize == 0.0) )
    v5 = 0;
  _XMM0 = v5;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_0);
  source->input.consts[20].v[1] = eyePupilSize;
  result = 1i64;
  __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
  source->input.consts[20].v[0] = *(float *)&_XMM0;
  *(_QWORD *)&source->input.consts[20].xyz.z = 0i64;
  ++source->constVersions[20];
  return result;
}

/*
==============
R_UpdateMaterialEntityID
==============
*/
__int64 R_UpdateMaterialEntityID(GfxCmdBufSourceState *source, unsigned __int16 entityID)
{
  __int64 result; 

  if ( entityID == source->materialEntityId )
    return 0i64;
  source->materialEntityId = entityID;
  source->input.consts[15].v[0] = (float)(unsigned __int8)entityID * 0.0039215689;
  source->input.consts[15].v[1] = (float)HIBYTE(entityID) * 0.0039215689;
  source->input.consts[15].v[2] = COERCE_FLOAT(entityID);
  source->input.consts[15].v[3] = 1.0;
  result = 1i64;
  ++source->constVersions[15];
  return result;
}

/*
==============
R_UpdateMaterialTime
==============
*/
__int64 R_UpdateMaterialTime(GfxCmdBufSourceState *source, float materialTime)
{
  __int64 result; 
  float floatTime; 
  float v7; 
  float v8; 
  float s; 
  float c[3]; 

  if ( materialTime == source->materialTime )
    return 0i64;
  floatTime = source->sceneDef.floatTime;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm6, 1 }
  v7 = floatTime - *(float *)&_XMM2;
  source->materialTime = materialTime;
  FastSinCos((float)(floatTime - *(float *)&_XMM2) * 6.2831855, &s, c);
  v8 = fmodf_0(floatTime, 43200.0);
  *(float *)&_XMM2 = c[0];
  result = 1i64;
  source->input.consts[2].v[0] = s;
  source->input.consts[2].v[1] = *(float *)&_XMM2;
  source->input.consts[2].v[2] = v7;
  source->input.consts[2].v[3] = v8;
  ++source->constVersions[2];
  return result;
}

/*
==============
R_UpdateScriptablePackedColorEmissive
==============
*/
__int64 R_UpdateScriptablePackedColorEmissive(GfxCmdBufSourceState *source, const base_vec4_t<unsigned int> *scriptablePackedColorEmissive)
{
  __int64 result; 

  if ( scriptablePackedColorEmissive->v[0] == source->scriptablePackedColorEmissive.v[0] && scriptablePackedColorEmissive->v[1] == source->scriptablePackedColorEmissive.v[1] && scriptablePackedColorEmissive->v[2] == source->scriptablePackedColorEmissive.v[2] && scriptablePackedColorEmissive->v[3] == source->scriptablePackedColorEmissive.v[3] )
    return 0i64;
  source->scriptablePackedColorEmissive = *scriptablePackedColorEmissive;
  source->input.consts[18] = (vec4_t)*scriptablePackedColorEmissive;
  result = 1i64;
  ++source->constVersions[18];
  return result;
}

/*
==============
R_UpdateScriptableTemperature
==============
*/
__int64 R_UpdateScriptableTemperature(GfxCmdBufSourceState *source, const vec2_t *temperature)
{
  __int64 result; 
  float v3; 

  if ( source->scriptableTemperature.v[0] == temperature->v[0] && source->scriptableTemperature.v[1] == temperature->v[1] )
    return 0i64;
  source->scriptableTemperature = *temperature;
  v3 = temperature->v[1];
  source->input.consts[19].v[0] = temperature->v[0];
  *(_QWORD *)&source->input.consts[19].xyz.z = 0i64;
  result = 1i64;
  source->input.consts[19].v[1] = v3;
  ++source->constVersions[19];
  return result;
}

