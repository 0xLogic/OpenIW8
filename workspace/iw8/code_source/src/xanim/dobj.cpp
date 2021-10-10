/*
==============
DObjGetBoneIndexFromStartModelClient
==============
*/

int __fastcall DObjGetBoneIndexFromStartModelClient(const DObj *obj, scr_string_t name, int startModel, unsigned __int16 *inoutIndex)
{
  return ?DObjGetBoneIndexFromStartModelClient@@YAHPEBUDObj@@W4scr_string_t@@HPEAG@Z(obj, name, startModel, inoutIndex);
}

/*
==============
DObjRealloc
==============
*/

void __fastcall DObjRealloc(DObjModel *dobjModels, unsigned int numModels, XAnimTree *tree, char *buf, unsigned int entnum, XAnimOwner owner)
{
  ?DObjRealloc@@YAXPEAUDObjModel@@IPEAUXAnimTree@@PEADIW4XAnimOwner@@@Z(dobjModels, numModels, tree, buf, entnum, owner);
}

/*
==============
DObjIsValidBoneIndex
==============
*/

bool __fastcall DObjIsValidBoneIndex(const DObj *obj, int boneIndex)
{
  return ?DObjIsValidBoneIndex@@YA_NPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
DObjSetStickerMaterialOverrides
==============
*/

void __fastcall DObjSetStickerMaterialOverrides(DObj *obj, const CharacterModelType *dobjModelTypes, const DObjStickerSlotList *stickerSlots)
{
  ?DObjSetStickerMaterialOverrides@@YAXPEIAUDObj@@PEBW4CharacterModelType@@AEBUDObjStickerSlotList@@@Z(obj, dobjModelTypes, stickerSlots);
}

/*
==============
DObjCreate
==============
*/

void __fastcall DObjCreate(DObjModel *dobjModels, unsigned int numModels, XAnimTree *tree, char *buf, unsigned int entnum, XAnimOwner owner)
{
  ?DObjCreate@@YAXPEAUDObjModel@@IPEAUXAnimTree@@PEADIW4XAnimOwner@@@Z(dobjModels, numModels, tree, buf, entnum, owner);
}

/*
==============
DObjSetCamoMaterialOverride
==============
*/

void __fastcall DObjSetCamoMaterialOverride(DObj *obj, DObjCamoParams *modelCamoParams, unsigned int numModels)
{
  ?DObjSetCamoMaterialOverride@@YAXPEIAUDObj@@PEAUDObjCamoParams@@I@Z(obj, modelCamoParams, numModels);
}

/*
==============
DObjInit
==============
*/

void DObjInit(void)
{
  ?DObjInit@@YAXXZ();
}

/*
==============
DObjUnarchive
==============
*/

void __fastcall DObjUnarchive(DObj *obj, const int handle, const bool requiresIKPrecache, XAnimOwner owner)
{
  ?DObjUnarchive@@YAXPEAUDObj@@H_NW4XAnimOwner@@@Z(obj, handle, requiresIKPrecache, owner);
}

/*
==============
DObjGetBounds
==============
*/

void __fastcall DObjGetBounds(const DObj *obj, Bounds *bounds)
{
  ?DObjGetBounds@@YAXPEBUDObj@@PEAUBounds@@@Z(obj, bounds);
}

/*
==============
DObjSkelReset
==============
*/

void __fastcall DObjSkelReset(const DObj *obj)
{
  ?DObjSkelReset@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetNextModelBoneIndex
==============
*/

unsigned __int8 __fastcall DObjGetNextModelBoneIndex(const DObj *obj, const char *modelName, scr_string_t name, unsigned __int8 lastIndex)
{
  return ?DObjGetNextModelBoneIndex@@YAEPEBUDObj@@PEBDW4scr_string_t@@E@Z(obj, modelName, name, lastIndex);
}

/*
==============
DObjGetModelRootBoneIndex
==============
*/

unsigned __int8 __fastcall DObjGetModelRootBoneIndex(const DObj *obj, int modelIndex)
{
  return ?DObjGetModelRootBoneIndex@@YAEPEBUDObj@@H@Z(obj, modelIndex);
}

/*
==============
DObjGetModelBoneIndex
==============
*/

int __fastcall DObjGetModelBoneIndex(const DObj *obj, const char *modelName, scr_string_t name, unsigned __int8 *index)
{
  return ?DObjGetModelBoneIndex@@YAHPEBUDObj@@PEBDW4scr_string_t@@PEAE@Z(obj, modelName, name, index);
}

/*
==============
DObjHasContents
==============
*/

int __fastcall DObjHasContents(DObj *obj, int contentmask)
{
  return ?DObjHasContents@@YAHPEAUDObj@@H@Z(obj, contentmask);
}

/*
==============
DObjGetBoneNameScriptString
==============
*/

scr_string_t __fastcall DObjGetBoneNameScriptString(const DObj *obj, int boneIndex)
{
  return ?DObjGetBoneNameScriptString@@YA?AW4scr_string_t@@PEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
DObjGetModelParentBoneName
==============
*/

const char *__fastcall DObjGetModelParentBoneName(const DObj *obj, int modelIndex)
{
  return ?DObjGetModelParentBoneName@@YAPEBDPEBUDObj@@H@Z(obj, modelIndex);
}

/*
==============
DObjCloneWithClientFlag
==============
*/

void __fastcall DObjCloneWithClientFlag(const DObj *from, char *buf, bool isTargetClient)
{
  ?DObjCloneWithClientFlag@@YAXPEBUDObj@@PEAD_N@Z(from, buf, isTargetClient);
}

/*
==============
DObjSetCamoMaterialOverride
==============
*/

void __fastcall DObjSetCamoMaterialOverride(DObj *obj, DObjModel *dobjModels, int numModels)
{
  ?DObjSetCamoMaterialOverride@@YAXPEIAUDObj@@PEAUDObjModel@@H@Z(obj, dobjModels, numModels);
}

/*
==============
DObjGetClientBoneOffset
==============
*/

unsigned int __fastcall DObjGetClientBoneOffset(const DObj *obj)
{
  return ?DObjGetClientBoneOffset@@YAIPEBUDObj@@@Z(obj);
}

/*
==============
DObjSetHidePartBits
==============
*/

void __fastcall DObjSetHidePartBits(DObj *obj, const DObjPartBits *partBits)
{
  ?DObjSetHidePartBits@@YAXPEAUDObj@@PEBUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
DObjGetContentsLocal
==============
*/

int __fastcall DObjGetContentsLocal(const DObj *obj)
{
  return ?DObjGetContentsLocal@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetReverseModelBoneIndex
==============
*/

unsigned __int8 __fastcall DObjGetReverseModelBoneIndex(const DObj *obj, const char *modelName, scr_string_t name)
{
  return ?DObjGetReverseModelBoneIndex@@YAEPEBUDObj@@PEBDW4scr_string_t@@@Z(obj, modelName, name);
}

/*
==============
DObjGetNextBoneIndex
==============
*/

unsigned __int8 __fastcall DObjGetNextBoneIndex(const DObj *obj, scr_string_t name, unsigned __int8 lastIndex)
{
  return ?DObjGetNextBoneIndex@@YAEPEBUDObj@@W4scr_string_t@@E@Z(obj, name, lastIndex);
}

/*
==============
DObjGetContents
==============
*/

int __fastcall DObjGetContents(const DObj *obj)
{
  return ?DObjGetContents@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjSkelClear
==============
*/

void __fastcall DObjSkelClear(const DObj *obj)
{
  ?DObjSkelClear@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetStickerMaterialOverrides
==============
*/

void __fastcall DObjGetStickerMaterialOverrides(const DObj *const obj, CharacterModelType *const dobjModelTypes, DObjStickerSlotList *stickerSlots)
{
  ?DObjGetStickerMaterialOverrides@@YAXQEIBUDObj@@QEAW4CharacterModelType@@AEAUDObjStickerSlotList@@@Z(obj, dobjModelTypes, stickerSlots);
}

/*
==============
DObjGetRadius
==============
*/

double __fastcall DObjGetRadius(const DObj *obj)
{
  double result; 

  *(float *)&result = ?DObjGetRadius@@YAMPEBUDObj@@@Z(obj);
  return result;
}

/*
==============
DObjShutdown
==============
*/

void DObjShutdown(void)
{
  ?DObjShutdown@@YAXXZ();
}

/*
==============
DObjSetClientFlag
==============
*/

void __fastcall DObjSetClientFlag(DObj *dobj, bool enable)
{
  ?DObjSetClientFlag@@YAXPEAUDObj@@_N@Z(dobj, enable);
}

/*
==============
DObjDumpInfo
==============
*/

void __fastcall DObjDumpInfo(const DObj *obj)
{
  ?DObjDumpInfo@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjIgnoreCollision
==============
*/

bool __fastcall DObjIgnoreCollision(const DObj *obj, int modelIndex)
{
  return ?DObjIgnoreCollision@@YA_NPEBUDObj@@H@Z(obj, modelIndex);
}

/*
==============
DObjSetLocalBoneIndex
==============
*/

int __fastcall DObjSetLocalBoneIndex(DObj *obj, DObjPartBits *partBits, int boneIndex, const vec3_t *trans, const vec3_t *angles)
{
  return ?DObjSetLocalBoneIndex@@YAHPEAUDObj@@PEAUDObjPartBits@@HAEBTvec3_t@@2@Z(obj, partBits, boneIndex, trans, angles);
}

/*
==============
DObjResetPointers
==============
*/

void __fastcall DObjResetPointers(DObj *obj)
{
  ?DObjResetPointers@@YAXPEAUDObj@@@Z(obj);
}

/*
==============
DObjSetTree
==============
*/

void __fastcall DObjSetTree(DObj *obj, XAnimTree *tree)
{
  ?DObjSetTree@@YAXPEAUDObj@@PEAUXAnimTree@@@Z(obj, tree);
}

/*
==============
DObjGetVisibleBounds
==============
*/

void __fastcall DObjGetVisibleBounds(const DObj *obj, Bounds *bounds)
{
  ?DObjGetVisibleBounds@@YAXPEBUDObj@@PEAUBounds@@@Z(obj, bounds);
}

/*
==============
DObjSkelExistsConst
==============
*/

int __fastcall DObjSkelExistsConst(const DObj *obj, int timeStamp)
{
  return ?DObjSkelExistsConst@@YAHPEBUDObj@@H@Z(obj, timeStamp);
}

/*
==============
DObjGetName
==============
*/

const char *__fastcall DObjGetName(const DObj *obj)
{
  return ?DObjGetName@@YAPEBDPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetDuplicateParts
==============
*/

const DObjDuplicateParts *__fastcall DObjGetDuplicateParts(const DObj *obj)
{
  return ?DObjGetDuplicateParts@@YAPEBUDObjDuplicateParts@@PEBUDObj@@@Z(obj);
}

/*
==============
DObjFreeMaterialData
==============
*/

void __fastcall DObjFreeMaterialData(DObj *obj)
{
  ?DObjFreeMaterialData@@YAXPEIAUDObj@@@Z(obj);
}

/*
==============
DObjGetSkelBoneMatrix
==============
*/

DObjAnimMat *__fastcall DObjGetSkelBoneMatrix(const DObj *obj, int boneIndex)
{
  return ?DObjGetSkelBoneMatrix@@YAPEAUDObjAnimMat@@PEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
DObjGetNumSurfaces
==============
*/

int __fastcall DObjGetNumSurfaces(const DObj *obj, const unsigned __int8 (*lods)[254])
{
  return ?DObjGetNumSurfaces@@YAHPEBUDObj@@AEAY0PO@$$CBE@Z(obj, lods);
}

/*
==============
DObjAllocMaterialData
==============
*/

void __fastcall DObjAllocMaterialData(DObj *obj)
{
  ?DObjAllocMaterialData@@YAXPEIAUDObj@@@Z(obj);
}

/*
==============
DObjGetFirstModel
==============
*/

const XModel *__fastcall DObjGetFirstModel(const DObj *obj)
{
  return ?DObjGetFirstModel@@YAPEBUXModel@@PEBUDObj@@@Z(obj);
}

/*
==============
DObjGetCreateParms
==============
*/

void __fastcall DObjGetCreateParms(const DObj *obj, DObjModel *dobjModels, unsigned __int16 *numModels, XAnimTree **tree, unsigned __int16 *entnum)
{
  ?DObjGetCreateParms@@YAXPEBUDObj@@QEAUDObjModel@@PEAGPEAPEAUXAnimTree@@2@Z(obj, dobjModels, numModels, tree, entnum);
}

/*
==============
DObjGetTree
==============
*/

XAnimTree *__fastcall DObjGetTree(const DObj *obj)
{
  return ?DObjGetTree@@YAPEAUXAnimTree@@PEBUDObj@@@Z(obj);
}

/*
==============
DObjAllocMaterialOverrides
==============
*/

void __fastcall DObjAllocMaterialOverrides(DObj *obj)
{
  ?DObjAllocMaterialOverrides@@YAXPEIAUDObj@@@Z(obj);
}

/*
==============
DObjPhysicsGetBounds
==============
*/

void __fastcall DObjPhysicsGetBounds(const DObj *obj, Bounds *bounds)
{
  ?DObjPhysicsGetBounds@@YAXPEBUDObj@@PEAUBounds@@@Z(obj, bounds);
}

/*
==============
DObjGetBoneIndexFromStartModel
==============
*/

int __fastcall DObjGetBoneIndexFromStartModel(const DObj *obj, scr_string_t name, int startModel, unsigned __int8 *index)
{
  return ?DObjGetBoneIndexFromStartModel@@YAHPEBUDObj@@W4scr_string_t@@HPEAE@Z(obj, name, startModel, index);
}

/*
==============
DoesDObjHaveDistortion
==============
*/

bool __fastcall DoesDObjHaveDistortion(const DObj *obj)
{
  return ?DoesDObjHaveDistortion@@YA_NPEBUDObj@@@Z(obj);
}

/*
==============
DObjFree
==============
*/

void __fastcall DObjFree(DObj *obj)
{
  ?DObjFree@@YAXPEAUDObj@@@Z(obj);
}

/*
==============
DObjGetReverseBoneIndex
==============
*/

unsigned __int8 __fastcall DObjGetReverseBoneIndex(const DObj *obj, scr_string_t name)
{
  return ?DObjGetReverseBoneIndex@@YAEPEBUDObj@@W4scr_string_t@@@Z(obj, name);
}

/*
==============
DObjGetBasePoseMatrix
==============
*/

void __fastcall DObjGetBasePoseMatrix(const DObj *obj, unsigned __int16 boneIndex, DObjAnimMat *outMat)
{
  ?DObjGetBasePoseMatrix@@YAXPEBUDObj@@GPEAUDObjAnimMat@@@Z(obj, boneIndex, outMat);
}

/*
==============
DObjGetHierarchyBits
==============
*/

void __fastcall DObjGetHierarchyBits(const DObj *obj, int boneIndex, DObjPartBits *partBits)
{
  ?DObjGetHierarchyBits@@YAXPEBUDObj@@HPEAUDObjPartBits@@@Z(obj, boneIndex, partBits);
}

/*
==============
DObjGetBoneName
==============
*/

const char *__fastcall DObjGetBoneName(const DObj *obj, int boneIndex)
{
  return ?DObjGetBoneName@@YAPEBDPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
DObjTracelinePartBits
==============
*/

void __fastcall DObjTracelinePartBits(DObj *obj, DObjPartBits *partBits)
{
  ?DObjTracelinePartBits@@YAXPEAUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
DObjGetBoneNameScriptStringAndModelIndex
==============
*/

scr_string_t __fastcall DObjGetBoneNameScriptStringAndModelIndex(const DObj *obj, int boneIndex, int *outModelIndex)
{
  return ?DObjGetBoneNameScriptStringAndModelIndex@@YA?AW4scr_string_t@@PEBUDObj@@HPEAH@Z(obj, boneIndex, outModelIndex);
}

/*
==============
DObjClone
==============
*/

void __fastcall DObjClone(const DObj *from, char *buf)
{
  ?DObjClone@@YAXPEBUDObj@@PEAD@Z(from, buf);
}

/*
==============
DObjFreeMaterialOverrides
==============
*/

void __fastcall DObjFreeMaterialOverrides(DObj *obj)
{
  ?DObjFreeMaterialOverrides@@YAXPEIAUDObj@@@Z(obj);
}

/*
==============
DObjGetModelParentBoneNameScriptString
==============
*/

scr_string_t __fastcall DObjGetModelParentBoneNameScriptString(const DObj *obj, int modelIndex)
{
  return ?DObjGetModelParentBoneNameScriptString@@YA?AW4scr_string_t@@PEBUDObj@@H@Z(obj, modelIndex);
}

/*
==============
DObjGetBoneIndexFromModelRange
==============
*/

int __fastcall DObjGetBoneIndexFromModelRange(const DObj *obj, scr_string_t name, int startModel, int lastModelInclusive, unsigned __int8 *index)
{
  return ?DObjGetBoneIndexFromModelRange@@YAHPEBUDObj@@W4scr_string_t@@HHPEAE@Z(obj, name, startModel, lastModelInclusive, index);
}

/*
==============
DObjGetSurfaceData
==============
*/

void __fastcall DObjGetSurfaceData(const DObj *obj, const vec3_t *origin, unsigned __int8 (*lods)[254], float (*materialLods)[254], const MaterialLodSettings *materialLodSettings)
{
  ?DObjGetSurfaceData@@YAXPEBUDObj@@AEBTvec3_t@@AEAY0PO@EAEAY0PO@MPEBUMaterialLodSettings@@@Z(obj, origin, lods, materialLods, materialLodSettings);
}

/*
==============
DObjHasClientFlag
==============
*/

bool __fastcall DObjHasClientFlag(const DObj *dobj)
{
  return ?DObjHasClientFlag@@YA_NPEBUDObj@@@Z(dobj);
}

/*
==============
DObjArchive
==============
*/

void __fastcall DObjArchive(DObj *obj)
{
  ?DObjArchive@@YAXPEAUDObj@@@Z(obj);
}

/*
==============
DObjTraceline
==============
*/

void __fastcall DObjTraceline(DObj *obj, const vec3_t *start, const vec3_t *end, const unsigned __int8 *priorityMap, DObjTrace_s *trace, bool (__fastcall *shieldTraceCallback)(const DObj *, const XModel *, void *), void *userArgs)
{
  ?DObjTraceline@@YAXPEAUDObj@@AEBTvec3_t@@1PEBEPEAUDObjTrace_s@@P6A_NPEBU1@PEBUXModel@@PEAX@Z6@Z(obj, start, end, priorityMap, trace, shieldTraceCallback, userArgs);
}

/*
==============
DObjAllocMaterialData
==============
*/
void DObjAllocMaterialData(DObj *obj)
{
  DObjMaterialData *v2; 
  unsigned __int64 numModels; 
  unsigned __int8 *v4; 
  DObjMaterialData *materialData; 
  size_t v6; 

  if ( obj->materialData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2906, ASSERT_TYPE_ASSERT, "(obj->materialData == 0)", (const char *)&queryFormat, "obj->materialData == NULL") )
    __debugbreak();
  v2 = (DObjMaterialData *)MT_AlignedAlloc(0x48ui64, 8ui64, 24);
  numModels = obj->numModels;
  obj->materialData = v2;
  v4 = (unsigned __int8 *)MT_Alloc(numModels, 24);
  materialData = obj->materialData;
  v6 = obj->numModels;
  materialData->modelEntityDataOffset = v4;
  memset_0(v4, 0, v6);
  materialData->camoAsset[0] = NULL;
  materialData->camoAsset[1] = NULL;
  materialData->camoAsset[2] = NULL;
  materialData->camoAsset[3] = NULL;
  materialData->camoAsset[4] = NULL;
  materialData->camoAsset[5] = NULL;
  materialData->camoAsset[6] = NULL;
  materialData->camoAsset[7] = NULL;
}

/*
==============
DObjAllocMaterialOverrides
==============
*/
void DObjAllocMaterialOverrides(DObj *obj)
{
  unsigned int NumModels; 
  unsigned int v3; 
  __int64 v4; 
  XModelMaterialOverride *v5; 
  __int64 v6; 

  if ( obj->modelMaterialOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2209, ASSERT_TYPE_ASSERT, "(obj->modelMaterialOverrides == 0)", (const char *)&queryFormat, "obj->modelMaterialOverrides == NULL") )
    __debugbreak();
  NumModels = DObjGetNumModels(obj);
  v3 = NumModels;
  if ( NumModels )
  {
    v4 = NumModels;
    v5 = (XModelMaterialOverride *)MT_AlignedAlloc(16i64 * NumModels, 8ui64, 23);
    obj->modelMaterialOverrides = v5;
    if ( v3 )
    {
      v6 = 0i64;
      do
      {
        v5[v6].materialOverride = NULL;
        v5[v6++].materialOverrideCount = 0;
        --v4;
      }
      while ( v4 );
    }
  }
}

/*
==============
DObjApplyCamoOverride
==============
*/
void DObjApplyCamoOverride(DObj *obj, int modelIndex, const Camo *camoAsset, Material **originalMaterialWhitelistTable, unsigned __int8 originalMaterialWhitelistTableCount)
{
  Material **v5; 
  const Camo *v6; 
  __int64 v7; 
  DObjMaterialData *materialData; 
  const Camo **v10; 
  unsigned int i; 
  const XModel *Model; 
  unsigned __int16 numsurfs; 
  __int64 *materialHandles; 
  bool v15; 
  XModelMaterialOverride *v16; 
  unsigned int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int16 v21; 
  __int64 v22; 
  unsigned int v23; 
  MaterialOverride **v24; 
  unsigned int v25; 
  MaterialOverride *v26; 
  __int64 v27; 
  unsigned int v28; 
  MaterialTextureDef *materialTextureDefClone; 
  MaterialTextureDef *textureDefs; 
  __int64 v31; 
  unsigned __int8 *v32; 
  int v33; 
  unsigned __int8 TextureLayerIndexFromID; 
  unsigned __int8 v35; 
  unsigned int v36; 
  char v37; 
  __int64 v38; 
  unsigned __int8 v39; 
  unsigned __int8 *v40; 
  GfxImage *image; 
  unsigned __int8 v42; 
  XModelMaterialOverride *v43; 
  MaterialOverride **v44; 
  size_t v45; 
  char v46[4]; 
  int v47; 
  unsigned int v48; 
  __int64 v49; 
  const Camo *v50; 
  __int64 *v51; 
  __int64 v52; 
  unsigned __int8 *v53; 
  __int64 v54; 
  Material **v55; 
  XModelMaterialOverride *v56; 
  MaterialOverride *tempMaterialOverride[96]; 

  v55 = originalMaterialWhitelistTable;
  v5 = originalMaterialWhitelistTable;
  v50 = camoAsset;
  v6 = camoAsset;
  v7 = modelIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2411, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->modelMaterialOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2412, ASSERT_TYPE_ASSERT, "(obj->modelMaterialOverrides)", (const char *)&queryFormat, "obj->modelMaterialOverrides") )
    __debugbreak();
  if ( (int)v7 < obj->numModels )
  {
    materialData = obj->materialData;
    if ( !materialData )
    {
      DObjAllocMaterialData(obj);
      materialData = obj->materialData;
    }
    v10 = materialData->camoAsset;
    for ( i = 0; i < 8; ++i )
    {
      if ( !*v10 )
      {
        materialData->camoAsset[i] = v6;
        goto LABEL_19;
      }
      if ( *v10 == v6 )
        goto LABEL_19;
      ++v10;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2443, ASSERT_TYPE_ASSERT, "(camoOverrideCount < GFX_MAX_MODEL_MUTABLE_SHADER_DATA)", (const char *)&queryFormat, "camoOverrideCount < GFX_MAX_MODEL_MUTABLE_SHADER_DATA") )
      __debugbreak();
LABEL_19:
    Model = DObjGetModel(obj, v7);
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2447, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    numsurfs = Model->numsurfs;
    if ( numsurfs )
    {
      materialHandles = (__int64 *)Model->materialHandles;
      v51 = materialHandles;
      if ( !materialHandles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2457, ASSERT_TYPE_ASSERT, "(materialPtrs)", (const char *)&queryFormat, "materialPtrs") )
        __debugbreak();
      v15 = &obj->modelMaterialOverrides[v7] == NULL;
      v16 = &obj->modelMaterialOverrides[v7];
      v56 = v16;
      if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2461, ASSERT_TYPE_ASSERT, "(modelMaterialOverride)", (const char *)&queryFormat, "modelMaterialOverride") )
        __debugbreak();
      v16->materialOverrideCount = 0;
      v17 = DObjCloneOverrideTableAndFreeExistingOverridesOfType(v16, tempMaterialOverride, MATERIAL_OVERRIDETYPE_CAMO);
      v48 = v17;
      LOBYTE(v18) = originalMaterialWhitelistTableCount;
      v19 = numsurfs;
      v52 = numsurfs;
      while ( 1 )
      {
        v20 = *materialHandles;
        v54 = v20;
        v21 = *(_WORD *)(v20 + 26) & 0x30F;
        if ( !v21 )
          goto LABEL_59;
        if ( (_BYTE)v18 )
        {
          v18 = (unsigned __int8)v18;
          v22 = 0i64;
          while ( (Material *)v20 != v5[v22] )
          {
            if ( ++v22 >= v18 )
              goto LABEL_58;
          }
        }
        v23 = 0;
        if ( v17 )
        {
          v24 = tempMaterialOverride;
          do
          {
            if ( (*v24)->overrideType == MATERIAL_OVERRIDETYPE_CAMO && (*v24)->originalMaterial == (Material *)v20 )
              goto LABEL_58;
            ++v23;
            ++v24;
          }
          while ( v23 < v17 );
          if ( v23 >= 0x60 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2337, ASSERT_TYPE_ASSERT, "(overrideIndex < 96)", (const char *)&queryFormat, "overrideIndex < MATERIAL_OVERRIDES_PER_MODEL") )
              __debugbreak();
            goto LABEL_58;
          }
        }
        v25 = *(unsigned __int8 *)(v20 + 28);
        v26 = (MaterialOverride *)MT_AlignedAlloc(0x20ui64, 8ui64, 23);
        v26->materialTextureDefClone = (MaterialTextureDef *)MT_AlignedAlloc(16i64 * v25, 8ui64, 23);
        v27 = (__int64)v50;
        v26->originalMaterial = (Material *)v20;
        v26->overrideMaterial = (Material *)v6;
        v26->overrideType = MATERIAL_OVERRIDETYPE_CAMO;
        v28 = *(_DWORD *)(v27 + 24);
        materialTextureDefClone = v26->materialTextureDefClone;
        textureDefs = v6->textureDefs;
        v31 = v17;
        v32 = *(unsigned __int8 **)(v20 + 72);
        tempMaterialOverride[v31] = v26;
        v33 = 0;
        v47 = 0;
        v46[0] = HIBYTE(v21);
        v46[1] = v21 & 3;
        v46[2] = (v21 >> 2) & 3;
        if ( !*(_BYTE *)(v20 + 28) )
          goto LABEL_57;
        v53 = (unsigned __int8 *)(v32 - (unsigned __int8 *)materialTextureDefClone);
        v49 = (char *)materialTextureDefClone - (char *)v32;
        do
        {
          TextureLayerIndexFromID = Material_GetTextureLayerIndexFromID(*v32);
          v35 = TextureLayerIndexFromID;
          if ( TextureLayerIndexFromID >= 3u )
            goto LABEL_54;
          v36 = 0;
          if ( !v28 )
          {
LABEL_53:
            v33 = v47;
LABEL_54:
            v40 = &v32[v49 + 8];
            image = *(GfxImage **)&v53[(_QWORD)v40];
            goto LABEL_55;
          }
          v37 = v46[TextureLayerIndexFromID];
          while ( 1 )
          {
            v38 = v36;
            v39 = Material_GetTextureLayerIndexFromID(textureDefs[v36].index);
            if ( v37 == v39 && *v32 - v35 == textureDefs[v36].index - v39 )
              break;
            if ( ++v36 >= v28 )
              goto LABEL_53;
          }
          v33 = v47;
          v40 = &v32[v49 + 8];
          image = textureDefs[v38].image;
LABEL_55:
          *(_QWORD *)v40 = image;
          ++v33;
          v42 = *v32;
          v47 = v33;
          v32[v49] = v42;
          v32 += 16;
        }
        while ( v33 < *(unsigned __int8 *)(v54 + 28) );
        materialHandles = v51;
LABEL_57:
        v5 = v55;
        v17 = v48 + 1;
        v19 = v52;
        v6 = v50;
        ++v48;
LABEL_58:
        LOBYTE(v18) = originalMaterialWhitelistTableCount;
LABEL_59:
        ++materialHandles;
        --v19;
        v51 = materialHandles;
        v52 = v19;
        if ( !v19 )
        {
          v43 = v56;
          if ( v17 )
          {
            v56->materialOverrideCount = v17;
            v44 = (MaterialOverride **)MT_AlignedAlloc(8i64 * v17, 8ui64, 23);
            v45 = 8i64 * v43->materialOverrideCount;
            v43->materialOverride = v44;
            memcpy_0(v44, tempMaterialOverride, v45);
          }
          return;
        }
      }
    }
  }
}

/*
==============
DObjApplyReplaceOverride
==============
*/
void DObjApplyReplaceOverride(DObj *obj, int modelIndex, Material *(*getOverrideMaterialFP)(Material *), Material **originalMaterialWhitelistTable, unsigned __int8 originalMaterialWhitelistTableCount)
{
  __int64 v6; 
  Material *(__fastcall *v7)(Material *); 
  const XModel *Model; 
  unsigned __int16 numsurfs; 
  const XModelLodInfo *LodInfo; 
  unsigned __int16 v12; 
  const XModelLodInfo *v13; 
  unsigned __int16 surfIndex; 
  Material **v15; 
  XModelMaterialOverride *v16; 
  unsigned int v17; 
  MaterialOverride *v18; 
  unsigned int v19; 
  unsigned __int8 v20; 
  Material *v21; 
  __int64 v22; 
  unsigned int v23; 
  MaterialOverride **v24; 
  MaterialOverride **v25; 
  size_t v26; 
  __int64 v27; 
  unsigned int textureCount; 
  __int64 v29; 
  MaterialOverride *v30; 
  _BYTE *v31; 
  MaterialTextureDef *textureTable; 
  size_t v33; 
  MaterialTextureDef *materialTextureDefClone; 
  int v35; 
  __int64 v36; 
  unsigned __int8 v37; 
  __int64 v38; 
  __int64 v39; 
  MaterialTextureDef *v40; 
  __int64 v41; 
  __int64 v42; 
  XModelMaterialOverride *v44; 
  MaterialOverride *tempMaterialOverride[96]; 

  v6 = modelIndex;
  v7 = getOverrideMaterialFP;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2563, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->modelMaterialOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2564, ASSERT_TYPE_ASSERT, "(obj->modelMaterialOverrides)", (const char *)&queryFormat, "obj->modelMaterialOverrides") )
    __debugbreak();
  if ( v7 != Material_GetRefractionOverrideMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2567, ASSERT_TYPE_ASSERT, "(getOverrideMaterialFP == Material_GetRefractionOverrideMaterial)", (const char *)&queryFormat, "getOverrideMaterialFP == Material_GetRefractionOverrideMaterial") )
    __debugbreak();
  if ( (int)v6 < obj->numModels )
  {
    if ( !obj->materialData )
      DObjAllocMaterialData(obj);
    Model = DObjGetModel(obj, v6);
    if ( !Model )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2582, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 247, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
    }
    numsurfs = XModelGetLodInfo(Model, 0)->numsurfs;
    if ( numsurfs )
    {
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 257, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      LodInfo = XModelGetLodInfo(Model, 0);
      v12 = Model->numsurfs;
      v13 = LodInfo;
      surfIndex = LodInfo->surfIndex;
      if ( surfIndex >= v12 )
      {
        LODWORD(v41) = surfIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 261, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->surfIndex ) < (unsigned)( model->numsurfs )", "lodInfo->surfIndex doesn't index model->numsurfs\n\t%i not in [0, %i)", v41, v12) )
          __debugbreak();
      }
      v15 = &Model->materialHandles[v13->surfIndex];
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2591, ASSERT_TYPE_ASSERT, "(materialPtrs)", (const char *)&queryFormat, "materialPtrs") )
        __debugbreak();
      v16 = &obj->modelMaterialOverrides[v6];
      v44 = v16;
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2595, ASSERT_TYPE_ASSERT, "(modelMaterialOverride)", (const char *)&queryFormat, "modelMaterialOverride") )
        __debugbreak();
      v17 = DObjCloneOverrideTableAndFreeExistingOverridesOfType(v16, tempMaterialOverride, MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE);
      v18 = NULL;
      v19 = v17;
      v20 = originalMaterialWhitelistTableCount;
      v42 = numsurfs;
      do
      {
        v21 = *v15;
        if ( v20 )
        {
          v22 = 0i64;
          while ( v21 != originalMaterialWhitelistTable[v22] )
          {
            if ( ++v22 >= v20 )
              goto LABEL_46;
          }
        }
        v23 = 0;
        if ( v19 )
        {
          v24 = tempMaterialOverride;
          while ( 1 )
          {
            v18 = *v24;
            if ( (*v24)->overrideType == MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE && v18->originalMaterial == v21 )
              break;
            ++v23;
            ++v24;
            if ( v23 >= v19 )
            {
              if ( v23 < 0x60 )
                goto LABEL_50;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2337, ASSERT_TYPE_ASSERT, "(overrideIndex < 96)", (const char *)&queryFormat, "overrideIndex < MATERIAL_OVERRIDES_PER_MODEL") )
                __debugbreak();
              break;
            }
          }
          v18 = NULL;
        }
        else
        {
LABEL_50:
          v27 = ((__int64 (__fastcall *)(Material *, MaterialOverride *, const char *))v7)(*v15, v18, "overrideIndex < MATERIAL_OVERRIDES_PER_MODEL");
          textureCount = v21->textureCount;
          v29 = v27;
          v30 = (MaterialOverride *)MT_AlignedAlloc(0x20ui64, 8ui64, 23);
          v30->materialTextureDefClone = (MaterialTextureDef *)MT_AlignedAlloc(16i64 * textureCount, 8ui64, 23);
          v30->originalMaterial = v21;
          v30->overrideMaterial = (Material *)v29;
          v30->overrideType = MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE;
          v31 = *(_BYTE **)(v29 + 72);
          textureTable = v21->textureTable;
          v33 = 16i64 * *(unsigned __int8 *)(v29 + 28);
          tempMaterialOverride[v19] = v30;
          materialTextureDefClone = v30->materialTextureDefClone;
          memcpy_0(materialTextureDefClone, v31, v33);
          v18 = NULL;
          v35 = 0;
          if ( *(_BYTE *)(v29 + 28) )
          {
            v36 = (char *)materialTextureDefClone - v31;
            do
            {
              v37 = v21->textureCount;
              v38 = 0i64;
              if ( v37 )
              {
                v39 = v37;
                v40 = textureTable;
                while ( v40->index != *v31 )
                {
                  ++v38;
                  ++v40;
                  if ( v38 >= v39 )
                    goto LABEL_58;
                }
                *(_QWORD *)&v31[v36 + 8] = textureTable[v38].image;
LABEL_58:
                v18 = NULL;
              }
              ++v35;
              v31 += 16;
            }
            while ( v35 < *(unsigned __int8 *)(v29 + 28) );
          }
          v7 = getOverrideMaterialFP;
          ++v19;
        }
