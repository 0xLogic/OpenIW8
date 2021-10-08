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
  const GpuLightGridRequestRecord *v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned __int8 *v21; 
  GfxSceneModel *v22; 
  const XModel **p_model; 
  const GpuLightGridRequestRecord *lastGpuLightGridRequest; 
  GpuLightGridRequestRecord *v26; 
  unsigned int v28; 
  unsigned int v29; 
  int localClientNum; 
  __int64 v31; 
  unsigned __int8 *v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  GfxSceneDynModel *v36; 
  __int64 dynEntClientId; 
  __int64 v38; 
  unsigned __int16 v39; 
  DynEntityPose *v40; 
  unsigned __int16 v41; 
  DynEntityClient *v42; 
  const GpuLightGridRequestRecord *p_lastGpuLightGridRequest; 
  unsigned int dynEntDefId; 
  unsigned int v45; 
  unsigned int v46; 
  DynEntityList *DynEntityList; 
  unsigned int DynEntMapLookup; 
  const XModel *activeModel; 
  int v52; 
  __int64 v53; 
  unsigned int v54; 
  unsigned int *p_renderFlags; 
  unsigned __int8 *v56; 
  __int64 v57; 
  const GfxBrushModel *v58; 
  unsigned int mdaoVolumeIndex; 
  unsigned int v60; 
  unsigned __int8 *v61; 
  __int64 v62; 
  __int64 v63; 
  GfxSceneDynBrush *v64; 
  __int64 v65; 
  unsigned __int16 v66; 
  DynEntityPose *v67; 
  unsigned __int16 v68; 
  DynEntityClient *v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  DynEntityList *v73; 
  __int64 v74; 
  GfxBrushModel *BrushModel; 
  unsigned int v76; 
  unsigned int v77; 
  GfxDrawSurf **v78; 
  const unsigned __int8 *v79; 
  unsigned __int8 v80; 
  __int64 v81; 
  int v82; 
  int v83; 
  XModel **modelList; 
  __int64 modelCount; 
  GfxDrawSurf **v86; 
  unsigned int v87; 
  GfxSceneDynModel *v88; 
  unsigned __int8 *v89; 
  __int64 v91; 
  __int64 v92; 
  GfxModelDecalVolumeGridInfo decalVolumeGridInfo; 
  GfxModelDecalVolumeGridInfo v94; 
  __int64 v95; 
  __int64 v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned __int8 *v99; 
  LightGridVolumeModifier lgvModifier; 
  LightGridVolumeModifier v101; 
  LightGridVolumeModifier v102; 
  LightGridVolumeModifier result; 
  LightGridVolumeModifier v104; 
  LightGridVolumeModifier v105; 
  GfxDrawSurf *drawSurfs[14]; 
  GfxDrawSurf *lastDrawSurfs[14]; 
  GfxModelLightingProbeInfo lightingInfo; 

  v1 = (unsigned int *)cmd;
  Profile_Begin(552);
  v2 = s_cameraRegionToDSLMap;
  v3 = 13i64;
  v4 = 0i64;
  v96 = 13i64;
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
          LODWORD(v86) = *((_DWORD *)p_obj - 330);
          LODWORD(modelCount) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 917, ASSERT_TYPE_ASSERT, "(sceneEnt->cull.state > CULL_STATE_DONE)", "%s\n\t%d %d '%s'", "sceneEnt->cull.state > CULL_STATE_DONE", modelCount, v86, Name) )
            __debugbreak();
        }
        if ( rg.useLightGridVolumes )
        {
          _RAX = R_LGV_CalcModifier(&result, *((_DWORD *)p_obj - 1) & 0xFFFFF, v10, *((unsigned __int16 *)p_obj + 10), (*((_DWORD *)p_obj - 2) >> 10) & 0xFFF, (*p_obj)->models, (*p_obj)->numModels);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+3A0h+lgvModifier.flags], ymm0
          }
          if ( CL_IsRenderingSplitScreen() )
            v18 = NULL;
          else
            v18 = (const GpuLightGridRequestRecord *)p_obj[3];
          R_LGV_PrepareVolumeInfo_SceneEnt(&lgvModifier, (const GfxSceneEntity *)(p_obj - 174), &lightingInfo, (GpuLightGridRequestRecord *)p_obj[3], v18);
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
  v19 = v1[5];
  v20 = v1[6];
  if ( (unsigned int)v19 < v20 )
  {
    v21 = &scene.sceneModelVisData[0][v19];
    v22 = &scene.sceneModel[v19];
    do
    {
      if ( *v21 == 1 )
      {
        p_model = &v22->model;
        if ( !v22->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 959, ASSERT_TYPE_ASSERT, "(sceneModel->model)", (const char *)&queryFormat, "sceneModel->model") )
          __debugbreak();
        if ( rg.useLightGridVolumes )
        {
          if ( CL_IsRenderingSplitScreen() )
            lastGpuLightGridRequest = NULL;
          else
            lastGpuLightGridRequest = v22->lastGpuLightGridRequest;
          _RAX = R_LGV_CalcModifier(&v104, *((_DWORD *)v22 + 31) & 0xFFFFF, v10, v22->mapEntLookup, (*((_DWORD *)v22 + 30) >> 10) & 0xFFF, &v22->model, 1u);
          v26 = v22->lastGpuLightGridRequest;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+3A0h+var_3B8.flags], ymm0
          }
          R_LGV_PrepareVolumeInfo_SceneModel(&v101, v22, &lightingInfo, v26, lastGpuLightGridRequest);
        }
        R_DecalVolumesGrid_PrepareVolumeInfo_SceneModel(v10, v19, v22, &decalVolumeGridInfo);
        v28 = *((_DWORD *)v22 + 31);
        scene.hudOutlineDObj |= (v28 >> 1) & 1;
        if ( R_AddXModelSurfacesCamera(v10, &v22->info, *p_model, v22->obj, &v22->placement.base.origin, &lightingInfo, v28 & 1, drawSurfs, lastDrawSurfs, v22->mapEntLookup, (XModelThermalMode)((v28 >> 10) & 3), *((_DWORD *)v22 + 31) & 0xFFFFF, v22->gfxPackedEntityIndexBase, &decalVolumeGridInfo) )
        {
          R_MDAO_AddModelOccluders(v10, v22);
          R_EyeSensor_AddLightSensors(v10, v22);
        }
        if ( (*((_BYTE *)v22 + 124) & 9) == 0 )
          CG_DrawHits_OnDrawModelScaled(v10->clientIndex, (*((_DWORD *)v22 + 30) >> 10) & 0xFFF, &v22->placement, *p_model, (*(_DWORD *)&v22->info >> 1) & 0xF);
      }
      LODWORD(v19) = v19 + 1;
      ++v21;
      ++v22;
    }
    while ( (unsigned int)v19 < v20 );
    v1 = (unsigned int *)cmd;
  }
  v29 = v1[10];
  localClientNum = frontEndDataOut->localClientNum;
  v87 = localClientNum;
  v31 = localClientNum;
  v32 = &rgp.world->dpvsDyn.dynEntVisData[0][0][localClientNum * rgp.world->dpvsDyn.dynEntClientCount[0]];
  v33 = v1[9];
  v99 = v32;
  if ( (unsigned int)v33 < v29 )
  {
    v34 = 12 * v33;
    v35 = v29 - (unsigned int)v33;
    v95 = 12 * v33;
    v91 = (unsigned int)v35;
    do
    {
      v36 = (GfxSceneDynModel *)((char *)rgp.world->sceneDynModel + v34);
      v88 = v36;
      dynEntClientId = v36->dynEntClientId;
      if ( v32[dynEntClientId] == 1 )
      {
        if ( (unsigned int)localClientNum >= 2 )
        {
          LODWORD(modelCount) = 2;
          LODWORD(modelList) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v38 = v31;
        if ( !g_dynEntPoseLists[v38][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v39 = g_dynEntClientEntsAllocCount[localClientNum][0];
        if ( (unsigned __int16)dynEntClientId >= v39 )
        {
          LODWORD(modelCount) = v39;
          LODWORD(modelList) = (unsigned __int16)dynEntClientId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v40 = &g_dynEntPoseLists[v38][0][dynEntClientId];
        if ( v87 >= 2 )
        {
          LODWORD(modelCount) = 2;
          LODWORD(modelList) = v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v41 = g_dynEntClientEntsAllocCount[v87][0];
        if ( (unsigned __int16)dynEntClientId >= v41 )
        {
          LODWORD(modelCount) = v41;
          LODWORD(modelList) = (unsigned __int16)dynEntClientId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        if ( !g_dynEntClientLists[v38][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v42 = &g_dynEntClientLists[v38][0][dynEntClientId];
        if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1026, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1027, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
          __debugbreak();
        if ( rg.useLightGridVolumes )
        {
          if ( CL_IsRenderingSplitScreen() )
            p_lastGpuLightGridRequest = NULL;
          else
            p_lastGpuLightGridRequest = &v40->lastGpuLightGridRequest;
          dynEntDefId = v42->dynEntDefId;
          v45 = dynEntDefId >> 19;
          v46 = dynEntDefId & 0x7FFFF;
          v97 = v46;
          DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v45);
          if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
            __debugbreak();
          if ( v46 >= DynEntityList->dynEntCount[0] )
          {
            LODWORD(modelCount) = DynEntityList->dynEntCount[0];
            LODWORD(modelList) = v46;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", modelList, modelCount) )
              __debugbreak();
          }
          DynEntMapLookup = R_GetDynEntMapLookup(&DynEntityList->dynEntDefList[0][v46]);
          if ( !v42->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1042, ASSERT_TYPE_ASSERT, "(dynEntClient->activeModel)", (const char *)&queryFormat, "dynEntClient->activeModel") )
            __debugbreak();
          _RAX = R_LGV_CalcModifier(&v105, 0, v10, DynEntMapLookup, (unsigned int)(unsigned __int16)dynEntClientId + 2047, &v42->activeModel, 1u);
          activeModel = v42->activeModel;
          __asm { vmovups ymm0, ymmword ptr [rax] }
          v52 = (*(_DWORD *)&v88->info >> 5) & 1;
          __asm { vmovups ymmword ptr [rbp+3A0h+var_398.flags], ymm0 }
          R_LGV_PrepareVolumeInfo_DynModel(&v102, DynEntMapLookup, activeModel, v52, &v40->pose, &lightingInfo, &v40->lastGpuLightGridRequest, p_lastGpuLightGridRequest);
          v36 = v88;
          v34 = v95;
        }
        R_DecalVolumesGrid_PrepareVolumeInfo_SceneDynEnt(v10, v36, &v94);
        if ( R_AddXModelSurfacesCamera(v10, &v36->info, v42->activeModel, NULL, &v40->pose.origin, &lightingInfo, 0, drawSurfs, lastDrawSurfs, 0, THERMAL_TECH_ONLY, 0, 0, &v94) )
          R_MDAO_AddDynModelEntityOccluders(v10, v40, v42->activeModel);
        CG_DrawHits_OnDrawModel(v10->clientIndex, (unsigned __int16)dynEntClientId, &v40->pose, v42->activeModel, (*(_DWORD *)&v36->info >> 1) & 0xF);
        v35 = v91;
        v32 = v99;
        localClientNum = v87;
        v31 = (int)v87;
      }
      v34 += 12i64;
      --v35;
      v95 = v34;
      v91 = v35;
    }
    while ( v35 );
    v1 = (unsigned int *)cmd;
  }
  v53 = v1[7];
  v54 = v1[8];
  if ( (unsigned int)v53 < v54 )
  {
    p_renderFlags = &scene.sceneBrush[v53].renderFlags;
    v56 = &scene.sceneBrushVisData[0][v53];
    v57 = v54 - (unsigned int)v53;
    do
    {
      if ( *v56 == 1 )
      {
        v58 = (const GfxBrushModel *)*((_QWORD *)p_renderFlags - 8);
        if ( R_AddBModelSurfacesCamera(v10, (const BModelDrawInfo *)p_renderFlags - 10, v58, drawSurfs, lastDrawSurfs, *p_renderFlags) )
        {
          mdaoVolumeIndex = v58->mdaoVolumeIndex;
          if ( mdaoVolumeIndex != -1 )
          {
            if ( mdaoVolumeIndex >= rgp.world->mdaoVolumeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1094, ASSERT_TYPE_ASSERT, "((uint)bmodel->mdaoVolumeIndex < rgp.world->mdaoVolumeCount)", (const char *)&queryFormat, "(uint)bmodel->mdaoVolumeIndex < rgp.world->mdaoVolumeCount") )
              __debugbreak();
            R_MDAO_AddBrushOccluder(v10, v58, &rgp.world->mdaoVolumes[v58->mdaoVolumeIndex]);
          }
        }
      }
      ++v56;
      p_renderFlags += 22;
      --v57;
    }
    while ( v57 );
    localClientNum = v87;
    v1 = (unsigned int *)cmd;
  }
  v60 = v1[12];
  v61 = &rgp.world->dpvsDyn.dynEntVisData[1][0][localClientNum * rgp.world->dpvsDyn.dynEntClientCount[1]];
  v62 = v1[11];
  v89 = v61;
  if ( (unsigned int)v62 < v60 )
  {
    v63 = v62;
    v92 = v60 - (unsigned int)v62;
    do
    {
      v64 = &rgp.world->sceneDynBrush[v63];
      v65 = v64->dynEntClientId;
      if ( v61[v65] == 1 )
      {
        if ( v87 >= 2 )
        {
          LODWORD(modelCount) = 2;
          LODWORD(modelList) = v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        if ( !g_dynEntPoseLists[v87][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v66 = g_dynEntClientEntsAllocCount[v87][1];
        if ( (unsigned __int16)v65 >= v66 )
        {
          LODWORD(modelCount) = v66;
          LODWORD(modelList) = (unsigned __int16)v65;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v67 = &g_dynEntPoseLists[v87][1][v65];
        if ( v87 >= 2 )
        {
          LODWORD(modelCount) = 2;
          LODWORD(modelList) = v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v68 = g_dynEntClientEntsAllocCount[v87][1];
        if ( (unsigned __int16)v65 >= v68 )
        {
          LODWORD(modelCount) = v68;
          LODWORD(modelList) = (unsigned __int16)v65;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        if ( !g_dynEntClientLists[v87][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v69 = &g_dynEntClientLists[v87][1][v65];
        if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1117, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1118, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
          __debugbreak();
        v70 = v69->dynEntDefId;
        v71 = v70 >> 19;
        v72 = v70 & 0x7FFFF;
        v98 = v72;
        v73 = DynEnt_GetDynEntityList((DynEntityListId)v71);
        if ( !v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
          __debugbreak();
        if ( v72 >= v73->dynEntCount[1] )
        {
          LODWORD(modelCount) = v73->dynEntCount[1];
          LODWORD(modelList) = v72;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", modelList, modelCount) )
            __debugbreak();
        }
        v74 = (__int64)&v73->dynEntDefList[1][v72];
        if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1120, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
          __debugbreak();
        BrushModel = R_GetBrushModel(*(unsigned __int16 *)(v74 + 66));
        if ( R_AddBModelSurfacesCamera(v10, &v64->info, BrushModel, drawSurfs, lastDrawSurfs, 0) )
        {
          v76 = BrushModel->mdaoVolumeIndex;
          if ( v76 != -1 )
          {
            if ( v76 >= rgp.world->mdaoVolumeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1128, ASSERT_TYPE_ASSERT, "((uint)bmodel->mdaoVolumeIndex < rgp.world->mdaoVolumeCount)", (const char *)&queryFormat, "(uint)bmodel->mdaoVolumeIndex < rgp.world->mdaoVolumeCount") )
              __debugbreak();
            R_MDAO_AddDynBrushEntityOccluder(v10, v67, BrushModel, &rgp.world->mdaoVolumes[BrushModel->mdaoVolumeIndex]);
          }
        }
        v61 = v89;
      }
      ++v63;
      --v92;
    }
    while ( v92 );
    v1 = (unsigned int *)cmd;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(553);
  v77 = v1[2];
  v78 = drawSurfs;
  v79 = s_cameraRegionToDSLMap;
  do
  {
    v80 = *v79;
    if ( *v79 < 0x1Au )
    {
      v81 = v80;
      v82 = truncate_cast<int,__int64>(*v78 - scene.drawSurfs[v80]);
      scene.drawSurfCount[v81] = v82;
      v83 = v82;
      if ( v77 )
      {
        Sys_ProfBeginNamedEvent(0xFF708090, "sort surfs");
        R_SortDrawSurfs(scene.drawSurfs[v81], v83);
        Sys_ProfEndNamedEvent();
      }
    }
    ++v79;
    ++v78;
    --v96;
  }
  while ( v96 );
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
  unsigned __int8 *v17; 
  __int64 sceneBrushCount; 
  unsigned int *p_surfBufSize; 
  unsigned int *entOverflowedDrawBuf; 
  unsigned __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 localClientNum; 
  __int64 v25; 
  unsigned __int8 *v26; 
  __int64 sceneDynModelCount; 
  GfxSceneDynModel *v28; 
  unsigned __int16 dynEntClientId; 
  unsigned __int16 v30; 
  DynEntityClient *v31; 
  GfxWorld *world; 
  unsigned __int8 *v34; 
  __int64 sceneDynBrushCount; 
  GfxSceneDynBrush *v36; 
  unsigned __int16 v37; 
  unsigned __int16 v38; 
  __int64 v39; 
  DynEntityClient *v40; 
  unsigned int dynEntDefId; 
  unsigned int v42; 
  unsigned int v43; 
  DynEntityList *DynEntityList; 
  const GfxBrushModel *BrushModel; 
  GfxDrawSurf *v46; 
  int v47; 
  int v48; 
  vec3_t *origin; 
  __int64 sceneViewType; 
  GfxSceneViewType v51; 
  __int64 v52; 
  __int64 v53; 
  GfxDrawSurf *lastDrawSurf; 
  __int64 v55; 
  vec3_t v56; 
  vec3_t v57; 

  __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
  v2 = (int)spotShadowIndex;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1359, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  v3 = v2 + 4;
  v51 = v2 + 4;
  if ( (unsigned int)(v2 + 4) >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1360, ASSERT_TYPE_ASSERT, "(SCENE_VIEW_SPOTSHADOW_0 + spotShadowIndex < SCENE_VIEW_COUNT_ENTVIS)", (const char *)&queryFormat, "SCENE_VIEW_SPOTSHADOW_0 + spotShadowIndex < SCENE_VIEW_COUNT_ENTVIS") )
    __debugbreak();
  v4 = (unsigned int)(v2 + 18);
  v5 = v2 + 4;
  v55 = v4;
  v6 = scene.drawSurfs[v4];
  v7 = v5 << 9;
  v8 = &v6[scene.drawSurfLimit[v4]];
  v53 = v5;
  lastDrawSurf = v8;
  v52 = v5 << 9;
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
    v7 = v52;
    v5 = v53;
  }
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1383, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  v12 = scene.sceneModelVisData[v5];
  __asm { vxorps  xmm6, xmm6, xmm6 }
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
          __asm
          {
            vmovss  dword ptr [rsp+0C8h+var_60], xmm6
            vmovss  dword ptr [rsp+0C8h+var_60+4], xmm6
            vmovss  dword ptr [rsp+0C8h+var_60+8], xmm6
          }
          v6 = R_AddXModelSurfaces(&sceneModel->info, model, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, v8, &v56, v3);
        }
      }
      ++v12;
      ++sceneModel;
      --sceneDObjModelCount;
    }
    while ( sceneDObjModelCount );
    v7 = v52;
  }
  v17 = &scene.sceneBrushVisData[0][v7];
  if ( scene.sceneBrushCount )
  {
    sceneBrushCount = (unsigned int)scene.sceneBrushCount;
    p_surfBufSize = &scene.sceneBrush[0].info.surfBufSize;
    do
    {
      if ( *v17 == 1 )
      {
        if ( (p_surfBufSize[19] & 0x20000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1422, ASSERT_TYPE_ASSERT, "(!(sceneBrush->renderFlags & (1 << 17)))", (const char *)&queryFormat, "!(sceneBrush->renderFlags & RF_NO_SPOTSHADOWS)") )
          __debugbreak();
        if ( !*p_surfBufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1423, ASSERT_TYPE_ASSERT, "(sceneBrush->info.surfBufSize)", (const char *)&queryFormat, "sceneBrush->info.surfBufSize") )
          __debugbreak();
        entOverflowedDrawBuf = scene.entOverflowedDrawBuf;
        v21 = *((unsigned __int16 *)p_surfBufSize + 2);
        if ( !scene.entOverflowedDrawBuf && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", LODWORD(scene.entOverflowedDrawBuf) + 12, (AssertType)(LODWORD(scene.entOverflowedDrawBuf) + 1), "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v22 = entOverflowedDrawBuf[v21 >> 5];
        if ( _bittest((const int *)&v22, v21 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1424, ASSERT_TYPE_ASSERT, "(!Com_BitCheckAssert( scene.entOverflowedDrawBuf, sceneBrush->entnum, std::extent<decltype( scene.entOverflowedDrawBuf )>::value ? sizeof( decltype( scene.entOverflowedDrawBuf ) ) : 0 ))", (const char *)&queryFormat, "!Com_BitCheck( scene.entOverflowedDrawBuf, sceneBrush->entnum )") )
          __debugbreak();
        v6 = R_AddBModelSurfaces((const BModelDrawInfo *)(p_surfBufSize - 1), *(const GfxBrushModel **)(p_surfBufSize + 3), v3, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, v8);
      }
      ++v17;
      p_surfBufSize += 22;
      --sceneBrushCount;
    }
    while ( sceneBrushCount );
  }
  v23 = 0i64;
  localClientNum = frontEndDataOut->localClientNum;
  v25 = localClientNum;
  v26 = &rgp.world->dpvsDyn.dynEntVisData[0][v53][(unsigned int)(localClientNum * rgp.world->dpvsDyn.dynEntClientCount[0])];
  if ( scene.sceneDynModelCount )
  {
    sceneDynModelCount = (unsigned int)scene.sceneDynModelCount;
    do
    {
      if ( *v26 == 1 )
      {
        v28 = &rgp.world->sceneDynModel[v23];
        dynEntClientId = v28->dynEntClientId;
        if ( (unsigned int)localClientNum >= 2 )
        {
          LODWORD(sceneViewType) = 2;
          LODWORD(origin) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        v30 = g_dynEntClientEntsAllocCount[localClientNum][0];
        if ( dynEntClientId >= v30 )
        {
          LODWORD(sceneViewType) = v30;
          LODWORD(origin) = dynEntClientId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        if ( !g_dynEntClientLists[localClientNum][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v31 = &g_dynEntClientLists[localClientNum][0][dynEntClientId];
        if ( !v31->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1450, ASSERT_TYPE_ASSERT, "(dynEntClient->activeModel)", (const char *)&queryFormat, "dynEntClient->activeModel") )
          __debugbreak();
        if ( ((*(_DWORD *)&v28->info >> 1) & 0xFu) < v31->activeModel->shadowCutoffLod )
        {
          __asm
          {
            vmovss  dword ptr [rsp+0C8h+var_50], xmm6
            vmovss  dword ptr [rsp+0C8h+var_50+4], xmm6
            vmovss  dword ptr [rsp+0C8h+var_50+8], xmm6
          }
          v6 = R_AddXModelSurfaces(&v28->info, v31->activeModel, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, lastDrawSurf, &v57, v51);
        }
      }
      ++v26;
      ++v23;
      --sceneDynModelCount;
    }
    while ( sceneDynModelCount );
    v25 = localClientNum;
    v23 = 0i64;
  }
  world = rgp.world;
  __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
  v34 = &rgp.world->dpvsDyn.dynEntVisData[1][v53][(unsigned int)(localClientNum * rgp.world->dpvsDyn.dynEntClientCount[1])];
  if ( scene.sceneDynBrushCount )
  {
    sceneDynBrushCount = (unsigned int)scene.sceneDynBrushCount;
    do
    {
      if ( *v34 == 1 )
      {
        v36 = &world->sceneDynBrush[v23];
        v37 = v36->dynEntClientId;
        if ( (unsigned int)localClientNum >= 2 )
        {
          LODWORD(sceneViewType) = 2;
          LODWORD(origin) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        v38 = g_dynEntClientEntsAllocCount[v25][1];
        if ( v37 >= v38 )
        {
          LODWORD(sceneViewType) = v38;
          LODWORD(origin) = v37;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        v39 = v25;
        if ( !g_dynEntClientLists[v39][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v40 = &g_dynEntClientLists[v39][1][v37];
        if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1477, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
          __debugbreak();
        dynEntDefId = v40->dynEntDefId;
        v42 = dynEntDefId >> 19;
        v43 = dynEntDefId & 0x7FFFF;
        DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v42);
        if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
          __debugbreak();
        if ( v43 >= DynEntityList->dynEntCount[1] )
        {
          LODWORD(sceneViewType) = DynEntityList->dynEntCount[1];
          LODWORD(origin) = v43;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", origin, sceneViewType) )
            __debugbreak();
        }
        BrushModel = R_GetBrushModel(DynEntityList->dynEntDefList[1][v43].brushModel);
        v46 = R_AddBModelSurfaces(&v36->info, BrushModel, v51, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, v6, lastDrawSurf);
        world = rgp.world;
        v6 = v46;
      }
      ++v34;
      ++v23;
      v25 = localClientNum;
      --sceneDynBrushCount;
    }
    while ( sceneDynBrushCount );
  }
  v47 = truncate_cast<int,__int64>(v6 - scene.drawSurfs[v55]);
  scene.drawSurfCount[v55] = v47;
  v48 = v47;
  Sys_ProfBeginNamedEvent(0xFF708090, "sort surfs");
  R_SortDrawSurfs(scene.drawSurfs[v55], v48);
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
  unsigned int cellCount; 
  __int64 viewInfoIndex; 
  unsigned int *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  __int64 v22; 
  unsigned int v23; 
  signed __int64 v35; 
  _DWORD *v36; 
  __int64 v37; 
  unsigned int v38; 
  __int64 v40; 
  unsigned __int64 v42; 
  GfxWorld *world; 
  GfxBackEndData *v45; 
  unsigned int transientZone; 
  unsigned int v73; 
  __int64 v76; 
  GfxWorld *v78; 
  GfxBackEndData *v79; 
  unsigned int v80; 
  __int64 v116; 
  __int64 v117; 
  _DWORD v119[32]; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4045, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  cellCount = rgp.world->dpvsPlanes.cellCount;
  if ( !cellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4048, ASSERT_TYPE_ASSERT, "(cellCount)", (const char *)&queryFormat, "cellCount") )
    __debugbreak();
  viewInfoIndex = viewInfo->viewInfoIndex;
  __asm
  {
    vmovaps [rsp+1C8h+var_48], xmm6
    vmovaps [rsp+1C8h+var_58], xmm7
    vmovaps [rsp+1C8h+var_68], xmm8
    vmovaps [rsp+1C8h+var_78], xmm9
    vmovaps [rsp+1C8h+var_88], xmm10
    vmovaps [rsp+1C8h+var_98], xmm11
  }
  v16 = dpvsGlob.cellVisibleBits[viewInfoIndex];
  __asm
  {
    vmovaps [rsp+1C8h+var_A8], xmm12
    vmovaps [rsp+1C8h+var_B8], xmm13
  }
  v16[(__int64)dpvsGlob.viewOrgCell >> 5] |= 0x80000000 >> (dpvsGlob.viewOrgCell & 0x1F);
  __asm { vmovaps [rsp+1C8h+var_C8], xmm14 }
  if ( sm_strictCull->current.enabled )
  {
    v17 = (cellCount + 31) >> 5;
    memset_0(v119, 0, 4i64 * v17);
    v18 = 0;
    if ( cellCount )
    {
      v19 = 0i64;
      do
      {
        if ( ((0x80000000 >> (v18 & 0x1F)) & v16[v19 >> 5]) != 0 )
        {
          _R8 = &rgp.world->cellCasterBits[v17 * v18];
          _RDX = 0i64;
          if ( v17 )
          {
            if ( v17 >= 0x10 )
            {
              v22 = v17 - 1;
              if ( v119 > &_R8[v22] || &v119[v22] < _R8 )
              {
                v23 = 8;
                do
                {
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r8+rdx*4]
                    vpor    xmm1, xmm1, xmmword ptr [rsp+rdx*4+1C8h+var_158]
                    vmovdqu xmmword ptr [rsp+rdx*4+1C8h+var_158], xmm1
                  }
                  _RAX = v23 - 4;
                  _RDX = (unsigned int)(_RDX + 16);
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r8+rax*4]
                    vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1C8h+var_158]
                    vmovdqu xmmword ptr [rsp+rax*4+1C8h+var_158], xmm1
                  }
                  _RAX = v23;
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r8+rax*4]
                    vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1C8h+var_158]
                    vmovdqu xmmword ptr [rsp+rax*4+1C8h+var_158], xmm1
                  }
                  _RAX = v23 + 4;
                  v23 += 16;
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r8+rax*4]
                    vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1C8h+var_158]
                    vmovdqu xmmword ptr [rsp+rax*4+1C8h+var_158], xmm1
                  }
                }
                while ( (unsigned int)_RDX < (v17 & 0xFFFFFFF0) );
              }
            }
            if ( (unsigned int)_RDX < v17 )
            {
              v35 = (char *)_R8 - (char *)v119;
              v36 = &v119[_RDX];
              v37 = v17 - (unsigned int)_RDX;
              do
              {
                *v36 |= *(_DWORD *)((char *)v36 + v35);
                ++v36;
                --v37;
              }
              while ( v37 );
            }
          }
        }
        ++v18;
        ++v19;
      }
      while ( v18 < cellCount );
    }
    v38 = 0;
    if ( cellCount )
    {
      __asm { vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      v40 = 0i64;
      _R14 = 0i64;
      v42 = 0i64;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      do
      {
        if ( ((0x80000000 >> (v38 & 0x1F)) & v119[v42 >> 5]) != 0 )
        {
          world = rgp.world;
          v45 = frontEndDataOut;
          if ( v38 >= rgp.world->dpvsPlanes.cellCount )
          {
            LODWORD(v117) = rgp.world->dpvsPlanes.cellCount;
            LODWORD(v116) = v38;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v116, v117) )
              __debugbreak();
          }
          transientZone = world->cellTransientInfos[v40].transientZone;
          if ( transientZone >= v45->transientDrawContext.zoneCount )
          {
            LODWORD(v117) = v45->transientDrawContext.zoneCount;
            LODWORD(v116) = transientZone;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v116, v117) )
              __debugbreak();
          }
          if ( v45->transientDrawContext.drawCellsPtrs[(unsigned __int16)transientZone] )
          {
            _RCX = rgp.world->cells;
            __asm
            {
              vmovss  xmm7, dword ptr [r14+rcx+0Ch]
              vmovss  xmm8, dword ptr [r14+rcx]
              vmovss  xmm9, dword ptr [r14+rcx+4]
              vmovss  xmm10, dword ptr [r14+rcx+10h]
              vmovss  xmm11, dword ptr [r14+rcx+8]
              vmovss  xmm12, dword ptr [r14+rcx+14h]
            }
            _RCX = &frustumPlanes->coeffs.xyz + 1;
            __asm
            {
              vmovss  xmm1, dword ptr [rcx-0Ch]
              vmovss  xmm5, dword ptr [rcx-8]
              vmovss  xmm6, dword ptr [rcx-4]
              vandps  xmm0, xmm1, xmm13
              vmulss  xmm2, xmm0, xmm7
              vmulss  xmm0, xmm8, xmm1
              vaddss  xmm1, xmm0, dword ptr [rcx]
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm9, xmm5
              vmulss  xmm1, xmm11, xmm6
              vaddss  xmm4, xmm3, xmm2
              vandps  xmm5, xmm5, xmm13
              vmulss  xmm0, xmm5, xmm10
              vaddss  xmm2, xmm4, xmm0
              vandps  xmm6, xmm6, xmm13
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm6, xmm12
              vaddss  xmm1, xmm3, xmm0
              vcomiss xmm1, xmm14
            }
          }
        }
        ++v38;
        ++v42;
        _R14 += 40i64;
        ++v40;
      }
      while ( v38 < cellCount );
    }
  }
  else
  {
    v73 = 0;
    if ( cellCount )
    {
      __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      _RBX = 0i64;
      v76 = 0i64;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      do
      {
        v78 = rgp.world;
        v79 = frontEndDataOut;
        if ( v73 >= rgp.world->dpvsPlanes.cellCount )
        {
          LODWORD(v117) = rgp.world->dpvsPlanes.cellCount;
          LODWORD(v116) = v73;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v116, v117) )
            __debugbreak();
        }
        v80 = v78->cellTransientInfos[v76].transientZone;
        if ( v80 >= v79->transientDrawContext.zoneCount )
        {
          LODWORD(v117) = v79->transientDrawContext.zoneCount;
          LODWORD(v116) = v80;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v116, v117) )
            __debugbreak();
        }
        if ( v79->transientDrawContext.drawCellsPtrs[(unsigned __int16)v80] )
        {
          _RCX = rgp.world->cells;
          _RAX = &frustumPlanes->coeffs.xyz + 1;
          __asm
          {
            vmovss  xmm8, dword ptr [rbx+rcx+0Ch]
            vmovss  xmm9, dword ptr [rbx+rcx]
            vmovss  xmm10, dword ptr [rbx+rcx+4]
            vmovss  xmm11, dword ptr [rbx+rcx+10h]
            vmovss  xmm12, dword ptr [rbx+rcx+8]
            vmovss  xmm13, dword ptr [rbx+rcx+14h]
            vmovss  xmm1, dword ptr [rax-0Ch]
            vmovss  xmm5, dword ptr [rax-8]
            vmovss  xmm6, dword ptr [rax-4]
            vandps  xmm0, xmm1, xmm7
            vmulss  xmm2, xmm0, xmm8
            vmulss  xmm0, xmm9, xmm1
            vaddss  xmm1, xmm0, dword ptr [rax]
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm10, xmm5
            vmulss  xmm1, xmm12, xmm6
            vaddss  xmm4, xmm3, xmm2
            vandps  xmm5, xmm5, xmm7
            vmulss  xmm0, xmm5, xmm11
            vaddss  xmm2, xmm4, xmm0
            vandps  xmm6, xmm6, xmm7
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm6, xmm13
            vaddss  xmm1, xmm3, xmm0
            vcomiss xmm1, xmm14
          }
        }
        ++v73;
        ++v76;
        _RBX += 40i64;
      }
      while ( v73 < cellCount );
    }
  }
  __asm
  {
    vmovaps xmm14, [rsp+1C8h+var_C8]
    vmovaps xmm13, [rsp+1C8h+var_B8]
    vmovaps xmm12, [rsp+1C8h+var_A8]
    vmovaps xmm11, [rsp+1C8h+var_98]
    vmovaps xmm10, [rsp+1C8h+var_88]
    vmovaps xmm9, [rsp+1C8h+var_78]
    vmovaps xmm8, [rsp+1C8h+var_68]
    vmovaps xmm7, [rsp+1C8h+var_58]
    vmovaps xmm6, [rsp+1C8h+var_48]
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
  const DpvsPlane *v13; 
  unsigned int v14; 
  char v15; 
  char v16; 
  __int16 v17; 
  int localClientNum; 
  const DpvsPlane *data; 
  GfxAabbTree *CellAabbTreeFromContext; 
  char v21; 
  char v22; 
  unsigned __int16 v23; 
  const DpvsPlane *v24; 
  int v25; 
  __int16 v26; 
  unsigned __int16 v27; 
  FxGlassVisInfo *GlassVisInfo; 

  v5 = planeCount;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3031, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( R_IsCellTransientZoneLoaded(rgp.world, &frontEndDataOut->transientDrawContext, cellIndex) )
  {
    CellAabbTreeFromContext = R_GetCellAabbTreeFromContext(rgp.world, &frontEndDataOut->transientDrawContext, cellIndex);
    if ( !CellAabbTreeFromContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3044, ASSERT_TYPE_ASSERT, "(dpvsStaticCell.tree)", (const char *)&queryFormat, "dpvsStaticCell.tree") )
      __debugbreak();
    v22 = frustumPlaneCount;
    data = planes;
    v21 = v5;
    v23 = sceneViewType;
    if ( !R_Umbra_UseForStatics(sceneViewType) )
      Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_STATIC, &data);
    v14 = cellIndex;
    v13 = planes;
    v15 = v5;
    v16 = frustumPlaneCount;
    v17 = sceneViewType;
    localClientNum = frontEndDataOut->localClientNum;
    if ( !R_Umbra_UseForDynamics(sceneViewType) )
    {
      Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_SCENE_ENT, &v13);
      if ( sceneViewType != SCENE_VIEW_SUNSHADOW_DISTANT )
      {
        Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_DYN_MODEL, &v13);
        Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_DYN_BRUSH, &v13);
      }
      if ( sceneViewType == SCENE_VIEW_CAMERA )
      {
        v25 = v23;
        v24 = planes;
        v26 = v5;
        v9 = truncate_cast<unsigned short,unsigned int>(cellIndex);
        __asm
        {
          vmovss  xmm0, dword ptr cs:dpvsGlob.viewOrg
          vmovss  xmm1, dword ptr cs:dpvsGlob.viewOrg+4
          vmovss  [rbp+4Fh+var_50], xmm0
          vmovss  xmm0, dword ptr cs:dpvsGlob.viewOrg+8
          vmovss  [rbp+4Fh+var_48], xmm0
          vmovss  [rbp+4Fh+var_4C], xmm1
        }
        v27 = v9;
        GlassVisInfo = FX_GetGlassVisInfo();
        Sys_AddWorkerCmd(WRKCMD_DPVS_CELL_GLASS, &v24);
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
  GfxSceneViewType v11; 
  __int64 v12; 
  unsigned int *v13; 
  unsigned int cellCount; 
  bool v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  __int64 v21; 
  unsigned int v22; 
  signed __int64 v34; 
  _DWORD *v35; 
  __int64 v36; 
  unsigned int v37; 
  __int64 v39; 
  unsigned __int64 v41; 
  GfxWorld *world; 
  GfxBackEndData *v44; 
  unsigned int transientZone; 
  signed int v46; 
  signed int v47; 
  bool v49; 
  unsigned int v75; 
  int v79; 
  int frustumPlaneCount; 
  bool v82; 
  __int64 v117; 
  __int64 v118; 
  __int64 v120; 
  _DWORD v121[32]; 

  v11 = sceneViewType;
  v12 = (int)sceneViewType + 33i64 * viewInfoIndex;
  v13 = dpvsGlob.cellVisibleBits[(__int64)viewInfoIndex];
  v120 = v12 * 244;
  v13[(__int64)dpvsGlob.viewOrgCell >> 5] |= 0x80000000 >> (dpvsGlob.viewOrgCell & 0x1F);
  cellCount = rgp.world->dpvsPlanes.cellCount;
  if ( !cellCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3939, ASSERT_TYPE_ASSERT, "(cellCount)", (const char *)&queryFormat, "cellCount") )
      __debugbreak();
    v11 = sceneViewType;
  }
  v15 = !sm_strictCull->current.enabled;
  __asm
  {
    vmovaps [rsp+1A8h+var_48], xmm6
    vmovaps [rsp+1A8h+var_58], xmm7
    vmovaps [rsp+1A8h+var_68], xmm8
    vmovaps [rsp+1A8h+var_78], xmm9
    vmovaps [rsp+1A8h+var_88], xmm10
    vmovaps [rsp+1A8h+var_98], xmm11
    vmovaps [rsp+1A8h+var_A8], xmm12
    vmovaps [rsp+1A8h+var_B8], xmm13
    vmovaps [rsp+1A8h+var_C8], xmm14
  }
  if ( v15 )
  {
    v75 = 0;
    if ( cellCount )
    {
      __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      _RBX = 0i64;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      do
      {
        v79 = 0;
        frustumPlaneCount = dpvsGlob.views[0][v12].frustumPlaneCount;
        _RDX = rgp.world->cells;
        v82 = frustumPlaneCount == 0;
        if ( frustumPlaneCount <= 0 )
        {
LABEL_42:
          R_AddCellSurfacesAndCullGroupsInFrustumDelayed(v11, v75, dpvsGlob.views[0][v12].frustumPlanes, frustumPlaneCount, dpvsGlob.views[0][v12].frustumPlaneCount);
        }
        else
        {
          __asm
          {
            vmovss  xmm8, dword ptr [rbx+rdx+0Ch]
            vmovss  xmm9, dword ptr [rbx+rdx]
            vmovss  xmm10, dword ptr [rbx+rdx+4]
            vmovss  xmm11, dword ptr [rbx+rdx+10h]
            vmovss  xmm12, dword ptr [rbx+rdx+8]
            vmovss  xmm13, dword ptr [rbx+rdx+14h]
          }
          _RAX = dpvsGlob.views[0][v12].frustumPlanes;
          while ( 1 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rax]
              vmovss  xmm5, dword ptr [rax+4]
              vmovss  xmm6, dword ptr [rax+8]
              vandps  xmm0, xmm1, xmm7
              vmulss  xmm2, xmm0, xmm8
              vmulss  xmm0, xmm9, xmm1
              vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm10, xmm5
              vmulss  xmm1, xmm12, xmm6
              vaddss  xmm4, xmm3, xmm2
              vandps  xmm5, xmm5, xmm7
              vmulss  xmm0, xmm5, xmm11
              vaddss  xmm2, xmm4, xmm0
              vandps  xmm6, xmm6, xmm7
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm6, xmm13
              vaddss  xmm1, xmm3, xmm0
              vcomiss xmm1, xmm14
            }
            if ( v82 )
              break;
            ++v79;
            ++_RAX;
            v82 = v79 <= (unsigned int)frustumPlaneCount;
            if ( v79 >= frustumPlaneCount )
              goto LABEL_42;
          }
        }
        v11 = sceneViewType;
        ++v75;
        _RBX += 40i64;
      }
      while ( v75 < cellCount );
    }
  }
  else
  {
    v16 = (cellCount + 31) >> 5;
    memset_0(v121, 0, 4i64 * v16);
    v17 = 0;
    if ( cellCount )
    {
      v18 = 0i64;
      do
      {
        if ( ((0x80000000 >> (v17 & 0x1F)) & v13[v18 >> 5]) != 0 )
        {
          _R8 = &rgp.world->cellCasterBits[v16 * v17];
          _RDX = 0i64;
          if ( v16 )
          {
            if ( v16 >= 0x10 )
            {
              v21 = v16 - 1;
              if ( v121 > &_R8[v21] || &v121[v21] < _R8 )
              {
                v22 = 8;
                do
                {
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r8+rdx*4]
                    vpor    xmm1, xmm1, xmmword ptr [rsp+rdx*4+1A8h+var_158]
                    vmovdqu xmmword ptr [rsp+rdx*4+1A8h+var_158], xmm1
                  }
                  _RAX = v22 - 4;
                  _RDX = (unsigned int)(_RDX + 16);
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r8+rax*4]
                    vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1A8h+var_158]
                    vmovdqu xmmword ptr [rsp+rax*4+1A8h+var_158], xmm1
                  }
                  _RAX = v22;
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r8+rax*4]
                    vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1A8h+var_158]
                    vmovdqu xmmword ptr [rsp+rax*4+1A8h+var_158], xmm1
                  }
                  _RAX = v22 + 4;
                  v22 += 16;
                  __asm
                  {
                    vmovdqu xmm1, xmmword ptr [r8+rax*4]
                    vpor    xmm1, xmm1, xmmword ptr [rsp+rax*4+1A8h+var_158]
                    vmovdqu xmmword ptr [rsp+rax*4+1A8h+var_158], xmm1
                  }
                }
                while ( (unsigned int)_RDX < (v16 & 0xFFFFFFF0) );
              }
            }
            if ( (unsigned int)_RDX < v16 )
            {
              v34 = (char *)_R8 - (char *)v121;
              v35 = &v121[_RDX];
              v36 = v16 - (unsigned int)_RDX;
              do
              {
                *v35 |= *(_DWORD *)((char *)v35 + v34);
                ++v35;
                --v36;
              }
              while ( v36 );
            }
          }
        }
        ++v17;
        ++v18;
      }
      while ( v17 < cellCount );
    }
    v37 = 0;
    if ( cellCount )
    {
      __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      v39 = 0i64;
      _RDI = 0i64;
      v41 = 0i64;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      do
      {
        if ( ((0x80000000 >> (v37 & 0x1F)) & v121[v41 >> 5]) != 0 )
        {
          world = rgp.world;
          v44 = frontEndDataOut;
          if ( v37 >= rgp.world->dpvsPlanes.cellCount )
          {
            LODWORD(v118) = rgp.world->dpvsPlanes.cellCount;
            LODWORD(v117) = v37;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 65, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( world->dpvsPlanes.cellCount )", "cellIndex doesn't index world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", v117, v118) )
              __debugbreak();
          }
          transientZone = world->cellTransientInfos[v39].transientZone;
          if ( transientZone >= v44->transientDrawContext.zoneCount )
          {
            LODWORD(v118) = v44->transientDrawContext.zoneCount;
            LODWORD(v117) = transientZone;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp.h", 68, ASSERT_TYPE_ASSERT, "(unsigned)( transientZoneIndex ) < (unsigned)( worldTransientContext.zoneCount )", "transientZoneIndex doesn't index worldTransientContext.zoneCount\n\t%i not in [0, %i)", v117, v118) )
              __debugbreak();
          }
          if ( v44->transientDrawContext.drawCellsPtrs[(unsigned __int16)transientZone] )
          {
            v46 = 0;
            v47 = *(_DWORD *)((char *)dpvsGlob.views[0][0].frustumPlanes[14].coeffs.v + v120);
            _RDX = rgp.world->cells;
            v49 = v47 == 0;
            if ( v47 <= 0 )
            {
LABEL_33:
              R_AddCellSurfacesAndCullGroupsInFrustumDelayed(sceneViewType, v37, (const DpvsPlane *)((char *)dpvsGlob.views[0][0].frustumPlanes + v120), v47, *(_DWORD *)((char *)dpvsGlob.views[0][0].frustumPlanes[14].coeffs.v + v120));
            }
            else
            {
              __asm
              {
                vmovss  xmm8, dword ptr [rdi+rdx+0Ch]
                vmovss  xmm9, dword ptr [rdi+rdx]
                vmovss  xmm10, dword ptr [rdi+rdx+4]
                vmovss  xmm11, dword ptr [rdi+rdx+10h]
                vmovss  xmm12, dword ptr [rdi+rdx+8]
                vmovss  xmm13, dword ptr [rdi+rdx+14h]
              }
              _RAX = (char *)dpvsGlob.views[0][0].frustumPlanes + v120;
              while ( 1 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rax]
                  vmovss  xmm5, dword ptr [rax+4]
                  vmovss  xmm6, dword ptr [rax+8]
                  vandps  xmm0, xmm1, xmm7
                  vmulss  xmm2, xmm0, xmm8
                  vmulss  xmm0, xmm9, xmm1
                  vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm2, xmm10, xmm5
                  vmulss  xmm1, xmm12, xmm6
                  vaddss  xmm4, xmm3, xmm2
                  vandps  xmm5, xmm5, xmm7
                  vmulss  xmm0, xmm5, xmm11
                  vaddss  xmm2, xmm4, xmm0
                  vandps  xmm6, xmm6, xmm7
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm6, xmm13
                  vaddss  xmm1, xmm3, xmm0
                  vcomiss xmm1, xmm14
                }
                if ( v49 )
                  break;
                ++v46;
                _RAX += 16;
                v49 = v46 <= (unsigned int)v47;
                if ( v46 >= v47 )
                  goto LABEL_33;
              }
            }
          }
        }
        ++v37;
        ++v41;
        ++v39;
        _RDI += 40i64;
      }
      while ( v37 < cellCount );
    }
  }
  __asm
  {
    vmovaps xmm14, [rsp+1A8h+var_C8]
    vmovaps xmm13, [rsp+1A8h+var_B8]
    vmovaps xmm12, [rsp+1A8h+var_A8]
    vmovaps xmm11, [rsp+1A8h+var_98]
    vmovaps xmm10, [rsp+1A8h+var_88]
    vmovaps xmm9, [rsp+1A8h+var_78]
    vmovaps xmm8, [rsp+1A8h+var_68]
    vmovaps xmm7, [rsp+1A8h+var_58]
    vmovaps xmm6, [rsp+1A8h+var_48]
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
  __int64 v19; 
  __int64 data[2]; 
  __int64 v22; 
  int localClientNum; 
  int v24; 
  int v28; 
  float v34; 
  __int16 v35; 
  char v36; 

  v4 = partitionIndex;
  _RDI = sunShadow;
  if ( !sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3992, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
    __debugbreak();
  if ( (_DWORD)v4 != 3 )
  {
    LODWORD(v19) = v4 - 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3993, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex - R_SUNSHADOW_OPAQUE_PARTITION_COUNT ) < (unsigned)( R_SUNSHADOW_TRANS_PARTITION_COUNT )", "partitionIndex - R_SUNSHADOW_OPAQUE_PARTITION_COUNT doesn't index R_SUNSHADOW_TRANS_PARTITION_COUNT\n\t%i not in [0, %i)", v19, 1) )
      __debugbreak();
  }
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3995, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  data[0] = (__int64)FX_GetSystem(frontEndDataOut->localClientNum);
  data[1] = 0i64;
  v22 = 0i64;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+168h+var_118], xmm0
  }
  _RAX = 544 * v4;
  localClientNum = frontEndDataOut->localClientNum;
  v24 = 1;
  v35 = 4;
  v36 = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rdi+230h]
    vmovss  xmm1, dword ptr [rax+rdi+234h]
    vmovss  [rsp+168h+var_F8], xmm0
    vmovss  xmm0, dword ptr [rax+rdi+238h]
    vmovss  [rsp+168h+var_F0], xmm0
    vmovss  [rsp+168h+var_F4], xmm1
    vmovups ymm1, ymmword ptr [rax+rdi+23Ch]
  }
  v34 = _RDI->partition[v4].viewParms.camera.axis.m[2].v[2];
  __asm
  {
    vmovups [rsp+168h+var_88], ymm1
    vmovups xmm1, cs:__xmm@bf8000003f8000003f8000003f800000
    vmulps  xmm0, xmm1, xmmword ptr [rdi+rax*8+2F8h]
    vmovups [rsp+168h+var_E8], xmm0
    vmulps  xmm0, xmm1, xmmword ptr [rdi+rax*8+308h]
    vmovups [rsp+168h+var_D8], xmm0
    vmulps  xmm0, xmm1, xmmword ptr [rdi+rax*8+318h]
    vmovups [rsp+168h+var_C8], xmm0
    vmulps  xmm0, xmm1, xmmword ptr [rdi+rdx*8+328h]
    vxorps  xmm1, xmm1, xmm1
    vmovups [rsp+168h+var_B8], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+168h+var_38], xmm0
    vmovss  [rsp+168h+var_50], xmm1
    vmovss  [rsp+168h+var_3C], xmm1
    vmovups [rsp+168h+var_60], xmm1
  }
  v28 = 1;
  Sys_AddWorkerCmd(WRKCMD_GENERATE_FX_SHADOW_VERTS, data);
}

