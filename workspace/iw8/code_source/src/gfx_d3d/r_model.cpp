/*
==============
R_SceneSurfBufListOpenCSV
==============
*/

fileHandle_t *__fastcall R_SceneSurfBufListOpenCSV(fileHandle_t *result, const char *const fileName, const char *const columnNames)
{
  return ?R_SceneSurfBufListOpenCSV@@YA?AUfileHandle_t@@QEBD0@Z(result, fileName, columnNames);
}

/*
==============
R_DObjReplaceMaterial
==============
*/

void __fastcall R_DObjReplaceMaterial(DObj *obj, int lod, int surfaceIndex, Material *material)
{
  ?R_DObjReplaceMaterial@@YAXPEAUDObj@@HHPEAUMaterial@@@Z(obj, lod, surfaceIndex, material);
}

/*
==============
R_SceneSurfBufListAddLineToCSV
==============
*/

void __fastcall R_SceneSurfBufListAddLineToCSV(const fileHandle_t *file, const char *const line)
{
  ?R_SceneSurfBufListAddLineToCSV@@YAXPEBUfileHandle_t@@QEBD@Z(file, line);
}

/*
==============
R_SurfaceHasSubdivision
==============
*/

int __fastcall R_SurfaceHasSubdivision(const XSurface *xsurf)
{
  return ?R_SurfaceHasSubdivision@@YAHPEIBUXSurface@@@Z(xsurf);
}

/*
==============
R_SceneSurfBufList_f
==============
*/

void R_SceneSurfBufList_f(void)
{
  ?R_SceneSurfBufList_f@@YAXXZ();
}

/*
==============
R_SetMaterialLodSettings
==============
*/

void __fastcall R_SetMaterialLodSettings(MaterialLodSettings *materialLodSettings)
{
  ?R_SetMaterialLodSettings@@YAXPEAUMaterialLodSettings@@@Z(materialLodSettings);
}

/*
==============
R_SkinXModel
==============
*/

int __fastcall R_SkinXModel(XModelDrawInfo *modelInfo, const XModel *model, const DObj *obj, const GfxPlacement *placement, float scale, const GfxPlacement *placementPrevFrame, float scalePrevFrame, const GfxPlacement *part0Placement, const GfxPlacement *extraPartPlacements, unsigned int numPartPlacements, bool isMotionblurModel, unsigned int gfxEntIndex, unsigned __int16 gfxPackedEntityIndexBase, unsigned int mapEntLookup, float materialLod)
{
  return ?R_SkinXModel@@YAHPEIAUXModelDrawInfo@@PEIBUXModel@@PEIBUDObj@@PEIBUGfxPlacement@@M3M33I_NIGIM@Z(modelInfo, model, obj, placement, scale, placementPrevFrame, scalePrevFrame, part0Placement, extraPartPlacements, numPartPlacements, isMotionblurModel, gfxEntIndex, gfxPackedEntityIndexBase, mapEntLookup, materialLod);
}

/*
==============
R_RegisterInlineModel
==============
*/

GfxBrushModel *__fastcall R_RegisterInlineModel(int modelIndex)
{
  return ?R_RegisterInlineModel@@YAPEAUGfxBrushModel@@H@Z(modelIndex);
}

/*
==============
R_DObjGetSurfMaterials
==============
*/

void __fastcall R_DObjGetSurfMaterials(DObj *obj, int lod, Material **matHandleArray)
{
  ?R_DObjGetSurfMaterials@@YAXPEAUDObj@@HPEAPEAUMaterial@@@Z(obj, lod, matHandleArray);
}

/*
==============
R_SkinAndBoundSceneEnt
==============
*/

void __fastcall R_SkinAndBoundSceneEnt(GfxSceneEntity *sceneEnt, GfxViewDomain viewDomain)
{
  ?R_SkinAndBoundSceneEnt@@YAXPEAUGfxSceneEntity@@W4GfxViewDomain@@@Z(sceneEnt, viewDomain);
}

/*
==============
R_ModelLodHasSubdivision
==============
*/

int __fastcall R_ModelLodHasSubdivision(const XModel *model, unsigned int lodIndex)
{
  return ?R_ModelLodHasSubdivision@@YAHPEIBUXModel@@I@Z(model, lodIndex);
}

/*
==============
R_XModelDebug
==============
*/

void __fastcall R_XModelDebug(const DObj *obj, DObjPartBits *partBits)
{
  ?R_XModelDebug@@YAXPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
R_SceneSurfBufListCloseCSV
==============
*/

void __fastcall R_SceneSurfBufListCloseCSV(fileHandle_t *file, const char *const fileName)
{
  ?R_SceneSurfBufListCloseCSV@@YAXPEAUfileHandle_t@@QEBD@Z(file, fileName);
}

/*
==============
XSurfaceReleaseResources
==============
*/

void __fastcall XSurfaceReleaseResources(XSurface *surf)
{
  ?XSurfaceReleaseResources@@YAXPEAUXSurface@@@Z(surf);
}

/*
==============
XModelReleaseResources
==============
*/

void __fastcall XModelReleaseResources(XModel *model)
{
  ?XModelReleaseResources@@YAXPEAUXModel@@@Z(model);
}

/*
==============
R_RegisterCompositeModel
==============
*/

XCompositeModelDef *__fastcall R_RegisterCompositeModel(const char *name)
{
  return ?R_RegisterCompositeModel@@YAPEAUXCompositeModelDef@@PEBD@Z(name);
}

/*
==============
R_RegisterModel
==============
*/

XModel *__fastcall R_RegisterModel(const char *name)
{
  return ?R_RegisterModel@@YAPEAUXModel@@PEBD@Z(name);
}

/*
==============
R_SetIgnorePrecacheErrors
==============
*/

void __fastcall R_SetIgnorePrecacheErrors(int ignore)
{
  ?R_SetIgnorePrecacheErrors@@YAXH@Z(ignore);
}

/*
==============
R_DObjGetSurfMaterials
==============
*/
void R_DObjGetSurfMaterials(DObj *obj, int lod, Material **matHandleArray)
{
  unsigned int v6; 
  __int64 v7; 
  const XModel *Model; 
  unsigned __int16 numsurfs; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 v11; 
  const XModelLodInfo *v12; 
  unsigned __int16 surfIndex; 
  Material **v14; 
  __int64 v15; 
  Material *v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int NumModels; 

  if ( (!obj || !matHandleArray) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1107, ASSERT_TYPE_ASSERT, "(obj && matHandleArray)", (const char *)&queryFormat, "obj && matHandleArray") )
    __debugbreak();
  if ( lod < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1108, ASSERT_TYPE_ASSERT, "(lod >= 0)", (const char *)&queryFormat, "lod >= 0") )
    __debugbreak();
  NumModels = DObjGetNumModels(obj);
  v6 = 0;
  if ( NumModels )
  {
    v7 = 0i64;
    do
    {
      Model = DObjGetModel(obj, v6);
      if ( !Model )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1116, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 247, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
      }
      numsurfs = XModelGetLodInfo(Model, lod)->numsurfs;
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 257, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      LodInfo = XModelGetLodInfo(Model, lod);
      v11 = Model->numsurfs;
      v12 = LodInfo;
      surfIndex = LodInfo->surfIndex;
      if ( surfIndex >= v11 )
      {
        LODWORD(v18) = v11;
        LODWORD(v17) = surfIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v14 = &Model->materialHandles[v12->surfIndex];
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1120, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
        __debugbreak();
      if ( numsurfs )
      {
        v15 = numsurfs;
        do
        {
          v16 = *v14++;
          matHandleArray[v7++] = v16;
          --v15;
        }
        while ( v15 );
      }
      ++v6;
    }
    while ( v6 < NumModels );
  }
}

/*
==============
R_DObjReplaceMaterial
==============
*/
void R_DObjReplaceMaterial(DObj *obj, int lod, int surfaceIndex, Material *material)
{
  int v7; 
  int v8; 
  const XModel *Model; 
  unsigned int numsurfs; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 v12; 
  const XModelLodInfo *v13; 
  unsigned __int16 surfIndex; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int NumModels; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1138, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( lod < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1139, ASSERT_TYPE_ASSERT, "(lod >= 0)", (const char *)&queryFormat, "lod >= 0") )
    __debugbreak();
  v7 = 0;
  NumModels = DObjGetNumModels(obj);
  v8 = 0;
  if ( NumModels )
  {
    while ( 1 )
    {
      Model = DObjGetModel(obj, v8);
      if ( !Model )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1147, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 247, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
      }
      numsurfs = XModelGetLodInfo(Model, lod)->numsurfs;
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 257, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      LodInfo = XModelGetLodInfo(Model, lod);
      v12 = Model->numsurfs;
      v13 = LodInfo;
      surfIndex = LodInfo->surfIndex;
      if ( surfIndex >= v12 )
      {
        LODWORD(v18) = v12;
        LODWORD(v17) = surfIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      v15 = (__int64)&Model->materialHandles[v13->surfIndex];
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1151, ASSERT_TYPE_ASSERT, "(originalMaterial)", (const char *)&queryFormat, "originalMaterial") )
        __debugbreak();
      v16 = 0;
      if ( numsurfs )
        break;
