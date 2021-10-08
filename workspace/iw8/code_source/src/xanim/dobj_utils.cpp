/*
==============
DObjInitSubmodel
==============
*/

void __fastcall DObjInitSubmodel(const XModel *const model, const scr_string_t boneName, const int parentSlot, const vec3_t *const offsets, const vec4_t *const quat, const bool ignoreCollision, const bool stowedWeapon, const DObjCamoParams *const camoParams, DObjModel *const outDObjModel)
{
  ?DObjInitSubmodel@@YAXQEBUXModel@@W4scr_string_t@@HQEBTvec3_t@@QEBTvec4_t@@_N4QEBUDObjCamoParams@@QEAUDObjModel@@@Z(model, boneName, parentSlot, offsets, quat, ignoreCollision, stowedWeapon, camoParams, outDObjModel);
}

/*
==============
DObjGetBoneInfo
==============
*/

void __fastcall DObjGetBoneInfo(const DObj *obj, XBoneInfo **boneInfo)
{
  ?DObjGetBoneInfo@@YAXPEBUDObj@@QEAPEAUXBoneInfo@@@Z(obj, boneInfo);
}

/*
==============
DObjSetTrans
==============
*/

void __fastcall DObjSetTrans(DObjAnimMat *rotTrans, const vec3_t *trans)
{
  ?DObjSetTrans@@YAXPEAUDObjAnimMat@@AEBTvec3_t@@@Z(rotTrans, trans);
}

/*
==============
DObjSetLocalTagInternal
==============
*/

void __fastcall DObjSetLocalTagInternal(const DObj *obj, const vec3_t *trans, const vec3_t *angles, int boneIndex)
{
  ?DObjSetLocalTagInternal@@YAXPEBUDObj@@AEBTvec3_t@@PEBT2@H@Z(obj, trans, angles, boneIndex);
}

/*
==============
DObjIsBoneSet
==============
*/

