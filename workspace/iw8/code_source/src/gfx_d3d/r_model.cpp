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
  __int64 v1; 
  const char *v2; 
  fileHandle_t *v3; 
  int sceneDObjCount; 
  __int64 v5; 
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  unsigned __int8 v11; 
  const cpose_t *pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  char *v35; 
  unsigned __int64 v36; 
  unsigned __int8 v37; 
  const DObj *obj; 
  char *v39; 
  unsigned __int64 v40; 
  char *v41; 
  unsigned __int64 v42; 
  char *v44; 
  unsigned __int64 v45; 
  volatile int v46; 
  unsigned __int8 *v47; 
  unsigned __int8 v49; 
  int v50; 
  unsigned __int8 v51; 
  unsigned __int8 v52; 
  __int64 v53; 
  unsigned int v55; 
  const char **v56; 
  char *v68; 
  unsigned __int64 v69; 
  char *v70; 
  unsigned __int64 v71; 
  __int64 v72; 
  unsigned __int16 v73; 
  DynEntityClient *v74; 
  const char **p_name; 
  unsigned __int8 v77; 
  unsigned __int8 *v78; 
  unsigned __int8 v79; 
  __int64 v80; 
  unsigned __int8 *v81; 
  unsigned __int8 *v82; 
  unsigned __int8 *v83; 
  unsigned int v84; 
  unsigned int v86; 
  int v87; 
  __int64 v90; 
  char *v101; 
  unsigned __int64 v102; 
  bool v103; 
  char *v104; 
  unsigned __int64 v105; 
  unsigned int *p_surfBufSize; 
  unsigned __int8 *v107; 
  __int64 v108; 
  unsigned __int8 v109; 
  int v111; 
  __int64 v112; 
  unsigned int v113; 
  char *v127; 
  unsigned __int64 v128; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  __int64 v134; 
  __int64 v135; 
  __int64 v136; 
  __int64 v137; 
  double v138; 
  double v139; 
  __int64 v140; 
  double v141; 
  double v142; 
  double v143; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  double v149; 
  double v150; 
  double v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158; 
  double v159; 
  double v160; 
  double v161; 
  double v162; 
  unsigned __int8 v163; 
  unsigned int v164; 
  int v165; 
  __int64 v166; 
  __int64 v167; 
  GfxSceneDynModel *sceneDynModel; 
  fileHandle_t h; 
  __int64 sceneDynModelCount; 
  volatile int v171; 
  __int64 v172; 
  int v173; 
  unsigned __int8 v174; 

  v171 = 0;
  v1 = 0i64;
  v164 = 0;
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
  v165 = 0;
  if ( scene.sceneDObjCount > 0 )
  {
    __asm
    {
      vmovaps [rsp+0E0h+var_38+8], xmm6
      vmovsd  xmm6, cs:__real@3f30000000000000
    }
    v167 = 0i64;
    do
    {
      v7 = scene.sceneDObjVisData[4][v1];
      v8 = scene.sceneDObjVisData[0][v1] & 1;
      v9 = (scene.sceneDObjVisData[3][v1] & 1) + (scene.sceneDObjVisData[2][v1] & 1) + (scene.sceneDObjVisData[1][v1] & 1);
      v174 = v8;
      v10 = v1;
      v11 = (scene.sceneDObjVisData[11][v1] & 1) + (scene.sceneDObjVisData[10][v1] & 1) + (scene.sceneDObjVisData[9][v1] & 1) + (scene.sceneDObjVisData[8][v1] & 1) + (scene.sceneDObjVisData[7][v1] & 1) + (scene.sceneDObjVisData[6][v1] & 1) + (scene.sceneDObjVisData[5][v1] & 1) + (v7 & 1);
      if ( scene.sceneDObj[v1].surfBufSize )
      {
        pose = scene.sceneDObj[v10].info.pose;
        if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
          __debugbreak();
        if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
        FunctionPointer_origin(&pose->origin.origin.origin, (vec3_t *)&v172);
        if ( pose->isPosePrecise )
        {
          __asm
          {
            vmovd   xmm0, dword ptr [rbp+57h+var_60]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm6
            vmovd   xmm0, dword ptr [rbp+57h+var_60+4]
            vcvtdq2pd xmm0, xmm0
            vcvtsd2ss xmm2, xmm1, xmm1
            vmulsd  xmm1, xmm0, xmm6
            vmovd   xmm0, [rbp+57h+var_58]
            vcvtsd2ss xmm3, xmm1, xmm1
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm6
            vcvtsd2ss xmm4, xmm1, xmm1
            vmovss  [rbp+57h+var_58], xmm4
            vmovss  dword ptr [rbp+57h+var_60], xmm2
            vmovss  dword ptr [rbp+57h+var_60+4], xmm3
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm4, [rbp+57h+var_58]
            vmovss  xmm3, dword ptr [rbp+57h+var_60+4]
            vmovss  xmm2, dword ptr [rbp+57h+var_60]
          }
        }
        __asm
        {
          vcvtss2sd xmm0, xmm4, xmm4
          vmovsd  [rsp+0E0h+var_A0], xmm0
          vcvtss2sd xmm1, xmm3, xmm3
          vmovsd  [rsp+0E0h+var_A8], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0E0h+var_B0], xmm2
        }
        LODWORD(v134) = v11;
        LODWORD(fmt) = v9;
        Com_Printf_NoFilter("%d, %d, -, -, %d, %d, %d, -, (%.0f %.0f %.0f)", scene.sceneDObj[v10].surfBufSize, (*((_DWORD *)&scene.sceneDObj[v10] + 346) >> 10) & 0xFFF, v8, fmt, v134, v141, v149, v157);
        __asm
        {
          vmovss  xmm0, [rbp+57h+var_58]
          vmovss  xmm1, dword ptr [rbp+57h+var_60+4]
          vmovss  xmm2, dword ptr [rbp+57h+var_60]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0E0h+var_A0], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+0E0h+var_A8], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0E0h+var_B0], xmm2
        }
        LODWORD(v135) = v11;
        LODWORD(fmta) = v9;
        v35 = j_va("%d,%d,-,-,%d,%d,%d,-,(%.0f %.0f %.0f)", scene.sceneDObj[v10].surfBufSize, (*((_DWORD *)&scene.sceneDObj[v10] + 346) >> 10) & 0xFFF, v8, fmta, v135, v142, v150, v158);
        if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
          __debugbreak();
        if ( v3 != (fileHandle_t *)-1i64 )
        {
          v36 = -1i64;
          do
            ++v36;
          while ( v35[v36] );
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(v35, v36, (fileHandle_t)v3);
        }
        v37 = 0;
        obj = scene.sceneDObj[v10].obj;
        if ( obj->numModels )
        {
          do
          {
            v39 = j_va(",%s", obj->models[v37]->name);
            Com_Printf_NoFilter(", %s", scene.sceneDObj[v10].obj->models[v37]->name);
            if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
              __debugbreak();
            if ( v3 != (fileHandle_t *)-1i64 )
            {
              v40 = -1i64;
              do
                ++v40;
              while ( v39[v40] );
              if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
                __debugbreak();
              FS_Write(v39, v40, (fileHandle_t)v3);
            }
            obj = scene.sceneDObj[v10].obj;
            ++v37;
          }
          while ( v37 < obj->numModels );
          v1 = v167;
        }
        v41 = j_va("\n");
        Com_Printf_NoFilter("\n");
        if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
          __debugbreak();
        if ( v3 != (fileHandle_t *)-1i64 )
        {
          v42 = -1i64;
          do
            ++v42;
          while ( v41[v42] );
          if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(v41, v42, (fileHandle_t)v3);
        }
        sceneDObjCount = scene.sceneDObjCount;
        v164 += scene.sceneDObj[v10].surfBufSize;
        LODWORD(v5) = v165;
      }
      v5 = (unsigned int)(v5 + 1);
      ++v1;
      v165 = v5;
      v167 = v1;
    }
    while ( (int)v5 < sceneDObjCount );
    LODWORD(v1) = v164;
    __asm { vmovaps xmm6, [rsp+0E0h+var_38+8] }
  }
  v44 = j_va("\n", v5, &queryFormat);
  Com_Printf_NoFilter("\n");
  if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  if ( v3 != (fileHandle_t *)-1i64 )
  {
    v45 = -1i64;
    do
      ++v45;
    while ( v44[v45] );
    if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
      __debugbreak();
    FS_Write(v44, v45, (fileHandle_t)v3);
  }
  v46 = 0;
  if ( scene.sceneModelCount > 0 )
  {
    v47 = scene.sceneModelVisData[2];
    _R15 = &scene.sceneModel[0].model;
    do
    {
      v49 = (*v47 & 1) + (*(v47 - 1024) & 1) + (v47[1024] & 1);
      v50 = *((_DWORD *)_R15 - 2) >> 6;
      v51 = *(v47 - 2048) & 1;
      v52 = (v47[2048] & 1) + (v47[3072] & 1) + (v47[4096] & 1) + (v47[5120] & 1) + (v47[6144] & 1) + (v47[7168] & 1) + (v47[0x2000] & 1) + (v47[9216] & 1);
      v174 = v51;
      v53 = v50 & 0xFFFFFF;
      if ( (_DWORD)v53 )
      {
        __asm { vmovsd  xmm3, qword ptr [r15+40h] }
        v55 = *((_DWORD *)_R15 + 28);
        v173 = *((_DWORD *)_R15 + 18);
        v56 = (const char **)*_R15;
        __asm
        {
          vmovss  xmm2, [rbp+57h+var_58]
          vshufps xmm0, xmm3, xmm3, 55h ; 'U'
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rbp+57h+var_60], xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0E0h+var_A0], xmm2
          vmovsd  [rsp+0E0h+var_A8], xmm1
          vcvtss2sd xmm0, xmm3, xmm3
          vmovsd  [rsp+0E0h+var_B0], xmm0
        }
        LODWORD(v134) = v52;
        LODWORD(fmt) = v49;
        Com_Printf_NoFilter("%d, %d, -, -, %d, %d, %d, -, (%.0f %.0f %.0f), %s\n", v53, (v55 >> 10) & 0xFFF, v51, fmt, v134, v143, v151, v159, *v56);
        __asm
        {
          vmovss  xmm0, [rbp+57h+var_58]
          vmovss  xmm1, dword ptr [rbp+57h+var_60+4]
          vmovss  xmm2, dword ptr [rbp+57h+var_60]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0E0h+var_A0], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+0E0h+var_A8], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0E0h+var_B0], xmm2
        }
        LODWORD(v136) = v52;
        LODWORD(fmtb) = v49;
        v68 = j_va("%d,%d,-,-,%d,%d,%d,-,(%.0f %.0f %.0f),%s\n", (*((_DWORD *)_R15 - 2) >> 6) & 0xFFFFFF, (*((_DWORD *)_R15 + 28) >> 10) & 0xFFF, v51, fmtb, v136, v144, v152, v160, (*_R15)->name);
        if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
          __debugbreak();
        if ( h.handle.handle != -1 )
        {
          v69 = -1i64;
          do
            ++v69;
          while ( v68[v69] );
          if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(v68, v69, h);
        }
        LODWORD(v1) = ((*((_DWORD *)_R15 - 2) >> 6) & 0xFFFFFF) + v1;
      }
      ++v46;
      _R15 += 19;
      ++v47;
    }
    while ( v46 < scene.sceneModelCount );
    v164 = v1;
  }
  v70 = j_va("\n");
  Com_Printf_NoFilter("\n");
  if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  if ( h.handle.handle != -1 )
  {
    v71 = -1i64;
    do
      ++v71;
    while ( v70[v71] );
    if ( !v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
      __debugbreak();
    FS_Write(v70, v71, h);
  }
  if ( scene.sceneDynModelCount )
  {
    sceneDynModelCount = (unsigned int)scene.sceneDynModelCount;
    v163 = v174;
    v72 = 0i64;
    v166 = 0i64;
    do
    {
      sceneDynModel = rgp.world->sceneDynModel;
      v73 = *(unsigned __int16 *)((char *)&sceneDynModel->dynEntClientId + v72);
      if ( v73 >= g_dynEntClientEntsAllocCount[0][0] )
      {
        LODWORD(v140) = g_dynEntClientEntsAllocCount[0][0];
        LODWORD(v134) = v73;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v134, v140) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v74 = &g_dynEntClientLists[0][0][v73];
      if ( !g_dynEntPoseLists[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
        __debugbreak();
      if ( v73 >= g_dynEntClientEntsAllocCount[0][0] )
      {
        LODWORD(v140) = g_dynEntClientEntsAllocCount[0][0];
        LODWORD(v134) = v73;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v134, v140) )
          __debugbreak();
      }
      _R13 = &g_dynEntPoseLists[0][0][v73];
      if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 241, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 242, ASSERT_TYPE_ASSERT, "(dynEntityPose)", (const char *)&queryFormat, "dynEntityPose") )
        __debugbreak();
      p_name = &v74->activeModel->name;
      if ( v74->activeModel )
      {
        v77 = 0;
        v78 = rgp.world->dpvsDyn.dynEntVisData[0][0];
        if ( v78 )
        {
          v79 = v78[v73];
          v80 = v73;
          v163 = v79 & 1;
        }
        else
        {
          v80 = v73;
        }
        v81 = rgp.world->dpvsDyn.dynEntVisData[0][1];
        if ( v81 )
        {
          v80 = v73;
          v77 = v81[v73] & 1;
        }
        v82 = rgp.world->dpvsDyn.dynEntVisData[0][2];
        if ( v82 )
          v77 += v82[v80] & 1;
        v83 = rgp.world->dpvsDyn.dynEntVisData[0][3];
        if ( v83 )
          v77 += v83[v80] & 1;
        if ( (*(_DWORD *)((char *)&sceneDynModel->info + v166) & 0x3FFFFFC0) != 0 )
        {
          v84 = R_NumPrimaryShadowLightsLinkedToDynEntClient(LOCAL_CLIENT_0, v73, DYNENT_BASIS_MODEL);
          __asm { vmovsd  xmm0, qword ptr [r13+4Ch] }
          v86 = v84;
          __asm { vmovsd  [rbp+57h+var_60], xmm0 }
          v87 = LODWORD(_R13->pose.origin.v[2]);
          __asm
          {
            vmovss  xmm1, dword ptr [rbp+57h+var_60+4]
            vmovss  xmm2, dword ptr [rbp+57h+var_60]
          }
          v90 = v166;
          v173 = v87;
          __asm
          {
            vmovss  xmm0, [rbp+57h+var_58]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+0E0h+var_A0], xmm0
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  [rsp+0E0h+var_A8], xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  [rsp+0E0h+var_B0], xmm2
          }
          LODWORD(v134) = v77;
          LODWORD(fmt) = v163;
          Com_Printf_NoFilter("%d, -, %d, %d, -, %d, %d, -, (%.0f %.0f %.0f), %s\n", (*(_DWORD *)((char *)&sceneDynModel->info + v166) >> 6) & 0xFFFFFF, v74->dynEntDefId, v84, fmt, v134, v145, v153, v161, *p_name);
          __asm
          {
            vmovss  xmm0, [rbp+57h+var_58]
            vmovss  xmm1, dword ptr [rbp+57h+var_60+4]
            vmovss  xmm2, dword ptr [rbp+57h+var_60]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+0E0h+var_A0], xmm0
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  [rsp+0E0h+var_A8], xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  [rsp+0E0h+var_B0], xmm2
          }
          LODWORD(v137) = v77;
          LODWORD(fmtc) = v163;
          v101 = j_va("%d,-,%d, %d,-,%d,%d,-,(%.0f %.0f %.0f),%s\n", (*(_DWORD *)((char *)&sceneDynModel->info + v166) >> 6) & 0xFFFFFF, v74->dynEntDefId, v86, fmtc, v137, v146, v154, v162, *p_name);
          if ( !v101 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
            __debugbreak();
          if ( h.handle.handle != -1 )
          {
            v102 = -1i64;
            do
              ++v102;
            while ( v101[v102] );
            if ( !v102 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
              __debugbreak();
            FS_Write(v101, v102, h);
          }
          v164 += (*(_DWORD *)((char *)&sceneDynModel->info + v166) >> 6) & 0xFFFFFF;
        }
        else
        {
          v90 = v166;
        }
      }
      else
      {
        v90 = v166;
      }
      v72 = v90 + 12;
      v103 = sceneDynModelCount-- == 1;
      v166 = v72;
    }
    while ( !v103 );
  }
  v104 = j_va("\n");
  Com_Printf_NoFilter("\n");
  if ( !v104 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
    __debugbreak();
  if ( h.handle.handle != -1 )
  {
    v105 = -1i64;
    do
      ++v105;
    while ( v104[v105] );
    if ( !v105 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
      __debugbreak();
    FS_Write(v104, v105, h);
  }
  if ( scene.sceneBrushCount > 0 )
  {
    p_surfBufSize = &scene.sceneBrush[0].info.surfBufSize;
    v107 = scene.sceneBrushVisData[2];
    do
    {
      v108 = *p_surfBufSize;
      v109 = *(v107 - 1024) & 1;
      if ( (_DWORD)v108 )
      {
        _RAX = *(_QWORD *)(p_surfBufSize + 3);
        v111 = (unsigned __int8)((*v107 & 1) + (*(v107 - 512) & 1) + (v107[512] & 1));
        v112 = *((unsigned __int16 *)p_surfBufSize + 2);
        v113 = v109;
        __asm
        {
          vmovsd  xmm0, qword ptr [rax+38h]
          vmovsd  [rbp+57h+var_60], xmm0
          vmovss  xmm1, dword ptr [rbp+57h+var_60+4]
          vmovss  xmm2, dword ptr [rbp+57h+var_60]
        }
        v173 = *(_DWORD *)(_RAX + 64);
        __asm
        {
          vmovss  xmm0, [rbp+57h+var_58]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0E0h+var_A8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+0E0h+var_B0], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0E0h+var_B8], xmm2
        }
        LODWORD(fmt) = v111;
        Com_Printf_NoFilter("%d, %d, -, -, %d, %d, -, -, (%.0f %.0f %.0f), -\n", v108, v112, v109, fmt, v138, v147, v155);
        __asm
        {
          vmovss  xmm0, [rbp+57h+var_58]
          vmovss  xmm1, dword ptr [rbp+57h+var_60+4]
          vmovss  xmm2, dword ptr [rbp+57h+var_60]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0E0h+var_A8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+0E0h+var_B0], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  [rsp+0E0h+var_B8], xmm2
        }
        LODWORD(fmtd) = v111;
        v127 = j_va("%d,%d,-,-,%d,%d,-,-,(%.0f %.0f %.0f),-\n", *p_surfBufSize, *((unsigned __int16 *)p_surfBufSize + 2), v113, fmtd, v139, v148, v156);
        if ( !v127 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 356, ASSERT_TYPE_ASSERT, "(line)", (const char *)&queryFormat, "line") )
          __debugbreak();
        if ( h.handle.handle != -1 )
        {
          v128 = -1i64;
          do
            ++v128;
          while ( v127[v128] );
          if ( !v128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 361, ASSERT_TYPE_ASSERT, "(lineLen)", (const char *)&queryFormat, "lineLen") )
            __debugbreak();
          FS_Write(v127, v128, h);
        }
        v164 += *p_surfBufSize;
      }
      p_surfBufSize += 22;
      ++v107;
      ++v171;
    }
    while ( v171 < scene.sceneBrushCount );
  }
  if ( h.handle.handle != -1 )
  {
    FS_FCloseFile(h);
    Com_Printf(15, "Done writing file: \"%s\"\n\n", (const char *)&stru_14441D2C8);
  }
  Com_Printf_NoFilter("====================SCENE SURF SUMMARY====================\n");
  Com_Printf_NoFilter("Total: %dkb\n", v164 >> 10);
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