LABEL_25:
      if ( ++v8 >= NumModels )
        return;
    }
    while ( surfaceIndex != v7 )
    {
      ++v16;
      ++v7;
      if ( v16 >= numsurfs )
        goto LABEL_25;
    }
    *(_QWORD *)(v15 + 8i64 * v16) = material;
  }
}

/*
==============
R_ModelLodHasSubdivision
==============
*/
__int64 R_ModelLodHasSubdivision(const XModel *model, unsigned int lodIndex)
{
  const XModelLodInfo *LodInfo; 
  __int64 v6; 
  int numLods; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1232, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( lodIndex >= model->numLods )
  {
    numLods = model->numLods;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1233, ASSERT_TYPE_ASSERT, "((unsigned)( lodIndex ) < (unsigned)( model->numLods ))", "%s\n\t%d doesn't index %d \n\t%i not in [0, %i) for model '%s'", "(unsigned)( lodIndex ) < (unsigned)( model->numLods )", lodIndex, numLods, lodIndex, numLods, model->name) )
      __debugbreak();
  }
  if ( !r_subdiv->current.enabled )
    return 0i64;
  LodInfo = XModelGetLodInfo(model, lodIndex);
  if ( !LodInfo )
  {
    LODWORD(v6) = lodIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1241, ASSERT_TYPE_ASSERT, "(lodInfo)", "%s\n\tNull lod info (%d) for model '%s'", "lodInfo", v6, model->name) )
      __debugbreak();
  }
  return LodInfo->flags & 1;
}

/*
==============
R_RegisterCompositeModel
==============
*/
XCompositeModelDef *R_RegisterCompositeModel(const char *name)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) || CL_TransientsMP_CanUseAsset(name, ASSET_TYPE_XCOMPOSITEMODEL) )
    return XCompositeModelPrecache(name, NULL, NULL);
  else
    return 0i64;
}

/*
==============
R_RegisterInlineModel
==============
*/
GfxBrushModel *R_RegisterInlineModel(int modelIndex)
{
  __int64 v1; 

  v1 = modelIndex;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 434, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( (int)v1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 435, ASSERT_TYPE_ASSERT, "(modelIndex >= 0)", (const char *)&queryFormat, "modelIndex >= 0") )
    __debugbreak();
  if ( (int)v1 >= rgp.world->modelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 436, ASSERT_TYPE_ASSERT, "(modelIndex < rgp.world->modelCount)", (const char *)&queryFormat, "modelIndex < rgp.world->modelCount") )
    __debugbreak();
  return &rgp.world->models[v1];
}

/*
==============
R_RegisterModel
==============
*/
XModel *R_RegisterModel(const char *name)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_AIM|0x80) || CL_TransientsMP_IsXModelNameLoaded(name) )
    return XModelPrecache(name, NULL, NULL);
  else
    return 0i64;
}

/*
==============
R_SceneSurfBufListAddLineToCSV
==============
*/
void R_SceneSurfBufListAddLineToCSV(const fileHandle_t *file, const char *const line)
{
  unsigned __int64 v4; 

  if ( !line && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  if ( file->handle.handle != -1 )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( line[v4] );
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
      __debugbreak();
    FS_Write(line, v4, (fileHandle_t)file->handle.handle);
  }
}

/*
==============
R_SceneSurfBufListCloseCSV
==============
*/
void R_SceneSurfBufListCloseCSV(fileHandle_t *file, const char *const fileName)
{
  if ( file->handle.handle != -1 )
  {
    FS_FCloseFile((fileHandle_t)file->handle.handle);
    Com_Printf(15, "Done writing file: \"%s\"\n\n", fileName);
  }
}

/*
==============
R_SceneSurfBufListOpenCSV
==============
*/
__int64 R_SceneSurfBufListOpenCSV(fileHandle_t *result, const char *const fileName, const char *const columnNames)
{
  const char *v5; 
  fileHandle_t *v6; 
  unsigned __int64 v8; 

  Com_Printf(15, "\nOpening file \"%s\" for writing.\n", (const char *)result);
  v6 = FS_FOpenTextFileWrite(result, v5);
  if ( v6 == (fileHandle_t *)-1i64 )
  {
    Com_PrintError(15, "Couldn't open file \"%s\" for writing.\nPlease close \"%s\" and try again.\n\n", (const char *)result, (const char *)result);
    return -1i64;
  }
  else
  {
    Com_Printf_NoFilter("\n");
    if ( !fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 345, ASSERT_TYPE_ASSERT, "(columnNames)", (const char *)&queryFormat, "columnNames") )
      __debugbreak();
    v8 = -1i64;
    do
      ++v8;
    while ( fileName[v8] );
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 347, ASSERT_TYPE_ASSERT, "(lineLength)", (const char *)&queryFormat, "lineLength") )
      __debugbreak();
    FS_Write(fileName, v8, (fileHandle_t)v6);
    return (__int64)v6;
  }
}