int __fastcall DObjIsBoneSet(const DObj *obj, int boneIndex)
{
  return ?DObjIsBoneSet@@YAHPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
DObjGetBoneInfoClient
==============
*/

void __fastcall DObjGetBoneInfoClient(const DObj *obj, XBoneInfo **boneInfo)
{
  ?DObjGetBoneInfoClient@@YAXPEBUDObj@@QEAPEAUXBoneInfo@@@Z(obj, boneInfo);
}

/*
==============
DObjCompleteHierarchyBits
==============
*/

bool __fastcall DObjCompleteHierarchyBits(const DObj *obj, DObjPartBits *partBits)
{
  return ?DObjCompleteHierarchyBits@@YA_NPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
DObjSetSkelRotTransIndex
==============
*/

bool __fastcall DObjSetSkelRotTransIndex(const DObj *obj, const DObjPartBits *partBits, int boneIndex)
{
  return ?DObjSetSkelRotTransIndex@@YA_NPEBUDObj@@PEIBUDObjPartBits@@H@Z(obj, partBits, boneIndex);
}

/*
==============
DObjGetNextChildBoneIndex
==============
*/

int __fastcall DObjGetNextChildBoneIndex(const DObj *obj, unsigned __int8 parentIndex, unsigned __int8 *childIndex)
{
  return ?DObjGetNextChildBoneIndex@@YAHPEBUDObj@@EPEAE@Z(obj, parentIndex, childIndex);
}

/*
==============
DObjClearSkelRecord
==============
*/

void __fastcall DObjClearSkelRecord(const DObj *obj)
{
  ?DObjClearSkelRecord@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjHasClientOnlyBones
==============
*/

bool __fastcall DObjHasClientOnlyBones(const DObj *obj)
{
  return ?DObjHasClientOnlyBones@@YA_NPEBUDObj@@@Z(obj);
}

/*
==============
DObjBuildBoneParentMap
==============
*/

void __fastcall DObjBuildBoneParentMap(const DObj *obj, DObjBoneParentMap *outParentMap)
{
  ?DObjBuildBoneParentMap@@YAXPEBUDObj@@PEAUDObjBoneParentMap@@@Z(obj, outParentMap);
}

/*
==============
DObjApplyPreviousSkelPose
==============
*/

bool __fastcall DObjApplyPreviousSkelPose(const DObj *obj)
{
  return ?DObjApplyPreviousSkelPose@@YA_NPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetModelIndexForBoneIndex
==============
*/

int __fastcall DObjGetModelIndexForBoneIndex(const DObj *obj, int boneIndex)
{
  return ?DObjGetModelIndexForBoneIndex@@YAHPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
XModelGetClientBoneIndex
==============
*/

int __fastcall XModelGetClientBoneIndex(const XModel *model, scr_string_t name, unsigned int offset, unsigned __int16 *outIndex)
{
  return ?XModelGetClientBoneIndex@@YAHPEBUXModel@@W4scr_string_t@@IPEAG@Z(model, name, offset, outIndex);
}

/*
==============
DObjCreateSkel
==============
*/

void __fastcall DObjCreateSkel(const DObj *obj, char *buf, int timeStamp)
{
  ?DObjCreateSkel@@YAXPEBUDObj@@PEADH@Z(obj, buf, timeStamp);
}

/*
==============
DObjSkelAreBonesUpToDate
==============
*/

int __fastcall DObjSkelAreBonesUpToDate(const DObj *obj, DObjPartBits *partBits)
{
  return ?DObjSkelAreBonesUpToDate@@YAHPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
DObjInitModel
==============
*/

void __fastcall DObjInitModel(const XModel *const model, scr_string_t boneName, bool ignoreCollision, bool stowedWeapon, const DObjCamoParams *camoParams, DObjModel *outDObjModel)
{
  ?DObjInitModel@@YAXQEBUXModel@@W4scr_string_t@@_N2PEBUDObjCamoParams@@PEAUDObjModel@@@Z(model, boneName, ignoreCollision, stowedWeapon, camoParams, outDObjModel);
}

/*
==============
DObjSetControlTagAngles
==============
*/

void __fastcall DObjSetControlTagAngles(const DObj *obj, DObjPartBits *partBits, unsigned int boneIndex, const vec3_t *angles)
{
  ?DObjSetControlTagAngles@@YAXPEBUDObj@@PEAUDObjPartBits@@IAEBTvec3_t@@@Z(obj, partBits, boneIndex, angles);
}

/*
==============
DObjApplyCustomChannelRecord
==============
*/

void __fastcall DObjApplyCustomChannelRecord(int objBufIndex, ComputeCmdBufState *state)
{
  ?DObjApplyCustomChannelRecord@@YAXHPEAUComputeCmdBufState@@@Z(objBufIndex, state);
}

/*
==============
DObjGetHidePartBits
==============
*/

void __fastcall DObjGetHidePartBits(const DObj *obj, DObjPartBitsAligned *partBits)
{
  ?DObjGetHidePartBits@@YAXPEBUDObj@@PEAUDObjPartBitsAligned@@@Z(obj, partBits);
}

/*
==============
XModelGetBoneIndex
==============
*/

int __fastcall XModelGetBoneIndex(const XModel *model, scr_string_t name, unsigned int offset, unsigned __int8 *index)
{
  return ?XModelGetBoneIndex@@YAHPEBUXModel@@W4scr_string_t@@IPEAE@Z(model, name, offset, index);
}

/*
==============
DObjGetBoneInfoForBoneIndex
==============
*/

XBoneInfo *__fastcall DObjGetBoneInfoForBoneIndex(const DObj *obj, int boneIndex)
{
  return ?DObjGetBoneInfoForBoneIndex@@YAPEAUXBoneInfo@@PEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
XModelGetNextChildBoneIndex
==============
*/

int __fastcall XModelGetNextChildBoneIndex(const XModel *model, unsigned __int8 parentIndex, unsigned int offset, unsigned __int8 *childIndex)
{
  return ?XModelGetNextChildBoneIndex@@YAHPEBUXModel@@EIPEAE@Z(model, parentIndex, offset, childIndex);
}

/*
==============
DObjSkelExists
==============
*/

int __fastcall DObjSkelExists(const DObj *obj, int timeStamp)
{
  return ?DObjSkelExists@@YAHPEBUDObj@@H@Z(obj, timeStamp);
}

/*
==============
DObjGetRootBoneCount
==============
*/

unsigned int __fastcall DObjGetRootBoneCount(const DObj *obj)
{
  return ?DObjGetRootBoneCount@@YAIPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetRotTransArray
==============
*/

DObjAnimMat *__fastcall DObjGetRotTransArray(const DObj *obj)
{
  return ?DObjGetRotTransArray@@YAPEAUDObjAnimMat@@PEBUDObj@@@Z(obj);
}

/*
==============
DObjSetControlRotTransIndex
==============
*/

int __fastcall DObjSetControlRotTransIndex(const DObj *obj, const DObjPartBits *partBits, int boneIndex)
{
  return ?DObjSetControlRotTransIndex@@YAHPEBUDObj@@PEIBUDObjPartBits@@H@Z(obj, partBits, boneIndex);
}

/*
==============
DObjGetNumBones
==============
*/

int __fastcall DObjGetNumBones(const DObj *obj)
{
  return ?DObjGetNumBones@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjTotalNumBones
==============
*/

int __fastcall DObjTotalNumBones(const DObj *obj)
{
  return ?DObjTotalNumBones@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetHidePartBits
==============
*/

void __fastcall DObjGetHidePartBits(const DObj *obj, DObjPartBits *partBits)
{
  ?DObjGetHidePartBits@@YAXPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
DObjClearBoneSetBit
==============
*/

void __fastcall DObjClearBoneSetBit(const DObj *obj, int boneIndex)
{
  ?DObjClearBoneSetBit@@YAXPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
DObjSetWorldControlRotTransIndex
==============
*/

int __fastcall DObjSetWorldControlRotTransIndex(const DObj *obj, const DObjPartBits *partBits, int boneIndex)
{
  return ?DObjSetWorldControlRotTransIndex@@YAHPEBUDObj@@PEIBUDObjPartBits@@H@Z(obj, partBits, boneIndex);
}

/*
==============
DObjNumClientOnlyBones
==============
*/

int __fastcall DObjNumClientOnlyBones(const DObj *obj)
{
  return ?DObjNumClientOnlyBones@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetSetBones
==============
*/

void __fastcall DObjGetSetBones(const DObj *obj, DObjPartBits *setPartBits)
{
  ?DObjGetSetBones@@YAXPEBUDObj@@PEAUDObjPartBits@@@Z(obj, setPartBits);
}

/*
==============
DObjTransferSkinningSkelRecordBits
==============
*/

void __fastcall DObjTransferSkinningSkelRecordBits(DObjPartBits *dstParts, const void *srcSkelRecord)
{
  ?DObjTransferSkinningSkelRecordBits@@YAXPEAUDObjPartBits@@PEBX@Z(dstParts, srcSkelRecord);
}

/*
==============
DObjSetRotTransIndex
==============
*/

int __fastcall DObjSetRotTransIndex(const DObj *obj, const DObjPartBits *partBits, int boneIndex)
{
  return ?DObjSetRotTransIndex@@YAHPEBUDObj@@PEIBUDObjPartBits@@H@Z(obj, partBits, boneIndex);
}

/*
==============
DObjGetSurfaces
==============
*/

int __fastcall DObjGetSurfaces(const DObj *obj, DObjPartBits *partBits, const unsigned __int8 (*lods)[254])
{
  return ?DObjGetSurfaces@@YAHPEBUDObj@@PEAUDObjPartBits@@AEAY0PO@$$CBE@Z(obj, partBits, lods);
}

/*
==============
DObjLock
==============
*/

void __fastcall DObjLock(const DObj *obj)
{
  ?DObjLock@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjClearCustomDataChannelRecord
==============
*/

void __fastcall DObjClearCustomDataChannelRecord(const DObj *obj)
{
  ?DObjClearCustomDataChannelRecord@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjNumBones
==============
*/

int __fastcall DObjNumBones(const DObj *obj)
{
  return ?DObjNumBones@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetAllocSkelSize
==============
*/

int __fastcall DObjGetAllocSkelSize(const DObj *obj)
{
  return ?DObjGetAllocSkelSize@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetModel
==============
*/

const XModel *__fastcall DObjGetModel(const DObj *obj, int modelIndex)
{
  return ?DObjGetModel@@YAPEBUXModel@@PEBUDObj@@H@Z(obj, modelIndex);
}

/*
==============
DObjGetPrevSkinningSkel
==============
*/

DObjAnimMat *__fastcall DObjGetPrevSkinningSkel(const DObj *obj, int curTimeStamp, int maxTimeStampDiff, float *outObjRadius)
{
  return ?DObjGetPrevSkinningSkel@@YAPEAUDObjAnimMat@@PEBUDObj@@HHAEAM@Z(obj, curTimeStamp, maxTimeStampDiff, outObjRadius);
}

/*
==============
DObjUnlock
==============
*/

void __fastcall DObjUnlock(const DObj *obj)
{
  ?DObjUnlock@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjSkelIsBoneUpToDate
==============
*/

int __fastcall DObjSkelIsBoneUpToDate(const DObj *obj, int boneIndex)
{
  return ?DObjSkelIsBoneUpToDate@@YAHPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
DObjAddClientBoneParentPartBits
==============
*/

void __fastcall DObjAddClientBoneParentPartBits(const DObj *obj, DObjPartBits *outPartBits)
{
  ?DObjAddClientBoneParentPartBits@@YAXPEBUDObj@@PEAUDObjPartBits@@@Z(obj, outPartBits);
}

/*
==============
DObjGetNumBlendShapeTargetWeights
==============
*/

unsigned __int16 __fastcall DObjGetNumBlendShapeTargetWeights(const DObj *obj)
{
  return ?DObjGetNumBlendShapeTargetWeights@@YAGPEBUDObj@@@Z(obj);
}

/*
==============
DObjTransferAndMergeSkinningSkelRecords
==============
*/

void __fastcall DObjTransferAndMergeSkinningSkelRecords(const DObj *obj, const bool matchModels, const scr_string_t *dstPartNames, const XModel **dstModels, const XModel **srcModels0, const XModel **srcModels1, const scr_string_t *srcPartNames0, const scr_string_t *srcPartNames1, const DObjPartBits *srcParts0, const DObjPartBits *srcParts1, void *skelRecord0, void *skelRecord1)
{
  ?DObjTransferAndMergeSkinningSkelRecords@@YAXPEBUDObj@@_NPEBW4scr_string_t@@PEAPEBUXModel@@3322PEBUDObjPartBits@@4PEAX5@Z(obj, matchModels, dstPartNames, dstModels, srcModels0, srcModels1, srcPartNames0, srcPartNames1, srcParts0, srcParts1, skelRecord0, skelRecord1);
}

/*
==============
DObjSetAngles
==============
*/

void __fastcall DObjSetAngles(DObjAnimMat *rotTrans, const vec3_t *angles)
{
  ?DObjSetAngles@@YAXPEAUDObjAnimMat@@AEBTvec3_t@@@Z(rotTrans, angles);
}

/*
==============
XModelHasParentBone
==============
*/

int __fastcall XModelHasParentBone(const XModel *model, unsigned __int8 goalParentIndex, unsigned int childIndex)
{
  return ?XModelHasParentBone@@YAHPEBUXModel@@EI@Z(model, goalParentIndex, childIndex);
}

/*
==============
DObjNumBlendShapeTargets
==============
*/

int __fastcall DObjNumBlendShapeTargets(const DObj *obj)
{
  return ?DObjNumBlendShapeTargets@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjSetLocalTag
==============
*/

void __fastcall DObjSetLocalTag(const DObj *obj, DObjPartBits *partBits, unsigned int boneIndex, const vec3_t *trans, const vec3_t *angles)
{
  ?DObjSetLocalTag@@YAXPEBUDObj@@PEAUDObjPartBits@@IAEBTvec3_t@@2@Z(obj, partBits, boneIndex, trans, angles);
}

/*
==============
DObjGetModelIndex
==============
*/

int __fastcall DObjGetModelIndex(const DObj *obj, const XModel *xmodel)
{
  return ?DObjGetModelIndex@@YAHPEBUDObj@@PEBUXModel@@@Z(obj, xmodel);
}

/*
==============
DObjClearAngles
==============
*/

void __fastcall DObjClearAngles(DObjAnimMat *rotTrans)
{
  ?DObjClearAngles@@YAXPEAUDObjAnimMat@@@Z(rotTrans);
}

/*
==============
DObjClearSkel
==============
*/

void __fastcall DObjClearSkel(const DObj *obj)
{
  ?DObjClearSkel@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetNumModels
==============
*/

int __fastcall DObjGetNumModels(const DObj *obj)
{
  return ?DObjGetNumModels@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
DObjGetBlendShapeTargetWeights
==============
*/

float *__fastcall DObjGetBlendShapeTargetWeights(const DObj *const obj)
{
  return ?DObjGetBlendShapeTargetWeights@@YAPEAMQEBUDObj@@@Z(obj);
}

/*
==============
DObjVerifyNumBones
==============
*/

bool __fastcall DObjVerifyNumBones(const DObj *obj)
{
  return ?DObjVerifyNumBones@@YA_NPEBUDObj@@@Z(obj);
}

/*
==============
DObjRecordSkelOnSkinning
==============
*/

void __fastcall DObjRecordSkelOnSkinning(const DObj *obj, float radius)
{
  ?DObjRecordSkelOnSkinning@@YAXPEBUDObj@@M@Z(obj, radius);
}

/*
==============
DObjModelsHasBone
==============
*/

int __fastcall DObjModelsHasBone(DObjModel *dobjModels, int numModels, scr_string_t name)
{
  return ?DObjModelsHasBone@@YAHPEAUDObjModel@@HW4scr_string_t@@@Z(dobjModels, numModels, name);
}

/*
==============
DObjSetWorldControlTag
==============
*/

void __fastcall DObjSetWorldControlTag(const DObj *obj, DObjPartBits *partBits, unsigned int boneIndex, const vec3_t *trans, const vec4_t *quat)
{
  ?DObjSetWorldControlTag@@YAXPEBUDObj@@PEAUDObjPartBits@@IAEBTvec3_t@@AEBTvec4_t@@@Z(obj, partBits, boneIndex, trans, quat);
}

/*
==============
DObjAddClientBoneParentPartBits
==============
*/
void DObjAddClientBoneParentPartBits(const DObj *obj, DObjPartBits *outPartBits)
{
  const DObj *v3; 
  int v4; 
  int v5; 
  const XModel *Model; 
  int v7; 
  int numBones; 
  unsigned __int8 *parentList; 
  __int64 numClientBones; 
  int v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  int v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  int NumModels; 
  int v21; 
  int v22; 

  v3 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 2022, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !outPartBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 2023, ASSERT_TYPE_ASSERT, "(outPartBits)", (const char *)&queryFormat, "outPartBits") )
    __debugbreak();
  if ( !DObjHasClientFlag(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 2024, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  if ( DObjHasClientFlag(v3) )
  {
    if ( v3->numClientBones )
    {
      v4 = 0;
      NumModels = DObjGetNumModels(v3);
      v5 = 0;
      v21 = 0;
      if ( NumModels > 0 )
      {
        do
        {
          Model = DObjGetModel(v3, v4);
          v7 = v5;
          numBones = Model->numBones;
          parentList = Model->parentList;
          v5 += numBones;
          v22 = v5;
          if ( parentList )
          {
            numClientBones = Model->numClientBones;
            v11 = 0;
            if ( Model->numClientBones )
            {
              v12 = 0i64;
              v13 = &parentList[Model->numBones - (unsigned __int64)Model->numRootBones];
              do
              {
                v14 = v13[v12];
                if ( v14 > v11 )
                {
                  v15 = v7 + numBones + v11 - v14;
                  if ( v15 >= 0x100 )
                  {
                    LODWORD(v17) = 256;
                    LODWORD(v16) = v7 + numBones + v11 - v14;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v16, v17) )
                      __debugbreak();
                  }
                  outPartBits->array[(unsigned __int64)v15 >> 5] |= 0x80000000 >> (v15 & 0x1F);
                }
                ++v11;
                ++v12;
              }
              while ( v12 < numClientBones );
              v4 = v21;
              v3 = obj;
              v5 = v22;
            }
          }
          v21 = ++v4;
        }
        while ( v4 < NumModels );
      }
    }
  }
}

/*
==============
DObjApplyCustomChannelRecord
==============
*/
void DObjApplyCustomChannelRecord(int objBufIndex, ComputeCmdBufState *state)
{
  _DWORD *CustomDataChannelRecordFromIndex; 
  int v5; 
  int v6; 

  CustomDataChannelRecordFromIndex = Com_GetCustomDataChannelRecordFromIndex(objBufIndex);
  if ( CustomDataChannelRecordFromIndex )
  {
    v5 = CustomDataChannelRecordFromIndex[2];
    if ( v5 )
    {
      v6 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1860, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown custom Dobj channel type %d", v6) )
        __debugbreak();
    }
    else
    {
      R_Mayhem_SetCustomDataChannels(objBufIndex, state, 0);
    }
  }
}

/*
==============
DObjApplyPreviousSkelPose
==============
*/
char DObjApplyPreviousSkelPose(const DObj *obj)
{
  int timeStamp; 
  const DSkel *SkelRecord; 
  const DSkel *v4; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1596, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr", -2i64) )
    __debugbreak();
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1602, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  if ( !obj->skel.mat )
    return 0;
  timeStamp = obj->skel.timeStamp;
  if ( timeStamp != CL_Pose_GetSkelTimeStamp() )
    return 0;
  SkelRecord = (const DSkel *)Com_GetSkelRecord(obj);
  v4 = SkelRecord;
  if ( !SkelRecord || !SkelRecord->timeStamp || SkelRecord->timeStamp != CL_Pose_GetPrevSkelTimeStamp() || v4[1].partBits.anim.array[0] != obj->numBones || v4[1].partBits.anim.array[1] != DObjNumClientOnlyBones(obj) || (v4->partBits.skel.array[0] & 0x80000000) == 0 || (obj->skel.partBits.anim.array[0] & 0x80000000) == 0 )
    return 0;
  Sys_ProfBeginNamedEvent(0xFFF5F5DC, "DObjApplyPreviousSkelPose");
  DObjApplySkelPoseInternal(v4, obj);
  Sys_ProfEndNamedEvent();
  return 1;
}

/*
==============
DObjApplySkelPoseInternal
==============
*/
void DObjApplySkelPoseInternal(const DSkel *srcSkel, const DObj *dstObj)
{
  const DObj *v13; 
  DSkel *p_skel; 
  const XModel *Model; 
  unsigned __int8 numRootBones; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned __int16 numClientBones; 
  int v21; 
  unsigned int v22; 
  vector3 *v24; 
  const float4 *v25; 
  unsigned int v33; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *p_anim; 
  DObjAnimMat *v98; 
  DObjAnimMat *v99; 
  unsigned __int64 v104; 
  unsigned int v106; 
  int v115; 
  unsigned int v159; 
  __int64 v161; 
  __int64 v207; 
  unsigned __int16 v217; 
  __int64 v218; 
  __int64 v230; 
  __int64 v231; 
  DObjAnimMat *v232; 
  int v233; 
  int v234; 
  int v235; 
  int v236; 
  int v237; 
  int v238; 
  int v239; 
  int v240; 
  int v241; 
  int v242; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  int v247; 
  int v248; 
  int v249; 
  int v250; 
  int v251; 
  int v252; 
  int v253; 
  int v254; 
  int v255; 
  int v256; 
  int v257; 
  int v258; 
  int v259; 
  int v260; 
  unsigned int v261; 
  unsigned int numBones; 
  DObjAnimMat *mat; 
  DObjAnimMat *v264; 
  DSkel *v267; 
  __int128 v269; 
  __int128 v270; 
  __int128 v272; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v273; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v274; 
  char v275; 
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
  v13 = dstObj;
  p_skel = &dstObj->skel;
  v267 = &dstObj->skel;
  Model = DObjGetModel(dstObj, 0);
  numRootBones = Model->numRootBones;
  if ( numRootBones )
  {
    v18 = numRootBones;
  }
  else
  {
    if ( !Model->numClientBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 364, ASSERT_TYPE_ASSERT, "(model->numClientBones)", (const char *)&queryFormat, "model->numClientBones") )
      __debugbreak();
    v18 = 1;
  }
  numBones = v13->numBones;
  v19 = 0i64;
  if ( !DObjHasClientFlag(v13) || (numClientBones = v13->numClientBones, (v21 = numClientBones) == 0) )
    v21 = 0;
  v261 = v21 + v13->numBones;
  if ( (srcSkel->partBits.skel.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1426, ASSERT_TYPE_ASSERT, "(srcSkel->partBits.skel.testBit( ROOT_BONE_INDEX ))", (const char *)&queryFormat, "srcSkel->partBits.skel.testBit( ROOT_BONE_INDEX )") )
    __debugbreak();
  if ( (p_skel->partBits.anim.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1427, ASSERT_TYPE_ASSERT, "(dstSkel->partBits.anim.testBit( ROOT_BONE_INDEX ))", (const char *)&queryFormat, "dstSkel->partBits.anim.testBit( ROOT_BONE_INDEX )") )
    __debugbreak();
  v22 = 0;
  mat = srcSkel->mat;
  v232 = v13->skel.mat;
  _RSI = 0i64;
  do
  {
    if ( v22 >= 0x100 )
    {
      LODWORD(v231) = 256;
      LODWORD(v230) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v230, v231) )
        __debugbreak();
    }
    v24 = (vector3 *)(v22 & 0x1F);
    v25 = (const float4 *)(0x80000000 >> (char)v24);
    if ( ((unsigned int)v25 & v13->skel.partBits.anim.array[v19 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1435, ASSERT_TYPE_ASSERT, "(dstSkel->partBits.anim.testBit( boneIndex ))", (const char *)&queryFormat, "dstSkel->partBits.anim.testBit( boneIndex )") )
      __debugbreak();
    _RAX = v13->skel.mat;
    ++v22;
    ++v19;
    __asm
    {
      vmovups xmm2, xmmword ptr [rsi+rax]
      vmulps  xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vsqrtps xmm1, xmm0
      vdivps  xmm2, xmm2, xmm1
      vmovups xmmword ptr [rsi+rax], xmm2
    }
    _RAX[_RSI++].transWeight = 2.0;
  }
  while ( v22 < v18 );
  v33 = numBones;
  _R12 = mat;
  _RAX = v232;
  __asm
  {
    vmovups xmm4, xmmword ptr [rax]
    vmovss  xmm0, dword ptr [rax+10h]
    vmovss  xmm1, dword ptr [rax+14h]
    vmovss  xmm2, dword ptr [rax+18h]
    vmovups xmm3, xmmword ptr [r12]
    vmulps  xmm7, xmm3, cs:__xmm@3f800000bf800000bf800000bf800000
    vshufps xmm6, xmm4, xmm4, 0FFh
  }
  HIDWORD(v269) = 0;
  __asm
  {
    vmovups xmm10, [rsp+1F8h+var_148]
    vmovss  xmm10, xmm10, xmm0
    vmovss  xmm0, dword ptr [r12+10h]
    vinsertps xmm10, xmm10, xmm1, 10h
    vinsertps xmm10, xmm10, xmm2, 20h ; ' '
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
    vmovups [rsp+1F8h+var_148], xmm10
  }
  HIDWORD(v270) = 0;
  __asm
  {
    vmovups xmm9, [rsp+1F8h+var_148]
    vmovss  xmm9, xmm9, xmm0
    vinsertps xmm9, xmm9, dword ptr [r12+14h], 10h
    vinsertps xmm9, xmm9, dword ptr [r12+18h], 20h ; ' '
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm3, xmm0
    vmulps  xmm1, xmm4, xmm7
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
    vshufps xmm8, xmm7, xmm7, 0FFh
    vmulps  xmm4, xmm4, xmm8
    vmulps  xmm1, xmm7, xmm6
    vaddps  xmm1, xmm4, xmm1
    vmulps  xmm0, xmm8, xmm6
    vsubps  xmm2, xmm0, xmm3
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm3, xmm2, xmm0, 7
    vmulps  xmm1, xmm3, xmm3
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm11, xmm3, xmm1
    vshufps xmm5, xmm11, xmm11, 0FFh
    vshufps xmm7, xmm11, xmm11, 0D2h ; 'Ò'
    vshufps xmm6, xmm11, xmm11, 0C9h ; 'É'
    vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm9
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm2, xmm0, xmm7
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm5
    vmovups xmm0, xmm11
    vsubps  xmm12, xmm10, xmm3
    vmovups [rsp+1F8h+var_148], xmm9
  }
  Float4UnitQuatToAxis(v24, v25);
  __asm
  {
    vmovups xmmword ptr [rsp+1F8h+var_108.baseclass_0.array+10h], xmm1
    vmovups xmmword ptr [rsp+1F8h+var_108.baseclass_0.array], xmm0
    vmovups ymm3, ymmword ptr [rsp+1F8h+var_108.baseclass_0.array]
    vmovups [rsp+1F8h+var_188], ymm3
    vmovups xmm10, xmm2
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v274, &srcSkel->partBits.skel);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::nandAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v274, &v13->skel.partBits.skel);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v273, &srcSkel->partBits.anim);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::nandAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v273, &srcSkel->partBits.skel);
  p_anim = &v13->skel.partBits.anim;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::nandAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v273, &v13->skel.partBits.anim);
  v98 = srcSkel->mat;
  v99 = v13->skel.mat;
  v264 = v98;
  __asm
  {
    vmovups xmm13, cs:__xmm@40000000400000004000000040000000
    vmovups xmm14, xmmword ptr [rsp+1F8h+var_188+10h]
    vmovups xmm15, xmmword ptr [rsp+1F8h+var_188]
  }
  if ( v18 < numBones )
  {
    _R13 = (char *)((char *)v98 - (char *)v99);
    v104 = v18;
    _RBX = (__int64)&v99[v18].trans;
    while ( 1 )
    {
      if ( v18 >= 0x100 )
      {
        LODWORD(v231) = 256;
        LODWORD(v230) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v230, v231) )
          __debugbreak();
      }
      v106 = 0x80000000 >> (v18 & 0x1F);
      if ( (v106 & v274.array[v104 >> 5]) != 0 )
      {
        __asm
        {
          vmovups xmm8, xmmword ptr [rbx+r13-10h]
          vmovss  xmm0, dword ptr [rbx+r13]
        }
        HIDWORD(v272) = 0;
        __asm
        {
          vmovups xmm9, xmmword ptr [rsp+0C0h]
          vmovss  xmm9, xmm9, xmm0
          vinsertps xmm9, xmm9, dword ptr [rbx+r13+4], 10h
          vinsertps xmm9, xmm9, dword ptr [rbx+r13+8], 20h ; ' '
          vshufps xmm6, xmm8, xmm8, 0FFh
          vshufps xmm5, xmm11, xmm11, 0FFh
          vmulps  xmm4, xmm11, xmm6
          vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
          vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
          vmulps  xmm3, xmm1, xmm0
          vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
          vshufps xmm2, xmm11, xmm11, 0D2h ; 'Ò'
          vmulps  xmm0, xmm2, xmm1
          vsubps  xmm7, xmm3, xmm0
          vmulps  xmm1, xmm11, xmm8
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm3, xmm2, xmm2
          vmulps  xmm0, xmm6, xmm5
          vsubps  xmm6, xmm0, xmm3
          vmulps  xmm1, xmm8, xmm5
          vaddps  xmm5, xmm4, xmm1
          vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
          vmulps  xmm0, xmm10, xmm0
          vaddps  xmm2, xmm0, xmm12
          vshufps xmm1, xmm9, xmm9, 55h ; 'U'
          vmulps  xmm1, xmm14, xmm1
          vaddps  xmm3, xmm1, xmm2
          vshufps xmm4, xmm9, xmm9, 0
          vmulps  xmm0, xmm15, xmm4
          vaddps  xmm2, xmm0, xmm3
          vaddps  xmm0, xmm7, xmm5
          vblendps xmm1, xmm6, xmm0, 7
          vshufps xmm0, xmm2, xmm13, 0FAh ; 'ú'
          vshufps xmm2, xmm2, xmm0, 84h ; '„'
          vmovss  dword ptr [rsp+1F8h+var_1B8], xmm2
          vmovups xmmword ptr [rbx-10h], xmm1
          vmovups xmmword ptr [rsp+0C0h], xmm9
          vmovups xmmword ptr [rbx], xmm2
        }
        if ( (v240 & 0x7F800000) == 2139095040 )
          goto LABEL_100;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
        }
        if ( (v241 & 0x7F800000) == 2139095040 )
          goto LABEL_100;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
        }
        if ( (v242 & 0x7F800000) == 2139095040 )
        {
LABEL_100:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1510, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-10h]
          vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
        }
        if ( (v243 & 0x7F800000) != 2139095040 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-0Ch]
            vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
          }
          if ( (v244 & 0x7F800000) != 2139095040 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-8]
              vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
            }
            if ( (v245 & 0x7F800000) != 2139095040 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-4]
                vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
              }
              if ( (v246 & 0x7F800000) != 2139095040 )
                goto LABEL_56;
            }
          }
        }
        v115 = 1511;
      }
      else
      {
        if ( v18 >= 0x100 )
        {
          LODWORD(v231) = 256;
          LODWORD(v230) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v230, v231) )
            __debugbreak();
        }
        if ( (v106 & v273.array[v104 >> 5]) == 0 )
          goto LABEL_56;
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx+r13-10h]
          vmovups ymmword ptr [rbx-10h], ymm0
          vmovss  xmm1, dword ptr [rbx]
          vmovss  dword ptr [rsp+1F8h+var_1B8], xmm1
        }
        if ( (v233 & 0x7F800000) == 2139095040 )
          goto LABEL_101;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
        }
        if ( (v234 & 0x7F800000) == 2139095040 )
          goto LABEL_101;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
        }
        if ( (v235 & 0x7F800000) == 2139095040 )
        {
LABEL_101:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1494, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-10h]
          vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
        }
        if ( (v236 & 0x7F800000) != 2139095040 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-0Ch]
            vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
          }
          if ( (v237 & 0x7F800000) != 2139095040 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-8]
              vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
            }
            if ( (v238 & 0x7F800000) != 2139095040 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-4]
                vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
              }
              if ( (v239 & 0x7F800000) != 2139095040 )
                goto LABEL_56;
            }
          }
        }
        v115 = 1495;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", v115, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] )") )
        __debugbreak();