/*
==============
R_AddWorldSurfacesDpvs
==============
*/
void R_AddWorldSurfacesDpvs(const GfxViewParms *viewParms, const GfxViewInfo *viewInfo)
{
  __int64 v7; 
  unsigned int clientIndex; 
  const GfxMatrix *p_viewProjectionMatrix; 
  bool requireOcclusionUpdate; 
  const dvar_t *v50; 
  char v52; 
  char v53; 
  const dvar_t *v57; 
  const dvar_t *v59; 
  const dvar_t *v70; 
  __int64 v77; 
  const dvar_t *v78; 
  const dvar_t *v79; 
  const dvar_t *v85; 
  const dvar_t *v88; 
  __int64 frameCount; 
  __int64 viewInfoIndex; 
  int data[4]; 
  int cmdInfo[4]; 
  int v99[4]; 
  tmat44_t<vec4_t> dst; 

  _RSI = viewParms;
  _RDI = viewInfo;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4736, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4737, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4738, ASSERT_TYPE_ASSERT, "(viewParms)", (const char *)&queryFormat, "viewParms") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4739, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  rg.debugViewParms = _RSI;
  v7 = _RDI->viewInfoIndex;
  if ( (unsigned int)v7 >= 6 )
  {
    LODWORD(frameCount) = _RDI->viewInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4743, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfoIndex ) < (unsigned)( 6 )", "viewInfoIndex doesn't index GFX_MAX_CLIENT_VIEWINFOS\n\t%i not in [0, %i)", frameCount, 6) )
      __debugbreak();
  }
  clientIndex = _RDI->clientIndex;
  if ( clientIndex >= 2 )
  {
    LODWORD(viewInfoIndex) = 2;
    LODWORD(frameCount) = _RDI->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4747, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 2 )", "clientIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", frameCount, viewInfoIndex) )
      __debugbreak();
  }
  __asm { vmovaps [rsp+120h+var_48+8], xmm6 }
  p_viewProjectionMatrix = &_RSI->viewProjectionMatrix;
  requireOcclusionUpdate = 1;
  if ( CL_IsRenderingSplitScreen() )
  {
    __asm
    {
      vmovaps [rsp+120h+var_58+8], xmm7
      vmovaps [rsp+120h+var_68+8], xmm8
    }
    if ( (_DWORD)v7 == 1 && !clientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4759, ASSERT_TYPE_ASSERT, "(!( viewInfoIndex == 1 && clientIndex == 0 ))", (const char *)&queryFormat, "!( viewInfoIndex == 1 && clientIndex == 0 )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+5C4h]
      vsubss  xmm2, xmm0, dword ptr [rdi+5B8h]
      vmovss  xmm1, dword ptr [rdi+5C8h]
      vsubss  xmm3, xmm1, dword ptr [rdi+5BCh]
      vmovss  xmm0, dword ptr [rdi+5CCh]
      vsubss  xmm4, xmm0, dword ptr [rdi+5C0h]
    }
    _R15 = DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold;
    __asm
    {
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, dword ptr [rdi+10h]
      vmulss  xmm2, xmm1, dword ptr [rdi+190h]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm7, xmm3, xmm0
      vmovss  xmm0, dword ptr [rdi+14h]
      vmulss  xmm3, xmm0, dword ptr [rdi+194h]
      vmovss  xmm0, dword ptr [rdi+18h]
      vmulss  xmm1, xmm0, dword ptr [rdi+198h]
      vmovss  xmm0, dword ptr [rdi]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm2, dword ptr [rdi+184h]
      vmulss  xmm3, xmm2, dword ptr [rdi+4]
      vmovss  xmm2, dword ptr [rdi+188h]
      vaddss  xmm5, xmm4, xmm1
      vmulss  xmm1, xmm0, dword ptr [rdi+180h]
      vmulss  xmm0, xmm2, dword ptr [rdi+8]
      vmovss  xmm2, dword ptr [rdi+24h]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm3, xmm2, dword ptr [rdi+1A4h]
      vmovss  xmm2, dword ptr [rdi+28h]
      vaddss  xmm1, xmm4, xmm0
      vmovss  xmm0, dword ptr [rdi+20h]
      vminss  xmm5, xmm5, xmm1
      vmulss  xmm1, xmm0, dword ptr [rdi+1A0h]
      vmulss  xmm0, xmm2, dword ptr [rdi+1A8h]
      vaddss  xmm4, xmm3, xmm1
      vaddss  xmm1, xmm4, xmm0
      vminss  xmm8, xmm5, xmm1
    }
    if ( !DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUForceUpdateOffsetThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm { vmovss  xmm6, dword ptr [r15+28h] }
    v50 = DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUForceUpdateOffsetThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUForceUpdateOffsetThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [r15+28h]
      vcomiss xmm7, xmm0
    }
    if ( !(v52 | v53) )
      goto LABEL_36;
    _R15 = DCONST_DVARFLT_r_splitscreenAUOUForceUpdateDotThreshold;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUForceUpdateDotThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUForceUpdateDotThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm { vcomiss xmm8, dword ptr [r15+28h] }
    if ( v52 )
LABEL_36:
      requireOcclusionUpdate = 1;
    else
      requireOcclusionUpdate = 0;
    _R15 = DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXDotThresholdMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm { vmovss  xmm6, dword ptr [r15+28h] }
    v57 = DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMax;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXDotThresholdMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    __asm { vsubss  xmm7, xmm6, dword ptr [r15+28h] }
    v59 = DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXDotThresholdMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXDotThresholdMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm0, xmm6, dword ptr [r15+28h]
      vsubss  xmm1, xmm6, xmm8
      vsubss  xmm1, xmm1, xmm0
      vdivss  xmm0, xmm1, xmm7; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _R15 = DCONST_DVARFLT_r_splitscreenAUOUScaleXMax;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm { vmovss  xmm8, dword ptr [r15+28h] }
    v70 = DCONST_DVARFLT_r_splitscreenAUOUScaleXMin;
    if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleXMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleXMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v70);
    __asm
    {
      vsubss  xmm0, xmm6, xmm7
      vmulss  xmm2, xmm0, dword ptr [r15+28h]
      vmulss  xmm1, xmm7, xmm8
      vmovaps xmm8, [rsp+120h+var_68+8]
      vmovaps xmm7, [rsp+120h+var_58+8]
      vaddss  xmm6, xmm2, xmm1
    }
    if ( _RDI->teleported || requireOcclusionUpdate || (v77 = v7, !rg.splitscreenAUOUValid[v7]) || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_splitscreenAUOUDisabled, "r_splitscreenAUOUDisabled") )
    {
      requireOcclusionUpdate = 1;
      v77 = v7;
    }
    rg.splitscreenAUOUValid[v77] = 1;
    v78 = DCONST_DVARBOOL_r_splitscreenAUOUDisabled;
    if ( !DCONST_DVARBOOL_r_splitscreenAUOUDisabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUDisabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v78);
    if ( !v78->current.enabled )
    {
      MatrixCopy44(&_RSI->viewProjectionMatrix.m, &dst);
      v79 = DCONST_DVARFLT_r_splitscreenAUOUScaleY;
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+120h+dst]
        vmulss  xmm0, xmm6, dword ptr [rbp+20h+dst+10h]
        vmulss  xmm2, xmm6, dword ptr [rbp+20h+dst+20h]
        vmovss  dword ptr [rsp+120h+dst], xmm1
        vmovss  dword ptr [rbp+20h+dst+10h], xmm0
        vmovss  dword ptr [rbp+20h+dst+20h], xmm2
      }
      if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v79);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+120h+dst+4]
        vmulss  xmm1, xmm0, dword ptr [r15+28h]
      }
      v85 = DCONST_DVARFLT_r_splitscreenAUOUScaleY;
      __asm { vmovss  dword ptr [rsp+120h+dst+4], xmm1 }
      if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v85);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+20h+dst+14h]
        vmulss  xmm1, xmm0, dword ptr [r15+28h]
      }
      v88 = DCONST_DVARFLT_r_splitscreenAUOUScaleY;
      __asm { vmovss  dword ptr [rbp+20h+dst+14h], xmm1 }
      if ( !DCONST_DVARFLT_r_splitscreenAUOUScaleY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_splitscreenAUOUScaleY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v88);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+20h+dst+24h]
        vmulss  xmm1, xmm0, dword ptr [r15+28h]
        vmovss  dword ptr [rbp+20h+dst+24h], xmm1
      }
      p_viewProjectionMatrix = (const GfxMatrix *)&dst;
    }
  }
  else
  {
    *(_WORD *)rg.splitscreenAUOUValid = 0;
  }
  R_Umbra_QueryStaticCamera(_RSI, p_viewProjectionMatrix, _RDI->displayViewport.width, _RDI->displayViewport.height, _RDI->input.data->smpFrame, _RDI->input.data->frameCount, v7, requireOcclusionUpdate);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+100h]
    vmovss  xmm1, dword ptr [rsi+104h]
    vmovaps xmm6, [rsp+120h+var_48+8]
    vmovss  [rsp+120h+data], xmm0
    vmovss  xmm0, dword ptr [rsi+108h]
    vmovss  [rsp+120h+var_D8], xmm0
    vmovss  [rsp+120h+var_DC], xmm1
  }
  data[3] = v7;
  if ( r_umbraDynamicDpvsSMP->current.enabled )
    Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_GLASS, data);
  else
    FX_AddGlassSurfacesInUmbraFrustumCmd(data);
  cmdInfo[1] = v7;
  cmdInfo[2] = 0;
  v99[2] = 0;
  v99[1] = v7;
  cmdInfo[0] = clientIndex;
  v99[0] = clientIndex;
  cmdInfo[3] = 48;
  v99[3] = 15;
  if ( r_umbraDynamicDpvsSMP->current.enabled )
  {
    Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_SCENE_ENT_CAMERA, v99);
    Sys_AddWorkerCmd(WRKCMD_UMBRA_CULL_DYN_ENT_CAMERA, cmdInfo);
  }
  else
  {
    R_Umbra_CullSceneEnts(cmdInfo);
    R_Umbra_CullSceneEnts(v99);
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
  int v7; 
  __int64 v12; 
  unsigned int v19; 
  bool v20; 
  unsigned int v21; 
  __int64 result; 

  world = rgp.world;
  _RBX = origin;
  if ( !rgp.world )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 689, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    world = rgp.world;
  }
  nodes = world->dpvsPlanes.nodes;
  v7 = world->dpvsPlanes.cellCount + 1;
  if ( *nodes - v7 < 0 )
    return (unsigned int)*nodes - 1;
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+4]
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr [rbx]
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, dword ptr [rbx+8]
    vxorps  xmm4, xmm4, xmm4
  }
  do
  {
    v12 = 0i64;
    __asm
    {
      vmulss  xmm1, xmm5, dword ptr [r9+rcx*4+4]
      vmulss  xmm0, xmm6, dword ptr [r9+rcx*4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [r9+rcx*4+8]
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm3, xmm0, dword ptr [r9+rcx*4+0Ch]
    }
    v19 = nodes[1];
    v20 = v19 <= 2;
    v21 = v19 - 2;
    __asm { vcomiss xmm3, xmm4 }
    if ( v20 )
      v12 = v21;
    nodes += v12 + 2;
  }
  while ( *nodes - v7 >= 0 );
  __asm { vmovaps xmm7, [rsp+58h+var_28] }
  result = (unsigned int)*nodes - 1;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
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
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned __int8 *v20; 
  unsigned int *v21; 
  unsigned int v22; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  __int64 v28; 
  unsigned int v29; 
  DynEntityList *DynEntityList; 
  __int64 v31; 
  unsigned int v33; 
  bool v40; 
  __int64 v69; 
  __int64 v70; 
  unsigned int *v71; 
  unsigned int v81; 
  unsigned int v82; 

  world = rgp.world;
  v17 = sceneViewType;
  if ( cellIndex >= rgp.world->dpvsPlanes.cellCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1597, ASSERT_TYPE_ASSERT, "(unsigned)( cellIndex ) < (unsigned)( rgp.world->dpvsPlanes.cellCount )", "cellIndex doesn't index rgp.world->dpvsPlanes.cellCount\n\t%i not in [0, %i)", cellIndex, rgp.world->dpvsPlanes.cellCount) )
      __debugbreak();
    world = rgp.world;
  }
  v18 = world->dpvsDyn.dynEntClientCount[1];
  v19 = (v18 + 31) >> 5;
  v82 = v19;
  v20 = &world->dpvsDyn.dynEntVisData[1][v17][localClientNum * v18];
  v21 = &world->dpvsDyn.dynEntCellBits[1][localClientNum * v19 + (unsigned __int64)(cellIndex * world->dpvsDyn.dynEntClientWordCount[1])];
  v22 = 0;
  v71 = v21;
  v81 = 0;
  if ( v19 )
  {
    __asm
    {
      vmovaps [rsp+128h+var_58], xmm6
      vmovaps [rsp+128h+var_68], xmm7
      vmovaps [rsp+128h+var_78], xmm8
      vmovaps [rsp+128h+var_88], xmm9
      vmovaps [rsp+128h+var_98], xmm10
      vmovaps [rsp+128h+var_A8], xmm11
      vmovaps [rsp+128h+var_B8], xmm12
      vmovaps [rsp+128h+var_C8], xmm13
      vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+128h+var_D8], xmm14
      vxorps  xmm14, xmm14, xmm14
    }
    do
    {
      v25 = *v21;
      v26 = __lzcnt(*v21);
      if ( v26 < 0x20 )
      {
        v27 = 32 * v22;
        do
        {
          v28 = v27 + v26;
          if ( ((0x80000000 >> v26) & v25) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1617, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
            __debugbreak();
          v25 &= ~(0x80000000 >> v26);
          if ( !v20[v28] )
          {
            v29 = v28 & 0x7FFFF;
            DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)((unsigned int)v28 >> 19));
            if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
              __debugbreak();
            if ( v29 >= DynEntityList->dynEntCount[1] )
            {
              LODWORD(v70) = DynEntityList->dynEntCount[1];
              LODWORD(v69) = v28 & 0x7FFFF;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v69, v70) )
                __debugbreak();
            }
            v31 = (__int64)&DynEntityList->dynEntDefList[1][v29];
            if ( *(_QWORD *)v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1624, ASSERT_TYPE_ASSERT, "(!dynEntDef->baseModel)", (const char *)&queryFormat, "!dynEntDef->baseModel") )
              __debugbreak();
            if ( !*(_WORD *)(v31 + 66) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1625, ASSERT_TYPE_ASSERT, "(dynEntDef->brushModel)", (const char *)&queryFormat, "dynEntDef->brushModel") )
              __debugbreak();
            _RAX = R_GetBrushModel(*(unsigned __int16 *)(v31 + 66));
            v33 = 0;
            if ( (int)planeCount <= 0 )
            {
LABEL_29:
              v20[(unsigned int)v28] = 1;
            }
            else
            {
              __asm
              {
                vmovss  xmm7, dword ptr [rax+0Ch]
                vmovss  xmm8, dword ptr [rax]
                vmovss  xmm9, dword ptr [rax+4]
                vmovss  xmm10, dword ptr [rax+10h]
                vmovss  xmm11, dword ptr [rax+8]
                vmovss  xmm12, dword ptr [rax+14h]
              }
              v40 = __CFADD__(planes, 12i64) || &planes->coeffs.xyz + 1 == NULL;
              _RAX = &planes->coeffs.xyz + 1;
              while ( 1 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rax-0Ch]
                  vmovss  xmm5, dword ptr [rax-8]
                  vmovss  xmm6, dword ptr [rax-4]
                  vandps  xmm0, xmm1, xmm13
                  vmulss  xmm2, xmm0, xmm7
                  vmulss  xmm0, xmm8, xmm1
                  vaddss  xmm1, xmm0, dword ptr [rax]
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm2, xmm9, xmm5
                  vmulss  xmm1, xmm11, xmm6
                  vaddss  xmm4, xmm3, xmm2
                  vandps  xmm5, xmm5, xmm13
                  vmulss  xmm0, xmm5, xmm10
                  vaddss  xmm2, xmm4, xmm0
                  vandps  xmm6, xmm6, xmm13
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm6, xmm12
                  vaddss  xmm1, xmm3, xmm0
                  vcomiss xmm1, xmm14
                }
                if ( v40 )
                  break;
                ++v33;
                _RAX = (vec3_t *)((char *)_RAX + 16);
                v40 = v33 <= planeCount;
                if ( (int)v33 >= (int)planeCount )
                  goto LABEL_29;
              }
            }
          }
          v26 = __lzcnt(v25);
        }
        while ( v26 < 0x20 );
        v22 = v81;
        v21 = v71;
        v19 = v82;
      }
      ++v22;
      ++v21;
      v81 = v22;
      v71 = v21;
    }
    while ( v22 < v19 );
    __asm
    {
      vmovaps xmm14, [rsp+128h+var_D8]
      vmovaps xmm13, [rsp+128h+var_C8]
      vmovaps xmm12, [rsp+128h+var_B8]
      vmovaps xmm11, [rsp+128h+var_A8]
      vmovaps xmm10, [rsp+128h+var_98]
      vmovaps xmm9, [rsp+128h+var_88]
      vmovaps xmm8, [rsp+128h+var_78]
      vmovaps xmm7, [rsp+128h+var_68]
      vmovaps xmm6, [rsp+128h+var_58]
    }
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
  int v15; 
  __int64 v18; 
  __int64 v19; 
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
      _RSI = &scene.dynamicOmniLight[0].lightCommon.origin;
      do
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+0Ch]
          vmovss  xmm0, dword ptr [rsi]
          vmovss  xmm1, dword ptr [rsi+4]
          vmovss  dword ptr [rsp+98h+bounds.midPoint], xmm0
          vmovss  xmm0, dword ptr [rsi+8]
          vmovss  dword ptr [rsp+98h+bounds.midPoint+8], xmm0
          vmovss  dword ptr [rsp+98h+bounds.midPoint+4], xmm1
          vmovss  dword ptr [rsp+98h+bounds.halfSize], xmm2
          vmovss  dword ptr [rsp+98h+bounds.halfSize+4], xmm2
          vmovss  dword ptr [rsp+98h+bounds.halfSize+8], xmm2
        }
        if ( R_Umbra_IsBoxVisible(&bounds, 0, viewInfoIndex, 0) )
        {
          ++v6;
        }
        else
        {
          if ( (unsigned int)v7 >= 0x40 )
          {
            LODWORD(v19) = 64;
            LODWORD(v18) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          scene.isDynamicOmniLightCulled[(__int64)v7 >> 5] |= v8;
          __asm { vmovss  xmm1, dword ptr [rsi+0Ch]; radius }
          if ( !R_CullPointAndRadius(_RSI, *(float *)&_XMM1, frustumPlanes, clipPlaneCount) )
            ++v3;
        }
        ++v7;
        v8 = __ROL4__(v8, 1);
        _RSI = (vec3_t *)((char *)_RSI + 304);
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
    v15 = 1;
    _RSI = &scene.dynamicOmniLight[0].lightCommon.origin;
    do
    {
      __asm { vmovss  xmm1, dword ptr [rsi+0Ch]; radius }
      if ( R_CullPointAndRadius(_RSI, *(float *)&_XMM1, frustumPlanes, frustumPlaneCount) )
      {
        if ( (unsigned int)v3 >= 0x40 )
        {
          LODWORD(v19) = 64;
          LODWORD(v18) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        scene.isDynamicOmniLightCulled[(__int64)v3 >> 5] |= v15;
      }
      ++v3;
      frustumPlaneCount = clipPlaneCount;
      _RSI = (vec3_t *)((char *)_RSI + 304);
      v15 = __ROL4__(v15, 1);
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
  __int64 v11; 
  signed int frustumPlaneCount; 
  unsigned int v13; 
  unsigned int v14; 
  volatile int v15; 
  int v18; 
  __int64 v20; 
  signed int v21; 
  bool v22; 
  int v48; 
  bool v49; 
  unsigned int v50; 
  volatile int v51; 
  int v53; 
  signed int v56; 
  bool v57; 
  __int64 v93; 
  __int64 v94; 
  char v99; 
  void *retaddr; 
  unsigned int v102; 
  __int64 v103; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps [rsp+108h+var_98], xmm11
  }
  v11 = viewInfoIndex;
  __asm
  {
    vmovaps [rsp+108h+var_A8], xmm12
    vmovaps [rsp+108h+var_B8], xmm13
    vmovaps [rsp+108h+var_C8], xmm14
  }
  *(_QWORD *)scene.isDynamicSpotLightCulled = 0i64;
  v103 = v11 * 8052;
  frustumPlaneCount = dpvsGlob.views[v11][0].frustumPlaneCount;
  if ( r_umbraCullDynLights->current.integer )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v102 = 0;
    if ( scene.dynamicSpotLightCount > 0 )
    {
      __asm { vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      _RDI = &scene.dynamicSpotLight[0].bounds.halfSize.v[2];
      v18 = 1;
      __asm { vxorps  xmm14, xmm14, xmm14 }
      do
      {
        v20 = v15;
        R_CalcSpotLightPlanesAndBoundingBox(&scene.dynamicSpotLight[v20].lightCommon, (vec4_t (*)[6])scene.dynamicSpotLight[v20].planes, &scene.dynamicSpotLight[v20].bounds);
        if ( R_Umbra_IsBoxVisible(&scene.dynamicSpotLight[v20].bounds, 0, viewInfoIndex, 0) )
        {
          v13 = ++v102;
        }
        else
        {
          if ( (unsigned int)v15 >= 0x40 )
          {
            LODWORD(v94) = 64;
            LODWORD(v93) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v93, v94) )
              __debugbreak();
          }
          v21 = 0;
          scene.isDynamicSpotLightCulled[(__int64)v15 >> 5] |= v18;
          v22 = frustumPlaneCount == 0;
          if ( frustumPlaneCount <= 0 )
          {
LABEL_12:
            v48 = 0;
          }
          else
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rdi-8]
              vmovss  xmm8, dword ptr [rdi-14h]
              vmovss  xmm9, dword ptr [rdi-10h]
              vmovss  xmm10, dword ptr [rdi-4]
              vmovss  xmm11, dword ptr [rdi-0Ch]
              vmovss  xmm12, dword ptr [rdi]
            }
            _RCX = (char *)&dpvsGlob.views[0][0].frustumPlanes[0].coeffs.xyz + v103 + 12;
            while ( 1 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [rcx-0Ch]
                vmovss  xmm5, dword ptr [rcx-8]
                vmovss  xmm6, dword ptr [rcx-4]
                vandps  xmm0, xmm1, xmm13
                vmulss  xmm2, xmm0, xmm7
                vmulss  xmm0, xmm8, xmm1
                vaddss  xmm1, xmm0, dword ptr [rcx]
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm2, xmm9, xmm5
                vmulss  xmm1, xmm11, xmm6
                vaddss  xmm4, xmm3, xmm2
                vandps  xmm5, xmm5, xmm13
                vmulss  xmm0, xmm5, xmm10
                vaddss  xmm2, xmm4, xmm0
                vandps  xmm6, xmm6, xmm13
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm6, xmm12
                vaddss  xmm1, xmm3, xmm0
                vcomiss xmm1, xmm14
              }
              if ( v22 )
                break;
              ++v21;
              _RCX += 16;
              v22 = v21 <= (unsigned int)frustumPlaneCount;
              if ( v21 >= frustumPlaneCount )
                goto LABEL_12;
            }
            v48 = 1;
          }
          v49 = v48 == 0;
          v50 = v14 + 1;
          v13 = v102;
          if ( !v49 )
            v50 = v14;
          v14 = v50;
        }
        ++v15;
        v18 = __ROL4__(v18, 1);
        _RDI += 76;
      }
      while ( v15 < scene.dynamicSpotLightCount );
    }
    if ( r_umbraCullDynLights->current.integer == 2 && v14 != s_killedByUmbraPrev )
    {
      s_killedByUmbraPrev = v14;
      Com_Printf(8, "Umbra killed %d more dynamic spot lights. Final spot light count = %d\n", v14, v13);
    }
  }
  else
  {
    v51 = 0;
    if ( scene.dynamicSpotLightCount > 0 )
    {
      __asm { vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
      v53 = 1;
      _RDI = &scene.dynamicSpotLight[0].bounds.halfSize.v[2];
      __asm { vxorps  xmm14, xmm14, xmm14 }
      do
      {
        R_CalcSpotLightPlanesAndBoundingBox(&scene.dynamicSpotLight[v51].lightCommon, (vec4_t (*)[6])scene.dynamicSpotLight[v51].planes, &scene.dynamicSpotLight[v51].bounds);
        v56 = 0;
        v57 = frustumPlaneCount == 0;
        if ( frustumPlaneCount > 0 )
        {
          __asm
          {
            vmovss  xmm8, dword ptr [rdi-8]
            vmovss  xmm9, dword ptr [rdi-14h]
            vmovss  xmm10, dword ptr [rdi-10h]
            vmovss  xmm11, dword ptr [rdi-4]
            vmovss  xmm12, dword ptr [rdi-0Ch]
            vmovss  xmm13, dword ptr [rdi]
          }
          _RAX = &dpvsGlob.views[v11][0].frustumPlanes[0].coeffs.xyz + 1;
          while ( 1 )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rax-0Ch]
              vmovss  xmm5, dword ptr [rax-8]
              vmovss  xmm6, dword ptr [rax-4]
              vandps  xmm0, xmm1, xmm7
              vmulss  xmm2, xmm0, xmm8
              vmulss  xmm0, xmm9, xmm1
              vaddss  xmm1, xmm0, dword ptr [rax]
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm2, xmm10, xmm5
              vmulss  xmm1, xmm12, xmm6
              vaddss  xmm4, xmm3, xmm2
              vandps  xmm5, xmm5, xmm7
              vmulss  xmm0, xmm5, xmm11
              vaddss  xmm2, xmm4, xmm0
              vandps  xmm6, xmm6, xmm7
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm6, xmm13
              vaddss  xmm1, xmm3, xmm0
              vcomiss xmm1, xmm14
            }
            if ( v57 )
              break;
            ++v56;
            _RAX = (vec3_t *)((char *)_RAX + 16);
            v57 = v56 <= (unsigned int)frustumPlaneCount;
            if ( v56 >= frustumPlaneCount )
              goto LABEL_33;
          }
          if ( (unsigned int)v51 >= 0x40 )
          {
            LODWORD(v94) = 64;
            LODWORD(v93) = v51;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 22, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v93, v94) )
              __debugbreak();
          }
          scene.isDynamicSpotLightCulled[(__int64)v51 >> 5] |= v53;
        }
