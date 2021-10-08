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
  bool v7; 
  int parentSlot; 
  _QWORD *v11; 
  unsigned __int64 numModels; 
  void *v14; 
  __int64 v23; 
  __int64 v24; 
  _BYTE entnum[64]; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v26; 
  XModelMaterialOverride *modelMaterialOverrides[2]; 
  _QWORD *v28; 
  DObjModel dobjModels[254]; 

  _RDI = obj;
  DObjGetCreateParms(obj, dobjModels, (unsigned __int16 *)&entnum[52], (XAnimTree **)&entnum[56], (unsigned __int16 *)&entnum[54]);
  *(_DWORD *)&entnum[16] = _RDI->locked;
  *(_QWORD *)&entnum[8] = _RDI->models;
  memset(&entnum[20], 0, 32);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v26, &_RDI->hidePartBits);
  v2 = *(_WORD *)&entnum[52];
  v3 = (char *)MT_AlignedAlloc(36i64 * *(unsigned __int16 *)&entnum[52], 4ui64, 13);
  LOBYTE(modelMaterialOverrides[0]) = _RDI->flags;
  v4 = 0;
  BYTE1(modelMaterialOverrides[0]) = _RDI->validation;
  for ( *(_QWORD *)entnum = v3; v4 < v2; ++v4 )
  {
    _RCX = &v3[36 * v4];
    _RDX = 10i64 * v4;
    v7 = !dobjModels[v4].ignoreCollision;
    __asm { vmovsd  xmm0, qword ptr [rbp+rdx*8+4F60h+dobjModels.offsets] }
    *(_DWORD *)_RCX = dobjModels[v4].boneName;
    parentSlot = dobjModels[v4].parentSlot;
    __asm
    {
      vmovsd  qword ptr [rcx+8], xmm0
      vmovups xmm0, xmmword ptr [rbp+rdx*8+4F60h+dobjModels.quat]
    }
    *((_DWORD *)_RCX + 1) = parentSlot;
    *((_DWORD *)_RCX + 4) = LODWORD(dobjModels[v4].offsets.v[2]);
    __asm { vmovups xmmword ptr [rcx+14h], xmm0 }
    if ( !v7 )
    {
      if ( v4 >= 0x100 )
      {
        LODWORD(v24) = 256;
        LODWORD(v23) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
          __debugbreak();
      }
      *(_DWORD *)&entnum[4 * ((unsigned __int64)v4 >> 5) + 20] |= 0x80000000 >> (v4 & 0x1F);
      v2 = *(_WORD *)&entnum[52];
      v3 = *(char **)entnum;
    }
  }
  DObjArchiveMaterialOverrides(_RDI, &modelMaterialOverrides[1]);
  if ( _RDI->materialData )
  {
    v11 = MT_AlignedAlloc(0x48ui64, 8ui64, 24);
    numModels = _RDI->numModels;
    _RBX = v11;
    v28 = v11;
    v14 = MT_Alloc(numModels, 24);
    *_RBX = v14;
    memcpy_0(v14, _RDI->materialData->modelEntityDataOffset, _RDI->numModels);
    _RCX = _RDI->materialData;
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+8]
      vmovups ymmword ptr [rbx+8], ymm0
      vmovups ymm1, ymmword ptr [rcx+28h]
      vmovups ymmword ptr [rbx+28h], ymm1
    }
  }
  else
  {
    v28 = NULL;
  }
  if ( !_RDI->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2002, ASSERT_TYPE_ASSERT, "(obj->models)", (const char *)&queryFormat, "obj->models") )
    __debugbreak();
  _RDI->models = NULL;
  Profile_Begin(455);
  if ( _RDI->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1831, ASSERT_TYPE_ASSERT, "(obj->locked == qfalse)", (const char *)&queryFormat, "obj->locked == qfalse") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_free_submitted, "dobj_assert_on_free_submitted") && (_RDI->validation & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1836, ASSERT_TYPE_ASSERT, "(!(obj->validation & 0x01))", (const char *)&queryFormat, "!(obj->validation & DOBJVALIDATION_SUBMITTED)") )
    __debugbreak();
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_dobj_assert_on_free_submitted_dump, "dobj_assert_on_free_submitted_dump") && (_RDI->validation & 1) != 0 )
    CrashReport_TriggerNow();
  DObjFree_Internal(_RDI);
  Profile_EndInternal(NULL);
  __asm
  {
    vmovups ymm0, [rsp+5060h+var_5010]
    vmovups ymm1, ymmword ptr [rsp+70h]
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm0, ymmword ptr [rbp+4F60h+var_4FD0.baseclass_0.array]
    vmovups ymmword ptr [rdi+20h], ymm1
    vmovups xmm1, xmmword ptr [rbp+4F60h+modelMaterialOverrides]
    vmovups ymmword ptr [rdi+40h], ymm0
    vmovsd  xmm0, [rbp+4F60h+var_4FA0]
    vmovups xmmword ptr [rdi+60h], xmm1
    vmovsd  qword ptr [rdi+70h], xmm0
  }
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
  char *v18; 
  char *v19; 
  char *v20; 
  __int64 v23; 
  __int64 v24; 

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
    v24 = NumModels;
    v6 = NumModels;
    *v2 = (XModelMaterialOverride *)MT_AlignedAlloc(16i64 * NumModels, 8ui64, 23);
    if ( v5 )
    {
      v7 = 0i64;
      v23 = 0i64;
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
              _RSI = *(_QWORD *)(v14 + *((_QWORD *)v8 + 1));
              __asm { vmovups ymm0, ymmword ptr [rsi] }
              _RBP = *(_QWORD *)(v14 + *((_QWORD *)v9 + 1));
              __asm { vmovups ymmword ptr [rbp+0], ymm0 }
              if ( *(_DWORD *)(_RSI + 24) == 3 )
              {
                *(_QWORD *)(_RBP + 16) = 0i64;
              }
              else
              {
                v18 = (char *)MT_Alloc(16i64 * *(unsigned __int8 *)(*(_QWORD *)_RSI + 28i64) + 8, 23);
                v19 = v18;
                if ( v18 )
                {
                  v20 = (char *)((unsigned __int64)(v18 + 8) & 0xFFFFFFFFFFFFFFF8ui64);
                  if ( v20 <= v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 69, ASSERT_TYPE_ASSERT, "( retPtr ) > ( bytePtr )", "%s > %s\n\t%p, %p", "retPtr", "bytePtr", (const void *)((unsigned __int64)(v18 + 8) & 0xFFFFFFFFFFFFFFF8ui64), v18) )
                    __debugbreak();
                  if ( (unsigned __int64)(v20 - v19) > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 70, ASSERT_TYPE_ASSERT, "( static_cast<size_t>( retPtr - bytePtr ) ) <= ( alignment )", "%s <= %s\n\t%llu, %llu", "static_cast<size_t>( retPtr - bytePtr )", "alignment", v20 - v19, 8i64) )
                    __debugbreak();
                  *(v20 - 1) = (_BYTE)v20 - (_BYTE)v19;
                }
                else
                {
                  v20 = NULL;
                }
                *(_QWORD *)(_RBP + 16) = v20;
                memcpy_0(v20, *(const void **)(_RSI + 16), 16i64 * *(unsigned __int8 *)(*(_QWORD *)_RSI + 28i64));
              }
              ++v10;
            }
            while ( v10 < *v8 );
            v7 = v23;
            v6 = v24;
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
        v23 = v7;
        v24 = v6;
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
  char v15; 
  char v16; 
  char v17; 
  scr_string_t duplicateParts; 
  void *v19; 
  XModelMaterialOverride *modelMaterialOverrides; 
  __int64 v25; 
  void *v26; 
  void *v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  MaterialOverride *v30; 
  MaterialOverrideType overrideType; 
  _QWORD *v32; 
  void *v33; 
  __int64 v34; 
  Material *originalMaterial; 
  int v36; 
  unsigned __int8 textureCount; 

  _R15 = buf;
  _R12 = from;
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1620, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  _RCX = _R15 + 56;
  *(_QWORD *)_R15 = _R12->tree;
  *((_DWORD *)_R15 + 2) = _R12->duplicateParts;
  *((_WORD *)_R15 + 6) = _R12->entnum;
  _R15[14] = _R12->duplicatePartsSize;
  _R15[15] = _R12->numModels;
  _R15[16] = _R12->numBones;
  _R15[17] = _R12->flags;
  *((_WORD *)_R15 + 9) = _R12->numClientBones;
  __asm
  {
    vmovups ymm0, ymmword ptr [r12+14h]
    vmovups ymmword ptr [r15+14h], ymm0
  }
  *((_DWORD *)_R15 + 13) = _R12->locked;
  __asm
  {
    vmovups ymm0, ymmword ptr [r12+38h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr [r12+58h]
    vmovups ymmword ptr [rcx+20h], ymm1
    vmovups ymm0, ymmword ptr [r12+78h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm1, ymmword ptr [r12+98h]
    vmovups ymmword ptr [rcx+60h], ymm1
    vmovups xmm0, xmmword ptr [r12+0B8h]
    vmovups xmmword ptr [rcx+80h], xmm0
  }
  *((_DWORD *)_R15 + 50) = LODWORD(_R12->radius);
  *((_DWORD *)_R15 + 51) = _R12->proceduralBonesHandle.m_value;
  __asm
  {
    vmovups ymm0, ymmword ptr [r12+0D0h]
    vmovups ymmword ptr [r15+0D0h], ymm0
  }
  *((_QWORD *)_R15 + 30) = _R12->models;
  *((_QWORD *)_R15 + 31) = _R12->offsets;
  *((_QWORD *)_R15 + 32) = _R12->quats;
  *((_QWORD *)_R15 + 33) = _R12->parentSlots;
  *((_QWORD *)_R15 + 34) = _R12->modelMaterialOverrides;
  *((_QWORD *)_R15 + 35) = _R12->materialData;
  *((_WORD *)_R15 + 144) = _R12->blendShapeWeightCount;
  *((_WORD *)_R15 + 145) = _R12->blendShapeTargetCount;
  _R15[292] = _R12->validation;
  *((_QWORD *)_R15 + 37) = _R12->lastGpuLightGridRequest;
  __asm
  {
    vmovups ymm0, ymmword ptr [r12+130h]
    vmovups ymmword ptr [r15+130h], ymm0
  }
  *((_DWORD *)_R15 + 13) = 0;
  memset_0(_R15 + 56, 0, 0x90ui64);
  DObjClearSkelRecord((const DObj *)_R15);
  v15 = _R15[17];
  v16 = v15 | 8;
  v17 = v15 & 0xF7;
  if ( !isTargetClient )
    v16 = v17;
  _R15[17] = v16;
  *((_DWORD *)_R15 + 76) = _R12->modelHasBadRootBoneMeld.array[0];
  *((_DWORD *)_R15 + 77) = _R12->modelHasBadRootBoneMeld.array[1];
  *((_DWORD *)_R15 + 78) = _R12->modelHasBadRootBoneMeld.array[2];
  *((_DWORD *)_R15 + 79) = _R12->modelHasBadRootBoneMeld.array[3];
  *((_DWORD *)_R15 + 80) = _R12->modelHasBadRootBoneMeld.array[4];
  *((_DWORD *)_R15 + 81) = _R12->modelHasBadRootBoneMeld.array[5];
  *((_DWORD *)_R15 + 82) = _R12->modelHasBadRootBoneMeld.array[6];
  *((_DWORD *)_R15 + 83) = _R12->modelHasBadRootBoneMeld.array[7];
  if ( (_R12->flags & 8) != 0 || (v16 & 8) == 0 )
  {
    duplicateParts = _R12->duplicateParts;
    *((_DWORD *)_R15 + 2) = duplicateParts;
    if ( duplicateParts && duplicateParts != g_empty )
      SL_AddRefToString(duplicateParts);
  }
  else
  {
    DObjCloneDuplicatePartsServerToClient(_R12, (DObj *)_R15);
  }
  *(_QWORD *)_R15 = 0i64;
  *((_QWORD *)_R15 + 33) = MT_AlignedAlloc(4i64 * _R12->numModels, 4ui64, 25);
  *((_QWORD *)_R15 + 31) = MT_AlignedAlloc(12i64 * _R12->numModels, 4ui64, 25);
  *((_QWORD *)_R15 + 32) = MT_AlignedAlloc(16i64 * _R12->numModels, 4ui64, 25);
  *((_QWORD *)_R15 + 30) = MT_AlignedAlloc(9i64 * _R12->numModels, 8ui64, 13);
  v19 = MT_AlignedAlloc(16i64 * _R12->numModels, 4ui64, 14);
  *((_QWORD *)_R15 + 37) = v19;
  memset_0(v19, 255, 16i64 * _R12->numModels);
  memcpy_0(*((void **)_R15 + 33), _R12->parentSlots, 4i64 * _R12->numModels);
  memcpy_0(*((void **)_R15 + 31), _R12->offsets, 12i64 * _R12->numModels);
  memcpy_0(*((void **)_R15 + 32), _R12->quats, 16i64 * _R12->numModels);
  memcpy_0(*((void **)_R15 + 30), _R12->models, 9i64 * _R12->numModels);
  DObjCloneProceduralBones(_R12, (DObj *)_R15);
  if ( _R12->materialData )
  {
    DObjAllocMaterialData((DObj *)_R15);
    memcpy_0(**((void ***)_R15 + 35), _R12->materialData->modelEntityDataOffset, (unsigned __int8)_R15[15]);
    _RCX = _R12->materialData;
    _RAX = *((_QWORD *)_R15 + 35);
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+8]
      vmovups ymmword ptr [rax+8], ymm0
      vmovups ymm1, ymmword ptr [rcx+28h]
      vmovups ymmword ptr [rax+28h], ymm1
    }
  }
  if ( _R12->modelMaterialOverrides )
  {
    *((_QWORD *)_R15 + 34) = MT_AlignedAlloc(16i64 * _R12->numModels, 8ui64, 23);
    v36 = 0;
    if ( _R12->numModels )
    {
      modelMaterialOverrides = _R12->modelMaterialOverrides;
      v25 = 0i64;
      do
      {
        v26 = MT_Alloc(8i64 * modelMaterialOverrides[v25].materialOverrideCount + 8, 23);
        v27 = v26;
        if ( v26 )
        {
          v28 = ((unsigned __int64)v26 + 8) & 0xFFFFFFFFFFFFFFF8ui64;
          if ( v28 <= (unsigned __int64)v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 69, ASSERT_TYPE_ASSERT, "( retPtr ) > ( bytePtr )", "%s > %s\n\t%p, %p", "retPtr", "bytePtr", (const void *)(((unsigned __int64)v26 + 8) & 0xFFFFFFFFFFFFFFF8ui64), v26) )
            __debugbreak();
          if ( v28 - (unsigned __int64)v27 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 70, ASSERT_TYPE_ASSERT, "( static_cast<size_t>( retPtr - bytePtr ) ) <= ( alignment )", "%s <= %s\n\t%llu, %llu", "static_cast<size_t>( retPtr - bytePtr )", "alignment", v28 - (_QWORD)v27, 8i64) )
            __debugbreak();
          *(_BYTE *)(v28 - 1) = v28 - (_BYTE)v27;
        }
        else
        {
          v28 = 0i64;
        }
        v29 = 0i64;
        *(_QWORD *)(v25 * 16 + *((_QWORD *)_R15 + 34) + 8) = v28;
        *(_DWORD *)(v25 * 16 + *((_QWORD *)_R15 + 34)) = _R12->modelMaterialOverrides[v25].materialOverrideCount;
        modelMaterialOverrides = _R12->modelMaterialOverrides;
        if ( modelMaterialOverrides[v25].materialOverrideCount )
        {
          do
          {
            v30 = modelMaterialOverrides[v25].materialOverride[v29];
            overrideType = v30->overrideType;
            textureCount = v30->originalMaterial->textureCount;
            v32 = MT_AlignedAlloc(0x20ui64, 8ui64, 23);
            if ( overrideType == MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
              v33 = NULL;
            else
              v33 = MT_AlignedAlloc(16i64 * textureCount, 8ui64, 23);
            v32[2] = v33;
            *(_QWORD *)(*(_QWORD *)(v25 * 16 + *((_QWORD *)_R15 + 34) + 8) + 8 * v29) = v32;
            v34 = *(_QWORD *)(*(_QWORD *)(v25 * 16 + *((_QWORD *)_R15 + 34) + 8) + 8 * v29);
            if ( v34 )
            {
              originalMaterial = v30->originalMaterial;
              *(_QWORD *)v34 = v30->originalMaterial;
              if ( v30->overrideType != MATERIAL_OVERRIDETYPE_STICKER_REPLACE )
                memcpy_0(*(void **)(v34 + 16), v30->materialTextureDefClone, 16i64 * originalMaterial->textureCount);
            }
            modelMaterialOverrides = _R12->modelMaterialOverrides;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < modelMaterialOverrides[v25].materialOverrideCount );
        }
        ++v25;
        ++v36;
      }
      while ( v36 < _R12->numModels );
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
  __int64 numModels; 
  const XModel **models; 
  const XModel *v18; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RSI = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1318, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  numModels = _RSI->numModels;
  models = _RSI->models;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  if ( _RSI->numModels )
  {
    _RDI = 0i64;
    _R15 = (__int64)&_RSI->offsets->z;
    __asm
    {
      vmovaps [rsp+4B8h+var_58], xmm8
      vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+4B8h+var_68], xmm9
      vmovss  xmm9, cs:__real@3f000000
    }
    do
    {
      v18 = models[_RDI];
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1328, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      *(double *)&_XMM0 = XModelGetRadius(v18);
      __asm { vmovaps xmm5, xmm0 }
      if ( modelHierarchy[_RDI] != 0xFF )
        __asm { vaddss  xmm5, xmm0, [rsp+rax*4+4B8h+var_478] }
      __asm
      {
        vmovss  xmm2, dword ptr [r15-4]
        vmovss  xmm3, dword ptr [r15-8]
        vmovss  xmm4, dword ptr [r15]
        vandps  xmm2, xmm2, xmm8
        vandps  xmm3, xmm3, xmm8
        vsubss  xmm0, xmm3, xmm2
        vcmpless xmm1, xmm7, xmm0
        vblendvps xmm2, xmm2, xmm3, xmm1
        vandps  xmm4, xmm4, xmm8
        vsubss  xmm0, xmm2, xmm4
        vcmpless xmm1, xmm7, xmm0
        vblendvps xmm0, xmm4, xmm2, xmm1
        vmulss  xmm1, xmm0, xmm9
        vaddss  xmm2, xmm5, xmm1
        vmovss  [rsp+rdi*4+4B8h+var_478], xmm2
      }
      ++_RDI;
      _R15 += 12i64;
      __asm { vmaxss  xmm6, xmm2, xmm6 }
    }
    while ( _RDI < numModels );
    _RSI = obj;
    __asm
    {
      vmovaps xmm9, [rsp+4B8h+var_68]
      vmovaps xmm8, [rsp+4B8h+var_58]
    }
  }
  __asm
  {
    vmovss  dword ptr [rsi+0C8h], xmm6
    vmovaps xmm6, [rsp+4B8h+var_38]
    vmovaps xmm7, [rsp+4B8h+var_48]
  }
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
  unsigned __int64 v35; 
  unsigned __int8 *v37; 
  unsigned __int8 *v39; 
  int v41; 
  int v42; 
  unsigned int v44; 
  int v45; 
  int v46; 
  const scr_string_t *boneNames; 
  DObjBoneNameToBoneIndexMap_t<768> *v48; 
  int v49; 
  const scr_string_t *v50; 
  unsigned __int16 v51; 
  unsigned __int8 v52; 
  int v53; 
  unsigned __int16 *p_parent; 
  __int16 v55; 
  __int16 v56; 
  size_t v57; 
  int v58; 
  bool v59; 
  size_t v60; 
  int *v61; 
  vec3_t *v62; 
  __int64 v63; 
  vec4_t *v64; 
  const XModel **v65; 
  GpuLightGridRequestRecord *v66; 
  scr_string_t v67; 
  __int64 v68; 
  bitarray_base<bitarray<256> > *v69; 
  unsigned int parentSlot_low; 
  const char *Name; 
  const char *v72; 
  int v73; 
  const scr_string_t *v74; 
  unsigned __int16 v75; 
  unsigned __int8 v76; 
  DObjBoneNameToBoneIndexMap_t<768> *v77; 
  int v78; 
  const scr_string_t *v79; 
  unsigned __int16 v80; 
  unsigned __int8 v81; 
  const char *v82; 
  unsigned int v83; 
  DObj *v84; 
  int v85; 
  int v86; 
  const scr_string_t *v87; 
  bitarray_base<bitarray<256> > *v88; 
  XModel *v89; 
  const char *v90; 
  int v91; 
  int v92; 
  const scr_string_t *v93; 
  int v94; 
  int v95; 
  DObjBoneNameToBoneIndexMap_t<768> *v96; 
  int v97; 
  const scr_string_t *v98; 
  unsigned __int16 v99; 
  unsigned __int8 v100; 
  __int64 v101; 
  __int64 v102; 
  int v103; 
  __int64 v104; 
  bool v105; 
  int v106; 
  scr_string_t v107; 
  char DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254; 
  unsigned __int8 v109; 
  int v110; 
  char v111; 
  int v112; 
  int v113; 
  XModel *v114; 
  const XModel *v115; 
  unsigned __int8 *v116; 
  const char *v117; 
  int v118; 
  bitarray_base<bitarray<256> > *v119; 
  XModel *v120; 
  const char *v121; 
  XModel *v122; 
  int v123; 
  __int64 v124; 
  unsigned __int16 entnum; 
  const char *v126; 
  DObjModel *v127; 
  unsigned int v128; 
  unsigned int v129; 
  int v130; 
  unsigned int v131; 
  const char *v132; 
  const char *v133; 
  DObjBoneNameToBoneIndexMap_t<768> *v134; 
  char *fmt; 
  __int64 boneName; 
  int *parentModelOut; 
  unsigned __int16 *parentBoneOut; 
  __int64 v140; 
  unsigned int pos; 
  unsigned __int8 flags; 
  char v143; 
  unsigned __int8 v144; 
  char v145; 
  unsigned __int16 v146; 
  __int16 v147; 
  int destPos; 
  unsigned int numModelsa; 
  int v150; 
  DObj *obja; 
  int inoutNumDuplicateParts; 
  int v153; 
  DObjModel *v154; 
  unsigned __int16 v155; 
  DObjModel *dobjModelsa; 
  unsigned __int8 *v157; 
  int v158; 
  bitarray_base<bitarray<256> > *p_modelHasBadRootBoneMeld; 
  DObjBoneNameToBoneIndexMap_t<768> *lookupMap; 
  XModel *v161; 
  int v162; 
  int v163; 
  unsigned __int64 v164; 
  __int64 v165; 
  __int64 v166; 
  __int64 v167; 
  DObjDuplicateParts duplicateParts; 
  DObjBoneNameToBoneIndexMap_t<254> v169; 
  int offset[256]; 
  XModel *model[254]; 
  int modelClientBoneOffsets[256]; 
  int Src[256]; 
  __int64 v174[382]; 
  _QWORD v175[508]; 
  unsigned __int8 index[256]; 
  char dest[6144]; 

  v7 = alloca(v5);
  __asm { vmovaps [rsp+5A60h+var_50], xmm6 }
  v8 = &v169;
  lookupMap = inOutClientBoneIndexMapIfNeeded;
  v157 = modelHierarchy;
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
  v169.m_initialized = 1;
  memset_0(&v169, 0, 0xC28ui64);
  v12 = 0;
  *(_QWORD *)v10->modelHasBadRootBoneMeld.array = 0i64;
  *(_QWORD *)&v10->modelHasBadRootBoneMeld.array[2] = 0i64;
  *(_QWORD *)&v10->modelHasBadRootBoneMeld.array[4] = 0i64;
  *(_QWORD *)&v10->modelHasBadRootBoneMeld.array[6] = 0i64;
  p_modelHasBadRootBoneMeld = &v10->modelHasBadRootBoneMeld;
  flags = v10->flags;
  v169.m_numEntries = 0i64;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 621, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  Profile_Begin(452);
  v13 = 0;
  _RDI = &duplicateParts;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    _RDI = (DObjDuplicateParts *)((char *)_RDI + 16);
    ++v13;
  }
  while ( v13 < 2 );
  v16 = numModelsa;
  inoutNumDuplicateParts = 0;
  v17 = dobjModels;
  v153 = 0;
  v18 = 0;
  v146 = 0;
  v147 = 0;
  v19 = 0;
  v154 = v17;
  v20 = 0;
  v143 = 0;
  v21 = 0;
  pos = 0;
  if ( numModelsa )
  {
    while ( 1 )
    {
      v22 = (XModel *)v17->model;
      v163 = v12;
      v23 = v12;
      v161 = v22;
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 650, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      if ( v143 || v22->proceduralBones || (v143 = 0, v22->dynamicBones) )
        v143 = 1;
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = v22->numBones;
      v25 = numBones + v12;
      numClientBones = v22->numClientBones;
      v27 = numClientBones + v153;
      v150 = numBones;
      v158 = v25;
      v153 += numClientBones;
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
      v32 = v146;
      v33 = v147;
      if ( blendShapeInfo )
      {
        v32 = blendShapeInfo->numberOfWeights + v146;
        v33 = blendShapeInfo->targetCount + v147;
        v147 = v33;
        v146 = v32;
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
      _R9 = (__int64)v154;
      v35 = v21;
      v164 = v21;
      _RBX = 2i64 * v21;
      index[v21] = -1;
      v37 = &index[v21];
      _RDI = 3i64 * v21;
      model[v35] = v22;
      *(__int64 *)((char *)v174 + 4 * _RDI) = 0i64;
      v175[_RBX] = 0i64;
      v175[_RBX + 1] = 0i64;
      *((_DWORD *)&v174[1] + _RDI) = 0;
      v39 = v157;
      Src[v35] = -1;
      offset[v35] = v23;
      modelClientBoneOffsets[v35] = v20;
      v39[v35] = -1;
      if ( *(_BYTE *)(_R9 + 44) )
      {
        if ( pos >= 0x100 )
        {
          LODWORD(v140) = 256;
          LODWORD(parentBoneOut) = pos;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v140) )
            __debugbreak();
          _R9 = (__int64)v154;
        }
        obja->ignoreCollision.array[v35 >> 5] |= 0x80000000 >> (pos & 0x1F);
      }
      __asm { vmovsd  xmm0, qword ptr [r9+10h] }
      v41 = *(_DWORD *)(_R9 + 24);
      v42 = *(_DWORD *)(_R9 + 12);
      __asm
      {
        vmovsd  [rbp+rdi*4+5960h+var_3530], xmm0
        vmovups xmm0, xmmword ptr [r9+1Ch]
      }
      *((_DWORD *)&v174[1] + _RDI) = v41;
      v44 = pos;
      Src[v35] = v42;
      __asm { vmovups xmmword ptr [rbp+rbx*8+5960h+var_2940], xmm0 }
      if ( !pos )
      {
        v45 = offset[v35];
        v46 = v22->numBones;
        boneNames = v22->boneNames;
        if ( (v45 < 0 || (unsigned int)v45 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v45, "signed", v45) )
          __debugbreak();
        DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_254___(0, v45, boneNames, v46, &v169);
        if ( (flags & 8) != 0 && (_BYTE)v150 )
        {
          v48 = lookupMap;
          if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 730, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
            __debugbreak();
          v49 = v22->numClientBones;
          v50 = &v22->boneNames[v22->numBones];
          v51 = truncate_cast<unsigned short,int>(modelClientBoneOffsets[v35] | 0x8000);
          v52 = truncate_cast<unsigned char,unsigned int>(0);
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_768___(v52, v51, v50, v49, v48);
        }
        v10 = obja;
        goto LABEL_58;
      }
      v67 = *(_DWORD *)(_R9 + 8);
      if ( v42 >= 0 && v67 != scr_const._ )
      {
        if ( !v67 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 744, ASSERT_TYPE_ASSERT, "( name != ( static_cast< scr_string_t >( 0 ) ) )", "dobj for compositeModel '%s' has a parent slot but bone name is missing.", v22->name) )
            __debugbreak();
          _R9 = (__int64)v154;
        }
        if ( XModelGetBoneIndex(model[*(int *)(_R9 + 12)], v67, offset[*(int *)(_R9 + 12)], v37) )
        {
          v68 = (__int64)v154;
          v69 = p_modelHasBadRootBoneMeld;
          parentSlot_low = LOBYTE(v154->parentSlot);
          v157[v35] = parentSlot_low;
          if ( bitarray_base<bitarray<256>>::testBit(v69, parentSlot_low) )
          {
            bitarray_base<bitarray<256>>::setBit(v69, pos);
            Name = XModelGetName(model[*(int *)(v68 + 12)]);
            v72 = XModelGetName(v22);
            Com_PrintError(19, "Marking %s (child of %s) as bad bone meld\n", v72, Name);
          }
          v73 = XModelNumBones(v22);
          v74 = v22->boneNames;
          v75 = truncate_cast<unsigned short,int>(offset[v35]);
          v76 = truncate_cast<unsigned char,unsigned int>(pos);
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_254___(v76, v75, v74, v73, &v169);
          if ( (flags & 8) != 0 && (_BYTE)v150 )
          {
            v77 = lookupMap;
            if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 761, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
              __debugbreak();
            goto LABEL_129;
          }
          goto LABEL_130;
        }
        v82 = SL_ConvertToStringSafe(v67);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 767, ASSERT_TYPE_ASSERT, "( false )", "dobj for compositeModel '%s' couldn't find a bone with name: %s, weird offsets will occur.", v22->name, v82) )
          __debugbreak();
      }
      if ( v67 && *SL_ConvertToString(v67) )
      {
        v83 = pos - 1;
        if ( (int)(pos - 1) < 0 )
        {
LABEL_140:
          if ( v44 >= 0x100 )
          {
            LODWORD(v140) = 256;
            LODWORD(parentBoneOut) = v44;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v140) )
              __debugbreak();
          }
          v10 = obja;
          v84 = obja;
          *(_DWORD *)&p_modelHasBadRootBoneMeld[4 * (v35 >> 5)] |= 0x80000000 >> (v44 & 0x1F);
          DObjCreateHandleParentModelBoneAttachError(v84, dobjModelsa, numModelsa, v22, v44, v67);
          v10->flags |= 0x10u;
          if ( *v37 != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 810, ASSERT_TYPE_ASSERT, "(modelParents[currNumModels] == 255)", (const char *)&queryFormat, "modelParents[currNumModels] == NO_BONEINDEX") )
            __debugbreak();
          if ( v157[v35] != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 811, ASSERT_TYPE_ASSERT, "(modelHierarchy[currNumModels] == 255)", (const char *)&queryFormat, "modelHierarchy[currNumModels] == NO_MODELINDEX") )
            __debugbreak();
          v85 = offset[v35];
          v86 = v22->numBones;
          v87 = v22->boneNames;
          if ( (v85 < 0 || (unsigned int)v85 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v85, "signed", v85) )
            __debugbreak();
          if ( pos > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)pos, "unsigned", v35) )
            __debugbreak();
          v95 = v86;
          v44 = pos;
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_254___(pos, v85, v87, v95, &v169);
          if ( (flags & 8) == 0 || !(_BYTE)v150 )
            goto LABEL_59;
          v96 = lookupMap;
          if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 815, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
            __debugbreak();
          v97 = v22->numClientBones;
          v98 = &v22->boneNames[v22->numBones];
          v99 = truncate_cast<unsigned short,int>(modelClientBoneOffsets[v35] | 0x8000);
          v100 = truncate_cast<unsigned char,unsigned int>(pos);
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_768___(v100, v99, v98, v97, v96);
LABEL_58:
          v44 = pos;
          goto LABEL_59;
        }
        while ( !XModelGetBoneIndex(model[v83], v67, offset[v83], v37) )
        {
          if ( (--v83 & 0x80000000) != 0 )
          {
            v44 = pos;
            goto LABEL_140;
          }
        }
        v88 = p_modelHasBadRootBoneMeld;
        v157[v35] = v83;
        if ( ((0x80000000 >> (v83 & 0x1F)) & *(_DWORD *)&v88[4 * ((unsigned __int64)(unsigned __int8)v83 >> 5)]) != 0 )
        {
          if ( pos >= 0x100 )
          {
            LODWORD(v140) = 256;
            LODWORD(parentBoneOut) = pos;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v140) )
              __debugbreak();
          }
          v89 = model[v83];
          *(_DWORD *)&v88[4 * (v35 >> 5)] |= 0x80000000 >> (pos & 0x1F);
          if ( !v89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v90 = v89->name;
          if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          Com_PrintError(19, "Marking %s (child of %s) as bad bone meld\n", v22->name, v90);
        }
        v91 = offset[v35];
        v92 = v22->numBones;
        v93 = v22->boneNames;
        if ( (v91 < 0 || (unsigned int)v91 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v91, "signed", v91) )
          __debugbreak();
        if ( pos > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)pos, "unsigned", v35) )
          __debugbreak();
        v94 = v92;
        v44 = pos;
        DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_254___(pos, v91, v93, v94, &v169);
        if ( (flags & 8) != 0 && (_BYTE)v150 )
        {
          v77 = lookupMap;
          if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 790, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
            __debugbreak();
LABEL_129:
          v78 = XModelNumClientOnlyBones(v22);
          v79 = &v22->boneNames[XModelNumBones(v22)];
          v80 = truncate_cast<unsigned short,int>(modelClientBoneOffsets[v35] | 0x8000);
          v81 = truncate_cast<unsigned char,unsigned int>(pos);
          DObjCreateDuplicateParts_FillInBoneNameToBoneLookup_DObjBoneNameToBoneIndexMap_t_768___(v81, v80, v79, v78, v77);
LABEL_130:
          v44 = pos;
        }
        v10 = obja;
        goto LABEL_59;
      }
      v101 = (__int64)v22->boneNames;
      v59 = (v22->flags & 0x8000) == 0;
      v167 = v101;
      v145 = 0;
      if ( !v59 )
      {
        Com_PrintWarning(19, "WARNING: Creating a DObj with stub model for '%s'.  This object will need to be re-generated once the final asset is loaded.\n", v22->name);
        v10 = obja;
        goto LABEL_59;
      }
      v102 = v22->numBones;
      destPos = 0;
      v103 = 0;
      v165 = 0i64;
      v104 = 0i64;
      v166 = v102;
      if ( !v102 )
      {
LABEL_281:
        if ( v22->numRootBones )
        {
          if ( v44 >= 0x100 )
          {
            LODWORD(v140) = 256;
            LODWORD(parentBoneOut) = v44;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v140) )
              __debugbreak();
          }
          destPos = 0;
          dest[0] = 0;
          *(_DWORD *)&p_modelHasBadRootBoneMeld[4 * (v35 >> 5)] |= 0x80000000 >> (v44 & 0x1F);
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
          v126 = SL_ConvertToString(*v22->boneNames);
          LODWORD(parentModelOut) = v44;
          Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "Model '%s' with root bone '%s' and index %u could not be attached to any of the models with a lower index.\n", v22->name, v126, parentModelOut);
          Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "=== MODEL LIST DUMP - BEGIN ===\n");
          v127 = dobjModelsa;
          v128 = 0;
          v129 = numModelsa;
          do
          {
            v130 = v127->model->numBones;
            v131 = v127->model->flags >> 15;
            v132 = SL_ConvertToString(*v127->model->boneNames);
            v133 = "false";
            if ( (v131 & 1) != 0 )
              v133 = "true";
            LODWORD(parentBoneOut) = v130;
            LODWORD(fmt) = v128;
            Com_sprintfPos_truncate(dest, 0x1800ui64, &destPos, "[%u] %s - Root bone: %s - Bones: %u - Is Default Model: %s\n", fmt, v127->model->name, v132, parentBoneOut, v133);
            ++v128;
            ++v127;
          }
          while ( v128 < v129 );
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
        v105 = (int)(v103 + v23) < 0;
        v106 = v103 + v23;
        v107 = *(_DWORD *)(v101 + 4 * v104);
        if ( (v105 || (unsigned int)v106 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v106, "signed", v106) )
          __debugbreak();
        DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254 = DObjCreateDuplicateParts_FindDuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254___((const XModel *const *)model, v44, v106, v107, offset, &v169, &v162, &v155);
        if ( DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254 )
        {
          v109 = v155;
          if ( v155 > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)v155, "unsigned", v155) )
            __debugbreak();
          v110 = v162;
          if ( v162 == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 847, ASSERT_TYPE_ASSERT, "(parentModelIndex != 255)", (const char *)&queryFormat, "parentModelIndex != NO_MODELINDEX") )
            __debugbreak();
          if ( v110 >= v44 )
          {
            LODWORD(parentModelOut) = v44;
            LODWORD(boneName) = v110;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 848, ASSERT_TYPE_ASSERT, "(unsigned)( parentModelIndex ) < (unsigned)( currNumModels )", "parentModelIndex doesn't index currNumModels\n\t%i not in [0, %i)", boneName, parentModelOut) )
              __debugbreak();
          }
          if ( v161 == model[v110] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 849, ASSERT_TYPE_ASSERT, "(model != models[parentModelIndex])", (const char *)&queryFormat, "model != models[parentModelIndex]") )
            __debugbreak();
          if ( (v110 < 0 || (unsigned int)v110 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v110, "signed", v110) )
            __debugbreak();
          v157[v164] = v110;
        }
        else
        {
          v109 = -1;
        }
        v111 = 0;
        v112 = 255;
        v144 = -1;
        v113 = pos - 1;
        if ( (int)(pos - 1) >= 0 )
        {
          v114 = v161;
          do
          {
            v115 = model[v113];
            if ( v114 != v115 )
            {
              if ( XModelGetBoneIndex(v115, v107, offset[v113], &v144) )
              {
                v112 = v113;
                v111 = 1;
                break;
              }
              v114 = v161;
            }
            --v113;
          }
          while ( v113 >= 0 );
        }
        if ( v111 != DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 877, ASSERT_TYPE_ASSERT, "(foundDuplicateTest == foundDuplicate)", (const char *)&queryFormat, "foundDuplicateTest == foundDuplicate") )
          __debugbreak();
        v59 = DuplicateBoneAndUpdateLookupTable_0_DObjBoneNameToBoneIndexMap_t_254 == 0;
        v35 = v164;
        if ( !v59 )
        {
          v116 = v157;
          if ( v112 != v157[v164] )
          {
            LODWORD(v140) = v157[v164];
            LODWORD(parentBoneOut) = v112;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 880, ASSERT_TYPE_ASSERT, "( foundModelIndexTest ) == ( modelHierarchy[currNumModels] )", "%s == %s\n\t%i, %i", "foundModelIndexTest", "modelHierarchy[currNumModels]", parentBoneOut, v140) )
              __debugbreak();
          }
          if ( v144 != v109 )
          {
            LODWORD(v140) = v109;
            LODWORD(parentBoneOut) = v144;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 881, ASSERT_TYPE_ASSERT, "( testParentIndex ) == ( parentIndex )", "%s == %s\n\t%i, %i", "testParentIndex", "parentIndex", parentBoneOut, v140) )
              __debugbreak();
          }
          if ( v109 == 0xFF )
          {
            v117 = "( ( parentIndex != 255 ) )";
            LODWORD(boneName) = 255;
            v118 = 891;
LABEL_234:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", v118, ASSERT_TYPE_ASSERT, v117, "( parentIndex ) = %i", boneName) )
              __debugbreak();
          }
          else if ( v109 == 0xFE )
          {
            LODWORD(boneName) = 254;
            v117 = "( ( parentIndex != 254 ) )";
            v118 = 892;
            goto LABEL_234;
          }
          if ( v109 == v106 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 893, ASSERT_TYPE_ASSERT, "(parentIndex != boneIndex + localBoneIndex)", (const char *)&queryFormat, "parentIndex != boneIndex + localBoneIndex") )
            __debugbreak();
          if ( !v165 )
          {
            v119 = p_modelHasBadRootBoneMeld;
            if ( ((0x80000000 >> (v116[v35] & 0x1F)) & *(_DWORD *)&p_modelHasBadRootBoneMeld[4 * ((unsigned __int64)v116[v35] >> 5)]) != 0 )
            {
              if ( pos >= 0x100 )
              {
                LODWORD(v140) = 256;
                LODWORD(parentBoneOut) = pos;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v140) )
                  __debugbreak();
              }
              *(_DWORD *)&v119[4 * (v35 >> 5)] |= 0x80000000 >> (pos & 0x1F);
              v120 = model[v116[v35]];
              if ( !v120 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              v121 = v120->name;
              v122 = model[v35];
              if ( !v122 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              Com_PrintError(19, "Marking %s (child of %s) as bad bone meld\n", v122->name, v121);
            }
            v145 = 1;
          }
          v123 = v106 + 1;
          if ( v106 + 1 >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 910, ASSERT_TYPE_ASSERT, "(boneIndex + localBoneIndex + 1 < 256)", (const char *)&queryFormat, "boneIndex + localBoneIndex + 1 < 256") )
            __debugbreak();
          if ( (unsigned int)v109 + 1 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 911, ASSERT_TYPE_ASSERT, "(parentIndex + 1 < 256)", (const char *)&queryFormat, "parentIndex + 1 < 256") )
            __debugbreak();
          if ( v109 >= v106 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 912, ASSERT_TYPE_ASSERT, "(parentIndex < boneIndex + localBoneIndex)", (const char *)&queryFormat, "parentIndex < boneIndex + localBoneIndex") )
            __debugbreak();
          v124 = inoutNumDuplicateParts;
          if ( (unsigned int)inoutNumDuplicateParts >= 0xFF )
          {
            LODWORD(parentModelOut) = 255;
            LODWORD(boneName) = inoutNumDuplicateParts;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 916, ASSERT_TYPE_ASSERT, "(unsigned)( numDuplicateParts ) < (unsigned)( ( sizeof( *array_counter( duplicateParts.pairs ) ) + 0 ) )", "numDuplicateParts doesn't index duplicateParts.pairs\n\t%i not in [0, %i)", boneName, parentModelOut) )
              __debugbreak();
          }
          if ( (v123 < 0 || (unsigned int)v123 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)(v106 + 1), "signed", v123) )
            __debugbreak();
          duplicateParts.pairs[v124].child = v123;
          if ( (unsigned int)v106 >= 0x100 )
          {
            LODWORD(v140) = 256;
            LODWORD(parentBoneOut) = v106;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", parentBoneOut, v140) )
              __debugbreak();
          }
          duplicateParts.partBits.array[(unsigned __int64)(unsigned int)v106 >> 5] |= 0x80000000 >> (v106 & 0x1F);
          if ( !duplicateParts.pairs[v124].child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 919, ASSERT_TYPE_ASSERT, "(duplicateParts.pairs[numDuplicateParts].child != 0)", (const char *)&queryFormat, "duplicateParts.pairs[numDuplicateParts].child != 0") )
            __debugbreak();
          duplicateParts.pairs[v124].parent = v109 + 1;
          if ( v109 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 921, ASSERT_TYPE_ASSERT, "(duplicateParts.pairs[numDuplicateParts].parent != 0)", (const char *)&queryFormat, "duplicateParts.pairs[numDuplicateParts].parent != 0") )
            __debugbreak();
          inoutNumDuplicateParts = v124 + 1;
        }
        v103 = destPos + 1;
        v101 = v167;
        v104 = v165 + 1;
        v23 = v163;
        v44 = pos;
        ++destPos;
        v165 = v104;
      }
      while ( v104 < v166 );
      if ( !v145 )
      {
        v22 = v161;
        goto LABEL_281;
      }