LABEL_56:
      v33 = numBones;
      ++v18;
      ++v104;
      _RBX += 32i64;
      if ( v18 >= numBones )
      {
        v13 = dstObj;
        v98 = v264;
        p_anim = &v267->partBits.anim;
        break;
      }
    }
  }
  if ( (v274.array[7] & 2) != 0 )
  {
    v159 = v261;
    if ( v33 >= v261 )
      goto LABEL_91;
    _RSI = (char *)v99 - (char *)v98;
    v161 = v261 - v33;
    _RBX = (__int64)&v98[v33].trans.z;
    do
    {
      __asm
      {
        vmovups xmm8, xmmword ptr [rbx-18h]
        vmovss  xmm0, dword ptr [rbx-8]
      }
      HIDWORD(v272) = 0;
      __asm
      {
        vmovups xmm9, xmmword ptr [rsp+0C0h]
        vmovss  xmm9, xmm9, xmm0
        vinsertps xmm9, xmm9, dword ptr [rbx-4], 10h
        vinsertps xmm9, xmm9, dword ptr [rbx], 20h ; ' '
        vshufps xmm6, xmm8, xmm8, 0FFh
        vshufps xmm5, xmm11, xmm11, 0FFh
        vmulps  xmm4, xmm11, xmm6
        vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
        vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
        vshufps xmm2, xmm11, xmm11, 0D2h ; 'Ò'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm7, xmm3, xmm0
        vmulps  xmm1, xmm11, xmm8
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm3, xmm2, xmm2
        vmulps  xmm0, xmm6, xmm5
        vsubps  xmm6, xmm0, xmm3
        vmulps  xmm1, xmm8, xmm5
        vaddps  xmm5, xmm4, xmm1
        vshufps xmm0, xmm9, xmm9, 0AAh ; 'ª'
        vmulps  xmm0, xmm10, xmm0
        vaddps  xmm2, xmm0, xmm12
        vshufps xmm1, xmm9, xmm9, 55h ; 'U'
        vmulps  xmm1, xmm14, xmm1
        vaddps  xmm3, xmm1, xmm2
        vshufps xmm4, xmm9, xmm9, 0
        vmulps  xmm0, xmm15, xmm4
        vaddps  xmm2, xmm0, xmm3
        vaddps  xmm0, xmm7, xmm5
        vblendps xmm1, xmm6, xmm0, 7
        vmovups xmmword ptr [rbx+rsi-18h], xmm1
        vshufps xmm0, xmm2, xmm13, 0FAh ; 'ú'
        vshufps xmm1, xmm2, xmm0, 84h ; '„'
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm1
        vmovups xmmword ptr [rsp+0C0h], xmm9
        vmovups xmmword ptr [rbx+rsi-8], xmm1
      }
      if ( (v247 & 0x7F800000) == 2139095040 )
        goto LABEL_102;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rbx-4]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v248 & 0x7F800000) == 2139095040 )
        goto LABEL_102;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rbx]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v249 & 0x7F800000) == 2139095040 )
      {
LABEL_102:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1537, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rsi-18h]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v250 & 0x7F800000) == 2139095040 )
        goto LABEL_103;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rbx-14h]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v251 & 0x7F800000) == 2139095040 )
        goto LABEL_103;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rbx-10h]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v252 & 0x7F800000) == 2139095040 )
        goto LABEL_103;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+rbx-0Ch]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v253 & 0x7F800000) == 2139095040 )
      {
LABEL_103:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1538, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] )") )
          __debugbreak();
      }
      _RBX += 32i64;
      --v161;
    }
    while ( v161 );
LABEL_89:
    v13 = dstObj;
    goto LABEL_90;
  }
  if ( (v273.array[7] & 2) != 0 )
  {
    v159 = v261;
    if ( v33 >= v261 )
      goto LABEL_91;
    _R13 = (char *)v264 - (char *)v99;
    v207 = v261 - v33;
    _RBX = (__int64)&v99[v33].trans.y;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+r13-14h]
        vmovups ymmword ptr [rbx-14h], ymm0
        vmovss  xmm1, dword ptr [rbx-4]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm1
      }
      if ( (v254 & 0x7F800000) == 2139095040 )
        goto LABEL_104;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v255 & 0x7F800000) == 2139095040 )
        goto LABEL_104;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v256 & 0x7F800000) == 2139095040 )
      {
LABEL_104:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1551, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-14h]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v257 & 0x7F800000) == 2139095040 )
        goto LABEL_105;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-10h]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v258 & 0x7F800000) == 2139095040 )
        goto LABEL_105;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-0Ch]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v259 & 0x7F800000) == 2139095040 )
        goto LABEL_105;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-8]
        vmovss  dword ptr [rsp+1F8h+var_1B8], xmm0
      }
      if ( (v260 & 0x7F800000) == 2139095040 )
      {
LABEL_105:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1552, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] )") )
          __debugbreak();
      }
      _RBX += 32i64;
      --v207;
    }
    while ( v207 );
    goto LABEL_89;
  }
LABEL_90:
  v159 = v261;
LABEL_91:
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(p_anim, &srcSkel->partBits.anim);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v13->skel.partBits.skel, &srcSkel->partBits.skel);
  if ( srcSkel->partBits.blendShapesCalculated )
  {
    v13->skel.partBits.blendShapesCalculated = 1;
    if ( DObjHasClientFlag(v13) && (v217 = v13->numClientBones) != 0 )
      v218 = v217;
    else
      v218 = 0i64;
    memcpy_0(&v13->skel.mat[v218 + v13->numBones], &srcSkel->mat[v159], 4i64 * v13->blendShapeTargetCount);
  }
  _R11 = &v275;
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
DObjBuildBoneParentMap
==============
*/
void DObjBuildBoneParentMap(const DObj *obj, DObjBoneParentMap *outParentMap)
{
  DObjBuildBoneParentMapInternal(obj, 1, outParentMap);
}

/*
==============
DObjBuildBoneParentMapInternal
==============
*/
void DObjBuildBoneParentMapInternal(const DObj *obj, bool includeDuplicatesAsParents, DObjBoneParentMap *outParentMap)
{
  DObjBoneParentMap *v3; 
  const DObj *v4; 
  unsigned __int8 numModels; 
  const DObjDuplicateParts *DuplicateParts; 
  __int64 numBones; 
  unsigned __int16 numClientBones; 
  int v9; 
  __int64 v10; 
  __int16 *v11; 
  int v12; 
  __int16 *v13; 
  unsigned int v14; 
  bitarray<4096> *p_duplicateBits; 
  DObjDuplicatePair *pairs; 
  unsigned __int16 child; 
  unsigned int v18; 
  int v19; 
  signed int v20; 
  int v21; 
  _BYTE *v22; 
  int v23; 
  unsigned __int16 *v24; 
  const XModel *Model; 
  unsigned __int8 *parentList; 
  int numRootBones; 
  unsigned __int16 *v28; 
  __int64 v29; 
  bool v30; 
  unsigned int v31; 
  __int16 *v32; 
  __int64 v33; 
  unsigned __int16 v34; 
  unsigned __int8 v35; 
  __int64 v36; 
  __int64 v37; 
  __int16 *v38; 
  __int16 v39; 
  int v40; 
  int v41; 
  __int64 v42; 
  __int16 *v43; 
  __int16 v44; 
  int v45; 
  int v46; 
  bool v47; 
  int v48; 
  unsigned __int16 *v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  int v54; 
  unsigned int ClientBoneOffset; 
  unsigned __int16 *parents; 
  int v57; 
  __int64 v58; 
  int v60; 
  __int64 v62; 
  const XModel *v63; 
  __int16 v64[4096]; 

  v3 = outParentMap;
  v4 = obj;
  if ( !outParentMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1872, ASSERT_TYPE_ASSERT, "(outParentMap != 0)", (const char *)&queryFormat, "outParentMap != NULL") )
    __debugbreak();
  if ( !v4 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1873, ASSERT_TYPE_ASSERT, "(obj != 0)", (const char *)&queryFormat, "obj != NULL") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 47, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
  }
  numModels = v4->numModels;
  parents = v3->parents;
  v3->obj = v4;
  DuplicateParts = DObjGetDuplicateParts(v4);
  numBones = v4->numBones;
  v58 = (__int64)&v4->models[v4->numModels];
  if ( DObjHasClientFlag(v4) && (numClientBones = v4->numClientBones) != 0 )
    v54 = numClientBones;
  else
    v54 = 0;
  v9 = 0;
  if ( (_DWORD)numBones )
  {
    v10 = 0i64;
    v11 = v64;
    do
    {
      if ( (v9 < 0 || (unsigned int)v9 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v9, "signed", v10) )
        __debugbreak();
      *v11 = v9;
      ++v10;
      ++v9;
      ++v11;
    }
    while ( v9 < (int)numBones );
    v3 = outParentMap;
    v4 = obj;
  }
  v12 = numBones + v54;
  if ( (unsigned int)numBones < (int)numBones + v54 )
  {
    v13 = &v64[numBones];
    do
    {
      v14 = numBones | 0x8000;
      if ( ((int)numBones < 0 || v14 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)numBones | 0x8000u, "signed", (int)v14) )
        __debugbreak();
      *v13 = v14;
      LODWORD(numBones) = numBones + 1;
      ++v13;
    }
    while ( (int)numBones < v12 );
    v3 = outParentMap;
    v4 = obj;
  }
  p_duplicateBits = &v3->duplicateBits;
  v3->duplicateBits.array[0] = 0;
  pairs = DuplicateParts->pairs;
  *(_QWORD *)&v3->duplicateBits.array[1] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[3] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[5] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[7] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[9] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[11] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[13] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[15] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[17] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[19] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[21] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[23] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[25] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[27] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[29] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[31] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[33] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[35] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[37] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[39] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[41] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[43] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[45] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[47] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[49] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[51] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[53] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[55] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[57] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[59] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[61] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[63] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[65] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[67] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[69] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[71] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[73] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[75] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[77] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[79] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[81] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[83] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[85] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[87] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[89] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[91] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[93] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[95] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[97] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[99] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[101] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[103] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[105] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[107] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[109] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[111] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[113] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[115] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[117] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[119] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[121] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[123] = 0i64;
  *(_QWORD *)&v3->duplicateBits.array[125] = 0i64;
  v3->duplicateBits.array[127] = 0;
  child = DuplicateParts->pairs[0].child;
  if ( child )
  {
    do
    {
      v18 = (child - 1) & 0x7FFF;
      v64[(child - 1) & 0x7FFF] = v64[(pairs->parent - 1) & 0x7FFF];
      if ( v18 >= 0x1000 )
      {
        LODWORD(v52) = 4096;
        LODWORD(v51) = (child - 1) & 0x7FFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v51, v52) )
          __debugbreak();
      }
      ++pairs;
      p_duplicateBits->array[(unsigned __int64)v18 >> 5] |= 0x80000000 >> (v18 & 0x1F);
      child = pairs->child;
    }
    while ( pairs->child );
    v4 = obj;
  }
  v19 = 0;
  ClientBoneOffset = DObjGetClientBoneOffset(v4);
  v20 = ClientBoneOffset;
  v21 = 0;
  v57 = 0;
  v62 = numModels;
  if ( numModels )
  {
    v22 = (_BYTE *)v58;
    do
    {
      v23 = v19;
      v24 = parents;
      Model = DObjGetModel(obj, v21);
      v63 = Model;
      parentList = Model->parentList;
      numRootBones = Model->numRootBones;
      v60 = v19;
      if ( *v22 == 0xFF )
      {
        if ( Model->numRootBones )
        {
          v32 = &v64[v19];
          v33 = Model->numRootBones;
          do
          {
            v34 = *v32;
            *(__int16 *)((char *)v32 + (char *)parents - (char *)v64) = 255;
            if ( (v34 & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1939, ASSERT_TYPE_ASSERT, "(!(remappedDobjBoneIndex & (1 << 15)))", "%s\n\troot bones cannot be parented to client-only bones", "!(remappedDobjBoneIndex & CLIENT_BONEINDEX_FLAG)") )
              __debugbreak();
            if ( v34 == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1940, ASSERT_TYPE_ASSERT, "(remappedDobjBoneIndex != 255)", (const char *)&queryFormat, "remappedDobjBoneIndex != NO_BONEINDEX") )
              __debugbreak();
            v30 = includeDuplicatesAsParents;
            if ( !includeDuplicatesAsParents || v34 == v19 )
              v34 = parents[v34];
            *(__int16 *)((char *)v32 + (char *)parents - (char *)v64) = v34;
            ++v19;
            ++v32;
            --v33;
          }
          while ( v33 );
          v20 = ClientBoneOffset;
          Model = v63;
          v23 = v60;
          v24 = parents;
          v22 = (_BYTE *)v58;
          goto LABEL_42;
        }
      }
      else if ( Model->numRootBones )
      {
        v28 = &parents[v19];
        v29 = Model->numRootBones;
        v19 += numRootBones;
        do
        {
          *v28++ = v64[(unsigned __int8)*v22];
          --v29;
        }
        while ( v29 );
      }
      v30 = includeDuplicatesAsParents;
LABEL_42:
      if ( v54 )
        v31 = Model->numClientBones;
      else
        v31 = 0;
      v35 = Model->numBones;
      if ( parentList )
      {
        v36 = Model->numBones - (__int64)numRootBones;
        v37 = 0i64;
        if ( v36 > 0 )
        {
          v38 = (__int16 *)&v24[v19];
          do
          {
            if ( !v30 || (v39 = *(__int16 *)((char *)v38 + (char *)v64 - (char *)v24), (v39 & 0x7FFF) == v19) )
              v39 = v64[v19 - parentList[v37]];
            *v38 = v39;
            ++v19;
            ++v38;
            ++v37;
          }
          while ( v37 < v36 );
          v35 = Model->numBones;
        }
        v40 = 0;
        v41 = v20 - v35 - v23;
        if ( v31 )
        {
          v42 = 0i64;
          v43 = (__int16 *)&v24[v20];
          do
          {
            if ( !includeDuplicatesAsParents || (v44 = *(__int16 *)((char *)v43 + (char *)v64 - (char *)v24), (v44 & 0x7FFF) == v20) )
            {
              v45 = parentList[v42 + v36];
              v46 = v45 + v41;
              if ( v45 <= v40 )
                v46 = parentList[v42 + v36];
              v44 = v64[v20 - v46];
            }
            *v43 = v44;
            ++v20;
            ++v43;
            ++v40;
            ++v42;
          }
          while ( v42 < v31 );
          ClientBoneOffset = v20;
        }
        v22 = (_BYTE *)v58;
      }
      else
      {
        v48 = v31 + Model->numBones - numRootBones;
        if ( v48 > 0 )
        {
          v49 = &v24[v19];
          v50 = (unsigned int)v48;
          v19 += v48;
          while ( v50 )
          {
            *v49++ = 255;
            --v50;
          }
        }
        v20 += v31;
        ClientBoneOffset = v20;
      }
      ++v22;
      v21 = v57 + 1;
      v58 = (__int64)v22;
      v47 = v62-- == 1;
      ++v57;
    }
    while ( !v47 );
  }
}