LABEL_33:
        ++v51;
        v53 = __ROL4__(v53, 1);
        _RDI += 76;
      }
      while ( v51 < scene.dynamicSpotLightCount );
    }
  }
  __asm { vmovaps xmm14, [rsp+108h+var_C8] }
  _R11 = &v99;
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
  __asm { vmovdqu [rbp+0D0h+var_D8], ymm0 }
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
  __int64 v82; 
  GfxSceneBrush *v83; 
  unsigned __int64 entnum; 
  unsigned __int8 v85; 
  unsigned __int8 v86; 
  unsigned int sceneEntRenderFlags; 
  int v88; 
  unsigned __int8 v89; 
  unsigned __int8 v90; 
  char v91; 
  unsigned __int8 v92; 
  char v93; 
  unsigned __int8 v94; 
  char v95; 
  unsigned __int8 v96; 
  char v97; 
  unsigned __int8 v98; 
  char v99; 
  unsigned __int8 v100; 
  char v101; 
  unsigned __int8 v102; 
  char v103; 
  unsigned __int8 v104; 
  char v105; 
  unsigned __int8 v106; 
  char v107; 
  unsigned __int8 v108; 
  char v109; 
  unsigned __int8 v110; 
  unsigned __int8 v111; 
  unsigned __int8 v112; 
  char v113; 
  unsigned __int8 v114; 
  char v115; 
  unsigned __int8 v116; 
  char v117; 
  unsigned __int8 v118; 
  char v119; 
  unsigned __int8 v120; 
  char v121; 
  unsigned __int8 v122; 
  char v123; 
  unsigned __int8 v124; 
  char v125; 
  unsigned __int8 v126; 
  char v127; 
  unsigned __int8 v128; 
  char v129; 
  unsigned __int8 v130; 
  char v131; 
  unsigned __int8 v132; 
  const GfxPlacement *p_prevPlacement; 
  unsigned int *entOverflowedDrawBuf; 
  unsigned __int64 v135; 
  float fmt; 
  __int64 v137; 
  float v138; 
  GfxPlacement *part0Placement; 
  float v140; 
  unsigned __int16 v141; 
  unsigned int v142; 
  int v143; 
  char *v144; 
  __int64 v145; 
  unsigned int sceneBrushEnd; 
  unsigned int *v147; 
  __int64 v148; 
  GfxScene *v149; 
  unsigned __int8 *v151; 
  unsigned __int8 *v152; 
  unsigned __int8 *v153; 
  unsigned __int8 *v154; 
  unsigned __int8 *v155; 
  unsigned __int8 *v156; 
  unsigned __int8 *v157; 
  unsigned __int8 *v158; 
  unsigned __int8 *v159; 
  unsigned __int8 *v160; 
  unsigned __int8 *v161; 
  __int64 v162; 
  GfxScene *sceneDObjVisData; 
  unsigned __int8 *v164; 
  unsigned __int8 *v165; 
  unsigned __int8 *v166; 
  unsigned __int8 *v167; 
  unsigned __int8 *v168; 
  unsigned __int8 *v169; 
  unsigned __int8 *v170; 
  unsigned __int8 *v171; 
  unsigned __int8 *v172; 
  unsigned __int8 *v173; 
  unsigned __int8 *v174; 

  v1 = sceneEntCmd;
  if ( !Sys_IsMainThread2() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1675, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread2())", (const char *)&queryFormat, "Sys_IsMainThread2()") )
    __debugbreak();
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1676, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  sceneDObjBegin = (unsigned int)v1->sceneDObjBegin;
  v143 = sceneDObjBegin;
  v3 = scene.dpvs.entVisBits[scene.dpvs.localClientNum];
  v147 = v3;
  v4 = dpvsGlob.views[v1->viewInfo->viewInfoIndex];
  data = v1->viewInfo->input.data;
  sceneDObjVisData = (GfxScene *)scene.sceneDObjVisData;
  v164 = scene.sceneDObjVisData[1];
  opaqueCascadeCount = data->sunShadow.opaqueCascadeCount;
  sceneDObjEnd = v1->sceneDObjEnd;
  v165 = scene.sceneDObjVisData[2];
  v166 = scene.sceneDObjVisData[3];
  v167 = scene.sceneDObjVisData[4];
  v168 = scene.sceneDObjVisData[5];
  v169 = scene.sceneDObjVisData[6];
  v170 = scene.sceneDObjVisData[7];
  v171 = scene.sceneDObjVisData[8];
  v172 = scene.sceneDObjVisData[9];
  v173 = scene.sceneDObjVisData[10];
  v174 = scene.sceneDObjVisData[11];
  v141 = opaqueCascadeCount;
  v142 = sceneDObjEnd;
  if ( (unsigned int)sceneDObjBegin < sceneDObjEnd )
  {
    v8 = (char *)&scene.sceneDObj[sceneDObjBegin] + 1388;
    v144 = v8;
    while ( 1 )
    {
      v9 = *((_DWORD *)v8 - 329);
      if ( (v9 & 0xFFFFFFFB) != 0 )
        break;
LABEL_66:
      sceneDObjBegin = (unsigned int)(sceneDObjBegin + 1);
      v8 += 1424;
      v143 = sceneDObjBegin;
      v144 = v8;
      if ( (unsigned int)sceneDObjBegin >= sceneDObjEnd )
      {
        v1 = sceneEntCmd;
        v3 = v147;
        goto LABEL_68;
      }
    }
    if ( v9 < 2 )
    {
      Name = DObjGetName(*(const DObj **)(v8 + 4));
      LODWORD(part0Placement) = v9;
      LODWORD(v137) = sceneDObjBegin;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1702, ASSERT_TYPE_ASSERT, "(state >= CULL_STATE_BOUNDED)", "%s\n\t%d %d '%s'", "state >= CULL_STATE_BOUNDED", v137, part0Placement, Name) )
        __debugbreak();
    }
    v11 = v166;
    v12 = v165;
    v13 = (*((_DWORD *)v8 - 1) >> 10) & 0xFFF;
    v153 = v166;
    v152 = v165;
    if ( opaqueCascadeCount > 2u )
    {
      v14 = v166[sceneDObjBegin];
      if ( (v14 & 1) == 0 )
        v165[sceneDObjBegin] = v14;
    }
    v15 = v164;
    v151 = v164;
    if ( opaqueCascadeCount > 1u )
    {
      v16 = v12[sceneDObjBegin];
      if ( (v16 & 1) == 0 )
        v164[sceneDObjBegin] = v16;
    }
    v17 = v13;
    v148 = v13;
    v18 = (unsigned int)sceneDObjBegin;
    if ( ((0x80000000 >> (v13 & 0x1F)) & v147[(unsigned __int64)v13 >> 5]) != 0 )
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
      v167[sceneDObjBegin] = v25;
      v26 = scene.dpvs.entVisData[5][v17];
      v168[sceneDObjBegin] = v26;
      v27 = scene.dpvs.entVisData[6][v17];
      v169[v18] = v27;
      v28 = scene.dpvs.entVisData[7][v17];
      v170[v18] = v28;
      v29 = scene.dpvs.entVisData[8][v17];
      v171[v18] = v29;
      v30 = scene.dpvs.entVisData[9][v148];
      v172[v18] = v30;
      v31 = scene.dpvs.entVisData[10][v148];
      v173[v18] = v31;
      v32 = scene.dpvs.entVisData[11][v148];
      v174[v18] = v32;
      v33 = v27 | v28 | v29 | v30 | v31 | v32;
      LODWORD(sceneDObjBegin) = v143;
      if ( (((unsigned __int8)(v24 | v25 | v26 | v33) | v23) & 1) != 0 )
      {
        if ( v143 - scene.sceneDObjFirstViewmodelIndex < scene.sceneDObjViewmodelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1733, ASSERT_TYPE_ASSERT, "((uint)(sceneEntIndex - scene.sceneDObjFirstViewmodelIndex) >= scene.sceneDObjViewmodelCount)", (const char *)&queryFormat, "(uint)(sceneEntIndex - scene.sceneDObjFirstViewmodelIndex) >= scene.sceneDObjViewmodelCount") )
          __debugbreak();
        if ( !*(_QWORD *)(v8 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1734, ASSERT_TYPE_ASSERT, "(sceneEnt->obj)", (const char *)&queryFormat, "sceneEnt->obj") )
          __debugbreak();
        R_SkinAndBoundSceneEnt((GfxSceneEntity *)(v8 - 1388), GfxViewDomain_World);
        if ( *((_DWORD *)v8 - 329) < 4u )
        {
          v34 = DObjGetName(*(const DObj **)(v8 + 4));
          LODWORD(part0Placement) = *((_DWORD *)v8 - 329);
          LODWORD(v137) = v143;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1738, ASSERT_TYPE_ASSERT, "(sceneEnt->cull.state >= CULL_STATE_DONE)", "%s\n\t%d %d '%s'", "sceneEnt->cull.state >= CULL_STATE_DONE", v137, part0Placement, v34) )
            __debugbreak();
        }
        opaqueCascadeCount = v141;
        if ( *((_DWORD *)v8 - 329) == 4 )
        {
          *((_BYTE *)&sceneDObjVisData->codeEmissiveSurfs[0].drawGroup.fields + v18) = 0;
          v164[v18] = 0;
          v165[v18] = 0;
          v166[v18] = 0;
          v167[v18] = 0;
          v168[v18] = 0;
          v169[v18] = 0;
          v170[v18] = 0;
          v171[v18] = 0;
          v172[v18] = 0;
          v173[v18] = 0;
          v174[v18] = 0;
        }
        goto LABEL_65;
      }
    }
    else
    {
      v35 = scene.dpvs.entVisData[0][v13];
      if ( !v35 )
        v35 = 1;
      v149 = sceneDObjVisData;
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
      if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ *(_DWORD *)v144 & 0xFFFFF)) != v4[3].sceneEntRenderFlags )
        v40 = 0;
      v11[(unsigned int)sceneDObjBegin] = v40;
      v41 = scene.dpvs.entVisData[4][v13];
      v154 = v167;
      v167[(unsigned int)sceneDObjBegin] = v41;
      v42 = scene.dpvs.entVisData[5][v13];
      v155 = v168;
      v168[(unsigned int)sceneDObjBegin] = v42;
      v43 = scene.dpvs.entVisData[6][v13];
      v156 = v169;
      v169[v18] = v43;
      v44 = scene.dpvs.entVisData[7][v13];
      v157 = v170;
      v170[v18] = v44;
      v45 = scene.dpvs.entVisData[8][v13];
      v158 = v171;
      v171[v18] = v45;
      v46 = scene.dpvs.entVisData[9][v13];
      v47 = v172;
      v172[v18] = v46;
      v159 = v47;
      v48 = scene.dpvs.entVisData[10][v17];
      v160 = v173;
      v173[v18] = v48;
      v49 = scene.dpvs.entVisData[11][v17];
      v161 = v174;
      v174[v18] = v49;
      v50 = v40 | v41 | v42 | v43 | v44 | v45 | v46 | v48 | v49;
      v8 = v144;
      if ( ((v50 | v39) & 1) != 0 )
      {
        R_SkinAndBoundSceneEnt((GfxSceneEntity *)(v144 - 1388), GfxViewDomain_World);
        LODWORD(sceneDObjBegin) = v143;
        opaqueCascadeCount = v141;
        if ( *((_DWORD *)v144 - 329) <= 4u )
        {
          *((_BYTE *)&v149->codeEmissiveSurfs[0].drawGroup.fields + v18) = 0;
          v151[v18] = 0;
          v152[v18] = 0;
          v153[v18] = 0;
          v154[v18] = 0;
          v155[v18] = 0;
          v156[v18] = 0;
          v157[v18] = 0;
          v158[v18] = 0;
          v159[v18] = 0;
          v160[v18] = 0;
          v161[v18] = 0;
        }
        goto LABEL_65;
      }
      LODWORD(sceneDObjBegin) = v143;
    }
    opaqueCascadeCount = v141;