LABEL_296:
      if ( (flags & 8) == 0 || !(_BYTE)v150 )
        goto LABEL_130;
      v134 = lookupMap;
      if ( !lookupMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 941, ASSERT_TYPE_ASSERT, "(inOutClientBoneIndexMapIfNeeded)", (const char *)&queryFormat, "inOutClientBoneIndexMapIfNeeded") )
        __debugbreak();
      v44 = pos;
      DObjFindAndAppendDuplicateClientBones((const XModel *const *)model, pos, modelClientBoneOffsets, v134, &duplicateParts, &inoutNumDuplicateParts);
      v10 = obja;
LABEL_59:
      v16 = numModelsa;
      v17 = v154 + 1;
      v12 = v158;
      v21 = v44 + 1;
      v20 = v153;
      pos = v21;
      ++v154;
      if ( v21 >= numModelsa )
      {
        v19 = inoutNumDuplicateParts;
        v18 = v143;
        break;
      }
    }
  }
  v53 = 0;
  if ( v19 > 0 )
  {
    p_parent = &duplicateParts.pairs[0].parent;
    do
    {
      v55 = *(p_parent - 1);
      if ( v55 < 0 )
      {
        if ( v12 < 0 || (unsigned int)v12 > 0xFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v12, "signed", v12) )
            __debugbreak();
          v55 = *(p_parent - 1);
        }
        *(p_parent - 1) = v12 + v55;
        if ( (((_WORD)v12 + v55 - 1) & 0x7FFFu) >= v20 + v12 )
        {
          LODWORD(parentModelOut) = v20 + v12;
          LODWORD(boneName) = ((_WORD)v12 + v55 - 1) & 0x7FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 954, ASSERT_TYPE_ASSERT, "(unsigned)( (duplicateParts.pairs[duplicateIndex].child - 1) & ((1 << 15) - 1) ) < (unsigned)( boneCount + numClientBones )", "(duplicateParts.pairs[duplicateIndex].child - 1) & CLIENT_BONEINDEX_MASK doesn't index boneCount + numClientBones\n\t%i not in [0, %i)", boneName, parentModelOut) )
            __debugbreak();
        }
      }
      v56 = *p_parent;
      if ( (*p_parent & 0x8000u) != 0 )
      {
        if ( v12 < 0 || (unsigned int)v12 > 0xFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v12, "signed", v12) )
            __debugbreak();
          v56 = *p_parent;
        }
        *p_parent = v12 + v56;
        if ( (((_WORD)v12 + v56 - 1) & 0x7FFFu) >= v20 + v12 )
        {
          LODWORD(parentModelOut) = v20 + v12;
          LODWORD(boneName) = ((_WORD)v12 + v56 - 1) & 0x7FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 959, ASSERT_TYPE_ASSERT, "(unsigned)( (duplicateParts.pairs[duplicateIndex].parent -1) & ((1 << 15) - 1) ) < (unsigned)( boneCount + numClientBones )", "(duplicateParts.pairs[duplicateIndex].parent -1) & CLIENT_BONEINDEX_MASK doesn't index boneCount + numClientBones\n\t%i not in [0, %i)", boneName, parentModelOut) )
            __debugbreak();
        }
      }
      ++v53;
      p_parent += 2;
    }
    while ( v53 < v19 );
    v10 = obja;
    v18 = v143;
  }
  v57 = numModelsa;
  if ( !numModelsa )
  {
    LODWORD(boneName) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 963, ASSERT_TYPE_ASSERT, "( ( numModels > 0 ) )", "( numModels ) = %i", boneName) )
      __debugbreak();
  }
  if ( (_DWORD)v57 != (unsigned __int8)v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 964, ASSERT_TYPE_ASSERT, "(numModels == (byte)numModels)", (const char *)&queryFormat, "numModels == (byte)numModels") )
    __debugbreak();
  v10->numModels = v57;
  if ( v20 + v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 967, ASSERT_TYPE_ASSERT, "(boneCount + numClientBones > 0)", "%s\n\tCannot create a DObj with zero bones. See warnings printed above for a list of offending XModels.", "boneCount + numClientBones > 0") )
    __debugbreak();
  v10->numBones = truncate_cast<unsigned char,int>(v12);
  v10->numClientBones = truncate_cast<unsigned short,int>(v20);
  v58 = v146;
  v10->blendShapeWeightCount = v146;
  if ( (unsigned int)(v58 + 1) > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 972, ASSERT_TYPE_ASSERT, "(obj->blendShapeWeightCount + 1 <= DOBJ_MAX_BLEND_SHAPES)", (const char *)&queryFormat, "obj->blendShapeWeightCount + 1 <= DOBJ_MAX_BLEND_SHAPES") )
    __debugbreak();
  v59 = v10->parentSlots == NULL;
  v10->blendShapeTargetCount = v147;
  if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 980, ASSERT_TYPE_ASSERT, "( obj->parentSlots == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  if ( v10->offsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 981, ASSERT_TYPE_ASSERT, "( obj->offsets == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  if ( v10->quats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 982, ASSERT_TYPE_ASSERT, "( obj->quats == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  if ( v10->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 983, ASSERT_TYPE_ASSERT, "( obj->models == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  if ( v10->lastGpuLightGridRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 985, ASSERT_TYPE_ASSERT, "( obj->lastGpuLightGridRequest == nullptr )", "DObj Leaking MT Aloocations") )
    __debugbreak();
  v60 = v57;
  v61 = (int *)MT_AlignedAlloc(4 * v57, 4ui64, 25);
  v10->parentSlots = v61;
  memcpy_0(v61, Src, 4 * v57);
  v62 = (vec3_t *)MT_AlignedAlloc(12 * v57, 4ui64, 25);
  v10->offsets = v62;
  memcpy_0(v62, v174, 12 * v57);
  v63 = 16 * v57;
  v64 = (vec4_t *)MT_AlignedAlloc(v63, 4ui64, 25);
  v10->quats = v64;
  memcpy_0(v64, v175, v63);
  v65 = (const XModel **)MT_AlignedAlloc(9 * v60, 8ui64, 13);
  v10->models = v65;
  memcpy_0(v65, model, 8 * v60);
  memcpy_0(&v10->models[v60], index, v60);
  v66 = (GpuLightGridRequestRecord *)MT_AlignedAlloc(v63, 4ui64, 14);
  v10->lastGpuLightGridRequest = v66;
  memset_0(v66, 255, v63);
  if ( v10->duplicateParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 1025, ASSERT_TYPE_ASSERT, "(obj->duplicateParts == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "obj->duplicateParts == NULL_SCR_STRING") )
    __debugbreak();
  DObjSetDuplicateParts(v10, &duplicateParts, v19);
  if ( v18 )
    DObjInitializeProceduralBones(v10);
  else
    v10->proceduralBonesHandle.m_value = 0;
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, [rsp+5A60h+var_50] }
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
  int v12; 
  __int64 v16; 
  int v17; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v18; 
  DObjAnimMat mat; 

  _RBP = outMat;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4020, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4021, ASSERT_TYPE_ASSERT, "(outMat)", (const char *)&queryFormat, "outMat") )
    __debugbreak();
  v6 = boneIndex;
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, boneIndex);
  if ( (unsigned int)SkelBoneIndex >= DObjTotalNumBones(obj) )
  {
    v17 = DObjTotalNumBones(obj);
    LODWORD(v16) = SkelBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4025, ASSERT_TYPE_ASSERT, "(unsigned)( skelBoneIndex ) < (unsigned)( DObjTotalNumBones( obj ) )", "skelBoneIndex doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v8 = *obj->models;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  if ( (int)SkelBoneIndex < v8->numBones || (boneIndex & 0x8000u) != 0 && (int)SkelBoneIndex < XModelTotalNumBones(*obj->models) )
  {
    _RAX = XModelGetBasePose(*obj->models);
    _RCX = 32 * SkelBoneIndex;
    __asm { vmovups ymm0, ymmword ptr [rax+rcx] }
  }
  else
  {
    v9 = DObjTotalNumBones(obj);
    if ( v9 == DObjGetNumModels(obj) )
    {
      _RAX = XModelGetBasePose(obj->models[SkelBoneIndex]);
      __asm { vmovups ymm0, ymmword ptr [rax] }
    }
    else
    {
      v12 = DObjTotalNumBones(obj);
      if ( v12 == DObjNumClientOnlyBones(obj) )
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&v18);
      else
        DObjGetHierarchyBits(obj, v6, (DObjPartBits *)&v18);
      DObjCalcBaseSkel(obj, &mat, (DObjPartBits *)&v18);
      _RAX = 32 * SkelBoneIndex;
      __asm { vmovups ymm0, ymmword ptr [rsp+rax+20068h+mat.quat] }
    }
  }
  __asm { vmovups ymmword ptr [rbp+0], ymm0 }
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
  _RBX = bounds;
  _RDI = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2126, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rdi+0C8h] }
  *(_QWORD *)_RBX->midPoint.v = 0i64;
  _RBX->midPoint.v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm0
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  dword ptr [rbx+14h], xmm0
  }
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
  __int64 v14; 
  const XModel **v15; 
  int v16; 
  const XModel *v17; 
  __int64 v18; 
  unsigned __int8 v23; 
  int v24; 
  const XModel *v25; 
  const XModel **v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  const XModel *v30; 
  const scr_string_t *v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  vec3_t *offsets; 
  vec4_t *quats; 
  __int64 v37; 
  const XModel **models; 
  char *v39; 
  char *v40; 
  int v41[256]; 

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
    v39 = (char *)&obj->models[v10] + 1;
    v12 = (char *)((char *)v41 - (char *)parentSlots);
    _R14 = &dobjModels->parentSlot;
    v14 = -1i64;
    v40 = (char *)((char *)v41 - (char *)parentSlots);
    v37 = -1i64;
    v15 = obj->models;
    v16 = 0;
    while ( 1 )
    {
      v17 = *v15;
      *(int *)((char *)parentSlots + (_QWORD)v12) = v16;
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      v16 += v17->numBones;
      *(_QWORD *)(_R14 - 3) = *v15;
      v34 = v16;
      *(_R14 - 1) = 0;
      if ( (unsigned int)v9 >= 0x100 )
      {
        LODWORD(v33) = 256;
        LODWORD(v32) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v32, v33) )
          __debugbreak();
      }
      *((_BYTE *)_R14 + 32) = ((0x80000000 >> (v9 & 0x1F)) & obj->ignoreCollision.array[(unsigned __int64)(unsigned int)v9 >> 5]) != 0;
      v18 = *parentSlots;
      _RAX = offsets;
      *_R14 = v18;
      __asm
      {
        vmovsd  xmm0, qword ptr [rax]
        vmovsd  qword ptr [r14+4], xmm0
      }
      _R14[3] = LODWORD(offsets->v[2]);
      _RAX = quats;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [r14+10h], xmm0
      }
      v23 = v39[v14];
      if ( v23 == 0xFF )
        goto LABEL_43;
      if ( (int)v18 >= 0 )
        break;
      v28 = v14;
      if ( v9 > 0 )
      {
        while ( 1 )
        {
          v29 = v41[v28];
          if ( v23 >= v29 )
            break;
          if ( --v28 < 0 )
            goto LABEL_43;
        }
        v24 = v23 - v29;
        v30 = models[v28];
        v26 = &models[v28];
        if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        if ( v24 >= v30->numBones )
        {
          v27 = 1915;
          goto LABEL_40;
        }
LABEL_42:
        v31 = XModelBoneNames(*v26);
        v16 = v34;
        v14 = v37;
        *(_R14 - 1) = v31[v24];
      }