/*
==============
DObjClearAngles
==============
*/
void DObjClearAngles(DObjAnimMat *rotTrans)
{
  rotTrans->quat.v[3] = 1.0;
  *(_QWORD *)rotTrans->quat.v = 0i64;
  rotTrans->quat.v[2] = 0.0;
}

/*
==============
DObjClearBoneSetBit
==============
*/
void DObjClearBoneSetBit(const DObj *obj, int boneIndex)
{
  int v5; 

  if ( (unsigned int)boneIndex >= 0xFE )
  {
    v5 = 254;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 344, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DOBJ_MAX_PARTS )", "boneIndex doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", boneIndex, v5) )
      __debugbreak();
  }
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 347, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  bitarray_base<bitarray<256>>::resetBit((bitarray_base<bitarray<256> > *)&obj->skel, boneIndex);
  bitarray_base<bitarray<256>>::resetBit(&obj->skel.partBits.skel, boneIndex);
}

/*
==============
DObjClearCustomDataChannelRecord
==============
*/
void DObjClearCustomDataChannelRecord(const DObj *obj)
{
  _QWORD *CustomDataChannelRecord; 

  CustomDataChannelRecord = Com_GetCustomDataChannelRecord(obj);
  if ( CustomDataChannelRecord )
  {
    *CustomDataChannelRecord = 0i64;
    CustomDataChannelRecord[1] = 0i64;
    CustomDataChannelRecord[2] = 0i64;
  }
}

/*
==============
DObjClearSkel
==============
*/
void DObjClearSkel(const DObj *obj)
{
  memset_0(&obj->skel, 0, 0x84ui64);
}

/*
==============
DObjClearSkelRecord
==============
*/
void DObjClearSkelRecord(const DObj *obj)
{
  void *SkelRecord; 

  SkelRecord = Com_GetSkelRecord(obj);
  if ( SkelRecord )
    memset_0(SkelRecord, 0, 0xA0ui64);
}

/*
==============
DObjCompleteHierarchyBits
==============
*/
char DObjCompleteHierarchyBits(const DObj *obj, DObjPartBits *partBits)
{
  const DObj *v2; 
  DObjPartBits *v3; 
  unsigned __int8 numBones; 
  __int64 numModels; 
  unsigned int v7; 
  const DObjDuplicateParts *DuplicateParts; 
  const XModel **models; 
  int v10; 
  const XModel *v11; 
  int v12; 
  __int64 i; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  unsigned int v17; 
  unsigned __int64 v18; 
  int v19; 
  unsigned int v20; 
  DObjDuplicatePair *j; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  const XModel **v26; 
  unsigned __int8 *parentList; 
  const DObjDuplicateParts *v28; 
  const XModel **v29; 
  int v32[256]; 

  v2 = obj;
  v3 = partBits;
  Profile_Begin(458);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 625, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 626, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  numBones = v2->numBones;
  if ( !numBones )
  {
    Com_PrintError(19, "The DObj has no regular bones. This is probably due to a threading issue with Mayhem and the VFX system\n");
    Profile_EndInternal(NULL);
    return 0;
  }
  if ( (v3->array[7] & 2) != 0 )
  {
    DObjAddClientBoneParentPartBits(v2, v3);
    numBones = v2->numBones;
  }
  numModels = v2->numModels;
  v7 = numBones - 1;
  if ( !v2->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 651, ASSERT_TYPE_ASSERT, "(numModels > 0)", (const char *)&queryFormat, "numModels > 0") )
    __debugbreak();
  DuplicateParts = DObjGetDuplicateParts(v2);
  models = v2->models;
  v10 = 0;
  v28 = DuplicateParts;
  v11 = NULL;
  v26 = models;
  v12 = 0;
  v29 = &models[numModels];
  if ( (_DWORD)numModels )
  {
    for ( i = 0i64; i < numModels; ++i )
    {
      v11 = models[i];
      v32[i] = v10;
      v10 += v11->numBones;
      if ( v10 > (int)v7 )
        break;
      ++v12;
    }
  }
  if ( v12 == (_DWORD)numModels )
  {
    DObjDumpInfo(v2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 679, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Expression: j != numModels. Copy log above.") )
      __debugbreak();
    models = v26;
  }
  v3->array[0] |= 0x80000000;
  parentList = v11->parentList;
  v14 = v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = v14;
      v16 = v7 - v32[v14];
      if ( v16 < 0 )
        break;
      if ( v7 >= 0x100 )
      {
        LODWORD(v23) = 256;
        LODWORD(v22) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
          __debugbreak();
      }
      v17 = 0x80000000 >> (v7 & 0x1F);
      v18 = (unsigned __int64)v7 >> 5;
      if ( (v17 & v3->array[v18]) != 0 )
      {
        if ( v7 >= 0x100 )
        {
          LODWORD(v23) = 256;
          LODWORD(v22) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        if ( (v17 & v28->partBits.array[v18]) != 0 )
        {
          for ( j = v28->pairs; ; ++j )
          {
            if ( !j->child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 750, ASSERT_TYPE_ASSERT, "(pos->child)", (const char *)&queryFormat, "pos->child") )
              __debugbreak();
            if ( v7 == j->child - 1 )
              break;
          }
          v2 = obj;
          v20 = j->parent - 1;
          v3 = partBits;
LABEL_49:
          if ( v20 >= v2->numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 760, ASSERT_TYPE_ASSERT, "((unsigned)newBoneIndex < obj->numBones)", (const char *)&queryFormat, "(unsigned)newBoneIndex < obj->numBones") )
            __debugbreak();
          if ( v20 >= 0x100 )
          {
            LODWORD(v25) = 256;
            LODWORD(v24) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v24, v25) )
              __debugbreak();
          }
          models = v26;
          v3->array[(unsigned __int64)v20 >> 5] |= 0x80000000 >> (v20 & 0x1F);
          --v7;
        }
        else
        {
          v19 = v16 - v11->numRootBones;
          if ( v19 >= 0 )
          {
            if ( !parentList )
            {
              DObjDumpInfo(v2);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 719, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Expression: parentList. Copy log above.") )
                __debugbreak();
            }
            v20 = v7 - parentList[v19];
            goto LABEL_49;
          }
          v20 = *((unsigned __int8 *)v29 + v14);
          if ( v20 != 255 )
            goto LABEL_49;
          models = v26;
          --v7;
        }
      }
      else
      {
        models = v26;
        --v7;
      }
    }
    --v14;
    if ( v15 <= 0 )
      break;
    v11 = models[v14];
    parentList = v11->parentList;
  }
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
DObjCreateSkel
==============
*/
void DObjCreateSkel(const DObj *obj, char *buf, int timeStamp)
{
  int AllocSkelSize; 
  DSkel *p_skel; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  DObjPartBits *p_control; 
  unsigned int v12; 
  DObjPartBits *p_worldCtrl; 
  DObjPartBits *v14; 

  Profile_Begin(415);
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 895, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 899, ASSERT_TYPE_ASSERT, "(buf)", (const char *)&queryFormat, "buf") )
    __debugbreak();
  AllocSkelSize = DObjGetAllocSkelSize(obj);
  memset_0(buf, 255, AllocSkelSize);
  if ( ((unsigned __int8)buf & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 903, ASSERT_TYPE_ASSERT, "(( reinterpret_cast< uintptr_t >( buf ) & (align - 1) ) == 0)", (const char *)&queryFormat, "( reinterpret_cast< uintptr_t >( buf ) & (align - 1) ) == 0") )
    __debugbreak();
  obj->skel.mat = (DObjAnimMat *)buf;
  p_skel = &obj->skel;
  v8 = 0;
  obj->skel.timeStamp = timeStamp;
  v9 = 0;
  while ( !p_skel->partBits.anim.array[0] )
  {
    ++v9;
    p_skel = (DSkel *)((char *)p_skel + 4);
    if ( v9 >= 8 )
      goto LABEL_16;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 910, ASSERT_TYPE_ASSERT, "(!obj->skel.partBits.anim.anyBitsOn())", (const char *)&queryFormat, "!obj->skel.partBits.anim.anyBitsOn()") )
    __debugbreak();
LABEL_16:
  v10 = 0;
  p_control = &obj->skel.partBits.control;
  while ( !p_control->array[0] )
  {
    ++v10;
    p_control = (DObjPartBits *)((char *)p_control + 4);
    if ( v10 >= 8 )
      goto LABEL_22;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 911, ASSERT_TYPE_ASSERT, "(!obj->skel.partBits.control.anyBitsOn())", (const char *)&queryFormat, "!obj->skel.partBits.control.anyBitsOn()") )
    __debugbreak();
LABEL_22:
  v12 = 0;
  p_worldCtrl = &obj->skel.partBits.worldCtrl;
  while ( !p_worldCtrl->array[0] )
  {
    ++v12;
    p_worldCtrl = (DObjPartBits *)((char *)p_worldCtrl + 4);
    if ( v12 >= 8 )
      goto LABEL_28;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 912, ASSERT_TYPE_ASSERT, "(!obj->skel.partBits.worldCtrl.anyBitsOn())", (const char *)&queryFormat, "!obj->skel.partBits.worldCtrl.anyBitsOn()") )
    __debugbreak();
LABEL_28:
  v14 = &obj->skel.partBits.skel;
  while ( !v14->array[0] )
  {
    ++v8;
    v14 = (DObjPartBits *)((char *)v14 + 4);
    if ( v8 >= 8 )
      goto LABEL_34;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 913, ASSERT_TYPE_ASSERT, "(!obj->skel.partBits.skel.anyBitsOn())", (const char *)&queryFormat, "!obj->skel.partBits.skel.anyBitsOn()") )
    __debugbreak();
LABEL_34:
  if ( obj->skel.partBits.animCalculated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 914, ASSERT_TYPE_ASSERT, "(!obj->skel.partBits.animCalculated)", (const char *)&queryFormat, "!obj->skel.partBits.animCalculated") )
    __debugbreak();
  Profile_EndInternal(NULL);
}

/*
==============
DObjGetAllocSkelSize
==============
*/
__int64 DObjGetAllocSkelSize(const DObj *obj)
{
  unsigned __int16 numClientBones; 
  int v3; 
  int v4; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 874, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjHasClientFlag(obj) && (numClientBones = obj->numClientBones) != 0 )
    v3 = numClientBones;
  else
    v3 = 0;
  v4 = v3 + obj->numBones;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 876, ASSERT_TYPE_ASSERT, "(numBones > 0)", (const char *)&queryFormat, "numBones > 0") )
    __debugbreak();
  return 32 * (v4 + ((4 * (unsigned int)obj->blendShapeTargetCount + 31) >> 5));
}

/*
==============
DObjGetBlendShapeTargetWeights
==============
*/
DObjAnimMat *DObjGetBlendShapeTargetWeights(const DObj *const obj)
{
  unsigned __int16 numClientBones; 
  __int64 v3; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 924, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjHasClientFlag(obj) && (numClientBones = obj->numClientBones) != 0 )
    v3 = numClientBones;
  else
    v3 = 0i64;
  return &obj->skel.mat[v3 + obj->numBones];
}

/*
==============
DObjGetBoneInfo
==============
*/
void DObjGetBoneInfo(const DObj *obj, XBoneInfo **boneInfo)
{
  const XModel **models; 
  int v3; 
  const XModel *v6; 
  unsigned __int8 numBones; 
  __int64 v8; 
  __int64 v9; 

  models = obj->models;
  v3 = 0;
  if ( obj->numModels )
  {
    do
    {
      v6 = *models;
      if ( !*models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = v6->numBones;
      if ( numBones )
      {
        v8 = 0i64;
        v9 = numBones;
        do
        {
          *boneInfo++ = &v6->boneInfo[v8++];
          --v9;
        }
        while ( v9 );
      }
      ++v3;
      ++models;
    }
    while ( v3 < obj->numModels );
  }
}

/*
==============
DObjGetBoneInfoClient
==============
*/
void DObjGetBoneInfoClient(const DObj *obj, XBoneInfo **boneInfo)
{
  unsigned __int8 numModels; 
  const XModel **models; 
  __int64 v6; 
  XBoneInfo **v7; 
  __int64 v8; 
  const XModel *v9; 
  __int64 numBones; 
  __int64 numClientBones; 
  __int64 v12; 
  __int64 v13; 
  XBoneInfo *v14; 
  __int64 v15; 
  __int64 v16; 
  XBoneInfo *v17; 

  numModels = obj->numModels;
  models = obj->models;
  if ( !DObjHasClientFlag(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 189, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
    __debugbreak();
  v6 = numModels;
  v7 = &boneInfo[DObjGetClientBoneOffset(obj)];
  if ( numModels )
  {
    v8 = 0i64;
    do
    {
      v9 = models[v8];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = v9->numBones;
      numClientBones = v9->numClientBones;
      if ( v9->numBones )
      {
        v12 = 0i64;
        v13 = v9->numBones;
        do
        {
          v14 = &v9->boneInfo[v12++];
          *boneInfo++ = v14;
          --v13;
        }
        while ( v13 );
      }
      if ( (unsigned int)numBones < (int)numClientBones + (int)numBones )
      {
        v15 = numBones;
        v16 = numClientBones;
        do
        {
          v17 = &v9->boneInfo[v15++];
          *v7++ = v17;
          --v16;
        }
        while ( v16 );
      }
      ++v8;
    }
    while ( v8 < v6 );
  }
}

/*
==============
DObjGetBoneInfoForBoneIndex
==============
*/
XBoneInfo *DObjGetBoneInfoForBoneIndex(const DObj *obj, int boneIndex)
{
  const char *v4; 
  const char *v5; 
  int v6; 
  int v7; 
  int v8; 
  __int64 i; 
  const XModel *v10; 
  unsigned int numBones; 
  unsigned int v13; 
  __int64 v14; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 218, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( boneIndex == 254 )
  {
    v4 = "boneIndex != UNDEFINED_BONEINDEX";
    v5 = "(boneIndex != 254)";
    v6 = 219;
  }
  else
  {
    if ( boneIndex != 255 )
      goto LABEL_10;
    v4 = "boneIndex != NO_BONEINDEX";
    v5 = "(boneIndex != 255)";
    v6 = 220;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", v6, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v4) )
    __debugbreak();
LABEL_10:
  v7 = 0;
  v8 = 0;
  if ( !obj->numModels )
    return 0i64;
  for ( i = 0i64; ; ++i )
  {
    v10 = obj->models[i];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    numBones = v10->numBones;
    if ( boneIndex < (int)(v7 + numBones) )
      break;
    v7 += numBones;
    if ( ++v8 >= obj->numModels )
      return 0i64;
  }
  v13 = boneIndex - v7;
  if ( v13 >= numBones )
  {
    LODWORD(v14) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 232, ASSERT_TYPE_ASSERT, "(unsigned)( modelBoneIndex ) < (unsigned)( XModelNumBones( model ) )", "modelBoneIndex doesn't index XModelNumBones( model )\n\t%i not in [0, %i)", v14, v10->numBones) )
      __debugbreak();
  }
  return &v10->boneInfo[v13];
}

/*
==============
DObjGetHidePartBits
==============
*/
void DObjGetHidePartBits(const DObj *obj, DObjPartBits *partBits)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1155, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1156, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(partBits, &obj->hidePartBits);
}

/*
==============
DObjGetHidePartBits
==============
*/
void DObjGetHidePartBits(const DObj *obj, DObjPartBitsAligned *partBits)
{
  unsigned int v5; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = partBits;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1164, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1165, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  v5 = 0;
  _RSI = &obj->hidePartBits;
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rsi]
      vmovdqu xmmword ptr [rdi], xmm6
    }
    _RDI = (DObjPartBitsAligned *)((char *)_RDI + 16);
    ++v5;
    _RSI = (DObjPartBits *)((char *)_RSI + 16);
  }
  while ( v5 < 2 );
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
DObjGetModel
==============
*/
const XModel *DObjGetModel(const DObj *obj, int modelIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = modelIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 479, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 480, ASSERT_TYPE_ASSERT, "(obj->models)", (const char *)&queryFormat, "obj->models") )
    __debugbreak();
  if ( (int)v2 >= obj->numModels )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 481, ASSERT_TYPE_ASSERT, "( ( modelIndex < obj->numModels ) )", "( modelIndex ) = %i", v5) )
      __debugbreak();
  }
  return obj->models[v2];
}