void __fastcall R_SetMaterialLodSettings(MaterialLodSettings *materialLodSettings, __int64 a2, __int64 a3, double _XMM3_8)
{
  __asm
  {
    vmovss  xmm1, cs:__real@3fc00000
    vxorps  xmm3, xmm3, xmm3
  }
  materialLodSettings->m_lodOverride = r_materialLodOverride->current.integer;
  materialLodSettings->m_minLod = r_materialLodMin->current.integer;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmovss  dword ptr [rcx+8], xmm0
  }
  materialLodSettings->m_lodThresholds[0] = 1.5;
  _RAX = r_materialLod0SizeThresholdOverride;
  __asm
  {
    vmovss  xmm2, dword ptr [rax+28h]
    vcmpless xmm0, xmm3, xmm2
    vblendvps xmm1, xmm1, xmm2, xmm0
    vmaxss  xmm0, xmm1, xmm3
    vmovss  dword ptr [rcx+0Ch], xmm0
  }
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
  int v40; 
  __int64 v41; 
  __int64 v45; 
  bool v46; 
  unsigned int v56; 
  size_t v58; 
  volatile int *p_surfPos; 
  unsigned __int32 v60; 
  unsigned int v62; 
  unsigned int SurfaceSubdivLevel; 
  unsigned int SubdivSurfTessFactorsTotalCacheSize; 
  GfxBackEndData *v72; 
  int v73; 
  XRigidVertList *rigidVertLists; 
  unsigned int boneIndexOffset; 
  DObjAnimMat *baseMat; 
  __int64 v77; 
  const char *v79; 
  const char *Name; 
  float fmt; 
  GfxPlacement *placementa; 
  __int64 scalea; 
  const char *scaleb; 
  float scalec; 
  __int64 viewDomain; 
  __int64 v178; 
  __int64 v179; 
  unsigned __int8 ModelSubdivLodLevel; 
  unsigned int mbSurfBufSize; 
  __int64 v182; 
  unsigned int totalSurfaceCount; 
  int cacheOffset; 
  DObj *obja; 
  XModelDrawInfo *v186; 
  XSurface *surfaces; 
  __int64 v188; 
  DObjAnimMat mat; 
  DObjSkelMat v194; 
  DObjPartBits partBits; 
  DObjSkelMat skelMat; 
  tmat33_t<vec3_t> axis; 
  unsigned __int8 mbSurfBuf[4]; 
  int v199[4]; 
  base_vec3_t<int> dst; 
  unsigned __int8 surfBuf[65664]; 
  char v202; 
  unsigned __int8 v203[16]; 

  v186 = modelInfo;
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
    LODWORD(scalea) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1233, ASSERT_TYPE_ASSERT, "((unsigned)( lodIndex ) < (unsigned)( model->numLods ))", "%s\n\t%d doesn't index %d \n\t%i not in [0, %i) for model '%s'", "(unsigned)( lodIndex ) < (unsigned)( model->numLods )", scalea, model->numLods, v28, model->numLods, model->name) )
      __debugbreak();
  }
  __asm { vmovaps [rsp+12D60h+var_60], xmm7 }
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
    __asm { vmovss  xmm7, [rbp+12C60h+arg_20] }