LABEL_65:
    sceneDObjEnd = v142;
    goto LABEL_66;
  }
LABEL_68:
  sceneModelBegin = (unsigned int)v1->sceneModelBegin;
  sceneModelEnd = v1->sceneModelEnd;
  sceneDObjVisData = (GfxScene *)scene.sceneModelVisData;
  v165 = scene.sceneModelVisData[2];
  v166 = scene.sceneModelVisData[3];
  v167 = scene.sceneModelVisData[4];
  v168 = scene.sceneModelVisData[5];
  v169 = scene.sceneModelVisData[6];
  v170 = scene.sceneModelVisData[7];
  v171 = scene.sceneModelVisData[8];
  v172 = scene.sceneModelVisData[9];
  v173 = scene.sceneModelVisData[10];
  v174 = scene.sceneModelVisData[11];
  v164 = scene.sceneModelVisData[1];
  if ( (unsigned int)sceneModelBegin < sceneModelEnd )
  {
    v53 = (unsigned int)sceneModelBegin;
    _RDI = (char *)&scene.sceneModel[sceneModelBegin] + 124;
    v145 = sceneModelEnd - (unsigned int)sceneModelBegin;
    do
    {
      v55 = 0;
      v56 = (*((_DWORD *)_RDI - 1) >> 10) & 0xFFF;
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
        v73 = *(_DWORD *)_RDI;
        v59 = &scene.sceneModelVisData[1][v53];
        v60 = &scene.sceneModelVisData[0][v53];
        if ( (v4->sceneEntRenderFlags & (v4->sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) == v4->sceneEntRenderFlags )
        {
          v55 = *v60;
        }
        else
        {
          *v60 = 0;
          v73 = *(_DWORD *)_RDI;
        }
        if ( (v4[1].sceneEntRenderFlags & (v4[1].sceneEntRenderFlagsMask ^ v73 & 0xFFFFF)) == v4[1].sceneEntRenderFlags )
        {
          v55 |= *v59;
        }
        else
        {
          *v59 = 0;
          v73 = *(_DWORD *)_RDI;
        }
        v64 = v59 + 1024;
        if ( (v4[2].sceneEntRenderFlags & (v4[2].sceneEntRenderFlagsMask ^ v73 & 0xFFFFF)) == v4[2].sceneEntRenderFlags )
        {
          v55 |= *v64;
        }
        else
        {
          *v64 = 0;
          v73 = *(_DWORD *)_RDI;
        }
        v65 = v59 + 2048;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ v73 & 0xFFFFF)) == v4[3].sceneEntRenderFlags )
          v55 |= *v65;
        else
          *v65 = 0;
      }
      else if ( ((0x80000000 >> (v56 & 0x1F)) & v3[(unsigned __int64)(unsigned int)v56 >> 5]) != 0 )
      {
        if ( (v4->sceneEntRenderFlags & (v4->sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) == v4->sceneEntRenderFlags )
          v55 = scene.dpvs.entVisData[0][v56];
        v59 = &scene.sceneModelVisData[1][v53];
        v60 = &scene.sceneModelVisData[0][v53];
        *v60 = v55;
        if ( (v4[1].sceneEntRenderFlags & (v4[1].sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) == v4[1].sceneEntRenderFlags )
          v61 = scene.dpvs.entVisData[1][v56];
        else
          v61 = 0;
        *v59 = v61;
        v62 = v61 | v55;
        if ( (v4[2].sceneEntRenderFlags & (v4[2].sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) == v4[2].sceneEntRenderFlags )
          v63 = scene.dpvs.entVisData[2][v56];
        else
          v63 = 0;
        v55 = v63 | v62;
        v64 = &scene.sceneModelVisData[2][v53];
        *v64 = v63;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) == v4[3].sceneEntRenderFlags )
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
        if ( (v4->sceneEntRenderFlags & (v4->sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) != v4->sceneEntRenderFlags )
          v67 = 0;
        *v60 = v67;
        v68 = scene.dpvs.entVisData[1][v56];
        if ( !v68 )
          v68 = 1;
        if ( (v4[1].sceneEntRenderFlags & (v4[1].sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) != v4[1].sceneEntRenderFlags )
          v68 = 0;
        *v59 = v68;
        v69 = v68 | v67;
        v70 = scene.dpvs.entVisData[2][v56];
        if ( !v70 )
          v70 = 1;
        v64 = &scene.sceneModelVisData[2][v53];
        if ( (v4[2].sceneEntRenderFlags & (v4[2].sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) != v4[2].sceneEntRenderFlags )
          v70 = 0;
        *v64 = v70;
        v71 = v70 | v69;
        v72 = scene.dpvs.entVisData[3][v56];
        if ( !v72 )
          v72 = 1;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ *(_DWORD *)_RDI & 0xFFFFF)) != v4[3].sceneEntRenderFlags )
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
        *(_BYTE *)(v53 + *(__int64 *)((char *)&v162 + v74 * 8)) = v77;
        --v75;
      }
      while ( v75 );
      if ( (v55 & 1) != 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+10h]
          vmovss  xmm1, dword ptr [rdi-8]
          vmovss  [rsp+1A0h+var_130], xmm0
          vmovss  xmm0, dword ptr [rdi-28h]
          vmovss  dword ptr [rsp+1A0h+var_170], xmm1
          vmovss  dword ptr [rsp+1A0h+fmt], xmm0
        }
        if ( !R_SkinXModel((XModelDrawInfo *)(_RDI - 124), *(const XModel **)(_RDI - 116), *(const DObj **)(_RDI - 108), (const GfxPlacement *)(_RDI - 68), fmt, (const GfxPlacement *)(_RDI - 36), v138, NULL, NULL, 0, (*(_DWORD *)_RDI & 0x200) != 0, *((_DWORD *)_RDI - 1) & 0x3FF, *((_WORD *)_RDI + 13), *((unsigned __int16 *)_RDI + 12), v140) )
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
      }
      opaqueCascadeCount = v141;
      v3 = v147;
      ++v53;
      _RDI += 152;
      --v145;
    }
    while ( v145 );
    v1 = sceneEntCmd;
  }
  sceneBrushBegin = (unsigned int)v1->sceneBrushBegin;
  sceneBrushEnd = v1->sceneBrushEnd;
  if ( (unsigned int)sceneBrushBegin < sceneBrushEnd )
  {
    v82 = (unsigned int)sceneBrushBegin;
    do
    {
      v83 = &scene.sceneBrush[v82];
      entnum = v83->entnum;
      if ( (_DWORD)entnum == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1886, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
        __debugbreak();
      if ( v141 > 2u )
      {
        v85 = scene.sceneBrushVisData[3][sceneBrushBegin];
        if ( (v85 & 1) == 0 )
          scene.sceneBrushVisData[2][sceneBrushBegin] = v85;
      }
      if ( v141 > 1u )
      {
        v86 = scene.sceneBrushVisData[2][sceneBrushBegin];
        if ( (v86 & 1) == 0 )
          scene.sceneBrushVisData[1][sceneBrushBegin] = v86;
      }
      sceneEntRenderFlags = v4->sceneEntRenderFlags;
      v88 = sceneEntRenderFlags & (v83->renderFlags ^ v4->sceneEntRenderFlagsMask);
      if ( ((0x80000000 >> (entnum & 0x1F)) & v147[entnum >> 5]) != 0 )
      {
        if ( v88 == sceneEntRenderFlags )
          v89 = scene.dpvs.entVisData[0][entnum];
        else
          v89 = 0;
        scene.sceneBrushVisData[0][sceneBrushBegin] = v89;
        if ( (v4[1].sceneEntRenderFlags & (v83->renderFlags ^ v4[1].sceneEntRenderFlagsMask)) == v4[1].sceneEntRenderFlags )
          v90 = scene.dpvs.entVisData[1][entnum];
        else
          v90 = 0;
        v91 = v90 | v89;
        scene.sceneBrushVisData[1][sceneBrushBegin] = v90;
        if ( (v4[2].sceneEntRenderFlags & (v83->renderFlags ^ v4[2].sceneEntRenderFlagsMask)) == v4[2].sceneEntRenderFlags )
          v92 = scene.dpvs.entVisData[2][entnum];
        else
          v92 = 0;
        scene.sceneBrushVisData[2][sceneBrushBegin] = v92;
        v93 = v92 | v91;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ v83->renderFlags)) == v4[3].sceneEntRenderFlags )
          v94 = scene.dpvs.entVisData[3][entnum];
        else
          v94 = 0;
        v95 = v94 | v93;
        scene.sceneBrushVisData[3][sceneBrushBegin] = v94;
        if ( (v4[4].sceneEntRenderFlags & (v83->renderFlags ^ v4[4].sceneEntRenderFlagsMask)) == v4[4].sceneEntRenderFlags )
          v96 = scene.dpvs.entVisData[4][entnum];
        else
          v96 = 0;
        v97 = v96 | v95;
        scene.sceneBrushVisData[4][sceneBrushBegin] = v96;
        if ( (v4[5].sceneEntRenderFlags & (v4[5].sceneEntRenderFlagsMask ^ v83->renderFlags)) == v4[5].sceneEntRenderFlags )
          v98 = scene.dpvs.entVisData[5][entnum];
        else
          v98 = 0;
        v99 = v98 | v97;
        scene.sceneBrushVisData[5][sceneBrushBegin] = v98;
        if ( (v4[6].sceneEntRenderFlags & (v83->renderFlags ^ v4[6].sceneEntRenderFlagsMask)) == v4[6].sceneEntRenderFlags )
          v100 = scene.dpvs.entVisData[6][entnum];
        else
          v100 = 0;
        v101 = v100 | v99;
        scene.sceneBrushVisData[6][sceneBrushBegin] = v100;
        if ( (v4[7].sceneEntRenderFlags & (v83->renderFlags ^ v4[7].sceneEntRenderFlagsMask)) == v4[7].sceneEntRenderFlags )
          v102 = scene.dpvs.entVisData[7][entnum];
        else
          v102 = 0;
        v103 = v102 | v101;
        scene.sceneBrushVisData[7][sceneBrushBegin] = v102;
        if ( (v4[8].sceneEntRenderFlags & (v83->renderFlags ^ v4[8].sceneEntRenderFlagsMask)) == v4[8].sceneEntRenderFlags )
          v104 = scene.dpvs.entVisData[8][entnum];
        else
          v104 = 0;
        v105 = v104 | v103;
        scene.sceneBrushVisData[8][sceneBrushBegin] = v104;
        if ( (v4[9].sceneEntRenderFlags & (v4[9].sceneEntRenderFlagsMask ^ v83->renderFlags)) == v4[9].sceneEntRenderFlags )
          v106 = scene.dpvs.entVisData[9][entnum];
        else
          v106 = 0;
        v107 = v106 | v105;
        scene.sceneBrushVisData[9][sceneBrushBegin] = v106;
        if ( (v4[10].sceneEntRenderFlags & (v83->renderFlags ^ v4[10].sceneEntRenderFlagsMask)) == v4[10].sceneEntRenderFlags )
          v108 = scene.dpvs.entVisData[10][entnum];
        else
          v108 = 0;
        v109 = v108 | v107;
        scene.sceneBrushVisData[10][sceneBrushBegin] = v108;
        if ( (v4[11].sceneEntRenderFlags & (v83->renderFlags ^ v4[11].sceneEntRenderFlagsMask)) == v4[11].sceneEntRenderFlags )
        {
          v110 = scene.dpvs.entVisData[11][entnum];
          scene.sceneBrushVisData[11][sceneBrushBegin] = v110;
          v109 |= v110;
        }
        else
        {
          scene.sceneBrushVisData[11][sceneBrushBegin] = 0;
        }
      }
      else
      {
        if ( v88 != sceneEntRenderFlags || (v111 = scene.dpvs.entVisData[0][entnum]) == 0 )
          v111 = 1;
        scene.sceneBrushVisData[0][sceneBrushBegin] = v111;
        if ( (v4[1].sceneEntRenderFlags & (v83->renderFlags ^ v4[1].sceneEntRenderFlagsMask)) != v4[1].sceneEntRenderFlags || (v112 = scene.dpvs.entVisData[1][entnum]) == 0 )
          v112 = 1;
        v113 = v112 | v111;
        scene.sceneBrushVisData[1][sceneBrushBegin] = v112;
        if ( (v4[2].sceneEntRenderFlags & (v83->renderFlags ^ v4[2].sceneEntRenderFlagsMask)) != v4[2].sceneEntRenderFlags || (v114 = scene.dpvs.entVisData[2][entnum]) == 0 )
          v114 = 1;
        scene.sceneBrushVisData[2][sceneBrushBegin] = v114;
        v115 = v114 | v113;
        if ( (v4[3].sceneEntRenderFlags & (v4[3].sceneEntRenderFlagsMask ^ v83->renderFlags)) != v4[3].sceneEntRenderFlags || (v116 = scene.dpvs.entVisData[3][entnum]) == 0 )
          v116 = 1;
        v117 = v116 | v115;
        scene.sceneBrushVisData[3][sceneBrushBegin] = v116;
        if ( (v4[4].sceneEntRenderFlags & (v83->renderFlags ^ v4[4].sceneEntRenderFlagsMask)) != v4[4].sceneEntRenderFlags || (v118 = scene.dpvs.entVisData[4][entnum]) == 0 )
          v118 = 1;
        v119 = v118 | v117;
        scene.sceneBrushVisData[4][sceneBrushBegin] = v118;
        if ( (v4[5].sceneEntRenderFlags & (v4[5].sceneEntRenderFlagsMask ^ v83->renderFlags)) != v4[5].sceneEntRenderFlags || (v120 = scene.dpvs.entVisData[5][entnum]) == 0 )
          v120 = 1;
        v121 = v120 | v119;
        scene.sceneBrushVisData[5][sceneBrushBegin] = v120;
        if ( (v4[6].sceneEntRenderFlags & (v83->renderFlags ^ v4[6].sceneEntRenderFlagsMask)) != v4[6].sceneEntRenderFlags || (v122 = scene.dpvs.entVisData[6][entnum]) == 0 )
          v122 = 1;
        v123 = v122 | v121;
        scene.sceneBrushVisData[6][sceneBrushBegin] = v122;
        if ( (v4[7].sceneEntRenderFlags & (v83->renderFlags ^ v4[7].sceneEntRenderFlagsMask)) != v4[7].sceneEntRenderFlags || (v124 = scene.dpvs.entVisData[7][entnum]) == 0 )
          v124 = 1;
        v125 = v124 | v123;
        scene.sceneBrushVisData[7][sceneBrushBegin] = v124;
        if ( (v4[8].sceneEntRenderFlags & (v83->renderFlags ^ v4[8].sceneEntRenderFlagsMask)) != v4[8].sceneEntRenderFlags || (v126 = scene.dpvs.entVisData[8][entnum]) == 0 )
          v126 = 1;
        v127 = v126 | v125;
        scene.sceneBrushVisData[8][sceneBrushBegin] = v126;
        if ( (v4[9].sceneEntRenderFlags & (v4[9].sceneEntRenderFlagsMask ^ v83->renderFlags)) != v4[9].sceneEntRenderFlags || (v128 = scene.dpvs.entVisData[9][entnum]) == 0 )
          v128 = 1;
        v129 = v128 | v127;
        scene.sceneBrushVisData[9][sceneBrushBegin] = v128;
        if ( (v4[10].sceneEntRenderFlags & (v83->renderFlags ^ v4[10].sceneEntRenderFlagsMask)) != v4[10].sceneEntRenderFlags || (v130 = scene.dpvs.entVisData[10][entnum]) == 0 )
          v130 = 1;
        v131 = v130 | v129;
        scene.sceneBrushVisData[10][sceneBrushBegin] = v130;
        if ( (v4[11].sceneEntRenderFlags & (v83->renderFlags ^ v4[11].sceneEntRenderFlagsMask)) != v4[11].sceneEntRenderFlags || (v132 = scene.dpvs.entVisData[11][entnum]) == 0 )
          v132 = 1;
        v109 = v132 | v131;
        scene.sceneBrushVisData[11][sceneBrushBegin] = v132;
      }
      if ( (v109 & 1) != 0 )
      {
        p_prevPlacement = &v83->prevPlacement;
        if ( (v83->renderFlags & 0x200) == 0 )
          p_prevPlacement = NULL;
        if ( R_DrawBModel(&v83->info, v83->bmodel, &v83->placement, p_prevPlacement) )
        {
          if ( !v83->info.surfBufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1936, ASSERT_TYPE_ASSERT, "(sceneBrush->info.surfBufSize)", (const char *)&queryFormat, "sceneBrush->info.surfBufSize") )
            __debugbreak();
        }
        else
        {
          entOverflowedDrawBuf = scene.entOverflowedDrawBuf;
          v135 = v83->entnum;
          if ( !scene.entOverflowedDrawBuf && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", LODWORD(scene.entOverflowedDrawBuf) + 20, (AssertType)(LODWORD(scene.entOverflowedDrawBuf) + 1), "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          entOverflowedDrawBuf[v135 >> 5] |= 1 << (v135 & 0x1F);
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
      ++v82;
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
  unsigned int v12; 
  signed __int32 v13; 
  unsigned __int8 **v37; 
  unsigned int v39; 
  unsigned int v41; 
  int v43; 
  GfxSurface *v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 

  surfaceCount = bmodel->surfaceCount;
  _R15 = prevPlacement;
  _R14 = placement;
  if ( !surfaceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1539, ASSERT_TYPE_ASSERT, "(visibleSurfaceCount)", (const char *)&queryFormat, "visibleSurfaceCount") )
    __debugbreak();
  p_surfPos = &frontEndDataOut->surfPos;
  v12 = 24 * surfaceCount + 28;
  if ( (((_BYTE)frontEndDataOut - 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frontEndDataOut->surfPos) )
    __debugbreak();
  v13 = _InterlockedExchangeAdd(p_surfPos, v12);
  if ( v13 + v12 <= 0x40000 )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm6
      vmovaps [rsp+98h+var_48], xmm7
    }
    if ( (v13 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1550, ASSERT_TYPE_ASSERT, "(!(startSurfPos & 3))", (const char *)&queryFormat, "!(startSurfPos & 3)") )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [r14+4]
      vmovss  xmm5, dword ptr [r14]
      vmovss  xmm6, dword ptr [r14+8]
      vmovss  xmm7, dword ptr [r14+0Ch]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm3, xmm0
      vsubss  xmm1, xmm2, cs:__real@3f800000
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@3b03126f
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+98h+var_50], xmm1
      vcvtss2sd xmm0, xmm4, xmm4
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+98h+var_58], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+98h+var_60], xmm3
      vmovsd  [rsp+98h+var_68], xmm0
      vcvtss2sd xmm4, xmm5, xmm5
      vmovsd  [rsp+98h+var_70], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1552, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( placement->quat ) )", "(%g, %g, %g, %g) len: %g", v47, v48, v49, v50, v51) )
      __debugbreak();
    __asm { vmovups xmm0, xmmword ptr [r14] }
    _RBP = &frontEndDataOut->surfsBuffer[v13];
    __asm
    {
      vmovups xmmword ptr [rbp+0], xmm0
      vmovsd  xmm1, qword ptr [r14+10h]
      vmovsd  qword ptr [rbp+10h], xmm1
    }
    v37 = (unsigned __int8 **)(_RBP + 28);
    *((_DWORD *)_RBP + 6) = LODWORD(_R14->origin.v[2]);
    __asm { vmovaps xmm7, [rsp+98h+var_48] }
    v39 = truncate_cast<unsigned int,__int64>(_RBP + 28 - (unsigned __int8 *)frontEndDataOut - 1789440);
    __asm { vmovaps xmm6, [rsp+98h+var_38] }
    if ( (v39 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1558, ASSERT_TYPE_ASSERT, "(!(surfId & 3))", (const char *)&queryFormat, "!(surfId & 3)") )
      __debugbreak();
    bmodelInfo->surfId = v39 >> 2;
    v41 = 0;
    bmodelInfo->surfBufSize = v12;
    if ( _R15 )
    {
      v43 = R_AllocMotionBlurSurfs(28);
      if ( v43 >= 0 )
      {
        __asm { vmovups xmm0, xmmword ptr [r15] }
        _R8 = &frontEndDataOut->motionblurSurfsBuffer[v43];
        __asm
        {
          vmovups xmmword ptr [r8], xmm0
          vmovsd  xmm1, qword ptr [r15+10h]
          vmovsd  qword ptr [r8+10h], xmm1
        }
        *((_DWORD *)_R8 + 6) = LODWORD(_R15->origin.v[2]);
      }
      else
      {
        _R8 = NULL;
      }
    }
    else
    {
      _R8 = NULL;
    }
    v46 = &rgp.world->surfaces.surfaces[bmodel->startSurfIndex];
    if ( bmodel->surfaceCount )
    {
      do
      {
        v37[1] = (unsigned __int8 *)v46++;
        *v37 = _RBP;
        ++v41;
        v37[2] = _R8;
        v37 += 3;
      }
      while ( v41 < bmodel->surfaceCount );
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
  unsigned int *v10; 
  const dvar_t *v11; 
  __int64 v12; 
  __int64 v13; 
  const char *v14; 
  __int64 v15; 
  unsigned __int8 *v19; 
  __int64 v20; 
  unsigned __int8 *v21; 
  unsigned __int8 *v22; 
  unsigned __int8 *v23; 
  __int64 v24; 
  unsigned __int8 *v25; 
  __int64 v26; 
  unsigned __int8 *v27; 
  __int64 v28; 
  unsigned __int8 *v29; 
  __int64 v30; 
  unsigned __int8 *v31; 
  __int64 v32; 
  unsigned __int8 *v33; 
  unsigned __int8 *v34; 
  unsigned __int8 *v35; 
  unsigned __int8 *v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v44; 
  __int64 v45; 
  DynEntityList *DynEntityList; 
  const DynEntityDef *v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  char v51; 
  char v52; 
  char v53; 
  char v54; 
  char v55; 
  char v56; 
  char v57; 
  char v58; 
  char v59; 
  char v60; 
  char v61; 
  char v62; 
  char v63; 
  const XModel *v64; 
  unsigned __int16 v65; 
  unsigned int UsableLodForDist; 
  int v88; 
  bool v89; 
  char v91; 
  char v92; 
  unsigned int mapEntLookup; 
  unsigned __int8 numParts; 
  DynEnt_ExtraPosePart *v96; 
  volatile signed __int32 *v100; 
  float fmt; 
  GfxPlacement *placementPrevFrame; 
  __int64 scalePrevFrame; 
  float scalePrevFramea; 
  GfxPlacement *part0Placement; 
  GfxPlacement *part0Placementa; 
  GfxPlacement *extraPartPlacements; 
  float v117; 
  bool enabled; 
  unsigned int v119; 
  int v120; 
  __int64 v121; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 
  __int64 v130; 
  __int64 v131; 
  __int64 v132; 
  int v133; 
  __int64 v134; 
  __int64 v136; 
  XModelDrawInfo modelInfo; 
  int v138; 
  MaterialLodSettings materialLodSettings; 
  __int64 v140; 
  __int64 v141; 
  __int64 v142; 
  __int64 v143; 
  __int64 v144; 
  __int64 v145; 
  __int64 v146; 
  __int64 v147; 
  __int64 v148; 
  __int64 v149; 
  __int64 v150; 
  __int64 v151; 
  char v152; 
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
  }
  v10 = (unsigned int *)cmd;
  memset_0(&v140, 0, 0x60ui64);
  v11 = DVARBOOL_sm_spotUpdateMoreDynEnt;
  if ( !DVARBOOL_sm_spotUpdateMoreDynEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotUpdateMoreDynEnt") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  v12 = (int)*v10;
  v119 = *v10;
  v13 = v10[5];
  v133 = v13;
  v14 = j_va("DynEnt batch %u", (unsigned int)v13);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v14);
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1980, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  v15 = *(int *)(*((_QWORD *)v10 + 1) + 11712i64);
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 1984, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  __asm
  {
    vmovss  xmm11, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.scale; r_globals_t rg
    vmovss  xmm12, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.bias; r_globals_t rg
    vmovss  xmm13, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.cappedLodScale; r_globals_t rg
  }
  v19 = rgp.world->dpvsDyn.dynEntVisData[0][0];
  if ( v19 )
  {
    v20 = (__int64)&v19[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v140 = v20;
  }
  else
  {
    v20 = v140;
  }
  v123 = v20;
  v21 = rgp.world->dpvsDyn.dynEntVisData[0][1];
  if ( v21 )
  {
    v121 = (__int64)&v21[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v141 = v121;
  }
  else
  {
    v121 = v141;
  }
  v22 = rgp.world->dpvsDyn.dynEntVisData[0][2];
  if ( v22 )
  {
    v122 = (__int64)&v22[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v142 = v122;
  }
  else
  {
    v122 = v142;
  }
  v23 = rgp.world->dpvsDyn.dynEntVisData[0][3];
  if ( v23 )
  {
    v24 = (__int64)&v23[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v143 = v24;
  }
  else
  {
    v24 = v143;
  }
  v124 = v24;
  v25 = rgp.world->dpvsDyn.dynEntVisData[0][4];
  if ( v25 )
  {
    v26 = (__int64)&v25[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v144 = v26;
  }
  else
  {
    v26 = v144;
  }
  v125 = v26;
  v27 = rgp.world->dpvsDyn.dynEntVisData[0][5];
  if ( v27 )
  {
    v28 = (__int64)&v27[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v145 = v28;
  }
  else
  {
    v28 = v145;
  }
  v126 = v28;
  v29 = rgp.world->dpvsDyn.dynEntVisData[0][6];
  if ( v29 )
  {
    v30 = (__int64)&v29[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v146 = v30;
  }
  else
  {
    v30 = v146;
  }
  v127 = v30;
  v31 = rgp.world->dpvsDyn.dynEntVisData[0][7];
  if ( v31 )
  {
    v32 = (__int64)&v31[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v147 = v32;
  }
  else
  {
    v32 = v147;
  }
  v128 = v32;
  v33 = rgp.world->dpvsDyn.dynEntVisData[0][8];
  if ( v33 )
  {
    v129 = (__int64)&v33[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v148 = v129;
    v10 = (unsigned int *)cmd;
  }
  else
  {
    v129 = v148;
  }
  v34 = rgp.world->dpvsDyn.dynEntVisData[0][9];
  if ( v34 )
  {
    v130 = (__int64)&v34[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v149 = v130;
  }
  else
  {
    v130 = v149;
  }
  v35 = rgp.world->dpvsDyn.dynEntVisData[0][10];
  if ( v35 )
  {
    v131 = (__int64)&v35[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v150 = v131;
  }
  else
  {
    v131 = v150;
  }
  v36 = rgp.world->dpvsDyn.dynEntVisData[0][11];
  if ( v36 )
  {
    v132 = (__int64)&v36[(unsigned int)(v12 * rgp.world->dpvsDyn.dynEntClientCount[0])];
    v151 = v132;
  }
  else
  {
    v132 = v151;
  }
  if ( v10[4] > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2004, ASSERT_TYPE_ASSERT, "(data->count <= ( sizeof( *array_counter( s_dynEntModelsCmdEntityBuffer[batchIndex] ) ) + 0 ))", (const char *)&queryFormat, "data->count <= ARRAY_COUNT( s_dynEntModelsCmdEntityBuffer[batchIndex] )") )
    __debugbreak();
  v37 = 0i64;
  v120 = 0;
  if ( v10[4] )
  {
    v38 = v12;
    v134 = v12;
    v39 = v13 << 7;
    v136 = v13 << 7;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vmovss  xmm9, cs:__real@4b800000
      vmovss  xmm10, cs:__real@4f800000
      vmovss  xmm8, cs:__real@3f800000
    }
    while ( 1 )
    {
      v44 = *((_QWORD *)&s_dynEntModelsCmdEntityBuffer[0][v39] + v37);
      if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2009, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      v45 = *(_DWORD *)(v44 + 8) & 0x7FFFF;
      DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)(*(_DWORD *)(v44 + 8) >> 19));
      if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( (unsigned int)v45 >= DynEntityList->dynEntCount[0] )
      {
        LODWORD(scalePrevFrame) = DynEntityList->dynEntCount[0];
        LODWORD(placementPrevFrame) = v45;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
          __debugbreak();
      }
      v47 = &DynEntityList->dynEntDefList[0][v45];
      if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2012, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      v48 = v47->clientId[v38];
      v49 = (unsigned int)v48;
      v50 = v122;
      v51 = *(_BYTE *)(v122 + v48);
      if ( (v51 & 1) == 0 )
        *(_BYTE *)(v121 + v48) = v51;
      v52 = 0;
      if ( v123 )
      {
        if ( (dpvsGlob.views[v15][0].dynEntRenderFlags & (*(unsigned __int16 *)(v44 + 28) ^ dpvsGlob.views[v15][0].dynEntRenderFlagsMask)) == dpvsGlob.views[v15][0].dynEntRenderFlags )
          v52 = *(_BYTE *)((unsigned int)v48 + v123);
        *(_BYTE *)((unsigned int)v48 + v123) = v52;
        v50 = v122;
      }
      if ( v121 )
      {
        v53 = 0;
        if ( (dpvsGlob.views[v15][1].dynEntRenderFlags & (dpvsGlob.views[v15][1].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][1].dynEntRenderFlags )
          v53 = *(_BYTE *)(v121 + (unsigned int)v48);
        *(_BYTE *)(v121 + (unsigned int)v48) = v53;
        v52 |= v53;
      }
      if ( v50 )
      {
        v54 = 0;
        if ( (dpvsGlob.views[v15][2].dynEntRenderFlags & (dpvsGlob.views[v15][2].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][2].dynEntRenderFlags )
          v54 = *(_BYTE *)(v50 + (unsigned int)v48);
        *(_BYTE *)(v50 + (unsigned int)v48) = v54;
        v52 |= v54;
      }
      if ( v124 )
      {
        v55 = 0;
        if ( (dpvsGlob.views[v15][3].dynEntRenderFlags & (dpvsGlob.views[v15][3].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][3].dynEntRenderFlags )
          v55 = *(_BYTE *)(v124 + (unsigned int)v48);
        *(_BYTE *)(v124 + (unsigned int)v48) = v55;
        v52 |= v55;
      }
      if ( v125 )
      {
        v56 = 0;
        if ( (dpvsGlob.views[v15][4].dynEntRenderFlags & (dpvsGlob.views[v15][4].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][4].dynEntRenderFlags )
          v56 = *(_BYTE *)(v125 + (unsigned int)v48);
        *(_BYTE *)(v125 + (unsigned int)v48) = v56;
        v52 |= v56;
      }
      if ( v126 )
      {
        v57 = 0;
        if ( (dpvsGlob.views[v15][5].dynEntRenderFlags & (dpvsGlob.views[v15][5].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][5].dynEntRenderFlags )
          v57 = *(_BYTE *)(v126 + (unsigned int)v48);
        *(_BYTE *)(v126 + (unsigned int)v48) = v57;
        v52 |= v57;
      }
      if ( v127 )
      {
        v58 = 0;
        if ( (dpvsGlob.views[v15][6].dynEntRenderFlags & (dpvsGlob.views[v15][6].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][6].dynEntRenderFlags )
          v58 = *(_BYTE *)(v127 + (unsigned int)v48);
        *(_BYTE *)(v127 + (unsigned int)v48) = v58;
        v52 |= v58;
      }
      if ( v128 )
      {
        v59 = 0;
        if ( (dpvsGlob.views[v15][7].dynEntRenderFlags & (dpvsGlob.views[v15][7].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][7].dynEntRenderFlags )
          v59 = *(_BYTE *)(v128 + (unsigned int)v48);
        *(_BYTE *)(v128 + (unsigned int)v48) = v59;
        v52 |= v59;
      }
      if ( v129 )
      {
        v60 = 0;
        if ( (dpvsGlob.views[v15][8].dynEntRenderFlags & (dpvsGlob.views[v15][8].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][8].dynEntRenderFlags )
          v60 = *(_BYTE *)(v129 + (unsigned int)v48);
        *(_BYTE *)(v129 + (unsigned int)v48) = v60;
        v52 |= v60;
      }
      if ( v130 )
      {
        v61 = 0;
        if ( (dpvsGlob.views[v15][9].dynEntRenderFlags & (dpvsGlob.views[v15][9].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][9].dynEntRenderFlags )
          v61 = *(_BYTE *)(v130 + (unsigned int)v48);
        *(_BYTE *)(v130 + (unsigned int)v48) = v61;
        v52 |= v61;
      }
      if ( v131 )
      {
        v62 = 0;
        if ( (dpvsGlob.views[v15][10].dynEntRenderFlags & (dpvsGlob.views[v15][10].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][10].dynEntRenderFlags )
          v62 = *(_BYTE *)(v131 + (unsigned int)v48);
        *(_BYTE *)(v131 + (unsigned int)v48) = v62;
        v52 |= v62;
      }
      if ( v132 )
      {
        v63 = 0;
        if ( (dpvsGlob.views[v15][11].dynEntRenderFlags & (dpvsGlob.views[v15][11].dynEntRenderFlagsMask ^ *(unsigned __int16 *)(v44 + 28))) == dpvsGlob.views[v15][11].dynEntRenderFlags )
          v63 = *(_BYTE *)(v132 + (unsigned int)v48);
        *(_BYTE *)(v132 + (unsigned int)v48) = v63;
        v52 |= v63;
      }
      if ( enabled && R_IsDynEntClientVisibleToAnyShadowedPrimaryLight((LocalClientNum_t)v12, frontEndDataOut, v48, DYNENT_BASIS_MODEL) )
        v52 |= 1u;
      if ( (v52 & 1) == 0 )
        goto LABEL_162;
      v64 = *(const XModel **)v44;
      if ( *(_QWORD *)v44 )
      {
        if ( v119 >= 2 )
        {
          LODWORD(scalePrevFrame) = 2;
          LODWORD(placementPrevFrame) = v119;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        if ( !g_dynEntPoseLists[v134][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v65 = g_dynEntClientEntsAllocCount[v134][0];
        if ( (unsigned __int16)v48 >= v65 )
        {
          LODWORD(scalePrevFrame) = v65;
          LODWORD(placementPrevFrame) = (unsigned __int16)v48;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        _R14 = &g_dynEntPoseLists[v134][0][(unsigned int)v48];
        modelInfo = 0i64;
        v138 = 0;
        __asm
        {
          vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
          vsubss  xmm3, xmm0, dword ptr [r14+4Ch]
          vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4; r_globals_t rg
          vsubss  xmm2, xmm1, dword ptr [r14+50h]
          vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8; r_globals_t rg
          vsubss  xmm4, xmm0, dword ptr [r14+54h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm6, xmm2, xmm2
          vmulss  xmm2, xmm6, xmm13; cullDist
          vmulss  xmm0, xmm6, xmm11
          vaddss  xmm1, xmm0, xmm12; dist
        }
        UsableLodForDist = XModelGetUsableLodForDist(v64, *(const float *)&_XMM1, *(const float *)&_XMM2);
        if ( UsableLodForDist == 6 )
        {
          LODWORD(v12) = v134;
          goto LABEL_162;
        }
        if ( UsableLodForDist >= v64->numLods )
        {
          LODWORD(scalePrevFrame) = v64->numLods;
          LODWORD(placementPrevFrame) = UsableLodForDist;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2066, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        R_SetMaterialLodSettings(&materialLodSettings);
        __asm
        {
          vmovss  xmm0, dword ptr [r14+34h]
          vmaxss  xmm0, xmm0, dword ptr [r14+30h]
          vmaxss  xmm0, xmm0, dword ptr [r14+38h]; radius
          vmovaps xmm1, xmm6; dist
        }
        *(double *)&_XMM0 = XModelGetMaterialLodForDist(*(float *)&_XMM0, *(float *)&_XMM1, &materialLodSettings);
        __asm { vmovaps xmm6, xmm0 }
        if ( UsableLodForDist > 0x10 )
        {
          LODWORD(scalePrevFrame) = 16;
          LODWORD(placementPrevFrame) = UsableLodForDist;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2075, ASSERT_TYPE_ASSERT, "( lod ) <= ( (1 << 4) )", "lod not in [0, XMODELDRAWINFO_LOD_LIMIT]\n\t%u not in [0, %u]", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        v88 = (*(_BYTE *)&modelInfo ^ (unsigned __int8)(2 * UsableLodForDist)) & 0x1E;
        v89 = v88 == modelInfo;
        *(_DWORD *)&modelInfo ^= v88;
        __asm
        {
          vcvttss2si rbx, xmm6
          vcomiss xmm6, xmm7
          vcomiss xmm6, xmm9
        }
        if ( v89 )
        {
          v91 = 1;
        }
        else
        {
          v91 = 0;
          v89 = 1;
        }
        __asm
        {
          vcomiss xmm6, xmm7
          vcomiss xmm6, xmm10
        }
        v92 = v89;
        if ( !v91 || !v92 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  [rsp+250h+part0Placement], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", (unsigned int)_RBX, *(double *)&part0Placementa) )
            __debugbreak();
        }
        if ( (unsigned int)_RBX > 1 )
        {
          LODWORD(extraPartPlacements) = 1;
          LODWORD(part0Placement) = _RBX;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", part0Placement, extraPartPlacements) )
            __debugbreak();
        }
        if ( (unsigned int)_RBX > 2 )
        {
          LODWORD(scalePrevFrame) = 2;
          LODWORD(placementPrevFrame) = _RBX;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2079, ASSERT_TYPE_ASSERT, "( integerMaterialLod ) <= ( (1 << 1) )", "integerMaterialLod not in [0, XMODELDRAWINFO_MATERIAL_LOD_LIMIT]\n\t%u not in [0, %u]", placementPrevFrame, scalePrevFrame) )
            __debugbreak();
        }
        *(_DWORD *)&modelInfo = *(_DWORD *)&modelInfo & 0xFFFFFFDE | (32 * (_RBX & 1));
        mapEntLookup = R_GetDynEntMapLookup(v47);
        numParts = _R14->numParts;
        if ( numParts <= 1u )
        {
          v96 = NULL;
        }
        else
        {
          if ( _R14->posePart1FirstIndex >= g_dynEntExtraPosePartsAllocCount[v134] )
          {
            LODWORD(scalePrevFrame) = g_dynEntExtraPosePartsAllocCount[v134];
            LODWORD(placementPrevFrame) = _R14->posePart1FirstIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", placementPrevFrame, scalePrevFrame) )
              __debugbreak();
          }
          v96 = &g_dynEntPoseExtraParts[v134][_R14->posePart1FirstIndex];
          numParts = _R14->numParts;
        }
        __asm
        {
          vmovss  [rsp+250h+var_1E0], xmm6
          vmovss  [rsp+250h+scalePrevFrame], xmm8
          vmovss  dword ptr [rsp+250h+fmt], xmm8
        }
        if ( !R_SkinXModel(&modelInfo, v64, NULL, &_R14->pose, fmt, &_R14->pose, scalePrevFramea, &_R14->posePart0, &v96->posePart, numParts, 0, 0, 0, mapEntLookup, v117) )
        {
          if ( v123 )
            *(_BYTE *)(v49 + v123) = 0;
          if ( v121 )
            *(_BYTE *)(v121 + v49) = 0;
          if ( v122 )
            *(_BYTE *)(v122 + v49) = 0;
          if ( v124 )
            *(_BYTE *)(v124 + v49) = 0;
          if ( v125 )
            *(_BYTE *)(v125 + v49) = 0;
          if ( v126 )
            *(_BYTE *)(v126 + v49) = 0;
          if ( v127 )
            *(_BYTE *)(v127 + v49) = 0;
          if ( v128 )
            *(_BYTE *)(v128 + v49) = 0;
          if ( v129 )
            *(_BYTE *)(v129 + v49) = 0;
          if ( v130 )
            *(_BYTE *)(v130 + v49) = 0;
          if ( v131 )
            *(_BYTE *)(v131 + v49) = 0;
          LODWORD(v12) = v119;
          if ( v132 )
            *(_BYTE *)(v132 + v49) = 0;
          goto LABEL_162;
        }
        LOWORD(v138) = v49;
        if ( ((unsigned __int8)&scene.sceneDynModelCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.sceneDynModelCount) )
          __debugbreak();
        _RDX = (unsigned int)_InterlockedExchangeAdd(&scene.sceneDynModelCount, 1u);
        _RCX = rgp.world->sceneDynModel;
        __asm
        {
          vmovsd  xmm0, qword ptr [rbp+150h+modelInfo._bf_0]
          vmovsd  qword ptr [rcx+rdx*4], xmm0
        }
        *(_DWORD *)&_RCX[_RDX].dynEntClientId = v138;
        v132 = v151;
        v131 = v150;
        v130 = v149;
        v129 = v148;
        v128 = v147;
        v127 = v146;
        v126 = v145;
        v125 = v144;
        v124 = v143;
        v122 = v142;
        v121 = v141;
        v123 = v140;
      }
      LODWORD(v12) = v119;
LABEL_162:
      v37 = (unsigned int)(v120 + 1);
      v120 = v37;
      v38 = (int)v12;
      v39 = v136;
      if ( (unsigned int)v37 >= *((_DWORD *)cmd + 4) )
      {
        LODWORD(v13) = v133;
        break;
      }
    }
  }
  v100 = &s_dynEntModelsCmdBatchAvailable[(unsigned int)v13];
  if ( ((unsigned __int8)v100 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_dynEntModelsCmdBatchAvailable[(unsigned int)v13]) )
    __debugbreak();
  _InterlockedIncrement(v100);
  Sys_ProfEndNamedEvent();
  _R11 = &v152;
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

void __fastcall R_FilterDObjIntoCells(unsigned int localClientNum, unsigned int entnum, const vec3_t *origin, double radius)
{
  bool v11; 
  const mnode_t *nodes; 
  __int64 v15; 
  unsigned int maxClientViews; 
  FilterEntInfo entInfo; 
  Bounds bounds; 

  __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
  _RDI = origin;
  __asm { vmovaps xmm6, xmm3 }
  if ( entnum == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2817, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
    __debugbreak();
  if ( localClientNum >= gfxCfg.maxClientViews )
  {
    maxClientViews = gfxCfg.maxClientViews;
    LODWORD(v15) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2818, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( gfxCfg.maxClientViews )", "localClientNum doesn't index gfxCfg.maxClientViews\n\t%i not in [0, %i)", v15, maxClientViews) )
      __debugbreak();
  }
  R_UnfilterEntFromCells(localClientNum, entnum);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+0A8h+entInfo.info], xmm6
  }
  entInfo.localClientNum = localClientNum;
  entInfo.entnum = entnum;
  entInfo.cellOffset = 0;
  v11 = !r_dpvsFilterDebug->current.enabled;
  nodes = (const mnode_t *)rgp.world->dpvsPlanes.nodes;
  __asm
  {
    vmovss  dword ptr [rsp+0A8h+bounds.midPoint], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+0A8h+bounds.midPoint+4], xmm1
    vmovss  dword ptr [rsp+0A8h+bounds.midPoint+8], xmm0
    vmovss  dword ptr [rsp+0A8h+bounds.halfSize], xmm6
    vmovss  dword ptr [rsp+0A8h+bounds.halfSize+4], xmm6
    vmovss  dword ptr [rsp+0A8h+bounds.halfSize+8], xmm6
  }
  if ( v11 )
    R_FilterEntIntoCells_r(&entInfo, nodes, &bounds);
  else
    R_FilterEntIntoAllCells_r(&entInfo, nodes);
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
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
  const mnode_t *v13; 
  unsigned int cellCount; 
  unsigned int planeOrCellIndex; 
  unsigned int v16; 
  bool v17; 
  bool v18; 
  unsigned int v19; 
  __int64 rightChildOffset; 
  unsigned __int8 type; 
  Bounds boundsa; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovsd  xmm1, qword ptr [r8+10h]
  }
  v13 = node;
  cellCount = rgp.world->dpvsPlanes.cellCount;
  __asm
  {
    vmovups xmmword ptr [rsp+0C8h+bounds.midPoint], xmm0
    vmovsd  qword ptr [rsp+0C8h+bounds.halfSize+4], xmm1
  }
  planeOrCellIndex = node->planeOrCellIndex;
  v16 = cellCount + 1;
  v17 = planeOrCellIndex < v16;
  v18 = planeOrCellIndex <= v16;
  v19 = planeOrCellIndex - v16;
  if ( (int)(planeOrCellIndex - v16) >= 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovss  xmm7, cs:__real@3f000000
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0C8h+var_88], xmm11
      vmovss  xmm11, cs:__real@3a83126f
    }
    do
    {
      _RCX = 5i64 * (int)v19;
      _RDX = rgp.world->dpvsPlanes.planes;
      __asm
      {
        vmovss  xmm3, dword ptr [rdx+rcx*4]
        vmulss  xmm1, xmm3, dword ptr [rsp+0C8h+bounds.midPoint]
        vmovss  xmm4, dword ptr [rdx+rcx*4+4]
        vmulss  xmm0, xmm4, dword ptr [rsp+0C8h+bounds.midPoint+4]
        vmovss  xmm5, dword ptr [rdx+rcx*4+8]
        vmovss  xmm6, dword ptr [rdx+rcx*4+0Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rsp+0C8h+bounds.midPoint+8]
        vaddss  xmm2, xmm2, xmm1
        vandps  xmm3, xmm3, xmm10
        vmulss  xmm1, xmm3, dword ptr [rsp+0C8h+bounds.halfSize]
        vsubss  xmm8, xmm2, xmm6
        vandps  xmm4, xmm4, xmm10
        vmulss  xmm0, xmm4, dword ptr [rsp+0C8h+bounds.halfSize+4]
        vaddss  xmm2, xmm1, xmm0
        vandps  xmm5, xmm5, xmm10
        vmulss  xmm0, xmm5, dword ptr [rsp+0C8h+bounds.halfSize+8]
        vaddss  xmm1, xmm2, xmm0
        vsubss  xmm3, xmm1, xmm11
        vcomiss xmm8, xmm3
      }
      if ( v18 )
      {
        __asm
        {
          vxorps  xmm0, xmm3, xmm9
          vcomiss xmm8, xmm0
        }
        if ( v17 )
        {
          rightChildOffset = (unsigned int)v13->rightChildOffset - 2 + 2i64;
        }
        else
        {
          type = _RDX[v19].type;
          rightChildOffset = v13->rightChildOffset;
          if ( type >= 3u )
          {
            R_FilterEntIntoCells_r(entInfo, v13 + 1, &boundsa);
          }
          else
          {
            _RSI = type;
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+rsi*4+0C8h+bounds.midPoint]
              vmovss  xmm0, dword ptr [rsp+rsi*4+0C8h+bounds.halfSize]
              vaddss  xmm3, xmm1, xmm0
              vcomiss xmm6, xmm3
              vsubss  xmm8, xmm1, xmm0
              vaddss  xmm0, xmm3, xmm6
              vmulss  xmm1, xmm0, xmm7
              vsubss  xmm2, xmm3, xmm6
              vmulss  xmm0, xmm2, xmm7
              vmovss  dword ptr [rsp+rsi*4+0C8h+bounds.midPoint], xmm1
              vmovss  dword ptr [rsp+rsi*4+0C8h+bounds.halfSize], xmm0
            }
            R_FilterEntIntoCells_r(entInfo, v13 + 1, &boundsa);
            __asm
            {
              vaddss  xmm0, xmm8, xmm6
              vmulss  xmm1, xmm0, xmm7
              vsubss  xmm2, xmm6, xmm8
              vmulss  xmm0, xmm2, xmm7
              vmovss  dword ptr [rsp+rsi*4+0C8h+bounds.midPoint], xmm1
              vmovss  dword ptr [rsp+rsi*4+0C8h+bounds.halfSize], xmm0
            }
          }
        }
      }
      else
      {
        rightChildOffset = 2i64;
      }
      planeOrCellIndex = *(&v13->planeOrCellIndex + rightChildOffset);
      v13 = (const mnode_t *)((char *)v13 + 2 * rightChildOffset);
      v17 = planeOrCellIndex < v16;
      v18 = planeOrCellIndex <= v16;
      v19 = planeOrCellIndex - v16;
    }
    while ( (int)(planeOrCellIndex - v16) >= 0 );
    __asm
    {
      vmovaps xmm11, [rsp+0C8h+var_88]
      vmovaps xmm10, [rsp+0C8h+var_78]
      vmovaps xmm9, [rsp+0C8h+var_68]
      vmovaps xmm8, [rsp+0C8h+var_58]
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
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
  const mnode_t *v16; 
  unsigned int cellCount; 
  unsigned int planeOrCellIndex; 
  unsigned int v19; 
  bool v20; 
  bool v21; 
  unsigned int v22; 
  __int64 rightChildOffset; 
  unsigned __int8 type; 
  __int64 v70; 
  volatile signed __int32 *v71; 
  Bounds boundsa; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovsd  xmm1, qword ptr [r8+10h]
  }
  v16 = node;
  cellCount = rgp.world->dpvsPlanes.cellCount;
  __asm
  {
    vmovups xmmword ptr [rsp+0E8h+bounds.midPoint], xmm0
    vmovsd  qword ptr [rsp+0E8h+bounds.halfSize+4], xmm1
  }
  planeOrCellIndex = node->planeOrCellIndex;
  v19 = cellCount + 1;
  v20 = planeOrCellIndex < v19;
  v22 = planeOrCellIndex - v19;
  v21 = planeOrCellIndex <= v19;
  if ( (int)(planeOrCellIndex - v19) >= 0 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovss  xmm7, cs:__real@3f000000
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+0E8h+var_88], xmm10
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0E8h+var_98], xmm11
      vmovss  xmm11, cs:__real@3a83126f
    }
    do
    {
      _RCX = 5i64 * (int)v22;
      _RDX = rgp.world->dpvsPlanes.planes;
      __asm
      {
        vmovss  xmm3, dword ptr [rdx+rcx*4]
        vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+bounds.midPoint]
        vmovss  xmm4, dword ptr [rdx+rcx*4+4]
        vmulss  xmm0, xmm4, dword ptr [rsp+0E8h+bounds.midPoint+4]
        vmovss  xmm5, dword ptr [rdx+rcx*4+8]
        vmovss  xmm6, dword ptr [rdx+rcx*4+0Ch]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rsp+0E8h+bounds.midPoint+8]
        vaddss  xmm2, xmm2, xmm1
        vandps  xmm3, xmm3, xmm10
        vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+bounds.halfSize]
        vsubss  xmm8, xmm2, xmm6
        vandps  xmm4, xmm4, xmm10
        vmulss  xmm0, xmm4, dword ptr [rsp+0E8h+bounds.halfSize+4]
        vaddss  xmm2, xmm1, xmm0
        vandps  xmm5, xmm5, xmm10
        vmulss  xmm0, xmm5, dword ptr [rsp+0E8h+bounds.halfSize+8]
        vaddss  xmm1, xmm2, xmm0
        vsubss  xmm3, xmm1, xmm11
        vcomiss xmm8, xmm3
      }
      if ( v21 )
      {
        __asm
        {
          vxorps  xmm0, xmm3, xmm9
          vcomiss xmm8, xmm0
        }
        if ( v20 )
        {
          rightChildOffset = (unsigned int)v16->rightChildOffset - 2 + 2i64;
        }
        else
        {
          type = _RDX[v22].type;
          rightChildOffset = v16->rightChildOffset;
          if ( type >= 3u )
          {
            R_FilterThingIntoCells_r(v16 + 1, dynEntIndex, &boundsa, cellBits, wordCount);
          }
          else
          {
            _RSI = type;
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+rsi*4+0E8h+bounds.midPoint]
              vmovss  xmm0, dword ptr [rsp+rsi*4+0E8h+bounds.halfSize]
              vaddss  xmm3, xmm1, xmm0
              vcomiss xmm6, xmm3
              vsubss  xmm8, xmm1, xmm0
              vaddss  xmm0, xmm3, xmm6
              vmulss  xmm1, xmm0, xmm7
              vsubss  xmm2, xmm3, xmm6
              vmulss  xmm0, xmm2, xmm7
              vmovss  dword ptr [rsp+rsi*4+0E8h+bounds.midPoint], xmm1
              vmovss  dword ptr [rsp+rsi*4+0E8h+bounds.halfSize], xmm0
            }
            R_FilterThingIntoCells_r(v16 + 1, dynEntIndex, &boundsa, cellBits, wordCount);
            __asm
            {
              vaddss  xmm0, xmm8, xmm6
              vmulss  xmm1, xmm0, xmm7
              vsubss  xmm2, xmm6, xmm8
              vmulss  xmm0, xmm2, xmm7
              vmovss  dword ptr [rsp+rsi*4+0E8h+bounds.midPoint], xmm1
              vmovss  dword ptr [rsp+rsi*4+0E8h+bounds.halfSize], xmm0
            }
          }
        }
      }
      else
      {
        rightChildOffset = 2i64;
      }
      planeOrCellIndex = *(&v16->planeOrCellIndex + rightChildOffset);
      v16 = (const mnode_t *)((char *)v16 + 2 * rightChildOffset);
      v20 = planeOrCellIndex < v19;
      v21 = planeOrCellIndex <= v19;
      v22 = planeOrCellIndex - v19;
    }
    while ( (int)(planeOrCellIndex - v19) >= 0 );
    __asm
    {
      vmovaps xmm11, [rsp+0E8h+var_98]
      vmovaps xmm10, [rsp+0E8h+var_88]
      vmovaps xmm9, [rsp+0E8h+var_78]
      vmovaps xmm8, [rsp+0E8h+var_68]
      vmovaps xmm7, [rsp+0E8h+var_58]
      vmovaps xmm6, [rsp+0E8h+var_48]
    }
  }
  if ( planeOrCellIndex )
  {
    v70 = (dynEntIndex >> 5) + wordCount * (planeOrCellIndex - 1);
    v71 = (volatile signed __int32 *)&cellBits[v70];
    if ( ((unsigned __int8)v71 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &cellBits[v70]) )
      __debugbreak();
    _InterlockedOr(v71, 0x80000000 >> (dynEntIndex & 0x1F));
  }
}

/*
==============
R_FilterXModelIntoScene
==============
*/
bool R_FilterXModelIntoScene(const XModel *model, const GfxScaledPlacement *placement, unsigned int renderFlags, const base_vec4_t<unsigned int> *scriptablePackedColorEmissive, bool addGfxEntity, LocalClientNum_t localClientNum)
{
  __int64 v54; 
  signed int v55; 
  signed int frustumPlaneCount; 
  bool v58; 
  int v77; 
  signed int v78; 
  signed int v79; 
  bool v81; 
  int v100; 
  signed int v101; 
  bool v102; 
  signed int v103; 
  bool v105; 
  int v124; 
  signed int v125; 
  bool v126; 
  signed int v127; 
  unsigned __int8 v128; 
  bool v130; 
  int v149; 
  unsigned __int8 v150; 
  bool v151; 
  bool v152; 
  unsigned int UsableLodForDist; 
  unsigned int v175; 
  unsigned int v176; 
  unsigned __int32 v177; 
  bool result; 
  unsigned int v193; 
  __int64 v194; 
  __int16 entnumNone; 
  unsigned int IntegerMaterialLod; 
  char v207; 
  double v210; 
  __int64 v211; 
  double v212; 
  __int64 v213; 
  double v214; 
  double v215; 
  double v216; 
  __int16 v217; 
  __int16 v218; 
  Bounds rotatedBounds; 
  Bounds bounds; 
  MaterialLodSettings materialLodSettings; 
  tmat33_t<vec3_t> axis; 
  char v228; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RBX = placement;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2655, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm8, dword ptr [rbx+1Ch]
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2656, ASSERT_TYPE_ASSERT, "(placement->scale > 0)", (const char *)&queryFormat, "placement->scale > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rbx+8]
    vmovss  xmm9, dword ptr [rbx+0Ch]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, cs:__real@3f800000
    vandps  xmm1, xmm1, xmm7
    vcomiss xmm1, cs:__real@3b03126f
    vsqrtss xmm0, xmm2, xmm2
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+1B0h+var_168], xmm1
    vcvtss2sd xmm0, xmm4, xmm4
    vcvtss2sd xmm2, xmm9, xmm9
    vmovsd  [rsp+1B0h+var_170], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  [rsp+1B0h+var_178], xmm3
    vmovsd  [rsp+1B0h+var_180], xmm0
    vcvtss2sd xmm4, xmm5, xmm5
    vmovsd  [rsp+1B0h+var_188], xmm4
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2657, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( placement->base.quat ) )", "(%g, %g, %g, %g) len: %g", v210, v212, v214, v215, v216) )
    __debugbreak();
  if ( scene.allowAddDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2658, ASSERT_TYPE_ASSERT, "(!scene.allowAddDObj)", (const char *)&queryFormat, "!scene.allowAddDObj") )
    __debugbreak();
  if ( rg.needVelocity )
    renderFlags |= 0x200u;
  __asm { vmovaps [rsp+1B0h+var_80], xmm10 }
  XModelGetBounds(model, &bounds);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+1Ch]
    vmulss  xmm1, xmm3, dword ptr [rbp+0B0h+bounds.halfSize]
    vmulss  xmm0, xmm3, dword ptr [rbp+0B0h+bounds.halfSize+4]
    vmulss  xmm2, xmm3, dword ptr [rbp+0B0h+bounds.halfSize+8]
    vmovss  dword ptr [rbp+0B0h+bounds.halfSize], xmm1
    vmulss  xmm1, xmm3, dword ptr [rbp+0B0h+bounds.midPoint]
    vmovss  dword ptr [rbp+0B0h+bounds.halfSize+4], xmm0
    vmulss  xmm0, xmm3, dword ptr [rbp+0B0h+bounds.midPoint+4]
    vmovss  dword ptr [rbp+0B0h+bounds.halfSize+8], xmm2
    vmulss  xmm2, xmm3, dword ptr [rbp+0B0h+bounds.midPoint+8]
    vmovss  dword ptr [rbp+0B0h+bounds.midPoint], xmm1
    vmovss  dword ptr [rbp+0B0h+bounds.midPoint+4], xmm0
    vmovss  dword ptr [rbp+0B0h+bounds.midPoint+8], xmm2
  }
  QuatToAxis(&_RBX->base.quat, &axis);
  Bounds_Transform(&bounds, &_RBX->base.origin, &axis, &rotatedBounds);
  __asm
  {
    vmovss  xmm12, dword ptr [rbp+0B0h+rotatedBounds.halfSize+8]
    vmovss  xmm13, dword ptr [rbp+0B0h+rotatedBounds.halfSize+4]
    vmovss  xmm14, dword ptr [rsp+1B0h+rotatedBounds.halfSize]
    vmovss  xmm15, dword ptr [rsp+1B0h+rotatedBounds.midPoint+8]
    vmovss  xmm9, dword ptr [rsp+1B0h+rotatedBounds.midPoint+4]
    vmovss  xmm10, dword ptr [rsp+1B0h+rotatedBounds.midPoint]
  }
  v54 = localClientNum;
  v55 = 0;
  frustumPlaneCount = dpvsGlob.views[v54][0].frustumPlaneCount;
  _RAX = dpvsGlob.views[v54][0].frustumPlanes;
  v58 = frustumPlaneCount == 0;
  if ( frustumPlaneCount <= 0 )
  {
LABEL_16:
    v77 = 0;
  }
  else
  {
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax]
        vmovss  xmm5, dword ptr [rax+4]
        vmovss  xmm6, dword ptr [rax+8]
        vandps  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm14
        vmulss  xmm0, xmm10, xmm1
        vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm9, xmm5
        vmulss  xmm1, xmm15, xmm6
        vaddss  xmm4, xmm3, xmm2
        vandps  xmm5, xmm5, xmm7
        vmulss  xmm0, xmm5, xmm13
        vaddss  xmm2, xmm4, xmm0
        vandps  xmm6, xmm6, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm12
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm8
      }
      if ( v58 )
        break;
      ++v55;
      ++_RAX;
      v58 = v55 <= (unsigned int)frustumPlaneCount;
      if ( v55 >= frustumPlaneCount )
        goto LABEL_16;
    }
    v77 = 1;
  }
  v78 = dpvsGlob.views[v54][1].frustumPlaneCount;
  v79 = 0;
  LOBYTE(v217) = (v77 != 0) + 1;
  LOBYTE(v218) = v217;
  _RAX = dpvsGlob.views[v54][1].frustumPlanes;
  v81 = v78 == 0;
  if ( v78 <= 0 )
  {
LABEL_20:
    v100 = 0;
  }
  else
  {
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax]
        vmovss  xmm5, dword ptr [rax+4]
        vmovss  xmm6, dword ptr [rax+8]
        vandps  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm14
        vmulss  xmm0, xmm10, xmm1
        vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm9, xmm5
        vmulss  xmm1, xmm15, xmm6
        vaddss  xmm4, xmm3, xmm2
        vandps  xmm5, xmm5, xmm7
        vmulss  xmm0, xmm5, xmm13
        vaddss  xmm2, xmm4, xmm0
        vandps  xmm6, xmm6, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm12
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm8
      }
      if ( v81 )
        break;
      ++v79;
      ++_RAX;
      v81 = v79 <= (unsigned int)v78;
      if ( v79 >= v78 )
        goto LABEL_20;
    }
    v100 = 1;
  }
  v101 = dpvsGlob.views[v54][2].frustumPlaneCount;
  v102 = v100 == 0;
  v103 = 0;
  if ( !v102 )
    ++v77;
  _RAX = dpvsGlob.views[v54][2].frustumPlanes;
  HIBYTE(v217) = !v102 + 1;
  HIBYTE(v218) = HIBYTE(v217);
  v105 = v101 == 0;
  if ( v101 <= 0 )
  {
LABEL_26:
    v124 = 0;
  }
  else
  {
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax]
        vmovss  xmm5, dword ptr [rax+4]
        vmovss  xmm6, dword ptr [rax+8]
        vandps  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm14
        vmulss  xmm0, xmm10, xmm1
        vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm9, xmm5
        vmulss  xmm1, xmm15, xmm6
        vaddss  xmm4, xmm3, xmm2
        vandps  xmm5, xmm5, xmm7
        vmulss  xmm0, xmm5, xmm13
        vaddss  xmm2, xmm4, xmm0
        vandps  xmm6, xmm6, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm12
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm8
      }
      if ( v105 )
        break;
      ++v103;
      ++_RAX;
      v105 = v103 <= (unsigned int)v101;
      if ( v103 >= v101 )
        goto LABEL_26;
    }
    v124 = 1;
  }
  v125 = dpvsGlob.views[v54][3].frustumPlaneCount;
  v126 = v124 == 0;
  v127 = 0;
  if ( !v126 )
    ++v77;
  v128 = !v126 + 1;
  _RAX = dpvsGlob.views[v54][3].frustumPlanes;
  v130 = v125 == 0;
  if ( v125 <= 0 )
  {
LABEL_32:
    v149 = 0;
  }
  else
  {
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax]
        vmovss  xmm5, dword ptr [rax+4]
        vmovss  xmm6, dword ptr [rax+8]
        vandps  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm14
        vmulss  xmm0, xmm10, xmm1
        vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm9, xmm5
        vmulss  xmm1, xmm15, xmm6
        vaddss  xmm4, xmm3, xmm2
        vandps  xmm5, xmm5, xmm7
        vmulss  xmm0, xmm5, xmm13
        vaddss  xmm2, xmm4, xmm0
        vandps  xmm6, xmm6, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm12
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm8
      }
      if ( v130 )
        break;
      ++v127;
      ++_RAX;
      v130 = v127 <= (unsigned int)v125;
      if ( v127 >= v125 )
        goto LABEL_32;
    }
    v149 = 1;
  }
  v150 = (v149 != 0) + 1;
  if ( v149 )
    ++v77;
  if ( v77 == 4 || !r_drawXModels->current.enabled )
    goto LABEL_59;
  v151 = !rg.lodParms.valid;
  __asm { vmovaps [rsp+1B0h+var_90], xmm11 }
  if ( !rg.lodParms.valid )
  {
    v152 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2696, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid");
    v151 = !v152;
    if ( v152 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
    vsubss  xmm3, xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4; r_globals_t rg
    vsubss  xmm2, xmm1, dword ptr [rbx+14h]
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8; r_globals_t rg
    vsubss  xmm4, xmm0, dword ptr [rbx+18h]
    vmovss  xmm6, dword ptr [rbx+1Ch]
    vucomiss xmm6, xmm8
    vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.lodParms.ramp.scale; r_globals_t rg
    vmovss  xmm9, cs:?rg@@3Ur_globals_t@@A.lodParms.ramp.bias; r_globals_t rg
    vmovss  xmm10, cs:?rg@@3Ur_globals_t@@A.lodParms.cappedLodScale; r_globals_t rg
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm11, xmm2, xmm2
  }
  if ( v151 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 652, ASSERT_TYPE_SANITY, "( val != 0.0f )", (const char *)&queryFormat, "val != 0.0f") )
    __debugbreak();
  __asm
  {
    vdivss  xmm6, xmm11, xmm6
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm1, xmm0, xmm9; dist
    vmulss  xmm2, xmm6, xmm10; cullDist
  }
  UsableLodForDist = XModelGetUsableLodForDist(model, *(const float *)&_XMM1, *(const float *)&_XMM2);
  __asm { vmovaps xmm11, [rsp+1B0h+var_90] }
  v175 = UsableLodForDist;
  if ( UsableLodForDist == 6 )
    goto LABEL_59;
  if ( UsableLodForDist >= model->numLods )
  {
    LODWORD(v213) = model->numLods;
    LODWORD(v211) = UsableLodForDist;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2726, ASSERT_TYPE_ASSERT, "(unsigned)( lod ) < (unsigned)( model->numLods )", "lod doesn't index model->numLods\n\t%i not in [0, %i)", v211, v213) )
      __debugbreak();
  }
  v176 = renderFlags & 3;
  if ( (renderFlags & 3) != 0 || addGfxEntity != (_BYTE)v176 )
  {
    if ( ((unsigned __int8)&scene.gfxEntCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &scene.gfxEntCount) )
      __debugbreak();
    v177 = _InterlockedExchangeAdd(&scene.gfxEntCount, 1u);
    if ( v177 >= 0x400 )
    {
      scene.gfxEntCount = 1024;
      R_WarnOncePerFrame(R_WARN_KNOWN_SPECIAL_MODELS, 1024i64);
LABEL_59:
      result = 0;
      goto LABEL_60;
    }
    __asm
    {
      vmovss  xmm12, dword ptr [rbp+0B0h+rotatedBounds.halfSize+8]
      vmovss  xmm13, dword ptr [rbp+0B0h+rotatedBounds.halfSize+4]
      vmovss  xmm14, dword ptr [rsp+1B0h+rotatedBounds.halfSize]
      vmovss  xmm15, dword ptr [rsp+1B0h+rotatedBounds.midPoint+8]
    }
    _R8 = 0x140000000ui64;
    _RCX = v177;
    _RAX = scriptablePackedColorEmissive;
    scene.gfxEnts[_RCX].materialTime = 0.0;
    scene.gfxEnts[_RCX].renderFlags = v176;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    v217 = v218;
    __asm { vmovups xmmword ptr rva ?scene@@3UGfxScene@@A.gfxEnts.scriptablePackedColorEmissive[r8+rcx*4], xmm0; GfxScene scene }
    scene.gfxEnts[_RCX].eyeSensorPupilSize = 0.0;
  }
  else
  {
    v177 = 0;
  }
  v193 = R_AllocSceneModel();
  if ( v193 >= 0x400 )
    goto LABEL_59;
  v194 = v193;
  _RBX = &scene.sceneModel[v193];
  v102 = _RBX->obj == NULL;
  _RBX->model = model;
  if ( !v102 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2757, ASSERT_TYPE_SANITY, "( !sceneModel->obj )", (const char *)&queryFormat, "!sceneModel->obj") )
    __debugbreak();
  if ( gfxCfg.entnumNone >= 0x1000 )
  {
    LODWORD(v213) = 4096;
    LODWORD(v211) = gfxCfg.entnumNone;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2760, ASSERT_TYPE_ASSERT, "(unsigned)( gfxCfg.entnumNone ) < (unsigned)( (1 << 12) )", "gfxCfg.entnumNone doesn't index SCENE_ENTNUM_LIMIT\n\t%i not in [0, %i)", v211, v213) )
      __debugbreak();
  }
  if ( renderFlags >= 0x100000 )
  {
    LODWORD(v213) = 0x100000;
    LODWORD(v211) = renderFlags;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2761, ASSERT_TYPE_ASSERT, "(unsigned)( renderFlags ) < (unsigned)( (1 << 20) )", "renderFlags doesn't index RENDERFX_FLAGS_LIMIT\n\t%i not in [0, %i)", v211, v213) )
      __debugbreak();
  }
  *((_DWORD *)_RBX + 30) &= 0xFFC00000;
  *((_DWORD *)_RBX + 31) &= 0xFFF00000;
  *((_DWORD *)_RBX + 31) |= renderFlags & 0xFFFFF;
  entnumNone = gfxCfg.entnumNone;
  __asm { vmovss  xmm1, dword ptr [rsp+1B0h+rotatedBounds.midPoint] }
  _RBX->mapEntLookup = 0;
  _RAX = placement;
  *((_DWORD *)_RBX + 30) |= v177 & 0x3FF | ((entnumNone & 0xFFF) << 10);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+38h], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+58h], ymm0
    vmovss  xmm0, dword ptr [rsp+1B0h+rotatedBounds.midPoint+4]
    vmovss  dword ptr [rbx+24h], xmm0
    vmovss  dword ptr [rbx+20h], xmm1
    vmovss  dword ptr [rbx+28h], xmm15
    vmovss  dword ptr [rbx+2Ch], xmm14
    vmovss  dword ptr [rbx+30h], xmm13
    vmovss  dword ptr [rbx+34h], xmm12
  }
  R_SetMaterialLodSettings(&materialLodSettings);
  __asm
  {
    vmaxss  xmm0, xmm13, xmm14
    vmaxss  xmm0, xmm0, xmm12; radius
    vmovaps xmm1, xmm6; dist
  }
  *(double *)&_XMM0 = XModelGetMaterialLodForDist(*(float *)&_XMM0, *(float *)&_XMM1, &materialLodSettings);
  __asm { vmovss  dword ptr [rbx+8Ch], xmm0 }
  if ( v175 > 0x10 )
  {
    LODWORD(v213) = 16;
    LODWORD(v211) = v175;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2787, ASSERT_TYPE_ASSERT, "( lod ) <= ( (1 << 4) )", "lod not in [0, XMODELDRAWINFO_LOD_LIMIT]\n\t%u not in [0, %u]", v211, v213) )
      __debugbreak();
  }
  *(_DWORD *)&_RBX->info &= 0xFFFFFFE1;
  __asm { vmovss  xmm0, dword ptr [rbx+8Ch]; lod }
  *(_DWORD *)&_RBX->info |= 2 * (v175 & 0xF);
  IntegerMaterialLod = XModelGetIntegerMaterialLod(*(float *)&_XMM0);
  v207 = IntegerMaterialLod;
  if ( IntegerMaterialLod > 2 )
  {
    LODWORD(v213) = 2;
    LODWORD(v211) = IntegerMaterialLod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2791, ASSERT_TYPE_ASSERT, "( materialLod ) <= ( (1 << 1) )", "materialLod not in [0, XMODELDRAWINFO_MATERIAL_LOD_LIMIT]\n\t%u not in [0, %u]", v211, v213) )
      __debugbreak();
  }
  *(_DWORD *)&_RBX->info &= 0xFFFFFFDE;
  *(_DWORD *)&_RBX->info |= (v177 != 0) | (32 * (v207 & 1));
  _RBX->lightingOrigin.v[0] = _RBX->placement.base.origin.v[0];
  _RBX->lightingOrigin.v[1] = _RBX->placement.base.origin.v[1];
  _RBX->lightingOrigin.v[2] = _RBX->placement.base.origin.v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+88h]
    vaddss  xmm1, xmm0, cs:__real@40800000
    vmovss  dword ptr [rbx+88h], xmm1
  }
  _RBX->lastGpuLightGridRequest = NULL;
  scene.sceneModelVisData[0][v194] = v217;
  scene.sceneModelVisData[1][v194] = HIBYTE(v217);
  result = 1;
  scene.sceneModelVisData[2][v194] = v128;
  scene.sceneModelVisData[3][v194] = v150;