/*
==============
DObjGetModelIndex
==============
*/
__int64 DObjGetModelIndex(const DObj *obj, const XModel *xmodel)
{
  int v4; 
  const XModel **models; 
  __int64 i; 
  __int64 v8; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 491, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 492, ASSERT_TYPE_ASSERT, "(obj->models)", (const char *)&queryFormat, "obj->models") )
    __debugbreak();
  if ( !xmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 493, ASSERT_TYPE_ASSERT, "(xmodel)", (const char *)&queryFormat, "xmodel") )
    __debugbreak();
  v4 = 0;
  if ( !obj->numModels )
    return 0xFFFFFFFFi64;
  models = obj->models;
  for ( i = 0i64; ; ++i )
  {
    if ( !models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 480, ASSERT_TYPE_ASSERT, "(obj->models)", (const char *)&queryFormat, "obj->models") )
      __debugbreak();
    if ( v4 >= obj->numModels )
    {
      LODWORD(v8) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 481, ASSERT_TYPE_ASSERT, "( ( modelIndex < obj->numModels ) )", "( modelIndex ) = %i", v8) )
        __debugbreak();
    }
    models = obj->models;
    if ( models[i] == xmodel )
      break;
    if ( ++v4 >= obj->numModels )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v4;
}

/*
==============
DObjGetModelIndexForBoneIndex
==============
*/
__int64 DObjGetModelIndexForBoneIndex(const DObj *obj, int boneIndex)
{
  const char *v4; 
  const char *v5; 
  int v6; 
  int v7; 
  unsigned int v8; 
  __int64 i; 
  const XModel *v10; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 248, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( boneIndex == 254 )
  {
    v4 = "boneIndex != UNDEFINED_BONEINDEX";
    v5 = "(boneIndex != 254)";
    v6 = 249;
  }
  else
  {
    if ( boneIndex != 255 )
      goto LABEL_10;
    v4 = "boneIndex != NO_BONEINDEX";
    v5 = "(boneIndex != 255)";
    v6 = 250;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", v6, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v4) )
    __debugbreak();
LABEL_10:
  v7 = 0;
  v8 = 0;
  if ( !obj->numModels )
    return 0xFFFFFFFFi64;
  for ( i = 0i64; ; ++i )
  {
    v10 = obj->models[i];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( boneIndex < v7 + v10->numBones )
      break;
    v7 += v10->numBones;
    if ( (int)++v8 >= obj->numModels )
      return 0xFFFFFFFFi64;
  }
  return v8;
}

/*
==============
DObjGetNextChildBoneIndex
==============
*/
__int64 DObjGetNextChildBoneIndex(const DObj *obj, unsigned __int8 parentIndex, unsigned __int8 *childIndex)
{
  unsigned __int8 *v3; 
  unsigned int v6; 
  __int64 numModels; 
  unsigned int v8; 
  const XModel **models; 
  __int64 v10; 
  const XModel *v11; 
  unsigned __int8 numBones; 
  const XModel *v14; 
  unsigned int v15; 

  v3 = childIndex;
  if ( !obj )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1099, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    v3 = childIndex;
  }
  v6 = *v3;
  if ( v6 == 255 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1102, ASSERT_TYPE_ASSERT, "(localBoneIndex != 255)", (const char *)&queryFormat, "localBoneIndex != NO_BONEINDEX") )
      __debugbreak();
    v3 = childIndex;
  }
  numModels = obj->numModels;
  v8 = 0;
  models = obj->models;
  if ( obj->numModels )
  {
    v10 = 0i64;
    if ( v6 == 254 )
    {
      while ( 1 )
      {
        v11 = models[v10];
        numBones = v11->numBones;
        if ( parentIndex < numBones )
        {
          if ( XModelGetNextChildBoneIndex(v11, parentIndex, v8, v3) )
            break;
        }
        parentIndex -= numBones;
        v8 += numBones;
        ++v10;
        v3 = childIndex;
        if ( v10 >= numModels )
          goto LABEL_14;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = models[v10];
        v15 = v14->numBones;
        if ( v6 < v15 && parentIndex < (unsigned __int8)v15 && XModelGetNextChildBoneIndex(v14, parentIndex, v8, v3) )
          break;
        parentIndex -= v15;
        v6 -= v15;
        v8 += v15;
        if ( ++v10 >= numModels )
          goto LABEL_14;
        v3 = childIndex;
      }
    }
    return 1i64;
  }
  else
  {
LABEL_14:
    *childIndex = -1;
    return 0i64;
  }
}

/*
==============
DObjGetNumBlendShapeTargetWeights
==============
*/
__int64 DObjGetNumBlendShapeTargetWeights(const DObj *obj)
{
  if ( obj )
    return obj->blendShapeTargetCount;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 932, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return MEMORY[0x122];
}

/*
==============
DObjGetNumBones
==============
*/
__int64 DObjGetNumBones(const DObj *obj)
{
  if ( obj )
    return obj->numBones;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 59, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return MEMORY[0x10];
}

/*
==============
DObjGetNumModels
==============
*/
__int64 DObjGetNumModels(const DObj *obj)
{
  if ( obj )
    return obj->numModels;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 47, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return MEMORY[0xF];
}

/*
==============
DObjGetPrevSkinningSkel
==============
*/
DObjAnimMat *DObjGetPrevSkinningSkel(const DObj *obj, int curTimeStamp, int maxTimeStampDiff, float *outObjRadius)
{
  void *SkelRecord; 
  DSkel *v9; 
  unsigned __int16 numClientBones; 
  int v11; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > copiedBits; 

  SkelRecord = Com_GetSkelRecord(obj);
  v9 = (DSkel *)SkelRecord;
  if ( !SkelRecord )
    return 0i64;
  *outObjRadius = *((float *)SkelRecord + 38);
  if ( !*((_DWORD *)SkelRecord + 33) || *((_DWORD *)SkelRecord + 36) != obj->numBones )
    return 0i64;
  if ( DObjHasClientFlag(obj) && (numClientBones = obj->numClientBones) != 0 )
    v11 = numClientBones;
  else
    v11 = 0;
  if ( v9[1].partBits.anim.array[1] != v11 )
    return 0i64;
  if ( curTimeStamp < v9->timeStamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1364, ASSERT_TYPE_ASSERT, "(curTimeStamp >= savedSkel->timeStamp)", (const char *)&queryFormat, "curTimeStamp >= savedSkel->timeStamp") )
    __debugbreak();
  if ( curTimeStamp - v9->timeStamp > maxTimeStampDiff )
    return 0i64;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&copiedBits);
  DObjLock(obj);
  if ( !bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::isEqual<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v9->partBits.anim, &obj->skel.partBits.anim) )
    DObjUpdatePrevSkinningSkel(v9, &obj->skel, v9[1].partBits.anim.array[0], v9[1].partBits.anim.array[1], &v9->partBits.anim, &obj->skel.partBits.anim, (DObjPartBits *)&copiedBits);
  if ( !bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::isEqual<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v9->partBits.control, &obj->skel.partBits.control) )
    DObjUpdatePrevSkinningSkel(v9, &obj->skel, v9[1].partBits.anim.array[0], v9[1].partBits.anim.array[1], &v9->partBits.control, &obj->skel.partBits.control, (DObjPartBits *)&copiedBits);
  if ( !bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::isEqual<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v9->partBits.skel, &obj->skel.partBits.skel) )
    DObjUpdatePrevSkinningSkel(v9, &obj->skel, v9[1].partBits.anim.array[0], v9[1].partBits.anim.array[1], &v9->partBits.skel, &obj->skel.partBits.skel, (DObjPartBits *)&copiedBits);
  if ( !bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::isEqual<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v9->partBits.worldCtrl, &obj->skel.partBits.worldCtrl) )
    DObjUpdatePrevSkinningSkel(v9, &obj->skel, v9[1].partBits.anim.array[0], v9[1].partBits.anim.array[1], &v9->partBits.worldCtrl, &obj->skel.partBits.worldCtrl, (DObjPartBits *)&copiedBits);
  DObjUnlock(obj);
  return v9->mat;
}

/*
==============
DObjGetRootBoneCount
==============
*/
__int64 DObjGetRootBoneCount(const DObj *obj)
{
  const XModel *Model; 
  unsigned __int8 numRootBones; 

  Model = DObjGetModel(obj, 0);
  numRootBones = Model->numRootBones;
  if ( numRootBones )
    return numRootBones;
  if ( !Model->numClientBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 364, ASSERT_TYPE_ASSERT, "(model->numClientBones)", (const char *)&queryFormat, "model->numClientBones") )
    __debugbreak();
  return 1i64;
}

/*
==============
DObjGetRotTransArray
==============
*/
DObjAnimMat *DObjGetRotTransArray(const DObj *obj)
{
  if ( obj )
    return obj->skel.mat;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 34, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  return (DObjAnimMat *)MEMORY[0xC0];
}

/*
==============
DObjGetSetBones
==============
*/
void DObjGetSetBones(const DObj *obj, DObjPartBits *setPartBits)
{
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 318, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  if ( !setPartBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 320, ASSERT_TYPE_ASSERT, "(setPartBits)", (const char *)&queryFormat, "setPartBits") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(setPartBits, &obj->skel.partBits.anim);
}

/*
==============
DObjGetSurfaces
==============
*/

int __fastcall DObjGetSurfaces(const DObj *obj, DObjPartBits *partBits, const unsigned __int8 (*lods)[254])
{
  return DObjGetSurfacesInternal(obj, partBits, lods);
}

/*
==============
DObjGetSurfacesInternal
==============
*/
__int64 DObjGetSurfacesInternal(const DObj *obj, DObjPartBits *partBits, const unsigned __int8 (*lods)[254])
{
  unsigned __int8 numModels; 
  const XModel **models; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  const XModel *v11; 
  int numBones; 
  bitarray_base<bitarray<256> > *v13; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 111, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 112, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  numModels = obj->numModels;
  if ( !numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 115, ASSERT_TYPE_ASSERT, "(numModels)", (const char *)&queryFormat, "numModels") )
    __debugbreak();
  models = obj->models;
  if ( !models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 118, ASSERT_TYPE_ASSERT, "(models)", (const char *)&queryFormat, "models") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(partBits);
  v8 = 0;
  v9 = 0;
  if ( numModels )
  {
    v10 = numModels;
    do
    {
      v11 = *models;
      if ( !*models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      numBones = v11->numBones;
      if ( (*lods)[0] < v11->numLods )
      {
        v13 = (bitarray_base<bitarray<256> > *)v11 + 64 * (unsigned __int64)(*lods)[0];
        v9 += *(unsigned __int16 *)&v13[244];
        bitarray_base<bitarray<256>>::shiftRightOr(v13 + 248, v8, partBits);
        if ( (*(_DWORD *)&v13[276] & 2) != 0 )
          partBits->array[7] |= 2u;
      }
      v8 += numBones;
      ++models;
      lods = (const unsigned __int8 (*)[254])((char *)lods + 1);
      --v10;
    }
    while ( v10 );
  }
  return v9;
}

/*
==============
DObjHasClientOnlyBones
==============
*/
bool DObjHasClientOnlyBones(const DObj *obj)
{
  return DObjHasClientFlag(obj) && obj->numClientBones;
}

/*
==============
DObjInitModel
==============
*/
void DObjInitModel(const XModel *const model, scr_string_t boneName, bool ignoreCollision, bool stowedWeapon, const DObjCamoParams *camoParams, DObjModel *outDObjModel)
{
  _RBX = outDObjModel;
  if ( !outDObjModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1179, ASSERT_TYPE_ASSERT, "(outDObjModel)", (const char *)&queryFormat, "outDObjModel") )
    __debugbreak();
  outDObjModel->model = model;
  outDObjModel->boneName = boneName;
  outDObjModel->parentSlot = -1;
  *(_QWORD *)outDObjModel->offsets.v = 0i64;
  outDObjModel->offsets.v[2] = 0.0;
  __asm { vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity }
  outDObjModel->ignoreCollision = ignoreCollision;
  outDObjModel->stowedWeapon = stowedWeapon;
  __asm { vmovups xmmword ptr [rbx+1Ch], xmm0 }
  if ( camoParams )
  {
    outDObjModel->camoParams.overrideType = camoParams->overrideType;
    outDObjModel->camoParams.camo = camoParams->camo;
    outDObjModel->camoParams.materialOverrideDstWhitelist = NULL;
    outDObjModel->camoParams.materialOverrideDstWhitelistCount = 0;
  }
  else
  {
    outDObjModel->camoParams.overrideType = MATERIAL_OVERRIDETYPE_NONE;
  }
}

/*
==============
DObjInitSubmodel
==============
*/
void DObjInitSubmodel(const XModel *const model, const scr_string_t boneName, const int parentSlot, const vec3_t *const offsets, const vec4_t *const quat, const bool ignoreCollision, const bool stowedWeapon, const DObjCamoParams *const camoParams, DObjModel *const outDObjModel)
{
  _RBX = outDObjModel;
  _RDI = offsets;
  if ( !outDObjModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1179, ASSERT_TYPE_ASSERT, "(outDObjModel)", (const char *)&queryFormat, "outDObjModel") )
    __debugbreak();
  outDObjModel->model = model;
  outDObjModel->boneName = boneName;
  outDObjModel->parentSlot = -1;
  *(_QWORD *)outDObjModel->offsets.v = 0i64;
  outDObjModel->offsets.v[2] = 0.0;
  __asm { vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity }
  outDObjModel->ignoreCollision = ignoreCollision;
  outDObjModel->stowedWeapon = stowedWeapon;
  __asm { vmovups xmmword ptr [rbx+1Ch], xmm0 }
  if ( camoParams )
  {
    outDObjModel->camoParams.overrideType = camoParams->overrideType;
    outDObjModel->camoParams.camo = camoParams->camo;
    outDObjModel->camoParams.materialOverrideDstWhitelist = NULL;
    outDObjModel->camoParams.materialOverrideDstWhitelistCount = 0;
  }
  else
  {
    outDObjModel->camoParams.overrideType = MATERIAL_OVERRIDETYPE_NONE;
  }
  outDObjModel->parentSlot = parentSlot;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi]
    vmovsd  qword ptr [rbx+10h], xmm0
  }
  outDObjModel->offsets.v[2] = _RDI->v[2];
  _RAX = quat;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx+1Ch], xmm0
  }
}

/*
==============
DObjIsBoneSet
==============
*/
_BOOL8 DObjIsBoneSet(const DObj *obj, int boneIndex)
{
  return bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&obj->skel, boneIndex);
}