LABEL_39:
    ModelSubdivLodLevel = 0;
    goto LABEL_40;
  }
  QuatToAxis(&placement->quat, &axis);
  __asm
  {
    vmovss  xmm7, [rbp+12C60h+arg_20]
    vmovss  dword ptr [rsp+12D60h+fmt], xmm7
  }
  ModelSubdivLodLevel = R_GetModelSubdivLodLevel(model, v28, &placement->origin, &axis, fmt);
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
    LODWORD(v179) = 128;
    LODWORD(v178) = v41;
    LODWORD(viewDomain) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 872, ASSERT_TYPE_ASSERT, "(surfaceCount <= DOBJ_MAX_SURFS)", "%s\n\tR_SkinXModel : model %s lod %d : surfaceCount %d exceeds DOBJ_MAX_SURFS (%d).", "surfaceCount <= DOBJ_MAX_SURFS", model->name, viewDomain, v178, v179) )
      __debugbreak();
  }
  v188 = v41;
  _RDI = surfBuf;
  if ( (int)v41 > 0 )
  {
    _R12 = part0Placement;
    __asm
    {
      vmovaps [rsp+12D60h+var_50], xmm6
      vmovaps [rsp+12D60h+var_E0], xmm15
      vmovss  xmm15, cs:__real@45800000
      vmovaps [rsp+12D60h+var_70], xmm8
    }
    v45 = 0i64;
    __asm
    {
      vmovaps [rsp+12D60h+var_80], xmm9
      vmovaps [rsp+12D60h+var_90], xmm10
      vmovaps [rsp+12D60h+var_A0], xmm11
      vmovaps [rsp+12D60h+var_B0], xmm12
      vmovaps [rsp+12D60h+var_C0], xmm13
      vmovaps [rsp+12D60h+var_D0], xmm14
    }
    v182 = 0i64;
    while ( 1 )
    {
      if ( _RDI <= (unsigned __int8 *)&v202 )
      {
        if ( rg.drawRigidModels )
        {
          _R14 = &surfaces[v45];
          if ( obja )
          {
            v62 = 0;
            while ( 1 )
            {
              _RSI = 2i64 * v62;
              __asm
              {
                vlddqu  xmm6, xmmword ptr [r14+rsi*8+70h]
                vlddqu  xmm0, xmmword ptr [rbp+rsi*8+12C60h+partBits.baseclass_0.baseclass_0.baseclass_0.array]
                vpand   xmm1, xmm0, xmm6
                vptest  xmm1, xmm1
              }
              if ( !_ZF )
                break;
              if ( ++v62 >= 2 )
                goto LABEL_74;
            }
          }
          else
          {
LABEL_74:
            *(_DWORD *)_RDI = -4;
            *((_WORD *)_RDI + 8) = truncate_cast<unsigned short,unsigned int>(gfxEntIndex);
            *((_WORD *)_RDI + 9) = truncate_cast<unsigned short,unsigned int>(mapEntLookup);
            *((_WORD *)_RDI + 25) = gfxPackedEntityIndexBase;
            *((_DWORD *)_RDI + 5) = 0;
            *(_QWORD *)(_RDI + 4) = -1i64;
            __asm
            {
              vmovss  xmm0, [rbp+12C60h+arg_70]
              vmovss  dword ptr [rdi+1Ch], xmm0
            }
            if ( !ModelSubdivLodLevel || !r_subdiv->current.enabled || !_R14->subdivLevelCount )
            {
              _RDI[54] = 0;
LABEL_83:
              *((_DWORD *)_RDI + 16) = -5;
LABEL_84:
              *((_QWORD *)_RDI + 7) = _R14;
              __asm { vmovss  dword ptr [rdi+48h], xmm7 }
              if ( numPartPlacements && (rigidVertLists = _R14->rigidVertLists) != NULL )
              {
                boneIndexOffset = rigidVertLists->boneIndexOffset;
                baseMat = model->baseMat;
                v77 = rigidVertLists->boneIndexOffset;
                _RBX = &baseMat[v77];
                *((_QWORD *)_RDI + 4) = baseMat;
                if ( boneIndexOffset >= numPartPlacements )
                {
                  LODWORD(v178) = numPartPlacements;
                  LODWORD(scalea) = boneIndexOffset;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 974, ASSERT_TYPE_ASSERT, "(boneOffset < numPartPlacements)", "%s\n\tBad bone index (%d) for XModel '%s', which has a bone count of %d.", "boneOffset < numPartPlacements", scalea, model->name, v178) )
                    __debugbreak();
                }
                LocalConvertQuatToInverseSkelMat(_RBX, &skelMat);
                if ( (_WORD)boneIndexOffset )
                {
                  _RSI = extraPartPlacements;
                  if ( !extraPartPlacements )
                  {
                    Name = XModelGetName(model);
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 984, ASSERT_TYPE_ASSERT, "(extraPartPlacements)", "%s\n\tNull extraPartPlacements for XModel '%s'", "extraPartPlacements", Name) )
                      __debugbreak();
                  }
                  _RAX = 28 * v77;
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [rax+rsi-1Ch]
                    vmovss  xmm1, dword ptr [rax+rsi-8]
                    vmovaps xmmword ptr [rbp+12C60h+mat.quat], xmm0
                    vmovss  xmm0, dword ptr [rax+rsi-0Ch]
                    vmovss  dword ptr [rbp+12C60h+mat.trans], xmm0
                    vmovss  xmm0, dword ptr [rax+rsi-4]
                  }
                }
                else
                {
                  if ( !part0Placement )
                  {
                    v79 = XModelGetName(model);
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 978, ASSERT_TYPE_ASSERT, "(part0Placement)", "%s\n\tNull part0Placement for XModel '%s'", "part0Placement", v79) )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r12]
                    vmovss  xmm1, dword ptr [r12+14h]
                    vmovaps xmmword ptr [rbp+12C60h+mat.quat], xmm0
                    vmovss  xmm0, dword ptr [r12+10h]
                    vmovss  dword ptr [rbp+12C60h+mat.trans], xmm0
                    vmovss  xmm0, dword ptr [r12+18h]
                  }
                }
                __asm
                {
                  vmovss  dword ptr [rbp+12C60h+mat.trans+8], xmm0
                  vmovss  xmm0, cs:__real@40000000
                  vmovss  [rbp+12C60h+mat.transWeight], xmm0
                  vmovss  dword ptr [rbp+12C60h+mat.trans+4], xmm1
                }
                LocalConvertQuatToSkelMat(&mat, &v194);
                __asm
                {
                  vmovss  xmm5, dword ptr [rbp+12C60h+mat.quat+4]
                  vmovss  xmm10, dword ptr [rbx+0Ch]
                  vmovss  xmm8, dword ptr [rbx]
                  vmovss  xmm7, dword ptr [rbp+12C60h+mat.quat]
                  vmovss  xmm6, dword ptr [rbp+12C60h+mat.quat+0Ch]
                  vmovss  xmm11, dword ptr [rbx+8]
                  vmovss  xmm9, dword ptr [rbx+4]
                  vmovss  xmm4, dword ptr [rbp+12C60h+mat.quat+8]
                  vmulss  xmm1, xmm7, xmm10
                  vmulss  xmm0, xmm6, xmm8
                  vsubss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm5, xmm11
                  vsubss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm9
                  vaddss  xmm12, xmm3, xmm0
                  vmulss  xmm0, xmm6, xmm9
                  vmulss  xmm1, xmm7, xmm11
                  vsubss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm5, xmm10
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm2, xmm5, xmm8
                  vmulss  xmm0, xmm4, xmm8
                  vsubss  xmm13, xmm3, xmm0
                  vmulss  xmm0, xmm6, xmm11
                  vmulss  xmm1, xmm7, xmm9
                  vaddss  xmm1, xmm1, xmm0
                  vsubss  xmm3, xmm2, xmm1
                  vmulss  xmm2, xmm4, xmm10
                  vaddss  xmm14, xmm3, xmm2
                  vmulss  xmm1, xmm7, xmm8
                  vmulss  xmm0, xmm6, xmm10
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm5, xmm9
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm11
                  vaddss  xmm5, xmm3, xmm0
                  vmulss  xmm0, xmm12, xmm12
                  vmulss  xmm1, xmm13, xmm13
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm14, xmm14
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm5, xmm5
                  vaddss  xmm2, xmm3, xmm0
                  vsqrtss xmm1, xmm2, xmm2
                  vxorps  xmm0, xmm0, xmm0
                  vucomiss xmm1, xmm0
                  vmovss  [rbp+12C60h+var_12CA0], xmm12
                  vmovss  [rbp+12C60h+var_12C9C], xmm13
                  vmovss  [rbp+12C60h+var_12C98], xmm14
                  vmovss  [rbp+12C60h+var_12C94], xmm5
                }
                if ( !_ZF )
                {
                  __asm
                  {
                    vmovss  xmm0, cs:__real@3f800000
                    vdivss  xmm0, xmm0, xmm1
                    vmulss  xmm12, xmm0, xmm12
                    vmulss  xmm13, xmm0, xmm13
                    vmulss  xmm14, xmm0, xmm14
                    vmulss  xmm5, xmm0, xmm5
                    vmovss  [rbp+12C60h+var_12CA0], xmm12
                    vmovss  [rbp+12C60h+var_12C9C], xmm13
                    vmovss  [rbp+12C60h+var_12C98], xmm14
                    vmovss  [rbp+12C60h+var_12C94], xmm5
                  }
                }
                __asm
                {
                  vmovss  xmm7, dword ptr [rbp+12C60h+skelMat.origin]
                  vmovss  xmm9, dword ptr [rbp+12C60h+skelMat.origin+4]
                  vmulss  xmm0, xmm7, dword ptr [rbp+12C60h+var_12C90.axis+4]
                  vmovss  xmm6, dword ptr [rbp+12C60h+skelMat.origin+8]
                  vmulss  xmm2, xmm9, dword ptr [rbp+12C60h+var_12C90.axis+14h]
                  vmulss  xmm1, xmm9, dword ptr [rbp+12C60h+var_12C90.axis+10h]
                  vaddss  xmm3, xmm2, xmm0
                  vmulss  xmm0, xmm6, dword ptr [rbp+12C60h+var_12C90.axis+24h]
                  vaddss  xmm2, xmm3, xmm0
                  vaddss  xmm8, xmm2, dword ptr [rbp+12C60h+var_12C90.origin+4]
                  vmulss  xmm2, xmm7, dword ptr [rbp+12C60h+var_12C90.axis+8]
                  vmulss  xmm3, xmm9, dword ptr [rbp+12C60h+var_12C90.axis+18h]
                  vmulss  xmm0, xmm6, dword ptr [rbp+12C60h+var_12C90.axis+28h]
                  vmovss  dword ptr [rdi+4Ch], xmm12
                  vmovss  dword ptr [rdi+50h], xmm13
                  vaddss  xmm4, xmm3, xmm2
                  vaddss  xmm2, xmm4, xmm0
                  vmulss  xmm0, xmm7, dword ptr [rbp+12C60h+var_12C90.axis]
                  vmovss  xmm7, [rbp+12C60h+arg_20]
                  vmovss  dword ptr [rdi+54h], xmm14
                  vmovss  dword ptr [rdi+58h], xmm5
                  vaddss  xmm5, xmm2, dword ptr [rbp+12C60h+var_12C90.origin+8]
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm6, dword ptr [rbp+12C60h+var_12C90.axis+20h]
                  vaddss  xmm2, xmm2, xmm1
                  vaddss  xmm0, xmm2, dword ptr [rbp+12C60h+var_12C90.origin]
                  vmulss  xmm3, xmm0, xmm15
                  vcvttss2si eax, xmm3
                }
                *((_DWORD *)_RDI + 23) = _EAX;
                __asm
                {
                  vmulss  xmm0, xmm8, xmm15
                  vcvttss2si eax, xmm0
                  vmulss  xmm1, xmm5, xmm15
                }
                *((_DWORD *)_RDI + 24) = _EAX;
                __asm { vcvttss2si eax, xmm1 }
                *((_DWORD *)_RDI + 25) = _EAX;
              }
              else
              {
                __asm
                {
                  vmulss  xmm1, xmm15, dword ptr [r13+10h]
                  vcvttss2si eax, xmm1
                  vmulss  xmm1, xmm15, dword ptr [r13+14h]
                }
                *((_DWORD *)_RDI + 23) = _EAX;
                __asm
                {
                  vcvttss2si eax, xmm1
                  vmulss  xmm1, xmm15, dword ptr [r13+18h]
                }
                *((_DWORD *)_RDI + 24) = _EAX;
                __asm { vcvttss2si eax, xmm1 }
                *((_DWORD *)_RDI + 25) = _EAX;
                *((_DWORD *)_RDI + 19) = LODWORD(placement->quat.v[0]);
                *((_DWORD *)_RDI + 20) = LODWORD(placement->quat.v[1]);
                *((_DWORD *)_RDI + 21) = LODWORD(placement->quat.v[2]);
                *((_DWORD *)_RDI + 22) = LODWORD(placement->quat.v[3]);
              }
              *((_WORD *)_RDI + 26) = -1;
              if ( isMotionblurModel )
              {
                _R14 = mbSurfBufSize;
                if ( mbSurfBufSize + 32 > 0x1800 )
                {
                  R_WarnOncePerFrame(R_WARN_MAX_MOTIONBLUR_SURFS_WORK_BUFFER);
                }
                else
                {
                  __asm
                  {
                    vmovss  xmm0, [rbp+12C60h+arg_30]
                    vmovss  dword ptr [rbp+r14+12C60h+mbSurfBuf], xmm0
                  }
                  CopyVec3ToPreciseVec3(&placementPrevFrame->origin, (base_vec3_t<int> *)((char *)&dst + mbSurfBufSize), 0xCu);
                  v199[mbSurfBufSize / 4] = LODWORD(placementPrevFrame->quat.v[0]);
                  v199[mbSurfBufSize / 4 + 1] = LODWORD(placementPrevFrame->quat.v[1]);
                  v199[mbSurfBufSize / 4 + 2] = LODWORD(placementPrevFrame->quat.v[2]);
                  v199[mbSurfBufSize / 4 + 3] = LODWORD(placementPrevFrame->quat.v[3]);
                  *((_WORD *)_RDI + 26) = truncate_cast<unsigned short,unsigned int>(mbSurfBufSize);
                  mbSurfBufSize += 32;
                }
              }
              *((_WORD *)_RDI + 52) = -1;
              _RDI += 108;
              if ( _RDI > v203 )
              {
                v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1033, ASSERT_TYPE_ASSERT, "(surfPos <= surfBuf + sizeof( surfBuf ))", "%s\n\tDOBJ_MAX_SURFS exceeded for '%s'", "surfPos <= surfBuf + sizeof( surfBuf )", model->name);
                goto LABEL_54;
              }