LABEL_46:
        v20 = originalMaterialWhitelistTableCount;
        ++v15;
        --v42;
      }
      while ( v42 );
      if ( v19 )
      {
        v44->materialOverrideCount = v19;
        v25 = (MaterialOverride **)MT_AlignedAlloc(8i64 * v19, 8ui64, 23);
        v26 = 8i64 * v44->materialOverrideCount;
        v44->materialOverride = v25;
        memcpy_0(v25, tempMaterialOverride, v26);
      }
    }
  }
}

/*
==============
DObjApplyStickerOverride
==============
*/
void DObjApplyStickerOverride(DObj *obj, int modelIndex, Material **overrideMaterials, Material **originalMaterialWhitelistTable, unsigned __int8 originalMaterialWhitelistTableCount)
{
  __int64 v6; 
  const XModel *Model; 
  XModelDecalVolumesInfo *decalVolumesInfo; 
  XModelMaterialOverride *v10; 
  unsigned int v11; 
  unsigned int i; 
  Material *material; 
  __int64 v14; 
  unsigned int v15; 
  MaterialOverride **v16; 
  MaterialOverride *v17; 
  __int64 v18; 
  MaterialOverride **v19; 
  size_t v20; 
  MaterialOverride *tempMaterialOverride[96]; 

  v6 = modelIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2748, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->modelMaterialOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2749, ASSERT_TYPE_ASSERT, "(obj->modelMaterialOverrides)", (const char *)&queryFormat, "obj->modelMaterialOverrides") )
    __debugbreak();
  if ( (int)v6 < obj->numModels )
  {
    if ( !obj->materialData )
      DObjAllocMaterialData(obj);
    Model = DObjGetModel(obj, v6);
    if ( !Model )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2764, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 247, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
    }
    if ( XModelGetLodInfo(Model, 0)->numsurfs )
    {
      decalVolumesInfo = Model->decalVolumesInfo;
      if ( decalVolumesInfo )
      {
        v10 = &obj->modelMaterialOverrides[v6];
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2775, ASSERT_TYPE_ASSERT, "(modelMaterialOverride)", (const char *)&queryFormat, "modelMaterialOverride") )
          __debugbreak();
        v11 = 0;
        for ( i = DObjCloneOverrideTableAndFreeExistingOverridesOfType(v10, tempMaterialOverride, MATERIAL_OVERRIDETYPE_STICKER_REPLACE); v11 < decalVolumesInfo->numDecalVolumes; ++v11 )
        {
          material = decalVolumesInfo->decalVolumes[v11].material;
          if ( originalMaterialWhitelistTableCount )
          {
            v14 = 0i64;
            while ( material != originalMaterialWhitelistTable[v14] )
            {
              if ( ++v14 >= originalMaterialWhitelistTableCount )
                goto LABEL_39;
            }
            if ( v14 != -1 )
            {
              if ( i >= 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2793, ASSERT_TYPE_ASSERT, "(overrideIndex < 96)", (const char *)&queryFormat, "overrideIndex < MATERIAL_OVERRIDES_PER_MODEL") )
                __debugbreak();
              v15 = 0;
              if ( i )
              {
                v16 = tempMaterialOverride;
                while ( (*v16)->overrideType != MATERIAL_OVERRIDETYPE_STICKER_REPLACE || (*v16)->originalMaterial != material )
                {
                  ++v15;
                  ++v16;
                  if ( v15 >= i )
                  {
                    if ( v15 < 0x60 )
                      goto LABEL_38;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2337, ASSERT_TYPE_ASSERT, "(overrideIndex < 96)", (const char *)&queryFormat, "overrideIndex < MATERIAL_OVERRIDES_PER_MODEL") )
                      __debugbreak();
                    break;
                  }
                }
              }
              else
              {
LABEL_38:
                v17 = (MaterialOverride *)MT_AlignedAlloc(0x20ui64, 8ui64, 23);
                v18 = i++;
                v17->materialTextureDefClone = NULL;
                v17->originalMaterial = material;
                tempMaterialOverride[v18] = v17;
                v17->overrideMaterial = overrideMaterials[v14];
                v17->overrideType = MATERIAL_OVERRIDETYPE_STICKER_REPLACE;
              }
            }
          }
LABEL_39:
          ;
        }
        if ( i )
        {
          v10->materialOverrideCount = i;
          v19 = (MaterialOverride **)MT_AlignedAlloc(8i64 * i, 8ui64, 23);
          v20 = 8i64 * v10->materialOverrideCount;
          v10->materialOverride = v19;
          memcpy_0(v19, tempMaterialOverride, v20);
        }
      }
    }
  }
}

/*
==============
DObjArchive
==============
*/
void DObjArchive(DObj *obj)
{
  unsigned __int16 v2; 
  char *v3; 
  unsigned int v4; 
  char *v5; 
  bool v6; 
  double v7; 
  int parentSlot; 
  vec4_t quat; 
  char *v10; 
  unsigned __int64 numModels; 
  char *v12; 
  void *v13; 
  DObjMaterialData *materialData; 
  __m256i v15; 
  __m256i v16; 
  __int128 v17; 
  double v18; 
  __int64 v19; 
  __int64 v20; 
  _BYTE entnum[64]; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v22; 
  XModelMaterialOverride *modelMaterialOverrides[2]; 
  double v24; 
  DObjModel dobjModels[254]; 

  DObjGetCreateParms(obj, dobjModels, (unsigned __int16 *)&entnum[52], (XAnimTree **)&entnum[56], (unsigned __int16 *)&entnum[54]);
  *(_DWORD *)&entnum[16] = obj->locked;
  *(_QWORD *)&entnum[8] = obj->models;
  memset(&entnum[20], 0, 32);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v22, &obj->hidePartBits);
  v2 = *(_WORD *)&entnum[52];
  v3 = (char *)MT_AlignedAlloc(36i64 * *(unsigned __int16 *)&entnum[52], 4ui64, 13);
  LOBYTE(modelMaterialOverrides[0]) = obj->flags;
  v4 = 0;
  BYTE1(modelMaterialOverrides[0]) = obj->validation;
  for ( *(_QWORD *)entnum = v3; v4 < v2; ++v4 )
  {
    v5 = &v3[36 * v4];
    v6 = !dobjModels[v4].ignoreCollision;
    v7 = *(double *)dobjModels[v4].offsets.v;
    *(_DWORD *)v5 = dobjModels[v4].boneName;
    parentSlot = dobjModels[v4].parentSlot;
    *((double *)v5 + 1) = v7;
    quat = dobjModels[v4].quat;
    *((_DWORD *)v5 + 1) = parentSlot;
    *((_DWORD *)v5 + 4) = LODWORD(dobjModels[v4].offsets.v[2]);
    *(vec4_t *)(v5 + 20) = quat;
    if ( !v6 )
    {
      if ( v4 >= 0x100 )
      {
        LODWORD(v20) = 256;
        LODWORD(v19) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v19, v20) )
          __debugbreak();
      }
      *(_DWORD *)&entnum[4 * ((unsigned __int64)v4 >> 5) + 20] |= 0x80000000 >> (v4 & 0x1F);
      v2 = *(_WORD *)&entnum[52];
      v3 = *(char **)entnum;
    }
  }
  DObjArchiveMaterialOverrides(obj, &modelMaterialOverrides[1]);
  if ( obj->materialData )
  {
    v10 = (char *)MT_AlignedAlloc(0x48ui64, 8ui64, 24);
    numModels = obj->numModels;
    v12 = v10;
    v24 = *(double *)&v10;
    v13 = MT_Alloc(numModels, 24);
    *(_QWORD *)v12 = v13;
    memcpy_0(v13, obj->materialData->modelEntityDataOffset, obj->numModels);
    materialData = obj->materialData;
    *(__m256i *)(v12 + 8) = *(__m256i *)materialData->camoAsset;
    *(__m256i *)(v12 + 40) = *(__m256i *)&materialData->camoAsset[4];
  }
  else
  {
    v24 = 0.0;
  }
  if ( !obj->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2002, ASSERT_TYPE_ASSERT, "(obj->models)", (const char *)&queryFormat, "obj->models") )
    __debugbreak();
  obj->models = NULL;
  Profile_Begin(455);
  if ( obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1831, ASSERT_TYPE_ASSERT, "(obj->locked == qfalse)", (const char *)&queryFormat, "obj->locked == qfalse") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_free_submitted, "dobj_assert_on_free_submitted") && (obj->validation & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1836, ASSERT_TYPE_ASSERT, "(!(obj->validation & 0x01))", (const char *)&queryFormat, "!(obj->validation & DOBJVALIDATION_SUBMITTED)") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_free_submitted_dump, "dobj_assert_on_free_submitted_dump") && (obj->validation & 1) != 0 )
    CrashReport_TriggerNow();
  DObjFree_Internal(obj);
  Profile_EndInternal(NULL);
  v15 = *(__m256i *)&entnum[32];
  *(__m256i *)&obj->tree = *(__m256i *)entnum;
  v16 = (__m256i)v22;
  *(__m256i *)((char *)&obj->ignoreCollision + 12) = v15;
  v17 = *(_OWORD *)modelMaterialOverrides;
  *(__m256i *)((char *)&obj->skel.partBits.anim + 8) = v16;
  v18 = v24;
  *(_OWORD *)&obj->skel.partBits.control.array[2] = v17;
  *(double *)&obj->skel.partBits.control.array[6] = v18;
}

/*
==============
DObjArchiveMaterialOverrides
==============
*/
void DObjArchiveMaterialOverrides(const DObj *obj, XModelMaterialOverride **modelMaterialOverrides)
{
  XModelMaterialOverride **v2; 
  const DObj *v3; 
  unsigned int NumModels; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int *v8; 
  char *v9; 
  unsigned int v10; 
  void *v11; 
  void *v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __m256i *v16; 
  char *v17; 
  char *v18; 
  char *v19; 
  __int64 v22; 
  __int64 v23; 

  v2 = modelMaterialOverrides;
  v3 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2261, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2262, ASSERT_TYPE_ASSERT, "(modelMaterialOverrides != nullptr)", (const char *)&queryFormat, "modelMaterialOverrides != nullptr") )
    __debugbreak();
  NumModels = DObjGetNumModels(v3);
  v5 = NumModels;
  if ( v3->modelMaterialOverrides && NumModels )
  {
    v23 = NumModels;
    v6 = NumModels;
    *v2 = (XModelMaterialOverride *)MT_AlignedAlloc(16i64 * NumModels, 8ui64, 23);
    if ( v5 )
    {
      v7 = 0i64;
      v22 = 0i64;
      do
      {
        v8 = (unsigned int *)((char *)&v3->modelMaterialOverrides->materialOverrideCount + v7);
        v9 = (char *)*v2 + v7;
        *(_DWORD *)v9 = *v8;
        if ( *v8 )
        {
          *((_QWORD *)v9 + 1) = MT_AlignedAlloc(8i64 * *v8, 8ui64, 23);
          v10 = 0;
          if ( *v8 )
          {
            do
            {
              v11 = MT_Alloc(0x28ui64, 23);
              v12 = v11;
              if ( v11 )
              {
                v13 = ((unsigned __int64)v11 + 8) & 0xFFFFFFFFFFFFFFF8ui64;
                if ( v13 <= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 69, ASSERT_TYPE_ASSERT, "( retPtr ) > ( bytePtr )", "%s > %s\n\t%p, %p", "retPtr", "bytePtr", (const void *)(((unsigned __int64)v11 + 8) & 0xFFFFFFFFFFFFFFF8ui64), v11) )
                  __debugbreak();
                if ( v13 - (unsigned __int64)v12 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 70, ASSERT_TYPE_ASSERT, "( static_cast<size_t>( retPtr - bytePtr ) ) <= ( alignment )", "%s <= %s\n\t%llu, %llu", "static_cast<size_t>( retPtr - bytePtr )", "alignment", v13 - (_QWORD)v12, 8i64) )
                  __debugbreak();
                *(_BYTE *)(v13 - 1) = v13 - (_BYTE)v12;
              }
              else
              {
                v13 = 0i64;
              }
              v14 = 8i64 * v10;
              *(_QWORD *)(v14 + *((_QWORD *)v9 + 1)) = v13;
              v15 = *(_QWORD *)(v14 + *((_QWORD *)v8 + 1));
              v16 = *(__m256i **)(v14 + *((_QWORD *)v9 + 1));
              *v16 = *(__m256i *)v15;
              if ( *(_DWORD *)(v15 + 24) == 3 )
              {
                v16->m256i_i64[2] = 0i64;
              }
              else
              {
                v17 = (char *)MT_Alloc(16i64 * *(unsigned __int8 *)(*(_QWORD *)v15 + 28i64) + 8, 23);
                v18 = v17;
                if ( v17 )
                {
                  v19 = (char *)((unsigned __int64)(v17 + 8) & 0xFFFFFFFFFFFFFFF8ui64);
                  if ( v19 <= v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 69, ASSERT_TYPE_ASSERT, "( retPtr ) > ( bytePtr )", "%s > %s\n\t%p, %p", "retPtr", "bytePtr", (const void *)((unsigned __int64)(v17 + 8) & 0xFFFFFFFFFFFFFFF8ui64), v17) )
                    __debugbreak();
                  if ( (unsigned __int64)(v19 - v18) > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 70, ASSERT_TYPE_ASSERT, "( static_cast<size_t>( retPtr - bytePtr ) ) <= ( alignment )", "%s <= %s\n\t%llu, %llu", "static_cast<size_t>( retPtr - bytePtr )", "alignment", v19 - v18, 8i64) )
                    __debugbreak();
                  *(v19 - 1) = (_BYTE)v19 - (_BYTE)v18;
                }
                else
                {
                  v19 = NULL;
                }
                v16->m256i_i64[2] = (__int64)v19;
                memcpy_0(v19, *(const void **)(v15 + 16), 16i64 * *(unsigned __int8 *)(*(_QWORD *)v15 + 28i64));
              }
              ++v10;
            }
            while ( v10 < *v8 );
            v7 = v22;
            v6 = v23;
            v2 = modelMaterialOverrides;
            v3 = obj;
          }
        }
        else
        {
          *((_QWORD *)v9 + 1) = 0i64;
        }
        v7 += 16i64;
        --v6;
        v22 = v7;
        v23 = v6;
      }
      while ( v6 );
    }
  }
  else
  {
    *v2 = NULL;
  }
}

/*
==============
DObjClone
==============
*/
void DObjClone(const DObj *from, char *buf)
{
  DObjCloneWithClientFlag(from, buf, 0);
}

/*
==============
DObjCloneDuplicatePartsServerToClient
==============
*/
void DObjCloneDuplicatePartsServerToClient(const DObj *from, DObj *to)
{
  bool v2; 
  const DObjDuplicateParts *v5; 
  DObjBoneNameToBoneIndexMap_t<768> *v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  DObjDuplicatePair *pairs; 
  int v11; 
  int v12; 
  __int64 v13; 
  const XModel *v14; 
  __int64 v15; 
  unsigned __int16 child; 
  int v17; 
  DObjDuplicatePair v18; 
  __int64 v19; 
  int v20; 
  const scr_string_t *v21; 
  scr_string_t duplicateParts; 
  int inoutNumDuplicateParts; 
  int v24; 
  int numBones; 
  int numModels; 
  DObj *obj; 
  DObjDuplicateParts v28; 
  DObjBoneNameToBoneIndexMap_t<768> v29; 
  int modelClientBoneOffsets[512]; 

  v2 = (to->flags & 8) == 0;
  obj = to;
  if ( v2 || !to->numClientBones )
  {
    duplicateParts = from->duplicateParts;
    if ( duplicateParts && duplicateParts != g_empty )
      SL_AddRefToString(duplicateParts);
    to->duplicateParts = duplicateParts;
  }
  else
  {
    if ( !from->duplicateParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1080, ASSERT_TYPE_ASSERT, "(from->duplicateParts != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "from->duplicateParts != NULL_SCR_STRING") )
      __debugbreak();
    v5 = DObjGetDuplicateParts(from);
    v6 = &v29;
    v7 = 1543i64;
    do
    {
      ntl::pair<enum scr_string_t,DObjBoneNameToBoneIndexMap_t<768>::ModelIndexAndClientBoneIndex>::pair<enum scr_string_t,DObjBoneNameToBoneIndexMap_t<768>::ModelIndexAndClientBoneIndex>(v6->m_data);
      v6 = (DObjBoneNameToBoneIndexMap_t<768> *)((char *)v6 + 8);
      --v7;
    }
    while ( v7 );
    v29.m_initialized = 1;
    memset_0(&v29, 0, 0x3038ui64);
    v8 = 0;
    v29.m_numEntries = 0i64;
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v28.partBits, &v5->partBits);
    v9 = DObjNumBones(from);
    v24 = v9;
    pairs = v5->pairs;
    numModels = from->numModels;
    v11 = 0;
    inoutNumDuplicateParts = 0;
    v12 = 0;
    if ( numModels )
    {
      v13 = 0i64;
      do
      {
        v14 = from->models[v13];
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        v15 = v14->numBones;
        numBones = v14->numClientBones;
        child = pairs->child;
        modelClientBoneOffsets[v13] = v9;
        v17 = v15 + v8;
        if ( child )
        {
          do
          {
            if ( child - 1 >= v17 )
              break;
            v18 = *pairs++;
            v19 = v11++;
            v28.pairs[v19] = v18;
            child = pairs->child;
          }
          while ( pairs->child );
          inoutNumDuplicateParts = v11;
        }
        if ( v12 <= 0 )
        {
          v20 = v24 | 0x8000;
          v21 = &v14->boneNames[v15];
          if ( (v24 < 0 || (unsigned int)v20 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v24 | 0x8000u, "signed", v20) )
            __debugbreak();
          if ( v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v12, "signed", v13) )
            __debugbreak();
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_768___(v12, v20, v21, numBones, &v29);
        }
        else
        {
          DObjFindAndAppendDuplicateClientBones(from->models, v12, modelClientBoneOffsets, &v29, &v28, &inoutNumDuplicateParts);
          v11 = inoutNumDuplicateParts;
        }
        v8 = v17;
        v9 = numBones + v24;
        ++v12;
        v24 += numBones;
        ++v13;
      }
      while ( v12 < numModels );
    }
    DObjSetDuplicateParts(obj, &v28, v11);
  }
}