/*
==============
DObjLock
==============
*/
void DObjLock(const DObj *obj)
{
  volatile int *p_locked; 

  p_locked = &obj->locked;
  while ( 1 )
  {
    if ( !*p_locked )
    {
      if ( ((unsigned __int8)p_locked & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_locked) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(p_locked, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
}

/*
==============
DObjModelsHasBone
==============
*/
__int64 DObjModelsHasBone(DObjModel *dobjModels, int numModels, scr_string_t name)
{
  __int64 v3; 
  DObjModel *v5; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  scr_string_t *boneNames; 

  v3 = numModels;
  v5 = dobjModels;
  if ( !dobjModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1012, ASSERT_TYPE_ASSERT, "(dobjModels)", (const char *)&queryFormat, "dobjModels") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1013, ASSERT_TYPE_ASSERT, "(name != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "name != NULL_SCR_STRING") )
    __debugbreak();
  if ( !SL_IsLowercaseString(name) )
  {
    v6 = SL_ConvertToString(name);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144196208, 656i64, v6);
  }
  if ( (int)v3 <= 0 )
    return 0i64;
  v7 = 0i64;
  while ( 1 )
  {
    v8 = 0i64;
    LOBYTE(v9) = v5->model->numBones;
    if ( (_BYTE)v9 )
      break;
LABEL_15:
    ++v7;
    ++v5;
    if ( v7 >= v3 )
      return 0i64;
  }
  boneNames = v5->model->boneNames;
  v9 = (unsigned __int8)v9;
  while ( *boneNames != name )
  {
    ++v8;
    ++boneNames;
    if ( v8 >= v9 )
      goto LABEL_15;
  }
  return 1i64;
}

/*
==============
DObjNumBlendShapeTargets
==============
*/
__int64 DObjNumBlendShapeTargets(const DObj *obj)
{
  return obj->blendShapeTargetCount;
}

/*
==============
DObjNumBones
==============
*/
__int64 DObjNumBones(const DObj *obj)
{
  return obj->numBones;
}

/*
==============
DObjNumClientOnlyBones
==============
*/
__int64 DObjNumClientOnlyBones(const DObj *obj)
{
  __int64 result; 

  if ( DObjHasClientFlag(obj) && (LOWORD(result) = obj->numClientBones, (_WORD)result) )
    return (unsigned __int16)result;
  else
    return 0i64;
}

/*
==============
DObjRecordSkelOnSkinning
==============
*/

void __fastcall DObjRecordSkelOnSkinning(const DObj *obj, double radius)
{
  _DWORD *v6; 
  int v12; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RDI = obj;
  __asm { vmovaps xmm6, xmm1 }
  if ( !R_Screenshot_InProcess() )
  {
    _RAX = Com_GetSkelRecord(_RDI);
    v6 = _RAX;
    if ( _RAX )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi+38h]
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm1, ymmword ptr [rdi+58h]
        vmovups ymmword ptr [rax+20h], ymm1
        vmovups ymm0, ymmword ptr [rdi+78h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups ymm1, ymmword ptr [rdi+98h]
        vmovups ymmword ptr [rax+60h], ymm1
        vmovups xmm0, xmmword ptr [rdi+0B8h]
        vmovups xmmword ptr [rax+80h], xmm0
        vmovss  dword ptr [rax+98h], xmm6
      }
      _RAX[36] = _RDI->numBones;
      if ( DObjHasClientFlag(_RDI) && (LOWORD(v12) = _RDI->numClientBones, (_WORD)v12) )
        v12 = (unsigned __int16)v12;
      else
        v12 = 0;
      v6[37] = v12;
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
DObjSetAngles
==============
*/
void DObjSetAngles(DObjAnimMat *rotTrans, const vec3_t *angles)
{
  float s; 
  float c; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovss  xmm6, cs:__real@3c0efa35
    vmulss  xmm0, xmm6, dword ptr [rdx+4]; radians
  }
  _RDI = rotTrans;
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm { vmulss  xmm0, xmm6, dword ptr [rbx]; radians }
  FastSinCos(*(const float *)&_XMM0, &v38, &v39);
  __asm { vmulss  xmm0, xmm6, dword ptr [rbx+8]; radians }
  FastSinCos(*(const float *)&_XMM0, &v40, &v41);
  __asm
  {
    vmovss  xmm8, [rsp+88h+var_58]
    vmovss  xmm5, [rsp+88h+var_54]
    vmovss  xmm3, [rsp+88h+s]
    vmulss  xmm0, xmm3, [rsp+88h+var_60]
    vxorps  xmm9, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm1, [rsp+88h+c]
    vmulss  xmm6, xmm1, [rsp+88h+var_60]
    vmulss  xmm7, xmm1, [rsp+88h+var_5C]
    vmulss  xmm4, xmm3, [rsp+88h+var_5C]
    vmulss  xmm0, xmm9, xmm5
    vmulss  xmm1, xmm7, xmm8
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm0, xmm6, xmm5
    vmulss  xmm2, xmm4, xmm8
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm0, xmm6, xmm8
    vmulss  xmm3, xmm4, xmm5
    vsubss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rdi+8], xmm1
    vmulss  xmm0, xmm9, xmm8
    vmulss  xmm2, xmm7, xmm5
    vsubss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
  }
}

/*
==============
DObjSetControlRotTransIndex
==============
*/
__int64 DObjSetControlRotTransIndex(const DObj *obj, const DObjPartBits *partBits, int boneIndex)
{
  unsigned __int64 v3; 
  unsigned int v6; 
  unsigned __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = (unsigned int)boneIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 776, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 778, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  if ( !obj->skel.mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 780, ASSERT_TYPE_ASSERT, "(obj->skel.mat)", (const char *)&queryFormat, "obj->skel.mat") )
    __debugbreak();
  if ( (v3 & 0x80000000) != 0i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 781, ASSERT_TYPE_ASSERT, "(boneIndex >= 0)", (const char *)&queryFormat, "boneIndex >= 0") )
    __debugbreak();
  if ( (int)v3 >= obj->numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 782, ASSERT_TYPE_ASSERT, "(boneIndex < obj->numBones)", (const char *)&queryFormat, "boneIndex < obj->numBones") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 783, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)partBits, v3) || bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&obj->skel, v3) )
    return 0i64;
  if ( (unsigned int)v3 >= 0x100 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, 256) )
      __debugbreak();
  }
  v6 = 0x80000000 >> (v3 & 0x1F);
  v7 = v3 >> 5;
  if ( (v6 & obj->skel.partBits.skel.array[v7]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 792, ASSERT_TYPE_ASSERT, "(!skel->partBits.skel.testBit( boneIndex ))", (const char *)&queryFormat, "!skel->partBits.skel.testBit( boneIndex )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 256) )
    __debugbreak();
  obj->skel.partBits.control.array[v7] |= v6;
  if ( (unsigned int)v3 >= 0x100 )
  {
    LODWORD(v11) = 256;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v10, v11) )
      __debugbreak();
  }
  obj->skel.partBits.anim.array[v7] |= v6;
  return 1i64;
}

/*
==============
DObjSetControlTagAngles
==============
*/
void DObjSetControlTagAngles(const DObj *obj, DObjPartBits *partBits, unsigned int boneIndex, const vec3_t *angles)
{
  if ( boneIndex < 0xFE )
  {
    if ( DObjSetControlRotTransIndex(obj, partBits, boneIndex) )
      DObjSetLocalTagInternal(obj, &vec3_origin, angles, boneIndex);
  }
  else if ( boneIndex - 254 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 439, ASSERT_TYPE_ASSERT, "( ( (boneIndex == 254) || (boneIndex == 255) ) )", "( boneIndex ) = %i", boneIndex) )
  {
    __debugbreak();
  }
}

/*
==============
DObjSetLocalTag
==============
*/
void DObjSetLocalTag(const DObj *obj, DObjPartBits *partBits, unsigned int boneIndex, const vec3_t *trans, const vec3_t *angles)
{
  if ( boneIndex < 0xFE )
  {
    if ( DObjSetRotTransIndex(obj, partBits, boneIndex) )
      DObjSetLocalTagInternal(obj, trans, angles, boneIndex);
  }
  else if ( boneIndex - 254 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 515, ASSERT_TYPE_ASSERT, "( ( (boneIndex == 254) || (boneIndex == 255) ) )", "( boneIndex ) = %i", boneIndex) )
  {
    __debugbreak();
  }
}

/*
==============
DObjSetLocalTagInternal
==============
*/
void DObjSetLocalTagInternal(const DObj *obj, const vec3_t *trans, const vec3_t *angles, int boneIndex)
{
  __int64 v12; 
  float s; 
  float c; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 

  v12 = boneIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 34, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  _RDI = obj->skel.mat;
  if ( _RDI )
  {
    _RBX = v12;
    __asm
    {
      vmovaps [rsp+0C8h+var_68], xmm10
      vmovaps [rsp+0C8h+var_78], xmm11
    }
    if ( angles )
    {
      __asm
      {
        vmovaps [rsp+0C8h+var_28], xmm6
        vmovss  xmm6, cs:__real@3c0efa35
        vmulss  xmm0, xmm6, dword ptr [rbp+4]; radians
        vmovaps [rsp+0C8h+var_38], xmm7
        vmovaps [rsp+0C8h+var_48], xmm8
        vmovaps [rsp+0C8h+var_58], xmm9
      }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      __asm { vmulss  xmm0, xmm6, dword ptr [rbp+0]; radians }
      FastSinCos(*(const float *)&_XMM0, &v51, &v52);
      __asm { vmulss  xmm0, xmm6, dword ptr [rbp+8]; radians }
      FastSinCos(*(const float *)&_XMM0, &v53, &v54);
      __asm
      {
        vmovss  xmm7, [rsp+0C8h+var_84]
        vmovss  xmm4, [rsp+0C8h+var_88]
        vmovss  xmm3, [rsp+0C8h+s]
        vmulss  xmm0, xmm3, [rsp+0C8h+var_90]
        vxorps  xmm9, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  xmm1, [rsp+0C8h+c]
        vmulss  xmm6, xmm1, [rsp+0C8h+var_8C]
        vmulss  xmm8, xmm1, [rsp+0C8h+var_90]
        vmulss  xmm5, xmm3, [rsp+0C8h+var_8C]
        vmulss  xmm1, xmm6, xmm7
        vmulss  xmm2, xmm5, xmm7
        vmulss  xmm0, xmm9, xmm4
        vsubss  xmm11, xmm1, xmm0
        vmulss  xmm0, xmm8, xmm7
        vmulss  xmm1, xmm8, xmm4
        vmovaps xmm8, [rsp+0C8h+var_48]
        vsubss  xmm10, xmm2, xmm1
        vmulss  xmm1, xmm9, xmm7
        vmovaps xmm9, [rsp+0C8h+var_58]
        vmovaps xmm7, [rsp+0C8h+var_38]
        vmulss  xmm2, xmm6, xmm4
        vmovaps xmm6, [rsp+0C8h+var_28]
        vmulss  xmm3, xmm5, xmm4
        vaddss  xmm5, xmm3, xmm0
        vaddss  xmm0, xmm2, xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm11, cs:__real@3f800000
        vxorps  xmm10, xmm10, xmm10
        vxorps  xmm5, xmm5, xmm5
        vxorps  xmm0, xmm0, xmm0
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+rdi], xmm0
      vmovss  dword ptr [rbx+rdi+4], xmm5
      vmovss  dword ptr [rbx+rdi+8], xmm10
      vmovss  dword ptr [rbx+rdi+0Ch], xmm11
      vmovaps xmm11, [rsp+0C8h+var_78]
      vmovaps xmm10, [rsp+0C8h+var_68]
    }
    _RDI[_RBX].transWeight = 0.0;
    _RDI[_RBX].trans.v[0] = trans->v[0];
    _RDI[_RBX].trans.v[1] = trans->v[1];
    _RDI[_RBX].trans.v[2] = trans->v[2];
  }
}

/*
==============
DObjSetRotTransIndex
==============
*/
__int64 DObjSetRotTransIndex(const DObj *obj, const DObjPartBits *partBits, int boneIndex)
{
  unsigned __int64 v3; 
  int v6; 
  unsigned __int16 numClientBones; 
  int v8; 
  unsigned __int16 v9; 
  unsigned int v10; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  v3 = (unsigned int)boneIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 374, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 376, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  if ( !obj->skel.mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 378, ASSERT_TYPE_ASSERT, "(obj->skel.mat)", (const char *)&queryFormat, "obj->skel.mat") )
    __debugbreak();
  v6 = 0;
  if ( (v3 & 0x80000000) != 0i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 379, ASSERT_TYPE_ASSERT, "( boneIndex ) >= ( 0 )", "%s >= %s\n\t%i, %i", "boneIndex", "0", v3, 0i64) )
    __debugbreak();
  if ( !DObjHasClientFlag(obj) || (numClientBones = obj->numClientBones, (v8 = numClientBones) == 0) )
    v8 = 0;
  if ( (int)v3 >= v8 + obj->numBones )
  {
    if ( DObjHasClientFlag(obj) )
    {
      v9 = obj->numClientBones;
      if ( v9 )
        v6 = v9;
    }
    LODWORD(v15) = v6 + obj->numBones;
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 380, ASSERT_TYPE_ASSERT, "( boneIndex ) < ( DObjTotalNumBones( obj ) )", "%s < %s\n\t%i, %i", "boneIndex", "DObjTotalNumBones( obj )", v14, v15) )
      __debugbreak();
  }
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 381, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)partBits, v3) || bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&obj->skel, v3) )
    return 0i64;
  if ( (unsigned int)v3 >= 0x100 )
  {
    LODWORD(v13) = 256;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
      __debugbreak();
  }
  v10 = 0x80000000 >> (v3 & 0x1F);
  if ( (v10 & obj->skel.partBits.skel.array[v3 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 390, ASSERT_TYPE_ASSERT, "(!skel->partBits.skel.testBit( boneIndex ))", (const char *)&queryFormat, "!skel->partBits.skel.testBit( boneIndex )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x100 )
  {
    LODWORD(v15) = 256;
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v15) )
      __debugbreak();
  }
  obj->skel.partBits.anim.array[v3 >> 5] |= v10;
  return 1i64;
}

/*
==============
DObjSetSkelRotTransIndex
==============
*/
char DObjSetSkelRotTransIndex(const DObj *obj, const DObjPartBits *partBits, int boneIndex)
{
  unsigned __int64 v3; 
  DSkel *p_skel; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v3 = (unsigned int)boneIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 405, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 407, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  if ( !obj->skel.mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 409, ASSERT_TYPE_ASSERT, "(obj->skel.mat)", (const char *)&queryFormat, "obj->skel.mat") )
    __debugbreak();
  if ( (v3 & 0x80000000) != 0i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 410, ASSERT_TYPE_ASSERT, "( boneIndex ) >= ( 0 )", "%s >= %s\n\t%i, %i", "boneIndex", "0", v3, 0i64) )
    __debugbreak();
  if ( (int)v3 >= obj->numBones )
  {
    LODWORD(v13) = obj->numBones;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 411, ASSERT_TYPE_ASSERT, "( boneIndex ) < ( obj->numBones )", "%s < %s\n\t%i, %i", "boneIndex", "obj->numBones", v12, v13) )
      __debugbreak();
  }
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 412, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)partBits, v3) )
  {
    p_skel = &obj->skel;
    if ( bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&obj->skel, v3) )
      return 0;
    if ( (unsigned int)v3 >= 0x100 )
    {
      LODWORD(v11) = 256;
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    v8 = 0x80000000 >> (v3 & 0x1F);
    v9 = v3 >> 5;
    if ( (v8 & p_skel->partBits.skel.array[v9]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 421, ASSERT_TYPE_ASSERT, "(!skel->partBits.skel.testBit( boneIndex ))", (const char *)&queryFormat, "!skel->partBits.skel.testBit( boneIndex )") )
      __debugbreak();
    if ( (unsigned int)v3 >= 0x100 )
    {
      LODWORD(v13) = 256;
      LODWORD(v12) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v12, v13) )
        __debugbreak();
    }
    p_skel->partBits.anim.array[v9] |= v8;
    if ( (unsigned int)v3 >= 0x100 )
    {
      LODWORD(v13) = 256;
      LODWORD(v12) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v12, v13) )
        __debugbreak();
    }
    p_skel->partBits.skel.array[v9] |= v8;
  }
  return 1;
}

