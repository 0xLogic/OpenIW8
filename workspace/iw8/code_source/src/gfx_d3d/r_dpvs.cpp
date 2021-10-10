/*
==============
R_GetDpvsView
==============
*/

const DpvsView *__fastcall R_GetDpvsView(unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  return ?R_GetDpvsView@@YAPEBUDpvsView@@II@Z(viewInfoIndex, sceneViewType);
}

/*
==============
R_AddSceneDObj
==============
*/

void __fastcall R_AddSceneDObj(unsigned int entnum, unsigned int viewIndex)
{
  ?R_AddSceneDObj@@YAXII@Z(entnum, viewIndex);
}

/*
==============
R_AddTranslucentSunShadowSurfacesFrustumOnly
==============
*/

void __fastcall R_AddTranslucentSunShadowSurfacesFrustumOnly(const GfxSunShadow *sunShadow, int viewInfoIndex, unsigned int partitionIndex)
{
  ?R_AddTranslucentSunShadowSurfacesFrustumOnly@@YAXPEBUGfxSunShadow@@HI@Z(sunShadow, viewInfoIndex, partitionIndex);
}

/*
==============
R_IsEntInScene
==============
*/

bool __fastcall R_IsEntInScene(const unsigned int entnum)
{
  return ?R_IsEntInScene@@YA_NI@Z(entnum);
}

/*
==============
R_UnfilterThingFromCells
==============
*/

void __fastcall R_UnfilterThingFromCells(unsigned int thingIndex, unsigned int *cellBits, unsigned int wordCount)
{
  ?R_UnfilterThingFromCells@@YAXIPEAII@Z(thingIndex, cellBits, wordCount);
}

/*
==============
R_IsCellVisible
==============
*/

int __fastcall R_IsCellVisible(int cellIndex, int viewInfoIndex)
{
  return ?R_IsCellVisible@@YAHHH@Z(cellIndex, viewInfoIndex);
}

/*
==============
R_AddSunShadowSurfacesFrustumOnly
==============
*/

void __fastcall R_AddSunShadowSurfacesFrustumOnly(GfxSceneViewType sceneViewType, int viewInfoIndex)
{
  ?R_AddSunShadowSurfacesFrustumOnly@@YAXW4GfxSceneViewType@@H@Z(sceneViewType, viewInfoIndex);
}

/*
==============
R_Dpvs_GetWiewOrgCell
==============
*/

int __fastcall R_Dpvs_GetWiewOrgCell()
{
  return ?R_Dpvs_GetWiewOrgCell@@YAHXZ();
}

/*
==============
R_ClearDpvsSceneView
==============
*/

void R_ClearDpvsSceneView(void)
{
  ?R_ClearDpvsSceneView@@YAXXZ();
}

/*
==============
R_DrawViewModelSceneEnt
==============
*/

void R_DrawViewModelSceneEnt(void)
{
  ?R_DrawViewModelSceneEnt@@YAXXZ();
}

/*
==============
R_SetAllVisDataForScene
==============
*/

void __fastcall R_SetAllVisDataForScene(unsigned int sceneViewType)
{
  ?R_SetAllVisDataForScene@@YAXI@Z(sceneViewType);
}

/*
==============
R_SetViewFrustumPlanes
==============
*/

void __fastcall R_SetViewFrustumPlanes(GfxViewInfo *viewInfo, int viewInfoIndex)
{
  ?R_SetViewFrustumPlanes@@YAXPEAUGfxViewInfo@@H@Z(viewInfo, viewInfoIndex);
}

/*
==============
R_InitSceneData
==============
*/

void __fastcall R_InitSceneData(LocalClientNum_t localClientNum)
{
  ?R_InitSceneData@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
R_ShowCull
==============
*/

void R_ShowCull(void)
{
  ?R_ShowCull@@YAXXZ();
}

/*
==============
R_GetDpvsView
==============
*/

const DpvsView *__fastcall R_GetDpvsView(unsigned int sceneViewType)
{
  return ?R_GetDpvsView@@YAPEBUDpvsView@@I@Z(sceneViewType);
}

/*
==============
R_GetDpvsCullDist
==============
*/

double __fastcall R_GetDpvsCullDist()
{
  double result; 

  *(float *)&result = ?R_GetDpvsCullDist@@YAMXZ();
  return result;
}

/*
==============
R_SetupSunShadowSurfacesDpvs
==============
*/

void __fastcall R_SetupSunShadowSurfacesDpvs(const GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow)
{
  ?R_SetupSunShadowSurfacesDpvs@@YAXPEBUGfxViewInfo@@PEBUGfxSunShadow@@@Z(viewInfo, sunShadow);
}

/*
==============
R_AddCachedSunShadowSurfacesFrustumOnly
==============
*/

void __fastcall R_AddCachedSunShadowSurfacesFrustumOnly(DpvsPlane *frustumPlanes, unsigned int sceneViewType, GfxViewInfo *viewInfo)
{
  ?R_AddCachedSunShadowSurfacesFrustumOnly@@YAXQEAUDpvsPlane@@IPEAUGfxViewInfo@@@Z(frustumPlanes, sceneViewType, viewInfo);
}

/*
==============
R_AddWorldSurfacesDpvs
==============
*/

void __fastcall R_AddWorldSurfacesDpvs(const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  ?R_AddWorldSurfacesDpvs@@YAXPEBUGfxViewParms@@PEBUGfxViewInfo@@@Z(viewParms, viewInfo);
}

/*
==============
R_FilterDObjIntoCells
==============
*/

void __fastcall R_FilterDObjIntoCells(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, float radius)
{
  ?R_FilterDObjIntoCells@@YAXIIAEBTvec3_t@@M@Z(localClientNum, entnum, origin, radius);
}

/*
==============
R_CullDynamicPointLightsInCameraView
==============
*/

void __fastcall R_CullDynamicPointLightsInCameraView(int viewInfoIndex)
{
  ?R_CullDynamicPointLightsInCameraView@@YAXH@Z(viewInfoIndex);
}

/*
==============
R_FrustumClipPlanes
==============
*/

void __fastcall R_FrustumClipPlanes(const GfxMatrix *viewProjMtx, const vec4_t *sidePlanes, int sidePlaneCount, DpvsPlane *frustumPlanes)
{
  ?R_FrustumClipPlanes@@YAXPEBUGfxMatrix@@QEBTvec4_t@@HQEAUDpvsPlane@@@Z(viewProjMtx, sidePlanes, sidePlaneCount, frustumPlanes);
}

/*
==============
R_DrawDynEntModelsCmd
==============
*/

void __fastcall R_DrawDynEntModelsCmd(const void *const cmd)
{
  ?R_DrawDynEntModelsCmd@@YAXQEBX@Z(cmd);
}

/*
==============
R_AddAllSceneEntSurfacesSpotShadow
==============
*/

void __fastcall R_AddAllSceneEntSurfacesSpotShadow(unsigned int spotShadowIndex)
{
  ?R_AddAllSceneEntSurfacesSpotShadow@@YAXI@Z(spotShadowIndex);
}

/*
==============
R_GenerateShadowMapCasterCells
==============
*/

void R_GenerateShadowMapCasterCells(void)
{
  ?R_GenerateShadowMapCasterCells@@YAXXZ();
}

/*
==============
R_CellForPoint
==============
*/

int __fastcall R_CellForPoint(const vec3_t *origin)
{
  return ?R_CellForPoint@@YAHAEBTvec3_t@@@Z(origin);
}

/*
==============
R_PortalAssertMsg
==============
*/

const char *__fastcall R_PortalAssertMsg()
{
  return ?R_PortalAssertMsg@@YAPEBDXZ();
}

/*
==============
R_SetCullDist
==============
*/

void __fastcall R_SetCullDist(float dist)
{
  ?R_SetCullDist@@YAXM@Z(dist);
}

/*
==============
R_UnfilterEntFromCells
==============
*/

void __fastcall R_UnfilterEntFromCells(unsigned int localClientNum, unsigned int entnum)
{
  ?R_UnfilterEntFromCells@@YAXII@Z(localClientNum, entnum);
}

/*
==============
DynEntCl_InitFilter
==============
*/

void DynEntCl_InitFilter(void)
{
  ?DynEntCl_InitFilter@@YAXXZ();
}

/*
==============
R_FrustumCullEntities
==============
*/

void __fastcall R_FrustumCullEntities(unsigned int maxSceneViewType, int viewInfoIndex)
{
  ?R_FrustumCullEntities@@YAXIH@Z(maxSceneViewType, viewInfoIndex);
}

/*
==============
R_ClearDpvsScene
==============
*/

void R_ClearDpvsScene(void)
{
  ?R_ClearDpvsScene@@YAXXZ();
}

/*
==============
R_DrawAllSceneEnt
==============
*/

void __fastcall R_DrawAllSceneEnt(const SceneEntCmd *sceneEntCmd)
{
  ?R_DrawAllSceneEnt@@YAXPEBUSceneEntCmd@@@Z(sceneEntCmd);
}

/*
==============
R_FilterXModelIntoScene
==============
*/

bool __fastcall R_FilterXModelIntoScene(const XModel *model, const GfxScaledPlacement *placement, unsigned int renderFlags, const base_vec4_t<unsigned int> *scriptablePackedColorEmissive, bool addGfxEntity, LocalClientNum_t localClientNum)
{
  return ?R_FilterXModelIntoScene@@YA_NPEBUXModel@@PEBUGfxScaledPlacement@@IAEBT?$base_vec4_t@I@@_NW4LocalClientNum_t@@@Z(model, placement, renderFlags, scriptablePackedColorEmissive, addGfxEntity, localClientNum);
}

/*
==============
R_CullDynamicSpotLightInCameraView
==============
*/

void __fastcall R_CullDynamicSpotLightInCameraView(int viewInfoIndex)
{
  ?R_CullDynamicSpotLightInCameraView@@YAXH@Z(viewInfoIndex);
}

/*
==============
R_ClearDpvsCellVisibility
==============
*/

void __fastcall R_ClearDpvsCellVisibility(int viewInfoIndex)
{
  ?R_ClearDpvsCellVisibility@@YAXH@Z(viewInfoIndex);
}

/*
==============
R_SetupWorldSurfacesDpvs
==============
*/

void __fastcall R_SetupWorldSurfacesDpvs(const GfxViewParms *viewParms, int viewInfoIndex)
{
  ?R_SetupWorldSurfacesDpvs@@YAXPEBUGfxViewParms@@H@Z(viewParms, viewInfoIndex);
}

/*
==============
R_InitSceneBuffers
==============
*/

void R_InitSceneBuffers(void)
{
  ?R_InitSceneBuffers@@YAXXZ();
}

/*
==============
R_AddAllSceneEntSurfacesSunShadow
==============
*/

void R_AddAllSceneEntSurfacesSunShadow(void)
{
  ?R_AddAllSceneEntSurfacesSunShadow@@YAXXZ();
}

/*
==============
R_AddAllSceneEntSurfacesCameraCmd
==============
*/

void __fastcall R_AddAllSceneEntSurfacesCameraCmd(const void *const cmd)
{
  ?R_AddAllSceneEntSurfacesCameraCmd@@YAXQEBX@Z(cmd);
}

/*
==============
R_GetFarPlaneDist
==============
*/

double __fastcall R_GetFarPlaneDist()
{
  double result; 

  *(float *)&result = ?R_GetFarPlaneDist@@YAMXZ();
  return result;
}

/*
==============
R_DrawAllDynEnt
==============
*/

void __fastcall R_DrawAllDynEnt(const LocalClientNum_t localClientNum, const GfxViewInfo *viewInfo)
{
  ?R_DrawAllDynEnt@@YAXW4LocalClientNum_t@@PEBUGfxViewInfo@@@Z(localClientNum, viewInfo);
}

/*
==============
R_InitSceneEntity
==============
*/

void __fastcall R_InitSceneEntity(GfxSceneEntity *sceneEnt)
{
  ?R_InitSceneEntity@@YAXPEAUGfxSceneEntity@@@Z(sceneEnt);
}

/*
==============
R_FilterThingIntoCells
==============
*/

void __fastcall R_FilterThingIntoCells(unsigned int thingIndex, const Bounds *bounds, unsigned int *cellBits, unsigned int wordCount)
{
  ?R_FilterThingIntoCells@@YAXIPEBUBounds@@PEAII@Z(thingIndex, bounds, cellBits, wordCount);
}

/*
==============
R_FilterBModelIntoCells
==============
*/

void __fastcall R_FilterBModelIntoCells(unsigned int localClientNum, unsigned int entnum, GfxBrushModel *bmodel)
{
  ?R_FilterBModelIntoCells@@YAXIIPEAUGfxBrushModel@@@Z(localClientNum, entnum, bmodel);
}

/*
==============
R_AddCellDynBrushSurfacesInFrustumCmd
==============
*/

void __fastcall R_AddCellDynBrushSurfacesInFrustumCmd(const void *const data)
{
  ?R_AddCellDynBrushSurfacesInFrustumCmd@@YAXQEBX@Z(data);
}

/*
==============
DynEntCl_InitFilter
==============
*/
void DynEntCl_InitFilter(void)
{
  GfxWorld *world; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4396, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  world = rgp.world;
  if ( !rgp.world )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4397, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    world = rgp.world;
  }
  v1 = 15984i64;
  scene.sceneDynModelCount = 0;
  v2 = 15968i64;
  scene.sceneDynBrushCount = 0;
  v3 = 2i64;
  while ( 1 )
  {
    memset_0(*(void **)((char *)&world->name + v1), 0, 4i64 * world->dpvsPlanes.cellCount * *(_DWORD *)((char *)&world->name + v2));
    v2 += 4i64;
    v1 += 8i64;
    if ( !--v3 )
      break;
    world = rgp.world;
  }
}