LABEL_56:
              v45 = v182;
              goto LABEL_57;
            }
            _RDI[54] = ModelSubdivLodLevel;
            SurfaceSubdivLevel = R_GetSurfaceSubdivLevel(_R14, ModelSubdivLodLevel);
            SubdivSurfTessFactorsTotalCacheSize = R_GetSubdivSurfTessFactorsTotalCacheSize(_R14, SurfaceSubdivLevel);
            if ( !SubdivSurfTessFactorsTotalCacheSize )
              goto LABEL_83;
            if ( R_AllocSubdivSkinnedCachedVerts(SubdivSurfTessFactorsTotalCacheSize, &cacheOffset) )
            {
              v72 = frontEndDataOut;
              v73 = cacheOffset;
              __asm { vmovss  [rsp+12D60h+scale], xmm7 }
              *((_DWORD *)_RDI + 16) = cacheOffset;
              if ( R_AddRigidSubdivTessFactorsCmd(v72->compute.cmdList, _R14, SurfaceSubdivLevel, v73, -1, placement, scalec, GfxViewDomain_World) )
                goto LABEL_84;
            }
          }
          v45 = v182;
        }
      }
      else
      {
        R_WarnOncePerFrame(R_WARN_MAX_SURF_BUF, "index doesn't index SIMD_VECTOR_COUNT\n\t%i not in [0, %i)");
        v45 = v182;
      }
      *(_DWORD *)_RDI = -3;
      _RDI += 4;
      if ( _RDI > v203 )
      {
        scaleb = XModelGetName(model);
        v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 887, ASSERT_TYPE_ASSERT, "(surfPos <= surfBuf + sizeof( surfBuf ))", "%s\n\tDOBJ_MAX_SURFS exceeded for '%s'", "surfPos <= surfBuf + sizeof( surfBuf )", scaleb);