/*
==============
DObjCloneOverrideTableAndFreeExistingOverridesOfType
==============
*/
__int64 DObjCloneOverrideTableAndFreeExistingOverridesOfType(XModelMaterialOverride *modelMaterialOverride, MaterialOverride **tempMaterialOverride, MaterialOverrideType overrideType)
{
  unsigned int materialOverrideCount; 
  unsigned int v7; 
  unsigned int i; 
  __int64 v9; 
  MaterialOverride *v10; 
  __int64 v11; 

  if ( modelMaterialOverride->materialOverrideCount > 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2377, ASSERT_TYPE_ASSERT, "(modelMaterialOverride->materialOverrideCount <= 96)", (const char *)&queryFormat, "modelMaterialOverride->materialOverrideCount <= MATERIAL_OVERRIDES_PER_MODEL") )
    __debugbreak();
  materialOverrideCount = modelMaterialOverride->materialOverrideCount;
  v7 = 0;
  for ( i = 0; i < modelMaterialOverride->materialOverrideCount; ++i )
  {
    v9 = i;
    if ( !modelMaterialOverride->materialOverride[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2384, ASSERT_TYPE_ASSERT, "(modelMaterialOverride->materialOverride[overrideIndex])", (const char *)&queryFormat, "modelMaterialOverride->materialOverride[overrideIndex]") )
      __debugbreak();
    v10 = modelMaterialOverride->materialOverride[v9];
    if ( v10->overrideType == overrideType )
    {
      DObjFreeMaterialOverrideEntry(v10);
    }
    else
    {
      v11 = v7++;
      tempMaterialOverride[v11] = v10;
      if ( v7 > 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2392, ASSERT_TYPE_ASSERT, "(tempTableSize <= 96)", (const char *)&queryFormat, "tempTableSize <= MATERIAL_OVERRIDES_PER_MODEL") )
        __debugbreak();
    }
    materialOverrideCount = modelMaterialOverride->materialOverrideCount;
  }
  if ( materialOverrideCount )
  {
    MT_AlignedFree(modelMaterialOverride->materialOverride, 8i64 * materialOverrideCount, 8ui64);
    modelMaterialOverride->materialOverride = NULL;
    modelMaterialOverride->materialOverrideCount = 0;
  }
  return v7;
}

/*
==============
DObjCloneWithClientFlag
==============
*/
void DObjCloneWithClientFlag(const DObj *from, char *buf, bool isTargetClient)
{
  char v6; 
  char v7; 
  char v8; 
  scr_string_t duplicateParts; 
  void *v10; 
  DObjMaterialData *materialData; 
  __int64 v12; 
  XModelMaterialOverride *modelMaterialOverrides; 
  __int64 v14; 
  void *v15; 
  void *v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  MaterialOverride *v19; 
  MaterialOverrideType overrideType; 
  _QWORD *v21; 
  void *v22; 
  __int64 v23; 
  Material *originalMaterial; 
  int v25; 
  unsigned __int8 textureCount; 

  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1620, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  *(_QWORD *)buf = from->tree;
  *((_DWORD *)buf + 2) = from->duplicateParts;
  *((_WORD *)buf + 6) = from->entnum;
  buf[14] = from->duplicatePartsSize;
  buf[15] = from->numModels;
  buf[16] = from->numBones;
  buf[17] = from->flags;
  *((_WORD *)buf + 9) = from->numClientBones;
  *(DObjModelBits *)(buf + 20) = from->ignoreCollision;
  *((_DWORD *)buf + 13) = from->locked;
  *(DObjPartBits *)(buf + 56) = from->skel.partBits.anim;
  *(DObjPartBits *)(buf + 88) = from->skel.partBits.control;
  *(DObjPartBits *)(buf + 120) = from->skel.partBits.worldCtrl;
  *(DObjPartBits *)(buf + 152) = from->skel.partBits.skel;
  *(_OWORD *)(buf + 184) = *(_OWORD *)&from->skel.partBits.animCalculated;
  *((_DWORD *)buf + 50) = LODWORD(from->radius);
  *((_DWORD *)buf + 51) = from->proceduralBonesHandle.m_value;
  *(DObjPartBits *)(buf + 208) = from->hidePartBits;
  *((_QWORD *)buf + 30) = from->models;
  *((_QWORD *)buf + 31) = from->offsets;
  *((_QWORD *)buf + 32) = from->quats;
  *((_QWORD *)buf + 33) = from->parentSlots;
  *((_QWORD *)buf + 34) = from->modelMaterialOverrides;
  *((_QWORD *)buf + 35) = from->materialData;
  *((_WORD *)buf + 144) = from->blendShapeWeightCount;
  *((_WORD *)buf + 145) = from->blendShapeTargetCount;
  buf[292] = from->validation;
  *((_QWORD *)buf + 37) = from->lastGpuLightGridRequest;
  *(DObjModelBits *)(buf + 304) = from->modelHasBadRootBoneMeld;
  *((_DWORD *)buf + 13) = 0;
  memset_0(buf + 56, 0, 0x90ui64);
  DObjClearSkelRecord((const DObj *)buf);
  v6 = buf[17];
  v7 = v6 | 8;
  v8 = v6 & 0xF7;
  if ( !isTargetClient )
    v7 = v8;
  buf[17] = v7;
  *((_DWORD *)buf + 76) = from->modelHasBadRootBoneMeld.array[0];
  *((_DWORD *)buf + 77) = from->modelHasBadRootBoneMeld.array[1];
  *((_DWORD *)buf + 78) = from->modelHasBadRootBoneMeld.array[2];
  *((_DWORD *)buf + 79) = from->modelHasBadRootBoneMeld.array[3];
  *((_DWORD *)buf + 80) = from->modelHasBadRootBoneMeld.array[4];
  *((_DWORD *)buf + 81) = from->modelHasBadRootBoneMeld.array[5];
  *((_DWORD *)buf + 82) = from->modelHasBadRootBoneMeld.array[6];
  *((_DWORD *)buf + 83) = from->modelHasBadRootBoneMeld.array[7];
  if ( (from->flags & 8) != 0 || (v7 & 8) == 0 )
  {
    duplicateParts = from->duplicateParts;
    *((_DWORD *)buf + 2) = duplicateParts;
    if ( duplicateParts && duplicateParts != g_empty )
      SL_AddRefToString(duplicateParts);
  }
  else
  {
    DObjCloneDuplicatePartsServerToClient(from, (DObj *)buf);
  }
  *(_QWORD *)buf = 0i64;
  *((_QWORD *)buf + 33) = MT_AlignedAlloc(4i64 * from->numModels, 4ui64, 25);
  *((_QWORD *)buf + 31) = MT_AlignedAlloc(12i64 * from->numModels, 4ui64, 25);
  *((_QWORD *)buf + 32) = MT_AlignedAlloc(16i64 * from->numModels, 4ui64, 25);
  *((_QWORD *)buf + 30) = MT_AlignedAlloc(9i64 * from->numModels, 8ui64, 13);
  v10 = MT_AlignedAlloc(16i64 * from->numModels, 4ui64, 14);
  *((_QWORD *)buf + 37) = v10;
  memset_0(v10, 255, 16i64 * from->numModels);
  memcpy_0(*((void **)buf + 33), from->parentSlots, 4i64 * from->numModels);
  memcpy_0(*((void **)buf + 31), from->offsets, 12i64 * from->numModels);
  memcpy_0(*((void **)buf + 32), from->quats, 16i64 * from->numModels);
  memcpy_0(*((void **)buf + 30), from->models, 9i64 * from->numModels);
  DObjCloneProceduralBones(from, (DObj *)buf);
  if ( from->materialData )
  {
    DObjAllocMaterialData((DObj *)buf);
    memcpy_0(**((void ***)buf + 35), from->materialData->modelEntityDataOffset, (unsigned __int8)buf[15]);
    materialData = from->materialData;
    v12 = *((_QWORD *)buf + 35);
    *(__m256i *)(v12 + 8) = *(__m256i *)materialData->camoAsset;
    *(__m256i *)(v12 + 40) = *(__m256i *)&materialData->camoAsset[4];
  }
  if ( from->modelMaterialOverrides )
  {
    *((_QWORD *)buf + 34) = MT_AlignedAlloc(16i64 * from->numModels, 8ui64, 23);
    v25 = 0;
    if ( from->numModels )
    {
      modelMaterialOverrides = from->modelMaterialOverrides;
      v14 = 0i64;
      do
      {
        v15 = MT_Alloc(8i64 * modelMaterialOverrides[v14].materialOverrideCount + 8, 23);
        v16 = v15;
        if ( v15 )
        {
          v17 = ((unsigned __int64)v15 + 8) & 0xFFFFFFFFFFFFFFF8ui64;
          if ( v17 <= (unsigned __int64)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 69, ASSERT_TYPE_ASSERT, "( retPtr ) > ( bytePtr )", "%s > %s\n\t%p, %p", "retPtr", "bytePtr", (const void *)(((unsigned __int64)v15 + 8) & 0xFFFFFFFFFFFFFFF8ui64), v15) )
            __debugbreak();
          if ( v17 - (unsigned __int64)v16 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 70, ASSERT_TYPE_ASSERT, "( static_cast<size_t>( retPtr - bytePtr ) ) <= ( alignment )", "%s <= %s\n\t%llu, %llu", "static_cast<size_t>( retPtr - bytePtr )", "alignment", v17 - (_QWORD)v16, 8i64) )
            __debugbreak();
          *(_BYTE *)(v17 - 1) = v17 - (_BYTE)v16;
        }
        else
        {
          v17 = 0i64;
        }
        v18 = 0i64;
        *(_QWORD *)(v14 * 16 + *((_QWORD *)buf + 34) + 8) = v17;
        *(_DWORD *)(v14 * 16 + *((_QWORD *)buf + 34)) = from->modelMaterialOverrides[v14].materialOverrideCount;
        modelMaterialOverrides = from->modelMaterialOverrides;
        if ( modelMaterialOverrides[v14].materialOverrideCount )
        {
          do
          {
            v19 = modelMaterialOverrides[v14].materialOverride[v18];
            overrideType = v19->overrideType;
            textureCount = v19->originalMaterial->textureCount;
            v21 = MT_AlignedAlloc(0x20ui64, 8ui64, 23);
            if ( overrideType == MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
              v22 = NULL;
            else
              v22 = MT_AlignedAlloc(16i64 * textureCount, 8ui64, 23);
            v21[2] = v22;
            *(_QWORD *)(*(_QWORD *)(v14 * 16 + *((_QWORD *)buf + 34) + 8) + 8 * v18) = v21;
            v23 = *(_QWORD *)(*(_QWORD *)(v14 * 16 + *((_QWORD *)buf + 34) + 8) + 8 * v18);
            if ( v23 )
            {
              originalMaterial = v19->originalMaterial;
              *(_QWORD *)v23 = v19->originalMaterial;
              if ( v19->overrideType != MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
                memcpy_0(*(void **)(v23 + 16), v19->materialTextureDefClone, 16i64 * originalMaterial->textureCount);
            }
            modelMaterialOverrides = from->modelMaterialOverrides;
            v18 = (unsigned int)(v18 + 1);
          }
          while ( (unsigned int)v18 < modelMaterialOverrides[v14].materialOverrideCount );
        }
        ++v14;
        ++v25;
      }
      while ( v25 < from->numModels );
    }
  }
}

/*
==============
DObjComputeBounds
==============
*/
void DObjComputeBounds(DObj *obj, unsigned __int8 *modelHierarchy)
{
  DObj *v4; 
  __int64 numModels; 
  const XModel **models; 
  __int64 v9; 
  unsigned int *v10; 
  const XModel *v11; 
  unsigned __int8 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v21; 
  float v23[256]; 

  v4 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1318, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  numModels = v4->numModels;
  models = v4->models;
  _XMM7 = 0i64;
  LODWORD(_XMM6) = 0;
  if ( v4->numModels )
  {
    v9 = 0i64;
    v10 = (unsigned int *)&v4->offsets->v[2];
    do
    {
      v11 = models[v9];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1328, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      *(double *)&_XMM0 = XModelGetRadius(v11);
      v12 = modelHierarchy[v9];
      v13 = _XMM0;
      if ( v12 != 0xFF )
      {
        v14 = _XMM0;
        *(float *)&v14 = *(float *)&_XMM0 + v23[v12];
        v13 = v14;
      }
      _XMM2 = *(v10 - 1) & (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm1, xmm7, xmm0
        vblendvps xmm2, xmm2, xmm3, xmm1
      }
      _XMM4 = *v10 & (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm1, xmm7, xmm0
        vblendvps xmm0, xmm4, xmm2, xmm1
      }
      v21 = v13;
      *(float *)&v21 = *(float *)&v13 + (float)(*(float *)&_XMM0 * 0.5);
      _XMM2 = v21;
      v23[v9++] = *(float *)&v21;
      v10 += 3;
      __asm { vmaxss  xmm6, xmm2, xmm6 }
    }
    while ( v9 < numModels );
    v4 = obj;
  }
  v4->radius = *(float *)&_XMM6;
}

/*
==============
DObjCreate
==============
*/
void DObjCreate(DObjModel *dobjModels, unsigned int numModels, XAnimTree *tree, char *buf, unsigned int entnum, XAnimOwner owner)
{
  unsigned __int16 v10; 
  unsigned __int8 modelHierarchy[256]; 

  Profile_Begin(453);
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1432, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1433, ASSERT_TYPE_ASSERT, "(numModels > 0)", (const char *)&queryFormat, "numModels > 0") )
    __debugbreak();
  if ( numModels > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1434, ASSERT_TYPE_ASSERT, "((unsigned)numModels <= ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "(unsigned)numModels <= DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1437, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  memset_0(buf + 56, 0, 0x90ui64);
  DObjClearSkelRecord((const DObj *)buf);
  buf[14] = 0;
  *((_DWORD *)buf + 2) = 0;
  *(_QWORD *)(buf + 20) = 0i64;
  *(_QWORD *)(buf + 28) = 0i64;
  *(_QWORD *)(buf + 36) = 0i64;
  *(_QWORD *)(buf + 44) = 0i64;
  *((_DWORD *)buf + 13) = 0;
  buf[17] = 0;
  buf[292] = 0;
  if ( (_BYTE)owner == DODGE )
    buf[17] = 8;
  *((_WORD *)buf + 6) = entnum;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)(buf + 208));
  DObjCreateDuplicateParts((DObj *)buf, dobjModels, numModels, modelHierarchy);
  DObjComputeBounds((DObj *)buf, modelHierarchy);
  *(_QWORD *)buf = tree;
  if ( tree && tree->children )
    XAnimResetAnimMap((const DObj *)buf);
  v10 = 0;
  if ( numModels )
  {
    while ( !XModelIsSkinned(dobjModels[v10].model) )
    {
      if ( ++v10 >= numModels )
        goto LABEL_23;
    }
    buf[17] |= 4u;
  }
LABEL_23:
  if ( numModels > 1 )
    buf[17] |= 0x20u;
  *((_QWORD *)buf + 35) = 0i64;
  *((_QWORD *)buf + 34) = 0i64;
  Profile_EndInternal(NULL);
}

/*
==============
DObjCreateDuplicateParts
==============
*/
void DObjCreateDuplicateParts(DObj *obj, DObjModel *dobjModels, unsigned int numModels, unsigned __int8 *modelHierarchy)
{
  __int64 v8; 
  DObjBoneNameToBoneIndexMap_t<768> *p_inOutClientBoneIndexMapIfNeeded; 
  DObjBoneNameToBoneIndexMap_t<768> inOutClientBoneIndexMapIfNeeded; 

  if ( (obj->flags & 8) != 0 )
  {
    v8 = 1543i64;
    p_inOutClientBoneIndexMapIfNeeded = &inOutClientBoneIndexMapIfNeeded;
    do
    {
      ntl::pair<enum scr_string_t,DObjBoneNameToBoneIndexMap_t<768>::ModelIndexAndClientBoneIndex>::pair<enum scr_string_t,DObjBoneNameToBoneIndexMap_t<768>::ModelIndexAndClientBoneIndex>(p_inOutClientBoneIndexMapIfNeeded->m_data);
      p_inOutClientBoneIndexMapIfNeeded = (DObjBoneNameToBoneIndexMap_t<768> *)((char *)p_inOutClientBoneIndexMapIfNeeded + 8);
      --v8;
    }
    while ( v8 );
    inOutClientBoneIndexMapIfNeeded.m_initialized = 1;
    memset_0(&inOutClientBoneIndexMapIfNeeded, 0, 0x3038ui64);
    inOutClientBoneIndexMapIfNeeded.m_numEntries = 0i64;
    DObjCreateDuplicateParts_Internal(obj, dobjModels, numModels, modelHierarchy, &inOutClientBoneIndexMapIfNeeded);
  }
  else
  {
    DObjCreateDuplicateParts_Internal(obj, dobjModels, numModels, modelHierarchy, NULL);
  }
}

/*
==============
DObjCreateDuplicateParts_Internal
==============
*/
void DObjCreateDuplicateParts_Internal(DObj *obj, DObjModel *dobjModels, unsigned int numModels, unsigned __int8 *modelHierarchy, DObjBoneNameToBoneIndexMap_t<768> *inOutClientBoneIndexMapIfNeeded)
{
  signed __int64 v5; 
  void *v7; 
  DObjBoneNameToBoneIndexMap_t<254> *v8; 
  DObj *v10; 
  __int64 v11; 
  int v12; 
  unsigned int v13; 
  DObjDuplicateParts *p_duplicateParts; 
  unsigned int v16; 
  DObjModel *v17; 
  char v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  XModel *v22; 
  unsigned int v23; 
  int numBones; 
  int v25; 
  int numClientBones; 
  int v27; 
  DObjModel *v28; 
  unsigned int v29; 
  unsigned int v30; 
  XModelBlendShapeInfo *blendShapeInfo; 
  unsigned __int16 v32; 
  __int16 v33; 
  __int64 v34; 
  unsigned __int64 v35; 
  __int64 v36; 
  unsigned __int8 *v37; 
  __int64 v38; 
  unsigned __int8 *v39; 
  int v40; 
  int v41; 
  __int128 v42; 
  unsigned int v43; 
  int v44; 
  int v45; 
  const scr_string_t *boneNames; 
  DObjBoneNameToBoneIndexMap_t<768> *v47; 
  int v48; 
  const scr_string_t *v49; 
  unsigned __int16 v50; 
  unsigned __int8 v51; 
  int v52; 
  unsigned __int16 *p_parent; 
  __int16 v54; 
  __int16 v55; 
  size_t v56; 
  int v57; 
  bool v58; 
  size_t v59; 
  int *v60; 
  vec3_t *v61; 
  __int64 v62; 
  vec4_t *v63; 
  const XModel **v64; 
  GpuLightGridRequestRecord *v65; 
  scr_string_t v66; 
  __int64 v67; 
  bitarray_base<bitarray<256> > *v68; 
  unsigned int parentSlot_low; 
  const char *Name; 
  const char *v71; 
  int v72; 
  const scr_string_t *v73; 
  unsigned __int16 v74; 
  unsigned __int8 v75; 
  DObjBoneNameToBoneIndexMap_t<768> *v76; 
  int v77; 
  const scr_string_t *v78; 
  unsigned __int16 v79; 
  unsigned __int8 v80; 
  const char *v81; 
  unsigned int v82; 
  DObj *v83; 
  int v84; 
  int v85; 
  const scr_string_t *v86; 
  bitarray_base<bitarray<256> > *v87; 
  XModel *v88; 
  const char *v89; 
  int v90; 
  int v91; 
  const scr_string_t *v92; 
  int v93; 
  int v94; 
  DObjBoneNameToBoneIndexMap_t<768> *v95; 
  int v96; 
  const scr_string_t *v97; 
  unsigned __int16 v98; 
  unsigned __int8 v99; 
  __int64 v100; 
  __int64 v101; 
  int v102; 
  __int64 v103; 
  bool v104; 
  int v105; 
  scr_string_t v106; 
  char DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254; 
  unsigned __int8 v108; 
  int v109; 
  char v110; 
  int v111; 
  int v112; 
  XModel *v113; 
  const XModel *v114; 
  unsigned __int8 *v115; 
  const char *v116; 
  int v117; 
  bitarray_base<bitarray<256> > *v118; 
  XModel *v119; 
  const char *v120; 
  XModel *v121; 
  int v122; 
  __int64 v123; 
  unsigned __int16 entnum; 
  const char *v125; 
  DObjModel *v126; 
  unsigned int v127; 
  unsigned int v128; 
  int v129; 
  unsigned int v130; 
  const char *v131; 
  const char *v132; 
  DObjBoneNameToBoneIndexMap_t<768> *v133; 
  char *fmt; 
  __int64 boneName; 
  int *parentModelOut; 
  unsigned __int16 *parentBoneOut; 
  __int64 v138; 
  unsigned int pos; 
  unsigned __int8 flags; 
  char v141; 
  unsigned __int8 v142; 
  char v143; 
  unsigned __int16 v144; 
  __int16 v145; 
  int destPos; 
  unsigned int numModelsa; 
  int v148; 
  DObj *obja; 
  int inoutNumDuplicateParts; 
  int v151; 
  DObjModel *v152; 
  unsigned __int16 v153; 
  DObjModel *dobjModelsa; 
  unsigned __int8 *v155; 
  int v156; 
  bitarray_base<bitarray<256> > *p_modelHasBadRootBoneMeld; 
  DObjBoneNameToBoneIndexMap_t<768> *lookupMap; 
  XModel *v159; 
  int v160; 
  int v161; 
  unsigned __int64 v162; 
  __int64 v163; 
  __int64 v164; 
  __int64 v165; 
  DObjDuplicateParts duplicateParts; 
  DObjBoneNameToBoneIndexMap_t<254> v167; 
  int offset[256]; 
  XModel *model[254]; 
  int modelClientBoneOffsets[256]; 
  int Src[256]; 
  __int64 v172[382]; 
  _QWORD v173[508]; 
  unsigned __int8 index[256]; 
  char dest[6144]; 
  __int128 v176; 

  v7 = alloca(v5);
  v176 = _XMM6;
  v8 = &v167;
  lookupMap = inOutClientBoneIndexMapIfNeeded;
  v155 = modelHierarchy;
  v10 = obj;
  numModelsa = numModels;
  v11 = 389i64;
  dobjModelsa = dobjModels;
  obja = obj;
  do
  {
    ntl::pair<enum scr_string_t,DObjBoneNameToBoneIndexMap_t<254>::ModelIndexAndClientBoneIndex>::pair<enum scr_string_t,DObjBoneNameToBoneIndexMap_t<254>::ModelIndexAndClientBoneIndex>(v8->m_data);
    v8 = (DObjBoneNameToBoneIndexMap_t<254> *)((char *)v8 + 8);
    --v11;
  }
  while ( v11 );
  v167.m_initialized = 1;
  memset_0(&v167, 0, 0xC28ui64);
  v12 = 0;
  *(_QWORD *)v10->modelHasBadRootBoneMeld.array = 0i64;
  *(_QWORD *)&v10->modelHasBadRootBoneMeld.array[2] = 0i64;
  *(_QWORD *)&v10->modelHasBadRootBoneMeld.array[4] = 0i64;
  *(_QWORD *)&v10->modelHasBadRootBoneMeld.array[6] = 0i64;
  p_modelHasBadRootBoneMeld = &v10->modelHasBadRootBoneMeld;
  flags = v10->flags;
  v167.m_numEntries = 0i64;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 621, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  Profile_Begin(452);
  v13 = 0;
  p_duplicateParts = &duplicateParts;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    *(_OWORD *)p_duplicateParts->partBits.array = _XMM6;
    p_duplicateParts = (DObjDuplicateParts *)((char *)p_duplicateParts + 16);
    ++v13;
  }
  while ( v13 < 2 );
  v16 = numModelsa;
  inoutNumDuplicateParts = 0;
  v17 = dobjModels;
  v151 = 0;
  v18 = 0;
  v144 = 0;
  v145 = 0;
  v19 = 0;
  v152 = v17;
  v20 = 0;
  v141 = 0;
  v21 = 0;
  pos = 0;
  if ( numModelsa )
  {
    while ( 1 )
    {
      v22 = (XModel *)v17->model;
      v161 = v12;
      v23 = v12;
      v159 = v22;
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 650, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      if ( v141 || v22->proceduralBones || (v141 = 0, v22->dynamicBones) )
        v141 = 1;
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = v22->numBones;
      v25 = numBones + v12;
      numClientBones = v22->numClientBones;
      v27 = numClientBones + v151;
      v148 = numBones;
      v156 = v25;
      v151 += numClientBones;
      if ( v25 <= 254 )
      {
        if ( v25 + numClientBones )
        {
          if ( (_BYTE)numBones )
          {
            v29 = v27 + v25;
            if ( v27 + v25 > 768 )
            {
              if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 674, ASSERT_TYPE_ASSERT, "(currNumModels)", (const char *)&queryFormat, "currNumModels") )
                __debugbreak();
              v28 = dobjModelsa;
              v30 = numModelsa;
              DObjDumpCreationInfo(dobjModelsa, numModelsa);
              LODWORD(boneName) = v30;
              LODWORD(fmt) = v21;
              Sys_Error((const ObfuscateErrorText)&stru_144191980, v22->name, 768i64, v29, fmt, boneName);
              v16 = v30;
              goto LABEL_34;
            }
            v16 = numModelsa;
          }
        }
        else
        {
          Com_PrintWarning(19, "WARNING: Attempting to add XModel '%s' to a DOBJ even though it has zero bones.\n", v22->name);
        }
        v28 = dobjModelsa;
      }
      else
      {
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 663, ASSERT_TYPE_ASSERT, "(currNumModels)", (const char *)&queryFormat, "currNumModels") )
          __debugbreak();
        v28 = dobjModelsa;
        DObjDumpCreationInfo(dobjModelsa, v16);
        LODWORD(boneName) = v16;
        LODWORD(fmt) = v21;
        Sys_Error((const ObfuscateErrorText)&stru_1441918A0, v22->name, 254i64, (unsigned int)v25, fmt, boneName);
      }