/*
==============
R_AddAllSceneEntSurfacesCameraCmd
==============
*/
void R_AddAllSceneEntSurfacesCameraCmd(const void *const cmd)
{
  unsigned int *v1; 
  const unsigned __int8 *v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned __int8 v5; 
  __int64 v6; 
  GfxDrawSurf *v7; 
  GfxDrawSurf *v8; 
  GfxDrawSurf *v9; 
  const GfxViewInfo *v10; 
  __int64 v11; 
  unsigned int v12; 
  const DObj **p_obj; 
  unsigned __int8 *v14; 
  const char *Name; 
  const GpuLightGridRequestRecord *v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned __int8 *v19; 
  GfxSceneModel *v20; 
  const XModel **p_model; 
  const GpuLightGridRequestRecord *lastGpuLightGridRequest; 
  LightGridVolumeModifier *v23; 
  GpuLightGridRequestRecord *v24; 
  unsigned int v25; 
  unsigned int v26; 
  int localClientNum; 
  __int64 v28; 
  unsigned __int8 *v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  GfxSceneDynModel *v33; 
  __int64 dynEntClientId; 
  __int64 v35; 
  unsigned __int16 v36; 
  DynEntityPose *v37; 
  unsigned __int16 v38; 
  DynEntityClient *v39; 
  const GpuLightGridRequestRecord *p_lastGpuLightGridRequest; 
  unsigned int dynEntDefId; 
  unsigned int v42; 
  unsigned int v43; 
  DynEntityList *DynEntityList; 
  unsigned int DynEntMapLookup; 
  LightGridVolumeModifier *v46; 
  const XModel *activeModel; 
  int v48; 
  __int64 v49; 
  unsigned int v50; 
  unsigned int *p_renderFlags; 
  unsigned __int8 *v52; 
  __int64 v53; 
  const GfxBrushModel *v54; 
  unsigned int mdaoVolumeIndex; 
  unsigned int v56; 
  unsigned __int8 *v57; 
  __int64 v58; 
  __int64 v59; 
  GfxSceneDynBrush *v60; 
  __int64 v61; 
  unsigned __int16 v62; 
  DynEntityPose *v63; 
  unsigned __int16 v64; 
  DynEntityClient *v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int v68; 
  DynEntityList *v69; 
  __int64 v70; 
  GfxBrushModel *BrushModel; 
  unsigned int v72; 
  unsigned int v73; 
  GfxDrawSurf **v74; 
  const unsigned __int8 *v75; 
  unsigned __int8 v76; 
  __int64 v77; 
  int v78; 
  int v79; 
  XModel **modelList; 
  __int64 modelCount; 
  GfxDrawSurf **v82; 
  unsigned int v83; 
  GfxSceneDynModel *v84; 
  unsigned __int8 *v85; 
  __int64 v87; 
  __int64 v88; 
  GfxModelDecalVolumeGridInfo decalVolumeGridInfo; 
  GfxModelDecalVolumeGridInfo v90; 
  __int64 v91; 
  __int64 v92; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned __int8 *v95; 
  LightGridVolumeModifier lgvModifier; 
  LightGridVolumeModifier v97; 
  LightGridVolumeModifier v98; 
  LightGridVolumeModifier result; 
  LightGridVolumeModifier v100; 
  LightGridVolumeModifier v101; 
  GfxDrawSurf *drawSurfs[14]; 
  GfxDrawSurf *lastDrawSurfs[14]; 
  GfxModelLightingProbeInfo lightingInfo; 

  v1 = (unsigned int *)cmd;
  Profile_Begin(552);
  v2 = s_cameraRegionToDSLMap;
  v3 = 13i64;
  v4 = 0i64;
  v92 = 13i64;
  do
  {
    v5 = *v2;
    if ( *v2 >= 0x1Au )
    {
      v8 = NULL;
      v9 = NULL;
    }
    else
    {
      v6 = scene.drawSurfCount[v5];
      v7 = scene.drawSurfs[v5];
      v8 = &v7[scene.drawSurfLimit[v5]];
      v9 = &v7[v6];
    }
    drawSurfs[v4] = v9;
    ++v2;
    lastDrawSurfs[v4++] = v8;
    --v3;
  }
  while ( v3 );
  v10 = *(const GfxViewInfo **)v1;
  R_EyeSensor_Reset();
  v11 = v1[3];
  v12 = v1[4];
  if ( (unsigned int)v11 < v12 )
  {
    p_obj = &scene.sceneDObj[v11].obj;
    v14 = &scene.sceneDObjVisData[0][v11];
    do
    {
      if ( *v14 == 1 )
      {
        if ( !*p_obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 916, ASSERT_TYPE_ASSERT, "(sceneEnt->obj)", (const char *)&queryFormat, "sceneEnt->obj") )
          __debugbreak();
        if ( *((_DWORD *)p_obj - 330) <= 4u )
        {
          Name = DObjGetName(*p_obj);
          LODWORD(v82) = *((_DWORD *)p_obj - 330);
          LODWORD(modelCount) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 917, ASSERT_TYPE_ASSERT, "(sceneEnt->cull.state > CULL_STATE_DONE)", "%s\n\t%d %d '%s'", "sceneEnt->cull.state > CULL_STATE_DONE", modelCount, v82, Name) )
            __debugbreak();
        }
        if ( rg.useLightGridVolumes )
        {
          lgvModifier = *R_LGV_CalcModifier(&result, *((_DWORD *)p_obj - 1) & 0xFFFFF, v10, *((unsigned __int16 *)p_obj + 10), (*((_DWORD *)p_obj - 2) >> 10) & 0xFFF, (*p_obj)->models, (*p_obj)->numModels);
          if ( CL_IsRenderingSplitScreen() )
            v16 = NULL;
          else
            v16 = (const GpuLightGridRequestRecord *)p_obj[3];
          R_LGV_PrepareVolumeInfo_SceneEnt(&lgvModifier, (const GfxSceneEntity *)(p_obj - 174), &lightingInfo, (GpuLightGridRequestRecord *)p_obj[3], v16);
        }
        scene.hudOutlineDObj |= (*((_DWORD *)p_obj - 1) >> 1) & 1;
        if ( R_AddDObjSurfacesCamera(v10, (const GfxSceneEntity *)(p_obj - 174), v11, &lightingInfo, drawSurfs, lastDrawSurfs) )
        {
          R_MDAO_AddEntityOccluders(v10, (const GfxSceneEntity *)(p_obj - 174));
          R_EyeSensor_AddLightSensors(v10, (GfxSceneEntity *)(p_obj - 174));
        }
      }
      LODWORD(v11) = v11 + 1;
      ++v14;
      p_obj += 178;
    }
    while ( (unsigned int)v11 < v12 );
    v1 = (unsigned int *)cmd;
  }
  v17 = v1[5];
  v18 = v1[6];
  if ( (unsigned int)v17 < v18 )
  {
    v19 = &scene.sceneModelVisData[0][v17];
    v20 = &scene.sceneModel[v17];
    do
    {
      if ( *v19 == 1 )
      {
        p_model = &v20->model;
        if ( !v20->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 959, ASSERT_TYPE_ASSERT, "(sceneModel->model)", (const char *)&queryFormat, "sceneModel->model") )
          __debugbreak();
        if ( rg.useLightGridVolumes )
        {
          if ( CL_IsRenderingSplitScreen() )
            lastGpuLightGridRequest = NULL;
          else
            lastGpuLightGridRequest = v20->lastGpuLightGridRequest;
          v23 = R_LGV_CalcModifier(&v100, *((_DWORD *)v20 + 31) & 0xFFFFF, v10, v20->mapEntLookup, (*((_DWORD *)v20 + 30) >> 10) & 0xFFF, &v20->model, 1u);
          v24 = v20->lastGpuLightGridRequest;
          v97 = *v23;
          R_LGV_PrepareVolumeInfo_SceneModel(&v97, v20, &lightingInfo, v24, lastGpuLightGridRequest);
        }
        R_DecalVolumesGrid_PrepareVolumeInfo_SceneModel(v10, v17, v20, &decalVolumeGridInfo);
        v25 = *((_DWORD *)v20 + 31);
        scene.hudOutlineDObj |= (v25 >> 1) & 1;
        if ( R_AddXModelSurfacesCamera(v10, &v20->info, *p_model, v20->obj, &v20->placement.base.origin, &lightingInfo, v25 & 1, drawSurfs, lastDrawSurfs, v20->mapEntLookup, (XModelThermalMode)((v25 >> 10) & 3), *((_DWORD *)v20 + 31) & 0xFFFFF, v20->gfxPackedEntityIndexBase, &decalVolumeGridInfo) )
        {
          R_MDAO_AddModelOccluders(v10, v20);
          R_EyeSensor_AddLightSensors(v10, v20);
        }
        if ( (*((_BYTE *)v20 + 124) & 9) == 0 )
          CG_DrawHits_OnDrawModelScaled(v10->clientIndex, (*((_DWORD *)v20 + 30) >> 10) & 0xFFF, &v20->placement, *p_model, (*(_DWORD *)&v20->info >> 1) & 0xF);
      }
      LODWORD(v17) = v17 + 1;
      ++v19;
      ++v20;
    }
    while ( (unsigned int)v17 < v18 );
    v1 = (unsigned int *)cmd;
  }
  v26 = v1[10];
  localClientNum = frontEndDataOut->localClientNum;
  v83 = localClientNum;
  v28 = localClientNum;
  v29 = &rgp.world->dpvsDyn.dynEntVisData[0][0][localClientNum * rgp.world->dpvsDyn.dynEntClientCount[0]];
  v30 = v1[9];
  v95 = v29;
  if ( (unsigned int)v30 < v26 )
  {
    v31 = 12 * v30;
    v32 = v26 - (unsigned int)v30;
    v91 = 12 * v30;
    v87 = (unsigned int)v32;
    do
    {
      v33 = (GfxSceneDynModel *)((char *)rgp.world->sceneDynModel + v31);
      v84 = v33;
      dynEntClientId = v33->dynEntClientId;
      if ( v29[dynEntClientId] == 1 )
      {
        if ( (unsigned int)localClientNum >= 2 )
        {
          LODWORD(modelCount) = 2;
          LODWORD(modelList) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v35 = v28;
        if ( !g_dynEntPoseLists[v35][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v36 = g_dynEntClientEntsAllocCount[localClientNum][0];
        if ( (unsigned __int16)dynEntClientId >= v36 )
        {
          LODWORD(modelCount) = v36;
          LODWORD(modelList) = (unsigned __int16)dynEntClientId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v37 = &g_dynEntPoseLists[v35][0][dynEntClientId];
        if ( v83 >= 2 )
        {
          LODWORD(modelCount) = 2;
          LODWORD(modelList) = v83;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v38 = g_dynEntClientEntsAllocCount[v83][0];
        if ( (unsigned __int16)dynEntClientId >= v38 )
        {
          LODWORD(modelCount) = v38;
          LODWORD(modelList) = (unsigned __int16)dynEntClientId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        if ( !g_dynEntClientLists[v35][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v39 = &g_dynEntClientLists[v35][0][dynEntClientId];
        if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1026, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1027, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
          __debugbreak();
        if ( rg.useLightGridVolumes )
        {
          if ( CL_IsRenderingSplitScreen() )
            p_lastGpuLightGridRequest = NULL;
          else
            p_lastGpuLightGridRequest = &v37->lastGpuLightGridRequest;
          dynEntDefId = v39->dynEntDefId;
          v42 = dynEntDefId >> 19;
          v43 = dynEntDefId & 0x7FFFF;
          v93 = v43;
          DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v42);
          if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
            __debugbreak();
          if ( v43 >= DynEntityList->dynEntCount[0] )
          {
            LODWORD(modelCount) = DynEntityList->dynEntCount[0];
            LODWORD(modelList) = v43;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", modelList, modelCount) )
              __debugbreak();
          }
          DynEntMapLookup = R_GetDynEntMapLookup(&DynEntityList->dynEntDefList[0][v43]);
          if ( !v39->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1042, ASSERT_TYPE_ASSERT, "(dynEntClient->activeModel)", (const char *)&queryFormat, "dynEntClient->activeModel") )
            __debugbreak();
          v46 = R_LGV_CalcModifier(&v101, 0, v10, DynEntMapLookup, (unsigned int)(unsigned __int16)dynEntClientId + 2047, &v39->activeModel, 1u);
          activeModel = v39->activeModel;
          v48 = (*(_DWORD *)&v84->info >> 5) & 1;
          v98 = *v46;
          R_LGV_PrepareVolumeInfo_DynModel(&v98, DynEntMapLookup, activeModel, v48, &v37->pose, &lightingInfo, &v37->lastGpuLightGridRequest, p_lastGpuLightGridRequest);
          v33 = v84;
          v31 = v91;
        }
        R_DecalVolumesGrid_PrepareVolumeInfo_SceneDynEnt(v10, v33, &v90);
        if ( R_AddXModelSurfacesCamera(v10, &v33->info, v39->activeModel, NULL, &v37->pose.origin, &lightingInfo, 0, drawSurfs, lastDrawSurfs, 0, THERMAL_TECH_ONLY, 0, 0, &v90) )
          R_MDAO_AddDynModelEntityOccluders(v10, v37, v39->activeModel);
        CG_DrawHits_OnDrawModel(v10->clientIndex, (unsigned __int16)dynEntClientId, &v37->pose, v39->activeModel, (*(_DWORD *)&v33->info >> 1) & 0xF);
        v32 = v87;
        v29 = v95;
        localClientNum = v83;
        v28 = (int)v83;
      }
      v31 += 12i64;
      --v32;
      v91 = v31;
      v87 = v32;
    }
    while ( v32 );
    v1 = (unsigned int *)cmd;
  }
  v49 = v1[7];
  v50 = v1[8];
  if ( (unsigned int)v49 < v50 )
  {
    p_renderFlags = &scene.sceneBrush[v49].renderFlags;
    v52 = &scene.sceneBrushVisData[0][v49];
    v53 = v50 - (unsigned int)v49;
    do
    {
      if ( *v52 == 1 )
      {
        v54 = (const GfxBrushModel *)*((_QWORD *)p_renderFlags - 8);
        if ( R_AddBModelSurfacesCamera(v10, (const BModelDrawInfo *)p_renderFlags - 10, v54, drawSurfs, lastDrawSurfs, *p_renderFlags) )
        {
          mdaoVolumeIndex = v54->mdaoVolumeIndex;
          if ( mdaoVolumeIndex != -1 )
          {
            if ( mdaoVolumeIndex >= rgp.world->mdaoVolumeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1094, ASSERT_TYPE_ASSERT, "((uint)bmodel->mdaoVolumeIndex < rgp.world->mdaoVolumeCount)", (const char *)&queryFormat, "(uint)bmodel->mdaoVolumeIndex < rgp.world->mdaoVolumeCount") )
              __debugbreak();
            R_MDAO_AddBrushOccluder(v10, v54, &rgp.world->mdaoVolumes[v54->mdaoVolumeIndex]);
          }
        }
      }
      ++v52;
      p_renderFlags += 22;
      --v53;
    }
    while ( v53 );
    localClientNum = v83;
    v1 = (unsigned int *)cmd;
  }
  v56 = v1[12];
  v57 = &rgp.world->dpvsDyn.dynEntVisData[1][0][localClientNum * rgp.world->dpvsDyn.dynEntClientCount[1]];
  v58 = v1[11];
  v85 = v57;
  if ( (unsigned int)v58 < v56 )
  {
    v59 = v58;
    v88 = v56 - (unsigned int)v58;
    do
    {
      v60 = &rgp.world->sceneDynBrush[v59];
      v61 = v60->dynEntClientId;
      if ( v57[v61] == 1 )
      {
        if ( v83 >= 2 )
        {
          LODWORD(modelCount) = 2;
          LODWORD(modelList) = v83;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        if ( !g_dynEntPoseLists[v83][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v62 = g_dynEntClientEntsAllocCount[v83][1];
        if ( (unsigned __int16)v61 >= v62 )
        {
          LODWORD(modelCount) = v62;
          LODWORD(modelList) = (unsigned __int16)v61;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v63 = &g_dynEntPoseLists[v83][1][v61];
        if ( v83 >= 2 )
        {
          LODWORD(modelCount) = 2;
          LODWORD(modelList) = v83;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v64 = g_dynEntClientEntsAllocCount[v83][1];
        if ( (unsigned __int16)v61 >= v64 )
        {
          LODWORD(modelCount) = v64;
          LODWORD(modelList) = (unsigned __int16)v61;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        if ( !g_dynEntClientLists[v83][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v65 = &g_dynEntClientLists[v83][1][v61];
        if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1117, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1118, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
          __debugbreak();
        v66 = v65->dynEntDefId;
        v67 = v66 >> 19;
        v68 = v66 & 0x7FFFF;
        v94 = v68;
        v69 = DynEnt_GetDynEntityList((DynEntityListId)v67);
        if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
          __debugbreak();
        if ( v68 >= v69->dynEntCount[1] )
        {
          LODWORD(modelCount) = v69->dynEntCount[1];
          LODWORD(modelList) = v68;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v70 = (__int64)&v69->dynEntDefList[1][v68];
        if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1120, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
          __debugbreak();
        BrushModel = R_GetBrushModel(*(unsigned __int16 *)(v70 + 66));
        if ( R_AddBModelSurfacesCamera(v10, &v60->info, BrushModel, drawSurfs, lastDrawSurfs, 0) )
        {
          v72 = BrushModel->mdaoVolumeIndex;
          if ( v72 != -1 )
          {
            if ( v72 >= rgp.world->mdaoVolumeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1128, ASSERT_TYPE_ASSERT, "((uint)bmodel->mdaoVolumeIndex < rgp.world->mdaoVolumeCount)", (const char *)&queryFormat, "(uint)bmodel->mdaoVolumeIndex < rgp.world->mdaoVolumeCount") )
              __debugbreak();
            R_MDAO_AddDynBrushEntityOccluder(v10, v63, BrushModel, &rgp.world->mdaoVolumes[BrushModel->mdaoVolumeIndex]);
          }
        }
        v57 = v85;
      }
      ++v59;
      --v88;
    }
    while ( v88 );
    v1 = (unsigned int *)cmd;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(553);
  v73 = v1[2];
  v74 = drawSurfs;
  v75 = s_cameraRegionToDSLMap;
  do
  {
    v76 = *v75;
    if ( *v75 < 0x1Au )
    {
      v77 = v76;
      v78 = truncate_cast<int,__int64>(*v74 - scene.drawSurfs[v76]);
      scene.drawSurfCount[v77] = v78;
      v79 = v78;
      if ( v73 )
      {
        Sys_ProfBeginNamedEvent(0xFF708090, "sort surfs");
        R_SortDrawSurfs(scene.drawSurfs[v77], v79);
        Sys_ProfEndNamedEvent();
      }
    }
    ++v75;
    ++v74;
    --v92;
  }
  while ( v92 );
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllSceneEntSurfacesRangeSunShadow
==============
*/
void R_AddAllSceneEntSurfacesRangeSunShadow(unsigned int partitionIndex)
{
  __int64 v1; 
  __int64 v2; 
  GfxDrawSurf *v3; 
  GfxDrawSurf *v4; 
  GfxDrawSurf *v5; 
  __int64 v6; 
  GfxSceneViewType sceneViewType; 
  unsigned __int8 *v8; 
  GfxSceneEntity *sceneDObj; 
  __int64 sceneDObjCount; 
  unsigned __int8 *v11; 
  const XModel **p_model; 
  __int64 sceneModelCount; 
  const XModel *v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned __int8 *v17; 
  GfxDrawSurf *v18; 
  __int64 v19; 
  __int64 sceneDynModelCount; 
  GfxSceneDynModel *v21; 
  __int64 dynEntClientId; 
  unsigned __int16 v23; 
  __int64 v24; 
  DynEntityClient *v25; 
  unsigned __int16 v26; 
  unsigned __int8 *v27; 
  const GfxBrushModel **p_bmodel; 
  __int64 sceneBrushCount; 
  GfxWorld *world; 
  unsigned int v31; 
  unsigned __int8 *v32; 
  GfxDrawSurf *v33; 
  __int64 sceneDynBrushCount; 
  GfxSceneDynBrush *v35; 
  __int64 v36; 
  unsigned __int16 v37; 
  DynEntityClient *v38; 
  unsigned int dynEntDefId; 
  unsigned int v40; 
  unsigned int v41; 
  DynEntityList *DynEntityList; 
  const GfxBrushModel *BrushModel; 
  GfxDrawSurf *v44; 
  int v45; 
  int v46; 
  int v47; 
  vec3_t *origin; 
  __int64 v49; 
  GfxDrawSurf *drawSurf; 
  GfxDrawSurf *v51; 
  GfxDrawSurf *lastDrawSurf; 
  int v53; 
  unsigned __int8 *v54; 
  __int64 v55; 
  __int64 v56; 
  GfxDrawSurf *v57; 
  __int64 v58; 
  GfxDrawSurf **v59; 
  __int64 v60; 
  int localClientNum; 
  GfxSceneViewType v63; 

  v1 = (int)partitionIndex;
  Profile_Begin(554);
  v2 = (unsigned int)(v1 + 17);
  v53 = v1 + 17;
  v3 = scene.drawSurfs[(unsigned int)(v1 + 13)];
  v59 = &scene.drawSurfs[(unsigned int)(v1 + 13)];
  v60 = (unsigned int)(v1 + 13);
  drawSurf = v3;
  lastDrawSurf = &v3[scene.drawSurfLimit[v60]];
  v56 = 0i64;
  if ( (_DWORD)v1 )
  {
    v4 = NULL;
    v51 = NULL;
    v5 = NULL;
  }
  else
  {
    v4 = scene.drawSurfs[v2];
    v5 = &v4[scene.drawSurfLimit[v2]];
    v51 = v4;
  }
  v6 = v1 + 1;
  v57 = v5;
  sceneViewType = v1 + 1;
  v63 = v1 + 1;
  v55 = v1 + 1;
  v58 = (v1 + 1) << 9;
  v8 = &scene.sceneDObjVisData[0][v58];
  if ( scene.sceneDObjCount )
  {
    sceneDObj = scene.sceneDObj;
    sceneDObjCount = (unsigned int)scene.sceneDObjCount;
    do
    {
      if ( *v8 == 1 )
      {
        if ( v4 && (*((_BYTE *)sceneDObj + 1388) & 4) != 0 )
          v4 = R_AddDObjSurfaces(sceneDObj, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v4, v5, sceneViewType);
        else
          v3 = R_AddDObjSurfaces(sceneDObj, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v3, lastDrawSurf, sceneViewType);
      }
      ++v8;
      ++sceneDObj;
      --sceneDObjCount;
    }
    while ( sceneDObjCount );
    LODWORD(v1) = partitionIndex;
    v6 = v55;
    drawSurf = v3;
    v51 = v4;
  }
  if ( !scene.sceneModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1208, ASSERT_TYPE_ASSERT, "(scene.sceneModelCountValidRead)", (const char *)&queryFormat, "scene.sceneModelCountValidRead") )
    __debugbreak();
  v11 = scene.sceneModelVisData[v6];
  if ( scene.sceneModelCount )
  {
    p_model = &scene.sceneModel[0].model;
    sceneModelCount = (unsigned int)scene.sceneModelCount;
    do
    {
      if ( *v11 == 1 )
      {
        if ( ((*((_DWORD *)p_model - 2) >> 1) & 0xFu) >= (*p_model)->numLods )
        {
          LODWORD(v49) = (*p_model)->numLods;
          LODWORD(origin) = (*((_DWORD *)p_model - 2) >> 1) & 0xF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1221, ASSERT_TYPE_ASSERT, "(unsigned)( sceneModel->info.lod ) < (unsigned)( sceneModel->model->numLods )", "sceneModel->info.lod doesn't index sceneModel->model->numLods\n\t%i not in [0, %i)", origin, v49) )
            __debugbreak();
        }
        v14 = *p_model;
        if ( ((*((_DWORD *)p_model - 2) >> 1) & 0xFu) < (*p_model)->shadowCutoffLod )
        {
          if ( v4 && (*((_BYTE *)p_model + 116) & 4) != 0 )
            v4 = R_AddXModelSurfaces((const XModelDrawInfo *)p_model - 1, v14, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v4, v5, (const vec3_t *)(p_model + 8), sceneViewType);
          else
            v3 = R_AddXModelSurfaces((const XModelDrawInfo *)p_model - 1, v14, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v3, lastDrawSurf, (const vec3_t *)(p_model + 8), sceneViewType);
        }
      }
      ++v11;
      p_model += 19;
      --sceneModelCount;
    }
    while ( sceneModelCount );
    LODWORD(v1) = partitionIndex;
    v6 = v55;
    drawSurf = v3;
    v51 = v4;
  }
  localClientNum = frontEndDataOut->localClientNum;
  v15 = localClientNum;
  v16 = localClientNum;
  if ( (_DWORD)v1 != 2 )
  {
    v17 = &rgp.world->dpvsDyn.dynEntVisData[0][v6][localClientNum * rgp.world->dpvsDyn.dynEntClientCount[0]];
    v54 = v17;
    if ( scene.sceneDynModelCount )
    {
      v18 = drawSurf;
      v19 = 0i64;
      sceneDynModelCount = (unsigned int)scene.sceneDynModelCount;
      do
      {
        v21 = &rgp.world->sceneDynModel[v19];
        dynEntClientId = v21->dynEntClientId;
        if ( v17[dynEntClientId] == 1 )
        {
          if ( v15 >= 2 )
          {
            LODWORD(v49) = 2;
            LODWORD(origin) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", origin, v49) )
              __debugbreak();
          }
          v23 = g_dynEntClientEntsAllocCount[v16][0];
          if ( (unsigned __int16)dynEntClientId >= v23 )
          {
            LODWORD(v49) = v23;
            LODWORD(origin) = (unsigned __int16)dynEntClientId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", origin, v49) )
              __debugbreak();
          }
          v24 = v16;
          if ( !g_dynEntClientLists[v24][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
            __debugbreak();
          v25 = &g_dynEntClientLists[v24][0][dynEntClientId];
          if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1256, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
            __debugbreak();
          if ( (v25->flags & 8) == 0 )
          {
            if ( !v25->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1262, ASSERT_TYPE_ASSERT, "(dynEntClient->activeModel)", (const char *)&queryFormat, "dynEntClient->activeModel") )
              __debugbreak();
            if ( ((*(_DWORD *)&v21->info >> 1) & 0xFu) < v25->activeModel->shadowCutoffLod )
            {
              if ( (unsigned int)localClientNum >= 2 )
              {
                LODWORD(v49) = 2;
                LODWORD(origin) = localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", origin, v49) )
                  __debugbreak();
              }
              if ( !g_dynEntPoseLists[v24][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
                __debugbreak();
              v26 = g_dynEntClientEntsAllocCount[localClientNum][0];
              if ( (unsigned __int16)dynEntClientId >= v26 )
              {
                LODWORD(v49) = v26;
                LODWORD(origin) = (unsigned __int16)dynEntClientId;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", origin, v49) )
                  __debugbreak();
              }
              v18 = R_AddXModelSurfaces(&v21->info, v25->activeModel, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v18, lastDrawSurf, &g_dynEntPoseLists[v24][0][dynEntClientId].pose.origin, v63);
            }
          }
          v17 = v54;
          v15 = localClientNum;
          v16 = localClientNum;
        }
        ++v19;
        --sceneDynModelCount;
      }
      while ( sceneDynModelCount );
      v5 = v57;
      sceneViewType = v63;
      LODWORD(v1) = partitionIndex;
      drawSurf = v18;
      v4 = v51;
    }
  }
  v27 = &scene.sceneBrushVisData[0][v58];
  if ( scene.sceneBrushCount )
  {
    p_bmodel = &scene.sceneBrush[0].bmodel;
    sceneBrushCount = (unsigned int)scene.sceneBrushCount;
    do
    {
      if ( *v27 == 1 )
      {
        if ( v4 && ((_BYTE)p_bmodel[8] & 4) != 0 )
          v4 = R_AddBModelSurfaces((const BModelDrawInfo *)p_bmodel - 2, *p_bmodel, sceneViewType, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v4, v5);
        else
          drawSurf = R_AddBModelSurfaces((const BModelDrawInfo *)p_bmodel - 2, *p_bmodel, sceneViewType, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, drawSurf, lastDrawSurf);
      }
      ++v27;
      p_bmodel += 11;
      --sceneBrushCount;
    }
    while ( sceneBrushCount );
    LODWORD(v1) = partitionIndex;
    v51 = v4;
  }
  if ( (_DWORD)v1 != 2 )
  {
    world = rgp.world;
    v31 = localClientNum;
    v32 = &rgp.world->dpvsDyn.dynEntVisData[1][v55][localClientNum * rgp.world->dpvsDyn.dynEntClientCount[1]];
    if ( scene.sceneDynBrushCount )
    {
      v33 = drawSurf;
      sceneDynBrushCount = (unsigned int)scene.sceneDynBrushCount;
      do
      {
        v35 = &world->sceneDynBrush[v56];
        v36 = v35->dynEntClientId;
        if ( v32[v36] == 1 )
        {
          if ( v31 >= 2 )
          {
            LODWORD(v49) = 2;
            LODWORD(origin) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", origin, v49) )
              __debugbreak();
          }
          v37 = g_dynEntClientEntsAllocCount[localClientNum][1];
          if ( (unsigned __int16)v36 >= v37 )
          {
            LODWORD(v49) = v37;
            LODWORD(origin) = (unsigned __int16)v36;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", origin, v49) )
              __debugbreak();
          }
          if ( !g_dynEntClientLists[localClientNum][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
            __debugbreak();
          v38 = &g_dynEntClientLists[localClientNum][1][v36];
          if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1310, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
            __debugbreak();
          dynEntDefId = v38->dynEntDefId;
          v40 = dynEntDefId >> 19;
          v41 = dynEntDefId & 0x7FFFF;
          DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v40);
          if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
            __debugbreak();
          if ( v41 >= DynEntityList->dynEntCount[1] )
          {
            LODWORD(v49) = DynEntityList->dynEntCount[1];
            LODWORD(origin) = v41;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", origin, v49) )
              __debugbreak();
          }
          BrushModel = R_GetBrushModel(DynEntityList->dynEntDefList[1][v41].brushModel);
          v44 = R_AddBModelSurfaces(&v35->info, BrushModel, sceneViewType, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v33, lastDrawSurf);
          world = rgp.world;
          v33 = v44;
          v31 = localClientNum;
        }
        ++v56;
        --sceneDynBrushCount;
      }
      while ( sceneDynBrushCount );
      drawSurf = v33;
      v4 = v51;
    }
  }
  v45 = truncate_cast<int,__int64>(drawSurf - *v59);
  scene.drawSurfCount[v60] = v45;
  Sys_ProfBeginNamedEvent(0xFF708090, "sort surfs");
  R_SortDrawSurfs(*v59, v45);
  Sys_ProfEndNamedEvent();
  if ( v4 )
  {
    v46 = truncate_cast<int,__int64>(v4 - scene.drawSurfs[v53]);
    scene.drawSurfCount[v53] = v46;
    v47 = v46;
    Sys_ProfBeginNamedEvent(0xFF708090, "sort surfs");
    R_SortDrawSurfs(scene.drawSurfs[v53], v47);
    Sys_ProfEndNamedEvent();
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_AddAllSceneEntSurfacesSpotShadow
==============
*/
void R_AddAllSceneEntSurfacesSpotShadow(unsigned int spotShadowIndex)
{
  __int128 v1; 
  __int64 v2; 
  GfxSceneViewType v3; 
  __int64 v4; 
  __int64 v5; 
  GfxDrawSurf *v6; 
  __int64 v7; 
  GfxDrawSurf *v8; 
  unsigned __int8 *v9; 
  GfxSceneEntity *sceneDObj; 
  __int64 sceneDObjCount; 
  unsigned __int8 *v12; 
  GfxSceneModel *sceneModel; 
  __int64 sceneDObjModelCount; 
  const XModel *model; 
  unsigned __int8 *v16; 
  __int64 sceneBrushCount; 
  unsigned int *p_surfBufSize; 
  unsigned int *entOverflowedDrawBuf; 
  unsigned __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 localClientNum; 
  __int64 v24; 
  unsigned __int8 *v25; 
  __int64 sceneDynModelCount; 
  GfxSceneDynModel *v27; 
  unsigned __int16 dynEntClientId; 
  unsigned __int16 v29; 
  DynEntityClient *v30; 
  GfxWorld *world; 
  unsigned __int8 *v32; 
  __int64 sceneDynBrushCount; 
  GfxSceneDynBrush *v34; 
  unsigned __int16 v35; 
  unsigned __int16 v36; 
  __int64 v37; 
  DynEntityClient *v38; 
  unsigned int dynEntDefId; 
  unsigned int v40; 
  unsigned int v41; 
  DynEntityList *DynEntityList; 
  const GfxBrushModel *BrushModel; 
  GfxDrawSurf *v44; 
  int v45; 
  int v46; 
  vec3_t *origin; 
  __int64 sceneViewType; 
  GfxSceneViewType v49; 
  __int64 v50; 
  __int64 v51; 
  GfxDrawSurf *lastDrawSurf; 
  __int64 v53; 
  vec3_t v54; 
  vec3_t v55; 
  __int128 v56; 

  v56 = v1;
  v2 = (int)spotShadowIndex;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1359, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v3 = v2 + 4;
  v49 = v2 + 4;
  if ( (unsigned int)(v2 + 4) >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1360, ASSERT_TYPE_ASSERT, "(SCENE_VIEW_SPOTSHADOW_0 + spotShadowIndex < SCENE_VIEW_COUNT_ENTVIS)", (const char *)&queryFormat, "SCENE_VIEW_SPOTSHADOW_0 + spotShadowIndex < SCENE_VIEW_COUNT_ENTVIS") )
    __debugbreak();
  v4 = (unsigned int)(v2 + 18);
  v5 = v2 + 4;
  v53 = v4;
  v6 = scene.drawSurfs[v4];
  v7 = v5 << 9;
  v8 = &v6[scene.drawSurfLimit[v4]];
  v51 = v5;
  lastDrawSurf = v8;
  v50 = v5 << 9;
  v9 = scene.sceneDObjVisData[v5];
  if ( scene.sceneDObjCount )
  {
    sceneDObj = scene.sceneDObj;
    sceneDObjCount = (unsigned int)scene.sceneDObjCount;
    do
    {
      if ( *v9 == 1 )
      {
        if ( (*((_DWORD *)sceneDObj + 347) & 0x20000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1378, ASSERT_TYPE_ASSERT, "(!(sceneEnt->renderFlags & (1 << 17)))", (const char *)&queryFormat, "!(sceneEnt->renderFlags & RF_NO_SPOTSHADOWS)") )
          __debugbreak();
        v6 = R_AddDObjSurfaces(sceneDObj, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, v8, v3);
      }
      ++v9;
      ++sceneDObj;
      --sceneDObjCount;
    }
    while ( sceneDObjCount );
    v7 = v50;
    v5 = v51;
  }
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1383, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  v12 = scene.sceneModelVisData[v5];
  if ( scene.sceneDObjModelCount )
  {
    sceneModel = scene.sceneModel;
    sceneDObjModelCount = (unsigned int)scene.sceneDObjModelCount;
    do
    {
      if ( *v12 == 1 )
      {
        if ( (*((_DWORD *)sceneModel + 31) & 0x20000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1399, ASSERT_TYPE_ASSERT, "(!(sceneModel->renderFlags & (1 << 17)))", (const char *)&queryFormat, "!(sceneModel->renderFlags & RF_NO_SPOTSHADOWS)") )
          __debugbreak();
        if ( ((*(_DWORD *)&sceneModel->info >> 1) & 0xFu) >= sceneModel->model->numLods )
        {
          LODWORD(sceneViewType) = sceneModel->model->numLods;
          LODWORD(origin) = (*(_DWORD *)&sceneModel->info >> 1) & 0xF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1401, ASSERT_TYPE_ASSERT, "(unsigned)( sceneModel->info.lod ) < (unsigned)( sceneModel->model->numLods )", "sceneModel->info.lod doesn't index sceneModel->model->numLods\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        model = sceneModel->model;
        if ( ((*(_DWORD *)&sceneModel->info >> 1) & 0xFu) < model->shadowCutoffLod )
        {
          v54.v[0] = 0.0;
          v54.v[1] = 0.0;
          v54.v[2] = 0.0;
          v6 = R_AddXModelSurfaces(&sceneModel->info, model, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, v8, &v54, v3);
        }
      }
      ++v12;
      ++sceneModel;
      --sceneDObjModelCount;
    }
    while ( sceneDObjModelCount );
    v7 = v50;
  }
  v16 = &scene.sceneBrushVisData[0][v7];
  if ( scene.sceneBrushCount )
  {
    sceneBrushCount = (unsigned int)scene.sceneBrushCount;
    p_surfBufSize = &scene.sceneBrush[0].info.surfBufSize;
    do
    {
      if ( *v16 == 1 )
      {
        if ( (p_surfBufSize[19] & 0x20000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1422, ASSERT_TYPE_ASSERT, "(!(sceneBrush->renderFlags & (1 << 17)))", (const char *)&queryFormat, "!(sceneBrush->renderFlags & RF_NO_SPOTSHADOWS)") )
          __debugbreak();
        if ( !*p_surfBufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1423, ASSERT_TYPE_ASSERT, "(sceneBrush->info.surfBufSize)", (const char *)&queryFormat, "sceneBrush->info.surfBufSize") )
          __debugbreak();
        entOverflowedDrawBuf = scene.entOverflowedDrawBuf;
        v20 = *((unsigned __int16 *)p_surfBufSize + 2);
        if ( !scene.entOverflowedDrawBuf && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", LODWORD(scene.entOverflowedDrawBuf) + 12, (AssertType)(LODWORD(scene.entOverflowedDrawBuf) + 1), "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v21 = entOverflowedDrawBuf[v20 >> 5];
        if ( _bittest((const int *)&v21, v20 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1424, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( scene.entOverflowedDrawBuf, sceneBrush->entnum, std::extent<decltype( scene.entOverflowedDrawBuf )>::value ? sizeof( decltype( scene.entOverflowedDrawBuf ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( scene.entOverflowedDrawBuf, sceneBrush->entnum )") )
          __debugbreak();
        v6 = R_AddBModelSurfaces((const BModelDrawInfo *)(p_surfBufSize - 1), *(const GfxBrushModel **)(p_surfBufSize + 3), v3, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, v8);
      }
      ++v16;
      p_surfBufSize += 22;
      --sceneBrushCount;
    }
    while ( sceneBrushCount );
  }
  v22 = 0i64;
  localClientNum = frontEndDataOut->localClientNum;
  v24 = localClientNum;
  v25 = &rgp.world->dpvsDyn.dynEntVisData[0][v51][(unsigned int)(localClientNum * rgp.world->dpvsDyn.dynEntClientCount[0])];
  if ( scene.sceneDynModelCount )
  {
    sceneDynModelCount = (unsigned int)scene.sceneDynModelCount;
    do
    {
      if ( *v25 == 1 )
      {
        v27 = &rgp.world->sceneDynModel[v22];
        dynEntClientId = v27->dynEntClientId;
        if ( (unsigned int)localClientNum >= 2 )
        {
          LODWORD(sceneViewType) = 2;
          LODWORD(origin) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        v29 = g_dynEntClientEntsAllocCount[localClientNum][0];
        if ( dynEntClientId >= v29 )
        {
          LODWORD(sceneViewType) = v29;
          LODWORD(origin) = dynEntClientId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        if ( !g_dynEntClientLists[localClientNum][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v30 = &g_dynEntClientLists[localClientNum][0][dynEntClientId];
        if ( !v30->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1450, ASSERT_TYPE_ASSERT, "(dynEntClient->activeModel)", (const char *)&queryFormat, "dynEntClient->activeModel") )
          __debugbreak();
        if ( ((*(_DWORD *)&v27->info >> 1) & 0xFu) < v30->activeModel->shadowCutoffLod )
        {
          v55.v[0] = 0.0;
          v55.v[1] = 0.0;
          v55.v[2] = 0.0;
          v6 = R_AddXModelSurfaces(&v27->info, v30->activeModel, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, lastDrawSurf, &v55, v49);
        }
      }
      ++v25;
      ++v22;
      --sceneDynModelCount;
    }
    while ( sceneDynModelCount );
    v24 = localClientNum;
    v22 = 0i64;
  }
  world = rgp.world;
  v32 = &rgp.world->dpvsDyn.dynEntVisData[1][v51][(unsigned int)(localClientNum * rgp.world->dpvsDyn.dynEntClientCount[1])];
  if ( scene.sceneDynBrushCount )
  {
    sceneDynBrushCount = (unsigned int)scene.sceneDynBrushCount;
    do
    {
      if ( *v32 == 1 )
      {
        v34 = &world->sceneDynBrush[v22];
        v35 = v34->dynEntClientId;
        if ( (unsigned int)localClientNum >= 2 )
        {
          LODWORD(sceneViewType) = 2;
          LODWORD(origin) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        v36 = g_dynEntClientEntsAllocCount[v24][1];
        if ( v35 >= v36 )
        {
          LODWORD(sceneViewType) = v36;
          LODWORD(origin) = v35;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        v37 = v24;
        if ( !g_dynEntClientLists[v37][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v38 = &g_dynEntClientLists[v37][1][v35];
        if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1477, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
          __debugbreak();
        dynEntDefId = v38->dynEntDefId;
        v40 = dynEntDefId >> 19;
        v41 = dynEntDefId & 0x7FFFF;
        DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v40);
        if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
          __debugbreak();
        if ( v41 >= DynEntityList->dynEntCount[1] )
        {
          LODWORD(sceneViewType) = DynEntityList->dynEntCount[1];
          LODWORD(origin) = v41;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        BrushModel = R_GetBrushModel(DynEntityList->dynEntDefList[1][v41].brushModel);
        v44 = R_AddBModelSurfaces(&v34->info, BrushModel, v49, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, lastDrawSurf);
        world = rgp.world;
        v6 = v44;
      }
      ++v32;
      ++v22;
      v24 = localClientNum;
      --sceneDynBrushCount;
    }
    while ( sceneDynBrushCount );
  }
  v45 = truncate_cast<int,__int64>(v6 - scene.drawSurfs[v53]);
  scene.drawSurfCount[v53] = v45;
  v46 = v45;
  Sys_ProfBeginNamedEvent(0xFF708090, "sort surfs");
  R_SortDrawSurfs(scene.drawSurfs[v53], v46);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_AddAllSceneEntSurfacesSunShadow
==============
*/
void R_AddAllSceneEntSurfacesSunShadow(void)
{
  unsigned int i; 

  for ( i = 0; i < 3; ++i )
    R_AddAllSceneEntSurfacesRangeSunShadow(i);
}

/*
==============
R_AddCachedSunShadowSurfacesFrustumOnly
==============
*/
void R_AddCachedSunShadowSurfacesFrustumOnly(DpvsPlane *frustumPlanes, unsigned int sceneViewType, GfxViewInfo *viewInfo)
{
  __int16 v5; 
  unsigned int cellCount; 
  unsigned int *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned int *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v17; 
  __int64 v22; 
  signed __int64 v25; 
  _DWORD *v26; 
  __int64 v27; 
  unsigned int v28; 
  DpvsPlane *v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int64 v32; 
  GfxWorld *world; 
  GfxBackEndData *v34; 
  unsigned int transientZone; 
  GfxCell *cells; 
  int v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float *v44; 
  GfxWorld *v45; 
  GfxBackEndData *v46; 
  GfxCellTransientInfo *cellTransientInfos; 
  unsigned int v48; 
  GfxWorldDrawCells *v49; 
  GfxAabbTree *aabbTree; 
  unsigned int aabbTreeIndex; 
  unsigned int v52; 
  __int64 v53; 
  __int64 v54; 
  GfxWorld *v55; 
  GfxBackEndData *v56; 
  unsigned int v57; 
  int v58; 
  GfxCell *v59; 
  vec3_t *v60; 
  __int64 v61; 
  __int64 v62; 
  __int16 v63; 
  DpvsPlane *data; 
  GfxAabbTree *CellAabbTreeFromContext; 
  __int16 v67; 
  __int16 v68; 
  _DWORD v69[32]; 

  v63 = sceneViewType;
  v5 = sceneViewType;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4045, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  cellCount = rgp.world->dpvsPlanes.cellCount;
  if ( !cellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4048, ASSERT_TYPE_ASSERT, "(cellCount)", (const char *)&queryFormat, "cellCount") )
    __debugbreak();
  v7 = dpvsGlob.cellVisibleBits[(__int64)viewInfo->viewInfoIndex];
  v7[(__int64)dpvsGlob.viewOrgCell >> 5] |= 0x80000000 >> (dpvsGlob.viewOrgCell & 0x1F);
  if ( sm_strictCull->current.enabled )
  {
    v8 = (cellCount + 31) >> 5;
    memset_0(v69, 0, 4i64 * v8);
    v9 = 0;
    if ( cellCount )
    {
      v10 = 0i64;
      do
      {
        if ( ((0x80000000 >> (v9 & 0x1F)) & v7[v10 >> 5]) != 0 )
        {
          v11 = &rgp.world->cellCasterBits[v8 * v9];
          v12 = 0i64;
          if ( v8 )
          {
            if ( v8 >= 0x10 )
            {
              v13 = v8 - 1;
              if ( v69 > &v11[v13] || &v69[v13] < v11 )
              {
                v14 = 8;
                do
                {
                  _XMM1 = *(_OWORD *)&v11[v12];
                  __asm { vpor    xmm1, xmm1, xmmword ptr [rsp+rdx*4+1C8h+var_158] }
                  *(_OWORD *)&v69[v12] = _XMM1;
                  v17 = v14 - 4;
                  v12 = (unsigned int)(v12 + 16);
                  _XMM1 = *(_OWORD *)&v11[v17];
                  __asm { vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1C8h+var_158] }
                  *(_OWORD *)&v69[v17] = _XMM1;
                  _XMM1 = *(_OWORD *)&v11[v14];
                  __asm { vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1C8h+var_158] }
                  *(_OWORD *)&v69[v14] = _XMM1;
                  v22 = v14 + 4;
                  v14 += 16;
                  _XMM1 = *(_OWORD *)&v11[v22];
                  __asm { vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1C8h+var_158] }
                  *(_OWORD *)&v69[v22] = _XMM1;
                }
                while ( (unsigned int)v12 < (v8 & 0xFFFFFFF0) );
              }
            }
            if ( (unsigned int)v12 < v8 )
            {
              v25 = (char *)v11 - (char *)v69;
              v26 = &v69[v12];
              v27 = v8 - (unsigned int)v12;
              do
              {
                *v26 |= *(_DWORD *)((char *)v26 + v25);
                ++v26;
                --v27;
              }
              while ( v27 );
            }
          }
        }
        ++v9;
        ++v10;
      }
      while ( v9 < cellCount );
    }
    v28 = 0;
    if ( cellCount )
    {
      v29 = frustumPlanes;
      v30 = 0i64;
      v31 = 0i64;
      v32 = 0i64;
      do
      {
        if ( ((0x80000000 >> (v28 & 0x1F)) & v69[v32 >> 5]) != 0 )
        {
          world = rgp.world;
          v34 = frontEndDataOut;
          if ( v28 >= rgp.world->dpvsPlanes.cellCount )
          {
            LODWORD(v62) = rgp.world->dpvsPlanes.cellCount;
            LODWORD(v61) = v28;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v61, v62) )
              __debugbreak();
          }
          transientZone = world->cellTransientInfos[v30].transientZone;
          if ( transientZone >= v34->transientDrawContext.zoneCount )
          {
            LODWORD(v62) = v34->transientDrawContext.zoneCount;
            LODWORD(v61) = transientZone;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v61, v62) )
              __debugbreak();
          }
          if ( v34->transientDrawContext.drawCellsPtrs[(unsigned __int16)transientZone] )
          {
            cells = rgp.world->cells;
            v37 = 0;
            v38 = cells[v31].bounds.halfSize.v[0];
            v39 = cells[v31].bounds.midPoint.v[0];
            v40 = cells[v31].bounds.midPoint.v[1];
            v41 = cells[v31].bounds.halfSize.v[1];
            v42 = cells[v31].bounds.midPoint.v[2];
            v43 = cells[v31].bounds.halfSize.v[2];
            v44 = &v29->coeffs.v[3];
            while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v44 - 3) & _xmm) * v38) + (float)((float)(v39 * *(v44 - 3)) + *v44)) + (float)(v40 * *(v44 - 2))) + (float)(COERCE_FLOAT(*(_DWORD *)(v44 - 2) & _xmm) * v41)) + (float)(v42 * *(v44 - 1))) + (float)(COERCE_FLOAT(*(_DWORD *)(v44 - 1) & _xmm) * v43)) > 0.0 )
            {
              ++v37;
              v44 += 4;
              if ( v37 >= 4 )
              {
                v45 = rgp.world;
                v46 = frontEndDataOut;
                if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", LODWORD(rgp.world) + 111, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
                  __debugbreak();
                if ( v28 >= v45->dpvsPlanes.cellCount )
                {
                  LODWORD(v62) = v45->dpvsPlanes.cellCount;
                  LODWORD(v61) = v28;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v61, v62) )
                    __debugbreak();
                }
                cellTransientInfos = v45->cellTransientInfos;
                v48 = cellTransientInfos[v30].transientZone;
                if ( v48 >= v46->transientDrawContext.zoneCount )
                {
                  LODWORD(v62) = v46->transientDrawContext.zoneCount;
                  LODWORD(v61) = cellTransientInfos[v30].transientZone;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v61, v62) )
                    __debugbreak();
                }
                v49 = v46->transientDrawContext.drawCellsPtrs[(unsigned __int16)v48];
                if ( v49 )
                {
                  aabbTreeIndex = cellTransientInfos[v30].aabbTreeIndex;
                  if ( aabbTreeIndex >= v49->cellCount )
                  {
                    LODWORD(v62) = v49->cellCount;
                    LODWORD(v61) = aabbTreeIndex;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 78, ASSERT_TYPE_ASSERT, "(unsigned)( aabbTreeIndex ) < (unsigned)( drawCells.cellCount )", "aabbTreeIndex doesn't index drawCells.cellCount\n\t%i not in [0, %i)", v61, v62) )
                      __debugbreak();
                  }
                  aabbTree = v49->aabbTrees[(unsigned __int16)aabbTreeIndex].aabbTree;
                }
                else
                {
                  aabbTree = NULL;
                }
                CellAabbTreeFromContext = aabbTree;
                data = frustumPlanes;
                v68 = v63;
                v67 = 1028;
                Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_STATIC, &data);
                v29 = frustumPlanes;
                break;
              }
            }
          }
        }
        ++v28;
        ++v32;
        ++v31;
        ++v30;
      }
      while ( v28 < cellCount );
    }
  }
  else
  {
    v52 = 0;
    if ( cellCount )
    {
      v53 = 0i64;
      v54 = 0i64;
      do
      {
        v55 = rgp.world;
        v56 = frontEndDataOut;
        if ( v52 >= rgp.world->dpvsPlanes.cellCount )
        {
          LODWORD(v62) = rgp.world->dpvsPlanes.cellCount;
          LODWORD(v61) = v52;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v61, v62) )
            __debugbreak();
        }
        v57 = v55->cellTransientInfos[v54].transientZone;
        if ( v57 >= v56->transientDrawContext.zoneCount )
        {
          LODWORD(v62) = v56->transientDrawContext.zoneCount;
          LODWORD(v61) = v57;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v61, v62) )
            __debugbreak();
        }
        if ( v56->transientDrawContext.drawCellsPtrs[(unsigned __int16)v57] )
        {
          v58 = 0;
          v60 = &frustumPlanes->coeffs.xyz + 1;
          while ( 1 )
          {
            v59 = rgp.world->cells;
            if ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v60[-1].v[0]) & _xmm) * v59[v53].bounds.halfSize.v[0]) + (float)((float)(v59[v53].bounds.midPoint.v[0] * v60[-1].v[0]) + v60->v[0])) + (float)(v59[v53].bounds.midPoint.v[1] * v60[-1].v[1])) + (float)(COERCE_FLOAT(LODWORD(v60[-1].v[1]) & _xmm) * v59[v53].bounds.halfSize.v[1])) + (float)(v59[v53].bounds.midPoint.v[2] * v60[-1].v[2])) + (float)(COERCE_FLOAT(LODWORD(v60[-1].v[2]) & _xmm) * v59[v53].bounds.halfSize.v[2])) <= 0.0 )
              break;
            ++v58;
            v60 = (vec3_t *)((char *)v60 + 16);
            if ( v58 >= 4 )
            {
              CellAabbTreeFromContext = R_GetCellAabbTreeFromContext(rgp.world, &frontEndDataOut->transientDrawContext, v52);
              data = frustumPlanes;
              v67 = 1028;
              v68 = v5;
              Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_STATIC, &data);
              break;
            }
          }
        }
        ++v52;
        ++v54;
        ++v53;
      }
      while ( v52 < cellCount );
    }
  }
}

/*
==============
R_AddCellDynBrushSurfacesInFrustumCmd
==============
*/
void R_AddCellDynBrushSurfacesInFrustumCmd(const void *const data)
{
  int localClientNum; 
  GfxWorld *world; 
  __int64 v4; 
  GfxBackEndData *v5; 
  unsigned int transientZone; 
  __int64 v7; 
  __int64 v8; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3006, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  localClientNum = frontEndDataOut->localClientNum;
  if ( localClientNum != *((_DWORD *)data + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3008, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( dpvsCell->localClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "dpvsCell->localClientNum", frontEndDataOut->localClientNum, *((_DWORD *)data + 4)) )
    __debugbreak();
  world = rgp.world;
  v4 = *((unsigned int *)data + 2);
  v5 = frontEndDataOut;
  if ( (unsigned int)v4 >= rgp.world->dpvsPlanes.cellCount )
  {
    LODWORD(v8) = rgp.world->dpvsPlanes.cellCount;
    LODWORD(v7) = *((_DWORD *)data + 2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  transientZone = world->cellTransientInfos[v4].transientZone;
  if ( transientZone >= v5->transientDrawContext.zoneCount )
  {
    LODWORD(v8) = v5->transientDrawContext.zoneCount;
    LODWORD(v7) = transientZone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !v5->transientDrawContext.drawCellsPtrs[(unsigned __int16)transientZone] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3011, ASSERT_TYPE_ASSERT, "(R_IsCellTransientZoneLoaded( rgp.world, frontEndDataOut->transientDrawContext, dpvsCell->cellIndex ))", (const char *)&queryFormat, "R_IsCellTransientZoneLoaded( rgp.world, frontEndDataOut->transientDrawContext, dpvsCell->cellIndex )") )
    __debugbreak();
  if ( r_drawDynEnts->current.enabled )
    R_CullDynBrushInCell((GfxSceneViewType)*((unsigned __int16 *)data + 7), (LocalClientNum_t)localClientNum, *((_DWORD *)data + 2), *(const DpvsPlane **)data, *((unsigned __int8 *)data + 12));
}

/*
==============
R_AddCellSurfacesAndCullGroupsInFrustumDelayed
==============
*/
void R_AddCellSurfacesAndCullGroupsInFrustumDelayed(GfxSceneViewType sceneViewType, unsigned int cellIndex, const DpvsPlane *planes, unsigned int planeCount, unsigned int frustumPlaneCount)
{
  __int16 v5; 
  unsigned __int16 v9; 
  const DpvsPlane *v10; 
  unsigned int v11; 
  char v12; 
  char v13; 
  __int16 v14; 
  int localClientNum; 
  const DpvsPlane *data; 
  GfxAabbTree *CellAabbTreeFromContext; 
  char v18; 
  char v19; 
  unsigned __int16 v20; 
  const DpvsPlane *v21; 
  int v22; 
  __int16 v23; 
  unsigned __int16 v24; 
  float v25; 
  float v26; 
  float v27; 
  FxGlassVisInfo *GlassVisInfo; 

  v5 = planeCount;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3031, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( R_IsCellTransientZoneLoaded(rgp.world, &frontEndDataOut->transientDrawContext, cellIndex) )
  {
    CellAabbTreeFromContext = R_GetCellAabbTreeFromContext(rgp.world, &frontEndDataOut->transientDrawContext, cellIndex);
    if ( !CellAabbTreeFromContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3044, ASSERT_TYPE_ASSERT, "(dpvsStaticCell.tree)", (const char *)&queryFormat, "dpvsStaticCell.tree") )
      __debugbreak();
    v19 = frustumPlaneCount;
    data = planes;
    v18 = v5;
    v20 = sceneViewType;
    if ( !R_Umbra_UseForStatics(sceneViewType) )
      Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_STATIC, &data);
    v11 = cellIndex;
    v10 = planes;
    v12 = v5;
    v13 = frustumPlaneCount;
    v14 = sceneViewType;
    localClientNum = frontEndDataOut->localClientNum;
    if ( !R_Umbra_UseForDynamics(sceneViewType) )
    {
      Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_SCENE_ENT, &v10);
      if ( sceneViewType != SCENE_VIEW_SUNSHADOW_DISTANT )
      {
        Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_DYN_MODEL, &v10);
        Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_DYN_BRUSH, &v10);
      }
      if ( sceneViewType == SCENE_VIEW_CAMERA )
      {
        v22 = v20;
        v21 = planes;
        v23 = v5;
        v9 = truncate_cast<unsigned short,unsigned int>(cellIndex);
        v25 = dpvsGlob.viewOrg.v[0];
        v27 = dpvsGlob.viewOrg.v[2];
        v26 = dpvsGlob.viewOrg.v[1];
        v24 = v9;
        GlassVisInfo = FX_GetGlassVisInfo();
        Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_GLASS, &v21);
      }
    }
  }
}

