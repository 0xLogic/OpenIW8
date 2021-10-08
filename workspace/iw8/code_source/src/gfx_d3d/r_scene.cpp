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
  char v15; 
  __int64 v21; 
  int integer; 
  int v59; 
  int v60; 
  int v61; 
  vec4_t vec; 
  vec3_t origin; 
  vec4_t v88; 
  vec4_t v89; 
  GfxCamera camera; 
  tmat44_t<vec4_t> v91; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> in1; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovups ymm0, cs:__ymm@3e000000bec00000be0000003ec000003ec000003e000000bec00000be000000
  }
  _RBX = outOffset;
  _RDI = cameraMotion;
  v15 = frameCount;
  __asm { vmovups [rbp+1F0h+var_90], ymm0 }
  R_SetCameraForView(&refdef->view, &camera);
  MatrixForViewerOrthogonalNoOrigin(&camera.axis, &mtx);
  __asm
  {
    vmovss  xmm2, [rbp+1F0h+camera.zPlanes+8]; zNear
    vmovss  xmm1, dword ptr [rbp+1F0h+camera.___u3]; tanHalfFovY
    vmovss  xmm0, dword ptr [rbp+1F0h+camera.___u2]; tanHalfFovX
  }
  InfinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  _R12 = 0x140000000ui64;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  v21 = (int)viewportFeatures->m_viewportType + 2i64 * (int)refdef->localClientNum;
  if ( g_previousFrameViewParmsIsValid[0][v21] )
  {
    _RDX = &g_previousFrameViewParms[0][v21].viewParms.camera;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vsubss  xmm1, xmm0, dword ptr [rsp+2F0h+camera.origin]
      vmovss  xmm2, dword ptr [rdx+4]
      vsubss  xmm0, xmm2, dword ptr [rsp+2F0h+camera.origin+4]
      vmovss  dword ptr [rsp+2F0h+origin], xmm1
      vmovss  xmm1, dword ptr [rdx+8]
      vsubss  xmm2, xmm1, dword ptr [rsp+2F0h+camera.origin+8]
      vmovss  dword ptr [rsp+2F0h+origin+8], xmm2
      vmovss  dword ptr [rsp+2F0h+origin+4], xmm0
    }
    MatrixForViewerOrthogonal(&origin, &_RDX->axis, &in1);
    _RAX = 384 * ((int)viewportFeatures->m_viewportType + 2i64 * (int)refdef->localClientNum);
    __asm
    {
      vmovups ymm1, ymmword ptr [rax+r12+13B7E370h]
      vmovups ymm0, ymmword ptr [rax+r12+13B7E350h]
      vmovups ymmword ptr [rbp+1F0h+var_210+20h], ymm1
      vmovss  dword ptr [rbp+1F0h+var_210+20h], xmm8
      vmovss  dword ptr [rbp+1F0h+var_210+24h], xmm8
      vmovups ymmword ptr [rbp+1F0h+var_210], ymm0
    }
    MatrixMultiply44Aligned(&in1, &v91, &mat);
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+1F0h+out]
      vmovups ymm1, ymmword ptr [rbp+1F0h+out+20h]
      vmovups ymmword ptr [rbp+1F0h+mat], ymm0
      vmovups ymmword ptr [rbp+1F0h+mat+20h], ymm1
    }
  }
  _RAX = r_smaaDynamicSubpixelPatternDistance;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm3, dword ptr [rax+28h]
    vmulss  xmm1, xmm3, dword ptr [rsp+2F0h+camera.axis]
    vmulss  xmm0, xmm3, dword ptr [rbp+1F0h+camera.axis+4]
    vmulss  xmm2, xmm3, dword ptr [rbp+1F0h+camera.axis+8]
    vmovss  dword ptr [rsp+2F0h+vec], xmm1
    vmovss  dword ptr [rsp+2F0h+vec+4], xmm0
    vmovss  dword ptr [rsp+2F0h+vec+8], xmm2
    vmovss  dword ptr [rsp+2F0h+vec+0Ch], xmm7
  }
  MatrixTransformVector44Aligned(&vec, &out, &v88);
  MatrixTransformVector44Aligned(&vec, &mat, &v89);
  __asm
  {
    vdivss  xmm4, xmm7, dword ptr [rsp+2F0h+var_2A0+0Ch]
    vmulss  xmm3, xmm4, dword ptr [rsp+2F0h+var_2A0]
    vdivss  xmm5, xmm7, dword ptr [rsp+2F0h+var_290+0Ch]
    vmulss  xmm2, xmm5, dword ptr [rsp+2F0h+var_290]
    vmulss  xmm4, xmm4, dword ptr [rsp+2F0h+var_2A0+4]
    vsubss  xmm0, xmm3, xmm2
    vdivss  xmm6, xmm0, dword ptr [rsp+2F0h+var_2D0]
    vmulss  xmm2, xmm5, dword ptr [rsp+2F0h+var_290+4]
    vdivss  xmm0, xmm7, dword ptr [rsp+2F0h+var_2D0+4]
    vsubss  xmm3, xmm4, xmm2
    vmulss  xmm2, xmm3, xmm0
    vmulss  xmm4, xmm2, xmm2
    vmulss  xmm3, xmm6, xmm6
    vaddss  xmm0, xmm4, xmm3
    vsqrtss xmm0, xmm0, xmm0; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovaps xmm5, xmm0
  }
  integer = r_smaaDynamicSubpixelPattern->current.integer;
  if ( !integer )
    goto LABEL_12;
  v59 = integer - 1;
  if ( !v59 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+4]
      vmulss  xmm0, xmm5, xmm1
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbx], xmm1
      vsubss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
    goto LABEL_13;
  }
  v60 = v59 - 1;
  if ( !v60 )
  {
    __asm
    {
      vmulss  xmm0, xmm5, cs:__real@3f000000
      vsubss  xmm1, xmm7, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx]
      vmulss  xmm0, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx], xmm1
      vmovss  dword ptr [rbx+4], xmm0
    }
LABEL_12:
    *cameraMotion = 0.0;
    goto LABEL_13;
  }
  v61 = v60 - 1;
  if ( v61 )
  {
    if ( v61 == 1 )
      *outOffset = 0i64;
  }
  else
  {
    _RAX = v15 & 3;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rax*8+1F0h+var_90]
      vsubss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rbp+rax*8+1F0h+var_90+4]
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm3, xmm2, dword ptr [rbx]
      vsubss  xmm1, xmm0, dword ptr [rbx+4]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rbx], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm3
    }
  }
LABEL_13:
  _R11 = &v98;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  __int64 v10; 

  v5 = from->v[1];
  v6 = from->v[0];
  LODWORD(to->v[2]) = zConst ^ LODWORD(v5) ^ (unsigned int)from ^ LODWORD(from->v[2]);
  LODWORD(to->v[1]) = yConst ^ LODWORD(v6) ^ LODWORD(v5) ^ (unsigned int)from;
  memset(&v10, 0, sizeof(v10));
  LODWORD(to->v[0]) = LODWORD(v6) ^ (unsigned int)from ^ ~xConst;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+38h+zConst], xmm0
  }
  if ( (zConst & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+38h+zConst], xmm0
  }
  if ( (zConst & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+38h+zConst], xmm0
  }
  if ( (zConst & 0x7F800000) == 2139095040 )
  {
LABEL_8:
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
  __int64 v19; 
  __int64 v20; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 534, ASSERT_TYPE_ASSERT, "(mtl)", (const char *)&queryFormat, "mtl") )
    __debugbreak();
  p1_low = LOWORD(material->drawSurf.packed.p1);
  if ( (_DWORD)p1_low == 45055 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 536, ASSERT_TYPE_ASSERT, "( ( mtlSortIndex != MAX_SORTED_MATERIALS ) )", "( mtl->name ) = %s", material->name) )
    __debugbreak();
  if ( (unsigned int)p1_low >= rgp.materialCount )
  {
    LODWORD(v19) = p1_low;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v19, rgp.materialCount) )
      __debugbreak();
  }
  if ( DB_GetMaterialAtIndex(rgp.sortedMaterials[p1_low]) != material )
  {
    name = material->name;
    if ( (unsigned int)p1_low >= rgp.materialCount )
    {
      LODWORD(v20) = rgp.materialCount;
      LODWORD(v19) = p1_low;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_local.h", 2247, ASSERT_TYPE_ASSERT, "(unsigned)( mtlSortIndex ) < (unsigned)( rgp.materialCount )", "mtlSortIndex doesn't index rgp.materialCount\n\t%i not in [0, %i)", v19, v20) )
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
        __asm { vmovss  xmm3, cs:__real@40a00000; size }
        R_AddDebugString(&frontEndDataOut->debugGlobals, origin, &colorCyan, *(float *)&_XMM3, v17);
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
  float v8; 
  float materialTimea; 

  __asm { vmovss  xmm0, [rsp+58h+materialTime] }
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    __asm { vmovss  [rsp+58h+var_28], xmm0 }
    R_AddDObjToSceneDelayed(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, v8, 0, 0);
  }
  else
  {
    __asm { vmovss  [rsp+58h+materialTime], xmm0 }
    R_AddDObjToSceneInternal(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, materialTimea);
  }
}

/*
==============
R_AddDObjToSceneDelayed
==============
*/
void R_AddDObjToSceneDelayed(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *entityMutableShaderData, const vec3_t *lightingOrigin, float materialTime, int isViewModel, int isMarkableViewModel)
{
  unsigned int dobjCount; 
  __int16 v15; 
  unsigned int v16; 
  unsigned int v17; 
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
  _RBX = &g_delayedSceneModelGlob.dobjs[dobjCount];
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2162, ASSERT_TYPE_ASSERT, "(dobjInfo != 0)", (const char *)&queryFormat, "dobjInfo != NULL") )
    __debugbreak();
  _RBX->obj = obj;
  _RBX->pose = pose;
  v15 = truncate_cast<short,unsigned int>(entnum);
  v16 = s_lighting2_aab_Y;
  v17 = s_lighting2_aab_X;
  _RBX->entityNum = v15;
  fmt = s_lighting2_aab_Z;
  _RBX->renderFlags = renderFlags;
  SetSecureVec3(lightingOrigin, &_RBX->lightingOrigin.lightingOrigin, v17, v16, fmt);
  _RAX = entityMutableShaderData;
  __asm
  {
    vmovss  xmm0, [rsp+48h+materialTime]
    vmovss  dword ptr [rbx+0D4h], xmm0
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx+18h], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rbx+28h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+38h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rbx+48h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbx+58h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [rbx+68h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rbx+78h], xmm0
    vmovups xmm0, xmmword ptr [rax+70h]
    vmovups xmmword ptr [rbx+88h], xmm0
    vmovups xmm1, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rbx+98h], xmm1
    vmovups xmm0, xmmword ptr [rax+90h]
    vmovups xmmword ptr [rbx+0A8h], xmm0
    vmovups xmm1, xmmword ptr [rax+0A0h]
  }
  _RBX->isViewModel = isViewModel != 0;
  _RBX->isMarkableViewModel = isMarkableViewModel != 0;
  __asm { vmovups xmmword ptr [rbx+0B8h], xmm1 }
  R_TryDispatchDelayedSceneBatch();
}

/*
==============
R_AddDObjToSceneInternal
==============
*/
void R_AddDObjToSceneInternal(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *sceneEntityMutableShaderData, const vec3_t *lightingOrigin, float materialTime)
{
  __int64 v11; 
  __int64 v15; 
  bool v16; 
  unsigned int v17; 
  unsigned __int16 v18; 
  int v20; 
  DObjMaterialData *materialData; 
  bool v22; 
  unsigned int v23; 
  bool v24; 
  unsigned __int16 v25; 
  bool v26; 
  bool v27; 
  unsigned __int32 v29; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  bool HasProceduralBones; 
  unsigned __int32 v36; 
  GfxSceneModel *v37; 
  const XModel *Model; 
  unsigned int v39; 
  unsigned int v60; 
  unsigned __int8 *v61; 
  __int64 v71; 
  __int64 useDepthHack; 
  __int64 v93; 
  char v94; 
  unsigned __int16 v95; 
  unsigned int renderFlagsa; 
  unsigned int gfxEntDataIndexBase; 
  unsigned int v98; 
  GfxSceneEntityMutableShaderData *v99; 
  GfxPackedEntityData *gfxPackedEntityData; 
  SecureVec3 tmpOrg; 
  cpose_t *posea; 
  __int64 v103; 
  __int64 v104; 
  vec3_t angles; 
  Bounds v106; 
  SecureBoundsAccess tmpBounds; 
  Bounds bounds; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _RAX = &retaddr;
  v104 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  v11 = entnum;
  posea = (cpose_t *)pose;
  _R15 = sceneEntityMutableShaderData;
  v99 = (GfxSceneEntityMutableShaderData *)sceneEntityMutableShaderData;
  gfxEntDataIndexBase = 0;
  gfxPackedEntityData = NULL;
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v15 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_DWORD *)(v15 + 1728) )
      goto LABEL_8;
    v16 = *(_DWORD *)(v15 + 1724) == 0;
  }
  else
  {
    v16 = !Sys_IsMainThread();
  }
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1733, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
LABEL_8:
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1734, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1735, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( (unsigned int)v11 >= gfxCfg.entCount )
  {
    LODWORD(useDepthHack) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1736, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( gfxCfg.entCount )", "entnum doesn't index gfxCfg.entCount\n\t%i not in [0, %i)", useDepthHack, gfxCfg.entCount) )
      __debugbreak();
  }
  if ( (renderFlags & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1737, ASSERT_TYPE_ASSERT, "(!(renderFlags & (1 << 4)))", (const char *)&queryFormat, "!(renderFlags & RF_NODRAW)") )
    __debugbreak();
  if ( !scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1738, ASSERT_TYPE_ASSERT, "(scene.allowAddDObj)", (const char *)&queryFormat, "scene.allowAddDObj") )
    __debugbreak();
  if ( r_drawEntities->current.enabled )
  {
    v17 = (renderFlags >> 12) & 1;
    if ( rg.needVelocity )
      renderFlags |= 0x200u;
    renderFlagsa = renderFlags;
    v18 = truncate_cast<unsigned short,unsigned int>(sceneEntityMutableShaderData->hudOutlineInfo.mapEntLookup);
    v95 = v18;
    if ( !v18 || r_showModelLMapSModels->current.enabled || !rgp.world->gfxMapEntLookup[v18].lmapLookup )
    {
      if ( (!obj->models || !obj->numModels) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1762, ASSERT_TYPE_ASSERT, "(obj->models && obj->numModels)", (const char *)&queryFormat, "obj->models && obj->numModels") )
        __debugbreak();
      if ( obj->models )
      {
        R_SetHudOutlineRenderFlags(&sceneEntityMutableShaderData->hudOutlineInfo, &renderFlagsa);
        __asm { vxorps  xmm6, xmm6, xmm6 }
        v20 = 1;
        __asm { vucomiss xmm6, dword ptr [r15+8Ch] }
        if ( !v16 )
          scene.hudOutlineMasked = 1;
        materialData = obj->materialData;
        v22 = materialData && materialData->camoAsset[0];
        v23 = renderFlagsa;
        if ( v22 )
          goto LABEL_45;
        if ( (renderFlagsa & 2) != 0 )
          goto LABEL_45;
        if ( sceneEntityMutableShaderData->modelShaderData[0].transitionFactor )
          goto LABEL_45;
        if ( sceneEntityMutableShaderData->modelShaderData[0].flagAmplitudeScale )
          goto LABEL_45;
        __asm { vucomiss xmm6, dword ptr [r15+0A8h] }
        v94 = 0;
        if ( sceneEntityMutableShaderData->modelShaderData[0].flagAmplitudeScale )
LABEL_45:
          v94 = 1;
        v24 = R_UsesEyeSensor(obj) != 0;
        if ( v94 )
          R_AllocPackedEntityData(sceneEntityMutableShaderData->dataCount, &gfxEntDataIndexBase, &gfxPackedEntityData);
        v103 = v11;
        v25 = scene.dpvs.sceneDObjIndex[v11];
        v26 = v25 == 0xFFFF;
        if ( v25 != 0xFFFF )
        {
          LODWORD(useDepthHack) = v25;
          v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1790, ASSERT_TYPE_ASSERT, "( ( scene.dpvs.sceneDObjIndex[entnum] == (65535) ) )", "( scene.dpvs.sceneDObjIndex[entnum] ) = %i", useDepthHack);
          v26 = !v27;
          if ( v27 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm7, [rbp+80h+materialTime]
          vucomiss xmm7, xmm6
        }
        if ( !v26 || sceneEntityMutableShaderData->modelShaderData[0].baseEmissiveAndTransitionFactor || sceneEntityMutableShaderData->hudOutlineInfo.temperatureSet || (v23 & 3) != 0 || v24 )
        {
          if ( ((unsigned __int8)&scene.gfxEntCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.gfxEntCount) )
            __debugbreak();
          v29 = _InterlockedExchangeAdd(&scene.gfxEntCount, 1u);
          if ( v29 >= 0x400 )
          {
            scene.gfxEntCount = 1024;
            R_WarnOncePerFrame(R_WARN_KNOWN_SPECIAL_MODELS, 1024i64);
            goto LABEL_122;
          }
          _R8 = v29;
          _R9 = &scene;
          v23 = renderFlagsa;
          scene.gfxEnts[_R8].renderFlags = renderFlagsa & 3;
          __asm { vmovss  dword ptr [r9+r8*4+33FA78h], xmm7 }
          R_PackScriptedColorEmissive(&scene.gfxEnts[v29].scriptablePackedColorEmissive, v99);
          if ( *(_BYTE *)(v32 + 152) )
          {
            *(_DWORD *)(v34 + 4 * v33 + 3406476) = *(_DWORD *)(v32 + 160);
            *(_DWORD *)(v34 + 4 * v33 + 3406480) = *(_DWORD *)(v32 + 164);
          }
          else
          {
            *(_DWORD *)(v34 + 4 * v33 + 3406476) = 0;
            *(_DWORD *)(v34 + 4 * v33 + 3406480) = 1065353216;
          }
          *(_DWORD *)(v34 + 4 * v33 + 3406484) = *(_DWORD *)(v32 + 172);
        }
        else
        {
          LOWORD(v29) = 0;
        }
        HasProceduralBones = DObjHasProceduralBones(obj);
        if ( v17 || DObjGetTree(obj) || DObjGetNumModels(obj) != 1 || HasProceduralBones || obj->blendShapeWeightCount )
        {
          v60 = R_AllocSceneDObj();
          v98 = v60;
          if ( v60 < 0x200 )
          {
            v61 = &scene.sceneDObjVisData[-1424][1424 * v60];
            *((_WORD *)v61 + 704) = truncate_cast<unsigned short,unsigned int>(gfxEntDataIndexBase);
            if ( !DObjGetModel(obj, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1915, ASSERT_TYPE_ASSERT, "(DObjGetModel( obj, 0 ))", (const char *)&queryFormat, "DObjGetModel( obj, 0 )") )
              __debugbreak();
            *((_QWORD *)v61 + 174) = obj;
            obj->validation |= 1u;
            if ( (unsigned int)v11 >= 0x1000 )
            {
              LODWORD(v93) = 4096;
              LODWORD(useDepthHack) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1924, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( (1 << 12) )", "entnum doesn't index SCENE_ENTNUM_LIMIT\n\t%i not in [0, %i)", useDepthHack, v93) )
                __debugbreak();
            }
            if ( v23 >= 0x100000 )
            {
              LODWORD(v93) = 0x100000;
              LODWORD(useDepthHack) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1925, ASSERT_TYPE_ASSERT, "(unsigned)( renderFlags ) < (unsigned)( (1 << 20) )", "renderFlags doesn't index RENDERFX_FLAGS_LIMIT\n\t%i not in [0, %i)", useDepthHack, v93) )
                __debugbreak();
            }
            *((_WORD *)v61 + 706) = v95;
            *((_DWORD *)v61 + 346) &= 0xFFC00000;
            *((_DWORD *)v61 + 346) |= v29 & 0x3FF | ((v11 & 0xFFF) << 10);
            *((_DWORD *)v61 + 347) &= 0xFFF00000;
            *((_DWORD *)v61 + 347) |= v23 & 0xFFFFF;
            *((_QWORD *)v61 + 175) = posea;
            if ( !obj->lastGpuLightGridRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1933, ASSERT_TYPE_ASSERT, "(obj->lastGpuLightGridRequest)", (const char *)&queryFormat, "obj->lastGpuLightGridRequest") )
              __debugbreak();
            *((_QWORD *)v61 + 177) = obj->lastGpuLightGridRequest;
            if ( *((_DWORD *)v61 + 18) )
            {
              LODWORD(useDepthHack) = *((_DWORD *)v61 + 18);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1936, ASSERT_TYPE_SANITY, "( ( sceneEnt->cull.state == CULL_STATE_OUT ) )", "( sceneEnt->cull.state ) = %i", useDepthHack) )
                __debugbreak();
            }
            R_SetupSceneEntBounds((GfxSceneEntity *)v61, &tmpOrg, &tmpBounds);
            _RAX = r_animEstimatedBoundsScale;
            __asm
            {
              vmovss  xmm3, dword ptr [rax+28h]
              vmulss  xmm1, xmm3, dword ptr [rbp+80h+tmpBounds.baseclass_0.halfSize]
              vmovss  dword ptr [rbp+80h+tmpBounds.baseclass_0.halfSize], xmm1
              vmulss  xmm0, xmm3, dword ptr [rbp+80h+tmpBounds.baseclass_0.halfSize+4]
              vmovss  dword ptr [rbp+80h+tmpBounds.baseclass_0.halfSize+4], xmm0
              vmulss  xmm2, xmm3, dword ptr [rbp+80h+tmpBounds.baseclass_0.halfSize+8]
              vmovss  dword ptr [rbp+80h+tmpBounds.baseclass_0.halfSize+8], xmm2
            }
            GfxSceneEntity_SetBounds((GfxSceneEntityCull *)(v61 + 72), &tmpBounds);
            _R15 = lightingOrigin;
            GfxSceneEntity_SetLightingOrigin((GfxSceneEntity *)v61, lightingOrigin);
            if ( v94 )
            {
              _RCX = *obj->models;
              __asm
              {
                vmovups xmm0, xmmword ptr [rcx+2Ch]
                vmovups xmmword ptr [rbp+80h+var_E0.midPoint], xmm0
                vmovsd  xmm1, qword ptr [rcx+3Ch]
                vmovsd  qword ptr [rbp+80h+var_E0.halfSize+4], xmm1
              }
              if ( obj->numModels > 1u )
              {
                v71 = 1i64;
                do
                {
                  Bounds_Expand(&v106, &obj->models[v71]->bounds);
                  ++v20;
                  ++v71;
                }
                while ( v20 < obj->numModels );
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+80h+var_E0.midPoint]
                vaddss  xmm1, xmm0, dword ptr [rsp+180h+tmpOrg.___u0]
                vmovss  dword ptr [rbp+80h+var_E0.midPoint], xmm1
                vmovss  xmm2, dword ptr [rbp+80h+var_E0.midPoint+4]
                vaddss  xmm0, xmm2, dword ptr [rsp+180h+tmpOrg.___u0+4]
                vmovss  dword ptr [rbp+80h+var_E0.midPoint+4], xmm0
                vmovss  xmm1, dword ptr [rbp+80h+var_E0.midPoint+8]
                vaddss  xmm2, xmm1, dword ptr [rsp+180h+tmpOrg.___u0+8]
                vmovss  dword ptr [rbp+80h+var_E0.midPoint+8], xmm2
                vmovss  xmm0, dword ptr [r15]
                vsubss  xmm3, xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg; r_globals_t rg
                vmovss  xmm1, dword ptr [r15+4]
                vsubss  xmm2, xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4; r_globals_t rg
                vmovss  xmm0, dword ptr [r15+8]
                vsubss  xmm4, xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8; r_globals_t rg
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm0
                vsqrtss xmm2, xmm2, xmm2; distanceToCamera
              }
              R_SetEntityShaderData(gfxPackedEntityData, v99, *(float *)&_XMM2, &v106, obj->entnum, renderFlagsa & 1);
            }
            scene.dpvs.sceneDObjIndex[v103] = v98;
            R_InitSceneEntity((GfxSceneEntity *)v61);
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
          v36 = _InterlockedExchangeAdd(&scene.sceneModelCount, 1u);
          if ( v36 < 0x400 )
          {
            v37 = &scene.sceneModel[v36];
            v37->gfxPackedEntityIndexBase = truncate_cast<unsigned short,unsigned int>(gfxEntDataIndexBase);
            Model = DObjGetModel(obj, 0);
            v37->model = Model;
            v37->obj = obj;
            obj->validation |= 1u;
            if ( (unsigned int)v11 >= 0x1000 )
            {
              LODWORD(v93) = 4096;
              LODWORD(useDepthHack) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1865, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( (1 << 12) )", "entnum doesn't index SCENE_ENTNUM_LIMIT\n\t%i not in [0, %i)", useDepthHack, v93) )
                __debugbreak();
            }
            v39 = renderFlagsa;
            if ( renderFlagsa >= 0x100000 )
            {
              LODWORD(v93) = 0x100000;
              LODWORD(useDepthHack) = renderFlagsa;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1866, ASSERT_TYPE_ASSERT, "(unsigned)( renderFlags ) < (unsigned)( (1 << 20) )", "renderFlags doesn't index RENDERFX_FLAGS_LIMIT\n\t%i not in [0, %i)", useDepthHack, v93) )
                __debugbreak();
            }
            v37->mapEntLookup = v95;
            *((_DWORD *)v37 + 30) &= 0xFFC00000;
            *((_DWORD *)v37 + 30) |= v29 & 0x3FF | ((v11 & 0xFFF) << 10);
            *((_DWORD *)v37 + 31) &= 0xFFF00000;
            *((_DWORD *)v37 + 31) |= v39 & 0xFFFFF;
            scene.dpvs.sceneXModelIndex[v103] = v36;
            if ( !obj->lastGpuLightGridRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1875, ASSERT_TYPE_ASSERT, "(obj->lastGpuLightGridRequest)", (const char *)&queryFormat, "obj->lastGpuLightGridRequest") )
              __debugbreak();
            v37->lastGpuLightGridRequest = obj->lastGpuLightGridRequest;
            XModelGetRadius(Model);
            _R12 = posea;
            CG_GetPoseOrigin(posea, &v37->placement.base.origin);
            if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, dword ptr [r12+48h]
              vmovss  dword ptr [rbp+80h+angles], xmm0
              vmovss  xmm1, dword ptr [r12+4Ch]
              vmovss  dword ptr [rbp+80h+angles+4], xmm1
              vmovss  xmm0, dword ptr [r12+50h]
              vmovss  dword ptr [rbp+80h+angles+8], xmm0
            }
            AnglesToQuat(&angles, &v37->placement.base.quat);
            v37->placement.scale = 1.0;
            CG_GetPrevPoseOrigin(_R12, &v37->prevPlacement.base.origin);
            if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 636, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, dword ptr [r12+78h]
              vmovss  dword ptr [rbp+80h+angles], xmm0
              vmovss  xmm1, dword ptr [r12+7Ch]
              vmovss  dword ptr [rbp+80h+angles+4], xmm1
              vmovss  xmm0, dword ptr [r12+80h]
              vmovss  dword ptr [rbp+80h+angles+8], xmm0
            }
            AnglesToQuat(&angles, &v37->prevPlacement.base.quat);
            v37->prevPlacement.scale = 1.0;
            XModelGetBounds(Model, &bounds);
            QuatToAxis(&v37->placement.base.quat, &axis);
            Bounds_Transform(&bounds, &v37->placement.base.origin, &axis, &v37->bounds);
            _RCX = lightingOrigin;
            v37->lightingOrigin = *lightingOrigin;
            if ( v94 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rcx]
                vsubss  xmm4, xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg; r_globals_t rg
                vmovss  xmm1, dword ptr [rcx+4]
                vsubss  xmm2, xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4; r_globals_t rg
                vmovss  xmm0, dword ptr [rcx+8]
                vsubss  xmm3, xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8; r_globals_t rg
                vmulss  xmm1, xmm2, xmm2
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm2, xmm2, xmm2; distanceToCamera
              }
              R_SetEntityShaderData(gfxPackedEntityData, v99, *(float *)&_XMM2, &v37->bounds, obj->entnum, v39 & 1);
            }
            R_InitSceneModel(v37);
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
LABEL_122:
  __asm
  {
    vmovaps xmm6, [rsp+180h+var_50]
    vmovaps xmm7, [rsp+180h+var_60]
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
  __int64 v3; 
  const DObj **v4; 
  unsigned int v6; 
  const GfxSceneEntityMutableShaderData *v7; 
  unsigned int v8; 
  const cpose_t *v9; 
  float v10; 
  float v11; 
  vec3_t to; 

  if ( count )
  {
    _RBX = &dobjs->isViewModel;
    v3 = count;
    do
    {
      v4 = (const DObj **)(_RBX - 18);
      if ( _RBX == (unsigned __int8 *)18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11736, ASSERT_TYPE_ASSERT, "(sceneDObj)", (const char *)&queryFormat, "sceneDObj") )
        __debugbreak();
      GetSecureVec3((const vec3_t *)(_RBX + 182), &to, s_lighting2_aab_X, s_lighting2_aab_Y, s_lighting2_aab_Z);
      __asm { vmovss  xmm0, dword ptr [rbx+0C2h] }
      v6 = *((__int16 *)_RBX - 1);
      v7 = (const GfxSceneEntityMutableShaderData *)(_RBX + 6);
      v8 = *(_DWORD *)(_RBX + 2);
      v9 = *(const cpose_t **)(_RBX - 10);
      if ( *_RBX )
      {
        __asm { vmovss  [rsp+78h+var_48], xmm0 }
        R_AddViewmodelDObjToSceneInternal(*v4, v9, v6, v8, v7, &to, v10, _RBX[1]);
      }
      else
      {
        __asm { vmovss  [rsp+78h+var_48], xmm0 }
        R_AddDObjToSceneInternal(*v4, v9, v6, v8, v7, &to, v11);
      }
      _RBX += 216;
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
  const char *m_location; 
  __int64 v19; 
  __int64 data[2]; 
  int v21; 
  char v22; 
  __int16 v23; 
  int v24; 
  __int16 v26; 
  int v27; 
  __int128 v28; 

  v6 = drawListType;
  _RDI = rtGroup;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5009, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( ((*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0 || _RDI) && r_smp_backend->current.enabled && r_cmdbuf_worker->current.enabled && !Stream_BackendQueue_IsInForcedFlush() && ((*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) != 0 || (unsigned int)(v6 - 14) > 4 && (unsigned int)(v6 - 79) > 4 && (unsigned int)(v6 - 84) > 4) )
  {
    if ( !r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5036, ASSERT_TYPE_ASSERT, "(r_glob.allowAddDrawCall)", (const char *)&queryFormat, "r_glob.allowAddDrawCall") )
      __debugbreak();
    v9 = v6;
    frontEndDataOut->cmdBufValid[v6] = 1;
    if ( frontEndDataOut->drawOutput[v6].cmdCount )
    {
      LODWORD(v19) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5040, ASSERT_TYPE_ASSERT, "( ( !frontEndDataOut->drawOutput[drawListType].cmdCount ) )", "( drawListType ) = %i", v19) )
        __debugbreak();
    }
    frontEndDataOut->drawOutput[v9].cmdCount = 1;
    if ( frontEndDataOut->drawOutput[v9].inCmdCount )
    {
      LODWORD(v19) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5044, ASSERT_TYPE_ASSERT, "( ( !frontEndDataOut->drawOutput[drawListType].inCmdCount ) )", "( drawListType ) = %i", v19) )
        __debugbreak();
    }
    frontEndDataOut->drawOutput[v9].inCmdCount = 1;
    data[0] = (__int64)frontEndDataOut;
    v21 = v6;
    data[1] = (__int64)viewInfo;
    if ( _RDI )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymm1, ymmword ptr [rdi+80h]
      }
      m_location = _RDI->m_vrsRt.m_tracking.m_location;
      _RCX = &v22;
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rdi+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rdi+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups ymm0, ymmword ptr [rdi+60h]
        vmovups ymmword ptr [rcx+60h], ymm0
        vmovups ymmword ptr [rcx+80h], ymm1
        vmovups ymm1, ymmword ptr [rdi+0A0h]
        vmovups ymmword ptr [rcx+0A0h], ymm1
      }
      *((_QWORD *)&v28 + 1) = m_location;
    }
    else
    {
      v22 = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v23 = 0;
      v24 = 0;
      __asm { vmovdqu [rsp+158h+var_78], xmm0 }
      v26 = 0;
      v27 = 0;
      __asm { vmovdqu [rsp+158h+var_58], xmm0 }
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
  __int64 v21; 
  __int64 data[2]; 
  GfxDrawListType v23; 
  char v24; 
  __int16 v25; 
  int v26; 
  __int16 v28; 
  int v29; 
  __int128 v30; 

  v6 = drawListBegin;
  _R15 = rtGroup;
  if ( drawListBegin < drawListEnd )
  {
    v10 = drawListBegin;
    v11 = 4i64 * (int)drawListBegin + 31556;
    v12 = v10 * 9136;
    do
    {
      if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5009, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
        __debugbreak();
      if ( ((*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0 || _R15) && r_smp_backend->current.enabled && r_cmdbuf_worker->current.enabled && !Stream_BackendQueue_IsInForcedFlush() && ((*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) != 0 || (unsigned int)(v6 - 79 + 65) > 4 && (unsigned int)(v6 - 79) > 4 && (unsigned int)(v6 - 84) > 4) )
      {
        if ( !r_glob.allowAddDrawCall && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5036, ASSERT_TYPE_ASSERT, "(r_glob.allowAddDrawCall)", (const char *)&queryFormat, "r_glob.allowAddDrawCall") )
          __debugbreak();
        *(unsigned int *)((char *)&frontEndDataOut->mesh[0].indexCount + v11) = 1;
        if ( frontEndDataOut->drawOutput[v10].cmdCount )
        {
          LODWORD(v21) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5040, ASSERT_TYPE_ASSERT, "( ( !frontEndDataOut->drawOutput[drawListType].cmdCount ) )", "( drawListType ) = %i", v21) )
            __debugbreak();
        }
        *(volatile int *)((char *)&frontEndDataOut->drawOutput[0].cmdCount + v12) = 1;
        if ( frontEndDataOut->drawOutput[v10].inCmdCount )
        {
          LODWORD(v21) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5044, ASSERT_TYPE_ASSERT, "( ( !frontEndDataOut->drawOutput[drawListType].inCmdCount ) )", "( drawListType ) = %i", v21) )
            __debugbreak();
        }
        *(volatile int *)((char *)&frontEndDataOut->drawOutput[0].inCmdCount + v12) = 1;
        data[0] = (__int64)frontEndDataOut;
        v23 = v6;
        data[1] = (__int64)viewInfo;
        if ( _R15 )
        {
          __asm { vmovups ymm0, ymmword ptr [r15] }
          m_location = _R15->m_vrsRt.m_tracking.m_location;
          _RCX = &v24;
          __asm
          {
            vmovups ymmword ptr [rcx], ymm0
            vmovups ymm0, ymmword ptr [r15+20h]
            vmovups ymmword ptr [rcx+20h], ymm0
            vmovups ymm0, ymmword ptr [r15+40h]
            vmovups ymmword ptr [rcx+40h], ymm0
            vmovups ymm0, ymmword ptr [r15+60h]
            vmovups ymmword ptr [rcx+60h], ymm0
            vmovups ymm0, ymmword ptr [r15+80h]
            vmovups ymmword ptr [rcx+80h], ymm0
            vmovups ymm0, ymmword ptr [r15+0A0h]
            vmovups ymmword ptr [rcx+0A0h], ymm0
          }
          *((_QWORD *)&v30 + 1) = m_location;
        }
        else
        {
          v24 = 0;
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v25 = 0;
          v26 = 0;
          __asm { vmovdqu [rsp+158h+var_78], xmm0 }
          v28 = 0;
          v29 = 0;
          __asm { vmovdqu [rsp+158h+var_58], xmm0 }
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
  GfxViewInfo *v3; 
  GfxBackEndData *v4; 
  unsigned int v5; 
  char v9; 
  __int64 v10; 
  int DynamicOmniLight; 
  int DynamicSpotLight; 
  unsigned int v36; 
  unsigned int v37; 

  v3 = *(GfxViewInfo **)cmd;
  v4 = (GfxBackEndData *)*((_QWORD *)cmd + 1);
  if ( scene.dynamicOmniLightLimit > 0 )
  {
    v5 = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount;
    if ( v5 < rgp.world->primaryLightCount )
    {
      _R14 = &scene;
      __asm
      {
        vmovaps [rsp+48h+var_18], xmm6
        vmovaps [rsp+48h+var_28], xmm7
        vmovss  xmm7, cs:__real@3f8147ae
        vxorps  xmm6, xmm6, xmm6
      }
      do
      {
        v10 = v5;
        _RBX = &v4->sceneLights[v10];
        __asm { vcomiss xmm7, dword ptr [rbx+44h] }
        if ( ((152 * (unsigned __int128)v5) >> 64 != 0) | v9 && (v4->sceneLights[v10].flags & 0x10) == 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+18h]
            vmaxss  xmm1, xmm0, dword ptr [rbx+14h]
            vmaxss  xmm2, xmm1, dword ptr [rbx+1Ch]
            vmulss  xmm3, xmm2, dword ptr [rbx+10h]
            vucomiss xmm3, xmm6
          }
          if ( (v4->sceneLights[v10].flags & 0x10) != 0 )
          {
            if ( _RBX->type == 2 )
            {
              DynamicSpotLight = R_AllocateDynamicSpotLight();
              if ( DynamicSpotLight >= 0 )
              {
                __asm { vmovsd  xmm0, qword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
                _RCX = DynamicSpotLight;
                __asm { vmovsd  qword ptr [rcx+r14+31FBB4h], xmm0 }
                scene.dynamicSpotLight[_RCX].debugColorGammaSrgb.v[2] = colorYellow.v[2];
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbx]
                  vmovups ymmword ptr [rcx+r14+31FA90h], ymm0
                  vmovups ymm1, ymmword ptr [rbx+20h]
                  vmovups ymmword ptr [rcx+r14+31FAB0h], ymm1
                  vmovups ymm0, ymmword ptr [rbx+40h]
                  vmovups ymmword ptr [rcx+r14+31FAD0h], ymm0
                  vmovups ymm1, ymmword ptr [rbx+60h]
                  vmovups ymmword ptr [rcx+r14+31FAF0h], ymm1
                  vmovups xmm0, xmmword ptr [rbx+80h]
                  vmovups xmmword ptr [rcx+r14+31FB10h], xmm0
                  vmovsd  xmm1, qword ptr [rbx+90h]
                  vmovsd  qword ptr [rcx+r14+31FB20h], xmm1
                }
              }
            }
            else if ( _RBX->type == 3 )
            {
              DynamicOmniLight = R_AllocateDynamicOmniLight();
              if ( DynamicOmniLight >= 0 )
              {
                __asm { vmovsd  xmm0, qword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
                _RCX = DynamicOmniLight;
                __asm { vmovsd  qword ptr [rcx+r14+3247C4h], xmm0 }
                scene.dynamicOmniLight[_RCX].debugColorGammaSrgb.v[2] = colorYellow.v[2];
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbx]
                  vmovups ymmword ptr [rcx+r14+3246A0h], ymm0
                  vmovups ymm1, ymmword ptr [rbx+20h]
                  vmovups ymmword ptr [rcx+r14+3246C0h], ymm1
                  vmovups ymm0, ymmword ptr [rbx+40h]
                  vmovups ymmword ptr [rcx+r14+3246E0h], ymm0
                  vmovups ymm1, ymmword ptr [rbx+60h]
                  vmovups ymmword ptr [rcx+r14+324700h], ymm1
                  vmovups xmm0, xmmword ptr [rbx+80h]
                  vmovups xmmword ptr [rcx+r14+324720h], xmm0
                  vmovsd  xmm1, qword ptr [rbx+90h]
                  vmovsd  qword ptr [rcx+r14+324730h], xmm1
                }
                if ( _RBX->canUseShadowMap )
                  R_CalcSpotLightPlanesAndBoundingBox(_RBX, (vec4_t (*)[6])scene.dynamicOmniLight[_RCX].planes, &scene.dynamicOmniLight[_RCX].bounds);
              }
            }
          }
          else if ( v4->viewInfo[v4->viewInfoIndex].thermalParams.useNightAndThermalVisionCombo )
          {
            __asm { vcomiss xmm6, dword ptr [rbx+8] }
          }
        }
        ++v5;
      }
      while ( v5 < rgp.world->primaryLightCount );
      __asm
      {
        vmovaps xmm7, [rsp+48h+var_28]
        vmovaps xmm6, [rsp+48h+var_18]
      }
    }
    v36 = R_ChooseVisibleDynamicSpotLights(v4, v3);
    v4->dynamicLightCount += v36;
    v4->dynamicSpotLightCount = v36;
    v37 = R_ChooseVisibleDynamicOmniLights(v4, v3);
    v4->dynamicLightCount += v37;
    v4->dynamicOmniLightCount = v37;
  }
}

/*
==============
R_AddDynamicLightsWithShadowmap
==============
*/
void R_AddDynamicLightsWithShadowmap(GfxViewInfo *viewInfo, GfxBackEndData *backEndDataOut)
{
  unsigned int v6; 
  char v10; 
  __int64 v11; 
  int DynamicOmniLight; 
  int DynamicSpotLight; 
  unsigned int v37; 

  v6 = rgp.world->primaryLightCount - rgp.world->movingScriptablePrimaryLightCount;
  if ( v6 < rgp.world->primaryLightCount )
  {
    _R14 = &scene;
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovaps [rsp+48h+var_28], xmm7
      vmovss  xmm7, cs:__real@3f8147ae
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      v11 = v6;
      _RBX = &backEndDataOut->sceneLights[v11];
      __asm { vcomiss xmm7, dword ptr [rbx+44h] }
      if ( ((152 * (unsigned __int128)v6) >> 64 != 0) | v10 && (backEndDataOut->sceneLights[v11].flags & 0x10) == 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+18h]
          vmaxss  xmm1, xmm0, dword ptr [rbx+14h]
          vmaxss  xmm2, xmm1, dword ptr [rbx+1Ch]
          vmulss  xmm3, xmm2, dword ptr [rbx+10h]
          vucomiss xmm3, xmm6
        }
        if ( (backEndDataOut->sceneLights[v11].flags & 0x10) != 0 )
        {
          if ( _RBX->type == 2 )
          {
            DynamicSpotLight = R_AllocateDynamicSpotLight();
            if ( DynamicSpotLight >= 0 )
            {
              __asm { vmovsd  xmm0, qword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
              _RCX = DynamicSpotLight;
              __asm { vmovsd  qword ptr [rcx+r14+31FBB4h], xmm0 }
              scene.dynamicSpotLight[_RCX].debugColorGammaSrgb.v[2] = colorYellow.v[2];
              __asm
              {
                vmovups ymm0, ymmword ptr [rbx]
                vmovups ymmword ptr [rcx+r14+31FA90h], ymm0
                vmovups ymm1, ymmword ptr [rbx+20h]
                vmovups ymmword ptr [rcx+r14+31FAB0h], ymm1
                vmovups ymm0, ymmword ptr [rbx+40h]
                vmovups ymmword ptr [rcx+r14+31FAD0h], ymm0
                vmovups ymm1, ymmword ptr [rbx+60h]
                vmovups ymmword ptr [rcx+r14+31FAF0h], ymm1
                vmovups xmm0, xmmword ptr [rbx+80h]
                vmovups xmmword ptr [rcx+r14+31FB10h], xmm0
                vmovsd  xmm1, qword ptr [rbx+90h]
                vmovsd  qword ptr [rcx+r14+31FB20h], xmm1
              }
            }
          }
          else if ( _RBX->type == 3 )
          {
            DynamicOmniLight = R_AllocateDynamicOmniLight();
            if ( DynamicOmniLight >= 0 )
            {
              __asm { vmovsd  xmm0, qword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
              _RCX = DynamicOmniLight;
              __asm { vmovsd  qword ptr [rcx+r14+3247C4h], xmm0 }
              scene.dynamicOmniLight[_RCX].debugColorGammaSrgb.v[2] = colorYellow.v[2];
              __asm
              {
                vmovups ymm0, ymmword ptr [rbx]
                vmovups ymmword ptr [rcx+r14+3246A0h], ymm0
                vmovups ymm1, ymmword ptr [rbx+20h]
                vmovups ymmword ptr [rcx+r14+3246C0h], ymm1
                vmovups ymm0, ymmword ptr [rbx+40h]
                vmovups ymmword ptr [rcx+r14+3246E0h], ymm0
                vmovups ymm1, ymmword ptr [rbx+60h]
                vmovups ymmword ptr [rcx+r14+324700h], ymm1
                vmovups xmm0, xmmword ptr [rbx+80h]
                vmovups xmmword ptr [rcx+r14+324720h], xmm0
                vmovsd  xmm1, qword ptr [rbx+90h]
                vmovsd  qword ptr [rcx+r14+324730h], xmm1
              }
              if ( _RBX->canUseShadowMap )
                R_CalcSpotLightPlanesAndBoundingBox(_RBX, (vec4_t (*)[6])scene.dynamicOmniLight[_RCX].planes, &scene.dynamicOmniLight[_RCX].bounds);
            }
          }
        }
        else if ( backEndDataOut->viewInfo[backEndDataOut->viewInfoIndex].thermalParams.useNightAndThermalVisionCombo )
        {
          __asm { vcomiss xmm6, dword ptr [rbx+8] }
        }
      }
      ++v6;
    }
    while ( v6 < rgp.world->primaryLightCount );
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_28]
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  v37 = R_ChooseVisibleDynamicSpotLights(backEndDataOut, viewInfo);
  backEndDataOut->dynamicLightCount += v37;
  backEndDataOut->dynamicSpotLightCount = v37;
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

bool __fastcall R_AddOmniLightToScene(const vec3_t *org, double radius, const vec3_t *colorLinearSrgb, double intensity, const ParticleModuleInitLightOmni *pModuleInitLightOmni, GfxLightDef *lightDef)
{
  const dvar_t *v15; 
  int DynamicOmniLight; 
  const dvar_t *v35; 
  vec2_t *p_fadeOffsetRt; 
  char v39; 
  bool v41; 
  char v45; 
  bool v48; 
  bool result; 
  double v66; 
  double v67; 
  char v72; 

  _RSI = colorLinearSrgb;
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm8
    vmovaps [rsp+98h+var_58], xmm9
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm3
  }
  if ( !rgp.world )
    goto LABEL_32;
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2485, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  _RBX = pModuleInitLightOmni;
  if ( pModuleInitLightOmni->m_scriptScale )
  {
    __asm
    {
      vmulss  xmm8, xmm8, dword ptr [rax+28h]
      vmulss  xmm7, xmm7, dword ptr [rax+28h]
    }
  }
  __asm { vcomiss xmm8, cs:__real@3f8147ae }
  v15 = DCONST_DVARBOOL_r_pureIRLightHack;
  __asm { vmovss  xmm9, dword ptr [rbx+34h] }
  if ( !DCONST_DVARBOOL_r_pureIRLightHack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_pureIRLightHack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( v15->current.enabled )
    __asm { vcomiss xmm6, dword ptr [rbx+34h] }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmulss  xmm3, xmm2, xmm7
    vaddss  xmm0, xmm3, dword ptr [rbx+34h]
    vcomiss xmm0, xmm6
  }
  if ( !v15->current.enabled )
    goto LABEL_32;
  DynamicOmniLight = R_AllocateDynamicOmniLight();
  if ( DynamicOmniLight >= 0 )
  {
    _RDI = DynamicOmniLight;
    _RBP = &scene;
    memset_0(&scene.dynamicOmniLight[_RDI].lightCommon.canUseShadowMap, 0, 0x8Fui64);
    _R8 = rgp.dlightDef;
    scene.dynamicOmniLight[_RDI].lightCommon.type = 3;
    if ( lightDef )
      _R8 = lightDef;
    scene.dynamicOmniLight[_RDI].lightCommon.def = _R8;
    if ( _R8->iesProfile )
      __asm { vucomiss xmm6, dword ptr [r8+18h] }
    __asm { vmovss  xmm3, cs:__real@43f6b0cf }
    scene.dynamicOmniLight[_RDI].lightCommon.colorLinearSrgb.v[0] = _RSI->v[0];
    scene.dynamicOmniLight[_RDI].lightCommon.colorLinearSrgb.v[1] = _RSI->v[1];
    scene.dynamicOmniLight[_RDI].lightCommon.colorLinearSrgb.v[2] = _RSI->v[2];
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rbx+2Ch]
      vmulss  xmm0, xmm0, xmm3
      vmovss  dword ptr [rdi+rbp+3246B0h], xmm0
      vmulss  xmm2, xmm3, dword ptr [rbx+30h]
      vmovss  dword ptr [rdi+rbp+3246A4h], xmm2
      vmulss  xmm0, xmm9, xmm3
      vmovss  dword ptr [rdi+rbp+3246A8h], xmm0
      vmovss  xmm1, dword ptr [rbx+38h]
      vmulss  xmm2, xmm1, cs:__real@45340001
      vmovss  dword ptr [rdi+rbp+3246ACh], xmm2
    }
    scene.dynamicOmniLight[_RDI].lightCommon.tonemappingScaleFactor = pModuleInitLightOmni->m_toneMappingScaleFactor;
    scene.dynamicOmniLight[_RDI].lightCommon.origin.v[0] = org->v[0];
    scene.dynamicOmniLight[_RDI].lightCommon.origin.v[1] = org->v[1];
    scene.dynamicOmniLight[_RDI].lightCommon.origin.v[2] = org->v[2];
    __asm { vmovss  dword ptr [rdi+rbp+3246E4h], xmm8 }
    scene.dynamicOmniLight[_RDI].lightCommon.bulbRadius = pModuleInitLightOmni->m_bulbRadius;
    __asm { vmovss  xmm0, dword ptr [rbx+24h] }
    v35 = r_VFXOmniLightFalloffEnable;
    __asm
    {
      vmovss  dword ptr [rdi+rbp+3246F4h], xmm0
      vmovss  dword ptr [rdi+rbp+3246F8h], xmm0
      vmovss  dword ptr [rdi+rbp+3246FCh], xmm0
    }
    if ( v35->current.enabled )
    {
      _RAX = r_VFXOmniLightFalloff;
      __asm { vmovss  xmm0, dword ptr [rax+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    p_fadeOffsetRt = &scene.dynamicOmniLight[_RDI].lightCommon.fadeOffsetRt;
    __asm { vmovss  dword ptr [rdi+rbp+324724h], xmm0 }
    *p_fadeOffsetRt = 0i64;
    R_LightFadeOffsetRuntimeEncoding(p_fadeOffsetRt, 3u);
    scene.dynamicOmniLight[_RDI].lightCommon.cosHalfFovCollimation = 0.0;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vcomiss xmm0, dword ptr [rbx+18h]
    }
    if ( !v39 )
    {
      v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2573, ASSERT_TYPE_ASSERT, "(pModuleInitLightOmni->m_fovOuter > pModuleInitLightOmni->m_fovInner)", (const char *)&queryFormat, "pModuleInitLightOmni->m_fovOuter > pModuleInitLightOmni->m_fovInner");
      v39 = 0;
      if ( v41 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vcomiss xmm0, cs:__real@3fc90fdb
    }
    if ( !v39 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+98h+var_70], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2574, ASSERT_TYPE_ASSERT, "( ( pModuleInitLightOmni->m_fovOuter < ( ( 90.0f ) * ( M_PI_F / 180.0f ) ) ) )", "( pModuleInitLightOmni->m_fovOuter ) = %g", v66) )
        __debugbreak();
    }
    __asm { vmovss  xmm0, dword ptr [rbx+1Ch]; X }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rdi+rbp+324704h], xmm0
      vmovss  xmm0, dword ptr [rbx+18h]; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovss  xmm7, cs:__real@3f800000
      vmovss  dword ptr [rdi+rbp+324700h], xmm0
    }
    if ( v45 | v48 )
      goto LABEL_29;
    __asm { vcomiss xmm0, xmm7 }
    if ( !v45 )
    {
LABEL_29:
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+98h+var_70], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2577, ASSERT_TYPE_ASSERT, "( ( dl->cosHalfFovOuter > 0.0f && dl->cosHalfFovOuter < 1.0f ) )", "( dl->cosHalfFovOuter ) = %g", v67) )
        __debugbreak();
    }
    *(_WORD *)&scene.dynamicOmniLight[_RDI].lightCommon.canUseShadowMap = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3Ch]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rdi+rbp+324718h], xmm0
      vmovss  xmm0, dword ptr [rbx+40h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rdi+rbp+32471Ch], xmm0
      vmovss  xmm0, dword ptr [rbx+44h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rdi+rbp+324720h], xmm0 }
    v48 = !pModuleInitLightOmni->m_disableVolumetric;
    __asm { vmovsd  xmm0, qword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
    scene.dynamicOmniLight[_RDI].lightCommon.flags = 8;
    scene.dynamicOmniLight[_RDI].lightCommon.isVolumetric = v48;
    __asm { vmovsd  qword ptr [rdi+rbp+3247C4h], xmm0 }
    scene.dynamicOmniLight[_RDI].debugColorGammaSrgb.v[2] = colorGreen.v[2];
    result = 1;
  }
  else
  {
LABEL_32:
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v72;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+98h+var_38]
  }
  return result;
}

/*
==============
R_AddReflectionProbeInstanceToScene
==============
*/
void R_AddReflectionProbeInstanceToScene(const GfxReflectionProbeInstance *reflectionProbeInstance)
{
  __int64 sceneReflectionProbeInstanceCount; 
  __int64 v10; 

  _RDI = reflectionProbeInstance;
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2413, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  sceneReflectionProbeInstanceCount = scene.sceneReflectionProbeInstanceCount;
  if ( scene.sceneReflectionProbeInstanceCount >= 0x80 )
  {
    if ( scene.sceneReflectionProbeInstanceCount != 128 )
    {
      LODWORD(v10) = scene.sceneReflectionProbeInstanceCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2422, ASSERT_TYPE_ASSERT, "( ( scene.sceneReflectionProbeInstanceCount == 128 ) )", "( scene.sceneReflectionProbeInstanceCount ) = %i", v10) )
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
    __asm { vmovups ymm0, ymmword ptr [rdi] }
    _RAX = scene.sceneReflectionProbeInstances;
    _RCX = 18 * sceneReflectionProbeInstanceCount;
    __asm
    {
      vmovups ymmword ptr [rax+rcx*8], ymm0
      vmovups ymm1, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rax+rcx*8+20h], ymm1
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymmword ptr [rax+rcx*8+40h], ymm0
      vmovups ymm1, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rax+rcx*8+60h], ymm1
      vmovups xmm0, xmmword ptr [rdi+80h]
      vmovups xmmword ptr [rax+rcx*8+80h], xmm0
    }
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

bool __fastcall R_AddSpotLightToScene(const vec3_t *org, const vec3_t *dir, const vec3_t *up, double radius, const vec3_t *colorLinearSrgb, float intensity, const ParticleModuleInitLightSpot *pModuleInitLightSpot, GfxLightDef *lightDef)
{
  const dvar_t *v19; 
  int DynamicSpotLight; 
  vec3_t *p_up; 
  float m_toneMappingScaleFactor; 
  const dvar_t *v51; 
  vec2_t *p_fadeOffsetRt; 
  bool v60; 
  char v63; 
  bool v65; 
  char v71; 
  bool v75; 
  bool v76; 
  bool result; 
  double v92; 
  double v93; 
  double v94; 
  vec3_t cross; 

  __asm { vmovaps [rsp+0C8h+var_58], xmm8 }
  _RBX = pModuleInitLightSpot;
  _RBP = dir;
  __asm { vmovaps xmm8, xmm3 }
  if ( !pModuleInitLightSpot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2605, ASSERT_TYPE_ASSERT, "(pModuleInitLightSpot)", (const char *)&queryFormat, "pModuleInitLightSpot") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0C8h+var_38], xmm6
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps [rsp+0C8h+var_68], xmm9
  }
  if ( !rgp.world )
    goto LABEL_49;
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2619, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  if ( pModuleInitLightSpot->m_scriptScale )
  {
    __asm
    {
      vmovss  xmm0, [rsp+0C8h+intensity]
      vmulss  xmm8, xmm8, dword ptr [rax+28h]
      vmulss  xmm7, xmm0, dword ptr [rax+28h]
    }
  }
  else
  {
    __asm { vmovss  xmm7, [rsp+0C8h+intensity] }
  }
  __asm { vcomiss xmm8, cs:__real@3f8147ae }
  v19 = DCONST_DVARBOOL_r_pureIRLightHack;
  __asm { vmovss  xmm9, dword ptr [rbx+38h] }
  if ( !DCONST_DVARBOOL_r_pureIRLightHack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_pureIRLightHack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( v19->current.enabled )
    __asm { vcomiss xmm6, dword ptr [rbx+38h] }
  _RSI = colorLinearSrgb;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmulss  xmm3, xmm2, xmm7
    vaddss  xmm0, xmm3, dword ptr [rbx+38h]
    vcomiss xmm0, xmm6
  }
  if ( !v19->current.enabled )
    goto LABEL_49;
  __asm { vucomiss xmm6, dword ptr [rbx+18h] }
  if ( !v19->current.enabled )
    goto LABEL_49;
  DynamicSpotLight = R_AllocateDynamicSpotLight();
  if ( DynamicSpotLight >= 0 )
  {
    _RDI = DynamicSpotLight;
    _R12 = &scene;
    memset_0(&scene.dynamicSpotLight[_RDI].lightCommon.canUseShadowMap, 0, 0x8Fui64);
    _R8 = rgp.dlightDef;
    scene.dynamicSpotLight[_RDI].lightCommon.type = 2;
    if ( lightDef )
      _R8 = lightDef;
    scene.dynamicSpotLight[_RDI].lightCommon.def = _R8;
    if ( _R8->iesProfile )
      __asm { vucomiss xmm6, dword ptr [r8+18h] }
    _RCX = &scene.dynamicSpotLight[_RDI].lightCommon.dir;
    __asm { vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000 }
    scene.dynamicSpotLight[_RDI].lightCommon.origin.v[0] = org->v[0];
    p_up = &scene.dynamicSpotLight[_RDI].lightCommon.up;
    scene.dynamicSpotLight[_RDI].lightCommon.origin.v[1] = org->v[1];
    scene.dynamicSpotLight[_RDI].lightCommon.origin.v[2] = org->v[2];
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vxorps  xmm0, xmm0, xmm3
      vmovss  dword ptr [rcx], xmm0
      vmovss  xmm1, dword ptr [rbp+4]
      vxorps  xmm2, xmm1, xmm3
      vmovss  dword ptr [rcx+4], xmm2
      vmovss  xmm0, dword ptr [rbp+8]
      vxorps  xmm1, xmm0, xmm3
      vmovss  xmm3, cs:__real@43f6b0cf
      vmovss  dword ptr [rcx+8], xmm1
    }
    p_up->v[0] = up->v[0];
    p_up->v[1] = up->v[1];
    p_up->v[2] = up->v[2];
    scene.dynamicSpotLight[_RDI].lightCommon.colorLinearSrgb = *colorLinearSrgb;
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rbx+30h]
      vmulss  xmm0, xmm0, xmm3
      vmovss  dword ptr [rdi+r12+31FAA0h], xmm0
      vmulss  xmm2, xmm3, dword ptr [rbx+34h]
      vmovss  dword ptr [rdi+r12+31FA94h], xmm2
      vmulss  xmm0, xmm9, xmm3
      vmovss  dword ptr [rdi+r12+31FA98h], xmm0
      vmovss  xmm1, dword ptr [rbx+3Ch]
      vmulss  xmm2, xmm1, cs:__real@45340001
      vmaxss  xmm0, xmm8, cs:__real@3f8147ae
      vmovss  dword ptr [rdi+r12+31FA9Ch], xmm2
    }
    m_toneMappingScaleFactor = pModuleInitLightSpot->m_toneMappingScaleFactor;
    __asm { vmovss  dword ptr [rdi+r12+31FAD4h], xmm0 }
    scene.dynamicSpotLight[_RDI].lightCommon.tonemappingScaleFactor = m_toneMappingScaleFactor;
    scene.dynamicSpotLight[_RDI].lightCommon.bulbRadius = pModuleInitLightSpot->m_bulbRadius;
    Vec3Cross(_RCX, p_up, &cross);
    __asm { vmovss  xmm3, dword ptr [rbx+24h] }
    v51 = r_VFXOmniLightFalloffEnable;
    __asm
    {
      vmulss  xmm1, xmm3, dword ptr [rsp+0C8h+cross]
      vmulss  xmm0, xmm3, dword ptr [rsp+0C8h+cross+4]
      vmulss  xmm2, xmm3, dword ptr [rsp+0C8h+cross+8]
      vmovss  dword ptr [rdi+r12+31FAE4h], xmm1
      vmovss  dword ptr [rdi+r12+31FAE8h], xmm0
      vmovss  dword ptr [rdi+r12+31FAECh], xmm2
    }
    if ( v51->current.enabled )
    {
      _RAX = r_VFXSpotLightFalloff;
      __asm { vmovss  xmm0, dword ptr [rax+28h] }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    }
    p_fadeOffsetRt = &scene.dynamicSpotLight[_RDI].lightCommon.fadeOffsetRt;
    __asm { vmovss  dword ptr [rdi+r12+31FB14h], xmm0 }
    *p_fadeOffsetRt = 0i64;
    R_LightFadeOffsetRuntimeEncoding(p_fadeOffsetRt, 2u);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vmovss  xmm7, cs:__real@3fc90fdb
      vcomiss xmm0, xmm7
    }
    if ( !(v63 | v60) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0C8h+var_A0], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2719, ASSERT_TYPE_ASSERT, "( ( pModuleInitLightSpot->m_fovCollimation <= ( ( 90.0f ) * ( M_PI_F / 180.0f ) ) ) )", "( pModuleInitLightSpot->m_fovCollimation ) = %g", v92) )
        __debugbreak();
    }
    __asm { vmovss  xmm0, dword ptr [rbx+2Ch]; X }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rdi+r12+31FB18h], xmm0
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vcomiss xmm1, dword ptr [rbx+18h]
    }
    if ( !v63 )
    {
      v65 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2721, ASSERT_TYPE_ASSERT, "(pModuleInitLightSpot->m_fovOuter > pModuleInitLightSpot->m_fovInner)", (const char *)&queryFormat, "pModuleInitLightSpot->m_fovOuter > pModuleInitLightSpot->m_fovInner");
      v63 = 0;
      if ( v65 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vcomiss xmm0, xmm7
    }
    if ( !v63 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0C8h+var_A0], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2722, ASSERT_TYPE_ASSERT, "( ( pModuleInitLightSpot->m_fovOuter < ( ( 90.0f ) * ( M_PI_F / 180.0f ) ) ) )", "( pModuleInitLightSpot->m_fovOuter ) = %g", v93) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vminss  xmm0, xmm0, dword ptr [rbx+2Ch]; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rdi+r12+31FAF4h], xmm0
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vminss  xmm0, xmm1, dword ptr [rbx+18h]; X
    }
    *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovss  xmm7, cs:__real@3f800000
      vmovss  dword ptr [rdi+r12+31FAF0h], xmm0
    }
    if ( v71 | v60 )
      goto LABEL_53;
    __asm { vcomiss xmm0, xmm7 }
    if ( !v71 )
    {
LABEL_53:
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0C8h+var_A0], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2725, ASSERT_TYPE_ASSERT, "( ( dl->cosHalfFovOuter > 0.0f && dl->cosHalfFovOuter < 1.0f ) )", "( dl->cosHalfFovOuter ) = %g", v94) )
        __debugbreak();
    }
    v75 = r_spotLightShadows->current.enabled && !pModuleInitLightSpot->m_disableShadowMap;
    scene.dynamicSpotLight[_RDI].lightCommon.canUseShadowMap = v75;
    v76 = v75 && !pModuleInitLightSpot->m_disableDynamicShadows && r_spotLightEntityShadows->current.enabled;
    scene.dynamicSpotLight[_RDI].lightCommon.needsDynamicShadows = v76;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+40h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rdi+r12+31FB08h], xmm0
      vmovss  xmm0, dword ptr [rbx+44h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rdi+r12+31FB0Ch], xmm0
      vmovss  xmm0, dword ptr [rbx+48h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rdi+r12+31FB10h], xmm0
      vmovsd  xmm0, qword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
    }
    scene.dynamicSpotLight[_RDI].lightCommon.shadowNearPlaneBias = pModuleInitLightSpot->m_shadowNearPlane;
    v60 = !pModuleInitLightSpot->m_disableVolumetric;
    scene.dynamicSpotLight[_RDI].lightCommon.flags = 8;
    scene.dynamicSpotLight[_RDI].lightCommon.isVolumetric = v60;
    __asm { vmovsd  qword ptr [rdi+r12+31FBB4h], xmm0 }
    scene.dynamicSpotLight[_RDI].debugColorGammaSrgb.v[2] = colorGreen.v[2];
    result = 1;
  }
  else
  {
LABEL_49:
    result = 0;
  }
  __asm
  {
    vmovaps xmm9, [rsp+0C8h+var_68]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovaps xmm8, [rsp+0C8h+var_58]
  }
  return result;
}

/*
==============
R_AddSpotShadows
==============
*/
void R_AddSpotShadows(const void *const cmd)
{
  GfxViewInfo *v3; 
  unsigned int v5; 
  GfxWorld *world; 
  unsigned int sceneLightCount; 
  unsigned int primaryLightCount; 
  int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned int primaryLightVisDataCount; 
  int v17; 
  unsigned int *primaryLightVisData; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  bool v25; 
  GfxShadowGeometry *shadowGeomOptimized; 
  bool v31; 
  bool IsPrimaryLightLoaded; 
  bool v35; 
  unsigned __int64 v36; 
  unsigned int *PrimaryLightMotionBits; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  unsigned int *v45; 
  GfxViewInfo *v46; 
  GfxViewParms *viewParmsDpvs; 
  unsigned int sceneLightIsUsed[208]; 
  unsigned int motionBits[204]; 

  v3 = *(GfxViewInfo **)cmd;
  _RBP = (GfxBackEndData *)*((_QWORD *)cmd + 1);
  v46 = *(GfxViewInfo **)cmd;
  viewParmsDpvs = (GfxViewParms *)*((_QWORD *)cmd + 2);
  if ( (*(_BYTE *)(*(_QWORD *)cmd + 15540i64) & 2) != 0 )
  {
    v5 = (_RBP->sceneLightCount + 31) >> 5;
    if ( v5 > 0xCD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7471, ASSERT_TYPE_ASSERT, "(elemCount <= ( sizeof( *array_counter( sceneLightIsUsed ) ) + 0 ))", (const char *)&queryFormat, "elemCount <= ARRAY_COUNT( sceneLightIsUsed )") )
      __debugbreak();
    memset_0(sceneLightIsUsed, 0, 4i64 * v5);
    world = rgp.world;
    sceneLightCount = _RBP->sceneLightCount;
    primaryLightCount = rgp.world->primaryLightCount;
    if ( primaryLightCount < sceneLightCount )
    {
      v9 = __ROL4__(1, primaryLightCount);
      do
      {
        v10 = (int)primaryLightCount++;
        sceneLightIsUsed[v10 >> 5] |= v9;
        v9 = __ROL4__(v9, 1);
      }
      while ( primaryLightCount < sceneLightCount );
      primaryLightCount = world->primaryLightCount;
    }
    v11 = primaryLightCount - rgp.world->movingScriptablePrimaryLightCount - 1;
    v12 = rgp.world->lastSunPrimaryLightIndex + 1;
    if ( r_debugDrawTransientLights->current.integer && v12 <= v11 )
    {
      do
      {
        if ( r_offloadPrimaryLights->current.integer && !R_IsPrimaryLightLoaded(_RBP, v12) )
          _RBP->sceneLights[v12].flags |= 0x80u;
        ++v12;
      }
      while ( v12 <= v11 );
    }
    if ( r_umbraSpotShadowSelection->current.integer )
    {
      v13 = 0;
      v14 = 0;
      __asm { vmovaps [rsp+738h+var_48], xmm7 }
      v15 = 0;
      primaryLightVisDataCount = rgp.world->dpvs.primaryLightVisDataCount;
      v17 = 0;
      primaryLightVisData = rgp.world->dpvs.primaryLightVisData;
      LODWORD(v19) = 0;
      v45 = primaryLightVisData;
      v43 = 0;
      v41 = 0;
      v42 = 0;
      v40 = 0;
      v44 = 0;
      if ( primaryLightVisDataCount )
        v20 = *primaryLightVisData;
      else
        v20 = 0;
      __asm
      {
        vmovaps [rsp+738h+var_38], xmm6
        vxorps  xmm7, xmm7, xmm7
      }
      while ( 1 )
      {
        v22 = v20;
        if ( !v20 )
          break;
LABEL_23:
        v23 = __lzcnt(v22);
        v24 = v23 + 32 * (_DWORD)v19;
        if ( v23 >= 0x20 )
        {
          LODWORD(v39) = 32;
          LODWORD(v38) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v38, v39) )
            __debugbreak();
        }
        if ( ((0x80000000 >> v23) & v22) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
          __debugbreak();
        v14 = v43;
        v20 = v22 & ~(0x80000000 >> v23);
        if ( (unsigned int)v24 > v11 )
        {
          v13 = v42;
          v17 = v40;
          v15 = v41;
          goto LABEL_51;
        }
        v14 = v43 + 1;
        _RDI = (unsigned int)v24;
        ++v43;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+rbp+53A018h]
          vaddss  xmm1, xmm0, dword ptr [rdi+rbp+53A014h]
          vaddss  xmm6, xmm1, dword ptr [rdi+rbp+53A01Ch]
          vucomiss xmm6, xmm7
        }
        if ( v25 )
          goto LABEL_32;
        __asm { vucomiss xmm7, dword ptr [rdi+rbp+53A010h] }
        if ( v25 )
LABEL_32:
          v15 = ++v41;
        else
          v15 = v41;
        if ( r_umbraSpotShadowSelection->current.integer == 2 )
        {
          shadowGeomOptimized = rgp.world->shadowGeomOptimized;
          if ( shadowGeomOptimized )
          {
            if ( !shadowGeomOptimized[v24].surfaceCount )
            {
              v25 = shadowGeomOptimized[v24].smodelCount == 0;
              primaryLightVisData = v45;
              v13 = v42;
              v17 = v40;
              if ( v25 )
                continue;
            }
          }
        }
        v31 = r_offloadPrimaryLights->current.integer == 0;
        if ( !r_offloadPrimaryLights->current.integer || (IsPrimaryLightLoaded = R_IsPrimaryLightLoaded(_RBP, v24), v31 = !IsPrimaryLightLoaded, IsPrimaryLightLoaded) )
        {
          __asm { vucomiss xmm6, xmm7 }
          v17 = v40;
          if ( !v31 )
          {
            if ( _RBP->sceneLights[_RDI].needsDynamicShadows )
            {
              v17 = ++v40;
            }
            else if ( _RBP->sceneLights[_RDI].canUseShadowMap )
            {
              ++v44;
            }
          }
          if ( (unsigned int)v24 >= 0x19A0 )
          {
            LODWORD(v39) = 6560;
            LODWORD(v38) = v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v38, v39) )
              __debugbreak();
          }
          v15 = v41;
          v14 = v43;
          primaryLightVisData = v45;
          sceneLightIsUsed[(__int64)(int)v24 >> 5] |= 1 << (v24 & 0x1F);
          v13 = v42;
        }
        else
        {
          v17 = v40;
          v13 = v42 + 1;
          primaryLightVisData = v45;
          v15 = v41;
          v14 = v43;
          ++v42;
        }
      }
      while ( 1 )
      {
        v19 = (unsigned int)(v19 + 1);
        if ( (unsigned int)v19 >= primaryLightVisDataCount )
          break;
        v22 = primaryLightVisData[v19];
        if ( v22 )
          goto LABEL_23;
      }
LABEL_51:
      __asm
      {
        vmovaps xmm7, [rsp+738h+var_48]
        vmovaps xmm6, [rsp+738h+var_38]
      }
      if ( rg.stats )
      {
        rg.stats->numPrimaryLights = v14;
        rg.stats->numDisabledPrimaryLights = v15;
        rg.stats->numOffloadedPrimaryLights = v13;
        rg.stats->numDynamicOmniLights = _RBP->dynamicOmniLightCount;
        rg.stats->numDynamicSpotLights = _RBP->dynamicSpotLightCount;
        rg.stats->numPirmaryLightsNeedDynShadow = v17;
        rg.stats->numPirmaryLightsNeedStaticShadow = v44;
      }
      v3 = v46;
    }
    v35 = (unsigned int)(sm_showOverlay->current.integer - 5) <= 2;
    Sys_ProfBeginNamedEvent(0xFF708090, "R_PopulateMotionBits");
    R_PopulateMotionBits(v3->clientIndex);
    Sys_ProfEndNamedEvent();
    v36 = (unsigned __int64)rgp.world->staticSpotOmniPrimaryLightCountAligned >> 3;
    PrimaryLightMotionBits = R_GetPrimaryLightMotionBits(v3->clientIndex);
    memcpy_0(motionBits, PrimaryLightMotionBits, v36);
    Sys_ProfBeginNamedEvent(0xFF708090, "choose lights");
    R_ChooseShadowedLights(_RBP, v3, viewParmsDpvs, sceneLightIsUsed);
    Sys_ProfEndNamedEvent();
    if ( rg.stats )
      rg.stats->numSpotShadowmaps = _RBP->spotShadowUpdateCount;
    if ( v35 )
      R_DrawSpotShadowDebug(_RBP, v3, motionBits);
  }
}

/*
==============
R_AddViewmodelDObjToScene
==============
*/
void R_AddViewmodelDObjToScene(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *entityMutableShaderData, const vec3_t *lightingOrigin, float materialTime, int markableViewmodel)
{
  float v9; 
  float materialTimea; 

  __asm { vmovss  xmm0, [rsp+58h+materialTime] }
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    __asm { vmovss  [rsp+58h+var_28], xmm0 }
    R_AddDObjToSceneDelayed(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, v9, 1, markableViewmodel);
  }
  else
  {
    __asm { vmovss  [rsp+58h+materialTime], xmm0 }
    R_AddViewmodelDObjToSceneInternal(obj, pose, entnum, renderFlags, entityMutableShaderData, lightingOrigin, materialTimea, markableViewmodel);
  }
}

/*
==============
R_AddViewmodelDObjToSceneInternal
==============
*/
void R_AddViewmodelDObjToSceneInternal(const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, const GfxSceneEntityMutableShaderData *sceneEntityMutableShaderData, const vec3_t *lightingOrigin, float materialTime, int markableViewmodel)
{
  __int64 v14; 
  int v18; 
  __int64 v19; 
  bool v20; 
  unsigned int v21; 
  DObjMaterialData *materialData; 
  bool v24; 
  unsigned int v25; 
  unsigned __int16 v26; 
  bool v27; 
  bool v28; 
  unsigned __int32 v30; 
  unsigned int v41; 
  unsigned __int8 *v42; 
  bool v43; 
  int NumModels; 
  __int64 v45; 
  __int64 v46; 
  const XModel *Model; 
  BOOL v49; 
  unsigned int BestUsableLodOverrideLowest; 
  unsigned __int8 v51; 
  __int16 v55; 
  unsigned int v56; 
  const XModel **models; 
  unsigned int v62; 
  __int64 *v64; 
  __int64 v65; 
  int sceneDObjMarkableViewmodelIndex; 
  unsigned int sceneDObjFirstViewmodelIndex; 
  unsigned int sceneDObjViewmodelCount; 
  __int64 useDepthHack; 
  __int64 v126; 
  char v127; 
  bool v128; 
  unsigned int renderFlagsa; 
  unsigned int v130; 
  unsigned int v131; 
  unsigned int gfxEntDataIndexBase; 
  unsigned int v133; 
  unsigned int val; 
  unsigned __int8 *v135; 
  SecureVec3 tmpOrg; 
  GfxPackedEntityData *gfxPackedEntityData; 
  const GfxSceneEntityMutableShaderData *v138; 
  __int64 v139; 
  const cpose_t *v140; 
  __int64 v141; 
  __int128 v144; 
  __int128 v145; 
  __int128 v146; 
  __int128 v147; 
  SecureBoundsAccess tmpBounds; 
  MaterialLodSettings materialLodSettings; 
  char v150; 
  void *retaddr; 

  _RAX = &retaddr;
  v141 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v14 = entnum;
  v133 = entnum;
  v140 = pose;
  _R13 = sceneEntityMutableShaderData;
  v138 = sceneEntityMutableShaderData;
  v18 = 0;
  gfxEntDataIndexBase = 0;
  gfxPackedEntityData = NULL;
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v19 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_DWORD *)(v19 + 1728) )
      goto LABEL_8;
    v20 = *(_DWORD *)(v19 + 1724) == 0;
  }
  else
  {
    v20 = !Sys_IsMainThread();
  }
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1982, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
LABEL_8:
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1983, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !DObjGetModel(obj, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1984, ASSERT_TYPE_ASSERT, "(DObjGetModel( obj, 0 ))", (const char *)&queryFormat, "DObjGetModel( obj, 0 )") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1985, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( (unsigned int)v14 >= gfxCfg.entCount )
  {
    LODWORD(useDepthHack) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1986, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( gfxCfg.entCount )", "entnum doesn't index gfxCfg.entCount\n\t%i not in [0, %i)", useDepthHack, gfxCfg.entCount) )
      __debugbreak();
  }
  if ( !scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1987, ASSERT_TYPE_ASSERT, "(scene.allowAddDObj)", (const char *)&queryFormat, "scene.allowAddDObj") )
    __debugbreak();
  if ( r_drawEntities->current.enabled )
  {
    if ( rg.needVelocity )
      v21 = renderFlags | 0x200;
    else
      v21 = renderFlags & 0xFFFFFDFF;
    renderFlagsa = v21;
    R_SetHudOutlineRenderFlags(&sceneEntityMutableShaderData->hudOutlineInfo, &renderFlagsa);
    val = sceneEntityMutableShaderData->hudOutlineInfo.mapEntLookup;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm6, dword ptr [r13+8Ch]
    }
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2008, ASSERT_TYPE_ASSERT, "(sceneEntityMutableShaderData.hudOutlineInfo.scopeStencil == 0.f)", (const char *)&queryFormat, "sceneEntityMutableShaderData.hudOutlineInfo.scopeStencil == 0.f") )
      __debugbreak();
    materialData = obj->materialData;
    v24 = materialData && materialData->camoAsset[0];
    v25 = renderFlagsa;
    if ( v24 )
      goto LABEL_40;
    if ( (renderFlagsa & 2) != 0 )
      goto LABEL_40;
    if ( sceneEntityMutableShaderData->modelShaderData[0].transitionFactor )
      goto LABEL_40;
    if ( sceneEntityMutableShaderData->modelShaderData[0].flagAmplitudeScale )
      goto LABEL_40;
    __asm { vucomiss xmm6, dword ptr [r13+0A8h] }
    if ( sceneEntityMutableShaderData->modelShaderData[0].flagAmplitudeScale )
    {
LABEL_40:
      v127 = 1;
      R_AllocPackedEntityData(sceneEntityMutableShaderData->dataCount, &gfxEntDataIndexBase, &gfxPackedEntityData);
    }
    else
    {
      v127 = 0;
    }
    v139 = v14;
    v26 = scene.dpvs.sceneDObjIndex[v14];
    v27 = v26 == 0xFFFF;
    if ( v26 != 0xFFFF )
    {
      LODWORD(useDepthHack) = v26;
      v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2020, ASSERT_TYPE_ASSERT, "( ( scene.dpvs.sceneDObjIndex[entnum] == (65535) ) )", "( scene.dpvs.sceneDObjIndex[entnum] ) = %i", useDepthHack);
      v27 = !v28;
      if ( v28 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, [rbp+0A0h+materialTime]
      vucomiss xmm7, xmm6
    }
    if ( !v27 || sceneEntityMutableShaderData->modelShaderData[0].baseEmissiveAndTransitionFactor || sceneEntityMutableShaderData->hudOutlineInfo.temperatureSet || (v25 & 3) != 0 )
    {
      if ( ((unsigned __int8)&scene.gfxEntCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.gfxEntCount) )
        __debugbreak();
      v30 = _InterlockedExchangeAdd(&scene.gfxEntCount, 1u);
      v131 = v30;
      if ( v30 >= 0x400 )
      {
        scene.gfxEntCount = 1024;
        R_WarnOncePerFrame(R_WARN_KNOWN_SPECIAL_MODELS, 1024i64);
        goto LABEL_102;
      }
      _RCX = v30;
      _RDX = &scene;
      __asm { vmovss  dword ptr [rdx+rcx*4+33FA78h], xmm7 }
      v25 = renderFlagsa;
      scene.gfxEnts[_RCX].renderFlags = renderFlagsa & 3;
      LODWORD(v135) = -1;
      __asm
      {
        vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
        vcvtps2ph xmm0, xmm0, 0
        vmovups xmmword ptr [rdx+rcx*4+33FA7Ch], xmm0
      }
      scene.gfxEnts[_RCX].scriptablePackedColorEmissive.v[2] = 2015232960;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3b808081
        vxorps  xmm2, xmm2, xmm2
        vinsertps xmm2, xmm2, xmm1, 0
        vcvtps2ph xmm0, xmm2, 0
        vmovss  [rsp+1A0h+var_140], xmm0
      }
      scene.gfxEnts[_RCX].scriptablePackedColorEmissive.v[3] = v130;
      if ( sceneEntityMutableShaderData->hudOutlineInfo.temperatureSet )
      {
        scene.gfxEnts[_RCX].scriptableTemperature = sceneEntityMutableShaderData->hudOutlineInfo.temperatureBase;
        scene.gfxEnts[_RCX].scriptableTemperatureScale = sceneEntityMutableShaderData->hudOutlineInfo.temperatureScale;
      }
      else
      {
        scene.gfxEnts[_RCX].scriptableTemperature = 0.0;
        scene.gfxEnts[_RCX].scriptableTemperatureScale = 1.0;
      }
      scene.gfxEnts[_RCX].eyeSensorPupilSize = 0.0;
    }
    else
    {
      v131 = 0;
    }
    if ( (v25 & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2060, ASSERT_TYPE_ASSERT, "(!(renderFlags & (1 << 4)))", (const char *)&queryFormat, "!(renderFlags & RF_NODRAW)") )
      __debugbreak();
    v41 = R_AllocSceneDObj();
    v130 = v41;
    if ( v41 < 0x200 )
    {
      v42 = &scene.sceneDObjVisData[-1424][1424 * v41];
      *((_WORD *)v42 + 704) = truncate_cast<unsigned short,unsigned int>(gfxEntDataIndexBase);
      R_SetMaterialLodSettings(&materialLodSettings);
      v43 = Com_GameMode_SupportsFeature(WEAPON_CHARGING_OUT|0x80);
      v128 = v43;
      NumModels = DObjGetNumModels(obj);
      if ( NumModels > 0 )
      {
        v45 = 0i64;
        v135 = v42 + 368;
        v46 = NumModels;
        do
        {
          Model = DObjGetModel(obj, v18);
          _R14 = Model;
          v49 = v43 && (Model->flags & 0x20) != 0;
          BestUsableLodOverrideLowest = XModelGetBestUsableLodOverrideLowest(Model, 0, v49, 1);
          v51 = BestUsableLodOverrideLowest;
          if ( BestUsableLodOverrideLowest > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)BestUsableLodOverrideLowest, "unsigned", BestUsableLodOverrideLowest) )
            __debugbreak();
          v42[v45 + 112] = v51;
          __asm
          {
            vmovaps xmm1, xmm6; dist
            vmovss  xmm0, dword ptr [r14+28h]; radius
          }
          *(double *)&_XMM0 = XModelGetMaterialLodForDist(*(float *)&_XMM0, *(float *)&_XMM1, &materialLodSettings);
          _RBX = (__int64)v135;
          __asm { vmovss  dword ptr [rbx], xmm0 }
          ++v18;
          ++v45;
          v135 = (unsigned __int8 *)(_RBX + 4);
          v43 = v128;
        }
        while ( v45 < v46 );
        _R13 = v138;
        v25 = renderFlagsa;
        LODWORD(v14) = v133;
      }
      *((_QWORD *)v42 + 174) = obj;
      obj->validation |= 1u;
      v55 = v131;
      if ( v131 >= 0x400 )
      {
        LODWORD(v126) = 1024;
        LODWORD(useDepthHack) = v131;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2099, ASSERT_TYPE_ASSERT, "(unsigned)( gfxEntIndex ) < (unsigned)( (1 << 10) )", "gfxEntIndex doesn't index GFX_SPECIAL_ENTITY_LIMIT\n\t%i not in [0, %i)", useDepthHack, v126) )
          __debugbreak();
      }
      if ( (unsigned int)v14 >= 0x1000 )
      {
        LODWORD(v126) = 4096;
        LODWORD(useDepthHack) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2100, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( (1 << 12) )", "entnum doesn't index SCENE_ENTNUM_LIMIT\n\t%i not in [0, %i)", useDepthHack, v126) )
          __debugbreak();
      }
      if ( v25 >= 0x100000 )
      {
        LODWORD(v126) = 0x100000;
        LODWORD(useDepthHack) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2101, ASSERT_TYPE_ASSERT, "(unsigned)( renderFlags ) < (unsigned)( (1 << 20) )", "renderFlags doesn't index RENDERFX_FLAGS_LIMIT\n\t%i not in [0, %i)", useDepthHack, v126) )
          __debugbreak();
      }
      *((_DWORD *)v42 + 346) &= 0xFFFFFC00;
      *((_DWORD *)v42 + 346) |= v55 & 0x3FF;
      *((_WORD *)v42 + 706) = truncate_cast<unsigned short,unsigned int>(val);
      *((_DWORD *)v42 + 346) &= 0xFFC003FF;
      *((_DWORD *)v42 + 346) |= (v14 & 0xFFF) << 10;
      *((_DWORD *)v42 + 347) &= 0xFFF00000;
      *((_DWORD *)v42 + 347) |= v25 & 0xFFFFF;
      v56 = v130;
      scene.dpvs.sceneDObjIndex[v139] = v130;
      *((_QWORD *)v42 + 175) = v140;
      if ( !obj->lastGpuLightGridRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2111, ASSERT_TYPE_ASSERT, "(obj->lastGpuLightGridRequest)", (const char *)&queryFormat, "obj->lastGpuLightGridRequest") )
        __debugbreak();
      *((_QWORD *)v42 + 177) = obj->lastGpuLightGridRequest;
      if ( *((_DWORD *)v42 + 18) )
      {
        LODWORD(useDepthHack) = *((_DWORD *)v42 + 18);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2114, ASSERT_TYPE_SANITY, "( ( sceneEnt->cull.state == CULL_STATE_OUT ) )", "( sceneEnt->cull.state ) = %i", useDepthHack) )
          __debugbreak();
      }
      R_SetupSceneEntBounds((GfxSceneEntity *)v42, &tmpOrg, &tmpBounds);
      _RBX = lightingOrigin;
      GfxSceneEntity_SetLightingOrigin((GfxSceneEntity *)v42, lightingOrigin);
      if ( v127 )
      {
        models = obj->models;
        _RAX = *models;
        __asm
        {
          vmovups xmm0, xmmword ptr [rax+2Ch]
          vmovups [rbp+0A0h+var_E8], xmm0
          vmovsd  xmm1, qword ptr [rax+3Ch]
          vmovsd  [rbp+0A0h+var_D8], xmm1
        }
        v62 = obj->numModels;
        if ( v62 > 1 )
        {
          __asm { vmovups xmm7, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf }
          v64 = (__int64 *)(models + 1);
          v65 = v62 - 1;
          __asm
          {
            vmovss  xmm8, dword ptr [rbp+0A0h+var_D8+4]
            vmovss  xmm5, dword ptr [rbp+0A0h+var_D8]
            vmovss  xmm4, dword ptr [rbp+0A0h+var_E8+0Ch]
            vmovss  xmm2, dword ptr [rbp+0A0h+var_E8+8]
            vmovss  xmm1, dword ptr [rbp+0A0h+var_E8+4]
            vmovss  xmm0, dword ptr [rbp+0A0h+var_E8]
          }
          do
          {
            _RAX = *v64;
            HIDWORD(v144) = 0;
            __asm
            {
              vmovups xmm6, xmmword ptr [rbp-30h]
              vmovss  xmm6, xmm6, xmm0
              vinsertps xmm6, xmm6, xmm1, 10h
              vinsertps xmm6, xmm6, xmm2, 20h ; ' '
              vmovups xmmword ptr [rbp-30h], xmm6
            }
            HIDWORD(v145) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rbp-20h]
              vmovss  xmm3, xmm3, xmm4
              vinsertps xmm3, xmm3, xmm5, 10h
              vinsertps xmm3, xmm3, xmm8, 20h ; ' '
              vmovups xmmword ptr [rbp-20h], xmm3
              vmovss  xmm0, dword ptr [rax+2Ch]
            }
            HIDWORD(v146) = 0;
            __asm
            {
              vmovups xmm5, xmmword ptr [rbp-10h]
              vmovss  xmm5, xmm5, xmm0
              vinsertps xmm5, xmm5, dword ptr [rax+30h], 10h
              vinsertps xmm5, xmm5, dword ptr [rax+34h], 20h ; ' '
              vmovups xmmword ptr [rbp-10h], xmm5
              vmovss  xmm0, dword ptr [rax+38h]
              vmovss  xmm1, dword ptr [rax+3Ch]
              vmovss  xmm2, dword ptr [rax+40h]
            }
            HIDWORD(v147) = 0;
            __asm
            {
              vmovups xmm4, xmmword ptr [rbp+0]
              vmovss  xmm4, xmm4, xmm0
              vinsertps xmm4, xmm4, xmm1, 10h
              vinsertps xmm4, xmm4, xmm2, 20h ; ' '
              vmovups xmmword ptr [rbp+0], xmm4
              vsubps  xmm2, xmm6, xmm3
              vaddps  xmm3, xmm6, xmm3
              vsubps  xmm0, xmm5, xmm4
              vaddps  xmm1, xmm5, xmm4
              vminps  xmm4, xmm0, xmm2
              vmaxps  xmm0, xmm1, xmm3
              vaddps  xmm1, xmm0, xmm4
              vmulps  xmm0, xmm7, xmm1
              vsubps  xmm4, xmm0, xmm4
              vshufps xmm1, xmm0, xmm0, 55h ; 'U'
              vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
              vshufps xmm5, xmm4, xmm4, 55h ; 'U'
              vshufps xmm8, xmm4, xmm4, 0AAh ; 'ª'
            }
            ++v64;
            --v65;
          }
          while ( v65 );
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rbx]
          vsubss  xmm3, xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg; r_globals_t rg
          vmovss  xmm0, dword ptr [rbx+4]
          vsubss  xmm2, xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4; r_globals_t rg
          vmovss  xmm1, dword ptr [rbx+8]
          vsubss  xmm4, xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8; r_globals_t rg
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm1
          vsqrtss xmm2, xmm2, xmm2; distanceToCamera
        }
        R_SetEntityShaderData(gfxPackedEntityData, _R13, *(float *)&_XMM2, &tmpBounds, obj->entnum, renderFlagsa & 1);
      }
      sceneDObjMarkableViewmodelIndex = scene.sceneDObjMarkableViewmodelIndex;
      if ( markableViewmodel )
        sceneDObjMarkableViewmodelIndex = v56;
      scene.sceneDObjMarkableViewmodelIndex = sceneDObjMarkableViewmodelIndex;
      sceneDObjFirstViewmodelIndex = scene.sceneDObjFirstViewmodelIndex;
      sceneDObjViewmodelCount = scene.sceneDObjViewmodelCount;
      if ( !scene.sceneDObjViewmodelCount )
        sceneDObjFirstViewmodelIndex = v56;
      scene.sceneDObjFirstViewmodelIndex = sceneDObjFirstViewmodelIndex;
      if ( v56 != scene.sceneDObjViewmodelCount + sceneDObjFirstViewmodelIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2142, ASSERT_TYPE_ASSERT, "(sceneEntIndex == scene.sceneDObjFirstViewmodelIndex + scene.sceneDObjViewmodelCount)", (const char *)&queryFormat, "sceneEntIndex == scene.sceneDObjFirstViewmodelIndex + scene.sceneDObjViewmodelCount") )
          __debugbreak();
        sceneDObjViewmodelCount = scene.sceneDObjViewmodelCount;
      }
      scene.sceneDObjViewmodelCount = sceneDObjViewmodelCount + 1;
      CG_Entity_PredictiveSkinCEntity((GfxSceneEntity *)v42, 1);
      memset(&tmpBounds, 0, sizeof(tmpBounds));
      memset(&tmpOrg, 0, sizeof(tmpOrg));
    }
  }
LABEL_102:
  _R11 = &v150;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  __int64 v4; 
  __int64 v13; 

  _RBX = volumetric;
  if ( !rg.inFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2372, ASSERT_TYPE_ASSERT, "(rg.inFrame)", (const char *)&queryFormat, "rg.inFrame") )
    __debugbreak();
  sceneVolumetricCount = scene.sceneVolumetricCount;
  if ( scene.sceneVolumetricCount >= 0x80 )
  {
    if ( scene.sceneVolumetricCount != 128 )
    {
      LODWORD(v13) = scene.sceneVolumetricCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2381, ASSERT_TYPE_ASSERT, "( ( scene.sceneVolumetricCount == 128 ) )", "( scene.sceneVolumetricCount ) = %i", v13) )
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
    _RDX = &scene.sceneVolumetrics[sceneVolumetricCount];
    v4 = 2i64;
    do
    {
      _RDX = (GfxSceneVolumetric *)((char *)_RDX + 128);
      __asm { vmovups xmm0, xmmword ptr [rbx] }
      _RBX = (const GfxVolumetric *)((char *)_RBX + 128);
      __asm
      {
        vmovups xmmword ptr [rdx-80h], xmm0
        vmovups xmm1, xmmword ptr [rbx-70h]
        vmovups xmmword ptr [rdx-70h], xmm1
        vmovups xmm0, xmmword ptr [rbx-60h]
        vmovups xmmword ptr [rdx-60h], xmm0
        vmovups xmm1, xmmword ptr [rbx-50h]
        vmovups xmmword ptr [rdx-50h], xmm1
        vmovups xmm0, xmmword ptr [rbx-40h]
        vmovups xmmword ptr [rdx-40h], xmm0
        vmovups xmm1, xmmword ptr [rbx-30h]
        vmovups xmmword ptr [rdx-30h], xmm1
        vmovups xmm0, xmmword ptr [rbx-20h]
        vmovups xmmword ptr [rdx-20h], xmm0
        vmovups xmm1, xmmword ptr [rbx-10h]
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      --v4;
    }
    while ( v4 );
    _RDX->volumetric.livePath = _RBX->livePath;
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
  tmat44_t<vec4_t> outa; 

  _RSI = offset;
  if ( in == out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 2753, ASSERT_TYPE_ASSERT, "(&in != &out)", (const char *)&queryFormat, "&in != &out") )
    __debugbreak();
  MatrixIdentity44(&outa);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+88h+out+30h], xmm0
    vmovss  dword ptr [rsp+88h+out+34h], xmm1
  }
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
  unsigned __int16 v17; 
  unsigned int v18; 
  unsigned __int16 v19; 
  unsigned int width; 
  unsigned __int16 v21; 
  unsigned int v22; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  bool vrs; 
  bool vrsEmissiveOnly; 
  bool halfResEmissive; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned __int16 v37; 
  unsigned int v38; 

  sceneParms->resolution = refdef->resolution;
  _RBX = refdef;
  _R13 = sceneParms;
  if ( useDisplayViewportDims )
  {
    R_DisplayToSceneViewport(&sceneParms->sceneViewport, &refdef->displayViewport, GFX_RESOLUTION_STEP_NONE);
    v7 = truncate_cast<unsigned short,unsigned int>(_R13->sceneViewport.width);
    height = _R13->sceneViewport.height;
    _R13->resolution.sceneWidthStep0 = v7;
    _R13->resolution.sceneHeightStep0 = truncate_cast<unsigned short,unsigned int>(height);
    v9 = DVARINT_r_sceneResMin;
    if ( !DVARINT_r_sceneResMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    R_DisplayToSceneViewport(&_R13->sceneViewport, &_RBX->displayViewport, (GfxResolutionStep)v9->current.enabled);
    v10 = truncate_cast<unsigned short,unsigned int>(_R13->sceneViewport.width);
    v11 = _R13->sceneViewport.height;
    _R13->maxSceneRtWidth = v10;
    _R13->maxSceneRtHeight = truncate_cast<unsigned short,unsigned int>(v11);
    R_DisplayToSceneViewport(&_R13->sceneViewport, &_RBX->displayViewport, step);
    x = _R13->sceneViewport.x;
    y = _R13->sceneViewport.y;
    *(_QWORD *)&_R13->sceneViewport.x = 0i64;
    if ( _RBX->useScissorViewport )
    {
      R_DisplayToSceneViewport(&_R13->scissorViewport, &_RBX->scissorViewport, step);
      _R13->scissorViewport.x -= x;
      _R13->scissorViewport.y -= y;
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r13+0A40h]
        vmovups xmmword ptr [r13+0A80h], xmm0
      }
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [rcx+0A40h], xmm0
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [rcx+0A80h], xmm0
    }
    v17 = truncate_cast<unsigned short,unsigned int>(sceneParms->sceneViewport.width);
    v18 = _R13->sceneViewport.height;
    _R13->resolution.sceneWidthStep0 = v17;
    v19 = truncate_cast<unsigned short,unsigned int>(v18);
    width = _R13->sceneViewport.width;
    _R13->resolution.sceneHeightStep0 = v19;
    v21 = truncate_cast<unsigned short,unsigned int>(width);
    v22 = _R13->sceneViewport.height;
    _R13->maxSceneRtWidth = v21;
    _R13->maxSceneRtHeight = truncate_cast<unsigned short,unsigned int>(v22);
  }
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v24 = _R13->sceneViewport.width;
  v25 = _R13->sceneViewport.height;
  v26 = _R13->scissorViewport.width;
  v27 = _R13->scissorViewport.height;
  v28 = _R13->sceneViewport.x;
  v29 = _R13->sceneViewport.y;
  v30 = _R13->scissorViewport.x;
  v31 = _R13->scissorViewport.y;
  __asm { vmovups xmmword ptr [r13+0A70h], xmm0 }
  vrs = rg.vrs;
  vrsEmissiveOnly = rg.vrsEmissiveOnly;
  halfResEmissive = rg.halfResEmissive;
  v35 = rg.vrs;
  _R13->sceneGeoViewport.x = v28;
  _R13->sceneGeoViewport.y = v29;
  ++v35;
  _R13->scissorGeoViewport.x = v30;
  _R13->scissorGeoViewport.y = v31;
  _R13->sceneGeoViewport.width = v24 / v35;
  _R13->sceneEmissiveViewport.x = v28;
  _R13->sceneEmissiveViewport.y = v29;
  _R13->sceneGeoViewport.height = v25 / v35;
  _R13->scissorEmissiveViewport.x = v30;
  _R13->scissorGeoViewport.width = v26 / v35;
  _R13->scissorEmissiveViewport.y = v31;
  _R13->scissorGeoViewport.height = v27 / v35;
  v36 = (vrs || vrsEmissiveOnly || halfResEmissive) + 1;
  _R13->sceneEmissiveViewport.width = v24 / v36;
  _R13->sceneEmissiveViewport.height = v25 / v36;
  _R13->scissorEmissiveViewport.width = v26 / v36;
  _R13->scissorEmissiveViewport.height = v27 / v36;
  if ( v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10543, ASSERT_TYPE_ASSERT, "(sceneParms->sceneViewport.x == 0)", (const char *)&queryFormat, "sceneParms->sceneViewport.x == 0") )
    __debugbreak();
  if ( _R13->sceneViewport.y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10544, ASSERT_TYPE_ASSERT, "(sceneParms->sceneViewport.y == 0)", (const char *)&queryFormat, "sceneParms->sceneViewport.y == 0") )
    __debugbreak();
  v37 = truncate_cast<unsigned short,unsigned int>(_R13->sceneViewport.width);
  v38 = _R13->sceneViewport.height;
  _R13->sceneRtWidth = v37;
  _R13->sceneRtHeight = truncate_cast<unsigned short,unsigned int>(v38);
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
  __asm { vmovss  xmm3, cs:__real@3f800000; scale }
  MatrixSet44(&in1, point, &out, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+in1+30h]
    vsubss  xmm1, xmm0, dword ptr [rdi+100h]
    vmovss  xmm2, dword ptr [rsp+98h+in1+34h]
    vmovss  dword ptr [rsp+98h+in1+30h], xmm1
    vsubss  xmm0, xmm2, dword ptr [rdi+104h]
    vmovss  xmm1, dword ptr [rsp+98h+in1+38h]
    vmovss  dword ptr [rsp+98h+in1+34h], xmm0
    vsubss  xmm2, xmm1, dword ptr [rdi+108h]
    vmovss  dword ptr [rsp+98h+in1+38h], xmm2
  }
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
  __int64 v6; 
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
  _RAX = sm_lightScore_eyeProjectDist;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = sm_lightScore_spotProjectFrac;
  __asm
  {
    vmovss  cs:?scene@@3UGfxScene@@A.sceneSMLightScoreEyeProjectDist, xmm0; GfxScene scene
    vmovss  xmm1, dword ptr [rax+28h]
    vmovss  cs:?scene@@3UGfxScene@@A.sceneSMlightScorespotProjectFrac, xmm1; GfxScene scene
  }
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
  v6 = 3i64;
  _InterlockedExchange(&scene.allowDynamicStreamUpdateIterateSceneModels, 0);
  superTerrainSunShadowSurfCount = scene.superTerrainSunShadowSurfCount;
  scene.superTerrainSurfCount = 0;
  do
  {
    *superTerrainSunShadowSurfCount++ = 0;
    --v6;
  }
  while ( v6 );
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
  bool v10; 
  unsigned int displayWidth; 
  unsigned int displayHeight; 
  unsigned int sceneHeight; 
  unsigned int sceneWidth; 
  const vec2_t *MatchingDynamicResolutionTable; 
  char v60; 
  void *retaddr; 
  unsigned int outWidth; 
  unsigned int outHeight; 

  _RAX = &retaddr;
  v10 = !rg.sceneResNative;
  displayWidth = vidConfig.displayWidth;
  displayHeight = vidConfig.displayHeight;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  if ( v10 )
  {
    if ( rg.sceneResDynamic )
    {
      sceneHeight = vidConfig.sceneHeight;
      sceneWidth = vidConfig.sceneWidth;
      MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
      R_RT_AdjustForDynamicResolution(MatchingDynamicResolutionTable, sceneWidth, sceneHeight, step, &outWidth, &outHeight);
    }
    else
    {
      outWidth = vidConfig.sceneWidth;
      outHeight = vidConfig.sceneHeight;
    }
  }
  else
  {
    outWidth = displayWidth;
    outHeight = displayHeight;
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vdivss  xmm8, xmm6, xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [r15]
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm1, xmm8; X
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm
  {
    vcvttss2si esi, xmm0
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, r14d
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm7, xmm6, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ebx
    vmulss  xmm1, xmm2, xmm0
    vmulss  xmm0, xmm1, xmm7; X
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm
  {
    vcvttss2si ebx, xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, rax
    vcvtsi2ss xmm1, xmm1, edi
    vmulss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm1, xmm8; X
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm2, xmm2, ebp
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm2, xmm2, xmm1
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm2, xmm7; X
  }
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm { vmovaps xmm7, [rsp+88h+var_48] }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vcvttss2si eax, xmm6
    vmovaps xmm6, [rsp+88h+var_38]
  }
  outSceneViewport->width = _EAX - _ESI;
  __asm { vcvttss2si eax, xmm0 }
  outSceneViewport->y = _EBX;
  outSceneViewport->height = _EAX - _EBX;
  outSceneViewport->x = _ESI;
}

/*
==============
R_DrawLightsAndObjectsPass3
==============
*/
void R_DrawLightsAndObjectsPass3(GfxViewInfo *viewInfo)
{
  R_RT_DepthHandle v7; 
  R_RT_DepthHandle v8; 
  R_RT_DepthHandle result; 
  R_RT_DepthHandle v10; 

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
      _RAX = R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D(&result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+0C8h+var_98], ymm0
      }
      _RAX = R_SunShadowCache_GetDepthArrayRtDraw3D(&v10);
      __asm
      {
        vmovups ymm0, [rsp+0C8h+var_98]
        vmovups [rsp+0C8h+var_98], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+0C8h+var_78], ymm0
      }
      R_GenerateSortedSunShadowCacheSurfs(viewInfo, NULL, &v8, &v7, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
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
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  BOOL v24; 
  vec3_t outOrg; 

  v4 = DCONST_DVARBOOL_r_debugLodInfo;
  if ( !DCONST_DVARBOOL_r_debugLodInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_debugLodInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    _RDI = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    RefdefView_GetOrg(view, &outOrg);
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+40h]
      vcvtss2sd xmm4, xmm4, xmm4
      vmovss  xmm5, dword ptr [rdi+3Ch]
      vcvtss2sd xmm5, xmm5, xmm5
      vmovss  xmm0, dword ptr [rdi+38h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [rsp+78h+outOrg+8]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm3, dword ptr [rsp+78h+outOrg+4]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, dword ptr [rsp+78h+outOrg]
      vcvtss2sd xmm2, xmm2, xmm2
    }
    v24 = dynRes;
    __asm
    {
      vmovsd  [rsp+78h+var_40], xmm4
      vmovsd  [rsp+78h+var_48], xmm5
      vmovsd  [rsp+78h+var_50], xmm0
      vmovsd  [rsp+78h+var_58], xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_Printf(14, "DumpLodInfo: viewOrg %f %f %f, playerOrg %f %f %f, dynRes %d\n", *(double *)&_XMM2, *(double *)&_XMM3, v20, v21, v22, v23, v24);
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

  _RDI = sphere;
  v3 = dynLightIndex;
  if ( dynLightIndex >= scene.addedDynamicLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11321, ASSERT_TYPE_ASSERT, "(dynLightIndex < scene.addedDynamicLightCount)", (const char *)&queryFormat, "dynLightIndex < scene.addedDynamicLightCount") )
    __debugbreak();
  __asm { vmovss  xmm2, dword ptr [rdi+0Ch]; radius }
  return R_SphereInPlanes((const vec4_t (*)[6])scene.sceneDynamicLight[v3]->planes, &_RDI->origin, *(const float *)&_XMM2) != 0;
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
  __int64 result; 
  vec4_t out; 
  vec4_t v43; 
  vec4_t vec; 
  GfxMatrix outWVPMatrix; 

  __asm
  {
    vmovaps [rsp+0D8h+var_18], xmm6
    vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
    vmovups xmmword ptr [rsp+0D8h+vec], xmm0
  }
  R_BuildWorldViewProjectionMatrixForPoint(top, &outWVPMatrix);
  MatrixTransformVector44Aligned(&vec, &outWVPMatrix.m, &out);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vdivss  xmm1, xmm6, dword ptr [rsp+0D8h+out+0Ch]
    vshufps xmm1, xmm1, xmm1, 0
    vmulps  xmm1, xmm1, xmmword ptr [rsp+0D8h+out]
    vmovups xmmword ptr [rsp+0D8h+out], xmm1
  }
  R_BuildWorldViewProjectionMatrixForPoint(bottom, &outWVPMatrix);
  MatrixTransformVector44Aligned(&vec, &outWVPMatrix.m, &v43);
  __asm
  {
    vdivss  xmm1, xmm6, dword ptr [rsp+0D8h+var_98+0Ch]
    vmovss  xmm6, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vshufps xmm1, xmm1, xmm1, 0
    vmulps  xmm5, xmm1, xmmword ptr [rsp+0D8h+var_98]
    vmovups xmmword ptr [rsp+0D8h+var_98], xmm5
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm4, xmm1, dword ptr [rsp+0D8h+out]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0D8h+out], xmm4
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, xmm6
    vmulss  xmm3, xmm2, dword ptr [rsp+0D8h+out+4]
    vmovss  dword ptr [rsp+0D8h+out+4], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm5, xmm1
    vsubss  xmm5, xmm0, xmm4
    vmovss  dword ptr [rsp+0D8h+var_98], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, dword ptr [rsp+0D8h+var_98+4]
    vsubss  xmm3, xmm2, xmm3
    vmulss  xmm4, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm1, xmm4, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm3, xmm2, cs:__real@3daaaaab
    vaddss  xmm4, xmm3, xmm6
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm4, 1
    vcvttss2si eax, xmm3
  }
  result = (unsigned int)(12 * _EAX);
  __asm { vmovaps xmm6, [rsp+0D8h+var_18] }
  return result;
}

/*
==============
R_EyeHighlight_SetInfo
==============
*/
void R_EyeHighlight_SetInfo(GfxViewInfo *viewInfo, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  vec4_t vec; 
  vec4_t out; 
  tmat44_t<vec4_t> dst; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm7
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovss  xmm0, dword ptr [rcx+648h]
    vmulss  xmm10, xmm0, dword ptr [rcx+64Ch]
    vmulss  xmm9, xmm0, dword ptr [rcx+650h]
    vmulss  xmm8, xmm0, dword ptr [rcx+654h]
    vmovss  xmm0, dword ptr [rcx+660h]
    vmulss  xmm0, xmm0, cs:__real@3fc90fdb
  }
  _RBX = viewInfo;
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(viewInfo, a2, a3, a4);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+65Ch]
    vmovss  dword ptr [rsp+0D8h+vec], xmm0
    vmovups xmm7, xmm0
    vmulss  xmm0, xmm1, cs:__real@3fc90fdb
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v20, v19, v21, v22);
  __asm
  {
    vshufps xmm2, xmm0, xmm0, 1
    vshufps xmm1, xmm7, xmm7, 1
    vmovss  dword ptr [rsp+0D8h+vec+4], xmm0
    vmulss  xmm0, xmm2, xmm1
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+0D8h+vec+8], xmm1
    vmovss  dword ptr [rsp+0D8h+vec+0Ch], xmm2
  }
  MatrixInverse44Aligned((const tmat44_t<vec4_t> *)_RBX, &dst);
  MatrixTransformVector44Aligned(&vec, &dst, &out);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+658h]
    vmovss  xmm0, dword ptr [rsp+0D8h+out]
    vmovss  xmm1, dword ptr [rsp+0D8h+out+4]
    vmovss  dword ptr [rbx+18C0h], xmm0
    vmovss  xmm0, dword ptr [rsp+0D8h+out+8]
    vmovss  dword ptr [rbx+18C8h], xmm0
    vmovss  dword ptr [rbx+18C4h], xmm1
    vmovss  dword ptr [rbx+18CCh], xmm2
    vmovss  dword ptr [rbx+18D0h], xmm10
    vmovss  dword ptr [rbx+18D4h], xmm9
    vmovss  dword ptr [rbx+18D8h], xmm8
  }
  _RBX->input.sceneConstants.eyeHighlightParams2.v[3] = 0.0;
  _R11 = &v40;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
  }
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
  __int64 v4; 
  unsigned int FrustumWords; 
  int v8; 
  unsigned int v10; 
  GfxBspSurfListOut out; 
  SceneEntCmd sceneEntCmd; 

  Sys_ProfBeginNamedEvent(0xFF708090, "R_GenerateDrawSurfsCmd");
  v2 = *((_QWORD *)cmd + 1);
  _RDI = *((_QWORD *)cmd + 98);
  if ( *(_DWORD *)cmd )
  {
    if ( *(_DWORD *)cmd == 1 )
    {
      R_ST_SetFrameDataResources((GfxCmdBufInput *)(_RDI + 3760));
      Sys_ProfBeginNamedEvent(0xFF708090, "R_DrawBspLightsAndObjectsPass2");
      if ( !*(_BYTE *)(v2 + 21) && Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_BSP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 7660, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_BSP ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_BSP )") )
        __debugbreak();
      Sys_ProfBeginNamedEvent(0xFF708090, "bsp surfaces");
      out.drawlistType = DRAWLIST_PREPASS_COUNT;
      out.bspSurfList = (GfxBspSurfList *)(_RDI + 18640);
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
      R_DrawLightsAndObjectsPass3((GfxViewInfo *)_RDI);
      Sys_AddWorkerCmd(WRKCMD_UGB_MAKE_XSURFS_RESIDENT_DISPATCH, (const void *const)(_RDI + 11696));
      R_GenerateGPUArgs(*(const GfxBackEndData **)(_RDI + 11696), 1u);
      R_GenerateGPUArgs(*(const GfxBackEndData **)(_RDI + 11696), 0);
      if ( !Sys_IsRendererReady(NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8519, ASSERT_TYPE_ASSERT, "(Sys_IsRendererReady( nullptr ))", (const char *)&queryFormat, "Sys_IsRendererReady( nullptr )") )
        __debugbreak();
      R_IssueRenderCommandsBegin(*(_DWORD *)(v2 + 2512));
      R_FinishFrontendComputeCmdList();
      R_IssueRenderCommandsShadow();
      R_SubmitSurfaces((GfxViewInfo *)_RDI);
    }
    else if ( *(_DWORD *)cmd == 2 )
    {
      R_DecalVolumesGrid_AddCommand(*((const GfxViewInfo **)cmd + 98));
      R_SubmitFXandTransparencies((GfxViewInfo *)_RDI);
      R_IssueRenderCommandsOpaque();
    }
    else
    {
      if ( *(_DWORD *)cmd != 3 )
      {
        v10 = *(_DWORD *)cmd;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8547, ASSERT_TYPE_ASSERT, "( ( drawSurfsCmd->type == GENERATE_DRAWSURFS3 ) )", "( drawSurfsCmd->type ) = %i", v10) )
          __debugbreak();
      }
      R_SubmitEmissive((GfxViewInfo *)_RDI);
      R_IssueRenderCommandsEmissive();
    }
  }
  else
  {
    v4 = *(_QWORD *)(_RDI + 11696);
    *(_DWORD *)(_RDI + 11984) = R_GetFrustumLightWords(*(_DWORD *)(v4 + 1088724));
    *(_DWORD *)(_RDI + 11988) = R_VOL_GetFrustumWords(*(_DWORD *)(v4 + 1088732));
    FrustumWords = R_ReflectionProbe_GetFrustumWords(*(_DWORD *)(v4 + 31488));
    __asm { vmovss  xmm0, dword ptr [rdi+2ED4h] }
    *(_DWORD *)(_RDI + 11992) = FrustumWords;
    __asm { vmovss  xmm1, dword ptr [rdi+2ED8h] }
    v8 = *(_DWORD *)(_RDI + 11984);
    __asm
    {
      vmovss  dword ptr [rdi+1BF8h], xmm1
      vmovss  dword ptr [rdi+1BF4h], xmm0
    }
    *(_DWORD *)(_RDI + 7152) = v8;
    *(_DWORD *)(_RDI + 7164) = 0;
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
    __asm { vmovdqu xmmword ptr [rsp+88h+sceneEntCmd.sceneBrushBegin], xmm0 }
    sceneEntCmd.viewInfo = (const GfxViewInfo *)_RDI;
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
  R_TG_SetupPhase((GfxViewInfo *)_RDI, frontEndDataOut->smpFrame, *(_DWORD *)cmd);
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
  GfxViewInfo *v19; 
  unsigned int primaryLightCount; 
  const dvar_t *v21; 
  GfxBackEndData *v22; 
  unsigned int i; 
  __int64 v24; 
  float v32; 
  GfxBackEndData *v61; 
  FxGlassVisInfo *GlassVisInfo; 
  GfxViewportFeatures *v66; 
  __int64 v76; 
  __int64 v79; 
  unsigned int sceneVolumetricCount; 
  unsigned int v85; 
  __int64 v86; 
  __int64 v88; 
  LocalClientNum_t *v97; 
  const dvar_t *v98; 
  unsigned __int64 j; 
  unsigned __int64 k; 
  GfxViewportFeatures *v101; 
  const dvar_t *v102; 
  unsigned __int64 m; 
  unsigned __int64 n; 
  int v105; 
  CgDrawSystem *DrawSystem; 
  const dvar_t *v108; 
  ClGameModeApplication *ActiveClientApplication; 
  int v110; 
  __int64 v111; 
  GfxImage *iesLookupTexture; 
  GfxCmdBufInput *p_input; 
  GfxViewInfo *v126; 
  CgDrawSystem *v127; 
  __int64 v132; 
  GfxViewInfo *viewInfo; 
  GfxViewportFeatures *v134; 
  LocalClientNum_t v135; 
  vec3_t v136; 
  GfxBackEndData *v137; 
  SceneEntCmd sceneEntCmd; 
  FxSystem *System; 
  LocalClientNum_t v140; 
  __int64 v141[2]; 
  __int64 v142[2]; 
  __int64 v143[2]; 
  __int64 v144[2]; 
  __int64 v145[4]; 
  FxGenerateModelMarksCmd genModelMarksCmd; 
  int data[4]; 
  FxGlassVisInfo *v148; 
  GfxViewInfo *v149; 
  int v153[2]; 
  LocalClientNum_t *v154; 
  char v155; 
  char v156; 
  GfxViewInfo *v157; 
  char v158[384]; 
  GfxBackEndData *v159; 
  FxGenerateGlassVertsCmd genGlassVertsCmd; 
  FxGenerateVertsCmd genVertsCmd; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _R14 = viewportFeatures;
  _RDI = viewParmsSet;
  _RSI = viewParmsDpvs;
  *(_QWORD *)v136.v = sceneParms;
  _R15 = sceneParms;
  v134 = (GfxViewportFeatures *)viewportFeatures;
  if ( frontEndDataOut->viewInfoCount != rg.viewInfoCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8879, ASSERT_TYPE_ASSERT, "(frontEndDataOut->viewInfoCount == rg.viewInfoCount)", (const char *)&queryFormat, "frontEndDataOut->viewInfoCount == rg.viewInfoCount") )
    __debugbreak();
  viewInfoIndex = (int)frontEndDataOut->viewInfoIndex;
  if ( (unsigned int)viewInfoIndex >= 6 )
  {
    LODWORD(v132) = frontEndDataOut->viewInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5339, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", v132, 6) )
      __debugbreak();
  }
  viewInfo = &frontEndDataOut->viewInfo[viewInfoIndex];
  viewInfo->viewInfoIndex = frontEndDataOut->viewInfoIndex;
  viewInfo->clientIndex = localClientNum;
  _RAX = viewInfo;
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr [rax+3C88h], ymm0
    vmovups xmm1, xmmword ptr [r14+20h]
    vmovups xmmword ptr [rax+3CA8h], xmm1
  }
  viewInfo->ssrFade = _R15->ssrFade;
  _RAX = viewInfo;
  __asm
  {
    vmovups xmm0, xmmword ptr [r15+318h]
    vmovups xmmword ptr [rax+37D4h], xmm0
  }
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
  v19 = viewInfo;
  primaryLightCount = rgp.world->primaryLightCount;
  frontEndDataOut->sceneLightCount = primaryLightCount;
  if ( primaryLightCount )
    memcpy_0(frontEndDataOut->sceneLights, rgp.world->primaryLights, 152i64 * rgp.world->primaryLightCount);
  v21 = sm_spotDynamics;
  if ( !sm_spotDynamics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v22 = frontEndDataOut;
  if ( !v21->current.enabled )
  {
    for ( i = 0; i < frontEndDataOut->sceneLightCount; v22 = frontEndDataOut )
    {
      v24 = i++;
      v22->sceneLights[v24].needsDynamicShadows = 0;
    }
  }
  v22->localClientNum = _R15->localClientNum;
  frontEndDataOut->spotShadowCount = 0;
  frontEndDataOut->spotShadowUpdateCount = 0;
  R_SetupViewInfo(v19, _R15, _RDI);
  if ( CL_StreamViews_HasAdditionalViewsSet() )
  {
    __asm { vmovss  xmm1, cs:__real@43dc0000; ypos }
    R_PerformanceWarning("STREAM", *(float *)&_XMM1);
  }
  if ( R_Cinematic_IsStarted() )
  {
    __asm { vmovss  xmm1, cs:__real@43c80000; ypos }
    R_PerformanceWarning("BINK", *(float *)&_XMM1);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH) && CG_PIP_IsActive(localClientNum) )
  {
    __asm { vmovss  xmm1, cs:__real@442f0000; ypos }
    R_PerformanceWarning("PIP", *(float *)&_XMM1);
  }
  _RCX = viewInfo;
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+14Ch]
    vmovss  xmm1, dword ptr [rdi+148h]
    vmovss  xmm0, dword ptr [rdi+144h]
  }
  v32 = _RDI->frames[0].viewParms.camera.zPlanes[0];
  __asm
  {
    vmovss  dword ptr [rcx+2374h], xmm0
    vmovss  dword ptr [rcx+2378h], xmm1
    vmovss  dword ptr [rcx+237Ch], xmm2
  }
  _RCX->input.sceneConstants.zPlanes.v[0] = v32;
  R_SetupDustConstants(viewInfo);
  __asm
  {
    vmovss  xmm3, dword ptr [r15+7ECh]; boneSizeThreshold
    vmovss  xmm2, dword ptr [r15+7E8h]; fadeDistance
    vmovss  xmm1, dword ptr [r15+7E4h]; cullDistance
  }
  R_MDAO_SetupGlobalFrameData(viewInfo, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  _RCX = viewInfo;
  _RAX = r_tessellationHeightScale;
  if ( r_tessellationHeightAuto->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmulss  xmm4, xmm0, cs:__real@bb800000
    }
  }
  else
  {
    __asm { vmovss  xmm4, dword ptr [rax+28h] }
  }
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.tessellationFactor; r_globals_t rg
    vmaxss  xmm5, xmm0, cs:__real@3727c5ac
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, dword ptr [rax+28h]
  }
  _RAX = r_tessellationHybrid;
  __asm { vmovss  xmm7, dword ptr [rax+28h] }
  if ( rg.tessellation != 1 )
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
    goto LABEL_39;
  }
  __asm
  {
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.tessellationCutoffFalloff; r_globals_t rg
    vcomiss xmm1, cs:__real@3a83126f
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.tessellationCutoffDistance; r_globals_t rg
    vsubss  xmm3, xmm0, xmm1
  }
  if ( rg.tessellation <= 1u )
  {
LABEL_39:
    __asm { vxorps  xmm2, xmm2, xmm2 }
    goto LABEL_40;
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm2, xmm0, xmm1
  }
LABEL_40:
  _RAX = r_tessellationLodBias;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  dword ptr [rcx+1FD4h], xmm0
    vmovss  dword ptr [rcx+1FD0h], xmm5
    vmovss  dword ptr [rcx+1FD8h], xmm4
    vmovss  dword ptr [rcx+1FDCh], xmm7
  }
  _RAX = r_tessellationEyeScale;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  dword ptr [rcx+1FECh], xmm0
    vmovss  dword ptr [rcx+1FE0h], xmm6
    vmovss  dword ptr [rcx+1FE4h], xmm3
    vmovss  dword ptr [rcx+1FE8h], xmm2
  }
  R_GP_InitFrame(frontEndDataOut, viewInfo);
  R_ST_SetSceneConstants(viewInfo, &_RSI->camera.origin);
  R_ST_ClutterSetSceneConstants(viewInfo);
  _RAX = viewInfo;
  __asm
  {
    vmovss  xmm3, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.biasWithoutFovScale; r_globals_t rg
    vmovss  xmm2, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.scaleWithoutFovScale; r_globals_t rg
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.bias; r_globals_t rg
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.scale; r_globals_t rg
    vmovss  dword ptr [rax+2670h], xmm0
    vmovss  dword ptr [rax+2674h], xmm1
    vmovss  dword ptr [rax+2678h], xmm2
    vmovss  dword ptr [rax+267Ch], xmm3
  }
  R_TG_SetupPhase(viewInfo, frontEndDataOut->smpFrame, 5u);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6896, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  R_ReleaseThreadOwnership();
  _R14 = viewInfo;
  v61 = frontEndDataOut;
  r_glob.allowAddDrawCall = 1;
  R_ClearDpvsCellVisibility(viewInfo->viewInfoIndex);
  R_SetupWorldSurfacesDpvs(_RSI, viewInfo->viewInfoIndex);
  R_SetViewFrustumPlanes(_R14, _R14->viewInfoIndex);
  R_Umbra_Reset();
  R_DrawViewModelSceneEnt();
  Sys_ProfBeginNamedEvent(0xFF708090, "draw surfs");
  Profile_Begin(57);
  R_AddWorldSurfacesDpvs(_RSI, viewInfo);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
  GlassVisInfo = FX_GetGlassVisInfo();
  __asm
  {
    vmovss  xmm0, dword ptr [r14+100h]
    vmovss  xmm1, dword ptr [r14+104h]
    vmovss  [rbp+780h+data], xmm0
    vmovss  xmm0, dword ptr [r14+108h]
  }
  v148 = GlassVisInfo;
  __asm
  {
    vmovss  [rbp+780h+var_6F8], xmm0
    vmovss  [rbp+780h+var_6FC], xmm1
  }
  Sys_AddWorkerCmd(WRKCMD_GLASS_PIECE_LIGHT, data);
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    R_SetupSunShadowMaps(v61, viewInfo, &_RSI->camera, &v61->sunShadow);
    R_SetShadowConstants(viewInfo, &v61->sunShadow);
    R_SunShadowMaps(viewInfo, &v61->sunShadow);
  }
  if ( fx_umbra_culling->current.enabled )
  {
    v140 = localClientNum;
    System = FX_GetSystem(localClientNum);
    Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_PARTICLE_SPRITE_CAMERA, &System);
    FX_FillGenerateVertsCmd(localClientNum, GFX_CODE_SURFLIST_EMISSIVE, &genVertsCmd);
    Sys_AddWorkerCmd(WRKCMD_GENERATE_FX_VERTS_UMBRA, &genVertsCmd);
  }
  R_SetGlobalLightingConstants(frontEndDataOut, viewInfo);
  R_InitializeDrawLists(viewInfo);
  v66 = v134;
  if ( (*((_DWORD *)v134 + 10) & 0x2000) != 0 )
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
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+100h]
    vmovss  xmm1, dword ptr [rsi+104h]
    vmovss  [rbp+780h+var_6E0], xmm0
    vmovss  xmm0, dword ptr [rsi+108h]
  }
  v149 = viewInfo;
  __asm
  {
    vmovss  [rbp+780h+var_6D8], xmm0
    vmovss  [rbp+780h+var_6DC], xmm1
  }
  Sys_AddWorkerCmd(WRKCMD_ADD_SUPER_TERRAIN, &v149);
  if ( (*((_DWORD *)v66 + 10) & 0x2000000) != 0 )
  {
    _RBX = viewInfo;
    FX_FillGenerateGlassVertsCmd(&genGlassVertsCmd, viewInfo->input.data);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+100h]
      vmovss  xmm1, dword ptr [rbx+104h]
      vmovss  dword ptr [rbp+780h+genGlassVertsCmd.viewOrg], xmm0
      vmovss  xmm0, dword ptr [rbx+108h]
      vmovss  dword ptr [rbp+780h+genGlassVertsCmd.viewOrg+4], xmm1
      vmovups ymm1, ymmword ptr cs:?rg@@3Ur_globals_t@@A.lodParms.origin; r_globals_t rg
      vmovss  dword ptr [rbp+780h+genGlassVertsCmd.viewOrg+8], xmm0
      vmovups ymm0, ymmword ptr cs:?rg@@3Ur_globals_t@@A.lodParms.clutterRamp.scale; r_globals_t rg
      vmovups ymmword ptr [rbp+780h+genGlassVertsCmd.lodParms.origin], ymm1
      vmovups xmm1, xmmword ptr cs:?rg@@3Ur_globals_t@@A.lodParms.invFovScale; r_globals_t rg
    }
    *(_DWORD *)&genGlassVertsCmd.lodParms.valid = *(_DWORD *)&rg.lodParms.valid;
    __asm
    {
      vmovups ymmword ptr [rbp+780h+genGlassVertsCmd.lodParms.clutterRamp.scale], ymm0
      vmovups xmmword ptr [rbp+780h+genGlassVertsCmd.lodParms.invFovScale], xmm1
    }
    Sys_AddWorkerCmd(WRKCMD_GENERATE_GLASS_VERTS, &genGlassVertsCmd);
  }
  v141[0] = (__int64)viewInfo;
  v141[1] = (__int64)frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_ADD_DYNAMIC_LIGHTS, v141);
  v76 = 3i64;
  if ( R_ReflectionProbeRelighting_ShouldUpdate(v66) )
  {
    _RAX = _RDI;
    _RCX = v158;
    v79 = 3i64;
    do
    {
      _RCX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (const GfxViewParmsSet *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v79;
    }
    while ( v79 );
    v159 = frontEndDataOut;
    Sys_AddWorkerCmd(WRKCMD_REFLECTION_PROBE_RELIGHTING, v158);
  }
  v142[0] = (__int64)viewInfo;
  v142[1] = (__int64)frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_REFLECTION_PROBE_BUFFER, v142);
  if ( (*((_DWORD *)v66 + 10) & 0x100) != 0 )
    R_DecalVolumeAddCommand(viewInfo, frontEndDataOut);
  sceneVolumetricCount = scene.sceneVolumetricCount;
  v85 = 0;
  v86 = 0i64;
  if ( scene.sceneVolumetricCount )
  {
    while ( v85 < 0x80 )
    {
      if ( scene.sceneVolumetricVisData[v86] == 1 )
      {
        _R8 = &frontEndDataOut->sceneVolumetrics[v85];
        v88 = 2i64;
        _RAX = &scene.sceneVolumetrics[(unsigned int)v86];
        do
        {
          _R8 = (GfxVolumetric *)((char *)_R8 + 128);
          __asm { vmovups xmm0, xmmword ptr [rax] }
          _RAX = (GfxSceneVolumetric *)((char *)_RAX + 128);
          __asm
          {
            vmovups xmmword ptr [r8-80h], xmm0
            vmovups xmm1, xmmword ptr [rax-70h]
            vmovups xmmword ptr [r8-70h], xmm1
            vmovups xmm0, xmmword ptr [rax-60h]
            vmovups xmmword ptr [r8-60h], xmm0
            vmovups xmm1, xmmword ptr [rax-50h]
            vmovups xmmword ptr [r8-50h], xmm1
            vmovups xmm0, xmmword ptr [rax-40h]
            vmovups xmmword ptr [r8-40h], xmm0
            vmovups xmm1, xmmword ptr [rax-30h]
            vmovups xmmword ptr [r8-30h], xmm1
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [r8-20h], xmm0
            vmovups xmm1, xmmword ptr [rax-10h]
            vmovups xmmword ptr [r8-10h], xmm1
          }
          --v88;
        }
        while ( v88 );
        ++v85;
        _R8->livePath = _RAX->volumetric.livePath;
        sceneVolumetricCount = scene.sceneVolumetricCount;
      }
      v86 = (unsigned int)(v86 + 1);
      if ( (unsigned int)v86 >= sceneVolumetricCount )
        goto LABEL_74;
    }
    R_WarnOncePerFrame(R_WARN_VOLUMETRIC_VOLUME_LIMIT);
  }
LABEL_74:
  frontEndDataOut->sceneVolumetricCount = v85;
  v137 = frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_VOLUMETRICS_BUFFER, &v137);
  v97 = *(LocalClientNum_t **)v136.v;
  if ( *(_BYTE *)(*(_QWORD *)v136.v + 21i64) )
  {
    R_WaitForCellStatic();
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_BSP);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_DISPATCH);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL_LODCALC);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_STATICMODEL);
    Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_SMODEL_COLLECTIONS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_SUPER_TERRAIN);
  }
  v145[0] = (__int64)viewInfo;
  v145[1] = (__int64)frontEndDataOut;
  v145[2] = (__int64)_RSI;
  Sys_AddWorkerCmd(WRKCMD_ADD_SPOT_SHADOWS, v145);
  v143[0] = (__int64)viewInfo;
  v143[1] = (__int64)frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_FINALIZE_LIGHTING, v143);
  v144[0] = (__int64)viewInfo;
  v144[1] = (__int64)frontEndDataOut;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_FRUSTUM_LIGHT_BUFFER, v144);
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    Sys_AddWorkerCmd(WRKCMD_ADD_BSP_SUNSHADOW, &viewInfo);
    Sys_AddWorkerCmd(WRKCMD_ADD_STATICMODEL_SUNSHADOW, &viewInfo);
    Sys_AddWorkerCmd(WRKCMD_ADD_SUPER_TERRAIN_SUNSHADOW, &viewInfo);
  }
  v135 = localClientNum;
  Sys_AddWorkerCmd(WRKCMD_R_CG_UPDATE_UMBRA_CMD, &v135);
  LUI_CoD_UpdateFrame(localClientNum);
  R_RTT_CopyContext(localClientNum, &frontEndDataOut->rttContext);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8070, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v98 = DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType;
  if ( !DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_frontendWaitWorkerCmdsOnlyOfType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v98);
  if ( v98->current.enabled )
  {
    for ( j = 0i64; j < 0x14; j += 4i64 )
      Sys_WaitWorkerCmdsOnlyOfType(*(WorkerCmdType *)((char *)&unk_144437A98 + j));
  }
  else
  {
    for ( k = 0i64; k < 0x14; k += 4i64 )
      Sys_WaitWorkerCmdsOfType(*(WorkerCmdType *)((char *)&unk_144437A98 + k));
  }
  v101 = v134;
  Sys_ProfBeginNamedEvent(0xFF708090, "draw all dyn ent");
  R_DrawAllDynEnt(localClientNum, viewInfo);
  Sys_ProfEndNamedEvent();
  R_AddSpotShadowDynEnts(viewInfo->clientIndex);
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 8070, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v102 = DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType;
  if ( !DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_frontendWaitWorkerCmdsOnlyOfType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v102);
  if ( v102->current.enabled )
  {
    for ( m = 0i64; m < 0x1C; m += 4i64 )
      Sys_WaitWorkerCmdsOnlyOfType(*(WorkerCmdType *)((char *)&unk_144437AB0 + m));
    v101 = v134;
  }
  else
  {
    for ( n = 0i64; n < 0x1C; n += 4i64 )
      Sys_WaitWorkerCmdsOfType(*(WorkerCmdType *)((char *)&unk_144437AB0 + n));
    v97 = *(LocalClientNum_t **)v136.v;
  }
  v105 = *((_DWORD *)v101 + 10);
  if ( (v105 & 0x200) != 0 )
  {
    DrawSystem = CgDrawSystem::GetDrawSystem(localClientNum);
    DrawSystem->PreDraw2D(DrawSystem);
    v105 = *((_DWORD *)v101 + 10);
  }
  if ( (v105 & 0x400) != 0 )
    Com_CSpline_DebugRender(localClientNum);
  Sys_ProfBeginNamedEvent(0xFF708090, "draw all scene ent");
  *(_QWORD *)&sceneEntCmd.sortSurfs = 0i64;
  sceneEntCmd.sceneModelBegin = 0;
  sceneEntCmd.sceneBrushBegin = 0;
  *(&sceneEntCmd.sceneDynBrushEnd + 1) = 0;
  sceneEntCmd.viewInfo = viewInfo;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  sceneEntCmd.sceneDObjEnd = scene.sceneDObjCount;
  __asm { vmovdqu xmmword ptr [rbp+780h+sceneEntCmd.sceneDynModelBegin], xmm0 }
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9235, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  sceneEntCmd.sceneModelEnd = scene.sceneDObjModelCount;
  sceneEntCmd.sceneBrushEnd = scene.sceneBrushCount;
  R_DrawAllSceneEnt(&sceneEntCmd);
  Sys_ProfEndNamedEvent();
  v108 = DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType;
  if ( !DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_frontendWaitWorkerCmdsOnlyOfType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v108);
  if ( v108->current.enabled )
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_ADD_SCENE_ENT);
  else
    Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_SCENE_ENT);
  Sys_AddWorkerCmd(WRKCMD_ADD_SCENE_ENT, &sceneEntCmd);
  if ( (*((_DWORD *)v101 + 10) & 0x800) != 0 && ClGameModeApplication::HasActiveApplicationGameMode() )
  {
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    ActiveClientApplication->RenderSceneCallback(ActiveClientApplication, localClientNum);
  }
  R_WaitForCellStatic();
  v110 = *((_DWORD *)v101 + 10);
  if ( (v110 & 0x1000000) != 0 )
  {
    FX_FillGenerateModelMarksCmd(*v97, &genModelMarksCmd);
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
    v110 = *((_DWORD *)v101 + 10);
  }
  if ( (v110 & 0x2000000) != 0 )
  {
    LODWORD(v134) = viewInfo->clientIndex;
    Sys_AddWorkerCmd(WRKCMD_GENERATE_GLASS_MARK_VERTS, &v134);
    v110 = *((_DWORD *)v101 + 10);
  }
  if ( (v110 & 0x100) != 0 )
    R_DecalVolumeFinalizeMarks(frontEndDataOut);
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9289, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v111 = 3i64;
  frontEndDataOut->beginReady = 1;
  _RAX = &v155;
  v153[0] = 0;
  v153[1] = localClientNum;
  v154 = v97;
  do
  {
    _RAX += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups xmm1, xmmword ptr [rsi+70h]
    }
    _RSI = (const GfxViewParms *)((char *)_RSI + 128);
    __asm
    {
      vmovups ymmword ptr [rax-80h], ymm0
      vmovups ymm0, ymmword ptr [rsi-60h]
      vmovups ymmword ptr [rax-60h], ymm0
      vmovups ymm0, ymmword ptr [rsi-40h]
      vmovups ymmword ptr [rax-40h], ymm0
      vmovups xmm0, xmmword ptr [rsi-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v111;
  }
  while ( v111 );
  _RAX = &v156;
  do
  {
    _RAX += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups xmm1, xmmword ptr [rdi+70h]
    }
    _RDI = (const GfxViewParmsSet *)((char *)_RDI + 128);
    __asm
    {
      vmovups ymmword ptr [rax-80h], ymm0
      vmovups ymm0, ymmword ptr [rdi-60h]
      vmovups ymmword ptr [rax-60h], ymm0
      vmovups ymm0, ymmword ptr [rdi-40h]
      vmovups ymmword ptr [rax-40h], ymm0
      vmovups xmm0, xmmword ptr [rdi-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v76;
  }
  while ( v76 );
  v157 = viewInfo;
  Stream_UpdateForClient(viewInfo);
  iesLookupTexture = g_worldDraw->iesLookupTexture;
  p_input = &viewInfo->input;
  if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[37] = iesLookupTexture;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_DRAWSURFS, v153);
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
  v126 = viewInfo;
  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x800000) == 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFD700, "draw 2D");
    Profile_Begin(480);
    v127 = CgDrawSystem::GetDrawSystem(localClientNum);
    CG_HudLighting_DrawBegin(localClientNum, &v126->viewParmsSet.frames[0].viewParms.camera.origin, &v126->viewParmsSet.frames[0].viewParms.camera.axis);
    v127->Draw2D(v127, &v126->viewParmsSet.frames[0].viewParms.camera.origin, &v126->viewParmsSet.frames[0].viewParms.camera.axis);
    CG_HudLighting_DrawEnd();
    Profile_EndInternal(NULL);
    Sys_ProfEndNamedEvent();
    R_IssueRenderCommandsHud2D();
  }
  Sys_WaitFrontendWorkerCmds();
  Com_ClientDObjClearSubmitted(localClientNum);
  R_LGV_KickOffPacking(frontEndDataOut);
  _RAX = viewInfo;
  __asm { vmovsd  xmm0, qword ptr [rax+100h] }
  *(float *)&_RAX = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  __asm { vmovsd  qword ptr [rsp+880h+var_820], xmm0 }
  LODWORD(v136.v[2]) = (_DWORD)_RAX;
  R_LGV_DrawVolumes(&v136);
  R_PerformanceWarningsForView(viewInfo);
  if ( (*((_DWORD *)v101 + 10) & 0x1000) != 0 )
    R_ShowCull();
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+880h+var_58+8]
    vmovaps xmm7, [rsp+880h+var_68+8]
  }
}

/*
==============
R_GenerateSortedSunShadowCacheSurfs
==============
*/
void R_GenerateSortedSunShadowCacheSurfs(GfxViewInfo *viewInfo, R_RT_Group *rtGroup, R_RT_DepthHandle *sunshadowCacheRt, R_RT_DepthHandle *sunshadowCacheBackfaceRt, D3D12_RESOURCE_STATES sunShadowCacheBeforeState)
{
  unsigned int firstCachedSunShadowPartition; 
  GfxSunShadow *p_sunShadow; 
  char *v10; 
  unsigned int v11; 
  GfxSunShadow *v12; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  char *v17; 
  unsigned int i; 

  _RDI = sunshadowCacheRt;
  _R13 = viewInfo;
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
        __asm { vmovups ymm0, ymmword ptr [rdi] }
        v14 = firstCachedSunShadowPartition - v12->firstCachedSunShadowPartition;
        v15 = 0;
        __asm { vmovups ymmword ptr [r13+6450h], ymm0 }
        v16 = 10 * v14 + 45;
        _R13->sunShadowCacheBeforeState = sunShadowCacheBeforeState;
        if ( v11 )
        {
          v17 = v10 + 2528;
          do
          {
            if ( *(v17 - 4) || *(_QWORD *)v17 || v17[8] )
              R_AddDrawCall(_R13, rtGroup, (GfxDrawListType)(v15 + v16), 0x5Du);
            ++v15;
            v17 += 864;
          }
          while ( v15 < v11 );
        }
        _RDI = sunshadowCacheRt;
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
  bool v23; 
  __int16 v24; 
  R_RT_Handle v31; 
  R_RT_ColorHandle resulta; 
  R_RT_Handle v33; 

  v9 = clientIndex;
  _RDI = result;
  if ( (unsigned int)clientIndex >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5654, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index 2\n\t%i not in [0, %i)", clientIndex, 2) )
    __debugbreak();
  v11 = v9 + 6;
  v12 = sceneWidth >> 1;
  v13 = sceneHeight >> 1;
  if ( R_RT_HaveGlobal(v11) )
  {
    _RAX = R_RT_GetGlobalColor(&resulta, v11);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi], ymm0
    }
    if ( R_RT_Handle::GetSurface(_RDI)->m_image.m_base.width == v12 && R_RT_Handle::GetSurface(_RDI)->m_image.m_base.height == v13 && R_RT_Handle::GetSurface(_RDI)->m_image.m_base.levelCount == 4 )
    {
      *needsClear = teleported;
      return _RDI;
    }
    R_SyncRenderThread();
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+118h+var_78.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v31);
      if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+118h+var_78.m_surfaceID]
        vmovups ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&resulta);
    }
    else if ( v31.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
  }
  _RAX = R_RT_CreateInternal(&v33, v12, v13, v12, v13, 1u, 1u, 4u, g_R_RT_renderTargetFmts[3], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Resolved Scene", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5681)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+118h+var_78.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v31);
    if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LOWORD(_EBX) = v31.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+118h+var_78.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LOWORD(_EBX) = v31.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+118h+var_78.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID] }
      if ( v23 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rdi], ymm0 }
  v24 = _EBX & 0x7FFF;
  if ( v24 )
    resulta.m_surfaceID = v24 | 0x8000;
  else
    resulta.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+118h+var_78.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+118h+var_78.m_tracking.m_location]
  }
  _RCX = g_R_RT_globals;
  _RAX = 32i64 * (unsigned __int8)v11;
  __asm
  {
    vmovups xmmword ptr [rsp+118h+result.baseclass_0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+118h+result.baseclass_0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rax+rcx], ymm0
  }
  *needsClear = 1;
  return _RDI;
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
  __int32 v4; 
  __int32 v5; 
  __int32 v11; 
  __int32 v12; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( memMode )
  {
    v4 = memMode - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          __asm { vmovsd  xmm7, cs:__real@3fe56ca68de7d7f8 }
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
        __asm { vmovsd  xmm7, cs:__real@3fe92c3f4d626302 }
      }
    }
    else
    {
      __asm { vmovsd  xmm7, cs:__real@3fe1318ef5664511 }
    }
  }
  else
  {
    __asm { vmovsd  xmm7, cs:__real@3fde0298ea8c7b05 }
  }
  if ( memMode )
  {
    v11 = memMode - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 || v12 == 1 )
      {
        __asm { vmovss  xmm6, cs:__real@3f6e147b }
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11458, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown LODScalePlatform") )
          __debugbreak();
        __asm { vxorps  xmm6, xmm6, xmm6 }
      }
    }
    else
    {
      __asm { vmovss  xmm6, cs:__real@3f800000 }
    }
  }
  else
  {
    __asm { vmovss  xmm6, cs:__real@3fca3d71 }
  }
  __asm { vmovsd  xmm0, cs:__real@3fe462e13057f5b3; X }
  *(double *)&_XMM0 = atan_0(*(double *)&_XMM0);
  *(double *)&_XMM0 = sin_0(*(double *)&_XMM0);
  __asm
  {
    vdivsd  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vcvtsd2ss xmm2, xmm1, xmm1
    vmulss  xmm0, xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_GetSceneSubPixelOffset
==============
*/
void R_GetSceneSubPixelOffset(const refdef_t *refdef, const GfxViewportFeatures *viewportFeatures, vec2_t *outOffset, float *cameraMotion)
{
  GfxResolutionStep step; 
  GfxResolutionStep v26; 
  PostAAMode m_postAAMode; 
  unsigned int frameCount; 
  SMAATemporalUpsampleMode SMAATemporalUpsampleMode; 
  __int32 v38; 
  __int64 v39; 
  __int64 v40; 
  vec2_t v41; 
  __int64 v42; 
  GfxViewport outSceneViewport; 
  GfxViewport v55; 
  vec2_t scale; 
  __int128 v57; 
  __int128 v58; 

  _RBX = outOffset;
  _RDI = refdef;
  if ( R_Screenshot_InterleavedMode() )
  {
    R_DisplayToSceneViewport(&outSceneViewport, &_RDI->displayViewport, _RDI->resolution.step);
    _RAX = r_screenShotPixelOffset;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm3, dword ptr [rax+28h]
      vmovss  dword ptr [rbx], xmm3
      vmovss  xmm1, dword ptr [rax+2Ch]
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  dword ptr [rbx+4], xmm1
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm4, xmm1, cs:__real@40000000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm3, xmm0
      vmulss  xmm5, xmm1, cs:__real@40000000
    }
  }
  else if ( R_PostAAHasTemporalSupersampling(viewportFeatures->m_postAAMode) )
  {
    step = _RDI->resolution.step;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
    }
    R_DisplayToSceneViewport(&v55, &_RDI->displayViewport, step);
    __asm { vmovss  xmm1, cs:__real@40000000 }
    v26 = _RDI->resolution.step;
    m_postAAMode = viewportFeatures->m_postAAMode;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm6, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm7, xmm1, xmm0
      vmovups xmm0, cs:__xmm@be8000003e8000003e800000be800000
      vmovups xmm1, cs:__xmm@000000003e80000000000000be800000
    }
    frameCount = frontEndDataOut->frameCount;
    __asm
    {
      vmovss  dword ptr [rsp+0C8h+scale], xmm6
      vmovss  dword ptr [rsp+0C8h+scale+4], xmm7
      vmovups [rsp+0C8h+var_70], xmm0
      vmovups [rsp+0C8h+var_60], xmm1
    }
    SMAATemporalUpsampleMode = R_GetSMAATemporalUpsampleMode(m_postAAMode, v26);
    if ( SMAATemporalUpsampleMode )
    {
      v38 = SMAATemporalUpsampleMode - 1;
      if ( v38 )
      {
        if ( v38 == 1 )
        {
          v39 = frameCount & 1;
          _RBX->v[0] = *((float *)&v57 + 2 * v39);
          _RBX->v[1] = *((float *)&v57 + 2 * v39 + 1);
        }
      }
      else
      {
        v40 = frameCount & 1;
        _RBX->v[0] = *((float *)&v58 + 2 * v40);
        _RBX->v[1] = *((float *)&v58 + 2 * v40 + 1);
      }
    }
    else
    {
      v41 = scale;
      v42 = frameCount & 1;
      _RBX->v[0] = *((float *)&v57 + 2 * v42);
      _RBX->v[1] = *((float *)&v57 + 2 * v42 + 1);
      DynamicSubsamplePattern(_RDI, viewportFeatures, v41, frameCount, _RBX, cameraMotion);
      if ( r_smaaQuincunx->current.enabled )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  xmm1, dword ptr [rbx+4]
          vaddss  xmm0, xmm0, cs:__real@3e800000
          vsubss  xmm2, xmm1, cs:__real@3e800000
          vmovss  dword ptr [rbx], xmm0
          vmovss  dword ptr [rbx+4], xmm2
        }
      }
    }
    _RAX = r_blur;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0B0h]; blurRadiusFromScript
      vmovss  xmm1, dword ptr [rax+28h]; blurRadiusFromDvar
    }
    *(double *)&_XMM0 = RB_UsingAAWithBlurScale(*(const float *)&_XMM0, *(const float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbx]
      vmulss  xmm0, xmm0, dword ptr [rbx+4]
      vmulss  xmm4, xmm0, xmm7
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmulss  xmm5, xmm1, xmm6
      vmovaps xmm6, [rsp+0C8h+var_38]
      vmovss  dword ptr [rbx], xmm1
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vxorps  xmm5, xmm5, xmm5
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm5
    vmovss  dword ptr [rbx+4], xmm4
  }
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
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rdx+6Ch]
  }
  _RDI = outlineInfo;
  _RBX = refdef;
  *(_QWORD *)refdef->hudOutline.scopeFriendColor.v = *(_QWORD *)outlineInfo->friendColor.v;
  refdef->hudOutline.scopeFriendColor.v[2] = outlineInfo->friendColor.v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+6Ch]
    vmovss  dword ptr [rbx+10794h], xmm0
    vucomiss xmm6, dword ptr [rdi+5Ch]
  }
  *(_QWORD *)refdef->hudOutline.scopeFoeColor.v = *(_QWORD *)outlineInfo->foeColor.v;
  refdef->hudOutline.scopeFoeColor.v[2] = outlineInfo->foeColor.v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+5Ch]
    vmovss  dword ptr [rbx+10784h], xmm0
  }
  v8 = DVARBOOL_r_hudOutlineEnable;
  if ( !DVARBOOL_r_hudOutlineEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  _RBX->hudOutline.enable = v8->current.enabled;
  v9 = DVARFLT_r_hudOutlineWidth;
  if ( !DVARFLT_r_hudOutlineWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  LODWORD(_RBX->hudOutline.width) = v9->current.integer;
  _RBX->hudOutline.depthTestInScope = _RDI->depthTest;
  _RBX->hudOutline.fillInScope = _RDI->fill;
  v10 = DVARFLT_r_hudOutlineOccludedColorFromFill;
  if ( !DVARFLT_r_hudOutlineOccludedColorFromFill && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineOccludedColorFromFill") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  LODWORD(_RBX->hudOutline.occludedColorFromFill) = v10->current.integer;
  v11 = DVARVEC4_r_hudOutlineFillColor0;
  if ( !DVARVEC4_r_hudOutlineFillColor0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineFillColor0") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  LODWORD(_RBX->hudOutline.fillColor0.v[0]) = v11->current.integer;
  _RBX->hudOutline.fillColor0.v[1] = v11->current.vector.v[1];
  _RBX->hudOutline.fillColor0.v[2] = v11->current.vector.v[2];
  _RBX->hudOutline.fillColor0.v[3] = v11->current.vector.v[3];
  v12 = DVARVEC4_r_hudOutlineFillColor1;
  if ( !DVARVEC4_r_hudOutlineFillColor1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineFillColor1") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  LODWORD(_RBX->hudOutline.fillColor1.v[0]) = v12->current.integer;
  _RBX->hudOutline.fillColor1.v[1] = v12->current.vector.v[1];
  _RBX->hudOutline.fillColor1.v[2] = v12->current.vector.v[2];
  _RBX->hudOutline.fillColor1.v[3] = v12->current.vector.v[3];
  v13 = DVARVEC4_r_hudOutlineOccludedOutlineColor;
  if ( !DVARVEC4_r_hudOutlineOccludedOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineOccludedOutlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  LODWORD(_RBX->hudOutline.occludedOutlineColor.v[0]) = v13->current.integer;
  _RBX->hudOutline.occludedOutlineColor.v[1] = v13->current.vector.v[1];
  _RBX->hudOutline.occludedOutlineColor.v[2] = v13->current.vector.v[2];
  _RBX->hudOutline.occludedOutlineColor.v[3] = v13->current.vector.v[3];
  v14 = DVARVEC4_r_hudOutlineOccludedInlineColor;
  if ( !DVARVEC4_r_hudOutlineOccludedInlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineOccludedInlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  LODWORD(_RBX->hudOutline.occludedInlineColor.v[0]) = v14->current.integer;
  _RBX->hudOutline.occludedInlineColor.v[1] = v14->current.vector.v[1];
  _RBX->hudOutline.occludedInlineColor.v[2] = v14->current.vector.v[2];
  _RBX->hudOutline.occludedInlineColor.v[3] = v14->current.vector.v[3];
  v15 = DVARVEC4_r_hudOutlineOccludedInteriorColor;
  if ( !DVARVEC4_r_hudOutlineOccludedInteriorColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineOccludedInteriorColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  LODWORD(_RBX->hudOutline.occludedInteriorColor.v[0]) = v15->current.integer;
  _RBX->hudOutline.occludedInteriorColor.v[1] = v15->current.vector.v[1];
  _RBX->hudOutline.occludedInteriorColor.v[2] = v15->current.vector.v[2];
  _RBX->hudOutline.occludedInteriorColor.v[3] = v15->current.vector.v[3];
  _RSI = DVARFLT_r_shimmerEffectTimeOff;
  if ( !DVARFLT_r_shimmerEffectTimeOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectTimeOff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  _RSI = DVARFLT_r_shimmerEffectTimeOn;
  if ( !DVARFLT_r_shimmerEffectTimeOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectTimeOn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+28h]
    vmovss  xmm0, cs:__real@3f800000
    vaddss  xmm1, xmm6, xmm3
    vdivss  xmm2, xmm0, xmm1
    vmovss  dword ptr [rbx+10840h], xmm1
    vmulss  xmm1, xmm2, xmm6
    vmulss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rbx+10844h], xmm1
    vmovss  dword ptr [rbx+10848h], xmm0
  }
  v25 = DVARFLT_r_shimmerEffectFarDistance;
  if ( !DVARFLT_r_shimmerEffectFarDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectFarDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  LODWORD(_RBX->hudOutline.shimmerTextureProperties.v[3]) = v25->current.integer;
  v26 = DVARFLT_r_shimmerEffectInteriorFillIntensityNear;
  if ( !DVARFLT_r_shimmerEffectInteriorFillIntensityNear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectInteriorFillIntensityNear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  LODWORD(_RBX->hudOutline.shimmerTextureProperties1.v[0]) = v26->current.integer;
  v27 = DVARFLT_r_shimmerEffectInteriorFillIntensityFar;
  if ( !DVARFLT_r_shimmerEffectInteriorFillIntensityFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectInteriorFillIntensityFar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  LODWORD(_RBX->hudOutline.shimmerTextureProperties1.v[1]) = v27->current.integer;
  v28 = DVARFLT_r_shimmerEffectColorAnimIntensity;
  if ( !DVARFLT_r_shimmerEffectColorAnimIntensity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectColorAnimIntensity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  *(_QWORD *)&_RBX->hudOutline.shimmerTextureProperties1.xyz.z = v28->current.unsignedInt;
  v29 = DVARFLT_r_shimmerEffectInteriorLineStrength;
  if ( !DVARFLT_r_shimmerEffectInteriorLineStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectInteriorLineStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  LODWORD(_RBX->hudOutline.shimmerTextureProperties2.v[0]) = v29->current.integer;
  v30 = DVARFLT_r_shimmerEffectExteriorLineStrength;
  if ( !DVARFLT_r_shimmerEffectExteriorLineStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_shimmerEffectExteriorLineStrength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  LODWORD(_RBX->hudOutline.shimmerTextureProperties2.v[1]) = v30->current.integer;
  *(_QWORD *)&_RBX->hudOutline.shimmerTextureProperties2.xyz.z = 0i64;
  v31 = DVARFLT_r_snapshotEffectAlphaIntensity;
  if ( !DVARFLT_r_snapshotEffectAlphaIntensity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_snapshotEffectAlphaIntensity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  LODWORD(_RBX->hudOutline.snapshotEffectProperties.v[0]) = v31->current.integer;
  _RBX->hudOutline.scopeWidth = _RDI->width;
  _RBX->hudOutline.scopeFillColor0.v[0] = _RDI->fillColor0.v[0];
  _RBX->hudOutline.scopeFillColor0.v[1] = _RDI->fillColor0.v[1];
  _RBX->hudOutline.scopeFillColor0.v[2] = _RDI->fillColor0.v[2];
  _RBX->hudOutline.scopeFillColor0.v[3] = _RDI->fillColor0.v[3];
  _RBX->hudOutline.scopeFillColor1.v[0] = _RDI->fillColor1.v[0];
  _RBX->hudOutline.scopeFillColor1.v[1] = _RDI->fillColor1.v[1];
  _RBX->hudOutline.scopeFillColor1.v[2] = _RDI->fillColor1.v[2];
  _RBX->hudOutline.scopeFillColor1.v[3] = _RDI->fillColor1.v[3];
  _RBX->hudOutline.scopeOccludedOutlineColor.v[0] = _RDI->occludedOutlineColor.v[0];
  _RBX->hudOutline.scopeOccludedOutlineColor.v[1] = _RDI->occludedOutlineColor.v[1];
  _RBX->hudOutline.scopeOccludedOutlineColor.v[2] = _RDI->occludedOutlineColor.v[2];
  _RBX->hudOutline.scopeOccludedOutlineColor.v[3] = _RDI->occludedOutlineColor.v[3];
  _RBX->hudOutline.scopeOccludedInlineColor.v[0] = _RDI->occludedInlineColor.v[0];
  _RBX->hudOutline.scopeOccludedInlineColor.v[1] = _RDI->occludedInlineColor.v[1];
  _RBX->hudOutline.scopeOccludedInlineColor.v[2] = _RDI->occludedInlineColor.v[2];
  _RBX->hudOutline.scopeOccludedInlineColor.v[3] = _RDI->occludedInlineColor.v[3];
  _RBX->hudOutline.scopeOccludedInteriorColor.v[0] = _RDI->occludedInteriorColor.v[0];
  _RBX->hudOutline.scopeOccludedInteriorColor.v[1] = _RDI->occludedInteriorColor.v[1];
  _RBX->hudOutline.scopeOccludedInteriorColor.v[2] = _RDI->occludedInteriorColor.v[2];
  _RBX->hudOutline.scopeOccludedInteriorColor.v[3] = _RDI->occludedInteriorColor.v[3];
  v32 = DVARBOOL_r_hudOutlineEnable;
  if ( !DVARBOOL_r_hudOutlineEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  _RBX->hudOutline.mode = v32->current.enabled ? 2 : 0;
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
R_InitDaltonizeOptions
==============
*/

void __fastcall R_InitDaltonizeOptions(GfxDaltonizeOptions *options, const GfxDaltonizeType mode, double intensity, const unsigned __int8 enabledTargets, const unsigned __int8 curTarget)
{
  bool v7; 
  bool enabled; 

  v7 = (enabledTargets & curTarget) != 0;
  if ( r_daltonizeForceMode->current.integer )
  {
    mode = (unsigned __int8)r_daltonizeForceMode->current.integer;
    v7 = 1;
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( mode == R_DALTONIZE_NONE || !v7 )
    __asm { vxorps  xmm2, xmm2, xmm2 }
  __asm { vcomiss xmm2, xmm0 }
  enabled = r_colorblindMode->current.enabled;
  options->m_correctionMode = R_DALTONIZE_NONE;
  if ( enabled )
  {
    options->m_enabled = 1;
    __asm { vmovss  dword ptr [rcx+4], xmm2 }
    options->m_simulationMode = enabled;
  }
  else
  {
    options->m_enabled = 0;
    __asm { vmovss  dword ptr [rcx+4], xmm2 }
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
  __int64 v8; 
  bool v9; 
  char v14; 
  char v15; 
  int v50; 
  unsigned int UsableLodForDist; 
  char v60; 
  int v62; 
  bool v63; 
  char v65; 
  char v66; 
  __int64 v74; 
  double v75; 
  __int64 v76; 
  __int64 v77; 
  double v78; 
  vec3_t out; 
  MaterialLodSettings materialLodSettings; 
  char v81; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RDI = sceneModel;
  if ( g_delayedSceneModelGlob.delayingActive )
  {
    v8 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_DWORD *)(v8 + 1728) )
      goto LABEL_8;
    v9 = *(_DWORD *)(v8 + 1724) == 0;
  }
  else
  {
    v9 = !Sys_IsMainThread();
  }
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1002, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
LABEL_8:
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1003, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_r_sceneModelAccurateLODRadiusThreshold;
  _RSI = _RDI->model;
  if ( !DCONST_DVARFLT_r_sceneModelAccurateLODRadiusThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneModelAccurateLODRadiusThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vcomiss xmm0, dword ptr [rsi+28h]
    vmovss  xmm10, dword ptr [rdi+54h]
  }
  v15 = v14;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( v14 )
  {
    QuatTransform(&_RDI->placement.base.quat, &_RSI->bounds.halfSize, &out);
    __asm
    {
      vmulss  xmm1, xmm10, dword ptr [rdi+48h]
      vaddss  xmm3, xmm1, dword ptr [rsp+0D8h+out]
      vmulss  xmm1, xmm10, dword ptr [rdi+4Ch]
      vaddss  xmm2, xmm1, dword ptr [rsp+0D8h+out+4]
      vmulss  xmm1, xmm10, dword ptr [rdi+50h]
      vaddss  xmm4, xmm1, dword ptr [rsp+0D8h+out+8]
      vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
      vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4; r_globals_t rg
      vsubss  xmm3, xmm1, xmm3
      vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8; r_globals_t rg
      vsubss  xmm2, xmm0, xmm2
      vsubss  xmm4, xmm1, xmm4
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm10, dword ptr [rsi+28h]
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vsubss  xmm1, xmm4, xmm0
      vmaxss  xmm6, xmm1, xmm9
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
      vsubss  xmm8, xmm1, dword ptr [rdi+48h]
      vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8; r_globals_t rg
      vmovss  xmm2, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4; r_globals_t rg
      vsubss  xmm7, xmm1, dword ptr [rdi+50h]
      vsubss  xmm6, xmm2, dword ptr [rdi+4Ch]
      vmovaps xmm0, xmm10; val
    }
    *(double *)&_XMM0 = I_fres(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm7, xmm7
      vaddss  xmm3, xmm3, xmm2
      vsqrtss xmm1, xmm3, xmm3
      vmulss  xmm6, xmm0, xmm1
    }
  }
  v50 = (*((_DWORD *)_RDI + 30) >> 10) & 0xFFF;
  if ( v50 != gfxCfg.entnumNone )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+54h]
      vucomiss xmm0, cs:__real@3f800000
    }
    if ( v50 != gfxCfg.entnumNone )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0D8h+var_B0], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1022, ASSERT_TYPE_ASSERT, "( ( sceneModel->placement.scale == 1.0f ) )", "( sceneModel->placement.scale ) = %g", v75) )
        __debugbreak();
    }
  }
  __asm
  {
    vmulss  xmm1, xmm6, cs:?rg@@3Ur_globals_t@@A.lodParms.ramp.scale; r_globals_t rg
    vaddss  xmm7, xmm1, cs:?rg@@3Ur_globals_t@@A.lodParms.ramp.bias; r_globals_t rg
    vmulss  xmm8, xmm6, cs:?rg@@3Ur_globals_t@@A.lodParms.cappedLodScale; r_globals_t rg
  }
  R_MDAO_ResetVolumesProcessed(_RDI);
  R_SetMaterialLodSettings(&materialLodSettings);
  if ( v15 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+54h]
      vmulss  xmm0, xmm0, dword ptr [rsi+28h]; radius
    }
  }
  __asm { vmovaps xmm1, xmm6; dist }
  *(double *)&_XMM0 = XModelGetMaterialLodForDist(*(float *)&_XMM0, *(float *)&_XMM1, &materialLodSettings);
  __asm
  {
    vmovaps xmm2, xmm8; cullDist
    vmovaps xmm1, xmm7; dist
    vmovss  dword ptr [rdi+8Ch], xmm0
  }
  UsableLodForDist = XModelGetUsableLodForDist(_RSI, *(const float *)&_XMM1, *(const float *)&_XMM2);
  v60 = UsableLodForDist;
  if ( UsableLodForDist > 0x10 )
  {
    LODWORD(v76) = 16;
    LODWORD(v74) = UsableLodForDist;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1050, ASSERT_TYPE_ASSERT, "( lod ) <= ( (1 << 4) )", "lod not in [0, XMODELDRAWINFO_LOD_LIMIT]\n\t%u not in [0, %u]", v74, v76) )
      __debugbreak();
  }
  *(_DWORD *)&_RDI->info &= 0xFFFFFFE1;
  __asm { vmovss  xmm0, dword ptr [rdi+8Ch] }
  v62 = 2 * (v60 & 0xF);
  v63 = (v62 | *(_DWORD *)&_RDI->info) == 0;
  *(_DWORD *)&_RDI->info |= v62;
  __asm
  {
    vcomiss xmm0, xmm9
    vcvttss2si rbx, xmm0
    vcomiss xmm0, cs:__real@4b800000
  }
  if ( v63 )
  {
    v65 = 1;
  }
  else
  {
    v65 = 0;
    v63 = 1;
  }
  __asm
  {
    vcomiss xmm0, xmm9
    vcomiss xmm0, cs:__real@4f800000
  }
  v66 = v63;
  if ( !v65 || !v66 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0D8h+var_A0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", (unsigned int)_RBX, v78) )
      __debugbreak();
  }
  if ( (unsigned int)_RBX > 1 )
  {
    LODWORD(v77) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v77, 1) )
      __debugbreak();
  }
  if ( (unsigned int)_RBX > 2 )
  {
    LODWORD(v76) = 2;
    LODWORD(v74) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1054, ASSERT_TYPE_ASSERT, "( materialLod ) <= ( (1 << 1) )", "materialLod not in [0, XMODELDRAWINFO_MATERIAL_LOD_LIMIT]\n\t%u not in [0, %u]", v74, v76) )
      __debugbreak();
  }
  *(_DWORD *)&_RDI->info &= 0xFFFFFFDE;
  *(_DWORD *)&_RDI->info |= (32 * (_RBX & 1)) | ((*((_DWORD *)_RDI + 30) & 0x3FF) != 0);
  _R11 = &v81;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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

unsigned int __fastcall R_LinkDObjEntity(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, double radius)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  R_FilterDObjIntoCells(localClientNum, entnum, origin, *(float *)&radius);
  R_UnlinkEntityFromPrimaryLights(localClientNum, entnum);
  __asm
  {
    vmovaps xmm3, xmm6; radius
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return R_LinkSphereEntityToPrimaryLights(localClientNum, entnum, origin, *(float *)&_XMM3);
}

/*
==============
R_LinkDObjEntity_NoCull
==============
*/

unsigned int __fastcall R_LinkDObjEntity_NoCull(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, double radius)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  R_UnlinkEntityFromPrimaryLights(localClientNum, entnum);
  __asm
  {
    vmovaps xmm3, xmm6; radius
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return R_LinkSphereEntityToPrimaryLights(localClientNum, entnum, origin, *(float *)&_XMM3);
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

  _RBX = vport;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5307, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PICTURE_IN_PICTURE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PICTURE_IN_PICTURE )") )
    __debugbreak();
  v2 = rg.pipInfoCount++;
  frontEndDataOut->pipInfoCount = rg.pipInfoCount;
  frontEndDataOut->viewInfoIndex = v2 + 5;
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  _RDX = 25744i64 * (v2 + 5);
  _RCX = frontEndDataOut->viewInfo;
  __asm { vmovups xmmword ptr [rdx+rcx+4B0h], xmm0 }
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

void __fastcall R_PackScriptedColorEmissive(base_vec4_t<unsigned int> *outScriptablePackedColorEmissive, const GfxSceneEntityMutableShaderData *sceneEntityMutableShaderData, double _XMM2_8)
{
  unsigned int v15; 

  _EAX = -1;
  __asm
  {
    vmovd   xmm0, eax
    vpmovzxbd xmm1, xmm0
    vcvtdq2ps xmm3, xmm1
    vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
    vcvtps2ph xmm1, xmm0, 0
    vmovups xmmword ptr [rcx], xmm1
    vxorps  xmm0, xmm0, xmm0
  }
  outScriptablePackedColorEmissive->v[2] = 2015232960;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3b808081
    vxorps  xmm2, xmm2, xmm2
    vinsertps xmm2, xmm2, xmm1, 0
    vcvtps2ph xmm0, xmm2, 0
    vmovss  [rsp+18h+var_18], xmm0
  }
  outScriptablePackedColorEmissive->v[3] = v15;
}

/*
==============
R_PerformanceWarningsForView
==============
*/
void R_PerformanceWarningsForView(const GfxViewInfo *viewInfo)
{
  const char *v4; 
  const GfxBackEndData *data; 
  __int64 spotShadowUpdateCount; 
  char v10; 
  const char *VariantString; 
  char v26[8]; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  char text[8]; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  char dest[64]; 

  _RBX = viewInfo;
  if ( viewInfo->motionBlur.enabled )
  {
    __asm { vmovss  xmm1, cs:__real@43960000; ypos }
    R_PerformanceWarning("MBLUR-HQ", *(float *)&_XMM1);
  }
  if ( R_Blur_Enabled(_RBX) )
  {
    __asm { vmovss  xmm1, cs:__real@43a00000; ypos }
    R_PerformanceWarning("BLUR", *(float *)&_XMM1);
  }
  if ( R_Lens_GetEnabled(_RBX) && R_Lens_GetScopeEnabled(_RBX) )
  {
    v4 = "LENS & SCOPE";
  }
  else if ( R_Lens_GetEnabled(_RBX) )
  {
    v4 = "LENS";
  }
  else
  {
    if ( !R_Lens_GetScopeEnabled(_RBX) )
      goto LABEL_13;
    v4 = "SCOPE";
  }
  __asm { vmovss  xmm1, cs:__real@43be0000; ypos }
  R_PerformanceWarning(v4, *(float *)&_XMM1);
LABEL_13:
  if ( R_DOF_GetEnabled(_RBX) )
  {
    __asm { vmovss  xmm1, cs:__real@43b40000; ypos }
    R_PerformanceWarning("DOF", *(float *)&_XMM1);
  }
  if ( (*((_BYTE *)&_RBX->viewportFeatures + 44) & 4) != 0 )
  {
    __asm { vmovss  xmm1, cs:__real@44020000; ypos }
    R_PerformanceWarning("SUN SHADOW", *(float *)&_XMM1);
  }
  data = _RBX->input.data;
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  v10 = 0;
  if ( (_DWORD)spotShadowUpdateCount )
  {
    Com_sprintf<64>((char (*)[64])dest, "SPOT SHADOW : %d / %d", spotShadowUpdateCount, data->spotShadowUpdateLimit);
    __asm { vmovss  xmm1, cs:__real@44070000; ypos }
    R_PerformanceWarning(dest, *(float *)&_XMM1);
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3e800000
    vcomiss xmm0, dword ptr [rbx+3C48h]
  }
  if ( v10 )
  {
    __asm
    {
      vmovss  xmm3, cs:?rg@@3Ur_globals_t@@A.sunSampleSizeNear; r_globals_t rg
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    *(_QWORD *)text = 0i64;
    v35 = 0i64;
    v36 = 0i64;
    v37 = 0i64;
    v38 = 0i64;
    v39 = 0i64;
    v40 = 0i64;
    v41 = 0i64;
    Com_sprintf(text, 0x40ui64, "sm_sunSampleSizeNear: %0.2f", *(double *)&_XMM3);
    __asm { vmovss  xmm1, cs:__real@440c0000; ypos }
    R_PerformanceWarning(text, *(float *)&_XMM1);
  }
  if ( sm_dynlightAllSModels->current.enabled )
  {
    __asm { vmovss  xmm1, cs:__real@44110000; ypos }
    R_PerformanceWarning("sm_dynlightAllSModels", *(float *)&_XMM1);
  }
  if ( r_ssao && r_ssao->current.enabled )
  {
    *(_QWORD *)v26 = 0i64;
    v27 = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    v30 = 0i64;
    v31 = 0i64;
    v32 = 0i64;
    v33 = 0i64;
    VariantString = Dvar_GetVariantString("MNRQQOMSMM");
    if ( VariantString && *VariantString )
      Com_sprintf(v26, 0x40ui64, (const char *)&queryFormat, VariantString);
    else
      Com_sprintf(v26, 0x40ui64, "SSAO: %d", r_ssao->current.unsignedInt);
    __asm { vmovss  xmm1, cs:__real@441b0000; ypos }
    R_PerformanceWarning(v26, *(float *)&_XMM1);
  }
  if ( frontEndDataOut->reflectionProbeRelightingData.reflectionProbeRelightingIndex != -1 )
  {
    __asm { vmovss  xmm1, cs:__real@44160000; ypos }
    R_PerformanceWarning("REFPROBE RELIGHT", *(float *)&_XMM1);
  }
  if ( R_VOL_AnyVisible(_RBX) )
  {
    __asm { vmovss  xmm1, cs:__real@44200000; ypos }
    R_PerformanceWarning("VOLUMETRICS", *(float *)&_XMM1);
  }
  if ( rg.vrsEmissiveOnly )
  {
    __asm { vmovss  xmm1, cs:__real@44250000; ypos }
    R_PerformanceWarning("Emissive Half MS", *(float *)&_XMM1);
  }
  if ( rg.halfResEmissive )
  {
    __asm { vmovss  xmm1, cs:__real@44250000; ypos }
    R_PerformanceWarning("Emissive Half BI", *(float *)&_XMM1);
  }
  if ( (_RBX->matRenderFeatures & 1) != 0 )
  {
    __asm { vmovss  xmm1, cs:__real@43f00000; ypos }
    R_PerformanceWarning("REFRACTION", *(float *)&_XMM1);
  }
  if ( (_RBX->matRenderFeatures & 2) != 0 )
  {
    __asm { vmovss  xmm1, cs:__real@43fa0000; ypos }
    R_PerformanceWarning("SSR / FX DISTORT", *(float *)&_XMM1);
  }
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
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  __int64 localClientNum; 
  char v12; 
  bool v15; 
  bool v16; 
  bool v17; 
  __int64 v29; 
  __int64 v30; 
  __int64 v38; 
  char v45; 
  bool v46; 
  __int16 Flags; 
  int v48; 
  int v49; 
  GfxViewParmsSet *p_viewParmsSet; 
  __int64 v51; 
  __int64 v54; 
  __int64 v62; 
  int DynamicOmniLight; 
  int DynamicSpotLight; 
  __int64 v94; 
  unsigned int *scriptIndex; 
  unsigned int *scriptIndexa; 
  unsigned int *permutationOverride; 
  GfxSceneParms *m_ptr; 
  GfxViewParmsSet *v117; 
  vec3_t outOrg; 
  __int64 v119; 
  Mem_LargeLocal v120; 
  GfxViewParms viewParms; 
  GfxViewportFeatures features; 
  GfxSceneViewParms outOffset; 
  GfxCamera camera; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mtx; 
  GfxViewParmsSet viewParmsSet; 
  char v129; 
  void *retaddr; 

  _RAX = &retaddr;
  v119 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RSI = refdef;
  R_SetupViewportFeatures(viewportFeaturesRequest, &features);
  v8 = *((_DWORD *)&features + 11) & 0xFFFFFDFF | (R_GpuLightGrid_DataAvailable() << 9);
  *((_DWORD *)&features + 11) = v8;
  v9 = 0;
  if ( !fx_gpu_lighting->current.enabled || (v10 = 1024, s_world.voxelTreeCount <= 0) )
    v10 = 0;
  *((_DWORD *)&features + 11) = v10 | v8 & 0xFFFFFBFF;
  localClientNum = _RSI->localClientNum;
  Mem_LargeLocal::Mem_LargeLocal(&v120, 0xAE8ui64, "GfxSceneParms sceneParms");
  _R15 = (GfxSceneParms *)v120.m_ptr;
  m_ptr = (GfxSceneParms *)v120.m_ptr;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rsi+10h]
  }
  if ( !v12 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10703, ASSERT_TYPE_ASSERT, "(refdef->view.tanHalfFovX > 0)", (const char *)&queryFormat, "refdef->view.tanHalfFovX > 0");
    v12 = 0;
    if ( v15 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rsi+14h] }
  if ( !v12 )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10704, ASSERT_TYPE_ASSERT, "(refdef->view.tanHalfFovY > 0)", (const char *)&queryFormat, "refdef->view.tanHalfFovY > 0");
    v12 = 0;
    if ( v16 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rsi+4Ch] }
  if ( !v12 )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10705, ASSERT_TYPE_ASSERT, "(refdef->view.depthHackFov.tanHalfFovX > 0.0f)", (const char *)&queryFormat, "refdef->view.depthHackFov.tanHalfFovX > 0.0f");
    v12 = 0;
    if ( v17 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rsi+50h] }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10706, ASSERT_TYPE_ASSERT, "(refdef->view.depthHackFov.tanHalfFovY > 0.0f)", (const char *)&queryFormat, "refdef->view.depthHackFov.tanHalfFovY > 0.0f") )
    __debugbreak();
  if ( !_RSI->displayViewport.height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10707, ASSERT_TYPE_ASSERT, "(refdef->displayViewport.height > 0)", (const char *)&queryFormat, "refdef->displayViewport.height > 0") )
    __debugbreak();
  if ( !_RSI->displayViewport.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10708, ASSERT_TYPE_ASSERT, "(refdef->displayViewport.width > 0)", (const char *)&queryFormat, "refdef->displayViewport.width > 0") )
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
  RefdefView_GetOrg(&_RSI->view, &rg.viewOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir, xmm0; r_globals_t rg
    vmovss  xmm1, dword ptr [rsi+28h]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir+4, xmm1; r_globals_t rg
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vmovss  dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir+8, xmm0; r_globals_t rg
  }
  R_SetCameraForView(&_RSI->view, &camera);
  MatrixForViewerOrthogonal(&camera.origin, &camera.axis, &mtx);
  __asm
  {
    vmovss  xmm2, [rbp+730h+camera.zPlanes+8]; zNear
    vmovss  xmm1, dword ptr [rbp+730h+camera.___u3]; tanHalfFovY
    vmovss  xmm0, dword ptr [rbp+730h+camera.___u2]; tanHalfFovX
  }
  InfinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixCopy44(&out, &rg.viewProjMatrix);
  __asm
  {
    vmovss  xmm2, [rbp+730h+camera.zPlanes]; zNear
    vmovss  xmm1, dword ptr [rbp+730h+camera.___u3]; tanHalfFovY
    vmovss  xmm0, dword ptr [rbp+730h+camera.___u2]; tanHalfFovX
  }
  InfinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixCopy44(&out, &rg.viewProjMatrixDepthHack);
  R_GetSceneSubPixelOffset(_RSI, &features, &outOffset.subpixelOffset, &outOffset.cameraMotion);
  R_SetViewParmsForScene(_RSI, &outOffset, &viewParms);
  _RAX = &viewParmsSet;
  _RCX = &viewParms;
  v29 = 3i64;
  v30 = 3i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rax+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
    }
    _RAX = (GfxViewParmsSet *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    _RCX = (GfxViewParms *)((char *)_RCX + 128);
    --v30;
  }
  while ( v30 );
  R_SetViewParmsForScene(_RSI, NULL, &viewParms);
  _RAX = &viewParmsSet.frames[2];
  _RCX = &viewParms;
  v38 = 3i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rax+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
    }
    _RAX = (GfxViewParmsSet::Frame *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    _RCX = (GfxViewParms *)((char *)_RCX + 128);
    --v38;
  }
  while ( v38 );
  R_SetSceneParms(_RSI, _R15);
  R_AssignSceneParmsViewports(_R15, _RSI, *((_BYTE *)&features + 40) & 1, _RSI->resolution.step);
  _R15->drawType = drawType;
  *(double *)&_XMM0 = R_GetDisplayBlacklevel((*((_WORD *)&features + 20) & 0x4000) != 0);
  __asm { vmovss  dword ptr [r15+7FCh], xmm0 }
  _R15->ssrFade = _RSI->ssrFade;
  if ( (*((_BYTE *)&features + 40) & 1) != 0 )
  {
    R_DisplayToSceneViewport(&_R15->ssrSourceSceneViewport, &_RSI->ssrSourceDisplayViewport, _RSI->resolution.step);
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+334h]
      vmovups xmmword ptr [r15+318h], xmm0
    }
  }
  RefdefView_GetOrg(&_RSI->view, &outOrg);
  R_UpdateActiveStage(rgp.world->primaryLights, &_R15->stageInfo, &outOrg);
  v45 = *((_BYTE *)&features + 40);
  if ( (*((_BYTE *)&features + 40) & 4) != 0 && !(_DWORD)localClientNum )
  {
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10788, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    R_LightTweak_Update(rgp.world->primaryLights, &_R15->stageInfo);
    v45 = *((_BYTE *)&features + 40);
  }
  if ( (v45 & 0x10) != 0 )
  {
    if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10795, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    R_UpdateFrameSun(rgp.world->primaryLights, &features, &_R15->stageInfo);
  }
  v46 = R_TG_SetScript(_R15->maxSceneRtWidth, _R15->maxSceneRtHeight, vidConfig.displayWidth, vidConfig.displayHeight, &features, &features.m_taskGraphIndex, &features.m_taskGraphPermutation);
  *((_DWORD *)&features + 11) = *((_DWORD *)&features + 11) & 0xFFFFFEFF | (v46 << 8);
  if ( (*((_WORD *)&features + 22) & 0x100) != 0 )
  {
    Flags = R_TG_GetFlags(&features);
    v48 = -1;
    if ( (Flags & 0x80u) == 0 || (v49 = -1, features.m_taskGraphIndex == -1) )
      v49 = -536870913;
    *((_DWORD *)&features + 10) = (*((_DWORD *)&features + 10) ^ (*((_WORD *)&features + 20) ^ (unsigned __int16)(8 * Flags)) & 0x100) & v49 & (((features.m_taskGraphIndex != -1) << 30) | 0xBFFFFFFF);
    if ( (Flags & 0x100) == 0 || features.m_taskGraphIndex == -1 )
      v48 = -131073;
    *((_DWORD *)&features + 11) &= v48;
  }
  if ( scene.def.time != _RSI->time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10818, ASSERT_TYPE_ASSERT, "(scene.def.time == refdef->time)", (const char *)&queryFormat, "scene.def.time == refdef->time") )
    __debugbreak();
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10820, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  p_viewParmsSet = &viewParmsSet;
  if ( r_lockPvs->current.enabled )
    p_viewParmsSet = (GfxViewParmsSet *)&lockPvsViewParms;
  v117 = p_viewParmsSet;
  if ( (unsigned __int64)(int)features.m_viewportType >= R_VIEWPORT_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10824, ASSERT_TYPE_ASSERT, "(viewportFeatures.m_viewportType < ( sizeof( *array_counter( g_previousFrameViewParmsIsValid[0] ) ) + 0 ))", (const char *)&queryFormat, "viewportFeatures.m_viewportType < ARRAY_COUNT( g_previousFrameViewParmsIsValid[0] )") )
    __debugbreak();
  outOffset.subpixelOffset = (vec2_t)(2 * localClientNum);
  v51 = 2 * localClientNum + (int)features.m_viewportType;
  if ( !g_previousFrameViewParmsIsValid[0][v51] )
  {
    _RCX = (char *)g_previousFrameViewParms + 384 * v51;
    _RAX = &viewParmsSet;
    v54 = 3i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rcx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rcx+40h], ymm0
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX += 128;
      __asm
      {
        vmovups xmm1, xmmword ptr [rax+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _RAX = (GfxViewParmsSet *)((char *)_RAX + 128);
      --v54;
    }
    while ( v54 );
    g_previousFrameViewParmsIsValid[0][v51] = 1;
  }
  _RCX = (char *)g_previousFrameViewParms + 384 * v51;
  _RAX = &viewParmsSet.frames[1];
  v62 = 3i64;
  do
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rax], ymm0
      vmovups ymm0, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rax+20h], ymm0
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rax+40h], ymm0
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rax+60h], xmm0
    }
    _RAX = (GfxViewParmsSet::Frame *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    _RCX += 128;
    --v62;
  }
  while ( v62 );
  if ( _RSI->radiantLiveLightCount )
  {
    _R15 = 0x140000000ui64;
    do
    {
      _RBX = &_RSI->radiantLiveLights[v9];
      if ( _RBX->type == 2 )
      {
        DynamicSpotLight = R_AllocateDynamicSpotLight();
        if ( DynamicSpotLight >= 0 )
        {
          _RDI = DynamicSpotLight;
          _RCX = &scene.dynamicSpotLight[_RDI].debugColorGammaSrgb;
          _RCX->v[0] = _RSI->radiantLiveLights[v9].colorLinearSrgb.v[0];
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+18h]
            vmovss  dword ptr [rcx+4], xmm0
            vmovss  xmm1, dword ptr [rbx+1Ch]
            vmovss  dword ptr [rcx+8], xmm1
          }
          LinearToGammaColor_Srgb(&scene.dynamicSpotLight[_RDI].debugColorGammaSrgb);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rdi+r15+13EE4490h], ymm0
            vmovups ymm1, ymmword ptr [rbx+20h]
            vmovups ymmword ptr [rdi+r15+13EE44B0h], ymm1
            vmovups ymm0, ymmword ptr [rbx+40h]
            vmovups ymmword ptr [rdi+r15+13EE44D0h], ymm0
            vmovups ymm1, ymmword ptr [rbx+60h]
            vmovups ymmword ptr [rdi+r15+13EE44F0h], ymm1
            vmovups xmm0, xmmword ptr [rbx+80h]
            vmovups xmmword ptr [rdi+r15+13EE4510h], xmm0
            vmovsd  xmm1, qword ptr [rbx+90h]
            vmovsd  qword ptr [rdi+r15+13EE4520h], xmm1
          }
        }
      }
      else if ( _RBX->type == 3 )
      {
        DynamicOmniLight = R_AllocateDynamicOmniLight();
        if ( DynamicOmniLight >= 0 )
        {
          _RDI = DynamicOmniLight;
          _RCX = &scene.dynamicOmniLight[_RDI].debugColorGammaSrgb;
          _RCX->v[0] = _RSI->radiantLiveLights[v9].colorLinearSrgb.v[0];
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+18h]
            vmovss  dword ptr [rcx+4], xmm0
            vmovss  xmm1, dword ptr [rbx+1Ch]
            vmovss  dword ptr [rcx+8], xmm1
          }
          LinearToGammaColor_Srgb(&scene.dynamicOmniLight[_RDI].debugColorGammaSrgb);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rdi+r15+13EE90A0h], ymm0
            vmovups ymm1, ymmword ptr [rbx+20h]
            vmovups ymmword ptr [rdi+r15+13EE90C0h], ymm1
            vmovups ymm0, ymmword ptr [rbx+40h]
            vmovups ymmword ptr [rdi+r15+13EE90E0h], ymm0
            vmovups ymm1, ymmword ptr [rbx+60h]
            vmovups ymmword ptr [rdi+r15+13EE9100h], ymm1
            vmovups xmm0, xmmword ptr [rbx+80h]
            vmovups xmmword ptr [rdi+r15+13EE9120h], xmm0
            vmovsd  xmm1, qword ptr [rbx+90h]
            vmovsd  qword ptr [rdi+r15+13EE9130h], xmm1
          }
          if ( _RSI->radiantLiveLights[v9].canUseShadowMap )
            R_CalcSpotLightPlanesAndBoundingBox(&_RSI->radiantLiveLights[v9], (vec4_t (*)[6])scene.dynamicOmniLight[_RDI].planes, &scene.dynamicOmniLight[_RDI].bounds);
        }
      }
      ++v9;
    }
    while ( v9 < _RSI->radiantLiveLightCount );
    _R15 = m_ptr;
    p_viewParmsSet = v117;
  }
  _RCX = &_R15->hudOutline;
  _RAX = &_RSI->hudOutline;
  v94 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (GfxHudOutlineState *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RAX = (GfxHudOutlineState *)((char *)_RAX + 128);
    --v94;
  }
  while ( v94 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  *(_QWORD *)&_RCX->scopeFoeColor.xyz.z = *(_QWORD *)&_RAX->scopeFoeColor.xyz.z;
  if ( scene.hudOutlineMasked != (unsigned __int8)v94 && _RSI->hudOutline.mode == 2 )
    _R15->hudOutline.mode = 3;
  R_GenerateSortedDrawSurfs((LocalClientNum_t)localClientNum, _R15, (const GfxViewParms *)p_viewParmsSet, &viewParmsSet, &features);
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
    _RAX = (char *)g_previousFrameViewParms + 384 * *(_QWORD *)&outOffset.subpixelOffset + 384 * features.m_viewportType;
    _RDX = &viewParmsSet;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdx]
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rdx+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rdx+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups xmm0, xmmword ptr [rdx+60h]
        vmovups xmmword ptr [rax+60h], xmm0
      }
      _RAX += 128;
      __asm
      {
        vmovups xmm1, xmmword ptr [rdx+70h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      _RDX = (GfxViewParmsSet *)((char *)_RDX + 128);
      --v29;
    }
    while ( v29 );
  }
  Profile_EndCSV(8);
  Profile_EndInternal(NULL);
  if ( (*((_WORD *)&features + 20) & 0x100) != 0 )
    R_DrawDecalVolumesDebug(frontEndDataOut, (const GfxViewParms *)&viewParmsSet, _R15->displayViewport.width, _R15->displayViewport.height);
  R_ReflectionProbe_ShowStats(frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].input.data, (const GfxViewParms *)&viewParmsSet, _R15->displayViewport.width, _R15->displayViewport.height);
  memset(&outOrg, 0, sizeof(outOrg));
  Mem_LargeLocal::~Mem_LargeLocal(&v120);
  _R11 = &v129;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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

  _RBX = sphere;
  if ( sceneLightIndex < rgp.world->primaryLightCount )
    return R_PrimaryLightFrustumTestSphere(sceneLightIndex, sphere);
  v4 = R_SceneLightIndexToDynLightIndex(sceneLightIndex);
  v5 = v4;
  if ( v4 >= scene.addedDynamicLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11321, ASSERT_TYPE_ASSERT, "(dynLightIndex < scene.addedDynamicLightCount)", (const char *)&queryFormat, "dynLightIndex < scene.addedDynamicLightCount") )
    __debugbreak();
  __asm { vmovss  xmm2, dword ptr [rbx+0Ch]; radius }
  return R_SphereInPlanes((const vec4_t (*)[6])scene.sceneDynamicLight[v5]->planes, &_RBX->origin, *(const float *)&_XMM2) != 0;
}

/*
==============
R_SceneSetupWeaponScope
==============
*/
void R_SceneSetupWeaponScope(const GfxScopeInfo *scope)
{
  _RBX = scope;
  if ( r_scope_tweak->current.enabled )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+4]
      vmovsd  qword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensPos, xmm0; GfxScene scene
    }
    scene.scope.scopeLensPos.v[2] = scope->scopeLensPos.v[2];
    MatrixCopy33(&scope->scopeLensAxis, &scene.scope.scopeLensAxis);
    _RAX = r_scope_inner;
    _RDI = DCONST_DVARFLT_r_scope_relief_hip_movement_scale;
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
    _RAX = r_scope_inner_mag;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensInnerDisk, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_outer;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensInnerDiskMag, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_outer_mag;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensOuterRing, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_radius;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensOuterRingMag, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_fade_start;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensRadius, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_fade_end;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensFadeStart, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_color_red;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensFadeEnd, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_color_green;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensColorRed, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_color_blue;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensColorGreen, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_color_brightness;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensColorBlue, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_focus;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeLensBrightness, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_focus_scale;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_focusDistance, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_outoffocus;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_focuseUVScale, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_outoffocus_scale;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_outOfFocusDistance, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_movement_scale_min;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_outOfFocuseUVScale, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_movement_scale_max;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_idleMovementScale, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_movement_clamp;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_fullSpeedMovementScale, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_maxMovement, xmm1; GfxScene scene
    }
    if ( !DCONST_DVARFLT_r_scope_relief_hip_movement_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scope_relief_hip_movement_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_r_scope_relief_hip_movement_clamp;
    __asm { vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_hipMovementScale, xmm0; GfxScene scene }
    if ( !DCONST_DVARFLT_r_scope_relief_hip_movement_clamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scope_relief_hip_movement_clamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    _RAX = r_scope_relief_sway_freq_min;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_hipMaxMovement, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_sway_amount_min;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_idleSway_freq, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_sway_freq_max;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_idleSway_movement, xmm0; GfxScene scene
      vmovss  xmm1, dword ptr [rax+28h]
    }
    _RAX = r_scope_relief_sway_amount_max;
    __asm
    {
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_fullSpeedSway_freq, xmm1; GfxScene scene
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_fullSpeedSway_movement, xmm0; GfxScene scene
    }
    scene.scope.adsSmoothFade = _RBX->adsSmoothFade;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+64h]
      vmovups xmmword ptr cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeOutFrac, xmm0; GfxScene scene
    }
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    _RCX = &scene.scope;
    __asm
    {
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rbx+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rbx+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rbx+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rbx+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rbx+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
      vmovups xmm0, xmmword ptr [rbx+70h]
      vmovups xmmword ptr [rcx+70h], xmm0
      vmovups xmm1, xmmword ptr [rbx+80h]
      vmovups xmmword ptr [rcx+80h], xmm1
      vmovups xmm0, xmmword ptr [rbx+90h]
      vmovups xmmword ptr [rcx+90h], xmm0
      vmovups xmm1, xmmword ptr [rbx+0A0h]
      vmovups xmmword ptr [rcx+0A0h], xmm1
      vmovups xmm0, xmmword ptr [rbx+0B0h]
      vmovups xmmword ptr [rcx+0B0h], xmm0
    }
    scene.scope.dofPhysicalFocusDistance = _RBX->dofPhysicalFocusDistance;
  }
}

/*
==============
R_ScopeDistortionTransform
==============
*/
void R_ScopeDistortionTransform(const GfxViewInfo *viewInfo, const vec2_t *screenPos, vec2_t *screenPosOut)
{
  *screenPosOut = *screenPos;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps [rsp+68h+var_58], xmm10
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, rax
    vsubss  xmm1, xmm0, xmm9
    vmovss  xmm0, dword ptr [rdx+4]
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, rax
    vdivss  xmm3, xmm1, xmm10
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vsubss  xmm2, xmm0, xmm1
    vmovups xmm0, xmmword ptr [rcx+2330h]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm4, xmm2, xmm1
    vmovups [rsp+68h+var_68], xmm0
  }
  if ( viewInfo->scopeLensDistortionEnabled )
  {
    __asm { vcomiss xmm3, dword ptr [rsp+68h+var_68] }
    if ( viewInfo->scopeLensDistortionEnabled )
      __asm { vcomiss xmm3, dword ptr [rsp+68h+var_68+8] }
  }
  __asm
  {
    vmovaps xmm9, [rsp+68h+var_48]
    vmovaps xmm10, [rsp+68h+var_58]
  }
}

/*
==============
R_SetCameraForView
==============
*/
void R_SetCameraForView(const RefdefView *view, GfxCamera *camera)
{
  char v6; 
  char v9; 
  bool v13; 
  bool v15; 
  bool v16; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = camera;
  _RDI = view;
  RefdefView_GetOrg(view, &camera->origin);
  AxisCopy(&_RDI->axis, &_RBX->axis);
  _RBX->tanHalfFovX = _RDI->fov.tanHalfFovX;
  _RBX->tanHalfFovY = _RDI->fov.tanHalfFovY;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+3Ch]
    vmovsd  qword ptr [rbx+38h], xmm0
  }
  Dvar_GetVec4_Internal(r_zPlanes, (vec4_t *)_RBX->zPlanes);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
  }
  if ( !v9 )
  {
    __asm
    {
      vmovss  dword ptr [rbx+48h], xmm0
      vmovss  xmm0, dword ptr [rdi+38h]
      vaddss  xmm1, xmm0, cs:__real@34000000
      vmaxss  xmm2, xmm1, dword ptr [rbx+4Ch]
      vmovss  dword ptr [rbx+4Ch], xmm2
    }
  }
  __asm { vcomiss xmm6, dword ptr [rbx+40h] }
  if ( !v6 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3653, ASSERT_TYPE_ASSERT, "(camera->zPlanes[R_ZPLANES_VIEWMODEL_ZNEAR] > 0.0f)", (const char *)&queryFormat, "camera->zPlanes[R_ZPLANES_VIEWMODEL_ZNEAR] > 0.0f");
    v6 = 0;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vcomiss xmm0, dword ptr [rbx+44h]
  }
  if ( !v6 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3654, ASSERT_TYPE_ASSERT, "(camera->zPlanes[R_ZPLANES_VIEWMODEL_ZFAR] > camera->zPlanes[R_ZPLANES_VIEWMODEL_ZNEAR])", (const char *)&queryFormat, "camera->zPlanes[R_ZPLANES_VIEWMODEL_ZFAR] > camera->zPlanes[R_ZPLANES_VIEWMODEL_ZNEAR]");
    v6 = 0;
    if ( v15 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rbx+48h] }
  if ( !v6 )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3655, ASSERT_TYPE_ASSERT, "(camera->zPlanes[R_ZPLANES_SCENE_ZNEAR] > 0.0f)", (const char *)&queryFormat, "camera->zPlanes[R_ZPLANES_SCENE_ZNEAR] > 0.0f");
    v6 = 0;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vcomiss xmm0, dword ptr [rbx+4Ch]
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3656, ASSERT_TYPE_ASSERT, "(camera->zPlanes[R_ZPLANES_SCENE_ZFAR] > camera->zPlanes[R_ZPLANES_SCENE_ZNEAR])", (const char *)&queryFormat, "camera->zPlanes[R_ZPLANES_SCENE_ZFAR] > camera->zPlanes[R_ZPLANES_SCENE_ZNEAR]") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  _RBX->focalLength = _RDI->focalLength;
  _RBX->visibilityOffset.v[0] = _RDI->visibilityOffset.v[0];
  _RBX->visibilityOffset.v[1] = _RDI->visibilityOffset.v[1];
  _RBX->visibilityOffset.v[2] = _RDI->visibilityOffset.v[2];
  _RBX->visibilityQueryDistance = _RDI->visibilityQueryDistance;
  _RBX->visibilityOffsetApplyToRefPoint = _RDI->visibilityOffsetApplyToRefPoint;
}

/*
==============
R_SetEntityShaderData
==============
*/

void __fastcall R_SetEntityShaderData(GfxPackedEntityData *rawEntityShaderData, const GfxSceneEntityMutableShaderData *sceneEntityMutableShaderData, double distanceToCamera, const Bounds *bounds, unsigned int entNum, bool useDepthHack)
{
  GfxPackedEntityData *v18; 
  tmat44_t<vec4_t> *p_viewProjMatrixDepthHack; 
  int v23; 
  char v55; 
  char v56; 
  int v80; 
  unsigned int v83; 
  unsigned int v86; 
  int v89; 
  unsigned int color; 
  __int64 v91; 
  int v95; 
  unsigned int *albedoMapScaleBias; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  __int64 v101; 
  int v102; 
  int v103; 
  int v104; 
  __int64 v113; 
  __int64 v114; 
  __int64 v115; 
  unsigned int blendMapChannels; 
  __int64 v141; 
  unsigned int v142; 
  int v143; 
  __int64 v144; 
  int v145; 
  vec4_t vec; 
  vec4_t out; 
  void *retaddr; 

  if ( rawEntityShaderData )
  {
    _R11 = &retaddr;
    __asm { vmovaps xmmword ptr [r11-0C8h], xmm14 }
    _RDI = bounds;
    _RSI = sceneEntityMutableShaderData;
    v18 = rawEntityShaderData;
    __asm { vmovaps xmm14, xmm2 }
    if ( sceneEntityMutableShaderData && sceneEntityMutableShaderData->dataCount <= 8u )
    {
      p_viewProjMatrixDepthHack = &rg.viewProjMatrixDepthHack;
      if ( !useDepthHack )
        p_viewProjMatrixDepthHack = &rg.viewProjMatrix;
      __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
      _ER15 = 0;
      __asm
      {
        vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovaps xmmword ptr [r11-58h], xmm7
      }
      v23 = 0;
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vmovaps xmmword ptr [r11-68h], xmm8
        vmovss  xmm8, cs:__real@7f7fffff
        vmovaps xmmword ptr [r11-78h], xmm9
        vmovss  xmm9, cs:__real@ff7fffff
        vmovaps xmmword ptr [r11-88h], xmm10
        vmovaps xmmword ptr [r11-98h], xmm11
        vmovaps xmmword ptr [r11-0A8h], xmm12
        vmovaps xmmword ptr [r11-0B8h], xmm13
        vmovss  xmm13, cs:__real@3c23d70a
        vmovaps xmm10, xmm8
        vmovaps xmm11, xmm9
        vxorps  xmm12, xmm12, xmm12
      }
      do
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rdi+0Ch]
          vxorps  xmm3, xmm4, xmm6
          vmovd   xmm1, r15d
        }
        _EAX = v23 & 1;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm1, xmm4, xmm3, xmm2
          vaddss  xmm0, xmm1, dword ptr [rdi]
          vmovss  xmm4, dword ptr [rdi+10h]
          vmovss  dword ptr [rsp+158h+vec], xmm0
          vmovd   xmm1, r15d
          vxorps  xmm3, xmm4, xmm6
        }
        _EAX = v23 & 2;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm1, xmm4, xmm3, xmm2
          vaddss  xmm0, xmm1, dword ptr [rdi+4]
          vmovss  xmm4, dword ptr [rdi+14h]
          vmovss  dword ptr [rsp+158h+vec+4], xmm0
          vmovd   xmm1, r15d
        }
        _EAX = v23 & 4;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vxorps  xmm3, xmm4, xmm6
          vblendvps xmm1, xmm4, xmm3, xmm2
          vaddss  xmm0, xmm1, dword ptr [rdi+8]
          vmovss  dword ptr [rsp+158h+vec+8], xmm0
          vmovss  dword ptr [rsp+158h+vec+0Ch], xmm7
        }
        MatrixTransformVector44(&vec, p_viewProjMatrixDepthHack, &out);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+158h+out+0Ch]
          vcomiss xmm0, xmm12
        }
        if ( v55 )
        {
          __asm
          {
            vsubss  xmm4, xmm13, xmm0
            vmulss  xmm3, xmm4, dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir+4; r_globals_t rg
            vmulss  xmm2, xmm4, dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir; r_globals_t rg
            vaddss  xmm2, xmm2, dword ptr [rsp+158h+vec]
            vmovss  dword ptr [rsp+158h+vec], xmm2
            vaddss  xmm2, xmm3, dword ptr [rsp+158h+vec+4]
            vmulss  xmm3, xmm4, dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir+8; r_globals_t rg
            vmovss  dword ptr [rsp+158h+vec+4], xmm2
            vaddss  xmm2, xmm3, dword ptr [rsp+158h+vec+8]
            vmovss  dword ptr [rsp+158h+vec+8], xmm2
          }
          MatrixTransformVector44(&vec, p_viewProjMatrixDepthHack, &out);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+158h+out+0Ch]
            vcomiss xmm0, xmm12
          }
        }
        if ( !(v55 | v56) )
        {
          __asm
          {
            vdivss  xmm0, xmm7, xmm0
            vmulss  xmm1, xmm0, dword ptr [rsp+158h+out]
            vmulss  xmm0, xmm0, dword ptr [rsp+158h+out+4]
            vxorps  xmm2, xmm0, xmm6
            vmovss  dword ptr [rsp+158h+out+4], xmm2
            vminss  xmm10, xmm2, xmm10
            vmaxss  xmm11, xmm2, xmm11
            vmovss  dword ptr [rsp+158h+out], xmm1
            vminss  xmm8, xmm1, xmm8
            vmaxss  xmm9, xmm1, xmm9
          }
        }
        ++v23;
      }
      while ( v23 < 8 );
      __asm
      {
        vmovss  xmm2, cs:__real@3f000000
        vaddss  xmm0, xmm8, xmm7
        vmulss  xmm6, xmm0, xmm2
        vaddss  xmm0, xmm10, xmm7
        vmulss  xmm8, xmm0, xmm2
        vaddss  xmm0, xmm11, xmm7
        vmulss  xmm10, xmm0, xmm2
        vmovss  xmm0, dword ptr [rsi+8Ch]; val
        vucomiss xmm0, xmm12
        vaddss  xmm1, xmm9, xmm7
        vmulss  xmm9, xmm1, xmm2
      }
      if ( v23 == 8 || (v80 = 1, _RSI->hudOutlineInfo.color) )
        v80 = 0;
      __asm
      {
        vmovaps xmm2, xmm7; max
        vmovaps xmm1, xmm12; min
      }
      v143 = v80;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v83 = 0;
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@437f0000
        vcvttss2si r8, xmm1
      }
      v142 = 0;
      if ( _RSI->dataCount )
      {
        v86 = (unsigned __int8)entNum;
        __asm
        {
          vmovss  xmm13, cs:__real@3b808081
          vmovss  xmm11, cs:__real@3c010204
        }
        v89 = (_DWORD)_R8 << 24;
        v145 = v89;
        do
        {
          color = _RSI->hudOutlineInfo.color;
          v91 = v83;
          __asm { vxorps  xmm0, xmm0, xmm0 }
          _RBX = &v18[v83];
          *(_QWORD *)vec.v = _RBX;
          _RBX->outlineColor = color;
          _R14 = (_QWORD *)_RBX->uvRotate[0].v;
          _RBX->outlinePropertyFlags = v80;
          v95 = v80 | (_RSI->hudOutlineInfo.fill ? 2 : 0);
          albedoMapScaleBias = _RBX->albedoMapScaleBias;
          _RBX->outlinePropertyFlags = v95;
          v97 = v95 | (_RSI->hudOutlineInfo.drawOccludedPixels ? 4 : 0);
          _RBX->outlinePropertyFlags = v97;
          v98 = v97 | (_RSI->hudOutlineInfo.drawNonOccludedPixels ? 8 : 0);
          _RBX->outlinePropertyFlags = v98;
          v99 = v98 | (_RSI->hudOutlineInfo.useAlternateColor ? 0x10 : 0);
          _RBX->outlinePropertyFlags = v99;
          v100 = v99 | (_RSI->hudOutlineInfo.forSpectator ? 0x20 : 0);
          _RBX->outlinePropertyFlags = v100;
          v101 = v91;
          v102 = v100 | (_RSI->hudOutlineInfo.specialActive ? 0x40 : 0);
          _RBX->outlinePropertyFlags = v102;
          v103 = v102 | ((_RSI->hudOutlineInfo.renderMode & 0xF) << 16);
          _RBX->outlinePropertyFlags = v103;
          v104 = _RSI->hudOutlineInfo.lineWidth & 0xF;
          _RBX->outlinePropertyFlags2 = v86;
          _RBX->outlinePropertyFlags = v89 | v103 | (v104 << 20);
          __asm
          {
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm13
            vmovss  dword ptr [rbx+98h], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm11
            vmovss  dword ptr [rbx+9Ch], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm11
            vmovss  dword ptr [rbx+0A0h], xmm1
          }
          _RBX->characterEVOffset = _RSI->hudOutlineInfo.characterEVOffset;
          if ( _RSI->modelShaderData[v101].camoAsset )
          {
            v113 = 3i64;
            v144 = 28i64 - (_QWORD)_RBX;
            v114 = 16i64 - (_QWORD)_RBX;
            *(_QWORD *)out.v = -32i64 - (_QWORD)_RBX;
            v115 = 4i64 - (_QWORD)_RBX;
            do
            {
              *(albedoMapScaleBias - 3) = *(_DWORD *)((char *)&_RSI->modelShaderData[v101].camoAsset->name + v115 + (unsigned __int64)albedoMapScaleBias);
              if ( *(int *)((char *)albedoMapScaleBias + v114 + (unsigned __int64)_RSI->modelShaderData[v101].camoAsset) < 0 )
              {
                LODWORD(v141) = *(unsigned int *)((char *)albedoMapScaleBias + v114 + (unsigned __int64)_RSI->modelShaderData[v101].camoAsset);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1562, ASSERT_TYPE_ASSERT, "( ( ( sceneEntityMutableShaderData->modelShaderData[dataIndex].camoAsset->albedoMapScaleBias[camoLayerIndex] & ENTITY_DATA_CAMO_LAYER_VALID ) == 0 ) )", "( sceneEntityMutableShaderData->modelShaderData[dataIndex].camoAsset->albedoMapScaleBias[camoLayerIndex] ) = %u", v141) )
                  __debugbreak();
              }
              *albedoMapScaleBias = *(_DWORD *)((char *)&_RSI->modelShaderData[v101].camoAsset->name + (unsigned __int64)albedoMapScaleBias + v114) | 0x80000000;
              albedoMapScaleBias[3] = *(_DWORD *)((char *)&_RSI->modelShaderData[v101].camoAsset->name + v144 + (unsigned __int64)albedoMapScaleBias);
              ++albedoMapScaleBias;
              _RAX = (char *)_RSI->modelShaderData[v101].camoAsset + *(_QWORD *)out.v;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+r14]
                vmovups xmmword ptr [r14-30h], xmm0
              }
              _RAX = (char *)_RSI->modelShaderData[v101].camoAsset + v114;
              __asm
              {
                vmovups xmm0, xmmword ptr [rax+r14]
                vmovups xmmword ptr [r14], xmm0
              }
              _R14 += 2;
              --v113;
            }
            while ( v113 );
            _RBX = *(GfxPackedEntityData **)vec.v;
            blendMapChannels = _RSI->modelShaderData[v101].camoAsset->blendMapChannels;
          }
          else
          {
            _RBX->colorTint[0] = 0;
            blendMapChannels = 0;
            *albedoMapScaleBias = 0;
            _RBX->normalMapScaleBias[0] = 0;
            _RBX->uvScaleOffset[0].v[0] = 1.0;
            *(_QWORD *)&_RBX->uvScaleOffset[0].xyz.y = 1065353216i64;
            _RBX->uvScaleOffset[0].v[3] = 0.0;
            *_R14 = 1065353216i64;
            _RBX->uvRotate[0].v[2] = 0.0;
            _RBX->uvRotate[0].v[3] = 1.0;
            *(_QWORD *)&_RBX->colorTint[1] = 0i64;
            *(_QWORD *)&_RBX->albedoMapScaleBias[1] = 0i64;
            *(_QWORD *)&_RBX->normalMapScaleBias[1] = 0i64;
            _RBX->uvScaleOffset[1].v[0] = 1.0;
            *(_QWORD *)&_RBX->uvScaleOffset[1].xyz.y = 1065353216i64;
            _RBX->uvScaleOffset[1].v[3] = 0.0;
            *(_QWORD *)_RBX->uvRotate[1].v = 1065353216i64;
            _RBX->uvRotate[1].v[2] = 0.0;
            _RBX->uvRotate[1].v[3] = 1.0;
            _RBX->uvScaleOffset[2].v[0] = 1.0;
            *(_QWORD *)&_RBX->uvScaleOffset[2].xyz.y = 1065353216i64;
            _RBX->uvScaleOffset[2].v[3] = 0.0;
            *(_QWORD *)_RBX->uvRotate[2].v = 1065353216i64;
            _RBX->uvRotate[2].v[2] = 0.0;
            _RBX->uvRotate[2].v[3] = 1.0;
          }
          _RBX->blendMapChannels = blendMapChannels;
          __asm
          {
            vmovaps xmm2, xmm7; max
            vmovaps xmm1, xmm12; min
            vmovaps xmm0, xmm6; val
            vmovss  dword ptr [rbx+94h], xmm14
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  dword ptr [rbx+0A8h], xmm0
            vmovaps xmm0, xmm9; val
            vmovaps xmm2, xmm7; max
            vmovaps xmm1, xmm12; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  dword ptr [rbx+0B0h], xmm0
            vmovaps xmm0, xmm8; val
            vmovaps xmm2, xmm7; max
            vmovaps xmm1, xmm12; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  dword ptr [rbx+0ACh], xmm0
            vmovaps xmm0, xmm10; val
            vmovaps xmm2, xmm7; max
            vmovaps xmm1, xmm12; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          v89 = v145;
          v83 = v142 + 1;
          v80 = v143;
          v86 = (unsigned __int8)entNum;
          v18 = rawEntityShaderData;
          __asm { vmovss  dword ptr [rbx+0B4h], xmm0 }
          v142 = v83;
        }
        while ( v83 < _RSI->dataCount );
      }
      __asm
      {
        vmovaps xmm12, [rsp+158h+var_A8]
        vmovaps xmm11, [rsp+158h+var_98]
        vmovaps xmm10, [rsp+158h+var_88]
        vmovaps xmm9, [rsp+158h+var_78]
        vmovaps xmm8, [rsp+158h+var_68]
        vmovaps xmm7, [rsp+158h+var_58]
        vmovaps xmm6, [rsp+158h+var_48]
        vmovaps xmm13, [rsp+158h+var_B8]
      }
    }
    __asm { vmovaps xmm14, [rsp+158h+var_C8] }
  }
}

/*
==============
R_SetForwardPlusClusterInfo
==============
*/
void R_SetForwardPlusClusterInfo(GfxViewInfo *viewInfo, unsigned int frustumWidth, unsigned int frustumHeight)
{
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 width; 
  unsigned __int64 v21; 
  __int64 height; 
  unsigned __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v33; 
  __int64 v34; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  __int128 v50; 
  char v53; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RBX = viewInfo;
  __asm { vmovaps [rsp+88h+var_48], xmm7 }
  v8 = frustumHeight;
  v9 = frustumWidth;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm7, xmm7, r14
    vmovaps [rsp+88h+var_58], xmm8
    vcvtsi2ss xmm6, xmm6, rsi
  }
  R_VOL_GetFrustumDepth();
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  dword ptr [rbx+2480h], xmm7
    vmovss  dword ptr [rbx+2484h], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rbx+2488h], xmm0
    vdivss  xmm0, xmm8, xmm0
    vmovss  dword ptr [rbx+247Ch], xmm0
    vdivss  xmm2, xmm8, xmm7
    vmovss  dword ptr [rbx+2474h], xmm2
    vdivss  xmm1, xmm8, xmm6
    vmovss  dword ptr [rbx+2478h], xmm1
  }
  width = _RBX->sceneViewport.width;
  _RBX->frustumGrid.voxelCountX = v9;
  _RBX->frustumGrid.voxelCountY = v8;
  if ( !(_DWORD)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0", v50) )
    __debugbreak();
  v21 = width + v9 - 1;
  height = _RBX->sceneViewport.height;
  _RBX->frustumGrid.voxelSizeX = v21 / (unsigned int)v9;
  if ( !(_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  v23 = height + v8 - 1;
  v24 = (unsigned int)(v9 * _RBX->frustumGrid.voxelSizeX);
  v25 = v23 / v8;
  _RBX->frustumGrid.voxelSizeY = v25;
  v26 = (unsigned int)v8 * v25;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmovss  dword ptr [rbx+1BE0h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vmovss  dword ptr [rbx+1BE4h], xmm1
    vdivss  xmm1, xmm8, xmm1
    vmovss  dword ptr [rbx+1BECh], xmm1
    vdivss  xmm0, xmm8, xmm0
    vmovss  dword ptr [rbx+1BE8h], xmm0
  }
  v33 = 4 * _RBX->frustumGrid.voxelSizeX;
  v34 = 4 * _RBX->frustumGrid.voxelSizeY;
  if ( !(_DWORD)v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  _RBX->frustumGrid.clusterCountX = (v24 + v33 - 1) / (unsigned __int64)(unsigned int)v33;
  if ( !(_DWORD)v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 699, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
  _R11 = &v53;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RBX->frustumGrid.clusterCountY = (v26 + v34 - 1) / (unsigned __int64)(unsigned int)v34;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rbx+1BD0h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  dword ptr [rbx+1BD4h], xmm1
    vdivss  xmm1, xmm8, xmm1
    vmovss  dword ptr [rbx+1BDCh], xmm1
    vdivss  xmm0, xmm8, xmm0
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rbx+1BD8h], xmm0
  }
  v45 = _RBX->sceneViewport.width;
  v46 = _RBX->sceneViewport.height;
  *(_QWORD *)&_RBX->frustumGrid.lightWords = 0i64;
  _RBX->frustumGrid.probeWords = 0;
  v47 = 2 * ((v45 + 63) >> 6);
  v48 = v47 * ((v46 + 63) >> 6);
  _RBX->input.sceneConstants.stencilMaskStrideDwords = v47;
  v49 = (v45 + 255) >> 8;
  _RBX->input.sceneConstants.stencilMaskStrideBlocks = v49;
  _RBX->input.sceneConstants.stencilMaskPitchDwords = v48;
  _RBX->input.sceneConstants.stencilMaskPitchBlocks = v49 * ((v46 + 127) >> 7);
}

/*
==============
R_SetForwardPlusClusterWordsInfo
==============
*/
void R_SetForwardPlusClusterWordsInfo(GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned int FrustumWords; 
  unsigned int lightWords; 

  _RDI = viewInfo;
  viewInfo->frustumGrid.lightWords = R_GetFrustumLightWords(data->frustumLightsIndex);
  _RDI->frustumGrid.volumetricWords = R_VOL_GetFrustumWords(data->volumetricsIndex);
  FrustumWords = R_ReflectionProbe_GetFrustumWords(data->reflectionProbeFrameIndex);
  __asm { vmovss  xmm0, dword ptr [rdi+2ED4h] }
  _RDI->frustumGrid.probeWords = FrustumWords;
  __asm { vmovss  xmm1, dword ptr [rdi+2ED8h] }
  lightWords = _RDI->frustumGrid.lightWords;
  __asm
  {
    vmovss  dword ptr [rdi+1BF8h], xmm1
    vmovss  dword ptr [rdi+1BF4h], xmm0
  }
  LODWORD(_RDI->input.sceneConstants.frustumGridClusterParams.v[0]) = lightWords;
  _RDI->input.sceneConstants.frustumGridClusterParams.v[3] = 0.0;
}

/*
==============
R_SetGlobalLightingConstants
==============
*/

void __fastcall R_SetGlobalLightingConstants(const GfxBackEndData *data, GfxViewInfo *viewInfo, double _XMM2_8, double _XMM3_8)
{
  __int64 activePrimarySunLight; 
  char v41; 
  bool IsUsingGlobalBuffer; 
  int heightfieldCount; 
  bool v127; 
  const dvar_t *v161; 
  unsigned int v163; 
  bool v164; 
  const dvar_t *v165; 
  __int64 v167; 
  unsigned __int16 *v168; 
  char *fmt; 
  float outRadiometricScale; 
  float outPrevFrameRadiometricScale[3]; 
  tmat44_t<vec4_t> in; 
  tmat44_t<vec4_t> v227; 
  char v233; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  _RBX = viewInfo;
  __asm
  {
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
  }
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4824, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4825, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  __asm { vmovaps [rsp+190h+var_60], xmm8 }
  R_Tonemap_GetRadiometricScale(data, _RBX, &outRadiometricScale, outPrevFrameRadiometricScale);
  __asm
  {
    vmovss  xmm1, [rsp+190h+outPrevFrameRadiometricScale]
    vmovss  xmm0, [rsp+190h+outRadiometricScale]
    vmovss  xmm6, cs:__real@3f800000
    vmovss  dword ptr [rbx+1B50h], xmm0
    vmovss  dword ptr [rbx+1B58h], xmm1
    vdivss  xmm0, xmm6, xmm0
    vmovss  dword ptr [rbx+1B54h], xmm0
    vdivss  xmm0, xmm6, xmm1
    vmovss  dword ptr [rbx+1B5Ch], xmm0
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm3, xmm3, rax
  }
  _ER14 = 0;
  __asm
  {
    vcvtsi2ss xmm2, xmm2, rax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, rax
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rbx+1B70h], xmm0
    vmovss  dword ptr [rbx+1B74h], xmm3
    vmovss  dword ptr [rbx+1B78h], xmm2
    vmovss  dword ptr [rbx+1B7Ch], xmm1
  }
  _RDI = _RBX->input.data;
  activePrimarySunLight = _RDI->activePrimarySunLight;
  if ( (_DWORD)activePrimarySunLight )
  {
    _RSI = 152 * activePrimarySunLight;
    __asm { vmovss  xmm7, dword ptr [rsi+rdi+53A004h] }
    if ( (_RDI->sceneLights[activePrimarySunLight].flags & 0x4000) == 0 )
      __asm { vmulss  xmm7, xmm7, dword ptr [rbx+0D6Ch] }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+rdi+53A010h]
      vmulss  xmm12, xmm0, dword ptr [rsi+rdi+53A014h]
      vmulss  xmm11, xmm0, dword ptr [rsi+rdi+53A018h]
      vmulss  xmm10, xmm0, dword ptr [rsi+rdi+53A01Ch]
      vxorps  xmm8, xmm8, xmm8
    }
    if ( _RBX->thermalParams.useNightAndThermalVisionCombo )
      __asm { vmovss  xmm9, dword ptr [rsi+rdi+53A008h] }
    else
      __asm { vxorps  xmm9, xmm9, xmm9 }
    _R15 = DVARFLT_r_sunIntensityHeatOverride;
    if ( !DVARFLT_r_sunIntensityHeatOverride )
      goto LABEL_19;
    Dvar_CheckFrontendServerThread(DVARFLT_r_sunIntensityHeatOverride);
    __asm { vcomiss xmm8, dword ptr [r15+28h] }
    if ( v41 )
    {
      _R15 = DVARFLT_r_sunIntensityHeatOverride;
      if ( !DVARFLT_r_sunIntensityHeatOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunIntensityHeatOverride") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R15);
      __asm
      {
        vmovss  xmm0, dword ptr [r15+28h]
        vmulss  xmm4, xmm0, cs:__real@3f0e38e4
      }
    }
    else
    {
LABEL_19:
      __asm { vmovss  xmm4, dword ptr [rsi+rdi+53A00Ch] }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@bf800000
      vmovss  xmm5, dword ptr [rsi+rdi+53A024h]
      vmovd   xmm1, r14d
    }
    _EAX = *((_DWORD *)&_RBX->viewportFeatures + 11) & 4;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, dword ptr [rsi+rdi+53A028h]
      vblendvps xmm0, xmm6, xmm2, xmm3
      vmovss  xmm2, dword ptr [rsi+rdi+53A020h]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm4, xmm4, xmm4
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm10, xmm10, xmm10
      vxorps  xmm11, xmm11, xmm11
      vxorps  xmm12, xmm12, xmm12
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm1, xmm6
      vxorps  xmm5, xmm5, xmm5
      vxorps  xmm2, xmm2, xmm2
    }
  }
  _R8 = &_RBX->input.sceneConstants.sunLightDir;
  __asm
  {
    vmovss  dword ptr [r8], xmm2
    vmovss  dword ptr [r8+4], xmm5
    vmovss  dword ptr [r8+8], xmm1
    vmovss  dword ptr [r8+0Ch], xmm0
  }
  _RDX = &_RBX->input.sceneConstants.sunLightColorAndUV;
  __asm
  {
    vmovss  dword ptr [rdx], xmm12
    vmovss  dword ptr [rdx+4], xmm11
    vmovss  dword ptr [rdx+8], xmm10
    vmovss  dword ptr [rdx+0Ch], xmm7
  }
  _RCX = &_RBX->input.sceneConstants.sunLightIrAndHeat;
  __asm
  {
    vmovss  dword ptr [rcx], xmm9
    vmovss  dword ptr [rcx+4], xmm4
  }
  _RBX->input.sceneConstants.sunLightIrAndHeat.v[2] = 0.0;
  _RBX->input.sceneConstants.sunLightIrAndHeat.v[3] = 0.0;
  _RAX = _RBX->input.data;
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+104h]
    vmovss  xmm3, dword ptr [rbx+100h]
    vmovss  xmm5, dword ptr [rbx+108h]
    vmovups ymm0, ymmword ptr [rax+0E2700h]
    vmovups ymmword ptr [rsp+190h+in], ymm0
    vmovups ymm1, ymmword ptr [rax+0E2720h]
    vmovups ymmword ptr [rbp+90h+in+20h], ymm1
  }
  in.row2 = *(vec4_t *)_RT0.m256i_i8;
  __asm
  {
    vmulss  xmm1, xmm4, dword ptr [rax+0E2710h]
    vmulss  xmm0, xmm3, dword ptr [rax+0E2700h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rax+0E2720h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [rax+0E2730h]
    vmovss  dword ptr [rbp+90h+in+30h], xmm2
    vmulss  xmm1, xmm3, dword ptr [rax+0E2704h]
    vmulss  xmm0, xmm4, dword ptr [rax+0E2714h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rax+0E2724h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [rax+0E2734h]
    vmovss  dword ptr [rbp+90h+in+34h], xmm2
    vmulss  xmm1, xmm3, dword ptr [rax+0E2708h]
    vmulss  xmm0, xmm4, dword ptr [rax+0E2718h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rax+0E2728h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [rax+0E2738h]
    vmovss  dword ptr [rbp+90h+in+38h], xmm2
    vmulss  xmm1, xmm3, dword ptr [rax+0E270Ch]
    vmulss  xmm0, xmm4, dword ptr [rax+0E271Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rax+0E272Ch]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, dword ptr [rax+0E273Ch]
    vmovss  dword ptr [rbp+90h+in+3Ch], xmm2
  }
  MatrixTranspose44Aligned(&in, &_RBX->input.sceneConstants.sunShadowLookupMatrix.m);
  IsUsingGlobalBuffer = R_CompressedSunShadow_IsUsingGlobalBuffer();
  __asm
  {
    vmovaps xmm12, [rsp+190h+var_A0]
    vmovaps xmm11, [rsp+190h+var_90]
    vmovaps xmm10, [rsp+190h+var_80]
    vmovaps xmm9, [rsp+190h+var_70]
  }
  if ( IsUsingGlobalBuffer )
  {
    _RAX = _RBX->input.data;
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+104h]
      vmovss  xmm3, dword ptr [rbx+100h]
      vmovss  xmm5, dword ptr [rbx+108h]
      vmovups ymm0, ymmword ptr [rax+0E2740h]
      vmovups ymmword ptr [rbp+90h+var_F0], ymm0
      vmovups ymm1, ymmword ptr [rax+0E2760h]
      vmovups ymmword ptr [rbp+90h+var_F0+20h], ymm1
    }
    v227.row2 = *(vec4_t *)_RT0.m256i_i8;
    __asm
    {
      vmulss  xmm1, xmm4, dword ptr [rax+0E2750h]
      vmulss  xmm0, xmm3, dword ptr [rax+0E2740h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rax+0E2760h]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rax+0E2770h]
      vmovss  dword ptr [rbp+90h+var_F0+30h], xmm2
      vmulss  xmm1, xmm3, dword ptr [rax+0E2744h]
      vmulss  xmm0, xmm4, dword ptr [rax+0E2754h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rax+0E2764h]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rax+0E2774h]
      vmovss  dword ptr [rbp+90h+var_F0+34h], xmm2
      vmulss  xmm1, xmm3, dword ptr [rax+0E2748h]
      vmulss  xmm0, xmm4, dword ptr [rax+0E2758h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rax+0E2768h]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rax+0E2778h]
      vmovss  dword ptr [rbp+90h+var_F0+38h], xmm2
      vmulss  xmm1, xmm3, dword ptr [rax+0E274Ch]
      vmulss  xmm0, xmm4, dword ptr [rax+0E275Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rax+0E276Ch]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rax+0E277Ch]
      vmovss  dword ptr [rbp+90h+var_F0+3Ch], xmm2
    }
    MatrixTranspose44Aligned(&v227, &_RBX->input.sceneConstants.compressedSunShadowLookupMatrix.m);
  }
  _RCX = rgp.world;
  heightfieldCount = rgp.world->heightfieldCount;
  v127 = heightfieldCount == 0;
  if ( heightfieldCount )
  {
    if ( heightfieldCount != rgp.world->voxelTreeCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4906, ASSERT_TYPE_ASSERT, "(rgp.world->heightfieldCount == rgp.world->voxelTreeCount)", (const char *)&queryFormat, "rgp.world->heightfieldCount == rgp.world->voxelTreeCount") )
        __debugbreak();
      _RCX = rgp.world;
    }
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vxorps  xmm3, xmm3, xmm3
    }
    _RAX = _RCX->heightfields;
    _R8 = 96i64 * (int)_RBX->input.voxelTreeZoneIndex;
    v127 = __CFSHL__(3i64 * (int)_RBX->input.voxelTreeZoneIndex, 5) || _R8 == 0;
    __asm
    {
      vmovups ymm0, ymmword ptr [r8+rax+18h]
      vmovups ymmword ptr cs:?g_drawConsts@@3UGfxDrawConsts@@A.outdoorLookupMatrix, ymm0; GfxDrawConsts g_drawConsts
      vmovups ymm1, ymmword ptr [r8+rax+38h]
      vmovups ymmword ptr cs:?g_drawConsts@@3UGfxDrawConsts@@A.outdoorLookupMatrix+20h, ymm1; GfxDrawConsts g_drawConsts
    }
    _RDX = _RCX->heightfields;
    __asm
    {
      vmovss  xmm0, dword ptr [r8+rdx+14h]
      vmulss  xmm2, xmm0, cs:__real@40000000
      vcvtsi2ss xmm4, xmm4, eax
      vcvtsi2ss xmm3, xmm3, eax
    }
    _RAX = r_outdoorFeather;
    __asm
    {
      vmovss  xmm1, dword ptr [rax+28h]
      vmaxss  xmm0, xmm1, xmm6
      vdivss  xmm2, xmm2, xmm0
      vmovss  dword ptr [rbx+2020h], xmm2
      vmovss  dword ptr [rbx+2028h], xmm4
      vmovss  dword ptr [rbx+202Ch], xmm3
    }
    _RBX->input.sceneConstants.outdoorFeatherParms.v[1] = 0.0;
    _RCX = rgp.world;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+3A10h]
    vcomiss xmm0, dword ptr [rcx+3A00h]
  }
  if ( v127 || !r_enablePrecomputedSkyIllumination->current.enabled )
  {
    *(_QWORD *)_RBX->input.sceneConstants.skyFlags.v = 0i64;
    *((_QWORD *)&_RBX->input.sceneConstants.skyFlags.xyz.xy + 1) = 0i64;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx+3A00h]
      vmovups xmmword ptr [rbx+2490h], xmm0
      vmovups xmm0, xmmword ptr [rcx+3A10h]
      vmovups xmmword ptr [rbx+24A0h], xmm0
      vmovss  xmm1, dword ptr [rcx+3A10h]
      vsubss  xmm2, xmm1, dword ptr [rcx+3A00h]
      vmovss  xmm0, dword ptr [rcx+3A14h]
      vsubss  xmm1, xmm0, dword ptr [rcx+3A04h]
      vmovss  xmm0, dword ptr [rcx+3A18h]
      vdivss  xmm4, xmm6, xmm2
      vsubss  xmm2, xmm0, dword ptr [rcx+3A08h]
      vdivss  xmm3, xmm6, xmm1
      vinsertps xmm4, xmm4, xmm3, 10h
      vdivss  xmm1, xmm6, xmm2
      vinsertps xmm4, xmm4, xmm1, 20h ; ' '
      vinsertps xmm4, xmm4, xmm8, 30h ; '0'
      vmovups xmmword ptr [rbx+24B0h], xmm4
      vmovups xmm0, xmmword ptr [rcx+3A30h]
      vmovups xmmword ptr [rbx+24D0h], xmm0
      vmovups [rsp+190h+var_150], xmm4
      vmovaps [rsp+190h+var_150], xmm0
      vmovups xmm0, xmmword ptr [rcx+3A20h]
      vmovups xmmword ptr [rbx+24C0h], xmm0
    }
    _RBX->input.sceneConstants.skyFlags.v[0] = 1;
    __asm { vmovaps [rsp+190h+var_150], xmm0 }
    _RBX->input.sceneConstants.skyFlags.v[1] = r_enablePrecomputedSkyIlluminationMask->current.enabled;
    LOBYTE(_ER14) = r_showPrecomputedSkyIlluminationMask->current.enabled;
    _RBX->input.sceneConstants.skyFlags.v[2] = _ER14;
    v161 = DVARINT_r_precomputedSkyIlluminationRadialDistance;
    if ( !DVARINT_r_precomputedSkyIlluminationRadialDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_precomputedSkyIlluminationRadialDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v161);
    __asm { vcvttss2si ecx, dword ptr [rbx+644h] }
    v163 = _ECX + v161->current.integer;
    v164 = s_radialDist == v163;
    _RBX->input.sceneConstants.skyFlags.v[3] = v163;
    if ( !v164 )
    {
      v165 = DVARINT_r_precomputedSkyIlluminationRadialDistance;
      __asm { vcvttss2si r14d, dword ptr [rbx+644h] }
      if ( !DVARINT_r_precomputedSkyIlluminationRadialDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_precomputedSkyIlluminationRadialDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v165);
      LODWORD(fmt) = v163;
      Com_Printf(8, "sky illumination radial distance %d + %d = %d\n", v165->current.unsignedInt, _ER14, fmt);
      s_radialDist = _RBX->input.sceneConstants.skyFlags.v[3];
    }
    if ( R_GetNumActiveLightGrids(_RBX->input.data) > 0 )
    {
      v167 = (__int64)*R_GetActiveLightGridsList(_RBX->input.data);
      if ( !v167 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4969, ASSERT_TYPE_ASSERT, "(lightGrid)", (const char *)&queryFormat, "lightGrid") )
        __debugbreak();
      v168 = (unsigned __int16 *)(*(_QWORD *)(v167 + 136) + 92i64 * _RBX->input.voxelTreeZoneIndex);
      if ( v168 )
      {
        *(double *)&_XMM0 = FloatFromHalf(v168[32]);
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[23]);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[14]);
        __asm
        {
          vmovaps xmm1, xmm0
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
          vmovups xmmword ptr [rbx+24F0h], xmm1
        }
        *(double *)&_XMM0 = FloatFromHalf(v168[18]);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[17]);
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[16]);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[15]);
        __asm
        {
          vmovaps xmm1, xmm0
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
          vmovups xmmword ptr [rbx+2500h], xmm1
        }
        *(double *)&_XMM0 = FloatFromHalf(v168[22]);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[21]);
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[20]);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[19]);
        __asm
        {
          vmovaps xmm1, xmm0
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
          vmovups xmmword ptr [rbx+2510h], xmm1
        }
        *(double *)&_XMM0 = FloatFromHalf(v168[27]);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[26]);
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[25]);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[24]);
        __asm
        {
          vmovaps xmm1, xmm0
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
          vmovups xmmword ptr [rbx+2520h], xmm1
        }
        *(double *)&_XMM0 = FloatFromHalf(v168[31]);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[30]);
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[29]);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[28]);
        __asm
        {
          vmovaps xmm1, xmm0
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
          vmovups xmmword ptr [rbx+2530h], xmm1
        }
        *(double *)&_XMM0 = FloatFromHalf(v168[36]);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[35]);
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[34]);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[33]);
        __asm
        {
          vmovaps xmm1, xmm0
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
          vmovups xmmword ptr [rbx+2540h], xmm1
        }
        *(double *)&_XMM0 = FloatFromHalf(v168[40]);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[39]);
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[38]);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = FloatFromHalf(v168[37]);
        __asm
        {
          vmovaps xmm1, xmm0
          vinsertps xmm1, xmm0, xmm6, 10h
          vinsertps xmm1, xmm1, xmm7, 20h ; ' '
          vinsertps xmm1, xmm1, xmm8, 30h ; '0'
          vmovups xmmword ptr [rbx+2550h], xmm1
        }
      }
    }
  }
  __asm { vmovaps xmm8, [rsp+190h+var_60] }
  _R11 = &v233;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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
  __asm
  {
    vmovss  xmm2, [rsp+168h+camera.zPlanes+8]; zNear
    vmovss  xmm1, dword ptr [rsp+168h+camera.___u3]; tanHalfFovY
    vmovss  xmm0, dword ptr [rsp+168h+camera.___u2]; tanHalfFovX
  }
  InfinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixCopy44(&out, &rg.viewProjMatrix);
  __asm
  {
    vmovss  xmm2, [rsp+168h+camera.zPlanes]; zNear
    vmovss  xmm1, dword ptr [rsp+168h+camera.___u3]; tanHalfFovY
    vmovss  xmm0, dword ptr [rsp+168h+camera.___u2]; tanHalfFovX
  }
  InfinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &in2);
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
  const dvar_t *v3; 
  char v6; 
  unsigned int v8; 

  v3 = DVARBOOL_r_hudOutlineEnable;
  _RDI = hudOutlineInfo;
  if ( !DVARBOOL_r_hudOutlineEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && (*renderFlags & 0x8000) == 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rdi+4]
    }
    if ( !v6 || _RDI->color )
    {
      v8 = *renderFlags | 2;
      *renderFlags = v8;
      if ( _RDI->drawOccludedPixels )
        *renderFlags = v8 | 0x40000;
    }
  }
}

/*
==============
R_SetInvViewScale
==============
*/

void __fastcall R_SetInvViewScale(double invViewScale)
{
  __asm { vmovss  cs:?rg@@3Ur_globals_t@@A.invViewScale, xmm0; r_globals_t rg }
}

/*
==============
R_SetLightScaleInfo
==============
*/
void R_SetLightScaleInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  const dvar_t *v12; 
  int integer; 
  const dvar_t *v14; 
  const dvar_t *v25; 
  int v26; 
  int v31; 

  _RDI = r_secondaryDiffuseScale;
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RBX = viewInfo;
  if ( !r_secondaryDiffuseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  _RDI = r_secondarySpecularScale;
  if ( !r_secondarySpecularScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+28h]
    vmulss  xmm2, xmm6, cs:?s_world@@3UGfxWorld@@A.draw.bakedLightScale; GfxWorld s_world
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.specularColorScale; r_globals_t rg
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.diffuseColorScale; r_globals_t rg
    vmovss  dword ptr [rbx+1B60h], xmm0
    vmovss  dword ptr [rbx+1B64h], xmm1
    vmovss  dword ptr [rbx+1B68h], xmm2
    vmovss  dword ptr [rbx+1B6Ch], xmm3
  }
  _RBX->lightUVIntensityScale = sceneParms->lightUVIntensityScale;
  v12 = r_materialLodOverride;
  if ( !r_materialLodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  v14 = r_reflectionProbeForceNoParallax;
  v31 = integer;
  if ( !r_reflectionProbeForceNoParallax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  _EAX = 0;
  __asm { vmovd   xmm1, eax }
  _EAX = v14->current.color[0];
  _RDI = r_rimLightingLerp;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( !r_rimLightingLerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  v25 = r_globalSecondarySelfVisScale;
  if ( !r_globalSecondarySelfVisScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  v26 = v25->current.integer;
  __asm
  {
    vmovss  xmm0, [rsp+58h+arg_0]
    vmovss  xmm1, [rsp+58h+arg_8]
    vmovss  dword ptr [rbx+2448h], xmm6
    vmovaps xmm6, [rsp+58h+var_28]
    vmovss  dword ptr [rbx+2444h], xmm0
    vmovss  dword ptr [rbx+244Ch], xmm1
  }
  LODWORD(_RBX->input.sceneConstants.debugLightingScale.v[0]) = v26;
}

/*
==============
R_SetLodOrigin
==============
*/

void __fastcall R_SetLodOrigin(const refdef_t *refdef, double lodOverride, __int64 a3, double _XMM3_8)
{
  int time; 

  _RBX = refdef;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( r_lockPvs->modified )
  {
    Dvar_ClearModified(r_lockPvs);
    R_SetViewParmsForScene(_RBX, NULL, &lockPvsViewParms);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+14h]
      vmovss  dword ptr cs:lockPvsViewParms.camera.___u3, xmm0
    }
  }
  if ( !g_previousFrameViewParmsIsValid[_RBX->localClientNum][0] )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  cs:?rg@@3Ur_globals_t@@A.lodParms.ugbInvFovScaleModifier, xmm0; r_globals_t rg
      vmovss  cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ugbInvFovScaleModifier, xmm0; r_globals_t rg
    }
  }
  R_DumpLODInfo(&_RBX->view, 0);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; dynResScale
    vmovaps xmm2, xmm7; lodOverride
  }
  R_UpdateLodParmsInternal(&_RBX->view, &rg.lodParms, *(float *)&_XMM2, *(float *)&_XMM3);
  _RSI = DVARFLT_r_sceneResLodScale;
  if ( !DVARFLT_r_sceneResLodScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResLodScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  R_DumpLODInfo(&_RBX->view, 1);
  __asm
  {
    vmovaps xmm3, xmm6; dynResScale
    vmovaps xmm2, xmm7; lodOverride
  }
  R_UpdateLodParmsInternal(&_RBX->view, &rg.correctedLodParms, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+88h]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffsetPrev, xmm0; GfxScene scene
    vmovss  xmm1, dword ptr [rbx+8Ch]
    vmovss  dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffsetPrev+4, xmm1; GfxScene scene
    vmovss  xmm0, dword ptr [rbx+90h]
    vmovss  dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffsetPrev+8, xmm0; GfxScene scene
    vmovss  xmm1, dword ptr [rbx+7Ch]
    vmovss  dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset, xmm1; GfxScene scene
    vmovss  xmm0, dword ptr [rbx+80h]
    vmovss  dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+4, xmm0; GfxScene scene
    vmovss  xmm1, dword ptr [rbx+84h]
    vmovss  dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+8, xmm1; GfxScene scene
  }
  time = _RBX->time;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  cs:?scene@@3UGfxScene@@A.def.floatTime, xmm1; GfxScene scene
  }
  scene.def.time = time;
}

/*
==============
R_SetPerceptualInfo
==============
*/
void R_SetPerceptualInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  bool v5; 
  const dvar_t *v6; 
  bool v9; 
  const dvar_t *v16; 
  const char *v17; 

  _RBP = sceneParms;
  _RBX = viewInfo;
  v5 = viewInfo->thermalParams.useNightAndThermalVisionCombo && !viewInfo->thermalParams.useScopedNVG;
  v6 = DCONST_DVARBOOL_r_veilUseTweaks;
  if ( !DCONST_DVARBOOL_r_veilUseTweaks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilUseTweaks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( v5 )
    {
      _RDI = DCONST_DVARFLT_r_nvg_veilStrength;
      if ( !DCONST_DVARFLT_r_nvg_veilStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvg_veilStrength") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rdi+28h]
      }
      _RBX->perceptual.veilEnabled = v9;
      _RDI = DCONST_DVARFLT_r_nvg_veilStrength;
      if ( !DCONST_DVARFLT_r_nvg_veilStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvg_veilStrength") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    }
    else
    {
      _RDI = DCONST_DVARFLT_r_veilStrength;
      if ( !DCONST_DVARFLT_r_veilStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilStrength") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rdi+28h]
      }
      _RBX->perceptual.veilEnabled = v9;
      _RDI = DCONST_DVARFLT_r_veilStrength;
      if ( !DCONST_DVARFLT_r_veilStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilStrength") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbp+2E8h]
    }
    _RBX->perceptual.veilEnabled = 0;
    __asm { vmovss  xmm0, dword ptr [rbp+2E8h] }
  }
  __asm { vmovss  dword ptr [rbx+3860h], xmm0 }
  if ( v5 )
  {
    v16 = DCONST_DVARBOOL_r_nvg_veil;
    if ( DCONST_DVARBOOL_r_nvg_veil )
      goto LABEL_32;
    v17 = "r_nvg_veil";
  }
  else
  {
    v16 = DCONST_DVARBOOL_r_veil;
    if ( DCONST_DVARBOOL_r_veil )
      goto LABEL_32;
    v17 = "r_veil";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v17) )
    __debugbreak();
LABEL_32:
  Dvar_CheckFrontendServerThread(v16);
  if ( rg.debugShaderEnabled || !v16->current.enabled )
  {
    _RBX->perceptual.veilEnabled = 0;
    _RBX->perceptual.veilStrength = 0.0;
  }
}

/*
==============
R_SetSceneParms
==============
*/
void R_SetSceneParms(const refdef_t *refdef, GfxSceneParms *sceneParms)
{
  __int64 v8; 
  __int64 v82; 

  _RBX = sceneParms;
  _RDI = refdef;
  if ( !refdef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9841, ASSERT_TYPE_ASSERT, "(refdef)", (const char *)&queryFormat, "refdef") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 9842, ASSERT_TYPE_ASSERT, "(sceneParms)", (const char *)&queryFormat, "sceneParms") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+0B0h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  _RCX = &_RBX->fog;
  _RBX->lightUVIntensityScale = _RDI->lightTweakUVIntensityScale;
  v8 = 2i64;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+10C9Ch]
    vmovsd  qword ptr [rbx+7D8h], xmm0
  }
  _RBX->chromaticAberration.aberration = _RDI->chromaticAberration.aberration;
  _RAX = &_RDI->fog;
  do
  {
    _RCX = (GfxFog *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxFog *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v8;
  }
  while ( v8 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
  }
  *(_QWORD *)_RCX->mieCoeffs.v = *(_QWORD *)_RAX->mieCoeffs.v;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+1E0h]
    vmovups xmmword ptr [rbx+928h], xmm0
    vmovups xmm1, xmmword ptr [rdi+1F0h]
    vmovups xmmword ptr [rbx+938h], xmm1
    vmovups xmm0, xmmword ptr [rdi+200h]
    vmovups xmmword ptr [rbx+948h], xmm0
    vmovups xmm1, xmmword ptr [rdi+210h]
    vmovups xmmword ptr [rbx+958h], xmm1
    vmovups xmm0, xmmword ptr [rdi+220h]
    vmovups xmmword ptr [rbx+968h], xmm0
    vmovups xmm1, xmmword ptr [rdi+230h]
    vmovups xmmword ptr [rbx+978h], xmm1
    vmovups xmm0, xmmword ptr [rdi+240h]
    vmovups xmmword ptr [rbx+988h], xmm0
    vmovups xmm1, xmmword ptr [rdi+250h]
    vmovups xmmword ptr [rbx+998h], xmm1
    vmovups xmm0, xmmword ptr [rdi+260h]
    vmovups xmmword ptr [rbx+9A8h], xmm0
    vmovups xmm1, xmmword ptr [rdi+270h]
    vmovups xmmword ptr [rbx+9B8h], xmm1
  }
  _RBX->brCircle.densityScrollingSpeed = _RDI->brCircle.densityScrollingSpeed;
  _RBX->frameTime = _RDI->frameTime;
  _RBX->localClientNum = _RDI->localClientNum;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+0A0h]
    vmovsd  qword ptr [rbx+4], xmm0
  }
  _RBX->dualViewScopeState.hipFstop = _RDI->dualViewScopeState.hipFstop;
  _RBX->blurRadius = _RDI->blurRadius;
  _RBX->uiBlur = _RDI->uiBlur;
  _RBX->daltonizeMode = _RDI->daltonizeMode;
  _RBX->daltonizeTargets = _RDI->daltonizeTargets;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+288h]
    vmovups ymmword ptr [rbx+18h], ymm0
  }
  _RBX->dofPhysical.viewModelFocusDistance = _RDI->dofPhysical.viewModelFocusDistance;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+10BD0h]
    vmovups xmmword ptr [rbx+0AD8h], xmm0
    vmovups xmm0, xmmword ptr [rdi+2ECh]
    vmovups xmmword ptr [rbx+3Ch], xmm0
  }
  _RBX->lensProfile.UVScale = _RDI->lensProfile.UVScale;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+10F28h]
    vmovsd  qword ptr [rbx+0ABCh], xmm0
  }
  _RBX->radialMotionBlur.strength = _RDI->radialMotionBlur.strength;
  _RBX->viewmodelMotionBlurOverride = _RDI->viewmodelMotionBlurOverride;
  _RBX->worldMotionBlurOverride = _RDI->worldMotionBlurOverride;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+10E3Ch]
    vmovups ymmword ptr [rbx+0F4h], ymm0
    vmovsd  xmm1, qword ptr [rdi+10E5Ch]
    vmovsd  qword ptr [rbx+114h], xmm1
    vmovups ymm0, ymmword ptr [rdi+10E64h]
    vmovups ymmword ptr [rbx+11Ch], ymm0
    vmovups ymm1, ymmword ptr [rdi+10E84h]
    vmovups ymmword ptr [rbx+13Ch], ymm1
    vmovups xmm0, xmmword ptr [rdi+10EA4h]
    vmovups xmmword ptr [rbx+15Ch], xmm0
  }
  _RBX->sunshadowSoftness = _RDI->sunshadowSoftness;
  _RBX->sunshadowSampleSizeNear = _RDI->sunshadowSampleSizeNear;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+10EBCh]
    vmovups ymmword ptr [rbx+16Ch], ymm0
    vmovups xmm1, xmmword ptr [rdi+10EDCh]
    vmovups xmmword ptr [rbx+18Ch], xmm1
    vmovsd  xmm0, qword ptr [rdi+10EECh]
    vmovsd  qword ptr [rbx+19Ch], xmm0
    vmovups ymm0, ymmword ptr [rdi+10B78h]
    vmovups ymmword ptr [rbx+748h], ymm0
    vmovups ymm1, ymmword ptr [rdi+10B98h]
    vmovups ymmword ptr [rbx+768h], ymm1
    vmovups xmm0, xmmword ptr [rdi+10BB8h]
    vmovups xmmword ptr [rbx+788h], xmm0
    vmovsd  xmm1, qword ptr [rdi+10BC8h]
    vmovsd  qword ptr [rbx+798h], xmm1
    vmovups xmm0, xmmword ptr [rdi+10BE0h]
    vmovups xmmword ptr [rbx+7A0h], xmm0
    vmovsd  xmm1, qword ptr [rdi+10BF0h]
    vmovsd  qword ptr [rbx+7B0h], xmm1
  }
  _RBX->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta = _RDI->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+10BFCh]
    vmovups xmmword ptr [rbx+7BCh], xmm0
    vmovsd  xmm1, qword ptr [rdi+10C0Ch]
    vmovsd  qword ptr [rbx+7CCh], xmm1
  }
  _RBX->eyeVirtualHighlight.eyeHighlightHeading = _RDI->eyeVirtualHighlight.eyeHighlightHeading;
  _RBX->mdaoCullDistance = _RDI->mdaoCullDistance;
  _RBX->mdaoFadeoutDistance = _RDI->mdaoFadeoutDistance;
  _RBX->mdaoBoneSizeThreshold = _RDI->mdaoBoneSizeThreshold;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+300h]
    vmovups ymmword ptr [rbx+0A08h], ymm0
    vmovups xmm1, xmmword ptr [rdi+320h]
    vmovups xmmword ptr [rbx+0A28h], xmm1
    vmovsd  xmm0, qword ptr [rdi+10760h]
    vmovsd  qword ptr [rbx+1A4h], xmm0
    vmovups xmm0, xmmword ptr [rdi+10C88h]
    vmovups xmmword ptr [rbx+1ACh], xmm0
  }
  _RBX->analogEffects.analogChromaSeparationEffectAmount = _RDI->analogEffects.analogChromaSeparationEffectAmount;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+10C18h]
    vmovups ymmword ptr [rbx+80h], ymm0
    vmovups ymm1, ymmword ptr [rdi+10C38h]
    vmovups ymmword ptr [rbx+0A0h], ymm1
    vmovups ymm0, ymmword ptr [rdi+10C58h]
    vmovups ymmword ptr [rbx+0C0h], ymm0
    vmovups xmm1, xmmword ptr [rdi+10C78h]
    vmovups xmmword ptr [rbx+0E0h], xmm1
  }
  _RBX->playerTeleported = _RDI->playerTeleported;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+10CC8h]
    vmovups xmmword ptr [rbx+1C0h], xmm0
    vmovups xmm1, xmmword ptr [rdi+10CD8h]
    vmovups xmmword ptr [rbx+1D0h], xmm1
    vmovups xmm0, xmmword ptr [rdi+10CE8h]
    vmovups xmmword ptr [rbx+1E0h], xmm0
    vmovups xmm1, xmmword ptr [rdi+10CF8h]
    vmovups xmmword ptr [rbx+1F0h], xmm1
    vmovups xmm0, xmmword ptr [rdi+10D08h]
    vmovups xmmword ptr [rbx+200h], xmm0
    vmovups xmm1, xmmword ptr [rdi+10D18h]
    vmovups xmmword ptr [rbx+210h], xmm1
    vmovups xmm0, xmmword ptr [rdi+10D28h]
    vmovups xmmword ptr [rbx+220h], xmm0
    vmovups xmm1, xmmword ptr [rdi+10D38h]
    vmovups xmmword ptr [rbx+230h], xmm1
    vmovups xmm0, xmmword ptr [rdi+10D48h]
    vmovups xmmword ptr [rbx+240h], xmm0
    vmovups xmm1, xmmword ptr [rdi+10D58h]
    vmovups xmmword ptr [rbx+250h], xmm1
    vmovups xmm0, xmmword ptr [rdi+10D68h]
    vmovups xmmword ptr [rbx+260h], xmm0
    vmovups xmm1, xmmword ptr [rdi+10D78h]
    vmovups xmmword ptr [rbx+270h], xmm1
  }
  _RBX->nvgColorGrading = _RDI->nvgColorGrading;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10D90h]
    vmovss  dword ptr [rbx+288h], xmm0
    vmovups ymm0, ymmword ptr [rdi+10D94h]
    vmovups ymmword ptr [rbx+28Ch], ymm0
    vmovups ymm1, ymmword ptr [rdi+10DB4h]
    vmovups ymmword ptr [rbx+2ACh], ymm1
    vmovups xmm0, xmmword ptr [rdi+10DD4h]
    vmovups xmmword ptr [rbx+2CCh], xmm0
    vmovsd  xmm1, qword ptr [rdi+10DE4h]
    vmovsd  qword ptr [rbx+2DCh], xmm1
  }
  _RCX = &_RBX->shieldEffect;
  _RBX->perceptual = _RDI->perceptual;
  _RDX = &_RDI->shieldEffect;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+10DF4h]
    vmovups xmmword ptr [rbx+2ECh], xmm0
    vmovups xmm0, xmmword ptr [rdi+10E24h]
    vmovups xmmword ptr [rbx+2FCh], xmm0
    vmovsd  xmm1, qword ptr [rdi+10E34h]
    vmovsd  qword ptr [rbx+30Ch], xmm1
  }
  v82 = 5i64;
  do
  {
    _RCX = (GfxShieldEffectState *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rdx] }
    _RDX = (GfxShieldEffectState *)((char *)_RDX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rdx-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rdx-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rdx-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rdx-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rdx-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rdx-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v82;
  }
  while ( v82 );
  *(_QWORD *)&_RCX->m_shieldEffectmode = *(_QWORD *)&_RDX->m_shieldEffectmode;
  _RCX->m_shieldHitArray[0].m_xPos = _RDX->m_shieldHitArray[0].m_xPos;
  _RBX->skyBlendAmount = _RDI->skyBlendAmount;
  _RBX->skyBlendFeather = _RDI->skyBlendFeather;
  _RBX->skyIlluminationRadialDistanceBias = _RDI->skyIlluminationRadialDistanceBias;
  _RBX->deferredScreenshotIndex = _RDI->deferredScreenshotIndex;
  *(_DWORD *)&_RBX->sceneRtWidth = 0;
  _RBX->visionSetToolConnected = _RDI->visionSetToolConnected;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+10F34h]
    vmovups ymmword ptr [rbx+448h], ymm0
    vmovups ymm1, ymmword ptr [rdi+10F54h]
    vmovups ymmword ptr [rbx+468h], ymm1
    vmovups xmm0, xmmword ptr [rdi+10F74h]
    vmovups xmmword ptr [rbx+488h], xmm0
    vmovsd  xmm1, qword ptr [rdi+10F84h]
    vmovsd  qword ptr [rbx+498h], xmm1
    vmovups xmm0, xmmword ptr [rdi+10E08h]
    vmovups xmmword ptr [rbx+72Ch], xmm0
    vmovsd  xmm1, qword ptr [rdi+10E18h]
    vmovsd  qword ptr [rbx+73Ch], xmm1
  }
  _RBX->dustParmas.dustSmoothMax = _RDI->dust.dustSmoothMax;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+10888h]
    vmovups ymmword ptr [rbx+50h], ymm0
    vmovups xmm1, xmmword ptr [rdi+108A8h]
    vmovups xmmword ptr [rbx+70h], xmm1
    vmovss  xmm0, dword ptr [rdi+10F94h]
    vmovss  dword ptr [rbx+0AD0h], xmm0
    vmovss  xmm1, dword ptr [rdi+10F98h]
    vmovss  dword ptr [rbx+0AD4h], xmm1
  }
}

/*
==============
R_SetScreenSpaceReflectionInfo
==============
*/
void R_SetScreenSpaceReflectionInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  bool v14; 
  char v131; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _ESI = 0;
  v14 = rg.ssrMode < 2u;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RDI = viewInfo;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
  }
  viewInfo->input.sceneConstants.ssrMaskWrite = !v14;
  __asm
  {
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
  }
  MatrixTranspose44Aligned(&viewInfo->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &viewInfo->input.sceneConstants.ssrViewProjectionMatrix.m);
  _RAX = r_ssrPositionCorrection;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+100h]
    vsubss  xmm1, xmm0, dword ptr [rdi+280h]
    vmovss  xmm2, dword ptr [rdi+104h]
    vmovss  xmm5, dword ptr [rax+28h]
    vsubss  xmm0, xmm2, dword ptr [rdi+284h]
    vmulss  xmm3, xmm0, xmm5
    vmulss  xmm4, xmm1, xmm5
    vmovss  xmm1, dword ptr [rdi+108h]
    vsubss  xmm2, xmm1, dword ptr [rdi+288h]
    vmovss  dword ptr [rdi+20B0h], xmm4
    vmovss  dword ptr [rdi+20B4h], xmm3
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rdi+20B8h], xmm0
    vmovss  dword ptr [rdi+20BCh], xmm5
  }
  _RDI->input.sceneConstants.ssrPrevFrameViewProjectionMatrixR0 = _RDI->prevFrameViewParms.viewProjectionMatrix.m.m[0];
  _RDI->input.sceneConstants.ssrPrevFrameViewProjectionMatrixR1 = _RDI->prevFrameViewParms.viewProjectionMatrix.m.row1;
  _RDI->input.sceneConstants.ssrPrevFrameViewProjectionMatrixR2 = _RDI->prevFrameViewParms.viewProjectionMatrix.m.row2;
  _RDI->input.sceneConstants.ssrPrevFrameViewProjectionMatrixR3 = _RDI->prevFrameViewParms.viewProjectionMatrix.m.row3;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm10, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm15, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm14, xmm0, xmm15
    vmovss  xmm7, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm10
    vmulss  xmm11, xmm0, xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm10
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, xmm15
    vaddss  xmm12, xmm1, xmm11
    vxorps  xmm3, xmm3, xmm3
    vmulss  xmm1, xmm14, xmm7
    vaddss  xmm13, xmm2, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vcvtsi2ss xmm3, xmm3, rax
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm6, xmm0, xmm10
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rdi+2280h], xmm6
    vaddss  xmm1, xmm3, xmm7
    vmulss  xmm5, xmm1, xmm15
    vaddss  xmm1, xmm0, xmm2
    vsubss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rdi+2284h], xmm5
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vaddss  xmm1, xmm0, xmm3
    vmulss  xmm4, xmm2, xmm10
    vsubss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rdi+2288h], xmm4
    vmovss  xmm4, cs:__real@40000000
    vmulss  xmm3, xmm2, xmm15
    vmovss  dword ptr [rdi+228Ch], xmm3
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm2, xmm2, rax
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm8, xmm0, xmm10
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm3, xmm3, rax
    vcvtsi2ss xmm0, xmm0, rax
    vaddss  xmm1, xmm3, xmm7
    vmulss  xmm9, xmm1, xmm15
    vaddss  xmm1, xmm0, xmm2
    vsubss  xmm2, xmm1, xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vaddss  xmm1, xmm0, xmm3
    vmulss  xmm6, xmm2, xmm10
    vmovss  xmm10, cs:__real@3f800000
    vsubss  xmm2, xmm1, xmm7
    vmulss  xmm7, xmm2, xmm15
    vsubss  xmm0, xmm6, xmm8
    vdivss  xmm3, xmm10, xmm0
    vsubss  xmm1, xmm7, xmm9
    vdivss  xmm5, xmm10, xmm1
    vmulss  xmm0, xmm11, xmm4
    vmulss  xmm1, xmm0, xmm3
    vmulss  xmm2, xmm14, xmm5
    vmulss  xmm0, xmm12, xmm4
    vmovss  dword ptr [rdi+20D0h], xmm1
    vmovss  dword ptr [rdi+20D4h], xmm2
    vsubss  xmm1, xmm0, xmm8
    vsubss  xmm2, xmm1, xmm6
    vmulss  xmm3, xmm2, xmm3
    vmovss  dword ptr [rdi+20D8h], xmm3
    vmulss  xmm0, xmm13, xmm4
    vsubss  xmm1, xmm9, xmm0
    vaddss  xmm2, xmm1, xmm7
    vmulss  xmm3, xmm2, xmm5
    vmovss  dword ptr [rdi+20DCh], xmm3
  }
  _ECX = rg.ssrMode;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, xmm15
    vmovd   xmm0, ecx
    vmovd   xmm1, esi
    vpcmpeqd xmm2, xmm0, xmm1
    vxorps  xmm3, xmm3, xmm3
    vblendvps xmm0, xmm10, xmm3, xmm2
    vmovss  [rsp+0D8h+var_B8], xmm0
  }
  if ( rg.ssrMode )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+37D0h]
      vmulss  xmm3, xmm0, dword ptr [rax+28h]
    }
  }
  __asm
  {
    vmovss  xmm1, [rsp+0D8h+var_B8]
    vmovaps xmm14, [rsp+0D8h+var_98]
  }
  _R11 = &v131;
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
    vmovaps xmm15, [rsp+0D8h+var_A8]
    vmulss  xmm0, xmm3, xmm4
  }
  _RDI->input.sceneConstants.ssrFadePS.v[3] = 0.0;
  __asm
  {
    vmovss  dword ptr [rdi+20C0h], xmm0
    vmovss  dword ptr [rdi+20C8h], xmm1
    vmovss  dword ptr [rdi+20C4h], xmm4
  }
}

/*
==============
R_SetShadowConstants
==============
*/
void R_SetShadowConstants(GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow)
{
  GfxSunShadowProjection *p_sunProj; 
  __int64 v7; 
  float *v8; 
  vec2_t *eyeOffset; 
  signed __int64 v10; 
  float v13; 
  float v18; 
  char v38; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int v54; 
  __int128 v64; 

  _RDI = sunShadow;
  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  p_sunProj = &sunShadow->sunProj;
  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  _RBX = viewInfo;
  v7 = 4i64;
  v8 = &viewInfo->input.sceneConstants.sunshadowSwitchPartition[0].v[2];
  eyeOffset = p_sunProj->eyeOffset;
  v10 = (char *)p_sunProj - (char *)_RBX;
  do
  {
    ++eyeOffset;
    *(v8 - 2) = *(float *)((char *)v8 + v10 - 7432);
    *(v8 - 1) = *(float *)((char *)v8 + v10 - 7428);
    *v8 = *(float *)((char *)v8 + v10 - 7424);
    v8[1] = *(float *)((char *)v8 + v10 - 7420);
    v8 += 4;
    v8[10] = eyeOffset[-1].v[0];
    v8[11] = eyeOffset[-1].v[1];
    v8[26] = *(float *)((char *)v8 + v10 - 7352);
    v8[27] = *(float *)((char *)v8 + v10 - 7348);
    v8[28] = *(float *)((char *)v8 + v10 - 7344);
    v8[29] = *(float *)((char *)v8 + v10 - 7340);
    --v7;
  }
  while ( v7 );
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4F44h]
    vmovss  xmm0, dword ptr [rdi+4F3Ch]
  }
  v13 = _RDI->cloudShadow.lookupMatrix[0][0];
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+4F4Ch]
    vmovss  dword ptr [rbx+1E34h], xmm0
    vmovss  dword ptr [rbx+1E38h], xmm1
    vmovss  dword ptr [rbx+1E3Ch], xmm2
  }
  _RBX->input.sceneConstants.cloudShadowLookupMatrixR0.v[0] = v13;
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4F50h]
    vmovss  xmm1, dword ptr [rdi+4F48h]
    vmovss  xmm0, dword ptr [rdi+4F40h]
  }
  v18 = _RDI->cloudShadow.lookupMatrix[0][1];
  __asm
  {
    vmovss  dword ptr [rbx+1E44h], xmm0
    vmovss  dword ptr [rbx+1E48h], xmm1
    vmovss  dword ptr [rbx+1E4Ch], xmm3
  }
  _RBX->input.sceneConstants.cloudShadowLookupMatrixR1.v[0] = v18;
  R_SetCloudShadowParams(&_RDI->cloudShadow, _RBX);
  R_SunShadow_GetMapSize();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rbx+1DC0h], xmm0
    vmovss  dword ptr [rbx+1DC4h], xmm0
    vdivss  xmm0, xmm7, xmm0
    vmovss  dword ptr [rbx+1DC8h], xmm0
    vmovss  dword ptr [rbx+1DCCh], xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  if ( sm_sunPoissonFiltering->current.enabled )
  {
    _RBX->input.sceneConstants.sunShadowMapFilterRadius.v[0] = _RDI->filterRadius.v[0];
    _RBX->input.sceneConstants.sunShadowMapFilterRadius.v[1] = _RDI->filterRadius.v[1];
    _RBX->input.sceneConstants.sunShadowMapFilterRadius.v[2] = _RDI->filterRadius.v[2];
    __asm { vmovss  xmm0, dword ptr [rdi+4F98h] }
  }
  else
  {
    *(_QWORD *)_RBX->input.sceneConstants.sunShadowMapFilterRadius.v = 0i64;
    _RBX->input.sceneConstants.sunShadowMapFilterRadius.v[2] = 0.0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovss  dword ptr [rbx+1DDCh], xmm0 }
  if ( !sm_sunStageBounds->current.enabled )
    goto LABEL_10;
  if ( !_RBX->stageInfo.activeStageValid )
    goto LABEL_10;
  _RAX = sm_sunStageBoundsFeather;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+28h]
    vcomiss xmm1, xmm6
  }
  if ( _RBX->stageInfo.activeStageValid )
  {
    __asm { vdivss  xmm2, xmm7, xmm1 }
  }
  else
  {
LABEL_10:
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm2, xmm2, xmm2
    }
  }
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.sdfShadowPenumbra; r_globals_t rg
    vmovss  dword ptr [rbx+1C70h], xmm0
    vmovss  dword ptr [rbx+1C74h], xmm1
    vmovss  dword ptr [rbx+1C78h], xmm2
  }
  _RBX->input.sceneConstants.staticSunShadowPenumbra.v[3] = 0.0;
  _RSI = r_sunShadowParams;
  if ( !r_sunShadowParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+30h]
    vmovss  xmm3, dword ptr [rsi+34h]
    vmovss  xmm4, dword ptr [rsi+28h]
    vmovss  xmm2, dword ptr [rsi+2Ch]
    vmulss  xmm1, xmm0, cs:__real@37800000
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx+1C60h], xmm4
    vmovss  dword ptr [rbx+1C64h], xmm2
    vmovss  dword ptr [rbx+1C68h], xmm1
    vmovss  dword ptr [rbx+1C6Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+4F74h]
    vmaxss  xmm1, xmm0, cs:__real@34000000
    vdivss  xmm3, xmm7, xmm1
  }
  if ( !rg.useCachedSunShadow )
    goto LABEL_18;
  if ( _RDI->firstCachedSunShadowPartition )
    goto LABEL_18;
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [rcx+rdi+9B0h]
    vcomiss xmm0, xmm6
  }
  if ( ((8656 * (unsigned __int128)(unsigned int)-_RDI->firstCachedSunShadowPartition) >> 64 != 0) | v38 )
  {
LABEL_18:
    __asm { vmovups xmm0, cs:__xmm@00000000000000003f80000000000000 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm4, xmm0
      vxorps  xmm1, xmm0, xmm5
    }
    *((_QWORD *)&v64 + 1) = 0i64;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+30h]
      vmovss  xmm0, xmm0, xmm1
      vaddss  xmm2, xmm4, xmm7
      vinsertps xmm0, xmm0, xmm2, 10h
      vmovups xmmword ptr [rsp+30h], xmm0
    }
  }
  __asm { vmovups xmmword ptr [rbx+1E00h], xmm0 }
  if ( !rg.useCachedSunShadow )
    goto LABEL_24;
  firstCachedSunShadowPartition = _RDI->firstCachedSunShadowPartition;
  if ( firstCachedSunShadowPartition > 1 )
    goto LABEL_24;
  if ( !_RDI->lastCachedSunShadowPartition )
    goto LABEL_24;
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [rcx+rdi+9B0h]
    vcomiss xmm0, xmm6
  }
  if ( !(((8656 * (unsigned __int128)(1 - firstCachedSunShadowPartition)) >> 64 != 0) | v38) )
  {
    __asm
    {
      vdivss  xmm0, xmm4, xmm0
      vxorps  xmm1, xmm0, xmm5
    }
    *((_QWORD *)&v64 + 1) = 0i64;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+30h]
      vmovss  xmm0, xmm0, xmm1
      vaddss  xmm2, xmm4, xmm7
      vinsertps xmm0, xmm0, xmm2, 10h
      vmovups xmmword ptr [rsp+30h], xmm0
    }
  }
  else
  {
LABEL_24:
    __asm { vmovups xmm0, cs:__xmm@00000000000000003f80000000000000 }
  }
  __asm { vmovups xmmword ptr [rbx+1E10h], xmm0 }
  if ( !rg.useCachedSunShadow )
    goto LABEL_30;
  v54 = _RDI->firstCachedSunShadowPartition;
  if ( v54 > 2 )
    goto LABEL_30;
  if ( _RDI->lastCachedSunShadowPartition < 2u )
    goto LABEL_30;
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [rcx+rdi+9B0h]
    vcomiss xmm0, xmm6
  }
  if ( ((8656 * (unsigned __int128)(2 - v54)) >> 64 != 0) | v38 )
  {
LABEL_30:
    __asm { vmovups xmm0, cs:__xmm@00000000000000003f80000000000000 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm4, xmm0
      vxorps  xmm1, xmm0, xmm5
    }
    *((_QWORD *)&v64 + 1) = 0i64;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+30h]
      vmovss  xmm0, xmm0, xmm1
      vaddss  xmm2, xmm4, xmm7
      vinsertps xmm0, xmm0, xmm2, 10h
    }
  }
  __asm
  {
    vmovups xmmword ptr [rbx+1E20h], xmm0
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  R_CompressedSunShadow_GetShaderGlobals(_RBX, _RDI, &_RBX->input.sceneConstants.compressedSunShadowParams0, &_RBX->input.sceneConstants.compressedSunShadowParams1);
}

/*
==============
R_SetTonemapInfo
==============
*/
void R_SetTonemapInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
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
  const dvar_t *v17; 
  const dvar_t *v20; 
  GfxColorimetry DisplayColorimetry; 
  const dvar_t *v29; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  char v35; 

  _RDI = sceneParms;
  _RBX = viewInfo;
  v5 = DVARBOOL_r_tonemapUseTweaks;
  if ( !DVARBOOL_r_tonemapUseTweaks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUseTweaks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v6 = DVARBOOL_r_tonemap;
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    if ( !DVARBOOL_r_tonemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    _RBX->tonemap.enabled = v6->current.enabled;
    v7 = DVARBOOL_r_tonemapAuto;
    if ( !DVARBOOL_r_tonemapAuto && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapAuto") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    _RBX->tonemap.autoExposure = v7->current.enabled;
    v8 = DVARBOOL_r_tonemapBlend;
    if ( !DVARBOOL_r_tonemapBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapBlend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    _RBX->tonemap.blendExposure = v8->current.enabled;
    v9 = DCONST_DVARBOOL_r_tonemapLockAutoExposureAdjust;
    if ( !DCONST_DVARBOOL_r_tonemapLockAutoExposureAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapLockAutoExposureAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    _RBX->tonemap.lockAutoExposureAdjust = v9->current.enabled;
    v10 = DCONST_DVARFLT_r_tonemapAutoExposureAdjust;
    if ( !DCONST_DVARFLT_r_tonemapAutoExposureAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapAutoExposureAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    LODWORD(_RBX->tonemap.userAutoExposureAdjust) = v10->current.integer;
    v11 = DCONST_DVARFLT_r_tonemapMaxExposure;
    if ( !DCONST_DVARFLT_r_tonemapMaxExposure && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapMaxExposure") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    LODWORD(_RBX->tonemap.userMaxExposure) = v11->current.integer;
    v12 = DVARFLT_r_tonemapExposure;
    if ( !DVARFLT_r_tonemapExposure && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapExposure") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    LODWORD(_RBX->tonemap.userExposure) = v12->current.integer;
    v13 = DVARFLT_r_tonemapExposureAdjust;
    if ( !DVARFLT_r_tonemapExposureAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapExposureAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    LODWORD(_RBX->tonemap.userExposureAdjust) = v13->current.integer;
    v14 = DVARFLT_r_tonemapAdaptSpeed;
    if ( !DVARFLT_r_tonemapAdaptSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapAdaptSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    LODWORD(_RBX->tonemap.adaptSpeed) = v14->current.integer;
    _RBX->tonemap.darkEv = _RDI->tonemap.darkEv;
    _RBX->tonemap.midEv = _RDI->tonemap.midEv;
    _RBX->tonemap.lightEv = _RDI->tonemap.lightEv;
    _RBX->tonemap.darkExposureAdjust = _RDI->tonemap.darkExposureAdjust;
    _RBX->tonemap.midExposureAdjust = _RDI->tonemap.midExposureAdjust;
    _RBX->tonemap.lightExposureAdjust = _RDI->tonemap.lightExposureAdjust;
    _RBX->tonemap.minExposureAdjust = _RDI->tonemap.minExposureAdjust;
    _RBX->tonemap.maxExposureAdjust = _RDI->tonemap.maxExposureAdjust;
    _RSI = DVARFLT_r_tonemapGrainStrength;
    if ( !DVARFLT_r_tonemapGrainStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapGrainStrength") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    v17 = DVARFLT_r_filmGrainAtten;
    if ( !DVARFLT_r_filmGrainAtten && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_filmGrainAtten") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsi+28h]
      vmovaps xmm6, [rsp+68h+var_28]
      vmovss  dword ptr [rbx+383Ch], xmm0
    }
    v20 = DVARFLT_r_tonemapLocalStrength;
    if ( !DVARFLT_r_tonemapLocalStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapLocalStrength") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    LODWORD(_RBX->tonemap.localStrength) = v20->current.integer;
    _RSI = DVARFLT_r_tonemapLocalEvBounds;
    if ( !DVARFLT_r_tonemapLocalEvBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapLocalEvBounds") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm0, dword ptr [rsi+28h] }
  }
  else
  {
    _RBX->tonemap.enabled = _RDI->tonemap.enabled;
    _RBX->tonemap.autoExposure = _RDI->tonemap.autoExposure;
    _RBX->tonemap.blendExposure = _RDI->tonemap.blendExposure;
    _RBX->tonemap.lockAutoExposureAdjust = _RDI->tonemap.lockAutoExposureAdjust;
    _RBX->tonemap.userAutoExposureAdjust = _RDI->tonemap.userAutoExposureAdjust;
    _RBX->tonemap.userMaxExposure = _RDI->tonemap.userMaxExposure;
    _RBX->tonemap.userExposure = _RDI->tonemap.userExposure;
    _RBX->tonemap.userExposureAdjust = _RDI->tonemap.userExposureAdjust;
    _RBX->tonemap.adaptSpeed = _RDI->tonemap.adaptSpeed;
    _RBX->tonemap.darkEv = _RDI->tonemap.darkEv;
    _RBX->tonemap.midEv = _RDI->tonemap.midEv;
    _RBX->tonemap.lightEv = _RDI->tonemap.lightEv;
    _RBX->tonemap.darkExposureAdjust = _RDI->tonemap.darkExposureAdjust;
    _RBX->tonemap.midExposureAdjust = _RDI->tonemap.midExposureAdjust;
    _RBX->tonemap.lightExposureAdjust = _RDI->tonemap.lightExposureAdjust;
    _RBX->tonemap.minExposureAdjust = _RDI->tonemap.minExposureAdjust;
    _RBX->tonemap.maxExposureAdjust = _RDI->tonemap.maxExposureAdjust;
    _RSI = DVARFLT_r_filmGrainAtten;
    if ( !DVARFLT_r_filmGrainAtten && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_filmGrainAtten") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+28h]
      vmulss  xmm1, xmm0, dword ptr [rdi+2C8h]
      vmovss  dword ptr [rbx+383Ch], xmm1
    }
    _RBX->tonemap.localStrength = _RDI->tonemap.localStrength;
    __asm { vmovss  xmm0, dword ptr [rdi+2D0h] }
  }
  __asm { vmovss  dword ptr [rbx+3844h], xmm0 }
  DisplayColorimetry = R_GetDisplayColorimetry();
  _RBX->tonemap.tonemapModeExposureAdjust = 0.0;
  *(double *)&_XMM0 = R_Tonemap_GetUniversalExposureAdjust();
  __asm
  {
    vaddss  xmm1, xmm0, dword ptr [rbx+3818h]
    vmovss  dword ptr [rbx+3818h], xmm1
    vaddss  xmm0, xmm1, dword ptr [rcx+28h]
    vmovss  dword ptr [rbx+3818h], xmm0
  }
  v29 = DVARFLT_r_tonemapFocus;
  if ( !DVARFLT_r_tonemapFocus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapFocus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  LODWORD(_RBX->tonemap.focus) = v29->current.integer;
  if ( DisplayColorimetry == GFX_COLORIMETRY_BT2020_PQ )
  {
    _RAX = r_hdrFilmGrainStrengthScale;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmulss  xmm1, xmm0, dword ptr [rbx+383Ch]
      vmovss  dword ptr [rbx+383Ch], xmm1
    }
  }
  v33 = DVARBOOL_r_tonemapUseTweaks;
  if ( !DVARBOOL_r_tonemapUseTweaks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUseTweaks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( !v33->current.enabled )
    goto LABEL_63;
  v34 = DVARBOOL_r_tonemapAdaptOnPause;
  if ( !DVARBOOL_r_tonemapAdaptOnPause && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapAdaptOnPause") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.enabled )
    v35 = 1;
  else
LABEL_63:
    v35 = 0;
  if ( !((unsigned __int8)v35 | _RDI->visionSetToolConnected) && !_RDI->frameTime )
    _RBX->tonemap.adaptSpeed = 0.0;
  _RBX->tonemap.whitePoint.v[0] = _RDI->tonemap.whitePoint.v[0];
  _RBX->tonemap.whitePoint.v[1] = _RDI->tonemap.whitePoint.v[1];
  _RBX->tonemap.whitePoint.v[2] = _RDI->tonemap.whitePoint.v[2];
  if ( rg.debugShaderEnabled )
  {
    _RBX->tonemap.blendExposure = 0;
    if ( !rg.debugShaderLightingData )
    {
      _RBX->tonemap.autoExposure = 0;
      *(_QWORD *)&_RBX->tonemap.userExposure = 1092964166i64;
      _RBX->tonemap.whitePoint.v[0] = 1.0;
      _RBX->tonemap.whitePoint.v[1] = 1.0;
      _RBX->tonemap.whitePoint.v[2] = 1.0;
    }
  }
  R_UpdateTonemapParms(_RBX, _RDI);
}

/*
==============
R_SetVelocityInfo
==============
*/
void R_SetVelocityInfo(GfxViewInfo *viewInfo, unsigned int sceneWidth, unsigned int sceneHeight)
{
  __int64 v13; 
  __int64 v29; 
  _BYTE v62[32]; 
  char v63[56]; 
  GfxViewParms result; 
  vec3_t origin; 
  tmat44_t<vec4_t> v68; 
  tmat44_t<vec4_t> v69; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> v72; 
  tmat44_t<vec4_t> v73; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> v76; 
  tmat44_t<vec4_t> v77; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> v79; 
  tmat44_t<vec4_t> dst; 
  tmat44_t<vec4_t> v81; 
  tmat44_t<vec4_t> v82; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rcx+168h]
  }
  _RDI = viewInfo;
  if ( (unsigned __int64)v62 != _security_cookie )
    goto LABEL_8;
  __asm { vucomiss xmm6, dword ptr [rcx+16Ch] }
  if ( (unsigned __int64)v62 != _security_cookie )
    goto LABEL_8;
  __asm { vucomiss xmm6, dword ptr [rcx+2E8h] }
  if ( (unsigned __int64)v62 != _security_cookie )
    goto LABEL_8;
  __asm { vucomiss xmm6, dword ptr [rcx+2ECh] }
  if ( (unsigned __int64)v62 != _security_cookie )
  {
LABEL_8:
    __asm
    {
      vmovups ymm1, ymmword ptr [rcx+60h]
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymmword ptr [rbp+620h+var_2F0+20h], ymm1
      vmovups ymm1, ymmword ptr [rcx+1E0h]
      vmovups ymmword ptr [rbp+620h+in1+20h], ymm1
      vmovups ymmword ptr [rbp+620h+var_2F0], ymm0
      vmovups ymm0, ymmword ptr [rcx+1C0h]
      vmovss  dword ptr [rbp+620h+in1+20h], xmm6
      vmovss  dword ptr [rbp+620h+in1+24h], xmm6
      vmovss  dword ptr [rbp+620h+var_2F0+20h], xmm6
      vmovss  dword ptr [rbp+620h+var_2F0+24h], xmm6
      vmovups ymmword ptr [rbp+620h+in1], ymm0
    }
    MatrixIdentity44(&out);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+168h]
      vmovss  xmm1, dword ptr [rdi+16Ch]
      vmovss  dword ptr [rbp+620h+out+30h], xmm0
      vmovss  dword ptr [rbp+620h+out+34h], xmm1
    }
    MatrixMultiply44Aligned(&in1, &out, &in2);
    _RAX = R_GetDepthHackViewParms(&result, &_RDI->viewParmsSet.frames[1].viewParms);
    _RCX = v63;
    v29 = 3i64;
    do
    {
      _RCX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (GfxViewParms *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v29;
    }
    while ( v29 );
    __asm
    {
      vmovups ymm1, [rbp+620h+var_6A0]
      vmovups ymm0, ymmword ptr [rsp+720h+var_6C8+8]
      vmovups ymmword ptr [rbp+620h+var_2B0+20h], ymm1
      vmovss  dword ptr [rbp+620h+var_2B0+20h], xmm6
      vmovss  dword ptr [rbp+620h+var_2B0+24h], xmm6
      vmovups ymmword ptr [rbp+620h+var_2B0], ymm0
    }
    MatrixIdentity44(&out);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+168h]
      vmovss  xmm1, dword ptr [rdi+16Ch]
      vmovss  dword ptr [rbp+620h+out+30h], xmm0
      vmovss  dword ptr [rbp+620h+out+34h], xmm1
    }
    MatrixMultiply44Aligned(&v73, &out, &v76);
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+40h]
      vmovups ymm1, ymmword ptr [rcx+60h]
      vmovups ymmword ptr [rbp+620h+var_2F0], ymm0
      vmovups ymm0, ymmword ptr [rcx+1C0h]
      vmovups ymmword ptr [rbp+620h+var_2F0+20h], ymm1
      vmovups ymm1, ymmword ptr [rcx+1E0h]
      vmovups ymmword ptr [rbp+620h+in2], ymm0
      vmovups ymmword ptr [rbp+620h+in2+20h], ymm1
      vmovups ymmword ptr [rbp+620h+in1], ymm0
      vmovups ymmword ptr [rbp+620h+in1+20h], ymm1
    }
    _RAX = R_GetDepthHackViewParms(&result, &viewInfo->viewParmsSet.frames[1].viewParms);
    _RCX = v63;
    v13 = 3i64;
    do
    {
      _RCX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (GfxViewParms *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v13;
    }
    while ( v13 );
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+720h+var_6C8+8]
      vmovups ymm1, [rbp+620h+var_6A0]
      vmovups ymmword ptr [rbp+620h+var_1F0], ymm0
      vmovups ymmword ptr [rbp+620h+var_1F0+20h], ymm1
    }
  }
  MatrixForViewerOrthogonalNoOrigin(&_RDI->viewParmsSet.frames[1].viewParms.camera.axis, &mtx);
  MatrixMultiply44Aligned(&mtx, &in2, &_RDI->prevViewProjectionMatrix.m);
  MatrixMultiply44Aligned(&mtx, &v76, &_RDI->prevDepthHackViewProjectionMatrix.m);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+280h]
    vsubss  xmm1, xmm0, dword ptr [rdi+100h]
    vmovss  xmm2, dword ptr [rdi+284h]
    vsubss  xmm0, xmm2, dword ptr [rdi+104h]
    vmovss  dword ptr [rbp+620h+origin], xmm1
    vmovss  xmm1, dword ptr [rdi+288h]
    vsubss  xmm2, xmm1, dword ptr [rdi+108h]
    vmovss  dword ptr [rbp+620h+origin+8], xmm2
    vmovss  dword ptr [rbp+620h+origin+4], xmm0
  }
  MatrixForViewerOrthogonal(&origin, &_RDI->viewParmsSet.frames[1].viewParms.camera.axis, &mtx);
  MatrixMultiply44Aligned(&mtx, &in1, &v79);
  __asm
  {
    vmovss  dword ptr [rbp+620h+origin], xmm6
    vmovss  dword ptr [rbp+620h+origin+4], xmm6
    vmovss  dword ptr [rbp+620h+origin+8], xmm6
  }
  MatrixForViewerOrthogonal(&origin, &_RDI->viewParmsSet.frames[0].viewParms.camera.axis, &v77);
  MatrixMultiply44Aligned(&v77, &v72, &mat);
  __asm
  {
    vmovss  xmm0, cs:__real@40000000
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, r14
    vdivss  xmm1, xmm0, xmm2
    vmovss  xmm0, cs:__real@c0000000
    vmulss  xmm2, xmm2, cs:__real@3f000000
    vmovss  dword ptr [rbp+620h+var_3B0], xmm1
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, rsi
    vdivss  xmm1, xmm0, xmm4
    vmovaps ymm0, cs:__ymm@3f800000000000003f800000bf800000000000003f8208210000000000000000
    vmovups ymmword ptr [rbp+620h+var_3B0+20h], ymm0
    vmulss  xmm0, xmm4, cs:__real@bf000000
    vmovss  dword ptr [rbp+620h+var_3F0+14h], xmm0
    vmovups xmm0, cs:__xmm@000000003f7c00000000000000000000
    vmovups xmmword ptr [rbp+620h+var_3F0+20h], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rbp+620h+var_3B0+14h], xmm1
    vmulss  xmm1, xmm4, cs:__real@3f000000
    vmovss  dword ptr [rbp+620h+var_3F0+3Ch], xmm0
    vmovss  dword ptr [rbp+620h+var_3B0+18h], xmm6
    vmovss  dword ptr [rbp+620h+var_3B0+1Ch], xmm6
    vmovss  dword ptr [rbp+620h+var_3F0], xmm2
    vmovss  dword ptr [rbp+620h+var_3F0+18h], xmm6
    vmovss  dword ptr [rbp+620h+var_3F0+1Ch], xmm6
    vmovss  dword ptr [rbp+620h+var_3F0+30h], xmm2
    vmovss  dword ptr [rbp+620h+var_3F0+34h], xmm1
    vmovss  dword ptr [rbp+620h+var_3F0+38h], xmm6
    vmovups xmmword ptr [rbp+620h+var_3B0+4], xmm6
    vmovups xmmword ptr [rbp+620h+var_3F0+4], xmm6
  }
  MatrixInverse44Aligned(&mat, &dst);
  MatrixMultiply44Aligned(&dst, &v79, &v81);
  MatrixMultiply44Aligned(&v69, &v81, &v82);
  MatrixMultiply44Aligned(&v82, &v68, &_RDI->curToPrevPixelMatrix.m);
  _R11 = &v83;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
R_SetViewParmsForScene
==============
*/
void R_SetViewParmsForScene(const refdef_t *refdef, const GfxSceneViewParms *sceneViewParms, GfxViewParms *viewParms)
{
  char v9; 
  tmat44_t<vec4_t> out; 
  GfxMatrix in; 
  tmat44_t<vec4_t> dst; 

  _RDI = viewParms;
  memset_0(viewParms, 0, sizeof(GfxViewParms));
  if ( sceneViewParms )
  {
    _RDI->subpixelOffset.v[0] = sceneViewParms->subpixelOffset.v[0];
    _RDI->subpixelOffset.v[1] = sceneViewParms->subpixelOffset.v[1];
    _RDI->cameraMotion = sceneViewParms->cameraMotion;
  }
  R_SetCameraForView(&refdef->view, &_RDI->camera);
  MatrixForViewerOrthogonalNoOrigin(&_RDI->camera.axis, &_RDI->viewMatrix.m);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+148h]; zNear
    vmovss  xmm1, dword ptr [rdi+134h]; tanHalfFovY
    vmovss  xmm0, dword ptr [rdi+130h]; tanHalfFovX
  }
  InfinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &_RDI->projectionMatrix.m);
  _RCX = &_RDI->subpixelOffset;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rcx]
  }
  if ( !v9 )
    goto LABEL_5;
  __asm { vucomiss xmm0, dword ptr [rcx+4] }
  if ( !v9 )
  {
LABEL_5:
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymm1, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rsp+108h+in.m], ymm0
      vmovups ymmword ptr [rsp+108h+in.m+20h], ymm1
    }
    R_ApplySubPixelOffset(_RCX, &in, &_RDI->projectionMatrix);
  }
  MatrixMultiply44Aligned(&_RDI->viewMatrix.m, &_RDI->projectionMatrix.m, &_RDI->viewProjectionMatrix.m);
  MatrixInverse44Aligned(&_RDI->viewProjectionMatrix.m, &dst);
  MatrixIdentity44(&out);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+100h]
    vmovss  xmm1, dword ptr [rdi+104h]
    vmovss  dword ptr [rsp+108h+out+30h], xmm0
    vmovss  xmm0, dword ptr [rdi+108h]
    vmovss  dword ptr [rsp+108h+out+38h], xmm0
    vmovss  dword ptr [rsp+108h+out+34h], xmm1
  }
  MatrixMultiply44Aligned(&dst, &out, &_RDI->inverseViewProjectionMatrix.m);
}

/*
==============
R_SetVolumeLightScatterInfo
==============
*/
void R_SetVolumeLightScatterInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms)
{
  _RDI = sceneParms;
  _RBX = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3475, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3476, ASSERT_TYPE_ASSERT, "(sceneParms)", (const char *)&queryFormat, "sceneParms") )
    __debugbreak();
  if ( (*((_DWORD *)&_RBX->viewportFeatures + 10) & 0x40000) != 0 )
  {
    _RBX->volumeLightScatter.enabled = 0;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+0F4h]
      vmovups ymmword ptr [rbx+2E40h], ymm0
      vmovsd  xmm1, qword ptr [rdi+114h]
      vmovsd  qword ptr [rbx+2E60h], xmm1
    }
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx+2ECh]
      vmovups xmmword ptr [rcx+3864h], xmm0
    }
  }
}

/*
==============
R_SetWorstCaseMinObjectContribution
==============
*/

void __fastcall R_SetWorstCaseMinObjectContribution(double umbraWorstCaseMinObjectContribution, double _XMM1_8)
{
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.umbraWorstCaseMinObjectContribution; r_globals_t rg
    vucomiss xmm6, xmm0
    vcvtss2sd xmm3, xmm6, xmm6
    vcvtss2sd xmm2, xmm0, xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
  }
  Com_Printf(14, "R_SetWorstCaseMinObjectContribution changing from %f to %f\n", *(double *)&_XMM2, *(double *)&_XMM3);
  __asm
  {
    vmovss  cs:?rg@@3Ur_globals_t@@A.umbraWorstCaseMinObjectContribution, xmm6; r_globals_t rg
    vmovaps xmm6, [rsp+68h+var_18]
  }
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
  float dustTiling; 
  char v24; 
  int v78; 
  Material *dustMaterial; 
  __int64 v88; 
  GfxImage *image; 
  TextureSemantic semantic; 
  vec3_t angles; 
  vec3_t forward; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0A14h]
    vmovss  xmm1, dword ptr [rcx+0A10h]
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
  }
  _RBX = viewInfo;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmmword ptr [r11-78h], xmm11
    vmovaps xmmword ptr [r11-88h], xmm12
    vmovaps xmmword ptr [r11-98h], xmm13
    vxorps  xmm10, xmm10, xmm10
    vmovaps [rsp+118h+var_A8], xmm14
    vmovaps [rsp+118h+var_B8], xmm15
    vmovss  dword ptr [rsp+118h+angles], xmm0
    vmovss  dword ptr [rsp+118h+angles+4], xmm1
    vmovss  dword ptr [rsp+118h+angles+8], xmm10
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0A1Ch]
    vmovss  xmm2, dword ptr [rbx+0A28h]
    vmovss  xmm1, dword ptr [rbx+0A24h]
  }
  dustTiling = _RBX->dustParams.dustTiling;
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+118h+forward]
    vucomiss xmm5, xmm10
    vmovss  xmm11, dword ptr [rsp+118h+forward+4]
    vmovss  xmm6, dword ptr [rsp+118h+forward+8]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  dword ptr [rbx+1964h], xmm0
    vmovss  dword ptr [rbx+1968h], xmm1
    vmovss  dword ptr [rbx+196Ch], xmm2
  }
  _RBX->input.sceneConstants.dustShaderTiling.v[0] = dustTiling;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0A20h]
    vmovss  dword ptr [rbx+193Ch], xmm0
    vmovss  dword ptr [rbx+1930h], xmm5
    vmovss  dword ptr [rbx+1934h], xmm11
    vmovss  dword ptr [rbx+1938h], xmm6
  }
  if ( v24 )
  {
    __asm
    {
      vxorps  xmm3, xmm5, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm3, xmm3
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm15, xmm1, xmm3
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm14, xmm1, xmm6
      vmovss  [rsp+118h+var_E8], xmm0
      vmulss  xmm0, xmm5, xmm15
      vmulss  xmm1, xmm6, xmm14
      vsubss  xmm6, xmm1, xmm0
      vmulss  xmm1, xmm11, xmm14
      vxorps  xmm5, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm7, xmm11, xmm15
      vmulss  xmm2, xmm7, xmm7
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vmovss  xmm2, [rsp+118h+var_E8]
      vblendvps xmm0, xmm4, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm10, xmm1, xmm7
      vmulss  xmm12, xmm1, xmm6
      vmulss  xmm13, xmm1, xmm5
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm3, xmm11, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm13, xmm3, xmm1
      vmulss  xmm12, xmm6, xmm1
      vmulss  xmm7, xmm5, xmm13
      vmulss  xmm1, xmm6, xmm12
      vmulss  xmm0, xmm11, xmm13
      vsubss  xmm6, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm12
      vxorps  xmm5, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm14, xmm6, xmm1
      vmulss  xmm2, xmm7, xmm1
      vmulss  xmm15, xmm5, xmm1
    }
  }
  __asm { vmovaps xmm11, [rsp+118h+var_78] }
  v78 = 0;
  __asm
  {
    vmovaps xmm9, [rsp+118h+var_58]
    vmovaps xmm7, [rsp+118h+var_48]
    vmovaps xmm6, [rsp+118h+var_38]
    vmovss  dword ptr [rbx+1940h], xmm14
    vmovaps xmm14, [rsp+118h+var_A8]
    vmovss  dword ptr [rbx+1948h], xmm15
    vmovaps xmm15, [rsp+118h+var_B8]
  }
  _RBX->input.sceneConstants.dustShaderTangent.v[3] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+1944h], xmm2
    vmovss  dword ptr [rbx+1950h], xmm10
    vmovaps xmm10, [rsp+118h+var_68]
    vmovss  dword ptr [rbx+1954h], xmm12
    vmovaps xmm12, [rsp+118h+var_88]
    vmovss  dword ptr [rbx+1958h], xmm13
    vmovaps xmm13, [rsp+118h+var_98]
  }
  _RBX->input.sceneConstants.dustShaderBinormal.v[3] = 0.0;
  dustMaterial = rgp.world->dustMaterial;
  if ( dustMaterial && dustMaterial->textureCount )
  {
    v88 = 0i64;
    do
    {
      image = dustMaterial->textureTable[v88].image;
      semantic = image->semantic;
      if ( semantic == TS_METALNESS_MAP )
      {
        if ( _RBX == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        _RBX->input.codeImages[10] = image;
      }
      else if ( semantic == TS_NORMAL_OCCLUSION_GLOSS_MAP )
      {
        if ( _RBX == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        _RBX->input.codeImages[11] = image;
      }
      ++v78;
      ++v88;
      dustMaterial = rgp.world->dustMaterial;
    }
    while ( v78 < dustMaterial->textureCount );
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
  char v7; 
  tmat44_t<vec4_t> out; 
  GfxMatrix in; 
  tmat44_t<vec4_t> dst; 

  _RDI = viewParms;
  _RBX = zPlaneNear;
  MatrixForViewerOrthogonalNoOrigin(&viewParms->camera.axis, &viewParms->viewMatrix.m);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+rbx*4+140h]; zNear
    vmovss  xmm1, dword ptr [rdi+134h]; tanHalfFovY
    vmovss  xmm0, dword ptr [rdi+130h]; tanHalfFovX
  }
  InfinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &_RDI->projectionMatrix.m);
  _RCX = &_RDI->subpixelOffset;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rcx]
  }
  if ( !v7 )
    goto LABEL_3;
  __asm { vucomiss xmm0, dword ptr [rcx+4] }
  if ( !v7 )
  {
LABEL_3:
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+40h]
      vmovups ymm1, ymmword ptr [rdi+60h]
      vmovups ymmword ptr [rsp+0F8h+in.m], ymm0
      vmovups ymmword ptr [rsp+0F8h+in.m+20h], ymm1
    }
    R_ApplySubPixelOffset(_RCX, &in, &_RDI->projectionMatrix);
  }
  MatrixMultiply44Aligned(&_RDI->viewMatrix.m, &_RDI->projectionMatrix.m, &_RDI->viewProjectionMatrix.m);
  MatrixInverse44Aligned(&_RDI->viewProjectionMatrix.m, &dst);
  MatrixIdentity44(&out);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+100h]
    vmovss  xmm1, dword ptr [rdi+104h]
    vmovss  dword ptr [rsp+0F8h+out+30h], xmm0
    vmovss  xmm0, dword ptr [rdi+108h]
    vmovss  dword ptr [rsp+0F8h+out+38h], xmm0
    vmovss  dword ptr [rsp+0F8h+out+34h], xmm1
  }
  MatrixMultiply44Aligned(&dst, &out, &_RDI->inverseViewProjectionMatrix.m);
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
  char v41; 
  char v42; 
  GfxImage *heightMap; 
  GfxImage *detailMask; 
  GfxImage *SVDCoefficient; 
  GfxImage *SVDBasis; 
  GfxImage *v47; 
  GfxImage *v48; 
  GfxImage *blackImage3D; 
  const GfxImage *LightmapAtlasTexture; 
  const GfxImage *v51; 
  const GfxImage *v52; 
  const GfxImage *LightGridVolumeAtlasTexture; 
  const GfxImage *v54; 
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
  _RAX = rgp.world;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+3A10h]
    vcomiss xmm0, dword ptr [rax+3A00h]
  }
  if ( v41 | v42 )
  {
    v47 = rgp.blackImage;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[17] = v47;
    v48 = rgp.blackImage;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codePersistentImages[18] = v48;
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
  v51 = R_GetLightmapAtlasTexture(viewInfo->input.data, rgp.world->draw.lightmapType, 1u);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[29] = v51;
  v52 = R_GetLightmapAtlasTexture(viewInfo->input.data, rgp.world->draw.lightmapType, 2u);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[30] = v52;
  LightGridVolumeAtlasTexture = R_GetLightGridVolumeAtlasTexture(viewInfo->input.data, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[23] = LightGridVolumeAtlasTexture;
  v54 = R_GetLightGridVolumeAtlasTexture(viewInfo->input.data, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[24] = v54;
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
  int v25; 
  int v26; 
  int v27; 
  vec3_t outOrigin; 
  __int64 v29; 
  vec3_t angles; 
  vec4_t quat; 
  void *retaddr; 

  _RAX = &retaddr;
  v29 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _R14 = tmpBounds;
  _RSI = tmpOrg;
  _RDI = sceneEnt;
  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1685, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  if ( !_RDI->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1686, ASSERT_TYPE_ASSERT, "(sceneEnt->obj)", (const char *)&queryFormat, "sceneEnt->obj") )
    __debugbreak();
  if ( !_RDI->info.pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1687, ASSERT_TYPE_ASSERT, "(sceneEnt->info.pose)", (const char *)&queryFormat, "sceneEnt->info.pose") )
    __debugbreak();
  _RBX = _RDI->info.pose;
  *(double *)&_XMM0 = DObjGetRadius(_RDI->obj);
  __asm { vmovaps xmm6, xmm0 }
  CG_GetPoseOrigin(_RBX, (vec3_t *)_RSI);
  SetSecureVec3((const vec3_t *)_RSI, &_RDI->placement.placement.origin, s_origin_aab_X, s_origin_aab_Y, s_origin_aab_Z);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  dword ptr [rsp+0B8h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vmovss  dword ptr [rsp+0B8h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  dword ptr [rsp+0B8h+angles+8], xmm0
  }
  AnglesToQuat(&angles, &quat);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0B8h+quat]
    vmovups xmmword ptr [rdi+0Ch], xmm0
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 1701, ASSERT_TYPE_ASSERT, "(!IS_NAN( tmpOrg.x ) && !IS_NAN( tmpOrg.y ) && !IS_NAN( tmpOrg.z ))", (const char *)&queryFormat, "!IS_NAN( tmpOrg.x ) && !IS_NAN( tmpOrg.y ) && !IS_NAN( tmpOrg.z )") )
      __debugbreak();
  }
  CG_GetPrevPoseOrigin(_RBX, &outOrigin);
  SetSecureVec3(&outOrigin, &_RDI->prevPlacement.prevPlacement.origin, s_ps_origin_aab_X, s_ps_origin_aab_Y, s_ps_origin_aab_Z);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 636, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+78h]
    vmovss  dword ptr [rsp+0B8h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+7Ch]
    vmovss  dword ptr [rsp+0B8h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rbx+80h]
    vmovss  dword ptr [rsp+0B8h+angles+8], xmm0
  }
  AnglesToQuat(&angles, &quat);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0B8h+quat]
    vmovups xmmword ptr [rdi+28h], xmm0
  }
  _R14->midPoint.v[0] = _RSI->x;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [r14+4], xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [r14+8], xmm1
    vmovss  dword ptr [r14+0Ch], xmm6
    vmovss  dword ptr [r14+10h], xmm6
    vmovss  dword ptr [r14+14h], xmm6
  }
  GfxSceneEntity_SetBounds(&_RDI->cull, _R14);
  memset(&outOrigin, 0, sizeof(outOrigin));
  __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
}

/*
==============
R_SetupSceneRtInput
==============
*/
void R_SetupSceneRtInput(GfxViewInfo *viewInfo, unsigned int sceneWidth, unsigned int sceneHeight, unsigned int maxSceneRtWidth, unsigned int maxSceneRtHeight)
{
  unsigned __int16 frontendPass; 
  const dvar_t *v15; 
  int v16; 
  const dvar_t *v17; 
  int v18; 
  const dvar_t *v19; 
  R_RT_Flags v20; 
  const dvar_t *v24; 
  R_RT_Flags v25; 
  int v26; 
  const dvar_t *v30; 
  int v31; 
  const dvar_t *v49; 
  int v50; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const dvar_t *v57; 
  int v58; 
  R_RT_Image *v63; 
  const dvar_t *v64; 
  int v65; 
  const dvar_t *v66; 
  const dvar_t *v69; 
  int v70; 
  const dvar_t *v74; 
  int v75; 
  const dvar_t *v82; 
  int v83; 
  const dvar_t *v86; 
  int v87; 
  const dvar_t *v91; 
  int v92; 
  bool v99; 
  unsigned int v100; 
  const char **v101; 
  const char *v102; 
  const dvar_t *v103; 
  int v104; 
  unsigned int MapSize; 
  unsigned int v106; 
  unsigned int m_allocCounter; 
  R_RT_Image *blackShadowImage; 
  __int16 v116; 
  unsigned __int16 v117; 
  const char *v120; 
  const char *v121; 
  int v122; 
  bool v125; 
  unsigned int v126; 
  unsigned int v127; 
  R_RT_Image *v131; 
  unsigned int v132; 
  const dvar_t *v133; 
  R_RT_Image *zeroImage; 
  GfxImage *blackImage; 
  R_RT_Image *v146; 
  unsigned __int16 v147; 
  const char *v151; 
  const char *v152; 
  int v153; 
  R_RT_Image *v158; 
  unsigned __int16 v159; 
  const char *v163; 
  const char *v164; 
  int v165; 
  unsigned __int16 v172; 
  const char *v176; 
  const char *v177; 
  int v178; 
  unsigned __int16 m_surfaceID; 
  unsigned __int16 v181; 
  R_RT_Image *v185; 
  __int16 v186; 
  R_RT_Image *v188; 
  unsigned int v189; 
  R_RT_Image *v190; 
  unsigned int v195; 
  R_RT_Image *whiteImage; 
  GfxImage *defaultUIntImage; 
  R_RT_Image *v201; 
  unsigned __int16 v202; 
  GfxSSAOMode SSAOMode; 
  const char *v210; 
  R_RT_Image *v215; 
  unsigned int v218; 
  unsigned int v219; 
  unsigned int v220; 
  unsigned int v221; 
  GfxSSRMode SSRMode; 
  R_RT_Image *v233; 
  R_RT_Image *v234; 
  R_RT_Image *blackUintImage; 
  R_RT_Image *v236; 
  R_RT_Image *blackImage3D; 
  R_RT_Image *v247; 
  unsigned int v267; 
  unsigned int v268; 
  unsigned int v269; 
  const char **v270; 
  char v272; 
  unsigned int spotShadowUpdateLimit; 
  const char *v275; 
  const GfxImage *Image; 
  const GfxImage *v314; 
  const GfxImage *FogLightmapImage; 
  const GfxWrappedRWBuffer *ClusterMaskView; 
  const GfxWrappedBuffer *FrustumLightsTileBuffer; 
  const GfxWrappedBuffer *FrustumLightsClusterBuffer; 
  const GfxImage *SpotShadowArrayImageDraw3D; 
  __int64 arraySliceCount; 
  __int64 mipLimit; 
  float rtFlags; 
  float v329; 
  float v330; 
  float v331; 
  unsigned int allocWidtha; 
  unsigned int v334; 
  unsigned int v335; 
  unsigned __int16 allocHeight; 
  unsigned int v337; 
  unsigned int v339; 
  unsigned __int16 v340; 
  bool v341; 
  unsigned __int16 v342; 
  unsigned __int16 heighta; 
  R_RT_AllocationLockSentry v345; 
  unsigned int v346; 
  unsigned int v347; 
  unsigned int v348; 
  R_RT_Handle v349; 
  unsigned int v350; 
  unsigned int v351; 
  unsigned int v352; 
  unsigned int v353; 
  __int64 v354; 
  R_RT_Handle v355; 
  __int64 m_sunShadowCascades; 
  unsigned int v357; 
  R_RT_Handle v358; 
  GfxImage *extinction; 
  GfxImage *visibility; 
  __int64 sunShadowOpaqueCascadeCount; 
  GfxViewInfo *viewInfoa; 
  GfxImage *scattering; 
  R_RT_Handle v364; 
  R_RT_Handle v365; 
  R_RT_Handle v366; 
  __int64 v367; 
  R_RT_Handle v368; 
  R_RT_Handle v369; 
  R_RT_DepthHandle result; 
  R_RT_Handle v371; 
  R_RT_Handle v372; 
  vec4_t clearColor[2]; 
  vec4_t v374; 
  R_RT_ColorHandle v375; 
  R_RT_Handle v376; 
  char v377; 
  void *retaddr; 

  _RAX = &retaddr;
  v367 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _R14 = viewInfo;
  viewInfoa = viewInfo;
  if ( sceneWidth > maxSceneRtWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5894, ASSERT_TYPE_ASSERT, "(sceneWidth <= maxSceneRtWidth)", (const char *)&queryFormat, "sceneWidth <= maxSceneRtWidth") )
    __debugbreak();
  if ( sceneHeight > maxSceneRtHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 5895, ASSERT_TYPE_ASSERT, "(sceneHeight <= maxSceneRtHeight)", (const char *)&queryFormat, "sceneHeight <= maxSceneRtHeight") )
    __debugbreak();
  v335 = sceneWidth >> 1;
  v337 = sceneHeight >> 1;
  v334 = maxSceneRtWidth >> 1;
  v339 = maxSceneRtHeight >> 1;
  v353 = sceneWidth >> 2;
  v352 = sceneHeight >> 2;
  v348 = sceneWidth >> 3;
  v347 = sceneHeight >> 3;
  v351 = maxSceneRtWidth >> 2;
  v350 = maxSceneRtHeight >> 2;
  v346 = maxSceneRtWidth >> 3;
  v357 = maxSceneRtHeight >> 3;
  memset_0(&_R14->sceneRtInput, 0, sizeof(_R14->sceneRtInput));
  _R14->sceneRtInput.sceneRtWidth = sceneWidth;
  _R14->sceneRtInput.sceneRtHeight = sceneHeight;
  _R14->sceneRtInput.maxSceneRtWidth = maxSceneRtWidth;
  _R14->sceneRtInput.maxSceneRtHeight = maxSceneRtHeight;
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v345);
  frontendPass = R_RT_NewFrontendPass();
  v340 = frontendPass;
  _R14->sceneRtInput.m_pass = frontendPass;
  v15 = DCONST_DVARINT_r_dccColor;
  if ( !DCONST_DVARINT_r_dccColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = 4097;
  if ( v15->current.integer == 1 )
    v16 = 4105;
  v17 = DCONST_DVARINT_r_dccColor;
  if ( !DCONST_DVARINT_r_dccColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = 1;
  if ( v17->current.integer == 1 )
    v18 = 9;
  v19 = DCONST_DVARBOOL_r_esramDepth;
  if ( !DCONST_DVARBOOL_r_esramDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramDepth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v20 = R_RT_Flag_Stencil;
  if ( v19->current.enabled )
    v20 = R_RT_Flag_MaskDepthOnly|R_RT_Flag_DemandESRAM;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  [rsp+380h+var_330], xmm8
  }
  _RAX = R_RT_CreateDepthForDynSceneResInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_SCENE, v20, R_RT_FlagInternal_Frontend, v329, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Depth", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5929)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [r14+31A0h], ymm0
  }
  v24 = DCONST_DVARBOOL_r_esramColor;
  if ( !DCONST_DVARBOOL_r_esramColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = R_RT_Flag_RTView;
  v26 = 2048;
  if ( v24->current.enabled )
    v26 = 2080;
  _RAX = R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)(v16 | v26), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Color", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5930)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
    }
  }
  __asm { vmovups ymmword ptr [r14+30C0h], ymm0 }
  v30 = DCONST_DVARBOOL_r_esramColor;
  if ( !DCONST_DVARBOOL_r_esramColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = 2048;
  if ( v30->current.enabled )
    v31 = 2080;
  _RAX = R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[4], (R_RT_Flags)(v16 | v31), R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Alpha", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5931)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
    }
  }
  __asm { vmovups ymmword ptr [r14+30E0h], ymm0 }
  if ( _R14->sss.enabled )
  {
    _RAX = R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[11], R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSS Albedo", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5935)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v368);
      if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
      }
    }
    __asm { vmovups ymmword ptr [r14+3100h], ymm0 }
    _RAX = R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[12], R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSS Diffuse", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5936)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v368);
      if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
      }
    }
    __asm { vmovups ymmword ptr [r14+3120h], ymm0 }
    R_RT_Handle::ClearAuxDirty(&_R14->sceneRtInput.m_mainSceneSSSAlbedoRt);
    R_RT_Handle::ClearAuxDirty(&_R14->sceneRtInput.m_mainSceneSSSDiffuseRt);
  }
  else
  {
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rbp+260h+var_190.m_surfaceID]
      vmovups ymmword ptr [r14+3100h], ymm1
    }
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rbp+260h+var_190.m_surfaceID]
      vmovups ymmword ptr [r14+3120h], ymm1
    }
  }
  if ( rg.debugOverdrawOverlay )
  {
    _RAX = R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[23], R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlackBlank, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Overdraw", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5949)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v368);
      if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
        vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
      }
      _RAX = &result;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
      }
      __asm { vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0 }
      _RAX = &result;
    }
  }
  else
  {
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
    }
    _RAX = (R_RT_DepthHandle *)&v368;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [r14+3180h], ymm0
  }
  v49 = DCONST_DVARBOOL_r_esramColorPrepass;
  if ( !DCONST_DVARBOOL_r_esramColorPrepass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColorPrepass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  v50 = 2048;
  if ( v49->current.enabled )
    v50 = 2080;
  _RAX = R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[56], (R_RT_Flags)(v18 | v50), R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend EntityID_Velocity", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5951)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
    }
  }
  _RCX = &_R14->sceneRtInput.m_mainSceneEntityIDVelocityRt;
  __asm { vmovups ymmword ptr [rcx], ymm0 }
  p_m_image = &R_RT_Handle::GetSurface(&_R14->sceneRtInput.m_mainSceneEntityIDVelocityRt)->m_image;
  p_input = &_R14->input;
  if ( _R14 == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _R14->input.codeImages[1] = &p_m_image->m_base;
  v57 = DCONST_DVARBOOL_r_esramColorPrepass;
  if ( !DCONST_DVARBOOL_r_esramColorPrepass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColorPrepass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  v58 = 2048;
  if ( v57->current.enabled )
    v58 = 2080;
  _RAX = R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[63], (R_RT_Flags)(v18 | v58), R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Tangent Frame", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5953)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
    }
  }
  _RCX = &_R14->sceneRtInput.m_mainSceneTangentFrameRt;
  __asm { vmovups ymmword ptr [rcx], ymm0 }
  v63 = &R_RT_Handle::GetSurface(&_R14->sceneRtInput.m_mainSceneTangentFrameRt)->m_image;
  if ( _R14 == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _R14->input.codeImages[2] = &v63->m_base;
  if ( rg.vrsEmissiveOnly )
  {
    v64 = DCONST_DVARINT_r_dccEmissive;
    if ( !DCONST_DVARINT_r_dccEmissive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccEmissive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v64);
    v65 = 32769;
    if ( v64->current.integer == 1 )
      v65 = 32777;
    v66 = DCONST_DVARBOOL_r_esramDepthMSAA;
    if ( !DCONST_DVARBOOL_r_esramDepthMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramDepthMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v66);
    __asm { vmovss  [rsp+380h+var_330], xmm8 }
    _RAX = R_RT_CreateDepthForDynSceneResInternal(&result, v335, v337, v334, v339, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_HALFRES_DEPTH, (R_RT_Flags)((v66->current.enabled ? 0x20 : 0) | 0x8080), R_RT_FlagInternal_Frontend, v330, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend MSAA Depth", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5963)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [r14+3200h], ymm0
    }
    v69 = DCONST_DVARBOOL_r_esramColorMSAA;
    if ( !DCONST_DVARBOOL_r_esramColorMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColorMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v69);
    v70 = 2048;
    if ( v69->current.enabled )
      v70 = 2080;
    _RAX = R_RT_CreateInternal(&result, v335, v337, v334, v339, 1u, 1u, 1u, g_R_RT_renderTargetFmts[13], (R_RT_Flags)(v65 | v70), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend MSAA Color", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5964)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v368);
      if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
      }
    }
    __asm { vmovups ymmword ptr [r14+31C0h], ymm0 }
    v74 = DCONST_DVARBOOL_r_esramAlphaMSAA;
    if ( !DCONST_DVARBOOL_r_esramAlphaMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramAlphaMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v74);
    v75 = 2048;
    if ( v74->current.enabled )
      v75 = 2080;
    _RAX = R_RT_CreateInternal(&result, v335, v337, v334, v339, 1u, 1u, 1u, g_R_RT_renderTargetFmts[14], (R_RT_Flags)(v65 | v75), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend MSAA Alpha", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5965)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v368);
      if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
      }
    }
    __asm { vmovups ymmword ptr [r14+31E0h], ymm0 }
    R_RT_Handle::ClearAuxDirty(&_R14->sceneRtInput.m_msaaSceneDepthRt);
  }
  else
  {
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rbp+260h+var_190.m_surfaceID]
      vmovups ymmword ptr [r14+3200h], ymm1
    }
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rbp+260h+var_190.m_surfaceID]
      vmovups ymmword ptr [r14+31C0h], ymm1
    }
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rbp+260h+var_190.m_surfaceID]
      vmovups ymmword ptr [r14+31E0h], ymm1
    }
  }
  if ( rg.halfResEmissive )
  {
    v82 = DCONST_DVARINT_r_dccEmissive;
    if ( !DCONST_DVARINT_r_dccEmissive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccEmissive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v82);
    v83 = 1;
    if ( v82->current.integer == 1 )
      v83 = 9;
    __asm { vmovss  [rsp+380h+var_330], xmm8 }
    _RAX = R_RT_CreateDepthForDynSceneResInternal(&result, v335, v337, v334, v339, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_HALFRES_DEPTH, R_RT_Flag_Stencil, R_RT_FlagInternal_Frontend, v331, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Half Depth", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5984)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [r14+3260h], ymm0
    }
    v86 = DCONST_DVARBOOL_r_esramColorMSAA;
    if ( !DCONST_DVARBOOL_r_esramColorMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramColorMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v86);
    v87 = 2048;
    if ( v86->current.enabled )
      v87 = 2080;
    _RAX = R_RT_CreateInternal(&result, v335, v337, v334, v339, 1u, 1u, 1u, g_R_RT_renderTargetFmts[13], (R_RT_Flags)(v83 | v87), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Half Color", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5985)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v368);
      if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
      }
    }
    __asm { vmovups ymmword ptr [r14+3220h], ymm0 }
    v91 = DCONST_DVARBOOL_r_esramAlphaMSAA;
    if ( !DCONST_DVARBOOL_r_esramAlphaMSAA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramAlphaMSAA") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v91);
    v92 = 2048;
    if ( v91->current.enabled )
      v92 = 2080;
    _RAX = R_RT_CreateInternal(&result, v335, v337, v334, v339, 1u, 1u, 1u, g_R_RT_renderTargetFmts[14], (R_RT_Flags)(v83 | v92), R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Half Alpha", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(5986)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v368);
      if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
      }
    }
    __asm { vmovups ymmword ptr [r14+3240h], ymm0 }
    R_RT_Handle::ClearAuxDirty(&_R14->sceneRtInput.m_halfSceneDepthRt);
  }
  else
  {
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rbp+260h+var_190.m_surfaceID]
      vmovups ymmword ptr [r14+3260h], ymm1
    }
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rbp+260h+var_190.m_surfaceID]
      vmovups ymmword ptr [r14+3220h], ymm1
    }
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rbp+260h+var_190.m_surfaceID]
      vmovups ymmword ptr [r14+3240h], ymm1
    }
  }
  v99 = (*((_DWORD *)&_R14->viewportFeatures + 11) & 4) != 0;
  v341 = v99;
  if ( rg.sunShadowOpaqueCascadeCount )
  {
    v100 = 2;
    v101 = sunshadowNames;
    m_sunShadowCascades = (__int64)_R14->sceneRtInput.m_sunShadowCascades;
    v354 = 6848i64;
    sunShadowOpaqueCascadeCount = rg.sunShadowOpaqueCascadeCount;
    while ( 1 )
    {
      if ( v99 )
      {
        v102 = *v101;
        v103 = DCONST_DVARBOOL_r_esramShadow;
        if ( !DCONST_DVARBOOL_r_esramShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramShadow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v103);
        v104 = v103->current.enabled ? 0x20 : 0;
        MapSize = R_SunShadow_GetMapSize();
        v106 = R_SunShadow_GetMapSize();
        __asm { vmovss  dword ptr [rbp+260h+clearColor], xmm8 }
        _RAX = R_RT_CreateInternal(&result, v106, MapSize, v106, MapSize, 1u, 1u, 1u, g_R_RT_depthStencilFmts[3], (R_RT_Flags)v104, R_RT_FlagInternal_Frontend|R_RT_FlagInternal_Depth, clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v102, v340, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6006)");
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+260h+var_240.m_surfaceID], ymm0
          vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
          vmovd   eax, xmm0
        }
        if ( (_WORD)_RAX )
        {
          R_RT_Handle::GetSurface(&v368);
          if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x10) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
            __debugbreak();
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
            vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
          }
          _RAX = &result;
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
              __debugbreak();
            __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_240.m_surfaceID] }
          }
          __asm { vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0 }
          _RAX = &result;
        }
      }
      else
      {
        v369.m_surfaceID = 0;
        v369.m_tracking.m_allocCounter = 0;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+260h+var_170.m_tracking.m_name], xmm0
        }
        _RAX = (R_RT_DepthHandle *)&v369;
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+260h+var_2A8.m_surfaceID], ymm0
        vmovd   ebx, xmm0
      }
      m_allocCounter = v349.m_tracking.m_allocCounter;
      if ( (_WORD)_EBX )
      {
        R_RT_Handle::GetSurface(&v349);
        blackShadowImage = &R_RT_Handle::GetSurface(&v349)->m_image;
      }
      else
      {
        if ( v349.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        blackShadowImage = (R_RT_Image *)rgp.blackShadowImage;
      }
      if ( _R14 == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      if ( v100 >= 0x2A )
      {
        LODWORD(mipLimit) = 42;
        LODWORD(arraySliceCount) = v100;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1483, ASSERT_TYPE_ASSERT, "(unsigned)( codePersistentTexture ) < (unsigned)( TEXTURE_SRC_CODE_PERSISTENT_COUNT )", "codePersistentTexture doesn't index TEXTURE_SRC_CODE_PERSISTENT_COUNT\n\t%i not in [0, %i)", arraySliceCount, mipLimit) )
          __debugbreak();
      }
      *(_QWORD *)((char *)p_input->consts[0].v + v354) = blackShadowImage;
      v116 = _EBX & 0x7FFF;
      if ( v116 )
        v117 = v116 | 0x8000;
      else
        v117 = 0;
      v368.m_surfaceID = v117;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+260h+var_2A8.m_tracking.m_allocCounter]
        vmovups xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter], xmm0
        vmovsd  xmm1, [rbp+260h+var_2A8.m_tracking.m_location]
        vmovsd  [rbp+260h+var_190.m_tracking.m_location], xmm1
        vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
        vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      }
      if ( v117 )
      {
        R_RT_Handle::GetSurface(&v368);
        if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x10) == 0 )
        {
          v120 = "!unionHandle.IsValid() || unionHandle.IsDepth()";
          v121 = "(!unionHandle.IsValid() || unionHandle.IsDepth())";
          v122 = 277;
LABEL_232:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v122, ASSERT_TYPE_ASSERT, v121, (const char *)&queryFormat, v120) )
            __debugbreak();
        }
      }
      else if ( m_allocCounter )
      {
        v120 = "!this->m_tracking.m_allocCounter";
        v121 = "(!this->m_tracking.m_allocCounter)";
        v122 = 100;
        goto LABEL_232;
      }
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
      _RCX = m_sunShadowCascades;
      __asm { vmovups ymmword ptr [rcx], ymm0 }
      ++v100;
      v354 += 8i64;
      m_sunShadowCascades = _RCX + 32;
      ++v101;
      v125 = sunShadowOpaqueCascadeCount-- == 1;
      v99 = v341;
      if ( v125 )
      {
        _R14 = viewInfoa;
        frontendPass = v340;
        v25 = R_RT_Flag_RTView;
        break;
      }
    }
  }
  if ( v99 )
  {
    v126 = R_SunShadow_GetMapSize();
    v127 = R_SunShadow_GetMapSize();
    __asm { vmovss  [rsp+380h+rtFlags], xmm8 }
    _RAX = R_RT_CreateDepthInternal(&result, v127, v126, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_SHADOWMAP, R_RT_Flag_None, R_RT_FlagInternal_Frontend, rtFlags, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Viewmodel Sun Shadow", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6010)");
  }
  else
  {
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
    }
    _RAX = (R_RT_DepthHandle *)&v368;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_1F8.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  LODWORD(m_sunShadowCascades) = _EAX;
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v364);
    v131 = &R_RT_Handle::GetSurface(&v364)->m_image;
  }
  else
  {
    if ( v364.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    v131 = (R_RT_Image *)rgp.blackShadowImage;
  }
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[1] = &v131->m_base;
  v132 = R_SunShadow_GetMapSize();
  if ( rg.useTransSunShadow && v99 )
  {
    v133 = DCONST_DVARBOOL_r_esramShadowTrans;
    if ( !DCONST_DVARBOOL_r_esramShadowTrans && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramShadowTrans") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v133);
    if ( v133->current.enabled )
      v25 = R_RT_Flag_RTView|R_RT_Flag_DemandESRAM;
    _RAX = R_RT_CreateInternal(&result, v132, v132, v132, v132, 1u, 1u, 1u, g_R_RT_renderTargetFmts[9], v25, R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Translucent Shadow", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6015)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v368);
      if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
        vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
      }
      _RAX = &result;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
      }
      __asm { vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0 }
      _RAX = &result;
    }
  }
  else
  {
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
    }
    _RAX = (R_RT_DepthHandle *)&v368;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_240.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  LODWORD(v354) = _EAX;
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v358);
    zeroImage = &R_RT_Handle::GetSurface(&v358)->m_image;
  }
  else
  {
    if ( v358.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
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
  _RAX = R_RT_CreateInternal(&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 0x10u, g_R_RT_renderTargetFmts[19], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend FloatZ", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6022)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
    }
  }
  __asm { vmovups ymmword ptr [rbp+260h+var_130.m_surfaceID], ymm0 }
  v146 = &R_RT_Handle::GetSurface(&v371)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[0] = &v146->m_base;
  _R14->input.sceneConstants.mipSizes.v[0] = R_RT_Handle::GetSurface(&v371)->m_image.m_base.levelCount;
  if ( (v371.m_surfaceID & 0x7FFF) != 0 )
    v147 = v371.m_surfaceID & 0x7FFF | 0x8000;
  else
    v147 = 0;
  v368.m_surfaceID = v147;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_130.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_130.m_tracking.m_location]
    vmovsd  [rbp+260h+var_190.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
  }
  if ( v147 )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_300;
    v151 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v152 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
    v153 = 217;
  }
  else
  {
    if ( !v371.m_tracking.m_allocCounter )
      goto LABEL_300;
    v151 = "!this->m_tracking.m_allocCounter";
    v152 = "(!this->m_tracking.m_allocCounter)";
    v153 = 100;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v153, ASSERT_TYPE_ASSERT, v152, (const char *)&queryFormat, v151) )
    __debugbreak();
LABEL_300:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
    vmovups ymmword ptr [r14+3340h], ymm0
  }
  _RAX = R_RT_CreateInternal(&result, v348, v347, v346, v357, 1u, 1u, 0x10u, g_R_RT_renderTargetFmts[19], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend FloatZ", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6027)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID] }
    }
  }
  __asm { vmovups ymmword ptr [rbp+260h+var_2A8.m_surfaceID], ymm0 }
  v158 = &R_RT_Handle::GetSurface(&v349)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[0] = &v158->m_base;
  if ( (v349.m_surfaceID & 0x7FFF) != 0 )
    v159 = v349.m_surfaceID & 0x7FFF | 0x8000;
  else
    v159 = 0;
  v368.m_surfaceID = v159;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_2A8.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_2A8.m_tracking.m_location]
    vmovsd  [rbp+260h+var_190.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
  }
  if ( v159 )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_322;
    v163 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v164 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
    v165 = 217;
  }
  else
  {
    if ( !v349.m_tracking.m_allocCounter )
      goto LABEL_322;
    v163 = "!this->m_tracking.m_allocCounter";
    v164 = "(!this->m_tracking.m_allocCounter)";
    v165 = 100;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v165, ASSERT_TYPE_ASSERT, v164, (const char *)&queryFormat, v163) )
    __debugbreak();
LABEL_322:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
    vmovups ymmword ptr [r14+3360h], ymm0
    vmovups xmm1, cs:__xmm@4cbbc1304cbbc1304cbbc1304cbbc130
    vmovups xmmword ptr [rbp+260h+clearColor], xmm1
  }
  _RAX = R_RT_CreateInternal(&result, v335, v337, v334, v339, 1u, 1u, 1u, g_R_RT_renderTargetFmts[41], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Water FloatZ", frontendPass, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6032)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+260h+var_270.m_surfaceID], ymm0
    vmovd   ebx, xmm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v355);
    if ( (R_RT_Handle::GetSurface(&v355)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    LODWORD(_RDI) = v355.m_tracking.m_allocCounter;
    LOWORD(_EBX) = v355.m_surfaceID;
    __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_270.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID] }
    }
  }
  __asm { vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0 }
  v172 = _EBX & 0x7FFF;
  if ( v172 )
  {
    v368.m_surfaceID = v172;
  }
  else
  {
    v172 = 0;
    v368.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_270.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_270.m_tracking.m_location]
    vmovsd  [rbp+260h+var_190.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
  }
  if ( v172 )
  {
    R_RT_Handle::GetSurface(&v368);
    if ( (R_RT_Handle::GetSurface(&v368)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_341;
    v176 = "!unionHandle.IsValid() || unionHandle.IsColor()";
    v177 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
    v178 = 217;
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_341;
    v176 = "!this->m_tracking.m_allocCounter";
    v177 = "(!this->m_tracking.m_allocCounter)";
    v178 = 100;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v178, ASSERT_TYPE_ASSERT, v177, (const char *)&queryFormat, v176) )
    __debugbreak();
LABEL_341:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
    vmovups ymmword ptr [r14+33A0h], ymm0
  }
  m_surfaceID = v369.m_surfaceID;
  if ( (v369.m_surfaceID & 0x7FFF) != 0 )
    v181 = v369.m_surfaceID & 0x7FFF | 0x8000;
  else
    v181 = 0;
  v368.m_surfaceID = v181;
  __asm
  {
    vmovups xmm6, xmmword ptr [rbp+260h+var_170.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter], xmm6
    vmovsd  xmm7, [rbp+260h+var_170.m_tracking.m_location]
    vmovsd  [rbp+260h+var_190.m_tracking.m_location], xmm7
    vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  v185 = &R_RT_Handle::GetSurface(&v372)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[15] = &v185->m_base;
  v186 = m_surfaceID & 0x7FFF;
  if ( v186 )
    v368.m_surfaceID = v186 | 0x8000;
  else
    v368.m_surfaceID = 0;
  __asm
  {
    vmovups xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter], xmm6
    vmovsd  [rbp+260h+var_190.m_tracking.m_location], xmm7
    vmovups ymm0, ymmword ptr [rbp+260h+var_190.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  v188 = &R_RT_Handle::GetSurface(&v372)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[77] = &v188->m_base;
  v189 = sceneHeight;
  R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&v368, v335, sceneHeight, v334, maxSceneRtHeight, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_PACKED_STENCIL, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorZero, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Packed Stencil", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6038)");
  v190 = &R_RT_Handle::GetSurface(&v368)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[79] = &v190->m_base;
  if ( (v368.m_surfaceID & 0x7FFF) != 0 )
    v369.m_surfaceID = v368.m_surfaceID & 0x7FFF | 0x8000;
  else
    v369.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_170.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_190.m_tracking.m_location]
    vmovsd  [rbp+260h+var_170.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+33C0h], ymm0
  }
  if ( v99 )
  {
    v195 = sceneWidth;
    _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, sceneWidth, sceneHeight, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SUN_VISIBILTY, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Sun Visibility", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6042)");
  }
  else
  {
    v368.m_surfaceID = 0;
    v368.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0
    }
    _RAX = (R_RT_ColorHandle *)&v368;
    v195 = sceneWidth;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_170.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  v346 = _EAX;
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v369);
    whiteImage = &R_RT_Handle::GetSurface(&v369)->m_image;
  }
  else
  {
    if ( v369.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
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
  R_GetResolvedSceneRt((R_RT_ColorHandle *)&v368, _R14->clientIndex, vidConfig.sceneWidth, vidConfig.sceneHeight, _R14->teleported, &_R14->sceneRtInput.m_resolvedSceneRtNeedsClear);
  v201 = &R_RT_Handle::GetSurface(&v368)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[6] = &v201->m_base;
  if ( (v368.m_surfaceID & 0x7FFF) != 0 )
    v202 = v368.m_surfaceID & 0x7FFF | 0x8000;
  else
    v202 = 0;
  v349.m_surfaceID = v202;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_2A8.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_190.m_tracking.m_location]
    vmovsd  [rbp+260h+var_2A8.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_2A8.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+33E0h], ymm0
  }
  heighta = 0;
  v366.m_surfaceID = 0;
  v366.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+260h+var_1B8.m_tracking.m_name], xmm0
  }
  allocHeight = 0;
  v368.m_tracking.m_allocCounter = 0;
  __asm { vmovdqu xmmword ptr [rbp+260h+var_190.m_tracking.m_name], xmm0 }
  SSAOMode = R_GetSSAOMode(_R14);
  __asm
  {
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f097aac
    vmovups xmmword ptr [rbp+260h+var_D0], xmm0
  }
  if ( SSAOMode )
  {
    v210 = "Frontend SSAO [0]";
    if ( (_R14->input.data->frameIndex & 1) != 0 )
      v210 = "Frontend SSAO [1]";
    _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v195, v189, maxSceneRtWidth, maxSceneRtHeight, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_AO, R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &v374, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v210, 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6064)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_1B8.m_surfaceID], ymm0
    }
    heighta = v366.m_surfaceID;
  }
  if ( (SSAOMode & 2) != 0 )
  {
    _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v335, v337, v334, v339, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_GENERIC_R8, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorWhite, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "FrontEnd MDAO", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6070)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_190.m_surfaceID], ymm0
    }
    allocHeight = v368.m_surfaceID;
  }
  if ( R_RT_Handle::IsValid(&v366) )
    v215 = &R_RT_Handle::GetSurface(&v366)->m_image;
  else
    v215 = (R_RT_Image *)rgp.whiteImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[10] = &v215->m_base;
  v355.m_surfaceID = 0;
  v355.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+260h+var_270.m_tracking.m_name], xmm0
  }
  v342 = 0;
  v349.m_tracking.m_allocCounter = 0;
  __asm { vmovdqu xmmword ptr [rbp+260h+var_2A8.m_tracking.m_name], xmm0 }
  R_SSR_GetPreviousFrameWaterTraceRt(&v375);
  v365.m_surfaceID = 0;
  v365.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+260h+var_1D8.m_tracking.m_name], xmm0
  }
  v218 = sceneWidth >> 8;
  if ( !(sceneWidth >> 8) )
    v218 = 1;
  v219 = v189 >> 7;
  if ( !v219 )
    v219 = 1;
  v220 = maxSceneRtWidth >> 8;
  if ( !(maxSceneRtWidth >> 8) )
    v220 = 1;
  allocWidtha = v220;
  v221 = maxSceneRtHeight >> 7;
  if ( !(maxSceneRtHeight >> 7) )
    v221 = 1;
  SSRMode = R_GetSSRMode(_R14);
  if ( SSRMode != GFX_SSR_DEFERRED_LQ )
  {
    if ( SSRMode != GFX_SSR_DEFERRED_HQ )
      goto LABEL_407;
    _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v335, v337, v334, v339, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SSR_TRACE, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSR", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6102)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_270.m_surfaceID], ymm0
    }
    _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&v372, v218, v219, allocWidtha, v221, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_GENERIC_UINT, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSR Mask", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6103)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_1D8.m_surfaceID], ymm0
    }
    if ( !_R14->ssrWaterTrace )
      goto LABEL_407;
    _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v335, v337, v334, v339, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SSR_TRACE, R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Water SSR", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6107)");
    goto LABEL_404;
  }
  _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v353, v352, v351, v350, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SSR_TRACE, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSR", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6092)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_270.m_surfaceID], ymm0
  }
  _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&v372, v218, v219, allocWidtha, v221, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_GENERIC_UINT, R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend SSR Mask", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6093)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+var_1D8.m_surfaceID], ymm0
  }
  if ( _R14->ssrWaterTrace )
  {
    _RAX = R_RT_CreateColorForDynSceneResInternal((R_RT_ColorHandle *)&result, v353, v352, v351, v350, 1u, 1u, 1u, GFX_RENDERTARGET_FORMAT_SSR_TRACE, R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Water SSR", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6097)");
LABEL_404:
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_2A8.m_surfaceID], ymm0
    }
    v342 = v349.m_surfaceID;
  }
LABEL_407:
  if ( R_RT_Handle::IsValid(&v355) )
    v233 = &R_RT_Handle::GetSurface(&v355)->m_image;
  else
    v233 = (R_RT_Image *)rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[11] = &v233->m_base;
  if ( R_RT_Handle::IsValid(&v375) )
    v234 = &R_RT_Handle::GetSurface(&v375)->m_image;
  else
    v234 = (R_RT_Image *)rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[12] = &v234->m_base;
  if ( R_RT_Handle::IsValid(&v365) )
    blackUintImage = &R_RT_Handle::GetSurface(&v365)->m_image;
  else
    blackUintImage = (R_RT_Image *)rgp.blackUintImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[83] = &blackUintImage->m_base;
  v236 = &R_RT_Handle::GetSurface(&v371)->m_image;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[14] = &v236->m_base;
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+3750h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+3770h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm { vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0 }
  LOWORD(clearColor[0].v[0]) = 0;
  clearColor[0].v[2] = 0.0;
  __asm { vmovdqu xmmword ptr [rbp+260h+clearColor+10h], xmm0 }
  if ( rg.useLightGridVolumes )
  {
    R_LGV_LazyAllocSamplingBuffers();
    _RAX = R_RT_CreateColorInternal((R_RT_ColorHandle *)&result, 0x40u, 0x40u, 0x10u, 1u, 1u, GFX_RENDERTARGET_FORMAT_LGV_LIGHTING, R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "Frontend LightGridVolumes_3d", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6139)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+var_110.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+260h+var_130.m_surfaceID], ymm0
    }
    _RAX = R_RT_CreateColorInternal((R_RT_ColorHandle *)clearColor, 0x80u, 0xC0u, 0x10u, 1u, 1u, GFX_RENDERTARGET_FORMAT_LGV_LIGHTING_HIGH_BANDS, R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, R_RT_FlagInternal_Frontend, &colorBlack, D3D12_RESOURCE_STATE_GENERIC_READ, "Frontend LightGridVolumesHighBands_3d", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6140)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+260h+clearColor], ymm0
    }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+260h+var_130.m_surfaceID]
      vmovups ymmword ptr [rbp+260h+var_110.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [rbp+260h+clearColor]
    }
  }
  __asm { vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0 }
  if ( R_RT_Handle::IsValid(&v371) )
    blackImage3D = &R_RT_Handle::GetSurface(&v371)->m_image;
  else
    blackImage3D = (R_RT_Image *)rgp.blackImage3D;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[21] = &blackImage3D->m_base;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+34A8h], ymm0
  }
  if ( R_RT_Handle::IsValid((R_RT_Handle *)clearColor) )
    v247 = &R_RT_Handle::GetSurface((R_RT_Handle *)clearColor)->m_image;
  else
    v247 = (R_RT_Image *)rgp.blackImage3D;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[22] = &v247->m_base;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [r14+34C8h], ymm0
  }
  _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, 4u, 0x280000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndexBuffer|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_Frontend, D3D12_RESOURCE_STATE_INDEX_BUFFER, "Frontend Scene Buffer Index", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6152)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [r14+34E8h], ymm0
    vmovups ymm1, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm1
  }
  R_SetInputCodeBuffer(p_input, 6u, &result);
  _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&v372, 0x24u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_Frontend, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, "Frontend Scene Buffer Indirect Args", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6155)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [r14+3508h], ymm0
    vmovups ymm1, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm1
  }
  R_SetInputCodeBuffer(p_input, 9u, &result);
  _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&v371, 1u, 0x700000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_Frontend, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Frontend Scene Per Surf Data", frontendPass, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6158)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [r14+3528h], ymm0
    vmovups ymm1, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm1
  }
  R_SetInputCodePersistentBuffer(p_input, 0x17u, &result);
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+3548h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+3568h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+3588h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+35A8h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+35C8h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+35E8h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+3608h], ymm1
  }
  v371.m_surfaceID = 0;
  v371.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [r14+3628h], ymm1
  }
  v267 = *((_DWORD *)&_R14->viewportFeatures + 11) >> 1;
  LOBYTE(v267) = (*((_DWORD *)&_R14->viewportFeatures + 11) & 2) != 0;
  v348 = v267;
  v268 = 2 * R_SpotShadow_GetMapSize();
  v269 = 0;
  v270 = spotShadowRtNames;
  _R15 = _R14->sceneRtInput.m_spotShadowRts;
  v272 = v348;
  spotShadowUpdateLimit = _R14->input.data->spotShadowUpdateLimit;
  do
  {
    if ( v272 && v269 < spotShadowUpdateLimit )
    {
      v275 = *v270;
      __asm { vmovss  dword ptr [rbp+260h+clearColor], xmm8 }
      _RAX = R_RT_CreateInternal(&v376, v268, v268, v268, v268, 1u, 1u, 1u, g_R_RT_depthStencilFmts[3], R_RT_Flag_None, R_RT_FlagInternal_Frontend|R_RT_FlagInternal_Depth, clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v275, v340, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6177)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
      }
      R_RT_DepthHandle::Cast((R_RT_DepthHandle *)&v372, &result);
      _RAX = &v372;
    }
    else
    {
      v371.m_surfaceID = 0;
      v371.m_tracking.m_allocCounter = 0;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+260h+var_130.m_tracking.m_name], xmm0
      }
      _RAX = &v371;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [r15], ymm0
    }
    ++v269;
    ++_R15;
    ++v270;
  }
  while ( v269 < 8 );
  if ( (m_sunShadowCascades & 0x7FFF) != 0 )
    v371.m_surfaceID = m_sunShadowCascades & 0x7FFF | 0x8000;
  else
    v371.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_1F8.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_130.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_1F8.m_tracking.m_location]
    vmovsd  [rbp+260h+var_130.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_130.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_DepthHandle::Cast((R_RT_DepthHandle *)&v372, &result);
  __asm { vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID] }
  _R14 = viewInfoa;
  __asm { vmovups ymmword ptr [r14+32E0h], ymm0 }
  if ( (v354 & 0x7FFF) != 0 )
    v364.m_surfaceID = v354 & 0x7FFF | 0x8000;
  else
    v364.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_240.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_1F8.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_240.m_tracking.m_location]
    vmovsd  [rbp+260h+var_1F8.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_1F8.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+3300h], ymm0
  }
  if ( (v346 & 0x7FFF) != 0 )
    v358.m_surfaceID = v346 & 0x7FFF | 0x8000;
  else
    v358.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_170.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_240.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_170.m_tracking.m_location]
    vmovsd  [rbp+260h+var_240.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_240.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+3320h], ymm0
  }
  if ( (heighta & 0x7FFF) != 0 )
    v369.m_surfaceID = heighta & 0x7FFF | 0x8000;
  else
    v369.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_1B8.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_170.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_1B8.m_tracking.m_location]
    vmovsd  [rbp+260h+var_170.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+3408h], ymm0
  }
  if ( (v355.m_surfaceID & 0x7FFF) != 0 )
    v369.m_surfaceID = v355.m_surfaceID & 0x7FFF | 0x8000;
  else
    v369.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_270.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_170.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_270.m_tracking.m_location]
    vmovsd  [rbp+260h+var_170.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+3428h], ymm0
  }
  if ( (v365.m_surfaceID & 0x7FFF) != 0 )
    v369.m_surfaceID = v365.m_surfaceID & 0x7FFF | 0x8000;
  else
    v369.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_1D8.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_170.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_1D8.m_tracking.m_location]
    vmovsd  [rbp+260h+var_170.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+3448h], ymm0
  }
  if ( (v342 & 0x7FFF) != 0 )
    v369.m_surfaceID = v342 & 0x7FFF | 0x8000;
  else
    v369.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_2A8.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_170.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_2A8.m_tracking.m_location]
    vmovsd  [rbp+260h+var_170.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+3468h], ymm0
  }
  if ( (allocHeight & 0x7FFF) != 0 )
    v369.m_surfaceID = allocHeight & 0x7FFF | 0x8000;
  else
    v369.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+260h+var_190.m_tracking.m_allocCounter]
    vmovups xmmword ptr [rbp+260h+var_170.m_tracking.m_allocCounter], xmm0
    vmovsd  xmm1, [rbp+260h+var_190.m_tracking.m_location]
    vmovsd  [rbp+260h+var_170.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+260h+var_170.m_surfaceID]
    vmovups ymmword ptr [rbp+260h+result.baseclass_0.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)&v372, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+260h+var_110.m_surfaceID]
    vmovups ymmword ptr [r14+3488h], ymm0
  }
  R_VRS_LazyAllocRts(_R14);
  R_EffectLighting_LazyAllocRts();
  Image = R_EffectLighting_GetImage(GFX_MESH_LIGHTING_FIRST);
  R_SetInputCodeImageTextureInternal(&_R14->input, 0x24u, Image, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6207)");
  v314 = R_EffectLighting_GetImage(GFX_MESH_LIGHTING_SH);
  R_SetInputCodeImageTextureInternal(&_R14->input, 0x25u, v314, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6208)");
  FogLightmapImage = R_EffectLighting_GetFogLightmapImage();
  R_SetInputCodeImageTextureInternal(&_R14->input, 0x26u, FogLightmapImage, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6209)");
  R_VOL_LazyAllocRts();
  R_VOL_GetAccumImages(_R14, (const GfxImage **)&scattering, (const GfxImage **)&extinction, (const GfxImage **)&visibility);
  if ( !scattering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6217, ASSERT_TYPE_ASSERT, "(scattering)", (const char *)&queryFormat, "scattering") )
    __debugbreak();
  if ( !extinction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6218, ASSERT_TYPE_ASSERT, "(extinction)", (const char *)&queryFormat, "extinction") )
    __debugbreak();
  if ( !visibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6219, ASSERT_TYPE_ASSERT, "(visibility)", (const char *)&queryFormat, "visibility") )
    __debugbreak();
  R_SetInputCodePersistentImageTextureInternal(&_R14->input, 0x19u, scattering, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6220)");
  R_SetInputCodePersistentImageTextureInternal(&_R14->input, 0x1Au, extinction, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6221)");
  R_SetInputCodePersistentImageTextureInternal(&_R14->input, 0x1Bu, visibility, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6222)");
  ClusterMaskView = R_VOL_GetClusterMaskView();
  R_SetInputCodePersistentBuffer(&_R14->input, 0xDu, ClusterMaskView);
  R_FrustumLights_LazyAllocRts();
  FrustumLightsTileBuffer = R_GetFrustumLightsTileBuffer();
  R_SetInputCodePersistentBuffer(&_R14->input, 0xAu, FrustumLightsTileBuffer);
  FrustumLightsClusterBuffer = R_GetFrustumLightsClusterBuffer();
  R_SetInputCodePersistentBuffer(&_R14->input, 0xBu, FrustumLightsClusterBuffer);
  R_SpotShadow_LazyAllocRts();
  SpotShadowArrayImageDraw3D = R_GetSpotShadowArrayImageDraw3D();
  R_SetInputCodePersistentImageTextureInternal(&_R14->input, 8u, SpotShadowArrayImageDraw3D, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp(6231)");
  _RAX = R_SpotShadow_ActiveCacheEntry::GetDepthRtDraw3D((const R_RT_DepthHandle *)&v376);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [r14+6420h], ymm0
  }
  _R14->spotshadowHTileMask = 0;
  R_SunShadowCache_LazyAllocRts();
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v345);
  _R11 = &v377;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
R_SetupScopeEffect
==============
*/
void R_SetupScopeEffect(GfxBackEndData *data, GfxViewInfo *viewInfo)
{
  bool v34; 
  __int64 v42; 
  __int64 v44; 
  bool v100; 
  bool v142; 
  int v273; 
  __int64 v275; 
  char v321; 
  bool v322; 
  __int64 v364; 
  GfxViewParms result; 
  vec4_t v370; 
  vec4_t v371; 
  vec4_t v372; 
  vec4_t v373; 
  vec4_t v374; 
  vec4_t v375; 
  vec4_t vec; 
  vec4_t v377; 
  vec4_t v378; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> mat; 
  char v383; 
  tmat44_t<vec4_t> in2; 
  char v385; 
  tmat44_t<vec4_t> v386; 
  int v388[11]; 
  char v389; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm14, cs:__real@3f800000
  }
  _R15 = 0x140000000ui64;
  _RBX = viewInfo;
  __asm
  {
    vmovups xmm0, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.foundSight[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A808h], xmm0
    vmovups xmm1, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.scopeLensAxis[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A818h], xmm1
    vmovups xmm0, xmmword ptr (rva ?scene@@3UGfxScene@@A.scope.scopeLensAxis+10h)[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A828h], xmm0
    vmovups xmm1, xmmword ptr (rva ?scene@@3UGfxScene@@A.scope.scopeLensAxis+20h)[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A838h], xmm1
    vmovups xmm0, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.scopeLensOuterRing[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A848h], xmm0
    vmovups xmm1, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.scopeLensFadeEnd[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A858h], xmm1
    vmovups xmm0, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.scopeLensBrightness[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A868h], xmm0
    vmovups xmm0, xmmword ptr (rva ?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeInFrac+8)[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A878h], xmm0
    vmovups xmm1, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.scopeEyeRelief_outOfFocusDistance[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A888h], xmm1
    vmovups xmm0, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.scopeEyeRelief_maxMovement[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A898h], xmm0
    vmovups xmm1, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.scopeEyeRelief_idleSway_movement[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A8A8h], xmm1
    vmovups xmm0, xmmword ptr rva ?scene@@3UGfxScene@@A.scope.dofViewModelPhysicalFstop[r15]; GfxScene scene
    vmovups xmmword ptr [rcx+75A8B8h], xmm0
  }
  _R14 = data;
  data->scope.dofPhysicalFocusDistance = scene.scope.dofPhysicalFocusDistance;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( !scene.scope.scopeUseDualFov )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeLensInnerDiskMag; GfxScene scene
    vucomiss xmm0, xmm14
  }
  if ( !scene.scope.scopeUseDualFov )
  {
    __asm
    {
      vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeLensOuterRingMag; GfxScene scene
      vucomiss xmm0, xmm14
    }
    if ( !scene.scope.scopeUseDualFov )
    {
      __asm
      {
        vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeLensFadeStart; GfxScene scene
        vcomiss xmm0, xmm14
      }
LABEL_7:
      v34 = 0;
      goto LABEL_8;
    }
  }
  __asm
  {
    vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeInFrac; GfxScene scene
    vcomiss xmm0, xmm7
  }
  if ( !scene.scope.scopeUseDualFov )
    goto LABEL_7;
  v34 = 1;
LABEL_8:
  viewInfo->scopeLensDistortionEnabled = v34;
  __asm
  {
    vmovss  xmm2, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensPos; GfxScene scene
    vmovss  xmm1, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensPos+4; GfxScene scene
    vmovss  xmm0, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensPos+8; GfxScene scene
    vsubss  xmm3, xmm2, dword ptr [rdx+100h]
    vsubss  xmm4, xmm1, dword ptr [rdx+104h]
    vsubss  xmm5, xmm0, dword ptr [rdx+108h]
    vmovss  [rsp+760h+var_728], xmm3
    vmovss  [rsp+760h+var_72C], xmm4
    vmovss  [rsp+760h+var_724], xmm5
    vmovss  dword ptr [rbp+660h+var_580], xmm2
    vmovss  dword ptr [rbp+660h+var_580+4], xmm1
    vmovss  dword ptr [rbp+660h+var_580+8], xmm0
    vmovss  dword ptr [rbp+660h+var_580+0Ch], xmm14
  }
  _RAX = R_GetDepthHackViewParms(&result, (const GfxViewParms *)viewInfo);
  v42 = 3i64;
  _RCX = &v383;
  v44 = 3i64;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxViewParms *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v44;
  }
  while ( v44 );
  MatrixForViewerOrthogonal(&_RBX->viewParmsSet.frames[0].viewParms.camera.origin, &_RBX->viewParmsSet.frames[0].viewParms.camera.axis, &mtx);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  _RAX = R_GetDepthHackViewParms(&result, &_RBX->viewParmsSet.frames[1].viewParms);
  _RCX = &v385;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxViewParms *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v42;
  }
  while ( v42 );
  MatrixForViewerOrthogonal(&_RBX->viewParmsSet.frames[0].viewParms.camera.origin, &_RBX->viewParmsSet.frames[1].viewParms.camera.axis, &in1);
  MatrixMultiply44Aligned(&in1, &v386, &mat);
  __asm
  {
    vmovss  xmm6, cs:?scene@@3UGfxScene@@A.scope.scopeLensRadius; GfxScene scene
    vmulss  xmm0, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensAxis+0Ch; GfxScene scene
    vaddss  xmm0, xmm0, dword ptr [rbp+660h+var_580]
    vmulss  xmm1, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensAxis+10h; GfxScene scene
    vmulss  xmm2, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensAxis+14h; GfxScene scene
    vmovss  dword ptr [rbp+660h+vec], xmm0
    vaddss  xmm0, xmm1, dword ptr [rbp+660h+var_580+4]
    vmulss  xmm1, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensAxis+18h; GfxScene scene
    vmovss  dword ptr [rbp+660h+vec+4], xmm0
    vaddss  xmm0, xmm2, dword ptr [rbp+660h+var_580+8]
    vmulss  xmm2, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensAxis+1Ch; GfxScene scene
    vmovss  dword ptr [rbp+660h+vec+8], xmm0
    vaddss  xmm0, xmm1, dword ptr [rbp+660h+var_580]
    vaddss  xmm1, xmm2, dword ptr [rbp+660h+var_580+4]
    vmovss  dword ptr [rbp+660h+var_520], xmm0
    vmulss  xmm0, xmm6, dword ptr cs:?scene@@3UGfxScene@@A.scope.scopeLensAxis+20h; GfxScene scene
    vaddss  xmm2, xmm0, dword ptr [rbp+660h+var_580+8]
    vmovss  dword ptr [rbp+660h+var_520+8], xmm2
    vmovss  dword ptr [rbp+660h+vec+0Ch], xmm14
    vmovss  dword ptr [rbp+660h+var_520+4], xmm1
    vmovss  dword ptr [rbp+660h+var_520+0Ch], xmm14
  }
  MatrixTransformVector44Aligned(&vec, &out, &v372);
  MatrixTransformVector44Aligned(&v377, &out, &v373);
  MatrixTransformVector44Aligned(&v371, &out, &v370);
  MatrixTransformVector44Aligned(&v371, &mat, &v374);
  __asm
  {
    vmovss  xmm8, dword ptr [rbp+660h+var_590+0Ch]
    vmovss  xmm15, cs:__real@34000000
    vcomiss xmm8, xmm15
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  if ( v321 )
  {
    __asm
    {
      vmovss  dword ptr [rbp+660h+var_570], xmm7
      vmovss  dword ptr [rbp+660h+var_570+4], xmm7
      vmovss  dword ptr [rbp+660h+var_560], xmm7
      vmovss  dword ptr [rbp+660h+var_560+4], xmm7
      vmovss  dword ptr [rbp+660h+var_590], xmm7
      vmovss  dword ptr [rbp+660h+var_590+4], xmm7
      vmovss  dword ptr [rbp+660h+var_550], xmm7
      vmovss  dword ptr [rbp+660h+var_550+4], xmm7
    }
    _RBX->scopeLensDistortionEnabled = 0;
    __asm
    {
      vmovaps xmm8, xmm7
      vmovaps xmm9, xmm7
      vmovaps xmm2, xmm7
      vmovaps xmm3, xmm7
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+660h+var_550+0Ch]
      vcomiss xmm6, xmm15
      vmovss  xmm0, dword ptr [rbp+660h+var_570+0Ch]
      vmovss  xmm1, dword ptr [rbp+660h+var_560+0Ch]
      vmaxss  xmm4, xmm1, xmm15
      vmaxss  xmm2, xmm0, xmm15
      vdivss  xmm3, xmm14, xmm2
      vmulss  xmm1, xmm3, dword ptr [rbp+660h+var_570]
      vmulss  xmm0, xmm3, dword ptr [rbp+660h+var_570+4]
      vmovss  dword ptr [rbp+660h+var_570], xmm1
      vxorps  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbp+660h+var_570+4], xmm1
      vdivss  xmm3, xmm14, xmm4
      vmulss  xmm1, xmm3, dword ptr [rbp+660h+var_560]
      vmulss  xmm0, xmm3, dword ptr [rbp+660h+var_560+4]
      vmovss  dword ptr [rbp+660h+var_560], xmm1
      vxorps  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbp+660h+var_570+0Ch], xmm2
      vdivss  xmm2, xmm14, xmm8
      vmulss  xmm8, xmm2, dword ptr [rbp+660h+var_590]
      vmovss  dword ptr [rbp+660h+var_560+4], xmm1
      vmulss  xmm1, xmm2, dword ptr [rbp+660h+var_590+4]
      vxorps  xmm9, xmm1, xmm5
      vdivss  xmm1, xmm14, xmm6
      vmulss  xmm0, xmm1, dword ptr [rbp+660h+var_550+4]
      vmulss  xmm2, xmm1, dword ptr [rbp+660h+var_550]
      vxorps  xmm3, xmm0, xmm5
      vmovss  dword ptr [rbp+660h+var_550+4], xmm3
      vmovss  dword ptr [rbp+660h+var_560+0Ch], xmm4
      vmovss  dword ptr [rbp+660h+var_590], xmm8
      vmovss  dword ptr [rbp+660h+var_590+4], xmm9
      vmovss  dword ptr [rbp+660h+var_550], xmm2
    }
  }
  v100 = _RBX->clientIndex <= (unsigned int)LOCAL_CLIENT_1;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+100h]
    vmovss  xmm1, dword ptr [rbx+104h]
    vsubss  xmm6, xmm2, xmm8
    vsubss  xmm2, xmm1, dword ptr [rbx+284h]
    vmulss  xmm2, xmm2, xmm2
    vsubss  xmm5, xmm3, xmm9
    vsubss  xmm3, xmm0, dword ptr [rbx+280h]
    vmovss  xmm0, dword ptr [rbx+108h]
    vsubss  xmm4, xmm0, dword ptr [rbx+288h]
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vdivss  xmm0, xmm14, dword ptr [rax+28h]
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm1, xmm1, xmm0
    vminss  xmm4, xmm1, xmm14
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm1, xmm2, xmm0
    vdivss  xmm0, xmm14, dword ptr [rax+28h]
    vsqrtss xmm3, xmm1, xmm1
    vmulss  xmm1, xmm3, xmm0
    vminss  xmm2, xmm1, xmm14
    vmaxss  xmm5, xmm4, xmm2
    vmulss  xmm3, xmm9, xmm9
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm1, xmm3, xmm0
    vdivss  xmm0, xmm14, dword ptr [rax+28h]
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm1, xmm2, xmm0
    vminss  xmm2, xmm1, xmm14
    vmaxss  xmm13, xmm5, xmm2
    vmulss  xmm3, xmm13, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_fullSpeedSway_movement; GfxScene scene
    vmulss  xmm4, xmm13, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_fullSpeedSway_freq; GfxScene scene
    vsubss  xmm5, xmm14, xmm13
    vmulss  xmm2, xmm5, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_idleSway_movement; GfxScene scene
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm2, xmm5, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_idleSway_freq; GfxScene scene
    vmovss  [rsp+760h+var_730], xmm0
    vaddss  xmm0, xmm4, xmm2
    vmulss  xmm12, xmm0, dword ptr [rax+7ACCh]
  }
  if ( _RBX->clientIndex > (unsigned int)LOCAL_CLIENT_1 )
  {
    v142 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4542, ASSERT_TYPE_ASSERT, "(viewInfo->clientIndex >= 0 && viewInfo->clientIndex < 2)", (const char *)&queryFormat, "viewInfo->clientIndex >= 0 && viewInfo->clientIndex < STATIC_MAX_LOCAL_CLIENTS", v364);
    v100 = !v142;
    if ( v142 )
      __debugbreak();
    __asm
    {
      vmovss  xmm8, dword ptr [rbp+660h+var_590]
      vmovss  xmm9, dword ptr [rbp+660h+var_590+4]
    }
  }
  _RDI = _RBX->clientIndex;
  __asm
  {
    vmulss  xmm0, xmm12, dword ptr [rax+28h]
    vaddss  xmm1, xmm0, rva funcTimeX[r15+rdi*4]
    vcomiss xmm1, xmm14
    vmovss  rva funcTimeX[r15+rdi*4], xmm1
  }
  if ( !v100 )
  {
    __asm
    {
      vsubss  xmm1, xmm1, xmm14
      vmovss  rva funcTimeX[r15+rdi*4], xmm1
    }
  }
  __asm
  {
    vmovss  xmm6, cs:__real@40490fdb
    vmovss  xmm11, cs:__real@40000000
    vmulss  xmm0, xmm1, xmm6
    vmulss  xmm0, xmm0, xmm11; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm10, cs:__real@3f000000
    vmulss  xmm0, xmm0, xmm10
    vmulss  xmm1, xmm0, xmm11
    vmulss  xmm0, xmm1, [rsp+760h+var_730]
    vmovss  [rsp+760h+var_720], xmm0
    vmulss  xmm0, xmm12, dword ptr [rax+28h]
    vaddss  xmm1, xmm0, rva funcTimeY[r15+rdi*4]
    vcomiss xmm1, xmm14
    vmovss  rva funcTimeY[r15+rdi*4], xmm1
  }
  if ( !(v321 | v322) )
  {
    __asm
    {
      vsubss  xmm1, xmm1, xmm14
      vmovss  rva funcTimeY[r15+rdi*4], xmm1
    }
  }
  __asm
  {
    vmulss  xmm0, xmm1, xmm6
    vmulss  xmm0, xmm0, xmm11; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm6, cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeInFrac; GfxScene scene
    vmulss  xmm3, xmm13, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_fullSpeedMovementScale; GfxScene scene
    vmulss  xmm1, xmm0, xmm10
    vmulss  xmm2, xmm1, xmm11
    vmulss  xmm0, xmm2, [rsp+760h+var_730]
    vmovss  [rsp+760h+var_730], xmm0
    vsubss  xmm5, xmm14, xmm6
    vmulss  xmm1, xmm9, xmm11
    vsubss  xmm2, xmm14, xmm13
    vmulss  xmm2, xmm2, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_idleMovementScale; GfxScene scene
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm2, xmm5, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_hipMovementScale; GfxScene scene
    vmulss  xmm4, xmm0, xmm6
    vmulss  xmm0, xmm8, cs:__real@c0000000
    vaddss  xmm3, xmm4, xmm2
    vmulss  xmm8, xmm0, xmm3
    vmulss  xmm9, xmm1, xmm3
    vmulss  xmm3, xmm5, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_hipMaxMovement; GfxScene scene
    vmulss  xmm2, xmm9, xmm9
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm6, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_maxMovement; GfxScene scene
    vsqrtss xmm4, xmm1, xmm1
    vcmpless xmm0, xmm4, cs:__real@80000000
    vaddss  xmm5, xmm3, xmm2
    vcomiss xmm4, xmm5
    vblendvps xmm0, xmm4, xmm14, xmm0
    vdivss  xmm12, xmm14, xmm0
  }
  if ( !(v321 | v322) )
  {
    __asm
    {
      vmulss  xmm0, xmm12, xmm8
      vmulss  xmm1, xmm12, xmm9
      vmulss  xmm8, xmm0, xmm5
      vmulss  xmm9, xmm1, xmm5
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+760h+var_72C]
    vmovss  xmm1, cs:__real@38d1b717; min
    vmulss  xmm2, xmm0, xmm0
    vmovss  xmm0, [rsp+760h+var_728]
    vmulss  xmm0, xmm0, xmm0
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, [rsp+760h+var_724]
    vmulss  xmm2, xmm0, xmm0
    vaddss  xmm3, xmm3, xmm2
    vmovss  xmm2, cs:__real@42480000; max
    vsqrtss xmm0, xmm3, xmm3
    vsubss  xmm6, xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_focusDistance; GfxScene scene
    vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_outOfFocusDistance; val
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vdivss  xmm0, xmm6, xmm0; val
    vmovaps xmm2, xmm14; max
    vmovaps xmm1, xmm7; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  if ( r_scope_relief_mul_aspect_ratio->current.enabled )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+134h]
      vdivss  xmm2, xmm1, dword ptr [rbx+130h]
    }
  }
  else
  {
    __asm { vmovaps xmm2, xmm14 }
  }
  __asm
  {
    vaddss  xmm5, xmm8, [rsp+760h+var_720]
    vaddss  xmm0, xmm9, [rsp+760h+var_730]
    vmulss  xmm4, xmm0, xmm2
    vmulss  xmm2, xmm6, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_outOfFocuseUVScale; GfxScene scene
    vsubss  xmm1, xmm14, xmm6
    vmulss  xmm3, xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeEyeRelief_focuseUVScale; GfxScene scene
    vmovss  dword ptr [rbx+2320h], xmm5
    vmovss  xmm5, dword ptr [rbp+660h+var_590]
    vmovss  dword ptr [rbx+2324h], xmm4
    vmovss  xmm4, dword ptr [rbp+660h+var_590+4]
    vaddss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rbx+2328h], xmm1
    vaddss  xmm1, xmm4, xmm14
    vmulss  xmm7, xmm1, xmm10
    vmovss  xmm1, dword ptr [rbp+660h+var_570+4]
    vsubss  xmm2, xmm1, xmm4
    vmovss  xmm1, dword ptr [rbp+660h+var_560+4]
    vsubss  xmm4, xmm1, xmm4
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm0, xmm5, xmm14
    vmulss  xmm8, xmm0, xmm10
    vmovss  xmm0, dword ptr [rbp+660h+var_570]
    vsubss  xmm3, xmm0, xmm5
    vmovss  xmm0, dword ptr [rbp+660h+var_560]
    vsubss  xmm5, xmm0, xmm5
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmulss  xmm1, xmm4, xmm4
    vmaxss  xmm3, xmm2, xmm15
    vdivss  xmm6, xmm11, xmm3
    vmulss  xmm0, xmm5, xmm5
    vmovss  xmm5, dword ptr [rbp+660h+var_580+8]
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmaxss  xmm3, xmm2, xmm15
    vmovss  xmm2, dword ptr [rbp+660h+var_580+4]
    vdivss  xmm0, xmm11, xmm3
    vmovss  xmm3, dword ptr [rbp+660h+var_580]
  }
  _RBX->input.sceneConstants.scopeEyeRelief.v[3] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+2310h], xmm8
    vmovss  dword ptr [rbx+2314h], xmm7
    vmovss  dword ptr [rbx+2318h], xmm6
    vmovss  dword ptr [rbx+231Ch], xmm0
    vmovss  xmm1, dword ptr [r14+75A850h]
    vmulss  xmm11, xmm1, dword ptr [r14+75A830h]
    vmulss  xmm9, xmm1, dword ptr [r14+75A824h]
    vmulss  xmm4, xmm1, dword ptr [r14+75A828h]
    vmulss  xmm6, xmm1, dword ptr [r14+75A82Ch]
    vmulss  xmm12, xmm1, dword ptr [r14+75A834h]
    vmulss  xmm13, xmm1, dword ptr [r14+75A838h]
    vsubss  xmm7, xmm2, xmm4
    vsubss  xmm8, xmm3, xmm9
    vaddss  xmm4, xmm4, xmm2
    vsubss  xmm0, xmm8, xmm11
    vmovss  [rbp+660h+var_100], xmm0
    vsubss  xmm10, xmm5, xmm6
    vsubss  xmm0, xmm7, xmm12
    vmovss  [rbp+660h+var_FC], xmm0
    vsubss  xmm1, xmm10, xmm13
    vmovss  [rbp+660h+var_F8], xmm1
    vaddss  xmm3, xmm9, xmm3
    vsubss  xmm0, xmm3, xmm11
    vmovss  [rbp+660h+var_F4], xmm0
    vaddss  xmm2, xmm6, xmm5
    vsubss  xmm1, xmm4, xmm12
    vmovss  [rbp+660h+var_F0], xmm1
    vsubss  xmm0, xmm2, xmm13
    vmovss  [rbp+660h+var_EC], xmm0
    vaddss  xmm1, xmm3, xmm11
    vaddss  xmm0, xmm12, xmm4
    vmovss  [rbp+660h+var_E8], xmm1
    vaddss  xmm1, xmm2, xmm13
    vmovss  [rbp+660h+var_E4], xmm0
    vaddss  xmm0, xmm8, xmm11
    vmovss  [rbp+660h+var_E0], xmm1
    vaddss  xmm1, xmm7, xmm12
    vmovss  [rbp+660h+var_DC], xmm0
    vaddss  xmm0, xmm10, xmm13
    vmovss  [rbp+660h+var_D8], xmm1
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  xmm7, cs:__real@ff7fffff
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm8, xmm6
    vmovaps xmm9, xmm7
    vmovss  [rbp+660h+var_D4], xmm0
  }
  v273 = 0;
  _RDI = v388;
  v275 = 4i64;
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi-4]
      vmovss  xmm1, dword ptr [rdi]
      vmovss  dword ptr [rbp+660h+var_510], xmm0
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+660h+var_510+8], xmm0
      vmovss  dword ptr [rbp+660h+var_510+4], xmm1
      vmovss  dword ptr [rbp+660h+var_510+0Ch], xmm14
    }
    MatrixTransformVector44Aligned(&v378, &out, &v375);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+660h+var_540+0Ch]
      vcomiss xmm0, xmm15
    }
    if ( !(v321 | v322) )
    {
      __asm
      {
        vdivss  xmm0, xmm14, xmm0
        vmulss  xmm2, xmm0, dword ptr [rbp+660h+var_540]
        vmulss  xmm0, xmm0, dword ptr [rbp+660h+var_540+4]
        vxorps  xmm1, xmm0, xmm10
        vmovss  dword ptr [rbp+660h+var_540+4], xmm1
        vminss  xmm8, xmm8, xmm1
        vmaxss  xmm9, xmm9, xmm1
        vmovss  dword ptr [rbp+660h+var_540], xmm2
        vminss  xmm6, xmm6, xmm2
        vmaxss  xmm7, xmm7, xmm2
      }
      ++v273;
    }
    _RDI += 3;
    --v275;
  }
  while ( v275 );
  if ( v273 == 4 )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f000000
      vaddss  xmm0, xmm6, xmm14
      vmulss  xmm5, xmm0, xmm2
      vaddss  xmm1, xmm8, xmm14
      vmulss  xmm4, xmm1, xmm2
      vaddss  xmm0, xmm7, xmm14
      vmulss  xmm3, xmm0, xmm2
      vaddss  xmm1, xmm9, xmm14
      vmulss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rbx+233Ch], xmm2
      vmovss  dword ptr [rbx+2330h], xmm5
      vmovss  dword ptr [rbx+2334h], xmm4
      vmovss  dword ptr [rbx+2338h], xmm3
    }
  }
  else
  {
    *(_QWORD *)_RBX->input.sceneConstants.scopeLensBounds.v = 0i64;
    *(_QWORD *)&_RBX->input.sceneConstants.scopeLensBounds.xyz.z = 0i64;
  }
  __asm
  {
    vmovss  xmm2, cs:__real@40400000; max
    vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeLensInnerDiskMag; val
    vmovss  xmm10, cs:?scene@@3UGfxScene@@A.scope.scopeLensInnerDisk; GfxScene scene
    vmovaps xmm1, xmm14; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@40400000; max
    vmovss  xmm7, cs:?scene@@3UGfxScene@@A.scope.scopeLensOuterRing; GfxScene scene
    vmovaps xmm8, xmm0
    vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeLensOuterRingMag; val
    vmovaps xmm1, xmm14; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm9, cs:__real@3b800000
    vaddss  xmm1, xmm10, xmm9
    vmaxss  xmm2, xmm1, xmm7
    vdivss  xmm6, xmm14, xmm0
    vsubss  xmm0, xmm2, xmm10; val
    vmovaps xmm2, xmm14; max
    vmovaps xmm1, xmm9; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+22E0h], xmm10
    vdivss  xmm3, xmm14, xmm0
    vmovss  dword ptr [rbx+22E4h], xmm3
    vdivss  xmm0, xmm14, xmm8
    vminss  xmm1, xmm0, xmm14
    vmovss  dword ptr [rbx+22E8h], xmm1
    vminss  xmm2, xmm6, xmm14
    vmovss  dword ptr [rbx+22ECh], xmm2
    vmovss  xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeLensFadeEnd; GfxScene scene
    vminss  xmm4, xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeLensFadeStart; GfxScene scene
    vmovss  xmm3, cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeOutFrac; GfxScene scene
    vaddss  xmm0, xmm4, xmm9
    vmaxss  xmm1, xmm0, xmm1
    vsubss  xmm2, xmm1, xmm4
    vmovss  xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeInFrac; GfxScene scene
    vmovss  dword ptr [rbx+22F0h], xmm4
    vdivss  xmm0, xmm14, xmm2
    vmovss  dword ptr [rbx+22F4h], xmm0
    vmovss  dword ptr [rbx+22F8h], xmm1
    vmovss  dword ptr [rbx+22FCh], xmm3
  }
  v321 = 0;
  v322 = !scene.scope.scopeUseHybridSetup;
  __asm
  {
    vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeOutFrac; GfxScene scene
    vmovss  xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeInFrac; GfxScene scene
  }
  if ( scene.scope.scopeUseHybridSetup )
  {
    __asm
    {
      vmovss  xmm2, cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeOutFrac+8; GfxScene scene
      vmovss  xmm3, cs:?scene@@3UGfxScene@@A.scope.scopeFadeInfo.fadeInFrac+8; GfxScene scene
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm2, xmm0
      vmovaps xmm3, xmm1
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3d20e411
    vmovss  xmm8, cs:__real@3f72a76f
    vmovss  xmm9, cs:__real@3d55891a
    vmovss  xmm10, cs:__real@4019999a
    vmovss  xmm6, cs:__real@3d9e8391
    vmovss  dword ptr [rbx+2300h], xmm0
    vmovss  dword ptr [rbx+2304h], xmm1
    vmovss  dword ptr [rbx+2308h], xmm2
    vmovss  dword ptr [rbx+230Ch], xmm3
    vmovss  xmm0, cs:?scene@@3UGfxScene@@A.scope.scopeLensColorRed; GfxScene scene
    vcomiss xmm0, xmm7
  }
  if ( v322 )
  {
    __asm { vmulss  xmm12, xmm0, xmm6 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm0, xmm8
      vaddss  xmm0, xmm0, xmm9; X
      vmovaps xmm1, xmm10; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm12, xmm0 }
  }
  __asm
  {
    vmovss  xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeLensColorGreen; GfxScene scene
    vcomiss xmm1, xmm7
  }
  if ( v321 | v322 )
  {
    __asm { vmulss  xmm11, xmm1, xmm6 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm1, xmm8
      vaddss  xmm0, xmm0, xmm9; X
      vmovaps xmm1, xmm10; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm11, xmm0 }
  }
  __asm
  {
    vmovss  xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeLensColorBlue; GfxScene scene
    vcomiss xmm1, xmm7
  }
  if ( v321 | v322 )
  {
    __asm { vmulss  xmm0, xmm1, xmm6 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm1, xmm8
      vaddss  xmm0, xmm0, xmm9; X
      vmovaps xmm1, xmm10; Y
    }
    powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  }
  __asm
  {
    vmovss  xmm1, cs:?scene@@3UGfxScene@@A.scope.scopeLensBrightness; GfxScene scene
    vmulss  xmm2, xmm1, xmm12
    vmovss  dword ptr [rbx+22D0h], xmm2
    vmulss  xmm3, xmm1, xmm11
    vmovss  dword ptr [rbx+22D4h], xmm3
    vmulss  xmm0, xmm1, xmm0
    vmovss  dword ptr [rbx+22D8h], xmm0
  }
  _RBX->input.sceneConstants.scopeLensColor.v[3] = 1.0;
  _R11 = &v389;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
R_SetupViewInfo
==============
*/
void R_SetupViewInfo(GfxViewInfo *viewInfo, const GfxSceneParms *sceneParms, const GfxViewParmsSet *viewParmsSet)
{
  signed int height; 
  const dvar_t *v16; 
  signed int integer; 
  __int64 v18; 
  __int64 clientIndex; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  int voxelTreeCount; 
  int v24; 
  int v25; 
  GfxVoxelTree *voxelTree; 
  unsigned int v28; 
  __int64 v47; 
  bool v63; 
  int v89; 
  char v90; 
  int v93; 
  char daltonizeMode; 
  bool enabled; 
  bool v96; 
  int v99; 
  char v100; 
  bool v101; 
  bool v102; 
  const GfxImage *ProbeOctahedronImageArray; 
  GfxImage *blackImageCube; 
  GfxImage *blackImage; 
  char v114; 
  bool v115; 
  char v126; 
  unsigned int FrustumHeight; 
  unsigned int FrustumWidth; 
  bool v143; 
  const dvar_t *v144; 
  const dvar_t *v145; 
  float *v165; 
  __int64 v170; 
  bool Bool_Internal; 
  bool v235; 
  int v244; 
  int v245; 
  float viewModelFocusDistance; 
  bool v254; 
  int v255; 
  const dvar_t *v264; 
  const dvar_t *v265; 
  const dvar_t *v266; 
  bool v267; 
  char v287; 
  const GfxGradingClut *nvgColorGrading; 
  unsigned int LightmapAtlasTextureSize; 
  unsigned int LightGridVolumesAtlasTextureDepth; 
  unsigned int *outReProjFloatZWidth; 
  unsigned int *outReProjFloatZWidtha; 
  unsigned int *outReProjFloatZHeight; 
  unsigned int *outReProjFloatZHeighta; 
  double v475; 
  unsigned int ReflectionProbeCount; 
  int v477; 
  __m256i v478; 
  vec2_t InterleavedInfo; 
  vec4_t result; 
  vec4_t v519; 
  vec4_t vec; 
  tmat33_t<vec3_t> axis; 
  vec4_t out; 
  tmat44_t<vec4_t> dst; 
  char v533; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-0A8h], xmm14
  }
  _RSI = sceneParms;
  _RBX = viewParmsSet;
  _RDI = viewInfo;
  if ( !sceneParms->sceneRtWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6340, ASSERT_TYPE_ASSERT, "( ( sceneParms->sceneRtWidth > 0 ) )", "( sceneParms->sceneRtWidth ) = %i", 0) )
    __debugbreak();
  if ( !_RSI->sceneRtHeight )
  {
    LODWORD(outReProjFloatZWidth) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6341, ASSERT_TYPE_ASSERT, "( ( sceneParms->sceneRtHeight > 0 ) )", "( sceneParms->sceneRtHeight ) = %i", outReProjFloatZWidth) )
      __debugbreak();
  }
  if ( !_RSI->sceneViewport.width )
  {
    LODWORD(outReProjFloatZWidth) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6344, ASSERT_TYPE_ASSERT, "( ( sceneParms->sceneViewport.width > 0 ) )", "( sceneParms->sceneViewport.width ) = %i", outReProjFloatZWidth) )
      __debugbreak();
  }
  if ( !_RSI->sceneViewport.height )
  {
    LODWORD(outReProjFloatZWidth) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6345, ASSERT_TYPE_ASSERT, "( ( sceneParms->sceneViewport.height > 0 ) )", "( sceneParms->sceneViewport.height ) = %i", outReProjFloatZWidth) )
      __debugbreak();
  }
  R_CopyCmdBufInput(&_RDI->input, &g_gfxCmdBufInput);
  _RDI->input.data = frontEndDataOut;
  *((_BYTE *)&_RDI->input + 7920) ^= (*((_BYTE *)&_RDI->input + 7920) ^ (2 * r_balanceOpaqueLists->current.enabled)) & 2;
  _RDI->input.resolution = _RSI->resolution;
  if ( _RSI->resolution.step == GFX_RESOLUTION_STEP_NONE )
  {
    if ( _RSI->resolution.sceneWidthStep0 != _RSI->sceneRtWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3462, ASSERT_TYPE_ASSERT, "((sceneParms->resolution.step != GFX_RESOLUTION_STEP_NONE) || (sceneParms->resolution.sceneWidthStep0 == sceneParms->sceneRtWidth))", (const char *)&queryFormat, "(sceneParms->resolution.step != GFX_RESOLUTION_STEP_NONE) || (sceneParms->resolution.sceneWidthStep0 == sceneParms->sceneRtWidth)") )
      __debugbreak();
    if ( _RSI->resolution.step == GFX_RESOLUTION_STEP_NONE && _RSI->resolution.sceneHeightStep0 != _RSI->sceneRtHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3463, ASSERT_TYPE_ASSERT, "((sceneParms->resolution.step != GFX_RESOLUTION_STEP_NONE) || (sceneParms->resolution.sceneHeightStep0 == sceneParms->sceneRtHeight))", (const char *)&queryFormat, "(sceneParms->resolution.step != GFX_RESOLUTION_STEP_NONE) || (sceneParms->resolution.sceneHeightStep0 == sceneParms->sceneRtHeight)") )
      __debugbreak();
  }
  height = _RDI->sceneGeoViewport.height;
  if ( height < 1 )
    height = 1;
  v16 = DVARINT_r_tracerMaxMips;
  integer = 31 - __lzcnt(height);
  if ( integer > 16 )
    integer = 16;
  if ( integer < 0 )
    integer = 0;
  if ( !DVARINT_r_tracerMaxMips && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tracerMaxMips") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer < integer )
    integer = v16->current.integer;
  _RDI->input.sceneConstants.mipSizes.v[0] = integer;
  R_SetMovieImages(&_RDI->input);
  v18 = 2i64;
  _RDI->teleported = _RSI->playerTeleported;
  clientIndex = (unsigned int)_RDI->clientIndex;
  if ( (unsigned int)clientIndex >= 2 )
  {
    LODWORD(outReProjFloatZHeight) = 2;
    LODWORD(outReProjFloatZWidth) = _RDI->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6315, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( s_lastValidFrameCount ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( s_lastValidFrameCount )\n\t%i not in [0, %i)", outReProjFloatZWidth, outReProjFloatZHeight) )
      __debugbreak();
  }
  v20 = 3i64;
  if ( (*((_DWORD *)&_RDI->viewportFeatures + 11) & 0x100) != 0 )
  {
    v21 = -1;
  }
  else
  {
    if ( _RDI->input.data->frameCount - s_lastValidFrame[clientIndex] != 1 || R_CheckDvarModified(r_postAA) || R_CheckDvarModified(r_ssao) || _RDI->teleported )
      s_lastValidFrameCount[clientIndex] = 0;
    v21 = s_lastValidFrameCount[clientIndex];
    s_lastValidFrame[clientIndex] = _RDI->input.data->frameCount;
    v22 = 3;
    if ( (int)(v21 + 1) < 3 )
      v22 = v21 + 1;
    s_lastValidFrameCount[clientIndex] = v22;
  }
  _RDI->validFrameCount = v21;
  _RDI->dlsUseAsyncCompute = r_dlsDebugMode->current.integer == 2;
  if ( !rgp.world || rgp.world->voxelTreeCount )
  {
    voxelTreeCount = rgp.world->voxelTreeCount;
    v24 = 0;
    v25 = 32;
    if ( voxelTreeCount <= 0 )
      goto LABEL_56;
    voxelTree = rgp.world->voxelTree;
    __asm { vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
    _RAX = &voxelTree->zoneBound.halfSize;
    while ( 1 )
    {
      v28 = v25;
      if ( LODWORD(_RAX[1].v[0]) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+100h]
          vsubss  xmm1, xmm0, dword ptr [rdx]
        }
        v25 = v24;
        __asm { vandps  xmm1, xmm1, xmm2 }
        if ( v28 != 32 )
          v25 = v28;
        __asm { vcomiss xmm1, dword ptr [rax] }
        if ( v28 < 0x20 )
          break;
      }
      ++v24;
      ++voxelTree;
      _RAX += 10;
      if ( v24 >= voxelTreeCount )
        goto LABEL_55;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+104h]
      vsubss  xmm1, xmm0, dword ptr [rax-8]
      vandps  xmm1, xmm1, xmm2
      vcomiss xmm1, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rbx+108h]
      vsubss  xmm1, xmm0, dword ptr [rax-4]
      vandps  xmm1, xmm1, xmm2
      vcomiss xmm1, dword ptr [rax+8]
    }
    v25 = v24;
LABEL_55:
    if ( v25 == 32 )
LABEL_56:
      Sys_Error((const ObfuscateErrorText)&stru_144436FE8);
    _RDI->input.voxelTreeZoneIndex = v25;
  }
  R_GpuLightGrid_SetupFrame(frontEndDataOut, _RDI);
  if ( s_world.heightfieldCount <= 0 )
  {
    _RDI->heightfield.image = rgp.blackImage;
  }
  else
  {
    _RCX = &s_world.heightfields[_RDI->input.voxelTreeZoneIndex];
    _RDI->heightfield.bounds.midPoint.v[0] = _RCX->bounds.midPoint.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+4]
      vmovss  dword ptr [rdi+0DA4h], xmm0
      vmovss  xmm1, dword ptr [rcx+8]
      vmovss  dword ptr [rdi+0DA8h], xmm1
    }
    _RCX = s_world.heightfields;
    _RDX = _RDI->input.voxelTreeZoneIndex;
    _RDI->heightfield.bounds.halfSize.v[0] = s_world.heightfields[_RDX].bounds.halfSize.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+rcx+10h]
      vmovss  dword ptr [rdi+0DB0h], xmm0
      vmovss  xmm1, dword ptr [rdx+rcx+14h]
      vmovss  dword ptr [rdi+0DB4h], xmm1
    }
    _RDI->heightfield.image = s_world.heightfields[_RDI->input.voxelTreeZoneIndex].image;
  }
  __asm { vmovups xmm0, xmmword ptr [rdi+67Ch] }
  _RAX = frontEndDataOut;
  v47 = 9i64;
  __asm
  {
    vmovups xmmword ptr [rax+0E2A38h], xmm0
    vmovsd  xmm1, qword ptr [rdi+68Ch]
    vmovsd  qword ptr [rax+0E2A48h], xmm1
    vmovups xmm0, xmmword ptr [rdi+694h]
    vmovups xmmword ptr [rax+0E2C58h], xmm0
    vmovsd  xmm1, qword ptr [rdi+6A4h]
    vmovsd  qword ptr [rax+0E2C68h], xmm1
    vmovups xmm0, xmmword ptr [rdi+6ACh]
    vmovups xmmword ptr [rax+0E2E78h], xmm0
    vmovsd  xmm1, qword ptr [rdi+6BCh]
    vmovsd  qword ptr [rax+0E2E88h], xmm1
    vmovups ymm0, ymmword ptr cs:?scene@@3UGfxScene@@A.def.time; GfxScene scene
    vmovups ymmword ptr [rdi+5B0h], ymm0
  }
  _RAX = _RDI;
  do
  {
    _RAX = (GfxViewInfo *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    _RBX = (const GfxViewParmsSet *)((char *)_RBX + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rbx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rbx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rbx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rbx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rbx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rbx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rbx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    v63 = v47-- == 0;
  }
  while ( v47 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+318h]
    vmovups xmmword ptr [rdi+37D4h], xmm0
  }
  _RDI->sunshadowSoftness = _RSI->sunshadowSoftness;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.sunSampleSizeNear; r_globals_t rg
    vucomiss xmm0, cs:__real@3e800000
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm9, dword ptr [rsi+32Ch]
  }
  if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 6404, ASSERT_TYPE_ASSERT, "(sceneParms->sunshadowSampleSizeNear > 0.0f)", (const char *)&queryFormat, "sceneParms->sunshadowSampleSizeNear > 0.0f") )
    __debugbreak();
  _RDI->sunshadowSampleSizeNear = _RSI->sunshadowSampleSizeNear;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+0A40h]
    vmovups xmmword ptr [rdi+480h], xmm0
    vmovups xmm0, xmmword ptr [rsi+0A50h]
    vmovups xmmword ptr [rdi+490h], xmm0
    vmovups xmm0, xmmword ptr [rsi+0A60h]
    vmovups xmmword ptr [rdi+4A0h], xmm0
    vmovups xmm0, xmmword ptr [rsi+0A70h]
    vmovups xmmword ptr [rdi+4B0h], xmm0
    vmovups xmm0, xmmword ptr [rsi+0A80h]
    vmovups xmmword ptr [rdi+4C0h], xmm0
    vmovups xmm0, xmmword ptr [rsi+0A90h]
    vmovups xmmword ptr [rdi+4D0h], xmm0
    vmovups xmm0, xmmword ptr [rsi+0AA0h]
    vmovups xmmword ptr [rdi+4E0h], xmm0
    vmovsd  xmm0, qword ptr [rsi+4]
    vmovsd  qword ptr [rdi+9ACh], xmm0
  }
  _RDI->dualViewScopeState.hipFstop = _RSI->dualViewScopeState.hipFstop;
  _RDI->blurRadiusScript = _RSI->blurRadius;
  LODWORD(_RDI->blurRadiusDvar) = r_blur->current.integer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+748h]
    vmovups ymmword ptr [rdi+5D0h], ymm0
    vmovups ymm1, ymmword ptr [rsi+768h]
    vmovups ymmword ptr [rdi+5F0h], ymm1
    vmovups xmm0, xmmword ptr [rsi+788h]
    vmovups xmmword ptr [rdi+610h], xmm0
    vmovsd  xmm1, qword ptr [rsi+798h]
    vmovsd  qword ptr [rdi+620h], xmm1
    vmovups xmm0, xmmword ptr [rsi+7A0h]
    vmovups xmmword ptr [rdi+628h], xmm0
    vmovsd  xmm1, qword ptr [rsi+7B0h]
    vmovsd  qword ptr [rdi+638h], xmm1
  }
  _RDI->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta = _RSI->screenSpaceShadows.sunViewmodelScreenSpaceshadowTraceDelta;
  _RDI->skyIlluminationRadialDistanceBias = _RSI->skyIlluminationRadialDistanceBias;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+7BCh]
    vmovups xmmword ptr [rdi+648h], xmm0
    vmovsd  xmm1, qword ptr [rsi+7CCh]
    vmovsd  qword ptr [rdi+658h], xmm1
  }
  _RDI->eyeVirtualHighlight.eyeHighlightHeading = _RSI->eyeVirtualHighlight.eyeHighlightHeading;
  if ( rg.useNightAndThermalVisionComboTweak )
    R_ThermalParamsFromDvars(_RDI);
  R_SetupNightAndThermalVision(_RDI);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+448h]
    vmovups ymmword ptr [rdi+9B8h], ymm0
    vmovups ymm1, ymmword ptr [rsi+468h]
    vmovups ymmword ptr [rdi+9D8h], ymm1
    vmovups xmm0, xmmword ptr [rsi+488h]
    vmovups xmmword ptr [rdi+9F8h], xmm0
    vmovsd  xmm1, qword ptr [rsi+498h]
    vmovsd  qword ptr [rdi+0A08h], xmm1
    vmovups xmm0, xmmword ptr [rsi+72Ch]
    vmovups xmmword ptr [rdi+0A10h], xmm0
    vmovsd  xmm1, qword ptr [rsi+73Ch]
    vmovsd  qword ptr [rdi+0A20h], xmm1
  }
  v89 = 1;
  _RDI->dustParams.dustSmoothMax = _RSI->dustParmas.dustSmoothMax;
  v90 = 1;
  _RDI->drawStaticDefaultModels = rgp.gameSortedStaticModels;
  _RAX = r_daltonizeIntensity;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  v93 = r_daltonizeForceMode->current.integer;
  daltonizeMode = v93;
  if ( !v93 )
    daltonizeMode = _RSI->daltonizeMode;
  if ( !v93 )
    v90 = _RSI->daltonizeTargets & 1;
  if ( !daltonizeMode || !v90 )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vcomiss xmm0, xmm9 }
  enabled = r_colorblindMode->current.enabled;
  _RDI->daltonizeOptions.m_enabled = enabled;
  v96 = 1;
  _RDI->daltonizeOptions.m_correctionMode = R_DALTONIZE_NONE;
  __asm { vmovss  dword ptr [rdi+3C54h], xmm0 }
  _RDI->daltonizeOptions.m_simulationMode = enabled;
  _RAX = r_daltonizeUIIntensity;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  v99 = r_daltonizeForceMode->current.integer;
  v100 = v99;
  if ( !v99 )
    v100 = _RSI->daltonizeMode;
  if ( !v99 )
    v96 = (_RSI->daltonizeTargets & 2) != 0;
  if ( !v100 || !v96 )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vcomiss xmm0, xmm9 }
  v101 = r_colorblindMode->current.enabled;
  _RDI->uiDaltonizeOptions.m_enabled = v101;
  _RDI->uiDaltonizeOptions.m_correctionMode = R_DALTONIZE_NONE;
  __asm { vmovss  dword ptr [rdi+3C60h], xmm0 }
  _RDI->uiDaltonizeOptions.m_simulationMode = v101;
  v102 = r_useShadowGeomOpt->current.enabled && (rgp.world->shadowGeomOptimized || rgp.world->dpvs.surfaceCastsSunShadowOpt);
  _RDI->useShadowGeomOpt = v102;
  _RDI->blackLevel = _RSI->blackLevel;
  if ( rgp.world )
  {
    if ( rg.useRProbeOctahedron )
    {
      ProbeOctahedronImageArray = R_ReflectionProbe_GetProbeOctahedronImageArray();
      if ( _RDI == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      _RDI->input.codePersistentImages[39] = ProbeOctahedronImageArray;
      blackImageCube = rgp.blackImageCube;
    }
    else
    {
      blackImage = rgp.blackImage;
      if ( _RDI == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      _RDI->input.codePersistentImages[39] = blackImage;
      blackImageCube = (GfxImage *)R_ReflectionProbe_GetProbeImageArray();
    }
    if ( _RDI == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    _RDI->input.codePersistentImages[40] = blackImageCube;
    v89 = 1;
  }
  __asm
  {
    vmovss  [rbp+180h+var_138], xmm9
    vmovss  [rbp+180h+var_134], xmm9
    vmovss  [rbp+180h+var_130], xmm9
  }
  _ER15 = 0;
  ReflectionProbeCount = R_ReflectionProbe_GetReflectionProbeCount();
  __asm { vmovss  xmm0, [rsp+280h+var_240] }
  *(_QWORD *)_RDI->input.sceneConstants.reflectionProbeParams.v = 0i64;
  _RDI->input.sceneConstants.reflectionProbeParams.v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rdi+1FBCh], xmm0
    vmovss  [rbp+180h+var_12C], xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rbp+180h+var_1A4], xmm0
    vmovss  [rbp+180h+var_1A8], xmm6
    vmovss  [rbp+180h+var_1A0], xmm2
  }
  if ( rg.useRProbeOctahedron )
  {
    R_ReflectionProbe_GetProbeOctahedronImageArray();
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, ecx
      vmovaps xmm0, xmm6; val
      vmovss  [rbp+180h+var_1A8], xmm6
    }
    *(double *)&_XMM0 = I_fres(*(float *)&_XMM0);
    __asm { vmovss  [rbp+180h+var_1A4], xmm0 }
    v477 = (rg.useRProbeOctahedron >= 2) + 2;
    __asm
    {
      vmovss  xmm2, [rsp+280h+var_23C]
      vmovss  [rbp+180h+var_1A0], xmm2
    }
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rax+28h]
    vmovss  dword ptr [rdi+1FC0h], xmm6
    vmovss  dword ptr [rdi+1FC4h], xmm0
    vmovss  dword ptr [rdi+1FC8h], xmm2
    vmovss  dword ptr [rdi+1FCCh], xmm1
    vmovss  [rbp+180h+var_19C], xmm1
  }
  R_SetScreenSpaceReflectionInfo(_RDI, _RSI);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+630h]
    vmovss  xmm1, dword ptr [rdi+628h]
    vmovss  xmm2, dword ptr [rdi+62Ch]
    vmovaps xmm8, cs:__xmm@3f8000003f8000003f8000003f800000
    vcmpltss xmm0, xmm9, xmm3
    vblendvps xmm0, xmm9, xmm8, xmm0
    vmovss  dword ptr [rdi+2290h], xmm0
    vmovss  dword ptr [rdi+2294h], xmm1
    vmovss  dword ptr [rdi+2298h], xmm2
    vmovss  dword ptr [rdi+229Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+9ACh]
    vcomiss xmm0, xmm9
  }
  if ( v114 )
    goto LABEL_214;
  __asm { vcomiss xmm0, xmm8 }
  if ( !(v114 | v115) )
  {
LABEL_214:
    __asm
    {
      vcvtss2sd xmm2, xmm0, xmm0
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+280h+var_248], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+280h+outReProjFloatZHeight], xmm1
      vmovsd  [rsp+280h+outReProjFloatZWidth], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 4153, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( viewInfo->dualViewScopeState.m_fade ) && ( viewInfo->dualViewScopeState.m_fade ) <= ( 1.0f )", "viewInfo->dualViewScopeState.m_fade not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&outReProjFloatZWidtha, *(double *)&outReProjFloatZHeighta, v475) )
      __debugbreak();
  }
  __asm { vsubss  xmm2, xmm8, dword ptr [rdi+9ACh] }
  if ( !rg.mbEnable )
    goto LABEL_111;
  if ( (*((_DWORD *)&_RDI->viewportFeatures + 10) & 0x8000) == 0 )
    goto LABEL_111;
  __asm { vcomiss xmm2, xmm9 }
  if ( (*((_DWORD *)&_RDI->viewportFeatures + 10) & 0x8000) != 0 )
    v126 = 1;
  else
LABEL_111:
    v126 = 0;
  _RDI->motionBlur.enabled = v126;
  if ( v126 && r_mbWorldEnable->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0AB8h]
      vcomiss xmm0, xmm9
    }
    if ( !r_mbWorldEnable->current.enabled )
    {
      _RAX = r_mbVelocityScaleViewModel;
      __asm { vmovss  xmm0, dword ptr [rax+28h] }
    }
    __asm { vmulss  xmm1, xmm0, xmm2 }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm { vmovss  dword ptr [rdi+37E8h], xmm1 }
  if ( _RDI->motionBlur.enabled && r_mbViewModelEnable->current.enabled )
  {
    _RAX = r_mbVelocityScaleViewModel;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmaxss  xmm1, xmm0, dword ptr [rsi+0AB4h]
      vmulss  xmm3, xmm1, xmm2
    }
  }
  else
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  __asm { vmovss  dword ptr [rdi+37ECh], xmm3 }
  if ( _RDI->motionBlur.enabled && r_mbVelocityFpsCompensation->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3c888889
      vdivss  xmm1, xmm0, dword ptr [rax+7ACCh]
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm8 }
  }
  __asm { vmovss  dword ptr [rdi+37F0h], xmm1 }
  R_SetVelocityInfo(_RDI, _RSI->sceneRtWidth, _RSI->sceneRtHeight);
  R_SetSSAOInfo(_RDI, _RSI->sceneRtWidth, _RSI->sceneRtHeight, &_RSI->ssao);
  if ( (*((_DWORD *)&_RDI->viewportFeatures + 10) & 0x40000) != 0 )
  {
    _RDI->volumeLightScatter.enabled = 0;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+0F4h]
      vmovups ymmword ptr [rdi+2E40h], ymm0
      vmovsd  xmm1, qword ptr [rsi+114h]
      vmovsd  qword ptr [rdi+2E60h], xmm1
    }
  }
  FrustumHeight = R_VOL_GetFrustumHeight(_RDI);
  FrustumWidth = R_VOL_GetFrustumWidth(_RDI);
  R_SetForwardPlusClusterInfo(_RDI, FrustumWidth, FrustumHeight);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+11Ch]
    vmovups ymmword ptr [rdi+2E68h], ymm0
    vmovups ymm1, ymmword ptr [rsi+13Ch]
    vmovups ymmword ptr [rdi+2E88h], ymm1
    vmovups xmm0, xmmword ptr [rsi+15Ch]
    vmovups xmmword ptr [rdi+2EA8h], xmm0
  }
  v143 = _RDI->volumetrics.enabled && *((int *)&_RDI->viewportFeatures + 10) < 0 && rg.volumetrics;
  _RDI->volumetrics.enabled = v143;
  _RDI->volumetrics.teleported = _RSI->playerTeleported;
  v144 = r_volumetricsParticleIter;
  if ( !r_volumetricsParticleIter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v144);
  _RDI->volumetrics.particleIterLimit = v144->current.unsignedInt;
  v145 = r_volumetricsParticleNoise;
  if ( !r_volumetricsParticleNoise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v145);
  _RDI->volumetrics.particleNoiseMode = v145->current.integer;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth; r_globals_t rg
    vmovss  dword ptr [rdi+1BB0h], xmm0
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth+4; r_globals_t rg
    vmovss  dword ptr [rdi+1BB4h], xmm1
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth+8; r_globals_t rg
    vmovss  dword ptr [rdi+1BB8h], xmm0
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth+0Ch; r_globals_t rg
    vmovss  dword ptr [rdi+1BBCh], xmm1
    vdivps  xmm0, xmm8, xmmword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth; r_globals_t rg
    vmovups xmmword ptr [rdi+1BC0h], xmm0
    vmovups ymm0, ymmword ptr [rsi+16Ch]
  }
  _RBX = frontEndDataOut;
  __asm
  {
    vmovups ymmword ptr [rbx+0E7634h], ymm0
    vmovups xmm1, xmmword ptr [rsi+18Ch]
    vmovups xmmword ptr [rbx+0E7654h], xmm1
    vmovsd  xmm0, qword ptr [rsi+19Ch]
    vmovss  xmm1, cs:__real@4728c000; Y
    vmovsd  qword ptr [rbx+0E7664h], xmm0
    vdivss  xmm0, xmm8, dword ptr [rbx+0E7654h]
    vmovss  dword ptr [rbx+0E7654h], xmm0
    vmovss  xmm0, dword ptr [rdi+5B4h]; X
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rbx+0E7658h]
    vmovss  dword ptr [rbx+0E7658h], xmm1
    vmulss  xmm0, xmm0, dword ptr [rbx+0E765Ch]
    vmovss  dword ptr [rbx+0E765Ch], xmm0
  }
  R_SetTonemapInfo(_RDI, _RSI);
  R_SetPerceptualInfo(_RDI, _RSI);
  R_SetPostAAInfo(_RDI);
  if ( r_whiteBalanceTweaks->current.enabled )
  {
    _RDI->whiteBalance.method = r_whiteBalanceMethod->current.integer;
    _RDI->whiteBalance.illuminant = r_whiteBalanceIlluminant->current.integer;
    LODWORD(_RDI->whiteBalance.colorTempK) = r_whiteBalanceColorTempK->current.integer;
    LODWORD(_RDI->whiteBalance.colorGreenMagentaShift) = r_whiteBalanceGreenMagentaShift->current.integer;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+2ECh]
      vmovups xmmword ptr [rdi+3864h], xmm0
    }
  }
  *((_BYTE *)&_RDI->input + 7920) ^= (*((_BYTE *)&_RDI->input + 7920) ^ (4 * r_decalVolumes->current.enabled)) & 4;
  R_SetDecalVolumeTextures(_RDI);
  _RBX = DCONST_DVARVEC4_r_wireframeColor;
  if ( !DCONST_DVARVEC4_r_wireframeColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_wireframeColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  xmm2, dword ptr [rbx+30h]
    vmovss  dword ptr [rdi+26A0h], xmm0
    vmovss  dword ptr [rdi+26A4h], xmm1
    vmovss  dword ptr [rdi+26A8h], xmm2
  }
  R_ReProjFloatZ_RenderTargetInfo(_RDI->frustumGrid.voxelCountX, _RDI->frustumGrid.voxelCountY, _RSI->sceneRtWidth, _RSI->sceneRtHeight, &_RDI->reProjFloatZMipMap, &_RDI->reProjFloatZWidth, &_RDI->reProjFloatZHeight);
  LODWORD(_RDI->lightGrid.temporalSmoothingFactor) = r_lightGridTempSmoothingFactor->current.integer;
  *(_QWORD *)&_RDI->surfBoundsMutex.readCount = 0i64;
  _RDI->surfBoundsMutex.tempPriority.threadHandle = NULL;
  *(_QWORD *)&_RDI->surfBoundsMutex.tempPriority.oldPriority = 0i64;
  *(_QWORD *)&_RDI->surfBoundsMutex.writeThreadId = 0i64;
  v165 = &_RDI->sunShadowAndDepthHackSurfBounds[1].halfSize.v[2];
  _RDI->matRenderFeatures = 0;
  do
  {
    *(_QWORD *)(v165 - 11) = 0i64;
    *(v165 - 9) = 0.0;
    *(v165 - 8) = -3.4028235e38;
    *(v165 - 7) = -3.4028235e38;
    *(v165 - 6) = -3.4028235e38;
    *(_QWORD *)(v165 - 5) = 0i64;
    *(v165 - 3) = 0.0;
    *(v165 - 2) = -3.4028235e38;
    *(v165 - 1) = -3.4028235e38;
    *v165 = -3.4028235e38;
    *(_QWORD *)(v165 + 1) = 0i64;
    v165[3] = 0.0;
    v165[4] = -3.4028235e38;
    v165[5] = -3.4028235e38;
    v165[6] = -3.4028235e38;
    *(_QWORD *)(v165 + 7) = 0i64;
    v165[9] = 0.0;
    v165[10] = -3.4028235e38;
    v165[11] = -3.4028235e38;
    v165[12] = -3.4028235e38;
    *(_QWORD *)(v165 + 13) = 0i64;
    v165[15] = 0.0;
    v165[16] = -3.4028235e38;
    v165[17] = -3.4028235e38;
    v165[18] = -3.4028235e38;
    *(_QWORD *)(v165 + 19) = 0i64;
    v165[21] = 0.0;
    v165[22] = -3.4028235e38;
    v165[23] = -3.4028235e38;
    v165[24] = -3.4028235e38;
    *(_QWORD *)(v165 + 25) = 0i64;
    v165[27] = 0.0;
    v165[28] = -3.4028235e38;
    v165[29] = -3.4028235e38;
    v165[30] = -3.4028235e38;
    *(_QWORD *)(v165 + 31) = 0i64;
    v165[33] = 0.0;
    v165[34] = -3.4028235e38;
    v165[35] = -3.4028235e38;
    v165[36] = -3.4028235e38;
    *(_QWORD *)(v165 + 37) = 0i64;
    v165[39] = 0.0;
    v165[40] = -3.4028235e38;
    v165[41] = -3.4028235e38;
    v165[42] = -3.4028235e38;
    *(_QWORD *)(v165 + 43) = 0i64;
    v165[45] = 0.0;
    v165[46] = -3.4028235e38;
    v165[47] = -3.4028235e38;
    v165[48] = -3.4028235e38;
    *(_QWORD *)(v165 + 49) = 0i64;
    v165[51] = 0.0;
    v165[52] = -3.4028235e38;
    v165[53] = -3.4028235e38;
    v165[54] = -3.4028235e38;
    v165 += 66;
    --v20;
  }
  while ( v20 );
  __asm { vmovups ymm0, ymmword ptr [rsi+9D8h] }
  _RCX = &_RDI->fog;
  __asm
  {
    vmovups ymmword ptr [rdi+0D70h], ymm0
    vmovups xmm1, xmmword ptr [rsi+9F8h]
    vmovups xmmword ptr [rdi+0D90h], xmm1
    vmovsd  xmm0, qword ptr [rsi+7D8h]
    vmovsd  qword ptr [rdi+0AA8h], xmm0
  }
  v170 = 2i64;
  _RDI->chromaticAberration.aberration = _RSI->chromaticAberration.aberration;
  _RAX = &_RSI->fog;
  do
  {
    _RCX = (GfxFog *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxFog *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v170;
  }
  while ( v170 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
  }
  *(_QWORD *)_RCX->mieCoeffs.v = *(_QWORD *)_RAX->mieCoeffs.v;
  if ( r_fogCircleTweaks->current.enabled )
  {
    _RCX = r_fogCircle;
    LODWORD(_RDI->brCircle.position.v[0]) = r_fogCircle->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vmovss  dword ptr [rdi+0C20h], xmm0
    }
    _RCX = r_fogCircleVolumetricInnerColor;
    LODWORD(_RDI->brCircle.volumetricInnerColor.v[0]) = r_fogCircleVolumetricInnerColor->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vmovss  dword ptr [rdi+0BE4h], xmm0
      vmovss  xmm1, dword ptr [rcx+30h]
      vmovss  dword ptr [rdi+0BE8h], xmm1
    }
    _RCX = r_fogCircleVolumetricOuterColor;
    LODWORD(_RDI->brCircle.volumetricOuterColor.v[0]) = r_fogCircleVolumetricOuterColor->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vmovss  dword ptr [rdi+0BF0h], xmm0
      vmovss  xmm1, dword ptr [rcx+30h]
      vmovss  dword ptr [rdi+0BF4h], xmm1
    }
    _RCX = r_fogCircleDistanceInnerColor;
    LODWORD(_RDI->brCircle.distanceInnerColor.v[0]) = r_fogCircleDistanceInnerColor->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vmovss  dword ptr [rdi+0BFCh], xmm0
      vmovss  xmm1, dword ptr [rcx+30h]
      vmovss  dword ptr [rdi+0C00h], xmm1
    }
    _RCX = r_fogCircleDistanceOuterColor;
    LODWORD(_RDI->brCircle.distanceOuterColor.v[0]) = r_fogCircleDistanceOuterColor->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vmovss  dword ptr [rdi+0C08h], xmm0
      vmovss  xmm1, dword ptr [rcx+30h]
      vmovss  dword ptr [rdi+0C0Ch], xmm1
    }
    _RAX = r_fogCirclePerceptualTint;
    __asm
    {
      vmovss  xmm2, dword ptr [rax+34h]
      vmulss  xmm0, xmm2, dword ptr [rax+28h]
      vmovss  dword ptr [rdi+0C10h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rax+2Ch]
      vmovss  dword ptr [rdi+0C14h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rax+30h]
      vmovss  dword ptr [rdi+0C18h], xmm0
    }
    LODWORD(_RDI->brCircle.blendDistance) = r_fogCircleOuterColorDistance->current.integer;
    _RDI->brCircle.radius = r_fogCircle->current.vector.v[2];
    LODWORD(_RDI->brCircle.fogInset) = r_fogCircleInset->current.integer;
    _RDI->brCircle.height = r_fogCircle->current.vector.v[3];
    LODWORD(_RDI->brCircle.volumetricDensity) = r_fogCircleVolumetricParams->current.integer;
    _RDI->brCircle.volumetricScale = r_fogCircleVolumetricParams->current.vector.v[1];
    LODWORD(_RDI->brCircle.distanceDensity) = r_fogCircleDistanceParams->current.integer;
    _RDI->brCircle.distanceScale = r_fogCircleDistanceParams->current.vector.v[1];
    _RDI->brCircle.distanceHalfPlane = r_fogCircleDistanceParams->current.vector.v[2];
    LODWORD(_RDI->brCircle.distanceHeightFalloff) = r_fogCircleHeightFalloff->current.integer;
    _RDI->brCircle.volumetricHeightFalloff = r_fogCircleHeightFalloff->current.vector.v[1];
    LODWORD(_RDI->brCircle.skyDistanceMultiplier) = r_fogCircleSkyDistanceMultiplier->current.integer;
    LODWORD(_RDI->brCircle.aFogColorBlend) = r_fogCircleDistanceFogBlend->current.integer;
    _RDI->brCircle.aFogDistanceBlend = r_fogCircleDistanceFogBlend->current.vector.v[1];
    LODWORD(_RDI->brCircle.distanceHeightBlend) = r_fogCircleDistanceHeightBlend->current.integer;
    LODWORD(_RDI->brCircle.distanceHeightViewBlend) = r_fogCircleDistanceHeightViewBlend->current.integer;
    LODWORD(_RDI->brCircle.distanceHeightBlendStart) = r_fogCircleDistanceHeightBlendStart->current.integer;
    LODWORD(_RDI->brCircle.densityScale) = r_fogCircleFogDensityScale->current.integer;
    LODWORD(_RDI->brCircle.densityBias) = r_fogCircleFogDensityBias->current.integer;
    LODWORD(_RDI->brCircle.densityNoiseScale) = r_fogCircleFogDensityNoiseScale->current.integer;
    LODWORD(_RDI->brCircle.densityNoiseBias) = r_fogCircleFogDensityNoiseBias->current.integer;
    _RCX = r_fogCircleFogDensityTiling;
    LODWORD(_RDI->brCircle.densityTiling.v[0]) = r_fogCircleFogDensityTiling->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vmovss  dword ptr [rdi+0C7Ch], xmm0
    }
    _RCX = r_fogCircleFogDensityScrollingSpeed;
    LODWORD(_RDI->brCircle.densityScrollingSpeed.v[0]) = r_fogCircleFogDensityScrollingSpeed->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2Ch]
      vmovss  dword ptr [rdi+0C84h], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+928h]
      vmovups xmmword ptr [rdi+0BE0h], xmm0
      vmovups xmm1, xmmword ptr [rsi+938h]
      vmovups xmmword ptr [rdi+0BF0h], xmm1
      vmovups xmm0, xmmword ptr [rsi+948h]
      vmovups xmmword ptr [rdi+0C00h], xmm0
      vmovups xmm1, xmmword ptr [rsi+958h]
      vmovups xmmword ptr [rdi+0C10h], xmm1
      vmovups xmm0, xmmword ptr [rsi+968h]
      vmovups xmmword ptr [rdi+0C20h], xmm0
      vmovups xmm1, xmmword ptr [rsi+978h]
      vmovups xmmword ptr [rdi+0C30h], xmm1
      vmovups xmm0, xmmword ptr [rsi+988h]
      vmovups xmmword ptr [rdi+0C40h], xmm0
      vmovups xmm1, xmmword ptr [rsi+998h]
      vmovups xmmword ptr [rdi+0C50h], xmm1
      vmovups xmm0, xmmword ptr [rsi+9A8h]
      vmovups xmmword ptr [rdi+0C60h], xmm0
      vmovups xmm1, xmmword ptr [rsi+9B8h]
      vmovups xmmword ptr [rdi+0C70h], xmm1
    }
    _RDI->brCircle.densityScrollingSpeed = _RSI->brCircle.densityScrollingSpeed;
  }
  R_SetFrameFog(_RDI);
  __asm { vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000 }
  if ( Particle_GetMagmaHeightfield() )
  {
    _RCX = particle_magma_heightfield_bbox_min;
    _RAX = particle_magma_heightfield_bbox_max;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vsubss  xmm2, xmm0, dword ptr [rcx+28h]
      vmovss  xmm1, dword ptr [rax+2Ch]
      vsubss  xmm0, xmm1, dword ptr [rcx+2Ch]
      vmaxss  xmm1, xmm0, xmm8
      vdivss  xmm4, xmm8, xmm1
      vxorps  xmm0, xmm4, xmm14
      vmaxss  xmm3, xmm2, xmm8
      vdivss  xmm2, xmm8, xmm3
      vmovss  dword ptr [rdi+2220h], xmm2
      vmovss  dword ptr [rdi+2224h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rcx+28h]
      vxorps  xmm0, xmm1, xmm14
      vmovss  dword ptr [rdi+2228h], xmm0
      vmulss  xmm1, xmm4, dword ptr [rcx+2Ch]
      vaddss  xmm0, xmm1, xmm8
      vmovss  dword ptr [rdi+222Ch], xmm0
      vmovss  xmm1, dword ptr [rax+30h]
      vsubss  xmm0, xmm1, dword ptr [rcx+30h]
      vmovss  dword ptr [rdi+2230h], xmm0
      vmovss  xmm2, dword ptr [rcx+30h]
    }
  }
  else
  {
    _RDI->input.sceneConstants.vfxMagmaHeightfieldXYScale = 0i64;
    _RDI->input.sceneConstants.vfxMagmaHeightfieldXYBias = 0i64;
    _RDI->input.sceneConstants.vfxMagmaHeightfieldYScale = 0.0;
    __asm { vmovaps xmm2, xmm9 }
  }
  __asm { vmovss  dword ptr [rdi+2234h], xmm2 }
  _RDI->input.sceneConstants.vfxMagmaHeightfieldUnused0 = 0.0;
  Bool_Internal = Dvar_GetBool_Internal(sm_sunDynamics);
  v235 = !Bool_Internal;
  if ( !Bool_Internal || (v235 = rg.useSunShadow <= 2, rg.useSunShadow != 2) )
    v89 = 0;
  _RDI->useDynamicSunShadows = v89;
  _RDI->useCachedSunShadow = rg.useCachedSunShadow;
  _RDI->cachedSunShadowMaxTilesPerFrame = rg.cachedSunShadowMaxTilesPerFrame;
  _RAX = r_rimLightingLerp;
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+300h]
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm2, xmm0, dword ptr [rsi+2FCh]
    vmovss  xmm0, dword ptr [rsi+304h]
    vsubss  xmm1, xmm0, xmm3
    vcomiss xmm1, xmm9
  }
  if ( v235 )
    __asm { vmovaps xmm1, xmm8 }
  else
    __asm { vdivss  xmm1, xmm8, xmm1 }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+308h]
    vmovss  dword ptr [rdi+1920h], xmm2
    vmovss  dword ptr [rdi+1924h], xmm3
    vmovss  dword ptr [rdi+1928h], xmm1
    vmovss  dword ptr [rdi+192Ch], xmm0
  }
  v244 = r_dof_tweak->current.integer;
  if ( v244 )
  {
    v245 = v244 - 1;
    if ( !v245 )
    {
      _RDI->dofDisabled = 0;
      _RDI->dualViewScopeState.m_fade = 1.0;
      _RDI->dofPhysical.enabled = R_DOF_GetPhysicalEnable();
      *(_WORD *)&_RDI->dofPhysical.hipEnabled = 0;
      _RDI->dofPhysical.adsEnabled = 0;
      LODWORD(_RDI->dofPhysical.filmDiagonal) = r_dof_physical_filmDiagonal->current.integer;
      LODWORD(_RDI->dofPhysical.minFocusDistance) = r_dof_physical_minFocusDistance->current.integer;
      LODWORD(_RDI->dofPhysical.maxCocDiameter) = r_dof_physical_maxCocDiameter->current.integer;
      LODWORD(_RDI->dofPhysical.fstop) = r_dof_physical_fstop->current.integer;
      LODWORD(_RDI->dofPhysical.focusDistance) = r_dof_physical_focusDistance->current.integer;
      _RDI->dofPhysical.cocScale = 1.0;
      LODWORD(_RDI->dofPhysical.viewModelFstop) = r_dof_physical_viewModelFstop->current.integer;
      LODWORD(_RDI->dofPhysical.viewModelFocusDistance) = r_dof_physical_viewModelFocusDistance->current.integer;
      goto LABEL_173;
    }
    if ( v245 != 1 )
    {
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3283, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
    }
    _RDI->dofDisabled = 0;
    goto LABEL_171;
  }
  if ( !r_dof_enable->current.enabled )
  {
    _RDI->dofDisabled = 1;
LABEL_171:
    viewModelFocusDistance = 0.0;
    *(_QWORD *)&_RDI->dofPhysical.enabled = 0i64;
    *(_QWORD *)&_RDI->dofPhysical.minFocusDistance = 0i64;
    *(_QWORD *)&_RDI->dofPhysical.fstop = 0i64;
    *(_QWORD *)&_RDI->dofPhysical.cocScale = 0i64;
    goto LABEL_172;
  }
  _RDI->dofDisabled = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+18h]
    vmovups ymmword ptr [rdi+0C8Ch], ymm0
  }
  viewModelFocusDistance = _RSI->dofPhysical.viewModelFocusDistance;
LABEL_172:
  _RDI->dofPhysical.viewModelFocusDistance = viewModelFocusDistance;
LABEL_173:
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+0AD8h]
    vmovups xmmword ptr [rdi+6474h], xmm0
    vmovsd  xmm0, qword ptr [rsi+0ABCh]
    vmovsd  qword ptr [rdi+37F4h], xmm0
  }
  _RDI->radialMotionBlur.strength = _RSI->radialMotionBlur.strength;
  __asm
  {
    vmovaps xmmword ptr [rsp+280h+var_58+8], xmm7
    vmovaps xmmword ptr [rsp+280h+var_88+8], xmm10
    vmovaps [rsp+280h+var_98+8], xmm11
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideRadius);
  __asm { vcomiss xmm0, xmm9 }
  if ( !v63 && !v115 )
  {
    __asm { vmovss  dword ptr [rdi+37F8h], xmm0 }
    _RDI->radialMotionBlur.enabled = 1;
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideStrength);
  __asm { vcomiss xmm0, xmm9 }
  if ( !v63 && !v115 )
  {
    __asm { vmovss  dword ptr [rdi+37FCh], xmm0 }
    _RDI->radialMotionBlur.enabled = 1;
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal(r_mbRadialOverrideDistortion);
  __asm { vucomiss xmm0, xmm9 }
  if ( !v115 )
    _RDI->radialMotionBlur.enabled = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+80h]
    vmovups ymmword ptr [rdi+0CC4h], ymm0
    vmovups ymm1, ymmword ptr [rsi+0A0h]
    vmovups ymmword ptr [rdi+0CE4h], ymm1
    vmovups ymm0, ymmword ptr [rsi+0C0h]
    vmovups ymmword ptr [rdi+0D04h], ymm0
    vmovups xmm1, xmmword ptr [rsi+0E0h]
    vmovups xmmword ptr [rdi+0D24h], xmm1
  }
  if ( rg.variableRateShadingEnabled )
  {
    _RDI->variableRateShading.enabled = r_vrsEnabled->current.enabled;
    _RDI->variableRateShading.vrsMaskEnabled = r_vrsMaskEnabled->current.enabled;
    _RDI->variableRateShading.vrsMaskPreview = r_vrsMaskPreview->current.enabled;
    LODWORD(_RDI->variableRateShading.vrsMaskPixelThreshold) = r_vrsMaskPixelThreshold->current.integer;
    LODWORD(_RDI->variableRateShading.vrsMaskNeighborhoodThreshold) = r_vrsMaskNeighborhoodThreshold->current.integer;
    _RDI->variableRateShading.vrsMaskMotionBlurEnabled = r_vrsMaskMotionBlurEnabled->current.enabled;
    _RDI->variableRateShading.vrsMaskMotionBlurIntensity = r_vrsMaskMotionBlurIntensity->current.integer;
    _RDI->variableRateShading.vrsMaskDofEnabled = r_vrsMaskDofEnabled->current.enabled;
    _RDI->variableRateShading.vrsMaskDofIntensity = r_vrsMaskDofIntensity->current.integer;
    _RDI->variableRateShading.vrsMaskOpaqueDrawListsEnabled = r_vrsMaskOpaqueDrawListsEnabled->current.enabled;
    _RDI->variableRateShading.vrsMaskDecalDrawListsEnabled = r_vrsMaskDecalDrawListsEnabled->current.enabled;
    _RDI->variableRateShading.vrsMaskTransparentDrawListsEnabled = r_vrsMaskTransparentDrawListsEnabled->current.enabled;
    _RDI->variableRateShading.vrsMaskPostProcessingEnabled = r_vrsMaskPostProcessingEnabled->current.enabled;
    _RDI->variableRateShading.prepassEnabled = r_vrsPrepassEnabled->current.enabled;
    v254 = r_vrsDrawGunEnabled->current.enabled;
  }
  else
  {
    *(_QWORD *)&_RDI->variableRateShading.enabled = 0i64;
    v254 = 0;
    *(_QWORD *)&_RDI->variableRateShading.vrsMaskPixelThreshold = 0i64;
    *(_QWORD *)&_RDI->variableRateShading.vrsMaskMotionBlurIntensity = 0i64;
    *(_WORD *)&_RDI->variableRateShading.vrsMaskPostProcessingEnabled = 0;
  }
  _RDI->variableRateShading.drawGunEnabled = v254;
  v255 = r_lensProfileOverrideMode->current.integer;
  if ( v255 )
  {
    _RDI->lensProfile.mode = v255;
    LODWORD(_RDI->lensProfile.focalLength) = r_lensProfileOverrideFocalLength->current.integer;
    LODWORD(_RDI->lensProfile.aperture) = r_lensProfileOverrideAperture->current.integer;
    LODWORD(_RDI->lensProfile.scale) = r_lensProfileOverrideScale->current.integer;
    LODWORD(_RDI->lensProfile.UVScale) = r_lensProfileOverrideUVScale->current.integer;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+3Ch]
      vmovups xmmword ptr [rdi+0CB0h], xmm0
    }
    _RDI->lensProfile.UVScale = _RSI->lensProfile.UVScale;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+50h]
    vmovups ymmword ptr [rdi+2E10h], ymm0
    vmovups xmm1, xmmword ptr [rsi+70h]
    vmovups xmmword ptr [rdi+2E30h], xmm1
  }
  if ( r_vignetteUseTweaks->current.enabled )
  {
    __asm { vmovd   xmm1, r15d }
    LODWORD(_RDI->vignette.intensity) = r_vignetteTweakIntensity->current.integer;
    _ECX = r_vignetteTweakSquareAspectRatio->current.color[0];
    __asm
    {
      vmovd   xmm0, ecx
      vpcmpeqd xmm1, xmm0, xmm1
      vblendvps xmm0, xmm8, xmm9, xmm1
      vmovss  dword ptr [rdi+2E14h], xmm0
    }
    v264 = r_vignetteTweakSize;
    LODWORD(_RDI->vignette.size.v[0]) = r_vignetteTweakSize->current.integer;
    _RDI->vignette.size.v[1] = v264->current.vector.v[1];
    LODWORD(_RDI->vignette.falloff) = r_vignetteTweakFalloff->current.integer;
    LODWORD(_RDI->vignette.falloffStart) = r_vignetteTweakFalloffStart->current.integer;
    v265 = r_vignetteTweakBoxSize;
    LODWORD(_RDI->vignette.boxSize.v[0]) = r_vignetteTweakBoxSize->current.integer;
    _RDI->vignette.boxSize.v[1] = v265->current.vector.v[1];
    v266 = r_vignetteTweakOffset;
    LODWORD(_RDI->vignette.offset.v[0]) = r_vignetteTweakOffset->current.integer;
    _RDI->vignette.offset.v[1] = v266->current.vector.v[1];
  }
  R_SetLightScaleInfo(_RDI, _RSI);
  v267 = !r_lgvThinDisable->current.enabled && r_lgvThinOverride->current.enabled && r_lgvThinOverrideStable->current.integer == 1;
  _RDI->input.sceneConstants.debugLGVTweak = v267;
  v115 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO;
  _RAX = r_shaderLodSecondarySpecularDurango;
  if ( !v115 )
    _RAX = r_shaderLodSecondarySpecular;
  __asm
  {
    vmovss  xmm5, dword ptr [rax+28h]
    vmovss  xmm0, cs:__real@40900000
    vmovss  xmm1, cs:__real@40a00000
    vsubss  xmm2, xmm0, xmm5
    vmulss  xmm0, xmm5, cs:__real@3e4ccccd
    vsubss  xmm3, xmm1, xmm2
    vmulss  xmm4, xmm3, cs:__real@3e4ccccd
    vsubss  xmm1, xmm0, xmm4
    vdivss  xmm3, xmm8, xmm1
    vmovss  dword ptr [rdi+2460h], xmm3
    vmulss  xmm0, xmm3, xmm4
    vxorps  xmm2, xmm0, xmm14
    vmovss  dword ptr [rdi+2464h], xmm2
  }
  *(_QWORD *)&_RDI->input.sceneConstants.shaderLodScale.xyz.z = 0i64;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.lodParms.cappedLodScale; r_globals_t rg
    vmovss  dword ptr [rdi+2660h], xmm0
  }
  Dvar_GetVec4_Internal(fx_lighting_shScale, &result);
  Dvar_GetVec4_Internal(fx_lighting_params, &v519);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+180h+result]
    vmovups xmmword ptr [rdi+18E0h], xmm0
    vmovups xmm0, xmmword ptr [rbp+180h+var_180]
    vmovups xmmword ptr [rdi+18F0h], xmm0
    vmovups ymm0, ymmword ptr [rsi+0A08h]
    vmovups ymmword ptr [rdi+0E00h], ymm0
    vmovups xmm1, xmmword ptr [rsi+0A28h]
    vmovups xmmword ptr [rdi+0E20h], xmm1
    vmovsd  xmm0, qword ptr [rsi+1A4h]
    vmovsd  qword ptr [rdi+2DD0h], xmm0
    vmovups xmm0, xmmword ptr [rsi+1ACh]
    vmovups xmmword ptr [rdi+2DD8h], xmm0
  }
  _RDI->analogEffects.analogChromaSeparationEffectAmount = _RSI->analogEffects.analogChromaSeparationEffectAmount;
  if ( !r_colorGradingEnable->current.enabled || rg.debugShaderEnabled )
  {
    v287 = 0;
    _RCX = &g_GfxColorGrading_identity;
  }
  else
  {
    v287 = 1;
    _RCX = &_RSI->colorGrading;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rdi+2EE0h], xmm0
    vmovups xmm1, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rdi+2EF0h], xmm1
    vmovups xmm0, xmmword ptr [rcx+20h]
    vmovups xmmword ptr [rdi+2F00h], xmm0
    vmovups xmm1, xmmword ptr [rcx+30h]
    vmovups xmmword ptr [rdi+2F10h], xmm1
    vmovups xmm0, xmmword ptr [rcx+40h]
    vmovups xmmword ptr [rdi+2F20h], xmm0
    vmovups xmm1, xmmword ptr [rcx+50h]
    vmovups xmmword ptr [rdi+2F30h], xmm1
    vmovups xmm0, xmmword ptr [rcx+60h]
    vmovups xmmword ptr [rdi+2F40h], xmm0
    vmovups xmm1, xmmword ptr [rcx+70h]
    vmovups xmmword ptr [rdi+2F50h], xmm1
    vmovups xmm0, xmmword ptr [rcx+80h]
    vmovups xmmword ptr [rdi+2F60h], xmm0
    vmovups xmm1, xmmword ptr [rcx+90h]
    vmovups xmmword ptr [rdi+2F70h], xmm1
    vmovups xmm0, xmmword ptr [rcx+0A0h]
    vmovups xmmword ptr [rdi+2F80h], xmm0
    vmovups xmm1, xmmword ptr [rcx+0B0h]
    vmovups xmmword ptr [rdi+2F90h], xmm1
  }
  if ( v287 )
    nvgColorGrading = _RSI->nvgColorGrading;
  else
    nvgColorGrading = NULL;
  _RDI->nvgColorGrading = nvgColorGrading;
  LightmapAtlasTextureSize = R_GetLightmapAtlasTextureSize(_RDI->input.data, rgp.world->draw.lightmapType);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmovss  dword ptr [rdi+2600h], xmm0
  }
  if ( LightmapAtlasTextureSize )
    __asm { vdivss  xmm0, xmm8, xmm0 }
  else
    __asm { vmovaps xmm0, xmm8 }
  __asm { vmovss  dword ptr [rdi+2604h], xmm0 }
  LightGridVolumesAtlasTextureDepth = R_GetLightGridVolumesAtlasTextureDepth(_RDI->input.data);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmovss  dword ptr [rdi+2608h], xmm0
  }
  if ( LightGridVolumesAtlasTextureDepth )
    __asm { vdivss  xmm1, xmm8, xmm0 }
  else
    __asm { vmovaps xmm1, xmm8 }
  __asm { vmovss  dword ptr [rdi+260Ch], xmm1 }
  _RAX = r_screenShotPixelOffset;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+28h]
    vmovss  [rbp+180h+var_128], xmm1
    vmovss  xmm0, dword ptr [rax+2Ch]
    vmovss  [rbp+180h+var_124], xmm0
    vxorps  xmm1, xmm1, xmm14
    vmovss  [rbp+180h+var_128], xmm1
    vmovss  dword ptr [rdi+2610h], xmm1
    vmovss  xmm0, [rbp+180h+var_124]
    vmovss  dword ptr [rdi+2614h], xmm0
  }
  InterleavedInfo = R_Screenshot_GetInterleavedInfo();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+180h+var_198]
    vmovss  xmm1, dword ptr [rbp+180h+var_198+4]
    vmovss  dword ptr [rdi+2618h], xmm0
    vmovss  dword ptr [rdi+261Ch], xmm1
  }
  LODWORD(_RDI->input.sceneConstants.mipBias) = r_texFilterMipBias->current.integer;
  R_SSS_SetInfo(_RDI);
  __asm
  {
    vmovss  xmm7, cs:__real@3fc90fdb
    vxorps  xmm0, xmm0, xmm0
    vmovups [rsp+280h+var_210+8], xmm0
    vmovss  xmm1, dword ptr [rdi+64Ch]
    vmovss  dword ptr [rsp+280h+var_210+8], xmm1
    vmovss  xmm3, dword ptr [rdi+650h]
    vmovss  dword ptr [rsp+280h+var_210+0Ch], xmm3
    vmovss  xmm4, dword ptr [rdi+654h]
    vmovss  [rbp+180h+var_200], xmm4
    vmovss  xmm2, dword ptr [rdi+648h]
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rsp+280h+var_210+8], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm3, xmm2
    vmovss  [rbp+180h+var_200], xmm0
    vmovss  dword ptr [rsp+280h+var_210+0Ch], xmm1
    vmulss  xmm0, xmm7, dword ptr [rdi+660h]; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbp+180h+vec], xmm0
    vmulss  xmm0, xmm7, dword ptr [rdi+65Ch]; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbp+180h+vec+4], xmm0
    vmulss  xmm0, xmm7, dword ptr [rdi+65Ch]; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm7, dword ptr [rdi+660h]; X
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm6, xmm0
    vxorps  xmm2, xmm1, xmm14
    vmovss  dword ptr [rbp+180h+vec+8], xmm2
    vmovss  dword ptr [rbp+180h+vec+0Ch], xmm9
  }
  MatrixInverse44Aligned((const tmat44_t<vec4_t> *)_RDI, &dst);
  MatrixTransformVector44Aligned(&vec, &dst, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+180h+out]
    vmovss  xmm1, dword ptr [rbp+180h+out+4]
    vmovss  xmm3, dword ptr [rdi+658h]
    vmovss  xmm2, dword ptr [rbp+180h+out+8]
    vmovss  dword ptr [rdi+18C0h], xmm0
    vmovss  dword ptr [rdi+18C4h], xmm1
    vmovss  dword ptr [rdi+18C8h], xmm2
    vmovss  dword ptr [rdi+18CCh], xmm3
    vmovss  xmm0, dword ptr [rsp+280h+var_210+8]
    vmovss  dword ptr [rdi+18D0h], xmm0
    vmovss  xmm1, dword ptr [rsp+280h+var_210+0Ch]
    vmovss  dword ptr [rdi+18D4h], xmm1
    vmovss  xmm0, [rbp+180h+var_200]
    vmovss  dword ptr [rdi+18D8h], xmm0
    vmovss  xmm1, [rbp+180h+var_1FC]
    vmovss  dword ptr [rdi+18DCh], xmm1
  }
  *(_DWORD *)&_RDI->firstFlare = 0;
  _RCX = &_RDI->hudOutline;
  _RAX = &_RSI->hudOutline;
  do
  {
    _RCX = (GfxHudOutlineState *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxHudOutlineState *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v18;
  }
  while ( v18 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  *(_QWORD *)&_RCX->scopeFoeColor.xyz.z = *(_QWORD *)&_RAX->scopeFoeColor.xyz.z;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0AD0h]
    vmovss  dword ptr [rdi+6444h], xmm0
    vmovss  xmm1, dword ptr [rsi+0AD4h]
    vmovss  dword ptr [rdi+6448h], xmm1
  }
  _RDI->deferredScreenshotIndex = _RSI->deferredScreenshotIndex;
  R_SetupSceneCmdBufInput(_RDI);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rdi+1C10h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  dword ptr [rdi+1C14h], xmm1
    vdivss  xmm0, xmm8, xmm0
    vmovss  dword ptr [rdi+1C18h], xmm0
    vdivss  xmm1, xmm8, xmm1
    vmovss  dword ptr [rdi+1C1Ch], xmm1
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, rax
    vdivss  xmm1, xmm8, xmm4
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vdivss  xmm3, xmm8, xmm2
    vmulss  xmm0, xmm3, xmm4
    vmovss  dword ptr [rdi+1C20h], xmm0
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rdi+1C24h], xmm0
    vmovss  dword ptr [rdi+1C28h], xmm1
    vmovss  dword ptr [rdi+1C2Ch], xmm3
  }
  if ( (*((_DWORD *)&_RDI->viewportFeatures + 11) & 0x100) == 0 )
    R_SetupSceneRtInput(_RDI, _RSI->sceneRtWidth, _RSI->sceneRtHeight, _RSI->maxSceneRtWidth, _RSI->maxSceneRtHeight);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+134h]
    vmulss  xmm2, xmm3, cs:?vidConfig@@3UvidConfig_t@@A.displayAspectRatio; vidConfig_t vidConfig
    vmulss  xmm0, xmm2, cs:__real@40000000
    vmovss  dword ptr [rdi+1E60h], xmm0
    vmulss  xmm1, xmm3, cs:__real@c0000000
    vmovss  dword ptr [rdi+1E64h], xmm1
    vmovss  dword ptr [rdi+1E68h], xmm2
    vxorps  xmm0, xmm3, xmm14
    vmovss  dword ptr [rdi+1E6Ch], xmm0
    vmovss  xmm1, dword ptr [rdi+130h]
    vmulss  xmm11, xmm1, dword ptr [rdi+118h]
    vmovss  [rbp+180h+var_1F8], xmm11
    vmulss  xmm6, xmm1, dword ptr [rdi+11Ch]
    vmovss  [rbp+180h+var_1F4], xmm6
    vmulss  xmm7, xmm1, dword ptr [rdi+120h]
    vmovss  [rbp+180h+var_1F0], xmm7
    vmovss  xmm0, dword ptr [rdi+134h]
    vmulss  xmm8, xmm0, dword ptr [rdi+124h]
    vmovss  [rbp+180h+var_1EC], xmm8
    vmulss  xmm9, xmm0, dword ptr [rdi+128h]
    vmovss  [rbp+180h+var_1E8], xmm9
    vmulss  xmm10, xmm0, dword ptr [rdi+12Ch]
    vmovss  [rbp+180h+var_1E4], xmm10
    vmovss  xmm1, dword ptr [rdi+10Ch]
    vmovss  [rbp+180h+var_1E0], xmm1
    vmovss  xmm3, dword ptr [rdi+110h]
    vmovss  [rbp+180h+var_1DC], xmm3
    vmovss  xmm4, dword ptr [rdi+114h]
    vmovss  [rbp+180h+var_1D8], xmm4
    vmovss  xmm2, dword ptr [rdi+168h]
    vmulss  xmm0, xmm2, xmm11
    vaddss  xmm5, xmm0, xmm1
    vmovss  [rbp+180h+var_1E0], xmm5
    vmulss  xmm1, xmm2, xmm6
    vaddss  xmm6, xmm1, xmm3
    vmovss  [rbp+180h+var_1DC], xmm6
    vmulss  xmm0, xmm2, xmm7
    vaddss  xmm4, xmm0, xmm4
    vmovss  [rbp+180h+var_1D8], xmm4
    vmovss  xmm0, dword ptr [rdi+16Ch]
    vxorps  xmm3, xmm0, xmm14
    vmulss  xmm1, xmm3, xmm8
    vaddss  xmm2, xmm1, xmm5
    vmovss  [rbp+180h+var_1E0], xmm2
    vmulss  xmm0, xmm3, xmm9
    vaddss  xmm1, xmm0, xmm6
    vmovss  [rbp+180h+var_1DC], xmm1
    vmulss  xmm2, xmm3, xmm10
    vaddss  xmm0, xmm2, xmm4
    vmovss  [rbp+180h+var_1D8], xmm0
    vmovss  dword ptr [rdi+1E70h], xmm11
    vmovss  xmm0, [rbp+180h+var_1F4]
    vmovss  dword ptr [rdi+1E74h], xmm0
    vmovss  xmm1, [rbp+180h+var_1F0]
    vmovss  dword ptr [rdi+1E78h], xmm1
    vmovss  xmm0, [rbp+180h+var_1EC]
    vmovss  dword ptr [rdi+1E80h], xmm0
    vmovss  xmm1, [rbp+180h+var_1E8]
    vmovss  dword ptr [rdi+1E84h], xmm1
    vmovss  xmm0, [rbp+180h+var_1E4]
    vmovss  dword ptr [rdi+1E88h], xmm0
    vmovss  xmm1, [rbp+180h+var_1E0]
    vmovss  dword ptr [rdi+1E90h], xmm1
    vmovss  xmm0, [rbp+180h+var_1DC]
    vmovss  dword ptr [rdi+1E94h], xmm0
    vmovss  xmm1, [rbp+180h+var_1D8]
    vmovss  dword ptr [rdi+1E98h], xmm1
  }
  MatrixTranspose44Aligned((const tmat44_t<vec4_t> *)_RDI, &_RDI->input.sceneConstants.viewMatrix.m);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+13Ch]
    vmulss  xmm2, xmm3, cs:?vidConfig@@3UvidConfig_t@@A.displayAspectRatio; vidConfig_t vidConfig
    vmulss  xmm0, xmm2, cs:__real@40000000
    vmulss  xmm1, xmm3, cs:__real@c0000000
    vmovss  dword ptr [rdi+1EE0h], xmm0
    vmovss  dword ptr [rdi+1EE4h], xmm1
    vmovss  dword ptr [rdi+1EE8h], xmm2
    vxorps  xmm0, xmm3, xmm14
    vmovss  dword ptr [rdi+1EECh], xmm0
    vmovss  xmm1, dword ptr [rdi+138h]
    vmulss  xmm11, xmm1, dword ptr [rdi+118h]
    vmovss  [rbp+180h+var_1D0], xmm11
    vmulss  xmm6, xmm1, dword ptr [rdi+11Ch]
    vmovss  [rbp+180h+var_1CC], xmm6
    vmulss  xmm7, xmm1, dword ptr [rdi+120h]
    vmovss  [rbp+180h+var_1C8], xmm7
    vmovss  xmm0, dword ptr [rdi+13Ch]
    vmulss  xmm8, xmm0, dword ptr [rdi+124h]
    vmovss  [rbp+180h+var_1C4], xmm8
    vmulss  xmm9, xmm0, dword ptr [rdi+128h]
    vmovss  [rbp+180h+var_1C0], xmm9
    vmulss  xmm10, xmm0, dword ptr [rdi+12Ch]
    vmovss  [rbp+180h+var_1BC], xmm10
    vmovss  xmm1, dword ptr [rdi+10Ch]
    vmovss  [rbp+180h+var_1B8], xmm1
    vmovss  xmm3, dword ptr [rdi+110h]
    vmovss  [rbp+180h+var_1B4], xmm3
    vmovss  xmm4, dword ptr [rdi+114h]
    vmovss  [rbp+180h+var_1B0], xmm4
    vmovss  xmm2, dword ptr [rdi+168h]
    vmulss  xmm0, xmm11, xmm2
    vaddss  xmm5, xmm0, xmm1
    vmovss  [rbp+180h+var_1B8], xmm5
    vmulss  xmm1, xmm6, xmm2
    vaddss  xmm6, xmm1, xmm3
    vmovss  [rbp+180h+var_1B4], xmm6
    vmulss  xmm0, xmm7, xmm2
    vaddss  xmm4, xmm0, xmm4
    vmovss  [rbp+180h+var_1B0], xmm4
    vmovss  xmm1, dword ptr [rdi+16Ch]
    vxorps  xmm3, xmm1, xmm14
    vmulss  xmm0, xmm8, xmm3
    vaddss  xmm2, xmm0, xmm5
    vmovss  [rbp+180h+var_1B8], xmm2
    vmulss  xmm1, xmm9, xmm3
    vaddss  xmm0, xmm1, xmm6
    vmovss  [rbp+180h+var_1B4], xmm0
    vmulss  xmm2, xmm10, xmm3
    vaddss  xmm1, xmm2, xmm4
    vmovss  [rbp+180h+var_1B0], xmm1
    vmovss  dword ptr [rdi+1EF0h], xmm11
    vmovss  xmm0, [rbp+180h+var_1CC]
    vmovss  dword ptr [rdi+1EF4h], xmm0
    vmovss  xmm1, [rbp+180h+var_1C8]
    vmovss  dword ptr [rdi+1EF8h], xmm1
    vmovss  xmm0, [rbp+180h+var_1C4]
    vmovss  dword ptr [rdi+1F00h], xmm0
    vmovss  xmm1, [rbp+180h+var_1C0]
    vmovss  dword ptr [rdi+1F04h], xmm1
    vmovss  xmm0, [rbp+180h+var_1BC]
    vmovss  dword ptr [rdi+1F08h], xmm0
    vmovss  xmm1, [rbp+180h+var_1B8]
    vmovss  dword ptr [rdi+1F10h], xmm1
    vmovss  xmm0, [rbp+180h+var_1B4]
    vmovss  dword ptr [rdi+1F14h], xmm0
    vmovss  xmm1, [rbp+180h+var_1B0]
    vmovss  dword ptr [rdi+1F18h], xmm1
  }
  MatrixTranspose44Aligned((const tmat44_t<vec4_t> *)_RDI, &_RDI->input.sceneConstants.depthHackViewMatrix.m);
  _RDI->input.sceneConstants.eyeOffset.v[0] = _RDI->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  _RDI->input.sceneConstants.eyeOffset.v[1] = _RDI->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  _RDI->input.sceneConstants.eyeOffset.v[2] = _RDI->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  _RDI->input.sceneConstants.eyeOffset.v[3] = 1.0;
  __asm { vmovss  xmm0, dword ptr [rdi+1F60h]; f }
  LODWORD(_RDI->input.sceneConstants.eyeOffsetHighPrecision.v[0]) = PreciseCoordFromFloat(*(const float *)&_XMM0, 0xCu);
  __asm { vmovss  xmm0, dword ptr [rdi+1F64h]; f }
  LODWORD(_RDI->input.sceneConstants.eyeOffsetHighPrecision.v[1]) = PreciseCoordFromFloat(*(const float *)&_XMM0, 0xCu);
  __asm { vmovss  xmm0, dword ptr [rdi+1F68h]; f }
  LODWORD(_RDI->input.sceneConstants.eyeOffsetHighPrecision.v[2]) = PreciseCoordFromFloat(*(const float *)&_XMM0, 0xCu);
  __asm { vmovss  xmm0, dword ptr [rdi+1F6Ch]; f }
  LODWORD(_RDI->input.sceneConstants.eyeOffsetHighPrecision.v[3]) = PreciseCoordFromFloat(*(const float *)&_XMM0, 0xCu);
  __asm { vmovss  xmm0, dword ptr [rsi+7F4h] }
  _RDI->input.sceneConstants.skyBlendConsts.v[0] = _RSI->skyBlendAmount;
  __asm { vmovss  dword ptr [rdi+2244h], xmm0 }
  *(_QWORD *)&_RDI->input.sceneConstants.skyBlendConsts.xyz.z = 0i64;
  AnglesToAxis(&_RSI->stageInfo.activeStage.skyRotationAngles, &axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+180h+axis]
    vmovss  xmm2, dword ptr [rbp+180h+axis+8]
    vmovss  xmm1, dword ptr [rbp+180h+axis+4]
    vmovss  dword ptr [rdi+2250h], xmm0
    vmovss  dword ptr [rdi+2254h], xmm1
    vmovss  dword ptr [rdi+2258h], xmm2
  }
  _RDI->input.sceneConstants.skyRotationMatrixInverseR0.v[3] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+180h+axis+0Ch]
    vmovss  xmm1, dword ptr [rbp+180h+axis+10h]
    vmovss  xmm3, dword ptr [rbp+180h+axis+14h]
    vmovss  dword ptr [rdi+2260h], xmm0
    vmovss  dword ptr [rdi+2264h], xmm1
    vmovss  dword ptr [rdi+2268h], xmm3
  }
  _RDI->input.sceneConstants.skyRotationMatrixInverseR1.v[3] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+180h+axis+18h]
    vmovss  xmm2, dword ptr [rbp+180h+axis+20h]
    vmovss  xmm1, dword ptr [rbp+180h+axis+1Ch]
    vmovss  dword ptr [rdi+2270h], xmm0
    vmovss  dword ptr [rdi+2274h], xmm1
    vmovss  dword ptr [rdi+2278h], xmm2
  }
  _RDI->input.sceneConstants.skyRotationMatrixInverseR2.v[3] = 0.0;
  R_SetupScopeEffect(frontEndDataOut, _RDI);
  __asm
  {
    vmovaps xmm11, [rsp+280h+var_98+8]
    vmovaps xmm10, xmmword ptr [rsp+280h+var_88+8]
    vmovaps xmm7, xmmword ptr [rsp+280h+var_58+8]
  }
  v478.m256i_i16[0] = 0;
  v478.m256i_i32[2] = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+280h+var_230+18h], xmm0
    vmovups ymm1, [rsp+280h+var_230+8]
    vmovups ymmword ptr [rdi+37B0h], ymm1
  }
  _R11 = &v533;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
}

/*
==============
R_SetupViewProjectionMatrices
==============
*/
void R_SetupViewProjectionMatrices(GfxViewParms *viewParms)
{
  bool v3; 
  tmat44_t<vec4_t> out; 
  GfxMatrix in; 
  tmat44_t<vec4_t> dst; 

  _RDI = viewParms;
  v3 = &viewParms->subpixelOffset == NULL;
  _RCX = &viewParms->subpixelOffset;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rcx]
  }
  if ( !v3 )
    goto LABEL_4;
  __asm { vucomiss xmm0, dword ptr [rcx+4] }
  if ( v3 )
  {
    _RSI = &_RDI->projectionMatrix.m;
  }
  else
  {
LABEL_4:
    _RSI = &_RDI->projectionMatrix.m;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups ymm1, ymmword ptr [rsi+20h]
      vmovups ymmword ptr [rsp+0F8h+in.m], ymm0
      vmovups ymmword ptr [rsp+0F8h+in.m+20h], ymm1
    }
    R_ApplySubPixelOffset(_RCX, &in, &_RDI->projectionMatrix);
  }
  MatrixMultiply44Aligned(&_RDI->viewMatrix.m, _RSI, &_RDI->viewProjectionMatrix.m);
  MatrixInverse44Aligned(&_RDI->viewProjectionMatrix.m, &dst);
  MatrixIdentity44(&out);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+100h]
    vmovss  xmm1, dword ptr [rdi+104h]
    vmovss  dword ptr [rsp+0F8h+out+30h], xmm0
    vmovss  xmm0, dword ptr [rdi+108h]
    vmovss  dword ptr [rsp+0F8h+out+38h], xmm0
    vmovss  dword ptr [rsp+0F8h+out+34h], xmm1
  }
  MatrixMultiply44Aligned(&dst, &out, &_RDI->inverseViewProjectionMatrix.m);
}

/*
==============
R_SetupViewportFeatures
==============
*/
void R_SetupViewportFeatures(const GfxViewportFeatures *viewportFeaturesRequest, GfxViewportFeatures *features)
{
  GfxViewportFeatures *v4; 
  int v5; 
  unsigned int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  const dvar_t *v23; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rdx], ymm0
    vmovups xmm1, xmmword ptr [rcx+20h]
    vmovups xmmword ptr [rdx+20h], xmm1
  }
  v4 = features;
  v5 = -1;
  v6 = *((_DWORD *)features + 11) & ((8 * sm_sunAllow->current.enabled) | 0xFFFFFFF7);
  *((_DWORD *)features + 11) = v6;
  if ( (v6 & 8) == 0 || !sm_sunEnable->current.enabled || (v7 = -1, !rg.useSunShadow) )
    v7 = -5;
  v8 = v6 & v7;
  *((_DWORD *)v4 + 11) = v8;
  if ( !sm_sunViewmodelHack->current.enabled || (v9 = -1, (v8 & 8) == 0) )
    v9 = -65;
  v10 = v9 & v8;
  *((_DWORD *)v4 + 11) = v10;
  v11 = v10 & (sm_spotAllow->current.color[0] | 0xFFFFFFFE);
  *((_DWORD *)v4 + 11) = v11;
  if ( (v11 & 1) == 0 || !sm_spotEnable->current.enabled )
    v5 = -3;
  v12 = v5 & v11;
  *((_DWORD *)v4 + 11) = v12;
  LOBYTE(v13) = rg.sunShadowOpaqueCascadeLimit;
  if ( !rg.sunShadowOpaqueCascadeLimit )
    v13 = v12 >> 4;
  v14 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(16 * v13)) & 0x30;
  *((_DWORD *)v4 + 11) = v14;
  v15 = v14 & 0xFFFEFFFF | (rg.useCachedSpotShadows != 0 ? 0x10000 : 0);
  *((_DWORD *)v4 + 11) = v15;
  v16 = v15 & 0xFFFDFFFF | (rg.useCachedSunShadow != 0 ? 0x20000 : 0);
  *((_DWORD *)v4 + 11) = v16;
  if ( (v16 & 8) != 0 && rg.useTransSunShadow )
    v17 = 0x2000;
  else
    v17 = 0;
  v18 = v17 | v16 & 0xFFFFDFFF;
  *((_DWORD *)v4 + 11) = v18;
  v19 = ((r_drawPassTrans->current.color[0] << 11) | 0xFFFFF7FF) & v18;
  *((_DWORD *)v4 + 11) = v19;
  v20 = ((r_drawPassEmissive->current.color[0] << 12) | 0xFFFFEFFF) & v19;
  *((_DWORD *)v4 + 11) = v20;
  v21 = ((unsigned __int16)v20 ^ (unsigned __int16)(LOWORD(rg.ssaoMode) << 14)) & 0x4000 ^ v20;
  *((_DWORD *)v4 + 11) = v21;
  v22 = ((unsigned __int16)v21 ^ (unsigned __int16)(LOWORD(rg.ssaoMode) << 14)) & 0x8000 ^ v21;
  *((_DWORD *)v4 + 11) = v22;
  *((_DWORD *)v4 + 11) = v22 ^ (v22 ^ (rg.halfResEmissive << 18)) & 0x40000;
  v4->m_shadowMapTileResolution = rg.shadowMapResolutionIndex;
  v23 = DVARBOOL_r_casEnabled;
  if ( !DVARBOOL_r_casEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_casEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  *((_DWORD *)v4 + 11) ^= (*((_DWORD *)v4 + 11) ^ (v23->current.color[0] << 19)) & 0x80000;
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
  __int64 v9; 
  __int64 v10; 
  const unsigned __int64 *mark; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  char v29[672]; 

  v3 = drawListID;
  v5 = &viewInfo->drawList[drawListID];
  R_EmitDrawSurfList(scene.drawSurfs[drawSurfListType], scene.drawSurfCount[drawSurfListType], v5);
  R_DrawListIter_Init(v5, &frontEndDataOut->drawListIter[v3]);
  v6 = frontEndDataOut;
  _RAX = v29;
  _RCX = &frontEndDataOut->drawListIter[v3];
  v9 = 5i64;
  v10 = 5i64;
  do
  {
    _RAX += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups xmm1, xmmword ptr [rcx+70h]
    }
    _RCX = (GfxDrawListIter *)((char *)_RCX + 128);
    __asm
    {
      vmovups ymmword ptr [rax-80h], ymm0
      vmovups ymm0, ymmword ptr [rcx-60h]
      vmovups ymmword ptr [rax-60h], ymm0
      vmovups ymm0, ymmword ptr [rcx-40h]
      vmovups ymmword ptr [rax-40h], ymm0
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v10;
  }
  while ( v10 );
  __asm { vmovups xmm0, xmmword ptr [rcx] }
  mark = _RCX->bspSurfIter.mark;
  __asm { vmovups xmmword ptr [rax], xmm0 }
  *((_QWORD *)_RAX + 2) = mark;
  if ( (unsigned int)v3 >= 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v3, 19) )
    __debugbreak();
  _RAX = v29;
  _R8 = (__int64)&v6->drawListIter[v3 + 65];
  do
  {
    _R8 += 128i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX += 128;
    __asm
    {
      vmovups ymmword ptr [r8-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [r8-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [r8-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [r8-20h], xmm0
      vmovups xmmword ptr [r8-10h], xmm1
    }
    --v9;
  }
  while ( v9 );
  __asm { vmovups xmm0, xmmword ptr [rax] }
  v26 = *((_QWORD *)_RAX + 2);
  __asm { vmovups xmmword ptr [r8], xmm0 }
  *(_QWORD *)(_R8 + 16) = v26;
  if ( (_DWORD)v3 != 2 )
  {
    if ( (unsigned int)v3 >= 0x13 )
    {
      LODWORD(v28) = 19;
      LODWORD(v27) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v27, v28) )
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
  __int64 v11; 
  __int64 v12; 
  const unsigned __int64 *mark; 
  __int64 v23; 
  __int64 v30; 
  __int64 v32; 
  GfxBackEndData *v33; 
  const unsigned __int64 *v41; 
  __int64 v50; 
  GfxDrawListType v51; 
  __int64 v52; 
  __int64 v53; 
  char v54[672]; 

  v5 = drawListID;
  v8 = &viewInfo->drawList[drawListID];
  R_EmitDrawSurfList(scene.drawSurfs[drawSurfListType], scene.drawSurfCount[drawSurfListType], v8);
  R_DrawListIter_Init(v8, &frontEndDataOut->drawListIter[v5]);
  v9 = frontEndDataOut;
  _RAX = v54;
  v11 = 5i64;
  v12 = 5i64;
  _RCX = &frontEndDataOut->drawListIter[v5];
  do
  {
    _RAX += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups xmm1, xmmword ptr [rcx+70h]
    }
    _RCX = (GfxDrawListIter *)((char *)_RCX + 128);
    __asm
    {
      vmovups ymmword ptr [rax-80h], ymm0
      vmovups ymm0, ymmword ptr [rcx-60h]
      vmovups ymmword ptr [rax-60h], ymm0
      vmovups ymm0, ymmword ptr [rcx-40h]
      vmovups ymmword ptr [rax-40h], ymm0
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v12;
  }
  while ( v12 );
  __asm { vmovups xmm0, xmmword ptr [rcx] }
  mark = _RCX->bspSurfIter.mark;
  __asm { vmovups xmmword ptr [rax], xmm0 }
  *((_QWORD *)_RAX + 2) = mark;
  if ( (unsigned int)v5 >= 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v5, 19) )
    __debugbreak();
  _RAX = v54;
  _RDX = (__int64)&v9->drawListIter[v5 + 65];
  v23 = 5i64;
  do
  {
    _RDX += 128i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX += 128;
    __asm
    {
      vmovups ymmword ptr [rdx-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [rdx-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [rdx-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v23;
  }
  while ( v23 );
  __asm { vmovups xmm0, xmmword ptr [rax] }
  v30 = *((_QWORD *)_RAX + 2);
  _RCX = v54;
  __asm { vmovups xmmword ptr [rdx], xmm0 }
  *(_QWORD *)(_RDX + 16) = v30;
  v32 = 5i64;
  v33 = frontEndDataOut;
  _RAX = &frontEndDataOut->drawListIter[v5];
  do
  {
    _RCX += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymmword ptr [rcx-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [rcx-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [rcx-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v32;
  }
  while ( v32 );
  __asm { vmovups xmm0, xmmword ptr [rax] }
  v41 = _RAX->bspSurfIter.mark;
  __asm { vmovups xmmword ptr [rcx], xmm0 }
  *((_QWORD *)_RCX + 2) = v41;
  _R8 = (__int64)&v33->drawListIter[R_ForwardToPrepassStencilDrawListType((GfxDrawListType)v5)];
  _RAX = v54;
  do
  {
    _R8 += 128i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX += 128;
    __asm
    {
      vmovups ymmword ptr [r8-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [r8-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [r8-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [r8-20h], xmm0
      vmovups xmmword ptr [r8-10h], xmm1
    }
    --v11;
  }
  while ( v11 );
  __asm { vmovups xmm0, xmmword ptr [rax] }
  v50 = *((_QWORD *)_RAX + 2);
  __asm { vmovups xmmword ptr [r8], xmm0 }
  *(_QWORD *)(_R8 + 16) = v50;
  if ( (unsigned int)v5 >= 0x13 )
  {
    LODWORD(v53) = 19;
    LODWORD(v52) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v52, v53) )
      __debugbreak();
  }
  R_AddDrawCall(viewInfo, NULL, (GfxDrawListType)(v5 + 65), 0x5Du);
  if ( postOpaquePrepass )
  {
    v51 = R_ForwardToPrepassStencilDrawListType((GfxDrawListType)v5);
    R_AddDrawCall(viewInfo, NULL, v51, 0x5Du);
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
  __int64 v16; 
  __int64 v28; 

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
  _RCX = &frontEndDataOut->drawListIter[76];
  _RAX = &frontEndDataOut->drawListIter[10];
  do
  {
    _RCX = (GfxDrawListIter *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v4;
  }
  while ( v4 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  v16 = 5i64;
  _RCX->bspSurfIter.mark = _RAX->bspSurfIter.mark;
  _RCX = &frontEndDataOut->drawListIter[75];
  _RAX = &frontEndDataOut->drawListIter[11];
  do
  {
    _RCX = (GfxDrawListIter *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v16;
  }
  while ( v16 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  _RCX->bspSurfIter.mark = _RAX->bspSurfIter.mark;
  v28 = 5i64;
  _RDX = &frontEndDataOut->drawListIter[77];
  _RAX = &frontEndDataOut->drawListIter[12];
  do
  {
    _RDX = (GfxDrawListIter *)((char *)_RDX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rdx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rdx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rdx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rdx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rdx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rdx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v28;
  }
  while ( v28 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rdx], xmm0
  }
  _RDX->bspSurfIter.mark = _RAX->bspSurfIter.mark;
  _RCX = &frontEndDataOut->drawListIter[78];
  _RAX = &frontEndDataOut->drawListIter[13];
  do
  {
    _RCX = (GfxDrawListIter *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v3;
  }
  while ( v3 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
  _RCX->bspSurfIter.mark = _RAX->bspSurfIter.mark;
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_PREPASS_LIT_OPAQUE_GLASS, (unsigned __int8)v3 + 93);
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
  int v33; 
  __int64 v34; 
  GfxBackEndData *v35; 
  __int64 v37; 
  GfxDrawListIter *drawListIter; 
  const unsigned __int64 *mark; 
  __int64 v48; 
  __int64 v56; 
  GfxBackEndData *v57; 
  __int64 v59; 
  const unsigned __int64 *v67; 
  __int64 v68; 
  const unsigned __int64 *v77; 
  int i; 
  GfxBackEndData *v79; 
  __int64 v81; 
  const unsigned __int64 *v89; 
  const unsigned __int64 *v98; 
  __int64 v99; 
  __int64 v100; 
  char v101[672]; 

  v1 = 5i64;
  _RBP = viewInfo;
  R_SubmitDepthHackSurfaces(viewInfo, DRAWLIST_FIRST, DSL_CAM_DEPTH_HACK);
  R_SubmitDepthHackSurfaces(_RBP, DRAWLIST_DEPTH_HACK_TRANS, DSL_CAM_DEPTH_HACK_TRANS);
  R_SubmitDepthHackSurfaces(_RBP, DRAWLIST_DEPTH_HACK_SSS, DSL_CAM_DEPTH_HACK_SSS);
  R_SubmitEntityIDSurfaces(_RBP, DRAWLIST_HUD_OUTLINE_FIRST, DSL_CAM_PRE_DEPTH_HACK, 0, 1);
  R_SubmitEntityIDSurfaces(_RBP, DRAWLIST_PRE_DEPTH_HACK_SSS, DSL_CAM_PRE_DEPTH_HACK_SSS, 0, 1);
  R_SubmitEntityIDSurfaces(_RBP, DRAWLIST_PRE_OPAQUE, DSL_CAM_PRE_OPAQUE, 0, 1);
  R_SubmitEntityIDSurfaces(_RBP, DRAWLIST_PRE_SSS, DSL_CAM_PRE_SSS, 0, 1);
  R_SubmitEntityIDSurfaces(_RBP, DRAWLIST_EID_ONLY, DSL_CAM_EID_ONLY, 1, 0);
  R_EmitDrawSurfList(scene.drawSurfs[0], scene.drawSurfCount[0], &_RBP->drawList[3]);
  R_ST_EmitDrawSurfs(_RBP);
  R_DrawListIter_Init(&_RBP->drawList[3], &frontEndDataOut->drawListIter[3]);
  if ( (*((_BYTE *)&_RBP->input + 7920) & 2) != 0 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+3F50h]
      vmovups ymmword ptr [rbp+3FE8h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3F70h]
      vmovups ymmword ptr [rbp+4008h], ymm1
      vmovups ymm0, ymmword ptr [rbp+3F90h]
      vmovups ymmword ptr [rbp+4028h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3FB0h]
      vmovups ymmword ptr [rbp+4048h], ymm1
      vmovups xmm0, xmmword ptr [rbp+3FD0h]
      vmovups xmmword ptr [rbp+4068h], xmm0
      vmovsd  xmm1, qword ptr [rbp+3FE0h]
      vmovsd  qword ptr [rbp+4078h], xmm1
      vmovups ymm0, ymmword ptr [rbp+3F50h]
      vmovups ymmword ptr [rbp+4080h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3F70h]
      vmovups ymmword ptr [rbp+40A0h], ymm1
      vmovups ymm0, ymmword ptr [rbp+3F90h]
      vmovups ymmword ptr [rbp+40C0h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3FB0h]
      vmovups ymmword ptr [rbp+40E0h], ymm1
      vmovups xmm0, xmmword ptr [rbp+3FD0h]
      vmovups xmmword ptr [rbp+4100h], xmm0
      vmovsd  xmm1, qword ptr [rbp+3FE0h]
      vmovsd  qword ptr [rbp+4110h], xmm1
      vmovups ymm0, ymmword ptr [rbp+3F50h]
      vmovups ymmword ptr [rbp+4118h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3F70h]
      vmovups ymmword ptr [rbp+4138h], ymm1
      vmovups ymm0, ymmword ptr [rbp+3F90h]
      vmovups ymmword ptr [rbp+4158h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3FB0h]
      vmovups ymmword ptr [rbp+4178h], ymm1
      vmovups xmm0, xmmword ptr [rbp+3FD0h]
      vmovups xmmword ptr [rbp+4198h], xmm0
      vmovsd  xmm1, qword ptr [rbp+3FE0h]
      vmovsd  qword ptr [rbp+41A8h], xmm1
      vmovups ymm0, ymmword ptr [rbp+3F50h]
      vmovups ymmword ptr [rbp+41B0h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3F70h]
      vmovups ymmword ptr [rbp+41D0h], ymm1
      vmovups ymm0, ymmword ptr [rbp+3F90h]
      vmovups ymmword ptr [rbp+41F0h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3FB0h]
      vmovups ymmword ptr [rbp+4210h], ymm1
      vmovups xmm0, xmmword ptr [rbp+3FD0h]
      vmovups xmmword ptr [rbp+4230h], xmm0
      vmovsd  xmm1, qword ptr [rbp+3FE0h]
      vmovsd  qword ptr [rbp+4240h], xmm1
      vmovups ymm0, ymmword ptr [rbp+3F50h]
      vmovups ymmword ptr [rbp+4248h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3F70h]
      vmovups ymmword ptr [rbp+4268h], ymm1
      vmovups ymm0, ymmword ptr [rbp+3F90h]
      vmovups ymmword ptr [rbp+4288h], ymm0
      vmovups ymm1, ymmword ptr [rbp+3FB0h]
      vmovups ymmword ptr [rbp+42A8h], ymm1
      vmovups xmm0, xmmword ptr [rbp+3FD0h]
      vmovups xmmword ptr [rbp+42C8h], xmm0
      vmovsd  xmm1, qword ptr [rbp+3FE0h]
      vmovsd  qword ptr [rbp+42D8h], xmm1
    }
    R_SplitIterGroup(&frontEndDataOut->drawListIter[3], 6u);
    v33 = 3;
    v34 = 3i64;
    do
    {
      v35 = frontEndDataOut;
      _RCX = v101;
      v37 = 5i64;
      _RAX = &frontEndDataOut->drawListIter[v34];
      do
      {
        _RCX += 128;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v37;
      }
      while ( v37 );
      drawListIter = v35->drawListIter;
      __asm { vmovups xmm0, xmmword ptr [rax] }
      mark = _RAX->bspSurfIter.mark;
      __asm { vmovups xmmword ptr [rcx], xmm0 }
      *((_QWORD *)_RCX + 2) = mark;
      if ( (unsigned int)v33 >= 0x13 )
      {
        LODWORD(v100) = 19;
        LODWORD(v99) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_drawlisttype.h", 213, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( DRAWLIST_PREPASS_COUNT )", "drawListType doesn't index DRAWLIST_PREPASS_COUNT\n\t%i not in [0, %i)", v99, v100) )
          __debugbreak();
      }
      _RDX = (__int64)&drawListIter[v34 + 65];
      v48 = 5i64;
      _RAX = v101;
      do
      {
        _RDX += 128i64;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX += 128;
        __asm
        {
          vmovups ymmword ptr [rdx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rdx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rdx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rdx-20h], xmm0
          vmovups xmmword ptr [rdx-10h], xmm1
        }
        --v48;
      }
      while ( v48 );
      __asm { vmovups xmm0, xmmword ptr [rax] }
      v56 = *((_QWORD *)_RAX + 2);
      ++v33;
      ++v34;
      __asm { vmovups xmmword ptr [rdx], xmm0 }
      *(_QWORD *)(_RDX + 16) = v56;
    }
    while ( v33 < 9 );
  }
  else
  {
    v57 = frontEndDataOut;
    _RCX = v101;
    v59 = 5i64;
    _RAX = &frontEndDataOut->drawListIter[3];
    do
    {
      _RCX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v59;
    }
    while ( v59 );
    __asm { vmovups xmm0, xmmword ptr [rax] }
    v67 = _RAX->bspSurfIter.mark;
    v68 = 5i64;
    __asm { vmovups xmmword ptr [rcx], xmm0 }
    *((_QWORD *)_RCX + 2) = v67;
    _RCX = &v57->drawListIter[68];
    _RAX = v101;
    do
    {
      _RCX = (GfxDrawListIter *)((char *)_RCX + 128);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX += 128;
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v68;
    }
    while ( v68 );
    __asm { vmovups xmm0, xmmword ptr [rax] }
    v77 = (const unsigned __int64 *)*((_QWORD *)_RAX + 2);
    __asm { vmovups xmmword ptr [rcx], xmm0 }
    _RCX->bspSurfIter.mark = v77;
  }
  R_AddDrawCall(_RBP, NULL, DRAWLIST_PREPASS_LIT_OPAQUE, 0x5Du);
  if ( (*((_BYTE *)&_RBP->input + 7920) & 2) != 0 )
  {
    for ( i = 69; i < 74; ++i )
      R_AddDrawCall(_RBP, NULL, (GfxDrawListType)i, 0x5Du);
  }
  R_EmitDrawSurfList(scene.drawSurfs[1], scene.drawSurfCount[1], &_RBP->drawList[9]);
  R_DrawListIter_Init(&_RBP->drawList[9], &frontEndDataOut->drawListIter[9]);
  v79 = frontEndDataOut;
  _RCX = v101;
  v81 = 5i64;
  _RAX = &frontEndDataOut->drawListIter[9];
  do
  {
    _RCX += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX = (GfxDrawListIter *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymmword ptr [rcx-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [rcx-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [rcx-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v81;
  }
  while ( v81 );
  __asm { vmovups xmm0, xmmword ptr [rax] }
  v89 = _RAX->bspSurfIter.mark;
  __asm { vmovups xmmword ptr [rcx], xmm0 }
  *((_QWORD *)_RCX + 2) = v89;
  _RCX = &v79->drawListIter[74];
  _RAX = v101;
  do
  {
    _RCX = (GfxDrawListIter *)((char *)_RCX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX += 128;
    __asm
    {
      vmovups ymmword ptr [rcx-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [rcx-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [rcx-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v1;
  }
  while ( v1 );
  __asm { vmovups xmm0, xmmword ptr [rax] }
  v98 = (const unsigned __int64 *)*((_QWORD *)_RAX + 2);
  __asm { vmovups xmmword ptr [rcx], xmm0 }
  _RCX->bspSurfIter.mark = v98;
  R_AddDrawCall(_RBP, NULL, (GfxDrawListType)((unsigned __int8)v1 + 74), (unsigned __int8)v1 + 93);
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
  __int64 v6; 

  _RAX = &scene.gfxCorpseFadeActive;
  v6 = 5i64;
  do
  {
    _RAX = (ntl::bitset<5120,0,unsigned __int64> *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    corpseFadeActive = (const ntl::bitset<5120,0,unsigned __int64> *)((char *)corpseFadeActive + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
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
  unsigned int v8; 
  GfxBackEndData *v9; 
  GfxBackEndData *v10; 
  int v11; 
  int v12; 
  bool v15; 
  bool v16; 
  GfxBackEndData *v20; 
  GfxBackEndData *v24; 

  ActivePrimarySunLight = R_GetActivePrimarySunLight(stageInfo);
  frontEndDataOut->activePrimarySunLight = ActivePrimarySunLight;
  _RDI = &primaryLights[ActivePrimarySunLight];
  if ( ActivePrimarySunLight && _RDI->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10053, ASSERT_TYPE_ASSERT, "(activePrimarySunLight == 0 || primaryLight->type == 1)", (const char *)&queryFormat, "activePrimarySunLight == PRIMARY_LIGHT_NONE || primaryLight->type == GFX_LIGHT_TYPE_DIR") )
    __debugbreak();
  *((_DWORD *)features + 11) &= (8 * stageInfo->stagesHaveSunPrimaryLight) | 0xFFFFFFF7;
  v8 = *((_DWORD *)features + 11) & ((stageInfo->stagesHaveSunPrimaryLight << 6) | 0xFFFFFFBF);
  *((_DWORD *)features + 11) = v8;
  if ( ActivePrimarySunLight )
  {
    if ( (v8 & 4) != 0 )
    {
      frontEndDataOut->sunShadow.lightDir = _RDI->dir;
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
    __asm { vmovss  xmm0, cs:__real@3c23d70a; tolerance }
    frontEndDataOut->hasApproxSunDirChanged = v12;
    if ( R_LightTweak_AngleChanged(*(const float *)&_XMM0) )
      frontEndDataOut->hasSunDirChanged = 1;
    __asm { vmovss  xmm0, cs:__real@3c23d70a; tolerance }
    if ( R_LightTweak_AngleChanged(*(const float *)&_XMM0) )
      frontEndDataOut->hasApproxSunDirChanged = 1;
    v15 = R_LightTweak_Enabled();
    v16 = !v15;
    if ( !v15 )
    {
      if ( rg.useSunDirOverride )
      {
        _RSI = _RDI->dir.v;
        if ( rg.useSunDirLerp )
        {
          R_LerpSunDir(&rg.sunDirOverride, &rg.sunDirOverrideTarget, rg.sunDirLerpBeginTime, rg.sunDirLerpEndTime, rg.sunDirLerpAccelTime, rg.sunDirLerpDecelTime, scene.def.time, &_RDI->dir);
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride; r_globals_t rg
            vmovss  dword ptr [rsi], xmm0
            vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride+4; r_globals_t rg
            vmovss  dword ptr [rsi+4], xmm1
            vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunDirOverride+8; r_globals_t rg
            vmovss  dword ptr [rsi+8], xmm0
          }
        }
        v20 = frontEndDataOut;
        frontEndDataOut->sunShadow.lightDir.v[0] = *_RSI;
        v20->sunShadow.lightDir.v[1] = _RDI->dir.v[1];
        v20->sunShadow.lightDir.v[2] = _RDI->dir.v[2];
      }
      if ( rg.useSunColorLinearSrgbOverride )
      {
        __asm
        {
          vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride; r_globals_t rg
          vmovss  dword ptr [rdi+14h], xmm0
          vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride+4; r_globals_t rg
          vmovss  dword ptr [rdi+18h], xmm1
          vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride+8; r_globals_t rg
          vmovss  dword ptr [rdi+1Ch], xmm0
        }
      }
      v16 = !rg.useSunIntensityOverride;
      if ( rg.useSunIntensityOverride )
      {
        __asm
        {
          vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.sunIntensityOverride; r_globals_t rg
          vmovss  dword ptr [rdi+10h], xmm0
        }
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rdi+14h]
    }
    if ( v16 )
    {
      __asm { vucomiss xmm0, dword ptr [rdi+18h] }
      if ( v16 )
      {
        __asm { vucomiss xmm0, dword ptr [rdi+1Ch] }
        if ( v16 )
          goto LABEL_34;
      }
    }
    __asm { vucomiss xmm0, dword ptr [rdi+10h] }
    if ( v16 )
    {
LABEL_34:
      frontEndDataOut->activePrimarySunLight = 0;
      *((_DWORD *)features + 11) &= ~4u;
      v24 = frontEndDataOut;
      *(_QWORD *)frontEndDataOut->sunShadow.lightDir.v = 0i64;
      v24->sunShadow.lightDir.v[2] = 1.0;
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

void __fastcall R_UpdateLodParmsInternal(const RefdefView *view, GfxLodParms *lodParms, double lodOverride, double dynResScale)
{
  int integer; 
  int v23; 
  int v24; 
  char v52; 
  char v53; 
  int v81; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = lodParms;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RSI = view;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm12, xmm3
    vmovaps xmm9, xmm2
  }
  integer = r_renderMemMode->current.integer;
  if ( s_lastRenderMemMode != integer )
  {
    s_lastRenderMemMode = r_renderMemMode->current.integer;
    if ( integer )
    {
      switch ( integer )
      {
        case 1:
          __asm { vmovsd  xmm7, cs:__real@3fe1318ef5664511 }
          break;
        case 2:
          __asm { vmovsd  xmm7, cs:__real@3fe92c3f4d626302 }
          break;
        case 3:
          __asm { vmovsd  xmm7, cs:__real@3fe56ca68de7d7f8 }
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
      __asm { vmovsd  xmm7, cs:__real@3fde0298ea8c7b05 }
    }
    if ( integer )
    {
      v23 = integer - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( !v24 || v24 == 1 )
        {
          __asm { vmovss  xmm6, cs:__real@3f6e147b }
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11458, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown LODScalePlatform") )
            __debugbreak();
          __asm { vxorps  xmm6, xmm6, xmm6 }
        }
      }
      else
      {
        __asm { vmovaps xmm6, xmm8 }
      }
    }
    else
    {
      __asm { vmovss  xmm6, cs:__real@3fca3d71 }
    }
    __asm { vmovsd  xmm0, cs:__real@3fe462e13057f5b3; X }
    *(double *)&_XMM0 = atan_0(*(double *)&_XMM0);
    *(double *)&_XMM0 = sin_0(*(double *)&_XMM0);
    _RAX = r_lodScale;
    __asm
    {
      vdivsd  xmm1, xmm0, xmm7
      vcvtsd2ss xmm2, xmm1, xmm1
      vmulss  xmm6, xmm2, xmm6
    }
    if ( !r_lodScale )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 10167, ASSERT_TYPE_ASSERT, "(r_lodScale)", (const char *)&queryFormat, "r_lodScale") )
        __debugbreak();
      _RAX = r_lodScale;
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rax+5Ch]; max
      vmovss  xmm1, dword ptr [rax+58h]; min
      vmovaps xmm0, xmm6; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0; value }
    Dvar_SetFloat_Internal(r_lodScale, *(float *)&_XMM1);
  }
  if ( r_lockPvs->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:lockPvsViewParms.camera.origin
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr cs:lockPvsViewParms.camera.origin+4
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr cs:lockPvsViewParms.camera.origin+8
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  xmm1, dword ptr cs:lockPvsViewParms.camera.___u3
      vmulss  xmm2, xmm1, cs:__real@40079857
    }
  }
  else
  {
    RefdefView_GetOrg(_RSI, &_RDI->origin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmulss  xmm2, xmm0, cs:__real@40079857
    }
  }
  __asm
  {
    vmulss  xmm11, xmm2, xmm9
    vmovaps xmm10, xmm8
  }
  *(double *)&_XMM0 = R_UGB_GetPhysicalMemoryUsageRatio();
  _RBX = DVARFLT_r_ugbUsageRatioStartBiasLodDistanceThreshold;
  __asm { vmovaps xmm7, xmm0 }
  if ( !DVARFLT_r_ugbUsageRatioStartBiasLodDistanceThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ugbUsageRatioStartBiasLodDistanceThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DVARFLT_r_ugbUsageRatioMaxDistanceScaler;
  if ( !DVARFLT_r_ugbUsageRatioMaxDistanceScaler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ugbUsageRatioMaxDistanceScaler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  _RBX = DVARFLT_r_ugbDistanceScalerAmortizer;
  if ( !DVARFLT_r_ugbDistanceScalerAmortizer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ugbDistanceScalerAmortizer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vcomiss xmm7, xmm6
    vmovss  xmm4, dword ptr [rbx+28h]
  }
  if ( !(v52 | v53) )
  {
    __asm
    {
      vsubss  xmm0, xmm8, xmm6
      vsubss  xmm1, xmm7, xmm6
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm3, xmm2, xmm9
      vsubss  xmm0, xmm8, xmm2
      vaddss  xmm10, xmm3, xmm0
    }
  }
  __asm
  {
    vsubss  xmm0, xmm8, xmm4
    vmulss  xmm2, xmm0, dword ptr [rdi+4Ch]
    vmulss  xmm1, xmm4, xmm10
    vaddss  xmm3, xmm2, xmm1
    vmovss  dword ptr [rdi+4Ch], xmm3
    vdivss  xmm6, xmm11, xmm3
  }
  _EAX = CL_IsRenderingSplitScreen();
  _R11 = &v96;
  _ECX = 0;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@40000000
    vaddss  xmm3, xmm12, dword ptr [rax+28h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vblendvps xmm0, xmm1, xmm8, xmm2
    vmulss  xmm4, xmm0, xmm6
  }
  v81 = r_lodOutStaticRamp->current.color[0];
  _RAX = r_lodBias;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmulss  xmm0, xmm4, xmm3
    vmovss  xmm2, dword ptr [rax+28h]
    vmovss  dword ptr [rdi+0Ch], xmm0
    vmovss  dword ptr [rdi+14h], xmm3
    vmovss  dword ptr [rdi+18h], xmm2
  }
  _RDI->ramp.allowLODOutStatic = v81;
  __asm
  {
    vmulss  xmm1, xmm4, xmm2
    vmovss  dword ptr [rdi+10h], xmm1
    vmulss  xmm3, xmm3, dword ptr [rax+28h]
  }
  _RAX = r_st_clutterLodBias;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vaddss  xmm2, xmm0, dword ptr [rax+28h]
    vmulss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm4, xmm2
  }
  LOBYTE(v81) = r_lodOutStaticRamp->current.enabled;
  __asm { vmovss  dword ptr [rdi+20h], xmm0 }
  _RDI->clutterRamp.allowLODOutStatic = v81;
  __asm
  {
    vmovss  dword ptr [rdi+24h], xmm1
    vmovss  dword ptr [rdi+28h], xmm3
    vmovss  dword ptr [rdi+2Ch], xmm2
    vmulss  xmm1, xmm4, dword ptr [rdi+4Ch]
    vmovss  dword ptr [rdi+48h], xmm1
    vmovss  dword ptr [rdi+40h], xmm4
    vminss  xmm0, xmm4, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rdi+44h], xmm0
  }
  LODWORD(_RDI->skinningBias) = r_skinnedLodBias->current.integer;
  LODWORD(_RDI->subdivBias) = r_skinnedSubdivLodBias->current.integer;
  LODWORD(_RDI->sceneSurfsBias) = r_sceneSurfsLodBias->current.integer;
  _RDI->valid = 1;
}

/*
==============
R_UpdatePlayerFadeEntityData
==============
*/
void R_UpdatePlayerFadeEntityData(const GfxPlayerFadeEntityData *playerFadeData)
{
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr cs:?scene@@3UGfxScene@@A.gfxPlayerFadeData.entNum, xmm0; GfxScene scene
  }
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
  bool v10; 
  bool v11; 
  bool v19; 
  bool v27; 
  bool v35; 
  const GfxBackEndData *data; 
  const dvar_t *v58; 
  const dvar_t *v60; 
  bool v66; 
  float v95; 
  GfxImage *whiteImage; 
  const dvar_t *v106; 
  const dvar_t *v107; 
  const dvar_t *v108; 
  float *imageKey; 
  float *imageKeya; 
  double v117; 
  double v118; 
  float exposure[4]; 
  char v121; 
  void *retaddr; 
  float sceneAmbientAvgKiloNits; 
  GfxColorimetry FramebufferColorimetry; 
  float v125; 
  float sceneAvgKiloNits; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RDI = sceneParms;
  __asm { vmovaps xmmword ptr [rax-58h], xmm7 }
  _RBX = viewInfo;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0D8h+var_88], xmm10
  }
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3774, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  v10 = _RBX->input.data == NULL;
  if ( !_RBX->input.data )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3775, ASSERT_TYPE_ASSERT, "(viewInfo->input.data)", (const char *)&queryFormat, "viewInfo->input.data");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+381Ch]
    vmovss  xmm6, cs:__real@37d1b717
    vmovss  xmm9, cs:__real@38d1b717
    vaddss  xmm0, xmm1, xmm9
    vmaxss  xmm2, xmm0, dword ptr [rbx+3824h]
    vsubss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm1, xmm6
    vcomiss xmm1, xmm0
    vmovss  dword ptr [rbx+3824h], xmm2
  }
  if ( !v10 )
  {
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3781, ASSERT_TYPE_ASSERT, "(viewInfo->tonemap.darkEv + kBoundaryGap <= viewInfo->tonemap.lightEv - kBoundaryGap)", (const char *)&queryFormat, "viewInfo->tonemap.darkEv + kBoundaryGap <= viewInfo->tonemap.lightEv - kBoundaryGap");
    v10 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3824h]
    vmovss  xmm1, dword ptr [rbx+381Ch]
    vmovss  xmm10, dword ptr [rbx+3820h]
    vsubss  xmm7, xmm0, xmm6
    vaddss  xmm8, xmm1, xmm6
    vcomiss xmm8, xmm7
  }
  if ( !v10 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm0
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+0D8h+imageKey], xmm1
    }
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&imageKey, v117);
    v10 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+3828h]
    vmaxss  xmm0, xmm10, xmm8
    vminss  xmm1, xmm0, xmm7
    vaddss  xmm0, xmm3, xmm9
    vmaxss  xmm2, xmm0, dword ptr [rbx+3830h]
    vmovss  dword ptr [rbx+3820h], xmm1
    vsubss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm3, xmm6
    vcomiss xmm1, xmm0
    vmovss  dword ptr [rbx+3830h], xmm2
  }
  if ( !v10 )
  {
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3785, ASSERT_TYPE_ASSERT, "(viewInfo->tonemap.darkExposureAdjust + kBoundaryGap <= viewInfo->tonemap.lightExposureAdjust - kBoundaryGap)", (const char *)&queryFormat, "viewInfo->tonemap.darkExposureAdjust + kBoundaryGap <= viewInfo->tonemap.lightExposureAdjust - kBoundaryGap");
    v10 = !v35;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3830h]
    vmovss  xmm1, dword ptr [rbx+3828h]
    vmovss  xmm8, dword ptr [rbx+382Ch]
    vsubss  xmm7, xmm0, xmm6
    vaddss  xmm6, xmm1, xmm6
    vcomiss xmm6, xmm7
  }
  if ( !v10 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0D8h+var_A8], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+0D8h+imageKey], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(double *)&imageKeya, v118) )
      __debugbreak();
  }
  data = _RBX->input.data;
  __asm
  {
    vmaxss  xmm0, xmm8, xmm6
    vminss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rbx+382Ch], xmm1
  }
  R_Tonemap_UpdateRadiometricScale(data, _RBX);
  *(double *)&_XMM0 = R_Tonemap_UpdateExposure(_RBX);
  __asm
  {
    vmovss  dword ptr [rbx+3858h], xmm0
    vmovss  cs:?rg@@3Ur_globals_t@@A.tonemapStaticExposureLinear, xmm0; r_globals_t rg
    vmovaps xmm6, xmm0
  }
  R_Tonemap_GetExposureInfo(_RBX->input.data, _RBX, exposure, &sceneAvgKiloNits, &sceneAmbientAvgKiloNits, &v125);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm8, dword ptr [rdi+30Ch]
    vmovss  xmm7, dword ptr [rdi+310h]
    vdivss  xmm0, xmm9, xmm6
    vmovss  xmm6, [rsp+0D8h+sceneAmbientAvgKiloNits]
    vmulss  xmm1, xmm6, cs:__real@447a0000
    vmovss  dword ptr [rbx+1900h], xmm0
    vaddss  xmm0, xmm1, cs:__real@387fda40; X
  }
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3fb8aa3b
    vaddss  xmm2, xmm1, cs:__real@4035c28f
    vmovss  dword ptr [rbx+1908h], xmm6
    vmovss  dword ptr [rbx+190Ch], xmm8
    vmaxss  xmm3, xmm2, xmm9
    vaddss  xmm0, xmm3, xmm7
    vmovss  dword ptr [rbx+1904h], xmm0
  }
  LODWORD(_RBX->input.sceneConstants.tonemapParms2.v[0]) = r_flareDrawThresholdEV->current.integer;
  _RBX->input.sceneConstants.tonemapParms2.v[1] = _RDI->thermalParams.lightIntensityScreen;
  v58 = DVARFLT_r_tonemapScopeFocus;
  if ( !DVARFLT_r_tonemapScopeFocus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapScopeFocus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  _RBP = 0i64;
  *(_QWORD *)&_RBX->input.sceneConstants.tonemapParms2.xyz.z = v58->current.unsignedInt;
  v60 = DVARBOOL_r_scopedNVGFade;
  if ( !DVARBOOL_r_scopedNVGFade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_scopedNVGFade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  if ( v60->current.enabled )
  {
    _RAX = _RBX->input.data;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+75A870h]
      vmulss  xmm1, xmm0, dword ptr [rbx+1914h]
      vmovss  dword ptr [rbx+1914h], xmm1
    }
  }
  FramebufferColorimetry = GFX_COLORIMETRY_BT709_BT1886;
  *(double *)&_XMM0 = R_Tonemap_GetExposureAdjust(_RBX);
  __asm
  {
    vmovss  xmm1, [rsp+0D8h+arg_8]
    vmovss  dword ptr [rbx+22A4h], xmm1
    vmovss  dword ptr [rbx+22A0h], xmm0
  }
  *(_QWORD *)&_RBX->input.sceneConstants.tonemapParms1.xyz.z = 0i64;
  FramebufferColorimetry = R_GetFramebufferColorimetry();
  *(double *)&_XMM0 = R_GetDisplayHdrUiMaxLuminance();
  __asm
  {
    vmovss  xmm1, [rsp+0D8h+arg_8]
    vmovss  dword ptr [rbx+22B0h], xmm1
    vmovss  dword ptr [rbx+22B4h], xmm0
  }
  *(_QWORD *)&_RBX->input.sceneConstants.colorimetryParams.xyz.z = 0i64;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v66 = !_RBX->tonemap.enabled;
  if ( _RBX->tonemap.enabled )
    __asm { vmovss  xmm0, dword ptr [rbx+383Ch] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vmovss  dword ptr [rbx+22C4h], xmm0 }
  _RBX->input.sceneConstants.filmGrainParams.v[0] = 0.0;
  *(_QWORD *)&_RBX->input.sceneConstants.filmGrainParams.xyz.z = 0i64;
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+2E10h]
    vcomiss xmm7, xmm6
  }
  if ( v66 )
  {
    *(_QWORD *)_RBX->input.sceneConstants.vignetteParms0.v = 0i64;
    *(_QWORD *)&_RBX->input.sceneConstants.vignetteParms0.xyz.z = 0i64;
    *(_QWORD *)_RBX->input.sceneConstants.vignetteParms1.v = 0i64;
    *(_QWORD *)&_RBX->input.sceneConstants.vignetteParms1.xyz.z = 0i64;
    *(_QWORD *)_RBX->input.sceneConstants.vignetteParms2.v = 0i64;
    *(_QWORD *)&_RBX->input.sceneConstants.vignetteParms2.xyz.z = 0i64;
    whiteImage = rgp.whiteImage;
  }
  else
  {
    _RCX = (GfxImage *)_RBX->vignette.vignetteImage;
    __asm
    {
      vmovss  xmm10, dword ptr [rbx+2E1Ch]
      vmovq   xmm0, rcx
      vmovq   xmm1, rbp
      vpcmpeqq xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f3504f3
      vblendvps xmm0, xmm9, xmm1, xmm2
      vmovss  xmm1, dword ptr [rbx+130h]
      vdivss  xmm2, xmm1, dword ptr [rbx+134h]
      vcomiss xmm2, xmm9
      vmovaps xmm3, xmm9
      vmovaps xmm8, xmm9
      vmovss  [rsp+0D8h+arg_8], xmm0
      vmovaps xmm3, xmm2
      vmovss  xmm5, dword ptr [rbx+2E14h]
      vmulss  xmm1, xmm5, xmm3
      vsubss  xmm0, xmm9, xmm5
      vmulss  xmm4, xmm0, [rsp+0D8h+arg_8]
      vaddss  xmm2, xmm1, xmm4
      vdivss  xmm0, xmm2, dword ptr [rbx+2E18h]
      vmulss  xmm0, xmm0, cs:__real@40000000
      vmovss  dword ptr [rbx+2620h], xmm0
      vmovss  dword ptr [rbx+2628h], xmm7
    }
    _RBX->input.sceneConstants.vignetteParms0.v[3] = 0.0;
    __asm
    {
      vmulss  xmm1, xmm5, xmm8
      vaddss  xmm0, xmm1, xmm4
      vdivss  xmm2, xmm0, xmm10
      vmulss  xmm3, xmm2, cs:__real@40000000
      vmovss  dword ptr [rbx+2624h], xmm3
      vmovss  xmm0, dword ptr [rbx+2E34h]
      vmovss  xmm1, dword ptr [rbx+2E28h]
      vmovss  xmm2, dword ptr [rbx+2E2Ch]
    }
    v95 = _RBX->vignette.offset.v[0];
    whiteImage = _RCX;
    __asm
    {
      vmovss  dword ptr [rbx+2638h], xmm1
      vmovss  dword ptr [rbx+2634h], xmm0
      vmovss  dword ptr [rbx+263Ch], xmm2
    }
    _RBX->input.sceneConstants.vignetteParms1.v[0] = v95;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+2E20h]
      vmaxss  xmm1, xmm0, cs:__real@3a83126f
    }
    if ( !_RCX )
      whiteImage = rgp.whiteImage;
    __asm
    {
      vdivss  xmm2, xmm9, xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+2E24h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovq   xmm0, rcx
      vmovss  dword ptr [rbx+2644h], xmm1
      vmovq   xmm1, rbp
      vmovss  dword ptr [rbx+2640h], xmm2
      vpcmpeqq xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm6, xmm2
      vmovss  dword ptr [rbx+2648h], xmm0
    }
    _RBX->input.sceneConstants.vignetteParms2.v[3] = 0.0;
  }
  if ( _RBX == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _RBX->input.codeImages[55] = whiteImage;
  v106 = DCONST_DVARVEC4_r_nvgColorGradeLift;
  if ( !DCONST_DVARVEC4_r_nvgColorGradeLift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvgColorGradeLift") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v106);
  LODWORD(_RBX->input.sceneConstants.nvgColorGradeLift.v[0]) = v106->current.integer;
  _RBX->input.sceneConstants.nvgColorGradeLift.v[1] = v106->current.vector.v[1];
  _RBX->input.sceneConstants.nvgColorGradeLift.v[2] = v106->current.vector.v[2];
  _RBX->input.sceneConstants.nvgColorGradeLift.v[3] = v106->current.vector.v[3];
  v107 = DCONST_DVARVEC4_r_nvgColorGradeGamma;
  if ( !DCONST_DVARVEC4_r_nvgColorGradeGamma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvgColorGradeGamma") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v107);
  LODWORD(_RBX->input.sceneConstants.nvgColorGradeGamma.v[0]) = v107->current.integer;
  _RBX->input.sceneConstants.nvgColorGradeGamma.v[1] = v107->current.vector.v[1];
  _RBX->input.sceneConstants.nvgColorGradeGamma.v[2] = v107->current.vector.v[2];
  _RBX->input.sceneConstants.nvgColorGradeGamma.v[3] = v107->current.vector.v[3];
  v108 = DCONST_DVARVEC4_r_nvgColorGradeGain;
  if ( !DCONST_DVARVEC4_r_nvgColorGradeGain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_nvgColorGradeGain") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v108);
  _R11 = &v121;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  LODWORD(_RBX->input.sceneConstants.nvgColorGradeGain.v[0]) = v108->current.integer;
  _RBX->input.sceneConstants.nvgColorGradeGain.v[1] = v108->current.vector.v[1];
  _RBX->input.sceneConstants.nvgColorGradeGain.v[2] = v108->current.vector.v[2];
  _RBX->input.sceneConstants.nvgColorGradeGain.v[3] = v108->current.vector.v[3];
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
  volatile signed __int32 *p_writeCount; 
  __int64 v7; 
  TempThreadPriority tempPriority; 

  v3 = sceneViewType;
  Sys_LockWrite(&frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].surfBoundsMutex);
  if ( (unsigned int)(v3 - 1) > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 3222, ASSERT_TYPE_ASSERT, "( SCENE_VIEW_SUNSHADOW_FIRST ) <= ( sceneViewType ) && ( sceneViewType ) <= ( SCENE_VIEW_CAMERA_DEPTH_HACK )", "sceneViewType not in [SCENE_VIEW_SUNSHADOW_FIRST, SCENE_VIEW_CAMERA_DEPTH_HACK]\n\t%i not in [%i, %i]", v3, 1, 32) )
    __debugbreak();
  Bounds_Expand(&frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].sunShadowAndDepthHackSurfBounds[v3], surfBounds);
  _RDI = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
  p_writeCount = &_RDI->surfBoundsMutex.writeCount;
  if ( _RDI->surfBoundsMutex.writeCount != 1 )
  {
    LODWORD(v7) = *p_writeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", v7, 1) )
      __debugbreak();
  }
  if ( _RDI->surfBoundsMutex.writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rdi+988h] }
  _RDI->surfBoundsMutex.writeThreadId = 0;
  __asm { vmovups xmmword ptr [rsp+68h+tempPriority.threadHandle], xmm0 }
  if ( (((_BYTE)_RDI - 124) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &_RDI->surfBoundsMutex.writeCount) )
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
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr cs:?scene@@3UGfxScene@@A.gfxWeaponFadeData.entNum, xmm0; GfxScene scene
  }
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
  const vec3_t *v9; 
  float v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  int v17; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  v9 = from;
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene.cpp", 11519, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v12 = v9->v[2];
  v13 = (unsigned int)to ^ LODWORD(v9->v[0]) ^ ~xConst;
  v14 = v13 ^ (unsigned int)to ^ LODWORD(v9->v[1]);
  LODWORD(to->v[0]) = v13;
  v15 = yConst ^ v14;
  LODWORD(to->v[1]) = v15;
  LODWORD(to->v[2]) = zConst ^ v15 ^ (unsigned int)to ^ LODWORD(v12);
  memset(&v16, 0, sizeof(v16));
}