LABEL_60:
  __asm { vmovaps xmm10, [rsp+1B0h+var_80] }
  _R11 = &v228;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
R_FrustumClipPlanes
==============
*/
void R_FrustumClipPlanes(const GfxMatrix *viewProjMtx, const vec4_t *sidePlanes, int sidePlaneCount, DpvsPlane *frustumPlanes)
{
  float *v10; 
  __int64 v12; 
  unsigned int v14; 
  bool v17; 
  __int64 v44; 
  __int64 v45; 
  float *v46; 
  void *retaddr; 

  if ( sidePlaneCount > 0 )
  {
    _RAX = &retaddr;
    _R14 = (char *)sidePlanes - (char *)frustumPlanes;
    _RBP = &frustumPlanes->coeffs.v[1];
    v10 = &viewProjMtx->m.m[0].v[2];
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovaps xmmword ptr [rax-48h], xmm7
      vmovaps xmmword ptr [rax-58h], xmm8
      vmovss  xmm8, cs:__real@3f800000
    }
    v12 = sidePlaneCount;
    v46 = &viewProjMtx->m.m[0].v[2];
    __asm { vxorps  xmm7, xmm7, xmm7 }
    do
    {
      v14 = 0;
      _RSI = _RBP - 1;
      _RDI = v10;
      v17 = 1;
      do
      {
        if ( !v17 )
        {
          LODWORD(v45) = 4;
          LODWORD(v44) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r14+rbp-4]
          vmulss  xmm3, xmm0, dword ptr [rdi-8]
          vmovss  xmm1, dword ptr [rdi-4]
          vmulss  xmm2, xmm1, dword ptr [r14+rbp]
          vmovss  xmm0, dword ptr [r14+rbp+4]
          vmulss  xmm1, xmm0, dword ptr [rdi]
          vaddss  xmm4, xmm3, xmm2
          vmovss  xmm2, dword ptr [rdi+4]
          vmulss  xmm0, xmm2, dword ptr [r14+rbp+8]
          vaddss  xmm3, xmm4, xmm1
          vaddss  xmm6, xmm3, xmm0
        }
        if ( v14 >= 4 )
        {
          LODWORD(v45) = 4;
          LODWORD(v44) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsi], xmm6 }
        ++_RSI;
        ++v14;
        _RDI += 4;
        v17 = v14 < 4;
      }
      while ( (int)v14 < 4 );
      __asm
      {
        vmovss  xmm0, dword ptr [rbp-4]
        vmovss  xmm2, dword ptr [rbp+0]
        vmovss  xmm3, dword ptr [rbp+4]
      }
      v10 = v46;
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm6, xmm2, xmm2
        vcomiss xmm6, xmm7
      }
      if ( v14 <= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 385, ASSERT_TYPE_ASSERT, "(length > 0)", (const char *)&queryFormat, "length > 0") )
        __debugbreak();
      __asm
      {
        vdivss  xmm2, xmm8, xmm6
        vshufps xmm2, xmm2, xmm2, 0
        vmulps  xmm0, xmm2, xmmword ptr [rbp-4]
        vmovups xmmword ptr [rbp-4], xmm0
      }
      _RBP += 4;
      --v12;
    }
    while ( v12 );
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
  }
}