/*
==============
R_AddEntToCell
==============
*/
void R_AddEntToCell(const FilterEntInfo *entInfo, unsigned int cellIndex)
{
  __int64 localClientNum; 
  unsigned int maxClientViews; 
  unsigned __int64 entnum; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2404, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  localClientNum = entInfo->localClientNum;
  maxClientViews = gfxCfg.maxClientViews;
  if ( (unsigned int)localClientNum >= gfxCfg.maxClientViews )
  {
    LODWORD(v10) = entInfo->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientViews )", "localClientNum doesn't index gfxCfg.maxClientViews\n\t%i not in [0, %i)", v10, gfxCfg.maxClientViews) )
      __debugbreak();
    maxClientViews = gfxCfg.maxClientViews;
  }
  entnum = entInfo->entnum;
  if ( maxClientViews * gfxCfg.entCount > 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2411, ASSERT_TYPE_ASSERT, "(gfxCfg.maxClientViews * gfxCfg.entCount <= (4 * 2048))", (const char *)&queryFormat, "gfxCfg.maxClientViews * gfxCfg.entCount <= MAX_TOTAL_ENT_COUNT") )
    __debugbreak();
  if ( (gfxCfg.entCount & 7) != 0 )
  {
    LODWORD(v10) = gfxCfg.entCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2412, ASSERT_TYPE_ASSERT, "( ( !(gfxCfg.entCount & 7) ) )", "( gfxCfg.entCount ) = %i", v10) )
      __debugbreak();
  }
  v7 = localClientNum * (gfxCfg.entCount >> 5);
  if ( v7 >= 0x100 )
  {
    LODWORD(v11) = 256;
    LODWORD(v10) = localClientNum * (gfxCfg.entCount >> 5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2415, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( (4 * 2048) >> 5 )", "offset doesn't index MAX_TOTAL_ENT_COUNT >> 5\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = 0x80000000 >> (entnum & 0x1F);
  v9 = (entnum >> 5) + ((cellIndex + entInfo->cellOffset) << 8) + v7;
  rgp.world->dpvsPlanes.sceneEntCellBits[v9] |= v8;
  scene.dpvs.entVisBits[localClientNum][entnum >> 5] |= v8;
  scene.dpvs.entInfo[localClientNum][entnum].bmodel = entInfo->info.bmodel;
}

/*
==============
R_AddSceneDObj
==============
*/
void R_AddSceneDObj(unsigned int entnum, unsigned int viewIndex)
{
  __int64 v2; 
  __int64 v3; 

  v2 = viewIndex;
  v3 = entnum;
  if ( entnum == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1496, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
    __debugbreak();
  scene.dpvs.entVisData[v2][v3] = 1;
}

/*
==============
R_AddSunShadowSurfacesFrustumOnly
==============
*/
void R_AddSunShadowSurfacesFrustumOnly(GfxSceneViewType sceneViewType, int viewInfoIndex)
{
  GfxSceneViewType v2; 
  __int64 v3; 
  unsigned int *v4; 
  unsigned int cellCount; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  unsigned int *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v15; 
  __int64 v20; 
  signed __int64 v23; 
  _DWORD *v24; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned __int64 v29; 
  GfxWorld *world; 
  GfxBackEndData *v31; 
  unsigned int transientZone; 
  signed int v33; 
  signed int v34; 
  GfxCell *cells; 
  float *v36; 
  unsigned int v37; 
  __int64 v38; 
  int v39; 
  int frustumPlaneCount; 
  GfxCell *v41; 
  DpvsPlane *frustumPlanes; 
  __int64 v43; 
  __int64 v44; 
  __int64 v46; 
  _DWORD v47[32]; 

  v2 = sceneViewType;
  v3 = (int)sceneViewType + 33i64 * viewInfoIndex;
  v4 = dpvsGlob.cellVisibleBits[(__int64)viewInfoIndex];
  v46 = v3 * 244;
  v4[(__int64)dpvsGlob.viewOrgCell >> 5] |= 0x80000000 >> (dpvsGlob.viewOrgCell & 0x1F);
  cellCount = rgp.world->dpvsPlanes.cellCount;
  if ( !cellCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3939, ASSERT_TYPE_ASSERT, "(cellCount)", (const char *)&queryFormat, "cellCount") )
      __debugbreak();
    v2 = sceneViewType;
  }
  if ( sm_strictCull->current.enabled )
  {
    v6 = (cellCount + 31) >> 5;
    memset_0(v47, 0, 4i64 * v6);
    v7 = 0;
    if ( cellCount )
    {
      v8 = 0i64;
      do
      {
        if ( ((0x80000000 >> (v7 & 0x1F)) & v4[v8 >> 5]) != 0 )
        {
          v9 = &rgp.world->cellCasterBits[v6 * v7];
          v10 = 0i64;
          if ( v6 )
          {
            if ( v6 >= 0x10 )
            {
              v11 = v6 - 1;
              if ( v47 > &v9[v11] || &v47[v11] < v9 )
              {
                v12 = 8;
                do
                {
                  _XMM1 = *(_OWORD *)&v9[v10];
                  __asm { vpor    xmm1, xmm1, xmmword ptr [rsp+rdx*4+1A8h+var_158] }
                  *(_OWORD *)&v47[v10] = _XMM1;
                  v15 = v12 - 4;
                  v10 = (unsigned int)(v10 + 16);
                  _XMM1 = *(_OWORD *)&v9[v15];
                  __asm { vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1A8h+var_158] }
                  *(_OWORD *)&v47[v15] = _XMM1;
                  _XMM1 = *(_OWORD *)&v9[v12];
                  __asm { vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1A8h+var_158] }
                  *(_OWORD *)&v47[v12] = _XMM1;
                  v20 = v12 + 4;
                  v12 += 16;
                  _XMM1 = *(_OWORD *)&v9[v20];
                  __asm { vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1A8h+var_158] }
                  *(_OWORD *)&v47[v20] = _XMM1;
                }
                while ( (unsigned int)v10 < (v6 & 0xFFFFFFF0) );
              }
            }
            if ( (unsigned int)v10 < v6 )
            {
              v23 = (char *)v9 - (char *)v47;
              v24 = &v47[v10];
              v25 = v6 - (unsigned int)v10;
              do
              {
                *v24 |= *(_DWORD *)((char *)v24 + v23);
                ++v24;
                --v25;
              }
              while ( v25 );
            }
          }
        }
        ++v7;
        ++v8;
      }
      while ( v7 < cellCount );
    }
    v26 = 0;
    if ( cellCount )
    {
      v27 = 0i64;
      v28 = 0i64;
      v29 = 0i64;
      do
      {
        if ( ((0x80000000 >> (v26 & 0x1F)) & v47[v29 >> 5]) != 0 )
        {
          world = rgp.world;
          v31 = frontEndDataOut;
          if ( v26 >= rgp.world->dpvsPlanes.cellCount )
          {
            LODWORD(v44) = rgp.world->dpvsPlanes.cellCount;
            LODWORD(v43) = v26;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v43, v44) )
              __debugbreak();
          }
          transientZone = world->cellTransientInfos[v27].transientZone;
          if ( transientZone >= v31->transientDrawContext.zoneCount )
          {
            LODWORD(v44) = v31->transientDrawContext.zoneCount;
            LODWORD(v43) = transientZone;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v43, v44) )
              __debugbreak();
          }
          if ( v31->transientDrawContext.drawCellsPtrs[(unsigned __int16)transientZone] )
          {
            v33 = 0;
            v34 = *(_DWORD *)((char *)dpvsGlob.views[0][0].frustumPlanes[14].coeffs.v + v46);
            if ( v34 <= 0 )
            {
LABEL_33:
              R_AddCellSurfacesAndCullGroupsInFrustumDelayed(sceneViewType, v26, (const DpvsPlane *)((char *)dpvsGlob.views[0][0].frustumPlanes + v46), v34, *(_DWORD *)((char *)dpvsGlob.views[0][0].frustumPlanes[14].coeffs.v + v46));
            }
            else
            {
              v36 = (float *)((char *)dpvsGlob.views[0][0].frustumPlanes[0].coeffs.v + v46);
              while ( 1 )
              {
                cells = rgp.world->cells;
                if ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)v36 & _xmm) * cells[v28].bounds.halfSize.v[0]) + (float)((float)(cells[v28].bounds.midPoint.v[0] * *v36) + v36[3])) + (float)(cells[v28].bounds.midPoint.v[1] * v36[1])) + (float)(COERCE_FLOAT((_DWORD)v36[1] & _xmm) * cells[v28].bounds.halfSize.v[1])) + (float)(cells[v28].bounds.midPoint.v[2] * v36[2])) + (float)(COERCE_FLOAT((_DWORD)v36[2] & _xmm) * cells[v28].bounds.halfSize.v[2])) <= 0.0 )
                  break;
                ++v33;
                v36 += 4;
                if ( v33 >= v34 )
                  goto LABEL_33;
              }
            }
          }
        }
        ++v26;
        ++v29;
        ++v27;
        ++v28;
      }
      while ( v26 < cellCount );
    }
  }
  else
  {
    v37 = 0;
    if ( cellCount )
    {
      v38 = 0i64;
      do
      {
        v39 = 0;
        frustumPlaneCount = dpvsGlob.views[0][v3].frustumPlaneCount;
        if ( frustumPlaneCount <= 0 )
        {
LABEL_42:
          R_AddCellSurfacesAndCullGroupsInFrustumDelayed(v2, v37, dpvsGlob.views[0][v3].frustumPlanes, frustumPlaneCount, dpvsGlob.views[0][v3].frustumPlaneCount);
        }
        else
        {
          frustumPlanes = dpvsGlob.views[0][v3].frustumPlanes;
          while ( 1 )
          {
            v41 = rgp.world->cells;
            if ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[0]) & _xmm) * v41[v38].bounds.halfSize.v[0]) + (float)((float)(v41[v38].bounds.midPoint.v[0] * frustumPlanes->coeffs.v[0]) + frustumPlanes->coeffs.v[3])) + (float)(v41[v38].bounds.midPoint.v[1] * frustumPlanes->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[1]) & _xmm) * v41[v38].bounds.halfSize.v[1])) + (float)(v41[v38].bounds.midPoint.v[2] * frustumPlanes->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[2]) & _xmm) * v41[v38].bounds.halfSize.v[2])) <= 0.0 )
              break;
            ++v39;
            ++frustumPlanes;
            if ( v39 >= frustumPlaneCount )
              goto LABEL_42;
          }
        }
        v2 = sceneViewType;
        ++v37;
        ++v38;
      }
      while ( v37 < cellCount );
    }
  }
}

/*
==============
R_AddTranslucentSunShadowSurfacesFrustumOnly
==============
*/
void R_AddTranslucentSunShadowSurfacesFrustumOnly(const GfxSunShadow *sunShadow, int viewInfoIndex, unsigned int partitionIndex)
{
  __int64 v4; 
  float v7; 
  __m256i v8; 
  __int64 v9; 
  __int64 data[2]; 
  __int128 v11; 
  __int64 v12; 
  int localClientNum; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  int v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m256i v23; 
  float v24; 
  __int16 v25; 
  char v26; 
  __int128 v27; 
  float v28; 
  float v29; 
  float v30; 

  v4 = partitionIndex;
  if ( !sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3992, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
    __debugbreak();
  if ( (_DWORD)v4 != 3 )
  {
    LODWORD(v9) = v4 - 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3993, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex - R_SUNSHADOW_OPAQUE_PARTITION_COUNT ) < (unsigned)( R_SUNSHADOW_TRANS_PARTITION_COUNT )", "partitionIndex - R_SUNSHADOW_OPAQUE_PARTITION_COUNT doesn't index R_SUNSHADOW_TRANS_PARTITION_COUNT\n\t%i not in [0, %i)", v9, 1) )
      __debugbreak();
  }
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3995, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  data[0] = (__int64)FX_GetSystem(frontEndDataOut->localClientNum);
  data[1] = 0i64;
  v12 = 0i64;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v11 = _XMM0;
  localClientNum = frontEndDataOut->localClientNum;
  v14 = 1;
  v25 = 4;
  v26 = 0;
  v7 = sunShadow->partition[v4].viewParms.camera.origin.v[1];
  v15 = sunShadow->partition[v4].viewParms.camera.origin.v[0];
  v17 = sunShadow->partition[v4].viewParms.camera.origin.v[2];
  v16 = v7;
  v8 = *(__m256i *)sunShadow->partition[v4].viewParms.camera.axis.m[0].v;
  v24 = sunShadow->partition[v4].viewParms.camera.axis.m[2].v[2];
  v23 = v8;
  v19 = _mm128_mul_ps((__m128)_xmm_bf8000003f8000003f8000003f800000, (__m128)sunShadow->partition[v4].frustumSidePlanes[0]);
  v20 = _mm128_mul_ps((__m128)_xmm_bf8000003f8000003f8000003f800000, (__m128)sunShadow->partition[v4].frustumSidePlanes[1]);
  v21 = _mm128_mul_ps((__m128)_xmm_bf8000003f8000003f8000003f800000, (__m128)sunShadow->partition[v4].frustumSidePlanes[2]);
  v22 = _mm128_mul_ps((__m128)_xmm_bf8000003f8000003f8000003f800000, (__m128)sunShadow->partition[v4].frustumSidePlanes[3]);
  v30 = FLOAT_1_0;
  v28 = 0.0;
  v29 = 0.0;
  v27 = 0i64;
  v18 = 1;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_FX_SHADOW_VERTS, data);
}

/*
==============
R_AddWorldSurfacesDpvs
==============
*/
void R_AddWorldSurfacesDpvs(const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  __int128 v2; 
  __int128 v3; 
  __int64 v6; 
  LocalClientNum_t clientIndex; 
  const GfxMatrix *p_viewProjectionMatrix; 
  bool requireOcclusionUpdate; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  __int128 v15; 
  float value; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  double v27; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  __int64 v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 
  const dvar_t *v38; 
  float v39; 
  __int64 frameCount; 
  __int64 viewInfoIndex; 
  int data[4]; 
  int cmdInfo[4]; 
  int v44[4]; 
  tmat44_t<vec4_t> dst; 
  __int128 v46; 
  __int128 v47; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4736, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4737, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !viewParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4738, ASSERT_TYPE_ASSERT, "(viewParms)", (const char *)&queryFormat, "viewParms") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4739, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  rg.debugViewParms = viewParms;
  v6 = viewInfo->viewInfoIndex;
  if ( (unsigned int)v6 >= 6 )
  {
    LODWORD(frameCount) = viewInfo->viewInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4743, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", frameCount, 6) )
      __debugbreak();
  }
  clientIndex = viewInfo->clientIndex;
  if ( (unsigned int)clientIndex >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(viewInfoIndex) = 2;
    LODWORD(frameCount) = viewInfo->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4747, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", frameCount, viewInfoIndex) )
      __debugbreak();
  }
  p_viewProjectionMatrix = &viewParms->viewProjectionMatrix;
  requireOcclusionUpdate = 1;
  if ( CL_IsRenderingSplitScreen() )
  {
    v47 = v2;
    v46 = v3;
    if ( (_DWORD)v6 == 1 && clientIndex == LOCAL_CLIENT_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4759, ASSERT_TYPE_ASSERT, "(!( viewInfoIndex == 1 && clientIndex == 0 ))", (const char *)&queryFormat, "!( viewInfoIndex == 1 && clientIndex == 0 )") )
      __debugbreak();
    v10 = viewInfo->sceneDef.viewOffsetPrev.v[0] - viewInfo->sceneDef.viewOffset.v[0];
    v11 = viewInfo->sceneDef.viewOffsetPrev.v[1] - viewInfo->sceneDef.viewOffset.v[1];
    v12 = viewInfo->sceneDef.viewOffsetPrev.v[2] - viewInfo->sceneDef.viewOffset.v[2];
    v13 = DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold;
    v14 = (float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v12 * v12);
    v15 = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[1].v[1]);
    *(float *)&v15 = (float)((float)(viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[1].v[1] * viewInfo->viewParmsSet.frames[1].viewParms.viewMatrix.m.m[1].v[1]) + (float)(viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[1].v[0] * viewInfo->viewParmsSet.frames[1].viewParms.viewMatrix.m.m[1].v[0])) + (float)(viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[1].v[2] * viewInfo->viewParmsSet.frames[1].viewParms.viewMatrix.m.m[1].v[2]);
    _XMM5 = v15;
    __asm
    {
      vminss  xmm5, xmm5, xmm1
      vminss  xmm8, xmm5, xmm1
    }
    if ( !DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUForceUpdateOffsetThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    value = v13->current.value;
    v20 = DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUForceUpdateOffsetThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v14 > (float)(value * v20->current.value) )
      goto LABEL_36;
    v21 = DCONST_DVARFLT_r_splitscreenAUOUForceUpdateDotThreshold;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUForceUpdateDotThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUForceUpdateDotThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( *(float *)&_XMM8 < v21->current.value )
LABEL_36:
      requireOcclusionUpdate = 1;
    else
      requireOcclusionUpdate = 0;
    v22 = DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXDotThresholdMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v23 = v22->current.value;
    v24 = DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMax;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXDotThresholdMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = v23 - v24->current.value;
    v26 = DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXDotThresholdMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = I_fclamp((float)((float)(1.0 - *(float *)&_XMM8) - (float)(1.0 - v26->current.value)) / v25, 0.0, 1.0);
    v28 = DCONST_DVARFLT_r_splitscreenAUOUScaleXMax;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v29 = v28->current.value;
    v30 = DCONST_DVARFLT_r_splitscreenAUOUScaleXMin;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v31 = (float)((float)(1.0 - *(float *)&v27) * v30->current.value) + (float)(*(float *)&v27 * v29);
    if ( viewInfo->teleported || requireOcclusionUpdate || (v32 = v6, !rg.splitscreenAUOUValid[v6]) || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_splitscreenAUOUDisabled, "r_splitscreenAUOUDisabled") )
    {
      requireOcclusionUpdate = 1;
      v32 = v6;
    }
    rg.splitscreenAUOUValid[v32] = 1;
    v33 = DCONST_DVARBOOL_r_splitscreenAUOUDisabled;
    if ( !DCONST_DVARBOOL_r_splitscreenAUOUDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUDisabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( !v33->current.enabled )
    {
      MatrixCopy44(&viewParms->viewProjectionMatrix.m, &dst);
      v34 = DCONST_DVARFLT_r_splitscreenAUOUScaleY;
      dst.m[0].v[0] = v31 * dst.m[0].v[0];
      dst.m[1].v[0] = v31 * dst.m[1].v[0];
      dst.m[2].v[0] = v31 * dst.m[2].v[0];
      if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      v35 = dst.m[0].v[1] * v34->current.value;
      v36 = DCONST_DVARFLT_r_splitscreenAUOUScaleY;
      dst.m[0].v[1] = v35;
      if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      v37 = dst.m[1].v[1] * v36->current.value;
      v38 = DCONST_DVARFLT_r_splitscreenAUOUScaleY;
      dst.m[1].v[1] = v37;
      if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      dst.m[2].v[1] = dst.m[2].v[1] * v38->current.value;
      p_viewProjectionMatrix = (const GfxMatrix *)&dst;
    }
  }
  else
  {
    *(_WORD *)rg.splitscreenAUOUValid = 0;
  }
  R_Umbra_QueryStaticCamera(viewParms, p_viewProjectionMatrix, viewInfo->displayViewport.width, viewInfo->displayViewport.height, viewInfo->input.data->smpFrame, viewInfo->input.data->frameCount, v6, requireOcclusionUpdate);
  v39 = viewParms->camera.origin.v[1];
  data[0] = LODWORD(viewParms->camera.origin.v[0]);
  data[2] = LODWORD(viewParms->camera.origin.v[2]);
  *(float *)&data[1] = v39;
  data[3] = v6;
  if ( r_umbraDynamicDpvsSMP->current.enabled )
    Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_GLASS, data);
  else
    FX_AddGlassSurfacesInUmbraFrustumCmd(data);
  cmdInfo[1] = v6;
  cmdInfo[2] = 0;
  v44[2] = 0;
  v44[1] = v6;
  cmdInfo[0] = clientIndex;
  v44[0] = clientIndex;
  cmdInfo[3] = 48;
  v44[3] = 15;
  if ( r_umbraDynamicDpvsSMP->current.enabled )
  {
    Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_SCENE_ENT_CAMERA, v44);
    Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_DYN_ENT_CAMERA, cmdInfo);
  }
  else
  {
    R_Umbra_CullSceneEnts(cmdInfo);
    R_Umbra_CullSceneEnts(v44);
  }
}

/*
==============
R_CellForPoint
==============
*/
__int64 R_CellForPoint(const vec3_t *origin)
{
  GfxWorld *world; 
  unsigned __int16 *nodes; 
  int v4; 
  int v5; 
  GfxWorldDpvsPlane *planes; 
  __int64 v7; 
  __int64 v8; 

  world = rgp.world;
  if ( !rgp.world )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 689, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    world = rgp.world;
  }
  nodes = world->dpvsPlanes.nodes;
  v4 = world->dpvsPlanes.cellCount + 1;
  v5 = *nodes - v4;
  if ( v5 < 0 )
    return (unsigned int)*nodes - 1;
  planes = world->dpvsPlanes.planes;
  do
  {
    v7 = v5;
    v8 = 0i64;
    if ( (float)((float)((float)((float)(origin->v[1] * planes[v7].normal.v[1]) + (float)(origin->v[0] * planes[v7].normal.v[0])) + (float)(origin->v[2] * planes[v7].normal.v[2])) - planes[v7].dist) <= 0.0 )
      v8 = (unsigned int)nodes[1] - 2;
    nodes += v8 + 2;
    v5 = *nodes - v4;
  }
  while ( v5 >= 0 );
  return (unsigned int)*nodes - 1;
}

/*
==============
R_ClearDpvsCellVisibility
==============
*/
void R_ClearDpvsCellVisibility(int viewInfoIndex)
{
  __int64 v1; 
  int v3; 

  v1 = viewInfoIndex;
  if ( (unsigned int)viewInfoIndex >= 6 )
  {
    v3 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4844, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", viewInfoIndex, v3) )
      __debugbreak();
  }
  memset_0(dpvsGlob.cellVisibleBits[v1], 0, 4 * ((unsigned __int64)(rgp.world->dpvsPlanes.cellCount + 31) >> 5));
}

/*
==============
R_ClearDpvsScene
==============
*/
void R_ClearDpvsScene(void)
{
  __int64 v0; 
  int v1; 

  memset_0(scene.dpvs.sceneXModelIndex, 255, 2i64 * gfxCfg.entCount);
  if ( *scene.dpvs.sceneXModelIndex != 0xFFFF )
  {
    v1 = *scene.dpvs.sceneXModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4456, ASSERT_TYPE_ASSERT, "( ( scene.dpvs.sceneXModelIndex[0] == (65535) ) )", "( scene.dpvs.sceneXModelIndex[0] ) = %i", v1) )
      __debugbreak();
  }
  memset_0(scene.dpvs.sceneDObjIndex, 255, 2i64 * gfxCfg.entCount);
  if ( *scene.dpvs.sceneDObjIndex != 0xFFFF )
  {
    LODWORD(v0) = *scene.dpvs.sceneDObjIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4459, ASSERT_TYPE_ASSERT, "( ( scene.dpvs.sceneDObjIndex[0] == (65535) ) )", "( scene.dpvs.sceneDObjIndex[0] ) = %i", v0) )
      __debugbreak();
  }
}

/*
==============
R_ClearDpvsSceneView
==============
*/
void R_ClearDpvsSceneView(void)
{
  GfxWorld *world; 
  unsigned int collectionCount; 
  unsigned int surfaceCount; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  size_t v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  size_t v12; 
  GfxWorldDpvsDynamic *p_dpvsDyn; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  size_t v17; 
  void *v18; 
  void *v19; 
  void *v20; 
  void *v21; 
  void *v22; 
  void *v23; 
  void *v24; 
  void *v25; 
  void *v26; 
  void *v27; 
  void *v28; 

  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4472, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !rgp.world->cells && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4473, ASSERT_TYPE_ASSERT, "(rgp.world->cells)", (const char *)&queryFormat, "rgp.world->cells") )
    __debugbreak();
  FX_ClearGlassVisData();
  if ( (gfxCfg.entCount & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4479, ASSERT_TYPE_SANITY, "( (gfxCfg.entCount & 31) == 0 )", (const char *)&queryFormat, "(gfxCfg.entCount & 31) == 0") )
    __debugbreak();
  memset_0(scene.entOverflowedDrawBuf, 0, (unsigned __int64)gfxCfg.entCount >> 3);
  world = rgp.world;
  collectionCount = rgp.world->smodels.collectionCount;
  surfaceCount = rgp.world->models->surfaceCount;
  if ( collectionCount )
  {
    v3 = collectionCount + 31;
    v4 = 15376i64;
    v5 = 3i64;
    do
    {
      if ( *(_QWORD *)((char *)world + v4 - 16) )
      {
        memset_0(*(void **)((char *)world + v4 - 16), 0, 4 * ((unsigned __int64)v3 >> 5));
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)world + v4 - 8) )
      {
        memset_0(*(void **)((char *)world + v4 - 8), 0, 4 * ((unsigned __int64)v3 >> 5));
        world = rgp.world;
      }
      v6 = (unsigned __int64)v3 >> 5;
      if ( *(const char **)((char *)&world->name + v4) )
      {
        memset_0(*(void **)((char *)&world->name + v4), 0, 4 * v6);
        world = rgp.world;
      }
      v7 = 4 * v6;
      if ( *(const char **)((char *)&world->baseName + v4) )
      {
        memset_0(*(void **)((char *)&world->baseName + v4), 0, v7);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->bspVersion + v4) )
      {
        memset_0(*(void **)((char *)&world->bspVersion + v4), 0, v7);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->primaryLightCount + v4) )
      {
        memset_0(*(void **)((char *)&world->primaryLightCount + v4), 0, v7);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->mutablePrimaryLightCount + v4) )
      {
        memset_0(*(void **)((char *)&world->mutablePrimaryLightCount + v4), 0, v7);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->staticScriptablesPrimaryLightCount + v4) )
      {
        memset_0(*(void **)((char *)&world->staticScriptablesPrimaryLightCount + v4), 0, v7);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->staticScriptablePrimaryLightCount + v4) )
      {
        memset_0(*(void **)((char *)&world->staticScriptablePrimaryLightCount + v4), 0, v7);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->movingScriptablePrimaryLightCount + v4) )
      {
        memset_0(*(void **)((char *)&world->movingScriptablePrimaryLightCount + v4), 0, v7);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->sortKeyEffectDecal + v4) )
      {
        memset_0(*(void **)((char *)&world->sortKeyEffectDecal + v4), 0, v7);
        world = rgp.world;
      }
      v4 += 88i64;
      --v5;
    }
    while ( v5 );
  }
  if ( surfaceCount )
  {
    v8 = surfaceCount + 31;
    v9 = 15640i64;
    v10 = 3i64;
    do
    {
      if ( *(_QWORD *)((char *)world + v9 - 16) )
      {
        memset_0(*(void **)((char *)world + v9 - 16), 0, 4 * ((unsigned __int64)v8 >> 5));
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)world + v9 - 8) )
      {
        memset_0(*(void **)((char *)world + v9 - 8), 0, 4 * ((unsigned __int64)v8 >> 5));
        world = rgp.world;
      }
      v11 = (unsigned __int64)v8 >> 5;
      if ( *(const char **)((char *)&world->name + v9) )
      {
        memset_0(*(void **)((char *)&world->name + v9), 0, 4 * v11);
        world = rgp.world;
      }
      v12 = 4 * v11;
      if ( *(const char **)((char *)&world->baseName + v9) )
      {
        memset_0(*(void **)((char *)&world->baseName + v9), 0, v12);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->bspVersion + v9) )
      {
        memset_0(*(void **)((char *)&world->bspVersion + v9), 0, v12);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->primaryLightCount + v9) )
      {
        memset_0(*(void **)((char *)&world->primaryLightCount + v9), 0, v12);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->mutablePrimaryLightCount + v9) )
      {
        memset_0(*(void **)((char *)&world->mutablePrimaryLightCount + v9), 0, v12);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->staticScriptablesPrimaryLightCount + v9) )
      {
        memset_0(*(void **)((char *)&world->staticScriptablesPrimaryLightCount + v9), 0, v12);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->staticScriptablePrimaryLightCount + v9) )
      {
        memset_0(*(void **)((char *)&world->staticScriptablePrimaryLightCount + v9), 0, v12);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->movingScriptablePrimaryLightCount + v9) )
      {
        memset_0(*(void **)((char *)&world->movingScriptablePrimaryLightCount + v9), 0, v12);
        world = rgp.world;
      }
      if ( *(_QWORD *)((char *)&world->sortKeyEffectDecal + v9) )
      {
        memset_0(*(void **)((char *)&world->sortKeyEffectDecal + v9), 0, v12);
        world = rgp.world;
      }
      v9 += 88i64;
      --v10;
    }
    while ( v10 );
  }
  memset_0(world->dpvs.primaryLightVisData, 0, 4 * ((unsigned __int64)(world->primaryLightCount + 31) >> 5));
  memset_0(rgp.world->dpvs.reflectionProbeVisData, 0, 4 * ((unsigned __int64)(rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount + 31) >> 5));
  memset_0(rgp.world->dpvs.volumetricVisData, 0, 4 * ((unsigned __int64)(rgp.world->draw.volumetrics.volumetricCount + 31) >> 5));
  memset_0(rgp.world->dpvs.decalVisData, 0, 4 * ((unsigned __int64)(rgp.world->draw.decalVolumeCollectionCount + 31) >> 5));
  if ( scene.dpvs.entVisData[0] )
    memset_0(scene.dpvs.entVisData[0], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[1] )
    memset_0(scene.dpvs.entVisData[1], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[2] )
    memset_0(scene.dpvs.entVisData[2], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[3] )
    memset_0(scene.dpvs.entVisData[3], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[4] )
    memset_0(scene.dpvs.entVisData[4], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[5] )
    memset_0(scene.dpvs.entVisData[5], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[6] )
    memset_0(scene.dpvs.entVisData[6], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[7] )
    memset_0(scene.dpvs.entVisData[7], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[8] )
    memset_0(scene.dpvs.entVisData[8], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[9] )
    memset_0(scene.dpvs.entVisData[9], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[10] )
    memset_0(scene.dpvs.entVisData[10], 0, gfxCfg.entCount);
  if ( scene.dpvs.entVisData[11] )
    memset_0(scene.dpvs.entVisData[11], 0, gfxCfg.entCount);
  memset_0(rgp.world->sceneDynModel, 0, 12i64 * (int)scene.sceneDynModelCount);
  scene.sceneDynModelCount = 0;
  memset_0(rgp.world->sceneDynBrush, 0, 12i64 * (int)scene.sceneDynBrushCount);
  scene.sceneDynBrushCount = 0;
  p_dpvsDyn = &s_world.dpvsDyn;
  v14 = 16016i64;
  v15 = 2i64;
  do
  {
    v16 = 3i64;
    v17 = 32 * p_dpvsDyn->dynEntClientWordCount[0];
    do
    {
      v18 = *(void **)((char *)rgp.world + v14 - 16);
      if ( v18 )
        memset_0(v18, 0, v17);
      v19 = *(void **)((char *)rgp.world + v14 - 8);
      if ( v19 )
        memset_0(v19, 0, v17);
      v20 = *(void **)((char *)&rgp.world->name + v14);
      if ( v20 )
        memset_0(v20, 0, v17);
      v21 = *(void **)((char *)&rgp.world->baseName + v14);
      if ( v21 )
        memset_0(v21, 0, v17);
      v22 = *(void **)((char *)&rgp.world->bspVersion + v14);
      if ( v22 )
        memset_0(v22, 0, v17);
      v23 = *(void **)((char *)&rgp.world->primaryLightCount + v14);
      if ( v23 )
        memset_0(v23, 0, v17);
      v24 = *(void **)((char *)&rgp.world->mutablePrimaryLightCount + v14);
      if ( v24 )
        memset_0(v24, 0, v17);
      v25 = *(void **)((char *)&rgp.world->staticScriptablesPrimaryLightCount + v14);
      if ( v25 )
        memset_0(v25, 0, v17);
      v26 = *(void **)((char *)&rgp.world->staticScriptablePrimaryLightCount + v14);
      if ( v26 )
        memset_0(v26, 0, v17);
      v27 = *(void **)((char *)&rgp.world->movingScriptablePrimaryLightCount + v14);
      if ( v27 )
        memset_0(v27, 0, v17);
      v28 = *(void **)((char *)&rgp.world->sortKeyEffectDecal + v14);
      if ( v28 )
        memset_0(v28, 0, v17);
      v14 += 88i64;
      --v16;
    }
    while ( v16 );
    p_dpvsDyn = (GfxWorldDpvsDynamic *)((char *)p_dpvsDyn + 4);
    --v15;
  }
  while ( v15 );
}

/*
==============
R_ConnectCells
==============
*/
void R_ConnectCells(unsigned int cellIndex)
{
  __int64 v1; 
  unsigned int v2; 
  unsigned __int64 v3; 
  unsigned int *cellBits; 
  GfxWorld *world; 
  int v6; 
  GfxCell *v7; 
  __int64 v8; 
  unsigned int v9; 

  v1 = cellIndex;
  v2 = 0x80000000 >> (cellIndex & 0x1F);
  v3 = (unsigned __int64)cellIndex >> 5;
  cellBits = dpvsGlob.cellBits;
  if ( (v2 & dpvsGlob.cellBits[v3]) == 0 )
  {
    if ( !dpvsGlob.cellBits )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3341, ASSERT_TYPE_ASSERT, "(dpvsGlob.cellBits)", (const char *)&queryFormat, "dpvsGlob.cellBits") )
        __debugbreak();
      cellBits = dpvsGlob.cellBits;
    }
    cellBits[v3] |= v2;
    world = rgp.world;
    v6 = 0;
    v7 = &rgp.world->cells[v1];
    if ( v7->portalCount )
    {
      v8 = 0i64;
      do
      {
        v9 = v7->portals[v8].cellIndex;
        if ( v9 < world->dpvsPlanes.cellCount && ((0x80000000 >> (v9 & 0x1F)) & dpvsGlob.cellBits[(unsigned __int64)v9 >> 5]) == 0 )
        {
          R_ConnectCells(v9);
          world = rgp.world;
        }
        ++v6;
        ++v8;
      }
      while ( v6 < v7->portalCount );
    }
  }
}