LABEL_34:
      blendShapeInfo = v22->blendShapeInfo;
      v32 = v144;
      v33 = v145;
      if ( blendShapeInfo )
      {
        v32 = blendShapeInfo->numberOfWeights + v144;
        v33 = blendShapeInfo->targetCount + v145;
        v145 = v33;
        v144 = v32;
      }
      if ( v32 > 0x400u )
      {
        DObjDumpCreationInfo(v28, v16);
        Sys_Error((const ObfuscateErrorText)&stru_144191A00, v22->name, 1024i64);
      }
      if ( (unsigned __int16)v33 > 0x400u )
      {
        DObjDumpCreationInfo(v28, v16);
        Sys_Error((const ObfuscateErrorText)&stru_144191A70, v22->name, 1024i64);
      }
      v34 = (__int64)v152;
      v35 = v21;
      v162 = v21;
      v36 = 2i64 * v21;
      index[v21] = -1;
      v37 = &index[v21];
      v38 = 3i64 * v21;
      model[v35] = v22;
      *(__int64 *)((char *)v172 + 4 * v38) = 0i64;
      v173[v36] = 0i64;
      v173[v36 + 1] = 0i64;
      *((_DWORD *)&v172[1] + v38) = 0;
      v39 = v155;
      Src[v35] = -1;
      offset[v35] = v23;
      modelClientBoneOffsets[v35] = v20;
      v39[v35] = -1;
      if ( *(_BYTE *)(v34 + 44) )
      {
        if ( pos >= 0x100 )
        {
          LODWORD(v138) = 256;
          LODWORD(parentBoneOut) = pos;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v138) )
            __debugbreak();
          v34 = (__int64)v152;
        }
        obja->ignoreCollision.array[v35 >> 5] |= 0x80000000 >> (pos & 0x1F);
      }
      v40 = *(_DWORD *)(v34 + 24);
      v41 = *(_DWORD *)(v34 + 12);
      *(__int64 *)((char *)v172 + 4 * v38) = *(__int64 *)(v34 + 16);
      v42 = *(_OWORD *)(v34 + 28);
      *((_DWORD *)&v172[1] + v38) = v40;
      v43 = pos;
      Src[v35] = v41;
      *(_OWORD *)&v173[v36] = v42;
      if ( !pos )
      {
        v44 = offset[v35];
        v45 = v22->numBones;
        boneNames = v22->boneNames;
        if ( (v44 < 0 || (unsigned int)v44 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v44, "signed", v44) )
          __debugbreak();
        DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_254___(0, v44, boneNames, v45, &v167);
        if ( (flags & 8) != 0 && (_BYTE)v148 )
        {
          v47 = lookupMap;
          if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 730, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
            __debugbreak();
          v48 = v22->numClientBones;
          v49 = &v22->boneNames[v22->numBones];
          v50 = truncate_cast<unsigned short,int>(modelClientBoneOffsets[v35] | 0x8000);
          v51 = truncate_cast<unsigned char,unsigned int>(0);
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_768___(v51, v50, v49, v48, v47);
        }
        v10 = obja;
        goto LABEL_58;
      }
      v66 = *(_DWORD *)(v34 + 8);
      if ( v41 >= 0 && v66 != scr_const._ )
      {
        if ( !v66 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 744, ASSERT_TYPE_ASSERT, "( name != ( static_cast< scr_string_t >( 0 ) ) )", "dobj for compositeModel '%s' has a parent slot but bone name is missing.", v22->name) )
            __debugbreak();
          v34 = (__int64)v152;
        }
        if ( XModelGetBoneIndex(model[*(int *)(v34 + 12)], v66, offset[*(int *)(v34 + 12)], v37) )
        {
          v67 = (__int64)v152;
          v68 = p_modelHasBadRootBoneMeld;
          parentSlot_low = LOBYTE(v152->parentSlot);
          v155[v35] = parentSlot_low;
          if ( bitarray_base<bitarray<256>>::testBit(v68, parentSlot_low) )
          {
            bitarray_base<bitarray<256>>::setBit(v68, pos);
            Name = XModelGetName(model[*(int *)(v67 + 12)]);
            v71 = XModelGetName(v22);
            Com_PrintError(19, "Marking %s (child of %s) as bad bone meld\n", v71, Name);
          }
          v72 = XModelNumBones(v22);
          v73 = v22->boneNames;
          v74 = truncate_cast<unsigned short,int>(offset[v35]);
          v75 = truncate_cast<unsigned char,unsigned int>(pos);
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_254___(v75, v74, v73, v72, &v167);
          if ( (flags & 8) != 0 && (_BYTE)v148 )
          {
            v76 = lookupMap;
            if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 761, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
              __debugbreak();
            goto LABEL_129;
          }
          goto LABEL_130;
        }
        v81 = SL_ConvertToStringSafe(v66);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 767, ASSERT_TYPE_ASSERT, "( false )", "dobj for compositeModel '%s' couldn't find a bone with name: %s, weird offsets will occur.", v22->name, v81) )
          __debugbreak();
      }
      if ( v66 && *SL_ConvertToString(v66) )
      {
        v82 = pos - 1;
        if ( (int)(pos - 1) < 0 )
        {
LABEL_140:
          if ( v43 >= 0x100 )
          {
            LODWORD(v138) = 256;
            LODWORD(parentBoneOut) = v43;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v138) )
              __debugbreak();
          }
          v10 = obja;
          v83 = obja;
          *(_DWORD *)&p_modelHasBadRootBoneMeld[4 * (v35 >> 5)] |= 0x80000000 >> (v43 & 0x1F);
          DObjCreateHandleParentModelBoneAttachError(v83, dobjModelsa, numModelsa, v22, v43, v66);
          v10->flags |= 0x10u;
          if ( *v37 != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 810, ASSERT_TYPE_ASSERT, "(modelParents[currNumModels] == 255)", (const char *)&queryFormat, "modelParents[currNumModels] == NO_BONEINDEX") )
            __debugbreak();
          if ( v155[v35] != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 811, ASSERT_TYPE_ASSERT, "(modelHierarchy[currNumModels] == 255)", (const char *)&queryFormat, "modelHierarchy[currNumModels] == NO_MODELINDEX") )
            __debugbreak();
          v84 = offset[v35];
          v85 = v22->numBones;
          v86 = v22->boneNames;
          if ( (v84 < 0 || (unsigned int)v84 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v84, "signed", v84) )
            __debugbreak();
          if ( pos > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)pos, "unsigned", v35) )
            __debugbreak();
          v94 = v85;
          v43 = pos;
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_254___(pos, v84, v86, v94, &v167);
          if ( (flags & 8) == 0 || !(_BYTE)v148 )
            goto LABEL_59;
          v95 = lookupMap;
          if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 815, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
            __debugbreak();
          v96 = v22->numClientBones;
          v97 = &v22->boneNames[v22->numBones];
          v98 = truncate_cast<unsigned short,int>(modelClientBoneOffsets[v35] | 0x8000);
          v99 = truncate_cast<unsigned char,unsigned int>(pos);
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_768___(v99, v98, v97, v96, v95);
LABEL_58:
          v43 = pos;
          goto LABEL_59;
        }
        while ( !XModelGetBoneIndex(model[v82], v66, offset[v82], v37) )
        {
          if ( (--v82 & 0x80000000) != 0 )
          {
            v43 = pos;
            goto LABEL_140;
          }
        }
        v87 = p_modelHasBadRootBoneMeld;
        v155[v35] = v82;
        if ( ((0x80000000 >> (v82 & 0x1F)) & *(_DWORD *)&v87[4 * ((unsigned __int64)(unsigned __int8)v82 >> 5)]) != 0 )
        {
          if ( pos >= 0x100 )
          {
            LODWORD(v138) = 256;
            LODWORD(parentBoneOut) = pos;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v138) )
              __debugbreak();
          }
          v88 = model[v82];
          *(_DWORD *)&v87[4 * (v35 >> 5)] |= 0x80000000 >> (pos & 0x1F);
          if ( !v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v89 = v88->name;
          if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          Com_PrintError(19, "Marking %s (child of %s) as bad bone meld\n", v22->name, v89);
        }
        v90 = offset[v35];
        v91 = v22->numBones;
        v92 = v22->boneNames;
        if ( (v90 < 0 || (unsigned int)v90 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v90, "signed", v90) )
          __debugbreak();
        if ( pos > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)pos, "unsigned", v35) )
          __debugbreak();
        v93 = v91;
        v43 = pos;
        DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_254___(pos, v90, v92, v93, &v167);
        if ( (flags & 8) != 0 && (_BYTE)v148 )
        {
          v76 = lookupMap;
          if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 790, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
            __debugbreak();
LABEL_129:
          v77 = XModelNumClientOnlyBones(v22);
          v78 = &v22->boneNames[XModelNumBones(v22)];
          v79 = truncate_cast<unsigned short,int>(modelClientBoneOffsets[v35] | 0x8000);
          v80 = truncate_cast<unsigned char,unsigned int>(pos);
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_768___(v80, v79, v78, v77, v76);
LABEL_130:
          v43 = pos;
        }
        v10 = obja;
        goto LABEL_59;
      }
      v100 = (__int64)v22->boneNames;
      v58 = (v22->flags & 0x8000) == 0;
      v165 = v100;
      v143 = 0;
      if ( !v58 )
      {
        Com_PrintWarning(19, "WARNING: Creating a DObj with stub model for '%s'.  This object will need to be re-generated once the final asset is loaded.\n", v22->name);
        v10 = obja;
        goto LABEL_59;
      }
      v101 = v22->numBones;
      destPos = 0;
      v102 = 0;
      v163 = 0i64;
      v103 = 0i64;
      v164 = v101;
      if ( !v101 )
      {
LABEL_281:
        if ( v22->numRootBones )
        {
          if ( v43 >= 0x100 )
          {
            LODWORD(v138) = 256;
            LODWORD(parentBoneOut) = v43;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v138) )
              __debugbreak();
          }
          destPos = 0;
          dest[0] = 0;
          *(_DWORD *)&p_modelHasBadRootBoneMeld[4 * (v35 >> 5)] |= 0x80000000 >> (v43 & 0x1F);
          entnum = obja->entnum;
          if ( entnum )
          {
            LODWORD(fmt) = entnum - 1;
            Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "ERROR: Root bone meld operation failed for ent (%u). This might cause floating models around the camera.\n", fmt);
          }
          else
          {
            Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "ERROR: Root bone meld operation failed for ent (unknown). This might cause floating models around the camera.\n");
          }
          v125 = SL_ConvertToString(*v22->boneNames);
          LODWORD(parentModelOut) = v43;
          Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "Model '%s' with root bone '%s' and index %u could not be attached to any of the models with a lower index.\n", v22->name, v125, parentModelOut);
          Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "=== MODEL LIST DUMP - BEGIN ===\n");
          v126 = dobjModelsa;
          v127 = 0;
          v128 = numModelsa;
          do
          {
            v129 = v126->model->numBones;
            v130 = v126->model->flags >> 15;
            v131 = SL_ConvertToString(*v126->model->boneNames);
            v132 = "false";
            if ( (v130 & 1) != 0 )
              v132 = "true";
            LODWORD(parentBoneOut) = v129;
            LODWORD(fmt) = v127;
            Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "[%u] %s - Root bone: %s - Bones: %u - Is Default Model: %s\n", fmt, v126->model->name, v131, parentBoneOut, v132);
            ++v127;
            ++v126;
          }
          while ( v127 < v128 );
          Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "=== MODEL LIST DUMP - END ===\n");
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_root_meld_failure, "dobj_assert_on_root_meld_failure") )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, (const char *)&queryFormat, dest) )
              __debugbreak();
          }
          else
          {
            Com_PrintError(19, (const char *)&queryFormat, dest);
          }
        }
        goto LABEL_296;
      }
      do
      {
        v104 = (int)(v102 + v23) < 0;
        v105 = v102 + v23;
        v106 = *(_DWORD *)(v100 + 4 * v103);
        if ( (v104 || (unsigned int)v105 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v105, "signed", v105) )
          __debugbreak();
        DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254 = DObjCreateDuplicateParts_FindDuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254___((const XModel *const *)model, v43, v105, v106, offset, &v167, &v160, &v153);
        if ( DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254 )
        {
          v108 = v153;
          if ( v153 > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)v153, "unsigned", v153) )
            __debugbreak();
          v109 = v160;
          if ( v160 == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 847, ASSERT_TYPE_ASSERT, "(parentModelIndex != 255)", (const char *)&queryFormat, "parentModelIndex != NO_MODELINDEX") )
            __debugbreak();
          if ( v109 >= v43 )
          {
            LODWORD(parentModelOut) = v43;
            LODWORD(boneName) = v109;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 848, ASSERT_TYPE_ASSERT, "(unsigned)( parentModelIndex ) < (unsigned)( currNumModels )", "parentModelIndex doesn't index currNumModels\n\t%i not in [0, %i)", boneName, parentModelOut) )
              __debugbreak();
          }
          if ( v159 == model[v109] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 849, ASSERT_TYPE_ASSERT, "(model != models[parentModelIndex])", (const char *)&queryFormat, "model != models[parentModelIndex]") )
            __debugbreak();
          if ( (v109 < 0 || (unsigned int)v109 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v109, "signed", v109) )
            __debugbreak();
          v155[v162] = v109;
        }
        else
        {
          v108 = -1;
        }
        v110 = 0;
        v111 = 255;
        v142 = -1;
        v112 = pos - 1;
        if ( (int)(pos - 1) >= 0 )
        {
          v113 = v159;
          do
          {
            v114 = model[v112];
            if ( v113 != v114 )
            {
              if ( XModelGetBoneIndex(v114, v106, offset[v112], &v142) )
              {
                v111 = v112;
                v110 = 1;
                break;
              }
              v113 = v159;
            }
            --v112;
          }
          while ( v112 >= 0 );
        }
        if ( v110 != DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 877, ASSERT_TYPE_ASSERT, "(foundDuplicateTest == foundDuplicate)", (const char *)&queryFormat, "foundDuplicateTest == foundDuplicate") )
          __debugbreak();
        v58 = DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254 == 0;
        v35 = v162;
        if ( !v58 )
        {
          v115 = v155;
          if ( v111 != v155[v162] )
          {
            LODWORD(v138) = v155[v162];
            LODWORD(parentBoneOut) = v111;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 880, ASSERT_TYPE_ASSERT, "( foundModelIndexTest ) == ( modelHierarchy[currNumModels] )", "%s == %s\n\t%i, %i", "foundModelIndexTest", "modelHierarchy[currNumModels]", parentBoneOut, v138) )
              __debugbreak();
          }
          if ( v142 != v108 )
          {
            LODWORD(v138) = v108;
            LODWORD(parentBoneOut) = v142;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 881, ASSERT_TYPE_ASSERT, "( testParentIndex ) == ( parentIndex )", "%s == %s\n\t%i, %i", "testParentIndex", "parentIndex", parentBoneOut, v138) )
              __debugbreak();
          }
          if ( v108 == 0xFF )
          {
            v116 = "( ( parentIndex != 255 ) )";
            LODWORD(boneName) = 255;
            v117 = 891;
LABEL_234:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", v117, ASSERT_TYPE_ASSERT, v116, "( parentIndex ) = %i", boneName) )
              __debugbreak();
          }
          else if ( v108 == 0xFE )
          {
            LODWORD(boneName) = 254;
            v116 = "( ( parentIndex != 254 ) )";
            v117 = 892;
            goto LABEL_234;
          }
          if ( v108 == v105 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 893, ASSERT_TYPE_ASSERT, "(parentIndex != boneIndex + localBoneIndex)", (const char *)&queryFormat, "parentIndex != boneIndex + localBoneIndex") )
            __debugbreak();
          if ( !v163 )
          {
            v118 = p_modelHasBadRootBoneMeld;
            if ( ((0x80000000 >> (v115[v35] & 0x1F)) & *(_DWORD *)&p_modelHasBadRootBoneMeld[4 * ((unsigned __int64)v115[v35] >> 5)]) != 0 )
            {
              if ( pos >= 0x100 )
              {
                LODWORD(v138) = 256;
                LODWORD(parentBoneOut) = pos;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v138) )
                  __debugbreak();
              }
              *(_DWORD *)&v118[4 * (v35 >> 5)] |= 0x80000000 >> (pos & 0x1F);
              v119 = model[v115[v35]];
              if ( !v119 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              v120 = v119->name;
              v121 = model[v35];
              if ( !v121 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              Com_PrintError(19, "Marking %s (child of %s) as bad bone meld\n", v121->name, v120);
            }
            v143 = 1;
          }
          v122 = v105 + 1;
          if ( v105 + 1 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 910, ASSERT_TYPE_ASSERT, "(boneIndex + localBoneIndex + 1 < 256)", (const char *)&queryFormat, "boneIndex + localBoneIndex + 1 < 256") )
            __debugbreak();
          if ( (unsigned int)v108 + 1 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 911, ASSERT_TYPE_ASSERT, "(parentIndex + 1 < 256)", (const char *)&queryFormat, "parentIndex + 1 < 256") )
            __debugbreak();
          if ( v108 >= v105 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 912, ASSERT_TYPE_ASSERT, "(parentIndex < boneIndex + localBoneIndex)", (const char *)&queryFormat, "parentIndex < boneIndex + localBoneIndex") )
            __debugbreak();
          v123 = inoutNumDuplicateParts;
          if ( (unsigned int)inoutNumDuplicateParts >= 0xFF )
          {
            LODWORD(parentModelOut) = 255;
            LODWORD(boneName) = inoutNumDuplicateParts;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 916, ASSERT_TYPE_ASSERT, "(unsigned)( numDuplicateParts ) < (unsigned)( ( sizeof( *array_counter( duplicateParts.pairs ) ) + 0 ) )", "numDuplicateParts doesn't index duplicateParts.pairs\n\t%i not in [0, %i)", boneName, parentModelOut) )
              __debugbreak();
          }
          if ( (v122 < 0 || (unsigned int)v122 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)(v105 + 1), "signed", v122) )
            __debugbreak();
          duplicateParts.pairs[v123].child = v122;
          if ( (unsigned int)v105 >= 0x100 )
          {
            LODWORD(v138) = 256;
            LODWORD(parentBoneOut) = v105;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v138) )
              __debugbreak();
          }
          duplicateParts.partBits.array[(unsigned __int64)(unsigned int)v105 >> 5] |= 0x80000000 >> (v105 & 0x1F);
          if ( !duplicateParts.pairs[v123].child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 919, ASSERT_TYPE_ASSERT, "(duplicateParts.pairs[numDuplicateParts].child != 0)", (const char *)&queryFormat, "duplicateParts.pairs[numDuplicateParts].child != 0") )
            __debugbreak();
          duplicateParts.pairs[v123].parent = v108 + 1;
          if ( v108 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 921, ASSERT_TYPE_ASSERT, "(duplicateParts.pairs[numDuplicateParts].parent != 0)", (const char *)&queryFormat, "duplicateParts.pairs[numDuplicateParts].parent != 0") )
            __debugbreak();
          inoutNumDuplicateParts = v123 + 1;
        }
        v102 = destPos + 1;
        v100 = v165;
        v103 = v163 + 1;
        v23 = v161;
        v43 = pos;
        ++destPos;
        v163 = v103;
      }
      while ( v103 < v164 );
      if ( !v143 )
      {
        v22 = v159;
        goto LABEL_281;
      }
LABEL_296:
      if ( (flags & 8) == 0 || !(_BYTE)v148 )
        goto LABEL_130;
      v133 = lookupMap;
      if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 941, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
        __debugbreak();
      v43 = pos;
      DObjFindAndAppendDuplicateClientBones((const XModel *const *)model, pos, modelClientBoneOffsets, v133, &duplicateParts, &inoutNumDuplicateParts);
      v10 = obja;
LABEL_59:
      v16 = numModelsa;
      v17 = v152 + 1;
      v12 = v156;
      v21 = v43 + 1;
      v20 = v151;
      pos = v21;
      ++v152;
      if ( v21 >= numModelsa )
      {
        v19 = inoutNumDuplicateParts;
        v18 = v141;
        break;
      }
    }
  }
  v52 = 0;
  if ( v19 > 0 )
  {
    p_parent = &duplicateParts.pairs[0].parent;
    do
    {
      v54 = *(p_parent - 1);
      if ( v54 < 0 )
      {
        if ( v12 < 0 || (unsigned int)v12 > 0xFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v12, "signed", v12) )
            __debugbreak();
          v54 = *(p_parent - 1);
        }
        *(p_parent - 1) = v12 + v54;
        if ( (((_WORD)v12 + v54 - 1) & 0x7FFFu) >= v20 + v12 )
        {
          LODWORD(parentModelOut) = v20 + v12;
          LODWORD(boneName) = ((_WORD)v12 + v54 - 1) & 0x7FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 954, ASSERT_TYPE_ASSERT, "(unsigned)( (duplicateParts.pairs[duplicateIndex].child - 1) & ((1 << 15) - 1) ) < (unsigned)( boneCount + numClientBones )", "(duplicateParts.pairs[duplicateIndex].child - 1) & CLIENT_BONEINDEX_MASK doesn't index boneCount + numClientBones\n\t%i not in [0, %i)", boneName, parentModelOut) )
            __debugbreak();
        }
      }
      v55 = *p_parent;
      if ( (*p_parent & 0x8000u) != 0 )
      {
        if ( v12 < 0 || (unsigned int)v12 > 0xFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v12, "signed", v12) )
            __debugbreak();
          v55 = *p_parent;
        }
        *p_parent = v12 + v55;
        if ( (((_WORD)v12 + v55 - 1) & 0x7FFFu) >= v20 + v12 )
        {
          LODWORD(parentModelOut) = v20 + v12;
          LODWORD(boneName) = ((_WORD)v12 + v55 - 1) & 0x7FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 959, ASSERT_TYPE_ASSERT, "(unsigned)( (duplicateParts.pairs[duplicateIndex].parent -1) & ((1 << 15) - 1) ) < (unsigned)( boneCount + numClientBones )", "(duplicateParts.pairs[duplicateIndex].parent -1) & CLIENT_BONEINDEX_MASK doesn't index boneCount + numClientBones\n\t%i not in [0, %i)", boneName, parentModelOut) )
            __debugbreak();
        }
      }
      ++v52;
      p_parent += 2;
    }
    while ( v52 < v19 );
    v10 = obja;
    v18 = v141;
  }
  v56 = numModelsa;
  if ( !numModelsa )
  {
    LODWORD(boneName) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 963, ASSERT_TYPE_ASSERT, "( ( numModels > 0 ) )", "( numModels ) = %i", boneName) )
      __debugbreak();
  }
  if ( (_DWORD)v56 != (unsigned __int8)v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 964, ASSERT_TYPE_ASSERT, "(numModels == (byte)numModels)", (const char *)&queryFormat, "numModels == (byte)numModels") )
    __debugbreak();
  v10->numModels = v56;
  if ( v20 + v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 967, ASSERT_TYPE_ASSERT, "(boneCount + numClientBones > 0)", "%s\n\tCannot create a DObj with zero bones. See warnings printed above for a list of offending XModels.", "boneCount + numClientBones > 0") )
    __debugbreak();
  v10->numBones = truncate_cast<unsigned char,int>(v12);
  v10->numClientBones = truncate_cast<unsigned short,int>(v20);
  v57 = v144;
  v10->blendShapeWeightCount = v144;
  if ( (unsigned int)(v57 + 1) > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 972, ASSERT_TYPE_ASSERT, "(obj->blendShapeWeightCount + 1 <= DOBJ_MAX_BLEND_SHAPES)", (const char *)&queryFormat, "obj->blendShapeWeightCount + 1 <= DOBJ_MAX_BLEND_SHAPES") )
    __debugbreak();
  v58 = v10->parentSlots == NULL;
  v10->blendShapeTargetCount = v145;
  if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 980, ASSERT_TYPE_ASSERT, "( obj->parentSlots == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  if ( v10->offsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 981, ASSERT_TYPE_ASSERT, "( obj->offsets == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  if ( v10->quats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 982, ASSERT_TYPE_ASSERT, "( obj->quats == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  if ( v10->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 983, ASSERT_TYPE_ASSERT, "( obj->models == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  if ( v10->lastGpuLightGridRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 985, ASSERT_TYPE_ASSERT, "( obj->lastGpuLightGridRequest == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  v59 = v56;
  v60 = (int *)MT_AlignedAlloc(4 * v56, 4ui64, 25);
  v10->parentSlots = v60;
  memcpy_0(v60, Src, 4 * v56);
  v61 = (vec3_t *)MT_AlignedAlloc(12 * v56, 4ui64, 25);
  v10->offsets = v61;
  memcpy_0(v61, v172, 12 * v56);
  v62 = 16 * v56;
  v63 = (vec4_t *)MT_AlignedAlloc(v62, 4ui64, 25);
  v10->quats = v63;
  memcpy_0(v63, v173, v62);
  v64 = (const XModel **)MT_AlignedAlloc(9 * v59, 8ui64, 13);
  v10->models = v64;
  memcpy_0(v64, model, 8 * v59);
  memcpy_0(&v10->models[v59], index, v59);
  v65 = (GpuLightGridRequestRecord *)MT_AlignedAlloc(v62, 4ui64, 14);
  v10->lastGpuLightGridRequest = v65;
  memset_0(v65, 255, v62);
  if ( v10->duplicateParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1025, ASSERT_TYPE_ASSERT, "(obj->duplicateParts == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "obj->duplicateParts == NULL_SCR_STRING") )
    __debugbreak();
  DObjSetDuplicateParts(v10, &duplicateParts, v19);
  if ( v18 )
    DObjInitializeProceduralBones(v10);
  else
    v10->proceduralBonesHandle.m_value = 0;
  Profile_EndInternal(NULL);
}

/*
==============
DObjCreateHandleParentModelBoneAttachError
==============
*/
void DObjCreateHandleParentModelBoneAttachError(DObj *obj, DObjModel *dobjModels, const unsigned int numModels, const XModel *model, const unsigned int currentModelIndex, const scr_string_t boneName)
{
  unsigned __int16 entnum; 
  unsigned int v8; 
  const char *v11; 
  const char *v12; 
  int numBones; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  int fmta; 
  char *fmt; 
  __int64 v20; 
  int destPos[4]; 
  char dest[6144]; 

  entnum = obj->entnum;
  v8 = 0;
  destPos[0] = 0;
  dest[0] = 0;
  if ( entnum )
  {
    fmta = entnum - 1;
    Com_sprintfPos_truncate(dest, 0x1800ui64, destPos, "ERROR: Root bone meld operation failed for ent (%u). This might cause floating models around the camera.\n", fmta);
  }
  else
  {
    Com_sprintfPos_truncate(dest, 0x1800ui64, destPos, "ERROR: Root bone meld operation failed for ent (unknown). This might cause floating models around the camera.\n");
  }
  v11 = SL_ConvertToString(boneName);
  v12 = SL_ConvertToString(*model->boneNames);
  Com_sprintfPos_truncate(dest, 0x1800ui64, destPos, "Model '%s' with root bone '%s' and index %u could not be attached to any of the models with a lower index with a bone named '%s'.\n", model->name, v12, currentModelIndex, v11);
  Com_sprintfPos_truncate(dest, 0x1800ui64, destPos, "=== MODEL LIST DUMP - BEGIN ===\n");
  if ( numModels )
  {
    do
    {
      numBones = dobjModels->model->numBones;
      v14 = dobjModels->model->flags >> 15;
      v15 = SL_ConvertToString(*dobjModels->model->boneNames);
      v16 = "false";
      if ( (v14 & 1) != 0 )
        v16 = "true";
      LODWORD(v20) = numBones;
      LODWORD(fmt) = v8;
      Com_sprintfPos_truncate(dest, 0x1800ui64, destPos, "[%u] %s - Root bone: %s - Bones: %u - Is Default Model: %s\n", fmt, dobjModels->model->name, v15, v20, v16);
      ++v8;
      ++dobjModels;
    }
    while ( v8 < numModels );
  }
  Com_sprintfPos_truncate(dest, 0x1800ui64, destPos, "=== MODEL LIST DUMP - END ===\n");
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_root_meld_failure, "dobj_assert_on_root_meld_failure") )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 548, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, (const char *)&queryFormat, dest) )
      __debugbreak();
  }
  else
  {
    Com_PrintError(19, (const char *)&queryFormat, dest);
  }
}