/*
==============
DObjSetTrans
==============
*/
void DObjSetTrans(DObjAnimMat *rotTrans, const vec3_t *trans)
{
  rotTrans->transWeight = 0.0;
  rotTrans->trans = *trans;
}

/*
==============
DObjSetWorldControlRotTransIndex
==============
*/
__int64 DObjSetWorldControlRotTransIndex(const DObj *obj, const DObjPartBits *partBits, int boneIndex)
{
  unsigned __int64 v3; 
  unsigned int v6; 
  unsigned __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = (unsigned int)boneIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 803, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 805, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
    __debugbreak();
  if ( !obj->skel.mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 807, ASSERT_TYPE_ASSERT, "(obj->skel.mat)", (const char *)&queryFormat, "obj->skel.mat") )
    __debugbreak();
  if ( (v3 & 0x80000000) != 0i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 808, ASSERT_TYPE_ASSERT, "(boneIndex >= 0)", (const char *)&queryFormat, "boneIndex >= 0") )
    __debugbreak();
  if ( (int)v3 >= obj->numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 809, ASSERT_TYPE_ASSERT, "(boneIndex < obj->numBones)", (const char *)&queryFormat, "boneIndex < obj->numBones") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 810, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( !bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)partBits, v3) || bitarray_base<bitarray<256>>::testBit((bitarray_base<bitarray<256> > *)&obj->skel, v3) )
    return 0i64;
  if ( (unsigned int)v3 >= 0x100 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, 256) )
      __debugbreak();
  }
  v6 = 0x80000000 >> (v3 & 0x1F);
  v7 = v3 >> 5;
  if ( (v6 & obj->skel.partBits.skel.array[v7]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 819, ASSERT_TYPE_ASSERT, "(!skel->partBits.skel.testBit( boneIndex ))", (const char *)&queryFormat, "!skel->partBits.skel.testBit( boneIndex )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 256) )
    __debugbreak();
  obj->skel.partBits.worldCtrl.array[v7] |= v6;
  if ( (unsigned int)v3 >= 0x100 )
  {
    LODWORD(v11) = 256;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v10, v11) )
      __debugbreak();
  }
  obj->skel.partBits.anim.array[v7] |= v6;
  return 1i64;
}

/*
==============
DObjSetWorldControlTag
==============
*/
void DObjSetWorldControlTag(const DObj *obj, DObjPartBits *partBits, unsigned int boneIndex, const vec3_t *trans, const vec4_t *quat)
{
  __int64 v5; 
  DObjAnimMat *RotTransArray; 
  DObjAnimMat *v9; 

  v5 = boneIndex;
  if ( boneIndex < 0xFE )
  {
    if ( DObjSetWorldControlRotTransIndex(obj, partBits, boneIndex) )
    {
      RotTransArray = DObjGetRotTransArray(obj);
      if ( RotTransArray )
      {
        v9 = &RotTransArray[v5];
        v9->quat = *quat;
        v9->transWeight = 0.0;
        v9->trans.v[0] = trans->v[0];
        v9->trans.v[1] = trans->v[1];
        v9->trans.v[2] = trans->v[2];
      }
    }
  }
  else if ( boneIndex - 254 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 460, ASSERT_TYPE_ASSERT, "( ( (boneIndex == 254) || (boneIndex == 255) ) )", "( boneIndex ) = %i", boneIndex) )
  {
    __debugbreak();
  }
}

/*
==============
DObjSkelAreBonesUpToDate
==============
*/
__int64 DObjSkelAreBonesUpToDate(const DObj *obj, DObjPartBits *partBits)
{
  unsigned int v6; 
  __int64 result; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBP = partBits;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 858, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 859, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  _RSI = &obj->skel;
  if ( obj == (const DObj *)-56i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 862, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  v6 = 0;
  while ( 1 )
  {
    _RDI = 2i64 * v6;
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rbp+rdi*8+0]
      vlddqu  xmm0, xmmword ptr [rsi+rdi*8+60h]
      vptest  xmm0, xmm6
    }
    if ( !_CF )
      break;
    if ( ++v6 >= 2 )
    {
      result = 1i64;
      goto LABEL_15;
    }
  }
  result = 0i64;
LABEL_15:
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
DObjSkelExists
==============
*/
_BOOL8 DObjSkelExists(const DObj *obj, int timeStamp)
{
  if ( obj->skel.timeStamp == timeStamp )
    return obj->skel.mat != NULL;
  memset_0(&obj->skel, 0, sizeof(obj->skel));
  return 0i64;
}

/*
==============
DObjSkelIsBoneUpToDate
==============
*/
_BOOL8 DObjSkelIsBoneUpToDate(const DObj *obj, int boneIndex)
{
  unsigned __int64 v2; 
  DSkel *p_skel; 
  __int64 v6; 

  v2 = (unsigned int)boneIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 845, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  p_skel = &obj->skel;
  if ( !p_skel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 848, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  if ( (v2 & 0x8000) != 0 )
    return (p_skel->partBits.skel.array[7] >> 1) & 1;
  if ( (unsigned int)v2 >= 0x100 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, 256) )
      __debugbreak();
  }
  return ((0x80000000 >> (v2 & 0x1F)) & p_skel->partBits.skel.array[v2 >> 5]) != 0;
}

/*
==============
DObjTotalNumBones
==============
*/
__int64 DObjTotalNumBones(const DObj *obj)
{
  unsigned __int16 numClientBones; 

  if ( DObjHasClientFlag(obj) && (numClientBones = obj->numClientBones) != 0 )
    return numClientBones + (unsigned int)obj->numBones;
  else
    return obj->numBones;
}

/*
==============
DObjTransferAndMergeSkinningSkelRecords
==============
*/
void DObjTransferAndMergeSkinningSkelRecords(const DObj *obj, const bool matchModels, const scr_string_t *dstPartNames, const XModel **dstModels, const XModel **srcModels0, const XModel **srcModels1, const scr_string_t *srcPartNames0, const scr_string_t *srcPartNames1, const DObjPartBits *srcParts0, const DObjPartBits *srcParts1, void *skelRecord0, void *skelRecord1)
{
  const XModel **v12; 
  const scr_string_t *v13; 
  _DWORD *v15; 
  int *v16; 
  unsigned __int16 numClientBones; 
  unsigned int v19; 
  int v20; 
  unsigned int AllocSkelSize; 
  char *v22; 
  signed int v28; 
  scr_string_t v29; 
  unsigned int v30; 
  const XModel **v31; 
  const XModel *v32; 
  const scr_string_t *v33; 
  scr_string_t v34; 
  bool v35; 
  unsigned int v39; 
  const XModel **v40; 
  const scr_string_t *v41; 
  scr_string_t v42; 
  bool v43; 
  __int64 v47; 
  __int64 v48; 
  const XModel *v49; 
  const scr_string_t *v51; 
  const XModel **v52; 

  v52 = dstModels;
  v51 = dstPartNames;
  v12 = dstModels;
  v13 = dstPartNames;
  _RBX = obj;
  if ( !R_Screenshot_InProcess() )
  {
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1717, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1718, ASSERT_TYPE_ASSERT, "(dstPartNames)", (const char *)&queryFormat, "dstPartNames") )
      __debugbreak();
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1719, ASSERT_TYPE_ASSERT, "(dstModels)", (const char *)&queryFormat, "dstModels") )
      __debugbreak();
    if ( !srcPartNames0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1720, ASSERT_TYPE_ASSERT, "(srcPartNames0)", (const char *)&queryFormat, "srcPartNames0") )
      __debugbreak();
    if ( !srcParts0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1721, ASSERT_TYPE_ASSERT, "(srcParts0)", (const char *)&queryFormat, "srcParts0") )
      __debugbreak();
    if ( !srcModels0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1722, ASSERT_TYPE_ASSERT, "(srcModels0)", (const char *)&queryFormat, "srcModels0") )
      __debugbreak();
    v15 = skelRecord0;
    v16 = (int *)skelRecord1;
    if ( __PAIR128__((unsigned __int64)skelRecord1, (unsigned __int64)skelRecord0) != 0 )
    {
      if ( cls.skelMemoryStart )
      {
        _R13 = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)Com_GetSkelRecord(_RBX);
        _R13[4].array[4] = _RBX->numBones;
        if ( DObjHasClientFlag(_RBX) && (numClientBones = _RBX->numClientBones) != 0 )
          v19 = numClientBones;
        else
          v19 = 0;
        _R13[4].array[5] = v19;
        if ( skelRecord0 )
          v20 = *((_DWORD *)skelRecord0 + 33);
        else
          v20 = *((_DWORD *)skelRecord1 + 33);
        if ( !_RBX->skel.mat )
        {
          DObjLock(_RBX);
          AllocSkelSize = DObjGetAllocSkelSize(_RBX);
          v22 = CL_Pose_AllocSkelMemory(_RBX, AllocSkelSize);
          if ( v22 )
          {
            _RBX->skel.mat = (DObjAnimMat *)v22;
            DObjCreateSkel(_RBX, v22, v20);
          }
          DObjUnlock(_RBX);
        }
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx+38h]
          vmovups ymmword ptr [r13+0], ymm0
          vmovups ymm1, ymmword ptr [rbx+58h]
          vmovups ymmword ptr [r13+20h], ymm1
          vmovups ymm0, ymmword ptr [rbx+78h]
          vmovups ymmword ptr [r13+40h], ymm0
          vmovups ymm1, ymmword ptr [rbx+98h]
          vmovups ymmword ptr [r13+60h], ymm1
          vmovups xmm0, xmmword ptr [rbx+0B8h]
          vmovups xmmword ptr [r13+80h], xmm0
        }
        _R13[4].array[1] = v20;
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(_R13);
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(_R13 + 1, &_RBX->skel.partBits.control);
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(_R13 + 2, &_RBX->skel.partBits.worldCtrl);
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(_R13 + 3);
        v28 = 0;
        if ( (int)_R13[4].array[4] > 0 )
        {
          while ( 1 )
          {
            v29 = *v13;
            v49 = *v12;
            if ( v15 )
            {
              if ( *((_QWORD *)v15 + 17) )
              {
                v30 = 0;
                if ( (int)v15[36] > 0 )
                {
                  v31 = srcModels0;
                  v32 = *v12;
                  v33 = srcPartNames0;
                  while ( 1 )
                  {
                    if ( v30 >= 0x100 )
                    {
                      LODWORD(v48) = 256;
                      LODWORD(v47) = v30;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v47, v48) )
                        __debugbreak();
                    }
                    if ( ((0x80000000 >> (v30 & 0x1F)) & srcParts0->array[(unsigned __int64)v30 >> 5]) == 0 )
                      goto LABEL_48;
                    v34 = *v33;
                    if ( !matchModels )
                      break;
                    if ( v29 == v34 )
                    {
                      v35 = v32 == *v31;
                      goto LABEL_46;
                    }
LABEL_48:
                    ++v30;
                    ++v33;
                    ++v31;
                    if ( (signed int)v30 >= v15[36] )
                    {
                      v16 = (int *)skelRecord1;
                      v12 = v52;
                      goto LABEL_50;
                    }
                  }
                  v35 = v29 == v34;
LABEL_46:
                  if ( v35 )
                  {
                    bitarray_base<bitarray<256>>::setBit(_R13, v28);
                    bitarray_base<bitarray<256>>::setBit(_R13 + 3, v28);
                    _RCX = *((_QWORD *)v15 + 17) + 32i64 * (int)v30;
                    _RAX = *(_QWORD *)&_R13[4].array[2] + 32i64 * v28;
                    __asm
                    {
                      vmovups ymm0, ymmword ptr [rcx]
                      vmovups ymmword ptr [rax], ymm0
                    }
                  }
                  goto LABEL_48;
                }
              }
            }
LABEL_50:
            if ( v16 )
            {
              if ( *((_QWORD *)v16 + 17) )
              {
                v39 = 0;
                if ( v16[36] > 0 )
                  break;
              }
            }
LABEL_66:
            v13 = v51 + 1;
            ++v12;
            ++v28;
            ++v51;
            v52 = v12;
            if ( v28 >= (signed int)_R13[4].array[4] )
              return;
          }
          v40 = srcModels1;
          v41 = srcPartNames1;
          while ( 1 )
          {
            if ( v39 >= 0x100 )
            {
              LODWORD(v48) = 256;
              LODWORD(v47) = v39;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v47, v48) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v39 & 0x1F)) & srcParts1->array[(unsigned __int64)v39 >> 5]) == 0 )
              goto LABEL_64;
            v42 = *v41;
            if ( !matchModels )
              break;
            if ( v29 == v42 )
            {
              v43 = v49 == *v40;
              goto LABEL_62;
            }
LABEL_64:
            ++v39;
            ++v41;
            ++v40;
            if ( (int)v39 >= v16[36] )
            {
              v15 = skelRecord0;
              v12 = v52;
              goto LABEL_66;
            }
          }
          v43 = v29 == v42;
LABEL_62:
          if ( v43 )
          {
            bitarray_base<bitarray<256>>::setBit(_R13, v28);
            bitarray_base<bitarray<256>>::setBit(_R13 + 3, v28);
            _RCX = *((_QWORD *)v16 + 17) + 32i64 * (int)v39;
            _RAX = *(_QWORD *)&_R13[4].array[2] + 32i64 * v28;
            __asm
            {
              vmovups ymm0, ymmword ptr [rcx]
              vmovups ymmword ptr [rax], ymm0
            }
          }
          goto LABEL_64;
        }
      }
    }
  }
}

/*
==============
DObjTransferSkinningSkelRecordBits
==============
*/
void DObjTransferSkinningSkelRecordBits(DObjPartBits *dstParts, const void *srcSkelRecord)
{
  if ( srcSkelRecord )
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(dstParts, (const bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)srcSkelRecord + 3);
  else
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(dstParts);
}

/*
==============
DObjUnlock
==============
*/
void DObjUnlock(const DObj *obj)
{
  if ( obj->locked )
  {
    obj->locked = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1242, ASSERT_TYPE_ASSERT, "(obj->locked)", (const char *)&queryFormat, "obj->locked") )
      __debugbreak();
    obj->locked = 0;
  }
}

/*
==============
DObjUpdatePrevSkinningSkel
==============
*/
void DObjUpdatePrevSkinningSkel(DSkel *savedSkel, const DSkel *curSkel, unsigned int numBones, unsigned int numClientBones, DObjPartBits *prevBits, const DObjPartBits *curBits, DObjPartBits *copiedBits)
{
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int i; 
  const DSkel *v21; 
  unsigned int j; 
  unsigned int k; 
  unsigned int v30; 
  DSkel *v33; 
  unsigned int v34; 
  unsigned __int64 v35; 
  DObjAnimMat *mat; 
  DObjAnimMat *v49; 
  __int64 v51; 
  DObjAnimMat *v63; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v90; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v91; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RDI = &v90;
  LODWORD(v11) = 0;
  v12 = 0;
  v13 = numBones;
  __asm { vpxor   xmm7, xmm7, xmm7 }
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm7 }
    _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
    ++v12;
  }
  while ( v12 < 2 );
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v90, curBits);
  _RBP = (char *)prevBits - (char *)&v90;
  _RDI = &v90;
  for ( i = 0; i < 2; ++i )
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rdi+rbp]
      vlddqu  xmm0, xmmword ptr [rdi]
      vpxor   xmm6, xmm0, xmm6
      vmovdqu xmmword ptr [rdi], xmm6
    }
    _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::nandAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v90, copiedBits);
  v21 = curSkel;
  _RDI = &v91;
  for ( j = 0; j < 2; ++j )
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm7 }
    _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v91, &v90);
  _RBP = (char *)curBits - (char *)&v91;
  _RDI = &v91;
  for ( k = 0; k < 2; ++k )
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rdi+rbp]
      vlddqu  xmm0, xmmword ptr [rdi]
      vpand   xmm6, xmm0, xmm6
      vmovdqu xmmword ptr [rdi], xmm6
    }
    _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
  }
  v30 = v91.array[0];
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
  }