/*
==============
R_CullDynBrushInCell
==============
*/
void R_CullDynBrushInCell(GfxSceneViewType sceneViewType, LocalClientNum_t localClientNum, unsigned int cellIndex, const DpvsPlane *planes, unsigned int planeCount)
{
  GfxWorld *world; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int8 *v11; 
  unsigned int *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  __int64 v17; 
  unsigned int v18; 
  DynEntityList *DynEntityList; 
  __int64 v20; 
  GfxBrushModel *BrushModel; 
  signed int v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  vec3_t *v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned int *v32; 
  unsigned int i; 
  unsigned int v34; 

  world = rgp.world;
  v8 = sceneViewType;
  if ( cellIndex >= rgp.world->dpvsPlanes.cellCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1597, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( rgp.world->dpvsPlanes.cellCount )", "cellIndex doesn't index rgp.world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", cellIndex, rgp.world->dpvsPlanes.cellCount) )
      __debugbreak();
    world = rgp.world;
  }
  v9 = world->dpvsDyn.dynEntClientCount[1];
  v10 = (v9 + 31) >> 5;
  v34 = v10;
  v11 = &world->dpvsDyn.dynEntVisData[1][v8][localClientNum * v9];
  v12 = &world->dpvsDyn.dynEntCellBits[1][localClientNum * v10 + (unsigned __int64)(cellIndex * world->dpvsDyn.dynEntClientWordCount[1])];
  v13 = 0;
  v32 = v12;
  for ( i = 0; v13 < v10; v32 = v12 )
  {
    v14 = *v12;
    v15 = __lzcnt(*v12);
    if ( v15 < 0x20 )
    {
      v16 = 32 * v13;
      do
      {
        v17 = v16 + v15;
        if ( ((0x80000000 >> v15) & v14) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1617, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
          __debugbreak();
        v14 &= ~(0x80000000 >> v15);
        if ( !v11[v17] )
        {
          v18 = v17 & 0x7FFFF;
          DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)((unsigned int)v17 >> 19));
          if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
            __debugbreak();
          if ( v18 >= DynEntityList->dynEntCount[1] )
          {
            LODWORD(v31) = DynEntityList->dynEntCount[1];
            LODWORD(v30) = v17 & 0x7FFFF;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          v20 = (__int64)&DynEntityList->dynEntDefList[1][v18];
          if ( *(_QWORD *)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1624, ASSERT_TYPE_ASSERT, "(!dynEntDef->baseModel)", (const char *)&queryFormat, "!dynEntDef->baseModel") )
            __debugbreak();
          if ( !*(_WORD *)(v20 + 66) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1625, ASSERT_TYPE_ASSERT, "(dynEntDef->brushModel)", (const char *)&queryFormat, "dynEntDef->brushModel") )
            __debugbreak();
          BrushModel = R_GetBrushModel(*(unsigned __int16 *)(v20 + 66));
          v22 = 0;
          if ( (int)planeCount <= 0 )
          {
LABEL_28:
            v11[(unsigned int)v17] = 1;
          }
          else
          {
            v23 = BrushModel->writable.bounds.halfSize.v[0];
            v24 = BrushModel->writable.bounds.midPoint.v[0];
            v25 = BrushModel->writable.bounds.midPoint.v[1];
            v26 = BrushModel->writable.bounds.halfSize.v[1];
            v27 = BrushModel->writable.bounds.midPoint.v[2];
            v28 = BrushModel->writable.bounds.halfSize.v[2];
            v29 = &planes->coeffs.xyz + 1;
            while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v29[-1].v[0]) & _xmm) * v23) + (float)((float)(v24 * v29[-1].v[0]) + v29->v[0])) + (float)(v25 * v29[-1].v[1])) + (float)(COERCE_FLOAT(LODWORD(v29[-1].v[1]) & _xmm) * v26)) + (float)(v27 * v29[-1].v[2])) + (float)(COERCE_FLOAT(LODWORD(v29[-1].v[2]) & _xmm) * v28)) > 0.0 )
            {
              ++v22;
              v29 = (vec3_t *)((char *)v29 + 16);
              if ( v22 >= (int)planeCount )
                goto LABEL_28;
            }
          }
        }
        v15 = __lzcnt(v14);
      }
      while ( v15 < 0x20 );
      v13 = i;
      v12 = v32;
      v10 = v34;
    }
    ++v13;
    ++v12;
    i = v13;
  }
}

/*
==============
R_CullDynamicPointLightsInCameraView
==============
*/
void R_CullDynamicPointLightsInCameraView(int viewInfoIndex)
{
  __int64 v2; 
  volatile int v3; 
  unsigned int frustumPlaneCount; 
  DpvsPlane *frustumPlanes; 
  unsigned int v6; 
  volatile int v7; 
  int v8; 
  vec3_t *p_origin; 
  float v10; 
  float v11; 
  int v12; 
  vec3_t *v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int clipPlaneCount; 
  Bounds bounds; 

  v2 = viewInfoIndex;
  *(_QWORD *)scene.isDynamicOmniLightCulled = 0i64;
  v3 = 0;
  frustumPlaneCount = dpvsGlob.views[v2][0].frustumPlaneCount;
  frustumPlanes = dpvsGlob.views[v2][0].frustumPlanes;
  clipPlaneCount = frustumPlaneCount;
  if ( r_umbraCullDynLights->current.integer )
  {
    v6 = 0;
    v7 = 0;
    if ( scene.dynamicOmniLightCount > 0 )
    {
      v8 = 1;
      p_origin = &scene.dynamicOmniLight[0].lightCommon.origin;
      do
      {
        v10 = p_origin[1].v[0];
        v11 = p_origin->v[1];
        bounds.midPoint.v[0] = p_origin->v[0];
        bounds.midPoint.v[2] = p_origin->v[2];
        bounds.midPoint.v[1] = v11;
        bounds.halfSize.v[0] = v10;
        bounds.halfSize.v[1] = v10;
        bounds.halfSize.v[2] = v10;
        if ( R_Umbra_IsBoxVisible(&bounds, 0, viewInfoIndex, 0) )
        {
          ++v6;
        }
        else
        {
          if ( (unsigned int)v7 >= 0x40 )
          {
            LODWORD(v15) = 64;
            LODWORD(v14) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v14, v15) )
              __debugbreak();
          }
          scene.isDynamicOmniLightCulled[(__int64)v7 >> 5] |= v8;
          if ( !R_CullPointAndRadius(p_origin, p_origin[1].v[0], frustumPlanes, clipPlaneCount) )
            ++v3;
        }
        ++v7;
        v8 = __ROL4__(v8, 1);
        p_origin = (vec3_t *)((char *)p_origin + 304);
      }
      while ( v7 < scene.dynamicOmniLightCount );
    }
    if ( r_umbraCullDynLights->current.integer == 2 && v3 != s_killedByUmbraPrev_0 )
    {
      s_killedByUmbraPrev_0 = v3;
      Com_Printf(8, "Umbra killed %d more dynamic omni lights. Total omni light count = %d\n", (unsigned int)v3, v6);
    }
  }
  else if ( scene.dynamicOmniLightCount > 0 )
  {
    v12 = 1;
    v13 = &scene.dynamicOmniLight[0].lightCommon.origin;
    do
    {
      if ( R_CullPointAndRadius(v13, v13[1].v[0], frustumPlanes, frustumPlaneCount) )
      {
        if ( (unsigned int)v3 >= 0x40 )
        {
          LODWORD(v15) = 64;
          LODWORD(v14) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        scene.isDynamicOmniLightCulled[(__int64)v3 >> 5] |= v12;
      }
      ++v3;
      frustumPlaneCount = clipPlaneCount;
      v13 = (vec3_t *)((char *)v13 + 304);
      v12 = __ROL4__(v12, 1);
    }
    while ( v3 < scene.dynamicOmniLightCount );
  }
}

/*
==============
R_CullDynamicSpotLightInCameraView
==============
*/
void R_CullDynamicSpotLightInCameraView(int viewInfoIndex)
{
  __int64 v1; 
  signed int frustumPlaneCount; 
  unsigned int v3; 
  unsigned int v4; 
  volatile int v5; 
  float *v6; 
  int v7; 
  __int64 v8; 
  signed int v9; 
  float *v10; 
  int v11; 
  bool v12; 
  unsigned int v13; 
  volatile int v14; 
  int v15; 
  float *v16; 
  signed int v17; 
  vec3_t *v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v22; 
  __int64 v23; 

  v1 = viewInfoIndex;
  *(_QWORD *)scene.isDynamicSpotLightCulled = 0i64;
  v23 = v1 * 8052;
  frustumPlaneCount = dpvsGlob.views[v1][0].frustumPlaneCount;
  if ( r_umbraCullDynLights->current.integer )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v22 = 0;
    if ( scene.dynamicSpotLightCount > 0 )
    {
      v6 = &scene.dynamicSpotLight[0].bounds.halfSize.v[2];
      v7 = 1;
      do
      {
        v8 = v5;
        R_CalcSpotLightPlanesAndBoundingBox(&scene.dynamicSpotLight[v8].lightCommon, (vec4_t (*)[6])scene.dynamicSpotLight[v8].planes, &scene.dynamicSpotLight[v8].bounds);
        if ( R_Umbra_IsBoxVisible(&scene.dynamicSpotLight[v8].bounds, 0, viewInfoIndex, 0) )
        {
          v3 = ++v22;
        }
        else
        {
          if ( (unsigned int)v5 >= 0x40 )
          {
            LODWORD(v20) = 64;
            LODWORD(v19) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v19, v20) )
              __debugbreak();
          }
          v9 = 0;
          scene.isDynamicSpotLightCulled[(__int64)v5 >> 5] |= v7;
          if ( frustumPlaneCount <= 0 )
          {
LABEL_12:
            v11 = 0;
          }
          else
          {
            v10 = (float *)((char *)&dpvsGlob.views[0][0].frustumPlanes[0].coeffs.v[3] + v23);
            while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v10 - 3) & _xmm) * *(v6 - 2)) + (float)((float)(*(v6 - 5) * *(v10 - 3)) + *v10)) + (float)(*(v6 - 4) * *(v10 - 2))) + (float)(COERCE_FLOAT(*(_DWORD *)(v10 - 2) & _xmm) * *(v6 - 1))) + (float)(*(v6 - 3) * *(v10 - 1))) + (float)(COERCE_FLOAT(*(_DWORD *)(v10 - 1) & _xmm) * *v6)) > 0.0 )
            {
              ++v9;
              v10 += 4;
              if ( v9 >= frustumPlaneCount )
                goto LABEL_12;
            }
            v11 = 1;
          }
          v12 = v11 == 0;
          v13 = v4 + 1;
          v3 = v22;
          if ( !v12 )
            v13 = v4;
          v4 = v13;
        }
        ++v5;
        v7 = __ROL4__(v7, 1);
        v6 += 76;
      }
      while ( v5 < scene.dynamicSpotLightCount );
    }
    if ( r_umbraCullDynLights->current.integer == 2 && v4 != s_killedByUmbraPrev )
    {
      s_killedByUmbraPrev = v4;
      Com_Printf(8, "Umbra killed %d more dynamic spot lights. Final spot light count = %d\n", v4, v3);
    }
  }
  else
  {
    v14 = 0;
    if ( scene.dynamicSpotLightCount > 0 )
    {
      v15 = 1;
      v16 = &scene.dynamicSpotLight[0].bounds.halfSize.v[2];
      do
      {
        R_CalcSpotLightPlanesAndBoundingBox(&scene.dynamicSpotLight[v14].lightCommon, (vec4_t (*)[6])scene.dynamicSpotLight[v14].planes, &scene.dynamicSpotLight[v14].bounds);
        v17 = 0;
        if ( frustumPlaneCount > 0 )
        {
          v18 = &dpvsGlob.views[v1][0].frustumPlanes[0].coeffs.xyz + 1;
          while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v18[-1].v[0]) & _xmm) * *(v16 - 2)) + (float)((float)(*(v16 - 5) * v18[-1].v[0]) + v18->v[0])) + (float)(*(v16 - 4) * v18[-1].v[1])) + (float)(COERCE_FLOAT(LODWORD(v18[-1].v[1]) & _xmm) * *(v16 - 1))) + (float)(*(v16 - 3) * v18[-1].v[2])) + (float)(COERCE_FLOAT(LODWORD(v18[-1].v[2]) & _xmm) * *v16)) > 0.0 )
          {
            ++v17;
            v18 = (vec3_t *)((char *)v18 + 16);
            if ( v17 >= frustumPlaneCount )
              goto LABEL_33;
          }
          if ( (unsigned int)v14 >= 0x40 )
          {
            LODWORD(v20) = 64;
            LODWORD(v19) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v19, v20) )
              __debugbreak();
          }
          scene.isDynamicSpotLightCulled[(__int64)v14 >> 5] |= v15;
        }
LABEL_33:
        ++v14;
        v15 = __ROL4__(v15, 1);
        v16 += 76;
      }
      while ( v14 < scene.dynamicSpotLightCount );
    }
  }
}

/*
==============
R_Dpvs_GetWiewOrgCell
==============
*/
__int64 R_Dpvs_GetWiewOrgCell()
{
  return (unsigned int)dpvsGlob.viewOrgCell;
}

/*
==============
R_DrawAllDynEnt
==============
*/
void R_DrawAllDynEnt(const LocalClientNum_t localClientNum, const GfxViewInfo *viewInfo)
{
  __m256i v3; 
  __int64 v4; 
  const GfxViewInfo *v5; 
  const dvar_t *v6; 
  __int64 v7; 
  volatile int *v8; 
  char v9; 
  unsigned int v10; 
  DynEntityClient *m_curNode; 
  __int64 v12; 
  __int64 v13; 
  const char *v14; 
  volatile __int32 *v15; 
  const char *v16; 
  volatile __int32 *v17; 
  unsigned __int8 *v18; 
  __int64 v19; 
  unsigned __int8 *v20; 
  __int64 v21; 
  unsigned __int8 *v22; 
  unsigned __int8 *v23; 
  unsigned __int8 *v24; 
  __int64 v25; 
  unsigned int dynEntDefId; 
  unsigned int v27; 
  unsigned int v28; 
  DynEntityList *DynEntityList; 
  __int64 v30; 
  unsigned __int16 v31; 
  DynEntityClient *v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned __int8 v35; 
  unsigned __int64 v36; 
  char v37; 
  char v38; 
  char v39; 
  unsigned __int8 v40; 
  unsigned __int8 v41; 
  unsigned __int8 v42; 
  unsigned __int8 v43; 
  unsigned __int8 v44; 
  unsigned __int8 v45; 
  unsigned __int8 v46; 
  unsigned __int8 v47; 
  char v48; 
  LocalClientNum_t v49; 
  __int64 v50; 
  DynEntityPose **v51; 
  unsigned __int16 v52; 
  __int64 v53; 
  unsigned int v54; 
  GfxBrushModel *BrushModel; 
  GfxSceneDynBrush *v56; 
  bool v57; 
  __int64 v59; 
  __int64 v60; 
  bool enabled; 
  unsigned int timeoutUserData; 
  LocalClientNum_t localClientNuma; 
  __int16 v64; 
  DynEntCL_Active_Iterator v65; 
  unsigned __int64 v66; 
  DynEntCL_Active_Iterator v67; 
  unsigned int v68; 
  __int64 v69; 
  __int64 v70; 
  const GfxViewInfo *v71; 
  int data; 
  const GfxViewInfo *v73; 
  int v74; 
  unsigned int v75; 
  int v76; 
  const GfxViewInfo *v77; 
  unsigned int v78; 
  unsigned int v79; 
  int cmd; 
  const GfxViewInfo *v81; 
  unsigned int v82; 
  unsigned int v83; 
  const GfxViewInfo *v84; 
  __m256i v85; 
  volatile int sceneDynModelCount; 
  int v87; 
  volatile int sceneDynBrushCount; 
  int v89; 
  unsigned __int8 *v90; 
  unsigned __int8 *v91; 
  unsigned __int8 *v92; 
  unsigned __int8 *v93; 
  unsigned __int8 *v94; 
  unsigned __int8 *v95; 
  unsigned __int8 *v96; 
  unsigned __int8 *v97; 
  unsigned __int8 *v98; 
  unsigned __int8 *v99; 
  unsigned __int8 *v100; 
  __int64 v101; 

  v4 = localClientNum;
  v5 = viewInfo;
  v71 = viewInfo;
  localClientNuma = localClientNum;
  memset_0(&v90, 0, 0x60ui64);
  v6 = DVARBOOL_sm_spotUpdateMoreDynEnt;
  if ( !DVARBOOL_sm_spotUpdateMoreDynEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotUpdateMoreDynEnt") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  enabled = v6->current.enabled;
  Profile_Begin(544);
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2160, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  v7 = 8i64;
  v66 = 8052i64 * v5->viewInfoIndex;
  v8 = s_dynEntModelsCmdBatchAvailable;
  do
  {
    if ( ((unsigned __int8)v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v8) )
      __debugbreak();
    _InterlockedExchange(v8++, 1);
    --v7;
  }
  while ( v7 );
  timeoutUserData = 0;
  *(_QWORD *)&v67.m_curBasis = 0i64;
  *(_DWORD *)&v67.m_nextIndex = -1;
  v9 = 0;
  v67.m_curNode = NULL;
  v10 = 0;
  DynEntCL_Active_Iterator::Init(&v67, (LocalClientNum_t)v4, DYNENT_BASIS_MODEL);
  if ( DynEntCL_Active_Iterator::Advance(&v67) )
  {
    do
    {
      m_curNode = v67.m_curNode;
      if ( !v67.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2179, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      v12 = timeoutUserData;
      v13 = v10++;
      s_dynEntModelsCmdEntityBuffer[(unsigned __int64)timeoutUserData][v13] = m_curNode;
      if ( v10 == 128 )
      {
        v14 = j_va("Kick %u dyn ents in batch %u", 128i64, v12);
        Sys_ProfBeginNamedEvent(0xFFFF0000, v14);
        v74 = 128;
        data = v4;
        v73 = v5;
        v15 = &s_dynEntModelsCmdBatchAvailable[timeoutUserData];
        v75 = timeoutUserData;
        if ( ((unsigned __int8)v15 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_dynEntModelsCmdBatchAvailable[timeoutUserData]) )
          __debugbreak();
        LODWORD(v7) = 0;
        _InterlockedExchange(v15, 0);
        Sys_AddWorkerCmd(WRKCMD_DRAW_DYNENTS, &data);
        v9 = 1;
        Sys_ProcessWorkerCmdsOnlyOfTypeWithTimeout(WRKCMD_DRAW_DYNENTS, R_DrawDynEntModelsCmdTimeout, &timeoutUserData);
        v10 = 0;
        Sys_ProfEndNamedEvent();
      }
      else
      {
        LODWORD(v7) = 0;
      }
    }
    while ( DynEntCL_Active_Iterator::Advance(&v67) );
    if ( v10 )
    {
      if ( v9 )
      {
        v16 = j_va("Kick remaining %u dyn ents in batch %u", v10, timeoutUserData);
        Sys_ProfBeginNamedEvent(0xFFFF0000, v16);
        v78 = v10;
        v76 = v4;
        v77 = v5;
        v17 = &s_dynEntModelsCmdBatchAvailable[timeoutUserData];
        v79 = timeoutUserData;
        if ( ((unsigned __int8)v17 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_dynEntModelsCmdBatchAvailable[timeoutUserData]) )
          __debugbreak();
        _InterlockedExchange(v17, 0);
        Sys_AddWorkerCmd(WRKCMD_DRAW_DYNENTS, &v76);
        Sys_ProfEndNamedEvent();
      }
      else
      {
        if ( timeoutUserData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2227, ASSERT_TYPE_ASSERT, "(batchIndex == 0)", (const char *)&queryFormat, "batchIndex == 0") )
          __debugbreak();
        v83 = timeoutUserData;
        cmd = v4;
        v82 = v10;
        v81 = v5;
        R_DrawDynEntModelsCmd(&cmd);
      }
    }
  }
  v18 = rgp.world->dpvsDyn.dynEntVisData[1][11];
  v19 = (unsigned int)(v4 * rgp.world->dpvsDyn.dynEntClientCount[1]);
  v20 = &rgp.world->dpvsDyn.dynEntVisData[1][10][v19];
  v90 = &rgp.world->dpvsDyn.dynEntVisData[1][0][v19];
  v21 = (__int64)&v18[v19];
  v22 = &rgp.world->dpvsDyn.dynEntVisData[1][1][v19];
  v100 = v20;
  v91 = v22;
  v23 = &rgp.world->dpvsDyn.dynEntVisData[1][2][v19];
  v101 = v21;
  v92 = v23;
  v93 = &rgp.world->dpvsDyn.dynEntVisData[1][3][v19];
  v94 = &rgp.world->dpvsDyn.dynEntVisData[1][4][v19];
  v95 = &rgp.world->dpvsDyn.dynEntVisData[1][5][v19];
  v96 = &rgp.world->dpvsDyn.dynEntVisData[1][6][v19];
  v97 = &rgp.world->dpvsDyn.dynEntVisData[1][7][v19];
  v98 = &rgp.world->dpvsDyn.dynEntVisData[1][8][v19];
  v24 = &rgp.world->dpvsDyn.dynEntVisData[1][9][v19];
  *(_QWORD *)&v65.m_curBasis = 0i64;
  v99 = v24;
  *(_DWORD *)&v65.m_nextIndex = -1;
  v65.m_curNode = NULL;
  DynEntCL_Active_Iterator::Init(&v65, (LocalClientNum_t)v4, DYNENT_BASIS_BRUSH);
  if ( DynEntCL_Active_Iterator::Advance(&v65) )
  {
    v25 = 2 * v4 + 56;
    v69 = v4;
    v70 = v25;
    do
    {
      if ( !v65.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 142, ASSERT_TYPE_ASSERT, "(m_curNode)", (const char *)&queryFormat, "m_curNode") )
        __debugbreak();
      dynEntDefId = v65.m_curNode->dynEntDefId;
      v27 = dynEntDefId >> 19;
      v28 = dynEntDefId & 0x7FFFF;
      v68 = v28;
      v64 = v27;
      DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v27);
      if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( v28 >= DynEntityList->dynEntCount[1] )
      {
        LODWORD(v60) = DynEntityList->dynEntCount[1];
        LODWORD(v59) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v59, v60) )
          __debugbreak();
      }
      v30 = (__int64)&DynEntityList->dynEntDefList[1][v28];
      if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2254, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      v31 = *(_WORD *)(v25 + v30);
      v32 = v65.m_curNode;
      if ( !v65.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2257, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      v33 = (__int64)v92;
      v34 = (__int64)v91;
      v35 = v92[v31];
      if ( (v35 & 1) == 0 )
        v91[v31] = v35;
      v36 = v66;
      v37 = 0;
      if ( v90 )
      {
        if ( (dpvsGlob.views[v66 / 0x1F74][0].dynEntRenderFlags & (v32->flags ^ dpvsGlob.views[v66 / 0x1F74][0].dynEntRenderFlagsMask)) == dpvsGlob.views[v66 / 0x1F74][0].dynEntRenderFlags )
          v37 = v90[v31];
        v33 = (__int64)v92;
        v90[v31] = v37;
      }
      if ( v34 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][1].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][1].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][1].dynEntRenderFlags + v36) )
          v38 = *(_BYTE *)(v34 + v31);
        else
          v38 = 0;
        *(_BYTE *)(v34 + v31) = v38;
        v37 |= v38;
      }
      if ( v33 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][2].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][2].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][2].dynEntRenderFlags + v36) )
          v39 = *(_BYTE *)(v31 + v33);
        else
          v39 = 0;
        *(_BYTE *)(v31 + v33) = v39;
        v37 |= v39;
      }
      if ( v93 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][3].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][3].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][3].dynEntRenderFlags + v36) )
          v40 = v93[v31];
        else
          v40 = 0;
        v93[v31] = v40;
        v37 |= v40;
      }
      if ( v94 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][4].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][4].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][4].dynEntRenderFlags + v36) )
          v41 = v94[v31];
        else
          v41 = 0;
        v94[v31] = v41;
        v37 |= v41;
      }
      if ( v95 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][5].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][5].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][5].dynEntRenderFlags + v36) )
          v42 = v95[v31];
        else
          v42 = 0;
        v95[v31] = v42;
        v37 |= v42;
      }
      if ( v96 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][6].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][6].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][6].dynEntRenderFlags + v36) )
          v43 = v96[v31];
        else
          v43 = 0;
        v96[v31] = v43;
        v37 |= v43;
      }
      if ( v97 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][7].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][7].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][7].dynEntRenderFlags + v36) )
          v44 = v97[v31];
        else
          v44 = 0;
        v97[v31] = v44;
        v37 |= v44;
      }
      if ( v98 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][8].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][8].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][8].dynEntRenderFlags + v36) )
          v45 = v98[v31];
        else
          v45 = 0;
        v98[v31] = v45;
        v37 |= v45;
      }
      if ( v99 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][9].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][9].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][9].dynEntRenderFlags + v36) )
          v46 = v99[v31];
        else
          v46 = 0;
        v99[v31] = v46;
        v37 |= v46;
      }
      if ( v20 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][10].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][10].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][10].dynEntRenderFlags + v36) )
          v47 = v20[v31];
        else
          v47 = 0;
        v20[v31] = v47;
        v37 |= v47;
      }
      if ( v21 )
      {
        if ( (*(unsigned int *)((_BYTE *)&dpvsGlob.views[0][11].dynEntRenderFlags + v36) & (*(unsigned int *)((char *)&dpvsGlob.views[0][11].dynEntRenderFlagsMask + v36) ^ v32->flags)) == *(unsigned int *)((char *)&dpvsGlob.views[0][11].dynEntRenderFlags + v36) )
          v48 = *(_BYTE *)(v31 + v21);
        else
          v48 = 0;
        *(_BYTE *)(v31 + v21) = v48;
        v37 |= v48;
      }
      v49 = localClientNuma;
      if ( enabled && R_IsDynEntClientVisibleToAnyShadowedPrimaryLight(localClientNuma, frontEndDataOut, v31, DYNENT_BASIS_BRUSH) )
        v37 = 1;
      if ( (v37 & 1) != 0 )
      {
        if ( (unsigned int)v49 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v60) = 2;
          LODWORD(v59) = v49;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v59, v60) )
            __debugbreak();
        }
        v50 = v69;
        v51 = &g_dynEntPoseLists[v69][1];
        if ( !*v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v52 = g_dynEntClientEntsAllocCount[v50][1];
        if ( v31 >= v52 )
        {
          LODWORD(v60) = v52;
          LODWORD(v59) = v31;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v59, v60) )
            __debugbreak();
        }
        v53 = (__int64)&(*v51)[v31];
        if ( *(_QWORD *)v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2283, ASSERT_TYPE_ASSERT, "(!dynEntDef->baseModel)", (const char *)&queryFormat, "!dynEntDef->baseModel") )
          __debugbreak();
        v54 = *(unsigned __int16 *)(v30 + 66);
        if ( !*(_WORD *)(v30 + 66) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2286, ASSERT_TYPE_ASSERT, "(brushModel)", (const char *)&queryFormat, "brushModel") )
          __debugbreak();
        BrushModel = R_GetBrushModel(v54);
        if ( BrushModel->surfaceCount )
        {
          v56 = &rgp.world->sceneDynBrush[scene.sceneDynBrushCount];
          if ( R_DrawBModel(&v56->info, BrushModel, (const GfxPlacement *)(v53 + 60), NULL) )
          {
            v56->dynEntClientId = v31;
            v21 = v101;
            v20 = v100;
            ++scene.sceneDynBrushCount;
          }
          else
          {
            if ( v90 )
              v90[v31] = 0;
            if ( v91 )
              v91[v31] = 0;
            if ( v92 )
              v92[v31] = 0;
            if ( v93 )
              v93[v31] = 0;
            if ( v94 )
              v94[v31] = 0;
            if ( v95 )
              v95[v31] = 0;
            if ( v96 )
              v96[v31] = 0;
            if ( v97 )
              v97[v31] = 0;
            if ( v98 )
              v98[v31] = 0;
            if ( v99 )
              v99[v31] = 0;
            v20 = v100;
            if ( v100 )
              v100[v31] = 0;
            v21 = v101;
            if ( v101 )
              *(_BYTE *)(v31 + v101) = 0;
          }
        }
      }
      v57 = DynEntCL_Active_Iterator::Advance(&v65);
      v25 = v70;
    }
    while ( v57 );
    v5 = v71;
    LODWORD(v7) = 0;
  }
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_DRAW_DYNENTS);
  if ( !rg.drawDynEnts )
  {
    scene.sceneDynModelCount = v7;
    scene.sceneDynBrushCount = v7;
  }
  sceneDynModelCount = scene.sceneDynModelCount;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  sceneDynBrushCount = scene.sceneDynBrushCount;
  v85 = v3;
  v87 = v7;
  v89 = v7;
  v84 = v5;
  Sys_AddWorkerCmd(WRKCMD_ADD_SCENE_ENT, &v84);
  Profile_EndInternal(NULL);
}