/*
==============
R_SceneSurfBufList_f
==============
*/
void R_SceneSurfBufList_f()
{
  __int128 v0; 
  __int64 v1; 
  const char *v2; 
  fileHandle_t *v3; 
  int sceneDObjCount; 
  __int64 v5; 
  unsigned __int8 v6; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  unsigned __int8 v10; 
  const cpose_t *pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v16; 
  char *v26; 
  unsigned __int64 v27; 
  unsigned __int8 v28; 
  const DObj *obj; 
  char *v30; 
  unsigned __int64 v31; 
  char *v32; 
  unsigned __int64 v33; 
  char *v34; 
  unsigned __int64 v35; 
  volatile int v36; 
  unsigned __int8 *v37; 
  const XModel **p_model; 
  unsigned __int8 v39; 
  int v40; 
  unsigned __int8 v41; 
  unsigned __int8 v42; 
  __int64 v43; 
  __m128 v44; 
  unsigned int v45; 
  const char **v46; 
  char *v47; 
  unsigned __int64 v48; 
  char *v49; 
  unsigned __int64 v50; 
  __int64 v51; 
  unsigned __int16 v52; 
  DynEntityClient *v53; 
  DynEntityPose *v54; 
  const char **p_name; 
  unsigned __int8 v56; 
  unsigned __int8 *v57; 
  unsigned __int8 v58; 
  __int64 v59; 
  unsigned __int8 *v60; 
  unsigned __int8 *v61; 
  unsigned __int8 *v62; 
  unsigned int v63; 
  float v64; 
  __int64 v65; 
  char *v66; 
  unsigned __int64 v67; 
  bool v68; 
  char *v69; 
  unsigned __int64 v70; 
  unsigned int *p_surfBufSize; 
  unsigned __int8 *v72; 
  __int64 v73; 
  unsigned __int8 v74; 
  __int64 v75; 
  int v76; 
  __int64 v77; 
  unsigned int v78; 
  char *v79; 
  unsigned __int64 v80; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  unsigned __int8 v91; 
  unsigned int v92; 
  int v93; 
  __int64 v94; 
  __int64 v95; 
  GfxSceneDynModel *sceneDynModel; 
  fileHandle_t h; 
  __int64 sceneDynModelCount; 
  volatile int v99; 
  __int64 v100; 
  float v101; 
  unsigned __int8 v102; 
  __int128 v103; 

  v99 = 0;
  v1 = 0i64;
  v92 = 0;
  Com_Printf_NoFilter("\n====================START SCENE SURF DUMP====================\n");
  Com_Printf(15, "\nOpening file \"%s\" for writing.\n", (const char *)&stru_14441D2C8);
  v3 = FS_FOpenTextFileWrite((fileHandle_t *)&stru_14441D2C8, v2);
  if ( v3 == (fileHandle_t *)-1i64 )
  {
    Com_PrintError(15, "Couldn't open file \"%s\" for writing.\nPlease close \"%s\" and try again.\n\n", (const char *)&stru_14441D2C8, (const char *)&stru_14441D2C8);
  }
  else
  {
    Com_Printf_NoFilter("\n");
    FS_Write("Scene surf size (bytes), Entity, DynEntID, Light linked, In main scene, In sun shadow, In spot shadow, In heightfield, Position XYZ, XModels\n", 0x8Dui64, (fileHandle_t)v3);
  }
  h.handle.handle = (__int64)v3;
  Com_Printf_NoFilter("-------------------------------------------------------------\n");
  Com_Printf_NoFilter("Scene surf size (bytes), Entity, DynEntID, Light linked, In main scene, In sun shadow, In spot shadow, In heightfield, Position XYZ, XModels\n");
  Com_Printf_NoFilter("-------------------------------------------------------------\n");
  sceneDObjCount = scene.sceneDObjCount;
  v5 = 0i64;
  v93 = 0;
  if ( scene.sceneDObjCount > 0 )
  {
    v103 = v0;
    v95 = 0i64;
    do
    {
      v6 = scene.sceneDObjVisData[4][v1];
      v7 = scene.sceneDObjVisData[0][v1] & 1;
      v8 = (scene.sceneDObjVisData[3][v1] & 1) + (scene.sceneDObjVisData[2][v1] & 1) + (scene.sceneDObjVisData[1][v1] & 1);
      v102 = v7;
      v9 = v1;
      v10 = (scene.sceneDObjVisData[11][v1] & 1) + (scene.sceneDObjVisData[10][v1] & 1) + (scene.sceneDObjVisData[9][v1] & 1) + (scene.sceneDObjVisData[8][v1] & 1) + (scene.sceneDObjVisData[7][v1] & 1) + (scene.sceneDObjVisData[6][v1] & 1) + (scene.sceneDObjVisData[5][v1] & 1) + (v6 & 1);
      if ( scene.sceneDObj[v1].surfBufSize )
      {
        pose = scene.sceneDObj[v9].info.pose;
        if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
        FunctionPointer_origin(&pose->origin.origin.origin, (vec3_t *)&v100);
        if ( pose->isPosePrecise )
        {
          _XMM0 = (unsigned int)v100;
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v16;
          _XMM0 = HIDWORD(v100);
          __asm
          {
            vcvtdq2pd xmm0, xmm0
            vcvtsd2ss xmm2, xmm1, xmm1
          }
          *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v16;
          _XMM0 = LODWORD(v101);
          __asm
          {
            vcvtsd2ss xmm3, xmm1, xmm1
            vcvtdq2pd xmm0, xmm0
          }
          *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v16;
          __asm { vcvtsd2ss xmm4, xmm1, xmm1 }
          v101 = *(float *)&_XMM4;
          *(float *)&v100 = *(float *)&_XMM2;
          *((float *)&v100 + 1) = *(float *)&_XMM3;
        }
        else
        {
          *(float *)&_XMM4 = v101;
          LODWORD(_XMM3) = HIDWORD(v100);
          LODWORD(_XMM2) = v100;
        }
        LODWORD(v86) = v10;
        LODWORD(fmt) = v8;
        Com_Printf_NoFilter("%d, %d, -, -, %d, %d, %d, -, (%.0f %.0f %.0f)", scene.sceneDObj[v9].surfBufSize, (*((_DWORD *)&scene.sceneDObj[v9] + 346) >> 10) & 0xFFF, v7, fmt, v86, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&_XMM4);
        LODWORD(v87) = v10;
        LODWORD(fmta) = v8;
        v26 = j_va("%d,%d,-,-,%d,%d,%d,-,(%.0f %.0f %.0f)", scene.sceneDObj[v9].surfBufSize, (*((_DWORD *)&scene.sceneDObj[v9] + 346) >> 10) & 0xFFF, v7, fmta, v87, *(float *)&v100, *((float *)&v100 + 1), v101);
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
          __debugbreak();
        if ( v3 != (fileHandle_t *)-1i64 )
        {
          v27 = -1i64;
          do
            ++v27;
          while ( v26[v27] );
          if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(v26, v27, (fileHandle_t)v3);
        }
        v28 = 0;
        obj = scene.sceneDObj[v9].obj;
        if ( obj->numModels )
        {
          do
          {
            v30 = j_va(",%s", obj->models[v28]->name);
            Com_Printf_NoFilter(", %s", scene.sceneDObj[v9].obj->models[v28]->name);
            if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
              __debugbreak();
            if ( v3 != (fileHandle_t *)-1i64 )
            {
              v31 = -1i64;
              do
                ++v31;
              while ( v30[v31] );
              if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
                __debugbreak();
              FS_Write(v30, v31, (fileHandle_t)v3);
            }
            obj = scene.sceneDObj[v9].obj;
            ++v28;
          }
          while ( v28 < obj->numModels );
          v1 = v95;
        }
        v32 = j_va("\n");
        Com_Printf_NoFilter("\n");
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
          __debugbreak();
        if ( v3 != (fileHandle_t *)-1i64 )
        {
          v33 = -1i64;
          do
            ++v33;
          while ( v32[v33] );
          if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(v32, v33, (fileHandle_t)v3);
        }
        sceneDObjCount = scene.sceneDObjCount;
        v92 += scene.sceneDObj[v9].surfBufSize;
        LODWORD(v5) = v93;
      }
      v5 = (unsigned int)(v5 + 1);
      ++v1;
      v93 = v5;
      v95 = v1;
    }
    while ( (int)v5 < sceneDObjCount );
    LODWORD(v1) = v92;
  }
  v34 = j_va("\n", v5, &queryFormat);
  Com_Printf_NoFilter("\n");
  if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  if ( v3 != (fileHandle_t *)-1i64 )
  {
    v35 = -1i64;
    do
      ++v35;
    while ( v34[v35] );
    if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
      __debugbreak();
    FS_Write(v34, v35, (fileHandle_t)v3);
  }
  v36 = 0;
  if ( scene.sceneModelCount > 0 )
  {
    v37 = scene.sceneModelVisData[2];
    p_model = &scene.sceneModel[0].model;
    do
    {
      v39 = (*v37 & 1) + (*(v37 - 1024) & 1) + (v37[1024] & 1);
      v40 = *((_DWORD *)p_model - 2) >> 6;
      v41 = *(v37 - 2048) & 1;
      v42 = (v37[2048] & 1) + (v37[3072] & 1) + (v37[4096] & 1) + (v37[5120] & 1) + (v37[6144] & 1) + (v37[7168] & 1) + (v37[0x2000] & 1) + (v37[9216] & 1);
      v102 = v41;
      v43 = v40 & 0xFFFFFF;
      if ( (_DWORD)v43 )
      {
        v44 = (__m128)(unsigned __int64)p_model[8];
        v45 = *((_DWORD *)p_model + 28);
        v101 = *((float *)p_model + 18);
        v46 = (const char **)*p_model;
        v100 = v44.m128_i64[0];
        LODWORD(v86) = v42;
        LODWORD(fmt) = v39;
        Com_Printf_NoFilter("%d, %d, -, -, %d, %d, %d, -, (%.0f %.0f %.0f), %s\n", v43, (v45 >> 10) & 0xFFF, v41, fmt, v86, v44.m128_f32[0], _mm_shuffle_ps(v44, v44, 85).m128_f32[0], v101, *v46);
        LODWORD(v88) = v42;
        LODWORD(fmtb) = v39;
        v47 = j_va("%d,%d,-,-,%d,%d,%d,-,(%.0f %.0f %.0f),%s\n", (*((_DWORD *)p_model - 2) >> 6) & 0xFFFFFF, (*((_DWORD *)p_model + 28) >> 10) & 0xFFF, v41, fmtb, v88, *(float *)&v100, *((float *)&v100 + 1), v101, (*p_model)->name);
        if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
          __debugbreak();
        if ( h.handle.handle != -1 )
        {
          v48 = -1i64;
          do
            ++v48;
          while ( v47[v48] );
          if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(v47, v48, h);
        }
        LODWORD(v1) = ((*((_DWORD *)p_model - 2) >> 6) & 0xFFFFFF) + v1;
      }
      ++v36;
      p_model += 19;
      ++v37;
    }
    while ( v36 < scene.sceneModelCount );
    v92 = v1;
  }
  v49 = j_va("\n");
  Com_Printf_NoFilter("\n");
  if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  if ( h.handle.handle != -1 )
  {
    v50 = -1i64;
    do
      ++v50;
    while ( v49[v50] );
    if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
      __debugbreak();
    FS_Write(v49, v50, h);
  }
  if ( scene.sceneDynModelCount )
  {
    sceneDynModelCount = (unsigned int)scene.sceneDynModelCount;
    v91 = v102;
    v51 = 0i64;
    v94 = 0i64;
    do
    {
      sceneDynModel = rgp.world->sceneDynModel;
      v52 = *(unsigned __int16 *)((char *)&sceneDynModel->dynEntClientId + v51);
      if ( v52 >= g_dynEntClientEntsAllocCount[0][0] )
      {
        LODWORD(v90) = g_dynEntClientEntsAllocCount[0][0];
        LODWORD(v86) = v52;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v86, v90) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v53 = &g_dynEntClientLists[0][0][v52];
      if ( !g_dynEntPoseLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
        __debugbreak();
      if ( v52 >= g_dynEntClientEntsAllocCount[0][0] )
      {
        LODWORD(v90) = g_dynEntClientEntsAllocCount[0][0];
        LODWORD(v86) = v52;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v86, v90) )
          __debugbreak();
      }
      v54 = &g_dynEntPoseLists[0][0][v52];
      if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 241, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 242, ASSERT_TYPE_ASSERT, "(dynEntityPose)", (const char *)&queryFormat, "dynEntityPose") )
        __debugbreak();
      p_name = &v53->activeModel->name;
      if ( v53->activeModel )
      {
        v56 = 0;
        v57 = rgp.world->dpvsDyn.dynEntVisData[0][0];
        if ( v57 )
        {
          v58 = v57[v52];
          v59 = v52;
          v91 = v58 & 1;
        }
        else
        {
          v59 = v52;
        }
        v60 = rgp.world->dpvsDyn.dynEntVisData[0][1];
        if ( v60 )
        {
          v59 = v52;
          v56 = v60[v52] & 1;
        }
        v61 = rgp.world->dpvsDyn.dynEntVisData[0][2];
        if ( v61 )
          v56 += v61[v59] & 1;
        v62 = rgp.world->dpvsDyn.dynEntVisData[0][3];
        if ( v62 )
          v56 += v62[v59] & 1;
        if ( (*(_DWORD *)((char *)&sceneDynModel->info + v94) & 0x3FFFFFC0) != 0 )
        {
          v63 = R_NumPrimaryShadowLightsLinkedToDynEntClient(LOCAL_CLIENT_0, v52, DYNENT_BASIS_MODEL);
          v100 = *(__int64 *)v54->pose.origin.v;
          v64 = v54->pose.origin.v[2];
          v65 = v94;
          v101 = v64;
          LODWORD(v86) = v56;
          LODWORD(fmt) = v91;
          Com_Printf_NoFilter("%d, -, %d, %d, -, %d, %d, -, (%.0f %.0f %.0f), %s\n", (*(_DWORD *)((char *)&sceneDynModel->info + v94) >> 6) & 0xFFFFFF, v53->dynEntDefId, v63, fmt, v86, *(float *)&v100, *((float *)&v100 + 1), v64, *p_name);
          LODWORD(v89) = v56;
          LODWORD(fmtc) = v91;
          v66 = j_va("%d,-,%d, %d,-,%d,%d,-,(%.0f %.0f %.0f),%s\n", (*(_DWORD *)((char *)&sceneDynModel->info + v94) >> 6) & 0xFFFFFF, v53->dynEntDefId, v63, fmtc, v89, *(float *)&v100, *((float *)&v100 + 1), v101, *p_name);
          if ( !v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
            __debugbreak();
          if ( h.handle.handle != -1 )
          {
            v67 = -1i64;
            do
              ++v67;
            while ( v66[v67] );
            if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
              __debugbreak();
            FS_Write(v66, v67, h);
          }
          v92 += (*(_DWORD *)((char *)&sceneDynModel->info + v94) >> 6) & 0xFFFFFF;
        }
        else
        {
          v65 = v94;
        }
      }
      else
      {
        v65 = v94;
      }
      v51 = v65 + 12;
      v68 = sceneDynModelCount-- == 1;
      v94 = v51;
    }
    while ( !v68 );
  }
  v69 = j_va("\n");
  Com_Printf_NoFilter("\n");
  if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  if ( h.handle.handle != -1 )
  {
    v70 = -1i64;
    do
      ++v70;
    while ( v69[v70] );
    if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
      __debugbreak();
    FS_Write(v69, v70, h);
  }
  if ( scene.sceneBrushCount > 0 )
  {
    p_surfBufSize = &scene.sceneBrush[0].info.surfBufSize;
    v72 = scene.sceneBrushVisData[2];
    do
    {
      v73 = *p_surfBufSize;
      v74 = *(v72 - 1024) & 1;
      if ( (_DWORD)v73 )
      {
        v75 = *(_QWORD *)(p_surfBufSize + 3);
        v76 = (unsigned __int8)((*v72 & 1) + (*(v72 - 512) & 1) + (v72[512] & 1));
        v77 = *((unsigned __int16 *)p_surfBufSize + 2);
        v78 = v74;
        v100 = *(__int64 *)(v75 + 56);
        v101 = *(float *)(v75 + 64);
        LODWORD(fmt) = v76;
        Com_Printf_NoFilter("%d, %d, -, -, %d, %d, -, -, (%.0f %.0f %.0f), -\n", v73, v77, v74, fmt, *(float *)&v100, *((float *)&v100 + 1), v101);
        LODWORD(fmtd) = v76;
        v79 = j_va("%d,%d,-,-,%d,%d,-,-,(%.0f %.0f %.0f),-\n", *p_surfBufSize, *((unsigned __int16 *)p_surfBufSize + 2), v78, fmtd, *(float *)&v100, *((float *)&v100 + 1), v101);
        if ( !v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
          __debugbreak();
        if ( h.handle.handle != -1 )
        {
          v80 = -1i64;
          do
            ++v80;
          while ( v79[v80] );
          if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(v79, v80, h);
        }
        v92 += *p_surfBufSize;
      }
      p_surfBufSize += 22;
      ++v72;
      ++v99;
    }
    while ( v99 < scene.sceneBrushCount );
  }
  if ( h.handle.handle != -1 )
  {
    FS_FCloseFile(h);
    Com_Printf(15, "Done writing file: \"%s\"\n\n", (const char *)&stru_14441D2C8);
  }
  Com_Printf_NoFilter("====================SCENE SURF SUMMARY====================\n");
  Com_Printf_NoFilter("Total: %dkb\n", v92 >> 10);
  Com_Printf_NoFilter("====================END SCENE SURF DUMP====================\n\n");
}