/*
==============
DObjDumpCreationInfo
==============
*/
void DObjDumpCreationInfo(DObjModel *dobjModels, unsigned int numModels)
{
  unsigned int v2; 
  DObjModel *v3; 
  unsigned int v4; 
  const XModel *model; 
  int v6; 
  signed __int64 v7; 
  signed __int64 v8; 
  int numBones; 
  __int64 v10; 
  const char *v11; 
  unsigned int v12; 
  bool v13; 
  char *fmt; 
  DObjModel *v15; 
  __int64 v16; 

  if ( numModels )
  {
    v15 = dobjModels;
    v2 = 0;
    v3 = dobjModels;
    v4 = 0;
    v16 = numModels;
    do
    {
      model = v3->model;
      if ( !v3->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      Com_Printf(19, "Model '%s':\n", model->name);
      v6 = 0;
      v7 = 0i64;
      v8 = model->numBones + (unsigned __int64)model->numClientBones;
      if ( v8 )
      {
        do
        {
          numBones = model->numBones;
          fmt = (char *)SL_ConvertToString(model->boneNames[v7]);
          v10 = v2;
          v11 = (char *)&queryFormat.fmt + 3;
          if ( v6 >= numBones )
            v10 = v4;
          if ( v6 >= numBones )
            v11 = "Client ";
          Com_Printf(19, "%sBone %d: '%s'\n", v11, v10, fmt);
          v12 = v4 + 1;
          if ( v6 < numBones )
            v12 = v4;
          v4 = v12;
          if ( v6 < numBones )
            ++v2;
          ++v6;
          ++v7;
        }
        while ( v7 < v8 );
        v3 = v15;
      }
      ++v3;
      v13 = v16-- == 1;
      v15 = v3;
    }
    while ( !v13 );
  }
}

/*
==============
DObjDumpInfo
==============
*/
void DObjDumpInfo(const DObj *obj)
{
  int v2; 
  unsigned int numModels; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  const XModel **v10; 
  __int64 v11; 
  const char **p_name; 
  int numBones; 
  scr_string_t BoneNameScriptStringAndModelIndex; 
  const char *v15; 
  __int64 v16; 
  scr_string_t v17; 
  const char *v18; 
  DObjDuplicatePair *pairs; 
  scr_string_t v20; 
  const char *v21; 
  int v22; 
  scr_string_t v23; 
  const char *v24; 
  bool v25; 
  __int64 v26; 
  int outModelIndex; 
  const XModel **models; 

  if ( obj )
  {
    Com_Printf(19, "\nModels:\n");
    v2 = 0;
    numModels = obj->numModels;
    models = obj->models;
    v4 = 0;
    v5 = 0;
    v6 = DObjNumClientOnlyBones(obj);
    v7 = v6;
    v8 = numModels;
    if ( (_BYTE)numModels )
    {
      v9 = 0i64;
      v10 = models;
      v11 = v6;
      do
      {
        p_name = &v10[v9]->name;
        if ( v11 <= 0 )
          Com_Printf(19, "%3d: '%s'\n", v4, *p_name);
        else
          Com_Printf(19, "%3d, %3d: '%s'\n", v4, v5, *p_name);
        ++v9;
        v4 += *((unsigned __int8 *)p_name + 20);
        v5 += *((unsigned __int16 *)p_name + 11);
      }
      while ( v9 < v8 );
      v7 = v11;
      v2 = 0;
    }
    Com_Printf(19, "\nBones:\n");
    numBones = obj->numBones;
    if ( obj->numBones )
    {
      do
      {
        BoneNameScriptStringAndModelIndex = DObjGetBoneNameScriptStringAndModelIndex(obj, v2, &outModelIndex);
        v15 = SL_ConvertToString(BoneNameScriptStringAndModelIndex);
        Com_Printf(19, "Bone %d: '%s'\n", (unsigned int)v2++, v15);
      }
      while ( v2 < numBones );
    }
    if ( v7 > 0 )
    {
      v16 = (unsigned int)v7;
      do
      {
        v17 = DObjGetBoneNameScriptStringAndModelIndex(obj, numBones | 0x8000, &outModelIndex);
        v18 = SL_ConvertToString(v17);
        Com_Printf(19, "Client Bone %d: '%s'\n", (unsigned int)numBones++, v18);
        --v16;
      }
      while ( v16 );
    }
    if ( obj->duplicateParts )
    {
      Com_Printf(19, "\nPart duplicates:\n");
      pairs = DObjGetDuplicateParts(obj)->pairs;
      if ( pairs->child )
      {
        do
        {
          v20 = DObjGetBoneNameScriptStringAndModelIndex(obj, pairs->parent - 1, &outModelIndex);
          v21 = SL_ConvertToString(v20);
          v22 = pairs->parent - 1;
          v23 = DObjGetBoneNameScriptStringAndModelIndex(obj, pairs->child - 1, (int *)&models);
          v24 = SL_ConvertToString(v23);
          LODWORD(v26) = v22;
          Com_Printf(19, "%d ('%s') -> %d ('%s')\n", (unsigned int)pairs->child - 1, v24, v26, v21);
          v25 = pairs[1].child == 0;
          ++pairs;
        }
        while ( !v25 );
      }
    }
    else
    {
      Com_Printf(19, "\nNo part duplicates.\n");
    }
    Com_Printf(19, "\n");
  }
  else
  {
    Com_Printf(19, "No Dobj\n");
  }
}

/*
==============
DObjFindAndAppendDuplicateClientBones
==============
*/
void DObjFindAndAppendDuplicateClientBones(const XModel *const *models, int modelIndex, const int *modelClientBoneOffsets, DObjBoneNameToBoneIndexMap_t<768> *clientBoneLookupMap, DObjDuplicateParts *inoutDuplicateParts, int *inoutNumDuplicateParts)
{
  __int64 v6; 
  const XModel *const *v7; 
  const XModel *v9; 
  __int64 numBones; 
  scr_string_t *boneNames; 
  int v12; 
  __int64 v13; 
  __int64 numClientBones; 
  int *v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  scr_string_t v19; 
  bool DuplicateBoneAndUpdateLookupTable_1_DObjBoneNameToBoneIndexMap_t_768; 
  int v21; 
  bool v22; 
  unsigned __int16 v23; 
  unsigned int *v24; 
  const XModel *const *v25; 
  unsigned int v26; 
  unsigned __int16 *v27; 
  unsigned int v28; 
  DObjBoneNameToBoneIndexMap_t<768> *lookupMap; 
  int *parentModelOut; 
  unsigned __int16 *parentBoneOut; 
  __int64 v32; 
  unsigned __int16 outIndex[2]; 
  unsigned __int16 v34; 
  int v35; 
  int v36; 
  unsigned __int16 *p_parent; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  int modelIndexa; 

  modelIndexa = modelIndex;
  v6 = modelIndex;
  v7 = models;
  v9 = models[modelIndex];
  if ( !v9 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 143, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    modelIndex = modelIndexa;
  }
  numBones = v9->numBones;
  boneNames = v9->boneNames;
  v12 = modelClientBoneOffsets[v6];
  v35 = v12;
  v13 = (__int64)&boneNames[numBones];
  numClientBones = v9->numClientBones;
  v15 = inoutNumDuplicateParts;
  v42 = v13;
  v41 = numClientBones;
  v16 = *inoutNumDuplicateParts;
  if ( numClientBones )
  {
    v17 = 0i64;
    v36 = modelIndex - 1;
    v38 = 0i64;
    v40 = v6 - 1;
    p_parent = &inoutDuplicateParts->pairs[v16].parent;
    do
    {
      v18 = v12 | 0x8000;
      if ( (v12 < 0 || (unsigned int)v18 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v12 | 0x8000u, "signed", v18) )
        __debugbreak();
      v19 = *(_DWORD *)(v13 + 4 * v17);
      DuplicateBoneAndUpdateLookupTable_1_DObjBoneNameToBoneIndexMap_t_768 = DObjCreateDuplicateParts_FindDuplicateBoneAndUpdateLookupTable_1_DObjBoneNameToBoneIndexMap_t_768___(v7, modelIndexa, v12 | 0x8000, v19, modelClientBoneOffsets, clientBoneLookupMap, &v39, &v34);
      v21 = v36;
      v22 = DuplicateBoneAndUpdateLookupTable_1_DObjBoneNameToBoneIndexMap_t_768;
      outIndex[0] = 255;
      v23 = 255;
      if ( v36 >= 0 )
      {
        v24 = (unsigned int *)&modelClientBoneOffsets[v40];
        v25 = &models[v40];
        do
        {
          if ( v9 != *v25 && XModelGetClientBoneIndex(*v25, v19, *v24, outIndex) )
            break;
          --v25;
          --v24;
          --v21;
        }
        while ( v21 >= 0 );
        v23 = outIndex[0];
        v12 = v35;
      }
      if ( v22 != (v23 != 255) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 408, ASSERT_TYPE_ASSERT, "(foundDuplicate == (testParentBoneIndex != 255))", (const char *)&queryFormat, "foundDuplicate == (testParentBoneIndex != NO_BONEINDEX)") )
          __debugbreak();
        v23 = outIndex[0];
      }
      if ( v22 )
      {
        if ( v34 != v23 )
        {
          LODWORD(v32) = v23;
          LODWORD(parentBoneOut) = v34;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 411, ASSERT_TYPE_ASSERT, "( parentBoneIndex ) == ( testParentBoneIndex )", "%s == %s\n\t%u, %u", "parentBoneIndex", "testParentBoneIndex", parentBoneOut, v32) )
            __debugbreak();
        }
        if ( v34 == 254 )
        {
          LODWORD(lookupMap) = 254;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 421, ASSERT_TYPE_ASSERT, "( ( parentBoneIndex != 254 ) )", "( parentBoneIndex ) = %i", lookupMap) )
            __debugbreak();
        }
        if ( (v34 & 0x7FFF) == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 422, ASSERT_TYPE_ASSERT, "((parentBoneIndex & ((1 << 15) - 1)) != modelClientBoneIndex + localBoneIndex)", (const char *)&queryFormat, "(parentBoneIndex & CLIENT_BONEINDEX_MASK) != modelClientBoneIndex + localBoneIndex") )
          __debugbreak();
        v26 = (unsigned __int16)v18 + 1;
        if ( v26 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v26, "signed", v26) )
          __debugbreak();
        v27 = p_parent;
        *(p_parent - 1) = v26;
        v28 = v34 + 1;
        if ( v28 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)(v34 + 1), "signed", v28) )
          __debugbreak();
        *v27 = v28;
        LODWORD(v16) = v16 + 1;
        p_parent = v27 + 2;
        if ( (unsigned int)v16 >= 0xFF )
        {
          LODWORD(parentModelOut) = 255;
          LODWORD(lookupMap) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 428, ASSERT_TYPE_ASSERT, "(unsigned)( numDuplicates ) < (unsigned)( ( sizeof( *array_counter( inoutDuplicateParts->pairs ) ) + 0 ) )", "numDuplicates doesn't index ARRAY_COUNT( inoutDuplicateParts->pairs )\n\t%i not in [0, %i)", lookupMap, parentModelOut) )
            __debugbreak();
        }
      }
      v7 = models;
      v13 = v42;
      v17 = v38 + 1;
      ++v12;
      v38 = v17;
      v35 = v12;
    }
    while ( v17 < v41 );
    v15 = inoutNumDuplicateParts;
  }
  *v15 = v16;
}

/*
==============
DObjFree
==============
*/
void DObjFree(DObj *obj)
{
  Profile_Begin(455);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1830, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1831, ASSERT_TYPE_ASSERT, "(obj->locked == qfalse)", (const char *)&queryFormat, "obj->locked == qfalse") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_free_submitted, "dobj_assert_on_free_submitted") && (obj->validation & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1836, ASSERT_TYPE_ASSERT, "(!(obj->validation & 0x01))", (const char *)&queryFormat, "!(obj->validation & DOBJVALIDATION_SUBMITTED)") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_free_submitted_dump, "dobj_assert_on_free_submitted_dump") && (obj->validation & 1) != 0 )
    CrashReport_TriggerNow();
  DObjFree_Internal(obj);
  Profile_EndInternal(NULL);
}

/*
==============
DObjFreeMaterialData
==============
*/
void DObjFreeMaterialData(DObj *obj)
{
  DObjMaterialData *materialData; 

  materialData = obj->materialData;
  if ( materialData )
  {
    MT_Free(materialData->modelEntityDataOffset, obj->numModels);
    MT_AlignedFree(obj->materialData, 0x48ui64, 8ui64);
    obj->materialData = NULL;
  }
}

/*
==============
DObjFreeMaterialOverrideEntry
==============
*/
void DObjFreeMaterialOverrideEntry(MaterialOverride *const materialOverride)
{
  MaterialTextureDef *materialTextureDefClone; 

  if ( !materialOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1376, ASSERT_TYPE_ASSERT, "(materialOverride)", (const char *)&queryFormat, "materialOverride") )
    __debugbreak();
  materialTextureDefClone = materialOverride->materialTextureDefClone;
  if ( materialOverride->overrideType == MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
  {
    if ( materialTextureDefClone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1386, ASSERT_TYPE_ASSERT, "(!materialOverride->materialTextureDefClone)", (const char *)&queryFormat, "!materialOverride->materialTextureDefClone") )
      __debugbreak();
  }
  else
  {
    if ( !materialTextureDefClone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1380, ASSERT_TYPE_ASSERT, "(materialOverride->materialTextureDefClone)", (const char *)&queryFormat, "materialOverride->materialTextureDefClone") )
      __debugbreak();
    if ( !materialOverride->originalMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1381, ASSERT_TYPE_ASSERT, "(materialOverride->originalMaterial)", (const char *)&queryFormat, "materialOverride->originalMaterial") )
      __debugbreak();
    MT_AlignedFree(materialOverride->materialTextureDefClone, 16i64 * materialOverride->originalMaterial->textureCount, 8ui64);
  }
  MT_AlignedFree(materialOverride, 0x20ui64, 8ui64);
}

/*
==============
DObjFreeMaterialOverrides
==============
*/
void DObjFreeMaterialOverrides(DObj *obj)
{
  unsigned int NumModels; 
  __int64 v3; 
  __int64 v4; 
  XModelMaterialOverride *modelMaterialOverrides; 
  unsigned int i; 
  __int64 v7; 
  MaterialOverride *v8; 
  unsigned int materialOverrideCount; 
  MaterialOverride **materialOverride; 
  __int64 v11; 
  unsigned __int8 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( obj->modelMaterialOverrides )
  {
    NumModels = DObjGetNumModels(obj);
    if ( NumModels )
    {
      v3 = 0i64;
      v4 = NumModels;
      do
      {
        modelMaterialOverrides = obj->modelMaterialOverrides;
        for ( i = 0; i < modelMaterialOverrides[v3].materialOverrideCount; ++i )
        {
          v7 = i;
          v8 = modelMaterialOverrides[v3].materialOverride[v7];
          if ( v8 )
          {
            DObjFreeMaterialOverrideEntry(v8);
            modelMaterialOverrides = obj->modelMaterialOverrides;
            modelMaterialOverrides[v3].materialOverride[v7] = NULL;
          }
        }
        materialOverrideCount = modelMaterialOverrides[v3].materialOverrideCount;
        if ( materialOverrideCount )
        {
          materialOverride = modelMaterialOverrides[v3].materialOverride;
          v11 = materialOverrideCount;
          if ( !materialOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 82, ASSERT_TYPE_ASSERT, "(p)", (const char *)&queryFormat, "p") )
            __debugbreak();
          v12 = *((_BYTE *)materialOverride - 1);
          if ( !v12 )
          {
            LODWORD(v13) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 97, ASSERT_TYPE_ASSERT, "( alignPad ) > ( 0 )", "%s > %s\n\t%u, %u", "alignPad", "0", v13, 0i64) )
              __debugbreak();
          }
          if ( v12 > 8u )
          {
            LODWORD(v14) = 8;
            LODWORD(v13) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 98, ASSERT_TYPE_ASSERT, "( alignPad ) <= ( alignment )", "%s <= %s\n\t%u, %u", "alignPad", "alignment", v13, v14) )
              __debugbreak();
          }
          MT_Free((char *)materialOverride - v12, 8 * v11 + 8);
        }
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    MT_AlignedFree(obj->modelMaterialOverrides, 16i64 * NumModels, 8ui64);
    obj->modelMaterialOverrides = NULL;
  }
}

/*
==============
DObjFree_Internal
==============
*/
void DObjFree_Internal(DObj *obj)
{
  int *parentSlots; 
  vec3_t *offsets; 
  vec4_t *quats; 
  const XModel **models; 
  GpuLightGridRequestRecord *lastGpuLightGridRequest; 
  scr_string_t duplicateParts; 
  DObjMaterialData *materialData; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1748, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_free_submitted, "dobj_assert_on_free_submitted") && (obj->validation & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1753, ASSERT_TYPE_ASSERT, "(!(obj->validation & 0x01))", (const char *)&queryFormat, "!(obj->validation & DOBJVALIDATION_SUBMITTED)") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_free_submitted_dump, "dobj_assert_on_free_submitted_dump") && (obj->validation & 1) != 0 )
    CrashReport_TriggerNow();
  parentSlots = obj->parentSlots;
  if ( parentSlots )
  {
    MT_AlignedFree(parentSlots, 4i64 * obj->numModels, 4ui64);
    obj->parentSlots = NULL;
  }
  offsets = obj->offsets;
  if ( offsets )
  {
    MT_AlignedFree(offsets, 12i64 * obj->numModels, 4ui64);
    obj->offsets = NULL;
  }
  quats = obj->quats;
  if ( quats )
  {
    MT_AlignedFree(quats, 16i64 * obj->numModels, 4ui64);
    obj->quats = NULL;
  }
  models = obj->models;
  if ( models )
  {
    MT_AlignedFree(models, 9i64 * obj->numModels, 8ui64);
    obj->models = NULL;
  }
  lastGpuLightGridRequest = obj->lastGpuLightGridRequest;
  if ( lastGpuLightGridRequest )
  {
    MT_AlignedFree(lastGpuLightGridRequest, 16i64 * obj->numModels, 4ui64);
    obj->lastGpuLightGridRequest = NULL;
  }
  if ( obj->tree )
  {
    if ( !obj->tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1797, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
      __debugbreak();
    obj->tree = NULL;
  }
  if ( !g_empty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 252, ASSERT_TYPE_ASSERT, "(g_empty != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "g_empty != NULL_SCR_STRING") )
    __debugbreak();
  duplicateParts = obj->duplicateParts;
  if ( duplicateParts )
  {
    if ( duplicateParts != g_empty )
      SL_RemoveRefToStringOfSize(duplicateParts, 4 * obj->duplicatePartsSize + 36);
    obj->duplicatePartsSize = 0;
    obj->duplicateParts = 0;
  }
  materialData = obj->materialData;
  if ( materialData )
  {
    MT_Free(materialData->modelEntityDataOffset, obj->numModels);
    MT_AlignedFree(obj->materialData, 0x48ui64, 8ui64);
  }
  obj->materialData = NULL;
  DObjFreeMaterialOverrides(obj);
  obj->modelMaterialOverrides = NULL;
  DObjFreeProceduralBones(obj);
  obj->numModels = 0;
}

/*
==============
DObjGetBasePoseMatrix
==============
*/
void DObjGetBasePoseMatrix(const DObj *obj, unsigned __int16 boneIndex, DObjAnimMat *outMat)
{
  int v6; 
  __int64 SkelBoneIndex; 
  const XModel *v8; 
  int v9; 
  __m256i v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v14; 
  DObjAnimMat mat[4094]; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4020, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !outMat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4021, ASSERT_TYPE_ASSERT, "(outMat)", (const char *)&queryFormat, "outMat") )
    __debugbreak();
  v6 = boneIndex;
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, boneIndex);
  if ( (unsigned int)SkelBoneIndex >= DObjTotalNumBones(obj) )
  {
    v13 = DObjTotalNumBones(obj);
    LODWORD(v12) = SkelBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4025, ASSERT_TYPE_ASSERT, "(unsigned)( skelBoneIndex ) < (unsigned)( DObjTotalNumBones( obj ) )", "skelBoneIndex doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v8 = *obj->models;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( (int)SkelBoneIndex < v8->numBones || (boneIndex & 0x8000u) != 0 && (int)SkelBoneIndex < XModelTotalNumBones(*obj->models) )
  {
    v10 = (__m256i)XModelGetBasePose(*obj->models)[SkelBoneIndex];
  }
  else
  {
    v9 = DObjTotalNumBones(obj);
    if ( v9 == DObjGetNumModels(obj) )
    {
      v10 = *(__m256i *)XModelGetBasePose(obj->models[SkelBoneIndex]);
    }
    else
    {
      v11 = DObjTotalNumBones(obj);
      if ( v11 == DObjNumClientOnlyBones(obj) )
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&v14);
      else
        DObjGetHierarchyBits(obj, v6, (DObjPartBits *)&v14);
      DObjCalcBaseSkel(obj, mat, (DObjPartBits *)&v14);
      v10 = (__m256i)mat[SkelBoneIndex];
    }
  }
  *(__m256i *)outMat = v10;
}

/*
==============
DObjGetBoneIndexFromModelRange
==============
*/
__int64 DObjGetBoneIndexFromModelRange(const DObj *obj, scr_string_t name, int startModel, int lastModelInclusive, unsigned __int8 *index)
{
  __int64 v5; 
  __int64 v7; 
  const char *v9; 
  __int64 v10; 
  __int64 numModels; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  const XModel **v16; 
  const XModel *v17; 
  scr_string_t v18; 
  __int64 v19; 
  const XModel *v20; 
  __int64 v21; 
  __int64 v22; 
  const XModel **models; 

  v5 = lastModelInclusive;
  v7 = startModel;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3647, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3648, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v9 = SL_ConvertToString(name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3650, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v9) )
      __debugbreak();
  }
  v10 = *index;
  if ( (_DWORD)v10 == 255 )
    return 0i64;
  numModels = obj->numModels;
  models = obj->models;
  if ( (int)v7 >= (int)numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3662, ASSERT_TYPE_ASSERT, "( startModel ) < ( numModels )", "%s < %s\n\t%i, %i", "startModel", "numModels", v7, numModels) )
    __debugbreak();
  if ( (int)v5 >= (int)numModels )
  {
    LODWORD(v22) = numModels;
    LODWORD(v21) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3663, ASSERT_TYPE_ASSERT, "( lastModelInclusive ) < ( numModels )", "%s < %s\n\t%i, %i", "lastModelInclusive", "numModels", v21, v22) )
      __debugbreak();
  }
  if ( (int)v5 >= 0 && (int)v7 > (int)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3664, ASSERT_TYPE_ASSERT, "((lastModelInclusive < 0) || (startModel <= lastModelInclusive))", (const char *)&queryFormat, "(lastModelInclusive < 0) || (startModel <= lastModelInclusive)") )
    __debugbreak();
  v13 = v7;
  v14 = 0;
  if ( (unsigned int)v10 < DObjNumBones(obj) && (_DWORD)numModels )
  {
    v15 = 0i64;
    while ( 1 )
    {
      v16 = models;
      v17 = models[v15];
      if ( v15 >= v13 )
      {
        if ( (int)v5 >= 0 && v15 > v5 )
          goto LABEL_37;
        if ( (unsigned int)v10 < XModelNumBones(models[v15]) )
          break;
      }
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      ++v15;
      v10 = (unsigned int)v10 - v17->numBones;
      if ( v15 >= numModels )
        goto LABEL_36;
    }
    v18 = name;
    if ( name == v17->boneNames[v10] )
      return 1i64;
    v16 = models;
  }
  else
  {
LABEL_36:
    v16 = models;
LABEL_37:
    v18 = name;
  }
  if ( (_DWORD)numModels )
  {
    v19 = 0i64;
    while ( 1 )
    {
      v20 = v16[v19];
      if ( v19 >= v13 )
      {
        if ( (int)v5 >= 0 && v19 > v5 )
          break;
        if ( XModelGetBoneIndex(v16[v19], v18, v14, index) )
          return 1i64;
      }
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      ++v19;
      v14 += v20->numBones;
      if ( v19 >= (int)numModels )
        break;
      v16 = models;
      v18 = name;
    }
  }
  *index = -1;
  return 0i64;
}

/*
==============
DObjGetBoneIndexFromStartModel
==============
*/
int DObjGetBoneIndexFromStartModel(const DObj *obj, scr_string_t name, int startModel, unsigned __int8 *index)
{
  return DObjGetBoneIndexFromModelRange(obj, name, startModel, -1, index);
}

