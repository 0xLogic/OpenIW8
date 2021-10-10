/*
==============
R_UpdateScriptableEntityData
==============
*/

void __fastcall R_UpdateScriptableEntityData(const LocalClientNum_t localClientNum, unsigned __int16 entityNum, Scriptable_MaterialOverrideType scriptableMaterialOverrideType, unsigned __int8 newValue)
{
  ?R_UpdateScriptableEntityData@@YAXW4LocalClientNum_t@@GW4Scriptable_MaterialOverrideType@@E@Z(localClientNum, entityNum, scriptableMaterialOverrideType, newValue);
}

/*
==============
R_AddViewmodelDObjToScene
==============
*/

void __fastcall R_AddViewmodelDObjToScene(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *entityMutableShaderData, const vec3_t *lightingOrigin, float materialTime, int markableViewmodel)
{
  ?R_AddViewmodelDObjToScene@@YAXPEBUDObj@@PEBUcpose_t@@IIAEBUGfxSceneEntityMutableShaderData@@AEBTvec3_t@@MH@Z(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, materialTime, markableViewmodel);
}

/*
==============
R_IsPrimaryLightLoaded
==============
*/

bool __fastcall R_IsPrimaryLightLoaded(const GfxBackEndData *backEndData, unsigned int lightIndex)
{
  return ?R_IsPrimaryLightLoaded@@YA_NPEBUGfxBackEndData@@I@Z(backEndData, lightIndex);
}

/*
==============
R_UpdateIsPrimaryLightLoaded
==============
*/

void __fastcall R_UpdateIsPrimaryLightLoaded(const GfxBackEndData *backEndData)
{
  ?R_UpdateIsPrimaryLightLoaded@@YAXPEBUGfxBackEndData@@@Z(backEndData);
}

/*
==============
R_UpdateViewSurfaceBounds
==============
*/

void __fastcall R_UpdateViewSurfaceBounds(const Bounds *surfBounds, GfxSceneViewType sceneViewType)
{
  ?R_UpdateViewSurfaceBounds@@YAXPEBUBounds@@W4GfxSceneViewType@@@Z(surfBounds, sceneViewType);
}

/*
==============
R_ClearScene
==============
*/

void R_ClearScene(void)
{
  ?R_ClearScene@@YAXXZ();
}

/*
==============
R_EyeHighlight_SetInfo
==============
*/

void __fastcall R_EyeHighlight_SetInfo(GfxViewInfo *viewInfo)
{
  ?R_EyeHighlight_SetInfo@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
GetSecureVec3
==============
*/

void __fastcall GetSecureVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  ?GetSecureVec3@@YAXAEBTvec3_t@@AEAT1@III@Z(from, to, xConst, yConst, zConst);
}

/*
==============
R_SetInvViewScale
==============
*/

void __fastcall R_SetInvViewScale(float invViewScale)
{
  ?R_SetInvViewScale@@YAXM@Z(invViewScale);
}

/*
==============
R_SceneSetupWeaponScope
==============
*/

void __fastcall R_SceneSetupWeaponScope(const GfxScopeInfo *scope)
{
  ?R_SceneSetupWeaponScope@@YAXPEBUGfxScopeInfo@@@Z(scope);
}

/*
==============
R_SetForwardPlusClusterWordsInfo
==============
*/

void __fastcall R_SetForwardPlusClusterWordsInfo(GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?R_SetForwardPlusClusterWordsInfo@@YAXPEAUGfxViewInfo@@PEBUGfxBackEndData@@@Z(viewInfo, data);
}

/*
==============
R_SetTonemapInfo
==============
*/

void __fastcall R_SetTonemapInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  ?R_SetTonemapInfo@@YAXPEAUGfxViewInfo@@PEBUGfxSceneParms@@@Z(viewInfo, sceneParms);
}

/*
==============
GfxSceneEntity_GetPrevPlacementOrigin
==============
*/

void __fastcall GfxSceneEntity_GetPrevPlacementOrigin(const GfxSceneEntity *sceneEnt, vec3_t *outOrigin)
{
  ?GfxSceneEntity_GetPrevPlacementOrigin@@YAXPEBUGfxSceneEntity@@AEATvec3_t@@@Z(sceneEnt, outOrigin);
}

/*
==============
R_ClearDObjInScene
==============
*/

void __fastcall R_ClearDObjInScene(unsigned int entnum)
{
  ?R_ClearDObjInScene@@YAXI@Z(entnum);
}

/*
==============
R_EndDObjScene
==============
*/

void R_EndDObjScene(void)
{
  ?R_EndDObjScene@@YAXXZ();
}

/*
==============
R_Set_IsPipClientView
==============
*/

void R_Set_IsPipClientView(void)
{
  ?R_Set_IsPipClientView@@YAXXZ();
}

/*
==============
R_SetupGlobalRenderingFeatures
==============
*/

void __fastcall R_SetupGlobalRenderingFeatures(int viewCount, bool frontend)
{
  ?R_SetupGlobalRenderingFeatures@@YAXH_N@Z(viewCount, frontend);
}

/*
==============
R_GenerateDrawSurfsCmd
==============
*/

void __fastcall R_GenerateDrawSurfsCmd(const void *const cmd)
{
  ?R_GenerateDrawSurfsCmd@@YAXQEBX@Z(cmd);
}

/*
==============
R_SetupViewProjectionMatrices
==============
*/

void __fastcall R_SetupViewProjectionMatrices(GfxViewParms *viewParms)
{
  ?R_SetupViewProjectionMatrices@@YAXPEAUGfxViewParms@@@Z(viewParms);
}

/*
==============
SetSecureVec3
==============
*/

void __fastcall SetSecureVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  ?SetSecureVec3@@YAXAEBTvec3_t@@AEAT1@III@Z(from, to, xConst, yConst, zConst);
}

/*
==============
R_ClearSceneView
==============
*/

void __fastcall R_ClearSceneView(LocalClientNum_t localClientNum)
{
  ?R_ClearSceneView@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
GfxSceneEntity_SetPrevPlacementOrigin
==============
*/

void __fastcall GfxSceneEntity_SetPrevPlacementOrigin(GfxSceneEntity *sceneEnt, const vec3_t *origin)
{
  ?GfxSceneEntity_SetPrevPlacementOrigin@@YAXPEAUGfxSceneEntity@@AEBTvec3_t@@@Z(sceneEnt, origin);
}

/*
==============
R_BeginDelayedSceneModels
==============
*/

void R_BeginDelayedSceneModels(void)
{
  ?R_BeginDelayedSceneModels@@YAXXZ();
}

/*
==============
R_SetWorstCaseMinObjectContribution
==============
*/

void __fastcall R_SetWorstCaseMinObjectContribution(const float umbraWorstCaseMinObjectContribution)
{
  ?R_SetWorstCaseMinObjectContribution@@YAXM@Z(umbraWorstCaseMinObjectContribution);
}

/*
==============
R_RemoveScriptableEntityData
==============
*/

void __fastcall R_RemoveScriptableEntityData(const LocalClientNum_t localClientNum, unsigned __int16 entityNum)
{
  ?R_RemoveScriptableEntityData@@YAXW4LocalClientNum_t@@G@Z(localClientNum, entityNum);
}

/*
==============
R_AddOmniLightToScene
==============
*/

bool __fastcall R_AddOmniLightToScene(const vec3_t *org, float radius, const vec3_t *colorLinearSrgb, float intensity, const ParticleModuleInitLightOmni *pModuleInitLightOmni, GfxLightDef *lightDef)
{
  return ?R_AddOmniLightToScene@@YA_NAEBTvec3_t@@M0MPEBUParticleModuleInitLightOmni@@PEAUGfxLightDef@@@Z(org, radius, colorLinearSrgb, intensity, pModuleInitLightOmni, lightDef);
}

/*
==============
GfxSceneEntity_GetPlacementOrigin
==============
*/

void __fastcall GfxSceneEntity_GetPlacementOrigin(const GfxSceneEntity *sceneEnt, vec3_t *outOrigin)
{
  ?GfxSceneEntity_GetPlacementOrigin@@YAXPEBUGfxSceneEntity@@AEATvec3_t@@@Z(sceneEnt, outOrigin);
}

/*
==============
R_AllocVolumetric
==============
*/

unsigned int __fastcall R_AllocVolumetric()
{
  return ?R_AllocVolumetric@@YAIXZ();
}

/*
==============
DelayedSceneDObj::DelayedSceneDObj
==============
*/

void __fastcall DelayedSceneDObj::DelayedSceneDObj(DelayedSceneDObj *this)
{
  ??0DelayedSceneDObj@@QEAA@XZ(this);
}

/*
==============
R_UnlinkEntity
==============
*/

void __fastcall R_UnlinkEntity(unsigned int localClientNum, unsigned int entnum)
{
  ?R_UnlinkEntity@@YAXII@Z(localClientNum, entnum);
}

/*
==============
GfxSceneEntity_SetBounds
==============
*/

void __fastcall GfxSceneEntity_SetBounds(GfxSceneEntityCull *sceneEntCull, const Bounds *bounds)
{
  ?GfxSceneEntity_SetBounds@@YAXPEAUGfxSceneEntityCull@@PEBUBounds@@@Z(sceneEntCull, bounds);
}

/*
==============
R_LinkDObjEntity_NoCull
==============
*/

unsigned int __fastcall R_LinkDObjEntity_NoCull(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, float radius)
{
  return ?R_LinkDObjEntity_NoCull@@YAIIIAEBTvec3_t@@M@Z(localClientNum, entnum, origin, radius);
}

/*
==============
R_AddReflectionProbeInstanceToScene
==============
*/

void __fastcall R_AddReflectionProbeInstanceToScene(const GfxReflectionProbeInstance *reflectionProbeInstance)
{
  ?R_AddReflectionProbeInstanceToScene@@YAXPEBUGfxReflectionProbeInstance@@@Z(reflectionProbeInstance);
}

/*
==============
RScene_InitObfuscation
==============
*/

void RScene_InitObfuscation(void)
{
  ?RScene_InitObfuscation@@YAXXZ();
}

/*
==============
R_InitDaltonizeOptions
==============
*/

void __fastcall R_InitDaltonizeOptions(GfxDaltonizeOptions *options, const GfxDaltonizeType mode, const float intensity, const unsigned __int8 enabledTargets, const unsigned __int8 curTarget)
{
  ?R_InitDaltonizeOptions@@YAXPEAUGfxDaltonizeOptions@@W4GfxDaltonizeType@@MEE@Z(options, mode, intensity, enabledTargets, curTarget);
}

/*
==============
R_ClearSceneForReflectionProbe
==============
*/

void R_ClearSceneForReflectionProbe(void)
{
  ?R_ClearSceneForReflectionProbe@@YAXXZ();
}

/*
==============
R_SetGlobalViewProjectionMatrix
==============
*/

void __fastcall R_SetGlobalViewProjectionMatrix(const refdef_t *refdef)
{
  ?R_SetGlobalViewProjectionMatrix@@YAXPEBUrefdef_t@@@Z(refdef);
}

/*
==============
R_LinkDynEntClient_NoCull
==============
*/

unsigned int __fastcall R_LinkDynEntClient_NoCull(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, const Bounds *bounds)
{
  return ?R_LinkDynEntClient_NoCull@@YAIW4LocalClientNum_t@@GW4DynEntityBasis@@PEBUBounds@@@Z(localClientNum, dynEntClientId, basis, bounds);
}

/*
==============
R_SetVolumeLightScatterInfo
==============
*/

void __fastcall R_SetVolumeLightScatterInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  ?R_SetVolumeLightScatterInfo@@YAXPEAUGfxViewInfo@@PEBUGfxSceneParms@@@Z(viewInfo, sceneParms);
}

/*
==============
R_IsSortPending
==============
*/

bool __fastcall R_IsSortPending()
{
  return ?R_IsSortPending@@YA_NXZ();
}

/*
==============
R_UpdatePlayerFadeEntityData
==============
*/

void __fastcall R_UpdatePlayerFadeEntityData(const GfxPlayerFadeEntityData *playerFadeData)
{
  ?R_UpdatePlayerFadeEntityData@@YAXAEBUGfxPlayerFadeEntityData@@@Z(playerFadeData);
}

/*
==============
R_AddBrushModelToSceneFromAngles
==============
*/

void __fastcall R_AddBrushModelToSceneFromAngles(const GfxBrushModel *bmodel, const vec3_t *origin, const vec3_t *angles, const vec3_t *prevOrigin, const vec3_t *prevAngles, unsigned int entnum, unsigned int renderFlags)
{
  ?R_AddBrushModelToSceneFromAngles@@YAXPEBUGfxBrushModel@@AEBTvec3_t@@111II@Z(bmodel, origin, angles, prevOrigin, prevAngles, entnum, renderFlags);
}

/*
==============
R_AddDynamicLightsWithShadowmap
==============
*/

void __fastcall R_AddDynamicLightsWithShadowmap(GfxViewInfo *viewInfo, GfxBackEndData *backEndDataOut)
{
  ?R_AddDynamicLightsWithShadowmap@@YAXPEAUGfxViewInfo@@PEAUGfxBackEndData@@@Z(viewInfo, backEndDataOut);
}

/*
==============
R_SetCameraForView
==============
*/

void __fastcall R_SetCameraForView(const RefdefView *view, GfxCamera *camera)
{
  ?R_SetCameraForView@@YAXPEBURefdefView@@PEAUGfxCamera@@@Z(view, camera);
}

/*
==============
R_LinkBModelEntity_NoCull
==============
*/

unsigned int __fastcall R_LinkBModelEntity_NoCull(unsigned int localClientNum, unsigned int entnum, GfxBrushModel *bmodel)
{
  return ?R_LinkBModelEntity_NoCull@@YAIIIPEAUGfxBrushModel@@@Z(localClientNum, entnum, bmodel);
}

/*
==============
R_RenderScene
==============
*/

void __fastcall R_RenderScene(const refdef_t *refdef, float lodOverride, unsigned int drawType, const GfxViewportFeatures *viewportFeaturesRequest)
{
  ?R_RenderScene@@YAXPEBUrefdef_t@@MIAEBUGfxViewportFeatures@@@Z(refdef, lodOverride, drawType, viewportFeaturesRequest);
}

/*
==============
R_LinkDynEntClientToCells
==============
*/

void __fastcall R_LinkDynEntClientToCells(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, const Bounds *bounds)
{
  ?R_LinkDynEntClientToCells@@YAXW4LocalClientNum_t@@GW4DynEntityBasis@@PEBUBounds@@@Z(localClientNum, dynEntClientId, basis, bounds);
}

/*
==============
R_UnLinkDynEntClient_NoCull
==============
*/

void __fastcall R_UnLinkDynEntClient_NoCull(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  ?R_UnLinkDynEntClient_NoCull@@YAXW4LocalClientNum_t@@GW4DynEntityBasis@@@Z(localClientNum, dynEntClientId, basis);
}

/*
==============
R_SetupViewportFeatures
==============
*/

void __fastcall R_SetupViewportFeatures(const GfxViewportFeatures *viewportFeaturesRequest, GfxViewportFeatures *features)
{
  ?R_SetupViewportFeatures@@YAXAEBUGfxViewportFeatures@@PEAU1@@Z(viewportFeaturesRequest, features);
}

/*
==============
R_HudOutlineApplyToRefdef
==============
*/

void __fastcall R_HudOutlineApplyToRefdef(refdef_t *refdef, const GfxScopeHudOutlineInfo *outlineInfo)
{
  ?R_HudOutlineApplyToRefdef@@YAXPEAUrefdef_t@@PEBUGfxScopeHudOutlineInfo@@@Z(refdef, outlineInfo);
}

/*
==============
R_ResetSceneEnts
==============
*/

void R_ResetSceneEnts(void)
{
  ?R_ResetSceneEnts@@YAXXZ();
}

/*
==============
GfxSceneEntity_GetLightingOrigin
==============
*/

void __fastcall GfxSceneEntity_GetLightingOrigin(const GfxSceneEntity *sceneEnt, vec3_t *outOrigin)
{
  ?GfxSceneEntity_GetLightingOrigin@@YAXPEBUGfxSceneEntity@@AEATvec3_t@@@Z(sceneEnt, outOrigin);
}

/*
==============
R_FxLightGridSampleCountReset
==============
*/

void R_FxLightGridSampleCountReset(void)
{
  ?R_FxLightGridSampleCountReset@@YAXXZ();
}

/*
==============
R_SetForwardPlusClusterInfo
==============
*/

void __fastcall R_SetForwardPlusClusterInfo(GfxViewInfo *viewInfo, unsigned int frustumWidth, unsigned int frustumHeight)
{
  ?R_SetForwardPlusClusterInfo@@YAXPEAUGfxViewInfo@@II@Z(viewInfo, frustumWidth, frustumHeight);
}

/*
==============
R_AddDelayedModelsToSceneCmd
==============
*/

void __fastcall R_AddDelayedModelsToSceneCmd(const void *const cmd)
{
  ?R_AddDelayedModelsToSceneCmd@@YAXQEBX@Z(cmd);
}

/*
==============
R_LinkDynEntClient
==============
*/

unsigned int __fastcall R_LinkDynEntClient(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, const Bounds *bounds)
{
  return ?R_LinkDynEntClient@@YAIW4LocalClientNum_t@@GW4DynEntityBasis@@PEBUBounds@@@Z(localClientNum, dynEntClientId, basis, bounds);
}

/*
==============
R_GetSceneSubPixelOffset
==============
*/

void __fastcall R_GetSceneSubPixelOffset(const refdef_t *refdef, const GfxViewportFeatures *viewportFeatures, vec2_t *outOffset, float *cameraMotion)
{
  ?R_GetSceneSubPixelOffset@@YAXPEBUrefdef_t@@AEBUGfxViewportFeatures@@AEATvec2_t@@PEAM@Z(refdef, viewportFeatures, outOffset, cameraMotion);
}

/*
==============
R_UpdateSound
==============
*/

void R_UpdateSound(void)
{
  ?R_UpdateSound@@YAXXZ();
}

/*
==============
R_Get_IsPipClientView
==============
*/

int __fastcall R_Get_IsPipClientView()
{
  return ?R_Get_IsPipClientView@@YAHXZ();
}

/*
==============
R_UpdateViewMaterialRenderTechflags
==============
*/

void __fastcall R_UpdateViewMaterialRenderTechflags(const GfxViewMaterialRenderFeatures *renderFeatures)
{
  ?R_UpdateViewMaterialRenderTechflags@@YAXPEBW4GfxViewMaterialRenderFeatures@@@Z(renderFeatures);
}

/*
==============
R_SetLodOrigin
==============
*/

void __fastcall R_SetLodOrigin(const refdef_t *refdef, float lodOverride)
{
  ?R_SetLodOrigin@@YAXPEBUrefdef_t@@M@Z(refdef, lodOverride);
}

/*
==============
GfxSceneEntity_GetBounds
==============
*/

void __fastcall GfxSceneEntity_GetBounds(const GfxSceneEntityCull *sceneEntCull, Bounds *outBounds)
{
  ?GfxSceneEntity_GetBounds@@YAXPEBUGfxSceneEntityCull@@PEAUBounds@@@Z(sceneEntCull, outBounds);
}

/*
==============
R_AccumulateMaterialRenderTechflags
==============
*/

void __fastcall R_AccumulateMaterialRenderTechflags(const Material *material, GfxViewMaterialRenderFeatures *renderFeatures, const vec3_t *origin)
{
  ?R_AccumulateMaterialRenderTechflags@@YAXPEBUMaterial@@PEAW4GfxViewMaterialRenderFeatures@@AEBTvec3_t@@@Z(material, renderFeatures, origin);
}

/*
==============
R_AccumulateSurfBounds
==============
*/

void __fastcall R_AccumulateSurfBounds(const Bounds *surfBounds, Bounds *accumulatedSurfBounds)
{
  ?R_AccumulateSurfBounds@@YAXPEBUBounds@@PEAU1@@Z(surfBounds, accumulatedSurfBounds);
}

/*
==============
R_AddVolumetricToScene
==============
*/

void __fastcall R_AddVolumetricToScene(const GfxVolumetric *volumetric)
{
  ?R_AddVolumetricToScene@@YAXPEBUGfxVolumetric@@@Z(volumetric);
}

/*
==============
R_UpdateCorpseFadeData
==============
*/

void __fastcall R_UpdateCorpseFadeData(const ntl::bitset<5120,0,unsigned __int64> *corpseFadeActive, const GfxCorpseFadeEntityData *corpseFade, const unsigned __int64 corpseFadeCount)
{
  ?R_UpdateCorpseFadeData@@YAXAEBV?$bitset@$0BEAA@$0A@_K@ntl@@PEBUGfxCorpseFadeEntityData@@_K@Z(corpseFadeActive, corpseFade, corpseFadeCount);
}

/*
==============
R_MarkSceneEnts
==============
*/

void R_MarkSceneEnts(void)
{
  ?R_MarkSceneEnts@@YAXXZ();
}

/*
==============
DelayedSceneDObj_SetLightingOrigin
==============
*/

void __fastcall DelayedSceneDObj_SetLightingOrigin(DelayedSceneDObj *sceneDObj, const vec3_t *origin)
{
  ?DelayedSceneDObj_SetLightingOrigin@@YAXPEAUDelayedSceneDObj@@AEBTvec3_t@@@Z(sceneDObj, origin);
}

/*
==============
R_UnlinkEntityFromCells
==============
*/

void __fastcall R_UnlinkEntityFromCells(unsigned int localClientNum, unsigned int entnum)
{
  ?R_UnlinkEntityFromCells@@YAXII@Z(localClientNum, entnum);
}

/*
==============
R_Estimate3DTextSize
==============
*/

int __fastcall R_Estimate3DTextSize(const vec3_t *top, const vec3_t *bottom)
{
  return ?R_Estimate3DTextSize@@YAHAEBTvec3_t@@0@Z(top, bottom);
}

/*
==============
R_InitScene
==============
*/

void R_InitScene(void)
{
  ?R_InitScene@@YAXXZ();
}

/*
==============
GfxSceneEntity_SetLightingOrigin
==============
*/

void __fastcall GfxSceneEntity_SetLightingOrigin(GfxSceneEntity *sceneEnt, const vec3_t *origin)
{
  ?GfxSceneEntity_SetLightingOrigin@@YAXPEAUGfxSceneEntity@@AEBTvec3_t@@@Z(sceneEnt, origin);
}

/*
==============
R_GetBrushModel
==============
*/

GfxBrushModel *__fastcall R_GetBrushModel(unsigned int modelIndex)
{
  return ?R_GetBrushModel@@YAPEAUGfxBrushModel@@I@Z(modelIndex);
}

/*
==============
R_PackEntityShaderData
==============
*/

void __fastcall R_PackEntityShaderData(const LocalClientNum_t localClientNum, unsigned __int16 entNum, unsigned __int16 scriptableEntNum, GfxSceneEntityMutableShaderData *entityShaderData, unsigned __int8 dataIndex, unsigned int genericMaterialData, DObjMaterialData *dobjMaterialData)
{
  ?R_PackEntityShaderData@@YAXW4LocalClientNum_t@@GGPEAUGfxSceneEntityMutableShaderData@@EIPEAUDObjMaterialData@@@Z(localClientNum, entNum, scriptableEntNum, entityShaderData, dataIndex, genericMaterialData, dobjMaterialData);
}

/*
==============
R_GetSceneLODScale
==============
*/

double __fastcall R_GetSceneLODScale(const RenderMemMode memMode)
{
  double result; 

  *(float *)&result = ?R_GetSceneLODScale@@YAMW4RenderMemMode@@@Z(memMode);
  return result;
}

/*
==============
R_GetGlobalPostAAMode
==============
*/

PostAAMode __fastcall R_GetGlobalPostAAMode()
{
  return ?R_GetGlobalPostAAMode@@YA?AW4PostAAMode@@XZ();
}

/*
==============
R_SetGlobalSkelTimeStamp
==============
*/

void __fastcall R_SetGlobalSkelTimeStamp(int curTimeStamp, int maxTimeStampDifference)
{
  ?R_SetGlobalSkelTimeStamp@@YAXHH@Z(curTimeStamp, maxTimeStampDifference);
}

/*
==============
R_AllocReflectionProbeInstance
==============
*/

unsigned int __fastcall R_AllocReflectionProbeInstance()
{
  return ?R_AllocReflectionProbeInstance@@YAIXZ();
}

/*
==============
R_FinalizeLighting
==============
*/

void __fastcall R_FinalizeLighting(const void *const cmd)
{
  ?R_FinalizeLighting@@YAXQEBX@Z(cmd);
}

/*
==============
R_GenerateSortedSunShadowCacheSurfs
==============
*/

void __fastcall R_GenerateSortedSunShadowCacheSurfs(GfxViewInfo *viewInfo, R_RT_Group *rtGroup, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES sunShadowCacheBeforeState)
{
  ?R_GenerateSortedSunShadowCacheSurfs@@YAXPEAUGfxViewInfo@@PEAUR_RT_Group@@VR_RT_DepthHandle@@2W4D3D12_RESOURCE_STATES@@@Z(viewInfo, rtGroup, sunshadowCacheRt, sunshadowCacheBackfaceRt, sunShadowCacheBeforeState);
}

/*
==============
R_SetPerceptualInfo
==============
*/

void __fastcall R_SetPerceptualInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  ?R_SetPerceptualInfo@@YAXPEAUGfxViewInfo@@PEBUGfxSceneParms@@@Z(viewInfo, sceneParms);
}

/*
==============
R_AddDynamicOmniLights
==============
*/

void __fastcall R_AddDynamicOmniLights(GfxViewInfo *viewInfo, GfxBackEndData *backEndDataOut)
{
  ?R_AddDynamicOmniLights@@YAXPEAUGfxViewInfo@@PEAUGfxBackEndData@@@Z(viewInfo, backEndDataOut);
}

/*
==============
R_SceneLightFrustumTestBox
==============
*/

bool __fastcall R_SceneLightFrustumTestBox(unsigned int sceneLightIndex, const Bounds *bounds)
{
  return ?R_SceneLightFrustumTestBox@@YA_NIPEBUBounds@@@Z(sceneLightIndex, bounds);
}

/*
==============
R_UnlinkDynEntClient
==============
*/

void __fastcall R_UnlinkDynEntClient(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  ?R_UnlinkDynEntClient@@YAXW4LocalClientNum_t@@GW4DynEntityBasis@@@Z(localClientNum, dynEntClientId, basis);
}

/*
==============
R_AddDrawCall
==============
*/

void __fastcall R_AddDrawCall(GfxViewInfo *viewInfo, const R_RT_Group *rtGroup, GfxDrawListType drawListType, unsigned int wrkrCmdType)
{
  ?R_AddDrawCall@@YAXPEAUGfxViewInfo@@PEBUR_RT_Group@@W4GfxDrawListType@@I@Z(viewInfo, rtGroup, drawListType, wrkrCmdType);
}

/*
==============
R_SetupWorldViewportFeatures
==============
*/

void __fastcall R_SetupWorldViewportFeatures(GfxViewportFeatures *features)
{
  ?R_SetupWorldViewportFeatures@@YAXPEAUGfxViewportFeatures@@@Z(features);
}

/*
==============
R_EndDelayedSceneModels
==============
*/

void __fastcall R_EndDelayedSceneModels(bool addToScene)
{
  ?R_EndDelayedSceneModels@@YAX_N@Z(addToScene);
}

/*
==============
R_LinkBModelEntity
==============
*/

unsigned int __fastcall R_LinkBModelEntity(unsigned int localClientNum, unsigned int entnum, GfxBrushModel *bmodel)
{
  return ?R_LinkBModelEntity@@YAIIIPEAUGfxBrushModel@@@Z(localClientNum, entnum, bmodel);
}

/*
==============
RScene_InitObfuscationReactiveMotion
==============
*/

void RScene_InitObfuscationReactiveMotion(void)
{
  ?RScene_InitObfuscationReactiveMotion@@YAXXZ();
}

/*
==============
R_AllocSceneModel
==============
*/

unsigned int __fastcall R_AllocSceneModel()
{
  return ?R_AllocSceneModel@@YAIXZ();
}

/*
==============
R_LinkDObjEntity
==============
*/

unsigned int __fastcall R_LinkDObjEntity(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, float radius)
{
  return ?R_LinkDObjEntity@@YAIIIAEBTvec3_t@@M@Z(localClientNum, entnum, origin, radius);
}

/*
==============
R_InitIsPrimaryLightLoaded
==============
*/

void R_InitIsPrimaryLightLoaded(void)
{
  ?R_InitIsPrimaryLightLoaded@@YAXXZ();
}

/*
==============
R_SceneLightFrustumTestSphere
==============
*/

bool __fastcall R_SceneLightFrustumTestSphere(unsigned int sceneLightIndex, const Sphere *sphere)
{
  return ?R_SceneLightFrustumTestSphere@@YA_NIPEBUSphere@@@Z(sceneLightIndex, sphere);
}

/*
==============
DelayedSceneDObj_GetLightingOrigin
==============
*/

void __fastcall DelayedSceneDObj_GetLightingOrigin(const DelayedSceneDObj *sceneDObj, vec3_t *outOrigin)
{
  ?DelayedSceneDObj_GetLightingOrigin@@YAXPEBUDelayedSceneDObj@@AEATvec3_t@@@Z(sceneDObj, outOrigin);
}

/*
==============
R_StartDelayedSceneModelWorker
==============
*/

void R_StartDelayedSceneModelWorker(void)
{
  ?R_StartDelayedSceneModelWorker@@YAXXZ();
}

/*
==============
R_SetupDefaultViewportFeatures
==============
*/

void __fastcall R_SetupDefaultViewportFeatures(GfxViewportFeatures *outViewportFeatures)
{
  ?R_SetupDefaultViewportFeatures@@YAXPEAUGfxViewportFeatures@@@Z(outViewportFeatures);
}

/*
==============
R_SetWhiteBalanceInfo
==============
*/

void __fastcall R_SetWhiteBalanceInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  ?R_SetWhiteBalanceInfo@@YAXPEAUGfxViewInfo@@PEBUGfxSceneParms@@@Z(viewInfo, sceneParms);
}

/*
==============
R_AddScriptableEntityData
==============
*/

unsigned __int8 __fastcall R_AddScriptableEntityData(const LocalClientNum_t localClientNum, unsigned __int16 entityNum, Scriptable_MaterialOverrideType scriptableMaterialOverrideType)
{
  return ?R_AddScriptableEntityData@@YAEW4LocalClientNum_t@@GW4Scriptable_MaterialOverrideType@@@Z(localClientNum, entityNum, scriptableMaterialOverrideType);
}

/*
==============
R_GetSceneWeaponScope
==============
*/

const GfxScopeInfo *__fastcall R_GetSceneWeaponScope()
{
  return ?R_GetSceneWeaponScope@@YAPEBUGfxScopeInfo@@XZ();
}

/*
==============
R_AddSpotShadows
==============
*/

void __fastcall R_AddSpotShadows(const void *const cmd)
{
  ?R_AddSpotShadows@@YAXQEBX@Z(cmd);
}

/*
==============
R_GetDefaultRenderMemMode
==============
*/

RenderMemMode __fastcall R_GetDefaultRenderMemMode()
{
  return ?R_GetDefaultRenderMemMode@@YA?AW4RenderMemMode@@XZ();
}

/*
==============
R_UnlinkEntity_NoCull
==============
*/

void __fastcall R_UnlinkEntity_NoCull(unsigned int localClientNum, unsigned int entnum)
{
  ?R_UnlinkEntity_NoCull@@YAXII@Z(localClientNum, entnum);
}

/*
==============
R_CGUmbraUpdateCmd
==============
*/

void __fastcall R_CGUmbraUpdateCmd(const void *const cmdData)
{
  ?R_CGUmbraUpdateCmd@@YAXQEBX@Z(cmdData);
}

/*
==============
R_Clear_IsPipClientView
==============
*/

void R_Clear_IsPipClientView(void)
{
  ?R_Clear_IsPipClientView@@YAXXZ();
}

/*
==============
R_AddSpotLightToScene
==============
*/

bool __fastcall R_AddSpotLightToScene(const vec3_t *org, const vec3_t *dir, const vec3_t *up, float radius, const vec3_t *colorLinearSrgb, float intensity, const ParticleModuleInitLightSpot *pModuleInitLightSpot, GfxLightDef *lightDef)
{
  return ?R_AddSpotLightToScene@@YA_NAEBTvec3_t@@00M0MPEBUParticleModuleInitLightSpot@@PEAUGfxLightDef@@@Z(org, dir, up, radius, colorLinearSrgb, intensity, pModuleInitLightSpot, lightDef);
}

/*
==============
R_DynamicLightFrustumTestSphere
==============
*/

bool __fastcall R_DynamicLightFrustumTestSphere(unsigned int dynLightIndex, const Sphere *sphere)
{
  return ?R_DynamicLightFrustumTestSphere@@YA_NIPEBUSphere@@@Z(dynLightIndex, sphere);
}

/*
==============
R_UpdateWeaponFadeEntityData
==============
*/

void __fastcall R_UpdateWeaponFadeEntityData(const GfxWeaponFadeEntityData *weaponFadeData)
{
  ?R_UpdateWeaponFadeEntityData@@YAXAEBUGfxWeaponFadeEntityData@@@Z(weaponFadeData);
}

/*
==============
GfxSceneEntity_SetPlacementOrigin
==============
*/

void __fastcall GfxSceneEntity_SetPlacementOrigin(GfxSceneEntity *sceneEnt, const vec3_t *origin)
{
  ?GfxSceneEntity_SetPlacementOrigin@@YAXPEAUGfxSceneEntity@@AEBTvec3_t@@@Z(sceneEnt, origin);
}

/*
==============
R_DynamicLightFrustumTestBox
==============
*/

bool __fastcall R_DynamicLightFrustumTestBox(unsigned int dynLightIndex, const Bounds *bounds)
{
  return ?R_DynamicLightFrustumTestBox@@YA_NIPEBUBounds@@@Z(dynLightIndex, bounds);
}

/*
==============
R_SetupPerspectiveViewProjectionMatrices
==============
*/

void __fastcall R_SetupPerspectiveViewProjectionMatrices(GfxViewParms *viewParms, R_ZPLANES zPlaneNear)
{
  ?R_SetupPerspectiveViewProjectionMatrices@@YAXPEAUGfxViewParms@@W4R_ZPLANES@@@Z(viewParms, zPlaneNear);
}

/*
==============
R_GetSceneGlass
==============
*/

const GfxSceneGlass *__fastcall R_GetSceneGlass(int pieceIndex)
{
  return ?R_GetSceneGlass@@YAPEBTGfxSceneGlass@@H@Z(pieceIndex);
}

/*
==============
R_AddDynamicLights
==============
*/

void __fastcall R_AddDynamicLights(const void *const cmd)
{
  ?R_AddDynamicLights@@YAXQEBX@Z(cmd);
}

/*
==============
R_AddDObjToScene
==============
*/

void __fastcall R_AddDObjToScene(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *entityMutableShaderData, const vec3_t *lightingOrigin, float materialTime)
{
  ?R_AddDObjToScene@@YAXPEBUDObj@@PEBUcpose_t@@IIAEBUGfxSceneEntityMutableShaderData@@AEBTvec3_t@@M@Z(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, materialTime);
}

/*
==============
R_PIP_SetViewInfoIndex
==============
*/

void __fastcall R_PIP_SetViewInfoIndex(const GfxViewport *vport)
{
  ?R_PIP_SetViewInfoIndex@@YAXPEBUGfxViewport@@@Z(vport);
}

/*
==============
R_IsSceneModelAddThread
==============
*/

int __fastcall R_IsSceneModelAddThread()
{
  return ?R_IsSceneModelAddThread@@YAHXZ();
}

/*
==============
R_ScopeDistortionTransform
==============
*/

void __fastcall R_ScopeDistortionTransform(const GfxViewInfo *viewInfo, const vec2_t *screenPos, vec2_t *screenPosOut)
{
  ?R_ScopeDistortionTransform@@YAXPEBUGfxViewInfo@@PEBTvec2_t@@PEAT2@@Z(viewInfo, screenPos, screenPosOut);
}

/*
==============
R_IsValidBrushModel
==============
*/

bool __fastcall R_IsValidBrushModel(int modelIndex)
{
  return ?R_IsValidBrushModel@@YA_NH@Z(modelIndex);
}

/*
==============
R_FxLightGridSampleCountInc
==============
*/

int __fastcall R_FxLightGridSampleCountInc(int increment)
{
  return ?R_FxLightGridSampleCountInc@@YAHH@Z(increment);
}

/*
==============
R_GetNextViewInfoIndex
==============
*/

void __fastcall R_GetNextViewInfoIndex(int *viewInfoIndex)
{
  ?R_GetNextViewInfoIndex@@YAXPEAH@Z(viewInfoIndex);
}

/*
==============
R_AddDrawCalls
==============
*/

void __fastcall R_AddDrawCalls(GfxViewInfo *viewInfo, const R_RT_Group *rtGroup, GfxDrawListType drawListBegin, GfxDrawListType drawListEnd, unsigned int wrkrCmdType)
{
  ?R_AddDrawCalls@@YAXPEAUGfxViewInfo@@PEBUR_RT_Group@@W4GfxDrawListType@@2I@Z(viewInfo, rtGroup, drawListBegin, drawListEnd, wrkrCmdType);
}

/*
==============
DelayedSceneDObj::DelayedSceneDObj
==============
*/
void DelayedSceneDObj::DelayedSceneDObj(DelayedSceneDObj *this)
{
  ;
}

/*
==============
DelayedSceneDObj_GetLightingOrigin
==============
*/
void DelayedSceneDObj_GetLightingOrigin(const DelayedSceneDObj *sceneDObj, vec3_t *outOrigin)
{
  if ( !sceneDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11736, ASSERT_TYPE_ASSERT, "(sceneDObj)", (const char *)&queryFormat, "sceneDObj") )
    __debugbreak();
  GetSecureVec3(&sceneDObj->lightingOrigin.lightingOrigin, outOrigin, s_lighting2_aab_X, s_lighting2_aab_Y, s_lighting2_aab_Z);
}

/*
==============
DelayedSceneDObj_SetLightingOrigin
==============
*/
void DelayedSceneDObj_SetLightingOrigin(DelayedSceneDObj *sceneDObj, const vec3_t *origin)
{
  if ( !sceneDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11755, ASSERT_TYPE_ASSERT, "(sceneDObj)", (const char *)&queryFormat, "sceneDObj") )
    __debugbreak();
  SetSecureVec3(origin, &sceneDObj->lightingOrigin.lightingOrigin, s_lighting2_aab_X, s_lighting2_aab_Y, s_lighting2_aab_Z);
}

/*
==============
DynamicSubsamplePattern
==============
*/
void DynamicSubsamplePattern(const refdef_t *refdef, const GfxViewportFeatures *viewportFeatures, const vec2_t scale, unsigned int frameCount, vec2_t *outOffset, float *cameraMotion)
{
  char v8; 
  __int64 v9; 
  GfxCamera *p_camera; 
  float v11; 
  __int64 v12; 
  __m256i v13; 
  float value; 
  float v15; 
  double v16; 
  int integer; 
  int v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  vec4_t vec; 
  vec3_t origin; 
  vec4_t v30; 
  vec4_t v31; 
  GfxCamera camera; 
  tmat44_t<vec4_t> v33; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> in1; 
  __m256i v39; 

  v8 = frameCount;
  v39 = _ymm;
  R_SetCameraForView(&refdef->view, &camera);
  MatrixForViewerOrthogonalNoOrigin(&camera.axis, &mtx);
  InfinitePerspectiveMatrix(camera.tanHalfFovX, camera.tanHalfFovY, camera.zPlanes[2], &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  v9 = (int)viewportFeatures->m_viewportType + 2i64 * (int)refdef->localClientNum;
  if ( g_previousFrameViewParmsIsValid[0][v9] )
  {
    p_camera = &g_previousFrameViewParms[0][v9].viewParms.camera;
    v11 = p_camera->origin.v[1] - camera.origin.v[1];
    origin.v[0] = p_camera->origin.v[0] - camera.origin.v[0];
    origin.v[2] = p_camera->origin.v[2] - camera.origin.v[2];
    origin.v[1] = v11;
    MatrixForViewerOrthogonal(&origin, &p_camera->axis, &in1);
    v12 = (int)viewportFeatures->m_viewportType + 2i64 * (int)refdef->localClientNum;
    v13 = *(__m256i *)g_previousFrameViewParms[0][v12].viewParms.projectionMatrix.m.m[0].v;
    *(__m256i *)v33.row2.v = *(__m256i *)g_previousFrameViewParms[0][v12].viewParms.projectionMatrix.m.row2.v;
    v33.m[2].v[0] = 0.0;
    v33.m[2].v[1] = 0.0;
    *(__m256i *)v33.m[0].v = v13;
    MatrixMultiply44Aligned(&in1, &v33, &mat);
  }
  else
  {
    mat = out;
  }
  value = r_smaaDynamicSubpixelPatternDistance->current.value;
  vec.v[0] = value * camera.axis.m[0].v[0];
  vec.v[1] = value * camera.axis.m[0].v[1];
  vec.v[2] = value * camera.axis.m[0].v[2];
  vec.v[3] = FLOAT_1_0;
  MatrixTransformVector44Aligned(&vec, &out, &v30);
  MatrixTransformVector44Aligned(&vec, &mat, &v31);
  v15 = (float)((float)((float)(1.0 / v30.v[3]) * v30.v[0]) - (float)((float)(1.0 / v31.v[3]) * v31.v[0])) / scale.v[0];
  v16 = I_fclamp(fsqrt((float)((float)((float)((float)((float)(1.0 / v30.v[3]) * v30.v[1]) - (float)((float)(1.0 / v31.v[3]) * v31.v[1])) * (float)(1.0 / scale.v[1])) * (float)((float)((float)((float)(1.0 / v30.v[3]) * v30.v[1]) - (float)((float)(1.0 / v31.v[3]) * v31.v[1])) * (float)(1.0 / scale.v[1]))) + (float)(v15 * v15)), 0.0, 1.0);
  *cameraMotion = *(float *)&v16;
  integer = r_smaaDynamicSubpixelPattern->current.integer;
  if ( !integer )
    goto LABEL_12;
  v18 = integer - 1;
  if ( !v18 )
  {
    v26 = outOffset->v[1];
    outOffset->v[0] = outOffset->v[0] - (float)(*(float *)&v16 * outOffset->v[0]);
    outOffset->v[1] = v26 - (float)(*(float *)&v16 * v26);
    return;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v23 = (float)(1.0 - *(float *)&v16) + (float)(*(float *)&v16 * 0.5);
    v24 = v23 * outOffset->v[0];
    v25 = v23 * outOffset->v[1];
    outOffset->v[0] = v24;
    outOffset->v[1] = v25;
LABEL_12:
    *cameraMotion = 0.0;
    return;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    if ( v20 == 1 )
      *outOffset = 0i64;
  }
  else
  {
    v21 = v8 & 3;
    v22 = (float)(*(float *)&v39.m256i_i32[2 * v21 + 1] - outOffset->v[1]) * *(float *)&v16;
    outOffset->v[0] = (float)((float)(*(float *)&v39.m256i_i32[2 * v21] - outOffset->v[0]) * *(float *)&v16) + outOffset->v[0];
    outOffset->v[1] = v22 + outOffset->v[1];
  }
}

/*
==============
GetSecureVec3
==============
*/
void GetSecureVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  float v5; 
  float v6; 
  __int64 v7; 

  v5 = from->v[1];
  v6 = from->v[0];
  LODWORD(to->v[2]) = zConst ^ LODWORD(v5) ^ (unsigned int)from ^ LODWORD(from->v[2]);
  LODWORD(to->v[1]) = yConst ^ LODWORD(v6) ^ LODWORD(v5) ^ (unsigned int)from;
  memset(&v7, 0, sizeof(v7));
  LODWORD(to->v[0]) = LODWORD(v6) ^ (unsigned int)from ^ ~xConst;
  zConst = LODWORD(to->v[0]);
  if ( (zConst & 0x7F800000) == 2139095040 || (zConst = LODWORD(to->v[1]), (zConst & 0x7F800000) == 2139095040) || (zConst = LODWORD(to->v[2]), (zConst & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11570, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
  }
}

/*
==============
GfxSceneEntity_GetBounds
==============
*/
void GfxSceneEntity_GetBounds(const GfxSceneEntityCull *sceneEntCull, Bounds *outBounds)
{
  if ( !sceneEntCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11694, ASSERT_TYPE_ASSERT, "(sceneEntCull)", (const char *)&queryFormat, "sceneEntCull") )
    __debugbreak();
  outBounds->halfSize.v[0] = sceneEntCull->bounds.bounds.halfSize.v[0];
  outBounds->halfSize.v[1] = sceneEntCull->bounds.bounds.halfSize.v[1];
  outBounds->halfSize.v[2] = sceneEntCull->bounds.bounds.halfSize.v[2];
  GetSecureVec3(&sceneEntCull->bounds.bounds.midPoint, &outBounds->midPoint, s_bounds_aab_X, s_bounds_aab_Y, s_bounds_aab_Z);
}

/*
==============
GfxSceneEntity_GetLightingOrigin
==============
*/
void GfxSceneEntity_GetLightingOrigin(const GfxSceneEntity *sceneEnt, vec3_t *outOrigin)
{
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11577, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  GetSecureVec3(&sceneEnt->lightingOrigin.lightingOrigin, outOrigin, s_lighting_aab_X, s_lighting_aab_Y, s_lighting_aab_Z);
}

/*
==============
GfxSceneEntity_GetPlacementOrigin
==============
*/
void GfxSceneEntity_GetPlacementOrigin(const GfxSceneEntity *sceneEnt, vec3_t *outOrigin)
{
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11616, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  GetSecureVec3(&sceneEnt->placement.placement.origin, outOrigin, s_origin_aab_X, s_origin_aab_Y, s_origin_aab_Z);
}

/*
==============
GfxSceneEntity_GetPrevPlacementOrigin
==============
*/
void GfxSceneEntity_GetPrevPlacementOrigin(const GfxSceneEntity *sceneEnt, vec3_t *outOrigin)
{
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11655, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  GetSecureVec3(&sceneEnt->prevPlacement.prevPlacement.origin, outOrigin, s_ps_origin_aab_X, s_ps_origin_aab_Y, s_ps_origin_aab_Z);
}

/*
==============
GfxSceneEntity_SetBounds
==============
*/
void GfxSceneEntity_SetBounds(GfxSceneEntityCull *sceneEntCull, const Bounds *bounds)
{
  if ( !sceneEntCull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11715, ASSERT_TYPE_ASSERT, "(sceneEntCull)", (const char *)&queryFormat, "sceneEntCull") )
    __debugbreak();
  sceneEntCull->bounds.bounds.halfSize.v[0] = bounds->halfSize.v[0];
  sceneEntCull->bounds.bounds.halfSize.v[1] = bounds->halfSize.v[1];
  sceneEntCull->bounds.bounds.halfSize.v[2] = bounds->halfSize.v[2];
  SetSecureVec3(&bounds->midPoint, &sceneEntCull->bounds.bounds.midPoint, s_bounds_aab_X, s_bounds_aab_Y, s_bounds_aab_Z);
}

/*
==============
GfxSceneEntity_SetLightingOrigin
==============
*/
void GfxSceneEntity_SetLightingOrigin(GfxSceneEntity *sceneEnt, const vec3_t *origin)
{
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11597, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  SetSecureVec3(origin, &sceneEnt->lightingOrigin.lightingOrigin, s_lighting_aab_X, s_lighting_aab_Y, s_lighting_aab_Z);
}

/*
==============
GfxSceneEntity_SetPlacementOrigin
==============
*/
void GfxSceneEntity_SetPlacementOrigin(GfxSceneEntity *sceneEnt, const vec3_t *origin)
{
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11635, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  SetSecureVec3(origin, &sceneEnt->placement.placement.origin, s_origin_aab_X, s_origin_aab_Y, s_origin_aab_Z);
}

/*
==============
GfxSceneEntity_SetPrevPlacementOrigin
==============
*/
void GfxSceneEntity_SetPrevPlacementOrigin(GfxSceneEntity *sceneEnt, const vec3_t *origin)
{
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11674, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  SetSecureVec3(origin, &sceneEnt->prevPlacement.prevPlacement.origin, s_ps_origin_aab_X, s_ps_origin_aab_Y, s_ps_origin_aab_Z);
}

/*
==============
RScene_InitObfuscation
==============
*/
void RScene_InitObfuscation(void)
{
  unsigned int v0; 
  bdRandom v1; 
  __int64 v2; 
  unsigned __int8 pbBuffer[64]; 

  v2 = -2i64;
  if ( !randomNumGenInit )
  {
    if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
      OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
    randomNumGenInit = 1;
  }
  if ( !BCryptGenRandom_0(s_provider, pbBuffer, 0x3Cu, 0) || (v0 = *(_DWORD *)pbBuffer) == 0 && !*(_DWORD *)&pbBuffer[4] )
  {
    bdRandom::bdRandom(&v1);
    bdRandom::nextUBytes(&v1, pbBuffer, 60);
    bdRandom::~bdRandom(&v1);
    v0 = *(_DWORD *)pbBuffer;
  }
  s_lighting_aab_X = v0;
  s_lighting_aab_Y = *(_DWORD *)&pbBuffer[4];
  s_lighting_aab_Z = *(_DWORD *)&pbBuffer[8];
  s_origin_aab_X = *(_DWORD *)&pbBuffer[12];
  s_origin_aab_Y = *(_DWORD *)&pbBuffer[16];
  s_origin_aab_Z = *(_DWORD *)&pbBuffer[20];
  s_ps_origin_aab_X = *(_DWORD *)&pbBuffer[24];
  s_ps_origin_aab_Y = *(_DWORD *)&pbBuffer[28];
  s_ps_origin_aab_Z = *(_DWORD *)&pbBuffer[32];
  s_bounds_aab_X = *(_DWORD *)&pbBuffer[36];
  s_bounds_aab_Y = *(_DWORD *)&pbBuffer[40];
  s_bounds_aab_Z = *(_DWORD *)&pbBuffer[44];
  s_lighting2_aab_X = *(_DWORD *)&pbBuffer[48];
  s_lighting2_aab_Y = *(_DWORD *)&pbBuffer[52];
  s_lighting2_aab_Z = *(_DWORD *)&pbBuffer[56];
  memset(pbBuffer, 0, 0x3Cui64);
}

/*
==============
RScene_InitObfuscationReactiveMotion
==============
*/
void RScene_InitObfuscationReactiveMotion(void)
{
  unsigned int v0; 
  bdRandom v1; 
  __int64 v2; 
  unsigned __int8 pbBuffer[24]; 

  v2 = -2i64;
  if ( !randomNumGenInit )
  {
    if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
      OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
    randomNumGenInit = 1;
  }
  if ( !BCryptGenRandom_0(s_provider, pbBuffer, 0x18u, 0) || (v0 = *(_DWORD *)pbBuffer) == 0 && !*(_DWORD *)&pbBuffer[4] )
  {
    bdRandom::bdRandom(&v1);
    bdRandom::nextUBytes(&v1, pbBuffer, 24);
    bdRandom::~bdRandom(&v1);
    v0 = *(_DWORD *)pbBuffer;
  }
  s_reactivemotion_aab_X = v0;
  s_reactivemotion_aab_Y = *(_DWORD *)&pbBuffer[4];
  s_reactivemotion_aab_Z = *(_DWORD *)&pbBuffer[8];
  s_reactivemotionsphere_aab_X = *(_DWORD *)&pbBuffer[12];
  s_reactivemotionsphere_aab_Y = *(_DWORD *)&pbBuffer[16];
  s_reactivemotionsphere_aab_Z = *(_DWORD *)&pbBuffer[20];
  memset(pbBuffer, 0, sizeof(pbBuffer));
}

/*
==============
R_AccumulateMaterialRenderTechflags
==============
*/
void R_AccumulateMaterialRenderTechflags(const Material *material, GfxViewMaterialRenderFeatures *renderFeatures, const vec3_t *origin)
{
  __int64 p1_low; 
  const char *name; 
  Material *MaterialAtIndex; 
  unsigned int v9; 
  MaterialTechniqueSet *techniqueSet; 
  const MaterialTechnique *TechSetTechnique; 
  char v12; 
  char v13; 
  const MaterialTechnique *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  __int64 v18; 
  __int64 v19; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 534, ASSERT_TYPE_ASSERT, "(mtl)", (const char *)&queryFormat, "mtl") )
    __debugbreak();
  p1_low = LOWORD(material->drawSurf.packed.p1);
  if ( (_DWORD)p1_low == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", material->name) )
    __debugbreak();
  if ( (unsigned int)p1_low >= rgp.materialCount )
  {
    LODWORD(v18) = p1_low;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v18, rgp.materialCount) )
      __debugbreak();
  }
  if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != material )
  {
    name = material->name;
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(v19) = rgp.materialCount;
      LODWORD(v18) = p1_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    MaterialAtIndex = DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 537, ASSERT_TYPE_ASSERT, "(R_GetSortedMaterial( mtlSortIndex ) == mtl)", "%s\n\t'%s' '%s'", "R_GetSortedMaterial( mtlSortIndex ) == mtl", MaterialAtIndex->name, name) )
      __debugbreak();
  }
  v9 = g_drawConsts.sortedMaterialKeys[p1_low];
  if ( !material->techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 465, ASSERT_TYPE_ASSERT, "( ( material->techniqueSet ) )", "( material->name ) = %s", material->name) )
    __debugbreak();
  techniqueSet = material->techniqueSet;
  if ( !techniqueSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 506, ASSERT_TYPE_ASSERT, "(techSet)", (const char *)&queryFormat, "techSet") )
    __debugbreak();
  TechSetTechnique = Material_GetTechSetTechnique(techniqueSet, TECHNIQUE_LIT_FORWARDPLUS_BITMASK);
  v12 = 0;
  v13 = 0;
  v14 = TechSetTechnique;
  if ( renderFeatures && TechSetTechnique )
  {
    if ( !rg.distortion )
    {
      if ( v9 < s_world.sortKeyDistortion && (TechSetTechnique->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3173, ASSERT_TYPE_ASSERT, "(!( sortedKey < s_world.sortKeyDistortion && ( ( technique->flags & (1 << 1) ) != 0 ) ))", (const char *)&queryFormat, "!( sortedKey < s_world.sortKeyDistortion && ( ( technique->flags & MTL_TECHFLAG_NEEDS_DISTORTION ) != 0 ) )") )
        __debugbreak();
      goto LABEL_36;
    }
    if ( (TechSetTechnique->flags & 2) == 0 )
    {
LABEL_36:
      if ( rg.ssrMode && (v14->flags & 1) != 0 )
      {
        *renderFeatures |= 2u;
        v13 = 1;
      }
      if ( (v14->flags & 4) != 0 )
        *renderFeatures |= 4u;
      if ( (v12 || v13) && r_showRenderFeatureCounts->current.integer == 1 )
      {
        v15 = nullString;
        v16 = nullString;
        if ( v13 )
          v16 = "SSR";
        if ( v12 )
          v15 = "D";
        v17 = j_va("%s %s", v15, v16);
        R_AddDebugString(&frontEndDataOut->debugGlobals, origin, &colorCyan, 5.0, v17);
      }
      return;
    }
    if ( v9 >= s_world.sortKeyDistortion )
    {
      if ( v9 >= s_world.sortKeyEffectDistortion )
        goto LABEL_30;
      *renderFeatures |= 1u;
    }
    if ( v9 < s_world.sortKeyEffectDistortion )
    {
LABEL_31:
      v12 = 1;
      goto LABEL_36;
    }
LABEL_30:
    *renderFeatures |= 2u;
    goto LABEL_31;
  }
}

/*
==============
R_AccumulateSurfBounds
==============
*/
void R_AccumulateSurfBounds(const Bounds *surfBounds, Bounds *accumulatedSurfBounds)
{
  Bounds_Expand(accumulatedSurfBounds, surfBounds);
}

/*
==============
R_AddBrushModelToSceneFromAngles
==============
*/
void R_AddBrushModelToSceneFromAngles(const GfxBrushModel *bmodel, const vec3_t *origin, const vec3_t *angles, const vec3_t *prevOrigin, const vec3_t *prevAngles, unsigned int entnum, unsigned int renderFlags)
{
  unsigned int brushModelCount; 
  DelayedSceneBrushModel *v12; 

  if ( g_delayedSceneModelGlob.delayingActive )
  {
    if ( !scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 950, ASSERT_TYPE_ASSERT, "(scene.allowAddDObj)", (const char *)&queryFormat, "scene.allowAddDObj") )
      __debugbreak();
    if ( bmodel->surfaceCount )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 783, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      brushModelCount = g_delayedSceneModelGlob.brushModelCount;
      if ( g_delayedSceneModelGlob.brushModelCount >= 0x200 )
      {
        R_FlushDelayedSceneModels(1);
        brushModelCount = g_delayedSceneModelGlob.brushModelCount;
        if ( g_delayedSceneModelGlob.brushModelCount >= 0x200 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 788, ASSERT_TYPE_ASSERT, "(g_delayedSceneModelGlob.brushModelCount < 512)", (const char *)&queryFormat, "g_delayedSceneModelGlob.brushModelCount < MAX_DELAYED_SCENE_BRUSH_MODEL") )
            __debugbreak();
          brushModelCount = g_delayedSceneModelGlob.brushModelCount;
        }
      }
      g_delayedSceneModelGlob.brushModelCount = brushModelCount + 1;
      v12 = &g_delayedSceneModelGlob.brushModels[(unsigned __int64)brushModelCount];
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 959, ASSERT_TYPE_ASSERT, "(brushInfo != 0)", (const char *)&queryFormat, "brushInfo != NULL") )
        __debugbreak();
      v12->bmodel = bmodel;
      v12->origin.v[0] = origin->v[0];
      v12->origin.v[1] = origin->v[1];
      v12->origin.v[2] = origin->v[2];
      v12->angles.v[0] = angles->v[0];
      v12->angles.v[1] = angles->v[1];
      v12->angles.v[2] = angles->v[2];
      v12->prevOrigin.v[0] = prevOrigin->v[0];
      v12->prevOrigin.v[1] = prevOrigin->v[1];
      v12->prevOrigin.v[2] = prevOrigin->v[2];
      v12->prevAngles = *prevAngles;
      v12->renderFlags = renderFlags;
      v12->entnum = truncate_cast<short,unsigned int>(entnum);
      R_TryDispatchDelayedSceneBatch();
    }
  }
  else
  {
    R_AddBrushModelToSceneFromAnglesInternal(bmodel, origin, angles, prevOrigin, prevAngles, entnum, renderFlags);
  }
}

/*
==============
R_AddBrushModelToSceneFromAnglesInternal
==============
*/
void R_AddBrushModelToSceneFromAnglesInternal(const GfxBrushModel *bmodel, const vec3_t *origin, const vec3_t *angles, const vec3_t *prevOrigin, const vec3_t *prevAngles, unsigned int entnum, unsigned int renderFlags)
{
  __int64 v11; 
  bool v12; 
  unsigned __int32 v13; 
  unsigned int v14; 
  __int64 v15; 

  if ( !bmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 904, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
    __debugbreak();
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v11 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_DWORD *)(v11 + 1728) )
      goto LABEL_11;
    v12 = *(_DWORD *)(v11 + 1724) == 0;
  }
  else
  {
    v12 = !Sys_IsMainThread();
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 905, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
LABEL_11:
  if ( r_drawEntities->current.enabled && r_drawBModels->current.enabled && bmodel->surfaceCount )
  {
    if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 866, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
      __debugbreak();
    if ( ((unsigned __int8)&scene.sceneBrushCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.sceneBrushCount) )
      __debugbreak();
    v13 = _InterlockedExchangeAdd(&scene.sceneBrushCount, 1u);
    if ( v13 < 0x200 )
    {
      v14 = renderFlags;
      v15 = v13;
      v12 = !rg.needVelocity;
      scene.sceneBrush[v15].bmodel = bmodel;
      scene.sceneBrush[v15].entnum = entnum;
      if ( !v12 )
        v14 = renderFlags | 0x200;
      scene.sceneBrush[v15].prevPlacement.origin.v[0] = prevOrigin->v[0];
      scene.sceneBrush[v15].prevPlacement.origin.v[1] = prevOrigin->v[1];
      scene.sceneBrush[v15].prevPlacement.origin.v[2] = prevOrigin->v[2];
      AnglesToQuat(prevAngles, &scene.sceneBrush[v15].prevPlacement.quat);
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_r_hudOutlineEnable, "r_hudOutlineEnable") )
        v14 &= ~2u;
      scene.sceneBrush[v15].renderFlags = v14;
      scene.sceneBrush[v15].placement.origin.v[0] = origin->v[0];
      scene.sceneBrush[v15].placement.origin.v[1] = origin->v[1];
      scene.sceneBrush[v15].placement.origin.v[2] = origin->v[2];
      AnglesToQuat(angles, &scene.sceneBrush[v15].placement.quat);
      R_MDAO_ResetVolumesProcessed((GfxBrushModel *)bmodel);
    }
    else
    {
      scene.sceneBrushCount = 512;
      R_WarnOncePerFrame(R_WARN_KNOWN_BRUSH, 512i64);
    }
  }
}

/*
==============
R_AddDObjToScene
==============
*/
void R_AddDObjToScene(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *entityMutableShaderData, const vec3_t *lightingOrigin, float materialTime)
{
  if ( g_delayedSceneModelGlob.delayingActive )
    R_AddDObjToSceneDelayed(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, materialTime, 0, 0);
  else
    R_AddDObjToSceneInternal(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, materialTime);
}

/*
==============
R_AddDObjToSceneDelayed
==============
*/
void R_AddDObjToSceneDelayed(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *entityMutableShaderData, const vec3_t *lightingOrigin, float materialTime, int isViewModel, int isMarkableViewModel)
{
  unsigned int dobjCount; 
  DelayedSceneDObj *v14; 
  __int16 v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int128 v18; 
  unsigned int fmt; 

  if ( !scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2158, ASSERT_TYPE_ASSERT, "(scene.allowAddDObj)", (const char *)&queryFormat, "scene.allowAddDObj") )
    __debugbreak();
  if ( (!obj->models || !obj->numModels) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2159, ASSERT_TYPE_ASSERT, "(obj->models && obj->numModels)", (const char *)&queryFormat, "obj->models && obj->numModels") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 770, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  dobjCount = g_delayedSceneModelGlob.dobjCount;
  if ( g_delayedSceneModelGlob.dobjCount >= 0x400 )
  {
    R_FlushDelayedSceneModels(1);
    dobjCount = g_delayedSceneModelGlob.dobjCount;
    if ( g_delayedSceneModelGlob.dobjCount >= 0x400 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 775, ASSERT_TYPE_ASSERT, "(g_delayedSceneModelGlob.dobjCount < ( 1024 > 512 ? 1024 : 512 ))", (const char *)&queryFormat, "g_delayedSceneModelGlob.dobjCount < MAX_DELAYED_SCENE_DOBJ_MODEL") )
        __debugbreak();
      dobjCount = g_delayedSceneModelGlob.dobjCount;
    }
  }
  g_delayedSceneModelGlob.dobjCount = dobjCount + 1;
  v14 = &g_delayedSceneModelGlob.dobjs[dobjCount];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2162, ASSERT_TYPE_ASSERT, "(dobjInfo != 0)", (const char *)&queryFormat, "dobjInfo != NULL") )
    __debugbreak();
  v14->obj = obj;
  v14->pose = pose;
  v15 = truncate_cast<short,unsigned int>(entnum);
  v16 = s_lighting2_aab_Y;
  v17 = s_lighting2_aab_X;
  v14->entityNum = v15;
  fmt = s_lighting2_aab_Z;
  v14->renderFlags = renderFlags;
  SetSecureVec3(lightingOrigin, &v14->lightingOrigin.lightingOrigin, v17, v16, fmt);
  v14->materialTime = materialTime;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.dataCount = *(_OWORD *)&entityMutableShaderData->dataCount;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.modelShaderData[0].transitionFactor = *(_OWORD *)&entityMutableShaderData->modelShaderData[0].transitionFactor;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.modelShaderData[1].transitionFactor = *(_OWORD *)&entityMutableShaderData->modelShaderData[1].transitionFactor;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.modelShaderData[2].transitionFactor = *(_OWORD *)&entityMutableShaderData->modelShaderData[2].transitionFactor;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.modelShaderData[3].transitionFactor = *(_OWORD *)&entityMutableShaderData->modelShaderData[3].transitionFactor;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.modelShaderData[4].transitionFactor = *(_OWORD *)&entityMutableShaderData->modelShaderData[4].transitionFactor;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.modelShaderData[5].transitionFactor = *(_OWORD *)&entityMutableShaderData->modelShaderData[5].transitionFactor;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.modelShaderData[6].transitionFactor = *(_OWORD *)&entityMutableShaderData->modelShaderData[6].transitionFactor;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.modelShaderData[7].transitionFactor = *(_OWORD *)&entityMutableShaderData->modelShaderData[7].transitionFactor;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.hudOutlineInfo.drawOccludedPixels = *(_OWORD *)&entityMutableShaderData->hudOutlineInfo.drawOccludedPixels;
  v18 = *(_OWORD *)&entityMutableShaderData->hudOutlineInfo.temperatureBase;
  v14->isViewModel = isViewModel != 0;
  v14->isMarkableViewModel = isMarkableViewModel != 0;
  *(_OWORD *)&v14->sceneEntityMutableShaderData.hudOutlineInfo.temperatureBase = v18;
  R_TryDispatchDelayedSceneBatch();
}

/*
==============
R_AddDObjToSceneInternal
==============
*/
void R_AddDObjToSceneInternal(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *sceneEntityMutableShaderData, const vec3_t *lightingOrigin, float materialTime)
{
  __int64 v8; 
  __int64 v11; 
  bool v12; 
  unsigned int v13; 
  unsigned __int16 v14; 
  int v15; 
  DObjMaterialData *materialData; 
  bool v17; 
  unsigned int v18; 
  bool v19; 
  unsigned __int16 v20; 
  unsigned __int32 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  bool HasProceduralBones; 
  unsigned __int32 v27; 
  GfxSceneModel *v28; 
  const XModel *Model; 
  unsigned int v30; 
  cpose_t *v31; 
  unsigned int v32; 
  unsigned __int8 *v33; 
  float value; 
  __int64 v35; 
  __int64 useDepthHack; 
  __int64 v37; 
  char v38; 
  unsigned __int16 v39; 
  unsigned int renderFlagsa; 
  unsigned int gfxEntDataIndexBase; 
  unsigned int v42; 
  GfxSceneEntityMutableShaderData *v43; 
  GfxPackedEntityData *gfxPackedEntityData; 
  SecureVec3 tmpOrg; 
  cpose_t *posea; 
  __int64 v47; 
  __int64 v48; 
  vec3_t angles; 
  Bounds v50; 
  SecureBoundsAccess tmpBounds; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 

  v48 = -2i64;
  v8 = entnum;
  posea = (cpose_t *)pose;
  v43 = (GfxSceneEntityMutableShaderData *)sceneEntityMutableShaderData;
  gfxEntDataIndexBase = 0;
  gfxPackedEntityData = NULL;
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v11 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_DWORD *)(v11 + 1728) )
      goto LABEL_8;
    v12 = *(_DWORD *)(v11 + 1724) == 0;
  }
  else
  {
    v12 = !Sys_IsMainThread();
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1733, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
LABEL_8:
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1734, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1735, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( (unsigned int)v8 >= gfxCfg.entCount )
  {
    LODWORD(useDepthHack) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1736, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( gfxCfg.entCount )", "entnum doesn't index gfxCfg.entCount\n\t%i not in [0, %i)", useDepthHack, gfxCfg.entCount) )
      __debugbreak();
  }
  if ( (renderFlags & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1737, ASSERT_TYPE_ASSERT, "(!(renderFlags & (1 << 4)))", (const char *)&queryFormat, "!(renderFlags & RF_NODRAW)") )
    __debugbreak();
  if ( !scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1738, ASSERT_TYPE_ASSERT, "(scene.allowAddDObj)", (const char *)&queryFormat, "scene.allowAddDObj") )
    __debugbreak();
  if ( r_drawEntities->current.enabled )
  {
    v13 = (renderFlags >> 12) & 1;
    if ( rg.needVelocity )
      renderFlags |= 0x200u;
    renderFlagsa = renderFlags;
    v14 = truncate_cast<unsigned short,unsigned int>(sceneEntityMutableShaderData->hudOutlineInfo.mapEntLookup);
    v39 = v14;
    if ( !v14 || r_showModelLMapSModels->current.enabled || !rgp.world->gfxMapEntLookup[v14].lmapLookup )
    {
      if ( (!obj->models || !obj->numModels) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1762, ASSERT_TYPE_ASSERT, "(obj->models && obj->numModels)", (const char *)&queryFormat, "obj->models && obj->numModels") )
        __debugbreak();
      if ( obj->models )
      {
        R_SetHudOutlineRenderFlags(&sceneEntityMutableShaderData->hudOutlineInfo, &renderFlagsa);
        v15 = 1;
        if ( sceneEntityMutableShaderData->hudOutlineInfo.scopeStencil != 0.0 )
          scene.hudOutlineMasked = 1;
        materialData = obj->materialData;
        v17 = materialData && materialData->camoAsset[0];
        v18 = renderFlagsa;
        if ( v17 || (renderFlagsa & 2) != 0 || sceneEntityMutableShaderData->modelShaderData[0].transitionFactor || sceneEntityMutableShaderData->modelShaderData[0].flagAmplitudeScale || (v38 = 0, sceneEntityMutableShaderData->hudOutlineInfo.characterEVOffset != 0.0) )
          v38 = 1;
        v19 = R_UsesEyeSensor(obj) != 0;
        if ( v38 )
          R_AllocPackedEntityData(sceneEntityMutableShaderData->dataCount, &gfxEntDataIndexBase, &gfxPackedEntityData);
        v47 = v8;
        v20 = scene.dpvs.sceneDObjIndex[v8];
        if ( v20 != 0xFFFF )
        {
          LODWORD(useDepthHack) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1790, ASSERT_TYPE_ASSERT, "( ( scene.dpvs.sceneDObjIndex[entnum] == (65535) ) )", "( scene.dpvs.sceneDObjIndex[entnum] ) = %i", useDepthHack) )
            __debugbreak();
        }
        if ( materialTime != 0.0 || sceneEntityMutableShaderData->modelShaderData[0].baseEmissiveAndTransitionFactor || sceneEntityMutableShaderData->hudOutlineInfo.temperatureSet || (v18 & 3) != 0 || v19 )
        {
          if ( ((unsigned __int8)&scene.gfxEntCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.gfxEntCount) )
            __debugbreak();
          v21 = _InterlockedExchangeAdd(&scene.gfxEntCount, 1u);
          if ( v21 >= 0x400 )
          {
            scene.gfxEntCount = 1024;
            R_WarnOncePerFrame(R_WARN_KNOWN_SPECIAL_MODELS, 1024i64);
            return;
          }
          v22 = v21;
          v18 = renderFlagsa;
          scene.gfxEnts[v22].renderFlags = renderFlagsa & 3;
          scene.gfxEnts[v22].materialTime = materialTime;
          R_PackScriptedColorEmissive(&scene.gfxEnts[v21].scriptablePackedColorEmissive, v43);
          if ( *(_BYTE *)(v23 + 152) )
          {
            *(_DWORD *)(v25 + 4 * v24 + 3406476) = *(_DWORD *)(v23 + 160);
            *(_DWORD *)(v25 + 4 * v24 + 3406480) = *(_DWORD *)(v23 + 164);
          }
          else
          {
            *(_DWORD *)(v25 + 4 * v24 + 3406476) = 0;
            *(_DWORD *)(v25 + 4 * v24 + 3406480) = 1065353216;
          }
          *(_DWORD *)(v25 + 4 * v24 + 3406484) = *(_DWORD *)(v23 + 172);
        }
        else
        {
          LOWORD(v21) = 0;
        }
        HasProceduralBones = DObjHasProceduralBones(obj);
        if ( v13 || DObjGetTree(obj) || DObjGetNumModels(obj) != 1 || HasProceduralBones || obj->blendShapeWeightCount )
        {
          v32 = R_AllocSceneDObj();
          v42 = v32;
          if ( v32 < 0x200 )
          {
            v33 = &scene.sceneDObjVisData[-1424][1424 * v32];
            *((_WORD *)v33 + 704) = truncate_cast<unsigned short,unsigned int>(gfxEntDataIndexBase);
            if ( !DObjGetModel(obj, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1915, ASSERT_TYPE_ASSERT, "(DObjGetModel( obj, 0 ))", (const char *)&queryFormat, "DObjGetModel( obj, 0 )") )
              __debugbreak();
            *((_QWORD *)v33 + 174) = obj;
            obj->validation |= 1u;
            if ( (unsigned int)v8 >= 0x1000 )
            {
              LODWORD(v37) = 4096;
              LODWORD(useDepthHack) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1924, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( (1 << 12) )", "entnum doesn't index SCENE_ENTNUM_LIMIT\n\t%i not in [0, %i)", useDepthHack, v37) )
                __debugbreak();
            }
            if ( v18 >= 0x100000 )
            {
              LODWORD(v37) = 0x100000;
              LODWORD(useDepthHack) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1925, ASSERT_TYPE_ASSERT, "(unsigned)( renderFlags ) < (unsigned)( (1 << 20) )", "renderFlags doesn't index RENDERFX_FLAGS_LIMIT\n\t%i not in [0, %i)", useDepthHack, v37) )
                __debugbreak();
            }
            *((_WORD *)v33 + 706) = v39;
            *((_DWORD *)v33 + 346) &= 0xFFC00000;
            *((_DWORD *)v33 + 346) |= v21 & 0x3FF | ((v8 & 0xFFF) << 10);
            *((_DWORD *)v33 + 347) &= 0xFFF00000;
            *((_DWORD *)v33 + 347) |= v18 & 0xFFFFF;
            *((_QWORD *)v33 + 175) = posea;
            if ( !obj->lastGpuLightGridRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1933, ASSERT_TYPE_ASSERT, "(obj->lastGpuLightGridRequest)", (const char *)&queryFormat, "obj->lastGpuLightGridRequest") )
              __debugbreak();
            *((_QWORD *)v33 + 177) = obj->lastGpuLightGridRequest;
            if ( *((_DWORD *)v33 + 18) )
            {
              LODWORD(useDepthHack) = *((_DWORD *)v33 + 18);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1936, ASSERT_TYPE_SANITY, "( ( sceneEnt->cull.state == CULL_STATE_OUT ) )", "( sceneEnt->cull.state ) = %i", useDepthHack) )
                __debugbreak();
            }
            R_SetupSceneEntBounds((GfxSceneEntity *)v33, &tmpOrg, &tmpBounds);
            value = r_animEstimatedBoundsScale->current.value;
            tmpBounds.halfSize.v[0] = value * tmpBounds.halfSize.v[0];
            tmpBounds.halfSize.v[1] = value * tmpBounds.halfSize.v[1];
            tmpBounds.halfSize.v[2] = value * tmpBounds.halfSize.v[2];
            GfxSceneEntity_SetBounds((GfxSceneEntityCull *)(v33 + 72), &tmpBounds);
            GfxSceneEntity_SetLightingOrigin((GfxSceneEntity *)v33, lightingOrigin);
            if ( v38 )
            {
              v50 = (*obj->models)->bounds;
              if ( obj->numModels > 1u )
              {
                v35 = 1i64;
                do
                {
                  Bounds_Expand(&v50, &obj->models[v35]->bounds);
                  ++v15;
                  ++v35;
                }
                while ( v15 < obj->numModels );
              }
              v50.midPoint.v[0] = v50.midPoint.v[0] + tmpOrg.x;
              v50.midPoint.v[1] = v50.midPoint.v[1] + tmpOrg.y;
              v50.midPoint.v[2] = v50.midPoint.v[2] + tmpOrg.z;
              R_SetEntityShaderData(gfxPackedEntityData, v43, fsqrt((float)((float)((float)(lightingOrigin->v[1] - rg.viewOrg.v[1]) * (float)(lightingOrigin->v[1] - rg.viewOrg.v[1])) + (float)((float)(lightingOrigin->v[0] - rg.viewOrg.v[0]) * (float)(lightingOrigin->v[0] - rg.viewOrg.v[0]))) + (float)((float)(lightingOrigin->v[2] - rg.viewOrg.v[2]) * (float)(lightingOrigin->v[2] - rg.viewOrg.v[2]))), &v50, obj->entnum, renderFlagsa & 1);
            }
            scene.dpvs.sceneDObjIndex[v47] = v42;
            R_InitSceneEntity((GfxSceneEntity *)v33);
            memset(&tmpBounds, 0, sizeof(tmpBounds));
            memset(&tmpOrg, 0, sizeof(tmpOrg));
          }
        }
        else
        {
          if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 845, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
            __debugbreak();
          if ( !scene.sceneModelCountValidWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 846, ASSERT_TYPE_ASSERT, "(scene.sceneModelCountValidWrite)", (const char *)&queryFormat, "scene.sceneModelCountValidWrite") )
            __debugbreak();
          if ( ((unsigned __int8)&scene.sceneModelCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.sceneModelCount) )
            __debugbreak();
          v27 = _InterlockedExchangeAdd(&scene.sceneModelCount, 1u);
          if ( v27 < 0x400 )
          {
            v28 = &scene.sceneModel[v27];
            v28->gfxPackedEntityIndexBase = truncate_cast<unsigned short,unsigned int>(gfxEntDataIndexBase);
            Model = DObjGetModel(obj, 0);
            v28->model = Model;
            v28->obj = obj;
            obj->validation |= 1u;
            if ( (unsigned int)v8 >= 0x1000 )
            {
              LODWORD(v37) = 4096;
              LODWORD(useDepthHack) = v8;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1865, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( (1 << 12) )", "entnum doesn't index SCENE_ENTNUM_LIMIT\n\t%i not in [0, %i)", useDepthHack, v37) )
                __debugbreak();
            }
            v30 = renderFlagsa;
            if ( renderFlagsa >= 0x100000 )
            {
              LODWORD(v37) = 0x100000;
              LODWORD(useDepthHack) = renderFlagsa;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1866, ASSERT_TYPE_ASSERT, "(unsigned)( renderFlags ) < (unsigned)( (1 << 20) )", "renderFlags doesn't index RENDERFX_FLAGS_LIMIT\n\t%i not in [0, %i)", useDepthHack, v37) )
                __debugbreak();
            }
            v28->mapEntLookup = v39;
            *((_DWORD *)v28 + 30) &= 0xFFC00000;
            *((_DWORD *)v28 + 30) |= v21 & 0x3FF | ((v8 & 0xFFF) << 10);
            *((_DWORD *)v28 + 31) &= 0xFFF00000;
            *((_DWORD *)v28 + 31) |= v30 & 0xFFFFF;
            scene.dpvs.sceneXModelIndex[v47] = v27;
            if ( !obj->lastGpuLightGridRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1875, ASSERT_TYPE_ASSERT, "(obj->lastGpuLightGridRequest)", (const char *)&queryFormat, "obj->lastGpuLightGridRequest") )
              __debugbreak();
            v28->lastGpuLightGridRequest = obj->lastGpuLightGridRequest;
            XModelGetRadius(Model);
            v31 = posea;
            CG_GetPoseOrigin(posea, &v28->placement.base.origin);
            if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
              __debugbreak();
            angles = v31->angles;
            AnglesToQuat(&angles, &v28->placement.base.quat);
            v28->placement.scale = 1.0;
            CG_GetPrevPoseOrigin(v31, &v28->prevPlacement.base.origin);
            if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 636, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
              __debugbreak();
            angles = v31->prevAngles;
            AnglesToQuat(&angles, &v28->prevPlacement.base.quat);
            v28->prevPlacement.scale = 1.0;
            XModelGetBounds(Model, &bounds);
            QuatToAxis(&v28->placement.base.quat, &axis);
            Bounds_Transform(&bounds, &v28->placement.base.origin, &axis, &v28->bounds);
            v28->lightingOrigin = *lightingOrigin;
            if ( v38 )
              R_SetEntityShaderData(gfxPackedEntityData, v43, fsqrt((float)((float)((float)(lightingOrigin->v[1] - rg.viewOrg.v[1]) * (float)(lightingOrigin->v[1] - rg.viewOrg.v[1])) + (float)((float)(lightingOrigin->v[0] - rg.viewOrg.v[0]) * (float)(lightingOrigin->v[0] - rg.viewOrg.v[0]))) + (float)((float)(lightingOrigin->v[2] - rg.viewOrg.v[2]) * (float)(lightingOrigin->v[2] - rg.viewOrg.v[2]))), &v28->bounds, obj->entnum, v30 & 1);
            R_InitSceneModel(v28);
          }
          else
          {
            scene.sceneModelCount = 1024;
            R_WarnOncePerFrame(R_WARN_KNOWN_MODELS, 1024i64);
          }
        }
      }
    }
  }
}

/*
==============
R_AddDelayedBrushModelsToScene
==============
*/
void R_AddDelayedBrushModelsToScene(const DelayedSceneBrushModel *brushModels, unsigned int count)
{
  float *v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 i; 
  GfxBrushModel *v7; 
  unsigned int v8; 
  unsigned __int16 v9; 
  __int64 v10; 
  bool v11; 
  unsigned __int32 v12; 
  __int64 v13; 
  const dvar_t *v14; 
  unsigned int v15; 

  if ( count )
  {
    v2 = &brushModels->prevOrigin.v[2];
    v3 = tls_index;
    v4 = count;
    v5 = 1728i64;
    for ( i = 1724i64; ; i = 1724i64 )
    {
      v7 = (GfxBrushModel *)*((_QWORD *)v2 - 5);
      v8 = *((_DWORD *)v2 + 4);
      v9 = *((_WORD *)v2 + 10);
      if ( !v7 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 904, ASSERT_TYPE_ASSERT, "(bmodel)", (const char *)&queryFormat, "bmodel") )
          __debugbreak();
        v5 = 1728i64;
        i = 1724i64;
      }
      if ( !g_delayedSceneModelGlob.delayingActive )
        break;
      v10 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3);
      if ( !*(_DWORD *)(v10 + 1728) )
      {
        v11 = *(_DWORD *)(v10 + 1724) == 0;
LABEL_11:
        if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 905, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
          __debugbreak();
      }
      if ( r_drawEntities->current.enabled && r_drawBModels->current.enabled && v7->surfaceCount )
      {
        if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 866, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
          __debugbreak();
        if ( ((unsigned __int8)&scene.sceneBrushCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.sceneBrushCount) )
          __debugbreak();
        v12 = _InterlockedExchangeAdd(&scene.sceneBrushCount, 1u);
        if ( v12 < 0x200 )
        {
          v13 = v12;
          v11 = !rg.needVelocity;
          scene.sceneBrush[v13].bmodel = v7;
          scene.sceneBrush[v13].entnum = v9;
          if ( !v11 )
            v8 |= 0x200u;
          scene.sceneBrush[v13].prevPlacement.origin.v[0] = *(v2 - 2);
          scene.sceneBrush[v13].prevPlacement.origin.v[1] = *(v2 - 1);
          scene.sceneBrush[v13].prevPlacement.origin.v[2] = *v2;
          AnglesToQuat((const vec3_t *)(v2 + 1), &scene.sceneBrush[v13].prevPlacement.quat);
          v14 = DVARBOOL_r_hudOutlineEnable;
          if ( !DVARBOOL_r_hudOutlineEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineEnable") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v14);
          v15 = v8 & 0xFFFFFFFD;
          if ( v14->current.enabled )
            v15 = v8;
          scene.sceneBrush[v13].renderFlags = v15;
          scene.sceneBrush[v13].placement.origin.v[0] = *(v2 - 8);
          scene.sceneBrush[v13].placement.origin.v[1] = *(v2 - 7);
          scene.sceneBrush[v13].placement.origin.v[2] = *(v2 - 6);
          AnglesToQuat((const vec3_t *)(v2 - 5), &scene.sceneBrush[v13].placement.quat);
          R_MDAO_ResetVolumesProcessed(v7);
        }
        else
        {
          scene.sceneBrushCount = 512;
          R_WarnOncePerFrame(R_WARN_KNOWN_BRUSH, 512i64, i, v5);
        }
      }
      v2 += 16;
      v5 = 1728i64;
      if ( !--v4 )
        return;
    }
    v11 = !Sys_IsMainThread();
    goto LABEL_11;
  }
}

/*
==============
R_AddDelayedDObjsToScene
==============
*/
void R_AddDelayedDObjsToScene(const DelayedSceneDObj *dobjs, unsigned int count)
{
  unsigned __int8 *p_isViewModel; 
  __int64 v3; 
  const DObj **v4; 
  unsigned int v5; 
  const GfxSceneEntityMutableShaderData *v6; 
  unsigned int v7; 
  const cpose_t *v8; 
  vec3_t to; 

  if ( count )
  {
    p_isViewModel = &dobjs->isViewModel;
    v3 = count;
    do
    {
      v4 = (const DObj **)(p_isViewModel - 18);
      if ( p_isViewModel == (unsigned __int8 *)18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11736, ASSERT_TYPE_ASSERT, "(sceneDObj)", (const char *)&queryFormat, "sceneDObj") )
        __debugbreak();
      GetSecureVec3((const vec3_t *)(p_isViewModel + 182), &to, s_lighting2_aab_X, s_lighting2_aab_Y, s_lighting2_aab_Z);
      v5 = *((__int16 *)p_isViewModel - 1);
      v6 = (const GfxSceneEntityMutableShaderData *)(p_isViewModel + 6);
      v7 = *(_DWORD *)(p_isViewModel + 2);
      v8 = *(const cpose_t **)(p_isViewModel - 10);
      if ( *p_isViewModel )
        R_AddViewmodelDObjToSceneInternal(*v4, v8, v5, v7, v6, &to, *(float *)(p_isViewModel + 194), p_isViewModel[1]);
      else
        R_AddDObjToSceneInternal(*v4, v8, v5, v7, v6, &to, *(float *)(p_isViewModel + 194));
      p_isViewModel += 216;
      --v3;
    }
    while ( v3 );
  }
  memset(&to, 0, sizeof(to));
}

/*
==============
R_AddDelayedModelsToSceneCmd
==============
*/
void R_AddDelayedModelsToSceneCmd(const void *const cmd)
{
  unsigned int v2; 
  __int64 v3; 

  if ( !*((_DWORD *)cmd + 2) && !*((_DWORD *)cmd + 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 797, ASSERT_TYPE_ASSERT, "(addDObjsToSceneCmd->dobjCount > 0 || addDObjsToSceneCmd->brushModelCount > 0)", (const char *)&queryFormat, "addDObjsToSceneCmd->dobjCount > 0 || addDObjsToSceneCmd->brushModelCount > 0") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "R_AddDelayedModelsToSceneCmd");
  v2 = *((_DWORD *)cmd + 2);
  v3 = 8i64 * tls_index;
  *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v3) + 1728i64) = 1;
  R_AddDelayedDObjsToScene(*(const DelayedSceneDObj **)cmd, v2);
  R_AddDelayedBrushModelsToScene(*((const DelayedSceneBrushModel **)cmd + 2), *((_DWORD *)cmd + 6));
  *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v3) + 1728i64) = 0;
  Sys_ProfEndNamedEvent();
}

/*
==============
R_AddDrawCall
==============
*/
void R_AddDrawCall(GfxViewInfo *viewInfo, const R_RT_Group *rtGroup, GfxDrawListType drawListType, unsigned int wrkrCmdType)
{
  __int64 v6; 
  __int64 v9; 
  __m256i v10; 
  const char *m_location; 
  __int64 v13; 
  __int64 data[2]; 
  int v15; 
  __m256i v16; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 
  _BYTE v20[72]; 

  v6 = drawListType;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5009, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( ((*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0 || rtGroup) && r_smp_backend->current.enabled && r_cmdbuf_worker->current.enabled && !Stream_BackendQueue_IsInForcedFlush() && ((*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) != 0 || (unsigned int)(v6 - 14) > 4 && (unsigned int)(v6 - 79) > 4 && (unsigned int)(v6 - 84) > 4) )
  {
    if ( !r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5036, ASSERT_TYPE_ASSERT, "(r_glob.allowAddDrawCall)", (const char *)&queryFormat, "r_glob.allowAddDrawCall") )
      __debugbreak();
    v9 = v6;
    frontEndDataOut->cmdBufValid[v6] = 1;
    if ( frontEndDataOut->drawOutput[v6].cmdCount )
    {
      LODWORD(v13) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5040, ASSERT_TYPE_ASSERT, "( ( !frontEndDataOut->drawOutput[drawListType].cmdCount ) )", "( drawListType ) = %i", v13) )
        __debugbreak();
    }
    frontEndDataOut->drawOutput[v9].cmdCount = 1;
    if ( frontEndDataOut->drawOutput[v9].inCmdCount )
    {
      LODWORD(v13) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5044, ASSERT_TYPE_ASSERT, "( ( !frontEndDataOut->drawOutput[drawListType].inCmdCount ) )", "( drawListType ) = %i", v13) )
        __debugbreak();
    }
    frontEndDataOut->drawOutput[v9].inCmdCount = 1;
    data[0] = (__int64)frontEndDataOut;
    v15 = v6;
    data[1] = (__int64)viewInfo;
    if ( rtGroup )
    {
      v10 = *(__m256i *)&rtGroup->m_colorRts[3].m_tracking.m_location;
      m_location = rtGroup->m_vrsRt.m_tracking.m_location;
      v16 = *(__m256i *)&rtGroup->m_colorRtCount;
      v17 = *(__m256i *)&rtGroup->m_colorRts[0].m_tracking.m_location;
      v18 = *(__m256i *)&rtGroup->m_colorRts[1].m_tracking.m_location;
      v19 = *(__m256i *)&rtGroup->m_colorRts[2].m_tracking.m_location;
      *(__m256i *)v20 = v10;
      *(__m256i *)&v20[32] = *(__m256i *)&rtGroup->m_depthRt.m_tracking.m_location;
      *(_QWORD *)&v20[64] = m_location;
    }
    else
    {
      v16.m256i_i8[0] = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_WORD *)&v20[8] = 0;
      *(_DWORD *)&v20[16] = 0;
      *(_OWORD *)&v20[24] = _XMM0;
      *(_WORD *)&v20[40] = 0;
      *(_DWORD *)&v20[48] = 0;
      *(_OWORD *)&v20[56] = _XMM0;
    }
    Sys_AddWorkerCmd((WorkerCmdType)wrkrCmdType, data);
  }
}

/*
==============
R_AddDrawCalls
==============
*/
void R_AddDrawCalls(GfxViewInfo *viewInfo, const R_RT_Group *rtGroup, GfxDrawListType drawListBegin, GfxDrawListType drawListEnd, unsigned int wrkrCmdType)
{
  GfxDrawListType v6; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  const char *m_location; 
  __int64 v14; 
  __int64 data[2]; 
  GfxDrawListType v16; 
  __m256i v17; 
  __m256i v18; 
  __m256i v19; 
  __m256i v20; 
  _BYTE v21[72]; 

  v6 = drawListBegin;
  if ( drawListBegin < drawListEnd )
  {
    v10 = drawListBegin;
    v11 = 4i64 * (int)drawListBegin + 31556;
    v12 = v10 * 9136;
    do
    {
      if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5009, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
        __debugbreak();
      if ( ((*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0 || rtGroup) && r_smp_backend->current.enabled && r_cmdbuf_worker->current.enabled && !Stream_BackendQueue_IsInForcedFlush() && ((*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) != 0 || (unsigned int)(v6 - 79 + 65) > 4 && (unsigned int)(v6 - 79) > 4 && (unsigned int)(v6 - 84) > 4) )
      {
        if ( !r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5036, ASSERT_TYPE_ASSERT, "(r_glob.allowAddDrawCall)", (const char *)&queryFormat, "r_glob.allowAddDrawCall") )
          __debugbreak();
        *(unsigned int *)((char *)&frontEndDataOut->mesh[0].indexCount + v11) = 1;
        if ( frontEndDataOut->drawOutput[v10].cmdCount )
        {
          LODWORD(v14) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5040, ASSERT_TYPE_ASSERT, "( ( !frontEndDataOut->drawOutput[drawListType].cmdCount ) )", "( drawListType ) = %i", v14) )
            __debugbreak();
        }
        *(volatile int *)((char *)&frontEndDataOut->drawOutput[0].cmdCount + v12) = 1;
        if ( frontEndDataOut->drawOutput[v10].inCmdCount )
        {
          LODWORD(v14) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5044, ASSERT_TYPE_ASSERT, "( ( !frontEndDataOut->drawOutput[drawListType].inCmdCount ) )", "( drawListType ) = %i", v14) )
            __debugbreak();
        }
        *(volatile int *)((char *)&frontEndDataOut->drawOutput[0].inCmdCount + v12) = 1;
        data[0] = (__int64)frontEndDataOut;
        v16 = v6;
        data[1] = (__int64)viewInfo;
        if ( rtGroup )
        {
          m_location = rtGroup->m_vrsRt.m_tracking.m_location;
          v17 = *(__m256i *)&rtGroup->m_colorRtCount;
          v18 = *(__m256i *)&rtGroup->m_colorRts[0].m_tracking.m_location;
          v19 = *(__m256i *)&rtGroup->m_colorRts[1].m_tracking.m_location;
          v20 = *(__m256i *)&rtGroup->m_colorRts[2].m_tracking.m_location;
          *(__m256i *)v21 = *(__m256i *)&rtGroup->m_colorRts[3].m_tracking.m_location;
          *(__m256i *)&v21[32] = *(__m256i *)&rtGroup->m_depthRt.m_tracking.m_location;
          *(_QWORD *)&v21[64] = m_location;
        }
        else
        {
          v17.m256i_i8[0] = 0;
          __asm { vpxor   xmm0, xmm0, xmm0 }
          *(_WORD *)&v21[8] = 0;
          *(_DWORD *)&v21[16] = 0;
          *(_OWORD *)&v21[24] = _XMM0;
          *(_WORD *)&v21[40] = 0;
          *(_DWORD *)&v21[48] = 0;
          *(_OWORD *)&v21[56] = _XMM0;
        }
        Sys_AddWorkerCmd((WorkerCmdType)wrkrCmdType, data);
      }
      ++v6;
      v12 += 9136i64;
      v11 += 4i64;
      ++v10;
    }
    while ( v6 < drawListEnd );
  }
}

/*
==============
R_AddDynamicLights
==============
*/
void R_AddDynamicLights(const void *const cmd)
{
  GfxViewInfo *v1; 
  GfxBackEndData *v2; 
  unsigned int i; 
  __int64 v4; 
  __int64 v5; 
  int DynamicOmniLight; 
  __int64 v10; 
  int DynamicSpotLight; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 

  v1 = *(GfxViewInfo **)cmd;
  v2 = (GfxBackEndData *)*((_QWORD *)cmd + 1);
  if ( scene.dynamicOmniLightLimit > 0 )
  {
    for ( i = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount; i < rgp.world->primaryLightCount; ++i )
    {
      v4 = i;
      v5 = (__int64)&v2->sceneLights[v4];
      if ( v2->sceneLights[v4].radius >= 1.01 && (v2->sceneLights[v4].flags & 0x10) == 0 )
      {
        _XMM0 = LODWORD(v2->sceneLights[v4].colorLinearSrgb.v[1]);
        __asm
        {
          vmaxss  xmm1, xmm0, dword ptr [rbx+14h]
          vmaxss  xmm2, xmm1, dword ptr [rbx+1Ch]
        }
        if ( (float)(*(float *)&_XMM2 * v2->sceneLights[v4].intensity) != 0.0 || v2->viewInfo[v2->viewInfoIndex].thermalParams.useNightAndThermalVisionCombo && v2->sceneLights[v4].irIntensity > 0.0 )
        {
          if ( *(_BYTE *)v5 == 2 )
          {
            DynamicSpotLight = R_AllocateDynamicSpotLight();
            if ( DynamicSpotLight >= 0 )
            {
              v12 = DynamicSpotLight;
              *(double *)scene.dynamicSpotLight[v12].debugColorGammaSrgb.v = *(double *)colorYellow.v;
              scene.dynamicSpotLight[v12].debugColorGammaSrgb.v[2] = colorYellow.v[2];
              *(__m256i *)&scene.dynamicSpotLight[v12].lightCommon.type = *(__m256i *)v5;
              *(__m256i *)scene.dynamicSpotLight[v12].lightCommon.dir.v = *(__m256i *)(v5 + 32);
              *(__m256i *)&scene.dynamicSpotLight[v12].lightCommon.origin.z = *(__m256i *)(v5 + 64);
              *(__m256i *)&scene.dynamicSpotLight[v12].lightCommon.cosHalfFovOuter = *(__m256i *)(v5 + 96);
              *(_OWORD *)&scene.dynamicSpotLight[v12].lightCommon.shadowArea = *(_OWORD *)(v5 + 128);
              scene.dynamicSpotLight[v12].lightCommon.def = *(GfxLightDef **)(v5 + 144);
            }
          }
          else if ( *(_BYTE *)v5 == 3 )
          {
            DynamicOmniLight = R_AllocateDynamicOmniLight();
            if ( DynamicOmniLight >= 0 )
            {
              v10 = DynamicOmniLight;
              *(double *)scene.dynamicOmniLight[v10].debugColorGammaSrgb.v = *(double *)colorYellow.v;
              scene.dynamicOmniLight[v10].debugColorGammaSrgb.v[2] = colorYellow.v[2];
              *(__m256i *)&scene.dynamicOmniLight[v10].lightCommon.type = *(__m256i *)v5;
              *(__m256i *)scene.dynamicOmniLight[v10].lightCommon.dir.v = *(__m256i *)(v5 + 32);
              *(__m256i *)&scene.dynamicOmniLight[v10].lightCommon.origin.z = *(__m256i *)(v5 + 64);
              *(__m256i *)&scene.dynamicOmniLight[v10].lightCommon.cosHalfFovOuter = *(__m256i *)(v5 + 96);
              *(_OWORD *)&scene.dynamicOmniLight[v10].lightCommon.shadowArea = *(_OWORD *)(v5 + 128);
              scene.dynamicOmniLight[v10].lightCommon.def = *(GfxLightDef **)(v5 + 144);
              if ( *(_BYTE *)(v5 + 1) )
                R_CalcSpotLightPlanesAndBoundingBox((const GfxLight *)v5, (vec4_t (*)[6])scene.dynamicOmniLight[v10].planes, &scene.dynamicOmniLight[v10].bounds);
            }
          }
        }
      }
    }
    v13 = R_ChooseVisibleDynamicSpotLights(v2, v1);
    v2->dynamicLightCount += v13;
    v2->dynamicSpotLightCount = v13;
    v14 = R_ChooseVisibleDynamicOmniLights(v2, v1);
    v2->dynamicLightCount += v14;
    v2->dynamicOmniLightCount = v14;
  }
}

/*
==============
R_AddDynamicLightsWithShadowmap
==============
*/
void R_AddDynamicLightsWithShadowmap(GfxViewInfo *viewInfo, GfxBackEndData *backEndDataOut)
{
  unsigned int i; 
  __int64 v5; 
  GfxLight *v6; 
  int DynamicOmniLight; 
  __int64 v11; 
  int DynamicSpotLight; 
  __int64 v13; 
  unsigned int v14; 

  for ( i = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount; i < rgp.world->primaryLightCount; ++i )
  {
    v5 = i;
    v6 = &backEndDataOut->sceneLights[v5];
    if ( backEndDataOut->sceneLights[v5].radius >= 1.01 && (backEndDataOut->sceneLights[v5].flags & 0x10) == 0 )
    {
      _XMM0 = LODWORD(backEndDataOut->sceneLights[v5].colorLinearSrgb.v[1]);
      __asm
      {
        vmaxss  xmm1, xmm0, dword ptr [rbx+14h]
        vmaxss  xmm2, xmm1, dword ptr [rbx+1Ch]
      }
      if ( (float)(*(float *)&_XMM2 * backEndDataOut->sceneLights[v5].intensity) != 0.0 || backEndDataOut->viewInfo[backEndDataOut->viewInfoIndex].thermalParams.useNightAndThermalVisionCombo && backEndDataOut->sceneLights[v5].irIntensity > 0.0 )
      {
        if ( v6->type == 2 )
        {
          DynamicSpotLight = R_AllocateDynamicSpotLight();
          if ( DynamicSpotLight >= 0 )
          {
            v13 = DynamicSpotLight;
            *(double *)scene.dynamicSpotLight[v13].debugColorGammaSrgb.v = *(double *)colorYellow.v;
            scene.dynamicSpotLight[v13].debugColorGammaSrgb.v[2] = colorYellow.v[2];
            *(__m256i *)&scene.dynamicSpotLight[v13].lightCommon.type = *(__m256i *)&v6->type;
            *(__m256i *)scene.dynamicSpotLight[v13].lightCommon.dir.v = *(__m256i *)v6->dir.v;
            *(__m256i *)&scene.dynamicSpotLight[v13].lightCommon.origin.z = *(__m256i *)&v6->origin.z;
            *(__m256i *)&scene.dynamicSpotLight[v13].lightCommon.cosHalfFovOuter = *(__m256i *)&v6->cosHalfFovOuter;
            *(_OWORD *)&scene.dynamicSpotLight[v13].lightCommon.shadowArea = *(_OWORD *)&v6->shadowArea;
            scene.dynamicSpotLight[v13].lightCommon.def = v6->def;
          }
        }
        else if ( v6->type == 3 )
        {
          DynamicOmniLight = R_AllocateDynamicOmniLight();
          if ( DynamicOmniLight >= 0 )
          {
            v11 = DynamicOmniLight;
            *(double *)scene.dynamicOmniLight[v11].debugColorGammaSrgb.v = *(double *)colorYellow.v;
            scene.dynamicOmniLight[v11].debugColorGammaSrgb.v[2] = colorYellow.v[2];
            *(__m256i *)&scene.dynamicOmniLight[v11].lightCommon.type = *(__m256i *)&v6->type;
            *(__m256i *)scene.dynamicOmniLight[v11].lightCommon.dir.v = *(__m256i *)v6->dir.v;
            *(__m256i *)&scene.dynamicOmniLight[v11].lightCommon.origin.z = *(__m256i *)&v6->origin.z;
            *(__m256i *)&scene.dynamicOmniLight[v11].lightCommon.cosHalfFovOuter = *(__m256i *)&v6->cosHalfFovOuter;
            *(_OWORD *)&scene.dynamicOmniLight[v11].lightCommon.shadowArea = *(_OWORD *)&v6->shadowArea;
            scene.dynamicOmniLight[v11].lightCommon.def = v6->def;
            if ( v6->canUseShadowMap )
              R_CalcSpotLightPlanesAndBoundingBox(v6, (vec4_t (*)[6])scene.dynamicOmniLight[v11].planes, &scene.dynamicOmniLight[v11].bounds);
          }
        }
      }
    }
  }
  v14 = R_ChooseVisibleDynamicSpotLights(backEndDataOut, viewInfo);
  backEndDataOut->dynamicLightCount += v14;
  backEndDataOut->dynamicSpotLightCount = v14;
}

/*
==============
R_AddDynamicOmniLights
==============
*/
void R_AddDynamicOmniLights(GfxViewInfo *viewInfo, GfxBackEndData *backEndDataOut)
{
  unsigned int v3; 

  v3 = R_ChooseVisibleDynamicOmniLights(backEndDataOut, viewInfo);
  backEndDataOut->dynamicLightCount += v3;
  backEndDataOut->dynamicOmniLightCount = v3;
}

/*
==============
R_AddOmniLightToScene
==============
*/
char R_AddOmniLightToScene(const vec3_t *org, float radius, const vec3_t *colorLinearSrgb, float intensity, const ParticleModuleInitLightOmni *pModuleInitLightOmni, GfxLightDef *lightDef)
{
  float v8; 
  float v9; 
  const dvar_t *v10; 
  float m_intensityIR; 
  int DynamicOmniLight; 
  __int64 v13; 
  GfxLightDef *dlightDef; 
  const char *iesProfile; 
  float m_bulbLength; 
  const dvar_t *v17; 
  float value; 
  vec2_t *p_fadeOffsetRt; 
  float m_fovOuter; 
  float v21; 
  double v22; 
  double v23; 
  double v24; 
  bool v25; 

  v8 = radius;
  v9 = intensity;
  if ( !rgp.world )
    return 0;
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2485, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( pModuleInitLightOmni->m_scriptScale )
  {
    v8 = radius * fx_lights_radius_scale->current.value;
    v9 = intensity * fx_lights_intensity_scale->current.value;
  }
  if ( v8 < 1.01 )
    return 0;
  v10 = DCONST_DVARBOOL_r_pureIRLightHack;
  m_intensityIR = pModuleInitLightOmni->m_intensityIR;
  if ( !DCONST_DVARBOOL_r_pureIRLightHack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_pureIRLightHack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && pModuleInitLightOmni->m_intensityIR > 0.0 )
  {
    m_intensityIR = m_intensityIR + v9;
    v9 = 0.0;
  }
  if ( (float)((float)((float)((float)(colorLinearSrgb->v[1] + colorLinearSrgb->v[0]) + colorLinearSrgb->v[2]) * v9) + pModuleInitLightOmni->m_intensityIR) <= 0.0 )
    return 0;
  DynamicOmniLight = R_AllocateDynamicOmniLight();
  if ( DynamicOmniLight < 0 )
    return 0;
  v13 = DynamicOmniLight;
  memset_0(&scene.dynamicOmniLight[v13].lightCommon.canUseShadowMap, 0, 0x8Fui64);
  dlightDef = rgp.dlightDef;
  scene.dynamicOmniLight[v13].lightCommon.type = 3;
  if ( lightDef )
    dlightDef = lightDef;
  scene.dynamicOmniLight[v13].lightCommon.def = dlightDef;
  iesProfile = dlightDef->iesProfile;
  if ( iesProfile && dlightDef->coordScale == 0.0 )
    Com_Printf(8, "ERROR: Found invalid lightDef %s ies %s\n", dlightDef->name, iesProfile);
  scene.dynamicOmniLight[v13].lightCommon.colorLinearSrgb.v[0] = colorLinearSrgb->v[0];
  scene.dynamicOmniLight[v13].lightCommon.colorLinearSrgb.v[1] = colorLinearSrgb->v[1];
  scene.dynamicOmniLight[v13].lightCommon.colorLinearSrgb.v[2] = colorLinearSrgb->v[2];
  scene.dynamicOmniLight[v13].lightCommon.intensity = (float)(v9 * pModuleInitLightOmni->m_brightness) * 493.38132;
  scene.dynamicOmniLight[v13].lightCommon.uvIntensity = 493.38132 * pModuleInitLightOmni->m_intensityUV;
  scene.dynamicOmniLight[v13].lightCommon.irIntensity = m_intensityIR * 493.38132;
  scene.dynamicOmniLight[v13].lightCommon.heatIntensity = pModuleInitLightOmni->m_intensityHeat * 2880.0002;
  scene.dynamicOmniLight[v13].lightCommon.tonemappingScaleFactor = pModuleInitLightOmni->m_toneMappingScaleFactor;
  scene.dynamicOmniLight[v13].lightCommon.origin.v[0] = org->v[0];
  scene.dynamicOmniLight[v13].lightCommon.origin.v[1] = org->v[1];
  scene.dynamicOmniLight[v13].lightCommon.origin.v[2] = org->v[2];
  scene.dynamicOmniLight[v13].lightCommon.radius = v8;
  scene.dynamicOmniLight[v13].lightCommon.bulbRadius = pModuleInitLightOmni->m_bulbRadius;
  m_bulbLength = pModuleInitLightOmni->m_bulbLength;
  v17 = r_VFXOmniLightFalloffEnable;
  scene.dynamicOmniLight[v13].lightCommon.bulbLength.v[0] = m_bulbLength;
  scene.dynamicOmniLight[v13].lightCommon.bulbLength.v[1] = m_bulbLength;
  scene.dynamicOmniLight[v13].lightCommon.bulbLength.v[2] = m_bulbLength;
  if ( v17->current.enabled )
    value = r_VFXOmniLightFalloff->current.value;
  else
    value = pModuleInitLightOmni->m_distanceFalloff;
  p_fadeOffsetRt = &scene.dynamicOmniLight[v13].lightCommon.fadeOffsetRt;
  scene.dynamicOmniLight[v13].lightCommon.distanceFalloff = value;
  *p_fadeOffsetRt = 0i64;
  R_LightFadeOffsetRuntimeEncoding(p_fadeOffsetRt, 3u);
  scene.dynamicOmniLight[v13].lightCommon.cosHalfFovCollimation = 0.0;
  if ( pModuleInitLightOmni->m_fovInner >= pModuleInitLightOmni->m_fovOuter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2573, ASSERT_TYPE_ASSERT, "(pModuleInitLightOmni->m_fovOuter > pModuleInitLightOmni->m_fovInner)", (const char *)&queryFormat, "pModuleInitLightOmni->m_fovOuter > pModuleInitLightOmni->m_fovInner") )
    __debugbreak();
  m_fovOuter = pModuleInitLightOmni->m_fovOuter;
  if ( m_fovOuter >= 1.5707964 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2574, ASSERT_TYPE_ASSERT, "( ( pModuleInitLightOmni->m_fovOuter < ( ( 90.0f ) * ( M_PI_F / 180.0f ) ) ) )", "( pModuleInitLightOmni->m_fovOuter ) = %g", m_fovOuter) )
    __debugbreak();
  scene.dynamicOmniLight[v13].lightCommon.cosHalfFovInner = cosf_0(pModuleInitLightOmni->m_fovInner);
  v21 = cosf_0(pModuleInitLightOmni->m_fovOuter);
  scene.dynamicOmniLight[v13].lightCommon.cosHalfFovOuter = v21;
  if ( (v21 <= 0.0 || v21 >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2577, ASSERT_TYPE_ASSERT, "( ( dl->cosHalfFovOuter > 0.0f && dl->cosHalfFovOuter < 1.0f ) )", "( dl->cosHalfFovOuter ) = %g", v21) )
    __debugbreak();
  *(_WORD *)&scene.dynamicOmniLight[v13].lightCommon.canUseShadowMap = 0;
  v22 = I_fclamp(pModuleInitLightOmni->m_shadowSoftness, 0.0, 1.0);
  scene.dynamicOmniLight[v13].lightCommon.shadowSoftness = *(float *)&v22;
  v23 = I_fclamp(pModuleInitLightOmni->m_shadowBias, 0.0, 1.0);
  scene.dynamicOmniLight[v13].lightCommon.shadowBias = *(float *)&v23;
  v24 = I_fclamp(pModuleInitLightOmni->m_shadowArea, 0.0, 1.0);
  scene.dynamicOmniLight[v13].lightCommon.shadowArea = *(float *)&v24;
  v25 = !pModuleInitLightOmni->m_disableVolumetric;
  scene.dynamicOmniLight[v13].lightCommon.flags = 8;
  scene.dynamicOmniLight[v13].lightCommon.isVolumetric = v25;
  *(double *)scene.dynamicOmniLight[v13].debugColorGammaSrgb.v = *(double *)colorGreen.v;
  scene.dynamicOmniLight[v13].debugColorGammaSrgb.v[2] = colorGreen.v[2];
  return 1;
}

/*
==============
R_AddReflectionProbeInstanceToScene
==============
*/
void R_AddReflectionProbeInstanceToScene(const GfxReflectionProbeInstance *reflectionProbeInstance)
{
  __int64 sceneReflectionProbeInstanceCount; 
  __int64 v3; 
  __int64 v4; 

  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2413, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  sceneReflectionProbeInstanceCount = scene.sceneReflectionProbeInstanceCount;
  if ( scene.sceneReflectionProbeInstanceCount >= 0x80 )
  {
    if ( scene.sceneReflectionProbeInstanceCount != 128 )
    {
      LODWORD(v4) = scene.sceneReflectionProbeInstanceCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2422, ASSERT_TYPE_ASSERT, "( ( scene.sceneReflectionProbeInstanceCount == 128 ) )", "( scene.sceneReflectionProbeInstanceCount ) = %i", v4) )
        __debugbreak();
    }
    R_WarnOncePerFrame(R_WARN_KNOWN_REFLECTION_PROBE_VOLUMES);
  }
  else
  {
    ++scene.sceneReflectionProbeInstanceCount;
  }
  if ( (unsigned int)sceneReflectionProbeInstanceCount < 0x80 )
  {
    v3 = sceneReflectionProbeInstanceCount;
    *(__m256i *)&scene.sceneReflectionProbeInstances[v3].reflectionProbeInstance.livePath = *(__m256i *)&reflectionProbeInstance->livePath;
    *(__m256i *)&scene.sceneReflectionProbeInstances[v3].reflectionProbeInstance.probeRotation.xyz.z = *(__m256i *)&reflectionProbeInstance->probeRotation.xyz.z;
    *(__m256i *)scene.sceneReflectionProbeInstances[v3].reflectionProbeInstance.volumeObb.yAxis.v = *(__m256i *)reflectionProbeInstance->volumeObb.yAxis.v;
    *(__m256i *)&scene.sceneReflectionProbeInstances[v3].reflectionProbeInstance.volumeObb.halfSize.z = *(__m256i *)&reflectionProbeInstance->volumeObb.halfSize.z;
    *(_OWORD *)scene.sceneReflectionProbeInstances[v3].reflectionProbeInstance.expandProjectionPos.v = *(_OWORD *)reflectionProbeInstance->expandProjectionPos.v;
  }
}

/*
==============
R_AddScriptableEntityData
==============
*/
unsigned __int8 R_AddScriptableEntityData(const LocalClientNum_t localClientNum, unsigned __int16 entityNum, Scriptable_MaterialOverrideType scriptableMaterialOverrideType)
{
  __int64 v6; 
  __int64 v8; 

  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1077, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( entityNum >= 0xA00u )
  {
    LODWORD(v8) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1092, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid entity num %d", v8) )
      __debugbreak();
    return 0;
  }
  v6 = (unsigned int)entityNum + 2560 * localClientNum;
  scene.gfxScriptEntityData[v6].m_active = 1;
  if ( scriptableMaterialOverrideType == Scriptable_MaterialOverrideType_Off )
    return 0;
  if ( (unsigned int)scriptableMaterialOverrideType <= Scriptable_MaterialOverrideType_Dissolve )
    return scene.gfxScriptEntityData[v6].m_transitionFactor;
  if ( scriptableMaterialOverrideType == Scriptable_MaterialOverrideType_FlagAmplitudeScale )
    return scene.gfxScriptEntityData[v6].m_flagAmplitude;
  Com_Printf(8, "ERROR: Invalid scriptable type %d\n", (unsigned int)scriptableMaterialOverrideType);
  return 0;
}

/*
==============
R_AddSpotLightToScene
==============
*/

char __fastcall R_AddSpotLightToScene(const vec3_t *org, const vec3_t *dir, const vec3_t *up, double radius, const vec3_t *colorLinearSrgb, float intensity, const ParticleModuleInitLightSpot *pModuleInitLightSpot, GfxLightDef *lightDef)
{
  __int128 v12; 
  float v13; 
  const dvar_t *v14; 
  float m_intensityIR; 
  int DynamicSpotLight; 
  __int64 v17; 
  GfxLightDef *dlightDef; 
  const char *iesProfile; 
  vec3_t *p_dir; 
  vec3_t *p_up; 
  float m_toneMappingScaleFactor; 
  float m_bulbLength; 
  const dvar_t *v25; 
  float v26; 
  float value; 
  vec2_t *p_fadeOffsetRt; 
  float m_fovCollimation; 
  float m_fovOuter; 
  float v35; 
  bool v36; 
  bool v37; 
  double v38; 
  double v39; 
  double v40; 
  bool v41; 
  vec3_t cross; 

  _XMM8 = *(_OWORD *)&radius;
  if ( !pModuleInitLightSpot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2605, ASSERT_TYPE_ASSERT, "(pModuleInitLightSpot)", (const char *)&queryFormat, "pModuleInitLightSpot") )
    __debugbreak();
  if ( !rgp.world )
    return 0;
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2619, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( pModuleInitLightSpot->m_scriptScale )
  {
    v12 = *(_OWORD *)&radius;
    *(float *)&v12 = *(float *)&radius * fx_lights_radius_scale->current.value;
    _XMM8 = v12;
    v13 = intensity * fx_lights_intensity_scale->current.value;
  }
  else
  {
    v13 = intensity;
  }
  if ( *(float *)&_XMM8 < 1.01 )
    return 0;
  v14 = DCONST_DVARBOOL_r_pureIRLightHack;
  m_intensityIR = pModuleInitLightSpot->m_intensityIR;
  if ( !DCONST_DVARBOOL_r_pureIRLightHack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_pureIRLightHack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled && pModuleInitLightSpot->m_intensityIR > 0.0 )
  {
    m_intensityIR = m_intensityIR + v13;
    v13 = 0.0;
  }
  if ( (float)((float)((float)((float)(colorLinearSrgb->v[0] + colorLinearSrgb->v[1]) + colorLinearSrgb->v[2]) * v13) + pModuleInitLightSpot->m_intensityIR) <= 0.0 )
    return 0;
  if ( pModuleInitLightSpot->m_fovOuter == 0.0 )
    return 0;
  DynamicSpotLight = R_AllocateDynamicSpotLight();
  if ( DynamicSpotLight < 0 )
    return 0;
  v17 = DynamicSpotLight;
  memset_0(&scene.dynamicSpotLight[v17].lightCommon.canUseShadowMap, 0, 0x8Fui64);
  dlightDef = rgp.dlightDef;
  scene.dynamicSpotLight[v17].lightCommon.type = 2;
  if ( lightDef )
    dlightDef = lightDef;
  scene.dynamicSpotLight[v17].lightCommon.def = dlightDef;
  iesProfile = dlightDef->iesProfile;
  if ( iesProfile && dlightDef->coordScale == 0.0 )
    Com_Printf(8, "ERROR: Found invalid lightDef %s ies %s\n", dlightDef->name, iesProfile);
  p_dir = &scene.dynamicSpotLight[v17].lightCommon.dir;
  scene.dynamicSpotLight[v17].lightCommon.origin.v[0] = org->v[0];
  p_up = &scene.dynamicSpotLight[v17].lightCommon.up;
  scene.dynamicSpotLight[v17].lightCommon.origin.v[1] = org->v[1];
  scene.dynamicSpotLight[v17].lightCommon.origin.v[2] = org->v[2];
  p_dir->v[0] = COERCE_FLOAT(LODWORD(dir->v[0]) ^ _xmm);
  p_dir->v[1] = COERCE_FLOAT(LODWORD(dir->v[1]) ^ _xmm);
  p_dir->v[2] = COERCE_FLOAT(LODWORD(dir->v[2]) ^ _xmm);
  p_up->v[0] = up->v[0];
  p_up->v[1] = up->v[1];
  p_up->v[2] = up->v[2];
  scene.dynamicSpotLight[v17].lightCommon.colorLinearSrgb = *colorLinearSrgb;
  scene.dynamicSpotLight[v17].lightCommon.intensity = (float)(v13 * pModuleInitLightSpot->m_brightness) * 493.38132;
  scene.dynamicSpotLight[v17].lightCommon.uvIntensity = 493.38132 * pModuleInitLightSpot->m_intensityUV;
  scene.dynamicSpotLight[v17].lightCommon.irIntensity = m_intensityIR * 493.38132;
  __asm { vmaxss  xmm0, xmm8, cs:__real@3f8147ae }
  scene.dynamicSpotLight[v17].lightCommon.heatIntensity = pModuleInitLightSpot->m_intensityHeat * 2880.0002;
  m_toneMappingScaleFactor = pModuleInitLightSpot->m_toneMappingScaleFactor;
  scene.dynamicSpotLight[v17].lightCommon.radius = *(float *)&_XMM0;
  scene.dynamicSpotLight[v17].lightCommon.tonemappingScaleFactor = m_toneMappingScaleFactor;
  scene.dynamicSpotLight[v17].lightCommon.bulbRadius = pModuleInitLightSpot->m_bulbRadius;
  Vec3Cross(p_dir, p_up, &cross);
  m_bulbLength = pModuleInitLightSpot->m_bulbLength;
  v25 = r_VFXOmniLightFalloffEnable;
  *(float *)&_XMM0 = m_bulbLength * cross.v[1];
  v26 = m_bulbLength * cross.v[2];
  scene.dynamicSpotLight[v17].lightCommon.bulbLength.v[0] = m_bulbLength * cross.v[0];
  scene.dynamicSpotLight[v17].lightCommon.bulbLength.v[1] = *(float *)&_XMM0;
  scene.dynamicSpotLight[v17].lightCommon.bulbLength.v[2] = v26;
  if ( v25->current.enabled )
    value = r_VFXSpotLightFalloff->current.value;
  else
    value = pModuleInitLightSpot->m_distanceFalloff;
  p_fadeOffsetRt = &scene.dynamicSpotLight[v17].lightCommon.fadeOffsetRt;
  scene.dynamicSpotLight[v17].lightCommon.distanceFalloff = value;
  *p_fadeOffsetRt = 0i64;
  R_LightFadeOffsetRuntimeEncoding(p_fadeOffsetRt, 2u);
  m_fovCollimation = pModuleInitLightSpot->m_fovCollimation;
  if ( m_fovCollimation > 1.5707964 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2719, ASSERT_TYPE_ASSERT, "( ( pModuleInitLightSpot->m_fovCollimation <= ( ( 90.0f ) * ( M_PI_F / 180.0f ) ) ) )", "( pModuleInitLightSpot->m_fovCollimation ) = %g", m_fovCollimation) )
    __debugbreak();
  scene.dynamicSpotLight[v17].lightCommon.cosHalfFovCollimation = cosf_0(pModuleInitLightSpot->m_fovCollimation);
  if ( pModuleInitLightSpot->m_fovInner >= pModuleInitLightSpot->m_fovOuter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2721, ASSERT_TYPE_ASSERT, "(pModuleInitLightSpot->m_fovOuter > pModuleInitLightSpot->m_fovInner)", (const char *)&queryFormat, "pModuleInitLightSpot->m_fovOuter > pModuleInitLightSpot->m_fovInner") )
    __debugbreak();
  m_fovOuter = pModuleInitLightSpot->m_fovOuter;
  if ( m_fovOuter >= 1.5707964 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2722, ASSERT_TYPE_ASSERT, "( ( pModuleInitLightSpot->m_fovOuter < ( ( 90.0f ) * ( M_PI_F / 180.0f ) ) ) )", "( pModuleInitLightSpot->m_fovOuter ) = %g", m_fovOuter) )
    __debugbreak();
  _XMM0 = LODWORD(pModuleInitLightSpot->m_fovInner);
  __asm { vminss  xmm0, xmm0, dword ptr [rbx+2Ch]; X }
  scene.dynamicSpotLight[v17].lightCommon.cosHalfFovInner = cosf_0(*(float *)&_XMM0);
  _XMM1 = LODWORD(pModuleInitLightSpot->m_fovCollimation);
  __asm { vminss  xmm0, xmm1, dword ptr [rbx+18h]; X }
  v35 = cosf_0(*(float *)&_XMM0);
  scene.dynamicSpotLight[v17].lightCommon.cosHalfFovOuter = v35;
  if ( (v35 <= 0.0 || v35 >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2725, ASSERT_TYPE_ASSERT, "( ( dl->cosHalfFovOuter > 0.0f && dl->cosHalfFovOuter < 1.0f ) )", "( dl->cosHalfFovOuter ) = %g", v35) )
    __debugbreak();
  v36 = r_spotLightShadows->current.enabled && !pModuleInitLightSpot->m_disableShadowMap;
  scene.dynamicSpotLight[v17].lightCommon.canUseShadowMap = v36;
  v37 = v36 && !pModuleInitLightSpot->m_disableDynamicShadows && r_spotLightEntityShadows->current.enabled;
  scene.dynamicSpotLight[v17].lightCommon.needsDynamicShadows = v37;
  v38 = I_fclamp(pModuleInitLightSpot->m_shadowSoftness, 0.0, 1.0);
  scene.dynamicSpotLight[v17].lightCommon.shadowSoftness = *(float *)&v38;
  v39 = I_fclamp(pModuleInitLightSpot->m_shadowBias, 0.0, 1.0);
  scene.dynamicSpotLight[v17].lightCommon.shadowBias = *(float *)&v39;
  v40 = I_fclamp(pModuleInitLightSpot->m_shadowArea, 0.0, 1.0);
  scene.dynamicSpotLight[v17].lightCommon.shadowArea = *(float *)&v40;
  scene.dynamicSpotLight[v17].lightCommon.shadowNearPlaneBias = pModuleInitLightSpot->m_shadowNearPlane;
  v41 = !pModuleInitLightSpot->m_disableVolumetric;
  scene.dynamicSpotLight[v17].lightCommon.flags = 8;
  scene.dynamicSpotLight[v17].lightCommon.isVolumetric = v41;
  *(double *)scene.dynamicSpotLight[v17].debugColorGammaSrgb.v = *(double *)colorGreen.v;
  scene.dynamicSpotLight[v17].debugColorGammaSrgb.v[2] = colorGreen.v[2];
  return 1;
}

/*
==============
R_AddSpotShadows
==============
*/
void R_AddSpotShadows(const void *const cmd)
{
  GfxViewInfo *v1; 
  GfxBackEndData *v2; 
  unsigned int v3; 
  GfxWorld *world; 
  unsigned int sceneLightCount; 
  unsigned int primaryLightCount; 
  int v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int primaryLightVisDataCount; 
  int v15; 
  unsigned int *primaryLightVisData; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  float v23; 
  GfxShadowGeometry *shadowGeomOptimized; 
  bool v25; 
  bool v26; 
  unsigned __int64 v27; 
  unsigned int *PrimaryLightMotionBits; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  unsigned int *v36; 
  GfxViewInfo *v37; 
  GfxViewParms *viewParmsDpvs; 
  unsigned int sceneLightIsUsed[208]; 
  unsigned int motionBits[204]; 

  v1 = *(GfxViewInfo **)cmd;
  v2 = (GfxBackEndData *)*((_QWORD *)cmd + 1);
  v37 = *(GfxViewInfo **)cmd;
  viewParmsDpvs = (GfxViewParms *)*((_QWORD *)cmd + 2);
  if ( (*(_BYTE *)(*(_QWORD *)cmd + 15540i64) & 2) != 0 )
  {
    v3 = (v2->sceneLightCount + 31) >> 5;
    if ( v3 > 0xCD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7471, ASSERT_TYPE_ASSERT, "(elemCount <= ( sizeof( *array_counter( sceneLightIsUsed ) ) + 0 ))", (const char *)&queryFormat, "elemCount <= ARRAY_COUNT( sceneLightIsUsed )") )
      __debugbreak();
    memset_0(sceneLightIsUsed, 0, 4i64 * v3);
    world = rgp.world;
    sceneLightCount = v2->sceneLightCount;
    primaryLightCount = rgp.world->primaryLightCount;
    if ( primaryLightCount < sceneLightCount )
    {
      v7 = __ROL4__(1, primaryLightCount);
      do
      {
        v8 = (int)primaryLightCount++;
        sceneLightIsUsed[v8 >> 5] |= v7;
        v7 = __ROL4__(v7, 1);
      }
      while ( primaryLightCount < sceneLightCount );
      primaryLightCount = world->primaryLightCount;
    }
    v9 = primaryLightCount - rgp.world->movingScriptablePrimaryLightCount - 1;
    v10 = rgp.world->lastSunPrimaryLightIndex + 1;
    if ( r_debugDrawTransientLights->current.integer && v10 <= v9 )
    {
      do
      {
        if ( r_offloadPrimaryLights->current.integer && !R_IsPrimaryLightLoaded(v2, v10) )
          v2->sceneLights[v10].flags |= 0x80u;
        ++v10;
      }
      while ( v10 <= v9 );
    }
    if ( r_umbraSpotShadowSelection->current.integer )
    {
      v11 = 0;
      v12 = 0;
      v13 = 0;
      primaryLightVisDataCount = rgp.world->dpvs.primaryLightVisDataCount;
      v15 = 0;
      primaryLightVisData = rgp.world->dpvs.primaryLightVisData;
      LODWORD(v17) = 0;
      v36 = primaryLightVisData;
      v34 = 0;
      v32 = 0;
      v33 = 0;
      v31 = 0;
      v35 = 0;
      if ( primaryLightVisDataCount )
        v18 = *primaryLightVisData;
      else
        v18 = 0;
      while ( 1 )
      {
        v19 = v18;
        if ( !v18 )
          break;
LABEL_22:
        v20 = __lzcnt(v19);
        v21 = v20 + 32 * (_DWORD)v17;
        if ( v20 >= 0x20 )
        {
          LODWORD(v30) = 32;
          LODWORD(v29) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        if ( ((0x80000000 >> v20) & v19) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
          __debugbreak();
        v12 = v34;
        v18 = v19 & ~(0x80000000 >> v20);
        if ( (unsigned int)v21 > v9 )
        {
          v11 = v33;
          v15 = v31;
          v13 = v32;
          goto LABEL_50;
        }
        v12 = v34 + 1;
        v22 = (unsigned int)v21;
        ++v34;
        v23 = (float)(v2->sceneLights[v22].colorLinearSrgb.v[1] + v2->sceneLights[v22].colorLinearSrgb.v[0]) + v2->sceneLights[v22].colorLinearSrgb.v[2];
        if ( v23 == 0.0 || v2->sceneLights[v22].intensity == 0.0 )
          v13 = ++v32;
        else
          v13 = v32;
        if ( r_umbraSpotShadowSelection->current.integer == 2 )
        {
          shadowGeomOptimized = rgp.world->shadowGeomOptimized;
          if ( shadowGeomOptimized )
          {
            if ( !shadowGeomOptimized[v21].surfaceCount )
            {
              v25 = shadowGeomOptimized[v21].smodelCount == 0;
              primaryLightVisData = v36;
              v11 = v33;
              v15 = v31;
              if ( v25 )
                continue;
            }
          }
        }
        if ( !r_offloadPrimaryLights->current.integer || R_IsPrimaryLightLoaded(v2, v21) )
        {
          v15 = v31;
          if ( v23 != 0.0 )
          {
            if ( v2->sceneLights[v22].needsDynamicShadows )
            {
              v15 = ++v31;
            }
            else if ( v2->sceneLights[v22].canUseShadowMap )
            {
              ++v35;
            }
          }
          if ( (unsigned int)v21 >= 0x19A0 )
          {
            LODWORD(v30) = 6560;
            LODWORD(v29) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          v13 = v32;
          v12 = v34;
          primaryLightVisData = v36;
          sceneLightIsUsed[(__int64)(int)v21 >> 5] |= 1 << (v21 & 0x1F);
          v11 = v33;
        }
        else
        {
          v15 = v31;
          v11 = v33 + 1;
          primaryLightVisData = v36;
          v13 = v32;
          v12 = v34;
          ++v33;
        }
      }
      while ( 1 )
      {
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= primaryLightVisDataCount )
          break;
        v19 = primaryLightVisData[v17];
        if ( v19 )
          goto LABEL_22;
      }
LABEL_50:
      if ( rg.stats )
      {
        rg.stats->numPrimaryLights = v12;
        rg.stats->numDisabledPrimaryLights = v13;
        rg.stats->numOffloadedPrimaryLights = v11;
        rg.stats->numDynamicOmniLights = v2->dynamicOmniLightCount;
        rg.stats->numDynamicSpotLights = v2->dynamicSpotLightCount;
        rg.stats->numPirmaryLightsNeedDynShadow = v15;
        rg.stats->numPirmaryLightsNeedStaticShadow = v35;
      }
      v1 = v37;
    }
    v26 = (unsigned int)(sm_showOverlay->current.integer - 5) <= 2;
    Sys_ProfBeginNamedEvent(0xFF708090, "R_PopulateMotionBits");
    R_PopulateMotionBits(v1->clientIndex);
    Sys_ProfEndNamedEvent();
    v27 = (unsigned __int64)rgp.world->staticSpotOmniPrimaryLightCountAligned >> 3;
    PrimaryLightMotionBits = R_GetPrimaryLightMotionBits(v1->clientIndex);
    memcpy_0(motionBits, PrimaryLightMotionBits, v27);
    Sys_ProfBeginNamedEvent(0xFF708090, "choose lights");
    R_ChooseShadowedLights(v2, v1, viewParmsDpvs, sceneLightIsUsed);
    Sys_ProfEndNamedEvent();
    if ( rg.stats )
      rg.stats->numSpotShadowmaps = v2->spotShadowUpdateCount;
    if ( v26 )
      R_DrawSpotShadowDebug(v2, v1, motionBits);
  }
}

/*
==============
R_AddViewmodelDObjToScene
==============
*/
void R_AddViewmodelDObjToScene(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *entityMutableShaderData, const vec3_t *lightingOrigin, float materialTime, int markableViewmodel)
{
  if ( g_delayedSceneModelGlob.delayingActive )
    R_AddDObjToSceneDelayed(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, materialTime, 1, markableViewmodel);
  else
    R_AddViewmodelDObjToSceneInternal(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, materialTime, markableViewmodel);
}

/*
==============
R_AddViewmodelDObjToSceneInternal
==============
*/
void R_AddViewmodelDObjToSceneInternal(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *sceneEntityMutableShaderData, const vec3_t *lightingOrigin, float materialTime, int markableViewmodel)
{
  __int64 v9; 
  const GfxSceneEntityMutableShaderData *v12; 
  int v13; 
  __int64 v14; 
  bool v15; 
  unsigned int v16; 
  DObjMaterialData *materialData; 
  bool v18; 
  unsigned int v19; 
  unsigned __int16 v20; 
  unsigned __int32 v21; 
  __int64 v22; 
  unsigned int v28; 
  unsigned __int8 *v29; 
  bool v30; 
  int NumModels; 
  __int64 v32; 
  __int64 v33; 
  const XModel *Model; 
  const XModel *v35; 
  BOOL v36; 
  unsigned int BestUsableLodOverrideLowest; 
  unsigned __int8 v38; 
  double MaterialLodForDist; 
  float *v40; 
  __int16 v41; 
  int v42; 
  const XModel **models; 
  const XModel *v44; 
  unsigned int v45; 
  __int64 *v46; 
  __int64 v47; 
  __m128 v48; 
  __m128 v49; 
  __int64 v50; 
  __m128 v52; 
  __m128 v56; 
  float v59; 
  __m128 v61; 
  float v64; 
  __m128 v66; 
  int sceneDObjMarkableViewmodelIndex; 
  unsigned int sceneDObjFirstViewmodelIndex; 
  unsigned int sceneDObjViewmodelCount; 
  __int64 useDepthHack; 
  __int64 v77; 
  char v78; 
  bool v79; 
  unsigned int renderFlagsa; 
  int v81; 
  unsigned int v82; 
  unsigned int gfxEntDataIndexBase; 
  unsigned int v84; 
  unsigned int val; 
  float *v86; 
  SecureVec3 tmpOrg; 
  GfxPackedEntityData *gfxPackedEntityData; 
  const GfxSceneEntityMutableShaderData *v89; 
  __int64 v90; 
  const cpose_t *v91; 
  __int64 v92; 
  __int128 v93; 
  __int64 v94; 
  __m128 v95; 
  __m128 v96; 
  __m128 v97; 
  __m128 v98; 
  SecureBoundsAccess tmpBounds; 
  MaterialLodSettings materialLodSettings; 

  v92 = -2i64;
  v9 = entnum;
  v84 = entnum;
  v91 = pose;
  v12 = sceneEntityMutableShaderData;
  v89 = sceneEntityMutableShaderData;
  v13 = 0;
  gfxEntDataIndexBase = 0;
  gfxPackedEntityData = NULL;
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v14 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_DWORD *)(v14 + 1728) )
      goto LABEL_8;
    v15 = *(_DWORD *)(v14 + 1724) == 0;
  }
  else
  {
    v15 = !Sys_IsMainThread();
  }
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1982, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
LABEL_8:
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1983, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !DObjGetModel(obj, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1984, ASSERT_TYPE_ASSERT, "(DObjGetModel( obj, 0 ))", (const char *)&queryFormat, "DObjGetModel( obj, 0 )") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1985, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( (unsigned int)v9 >= gfxCfg.entCount )
  {
    LODWORD(useDepthHack) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1986, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( gfxCfg.entCount )", "entnum doesn't index gfxCfg.entCount\n\t%i not in [0, %i)", useDepthHack, gfxCfg.entCount) )
      __debugbreak();
  }
  if ( !scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1987, ASSERT_TYPE_ASSERT, "(scene.allowAddDObj)", (const char *)&queryFormat, "scene.allowAddDObj") )
    __debugbreak();
  if ( r_drawEntities->current.enabled )
  {
    if ( rg.needVelocity )
      v16 = renderFlags | 0x200;
    else
      v16 = renderFlags & 0xFFFFFDFF;
    renderFlagsa = v16;
    R_SetHudOutlineRenderFlags(&sceneEntityMutableShaderData->hudOutlineInfo, &renderFlagsa);
    val = sceneEntityMutableShaderData->hudOutlineInfo.mapEntLookup;
    if ( sceneEntityMutableShaderData->hudOutlineInfo.scopeStencil != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2008, ASSERT_TYPE_ASSERT, "(sceneEntityMutableShaderData.hudOutlineInfo.scopeStencil == 0.f)", (const char *)&queryFormat, "sceneEntityMutableShaderData.hudOutlineInfo.scopeStencil == 0.f") )
      __debugbreak();
    materialData = obj->materialData;
    v18 = materialData && materialData->camoAsset[0];
    v19 = renderFlagsa;
    if ( v18 || (renderFlagsa & 2) != 0 || sceneEntityMutableShaderData->modelShaderData[0].transitionFactor || sceneEntityMutableShaderData->modelShaderData[0].flagAmplitudeScale || sceneEntityMutableShaderData->hudOutlineInfo.characterEVOffset != 0.0 )
    {
      v78 = 1;
      R_AllocPackedEntityData(sceneEntityMutableShaderData->dataCount, &gfxEntDataIndexBase, &gfxPackedEntityData);
    }
    else
    {
      v78 = 0;
    }
    v90 = v9;
    v20 = scene.dpvs.sceneDObjIndex[v9];
    if ( v20 != 0xFFFF )
    {
      LODWORD(useDepthHack) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2020, ASSERT_TYPE_ASSERT, "( ( scene.dpvs.sceneDObjIndex[entnum] == (65535) ) )", "( scene.dpvs.sceneDObjIndex[entnum] ) = %i", useDepthHack) )
        __debugbreak();
    }
    if ( materialTime != 0.0 || sceneEntityMutableShaderData->modelShaderData[0].baseEmissiveAndTransitionFactor || sceneEntityMutableShaderData->hudOutlineInfo.temperatureSet || (v19 & 3) != 0 )
    {
      if ( ((unsigned __int8)&scene.gfxEntCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.gfxEntCount) )
        __debugbreak();
      v21 = _InterlockedExchangeAdd(&scene.gfxEntCount, 1u);
      v82 = v21;
      if ( v21 >= 0x400 )
      {
        scene.gfxEntCount = 1024;
        R_WarnOncePerFrame(R_WARN_KNOWN_SPECIAL_MODELS, 1024i64);
        return;
      }
      v22 = v21;
      scene.gfxEnts[v22].materialTime = materialTime;
      v19 = renderFlagsa;
      scene.gfxEnts[v22].renderFlags = renderFlagsa & 3;
      LODWORD(v86) = -1;
      _XMM0 = _xmm;
      __asm { vcvtps2ph xmm0, xmm0, 0 }
      scene.gfxEnts[v22].scriptablePackedColorEmissive = _XMM0;
      scene.gfxEnts[v22].scriptablePackedColorEmissive.v[2] = 2015232960;
      _XMM2 = 0i64;
      __asm
      {
        vinsertps xmm2, xmm2, xmm1, 0
        vcvtps2ph xmm0, xmm2, 0
      }
      v81 = _XMM0;
      scene.gfxEnts[v22].scriptablePackedColorEmissive.v[3] = _XMM0;
      if ( sceneEntityMutableShaderData->hudOutlineInfo.temperatureSet )
      {
        scene.gfxEnts[v21].scriptableTemperature = sceneEntityMutableShaderData->hudOutlineInfo.temperatureBase;
        scene.gfxEnts[v21].scriptableTemperatureScale = sceneEntityMutableShaderData->hudOutlineInfo.temperatureScale;
      }
      else
      {
        scene.gfxEnts[v21].scriptableTemperature = 0.0;
        scene.gfxEnts[v21].scriptableTemperatureScale = 1.0;
      }
      scene.gfxEnts[v21].eyeSensorPupilSize = 0.0;
    }
    else
    {
      v82 = 0;
    }
    if ( (v19 & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2060, ASSERT_TYPE_ASSERT, "(!(renderFlags & (1 << 4)))", (const char *)&queryFormat, "!(renderFlags & RF_NODRAW)") )
      __debugbreak();
    v28 = R_AllocSceneDObj();
    v81 = v28;
    if ( v28 < 0x200 )
    {
      v29 = &scene.sceneDObjVisData[-1424][1424 * v28];
      *((_WORD *)v29 + 704) = truncate_cast<unsigned short,unsigned int>(gfxEntDataIndexBase);
      R_SetMaterialLodSettings(&materialLodSettings);
      v30 = Com_GameMode_SupportsFeature(WEAPON_CHARGING_OUT|0x80);
      v79 = v30;
      NumModels = DObjGetNumModels(obj);
      if ( NumModels > 0 )
      {
        v32 = 0i64;
        v86 = (float *)(v29 + 368);
        v33 = NumModels;
        do
        {
          Model = DObjGetModel(obj, v13);
          v35 = Model;
          v36 = v30 && (Model->flags & 0x20) != 0;
          BestUsableLodOverrideLowest = XModelGetBestUsableLodOverrideLowest(Model, 0, v36, 1);
          v38 = BestUsableLodOverrideLowest;
          if ( BestUsableLodOverrideLowest > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)BestUsableLodOverrideLowest, "unsigned", BestUsableLodOverrideLowest) )
            __debugbreak();
          v29[v32 + 112] = v38;
          MaterialLodForDist = XModelGetMaterialLodForDist(v35->radius, 0.0, &materialLodSettings);
          v40 = v86;
          *v86 = *(float *)&MaterialLodForDist;
          ++v13;
          ++v32;
          v86 = v40 + 1;
          v30 = v79;
        }
        while ( v32 < v33 );
        v12 = v89;
        v19 = renderFlagsa;
        LODWORD(v9) = v84;
      }
      *((_QWORD *)v29 + 174) = obj;
      obj->validation |= 1u;
      v41 = v82;
      if ( v82 >= 0x400 )
      {
        LODWORD(v77) = 1024;
        LODWORD(useDepthHack) = v82;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2099, ASSERT_TYPE_ASSERT, "(unsigned)( gfxEntIndex ) < (unsigned)( (1 << 10) )", "gfxEntIndex doesn't index GFX_SPECIAL_ENTITY_LIMIT\n\t%i not in [0, %i)", useDepthHack, v77) )
          __debugbreak();
      }
      if ( (unsigned int)v9 >= 0x1000 )
      {
        LODWORD(v77) = 4096;
        LODWORD(useDepthHack) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2100, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( (1 << 12) )", "entnum doesn't index SCENE_ENTNUM_LIMIT\n\t%i not in [0, %i)", useDepthHack, v77) )
          __debugbreak();
      }
      if ( v19 >= 0x100000 )
      {
        LODWORD(v77) = 0x100000;
        LODWORD(useDepthHack) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2101, ASSERT_TYPE_ASSERT, "(unsigned)( renderFlags ) < (unsigned)( (1 << 20) )", "renderFlags doesn't index RENDERFX_FLAGS_LIMIT\n\t%i not in [0, %i)", useDepthHack, v77) )
          __debugbreak();
      }
      *((_DWORD *)v29 + 346) &= 0xFFFFFC00;
      *((_DWORD *)v29 + 346) |= v41 & 0x3FF;
      *((_WORD *)v29 + 706) = truncate_cast<unsigned short,unsigned int>(val);
      *((_DWORD *)v29 + 346) &= 0xFFC003FF;
      *((_DWORD *)v29 + 346) |= (v9 & 0xFFF) << 10;
      *((_DWORD *)v29 + 347) &= 0xFFF00000;
      *((_DWORD *)v29 + 347) |= v19 & 0xFFFFF;
      v42 = v81;
      scene.dpvs.sceneDObjIndex[v90] = v81;
      *((_QWORD *)v29 + 175) = v91;
      if ( !obj->lastGpuLightGridRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2111, ASSERT_TYPE_ASSERT, "(obj->lastGpuLightGridRequest)", (const char *)&queryFormat, "obj->lastGpuLightGridRequest") )
        __debugbreak();
      *((_QWORD *)v29 + 177) = obj->lastGpuLightGridRequest;
      if ( *((_DWORD *)v29 + 18) )
      {
        LODWORD(useDepthHack) = *((_DWORD *)v29 + 18);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2114, ASSERT_TYPE_SANITY, "( ( sceneEnt->cull.state == CULL_STATE_OUT ) )", "( sceneEnt->cull.state ) = %i", useDepthHack) )
          __debugbreak();
      }
      R_SetupSceneEntBounds((GfxSceneEntity *)v29, &tmpOrg, &tmpBounds);
      GfxSceneEntity_SetLightingOrigin((GfxSceneEntity *)v29, lightingOrigin);
      if ( v78 )
      {
        models = obj->models;
        v44 = *models;
        v93 = *(_OWORD *)(*models)->bounds.midPoint.v;
        v94 = *(_QWORD *)&v44->bounds.halfSize.y;
        v45 = obj->numModels;
        if ( v45 > 1 )
        {
          v46 = (__int64 *)(models + 1);
          v47 = v45 - 1;
          v48.m128_i32[0] = HIDWORD(v93);
          v49.m128_i32[0] = v93;
          do
          {
            v50 = *v46;
            v95.m128_i32[3] = 0;
            v52 = v95;
            v52.m128_f32[0] = v49.m128_f32[0];
            _XMM6 = v52;
            __asm
            {
              vinsertps xmm6, xmm6, xmm1, 10h
              vinsertps xmm6, xmm6, xmm2, 20h ; ' '
            }
            v95 = _XMM6;
            v96.m128_i32[3] = 0;
            v56 = v96;
            v56.m128_f32[0] = v48.m128_f32[0];
            _XMM3 = v56;
            __asm
            {
              vinsertps xmm3, xmm3, xmm5, 10h
              vinsertps xmm3, xmm3, xmm8, 20h ; ' '
            }
            v96 = _XMM3;
            v59 = *(float *)(v50 + 44);
            v97.m128_i32[3] = 0;
            v61 = v97;
            v61.m128_f32[0] = v59;
            _XMM5 = v61;
            __asm
            {
              vinsertps xmm5, xmm5, dword ptr [rax+30h], 10h
              vinsertps xmm5, xmm5, dword ptr [rax+34h], 20h ; ' '
            }
            v97 = _XMM5;
            v64 = *(float *)(v50 + 56);
            v98.m128_i32[3] = 0;
            v66 = v98;
            v66.m128_f32[0] = v64;
            _XMM4 = v66;
            __asm
            {
              vinsertps xmm4, xmm4, xmm1, 10h
              vinsertps xmm4, xmm4, xmm2, 20h ; ' '
            }
            v98 = _XMM4;
            _mm128_sub_ps(_XMM6, _XMM3);
            _mm128_add_ps(_XMM6, _XMM3);
            _XMM0 = _mm128_sub_ps(_XMM5, _XMM4);
            _XMM1 = _mm128_add_ps(_XMM5, _XMM4);
            __asm
            {
              vminps  xmm4, xmm0, xmm2
              vmaxps  xmm0, xmm1, xmm3
            }
            v49 = _mm128_mul_ps(g_oneHalf.v, _mm128_add_ps(_XMM0, _XMM4));
            v48 = _mm128_sub_ps(v49, _XMM4);
            _mm_shuffle_ps(v49, v49, 85);
            _mm_shuffle_ps(v49, v49, 170);
            _mm_shuffle_ps(v48, v48, 85);
            _mm_shuffle_ps(v48, v48, 170);
            ++v46;
            --v47;
          }
          while ( v47 );
        }
        R_SetEntityShaderData(gfxPackedEntityData, v12, fsqrt((float)((float)((float)(lightingOrigin->v[1] - rg.viewOrg.v[1]) * (float)(lightingOrigin->v[1] - rg.viewOrg.v[1])) + (float)((float)(lightingOrigin->v[0] - rg.viewOrg.v[0]) * (float)(lightingOrigin->v[0] - rg.viewOrg.v[0]))) + (float)((float)(lightingOrigin->v[2] - rg.viewOrg.v[2]) * (float)(lightingOrigin->v[2] - rg.viewOrg.v[2]))), &tmpBounds, obj->entnum, renderFlagsa & 1);
      }
      sceneDObjMarkableViewmodelIndex = scene.sceneDObjMarkableViewmodelIndex;
      if ( markableViewmodel )
        sceneDObjMarkableViewmodelIndex = v42;
      scene.sceneDObjMarkableViewmodelIndex = sceneDObjMarkableViewmodelIndex;
      sceneDObjFirstViewmodelIndex = scene.sceneDObjFirstViewmodelIndex;
      sceneDObjViewmodelCount = scene.sceneDObjViewmodelCount;
      if ( !scene.sceneDObjViewmodelCount )
        sceneDObjFirstViewmodelIndex = v42;
      scene.sceneDObjFirstViewmodelIndex = sceneDObjFirstViewmodelIndex;
      if ( v42 != scene.sceneDObjViewmodelCount + sceneDObjFirstViewmodelIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2142, ASSERT_TYPE_ASSERT, "(sceneEntIndex == scene.sceneDObjFirstViewmodelIndex + scene.sceneDObjViewmodelCount)", (const char *)&queryFormat, "sceneEntIndex == scene.sceneDObjFirstViewmodelIndex + scene.sceneDObjViewmodelCount") )
          __debugbreak();
        sceneDObjViewmodelCount = scene.sceneDObjViewmodelCount;
      }
      scene.sceneDObjViewmodelCount = sceneDObjViewmodelCount + 1;
      CG_Entity_PredictiveSkinCEntity((GfxSceneEntity *)v29, 1);
      memset(&tmpBounds, 0, sizeof(tmpBounds));
      memset(&tmpOrg, 0, sizeof(tmpOrg));
    }
  }
}

/*
==============
R_AddVolumetricToScene
==============
*/
void R_AddVolumetricToScene(const GfxVolumetric *volumetric)
{
  __int64 sceneVolumetricCount; 
  GfxSceneVolumetric *v3; 
  __int64 v4; 
  __int128 v5; 
  __int64 v6; 

  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2372, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  sceneVolumetricCount = scene.sceneVolumetricCount;
  if ( scene.sceneVolumetricCount >= 0x80 )
  {
    if ( scene.sceneVolumetricCount != 128 )
    {
      LODWORD(v6) = scene.sceneVolumetricCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2381, ASSERT_TYPE_ASSERT, "( ( scene.sceneVolumetricCount == 128 ) )", "( scene.sceneVolumetricCount ) = %i", v6) )
        __debugbreak();
    }
    R_WarnOncePerFrame(R_WARN_KNOWN_VOLUMETRICS);
  }
  else
  {
    ++scene.sceneVolumetricCount;
  }
  if ( (unsigned int)sceneVolumetricCount < 0x80 )
  {
    v3 = &scene.sceneVolumetrics[sceneVolumetricCount];
    v4 = 2i64;
    do
    {
      v3 = (GfxSceneVolumetric *)((char *)v3 + 128);
      v5 = *(_OWORD *)&volumetric->livePath;
      volumetric = (const GfxVolumetric *)((char *)volumetric + 128);
      *(_OWORD *)v3[-1].volumetric.masks[0].scroll.v = v5;
      *(_OWORD *)&v3[-1].volumetric.masks[1].image = *(_OWORD *)&volumetric[-1].masks[1].image;
      *(_OWORD *)v3[-1].volumetric.masks[1].offset.v = *(_OWORD *)volumetric[-1].masks[1].offset.v;
      *(_OWORD *)&v3[-1].volumetric.masks[2].type = *(_OWORD *)&volumetric[-1].masks[2].type;
      *(_OWORD *)v3[-1].volumetric.masks[2].scale.v = *(_OWORD *)volumetric[-1].masks[2].scale.v;
      *(_OWORD *)v3[-1].volumetric.masks[2].scroll.v = *(_OWORD *)volumetric[-1].masks[2].scroll.v;
      *(_OWORD *)&v3[-1].volumetric.masks[3].image = *(_OWORD *)&volumetric[-1].masks[3].image;
      *(_OWORD *)v3[-1].volumetric.masks[3].offset.v = *(_OWORD *)volumetric[-1].masks[3].offset.v;
      --v4;
    }
    while ( v4 );
    v3->volumetric.livePath = volumetric->livePath;
  }
}

/*
==============
R_AllocPackedEntityData
==============
*/
void R_AllocPackedEntityData(unsigned int dataCount, unsigned int *gfxEntDataIndexBase, GfxPackedEntityData **gfxPackedEntityData)
{
  __int64 v3; 
  unsigned int v6; 

  v3 = dataCount;
  if ( dataCount )
  {
    if ( ((unsigned __int8)&scene.gfxEntDataCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.gfxEntDataCount) )
      __debugbreak();
    v6 = _InterlockedExchangeAdd(&scene.gfxEntDataCount, v3);
    *gfxEntDataIndexBase = v6;
    if ( v6 + (unsigned int)v3 > 0x180 )
    {
      if ( ((unsigned __int64)&scene.gfxEntDataCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.gfxEntDataCount) )
        __debugbreak();
      _InterlockedExchangeAdd(&scene.gfxEntDataCount, -(int)v3);
      *gfxEntDataIndexBase = 0;
      *gfxPackedEntityData = NULL;
      R_WarnOncePerFrame(R_WARN_ENTITY_DATA_BUFFER_INDEX, 184 * v3, 384i64);
    }
    else
    {
      *gfxPackedEntityData = &scene.gfxPackedEntityData[v6];
    }
  }
  else
  {
    *gfxEntDataIndexBase = 0;
    *gfxPackedEntityData = NULL;
  }
}

/*
==============
R_AllocReflectionProbeInstance
==============
*/
__int64 R_AllocReflectionProbeInstance()
{
  unsigned int sceneReflectionProbeInstanceCount; 
  __int64 v2; 

  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2413, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  sceneReflectionProbeInstanceCount = scene.sceneReflectionProbeInstanceCount;
  if ( scene.sceneReflectionProbeInstanceCount >= 0x80 )
  {
    if ( scene.sceneReflectionProbeInstanceCount != 128 )
    {
      LODWORD(v2) = scene.sceneReflectionProbeInstanceCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2422, ASSERT_TYPE_ASSERT, "( ( scene.sceneReflectionProbeInstanceCount == 128 ) )", "( scene.sceneReflectionProbeInstanceCount ) = %i", v2) )
        __debugbreak();
    }
    R_WarnOncePerFrame(R_WARN_KNOWN_REFLECTION_PROBE_VOLUMES);
    return sceneReflectionProbeInstanceCount;
  }
  else
  {
    return scene.sceneReflectionProbeInstanceCount++;
  }
}

/*
==============
R_AllocSceneDObj
==============
*/
__int64 R_AllocSceneDObj()
{
  __int64 v0; 
  bool v1; 
  unsigned int sceneDObjCount; 
  __int64 v4; 

  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 820, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_DWORD *)(v0 + 1728) )
      goto LABEL_11;
    v1 = *(_DWORD *)(v0 + 1724) == 0;
  }
  else
  {
    v1 = !Sys_IsMainThread();
  }
  if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 821, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
LABEL_11:
  sceneDObjCount = scene.sceneDObjCount;
  if ( scene.sceneDObjCount >= 0x200u )
  {
    if ( scene.sceneDObjCount != 512 )
    {
      LODWORD(v4) = scene.sceneDObjCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 830, ASSERT_TYPE_ASSERT, "( ( scene.sceneDObjCount == 512 ) )", "( scene.sceneDObjCount ) = %i", v4) )
        __debugbreak();
    }
    R_WarnOncePerFrame(R_WARN_KNOWN_DOBJ, 512i64);
    return sceneDObjCount;
  }
  else
  {
    return (unsigned int)scene.sceneDObjCount++;
  }
}

/*
==============
R_AllocSceneModel
==============
*/
__int64 R_AllocSceneModel()
{
  unsigned __int32 v0; 

  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 845, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( !scene.sceneModelCountValidWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 846, ASSERT_TYPE_ASSERT, "(scene.sceneModelCountValidWrite)", (const char *)&queryFormat, "scene.sceneModelCountValidWrite") )
    __debugbreak();
  if ( ((unsigned __int8)&scene.sceneModelCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.sceneModelCount) )
    __debugbreak();
  v0 = _InterlockedExchangeAdd(&scene.sceneModelCount, 1u);
  if ( v0 >= 0x400 )
  {
    scene.sceneModelCount = 1024;
    R_WarnOncePerFrame(R_WARN_KNOWN_MODELS, 1024i64);
  }
  return v0;
}

/*
==============
R_AllocVolumetric
==============
*/
__int64 R_AllocVolumetric()
{
  unsigned int sceneVolumetricCount; 
  __int64 v2; 

  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2372, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  sceneVolumetricCount = scene.sceneVolumetricCount;
  if ( scene.sceneVolumetricCount >= 0x80 )
  {
    if ( scene.sceneVolumetricCount != 128 )
    {
      LODWORD(v2) = scene.sceneVolumetricCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2381, ASSERT_TYPE_ASSERT, "( ( scene.sceneVolumetricCount == 128 ) )", "( scene.sceneVolumetricCount ) = %i", v2) )
        __debugbreak();
    }
    R_WarnOncePerFrame(R_WARN_KNOWN_VOLUMETRICS);
    return sceneVolumetricCount;
  }
  else
  {
    return scene.sceneVolumetricCount++;
  }
}

/*
==============
R_AllocateDynamicOmniLight
==============
*/
__int64 R_AllocateDynamicOmniLight()
{
  __int64 result; 

  if ( ((unsigned __int8)&scene.dynamicOmniLightCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.dynamicOmniLightCount) )
    __debugbreak();
  result = (unsigned int)_InterlockedExchangeAdd(&scene.dynamicOmniLightCount, 1u);
  if ( (int)result >= 64 )
  {
    if ( ((unsigned __int64)&scene.dynamicOmniLightCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.dynamicOmniLightCount) )
      __debugbreak();
    _InterlockedDecrement(&scene.dynamicOmniLightCount);
    R_WarnOncePerFrame(R_WARN_MAX_DYNAMIC_OMNILIGHTS);
    return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
R_AllocateDynamicSpotLight
==============
*/
__int64 R_AllocateDynamicSpotLight()
{
  __int64 result; 

  if ( ((unsigned __int8)&scene.dynamicSpotLightCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.dynamicSpotLightCount) )
    __debugbreak();
  result = (unsigned int)_InterlockedExchangeAdd(&scene.dynamicSpotLightCount, 1u);
  if ( (int)result >= 64 )
  {
    if ( ((unsigned __int64)&scene.dynamicSpotLightCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.dynamicSpotLightCount) )
      __debugbreak();
    _InterlockedDecrement(&scene.dynamicSpotLightCount);
    R_WarnOncePerFrame(R_WARN_MAX_DYNAMIC_SPOTLIGHTS);
    return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
R_ApplySubPixelOffset
==============
*/
void R_ApplySubPixelOffset(const vec2_t *offset, const GfxMatrix *in, GfxMatrix *out)
{
  float v6; 
  tmat44_t<vec4_t> outa; 

  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2753, ASSERT_TYPE_ASSERT, "(&in != &out)", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  MatrixIdentity44(&outa);
  v6 = offset->v[1];
  outa.m[3].v[0] = offset->v[0];
  outa.m[3].v[1] = v6;
  MatrixMultiply44Aligned(&in->m, &outa, &out->m);
}

/*
==============
R_AssignSceneParmsViewports
==============
*/
void R_AssignSceneParmsViewports(GfxSceneParms *sceneParms, const refdef_t *refdef, bool useDisplayViewportDims, GfxResolutionStep step)
{
  unsigned __int16 v7; 
  unsigned int height; 
  const dvar_t *v9; 
  unsigned __int16 v10; 
  unsigned int v11; 
  unsigned int x; 
  unsigned int y; 
  unsigned __int16 v14; 
  unsigned int v15; 
  unsigned __int16 v16; 
  unsigned int width; 
  unsigned __int16 v18; 
  unsigned int v19; 
  GfxViewport displayViewport; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  bool vrs; 
  bool vrsEmissiveOnly; 
  bool halfResEmissive; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned __int16 v34; 
  unsigned int v35; 

  sceneParms->resolution = refdef->resolution;
  if ( useDisplayViewportDims )
  {
    R_DisplayToSceneViewport(&sceneParms->sceneViewport, &refdef->displayViewport, GFX_RESOLUTION_STEP_NONE);
    v7 = truncate_cast<unsigned short,unsigned int>(sceneParms->sceneViewport.width);
    height = sceneParms->sceneViewport.height;
    sceneParms->resolution.sceneWidthStep0 = v7;
    sceneParms->resolution.sceneHeightStep0 = truncate_cast<unsigned short,unsigned int>(height);
    v9 = DVARINT_r_sceneResMin;
    if ( !DVARINT_r_sceneResMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    R_DisplayToSceneViewport(&sceneParms->sceneViewport, &refdef->displayViewport, (GfxResolutionStep)v9->current.enabled);
    v10 = truncate_cast<unsigned short,unsigned int>(sceneParms->sceneViewport.width);
    v11 = sceneParms->sceneViewport.height;
    sceneParms->maxSceneRtWidth = v10;
    sceneParms->maxSceneRtHeight = truncate_cast<unsigned short,unsigned int>(v11);
    R_DisplayToSceneViewport(&sceneParms->sceneViewport, &refdef->displayViewport, step);
    x = sceneParms->sceneViewport.x;
    y = sceneParms->sceneViewport.y;
    *(_QWORD *)&sceneParms->sceneViewport.x = 0i64;
    if ( refdef->useScissorViewport )
    {
      R_DisplayToSceneViewport(&sceneParms->scissorViewport, &refdef->scissorViewport, step);
      sceneParms->scissorViewport.x -= x;
      sceneParms->scissorViewport.y -= y;
    }
    else
    {
      sceneParms->scissorViewport = sceneParms->sceneViewport;
    }
  }
  else
  {
    sceneParms->sceneViewport = refdef->displayViewport;
    sceneParms->scissorViewport = refdef->displayViewport;
    v14 = truncate_cast<unsigned short,unsigned int>(sceneParms->sceneViewport.width);
    v15 = sceneParms->sceneViewport.height;
    sceneParms->resolution.sceneWidthStep0 = v14;
    v16 = truncate_cast<unsigned short,unsigned int>(v15);
    width = sceneParms->sceneViewport.width;
    sceneParms->resolution.sceneHeightStep0 = v16;
    v18 = truncate_cast<unsigned short,unsigned int>(width);
    v19 = sceneParms->sceneViewport.height;
    sceneParms->maxSceneRtWidth = v18;
    sceneParms->maxSceneRtHeight = truncate_cast<unsigned short,unsigned int>(v19);
  }
  displayViewport = refdef->displayViewport;
  v21 = sceneParms->sceneViewport.width;
  v22 = sceneParms->sceneViewport.height;
  v23 = sceneParms->scissorViewport.width;
  v24 = sceneParms->scissorViewport.height;
  v25 = sceneParms->sceneViewport.x;
  v26 = sceneParms->sceneViewport.y;
  v27 = sceneParms->scissorViewport.x;
  v28 = sceneParms->scissorViewport.y;
  sceneParms->displayViewport = displayViewport;
  vrs = rg.vrs;
  vrsEmissiveOnly = rg.vrsEmissiveOnly;
  halfResEmissive = rg.halfResEmissive;
  v32 = rg.vrs;
  sceneParms->sceneGeoViewport.x = v25;
  sceneParms->sceneGeoViewport.y = v26;
  ++v32;
  sceneParms->scissorGeoViewport.x = v27;
  sceneParms->scissorGeoViewport.y = v28;
  sceneParms->sceneGeoViewport.width = v21 / v32;
  sceneParms->sceneEmissiveViewport.x = v25;
  sceneParms->sceneEmissiveViewport.y = v26;
  sceneParms->sceneGeoViewport.height = v22 / v32;
  sceneParms->scissorEmissiveViewport.x = v27;
  sceneParms->scissorGeoViewport.width = v23 / v32;
  sceneParms->scissorEmissiveViewport.y = v28;
  sceneParms->scissorGeoViewport.height = v24 / v32;
  v33 = (vrs || vrsEmissiveOnly || halfResEmissive) + 1;
  sceneParms->sceneEmissiveViewport.width = v21 / v33;
  sceneParms->sceneEmissiveViewport.height = v22 / v33;
  sceneParms->scissorEmissiveViewport.width = v23 / v33;
  sceneParms->scissorEmissiveViewport.height = v24 / v33;
  if ( v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10543, ASSERT_TYPE_ASSERT, "(sceneParms->sceneViewport.x == 0)", (const char *)&queryFormat, "sceneParms->sceneViewport.x == 0") )
    __debugbreak();
  if ( sceneParms->sceneViewport.y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10544, ASSERT_TYPE_ASSERT, "(sceneParms->sceneViewport.y == 0)", (const char *)&queryFormat, "sceneParms->sceneViewport.y == 0") )
    __debugbreak();
  v34 = truncate_cast<unsigned short,unsigned int>(sceneParms->sceneViewport.width);
  v35 = sceneParms->sceneViewport.height;
  sceneParms->sceneRtWidth = v34;
  sceneParms->sceneRtHeight = truncate_cast<unsigned short,unsigned int>(v35);
}

/*
==============
R_BeginDelayedSceneModels
==============
*/
void R_BeginDelayedSceneModels(void)
{
  int delayingActive; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 667, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  delayingActive = g_delayedSceneModelGlob.delayingActive;
  if ( r_delayAddSceneModels->current.enabled )
    delayingActive = 1;
  g_delayedSceneModelGlob.delayingActive = delayingActive;
}

/*
==============
R_BuildWorldViewProjectionMatrixForPoint
==============
*/
void R_BuildWorldViewProjectionMatrixForPoint(const vec3_t *point, GfxMatrix *outWVPMatrix)
{
  GfxViewInfo *v4; 
  tmat44_t<vec4_t> in1; 
  tmat33_t<vec3_t> out; 

  v4 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
  MatrixIdentity33(&out);
  MatrixSet44(&in1, point, &out, 1.0);
  in1.m[3].v[0] = in1.m[3].v[0] - v4->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  in1.m[3].v[1] = in1.m[3].v[1] - v4->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  in1.m[3].v[2] = in1.m[3].v[2] - v4->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  MatrixMultiply44Aligned(&in1, &v4->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &outWVPMatrix->m);
}

/*
==============
R_CGUmbraUpdateCmd
==============
*/
void R_CGUmbraUpdateCmd(const void *const cmdData)
{
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS|0x100) )
    CG_PlayersMP_CalcCoarseCullData(*(const LocalClientNum_t *)cmdData);
}

/*
==============
R_ClearDObjInScene
==============
*/
void R_ClearDObjInScene(unsigned int entnum)
{
  __int64 v1; 
  unsigned __int16 v2; 

  v1 = entnum;
  v2 = scene.dpvs.sceneDObjIndex[entnum];
  if ( v2 != 0xFFFF )
  {
    scene.dpvs.sceneDObjIndex[v1] = -1;
    memset_0(&scene.sceneDObjVisData[-1424][1424 * v2], 0, 0x590ui64);
  }
}

/*
==============
R_ClearScene
==============
*/
void R_ClearScene(void)
{
  const dvar_t *v0; 
  unsigned __int8 (*sceneBrushVisData)[512]; 
  __int64 v2; 
  unsigned __int8 (*sceneModelVisData)[1024]; 

  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9651, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9652, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  v0 = DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType;
  if ( !DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_frontendWaitWorkerCmdsOnlyOfType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_STREAM_UPDATE_DYNAMIC_MODELS);
  else
    Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_UPDATE_DYNAMIC_MODELS);
  if ( scene.sceneDObjCount > 512 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9672, ASSERT_TYPE_ASSERT, "(scene.sceneDObjCount <= 512)", (const char *)&queryFormat, "scene.sceneDObjCount <= MAX_SCENE_DOBJ") )
    __debugbreak();
  memset_0(scene.sceneDObj, 0, 1424i64 * scene.sceneDObjCount);
  if ( (unsigned __int64)(int)scene.sceneModelCount > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9674, ASSERT_TYPE_ASSERT, "(scene.sceneModelCount <= ( sizeof( *array_counter( scene.sceneModel ) ) + 0 ))", (const char *)&queryFormat, "scene.sceneModelCount <= ARRAY_COUNT( scene.sceneModel )") )
    __debugbreak();
  memset_0(scene.sceneModel, 0, 152i64 * (int)scene.sceneModelCount);
  if ( (unsigned __int64)(int)scene.sceneBrushCount > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9676, ASSERT_TYPE_ASSERT, "(scene.sceneBrushCount <= ( sizeof( *array_counter( scene.sceneBrush ) ) + 0 ))", (const char *)&queryFormat, "scene.sceneBrushCount <= ARRAY_COUNT( scene.sceneBrush )") )
    __debugbreak();
  memset_0(scene.sceneBrush, 0, 88i64 * (int)scene.sceneBrushCount);
  sceneBrushVisData = scene.sceneBrushVisData;
  v2 = 12i64;
  sceneModelVisData = scene.sceneModelVisData;
  do
  {
    memset_0(&(*sceneBrushVisData)[-219168], 0, scene.sceneDObjCount);
    memset_0(sceneModelVisData, 0, scene.sceneModelCount);
    memset_0(sceneBrushVisData++, 0, scene.sceneBrushCount);
    ++sceneModelVisData;
    --v2;
  }
  while ( v2 );
  if ( scene.sceneGlassCount )
  {
    if ( !scene.sceneGlass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9689, ASSERT_TYPE_ASSERT, "(scene.sceneGlass)", (const char *)&queryFormat, "scene.sceneGlass") )
      __debugbreak();
    memset_0(scene.sceneGlass, 0, 4i64 * scene.sceneGlassCount);
  }
  scene.gfxEntCount = 1;
  scene.gfxEntDataCount = 1;
  scene.sceneDObjCount = 0;
  scene.sceneDObjModelCount = 0;
  scene.sceneModelCount = 0;
  scene.sceneBrushCount = 0;
  memset_0(scene.sceneVolumetrics, 0, 264i64 * scene.sceneVolumetricCount);
  scene.sceneVolumetricCount = 0;
  memset_0(scene.sceneReflectionProbeInstances, 0, 144i64 * scene.sceneReflectionProbeInstanceCount);
  scene.sceneReflectionProbeInstanceCount = 0;
  *(_QWORD *)&scene.sceneModelCountValidWrite = 0i64;
  scene.sceneDObjModelCountValidRead = 0;
  if ( ((unsigned __int8)&scene.allowDynamicStreamUpdateIterateSceneModels & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &scene.allowDynamicStreamUpdateIterateSceneModels) )
    __debugbreak();
  _InterlockedExchange(&scene.allowDynamicStreamUpdateIterateSceneModels, 0);
  if ( rgp.world )
    R_ClearDpvsScene();
}

/*
==============
R_ClearSceneForReflectionProbe
==============
*/
void R_ClearSceneForReflectionProbe(void)
{
  int sceneDObjCount; 
  int v1; 
  __int64 v2; 
  int v3; 
  const DObj **p_obj; 
  __int64 v5; 
  unsigned __int8 (*sceneDObjVisData)[512]; 
  SecureVec3 tmpOrg; 
  __int64 v8; 
  SecureBoundsAccess tmpBounds; 

  v8 = -2i64;
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9585, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9586, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( scene.sceneGlassCount )
  {
    if ( !scene.sceneGlass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9593, ASSERT_TYPE_ASSERT, "(scene.sceneGlass)", (const char *)&queryFormat, "scene.sceneGlass") )
      __debugbreak();
    memset_0(scene.sceneGlass, 0, 4i64 * scene.sceneGlassCount);
  }
  sceneDObjCount = scene.sceneDObjCount;
  v1 = 0;
  v2 = 12i64;
  if ( scene.sceneDObjCount > 0 )
  {
    v3 = scene.sceneDObjCount - 1;
    p_obj = &scene.sceneDObj[0].obj;
    do
    {
      if ( ((*p_obj)->flags & 4) != 0 )
      {
        memcpy_0(&scene.sceneDObjVisData[-1424][1424 * v1], &scene.sceneDObj[v3], 0x590ui64);
        memset_0(&scene.sceneDObj[v3], 0, sizeof(scene.sceneDObj[v3]));
        --sceneDObjCount;
        --v3;
        --v1;
        p_obj -= 178;
      }
      else
      {
        v5 = v1;
        *(_QWORD *)&scene.sceneDObj[v5].cull.state = 0i64;
        *(_QWORD *)&scene.sceneDObj[v5].cull.bounds.bounds.midPoint.y = 0i64;
        *(_QWORD *)scene.sceneDObj[v5].cull.bounds.bounds.halfSize.v = 0i64;
        *(_QWORD *)&scene.sceneDObj[v5].cull.bounds.bounds.halfSize.z = 0i64;
        scene.sceneDObj[v5].cull.skinnedSurfs.firstSurf = NULL;
        R_SetupSceneEntBounds(&scene.sceneDObj[v5], &tmpOrg, &tmpBounds);
        memset(&tmpBounds, 0, sizeof(tmpBounds));
        memset(&tmpOrg, 0, sizeof(tmpOrg));
      }
      ++v1;
      p_obj += 178;
    }
    while ( v1 < sceneDObjCount );
  }
  scene.sceneDObjCount = sceneDObjCount;
  sceneDObjVisData = scene.sceneDObjVisData;
  while ( 1 )
  {
    memset_0(sceneDObjVisData++, 0, sceneDObjCount);
    if ( !--v2 )
      break;
    sceneDObjCount = scene.sceneDObjCount;
  }
  scene.sceneModelCount = scene.sceneDObjModelCount;
  memset_0(scene.sceneVolumetrics, 0, 264i64 * scene.sceneVolumetricCount);
  scene.sceneVolumetricCount = 0;
  memset_0(scene.sceneReflectionProbeInstances, 0, 144i64 * scene.sceneReflectionProbeInstanceCount);
  scene.sceneReflectionProbeInstanceCount = 0;
  if ( rgp.world )
    R_ClearDpvsScene();
}

/*
==============
R_ClearSceneView
==============
*/
void R_ClearSceneView(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  volatile int *superTerrainSunShadowSurfCount; 

  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9730, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9731, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  scene.dpvs.localClientNum = localClientNum;
  scene.dynamicSpotLightCount = 0;
  scene.dynamicOmniLightCount = 0;
  scene.dynamicSpotLightLimit = r_dynamicSpotLightLimit->current.integer;
  scene.dynamicOmniLightLimit = r_dynamicOmniLightLimit->current.integer;
  scene.visDynamicSpotLightCount = 0;
  scene.visDynamicOmniLightCount = 0;
  memset_0(&scene.addedDynamicLightCount, 0, 0x104ui64);
  LODWORD(scene.sceneSMLightScoreEyeProjectDist) = sm_lightScore_eyeProjectDist->current.integer;
  LODWORD(scene.sceneSMlightScorespotProjectFrac) = sm_lightScore_spotProjectFrac->current.integer;
  memset_0((void *)scene.drawSurfCount, 0, sizeof(scene.drawSurfCount));
  if ( rgp.world )
    R_ClearDpvsSceneView();
  scene.sceneDObjMarkableViewmodelIndex = gfxCfg.entnumOrdinaryEnd;
  *(_QWORD *)&scene.sceneDObjFirstViewmodelIndex = 0i64;
  *(_QWORD *)&scene.hudOutlineDObj = 0i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 615, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_MODELS_TO_SCENE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 619, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_MODELS_TO_SCENE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_MODELS_TO_SCENE )") )
    __debugbreak();
  *(_QWORD *)&g_delayedSceneModelGlob.dobjCount = 0i64;
  *(_QWORD *)&g_delayedSceneModelGlob.firstDObjIndex = 0i64;
  g_delayedSceneModelGlob.delayingActive = 0;
  scene.allowAddDObj = 1;
  if ( scene.sceneModelCountValidWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9776, ASSERT_TYPE_ASSERT, "(!scene.sceneModelCountValidWrite)", (const char *)&queryFormat, "!scene.sceneModelCountValidWrite") )
    __debugbreak();
  *(_QWORD *)&scene.sceneModelCountValidWrite = 1i64;
  scene.sceneDObjModelCountValidRead = 0;
  if ( ((unsigned __int8)&scene.allowDynamicStreamUpdateIterateSceneModels & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &scene.allowDynamicStreamUpdateIterateSceneModels) )
    __debugbreak();
  v2 = 3i64;
  _InterlockedExchange(&scene.allowDynamicStreamUpdateIterateSceneModels, 0);
  superTerrainSunShadowSurfCount = scene.superTerrainSunShadowSurfCount;
  scene.superTerrainSurfCount = 0;
  do
  {
    *superTerrainSunShadowSurfCount++ = 0;
    --v2;
  }
  while ( v2 );
  scene.updateSound = 0;
}

/*
==============
R_Clear_IsPipClientView
==============
*/
void R_Clear_IsPipClientView(void)
{
  frontEndDataOut->isPIPClientView = 0;
}

/*
==============
R_DispatchDelayedSceneBatch
==============
*/
__int64 R_DispatchDelayedSceneBatch()
{
  __int64 result; 
  DelayedSceneDObj *data; 
  unsigned int v2; 
  DelayedSceneBrushModel *v3; 
  unsigned int v4; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 680, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !g_delayedSceneModelGlob.delayingActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 683, ASSERT_TYPE_ASSERT, "(glob->delayingActive)", (const char *)&queryFormat, "glob->delayingActive") )
    __debugbreak();
  data = &g_delayedSceneModelGlob.dobjs[g_delayedSceneModelGlob.firstDObjIndex];
  v2 = g_delayedSceneModelGlob.dobjCount - g_delayedSceneModelGlob.firstDObjIndex;
  v3 = &g_delayedSceneModelGlob.brushModels[(unsigned __int64)g_delayedSceneModelGlob.firstBrushModelIndex];
  v4 = g_delayedSceneModelGlob.brushModelCount - g_delayedSceneModelGlob.firstBrushModelIndex;
  Sys_AddWorkerCmd(WRKCMD_ADD_MODELS_TO_SCENE, &data);
  g_delayedSceneModelGlob.firstDObjIndex = g_delayedSceneModelGlob.dobjCount;
  result = g_delayedSceneModelGlob.brushModelCount;
  g_delayedSceneModelGlob.firstBrushModelIndex = g_delayedSceneModelGlob.brushModelCount;
  return result;
}

/*
==============
R_DisplayToSceneViewport
==============
*/
void R_DisplayToSceneViewport(GfxViewport *outSceneViewport, const GfxViewport *displayViewport, GfxResolutionStep step)
{
  signed int displayWidth; 
  signed int displayHeight; 
  unsigned int v8; 
  unsigned int sceneHeight; 
  unsigned int sceneWidth; 
  const vec2_t *MatchingDynamicResolutionTable; 
  signed int y; 
  int v13; 
  signed int v14; 
  float v15; 
  float v16; 
  unsigned int v17; 
  float v18; 
  float v19; 
  unsigned int v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  unsigned int outWidth; 
  unsigned int outHeight; 

  displayWidth = vidConfig.displayWidth;
  displayHeight = vidConfig.displayHeight;
  if ( rg.sceneResNative )
  {
    v8 = vidConfig.displayWidth;
    outWidth = vidConfig.displayWidth;
    outHeight = vidConfig.displayHeight;
  }
  else if ( rg.sceneResDynamic )
  {
    sceneHeight = vidConfig.sceneHeight;
    sceneWidth = vidConfig.sceneWidth;
    MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    R_RT_AdjustForDynamicResolution(MatchingDynamicResolutionTable, sceneWidth, sceneHeight, step, &outWidth, &outHeight);
    v8 = outWidth;
  }
  else
  {
    v8 = vidConfig.sceneWidth;
    outWidth = vidConfig.sceneWidth;
    outHeight = vidConfig.sceneHeight;
  }
  y = displayViewport->y;
  v13 = y + displayViewport->height;
  v14 = displayViewport->x + displayViewport->width;
  v15 = 1.0 / (float)displayWidth;
  v16 = (float)v8;
  v17 = (int)roundf((float)((float)(int)displayViewport->x * v16) * v15);
  v18 = (float)outHeight;
  v19 = 1.0 / (float)displayHeight;
  v20 = (int)roundf((float)((float)y * v18) * v19);
  v21 = (float)outWidth;
  v22 = roundf((float)((float)v14 * v21) * v15);
  v23 = (float)outHeight;
  v24 = v22;
  v25 = roundf((float)((float)v13 * v23) * v19);
  outSceneViewport->width = (int)v24 - v17;
  outSceneViewport->y = v20;
  outSceneViewport->height = (int)v25 - v20;
  outSceneViewport->x = v17;
}

/*
==============
R_DrawLightsAndObjectsPass3
==============
*/
void R_DrawLightsAndObjectsPass3(GfxViewInfo *viewInfo)
{
  R_RT_DepthHandle v2; 
  R_RT_DepthHandle v3; 
  R_RT_DepthHandle result; 
  R_RT_DepthHandle v5; 

  Sys_ProfBeginNamedEvent(0xFFFFA07A, "R_DrawLightsAndObjectsPass3");
  frontEndDataOut->gfxEntCount = scene.gfxEntCount;
  memcpy_0(frontEndDataOut->gfxEnts, scene.gfxEnts, 36i64 * (int)scene.gfxEntCount);
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    if ( viewInfo->useDynamicSunShadows )
    {
      Sys_ProfBeginNamedEvent(0xFF708090, "scene ent surfaces");
      R_AddAllSceneEntSurfacesSunShadow();
      Sys_ProfEndNamedEvent();
    }
    if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_BSP_SUNSHADOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8010, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_BSP_SUNSHADOW ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_BSP_SUNSHADOW )") )
      __debugbreak();
    if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_SUNSHADOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8016, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_STATICMODEL_SUNSHADOW ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_STATICMODEL_SUNSHADOW )") )
      __debugbreak();
    if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_SUPER_TERRAIN_SUNSHADOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8022, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_SUPER_TERRAIN_SUNSHADOW ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_SUPER_TERRAIN_SUNSHADOW )") )
      __debugbreak();
    Profile_Begin(60);
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5130, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    R_MergeAndEmitSunShadowMapsSurfs(viewInfo);
    if ( (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0 )
    {
      v2 = *R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D(&result);
      v3 = *R_SunShadowCache_GetDepthArrayRtDraw3D(&v5);
      R_GenerateSortedSunShadowCacheSurfs(viewInfo, NULL, &v3, &v2, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
    }
    if ( r_sunshadowmap_cmdbuf_worker->current.enabled && (viewInfo->useDynamicSunShadows || !viewInfo->useCachedSunShadow) )
    {
      R_AddDrawCalls(viewInfo, NULL, DRAWLIST_CAMERA_COUNT, (GfxDrawListType)(rg.sunShadowOpaqueCascadeCount + 24), 0x5Du);
      R_AddDrawCall(viewInfo, NULL, DRAWLIST_SUNSHADOW_VIEWMODEL, 0x5Du);
    }
    if ( rg.useTransSunShadow )
      R_MergeAndEmitTranslucentSunShadowMapsSurfs(viewInfo);
    Profile_EndInternal(NULL);
  }
  R_GenerateSpotShadowDrawSurfs(viewInfo);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_DumpLODInfo
==============
*/
void R_DumpLODInfo(const RefdefView *view, bool dynRes)
{
  const dvar_t *v4; 
  cg_t *LocalClientGlobals; 
  BOOL v6; 
  vec3_t outOrg; 

  v4 = DCONST_DVARBOOL_r_debugLodInfo;
  if ( !DCONST_DVARBOOL_r_debugLodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_debugLodInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    RefdefView_GetOrg(view, &outOrg);
    v6 = dynRes;
    Com_Printf(14, "DumpLodInfo: viewOrg %f %f %f, playerOrg %f %f %f, dynRes %d\n", outOrg.v[0], outOrg.v[1], outOrg.v[2], LocalClientGlobals->predictedPlayerState.origin.v[0], LocalClientGlobals->predictedPlayerState.origin.v[1], LocalClientGlobals->predictedPlayerState.origin.v[2], v6);
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
R_DynamicLightFrustumTestBox
==============
*/
bool R_DynamicLightFrustumTestBox(unsigned int dynLightIndex, const Bounds *bounds)
{
  __int64 v3; 

  v3 = dynLightIndex;
  if ( dynLightIndex >= scene.addedDynamicLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11313, ASSERT_TYPE_ASSERT, "(dynLightIndex < scene.addedDynamicLightCount)", (const char *)&queryFormat, "dynLightIndex < scene.addedDynamicLightCount") )
    __debugbreak();
  return R_BoxInPlanes((const vec4_t (*)[6])scene.sceneDynamicLight[v3]->planes, bounds) != 0;
}

/*
==============
R_DynamicLightFrustumTestSphere
==============
*/
bool R_DynamicLightFrustumTestSphere(unsigned int dynLightIndex, const Sphere *sphere)
{
  __int64 v3; 

  v3 = dynLightIndex;
  if ( dynLightIndex >= scene.addedDynamicLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11321, ASSERT_TYPE_ASSERT, "(dynLightIndex < scene.addedDynamicLightCount)", (const char *)&queryFormat, "dynLightIndex < scene.addedDynamicLightCount") )
    __debugbreak();
  return R_SphereInPlanes((const vec4_t (*)[6])scene.sceneDynamicLight[v3]->planes, &sphere->origin, sphere->radius) != 0;
}

/*
==============
R_EndDObjScene
==============
*/
void R_EndDObjScene(void)
{
  if ( !scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2220, ASSERT_TYPE_ASSERT, "(scene.allowAddDObj)", (const char *)&queryFormat, "scene.allowAddDObj") )
    __debugbreak();
  scene.allowAddDObj = 0;
  scene.sceneDObjModelCount = scene.sceneModelCount;
  if ( scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2227, ASSERT_TYPE_ASSERT, "(!scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "!scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  scene.sceneDObjModelCountValidRead = 1;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2209, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2210, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  memcpy_0(frontEndDataOut->packedEntityData, scene.gfxPackedEntityData, 184i64 * (int)scene.gfxEntDataCount);
  frontEndDataOut->packedEntityCount = scene.gfxEntDataCount;
}

/*
==============
R_EndDelayedSceneModels
==============
*/
void R_EndDelayedSceneModels(bool addToScene)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 751, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( addToScene && !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 752, ASSERT_TYPE_ASSERT, "(!addToScene || rg.inFrame)", (const char *)&queryFormat, "!addToScene || rg.inFrame") )
    __debugbreak();
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    R_FlushDelayedSceneModels(addToScene);
    g_delayedSceneModelGlob.delayingActive = 0;
  }
  else if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_MODELS_TO_SCENE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 756, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_MODELS_TO_SCENE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_MODELS_TO_SCENE )") )
  {
    __debugbreak();
  }
}

/*
==============
R_Estimate3DTextSize
==============
*/
__int64 R_Estimate3DTextSize(const vec3_t *top, const vec3_t *bottom)
{
  __m128 v3; 
  __m128 v4; 
  GfxViewInfo *v5; 
  float width; 
  float height; 
  float v8; 
  vec4_t out; 
  vec4_t v13; 
  vec4_t vec; 
  GfxMatrix outWVPMatrix; 

  vec = (vec4_t)_xmm;
  R_BuildWorldViewProjectionMatrixForPoint(top, &outWVPMatrix);
  MatrixTransformVector44Aligned(&vec, &outWVPMatrix.m, &out);
  v3 = (__m128)LODWORD(FLOAT_1_0);
  v3.m128_f32[0] = 1.0 / out.v[3];
  out = (vec4_t)_mm128_mul_ps(_mm_shuffle_ps(v3, v3, 0), (__m128)out);
  R_BuildWorldViewProjectionMatrixForPoint(bottom, &outWVPMatrix);
  MatrixTransformVector44Aligned(&vec, &outWVPMatrix.m, &v13);
  v4 = (__m128)LODWORD(FLOAT_1_0);
  v4.m128_f32[0] = 1.0 / v13.v[3];
  v13 = (vec4_t)_mm128_mul_ps(_mm_shuffle_ps(v4, v4, 0), (__m128)v13);
  v5 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
  width = (float)v5->sceneViewport.width;
  out.v[0] = (float)(width * 0.5) * out.v[0];
  height = (float)v5->sceneViewport.height;
  out.v[1] = (float)(height * 0.5) * out.v[1];
  v8 = (float)v5->sceneViewport.width;
  v13.v[0] = v13.v[0] * (float)(v8 * 0.5);
  v4.m128_f32[0] = (float)v5->sceneViewport.height;
  fsqrt((float)((float)((float)((float)(v4.m128_f32[0] * 0.5) * v13.v[1]) - out.v[1]) * (float)((float)((float)(v4.m128_f32[0] * 0.5) * v13.v[1]) - out.v[1])) + (float)((float)(v13.v[0] - out.v[0]) * (float)(v13.v[0] - out.v[0])));
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm4, 1 }
  return (unsigned int)(12 * (int)*(float *)&_XMM3);
}

/*
==============
R_EyeHighlight_SetInfo
==============
*/
void R_EyeHighlight_SetInfo(GfxViewInfo *viewInfo, __int64 a2, __int64 a3, __int64 a4)
{
  float eyeHighlightIntensity; 
  float v5; 
  float v6; 
  float v7; 
  double v9; 
  __int128 eyeHighlightPitch_low; 
  __m128 v11; 
  __m128 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  float eyeHighlightBulbRadius; 
  vec4_t vec; 
  vec4_t out; 
  tmat44_t<vec4_t> dst; 

  eyeHighlightIntensity = viewInfo->eyeVirtualHighlight.eyeHighlightIntensity;
  v5 = eyeHighlightIntensity * viewInfo->eyeVirtualHighlight.eyeHighlightColor.v[0];
  v6 = eyeHighlightIntensity * viewInfo->eyeVirtualHighlight.eyeHighlightColor.v[1];
  v7 = eyeHighlightIntensity * viewInfo->eyeVirtualHighlight.eyeHighlightColor.v[2];
  v9 = j___libm_sse2_sincosf_(viewInfo, a2, a3, a4);
  eyeHighlightPitch_low = LODWORD(viewInfo->eyeVirtualHighlight.eyeHighlightPitch);
  vec.v[0] = *(float *)&v9;
  v11 = (__m128)*(unsigned __int64 *)&v9;
  v12.m128_u64[1] = *((_QWORD *)&eyeHighlightPitch_low + 1);
  *(double *)v12.m128_u64 = j___libm_sse2_sincosf_(v14, v13, v15, v16);
  vec.v[1] = v12.m128_f32[0];
  LODWORD(vec.v[2]) = COERCE_UNSIGNED_INT(_mm_shuffle_ps(v12, v12, 1).m128_f32[0] * _mm_shuffle_ps(v11, v11, 1).m128_f32[0]) ^ _xmm;
  vec.v[3] = 0.0;
  MatrixInverse44Aligned((const tmat44_t<vec4_t> *)viewInfo, &dst);
  MatrixTransformVector44Aligned(&vec, &dst, &out);
  eyeHighlightBulbRadius = viewInfo->eyeVirtualHighlight.eyeHighlightBulbRadius;
  *(float *)&eyeHighlightPitch_low = out.v[1];
  viewInfo->input.sceneConstants.eyeHighlightParams1.v[0] = out.v[0];
  viewInfo->input.sceneConstants.eyeHighlightParams1.v[2] = out.v[2];
  viewInfo->input.sceneConstants.eyeHighlightParams1.v[1] = *(float *)&eyeHighlightPitch_low;
  viewInfo->input.sceneConstants.eyeHighlightParams1.v[3] = eyeHighlightBulbRadius;
  viewInfo->input.sceneConstants.eyeHighlightParams2.v[0] = v5;
  viewInfo->input.sceneConstants.eyeHighlightParams2.v[1] = v6;
  viewInfo->input.sceneConstants.eyeHighlightParams2.v[2] = v7;
  viewInfo->input.sceneConstants.eyeHighlightParams2.v[3] = 0.0;
}

/*
==============
R_FinalizeLighting
==============
*/
void R_FinalizeLighting(const void *const cmd)
{
  const GfxViewInfo *v1; 
  GfxBackEndData *v2; 
  unsigned int v3; 
  int v4; 
  GfxBackEndData *v5; 
  unsigned int v6; 
  unsigned int v7; 
  const GfxDynamicLight **sceneDynamicLight; 
  const GfxDynamicLight *v9; 
  const GfxDynamicLight **v10; 
  const GfxDynamicLight *v11; 
  char v12; 

  v1 = *(const GfxViewInfo **)cmd;
  v2 = (GfxBackEndData *)*((_QWORD *)cmd + 1);
  if ( R_UseBakedLighting() )
  {
    v3 = 0;
    v4 = 0;
    memset_0(&rgp.world->voxelTree[v1->input.voxelTreeZoneIndex].voxelInternalNodeDynamicLightListCPU[rgp.world->voxelTree[v1->input.voxelTreeZoneIndex].voxelInternalNodeCount * frontEndDataOut->dynamicLightListBufferIndex], 0, 4i64 * rgp.world->voxelTree[v1->input.voxelTreeZoneIndex].voxelInternalNodeCount);
    v5 = frontEndDataOut;
    if ( frontEndDataOut->dynamicLightCount > 0x20 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7945, ASSERT_TYPE_ASSERT, "(frontEndDataOut->dynamicLightCount <= 32)", (const char *)&queryFormat, "frontEndDataOut->dynamicLightCount <= 32") )
        __debugbreak();
      v5 = frontEndDataOut;
    }
    if ( v5->dynamicSpotLightCount != scene.visDynamicSpotLightCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7948, ASSERT_TYPE_ASSERT, "(frontEndDataOut->dynamicSpotLightCount == scene.visDynamicSpotLightCount)", (const char *)&queryFormat, "frontEndDataOut->dynamicSpotLightCount == scene.visDynamicSpotLightCount") )
        __debugbreak();
      v5 = frontEndDataOut;
    }
    v6 = 0;
    if ( v5->dynamicSpotLightCount )
    {
      v7 = 1;
      sceneDynamicLight = scene.sceneDynamicLight;
      do
      {
        v9 = *sceneDynamicLight++;
        ++v4;
        R_ClusterDynamicLights_WalkTopDownViewTree__lambda_ac116ac91ad896bbb0e236947bc64ead_(v1, v9, v7, (const R_ClusterDynamicLights::__l20::<lambda_ac116ac91ad896bbb0e236947bc64ead> *)&v12);
        v5 = frontEndDataOut;
        ++v6;
        v7 = __ROL4__(v7, 1);
      }
      while ( v6 < frontEndDataOut->dynamicSpotLightCount );
    }
    if ( v5->dynamicOmniLightCount != scene.visDynamicOmniLightCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7960, ASSERT_TYPE_ASSERT, "(frontEndDataOut->dynamicOmniLightCount == scene.visDynamicOmniLightCount)", (const char *)&queryFormat, "frontEndDataOut->dynamicOmniLightCount == scene.visDynamicOmniLightCount") )
        __debugbreak();
      v5 = frontEndDataOut;
    }
    if ( v5->dynamicOmniLightCount )
    {
      v10 = &scene.sceneDynamicLight[v4];
      do
      {
        v11 = *v10++;
        R_ClusterDynamicLights_WalkTopDownViewTree__lambda_1648d880582002ab915fb5ed7ae93245_(v1, v11, 1 << (v3 + v5->dynamicSpotLightCount), (const R_ClusterDynamicLights::__l29::<lambda_1648d880582002ab915fb5ed7ae93245> *)&v12);
        v5 = frontEndDataOut;
        ++v3;
      }
      while ( v3 < frontEndDataOut->dynamicOmniLightCount );
    }
  }
  R_UpdatePackedLightData(v2, v1);
}

/*
==============
R_FindScriptableEntityData
==============
*/
GfxScriptEntityData *R_FindScriptableEntityData(const LocalClientNum_t localClientNum, unsigned __int16 entityNum)
{
  __int64 v4; 
  bool v5; 
  GfxScriptEntityData *result; 
  __int64 v7; 

  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1101, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( entityNum >= 0xA00u )
  {
    LODWORD(v7) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1114, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid entity num %d", v7) )
      __debugbreak();
    return 0i64;
  }
  v4 = (unsigned int)entityNum + 2560 * localClientNum;
  v5 = scene.gfxScriptEntityData[v4].m_active == 0;
  result = &scene.gfxScriptEntityData[v4];
  if ( v5 )
    return 0i64;
  return result;
}

/*
==============
R_FlushDelayedSceneModels
==============
*/
void R_FlushDelayedSceneModels(bool addToScene)
{
  __int64 v2; 
  __int64 firstDObjIndex; 
  unsigned int v4; 

  if ( !g_delayedSceneModelGlob.delayingActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 634, ASSERT_TYPE_ASSERT, "(R_ShouldDelaySceneModels())", (const char *)&queryFormat, "R_ShouldDelaySceneModels()") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 635, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "R_FlushDelayedSceneModels");
  Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_MODELS_TO_SCENE);
  if ( addToScene )
  {
    v2 = 8i64 * tls_index;
    firstDObjIndex = g_delayedSceneModelGlob.firstDObjIndex;
    v4 = g_delayedSceneModelGlob.dobjCount - g_delayedSceneModelGlob.firstDObjIndex;
    *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1724i64) = 1;
    R_AddDelayedDObjsToScene((const DelayedSceneDObj *)((char *)&g_delayedSceneModelGlob.brushModels[-3456] + 216 * firstDObjIndex), v4);
    R_AddDelayedBrushModelsToScene(&g_delayedSceneModelGlob.brushModels[(unsigned __int64)g_delayedSceneModelGlob.firstBrushModelIndex], g_delayedSceneModelGlob.brushModelCount - g_delayedSceneModelGlob.firstBrushModelIndex);
    *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1724i64) = 0;
  }
  *(_QWORD *)&g_delayedSceneModelGlob.dobjCount = 0i64;
  *(_QWORD *)&g_delayedSceneModelGlob.firstDObjIndex = 0i64;
  Sys_ProfEndNamedEvent();
}

/*
==============
R_FxLightGridSampleCountInc
==============
*/
__int64 R_FxLightGridSampleCountInc(int increment)
{
  g_fxLightGridSampledUsed += increment;
  return (unsigned int)g_fxLightGridSampledUsed;
}

/*
==============
R_FxLightGridSampleCountReset
==============
*/
void R_FxLightGridSampleCountReset(void)
{
  g_fxLightGridSampledUsed = 0;
}

/*
==============
R_GenerateDrawSurfsCmd
==============
*/
void R_GenerateDrawSurfsCmd(const void *const cmd)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int FrustumWords; 
  int v7; 
  unsigned int v9; 
  GfxBspSurfListOut out; 
  SceneEntCmd sceneEntCmd; 

  Sys_ProfBeginNamedEvent(0xFF708090, "R_GenerateDrawSurfsCmd");
  v2 = *((_QWORD *)cmd + 1);
  v3 = *((_QWORD *)cmd + 98);
  if ( *(_DWORD *)cmd )
  {
    if ( *(_DWORD *)cmd == 1 )
    {
      R_ST_SetFrameDataResources((GfxCmdBufInput *)(v3 + 3760));
      Sys_ProfBeginNamedEvent(0xFF708090, "R_DrawBspLightsAndObjectsPass2");
      if ( !*(_BYTE *)(v2 + 21) && Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_BSP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7660, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_BSP ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_BSP )") )
        __debugbreak();
      Sys_ProfBeginNamedEvent(0xFF708090, "bsp surfaces");
      out.drawlistType = DRAWLIST_PREPASS_COUNT;
      out.bspSurfList = (GfxBspSurfList *)(v3 + 18640);
      *(_QWORD *)&out.missingTransient = 0i64;
      R_AddAllBspDrawSurfacesCameraNonlit(rgp.world->surfaces.emissiveSurfsBegin, rgp.world->surfaces.emissiveSurfsEnd, &out);
      Sys_ProfEndNamedEvent();
      Sys_ProfEndNamedEvent();
      if ( !*(_BYTE *)(v2 + 21) )
      {
        if ( (Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_DISPATCH) || Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_LODCALC) || Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7682, ASSERT_TYPE_ASSERT, "(!R_ExistsAddStaticModelWorker())", (const char *)&queryFormat, "!R_ExistsAddStaticModelWorker()") )
          __debugbreak();
        if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_SUPER_TERRAIN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7688, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_SUPER_TERRAIN ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_SUPER_TERRAIN )") )
          __debugbreak();
      }
      R_DrawLightsAndObjectsPass3((GfxViewInfo *)v3);
      Sys_AddWorkerCmd(WRKCMD_UGB_MAKE_XSURFS_RESIDENT_DISPATCH, (const void *const)(v3 + 11696));
      R_GenerateGPUArgs(*(const GfxBackEndData **)(v3 + 11696), 1u);
      R_GenerateGPUArgs(*(const GfxBackEndData **)(v3 + 11696), 0);
      if ( !Sys_IsRendererReady(NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8519, ASSERT_TYPE_ASSERT, "(Sys_IsRendererReady( nullptr ))", (const char *)&queryFormat, "Sys_IsRendererReady( nullptr )") )
        __debugbreak();
      R_IssueRenderCommandsBegin(*(_DWORD *)(v2 + 2512));
      R_FinishFrontendComputeCmdList();
      R_IssueRenderCommandsShadow();
      R_SubmitSurfaces((GfxViewInfo *)v3);
    }
    else if ( *(_DWORD *)cmd == 2 )
    {
      R_DecalVolumesGrid_AddCommand(*((const GfxViewInfo **)cmd + 98));
      R_SubmitFXandTransparencies((GfxViewInfo *)v3);
      R_IssueRenderCommandsOpaque();
    }
    else
    {
      if ( *(_DWORD *)cmd != 3 )
      {
        v9 = *(_DWORD *)cmd;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8547, ASSERT_TYPE_ASSERT, "( ( drawSurfsCmd->type == GENERATE_DRAWSURFS3 ) )", "( drawSurfsCmd->type ) = %i", v9) )
          __debugbreak();
      }
      R_SubmitEmissive((GfxViewInfo *)v3);
      R_IssueRenderCommandsEmissive();
    }
  }
  else
  {
    v4 = *(_QWORD *)(v3 + 11696);
    *(_DWORD *)(v3 + 11984) = R_GetFrustumLightWords(*(_DWORD *)(v4 + 1088724));
    *(_DWORD *)(v3 + 11988) = R_VOL_GetFrustumWords(*(_DWORD *)(v4 + 1088732));
    FrustumWords = R_ReflectionProbe_GetFrustumWords(*(_DWORD *)(v4 + 31488));
    _XMM0 = *(unsigned int *)(v3 + 11988);
    *(_DWORD *)(v3 + 11992) = FrustumWords;
    v7 = *(_DWORD *)(v3 + 11984);
    *(float *)(v3 + 7160) = *(float *)(v3 + 11992);
    *(float *)(v3 + 7156) = *(float *)&_XMM0;
    *(_DWORD *)(v3 + 7152) = v7;
    *(_DWORD *)(v3 + 7164) = 0;
    R_ReflectionProbe_AddProbesToDraw();
    if ( ((unsigned __int8)&scene.allowDynamicStreamUpdateIterateSceneModels & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &scene.allowDynamicStreamUpdateIterateSceneModels) )
      __debugbreak();
    _InterlockedExchange(&scene.allowDynamicStreamUpdateIterateSceneModels, 1);
    if ( !scene.sceneModelCountValidWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8475, ASSERT_TYPE_ASSERT, "(scene.sceneModelCountValidWrite)", (const char *)&queryFormat, "scene.sceneModelCountValidWrite") )
      __debugbreak();
    scene.sceneModelCountValidWrite = 0;
    if ( scene.sceneModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8478, ASSERT_TYPE_ASSERT, "(!scene.sceneModelCountValidRead)", (const char *)&queryFormat, "!scene.sceneModelCountValidRead") )
      __debugbreak();
    scene.sceneModelCountValidRead = 1;
    Sys_ProfBeginNamedEvent(0xFF708090, "draw all fx model");
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_QWORD *)&sceneEntCmd.sceneDObjBegin = 0i64;
    *(_QWORD *)&sceneEntCmd.sceneDynBrushBegin = 0i64;
    *(&sceneEntCmd.sceneDynBrushEnd + 1) = 0;
    *(_OWORD *)&sceneEntCmd.sceneBrushBegin = _XMM0;
    sceneEntCmd.viewInfo = (const GfxViewInfo *)v3;
    sceneEntCmd.sortSurfs = 1;
    if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8486, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
      __debugbreak();
    sceneEntCmd.sceneModelBegin = scene.sceneDObjModelCount;
    if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8488, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
      __debugbreak();
    sceneEntCmd.sceneModelEnd = scene.sceneModelCount;
    R_DrawAllSceneEnt(&sceneEntCmd);
    Sys_ProfEndNamedEvent();
    Sys_AddWorkerCmd(WRKCMD_ADD_SCENE_ENT, &sceneEntCmd);
  }
  R_TG_SetupPhase((GfxViewInfo *)v3, frontEndDataOut->smpFrame, *(_DWORD *)cmd);
  Sys_ProfEndNamedEvent();
  if ( *(_DWORD *)cmd != 3 )
  {
    ++*(_DWORD *)cmd;
    Sys_AddWorkerCmd(WRKCMD_GENERATE_DRAWSURFS, cmd);
  }
}

/*
==============
R_GenerateSortedDrawSurfs
==============
*/
void R_GenerateSortedDrawSurfs(LocalClientNum_t localClientNum, const GfxSceneParms *sceneParms, const GfxViewParms *viewParmsDpvs, const GfxViewParmsSet *viewParmsSet, const GfxViewportFeatures *viewportFeatures)
{
  __int64 viewInfoIndex; 
  GfxViewInfo *v10; 
  unsigned int primaryLightCount; 
  const dvar_t *v12; 
  GfxBackEndData *v13; 
  unsigned int i; 
  __int64 v15; 
  GfxViewInfo *v16; 
  float v17; 
  float v18; 
  float v19; 
  GfxViewInfo *v20; 
  float value; 
  float integer; 
  float v25; 
  float v26; 
  float v27; 
  GfxViewInfo *v28; 
  float biasWithoutFovScale; 
  float scaleWithoutFovScale; 
  float bias; 
  GfxBackEndData *v32; 
  FxGlassVisInfo *GlassVisInfo; 
  float v34; 
  float v35; 
  GfxViewportFeatures *v36; 
  float v37; 
  GfxViewInfo *v39; 
  float v40; 
  __int64 v41; 
  const GfxViewParmsSet *v42; 
  char *v43; 
  __int64 v44; 
  __m256i v45; 
  vec4_t v46; 
  unsigned int sceneVolumetricCount; 
  unsigned int v48; 
  __int64 v49; 
  GfxVolumetric *v50; 
  __int64 v51; 
  GfxSceneVolumetric *v52; 
  __int128 v53; 
  LocalClientNum_t *v54; 
  const dvar_t *v55; 
  unsigned __int64 j; 
  unsigned __int64 k; 
  GfxViewportFeatures *v58; 
  const dvar_t *v59; 
  unsigned __int64 m; 
  unsigned __int64 n; 
  int v62; 
  CgDrawSystem *DrawSystem; 
  const dvar_t *v65; 
  ClGameModeApplication *ActiveClientApplication; 
  int v67; 
  __int64 v68; 
  char *v69; 
  __m256i v70; 
  vec4_t v71; 
  char *v72; 
  __m256i v73; 
  vec4_t v74; 
  GfxImage *iesLookupTexture; 
  GfxCmdBufInput *p_input; 
  GfxViewInfo *v77; 
  CgDrawSystem *v78; 
  float v79; 
  __int64 v80; 
  GfxViewInfo *viewInfo; 
  GfxViewportFeatures *v82; 
  LocalClientNum_t v83; 
  vec3_t v84; 
  GfxBackEndData *v85; 
  SceneEntCmd sceneEntCmd; 
  FxSystem *System; 
  LocalClientNum_t v88; 
  __int64 v89[2]; 
  __int64 v90[2]; 
  __int64 v91[2]; 
  __int64 v92[2]; 
  __int64 v93[4]; 
  FxGenerateModelMarksCmd genModelMarksCmd; 
  int data[4]; 
  FxGlassVisInfo *v96; 
  GfxViewInfo *v97; 
  float v98; 
  float v99; 
  int v100; 
  int v101[2]; 
  LocalClientNum_t *v102; 
  char v103; 
  char v104; 
  GfxViewInfo *v105; 
  char v106[384]; 
  GfxBackEndData *v107; 
  FxGenerateGlassVertsCmd genGlassVertsCmd; 
  FxGenerateVertsCmd genVertsCmd; 

  *(_QWORD *)v84.v = sceneParms;
  v82 = (GfxViewportFeatures *)viewportFeatures;
  if ( frontEndDataOut->viewInfoCount != rg.viewInfoCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8879, ASSERT_TYPE_ASSERT, "(frontEndDataOut->viewInfoCount == rg.viewInfoCount)", (const char *)&queryFormat, "frontEndDataOut->viewInfoCount == rg.viewInfoCount") )
    __debugbreak();
  viewInfoIndex = (int)frontEndDataOut->viewInfoIndex;
  if ( (unsigned int)viewInfoIndex >= 6 )
  {
    LODWORD(v80) = frontEndDataOut->viewInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", v80, 6) )
      __debugbreak();
  }
  viewInfo = &frontEndDataOut->viewInfo[viewInfoIndex];
  viewInfo->viewInfoIndex = frontEndDataOut->viewInfoIndex;
  viewInfo->clientIndex = localClientNum;
  viewInfo->viewportFeatures = *viewportFeatures;
  viewInfo->ssrFade = sceneParms->ssrFade;
  viewInfo->ssrSourceSceneViewport = sceneParms->ssrSourceSceneViewport;
  viewInfo->ssrMode = rg.ssrMode;
  viewInfo->ssrWaterTrace = 0;
  Sys_ProfBeginNamedEvent(0xFF404040, "wait next frame data backend setup done");
  if ( !Sys_CheckNextFrameDataBackendSetupDone(NULL) )
    R_WarnOncePerFrame(R_WARN_WAITING_FOR_NEXT_FRAME_BACKEND_SETUP_DONE);
  Sys_ProcessWorkerCmdsWithTimeout(Sys_CheckNextFrameDataBackendSetupDone, NULL);
  Sys_ResetNextFrameDataBackendSetupDone();
  Sys_ProfEndNamedEvent();
  if ( rg.showXModelRanking )
    R_ResetXModelStats();
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8909, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8910, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  v10 = viewInfo;
  primaryLightCount = rgp.world->primaryLightCount;
  frontEndDataOut->sceneLightCount = primaryLightCount;
  if ( primaryLightCount )
    memcpy_0(frontEndDataOut->sceneLights, rgp.world->primaryLights, 152i64 * rgp.world->primaryLightCount);
  v12 = sm_spotDynamics;
  if ( !sm_spotDynamics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = frontEndDataOut;
  if ( !v12->current.enabled )
  {
    for ( i = 0; i < frontEndDataOut->sceneLightCount; v13 = frontEndDataOut )
    {
      v15 = i++;
      v13->sceneLights[v15].needsDynamicShadows = 0;
    }
  }
  v13->localClientNum = sceneParms->localClientNum;
  frontEndDataOut->spotShadowCount = 0;
  frontEndDataOut->spotShadowUpdateCount = 0;
  R_SetupViewInfo(v10, sceneParms, viewParmsSet);
  if ( CL_StreamViews_HasAdditionalViewsSet() )
    R_PerformanceWarning("STREAM", 440.0);
  if ( R_Cinematic_IsStarted() )
    R_PerformanceWarning("BINK", 400.0);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH) && CG_PIP_IsActive(localClientNum) )
    R_PerformanceWarning("PIP", 700.0);
  v16 = viewInfo;
  v17 = viewParmsSet->frames[0].viewParms.camera.zPlanes[3];
  v18 = viewParmsSet->frames[0].viewParms.camera.zPlanes[2];
  v19 = viewParmsSet->frames[0].viewParms.camera.zPlanes[0];
  viewInfo->input.sceneConstants.zPlanes.v[1] = viewParmsSet->frames[0].viewParms.camera.zPlanes[1];
  v16->input.sceneConstants.zPlanes.v[2] = v18;
  v16->input.sceneConstants.zPlanes.v[3] = v17;
  v16->input.sceneConstants.zPlanes.v[0] = v19;
  R_SetupDustConstants(viewInfo);
  R_MDAO_SetupGlobalFrameData(viewInfo, sceneParms->mdaoCullDistance, sceneParms->mdaoFadeoutDistance, sceneParms->mdaoBoneSizeThreshold);
  v20 = viewInfo;
  if ( r_tessellationHeightAuto->current.enabled )
    value = r_tessellationHeightScale->current.value * -0.00390625;
  else
    value = r_tessellationHeightScale->current.value;
  _XMM0 = LODWORD(rg.tessellationFactor);
  __asm { vmaxss  xmm5, xmm0, cs:__real@3727c5ac }
  integer = (float)r_subdomainLimit->current.integer;
  v25 = r_tessellationHybrid->current.value;
  if ( rg.tessellation != 1 )
  {
    v26 = 0.0;
    goto LABEL_39;
  }
  v26 = rg.tessellationCutoffDistance - rg.tessellationCutoffFalloff;
  if ( rg.tessellationCutoffFalloff <= 0.001 )
  {
LABEL_39:
    v27 = 0.0;
    goto LABEL_40;
  }
  v27 = 1.0 / rg.tessellationCutoffFalloff;
LABEL_40:
  viewInfo->input.sceneConstants.tessellationParms.v[1] = r_tessellationLodBias->current.value;
  v20->input.sceneConstants.tessellationParms.v[0] = *(float *)&_XMM5;
  v20->input.sceneConstants.tessellationParms.v[2] = value;
  v20->input.sceneConstants.tessellationParms.v[3] = v25;
  v20->input.sceneConstants.tessellationParms2.v[3] = r_tessellationEyeScale->current.value;
  v20->input.sceneConstants.tessellationParms2.v[0] = integer;
  v20->input.sceneConstants.tessellationParms2.v[1] = v26;
  v20->input.sceneConstants.tessellationParms2.v[2] = v27;
  R_GP_InitFrame(frontEndDataOut, viewInfo);
  R_ST_SetSceneConstants(viewInfo, &viewParmsDpvs->camera.origin);
  R_ST_ClutterSetSceneConstants(viewInfo);
  v28 = viewInfo;
  biasWithoutFovScale = rg.correctedLodParms.clutterRamp.biasWithoutFovScale;
  scaleWithoutFovScale = rg.correctedLodParms.clutterRamp.scaleWithoutFovScale;
  bias = rg.correctedLodParms.ramp.bias;
  viewInfo->input.sceneConstants.lodScaleParams.v[0] = rg.correctedLodParms.ramp.scale;
  v28->input.sceneConstants.lodScaleParams.v[1] = bias;
  v28->input.sceneConstants.lodScaleParams.v[2] = scaleWithoutFovScale;
  v28->input.sceneConstants.lodScaleParams.v[3] = biasWithoutFovScale;
  R_TG_SetupPhase(viewInfo, frontEndDataOut->smpFrame, 5u);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6896, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  R_ReleaseThreadOwnership();
  v32 = frontEndDataOut;
  r_glob.allowAddDrawCall = 1;
  R_ClearDpvsCellVisibility(viewInfo->viewInfoIndex);
  R_SetupWorldSurfacesDpvs(viewParmsDpvs, viewInfo->viewInfoIndex);
  R_SetViewFrustumPlanes(viewInfo, viewInfo->viewInfoIndex);
  R_Umbra_Reset();
  R_DrawViewModelSceneEnt();
  Sys_ProfBeginNamedEvent(0xFF708090, "draw surfs");
  Profile_Begin(57);
  R_AddWorldSurfacesDpvs(viewParmsDpvs, viewInfo);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
  GlassVisInfo = FX_GetGlassVisInfo();
  v34 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  data[0] = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0]);
  v35 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  v96 = GlassVisInfo;
  *(float *)&data[2] = v35;
  *(float *)&data[1] = v34;
  Sys_AddWorkerCmd(WRKCMD_GLASS_PIECE_LIGHT, data);
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    R_SetupSunShadowMaps(v32, viewInfo, &viewParmsDpvs->camera, &v32->sunShadow);
    R_SetShadowConstants(viewInfo, &v32->sunShadow);
    R_SunShadowMaps(viewInfo, &v32->sunShadow);
  }
  if ( fx_umbra_culling->current.enabled )
  {
    v88 = localClientNum;
    System = FX_GetSystem(localClientNum);
    Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_PARTICLE_SPRITE_CAMERA, &System);
    FX_FillGenerateVertsCmd(localClientNum, GFX_CODE_SURFLIST_EMISSIVE, &genVertsCmd);
    Sys_AddWorkerCmd(WRKCMD_GENERATE_FX_VERTS_UMBRA, &genVertsCmd);
  }
  R_SetGlobalLightingConstants(frontEndDataOut, viewInfo);
  R_InitializeDrawLists(viewInfo);
  v36 = v82;
  if ( (*((_DWORD *)v82 + 10) & 0x2000) != 0 )
  {
    CG_DrawMaterial_Update(localClientNum);
    CG_DrawRange_Update(localClientNum);
    Stream_Debug_DrawMetricsUpdate(localClientNum);
    CG_DrawHits_PreWork(localClientNum);
  }
  R_LockGfxImmediateContext();
  if ( frontEndDataOut->bspIndirectArgs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8994, ASSERT_TYPE_ASSERT, "(frontEndDataOut->bspIndirectArgs == nullptr)", (const char *)&queryFormat, "frontEndDataOut->bspIndirectArgs == nullptr") )
    __debugbreak();
  frontEndDataOut->bspIndirectArgs = (GfxIndexedIndirectArgs *)R_BeginWrappedBufferDataWrite(frontEndDataOut->bspIndirectArgsBuffer);
  R_UnlockGfxImmediateContext();
  Sys_AddWorkerCmd(WRKCMD_ADD_BSP, &viewInfo);
  if ( !rg.hideReactiveMotionSModels )
    Sys_AddWorkerCmd(WRKCMD_GENERATE_REACTIVEMOTION, &viewInfo);
  Sys_AddWorkerCmd(WRKCMD_ADD_STATICMODEL_DISPATCH, &viewInfo);
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9024, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  v37 = viewParmsDpvs->camera.origin.v[1];
  v98 = viewParmsDpvs->camera.origin.v[0];
  _XMM0 = LODWORD(viewParmsDpvs->camera.origin.v[2]);
  v97 = viewInfo;
  v100 = _XMM0;
  v99 = v37;
  Sys_AddWorkerCmd(WRKCMD_ADD_SUPER_TERRAIN, &v97);
  if ( (*((_DWORD *)v36 + 10) & 0x2000000) != 0 )
  {
    v39 = viewInfo;
    FX_FillGenerateGlassVertsCmd(&genGlassVertsCmd, viewInfo->input.data);
    v40 = v39->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
    genGlassVertsCmd.viewOrg.v[0] = v39->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
    _XMM0 = LODWORD(v39->viewParmsSet.frames[0].viewParms.camera.origin.v[2]);
    genGlassVertsCmd.viewOrg.v[1] = v40;
    genGlassVertsCmd.viewOrg.v[2] = *(float *)&_XMM0;
    genGlassVertsCmd.lodParms = rg.lodParms;
    Sys_AddWorkerCmd(WRKCMD_GENERATE_GLASS_VERTS, &genGlassVertsCmd);
  }
  v89[0] = (__int64)viewInfo;
  v89[1] = (__int64)frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_ADD_DYNAMIC_LIGHTS, v89);
  v41 = 3i64;
  if ( R_ReflectionProbeRelighting_ShouldUpdate(v36) )
  {
    v42 = viewParmsSet;
    v43 = v106;
    v44 = 3i64;
    do
    {
      v43 += 128;
      v45 = *(__m256i *)v42->frames[0].viewParms.viewMatrix.m.m[0].v;
      v46 = v42->frames[0].viewParms.projectionMatrix.m.m[3];
      v42 = (const GfxViewParmsSet *)((char *)v42 + 128);
      *((__m256i *)v43 - 4) = v45;
      *((__m256i *)v43 - 3) = *(__m256i *)&v42[-1].frames[2].viewParms.camera.axis.row1.z;
      *((__m256i *)v43 - 2) = *(__m256i *)v42[-1].frames[2].viewParms.camera.zPlanes;
      _XMM0 = *(_OWORD *)&v42[-1].frames[2].viewParms.camera.visibilityQueryDistance;
      *((_OWORD *)v43 - 2) = _XMM0;
      *((vec4_t *)v43 - 1) = v46;
      --v44;
    }
    while ( v44 );
    v107 = frontEndDataOut;
    Sys_AddWorkerCmd(WRKCMD_REFLECTION_PROBE_RELIGHTING, v106);
  }
  v90[0] = (__int64)viewInfo;
  v90[1] = (__int64)frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_REFLECTION_PROBE_BUFFER, v90);
  if ( (*((_DWORD *)v36 + 10) & 0x100) != 0 )
    R_DecalVolumeAddCommand(viewInfo, frontEndDataOut);
  sceneVolumetricCount = scene.sceneVolumetricCount;
  v48 = 0;
  v49 = 0i64;
  if ( scene.sceneVolumetricCount )
  {
    while ( v48 < 0x80 )
    {
      if ( scene.sceneVolumetricVisData[v49] == 1 )
      {
        v50 = &frontEndDataOut->sceneVolumetrics[v48];
        v51 = 2i64;
        v52 = &scene.sceneVolumetrics[(unsigned int)v49];
        do
        {
          v50 = (GfxVolumetric *)((char *)v50 + 128);
          v53 = *(_OWORD *)&v52->volumetric.livePath;
          v52 = (GfxSceneVolumetric *)((char *)v52 + 128);
          *(_OWORD *)v50[-1].masks[0].scroll.v = v53;
          *(_OWORD *)&v50[-1].masks[1].image = *(_OWORD *)&v52[-1].volumetric.masks[1].image;
          *(_OWORD *)v50[-1].masks[1].offset.v = *(_OWORD *)v52[-1].volumetric.masks[1].offset.v;
          *(_OWORD *)&v50[-1].masks[2].type = *(_OWORD *)&v52[-1].volumetric.masks[2].type;
          *(_OWORD *)v50[-1].masks[2].scale.v = *(_OWORD *)v52[-1].volumetric.masks[2].scale.v;
          *(_OWORD *)v50[-1].masks[2].scroll.v = *(_OWORD *)v52[-1].volumetric.masks[2].scroll.v;
          _XMM0 = *(_OWORD *)&v52[-1].volumetric.masks[3].image;
          *(_OWORD *)&v50[-1].masks[3].image = _XMM0;
          *(_OWORD *)v50[-1].masks[3].offset.v = *(_OWORD *)v52[-1].volumetric.masks[3].offset.v;
          --v51;
        }
        while ( v51 );
        ++v48;
        v50->livePath = v52->volumetric.livePath;
        sceneVolumetricCount = scene.sceneVolumetricCount;
      }
      v49 = (unsigned int)(v49 + 1);
      if ( (unsigned int)v49 >= sceneVolumetricCount )
        goto LABEL_74;
    }
    R_WarnOncePerFrame(R_WARN_VOLUMETRIC_VOLUME_LIMIT);
  }
LABEL_74:
  frontEndDataOut->sceneVolumetricCount = v48;
  v85 = frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_VOLUMETRICS_BUFFER, &v85);
  v54 = *(LocalClientNum_t **)v84.v;
  if ( *(_BYTE *)(*(_QWORD *)v84.v + 21i64) )
  {
    R_WaitForCellStatic();
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_BSP);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_DISPATCH);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_LODCALC);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL);
    Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_SMODEL_COLLECTIONS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_SUPER_TERRAIN);
  }
  v93[0] = (__int64)viewInfo;
  v93[1] = (__int64)frontEndDataOut;
  v93[2] = (__int64)viewParmsDpvs;
  Sys_AddWorkerCmd(WRKCMD_ADD_SPOT_SHADOWS, v93);
  v91[0] = (__int64)viewInfo;
  v91[1] = (__int64)frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_FINALIZE_LIGHTING, v91);
  v92[0] = (__int64)viewInfo;
  v92[1] = (__int64)frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_FRUSTUM_LIGHT_BUFFER, v92);
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    Sys_AddWorkerCmd(WRKCMD_ADD_BSP_SUNSHADOW, &viewInfo);
    Sys_AddWorkerCmd(WRKCMD_ADD_STATICMODEL_SUNSHADOW, &viewInfo);
    Sys_AddWorkerCmd(WRKCMD_ADD_SUPER_TERRAIN_SUNSHADOW, &viewInfo);
  }
  v83 = localClientNum;
  Sys_AddWorkerCmd(WRKCMD_R_CG_UPDATE_UMBRA_CMD, &v83);
  LUI_CoD_UpdateFrame(localClientNum);
  R_RTT_CopyContext(localClientNum, &frontEndDataOut->rttContext);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8070, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v55 = DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType;
  if ( !DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_frontendWaitWorkerCmdsOnlyOfType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  if ( v55->current.enabled )
  {
    for ( j = 0i64; j < 0x14; j += 4i64 )
      Sys_WaitWorkerCmdsOnlyOfType(*(WorkerCmdType *)((char *)&unk_144437A98 + j));
  }
  else
  {
    for ( k = 0i64; k < 0x14; k += 4i64 )
      Sys_WaitWorkerCmdsOfType(*(WorkerCmdType *)((char *)&unk_144437A98 + k));
  }
  v58 = v82;
  Sys_ProfBeginNamedEvent(0xFF708090, "draw all dyn ent");
  R_DrawAllDynEnt(localClientNum, viewInfo);
  Sys_ProfEndNamedEvent();
  R_AddSpotShadowDynEnts(viewInfo->clientIndex);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8070, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v59 = DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType;
  if ( !DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_frontendWaitWorkerCmdsOnlyOfType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  if ( v59->current.enabled )
  {
    for ( m = 0i64; m < 0x1C; m += 4i64 )
      Sys_WaitWorkerCmdsOnlyOfType(*(WorkerCmdType *)((char *)&unk_144437AB0 + m));
    v58 = v82;
  }
  else
  {
    for ( n = 0i64; n < 0x1C; n += 4i64 )
      Sys_WaitWorkerCmdsOfType(*(WorkerCmdType *)((char *)&unk_144437AB0 + n));
    v54 = *(LocalClientNum_t **)v84.v;
  }
  v62 = *((_DWORD *)v58 + 10);
  if ( (v62 & 0x200) != 0 )
  {
    DrawSystem = CgDrawSystem::GetDrawSystem(localClientNum);
    DrawSystem->PreDraw2D(DrawSystem);
    v62 = *((_DWORD *)v58 + 10);
  }
  if ( (v62 & 0x400) != 0 )
    Com_CSpline_DebugRender(localClientNum);
  Sys_ProfBeginNamedEvent(0xFF708090, "draw all scene ent");
  *(_QWORD *)&sceneEntCmd.sortSurfs = 0i64;
  sceneEntCmd.sceneModelBegin = 0;
  sceneEntCmd.sceneBrushBegin = 0;
  *(&sceneEntCmd.sceneDynBrushEnd + 1) = 0;
  sceneEntCmd.viewInfo = viewInfo;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  sceneEntCmd.sceneDObjEnd = scene.sceneDObjCount;
  *(_OWORD *)&sceneEntCmd.sceneDynModelBegin = _XMM0;
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9235, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  sceneEntCmd.sceneModelEnd = scene.sceneDObjModelCount;
  sceneEntCmd.sceneBrushEnd = scene.sceneBrushCount;
  R_DrawAllSceneEnt(&sceneEntCmd);
  Sys_ProfEndNamedEvent();
  v65 = DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType;
  if ( !DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_frontendWaitWorkerCmdsOnlyOfType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  if ( v65->current.enabled )
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_ADD_SCENE_ENT);
  else
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_SCENE_ENT);
  Sys_AddWorkerCmd(WRKCMD_ADD_SCENE_ENT, &sceneEntCmd);
  if ( (*((_DWORD *)v58 + 10) & 0x800) != 0 && ClGameModeApplication::HasActiveApplicationGameMode() )
  {
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    ActiveClientApplication->RenderSceneCallback(ActiveClientApplication, localClientNum);
  }
  R_WaitForCellStatic();
  v67 = *((_DWORD *)v58 + 10);
  if ( (v67 & 0x1000000) != 0 )
  {
    FX_FillGenerateModelMarksCmd(*v54, &genModelMarksCmd);
    genModelMarksCmd.sceneDrawData.smodelVisLods = rgp.world->dpvs.smodelVisData[0];
    genModelMarksCmd.sceneDrawData.dObjVisData = scene.sceneDObjVisData[0];
    genModelMarksCmd.sceneDrawData.brushVisData = scene.sceneBrushVisData[0];
    genModelMarksCmd.sceneDrawData.modelVisData = scene.sceneModelVisData[0];
    genModelMarksCmd.sceneDrawData.dpvsLocalClientNum = scene.dpvs.localClientNum;
    genModelMarksCmd.sceneDrawData.smodelCount = rgp.world->smodels.collectionCount;
    genModelMarksCmd.sceneDrawData.entnumOrdinaryEnd = truncate_cast<unsigned short,unsigned int>(gfxCfg.entnumOrdinaryEnd);
    genModelMarksCmd.sceneDrawData.dObjCount = scene.sceneDObjCount;
    genModelMarksCmd.sceneDrawData.brushCount = scene.sceneBrushCount;
    genModelMarksCmd.sceneDrawData.modelCount = scene.sceneDObjModelCount;
    genModelMarksCmd.sceneDrawData.dObjViewmodelIndex = scene.sceneDObjMarkableViewmodelIndex;
    if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6856, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
      __debugbreak();
    Sys_AddWorkerCmd(WRKCMD_GENERATE_DYN_MARK_VERTS, &genModelMarksCmd);
    v67 = *((_DWORD *)v58 + 10);
  }
  if ( (v67 & 0x2000000) != 0 )
  {
    LODWORD(v82) = viewInfo->clientIndex;
    Sys_AddWorkerCmd(WRKCMD_GENERATE_GLASS_MARK_VERTS, &v82);
    v67 = *((_DWORD *)v58 + 10);
  }
  if ( (v67 & 0x100) != 0 )
    R_DecalVolumeFinalizeMarks(frontEndDataOut);
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9289, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v68 = 3i64;
  frontEndDataOut->beginReady = 1;
  v69 = &v103;
  v101[0] = 0;
  v101[1] = localClientNum;
  v102 = v54;
  do
  {
    v69 += 128;
    v70 = *(__m256i *)viewParmsDpvs->viewMatrix.m.m[0].v;
    v71 = viewParmsDpvs->projectionMatrix.m.m[3];
    viewParmsDpvs = (const GfxViewParms *)((char *)viewParmsDpvs + 128);
    *((__m256i *)v69 - 4) = v70;
    *((__m256i *)v69 - 3) = *(__m256i *)&viewParmsDpvs[-1].camera.axis.row1.z;
    *((__m256i *)v69 - 2) = *(__m256i *)viewParmsDpvs[-1].camera.zPlanes;
    *((_OWORD *)v69 - 2) = *(_OWORD *)&viewParmsDpvs[-1].camera.visibilityQueryDistance;
    *((vec4_t *)v69 - 1) = v71;
    --v68;
  }
  while ( v68 );
  v72 = &v104;
  do
  {
    v72 += 128;
    v73 = *(__m256i *)viewParmsSet->frames[0].viewParms.viewMatrix.m.m[0].v;
    v74 = viewParmsSet->frames[0].viewParms.projectionMatrix.m.m[3];
    viewParmsSet = (const GfxViewParmsSet *)((char *)viewParmsSet + 128);
    *((__m256i *)v72 - 4) = v73;
    *((__m256i *)v72 - 3) = *(__m256i *)&viewParmsSet[-1].frames[2].viewParms.camera.axis.row1.z;
    *((__m256i *)v72 - 2) = *(__m256i *)viewParmsSet[-1].frames[2].viewParms.camera.zPlanes;
    *((_OWORD *)v72 - 2) = *(_OWORD *)&viewParmsSet[-1].frames[2].viewParms.camera.visibilityQueryDistance;
    *((vec4_t *)v72 - 1) = v74;
    --v41;
  }
  while ( v41 );
  v105 = viewInfo;
  Stream_UpdateForClient(viewInfo);
  iesLookupTexture = g_worldDraw->iesLookupTexture;
  p_input = &viewInfo->input;
  if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[37] = iesLookupTexture;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_DRAWSURFS, v101);
  if ( rg.showXModelRanking )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_SCENE_ENT);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_DISPATCH);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_LODCALC);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL);
    Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_SMODEL_COLLECTIONS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_GENERATE_DRAWSURFS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_SCENE_ENT);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_DISPATCH);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_LODCALC);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL);
    Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_SMODEL_COLLECTIONS);
    R_SortAndPublishXModelStats();
  }
  if ( scene.updateSound )
  {
    scene.updateSound = 0;
    if ( SND_ExistsPendingRestore() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9339, ASSERT_TYPE_ASSERT, "(!SND_ExistsPendingRestore())", (const char *)&queryFormat, "!SND_ExistsPendingRestore()") )
      __debugbreak();
    CL_Main_UpdateSound(1);
  }
  if ( CG_DrawHits_IsActiveForAnyType(localClientNum) )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_SCENE_ENT);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_DISPATCH);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_LODCALC);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL);
    Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_SMODEL_COLLECTIONS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_SMODEL_COLLECTIONS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_GENERATE_DRAWSURFS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_SCENE_ENT);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_DISPATCH);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_LODCALC);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL);
    Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_SMODEL_COLLECTIONS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_SMODEL_COLLECTIONS);
    CG_DrawHits_PostWork(localClientNum);
  }
  v77 = viewInfo;
  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x800000) == 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFD700, "draw 2D");
    Profile_Begin(480);
    v78 = CgDrawSystem::GetDrawSystem(localClientNum);
    CG_HudLighting_DrawBegin(localClientNum, &v77->viewParmsSet.frames[0].viewParms.camera.origin, &v77->viewParmsSet.frames[0].viewParms.camera.axis);
    v78->Draw2D(v78, &v77->viewParmsSet.frames[0].viewParms.camera.origin, &v77->viewParmsSet.frames[0].viewParms.camera.axis);
    CG_HudLighting_DrawEnd();
    Profile_EndInternal(NULL);
    Sys_ProfEndNamedEvent();
    R_IssueRenderCommandsHud2D();
  }
  Sys_WaitFrontendWorkerCmds();
  Com_ClientDObjClearSubmitted(localClientNum);
  R_LGV_KickOffPacking(frontEndDataOut);
  v79 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  *(_QWORD *)v84.v = *(_QWORD *)viewInfo->viewParms.camera.origin.v;
  v84.v[2] = v79;
  R_LGV_DrawVolumes(&v84);
  R_PerformanceWarningsForView(viewInfo);
  if ( (*((_DWORD *)v58 + 10) & 0x1000) != 0 )
    R_ShowCull();
}

/*
==============
R_GenerateSortedSunShadowCacheSurfs
==============
*/
void R_GenerateSortedSunShadowCacheSurfs(GfxViewInfo *viewInfo, R_RT_Group *rtGroup, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES sunShadowCacheBeforeState)
{
  R_RT_DepthHandle *v5; 
  unsigned int firstCachedSunShadowPartition; 
  GfxSunShadow *p_sunShadow; 
  char *v10; 
  unsigned int v11; 
  GfxSunShadow *v12; 
  R_RT_DepthHandle v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  char *v17; 
  unsigned int i; 

  v5 = sunshadowCacheRt;
  if ( r_sunshadowmap_cmdbuf_worker->current.enabled )
  {
    if ( viewInfo->useCachedSunShadow )
    {
      firstCachedSunShadowPartition = frontEndDataOut->sunShadow.firstCachedSunShadowPartition;
      for ( i = frontEndDataOut->sunShadow.lastCachedSunShadowPartition; firstCachedSunShadowPartition <= i; ++firstCachedSunShadowPartition )
      {
        p_sunShadow = &frontEndDataOut->sunShadow;
        if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(p_sunShadow, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        v10 = (char *)p_sunShadow + 8656 * (firstCachedSunShadowPartition - p_sunShadow->firstCachedSunShadowPartition);
        v11 = *((_DWORD *)v10 + 621);
        v12 = &frontEndDataOut->sunShadow;
        if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(v12, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        v13 = *v5;
        v14 = firstCachedSunShadowPartition - v12->firstCachedSunShadowPartition;
        v15 = 0;
        viewInfo->sunshadowCacheRt = v13;
        v16 = 10 * v14 + 45;
        viewInfo->sunShadowCacheBeforeState = sunShadowCacheBeforeState;
        if ( v11 )
        {
          v17 = v10 + 2528;
          do
          {
            if ( *(v17 - 4) || *(_QWORD *)v17 || v17[8] )
              R_AddDrawCall(viewInfo, rtGroup, (GfxDrawListType)(v15 + v16), 0x5Du);
            ++v15;
            v17 += 864;
          }
          while ( v15 < v11 );
        }
        v5 = sunshadowCacheRt;
      }
    }
  }
}

/*
==============
R_GetBrushModel
==============
*/
GfxBrushModel *R_GetBrushModel(unsigned int modelIndex)
{
  __int64 v1; 
  __int64 v3; 
  int modelCount; 

  v1 = modelIndex;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 892, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( (unsigned int)v1 >= rgp.world->modelCount )
  {
    modelCount = rgp.world->modelCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 893, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( rgp.world->modelCount )", "modelIndex doesn't index rgp.world->modelCount\n\t%i not in [0, %i)", v3, modelCount) )
      __debugbreak();
  }
  return &rgp.world->models[v1];
}

/*
==============
R_GetDefaultRenderMemMode
==============
*/
__int64 R_GetDefaultRenderMemMode()
{
  XB3ConsoleType XB3ConsoleType; 
  unsigned int v1; 

  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v1 = 0;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    return 2;
  return v1;
}

/*
==============
R_GetGlobalPostAAMode
==============
*/
__int64 R_GetGlobalPostAAMode()
{
  return (unsigned int)rg.postAAMode;
}

/*
==============
R_GetNextViewInfoIndex
==============
*/
void R_GetNextViewInfoIndex(int *viewInfoIndex)
{
  unsigned int v2; 
  __int64 v3; 

  if ( !viewInfoIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5290, ASSERT_TYPE_ASSERT, "(viewInfoIndex)", (const char *)&queryFormat, "viewInfoIndex") )
    __debugbreak();
  *viewInfoIndex = rg.viewInfoCount++;
  frontEndDataOut->viewInfoCount = rg.viewInfoCount;
  if ( (unsigned int)*viewInfoIndex >= 2 )
  {
    LODWORD(v3) = *viewInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5296, ASSERT_TYPE_SANITY, "(unsigned)( *viewInfoIndex ) < (unsigned)( 2 )", "*viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWS\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
  }
  v2 = *viewInfoIndex;
  frontEndDataOut->viewInfoIndex = *viewInfoIndex;
  if ( v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5299, ASSERT_TYPE_ASSERT, "(frontEndDataOut->viewInfoIndex < 2)", (const char *)&queryFormat, "frontEndDataOut->viewInfoIndex < GFX_MAX_CLIENT_VIEWS") )
    __debugbreak();
}

/*
==============
R_GetResolvedSceneRt
==============
*/
R_RT_ColorHandle *R_GetResolvedSceneRt(R_RT_ColorHandle *result, LocalClientNum_t clientIndex, unsigned int sceneWidth, unsigned int sceneHeight, bool teleported, int *needsClear)
{
  char v9; 
  GfxRenderTargetId v11; 
  unsigned int v12; 
  unsigned int v13; 
  __m256i v14; 
  unsigned __int16 m_surfaceID; 
  bool v17; 
  __int16 v18; 
  R_RT_Handle v20; 
  R_RT_ColorHandle resulta; 
  R_RT_Handle v22; 

  v9 = clientIndex;
  if ( (unsigned int)clientIndex >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5654, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index 2\n\t%i not in [0, %i)", clientIndex, 2) )
    __debugbreak();
  v11 = v9 + 6;
  v12 = sceneWidth >> 1;
  v13 = sceneHeight >> 1;
  if ( R_RT_HaveGlobal(v11) )
  {
    *result = *R_RT_GetGlobalColor(&resulta, v11);
    if ( R_RT_Handle::GetSurface(result)->m_image.m_base.width == v12 && R_RT_Handle::GetSurface(result)->m_image.m_base.height == v13 && R_RT_Handle::GetSurface(result)->m_image.m_base.levelCount == 4 )
    {
      *needsClear = teleported;
      return result;
    }
    R_SyncRenderThread();
    v20 = result->R_RT_Handle;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v20);
      if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      resulta = (R_RT_ColorHandle)v20;
      R_RT_DestroyInternal(&resulta);
    }
    else if ( v20.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
  }
  v14 = *(__m256i *)R_RT_CreateInternal(&v22, v12, v13, v12, v13, 1u, 1u, 4u, g_R_RT_renderTargetFmts[3], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Resolved Scene", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5681)");
  m_surfaceID = _XMM0;
  resulta = (R_RT_ColorHandle)v14;
  v20 = (R_RT_Handle)v14;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v20);
    if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      m_surfaceID = v20.m_surfaceID;
      v14 = (__m256i)v20;
      __debugbreak();
    }
    else
    {
      m_surfaceID = v20.m_surfaceID;
      v14 = (__m256i)v20;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v14 = (__m256i)resulta;
      if ( v17 )
        __debugbreak();
    }
  }
  *(__m256i *)result = v14;
  v18 = m_surfaceID & 0x7FFF;
  if ( v18 )
    resulta.m_surfaceID = v18 | 0x8000;
  else
    resulta.m_surfaceID = 0;
  resulta.m_tracking = v20.m_tracking;
  g_R_RT_globals[(unsigned __int8)v11] = (R_RT_Handle)resulta;
  *needsClear = 1;
  return result;
}

/*
==============
R_GetSceneGlass
==============
*/
GfxSceneGlass *R_GetSceneGlass(int pieceIndex)
{
  __int64 v1; 
  unsigned int sceneGlassCount; 

  v1 = pieceIndex;
  if ( pieceIndex >= scene.sceneGlassCount )
  {
    sceneGlassCount = scene.sceneGlassCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5155, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( scene.sceneGlassCount )", "pieceIndex doesn't index scene.sceneGlassCount\n\t%i not in [0, %i)", pieceIndex, sceneGlassCount) )
      __debugbreak();
  }
  return &scene.sceneGlass[v1];
}

/*
==============
R_GetSceneLODScale
==============
*/
float R_GetSceneLODScale(const RenderMemMode memMode)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v6; 
  __int32 v7; 
  float v8; 
  double v9; 

  if ( memMode )
  {
    v3 = memMode - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          *(double *)&_XMM7 = DOUBLE_0_6695130130381122;
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11422, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown LODScalePlatform") )
            __debugbreak();
          __asm { vxorpd  xmm7, xmm7, xmm7 }
        }
      }
      else
      {
        *(double *)&_XMM7 = DOUBLE_0_7866512786305011;
      }
    }
    else
    {
      *(double *)&_XMM7 = DOUBLE_0_5372996132811371;
    }
  }
  else
  {
    *(double *)&_XMM7 = DOUBLE_0_4689085283770711;
  }
  if ( memMode )
  {
    v6 = memMode - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 || v7 == 1 )
      {
        v8 = FLOAT_0_93000001;
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11458, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown LODScalePlatform") )
          __debugbreak();
        v8 = 0.0;
      }
    }
    else
    {
      v8 = FLOAT_1_0;
    }
  }
  else
  {
    v8 = FLOAT_1_58;
  }
  v9 = atan_0(0.6370702690325544);
  _XMM1 = COERCE_UNSIGNED_INT64(sin_0(v9) / *(double *)&_XMM7);
  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
  return *(float *)&_XMM2 * v8;
}

/*
==============
R_GetSceneSubPixelOffset
==============
*/
void R_GetSceneSubPixelOffset(const refdef_t *refdef, const GfxViewportFeatures *viewportFeatures, vec2_t *outOffset, float *cameraMotion)
{
  const dvar_t *v8; 
  float value; 
  float v10; 
  float height; 
  __int64 width; 
  float v13; 
  float v14; 
  float v15; 
  GfxResolutionStep step; 
  PostAAMode m_postAAMode; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  unsigned int frameCount; 
  SMAATemporalUpsampleMode SMAATemporalUpsampleMode; 
  __int32 v24; 
  __int64 v25; 
  __int64 v26; 
  vec2_t v27; 
  __int64 v28; 
  float v29; 
  double v30; 
  float v31; 
  GfxViewport outSceneViewport; 
  GfxViewport v33; 
  vec2_t scale; 
  __int128 v35; 
  __int128 v36; 

  if ( R_Screenshot_InterleavedMode() )
  {
    R_DisplayToSceneViewport(&outSceneViewport, &refdef->displayViewport, refdef->resolution.step);
    v8 = r_screenShotPixelOffset;
    value = r_screenShotPixelOffset->current.value;
    outOffset->v[0] = value;
    v10 = v8->current.vector.v[1];
    height = (float)outSceneViewport.height;
    width = outSceneViewport.width;
    outOffset->v[1] = v10;
    v13 = (float)(v10 / height) * 2.0;
    v14 = (float)width;
    v15 = (float)(value / v14) * 2.0;
  }
  else if ( R_PostAAHasTemporalSupersampling(viewportFeatures->m_postAAMode) )
  {
    R_DisplayToSceneViewport(&v33, &refdef->displayViewport, refdef->resolution.step);
    step = refdef->resolution.step;
    m_postAAMode = viewportFeatures->m_postAAMode;
    v18 = (float)v33.width;
    v19 = 2.0 / v18;
    v20 = (float)v33.height;
    v21 = 2.0 / v20;
    frameCount = frontEndDataOut->frameCount;
    scale.v[0] = v19;
    scale.v[1] = 2.0 / v20;
    v35 = _xmm_be8000003e8000003e800000be800000;
    v36 = _xmm;
    SMAATemporalUpsampleMode = R_GetSMAATemporalUpsampleMode(m_postAAMode, step);
    if ( SMAATemporalUpsampleMode )
    {
      v24 = SMAATemporalUpsampleMode - 1;
      if ( v24 )
      {
        if ( v24 == 1 )
        {
          v25 = frameCount & 1;
          outOffset->v[0] = *((float *)&v35 + 2 * v25);
          outOffset->v[1] = *((float *)&v35 + 2 * v25 + 1);
        }
      }
      else
      {
        v26 = frameCount & 1;
        outOffset->v[0] = *((float *)&v36 + 2 * v26);
        outOffset->v[1] = *((float *)&v36 + 2 * v26 + 1);
      }
    }
    else
    {
      v27 = scale;
      v28 = frameCount & 1;
      outOffset->v[0] = *((float *)&v35 + 2 * v28);
      outOffset->v[1] = *((float *)&v35 + 2 * v28 + 1);
      DynamicSubsamplePattern(refdef, viewportFeatures, v27, frameCount, outOffset, cameraMotion);
      if ( r_smaaQuincunx->current.enabled )
      {
        v29 = outOffset->v[1];
        outOffset->v[0] = outOffset->v[0] + 0.25;
        outOffset->v[1] = v29 - 0.25;
      }
    }
    v30 = RB_UsingAAWithBlurScale(refdef->blurRadius, r_blur->current.value);
    v31 = *(float *)&v30 * outOffset->v[0];
    v13 = (float)(*(float *)&v30 * outOffset->v[1]) * v21;
    v15 = v31 * v19;
    outOffset->v[0] = v31;
  }
  else
  {
    v13 = 0.0;
    v15 = 0.0;
  }
  outOffset->v[0] = v15;
  outOffset->v[1] = v13;
}

/*
==============
R_GetSceneWeaponScope
==============
*/
GfxScopeInfo *R_GetSceneWeaponScope()
{
  return &scene.scope;
}

/*
==============
R_Get_IsPipClientView
==============
*/
__int64 R_Get_IsPipClientView()
{
  return (unsigned int)frontEndDataOut->isPIPClientView;
}

/*
==============
R_HudOutlineApplyToRefdef
==============
*/
void R_HudOutlineApplyToRefdef(refdef_t *refdef, const GfxScopeHudOutlineInfo *outlineInfo)
{
  float v4; 
  const dvar_t *v5; 
  float v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  float value; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 

  if ( outlineInfo->friendColor.v[3] == 0.0 )
  {
    v5 = DVARVEC4_r_hudOutlineColorInScope;
    if ( !DVARVEC4_r_hudOutlineColorInScope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineColorInScope") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    LODWORD(refdef->hudOutline.scopeFriendColor.v[0]) = v5->current.integer;
    refdef->hudOutline.scopeFriendColor.v[1] = v5->current.vector.v[1];
    refdef->hudOutline.scopeFriendColor.v[2] = v5->current.vector.v[2];
    v4 = v5->current.vector.v[3];
  }
  else
  {
    *(_QWORD *)refdef->hudOutline.scopeFriendColor.v = *(_QWORD *)outlineInfo->friendColor.v;
    refdef->hudOutline.scopeFriendColor.v[2] = outlineInfo->friendColor.v[2];
    v4 = outlineInfo->friendColor.v[3];
  }
  refdef->hudOutline.scopeFriendColor.v[3] = v4;
  if ( outlineInfo->foeColor.v[3] == 0.0 )
  {
    v7 = DVARVEC4_r_hudOutlineColorInScopeFoe;
    if ( !DVARVEC4_r_hudOutlineColorInScopeFoe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineColorInScopeFoe") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    LODWORD(refdef->hudOutline.scopeFoeColor.v[0]) = v7->current.integer;
    refdef->hudOutline.scopeFoeColor.v[1] = v7->current.vector.v[1];
    refdef->hudOutline.scopeFoeColor.v[2] = v7->current.vector.v[2];
    v6 = v7->current.vector.v[3];
  }
  else
  {
    refdef->hudOutline.scopeFoeColor.v[0] = outlineInfo->foeColor.v[0];
    refdef->hudOutline.scopeFoeColor.v[1] = outlineInfo->foeColor.v[1];
    refdef->hudOutline.scopeFoeColor.v[2] = outlineInfo->foeColor.v[2];
    v6 = outlineInfo->foeColor.v[3];
  }
  refdef->hudOutline.scopeFoeColor.v[3] = v6;
  v8 = DVARBOOL_r_hudOutlineEnable;
  if ( !DVARBOOL_r_hudOutlineEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  refdef->hudOutline.enable = v8->current.enabled;
  v9 = DVARFLT_r_hudOutlineWidth;
  if ( !DVARFLT_r_hudOutlineWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  LODWORD(refdef->hudOutline.width) = v9->current.integer;
  refdef->hudOutline.depthTestInScope = outlineInfo->depthTest;
  refdef->hudOutline.fillInScope = outlineInfo->fill;
  v10 = DVARFLT_r_hudOutlineOccludedColorFromFill;
  if ( !DVARFLT_r_hudOutlineOccludedColorFromFill && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineOccludedColorFromFill") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  LODWORD(refdef->hudOutline.occludedColorFromFill) = v10->current.integer;
  v11 = DVARVEC4_r_hudOutlineFillColor0;
  if ( !DVARVEC4_r_hudOutlineFillColor0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineFillColor0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  LODWORD(refdef->hudOutline.fillColor0.v[0]) = v11->current.integer;
  refdef->hudOutline.fillColor0.v[1] = v11->current.vector.v[1];
  refdef->hudOutline.fillColor0.v[2] = v11->current.vector.v[2];
  refdef->hudOutline.fillColor0.v[3] = v11->current.vector.v[3];
  v12 = DVARVEC4_r_hudOutlineFillColor1;
  if ( !DVARVEC4_r_hudOutlineFillColor1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineFillColor1") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  LODWORD(refdef->hudOutline.fillColor1.v[0]) = v12->current.integer;
  refdef->hudOutline.fillColor1.v[1] = v12->current.vector.v[1];
  refdef->hudOutline.fillColor1.v[2] = v12->current.vector.v[2];
  refdef->hudOutline.fillColor1.v[3] = v12->current.vector.v[3];
  v13 = DVARVEC4_r_hudOutlineOccludedOutlineColor;
  if ( !DVARVEC4_r_hudOutlineOccludedOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineOccludedOutlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  LODWORD(refdef->hudOutline.occludedOutlineColor.v[0]) = v13->current.integer;
  refdef->hudOutline.occludedOutlineColor.v[1] = v13->current.vector.v[1];
  refdef->hudOutline.occludedOutlineColor.v[2] = v13->current.vector.v[2];
  refdef->hudOutline.occludedOutlineColor.v[3] = v13->current.vector.v[3];
  v14 = DVARVEC4_r_hudOutlineOccludedInlineColor;
  if ( !DVARVEC4_r_hudOutlineOccludedInlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineOccludedInlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  LODWORD(refdef->hudOutline.occludedInlineColor.v[0]) = v14->current.integer;
  refdef->hudOutline.occludedInlineColor.v[1] = v14->current.vector.v[1];
  refdef->hudOutline.occludedInlineColor.v[2] = v14->current.vector.v[2];
  refdef->hudOutline.occludedInlineColor.v[3] = v14->current.vector.v[3];
  v15 = DVARVEC4_r_hudOutlineOccludedInteriorColor;
  if ( !DVARVEC4_r_hudOutlineOccludedInteriorColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineOccludedInteriorColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  LODWORD(refdef->hudOutline.occludedInteriorColor.v[0]) = v15->current.integer;
  refdef->hudOutline.occludedInteriorColor.v[1] = v15->current.vector.v[1];
  refdef->hudOutline.occludedInteriorColor.v[2] = v15->current.vector.v[2];
  refdef->hudOutline.occludedInteriorColor.v[3] = v15->current.vector.v[3];
  v16 = DVARFLT_r_shimmerEffectTimeOff;
  if ( !DVARFLT_r_shimmerEffectTimeOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectTimeOff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  value = v16->current.value;
  v18 = DVARFLT_r_shimmerEffectTimeOn;
  if ( !DVARFLT_r_shimmerEffectTimeOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectTimeOn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = v18->current.value;
  v20 = 1.0 / (float)(value + v19);
  refdef->hudOutline.shimmerTextureProperties.v[0] = value + v19;
  refdef->hudOutline.shimmerTextureProperties.v[1] = v20 * value;
  refdef->hudOutline.shimmerTextureProperties.v[2] = v20 * v19;
  v21 = DVARFLT_r_shimmerEffectFarDistance;
  if ( !DVARFLT_r_shimmerEffectFarDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectFarDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  LODWORD(refdef->hudOutline.shimmerTextureProperties.v[3]) = v21->current.integer;
  v22 = DVARFLT_r_shimmerEffectInteriorFillIntensityNear;
  if ( !DVARFLT_r_shimmerEffectInteriorFillIntensityNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectInteriorFillIntensityNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  LODWORD(refdef->hudOutline.shimmerTextureProperties1.v[0]) = v22->current.integer;
  v23 = DVARFLT_r_shimmerEffectInteriorFillIntensityFar;
  if ( !DVARFLT_r_shimmerEffectInteriorFillIntensityFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectInteriorFillIntensityFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  LODWORD(refdef->hudOutline.shimmerTextureProperties1.v[1]) = v23->current.integer;
  v24 = DVARFLT_r_shimmerEffectColorAnimIntensity;
  if ( !DVARFLT_r_shimmerEffectColorAnimIntensity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectColorAnimIntensity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  *(_QWORD *)&refdef->hudOutline.shimmerTextureProperties1.xyz.z = v24->current.unsignedInt;
  v25 = DVARFLT_r_shimmerEffectInteriorLineStrength;
  if ( !DVARFLT_r_shimmerEffectInteriorLineStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectInteriorLineStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  LODWORD(refdef->hudOutline.shimmerTextureProperties2.v[0]) = v25->current.integer;
  v26 = DVARFLT_r_shimmerEffectExteriorLineStrength;
  if ( !DVARFLT_r_shimmerEffectExteriorLineStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectExteriorLineStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  LODWORD(refdef->hudOutline.shimmerTextureProperties2.v[1]) = v26->current.integer;
  *(_QWORD *)&refdef->hudOutline.shimmerTextureProperties2.xyz.z = 0i64;
  v27 = DVARFLT_r_snapshotEffectAlphaIntensity;
  if ( !DVARFLT_r_snapshotEffectAlphaIntensity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_snapshotEffectAlphaIntensity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  LODWORD(refdef->hudOutline.snapshotEffectProperties.v[0]) = v27->current.integer;
  refdef->hudOutline.scopeWidth = outlineInfo->width;
  refdef->hudOutline.scopeFillColor0.v[0] = outlineInfo->fillColor0.v[0];
  refdef->hudOutline.scopeFillColor0.v[1] = outlineInfo->fillColor0.v[1];
  refdef->hudOutline.scopeFillColor0.v[2] = outlineInfo->fillColor0.v[2];
  refdef->hudOutline.scopeFillColor0.v[3] = outlineInfo->fillColor0.v[3];
  refdef->hudOutline.scopeFillColor1.v[0] = outlineInfo->fillColor1.v[0];
  refdef->hudOutline.scopeFillColor1.v[1] = outlineInfo->fillColor1.v[1];
  refdef->hudOutline.scopeFillColor1.v[2] = outlineInfo->fillColor1.v[2];
  refdef->hudOutline.scopeFillColor1.v[3] = outlineInfo->fillColor1.v[3];
  refdef->hudOutline.scopeOccludedOutlineColor.v[0] = outlineInfo->occludedOutlineColor.v[0];
  refdef->hudOutline.scopeOccludedOutlineColor.v[1] = outlineInfo->occludedOutlineColor.v[1];
  refdef->hudOutline.scopeOccludedOutlineColor.v[2] = outlineInfo->occludedOutlineColor.v[2];
  refdef->hudOutline.scopeOccludedOutlineColor.v[3] = outlineInfo->occludedOutlineColor.v[3];
  refdef->hudOutline.scopeOccludedInlineColor.v[0] = outlineInfo->occludedInlineColor.v[0];
  refdef->hudOutline.scopeOccludedInlineColor.v[1] = outlineInfo->occludedInlineColor.v[1];
  refdef->hudOutline.scopeOccludedInlineColor.v[2] = outlineInfo->occludedInlineColor.v[2];
  refdef->hudOutline.scopeOccludedInlineColor.v[3] = outlineInfo->occludedInlineColor.v[3];
  refdef->hudOutline.scopeOccludedInteriorColor.v[0] = outlineInfo->occludedInteriorColor.v[0];
  refdef->hudOutline.scopeOccludedInteriorColor.v[1] = outlineInfo->occludedInteriorColor.v[1];
  refdef->hudOutline.scopeOccludedInteriorColor.v[2] = outlineInfo->occludedInteriorColor.v[2];
  refdef->hudOutline.scopeOccludedInteriorColor.v[3] = outlineInfo->occludedInteriorColor.v[3];
  v28 = DVARBOOL_r_hudOutlineEnable;
  if ( !DVARBOOL_r_hudOutlineEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  refdef->hudOutline.mode = v28->current.enabled ? 2 : 0;
}

/*
==============
R_InitDaltonizeOptions
==============
*/
void R_InitDaltonizeOptions(GfxDaltonizeOptions *options, const GfxDaltonizeType mode, const float intensity, const unsigned __int8 enabledTargets, const unsigned __int8 curTarget)
{
  bool v6; 
  GfxDaltonizeType v7; 
  bool enabled; 

  v6 = (enabledTargets & curTarget) != 0;
  if ( r_daltonizeForceMode->current.integer )
  {
    mode = (unsigned __int8)r_daltonizeForceMode->current.integer;
    v6 = 1;
  }
  if ( mode == R_DALTONIZE_NONE || !v6 )
    intensity = 0.0;
  v7 = R_DALTONIZE_NONE;
  if ( intensity > 0.0 )
    v7 = mode;
  enabled = r_colorblindMode->current.enabled;
  if ( enabled || v7 )
  {
    options->m_correctionMode = v7;
    options->m_enabled = 1;
    options->m_correctionScale = intensity;
    options->m_simulationMode = enabled;
  }
  else
  {
    options->m_correctionMode = R_DALTONIZE_NONE;
    options->m_enabled = 0;
    options->m_correctionScale = intensity;
    options->m_simulationMode = R_DALTONIZE_NONE;
  }
}

/*
==============
R_InitIsPrimaryLightLoaded
==============
*/
void R_InitIsPrimaryLightLoaded(void)
{
  bitarray<1536> *v0; 
  __int64 v1; 

  v0 = &s_prevTransientVisibility;
  v1 = 3i64;
  do
  {
    *(_QWORD *)v0->array = 0i64;
    *(_QWORD *)&v0->array[2] = 0i64;
    *(_QWORD *)&v0->array[4] = 0i64;
    v0 = (bitarray<1536> *)((char *)v0 + 64);
    *(_QWORD *)&v0[-1].array[38] = 0i64;
    *(_QWORD *)&v0[-1].array[40] = 0i64;
    *(_QWORD *)&v0[-1].array[42] = 0i64;
    *(_QWORD *)&v0[-1].array[44] = 0i64;
    *(_QWORD *)&v0[-1].array[46] = 0i64;
    --v1;
  }
  while ( v1 );
  memset_0(s_IsPrimaryLightLoaded, 0, sizeof(s_IsPrimaryLightLoaded));
  s_isPrimaryLightLoadedUpdateCount = 0;
}

/*
==============
R_InitScene
==============
*/
void R_InitScene(void)
{
  XB3ConsoleType XB3ConsoleType; 
  RenderMemMode v1; 
  unsigned int v2; 
  bdRandom v3; 
  __int64 v4; 
  unsigned __int8 pbBuffer[64]; 

  v4 = -2i64;
  scene.drawSurfs[0] = scene.drawSurfsLitOpaque;
  scene.drawSurfs[5] = scene.drawSurfsDepthHack;
  scene.drawSurfs[7] = scene.drawSurfsDepthHackSSS;
  scene.drawSurfs[1] = scene.drawSurfsLitOpaqueSSS;
  scene.drawSurfs[6] = scene.drawSurfsDepthHackTrans;
  scene.drawSurfs[2] = scene.drawSurfsLitDecal;
  scene.drawSurfs[3] = scene.drawSurfsLitTrans;
  scene.drawSurfs[4] = scene.drawSurfsEmissive;
  scene.drawSurfs[8] = scene.drawSurfsPreDepthHack;
  scene.drawSurfs[9] = scene.drawSurfsPreDepthHackSSS;
  scene.drawSurfs[10] = scene.drawSurfsPreOpaque;
  scene.drawSurfs[11] = scene.drawSurfsPreSSS;
  scene.drawSurfs[12] = scene.drawSurfsEIDOnly;
  scene.drawSurfs[13] = scene.drawSurfsSunShadow0;
  scene.drawSurfs[14] = scene.drawSurfsSunShadow1;
  scene.drawSurfs[15] = scene.drawSurfsSunShadow2;
  scene.drawSurfs[16] = scene.drawSurfsSunShadowTrans;
  scene.drawSurfs[17] = scene.drawSurfsSunShadow0Scene;
  scene.drawSurfs[18] = scene.drawSurfsSpotShadow0;
  scene.drawSurfs[19] = scene.drawSurfsSpotShadow1;
  scene.drawSurfs[20] = scene.drawSurfsSpotShadow2;
  scene.drawSurfs[21] = scene.drawSurfsSpotShadow3;
  scene.drawSurfs[22] = scene.drawSurfsSpotShadow4;
  scene.drawSurfs[23] = scene.drawSurfsSpotShadow5;
  scene.drawSurfs[24] = scene.drawSurfsSpotShadow6;
  scene.drawSurfs[25] = scene.drawSurfsSpotShadow7;
  scene.drawSurfLimit[0] = 0x2000;
  scene.drawSurfLimit[9] = 256;
  scene.drawSurfLimit[7] = 256;
  scene.drawSurfLimit[1] = 256;
  scene.drawSurfLimit[2] = 2048;
  scene.drawSurfLimit[3] = 2048;
  scene.drawSurfLimit[4] = 0x2000;
  scene.drawSurfLimit[8] = 768;
  scene.drawSurfLimit[5] = 768;
  scene.drawSurfLimit[6] = 256;
  scene.drawSurfLimit[10] = 3072;
  scene.drawSurfLimit[11] = 1024;
  scene.drawSurfLimit[12] = 1024;
  scene.drawSurfLimit[13] = 4096;
  scene.drawSurfLimit[14] = 0x2000;
  scene.drawSurfLimit[15] = 0x2000;
  scene.drawSurfLimit[16] = 8;
  scene.drawSurfLimit[17] = 256;
  scene.drawSurfLimit[18] = 2048;
  scene.drawSurfLimit[19] = 2048;
  scene.drawSurfLimit[20] = 2048;
  scene.drawSurfLimit[21] = 2048;
  scene.drawSurfLimit[22] = 2048;
  scene.drawSurfLimit[23] = 2048;
  scene.drawSurfLimit[24] = 2048;
  scene.drawSurfLimit[25] = 2048;
  memset_0(scene.gfxPackedEntityData, 0, 0x16400ui64);
  memset_0(&scene.gfxCorpseFadeActive, 0, sizeof(scene.gfxCorpseFadeActive));
  *(_QWORD *)&scene.gfxCorpseFadeData[0].m_entityNum = 0i64;
  *(_QWORD *)&scene.gfxCorpseFadeData[2].m_entityNum = 0i64;
  *(_QWORD *)&scene.gfxCorpseFadeData[4].m_entityNum = 0i64;
  *(_QWORD *)&scene.gfxCorpseFadeData[6].m_entityNum = 0i64;
  *(_DWORD *)&g_previousFrameViewParmsIsValid[0][0] = 0;
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v1 = All;
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    v1 = PhaseSpace;
  s_lastRenderMemMode = v1;
  *(_QWORD *)s_lastValidFrame = 0i64;
  *(_QWORD *)s_lastValidFrameCount = 0i64;
  if ( !randomNumGenInit )
  {
    if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
      OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
    randomNumGenInit = 1;
  }
  if ( !BCryptGenRandom_0(s_provider, pbBuffer, 0x3Cu, 0) || (v2 = *(_DWORD *)pbBuffer) == 0 && !*(_DWORD *)&pbBuffer[4] )
  {
    bdRandom::bdRandom(&v3);
    bdRandom::nextUBytes(&v3, pbBuffer, 60);
    bdRandom::~bdRandom(&v3);
    v2 = *(_DWORD *)pbBuffer;
  }
  s_lighting_aab_X = v2;
  s_lighting_aab_Y = *(_DWORD *)&pbBuffer[4];
  s_lighting_aab_Z = *(_DWORD *)&pbBuffer[8];
  s_origin_aab_X = *(_DWORD *)&pbBuffer[12];
  s_origin_aab_Y = *(_DWORD *)&pbBuffer[16];
  s_origin_aab_Z = *(_DWORD *)&pbBuffer[20];
  s_ps_origin_aab_X = *(_DWORD *)&pbBuffer[24];
  s_ps_origin_aab_Y = *(_DWORD *)&pbBuffer[28];
  s_ps_origin_aab_Z = *(_DWORD *)&pbBuffer[32];
  s_bounds_aab_X = *(_DWORD *)&pbBuffer[36];
  s_bounds_aab_Y = *(_DWORD *)&pbBuffer[40];
  s_bounds_aab_Z = *(_DWORD *)&pbBuffer[44];
  s_lighting2_aab_X = *(_DWORD *)&pbBuffer[48];
  s_lighting2_aab_Y = *(_DWORD *)&pbBuffer[52];
  s_lighting2_aab_Z = *(_DWORD *)&pbBuffer[56];
  memset(pbBuffer, 0, 0x3Cui64);
}

/*
==============
R_InitSceneModel
==============
*/
void R_InitSceneModel(GfxSceneModel *sceneModel)
{
  __int64 v2; 
  bool v3; 
  const dvar_t *v4; 
  const XModel *model; 
  float value; 
  float scale; 
  bool v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v14; 
  float v15; 
  float v16; 
  double v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  double MaterialLodForDist; 
  unsigned int UsableLodForDist; 
  char v24; 
  float materialLod; 
  unsigned int v26; 
  bool v27; 
  bool v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  vec3_t out; 
  MaterialLodSettings materialLodSettings; 

  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_DWORD *)(v2 + 1728) )
      goto LABEL_8;
    v3 = *(_DWORD *)(v2 + 1724) == 0;
  }
  else
  {
    v3 = !Sys_IsMainThread();
  }
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1002, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
LABEL_8:
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1003, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  v4 = DCONST_DVARFLT_r_sceneModelAccurateLODRadiusThreshold;
  model = sceneModel->model;
  if ( !DCONST_DVARFLT_r_sceneModelAccurateLODRadiusThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneModelAccurateLODRadiusThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  scale = sceneModel->placement.scale;
  v8 = value < model->radius;
  if ( value >= model->radius )
  {
    v14 = rg.correctedLodParms.origin.v[0] - sceneModel->placement.base.origin.v[0];
    v15 = rg.correctedLodParms.origin.v[2] - sceneModel->placement.base.origin.v[2];
    v16 = rg.correctedLodParms.origin.v[1] - sceneModel->placement.base.origin.v[1];
    v17 = I_fres(sceneModel->placement.scale);
    *(float *)&_XMM6 = *(float *)&v17 * fsqrt((float)((float)(v16 * v16) + (float)(v14 * v14)) + (float)(v15 * v15));
  }
  else
  {
    QuatTransform(&sceneModel->placement.base.quat, &model->bounds.halfSize, &out);
    v9 = rg.correctedLodParms.origin.v[0] - (float)((float)(scale * sceneModel->placement.base.origin.v[0]) + out.v[0]);
    v10 = LODWORD(rg.correctedLodParms.origin.v[1]);
    *(float *)&v10 = rg.correctedLodParms.origin.v[1] - (float)((float)(scale * sceneModel->placement.base.origin.v[1]) + out.v[1]);
    v11 = rg.correctedLodParms.origin.v[2] - (float)((float)(scale * sceneModel->placement.base.origin.v[2]) + out.v[2]);
    *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v9 * v9)) + (float)(v11 * v11)) - (float)(scale * model->radius);
    _XMM1 = v10;
    __asm { vmaxss  xmm6, xmm1, xmm9 }
  }
  if ( ((*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF) != gfxCfg.entnumNone )
  {
    v18 = sceneModel->placement.scale;
    if ( v18 != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1022, ASSERT_TYPE_ASSERT, "( ( sceneModel->placement.scale == 1.0f ) )", "( sceneModel->placement.scale ) = %g", v18) )
      __debugbreak();
  }
  v19 = (float)(*(float *)&_XMM6 * rg.lodParms.ramp.scale) + rg.lodParms.ramp.bias;
  v20 = *(float *)&_XMM6 * rg.lodParms.cappedLodScale;
  R_MDAO_ResetVolumesProcessed(sceneModel);
  R_SetMaterialLodSettings(&materialLodSettings);
  if ( v8 )
    v21 = 0.0;
  else
    v21 = sceneModel->placement.scale * model->radius;
  MaterialLodForDist = XModelGetMaterialLodForDist(v21, *(float *)&_XMM6, &materialLodSettings);
  sceneModel->materialLod = *(float *)&MaterialLodForDist;
  UsableLodForDist = XModelGetUsableLodForDist(model, v19, v20);
  v24 = UsableLodForDist;
  if ( UsableLodForDist > 0x10 )
  {
    LODWORD(v30) = 16;
    LODWORD(v29) = UsableLodForDist;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1050, ASSERT_TYPE_ASSERT, "( lod ) <= ( (1 << 4) )", "lod not in [0, XMODELDRAWINFO_LOD_LIMIT]\n\t%u not in [0, %u]", v29, v30) )
      __debugbreak();
  }
  *(_DWORD *)&sceneModel->info &= 0xFFFFFFE1;
  materialLod = sceneModel->materialLod;
  *(_DWORD *)&sceneModel->info |= 2 * (v24 & 0xF);
  v26 = (int)materialLod;
  v27 = materialLod >= 0.0 && materialLod <= 16777216.0;
  v28 = materialLod >= 0.0 && materialLod <= 4294967300.0;
  if ( (!v27 || !v28) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", v26, materialLod) )
    __debugbreak();
  if ( v26 > 1 )
  {
    LODWORD(v31) = (int)materialLod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v31, 1) )
      __debugbreak();
  }
  if ( v26 > 2 )
  {
    LODWORD(v30) = 2;
    LODWORD(v29) = (int)materialLod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1054, ASSERT_TYPE_ASSERT, "( materialLod ) <= ( (1 << 1) )", "materialLod not in [0, XMODELDRAWINFO_MATERIAL_LOD_LIMIT]\n\t%u not in [0, %u]", v29, v30) )
      __debugbreak();
  }
  *(_DWORD *)&sceneModel->info &= 0xFFFFFFDE;
  *(_DWORD *)&sceneModel->info |= (32 * ((int)materialLod & 1)) | ((*((_DWORD *)sceneModel + 30) & 0x3FF) != 0);
}

/*
==============
R_InitializeDrawLists
==============
*/
void R_InitializeDrawLists(GfxViewInfo *viewInfo)
{
  memset_0(viewInfo->drawList, 0, 0x98ui64);
  viewInfo->drawList[0].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[2], 0, sizeof(viewInfo->drawList[2]));
  viewInfo->drawList[2].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[14], 0, sizeof(viewInfo->drawList[14]));
  viewInfo->drawList[14].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[16], 0, sizeof(viewInfo->drawList[16]));
  viewInfo->drawList[16].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[17], 0, sizeof(viewInfo->drawList[17]));
  viewInfo->drawList[17].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[18], 0, sizeof(viewInfo->drawList[18]));
  viewInfo->drawList[18].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[3], 0, sizeof(viewInfo->drawList[3]));
  viewInfo->drawList[3].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[9], 0, sizeof(viewInfo->drawList[9]));
  viewInfo->drawList[9].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[10], 0, sizeof(viewInfo->drawList[10]));
  viewInfo->drawList[10].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[11], 0, sizeof(viewInfo->drawList[11]));
  viewInfo->drawList[11].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[12], 0, sizeof(viewInfo->drawList[12]));
  viewInfo->drawList[12].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[13], 0, sizeof(viewInfo->drawList[13]));
  viewInfo->drawList[13].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[19], 0, sizeof(viewInfo->drawList[19]));
  viewInfo->drawList[19].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[23], 0, sizeof(viewInfo->drawList[23]));
  viewInfo->drawList[23].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[20], 0, sizeof(viewInfo->drawList[20]));
  viewInfo->drawList[20].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[21], 0, sizeof(viewInfo->drawList[21]));
  viewInfo->drawList[21].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[22], 0, sizeof(viewInfo->drawList[22]));
  viewInfo->drawList[22].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[29], 0, sizeof(viewInfo->drawList[29]));
  viewInfo->drawList[29].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[30], 0, sizeof(viewInfo->drawList[30]));
  viewInfo->drawList[30].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[31], 0, sizeof(viewInfo->drawList[31]));
  viewInfo->drawList[31].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[32], 0, sizeof(viewInfo->drawList[32]));
  viewInfo->drawList[32].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[33], 0, sizeof(viewInfo->drawList[33]));
  viewInfo->drawList[33].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[34], 0, sizeof(viewInfo->drawList[34]));
  viewInfo->drawList[34].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[35], 0, sizeof(viewInfo->drawList[35]));
  viewInfo->drawList[35].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[36], 0, sizeof(viewInfo->drawList[36]));
  viewInfo->drawList[36].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[37], 0, sizeof(viewInfo->drawList[37]));
  viewInfo->drawList[37].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[38], 0, sizeof(viewInfo->drawList[38]));
  viewInfo->drawList[38].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[39], 0, sizeof(viewInfo->drawList[39]));
  viewInfo->drawList[39].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[40], 0, sizeof(viewInfo->drawList[40]));
  viewInfo->drawList[40].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[41], 0, sizeof(viewInfo->drawList[41]));
  viewInfo->drawList[41].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[42], 0, sizeof(viewInfo->drawList[42]));
  viewInfo->drawList[42].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[43], 0, sizeof(viewInfo->drawList[43]));
  viewInfo->drawList[43].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[44], 0, sizeof(viewInfo->drawList[44]));
  viewInfo->drawList[44].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
}

/*
==============
R_IsPrimaryLightLoaded
==============
*/
unsigned __int8 R_IsPrimaryLightLoaded(const GfxBackEndData *backEndData, unsigned int lightIndex)
{
  __int64 v2; 
  unsigned int v3; 
  __int64 v5; 
  int v6; 

  v2 = (int)lightIndex;
  if ( lightIndex >= rgp.world->primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7449, ASSERT_TYPE_ASSERT, "(lightIndex < rgp.world->primaryLightCount)", (const char *)&queryFormat, "lightIndex < rgp.world->primaryLightCount") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x1980 )
  {
    v6 = 6528;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v3 = s_IsPrimaryLightLoaded[v2 >> 5];
  return _bittest((const int *)&v3, v2 & 0x1F);
}

/*
==============
R_IsPrimaryLightLoadedInternal
==============
*/
char R_IsPrimaryLightLoadedInternal(const GfxBackEndData *backEndData, unsigned int lightIndex)
{
  const dvar_t *v2; 
  char v5; 
  const ComPrimaryLight *PrimaryLight; 
  const ComPrimaryLight *v8; 
  unsigned int transientZoneList; 
  unsigned __int16 v10; 
  __int16 *v11; 
  unsigned __int16 v12; 
  __int16 *v13; 
  int integer; 
  __int64 v15; 
  __int64 v16; 

  v2 = DCONST_DVARINT_r_suppressLight;
  v5 = 1;
  if ( !DCONST_DVARINT_r_suppressLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_suppressLight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer == lightIndex )
    return 0;
  if ( lightIndex <= rgp.world->lastSunPrimaryLightIndex || comWorld.transientTableSize <= 1 )
    return 1;
  PrimaryLight = Com_GetPrimaryLight(lightIndex);
  v8 = Com_GetPrimaryLight(lightIndex);
  if ( v8->transientZoneList >= comWorld.transientTableSize )
  {
    LODWORD(v16) = comWorld.transientTableSize;
    LODWORD(v15) = v8->transientZoneList;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( comLight->transientZoneList ) < (unsigned)( comWorld.transientTableSize )", "comLight->transientZoneList doesn't index comWorld.transientTableSize\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  transientZoneList = v8->transientZoneList;
  v10 = 0;
  if ( transientZoneList )
  {
    v11 = (__int16 *)&comWorld.transientTable[transientZoneList];
    if ( *v11 >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 66, ASSERT_TYPE_ASSERT, "(zoneListBegin[0] & 0x8000)", (const char *)&queryFormat, "zoneListBegin[0] & 0x8000") )
      __debugbreak();
    v12 = *v11 & 0x7FFF;
    v13 = v11 + 1;
  }
  else
  {
    v12 = 0;
    v13 = NULL;
  }
  integer = r_offloadPrimaryLights->current.integer;
  if ( !integer || !PrimaryLight->transientZoneList )
    return v5;
  if ( integer != 1 )
  {
    if ( v12 )
    {
      while ( R_IsTransientZoneReady(backEndData, (unsigned __int16)v13[v10 + 1]) )
      {
        if ( ++v10 >= v12 )
          return 1;
      }
      return 0;
    }
    return v5;
  }
  v5 = 0;
  if ( !v12 )
    return v5;
  while ( !R_IsTransientZoneReady(backEndData, (unsigned __int16)v13[v10]) )
  {
    if ( ++v10 >= v12 )
      return 0;
  }
  return 1;
}

/*
==============
R_IsSceneModelAddThread
==============
*/
_BOOL8 R_IsSceneModelAddThread()
{
  __int64 v0; 

  if ( !g_delayedSceneModelGlob.delayingActive )
    return Sys_IsMainThread();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  return *(_DWORD *)(v0 + 1728) || *(_DWORD *)(v0 + 1724);
}

/*
==============
R_IsSortPending
==============
*/
bool R_IsSortPending()
{
  return rgp.gameWorldSorted == 0;
}

/*
==============
R_IsTransientZoneReady
==============
*/
bool R_IsTransientZoneReady(const GfxBackEndData *backEndData, unsigned int transientZoneIndex)
{
  unsigned __int64 v2; 
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 

  v2 = transientZoneIndex;
  if ( !backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x600 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, 1536) )
      __debugbreak();
  }
  v4 = backEndData->transientVisibility.array[v2 >> 5] & (0x80000000 >> (v2 & 0x1F));
  if ( (unsigned __int16)v2 >= backEndData->transientDrawContext.zoneCount )
  {
    LODWORD(v7) = backEndData->transientDrawContext.zoneCount;
    LODWORD(v6) = (unsigned __int16)v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 42, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return v4 && backEndData->transientDrawContext.drawVertsPtr[(unsigned __int16)v2];
}

/*
==============
R_IsValidBrushModel
==============
*/
bool R_IsValidBrushModel(int modelIndex)
{
  return !rgp.world || modelIndex < rgp.world->modelCount;
}

/*
==============
R_LinkBModelEntity
==============
*/
unsigned int R_LinkBModelEntity(unsigned int localClientNum, unsigned int entnum, GfxBrushModel *bmodel)
{
  R_FilterBModelIntoCells(localClientNum, entnum, bmodel);
  R_UnlinkEntityFromPrimaryLights(localClientNum, entnum);
  return R_LinkBoxEntityToPrimaryLights(localClientNum, entnum, &bmodel->writable.bounds);
}

/*
==============
R_LinkBModelEntity_NoCull
==============
*/
unsigned int R_LinkBModelEntity_NoCull(unsigned int localClientNum, unsigned int entnum, GfxBrushModel *bmodel)
{
  R_UnlinkEntityFromPrimaryLights(localClientNum, entnum);
  return R_LinkBoxEntityToPrimaryLights(localClientNum, entnum, &bmodel->writable.bounds);
}

/*
==============
R_LinkDObjEntity
==============
*/
unsigned int R_LinkDObjEntity(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, float radius)
{
  R_FilterDObjIntoCells(localClientNum, entnum, origin, radius);
  R_UnlinkEntityFromPrimaryLights(localClientNum, entnum);
  return R_LinkSphereEntityToPrimaryLights(localClientNum, entnum, origin, radius);
}

/*
==============
R_LinkDObjEntity_NoCull
==============
*/
unsigned int R_LinkDObjEntity_NoCull(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, float radius)
{
  R_UnlinkEntityFromPrimaryLights(localClientNum, entnum);
  return R_LinkSphereEntityToPrimaryLights(localClientNum, entnum, origin, radius);
}

/*
==============
R_LinkDynEntClient
==============
*/
unsigned int R_LinkDynEntClient(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, const Bounds *bounds)
{
  R_UnlinkDynEntClientFromPrimaryLights(localClientNum, dynEntClientId, basis);
  return R_LinkDynEntClientToPrimaryLights(localClientNum, dynEntClientId, basis, bounds);
}

/*
==============
R_LinkDynEntClientToCells
==============
*/
void R_LinkDynEntClientToCells(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, const Bounds *bounds)
{
  __int64 v4; 
  GfxWorld *world; 
  unsigned int v9; 
  __int32 v10; 
  unsigned int v11; 

  v4 = (unsigned __int8)basis;
  world = rgp.world;
  v9 = (s_world.dpvsDyn.dynEntClientCount[(unsigned __int8)basis] + 31) >> 5;
  if ( v9 * (localClientNum + 1) > rgp.world->dpvsDyn.dynEntClientWordCount[(unsigned __int8)basis] )
  {
    v11 = rgp.world->dpvsDyn.dynEntClientWordCount[(unsigned __int8)basis];
    v10 = v9 * (localClientNum + 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10968, ASSERT_TYPE_ASSERT, "( dynEntWordsPerClient * (localClientNum + 1) ) <= ( rgp.world->dpvsDyn.dynEntClientWordCount[basis] )", "%s <= %s\n\t%u, %u", "dynEntWordsPerClient * (localClientNum + 1)", "rgp.world->dpvsDyn.dynEntClientWordCount[basis]", v10, v11) )
      __debugbreak();
    world = rgp.world;
  }
  R_FilterThingIntoCells(dynEntClientId, bounds, &world->dpvsDyn.dynEntCellBits[v4][localClientNum * v9], world->dpvsDyn.dynEntClientWordCount[v4]);
}

/*
==============
R_LinkDynEntClient_NoCull
==============
*/
unsigned int R_LinkDynEntClient_NoCull(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis, const Bounds *bounds)
{
  R_UnlinkDynEntClientFromPrimaryLights(localClientNum, dynEntClientId, basis);
  return R_LinkDynEntClientToPrimaryLights(localClientNum, dynEntClientId, basis, bounds);
}

/*
==============
R_MarkSceneEnts
==============
*/
void R_MarkSceneEnts(void)
{
  scene.gfxEntCountAtMark = scene.gfxEntCount;
  scene.sceneDObjCountAtMark = scene.sceneDObjCount;
  scene.sceneModelCountAtMark = scene.sceneModelCount;
  scene.sceneBrushCountAtMark = scene.sceneBrushCount;
}

/*
==============
R_PIP_SetViewInfoIndex
==============
*/
void R_PIP_SetViewInfoIndex(const GfxViewport *vport)
{
  unsigned int v2; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5307, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PICTURE_IN_PICTURE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PICTURE_IN_PICTURE )") )
    __debugbreak();
  v2 = rg.pipInfoCount++;
  frontEndDataOut->pipInfoCount = rg.pipInfoCount;
  frontEndDataOut->viewInfoIndex = v2 + 5;
  frontEndDataOut->viewInfo[v2 + 5].displayViewport = *vport;
}

/*
==============
R_PackEntityShaderData
==============
*/
void R_PackEntityShaderData(const LocalClientNum_t localClientNum, unsigned __int16 entNum, unsigned __int16 scriptableEntNum, GfxSceneEntityMutableShaderData *entityShaderData, unsigned __int8 dataIndex, unsigned int genericMaterialData, DObjMaterialData *dobjMaterialData)
{
  GfxSceneEntityMutableShaderData *v7; 
  __int64 v11; 
  const Camo *v12; 
  GfxScriptEntityData *ScriptableEntityData; 
  unsigned __int8 *v14; 
  unsigned __int8 m_transitionFactor; 
  unsigned int v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  unsigned __int8 transitionFactor; 
  unsigned int v20; 
  unsigned __int8 v21; 
  unsigned __int8 v22; 
  __int64 v23; 
  __int64 v24; 

  v7 = entityShaderData;
  if ( dataIndex >= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1321, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( GFX_MAX_MODEL_MUTABLE_SHADER_DATA )", "dataIndex doesn't index GFX_MAX_MODEL_MUTABLE_SHADER_DATA\n\t%i not in [0, %i)", dataIndex, 8) )
    __debugbreak();
  v11 = 0i64;
  if ( !dobjMaterialData || (v12 = dobjMaterialData->camoAsset[dataIndex]) == NULL )
    v12 = NULL;
  v7->modelShaderData[dataIndex].camoAsset = v12;
  ScriptableEntityData = R_FindScriptableEntityData(localClientNum, scriptableEntNum);
  v14 = &v7->dataCount + 16 * dataIndex;
  if ( ScriptableEntityData )
  {
    v14[17] = ScriptableEntityData->m_prevFlagAmplitude;
    v14[18] = ScriptableEntityData->m_flagAmplitude;
    m_transitionFactor = ScriptableEntityData->m_transitionFactor;
  }
  else
  {
    *(_WORD *)(v14 + 17) = 0;
    m_transitionFactor = 0;
  }
  v14[16] = m_transitionFactor;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1197, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( entNum )
  {
    v16 = entNum - 1;
    if ( v16 <= 0x9FF )
    {
      v17 = v16 + 2560 * localClientNum;
      if ( v17 >= 0x1400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( ((0x8000000000000000ui64 >> (v16 & 0x3F)) & scene.gfxCorpseFadeActive.m_data[v17 >> 6]) != 0 )
      {
        while ( scene.gfxCorpseFadeData[v11].m_entityNum != v16 + 2560 * localClientNum )
        {
          if ( (unsigned __int64)++v11 >= 8 )
          {
            LODWORD(v24) = localClientNum;
            LODWORD(v23) = entNum - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1226, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to find corpseFadeData for entityNum %i on Client %i.", v23, v24) )
              __debugbreak();
            goto LABEL_23;
          }
        }
        v7 = entityShaderData;
        if ( (GfxScene *)((char *)&scene + 4 * v11) != (GfxScene *)-3406400i64 )
        {
          v22 = scene.gfxCorpseFadeData[v11].m_transitionFactor;
          if ( v14[16] > v22 )
            v22 = v14[16];
          v14[16] = v22;
        }
      }
      else
      {
LABEL_23:
        v7 = entityShaderData;
      }
    }
  }
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1244, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( entNum )
  {
    v18 = entNum - 1;
    if ( v18 < 0x9C5 && entNum != 2048 && scene.gfxWeaponFadeData.entNum == v18 && scene.gfxWeaponFadeData.applyTransitionFactor )
    {
      transitionFactor = scene.gfxWeaponFadeData.transitionFactor;
      if ( v14[16] > scene.gfxWeaponFadeData.transitionFactor )
        transitionFactor = v14[16];
      v14[16] = transitionFactor;
    }
  }
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1282, ASSERT_TYPE_ASSERT, "(localClientNum < 2)", (const char *)&queryFormat, "localClientNum < STATIC_MAX_LOCAL_CLIENTS") )
    __debugbreak();
  if ( entNum )
  {
    v20 = entNum - 1;
    if ( v20 < 0x9C5 && entNum != 2048 && scene.gfxPlayerFadeData.entNum == v20 && scene.gfxPlayerFadeData.applyTransitionFactor )
    {
      v21 = scene.gfxPlayerFadeData.transitionFactor;
      if ( v7->modelShaderData[dataIndex].transitionFactor > scene.gfxPlayerFadeData.transitionFactor )
        v21 = v7->modelShaderData[dataIndex].transitionFactor;
      v7->modelShaderData[dataIndex].transitionFactor = v21;
    }
  }
  v7->modelShaderData[dataIndex].baseEmissiveAndTransitionFactor = HIBYTE(genericMaterialData);
}

/*
==============
R_PackScriptedColorEmissive
==============
*/
void R_PackScriptedColorEmissive(base_vec4_t<unsigned int> *outScriptablePackedColorEmissive, const GfxSceneEntityMutableShaderData *sceneEntityMutableShaderData)
{
  _XMM0 = 0xFFFFFFFF;
  __asm { vpmovzxbd xmm1, xmm0 }
  _XMM0 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
  __asm { vcvtps2ph xmm1, xmm0, 0 }
  *outScriptablePackedColorEmissive = _XMM1;
  outScriptablePackedColorEmissive->v[2] = 2015232960;
  _XMM2 = 0i64;
  __asm
  {
    vinsertps xmm2, xmm2, xmm1, 0
    vcvtps2ph xmm0, xmm2, 0
  }
  outScriptablePackedColorEmissive->v[3] = _XMM0;
}

/*
==============
R_PerformanceWarningsForView
==============
*/
void R_PerformanceWarningsForView(const GfxViewInfo *viewInfo)
{
  const char *v2; 
  const GfxBackEndData *data; 
  __int64 spotShadowUpdateCount; 
  const char *VariantString; 
  char v6[8]; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  char text[8]; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  char dest[64]; 

  if ( viewInfo->motionBlur.enabled )
    R_PerformanceWarning("MBLUR-HQ", 300.0);
  if ( R_Blur_Enabled(viewInfo) )
    R_PerformanceWarning("BLUR", 320.0);
  if ( R_Lens_GetEnabled(viewInfo) && R_Lens_GetScopeEnabled(viewInfo) )
  {
    v2 = "LENS & SCOPE";
  }
  else if ( R_Lens_GetEnabled(viewInfo) )
  {
    v2 = "LENS";
  }
  else
  {
    if ( !R_Lens_GetScopeEnabled(viewInfo) )
      goto LABEL_13;
    v2 = "SCOPE";
  }
  R_PerformanceWarning(v2, 380.0);
LABEL_13:
  if ( R_DOF_GetEnabled(viewInfo) )
    R_PerformanceWarning("DOF", 360.0);
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
    R_PerformanceWarning("SUN SHADOW", 520.0);
  data = viewInfo->input.data;
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( (_DWORD)spotShadowUpdateCount )
  {
    Com_sprintf<64>((char (*)[64])dest, "SPOT SHADOW : %d / %d", spotShadowUpdateCount, data->spotShadowUpdateLimit);
    R_PerformanceWarning(dest, 540.0);
  }
  if ( viewInfo->sunshadowSampleSizeNear > 0.25 )
  {
    *(_QWORD *)text = 0i64;
    v15 = 0i64;
    v16 = 0i64;
    v17 = 0i64;
    v18 = 0i64;
    v19 = 0i64;
    v20 = 0i64;
    v21 = 0i64;
    Com_sprintf(text, 0x40ui64, "sm_sunSampleSizeNear: %0.2f", rg.sunSampleSizeNear);
    R_PerformanceWarning(text, 560.0);
  }
  if ( sm_dynlightAllSModels->current.enabled )
    R_PerformanceWarning("sm_dynlightAllSModels", 580.0);
  if ( r_ssao && r_ssao->current.enabled )
  {
    *(_QWORD *)v6 = 0i64;
    v7 = 0i64;
    v8 = 0i64;
    v9 = 0i64;
    v10 = 0i64;
    v11 = 0i64;
    v12 = 0i64;
    v13 = 0i64;
    VariantString = Dvar_GetVariantString("MNRQQOMSMM");
    if ( VariantString && *VariantString )
      Com_sprintf(v6, 0x40ui64, (const char *)&queryFormat, VariantString);
    else
      Com_sprintf(v6, 0x40ui64, "SSAO: %d", r_ssao->current.unsignedInt);
    R_PerformanceWarning(v6, 620.0);
  }
  if ( frontEndDataOut->reflectionProbeRelightingData.reflectionProbeRelightingIndex != -1 )
    R_PerformanceWarning("REFPROBE RELIGHT", 600.0);
  if ( R_VOL_AnyVisible(viewInfo) )
    R_PerformanceWarning("VOLUMETRICS", 640.0);
  if ( rg.vrsEmissiveOnly )
    R_PerformanceWarning("Emissive Half MS", 660.0);
  if ( rg.halfResEmissive )
    R_PerformanceWarning("Emissive Half BI", 660.0);
  if ( (viewInfo->matRenderFeatures & 1) != 0 )
    R_PerformanceWarning("REFRACTION", 480.0);
  if ( (viewInfo->matRenderFeatures & 2) != 0 )
    R_PerformanceWarning("SSR / FX DISTORT", 500.0);
}

/*
==============
R_RemoveScriptableEntityData
==============
*/
void R_RemoveScriptableEntityData(const LocalClientNum_t localClientNum, unsigned __int16 entityNum)
{
  GfxScriptEntityData *ScriptableEntityData; 

  ScriptableEntityData = R_FindScriptableEntityData(localClientNum, entityNum);
  if ( ScriptableEntityData )
    ScriptableEntityData->m_active = 0;
}

/*
==============
R_RenderScene
==============
*/
void R_RenderScene(const refdef_t *refdef, float lodOverride, unsigned int drawType, const GfxViewportFeatures *viewportFeaturesRequest)
{
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  __int64 localClientNum; 
  GfxSceneParms *m_ptr; 
  GfxViewParmsSet *p_viewParmsSet; 
  GfxViewParms *p_viewParms; 
  __int64 v13; 
  __int64 v14; 
  GfxViewParmsSet::Frame *v15; 
  GfxViewParms *v16; 
  __int64 v17; 
  double DisplayBlacklevel; 
  char v19; 
  bool v20; 
  __int16 Flags; 
  int v22; 
  int v23; 
  GfxViewParmsSet *v24; 
  __int64 v25; 
  __m256i *v26; 
  GfxViewParmsSet *v27; 
  __int64 v28; 
  __m256i *v29; 
  GfxViewParmsSet::Frame *v30; 
  __int64 v31; 
  __m256i *v32; 
  int DynamicOmniLight; 
  __int64 v34; 
  vec3_t *v35; 
  int DynamicSpotLight; 
  __int64 v37; 
  vec3_t *p_debugColorGammaSrgb; 
  GfxHudOutlineState *p_hudOutline; 
  GfxHudOutlineState *v40; 
  __int64 v41; 
  __m256i *v42; 
  GfxViewParmsSet *v43; 
  unsigned int *scriptIndex; 
  unsigned int *scriptIndexa; 
  unsigned int *permutationOverride; 
  GfxSceneParms *v47; 
  GfxViewParmsSet *v48; 
  vec3_t outOrg; 
  __int64 v50; 
  Mem_LargeLocal v51; 
  GfxViewParms viewParms; 
  GfxViewportFeatures features; 
  GfxSceneViewParms outOffset; 
  GfxCamera camera; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mtx; 
  GfxViewParmsSet viewParmsSet; 

  v50 = -2i64;
  R_SetupViewportFeatures(viewportFeaturesRequest, &features);
  v6 = *((_DWORD *)&features + 11) & 0xFFFFFDFF | (R_GpuLightGrid_DataAvailable() << 9);
  *((_DWORD *)&features + 11) = v6;
  v7 = 0;
  if ( !fx_gpu_lighting->current.enabled || (v8 = 1024, s_world.voxelTreeCount <= 0) )
    v8 = 0;
  *((_DWORD *)&features + 11) = v8 | v6 & 0xFFFFFBFF;
  localClientNum = refdef->localClientNum;
  Mem_LargeLocal::Mem_LargeLocal(&v51, 0xAE8ui64, "GfxSceneParms sceneParms");
  m_ptr = (GfxSceneParms *)v51.m_ptr;
  v47 = (GfxSceneParms *)v51.m_ptr;
  if ( refdef->view.fov.tanHalfFovX <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10703, ASSERT_TYPE_ASSERT, "(refdef->view.tanHalfFovX > 0)", (const char *)&queryFormat, "refdef->view.tanHalfFovX > 0") )
    __debugbreak();
  if ( refdef->view.fov.tanHalfFovY <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10704, ASSERT_TYPE_ASSERT, "(refdef->view.tanHalfFovY > 0)", (const char *)&queryFormat, "refdef->view.tanHalfFovY > 0") )
    __debugbreak();
  if ( refdef->view.depthHackFov.tanHalfFovX <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10705, ASSERT_TYPE_ASSERT, "(refdef->view.depthHackFov.tanHalfFovX > 0.0f)", (const char *)&queryFormat, "refdef->view.depthHackFov.tanHalfFovX > 0.0f") )
    __debugbreak();
  if ( refdef->view.depthHackFov.tanHalfFovY <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10706, ASSERT_TYPE_ASSERT, "(refdef->view.depthHackFov.tanHalfFovY > 0.0f)", (const char *)&queryFormat, "refdef->view.depthHackFov.tanHalfFovY > 0.0f") )
    __debugbreak();
  if ( !refdef->displayViewport.height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10707, ASSERT_TYPE_ASSERT, "(refdef->displayViewport.height > 0)", (const char *)&queryFormat, "refdef->displayViewport.height > 0") )
    __debugbreak();
  if ( !refdef->displayViewport.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10708, ASSERT_TYPE_ASSERT, "(refdef->displayViewport.width > 0)", (const char *)&queryFormat, "refdef->displayViewport.width > 0") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= gfxCfg.maxClientViews )
  {
    LODWORD(scriptIndex) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10709, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientViews )", "localClientNum doesn't index gfxCfg.maxClientViews\n\t%i not in [0, %i)", scriptIndex, gfxCfg.maxClientViews) )
      __debugbreak();
  }
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10710, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  Profile_Begin(4);
  Profile_BeginCSV(8);
  R_BeginClientCmdList2D();
  ScrPlace_BeginDisplayView();
  R_AddCmdProjectionSet2D();
  if ( (*((_BYTE *)&features + 40) & 2) != 0 && !r_useShellshockPostfx->current.enabled )
    CG_View_DrawShellshockBlend((LocalClientNum_t)localClientNum);
  RefdefView_GetOrg(&refdef->view, &rg.viewOrg);
  rg.viewDir = refdef->view.axis.m[0];
  R_SetCameraForView(&refdef->view, &camera);
  MatrixForViewerOrthogonal(&camera.origin, &camera.axis, &mtx);
  InfinitePerspectiveMatrix(camera.tanHalfFovX, camera.tanHalfFovY, camera.zPlanes[2], &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixCopy44(&out, &rg.viewProjMatrix);
  InfinitePerspectiveMatrix(camera.tanHalfFovX, camera.tanHalfFovY, camera.zPlanes[0], &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixCopy44(&out, &rg.viewProjMatrixDepthHack);
  R_GetSceneSubPixelOffset(refdef, &features, &outOffset.subpixelOffset, &outOffset.cameraMotion);
  R_SetViewParmsForScene(refdef, &outOffset, &viewParms);
  p_viewParmsSet = &viewParmsSet;
  p_viewParms = &viewParms;
  v13 = 3i64;
  v14 = 3i64;
  do
  {
    *(__m256i *)p_viewParmsSet->frames[0].viewParms.viewMatrix.m.m[0].v = *(__m256i *)p_viewParms->viewMatrix.m.m[0].v;
    *(__m256i *)p_viewParmsSet->frames[0].viewParms.viewMatrix.m.row2.v = *(__m256i *)p_viewParms->viewMatrix.m.row2.v;
    *(__m256i *)p_viewParmsSet->frames[0].viewParms.projectionMatrix.m.m[0].v = *(__m256i *)p_viewParms->projectionMatrix.m.m[0].v;
    p_viewParmsSet->frames[0].viewParms.projectionMatrix.m.row2 = p_viewParms->projectionMatrix.m.row2;
    p_viewParmsSet = (GfxViewParmsSet *)((char *)p_viewParmsSet + 128);
    *(vec4_t *)&p_viewParmsSet[-1].frames[2].viewParms.cameraMotion = p_viewParms->projectionMatrix.m.row3;
    p_viewParms = (GfxViewParms *)((char *)p_viewParms + 128);
    --v14;
  }
  while ( v14 );
  R_SetViewParmsForScene(refdef, NULL, &viewParms);
  v15 = &viewParmsSet.frames[2];
  v16 = &viewParms;
  v17 = 3i64;
  do
  {
    *(__m256i *)v15->viewParms.viewMatrix.m.m[0].v = *(__m256i *)v16->viewMatrix.m.m[0].v;
    *(__m256i *)v15->viewParms.viewMatrix.m.row2.v = *(__m256i *)v16->viewMatrix.m.row2.v;
    *(__m256i *)v15->viewParms.projectionMatrix.m.m[0].v = *(__m256i *)v16->projectionMatrix.m.m[0].v;
    v15->viewParms.projectionMatrix.m.row2 = v16->projectionMatrix.m.row2;
    v15 = (GfxViewParmsSet::Frame *)((char *)v15 + 128);
    *(vec4_t *)&v15[-1].viewParms.cameraMotion = v16->projectionMatrix.m.row3;
    v16 = (GfxViewParms *)((char *)v16 + 128);
    --v17;
  }
  while ( v17 );
  R_SetSceneParms(refdef, m_ptr);
  R_AssignSceneParmsViewports(m_ptr, refdef, *((_BYTE *)&features + 40) & 1, refdef->resolution.step);
  m_ptr->drawType = drawType;
  DisplayBlacklevel = R_GetDisplayBlacklevel((*((_WORD *)&features + 20) & 0x4000) != 0);
  m_ptr->blackLevel = *(float *)&DisplayBlacklevel;
  m_ptr->ssrFade = refdef->ssrFade;
  if ( (*((_BYTE *)&features + 40) & 1) != 0 )
    R_DisplayToSceneViewport(&m_ptr->ssrSourceSceneViewport, &refdef->ssrSourceDisplayViewport, refdef->resolution.step);
  else
    m_ptr->ssrSourceSceneViewport = refdef->ssrSourceDisplayViewport;
  RefdefView_GetOrg(&refdef->view, &outOrg);
  R_UpdateActiveStage(rgp.world->primaryLights, &m_ptr->stageInfo, &outOrg);
  v19 = *((_BYTE *)&features + 40);
  if ( (*((_BYTE *)&features + 40) & 4) != 0 && !(_DWORD)localClientNum )
  {
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10788, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    R_LightTweak_Update(rgp.world->primaryLights, &m_ptr->stageInfo);
    v19 = *((_BYTE *)&features + 40);
  }
  if ( (v19 & 0x10) != 0 )
  {
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10795, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    R_UpdateFrameSun(rgp.world->primaryLights, &features, &m_ptr->stageInfo);
  }
  v20 = R_TG_SetScript(m_ptr->maxSceneRtWidth, m_ptr->maxSceneRtHeight, vidConfig.displayWidth, vidConfig.displayHeight, &features, &features.m_taskGraphIndex, &features.m_taskGraphPermutation);
  *((_DWORD *)&features + 11) = *((_DWORD *)&features + 11) & 0xFFFFFEFF | (v20 << 8);
  if ( (*((_WORD *)&features + 22) & 0x100) != 0 )
  {
    Flags = R_TG_GetFlags(&features);
    v22 = -1;
    if ( (Flags & 0x80u) == 0 || (v23 = -1, features.m_taskGraphIndex == -1) )
      v23 = -536870913;
    *((_DWORD *)&features + 10) = (*((_DWORD *)&features + 10) ^ (*((_WORD *)&features + 20) ^ (unsigned __int16)(8 * Flags)) & 0x100) & v23 & (((features.m_taskGraphIndex != -1) << 30) | 0xBFFFFFFF);
    if ( (Flags & 0x100) == 0 || features.m_taskGraphIndex == -1 )
      v22 = -131073;
    *((_DWORD *)&features + 11) &= v22;
  }
  if ( scene.def.time != refdef->time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10818, ASSERT_TYPE_ASSERT, "(scene.def.time == refdef->time)", (const char *)&queryFormat, "scene.def.time == refdef->time") )
    __debugbreak();
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10820, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  v24 = &viewParmsSet;
  if ( r_lockPvs->current.enabled )
    v24 = (GfxViewParmsSet *)&lockPvsViewParms;
  v48 = v24;
  if ( (unsigned __int64)(int)features.m_viewportType >= R_VIEWPORT_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10824, ASSERT_TYPE_ASSERT, "(viewportFeatures.m_viewportType < ( sizeof( *array_counter( g_previousFrameViewParmsIsValid[0] ) ) + 0 ))", (const char *)&queryFormat, "viewportFeatures.m_viewportType < ARRAY_COUNT( g_previousFrameViewParmsIsValid[0] )") )
    __debugbreak();
  outOffset.subpixelOffset = (vec2_t)(2 * localClientNum);
  v25 = 2 * localClientNum + (int)features.m_viewportType;
  if ( !g_previousFrameViewParmsIsValid[0][v25] )
  {
    v26 = (__m256i *)((char *)g_previousFrameViewParms + 384 * v25);
    v27 = &viewParmsSet;
    v28 = 3i64;
    do
    {
      *v26 = *(__m256i *)v27->frames[0].viewParms.viewMatrix.m.m[0].v;
      v26[1] = *(__m256i *)v27->frames[0].viewParms.viewMatrix.m.row2.v;
      v26[2] = *(__m256i *)v27->frames[0].viewParms.projectionMatrix.m.m[0].v;
      *(vec4_t *)v26[3].m256i_i8 = v27->frames[0].viewParms.projectionMatrix.m.row2;
      v26 += 4;
      *(vec4_t *)&v26[-1].m256i_u64[2] = v27->frames[0].viewParms.projectionMatrix.m.row3;
      v27 = (GfxViewParmsSet *)((char *)v27 + 128);
      --v28;
    }
    while ( v28 );
    g_previousFrameViewParmsIsValid[0][v25] = 1;
  }
  v29 = (__m256i *)((char *)g_previousFrameViewParms + 384 * v25);
  v30 = &viewParmsSet.frames[1];
  v31 = 3i64;
  do
  {
    *(__m256i *)v30->viewParms.viewMatrix.m.m[0].v = *v29;
    *(__m256i *)v30->viewParms.viewMatrix.m.row2.v = v29[1];
    *(__m256i *)v30->viewParms.projectionMatrix.m.m[0].v = v29[2];
    v30->viewParms.projectionMatrix.m.row2 = *(vec4_t *)v29[3].m256i_i8;
    v30 = (GfxViewParmsSet::Frame *)((char *)v30 + 128);
    *(_OWORD *)&v30[-1].viewParms.cameraMotion = *(_OWORD *)&v29[3].m256i_u64[2];
    v29 += 4;
    --v31;
  }
  while ( v31 );
  if ( refdef->radiantLiveLightCount )
  {
    do
    {
      v32 = (__m256i *)&refdef->radiantLiveLights[v7];
      if ( v32->m256i_i8[0] == 2 )
      {
        DynamicSpotLight = R_AllocateDynamicSpotLight();
        if ( DynamicSpotLight >= 0 )
        {
          v37 = DynamicSpotLight;
          p_debugColorGammaSrgb = &scene.dynamicSpotLight[v37].debugColorGammaSrgb;
          p_debugColorGammaSrgb->v[0] = refdef->radiantLiveLights[v7].colorLinearSrgb.v[0];
          p_debugColorGammaSrgb->v[1] = refdef->radiantLiveLights[v7].colorLinearSrgb.v[1];
          p_debugColorGammaSrgb->v[2] = refdef->radiantLiveLights[v7].colorLinearSrgb.v[2];
          LinearToGammaColor_Srgb(&scene.dynamicSpotLight[v37].debugColorGammaSrgb);
          *(__m256i *)&scene.dynamicSpotLight[v37].lightCommon.type = *v32;
          *(__m256i *)scene.dynamicSpotLight[v37].lightCommon.dir.v = *(__m256i *)refdef->radiantLiveLights[v7].dir.v;
          *(__m256i *)&scene.dynamicSpotLight[v37].lightCommon.origin.z = *(__m256i *)&refdef->radiantLiveLights[v7].origin.z;
          *(__m256i *)&scene.dynamicSpotLight[v37].lightCommon.cosHalfFovOuter = *(__m256i *)&refdef->radiantLiveLights[v7].cosHalfFovOuter;
          *(_OWORD *)&scene.dynamicSpotLight[v37].lightCommon.shadowArea = *(_OWORD *)&refdef->radiantLiveLights[v7].shadowArea;
          scene.dynamicSpotLight[v37].lightCommon.def = refdef->radiantLiveLights[v7].def;
        }
      }
      else if ( v32->m256i_i8[0] == 3 )
      {
        DynamicOmniLight = R_AllocateDynamicOmniLight();
        if ( DynamicOmniLight >= 0 )
        {
          v34 = DynamicOmniLight;
          v35 = &scene.dynamicOmniLight[v34].debugColorGammaSrgb;
          v35->v[0] = refdef->radiantLiveLights[v7].colorLinearSrgb.v[0];
          v35->v[1] = refdef->radiantLiveLights[v7].colorLinearSrgb.v[1];
          v35->v[2] = refdef->radiantLiveLights[v7].colorLinearSrgb.v[2];
          LinearToGammaColor_Srgb(&scene.dynamicOmniLight[v34].debugColorGammaSrgb);
          *(__m256i *)&scene.dynamicOmniLight[v34].lightCommon.type = *v32;
          *(__m256i *)scene.dynamicOmniLight[v34].lightCommon.dir.v = *(__m256i *)refdef->radiantLiveLights[v7].dir.v;
          *(__m256i *)&scene.dynamicOmniLight[v34].lightCommon.origin.z = *(__m256i *)&refdef->radiantLiveLights[v7].origin.z;
          *(__m256i *)&scene.dynamicOmniLight[v34].lightCommon.cosHalfFovOuter = *(__m256i *)&refdef->radiantLiveLights[v7].cosHalfFovOuter;
          *(_OWORD *)&scene.dynamicOmniLight[v34].lightCommon.shadowArea = *(_OWORD *)&refdef->radiantLiveLights[v7].shadowArea;
          scene.dynamicOmniLight[v34].lightCommon.def = refdef->radiantLiveLights[v7].def;
          if ( refdef->radiantLiveLights[v7].canUseShadowMap )
            R_CalcSpotLightPlanesAndBoundingBox(&refdef->radiantLiveLights[v7], (vec4_t (*)[6])scene.dynamicOmniLight[v34].planes, &scene.dynamicOmniLight[v34].bounds);
        }
      }
      ++v7;
    }
    while ( v7 < refdef->radiantLiveLightCount );
    m_ptr = v47;
    v24 = v48;
  }
  p_hudOutline = &m_ptr->hudOutline;
  v40 = &refdef->hudOutline;
  v41 = 2i64;
  do
  {
    *(_OWORD *)&p_hudOutline->enable = *(_OWORD *)&v40->enable;
    *(vec4_t *)((char *)&p_hudOutline->scopeFoeColor + 8) = *(vec4_t *)((char *)&v40->scopeFoeColor + 8);
    *(vec4_t *)((char *)&p_hudOutline->scopeFriendColor + 8) = *(vec4_t *)((char *)&v40->scopeFriendColor + 8);
    *(vec4_t *)((char *)&p_hudOutline->fillColor0 + 4) = *(vec4_t *)((char *)&v40->fillColor0 + 4);
    *(vec4_t *)((char *)&p_hudOutline->fillColor1 + 4) = *(vec4_t *)((char *)&v40->fillColor1 + 4);
    *(vec4_t *)((char *)&p_hudOutline->occludedOutlineColor + 4) = *(vec4_t *)((char *)&v40->occludedOutlineColor + 4);
    *(vec4_t *)((char *)&p_hudOutline->occludedInlineColor + 4) = *(vec4_t *)((char *)&v40->occludedInlineColor + 4);
    p_hudOutline = (GfxHudOutlineState *)((char *)p_hudOutline + 128);
    *(vec4_t *)((char *)&p_hudOutline[-1].snapshotEffectProperties + 8) = *(vec4_t *)((char *)&v40->occludedInteriorColor + 4);
    v40 = (GfxHudOutlineState *)((char *)v40 + 128);
    --v41;
  }
  while ( v41 );
  *(_OWORD *)&p_hudOutline->enable = *(_OWORD *)&v40->enable;
  *(_QWORD *)&p_hudOutline->scopeFoeColor.xyz.z = *(_QWORD *)&v40->scopeFoeColor.xyz.z;
  if ( scene.hudOutlineMasked && refdef->hudOutline.mode == 2 )
    m_ptr->hudOutline.mode = 3;
  R_GenerateSortedDrawSurfs((LocalClientNum_t)localClientNum, m_ptr, (const GfxViewParms *)v24, &viewParmsSet, &features);
  if ( R_ReflectionProbeRelighting_ShouldUpdate(&features) )
    R_ReflectionProbeRelighting_CopyCurrentRadiometricScale();
  if ( LUI_Workers_Active() )
    LUI_Workers_PostUpdate((const LocalClientNum_t)localClientNum);
  if ( !R_Screenshot_InProcess() )
  {
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(permutationOverride) = 2;
      LODWORD(scriptIndexa) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10871, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_previousFrameViewParms ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( g_previousFrameViewParms )\n\t%i not in [0, %i)", scriptIndexa, permutationOverride) )
        __debugbreak();
    }
    v42 = (__m256i *)((char *)g_previousFrameViewParms + 384 * *(_QWORD *)&outOffset.subpixelOffset + 384 * features.m_viewportType);
    v43 = &viewParmsSet;
    do
    {
      *v42 = *(__m256i *)v43->frames[0].viewParms.viewMatrix.m.m[0].v;
      v42[1] = *(__m256i *)v43->frames[0].viewParms.viewMatrix.m.row2.v;
      v42[2] = *(__m256i *)v43->frames[0].viewParms.projectionMatrix.m.m[0].v;
      *(vec4_t *)v42[3].m256i_i8 = v43->frames[0].viewParms.projectionMatrix.m.row2;
      v42 += 4;
      *(vec4_t *)&v42[-1].m256i_u64[2] = v43->frames[0].viewParms.projectionMatrix.m.row3;
      v43 = (GfxViewParmsSet *)((char *)v43 + 128);
      --v13;
    }
    while ( v13 );
  }
  Profile_EndCSV(8);
  Profile_EndInternal(NULL);
  if ( (*((_WORD *)&features + 20) & 0x100) != 0 )
    R_DrawDecalVolumesDebug(frontEndDataOut, (const GfxViewParms *)&viewParmsSet, m_ptr->displayViewport.width, m_ptr->displayViewport.height);
  R_ReflectionProbe_ShowStats(frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].input.data, (const GfxViewParms *)&viewParmsSet, m_ptr->displayViewport.width, m_ptr->displayViewport.height);
  memset(&outOrg, 0, sizeof(outOrg));
  Mem_LargeLocal::~Mem_LargeLocal(&v51);
}

/*
==============
R_ResetSceneEnts
==============
*/
void R_ResetSceneEnts(void)
{
  __int64 sceneDObjCountAtMark; 
  int sceneDObjCount; 
  unsigned int v2; 
  GfxSceneEntityCull *p_cull; 
  __int64 sceneModelCountAtMark; 
  GfxSceneModel *sceneModel; 
  __int64 v6; 
  __int64 sceneBrushCountAtMark; 
  __int64 v8; 
  __int64 v9; 
  int gfxEntCountAtMark; 
  __int64 v11; 
  volatile int gfxEntCount; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2321, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( scene.gfxEntCountAtMark > scene.gfxEntCount )
  {
    gfxEntCount = scene.gfxEntCount;
    gfxEntCountAtMark = scene.gfxEntCountAtMark;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2323, ASSERT_TYPE_ASSERT, "( scene.gfxEntCountAtMark ) <= ( scene.gfxEntCount )", "%s <= %s\n\t%i, %i", "scene.gfxEntCountAtMark", "scene.gfxEntCount", gfxEntCountAtMark, gfxEntCount) )
      __debugbreak();
  }
  sceneDObjCountAtMark = (unsigned int)scene.sceneDObjCountAtMark;
  scene.gfxEntCount = scene.gfxEntCountAtMark;
  sceneDObjCount = scene.sceneDObjCount;
  if ( scene.sceneDObjCountAtMark > (unsigned int)scene.sceneDObjCount )
  {
    LODWORD(v11) = scene.sceneDObjCount;
    LODWORD(v9) = scene.sceneDObjCountAtMark;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2327, ASSERT_TYPE_ASSERT, "( sceneEntCount ) <= ( (uint)scene.sceneDObjCount )", "%s <= %s\n\t%i, %i", "sceneEntCount", "(uint)scene.sceneDObjCount", v9, v11) )
      __debugbreak();
    sceneDObjCount = scene.sceneDObjCount;
  }
  memset_0(&scene.sceneDObjVisData[-1424][1424 * sceneDObjCountAtMark], 0, 1424i64 * (unsigned int)(sceneDObjCount - sceneDObjCountAtMark));
  scene.sceneDObjCount = sceneDObjCountAtMark;
  v2 = 0;
  if ( (_DWORD)sceneDObjCountAtMark )
  {
    p_cull = &scene.sceneDObj[0].cull;
    do
    {
      if ( scene.dpvs.sceneDObjIndex[(LODWORD(p_cull[32].skinnedSurfs.firstSurf) >> 10) & 0xFFF] != v2 )
      {
        LODWORD(v8) = scene.dpvs.sceneDObjIndex[(LODWORD(p_cull[32].skinnedSurfs.firstSurf) >> 10) & 0xFFF];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2335, ASSERT_TYPE_ASSERT, "( ( scene.dpvs.sceneDObjIndex[sceneEnt->entnum] == sceneEntIndex ) )", "( scene.dpvs.sceneDObjIndex[sceneEnt->entnum] ) = %i", v8) )
          __debugbreak();
      }
      p_cull->state = 0;
      p_cull->skinnedSurfs.firstSurf = NULL;
      R_InitSceneEntity((GfxSceneEntity *)&p_cull[-2].bounds.bounds.midPoint.y);
      ++v2;
      p_cull = (GfxSceneEntityCull *)((char *)p_cull + 1424);
    }
    while ( v2 < (unsigned int)sceneDObjCountAtMark );
  }
  sceneModelCountAtMark = (unsigned int)scene.sceneModelCountAtMark;
  if ( scene.sceneModelCountAtMark > (unsigned int)scene.sceneModelCount )
  {
    LODWORD(v11) = scene.sceneModelCount;
    LODWORD(v9) = scene.sceneModelCountAtMark;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2345, ASSERT_TYPE_ASSERT, "( sceneModelCount ) <= ( (uint)scene.sceneModelCount )", "%s <= %s\n\t%i, %i", "sceneModelCount", "(uint)scene.sceneModelCount", v9, v11) )
      __debugbreak();
  }
  sceneModel = scene.sceneModel;
  v6 = sceneModelCountAtMark;
  memset_0(&scene.sceneModel[sceneModelCountAtMark], 0, 152i64 * (unsigned int)(scene.sceneModelCount - sceneModelCountAtMark));
  scene.sceneModelCount = sceneModelCountAtMark;
  if ( (_DWORD)sceneModelCountAtMark )
  {
    do
    {
      R_InitSceneModel(sceneModel++);
      --v6;
    }
    while ( v6 );
  }
  sceneBrushCountAtMark = (unsigned int)scene.sceneBrushCountAtMark;
  if ( scene.sceneBrushCountAtMark > (unsigned int)scene.sceneBrushCount )
  {
    LODWORD(v11) = scene.sceneBrushCount;
    LODWORD(v9) = scene.sceneBrushCountAtMark;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2356, ASSERT_TYPE_ASSERT, "( sceneBrushCount ) <= ( (uint)scene.sceneBrushCount )", "%s <= %s\n\t%i, %i", "sceneBrushCount", "(uint)scene.sceneBrushCount", v9, v11) )
      __debugbreak();
  }
  memset_0(&scene.sceneBrush[sceneBrushCountAtMark], 0, 88i64 * (unsigned int)(scene.sceneBrushCount - sceneBrushCountAtMark));
  scene.sceneBrushCount = sceneBrushCountAtMark;
}

/*
==============
R_SceneLightFrustumTestBox
==============
*/
bool R_SceneLightFrustumTestBox(unsigned int sceneLightIndex, const Bounds *bounds)
{
  unsigned int v4; 
  __int64 v5; 

  if ( sceneLightIndex < rgp.world->primaryLightCount )
    return R_PrimaryLightFrustumTestBox(sceneLightIndex, bounds);
  v4 = R_SceneLightIndexToDynLightIndex(sceneLightIndex);
  v5 = v4;
  if ( v4 >= scene.addedDynamicLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11313, ASSERT_TYPE_ASSERT, "(dynLightIndex < scene.addedDynamicLightCount)", (const char *)&queryFormat, "dynLightIndex < scene.addedDynamicLightCount") )
    __debugbreak();
  return R_BoxInPlanes((const vec4_t (*)[6])scene.sceneDynamicLight[v5]->planes, bounds) != 0;
}

/*
==============
R_SceneLightFrustumTestSphere
==============
*/
bool R_SceneLightFrustumTestSphere(unsigned int sceneLightIndex, const Sphere *sphere)
{
  unsigned int v4; 
  __int64 v5; 

  if ( sceneLightIndex < rgp.world->primaryLightCount )
    return R_PrimaryLightFrustumTestSphere(sceneLightIndex, sphere);
  v4 = R_SceneLightIndexToDynLightIndex(sceneLightIndex);
  v5 = v4;
  if ( v4 >= scene.addedDynamicLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11321, ASSERT_TYPE_ASSERT, "(dynLightIndex < scene.addedDynamicLightCount)", (const char *)&queryFormat, "dynLightIndex < scene.addedDynamicLightCount") )
    __debugbreak();
  return R_SphereInPlanes((const vec4_t (*)[6])scene.sceneDynamicLight[v5]->planes, &sphere->origin, sphere->radius) != 0;
}

/*
==============
R_SceneSetupWeaponScope
==============
*/
void R_SceneSetupWeaponScope(const GfxScopeInfo *scope)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v4; 

  if ( r_scope_tweak->current.enabled )
  {
    scene.scope.scopeLensPos = scope->scopeLensPos;
    MatrixCopy33(&scope->scopeLensAxis, &scene.scope.scopeLensAxis);
    v2 = DCONST_DVARFLT_r_scope_relief_hip_movement_scale;
    LODWORD(scene.scope.scopeLensInnerDisk) = r_scope_inner->current.integer;
    LODWORD(scene.scope.scopeLensInnerDiskMag) = r_scope_inner_mag->current.integer;
    LODWORD(scene.scope.scopeLensOuterRing) = r_scope_outer->current.integer;
    LODWORD(scene.scope.scopeLensOuterRingMag) = r_scope_outer_mag->current.integer;
    LODWORD(scene.scope.scopeLensRadius) = r_scope_radius->current.integer;
    LODWORD(scene.scope.scopeLensFadeStart) = r_scope_fade_start->current.integer;
    LODWORD(scene.scope.scopeLensFadeEnd) = r_scope_fade_end->current.integer;
    LODWORD(scene.scope.scopeLensColorRed) = r_scope_color_red->current.integer;
    LODWORD(scene.scope.scopeLensColorGreen) = r_scope_color_green->current.integer;
    LODWORD(scene.scope.scopeLensColorBlue) = r_scope_color_blue->current.integer;
    LODWORD(scene.scope.scopeLensBrightness) = r_scope_color_brightness->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_focusDistance) = r_scope_relief_focus->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_focuseUVScale) = r_scope_relief_focus_scale->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_outOfFocusDistance) = r_scope_relief_outoffocus->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_outOfFocuseUVScale) = r_scope_relief_outoffocus_scale->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_idleMovementScale) = r_scope_relief_movement_scale_min->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_fullSpeedMovementScale) = r_scope_relief_movement_scale_max->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_maxMovement) = r_scope_relief_movement_clamp->current.integer;
    if ( !DCONST_DVARFLT_r_scope_relief_hip_movement_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scope_relief_hip_movement_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    value = v2->current.value;
    v4 = DCONST_DVARFLT_r_scope_relief_hip_movement_clamp;
    scene.scope.scopeEyeRelief_hipMovementScale = value;
    if ( !DCONST_DVARFLT_r_scope_relief_hip_movement_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scope_relief_hip_movement_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    LODWORD(scene.scope.scopeEyeRelief_hipMaxMovement) = v4->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_idleSway_freq) = r_scope_relief_sway_freq_min->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_idleSway_movement) = r_scope_relief_sway_amount_min->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_fullSpeedSway_freq) = r_scope_relief_sway_freq_max->current.integer;
    LODWORD(scene.scope.scopeEyeRelief_fullSpeedSway_movement) = r_scope_relief_sway_amount_max->current.integer;
    scene.scope.adsSmoothFade = scope->adsSmoothFade;
    *(_OWORD *)&scene.scope.scopeFadeInfo[0].fadeOutFrac = *(_OWORD *)&scope->scopeFadeInfo[0].fadeOutFrac;
  }
  else
  {
    scene.scope = *scope;
  }
}

/*
==============
R_ScopeDistortionTransform
==============
*/
void R_ScopeDistortionTransform(const GfxViewInfo *viewInfo, const vec2_t *screenPos, vec2_t *screenPosOut)
{
  float x; 
  float width; 
  float v5; 
  float y; 
  float v7; 
  float height; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float scopeLensOuterRingMag; 
  float v14; 
  float v15; 
  float v16; 
  vec4_t scopeLensBounds; 

  *screenPosOut = *screenPos;
  x = (float)viewInfo->displayViewport.x;
  width = (float)viewInfo->displayViewport.width;
  v5 = (float)(screenPos->v[0] - x) / width;
  y = (float)viewInfo->displayViewport.y;
  v7 = screenPos->v[1] - y;
  height = (float)viewInfo->displayViewport.height;
  v9 = v7 / height;
  scopeLensBounds = viewInfo->input.sceneConstants.scopeLensBounds;
  if ( viewInfo->scopeLensDistortionEnabled && v5 > scopeLensBounds.v[0] && v5 < scopeLensBounds.v[2] && v9 > scopeLensBounds.v[1] && v9 < scopeLensBounds.v[3] )
  {
    v10 = viewInfo->input.sceneConstants.scopeLensPos.v[0];
    v11 = viewInfo->input.sceneConstants.scopeLensPos.v[1];
    v12 = v9 - v11;
    scopeLensOuterRingMag = FLOAT_1_0;
    v14 = fsqrt((float)((float)((float)(v9 - v11) * viewInfo->input.sceneConstants.scopeLensPos.v[3]) * (float)((float)(v9 - v11) * viewInfo->input.sceneConstants.scopeLensPos.v[3])) + (float)((float)((float)(v5 - v10) * viewInfo->input.sceneConstants.scopeLensPos.v[2]) * (float)((float)(v5 - v10) * viewInfo->input.sceneConstants.scopeLensPos.v[2])));
    if ( v14 < 1.0 )
    {
      if ( v14 > scene.scope.scopeLensInnerDisk )
      {
        if ( v14 < scene.scope.scopeLensOuterRing )
        {
          if ( scene.scope.scopeLensInnerDisk < scene.scope.scopeLensOuterRing )
            scopeLensOuterRingMag = (float)((float)(1.0 - (float)((float)(v14 - scene.scope.scopeLensInnerDisk) / (float)(scene.scope.scopeLensOuterRing - scene.scope.scopeLensInnerDisk))) * scene.scope.scopeLensInnerDiskMag) + (float)((float)((float)(v14 - scene.scope.scopeLensInnerDisk) / (float)(scene.scope.scopeLensOuterRing - scene.scope.scopeLensInnerDisk)) * scene.scope.scopeLensOuterRingMag);
        }
        else
        {
          scopeLensOuterRingMag = scene.scope.scopeLensOuterRingMag;
        }
      }
      else
      {
        scopeLensOuterRingMag = scene.scope.scopeLensInnerDiskMag;
      }
      screenPosOut->v[0] = (float)((float)((float)((float)(v5 - v10) * scopeLensOuterRingMag) + v10) * width) + x;
      v15 = (float)viewInfo->displayViewport.height;
      v16 = (float)viewInfo->displayViewport.y;
      screenPosOut->v[1] = (float)((float)((float)(v12 * scopeLensOuterRingMag) + v11) * v15) + v16;
    }
  }
}

/*
==============
R_SetCameraForView
==============
*/
void R_SetCameraForView(const RefdefView *view, GfxCamera *camera)
{
  float zNear; 
  __int128 zNear_low; 

  RefdefView_GetOrg(view, &camera->origin);
  AxisCopy(&view->axis, &camera->axis);
  camera->tanHalfFovX = view->fov.tanHalfFovX;
  camera->tanHalfFovY = view->fov.tanHalfFovY;
  camera->depthHackFoV = view->depthHackFov;
  Dvar_GetVec4_Internal(r_zPlanes, (vec4_t *)camera->zPlanes);
  zNear = view->zNear;
  if ( zNear != 0.0 )
  {
    camera->zPlanes[2] = zNear;
    zNear_low = LODWORD(view->zNear);
    *(float *)&zNear_low = view->zNear + 0.00000011920929;
    _XMM1 = zNear_low;
    __asm { vmaxss  xmm2, xmm1, dword ptr [rbx+4Ch] }
    camera->zPlanes[3] = *(float *)&_XMM2;
  }
  if ( camera->zPlanes[0] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3653, ASSERT_TYPE_ASSERT, "(camera->zPlanes[R_ZPLANES_VIEWMODEL_ZNEAR] > 0.0f)", (const char *)&queryFormat, "camera->zPlanes[R_ZPLANES_VIEWMODEL_ZNEAR] > 0.0f") )
    __debugbreak();
  if ( camera->zPlanes[0] >= camera->zPlanes[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3654, ASSERT_TYPE_ASSERT, "(camera->zPlanes[R_ZPLANES_VIEWMODEL_ZFAR] > camera->zPlanes[R_ZPLANES_VIEWMODEL_ZNEAR])", (const char *)&queryFormat, "camera->zPlanes[R_ZPLANES_VIEWMODEL_ZFAR] > camera->zPlanes[R_ZPLANES_VIEWMODEL_ZNEAR]") )
    __debugbreak();
  if ( camera->zPlanes[2] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3655, ASSERT_TYPE_ASSERT, "(camera->zPlanes[R_ZPLANES_SCENE_ZNEAR] > 0.0f)", (const char *)&queryFormat, "camera->zPlanes[R_ZPLANES_SCENE_ZNEAR] > 0.0f") )
    __debugbreak();
  if ( camera->zPlanes[2] >= camera->zPlanes[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3656, ASSERT_TYPE_ASSERT, "(camera->zPlanes[R_ZPLANES_SCENE_ZFAR] > camera->zPlanes[R_ZPLANES_SCENE_ZNEAR])", (const char *)&queryFormat, "camera->zPlanes[R_ZPLANES_SCENE_ZFAR] > camera->zPlanes[R_ZPLANES_SCENE_ZNEAR]") )
    __debugbreak();
  camera->focalLength = view->focalLength;
  camera->visibilityOffset.v[0] = view->visibilityOffset.v[0];
  camera->visibilityOffset.v[1] = view->visibilityOffset.v[1];
  camera->visibilityOffset.v[2] = view->visibilityOffset.v[2];
  camera->visibilityQueryDistance = view->visibilityQueryDistance;
  camera->visibilityOffsetApplyToRefPoint = view->visibilityOffsetApplyToRefPoint;
}

/*
==============
R_SetEntityShaderData
==============
*/
void R_SetEntityShaderData(GfxPackedEntityData *rawEntityShaderData, const GfxSceneEntityMutableShaderData *sceneEntityMutableShaderData, float distanceToCamera, const Bounds *bounds, unsigned int entNum, bool useDepthHack)
{
  GfxPackedEntityData *v8; 
  tmat44_t<vec4_t> *p_viewProjMatrixDepthHack; 
  int v11; 
  float v28; 
  bool v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v33; 
  float scopeStencil; 
  float v36; 
  int v37; 
  double v38; 
  unsigned int v39; 
  unsigned int v40; 
  int v41; 
  unsigned int color; 
  __int64 v43; 
  GfxPackedEntityData *v44; 
  _OWORD *v; 
  int v46; 
  unsigned int *albedoMapScaleBias; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  __int64 v52; 
  int v53; 
  int v54; 
  int v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  unsigned int blendMapChannels; 
  double v60; 
  double v61; 
  double v62; 
  double v63; 
  __int64 v64; 
  unsigned int v65; 
  int v66; 
  __int64 v67; 
  int v68; 
  vec4_t vec; 
  vec4_t out; 

  if ( rawEntityShaderData )
  {
    v8 = rawEntityShaderData;
    if ( sceneEntityMutableShaderData )
    {
      if ( sceneEntityMutableShaderData->dataCount <= 8u )
      {
        p_viewProjMatrixDepthHack = &rg.viewProjMatrixDepthHack;
        if ( !useDepthHack )
          p_viewProjMatrixDepthHack = &rg.viewProjMatrix;
        v11 = 0;
        *(float *)&_XMM8 = FLOAT_3_4028235e38;
        *(float *)&_XMM9 = FLOAT_N3_4028235e38;
        *(float *)&_XMM10 = FLOAT_3_4028235e38;
        *(float *)&_XMM11 = FLOAT_N3_4028235e38;
        do
        {
          _XMM4 = LODWORD(bounds->halfSize.v[0]);
          _XMM0 = v11 & 1;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm1, xmm4, xmm3, xmm2
          }
          _XMM4 = LODWORD(bounds->halfSize.v[1]);
          vec.v[0] = *(float *)&_XMM1 + bounds->midPoint.v[0];
          _XMM0 = v11 & 2;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm1, xmm4, xmm3, xmm2
          }
          _XMM4 = LODWORD(bounds->halfSize.v[2]);
          vec.v[1] = *(float *)&_XMM1 + bounds->midPoint.v[1];
          _XMM0 = v11 & 4;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm1, xmm4, xmm3, xmm2
          }
          vec.v[2] = *(float *)&_XMM1 + bounds->midPoint.v[2];
          vec.v[3] = FLOAT_1_0;
          MatrixTransformVector44(&vec, p_viewProjMatrixDepthHack, &out);
          v28 = out.v[3];
          v29 = out.v[3] <= 0.0;
          if ( out.v[3] < 0.0 )
          {
            vec.v[0] = (float)((float)(0.0099999998 - out.v[3]) * rg.viewDir.v[0]) + vec.v[0];
            vec.v[1] = (float)((float)(0.0099999998 - out.v[3]) * rg.viewDir.v[1]) + vec.v[1];
            vec.v[2] = (float)((float)(0.0099999998 - out.v[3]) * rg.viewDir.v[2]) + vec.v[2];
            MatrixTransformVector44(&vec, p_viewProjMatrixDepthHack, &out);
            v28 = out.v[3];
            v29 = out.v[3] <= 0.0;
          }
          if ( !v29 )
          {
            v31 = LODWORD(FLOAT_1_0);
            *(float *)&v31 = 1.0 / v28;
            v30 = v31;
            *(float *)&v31 = *(float *)&v31 * out.v[0];
            _XMM1 = v31;
            v33 = v30;
            *(float *)&v33 = *(float *)&v30 * out.v[1];
            _XMM2 = v33 ^ (unsigned int)_xmm;
            LODWORD(out.v[1]) = COERCE_UNSIGNED_INT(*(float *)&v30 * out.v[1]) ^ _xmm;
            __asm
            {
              vminss  xmm10, xmm2, xmm10
              vmaxss  xmm11, xmm2, xmm11
            }
            out.v[0] = *(float *)&_XMM1;
            __asm
            {
              vminss  xmm8, xmm1, xmm8
              vmaxss  xmm9, xmm1, xmm9
            }
          }
          ++v11;
        }
        while ( v11 < 8 );
        scopeStencil = sceneEntityMutableShaderData->hudOutlineInfo.scopeStencil;
        v36 = (float)(*(float *)&_XMM9 + 1.0) * 0.5;
        if ( scopeStencil == 0.0 || (v37 = 1, sceneEntityMutableShaderData->hudOutlineInfo.color) )
          v37 = 0;
        v66 = v37;
        v38 = I_fclamp(scopeStencil, 0.0, 1.0);
        v39 = 0;
        v65 = 0;
        if ( sceneEntityMutableShaderData->dataCount )
        {
          v40 = (unsigned __int8)entNum;
          v41 = (int)(float)(*(float *)&v38 * 255.0) << 24;
          v68 = v41;
          do
          {
            color = sceneEntityMutableShaderData->hudOutlineInfo.color;
            v43 = v39;
            v44 = &v8[v39];
            *(_QWORD *)vec.v = v44;
            v44->outlineColor = color;
            v = (_OWORD *)v44->uvRotate[0].v;
            v44->outlinePropertyFlags = v37;
            v46 = v37 | (sceneEntityMutableShaderData->hudOutlineInfo.fill ? 2 : 0);
            albedoMapScaleBias = v44->albedoMapScaleBias;
            v44->outlinePropertyFlags = v46;
            v48 = v46 | (sceneEntityMutableShaderData->hudOutlineInfo.drawOccludedPixels ? 4 : 0);
            v44->outlinePropertyFlags = v48;
            v49 = v48 | (sceneEntityMutableShaderData->hudOutlineInfo.drawNonOccludedPixels ? 8 : 0);
            v44->outlinePropertyFlags = v49;
            v50 = v49 | (sceneEntityMutableShaderData->hudOutlineInfo.useAlternateColor ? 0x10 : 0);
            v44->outlinePropertyFlags = v50;
            v51 = v50 | (sceneEntityMutableShaderData->hudOutlineInfo.forSpectator ? 0x20 : 0);
            v44->outlinePropertyFlags = v51;
            v52 = v43;
            v53 = v51 | (sceneEntityMutableShaderData->hudOutlineInfo.specialActive ? 0x40 : 0);
            v44->outlinePropertyFlags = v53;
            v54 = v53 | ((sceneEntityMutableShaderData->hudOutlineInfo.renderMode & 0xF) << 16);
            v44->outlinePropertyFlags = v54;
            v55 = sceneEntityMutableShaderData->hudOutlineInfo.lineWidth & 0xF;
            v44->outlinePropertyFlags2 = v40;
            v44->outlinePropertyFlags = v41 | v54 | (v55 << 20);
            v44->transitionFactor = (float)sceneEntityMutableShaderData->modelShaderData[v52].transitionFactor * 0.0039215689;
            v44->flagAmplitudeScale = (float)sceneEntityMutableShaderData->modelShaderData[v52].flagAmplitudeScale * 0.0078740157;
            v44->prevFlagAmplitudeScale = (float)sceneEntityMutableShaderData->modelShaderData[v52].prevFlagAmplitudeScale * 0.0078740157;
            v44->characterEVOffset = sceneEntityMutableShaderData->hudOutlineInfo.characterEVOffset;
            if ( sceneEntityMutableShaderData->modelShaderData[v52].camoAsset )
            {
              v56 = 3i64;
              v67 = 28i64 - (_QWORD)v44;
              v57 = 16i64 - (_QWORD)v44;
              *(_QWORD *)out.v = -32i64 - (_QWORD)v44;
              v58 = 4i64 - (_QWORD)v44;
              do
              {
                *(albedoMapScaleBias - 3) = *(_DWORD *)((char *)&sceneEntityMutableShaderData->modelShaderData[v52].camoAsset->name + v58 + (unsigned __int64)albedoMapScaleBias);
                if ( *(int *)((char *)albedoMapScaleBias + v57 + (unsigned __int64)sceneEntityMutableShaderData->modelShaderData[v52].camoAsset) < 0 )
                {
                  LODWORD(v64) = *(unsigned int *)((char *)albedoMapScaleBias + v57 + (unsigned __int64)sceneEntityMutableShaderData->modelShaderData[v52].camoAsset);
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1562, ASSERT_TYPE_ASSERT, "( ( ( sceneEntityMutableShaderData->modelShaderData[dataIndex].camoAsset->albedoMapScaleBias[camoLayerIndex] & ENTITY_DATA_CAMO_LAYER_VALID ) == 0 ) )", "( sceneEntityMutableShaderData->modelShaderData[dataIndex].camoAsset->albedoMapScaleBias[camoLayerIndex] ) = %u", v64) )
                    __debugbreak();
                }
                *albedoMapScaleBias = *(_DWORD *)((char *)&sceneEntityMutableShaderData->modelShaderData[v52].camoAsset->name + (unsigned __int64)albedoMapScaleBias + v57) | 0x80000000;
                albedoMapScaleBias[3] = *(_DWORD *)((char *)&sceneEntityMutableShaderData->modelShaderData[v52].camoAsset->name + v67 + (unsigned __int64)albedoMapScaleBias);
                ++albedoMapScaleBias;
                *(v - 3) = *(_OWORD *)((char *)&sceneEntityMutableShaderData->modelShaderData[v52].camoAsset->name + *(_QWORD *)out.v + (unsigned __int64)v);
                *v = *(_OWORD *)((char *)&sceneEntityMutableShaderData->modelShaderData[v52].camoAsset->name + v57 + (unsigned __int64)v);
                ++v;
                --v56;
              }
              while ( v56 );
              v44 = *(GfxPackedEntityData **)vec.v;
              blendMapChannels = sceneEntityMutableShaderData->modelShaderData[v52].camoAsset->blendMapChannels;
            }
            else
            {
              v44->colorTint[0] = 0;
              blendMapChannels = 0;
              *albedoMapScaleBias = 0;
              v44->normalMapScaleBias[0] = 0;
              v44->uvScaleOffset[0].v[0] = 1.0;
              *(_QWORD *)&v44->uvScaleOffset[0].xyz.y = 1065353216i64;
              v44->uvScaleOffset[0].v[3] = 0.0;
              *(_QWORD *)v = 1065353216i64;
              v44->uvRotate[0].v[2] = 0.0;
              v44->uvRotate[0].v[3] = 1.0;
              *(_QWORD *)&v44->colorTint[1] = 0i64;
              *(_QWORD *)&v44->albedoMapScaleBias[1] = 0i64;
              *(_QWORD *)&v44->normalMapScaleBias[1] = 0i64;
              v44->uvScaleOffset[1].v[0] = 1.0;
              *(_QWORD *)&v44->uvScaleOffset[1].xyz.y = 1065353216i64;
              v44->uvScaleOffset[1].v[3] = 0.0;
              *(_QWORD *)v44->uvRotate[1].v = 1065353216i64;
              v44->uvRotate[1].v[2] = 0.0;
              v44->uvRotate[1].v[3] = 1.0;
              v44->uvScaleOffset[2].v[0] = 1.0;
              *(_QWORD *)&v44->uvScaleOffset[2].xyz.y = 1065353216i64;
              v44->uvScaleOffset[2].v[3] = 0.0;
              *(_QWORD *)v44->uvRotate[2].v = 1065353216i64;
              v44->uvRotate[2].v[2] = 0.0;
              v44->uvRotate[2].v[3] = 1.0;
            }
            v44->blendMapChannels = blendMapChannels;
            v44->distance = distanceToCamera;
            v60 = I_fclamp((float)(*(float *)&_XMM8 + 1.0) * 0.5, 0.0, 1.0);
            v44->minX = *(float *)&v60;
            v61 = I_fclamp(v36, 0.0, 1.0);
            v44->maxX = *(float *)&v61;
            v62 = I_fclamp((float)(*(float *)&_XMM10 + 1.0) * 0.5, 0.0, 1.0);
            v44->minY = *(float *)&v62;
            v63 = I_fclamp((float)(*(float *)&_XMM11 + 1.0) * 0.5, 0.0, 1.0);
            v41 = v68;
            v39 = v65 + 1;
            v37 = v66;
            v40 = (unsigned __int8)entNum;
            v8 = rawEntityShaderData;
            v44->maxY = *(float *)&v63;
            v65 = v39;
          }
          while ( v39 < sceneEntityMutableShaderData->dataCount );
        }
      }
    }
  }
}

/*
==============
R_SetForwardPlusClusterInfo
==============
*/
void R_SetForwardPlusClusterInfo(GfxViewInfo *viewInfo, unsigned int frustumWidth, unsigned int frustumHeight)
{
  unsigned __int64 v4; 
  __int64 v5; 
  float v6; 
  float v7; 
  unsigned int FrustumDepth; 
  float v9; 
  __int64 width; 
  unsigned __int64 v11; 
  __int64 height; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 

  v4 = frustumHeight;
  v5 = frustumWidth;
  v6 = (float)frustumWidth;
  v7 = (float)frustumHeight;
  FrustumDepth = R_VOL_GetFrustumDepth();
  viewInfo->input.sceneConstants.frustumSize.v[0] = v6;
  viewInfo->input.sceneConstants.frustumSize.v[1] = v7;
  v9 = (float)FrustumDepth;
  viewInfo->input.sceneConstants.frustumSize.v[2] = v9;
  viewInfo->input.sceneConstants.invFrustumSize.v[2] = 1.0 / v9;
  viewInfo->input.sceneConstants.invFrustumSize.v[0] = 1.0 / v6;
  viewInfo->input.sceneConstants.invFrustumSize.v[1] = 1.0 / v7;
  width = viewInfo->sceneViewport.width;
  viewInfo->frustumGrid.voxelCountX = v5;
  viewInfo->frustumGrid.voxelCountY = v4;
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  v11 = width + v5 - 1;
  height = viewInfo->sceneViewport.height;
  viewInfo->frustumGrid.voxelSizeX = v11 / (unsigned int)v5;
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  v13 = height + v4 - 1;
  v14 = (unsigned int)(v5 * viewInfo->frustumGrid.voxelSizeX);
  v15 = v13 / v4;
  viewInfo->frustumGrid.voxelSizeY = v15;
  v16 = (unsigned int)v4 * v15;
  v17 = (float)(unsigned int)v14;
  viewInfo->input.sceneConstants.frustumGridReferenceSize.v[0] = v17;
  v18 = (float)(unsigned int)v16;
  viewInfo->input.sceneConstants.frustumGridReferenceSize.v[1] = v18;
  viewInfo->input.sceneConstants.frustumGridReferenceSize.v[3] = 1.0 / v18;
  viewInfo->input.sceneConstants.frustumGridReferenceSize.v[2] = 1.0 / v17;
  v19 = 4 * viewInfo->frustumGrid.voxelSizeX;
  v20 = 4 * viewInfo->frustumGrid.voxelSizeY;
  if ( !(_DWORD)v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  viewInfo->frustumGrid.clusterCountX = (v14 + v19 - 1) / (unsigned __int64)(unsigned int)v19;
  if ( !(_DWORD)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  viewInfo->frustumGrid.clusterCountY = (v16 + v20 - 1) / (unsigned __int64)(unsigned int)v20;
  v21 = (float)(unsigned int)v19;
  viewInfo->input.sceneConstants.frustumGridClusterSize.v[0] = v21;
  v22 = (float)(unsigned int)v20;
  viewInfo->input.sceneConstants.frustumGridClusterSize.v[1] = v22;
  viewInfo->input.sceneConstants.frustumGridClusterSize.v[3] = 1.0 / v22;
  viewInfo->input.sceneConstants.frustumGridClusterSize.v[2] = 1.0 / v21;
  v23 = viewInfo->sceneViewport.width;
  v24 = viewInfo->sceneViewport.height;
  *(_QWORD *)&viewInfo->frustumGrid.lightWords = 0i64;
  viewInfo->frustumGrid.probeWords = 0;
  v25 = 2 * ((v23 + 63) >> 6);
  v26 = v25 * ((v24 + 63) >> 6);
  viewInfo->input.sceneConstants.stencilMaskStrideDwords = v25;
  v27 = (v23 + 255) >> 8;
  viewInfo->input.sceneConstants.stencilMaskStrideBlocks = v27;
  viewInfo->input.sceneConstants.stencilMaskPitchDwords = v26;
  viewInfo->input.sceneConstants.stencilMaskPitchBlocks = v27 * ((v24 + 127) >> 7);
}

/*
==============
R_SetForwardPlusClusterWordsInfo
==============
*/
void R_SetForwardPlusClusterWordsInfo(GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned int FrustumWords; 
  float v5; 
  unsigned int lightWords; 

  viewInfo->frustumGrid.lightWords = R_GetFrustumLightWords(data->frustumLightsIndex);
  viewInfo->frustumGrid.volumetricWords = R_VOL_GetFrustumWords(data->volumetricsIndex);
  FrustumWords = R_ReflectionProbe_GetFrustumWords(data->reflectionProbeFrameIndex);
  v5 = *(float *)&viewInfo->frustumGrid.volumetricWords;
  viewInfo->frustumGrid.probeWords = FrustumWords;
  lightWords = viewInfo->frustumGrid.lightWords;
  viewInfo->input.sceneConstants.frustumGridClusterParams.v[2] = *(float *)&viewInfo->frustumGrid.probeWords;
  viewInfo->input.sceneConstants.frustumGridClusterParams.v[1] = v5;
  LODWORD(viewInfo->input.sceneConstants.frustumGridClusterParams.v[0]) = lightWords;
  viewInfo->input.sceneConstants.frustumGridClusterParams.v[3] = 0.0;
}

/*
==============
R_SetGlobalLightingConstants
==============
*/
void R_SetGlobalLightingConstants(const GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  float v8; 
  float v9; 
  const GfxBackEndData *v11; 
  float dynamicSpotLightCount; 
  unsigned int v13; 
  float dynamicOmniLightCount; 
  float v15; 
  float primaryLightCount; 
  const GfxBackEndData *v17; 
  __int64 activePrimarySunLight; 
  __int64 v19; 
  float uvIntensity; 
  float intensity; 
  float v22; 
  float v23; 
  float v24; 
  float irIntensity; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  float heatIntensity; 
  float v29; 
  float v32; 
  float v34; 
  const GfxBackEndData *v35; 
  float v36; 
  float v37; 
  float v38; 
  const GfxBackEndData *v39; 
  float v40; 
  float v41; 
  float v42; 
  GfxWorld *world; 
  int heightfieldCount; 
  GfxHeightfield *heightfields; 
  __int64 voxelTreeZoneIndex; 
  GfxHeightfield *v47; 
  GfxImage *image; 
  float width; 
  float height; 
  __int128 v54; 
  const dvar_t *v59; 
  int v60; 
  bool v61; 
  const dvar_t *v62; 
  unsigned int skyIlluminationRadialDistanceBias; 
  __int64 v64; 
  unsigned __int16 *v65; 
  char *fmt; 
  float outRadiometricScale; 
  float outPrevFrameRadiometricScale[3]; 
  tmat44_t<vec4_t> in; 
  tmat44_t<vec4_t> csmLookupMatrix; 
  __int128 v92; 
  __int128 v93; 
  __int128 v94; 
  __int128 v95; 

  v95 = v2;
  v94 = v3;
  v93 = v4;
  v92 = v5;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4824, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4825, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  R_Tonemap_GetRadiometricScale(data, viewInfo, &outRadiometricScale, outPrevFrameRadiometricScale);
  v8 = outPrevFrameRadiometricScale[0];
  v9 = outRadiometricScale;
  _XMM6 = LODWORD(FLOAT_1_0);
  viewInfo->input.sceneConstants.radiometricScale.v[0] = outRadiometricScale;
  viewInfo->input.sceneConstants.radiometricScale.v[2] = v8;
  viewInfo->input.sceneConstants.radiometricScale.v[1] = 1.0 / v9;
  viewInfo->input.sceneConstants.radiometricScale.v[3] = 1.0 / v8;
  v11 = viewInfo->input.data;
  dynamicSpotLightCount = (float)v11->dynamicSpotLightCount;
  v13 = 0;
  dynamicOmniLightCount = (float)v11->dynamicOmniLightCount;
  v15 = (float)(rgp.world->lastSunPrimaryLightIndex + 1);
  primaryLightCount = (float)rgp.world->primaryLightCount;
  viewInfo->input.sceneConstants.packedLightCount.v[0] = primaryLightCount;
  viewInfo->input.sceneConstants.packedLightCount.v[1] = dynamicSpotLightCount;
  viewInfo->input.sceneConstants.packedLightCount.v[2] = dynamicOmniLightCount;
  viewInfo->input.sceneConstants.packedLightCount.v[3] = v15;
  v17 = viewInfo->input.data;
  activePrimarySunLight = v17->activePrimarySunLight;
  if ( (_DWORD)activePrimarySunLight )
  {
    v19 = activePrimarySunLight;
    uvIntensity = v17->sceneLights[activePrimarySunLight].uvIntensity;
    if ( (v17->sceneLights[activePrimarySunLight].flags & 0x4000) == 0 )
      uvIntensity = uvIntensity * viewInfo->lightUVIntensityScale;
    intensity = v17->sceneLights[v19].intensity;
    v22 = intensity * v17->sceneLights[v19].colorLinearSrgb.v[0];
    v23 = intensity * v17->sceneLights[v19].colorLinearSrgb.v[1];
    v24 = intensity * v17->sceneLights[v19].colorLinearSrgb.v[2];
    if ( viewInfo->thermalParams.useNightAndThermalVisionCombo )
      irIntensity = v17->sceneLights[v19].irIntensity;
    else
      irIntensity = 0.0;
    v26 = DVARFLT_r_sunIntensityHeatOverride;
    if ( DVARFLT_r_sunIntensityHeatOverride && (Dvar_CheckFrontendServerThread(DVARFLT_r_sunIntensityHeatOverride), v26->current.value > 0.0) )
    {
      v27 = DVARFLT_r_sunIntensityHeatOverride;
      if ( !DVARFLT_r_sunIntensityHeatOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunIntensityHeatOverride") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      heatIntensity = v27->current.value * 0.55555558;
    }
    else
    {
      heatIntensity = v17->sceneLights[v19].heatIntensity;
    }
    v29 = v17->sceneLights[v19].dir.v[1];
    _XMM0 = *((_DWORD *)&viewInfo->viewportFeatures + 11) & 4;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    v32 = v17->sceneLights[v19].dir.v[2];
    __asm { vblendvps xmm0, xmm6, xmm2, xmm3 }
    v34 = v17->sceneLights[v19].dir.v[0];
  }
  else
  {
    heatIntensity = 0.0;
    irIntensity = 0.0;
    uvIntensity = 0.0;
    v24 = 0.0;
    v23 = 0.0;
    v22 = 0.0;
    LODWORD(_XMM0) = 0;
    v32 = FLOAT_1_0;
    v29 = 0.0;
    v34 = 0.0;
  }
  viewInfo->input.sceneConstants.sunLightDir.v[0] = v34;
  viewInfo->input.sceneConstants.sunLightDir.v[1] = v29;
  viewInfo->input.sceneConstants.sunLightDir.v[2] = v32;
  viewInfo->input.sceneConstants.sunLightDir.v[3] = *(float *)&_XMM0;
  viewInfo->input.sceneConstants.sunLightColorAndUV.v[0] = v22;
  viewInfo->input.sceneConstants.sunLightColorAndUV.v[1] = v23;
  viewInfo->input.sceneConstants.sunLightColorAndUV.v[2] = v24;
  viewInfo->input.sceneConstants.sunLightColorAndUV.v[3] = uvIntensity;
  viewInfo->input.sceneConstants.sunLightIrAndHeat.v[0] = irIntensity;
  viewInfo->input.sceneConstants.sunLightIrAndHeat.v[1] = heatIntensity;
  viewInfo->input.sceneConstants.sunLightIrAndHeat.v[2] = 0.0;
  viewInfo->input.sceneConstants.sunLightIrAndHeat.v[3] = 0.0;
  v35 = viewInfo->input.data;
  v36 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  v37 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  v38 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  in = (tmat44_t<vec4_t>)v35->sunShadow.lookupMatrix;
  in.m[3].v[0] = (float)((float)((float)(v36 * v35->sunShadow.lookupMatrix.m.m[1].v[0]) + (float)(v37 * v35->sunShadow.lookupMatrix.m.m[0].v[0])) + (float)(v38 * v35->sunShadow.lookupMatrix.m.m[2].v[0])) + v35->sunShadow.lookupMatrix.m.m[3].v[0];
  in.m[3].v[1] = (float)((float)((float)(v37 * v35->sunShadow.lookupMatrix.m.m[0].v[1]) + (float)(v36 * v35->sunShadow.lookupMatrix.m.m[1].v[1])) + (float)(v38 * v35->sunShadow.lookupMatrix.m.m[2].v[1])) + v35->sunShadow.lookupMatrix.m.m[3].v[1];
  in.m[3].v[2] = (float)((float)((float)(v37 * v35->sunShadow.lookupMatrix.m.m[0].v[2]) + (float)(v36 * v35->sunShadow.lookupMatrix.m.m[1].v[2])) + (float)(v38 * v35->sunShadow.lookupMatrix.m.m[2].v[2])) + v35->sunShadow.lookupMatrix.m.m[3].v[2];
  in.m[3].v[3] = (float)((float)((float)(v37 * v35->sunShadow.lookupMatrix.m.m[0].v[3]) + (float)(v36 * v35->sunShadow.lookupMatrix.m.m[1].v[3])) + (float)(v38 * v35->sunShadow.lookupMatrix.m.m[2].v[3])) + v35->sunShadow.lookupMatrix.m.m[3].v[3];
  MatrixTranspose44Aligned(&in, &viewInfo->input.sceneConstants.sunShadowLookupMatrix.m);
  if ( R_CompressedSunShadow_IsUsingGlobalBuffer() )
  {
    v39 = viewInfo->input.data;
    v40 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
    v41 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
    v42 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
    csmLookupMatrix = (tmat44_t<vec4_t>)v39->sunShadow.csmLookupMatrix;
    csmLookupMatrix.m[3].v[0] = (float)((float)((float)(v40 * v39->sunShadow.csmLookupMatrix.m.m[1].v[0]) + (float)(v41 * v39->sunShadow.csmLookupMatrix.m.m[0].v[0])) + (float)(v42 * v39->sunShadow.csmLookupMatrix.m.m[2].v[0])) + v39->sunShadow.csmLookupMatrix.m.m[3].v[0];
    csmLookupMatrix.m[3].v[1] = (float)((float)((float)(v41 * v39->sunShadow.csmLookupMatrix.m.m[0].v[1]) + (float)(v40 * v39->sunShadow.csmLookupMatrix.m.m[1].v[1])) + (float)(v42 * v39->sunShadow.csmLookupMatrix.m.m[2].v[1])) + v39->sunShadow.csmLookupMatrix.m.m[3].v[1];
    csmLookupMatrix.m[3].v[2] = (float)((float)((float)(v41 * v39->sunShadow.csmLookupMatrix.m.m[0].v[2]) + (float)(v40 * v39->sunShadow.csmLookupMatrix.m.m[1].v[2])) + (float)(v42 * v39->sunShadow.csmLookupMatrix.m.m[2].v[2])) + v39->sunShadow.csmLookupMatrix.m.m[3].v[2];
    csmLookupMatrix.m[3].v[3] = (float)((float)((float)(v41 * v39->sunShadow.csmLookupMatrix.m.m[0].v[3]) + (float)(v40 * v39->sunShadow.csmLookupMatrix.m.m[1].v[3])) + (float)(v42 * v39->sunShadow.csmLookupMatrix.m.m[2].v[3])) + v39->sunShadow.csmLookupMatrix.m.m[3].v[3];
    MatrixTranspose44Aligned(&csmLookupMatrix, &viewInfo->input.sceneConstants.compressedSunShadowLookupMatrix.m);
  }
  world = rgp.world;
  heightfieldCount = rgp.world->heightfieldCount;
  if ( heightfieldCount )
  {
    if ( heightfieldCount != rgp.world->voxelTreeCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4906, ASSERT_TYPE_ASSERT, "(rgp.world->heightfieldCount == rgp.world->voxelTreeCount)", (const char *)&queryFormat, "rgp.world->heightfieldCount == rgp.world->voxelTreeCount") )
        __debugbreak();
      world = rgp.world;
    }
    heightfields = world->heightfields;
    voxelTreeZoneIndex = (int)viewInfo->input.voxelTreeZoneIndex;
    *(__m256i *)g_drawConsts.outdoorLookupMatrix.m[0].v = *(__m256i *)heightfields[voxelTreeZoneIndex].lookupMatrix.m[0].v;
    *(__m256i *)g_drawConsts.outdoorLookupMatrix.row2.v = *(__m256i *)heightfields[voxelTreeZoneIndex].lookupMatrix.row2.v;
    v47 = world->heightfields;
    image = v47[voxelTreeZoneIndex].image;
    width = (float)image->width;
    height = (float)image->height;
    _XMM1 = r_outdoorFeather->current.unsignedInt;
    __asm { vmaxss  xmm0, xmm1, xmm6 }
    viewInfo->input.sceneConstants.outdoorFeatherParms.v[0] = (float)(v47[voxelTreeZoneIndex].bounds.halfSize.v[2] * 2.0) / *(float *)&_XMM0;
    viewInfo->input.sceneConstants.outdoorFeatherParms.v[2] = width;
    viewInfo->input.sceneConstants.outdoorFeatherParms.v[3] = height;
    viewInfo->input.sceneConstants.outdoorFeatherParms.v[1] = 0.0;
    world = rgp.world;
  }
  if ( world->precomputedSkyIllumination.boxMax.v[0] > world->precomputedSkyIllumination.boxMin.v[0] && r_enablePrecomputedSkyIllumination->current.enabled )
  {
    viewInfo->input.sceneConstants.skyBoxMin = world->precomputedSkyIllumination.boxMin;
    viewInfo->input.sceneConstants.skyBoxMax = world->precomputedSkyIllumination.boxMax;
    v54 = LODWORD(FLOAT_1_0);
    *(float *)&v54 = 1.0 / (float)(world->precomputedSkyIllumination.boxMax.v[0] - world->precomputedSkyIllumination.boxMin.v[0]);
    _XMM4 = v54;
    __asm
    {
      vinsertps xmm4, xmm4, xmm3, 10h
      vinsertps xmm4, xmm4, xmm1, 20h ; ' '
      vinsertps xmm4, xmm4, xmm8, 30h ; '0'
    }
    viewInfo->input.sceneConstants.skyBoxSizeInv = _XMM4;
    viewInfo->input.sceneConstants.skyHeightConsts = world->precomputedSkyIllumination.heightConsts;
    _XMM0 = world->precomputedSkyIllumination.SVDCoefficientMinMax;
    viewInfo->input.sceneConstants.skySVDCoefficientMinMax = _XMM0;
    viewInfo->input.sceneConstants.skyFlags.v[0] = 1;
    viewInfo->input.sceneConstants.skyFlags.v[1] = r_enablePrecomputedSkyIlluminationMask->current.enabled;
    LOBYTE(v13) = r_showPrecomputedSkyIlluminationMask->current.enabled;
    viewInfo->input.sceneConstants.skyFlags.v[2] = v13;
    v59 = DVARINT_r_precomputedSkyIlluminationRadialDistance;
    if ( !DVARINT_r_precomputedSkyIlluminationRadialDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_precomputedSkyIlluminationRadialDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    v60 = (int)viewInfo->skyIlluminationRadialDistanceBias + v59->current.integer;
    v61 = s_radialDist == v60;
    viewInfo->input.sceneConstants.skyFlags.v[3] = v60;
    if ( !v61 )
    {
      v62 = DVARINT_r_precomputedSkyIlluminationRadialDistance;
      skyIlluminationRadialDistanceBias = (int)viewInfo->skyIlluminationRadialDistanceBias;
      if ( !DVARINT_r_precomputedSkyIlluminationRadialDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_precomputedSkyIlluminationRadialDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v62);
      LODWORD(fmt) = v60;
      Com_Printf(8, "sky illumination radial distance %d + %d = %d\n", v62->current.unsignedInt, skyIlluminationRadialDistanceBias, fmt);
      s_radialDist = viewInfo->input.sceneConstants.skyFlags.v[3];
    }
    if ( R_GetNumActiveLightGrids(viewInfo->input.data) > 0 )
    {
      v64 = (__int64)*R_GetActiveLightGridsList(viewInfo->input.data);
      if ( !v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4969, ASSERT_TYPE_ASSERT, "(lightGrid)", (const char *)&queryFormat, "lightGrid") )
        __debugbreak();
      v65 = (unsigned __int16 *)(*(_QWORD *)(v64 + 136) + 92i64 * viewInfo->input.voxelTreeZoneIndex);
      if ( v65 )
      {
        FloatFromHalf(v65[32]);
        FloatFromHalf(v65[23]);
        *(double *)_XMM0.v = FloatFromHalf(v65[14]);
        __asm
        {
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
        }
        viewInfo->input.sceneConstants.skySHDC = _XMM1;
        FloatFromHalf(v65[18]);
        FloatFromHalf(v65[17]);
        FloatFromHalf(v65[16]);
        *(double *)_XMM0.v = FloatFromHalf(v65[15]);
        __asm
        {
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
        }
        viewInfo->input.sceneConstants.skySHr1 = _XMM1;
        FloatFromHalf(v65[22]);
        FloatFromHalf(v65[21]);
        FloatFromHalf(v65[20]);
        *(double *)_XMM0.v = FloatFromHalf(v65[19]);
        __asm
        {
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
        }
        viewInfo->input.sceneConstants.skySHr2 = _XMM1;
        FloatFromHalf(v65[27]);
        FloatFromHalf(v65[26]);
        FloatFromHalf(v65[25]);
        *(double *)_XMM0.v = FloatFromHalf(v65[24]);
        __asm
        {
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
        }
        viewInfo->input.sceneConstants.skySHg1 = _XMM1;
        FloatFromHalf(v65[31]);
        FloatFromHalf(v65[30]);
        FloatFromHalf(v65[29]);
        *(double *)_XMM0.v = FloatFromHalf(v65[28]);
        __asm
        {
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
        }
        viewInfo->input.sceneConstants.skySHg2 = _XMM1;
        FloatFromHalf(v65[36]);
        FloatFromHalf(v65[35]);
        FloatFromHalf(v65[34]);
        *(double *)_XMM0.v = FloatFromHalf(v65[33]);
        __asm
        {
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
        }
        viewInfo->input.sceneConstants.skySHb1 = _XMM1;
        FloatFromHalf(v65[40]);
        FloatFromHalf(v65[39]);
        FloatFromHalf(v65[38]);
        *(double *)_XMM0.v = FloatFromHalf(v65[37]);
        __asm
        {
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
        }
        viewInfo->input.sceneConstants.skySHb2 = _XMM1;
      }
    }
  }
  else
  {
    *(_QWORD *)viewInfo->input.sceneConstants.skyFlags.v = 0i64;
    *((_QWORD *)&viewInfo->input.sceneConstants.skyFlags.xyz.xy + 1) = 0i64;
  }
}

/*
==============
R_SetGlobalSkelTimeStamp
==============
*/
void R_SetGlobalSkelTimeStamp(int curTimeStamp, int maxTimeStampDifference)
{
  r_glob.curFrameSkelTimeStamp = curTimeStamp;
  r_glob.prevSkelTimeStampMaxDifference = maxTimeStampDifference;
}

/*
==============
R_SetGlobalViewProjectionMatrix
==============
*/
void R_SetGlobalViewProjectionMatrix(const refdef_t *refdef)
{
  GfxCamera camera; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mtx; 

  R_SetCameraForView(&refdef->view, &camera);
  MatrixForViewerOrthogonal(&camera.origin, &camera.axis, &mtx);
  InfinitePerspectiveMatrix(camera.tanHalfFovX, camera.tanHalfFovY, camera.zPlanes[2], &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixCopy44(&out, &rg.viewProjMatrix);
  InfinitePerspectiveMatrix(camera.tanHalfFovX, camera.tanHalfFovY, camera.zPlanes[0], &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixCopy44(&out, &rg.viewProjMatrixDepthHack);
}

/*
==============
R_SetHudOutlineRenderFlags
==============
*/
void R_SetHudOutlineRenderFlags(const GfxSceneHudOutlineInfo *hudOutlineInfo, unsigned int *renderFlags)
{
  const dvar_t *v2; 
  unsigned int v5; 

  v2 = DVARBOOL_r_hudOutlineEnable;
  if ( !DVARBOOL_r_hudOutlineEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && (*renderFlags & 0x8000) == 0 && (hudOutlineInfo->scopeStencil != 0.0 || hudOutlineInfo->color) )
  {
    v5 = *renderFlags | 2;
    *renderFlags = v5;
    if ( hudOutlineInfo->drawOccludedPixels )
      *renderFlags = v5 | 0x40000;
  }
}

/*
==============
R_SetInvViewScale
==============
*/
void R_SetInvViewScale(float invViewScale)
{
  rg.invViewScale = invViewScale;
}

/*
==============
R_SetLightScaleInfo
==============
*/
void R_SetLightScaleInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  float specularColorScale; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  const dvar_t *v14; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 

  v2 = r_secondaryDiffuseScale;
  if ( !r_secondaryDiffuseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v6 = r_secondarySpecularScale;
  if ( !r_secondarySpecularScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.value;
  v8 = value * s_world.draw.bakedLightScale;
  specularColorScale = rg.specularColorScale;
  viewInfo->input.sceneConstants.lightingScale.v[0] = rg.diffuseColorScale;
  viewInfo->input.sceneConstants.lightingScale.v[1] = specularColorScale;
  viewInfo->input.sceneConstants.lightingScale.v[2] = v8;
  viewInfo->input.sceneConstants.lightingScale.v[3] = v7;
  viewInfo->lightUVIntensityScale = sceneParms->lightUVIntensityScale;
  v10 = r_materialLodOverride;
  if ( !r_materialLodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  v12 = r_reflectionProbeForceNoParallax;
  v22 = v11;
  if ( !r_reflectionProbeForceNoParallax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.color[0];
  v14 = r_rimLightingLerp;
  _XMM0 = v13;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  if ( !r_rimLightingLerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v19 = v14->current.value;
  v20 = r_globalSecondarySelfVisScale;
  if ( !r_globalSecondarySelfVisScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v21 = v20->current.value;
  viewInfo->input.sceneConstants.debugLightingScale.v[2] = v19;
  viewInfo->input.sceneConstants.debugLightingScale.v[1] = v22;
  viewInfo->input.sceneConstants.debugLightingScale.v[3] = *(float *)&_XMM0;
  viewInfo->input.sceneConstants.debugLightingScale.v[0] = v21;
}

/*
==============
R_SetLodOrigin
==============
*/
void R_SetLodOrigin(const refdef_t *refdef, float lodOverride)
{
  const dvar_t *v3; 
  float value; 
  int time; 

  if ( r_lockPvs->modified )
  {
    Dvar_ClearModified(r_lockPvs);
    R_SetViewParmsForScene(refdef, NULL, &lockPvsViewParms);
    lockPvsViewParms.camera.tanHalfFovY = refdef->view.fov.tanHalfFovY;
  }
  if ( !g_previousFrameViewParmsIsValid[refdef->localClientNum][0] )
  {
    rg.lodParms.ugbInvFovScaleModifier = FLOAT_1_0;
    rg.correctedLodParms.ugbInvFovScaleModifier = FLOAT_1_0;
  }
  R_DumpLODInfo(&refdef->view, 0);
  R_UpdateLodParmsInternal(&refdef->view, &rg.lodParms, lodOverride, 0.0);
  v3 = DVARFLT_r_sceneResLodScale;
  if ( !DVARFLT_r_sceneResLodScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResLodScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  R_DumpLODInfo(&refdef->view, 1);
  R_UpdateLodParmsInternal(&refdef->view, &rg.correctedLodParms, lodOverride, value);
  scene.def.viewOffsetPrev = refdef->viewOffsetPrev;
  scene.def.viewOffset = refdef->viewOffset;
  time = refdef->time;
  scene.def.floatTime = (float)time * 0.001;
  scene.def.time = time;
}

/*
==============
R_SetPerceptualInfo
==============
*/
void R_SetPerceptualInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  bool v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  float value; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const char *v11; 

  v4 = viewInfo->thermalParams.useNightAndThermalVisionCombo && !viewInfo->thermalParams.useScopedNVG;
  v5 = DCONST_DVARBOOL_r_veilUseTweaks;
  if ( !DCONST_DVARBOOL_r_veilUseTweaks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilUseTweaks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    if ( v4 )
    {
      v6 = DCONST_DVARFLT_r_nvg_veilStrength;
      if ( !DCONST_DVARFLT_r_nvg_veilStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvg_veilStrength") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      viewInfo->perceptual.veilEnabled = v6->current.value > 0.0;
      v7 = DCONST_DVARFLT_r_nvg_veilStrength;
      if ( !DCONST_DVARFLT_r_nvg_veilStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvg_veilStrength") )
        __debugbreak();
    }
    else
    {
      v9 = DCONST_DVARFLT_r_veilStrength;
      if ( !DCONST_DVARFLT_r_veilStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilStrength") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      viewInfo->perceptual.veilEnabled = v9->current.value > 0.0;
      v7 = DCONST_DVARFLT_r_veilStrength;
      if ( !DCONST_DVARFLT_r_veilStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilStrength") )
        __debugbreak();
    }
    Dvar_CheckFrontendServerThread(v7);
    value = v7->current.value;
  }
  else
  {
    viewInfo->perceptual.veilEnabled = sceneParms->perceptual.veilStrength > 0.0;
    value = sceneParms->perceptual.veilStrength;
  }
  viewInfo->perceptual.veilStrength = value;
  if ( v4 )
  {
    v10 = DCONST_DVARBOOL_r_nvg_veil;
    if ( DCONST_DVARBOOL_r_nvg_veil )
      goto LABEL_32;
    v11 = "r_nvg_veil";
  }
  else
  {
    v10 = DCONST_DVARBOOL_r_veil;
    if ( DCONST_DVARBOOL_r_veil )
      goto LABEL_32;
    v11 = "r_veil";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v11) )
    __debugbreak();
LABEL_32:
  Dvar_CheckFrontendServerThread(v10);
  if ( rg.debugShaderEnabled || !v10->current.enabled )
  {
    viewInfo->perceptual.veilEnabled = 0;
    viewInfo->perceptual.veilStrength = 0.0;
  }
}

/*
==============
R_SetSceneParms
==============
*/
void R_SetSceneParms(const refdef_t *refdef, GfxSceneParms *sceneParms)
{
  float blurRadius; 
  GfxFog *p_fog; 
  __int64 v6; 
  GfxFog *v7; 
  __int128 v8; 
  GfxShieldEffectState *p_shieldEffect; 
  GfxShieldEffectState *v10; 
  __int64 v11; 
  __int128 v12; 

  if ( !refdef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9841, ASSERT_TYPE_ASSERT, "(refdef)", (const char *)&queryFormat, "refdef") )
    __debugbreak();
  if ( !sceneParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9842, ASSERT_TYPE_ASSERT, "(sceneParms)", (const char *)&queryFormat, "sceneParms") )
    __debugbreak();
  blurRadius = refdef->blurRadius;
  if ( blurRadius < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9843, ASSERT_TYPE_ASSERT, "( ( refdef->blurRadius >= 0.0f ) )", "( refdef->blurRadius ) = %g", blurRadius) )
    __debugbreak();
  p_fog = &sceneParms->fog;
  sceneParms->lightUVIntensityScale = refdef->lightTweakUVIntensityScale;
  v6 = 2i64;
  *(double *)&sceneParms->chromaticAberration.radius = *(double *)&refdef->chromaticAberration.radius;
  sceneParms->chromaticAberration.aberration = refdef->chromaticAberration.aberration;
  v7 = &refdef->fog;
  do
  {
    p_fog = (GfxFog *)((char *)p_fog + 128);
    v8 = *(_OWORD *)v7->maxOpticalDepth.v;
    v7 = (GfxFog *)((char *)v7 + 128);
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[3].data.fogStartDist = v8;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[4].image = *(_OWORD *)&v7[-1].fogSplineBlendEntry[4].image;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[4].data.fogMaxDistance = *(_OWORD *)&v7[-1].fogSplineBlendEntry[4].data.fogMaxDistance;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[5].data.fogStartDist = *(_OWORD *)&v7[-1].fogSplineBlendEntry[5].data.fogStartDist;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[6].image = *(_OWORD *)&v7[-1].fogSplineBlendEntry[6].image;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[6].data.fogMaxDistance = *(_OWORD *)&v7[-1].fogSplineBlendEntry[6].data.fogMaxDistance;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[7].data.fogStartDist = *(_OWORD *)&v7[-1].fogSplineBlendEntry[7].data.fogStartDist;
    *(_OWORD *)&p_fog[-1].fogSplineBlendCount = *(_OWORD *)&v7[-1].fogSplineBlendCount;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)p_fog->maxOpticalDepth.v = *(_OWORD *)v7->maxOpticalDepth.v;
  *(_OWORD *)p_fog->rayleighCoeffs.v = *(_OWORD *)v7->rayleighCoeffs.v;
  *(_QWORD *)p_fog->mieCoeffs.v = *(_QWORD *)v7->mieCoeffs.v;
  *(_OWORD *)sceneParms->brCircle.volumetricInnerColor.v = *(_OWORD *)refdef->brCircle.volumetricInnerColor.v;
  *(_OWORD *)&sceneParms->brCircle.volumetricOuterColor.y = *(_OWORD *)&refdef->brCircle.volumetricOuterColor.y;
  *(_OWORD *)&sceneParms->brCircle.distanceInnerColor.z = *(_OWORD *)&refdef->brCircle.distanceInnerColor.z;
  *(_OWORD *)sceneParms->brCircle.perceptualTint.v = *(_OWORD *)refdef->brCircle.perceptualTint.v;
  *(_OWORD *)&sceneParms->brCircle.position.y = *(_OWORD *)&refdef->brCircle.position.y;
  *(_OWORD *)&sceneParms->brCircle.fogInset = *(_OWORD *)&refdef->brCircle.fogInset;
  *(_OWORD *)&sceneParms->brCircle.distanceHeightFalloff = *(_OWORD *)&refdef->brCircle.distanceHeightFalloff;
  *(_OWORD *)&sceneParms->brCircle.skyDistanceMultiplier = *(_OWORD *)&refdef->brCircle.skyDistanceMultiplier;
  *(_OWORD *)&sceneParms->brCircle.distanceHeightViewBlend = *(_OWORD *)&refdef->brCircle.distanceHeightViewBlend;
  *(_OWORD *)&sceneParms->brCircle.densityNoiseScale = *(_OWORD *)&refdef->brCircle.densityNoiseScale;
  sceneParms->brCircle.densityScrollingSpeed = refdef->brCircle.densityScrollingSpeed;
  sceneParms->frameTime = refdef->frameTime;
  sceneParms->localClientNum = refdef->localClientNum;
  *(double *)&sceneParms->dualViewScopeState.m_fade = *(double *)&refdef->dualViewScopeState.m_fade;
  sceneParms->dualViewScopeState.hipFstop = refdef->dualViewScopeState.hipFstop;
  sceneParms->blurRadius = refdef->blurRadius;
  sceneParms->uiBlur = refdef->uiBlur;
  sceneParms->daltonizeMode = refdef->daltonizeMode;
  sceneParms->daltonizeTargets = refdef->daltonizeTargets;
  *(__m256i *)&sceneParms->dofPhysical.enabled = *(__m256i *)&refdef->dofPhysical.enabled;
  sceneParms->dofPhysical.viewModelFocusDistance = refdef->dofPhysical.viewModelFocusDistance;
  sceneParms->shellshock = refdef->shellshock;
  *(_OWORD *)&sceneParms->lensProfile.mode = *(_OWORD *)&refdef->lensProfile.mode;
  sceneParms->lensProfile.UVScale = refdef->lensProfile.UVScale;
  *(double *)&sceneParms->radialMotionBlur.enabled = *(double *)&refdef->radialMotionBlur.enabled;
  sceneParms->radialMotionBlur.strength = refdef->radialMotionBlur.strength;
  sceneParms->viewmodelMotionBlurOverride = refdef->viewmodelMotionBlurOverride;
  sceneParms->worldMotionBlurOverride = refdef->worldMotionBlurOverride;
  *(__m256i *)&sceneParms->volumeLightScatter.enabled = *(__m256i *)&refdef->volumeLightScatter.enabled;
  *(double *)&sceneParms->volumeLightScatter.depthAttenuation.y = *(double *)&refdef->volumeLightScatter.depthAttenuation.y;
  *(__m256i *)&sceneParms->volumetrics.enabled = *(__m256i *)&refdef->volumetrics.enabled;
  *(__m256i *)&sceneParms->volumetrics.omniBrightness = *(__m256i *)&refdef->volumetrics.omniBrightness;
  *(_OWORD *)&sceneParms->volumetrics.heightFogBaseHeight = *(_OWORD *)&refdef->volumetrics.heightFogBaseHeight;
  sceneParms->sunshadowSoftness = refdef->sunshadowSoftness;
  sceneParms->sunshadowSampleSizeNear = refdef->sunshadowSampleSizeNear;
  *(__m256i *)&sceneParms->cloudShadow.lookupMatrix[0][0] = *(__m256i *)&refdef->cloudShadow.lookupMatrix[0][0];
  *(_OWORD *)&sceneParms->cloudShadow.scale = *(_OWORD *)&refdef->cloudShadow.scale;
  *(double *)&sceneParms->cloudShadow.min = *(double *)&refdef->cloudShadow.min;
  *(__m256i *)&sceneParms->thermalParams.useNightAndThermalVisionCombo = *(__m256i *)&refdef->thermalParams.useNightAndThermalVisionCombo;
  *(__m256i *)&sceneParms->thermalParams.thermalFogExtinctionWeight = *(__m256i *)&refdef->thermalParams.thermalFogExtinctionWeight;
  *(_OWORD *)&sceneParms->thermalParams.thermalHotColor.z = *(_OWORD *)&refdef->thermalParams.thermalHotColor.z;
  sceneParms->thermalParams.thermalRadiationLut = refdef->thermalParams.thermalRadiationLut;
  *(_OWORD *)&sceneParms->screenSpaceShadows.spotOmniScreenSpaceshadowSamplesTotal = *(_OWORD *)&refdef->screenSpaceShadows.spotOmniScreenSpaceshadowSamplesTotal;
  *(double *)&sceneParms->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDelta = *(double *)&refdef->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDelta;
  sceneParms->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta = refdef->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta;
  *(_OWORD *)&sceneParms->eyeVirtualHighlight.eyeHighlightIntensity = *(_OWORD *)&refdef->eyeVirtualHighlight.eyeHighlightIntensity;
  *(double *)&sceneParms->eyeVirtualHighlight.eyeHighlightBulbRadius = *(double *)&refdef->eyeVirtualHighlight.eyeHighlightBulbRadius;
  sceneParms->eyeVirtualHighlight.eyeHighlightHeading = refdef->eyeVirtualHighlight.eyeHighlightHeading;
  sceneParms->mdaoCullDistance = refdef->mdaoCullDistance;
  sceneParms->mdaoFadeoutDistance = refdef->mdaoFadeoutDistance;
  sceneParms->mdaoBoneSizeThreshold = refdef->mdaoBoneSizeThreshold;
  *(__m256i *)sceneParms->waterSheetingFx.distortionScale.v = *(__m256i *)refdef->waterSheetingFx.distortionScale.v;
  *(_OWORD *)&sceneParms->waterSheetingFx.startMSec = *(_OWORD *)&refdef->waterSheetingFx.startMSec;
  sceneParms->digitalDistort = refdef->digitalDistort;
  *(_OWORD *)&sceneParms->analogEffects.analogRewindAmount = *(_OWORD *)&refdef->analogEffects.analogRewindAmount;
  sceneParms->analogEffects.analogChromaSeparationEffectAmount = refdef->analogEffects.analogChromaSeparationEffectAmount;
  *(__m256i *)&sceneParms->droneCameraEffects.pixelSize = *(__m256i *)&refdef->droneCameraEffects.pixelSize;
  *(__m256i *)&sceneParms->droneCameraEffects.deformScreenThreshold = *(__m256i *)&refdef->droneCameraEffects.deformScreenThreshold;
  *(__m256i *)&sceneParms->droneCameraEffects.scanline2_InterpolationPower = *(__m256i *)&refdef->droneCameraEffects.scanline2_InterpolationPower;
  *(_OWORD *)&sceneParms->droneCameraEffects.zoomUV = *(_OWORD *)&refdef->droneCameraEffects.zoomUV;
  sceneParms->playerTeleported = refdef->playerTeleported;
  *(_OWORD *)&sceneParms->colorGrading.clutSet.m_clutCount = *(_OWORD *)&refdef->colorGrading.clutSet.m_clutCount;
  *(_OWORD *)sceneParms->colorGrading.clutSet.m_clutArray = *(_OWORD *)refdef->colorGrading.clutSet.m_clutArray;
  *(_OWORD *)&sceneParms->colorGrading.clutSet.m_clutArray[2] = *(_OWORD *)&refdef->colorGrading.clutSet.m_clutArray[2];
  *(_OWORD *)&sceneParms->colorGrading.clutSet.m_clutArray[4] = *(_OWORD *)&refdef->colorGrading.clutSet.m_clutArray[4];
  *(_OWORD *)&sceneParms->colorGrading.clutSet.m_clutArray[6] = *(_OWORD *)&refdef->colorGrading.clutSet.m_clutArray[6];
  *(_OWORD *)sceneParms->colorGrading.colorGradingAnalytical.keyPositions = *(_OWORD *)refdef->colorGrading.colorGradingAnalytical.keyPositions;
  *(_OWORD *)&sceneParms->colorGrading.colorGradingAnalytical.keyMidpoints[1] = *(_OWORD *)&refdef->colorGrading.colorGradingAnalytical.keyMidpoints[1];
  *(_OWORD *)&sceneParms->colorGrading.colorGradingAnalytical.key[0].saturation = *(_OWORD *)&refdef->colorGrading.colorGradingAnalytical.key[0].saturation;
  *(_OWORD *)&sceneParms->colorGrading.colorGradingAnalytical.key[1].saturation = *(_OWORD *)&refdef->colorGrading.colorGradingAnalytical.key[1].saturation;
  *(_OWORD *)&sceneParms->colorGrading.colorGradingAnalytical.key[2].saturation = *(_OWORD *)&refdef->colorGrading.colorGradingAnalytical.key[2].saturation;
  *(_OWORD *)&sceneParms->colorGrading.colorGradingAnalytical.lift.z = *(_OWORD *)&refdef->colorGrading.colorGradingAnalytical.lift.z;
  *(_OWORD *)sceneParms->colorGrading.colorGradingAnalytical.gain.v = *(_OWORD *)refdef->colorGrading.colorGradingAnalytical.gain.v;
  sceneParms->nvgColorGrading = refdef->nvgColorGrading;
  sceneParms->ssao.strength = refdef->ssao.strength;
  *(__m256i *)&sceneParms->tonemap.enabled = *(__m256i *)&refdef->tonemap.enabled;
  *(__m256i *)&sceneParms->tonemap.midEv = *(__m256i *)&refdef->tonemap.midEv;
  *(_OWORD *)&sceneParms->tonemap.localStrength = *(_OWORD *)&refdef->tonemap.localStrength;
  *(double *)&sceneParms->tonemap.whitePoint.z = *(double *)&refdef->tonemap.whitePoint.z;
  p_shieldEffect = &sceneParms->shieldEffect;
  sceneParms->perceptual = refdef->perceptual;
  v10 = &refdef->shieldEffect;
  sceneParms->whiteBalance = refdef->whiteBalance;
  *(_OWORD *)&sceneParms->rimLighting.rimLightScale = *(_OWORD *)&refdef->rimLighting.rimLightScale;
  *(double *)&sceneParms->rimLighting.EVCompBounds = *(double *)&refdef->rimLighting.EVCompBounds;
  v11 = 5i64;
  do
  {
    p_shieldEffect = (GfxShieldEffectState *)((char *)p_shieldEffect + 128);
    v12 = *(_OWORD *)&v10->m_shieldEffectmode;
    v10 = (GfxShieldEffectState *)((char *)v10 + 128);
    *(_OWORD *)&p_shieldEffect[-1].m_shieldHitArray[25].m_maxRadius = v12;
    *(_OWORD *)&p_shieldEffect[-1].m_shieldHitArray[26].m_startTimeMS = *(_OWORD *)&v10[-1].m_shieldHitArray[26].m_startTimeMS;
    *(_OWORD *)&p_shieldEffect[-1].m_shieldHitArray[27].m_elapsedTimeNormalized = *(_OWORD *)&v10[-1].m_shieldHitArray[27].m_elapsedTimeNormalized;
    *(_OWORD *)&p_shieldEffect[-1].m_shieldHitArray[28].m_yPos = *(_OWORD *)&v10[-1].m_shieldHitArray[28].m_yPos;
    *(_OWORD *)&p_shieldEffect[-1].m_shieldHitArray[29].m_xPos = *(_OWORD *)&v10[-1].m_shieldHitArray[29].m_xPos;
    *(_OWORD *)&p_shieldEffect[-1].m_shieldHitArray[29].m_maxRadius = *(_OWORD *)&v10[-1].m_shieldHitArray[29].m_maxRadius;
    *(_OWORD *)&p_shieldEffect[-1].m_shieldHitArray[30].m_startTimeMS = *(_OWORD *)&v10[-1].m_shieldHitArray[30].m_startTimeMS;
    *(_OWORD *)&p_shieldEffect[-1].m_shieldHitArray[31].m_elapsedTimeNormalized = *(_OWORD *)&v10[-1].m_shieldHitArray[31].m_elapsedTimeNormalized;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)&p_shieldEffect->m_shieldEffectmode = *(_QWORD *)&v10->m_shieldEffectmode;
  p_shieldEffect->m_shieldHitArray[0].m_xPos = v10->m_shieldHitArray[0].m_xPos;
  sceneParms->skyBlendAmount = refdef->skyBlendAmount;
  sceneParms->skyBlendFeather = refdef->skyBlendFeather;
  sceneParms->skyIlluminationRadialDistanceBias = refdef->skyIlluminationRadialDistanceBias;
  sceneParms->deferredScreenshotIndex = refdef->deferredScreenshotIndex;
  *(_DWORD *)&sceneParms->sceneRtWidth = 0;
  sceneParms->visionSetToolConnected = refdef->visionSetToolConnected;
  *(__m256i *)&sceneParms->depthScanParams.enabled = *(__m256i *)&refdef->depthScanParams.enabled;
  *(__m256i *)&sceneParms->depthScanParams.scrollParams.xyz.z = *(__m256i *)&refdef->depthScanParams.scrollParams.xyz.z;
  *(vec4_t *)((char *)&sceneParms->depthScanParams.outlineColor + 8) = *(vec4_t *)((char *)&refdef->depthScanParams.outlineColor + 8);
  *(double *)&sceneParms->depthScanParams.overlayColor.xyz.z = *(double *)&refdef->depthScanParams.overlayColor.xyz.z;
  *(_OWORD *)&sceneParms->dustParmas.dustHeading = *(_OWORD *)&refdef->dust.dustHeading;
  *(double *)&sceneParms->dustParmas.dustPowerCurve = *(double *)&refdef->dust.dustPowerCurve;
  sceneParms->dustParmas.dustSmoothMax = refdef->dust.dustSmoothMax;
  *(__m256i *)&sceneParms->vignette.intensity = *(__m256i *)&refdef->vignette.intensity;
  *(_OWORD *)sceneParms->vignette.offset.v = *(_OWORD *)refdef->vignette.offset.v;
  sceneParms->decalVolumes.drawDistance = refdef->decalVolumes.drawDistance;
  sceneParms->lightingFraction.bias = refdef->lightingFraction.bias;
}

/*
==============
R_SetScreenSpaceReflectionInfo
==============
*/
void R_SetScreenSpaceReflectionInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  float value; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float height; 
  float v10; 
  float width; 
  __int64 v12; 
  float v13; 
  float x; 
  float v15; 
  float y; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v37; 

  viewInfo->input.sceneConstants.ssrMaskWrite = rg.ssrMode >= 2u;
  MatrixTranspose44Aligned(&viewInfo->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &viewInfo->input.sceneConstants.ssrViewProjectionMatrix.m);
  value = r_ssrPositionCorrection->current.value;
  v5 = (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1] - viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[1]) * value;
  v6 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[2];
  viewInfo->input.sceneConstants.prevEyePositionTransform.v[0] = (float)(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[0]) * value;
  viewInfo->input.sceneConstants.prevEyePositionTransform.v[1] = v5;
  viewInfo->input.sceneConstants.prevEyePositionTransform.v[2] = v6 * value;
  viewInfo->input.sceneConstants.prevEyePositionTransform.v[3] = value;
  viewInfo->input.sceneConstants.ssrPrevFrameViewProjectionMatrixR0 = viewInfo->prevFrameViewParms.viewProjectionMatrix.m.m[0];
  viewInfo->input.sceneConstants.ssrPrevFrameViewProjectionMatrixR1 = viewInfo->prevFrameViewParms.viewProjectionMatrix.m.row1;
  viewInfo->input.sceneConstants.ssrPrevFrameViewProjectionMatrixR2 = viewInfo->prevFrameViewParms.viewProjectionMatrix.m.row2;
  viewInfo->input.sceneConstants.ssrPrevFrameViewProjectionMatrixR3 = viewInfo->prevFrameViewParms.viewProjectionMatrix.m.row3;
  v7 = 1.0 / (float)sceneParms->sceneRtWidth;
  v8 = 1.0 / (float)sceneParms->sceneRtHeight;
  height = (float)viewInfo->sceneViewport.height;
  v10 = height * v8;
  width = (float)viewInfo->sceneViewport.width;
  v12 = 3573i64;
  v13 = (float)(width * v7) * 0.5;
  x = (float)viewInfo->sceneViewport.x;
  v15 = x * v7;
  y = (float)viewInfo->sceneViewport.y;
  v17 = (float)(y * v8) + (float)(v10 * 0.5);
  v18 = (float)viewInfo->scissorViewport.x;
  v19 = (float)viewInfo->scissorViewport.y;
  v20 = (float)viewInfo->scissorViewport.width;
  v21 = viewInfo->scissorViewport.height;
  viewInfo->input.sceneConstants.distortionSampleLimitsPS.v[0] = (float)(v18 + 0.5) * v7;
  viewInfo->input.sceneConstants.distortionSampleLimitsPS.v[1] = (float)(v19 + 0.5) * v8;
  v22 = (float)v21;
  viewInfo->input.sceneConstants.distortionSampleLimitsPS.v[2] = (float)((float)(v20 + v18) - 0.5) * v7;
  viewInfo->input.sceneConstants.distortionSampleLimitsPS.v[3] = (float)((float)(v22 + v19) - 0.5) * v8;
  if ( !viewInfo->ssrSourceSceneViewport.width )
    v12 = 304i64;
  v23 = (float)LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[0].v[v12]);
  v24 = (float)(v23 + 0.5) * v7;
  v25 = (float)LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[0].v[v12 + 1]);
  v26 = (float)LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[0].v[v12 + 2]);
  v27 = (float)(v25 + 0.5) * v8;
  v28 = (float)LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[0].v[v12 + 3]);
  v29 = (float)((float)(v26 + v23) - 0.5) * v7;
  _XMM10 = LODWORD(FLOAT_1_0);
  v31 = (float)((float)(v28 + v25) - 0.5) * v8;
  v32 = 1.0 / (float)(v29 - v24);
  v33 = 1.0 / (float)(v31 - v27);
  viewInfo->input.sceneConstants.ssrClipToFadeScaleOffsetPS.v[0] = (float)(v13 * 2.0) * v32;
  viewInfo->input.sceneConstants.ssrClipToFadeScaleOffsetPS.v[1] = v10 * v33;
  viewInfo->input.sceneConstants.ssrClipToFadeScaleOffsetPS.v[2] = (float)((float)((float)((float)(v15 + v13) * 2.0) - v24) - v29) * v32;
  viewInfo->input.sceneConstants.ssrClipToFadeScaleOffsetPS.v[3] = (float)((float)(v27 - (float)(v17 * 2.0)) + v31) * v33;
  v34 = (float)sceneParms->sceneRtWidth * v8;
  _XMM0 = rg.ssrMode;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  v37 = 0.0;
  __asm { vblendvps xmm0, xmm10, xmm3, xmm2 }
  if ( rg.ssrMode )
    v37 = viewInfo->ssrFade * r_ssrFadeInStrength->current.value;
  viewInfo->input.sceneConstants.ssrFadePS.v[3] = 0.0;
  viewInfo->input.sceneConstants.ssrFadePS.v[0] = v37 * v34;
  viewInfo->input.sceneConstants.ssrFadePS.v[2] = *(float *)&_XMM0;
  viewInfo->input.sceneConstants.ssrFadePS.v[1] = v34;
}

/*
==============
R_SetShadowConstants
==============
*/
void R_SetShadowConstants(GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow)
{
  GfxSunShadowProjection *p_sunProj; 
  __int64 v5; 
  float *v6; 
  vec2_t *eyeOffset; 
  signed __int64 v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float MapSize; 
  float v16; 
  float value; 
  float v18; 
  const dvar_t *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v26; 
  float v27; 
  __int128 v29; 
  unsigned int firstCachedSunShadowPartition; 
  float v32; 
  __int128 v34; 
  unsigned int v36; 
  float v37; 
  __int128 v39; 
  unsigned __int64 v41; 

  p_sunProj = &sunShadow->sunProj;
  v5 = 4i64;
  v6 = &viewInfo->input.sceneConstants.sunshadowSwitchPartition[0].v[2];
  eyeOffset = p_sunProj->eyeOffset;
  v8 = (char *)p_sunProj - (char *)viewInfo;
  do
  {
    ++eyeOffset;
    *(v6 - 2) = *(float *)((char *)v6 + v8 - 7432);
    *(v6 - 1) = *(float *)((char *)v6 + v8 - 7428);
    *v6 = *(float *)((char *)v6 + v8 - 7424);
    v6[1] = *(float *)((char *)v6 + v8 - 7420);
    v6 += 4;
    v6[10] = eyeOffset[-1].v[0];
    v6[11] = eyeOffset[-1].v[1];
    v6[26] = *(float *)((char *)v6 + v8 - 7352);
    v6[27] = *(float *)((char *)v6 + v8 - 7348);
    v6[28] = *(float *)((char *)v6 + v8 - 7344);
    v6[29] = *(float *)((char *)v6 + v8 - 7340);
    --v5;
  }
  while ( v5 );
  v9 = sunShadow->cloudShadow.lookupMatrix[2][0];
  v10 = sunShadow->cloudShadow.lookupMatrix[0][0];
  v11 = sunShadow->cloudShadow.lookupMatrix[3][0];
  viewInfo->input.sceneConstants.cloudShadowLookupMatrixR0.v[1] = sunShadow->cloudShadow.lookupMatrix[1][0];
  viewInfo->input.sceneConstants.cloudShadowLookupMatrixR0.v[2] = v9;
  viewInfo->input.sceneConstants.cloudShadowLookupMatrixR0.v[3] = v11;
  viewInfo->input.sceneConstants.cloudShadowLookupMatrixR0.v[0] = v10;
  v12 = sunShadow->cloudShadow.lookupMatrix[3][1];
  v13 = sunShadow->cloudShadow.lookupMatrix[2][1];
  v14 = sunShadow->cloudShadow.lookupMatrix[0][1];
  viewInfo->input.sceneConstants.cloudShadowLookupMatrixR1.v[1] = sunShadow->cloudShadow.lookupMatrix[1][1];
  viewInfo->input.sceneConstants.cloudShadowLookupMatrixR1.v[2] = v13;
  viewInfo->input.sceneConstants.cloudShadowLookupMatrixR1.v[3] = v12;
  viewInfo->input.sceneConstants.cloudShadowLookupMatrixR1.v[0] = v14;
  R_SetCloudShadowParams(&sunShadow->cloudShadow, viewInfo);
  MapSize = (float)R_SunShadow_GetMapSize();
  viewInfo->input.sceneConstants.sunShadowMapSize.v[0] = MapSize;
  viewInfo->input.sceneConstants.sunShadowMapSize.v[1] = MapSize;
  viewInfo->input.sceneConstants.sunShadowMapSize.v[2] = 1.0 / MapSize;
  viewInfo->input.sceneConstants.sunShadowMapSize.v[3] = 1.0 / MapSize;
  if ( sm_sunPoissonFiltering->current.enabled )
  {
    viewInfo->input.sceneConstants.sunShadowMapFilterRadius.v[0] = sunShadow->filterRadius.v[0];
    viewInfo->input.sceneConstants.sunShadowMapFilterRadius.v[1] = sunShadow->filterRadius.v[1];
    viewInfo->input.sceneConstants.sunShadowMapFilterRadius.v[2] = sunShadow->filterRadius.v[2];
    v16 = sunShadow->filterRadius.v[3];
  }
  else
  {
    *(_QWORD *)viewInfo->input.sceneConstants.sunShadowMapFilterRadius.v = 0i64;
    viewInfo->input.sceneConstants.sunShadowMapFilterRadius.v[2] = 0.0;
    v16 = 0.0;
  }
  viewInfo->input.sceneConstants.sunShadowMapFilterRadius.v[3] = v16;
  if ( sm_sunStageBounds->current.enabled && viewInfo->stageInfo.activeStageValid && (value = sm_sunStageBoundsFeather->current.value, value > 0.0) )
  {
    v18 = 1.0 / value;
  }
  else
  {
    value = 0.0;
    v18 = 0.0;
  }
  viewInfo->input.sceneConstants.staticSunShadowPenumbra.v[0] = rg.sdfShadowPenumbra;
  viewInfo->input.sceneConstants.staticSunShadowPenumbra.v[1] = value;
  viewInfo->input.sceneConstants.staticSunShadowPenumbra.v[2] = v18;
  viewInfo->input.sceneConstants.staticSunShadowPenumbra.v[3] = 0.0;
  v19 = r_sunShadowParams;
  if ( !r_sunShadowParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v20 = v19->current.vector.v[3];
  v21 = v19->current.value;
  v22 = v19->current.vector.v[1];
  v23 = v19->current.vector.v[2] * 0.000015258789;
  viewInfo->input.sceneConstants.sunShadowParams.v[0] = v21;
  viewInfo->input.sceneConstants.sunShadowParams.v[1] = v22;
  viewInfo->input.sceneConstants.sunShadowParams.v[2] = v23;
  viewInfo->input.sceneConstants.sunShadowParams.v[3] = v20;
  _XMM0 = LODWORD(sunShadow->lightDir.v[2]);
  __asm { vmaxss  xmm1, xmm0, cs:__real@34000000 }
  v26 = 1.0 / *(float *)&_XMM1;
  if ( !rg.useCachedSunShadow || sunShadow->firstCachedSunShadowPartition || (v27 = (float)(1.0 / *(float *)&_XMM1) * sunShadow->partitionCache[-sunShadow->firstCachedSunShadowPartition].cachedLODRefDistance, v27 <= 0.0) )
  {
    _XMM0 = (vec4_t)_xmm;
  }
  else
  {
    v29 = v41;
    LODWORD(v29) = COERCE_UNSIGNED_INT(v21 / v27) ^ _xmm;
    _XMM0 = v29;
    __asm { vinsertps xmm0, xmm0, xmm2, 10h }
    v41 = *(_QWORD *)_XMM0.v;
  }
  viewInfo->input.sceneConstants.sunShadowDepthBlend[0] = _XMM0;
  if ( rg.useCachedSunShadow && (firstCachedSunShadowPartition = sunShadow->firstCachedSunShadowPartition, firstCachedSunShadowPartition <= 1) && sunShadow->lastCachedSunShadowPartition && (v32 = v26 * sunShadow->partitionCache[1 - firstCachedSunShadowPartition].cachedLODRefDistance, v32 > 0.0) )
  {
    v34 = v41;
    LODWORD(v34) = COERCE_UNSIGNED_INT(v21 / v32) ^ _xmm;
    _XMM0 = v34;
    __asm { vinsertps xmm0, xmm0, xmm2, 10h }
    v41 = *(_QWORD *)_XMM0.v;
  }
  else
  {
    _XMM0 = (vec4_t)_xmm;
  }
  viewInfo->input.sceneConstants.sunShadowDepthBlend[1] = _XMM0;
  if ( rg.useCachedSunShadow && (v36 = sunShadow->firstCachedSunShadowPartition, v36 <= 2) && sunShadow->lastCachedSunShadowPartition >= 2u && (v37 = v26 * sunShadow->partitionCache[2 - v36].cachedLODRefDistance, v37 > 0.0) )
  {
    v39 = v41;
    LODWORD(v39) = COERCE_UNSIGNED_INT(v21 / v37) ^ _xmm;
    _XMM0 = v39;
    __asm { vinsertps xmm0, xmm0, xmm2, 10h }
  }
  else
  {
    _XMM0 = (vec4_t)_xmm;
  }
  viewInfo->input.sceneConstants.sunShadowDepthBlend[2] = _XMM0;
  R_CompressedSunShadow_GetShaderGlobals(viewInfo, sunShadow, &viewInfo->input.sceneConstants.compressedSunShadowParams0, &viewInfo->input.sceneConstants.compressedSunShadowParams1);
}

/*
==============
R_SetTonemapInfo
==============
*/
void R_SetTonemapInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  float value; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  float localEvBounds; 
  const dvar_t *v20; 
  GfxColorimetry DisplayColorimetry; 
  double UniversalExposureAdjust; 
  float v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  char v27; 

  v4 = DVARBOOL_r_tonemapUseTweaks;
  if ( !DVARBOOL_r_tonemapUseTweaks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUseTweaks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v5 = DVARBOOL_r_tonemap;
    if ( !DVARBOOL_r_tonemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    viewInfo->tonemap.enabled = v5->current.enabled;
    v6 = DVARBOOL_r_tonemapAuto;
    if ( !DVARBOOL_r_tonemapAuto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapAuto") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    viewInfo->tonemap.autoExposure = v6->current.enabled;
    v7 = DVARBOOL_r_tonemapBlend;
    if ( !DVARBOOL_r_tonemapBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapBlend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    viewInfo->tonemap.blendExposure = v7->current.enabled;
    v8 = DCONST_DVARBOOL_r_tonemapLockAutoExposureAdjust;
    if ( !DCONST_DVARBOOL_r_tonemapLockAutoExposureAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapLockAutoExposureAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    viewInfo->tonemap.lockAutoExposureAdjust = v8->current.enabled;
    v9 = DCONST_DVARFLT_r_tonemapAutoExposureAdjust;
    if ( !DCONST_DVARFLT_r_tonemapAutoExposureAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapAutoExposureAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    LODWORD(viewInfo->tonemap.userAutoExposureAdjust) = v9->current.integer;
    v10 = DCONST_DVARFLT_r_tonemapMaxExposure;
    if ( !DCONST_DVARFLT_r_tonemapMaxExposure && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapMaxExposure") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    LODWORD(viewInfo->tonemap.userMaxExposure) = v10->current.integer;
    v11 = DVARFLT_r_tonemapExposure;
    if ( !DVARFLT_r_tonemapExposure && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapExposure") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    LODWORD(viewInfo->tonemap.userExposure) = v11->current.integer;
    v12 = DVARFLT_r_tonemapExposureAdjust;
    if ( !DVARFLT_r_tonemapExposureAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapExposureAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    LODWORD(viewInfo->tonemap.userExposureAdjust) = v12->current.integer;
    v13 = DVARFLT_r_tonemapAdaptSpeed;
    if ( !DVARFLT_r_tonemapAdaptSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapAdaptSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    LODWORD(viewInfo->tonemap.adaptSpeed) = v13->current.integer;
    viewInfo->tonemap.darkEv = sceneParms->tonemap.darkEv;
    viewInfo->tonemap.midEv = sceneParms->tonemap.midEv;
    viewInfo->tonemap.lightEv = sceneParms->tonemap.lightEv;
    viewInfo->tonemap.darkExposureAdjust = sceneParms->tonemap.darkExposureAdjust;
    viewInfo->tonemap.midExposureAdjust = sceneParms->tonemap.midExposureAdjust;
    viewInfo->tonemap.lightExposureAdjust = sceneParms->tonemap.lightExposureAdjust;
    viewInfo->tonemap.minExposureAdjust = sceneParms->tonemap.minExposureAdjust;
    viewInfo->tonemap.maxExposureAdjust = sceneParms->tonemap.maxExposureAdjust;
    v14 = DVARFLT_r_tonemapGrainStrength;
    if ( !DVARFLT_r_tonemapGrainStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapGrainStrength") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
    v16 = DVARFLT_r_filmGrainAtten;
    if ( !DVARFLT_r_filmGrainAtten && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_filmGrainAtten") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    viewInfo->tonemap.grainStrength = value * v16->current.value;
    v17 = DVARFLT_r_tonemapLocalStrength;
    if ( !DVARFLT_r_tonemapLocalStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapLocalStrength") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    LODWORD(viewInfo->tonemap.localStrength) = v17->current.integer;
    v18 = DVARFLT_r_tonemapLocalEvBounds;
    if ( !DVARFLT_r_tonemapLocalEvBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapLocalEvBounds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    localEvBounds = v18->current.value;
  }
  else
  {
    viewInfo->tonemap.enabled = sceneParms->tonemap.enabled;
    viewInfo->tonemap.autoExposure = sceneParms->tonemap.autoExposure;
    viewInfo->tonemap.blendExposure = sceneParms->tonemap.blendExposure;
    viewInfo->tonemap.lockAutoExposureAdjust = sceneParms->tonemap.lockAutoExposureAdjust;
    viewInfo->tonemap.userAutoExposureAdjust = sceneParms->tonemap.userAutoExposureAdjust;
    viewInfo->tonemap.userMaxExposure = sceneParms->tonemap.userMaxExposure;
    viewInfo->tonemap.userExposure = sceneParms->tonemap.userExposure;
    viewInfo->tonemap.userExposureAdjust = sceneParms->tonemap.userExposureAdjust;
    viewInfo->tonemap.adaptSpeed = sceneParms->tonemap.adaptSpeed;
    viewInfo->tonemap.darkEv = sceneParms->tonemap.darkEv;
    viewInfo->tonemap.midEv = sceneParms->tonemap.midEv;
    viewInfo->tonemap.lightEv = sceneParms->tonemap.lightEv;
    viewInfo->tonemap.darkExposureAdjust = sceneParms->tonemap.darkExposureAdjust;
    viewInfo->tonemap.midExposureAdjust = sceneParms->tonemap.midExposureAdjust;
    viewInfo->tonemap.lightExposureAdjust = sceneParms->tonemap.lightExposureAdjust;
    viewInfo->tonemap.minExposureAdjust = sceneParms->tonemap.minExposureAdjust;
    viewInfo->tonemap.maxExposureAdjust = sceneParms->tonemap.maxExposureAdjust;
    v20 = DVARFLT_r_filmGrainAtten;
    if ( !DVARFLT_r_filmGrainAtten && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_filmGrainAtten") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    viewInfo->tonemap.grainStrength = v20->current.value * sceneParms->tonemap.grainStrength;
    viewInfo->tonemap.localStrength = sceneParms->tonemap.localStrength;
    localEvBounds = sceneParms->tonemap.localEvBounds;
  }
  viewInfo->tonemap.localEvBounds = localEvBounds;
  DisplayColorimetry = R_GetDisplayColorimetry();
  viewInfo->tonemap.tonemapModeExposureAdjust = 0.0;
  UniversalExposureAdjust = R_Tonemap_GetUniversalExposureAdjust();
  v23 = *(float *)&UniversalExposureAdjust + viewInfo->tonemap.tonemapModeExposureAdjust;
  viewInfo->tonemap.tonemapModeExposureAdjust = v23;
  viewInfo->tonemap.tonemapModeExposureAdjust = v23 + r_colorimetryUniversalTonemapExposureAdjust->current.value;
  v24 = DVARFLT_r_tonemapFocus;
  if ( !DVARFLT_r_tonemapFocus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapFocus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  LODWORD(viewInfo->tonemap.focus) = v24->current.integer;
  if ( DisplayColorimetry == GFX_COLORIMETRY_BT2020_PQ )
    viewInfo->tonemap.grainStrength = r_hdrFilmGrainStrengthScale->current.value * viewInfo->tonemap.grainStrength;
  v25 = DVARBOOL_r_tonemapUseTweaks;
  if ( !DVARBOOL_r_tonemapUseTweaks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUseTweaks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( !v25->current.enabled )
    goto LABEL_63;
  v26 = DVARBOOL_r_tonemapAdaptOnPause;
  if ( !DVARBOOL_r_tonemapAdaptOnPause && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapAdaptOnPause") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
    v27 = 1;
  else
LABEL_63:
    v27 = 0;
  if ( !((unsigned __int8)v27 | sceneParms->visionSetToolConnected) && !sceneParms->frameTime )
    viewInfo->tonemap.adaptSpeed = 0.0;
  viewInfo->tonemap.whitePoint.v[0] = sceneParms->tonemap.whitePoint.v[0];
  viewInfo->tonemap.whitePoint.v[1] = sceneParms->tonemap.whitePoint.v[1];
  viewInfo->tonemap.whitePoint.v[2] = sceneParms->tonemap.whitePoint.v[2];
  if ( rg.debugShaderEnabled )
  {
    viewInfo->tonemap.blendExposure = 0;
    if ( !rg.debugShaderLightingData )
    {
      viewInfo->tonemap.autoExposure = 0;
      *(_QWORD *)&viewInfo->tonemap.userExposure = 1092964166i64;
      viewInfo->tonemap.whitePoint.v[0] = 1.0;
      viewInfo->tonemap.whitePoint.v[1] = 1.0;
      viewInfo->tonemap.whitePoint.v[2] = 1.0;
    }
  }
  R_UpdateTonemapParms(viewInfo, sceneParms);
}

/*
==============
R_SetVelocityInfo
==============
*/
void R_SetVelocityInfo(GfxViewInfo *viewInfo, unsigned int sceneWidth, unsigned int sceneHeight)
{
  __int64 v3; 
  __int64 v5; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  GfxViewParms *DepthHackViewParms; 
  char *v10; 
  __int64 v11; 
  __m256i v12; 
  vec4_t v13; 
  __m256i v14; 
  __m256i v15; 
  float v16; 
  GfxViewParms *v17; 
  char *v18; 
  __int64 v19; 
  __m256i v20; 
  vec4_t v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  char v27[56]; 
  tmat44_t<vec4_t> v28; 
  GfxViewParms result; 
  vec3_t origin; 
  tmat44_t<vec4_t> v31; 
  tmat44_t<vec4_t> v32; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> v35; 
  tmat44_t<vec4_t> v36; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> v39; 
  tmat44_t<vec4_t> v40; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> v42; 
  tmat44_t<vec4_t> dst; 
  tmat44_t<vec4_t> v44; 
  tmat44_t<vec4_t> v45; 

  v3 = sceneHeight;
  v5 = sceneWidth;
  if ( viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[0] == 0.0 && viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[1] == 0.0 && viewInfo->viewParmsSet.frames[1].viewParms.subpixelOffset.v[0] == 0.0 && viewInfo->viewParmsSet.frames[1].viewParms.subpixelOffset.v[1] == 0.0 )
  {
    v6 = *(__m256i *)viewInfo->viewParms.projectionMatrix.m.row2.v;
    *(__m256i *)v35.m[0].v = *(__m256i *)viewInfo->viewParms.projectionMatrix.m.m[0].v;
    v7 = *(__m256i *)viewInfo->prevFrameViewParms.projectionMatrix.m.m[0].v;
    *(__m256i *)v35.row2.v = v6;
    v8 = *(__m256i *)viewInfo->prevFrameViewParms.projectionMatrix.m.row2.v;
    *(__m256i *)in2.m[0].v = v7;
    *(__m256i *)in2.row2.v = v8;
    *(__m256i *)in1.m[0].v = v7;
    *(__m256i *)in1.row2.v = v8;
    DepthHackViewParms = R_GetDepthHackViewParms(&result, &viewInfo->viewParmsSet.frames[1].viewParms);
    v10 = v27;
    v11 = 3i64;
    do
    {
      v10 += 128;
      v12 = *(__m256i *)DepthHackViewParms->viewMatrix.m.m[0].v;
      v13 = DepthHackViewParms->projectionMatrix.m.m[3];
      DepthHackViewParms = (GfxViewParms *)((char *)DepthHackViewParms + 128);
      *((__m256i *)v10 - 4) = v12;
      *((__m256i *)v10 - 3) = *(__m256i *)&DepthHackViewParms[-1].camera.axis.row1.z;
      *((__m256i *)v10 - 2) = *(__m256i *)DepthHackViewParms[-1].camera.zPlanes;
      *((_OWORD *)v10 - 2) = *(_OWORD *)&DepthHackViewParms[-1].camera.visibilityQueryDistance;
      *((vec4_t *)v10 - 1) = v13;
      --v11;
    }
    while ( v11 );
    v39 = v28;
  }
  else
  {
    v14 = *(__m256i *)viewInfo->viewParms.projectionMatrix.m.m[0].v;
    *(__m256i *)v35.row2.v = *(__m256i *)viewInfo->viewParms.projectionMatrix.m.row2.v;
    *(__m256i *)in1.row2.v = *(__m256i *)viewInfo->prevFrameViewParms.projectionMatrix.m.row2.v;
    *(__m256i *)v35.m[0].v = v14;
    v15 = *(__m256i *)viewInfo->prevFrameViewParms.projectionMatrix.m.m[0].v;
    in1.m[2].v[0] = 0.0;
    in1.m[2].v[1] = 0.0;
    v35.m[2].v[0] = 0.0;
    v35.m[2].v[1] = 0.0;
    *(__m256i *)in1.m[0].v = v15;
    MatrixIdentity44(&out);
    v16 = viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[1];
    out.m[3].v[0] = viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[0];
    out.m[3].v[1] = v16;
    MatrixMultiply44Aligned(&in1, &out, &in2);
    v17 = R_GetDepthHackViewParms(&result, &viewInfo->viewParmsSet.frames[1].viewParms);
    v18 = v27;
    v19 = 3i64;
    do
    {
      v18 += 128;
      v20 = *(__m256i *)v17->viewMatrix.m.m[0].v;
      v21 = v17->projectionMatrix.m.m[3];
      v17 = (GfxViewParms *)((char *)v17 + 128);
      *((__m256i *)v18 - 4) = v20;
      *((__m256i *)v18 - 3) = *(__m256i *)&v17[-1].camera.axis.row1.z;
      *((__m256i *)v18 - 2) = *(__m256i *)v17[-1].camera.zPlanes;
      *((_OWORD *)v18 - 2) = *(_OWORD *)&v17[-1].camera.visibilityQueryDistance;
      *((vec4_t *)v18 - 1) = v21;
      --v19;
    }
    while ( v19 );
    v36 = v28;
    v36.m[2].v[0] = 0.0;
    v36.m[2].v[1] = 0.0;
    MatrixIdentity44(&out);
    v22 = viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[1];
    out.m[3].v[0] = viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[0];
    out.m[3].v[1] = v22;
    MatrixMultiply44Aligned(&v36, &out, &v39);
  }
  MatrixForViewerOrthogonalNoOrigin(&viewInfo->viewParmsSet.frames[1].viewParms.camera.axis, &mtx);
  MatrixMultiply44Aligned(&mtx, &in2, &viewInfo->prevViewProjectionMatrix.m);
  MatrixMultiply44Aligned(&mtx, &v39, &viewInfo->prevDepthHackViewProjectionMatrix.m);
  v23 = viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[1] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  origin.v[0] = viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  origin.v[2] = viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[2] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  origin.v[1] = v23;
  MatrixForViewerOrthogonal(&origin, &viewInfo->viewParmsSet.frames[1].viewParms.camera.axis, &mtx);
  MatrixMultiply44Aligned(&mtx, &in1, &v42);
  origin.v[0] = 0.0;
  origin.v[1] = 0.0;
  origin.v[2] = 0.0;
  MatrixForViewerOrthogonal(&origin, &viewInfo->viewParmsSet.frames[0].viewParms.camera.axis, &v40);
  MatrixMultiply44Aligned(&v40, &v35, &mat);
  v24 = (float)v5;
  v25 = v24 * 0.5;
  v32.m[0].v[0] = 2.0 / v24;
  v26 = (float)v3;
  *(__m256i *)v32.row2.v = _ymm;
  v31.m[1].v[1] = v26 * -0.5;
  v31.row2 = (vec4_t)_xmm;
  v32.m[1].v[1] = -2.0 / v26;
  v31.m[3].v[3] = FLOAT_1_0;
  v32.m[1].v[2] = 0.0;
  v32.m[1].v[3] = 0.0;
  v31.m[0].v[0] = v25;
  v31.m[1].v[2] = 0.0;
  v31.m[1].v[3] = 0.0;
  v31.m[3].v[0] = v25;
  v31.m[3].v[1] = v26 * 0.5;
  v31.m[3].v[2] = 0.0;
  *(vec4_t *)((char *)&v32.row0 + 4) = 0i64;
  *(vec4_t *)((char *)&v31.row0 + 4) = 0i64;
  MatrixInverse44Aligned(&mat, &dst);
  MatrixMultiply44Aligned(&dst, &v42, &v44);
  MatrixMultiply44Aligned(&v32, &v44, &v45);
  MatrixMultiply44Aligned(&v45, &v31, &viewInfo->curToPrevPixelMatrix.m);
}

/*
==============
R_SetViewParmsForScene
==============
*/
void R_SetViewParmsForScene(const refdef_t *refdef, const GfxSceneViewParms *sceneViewParms, GfxViewParms *viewParms)
{
  __m256i v6; 
  float v7; 
  tmat44_t<vec4_t> out; 
  GfxMatrix in; 
  tmat44_t<vec4_t> dst; 

  memset_0(viewParms, 0, sizeof(GfxViewParms));
  if ( sceneViewParms )
  {
    viewParms->subpixelOffset.v[0] = sceneViewParms->subpixelOffset.v[0];
    viewParms->subpixelOffset.v[1] = sceneViewParms->subpixelOffset.v[1];
    viewParms->cameraMotion = sceneViewParms->cameraMotion;
  }
  R_SetCameraForView(&refdef->view, &viewParms->camera);
  MatrixForViewerOrthogonalNoOrigin(&viewParms->camera.axis, &viewParms->viewMatrix.m);
  InfinitePerspectiveMatrix(viewParms->camera.tanHalfFovX, viewParms->camera.tanHalfFovY, viewParms->camera.zPlanes[2], &viewParms->projectionMatrix.m);
  if ( viewParms->subpixelOffset.v[0] != 0.0 || viewParms->subpixelOffset.v[1] != 0.0 )
  {
    v6 = *(__m256i *)viewParms->projectionMatrix.m.row2.v;
    *(__m256i *)in.m.m[0].v = *(__m256i *)viewParms->projectionMatrix.m.m[0].v;
    *(__m256i *)in.m.row2.v = v6;
    R_ApplySubPixelOffset(&viewParms->subpixelOffset, &in, &viewParms->projectionMatrix);
  }
  MatrixMultiply44Aligned(&viewParms->viewMatrix.m, &viewParms->projectionMatrix.m, &viewParms->viewProjectionMatrix.m);
  MatrixInverse44Aligned(&viewParms->viewProjectionMatrix.m, &dst);
  MatrixIdentity44(&out);
  v7 = viewParms->camera.origin.v[1];
  out.m[3].v[0] = viewParms->camera.origin.v[0];
  out.m[3].v[2] = viewParms->camera.origin.v[2];
  out.m[3].v[1] = v7;
  MatrixMultiply44Aligned(&dst, &out, &viewParms->inverseViewProjectionMatrix.m);
}

/*
==============
R_SetVolumeLightScatterInfo
==============
*/
void R_SetVolumeLightScatterInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3475, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !sceneParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3476, ASSERT_TYPE_ASSERT, "(sceneParms)", (const char *)&queryFormat, "sceneParms") )
    __debugbreak();
  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x40000) != 0 )
  {
    viewInfo->volumeLightScatter.enabled = 0;
  }
  else
  {
    *(__m256i *)&viewInfo->volumeLightScatter.enabled = *(__m256i *)&sceneParms->volumeLightScatter.enabled;
    *(double *)&viewInfo->volumeLightScatter.depthAttenuation.y = *(double *)&sceneParms->volumeLightScatter.depthAttenuation.y;
  }
}

/*
==============
R_SetWhiteBalanceInfo
==============
*/
void R_SetWhiteBalanceInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  if ( r_whiteBalanceTweaks->current.enabled )
  {
    viewInfo->whiteBalance.method = r_whiteBalanceMethod->current.integer;
    viewInfo->whiteBalance.illuminant = r_whiteBalanceIlluminant->current.integer;
    LODWORD(viewInfo->whiteBalance.colorTempK) = r_whiteBalanceColorTempK->current.integer;
    LODWORD(viewInfo->whiteBalance.colorGreenMagentaShift) = r_whiteBalanceGreenMagentaShift->current.integer;
  }
  else
  {
    viewInfo->whiteBalance = sceneParms->whiteBalance;
  }
}

/*
==============
R_SetWorstCaseMinObjectContribution
==============
*/
void R_SetWorstCaseMinObjectContribution(const float umbraWorstCaseMinObjectContribution)
{
  if ( umbraWorstCaseMinObjectContribution < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10366, ASSERT_TYPE_ASSERT, "( umbraWorstCaseMinObjectContribution ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "umbraWorstCaseMinObjectContribution", "0.f", umbraWorstCaseMinObjectContribution, 0.0) )
    __debugbreak();
  if ( umbraWorstCaseMinObjectContribution != rg.umbraWorstCaseMinObjectContribution )
    Com_Printf(14, "R_SetWorstCaseMinObjectContribution changing from %f to %f\n", rg.umbraWorstCaseMinObjectContribution, umbraWorstCaseMinObjectContribution);
  rg.umbraWorstCaseMinObjectContribution = umbraWorstCaseMinObjectContribution;
}

/*
==============
R_Set_IsPipClientView
==============
*/
void R_Set_IsPipClientView(void)
{
  frontEndDataOut->isPIPClientView = 1;
}

/*
==============
R_SetupDefaultViewportFeatures
==============
*/
void R_SetupDefaultViewportFeatures(GfxViewportFeatures *outViewportFeatures)
{
  unsigned int v2; 

  outViewportFeatures->m_overrideClearColor = 0ui64;
  *(_QWORD *)&outViewportFeatures->m_ssaoModeOverride = 0i64;
  *(_QWORD *)&outViewportFeatures->m_taskGraphIndex = 0i64;
  *((_QWORD *)outViewportFeatures + 5) = 0i64;
  outViewportFeatures->m_viewportType = R_VIEWPORT_TYPE_MAIN_SCENE;
  v2 = *((_DWORD *)outViewportFeatures + 11) & 0xFFF7FE7F;
  outViewportFeatures->m_shadowMapTileResolution = GFX_SHADOW_TILE_RESOLUTION_NORMAL;
  *((_DWORD *)outViewportFeatures + 10) = -884875265;
  *((_DWORD *)outViewportFeatures + 11) = v2 | 0x187F;
  if ( Com_IsRunningTestmonkey() )
  {
    *((_DWORD *)outViewportFeatures + 10) |= 0x20000u;
    outViewportFeatures->m_ssaoModeOverride = GFX_SSAO_OFF;
  }
}

/*
==============
R_SetupDustConstants
==============
*/
void R_SetupDustConstants(GfxViewInfo *viewInfo)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  float dustPitch; 
  float dustHeading; 
  float v13; 
  float dustSmoothMax; 
  float dustSmoothMin; 
  float dustTiling; 
  float v17; 
  bool v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  float v34; 
  float v35; 
  float v36; 
  __int128 v37; 
  float v41; 
  float v42; 
  __int128 v43; 
  int v47; 
  Material *dustMaterial; 
  __int64 v49; 
  GfxImage *image; 
  TextureSemantic semantic; 
  vec3_t angles; 
  vec3_t forward; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 

  dustPitch = viewInfo->dustParams.dustPitch;
  dustHeading = viewInfo->dustParams.dustHeading;
  v62 = v1;
  v61 = v2;
  v60 = v3;
  v59 = v4;
  v58 = v5;
  v57 = v6;
  v56 = v7;
  v13 = 0.0;
  v55 = v8;
  v54 = v9;
  angles.v[0] = dustPitch;
  angles.v[1] = dustHeading;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &forward, NULL, NULL);
  dustSmoothMax = viewInfo->dustParams.dustSmoothMax;
  dustSmoothMin = viewInfo->dustParams.dustSmoothMin;
  dustTiling = viewInfo->dustParams.dustTiling;
  v17 = forward.v[0];
  v18 = forward.v[0] == 0.0;
  v19 = LODWORD(forward.v[1]);
  v20 = LODWORD(forward.v[2]);
  viewInfo->input.sceneConstants.dustShaderTiling.v[1] = viewInfo->dustParams.dustIntensity;
  viewInfo->input.sceneConstants.dustShaderTiling.v[2] = dustSmoothMin;
  viewInfo->input.sceneConstants.dustShaderTiling.v[3] = dustSmoothMax;
  viewInfo->input.sceneConstants.dustShaderTiling.v[0] = dustTiling;
  viewInfo->input.sceneConstants.dustShaderDirection.v[3] = viewInfo->dustParams.dustPowerCurve;
  viewInfo->input.sceneConstants.dustShaderDirection.v[0] = v17;
  viewInfo->input.sceneConstants.dustShaderDirection.v[1] = *(float *)&v19;
  viewInfo->input.sceneConstants.dustShaderDirection.v[2] = *(float *)&v20;
  if ( v18 )
  {
    v37 = v20;
    *(float *)&v37 = fsqrt((float)(*(float *)&v20 * *(float *)&v20) + (float)(COERCE_FLOAT(LODWORD(v17) ^ _xmm) * COERCE_FLOAT(LODWORD(v17) ^ _xmm)));
    _XMM2 = v37;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm9, xmm0
    }
    v36 = (float)(1.0 / *(float *)&_XMM0) * COERCE_FLOAT(LODWORD(v17) ^ _xmm);
    v34 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v20;
    v41 = (float)(*(float *)&v20 * v34) - (float)(v17 * v36);
    LODWORD(v42) = COERCE_UNSIGNED_INT(*(float *)&v19 * v34) ^ _xmm;
    v43 = v19;
    *(float *)&v43 = fsqrt((float)((float)((float)(*(float *)&v19 * v36) * (float)(*(float *)&v19 * v36)) + (float)(v41 * v41)) + (float)(v42 * v42));
    _XMM4 = v43;
    __asm { vcmpless xmm0, xmm4, cs:__real@80000000 }
    v35 = 0.0;
    __asm { vblendvps xmm0, xmm4, xmm9, xmm0 }
    v13 = (float)(1.0 / *(float *)&_XMM0) * (float)(*(float *)&v19 * v36);
    v26 = (float)(1.0 / *(float *)&_XMM0) * v41;
    v25 = (float)(1.0 / *(float *)&_XMM0) * v42;
  }
  else
  {
    v21 = v19 ^ _xmm;
    *(float *)&v21 = fsqrt((float)(*(float *)&v21 * *(float *)&v21) + (float)(*(float *)&v20 * *(float *)&v20));
    _XMM2 = v21;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm9, xmm0
    }
    v25 = COERCE_FLOAT(v19 ^ _xmm) * (float)(1.0 / *(float *)&_XMM0);
    v26 = *(float *)&v20 * (float)(1.0 / *(float *)&_XMM0);
    v27 = v17 * v25;
    v28 = v20;
    v29 = (float)(*(float *)&v20 * v26) - (float)(*(float *)&v19 * v25);
    LODWORD(v30) = COERCE_UNSIGNED_INT(v17 * v26) ^ _xmm;
    *(float *)&v28 = fsqrt((float)((float)(v29 * v29) + (float)(v27 * v27)) + (float)(v30 * v30));
    _XMM4 = v28;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm9, xmm0
    }
    v34 = v29 * (float)(1.0 / *(float *)&_XMM0);
    v35 = v27 * (float)(1.0 / *(float *)&_XMM0);
    v36 = v30 * (float)(1.0 / *(float *)&_XMM0);
  }
  v47 = 0;
  viewInfo->input.sceneConstants.dustShaderTangent.v[0] = v34;
  viewInfo->input.sceneConstants.dustShaderTangent.v[2] = v36;
  viewInfo->input.sceneConstants.dustShaderTangent.v[3] = 0.0;
  viewInfo->input.sceneConstants.dustShaderTangent.v[1] = v35;
  viewInfo->input.sceneConstants.dustShaderBinormal.v[0] = v13;
  viewInfo->input.sceneConstants.dustShaderBinormal.v[1] = v26;
  viewInfo->input.sceneConstants.dustShaderBinormal.v[2] = v25;
  viewInfo->input.sceneConstants.dustShaderBinormal.v[3] = 0.0;
  dustMaterial = rgp.world->dustMaterial;
  if ( dustMaterial && dustMaterial->textureCount )
  {
    v49 = 0i64;
    do
    {
      image = dustMaterial->textureTable[v49].image;
      semantic = image->semantic;
      if ( semantic == TS_METALNESS_MAP )
      {
        if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        viewInfo->input.codeImages[10] = image;
      }
      else if ( semantic == TS_NORMAL_OCCLUSION_GLOSS_MAP )
      {
        if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        viewInfo->input.codeImages[11] = image;
      }
      ++v47;
      ++v49;
      dustMaterial = rgp.world->dustMaterial;
    }
    while ( v47 < dustMaterial->textureCount );
  }
}

/*
==============
R_SetupGlobalRenderingFeatures
==============
*/
void R_SetupGlobalRenderingFeatures(int viewCount, bool frontend)
{
  bool v4; 
  const dvar_t *v5; 
  char v6; 
  const dvar_t *v7; 
  int integer; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  int v11; 
  int PostAAModeFromDvars; 
  PostAAMode v13; 
  bool v14; 
  __int64 v15; 

  R_TG_SetViewCount(viewCount);
  v4 = viewCount > 1;
  if ( viewCount <= 1 )
    goto LABEL_7;
  v5 = DCONST_DVARBOOL_r_splitscreenVelocityRendering;
  if ( !DCONST_DVARBOOL_r_splitscreenVelocityRendering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenVelocityRendering") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
LABEL_7:
    v6 = 0;
  else
    v6 = 1;
  v7 = DCONST_DVARINT_r_sceneResNative;
  if ( !DCONST_DVARINT_r_sceneResNative && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResNative") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  if ( frontend && integer == 1 || (rg.sceneResNative = 0, integer == 2) )
    rg.sceneResNative = 1;
  v9 = DVARBOOL_r_sceneResDynamic;
  if ( !DVARBOOL_r_sceneResDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled || (rg.sceneResDynamic = 1, rg.sceneResNative) )
    rg.sceneResDynamic = 0;
  if ( frontend || rg.sceneResNative )
    frontend = 1;
  v10 = DVARINT_r_sceneResMin;
  if ( !DVARINT_r_sceneResMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( frontend )
    v11 = v10->current.integer;
  else
    v11 = 15;
  Dvar_SetInt_Internal(DVARINT_r_sceneResMax, v11);
  PostAAModeFromDvars = R_GetPostAAModeFromDvars();
  v13 = PostAAModeFromDvars;
  if ( v6 )
  {
    if ( PostAAModeFromDvars < 0 )
      goto LABEL_35;
    if ( PostAAModeFromDvars <= 1 )
      goto LABEL_37;
    if ( PostAAModeFromDvars > 3 )
    {
LABEL_35:
      LODWORD(v15) = PostAAModeFromDvars;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11154, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(11154): unhandled case %d in switch statement", v15) )
        __debugbreak();
    }
    else
    {
      v13 = POST_AA_MODE_SMAA_1X;
    }
  }
LABEL_37:
  rg.postAAMode = v13;
  if ( v6 )
  {
    rg.ssaoMode = 0;
LABEL_39:
    rg.mbEnable = 0;
    goto LABEL_40;
  }
  rg.ssaoMode = r_ssao->current.unsignedInt;
  if ( !r_mbEnableA->current.enabled )
    goto LABEL_39;
  rg.mbEnable = r_mbEnable->current.integer;
  if ( rg.mbEnable > 0 )
  {
LABEL_45:
    v14 = 1;
    goto LABEL_46;
  }
LABEL_40:
  if ( R_PostAARequestVelocities(v13) || R_SSAO_RequestVelocities(rg.ssaoMode) )
    goto LABEL_45;
  v14 = 0;
LABEL_46:
  if ( !R_TG_GetEnabled() && v14 && v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11261, ASSERT_TYPE_ASSERT, "(!( needVelocity && splitscreen ))", (const char *)&queryFormat, "!( needVelocity && splitscreen )") )
    __debugbreak();
  rg.needVelocity = v14;
  R_UpdateFrontEndDvarOptions_Splitscreen(v4);
}

/*
==============
R_SetupPerspectiveViewProjectionMatrices
==============
*/
void R_SetupPerspectiveViewProjectionMatrices(GfxViewParms *viewParms, R_ZPLANES zPlaneNear)
{
  __int64 v3; 
  __m256i v4; 
  float v5; 
  tmat44_t<vec4_t> out; 
  GfxMatrix in; 
  tmat44_t<vec4_t> dst; 

  v3 = zPlaneNear;
  MatrixForViewerOrthogonalNoOrigin(&viewParms->camera.axis, &viewParms->viewMatrix.m);
  InfinitePerspectiveMatrix(viewParms->camera.tanHalfFovX, viewParms->camera.tanHalfFovY, viewParms->camera.zPlanes[v3], &viewParms->projectionMatrix.m);
  if ( viewParms->subpixelOffset.v[0] != 0.0 || viewParms->subpixelOffset.v[1] != 0.0 )
  {
    v4 = *(__m256i *)viewParms->projectionMatrix.m.row2.v;
    *(__m256i *)in.m.m[0].v = *(__m256i *)viewParms->projectionMatrix.m.m[0].v;
    *(__m256i *)in.m.row2.v = v4;
    R_ApplySubPixelOffset(&viewParms->subpixelOffset, &in, &viewParms->projectionMatrix);
  }
  MatrixMultiply44Aligned(&viewParms->viewMatrix.m, &viewParms->projectionMatrix.m, &viewParms->viewProjectionMatrix.m);
  MatrixInverse44Aligned(&viewParms->viewProjectionMatrix.m, &dst);
  MatrixIdentity44(&out);
  v5 = viewParms->camera.origin.v[1];
  out.m[3].v[0] = viewParms->camera.origin.v[0];
  out.m[3].v[2] = viewParms->camera.origin.v[2];
  out.m[3].v[1] = v5;
  MatrixMultiply44Aligned(&dst, &out, &viewParms->inverseViewProjectionMatrix.m);
}

/*
==============
R_SetupSceneCmdBufInput
==============
*/
void R_SetupSceneCmdBufInput(GfxViewInfo *viewInfo)
{
  GfxCmdBufInput *p_input; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  GfxWrappedBuffer *globalLightConstantBuffer; 
  GfxWrappedBuffer *globalShadowConstantBuffer; 
  GfxWrappedRWBuffer *p_wrappedBuffer; 
  GfxWrappedRWBuffer *v7; 
  const GfxWrappedBuffer *SubdomainMappingBuffer; 
  const GfxWrappedBuffer *InstanceBuffer; 
  const GfxWrappedBuffer *ObbBuffer; 
  const GfxWrappedRWBuffer *ClusterBuffer; 
  const GfxWrappedBuffer *ZBinBuffer; 
  const GfxWrappedBuffer *SHBuffer; 
  GfxWrappedBuffer *entityDataBuffer; 
  const GfxWrappedBuffer *LightBuffer; 
  const GfxWrappedBuffer *FrustumLightsZbinBuffer; 
  GfxWrappedRWBuffer *v17; 
  GfxWrappedRWBuffer *v18; 
  GfxWrappedBuffer *ReactiveMotionPivotsBuffer; 
  GfxWrappedBuffer *p_lmapTransformsBuffer; 
  const GfxWrappedRWBuffer *ModelDynamicIndirectionBuffer; 
  GfxWrappedBuffer *p_modelStaticIndirectionBuffer; 
  const GfxWrappedBuffer *ModelSurfDataBuffer; 
  GfxWrappedRWBuffer *p_smodelInstanceDataBuffer; 
  GfxWrappedRWBuffer *p_clutterTintDataBuffer; 
  GfxWrappedBuffer *p_splinedModelInstanceBuffer; 
  GfxWrappedBuffer *p_splineSegmentBuffer; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  GfxWrappedRWBuffer *p_dummyBuffer; 
  const GfxWrappedBuffer *ConstantBuffer; 
  const GfxWrappedBuffer *LightmapAtlasPackingBuffer; 
  GfxWrappedBuffer *Buffer; 
  GfxWrappedBuffer *p_surfDataBuffer; 
  GfxWrappedBuffer *p_perGlassVertexDataBuffer; 
  GfxImage *blackImage; 
  GfxWorld *world; 
  int heightfieldCount; 
  GfxImage *image; 
  GfxImage *heightMap; 
  GfxImage *detailMask; 
  GfxImage *SVDCoefficient; 
  GfxImage *SVDBasis; 
  GfxImage *v43; 
  GfxImage *v44; 
  GfxImage *blackImage3D; 
  const GfxImage *LightmapAtlasTexture; 
  const GfxImage *v47; 
  const GfxImage *v48; 
  const GfxImage *LightGridVolumeAtlasTexture; 
  const GfxImage *v50; 
  GfxImage *MagmaHeightfield; 

  p_input = &viewInfo->input;
  globalSceneConstantBuffer = viewInfo->input.data->globalSceneConstantBuffer;
  if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[0] = globalSceneConstantBuffer;
  globalLightConstantBuffer = viewInfo->input.data->globalLightConstantBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[0] = globalLightConstantBuffer;
  globalShadowConstantBuffer = viewInfo->input.data->globalShadowConstantBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[1] = globalShadowConstantBuffer;
  p_wrappedBuffer = &viewInfo->input.data->subdivCacheVb->wrappedBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[2] = p_wrappedBuffer;
  v7 = &viewInfo->input.data->tessFactorsBuffer->wrappedBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[3] = v7;
  SubdomainMappingBuffer = R_GetSubdomainMappingBuffer();
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[1] = SubdomainMappingBuffer;
  InstanceBuffer = R_ReflectionProbe_GetInstanceBuffer(viewInfo->input.data->reflectionProbeFrameIndex);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[4] = InstanceBuffer;
  ObbBuffer = R_ReflectionProbe_GetObbBuffer(viewInfo->input.data->reflectionProbeFrameIndex);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[5] = ObbBuffer;
  ClusterBuffer = R_ReflectionProbe_GetClusterBuffer();
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[6] = ClusterBuffer;
  ZBinBuffer = R_ReflectionProbe_GetZBinBuffer(viewInfo->input.data->reflectionProbeFrameIndex);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[7] = ZBinBuffer;
  SHBuffer = R_ReflectionProbe_GetSHBuffer();
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[2] = SHBuffer;
  R_SetDecalVolumeResources(viewInfo);
  entityDataBuffer = viewInfo->input.data->entityDataBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[8] = entityDataBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[47] = &gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[48] = &gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[49] = &gfxBuf.dummyBuffer;
  LightBuffer = R_GetFrustumLightsReadLightBuffer(viewInfo);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[9] = LightBuffer;
  FrustumLightsZbinBuffer = R_GetFrustumLightsZbinBuffer(viewInfo);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[12] = FrustumLightsZbinBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[6] = &gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[7] = &gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[8] = &gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[9] = &gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[23] = &gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[24] = &gfxBuf.unifiedVertexBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[25] = &gfxBuf.uvbVirtPageTableBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[26] = &gfxBuf.unifiedOptBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[27] = &gfxBuf.uobVirtPageTableBuffer;
  v17 = &viewInfo->input.data->skinnedCacheVb->wrappedBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[28] = v17;
  v18 = &viewInfo->input.data->mayhemChannelsVb->wrappedBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[29] = v18;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[31] = &gfxBuf.dummyBuffer;
  ReactiveMotionPivotsBuffer = R_GetReactiveMotionPivotsBuffer(viewInfo->input.data->reactiveMotionIndex);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[32] = ReactiveMotionPivotsBuffer;
  p_lmapTransformsBuffer = &rgp.world->smodels.lmapTransformsBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[10] = p_lmapTransformsBuffer;
  ModelDynamicIndirectionBuffer = R_ModelData_GetModelDynamicIndirectionBuffer(viewInfo->input.data->smpFrame);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[33] = ModelDynamicIndirectionBuffer;
  p_modelStaticIndirectionBuffer = &rgp.world->smodels.modelStaticIndirectionBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[34] = p_modelStaticIndirectionBuffer;
  ModelSurfDataBuffer = R_ModelData_GetModelSurfDataBuffer();
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[35] = ModelSurfDataBuffer;
  p_smodelInstanceDataBuffer = &rgp.world->smodels.smodelInstanceDataBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[36] = p_smodelInstanceDataBuffer;
  p_clutterTintDataBuffer = &rgp.world->smodels.clutterTintDataBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[11] = p_clutterTintDataBuffer;
  p_splinedModelInstanceBuffer = &rgp.world->smodels.splinedModelInstanceBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[37] = p_splinedModelInstanceBuffer;
  p_splineSegmentBuffer = &rgp.world->smodels.splineSegmentBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[38] = p_splineSegmentBuffer;
  if ( R_GetNumActiveLightGrids(viewInfo->input.data) > 0 )
  {
    ActiveLightGridsList = R_GetActiveLightGridsList(viewInfo->input.data);
    R_GpuLightGrid_SetResources(p_input, *ActiveLightGridsList, viewInfo->input.data->shLightingIndex);
  }
  R_LGV_SetCodeBuffers(p_input, viewInfo->input.data->shLightingIndex);
  if ( !rgp.world || (p_dummyBuffer = &rgp.world->mayhemSelfVis.selfVisBuffer, !rgp.world->mayhemSelfVis.selfVisBufferSize) )
    p_dummyBuffer = (GfxWrappedRWBuffer *)&gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[30] = p_dummyBuffer;
  ConstantBuffer = R_Tonemap_GetConstantBuffer(viewInfo);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[32] = ConstantBuffer;
  LightmapAtlasPackingBuffer = R_GetLightmapAtlasPackingBuffer(viewInfo->input.data, rgp.world->draw.lightmapType);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[39] = LightmapAtlasPackingBuffer;
  Buffer = R_CompressedSunShadow_GetBuffer();
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[40] = Buffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[41] = &gfxBuf.dummyBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[42] = &gfxBuf.dummyBuffer;
  p_surfDataBuffer = &rgp.world->surfaces.surfDataBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[44] = p_surfDataBuffer;
  p_perGlassVertexDataBuffer = &viewInfo->input.data->mesh[2].perGlassVertexDataBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[46] = p_perGlassVertexDataBuffer;
  blackImage = rgp.blackImage;
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
    blackImage = rgp.cloudNoiseImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[7] = blackImage;
  world = rgp.world;
  heightfieldCount = rgp.world->heightfieldCount;
  if ( heightfieldCount )
  {
    if ( heightfieldCount != rgp.world->voxelTreeCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5841, ASSERT_TYPE_ASSERT, "(rgp.world->heightfieldCount == rgp.world->voxelTreeCount)", (const char *)&queryFormat, "rgp.world->heightfieldCount == rgp.world->voxelTreeCount") )
        __debugbreak();
      world = rgp.world;
    }
    image = world->heightfields[viewInfo->input.voxelTreeZoneIndex].image;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[16] = image;
  }
  R_ST_SetCodeResources(p_input);
  if ( rgp.world->precomputedSkyIllumination.boxMax.v[0] <= rgp.world->precomputedSkyIllumination.boxMin.v[0] )
  {
    v43 = rgp.blackImage;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[17] = v43;
    v44 = rgp.blackImage;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[18] = v44;
    blackImage3D = rgp.blackImage3D;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[19] = blackImage3D;
    SVDBasis = rgp.blackImage;
  }
  else
  {
    heightMap = rgp.world->precomputedSkyIllumination.heightMap;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[17] = heightMap;
    detailMask = rgp.world->precomputedSkyIllumination.detailMask;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[18] = detailMask;
    SVDCoefficient = rgp.world->precomputedSkyIllumination.SVDCoefficient;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[19] = SVDCoefficient;
    SVDBasis = rgp.world->precomputedSkyIllumination.SVDBasis;
  }
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[20] = SVDBasis;
  LightmapAtlasTexture = R_GetLightmapAtlasTexture(viewInfo->input.data, rgp.world->draw.lightmapType, 0);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[28] = LightmapAtlasTexture;
  v47 = R_GetLightmapAtlasTexture(viewInfo->input.data, rgp.world->draw.lightmapType, 1u);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[29] = v47;
  v48 = R_GetLightmapAtlasTexture(viewInfo->input.data, rgp.world->draw.lightmapType, 2u);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[30] = v48;
  LightGridVolumeAtlasTexture = R_GetLightGridVolumeAtlasTexture(viewInfo->input.data, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[23] = LightGridVolumeAtlasTexture;
  v50 = R_GetLightGridVolumeAtlasTexture(viewInfo->input.data, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[24] = v50;
  MagmaHeightfield = (GfxImage *)Particle_GetMagmaHeightfield();
  if ( !MagmaHeightfield )
    MagmaHeightfield = rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[41] = MagmaHeightfield;
}

/*
==============
R_SetupSceneEntBounds
==============
*/
void R_SetupSceneEntBounds(GfxSceneEntity *sceneEnt, SecureVec3 *tmpOrg, SecureBoundsAccess *tmpBounds)
{
  const cpose_t *pose; 
  double Radius; 
  vec3_t outOrigin; 
  __int64 v9; 
  vec3_t angles; 
  vec4_t quat; 

  v9 = -2i64;
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1685, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  if ( !sceneEnt->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1686, ASSERT_TYPE_ASSERT, "(sceneEnt->obj)", (const char *)&queryFormat, "sceneEnt->obj") )
    __debugbreak();
  if ( !sceneEnt->info.pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1687, ASSERT_TYPE_ASSERT, "(sceneEnt->info.pose)", (const char *)&queryFormat, "sceneEnt->info.pose") )
    __debugbreak();
  pose = sceneEnt->info.pose;
  Radius = DObjGetRadius(sceneEnt->obj);
  CG_GetPoseOrigin(pose, (vec3_t *)tmpOrg);
  SetSecureVec3((const vec3_t *)tmpOrg, &sceneEnt->placement.placement.origin, s_origin_aab_X, s_origin_aab_Y, s_origin_aab_Z);
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  angles = pose->angles;
  AnglesToQuat(&angles, &quat);
  sceneEnt->placement.placement.quat = quat;
  if ( ((LODWORD(tmpOrg->x) & 0x7F800000) == 2139095040 || (LODWORD(tmpOrg->y) & 0x7F800000) == 2139095040 || (LODWORD(tmpOrg->z) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1701, ASSERT_TYPE_ASSERT, "(!IS_NAN( tmpOrg.x ) && !IS_NAN( tmpOrg.y ) && !IS_NAN( tmpOrg.z ))", (const char *)&queryFormat, "!IS_NAN( tmpOrg.x ) && !IS_NAN( tmpOrg.y ) && !IS_NAN( tmpOrg.z )") )
    __debugbreak();
  CG_GetPrevPoseOrigin(pose, &outOrigin);
  SetSecureVec3(&outOrigin, &sceneEnt->prevPlacement.prevPlacement.origin, s_ps_origin_aab_X, s_ps_origin_aab_Y, s_ps_origin_aab_Z);
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 636, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  angles = pose->prevAngles;
  AnglesToQuat(&angles, &quat);
  sceneEnt->prevPlacement.prevPlacement.quat = quat;
  tmpBounds->midPoint.v[0] = tmpOrg->x;
  tmpBounds->midPoint.v[1] = tmpOrg->y;
  tmpBounds->midPoint.v[2] = tmpOrg->z;
  tmpBounds->halfSize.v[0] = *(float *)&Radius;
  tmpBounds->halfSize.v[1] = *(float *)&Radius;
  tmpBounds->halfSize.v[2] = *(float *)&Radius;
  GfxSceneEntity_SetBounds(&sceneEnt->cull, tmpBounds);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
R_SetupSceneRtInput
==============
*/
void R_SetupSceneRtInput(GfxViewInfo *viewInfo, unsigned int sceneWidth, unsigned int sceneHeight, unsigned int maxSceneRtWidth, unsigned int maxSceneRtHeight)
{
  GfxViewInfo *v9; 
  unsigned __int16 frontendPass; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  R_RT_Flags rtFlags; 
  const dvar_t *v17; 
  R_RT_Flags v18; 
  int v19; 
  R_RT_Handle v20; 
  const dvar_t *v22; 
  int v23; 
  R_RT_Handle v24; 
  R_RT_Handle v26; 
  R_RT_Handle v28; 
  __m256i v30; 
  R_RT_DepthHandle *p_result; 
  const dvar_t *v33; 
  int v34; 
  R_RT_Handle v35; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const dvar_t *v39; 
  int v40; 
  R_RT_Handle v41; 
  R_RT_Image *v43; 
  const dvar_t *v44; 
  int v45; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  int v48; 
  R_RT_Handle v49; 
  const dvar_t *v51; 
  int v52; 
  R_RT_Handle v53; 
  const dvar_t *v55; 
  int v56; 
  const dvar_t *v57; 
  int v58; 
  R_RT_Handle v59; 
  const dvar_t *v61; 
  int v62; 
  R_RT_Handle v63; 
  bool v65; 
  unsigned int v66; 
  const char **v67; 
  const char *v68; 
  const dvar_t *v69; 
  int v70; 
  unsigned int MapSize; 
  unsigned int v72; 
  __m256i v73; 
  R_RT_DepthHandle *v75; 
  unsigned int m_allocCounter; 
  R_RT_Image *blackShadowImage; 
  unsigned __int16 v78; 
  const char *v79; 
  const char *v80; 
  int v81; 
  R_RT_Handle *v82; 
  bool v83; 
  unsigned int v84; 
  unsigned int v85; 
  R_RT_DepthHandle *v86; 
  R_RT_Image *v87; 
  unsigned int v88; 
  const dvar_t *v89; 
  __m256i v90; 
  R_RT_DepthHandle *v92; 
  R_RT_Image *zeroImage; 
  GfxImage *blackImage; 
  R_RT_Handle v95; 
  R_RT_Image *v97; 
  unsigned __int16 v98; 
  const char *v100; 
  const char *v101; 
  int v102; 
  R_RT_Handle v103; 
  R_RT_Image *v105; 
  unsigned __int16 v106; 
  const char *v108; 
  const char *v109; 
  int v110; 
  R_RT_Handle v111; 
  unsigned __int16 m_surfaceID; 
  unsigned __int16 v114; 
  const char *v115; 
  const char *v116; 
  int v117; 
  unsigned __int16 v118; 
  unsigned __int16 v119; 
  __int128 v120; 
  const char *m_location; 
  R_RT_Image *v122; 
  __int16 v123; 
  R_RT_Image *v124; 
  unsigned int v125; 
  R_RT_Image *v126; 
  unsigned int v128; 
  R_RT_ColorHandle *ColorForDynSceneResInternal; 
  R_RT_Image *whiteImage; 
  GfxImage *defaultUIntImage; 
  R_RT_Image *v132; 
  unsigned __int16 v133; 
  GfxSSAOMode SSAOMode; 
  const char *v138; 
  R_RT_Image *v139; 
  unsigned int v142; 
  unsigned int v143; 
  unsigned int v144; 
  unsigned int v145; 
  GfxSSRMode SSRMode; 
  R_RT_ColorHandle *v147; 
  R_RT_Image *v148; 
  R_RT_Image *v149; 
  R_RT_Image *blackUintImage; 
  R_RT_Image *v151; 
  R_RT_DepthHandle v153; 
  R_RT_Image *blackImage3D; 
  R_RT_Image *v155; 
  R_RT_DepthHandle *BufferInternal; 
  R_RT_DepthHandle *v157; 
  R_RT_DepthHandle *v158; 
  unsigned int v160; 
  unsigned int v161; 
  unsigned int v162; 
  const char **v163; 
  __m256i *m_spotShadowRts; 
  char v165; 
  unsigned int spotShadowUpdateLimit; 
  const char *v168; 
  R_RT_Handle *v169; 
  GfxViewInfo *v170; 
  const GfxImage *Image; 
  const GfxImage *v172; 
  const GfxImage *FogLightmapImage; 
  const GfxWrappedRWBuffer *ClusterMaskView; 
  const GfxWrappedBuffer *FrustumLightsTileBuffer; 
  const GfxWrappedBuffer *FrustumLightsClusterBuffer; 
  const GfxImage *SpotShadowArrayImageDraw3D; 
  __int64 arraySliceCount; 
  __int64 mipLimit; 
  unsigned int allocWidtha; 
  unsigned int v182; 
  unsigned int v183; 
  unsigned __int16 allocHeight; 
  unsigned int v185; 
  unsigned int v187; 
  unsigned __int16 v188; 
  bool v189; 
  unsigned __int16 v190; 
  unsigned __int16 heighta; 
  R_RT_AllocationLockSentry v193; 
  unsigned int v194; 
  unsigned int v195; 
  unsigned int v196; 
  R_RT_Handle v197; 
  unsigned int v198; 
  unsigned int v199; 
  unsigned int v200; 
  unsigned int v201; 
  __int64 v202; 
  R_RT_Handle v203; 
  R_RT_Handle *m_sunShadowCascades; 
  unsigned int v205; 
  R_RT_Handle v206; 
  GfxImage *extinction; 
  GfxImage *visibility; 
  __int64 sunShadowOpaqueCascadeCount; 
  GfxViewInfo *viewInfoa; 
  GfxImage *scattering; 
  R_RT_Handle v212; 
  R_RT_Handle v213; 
  R_RT_Handle v214; 
  __int64 v215; 
  R_RT_Handle v216; 
  R_RT_Handle v217; 
  R_RT_DepthHandle result; 
  R_RT_Handle v219; 
  R_RT_Handle v220; 
  vec4_t clearColor[2]; 
  vec4_t v222; 
  R_RT_ColorHandle v223; 
  R_RT_Handle v224; 

  v215 = -2i64;
  v9 = viewInfo;
  viewInfoa = viewInfo;
  if ( sceneWidth > maxSceneRtWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5894, ASSERT_TYPE_ASSERT, "(sceneWidth <= maxSceneRtWidth)", (const char *)&queryFormat, "sceneWidth <= maxSceneRtWidth") )
    __debugbreak();
  if ( sceneHeight > maxSceneRtHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5895, ASSERT_TYPE_ASSERT, "(sceneHeight <= maxSceneRtHeight)", (const char *)&queryFormat, "sceneHeight <= maxSceneRtHeight") )
    __debugbreak();
  v183 = sceneWidth >> 1;
  v185 = sceneHeight >> 1;
  v182 = maxSceneRtWidth >> 1;
  v187 = maxSceneRtHeight >> 1;
  v201 = sceneWidth >> 2;
  v200 = sceneHeight >> 2;
  v196 = sceneWidth >> 3;
  v195 = sceneHeight >> 3;
  v199 = maxSceneRtWidth >> 2;
  v198 = maxSceneRtHeight >> 2;
  v194 = maxSceneRtWidth >> 3;
  v205 = maxSceneRtHeight >> 3;
  memset_0(&v9->sceneRtInput, 0, sizeof(v9->sceneRtInput));
  v9->sceneRtInput.sceneRtWidth = sceneWidth;
  v9->sceneRtInput.sceneRtHeight = sceneHeight;
  v9->sceneRtInput.maxSceneRtWidth = maxSceneRtWidth;
  v9->sceneRtInput.maxSceneRtHeight = maxSceneRtHeight;
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v193);
  frontendPass = R_RT_NewFrontendPass();
  v188 = frontendPass;
  v9->sceneRtInput.m_pass = frontendPass;
  v11 = DCONST_DVARINT_r_dccColor;
  if ( !DCONST_DVARINT_r_dccColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = 4097;
  if ( v11->current.integer == 1 )
    v12 = 4105;
  v13 = DCONST_DVARINT_r_dccColor;
  if ( !DCONST_DVARINT_r_dccColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = 1;
  if ( v13->current.integer == 1 )
    v14 = 9;
  v15 = DCONST_DVARBOOL_r_esramDepth;
  if ( !DCONST_DVARBOOL_r_esramDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramDepth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  rtFlags = R_RT_Flag_Stencil;
  if ( v15->current.enabled )
    rtFlags = R_RT_Flag_MaskDepthOnly|R_RT_Flag_DemandESRAM;
  v9->sceneRtInput.m_mainSceneDepthRt = *R_RT_CreateDepthForDynSceneResInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_SCENE, rtFlags, R_RT_FlagInternal_Frontend, 0.0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Depth", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5929)");
  v17 = DCONST_DVARBOOL_r_esramColor;
  if ( !DCONST_DVARBOOL_r_esramColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = R_RT_Flag_RTView;
  v19 = 2048;
  if ( v17->current.enabled )
    v19 = 2080;
  v20 = *R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)(v12 | v19), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Color", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5930)");
  v217 = v20;
  v216 = v20;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    v20 = v216;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v20 = v217;
    }
  }
  v9->sceneRtInput.m_mainSceneColorRt = (R_RT_ColorHandle)v20;
  v22 = DCONST_DVARBOOL_r_esramColor;
  if ( !DCONST_DVARBOOL_r_esramColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = 2048;
  if ( v22->current.enabled )
    v23 = 2080;
  v24 = *R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[4], (R_RT_Flags)(v12 | v23), R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Alpha", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5931)");
  v217 = v24;
  v216 = v24;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    v24 = v216;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v24 = v217;
    }
  }
  v9->sceneRtInput.m_mainSceneAlphaRt = (R_RT_ColorHandle)v24;
  if ( v9->sss.enabled )
  {
    v26 = *R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[11], R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSS Albedo", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5935)");
    v217 = v26;
    v216 = v26;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v216);
      if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      v26 = v216;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v26 = v217;
      }
    }
    v9->sceneRtInput.m_mainSceneSSSAlbedoRt = (R_RT_ColorHandle)v26;
    v28 = *R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[12], R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSS Diffuse", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5936)");
    v217 = v28;
    v216 = v28;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v216);
      if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      v28 = v216;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v28 = v217;
      }
    }
    v9->sceneRtInput.m_mainSceneSSSDiffuseRt = (R_RT_ColorHandle)v28;
    R_RT_Handle::ClearAuxDirty(&v9->sceneRtInput.m_mainSceneSSSAlbedoRt);
    R_RT_Handle::ClearAuxDirty(&v9->sceneRtInput.m_mainSceneSSSDiffuseRt);
  }
  else
  {
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v9->sceneRtInput.m_mainSceneSSSAlbedoRt = (R_RT_ColorHandle)v216;
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v9->sceneRtInput.m_mainSceneSSSDiffuseRt = (R_RT_ColorHandle)v216;
  }
  if ( rg.debugOverdrawOverlay )
  {
    v30 = *(__m256i *)R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[23], R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlackBlank, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Overdraw", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5949)");
    v217 = (R_RT_Handle)v30;
    v216 = (R_RT_Handle)v30;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v216);
      if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      result = (R_RT_DepthHandle)v216;
      p_result = &result;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v30 = (__m256i)v217;
      }
      result = (R_RT_DepthHandle)v30;
      p_result = &result;
    }
  }
  else
  {
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    p_result = (R_RT_DepthHandle *)&v216;
  }
  v9->sceneRtInput.m_mainSceneOverdrawRt = *(R_RT_ColorHandle *)p_result;
  v33 = DCONST_DVARBOOL_r_esramColorPrepass;
  if ( !DCONST_DVARBOOL_r_esramColorPrepass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColorPrepass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  v34 = 2048;
  if ( v33->current.enabled )
    v34 = 2080;
  v35 = *R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[56], (R_RT_Flags)(v14 | v34), R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend EntityID_Velocity", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5951)");
  v217 = v35;
  v216 = v35;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    v35 = v216;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v35 = v217;
    }
  }
  v9->sceneRtInput.m_mainSceneEntityIDVelocityRt = (R_RT_ColorHandle)v35;
  p_m_image = &R_RT_Handle::GetSurface(&v9->sceneRtInput.m_mainSceneEntityIDVelocityRt)->m_image;
  p_input = &v9->input;
  if ( v9 == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v9->input.codeImages[1] = &p_m_image->m_base;
  v39 = DCONST_DVARBOOL_r_esramColorPrepass;
  if ( !DCONST_DVARBOOL_r_esramColorPrepass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColorPrepass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  v40 = 2048;
  if ( v39->current.enabled )
    v40 = 2080;
  v41 = *R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[63], (R_RT_Flags)(v14 | v40), R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Tangent Frame", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5953)");
  v217 = v41;
  v216 = v41;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    v41 = v216;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v41 = v217;
    }
  }
  v9->sceneRtInput.m_mainSceneTangentFrameRt = (R_RT_ColorHandle)v41;
  v43 = &R_RT_Handle::GetSurface(&v9->sceneRtInput.m_mainSceneTangentFrameRt)->m_image;
  if ( v9 == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v9->input.codeImages[2] = &v43->m_base;
  if ( rg.vrsEmissiveOnly )
  {
    v44 = DCONST_DVARINT_r_dccEmissive;
    if ( !DCONST_DVARINT_r_dccEmissive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccEmissive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    v45 = 32769;
    if ( v44->current.integer == 1 )
      v45 = 32777;
    v46 = DCONST_DVARBOOL_r_esramDepthMSAA;
    if ( !DCONST_DVARBOOL_r_esramDepthMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramDepthMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    v9->sceneRtInput.m_msaaSceneDepthRt = *R_RT_CreateDepthForDynSceneResInternal(&result, v183, v185, v182, v187, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_HALFRES_DEPTH, (R_RT_Flags)((v46->current.enabled ? 0x20 : 0) | 0x8080), R_RT_FlagInternal_Frontend, 0.0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend MSAA Depth", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5963)");
    v47 = DCONST_DVARBOOL_r_esramColorMSAA;
    if ( !DCONST_DVARBOOL_r_esramColorMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColorMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    v48 = 2048;
    if ( v47->current.enabled )
      v48 = 2080;
    v49 = *R_RT_CreateInternal(&result, v183, v185, v182, v187, 1u, 1u, 1u, g_R_RT_renderTargetFmts[13], (R_RT_Flags)(v45 | v48), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend MSAA Color", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5964)");
    v217 = v49;
    v216 = v49;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v216);
      if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      v49 = v216;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v49 = v217;
      }
    }
    v9->sceneRtInput.m_msaaSceneColorRt = (R_RT_ColorHandle)v49;
    v51 = DCONST_DVARBOOL_r_esramAlphaMSAA;
    if ( !DCONST_DVARBOOL_r_esramAlphaMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramAlphaMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    v52 = 2048;
    if ( v51->current.enabled )
      v52 = 2080;
    v53 = *R_RT_CreateInternal(&result, v183, v185, v182, v187, 1u, 1u, 1u, g_R_RT_renderTargetFmts[14], (R_RT_Flags)(v45 | v52), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend MSAA Alpha", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5965)");
    v217 = v53;
    v216 = v53;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v216);
      if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      v53 = v216;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v53 = v217;
      }
    }
    v9->sceneRtInput.m_msaaSceneAlphaRt = (R_RT_ColorHandle)v53;
    R_RT_Handle::ClearAuxDirty(&v9->sceneRtInput.m_msaaSceneDepthRt);
  }
  else
  {
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v9->sceneRtInput.m_msaaSceneDepthRt = (R_RT_DepthHandle)v216;
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v9->sceneRtInput.m_msaaSceneColorRt = (R_RT_ColorHandle)v216;
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v9->sceneRtInput.m_msaaSceneAlphaRt = (R_RT_ColorHandle)v216;
  }
  if ( rg.halfResEmissive )
  {
    v55 = DCONST_DVARINT_r_dccEmissive;
    if ( !DCONST_DVARINT_r_dccEmissive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccEmissive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    v56 = 1;
    if ( v55->current.integer == 1 )
      v56 = 9;
    v9->sceneRtInput.m_halfSceneDepthRt = *R_RT_CreateDepthForDynSceneResInternal(&result, v183, v185, v182, v187, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_HALFRES_DEPTH, R_RT_Flag_Stencil, R_RT_FlagInternal_Frontend, 0.0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Half Depth", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5984)");
    v57 = DCONST_DVARBOOL_r_esramColorMSAA;
    if ( !DCONST_DVARBOOL_r_esramColorMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColorMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    v58 = 2048;
    if ( v57->current.enabled )
      v58 = 2080;
    v59 = *R_RT_CreateInternal(&result, v183, v185, v182, v187, 1u, 1u, 1u, g_R_RT_renderTargetFmts[13], (R_RT_Flags)(v56 | v58), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Half Color", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5985)");
    v217 = v59;
    v216 = v59;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v216);
      if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      v59 = v216;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v59 = v217;
      }
    }
    v9->sceneRtInput.m_halfSceneColorRt = (R_RT_ColorHandle)v59;
    v61 = DCONST_DVARBOOL_r_esramAlphaMSAA;
    if ( !DCONST_DVARBOOL_r_esramAlphaMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramAlphaMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    v62 = 2048;
    if ( v61->current.enabled )
      v62 = 2080;
    v63 = *R_RT_CreateInternal(&result, v183, v185, v182, v187, 1u, 1u, 1u, g_R_RT_renderTargetFmts[14], (R_RT_Flags)(v56 | v62), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Half Alpha", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5986)");
    v217 = v63;
    v216 = v63;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v216);
      if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      v63 = v216;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v63 = v217;
      }
    }
    v9->sceneRtInput.m_halfSceneAlphaRt = (R_RT_ColorHandle)v63;
    R_RT_Handle::ClearAuxDirty(&v9->sceneRtInput.m_halfSceneDepthRt);
  }
  else
  {
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v9->sceneRtInput.m_halfSceneDepthRt = (R_RT_DepthHandle)v216;
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v9->sceneRtInput.m_halfSceneColorRt = (R_RT_ColorHandle)v216;
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v9->sceneRtInput.m_halfSceneAlphaRt = (R_RT_ColorHandle)v216;
  }
  v65 = (*((_DWORD *)&v9->viewportFeatures + 11) & 4) != 0;
  v189 = v65;
  if ( rg.sunShadowOpaqueCascadeCount )
  {
    v66 = 2;
    v67 = sunshadowNames;
    m_sunShadowCascades = v9->sceneRtInput.m_sunShadowCascades;
    v202 = 6848i64;
    sunShadowOpaqueCascadeCount = rg.sunShadowOpaqueCascadeCount;
    while ( 1 )
    {
      if ( v65 )
      {
        v68 = *v67;
        v69 = DCONST_DVARBOOL_r_esramShadow;
        if ( !DCONST_DVARBOOL_r_esramShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramShadow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v69);
        v70 = v69->current.enabled ? 0x20 : 0;
        MapSize = R_SunShadow_GetMapSize();
        v72 = R_SunShadow_GetMapSize();
        clearColor[0].v[0] = 0.0;
        v73 = *(__m256i *)R_RT_CreateInternal(&result, v72, MapSize, v72, MapSize, 1u, 1u, 1u, g_R_RT_depthStencilFmts[3], (R_RT_Flags)v70, R_RT_FlagInternal_Frontend|R_RT_FlagInternal_Depth, clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v68, v188, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6006)");
        v206 = (R_RT_Handle)v73;
        v216 = (R_RT_Handle)v73;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v216);
          if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
            __debugbreak();
          result = (R_RT_DepthHandle)v216;
          v75 = &result;
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
              __debugbreak();
            v73 = (__m256i)v206;
          }
          result = (R_RT_DepthHandle)v73;
          v75 = &result;
        }
      }
      else
      {
        v217.m_surfaceID = 0;
        v217.m_tracking.m_allocCounter = 0;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v217.m_tracking.m_name = _XMM0;
        v75 = (R_RT_DepthHandle *)&v217;
      }
      v197 = v75->R_RT_Handle;
      m_allocCounter = v197.m_tracking.m_allocCounter;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v197);
        blackShadowImage = &R_RT_Handle::GetSurface(&v197)->m_image;
      }
      else
      {
        if ( v197.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        blackShadowImage = (R_RT_Image *)rgp.blackShadowImage;
      }
      if ( v9 == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      if ( v66 >= 0x2A )
      {
        LODWORD(mipLimit) = 42;
        LODWORD(arraySliceCount) = v66;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1483, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentTexture ) < (unsigned)( TEXTURE_SRC_CODE_PERSISTENT_COUNT )", "codePersistentTexture doesn't index TEXTURE_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", arraySliceCount, mipLimit) )
          __debugbreak();
      }
      *(_QWORD *)((char *)p_input->consts[0].v + v202) = blackShadowImage;
      if ( (_XMM0 & 0x7FFF) != 0 )
        v78 = _XMM0 & 0x7FFF | 0x8000;
      else
        v78 = 0;
      v216.m_surfaceID = v78;
      _XMM0 = *(_OWORD *)&v197.m_tracking.m_allocCounter;
      v216.m_tracking = v197.m_tracking;
      if ( v78 )
      {
        R_RT_Handle::GetSurface(&v216);
        if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x10) == 0 )
        {
          v79 = "!unionHandle.IsValid() || unionHandle.IsDepth()";
          v80 = "(!unionHandle.IsValid() || unionHandle.IsDepth())";
          v81 = 277;
LABEL_232:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v81, ASSERT_TYPE_ASSERT, v80, (const char *)&queryFormat, v79) )
            __debugbreak();
        }
      }
      else if ( m_allocCounter )
      {
        v79 = "!this->m_tracking.m_allocCounter";
        v80 = "(!this->m_tracking.m_allocCounter)";
        v81 = 100;
        goto LABEL_232;
      }
      v82 = m_sunShadowCascades;
      *m_sunShadowCascades = v216;
      ++v66;
      v202 += 8i64;
      m_sunShadowCascades = v82 + 1;
      ++v67;
      v83 = sunShadowOpaqueCascadeCount-- == 1;
      v65 = v189;
      if ( v83 )
      {
        v9 = viewInfoa;
        frontendPass = v188;
        v18 = R_RT_Flag_RTView;
        break;
      }
    }
  }
  if ( v65 )
  {
    v84 = R_SunShadow_GetMapSize();
    v85 = R_SunShadow_GetMapSize();
    v86 = R_RT_CreateDepthInternal(&result, v85, v84, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_SHADOWMAP, R_RT_Flag_None, R_RT_FlagInternal_Frontend, 0.0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Viewmodel Sun Shadow", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6010)");
  }
  else
  {
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v86 = (R_RT_DepthHandle *)&v216;
  }
  v212 = v86->R_RT_Handle;
  LODWORD(m_sunShadowCascades) = _XMM0;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v212);
    v87 = &R_RT_Handle::GetSurface(&v212)->m_image;
  }
  else
  {
    if ( v212.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    v87 = (R_RT_Image *)rgp.blackShadowImage;
  }
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[1] = &v87->m_base;
  v88 = R_SunShadow_GetMapSize();
  if ( rg.useTransSunShadow && v65 )
  {
    v89 = DCONST_DVARBOOL_r_esramShadowTrans;
    if ( !DCONST_DVARBOOL_r_esramShadowTrans && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramShadowTrans") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v89);
    if ( v89->current.enabled )
      v18 = R_RT_Flag_RTView|R_RT_Flag_DemandESRAM;
    v90 = *(__m256i *)R_RT_CreateInternal(&result, v88, v88, v88, v88, 1u, 1u, 1u, g_R_RT_renderTargetFmts[9], v18, R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Translucent Shadow", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6015)");
    v217 = (R_RT_Handle)v90;
    v216 = (R_RT_Handle)v90;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v216);
      if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      result = (R_RT_DepthHandle)v216;
      v92 = &result;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v90 = (__m256i)v217;
      }
      result = (R_RT_DepthHandle)v90;
      v92 = &result;
    }
  }
  else
  {
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    v92 = (R_RT_DepthHandle *)&v216;
  }
  v206 = v92->R_RT_Handle;
  LODWORD(v202) = _XMM0;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v206);
    zeroImage = &R_RT_Handle::GetSurface(&v206)->m_image;
  }
  else
  {
    if ( v206.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    zeroImage = (R_RT_Image *)rgp.zeroImage;
  }
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[5] = &zeroImage->m_base;
  blackImage = rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[6] = blackImage;
  v95 = *R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 0x10u, g_R_RT_renderTargetFmts[19], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend FloatZ", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6022)");
  v217 = v95;
  v216 = v95;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    v95 = v216;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v95 = v217;
    }
  }
  v219 = v95;
  v97 = &R_RT_Handle::GetSurface(&v219)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[0] = &v97->m_base;
  v9->input.sceneConstants.mipSizes.v[0] = R_RT_Handle::GetSurface(&v219)->m_image.m_base.levelCount;
  if ( (v219.m_surfaceID & 0x7FFF) != 0 )
    v98 = v219.m_surfaceID & 0x7FFF | 0x8000;
  else
    v98 = 0;
  v216.m_surfaceID = v98;
  _XMM0 = *(_OWORD *)&v219.m_tracking.m_allocCounter;
  v216.m_tracking = v219.m_tracking;
  if ( v98 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_300;
    v100 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v101 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
    v102 = 217;
  }
  else
  {
    if ( !v219.m_tracking.m_allocCounter )
      goto LABEL_300;
    v100 = "!this->m_tracking.m_allocCounter";
    v101 = "(!this->m_tracking.m_allocCounter)";
    v102 = 100;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v102, ASSERT_TYPE_ASSERT, v101, (const char *)&queryFormat, v100) )
    __debugbreak();
LABEL_300:
  v9->sceneRtInput.m_floatZFullRt = (R_RT_ColorHandle)v216;
  v103 = *R_RT_CreateInternal(&result, v196, v195, v194, v205, 1u, 1u, 0x10u, g_R_RT_renderTargetFmts[19], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend FloatZ", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6027)");
  v217 = v103;
  v216 = v103;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    v103 = v216;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v103 = v217;
    }
  }
  v197 = v103;
  v105 = &R_RT_Handle::GetSurface(&v197)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[0] = &v105->m_base;
  if ( (v197.m_surfaceID & 0x7FFF) != 0 )
    v106 = v197.m_surfaceID & 0x7FFF | 0x8000;
  else
    v106 = 0;
  v216.m_surfaceID = v106;
  _XMM0 = *(_OWORD *)&v197.m_tracking.m_allocCounter;
  v216.m_tracking = v197.m_tracking;
  if ( v106 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_322;
    v108 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v109 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
    v110 = 217;
  }
  else
  {
    if ( !v197.m_tracking.m_allocCounter )
      goto LABEL_322;
    v108 = "!this->m_tracking.m_allocCounter";
    v109 = "(!this->m_tracking.m_allocCounter)";
    v110 = 100;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v110, ASSERT_TYPE_ASSERT, v109, (const char *)&queryFormat, v108) )
    __debugbreak();
LABEL_322:
  v9->sceneRtInput.m_floatZEighthMipMinRt = (R_RT_ColorHandle)v216;
  clearColor[0] = (vec4_t)_xmm;
  v111 = *R_RT_CreateInternal(&result, v183, v185, v182, v187, 1u, 1u, 1u, g_R_RT_renderTargetFmts[41], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Water FloatZ", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6032)");
  v216 = v111;
  v203 = v111;
  m_surfaceID = _XMM0;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v203);
    if ( (R_RT_Handle::GetSurface(&v203)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    LODWORD(_RDI) = v203.m_tracking.m_allocCounter;
    m_surfaceID = v203.m_surfaceID;
    v111 = v203;
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v111 = v216;
    }
  }
  v217 = v111;
  v114 = m_surfaceID & 0x7FFF;
  if ( v114 )
  {
    v216.m_surfaceID = v114;
  }
  else
  {
    v114 = 0;
    v216.m_surfaceID = 0;
  }
  v216.m_tracking = v203.m_tracking;
  if ( v114 )
  {
    R_RT_Handle::GetSurface(&v216);
    if ( (R_RT_Handle::GetSurface(&v216)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_341;
    v115 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v116 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
    v117 = 217;
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_341;
    v115 = "!this->m_tracking.m_allocCounter";
    v116 = "(!this->m_tracking.m_allocCounter)";
    v117 = 100;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v117, ASSERT_TYPE_ASSERT, v116, (const char *)&queryFormat, v115) )
    __debugbreak();
LABEL_341:
  v9->sceneRtInput.m_waterFloatZRt = (R_RT_ColorHandle)v216;
  v118 = v217.m_surfaceID;
  if ( (v217.m_surfaceID & 0x7FFF) != 0 )
    v119 = v217.m_surfaceID & 0x7FFF | 0x8000;
  else
    v119 = 0;
  v216.m_surfaceID = v119;
  v120 = *(_OWORD *)&v217.m_tracking.m_allocCounter;
  v216.m_tracking = v217.m_tracking;
  m_location = v217.m_tracking.m_location;
  result = (R_RT_DepthHandle)v216;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v122 = &R_RT_Handle::GetSurface(&v220)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[15] = &v122->m_base;
  v123 = v118 & 0x7FFF;
  if ( v123 )
    v216.m_surfaceID = v123 | 0x8000;
  else
    v216.m_surfaceID = 0;
  *(_OWORD *)&v216.m_tracking.m_allocCounter = v120;
  v216.m_tracking.m_location = m_location;
  result = (R_RT_DepthHandle)v216;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v124 = &R_RT_Handle::GetSurface(&v220)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[77] = &v124->m_base;
  v125 = sceneHeight;
  R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&v216, v183, sceneHeight, v182, maxSceneRtHeight, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_PACKED_STENCIL, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Packed Stencil", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6038)");
  v126 = &R_RT_Handle::GetSurface(&v216)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[79] = &v126->m_base;
  if ( (v216.m_surfaceID & 0x7FFF) != 0 )
    v217.m_surfaceID = v216.m_surfaceID & 0x7FFF | 0x8000;
  else
    v217.m_surfaceID = 0;
  _XMM0 = *(_OWORD *)&v216.m_tracking.m_allocCounter;
  v217.m_tracking = v216.m_tracking;
  result = (R_RT_DepthHandle)v217;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v9->sceneRtInput.m_packedStencilRt = (R_RT_ColorHandle)v220;
  if ( v65 )
  {
    v128 = sceneWidth;
    ColorForDynSceneResInternal = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SUN_VISIBILTY, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Sun Visibility", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6042)");
  }
  else
  {
    v216.m_surfaceID = 0;
    v216.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
    ColorForDynSceneResInternal = (R_RT_ColorHandle *)&v216;
    v128 = sceneWidth;
  }
  v217 = ColorForDynSceneResInternal->R_RT_Handle;
  v194 = _XMM0;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v217);
    whiteImage = &R_RT_Handle::GetSurface(&v217)->m_image;
  }
  else
  {
    if ( v217.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    whiteImage = (R_RT_Image *)rgp.whiteImage;
  }
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[0] = &whiteImage->m_base;
  defaultUIntImage = rgp.defaultUIntImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[9] = defaultUIntImage;
  R_GetResolvedSceneRt((R_RT_ColorHandle *)&v216, v9->clientIndex, vidConfig.sceneWidth, vidConfig.sceneHeight, v9->teleported, &v9->sceneRtInput.m_resolvedSceneRtNeedsClear);
  v132 = &R_RT_Handle::GetSurface(&v216)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[6] = &v132->m_base;
  if ( (v216.m_surfaceID & 0x7FFF) != 0 )
    v133 = v216.m_surfaceID & 0x7FFF | 0x8000;
  else
    v133 = 0;
  v197.m_surfaceID = v133;
  _XMM0 = *(_OWORD *)&v216.m_tracking.m_allocCounter;
  v197.m_tracking = v216.m_tracking;
  result = (R_RT_DepthHandle)v197;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v9->sceneRtInput.m_resolvedSceneRt = (R_RT_ColorHandle)v220;
  heighta = 0;
  v214.m_surfaceID = 0;
  v214.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v214.m_tracking.m_name = _XMM0;
  allocHeight = 0;
  v216.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v216.m_tracking.m_name = _XMM0;
  SSAOMode = R_GetSSAOMode(v9);
  _XMM0 = _xmm;
  v222 = (vec4_t)_xmm;
  if ( SSAOMode )
  {
    v138 = "Frontend SSAO [0]";
    if ( (v9->input.data->frameIndex & 1) != 0 )
      v138 = "Frontend SSAO [1]";
    v214 = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v128, v125, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_AO, R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &v222, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v138, 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6064)")->R_RT_Handle;
    heighta = v214.m_surfaceID;
  }
  if ( (SSAOMode & 2) != 0 )
  {
    v216 = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v183, v185, v182, v187, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_GENERIC_R8, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorWhite, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "FrontEnd MDAO", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6070)")->R_RT_Handle;
    allocHeight = v216.m_surfaceID;
  }
  if ( R_RT_Handle::IsValid(&v214) )
    v139 = &R_RT_Handle::GetSurface(&v214)->m_image;
  else
    v139 = (R_RT_Image *)rgp.whiteImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[10] = &v139->m_base;
  v203.m_surfaceID = 0;
  v203.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v203.m_tracking.m_name = _XMM0;
  v190 = 0;
  v197.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v197.m_tracking.m_name = _XMM0;
  R_SSR_GetPreviousFrameWaterTraceRt(&v223);
  v213.m_surfaceID = 0;
  v213.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v213.m_tracking.m_name = _XMM0;
  v142 = sceneWidth >> 8;
  if ( !(sceneWidth >> 8) )
    v142 = 1;
  v143 = v125 >> 7;
  if ( !v143 )
    v143 = 1;
  v144 = maxSceneRtWidth >> 8;
  if ( !(maxSceneRtWidth >> 8) )
    v144 = 1;
  allocWidtha = v144;
  v145 = maxSceneRtHeight >> 7;
  if ( !(maxSceneRtHeight >> 7) )
    v145 = 1;
  SSRMode = R_GetSSRMode(v9);
  if ( SSRMode != GFX_SSR_DEFERRED_LQ )
  {
    if ( SSRMode != GFX_SSR_DEFERRED_HQ )
      goto LABEL_407;
    v203 = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v183, v185, v182, v187, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SSR_TRACE, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSR", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6102)")->R_RT_Handle;
    v213 = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&v220, v142, v143, allocWidtha, v145, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_GENERIC_UINT, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSR Mask", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6103)")->R_RT_Handle;
    if ( !v9->ssrWaterTrace )
      goto LABEL_407;
    v147 = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v183, v185, v182, v187, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SSR_TRACE, R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Water SSR", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6107)");
    goto LABEL_404;
  }
  v203 = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v201, v200, v199, v198, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SSR_TRACE, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSR", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6092)")->R_RT_Handle;
  v213 = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&v220, v142, v143, allocWidtha, v145, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_GENERIC_UINT, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSR Mask", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6093)")->R_RT_Handle;
  if ( v9->ssrWaterTrace )
  {
    v147 = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v201, v200, v199, v198, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SSR_TRACE, R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Water SSR", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6097)");
LABEL_404:
    v197 = v147->R_RT_Handle;
    v190 = v197.m_surfaceID;
  }
LABEL_407:
  if ( R_RT_Handle::IsValid(&v203) )
    v148 = &R_RT_Handle::GetSurface(&v203)->m_image;
  else
    v148 = (R_RT_Image *)rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[11] = &v148->m_base;
  if ( R_RT_Handle::IsValid(&v223) )
    v149 = &R_RT_Handle::GetSurface(&v223)->m_image;
  else
    v149 = (R_RT_Image *)rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[12] = &v149->m_base;
  if ( R_RT_Handle::IsValid(&v213) )
    blackUintImage = &R_RT_Handle::GetSurface(&v213)->m_image;
  else
    blackUintImage = (R_RT_Image *)rgp.blackUintImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[83] = &blackUintImage->m_base;
  v151 = &R_RT_Handle::GetSurface(&v219)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[14] = &v151->m_base;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(vec4_t *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_postOpaqueLuma = (R_RT_ColorHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(vec4_t *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_transMask = (R_RT_ColorHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(vec4_t *)&v219.m_tracking.m_name = _XMM0;
  LOWORD(clearColor[0].v[0]) = 0;
  clearColor[0].v[2] = 0.0;
  clearColor[1] = _XMM0;
  if ( rg.useLightGridVolumes )
  {
    R_LGV_LazyAllocSamplingBuffers();
    v220 = R_RT_CreateColorInternal((R_RT_ColorHandle *)&result, 0x40u, 0x40u, 0x10u, 1u, 1u, GFX_RENDERTARGET_FORMAT_LGV_LIGHTING, R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "Frontend LightGridVolumes_3d", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6139)")->R_RT_Handle;
    v219 = v220;
    v153 = *(R_RT_DepthHandle *)R_RT_CreateColorInternal((R_RT_ColorHandle *)clearColor, 0x80u, 0xC0u, 0x10u, 1u, 1u, GFX_RENDERTARGET_FORMAT_LGV_LIGHTING_HIGH_BANDS, R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "Frontend LightGridVolumesHighBands_3d", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6140)");
    *(R_RT_DepthHandle *)clearColor[0].v = v153;
  }
  else
  {
    v220 = v219;
    v153 = *(R_RT_DepthHandle *)clearColor[0].v;
  }
  result = v153;
  if ( R_RT_Handle::IsValid(&v219) )
    blackImage3D = &R_RT_Handle::GetSurface(&v219)->m_image;
  else
    blackImage3D = (R_RT_Image *)rgp.blackImage3D;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[21] = &blackImage3D->m_base;
  v9->sceneRtInput.m_lightGridVolumeData3D = (R_RT_ColorHandle)v220;
  if ( R_RT_Handle::IsValid((R_RT_Handle *)clearColor) )
    v155 = &R_RT_Handle::GetSurface((R_RT_Handle *)clearColor)->m_image;
  else
    v155 = (R_RT_Image *)rgp.blackImage3D;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[22] = &v155->m_base;
  v9->sceneRtInput.m_lightGridVolumeHighBandsData3D = (R_RT_ColorHandle)result;
  BufferInternal = (R_RT_DepthHandle *)R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, 4u, 0x280000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndexBuffer|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_Frontend, D3D12_RESOURCE_STATE_INDEX_BUFFER, "Frontend Scene Buffer Index", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6152)");
  v9->sceneRtInput.m_gpIndexBuffer = *(R_RT_BufferHandle *)BufferInternal;
  result = *BufferInternal;
  R_SetInputCodeBuffer(p_input, 6u, &result);
  v157 = (R_RT_DepthHandle *)R_RT_CreateBufferInternal((R_RT_BufferHandle *)&v220, 0x24u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_Frontend, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, "Frontend Scene Buffer Indirect Args", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6155)");
  v9->sceneRtInput.m_gpIndirectArgsBuffer = *(R_RT_BufferHandle *)v157;
  result = *v157;
  R_SetInputCodeBuffer(p_input, 9u, &result);
  v158 = (R_RT_DepthHandle *)R_RT_CreateBufferInternal((R_RT_BufferHandle *)&v219, 1u, 0x700000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_Frontend, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Scene Per Surf Data", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6158)");
  v9->sceneRtInput.m_gpPerSurfDataBuffer = *(R_RT_BufferHandle *)v158;
  result = *v158;
  R_SetInputCodePersistentBuffer(p_input, 0x17u, &result);
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_gpBatchSubMeshOffsetsBuffer = (R_RT_BufferHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_gpSubMeshWorkgroupArgsBuffer = (R_RT_BufferHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_gpSubMeshCountBuffer = (R_RT_BufferHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_gpClusterPassIndirectArgsBuffer = (R_RT_BufferHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_gpClusterPPSumIndirectArgsBuffer = (R_RT_BufferHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_gpPrevCulledSubMeshBuffer = (R_RT_BufferHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_gpPrevSubMeshClusterOffsetsBuffer = (R_RT_BufferHandle)v219;
  v219.m_surfaceID = 0;
  v219.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
  v9->sceneRtInput.m_gpPrevCulledTriClusterBuffer = (R_RT_BufferHandle)v219;
  v160 = *((_DWORD *)&v9->viewportFeatures + 11) >> 1;
  LOBYTE(v160) = (*((_DWORD *)&v9->viewportFeatures + 11) & 2) != 0;
  v196 = v160;
  v161 = 2 * R_SpotShadow_GetMapSize();
  v162 = 0;
  v163 = spotShadowRtNames;
  m_spotShadowRts = (__m256i *)v9->sceneRtInput.m_spotShadowRts;
  v165 = v196;
  spotShadowUpdateLimit = v9->input.data->spotShadowUpdateLimit;
  do
  {
    if ( v165 && v162 < spotShadowUpdateLimit )
    {
      v168 = *v163;
      clearColor[0].v[0] = 0.0;
      result = (R_RT_DepthHandle)*R_RT_CreateInternal(&v224, v161, v161, v161, v161, 1u, 1u, 1u, g_R_RT_depthStencilFmts[3], R_RT_Flag_None, R_RT_FlagInternal_Frontend|R_RT_FlagInternal_Depth, clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v168, v188, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6177)");
      R_RT_DepthHandle::Cast((R_RT_DepthHandle *)&v220, &result);
      v169 = &v220;
    }
    else
    {
      v219.m_surfaceID = 0;
      v219.m_tracking.m_allocCounter = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v219.m_tracking.m_name = _XMM0;
      v169 = &v219;
    }
    *m_spotShadowRts = *(__m256i *)v169;
    ++v162;
    ++m_spotShadowRts;
    ++v163;
  }
  while ( v162 < 8 );
  if ( ((unsigned __int16)m_sunShadowCascades & 0x7FFF) != 0 )
    v219.m_surfaceID = (unsigned __int16)m_sunShadowCascades & 0x7FFF | 0x8000;
  else
    v219.m_surfaceID = 0;
  v219.m_tracking = v212.m_tracking;
  result = (R_RT_DepthHandle)v219;
  R_RT_DepthHandle::Cast((R_RT_DepthHandle *)&v220, &result);
  v170 = viewInfoa;
  viewInfoa->sceneRtInput.m_sunShadowCascade0ForViewmodel = (R_RT_DepthHandle)v220;
  if ( (v202 & 0x7FFF) != 0 )
    v212.m_surfaceID = v202 & 0x7FFF | 0x8000;
  else
    v212.m_surfaceID = 0;
  v212.m_tracking = v206.m_tracking;
  result = (R_RT_DepthHandle)v212;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v170->sceneRtInput.m_translucentShadowRt = (R_RT_ColorHandle)v220;
  if ( (v194 & 0x7FFF) != 0 )
    v206.m_surfaceID = v194 & 0x7FFF | 0x8000;
  else
    v206.m_surfaceID = 0;
  v206.m_tracking = v217.m_tracking;
  result = (R_RT_DepthHandle)v206;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v170->sceneRtInput.m_sunVisibilityRt = (R_RT_ColorHandle)v220;
  if ( (heighta & 0x7FFF) != 0 )
    v217.m_surfaceID = heighta & 0x7FFF | 0x8000;
  else
    v217.m_surfaceID = 0;
  v217.m_tracking = v214.m_tracking;
  result = (R_RT_DepthHandle)v217;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v170->sceneRtInput.m_ssaoRt = (R_RT_ColorHandle)v220;
  if ( (v203.m_surfaceID & 0x7FFF) != 0 )
    v217.m_surfaceID = v203.m_surfaceID & 0x7FFF | 0x8000;
  else
    v217.m_surfaceID = 0;
  v217.m_tracking = v203.m_tracking;
  result = (R_RT_DepthHandle)v217;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v170->sceneRtInput.m_ssrRt = (R_RT_ColorHandle)v220;
  if ( (v213.m_surfaceID & 0x7FFF) != 0 )
    v217.m_surfaceID = v213.m_surfaceID & 0x7FFF | 0x8000;
  else
    v217.m_surfaceID = 0;
  v217.m_tracking = v213.m_tracking;
  result = (R_RT_DepthHandle)v217;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v170->sceneRtInput.m_ssrMaskRt = (R_RT_ColorHandle)v220;
  if ( (v190 & 0x7FFF) != 0 )
    v217.m_surfaceID = v190 & 0x7FFF | 0x8000;
  else
    v217.m_surfaceID = 0;
  v217.m_tracking = v197.m_tracking;
  result = (R_RT_DepthHandle)v217;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v170->sceneRtInput.m_ssrWaterRt = (R_RT_ColorHandle)v220;
  if ( (allocHeight & 0x7FFF) != 0 )
    v217.m_surfaceID = allocHeight & 0x7FFF | 0x8000;
  else
    v217.m_surfaceID = 0;
  v217.m_tracking = v216.m_tracking;
  result = (R_RT_DepthHandle)v217;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v220, &result);
  v170->sceneRtInput.m_mdaoRt = (R_RT_ColorHandle)v220;
  R_VRS_LazyAllocRts(v170);
  R_EffectLighting_LazyAllocRts();
  Image = R_EffectLighting_GetImage(GFX_MESH_LIGHTING_FIRST);
  R_SetInputCodeImageTextureInternal(&v170->input, 0x24u, Image, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6207)");
  v172 = R_EffectLighting_GetImage(GFX_MESH_LIGHTING_SH);
  R_SetInputCodeImageTextureInternal(&v170->input, 0x25u, v172, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6208)");
  FogLightmapImage = R_EffectLighting_GetFogLightmapImage();
  R_SetInputCodeImageTextureInternal(&v170->input, 0x26u, FogLightmapImage, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6209)");
  R_VOL_LazyAllocRts();
  R_VOL_GetAccumImages(v170, (const GfxImage **)&scattering, (const GfxImage **)&extinction, (const GfxImage **)&visibility);
  if ( !scattering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6217, ASSERT_TYPE_ASSERT, "(scattering)", (const char *)&queryFormat, "scattering") )
    __debugbreak();
  if ( !extinction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6218, ASSERT_TYPE_ASSERT, "(extinction)", (const char *)&queryFormat, "extinction") )
    __debugbreak();
  if ( !visibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6219, ASSERT_TYPE_ASSERT, "(visibility)", (const char *)&queryFormat, "visibility") )
    __debugbreak();
  R_SetInputCodePersistentImageTextureInternal(&v170->input, 0x19u, scattering, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6220)");
  R_SetInputCodePersistentImageTextureInternal(&v170->input, 0x1Au, extinction, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6221)");
  R_SetInputCodePersistentImageTextureInternal(&v170->input, 0x1Bu, visibility, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6222)");
  ClusterMaskView = R_VOL_GetClusterMaskView();
  R_SetInputCodePersistentBuffer(&v170->input, 0xDu, ClusterMaskView);
  R_FrustumLights_LazyAllocRts();
  FrustumLightsTileBuffer = R_GetFrustumLightsTileBuffer();
  R_SetInputCodePersistentBuffer(&v170->input, 0xAu, FrustumLightsTileBuffer);
  FrustumLightsClusterBuffer = R_GetFrustumLightsClusterBuffer();
  R_SetInputCodePersistentBuffer(&v170->input, 0xBu, FrustumLightsClusterBuffer);
  R_SpotShadow_LazyAllocRts();
  SpotShadowArrayImageDraw3D = R_GetSpotShadowArrayImageDraw3D();
  R_SetInputCodePersistentImageTextureInternal(&v170->input, 8u, SpotShadowArrayImageDraw3D, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6231)");
  v170->spotshadowActiveCache = *R_SpotShadow_ActiveCacheEntry::GetDepthRtDraw3D((const R_RT_DepthHandle *)&v224);
  v170->spotshadowHTileMask = 0;
  R_SunShadowCache_LazyAllocRts();
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v193);
}

/*
==============
R_SetupScopeEffect
==============
*/
void R_SetupScopeEffect(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  bool v4; 
  GfxViewParms *DepthHackViewParms; 
  __int64 v6; 
  char *v7; 
  __int64 v8; 
  vec4_t v9; 
  GfxViewParms *v10; 
  char *v11; 
  vec4_t v12; 
  __int128 v17; 
  float v18; 
  __int128 v19; 
  __int128 v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  __int128 v33; 
  __int128 v37; 
  float v41; 
  float v42; 
  __int64 clientIndex; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  __int128 v48; 
  float v49; 
  float v50; 
  float v51; 
  float v54; 
  float v56; 
  float v57; 
  double v58; 
  double v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  float v72; 
  __int128 v74; 
  float v76; 
  float v77; 
  float v78; 
  float v81; 
  float scopeLensRadius; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  int v94; 
  float *v95; 
  __int64 v96; 
  float v97; 
  __int128 scopeLensInnerDisk_low; 
  double v99; 
  float v100; 
  double v101; 
  __int128 v103; 
  __int128 v106; 
  double v107; 
  __int128 v109; 
  float fadeOutFrac; 
  __int128 v116; 
  float fadeInFrac; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float scopeLensBrightness; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  GfxViewParms result; 
  vec4_t v132; 
  vec4_t v133; 
  vec4_t v134; 
  vec4_t v135; 
  vec4_t v136; 
  vec4_t v137; 
  vec4_t vec; 
  vec4_t v139; 
  vec4_t v140; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> mat; 
  char v145; 
  tmat44_t<vec4_t> in2; 
  char v147; 
  tmat44_t<vec4_t> v148; 
  float v149; 
  int v150[11]; 

  data->scope = scene.scope;
  v4 = scene.scope.scopeUseDualFov && (scene.scope.scopeLensInnerDiskMag != 1.0 || scene.scope.scopeLensOuterRingMag != 1.0 || scene.scope.scopeLensFadeStart < 1.0) && scene.scope.scopeFadeInfo[0].fadeInFrac > 0.0;
  viewInfo->scopeLensDistortionEnabled = v4;
  v128 = scene.scope.scopeLensPos.v[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  v127 = scene.scope.scopeLensPos.v[1] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  v129 = scene.scope.scopeLensPos.v[2] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  v133.xyz = scene.scope.scopeLensPos;
  v133.v[3] = FLOAT_1_0;
  DepthHackViewParms = R_GetDepthHackViewParms(&result, (const GfxViewParms *)viewInfo);
  v6 = 3i64;
  v7 = &v145;
  v8 = 3i64;
  do
  {
    v7 += 128;
    v9 = DepthHackViewParms->viewMatrix.m.m[0];
    DepthHackViewParms = (GfxViewParms *)((char *)DepthHackViewParms + 128);
    *((vec4_t *)v7 - 8) = v9;
    *((_OWORD *)v7 - 7) = *(_OWORD *)&DepthHackViewParms[-1].camera.axis.row0.y;
    *((_OWORD *)v7 - 6) = *(_OWORD *)&DepthHackViewParms[-1].camera.axis.row1.z;
    *((_OWORD *)v7 - 5) = *(_OWORD *)&DepthHackViewParms[-1].camera.tanHalfFovX;
    *((_OWORD *)v7 - 4) = *(_OWORD *)DepthHackViewParms[-1].camera.zPlanes;
    *((_OWORD *)v7 - 3) = *(_OWORD *)&DepthHackViewParms[-1].camera.focalLength;
    *((_OWORD *)v7 - 2) = *(_OWORD *)&DepthHackViewParms[-1].camera.visibilityQueryDistance;
    *((_OWORD *)v7 - 1) = *(_OWORD *)&DepthHackViewParms[-1].cameraMotion;
    --v8;
  }
  while ( v8 );
  MatrixForViewerOrthogonal(&viewInfo->viewParmsSet.frames[0].viewParms.camera.origin, &viewInfo->viewParmsSet.frames[0].viewParms.camera.axis, &mtx);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  v10 = R_GetDepthHackViewParms(&result, &viewInfo->viewParmsSet.frames[1].viewParms);
  v11 = &v147;
  do
  {
    v11 += 128;
    v12 = v10->viewMatrix.m.m[0];
    v10 = (GfxViewParms *)((char *)v10 + 128);
    *((vec4_t *)v11 - 8) = v12;
    *((_OWORD *)v11 - 7) = *(_OWORD *)&v10[-1].camera.axis.row0.y;
    *((_OWORD *)v11 - 6) = *(_OWORD *)&v10[-1].camera.axis.row1.z;
    *((_OWORD *)v11 - 5) = *(_OWORD *)&v10[-1].camera.tanHalfFovX;
    *((_OWORD *)v11 - 4) = *(_OWORD *)v10[-1].camera.zPlanes;
    *((_OWORD *)v11 - 3) = *(_OWORD *)&v10[-1].camera.focalLength;
    *((_OWORD *)v11 - 2) = *(_OWORD *)&v10[-1].camera.visibilityQueryDistance;
    *((_OWORD *)v11 - 1) = *(_OWORD *)&v10[-1].cameraMotion;
    --v6;
  }
  while ( v6 );
  MatrixForViewerOrthogonal(&viewInfo->viewParmsSet.frames[0].viewParms.camera.origin, &viewInfo->viewParmsSet.frames[1].viewParms.camera.axis, &in1);
  MatrixMultiply44Aligned(&in1, &v148, &mat);
  vec.v[0] = (float)(scene.scope.scopeLensRadius * scene.scope.scopeLensAxis.m[1].v[0]) + v133.v[0];
  vec.v[1] = (float)(scene.scope.scopeLensRadius * scene.scope.scopeLensAxis.m[1].v[1]) + v133.v[1];
  vec.v[2] = (float)(scene.scope.scopeLensRadius * scene.scope.scopeLensAxis.m[1].v[2]) + v133.v[2];
  v139.v[0] = (float)(scene.scope.scopeLensRadius * scene.scope.scopeLensAxis.m[2].v[0]) + v133.v[0];
  v139.v[2] = (float)(scene.scope.scopeLensRadius * scene.scope.scopeLensAxis.m[2].v[2]) + v133.v[2];
  vec.v[3] = FLOAT_1_0;
  v139.v[1] = (float)(scene.scope.scopeLensRadius * scene.scope.scopeLensAxis.m[2].v[1]) + v133.v[1];
  v139.v[3] = FLOAT_1_0;
  MatrixTransformVector44Aligned(&vec, &out, &v134);
  MatrixTransformVector44Aligned(&v139, &out, &v135);
  MatrixTransformVector44Aligned(&v133, &out, &v132);
  MatrixTransformVector44Aligned(&v133, &mat, &v136);
  if ( v132.v[3] < 0.00000011920929 || v136.v[3] < 0.00000011920929 )
  {
    v134.v[0] = 0.0;
    v134.v[1] = 0.0;
    v135.v[0] = 0.0;
    v135.v[1] = 0.0;
    v132.v[0] = 0.0;
    v132.v[1] = 0.0;
    v136.v[0] = 0.0;
    v136.v[1] = 0.0;
    viewInfo->scopeLensDistortionEnabled = 0;
    v18 = 0.0;
    v19 = 0i64;
    v21 = 0.0;
    v22 = 0i64;
  }
  else
  {
    _XMM0 = LODWORD(v134.v[3]);
    _XMM1 = LODWORD(v135.v[3]);
    __asm
    {
      vmaxss  xmm4, xmm1, xmm15
      vmaxss  xmm2, xmm0, xmm15
    }
    v134.v[0] = (float)(1.0 / *(float *)&_XMM2) * v134.v[0];
    LODWORD(v134.v[1]) = COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM2) * v134.v[1]) ^ _xmm;
    v135.v[0] = (float)(1.0 / *(float *)&_XMM4) * v135.v[0];
    v134.v[3] = *(float *)&_XMM2;
    v17 = LODWORD(FLOAT_1_0);
    v18 = (float)(1.0 / v132.v[3]) * v132.v[0];
    LODWORD(v135.v[1]) = COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM4) * v135.v[1]) ^ _xmm;
    *(float *)&v17 = (float)(1.0 / v132.v[3]) * v132.v[1];
    v19 = v17 ^ (unsigned int)_xmm;
    v20 = LODWORD(FLOAT_1_0);
    *(float *)&v20 = (float)(1.0 / v136.v[3]) * v136.v[1];
    v21 = (float)(1.0 / v136.v[3]) * v136.v[0];
    v22 = v20 ^ (unsigned int)_xmm;
    LODWORD(v136.v[1]) = v20 ^ _xmm;
    v135.v[3] = *(float *)&_XMM4;
    v132.v[0] = v18;
    v132.v[1] = *(float *)&v19;
    v136.v[0] = v21;
  }
  v23 = v21 - v18;
  v24 = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1]);
  *(float *)&v24 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1] - viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[1];
  *(float *)&v24 = *(float *)&v24 * *(float *)&v24;
  v25 = v24;
  v27 = v22;
  *(float *)&v27 = *(float *)&v22 - *(float *)&v19;
  v26 = v27;
  v28 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0] - viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[0];
  v29 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2] - viewInfo->viewParmsSet.frames[1].viewParms.camera.origin.v[2];
  v30 = v25;
  *(float *)&v30 = fsqrt((float)(*(float *)&v25 + (float)(v28 * v28)) + (float)(v29 * v29)) * (float)(1.0 / r_scope_relief_sway_cameradelta->current.value);
  _XMM1 = v30;
  __asm { vminss  xmm4, xmm1, xmm14 }
  v33 = v26;
  *(float *)&v33 = fsqrt((float)(*(float *)&v26 * *(float *)&v26) + (float)(v23 * v23)) * (float)(1.0 / r_scope_relief_sway_framedelta->current.value);
  _XMM1 = v33;
  __asm
  {
    vminss  xmm2, xmm1, xmm14
    vmaxss  xmm5, xmm4, xmm2
  }
  v37 = v19;
  *(float *)&v37 = fsqrt((float)(*(float *)&v19 * *(float *)&v19) + (float)(v18 * v18)) * (float)(1.0 / r_scope_relief_sway_screendelta->current.value);
  _XMM1 = v37;
  __asm
  {
    vminss  xmm2, xmm1, xmm14
    vmaxss  xmm13, xmm5, xmm2
  }
  v125 = (float)(*(float *)&_XMM13 * scene.scope.scopeEyeRelief_fullSpeedSway_movement) + (float)((float)(1.0 - *(float *)&_XMM13) * scene.scope.scopeEyeRelief_idleSway_movement);
  v42 = (float)((float)(*(float *)&_XMM13 * scene.scope.scopeEyeRelief_fullSpeedSway_freq) + (float)((float)(1.0 - *(float *)&_XMM13) * scene.scope.scopeEyeRelief_idleSway_freq)) * viewInfo->input.data->frameTime;
  v41 = v42;
  if ( viewInfo->clientIndex > (unsigned int)LOCAL_CLIENT_1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4542, ASSERT_TYPE_ASSERT, "(viewInfo->clientIndex >= 0 && viewInfo->clientIndex < 2)", (const char *)&queryFormat, "viewInfo->clientIndex >= 0 && viewInfo->clientIndex < STATIC_MAX_LOCAL_CLIENTS") )
      __debugbreak();
    v18 = v132.v[0];
    v19 = LODWORD(v132.v[1]);
  }
  clientIndex = viewInfo->clientIndex;
  v45 = (float)(v42 * r_scope_relief_sway_freq_x->current.value) + funcTimeX[clientIndex];
  v44 = v45;
  funcTimeX[clientIndex] = v45;
  if ( v45 > 1.0 )
  {
    v44 = v45 - 1.0;
    funcTimeX[clientIndex] = v45 - 1.0;
  }
  v130 = (float)((float)(sinf_0((float)(v44 * 3.1415927) * 2.0) * 0.5) * 2.0) * v125;
  v47 = (float)(v41 * r_scope_relief_sway_freq_y->current.value) + funcTimeY[clientIndex];
  v46 = v47;
  funcTimeY[clientIndex] = v47;
  if ( v47 > 1.0 )
  {
    v46 = v47 - 1.0;
    funcTimeY[clientIndex] = v47 - 1.0;
  }
  v126 = (float)((float)(sinf_0((float)(v46 * 3.1415927) * 2.0) * 0.5) * 2.0) * v125;
  v48 = v19;
  v49 = (float)((float)((float)(*(float *)&_XMM13 * scene.scope.scopeEyeRelief_fullSpeedMovementScale) + (float)((float)(1.0 - *(float *)&_XMM13) * scene.scope.scopeEyeRelief_idleMovementScale)) * scene.scope.scopeFadeInfo[0].fadeInFrac) + (float)((float)(1.0 - scene.scope.scopeFadeInfo[0].fadeInFrac) * scene.scope.scopeEyeRelief_hipMovementScale);
  v50 = (float)(v18 * -2.0) * v49;
  v51 = (float)(*(float *)&v19 * 2.0) * v49;
  *(float *)&v48 = fsqrt((float)(v51 * v51) + (float)(v50 * v50));
  _XMM4 = v48;
  __asm { vcmpless xmm0, xmm4, cs:__real@80000000 }
  v54 = (float)((float)(1.0 - scene.scope.scopeFadeInfo[0].fadeInFrac) * scene.scope.scopeEyeRelief_hipMaxMovement) + (float)(scene.scope.scopeFadeInfo[0].fadeInFrac * scene.scope.scopeEyeRelief_maxMovement);
  __asm { vblendvps xmm0, xmm4, xmm14, xmm0 }
  v56 = 1.0 / *(float *)&_XMM0;
  if ( *(float *)&_XMM4 > v54 )
  {
    v50 = (float)(v56 * v50) * v54;
    v51 = (float)(v56 * v51) * v54;
  }
  v57 = fsqrt((float)((float)(v127 * v127) + (float)(v128 * v128)) + (float)(v129 * v129)) - scene.scope.scopeEyeRelief_focusDistance;
  v58 = I_fclamp(scene.scope.scopeEyeRelief_outOfFocusDistance, 0.000099999997, 50.0);
  v59 = I_fclamp(COERCE_FLOAT(LODWORD(v57) & _xmm) / *(float *)&v58, 0.0, 1.0);
  if ( r_scope_relief_mul_aspect_ratio->current.enabled )
    v60 = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY / viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
  else
    v60 = FLOAT_1_0;
  v61 = (float)(v51 + v126) * v60;
  v62 = *(float *)&v59 * scene.scope.scopeEyeRelief_outOfFocuseUVScale;
  v63 = (float)(1.0 - *(float *)&v59) * scene.scope.scopeEyeRelief_focuseUVScale;
  viewInfo->input.sceneConstants.scopeEyeRelief.v[0] = v50 + v130;
  v64 = v132.v[0];
  viewInfo->input.sceneConstants.scopeEyeRelief.v[1] = v61;
  v65 = v132.v[1];
  viewInfo->input.sceneConstants.scopeEyeRelief.v[2] = v63 + v62;
  v66 = (float)(v65 + 1.0) * 0.5;
  v68 = LODWORD(v134.v[1]);
  *(float *)&v68 = v134.v[1] - v65;
  v67 = v68;
  v70 = LODWORD(v135.v[1]);
  *(float *)&v70 = v135.v[1] - v65;
  v69 = v70;
  v71 = v67;
  v72 = (float)(v64 + 1.0) * 0.5;
  *(float *)&v71 = fsqrt((float)(*(float *)&v67 * *(float *)&v67) + (float)((float)(v134.v[0] - v64) * (float)(v134.v[0] - v64)));
  _XMM2 = v71;
  v74 = v69;
  __asm { vmaxss  xmm3, xmm2, xmm15 }
  v76 = 2.0 / *(float *)&_XMM3;
  v77 = (float)(v135.v[0] - v64) * (float)(v135.v[0] - v64);
  v78 = v133.v[2];
  *(float *)&v74 = fsqrt((float)(*(float *)&v69 * *(float *)&v69) + v77);
  _XMM2 = v74;
  __asm { vmaxss  xmm3, xmm2, xmm15 }
  *(float *)&_XMM2 = v133.v[1];
  v81 = 2.0 / *(float *)&_XMM3;
  *(float *)&_XMM3 = v133.v[0];
  viewInfo->input.sceneConstants.scopeEyeRelief.v[3] = 0.0;
  viewInfo->input.sceneConstants.scopeLensPos.v[0] = v72;
  viewInfo->input.sceneConstants.scopeLensPos.v[1] = v66;
  viewInfo->input.sceneConstants.scopeLensPos.v[2] = v76;
  viewInfo->input.sceneConstants.scopeLensPos.v[3] = v81;
  scopeLensRadius = data->scope.scopeLensRadius;
  v83 = scopeLensRadius * data->scope.scopeLensAxis.m[2].v[0];
  v84 = scopeLensRadius * data->scope.scopeLensAxis.m[1].v[0];
  *(float *)&v69 = scopeLensRadius * data->scope.scopeLensAxis.m[1].v[1];
  v85 = scopeLensRadius * data->scope.scopeLensAxis.m[1].v[2];
  v86 = scopeLensRadius * data->scope.scopeLensAxis.m[2].v[1];
  v87 = scopeLensRadius * data->scope.scopeLensAxis.m[2].v[2];
  v88 = *(float *)&_XMM2 - *(float *)&v69;
  v89 = *(float *)&_XMM3 - v84;
  *(float *)&v69 = *(float *)&v69 + *(float *)&_XMM2;
  v149 = (float)(*(float *)&_XMM3 - v84) - v83;
  *(float *)v150 = v88 - v86;
  *(float *)&v150[1] = (float)(v78 - v85) - v87;
  *(float *)&_XMM3 = v84 + *(float *)&_XMM3;
  *(float *)&v150[2] = *(float *)&_XMM3 - v83;
  *(float *)&v150[3] = *(float *)&v69 - v86;
  *(float *)&v150[4] = (float)(v85 + v78) - v87;
  *(float *)&v150[5] = *(float *)&_XMM3 + v83;
  *(float *)&v150[6] = v86 + *(float *)&v69;
  *(float *)&v150[7] = (float)(v85 + v78) + v87;
  *(float *)&v150[8] = v89 + v83;
  *(float *)&v74 = (float)(v78 - v85) + v87;
  *(float *)&v150[9] = v88 + v86;
  _XMM6 = LODWORD(FLOAT_3_4028235e38);
  _XMM7 = LODWORD(FLOAT_N3_4028235e38);
  _XMM8 = LODWORD(FLOAT_3_4028235e38);
  _XMM9 = LODWORD(FLOAT_N3_4028235e38);
  v150[10] = v74;
  v94 = 0;
  v95 = (float *)v150;
  v96 = 4i64;
  do
  {
    v97 = *v95;
    v140.v[0] = *(v95 - 1);
    v140.v[2] = v95[1];
    v140.v[1] = v97;
    v140.v[3] = FLOAT_1_0;
    MatrixTransformVector44Aligned(&v140, &out, &v137);
    if ( v137.v[3] > 0.00000011920929 )
    {
      LODWORD(v137.v[1]) = COERCE_UNSIGNED_INT((float)(1.0 / v137.v[3]) * v137.v[1]) ^ _xmm;
      __asm
      {
        vminss  xmm8, xmm8, xmm1
        vmaxss  xmm9, xmm9, xmm1
      }
      v137.v[0] = (float)(1.0 / v137.v[3]) * v137.v[0];
      __asm
      {
        vminss  xmm6, xmm6, xmm2
        vmaxss  xmm7, xmm7, xmm2
      }
      ++v94;
    }
    v95 += 3;
    --v96;
  }
  while ( v96 );
  if ( v94 == 4 )
  {
    viewInfo->input.sceneConstants.scopeLensBounds.v[3] = (float)(*(float *)&_XMM9 + 1.0) * 0.5;
    viewInfo->input.sceneConstants.scopeLensBounds.v[0] = (float)(*(float *)&_XMM6 + 1.0) * 0.5;
    viewInfo->input.sceneConstants.scopeLensBounds.v[1] = (float)(*(float *)&_XMM8 + 1.0) * 0.5;
    viewInfo->input.sceneConstants.scopeLensBounds.v[2] = (float)(*(float *)&_XMM7 + 1.0) * 0.5;
  }
  else
  {
    *(_QWORD *)viewInfo->input.sceneConstants.scopeLensBounds.v = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.scopeLensBounds.xyz.z = 0i64;
  }
  scopeLensInnerDisk_low = LODWORD(scene.scope.scopeLensInnerDisk);
  v99 = I_fclamp(scene.scope.scopeLensInnerDiskMag, 1.0, 3.0);
  v100 = *(float *)&v99;
  v101 = I_fclamp(scene.scope.scopeLensOuterRingMag, 1.0, 3.0);
  v103 = scopeLensInnerDisk_low;
  *(float *)&v103 = *(float *)&scopeLensInnerDisk_low + 0.00390625;
  _XMM1 = v103;
  __asm { vmaxss  xmm2, xmm1, xmm7 }
  v106 = LODWORD(FLOAT_1_0);
  *(float *)&v106 = 1.0 / *(float *)&v101;
  _XMM6 = v106;
  v107 = I_fclamp(*(float *)&_XMM2 - *(float *)&scopeLensInnerDisk_low, 0.00390625, 1.0);
  viewInfo->input.sceneConstants.scopeLensDistortion.v[0] = *(float *)&scopeLensInnerDisk_low;
  viewInfo->input.sceneConstants.scopeLensDistortion.v[1] = 1.0 / *(float *)&v107;
  v109 = LODWORD(FLOAT_1_0);
  *(float *)&v109 = 1.0 / v100;
  _XMM0 = v109;
  __asm { vminss  xmm1, xmm0, xmm14 }
  viewInfo->input.sceneConstants.scopeLensDistortion.v[2] = *(float *)&_XMM1;
  __asm { vminss  xmm2, xmm6, xmm14 }
  viewInfo->input.sceneConstants.scopeLensDistortion.v[3] = *(float *)&_XMM2;
  _XMM1 = LODWORD(scene.scope.scopeLensFadeEnd);
  __asm { vminss  xmm4, xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeLensFadeStart; GfxScene scene }
  fadeOutFrac = scene.scope.scopeFadeInfo[0].fadeOutFrac;
  v116 = _XMM4;
  *(float *)&v116 = *(float *)&_XMM4 + 0.00390625;
  _XMM0 = v116;
  __asm { vmaxss  xmm1, xmm0, xmm1 }
  *(float *)&_XMM2 = *(float *)&_XMM1 - *(float *)&_XMM4;
  *(float *)&_XMM1 = scene.scope.scopeFadeInfo[0].fadeInFrac;
  viewInfo->input.sceneConstants.scopeLensFade.v[0] = *(float *)&_XMM4;
  viewInfo->input.sceneConstants.scopeLensFade.v[1] = 1.0 / *(float *)&_XMM2;
  viewInfo->input.sceneConstants.scopeLensFade.v[2] = *(float *)&_XMM1;
  viewInfo->input.sceneConstants.scopeLensFade.v[3] = fadeOutFrac;
  fadeInFrac = scene.scope.scopeFadeInfo[0].fadeInFrac;
  if ( scene.scope.scopeUseHybridSetup )
  {
    v119 = scene.scope.scopeFadeInfo[1].fadeOutFrac;
    v120 = scene.scope.scopeFadeInfo[1].fadeInFrac;
  }
  else
  {
    v119 = scene.scope.scopeFadeInfo[0].fadeOutFrac;
    v120 = scene.scope.scopeFadeInfo[0].fadeInFrac;
  }
  viewInfo->input.sceneConstants.scopeLensFadeForHybrid.v[0] = scene.scope.scopeFadeInfo[0].fadeOutFrac;
  viewInfo->input.sceneConstants.scopeLensFadeForHybrid.v[1] = fadeInFrac;
  viewInfo->input.sceneConstants.scopeLensFadeForHybrid.v[2] = v119;
  viewInfo->input.sceneConstants.scopeLensFadeForHybrid.v[3] = v120;
  if ( scene.scope.scopeLensColorRed > 0.039280001 )
    v121 = powf_0((float)(scene.scope.scopeLensColorRed * 0.94786733) + 0.052132703, 2.4000001);
  else
    v121 = scene.scope.scopeLensColorRed * 0.077399381;
  if ( scene.scope.scopeLensColorGreen > 0.039280001 )
    v122 = powf_0((float)(scene.scope.scopeLensColorGreen * 0.94786733) + 0.052132703, 2.4000001);
  else
    v122 = scene.scope.scopeLensColorGreen * 0.077399381;
  if ( scene.scope.scopeLensColorBlue > 0.039280001 )
    v123 = powf_0((float)(scene.scope.scopeLensColorBlue * 0.94786733) + 0.052132703, 2.4000001);
  else
    v123 = scene.scope.scopeLensColorBlue * 0.077399381;
  scopeLensBrightness = scene.scope.scopeLensBrightness;
  viewInfo->input.sceneConstants.scopeLensColor.v[0] = scene.scope.scopeLensBrightness * v121;
  viewInfo->input.sceneConstants.scopeLensColor.v[1] = scopeLensBrightness * v122;
  viewInfo->input.sceneConstants.scopeLensColor.v[2] = scopeLensBrightness * v123;
  viewInfo->input.sceneConstants.scopeLensColor.v[3] = 1.0;
}

/*
==============
R_SetupViewInfo
==============
*/
void R_SetupViewInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms, const GfxViewParmsSet *viewParmsSet)
{
  int height; 
  const dvar_t *v7; 
  signed int integer; 
  __int64 v9; 
  __int64 clientIndex; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  int voxelTreeCount; 
  int v15; 
  unsigned int v16; 
  GfxVoxelTree *voxelTree; 
  vec3_t *p_halfSize; 
  unsigned int v19; 
  GfxHeightfield *v20; 
  GfxHeightfield *heightfields; 
  unsigned __int64 voxelTreeZoneIndex; 
  GfxBackEndData *v23; 
  __int64 v24; 
  GfxViewInfo *v25; 
  vec4_t v26; 
  int v28; 
  char v29; 
  float value; 
  int v31; 
  GfxDaltonizeType daltonizeMode; 
  GfxDaltonizeType v33; 
  bool enabled; 
  bool v35; 
  bool v36; 
  float v37; 
  int v38; 
  GfxDaltonizeType v39; 
  GfxDaltonizeType v40; 
  bool v41; 
  bool v42; 
  bool v43; 
  const GfxImage *ProbeOctahedronImageArray; 
  GfxImage *blackImageCube; 
  GfxImage *blackImage; 
  double v47; 
  float width; 
  float v49; 
  float v50; 
  float spotOmniScreenSpaceShadowsTraceDistance; 
  float spotOmniScreenSpaceShadowsSamplesPerLight; 
  float m_fade; 
  float v59; 
  bool v60; 
  float worldMotionBlurOverride; 
  float v62; 
  float v65; 
  float v66; 
  unsigned int FrustumHeight; 
  unsigned int FrustumWidth; 
  bool v69; 
  const dvar_t *v70; 
  const dvar_t *v71; 
  GfxBackEndData *v72; 
  float v73; 
  const dvar_t *v74; 
  float v75; 
  float v76; 
  float *v77; 
  GfxFog *p_fog; 
  __int64 v79; 
  GfxFog *v80; 
  __int128 v81; 
  const dvar_t *v82; 
  const dvar_t *v83; 
  const dvar_t *v84; 
  const dvar_t *v85; 
  const dvar_t *v86; 
  const dvar_t *v87; 
  float v88; 
  const dvar_t *v89; 
  const dvar_t *v90; 
  const dvar_t *v91; 
  const dvar_t *v92; 
  __int128 unsignedInt; 
  __int128 v96; 
  float v99; 
  float rimLightStartDistance; 
  float v101; 
  float v102; 
  float rimLightFill; 
  int v104; 
  int v105; 
  float viewModelFocusDistance; 
  double Float_Internal; 
  double v108; 
  double v109; 
  bool v110; 
  int v111; 
  const dvar_t *v115; 
  const dvar_t *v116; 
  const dvar_t *v117; 
  bool v118; 
  bool v119; 
  const dvar_t *v120; 
  float v121; 
  float v122; 
  float v123; 
  char v124; 
  GfxColorGrading *p_colorGrading; 
  const GfxGradingClut *nvgColorGrading; 
  unsigned int LightmapAtlasTextureSize; 
  float v128; 
  float v129; 
  unsigned int LightGridVolumesAtlasTextureDepth; 
  float v131; 
  float v132; 
  float eyeHighlightIntensity; 
  float v134; 
  float v135; 
  float eyeHighlightBulbRadius; 
  float v137; 
  GfxHudOutlineState *p_hudOutline; 
  GfxHudOutlineState *v139; 
  vec4_t v140; 
  float sceneRtWidth; 
  int sceneRtHeight; 
  float v143; 
  float v144; 
  float tanHalfFovY; 
  float v146; 
  float tanHalfFovX; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float skyBlendFeather; 
  float v159; 
  float v160; 
  float v161; 
  float v162; 
  float v164; 
  float v165; 
  unsigned int *outReProjFloatZWidth; 
  unsigned int *outReProjFloatZHeight; 
  float v169; 
  R_RT_ColorHandle v170; 
  float v171; 
  float v172; 
  float v173; 
  float v174; 
  float v175; 
  float v176; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  float v181; 
  float v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  float v188; 
  float v189; 
  float v190; 
  vec4_t result; 
  vec4_t v192; 
  vec4_t vec; 
  tmat33_t<vec3_t> axis; 
  float v195; 
  float v196; 
  float v197; 
  float v198; 
  float v199; 
  float v200; 
  vec4_t out; 
  tmat44_t<vec4_t> dst; 

  if ( !sceneParms->sceneRtWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6340, ASSERT_TYPE_ASSERT, "( ( sceneParms->sceneRtWidth > 0 ) )", "( sceneParms->sceneRtWidth ) = %i", 0) )
    __debugbreak();
  if ( !sceneParms->sceneRtHeight )
  {
    LODWORD(outReProjFloatZWidth) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6341, ASSERT_TYPE_ASSERT, "( ( sceneParms->sceneRtHeight > 0 ) )", "( sceneParms->sceneRtHeight ) = %i", outReProjFloatZWidth) )
      __debugbreak();
  }
  if ( !sceneParms->sceneViewport.width )
  {
    LODWORD(outReProjFloatZWidth) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6344, ASSERT_TYPE_ASSERT, "( ( sceneParms->sceneViewport.width > 0 ) )", "( sceneParms->sceneViewport.width ) = %i", outReProjFloatZWidth) )
      __debugbreak();
  }
  if ( !sceneParms->sceneViewport.height )
  {
    LODWORD(outReProjFloatZWidth) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6345, ASSERT_TYPE_ASSERT, "( ( sceneParms->sceneViewport.height > 0 ) )", "( sceneParms->sceneViewport.height ) = %i", outReProjFloatZWidth) )
      __debugbreak();
  }
  R_CopyCmdBufInput(&viewInfo->input, &g_gfxCmdBufInput);
  viewInfo->input.data = frontEndDataOut;
  *((_BYTE *)&viewInfo->input + 7920) ^= (*((_BYTE *)&viewInfo->input + 7920) ^ (2 * r_balanceOpaqueLists->current.enabled)) & 2;
  viewInfo->input.resolution = sceneParms->resolution;
  if ( sceneParms->resolution.step == GFX_RESOLUTION_STEP_NONE )
  {
    if ( sceneParms->resolution.sceneWidthStep0 != sceneParms->sceneRtWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3462, ASSERT_TYPE_ASSERT, "((sceneParms->resolution.step != GFX_RESOLUTION_STEP_NONE) || (sceneParms->resolution.sceneWidthStep0 == sceneParms->sceneRtWidth))", (const char *)&queryFormat, "(sceneParms->resolution.step != GFX_RESOLUTION_STEP_NONE) || (sceneParms->resolution.sceneWidthStep0 == sceneParms->sceneRtWidth)") )
      __debugbreak();
    if ( sceneParms->resolution.step == GFX_RESOLUTION_STEP_NONE && sceneParms->resolution.sceneHeightStep0 != sceneParms->sceneRtHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3463, ASSERT_TYPE_ASSERT, "((sceneParms->resolution.step != GFX_RESOLUTION_STEP_NONE) || (sceneParms->resolution.sceneHeightStep0 == sceneParms->sceneRtHeight))", (const char *)&queryFormat, "(sceneParms->resolution.step != GFX_RESOLUTION_STEP_NONE) || (sceneParms->resolution.sceneHeightStep0 == sceneParms->sceneRtHeight)") )
      __debugbreak();
  }
  height = viewInfo->sceneGeoViewport.height;
  if ( height < 1 )
    height = 1;
  v7 = DVARINT_r_tracerMaxMips;
  integer = 31 - __lzcnt(height);
  if ( integer > 16 )
    integer = 16;
  if ( integer < 0 )
    integer = 0;
  if ( !DVARINT_r_tracerMaxMips && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tracerMaxMips") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer < integer )
    integer = v7->current.integer;
  viewInfo->input.sceneConstants.mipSizes.v[0] = integer;
  R_SetMovieImages(&viewInfo->input);
  v9 = 2i64;
  viewInfo->teleported = sceneParms->playerTeleported;
  clientIndex = (unsigned int)viewInfo->clientIndex;
  if ( (unsigned int)clientIndex >= 2 )
  {
    LODWORD(outReProjFloatZHeight) = 2;
    LODWORD(outReProjFloatZWidth) = viewInfo->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6315, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_lastValidFrameCount ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_lastValidFrameCount )\n\t%i not in [0, %i)", outReProjFloatZWidth, outReProjFloatZHeight) )
      __debugbreak();
  }
  v11 = 3i64;
  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) != 0 )
  {
    v12 = -1;
  }
  else
  {
    if ( viewInfo->input.data->frameCount - s_lastValidFrame[clientIndex] != 1 || R_CheckDvarModified(r_postAA) || R_CheckDvarModified(r_ssao) || viewInfo->teleported )
      s_lastValidFrameCount[clientIndex] = 0;
    v12 = s_lastValidFrameCount[clientIndex];
    s_lastValidFrame[clientIndex] = viewInfo->input.data->frameCount;
    v13 = 3;
    if ( (int)(v12 + 1) < 3 )
      v13 = v12 + 1;
    s_lastValidFrameCount[clientIndex] = v13;
  }
  viewInfo->validFrameCount = v12;
  viewInfo->dlsUseAsyncCompute = r_dlsDebugMode->current.integer == 2;
  if ( !rgp.world || rgp.world->voxelTreeCount )
  {
    voxelTreeCount = rgp.world->voxelTreeCount;
    v15 = 0;
    v16 = 32;
    if ( voxelTreeCount <= 0 )
      goto LABEL_59;
    voxelTree = rgp.world->voxelTree;
    p_halfSize = &voxelTree->zoneBound.halfSize;
    while ( 1 )
    {
      v19 = v16;
      if ( LODWORD(p_halfSize[1].v[0]) )
      {
        v16 = v15;
        if ( v19 != 32 )
          v16 = v19;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(viewParmsSet->frames[0].viewParms.camera.origin.v[0] - voxelTree->zoneBound.midPoint.v[0]) & _xmm) < p_halfSize->v[0] && COERCE_FLOAT(COERCE_UNSIGNED_INT(viewParmsSet->frames[0].viewParms.camera.origin.v[1] - p_halfSize[-1].v[1]) & _xmm) < p_halfSize->v[1] && COERCE_FLOAT(COERCE_UNSIGNED_INT(viewParmsSet->frames[0].viewParms.camera.origin.v[2] - p_halfSize[-1].v[2]) & _xmm) < p_halfSize->v[2] )
          break;
      }
      ++v15;
      ++voxelTree;
      p_halfSize += 10;
      if ( v15 >= voxelTreeCount )
        goto LABEL_58;
    }
    v16 = v15;
LABEL_58:
    if ( v16 == 32 )
LABEL_59:
      Sys_Error((const ObfuscateErrorText)&stru_144436FE8);
    viewInfo->input.voxelTreeZoneIndex = v16;
  }
  R_GpuLightGrid_SetupFrame(frontEndDataOut, viewInfo);
  if ( s_world.heightfieldCount <= 0 )
  {
    viewInfo->heightfield.image = rgp.blackImage;
  }
  else
  {
    v20 = &s_world.heightfields[viewInfo->input.voxelTreeZoneIndex];
    viewInfo->heightfield.bounds.midPoint.v[0] = v20->bounds.midPoint.v[0];
    viewInfo->heightfield.bounds.midPoint.v[1] = v20->bounds.midPoint.v[1];
    viewInfo->heightfield.bounds.midPoint.v[2] = v20->bounds.midPoint.v[2];
    heightfields = s_world.heightfields;
    voxelTreeZoneIndex = viewInfo->input.voxelTreeZoneIndex;
    viewInfo->heightfield.bounds.halfSize.v[0] = s_world.heightfields[voxelTreeZoneIndex].bounds.halfSize.v[0];
    viewInfo->heightfield.bounds.halfSize.v[1] = heightfields[voxelTreeZoneIndex].bounds.halfSize.v[1];
    viewInfo->heightfield.bounds.halfSize.v[2] = heightfields[voxelTreeZoneIndex].bounds.halfSize.v[2];
    viewInfo->heightfield.image = s_world.heightfields[viewInfo->input.voxelTreeZoneIndex].image;
  }
  v23 = frontEndDataOut;
  v24 = 9i64;
  frontEndDataOut->sunShadow.partition[0].dynBounds = viewInfo->sunShadowAndDepthHackSurfBounds[1];
  v23->sunShadow.partition[1].dynBounds = viewInfo->sunShadowAndDepthHackSurfBounds[2];
  v23->sunShadow.partition[2].dynBounds = viewInfo->sunShadowAndDepthHackSurfBounds[3];
  viewInfo->sceneDef = scene.def;
  v25 = viewInfo;
  do
  {
    v25 = (GfxViewInfo *)((char *)v25 + 128);
    v26 = viewParmsSet->frames[0].viewParms.viewMatrix.m.m[0];
    viewParmsSet = (const GfxViewParmsSet *)((char *)viewParmsSet + 128);
    v25[-1].drawList[64].superTerrainSurfList = (GfxStDrawSurfList)v26;
    *(_OWORD *)&v25[-1].spotshadowActiveCache.m_surfaceID = *(_OWORD *)&viewParmsSet[-1].frames[2].viewParms.camera.axis.row0.y;
    *(_OWORD *)&v25[-1].spotshadowActiveCache.m_tracking.m_name = *(_OWORD *)&viewParmsSet[-1].frames[2].viewParms.camera.axis.row1.z;
    *(_OWORD *)&v25[-1].spotshadowHTileMask = *(_OWORD *)&viewParmsSet[-1].frames[2].viewParms.camera.tanHalfFovX;
    *(_OWORD *)&v25[-1].sunshadowCacheRt.m_surfaceID = *(_OWORD *)viewParmsSet[-1].frames[2].viewParms.camera.zPlanes;
    *(_OWORD *)&v25[-1].sunshadowCacheRt.m_tracking.m_name = *(_OWORD *)&viewParmsSet[-1].frames[2].viewParms.camera.focalLength;
    *(_OWORD *)&v25[-1].sunShadowCacheBeforeState = *(_OWORD *)&viewParmsSet[-1].frames[2].viewParms.camera.visibilityQueryDistance;
    *(_OWORD *)&v25[-1].shellShock.enabled = *(_OWORD *)&viewParmsSet[-1].frames[2].viewParms.cameraMotion;
    --v24;
  }
  while ( v24 );
  viewInfo->ssrSourceSceneViewport = sceneParms->ssrSourceSceneViewport;
  viewInfo->sunshadowSoftness = sceneParms->sunshadowSoftness;
  _XMM9 = 0i64;
  if ( rg.sunSampleSizeNear == 0.25 )
  {
    if ( sceneParms->sunshadowSampleSizeNear <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6404, ASSERT_TYPE_ASSERT, "(sceneParms->sunshadowSampleSizeNear > 0.0f)", (const char *)&queryFormat, "sceneParms->sunshadowSampleSizeNear > 0.0f") )
      __debugbreak();
    viewInfo->sunshadowSampleSizeNear = sceneParms->sunshadowSampleSizeNear;
  }
  else
  {
    viewInfo->sunshadowSampleSizeNear = rg.sunSampleSizeNear;
  }
  viewInfo->sceneViewport = sceneParms->sceneViewport;
  viewInfo->sceneGeoViewport = sceneParms->sceneGeoViewport;
  viewInfo->sceneEmissiveViewport = sceneParms->sceneEmissiveViewport;
  viewInfo->displayViewport = sceneParms->displayViewport;
  viewInfo->scissorViewport = sceneParms->scissorViewport;
  viewInfo->scissorGeoViewport = sceneParms->scissorGeoViewport;
  viewInfo->scissorEmissiveViewport = sceneParms->scissorEmissiveViewport;
  *(double *)&viewInfo->dualViewScopeState.m_fade = *(double *)&sceneParms->dualViewScopeState.m_fade;
  viewInfo->dualViewScopeState.hipFstop = sceneParms->dualViewScopeState.hipFstop;
  viewInfo->blurRadiusScript = sceneParms->blurRadius;
  LODWORD(viewInfo->blurRadiusDvar) = r_blur->current.integer;
  *(__m256i *)&viewInfo->thermalParams.useNightAndThermalVisionCombo = *(__m256i *)&sceneParms->thermalParams.useNightAndThermalVisionCombo;
  *(__m256i *)&viewInfo->thermalParams.thermalFogExtinctionWeight = *(__m256i *)&sceneParms->thermalParams.thermalFogExtinctionWeight;
  *(_OWORD *)&viewInfo->thermalParams.thermalHotColor.z = *(_OWORD *)&sceneParms->thermalParams.thermalHotColor.z;
  viewInfo->thermalParams.thermalRadiationLut = sceneParms->thermalParams.thermalRadiationLut;
  *(_OWORD *)&viewInfo->screenSpaceShadows.spotOmniScreenSpaceshadowSamplesTotal = *(_OWORD *)&sceneParms->screenSpaceShadows.spotOmniScreenSpaceshadowSamplesTotal;
  *(double *)&viewInfo->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDelta = *(double *)&sceneParms->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDelta;
  viewInfo->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta = sceneParms->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta;
  viewInfo->skyIlluminationRadialDistanceBias = sceneParms->skyIlluminationRadialDistanceBias;
  *(_OWORD *)&viewInfo->eyeVirtualHighlight.eyeHighlightIntensity = *(_OWORD *)&sceneParms->eyeVirtualHighlight.eyeHighlightIntensity;
  *(double *)&viewInfo->eyeVirtualHighlight.eyeHighlightBulbRadius = *(double *)&sceneParms->eyeVirtualHighlight.eyeHighlightBulbRadius;
  viewInfo->eyeVirtualHighlight.eyeHighlightHeading = sceneParms->eyeVirtualHighlight.eyeHighlightHeading;
  if ( rg.useNightAndThermalVisionComboTweak )
    R_ThermalParamsFromDvars(viewInfo);
  R_SetupNightAndThermalVision(viewInfo);
  *(__m256i *)&viewInfo->depthScanParams.enabled = *(__m256i *)&sceneParms->depthScanParams.enabled;
  *(__m256i *)&viewInfo->depthScanParams.scrollParams.xyz.z = *(__m256i *)&sceneParms->depthScanParams.scrollParams.xyz.z;
  *(vec4_t *)((char *)&viewInfo->depthScanParams.outlineColor + 8) = *(vec4_t *)((char *)&sceneParms->depthScanParams.outlineColor + 8);
  *(double *)&viewInfo->depthScanParams.overlayColor.xyz.z = *(double *)&sceneParms->depthScanParams.overlayColor.xyz.z;
  *(_OWORD *)&viewInfo->dustParams.dustHeading = *(_OWORD *)&sceneParms->dustParmas.dustHeading;
  *(double *)&viewInfo->dustParams.dustPowerCurve = *(double *)&sceneParms->dustParmas.dustPowerCurve;
  v28 = 1;
  viewInfo->dustParams.dustSmoothMax = sceneParms->dustParmas.dustSmoothMax;
  v29 = 1;
  viewInfo->drawStaticDefaultModels = rgp.gameSortedStaticModels;
  value = r_daltonizeIntensity->current.value;
  v31 = r_daltonizeForceMode->current.integer;
  daltonizeMode = (char)v31;
  if ( !v31 )
    daltonizeMode = sceneParms->daltonizeMode;
  if ( !v31 )
    v29 = sceneParms->daltonizeTargets & 1;
  if ( daltonizeMode == R_DALTONIZE_NONE || !v29 )
    value = 0.0;
  v33 = R_DALTONIZE_NONE;
  if ( value > 0.0 )
    v33 = daltonizeMode;
  enabled = r_colorblindMode->current.enabled;
  v35 = enabled || v33;
  viewInfo->daltonizeOptions.m_enabled = v35;
  v36 = 1;
  viewInfo->daltonizeOptions.m_correctionMode = v33;
  viewInfo->daltonizeOptions.m_correctionScale = value;
  viewInfo->daltonizeOptions.m_simulationMode = enabled;
  v37 = r_daltonizeUIIntensity->current.value;
  v38 = r_daltonizeForceMode->current.integer;
  v39 = (char)v38;
  if ( !v38 )
    v39 = sceneParms->daltonizeMode;
  if ( !v38 )
    v36 = (sceneParms->daltonizeTargets & 2) != 0;
  if ( v39 == R_DALTONIZE_NONE || !v36 )
    v37 = 0.0;
  v40 = R_DALTONIZE_NONE;
  if ( v37 > 0.0 )
    v40 = v39;
  v41 = r_colorblindMode->current.enabled;
  v42 = v41 || v40;
  viewInfo->uiDaltonizeOptions.m_enabled = v42;
  viewInfo->uiDaltonizeOptions.m_correctionMode = v40;
  viewInfo->uiDaltonizeOptions.m_correctionScale = v37;
  viewInfo->uiDaltonizeOptions.m_simulationMode = v41;
  v43 = r_useShadowGeomOpt->current.enabled && (rgp.world->shadowGeomOptimized || rgp.world->dpvs.surfaceCastsSunShadowOpt);
  viewInfo->useShadowGeomOpt = v43;
  viewInfo->blackLevel = sceneParms->blackLevel;
  if ( rgp.world )
  {
    if ( rg.useRProbeOctahedron )
    {
      ProbeOctahedronImageArray = R_ReflectionProbe_GetProbeOctahedronImageArray();
      if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      viewInfo->input.codePersistentImages[39] = ProbeOctahedronImageArray;
      blackImageCube = rgp.blackImageCube;
    }
    else
    {
      blackImage = rgp.blackImage;
      if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      viewInfo->input.codePersistentImages[39] = blackImage;
      blackImageCube = (GfxImage *)R_ReflectionProbe_GetProbeImageArray();
    }
    if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    viewInfo->input.codePersistentImages[40] = blackImageCube;
    v28 = 1;
  }
  v195 = 0.0;
  v196 = 0.0;
  v197 = 0.0;
  v169 = COERCE_FLOAT(R_ReflectionProbe_GetReflectionProbeCount());
  *(_QWORD *)viewInfo->input.sceneConstants.reflectionProbeParams.v = 0i64;
  viewInfo->input.sceneConstants.reflectionProbeParams.v[2] = 0.0;
  viewInfo->input.sceneConstants.reflectionProbeParams.v[3] = v169;
  v198 = v169;
  LODWORD(v47) = 0;
  width = 0.0;
  v49 = 0.0;
  if ( rg.useRProbeOctahedron )
  {
    width = (float)R_ReflectionProbe_GetProbeOctahedronImageArray()->width;
    v47 = I_fres(width);
    LODWORD(v49) = (rg.useRProbeOctahedron >= 2) + 2;
  }
  v50 = (float)r_reflectionProbeOctahedronLodBias->current.integer;
  viewInfo->input.sceneConstants.reflectionProbeOctahedron.v[0] = width;
  viewInfo->input.sceneConstants.reflectionProbeOctahedron.v[1] = *(float *)&v47;
  viewInfo->input.sceneConstants.reflectionProbeOctahedron.v[2] = v49;
  viewInfo->input.sceneConstants.reflectionProbeOctahedron.v[3] = v50;
  R_SetScreenSpaceReflectionInfo(viewInfo, sceneParms);
  spotOmniScreenSpaceShadowsTraceDistance = viewInfo->screenSpaceShadows.spotOmniScreenSpaceShadowsTraceDistance;
  _XMM1 = LODWORD(viewInfo->screenSpaceShadows.spotOmniScreenSpaceshadowSamplesTotal);
  spotOmniScreenSpaceShadowsSamplesPerLight = viewInfo->screenSpaceShadows.spotOmniScreenSpaceShadowsSamplesPerLight;
  _XMM8 = _xmm;
  __asm
  {
    vcmpltss xmm0, xmm9, xmm3
    vblendvps xmm0, xmm9, xmm8, xmm0
  }
  viewInfo->input.sceneConstants.screenSpaceShadowsParams.v[0] = *(float *)&_XMM0;
  viewInfo->input.sceneConstants.screenSpaceShadowsParams.v[1] = *(float *)&_XMM1;
  viewInfo->input.sceneConstants.screenSpaceShadowsParams.v[2] = spotOmniScreenSpaceShadowsSamplesPerLight;
  viewInfo->input.sceneConstants.screenSpaceShadowsParams.v[3] = spotOmniScreenSpaceShadowsTraceDistance;
  m_fade = viewInfo->dualViewScopeState.m_fade;
  if ( m_fade < 0.0 || m_fade > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4153, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( viewInfo->dualViewScopeState.m_fade ) && ( viewInfo->dualViewScopeState.m_fade ) <= ( 1.0f )", "viewInfo->dualViewScopeState.m_fade not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", m_fade, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  v59 = 1.0 - viewInfo->dualViewScopeState.m_fade;
  v60 = rg.mbEnable && (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x8000) != 0 && v59 > 0.0;
  viewInfo->motionBlur.enabled = v60;
  if ( v60 && r_mbWorldEnable->current.enabled )
  {
    worldMotionBlurOverride = sceneParms->worldMotionBlurOverride;
    if ( worldMotionBlurOverride <= 0.0 )
      worldMotionBlurOverride = r_mbVelocityScaleViewModel->current.value;
    v62 = worldMotionBlurOverride * v59;
  }
  else
  {
    v62 = 0.0;
  }
  viewInfo->motionBlur.velocityScale = v62;
  if ( viewInfo->motionBlur.enabled && r_mbViewModelEnable->current.enabled )
  {
    _XMM0 = r_mbVelocityScaleViewModel->current.unsignedInt;
    __asm { vmaxss  xmm1, xmm0, dword ptr [rsi+0AB4h] }
    v65 = *(float *)&_XMM1 * v59;
  }
  else
  {
    v65 = 0.0;
  }
  viewInfo->motionBlur.velocityScaleViewModel = v65;
  if ( viewInfo->motionBlur.enabled && r_mbVelocityFpsCompensation->current.enabled )
    v66 = 0.016666668 / viewInfo->input.data->frameTime;
  else
    v66 = *(float *)&_xmm;
  viewInfo->motionBlur.velocityFpsCompensationScale = v66;
  R_SetVelocityInfo(viewInfo, sceneParms->sceneRtWidth, sceneParms->sceneRtHeight);
  R_SetSSAOInfo(viewInfo, sceneParms->sceneRtWidth, sceneParms->sceneRtHeight, &sceneParms->ssao);
  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x40000) != 0 )
  {
    viewInfo->volumeLightScatter.enabled = 0;
  }
  else
  {
    *(__m256i *)&viewInfo->volumeLightScatter.enabled = *(__m256i *)&sceneParms->volumeLightScatter.enabled;
    *(double *)&viewInfo->volumeLightScatter.depthAttenuation.y = *(double *)&sceneParms->volumeLightScatter.depthAttenuation.y;
  }
  FrustumHeight = R_VOL_GetFrustumHeight(viewInfo);
  FrustumWidth = R_VOL_GetFrustumWidth(viewInfo);
  R_SetForwardPlusClusterInfo(viewInfo, FrustumWidth, FrustumHeight);
  *(__m256i *)&viewInfo->volumetrics.enabled = *(__m256i *)&sceneParms->volumetrics.enabled;
  *(__m256i *)&viewInfo->volumetrics.omniBrightness = *(__m256i *)&sceneParms->volumetrics.omniBrightness;
  *(_OWORD *)&viewInfo->volumetrics.heightFogBaseHeight = *(_OWORD *)&sceneParms->volumetrics.heightFogBaseHeight;
  v69 = viewInfo->volumetrics.enabled && *((int *)&viewInfo->viewportFeatures + 10) < 0 && rg.volumetrics;
  viewInfo->volumetrics.enabled = v69;
  viewInfo->volumetrics.teleported = sceneParms->playerTeleported;
  v70 = r_volumetricsParticleIter;
  if ( !r_volumetricsParticleIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  viewInfo->volumetrics.particleIterLimit = v70->current.unsignedInt;
  v71 = r_volumetricsParticleNoise;
  if ( !r_volumetricsParticleNoise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v71);
  viewInfo->volumetrics.particleNoiseMode = v71->current.integer;
  viewInfo->input.sceneConstants.volumetricDepth = rg.volumetricDepth;
  viewInfo->input.sceneConstants.volumetricDepthRcp = (vec4_t)_mm128_div_ps((__m128)_xmm, (__m128)rg.volumetricDepth);
  v72 = frontEndDataOut;
  frontEndDataOut->sunShadow.cloudShadow = sceneParms->cloudShadow;
  v72->sunShadow.cloudShadow.scale = 1.0 / v72->sunShadow.cloudShadow.scale;
  v73 = fmodf_0(viewInfo->sceneDef.floatTime, 43200.0);
  v72->sunShadow.cloudShadow.scroll.v[0] = v73 * v72->sunShadow.cloudShadow.scroll.v[0];
  v72->sunShadow.cloudShadow.scroll.v[1] = v73 * v72->sunShadow.cloudShadow.scroll.v[1];
  R_SetTonemapInfo(viewInfo, sceneParms);
  R_SetPerceptualInfo(viewInfo, sceneParms);
  R_SetPostAAInfo(viewInfo);
  if ( r_whiteBalanceTweaks->current.enabled )
  {
    viewInfo->whiteBalance.method = r_whiteBalanceMethod->current.integer;
    viewInfo->whiteBalance.illuminant = r_whiteBalanceIlluminant->current.integer;
    LODWORD(viewInfo->whiteBalance.colorTempK) = r_whiteBalanceColorTempK->current.integer;
    LODWORD(viewInfo->whiteBalance.colorGreenMagentaShift) = r_whiteBalanceGreenMagentaShift->current.integer;
  }
  else
  {
    viewInfo->whiteBalance = sceneParms->whiteBalance;
  }
  *((_BYTE *)&viewInfo->input + 7920) ^= (*((_BYTE *)&viewInfo->input + 7920) ^ (4 * r_decalVolumes->current.enabled)) & 4;
  R_SetDecalVolumeTextures(viewInfo);
  v74 = DCONST_DVARVEC4_r_wireframeColor;
  if ( !DCONST_DVARVEC4_r_wireframeColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_wireframeColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v74);
  v75 = v74->current.vector.v[1];
  v76 = v74->current.vector.v[2];
  viewInfo->input.sceneConstants.wireframeColorScale.v[0] = v74->current.value;
  viewInfo->input.sceneConstants.wireframeColorScale.v[1] = v75;
  viewInfo->input.sceneConstants.wireframeColorScale.v[2] = v76;
  R_ReProjFloatZ_RenderTargetInfo(viewInfo->frustumGrid.voxelCountX, viewInfo->frustumGrid.voxelCountY, sceneParms->sceneRtWidth, sceneParms->sceneRtHeight, &viewInfo->reProjFloatZMipMap, &viewInfo->reProjFloatZWidth, &viewInfo->reProjFloatZHeight);
  LODWORD(viewInfo->lightGrid.temporalSmoothingFactor) = r_lightGridTempSmoothingFactor->current.integer;
  *(_QWORD *)&viewInfo->surfBoundsMutex.readCount = 0i64;
  viewInfo->surfBoundsMutex.tempPriority.threadHandle = NULL;
  *(_QWORD *)&viewInfo->surfBoundsMutex.tempPriority.oldPriority = 0i64;
  *(_QWORD *)&viewInfo->surfBoundsMutex.writeThreadId = 0i64;
  v77 = &viewInfo->sunShadowAndDepthHackSurfBounds[1].halfSize.v[2];
  viewInfo->matRenderFeatures = 0;
  do
  {
    *(_QWORD *)(v77 - 11) = 0i64;
    *(v77 - 9) = 0.0;
    *(v77 - 8) = -3.4028235e38;
    *(v77 - 7) = -3.4028235e38;
    *(v77 - 6) = -3.4028235e38;
    *(_QWORD *)(v77 - 5) = 0i64;
    *(v77 - 3) = 0.0;
    *(v77 - 2) = -3.4028235e38;
    *(v77 - 1) = -3.4028235e38;
    *v77 = -3.4028235e38;
    *(_QWORD *)(v77 + 1) = 0i64;
    v77[3] = 0.0;
    v77[4] = -3.4028235e38;
    v77[5] = -3.4028235e38;
    v77[6] = -3.4028235e38;
    *(_QWORD *)(v77 + 7) = 0i64;
    v77[9] = 0.0;
    v77[10] = -3.4028235e38;
    v77[11] = -3.4028235e38;
    v77[12] = -3.4028235e38;
    *(_QWORD *)(v77 + 13) = 0i64;
    v77[15] = 0.0;
    v77[16] = -3.4028235e38;
    v77[17] = -3.4028235e38;
    v77[18] = -3.4028235e38;
    *(_QWORD *)(v77 + 19) = 0i64;
    v77[21] = 0.0;
    v77[22] = -3.4028235e38;
    v77[23] = -3.4028235e38;
    v77[24] = -3.4028235e38;
    *(_QWORD *)(v77 + 25) = 0i64;
    v77[27] = 0.0;
    v77[28] = -3.4028235e38;
    v77[29] = -3.4028235e38;
    v77[30] = -3.4028235e38;
    *(_QWORD *)(v77 + 31) = 0i64;
    v77[33] = 0.0;
    v77[34] = -3.4028235e38;
    v77[35] = -3.4028235e38;
    v77[36] = -3.4028235e38;
    *(_QWORD *)(v77 + 37) = 0i64;
    v77[39] = 0.0;
    v77[40] = -3.4028235e38;
    v77[41] = -3.4028235e38;
    v77[42] = -3.4028235e38;
    *(_QWORD *)(v77 + 43) = 0i64;
    v77[45] = 0.0;
    v77[46] = -3.4028235e38;
    v77[47] = -3.4028235e38;
    v77[48] = -3.4028235e38;
    *(_QWORD *)(v77 + 49) = 0i64;
    v77[51] = 0.0;
    v77[52] = -3.4028235e38;
    v77[53] = -3.4028235e38;
    v77[54] = -3.4028235e38;
    v77 += 66;
    --v11;
  }
  while ( v11 );
  p_fog = &viewInfo->fog;
  *(__m256i *)&viewInfo->stageInfo.activeStage.name = *(__m256i *)&sceneParms->stageInfo.activeStage.name;
  *(_OWORD *)&viewInfo->stageInfo.activeStage.skyRotationAngles.y = *(_OWORD *)&sceneParms->stageInfo.activeStage.skyRotationAngles.y;
  *(double *)&viewInfo->chromaticAberration.radius = *(double *)&sceneParms->chromaticAberration.radius;
  v79 = 2i64;
  viewInfo->chromaticAberration.aberration = sceneParms->chromaticAberration.aberration;
  v80 = &sceneParms->fog;
  do
  {
    p_fog = (GfxFog *)((char *)p_fog + 128);
    v81 = *(_OWORD *)v80->maxOpticalDepth.v;
    v80 = (GfxFog *)((char *)v80 + 128);
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[3].data.fogStartDist = v81;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[4].image = *(_OWORD *)&v80[-1].fogSplineBlendEntry[4].image;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[4].data.fogMaxDistance = *(_OWORD *)&v80[-1].fogSplineBlendEntry[4].data.fogMaxDistance;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[5].data.fogStartDist = *(_OWORD *)&v80[-1].fogSplineBlendEntry[5].data.fogStartDist;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[6].image = *(_OWORD *)&v80[-1].fogSplineBlendEntry[6].image;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[6].data.fogMaxDistance = *(_OWORD *)&v80[-1].fogSplineBlendEntry[6].data.fogMaxDistance;
    *(_OWORD *)&p_fog[-1].fogSplineBlendEntry[7].data.fogStartDist = *(_OWORD *)&v80[-1].fogSplineBlendEntry[7].data.fogStartDist;
    *(_OWORD *)&p_fog[-1].fogSplineBlendCount = *(_OWORD *)&v80[-1].fogSplineBlendCount;
    --v79;
  }
  while ( v79 );
  *(_OWORD *)p_fog->maxOpticalDepth.v = *(_OWORD *)v80->maxOpticalDepth.v;
  *(_OWORD *)p_fog->rayleighCoeffs.v = *(_OWORD *)v80->rayleighCoeffs.v;
  *(_QWORD *)p_fog->mieCoeffs.v = *(_QWORD *)v80->mieCoeffs.v;
  if ( r_fogCircleTweaks->current.enabled )
  {
    v82 = r_fogCircle;
    LODWORD(viewInfo->brCircle.position.v[0]) = r_fogCircle->current.integer;
    viewInfo->brCircle.position.v[1] = v82->current.vector.v[1];
    v83 = r_fogCircleVolumetricInnerColor;
    LODWORD(viewInfo->brCircle.volumetricInnerColor.v[0]) = r_fogCircleVolumetricInnerColor->current.integer;
    viewInfo->brCircle.volumetricInnerColor.v[1] = v83->current.vector.v[1];
    viewInfo->brCircle.volumetricInnerColor.v[2] = v83->current.vector.v[2];
    v84 = r_fogCircleVolumetricOuterColor;
    LODWORD(viewInfo->brCircle.volumetricOuterColor.v[0]) = r_fogCircleVolumetricOuterColor->current.integer;
    viewInfo->brCircle.volumetricOuterColor.v[1] = v84->current.vector.v[1];
    viewInfo->brCircle.volumetricOuterColor.v[2] = v84->current.vector.v[2];
    v85 = r_fogCircleDistanceInnerColor;
    LODWORD(viewInfo->brCircle.distanceInnerColor.v[0]) = r_fogCircleDistanceInnerColor->current.integer;
    viewInfo->brCircle.distanceInnerColor.v[1] = v85->current.vector.v[1];
    viewInfo->brCircle.distanceInnerColor.v[2] = v85->current.vector.v[2];
    v86 = r_fogCircleDistanceOuterColor;
    LODWORD(viewInfo->brCircle.distanceOuterColor.v[0]) = r_fogCircleDistanceOuterColor->current.integer;
    viewInfo->brCircle.distanceOuterColor.v[1] = v86->current.vector.v[1];
    viewInfo->brCircle.distanceOuterColor.v[2] = v86->current.vector.v[2];
    v87 = r_fogCirclePerceptualTint;
    v88 = r_fogCirclePerceptualTint->current.vector.v[3];
    viewInfo->brCircle.perceptualTint.v[0] = v88 * r_fogCirclePerceptualTint->current.value;
    viewInfo->brCircle.perceptualTint.v[1] = v88 * v87->current.vector.v[1];
    viewInfo->brCircle.perceptualTint.v[2] = v88 * v87->current.vector.v[2];
    LODWORD(viewInfo->brCircle.blendDistance) = r_fogCircleOuterColorDistance->current.integer;
    viewInfo->brCircle.radius = r_fogCircle->current.vector.v[2];
    LODWORD(viewInfo->brCircle.fogInset) = r_fogCircleInset->current.integer;
    viewInfo->brCircle.height = r_fogCircle->current.vector.v[3];
    LODWORD(viewInfo->brCircle.volumetricDensity) = r_fogCircleVolumetricParams->current.integer;
    viewInfo->brCircle.volumetricScale = r_fogCircleVolumetricParams->current.vector.v[1];
    LODWORD(viewInfo->brCircle.distanceDensity) = r_fogCircleDistanceParams->current.integer;
    viewInfo->brCircle.distanceScale = r_fogCircleDistanceParams->current.vector.v[1];
    viewInfo->brCircle.distanceHalfPlane = r_fogCircleDistanceParams->current.vector.v[2];
    LODWORD(viewInfo->brCircle.distanceHeightFalloff) = r_fogCircleHeightFalloff->current.integer;
    viewInfo->brCircle.volumetricHeightFalloff = r_fogCircleHeightFalloff->current.vector.v[1];
    LODWORD(viewInfo->brCircle.skyDistanceMultiplier) = r_fogCircleSkyDistanceMultiplier->current.integer;
    LODWORD(viewInfo->brCircle.aFogColorBlend) = r_fogCircleDistanceFogBlend->current.integer;
    viewInfo->brCircle.aFogDistanceBlend = r_fogCircleDistanceFogBlend->current.vector.v[1];
    LODWORD(viewInfo->brCircle.distanceHeightBlend) = r_fogCircleDistanceHeightBlend->current.integer;
    LODWORD(viewInfo->brCircle.distanceHeightViewBlend) = r_fogCircleDistanceHeightViewBlend->current.integer;
    LODWORD(viewInfo->brCircle.distanceHeightBlendStart) = r_fogCircleDistanceHeightBlendStart->current.integer;
    LODWORD(viewInfo->brCircle.densityScale) = r_fogCircleFogDensityScale->current.integer;
    LODWORD(viewInfo->brCircle.densityBias) = r_fogCircleFogDensityBias->current.integer;
    LODWORD(viewInfo->brCircle.densityNoiseScale) = r_fogCircleFogDensityNoiseScale->current.integer;
    LODWORD(viewInfo->brCircle.densityNoiseBias) = r_fogCircleFogDensityNoiseBias->current.integer;
    v89 = r_fogCircleFogDensityTiling;
    LODWORD(viewInfo->brCircle.densityTiling.v[0]) = r_fogCircleFogDensityTiling->current.integer;
    viewInfo->brCircle.densityTiling.v[1] = v89->current.vector.v[1];
    v90 = r_fogCircleFogDensityScrollingSpeed;
    LODWORD(viewInfo->brCircle.densityScrollingSpeed.v[0]) = r_fogCircleFogDensityScrollingSpeed->current.integer;
    viewInfo->brCircle.densityScrollingSpeed.v[1] = v90->current.vector.v[1];
  }
  else
  {
    *(_OWORD *)viewInfo->brCircle.volumetricInnerColor.v = *(_OWORD *)sceneParms->brCircle.volumetricInnerColor.v;
    *(_OWORD *)&viewInfo->brCircle.volumetricOuterColor.y = *(_OWORD *)&sceneParms->brCircle.volumetricOuterColor.y;
    *(_OWORD *)&viewInfo->brCircle.distanceInnerColor.z = *(_OWORD *)&sceneParms->brCircle.distanceInnerColor.z;
    *(_OWORD *)viewInfo->brCircle.perceptualTint.v = *(_OWORD *)sceneParms->brCircle.perceptualTint.v;
    *(_OWORD *)&viewInfo->brCircle.position.y = *(_OWORD *)&sceneParms->brCircle.position.y;
    *(_OWORD *)&viewInfo->brCircle.fogInset = *(_OWORD *)&sceneParms->brCircle.fogInset;
    *(_OWORD *)&viewInfo->brCircle.distanceHeightFalloff = *(_OWORD *)&sceneParms->brCircle.distanceHeightFalloff;
    *(_OWORD *)&viewInfo->brCircle.skyDistanceMultiplier = *(_OWORD *)&sceneParms->brCircle.skyDistanceMultiplier;
    *(_OWORD *)&viewInfo->brCircle.distanceHeightViewBlend = *(_OWORD *)&sceneParms->brCircle.distanceHeightViewBlend;
    *(_OWORD *)&viewInfo->brCircle.densityNoiseScale = *(_OWORD *)&sceneParms->brCircle.densityNoiseScale;
    viewInfo->brCircle.densityScrollingSpeed = sceneParms->brCircle.densityScrollingSpeed;
  }
  R_SetFrameFog(viewInfo);
  if ( Particle_GetMagmaHeightfield() )
  {
    v91 = particle_magma_heightfield_bbox_min;
    v92 = particle_magma_heightfield_bbox_max;
    unsignedInt = particle_magma_heightfield_bbox_max->current.unsignedInt;
    *(float *)&unsignedInt = particle_magma_heightfield_bbox_max->current.value - particle_magma_heightfield_bbox_min->current.value;
    _XMM2 = unsignedInt;
    v96 = LODWORD(particle_magma_heightfield_bbox_max->current.vector.v[1]);
    *(float *)&v96 = particle_magma_heightfield_bbox_max->current.vector.v[1] - particle_magma_heightfield_bbox_min->current.vector.v[1];
    _XMM0 = v96;
    __asm
    {
      vmaxss  xmm1, xmm0, xmm8
      vmaxss  xmm3, xmm2, xmm8
    }
    viewInfo->input.sceneConstants.vfxMagmaHeightfieldXYScale.v[0] = 1.0 / *(float *)&_XMM3;
    viewInfo->input.sceneConstants.vfxMagmaHeightfieldXYScale.v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT(1.0 / *(float *)&_XMM1) ^ _xmm);
    viewInfo->input.sceneConstants.vfxMagmaHeightfieldXYBias.v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM3) * v91->current.value) ^ _xmm);
    viewInfo->input.sceneConstants.vfxMagmaHeightfieldXYBias.v[1] = (float)((float)(1.0 / *(float *)&_XMM1) * v91->current.vector.v[1]) + 1.0;
    viewInfo->input.sceneConstants.vfxMagmaHeightfieldYScale = v92->current.vector.v[2] - v91->current.vector.v[2];
    v99 = v91->current.vector.v[2];
  }
  else
  {
    viewInfo->input.sceneConstants.vfxMagmaHeightfieldXYScale = 0i64;
    viewInfo->input.sceneConstants.vfxMagmaHeightfieldXYBias = 0i64;
    viewInfo->input.sceneConstants.vfxMagmaHeightfieldYScale = 0.0;
    v99 = 0.0;
  }
  viewInfo->input.sceneConstants.vfxMagmaHeightfieldYBias = v99;
  viewInfo->input.sceneConstants.vfxMagmaHeightfieldUnused0 = 0.0;
  if ( !Dvar_GetBool_Internal(sm_sunDynamics) || rg.useSunShadow != 2 )
    v28 = 0;
  viewInfo->useDynamicSunShadows = v28;
  viewInfo->useCachedSunShadow = rg.useCachedSunShadow;
  viewInfo->cachedSunShadowMaxTilesPerFrame = rg.cachedSunShadowMaxTilesPerFrame;
  rimLightStartDistance = sceneParms->rimLighting.rimLightStartDistance;
  v101 = sceneParms->rimLighting.rimLightDistance - rimLightStartDistance;
  if ( v101 > 0.0 )
    v102 = 1.0 / v101;
  else
    v102 = *(float *)&_xmm;
  rimLightFill = sceneParms->rimLighting.rimLightFill;
  viewInfo->input.sceneConstants.rimLightParams.v[0] = r_rimLightingLerp->current.value * sceneParms->rimLighting.rimLightScale;
  viewInfo->input.sceneConstants.rimLightParams.v[1] = rimLightStartDistance;
  viewInfo->input.sceneConstants.rimLightParams.v[2] = v102;
  viewInfo->input.sceneConstants.rimLightParams.v[3] = rimLightFill;
  v104 = r_dof_tweak->current.integer;
  if ( v104 )
  {
    v105 = v104 - 1;
    if ( !v105 )
    {
      viewInfo->dofDisabled = 0;
      viewInfo->dualViewScopeState.m_fade = 1.0;
      viewInfo->dofPhysical.enabled = R_DOF_GetPhysicalEnable();
      *(_WORD *)&viewInfo->dofPhysical.hipEnabled = 0;
      viewInfo->dofPhysical.adsEnabled = 0;
      LODWORD(viewInfo->dofPhysical.filmDiagonal) = r_dof_physical_filmDiagonal->current.integer;
      LODWORD(viewInfo->dofPhysical.minFocusDistance) = r_dof_physical_minFocusDistance->current.integer;
      LODWORD(viewInfo->dofPhysical.maxCocDiameter) = r_dof_physical_maxCocDiameter->current.integer;
      LODWORD(viewInfo->dofPhysical.fstop) = r_dof_physical_fstop->current.integer;
      LODWORD(viewInfo->dofPhysical.focusDistance) = r_dof_physical_focusDistance->current.integer;
      viewInfo->dofPhysical.cocScale = 1.0;
      LODWORD(viewInfo->dofPhysical.viewModelFstop) = r_dof_physical_viewModelFstop->current.integer;
      LODWORD(viewInfo->dofPhysical.viewModelFocusDistance) = r_dof_physical_viewModelFocusDistance->current.integer;
      goto LABEL_191;
    }
    if ( v105 != 1 )
    {
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3283, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
    }
    viewInfo->dofDisabled = 0;
    goto LABEL_189;
  }
  if ( !r_dof_enable->current.enabled )
  {
    viewInfo->dofDisabled = 1;
LABEL_189:
    viewModelFocusDistance = 0.0;
    *(_QWORD *)&viewInfo->dofPhysical.enabled = 0i64;
    *(_QWORD *)&viewInfo->dofPhysical.minFocusDistance = 0i64;
    *(_QWORD *)&viewInfo->dofPhysical.fstop = 0i64;
    *(_QWORD *)&viewInfo->dofPhysical.cocScale = 0i64;
    goto LABEL_190;
  }
  viewInfo->dofDisabled = 0;
  *(__m256i *)&viewInfo->dofPhysical.enabled = *(__m256i *)&sceneParms->dofPhysical.enabled;
  viewModelFocusDistance = sceneParms->dofPhysical.viewModelFocusDistance;
LABEL_190:
  viewInfo->dofPhysical.viewModelFocusDistance = viewModelFocusDistance;
LABEL_191:
  viewInfo->shellShock = sceneParms->shellshock;
  *(double *)&viewInfo->radialMotionBlur.enabled = *(double *)&sceneParms->radialMotionBlur.enabled;
  viewInfo->radialMotionBlur.strength = sceneParms->radialMotionBlur.strength;
  Float_Internal = Dvar_GetFloat_Internal(r_mbRadialOverrideRadius);
  if ( *(float *)&Float_Internal > 0.0 )
  {
    viewInfo->radialMotionBlur.radius = *(float *)&Float_Internal;
    viewInfo->radialMotionBlur.enabled = 1;
  }
  v108 = Dvar_GetFloat_Internal(r_mbRadialOverrideStrength);
  if ( *(float *)&v108 > 0.0 )
  {
    viewInfo->radialMotionBlur.strength = *(float *)&v108;
    viewInfo->radialMotionBlur.enabled = 1;
  }
  v109 = Dvar_GetFloat_Internal(r_mbRadialOverrideDistortion);
  if ( *(float *)&v109 != 0.0 )
    viewInfo->radialMotionBlur.enabled = 1;
  *(__m256i *)&viewInfo->droneCameraEffects.pixelSize = *(__m256i *)&sceneParms->droneCameraEffects.pixelSize;
  *(__m256i *)&viewInfo->droneCameraEffects.deformScreenThreshold = *(__m256i *)&sceneParms->droneCameraEffects.deformScreenThreshold;
  *(__m256i *)&viewInfo->droneCameraEffects.scanline2_InterpolationPower = *(__m256i *)&sceneParms->droneCameraEffects.scanline2_InterpolationPower;
  *(_OWORD *)&viewInfo->droneCameraEffects.zoomUV = *(_OWORD *)&sceneParms->droneCameraEffects.zoomUV;
  if ( rg.variableRateShadingEnabled )
  {
    viewInfo->variableRateShading.enabled = r_vrsEnabled->current.enabled;
    viewInfo->variableRateShading.vrsMaskEnabled = r_vrsMaskEnabled->current.enabled;
    viewInfo->variableRateShading.vrsMaskPreview = r_vrsMaskPreview->current.enabled;
    LODWORD(viewInfo->variableRateShading.vrsMaskPixelThreshold) = r_vrsMaskPixelThreshold->current.integer;
    LODWORD(viewInfo->variableRateShading.vrsMaskNeighborhoodThreshold) = r_vrsMaskNeighborhoodThreshold->current.integer;
    viewInfo->variableRateShading.vrsMaskMotionBlurEnabled = r_vrsMaskMotionBlurEnabled->current.enabled;
    viewInfo->variableRateShading.vrsMaskMotionBlurIntensity = r_vrsMaskMotionBlurIntensity->current.integer;
    viewInfo->variableRateShading.vrsMaskDofEnabled = r_vrsMaskDofEnabled->current.enabled;
    viewInfo->variableRateShading.vrsMaskDofIntensity = r_vrsMaskDofIntensity->current.integer;
    viewInfo->variableRateShading.vrsMaskOpaqueDrawListsEnabled = r_vrsMaskOpaqueDrawListsEnabled->current.enabled;
    viewInfo->variableRateShading.vrsMaskDecalDrawListsEnabled = r_vrsMaskDecalDrawListsEnabled->current.enabled;
    viewInfo->variableRateShading.vrsMaskTransparentDrawListsEnabled = r_vrsMaskTransparentDrawListsEnabled->current.enabled;
    viewInfo->variableRateShading.vrsMaskPostProcessingEnabled = r_vrsMaskPostProcessingEnabled->current.enabled;
    viewInfo->variableRateShading.prepassEnabled = r_vrsPrepassEnabled->current.enabled;
    v110 = r_vrsDrawGunEnabled->current.enabled;
  }
  else
  {
    *(_QWORD *)&viewInfo->variableRateShading.enabled = 0i64;
    v110 = 0;
    *(_QWORD *)&viewInfo->variableRateShading.vrsMaskPixelThreshold = 0i64;
    *(_QWORD *)&viewInfo->variableRateShading.vrsMaskMotionBlurIntensity = 0i64;
    *(_WORD *)&viewInfo->variableRateShading.vrsMaskPostProcessingEnabled = 0;
  }
  viewInfo->variableRateShading.drawGunEnabled = v110;
  v111 = r_lensProfileOverrideMode->current.integer;
  if ( v111 )
  {
    viewInfo->lensProfile.mode = v111;
    LODWORD(viewInfo->lensProfile.focalLength) = r_lensProfileOverrideFocalLength->current.integer;
    LODWORD(viewInfo->lensProfile.aperture) = r_lensProfileOverrideAperture->current.integer;
    LODWORD(viewInfo->lensProfile.scale) = r_lensProfileOverrideScale->current.integer;
    LODWORD(viewInfo->lensProfile.UVScale) = r_lensProfileOverrideUVScale->current.integer;
  }
  else
  {
    *(_OWORD *)&viewInfo->lensProfile.mode = *(_OWORD *)&sceneParms->lensProfile.mode;
    viewInfo->lensProfile.UVScale = sceneParms->lensProfile.UVScale;
  }
  *(__m256i *)&viewInfo->vignette.intensity = *(__m256i *)&sceneParms->vignette.intensity;
  *(_OWORD *)viewInfo->vignette.offset.v = *(_OWORD *)sceneParms->vignette.offset.v;
  if ( r_vignetteUseTweaks->current.enabled )
  {
    LODWORD(viewInfo->vignette.intensity) = r_vignetteTweakIntensity->current.integer;
    _XMM0 = r_vignetteTweakSquareAspectRatio->current.color[0];
    __asm
    {
      vpcmpeqd xmm1, xmm0, xmm1
      vblendvps xmm0, xmm8, xmm9, xmm1
    }
    viewInfo->vignette.squareAspectRatioWeight = *(float *)&_XMM0;
    v115 = r_vignetteTweakSize;
    LODWORD(viewInfo->vignette.size.v[0]) = r_vignetteTweakSize->current.integer;
    viewInfo->vignette.size.v[1] = v115->current.vector.v[1];
    LODWORD(viewInfo->vignette.falloff) = r_vignetteTweakFalloff->current.integer;
    LODWORD(viewInfo->vignette.falloffStart) = r_vignetteTweakFalloffStart->current.integer;
    v116 = r_vignetteTweakBoxSize;
    LODWORD(viewInfo->vignette.boxSize.v[0]) = r_vignetteTweakBoxSize->current.integer;
    viewInfo->vignette.boxSize.v[1] = v116->current.vector.v[1];
    v117 = r_vignetteTweakOffset;
    LODWORD(viewInfo->vignette.offset.v[0]) = r_vignetteTweakOffset->current.integer;
    viewInfo->vignette.offset.v[1] = v117->current.vector.v[1];
  }
  R_SetLightScaleInfo(viewInfo, sceneParms);
  v118 = !r_lgvThinDisable->current.enabled && r_lgvThinOverride->current.enabled && r_lgvThinOverrideStable->current.integer == 1;
  viewInfo->input.sceneConstants.debugLGVTweak = v118;
  v119 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO;
  v120 = r_shaderLodSecondarySpecularDurango;
  if ( !v119 )
    v120 = r_shaderLodSecondarySpecular;
  v121 = v120->current.value;
  v122 = (float)(5.0 - (float)(4.5 - v121)) * 0.2;
  v123 = (float)(v121 * 0.2) - v122;
  viewInfo->input.sceneConstants.shaderLodScale.v[0] = 1.0 / v123;
  viewInfo->input.sceneConstants.shaderLodScale.v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / v123) * v122) ^ _xmm);
  *(_QWORD *)&viewInfo->input.sceneConstants.shaderLodScale.xyz.z = 0i64;
  viewInfo->input.sceneConstants.fovDistanceScaleFactor = rg.lodParms.cappedLodScale;
  Dvar_GetVec4_Internal(fx_lighting_shScale, &result);
  Dvar_GetVec4_Internal(fx_lighting_params, &v192);
  viewInfo->input.sceneConstants.shBandScale = result;
  viewInfo->input.sceneConstants.vfxLightingParams = v192;
  *(__m256i *)viewInfo->waterSheetingFx.distortionScale.v = *(__m256i *)sceneParms->waterSheetingFx.distortionScale.v;
  *(_OWORD *)&viewInfo->waterSheetingFx.startMSec = *(_OWORD *)&sceneParms->waterSheetingFx.startMSec;
  viewInfo->digitalDistort = sceneParms->digitalDistort;
  *(_OWORD *)&viewInfo->analogEffects.analogRewindAmount = *(_OWORD *)&sceneParms->analogEffects.analogRewindAmount;
  viewInfo->analogEffects.analogChromaSeparationEffectAmount = sceneParms->analogEffects.analogChromaSeparationEffectAmount;
  if ( !r_colorGradingEnable->current.enabled || rg.debugShaderEnabled )
  {
    v124 = 0;
    p_colorGrading = &g_GfxColorGrading_identity;
  }
  else
  {
    v124 = 1;
    p_colorGrading = &sceneParms->colorGrading;
  }
  *(_OWORD *)&viewInfo->colorGrading.clutSet.m_clutCount = *(_OWORD *)&p_colorGrading->clutSet.m_clutCount;
  *(_OWORD *)viewInfo->colorGrading.clutSet.m_clutArray = *(_OWORD *)p_colorGrading->clutSet.m_clutArray;
  *(_OWORD *)&viewInfo->colorGrading.clutSet.m_clutArray[2] = *(_OWORD *)&p_colorGrading->clutSet.m_clutArray[2];
  *(_OWORD *)&viewInfo->colorGrading.clutSet.m_clutArray[4] = *(_OWORD *)&p_colorGrading->clutSet.m_clutArray[4];
  *(_OWORD *)&viewInfo->colorGrading.clutSet.m_clutArray[6] = *(_OWORD *)&p_colorGrading->clutSet.m_clutArray[6];
  *(_OWORD *)viewInfo->colorGrading.colorGradingAnalytical.keyPositions = *(_OWORD *)p_colorGrading->colorGradingAnalytical.keyPositions;
  *(_OWORD *)&viewInfo->colorGrading.colorGradingAnalytical.keyMidpoints[1] = *(_OWORD *)&p_colorGrading->colorGradingAnalytical.keyMidpoints[1];
  *(_OWORD *)&viewInfo->colorGrading.colorGradingAnalytical.key[0].saturation = *(_OWORD *)&p_colorGrading->colorGradingAnalytical.key[0].saturation;
  *(_OWORD *)&viewInfo->colorGrading.colorGradingAnalytical.key[1].saturation = *(_OWORD *)&p_colorGrading->colorGradingAnalytical.key[1].saturation;
  *(_OWORD *)&viewInfo->colorGrading.colorGradingAnalytical.key[2].saturation = *(_OWORD *)&p_colorGrading->colorGradingAnalytical.key[2].saturation;
  *(_OWORD *)&viewInfo->colorGrading.colorGradingAnalytical.lift.z = *(_OWORD *)&p_colorGrading->colorGradingAnalytical.lift.z;
  *(_OWORD *)viewInfo->colorGrading.colorGradingAnalytical.gain.v = *(_OWORD *)p_colorGrading->colorGradingAnalytical.gain.v;
  if ( v124 )
    nvgColorGrading = sceneParms->nvgColorGrading;
  else
    nvgColorGrading = NULL;
  viewInfo->nvgColorGrading = nvgColorGrading;
  LightmapAtlasTextureSize = R_GetLightmapAtlasTextureSize(viewInfo->input.data, rgp.world->draw.lightmapType);
  v128 = (float)LightmapAtlasTextureSize;
  viewInfo->input.sceneConstants.lightmapAtlasSize.v[0] = v128;
  if ( LightmapAtlasTextureSize )
    v129 = 1.0 / v128;
  else
    v129 = *(float *)&_xmm;
  viewInfo->input.sceneConstants.lightmapAtlasSize.v[1] = v129;
  LightGridVolumesAtlasTextureDepth = R_GetLightGridVolumesAtlasTextureDepth(viewInfo->input.data);
  v131 = (float)LightGridVolumesAtlasTextureDepth;
  viewInfo->input.sceneConstants.lightGridVolumeAtlasSize.v[0] = v131;
  if ( LightGridVolumesAtlasTextureDepth )
    v132 = 1.0 / v131;
  else
    v132 = *(float *)&_xmm;
  viewInfo->input.sceneConstants.lightGridVolumeAtlasSize.v[1] = v132;
  v199 = r_screenShotPixelOffset->current.value;
  v200 = r_screenShotPixelOffset->current.vector.v[1];
  LODWORD(v199) ^= _xmm;
  viewInfo->input.sceneConstants.subpixelOffset.v[0] = v199;
  viewInfo->input.sceneConstants.subpixelOffset.v[1] = v200;
  viewInfo->input.sceneConstants.screenshotInfo = R_Screenshot_GetInterleavedInfo();
  LODWORD(viewInfo->input.sceneConstants.mipBias) = r_texFilterMipBias->current.integer;
  R_SSS_SetInfo(viewInfo);
  eyeHighlightIntensity = viewInfo->eyeVirtualHighlight.eyeHighlightIntensity;
  v171 = viewInfo->eyeVirtualHighlight.eyeHighlightColor.v[0] * eyeHighlightIntensity;
  v173 = viewInfo->eyeVirtualHighlight.eyeHighlightColor.v[2] * eyeHighlightIntensity;
  v172 = viewInfo->eyeVirtualHighlight.eyeHighlightColor.v[1] * eyeHighlightIntensity;
  vec.v[0] = sinf_0(1.5707964 * viewInfo->eyeVirtualHighlight.eyeHighlightHeading);
  vec.v[1] = sinf_0(1.5707964 * viewInfo->eyeVirtualHighlight.eyeHighlightPitch);
  v134 = 1.5707964 * viewInfo->eyeVirtualHighlight.eyeHighlightPitch;
  cosf_0(v134);
  LODWORD(vec.v[2]) = COERCE_UNSIGNED_INT(v134 * cosf_0(1.5707964 * viewInfo->eyeVirtualHighlight.eyeHighlightHeading)) ^ _xmm;
  vec.v[3] = 0.0;
  MatrixInverse44Aligned((const tmat44_t<vec4_t> *)viewInfo, &dst);
  MatrixTransformVector44Aligned(&vec, &dst, &out);
  v135 = out.v[1];
  eyeHighlightBulbRadius = viewInfo->eyeVirtualHighlight.eyeHighlightBulbRadius;
  v137 = out.v[2];
  viewInfo->input.sceneConstants.eyeHighlightParams1.v[0] = out.v[0];
  viewInfo->input.sceneConstants.eyeHighlightParams1.v[1] = v135;
  viewInfo->input.sceneConstants.eyeHighlightParams1.v[2] = v137;
  viewInfo->input.sceneConstants.eyeHighlightParams1.v[3] = eyeHighlightBulbRadius;
  viewInfo->input.sceneConstants.eyeHighlightParams2.v[0] = v171;
  viewInfo->input.sceneConstants.eyeHighlightParams2.v[1] = v172;
  viewInfo->input.sceneConstants.eyeHighlightParams2.v[2] = v173;
  viewInfo->input.sceneConstants.eyeHighlightParams2.v[3] = 0;
  *(_DWORD *)&viewInfo->firstFlare = 0;
  p_hudOutline = &viewInfo->hudOutline;
  v139 = &sceneParms->hudOutline;
  do
  {
    p_hudOutline = (GfxHudOutlineState *)((char *)p_hudOutline + 128);
    v140 = *(vec4_t *)&v139->enable;
    v139 = (GfxHudOutlineState *)((char *)v139 + 128);
    *(vec4_t *)((char *)&p_hudOutline[-1].scopeFillColor1 + 8) = v140;
    *(vec4_t *)((char *)&p_hudOutline[-1].scopeOccludedOutlineColor + 8) = *(vec4_t *)((char *)&v139[-1].scopeOccludedOutlineColor + 8);
    *(vec4_t *)((char *)&p_hudOutline[-1].scopeOccludedInlineColor + 8) = *(vec4_t *)((char *)&v139[-1].scopeOccludedInlineColor + 8);
    *(vec4_t *)((char *)&p_hudOutline[-1].scopeOccludedInteriorColor + 8) = *(vec4_t *)((char *)&v139[-1].scopeOccludedInteriorColor + 8);
    *(vec4_t *)((char *)&p_hudOutline[-1].shimmerTextureProperties + 8) = *(vec4_t *)((char *)&v139[-1].shimmerTextureProperties + 8);
    *(vec4_t *)((char *)&p_hudOutline[-1].shimmerTextureProperties1 + 8) = *(vec4_t *)((char *)&v139[-1].shimmerTextureProperties1 + 8);
    *(vec4_t *)((char *)&p_hudOutline[-1].shimmerTextureProperties2 + 8) = *(vec4_t *)((char *)&v139[-1].shimmerTextureProperties2 + 8);
    *(vec4_t *)((char *)&p_hudOutline[-1].snapshotEffectProperties + 8) = *(vec4_t *)((char *)&v139[-1].snapshotEffectProperties + 8);
    --v9;
  }
  while ( v9 );
  *(_OWORD *)&p_hudOutline->enable = *(_OWORD *)&v139->enable;
  *(_QWORD *)&p_hudOutline->scopeFoeColor.xyz.z = *(_QWORD *)&v139->scopeFoeColor.xyz.z;
  viewInfo->decalVolumes.drawDistance = sceneParms->decalVolumes.drawDistance;
  viewInfo->lightingFraction.bias = sceneParms->lightingFraction.bias;
  viewInfo->deferredScreenshotIndex = sceneParms->deferredScreenshotIndex;
  R_SetupSceneCmdBufInput(viewInfo);
  sceneRtWidth = (float)sceneParms->sceneRtWidth;
  sceneRtHeight = sceneParms->sceneRtHeight;
  viewInfo->input.sceneConstants.sceneRenderTargetSize.v[0] = sceneRtWidth;
  viewInfo->input.sceneConstants.sceneRenderTargetSize.v[1] = (float)sceneRtHeight;
  viewInfo->input.sceneConstants.sceneRenderTargetSize.v[2] = 1.0 / sceneRtWidth;
  viewInfo->input.sceneConstants.sceneRenderTargetSize.v[3] = 1.0 / (float)sceneRtHeight;
  v143 = (float)sceneParms->displayViewport.width;
  v144 = (float)sceneParms->displayViewport.height;
  viewInfo->input.sceneConstants.displayAspectRatio.v[0] = (float)(1.0 / v144) * v143;
  viewInfo->input.sceneConstants.displayAspectRatio.v[1] = (float)(1.0 / v143) * v144;
  viewInfo->input.sceneConstants.displayAspectRatio.v[2] = 1.0 / v143;
  viewInfo->input.sceneConstants.displayAspectRatio.v[3] = 1.0 / v144;
  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0 )
    R_SetupSceneRtInput(viewInfo, sceneParms->sceneRtWidth, sceneParms->sceneRtHeight, sceneParms->maxSceneRtWidth, sceneParms->maxSceneRtHeight);
  tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
  v146 = tanHalfFovY * vidConfig.displayAspectRatio;
  viewInfo->input.sceneConstants.viewSpaceScaleBias.v[0] = (float)(tanHalfFovY * vidConfig.displayAspectRatio) * 2.0;
  viewInfo->input.sceneConstants.viewSpaceScaleBias.v[1] = tanHalfFovY * -2.0;
  viewInfo->input.sceneConstants.viewSpaceScaleBias.v[2] = v146;
  viewInfo->input.sceneConstants.viewSpaceScaleBias.v[3] = COERCE_FLOAT(LODWORD(tanHalfFovY) ^ _xmm);
  tanHalfFovX = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
  v174 = tanHalfFovX * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[0];
  v175 = tanHalfFovX * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1];
  v176 = tanHalfFovX * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2];
  v148 = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
  v177 = v148 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[0];
  v178 = v148 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1];
  v179 = v148 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2];
  v149 = viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[0];
  LODWORD(v150) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[1]) ^ _xmm;
  v180 = (float)(v150 * v177) + (float)((float)(v149 * v174) + viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0]);
  v181 = (float)(v150 * v178) + (float)((float)(v149 * v175) + viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1]);
  v182 = (float)(v150 * v179) + (float)((float)(v149 * v176) + viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2]);
  viewInfo->input.sceneConstants.viewAxisX.v[0] = v174;
  viewInfo->input.sceneConstants.viewAxisX.v[1] = v175;
  viewInfo->input.sceneConstants.viewAxisX.v[2] = v176;
  viewInfo->input.sceneConstants.viewAxisY.v[0] = v177;
  viewInfo->input.sceneConstants.viewAxisY.v[1] = v178;
  viewInfo->input.sceneConstants.viewAxisY.v[2] = v179;
  viewInfo->input.sceneConstants.viewAxisZ.v[0] = v180;
  viewInfo->input.sceneConstants.viewAxisZ.v[1] = v181;
  viewInfo->input.sceneConstants.viewAxisZ.v[2] = v182;
  MatrixTranspose44Aligned((const tmat44_t<vec4_t> *)viewInfo, &viewInfo->input.sceneConstants.viewMatrix.m);
  v151 = viewInfo->viewParmsSet.frames[0].viewParms.camera.depthHackFoV.tanHalfFovY;
  v152 = v151 * vidConfig.displayAspectRatio;
  viewInfo->input.sceneConstants.depthHackViewSpaceScaleBias.v[0] = (float)(v151 * vidConfig.displayAspectRatio) * 2.0;
  viewInfo->input.sceneConstants.depthHackViewSpaceScaleBias.v[1] = v151 * -2.0;
  viewInfo->input.sceneConstants.depthHackViewSpaceScaleBias.v[2] = v152;
  viewInfo->input.sceneConstants.depthHackViewSpaceScaleBias.v[3] = COERCE_FLOAT(LODWORD(v151) ^ _xmm);
  v153 = viewInfo->viewParmsSet.frames[0].viewParms.camera.depthHackFoV.tanHalfFovX;
  v154 = v153 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[0];
  v183 = v153 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1];
  v184 = v153 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2];
  v155 = viewInfo->viewParmsSet.frames[0].viewParms.camera.depthHackFoV.tanHalfFovY;
  v185 = v155 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[0];
  v186 = v155 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1];
  v187 = v155 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2];
  v156 = viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[0];
  LODWORD(v157) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.subpixelOffset.v[1]) ^ _xmm;
  v188 = (float)(v185 * v157) + (float)((float)(v154 * v156) + viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0]);
  v189 = (float)(v186 * v157) + (float)((float)(v183 * v156) + viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1]);
  v190 = (float)(v187 * v157) + (float)((float)(v184 * v156) + viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2]);
  viewInfo->input.sceneConstants.depthHackViewAxisX.v[0] = v154;
  viewInfo->input.sceneConstants.depthHackViewAxisX.v[1] = v183;
  viewInfo->input.sceneConstants.depthHackViewAxisX.v[2] = v184;
  viewInfo->input.sceneConstants.depthHackViewAxisY.v[0] = v185;
  viewInfo->input.sceneConstants.depthHackViewAxisY.v[1] = v186;
  viewInfo->input.sceneConstants.depthHackViewAxisY.v[2] = v187;
  viewInfo->input.sceneConstants.depthHackViewAxisZ.v[0] = v188;
  viewInfo->input.sceneConstants.depthHackViewAxisZ.v[1] = v189;
  viewInfo->input.sceneConstants.depthHackViewAxisZ.v[2] = v190;
  MatrixTranspose44Aligned((const tmat44_t<vec4_t> *)viewInfo, &viewInfo->input.sceneConstants.depthHackViewMatrix.m);
  viewInfo->input.sceneConstants.eyeOffset.v[0] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  viewInfo->input.sceneConstants.eyeOffset.v[1] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  viewInfo->input.sceneConstants.eyeOffset.v[2] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  viewInfo->input.sceneConstants.eyeOffset.v[3] = 1.0;
  LODWORD(viewInfo->input.sceneConstants.eyeOffsetHighPrecision.v[0]) = PreciseCoordFromFloat(viewInfo->input.sceneConstants.eyeOffset.v[0], 0xCu);
  LODWORD(viewInfo->input.sceneConstants.eyeOffsetHighPrecision.v[1]) = PreciseCoordFromFloat(viewInfo->input.sceneConstants.eyeOffset.v[1], 0xCu);
  LODWORD(viewInfo->input.sceneConstants.eyeOffsetHighPrecision.v[2]) = PreciseCoordFromFloat(viewInfo->input.sceneConstants.eyeOffset.v[2], 0xCu);
  LODWORD(viewInfo->input.sceneConstants.eyeOffsetHighPrecision.v[3]) = PreciseCoordFromFloat(viewInfo->input.sceneConstants.eyeOffset.v[3], 0xCu);
  skyBlendFeather = sceneParms->skyBlendFeather;
  viewInfo->input.sceneConstants.skyBlendConsts.v[0] = sceneParms->skyBlendAmount;
  viewInfo->input.sceneConstants.skyBlendConsts.v[1] = skyBlendFeather;
  *(_QWORD *)&viewInfo->input.sceneConstants.skyBlendConsts.xyz.z = 0i64;
  AnglesToAxis(&sceneParms->stageInfo.activeStage.skyRotationAngles, &axis);
  v159 = axis.m[0].v[2];
  v160 = axis.m[0].v[1];
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR0.v[0] = axis.m[0].v[0];
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR0.v[1] = v160;
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR0.v[2] = v159;
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR0.v[3] = 0.0;
  v161 = axis.m[1].v[1];
  v162 = axis.m[1].v[2];
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR1.v[0] = axis.m[1].v[0];
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR1.v[1] = v161;
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR1.v[2] = v162;
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR1.v[3] = 0.0;
  _XMM0 = LODWORD(axis.m[2].v[0]);
  v164 = axis.m[2].v[2];
  v165 = axis.m[2].v[1];
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR2.v[0] = axis.m[2].v[0];
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR2.v[1] = v165;
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR2.v[2] = v164;
  viewInfo->input.sceneConstants.skyRotationMatrixInverseR2.v[3] = 0.0;
  R_SetupScopeEffect(frontEndDataOut, viewInfo);
  v170.m_surfaceID = 0;
  v170.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v170.m_tracking.m_name = _XMM0;
  viewInfo->debugUav = v170;
}

/*
==============
R_SetupViewProjectionMatrices
==============
*/
void R_SetupViewProjectionMatrices(GfxViewParms *viewParms)
{
  vec2_t *p_subpixelOffset; 
  GfxMatrix *p_projectionMatrix; 
  __m256i v4; 
  float v5; 
  tmat44_t<vec4_t> out; 
  GfxMatrix in; 
  tmat44_t<vec4_t> dst; 

  p_subpixelOffset = &viewParms->subpixelOffset;
  if ( p_subpixelOffset->v[0] == 0.0 && p_subpixelOffset->v[1] == 0.0 )
  {
    p_projectionMatrix = &viewParms->projectionMatrix;
  }
  else
  {
    p_projectionMatrix = &viewParms->projectionMatrix;
    v4 = *(__m256i *)viewParms->projectionMatrix.m.row2.v;
    *(__m256i *)in.m.m[0].v = *(__m256i *)viewParms->projectionMatrix.m.m[0].v;
    *(__m256i *)in.m.row2.v = v4;
    R_ApplySubPixelOffset(p_subpixelOffset, &in, &viewParms->projectionMatrix);
  }
  MatrixMultiply44Aligned(&viewParms->viewMatrix.m, &p_projectionMatrix->m, &viewParms->viewProjectionMatrix.m);
  MatrixInverse44Aligned(&viewParms->viewProjectionMatrix.m, &dst);
  MatrixIdentity44(&out);
  v5 = viewParms->camera.origin.v[1];
  out.m[3].v[0] = viewParms->camera.origin.v[0];
  out.m[3].v[2] = viewParms->camera.origin.v[2];
  out.m[3].v[1] = v5;
  MatrixMultiply44Aligned(&dst, &out, &viewParms->inverseViewProjectionMatrix.m);
}

/*
==============
R_SetupViewportFeatures
==============
*/
void R_SetupViewportFeatures(const GfxViewportFeatures *viewportFeaturesRequest, GfxViewportFeatures *features)
{
  int v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  const dvar_t *v21; 

  *features = *viewportFeaturesRequest;
  v3 = -1;
  v4 = *((_DWORD *)features + 11) & ((8 * sm_sunAllow->current.enabled) | 0xFFFFFFF7);
  *((_DWORD *)features + 11) = v4;
  if ( (v4 & 8) == 0 || !sm_sunEnable->current.enabled || (v5 = -1, !rg.useSunShadow) )
    v5 = -5;
  v6 = v4 & v5;
  *((_DWORD *)features + 11) = v6;
  if ( !sm_sunViewmodelHack->current.enabled || (v7 = -1, (v6 & 8) == 0) )
    v7 = -65;
  v8 = v7 & v6;
  *((_DWORD *)features + 11) = v8;
  v9 = v8 & (sm_spotAllow->current.color[0] | 0xFFFFFFFE);
  *((_DWORD *)features + 11) = v9;
  if ( (v9 & 1) == 0 || !sm_spotEnable->current.enabled )
    v3 = -3;
  v10 = v3 & v9;
  *((_DWORD *)features + 11) = v10;
  LOBYTE(v11) = rg.sunShadowOpaqueCascadeLimit;
  if ( !rg.sunShadowOpaqueCascadeLimit )
    v11 = v10 >> 4;
  v12 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(16 * v11)) & 0x30;
  *((_DWORD *)features + 11) = v12;
  v13 = v12 & 0xFFFEFFFF | (rg.useCachedSpotShadows != 0 ? 0x10000 : 0);
  *((_DWORD *)features + 11) = v13;
  v14 = v13 & 0xFFFDFFFF | (rg.useCachedSunShadow != 0 ? 0x20000 : 0);
  *((_DWORD *)features + 11) = v14;
  if ( (v14 & 8) != 0 && rg.useTransSunShadow )
    v15 = 0x2000;
  else
    v15 = 0;
  v16 = v15 | v14 & 0xFFFFDFFF;
  *((_DWORD *)features + 11) = v16;
  v17 = ((r_drawPassTrans->current.color[0] << 11) | 0xFFFFF7FF) & v16;
  *((_DWORD *)features + 11) = v17;
  v18 = ((r_drawPassEmissive->current.color[0] << 12) | 0xFFFFEFFF) & v17;
  *((_DWORD *)features + 11) = v18;
  v19 = ((unsigned __int16)v18 ^ (unsigned __int16)(LOWORD(rg.ssaoMode) << 14)) & 0x4000 ^ v18;
  *((_DWORD *)features + 11) = v19;
  v20 = ((unsigned __int16)v19 ^ (unsigned __int16)(LOWORD(rg.ssaoMode) << 14)) & 0x8000 ^ v19;
  *((_DWORD *)features + 11) = v20;
  *((_DWORD *)features + 11) = v20 ^ (v20 ^ (rg.halfResEmissive << 18)) & 0x40000;
  features->m_shadowMapTileResolution = rg.shadowMapResolutionIndex;
  v21 = DVARBOOL_r_casEnabled;
  if ( !DVARBOOL_r_casEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_casEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  *((_DWORD *)features + 11) ^= (*((_DWORD *)features + 11) ^ (v21->current.color[0] << 19)) & 0x80000;
}

/*
==============
R_SetupWorldViewportFeatures
==============
*/
void R_SetupWorldViewportFeatures(GfxViewportFeatures *features)
{
  unsigned int v2; 

  v2 = (R_GpuLightGrid_DataAvailable() << 9) | *((_DWORD *)features + 11) & 0xFFFFFDFF;
  *((_DWORD *)features + 11) = v2;
  if ( fx_gpu_lighting->current.enabled && s_world.voxelTreeCount > 0 )
    *((_DWORD *)features + 11) = v2 & 0xFFFFFBFF | 0x400;
  else
    *((_DWORD *)features + 11) = v2 & 0xFFFFFBFF;
}

/*
==============
R_StartDelayedSceneModelWorker
==============
*/
void R_StartDelayedSceneModelWorker(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 703, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    if ( g_delayedSceneModelGlob.dobjCount + g_delayedSceneModelGlob.brushModelCount - g_delayedSceneModelGlob.firstBrushModelIndex - g_delayedSceneModelGlob.firstDObjIndex )
      R_DispatchDelayedSceneBatch();
  }
}

/*
==============
R_SubmitDepthHackSurfaces
==============
*/
void R_SubmitDepthHackSurfaces(GfxViewInfo *viewInfo, GfxDrawListType drawListID, GfxDrawSurfListType drawSurfListType)
{
  __int64 v3; 
  GfxDrawList *v5; 
  GfxBackEndData *v6; 
  char *v7; 
  GfxDrawListIter *v8; 
  __int64 v9; 
  __int64 v10; 
  __m256i v11; 
  __int128 v12; 
  __int128 v13; 
  const unsigned __int64 *mark; 
  char *v15; 
  __int64 v16; 
  __m256i v17; 
  __int128 v18; 
  __int128 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  char v23[672]; 

  v3 = drawListID;
  v5 = &viewInfo->drawList[drawListID];
  R_EmitDrawSurfList(scene.drawSurfs[drawSurfListType], scene.drawSurfCount[drawSurfListType], v5);
  R_DrawListIter_Init(v5, &frontEndDataOut->drawListIter[v3]);
  v6 = frontEndDataOut;
  v7 = v23;
  v8 = &frontEndDataOut->drawListIter[v3];
  v9 = 5i64;
  v10 = 5i64;
  do
  {
    v7 += 128;
    v11 = *(__m256i *)&v8->bspSurfIter.current;
    v12 = *(_OWORD *)&v8->smodelSubdivPatchSurfIter.visData;
    v8 = (GfxDrawListIter *)((char *)v8 + 128);
    *((__m256i *)v7 - 4) = v11;
    *((__m256i *)v7 - 3) = *(__m256i *)&v8[-1].iteratorPool[7].key.fields.spliceIndex;
    *((__m256i *)v7 - 2) = *(__m256i *)&v8[-1].iteratorPool[7].SaveMarkCallback;
    *((_OWORD *)v7 - 2) = *(_OWORD *)&v8[-1].iteratorPool[8].RenderDrawGroupCallback;
    *((_OWORD *)v7 - 1) = v12;
    --v10;
  }
  while ( v10 );
  v13 = *(_OWORD *)&v8->bspSurfIter.current;
  mark = v8->bspSurfIter.mark;
  *(_OWORD *)v7 = v13;
  *((_QWORD *)v7 + 2) = mark;
  if ( (unsigned int)v3 >= 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v3, 19) )
    __debugbreak();
  v15 = v23;
  v16 = (__int64)&v6->drawListIter[v3 + 65];
  do
  {
    v16 += 128i64;
    v17 = *(__m256i *)v15;
    v18 = *((_OWORD *)v15 + 7);
    v15 += 128;
    *(__m256i *)(v16 - 128) = v17;
    *(__m256i *)(v16 - 96) = *((__m256i *)v15 - 3);
    *(__m256i *)(v16 - 64) = *((__m256i *)v15 - 2);
    *(_OWORD *)(v16 - 32) = *((_OWORD *)v15 - 2);
    *(_OWORD *)(v16 - 16) = v18;
    --v9;
  }
  while ( v9 );
  v19 = *(_OWORD *)v15;
  v20 = *((_QWORD *)v15 + 2);
  *(_OWORD *)v16 = v19;
  *(_QWORD *)(v16 + 16) = v20;
  if ( (_DWORD)v3 != 2 )
  {
    if ( (unsigned int)v3 >= 0x13 )
    {
      LODWORD(v22) = 19;
      LODWORD(v21) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    R_AddDrawCall(viewInfo, NULL, (GfxDrawListType)(v3 + 65), 0x5Du);
    R_AddDrawCall(viewInfo, NULL, (GfxDrawListType)v3, 0x5Du);
  }
}

/*
==============
R_SubmitEmissive
==============
*/
void R_SubmitEmissive(GfxViewInfo *viewInfo)
{
  unsigned int codeEmissiveMatRenderFeatures; 
  __int64 viewInfoIndex; 
  GfxViewInfo *v4; 
  volatile int *p_matRenderFeatures; 
  const GfxDrawList *v6; 
  const GfxDrawList *v7; 
  const GfxDrawList *v8; 
  const GfxDrawList *v9; 

  viewInfo->drawList[19].codeSurfList.listType = GFX_CODE_SURFLIST_EMISSIVE;
  viewInfo->drawList[23].codeSurfList.listType = GFX_CODE_SURFLIST_EMISSIVE;
  viewInfo->drawList[20].codeSurfList.listType = GFX_CODE_SURFLIST_EMISSIVE;
  viewInfo->drawList[21].codeSurfList.listType = GFX_CODE_SURFLIST_EMISSIVE;
  viewInfo->drawList[22].codeSurfList.listType = GFX_CODE_SURFLIST_EMISSIVE;
  Sys_ProfBeginNamedEvent(0xFF708090, "sort fx surfs");
  viewInfo->drawList[19].codeSurfList.surfs = &frontEndDataOut->codeEmissiveSurfs[frontEndDataOut->codeSurfCount[0]];
  R_EmitCodeSurfs(&viewInfo->drawList[19].codeSurfList, 0x4000 - frontEndDataOut->codeSurfCount[0], GFX_CODE_SURFLIST_EMISSIVE);
  frontEndDataOut->codeSurfCount[0] += viewInfo->drawList[19].codeSurfList.count;
  R_EmitFlareSurfs(viewInfo);
  Sys_ProfEndNamedEvent();
  if ( rg.distortion )
  {
    R_EmitDrawSurfList(scene.drawSurfs[4], scene.drawSurfCount[4], &viewInfo->drawList[19]);
    codeEmissiveMatRenderFeatures = scene.codeEmissiveMatRenderFeatures;
    viewInfoIndex = frontEndDataOut->viewInfoIndex;
    v4 = frontEndDataOut->viewInfo;
    p_matRenderFeatures = &v4[viewInfoIndex].matRenderFeatures;
    if ( (((_BYTE)(viewInfoIndex * 25744) + (_BYTE)v4 - 96) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_matRenderFeatures) )
      __debugbreak();
    _InterlockedOr(p_matRenderFeatures, codeEmissiveMatRenderFeatures);
    v6 = &viewInfo->drawList[23];
    scene.codeEmissiveMatRenderFeatures = GFX_VIEW_MTL_FEAT_NONE;
    R_SplitSurfs(s_world.sortKeyEffectDistortion, &viewInfo->drawList[19], &viewInfo->drawList[23], &viewInfo->matRenderFeatures, GFX_VIEW_MTL_FEAT_POST_LIT_RESOLVE_1);
    v7 = &viewInfo->drawList[22];
    v8 = &viewInfo->drawList[21];
    v9 = &viewInfo->drawList[20];
    R_SplitDepthHackCodeSurfs(&viewInfo->drawList[19], &viewInfo->drawList[20], &viewInfo->drawList[21], &viewInfo->drawList[22]);
  }
  else
  {
    v6 = &viewInfo->drawList[23];
    R_EmitDrawSurfList(scene.drawSurfs[4], scene.drawSurfCount[4], &viewInfo->drawList[23]);
    v9 = &viewInfo->drawList[20];
    v8 = &viewInfo->drawList[21];
    v7 = &viewInfo->drawList[22];
  }
  R_DrawListIter_Init(&viewInfo->drawList[19], &frontEndDataOut->drawListIter[19]);
  R_DrawListIter_Init(v6, &frontEndDataOut->drawListIter[23]);
  R_DrawListIter_Init(v9, &frontEndDataOut->drawListIter[20]);
  R_DrawListIter_Init(v8, &frontEndDataOut->drawListIter[21]);
  R_DrawListIter_Init(v7, &frontEndDataOut->drawListIter[22]);
  if ( !rg.debugShaderEnabled )
  {
    R_AddDrawCall(viewInfo, NULL, DRAWLIST_PREPASS_COUNT, 0x5Du);
    R_AddDrawCall(viewInfo, NULL, DRAWLIST_DEPTH_HACK_EMISSIVE, 0x5Du);
    R_AddDrawCall(viewInfo, NULL, DRAWLIST_POST_BLUR_EMISSIVE, 0x5Du);
    R_AddDrawCall(viewInfo, NULL, DRAWLIST_POST_BLUR_DEPTH_HACK_EMISSIVE, 0x5Du);
    R_AddDrawCall(viewInfo, NULL, DRAWLIST_DISTORT_EMISSIVE, 0x5Du);
  }
}

/*
==============
R_SubmitEntityIDSurfaces
==============
*/
void R_SubmitEntityIDSurfaces(GfxViewInfo *viewInfo, GfxDrawListType drawListID, GfxDrawSurfListType drawSurfListType, bool prepassOnly, bool postOpaquePrepass)
{
  __int64 v5; 
  GfxDrawList *v8; 
  GfxBackEndData *v9; 
  char *v10; 
  __int64 v11; 
  __int64 v12; 
  GfxDrawListIter *v13; 
  __m256i v14; 
  __int128 v15; 
  __int128 v16; 
  const unsigned __int64 *mark; 
  char *v18; 
  __int64 v19; 
  __int64 v20; 
  __m256i v21; 
  __int128 v22; 
  __int128 v23; 
  __int64 v24; 
  char *v25; 
  __int64 v26; 
  GfxBackEndData *v27; 
  GfxDrawListIter *v28; 
  __m256i v29; 
  __int128 v30; 
  __int128 v31; 
  const unsigned __int64 *v32; 
  __int64 v33; 
  char *v34; 
  __m256i v35; 
  __int128 v36; 
  __int128 v37; 
  __int64 v38; 
  GfxDrawListType v39; 
  __int64 v40; 
  __int64 v41; 
  char v42[672]; 

  v5 = drawListID;
  v8 = &viewInfo->drawList[drawListID];
  R_EmitDrawSurfList(scene.drawSurfs[drawSurfListType], scene.drawSurfCount[drawSurfListType], v8);
  R_DrawListIter_Init(v8, &frontEndDataOut->drawListIter[v5]);
  v9 = frontEndDataOut;
  v10 = v42;
  v11 = 5i64;
  v12 = 5i64;
  v13 = &frontEndDataOut->drawListIter[v5];
  do
  {
    v10 += 128;
    v14 = *(__m256i *)&v13->bspSurfIter.current;
    v15 = *(_OWORD *)&v13->smodelSubdivPatchSurfIter.visData;
    v13 = (GfxDrawListIter *)((char *)v13 + 128);
    *((__m256i *)v10 - 4) = v14;
    *((__m256i *)v10 - 3) = *(__m256i *)&v13[-1].iteratorPool[7].key.fields.spliceIndex;
    *((__m256i *)v10 - 2) = *(__m256i *)&v13[-1].iteratorPool[7].SaveMarkCallback;
    *((_OWORD *)v10 - 2) = *(_OWORD *)&v13[-1].iteratorPool[8].RenderDrawGroupCallback;
    *((_OWORD *)v10 - 1) = v15;
    --v12;
  }
  while ( v12 );
  v16 = *(_OWORD *)&v13->bspSurfIter.current;
  mark = v13->bspSurfIter.mark;
  *(_OWORD *)v10 = v16;
  *((_QWORD *)v10 + 2) = mark;
  if ( (unsigned int)v5 >= 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v5, 19) )
    __debugbreak();
  v18 = v42;
  v19 = (__int64)&v9->drawListIter[v5 + 65];
  v20 = 5i64;
  do
  {
    v19 += 128i64;
    v21 = *(__m256i *)v18;
    v22 = *((_OWORD *)v18 + 7);
    v18 += 128;
    *(__m256i *)(v19 - 128) = v21;
    *(__m256i *)(v19 - 96) = *((__m256i *)v18 - 3);
    *(__m256i *)(v19 - 64) = *((__m256i *)v18 - 2);
    *(_OWORD *)(v19 - 32) = *((_OWORD *)v18 - 2);
    *(_OWORD *)(v19 - 16) = v22;
    --v20;
  }
  while ( v20 );
  v23 = *(_OWORD *)v18;
  v24 = *((_QWORD *)v18 + 2);
  v25 = v42;
  *(_OWORD *)v19 = v23;
  *(_QWORD *)(v19 + 16) = v24;
  v26 = 5i64;
  v27 = frontEndDataOut;
  v28 = &frontEndDataOut->drawListIter[v5];
  do
  {
    v25 += 128;
    v29 = *(__m256i *)&v28->bspSurfIter.current;
    v30 = *(_OWORD *)&v28->smodelSubdivPatchSurfIter.visData;
    v28 = (GfxDrawListIter *)((char *)v28 + 128);
    *((__m256i *)v25 - 4) = v29;
    *((__m256i *)v25 - 3) = *(__m256i *)&v28[-1].iteratorPool[7].key.fields.spliceIndex;
    *((__m256i *)v25 - 2) = *(__m256i *)&v28[-1].iteratorPool[7].SaveMarkCallback;
    *((_OWORD *)v25 - 2) = *(_OWORD *)&v28[-1].iteratorPool[8].RenderDrawGroupCallback;
    *((_OWORD *)v25 - 1) = v30;
    --v26;
  }
  while ( v26 );
  v31 = *(_OWORD *)&v28->bspSurfIter.current;
  v32 = v28->bspSurfIter.mark;
  *(_OWORD *)v25 = v31;
  *((_QWORD *)v25 + 2) = v32;
  v33 = (__int64)&v27->drawListIter[R_ForwardToPrepassStencilDrawListType((GfxDrawListType)v5)];
  v34 = v42;
  do
  {
    v33 += 128i64;
    v35 = *(__m256i *)v34;
    v36 = *((_OWORD *)v34 + 7);
    v34 += 128;
    *(__m256i *)(v33 - 128) = v35;
    *(__m256i *)(v33 - 96) = *((__m256i *)v34 - 3);
    *(__m256i *)(v33 - 64) = *((__m256i *)v34 - 2);
    *(_OWORD *)(v33 - 32) = *((_OWORD *)v34 - 2);
    *(_OWORD *)(v33 - 16) = v36;
    --v11;
  }
  while ( v11 );
  v37 = *(_OWORD *)v34;
  v38 = *((_QWORD *)v34 + 2);
  *(_OWORD *)v33 = v37;
  *(_QWORD *)(v33 + 16) = v38;
  if ( (unsigned int)v5 >= 0x13 )
  {
    LODWORD(v41) = 19;
    LODWORD(v40) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v40, v41) )
      __debugbreak();
  }
  R_AddDrawCall(viewInfo, NULL, (GfxDrawListType)(v5 + 65), 0x5Du);
  if ( postOpaquePrepass )
  {
    v39 = R_ForwardToPrepassStencilDrawListType((GfxDrawListType)v5);
    R_AddDrawCall(viewInfo, NULL, v39, 0x5Du);
  }
  if ( !prepassOnly )
    R_AddDrawCall(viewInfo, NULL, (GfxDrawListType)v5, 0x5Du);
}

/*
==============
R_SubmitFXandTransparencies
==============
*/
void R_SubmitFXandTransparencies(GfxViewInfo *viewInfo)
{
  GfxGlassSurfList *p_glassSurfList; 
  __int64 v3; 
  __int64 v4; 
  GfxDrawListIter *v5; 
  GfxDrawListIter *v6; 
  __int128 v7; 
  __int64 v8; 
  GfxDrawListIter *v9; 
  GfxDrawListIter *v10; 
  __int128 v11; 
  __int64 v12; 
  GfxDrawListIter *v13; 
  GfxDrawListIter *v14; 
  __int128 v15; 
  GfxDrawListIter *v16; 
  GfxDrawListIter *v17; 
  __int128 v18; 

  p_glassSurfList = &viewInfo->drawList[10].glassSurfList;
  p_glassSurfList->surfs = frontEndDataOut->glassSurfs;
  viewInfo->drawList[12].glassSurfList.surfs = &frontEndDataOut->glassSurfs[scene.glassOpaqueSurfCount];
  R_EmitGlassSurfs(p_glassSurfList, &viewInfo->drawList[12].glassSurfList, 768);
  R_EmitDrawSurfList(scene.drawSurfs[2], scene.drawSurfCount[2], &viewInfo->drawList[11]);
  if ( rg.distortion )
  {
    R_EmitDrawSurfList(scene.drawSurfs[3], scene.drawSurfCount[3], &viewInfo->drawList[12]);
    R_SplitSurfs(s_world.sortKeyDistortion, &viewInfo->drawList[12], &viewInfo->drawList[13], &viewInfo->matRenderFeatures, GFX_VIEW_MTL_FEAT_POST_LIT_RESOLVE_0);
  }
  else
  {
    R_EmitDrawSurfList(scene.drawSurfs[3], scene.drawSurfCount[3], &viewInfo->drawList[13]);
  }
  R_DrawListIter_Init(&viewInfo->drawList[10], &frontEndDataOut->drawListIter[10]);
  R_DrawListIter_Init(&viewInfo->drawList[11], &frontEndDataOut->drawListIter[11]);
  R_DrawListIter_Init(&viewInfo->drawList[12], &frontEndDataOut->drawListIter[12]);
  R_DrawListIter_Init(&viewInfo->drawList[13], &frontEndDataOut->drawListIter[13]);
  v3 = 5i64;
  v4 = 5i64;
  v5 = &frontEndDataOut->drawListIter[76];
  v6 = &frontEndDataOut->drawListIter[10];
  do
  {
    v5 = (GfxDrawListIter *)((char *)v5 + 128);
    v7 = *(_OWORD *)&v6->bspSurfIter.current;
    v6 = (GfxDrawListIter *)((char *)v6 + 128);
    *(_OWORD *)&v5[-1].iteratorPool[6].RenderDrawGroupCallback = v7;
    *(_OWORD *)&v5[-1].iteratorPool[6].SaveMarkCallback = *(_OWORD *)&v6[-1].iteratorPool[6].SaveMarkCallback;
    *(_OWORD *)&v5[-1].iteratorPool[7].key.fields.spliceIndex = *(_OWORD *)&v6[-1].iteratorPool[7].key.fields.spliceIndex;
    *(_OWORD *)&v5[-1].iteratorPool[7].RenderDrawGroupCallback = *(_OWORD *)&v6[-1].iteratorPool[7].RenderDrawGroupCallback;
    *(_OWORD *)&v5[-1].iteratorPool[7].SaveMarkCallback = *(_OWORD *)&v6[-1].iteratorPool[7].SaveMarkCallback;
    *(_OWORD *)&v5[-1].iteratorPool[8].key.fields.spliceIndex = *(_OWORD *)&v6[-1].iteratorPool[8].key.fields.spliceIndex;
    *(_OWORD *)&v5[-1].iteratorPool[8].RenderDrawGroupCallback = *(_OWORD *)&v6[-1].iteratorPool[8].RenderDrawGroupCallback;
    *(_OWORD *)&v5[-1].iteratorPool[8].SaveMarkCallback = *(_OWORD *)&v6[-1].iteratorPool[8].SaveMarkCallback;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)&v5->bspSurfIter.current = *(_OWORD *)&v6->bspSurfIter.current;
  v8 = 5i64;
  v5->bspSurfIter.mark = v6->bspSurfIter.mark;
  v9 = &frontEndDataOut->drawListIter[75];
  v10 = &frontEndDataOut->drawListIter[11];
  do
  {
    v9 = (GfxDrawListIter *)((char *)v9 + 128);
    v11 = *(_OWORD *)&v10->bspSurfIter.current;
    v10 = (GfxDrawListIter *)((char *)v10 + 128);
    *(_OWORD *)&v9[-1].iteratorPool[6].RenderDrawGroupCallback = v11;
    *(_OWORD *)&v9[-1].iteratorPool[6].SaveMarkCallback = *(_OWORD *)&v10[-1].iteratorPool[6].SaveMarkCallback;
    *(_OWORD *)&v9[-1].iteratorPool[7].key.fields.spliceIndex = *(_OWORD *)&v10[-1].iteratorPool[7].key.fields.spliceIndex;
    *(_OWORD *)&v9[-1].iteratorPool[7].RenderDrawGroupCallback = *(_OWORD *)&v10[-1].iteratorPool[7].RenderDrawGroupCallback;
    *(_OWORD *)&v9[-1].iteratorPool[7].SaveMarkCallback = *(_OWORD *)&v10[-1].iteratorPool[7].SaveMarkCallback;
    *(_OWORD *)&v9[-1].iteratorPool[8].key.fields.spliceIndex = *(_OWORD *)&v10[-1].iteratorPool[8].key.fields.spliceIndex;
    *(_OWORD *)&v9[-1].iteratorPool[8].RenderDrawGroupCallback = *(_OWORD *)&v10[-1].iteratorPool[8].RenderDrawGroupCallback;
    *(_OWORD *)&v9[-1].iteratorPool[8].SaveMarkCallback = *(_OWORD *)&v10[-1].iteratorPool[8].SaveMarkCallback;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&v9->bspSurfIter.current = *(_OWORD *)&v10->bspSurfIter.current;
  v9->bspSurfIter.mark = v10->bspSurfIter.mark;
  v12 = 5i64;
  v13 = &frontEndDataOut->drawListIter[77];
  v14 = &frontEndDataOut->drawListIter[12];
  do
  {
    v13 = (GfxDrawListIter *)((char *)v13 + 128);
    v15 = *(_OWORD *)&v14->bspSurfIter.current;
    v14 = (GfxDrawListIter *)((char *)v14 + 128);
    *(_OWORD *)&v13[-1].iteratorPool[6].RenderDrawGroupCallback = v15;
    *(_OWORD *)&v13[-1].iteratorPool[6].SaveMarkCallback = *(_OWORD *)&v14[-1].iteratorPool[6].SaveMarkCallback;
    *(_OWORD *)&v13[-1].iteratorPool[7].key.fields.spliceIndex = *(_OWORD *)&v14[-1].iteratorPool[7].key.fields.spliceIndex;
    *(_OWORD *)&v13[-1].iteratorPool[7].RenderDrawGroupCallback = *(_OWORD *)&v14[-1].iteratorPool[7].RenderDrawGroupCallback;
    *(_OWORD *)&v13[-1].iteratorPool[7].SaveMarkCallback = *(_OWORD *)&v14[-1].iteratorPool[7].SaveMarkCallback;
    *(_OWORD *)&v13[-1].iteratorPool[8].key.fields.spliceIndex = *(_OWORD *)&v14[-1].iteratorPool[8].key.fields.spliceIndex;
    *(_OWORD *)&v13[-1].iteratorPool[8].RenderDrawGroupCallback = *(_OWORD *)&v14[-1].iteratorPool[8].RenderDrawGroupCallback;
    *(_OWORD *)&v13[-1].iteratorPool[8].SaveMarkCallback = *(_OWORD *)&v14[-1].iteratorPool[8].SaveMarkCallback;
    --v12;
  }
  while ( v12 );
  *(_OWORD *)&v13->bspSurfIter.current = *(_OWORD *)&v14->bspSurfIter.current;
  v13->bspSurfIter.mark = v14->bspSurfIter.mark;
  v16 = &frontEndDataOut->drawListIter[78];
  v17 = &frontEndDataOut->drawListIter[13];
  do
  {
    v16 = (GfxDrawListIter *)((char *)v16 + 128);
    v18 = *(_OWORD *)&v17->bspSurfIter.current;
    v17 = (GfxDrawListIter *)((char *)v17 + 128);
    *(_OWORD *)&v16[-1].iteratorPool[6].RenderDrawGroupCallback = v18;
    *(_OWORD *)&v16[-1].iteratorPool[6].SaveMarkCallback = *(_OWORD *)&v17[-1].iteratorPool[6].SaveMarkCallback;
    *(_OWORD *)&v16[-1].iteratorPool[7].key.fields.spliceIndex = *(_OWORD *)&v17[-1].iteratorPool[7].key.fields.spliceIndex;
    *(_OWORD *)&v16[-1].iteratorPool[7].RenderDrawGroupCallback = *(_OWORD *)&v17[-1].iteratorPool[7].RenderDrawGroupCallback;
    *(_OWORD *)&v16[-1].iteratorPool[7].SaveMarkCallback = *(_OWORD *)&v17[-1].iteratorPool[7].SaveMarkCallback;
    *(_OWORD *)&v16[-1].iteratorPool[8].key.fields.spliceIndex = *(_OWORD *)&v17[-1].iteratorPool[8].key.fields.spliceIndex;
    *(_OWORD *)&v16[-1].iteratorPool[8].RenderDrawGroupCallback = *(_OWORD *)&v17[-1].iteratorPool[8].RenderDrawGroupCallback;
    *(_OWORD *)&v16[-1].iteratorPool[8].SaveMarkCallback = *(_OWORD *)&v17[-1].iteratorPool[8].SaveMarkCallback;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)&v16->bspSurfIter.current = *(_OWORD *)&v17->bspSurfIter.current;
  v16->bspSurfIter.mark = v17->bspSurfIter.mark;
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_PREPASS_LIT_OPAQUE_GLASS, 0x5Du);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_PREPASS_LIT_DECAL, 0x5Du);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_PREPASS_LIT_TRANS, 0x5Du);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_PREPASS_LIT_TRANS1, 0x5Du);
  R_AddDrawCalls(viewInfo, NULL, DRAWLIST_LIT_OPAQUE, DRAWLIST_LIT_OPAQUE_END, 0x5Du);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_LIT_OPAQUE_END, 0x5Du);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_LIT_OPAQUE_GLASS, 0x5Du);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_LIT_DECAL, 0x5Du);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_LIT_TRANS, 0x5Du);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_LIT_TRANS1, 0x5Du);
}

/*
==============
R_SubmitSurfaces
==============
*/
void R_SubmitSurfaces(GfxViewInfo *viewInfo)
{
  __int64 v1; 
  int v3; 
  __int64 v4; 
  GfxBackEndData *v5; 
  char *v6; 
  __int64 v7; 
  GfxDrawListIter *v8; 
  __m256i v9; 
  __int128 v10; 
  GfxDrawListIter *drawListIter; 
  __int128 v12; 
  const unsigned __int64 *mark; 
  __int64 v14; 
  __int64 v15; 
  char *v16; 
  __m256i v17; 
  __int128 v18; 
  __int64 v19; 
  GfxBackEndData *v20; 
  char *v21; 
  __int64 v22; 
  GfxDrawListIter *v23; 
  __m256i v24; 
  __int128 v25; 
  __int128 v26; 
  const unsigned __int64 *v27; 
  __int64 v28; 
  GfxDrawListIter *v29; 
  char *v30; 
  __m256i v31; 
  __int128 v32; 
  __int128 v33; 
  const unsigned __int64 *v34; 
  int i; 
  GfxBackEndData *v36; 
  char *v37; 
  __int64 v38; 
  GfxDrawListIter *v39; 
  __m256i v40; 
  __int128 v41; 
  __int128 v42; 
  const unsigned __int64 *v43; 
  GfxDrawListIter *v44; 
  char *v45; 
  __m256i v46; 
  __int128 v47; 
  __int128 v48; 
  const unsigned __int64 *v49; 
  __int64 v50; 
  __int64 v51; 
  char v52[672]; 

  v1 = 5i64;
  R_SubmitDepthHackSurfaces(viewInfo, DRAWLIST_FIRST, DSL_CAM_DEPTH_HACK);
  R_SubmitDepthHackSurfaces(viewInfo, DRAWLIST_DEPTH_HACK_TRANS, DSL_CAM_DEPTH_HACK_TRANS);
  R_SubmitDepthHackSurfaces(viewInfo, DRAWLIST_DEPTH_HACK_SSS, DSL_CAM_DEPTH_HACK_SSS);
  R_SubmitEntityIDSurfaces(viewInfo, DRAWLIST_HUD_OUTLINE_FIRST, DSL_CAM_PRE_DEPTH_HACK, 0, 1);
  R_SubmitEntityIDSurfaces(viewInfo, DRAWLIST_PRE_DEPTH_HACK_SSS, DSL_CAM_PRE_DEPTH_HACK_SSS, 0, 1);
  R_SubmitEntityIDSurfaces(viewInfo, DRAWLIST_PRE_OPAQUE, DSL_CAM_PRE_OPAQUE, 0, 1);
  R_SubmitEntityIDSurfaces(viewInfo, DRAWLIST_PRE_SSS, DSL_CAM_PRE_SSS, 0, 1);
  R_SubmitEntityIDSurfaces(viewInfo, DRAWLIST_EID_ONLY, DSL_CAM_EID_ONLY, 1, 0);
  R_EmitDrawSurfList(scene.drawSurfs[0], scene.drawSurfCount[0], &viewInfo->drawList[3]);
  R_ST_EmitDrawSurfs(viewInfo);
  R_DrawListIter_Init(&viewInfo->drawList[3], &frontEndDataOut->drawListIter[3]);
  if ( (*((_BYTE *)&viewInfo->input + 7920) & 2) != 0 )
  {
    *(__m256i *)&viewInfo->drawList[4].bspSurfList.count = *(__m256i *)&viewInfo->drawList[3].bspSurfList.count;
    *(__m256i *)&viewInfo->drawList[4].smodelSurfList[0].visData = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[0].visData;
    *(__m256i *)&viewInfo->drawList[4].smodelSurfList[2].surfDataBytes = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[2].surfDataBytes;
    *(__m256i *)&viewInfo->drawList[4].drawSurfList.count = *(__m256i *)&viewInfo->drawList[3].drawSurfList.count;
    *(_OWORD *)&viewInfo->drawList[4].codeSurfList.count = *(_OWORD *)&viewInfo->drawList[3].codeSurfList.count;
    *(double *)&viewInfo->drawList[4].superTerrainSurfList.count = *(double *)&viewInfo->drawList[3].superTerrainSurfList.count;
    *(__m256i *)&viewInfo->drawList[5].bspSurfList.count = *(__m256i *)&viewInfo->drawList[3].bspSurfList.count;
    *(__m256i *)&viewInfo->drawList[5].smodelSurfList[0].visData = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[0].visData;
    *(__m256i *)&viewInfo->drawList[5].smodelSurfList[2].surfDataBytes = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[2].surfDataBytes;
    *(__m256i *)&viewInfo->drawList[5].drawSurfList.count = *(__m256i *)&viewInfo->drawList[3].drawSurfList.count;
    *(_OWORD *)&viewInfo->drawList[5].codeSurfList.count = *(_OWORD *)&viewInfo->drawList[3].codeSurfList.count;
    *(double *)&viewInfo->drawList[5].superTerrainSurfList.count = *(double *)&viewInfo->drawList[3].superTerrainSurfList.count;
    *(__m256i *)&viewInfo->drawList[6].bspSurfList.count = *(__m256i *)&viewInfo->drawList[3].bspSurfList.count;
    *(__m256i *)&viewInfo->drawList[6].smodelSurfList[0].visData = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[0].visData;
    *(__m256i *)&viewInfo->drawList[6].smodelSurfList[2].surfDataBytes = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[2].surfDataBytes;
    *(__m256i *)&viewInfo->drawList[6].drawSurfList.count = *(__m256i *)&viewInfo->drawList[3].drawSurfList.count;
    *(_OWORD *)&viewInfo->drawList[6].codeSurfList.count = *(_OWORD *)&viewInfo->drawList[3].codeSurfList.count;
    *(double *)&viewInfo->drawList[6].superTerrainSurfList.count = *(double *)&viewInfo->drawList[3].superTerrainSurfList.count;
    *(__m256i *)&viewInfo->drawList[7].bspSurfList.count = *(__m256i *)&viewInfo->drawList[3].bspSurfList.count;
    *(__m256i *)&viewInfo->drawList[7].smodelSurfList[0].visData = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[0].visData;
    *(__m256i *)&viewInfo->drawList[7].smodelSurfList[2].surfDataBytes = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[2].surfDataBytes;
    *(__m256i *)&viewInfo->drawList[7].drawSurfList.count = *(__m256i *)&viewInfo->drawList[3].drawSurfList.count;
    *(_OWORD *)&viewInfo->drawList[7].codeSurfList.count = *(_OWORD *)&viewInfo->drawList[3].codeSurfList.count;
    *(double *)&viewInfo->drawList[7].superTerrainSurfList.count = *(double *)&viewInfo->drawList[3].superTerrainSurfList.count;
    *(__m256i *)&viewInfo->drawList[8].bspSurfList.count = *(__m256i *)&viewInfo->drawList[3].bspSurfList.count;
    *(__m256i *)&viewInfo->drawList[8].smodelSurfList[0].visData = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[0].visData;
    *(__m256i *)&viewInfo->drawList[8].smodelSurfList[2].surfDataBytes = *(__m256i *)&viewInfo->drawList[3].smodelSurfList[2].surfDataBytes;
    *(__m256i *)&viewInfo->drawList[8].drawSurfList.count = *(__m256i *)&viewInfo->drawList[3].drawSurfList.count;
    *(_OWORD *)&viewInfo->drawList[8].codeSurfList.count = *(_OWORD *)&viewInfo->drawList[3].codeSurfList.count;
    *(double *)&viewInfo->drawList[8].superTerrainSurfList.count = *(double *)&viewInfo->drawList[3].superTerrainSurfList.count;
    R_SplitIterGroup(&frontEndDataOut->drawListIter[3], 6u);
    v3 = 3;
    v4 = 3i64;
    do
    {
      v5 = frontEndDataOut;
      v6 = v52;
      v7 = 5i64;
      v8 = &frontEndDataOut->drawListIter[v4];
      do
      {
        v6 += 128;
        v9 = *(__m256i *)&v8->bspSurfIter.current;
        v10 = *(_OWORD *)&v8->smodelSubdivPatchSurfIter.visData;
        v8 = (GfxDrawListIter *)((char *)v8 + 128);
        *((__m256i *)v6 - 4) = v9;
        *((__m256i *)v6 - 3) = *(__m256i *)&v8[-1].iteratorPool[7].key.fields.spliceIndex;
        *((__m256i *)v6 - 2) = *(__m256i *)&v8[-1].iteratorPool[7].SaveMarkCallback;
        *((_OWORD *)v6 - 2) = *(_OWORD *)&v8[-1].iteratorPool[8].RenderDrawGroupCallback;
        *((_OWORD *)v6 - 1) = v10;
        --v7;
      }
      while ( v7 );
      drawListIter = v5->drawListIter;
      v12 = *(_OWORD *)&v8->bspSurfIter.current;
      mark = v8->bspSurfIter.mark;
      *(_OWORD *)v6 = v12;
      *((_QWORD *)v6 + 2) = mark;
      if ( (unsigned int)v3 >= 0x13 )
      {
        LODWORD(v51) = 19;
        LODWORD(v50) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v50, v51) )
          __debugbreak();
      }
      v14 = (__int64)&drawListIter[v4 + 65];
      v15 = 5i64;
      v16 = v52;
      do
      {
        v14 += 128i64;
        v17 = *(__m256i *)v16;
        v18 = *((_OWORD *)v16 + 7);
        v16 += 128;
        *(__m256i *)(v14 - 128) = v17;
        *(__m256i *)(v14 - 96) = *((__m256i *)v16 - 3);
        *(__m256i *)(v14 - 64) = *((__m256i *)v16 - 2);
        *(_OWORD *)(v14 - 32) = *((_OWORD *)v16 - 2);
        *(_OWORD *)(v14 - 16) = v18;
        --v15;
      }
      while ( v15 );
      v19 = *((_QWORD *)v16 + 2);
      ++v3;
      ++v4;
      *(_OWORD *)v14 = *(_OWORD *)v16;
      *(_QWORD *)(v14 + 16) = v19;
    }
    while ( v3 < 9 );
  }
  else
  {
    v20 = frontEndDataOut;
    v21 = v52;
    v22 = 5i64;
    v23 = &frontEndDataOut->drawListIter[3];
    do
    {
      v21 += 128;
      v24 = *(__m256i *)&v23->bspSurfIter.current;
      v25 = *(_OWORD *)&v23->smodelSubdivPatchSurfIter.visData;
      v23 = (GfxDrawListIter *)((char *)v23 + 128);
      *((__m256i *)v21 - 4) = v24;
      *((__m256i *)v21 - 3) = *(__m256i *)&v23[-1].iteratorPool[7].key.fields.spliceIndex;
      *((__m256i *)v21 - 2) = *(__m256i *)&v23[-1].iteratorPool[7].SaveMarkCallback;
      *((_OWORD *)v21 - 2) = *(_OWORD *)&v23[-1].iteratorPool[8].RenderDrawGroupCallback;
      *((_OWORD *)v21 - 1) = v25;
      --v22;
    }
    while ( v22 );
    v26 = *(_OWORD *)&v23->bspSurfIter.current;
    v27 = v23->bspSurfIter.mark;
    v28 = 5i64;
    *(_OWORD *)v21 = v26;
    *((_QWORD *)v21 + 2) = v27;
    v29 = &v20->drawListIter[68];
    v30 = v52;
    do
    {
      v29 = (GfxDrawListIter *)((char *)v29 + 128);
      v31 = *(__m256i *)v30;
      v32 = *((_OWORD *)v30 + 7);
      v30 += 128;
      *(__m256i *)&v29[-1].iteratorPool[6].RenderDrawGroupCallback = v31;
      *(__m256i *)&v29[-1].iteratorPool[7].key.fields.spliceIndex = *((__m256i *)v30 - 3);
      *(__m256i *)&v29[-1].iteratorPool[7].SaveMarkCallback = *((__m256i *)v30 - 2);
      *(_OWORD *)&v29[-1].iteratorPool[8].RenderDrawGroupCallback = *((_OWORD *)v30 - 2);
      *(_OWORD *)&v29[-1].iteratorPool[8].SaveMarkCallback = v32;
      --v28;
    }
    while ( v28 );
    v33 = *(_OWORD *)v30;
    v34 = (const unsigned __int64 *)*((_QWORD *)v30 + 2);
    *(_OWORD *)&v29->bspSurfIter.current = v33;
    v29->bspSurfIter.mark = v34;
  }
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_PREPASS_LIT_OPAQUE, 0x5Du);
  if ( (*((_BYTE *)&viewInfo->input + 7920) & 2) != 0 )
  {
    for ( i = 69; i < 74; ++i )
      R_AddDrawCall(viewInfo, NULL, (GfxDrawListType)i, 0x5Du);
  }
  R_EmitDrawSurfList(scene.drawSurfs[1], scene.drawSurfCount[1], &viewInfo->drawList[9]);
  R_DrawListIter_Init(&viewInfo->drawList[9], &frontEndDataOut->drawListIter[9]);
  v36 = frontEndDataOut;
  v37 = v52;
  v38 = 5i64;
  v39 = &frontEndDataOut->drawListIter[9];
  do
  {
    v37 += 128;
    v40 = *(__m256i *)&v39->bspSurfIter.current;
    v41 = *(_OWORD *)&v39->smodelSubdivPatchSurfIter.visData;
    v39 = (GfxDrawListIter *)((char *)v39 + 128);
    *((__m256i *)v37 - 4) = v40;
    *((__m256i *)v37 - 3) = *(__m256i *)&v39[-1].iteratorPool[7].key.fields.spliceIndex;
    *((__m256i *)v37 - 2) = *(__m256i *)&v39[-1].iteratorPool[7].SaveMarkCallback;
    *((_OWORD *)v37 - 2) = *(_OWORD *)&v39[-1].iteratorPool[8].RenderDrawGroupCallback;
    *((_OWORD *)v37 - 1) = v41;
    --v38;
  }
  while ( v38 );
  v42 = *(_OWORD *)&v39->bspSurfIter.current;
  v43 = v39->bspSurfIter.mark;
  *(_OWORD *)v37 = v42;
  *((_QWORD *)v37 + 2) = v43;
  v44 = &v36->drawListIter[74];
  v45 = v52;
  do
  {
    v44 = (GfxDrawListIter *)((char *)v44 + 128);
    v46 = *(__m256i *)v45;
    v47 = *((_OWORD *)v45 + 7);
    v45 += 128;
    *(__m256i *)&v44[-1].iteratorPool[6].RenderDrawGroupCallback = v46;
    *(__m256i *)&v44[-1].iteratorPool[7].key.fields.spliceIndex = *((__m256i *)v45 - 3);
    *(__m256i *)&v44[-1].iteratorPool[7].SaveMarkCallback = *((__m256i *)v45 - 2);
    *(_OWORD *)&v44[-1].iteratorPool[8].RenderDrawGroupCallback = *((_OWORD *)v45 - 2);
    *(_OWORD *)&v44[-1].iteratorPool[8].SaveMarkCallback = v47;
    --v1;
  }
  while ( v1 );
  v48 = *(_OWORD *)v45;
  v49 = (const unsigned __int64 *)*((_QWORD *)v45 + 2);
  *(_OWORD *)&v44->bspSurfIter.current = v48;
  v44->bspSurfIter.mark = v49;
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_PREPASS_LIT_OPAQUE_END, 0x5Du);
}

/*
==============
R_SunShadowMaps
==============
*/
void R_SunShadowMaps(GfxViewInfo *viewInfo, GfxSunShadow *sunShadow)
{
  GfxSunShadow *v2; 
  GfxViewInfo *v3; 
  unsigned int v4; 
  char *Value; 
  int *v6; 
  _QWORD *v7; 
  char *v8; 
  int *v9; 
  unsigned __int64 v10; 
  ThreadContext CurrentThreadContext; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  GfxViewInfo *v16; 
  __int64 v17; 
  __int64 v18; 
  char *v19; 
  int *v20; 
  _QWORD *v21; 
  char *v22; 
  int *v23; 
  unsigned __int64 v24; 
  ThreadContext v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int v29; 
  unsigned int lastCachedSunShadowPartition; 
  GfxViewInfo *viewInfoa; 
  int v32; 
  int v33; 
  GfxSunShadow *data; 
  int v35; 
  int v36; 

  v2 = sunShadow;
  v3 = viewInfo;
  data = sunShadow;
  viewInfoa = viewInfo;
  Sys_ProfBeginNamedEvent(0xFF808080, "shadow maps");
  Profile_Begin(64);
  R_Umbra_QueryStaticSunShadows(v3, v2);
  v4 = 0;
  while ( v4 < v2->opaqueCascadeCount )
  {
    if ( v4 >= 3 )
    {
      LODWORD(v28) = 3;
      LODWORD(v27) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 346, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex ) < (unsigned)( R_SUNSHADOW_OPAQUE_PARTITION_COUNT )", "partitionIndex doesn't index R_SUNSHADOW_OPAQUE_PARTITION_COUNT\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    Value = (char *)Sys_GetValue(0);
    v6 = (int *)(Value + 4456);
    if ( (unsigned int)(*((_DWORD *)Value + 1114) + 1) >= 3 )
    {
      LODWORD(v28) = 3;
      LODWORD(v27) = *((_DWORD *)Value + 1114) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    if ( (unsigned int)++*v6 >= 3 )
    {
      LODWORD(v28) = 3;
      LODWORD(v27) = *v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    v7 = Value + 2088;
    v8 = Value + 40;
    if ( *v7 < (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v7 += 8i64;
    if ( *v7 >= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v7 = v6;
    if ( *v7 <= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v9 = &v6[*v6 + 2];
    v10 = __rdtsc();
    *v9 = v10;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 59, NULL, 0);
    R_AddSunShadowSurfacesFrustumOnly((GfxSceneViewType)++v4, v3->viewInfoIndex);
    Profile_EndInternal(NULL);
  }
  if ( v3->useCachedSunShadow )
  {
    firstCachedSunShadowPartition = v2->firstCachedSunShadowPartition;
    lastCachedSunShadowPartition = v2->lastCachedSunShadowPartition;
    v29 = firstCachedSunShadowPartition;
    if ( firstCachedSunShadowPartition <= lastCachedSunShadowPartition )
    {
      do
      {
        if ( !R_IsCachedSunShadowPartition(v2, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        v13 = 0;
        v14 = firstCachedSunShadowPartition - v2->firstCachedSunShadowPartition;
        v15 = (__int64)&v2->partitionCache[v14];
        if ( v2->partitionCache[v14].gfxCachedSunShadowOverlapCount )
        {
          v16 = viewInfoa;
          do
          {
            v17 = 864i64 * v13;
            v18 = v17 + v15 + 16;
            if ( *(_BYTE *)(v17 + v15 + 44) )
            {
              switch ( *(_DWORD *)(v17 + v15 + 32) )
              {
                case 0:
                  break;
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 0xA:
                case 0xB:
                case 0xC:
                case 0xD:
                case 0xE:
                case 0xF:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                  goto $LN184_1;
                case 0x16:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1A:
                case 0x1B:
                case 0x1C:
                case 0x1D:
                case 0x1E:
                case 0x1F:
                  if ( !rg.umbraShadowCasters )
                    goto $LN184_1;
                  break;
                default:
                  LODWORD(v27) = *(_DWORD *)(v17 + v15 + 32);
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(399): unhandled case %d in switch statement", v27) )
                    __debugbreak();
$LN184_1:
                  v19 = (char *)Sys_GetValue(0);
                  v20 = (int *)(v19 + 4456);
                  if ( (unsigned int)(*((_DWORD *)v19 + 1114) + 1) >= 3 )
                  {
                    LODWORD(v28) = 3;
                    LODWORD(v27) = *((_DWORD *)v19 + 1114) + 1;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v27, v28) )
                      __debugbreak();
                  }
                  if ( (unsigned int)++*v20 >= 3 )
                  {
                    LODWORD(v28) = 3;
                    LODWORD(v27) = *v20;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v27, v28) )
                      __debugbreak();
                  }
                  v21 = v19 + 2088;
                  v22 = v19 + 40;
                  if ( *v21 < (unsigned __int64)v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
                    __debugbreak();
                  *v21 += 8i64;
                  if ( *v21 >= (unsigned __int64)v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
                    __debugbreak();
                  *(_QWORD *)*v21 = v20;
                  if ( *v21 <= (unsigned __int64)v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
                    __debugbreak();
                  v23 = &v20[*v20 + 2];
                  v24 = __rdtsc();
                  *v23 = v24;
                  if ( Sys_HasValidCurrentThreadContext() )
                    v25 = Sys_GetCurrentThreadContext();
                  else
                    v25 = THREAD_CONTEXT_COUNT;
                  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, v25, 59, NULL, 0);
                  R_AddCachedSunShadowSurfacesFrustumOnly((DpvsPlane *)(*(_QWORD *)v18 + 48i64), *(_DWORD *)(v18 + 16), v16);
                  Profile_EndInternal(NULL);
                  *(_DWORD *)(*(_QWORD *)v18 + 560i64) = frontEndDataOut->frameCount;
                  break;
              }
            }
            ++v13;
          }
          while ( v13 < *(_DWORD *)(v15 + 4) );
          firstCachedSunShadowPartition = v29;
          v2 = data;
        }
        v29 = ++firstCachedSunShadowPartition;
      }
      while ( firstCachedSunShadowPartition <= lastCachedSunShadowPartition );
      v3 = viewInfoa;
    }
  }
  if ( rg.umbraShadowCasters )
  {
    LODWORD(viewInfoa) = v3->clientIndex;
    LODWORD(data) = (_DWORD)viewInfoa;
    HIDWORD(viewInfoa) = v3->viewInfoIndex;
    HIDWORD(data) = HIDWORD(viewInfoa);
    v33 = 48;
    v36 = 7;
    if ( v2->opaqueCascadeCount )
    {
      v26 = 1;
      do
      {
        switch ( v26 )
        {
          case 0:
            goto $LN185_1;
          case 1:
          case 2:
          case 3:
            if ( rg.umbraShadowCasters )
            {
$LN185_1:
              v32 = v26;
              v35 = v26;
              if ( r_umbraDynamicDpvsSMP->current.enabled )
                Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_SCENE_ENT_SUNSHADOWS, &data);
              else
                R_Umbra_CullSceneEnts(&data);
              if ( v26 != 3 )
              {
                if ( r_umbraDynamicDpvsSMP->current.enabled )
                  Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_DYN_ENT_SUNSHADOWS, &viewInfoa);
                else
                  R_Umbra_CullSceneEnts(&viewInfoa);
              }
            }
            break;
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
          case 31:
            break;
          default:
            LODWORD(v27) = v26;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h", 458, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_umbra_dpvs.h(458): unhandled case %d in switch statement", v27) )
              __debugbreak();
            break;
        }
        ++v26;
      }
      while ( v26 - 1 < (unsigned int)v2->opaqueCascadeCount );
    }
  }
  if ( rg.useTransSunShadow )
    R_AddTranslucentSunShadowSurfacesFrustumOnly(v2, v3->viewInfoIndex, 3u);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_TryDispatchDelayedSceneBatch
==============
*/
char R_TryDispatchDelayedSceneBatch()
{
  unsigned int v0; 

  LOBYTE(v0) = Sys_IsMainThread();
  if ( !(_BYTE)v0 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 727, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v0 = g_delayedSceneModelGlob.dobjCount + g_delayedSceneModelGlob.brushModelCount - g_delayedSceneModelGlob.firstBrushModelIndex - g_delayedSceneModelGlob.firstDObjIndex;
    if ( v0 >= 0xA )
      LOBYTE(v0) = R_DispatchDelayedSceneBatch();
  }
  return v0;
}

/*
==============
R_UnLinkDynEntClient_NoCull
==============
*/

void __fastcall R_UnLinkDynEntClient_NoCull(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  R_UnlinkDynEntClientFromPrimaryLights(localClientNum, dynEntClientId, basis);
}

/*
==============
R_UnlinkDynEntClient
==============
*/
void R_UnlinkDynEntClient(LocalClientNum_t localClientNum, unsigned __int16 dynEntClientId, DynEntityBasis basis)
{
  __int64 v4; 
  GfxWorld *world; 
  unsigned int v7; 
  __int32 v8; 
  unsigned int v9; 

  v4 = (unsigned __int8)basis;
  Profile_Begin(788);
  world = rgp.world;
  v7 = (s_world.dpvsDyn.dynEntClientCount[v4] + 31) >> 5;
  if ( v7 * (localClientNum + 1) > rgp.world->dpvsDyn.dynEntClientWordCount[v4] )
  {
    v9 = rgp.world->dpvsDyn.dynEntClientWordCount[v4];
    v8 = v7 * (localClientNum + 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10984, ASSERT_TYPE_ASSERT, "( dynEntWordsPerClient * (localClientNum + 1) ) <= ( rgp.world->dpvsDyn.dynEntClientWordCount[basis] )", "%s <= %s\n\t%u, %u", "dynEntWordsPerClient * (localClientNum + 1)", "rgp.world->dpvsDyn.dynEntClientWordCount[basis]", v8, v9) )
      __debugbreak();
    world = rgp.world;
  }
  R_UnfilterThingFromCells(dynEntClientId, &world->dpvsDyn.dynEntCellBits[(unsigned int)v4][localClientNum * v7], world->dpvsDyn.dynEntClientWordCount[(unsigned int)v4]);
  R_UnlinkDynEntClientFromPrimaryLights(localClientNum, dynEntClientId, (DynEntityBasis)v4);
  Profile_EndInternal(NULL);
}

/*
==============
R_UnlinkEntity
==============
*/

void __fastcall R_UnlinkEntity(unsigned int localClientNum, unsigned int entnum)
{
  R_UnfilterEntFromCells(localClientNum, entnum);
}

/*
==============
R_UnlinkEntityFromCells
==============
*/

void __fastcall R_UnlinkEntityFromCells(unsigned int localClientNum, unsigned int entnum)
{
  R_UnfilterEntFromCells(localClientNum, entnum);
}

/*
==============
R_UnlinkEntity_NoCull
==============
*/

void __fastcall R_UnlinkEntity_NoCull(unsigned int localClientNum, unsigned int entnum)
{
  R_UnlinkEntityFromPrimaryLights(localClientNum, entnum);
}

/*
==============
R_UpdateCorpseFadeData
==============
*/
void R_UpdateCorpseFadeData(const ntl::bitset<5120,0,unsigned __int64> *corpseFadeActive, const GfxCorpseFadeEntityData *corpseFade, const unsigned __int64 corpseFadeCount)
{
  ntl::bitset<5120,0,unsigned __int64> *p_gfxCorpseFadeActive; 
  __int64 v6; 
  __int128 v7; 

  p_gfxCorpseFadeActive = &scene.gfxCorpseFadeActive;
  v6 = 5i64;
  do
  {
    p_gfxCorpseFadeActive = (ntl::bitset<5120,0,unsigned __int64> *)((char *)p_gfxCorpseFadeActive + 128);
    v7 = *(_OWORD *)corpseFadeActive->m_data;
    corpseFadeActive = (const ntl::bitset<5120,0,unsigned __int64> *)((char *)corpseFadeActive + 128);
    *(_OWORD *)&p_gfxCorpseFadeActive[-1].m_data[64] = v7;
    *(_OWORD *)&p_gfxCorpseFadeActive[-1].m_data[66] = *(_OWORD *)&corpseFadeActive[-1].m_data[66];
    *(_OWORD *)&p_gfxCorpseFadeActive[-1].m_data[68] = *(_OWORD *)&corpseFadeActive[-1].m_data[68];
    *(_OWORD *)&p_gfxCorpseFadeActive[-1].m_data[70] = *(_OWORD *)&corpseFadeActive[-1].m_data[70];
    *(_OWORD *)&p_gfxCorpseFadeActive[-1].m_data[72] = *(_OWORD *)&corpseFadeActive[-1].m_data[72];
    *(_OWORD *)&p_gfxCorpseFadeActive[-1].m_data[74] = *(_OWORD *)&corpseFadeActive[-1].m_data[74];
    *(_OWORD *)&p_gfxCorpseFadeActive[-1].m_data[76] = *(_OWORD *)&corpseFadeActive[-1].m_data[76];
    *(_OWORD *)&p_gfxCorpseFadeActive[-1].m_data[78] = *(_OWORD *)&corpseFadeActive[-1].m_data[78];
    --v6;
  }
  while ( v6 );
  if ( corpseFadeCount != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1235, ASSERT_TYPE_ASSERT, "( ( sizeof( *array_counter( GfxScene::gfxCorpseFadeData ) ) + 0 ) ) == ( corpseFadeCount )", "%s == %s\n\t%i, %i", "ARRAY_COUNT( GfxScene::gfxCorpseFadeData )", "corpseFadeCount", 8, corpseFadeCount) )
    __debugbreak();
  memcpy_0(scene.gfxCorpseFadeData, corpseFade, 4 * corpseFadeCount);
}

/*
==============
R_UpdateFrameSun
==============
*/
void R_UpdateFrameSun(GfxLight *primaryLights, GfxViewportFeatures *features, const GfxStageInfo *stageInfo)
{
  unsigned int ActivePrimarySunLight; 
  GfxLight *v7; 
  unsigned int v8; 
  GfxBackEndData *v9; 
  GfxBackEndData *v10; 
  int v11; 
  int v12; 
  float *v; 
  GfxBackEndData *v14; 
  GfxBackEndData *v15; 

  ActivePrimarySunLight = R_GetActivePrimarySunLight(stageInfo);
  frontEndDataOut->activePrimarySunLight = ActivePrimarySunLight;
  v7 = &primaryLights[ActivePrimarySunLight];
  if ( ActivePrimarySunLight && v7->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10053, ASSERT_TYPE_ASSERT, "(activePrimarySunLight == 0 || primaryLight->type == 1)", (const char *)&queryFormat, "activePrimarySunLight == PRIMARY_LIGHT_NONE || primaryLight->type == GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  *((_DWORD *)features + 11) &= (8 * stageInfo->stagesHaveSunPrimaryLight) | 0xFFFFFFF7;
  v8 = *((_DWORD *)features + 11) & ((stageInfo->stagesHaveSunPrimaryLight << 6) | 0xFFFFFFBF);
  *((_DWORD *)features + 11) = v8;
  if ( ActivePrimarySunLight )
  {
    if ( (v8 & 4) != 0 )
    {
      frontEndDataOut->sunShadow.lightDir = v7->dir;
    }
    else
    {
      v10 = frontEndDataOut;
      *(_QWORD *)frontEndDataOut->sunShadow.lightDir.v = 0i64;
      v10->sunShadow.lightDir.v[2] = 1.0;
    }
    if ( !rg.useSunDirOverride || (v11 = 1, !rg.useSunDirOverrideAllowSlowRecomputeShadows) )
      v11 = 0;
    frontEndDataOut->hasSunDirChanged = v11;
    if ( !rg.useSunDirOverride || (v12 = 1, !rg.useSunDirOverrideAllowSlowRecomputeShadows) )
      v12 = 0;
    frontEndDataOut->hasApproxSunDirChanged = v12;
    if ( R_LightTweak_AngleChanged(0.0099999998) )
      frontEndDataOut->hasSunDirChanged = 1;
    if ( R_LightTweak_AngleChanged(0.0099999998) )
      frontEndDataOut->hasApproxSunDirChanged = 1;
    if ( !R_LightTweak_Enabled() )
    {
      if ( rg.useSunDirOverride )
      {
        v = v7->dir.v;
        if ( rg.useSunDirLerp )
        {
          R_LerpSunDir(&rg.sunDirOverride, &rg.sunDirOverrideTarget, rg.sunDirLerpBeginTime, rg.sunDirLerpEndTime, rg.sunDirLerpAccelTime, rg.sunDirLerpDecelTime, scene.def.time, &v7->dir);
        }
        else
        {
          *v = rg.sunDirOverride.v[0];
          v7->dir.v[1] = rg.sunDirOverride.v[1];
          v7->dir.v[2] = rg.sunDirOverride.v[2];
        }
        v14 = frontEndDataOut;
        frontEndDataOut->sunShadow.lightDir.v[0] = *v;
        v14->sunShadow.lightDir.v[1] = v7->dir.v[1];
        v14->sunShadow.lightDir.v[2] = v7->dir.v[2];
      }
      if ( rg.useSunColorLinearSrgbOverride )
        v7->colorLinearSrgb = rg.sunColorLinearSrgbOverride;
      if ( rg.useSunIntensityOverride )
        v7->intensity = rg.sunIntensityOverride;
    }
    if ( v7->colorLinearSrgb.v[0] == 0.0 && v7->colorLinearSrgb.v[1] == 0.0 && v7->colorLinearSrgb.v[2] == 0.0 || v7->intensity == 0.0 )
    {
      frontEndDataOut->activePrimarySunLight = 0;
      *((_DWORD *)features + 11) &= ~4u;
      v15 = frontEndDataOut;
      *(_QWORD *)frontEndDataOut->sunShadow.lightDir.v = 0i64;
      v15->sunShadow.lightDir.v[2] = 1.0;
      frontEndDataOut->hasSunDirChanged = 0;
      frontEndDataOut->hasApproxSunDirChanged = 0;
    }
  }
  else
  {
    *((_DWORD *)features + 11) = v8 & 0xFFFFFFFB;
    frontEndDataOut->hasSunDirChanged = 0;
    frontEndDataOut->hasApproxSunDirChanged = 0;
    v9 = frontEndDataOut;
    *(_QWORD *)frontEndDataOut->sunShadow.lightDir.v = 0i64;
    v9->sunShadow.lightDir.v[2] = 1.0;
  }
}

/*
==============
R_UpdateIsPrimaryLightLoaded
==============
*/
void R_UpdateIsPrimaryLightLoaded(const GfxBackEndData *backEndData)
{
  char v2; 
  bool IsActive; 
  GfxWorld *world; 
  __int64 v5; 
  bitarray<1536> *v6; 
  unsigned int v7; 
  size_t v8; 
  unsigned int v9; 
  __int64 frameCount; 
  __int64 v11; 
  __int64 v12; 

  if ( rgp.world )
  {
    v2 = 0;
    IsActive = CL_TransientsWorldMP_IsActive();
    world = rgp.world;
    if ( !IsActive )
      goto LABEL_9;
    v5 = (rgp.world->draw.transientZoneCount + 31) >> 5;
    if ( (_DWORD)v5 )
    {
      v6 = &s_prevTransientVisibility;
      do
      {
        v7 = *(unsigned int *)((char *)&v6[7718].array[31] + (char *)backEndData - (char *)&s_prevTransientVisibility);
        if ( v6->array[0] != v7 )
        {
          v6->array[0] = v7;
          v2 = 1;
        }
        v6 = (bitarray<1536> *)((char *)v6 + 4);
        --v5;
      }
      while ( v5 );
      if ( v2 )
      {
LABEL_9:
        v8 = 4 * ((unsigned __int64)(world->primaryLightCount + 31) >> 5);
        if ( world->draw.transientZoneCount <= 1 )
        {
          memset_0(s_IsPrimaryLightLoaded, 255, v8);
        }
        else
        {
          memset_0(s_IsPrimaryLightLoaded, 0, v8);
          v9 = world->lastSunPrimaryLightIndex + 1;
          if ( v9 < world->primaryLightCount )
          {
            do
            {
              if ( R_IsPrimaryLightLoadedInternal(backEndData, v9) )
              {
                if ( v9 >= 0x1980 )
                {
                  LODWORD(v12) = 6528;
                  LODWORD(v11) = v9;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v11, v12) )
                    __debugbreak();
                }
                s_IsPrimaryLightLoaded[(__int64)(int)v9 >> 5] |= 1 << (v9 & 0x1F);
              }
              ++v9;
            }
            while ( v9 < rgp.world->primaryLightCount );
          }
          if ( CL_TransientsWorldMP_IsActive() )
          {
            frameCount = backEndData->frameCount;
            Com_Printf(8, "Updating isPrimaryLightLoaded the %dth time at frame(%d)\n", ++s_isPrimaryLightLoadedUpdateCount, frameCount);
          }
        }
      }
    }
  }
}

/*
==============
R_UpdateLodParmsInternal
==============
*/
void R_UpdateLodParmsInternal(const RefdefView *view, GfxLodParms *lodParms, float lodOverride, float dynResScale)
{
  int integer; 
  int v11; 
  int v12; 
  float v13; 
  double v14; 
  double v15; 
  const dvar_t *v16; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  double PhysicalMemoryUsageRatio; 
  const dvar_t *v24; 
  float value; 
  const dvar_t *v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  float v30; 
  float v31; 
  float v35; 
  __int128 v38; 
  bool enabled; 
  float v40; 
  bool v41; 

  integer = r_renderMemMode->current.integer;
  if ( s_lastRenderMemMode != integer )
  {
    s_lastRenderMemMode = r_renderMemMode->current.integer;
    if ( integer )
    {
      switch ( integer )
      {
        case 1:
          *(double *)&_XMM7 = DOUBLE_0_5372996132811371;
          break;
        case 2:
          *(double *)&_XMM7 = DOUBLE_0_7866512786305011;
          break;
        case 3:
          *(double *)&_XMM7 = DOUBLE_0_6695130130381122;
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11422, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown LODScalePlatform") )
            __debugbreak();
          __asm { vxorpd  xmm7, xmm7, xmm7 }
          break;
      }
    }
    else
    {
      *(double *)&_XMM7 = DOUBLE_0_4689085283770711;
    }
    if ( integer )
    {
      v11 = integer - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 || v12 == 1 )
        {
          v13 = FLOAT_0_93000001;
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11458, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown LODScalePlatform") )
            __debugbreak();
          v13 = 0.0;
        }
      }
      else
      {
        v13 = FLOAT_1_0;
      }
    }
    else
    {
      v13 = FLOAT_1_58;
    }
    v14 = atan_0(0.6370702690325544);
    v15 = sin_0(v14);
    v16 = r_lodScale;
    _XMM1 = COERCE_UNSIGNED_INT64(v15 / *(double *)&_XMM7);
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    v19 = *(float *)&_XMM2 * v13;
    if ( !r_lodScale )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10167, ASSERT_TYPE_ASSERT, "(r_lodScale)", (const char *)&queryFormat, "r_lodScale") )
        __debugbreak();
      v16 = r_lodScale;
    }
    I_fclamp(v19, v16->domain.value.min, v16->domain.value.max);
    Dvar_SetFloat_Internal(r_lodScale, v19);
  }
  if ( r_lockPvs->current.enabled )
  {
    lodParms->origin.v[0] = lockPvsViewParms.camera.origin.v[0];
    lodParms->origin.v[1] = lockPvsViewParms.camera.origin.v[1];
    lodParms->origin.v[2] = lockPvsViewParms.camera.origin.v[2];
    v20 = lockPvsViewParms.camera.tanHalfFovY * 2.1186731;
  }
  else
  {
    RefdefView_GetOrg(view, &lodParms->origin);
    v20 = view->fov.tanHalfFovY * 2.1186731;
  }
  v21 = v20 * lodOverride;
  v22 = FLOAT_1_0;
  PhysicalMemoryUsageRatio = R_UGB_GetPhysicalMemoryUsageRatio();
  v24 = DVARFLT_r_ugbUsageRatioStartBiasLodDistanceThreshold;
  if ( !DVARFLT_r_ugbUsageRatioStartBiasLodDistanceThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ugbUsageRatioStartBiasLodDistanceThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  value = v24->current.value;
  v26 = DVARFLT_r_ugbUsageRatioMaxDistanceScaler;
  if ( !DVARFLT_r_ugbUsageRatioMaxDistanceScaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ugbUsageRatioMaxDistanceScaler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v27 = v26->current.value;
  v28 = DVARFLT_r_ugbDistanceScalerAmortizer;
  if ( !DVARFLT_r_ugbDistanceScalerAmortizer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ugbDistanceScalerAmortizer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( *(float *)&PhysicalMemoryUsageRatio > value )
  {
    v29 = (float)((float)(*(float *)&PhysicalMemoryUsageRatio - value) / (float)(1.0 - value)) * (float)((float)(*(float *)&PhysicalMemoryUsageRatio - value) / (float)(1.0 - value));
    v22 = (float)(v29 * v27) + (float)(1.0 - v29);
  }
  v30 = (float)((float)(1.0 - v28->current.value) * lodParms->ugbInvFovScaleModifier) + (float)(v28->current.value * v22);
  lodParms->ugbInvFovScaleModifier = v30;
  v31 = v21 / v30;
  _XMM0 = CL_IsRenderingSplitScreen();
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_2_0);
  v35 = dynResScale + r_lodScale->current.value;
  __asm { vblendvps xmm0, xmm1, xmm8, xmm2 }
  v38 = _XMM0;
  *(float *)&v38 = *(float *)&_XMM0 * v31;
  _XMM4 = v38;
  enabled = r_lodOutStaticRamp->current.enabled;
  LODWORD(_XMM2) = r_lodBias->current.integer;
  lodParms->ramp.scale = (float)(*(float *)&_XMM0 * v31) * v35;
  lodParms->ramp.scaleWithoutFovScale = v35;
  lodParms->ramp.biasWithoutFovScale = *(float *)&_XMM2;
  lodParms->ramp.allowLODOutStatic = enabled;
  lodParms->ramp.bias = (float)(*(float *)&_XMM0 * v31) * *(float *)&_XMM2;
  v40 = v35 * r_st_clutterLodScale->current.value;
  *(float *)&_XMM2 = r_st_clutterLodBias->current.value + r_lodBias->current.value;
  v41 = r_lodOutStaticRamp->current.enabled;
  lodParms->clutterRamp.scale = (float)(*(float *)&_XMM0 * v31) * v40;
  lodParms->clutterRamp.allowLODOutStatic = v41;
  lodParms->clutterRamp.bias = (float)(*(float *)&_XMM0 * v31) * *(float *)&_XMM2;
  lodParms->clutterRamp.scaleWithoutFovScale = v40;
  lodParms->clutterRamp.biasWithoutFovScale = *(float *)&_XMM2;
  lodParms->invFovScaleFx = (float)(*(float *)&_XMM0 * v31) * lodParms->ugbInvFovScaleModifier;
  lodParms->invFovScale = *(float *)&_XMM0 * v31;
  __asm { vminss  xmm0, xmm4, xmm8 }
  lodParms->cappedLodScale = *(float *)&_XMM0;
  LODWORD(lodParms->skinningBias) = r_skinnedLodBias->current.integer;
  LODWORD(lodParms->subdivBias) = r_skinnedSubdivLodBias->current.integer;
  LODWORD(lodParms->sceneSurfsBias) = r_sceneSurfsLodBias->current.integer;
  lodParms->valid = 1;
}

/*
==============
R_UpdatePlayerFadeEntityData
==============
*/
void R_UpdatePlayerFadeEntityData(const GfxPlayerFadeEntityData *playerFadeData)
{
  scene.gfxPlayerFadeData = *playerFadeData;
}

/*
==============
R_UpdateScriptableEntityData
==============
*/
void R_UpdateScriptableEntityData(const LocalClientNum_t localClientNum, unsigned __int16 entityNum, Scriptable_MaterialOverrideType scriptableMaterialOverrideType, unsigned __int8 newValue)
{
  GfxScriptEntityData *ScriptableEntityData; 

  ScriptableEntityData = R_FindScriptableEntityData(localClientNum, entityNum);
  if ( ScriptableEntityData && scriptableMaterialOverrideType )
  {
    if ( (unsigned int)scriptableMaterialOverrideType <= Scriptable_MaterialOverrideType_Dissolve )
    {
      ScriptableEntityData->m_transitionFactor = newValue;
    }
    else if ( scriptableMaterialOverrideType == Scriptable_MaterialOverrideType_FlagAmplitudeScale )
    {
      ScriptableEntityData->m_prevFlagAmplitude = ScriptableEntityData->m_flagAmplitude;
      ScriptableEntityData->m_flagAmplitude = newValue;
    }
    else
    {
      Com_Printf(8, "ERROR: Invalid scriptable type %d\n", (unsigned int)scriptableMaterialOverrideType);
    }
  }
}

/*
==============
R_UpdateSound
==============
*/
void R_UpdateSound(void)
{
  bool exists; 
  bool updateSound; 

  if ( scene.updateSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9801, ASSERT_TYPE_ASSERT, "(!scene.updateSound)", (const char *)&queryFormat, "!scene.updateSound") )
    __debugbreak();
  exists = SND_ExistsPendingRestore();
  updateSound = scene.updateSound;
  if ( !exists )
    updateSound = 1;
  scene.updateSound = updateSound;
}

/*
==============
R_UpdateTonemapParms
==============
*/
void R_UpdateTonemapParms(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  __int128 darkEv_low; 
  __int128 v6; 
  float v9; 
  float v10; 
  __int128 darkExposureAdjust_low; 
  __int128 v15; 
  float v18; 
  float v19; 
  const GfxBackEndData *data; 
  float EVCompBounds; 
  float EVCompGrayReference; 
  float v26; 
  __int128 v27; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  double ExposureAdjust; 
  double DisplayHdrUiMaxLuminance; 
  float grainStrength; 
  float intensity; 
  const GfxImage *vignetteImage; 
  float v37; 
  float v41; 
  float v42; 
  float v43; 
  float squareAspectRatioWeight; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  GfxImage *whiteImage; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  float exposure[4]; 
  float sceneAmbientAvgKiloNits; 
  float v60; 
  float imageKey; 
  float sceneAvgKiloNits; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3774, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !viewInfo->input.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3775, ASSERT_TYPE_ASSERT, "(viewInfo->input.data)", (const char *)&queryFormat, "viewInfo->input.data") )
    __debugbreak();
  darkEv_low = LODWORD(viewInfo->tonemap.darkEv);
  v6 = darkEv_low;
  *(float *)&v6 = *(float *)&darkEv_low + 0.000099999997;
  _XMM0 = v6;
  __asm { vmaxss  xmm2, xmm0, dword ptr [rbx+3824h] }
  viewInfo->tonemap.lightEv = *(float *)&_XMM2;
  if ( (float)(*(float *)&darkEv_low + 0.000024999999) > (float)(*(float *)&_XMM2 - 0.000024999999) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3781, ASSERT_TYPE_ASSERT, "(viewInfo->tonemap.darkEv + kBoundaryGap <= viewInfo->tonemap.lightEv - kBoundaryGap)", (const char *)&queryFormat, "viewInfo->tonemap.darkEv + kBoundaryGap <= viewInfo->tonemap.lightEv - kBoundaryGap") )
    __debugbreak();
  _XMM10 = LODWORD(viewInfo->tonemap.midEv);
  v9 = viewInfo->tonemap.lightEv - 0.000024999999;
  v10 = viewInfo->tonemap.darkEv + 0.000024999999;
  if ( v10 > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v10, v9) )
    __debugbreak();
  darkExposureAdjust_low = LODWORD(viewInfo->tonemap.darkExposureAdjust);
  __asm
  {
    vmaxss  xmm0, xmm10, xmm8
    vminss  xmm1, xmm0, xmm7
  }
  v15 = darkExposureAdjust_low;
  *(float *)&v15 = *(float *)&darkExposureAdjust_low + 0.000099999997;
  _XMM0 = v15;
  __asm { vmaxss  xmm2, xmm0, dword ptr [rbx+3830h] }
  viewInfo->tonemap.midEv = *(float *)&_XMM1;
  viewInfo->tonemap.lightExposureAdjust = *(float *)&_XMM2;
  if ( (float)(*(float *)&darkExposureAdjust_low + 0.000024999999) > (float)(*(float *)&_XMM2 - 0.000024999999) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3785, ASSERT_TYPE_ASSERT, "(viewInfo->tonemap.darkExposureAdjust + kBoundaryGap <= viewInfo->tonemap.lightExposureAdjust - kBoundaryGap)", (const char *)&queryFormat, "viewInfo->tonemap.darkExposureAdjust + kBoundaryGap <= viewInfo->tonemap.lightExposureAdjust - kBoundaryGap") )
    __debugbreak();
  _XMM8 = LODWORD(viewInfo->tonemap.midExposureAdjust);
  v18 = viewInfo->tonemap.lightExposureAdjust - 0.000024999999;
  v19 = viewInfo->tonemap.darkExposureAdjust + 0.000024999999;
  if ( v19 > v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v19, v18) )
    __debugbreak();
  data = viewInfo->input.data;
  __asm
  {
    vmaxss  xmm0, xmm8, xmm6
    vminss  xmm1, xmm0, xmm7
  }
  viewInfo->tonemap.midExposureAdjust = *(float *)&_XMM1;
  R_Tonemap_UpdateRadiometricScale(data, viewInfo);
  *(double *)&_XMM0 = R_Tonemap_UpdateExposure(viewInfo);
  viewInfo->tonemap.staticExposureLinear = *(float *)&_XMM0;
  rg.tonemapStaticExposureLinear = *(float *)&_XMM0;
  R_Tonemap_GetExposureInfo(viewInfo->input.data, viewInfo, exposure, &sceneAvgKiloNits, &sceneAmbientAvgKiloNits, &imageKey);
  _XMM9 = LODWORD(FLOAT_1_0);
  EVCompBounds = sceneParms->rimLighting.EVCompBounds;
  EVCompGrayReference = sceneParms->rimLighting.EVCompGrayReference;
  v26 = sceneAmbientAvgKiloNits;
  v27 = LODWORD(sceneAmbientAvgKiloNits);
  *(float *)&v27 = sceneAmbientAvgKiloNits * 1000.0;
  viewInfo->input.sceneConstants.tonemapParms0.v[0] = 1.0 / *(float *)&_XMM0;
  *(float *)&v27 = (float)(logf_0(*(float *)&v27 + 0.000060999999) * 1.442695) + 2.8399999;
  _XMM2 = v27;
  viewInfo->input.sceneConstants.tonemapParms0.v[2] = v26;
  viewInfo->input.sceneConstants.tonemapParms0.v[3] = EVCompBounds;
  __asm { vmaxss  xmm3, xmm2, xmm9 }
  viewInfo->input.sceneConstants.tonemapParms0.v[1] = *(float *)&_XMM3 + EVCompGrayReference;
  LODWORD(viewInfo->input.sceneConstants.tonemapParms2.v[0]) = r_flareDrawThresholdEV->current.integer;
  viewInfo->input.sceneConstants.tonemapParms2.v[1] = sceneParms->thermalParams.lightIntensityScreen;
  v30 = DVARFLT_r_tonemapScopeFocus;
  if ( !DVARFLT_r_tonemapScopeFocus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapScopeFocus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  *(_QWORD *)&viewInfo->input.sceneConstants.tonemapParms2.xyz.z = v30->current.unsignedInt;
  v31 = DVARBOOL_r_scopedNVGFade;
  if ( !DVARBOOL_r_scopedNVGFade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopedNVGFade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  if ( v31->current.enabled )
    viewInfo->input.sceneConstants.tonemapParms2.v[1] = viewInfo->input.data->scope.scopeFadeInfo[0].fadeInFrac * viewInfo->input.sceneConstants.tonemapParms2.v[1];
  LODWORD(v60) = 1;
  ExposureAdjust = R_Tonemap_GetExposureAdjust(viewInfo);
  viewInfo->input.sceneConstants.tonemapParms1.v[1] = v60;
  viewInfo->input.sceneConstants.tonemapParms1.v[0] = *(float *)&ExposureAdjust;
  *(_QWORD *)&viewInfo->input.sceneConstants.tonemapParms1.xyz.z = 0i64;
  v60 = COERCE_FLOAT(R_GetFramebufferColorimetry());
  DisplayHdrUiMaxLuminance = R_GetDisplayHdrUiMaxLuminance();
  viewInfo->input.sceneConstants.colorimetryParams.v[0] = v60;
  viewInfo->input.sceneConstants.colorimetryParams.v[1] = *(float *)&DisplayHdrUiMaxLuminance;
  *(_QWORD *)&viewInfo->input.sceneConstants.colorimetryParams.xyz.z = 0i64;
  if ( viewInfo->tonemap.enabled )
    grainStrength = viewInfo->tonemap.grainStrength;
  else
    grainStrength = 0.0;
  viewInfo->input.sceneConstants.filmGrainParams.v[1] = grainStrength;
  viewInfo->input.sceneConstants.filmGrainParams.v[0] = 0.0;
  *(_QWORD *)&viewInfo->input.sceneConstants.filmGrainParams.xyz.z = 0i64;
  intensity = viewInfo->vignette.intensity;
  if ( intensity <= 0.0 )
  {
    *(_QWORD *)viewInfo->input.sceneConstants.vignetteParms0.v = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.vignetteParms0.xyz.z = 0i64;
    *(_QWORD *)viewInfo->input.sceneConstants.vignetteParms1.v = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.vignetteParms1.xyz.z = 0i64;
    *(_QWORD *)viewInfo->input.sceneConstants.vignetteParms2.v = 0i64;
    *(_QWORD *)&viewInfo->input.sceneConstants.vignetteParms2.xyz.z = 0i64;
    whiteImage = rgp.whiteImage;
  }
  else
  {
    vignetteImage = viewInfo->vignette.vignetteImage;
    v37 = viewInfo->vignette.size.v[1];
    _XMM0 = (unsigned __int64)vignetteImage;
    __asm
    {
      vpcmpeqq xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm1, xmm2
    }
    v41 = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX / viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
    v42 = FLOAT_1_0;
    v43 = FLOAT_1_0;
    v60 = *(float *)&_XMM0;
    if ( v41 <= 1.0 )
      v43 = 1.0 / v41;
    else
      v42 = v41;
    squareAspectRatioWeight = viewInfo->vignette.squareAspectRatioWeight;
    v45 = (float)(1.0 - squareAspectRatioWeight) * v60;
    viewInfo->input.sceneConstants.vignetteParms0.v[0] = (float)((float)((float)(squareAspectRatioWeight * v42) + v45) / viewInfo->vignette.size.v[0]) * 2.0;
    viewInfo->input.sceneConstants.vignetteParms0.v[2] = intensity;
    viewInfo->input.sceneConstants.vignetteParms0.v[3] = 0.0;
    viewInfo->input.sceneConstants.vignetteParms0.v[1] = (float)((float)((float)(squareAspectRatioWeight * v43) + v45) / v37) * 2.0;
    v46 = viewInfo->vignette.offset.v[1];
    v47 = viewInfo->vignette.boxSize.v[1];
    v48 = viewInfo->vignette.offset.v[0];
    whiteImage = (GfxImage *)vignetteImage;
    viewInfo->input.sceneConstants.vignetteParms1.v[2] = viewInfo->vignette.boxSize.v[0];
    viewInfo->input.sceneConstants.vignetteParms1.v[1] = v46;
    viewInfo->input.sceneConstants.vignetteParms1.v[3] = v47;
    viewInfo->input.sceneConstants.vignetteParms1.v[0] = v48;
    _XMM0 = LODWORD(viewInfo->vignette.falloff);
    __asm { vmaxss  xmm1, xmm0, cs:__real@3a83126f }
    if ( !vignetteImage )
      whiteImage = rgp.whiteImage;
    _XMM0 = (unsigned __int64)vignetteImage;
    viewInfo->input.sceneConstants.vignetteParms2.v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM1) * viewInfo->vignette.falloffStart) ^ _xmm);
    viewInfo->input.sceneConstants.vignetteParms2.v[0] = 1.0 / *(float *)&_XMM1;
    __asm
    {
      vpcmpeqq xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm6, xmm2
    }
    viewInfo->input.sceneConstants.vignetteParms2.v[2] = *(float *)&_XMM0;
    viewInfo->input.sceneConstants.vignetteParms2.v[3] = 0.0;
  }
  if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  viewInfo->input.codeImages[55] = whiteImage;
  v55 = DCONST_DVARVEC4_r_nvgColorGradeLift;
  if ( !DCONST_DVARVEC4_r_nvgColorGradeLift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvgColorGradeLift") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  LODWORD(viewInfo->input.sceneConstants.nvgColorGradeLift.v[0]) = v55->current.integer;
  viewInfo->input.sceneConstants.nvgColorGradeLift.v[1] = v55->current.vector.v[1];
  viewInfo->input.sceneConstants.nvgColorGradeLift.v[2] = v55->current.vector.v[2];
  viewInfo->input.sceneConstants.nvgColorGradeLift.v[3] = v55->current.vector.v[3];
  v56 = DCONST_DVARVEC4_r_nvgColorGradeGamma;
  if ( !DCONST_DVARVEC4_r_nvgColorGradeGamma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvgColorGradeGamma") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  LODWORD(viewInfo->input.sceneConstants.nvgColorGradeGamma.v[0]) = v56->current.integer;
  viewInfo->input.sceneConstants.nvgColorGradeGamma.v[1] = v56->current.vector.v[1];
  viewInfo->input.sceneConstants.nvgColorGradeGamma.v[2] = v56->current.vector.v[2];
  viewInfo->input.sceneConstants.nvgColorGradeGamma.v[3] = v56->current.vector.v[3];
  v57 = DCONST_DVARVEC4_r_nvgColorGradeGain;
  if ( !DCONST_DVARVEC4_r_nvgColorGradeGain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvgColorGradeGain") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  LODWORD(viewInfo->input.sceneConstants.nvgColorGradeGain.v[0]) = v57->current.integer;
  viewInfo->input.sceneConstants.nvgColorGradeGain.v[1] = v57->current.vector.v[1];
  viewInfo->input.sceneConstants.nvgColorGradeGain.v[2] = v57->current.vector.v[2];
  viewInfo->input.sceneConstants.nvgColorGradeGain.v[3] = v57->current.vector.v[3];
}

/*
==============
R_UpdateViewMaterialRenderTechflags
==============
*/
void R_UpdateViewMaterialRenderTechflags(const GfxViewMaterialRenderFeatures *renderFeatures)
{
  unsigned int v1; 
  __int64 viewInfoIndex; 
  GfxViewInfo *viewInfo; 
  volatile signed __int32 *p_matRenderFeatures; 

  v1 = *renderFeatures;
  viewInfoIndex = frontEndDataOut->viewInfoIndex;
  viewInfo = frontEndDataOut->viewInfo;
  p_matRenderFeatures = &viewInfo[viewInfoIndex].matRenderFeatures;
  if ( (((_BYTE)(viewInfoIndex * 25744) + (_BYTE)viewInfo - 96) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &viewInfo[viewInfoIndex].matRenderFeatures) )
    __debugbreak();
  _InterlockedOr(p_matRenderFeatures, v1);
}

/*
==============
R_UpdateViewSurfaceBounds
==============
*/
void R_UpdateViewSurfaceBounds(const Bounds *surfBounds, GfxSceneViewType sceneViewType)
{
  __int64 v3; 
  GfxViewInfo *v4; 
  volatile signed __int32 *p_writeCount; 
  TempThreadPriority v6; 
  __int64 v7; 
  TempThreadPriority tempPriority; 

  v3 = sceneViewType;
  Sys_LockWrite(&frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].surfBoundsMutex);
  if ( (unsigned int)(v3 - 1) > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3222, ASSERT_TYPE_ASSERT, "( SCENE_VIEW_SUNSHADOW_FIRST ) <= ( sceneViewType ) && ( sceneViewType ) <= ( SCENE_VIEW_CAMERA_DEPTH_HACK )", "sceneViewType not in [SCENE_VIEW_SUNSHADOW_FIRST, SCENE_VIEW_CAMERA_DEPTH_HACK]\n\t%i not in [%i, %i]", v3, 1, 32) )
    __debugbreak();
  Bounds_Expand(&frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].sunShadowAndDepthHackSurfBounds[v3], surfBounds);
  v4 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
  p_writeCount = &v4->surfBoundsMutex.writeCount;
  if ( v4->surfBoundsMutex.writeCount != 1 )
  {
    LODWORD(v7) = *p_writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", v7, 1) )
      __debugbreak();
  }
  if ( v4->surfBoundsMutex.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  v6 = v4->surfBoundsMutex.tempPriority;
  v4->surfBoundsMutex.writeThreadId = 0;
  tempPriority = v6;
  if ( (((_BYTE)v4 - 124) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v4->surfBoundsMutex.writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(&tempPriority);
}

/*
==============
R_UpdateWeaponFadeEntityData
==============
*/
void R_UpdateWeaponFadeEntityData(const GfxWeaponFadeEntityData *weaponFadeData)
{
  scene.gfxWeaponFadeData = *weaponFadeData;
}

/*
==============
R_WaitForCellStatic
==============
*/
void R_WaitForCellStatic()
{
  int integer; 
  const Umbra::OcclusionBuffer *OcclusionBuffer; 

  Sys_ProfBeginNamedEvent(0xFF404040, "R_WaitForCellStatic");
  Sys_WaitWorkerCmdsOfType(WRKCMD_UMBRA_QUERY_STATIC_CACHED_SUNSHADOWS);
  Sys_WaitWorkerCmdsOfType(WRKCMD_UMBRA_QUERY_STATIC_CAMERA);
  integer = r_umbraDebugView->current.integer;
  if ( integer < 33 && Dvar_GetBool_Internal(r_umbraShowOverlay) && !frontEndDataOut->viewInfoIndex )
  {
    OcclusionBuffer = R_Umbra_GetOcclusionBuffer(integer, 0);
    if ( OcclusionBuffer )
      R_Umbra_FillOcclusionTexture(rgp.umbraOcclusionScene, OcclusionBuffer);
  }
  Sys_WaitWorkerCmdsOfType(WRKCMD_DPVS_CELL_STATIC);
  Sys_ProfEndNamedEvent();
}

/*
==============
SetSecureVec3
==============
*/
void SetSecureVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  float v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  float v14; 

  v14 = from->v[0];
  if ( (LODWORD(v14) & 0x7F800000) == 2139095040 || (v14 = from->v[1], (LODWORD(v14) & 0x7F800000) == 2139095040) || (v14 = from->v[2], (LODWORD(v14) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11519, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v9 = from->v[2];
  v10 = (unsigned int)to ^ LODWORD(from->v[0]) ^ ~xConst;
  v11 = v10 ^ (unsigned int)to ^ LODWORD(from->v[1]);
  LODWORD(to->v[0]) = v10;
  v12 = yConst ^ v11;
  LODWORD(to->v[1]) = v12;
  LODWORD(to->v[2]) = zConst ^ v12 ^ (unsigned int)to ^ LODWORD(v9);
  memset(&v13, 0, sizeof(v13));
}