LABEL_10:
  v33 = savedSkel;
  while ( v30 )
  {
LABEL_14:
    v34 = __lzcnt(v30);
    v35 = v34 + 32 * (_DWORD)v11;
    if ( v34 >= 0x20 )
    {
      LODWORD(v68) = 32;
      LODWORD(v67) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v67, v68) )
        __debugbreak();
    }
    if ( (v30 & (0x80000000 >> v34)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v30 &= ~(0x80000000 >> v34);
    if ( (unsigned int)v35 >= (unsigned int)v13 )
    {
      if ( (unsigned int)v35 >= 0x100 )
      {
        LODWORD(v70) = 256;
        LODWORD(v69) = v34 + 32 * v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v69, v70) )
          __debugbreak();
      }
      v90.array[(unsigned __int64)(v34 + 32 * (_DWORD)v11) >> 5] &= ~(0x80000000 >> ((v34 + 32 * v11) & 0x1F));
      goto LABEL_10;
    }
    _RAX = v21->mat;
    _RBX = v35;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+1Ch]
      vmovss  dword ptr [rsp+128h+var_D8], xmm0
    }
    if ( (v72 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1317, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[it.index].transWeight ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[it.index].transWeight )") )
      __debugbreak();
    _RCX = v21->mat;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx+10h]
      vmovss  dword ptr [rsp+128h+var_D8], xmm0
    }
    if ( (v73 & 0x7F800000) == 2139095040 )
      goto LABEL_66;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx+14h]
      vmovss  dword ptr [rsp+128h+var_D8], xmm0
    }
    if ( (v74 & 0x7F800000) == 2139095040 )
      goto LABEL_66;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx+18h]
      vmovss  dword ptr [rsp+128h+var_D8], xmm0
    }
    if ( (v75 & 0x7F800000) == 2139095040 )
    {
LABEL_66:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1318, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[it.index].trans[0] ) && !IS_NAN( curSkel->mat[it.index].trans[1] ) && !IS_NAN( curSkel->mat[it.index].trans[2] ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[it.index].trans[0] ) && !IS_NAN( curSkel->mat[it.index].trans[1] ) && !IS_NAN( curSkel->mat[it.index].trans[2] )") )
        __debugbreak();
    }
    _RCX = v21->mat;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx]
      vmovss  dword ptr [rsp+128h+var_D8], xmm0
    }
    if ( (v76 & 0x7F800000) == 2139095040 )
      goto LABEL_67;
    __asm { vucomiss xmm6, dword ptr [rcx+rbx+4] }
    if ( (v76 & 0x7F800000) == 2139095040 )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx+8]
      vmovss  dword ptr [rsp+128h+var_D8], xmm0
    }
    if ( (v77 & 0x7F800000) == 2139095040 )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
      vmovss  dword ptr [rsp+128h+var_D8], xmm0
    }
    if ( (v78 & 0x7F800000) == 2139095040 )
LABEL_38:
      __asm { vmovaps xmm0, xmm6 }
    else
      __asm { vmovaps xmm0, xmm7 }
    __asm { vmovss  dword ptr [rsp+128h+var_D8], xmm0 }
    if ( (v79 & 0x7F800000) == 2139095040 )
    {
LABEL_67:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1319, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[it.index].quat[0] ) && !IS_NAN( curSkel->mat[it.index].quat[1] && !IS_NAN( curSkel->mat[it.index].quat[2] ) && !IS_NAN( curSkel->mat[it.index].quat[3] ) ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[it.index].quat[0] ) && !IS_NAN( curSkel->mat[it.index].quat[1] && !IS_NAN( curSkel->mat[it.index].quat[2] ) && !IS_NAN( curSkel->mat[it.index].quat[3] ) )") )
        __debugbreak();
    }
    v33 = savedSkel;
    savedSkel->mat[_RBX].transWeight = v21->mat[_RBX].transWeight;
    mat = v21->mat;
    v49 = savedSkel->mat;
    v49[_RBX].trans.v[0] = mat[_RBX].trans.v[0];
    v49[_RBX].trans.v[1] = mat[_RBX].trans.v[1];
    v49[_RBX].trans.v[2] = mat[_RBX].trans.v[2];
    v49[_RBX].quat.v[0] = mat[_RBX].quat.v[0];
    v49[_RBX].quat.v[1] = mat[_RBX].quat.v[1];
    v49[_RBX].quat.v[2] = mat[_RBX].quat.v[2];
    v49[_RBX].quat.v[3] = mat[_RBX].quat.v[3];
  }
  while ( 1 )
  {
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= 8 )
      break;
    v30 = v91.array[v11];
    if ( v30 )
      goto LABEL_14;
  }
  if ( (v91.array[7] & 2) != 0 )
  {
    v90.array[7] |= 2u;
    if ( (unsigned int)v13 < (unsigned int)v13 + numClientBones )
    {
      _RCX = v21->mat;
      v51 = numClientBones;
      _RBX = v13;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rcx+1Ch]
          vmovss  dword ptr [rsp+128h+var_D8], xmm0
        }
        if ( (v80 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1332, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[skelBoneIndex].transWeight ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[skelBoneIndex].transWeight )") )
          __debugbreak();
        _RCX = v21->mat;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rcx+10h]
          vmovss  dword ptr [rsp+128h+var_D8], xmm0
        }
        if ( (v81 & 0x7F800000) == 2139095040 )
          goto LABEL_68;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rcx+14h]
          vmovss  dword ptr [rsp+128h+var_D8], xmm0
        }
        if ( (v82 & 0x7F800000) == 2139095040 )
          goto LABEL_68;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rcx+18h]
          vmovss  dword ptr [rsp+128h+var_D8], xmm0
        }
        if ( (v83 & 0x7F800000) == 2139095040 )
        {
LABEL_68:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1333, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[skelBoneIndex].trans[0] ) && !IS_NAN( curSkel->mat[skelBoneIndex].trans[1] ) && !IS_NAN( curSkel->mat[skelBoneIndex].trans[2] ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[skelBoneIndex].trans[0] ) && !IS_NAN( curSkel->mat[skelBoneIndex].trans[1] ) && !IS_NAN( curSkel->mat[skelBoneIndex].trans[2] )") )
            __debugbreak();
        }
        _RCX = v21->mat;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rcx]
          vmovss  dword ptr [rsp+128h+var_D8], xmm0
        }
        if ( (v84 & 0x7F800000) == 2139095040 )
          goto LABEL_69;
        __asm
        {
          vucomiss xmm6, dword ptr [rbx+rcx+4]
          vmovss  xmm0, dword ptr [rbx+rcx+8]
          vmovss  dword ptr [rsp+128h+var_D8], xmm0
        }
        if ( (v85 & 0x7F800000) == 2139095040 )
          goto LABEL_58;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rcx+0Ch]
          vmovss  dword ptr [rsp+128h+var_D8], xmm0
        }
        if ( (v86 & 0x7F800000) == 2139095040 )
LABEL_58:
          __asm { vmovaps xmm0, xmm6 }
        else
          __asm { vmovaps xmm0, xmm7 }
        __asm { vmovss  dword ptr [rsp+128h+var_D8], xmm0 }
        if ( (v87 & 0x7F800000) == 2139095040 )
        {
LABEL_69:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1334, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[skelBoneIndex].quat[0] ) && !IS_NAN( curSkel->mat[skelBoneIndex].quat[1] && !IS_NAN( curSkel->mat[skelBoneIndex].quat[2] ) && !IS_NAN( curSkel->mat[skelBoneIndex].quat[3] ) ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[skelBoneIndex].quat[0] ) && !IS_NAN( curSkel->mat[skelBoneIndex].quat[1] && !IS_NAN( curSkel->mat[skelBoneIndex].quat[2] ) && !IS_NAN( curSkel->mat[skelBoneIndex].quat[3] ) )") )
            __debugbreak();
        }
        v33->mat[_RBX].transWeight = v21->mat[_RBX].transWeight;
        _RCX = v21->mat;
        v63 = v33->mat;
        v63[_RBX].trans.v[0] = _RCX[_RBX].trans.v[0];
        v63[_RBX].trans.v[1] = _RCX[_RBX].trans.v[1];
        v63[_RBX].trans.v[2] = _RCX[_RBX].trans.v[2];
        v63[_RBX].quat.v[0] = _RCX[_RBX].quat.v[0];
        v63[_RBX].quat.v[1] = _RCX[_RBX].quat.v[1];
        v63[_RBX].quat.v[2] = _RCX[_RBX].quat.v[2];
        v63[_RBX].quat.v[3] = _RCX[_RBX].quat.v[3];
        ++_RBX;
        --v51;
      }
      while ( v51 );
    }
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(copiedBits, &v90);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(prevBits, curBits);
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
DObjVerifyNumBones
==============
*/
bool DObjVerifyNumBones(const DObj *obj)
{
  int v2; 
  bool HasClientFlag; 
  unsigned int v4; 
  int v5; 
  const XModel **models; 
  __int64 v7; 
  const XModel *v8; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 71, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !obj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 72, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat, "obj->numModels > 0") )
    __debugbreak();
  if ( !obj->numBones )
    return 0;
  v2 = 0;
  HasClientFlag = DObjHasClientFlag(obj);
  v4 = 0;
  v5 = 0;
  if ( obj->numModels )
  {
    models = obj->models;
    do
    {
      v7 = v4;
      if ( !models[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 86, ASSERT_TYPE_ASSERT, "(obj->models[modelIndex])", (const char *)&queryFormat, "obj->models[modelIndex]") )
        __debugbreak();
      models = obj->models;
      v8 = models[v7];
      v2 += v8->numBones;
      if ( HasClientFlag )
        v5 += v8->numClientBones;
      ++v4;
    }
    while ( v4 < obj->numModels );
  }
  return v2 == obj->numBones && (!HasClientFlag || v5 == obj->numClientBones);
}

/*
==============
XModelGetBoneIndex
==============
*/
__int64 XModelGetBoneIndex(const XModel *model, scr_string_t name, unsigned int offset, unsigned __int8 *index)
{
  unsigned int v8; 
  scr_string_t *boneNames; 

  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 970, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
    __debugbreak();
  v8 = 0;
  boneNames = model->boneNames;
  if ( !model->numBones )
    return 0i64;
  while ( name != *boneNames )
  {
    ++v8;
    ++boneNames;
    if ( v8 >= model->numBones )
      return 0i64;
  }
  *index = truncate_cast<unsigned char,unsigned int>(v8 + offset);
  return 1i64;
}

/*
==============
XModelGetClientBoneIndex
==============
*/
__int64 XModelGetClientBoneIndex(const XModel *model, scr_string_t name, unsigned int offset, unsigned __int16 *outIndex)
{
  unsigned int numClientBones; 
  const scr_string_t *v9; 
  unsigned int v10; 

  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 992, ASSERT_TYPE_ASSERT, "(outIndex)", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 143, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numClientBones = model->numClientBones;
  v9 = XModelClientOnlyBoneNames(model);
  v10 = 0;
  if ( !numClientBones )
    return 0i64;
  while ( name != *v9 )
  {
    ++v10;
    ++v9;
    if ( v10 >= numClientBones )
      return 0i64;
  }
  *outIndex = truncate_cast<unsigned short,unsigned int>(v10 + offset + 0x8000);
  return 1i64;
}

/*
==============
XModelGetNextChildBoneIndex
==============
*/
__int64 XModelGetNextChildBoneIndex(const XModel *model, unsigned __int8 parentIndex, unsigned int offset, unsigned __int8 *childIndex)
{
  unsigned int numBones; 
  unsigned int v9; 
  unsigned __int8 v10; 
  unsigned __int8 numRootBones; 
  unsigned __int64 v12; 
  unsigned __int8 v13; 
  int v14; 
  __int64 v16; 
  __int64 v17; 

  if ( !childIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1061, ASSERT_TYPE_ASSERT, "(childIndex)", (const char *)&queryFormat, "childIndex") )
    __debugbreak();
  if ( *childIndex < offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1062, ASSERT_TYPE_ASSERT, "(*childIndex >= offset)", (const char *)&queryFormat, "*childIndex >= offset") )
    __debugbreak();
  numBones = model->numBones;
  if ( parentIndex >= numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1066, ASSERT_TYPE_ASSERT, "(parentIndex < numBones)", (const char *)&queryFormat, "parentIndex < numBones") )
    __debugbreak();
  if ( numBones >= 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1067, ASSERT_TYPE_ASSERT, "(numBones < DOBJ_MAX_PARTS)", (const char *)&queryFormat, "numBones < DOBJ_MAX_PARTS") )
    __debugbreak();
  if ( *childIndex == 0xFE )
  {
    v9 = 0;
  }
  else
  {
    v9 = *childIndex - offset + 1;
    if ( v9 > numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1074, ASSERT_TYPE_ASSERT, "(localBoneIndex <= numBones)", (const char *)&queryFormat, "localBoneIndex <= numBones") )
      __debugbreak();
  }
  if ( v9 >= numBones )
    return 0i64;
  while ( 1 )
  {
    v10 = truncate_cast<unsigned char,unsigned int>(v9);
    if ( !model->numRootBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1038, ASSERT_TYPE_ASSERT, "(model->numRootBones > 0)", (const char *)&queryFormat, "model->numRootBones > 0") )
      __debugbreak();
    numRootBones = model->numRootBones;
    if ( parentIndex == v10 )
      break;
    while ( v10 >= numRootBones && v10 >= parentIndex )
    {
      v12 = v10 - (unsigned __int64)numRootBones;
      v13 = model->parentList[v12];
      if ( v10 < v13 )
      {
        LODWORD(v17) = v13;
        LODWORD(v16) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1050, ASSERT_TYPE_ASSERT, "( actualParentIndex ) >= ( model->parentList[actualParentIndex - numRootBones] )", "%s >= %s\n\t%u, %u", "actualParentIndex", "model->parentList[actualParentIndex - numRootBones]", v16, v17) )
          __debugbreak();
      }
      v10 -= model->parentList[v12];
      if ( parentIndex == v10 )
        goto LABEL_29;
    }
    if ( ++v9 >= numBones )
      return 0i64;
  }
LABEL_29:
  v14 = (unsigned __int8)(v9 + offset);
  *childIndex = v14;
  if ( v14 != v9 + offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1081, ASSERT_TYPE_ASSERT, "(*childIndex == offset + localBoneIndex)", (const char *)&queryFormat, "*childIndex == offset + localBoneIndex") )
    __debugbreak();
  return 1i64;
}

/*
==============
XModelHasParentBone
==============
*/
__int64 XModelHasParentBone(const XModel *model, unsigned __int8 goalParentIndex, unsigned int childIndex)
{
  unsigned __int8 v5; 
  unsigned __int8 numRootBones; 
  unsigned __int64 v7; 
  unsigned __int8 v8; 
  __int64 v10; 
  __int64 v11; 

  v5 = truncate_cast<unsigned char,unsigned int>(childIndex);
  if ( !model->numRootBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1038, ASSERT_TYPE_ASSERT, "(model->numRootBones > 0)", (const char *)&queryFormat, "model->numRootBones > 0") )
    __debugbreak();
  numRootBones = model->numRootBones;
  if ( goalParentIndex == v5 )
    return 1i64;
  while ( v5 >= numRootBones && v5 >= goalParentIndex )
  {
    v7 = v5 - (unsigned __int64)numRootBones;
    v8 = model->parentList[v7];
    if ( v5 < v8 )
    {
      LODWORD(v11) = v8;
      LODWORD(v10) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1050, ASSERT_TYPE_ASSERT, "( actualParentIndex ) >= ( model->parentList[actualParentIndex - numRootBones] )", "%s >= %s\n\t%u, %u", "actualParentIndex", "model->parentList[actualParentIndex - numRootBones]", v10, v11) )
        __debugbreak();
    }
    v5 -= model->parentList[v7];
    if ( goalParentIndex == v5 )
      return 1i64;
  }
  return 0i64;
}