/*
==============
R_FrustumCullEntities
==============
*/
void R_FrustumCullEntities(unsigned int maxSceneViewType, int viewInfoIndex)
{
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int sceneDObjCount; 
  unsigned int v17; 
  GfxSceneEntityCull *p_cull; 
  unsigned int state; 
  const char *Name; 
  __int64 v23; 
  unsigned __int8 **entVisData; 
  __int64 v25; 
  DpvsPlane *frustumPlanes; 
  int v27; 
  int v28; 
  bool v30; 
  __int64 sceneDObjModelCount; 
  __int64 v57; 
  unsigned __int8 **v58; 
  __int64 v59; 
  char *v60; 
  int v61; 
  int v62; 
  bool v64; 
  const GfxBrushModel **p_bmodel; 
  __int64 sceneBrushCount; 
  unsigned __int16 v91; 
  unsigned __int8 **v93; 
  __int64 v94; 
  char *v95; 
  int v96; 
  int v97; 
  bool v99; 
  __int64 v135; 
  __int64 v136; 
  __int64 v137; 
  Bounds outBounds; 
  char v139; 
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
  }
  v13 = viewInfoIndex;
  v14 = maxSceneViewType;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2938, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v15 = 8052 * v13;
  v137 = v13;
  sceneDObjCount = scene.sceneDObjCount;
  v17 = 0;
  __asm
  {
    vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm14, xmm14, xmm14
  }
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
          LODWORD(v136) = state;
          LODWORD(v135) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2950, ASSERT_TYPE_ASSERT, "(state >= CULL_STATE_BOUNDED)", "%s\n\t%d %d '%s'", "state >= CULL_STATE_BOUNDED", v135, v136, Name) )
            __debugbreak();
        }
        v23 = (LODWORD(p_cull[32].skinnedSurfs.firstSurf) >> 10) & 0xFFF;
        if ( (_DWORD)v14 )
        {
          entVisData = scene.dpvs.entVisData;
          v25 = v14;
          frustumPlanes = dpvsGlob.views[v137][0].frustumPlanes;
          do
          {
            GfxSceneEntity_GetBounds(p_cull, &outBounds);
            v27 = LODWORD(frustumPlanes[14].coeffs.v[0]);
            v28 = 0;
            _RCX = frustumPlanes;
            v30 = v27 == 0;
            if ( v27 > 0 )
            {
              __asm
              {
                vmovss  xmm9, dword ptr [rsp+148h+outBounds.halfSize+8]
                vmovss  xmm10, dword ptr [rsp+148h+outBounds.halfSize+4]
                vmovss  xmm11, dword ptr [rsp+148h+outBounds.halfSize]
                vmovss  xmm12, dword ptr [rsp+148h+outBounds.midPoint+8]
                vmovss  xmm13, dword ptr [rsp+148h+outBounds.midPoint+4]
                vmovss  xmm15, dword ptr [rsp+148h+outBounds.midPoint]
              }
              while ( 1 )
              {
                __asm
                {
                  vmovss  xmm6, dword ptr [rcx+8]
                  vandps  xmm7, xmm6, xmm8
                  vmovss  xmm4, dword ptr [rcx+4]
                  vandps  xmm5, xmm4, xmm8
                  vmovss  xmm0, dword ptr [rcx]
                  vandps  xmm1, xmm0, xmm8
                  vmulss  xmm0, xmm15, xmm0
                  vaddss  xmm2, xmm0, dword ptr [rcx+0Ch]
                  vmulss  xmm1, xmm11, xmm1
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm13, xmm4
                  vaddss  xmm4, xmm3, xmm0
                  vmulss  xmm1, xmm10, xmm5
                  vaddss  xmm2, xmm4, xmm1
                  vmulss  xmm0, xmm12, xmm6
                  vaddss  xmm3, xmm2, xmm0
                  vmulss  xmm1, xmm9, xmm7
                  vaddss  xmm4, xmm3, xmm1
                  vcomiss xmm4, xmm14
                }
                if ( v30 )
                  break;
                ++v28;
                ++_RCX;
                v30 = v28 <= (unsigned int)v27;
                if ( v28 >= v27 )
                  goto LABEL_18;
              }
              (*entVisData)[v23] = 2;
            }
LABEL_18:
            frustumPlanes = (DpvsPlane *)((char *)frustumPlanes + 244);
            ++entVisData;
            --v25;
          }
          while ( v25 );
        }
        memset(&outBounds, 0, sizeof(outBounds));
      }
      ++v17;
      p_cull = (GfxSceneEntityCull *)((char *)p_cull + 1424);
    }
    while ( v17 < sceneDObjCount );
    v15 = v137 * 8052;
  }
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 2964, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  if ( scene.sceneDObjModelCount )
  {
    _RDX = &scene.sceneModel[0].bounds;
    sceneDObjModelCount = (unsigned int)scene.sceneDObjModelCount;
    do
    {
      v57 = (LODWORD(_RDX[3].halfSize.v[1]) >> 10) & 0xFFF;
      if ( (_DWORD)v14 )
      {
        v58 = scene.dpvs.entVisData;
        v59 = v14;
        v60 = (char *)dpvsGlob.views[0][0].frustumPlanes + v15;
        do
        {
          v61 = *((_DWORD *)v60 + 56);
          v62 = 0;
          _RAX = v60;
          v64 = v61 == 0;
          if ( v61 > 0 )
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rdx+0Ch]
              vmovss  xmm9, dword ptr [rdx]
              vmovss  xmm10, dword ptr [rdx+4]
              vmovss  xmm11, dword ptr [rdx+10h]
              vmovss  xmm12, dword ptr [rdx+8]
              vmovss  xmm13, dword ptr [rdx+14h]
            }
            while ( 1 )
            {
              __asm
              {
                vmovss  xmm5, dword ptr [rax+4]
                vmovss  xmm1, dword ptr [rax]
                vmovss  xmm6, dword ptr [rax+8]
                vandps  xmm0, xmm1, xmm8
                vmulss  xmm2, xmm0, xmm7
                vmulss  xmm0, xmm9, xmm1
                vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm2, xmm10, xmm5
                vaddss  xmm4, xmm3, xmm2
                vandps  xmm5, xmm5, xmm8
                vmulss  xmm0, xmm5, xmm11
                vaddss  xmm2, xmm4, xmm0
                vmulss  xmm1, xmm12, xmm6
                vaddss  xmm3, xmm2, xmm1
                vandps  xmm6, xmm6, xmm8
                vmulss  xmm0, xmm6, xmm13
                vaddss  xmm1, xmm3, xmm0
                vcomiss xmm1, xmm14
              }
              if ( v64 )
                break;
              ++v62;
              _RAX += 16;
              v64 = v62 <= (unsigned int)v61;
              if ( v62 >= v61 )
                goto LABEL_35;
            }
            (*v58)[v57] = 2;
          }
LABEL_35:
          v60 += 244;
          ++v58;
          --v59;
        }
        while ( v59 );
      }
      _RDX = (Bounds *)((char *)_RDX + 152);
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
      v91 = *((_WORD *)p_bmodel - 4);
      _RDI = *p_bmodel;
      if ( (_DWORD)v14 )
      {
        v93 = scene.dpvs.entVisData;
        v94 = v14;
        v95 = (char *)dpvsGlob.views[0][0].frustumPlanes + v15;
        do
        {
          v96 = *((_DWORD *)v95 + 56);
          v97 = 0;
          _RAX = v95;
          v99 = v96 == 0;
          if ( v96 > 0 )
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rdi+0Ch]
              vmovss  xmm9, dword ptr [rdi]
              vmovss  xmm10, dword ptr [rdi+4]
              vmovss  xmm11, dword ptr [rdi+10h]
              vmovss  xmm12, dword ptr [rdi+8]
              vmovss  xmm13, dword ptr [rdi+14h]
            }
            while ( 1 )
            {
              __asm
              {
                vmovss  xmm5, dword ptr [rax+4]
                vmovss  xmm1, dword ptr [rax]
                vmovss  xmm6, dword ptr [rax+8]
                vandps  xmm0, xmm1, xmm8
                vmulss  xmm2, xmm0, xmm7
                vmulss  xmm0, xmm9, xmm1
                vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm2, xmm10, xmm5
                vaddss  xmm4, xmm3, xmm2
                vandps  xmm5, xmm5, xmm8
                vmulss  xmm0, xmm5, xmm11
                vaddss  xmm2, xmm4, xmm0
                vmulss  xmm1, xmm12, xmm6
                vaddss  xmm3, xmm2, xmm1
                vandps  xmm6, xmm6, xmm8
                vmulss  xmm0, xmm6, xmm13
                vaddss  xmm1, xmm3, xmm0
                vcomiss xmm1, xmm14
              }
              if ( v99 )
                break;
              ++v97;
              _RAX += 16;
              v99 = v97 <= (unsigned int)v96;
              if ( v97 >= v96 )
                goto LABEL_47;
            }
            (*v93)[v91] = 2;
          }