/*
==============
R_DrawAllSceneEnt
==============
*/
void R_DrawAllSceneEnt(const SceneEntCmd *sceneEntCmd)
{
  const SceneEntCmd *v1; 
  __int64 sceneDObjBegin; 
  unsigned int *v3; 
  DpvsView *v4; 
  const GfxBackEndData *data; 
  unsigned __int16 opaqueCascadeCount; 
  unsigned int sceneDObjEnd; 
  char *v8; 
  unsigned int v9; 
  const char *Name; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  unsigned int v13; 
  unsigned __int8 v14; 
  unsigned __int8 *v15; 
  unsigned __int8 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  char v21; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  unsigned __int8 v24; 
  unsigned __int8 v25; 
  unsigned __int8 v26; 
  unsigned __int8 v27; 
  unsigned __int8 v28; 
  unsigned __int8 v29; 
  unsigned __int8 v30; 
  unsigned __int8 v31; 
  unsigned __int8 v32; 
  char v33; 
  const char *v34; 
  unsigned __int8 v35; 
  unsigned __int8 v36; 
  char v37; 
  unsigned __int8 v38; 
  unsigned __int8 v39; 
  unsigned __int8 v40; 
  unsigned __int8 v41; 
  unsigned __int8 v42; 
  unsigned __int8 v43; 
  unsigned __int8 v44; 
  unsigned __int8 v45; 
  unsigned __int8 v46; 
  unsigned __int8 *v47; 
  unsigned __int8 v48; 
  unsigned __int8 v49; 
  unsigned __int8 v50; 
  __int64 sceneModelBegin; 
  unsigned int sceneModelEnd; 
  __int64 v53; 
  char *v54; 
  unsigned __int8 v55; 
  __int64 v56; 
  unsigned __int8 v57; 
  unsigned __int8 v58; 
  unsigned __int8 *v59; 
  unsigned __int8 *v60; 
  unsigned __int8 v61; 
  char v62; 
  unsigned __int8 v63; 
  unsigned __int8 *v64; 
  unsigned __int8 *v65; 
  unsigned __int8 v66; 
  unsigned __int8 v67; 
  unsigned __int8 v68; 
  char v69; 
  unsigned __int8 v70; 
  char v71; 
  unsigned __int8 v72; 
  int v73; 
  __int64 v74; 
  __int64 v75; 
  unsigned __int8 *v76; 
  unsigned __int8 v77; 
  __int64 sceneBrushBegin; 
  __int64 v79; 
  GfxSceneBrush *v80; 
  unsigned __int64 entnum; 
  unsigned __int8 v82; 
  unsigned __int8 v83; 
  unsigned int sceneEntRenderFlags; 
  int v85; 
  unsigned __int8 v86; 
  unsigned __int8 v87; 
  char v88; 
  unsigned __int8 v89; 
  char v90; 
  unsigned __int8 v91; 
  char v92; 
  unsigned __int8 v93; 
  char v94; 
  unsigned __int8 v95; 
  char v96; 
  unsigned __int8 v97; 
  char v98; 
  unsigned __int8 v99; 
  char v100; 
  unsigned __int8 v101; 
  char v102; 
  unsigned __int8 v103; 
  char v104; 
  unsigned __int8 v105; 
  char v106; 
  unsigned __int8 v107; 
  unsigned __int8 v108; 
  unsigned __int8 v109; 
  char v110; 
  unsigned __int8 v111; 
  char v112; 
  unsigned __int8 v113; 
  char v114; 
  unsigned __int8 v115; 
  char v116; 
  unsigned __int8 v117; 
  char v118; 
  unsigned __int8 v119; 
  char v120; 
  unsigned __int8 v121; 
  char v122; 
  unsigned __int8 v123; 
  char v124; 
  unsigned __int8 v125; 
  char v126; 
  unsigned __int8 v127; 
  char v128; 
  unsigned __int8 v129; 
  const GfxPlacement *p_prevPlacement; 
  unsigned int *entOverflowedDrawBuf; 
  unsigned __int64 v132; 
  __int64 v133; 
  GfxPlacement *part0Placement; 
  unsigned __int16 v135; 
  unsigned int v136; 
  int v137; 
  char *v138; 
  __int64 v139; 
  unsigned int sceneBrushEnd; 
  unsigned int *v141; 
  __int64 v142; 
  GfxScene *v143; 
  unsigned __int8 *v145; 
  unsigned __int8 *v146; 
  unsigned __int8 *v147; 
  unsigned __int8 *v148; 
  unsigned __int8 *v149; 
  unsigned __int8 *v150; 
  unsigned __int8 *v151; 
  unsigned __int8 *v152; 
  unsigned __int8 *v153; 
  unsigned __int8 *v154; 
  unsigned __int8 *v155; 
  __int64 v156; 
  GfxScene *sceneDObjVisData; 
  unsigned __int8 *v158; 
  unsigned __int8 *v159; 
  unsigned __int8 *v160; 
  unsigned __int8 *v161; 
  unsigned __int8 *v162; 
  unsigned __int8 *v163; 
  unsigned __int8 *v164; 
  unsigned __int8 *v165; 
  unsigned __int8 *v166; 
  unsigned __int8 *v167; 
  unsigned __int8 *v168; 

  v1 = sceneEntCmd;
  if ( !Sys_IsMainThread2() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1675, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread2())", (const char *)&queryFormat, "Sys_IsMainThread2()") )
    __debugbreak();
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1676, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  sceneDObjBegin = (unsigned int)v1->sceneDObjBegin;
  v137 = sceneDObjBegin;
  v3 = scene.dpvs.entVisBits[scene.dpvs.localClientNum];
  v141 = v3;
  v4 = dpvsGlob.views[v1->viewInfo->viewInfoIndex];
  data = v1->viewInfo->input.data;
  sceneDObjVisData = (GfxScene *)scene.sceneDObjVisData;
  v158 = scene.sceneDObjVisData[1];
  opaqueCascadeCount = data->sunShadow.opaqueCascadeCount;
  sceneDObjEnd = v1->sceneDObjEnd;
  v159 = scene.sceneDObjVisData[2];
  v160 = scene.sceneDObjVisData[3];
  v161 = scene.sceneDObjVisData[4];
  v162 = scene.sceneDObjVisData[5];
  v163 = scene.sceneDObjVisData[6];
  v164 = scene.sceneDObjVisData[7];
  v165 = scene.sceneDObjVisData[8];
  v166 = scene.sceneDObjVisData[9];
  v167 = scene.sceneDObjVisData[10];
  v168 = scene.sceneDObjVisData[11];
  v135 = opaqueCascadeCount;
  v136 = sceneDObjEnd;
  if ( (unsigned int)sceneDObjBegin < sceneDObjEnd )
  {
    v8 = (char *)&scene.sceneDObj[sceneDObjBegin] + 1388;
    v138 = v8;
    while ( 1 )
    {
      v9 = *((_DWORD *)v8 - 329);
      if ( (v9 & 0xFFFFFFFB) != 0 )
        break;
LABEL_66:
      sceneDObjBegin = (unsigned int)(sceneDObjBegin + 1);
      v8 += 1424;
      v137 = sceneDObjBegin;
      v138 = v8;
      if ( (unsigned int)sceneDObjBegin >= sceneDObjEnd )
      {
        v1 = sceneEntCmd;
        v3 = v141;
        goto LABEL_68;
      }
    }
    if ( v9 < 2 )
    {
      Name = DObjGetName(*(const DObj **)(v8 + 4));
      LODWORD(part0Placement) = v9;
      LODWORD(v133) = sceneDObjBegin;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1702, ASSERT_TYPE_ASSERT, "(state >= CULL_STATE_BOUNDED)", "%s\n\t%d %d '%s'", "state >= CULL_STATE_BOUNDED", v133, part0Placement, Name) )
        __debugbreak();
    }
    v11 = v160;
    v12 = v159;
    v13 = (*((_DWORD *)v8 - 1) >> 10) & 0xFFF;
    v147 = v160;
    v146 = v159;
    if ( opaqueCascadeCount > 2u )
    {
      v14 = v160[sceneDObjBegin];
      if ( (v14 & 1) == 0 )
        v159[sceneDObjBegin] = v14;
    }
    v15 = v158;
    v145 = v158;
    if ( opaqueCascadeCount > 1u )
    {
      v16 = v12[sceneDObjBegin];
      if ( (v16 & 1) == 0 )
        v158[sceneDObjBegin] = v16;
    }
    v17 = v13;
    v142 = v13;
    v18 = (unsigned int)sceneDObjBegin;
    if ( ((0x80000000 >> (v13 & 0x1F)) & v141[(unsigned __int64)v13 >> 5]) != 0 )
    {
      if ( (v4->sceneEntRenderFlags & (v4->sceneEntRenderFlagsMask ^ *(_DWORD *)v8 & 0xFFFFF)) == v4->sceneEntRenderFlags )
        v19 = scene.dpvs.entVisData[0][v13];
      else
        v19 = 0;
      *((_BYTE *)&sceneDObjVisData->codeEmissiveSurfs[0].drawGroup.fields + sceneDObjBegin) = v19;
      if ( (v4[1].sceneEntRenderFlags & (v4[1].sceneEntRenderFlagsMask ^ *(_DWORD *)v8 & 0xFFFFF)) == v4[1].sceneEntRenderFlags )
        v20 = scene.dpvs.entVisData[1][v13];
      else
        v20 = 0;
      v15[sceneDObjBegin] = v20;
      v21 = v20 | v19;
      if ( (v4[2].sceneEntRenderFlags & (v4[2].sceneEntRenderFlagsMask ^ *(_DWORD *)v8 & 0xFFFFF)) == v4[2].sceneEntRenderFlags )
        v22 = scene.dpvs.entVisData[2][v17];
      else
        v22 = 0;
      v12[sceneDObjBegin] = v22;
      v23 = v22 | v21;
      if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ *(_DWORD *)v8 & 0xFFFFF)) == v4[3].sceneEntRenderFlags )
        v24 = scene.dpvs.entVisData[3][v17];
      else
        v24 = 0;
      v11[sceneDObjBegin] = v24;
      v25 = scene.dpvs.entVisData[4][v17];
      v161[sceneDObjBegin] = v25;
      v26 = scene.dpvs.entVisData[5][v17];
      v162[sceneDObjBegin] = v26;
      v27 = scene.dpvs.entVisData[6][v17];
      v163[v18] = v27;
      v28 = scene.dpvs.entVisData[7][v17];
      v164[v18] = v28;
      v29 = scene.dpvs.entVisData[8][v17];
      v165[v18] = v29;
      v30 = scene.dpvs.entVisData[9][v142];
      v166[v18] = v30;
      v31 = scene.dpvs.entVisData[10][v142];
      v167[v18] = v31;
      v32 = scene.dpvs.entVisData[11][v142];
      v168[v18] = v32;
      v33 = v27 | v28 | v29 | v30 | v31 | v32;
      LODWORD(sceneDObjBegin) = v137;
      if ( (((unsigned __int8)(v24 | v25 | v26 | v33) | v23) & 1) != 0 )
      {
        if ( v137 - scene.sceneDObjFirstViewmodelIndex < scene.sceneDObjViewmodelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1733, ASSERT_TYPE_ASSERT, "((uint)(sceneEntIndex - scene.sceneDObjFirstViewmodelIndex) >= scene.sceneDObjViewmodelCount)", (const char *)&queryFormat, "(uint)(sceneEntIndex - scene.sceneDObjFirstViewmodelIndex) >= scene.sceneDObjViewmodelCount") )
          __debugbreak();
        if ( !*(_QWORD *)(v8 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1734, ASSERT_TYPE_ASSERT, "(sceneEnt->obj)", (const char *)&queryFormat, "sceneEnt->obj") )
          __debugbreak();
        R_SkinAndBoundSceneEnt((GfxSceneEntity *)(v8 - 1388), GfxViewDomain_World);
        if ( *((_DWORD *)v8 - 329) < 4u )
        {
          v34 = DObjGetName(*(const DObj **)(v8 + 4));
          LODWORD(part0Placement) = *((_DWORD *)v8 - 329);
          LODWORD(v133) = v137;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1738, ASSERT_TYPE_ASSERT, "(sceneEnt->cull.state >= CULL_STATE_DONE)", "%s\n\t%d %d '%s'", "sceneEnt->cull.state >= CULL_STATE_DONE", v133, part0Placement, v34) )
            __debugbreak();
        }
        opaqueCascadeCount = v135;
        if ( *((_DWORD *)v8 - 329) == 4 )
        {
          *((_BYTE *)&sceneDObjVisData->codeEmissiveSurfs[0].drawGroup.fields + v18) = 0;
          v158[v18] = 0;
          v159[v18] = 0;
          v160[v18] = 0;
          v161[v18] = 0;
          v162[v18] = 0;
          v163[v18] = 0;
          v164[v18] = 0;
          v165[v18] = 0;
          v166[v18] = 0;
          v167[v18] = 0;
          v168[v18] = 0;
        }
        goto LABEL_65;
      }
    }
    else
    {
      v35 = scene.dpvs.entVisData[0][v13];
      if ( !v35 )
        v35 = 1;
      v143 = sceneDObjVisData;
      if ( (v4->sceneEntRenderFlags & (v4->sceneEntRenderFlagsMask ^ *(_DWORD *)v8 & 0xFFFFF)) != v4->sceneEntRenderFlags )
        v35 = 0;
      *((_BYTE *)&sceneDObjVisData->codeEmissiveSurfs[0].drawGroup.fields + (unsigned int)sceneDObjBegin) = v35;
      v36 = scene.dpvs.entVisData[1][v13];
      if ( !v36 )
        v36 = 1;
      if ( (v4[1].sceneEntRenderFlags & (v4[1].sceneEntRenderFlagsMask ^ *(_DWORD *)v8 & 0xFFFFF)) != v4[1].sceneEntRenderFlags )
        v36 = 0;
      v15[(unsigned int)sceneDObjBegin] = v36;
      v37 = v36 | v35;
      v38 = scene.dpvs.entVisData[2][v13];
      if ( !v38 )
        v38 = 1;
      if ( (v4[2].sceneEntRenderFlags & (v4[2].sceneEntRenderFlagsMask ^ *(_DWORD *)v8 & 0xFFFFF)) != v4[2].sceneEntRenderFlags )
        v38 = 0;
      v12[(unsigned int)sceneDObjBegin] = v38;
      v39 = v38 | v37;
      v40 = scene.dpvs.entVisData[3][v13];
      if ( !v40 )
        v40 = 1;
      if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ *(_DWORD *)v138 & 0xFFFFF)) != v4[3].sceneEntRenderFlags )
        v40 = 0;
      v11[(unsigned int)sceneDObjBegin] = v40;
      v41 = scene.dpvs.entVisData[4][v13];
      v148 = v161;
      v161[(unsigned int)sceneDObjBegin] = v41;
      v42 = scene.dpvs.entVisData[5][v13];
      v149 = v162;
      v162[(unsigned int)sceneDObjBegin] = v42;
      v43 = scene.dpvs.entVisData[6][v13];
      v150 = v163;
      v163[v18] = v43;
      v44 = scene.dpvs.entVisData[7][v13];
      v151 = v164;
      v164[v18] = v44;
      v45 = scene.dpvs.entVisData[8][v13];
      v152 = v165;
      v165[v18] = v45;
      v46 = scene.dpvs.entVisData[9][v13];
      v47 = v166;
      v166[v18] = v46;
      v153 = v47;
      v48 = scene.dpvs.entVisData[10][v17];
      v154 = v167;
      v167[v18] = v48;
      v49 = scene.dpvs.entVisData[11][v17];
      v155 = v168;
      v168[v18] = v49;
      v50 = v40 | v41 | v42 | v43 | v44 | v45 | v46 | v48 | v49;
      v8 = v138;
      if ( ((v50 | v39) & 1) != 0 )
      {
        R_SkinAndBoundSceneEnt((GfxSceneEntity *)(v138 - 1388), GfxViewDomain_World);
        LODWORD(sceneDObjBegin) = v137;
        opaqueCascadeCount = v135;
        if ( *((_DWORD *)v138 - 329) <= 4u )
        {
          *((_BYTE *)&v143->codeEmissiveSurfs[0].drawGroup.fields + v18) = 0;
          v145[v18] = 0;
          v146[v18] = 0;
          v147[v18] = 0;
          v148[v18] = 0;
          v149[v18] = 0;
          v150[v18] = 0;
          v151[v18] = 0;
          v152[v18] = 0;
          v153[v18] = 0;
          v154[v18] = 0;
          v155[v18] = 0;
        }
        goto LABEL_65;
      }
      LODWORD(sceneDObjBegin) = v137;
    }
    opaqueCascadeCount = v135;
LABEL_65:
    sceneDObjEnd = v136;
    goto LABEL_66;
  }