LABEL_43:
      ++offsets;
      ++v14;
      ++quats;
      ++v9;
      v12 = v40;
      ++v15;
      ++parentSlots;
      v37 = v14;
      _R14 += 20;
      if ( v9 >= obj->numModels )
        return;
    }
    v24 = v23 - v41[v18];
    v25 = models[v18];
    v26 = &models[v18];
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( v24 >= v25->numBones )
    {
      v27 = 1904;
LABEL_40:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", v27, ASSERT_TYPE_ASSERT, "(boneIndex < XModelNumBones( models[parentModelIndex] ))", (const char *)&queryFormat, "boneIndex < XModelNumBones( models[parentModelIndex] )") )
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
  _RBX = obj;
  if ( obj )
  {
    __asm { vmovss  xmm0, dword ptr [rcx+0C8h] }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2187, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rbx+0C8h] }
  }
  return *(float *)&_XMM0;
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
  Material *overrideMaterial; 
  __int64 v17; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  DObjStickerSlot right; 
  __int64 v28; 

  v3 = stickerSlots;
  v4 = obj;
  v5 = 0;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2682, ASSERT_TYPE_ASSERT, "( ( obj != nullptr ) )", "( obj ) = %p", NULL) )
    __debugbreak();
  NumModels = DObjGetNumModels(v4);
  memset_0(v3, 0, sizeof(DObjStickerSlotList));
  v24 = NumModels;
  if ( (int)NumModels > 0 )
  {
    v7 = 0i64;
    v28 = 0i64;
    v8 = 0i64;
    v23 = 0i64;
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
              _R14 = v3->slots;
              overrideMaterial = *(Material **)(v12 + 8);
              right.blankMaterial = *(Material **)v12;
              right.overrideMaterial = overrideMaterial;
              _RBP = (__int64)&v3->slots[v5];
              v17 = (16i64 * v5) >> 4;
              if ( v17 > 0 )
              {
                do
                {
                  if ( DObjStickerSlotGreaterThan(&_R14[v17 >> 1], &right) )
                  {
                    _R14 += (v17 >> 1) + 1;
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
              if ( _R14 == (DObjStickerSlot *)_RBP || blankMaterial != _R14->blankMaterial || overrideMaterial != _R14->overrideMaterial )
              {
                if ( v5 >= 4 )
                {
                  LODWORD(v22) = 4;
                  LODWORD(v21) = v5;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2726, ASSERT_TYPE_ASSERT, "(unsigned)( stickerCount ) < (unsigned)( ( sizeof( *array_counter( stickerSlots.slots ) ) + 0 ) )", "stickerCount doesn't index ARRAY_COUNT( stickerSlots.slots )\n\t%i not in [0, %i)", v21, v22) )
                    __debugbreak();
                }
                if ( (DObjStickerSlot *)_RBP != _R14 )
                {
                  _RAX = _RBP - 16;
                  do
                  {
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [rax]
                      vmovups xmmword ptr [rbp+0], xmm0
                    }
                    _RBP -= 16i64;
                    _RAX -= 16i64;
                  }
                  while ( (DObjStickerSlot *)_RBP != _R14 );
                }
                __asm
                {
                  vmovups xmm0, xmmword ptr [rsp+98h+right.blankMaterial]
                  vmovups xmmword ptr [r14], xmm0
                }
                ++v5;
              }
            }
            ++v11;
          }
          while ( v11 < *(_DWORD *)v10 );
          v8 = v23;
          v4 = obj;
        }
      }
      v7 = v28 + 1;
      v8 += 16i64;
      v28 = v7;
      v23 = v8;
    }
    while ( v7 < v24 );
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
  __int64 v15; 
  __int64 v17; 
  int v24; 
  const XModel *Model; 
  unsigned int UsableLodForDist; 
  __int64 v57; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  _R15 = materialLods;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0C8h+var_88], xmm10
  }
  if ( !R_IsSceneModelAddThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4077, ASSERT_TYPE_ASSERT, "(R_IsSceneModelAddThread())", (const char *)&queryFormat, "R_IsSceneModelAddThread()") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4081, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  NumModels = DObjGetNumModels(obj);
  v15 = NumModels;
  _ER13 = 0;
  if ( (unsigned int)NumModels > 0xFE )
  {
    LODWORD(v57) = NumModels;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4084, ASSERT_TYPE_SANITY, "( 0 ) <= ( modelCount ) && ( modelCount ) <= ( ( DOBJ_MAX_PARTS ) )", "modelCount not in [0, DOBJ_MAX_SUBMODELS]\n\t%i not in [%i, %i]", v57, 0i64, 254) )
      __debugbreak();
  }
  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 4086, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  v17 = v15;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.lodParms.origin; r_globals_t rg
    vsubss  xmm3, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.lodParms.origin+4; r_globals_t rg
    vsubss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.lodParms.origin+8; r_globals_t rg
    vsubss  xmm4, xmm0, dword ptr [rsi+8]
  }
  v24 = 0;
  __asm
  {
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vsubss  xmm4, xmm1, dword ptr [rdi+0C8h]
    vxorps  xmm7, xmm7, xmm7
    vmaxss  xmm6, xmm4, xmm7
    vmulss  xmm2, xmm6, cs:?rg@@3Ur_globals_t@@A.lodParms.ramp.scale; r_globals_t rg
    vaddss  xmm0, xmm2, cs:?rg@@3Ur_globals_t@@A.lodParms.ramp.bias; r_globals_t rg
    vaddss  xmm3, xmm0, cs:?rg@@3Ur_globals_t@@A.lodParms.sceneSurfsBias; r_globals_t rg
    vaddss  xmm8, xmm3, cs:?rg@@3Ur_globals_t@@A.lodParms.subdivBias; r_globals_t rg
    vaddss  xmm10, xmm8, cs:?rg@@3Ur_globals_t@@A.lodParms.skinningBias; r_globals_t rg
    vmulss  xmm9, xmm6, cs:?rg@@3Ur_globals_t@@A.lodParms.cappedLodScale; r_globals_t rg
  }
  if ( (int)v15 > 0 )
  {
    _RBX = 0i64;
    do
    {
      Model = DObjGetModel(obj, v24);
      __asm { vmovd   xmm1, r13d }
      _ECX = (Model->flags & 0x40000) != 0;
      __asm
      {
        vmovd   xmm0, ecx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm10, xmm8, xmm2; dist
        vmovaps xmm2, xmm9; cullDist
      }
      UsableLodForDist = XModelGetUsableLodForDist(Model, *(const float *)&_XMM1, *(const float *)&_XMM2);
      (*lods)[_RBX] = truncate_cast<unsigned char,unsigned int>(UsableLodForDist);
      __asm
      {
        vmovaps xmm1, xmm6; dist
        vmovaps xmm0, xmm7; radius
      }
      *(double *)&_XMM0 = XModelGetMaterialLodForDist(*(float *)&_XMM0, *(float *)&_XMM1, materialLodSettings);
      __asm { vmovss  dword ptr [r15+rbx*4], xmm0 }
      ++_RBX;
      ++v24;
    }
    while ( _RBX < v17 );
  }
  __asm { vmovaps xmm7, [rsp+0C8h+var_58] }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
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
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  _RSI = *obj->models;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vucomiss xmm0, xmm6
  }
  *(_QWORD *)bounds->midPoint.v = 0i64;
  bounds->midPoint.v[2] = 0.0;
  *(_QWORD *)bounds->halfSize.v = 0i64;
  bounds->halfSize.v[2] = 0.0;
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
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
void DObjTraceline(DObj *obj, const vec3_t *start, const vec3_t *end, const unsigned __int8 *priorityMap, DObjTrace_s *trace, bool (*shieldTraceCallback)(const DObj *, const XModel *, void *))
{
  DObj *v18; 
  bool v27; 
  bool v28; 
  const DObjDuplicateParts *DuplicateParts; 
  const XModel **models; 
  unsigned int v44; 
  unsigned __int64 v45; 
  DObjDuplicatePair *pairs; 
  const XModel *v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  unsigned int v55; 
  unsigned int numRootBones; 
  __int64 v57; 
  unsigned __int64 v59; 
  unsigned int v60; 
  char v69; 
  bool v122; 
  char v165; 
  unsigned int v166; 
  bool v168; 
  bool v186; 
  bool v187; 
  bool v188; 
  bool v193; 
  bool v194; 
  bool v195; 
  __int64 v217; 
  __int64 v218; 
  __int64 v219; 
  __int64 v220; 
  __int64 v221; 
  __int64 v222; 
  __int64 v223; 
  __int64 v224; 
  int v225; 
  int v226; 
  int v227; 
  int v228; 
  int v229; 
  int v230; 
  int v231; 
  int v232; 
  int v233; 
  int v234; 
  int v235; 
  int v236; 
  int v237; 
  int v239; 
  int v240; 
  int v241; 
  int v242; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  unsigned int v249; 
  int v250; 
  __int64 v254; 
  unsigned int v256; 
  DObjAnimMat *RotTransArray; 
  unsigned int numBones; 
  DObjDuplicatePair *v261; 
  unsigned int v262; 
  const XModel *v263; 
  __int64 numModels; 
  const XModel **v266; 
  int v269[146]; 
  char v277; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RDI = trace;
  v18 = obj;
  _RSI = end;
  _RBX = start;
  if ( !shieldTraceCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3221, ASSERT_TYPE_ASSERT, "(shieldTraceCallback != 0)", (const char *)&queryFormat, "shieldTraceCallback != NULL") )
    __debugbreak();
  Profile_Begin(417);
  *(_QWORD *)&trace->surfaceflags = 0i64;
  trace->modelIndex = 0;
  trace->partName = 0;
  trace->partGroup = 0;
  *(_QWORD *)&trace->normal.y = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+440h+var_3EC], xmm0
  }
  if ( (v241 & 0x7F800000) == 2139095040 )
    goto LABEL_127;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+440h+var_3EC], xmm0
  }
  if ( (v242 & 0x7F800000) == 2139095040 )
    goto LABEL_127;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+440h+var_3EC], xmm0
  }
  if ( (v243 & 0x7F800000) == 2139095040 )
  {
LABEL_127:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3231, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+440h+var_3EC], xmm0
  }
  if ( (v244 & 0x7F800000) == 2139095040 )
    goto LABEL_128;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+440h+var_3EC], xmm0
  }
  if ( (v245 & 0x7F800000) == 2139095040 )
    goto LABEL_128;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+440h+var_3EC], xmm0
  }
  v27 = (v246 & 0x7F800000) == 2139095040;
  if ( (v246 & 0x7F800000) == 2139095040 )
  {
LABEL_128:
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3232, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )");
    v27 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm9, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm0, xmm0, dword ptr [rbx+4]
    vmovss  xmm1, dword ptr [rsi+8]
    vsubss  xmm1, xmm1, dword ptr [rbx+8]
    vmulss  xmm2, xmm0, xmm0
    vmovss  [rbp+340h+var_3B8], xmm0
    vmulss  xmm0, xmm9, xmm9
    vmovss  [rbp+340h+var_3A0], xmm1
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm6, xmm3, xmm1
    vxorps  xmm15, xmm15, xmm15
    vucomiss xmm6, xmm15
    vmovss  dword ptr [rsp+440h+var_3E0+4], xmm9
  }
  if ( v27 )
    goto LABEL_124;
  RotTransArray = DObjGetRotTransArray(v18);
  _RSI = RotTransArray;
  if ( !RotTransArray )
    goto LABEL_124;
  __asm { vmovaps xmmword ptr [rsp+440h+var_48+8], xmm7 }
  DuplicateParts = DObjGetDuplicateParts(v18);
  models = v18->models;
  v44 = 0;
  v45 = 0i64;
  pairs = DuplicateParts->pairs;
  v261 = DuplicateParts->pairs;
  v256 = 0;
  v266 = models;
  numModels = v18->numModels;
  v249 = 0;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm7, dword ptr [rdi]
    vxorps  xmm2, xmm2, xmm2
    vdivss  xmm0, xmm0, xmm6
    vmovss  [rsp+440h+var_3EC], xmm2
    vmovss  dword ptr [rsp+440h+var_3E0], xmm7
    vmovss  [rbp+340h+var_39C], xmm0
  }
  if ( !v18->numModels )
    goto LABEL_123;
  __asm
  {
    vmovaps [rsp+440h+var_58+8], xmm8
    vmovaps xmmword ptr [rsp+440h+var_78+8], xmm10
    vmovaps [rsp+440h+var_88+8], xmm11
    vmovaps [rsp+440h+var_98+8], xmm12
    vmovaps [rsp+440h+var_A8+8], xmm13
    vmovaps [rsp+440h+var_B8+8], xmm14
  }
  while ( 1 )
  {
    v51 = models[v44];
    v263 = v51;
    numBones = v51->numBones;
    if ( v44 >= 0x100 )
    {
      LODWORD(v221) = 256;
      LODWORD(v217) = v44;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v217, v221) )
        __debugbreak();
      pairs = v261;
      v51 = v263;
    }
    v262 = v18->ignoreCollision.array[(unsigned __int64)v44 >> 5] & (0x80000000 >> (v44 & 0x1F));
    v52 = 0i64;
    v250 = 0;
    if ( numBones )
    {
      v53 = 0i64;
      v254 = 0i64;
      do
      {
        v54 = v51->partClassification[v52];
        v55 = priorityMap[v54];
        if ( (_DWORD)v45 == pairs->child - 1 )
        {
          if ( v55 == 1 )
          {
            v54 = *((unsigned __int16 *)&v269[17] + pairs->parent + 1);
            v55 = priorityMap[v54];
          }
          v261 = pairs + 1;
        }
        else if ( v55 == 1 )
        {
          numRootBones = v51->numRootBones;
          if ( (unsigned int)v52 >= numRootBones )
          {
            v57 = (unsigned int)v45 - v51->parentList[(unsigned int)v52 - numRootBones];
            LODWORD(v52) = v250;
LABEL_34:
            LOWORD(v54) = *((_WORD *)&v269[18] + v57);
          }
          else
          {
            LOBYTE(v57) = *((_BYTE *)&v266[numModels] + v44);
            if ( (_BYTE)v57 != 0xFF )
            {
              v57 = (unsigned __int8)v57;
              goto LABEL_34;
            }
            LOWORD(v54) = 0;
          }
          v55 = priorityMap[(unsigned __int16)v54];
        }
        *((_WORD *)&v269[18] + v45) = v54;
        if ( v262 )
          goto LABEL_114;
        _R14 = (__int64)&v51->boneInfo[v53];
        if ( !*(_DWORD *)(_R14 + 24) )
          goto LABEL_114;
        if ( v256 >= 0x100 )
        {
          LODWORD(v221) = 256;
          LODWORD(v217) = v256;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v217, v221) )
            __debugbreak();
          v53 = v254;
        }
        v59 = v45 >> 5;
        v60 = 0x80000000 >> (v256 & 0x1F);
        if ( (v60 & obj->hidePartBits.array[v59]) != 0 )
        {
          v18 = obj;
          LODWORD(v52) = v250;
          v44 = v249;
          goto LABEL_115;
        }
        if ( v256 >= 0x100 )
        {
          LODWORD(v221) = 256;
          LODWORD(v217) = v256;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v217, v221) )
            __debugbreak();
        }
        if ( (v60 & obj->skel.partBits.skel.array[v59]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3331, ASSERT_TYPE_ASSERT, "(obj->skel.partBits.skel.testBit( globalBoneIndex ))", (const char *)&queryFormat, "obj->skel.partBits.skel.testBit( globalBoneIndex )") )
          __debugbreak();
        if ( v55 >= 2 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vmovss  [rsp+440h+var_3F0], xmm0
          }
          if ( (v225 & 0x7F800000) == 2139095040 )
            goto LABEL_129;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+4]
            vmovss  [rsp+440h+var_3F0], xmm0
          }
          if ( (v226 & 0x7F800000) == 2139095040 )
            goto LABEL_129;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+8]
            vmovss  [rsp+440h+var_3F0], xmm0
          }
          if ( (v227 & 0x7F800000) == 2139095040 )
            goto LABEL_129;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+0Ch]
            vmovss  [rsp+440h+var_3F0], xmm0
          }
          if ( (v228 & 0x7F800000) == 2139095040 )
          {
LABEL_129:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3336, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneMatrix->quat )[0] ) && !IS_NAN( ( boneMatrix->quat )[1] ) && !IS_NAN( ( boneMatrix->quat )[2] ) && !IS_NAN( ( boneMatrix->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneMatrix->quat )[0] ) && !IS_NAN( ( boneMatrix->quat )[1] ) && !IS_NAN( ( boneMatrix->quat )[2] ) && !IS_NAN( ( boneMatrix->quat )[3] )") )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+10h]
            vmovss  [rsp+440h+var_3F0], xmm0
          }
          if ( (v229 & 0x7F800000) == 2139095040 )
            goto LABEL_130;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+14h]
            vmovss  [rsp+440h+var_3F0], xmm0
          }
          if ( (v230 & 0x7F800000) == 2139095040 )
            goto LABEL_130;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+18h]
            vmovss  [rsp+440h+var_3F0], xmm0
          }
          if ( (v231 & 0x7F800000) == 2139095040 )
          {
LABEL_130:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3337, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneMatrix->trans )[0] ) && !IS_NAN( ( boneMatrix->trans )[1] ) && !IS_NAN( ( boneMatrix->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneMatrix->trans )[0] ) && !IS_NAN( ( boneMatrix->trans )[1] ) && !IS_NAN( ( boneMatrix->trans )[2] )") )
              __debugbreak();
          }
          _RDI = trace;
          if ( v55 - 200 <= 2 )
          {
            v69 = 1;
          }
          else
          {
            v69 = 0;
            if ( v55 != 2 )
            {
              __asm { vmovaps xmm14, xmm7 }
LABEL_66:
              __asm
              {
                vmovups xmm7, xmmword ptr [r14]
                vmovups xmm11, xmmword ptr [rsi]
              }
              _RAX = start;
              __asm
              {
                vmovups xmm10, xmmword ptr [rsi+10h]
                vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
                vshufps xmm8, xmm11, xmm11, 0D2h ; 'Ò'
                vmovups xmm12, xmmword ptr [rax]
              }
              _RAX = end;
              __asm
              {
                vmulps  xmm2, xmm1, xmm8
                vshufps xmm6, xmm11, xmm11, 0C9h ; 'É'
                vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
                vmovups xmm13, xmmword ptr [rax]
                vmulps  xmm3, xmm0, xmm6
                vsubps  xmm0, xmm3, xmm2
                vaddps  xmm4, xmm0, xmm0
                vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
                vmulps  xmm3, xmm1, xmm6
                vshufps xmm5, xmm11, xmm11, 0FFh
                vmulps  xmm0, xmm5, xmm4
                vaddps  xmm5, xmm0, xmm7
                vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
                vmulps  xmm2, xmm0, xmm8
                vsubps  xmm1, xmm3, xmm2
                vaddps  xmm4, xmm1, xmm5
                vaddps  xmm0, xmm4, xmm10
                vsubps  xmm8, xmm12, xmm0
                vmulss  xmm1, xmm9, xmm8
                vshufps xmm7, xmm8, xmm8, 55h ; 'U'
                vmulss  xmm0, xmm7, [rbp+340h+var_3B8]
                vaddss  xmm2, xmm1, xmm0
                vshufps xmm6, xmm8, xmm8, 0AAh ; 'ª'
                vmulss  xmm1, xmm6, [rbp+340h+var_3A0]
                vaddss  xmm2, xmm2, xmm1
                vmulss  xmm0, xmm2, [rbp+340h+var_39C]
                vxorps  xmm9, xmm0, cs:__xmm@80000000800000008000000080000000
                vmovss  xmm2, cs:__real@3f800000; max
                vmovaps xmm0, xmm9; val
                vmovaps xmm1, xmm15; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmulss  xmm1, xmm0, dword ptr [rsp+440h+var_3E0+4]
                vmulss  xmm2, xmm0, [rbp+340h+var_3B8]
                vmulss  xmm0, xmm0, [rbp+340h+var_3A0]
                vaddss  xmm3, xmm2, xmm7
                vaddss  xmm5, xmm1, xmm8
                vmulss  xmm2, xmm3, xmm3
                vmulss  xmm1, xmm5, xmm5
                vaddss  xmm3, xmm2, xmm1
                vmovss  xmm1, dword ptr [r14+18h]
                vaddss  xmm4, xmm0, xmm6
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm4, xmm3, xmm0
                vsubss  xmm2, xmm1, xmm4
                vcomiss xmm2, xmm15
              }
              if ( v122 || v27 )
                goto LABEL_120;
              v122 = v55 < 2;
              if ( v55 != 2 )
              {
                v122 = 0;
                if ( !v69 )
                  goto LABEL_70;
              }
              __asm
              {
                vmulss  xmm0, xmm2, [rbp+340h+var_39C]
                vsqrtss xmm1, xmm0, xmm0
                vsubss  xmm2, xmm9, xmm1
                vcomiss xmm2, xmm14
              }
              if ( !v122 )
              {
LABEL_120:
                __asm
                {
                  vmovss  xmm7, dword ptr [rsp+440h+var_3E0]
                  vmovss  xmm9, dword ptr [rsp+440h+var_3E0+4]
                }
              }
              else
              {
LABEL_70:
                __asm
                {
                  vmulps  xmm0, xmm11, cs:__xmm@3f800000bf800000bf800000bf800000
                  vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
                  vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
                  vshufps xmm7, xmm0, xmm0, 0FFh
                  vsubps  xmm5, xmm12, xmm10
                  vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
                  vmulps  xmm3, xmm0, xmm6
                  vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
                  vmulps  xmm2, xmm1, xmm8
                  vsubps  xmm0, xmm3, xmm2
                  vaddps  xmm4, xmm0, xmm0
                  vmulps  xmm0, xmm7, xmm4
                  vaddps  xmm5, xmm0, xmm5
                  vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
                  vmulps  xmm2, xmm0, xmm8
                  vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
                  vmulps  xmm3, xmm1, xmm6
                  vsubps  xmm1, xmm3, xmm2
                  vaddps  xmm9, xmm1, xmm5
                  vsubps  xmm5, xmm13, xmm10
                  vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
                  vmulps  xmm3, xmm0, xmm6
                  vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
                  vmulps  xmm2, xmm1, xmm8
                  vsubps  xmm0, xmm3, xmm2
                  vaddps  xmm4, xmm0, xmm0
                  vmulps  xmm0, xmm7, xmm4
                  vaddps  xmm5, xmm0, xmm5
                  vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
                  vmulps  xmm2, xmm0, xmm8
                  vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
                  vmulps  xmm3, xmm1, xmm6
                  vsubps  xmm1, xmm3, xmm2
                  vaddps  xmm6, xmm1, xmm5
                  vmovss  [rsp+440h+var_3F0], xmm9
                  vshufps xmm7, xmm6, xmm6, 55h ; 'U'
                  vshufps xmm8, xmm6, xmm6, 0AAh ; 'ª'
                  vshufps xmm0, xmm9, xmm9, 55h ; 'U'
                  vshufps xmm1, xmm9, xmm9, 0AAh ; 'ª'
                  vmovss  [rbp+340h+var_314], xmm7
                  vmovss  [rbp+340h+var_310], xmm8
                  vmovss  [rbp+340h+var_308], xmm9
                  vmovss  [rbp+340h+var_304], xmm0
                  vmovss  [rbp+340h+var_300], xmm1
                  vmovss  [rbp+340h+var_318], xmm6
                }
                if ( (v232 & 0x7F800000) == 2139095040 )
                  goto LABEL_131;
                __asm { vmovss  [rsp+440h+var_3F0], xmm0 }
                if ( (v233 & 0x7F800000) == 2139095040 )
                  goto LABEL_131;
                __asm { vmovss  [rsp+440h+var_3F0], xmm1 }
                if ( (v234 & 0x7F800000) == 2139095040 )
                {
LABEL_131:
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3406, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localStart )[0] ) && !IS_NAN( ( localStart )[1] ) && !IS_NAN( ( localStart )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localStart )[0] ) && !IS_NAN( ( localStart )[1] ) && !IS_NAN( ( localStart )[2] )") )
                    __debugbreak();
                }
                __asm { vmovss  [rsp+440h+var_3F0], xmm6 }
                if ( (v235 & 0x7F800000) == 2139095040 )
                  goto LABEL_132;
                __asm { vmovss  [rsp+440h+var_3F0], xmm7 }
                if ( (v236 & 0x7F800000) == 2139095040 )
                  goto LABEL_132;
                __asm { vmovss  [rsp+440h+var_3F0], xmm8 }
                if ( (v237 & 0x7F800000) == 2139095040 )
                {
LABEL_132:
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3407, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localEnd )[0] ) && !IS_NAN( ( localEnd )[1] ) && !IS_NAN( ( localEnd )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localEnd )[0] ) && !IS_NAN( ( localEnd )[1] ) && !IS_NAN( ( localEnd )[2] )") )
                    __debugbreak();
                }
                __asm { vmovss  xmm13, cs:__real@3f000000 }
                v165 = 1;
                v166 = 0;
                _RDI = 0i64;
                v168 = 1;
                __asm
                {
                  vmovaps xmm11, xmm15
                  vmovaps xmm12, xmm14
                }
                do
                {
                  if ( !v168 )
                  {
                    LODWORD(v221) = 3;
                    LODWORD(v217) = v166;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v217, v221) )
                      __debugbreak();
                    LODWORD(v222) = 3;
                    LODWORD(v218) = v166;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v218, v222) )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmovss  xmm0, [rbp+rdi+340h+var_318]
                    vsubss  xmm1, xmm0, [rbp+rdi+340h+var_308]
                    vmovss  xmm2, cs:__real@3f800000
                    vmovss  xmm3, cs:__real@bf800000
                    vcmpless xmm0, xmm15, xmm1
                    vblendvps xmm8, xmm3, xmm2, xmm0
                    vmovss  [rsp+440h+var_3F0], xmm8
                    vmulss  xmm6, xmm8, xmm1
                  }
                  if ( v166 >= 3 )
                  {
                    LODWORD(v221) = 3;
                    LODWORD(v217) = v166;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v217, v221) )
                      __debugbreak();
                    LODWORD(v223) = 3;
                    LODWORD(v219) = v166;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v219, v223) )
                      __debugbreak();
                    LODWORD(v224) = 3;
                    LODWORD(v220) = v166;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v220, v224) )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmovss  xmm0, [rbp+rdi+340h+var_318]
                    vaddss  xmm1, xmm0, [rbp+rdi+340h+var_308]
                    vmulss  xmm2, xmm1, xmm13
                    vsubss  xmm3, xmm2, dword ptr [rdi+r14]
                    vmulss  xmm10, xmm3, xmm8
                  }
                  if ( v166 >= 3 )
                  {
                    LODWORD(v221) = 3;
                    LODWORD(v217) = v166;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v217, v221) )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmulss  xmm0, xmm6, xmm13
                    vsubss  xmm9, xmm0, dword ptr [rdi+r14+0Ch]
                    vsubss  xmm7, xmm9, xmm10
                    vmovss  [rsp+440h+var_3F0], xmm7
                  }
                  v186 = (v239 & 0x7F800000u) < 0x7F800000;
                  v187 = (v239 & 0x7F800000u) <= 0x7F800000;
                  if ( (v239 & 0x7F800000) == 2139095040 )
                  {
                    v188 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3430, ASSERT_TYPE_SANITY, "( !IS_NAN( distBeforeEnter ) )", (const char *)&queryFormat, "!IS_NAN( distBeforeEnter )");
                    v186 = 0;
                    v187 = !v188;
                    if ( v188 )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmulss  xmm0, xmm6, xmm11
                    vcomiss xmm7, xmm0
                  }
                  if ( !v187 )
                  {
                    __asm
                    {
                      vmulss  xmm0, xmm6, xmm12
                      vcomiss xmm7, xmm0
                    }
                    if ( !v186 )
                    {
                      v44 = v249;
                      _RSI = RotTransArray;
                      __asm
                      {
                        vmovss  xmm7, dword ptr [rsp+440h+var_3E0]
                        vmovss  xmm9, dword ptr [rsp+440h+var_3E0+4]
                      }
                      LODWORD(v52) = v250;
                      v53 = v254;
                      goto LABEL_114;
                    }
                    __asm
                    {
                      vxorps  xmm8, xmm8, cs:__xmm@80000000800000008000000080000000
                      vmovss  [rsp+440h+var_3EC], xmm8
                      vdivss  xmm11, xmm7, xmm6
                    }
                    v165 = 0;
                  }
                  __asm
                  {
                    vaddss  xmm7, xmm9, xmm10
                    vmovss  [rsp+440h+var_3F0], xmm7
                  }
                  v193 = (v240 & 0x7F800000u) < 0x7F800000;
                  v194 = (v240 & 0x7F800000u) <= 0x7F800000;
                  if ( (v240 & 0x7F800000) == 2139095040 )
                  {
                    v195 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 3444, ASSERT_TYPE_SANITY, "( !IS_NAN( distAfterLeave ) )", (const char *)&queryFormat, "!IS_NAN( distAfterLeave )");
                    v193 = 0;
                    v194 = !v195;
                    if ( v195 )
                      __debugbreak();
                  }
                  __asm { vcomiss xmm7, xmm15 }
                  if ( !v194 )
                  {
                    __asm
                    {
                      vsubss  xmm1, xmm6, xmm7
                      vmulss  xmm0, xmm6, xmm12
                      vcomiss xmm1, xmm0
                    }
                    if ( v193 )
                    {
                      __asm
                      {
                        vmulss  xmm0, xmm6, xmm11
                        vcomiss xmm1, xmm0
                        vdivss  xmm12, xmm1, xmm6
                      }
                    }
                  }
                  ++v166;
                  _RDI += 4i64;
                  v168 = v166 < 3;
                }
                while ( (int)v166 < 3 );
                if ( v165 )
                {
                  _RAX = start;
                  __asm
                  {
                    vmovss  xmm9, dword ptr [rsp+440h+var_3E0+4]
                    vmovss  xmm4, dword ptr [rax+4]
                    vmovss  xmm3, dword ptr [rax]
                    vmulss  xmm1, xmm4, [rbp+340h+var_3B8]
                    vmulss  xmm0, xmm9, xmm3
                    vaddss  xmm2, xmm1, xmm0
                    vcomiss xmm2, xmm15
                  }
                }
                else
                {
                  __asm
                  {
                    vcomiss xmm11, xmm14
                    vmovss  xmm9, dword ptr [rsp+440h+var_3E0+4]
                  }
                }
                __asm { vmovss  xmm7, dword ptr [rsp+440h+var_3E0] }
                _RSI = RotTransArray;
              }
              goto LABEL_113;
            }
          }
          __asm { vmovss  xmm14, dword ptr [rdi] }
          goto LABEL_66;
        }