LABEL_47:
          v95 += 244;
          ++v93;
          --v94;
        }
        while ( v94 );
      }
      p_bmodel += 11;
      --sceneBrushCount;
    }
    while ( sceneBrushCount );
  }
  _R11 = &v139;
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
R_GenerateShadowMapCasterCells
==============
*/
void R_GenerateShadowMapCasterCells()
{
  unsigned int cellCount; 
  unsigned int v3; 
  unsigned int v4; 
  bool v8; 
  bool v9; 
  unsigned int v24; 
  __int64 v27; 
  __int64 v28; 

  cellCount = rgp.world->dpvsPlanes.cellCount;
  v3 = (cellCount + 31) >> 5;
  memset_0(rgp.world->cellCasterBits, 0, 4i64 * v3 * cellCount);
  v4 = 1;
  if ( rgp.world->lastSunPrimaryLightIndex )
  {
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+88h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 49, ASSERT_TYPE_ASSERT, "(comWorld.isInUse)", (const char *)&queryFormat, "comWorld.isInUse") )
        __debugbreak();
      if ( v4 >= comWorld.primaryLightCount )
      {
        LODWORD(v28) = comWorld.primaryLightCount;
        LODWORD(v27) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 50, ASSERT_TYPE_ASSERT, "(unsigned)( primaryLightIndex ) < (unsigned)( comWorld.primaryLightCount )", "primaryLightIndex doesn't index comWorld.primaryLightCount\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      _RBX = &comWorld.primaryLights[v4];
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3834, ASSERT_TYPE_ASSERT, "(primaryLight)", (const char *)&queryFormat, "primaryLight") )
        __debugbreak();
      v8 = _RBX->type == 1;
      if ( _RBX->type != 1 )
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3835, ASSERT_TYPE_ASSERT, "(primaryLight->type == 1)", (const char *)&queryFormat, "primaryLight->type == GFX_LIGHT_TYPE_DIR");
        v8 = !v9;
        if ( v9 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vmovss  xmm2, dword ptr [rbx+30h]
        vmovss  xmm3, dword ptr [rbx+34h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vucomiss xmm3, xmm7
      }
      if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3836, ASSERT_TYPE_ASSERT, "(Vec3LengthSq( primaryLight->dir ))", (const char *)&queryFormat, "Vec3LengthSq( primaryLight->dir )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vxorps  xmm1, xmm0, xmm6
        vmovss  dword ptr cs:dpvsGlob.viewOrg, xmm1
        vmovss  xmm2, dword ptr [rbx+30h]
        vxorps  xmm0, xmm2, xmm6
        vmovss  dword ptr cs:dpvsGlob.viewOrg+4, xmm0
        vmovss  xmm1, dword ptr [rbx+34h]
        vxorps  xmm2, xmm1, xmm6
      }
      v24 = 0;
      dpvsGlob.viewOrgIsDir = 1;
      __asm
      {
        vmovss  dword ptr cs:dpvsGlob.viewOrg+8, xmm2
        vmovss  dword ptr cs:dpvsGlob.viewOrg+0Ch, xmm7
      }
      dpvsGlob.farPlane = NULL;
      dpvsGlob.nearPlane = NULL;
      if ( rgp.world->dpvsPlanes.cellCount )
      {
        do
        {
          dpvsGlob.cellBits = &rgp.world->cellCasterBits[v3 * v24];
          R_ConnectCells(v24++);
        }
        while ( v24 < rgp.world->dpvsPlanes.cellCount );
      }
      ++v4;
    }
    while ( v4 <= rgp.world->lastSunPrimaryLightIndex );
    __asm
    {
      vmovaps xmm7, [rsp+88h+var_48]
      vmovaps xmm6, [rsp+88h+var_38]
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
  __asm { vmovss  xmm0, cs:dpvsGlob.cullDist }
  return *(float *)&_XMM0;
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

float __fastcall R_GetFarPlaneDist(double _XMM0_8)
{
  _RAX = r_zfar;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, dword ptr [rax+28h]
    vcmpneqss xmm1, xmm2, xmm0
    vmovss  xmm0, cs:dpvsGlob.cullDist
    vblendvps xmm0, xmm0, xmm2, xmm1
  }
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
  char *v9; 
  char *v20; 
  char *v31; 
  char *v42; 
  char *v53; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 

  __asm
  {
    vmovss  xmm3, dword ptr cs:dpvsGlob.viewOrg+8
    vmovss  xmm2, dword ptr cs:dpvsGlob.viewOrg+4
    vmovss  xmm1, dword ptr cs:dpvsGlob.viewOrg
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovq   rdx, xmm1
  }
  v9 = j_va("\torg %.8gf, %.8gf, %.8gf\n", _RDX, _R8, _R9);
  __asm
  {
    vmovss  xmm0, dword ptr cs:dpvsGlob.viewPlane.coeffs+0Ch
    vmovss  xmm3, dword ptr cs:dpvsGlob.viewPlane.coeffs+4
    vmovss  xmm2, dword ptr cs:dpvsGlob.viewPlane.coeffs
    vmovss  xmm1, dword ptr cs:dpvsGlob.viewPlane.coeffs+8
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+38h+var_10], xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm1
  }
  v20 = j_va("%s\tplane %.8gf, %.8gf, %.8gf, %.8gf\n", v9, _R8, _R9, v65, v70);
  __asm
  {
    vmovss  xmm0, dword ptr cs:dpvsGlob.viewProjMtx.m+0Ch
    vmovss  xmm3, dword ptr cs:dpvsGlob.viewProjMtx.m+4
    vmovss  xmm2, dword ptr cs:dpvsGlob.viewProjMtx.m
    vmovss  xmm1, dword ptr cs:dpvsGlob.viewProjMtx.m+8
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+38h+var_10], xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm1
  }
  v31 = j_va("%s\t%.8gf, %.8gf, %.8gf, %.8gf\n", v20, _R8, _R9, v66, v71);
  __asm
  {
    vmovss  xmm0, dword ptr cs:dpvsGlob.viewProjMtx.m+1Ch
    vmovss  xmm3, dword ptr cs:dpvsGlob.viewProjMtx.m+14h
    vmovss  xmm2, dword ptr cs:dpvsGlob.viewProjMtx.m+10h
    vmovss  xmm1, dword ptr cs:dpvsGlob.viewProjMtx.m+18h
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+38h+var_10], xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm1
  }
  v42 = j_va("%s\t%.8gf, %.8gf, %.8gf, %.8gf\n", v31, _R8, _R9, v67, v72);
  __asm
  {
    vmovss  xmm0, dword ptr cs:dpvsGlob.viewProjMtx.m+2Ch
    vmovss  xmm3, dword ptr cs:dpvsGlob.viewProjMtx.m+24h
    vmovss  xmm2, dword ptr cs:dpvsGlob.viewProjMtx.m+20h
    vmovss  xmm1, dword ptr cs:dpvsGlob.viewProjMtx.m+28h
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+38h+var_10], xmm0
    vmovq   r9, xmm3
    vmovq   r8, xmm2
    vmovsd  [rsp+38h+var_18], xmm1
  }
  v53 = j_va("%s\t%.8gf, %.8gf, %.8gf, %.8gf\n", v42, _R8, _R9, v68, v73);
  __asm
  {
    vmovss  xmm0, dword ptr cs:dpvsGlob.viewProjMtx.m+3Ch
    vmovss  xmm1, dword ptr cs:dpvsGlob.viewProjMtx.m+38h
    vmovss  xmm3, dword ptr cs:dpvsGlob.viewProjMtx.m+34h
    vmovss  xmm2, dword ptr cs:dpvsGlob.viewProjMtx.m+30h
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+38h+var_10], xmm0
    vmovsd  [rsp+38h+var_18], xmm1
    vcvtss2sd xmm3, xmm3, xmm3
    vcvtss2sd xmm2, xmm2, xmm2
    vmovq   r9, xmm3
    vmovq   r8, xmm2
  }
  return j_va("%s\t%.8gf, %.8gf, %.8gf, %.8gf\n", v53, _R8, _R9, v69, v74);
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