LABEL_68:
  sceneModelBegin = (unsigned int)v1->sceneModelBegin;
  sceneModelEnd = v1->sceneModelEnd;
  sceneDObjVisData = (GfxScene *)scene.sceneModelVisData;
  v159 = scene.sceneModelVisData[2];
  v160 = scene.sceneModelVisData[3];
  v161 = scene.sceneModelVisData[4];
  v162 = scene.sceneModelVisData[5];
  v163 = scene.sceneModelVisData[6];
  v164 = scene.sceneModelVisData[7];
  v165 = scene.sceneModelVisData[8];
  v166 = scene.sceneModelVisData[9];
  v167 = scene.sceneModelVisData[10];
  v168 = scene.sceneModelVisData[11];
  v158 = scene.sceneModelVisData[1];
  if ( (unsigned int)sceneModelBegin < sceneModelEnd )
  {
    v53 = (unsigned int)sceneModelBegin;
    v54 = (char *)&scene.sceneModel[sceneModelBegin] + 124;
    v139 = sceneModelEnd - (unsigned int)sceneModelBegin;
    do
    {
      v55 = 0;
      v56 = (*((_DWORD *)v54 - 1) >> 10) & 0xFFF;
      if ( opaqueCascadeCount > 2u )
      {
        v57 = scene.sceneModelVisData[3][v53];
        if ( (v57 & 1) == 0 )
          scene.sceneModelVisData[2][v53] = v57;
      }
      if ( opaqueCascadeCount > 1u )
      {
        v58 = scene.sceneModelVisData[2][v53];
        if ( (v58 & 1) == 0 )
          scene.sceneModelVisData[1][v53] = v58;
      }
      if ( (_DWORD)v56 == gfxCfg.entnumNone )
      {
        v73 = *(_DWORD *)v54;
        v59 = &scene.sceneModelVisData[1][v53];
        v60 = &scene.sceneModelVisData[0][v53];
        if ( (v4->sceneEntRenderFlags & (v4->sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) == v4->sceneEntRenderFlags )
        {
          v55 = *v60;
        }
        else
        {
          *v60 = 0;
          v73 = *(_DWORD *)v54;
        }
        if ( (v4[1].sceneEntRenderFlags & (v4[1].sceneEntRenderFlagsMask ^ v73 & 0xFFFFF)) == v4[1].sceneEntRenderFlags )
        {
          v55 |= *v59;
        }
        else
        {
          *v59 = 0;
          v73 = *(_DWORD *)v54;
        }
        v64 = v59 + 1024;
        if ( (v4[2].sceneEntRenderFlags & (v4[2].sceneEntRenderFlagsMask ^ v73 & 0xFFFFF)) == v4[2].sceneEntRenderFlags )
        {
          v55 |= *v64;
        }
        else
        {
          *v64 = 0;
          v73 = *(_DWORD *)v54;
        }
        v65 = v59 + 2048;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ v73 & 0xFFFFF)) == v4[3].sceneEntRenderFlags )
          v55 |= *v65;
        else
          *v65 = 0;
      }
      else if ( ((0x80000000 >> (v56 & 0x1F)) & v3[(unsigned __int64)(unsigned int)v56 >> 5]) != 0 )
      {
        if ( (v4->sceneEntRenderFlags & (v4->sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) == v4->sceneEntRenderFlags )
          v55 = scene.dpvs.entVisData[0][v56];
        v59 = &scene.sceneModelVisData[1][v53];
        v60 = &scene.sceneModelVisData[0][v53];
        *v60 = v55;
        if ( (v4[1].sceneEntRenderFlags & (v4[1].sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) == v4[1].sceneEntRenderFlags )
          v61 = scene.dpvs.entVisData[1][v56];
        else
          v61 = 0;
        *v59 = v61;
        v62 = v61 | v55;
        if ( (v4[2].sceneEntRenderFlags & (v4[2].sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) == v4[2].sceneEntRenderFlags )
          v63 = scene.dpvs.entVisData[2][v56];
        else
          v63 = 0;
        v55 = v63 | v62;
        v64 = &scene.sceneModelVisData[2][v53];
        *v64 = v63;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) == v4[3].sceneEntRenderFlags )
        {
          v66 = scene.dpvs.entVisData[3][v56];
          v55 |= v66;
          v65 = &scene.sceneModelVisData[3][v53];
          *v65 = v66;
        }
        else
        {
          v65 = &scene.sceneModelVisData[3][v53];
          *v65 = 0;
        }
      }
      else
      {
        v59 = &scene.sceneModelVisData[1][v53];
        v60 = &scene.sceneModelVisData[0][v53];
        v67 = scene.dpvs.entVisData[0][v56];
        if ( !v67 )
          v67 = 1;
        if ( (v4->sceneEntRenderFlags & (v4->sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) != v4->sceneEntRenderFlags )
          v67 = 0;
        *v60 = v67;
        v68 = scene.dpvs.entVisData[1][v56];
        if ( !v68 )
          v68 = 1;
        if ( (v4[1].sceneEntRenderFlags & (v4[1].sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) != v4[1].sceneEntRenderFlags )
          v68 = 0;
        *v59 = v68;
        v69 = v68 | v67;
        v70 = scene.dpvs.entVisData[2][v56];
        if ( !v70 )
          v70 = 1;
        v64 = &scene.sceneModelVisData[2][v53];
        if ( (v4[2].sceneEntRenderFlags & (v4[2].sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) != v4[2].sceneEntRenderFlags )
          v70 = 0;
        *v64 = v70;
        v71 = v70 | v69;
        v72 = scene.dpvs.entVisData[3][v56];
        if ( !v72 )
          v72 = 1;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ *(_DWORD *)v54 & 0xFFFFF)) != v4[3].sceneEntRenderFlags )
          v72 = 0;
        v55 = v72 | v71;
        v65 = &scene.sceneModelVisData[3][v53];
        *v65 = v72;
      }
      v74 = 4i64;
      v75 = 8i64;
      do
      {
        v76 = scene.dpvs.entVisData[v74++];
        v77 = v76[(unsigned int)v56];
        v55 |= v77;
        *(_BYTE *)(v53 + *(__int64 *)((char *)&v156 + v74 * 8)) = v77;
        --v75;
      }
      while ( v75 );
      if ( (v55 & 1) != 0 && !R_SkinXModel((XModelDrawInfo *)(v54 - 124), *(const XModel **)(v54 - 116), *(const DObj **)(v54 - 108), (const GfxPlacement *)(v54 - 68), *((float *)v54 - 10), (const GfxPlacement *)(v54 - 36), *((float *)v54 - 2), NULL, NULL, 0, (*(_DWORD *)v54 & 0x200) != 0, *((_DWORD *)v54 - 1) & 0x3FF, *((_WORD *)v54 + 13), *((unsigned __int16 *)v54 + 12), *((float *)v54 + 4)) )
      {
        *v60 = 0;
        *v59 = 0;
        *v64 = 0;
        *v65 = 0;
        v59[3072] = 0;
        v59[4096] = 0;
        v59[5120] = 0;
        v59[6144] = 0;
        v59[7168] = 0;
        v59[0x2000] = 0;
        v59[9216] = 0;
        v59[10240] = 0;
      }
      opaqueCascadeCount = v135;
      v3 = v141;
      ++v53;
      v54 += 152;
      --v139;
    }
    while ( v139 );
    v1 = sceneEntCmd;
  }
  sceneBrushBegin = (unsigned int)v1->sceneBrushBegin;
  sceneBrushEnd = v1->sceneBrushEnd;
  if ( (unsigned int)sceneBrushBegin < sceneBrushEnd )
  {
    v79 = (unsigned int)sceneBrushBegin;
    do
    {
      v80 = &scene.sceneBrush[v79];
      entnum = v80->entnum;
      if ( (_DWORD)entnum == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1886, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
        __debugbreak();
      if ( v135 > 2u )
      {
        v82 = scene.sceneBrushVisData[3][sceneBrushBegin];
        if ( (v82 & 1) == 0 )
          scene.sceneBrushVisData[2][sceneBrushBegin] = v82;
      }
      if ( v135 > 1u )
      {
        v83 = scene.sceneBrushVisData[2][sceneBrushBegin];
        if ( (v83 & 1) == 0 )
          scene.sceneBrushVisData[1][sceneBrushBegin] = v83;
      }
      sceneEntRenderFlags = v4->sceneEntRenderFlags;
      v85 = sceneEntRenderFlags & (v80->renderFlags ^ v4->sceneEntRenderFlagsMask);
      if ( ((0x80000000 >> (entnum & 0x1F)) & v141[entnum >> 5]) != 0 )
      {
        if ( v85 == sceneEntRenderFlags )
          v86 = scene.dpvs.entVisData[0][entnum];
        else
          v86 = 0;
        scene.sceneBrushVisData[0][sceneBrushBegin] = v86;
        if ( (v4[1].sceneEntRenderFlags & (v80->renderFlags ^ v4[1].sceneEntRenderFlagsMask)) == v4[1].sceneEntRenderFlags )
          v87 = scene.dpvs.entVisData[1][entnum];
        else
          v87 = 0;
        v88 = v87 | v86;
        scene.sceneBrushVisData[1][sceneBrushBegin] = v87;
        if ( (v4[2].sceneEntRenderFlags & (v80->renderFlags ^ v4[2].sceneEntRenderFlagsMask)) == v4[2].sceneEntRenderFlags )
          v89 = scene.dpvs.entVisData[2][entnum];
        else
          v89 = 0;
        scene.sceneBrushVisData[2][sceneBrushBegin] = v89;
        v90 = v89 | v88;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ v80->renderFlags)) == v4[3].sceneEntRenderFlags )
          v91 = scene.dpvs.entVisData[3][entnum];
        else
          v91 = 0;
        v92 = v91 | v90;
        scene.sceneBrushVisData[3][sceneBrushBegin] = v91;
        if ( (v4[4].sceneEntRenderFlags & (v80->renderFlags ^ v4[4].sceneEntRenderFlagsMask)) == v4[4].sceneEntRenderFlags )
          v93 = scene.dpvs.entVisData[4][entnum];
        else
          v93 = 0;
        v94 = v93 | v92;
        scene.sceneBrushVisData[4][sceneBrushBegin] = v93;
        if ( (v4[5].sceneEntRenderFlags & (v4[5].sceneEntRenderFlagsMask ^ v80->renderFlags)) == v4[5].sceneEntRenderFlags )
          v95 = scene.dpvs.entVisData[5][entnum];
        else
          v95 = 0;
        v96 = v95 | v94;
        scene.sceneBrushVisData[5][sceneBrushBegin] = v95;
        if ( (v4[6].sceneEntRenderFlags & (v80->renderFlags ^ v4[6].sceneEntRenderFlagsMask)) == v4[6].sceneEntRenderFlags )
          v97 = scene.dpvs.entVisData[6][entnum];
        else
          v97 = 0;
        v98 = v97 | v96;
        scene.sceneBrushVisData[6][sceneBrushBegin] = v97;
        if ( (v4[7].sceneEntRenderFlags & (v80->renderFlags ^ v4[7].sceneEntRenderFlagsMask)) == v4[7].sceneEntRenderFlags )
          v99 = scene.dpvs.entVisData[7][entnum];
        else
          v99 = 0;
        v100 = v99 | v98;
        scene.sceneBrushVisData[7][sceneBrushBegin] = v99;
        if ( (v4[8].sceneEntRenderFlags & (v80->renderFlags ^ v4[8].sceneEntRenderFlagsMask)) == v4[8].sceneEntRenderFlags )
          v101 = scene.dpvs.entVisData[8][entnum];
        else
          v101 = 0;
        v102 = v101 | v100;
        scene.sceneBrushVisData[8][sceneBrushBegin] = v101;
        if ( (v4[9].sceneEntRenderFlags & (v4[9].sceneEntRenderFlagsMask ^ v80->renderFlags)) == v4[9].sceneEntRenderFlags )
          v103 = scene.dpvs.entVisData[9][entnum];
        else
          v103 = 0;
        v104 = v103 | v102;
        scene.sceneBrushVisData[9][sceneBrushBegin] = v103;
        if ( (v4[10].sceneEntRenderFlags & (v80->renderFlags ^ v4[10].sceneEntRenderFlagsMask)) == v4[10].sceneEntRenderFlags )
          v105 = scene.dpvs.entVisData[10][entnum];
        else
          v105 = 0;
        v106 = v105 | v104;
        scene.sceneBrushVisData[10][sceneBrushBegin] = v105;
        if ( (v4[11].sceneEntRenderFlags & (v80->renderFlags ^ v4[11].sceneEntRenderFlagsMask)) == v4[11].sceneEntRenderFlags )
        {
          v107 = scene.dpvs.entVisData[11][entnum];
          scene.sceneBrushVisData[11][sceneBrushBegin] = v107;
          v106 |= v107;
        }
        else
        {
          scene.sceneBrushVisData[11][sceneBrushBegin] = 0;
        }
      }
      else
      {
        if ( v85 != sceneEntRenderFlags || (v108 = scene.dpvs.entVisData[0][entnum]) == 0 )
          v108 = 1;
        scene.sceneBrushVisData[0][sceneBrushBegin] = v108;
        if ( (v4[1].sceneEntRenderFlags & (v80->renderFlags ^ v4[1].sceneEntRenderFlagsMask)) != v4[1].sceneEntRenderFlags || (v109 = scene.dpvs.entVisData[1][entnum]) == 0 )
          v109 = 1;
        v110 = v109 | v108;
        scene.sceneBrushVisData[1][sceneBrushBegin] = v109;
        if ( (v4[2].sceneEntRenderFlags & (v80->renderFlags ^ v4[2].sceneEntRenderFlagsMask)) != v4[2].sceneEntRenderFlags || (v111 = scene.dpvs.entVisData[2][entnum]) == 0 )
          v111 = 1;
        scene.sceneBrushVisData[2][sceneBrushBegin] = v111;
        v112 = v111 | v110;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ v80->renderFlags)) != v4[3].sceneEntRenderFlags || (v113 = scene.dpvs.entVisData[3][entnum]) == 0 )
          v113 = 1;
        v114 = v113 | v112;
        scene.sceneBrushVisData[3][sceneBrushBegin] = v113;
        if ( (v4[4].sceneEntRenderFlags & (v80->renderFlags ^ v4[4].sceneEntRenderFlagsMask)) != v4[4].sceneEntRenderFlags || (v115 = scene.dpvs.entVisData[4][entnum]) == 0 )
          v115 = 1;
        v116 = v115 | v114;
        scene.sceneBrushVisData[4][sceneBrushBegin] = v115;
        if ( (v4[5].sceneEntRenderFlags & (v4[5].sceneEntRenderFlagsMask ^ v80->renderFlags)) != v4[5].sceneEntRenderFlags || (v117 = scene.dpvs.entVisData[5][entnum]) == 0 )
          v117 = 1;
        v118 = v117 | v116;
        scene.sceneBrushVisData[5][sceneBrushBegin] = v117;
        if ( (v4[6].sceneEntRenderFlags & (v80->renderFlags ^ v4[6].sceneEntRenderFlagsMask)) != v4[6].sceneEntRenderFlags || (v119 = scene.dpvs.entVisData[6][entnum]) == 0 )
          v119 = 1;
        v120 = v119 | v118;
        scene.sceneBrushVisData[6][sceneBrushBegin] = v119;
        if ( (v4[7].sceneEntRenderFlags & (v80->renderFlags ^ v4[7].sceneEntRenderFlagsMask)) != v4[7].sceneEntRenderFlags || (v121 = scene.dpvs.entVisData[7][entnum]) == 0 )
          v121 = 1;
        v122 = v121 | v120;
        scene.sceneBrushVisData[7][sceneBrushBegin] = v121;
        if ( (v4[8].sceneEntRenderFlags & (v80->renderFlags ^ v4[8].sceneEntRenderFlagsMask)) != v4[8].sceneEntRenderFlags || (v123 = scene.dpvs.entVisData[8][entnum]) == 0 )
          v123 = 1;
        v124 = v123 | v122;
        scene.sceneBrushVisData[8][sceneBrushBegin] = v123;
        if ( (v4[9].sceneEntRenderFlags & (v4[9].sceneEntRenderFlagsMask ^ v80->renderFlags)) != v4[9].sceneEntRenderFlags || (v125 = scene.dpvs.entVisData[9][entnum]) == 0 )
          v125 = 1;
        v126 = v125 | v124;
        scene.sceneBrushVisData[9][sceneBrushBegin] = v125;
        if ( (v4[10].sceneEntRenderFlags & (v80->renderFlags ^ v4[10].sceneEntRenderFlagsMask)) != v4[10].sceneEntRenderFlags || (v127 = scene.dpvs.entVisData[10][entnum]) == 0 )
          v127 = 1;
        v128 = v127 | v126;
        scene.sceneBrushVisData[10][sceneBrushBegin] = v127;
        if ( (v4[11].sceneEntRenderFlags & (v80->renderFlags ^ v4[11].sceneEntRenderFlagsMask)) != v4[11].sceneEntRenderFlags || (v129 = scene.dpvs.entVisData[11][entnum]) == 0 )
          v129 = 1;
        v106 = v129 | v128;
        scene.sceneBrushVisData[11][sceneBrushBegin] = v129;
      }
      if ( (v106 & 1) != 0 )
      {
        p_prevPlacement = &v80->prevPlacement;
        if ( (v80->renderFlags & 0x200) == 0 )
          p_prevPlacement = NULL;
        if ( R_DrawBModel(&v80->info, v80->bmodel, &v80->placement, p_prevPlacement) )
        {
          if ( !v80->info.surfBufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1936, ASSERT_TYPE_ASSERT, "(sceneBrush->info.surfBufSize)", (const char *)&queryFormat, "sceneBrush->info.surfBufSize") )
            __debugbreak();
        }
        else
        {
          entOverflowedDrawBuf = scene.entOverflowedDrawBuf;
          v132 = v80->entnum;
          if ( !scene.entOverflowedDrawBuf && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", LODWORD(scene.entOverflowedDrawBuf) + 20, (AssertType)(LODWORD(scene.entOverflowedDrawBuf) + 1), "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          entOverflowedDrawBuf[v132 >> 5] |= 1 << (v132 & 0x1F);
          scene.sceneBrushVisData[0][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[1][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[2][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[3][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[4][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[5][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[6][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[7][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[8][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[9][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[10][sceneBrushBegin] = 0;
          scene.sceneBrushVisData[11][sceneBrushBegin] = 0;
        }
      }
      sceneBrushBegin = (unsigned int)(sceneBrushBegin + 1);
      ++v79;
    }
    while ( (unsigned int)sceneBrushBegin < sceneBrushEnd );
  }
}

/*
==============
R_DrawBModel
==============
*/
__int64 R_DrawBModel(BModelDrawInfo *bmodelInfo, const GfxBrushModel *bmodel, const GfxPlacement *placement, const GfxPlacement *prevPlacement)
{
  unsigned int surfaceCount; 
  volatile int *p_surfPos; 
  unsigned int v10; 
  signed __int32 v11; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  unsigned __int8 *v18; 
  unsigned __int8 **v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned __int8 *v22; 
  int v23; 
  GfxSurface *v24; 

  surfaceCount = bmodel->surfaceCount;
  if ( !surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1539, ASSERT_TYPE_ASSERT, "(visibleSurfaceCount)", (const char *)&queryFormat, "visibleSurfaceCount") )
    __debugbreak();
  p_surfPos = &frontEndDataOut->surfPos;
  v10 = 24 * surfaceCount + 28;
  if ( (((_BYTE)frontEndDataOut - 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frontEndDataOut->surfPos) )
    __debugbreak();
  v11 = _InterlockedExchangeAdd(p_surfPos, v10);
  if ( v11 + v10 <= 0x40000 )
  {
    if ( (v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1550, ASSERT_TYPE_ASSERT, "(!(startSurfPos & 3))", (const char *)&queryFormat, "!(startSurfPos & 3)") )
      __debugbreak();
    v13 = placement->quat.v[1];
    v14 = placement->quat.v[0];
    v15 = placement->quat.v[2];
    v16 = placement->quat.v[3];
    v17 = (float)((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15)) + (float)(v16 * v16);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1552, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( placement->quat ) )", "(%g, %g, %g, %g) len: %g", v14, v13, v15, v16, fsqrt(v17)) )
      __debugbreak();
    v18 = &frontEndDataOut->surfsBuffer[v11];
    *(vec4_t *)v18 = placement->quat;
    *((double *)v18 + 2) = *(double *)placement->origin.v;
    v19 = (unsigned __int8 **)(v18 + 28);
    *((_DWORD *)v18 + 6) = LODWORD(placement->origin.v[2]);
    v20 = truncate_cast<unsigned int,__int64>(v18 + 28 - (unsigned __int8 *)frontEndDataOut - 1789440);
    if ( (v20 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1558, ASSERT_TYPE_ASSERT, "(!(surfId & 3))", (const char *)&queryFormat, "!(surfId & 3)") )
      __debugbreak();
    bmodelInfo->surfId = v20 >> 2;
    v21 = 0;
    bmodelInfo->surfBufSize = v10;
    if ( prevPlacement )
    {
      v23 = R_AllocMotionBlurSurfs(28);
      if ( v23 >= 0 )
      {
        v22 = &frontEndDataOut->motionblurSurfsBuffer[v23];
        *(vec4_t *)v22 = prevPlacement->quat;
        *((double *)v22 + 2) = *(double *)prevPlacement->origin.v;
        *((_DWORD *)v22 + 6) = LODWORD(prevPlacement->origin.v[2]);
      }
      else
      {
        v22 = NULL;
      }
    }
    else
    {
      v22 = NULL;
    }
    v24 = &rgp.world->surfaces.surfaces[bmodel->startSurfIndex];
    if ( bmodel->surfaceCount )
    {
      do
      {
        v19[1] = (unsigned __int8 *)v24++;
        *v19 = v18;
        ++v21;
        v19[2] = v22;
        v19 += 3;
      }
      while ( v21 < bmodel->surfaceCount );
    }
    return 1i64;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAX_SCENE_SURFS_SIZE);
    return 0i64;
  }
}

/*
==============
R_DrawDynEntModelsCmd
==============
*/
void R_DrawDynEntModelsCmd(const void *const cmd)
{
  unsigned int *v1; 
  const dvar_t *v2; 
  __int64 v3; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  float scale; 
  float bias; 
  float cappedLodScale; 
  unsigned __int8 *v10; 
  __int64 v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  unsigned __int8 *v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  __int64 v19; 
  unsigned __int8 *v20; 
  __int64 v21; 
  unsigned __int8 *v22; 
  __int64 v23; 
  unsigned __int8 *v24; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  unsigned __int8 *v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  DynEntityList *DynEntityList; 
  const DynEntityDef *v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  char v38; 
  char v39; 
  char v40; 
  char v41; 
  char v42; 
  char v43; 
  char v44; 
  char v45; 
  char v46; 
  char v47; 
  char v48; 
  char v49; 
  char v50; 
  const XModel *v51; 
  unsigned __int16 v52; 
  DynEntityPose *v53; 
  float v54; 
  unsigned int UsableLodForDist; 
  double MaterialLodForDist; 
  unsigned int v60; 
  bool v61; 
  bool v62; 
  unsigned int mapEntLookup; 
  unsigned __int8 numParts; 
  DynEnt_ExtraPosePart *v65; 
  __int64 v66; 
  GfxSceneDynModel *sceneDynModel; 
  volatile signed __int32 *v68; 
  GfxPlacement *placementPrevFrame; 
  __int64 scalePrevFrame; 
  GfxPlacement *part0Placement; 
  GfxPlacement *extraPartPlacements; 
  bool enabled; 
  unsigned int v74; 
  int v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  int v88; 
  __int64 v89; 
  __int64 v91; 
  XModelDrawInfo modelInfo; 
  int v93; 
  MaterialLodSettings materialLodSettings; 
  __int64 v95; 
  __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 

  v1 = (unsigned int *)cmd;
  memset_0(&v95, 0, 0x60ui64);
  v2 = DVARBOOL_sm_spotUpdateMoreDynEnt;
  if ( !DVARBOOL_sm_spotUpdateMoreDynEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotUpdateMoreDynEnt") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  enabled = v2->current.enabled;
  v3 = (int)*v1;
  v74 = *v1;
  v4 = v1[5];
  v88 = v4;
  v5 = j_va("DynEnt batch %u", (unsigned int)v4);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v5);
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1980, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  v6 = *(int *)(*((_QWORD *)v1 + 1) + 11712i64);
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1984, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  scale = rg.correctedLodParms.ramp.scale;
  bias = rg.correctedLodParms.ramp.bias;
  cappedLodScale = rg.correctedLodParms.cappedLodScale;
  v10 = rgp.world->dpvsDyn.dynEntVisData[0][0];
  if ( v10 )
  {
    v11 = (__int64)&v10[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v95 = v11;
  }
  else
  {
    v11 = v95;
  }
  v78 = v11;
  v12 = rgp.world->dpvsDyn.dynEntVisData[0][1];
  if ( v12 )
  {
    v76 = (__int64)&v12[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v96 = v76;
  }
  else
  {
    v76 = v96;
  }
  v13 = rgp.world->dpvsDyn.dynEntVisData[0][2];
  if ( v13 )
  {
    v77 = (__int64)&v13[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v97 = v77;
  }
  else
  {
    v77 = v97;
  }
  v14 = rgp.world->dpvsDyn.dynEntVisData[0][3];
  if ( v14 )
  {
    v15 = (__int64)&v14[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v98 = v15;
  }
  else
  {
    v15 = v98;
  }
  v79 = v15;
  v16 = rgp.world->dpvsDyn.dynEntVisData[0][4];
  if ( v16 )
  {
    v17 = (__int64)&v16[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v99 = v17;
  }
  else
  {
    v17 = v99;
  }
  v80 = v17;
  v18 = rgp.world->dpvsDyn.dynEntVisData[0][5];
  if ( v18 )
  {
    v19 = (__int64)&v18[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v100 = v19;
  }
  else
  {
    v19 = v100;
  }
  v81 = v19;
  v20 = rgp.world->dpvsDyn.dynEntVisData[0][6];
  if ( v20 )
  {
    v21 = (__int64)&v20[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v101 = v21;
  }
  else
  {
    v21 = v101;
  }
  v82 = v21;
  v22 = rgp.world->dpvsDyn.dynEntVisData[0][7];
  if ( v22 )
  {
    v23 = (__int64)&v22[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v102 = v23;
  }
  else
  {
    v23 = v102;
  }
  v83 = v23;
  v24 = rgp.world->dpvsDyn.dynEntVisData[0][8];
  if ( v24 )
  {
    v84 = (__int64)&v24[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v103 = v84;
    v1 = (unsigned int *)cmd;
  }
  else
  {
    v84 = v103;
  }
  v25 = rgp.world->dpvsDyn.dynEntVisData[0][9];
  if ( v25 )
  {
    v85 = (__int64)&v25[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v104 = v85;
  }
  else
  {
    v85 = v104;
  }
  v26 = rgp.world->dpvsDyn.dynEntVisData[0][10];
  if ( v26 )
  {
    v86 = (__int64)&v26[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v105 = v86;
  }
  else
  {
    v86 = v105;
  }
  v27 = rgp.world->dpvsDyn.dynEntVisData[0][11];
  if ( v27 )
  {
    v87 = (__int64)&v27[(unsigned int)(v3 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v106 = v87;
  }
  else
  {
    v87 = v106;
  }
  if ( v1[4] > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2004, ASSERT_TYPE_ASSERT, "(data->count <= ( sizeof( *array_counter( s_dynEntModelsCmdEntityBuffer[batchIndex] ) ) + 0 ))", (const char *)&queryFormat, "data->count <= ARRAY_COUNT( s_dynEntModelsCmdEntityBuffer[batchIndex] )") )
    __debugbreak();
  v28 = 0i64;
  v75 = 0;
  if ( v1[4] )
  {
    v29 = v3;
    v89 = v3;
    v30 = v4 << 7;
    v91 = v4 << 7;
    while ( 1 )
    {
      v31 = *((_QWORD *)&s_dynEntModelsCmdEntityBuffer[0][v30] + v28);
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2009, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      v32 = *(_DWORD *)(v31 + 8) & 0x7FFFF;
      DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)(*(_DWORD *)(v31 + 8) >> 19));
      if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( (unsigned int)v32 >= DynEntityList->dynEntCount[0] )
      {
        LODWORD(scalePrevFrame) = DynEntityList->dynEntCount[0];
        LODWORD(placementPrevFrame) = v32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
          __debugbreak();
      }
      v34 = &DynEntityList->dynEntDefList[0][v32];
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2012, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      v35 = v34->clientId[v29];
      v36 = (unsigned int)v35;
      v37 = v77;
      v38 = *(_BYTE *)(v77 + v35);
      if ( (v38 & 1) == 0 )
        *(_BYTE *)(v76 + v35) = v38;
      v39 = 0;
      if ( v78 )
      {
        if ( (dpvsGlob.views[v6][0].dynEntRenderFlags & (*(unsigned __int16 *)(v31 + 28) ^ dpvsGlob.views[v6][0].dynEntRenderFlagsMask)) == dpvsGlob.views[v6][0].dynEntRenderFlags )
          v39 = *(_BYTE *)((unsigned int)v35 + v78);
        *(_BYTE *)((unsigned int)v35 + v78) = v39;
        v37 = v77;
      }
      if ( v76 )
      {
        v40 = 0;
        if ( (dpvsGlob.views[v6][1].dynEntRenderFlags & (dpvsGlob.views[v6][1].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][1].dynEntRenderFlags )
          v40 = *(_BYTE *)(v76 + (unsigned int)v35);
        *(_BYTE *)(v76 + (unsigned int)v35) = v40;
        v39 |= v40;
      }
      if ( v37 )
      {
        v41 = 0;
        if ( (dpvsGlob.views[v6][2].dynEntRenderFlags & (dpvsGlob.views[v6][2].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][2].dynEntRenderFlags )
          v41 = *(_BYTE *)(v37 + (unsigned int)v35);
        *(_BYTE *)(v37 + (unsigned int)v35) = v41;
        v39 |= v41;
      }
      if ( v79 )
      {
        v42 = 0;
        if ( (dpvsGlob.views[v6][3].dynEntRenderFlags & (dpvsGlob.views[v6][3].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][3].dynEntRenderFlags )
          v42 = *(_BYTE *)(v79 + (unsigned int)v35);
        *(_BYTE *)(v79 + (unsigned int)v35) = v42;
        v39 |= v42;
      }
      if ( v80 )
      {
        v43 = 0;
        if ( (dpvsGlob.views[v6][4].dynEntRenderFlags & (dpvsGlob.views[v6][4].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][4].dynEntRenderFlags )
          v43 = *(_BYTE *)(v80 + (unsigned int)v35);
        *(_BYTE *)(v80 + (unsigned int)v35) = v43;
        v39 |= v43;
      }
      if ( v81 )
      {
        v44 = 0;
        if ( (dpvsGlob.views[v6][5].dynEntRenderFlags & (dpvsGlob.views[v6][5].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][5].dynEntRenderFlags )
          v44 = *(_BYTE *)(v81 + (unsigned int)v35);
        *(_BYTE *)(v81 + (unsigned int)v35) = v44;
        v39 |= v44;
      }
      if ( v82 )
      {
        v45 = 0;
        if ( (dpvsGlob.views[v6][6].dynEntRenderFlags & (dpvsGlob.views[v6][6].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][6].dynEntRenderFlags )
          v45 = *(_BYTE *)(v82 + (unsigned int)v35);
        *(_BYTE *)(v82 + (unsigned int)v35) = v45;
        v39 |= v45;
      }
      if ( v83 )
      {
        v46 = 0;
        if ( (dpvsGlob.views[v6][7].dynEntRenderFlags & (dpvsGlob.views[v6][7].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][7].dynEntRenderFlags )
          v46 = *(_BYTE *)(v83 + (unsigned int)v35);
        *(_BYTE *)(v83 + (unsigned int)v35) = v46;
        v39 |= v46;
      }
      if ( v84 )
      {
        v47 = 0;
        if ( (dpvsGlob.views[v6][8].dynEntRenderFlags & (dpvsGlob.views[v6][8].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][8].dynEntRenderFlags )
          v47 = *(_BYTE *)(v84 + (unsigned int)v35);
        *(_BYTE *)(v84 + (unsigned int)v35) = v47;
        v39 |= v47;
      }
      if ( v85 )
      {
        v48 = 0;
        if ( (dpvsGlob.views[v6][9].dynEntRenderFlags & (dpvsGlob.views[v6][9].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][9].dynEntRenderFlags )
          v48 = *(_BYTE *)(v85 + (unsigned int)v35);
        *(_BYTE *)(v85 + (unsigned int)v35) = v48;
        v39 |= v48;
      }
      if ( v86 )
      {
        v49 = 0;
        if ( (dpvsGlob.views[v6][10].dynEntRenderFlags & (dpvsGlob.views[v6][10].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][10].dynEntRenderFlags )
          v49 = *(_BYTE *)(v86 + (unsigned int)v35);
        *(_BYTE *)(v86 + (unsigned int)v35) = v49;
        v39 |= v49;
      }
      if ( v87 )
      {
        v50 = 0;
        if ( (dpvsGlob.views[v6][11].dynEntRenderFlags & (dpvsGlob.views[v6][11].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v31 + 28))) == dpvsGlob.views[v6][11].dynEntRenderFlags )
          v50 = *(_BYTE *)(v87 + (unsigned int)v35);
        *(_BYTE *)(v87 + (unsigned int)v35) = v50;
        v39 |= v50;
      }
      if ( enabled && R_IsDynEntClientVisibleToAnyShadowedPrimaryLight((LocalClientNum_t)v3, frontEndDataOut, v35, DYNENT_BASIS_MODEL) )
        v39 |= 1u;
      if ( (v39 & 1) == 0 )
        goto LABEL_164;
      v51 = *(const XModel **)v31;
      if ( *(_QWORD *)v31 )
      {
        if ( v74 >= 2 )
        {
          LODWORD(scalePrevFrame) = 2;
          LODWORD(placementPrevFrame) = v74;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        if ( !g_dynEntPoseLists[v89][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v52 = g_dynEntClientEntsAllocCount[v89][0];
        if ( (unsigned __int16)v35 >= v52 )
        {
          LODWORD(scalePrevFrame) = v52;
          LODWORD(placementPrevFrame) = (unsigned __int16)v35;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        v53 = &g_dynEntPoseLists[v89][0][(unsigned int)v35];
        *(double *)&modelInfo = 0.0;
        v93 = 0;
        v54 = fsqrt((float)((float)((float)(rg.correctedLodParms.origin.v[1] - v53->pose.origin.v[1]) * (float)(rg.correctedLodParms.origin.v[1] - v53->pose.origin.v[1])) + (float)((float)(rg.correctedLodParms.origin.v[0] - v53->pose.origin.v[0]) * (float)(rg.correctedLodParms.origin.v[0] - v53->pose.origin.v[0]))) + (float)((float)(rg.correctedLodParms.origin.v[2] - v53->pose.origin.v[2]) * (float)(rg.correctedLodParms.origin.v[2] - v53->pose.origin.v[2])));
        UsableLodForDist = XModelGetUsableLodForDist(v51, (float)(v54 * scale) + bias, v54 * cappedLodScale);
        if ( UsableLodForDist == 6 )
        {
          LODWORD(v3) = v89;
          goto LABEL_164;
        }
        if ( UsableLodForDist >= v51->numLods )
        {
          LODWORD(scalePrevFrame) = v51->numLods;
          LODWORD(placementPrevFrame) = UsableLodForDist;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2066, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        R_SetMaterialLodSettings(&materialLodSettings);
        _XMM0 = LODWORD(v53->bounds.halfSize.v[1]);
        __asm
        {
          vmaxss  xmm0, xmm0, dword ptr [r14+30h]
          vmaxss  xmm0, xmm0, dword ptr [r14+38h]; radius
        }
        MaterialLodForDist = XModelGetMaterialLodForDist(*(float *)&_XMM0, v54, &materialLodSettings);
        if ( UsableLodForDist > 0x10 )
        {
          LODWORD(scalePrevFrame) = 16;
          LODWORD(placementPrevFrame) = UsableLodForDist;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2075, ASSERT_TYPE_ASSERT, "( lod ) <= ( (1 << 4) )", "lod not in [0, XMODELDRAWINFO_LOD_LIMIT]\n\t%u not in [0, %u]", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        *(_DWORD *)&modelInfo ^= (*(_BYTE *)&modelInfo ^ (unsigned __int8)(2 * UsableLodForDist)) & 0x1E;
        v60 = (int)*(float *)&MaterialLodForDist;
        v61 = *(float *)&MaterialLodForDist >= 0.0 && *(float *)&MaterialLodForDist <= 16777216.0;
        v62 = *(float *)&MaterialLodForDist >= 0.0 && *(float *)&MaterialLodForDist <= 4294967300.0;
        if ( (!v61 || !v62) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", v60, *(float *)&MaterialLodForDist) )
          __debugbreak();
        if ( v60 > 1 )
        {
          LODWORD(extraPartPlacements) = 1;
          LODWORD(part0Placement) = (int)*(float *)&MaterialLodForDist;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", part0Placement, extraPartPlacements) )
            __debugbreak();
        }
        if ( v60 > 2 )
        {
          LODWORD(scalePrevFrame) = 2;
          LODWORD(placementPrevFrame) = (int)*(float *)&MaterialLodForDist;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2079, ASSERT_TYPE_ASSERT, "( integerMaterialLod ) <= ( (1 << 1) )", "integerMaterialLod not in [0, XMODELDRAWINFO_MATERIAL_LOD_LIMIT]\n\t%u not in [0, %u]", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        *(_DWORD *)&modelInfo = *(_DWORD *)&modelInfo & 0xFFFFFFDE | (32 * ((int)*(float *)&MaterialLodForDist & 1));
        mapEntLookup = R_GetDynEntMapLookup(v34);
        numParts = v53->numParts;
        if ( numParts <= 1u )
        {
          v65 = NULL;
        }
        else
        {
          if ( v53->posePart1FirstIndex >= g_dynEntExtraPosePartsAllocCount[v89] )
          {
            LODWORD(scalePrevFrame) = g_dynEntExtraPosePartsAllocCount[v89];
            LODWORD(placementPrevFrame) = v53->posePart1FirstIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
              __debugbreak();
          }
          v65 = &g_dynEntPoseExtraParts[v89][v53->posePart1FirstIndex];
          numParts = v53->numParts;
        }
        if ( !R_SkinXModel(&modelInfo, v51, NULL, &v53->pose, 1.0, &v53->pose, 1.0, &v53->posePart0, &v65->posePart, numParts, 0, 0, 0, mapEntLookup, *(float *)&MaterialLodForDist) )
        {
          if ( v78 )
            *(_BYTE *)(v36 + v78) = 0;
          if ( v76 )
            *(_BYTE *)(v76 + v36) = 0;
          if ( v77 )
            *(_BYTE *)(v77 + v36) = 0;
          if ( v79 )
            *(_BYTE *)(v79 + v36) = 0;
          if ( v80 )
            *(_BYTE *)(v80 + v36) = 0;
          if ( v81 )
            *(_BYTE *)(v81 + v36) = 0;
          if ( v82 )
            *(_BYTE *)(v82 + v36) = 0;
          if ( v83 )
            *(_BYTE *)(v83 + v36) = 0;
          if ( v84 )
            *(_BYTE *)(v84 + v36) = 0;
          if ( v85 )
            *(_BYTE *)(v85 + v36) = 0;
          if ( v86 )
            *(_BYTE *)(v86 + v36) = 0;
          LODWORD(v3) = v74;
          if ( v87 )
            *(_BYTE *)(v87 + v36) = 0;
          goto LABEL_164;
        }
        LOWORD(v93) = v36;
        if ( ((unsigned __int8)&scene.sceneDynModelCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.sceneDynModelCount) )
          __debugbreak();
        v66 = (unsigned int)_InterlockedExchangeAdd(&scene.sceneDynModelCount, 1u);
        sceneDynModel = rgp.world->sceneDynModel;
        sceneDynModel[v66].info = modelInfo;
        *(_DWORD *)&sceneDynModel[v66].dynEntClientId = v93;
        v87 = v106;
        v86 = v105;
        v85 = v104;
        v84 = v103;
        v83 = v102;
        v82 = v101;
        v81 = v100;
        v80 = v99;
        v79 = v98;
        v77 = v97;
        v76 = v96;
        v78 = v95;
      }
      LODWORD(v3) = v74;
LABEL_164:
      v28 = (unsigned int)(v75 + 1);
      v75 = v28;
      v29 = (int)v3;
      v30 = v91;
      if ( (unsigned int)v28 >= *((_DWORD *)cmd + 4) )
      {
        LODWORD(v4) = v88;
        break;
      }
    }
  }
  v68 = &s_dynEntModelsCmdBatchAvailable[(unsigned int)v4];
  if ( ((unsigned __int8)v68 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_dynEntModelsCmdBatchAvailable[(unsigned int)v4]) )
    __debugbreak();
  _InterlockedIncrement(v68);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_DrawDynEntModelsCmdTimeout
==============
*/
bool R_DrawDynEntModelsCmdTimeout(void *data)
{
  volatile int *v2; 
  unsigned int v3; 
  int v4; 

  v2 = s_dynEntModelsCmdBatchAvailable;
  v3 = 0;
  while ( 1 )
  {
    if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)v2) )
      __debugbreak();
    v4 = *v2;
    if ( *v2 )
      break;
    ++v3;
    ++v2;
    if ( v3 >= 8 )
      return v4;
  }
  *(_DWORD *)data = v3;
  LOBYTE(v4) = 1;
  return v4;
}

/*
==============
R_DrawViewModelSceneEnt
==============
*/
void R_DrawViewModelSceneEnt(void)
{
  unsigned int i; 

  for ( i = 0; i < scene.sceneDObjViewmodelCount; ++i )
    R_SkinAndBoundSceneEnt((GfxSceneEntity *)&scene.sceneDObjVisData[-1424][1424 * i + 1424 * scene.sceneDObjFirstViewmodelIndex], (GfxViewDomain)(*((_BYTE *)&scene.sceneDObj[i + scene.sceneDObjFirstViewmodelIndex] + 1388) & 1));
}

/*
==============
R_FilterBModelIntoCells
==============
*/
void R_FilterBModelIntoCells(unsigned int localClientNum, unsigned int entnum, GfxBrushModel *bmodel)
{
  const mnode_t *nodes; 
  __int64 v7; 
  unsigned int maxClientViews; 
  FilterEntInfo entInfo; 

  if ( entnum == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2846, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
    __debugbreak();
  if ( localClientNum >= gfxCfg.maxClientViews )
  {
    maxClientViews = gfxCfg.maxClientViews;
    LODWORD(v7) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2847, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientViews )", "localClientNum doesn't index gfxCfg.maxClientViews\n\t%i not in [0, %i)", v7, maxClientViews) )
      __debugbreak();
  }
  R_UnfilterEntFromCells(localClientNum, entnum);
  entInfo.localClientNum = localClientNum;
  entInfo.entnum = entnum;
  entInfo.info.bmodel = bmodel;
  entInfo.cellOffset = rgp.world->dpvsPlanes.cellCount;
  nodes = (const mnode_t *)rgp.world->dpvsPlanes.nodes;
  if ( r_dpvsFilterDebug->current.enabled )
    R_FilterEntIntoAllCells_r(&entInfo, nodes);
  else
    R_FilterEntIntoCells_r(&entInfo, nodes, &bmodel->writable.bounds);
}

/*
==============
R_FilterDObjIntoCells
==============
*/
void R_FilterDObjIntoCells(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, float radius)
{
  float v7; 
  float v8; 
  bool v9; 
  const mnode_t *nodes; 
  float v11; 
  __int64 v12; 
  unsigned int maxClientViews; 
  FilterEntInfo entInfo; 
  Bounds bounds; 

  if ( entnum == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2817, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
    __debugbreak();
  if ( localClientNum >= gfxCfg.maxClientViews )
  {
    maxClientViews = gfxCfg.maxClientViews;
    LODWORD(v12) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2818, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientViews )", "localClientNum doesn't index gfxCfg.maxClientViews\n\t%i not in [0, %i)", v12, maxClientViews) )
      __debugbreak();
  }
  R_UnfilterEntFromCells(localClientNum, entnum);
  v7 = origin->v[0];
  v8 = origin->v[1];
  entInfo.info.radius = radius;
  entInfo.localClientNum = localClientNum;
  entInfo.entnum = entnum;
  entInfo.cellOffset = 0;
  v9 = !r_dpvsFilterDebug->current.enabled;
  nodes = (const mnode_t *)rgp.world->dpvsPlanes.nodes;
  bounds.midPoint.v[0] = v7;
  v11 = origin->v[2];
  bounds.midPoint.v[1] = v8;
  bounds.midPoint.v[2] = v11;
  bounds.halfSize.v[0] = radius;
  bounds.halfSize.v[1] = radius;
  bounds.halfSize.v[2] = radius;
  if ( v9 )
    R_FilterEntIntoCells_r(&entInfo, nodes, &bounds);
  else
    R_FilterEntIntoAllCells_r(&entInfo, nodes);
}

/*
==============
R_FilterEntIntoAllCells_r
==============
*/
void R_FilterEntIntoAllCells_r(const FilterEntInfo *entInfo, const mnode_t *node)
{
  int planeOrCellIndex; 
  unsigned int i; 
  const mnode_t *v5; 
  __int64 localClientNum; 
  unsigned int maxClientViews; 
  unsigned __int64 entnum; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  planeOrCellIndex = node->planeOrCellIndex;
  for ( i = rgp.world->dpvsPlanes.cellCount + 1; (int)(planeOrCellIndex - i) >= 0; planeOrCellIndex = v5->planeOrCellIndex )
  {
    v5 = (const mnode_t *)((char *)node + 2 * node->rightChildOffset);
    R_FilterEntIntoAllCells_r(entInfo, node + 1);
    node = v5;
  }
  if ( planeOrCellIndex )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2404, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    localClientNum = entInfo->localClientNum;
    maxClientViews = gfxCfg.maxClientViews;
    if ( (unsigned int)localClientNum >= gfxCfg.maxClientViews )
    {
      LODWORD(v12) = entInfo->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientViews )", "localClientNum doesn't index gfxCfg.maxClientViews\n\t%i not in [0, %i)", v12, gfxCfg.maxClientViews) )
        __debugbreak();
      maxClientViews = gfxCfg.maxClientViews;
    }
    entnum = entInfo->entnum;
    if ( maxClientViews * gfxCfg.entCount > 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2411, ASSERT_TYPE_ASSERT, "(gfxCfg.maxClientViews * gfxCfg.entCount <= (4 * 2048))", (const char *)&queryFormat, "gfxCfg.maxClientViews * gfxCfg.entCount <= MAX_TOTAL_ENT_COUNT") )
      __debugbreak();
    if ( (gfxCfg.entCount & 7) != 0 )
    {
      LODWORD(v12) = gfxCfg.entCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2412, ASSERT_TYPE_ASSERT, "( ( !(gfxCfg.entCount & 7) ) )", "( gfxCfg.entCount ) = %i", v12) )
        __debugbreak();
    }
    v9 = localClientNum * (gfxCfg.entCount >> 5);
    if ( v9 >= 0x100 )
    {
      LODWORD(v13) = 256;
      LODWORD(v12) = localClientNum * (gfxCfg.entCount >> 5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2415, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( (4 * 2048) >> 5 )", "offset doesn't index MAX_TOTAL_ENT_COUNT >> 5\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v10 = 0x80000000 >> (entnum & 0x1F);
    v11 = (entnum >> 5) + ((entInfo->cellOffset + planeOrCellIndex - 1) << 8) + v9;
    rgp.world->dpvsPlanes.sceneEntCellBits[v11] |= v10;
    scene.dpvs.entVisBits[localClientNum][entnum >> 5] |= v10;
    scene.dpvs.entInfo[localClientNum][entnum].bmodel = entInfo->info.bmodel;
  }
}

/*
==============
R_FilterEntIntoCells_r
==============
*/
void R_FilterEntIntoCells_r(const FilterEntInfo *entInfo, const mnode_t *node, const Bounds *bounds)
{
  double v4; 
  const mnode_t *v5; 
  unsigned int cellCount; 
  int planeOrCellIndex; 
  unsigned int v8; 
  int i; 
  GfxWorldDpvsPlane *planes; 
  float v11; 
  float v12; 
  float v13; 
  float dist; 
  float v15; 
  float v16; 
  __int64 rightChildOffset; 
  unsigned __int8 type; 
  __int64 v19; 
  float v20; 
  float v21; 
  float v22; 
  Bounds boundsa; 

  v4 = *(double *)&bounds->halfSize.y;
  v5 = node;
  cellCount = rgp.world->dpvsPlanes.cellCount;
  *(_OWORD *)boundsa.midPoint.v = *(_OWORD *)bounds->midPoint.v;
  *(double *)&boundsa.halfSize.y = v4;
  planeOrCellIndex = node->planeOrCellIndex;
  v8 = cellCount + 1;
  for ( i = planeOrCellIndex - v8; (int)(planeOrCellIndex - v8) >= 0; i = planeOrCellIndex - v8 )
  {
    planes = rgp.world->dpvsPlanes.planes;
    v11 = planes[i].normal.v[0];
    v12 = planes[i].normal.v[1];
    v13 = planes[i].normal.v[2];
    dist = planes[i].dist;
    v15 = (float)((float)((float)(v11 * boundsa.midPoint.v[0]) + (float)(v12 * boundsa.midPoint.v[1])) + (float)(v13 * boundsa.midPoint.v[2])) - dist;
    v16 = (float)((float)((float)(COERCE_FLOAT(LODWORD(v11) & _xmm) * boundsa.halfSize.v[0]) + (float)(COERCE_FLOAT(LODWORD(v12) & _xmm) * boundsa.halfSize.v[1])) + (float)(COERCE_FLOAT(LODWORD(v13) & _xmm) * boundsa.halfSize.v[2])) - 0.001;
    if ( v15 <= v16 )
    {
      if ( v15 >= COERCE_FLOAT(LODWORD(v16) ^ _xmm) )
      {
        type = planes[i].type;
        rightChildOffset = v5->rightChildOffset;
        if ( type >= 3u )
        {
          R_FilterEntIntoCells_r(entInfo, v5 + 1, &boundsa);
        }
        else
        {
          v19 = type;
          v20 = boundsa.midPoint.v[type];
          v21 = boundsa.halfSize.v[type];
          v22 = v20 - v21;
          boundsa.midPoint.v[type] = (float)((float)(v20 + v21) + dist) * 0.5;
          boundsa.halfSize.v[type] = (float)((float)(v20 + v21) - dist) * 0.5;
          if ( dist < (float)(v20 + v21) )
            R_FilterEntIntoCells_r(entInfo, v5 + 1, &boundsa);
          boundsa.midPoint.v[v19] = (float)(v22 + dist) * 0.5;
          boundsa.halfSize.v[v19] = (float)(dist - v22) * 0.5;
        }
      }
      else
      {
        rightChildOffset = (unsigned int)v5->rightChildOffset - 2 + 2i64;
      }
    }
    else
    {
      rightChildOffset = 2i64;
    }
    planeOrCellIndex = *(&v5->planeOrCellIndex + rightChildOffset);
    v5 = (const mnode_t *)((char *)v5 + 2 * rightChildOffset);
  }
  if ( planeOrCellIndex )
    R_AddEntToCell(entInfo, planeOrCellIndex - 1);
}

/*
==============
R_FilterThingIntoCells
==============
*/
void R_FilterThingIntoCells(unsigned int thingIndex, const Bounds *bounds, unsigned int *cellBits, unsigned int wordCount)
{
  GfxWorld *world; 
  __int64 v6; 
  unsigned int cellCount; 
  const Bounds *v10; 
  unsigned int v11; 
  __int64 v12; 
  volatile signed __int32 *v13; 

  world = rgp.world;
  v6 = thingIndex >> 5;
  cellCount = rgp.world->dpvsPlanes.cellCount;
  v10 = bounds;
  v11 = ~(0x80000000 >> (thingIndex & 0x1F));
  if ( cellCount )
  {
    v12 = cellCount;
    do
    {
      v13 = (volatile signed __int32 *)&cellBits[v6];
      if ( ((unsigned __int8)v13 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &cellBits[v6]) )
        __debugbreak();
      _InterlockedAnd(v13, v11);
      v6 = wordCount + (unsigned int)v6;
      --v12;
    }
    while ( v12 );
    world = rgp.world;
    v10 = bounds;
  }
  R_FilterThingIntoCells_r((const mnode_t *)world->dpvsPlanes.nodes, thingIndex, v10, cellBits, wordCount);
}

/*
==============
R_FilterThingIntoCells_r
==============
*/
void R_FilterThingIntoCells_r(const mnode_t *node, unsigned int dynEntIndex, const Bounds *bounds, unsigned int *cellBits, unsigned int wordCount)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  double v12; 
  const mnode_t *v14; 
  unsigned int cellCount; 
  int planeOrCellIndex; 
  unsigned int v17; 
  int v18; 
  GfxWorldDpvsPlane *planes; 
  float v20; 
  float v21; 
  float v22; 
  float dist; 
  float v24; 
  float v25; 
  __int64 rightChildOffset; 
  unsigned __int8 type; 
  __int64 v28; 
  float v29; 
  float v30; 
  __int64 v31; 
  volatile signed __int32 *v32; 
  Bounds boundsa; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 

  v12 = *(double *)&bounds->halfSize.y;
  v14 = node;
  cellCount = rgp.world->dpvsPlanes.cellCount;
  *(_OWORD *)boundsa.midPoint.v = *(_OWORD *)bounds->midPoint.v;
  *(double *)&boundsa.halfSize.y = v12;
  planeOrCellIndex = node->planeOrCellIndex;
  v17 = cellCount + 1;
  v18 = planeOrCellIndex - v17;
  if ( (int)(planeOrCellIndex - v17) >= 0 )
  {
    v39 = v5;
    v38 = v6;
    v37 = v7;
    v36 = v8;
    v35 = v9;
    v34 = v10;
    do
    {
      planes = rgp.world->dpvsPlanes.planes;
      v20 = planes[v18].normal.v[0];
      v21 = planes[v18].normal.v[1];
      v22 = planes[v18].normal.v[2];
      dist = planes[v18].dist;
      v24 = (float)((float)((float)(v20 * boundsa.midPoint.v[0]) + (float)(v21 * boundsa.midPoint.v[1])) + (float)(v22 * boundsa.midPoint.v[2])) - dist;
      v25 = (float)((float)((float)(COERCE_FLOAT(LODWORD(v20) & _xmm) * boundsa.halfSize.v[0]) + (float)(COERCE_FLOAT(LODWORD(v21) & _xmm) * boundsa.halfSize.v[1])) + (float)(COERCE_FLOAT(LODWORD(v22) & _xmm) * boundsa.halfSize.v[2])) - 0.001;
      if ( v24 <= v25 )
      {
        if ( v24 >= COERCE_FLOAT(LODWORD(v25) ^ _xmm) )
        {
          type = planes[v18].type;
          rightChildOffset = v14->rightChildOffset;
          if ( type >= 3u )
          {
            R_FilterThingIntoCells_r(v14 + 1, dynEntIndex, &boundsa, cellBits, wordCount);
          }
          else
          {
            v28 = type;
            v29 = boundsa.midPoint.v[type];
            v30 = boundsa.halfSize.v[type];
            boundsa.midPoint.v[type] = (float)((float)(v29 + v30) + dist) * 0.5;
            boundsa.halfSize.v[type] = (float)((float)(v29 + v30) - dist) * 0.5;
            if ( dist < (float)(v29 + v30) )
              R_FilterThingIntoCells_r(v14 + 1, dynEntIndex, &boundsa, cellBits, wordCount);
            boundsa.midPoint.v[v28] = (float)((float)(v29 - v30) + dist) * 0.5;
            boundsa.halfSize.v[v28] = (float)(dist - (float)(v29 - v30)) * 0.5;
          }
        }
        else
        {
          rightChildOffset = (unsigned int)v14->rightChildOffset - 2 + 2i64;
        }
      }
      else
      {
        rightChildOffset = 2i64;
      }
      planeOrCellIndex = *(&v14->planeOrCellIndex + rightChildOffset);
      v14 = (const mnode_t *)((char *)v14 + 2 * rightChildOffset);
      v18 = planeOrCellIndex - v17;
    }
    while ( (int)(planeOrCellIndex - v17) >= 0 );
  }
  if ( planeOrCellIndex )
  {
    v31 = (dynEntIndex >> 5) + wordCount * (planeOrCellIndex - 1);
    v32 = (volatile signed __int32 *)&cellBits[v31];
    if ( ((unsigned __int8)v32 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &cellBits[v31]) )
      __debugbreak();
    _InterlockedOr(v32, 0x80000000 >> (dynEntIndex & 0x1F));
  }
}

/*
==============
R_FilterXModelIntoScene
==============
*/
bool R_FilterXModelIntoScene(const XModel *model, const GfxScaledPlacement *placement, unsigned int renderFlags, const base_vec4_t<unsigned int> *scriptablePackedColorEmissive, bool addGfxEntity, LocalClientNum_t localClientNum)
{
  __int128 v6; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float scale; 
  float v16; 
  float v18; 
  float v19; 
  __int64 v20; 
  signed int v21; 
  signed int frustumPlaneCount; 
  DpvsPlane *frustumPlanes; 
  int v24; 
  signed int v25; 
  signed int v26; 
  DpvsPlane *v27; 
  int v28; 
  signed int v29; 
  bool v30; 
  signed int v31; 
  DpvsPlane *v32; 
  int v33; 
  signed int v34; 
  bool v35; 
  signed int v36; 
  unsigned __int8 v37; 
  DpvsPlane *v38; 
  int v39; 
  unsigned __int8 v40; 
  float v41; 
  float v42; 
  float bias; 
  float cappedLodScale; 
  float v45; 
  float v46; 
  unsigned int UsableLodForDist; 
  unsigned int v48; 
  unsigned __int32 v49; 
  bool result; 
  __int64 v51; 
  unsigned int v52; 
  __int64 v53; 
  GfxSceneModel *v54; 
  __int16 entnumNone; 
  float v56; 
  float materialLod; 
  unsigned int IntegerMaterialLod; 
  char v61; 
  __int64 v62; 
  __int64 v63; 
  __int16 v64; 
  __int16 v65; 
  Bounds rotatedBounds; 
  Bounds bounds; 
  MaterialLodSettings materialLodSettings; 
  tmat33_t<vec3_t> axis; 
  __int128 v73; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2655, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( placement->scale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2656, ASSERT_TYPE_ASSERT, "(placement->scale > 0)", (const char *)&queryFormat, "placement->scale > 0") )
    __debugbreak();
  v10 = placement->base.quat.v[1];
  v11 = placement->base.quat.v[0];
  v12 = placement->base.quat.v[2];
  v13 = placement->base.quat.v[3];
  v14 = (float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12)) + (float)(v13 * v13);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2657, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( placement->base.quat ) )", "(%g, %g, %g, %g) len: %g", v11, v10, v12, v13, fsqrt(v14)) )
    __debugbreak();
  if ( scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2658, ASSERT_TYPE_ASSERT, "(!scene.allowAddDObj)", (const char *)&queryFormat, "!scene.allowAddDObj") )
    __debugbreak();
  if ( rg.needVelocity )
    renderFlags |= 0x200u;
  XModelGetBounds(model, &bounds);
  scale = placement->scale;
  bounds.halfSize.v[0] = scale * bounds.halfSize.v[0];
  bounds.halfSize.v[1] = scale * bounds.halfSize.v[1];
  bounds.halfSize.v[2] = scale * bounds.halfSize.v[2];
  bounds.midPoint.v[0] = scale * bounds.midPoint.v[0];
  bounds.midPoint.v[1] = scale * bounds.midPoint.v[1];
  bounds.midPoint.v[2] = scale * bounds.midPoint.v[2];
  QuatToAxis(&placement->base.quat, &axis);
  Bounds_Transform(&bounds, &placement->base.origin, &axis, &rotatedBounds);
  v16 = rotatedBounds.halfSize.v[2];
  _XMM13 = LODWORD(rotatedBounds.halfSize.v[1]);
  v18 = rotatedBounds.halfSize.v[0];
  v19 = rotatedBounds.midPoint.v[2];
  v20 = localClientNum;
  v21 = 0;
  frustumPlaneCount = dpvsGlob.views[v20][0].frustumPlaneCount;
  frustumPlanes = dpvsGlob.views[v20][0].frustumPlanes;
  if ( frustumPlaneCount <= 0 )
  {
LABEL_18:
    v24 = 0;
  }
  else
  {
    while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[0]) & _xmm) * rotatedBounds.halfSize.v[0]) + (float)((float)(rotatedBounds.midPoint.v[0] * frustumPlanes->coeffs.v[0]) + frustumPlanes->coeffs.v[3])) + (float)(rotatedBounds.midPoint.v[1] * frustumPlanes->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[1]) & _xmm) * rotatedBounds.halfSize.v[1])) + (float)(rotatedBounds.midPoint.v[2] * frustumPlanes->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(frustumPlanes->coeffs.v[2]) & _xmm) * rotatedBounds.halfSize.v[2])) > 0.0 )
    {
      ++v21;
      ++frustumPlanes;
      if ( v21 >= frustumPlaneCount )
        goto LABEL_18;
    }
    v24 = 1;
  }
  v25 = dpvsGlob.views[v20][1].frustumPlaneCount;
  v26 = 0;
  LOBYTE(v64) = (v24 != 0) + 1;
  LOBYTE(v65) = v64;
  v27 = dpvsGlob.views[v20][1].frustumPlanes;
  if ( v25 <= 0 )
  {
LABEL_22:
    v28 = 0;
  }
  else
  {
    while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v27->coeffs.v[0]) & _xmm) * rotatedBounds.halfSize.v[0]) + (float)((float)(rotatedBounds.midPoint.v[0] * v27->coeffs.v[0]) + v27->coeffs.v[3])) + (float)(rotatedBounds.midPoint.v[1] * v27->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(v27->coeffs.v[1]) & _xmm) * rotatedBounds.halfSize.v[1])) + (float)(rotatedBounds.midPoint.v[2] * v27->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(v27->coeffs.v[2]) & _xmm) * rotatedBounds.halfSize.v[2])) > 0.0 )
    {
      ++v26;
      ++v27;
      if ( v26 >= v25 )
        goto LABEL_22;
    }
    v28 = 1;
  }
  v29 = dpvsGlob.views[v20][2].frustumPlaneCount;
  v30 = v28 == 0;
  v31 = 0;
  if ( !v30 )
    ++v24;
  v32 = dpvsGlob.views[v20][2].frustumPlanes;
  HIBYTE(v64) = !v30 + 1;
  HIBYTE(v65) = HIBYTE(v64);
  if ( v29 <= 0 )
  {
LABEL_28:
    v33 = 0;
  }
  else
  {
    while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v32->coeffs.v[0]) & _xmm) * rotatedBounds.halfSize.v[0]) + (float)((float)(rotatedBounds.midPoint.v[0] * v32->coeffs.v[0]) + v32->coeffs.v[3])) + (float)(rotatedBounds.midPoint.v[1] * v32->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(v32->coeffs.v[1]) & _xmm) * rotatedBounds.halfSize.v[1])) + (float)(rotatedBounds.midPoint.v[2] * v32->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(v32->coeffs.v[2]) & _xmm) * rotatedBounds.halfSize.v[2])) > 0.0 )
    {
      ++v31;
      ++v32;
      if ( v31 >= v29 )
        goto LABEL_28;
    }
    v33 = 1;
  }
  v34 = dpvsGlob.views[v20][3].frustumPlaneCount;
  v35 = v33 == 0;
  v36 = 0;
  if ( !v35 )
    ++v24;
  v37 = !v35 + 1;
  v38 = dpvsGlob.views[v20][3].frustumPlanes;
  if ( v34 <= 0 )
  {
LABEL_34:
    v39 = 0;
  }
  else
  {
    while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(v38->coeffs.v[0]) & _xmm) * rotatedBounds.halfSize.v[0]) + (float)((float)(rotatedBounds.midPoint.v[0] * v38->coeffs.v[0]) + v38->coeffs.v[3])) + (float)(rotatedBounds.midPoint.v[1] * v38->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(v38->coeffs.v[1]) & _xmm) * rotatedBounds.halfSize.v[1])) + (float)(rotatedBounds.midPoint.v[2] * v38->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(v38->coeffs.v[2]) & _xmm) * rotatedBounds.halfSize.v[2])) > 0.0 )
    {
      ++v36;
      ++v38;
      if ( v36 >= v34 )
        goto LABEL_34;
    }
    v39 = 1;
  }
  v40 = (v39 != 0) + 1;
  if ( v39 )
    ++v24;
  if ( v24 == 4 || !r_drawXModels->current.enabled )
    return 0;
  v73 = v6;
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2696, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  v41 = placement->scale;
  v42 = rg.lodParms.ramp.scale;
  bias = rg.lodParms.ramp.bias;
  cappedLodScale = rg.lodParms.cappedLodScale;
  v45 = fsqrt((float)((float)((float)(rg.correctedLodParms.origin.v[1] - placement->base.origin.v[1]) * (float)(rg.correctedLodParms.origin.v[1] - placement->base.origin.v[1])) + (float)((float)(rg.correctedLodParms.origin.v[0] - placement->base.origin.v[0]) * (float)(rg.correctedLodParms.origin.v[0] - placement->base.origin.v[0]))) + (float)((float)(rg.correctedLodParms.origin.v[2] - placement->base.origin.v[2]) * (float)(rg.correctedLodParms.origin.v[2] - placement->base.origin.v[2])));
  if ( v41 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
    __debugbreak();
  v46 = v45 / v41;
  UsableLodForDist = XModelGetUsableLodForDist(model, (float)(v46 * v42) + bias, v46 * cappedLodScale);
  if ( UsableLodForDist == 6 )
    return 0;
  if ( UsableLodForDist >= model->numLods )
  {
    LODWORD(v63) = model->numLods;
    LODWORD(v62) = UsableLodForDist;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2726, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v62, v63) )
      __debugbreak();
  }
  v48 = renderFlags & 3;
  if ( (renderFlags & 3) != 0 || addGfxEntity != (_BYTE)v48 )
  {
    if ( ((unsigned __int8)&scene.gfxEntCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.gfxEntCount) )
      __debugbreak();
    v49 = _InterlockedExchangeAdd(&scene.gfxEntCount, 1u);
    if ( v49 >= 0x400 )
    {
      scene.gfxEntCount = 1024;
      R_WarnOncePerFrame(R_WARN_KNOWN_SPECIAL_MODELS, 1024i64);
      return 0;
    }
    v16 = rotatedBounds.halfSize.v[2];
    _XMM13 = LODWORD(rotatedBounds.halfSize.v[1]);
    v18 = rotatedBounds.halfSize.v[0];
    v19 = rotatedBounds.midPoint.v[2];
    v51 = v49;
    scene.gfxEnts[v51].materialTime = 0.0;
    scene.gfxEnts[v51].renderFlags = v48;
    v64 = v65;
    scene.gfxEnts[v51].scriptablePackedColorEmissive = *scriptablePackedColorEmissive;
    scene.gfxEnts[v51].eyeSensorPupilSize = 0.0;
  }
  else
  {
    v49 = 0;
  }
  v52 = R_AllocSceneModel();
  if ( v52 >= 0x400 )
    return 0;
  v53 = v52;
  v54 = &scene.sceneModel[v52];
  v30 = v54->obj == NULL;
  v54->model = model;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2757, ASSERT_TYPE_SANITY, "( !sceneModel->obj )", (const char *)&queryFormat, "!sceneModel->obj") )
    __debugbreak();
  if ( gfxCfg.entnumNone >= 0x1000 )
  {
    LODWORD(v63) = 4096;
    LODWORD(v62) = gfxCfg.entnumNone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2760, ASSERT_TYPE_ASSERT, "(unsigned)( gfxCfg.entnumNone ) < (unsigned)( (1 << 12) )", "gfxCfg.entnumNone doesn't index SCENE_ENTNUM_LIMIT\n\t%i not in [0, %i)", v62, v63) )
      __debugbreak();
  }
  if ( renderFlags >= 0x100000 )
  {
    LODWORD(v63) = 0x100000;
    LODWORD(v62) = renderFlags;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2761, ASSERT_TYPE_ASSERT, "(unsigned)( renderFlags ) < (unsigned)( (1 << 20) )", "renderFlags doesn't index RENDERFX_FLAGS_LIMIT\n\t%i not in [0, %i)", v62, v63) )
      __debugbreak();
  }
  *((_DWORD *)v54 + 30) &= 0xFFC00000;
  *((_DWORD *)v54 + 31) &= 0xFFF00000;
  *((_DWORD *)v54 + 31) |= renderFlags & 0xFFFFF;
  entnumNone = gfxCfg.entnumNone;
  v56 = rotatedBounds.midPoint.v[0];
  v54->mapEntLookup = 0;
  *((_DWORD *)v54 + 30) |= v49 & 0x3FF | ((entnumNone & 0xFFF) << 10);
  v54->placement = *placement;
  v54->prevPlacement = placement[1];
  v54->bounds.midPoint.v[1] = rotatedBounds.midPoint.v[1];
  v54->bounds.midPoint.v[0] = v56;
  v54->bounds.midPoint.v[2] = v19;
  v54->bounds.halfSize.v[0] = v18;
  v54->bounds.halfSize.v[1] = *(float *)&_XMM13;
  v54->bounds.halfSize.v[2] = v16;
  R_SetMaterialLodSettings(&materialLodSettings);
  __asm
  {
    vmaxss  xmm0, xmm13, xmm14
    vmaxss  xmm0, xmm0, xmm12; radius
  }
  *(double *)&_XMM0 = XModelGetMaterialLodForDist(*(float *)&_XMM0, v46, &materialLodSettings);
  v54->materialLod = *(float *)&_XMM0;
  if ( UsableLodForDist > 0x10 )
  {
    LODWORD(v63) = 16;
    LODWORD(v62) = UsableLodForDist;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2787, ASSERT_TYPE_ASSERT, "( lod ) <= ( (1 << 4) )", "lod not in [0, XMODELDRAWINFO_LOD_LIMIT]\n\t%u not in [0, %u]", v62, v63) )
      __debugbreak();
  }
  *(_DWORD *)&v54->info &= 0xFFFFFFE1;
  materialLod = v54->materialLod;
  *(_DWORD *)&v54->info |= 2 * (UsableLodForDist & 0xF);
  IntegerMaterialLod = XModelGetIntegerMaterialLod(materialLod);
  v61 = IntegerMaterialLod;
  if ( IntegerMaterialLod > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v62) = IntegerMaterialLod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2791, ASSERT_TYPE_ASSERT, "( materialLod ) <= ( (1 << 1) )", "materialLod not in [0, XMODELDRAWINFO_MATERIAL_LOD_LIMIT]\n\t%u not in [0, %u]", v62, v63) )
      __debugbreak();
  }
  *(_DWORD *)&v54->info &= 0xFFFFFFDE;
  *(_DWORD *)&v54->info |= (v49 != 0) | (32 * (v61 & 1));
  v54->lightingOrigin.v[0] = v54->placement.base.origin.v[0];
  v54->lightingOrigin.v[1] = v54->placement.base.origin.v[1];
  v54->lightingOrigin.v[2] = v54->placement.base.origin.v[2];
  v54->lightingOrigin.v[2] = v54->lightingOrigin.v[2] + 4.0;
  v54->lastGpuLightGridRequest = NULL;
  scene.sceneModelVisData[0][v53] = v64;
  scene.sceneModelVisData[1][v53] = HIBYTE(v64);
  result = 1;
  scene.sceneModelVisData[2][v53] = v37;
  scene.sceneModelVisData[3][v53] = v40;
  return result;
}