/*
==============
R_SetIgnorePrecacheErrors
==============
*/
void R_SetIgnorePrecacheErrors(int ignore)
{
  rg.ignorePrecacheErrors = ignore != 0;
}

/*
==============
R_SetMaterialLodSettings
==============
*/
void R_SetMaterialLodSettings(MaterialLodSettings *materialLodSettings)
{
  _XMM1 = LODWORD(FLOAT_1_5);
  _XMM3 = 0i64;
  materialLodSettings->m_lodOverride = r_materialLodOverride->current.integer;
  materialLodSettings->m_minLod = r_materialLodMin->current.integer;
  materialLodSettings->m_invFovScale = rg.correctedLodParms.invFovScale;
  materialLodSettings->m_lodThresholds[0] = 1.5;
  __asm
  {
    vcmpless xmm0, xmm3, xmm2
    vblendvps xmm1, xmm1, xmm2, xmm0
    vmaxss  xmm0, xmm1, xmm3
  }
  materialLodSettings->m_lodThresholds[0] = *(float *)&_XMM0;
}

/*
==============
R_SkinAndBoundSceneEnt
==============
*/
void R_SkinAndBoundSceneEnt(GfxSceneEntity *sceneEnt, GfxViewDomain viewDomain)
{
  const DObjAnimMat *updated; 
  GfxSceneEntity *pLocalSceneEnt; 
  DObj *pObj; 

  if ( sceneEnt->cull.state < 4 )
  {
    updated = R_UpdateSceneEntBounds(sceneEnt, &pLocalSceneEnt, (const DObj **)&pObj, 1);
    if ( updated )
    {
      if ( !pLocalSceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1087, ASSERT_TYPE_ASSERT, "(localSceneEnt)", (const char *)&queryFormat, "localSceneEnt") )
        __debugbreak();
      CG_CullIn(pLocalSceneEnt->info.pose);
      R_SkinSceneDObj(sceneEnt, pLocalSceneEnt, pObj, updated, viewDomain);
    }
    else if ( pLocalSceneEnt )
    {
      CG_UsedDObjCalcPose(pLocalSceneEnt->info.pose);
    }
  }
}