void __fastcall R_SetCullDist(double dist, double _XMM1_8)
{
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm0, xmm0, xmm1
    vmovss  cs:dpvsGlob.cullDist, xmm0
  }
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
  GfxWorld *world; 
  unsigned __int16 *nodes; 
  int v13; 
  unsigned int i; 
  __int64 v16; 
  unsigned int v23; 
  unsigned int v24; 
  bool v25; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = viewParms;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 3871, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr [rbx+100h] }
  world = rgp.world;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr cs:dpvsGlob.viewOrg, xmm6
    vmovss  xmm7, dword ptr [rbx+104h]
    vmovss  dword ptr cs:dpvsGlob.viewOrg+4, xmm7
    vmovss  xmm8, dword ptr [rbx+108h]
  }
  dpvsGlob.viewOrgIsDir = 0;
  __asm
  {
    vmovss  dword ptr cs:dpvsGlob.viewOrg+8, xmm8
    vmovss  dword ptr cs:dpvsGlob.viewOrg+0Ch, xmm0
  }
  if ( !rgp.world )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 689, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
      __debugbreak();
    world = rgp.world;
    __asm
    {
      vmovss  xmm6, dword ptr cs:dpvsGlob.viewOrg
      vmovss  xmm7, dword ptr cs:dpvsGlob.viewOrg+4
      vmovss  xmm8, dword ptr cs:dpvsGlob.viewOrg+8
    }
  }
  nodes = world->dpvsPlanes.nodes;
  v13 = world->dpvsPlanes.cellCount + 1;
  __asm { vxorps  xmm4, xmm4, xmm4 }
  for ( i = *nodes; (int)(i - v13) >= 0; nodes += v16 + 2 )
  {
    v16 = 0i64;
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [r9+rcx*4+4]
      vmulss  xmm0, xmm6, dword ptr [r9+rcx*4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [r9+rcx*4+8]
      vaddss  xmm0, xmm2, xmm1
      vsubss  xmm3, xmm0, dword ptr [r9+rcx*4+0Ch]
    }
    v23 = nodes[1];
    v25 = v23 <= 2;
    v24 = v23 - 2;
    __asm { vcomiss xmm3, xmm4 }
    if ( v25 )
      v16 = v24;
    i = nodes[v16 + 2];
  }
  dpvsGlob.viewOrgCell = i - 1;
  v25 = i <= 1;
  if ( !i || (v25 = i <= world->dpvsPlanes.cellCount, (signed int)i > (signed int)world->dpvsPlanes.cellCount) )
    dpvsGlob.viewOrgCell = 0;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+10Ch]
    vmovss  dword ptr cs:dpvsGlob.viewPlane.coeffs, xmm2
    vmovss  xmm0, dword ptr [rbx+110h]
    vmovss  dword ptr cs:dpvsGlob.viewPlane.coeffs+4, xmm0
    vmovss  xmm3, dword ptr [rbx+114h]
    vmulss  xmm1, xmm7, xmm0
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, cs:__real@3dcccccd
    vmulss  xmm1, xmm8, xmm3
    vmovss  dword ptr cs:dpvsGlob.viewPlane.coeffs+8, xmm3
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm2, xmm0, xmm3
    vmovss  xmm0, cs:dpvsGlob.cullDist
  }
  dpvsGlob.nearPlane = &dpvsGlob.viewPlane;
  _RAX = r_zfar;
  __asm
  {
    vmovss  dword ptr cs:dpvsGlob.viewPlane.coeffs+0Ch, xmm2
    vmovss  xmm2, dword ptr [rax+28h]
    vcmpneqss xmm1, xmm2, xmm4
    vblendvps xmm9, xmm0, xmm2, xmm1
    vcomiss xmm9, xmm4
  }
  if ( v25 )
  {
    dpvsGlob.farPlane = NULL;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10Ch]
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm5, xmm0, xmm2
      vmovss  dword ptr cs:dpvsGlob.fogPlane.coeffs, xmm5
      vmovss  xmm0, dword ptr [rbx+110h]
      vxorps  xmm3, xmm0, xmm2
      vmovss  dword ptr cs:dpvsGlob.fogPlane.coeffs+4, xmm3
      vmovss  xmm1, dword ptr [rbx+114h]
      vxorps  xmm4, xmm1, xmm2
      vmulss  xmm2, xmm5, xmm6
      vmulss  xmm0, xmm7, xmm3
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm8, xmm4
      vaddss  xmm2, xmm3, xmm1
      vsubss  xmm0, xmm9, xmm2
      vmovss  dword ptr cs:dpvsGlob.fogPlane.coeffs+0Ch, xmm0
      vmovss  dword ptr cs:dpvsGlob.fogPlane.coeffs+8, xmm4
    }
    dpvsGlob.farPlane = &dpvsGlob.fogPlane;
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
  }
}

/*
==============
R_SetupSunShadowSurfacesDpvs
==============
*/
void R_SetupSunShadowSurfacesDpvs(const GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow)
{
  __int64 v5; 
  unsigned int v6; 
  DpvsPlane *cameraPlanes; 
  GfxSunShadow *p_sunShadow; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  DpvsView *v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  DpvsPlane *frustumSidePlanes; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4851, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4852, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  _R15 = sunShadow->partition[0].frustumSidePlanes;
  v5 = 1i64;
  frustumSidePlanes = sunShadow->partition[0].frustumSidePlanes;
  v6 = 0;
  v24 = 1i64;
  cameraPlanes = sunShadow->cameraPlanes;
  do
  {
    _RDI = &dpvsGlob.views[viewInfo->viewInfoIndex][v5];
    _RDI->sceneEntRenderFlagsMask = 40;
    _RDI->sceneEntRenderFlags = 40;
    _RDI->dynEntRenderFlagsMask = 8;
    _RDI->dynEntRenderFlags = 8;
    _RDI->frustumPlaneCount = 0;
    memcpy_0(_RDI->frustumPlanes, cameraPlanes, 16i64 * sunShadow->cameraPlaneCount);
    _RDI->frustumPlaneCount += sunShadow->cameraPlaneCount;
    __asm { vmovups ymm0, ymmword ptr [r15] }
    _RAX = 2 * (_RDI->frustumPlaneCount + 1i64);
    __asm
    {
      vmovups ymmword ptr [rdi+rax*8], ymm0
      vmovups ymm1, ymmword ptr [r15+20h]
      vmovups ymmword ptr [rdi+rax*8+20h], ymm1
    }
    _RDI->frustumPlaneCount += 4;
    if ( sunShadow->firstCachedSunShadowPartition <= v6 && v6 <= sunShadow->lastCachedSunShadowPartition )
    {
      p_sunShadow = &frontEndDataOut->sunShadow;
      if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(p_sunShadow, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v13 = (__int64)&p_sunShadow->partitionCache[v6 - p_sunShadow->firstCachedSunShadowPartition];
      v14 = 0;
      if ( !*(_DWORD *)(v13 + 4) )
        goto LABEL_27;
      do
      {
        v15 = v14++;
        v16 = 864 * v15;
        _RCX = &dpvsGlob.views[viewInfo->viewInfoIndex][*(int *)(864 * v15 + v13 + 32)];
        _RCX->sceneEntRenderFlagsMask = _RDI->sceneEntRenderFlagsMask;
        _RCX->sceneEntRenderFlags = _RDI->sceneEntRenderFlags;
        _RCX->dynEntRenderFlagsMask = _RDI->dynEntRenderFlagsMask;
        LODWORD(v15) = _RDI->dynEntRenderFlags;
        _RCX->frustumPlaneCount = 0;
        _RCX->dynEntRenderFlags = v15;
        _RAX = *(_QWORD *)(v16 + v13 + 16);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax+30h]
          vmovups ymmword ptr [rcx+10h], ymm0
          vmovups ymm1, ymmword ptr [rax+50h]
          vmovups ymmword ptr [rcx+30h], ymm1
        }
        _RCX->frustumPlaneCount = 4;
      }
      while ( v14 < *(_DWORD *)(v13 + 4) );
      cameraPlanes = sunShadow->cameraPlanes;
      if ( v14 < 0xA )
      {
LABEL_27:
        do
        {
          v21 = dpvsGlob.views[viewInfo->viewInfoIndex];
          if ( !R_IsCachedSunShadowPartition(sunShadow, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 369, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
            __debugbreak();
          v22 = v14 + 10 * (v6 - sunShadow->firstCachedSunShadowPartition) + 12;
          ++v14;
          v23 = v22;
          *(_QWORD *)&v21[v23].sceneEntRenderFlagsMask = 0i64;
          *(_QWORD *)&v21[v23].dynEntRenderFlagsMask = 0i64;
          v21[v23].frustumPlaneCount = 0;
        }
        while ( v14 < 0xA );
        _R15 = frustumSidePlanes;
        cameraPlanes = sunShadow->cameraPlanes;
        v5 = v24;
      }
    }
    ++v5;
    _R15 += 34;
    v24 = v5;
    ++v6;
    frustumSidePlanes = _R15;
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
  __int64 v6; 
  unsigned int v24; 
  bool v26; 
  bool v51; 
  int v57; 
  const dvar_t *v59; 
  __int64 v64; 
  __int64 v65; 
  __int64 v67; 
  DpvsView *v69; 
  vec4_t vec; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v6 = viewInfoIndex;
  _R13 = viewParms;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4678, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4679, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4680, ASSERT_TYPE_ASSERT, "(viewParms)", (const char *)&queryFormat, "viewParms") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm8, cs:__real@3f800000
  }
  _RDX = &_R13->viewProjectionMatrix;
  __asm { vmovss  dword ptr [rsp+0F8h+vec+0Ch], xmm8 }
  v69 = dpvsGlob.views[v6];
  v69->sceneEntRenderFlags = 0x8000;
  v69->sceneEntRenderFlagsMask = 0x8000;
  *(_QWORD *)&v69->dynEntRenderFlagsMask = 0i64;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr cs:dpvsGlob.viewProjMtx.m, ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr cs:dpvsGlob.viewProjMtx.m+20h, ymm1
    vmovss  xmm0, dword ptr [r13+100h]
    vmovss  xmm1, dword ptr [r13+104h]
    vxorps  xmm0, xmm0, xmm3
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+0F8h+vec], xmm0
    vmovss  xmm0, dword ptr [r13+108h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsp+0F8h+vec+8], xmm1
    vmovss  dword ptr [rsp+0F8h+vec+4], xmm2
  }
  MatrixTransformVector44Aligned(&vec, &_R13->viewProjectionMatrix.m, &dpvsGlob.viewProjMtx.m.m[3]);
  __asm { vmovups ymm0, ymmword ptr [r13+0C0h] }
  v67 = 4i64;
  __asm
  {
    vmovups ymmword ptr cs:dpvsGlob.invViewProjMtx.m, ymm0
    vmovups ymm1, ymmword ptr [r13+0E0h]
    vmovups ymmword ptr cs:dpvsGlob.invViewProjMtx.m+20h, ymm1
  }
  _RSI = &v69->frustumPlanes[0].coeffs.v[1];
  _R12 = (char *)((char *)standardFrustumSidePlanes - (char *)v69->frustumPlanes);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  do
  {
    v24 = 0;
    _RBP = _RSI - 1;
    v26 = 1;
    _RDI = &dpvsGlob.viewProjMtx.m.m[0].v[2];
    do
    {
      if ( !v26 )
      {
        LODWORD(v65) = 4;
        LODWORD(v64) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 370, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v64, v65) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+r12-4]
        vmulss  xmm3, xmm0, dword ptr [rdi-8]
        vmovss  xmm1, dword ptr [rdi-4]
        vmulss  xmm2, xmm1, dword ptr [r14+rsi-4]
        vmovss  xmm0, dword ptr [rdi]
        vmulss  xmm1, xmm0, dword ptr [r14+rsi]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm2, dword ptr [rdi+4]
        vmulss  xmm0, xmm2, dword ptr [r14+rsi+4]
        vaddss  xmm3, xmm4, xmm1
        vaddss  xmm6, xmm3, xmm0
      }
      if ( v24 >= 4 )
      {
        LODWORD(v65) = 4;
        LODWORD(v64) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v64, v65) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rbp+0], xmm6 }
      ++_RBP;
      ++v24;
      _RDI += 4;
      v26 = v24 < 4;
    }
    while ( (int)v24 < 4 );
    __asm
    {
      vmovss  xmm0, dword ptr [rsi-4]
      vmovss  xmm2, dword ptr [rsi]
      vmovss  xmm3, dword ptr [rsi+4]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
      vcomiss xmm6, xmm7
    }
    if ( v24 <= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 385, ASSERT_TYPE_ASSERT, "(length > 0)", (const char *)&queryFormat, "length > 0") )
      __debugbreak();
    __asm
    {
      vdivss  xmm2, xmm8, xmm6
      vshufps xmm2, xmm2, xmm2, 0
      vmulps  xmm0, xmm2, xmmword ptr [rsi-4]
      vmovups xmmword ptr [rsi-4], xmm0
    }
    _RSI += 4;
    v51 = v67-- == 1;
  }
  while ( v67 );
  _R13 = viewParms;
  __asm { vucomiss xmm7, dword ptr [r13+7Ch] }
  if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4700, ASSERT_TYPE_ASSERT, "(viewParms->projectionMatrix.m[3][3] == 0)", (const char *)&queryFormat, "viewParms->projectionMatrix.m[3][3] == 0") )
    __debugbreak();
  R_SetupDpvsForPoint(viewParms);
  dpvsGlob.viewOrgViewInfoIndex = viewInfoIndex;
  dpvsGlob.sideFrustumPlanes = v69->frustumPlanes;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 255, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !dpvsGlob.nearPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 257, ASSERT_TYPE_ASSERT, "(dpvsGlob.nearPlane)", (const char *)&queryFormat, "dpvsGlob.nearPlane") )
    __debugbreak();
  _RAX = dpvsGlob.nearPlane;
  _RDX = v69;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rdx+50h], xmm0
  }
  _RCX = dpvsGlob.farPlane;
  v57 = 5;
  if ( dpvsGlob.farPlane )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rdx+60h], xmm0
    }
    v57 = 6;
  }
  v59 = DCONST_DVARBOOL_r_draw_frustum;
  v69->frustumPlaneCount = v57;
  if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_draw_frustum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  if ( v59->current.enabled )
    R_AddDebugFrustum(&frontEndDataOut->debugGlobals, viewParms);
  _R11 = &v71;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  const vec4_t *v66; 
  unsigned int volumetricVisDataCount; 
  unsigned int *volumetricVisData; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  __int64 v104; 
  __int64 v105; 
  bool v106; 
  bool v107; 
  unsigned int v108; 
  Bounds bounds; 
  __int128 v110; 
  __int128 v111; 
  __int128 v112; 
  __int128 v113; 
  __int128 v114; 
  __int128 v115; 
  Bounds outBounds; 

  unsignedInt = r_showCull->current.unsignedInt;
  v108 = unsignedInt;
  if ( unsignedInt < 0x21 )
  {
    LODWORD(v1) = 0;
    if ( r_showCullXModels->current.enabled )
    {
      if ( unsignedInt < 0xC )
      {
        v2 = unsignedInt;
        *(_QWORD *)&v110 = r_showCull->current.unsignedInt;
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
              v2 = v110;
              unsignedInt = v110;
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
          unsignedInt = v108;
        }
      }
      v14 = rgp.world->dpvsDyn.dynEntVisData[0][unsignedInt];
      if ( v14 && scene.sceneDynModelCount )
      {
        v15 = 0i64;
        sceneDynModelCount = (unsigned int)scene.sceneDynModelCount;
        v106 = r_showCullMode->current.integer != 0;
        do
        {
          dynEntClientId = rgp.world->sceneDynModel[v15].dynEntClientId;
          if ( !g_dynEntPoseLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
            __debugbreak();
          if ( dynEntClientId >= g_dynEntClientEntsAllocCount[0][0] )
          {
            LODWORD(v105) = g_dynEntClientEntsAllocCount[0][0];
            LODWORD(v104) = dynEntClientId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v104, v105) )
              __debugbreak();
          }
          v18 = dynEntClientId;
          v19 = &g_dynEntPoseLists[0][0][dynEntClientId];
          if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dpvs.cpp", 4279, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
            __debugbreak();
          if ( dynEntClientId >= g_dynEntClientEntsAllocCount[0][0] )
          {
            LODWORD(v105) = g_dynEntClientEntsAllocCount[0][0];
            LODWORD(v104) = dynEntClientId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v104, v105) )
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
            R_AddDebugBox(&frontEndDataOut->debugGlobals, &v19->bounds, v21, v106);
          }
          ++v15;
          --sceneDynModelCount;
        }
        while ( sceneDynModelCount );
        LODWORD(v1) = 0;
        unsignedInt = v108;
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
          unsignedInt = v108;
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
            LODWORD(v105) = g_dynEntClientEntsAllocCount[0][1];
            LODWORD(v104) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v104, v105) )
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
    if ( r_showCullVolumetrics->current.enabled && !v108 )
    {
      v107 = r_showCullMode->current.integer != 0;
      if ( scene.sceneVolumetricCount )
      {
        sceneVolumetricVisData = scene.sceneVolumetricVisData;
        _RDI = &scene.sceneVolumetrics[0].volumetric.obb.xAxis.v[2];
        sceneVolumetricCount = scene.sceneVolumetricCount;
        do
        {
          __asm { vmovss  xmm0, dword ptr [rdi-8] }
          HIDWORD(v110) = 0;
          __asm
          {
            vmovups xmm5, [rbp+57h+var_A0]
            vmovss  xmm5, xmm5, xmm0
            vinsertps xmm5, xmm5, dword ptr [rdi-4], 10h
            vinsertps xmm5, xmm5, dword ptr [rdi], 20h ; ' '
            vmovups [rbp+57h+var_A0], xmm5
            vmovss  xmm0, dword ptr [rdi+4]
          }
          HIDWORD(v111) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rbp-39h]
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, dword ptr [rdi+8], 10h
            vinsertps xmm3, xmm3, dword ptr [rdi+0Ch], 20h ; ' '
            vmovups xmmword ptr [rbp-39h], xmm3
            vmovss  xmm0, dword ptr [rdi+10h]
          }
          HIDWORD(v112) = 0;
          __asm
          {
            vmovups xmm4, xmmword ptr [rbp-29h]
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [rdi+14h], 10h
            vinsertps xmm4, xmm4, dword ptr [rdi+18h], 20h ; ' '
            vmovups xmmword ptr [rbp-29h], xmm4
            vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
            vandnps xmm1, xmm0, xmm5
            vandnps xmm3, xmm0, xmm3
            vandnps xmm4, xmm0, xmm4
            vbroadcastss xmm0, dword ptr [rdi+1Ch]
            vmulps  xmm2, xmm0, xmm1
            vbroadcastss xmm1, dword ptr [rdi+20h]
            vmulps  xmm0, xmm1, xmm3
            vaddps  xmm3, xmm0, xmm2
            vbroadcastss xmm1, dword ptr [rdi+24h]
            vmulps  xmm0, xmm1, xmm4
            vaddps  xmm2, xmm0, xmm3
            vmovss  dword ptr [rbp+57h+bounds.halfSize], xmm2
            vextractps dword ptr [rbp+57h+bounds.halfSize+4], xmm2, 1
            vextractps dword ptr [rbp+57h+bounds.halfSize+8], xmm2, 2
            vmovss  xmm0, dword ptr [rdi-14h]
            vmovss  dword ptr [rbp+57h+bounds.midPoint], xmm0
            vmovss  xmm1, dword ptr [rdi-10h]
            vmovss  dword ptr [rbp+57h+bounds.midPoint+4], xmm1
            vmovss  xmm0, dword ptr [rdi-0Ch]
            vmovss  dword ptr [rbp+57h+bounds.midPoint+8], xmm0
          }
          v66 = &colorRed;
          if ( *sceneVolumetricVisData == 1 )
            v66 = &colorGreen;
          R_AddDebugBox(&frontEndDataOut->debugGlobals, &bounds, v66, v107);
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
        v69 = *volumetricVisData;
      else
        v69 = 0;
      while ( 1 )
      {
        v70 = v69;
        if ( !v69 )
          break;
LABEL_88:
        v71 = __lzcnt(v70);
        if ( v71 >= 0x20 )
        {
          LODWORD(v105) = 32;
          LODWORD(v104) = v71;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v104, v105) )
            __debugbreak();
        }
        if ( ((0x80000000 >> v71) & v70) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
          __debugbreak();
        v69 = v70 & ~(0x80000000 >> v71);
        _RDX = 264i64 * (v71 + 32 * (_DWORD)v1);
        _RCX = rgp.world->draw.volumetrics.volumetrics;
        __asm { vmovss  xmm0, dword ptr [rdx+rcx+18h] }
        HIDWORD(v113) = 0;
        __asm
        {
          vmovups xmm5, xmmword ptr [rbp-19h]
          vmovss  xmm5, xmm5, xmm0
          vinsertps xmm5, xmm5, dword ptr [rdx+rcx+1Ch], 10h
          vinsertps xmm5, xmm5, dword ptr [rdx+rcx+20h], 20h ; ' '
          vmovups xmmword ptr [rbp-19h], xmm5
          vmovss  xmm0, dword ptr [rdx+rcx+24h]
        }
        HIDWORD(v114) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rbp-9]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rdx+rcx+28h], 10h
          vinsertps xmm3, xmm3, dword ptr [rdx+rcx+2Ch], 20h ; ' '
          vmovups xmmword ptr [rbp-9], xmm3
          vmovss  xmm0, dword ptr [rdx+rcx+30h]
        }
        HIDWORD(v115) = 0;
        __asm
        {
          vmovups xmm4, xmmword ptr [rbp+7]
          vmovss  xmm4, xmm4, xmm0
          vinsertps xmm4, xmm4, dword ptr [rdx+rcx+34h], 10h
          vinsertps xmm4, xmm4, dword ptr [rdx+rcx+38h], 20h ; ' '
          vmovups xmmword ptr [rbp+7], xmm4
          vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
          vandnps xmm1, xmm0, xmm5
          vandnps xmm3, xmm0, xmm3
          vandnps xmm4, xmm0, xmm4
          vbroadcastss xmm0, dword ptr [rdx+rcx+3Ch]
          vmulps  xmm2, xmm0, xmm1
          vbroadcastss xmm1, dword ptr [rdx+rcx+40h]
          vmulps  xmm0, xmm1, xmm3
          vaddps  xmm3, xmm0, xmm2
          vbroadcastss xmm1, dword ptr [rdx+rcx+44h]
          vmulps  xmm0, xmm1, xmm4
          vaddps  xmm2, xmm0, xmm3
          vmovss  dword ptr [rbp+57h+bounds.halfSize], xmm2
          vextractps dword ptr [rbp+57h+bounds.halfSize+4], xmm2, 1
          vextractps dword ptr [rbp+57h+bounds.halfSize+8], xmm2, 2
          vmovss  xmm0, dword ptr [rdx+rcx+0Ch]
          vmovss  dword ptr [rbp+57h+bounds.midPoint], xmm0
          vmovss  xmm1, dword ptr [rdx+rcx+10h]
          vmovss  dword ptr [rbp+57h+bounds.midPoint+4], xmm1
          vmovss  xmm0, dword ptr [rdx+rcx+14h]
          vmovss  dword ptr [rbp+57h+bounds.midPoint+8], xmm0
        }
        R_AddDebugBox(&frontEndDataOut->debugGlobals, &bounds, &colorBlue, v107);
      }
      while ( 1 )
      {
        v1 = (unsigned int)(v1 + 1);
        if ( (unsigned int)v1 >= volumetricVisDataCount )
          break;
        v70 = volumetricVisData[v1];
        if ( v70 )
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