LABEL_54:
        if ( v46 )
          __debugbreak();
        goto LABEL_56;
      }
LABEL_57:
      v182 = ++v45;
      if ( v45 >= v188 )
      {
        __asm
        {
          vmovaps xmm15, [rsp+12D60h+var_E0]
          vmovaps xmm14, [rsp+12D60h+var_D0]
          vmovaps xmm13, [rsp+12D60h+var_C0]
          vmovaps xmm12, [rsp+12D60h+var_B0]
          vmovaps xmm11, [rsp+12D60h+var_A0]
          vmovaps xmm10, [rsp+12D60h+var_90]
          vmovaps xmm9, [rsp+12D60h+var_80]
          vmovaps xmm8, [rsp+12D60h+var_70]
          vmovaps xmm6, [rsp+12D60h+var_50]
        }
        if ( mbSurfBufSize )
          R_AllocMotionBlurSurfaces(surfBuf, _RDI, totalSurfaceCount, mbSurfBuf, mbSurfBufSize);
        v25 = v186;
        break;
      }
    }
  }
  v56 = truncate_cast<unsigned int,__int64>(_RDI - surfBuf);
  __asm { vmovaps xmm7, [rsp+12D60h+var_60] }
  v58 = v56;
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1042, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  p_surfPos = &frontEndDataOut->surfPos;
  if ( (((_BYTE)frontEndDataOut - 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frontEndDataOut->surfPos) )
    __debugbreak();
  v60 = _InterlockedExchangeAdd(p_surfPos, v58);
  if ( v60 + (unsigned int)v58 <= 0x40000 )
  {
    if ( (v60 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1052, ASSERT_TYPE_ASSERT, "(!(startSurfPos & 3))", (const char *)&queryFormat, "!(startSurfPos & 3)") )
      __debugbreak();
    if ( v60 >> 2 > 0x1000000 )
    {
      LODWORD(scalea) = 0x1000000;
      LODWORD(placementa) = v60 >> 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1054, ASSERT_TYPE_ASSERT, "( startSurfPos >> 2 ) <= ( (1 << 24) )", "startSurfPos >> 2 not in [0, XMODELDRAWINFO_SURF_ID_LIMIT]\n\t%u not in [0, %u]", placementa, scalea) )
        __debugbreak();
    }
    *((_DWORD *)v25 + 1) &= 0xFF000000;
    *((_DWORD *)v25 + 1) |= (v60 >> 2) & 0xFFFFFF;
    if ( (unsigned int)v58 > 0x1000000 )
    {
      LODWORD(scalea) = 0x1000000;
      LODWORD(placementa) = v58;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 1056, ASSERT_TYPE_ASSERT, "( size ) <= ( (1 << 24) )", "size not in [0, XMODELDRAWINFO_SURF_BUF_SIZE_LIMIT]\n\t%u not in [0, %u]", placementa, scalea) )
        __debugbreak();
    }
    *(_DWORD *)v25 &= 0xC000003F;
    *(_DWORD *)v25 |= (v58 & 0xFFFFFF) << 6;
    memcpy_0(&frontEndDataOut->surfsBuffer[v60], surfBuf, v58);
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
  int v7; 
  unsigned int v8; 
  vec4_t *p_color; 
  const vec3_t *v10; 
  int v11; 
  const DObjAnimMat *v12; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  vec3_t end; 
  vec3_t out; 
  vec4_t color; 
  __m256i v32; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 528, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  if ( RotTransArray )
  {
    __asm
    {
      vmovups ymm0, cs:__ymm@00000000000000000000000040c0000000000000000000000000000040c00000
      vmovss  xmm1, cs:__real@40c00000
      vmovss  [rsp+0D8h+var_40], xmm1
      vmovups [rsp+0D8h+var_60], ymm0
    }
    v28 = DObjNumBones(obj);
    v7 = v28;
    DObjTotalNumBones(obj);
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 554, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    v8 = 0;
    if ( v28 > 0 )
    {
      do
      {
        if ( v8 >= 0x100 )
        {
          LODWORD(v27) = 256;
          LODWORD(v26) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v26, v27) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v8 & 0x1F)) & partBits->array[(unsigned __int64)v8 >> 5]) != 0 )
        {
          p_color = &color;
          v10 = (const vec3_t *)&v32;
          v11 = 0;
          v12 = &RotTransArray[v8];
          do
          {
            __asm
            {
              vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
              vmovups xmmword ptr [rsp+0D8h+color], xmm0
            }
            if ( (unsigned int)v11 >= 4 )
            {
              LODWORD(v27) = 4;
              LODWORD(v26) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
            p_color->v[0] = 1.0;
            MatrixTransformVectorQuatTrans(&vec3_origin, v12, &out);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0D8h+out]
              vaddss  xmm1, xmm0, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
              vmovss  xmm2, dword ptr [rsp+0D8h+out+4]
              vaddss  xmm0, xmm2, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+4; GfxScene scene
              vmovss  dword ptr [rsp+0D8h+out], xmm1
              vmovss  xmm1, dword ptr [rsp+0D8h+out+8]
              vaddss  xmm2, xmm1, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+8; GfxScene scene
              vmovss  dword ptr [rsp+0D8h+out+8], xmm2
              vmovss  dword ptr [rsp+0D8h+out+4], xmm0
            }
            MatrixTransformVectorQuatTrans(v10, v12, &end);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0D8h+end]
              vaddss  xmm1, xmm0, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
              vmovss  xmm2, dword ptr [rsp+0D8h+end+4]
              vaddss  xmm0, xmm2, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+4; GfxScene scene
              vmovss  dword ptr [rsp+0D8h+end], xmm1
              vmovss  xmm1, dword ptr [rsp+0D8h+end+8]
              vaddss  xmm2, xmm1, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+8; GfxScene scene
              vmovss  dword ptr [rsp+0D8h+end+8], xmm2
              vmovss  dword ptr [rsp+0D8h+end+4], xmm0
            }
            R_AddDebugLine(&frontEndDataOut->debugGlobals, &out, &end, &color);
            ++v11;
            ++v10;
            p_color = (vec4_t *)((char *)p_color + 4);
          }
          while ( v11 < 3 );
          v7 = v28;
        }
        ++v8;
      }
      while ( (int)v8 < v7 );
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
  DObjPartBits *v3; 
  DObjAnimMat *v5; 
  int v6; 
  unsigned __int64 v7; 
  int v8; 
  int v11; 
  __int64 v12; 
  bool v14; 
  const int *v16; 
  const DObjAnimMat *v17; 
  vec4_t *p_color; 
  __int64 v20; 
  int v22; 
  int v46; 
  __int64 v84; 
  __int64 v85; 
  int v86; 
  __int64 v87; 
  DObjAnimMat *RotTransArray; 
  __int64 v90; 
  vec3_t in; 
  vec3_t end; 
  vec3_t out; 
  __int128 v94; 
  vec4_t color; 
  XBoneInfo *boneInfo[4094]; 

  v3 = partBits;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 466, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  v5 = RotTransArray;
  if ( RotTransArray )
  {
    v6 = DObjNumBones(obj);
    v7 = v6;
    v86 = v6;
    v8 = DObjTotalNumBones(obj);
    if ( v7 > 0xFFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 473, ASSERT_TYPE_ASSERT, "(boneCount <= ( sizeof( *array_counter( boneInfoArray ) ) + 0 ))", (const char *)&queryFormat, "boneCount <= ARRAY_COUNT( boneInfoArray )") )
      __debugbreak();
    DObjGetBoneInfoClient(obj, boneInfo);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
      vmovups xmm1, cs:__xmm@3f8000003f0000003f8000003f800000
      vmovups xmmword ptr [rbp+7FF0h+color], xmm0
      vmovups [rbp+7FF0h+var_8058], xmm1
    }
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 479, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    if ( (v3->array[7] & 2) == 0 )
      v8 = v7;
    v11 = 0;
    v90 = v8;
    if ( v8 > 0 )
    {
      v12 = 0i64;
      __asm
      {
        vmovaps [rsp+80F0h+var_30], xmm6
        vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
      }
      v87 = 0i64;
      do
      {
        v14 = v11 >= (int)v7;
        if ( v11 >= (int)v7 )
          goto LABEL_20;
        if ( (unsigned int)v11 >= 0x100 )
        {
          LODWORD(v85) = 256;
          LODWORD(v84) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v84, v85) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v11 & 0x1F)) & v3->array[(unsigned __int64)(unsigned int)v11 >> 5]) != 0 )
        {
LABEL_20:
          _RSI = boneInfo[v12];
          v16 = boxVerts;
          v17 = &v5[v11];
          p_color = (vec4_t *)&v94;
          if ( !v14 )
            p_color = &color;
          _EDI = 0;
          v20 = 12i64;
          do
          {
            __asm { vmovss  xmm4, dword ptr [rsi+0Ch] }
            v22 = *v16;
            __asm { vxorps  xmm3, xmm4, xmm6 }
            _EAX = *v16 & 1;
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, edi
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi]
              vmovss  dword ptr [rsp+80F0h+in], xmm0
              vmovss  xmm4, dword ptr [rsi+10h]
            }
            LOBYTE(_EAX) = v22;
            _ECX = v22 & 4;
            __asm
            {
              vmovd   xmm1, edi
              vxorps  xmm3, xmm4, xmm6
            }
            _EAX = _EAX & 2;
            __asm
            {
              vmovd   xmm0, eax
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi+4]
              vmovss  dword ptr [rsp+80F0h+in+4], xmm0
              vmovss  xmm4, dword ptr [rsi+14h]
              vmovd   xmm0, ecx
              vmovd   xmm1, edi
              vpcmpeqd xmm2, xmm0, xmm1
              vxorps  xmm3, xmm4, xmm6
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi+8]
              vmovss  dword ptr [rsp+80F0h+in+8], xmm0
            }
            MatrixTransformVectorQuatTrans(&in, v17, &out);
            v46 = v16[1];
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+7FF0h+out]
              vaddss  xmm1, xmm0, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
              vmovss  xmm2, dword ptr [rbp+7FF0h+out+4]
              vaddss  xmm0, xmm2, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+4; GfxScene scene
              vmovss  dword ptr [rbp+7FF0h+out], xmm1
              vmovss  xmm1, dword ptr [rbp+7FF0h+out+8]
              vaddss  xmm2, xmm1, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+8; GfxScene scene
              vmovss  dword ptr [rbp+7FF0h+out+8], xmm2
              vmovss  dword ptr [rbp+7FF0h+out+4], xmm0
              vmovss  xmm4, dword ptr [rsi+0Ch]
              vxorps  xmm3, xmm4, xmm6
            }
            _EAX = v46 & 1;
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, edi
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi]
              vmovss  dword ptr [rsp+80F0h+in], xmm0
              vmovss  xmm4, dword ptr [rsi+10h]
            }
            LOBYTE(_EAX) = v46;
            _ECX = v46 & 4;
            __asm
            {
              vmovd   xmm1, edi
              vxorps  xmm3, xmm4, xmm6
            }
            _EAX = _EAX & 2;
            __asm
            {
              vmovd   xmm0, eax
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi+4]
              vmovss  dword ptr [rsp+80F0h+in+4], xmm0
              vmovss  xmm4, dword ptr [rsi+14h]
              vmovd   xmm0, ecx
              vmovd   xmm1, edi
              vpcmpeqd xmm2, xmm0, xmm1
              vxorps  xmm3, xmm4, xmm6
              vblendvps xmm1, xmm4, xmm3, xmm2
              vaddss  xmm0, xmm1, dword ptr [rsi+8]
              vmovss  dword ptr [rsp+80F0h+in+8], xmm0
            }
            MatrixTransformVectorQuatTrans(&in, v17, &end);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+80F0h+end]
              vaddss  xmm1, xmm0, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
              vmovss  xmm2, dword ptr [rsp+80F0h+end+4]
              vmovss  dword ptr [rsp+80F0h+end], xmm1
              vmovss  xmm1, dword ptr [rbp+7FF0h+end+8]
              vaddss  xmm0, xmm2, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+4; GfxScene scene
              vaddss  xmm2, xmm1, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+8; GfxScene scene
            }
            v16 += 2;
            __asm
            {
              vmovss  dword ptr [rbp+7FF0h+end+8], xmm2
              vmovss  dword ptr [rsp+80F0h+end+4], xmm0
            }
            R_AddDebugLine(&frontEndDataOut->debugGlobals, &out, &end, p_color);
            --v20;
          }
          while ( v20 );
          v12 = v87;
          LODWORD(v7) = v86;
          v3 = partBits;
          v5 = RotTransArray;
        }
        ++v12;
        ++v11;
        v87 = v12;
      }
      while ( v12 < v90 );
      __asm { vmovaps xmm6, [rsp+80F0h+var_30] }
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
  int v10; 
  int v11; 
  const char *BoneName; 
  unsigned __int8 *parentList; 
  signed int v22; 
  unsigned int v23; 
  bool IsBoneDismembered; 
  const vec4_t *v31; 
  const char *v32; 
  __int64 v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  unsigned int NumModels; 
  DObjAnimMat *RotTransArray; 
  vec3_t out; 
  vec3_t end; 
  bitarray_base<bitarray<256> > v43[32]; 
  char dest[256]; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 600, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(obj);
  if ( RotTransArray )
  {
    v36 = DObjNumBones(obj);
    if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 607, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
      __debugbreak();
    NumModels = DObjGetNumModels(obj);
    if ( NumModels )
    {
      v4 = 0;
      v5 = 0;
      __asm { vmovaps [rsp+1E0h+var_30], xmm6 }
      Model = DObjGetModel(obj, 0);
      v7 = 0;
      v37 = XModelNumBones(Model);
      _RDI = v43;
      __asm { vpxor   xmm6, xmm6, xmm6 }
      do
      {
        __asm { vmovdqu xmmword ptr [rdi], xmm6 }
        _RDI += 16;
        ++v7;
      }
      while ( v7 < 2 );
      v10 = v36;
      v11 = 0;
      __asm { vmovaps xmm6, [rsp+1E0h+var_30] }
      if ( v36 > 0 )
      {
        do
        {
          if ( (unsigned int)v11 >= 0x100 )
          {
            LODWORD(v35) = 256;
            LODWORD(v34) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v34, v35) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v11 & 0x1F)) & partBits->array[(unsigned __int64)(unsigned int)v11 >> 5]) != 0 )
          {
            if ( v11 >= v37 )
            {
              if ( ++v4 >= NumModels )
              {
                LODWORD(v35) = NumModels;
                LODWORD(v34) = v4;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 629, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( modelCount )", "modelIndex doesn't index modelCount\n\t%i not in [0, %i)", v34, v35) )
                  __debugbreak();
              }
              Model = DObjGetModel(obj, v4);
              if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 631, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
                __debugbreak();
              v37 += XModelNumBones(Model);
              v5 += XModelNumBones(Model);
            }
            MatrixTransformVectorQuatTrans(&vec3_origin, &RotTransArray[v11], &out);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1E0h+out]
              vaddss  xmm1, xmm0, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
              vmovss  xmm2, dword ptr [rsp+1E0h+out+4]
              vaddss  xmm0, xmm2, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+4; GfxScene scene
              vmovss  dword ptr [rsp+1E0h+out], xmm1
              vmovss  xmm1, dword ptr [rsp+1E0h+out+8]
              vaddss  xmm2, xmm1, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+8; GfxScene scene
              vmovss  dword ptr [rsp+1E0h+out+8], xmm2
              vmovss  dword ptr [rsp+1E0h+out+4], xmm0
            }
            BoneName = DObjGetBoneName(obj, v11);
            Com_sprintf(dest, 0x100ui64, "%i:%s", (unsigned int)v11, BoneName);
            __asm { vmovss  xmm3, cs:fontSize_0; size }
            R_AddDebugString(&frontEndDataOut->debugGlobals, &out, &colorWhite, *(float *)&_XMM3, dest);
            parentList = Model->parentList;
            if ( parentList )
            {
              v22 = v11 - v5 - parentList[v11 - v5 - Model->numRootBones];
              if ( v22 >= 0 && v22 < Model->numBones )
              {
                v23 = v11 - parentList[v11 - v5 - Model->numRootBones];
                if ( v23 >= v36 )
                {
                  LODWORD(v35) = v36;
                  LODWORD(v34) = v11 - parentList[v11 - v5 - Model->numRootBones];
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.cpp", 653, ASSERT_TYPE_ASSERT, "(unsigned)( dobjParentIndex ) < (unsigned)( boneCount )", "dobjParentIndex doesn't index boneCount\n\t%i not in [0, %i)", v34, v35) )
                    __debugbreak();
                }
                if ( bitarray_base<bitarray<256>>::testBit(partBits, v23) )
                {
                  MatrixTransformVectorQuatTrans(&vec3_origin, &RotTransArray[v23], &end);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1E0h+end]
                    vaddss  xmm1, xmm0, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset; GfxScene scene
                    vmovss  xmm2, dword ptr [rsp+1E0h+end+4]
                    vaddss  xmm0, xmm2, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+4; GfxScene scene
                    vmovss  dword ptr [rsp+1E0h+end], xmm1
                    vmovss  xmm1, dword ptr [rsp+1E0h+end+8]
                    vaddss  xmm2, xmm1, dword ptr cs:?scene@@3UGfxScene@@A.def.viewOffset+8; GfxScene scene
                    vmovss  dword ptr [rsp+1E0h+end+8], xmm2
                    vmovss  dword ptr [rsp+1E0h+end+4], xmm0
                  }
                  IsBoneDismembered = FX_Dismemberment_IsBoneDismembered((LocalClientNum_t)frontEndDataOut->localClientNum, obj, v23, 0);
                  v31 = &colorDkOrange;
                  if ( !IsBoneDismembered )
                    v31 = &colorMdCyan;
                  R_AddDebugLine(&frontEndDataOut->debugGlobals, &out, &end, v31);
                  if ( !bitarray_base<bitarray<256>>::testBit(v43, v22) )
                  {
                    bitarray_base<bitarray<256>>::setBit(v43, v22);
                    v32 = DObjGetBoneName(obj, v23);
                    Com_sprintf(dest, 0x100ui64, "%i:%s", v23, v32);
                    __asm { vmovss  xmm3, cs:fontSize_0; size }
                    R_AddDebugString(&frontEndDataOut->debugGlobals, &end, &colorWhite, *(float *)&_XMM3, dest);
                  }
                }
                v10 = v36;
              }
            }
          }
          ++v11;
        }
        while ( v11 < v10 );
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