/*
==============
R_SkinXModel
==============
*/
__int64 R_SkinXModel(XModelDrawInfo *modelInfo, const XModel *model, const DObj *obj, const GfxPlacement *placement, float scale, const GfxPlacement *placementPrevFrame, float scalePrevFrame, const GfxPlacement *part0Placement, const GfxPlacement *extraPartPlacements, unsigned int numPartPlacements, bool isMotionblurModel, unsigned int gfxEntIndex, unsigned __int16 gfxPackedEntityIndexBase, unsigned int mapEntLookup, float materialLod)
{
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  XModelDrawInfo *v25; 
  unsigned int v28; 
  char *Value; 
  unsigned int *v31; 
  unsigned int v32; 
  _QWORD *v33; 
  char *v34; 
  __int64 v35; 
  unsigned __int64 v36; 
  ThreadContext CurrentThreadContext; 
  const XModelLodInfo *LodInfo; 
  float v39; 
  int v40; 
  __int64 v41; 
  unsigned __int8 *v42; 
  __int64 v43; 
  bool v44; 
  size_t v45; 
  volatile int *p_surfPos; 
  unsigned __int32 v47; 
  unsigned int v49; 
  unsigned int SurfaceSubdivLevel; 
  unsigned int SubdivSurfTessFactorsTotalCacheSize; 
  GfxBackEndData *v58; 
  int v59; 
  XRigidVertList *rigidVertLists; 
  unsigned int boneIndexOffset; 
  DObjAnimMat *baseMat; 
  __int64 v63; 
  const DObjAnimMat *v64; 
  const char *v65; 
  float v66; 
  float v67; 
  const char *Name; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  GfxPlacement *placementa; 
  __int64 scalea; 
  const char *scaleb; 
  __int64 viewDomain; 
  __int64 v93; 
  __int64 v94; 
  int numLods; 
  unsigned __int8 ModelSubdivLodLevel; 
  unsigned int mbSurfBufSize; 
  __int64 v98; 
  unsigned int totalSurfaceCount; 
  int cacheOffset; 
  DObj *obja; 
  XModelDrawInfo *v102; 
  XSurface *surfaces; 
  __int64 v104; 
  DObjAnimMat mat; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  DObjSkelMat v110; 
  DObjPartBits partBits; 
  DObjSkelMat skelMat; 
  tmat33_t<vec3_t> axis; 
  unsigned __int8 mbSurfBuf[4]; 
  int v115[4]; 
  base_vec3_t<int> dst; 
  unsigned __int8 surfBuf[65664]; 
  char v118; 
  unsigned __int8 v119[16]; 
  __int128 v120; 
  __int128 v121; 
  __int128 v122; 
  __int128 v123; 
  __int128 v124; 
  __int128 v125; 
  __int128 v126; 
  __int128 v127; 
  __int128 v128; 
  __int128 v129; 

  v102 = modelInfo;
  v25 = modelInfo;
  obja = (DObj *)obj;
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 819, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  v28 = (*(_DWORD *)v25 >> 1) & 0xF;
  if ( v28 == 6 )
    return 0i64;
  Value = (char *)Sys_GetValue(0);
  v31 = (unsigned int *)(Value + 4776);
  if ( (unsigned int)(*((_DWORD *)Value + 1194) + 1) >= 3 )
  {
    LODWORD(placementa) = *((_DWORD *)Value + 1194) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", placementa, 3) )
      __debugbreak();
  }
  v32 = *v31 + 1;
  *v31 = v32;
  if ( v32 >= 3 )
  {
    LODWORD(scalea) = 3;
    LODWORD(placementa) = v32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", placementa, scalea) )
      __debugbreak();
  }
  v33 = Value + 2088;
  v34 = Value + 40;
  if ( *v33 < (unsigned __int64)v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v33 += 8i64;
  if ( *v33 >= (unsigned __int64)v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v33 = v31;
  if ( *v33 <= (unsigned __int64)v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v35 = (int)*v31;
  v36 = __rdtsc();
  v31[v35 + 2] = v36;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 67, NULL, 0);
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1232, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( v28 >= model->numLods )
  {
    numLods = model->numLods;
    LODWORD(scalea) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1233, ASSERT_TYPE_ASSERT, "((unsigned)( lodIndex ) < (unsigned)( model->numLods ))", "%s\n\t%d doesn't index %d \n\t%i not in [0, %i) for model '%s'", "(unsigned)( lodIndex ) < (unsigned)( model->numLods )", scalea, numLods, v28, numLods, model->name) )
      __debugbreak();
  }
  v128 = v16;
  if ( !r_subdiv->current.enabled )
    goto LABEL_38;
  LodInfo = XModelGetLodInfo(model, v28);
  if ( !LodInfo )
  {
    LODWORD(scalea) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1241, ASSERT_TYPE_ASSERT, "(lodInfo)", "%s\n\tNull lod info (%d) for model '%s'", "lodInfo", scalea, model->name) )
      __debugbreak();
  }
  if ( (LodInfo->flags & 1) == 0 )
  {
LABEL_38:
    v39 = scale;
LABEL_39:
    ModelSubdivLodLevel = 0;
    goto LABEL_40;
  }
  QuatToAxis(&placement->quat, &axis);
  v39 = scale;
  ModelSubdivLodLevel = R_GetModelSubdivLodLevel(model, v28, &placement->origin, &axis, scale);
  if ( ModelSubdivLodLevel && !R_CacheRigidSubdivLod(model, v28) )
    goto LABEL_39;