LABEL_113:
        LODWORD(v52) = v250;
        v53 = v254;
        v44 = v249;
LABEL_114:
        v18 = obj;
LABEL_115:
        v52 = (unsigned int)(v52 + 1);
        v51 = v263;
        v45 = v256 + 1;
        pairs = v261;
        ++v53;
        ++_RSI;
        v250 = v52;
        v254 = v53;
        RotTransArray = _RSI;
        ++v256;
      }
      while ( (unsigned int)v52 < numBones );
    }
    v249 = ++v44;
    if ( v44 >= (unsigned int)numModels )
      break;
    pairs = v261;
    models = v266;
  }
  __asm
  {
    vmovaps xmm13, [rsp+440h+var_A8+8]
    vmovaps xmm12, [rsp+440h+var_98+8]
    vmovaps xmm11, [rsp+440h+var_88+8]
    vmovaps xmm10, xmmword ptr [rsp+440h+var_78+8]
    vmovaps xmm8, [rsp+440h+var_58+8]
    vmovaps xmm14, [rsp+440h+var_B8+8]
  }
LABEL_123:
  __asm { vmovaps xmm7, xmmword ptr [rsp+440h+var_48+8] }
LABEL_124:
  Profile_EndInternal(NULL);
  _R11 = &v277;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
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
  char v9; 
  bool v13; 
  int v14; 
  DObj *v15; 
  unsigned int v16; 
  unsigned __int64 v22; 
  unsigned int v23; 
  XAnimTree *v24; 
  unsigned __int8 v25; 
  int v26; 
  __int64 ownera; 
  __int64 v28; 
  char v30; 
  void *p[4]; 
  XAnimTree *tree[4]; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  __int128 v35; 
  DObjMaterialData *v36; 
  DObjModel dobjModels[254]; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymm2, ymmword ptr [rcx+20h]
    vmovups xmm1, xmmword ptr [rcx+60h]
    vmovups ymmword ptr [rsp+5078h+p], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
  }
  _R12 = p[0];
  v9 = owner;
  __asm
  {
    vmovups ymmword ptr [rsp+5078h+otherBitSet.baseclass_0.array], ymm0
    vmovsd  xmm0, qword ptr [rcx+70h]
    vmovsd  [rsp+5078h+var_4FB8], xmm0
    vextractf128 xmm0, ymm2, 1
    vpextrw r14d, xmm0, 2
  }
  v30 = owner;
  v13 = requiresIKPrecache;
  v14 = handle;
  v15 = obj;
  v16 = 0;
  __asm
  {
    vmovups ymmword ptr [rsp+5078h+tree], ymm2
    vmovups [rsp+5078h+var_4FC8], xmm1
  }
  if ( (_WORD)_ER14 )
  {
    do
    {
      _RAX = 9i64 * v16;
      __asm { vmovsd  xmm0, qword ptr [r12+rax*4+8] }
      _RCX = (scr_string_t *)((char *)p[0] + 36 * v16);
      _RSI = &dobjModels[v16];
      _RSI->boneName = *_RCX;
      _RSI->parentSlot = _RCX[1];
      SLODWORD(_RAX) = _RCX[4];
      __asm { vmovsd  qword ptr [rsi+10h], xmm0 }
      LODWORD(_RSI->offsets.v[2]) = _RAX;
      _RSI->model = (const XModel *)*((_QWORD *)p[1] + v16);
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+14h]
        vmovups xmmword ptr [rsi+1Ch], xmm0
      }
      if ( v16 >= 0x100 )
      {
        LODWORD(v28) = 256;
        LODWORD(ownera) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", ownera, v28) )
          __debugbreak();
      }
      v22 = (unsigned __int64)v16 >> 5;
      v23 = 0x80000000 >> (v16++ & 0x1F);
      _RSI->ignoreCollision = (v23 & *((_DWORD *)&p[2] + v22 + 1)) != 0;
    }
    while ( v16 < (unsigned __int16)_ER14 );
    v13 = requiresIKPrecache;
    v14 = handle;
    v9 = v30;
  }
  MT_AlignedFree(p[0], 36i64 * (unsigned __int16)_ER14, 4ui64);
  MT_AlignedFree(p[1], 9i64 * (unsigned __int16)_ER14, 8ui64);
  v24 = tree[3];
  v15->offsets = NULL;
  v15->quats = NULL;
  v15->models = NULL;
  v15->parentSlots = NULL;
  v15->lastGpuLightGridRequest = NULL;
  v15->materialData = NULL;
  v15->modelMaterialOverrides = NULL;
  LOBYTE(ownera) = v9;
  DObjCreate(dobjModels, (unsigned __int16)_ER14, v24, (char *)v15, HIWORD(tree[2]), (XAnimOwner)ownera);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v15->hidePartBits, &otherBitSet);
  v25 = v35;
  v15->modelMaterialOverrides = (XModelMaterialOverride *)*((_QWORD *)&v35 + 1);
  v15->materialData = v36;
  v15->validation = BYTE1(v35);
  v15->flags = v25;
  if ( v9 != ((v25 & 8) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj.cpp", 2060, ASSERT_TYPE_ASSERT, "(owner == ((savedObj.flags & 0x08) ? XAnimOwner::CLIENT : XAnimOwner::SERVER))", (const char *)&queryFormat, "owner == ((savedObj.flags & DOBJFLAGS_CLIENT) ? XAnimOwner::CLIENT : XAnimOwner::SERVER)") )
    __debugbreak();
  if ( v13 && (v25 & 2) != 0 )
  {
    v26 = XAnimIKGetCacheKey(v15);
    XAnimIKPreCacheDObj(v15, v14, v26);
  }
  if ( LODWORD(p[2]) )
    DObjLock(v15);
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