/*
==============
R_FrustumClipPlanes
==============
*/
void R_FrustumClipPlanes(const GfxMatrix *viewProjMtx, const vec4_t *sidePlanes, int sidePlaneCount, DpvsPlane *frustumPlanes)
{
  signed __int64 v4; 
  float *v5; 
  float *v6; 
  __int64 v7; 
  int v8; 
  float *v9; 
  float *v10; 
  bool v11; 
  float v12; 
  float v13; 
  __m128 v14; 
  __int64 v15; 
  __int64 v16; 
  float *v17; 

  if ( sidePlaneCount > 0 )
  {
    v4 = (char *)sidePlanes - (char *)frustumPlanes;
    v5 = &frustumPlanes->coeffs.v[1];
    v6 = &viewProjMtx->m.m[0].v[2];
    v7 = sidePlaneCount;
    v17 = &viewProjMtx->m.m[0].v[2];
    do
    {
      v8 = 0;
      v9 = v5 - 1;
      v10 = v6;
      v11 = 1;
      do
      {
        if ( !v11 )
        {
          LODWORD(v16) = 4;
          LODWORD(v15) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        v12 = (float)((float)((float)(*(float *)((char *)v5 + v4 - 4) * *(v10 - 2)) + (float)(*(v10 - 1) * *(float *)((char *)v5 + v4))) + (float)(*(float *)((char *)v5 + v4 + 4) * *v10)) + (float)(v10[1] * *(float *)((char *)v5 + v4 + 8));
        if ( (unsigned int)v8 >= 4 )
        {
          LODWORD(v16) = 4;
          LODWORD(v15) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        *v9++ = v12;
        ++v8;
        v10 += 4;
        v11 = (unsigned int)v8 < 4;
      }
      while ( v8 < 4 );
      v6 = v17;
      v13 = fsqrt((float)((float)(*(v5 - 1) * *(v5 - 1)) + (float)(*v5 * *v5)) + (float)(v5[1] * v5[1]));
      if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 385, ASSERT_TYPE_ASSERT, "(length > 0)", (const char *)&queryFormat, "length > 0") )
        __debugbreak();
      v14 = (__m128)LODWORD(FLOAT_1_0);
      v14.m128_f32[0] = 1.0 / v13;
      *(__m128 *)(v5 - 1) = _mm128_mul_ps(_mm_shuffle_ps(v14, v14, 0), *(__m128 *)(v5 - 1));
      v5 += 4;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
R_FrustumCullEntities
==============
*/
void R_FrustumCullEntities(unsigned int maxSceneViewType, int viewInfoIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int sceneDObjCount; 
  unsigned int v6; 
  GfxSceneEntityCull *p_cull; 
  unsigned int state; 
  const char *Name; 
  __int64 v10; 
  unsigned __int8 **entVisData; 
  __int64 v12; 
  DpvsPlane *frustumPlanes; 
  int v14; 
  int v15; 
  float *v16; 
  Bounds *p_bounds; 
  __int64 sceneDObjModelCount; 
  __int64 v19; 
  unsigned __int8 **v20; 
  __int64 v21; 
  char *v22; 
  int v23; 
  int v24; 
  float *v25; 
  const GfxBrushModel **p_bmodel; 
  __int64 sceneBrushCount; 
  unsigned __int16 v28; 
  float *v29; 
  unsigned __int8 **v30; 
  __int64 v31; 
  char *v32; 
  int v33; 
  int v34; 
  float *v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  Bounds outBounds; 

  v2 = viewInfoIndex;
  v3 = maxSceneViewType;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2938, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v4 = 8052 * v2;
  v38 = v2;
  sceneDObjCount = scene.sceneDObjCount;
  v6 = 0;
  if ( scene.sceneDObjCount )
  {
    p_cull = &scene.sceneDObj[0].cull;
    do
    {
      state = p_cull->state;
      if ( (p_cull->state & 0xFFFFFFFB) != 0 )
      {
        if ( state < 2 )
        {
          Name = DObjGetName(*(const DObj **)&p_cull[33].state);
          LODWORD(v37) = state;
          LODWORD(v36) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2950, ASSERT_TYPE_ASSERT, "(state >= CULL_STATE_BOUNDED)", "%s\n\t%d %d '%s'", "state >= CULL_STATE_BOUNDED", v36, v37, Name) )
            __debugbreak();
        }
        v10 = (LODWORD(p_cull[32].skinnedSurfs.firstSurf) >> 10) & 0xFFF;
        if ( (_DWORD)v3 )
        {
          entVisData = scene.dpvs.entVisData;
          v12 = v3;
          frustumPlanes = dpvsGlob.views[v38][0].frustumPlanes;
          do
          {
            GfxSceneEntity_GetBounds(p_cull, &outBounds);
            v14 = LODWORD(frustumPlanes[14].coeffs.v[0]);
            v15 = 0;
            v16 = (float *)frustumPlanes;
            if ( v14 > 0 )
            {
              while ( (float)((float)((float)((float)((float)((float)((float)(outBounds.midPoint.v[0] * *v16) + v16[3]) + (float)(outBounds.halfSize.v[0] * COERCE_FLOAT(*(_DWORD *)v16 & _xmm))) + (float)(outBounds.midPoint.v[1] * v16[1])) + (float)(outBounds.halfSize.v[1] * COERCE_FLOAT((_DWORD)v16[1] & _xmm))) + (float)(outBounds.midPoint.v[2] * v16[2])) + (float)(outBounds.halfSize.v[2] * COERCE_FLOAT((_DWORD)v16[2] & _xmm))) > 0.0 )
              {
                ++v15;
                v16 += 4;
                if ( v15 >= v14 )
                  goto LABEL_17;
              }
              (*entVisData)[v10] = 2;
            }
LABEL_17:
            frustumPlanes = (DpvsPlane *)((char *)frustumPlanes + 244);
            ++entVisData;
            --v12;
          }
          while ( v12 );
        }
        memset(&outBounds, 0, sizeof(outBounds));
      }
      ++v6;
      p_cull = (GfxSceneEntityCull *)((char *)p_cull + 1424);
    }
    while ( v6 < sceneDObjCount );
    v4 = v38 * 8052;
  }
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2964, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  if ( scene.sceneDObjModelCount )
  {
    p_bounds = &scene.sceneModel[0].bounds;
    sceneDObjModelCount = (unsigned int)scene.sceneDObjModelCount;
    do
    {
      v19 = (LODWORD(p_bounds[3].halfSize.v[1]) >> 10) & 0xFFF;
      if ( (_DWORD)v3 )
      {
        v20 = scene.dpvs.entVisData;
        v21 = v3;
        v22 = (char *)dpvsGlob.views[0][0].frustumPlanes + v4;
        do
        {
          v23 = *((_DWORD *)v22 + 56);
          v24 = 0;
          v25 = (float *)v22;
          if ( v23 > 0 )
          {
            while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)v25 & _xmm) * p_bounds->halfSize.v[0]) + (float)((float)(p_bounds->midPoint.v[0] * *v25) + v25[3])) + (float)(p_bounds->midPoint.v[1] * v25[1])) + (float)(COERCE_FLOAT((_DWORD)v25[1] & _xmm) * p_bounds->halfSize.v[1])) + (float)(p_bounds->midPoint.v[2] * v25[2])) + (float)(COERCE_FLOAT((_DWORD)v25[2] & _xmm) * p_bounds->halfSize.v[2])) > 0.0 )
            {
              ++v24;
              v25 += 4;
              if ( v24 >= v23 )
                goto LABEL_33;
            }
            (*v20)[v19] = 2;
          }
LABEL_33:
          v22 += 244;
          ++v20;
          --v21;
        }
        while ( v21 );
      }
      p_bounds = (Bounds *)((char *)p_bounds + 152);
      --sceneDObjModelCount;
    }
    while ( sceneDObjModelCount );
  }
  if ( scene.sceneBrushCount )
  {
    p_bmodel = &scene.sceneBrush[0].bmodel;
    sceneBrushCount = (unsigned int)scene.sceneBrushCount;
    do
    {
      v28 = *((_WORD *)p_bmodel - 4);
      v29 = (float *)*p_bmodel;
      if ( (_DWORD)v3 )
      {
        v30 = scene.dpvs.entVisData;
        v31 = v3;
        v32 = (char *)dpvsGlob.views[0][0].frustumPlanes + v4;
        do
        {
          v33 = *((_DWORD *)v32 + 56);
          v34 = 0;
          v35 = (float *)v32;
          if ( v33 > 0 )
          {
            while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)v35 & _xmm) * v29[3]) + (float)((float)(*v29 * *v35) + v35[3])) + (float)(v29[1] * v35[1])) + (float)(COERCE_FLOAT((_DWORD)v35[1] & _xmm) * v29[4])) + (float)(v29[2] * v35[2])) + (float)(COERCE_FLOAT((_DWORD)v35[2] & _xmm) * v29[5])) > 0.0 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= v33 )
                goto LABEL_44;
            }
            (*v30)[v28] = 2;
          }
LABEL_44:
          v32 += 244;
          ++v30;
          --v31;
        }
        while ( v31 );
      }
      p_bmodel += 11;
      --sceneBrushCount;
    }
    while ( sceneBrushCount );
  }
}

/*
==============
R_GenerateShadowMapCasterCells
==============
*/
void R_GenerateShadowMapCasterCells(void)
{
  unsigned int cellCount; 
  unsigned int v1; 
  unsigned int i; 
  ComPrimaryLight *v3; 
  float v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 

  cellCount = rgp.world->dpvsPlanes.cellCount;
  v1 = (cellCount + 31) >> 5;
  memset_0(rgp.world->cellCasterBits, 0, 4i64 * v1 * cellCount);
  for ( i = 1; i <= rgp.world->lastSunPrimaryLightIndex; ++i )
  {
    if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
      __debugbreak();
    if ( i >= comWorld.primaryLightCount )
    {
      LODWORD(v7) = comWorld.primaryLightCount;
      LODWORD(v6) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v3 = &comWorld.primaryLights[i];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3834, ASSERT_TYPE_ASSERT, "(primaryLight)", (const char *)&queryFormat, "primaryLight") )
      __debugbreak();
    if ( v3->type != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3835, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR") )
      __debugbreak();
    if ( (float)((float)((float)(v3->dir.v[0] * v3->dir.v[0]) + (float)(v3->dir.v[1] * v3->dir.v[1])) + (float)(v3->dir.v[2] * v3->dir.v[2])) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3836, ASSERT_TYPE_ASSERT, "(Vec3LengthSq( primaryLight->dir ))", (const char *)&queryFormat, "Vec3LengthSq( primaryLight->dir )") )
      __debugbreak();
    LODWORD(dpvsGlob.viewOrg.v[0]) = LODWORD(v3->dir.v[0]) ^ _xmm;
    LODWORD(dpvsGlob.viewOrg.v[1]) = LODWORD(v3->dir.v[1]) ^ _xmm;
    v4 = v3->dir.v[2];
    v5 = 0;
    dpvsGlob.viewOrgIsDir = 1;
    LODWORD(dpvsGlob.viewOrg.v[2]) = LODWORD(v4) ^ _xmm;
    dpvsGlob.viewOrg.v[3] = 0.0;
    dpvsGlob.farPlane = NULL;
    for ( dpvsGlob.nearPlane = NULL; v5 < rgp.world->dpvsPlanes.cellCount; ++v5 )
    {
      dpvsGlob.cellBits = &rgp.world->cellCasterBits[v1 * v5];
      R_ConnectCells(v5);
    }
  }
}

/*
==============
R_GetDpvsCullDist
==============
*/
float R_GetDpvsCullDist()
{
  return dpvsGlob.cullDist;
}