LABEL_40:
  mbSurfBufSize = 0;
  v40 = XModelGetSurfaces(model, &surfaces, v28);
  v41 = v40;
  totalSurfaceCount = v40;
  if ( !v40 )
  {
    LODWORD(viewDomain) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 865, ASSERT_TYPE_ASSERT, "(surfaceCount)", "%s\n\tR_SkinXModel : model %s lod %d : has 0 surfaceCount.", "surfaceCount", model->name, viewDomain) )
      __debugbreak();
  }
  if ( obja )
    DObjGetHidePartBits(obja, &partBits);
  if ( (int)v41 > 128 )
  {
    LODWORD(v94) = 128;
    LODWORD(v93) = v41;
    LODWORD(viewDomain) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 872, ASSERT_TYPE_ASSERT, "(surfaceCount <= DOBJ_MAX_SURFS)", "%s\n\tR_SkinXModel : model %s lod %d : surfaceCount %d exceeds DOBJ_MAX_SURFS (%d).", "surfaceCount <= DOBJ_MAX_SURFS", model->name, viewDomain, v93, v94) )
      __debugbreak();
  }
  v104 = v41;
  v42 = surfBuf;
  if ( (int)v41 > 0 )
  {
    v129 = v15;
    v120 = v24;
    v127 = v17;
    v43 = 0i64;
    v126 = v18;
    v125 = v19;
    v124 = v20;
    v123 = v21;
    v122 = v22;
    v121 = v23;
    v98 = 0i64;
    while ( 1 )
    {
      if ( v42 <= (unsigned __int8 *)&v118 )
      {
        if ( rg.drawRigidModels )
        {
          _R14 = &surfaces[v43];
          if ( obja )
          {
            v49 = 0;
            while ( 1 )
            {
              _RSI = 2i64 * v49;
              __asm
              {
                vlddqu  xmm6, xmmword ptr [r14+rsi*8+70h]
                vlddqu  xmm0, xmmword ptr [rbp+rsi*8+12C60h+partBits.baseclass_0.baseclass_0.baseclass_0.array]
                vpand   xmm1, xmm0, xmm6
                vptest  xmm1, xmm1
              }
              if ( !_ZF )
                break;
              if ( ++v49 >= 2 )
                goto LABEL_74;
            }
          }
          else
          {
LABEL_74:
            *(_DWORD *)v42 = -4;
            *((_WORD *)v42 + 8) = truncate_cast<unsigned short,unsigned int>(gfxEntIndex);
            *((_WORD *)v42 + 9) = truncate_cast<unsigned short,unsigned int>(mapEntLookup);
            *((_WORD *)v42 + 25) = gfxPackedEntityIndexBase;
            *((_DWORD *)v42 + 5) = 0;
            *(_QWORD *)(v42 + 4) = -1i64;
            *((float *)v42 + 7) = materialLod;
            if ( !ModelSubdivLodLevel || !r_subdiv->current.enabled || !_R14->subdivLevelCount )
            {
              v42[54] = 0;
LABEL_83:
              *((_DWORD *)v42 + 16) = -5;
LABEL_84:
              *((_QWORD *)v42 + 7) = _R14;
              *((float *)v42 + 18) = v39;
              if ( numPartPlacements && (rigidVertLists = _R14->rigidVertLists) != NULL )
              {
                boneIndexOffset = rigidVertLists->boneIndexOffset;
                baseMat = model->baseMat;
                v63 = rigidVertLists->boneIndexOffset;
                v64 = &baseMat[v63];
                *((_QWORD *)v42 + 4) = baseMat;
                if ( boneIndexOffset >= numPartPlacements )
                {
                  LODWORD(v93) = numPartPlacements;
                  LODWORD(scalea) = boneIndexOffset;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 974, ASSERT_TYPE_ASSERT, "(boneOffset < numPartPlacements)", "%s\n\tBad bone index (%d) for XModel '%s', which has a bone count of %d.", "boneOffset < numPartPlacements", scalea, model->name, v93) )
                    __debugbreak();
                }
                LocalConvertQuatToInverseSkelMat(v64, &skelMat);
                if ( (_WORD)boneIndexOffset )
                {
                  if ( !extraPartPlacements )
                  {
                    Name = XModelGetName(model);
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 984, ASSERT_TYPE_ASSERT, "(extraPartPlacements)", "%s\n\tNull extraPartPlacements for XModel '%s'", "extraPartPlacements", Name) )
                      __debugbreak();
                  }
                  v66 = extraPartPlacements[v63 - 1].origin.v[1];
                  mat.quat = extraPartPlacements[v63 - 1].quat;
                  mat.trans.v[0] = extraPartPlacements[v63 - 1].origin.v[0];
                  v67 = extraPartPlacements[v63 - 1].origin.v[2];
                }
                else
                {
                  if ( !part0Placement )
                  {
                    v65 = XModelGetName(model);
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 978, ASSERT_TYPE_ASSERT, "(part0Placement)", "%s\n\tNull part0Placement for XModel '%s'", "part0Placement", v65) )
                      __debugbreak();
                  }
                  v66 = part0Placement->origin.v[1];
                  mat.quat = part0Placement->quat;
                  mat.trans.v[0] = part0Placement->origin.v[0];
                  v67 = part0Placement->origin.v[2];
                }
                mat.trans.v[2] = v67;
                mat.transWeight = FLOAT_2_0;
                mat.trans.v[1] = v66;
                LocalConvertQuatToSkelMat(&mat, &v110);
                v69 = v64->quat.v[3];
                v70 = v64->quat.v[2];
                v71 = v64->quat.v[1];
                v72 = (float)((float)((float)(mat.quat.v[0] * v69) - (float)(mat.quat.v[3] * v64->quat.v[0])) - (float)(mat.quat.v[1] * v70)) + (float)(mat.quat.v[2] * v71);
                v73 = (float)((float)((float)(mat.quat.v[0] * v70) - (float)(mat.quat.v[3] * v71)) + (float)(mat.quat.v[1] * v69)) - (float)(mat.quat.v[2] * v64->quat.v[0]);
                v74 = (float)((float)(mat.quat.v[1] * v64->quat.v[0]) - (float)((float)(mat.quat.v[0] * v71) + (float)(mat.quat.v[3] * v70))) + (float)(mat.quat.v[2] * v69);
                v75 = (float)((float)((float)(mat.quat.v[0] * v64->quat.v[0]) + (float)(mat.quat.v[3] * v69)) + (float)(mat.quat.v[1] * v71)) + (float)(mat.quat.v[2] * v70);
                v76 = fsqrt((float)((float)((float)(v73 * v73) + (float)(v72 * v72)) + (float)(v74 * v74)) + (float)(v75 * v75));
                v106 = v72;
                v107 = v73;
                v108 = v74;
                v109 = v75;
                if ( v76 != 0.0 )
                {
                  v72 = (float)(1.0 / v76) * v72;
                  v73 = (float)(1.0 / v76) * v73;
                  v74 = (float)(1.0 / v76) * v74;
                  v75 = (float)(1.0 / v76) * v75;
                  v106 = v72;
                  v107 = v73;
                  v108 = v74;
                  v109 = v75;
                }
                v77 = skelMat.origin.v[0];
                v78 = skelMat.origin.v[2];
                v79 = skelMat.origin.v[1] * v110.axis.m[1].v[0];
                v80 = (float)((float)((float)(skelMat.origin.v[1] * v110.axis.m[1].v[1]) + (float)(skelMat.origin.v[0] * v110.axis.m[0].v[1])) + (float)(skelMat.origin.v[2] * v110.axis.m[2].v[1])) + v110.origin.v[1];
                v81 = skelMat.origin.v[0] * v110.axis.m[0].v[2];
                v82 = skelMat.origin.v[1] * v110.axis.m[1].v[2];
                v83 = skelMat.origin.v[2] * v110.axis.m[2].v[2];
                *((float *)v42 + 19) = v72;
                *((float *)v42 + 20) = v73;
                v84 = (float)(v82 + v81) + v83;
                v85 = v77 * v110.axis.m[0].v[0];
                v39 = scale;
                *((float *)v42 + 21) = v74;
                *((float *)v42 + 22) = v75;
                v86 = v84 + v110.origin.v[2];
                *((_DWORD *)v42 + 23) = (int)(float)((float)((float)((float)(v79 + v85) + (float)(v78 * v110.axis.m[2].v[0])) + v110.origin.v[0]) * 4096.0);
                *((_DWORD *)v42 + 24) = (int)(float)(v80 * 4096.0);
                *((_DWORD *)v42 + 25) = (int)(float)(v86 * 4096.0);
              }
              else
              {
                v87 = 4096.0 * placement->origin.v[1];
                *((_DWORD *)v42 + 23) = (int)(float)(4096.0 * placement->origin.v[0]);
                v88 = 4096.0 * placement->origin.v[2];
                *((_DWORD *)v42 + 24) = (int)v87;
                *((_DWORD *)v42 + 25) = (int)v88;
                *((_DWORD *)v42 + 19) = LODWORD(placement->quat.v[0]);
                *((_DWORD *)v42 + 20) = LODWORD(placement->quat.v[1]);
                *((_DWORD *)v42 + 21) = LODWORD(placement->quat.v[2]);
                *((_DWORD *)v42 + 22) = LODWORD(placement->quat.v[3]);
              }
              *((_WORD *)v42 + 26) = -1;
              if ( isMotionblurModel )
              {
                if ( mbSurfBufSize + 32 > 0x1800 )
                {
                  R_WarnOncePerFrame(R_WARN_MAX_MOTIONBLUR_SURFS_WORK_BUFFER);
                }
                else
                {
                  *(float *)&mbSurfBuf[mbSurfBufSize] = scalePrevFrame;
                  CopyVec3ToPreciseVec3(&placementPrevFrame->origin, (base_vec3_t<int> *)((char *)&dst + mbSurfBufSize), 0xCu);
                  v115[mbSurfBufSize / 4] = LODWORD(placementPrevFrame->quat.v[0]);
                  v115[mbSurfBufSize / 4 + 1] = LODWORD(placementPrevFrame->quat.v[1]);
                  v115[mbSurfBufSize / 4 + 2] = LODWORD(placementPrevFrame->quat.v[2]);
                  v115[mbSurfBufSize / 4 + 3] = LODWORD(placementPrevFrame->quat.v[3]);
                  *((_WORD *)v42 + 26) = truncate_cast<unsigned short,unsigned int>(mbSurfBufSize);
                  mbSurfBufSize += 32;
                }
              }
              *((_WORD *)v42 + 52) = -1;
              v42 += 108;
              if ( v42 > v119 )
              {
                v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1033, ASSERT_TYPE_ASSERT, "(surfPos <= surfBuf + sizeof( surfBuf ))", "%s\n\tDOBJ_MAX_SURFS exceeded for '%s'", "surfPos <= surfBuf + sizeof( surfBuf )", model->name);
                goto LABEL_54;
              }