/*
==============
DObjGetBoneIndexFromStartModelClient
==============
*/
__int64 DObjGetBoneIndexFromStartModelClient(const DObj *obj, scr_string_t name, int startModel, unsigned __int16 *inoutIndex)
{
  __int64 v4; 
  const char *v8; 
  int NumModels; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int NumBones; 
  __int64 v14; 
  __int64 v15; 
  const XModel *v16; 
  const XModel **models; 
  unsigned __int8 index; 

  v4 = startModel;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3728, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3729, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v8 = SL_ConvertToString(name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3732, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v8) )
      __debugbreak();
  }
  if ( (obj->flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3735, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  if ( *inoutIndex == 255 )
    return 0i64;
  models = obj->models;
  NumModels = DObjGetNumModels(obj);
  v11 = NumModels;
  if ( (int)v4 >= NumModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3745, ASSERT_TYPE_ASSERT, "(startModel < numModels)", (const char *)&queryFormat, "startModel < numModels") )
    __debugbreak();
  v12 = 0;
  NumBones = DObjGetNumBones(obj);
  v14 = v11;
  if ( (int)v11 <= 0 )
  {
LABEL_27:
    *inoutIndex = 255;
    return 0i64;
  }
  v15 = 0i64;
  while ( 1 )
  {
    v16 = models[v15];
    if ( v15 < v4 )
      goto LABEL_23;
    index = -2;
    if ( XModelGetBoneIndex(v16, name, v12, &index) )
      break;
    if ( XModelGetClientBoneIndex(v16, name, NumBones, inoutIndex) )
      return 1i64;
LABEL_23:
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    ++v15;
    v12 += v16->numBones;
    NumBones += v16->numClientBones;
    if ( v15 >= v14 )
      goto LABEL_27;
  }
  *inoutIndex = index;
  return 1i64;
}

/*
==============
DObjGetBoneName
==============
*/
const char *DObjGetBoneName(const DObj *obj, int boneIndex)
{
  scr_string_t BoneNameScriptStringAndModelIndex; 
  int outModelIndex; 

  BoneNameScriptStringAndModelIndex = DObjGetBoneNameScriptStringAndModelIndex(obj, boneIndex, &outModelIndex);
  return SL_ConvertToString(BoneNameScriptStringAndModelIndex);
}

/*
==============
DObjGetBoneNameScriptString
==============
*/
scr_string_t DObjGetBoneNameScriptString(const DObj *obj, int boneIndex)
{
  int outModelIndex; 

  return DObjGetBoneNameScriptStringAndModelIndex(obj, boneIndex, &outModelIndex);
}

/*
==============
DObjGetBoneNameScriptStringAndModelIndex
==============
*/
__int64 DObjGetBoneNameScriptStringAndModelIndex(const DObj *obj, int boneIndex, int *outModelIndex)
{
  const XModel **models; 
  __int64 numModels; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  const XModel *v13; 
  int v14; 
  int numClientBones; 
  int v17; 
  int v18; 
  __int64 v19; 
  const XModel *v20; 
  int v21; 
  scr_string_t *v22; 
  int numBones; 
  const XModel **v24; 
  scr_string_t *boneNames; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3057, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !outModelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3058, ASSERT_TYPE_ASSERT, "(outModelIndex)", (const char *)&queryFormat, "outModelIndex") )
    __debugbreak();
  *outModelIndex = -1;
  if ( (unsigned int)(boneIndex - 254) <= 1 )
    return 0i64;
  models = obj->models;
  numModels = obj->numModels;
  v24 = models;
  if ( (boneIndex & 0x8000) != 0 )
  {
    if ( (obj->flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3071, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
      __debugbreak();
    v8 = boneIndex & 0x7FFF;
    v9 = DObjNumBones(obj);
    v10 = 0;
    v11 = v9;
    if ( numModels )
    {
      v12 = 0i64;
      while ( 1 )
      {
        v13 = models[v12];
        v14 = v8 - v11;
        numClientBones = v13->numClientBones;
        boneNames = v13->boneNames;
        if ( v8 - v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3082, ASSERT_TYPE_ASSERT, "(index >= 0)", (const char *)&queryFormat, "index >= 0") )
          __debugbreak();
        if ( v14 < numClientBones )
          break;
        models = v24;
        v11 += numClientBones;
        ++v10;
        if ( ++v12 >= numModels )
          return 0i64;
      }
      *outModelIndex = v10;
      return (unsigned int)boneNames[v14 + (__int64)XModelNumBones(v13)];
    }
    return 0i64;
  }
  v17 = 0;
  v18 = 0;
  if ( !numModels )
    return 0i64;
  v19 = 0i64;
  while ( 1 )
  {
    v20 = models[v19];
    v21 = boneIndex - v17;
    v22 = v20->boneNames;
    numBones = v20->numBones;
    if ( boneIndex - v17 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3102, ASSERT_TYPE_ASSERT, "(index >= 0)", (const char *)&queryFormat, "index >= 0") )
      __debugbreak();
    if ( v21 < numBones )
      break;
    models = v24;
    v17 += numBones;
    ++v18;
    if ( ++v19 >= numModels )
      return 0i64;
  }
  *outModelIndex = v18;
  return (unsigned int)v22[v21];
}

/*
==============
DObjGetBounds
==============
*/
void DObjGetBounds(const DObj *obj, Bounds *bounds)
{
  float radius; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2126, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  radius = obj->radius;
  *(_QWORD *)bounds->midPoint.v = 0i64;
  bounds->midPoint.v[2] = 0.0;
  bounds->halfSize.v[0] = radius;
  bounds->halfSize.v[1] = radius;
  bounds->halfSize.v[2] = radius;
}

/*
==============
DObjGetClientBoneOffset
==============
*/

int __fastcall DObjGetClientBoneOffset(const DObj *obj)
{
  return DObjNumBones(obj);
}

/*
==============
DObjGetContents
==============
*/
__int64 DObjGetContents(const DObj *obj)
{
  unsigned int v1; 
  int v3; 
  __int64 v4; 
  const XModel *v5; 

  v1 = 0;
  v3 = 0;
  if ( obj->numModels )
  {
    v4 = 0i64;
    do
    {
      v5 = obj->models[v4];
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 165, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      v1 |= v5->contents;
      ++v3;
      ++v4;
    }
    while ( v3 < obj->numModels );
  }
  return v1;
}

/*
==============
DObjGetContentsLocal
==============
*/
__int64 DObjGetContentsLocal(const DObj *obj)
{
  __int64 numModels; 
  __int64 result; 
  const XModel **models; 
  __int64 v4; 

  numModels = obj->numModels;
  result = 0i64;
  if ( obj->numModels )
  {
    models = obj->models;
    do
    {
      v4 = (__int64)*models++;
      result = *(_DWORD *)(v4 + 32) | (unsigned int)result;
      --numModels;
    }
    while ( numModels );
  }
  return result;
}

/*
==============
DObjGetCreateParms
==============
*/
void DObjGetCreateParms(const DObj *obj, DObjModel *dobjModels, unsigned __int16 *numModels, XAnimTree **tree, unsigned __int16 *entnum)
{
  int v9; 
  __int64 v10; 
  int *parentSlots; 
  char *v12; 
  int *p_parentSlot; 
  __int64 v14; 
  const XModel **v15; 
  int v16; 
  const XModel *v17; 
  __int64 v18; 
  unsigned __int8 v19; 
  int v20; 
  const XModel *v21; 
  const XModel **v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  const XModel *v26; 
  const scr_string_t *v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  vec3_t *offsets; 
  vec4_t *quats; 
  __int64 v33; 
  const XModel **models; 
  char *v35; 
  char *v36; 
  int v37[256]; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1866, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( ((obj->numModels + 1) & 0xFE) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1867, ASSERT_TYPE_ASSERT, "(obj->numModels > 0 && obj->numModels <= ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "obj->numModels > 0 && obj->numModels <= DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1868, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1869, ASSERT_TYPE_ASSERT, "(numModels)", (const char *)&queryFormat, "numModels") )
    __debugbreak();
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1870, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  v9 = 0;
  *numModels = obj->numModels;
  *tree = obj->tree;
  *entnum = obj->entnum;
  v10 = obj->numModels;
  parentSlots = obj->parentSlots;
  offsets = obj->offsets;
  quats = obj->quats;
  models = obj->models;
  if ( (_BYTE)v10 )
  {
    v35 = (char *)&obj->models[v10] + 1;
    v12 = (char *)((char *)v37 - (char *)parentSlots);
    p_parentSlot = &dobjModels->parentSlot;
    v14 = -1i64;
    v36 = (char *)((char *)v37 - (char *)parentSlots);
    v33 = -1i64;
    v15 = obj->models;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      *(int *)((char *)parentSlots + (_QWORD)v12) = v16;
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      v16 += v17->numBones;
      *(_QWORD *)(p_parentSlot - 3) = *v15;
      v30 = v16;
      *(p_parentSlot - 1) = 0;
      if ( (unsigned int)v9 >= 0x100 )
      {
        LODWORD(v29) = 256;
        LODWORD(v28) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v28, v29) )
          __debugbreak();
      }
      *((_BYTE *)p_parentSlot + 32) = ((0x80000000 >> (v9 & 0x1F)) & obj->ignoreCollision.array[(unsigned __int64)(unsigned int)v9 >> 5]) != 0;
      v18 = *parentSlots;
      *p_parentSlot = v18;
      *(double *)(p_parentSlot + 1) = *(double *)offsets->v;
      p_parentSlot[3] = LODWORD(offsets->v[2]);
      *((vec4_t *)p_parentSlot + 1) = *quats;
      v19 = v35[v14];
      if ( v19 == 0xFF )
        goto LABEL_43;
      if ( (int)v18 >= 0 )
        break;
      v24 = v14;
      if ( v9 > 0 )
      {
        while ( 1 )
        {
          v25 = v37[v24];
          if ( v19 >= v25 )
            break;
          if ( --v24 < 0 )
            goto LABEL_43;
        }
        v20 = v19 - v25;
        v26 = models[v24];
        v22 = &models[v24];
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( v20 >= v26->numBones )
        {
          v23 = 1915;
          goto LABEL_40;
        }
LABEL_42:
        v27 = XModelBoneNames(*v22);
        v16 = v30;
        v14 = v33;
        *(p_parentSlot - 1) = v27[v20];
      }
LABEL_43:
      ++offsets;
      ++v14;
      ++quats;
      ++v9;
      v12 = v36;
      ++v15;
      ++parentSlots;
      v33 = v14;
      p_parentSlot += 20;
      if ( v9 >= obj->numModels )
        return;
    }
    v20 = v19 - v37[v18];
    v21 = models[v18];
    v22 = &models[v18];
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( v20 >= v21->numBones )
    {
      v23 = 1904;
LABEL_40:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", v23, ASSERT_TYPE_ASSERT, "(boneIndex < XModelNumBones( models[parentModelIndex] ))", (const char *)&queryFormat, "boneIndex < XModelNumBones( models[parentModelIndex] )") )
        __debugbreak();
    }
    goto LABEL_42;
  }
}

/*
==============
DObjGetDuplicateParts
==============
*/
const DObjDuplicateParts *DObjGetDuplicateParts(const DObj *obj)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 243, ASSERT_TYPE_ASSERT, "(obj != 0)", (const char *)&queryFormat, "obj != NULL") )
    __debugbreak();
  if ( !obj->duplicateParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 244, ASSERT_TYPE_ASSERT, "(obj->duplicateParts != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "obj->duplicateParts != NULL_SCR_STRING") )
    __debugbreak();
  return (const DObjDuplicateParts *)SL_ConvertToString(obj->duplicateParts);
}

/*
==============
DObjGetFirstModel
==============
*/
const XModel *DObjGetFirstModel(const DObj *obj)
{
  return *obj->models;
}

/*
==============
DObjGetHierarchyBits
==============
*/
void DObjGetHierarchyBits(const DObj *obj, int boneIndex, DObjPartBits *partBits)
{
  int v6; 
  int v7; 
  __int64 numModels; 
  const DObjDuplicateParts *DuplicateParts; 
  const XModel **models; 
  int v11; 
  const DObjDuplicateParts *v12; 
  const XModel *v13; 
  int v14; 
  const XModel **v15; 
  __int64 i; 
  unsigned __int8 *parentList; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  unsigned int v21; 
  int v22; 
  DObjDuplicatePair *j; 
  __int64 v24; 
  const XModel **v25; 
  const DObjDuplicateParts *v27; 
  int v28[256]; 

  Profile_Begin(457);
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1180, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1181, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( (unsigned int)(boneIndex - 254) > 1 )
  {
    v6 = boneIndex & 0x7FFF;
    v7 = DObjNumBones(obj);
    if ( (boneIndex & 0x8000) == 0 )
      goto LABEL_11;
    if ( v6 >= v7 )
    {
      v7 = DObjTotalNumBones(obj);
LABEL_11:
      if ( v6 < v7 )
        goto LABEL_14;
    }
  }
  LODWORD(v24) = boneIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1183, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( obj, boneIndex ) ) )", "( boneIndex ) = %i", v24) )
    __debugbreak();
LABEL_14:
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(partBits);
  if ( (boneIndex & 0x8000) != 0 )
  {
    partBits->array[7] |= 2u;
    DObjAddClientBoneParentPartBits(obj, partBits);
    DObjCompleteHierarchyBits(obj, partBits);
    goto LABEL_33;
  }
  numModels = obj->numModels;
  if ( !obj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1198, ASSERT_TYPE_ASSERT, "(numModels > 0)", (const char *)&queryFormat, "numModels > 0") )
    __debugbreak();
  DuplicateParts = DObjGetDuplicateParts(obj);
  models = obj->models;
  v11 = 0;
  v27 = DuplicateParts;
  v12 = DuplicateParts;
  v13 = NULL;
  v14 = 0;
  v15 = &models[numModels];
  v25 = v15;
  if ( (_DWORD)numModels )
  {
    for ( i = 0i64; i < numModels; ++i )
    {
      v13 = models[i];
      v28[i] = v11;
      v11 += v13->numBones;
      if ( v11 > boneIndex )
        break;
      ++v14;
    }
  }
  if ( v14 != (_DWORD)numModels )
  {
    partBits->array[0] |= 0x80000000;
    parentList = v13->parentList;
    v18 = v14;
    while ( 1 )
    {
      v19 = boneIndex - v28[v18];
      while ( 1 )
      {
        if ( v19 < 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1236, ASSERT_TYPE_ASSERT, "(localBoneIndex >= 0)", (const char *)&queryFormat, "localBoneIndex >= 0") )
            __debugbreak();
          v15 = v25;
        }
        v20 = (__int64)boneIndex >> 5;
        v21 = 0x80000000 >> (boneIndex & 0x1F);
        partBits->array[v20] |= v21;
        if ( (v21 & v12->partBits.array[v20]) != 0 )
        {
          for ( j = v12->pairs; ; ++j )
          {
            if ( !j->child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1264, ASSERT_TYPE_ASSERT, "(pos->child)", (const char *)&queryFormat, "pos->child") )
              __debugbreak();
            if ( boneIndex == j->child - 1 )
              break;
          }
          boneIndex = j->parent - 1;
          goto LABEL_41;
        }
        v22 = v19 - v13->numRootBones;
        if ( v22 >= 0 )
          break;
        boneIndex = *((unsigned __int8 *)v15 + v18);
        if ( boneIndex == 255 )
          goto LABEL_33;
        do
        {
LABEL_41:
          --v14;
          if ( --v18 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1277, ASSERT_TYPE_ASSERT, "(j >= 0)", (const char *)&queryFormat, "j >= 0") )
            __debugbreak();
          v19 = boneIndex - v28[v18];
        }
        while ( v19 < 0 );
        v12 = v27;
        v15 = v25;
        v13 = models[v18];
        parentList = v13->parentList;
      }
      boneIndex -= parentList[v22];
    }
  }
LABEL_33:
  Profile_EndInternal(NULL);
}

/*
==============
DObjGetModelBoneIndex
==============
*/
__int64 DObjGetModelBoneIndex(const DObj *obj, const char *modelName, scr_string_t name, unsigned __int8 *index)
{
  unsigned __int8 *v5; 
  const char *v8; 
  __int64 v9; 
  unsigned int v11; 
  const XModel **models; 
  __int64 numModels; 
  __int64 v14; 
  const XModel *v15; 
  unsigned int numBones; 
  __int64 i; 
  __int64 v18; 
  const XModel *v19; 
  const char *v20; 
  const char *v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 

  v5 = index;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3889, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3890, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v8 = SL_ConvertToString(name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3892, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v8) )
      __debugbreak();
  }
  v9 = *v5;
  if ( (_DWORD)v9 == 255 )
    return 0i64;
  v11 = 0;
  models = obj->models;
  numModels = obj->numModels;
  if ( (unsigned int)v9 >= obj->numBones )
  {
LABEL_20:
    if ( numModels )
    {
      for ( i = 0i64; i < numModels; ++i )
      {
        v18 = 0x7FFFFFFFi64;
        v19 = models[i];
        v20 = v19->name;
        if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v21 = (const char *)(modelName - v20);
        do
        {
          v22 = (unsigned __int8)v20[(_QWORD)v21];
          v23 = v18;
          v24 = *(unsigned __int8 *)v20++;
          --v18;
          if ( !v23 )
            break;
          if ( v22 != v24 )
          {
            v25 = v22 + 32;
            if ( (unsigned int)(v22 - 65) > 0x19 )
              v25 = v22;
            v22 = v25;
            v26 = v24 + 32;
            if ( (unsigned int)(v24 - 65) > 0x19 )
              v26 = v24;
            if ( v22 != v26 )
              goto LABEL_38;
          }
        }
        while ( v22 );
        if ( XModelGetBoneIndex(v19, name, v11, index) )
          return 1i64;
LABEL_38:
        v11 += v19->numBones;
      }
      v5 = index;
    }
    goto LABEL_40;
  }
  if ( obj->numModels )
  {
    v14 = 0i64;
    while ( 1 )
    {
      v15 = models[v14];
      numBones = v15->numBones;
      if ( (unsigned int)v9 < numBones )
        break;
      v9 = (unsigned int)v9 - numBones;
      if ( ++v14 >= numModels )
        goto LABEL_20;
    }
    if ( name == v15->boneNames[v9] && !I_stricmp(modelName, v15->name) )
      return 1i64;
    goto LABEL_20;
  }
LABEL_40:
  *v5 = -1;
  return 0i64;
}

/*
==============
DObjGetModelParentBoneName
==============
*/
const char *DObjGetModelParentBoneName(const DObj *obj, int modelIndex)
{
  __int64 v2; 
  scr_string_t BoneNameScriptStringAndModelIndex; 
  __int64 v6; 
  int outModelIndex; 

  v2 = modelIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3134, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (int)v2 >= obj->numModels )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3135, ASSERT_TYPE_ASSERT, "( ( modelIndex < obj->numModels ) )", "( modelIndex ) = %i", v6) )
      __debugbreak();
  }
  BoneNameScriptStringAndModelIndex = DObjGetBoneNameScriptStringAndModelIndex(obj, *((unsigned __int8 *)&obj->models[obj->numModels] + v2), &outModelIndex);
  return SL_ConvertToString(BoneNameScriptStringAndModelIndex);
}

/*
==============
DObjGetModelParentBoneNameScriptString
==============
*/
scr_string_t DObjGetModelParentBoneNameScriptString(const DObj *obj, int modelIndex)
{
  __int64 v2; 
  __int64 v5; 
  int outModelIndex; 

  v2 = modelIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3134, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (int)v2 >= obj->numModels )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3135, ASSERT_TYPE_ASSERT, "( ( modelIndex < obj->numModels ) )", "( modelIndex ) = %i", v5) )
      __debugbreak();
  }
  return DObjGetBoneNameScriptStringAndModelIndex(obj, *((unsigned __int8 *)&obj->models[obj->numModels] + v2), &outModelIndex);
}

/*
==============
DObjGetModelRootBoneIndex
==============
*/
unsigned __int8 DObjGetModelRootBoneIndex(const DObj *obj, int modelIndex)
{
  __int64 v2; 
  const XModel **models; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  const XModel *v8; 

  v2 = modelIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3971, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (int)v2 >= obj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3972, ASSERT_TYPE_ASSERT, "(modelIndex < obj->numModels)", (const char *)&queryFormat, "modelIndex < obj->numModels") )
    __debugbreak();
  models = obj->models;
  v5 = 0;
  v6 = v2;
  if ( (int)v2 > 0 )
  {
    v7 = 0i64;
    do
    {
      v8 = models[v7];
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      ++v7;
      v5 += v8->numBones;
    }
    while ( v7 < v6 );
  }
  return truncate_cast<unsigned char,unsigned int>(v5);
}

/*
==============
DObjGetName
==============
*/
const char *DObjGetName(const DObj *obj)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2195, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2196, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat, "obj->numModels > 0") )
    __debugbreak();
  if ( !*obj->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2197, ASSERT_TYPE_ASSERT, "(obj->models[0])", (const char *)&queryFormat, "obj->models[0]") )
    __debugbreak();
  return **(const char ***)obj->models;
}

/*
==============
DObjGetNextBoneIndex
==============
*/
unsigned __int8 DObjGetNextBoneIndex(const DObj *obj, scr_string_t name, unsigned __int8 lastIndex)
{
  const char *v6; 
  const XModel **models; 
  unsigned int v8; 
  unsigned int v9; 
  const XModel *v10; 
  unsigned __int8 index; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3816, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3817, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v6 = SL_ConvertToString(name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3819, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v6) )
      __debugbreak();
  }
  models = obj->models;
  v8 = 0;
  v9 = 0;
  if ( !obj->numModels )
    return -1;
  while ( 1 )
  {
    v10 = models[v9];
    if ( lastIndex == 0xFE || v8 > lastIndex )
    {
      if ( XModelGetBoneIndex(models[v9], name, v8, &index) )
        break;
    }
    ++v9;
    v8 += v10->numBones;
    if ( v9 >= obj->numModels )
      return -1;
  }
  return index;
}

/*
==============
DObjGetNextModelBoneIndex
==============
*/
unsigned __int8 DObjGetNextModelBoneIndex(const DObj *obj, const char *modelName, scr_string_t name, unsigned __int8 lastIndex)
{
  const char *v7; 
  const XModel **models; 
  unsigned int v9; 
  unsigned int v10; 
  const XModel *v11; 
  __int64 v12; 
  const char *v13; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  const XModel **v21; 
  unsigned __int8 index; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3847, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3848, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v7 = SL_ConvertToString(name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3850, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v7) )
      __debugbreak();
  }
  models = obj->models;
  v9 = 0;
  v10 = 0;
  v21 = models;
  if ( !obj->numModels )
    return -1;
  while ( 1 )
  {
    v11 = models[v10];
    if ( lastIndex == 0xFE || v9 > lastIndex )
      break;
LABEL_30:
    ++v10;
    v9 += v11->numBones;
    if ( v10 >= obj->numModels )
      return -1;
  }
  v12 = 0x7FFFFFFFi64;
  v13 = v11->name;
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v14 = (const char *)(modelName - v13);
  do
  {
    v15 = (unsigned __int8)v13[(_QWORD)v14];
    v16 = v12;
    v17 = *(unsigned __int8 *)v13++;
    --v12;
    if ( !v16 )
      break;
    if ( v15 != v17 )
    {
      v18 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v18 = v15;
      v15 = v18;
      v19 = v17 + 32;
      if ( (unsigned int)(v17 - 65) > 0x19 )
        v19 = v17;
      if ( v15 != v19 )
        goto LABEL_29;
    }
  }
  while ( v15 );
  if ( !XModelGetBoneIndex(v11, name, v9, &index) )
  {
LABEL_29:
    models = v21;
    goto LABEL_30;
  }
  return index;
}

/*
==============
DObjGetNumSurfaces
==============
*/
__int64 DObjGetNumSurfaces(const DObj *obj, const unsigned __int8 (*lods)[254])
{
  __int64 numModels; 
  unsigned int v3; 
  int v4; 
  const unsigned __int8 *v5; 
  const XModel **v6; 
  unsigned __int8 v7; 
  unsigned __int8 numLods; 
  __int64 v10; 
  __int64 v11; 

  numModels = obj->numModels;
  v3 = 0;
  v4 = numModels - 1;
  if ( (int)numModels - 1 >= 0 )
  {
    v5 = &(*lods)[numModels - 1];
    v6 = &obj->models[numModels - 1];
    do
    {
      v7 = *v5;
      if ( *v5 != 6 )
      {
        numLods = (*v6)->numLods;
        if ( v7 >= numLods )
        {
          LODWORD(v11) = numLods;
          LODWORD(v10) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3036, ASSERT_TYPE_ASSERT, "(unsigned)( lods[j] ) < (unsigned)( models[j]->numLods )", "lods[j] doesn't index models[j]->numLods\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        v3 += (*v6)->lodInfo[(unsigned __int64)*v5].numsurfs;
      }
      --v5;
      --v6;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return v3;
}

/*
==============
DObjGetRadius
==============
*/
float DObjGetRadius(const DObj *obj)
{
  if ( obj )
    return obj->radius;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2187, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return MEMORY[0xC8];
}

/*
==============
DObjGetReverseBoneIndex
==============
*/
unsigned __int8 DObjGetReverseBoneIndex(const DObj *obj, scr_string_t name)
{
  const char *v4; 
  const XModel **models; 
  unsigned int numBones; 
  __int64 v7; 
  const XModel *v8; 
  unsigned __int8 index; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3785, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3786, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v4 = SL_ConvertToString(name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3788, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v4) )
      __debugbreak();
  }
  models = obj->models;
  numBones = obj->numBones;
  v7 = obj->numModels - 1i64;
  if ( v7 < 0 )
    return -1;
  while ( 1 )
  {
    v8 = models[v7];
    numBones -= v8->numBones;
    if ( XModelGetBoneIndex(v8, name, numBones, &index) )
      break;
    if ( --v7 < 0 )
      return -1;
  }
  return index;
}

/*
==============
DObjGetReverseModelBoneIndex
==============
*/
unsigned __int8 DObjGetReverseModelBoneIndex(const DObj *obj, const char *modelName, scr_string_t name)
{
  const char *v6; 
  const XModel **models; 
  unsigned int numBones; 
  __int64 v9; 
  const XModel *v10; 
  __int64 v11; 
  const char *v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  unsigned __int8 index; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3943, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3944, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v6 = SL_ConvertToString(name);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3946, ASSERT_TYPE_ASSERT, "( ( SL_IsLowercaseString( name ) ) )", "( SL_ConvertToString( name ) ) = %s", v6) )
      __debugbreak();
  }
  models = obj->models;
  numBones = obj->numBones;
  v9 = obj->numModels - 1i64;
  if ( v9 >= 0 )
  {
    while ( 2 )
    {
      v10 = models[v9];
      v11 = 0x7FFFFFFFi64;
      v12 = v10->name;
      numBones -= v10->numBones;
      if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v13 = (const char *)(modelName - v12);
      do
      {
        v14 = (unsigned __int8)v12[(_QWORD)v13];
        v15 = v11;
        v16 = *(unsigned __int8 *)v12++;
        --v11;
        if ( !v15 )
          break;
        if ( v14 != v16 )
        {
          v17 = v14 + 32;
          v18 = v16 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v17 = v14;
          v14 = v17;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v18 = v16;
          if ( v17 != v18 )
            goto LABEL_27;
        }
      }
      while ( v14 );
      if ( XModelGetBoneIndex(v10, name, numBones, &index) )
        return index;
LABEL_27:
      if ( --v9 >= 0 )
        continue;
      break;
    }
  }
  return -1;
}