/*
==============
R_GetDpvsView
==============
*/
DpvsView *R_GetDpvsView(unsigned int sceneViewType)
{
  __int64 v1; 
  __int64 v3; 
  int viewOrgViewInfoIndex; 
  __int64 v5; 
  int v6; 

  v1 = sceneViewType;
  if ( dpvsGlob.viewOrgViewInfoIndex >= 6u )
  {
    v6 = 6;
    viewOrgViewInfoIndex = dpvsGlob.viewOrgViewInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( dpvsGlob.viewOrgViewInfoIndex ) < (unsigned)( 6 )", "dpvsGlob.viewOrgViewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", viewOrgViewInfoIndex, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= 0x21 )
  {
    LODWORD(v5) = 33;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  return &dpvsGlob.views[dpvsGlob.viewOrgViewInfoIndex][v1];
}

/*
==============
R_GetDpvsView
==============
*/
DpvsView *R_GetDpvsView(unsigned int viewInfoIndex, unsigned int sceneViewType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = sceneViewType;
  v3 = viewInfoIndex;
  if ( viewInfoIndex >= 6 )
  {
    v8 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 196, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", viewInfoIndex, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 0x21 )
  {
    LODWORD(v7) = 33;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 197, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return &dpvsGlob.views[v3][v2];
}

/*
==============
R_GetDynEntMapLookup
==============
*/
__int64 R_GetDynEntMapLookup(const DynEntityDef *dynEntDef)
{
  unsigned int v2; 
  unsigned int MapInstanceStartOffset; 
  __int64 v4; 
  ScriptableInstance *v5; 
  __int64 v7; 
  __int64 v8; 
  unsigned int mapInstanceCount; 

  if ( dynEntDef->type != DYNENT_TYPE_SCRIPTABLEINST )
    return 0i64;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  if ( dynEntDef->scriptableMapIndex >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
  {
    mapInstanceCount = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
    LODWORD(v7) = dynEntDef->scriptableMapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 840, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntDef->scriptableMapIndex ) < (unsigned)( ScriptableCommon_GetMapInstanceCount() )", "dynEntDef->scriptableMapIndex doesn't index ScriptableCommon_GetMapInstanceCount()\n\t%i not in [0, %i)", v7, mapInstanceCount) )
      __debugbreak();
  }
  v2 = dynEntDef->scriptableMapIndex + ScriptableCommon_GetMapInstanceStartOffset();
  ScriptableCommon_AssertCountsInitialized();
  if ( v2 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v8) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 842, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  ScriptableCommon_AssertCountsInitialized();
  if ( v2 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v8) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  MapInstanceStartOffset = ScriptableCommon_GetMapInstanceStartOffset();
  if ( v2 < MapInstanceStartOffset )
    return 0i64;
  v4 = v2 - MapInstanceStartOffset;
  if ( (unsigned int)v4 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
  {
    LODWORD(v8) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = &cm.mapEnts->scriptableMapEnts.mapInstances[v4];
  if ( v5 )
    return v5->mapEntLookup;
  else
    return 0i64;
}

/*
==============
R_GetFarPlaneDist
==============
*/
float R_GetFarPlaneDist()
{
  _XMM2 = r_zfar->current.unsignedInt;
  __asm { vcmpneqss xmm1, xmm2, xmm0 }
  _XMM0 = LODWORD(dpvsGlob.cullDist);
  __asm { vblendvps xmm0, xmm0, xmm2, xmm1 }
  return *(float *)&_XMM0;
}

/*
==============
R_InitSceneBuffers
==============
*/
void R_InitSceneBuffers(void)
{
  unsigned __int8 **entVisData; 
  __int64 v1; 
  unsigned int *v2; 
  unsigned __int64 v3; 

  if ( (gfxCfg.entCount & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4413, ASSERT_TYPE_SANITY, "( (gfxCfg.entCount & 31) == 0 )", (const char *)&queryFormat, "(gfxCfg.entCount & 31) == 0") )
    __debugbreak();
  scene.entOverflowedDrawBuf = (unsigned int *)R_AllocGlobalVariable((unsigned __int64)gfxCfg.entCount >> 3, "R_InitSceneBuffers");
  entVisData = scene.dpvs.entVisData;
  v1 = 12i64;
  do
  {
    *entVisData++ = (unsigned __int8 *)R_AllocGlobalVariable(gfxCfg.entCount, "R_InitSceneBuffers");
    --v1;
  }
  while ( v1 );
  scene.dpvs.sceneXModelIndex = (unsigned __int16 *)R_AllocGlobalVariable(2i64 * gfxCfg.entCount, "R_InitSceneBuffers");
  scene.dpvs.sceneDObjIndex = (unsigned __int16 *)R_AllocGlobalVariable(2i64 * gfxCfg.entCount, "R_InitSceneBuffers");
  if ( gfxCfg.maxClientViews )
  {
    do
    {
      v2 = (unsigned int *)R_AllocGlobalVariable(4 * ((unsigned __int64)gfxCfg.entCount >> 5), "R_InitSceneBuffers");
      v3 = 8i64 * gfxCfg.entCount;
      scene.dpvs.entVisBits[v1] = v2;
      scene.dpvs.entInfo[v1] = (GfxEntCellRefInfo *)R_AllocGlobalVariable(v3, "R_InitSceneBuffers");
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < gfxCfg.maxClientViews );
  }
}

/*
==============
R_InitSceneData
==============
*/
void R_InitSceneData(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int cellCount; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  int v7; 

  v1 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4370, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4371, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( gfxCfg.maxClientViews * gfxCfg.entCount > 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4373, ASSERT_TYPE_ASSERT, "(gfxCfg.maxClientViews * gfxCfg.entCount <= (4 * 2048))", (const char *)&queryFormat, "gfxCfg.maxClientViews * gfxCfg.entCount <= MAX_TOTAL_ENT_COUNT") )
    __debugbreak();
  cellCount = rgp.world->dpvsPlanes.cellCount;
  if ( (gfxCfg.entCount & 0x1F) != 0 )
  {
    LODWORD(v6) = gfxCfg.entCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4375, ASSERT_TYPE_ASSERT, "( ( !(gfxCfg.entCount & 31) ) )", "( gfxCfg.entCount ) = %i", v6) )
      __debugbreak();
  }
  v3 = (unsigned int)(v1 * (gfxCfg.entCount >> 5));
  if ( (unsigned int)v3 >= 0x100 )
  {
    v7 = 256;
    LODWORD(v6) = v1 * (gfxCfg.entCount >> 5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4378, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( (4 * 2048) >> 5 )", "offset doesn't index MAX_TOTAL_ENT_COUNT >> 5\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v4 = 0;
  v5 = 2 * cellCount;
  if ( v5 )
  {
    do
      memset_0(&rgp.world->dpvsPlanes.sceneEntCellBits[256 * v4++ + v3], 0, 4 * ((unsigned __int64)gfxCfg.entCount >> 5));
    while ( v4 < v5 );
  }
  memset_0(scene.dpvs.entVisBits[v1], 0, 4 * ((unsigned __int64)gfxCfg.entCount >> 5));
  memset_0(scene.dpvs.entInfo[v1], 0, 8i64 * gfxCfg.entCount);
}

/*
==============
R_InitSceneEntity
==============
*/
void R_InitSceneEntity(GfxSceneEntity *sceneEnt)
{
  vec3_t outOrigin; 
  __int64 v3; 
  MaterialLodSettings materialLodSettings; 

  v3 = -2i64;
  R_SetMaterialLodSettings(&materialLodSettings);
  GfxSceneEntity_GetLightingOrigin(sceneEnt, &outOrigin);
  DObjGetSurfaceData(sceneEnt->obj, &outOrigin, (unsigned __int8 (*)[254])sceneEnt->lods, (float (*)[254])sceneEnt->materialLods, &materialLodSettings);
  CG_Entity_PredictiveSkinCEntity(sceneEnt, ((0x80000000 >> ((*((_DWORD *)sceneEnt + 346) >> 10) & 0x1F)) & scene.dpvs.entVisBits[scene.dpvs.localClientNum][(unsigned __int64)((*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF) >> 5]) == 0);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
R_IsCellVisible
==============
*/
_BOOL8 R_IsCellVisible(int cellIndex, int viewInfoIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = cellIndex;
  v3 = viewInfoIndex;
  if ( (unsigned int)cellIndex >= 0x400 )
  {
    v8 = 1024;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4937, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( (1024) )", "cellIndex doesn't index MAX_MAP_CELLS\n\t%i not in [0, %i)", cellIndex, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 6 )
  {
    LODWORD(v7) = 6;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4938, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return ((0x80000000 >> (v2 & 0x1F)) & dpvsGlob.cellVisibleBits[v3][v2 >> 5]) != 0;
}

/*
==============
R_IsEntInScene
==============
*/
bool R_IsEntInScene(const unsigned int entnum)
{
  __int64 v1; 
  unsigned int entCount; 

  v1 = entnum;
  if ( entnum >= gfxCfg.entCount )
  {
    entCount = gfxCfg.entCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4946, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( gfxCfg.entCount )", "entnum doesn't index gfxCfg.entCount\n\t%i not in [0, %i)", entnum, entCount) )
      __debugbreak();
  }
  return scene.dpvs.sceneDObjIndex[v1] != 0xFFFF;
}

/*
==============
R_PortalAssertMsg
==============
*/
char *R_PortalAssertMsg()
{
  char *v0; 
  char *v1; 
  char *v2; 
  char *v3; 
  char *v4; 

  v0 = j_va("\torg %.8gf, %.8gf, %.8gf\n", dpvsGlob.viewOrg.v[0], dpvsGlob.viewOrg.v[1], dpvsGlob.viewOrg.v[2]);
  v1 = j_va("%s\tplane %.8gf, %.8gf, %.8gf, %.8gf\n", v0, dpvsGlob.viewPlane.coeffs.v[0], dpvsGlob.viewPlane.coeffs.v[1], dpvsGlob.viewPlane.coeffs.v[2], dpvsGlob.viewPlane.coeffs.v[3]);
  v2 = j_va("%s\t%.8gf, %.8gf, %.8gf, %.8gf\n", v1, dpvsGlob.viewProjMtx.m.m[0].v[0], dpvsGlob.viewProjMtx.m.m[0].v[1], dpvsGlob.viewProjMtx.m.m[0].v[2], dpvsGlob.viewProjMtx.m.m[0].v[3]);
  v3 = j_va("%s\t%.8gf, %.8gf, %.8gf, %.8gf\n", v2, dpvsGlob.viewProjMtx.m.m[1].v[0], dpvsGlob.viewProjMtx.m.m[1].v[1], dpvsGlob.viewProjMtx.m.m[1].v[2], dpvsGlob.viewProjMtx.m.m[1].v[3]);
  v4 = j_va("%s\t%.8gf, %.8gf, %.8gf, %.8gf\n", v3, dpvsGlob.viewProjMtx.m.m[2].v[0], dpvsGlob.viewProjMtx.m.m[2].v[1], dpvsGlob.viewProjMtx.m.m[2].v[2], dpvsGlob.viewProjMtx.m.m[2].v[3]);
  return j_va("%s\t%.8gf, %.8gf, %.8gf, %.8gf\n", v4, dpvsGlob.viewProjMtx.m.m[3].v[0], dpvsGlob.viewProjMtx.m.m[3].v[1], dpvsGlob.viewProjMtx.m.m[3].v[2], dpvsGlob.viewProjMtx.m.m[3].v[3]);
}

/*
==============
R_SetAllVisDataForScene
==============
*/
void R_SetAllVisDataForScene(unsigned int sceneViewType)
{
  __int64 v1; 
  GfxWorld *world; 
  unsigned int *v3; 
  unsigned int surfaceVisDataCount; 
  __int64 smodelVisDataCount; 
  unsigned int v6; 
  unsigned int *v7; 
  unsigned int *v8; 
  unsigned int v9; 
  unsigned int *v10; 
  unsigned int *primaryLightVisData; 
  unsigned int primaryLightVisDataCount; 
  unsigned int v13; 
  unsigned int *v14; 
  unsigned int *reflectionProbeVisData; 
  unsigned int reflectionProbeVisDataCount; 
  unsigned int v17; 
  unsigned int *v18; 
  unsigned int *volumetricVisData; 
  unsigned int volumetricVisDataCount; 
  unsigned int v21; 
  unsigned int *v22; 
  unsigned int *decalVisData; 
  unsigned int decalVisDataCount; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 

  v1 = sceneViewType;
  if ( sceneViewType >= 0x21 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4953, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", sceneViewType, 33) )
      __debugbreak();
    LODWORD(v27) = 33;
    LODWORD(v26) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4954, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  world = rgp.world;
  v3 = rgp.world->dpvs.surfaceVisData[v1];
  surfaceVisDataCount = rgp.world->dpvs.surfaceVisDataCount;
  smodelVisDataCount = rgp.world->dpvs.smodelVisDataCount;
  if ( v3 )
  {
    memset_0(v3, 255, 4i64 * surfaceVisDataCount);
    world = rgp.world;
    v6 = rgp.world->models->surfaceCount & 0x1F;
    if ( v6 )
    {
      v7 = &rgp.world->dpvs.surfaceVisData[v1][surfaceVisDataCount - 1];
      *v7 &= ~(0xFFFFFFFF >> v6);
      world = rgp.world;
    }
  }
  v8 = world->dpvs.smodelVisData[v1];
  if ( v8 )
  {
    memset_0(v8, 255, 4 * smodelVisDataCount);
    world = rgp.world;
    v9 = rgp.world->smodels.collectionCount & 0x1F;
    if ( v9 )
    {
      v10 = &rgp.world->dpvs.smodelVisData[v1][(unsigned int)(smodelVisDataCount - 1)];
      *v10 &= ~(0xFFFFFFFF >> v9);
      world = rgp.world;
    }
  }
  if ( !(_DWORD)v1 )
  {
    primaryLightVisData = world->dpvs.primaryLightVisData;
    if ( primaryLightVisData )
    {
      primaryLightVisDataCount = g_worldDpvs->primaryLightVisDataCount;
      memset_0(primaryLightVisData, 255, 4i64 * primaryLightVisDataCount);
      world = rgp.world;
      v13 = rgp.world->primaryLightCount & 0x1F;
      if ( v13 )
      {
        v14 = &rgp.world->dpvs.primaryLightVisData[primaryLightVisDataCount - 1];
        *v14 &= ~(0xFFFFFFFF >> v13);
        world = rgp.world;
      }
    }
    reflectionProbeVisData = world->dpvs.reflectionProbeVisData;
    reflectionProbeVisDataCount = g_worldDpvs->reflectionProbeVisDataCount;
    if ( reflectionProbeVisData )
    {
      memset_0(reflectionProbeVisData, 255, 4i64 * reflectionProbeVisDataCount);
      world = rgp.world;
      v17 = rgp.world->draw.reflectionProbeData.reflectionProbeInstanceCount & 0x1F;
      if ( v17 )
      {
        v18 = &rgp.world->dpvs.reflectionProbeVisData[reflectionProbeVisDataCount - 1];
        *v18 &= ~(0xFFFFFFFF >> v17);
        world = rgp.world;
      }
    }
    volumetricVisData = world->dpvs.volumetricVisData;
    volumetricVisDataCount = g_worldDpvs->volumetricVisDataCount;
    if ( volumetricVisData )
    {
      memset_0(volumetricVisData, 255, 4i64 * volumetricVisDataCount);
      world = rgp.world;
      v21 = rgp.world->draw.volumetrics.volumetricCount & 0x1F;
      if ( v21 )
      {
        v22 = &rgp.world->dpvs.volumetricVisData[volumetricVisDataCount - 1];
        *v22 &= ~(0xFFFFFFFF >> v21);
        world = rgp.world;
      }
    }
    decalVisData = world->dpvs.decalVisData;
    decalVisDataCount = g_worldDpvs->decalVisDataCount;
    if ( decalVisData )
    {
      memset_0(decalVisData, 255, 4i64 * decalVisDataCount);
      v25 = rgp.world->draw.decalVolumeCollectionCount & 0x1F;
      if ( v25 )
        rgp.world->dpvs.decalVisData[decalVisDataCount - 1] &= ~(0xFFFFFFFF >> v25);
    }
  }
}

/*
==============
R_SetCullDist
==============
*/

void __fastcall R_SetCullDist(double dist)
{
  __asm { vmaxss  xmm0, xmm0, xmm1 }
  dpvsGlob.cullDist = *(float *)&_XMM0;
}

/*
==============
R_SetViewFrustumPlanes
==============
*/
void R_SetViewFrustumPlanes(GfxViewInfo *viewInfo, int viewInfoIndex)
{
  DpvsView *v3; 
  unsigned int *p_frustumPlaneCount; 
  float *v5; 
  signed __int64 v6; 
  __int64 v7; 

  v3 = dpvsGlob.views[viewInfoIndex];
  p_frustumPlaneCount = &v3->frustumPlaneCount;
  if ( v3->frustumPlaneCount > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4724, ASSERT_TYPE_ASSERT, "(dpvsView->frustumPlaneCount <= ( sizeof( *array_counter( viewInfo->frustumPlanes ) ) + 0 ))", (const char *)&queryFormat, "dpvsView->frustumPlaneCount <= ARRAY_COUNT( viewInfo->frustumPlanes )") )
    __debugbreak();
  v5 = &viewInfo->frustumPlanes[0].v[1];
  v6 = (char *)v3 - (char *)viewInfo;
  v7 = 6i64;
  do
  {
    *(v5 - 1) = *(float *)((char *)v5 + v6 - 2596);
    *v5 = *(float *)((char *)v5 + v6 - 2592);
    v5[1] = *(float *)((char *)v5 + v6 - 2588);
    v5[2] = *(float *)((char *)v5 + v6 - 2584);
    v5 += 4;
    --v7;
  }
  while ( v7 );
  viewInfo->frustumPlaneCount = *p_frustumPlaneCount;
}

/*
==============
R_SetupDpvsForPoint
==============
*/
void R_SetupDpvsForPoint(const GfxViewParms *viewParms)
{
  float v2; 
  GfxWorld *world; 
  float v4; 
  float v5; 
  unsigned __int16 *nodes; 
  int v7; 
  signed int v8; 
  int i; 
  __int64 v10; 
  __int64 v11; 
  float v12; 
  float v17; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3871, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = viewParms->camera.origin.v[0];
  world = rgp.world;
  dpvsGlob.viewOrg.v[0] = v2;
  v4 = viewParms->camera.origin.v[1];
  dpvsGlob.viewOrg.v[1] = v4;
  v5 = viewParms->camera.origin.v[2];
  dpvsGlob.viewOrgIsDir = 0;
  dpvsGlob.viewOrg.v[2] = v5;
  dpvsGlob.viewOrg.v[3] = FLOAT_1_0;
  if ( !rgp.world )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 689, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    world = rgp.world;
    v2 = dpvsGlob.viewOrg.v[0];
    v4 = dpvsGlob.viewOrg.v[1];
    v5 = dpvsGlob.viewOrg.v[2];
  }
  nodes = world->dpvsPlanes.nodes;
  v7 = world->dpvsPlanes.cellCount + 1;
  v8 = *nodes;
  for ( i = v8 - v7; v8 - v7 >= 0; i = v8 - v7 )
  {
    v10 = i;
    v11 = 0i64;
    if ( (float)((float)((float)((float)(v4 * world->dpvsPlanes.planes[v10].normal.v[1]) + (float)(v2 * world->dpvsPlanes.planes[v10].normal.v[0])) + (float)(v5 * world->dpvsPlanes.planes[v10].normal.v[2])) - world->dpvsPlanes.planes[v10].dist) <= 0.0 )
      v11 = (unsigned int)nodes[1] - 2;
    v8 = nodes[v11 + 2];
    nodes += v11 + 2;
  }
  dpvsGlob.viewOrgCell = v8 - 1;
  if ( !v8 || v8 > (signed int)world->dpvsPlanes.cellCount )
    dpvsGlob.viewOrgCell = 0;
  *(_QWORD *)dpvsGlob.viewPlane.coeffs.v = *(_QWORD *)viewParms->camera.axis.m[0].v;
  v12 = v5 * viewParms->camera.axis.m[0].v[2];
  dpvsGlob.viewPlane.coeffs.v[2] = viewParms->camera.axis.m[0].v[2];
  _XMM0 = LODWORD(dpvsGlob.cullDist);
  dpvsGlob.nearPlane = &dpvsGlob.viewPlane;
  dpvsGlob.viewPlane.coeffs.v[3] = 0.1 - (float)((float)((float)(v4 * dpvsGlob.viewPlane.coeffs.v[1]) + (float)(dpvsGlob.viewPlane.coeffs.v[0] * v2)) + v12);
  _XMM2 = r_zfar->current.unsignedInt;
  __asm
  {
    vcmpneqss xmm1, xmm2, xmm4
    vblendvps xmm9, xmm0, xmm2, xmm1
  }
  if ( *(float *)&_XMM9 > 0.0 )
  {
    LODWORD(dpvsGlob.fogPlane.coeffs.v[0]) = LODWORD(viewParms->camera.axis.m[0].v[0]) ^ _xmm;
    LODWORD(dpvsGlob.fogPlane.coeffs.v[1]) = LODWORD(viewParms->camera.axis.m[0].v[1]) ^ _xmm;
    LODWORD(v17) = LODWORD(viewParms->camera.axis.m[0].v[2]) ^ _xmm;
    dpvsGlob.fogPlane.coeffs.v[3] = *(float *)&_XMM9 - (float)((float)((float)(dpvsGlob.fogPlane.coeffs.v[0] * v2) + (float)(v4 * dpvsGlob.fogPlane.coeffs.v[1])) + (float)(v5 * v17));
    dpvsGlob.fogPlane.coeffs.v[2] = v17;
    dpvsGlob.farPlane = &dpvsGlob.fogPlane;
  }
  else
  {
    dpvsGlob.farPlane = NULL;
  }
}

/*
==============
R_SetupSunShadowSurfacesDpvs
==============
*/
void R_SetupSunShadowSurfacesDpvs(const GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow)
{
  __m256i *frustumSidePlanes; 
  __int64 v5; 
  unsigned int v6; 
  DpvsPlane *cameraPlanes; 
  DpvsView *v8; 
  __int64 v9; 
  GfxSunShadow *p_sunShadow; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  DpvsView *v15; 
  __int64 v16; 
  DpvsView *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  DpvsPlane *v21; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4851, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4852, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  frustumSidePlanes = (__m256i *)sunShadow->partition[0].frustumSidePlanes;
  v5 = 1i64;
  v21 = sunShadow->partition[0].frustumSidePlanes;
  v6 = 0;
  v20 = 1i64;
  cameraPlanes = sunShadow->cameraPlanes;
  do
  {
    v8 = &dpvsGlob.views[viewInfo->viewInfoIndex][v5];
    v8->sceneEntRenderFlagsMask = 40;
    v8->sceneEntRenderFlags = 40;
    v8->dynEntRenderFlagsMask = 8;
    v8->dynEntRenderFlags = 8;
    v8->frustumPlaneCount = 0;
    memcpy_0(v8->frustumPlanes, cameraPlanes, 16i64 * sunShadow->cameraPlaneCount);
    v8->frustumPlaneCount += sunShadow->cameraPlaneCount;
    v9 = v8->frustumPlaneCount + 1i64;
    *(__m256i *)(&v8->sceneEntRenderFlagsMask + 1 * v9) = *frustumSidePlanes;
    *(__m256i *)v8->frustumPlanes[v9 + 1].coeffs.v = frustumSidePlanes[1];
    v8->frustumPlaneCount += 4;
    if ( sunShadow->firstCachedSunShadowPartition <= v6 && v6 <= sunShadow->lastCachedSunShadowPartition )
    {
      p_sunShadow = &frontEndDataOut->sunShadow;
      if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(p_sunShadow, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v11 = (__int64)&p_sunShadow->partitionCache[v6 - p_sunShadow->firstCachedSunShadowPartition];
      v12 = 0;
      if ( !*(_DWORD *)(v11 + 4) )
        goto LABEL_27;
      do
      {
        v13 = v12++;
        v14 = 864 * v13;
        v15 = &dpvsGlob.views[viewInfo->viewInfoIndex][*(int *)(864 * v13 + v11 + 32)];
        v15->sceneEntRenderFlagsMask = v8->sceneEntRenderFlagsMask;
        v15->sceneEntRenderFlags = v8->sceneEntRenderFlags;
        v15->dynEntRenderFlagsMask = v8->dynEntRenderFlagsMask;
        LODWORD(v13) = v8->dynEntRenderFlags;
        v15->frustumPlaneCount = 0;
        v15->dynEntRenderFlags = v13;
        v16 = *(_QWORD *)(v14 + v11 + 16);
        *(__m256i *)v15->frustumPlanes[0].coeffs.v = *(__m256i *)(v16 + 48);
        *(__m256i *)v15->frustumPlanes[2].coeffs.v = *(__m256i *)(v16 + 80);
        v15->frustumPlaneCount = 4;
      }
      while ( v12 < *(_DWORD *)(v11 + 4) );
      cameraPlanes = sunShadow->cameraPlanes;
      if ( v12 < 0xA )
      {
LABEL_27:
        do
        {
          v17 = dpvsGlob.views[viewInfo->viewInfoIndex];
          if ( !R_IsCachedSunShadowPartition(sunShadow, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 369, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
            __debugbreak();
          v18 = v12 + 10 * (v6 - sunShadow->firstCachedSunShadowPartition) + 12;
          ++v12;
          v19 = v18;
          *(_QWORD *)&v17[v19].sceneEntRenderFlagsMask = 0i64;
          *(_QWORD *)&v17[v19].dynEntRenderFlagsMask = 0i64;
          v17[v19].frustumPlaneCount = 0;
        }
        while ( v12 < 0xA );
        frustumSidePlanes = (__m256i *)v21;
        cameraPlanes = sunShadow->cameraPlanes;
        v5 = v20;
      }
    }
    ++v5;
    frustumSidePlanes += 17;
    v20 = v5;
    ++v6;
    v21 = (DpvsPlane *)frustumSidePlanes;
  }
  while ( v6 < 4 );
}

/*
==============
R_SetupWorldSurfacesDpvs
==============
*/
void R_SetupWorldSurfacesDpvs(const GfxViewParms *viewParms, int viewInfoIndex)
{
  __int64 v2; 
  float v4; 
  float *v5; 
  int v6; 
  float *v7; 
  bool v8; 
  float *v9; 
  float v10; 
  float v11; 
  __m128 v12; 
  int v13; 
  const dvar_t *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v18; 
  DpvsView *v20; 
  vec4_t vec; 

  v2 = viewInfoIndex;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4678, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4679, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !viewParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4680, ASSERT_TYPE_ASSERT, "(viewParms)", (const char *)&queryFormat, "viewParms") )
    __debugbreak();
  vec.v[3] = FLOAT_1_0;
  v20 = dpvsGlob.views[v2];
  v20->sceneEntRenderFlags = 0x8000;
  v20->sceneEntRenderFlagsMask = 0x8000;
  *(_QWORD *)&v20->dynEntRenderFlagsMask = 0i64;
  *(__m256i *)dpvsGlob.viewProjMtx.m.m[0].v = *(__m256i *)viewParms->viewProjectionMatrix.m.m[0].v;
  *(__m256i *)dpvsGlob.viewProjMtx.m.row2.v = *(__m256i *)viewParms->viewProjectionMatrix.m.row2.v;
  LODWORD(v4) = LODWORD(viewParms->camera.origin.v[1]) ^ _xmm;
  LODWORD(vec.v[0]) = LODWORD(viewParms->camera.origin.v[0]) ^ _xmm;
  LODWORD(vec.v[2]) = LODWORD(viewParms->camera.origin.v[2]) ^ _xmm;
  vec.v[1] = v4;
  MatrixTransformVector44Aligned(&vec, &viewParms->viewProjectionMatrix.m, &dpvsGlob.viewProjMtx.m.m[3]);
  v18 = 4i64;
  dpvsGlob.invViewProjMtx = viewParms->inverseViewProjectionMatrix;
  v5 = &v20->frustumPlanes[0].coeffs.v[1];
  do
  {
    v6 = 0;
    v7 = v5 - 1;
    v8 = 1;
    v9 = &dpvsGlob.viewProjMtx.m.m[0].v[2];
    do
    {
      if ( !v8 )
      {
        LODWORD(v16) = 4;
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      v10 = (float)((float)((float)(*(float *)((char *)v5 + (char *)standardFrustumSidePlanes - (char *)v20->frustumPlanes - 4) * *(v9 - 2)) + (float)(*(v9 - 1) * *(float *)((char *)v5 + (char *)&standardFrustumSidePlanes[0].xyz.y - (char *)v20->frustumPlanes - 4))) + (float)(*v9 * *(float *)((char *)v5 + (char *)&standardFrustumSidePlanes[0].xyz.y - (char *)v20->frustumPlanes))) + (float)(v9[1] * *(float *)((char *)v5 + (char *)&standardFrustumSidePlanes[0].xyz.y - (char *)v20->frustumPlanes + 4));
      if ( (unsigned int)v6 >= 4 )
      {
        LODWORD(v16) = 4;
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      *v7++ = v10;
      ++v6;
      v9 += 4;
      v8 = (unsigned int)v6 < 4;
    }
    while ( v6 < 4 );
    v11 = fsqrt((float)((float)(*(v5 - 1) * *(v5 - 1)) + (float)(*v5 * *v5)) + (float)(v5[1] * v5[1]));
    if ( v11 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 385, ASSERT_TYPE_ASSERT, "(length > 0)", (const char *)&queryFormat, "length > 0") )
      __debugbreak();
    v12 = (__m128)LODWORD(FLOAT_1_0);
    v12.m128_f32[0] = 1.0 / v11;
    *(__m128 *)(v5 - 1) = _mm128_mul_ps(_mm_shuffle_ps(v12, v12, 0), *(__m128 *)(v5 - 1));
    v5 += 4;
    --v18;
  }
  while ( v18 );
  if ( viewParms->projectionMatrix.m.m[3].v[3] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4700, ASSERT_TYPE_ASSERT, "(viewParms->projectionMatrix.m[3][3] == 0)", (const char *)&queryFormat, "viewParms->projectionMatrix.m[3][3] == 0") )
    __debugbreak();
  R_SetupDpvsForPoint(viewParms);
  dpvsGlob.viewOrgViewInfoIndex = viewInfoIndex;
  dpvsGlob.sideFrustumPlanes = v20->frustumPlanes;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 255, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !dpvsGlob.nearPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 257, ASSERT_TYPE_ASSERT, "(dpvsGlob.nearPlane)", (const char *)&queryFormat, "dpvsGlob.nearPlane") )
    __debugbreak();
  v20->frustumPlanes[4] = *dpvsGlob.nearPlane;
  v13 = 5;
  if ( dpvsGlob.farPlane )
  {
    v20->frustumPlanes[5] = *dpvsGlob.farPlane;
    v13 = 6;
  }
  v14 = DCONST_DVARBOOL_r_draw_frustum;
  v20->frustumPlaneCount = v13;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_draw_frustum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
    R_AddDebugFrustum(&frontEndDataOut->debugGlobals, viewParms);
}

/*
==============
R_ShowCull
==============
*/
void R_ShowCull(void)
{
  unsigned int unsignedInt; 
  __int64 v1; 
  __int64 v2; 
  unsigned __int8 *v3; 
  bool v4; 
  const DObj **p_obj; 
  __int64 sceneDObjCount; 
  int v7; 
  const vec4_t *v8; 
  unsigned __int8 *v9; 
  bool v10; 
  Bounds *p_bounds; 
  __int64 sceneModelCount; 
  const vec4_t *v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  __int64 sceneDynModelCount; 
  unsigned __int16 dynEntClientId; 
  __int64 v18; 
  DynEntityPose *v19; 
  DynEntityClient *v20; 
  const vec4_t *v21; 
  unsigned __int8 *v22; 
  bool v23; 
  const Bounds **p_bmodel; 
  __int64 sceneBrushCount; 
  const vec4_t *v26; 
  unsigned __int8 *v27; 
  bool v28; 
  __int64 v29; 
  __int64 sceneDynBrushCount; 
  unsigned __int16 v31; 
  const vec4_t *v32; 
  unsigned __int8 *sceneVolumetricVisData; 
  __int64 sceneVolumetricCount; 
  float v36; 
  __int128 v38; 
  float v41; 
  __int128 v43; 
  float v46; 
  __int128 v48; 
  __m128 v56; 
  __m128 v58; 
  const vec4_t *v61; 
  unsigned int volumetricVisDataCount; 
  unsigned int *volumetricVisData; 
  unsigned int v64; 
  unsigned int v65; 
  unsigned int v66; 
  float v69; 
  __int128 v71; 
  float v74; 
  __int128 v76; 
  float v79; 
  __int128 v81; 
  __m128 v89; 
  __m128 v91; 
  __int64 v94; 
  __int64 v95; 
  bool v96; 
  bool v97; 
  unsigned int v98; 
  Bounds bounds; 
  __int128 v100; 
  __int128 v101; 
  __int128 v102; 
  __int128 v103; 
  __int128 v104; 
  __int128 v105; 
  Bounds outBounds; 

  unsignedInt = r_showCull->current.unsignedInt;
  v98 = unsignedInt;
  if ( unsignedInt < 0x21 )
  {
    LODWORD(v1) = 0;
    if ( r_showCullXModels->current.enabled )
    {
      if ( unsignedInt < 0xC )
      {
        v2 = unsignedInt;
        *(_QWORD *)&v100 = r_showCull->current.unsignedInt;
        v3 = scene.sceneDObjVisData[(unsigned __int64)unsignedInt];
        v4 = r_showCullMode->current.integer != 0;
        if ( scene.sceneDObjCount )
        {
          p_obj = &scene.sceneDObj[0].obj;
          sceneDObjCount = (unsigned int)scene.sceneDObjCount;
          while ( 1 )
          {
            GfxSceneEntity_GetBounds((const GfxSceneEntityCull *)p_obj - 33, &outBounds);
            v7 = 0;
            if ( (*p_obj)->numModels )
              break;
LABEL_9:
            if ( !g_testLodToColLod )
              goto LABEL_10;
LABEL_13:
            p_obj += 178;
            ++v3;
            if ( !--sceneDObjCount )
            {
              v2 = v100;
              unsignedInt = v100;
              goto LABEL_15;
            }
          }
          while ( (unsigned __int8)((*p_obj)->models[v7]->collLod - 6) > 1u )
          {
            if ( ++v7 >= (unsigned int)(*p_obj)->numModels )
              goto LABEL_9;
          }
LABEL_10:
          v8 = &colorRed;
          if ( *v3 == 1 )
            v8 = &colorGreen;
          R_AddDebugBox(&frontEndDataOut->debugGlobals, &outBounds, v8, v4);
          goto LABEL_13;
        }
LABEL_15:
        memset(&outBounds, 0, sizeof(outBounds));
        if ( !scene.sceneModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4249, ASSERT_TYPE_ASSERT, "(scene.sceneModelCountValidRead)", (const char *)&queryFormat, "scene.sceneModelCountValidRead") )
          __debugbreak();
        v9 = scene.sceneModelVisData[v2];
        v10 = r_showCullMode->current.integer != 0;
        if ( scene.sceneModelCount )
        {
          p_bounds = &scene.sceneModel[0].bounds;
          sceneModelCount = (unsigned int)scene.sceneModelCount;
          do
          {
            if ( XModelShouldShowBounds(*(const XModel **)p_bounds[-1].midPoint.v) )
            {
              v13 = &colorRed;
              if ( *v9 == 1 )
                v13 = &colorGreen;
              R_AddDebugBox(&frontEndDataOut->debugGlobals, p_bounds, v13, v10);
            }
            p_bounds = (Bounds *)((char *)p_bounds + 152);
            ++v9;
            --sceneModelCount;
          }
          while ( sceneModelCount );
          unsignedInt = v98;
        }
      }
      v14 = rgp.world->dpvsDyn.dynEntVisData[0][unsignedInt];
      if ( v14 && scene.sceneDynModelCount )
      {
        v15 = 0i64;
        sceneDynModelCount = (unsigned int)scene.sceneDynModelCount;
        v96 = r_showCullMode->current.integer != 0;
        do
        {
          dynEntClientId = rgp.world->sceneDynModel[v15].dynEntClientId;
          if ( !g_dynEntPoseLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
            __debugbreak();
          if ( dynEntClientId >= g_dynEntClientEntsAllocCount[0][0] )
          {
            LODWORD(v95) = g_dynEntClientEntsAllocCount[0][0];
            LODWORD(v94) = dynEntClientId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v94, v95) )
              __debugbreak();
          }
          v18 = dynEntClientId;
          v19 = &g_dynEntPoseLists[0][0][dynEntClientId];
          if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4279, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
            __debugbreak();
          if ( dynEntClientId >= g_dynEntClientEntsAllocCount[0][0] )
          {
            LODWORD(v95) = g_dynEntClientEntsAllocCount[0][0];
            LODWORD(v94) = dynEntClientId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v94, v95) )
              __debugbreak();
          }
          if ( !g_dynEntClientLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
            __debugbreak();
          v20 = &g_dynEntClientLists[0][0][dynEntClientId];
          if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4282, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
            __debugbreak();
          if ( XModelShouldShowBounds(v20->activeModel) )
          {
            v21 = &colorRed;
            if ( v14[v18] == 1 )
              v21 = &colorGreen;
            R_AddDebugBox(&frontEndDataOut->debugGlobals, &v19->bounds, v21, v96);
          }
          ++v15;
          --sceneDynModelCount;
        }
        while ( sceneDynModelCount );
        LODWORD(v1) = 0;
        unsignedInt = v98;
      }
    }
    if ( r_showCullBModels->current.enabled )
    {
      if ( unsignedInt < 0xC )
      {
        v22 = scene.sceneBrushVisData[(unsigned __int64)unsignedInt];
        v23 = r_showCullMode->current.integer != 0;
        if ( scene.sceneBrushCount )
        {
          p_bmodel = (const Bounds **)&scene.sceneBrush[0].bmodel;
          sceneBrushCount = (unsigned int)scene.sceneBrushCount;
          do
          {
            v26 = &colorRed;
            if ( *v22 == 1 )
              v26 = &colorGreen;
            R_AddDebugBox(&frontEndDataOut->debugGlobals, *p_bmodel, v26, v23);
            ++v22;
            p_bmodel += 11;
            --sceneBrushCount;
          }
          while ( sceneBrushCount );
          unsignedInt = v98;
        }
      }
      v27 = rgp.world->dpvsDyn.dynEntVisData[1][unsignedInt];
      v28 = r_showCullMode->current.integer != 0;
      if ( v27 && scene.sceneDynBrushCount )
      {
        v29 = 0i64;
        sceneDynBrushCount = (unsigned int)scene.sceneDynBrushCount;
        do
        {
          v31 = rgp.world->sceneDynBrush[v29].dynEntClientId;
          if ( !g_dynEntPoseLists[0][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
            __debugbreak();
          if ( v31 >= g_dynEntClientEntsAllocCount[0][1] )
          {
            LODWORD(v95) = g_dynEntClientEntsAllocCount[0][1];
            LODWORD(v94) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v94, v95) )
              __debugbreak();
          }
          v32 = &colorRed;
          if ( v27[v31] == 1 )
            v32 = &colorGreen;
          R_AddDebugBox(&frontEndDataOut->debugGlobals, &g_dynEntPoseLists[0][1][v31].bounds, v32, v28);
          ++v29;
          --sceneDynBrushCount;
        }
        while ( sceneDynBrushCount );
        LODWORD(v1) = 0;
      }
    }
    if ( r_showCullVolumetrics->current.enabled && !v98 )
    {
      v97 = r_showCullMode->current.integer != 0;
      if ( scene.sceneVolumetricCount )
      {
        sceneVolumetricVisData = scene.sceneVolumetricVisData;
        _RDI = &scene.sceneVolumetrics[0].volumetric.obb.xAxis.v[2];
        sceneVolumetricCount = scene.sceneVolumetricCount;
        do
        {
          v36 = *(_RDI - 2);
          HIDWORD(v100) = 0;
          v38 = v100;
          *(float *)&v38 = v36;
          _XMM5 = v38;
          __asm
          {
            vinsertps xmm5, xmm5, dword ptr [rdi-4], 10h
            vinsertps xmm5, xmm5, dword ptr [rdi], 20h ; ' '
          }
          v100 = _XMM5;
          v41 = _RDI[1];
          HIDWORD(v101) = 0;
          v43 = v101;
          *(float *)&v43 = v41;
          _XMM3 = v43;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rdi+8], 10h
            vinsertps xmm3, xmm3, dword ptr [rdi+0Ch], 20h ; ' '
          }
          v101 = _XMM3;
          v46 = _RDI[4];
          HIDWORD(v102) = 0;
          v48 = v102;
          *(float *)&v48 = v46;
          _XMM4 = v48;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [rdi+14h], 10h
            vinsertps xmm4, xmm4, dword ptr [rdi+18h], 20h ; ' '
          }
          v102 = _XMM4;
          _XMM0 = g_negativeZero.v;
          __asm
          {
            vandnps xmm1, xmm0, xmm5
            vandnps xmm3, xmm0, xmm3
            vandnps xmm4, xmm0, xmm4
            vbroadcastss xmm0, dword ptr [rdi+1Ch]
          }
          v56 = _mm128_mul_ps(_XMM0, _XMM1);
          __asm { vbroadcastss xmm1, dword ptr [rdi+20h] }
          v58 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _XMM3), v56);
          __asm { vbroadcastss xmm1, dword ptr [rdi+24h] }
          _XMM2 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _XMM4), v58);
          bounds.halfSize.v[0] = _XMM2.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rbp+57h+bounds.halfSize+4], xmm2, 1
            vextractps dword ptr [rbp+57h+bounds.halfSize+8], xmm2, 2
          }
          *(_QWORD *)bounds.midPoint.v = *(_QWORD *)(_RDI - 5);
          bounds.midPoint.v[2] = *(_RDI - 3);
          v61 = &colorRed;
          if ( *sceneVolumetricVisData == 1 )
            v61 = &colorGreen;
          R_AddDebugBox(&frontEndDataOut->debugGlobals, &bounds, v61, v97);
          _RDI += 66;
          ++sceneVolumetricVisData;
          --sceneVolumetricCount;
        }
        while ( sceneVolumetricCount );
        LODWORD(v1) = 0;
      }
      volumetricVisDataCount = rgp.world->dpvs.volumetricVisDataCount;
      volumetricVisData = rgp.world->dpvs.volumetricVisData;
      if ( volumetricVisDataCount )
        v64 = *volumetricVisData;
      else
        v64 = 0;
      while ( 1 )
      {
        v65 = v64;
        if ( !v64 )
          break;
LABEL_88:
        v66 = __lzcnt(v65);
        if ( v66 >= 0x20 )
        {
          LODWORD(v95) = 32;
          LODWORD(v94) = v66;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v94, v95) )
            __debugbreak();
        }
        if ( ((0x80000000 >> v66) & v65) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
          __debugbreak();
        v64 = v65 & ~(0x80000000 >> v66);
        _RDX = v66 + 32 * (_DWORD)v1;
        _RCX = rgp.world->draw.volumetrics.volumetrics;
        v69 = _RCX[_RDX].obb.xAxis.v[0];
        HIDWORD(v103) = 0;
        v71 = v103;
        *(float *)&v71 = v69;
        _XMM5 = v71;
        __asm
        {
          vinsertps xmm5, xmm5, dword ptr [rdx+rcx+1Ch], 10h
          vinsertps xmm5, xmm5, dword ptr [rdx+rcx+20h], 20h ; ' '
        }
        v103 = _XMM5;
        v74 = _RCX[_RDX].obb.yAxis.v[0];
        HIDWORD(v104) = 0;
        v76 = v104;
        *(float *)&v76 = v74;
        _XMM3 = v76;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rdx+rcx+28h], 10h
          vinsertps xmm3, xmm3, dword ptr [rdx+rcx+2Ch], 20h ; ' '
        }
        v104 = _XMM3;
        v79 = _RCX[_RDX].obb.zAxis.v[0];
        HIDWORD(v105) = 0;
        v81 = v105;
        *(float *)&v81 = v79;
        _XMM4 = v81;
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rdx+rcx+34h], 10h
          vinsertps xmm4, xmm4, dword ptr [rdx+rcx+38h], 20h ; ' '
        }
        v105 = _XMM4;
        _XMM0 = g_negativeZero.v;
        __asm
        {
          vandnps xmm1, xmm0, xmm5
          vandnps xmm3, xmm0, xmm3
          vandnps xmm4, xmm0, xmm4
          vbroadcastss xmm0, dword ptr [rdx+rcx+3Ch]
        }
        v89 = _mm128_mul_ps(_XMM0, _XMM1);
        __asm { vbroadcastss xmm1, dword ptr [rdx+rcx+40h] }
        v91 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _XMM3), v89);
        __asm { vbroadcastss xmm1, dword ptr [rdx+rcx+44h] }
        _XMM2 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _XMM4), v91);
        bounds.halfSize.v[0] = _XMM2.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbp+57h+bounds.halfSize+4], xmm2, 1
          vextractps dword ptr [rbp+57h+bounds.halfSize+8], xmm2, 2
        }
        *(_QWORD *)bounds.midPoint.v = *(_QWORD *)_RCX[_RDX].obb.center.v;
        bounds.midPoint.v[2] = _RCX[_RDX].obb.center.v[2];
        R_AddDebugBox(&frontEndDataOut->debugGlobals, &bounds, &colorBlue, v97);
      }
      while ( 1 )
      {
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= volumetricVisDataCount )
          break;
        v65 = volumetricVisData[v1];
        if ( v65 )
          goto LABEL_88;
      }
    }
  }
}

/*
==============
R_UnfilterEntFromCells
==============
*/
void R_UnfilterEntFromCells(unsigned int localClientNum, unsigned int entnum)
{
  __int64 v3; 
  unsigned int cellCount; 
  __int64 v5; 
  __int64 v6; 
  unsigned int *v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 

  v3 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2345, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2346, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( entnum == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2347, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
    __debugbreak();
  if ( gfxCfg.maxClientViews * gfxCfg.entCount > 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2349, ASSERT_TYPE_ASSERT, "(gfxCfg.maxClientViews * gfxCfg.entCount <= (4 * 2048))", (const char *)&queryFormat, "gfxCfg.maxClientViews * gfxCfg.entCount <= MAX_TOTAL_ENT_COUNT") )
    __debugbreak();
  cellCount = rgp.world->dpvsPlanes.cellCount;
  if ( (gfxCfg.entCount & 0x1F) != 0 )
  {
    LODWORD(v10) = gfxCfg.entCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2351, ASSERT_TYPE_ASSERT, "( ( !(gfxCfg.entCount & 31) ) )", "( gfxCfg.entCount ) = %i", v10) )
      __debugbreak();
  }
  v5 = (unsigned int)(v3 * (gfxCfg.entCount >> 5));
  if ( (unsigned int)v5 >= 0x100 )
  {
    v11 = 256;
    LODWORD(v10) = v3 * (gfxCfg.entCount >> 5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2354, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( (4 * 2048) >> 5 )", "offset doesn't index MAX_TOTAL_ENT_COUNT >> 5\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v6 = entnum >> 5;
  v7 = &rgp.world->dpvsPlanes.sceneEntCellBits[v5];
  v8 = ~(0x80000000 >> (entnum & 0x1F));
  scene.dpvs.entVisBits[v3][v6] &= v8;
  if ( 2 * cellCount )
  {
    v9 = 2 * cellCount;
    do
    {
      v7[v6] &= v8;
      v6 = (unsigned int)(v6 + 256);
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
R_UnfilterThingFromCells
==============
*/
void R_UnfilterThingFromCells(unsigned int thingIndex, unsigned int *cellBits, unsigned int wordCount)
{
  __int64 v3; 
  unsigned int cellCount; 
  unsigned int v7; 
  __int64 v8; 
  volatile signed __int32 *v9; 

  v3 = thingIndex >> 5;
  cellCount = rgp.world->dpvsPlanes.cellCount;
  v7 = ~(0x80000000 >> (thingIndex & 0x1F));
  if ( cellCount )
  {
    v8 = cellCount;
    do
    {
      v9 = (volatile signed __int32 *)&cellBits[v3];
      if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &cellBits[v3]) )
        __debugbreak();
      _InterlockedAnd(v9, v7);
      v3 = wordCount + (unsigned int)v3;
      --v8;
    }
    while ( v8 );
  }
}