LABEL_56:
              v43 = v98;
              goto LABEL_57;
            }
            v42[54] = ModelSubdivLodLevel;
            SurfaceSubdivLevel = R_GetSurfaceSubdivLevel(_R14, ModelSubdivLodLevel);
            SubdivSurfTessFactorsTotalCacheSize = R_GetSubdivSurfTessFactorsTotalCacheSize(_R14, SurfaceSubdivLevel);
            if ( !SubdivSurfTessFactorsTotalCacheSize )
              goto LABEL_83;
            if ( R_AllocSubdivSkinnedCachedVerts(SubdivSurfTessFactorsTotalCacheSize, &cacheOffset) )
            {
              v58 = frontEndDataOut;
              v59 = cacheOffset;
              *((_DWORD *)v42 + 16) = cacheOffset;
              if ( R_AddRigidSubdivTessFactorsCmd(v58->compute.cmdList, _R14, SurfaceSubdivLevel, v59, -1, placement, v39, GfxViewDomain_World) )
                goto LABEL_84;
            }
          }
          v43 = v98;
        }
      }
      else
      {
        R_WarnOncePerFrame(R_WARN_MAX_SURF_BUF, "index doesn't index SIMD_VECTOR_COUNT\n\t%i not in [0, %i)");
        v43 = v98;
      }
      *(_DWORD *)v42 = -3;
      v42 += 4;
      if ( v42 > v119 )
      {
        scaleb = XModelGetName(model);
        v44 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 887, ASSERT_TYPE_ASSERT, "(surfPos <= surfBuf + sizeof( surfBuf ))", "%s\n\tDOBJ_MAX_SURFS exceeded for '%s'", "surfPos <= surfBuf + sizeof( surfBuf )", scaleb);
LABEL_54:
        if ( v44 )
          __debugbreak();
        goto LABEL_56;
      }
LABEL_57:
      v98 = ++v43;
      if ( v43 >= v104 )
      {
        if ( mbSurfBufSize )
          R_AllocMotionBlurSurfaces(surfBuf, v42, totalSurfaceCount, mbSurfBuf, mbSurfBufSize);
        v25 = v102;
        break;
      }
    }
  }
  v45 = truncate_cast<unsigned int,__int64>(v42 - surfBuf);
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1042, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  p_surfPos = &frontEndDataOut->surfPos;
  if ( (((_BYTE)frontEndDataOut - 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frontEndDataOut->surfPos) )
    __debugbreak();
  v47 = _InterlockedExchangeAdd(p_surfPos, v45);
  if ( v47 + (unsigned int)v45 <= 0x40000 )
  {
    if ( (v47 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1052, ASSERT_TYPE_ASSERT, "(!(startSurfPos & 3))", (const char *)&queryFormat, "!(startSurfPos & 3)") )
      __debugbreak();
    if ( v47 >> 2 > 0x1000000 )
    {
      LODWORD(scalea) = 0x1000000;
      LODWORD(placementa) = v47 >> 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1054, ASSERT_TYPE_ASSERT, "( startSurfPos >> 2 ) <= ( (1 << 24) )", "startSurfPos >> 2 not in [0, XMODELDRAWINFO_SURF_ID_LIMIT]\n\t%u not in [0, %u]", placementa, scalea) )
        __debugbreak();
    }
    *((_DWORD *)v25 + 1) &= 0xFF000000;
    *((_DWORD *)v25 + 1) |= (v47 >> 2) & 0xFFFFFF;
    if ( (unsigned int)v45 > 0x1000000 )
    {
      LODWORD(scalea) = 0x1000000;
      LODWORD(placementa) = v45;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1056, ASSERT_TYPE_ASSERT, "( size ) <= ( (1 << 24) )", "size not in [0, XMODELDRAWINFO_SURF_BUF_SIZE_LIMIT]\n\t%u not in [0, %u]", placementa, scalea) )
        __debugbreak();
    }
    *(_DWORD *)v25 &= 0xC000003F;
    *(_DWORD *)v25 |= (v45 & 0xFFFFFF) << 6;
    memcpy_0(&frontEndDataOut->surfsBuffer[v47], surfBuf, v45);
    Profile_EndInternal(NULL);
    return 1i64;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_MAX_SCENE_SURFS_SIZE);
    Profile_EndInternal(NULL);
    return 0i64;
  }
}

/*
==============
R_SurfaceHasSubdivision
==============
*/
_BOOL8 R_SurfaceHasSubdivision(const XSurface *xsurf)
{
  return r_subdiv->current.enabled && xsurf->subdivLevelCount != 0;
}

/*
==============
R_XModelDebug
==============
*/
void R_XModelDebug(const DObj *obj, DObjPartBits *partBits)
{
  const dvar_t *v2; 

  v2 = r_xdebug;
  if ( r_xdebug->current.enabled )
  {
    R_XModelDebugBoxes(obj, partBits);
    v2 = r_xdebug;
  }
  if ( (v2->current.enabled & 2) != 0 )
  {
    R_XModelDebugAxes(obj, partBits);
    v2 = r_xdebug;
  }
  if ( (v2->current.enabled & 4) != 0 )
    R_XModelDebugSkel(obj, partBits);
}

/*
==============
R_XModelDebugAxes
==============
*/
void R_XModelDebugAxes(const DObj *obj, DObjPartBits *partBits)
{
  DObjAnimMat *RotTransArray; 
  int v5; 
  unsigned int v6; 
  vec4_t *p_color; 
  const vec3_t *v8; 
  int v9; 
  const DObjAnimMat *v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  vec3_t end; 
  vec3_t out; 
  vec4_t color; 
  __m256i v17; 
  float v18; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 528, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  if ( RotTransArray )
  {
    v18 = FLOAT_6_0;
    v17 = _ymm;
    v13 = DObjNumBones(obj);
    v5 = v13;
    DObjTotalNumBones(obj);
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 554, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    v6 = 0;
    if ( v13 > 0 )
    {
      do
      {
        if ( v6 >= 0x100 )
        {
          LODWORD(v12) = 256;
          LODWORD(v11) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v6 & 0x1F)) & partBits->array[(unsigned __int64)v6 >> 5]) != 0 )
        {
          p_color = &color;
          v8 = (const vec3_t *)&v17;
          v9 = 0;
          v10 = &RotTransArray[v6];
          do
          {
            color = (vec4_t)_xmm;
            if ( (unsigned int)v9 >= 4 )
            {
              LODWORD(v12) = 4;
              LODWORD(v11) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v12) )
                __debugbreak();
            }
            p_color->v[0] = 1.0;
            MatrixTransformVectorQuatTrans(&vec3_origin, v10, &out);
            out.v[0] = out.v[0] + scene.def.viewOffset.v[0];
            out.v[2] = out.v[2] + scene.def.viewOffset.v[2];
            out.v[1] = out.v[1] + scene.def.viewOffset.v[1];
            MatrixTransformVectorQuatTrans(v8, v10, &end);
            end.v[0] = end.v[0] + scene.def.viewOffset.v[0];
            end.v[2] = end.v[2] + scene.def.viewOffset.v[2];
            end.v[1] = end.v[1] + scene.def.viewOffset.v[1];
            R_AddDebugLine(&frontEndDataOut->debugGlobals, &out, &end, &color);
            ++v9;
            ++v8;
            p_color = (vec4_t *)((char *)p_color + 4);
          }
          while ( v9 < 3 );
          v5 = v13;
        }
        ++v6;
      }
      while ( (int)v6 < v5 );
    }
  }
}