/*
==============
DObjGetSkelBoneMatrix
==============
*/
DObjAnimMat *DObjGetSkelBoneMatrix(const DObj *obj, int boneIndex)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3153, ASSERT_TYPE_ASSERT, "(obj != 0)", (const char *)&queryFormat, "obj != NULL") )
    __debugbreak();
  if ( !obj->skel.mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3154, ASSERT_TYPE_ASSERT, "(obj->skel.mat != 0)", (const char *)&queryFormat, "obj->skel.mat != NULL") )
    __debugbreak();
  return &obj->skel.mat[DObjGetSkelBoneIndex(obj, boneIndex)];
}

/*
==============
DObjGetStickerMaterialOverrides
==============
*/
void DObjGetStickerMaterialOverrides(const DObj *const obj, CharacterModelType *const dobjModelTypes, DObjStickerSlotList *stickerSlots)
{
  DObjStickerSlotList *v3; 
  const DObj *v4; 
  unsigned int v5; 
  __int64 NumModels; 
  __int64 v7; 
  __int64 v8; 
  const XModel *v9; 
  char *v10; 
  unsigned int v11; 
  __int64 v12; 
  Material *blankMaterial; 
  DObjStickerSlot *slots; 
  Material *overrideMaterial; 
  DObjStickerSlot *v16; 
  __int64 v17; 
  DObjStickerSlot *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  DObjStickerSlot right; 
  __int64 v26; 

  v3 = stickerSlots;
  v4 = obj;
  v5 = 0;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2682, ASSERT_TYPE_ASSERT, "( ( obj != nullptr ) )", "( obj ) = %p", NULL) )
    __debugbreak();
  NumModels = DObjGetNumModels(v4);
  memset_0(v3, 0, sizeof(DObjStickerSlotList));
  v22 = NumModels;
  if ( (int)NumModels > 0 )
  {
    v7 = 0i64;
    v26 = 0i64;
    v8 = 0i64;
    v21 = 0i64;
    do
    {
      v9 = v4->models[v7];
      if ( !v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2690, ASSERT_TYPE_ASSERT, "( ( model != nullptr ) )", "( model ) = %p", NULL) )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 247, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
      }
      if ( XModelGetLodInfo(v9, 0)->numsurfs && v9->decalVolumesInfo )
      {
        v10 = (char *)v4->modelMaterialOverrides + v8;
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2705, ASSERT_TYPE_ASSERT, "( ( modelMaterialOverride != nullptr ) )", "( modelMaterialOverride ) = %p", NULL) )
          __debugbreak();
        v11 = 0;
        if ( *(_DWORD *)v10 )
        {
          do
          {
            v12 = *(_QWORD *)(*((_QWORD *)v10 + 1) + 8i64 * v11);
            if ( *(_DWORD *)(v12 + 24) == 3 )
            {
              blankMaterial = *(Material **)v12;
              slots = v3->slots;
              overrideMaterial = *(Material **)(v12 + 8);
              right.blankMaterial = *(Material **)v12;
              right.overrideMaterial = overrideMaterial;
              v16 = &v3->slots[v5];
              v17 = (16i64 * v5) >> 4;
              if ( v17 > 0 )
              {
                do
                {
                  if ( DObjStickerSlotGreaterThan(&slots[v17 >> 1], &right) )
                  {
                    slots += (v17 >> 1) + 1;
                    v17 += -1 - (v17 >> 1);
                  }
                  else
                  {
                    v17 >>= 1;
                  }
                }
                while ( v17 > 0 );
                overrideMaterial = right.overrideMaterial;
                blankMaterial = right.blankMaterial;
                v3 = stickerSlots;
              }
              if ( slots == v16 || blankMaterial != slots->blankMaterial || overrideMaterial != slots->overrideMaterial )
              {
                if ( v5 >= 4 )
                {
                  LODWORD(v20) = 4;
                  LODWORD(v19) = v5;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2726, ASSERT_TYPE_ASSERT, "(unsigned)( stickerCount ) < (unsigned)( ( sizeof( *array_counter( stickerSlots.slots ) ) + 0 ) )", "stickerCount doesn't index ARRAY_COUNT( stickerSlots.slots )\n\t%i not in [0, %i)", v19, v20) )
                    __debugbreak();
                }
                if ( v16 != slots )
                {
                  v18 = v16 - 1;
                  do
                    *v16-- = *v18--;
                  while ( v16 != slots );
                }
                *slots = right;
                ++v5;
              }
            }
            ++v11;
          }
          while ( v11 < *(_DWORD *)v10 );
          v8 = v21;
          v4 = obj;
        }
      }
      v7 = v26 + 1;
      v8 += 16i64;
      v26 = v7;
      v21 = v8;
    }
    while ( v7 < v22 );
  }
}

/*
==============
DObjGetSurfaceData
==============
*/
void DObjGetSurfaceData(const DObj *obj, const vec3_t *origin, unsigned __int8 (*lods)[254], float (*materialLods)[254], const MaterialLodSettings *materialLodSettings)
{
  int NumModels; 
  __int64 v10; 
  __int64 v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  int v15; 
  __int128 v18; 
  float v20; 
  __int64 v21; 
  const XModel *Model; 
  unsigned int UsableLodForDist; 
  __int64 v27; 

  if ( !R_IsSceneModelAddThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4077, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4081, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  NumModels = DObjGetNumModels(obj);
  v10 = NumModels;
  if ( (unsigned int)NumModels > 0xFE )
  {
    LODWORD(v27) = NumModels;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4084, ASSERT_TYPE_SANITY, "( 0 ) <= ( modelCount ) && ( modelCount ) <= ( ( DOBJ_MAX_PARTS ) )", "modelCount not in [0, DOBJ_MAX_SUBMODELS]\n\t%i not in [%i, %i]", v27, 0i64, 254) )
      __debugbreak();
  }
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4086, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  v11 = v10;
  v12 = rg.lodParms.origin.v[0] - origin->v[0];
  v13 = LODWORD(rg.lodParms.origin.v[1]);
  *(float *)&v13 = rg.lodParms.origin.v[1] - origin->v[1];
  v14 = rg.lodParms.origin.v[2] - origin->v[2];
  v15 = 0;
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v12 * v12)) + (float)(v14 * v14)) - obj->radius;
  _XMM4 = v13;
  __asm { vmaxss  xmm6, xmm4, xmm7 }
  v18 = _XMM6;
  *(float *)&v18 = (float)((float)((float)((float)(*(float *)&_XMM6 * rg.lodParms.ramp.scale) + rg.lodParms.ramp.bias) + rg.lodParms.sceneSurfsBias) + rg.lodParms.subdivBias) + rg.lodParms.skinningBias;
  _XMM10 = v18;
  v20 = *(float *)&_XMM6 * rg.lodParms.cappedLodScale;
  if ( (int)v10 > 0 )
  {
    v21 = 0i64;
    do
    {
      Model = DObjGetModel(obj, v15);
      _XMM0 = (Model->flags & 0x40000) != 0;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm10, xmm8, xmm2; dist
      }
      UsableLodForDist = XModelGetUsableLodForDist(Model, *(const float *)&_XMM1, v20);
      (*lods)[v21] = truncate_cast<unsigned char,unsigned int>(UsableLodForDist);
      *(double *)&_XMM0 = XModelGetMaterialLodForDist(0.0, *(float *)&_XMM6, materialLodSettings);
      (*materialLods)[v21++] = *(float *)&_XMM0;
      ++v15;
    }
    while ( v21 < v11 );
  }
}

/*
==============
DObjGetTree
==============
*/
XAnimTree *DObjGetTree(const DObj *obj)
{
  if ( obj )
    return obj->tree;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3162, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return (XAnimTree *)MEMORY[0];
}

/*
==============
DObjGetVisibleBounds
==============
*/
void DObjGetVisibleBounds(const DObj *obj, Bounds *bounds)
{
  const XModel **models; 
  unsigned int v3; 
  const XModel *v6; 
  float radius; 
  XBoneInfo *boneInfo; 
  double v9; 
  DObjAnimMat *baseMat; 
  __int64 v11; 
  float v12; 
  __int64 v13; 
  __int64 v14; 
  Bounds added; 

  models = obj->models;
  v3 = 0;
  v6 = *models;
  radius = (*models)->radius;
  *(_QWORD *)bounds->midPoint.v = 0i64;
  bounds->midPoint.v[2] = 0.0;
  if ( radius == 0.0 )
  {
    *(_QWORD *)bounds->halfSize.v = 0i64;
    bounds->halfSize.v[2] = 0.0;
  }
  else
  {
    bounds->halfSize.v[0] = -3.4028235e38;
    bounds->halfSize.v[1] = -3.4028235e38;
    bounds->halfSize.v[2] = -3.4028235e38;
    if ( v6->numBones )
    {
      do
      {
        if ( v3 >= 0x100 )
        {
          LODWORD(v14) = 256;
          LODWORD(v13) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v13, v14) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v3 & 0x1F)) & obj->hidePartBits.array[(unsigned __int64)v3 >> 5]) == 0 )
        {
          boneInfo = v6->boneInfo;
          v9 = *(double *)&boneInfo[v3].bounds.halfSize.y;
          *(_OWORD *)added.midPoint.v = *(_OWORD *)boneInfo[v3].bounds.midPoint.v;
          *(double *)&added.halfSize.y = v9;
          if ( _mm_shuffle_ps(*(__m128 *)added.midPoint.v, *(__m128 *)added.midPoint.v, 255).m128_f32[0] != 0.0 && added.halfSize.v[1] != 0.0 && added.halfSize.v[2] != 0.0 )
          {
            baseMat = v6->baseMat;
            v11 = v3;
            v12 = added.midPoint.v[1] + baseMat[v11].trans.v[1];
            added.midPoint.v[0] = added.midPoint.v[0] + baseMat[v11].trans.v[0];
            added.midPoint.v[2] = added.midPoint.v[2] + baseMat[v11].trans.v[2];
            added.midPoint.v[1] = v12;
            Bounds_Expand(bounds, &added);
          }
        }
        ++v3;
      }
      while ( v3 < v6->numBones );
    }
  }
}

/*
==============
DObjHasClientFlag
==============
*/
bool DObjHasClientFlag(const DObj *dobj)
{
  return (dobj->flags & 8) != 0;
}

/*
==============
DObjHasContents
==============
*/
__int64 DObjHasContents(DObj *obj, int contentmask)
{
  __int64 v2; 

  if ( !obj->numModels )
    return 0i64;
  v2 = 0i64;
  while ( (contentmask & obj->models[v2]->contents) == 0 )
  {
    if ( ++v2 >= obj->numModels )
      return 0i64;
  }
  return 1i64;
}

/*
==============
DObjIgnoreCollision
==============
*/
bool DObjIgnoreCollision(const DObj *obj, int modelIndex)
{
  return bitarray_base<bitarray<256>>::testBit(&obj->ignoreCollision, modelIndex);
}

/*
==============
DObjInit
==============
*/
void DObjInit(void)
{
  char str[1056]; 

  memset_0(str, 0, 0x41Cui64);
  g_empty = j_SL_GetStringOfSize(str, 0, 0x24ui64, 12);
}

/*
==============
DObjIsValidBoneIndex
==============
*/
bool DObjIsValidBoneIndex(const DObj *obj, int boneIndex)
{
  __int16 v2; 
  int v4; 
  int v5; 

  v2 = boneIndex;
  if ( (unsigned int)(boneIndex - 254) <= 1 )
    return 0;
  v4 = boneIndex & 0x7FFF;
  v5 = DObjNumBones(obj);
  if ( (v2 & 0x8000) == 0 )
    return v4 < v5;
  return v4 >= v5 && v4 < DObjTotalNumBones(obj);
}

/*
==============
DObjPhysicsGetBounds
==============
*/
void DObjPhysicsGetBounds(const DObj *obj, Bounds *bounds)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2134, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !*obj->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2135, ASSERT_TYPE_ASSERT, "(obj->models[0])", (const char *)&queryFormat, "obj->models[0]") )
    __debugbreak();
  XModelGetBounds(*obj->models, bounds);
}

/*
==============
DObjRealloc
==============
*/
void DObjRealloc(DObjModel *dobjModels, unsigned int numModels, XAnimTree *tree, char *buf, unsigned int entnum, XAnimOwner owner)
{
  unsigned __int8 v10; 
  unsigned __int16 v11; 
  char v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int8 modelHierarchy[256]; 

  Profile_Begin(454);
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1519, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1520, ASSERT_TYPE_ASSERT, "(numModels > 0)", (const char *)&queryFormat, "numModels > 0") )
    __debugbreak();
  if ( numModels > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1521, ASSERT_TYPE_ASSERT, "((unsigned)numModels <= ( DOBJ_MAX_PARTS ))", (const char *)&queryFormat, "(unsigned)numModels <= DOBJ_MAX_SUBMODELS") )
    __debugbreak();
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1524, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !*((_DWORD *)buf + 13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1527, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  DObjFree_Internal((DObj *)buf);
  memset_0(buf + 56, 0, 0x90ui64);
  DObjClearSkelRecord((const DObj *)buf);
  v10 = buf[14];
  v11 = 0;
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1537, ASSERT_TYPE_ASSERT, "( obj->duplicatePartsSize ) == ( 0 )", "%s == %s\n\t%i, %i", "obj->duplicatePartsSize", "0", v10, 0i64) )
    __debugbreak();
  if ( *((_DWORD *)buf + 2) )
  {
    LODWORD(v14) = *((_DWORD *)buf + 2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1538, ASSERT_TYPE_ASSERT, "( obj->duplicateParts ) == ( ( static_cast< scr_string_t >( 0 ) ) )", "%s == %s\n\t%i, %i", "obj->duplicateParts", "NULL_SCR_STRING", v14, 0i64) )
      __debugbreak();
  }
  *(_QWORD *)(buf + 20) = 0i64;
  *(_QWORD *)(buf + 28) = 0i64;
  *(_QWORD *)(buf + 36) = 0i64;
  *(_QWORD *)(buf + 44) = 0i64;
  if ( (_BYTE)owner == DODGE && (buf[17] & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1542, ASSERT_TYPE_ASSERT, "(owner != XAnimOwner::CLIENT || DObjHasClientFlag( obj ))", (const char *)&queryFormat, "owner != XAnimOwner::CLIENT || DObjHasClientFlag( obj )") )
    __debugbreak();
  v12 = 0;
  if ( (_BYTE)owner == DODGE )
    v12 = 8;
  buf[17] = 0;
  buf[17] = v12;
  *((_WORD *)buf + 6) = entnum;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)(buf + 208));
  DObjCreateDuplicateParts((DObj *)buf, dobjModels, numModels, modelHierarchy);
  DObjComputeBounds((DObj *)buf, modelHierarchy);
  *(_QWORD *)buf = tree;
  if ( tree && tree->children )
    XAnimResetAnimMap((const DObj *)buf);
  if ( numModels )
  {
    while ( !XModelIsSkinned(dobjModels[v11].model) )
    {
      if ( ++v11 >= numModels )
        goto LABEL_36;
    }
    buf[17] |= 4u;
  }
LABEL_36:
  if ( numModels > 1 )
    buf[17] |= 0x20u;
  if ( *((_QWORD *)buf + 35) )
  {
    LODWORD(v13) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1574, ASSERT_TYPE_ASSERT, "( ( obj->materialData == 0 ) )", "( entnum ) = %i", v13) )
      __debugbreak();
  }
  if ( *((_QWORD *)buf + 34) )
  {
    LODWORD(v13) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1578, ASSERT_TYPE_ASSERT, "( ( obj->modelMaterialOverrides == 0 ) )", "( entnum ) = %i", v13) )
      __debugbreak();
  }
  Profile_EndInternal(NULL);
}

/*
==============
DObjResetPointers
==============
*/
void DObjResetPointers(DObj *obj)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1397, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  obj->offsets = NULL;
  obj->quats = NULL;
  obj->models = NULL;
  obj->parentSlots = NULL;
  obj->lastGpuLightGridRequest = NULL;
  obj->materialData = NULL;
  obj->modelMaterialOverrides = NULL;
}

/*
==============
DObjSetCamoMaterialOverride
==============
*/
void DObjSetCamoMaterialOverride(DObj *obj, DObjCamoParams *modelCamoParams, unsigned int numModels)
{
  unsigned int i; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2838, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  DObjAllocMaterialOverrides(obj);
  for ( i = 0; i < numModels; ++modelCamoParams )
    SetDObjCamoMaterialOverride_Internal(obj, i++, modelCamoParams);
}

/*
==============
DObjSetCamoMaterialOverride
==============
*/
void DObjSetCamoMaterialOverride(DObj *obj, DObjModel *dobjModels, int numModels)
{
  int v6; 
  DObjCamoParams *p_camoParams; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2851, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2852, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  DObjAllocMaterialOverrides(obj);
  v6 = 0;
  if ( numModels > 0 )
  {
    p_camoParams = &dobjModels->camoParams;
    do
    {
      SetDObjCamoMaterialOverride_Internal(obj, v6++, p_camoParams);
      p_camoParams = (DObjCamoParams *)((char *)p_camoParams + 80);
    }
    while ( v6 < numModels );
  }
}

/*
==============
DObjSetClientFlag
==============
*/
void DObjSetClientFlag(DObj *dobj, bool enable)
{
  unsigned __int8 flags; 
  unsigned __int8 v3; 
  unsigned __int8 v4; 

  flags = dobj->flags;
  v3 = flags | 8;
  v4 = flags & 0xF7;
  if ( !enable )
    v3 = v4;
  dobj->flags = v3;
}

/*
==============
DObjSetDuplicateParts
==============
*/
void DObjSetDuplicateParts(DObj *obj, DObjDuplicateParts *duplicateParts, int numDuplicateParts)
{
  __int64 v3; 
  DObjDuplicateParts *v4; 
  int v6; 
  int v7; 
  __int64 v8; 
  const XModel *v9; 
  int numClientBones; 
  const XModel *v11; 
  unsigned int numBones; 
  const XModel *v13; 
  unsigned __int8 v14; 
  char *fmt; 

  v3 = numDuplicateParts;
  v4 = duplicateParts;
  if ( !g_empty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 268, ASSERT_TYPE_ASSERT, "(g_empty != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "g_empty != NULL_SCR_STRING") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 269, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( !obj->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 270, ASSERT_TYPE_ASSERT, "(obj->models != nullptr)", (const char *)&queryFormat, "obj->models != nullptr") )
    __debugbreak();
  if ( (v4->partBits.array[7] & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 273, ASSERT_TYPE_ASSERT, "(!duplicateParts->partBits.testClientBit())", (const char *)&queryFormat, "!duplicateParts->partBits.testClientBit()") )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    v6 = 0;
    v4->pairs[v3] = 0;
    v7 = v3 + 1;
    if ( v7 > 255 )
    {
      Com_Printf(1, "Too many duplicate bones in DObj (%d)\n", (unsigned int)v7);
      if ( obj->numModels )
      {
        v8 = 0i64;
        do
        {
          v9 = obj->models[v8];
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 143, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          numClientBones = v9->numClientBones;
          v11 = obj->models[v8];
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          numBones = v11->numBones;
          v13 = obj->models[v8];
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          LODWORD(fmt) = numClientBones;
          Com_Printf(1, "  %s : %d shared, %d client-only\n", v13->name, numBones, fmt);
          ++v6;
          ++v8;
        }
        while ( v6 < obj->numModels );
        v4 = duplicateParts;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 292, ASSERT_TYPE_ASSERT, "(numDuplicateParts <= 0xffui8)", "%s\n\tDObj has too many duplicate parts.  Look for models that have unneeded bones.", "numDuplicateParts <= UINT8_MAX") )
        __debugbreak();
    }
    v14 = truncate_cast<unsigned char,int>(v7);
    obj->duplicatePartsSize = v14;
    obj->duplicateParts = j_SL_GetStringOfSize((const char *)v4, 0, 4i64 * v14 + 36, 12);
  }
  else
  {
    obj->duplicateParts = g_empty;
    obj->duplicatePartsSize = 0;
  }
}

/*
==============
DObjSetHidePartBits
==============
*/
void DObjSetHidePartBits(DObj *obj, const DObjPartBits *partBits)
{
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4064, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&obj->hidePartBits, partBits);
}

/*
==============
DObjSetLocalBoneIndex
==============
*/
int DObjSetLocalBoneIndex(DObj *obj, DObjPartBits *partBits, int boneIndex, const vec3_t *trans, const vec3_t *angles)
{
  int result; 

  result = DObjSetRotTransIndex(obj, partBits, boneIndex);
  if ( result )
  {
    DObjSetLocalTagInternal(obj, trans, angles, boneIndex);
    return 1;
  }
  return result;
}

/*
==============
DObjSetStickerMaterialOverrides
==============
*/
void DObjSetStickerMaterialOverrides(DObj *obj, const CharacterModelType *dobjModelTypes, const DObjStickerSlotList *stickerSlots)
{
  unsigned __int8 v6; 
  DObjStickerSlot *slots; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int NumModels; 
  __int64 v12; 
  __int64 v13; 
  unsigned int modelTypeCount; 
  __int64 v15; 
  Material *originalMaterialWhitelistTable[4]; 
  Material *overrideMaterials[4]; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2865, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v6 = 0;
  slots = stickerSlots->slots;
  v8 = 4i64;
  do
  {
    if ( slots->overrideMaterial )
    {
      if ( !slots->blankMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2879, ASSERT_TYPE_ASSERT, "(stickerSlot.blankMaterial)", (const char *)&queryFormat, "stickerSlot.blankMaterial") )
        __debugbreak();
      v9 = v6++;
      v10 = v9;
      originalMaterialWhitelistTable[v10] = slots->blankMaterial;
      overrideMaterials[v10] = slots->overrideMaterial;
    }
    ++slots;
    --v8;
  }
  while ( v8 );
  if ( v6 )
  {
    NumModels = DObjGetNumModels(obj);
    v12 = NumModels;
    if ( NumModels > 0 )
    {
      v13 = 0i64;
      do
      {
        if ( dobjModelTypes )
        {
          modelTypeCount = stickerSlots->modelTypeCount;
          if ( modelTypeCount )
          {
            v15 = 0i64;
            while ( stickerSlots->modelTypeToApply[v15] != dobjModelTypes[v13] )
            {
              v15 = (unsigned int)(v15 + 1);
              if ( (unsigned int)v15 >= modelTypeCount )
                goto LABEL_21;
            }
          }
        }
        DObjApplyStickerOverride(obj, v8, overrideMaterials, originalMaterialWhitelistTable, v6);
LABEL_21:
        LODWORD(v8) = v8 + 1;
        ++v13;
      }
      while ( v13 < v12 );
    }
  }
}

/*
==============
DObjSetTree
==============
*/
void DObjSetTree(DObj *obj, XAnimTree *tree)
{
  obj->tree = tree;
  if ( tree )
  {
    if ( tree->children )
      XAnimResetAnimMap(obj);
  }
}

/*
==============
DObjShutdown
==============
*/
void DObjShutdown(void)
{
  if ( g_empty )
  {
    SL_RemoveRefToStringOfSize(g_empty, 0x24u);
    g_empty = 0;
  }
}

/*
==============
DObjSkelClear
==============
*/
void DObjSkelClear(const DObj *obj)
{
  memset_0(&obj->skel, 0, sizeof(obj->skel));
  DObjClearSkelRecord(obj);
}

/*
==============
DObjSkelExistsConst
==============
*/
_BOOL8 DObjSkelExistsConst(const DObj *obj, int timeStamp)
{
  return obj->skel.timeStamp == timeStamp && obj->skel.mat;
}

/*
==============
DObjSkelReset
==============
*/
void DObjSkelReset(const DObj *obj)
{
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2110, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&obj->skel.partBits.anim);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&obj->skel.partBits.skel);
  obj->skel.partBits.animCalculated = 0;
}

/*
==============
DObjTraceline
==============
*/
void DObjTraceline(DObj *obj, const vec3_t *start, const vec3_t *end, const unsigned __int8 *priorityMap, DObjTrace_s *trace, bool (*shieldTraceCallback)(const DObj *, const XModel *, void *), void *userArgs)
{
  DObjTrace_s *v7; 
  DObj *v8; 
  float v11; 
  float v12; 
  float v13; 
  __m128 *v15; 
  const DObjDuplicateParts *DuplicateParts; 
  const XModel **models; 
  unsigned int v18; 
  unsigned __int64 v19; 
  DObjDuplicatePair *pairs; 
  DObjAnimMat *v21; 
  float fraction; 
  const XModel *v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int numRootBones; 
  __int64 v29; 
  __m128 *v30; 
  unsigned __int64 v31; 
  unsigned int v32; 
  char v33; 
  float v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  float v44; 
  float v45; 
  float v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  __m128 v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  char v63; 
  unsigned int v64; 
  __int64 v65; 
  bool v66; 
  float v67; 
  float v68; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  unsigned int v81; 
  __int128 v82; 
  float v86; 
  float v87; 
  float v88; 
  float transWeight; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  float v109; 
  unsigned int v110; 
  unsigned int v111; 
  float v112; 
  float v113; 
  __int64 v115; 
  DObjAnimMat *v116; 
  float v117; 
  unsigned int v118; 
  unsigned int v119; 
  DObjAnimMat *RotTransArray; 
  float v121; 
  float v122; 
  int v123; 
  unsigned int numBones; 
  int v125; 
  DObjDuplicatePair *v126; 
  unsigned int v127; 
  const XModel *v128; 
  __int64 numModels; 
  const XModel **v131; 
  scr_string_t *boneNames; 
  __int64 v135; 
  int v136[4]; 
  int v137[4]; 
  float v138; 
  float v139; 
  int v140[136]; 

  v7 = trace;
  v8 = obj;
  if ( !shieldTraceCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3221, ASSERT_TYPE_ASSERT, "(shieldTraceCallback != 0)", (const char *)&queryFormat, "shieldTraceCallback != NULL") )
    __debugbreak();
  Profile_Begin(417);
  *(_QWORD *)&trace->surfaceflags = 0i64;
  trace->modelIndex = 0;
  trace->partName = 0;
  trace->partGroup = 0;
  *(_QWORD *)&trace->normal.y = 0i64;
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3231, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3232, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  v11 = end->v[0] - start->v[0];
  v12 = end->v[1] - start->v[1];
  v117 = v12;
  v121 = end->v[2] - start->v[2];
  v13 = (float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v121 * v121);
  _XMM15 = 0i64;
  v113 = v11;
  if ( v13 == 0.0 )
    goto LABEL_168;
  RotTransArray = DObjGetRotTransArray(v8);
  v15 = (__m128 *)RotTransArray;
  if ( !RotTransArray )
    goto LABEL_168;
  DuplicateParts = DObjGetDuplicateParts(v8);
  models = v8->models;
  v18 = 0;
  v19 = 0i64;
  v123 = -1;
  pairs = DuplicateParts->pairs;
  v125 = -1;
  v21 = NULL;
  v126 = DuplicateParts->pairs;
  v119 = 0;
  v116 = NULL;
  v131 = models;
  numModels = v8->numModels;
  v118 = 2;
  v110 = 0;
  fraction = trace->fraction;
  v109 = 0.0;
  v112 = trace->fraction;
  v122 = 1.0 / v13;
  if ( !v8->numModels )
    goto LABEL_168;
  while ( 1 )
  {
    v135 = v18;
    v23 = models[v18];
    v128 = v23;
    boneNames = v23->boneNames;
    numBones = v23->numBones;
    if ( v18 >= 0x100 )
    {
      LODWORD(v105) = 256;
      LODWORD(v101) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v101, v105) )
        __debugbreak();
      pairs = v126;
      v23 = v128;
    }
    v127 = v8->ignoreCollision.array[(unsigned __int64)v18 >> 5] & (0x80000000 >> (v18 & 0x1F));
    v24 = 0i64;
    v111 = 0;
    if ( numBones )
      break;