/*
==============
R_XModelDebugBoxes
==============
*/
void R_XModelDebugBoxes(const DObj *obj, DObjPartBits *partBits)
{
  DObjPartBits *v2; 
  DObjAnimMat *v4; 
  int v5; 
  unsigned __int64 v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  bool v10; 
  XBoneInfo *v11; 
  const int *v12; 
  const DObjAnimMat *v13; 
  vec4_t *p_color; 
  __int64 v15; 
  int v17; 
  int v29; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  DObjAnimMat *RotTransArray; 
  __int64 v48; 
  vec3_t in; 
  vec3_t end; 
  vec3_t out; 
  __int128 v52; 
  vec4_t color; 
  XBoneInfo *boneInfo[4094]; 

  v2 = partBits;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 466, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  v4 = RotTransArray;
  if ( RotTransArray )
  {
    v5 = DObjNumBones(obj);
    v6 = v5;
    v44 = v5;
    v7 = DObjTotalNumBones(obj);
    if ( v6 > 0xFFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 473, ASSERT_TYPE_ASSERT, "(boneCount <= ( sizeof( *array_counter( boneInfoArray ) ) + 0 ))", (const char *)&queryFormat, "boneCount <= ARRAY_COUNT( boneInfoArray )") )
      __debugbreak();
    DObjGetBoneInfoClient(obj, boneInfo);
    color = (vec4_t)_xmm;
    v52 = _xmm;
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 479, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    if ( (v2->array[7] & 2) == 0 )
      v7 = v6;
    v8 = 0;
    v48 = v7;
    if ( v7 > 0 )
    {
      v9 = 0i64;
      v45 = 0i64;
      do
      {
        v10 = v8 >= (int)v6;
        if ( v8 >= (int)v6 )
          goto LABEL_20;
        if ( (unsigned int)v8 >= 0x100 )
        {
          LODWORD(v43) = 256;
          LODWORD(v42) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v42, v43) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v8 & 0x1F)) & v2->array[(unsigned __int64)(unsigned int)v8 >> 5]) != 0 )
        {
LABEL_20:
          v11 = boneInfo[v9];
          v12 = boxVerts;
          v13 = &v4[v8];
          p_color = (vec4_t *)&v52;
          if ( !v10 )
            p_color = &color;
          v15 = 12i64;
          do
          {
            _XMM4 = LODWORD(v11->bounds.halfSize.v[0]);
            v17 = *v12;
            _XMM0 = *v12 & 1;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in.v[0] = *(float *)&_XMM1 + v11->bounds.midPoint.v[0];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[1]);
            _XMM0 = v17 & 2;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in.v[1] = *(float *)&_XMM1 + v11->bounds.midPoint.v[1];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[2]);
            _XMM0 = v17 & 4;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in.v[2] = *(float *)&_XMM1 + v11->bounds.midPoint.v[2];
            MatrixTransformVectorQuatTrans(&in, v13, &out);
            v29 = v12[1];
            out.v[0] = out.v[0] + scene.def.viewOffset.v[0];
            out.v[2] = out.v[2] + scene.def.viewOffset.v[2];
            out.v[1] = out.v[1] + scene.def.viewOffset.v[1];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[0]);
            _XMM0 = v29 & 1;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in.v[0] = *(float *)&_XMM1 + v11->bounds.midPoint.v[0];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[1]);
            _XMM0 = v29 & 2;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in.v[1] = *(float *)&_XMM1 + v11->bounds.midPoint.v[1];
            _XMM4 = LODWORD(v11->bounds.halfSize.v[2]);
            _XMM0 = v29 & 4;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
            }
            in.v[2] = *(float *)&_XMM1 + v11->bounds.midPoint.v[2];
            MatrixTransformVectorQuatTrans(&in, v13, &end);
            end.v[0] = end.v[0] + scene.def.viewOffset.v[0];
            v12 += 2;
            end.v[2] = end.v[2] + scene.def.viewOffset.v[2];
            end.v[1] = end.v[1] + scene.def.viewOffset.v[1];
            R_AddDebugLine(&frontEndDataOut->debugGlobals, &out, &end, p_color);
            --v15;
          }
          while ( v15 );
          v9 = v45;
          LODWORD(v6) = v44;
          v2 = partBits;
          v4 = RotTransArray;
        }
        ++v9;
        ++v8;
        v45 = v9;
      }
      while ( v9 < v48 );
    }
  }
}

/*
==============
R_XModelDebugSkel
==============
*/
void R_XModelDebugSkel(const DObj *obj, DObjPartBits *partBits)
{
  int v4; 
  int v5; 
  const XModel *Model; 
  unsigned int v7; 
  bitarray_base<bitarray<256> > *v8; 
  int v10; 
  int i; 
  const char *BoneName; 
  unsigned __int8 *parentList; 
  signed int v14; 
  unsigned int v15; 
  bool IsBoneDismembered; 
  const vec4_t *v17; 
  const char *v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  int v22; 
  unsigned int NumModels; 
  DObjAnimMat *RotTransArray; 
  vec3_t out; 
  vec3_t end; 
  bitarray_base<bitarray<256> > v28[32]; 
  char dest[256]; 
  __int128 v30; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 600, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  if ( RotTransArray )
  {
    v21 = DObjNumBones(obj);
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 607, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    NumModels = DObjGetNumModels(obj);
    if ( NumModels )
    {
      v4 = 0;
      v5 = 0;
      v30 = _XMM6;
      Model = DObjGetModel(obj, 0);
      v7 = 0;
      v22 = XModelNumBones(Model);
      v8 = v28;
      __asm { vpxor   xmm6, xmm6, xmm6 }
      do
      {
        *(_OWORD *)v8 = _XMM6;
        v8 += 16;
        ++v7;
      }
      while ( v7 < 2 );
      v10 = v21;
      for ( i = 0; i < v10; ++i )
      {
        if ( (unsigned int)i >= 0x100 )
        {
          LODWORD(v20) = 256;
          LODWORD(v19) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v19, v20) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (i & 0x1F)) & partBits->array[(unsigned __int64)(unsigned int)i >> 5]) != 0 )
        {
          if ( i >= v22 )
          {
            if ( ++v4 >= NumModels )
            {
              LODWORD(v20) = NumModels;
              LODWORD(v19) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 629, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( modelCount )", "modelIndex doesn't index modelCount\n\t%i not in [0, %i)", v19, v20) )
                __debugbreak();
            }
            Model = DObjGetModel(obj, v4);
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 631, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
              __debugbreak();
            v22 += XModelNumBones(Model);
            v5 += XModelNumBones(Model);
          }
          MatrixTransformVectorQuatTrans(&vec3_origin, &RotTransArray[i], &out);
          out.v[0] = out.v[0] + scene.def.viewOffset.v[0];
          out.v[2] = out.v[2] + scene.def.viewOffset.v[2];
          out.v[1] = out.v[1] + scene.def.viewOffset.v[1];
          BoneName = DObjGetBoneName(obj, i);
          Com_sprintf(dest, 0x100ui64, "%i:%s", (unsigned int)i, BoneName);
          R_AddDebugString(&frontEndDataOut->debugGlobals, &out, &colorWhite, fontSize_0, dest);
          parentList = Model->parentList;
          if ( parentList )
          {
            v14 = i - v5 - parentList[i - v5 - Model->numRootBones];
            if ( v14 >= 0 && v14 < Model->numBones )
            {
              v15 = i - parentList[i - v5 - Model->numRootBones];
              if ( v15 >= v21 )
              {
                LODWORD(v20) = v21;
                LODWORD(v19) = i - parentList[i - v5 - Model->numRootBones];
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 653, ASSERT_TYPE_ASSERT, "(unsigned)( dobjParentIndex ) < (unsigned)( boneCount )", "dobjParentIndex doesn't index boneCount\n\t%i not in [0, %i)", v19, v20) )
                  __debugbreak();
              }
              if ( bitarray_base<bitarray<256>>::testBit(partBits, v15) )
              {
                MatrixTransformVectorQuatTrans(&vec3_origin, &RotTransArray[v15], &end);
                end.v[0] = end.v[0] + scene.def.viewOffset.v[0];
                end.v[2] = end.v[2] + scene.def.viewOffset.v[2];
                end.v[1] = end.v[1] + scene.def.viewOffset.v[1];
                IsBoneDismembered = FX_Dismemberment_IsBoneDismembered((LocalClientNum_t)frontEndDataOut->localClientNum, obj, v15, 0);
                v17 = &colorDkOrange;
                if ( !IsBoneDismembered )
                  v17 = &colorMdCyan;
                R_AddDebugLine(&frontEndDataOut->debugGlobals, &out, &end, v17);
                if ( !bitarray_base<bitarray<256>>::testBit(v28, v14) )
                {
                  bitarray_base<bitarray<256>>::setBit(v28, v14);
                  v18 = DObjGetBoneName(obj, v15);
                  Com_sprintf(dest, 0x100ui64, "%i:%s", v15, v18);
                  R_AddDebugString(&frontEndDataOut->debugGlobals, &end, &colorWhite, fontSize_0, dest);
                }
              }
              v10 = v21;
            }
          }
        }
      }
    }
  }
}

/*
==============
XModelReleaseResources
==============
*/
void XModelReleaseResources(XModel *model)
{
  ReactiveMotionModelInfo *reactiveMotionInfo; 

  reactiveMotionInfo = model->reactiveMotionInfo;
  if ( reactiveMotionInfo )
    R_ShutdownGfxWrappedBuffer(&reactiveMotionInfo->modelPartsBuffer);
}

/*
==============
XSurfaceReleaseResources
==============
*/
void XSurfaceReleaseResources(XSurface *surf)
{
  if ( !surf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1170, ASSERT_TYPE_ASSERT, "(surf)", (const char *)&queryFormat, "surf") )
    __debugbreak();
  if ( surf->subdivLevelCount )
    R_FreeSurfaceSubdivLevels(surf);
}