LABEL_117:
    v110 = ++v18;
    if ( v18 >= (unsigned int)numModels )
    {
      if ( v21 )
      {
        if ( v125 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3519, ASSERT_TYPE_ASSERT, "(traceHitT >= 0)", (const char *)&queryFormat, "traceHitT >= 0") )
          __debugbreak();
        if ( ((LODWORD(v21->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v21->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v21->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v21->quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
          __debugbreak();
        if ( (LODWORD(v21->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
          __debugbreak();
        transWeight = v21->transWeight;
        v90 = transWeight * v21->quat.v[0];
        v91 = v21->quat.v[1];
        v92 = v21->quat.v[2];
        v93 = v90 * v21->quat.v[0];
        v94 = transWeight * v91;
        v95 = transWeight * v92;
        v96 = v21->quat.v[3];
        v97 = v91 * v94;
        v98 = v92 * v94;
        v99 = v96 * v94;
        v139 = (float)(v96 * v95) + (float)(v91 * v90);
        *(float *)&v140[1] = (float)(v91 * v90) - (float)(v96 * v95);
        v138 = 1.0 - (float)((float)(v92 * v95) + v97);
        *(float *)v140 = (float)(v92 * v90) - v99;
        *(float *)&v140[2] = 1.0 - (float)((float)(v92 * v95) + v93);
        *(float *)&v140[4] = v99 + (float)(v92 * v90);
        *(float *)&v140[3] = v98 + (float)(v96 * v90);
        *(float *)&v140[6] = 1.0 - (float)(v97 + v93);
        *(float *)&v140[5] = v98 - (float)(v96 * v90);
        if ( (unsigned int)v125 >= 3 )
        {
          LODWORD(v105) = 3;
          LODWORD(v101) = v125;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v101, v105) )
            __debugbreak();
        }
        v100 = v109 * *(float *)&v140[3 * v125 - 1];
        v7->normal.v[0] = v109 * *(&v138 + 3 * v125);
        v7->normal.v[2] = v109 * *(float *)&v140[3 * v125];
        v7->normal.v[1] = v100;
      }
      goto LABEL_168;
    }
    pairs = v126;
    models = v131;
  }
  v25 = 0i64;
  v115 = 0i64;
  while ( 1 )
  {
    v26 = v23->partClassification[v24];
    v27 = priorityMap[v26];
    if ( (_DWORD)v19 != pairs->child - 1 )
    {
      if ( v27 != 1 )
        goto LABEL_35;
      numRootBones = v23->numRootBones;
      if ( (unsigned int)v24 >= numRootBones )
      {
        v29 = (unsigned int)v19 - v23->parentList[(unsigned int)v24 - numRootBones];
        LODWORD(v24) = v111;
      }
      else
      {
        LOBYTE(v29) = *((_BYTE *)&v131[numModels] + v18);
        if ( (_BYTE)v29 == 0xFF )
        {
          LOWORD(v26) = 0;
LABEL_34:
          v27 = priorityMap[(unsigned __int16)v26];
          goto LABEL_35;
        }
        v29 = (unsigned __int8)v29;
      }
      LOWORD(v26) = *((_WORD *)&v140[8] + v29);
      goto LABEL_34;
    }
    if ( v27 == 1 )
    {
      v26 = *((unsigned __int16 *)&v140[7] + pairs->parent + 1);
      v27 = priorityMap[v26];
    }
    v126 = pairs + 1;
LABEL_35:
    *((_WORD *)&v140[8] + v19) = v26;
    if ( v127 )
      goto LABEL_115;
    v30 = (__m128 *)&v23->boneInfo[v25];
    if ( !v30[1].m128_i32[2] )
      goto LABEL_114;
    if ( v119 >= 0x100 )
    {
      LODWORD(v105) = 256;
      LODWORD(v101) = v119;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v101, v105) )
        __debugbreak();
      v25 = v115;
    }
    v31 = v19 >> 5;
    v32 = 0x80000000 >> (v119 & 0x1F);
    if ( (v32 & obj->hidePartBits.array[v31]) != 0 )
    {
      v7 = trace;
      v8 = obj;
      LODWORD(v24) = v111;
      v21 = v116;
      v18 = v110;
      goto LABEL_116;
    }
    if ( v119 >= 0x100 )
    {
      LODWORD(v105) = 256;
      LODWORD(v101) = v119;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v101, v105) )
        __debugbreak();
    }
    if ( (v32 & obj->skel.partBits.skel.array[v31]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3331, ASSERT_TYPE_ASSERT, "(obj->skel.partBits.skel.testBit( globalBoneIndex ))", (const char *)&queryFormat, "obj->skel.partBits.skel.testBit( globalBoneIndex )") )
      __debugbreak();
    if ( v27 < v118 )
    {
LABEL_112:
      v7 = trace;
LABEL_113:
      LODWORD(v24) = v111;
      v25 = v115;
      v18 = v110;
LABEL_114:
      v21 = v116;
LABEL_115:
      v8 = obj;
      goto LABEL_116;
    }
    if ( ((v15->m128_i32[0] & 0x7F800000) == 2139095040 || (v15->m128_i32[1] & 0x7F800000) == 2139095040 || (v15->m128_i32[2] & 0x7F800000) == 2139095040 || (v15->m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3336, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneMatrix->quat )[0] ) && !IS_NAN( ( boneMatrix->quat )[1] ) && !IS_NAN( ( boneMatrix->quat )[2] ) && !IS_NAN( ( boneMatrix->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneMatrix->quat )[0] ) && !IS_NAN( ( boneMatrix->quat )[1] ) && !IS_NAN( ( boneMatrix->quat )[2] ) && !IS_NAN( ( boneMatrix->quat )[3] )") )
      __debugbreak();
    if ( ((v15[1].m128_i32[0] & 0x7F800000) == 2139095040 || (v15[1].m128_i32[1] & 0x7F800000) == 2139095040 || (v15[1].m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3337, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneMatrix->trans )[0] ) && !IS_NAN( ( boneMatrix->trans )[1] ) && !IS_NAN( ( boneMatrix->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneMatrix->trans )[0] ) && !IS_NAN( ( boneMatrix->trans )[1] ) && !IS_NAN( ( boneMatrix->trans )[2] )") )
      __debugbreak();
    v7 = trace;
    if ( v27 - 200 <= 2 )
    {
      v33 = 1;
LABEL_64:
      v34 = trace->fraction;
      goto LABEL_65;
    }
    v33 = 0;
    if ( v27 == v118 )
      goto LABEL_64;
    v34 = fraction;
LABEL_65:
    v35 = *v15;
    v36 = v15[1];
    v37 = _mm_shuffle_ps(v35, v35, 210);
    v38 = *(__m128 *)start->v;
    v39 = _mm_shuffle_ps(v35, v35, 201);
    v40 = *(__m128 *)end->v;
    v41 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(*v30, *v30, 210), v39), _mm128_mul_ps(_mm_shuffle_ps(*v30, *v30, 201), v37));
    v42 = _mm128_add_ps(v41, v41);
    v43 = _mm128_sub_ps(*(__m128 *)start->v, _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v42, v42, 210), v39), _mm128_mul_ps(_mm_shuffle_ps(v42, v42, 201), v37)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v35, v35, 255), v42), *v30)), v36));
    v44 = _mm_shuffle_ps(v43, v43, 85).m128_f32[0];
    v39.m128_f32[0] = _mm_shuffle_ps(v43, v43, 170).m128_f32[0];
    LODWORD(v45) = COERCE_UNSIGNED_INT((float)((float)((float)(v11 * v43.m128_f32[0]) + (float)(v44 * v117)) + (float)(v39.m128_f32[0] * v121)) * v122) ^ _xmm;
    *(double *)v41.m128_u64 = I_fclamp(v45, 0.0, 1.0);
    v46 = v30[1].m128_f32[2] - (float)((float)((float)((float)((float)(v41.m128_f32[0] * v117) + v44) * (float)((float)(v41.m128_f32[0] * v117) + v44)) + (float)((float)((float)(v41.m128_f32[0] * v113) + v43.m128_f32[0]) * (float)((float)(v41.m128_f32[0] * v113) + v43.m128_f32[0]))) + (float)((float)((float)(v41.m128_f32[0] * v121) + v39.m128_f32[0]) * (float)((float)(v41.m128_f32[0] * v121) + v39.m128_f32[0])));
    if ( v46 <= 0.0 || (v27 == v118 || v33) && (float)(v45 - fsqrt(v46 * v122)) >= v34 )
    {
      fraction = v112;
      v11 = v113;
      goto LABEL_113;
    }
    v47 = _mm128_mul_ps(v35, (__m128)_xmm);
    v48 = _mm_shuffle_ps(v47, v47, 210);
    v49 = _mm_shuffle_ps(v47, v47, 201);
    v50 = _mm_shuffle_ps(v47, v47, 255);
    v51 = _mm128_sub_ps(v38, v36);
    v52 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v51, v51, 210), v49), _mm128_mul_ps(_mm_shuffle_ps(v51, v51, 201), v48));
    v53 = _mm128_add_ps(v52, v52);
    v54 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v53, v53, 210), v49), _mm128_mul_ps(_mm_shuffle_ps(v53, v53, 201), v48)), _mm128_add_ps(_mm128_mul_ps(v50, v53), v51));
    v55 = _mm128_sub_ps(v40, v36);
    v56 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v55, v55, 210), v49), _mm128_mul_ps(_mm_shuffle_ps(v55, v55, 201), v48));
    v57 = _mm128_add_ps(v56, v56);
    v58 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v57, v57, 210), v49), _mm128_mul_ps(_mm_shuffle_ps(v57, v57, 201), v48)), _mm128_add_ps(_mm128_mul_ps(v50, v57), v55));
    v59 = _mm_shuffle_ps(v58, v58, 85).m128_f32[0];
    v60 = _mm_shuffle_ps(v58, v58, 170).m128_f32[0];
    v61 = _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
    v62 = _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
    *(float *)&v136[1] = v59;
    *(float *)&v136[2] = v60;
    v137[0] = v54.m128_i32[0];
    *(float *)&v137[1] = v61;
    *(float *)&v137[2] = v62;
    v136[0] = v58.m128_i32[0];
    if ( ((v54.m128_i32[0] & 0x7F800000) == 2139095040 || (LODWORD(v61) & 0x7F800000) == 2139095040 || (LODWORD(v62) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3406, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localStart )[0] ) && !IS_NAN( ( localStart )[1] ) && !IS_NAN( ( localStart )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localStart )[0] ) && !IS_NAN( ( localStart )[1] ) && !IS_NAN( ( localStart )[2] )") )
      __debugbreak();
    if ( ((v58.m128_i32[0] & 0x7F800000) == 2139095040 || (LODWORD(v59) & 0x7F800000) == 2139095040 || (LODWORD(v60) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3407, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localEnd )[0] ) && !IS_NAN( ( localEnd )[1] ) && !IS_NAN( ( localEnd )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localEnd )[0] ) && !IS_NAN( ( localEnd )[1] ) && !IS_NAN( ( localEnd )[2] )") )
      __debugbreak();
    v63 = 1;
    v64 = 0;
    v65 = 0i64;
    v66 = 1;
    v67 = 0.0;
    v68 = v34;
    do
    {
      if ( !v66 )
      {
        LODWORD(v105) = 3;
        LODWORD(v101) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v101, v105) )
          __debugbreak();
        LODWORD(v106) = 3;
        LODWORD(v102) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v102, v106) )
          __debugbreak();
      }
      _XMM3 = LODWORD(FLOAT_N1_0);
      __asm
      {
        vcmpless xmm0, xmm15, xmm1
        vblendvps xmm8, xmm3, xmm2, xmm0
      }
      v73 = *(float *)&_XMM8 * (float)(*(float *)&v136[v65] - *(float *)&v137[v65]);
      v72 = v73;
      if ( v64 >= 3 )
      {
        LODWORD(v105) = 3;
        LODWORD(v101) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v101, v105) )
          __debugbreak();
        LODWORD(v107) = 3;
        LODWORD(v103) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v103, v107) )
          __debugbreak();
        LODWORD(v108) = 3;
        LODWORD(v104) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v104, v108) )
          __debugbreak();
      }
      v74 = (float)((float)((float)(*(float *)&v136[v65] + *(float *)&v137[v65]) * 0.5) - v30->m128_f32[v65]) * *(float *)&_XMM8;
      if ( v64 >= 3 )
      {
        LODWORD(v105) = 3;
        LODWORD(v101) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v101, v105) )
          __debugbreak();
      }
      v75 = (float)(v73 * 0.5) - v30->m128_f32[v65 + 3];
      v76 = v75 - v74;
      if ( (COERCE_UNSIGNED_INT(v75 - v74) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3430, ASSERT_TYPE_SANITY, "( !IS_NAN( distBeforeEnter ) )", (const char *)&queryFormat, "!IS_NAN( distBeforeEnter )") )
        __debugbreak();
      if ( v76 > (float)(v72 * v67) )
      {
        if ( v76 >= (float)(v72 * v68) )
          goto LABEL_138;
        LODWORD(v109) = _XMM8 ^ _xmm;
        v67 = v76 / v72;
        v123 = v64;
        v63 = 0;
      }
      v77 = v75 + v74;
      if ( (COERCE_UNSIGNED_INT(v75 + v74) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3444, ASSERT_TYPE_SANITY, "( !IS_NAN( distAfterLeave ) )", (const char *)&queryFormat, "!IS_NAN( distAfterLeave )") )
        __debugbreak();
      if ( (float)(v75 + v74) > 0.0 )
      {
        v78 = v72 - v77;
        if ( (float)(v72 - v77) < (float)(v72 * v68) )
        {
          if ( v78 <= (float)(v72 * v67) )
          {
LABEL_138:
            v18 = v110;
            v21 = v116;
            v7 = trace;
            v15 = (__m128 *)RotTransArray;
            goto $miss;
          }
          v68 = v78 / v72;
        }
      }
      ++v64;
      ++v65;
      v66 = v64 < 3;
    }
    while ( (int)v64 < 3 );
    if ( v63 )
      break;
    if ( v67 >= v34 )
    {
      v11 = v113;
      goto LABEL_111;
    }
    if ( !v33 )
    {
      v81 = v118;
      if ( v27 != v118 )
        v81 = v27;
      v118 = v81;
LABEL_127:
      v7 = trace;
      trace->fraction = v67;
      if ( (v67 < 0.0 || v67 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3501, ASSERT_TYPE_SANITY, "( ( trace->fraction >= 0.0f && trace->fraction <= 1.0f ) )", "( trace->fraction ) = %g", v67) )
        __debugbreak();
      v18 = v110;
      trace->modelIndex = v110;
      if ( (unsigned __int16)v110 != v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3503, ASSERT_TYPE_SANITY, "( trace->modelIndex == modelIdx )", (const char *)&queryFormat, "trace->modelIndex == modelIdx") )
        __debugbreak();
      trace->partName = boneNames[v115];
      trace->partGroup = v26;
      if ( v123 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3506, ASSERT_TYPE_ASSERT, "(hitT >= 0)", (const char *)&queryFormat, "hitT >= 0") )
        __debugbreak();
      v15 = (__m128 *)RotTransArray;
      v125 = v123;
      v21 = RotTransArray;
      v116 = RotTransArray;
$miss:
      fraction = v112;
      v11 = v113;
      LODWORD(v24) = v111;
      v25 = v115;
      goto LABEL_115;
    }
    if ( v27 != 201 || (v8 = obj, shieldTraceCallback(obj, obj->models[v135], userArgs)) )
    {
      v112 = v67;
      goto LABEL_127;
    }
    fraction = v112;
    v11 = v113;
    v15 = (__m128 *)RotTransArray;
    v7 = trace;
    LODWORD(v24) = v111;
    v25 = v115;
    v21 = v116;
    v18 = v110;
LABEL_116:
    v24 = (unsigned int)(v24 + 1);
    v23 = v128;
    v19 = v119 + 1;
    pairs = v126;
    ++v25;
    v15 += 2;
    v111 = v24;
    v115 = v25;
    RotTransArray = (DObjAnimMat *)v15;
    ++v119;
    if ( (unsigned int)v24 >= numBones )
      goto LABEL_117;
  }
  v11 = v113;
  v79 = start->v[1];
  v80 = start->v[0];
  if ( (float)((float)(v79 * v117) + (float)(v113 * start->v[0])) >= 0.0 )
  {
LABEL_111:
    fraction = v112;
    v15 = (__m128 *)RotTransArray;
    goto LABEL_112;
  }
  v82 = LODWORD(start->v[1]);
  *(float *)&v82 = fsqrt((float)(v79 * v79) + (float)(v80 * v80));
  _XMM2 = v82;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm4, xmm0
  }
  v86 = (float)(1.0 / *(float *)&_XMM0) * v80;
  trace->normal.v[0] = v86;
  *(float *)&_XMM0 = (float)(1.0 / *(float *)&_XMM0) * start->v[1];
  trace->normal.v[1] = *(float *)&_XMM0;
  v87 = trace->normal.v[2];
  v88 = (float)((float)(*(float *)&_XMM0 * *(float *)&_XMM0) + (float)(v86 * v86)) + (float)(v87 * v87);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v88 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3470, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( trace->normal ) )", "(%g, %g, %g) len %g", v86, trace->normal.v[1], v87, fsqrt(v88)) )
    __debugbreak();
  trace->fraction = 0.0;
  trace->modelIndex = v110;
  if ( (unsigned __int16)v110 != v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3473, ASSERT_TYPE_SANITY, "( trace->modelIndex == modelIdx )", (const char *)&queryFormat, "trace->modelIndex == modelIdx") )
    __debugbreak();
  trace->partName = boneNames[v111];
  trace->partGroup = v26;
LABEL_168:
  Profile_EndInternal(NULL);
}

/*
==============
DObjTracelinePartBits
==============
*/
void DObjTracelinePartBits(DObj *obj, DObjPartBits *partBits)
{
  DObjPartBits *v3; 
  unsigned int v4; 
  const XModel **models; 
  unsigned int v6; 
  unsigned __int64 v7; 
  const XModel *v8; 
  __int64 numBones; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  const XModel **v18; 
  unsigned int v19; 
  unsigned int numModels; 
  unsigned __int64 v22; 

  v3 = partBits;
  Profile_Begin(417);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3543, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(v3);
  v4 = 0;
  models = obj->models;
  v6 = 0;
  v18 = models;
  numModels = obj->numModels;
  v19 = 0;
  if ( obj->numModels )
  {
    v7 = 0i64;
    v22 = 0i64;
    do
    {
      v8 = *models;
      numBones = (*models)->numBones;
      if ( v4 >= 0x100 )
      {
        LODWORD(v15) = 256;
        LODWORD(v14) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v4 & 0x1F)) & obj->ignoreCollision.array[v7 >> 5]) != 0 )
      {
        v6 += numBones;
      }
      else if ( (_DWORD)numBones )
      {
        v10 = 0i64;
        v11 = numBones;
        do
        {
          if ( v8->boneInfo[v10].radiusSquaredAsInt )
          {
            if ( v6 >= 0x100 )
            {
              LODWORD(v15) = 256;
              LODWORD(v14) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
                __debugbreak();
            }
            v12 = 0x80000000 >> (v6 & 0x1F);
            v13 = (unsigned __int64)v6 >> 5;
            if ( (v12 & obj->hidePartBits.array[v13]) == 0 )
            {
              if ( v6 >= 0x100 )
              {
                LODWORD(v17) = 256;
                LODWORD(v16) = v6;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
                  __debugbreak();
              }
              partBits->array[v13] |= v12;
            }
          }
          ++v10;
          ++v6;
          --v11;
        }
        while ( v11 );
        v4 = v19;
        v7 = v22;
      }
      models = v18 + 1;
      ++v4;
      ++v7;
      v19 = v4;
      v22 = v7;
      ++v18;
    }
    while ( v4 < numModels );
    v3 = partBits;
  }
  DObjCompleteHierarchyBits(obj, v3);
  Profile_EndInternal(NULL);
}

/*
==============
DObjUnarchive
==============
*/
void DObjUnarchive(DObj *obj, const int handle, const bool requiresIKPrecache, XAnimOwner owner)
{
  __int128 v5; 
  char v6; 
  bool v9; 
  int v10; 
  unsigned int v12; 
  double v13; 
  char *v14; 
  DObjModel *v15; 
  float v16; 
  unsigned __int64 v17; 
  unsigned int v18; 
  XAnimTree *v19; 
  unsigned __int8 v20; 
  int v21; 
  __int64 ownera; 
  __int64 v23; 
  char v25; 
  void *p[4]; 
  XAnimTree *tree[4]; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  __int128 v30; 
  DObjMaterialData *v31; 
  DObjModel dobjModels[254]; 

  _YMM2 = *(__m256i *)((char *)&obj->ignoreCollision + 12);
  v5 = *(_OWORD *)&obj->skel.partBits.control.array[2];
  *(__m256i *)p = *(__m256i *)&obj->tree;
  v6 = owner;
  otherBitSet = *(bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)&obj->skel.partBits.anim.bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > + 8);
  v31 = *(DObjMaterialData **)&obj->skel.partBits.control.array[6];
  __asm
  {
    vextractf128 xmm0, ymm2, 1
    vpextrw r14d, xmm0, 2
  }
  v25 = owner;
  v9 = requiresIKPrecache;
  v10 = handle;
  v12 = 0;
  *(__m256i *)tree = _YMM2;
  v30 = v5;
  if ( (_WORD)_ER14 )
  {
    do
    {
      v13 = *(double *)((char *)p[0] + 36 * v12 + 8);
      v14 = (char *)p[0] + 36 * v12;
      v15 = &dobjModels[v12];
      v15->boneName = *(_DWORD *)v14;
      v15->parentSlot = *((_DWORD *)v14 + 1);
      v16 = *((float *)v14 + 4);
      *(double *)v15->offsets.v = v13;
      v15->offsets.v[2] = v16;
      v15->model = (const XModel *)*((_QWORD *)p[1] + v12);
      v15->quat = *(vec4_t *)(v14 + 20);
      if ( v12 >= 0x100 )
      {
        LODWORD(v23) = 256;
        LODWORD(ownera) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", ownera, v23) )
          __debugbreak();
      }
      v17 = (unsigned __int64)v12 >> 5;
      v18 = 0x80000000 >> (v12++ & 0x1F);
      v15->ignoreCollision = (v18 & *((_DWORD *)&p[2] + v17 + 1)) != 0;
    }
    while ( v12 < (unsigned __int16)_ER14 );
    v9 = requiresIKPrecache;
    v10 = handle;
    v6 = v25;
  }
  MT_AlignedFree(p[0], 36i64 * (unsigned __int16)_ER14, 4ui64);
  MT_AlignedFree(p[1], 9i64 * (unsigned __int16)_ER14, 8ui64);
  v19 = tree[3];
  obj->offsets = NULL;
  obj->quats = NULL;
  obj->models = NULL;
  obj->parentSlots = NULL;
  obj->lastGpuLightGridRequest = NULL;
  obj->materialData = NULL;
  obj->modelMaterialOverrides = NULL;
  LOBYTE(ownera) = v6;
  DObjCreate(dobjModels, (unsigned __int16)_ER14, v19, (char *)obj, HIWORD(tree[2]), (XAnimOwner)ownera);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&obj->hidePartBits, &otherBitSet);
  v20 = v30;
  obj->modelMaterialOverrides = (XModelMaterialOverride *)*((_QWORD *)&v30 + 1);
  obj->materialData = v31;
  obj->validation = BYTE1(v30);
  obj->flags = v20;
  if ( v6 != ((v20 & 8) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2060, ASSERT_TYPE_ASSERT, "(owner == ((savedObj.flags & 0x08) ? XAnimOwner::CLIENT : XAnimOwner::SERVER))", (const char *)&queryFormat, "owner == ((savedObj.flags & DOBJFLAGS_CLIENT) ? XAnimOwner::CLIENT : XAnimOwner::SERVER)") )
    __debugbreak();
  if ( v9 && (v20 & 2) != 0 )
  {
    v21 = XAnimIKGetCacheKey(obj);
    XAnimIKPreCacheDObj(obj, v10, v21);
  }
  if ( LODWORD(p[2]) )
    DObjLock(obj);
}

/*
==============
DoesDObjHaveDistortion
==============
*/
bool DoesDObjHaveDistortion(const DObj *obj)
{
  return 0;
}

/*
==============
SetDObjCamoMaterialOverride_Internal
==============
*/
void SetDObjCamoMaterialOverride_Internal(DObj *obj, const int modelIndex, const DObjCamoParams *const camoParams)
{
  MaterialOverrideType overrideType; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2821, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !camoParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2822, ASSERT_TYPE_ASSERT, "(camoParams)", (const char *)&queryFormat, "camoParams") )
    __debugbreak();
  overrideType = camoParams->overrideType;
  if ( overrideType == MATERIAL_OVERRIDETYPE_CAMO )
  {
    DObjApplyCamoOverride(obj, modelIndex, camoParams->camo, camoParams->materialOverrideDstWhitelist, camoParams->materialOverrideDstWhitelistCount);
  }
  else if ( overrideType == MATERIAL_OVERRIDETYPE_MATERIAL_REPLACE )
  {
    DObjApplyReplaceOverride(obj, modelIndex, camoParams->materialOverrideCallback, camoParams->materialOverrideDstWhitelist, camoParams->materialOverrideDstWhitelistCount);
  }
}

