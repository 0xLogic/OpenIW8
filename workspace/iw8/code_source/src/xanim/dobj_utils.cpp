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
  const DObj *v2; 
  DSkel *p_skel; 
  const XModel *Model; 
  unsigned __int8 numRootBones; 
  unsigned int v7; 
  unsigned __int64 v8; 
  unsigned __int16 numClientBones; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  vector3 *v13; 
  const float4 *v14; 
  DObjAnimMat *v15; 
  __m128 quat; 
  unsigned int v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __int128 v25; 
  __m128 v29; 
  __m128 v36; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *p_anim; 
  DObjAnimMat *v52; 
  DObjAnimMat *v53; 
  char *v54; 
  unsigned __int64 v55; 
  __int64 p_trans; 
  unsigned int v57; 
  int v58; 
  __m128 v59; 
  __m128 v61; 
  __m128 v64; 
  __m128 v65; 
  __m128 v66; 
  __m128 v72; 
  __m128 v74; 
  unsigned int v75; 
  signed __int64 v76; 
  __int64 v77; 
  __int64 p_z; 
  __m128 v79; 
  __m128 v81; 
  __m128 v84; 
  __m128 v85; 
  __m128 v86; 
  __m128 v92; 
  __m128 v94; 
  __int64 v95; 
  _DWORD *v96; 
  unsigned __int16 v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __m128 *v101; 
  unsigned int v102; 
  unsigned int numBones; 
  __m128 *mat; 
  DObjAnimMat *v105; 
  DSkel *v108; 
  __m256i v109; 
  __int128 v110; 
  __m128 v111; 
  __m128 v112; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v113; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v114; 

  v2 = dstObj;
  p_skel = &dstObj->skel;
  v108 = &dstObj->skel;
  Model = DObjGetModel(dstObj, 0);
  numRootBones = Model->numRootBones;
  if ( numRootBones )
  {
    v7 = numRootBones;
  }
  else
  {
    if ( !Model->numClientBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 364, ASSERT_TYPE_ASSERT, "(model->numClientBones)", (const char *)&queryFormat, "model->numClientBones") )
      __debugbreak();
    v7 = 1;
  }
  numBones = v2->numBones;
  v8 = 0i64;
  if ( !DObjHasClientFlag(v2) || (numClientBones = v2->numClientBones, (v10 = numClientBones) == 0) )
    v10 = 0;
  v102 = v10 + v2->numBones;
  if ( (srcSkel->partBits.skel.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1426, ASSERT_TYPE_ASSERT, "(srcSkel->partBits.skel.testBit( ROOT_BONE_INDEX ))", (const char *)&queryFormat, "srcSkel->partBits.skel.testBit( ROOT_BONE_INDEX )") )
    __debugbreak();
  if ( (p_skel->partBits.anim.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1427, ASSERT_TYPE_ASSERT, "(dstSkel->partBits.anim.testBit( ROOT_BONE_INDEX ))", (const char *)&queryFormat, "dstSkel->partBits.anim.testBit( ROOT_BONE_INDEX )") )
    __debugbreak();
  v11 = 0;
  mat = (__m128 *)srcSkel->mat;
  v101 = (__m128 *)v2->skel.mat;
  v12 = 0i64;
  do
  {
    if ( v11 >= 0x100 )
    {
      LODWORD(v100) = 256;
      LODWORD(v99) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v99, v100) )
        __debugbreak();
    }
    v13 = (vector3 *)(v11 & 0x1F);
    v14 = (const float4 *)(0x80000000 >> (char)v13);
    if ( ((unsigned int)v14 & v2->skel.partBits.anim.array[v8 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1435, ASSERT_TYPE_ASSERT, "(dstSkel->partBits.anim.testBit( boneIndex ))", (const char *)&queryFormat, "dstSkel->partBits.anim.testBit( boneIndex )") )
      __debugbreak();
    v15 = v2->skel.mat;
    ++v11;
    ++v8;
    quat = (__m128)v15[v12].quat;
    _XMM0 = _mm128_mul_ps(quat, quat);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    v15[v12].quat = (vec4_t)_mm128_div_ps(quat, _mm_sqrt_ps(_XMM0));
    v15[v12++].transWeight = 2.0;
  }
  while ( v11 < v7 );
  v20 = numBones;
  v21 = *v101;
  v22 = _mm128_mul_ps(*mat, (__m128)_xmm);
  v23 = _mm_shuffle_ps(v21, v21, 255);
  HIDWORD(v110) = 0;
  v25 = v110;
  *(float *)&v25 = v101[1].m128_f32[0];
  _XMM10 = v25;
  __asm
  {
    vinsertps xmm10, xmm10, xmm1, 10h
    vinsertps xmm10, xmm10, xmm2, 20h ; ' '
  }
  v111 = _XMM10;
  v111.m128_i32[3] = 0;
  v29 = v111;
  v29.m128_f32[0] = mat[1].m128_f32[0];
  _XMM9 = v29;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [r12+14h], 10h
    vinsertps xmm9, xmm9, dword ptr [r12+18h], 20h ; ' '
  }
  _XMM1 = _mm128_mul_ps(*v101, v22);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
  }
  v36 = _mm_shuffle_ps(v22, v22, 255);
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v36, v23), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v21, v21, 201), _mm_shuffle_ps(v22, v22, 210)), _mm128_mul_ps(_mm_shuffle_ps(v21, v21, 210), _mm_shuffle_ps(v22, v22, 201))), _mm128_add_ps(_mm128_mul_ps(v21, v36), _mm128_mul_ps(v22, v23)));
  __asm { vblendps xmm3, xmm2, xmm0, 7 }
  _XMM1 = _mm128_mul_ps(_XMM3, _XMM3);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
  }
  v42 = _mm128_div_ps(_XMM3, _mm_sqrt_ps(_XMM0));
  v43 = _mm_shuffle_ps(v42, v42, 210);
  v44 = _mm_shuffle_ps(v42, v42, 201);
  v45 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v44), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v43));
  v46 = _mm128_add_ps(v45, v45);
  v47 = _mm128_mul_ps(_mm_shuffle_ps(v46, v46, 201), v43);
  v48 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v46, v46, 210), v44), v47);
  v49 = _mm128_sub_ps(_XMM10, _mm128_add_ps(v48, _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v42, v42, 255), v46), _XMM9)));
  Float4UnitQuatToAxis(v13, v14);
  *(__m128 *)&v114.array[4] = v48;
  *(__m128 *)v114.array = v42;
  v109 = (__m256i)v114;
  v50 = v47;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v114, &srcSkel->partBits.skel);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::nandAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v114, &v2->skel.partBits.skel);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v113, &srcSkel->partBits.anim);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::nandAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v113, &srcSkel->partBits.skel);
  p_anim = &v2->skel.partBits.anim;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::nandAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v113, &v2->skel.partBits.anim);
  v52 = srcSkel->mat;
  v53 = v2->skel.mat;
  v105 = v52;
  if ( v7 < numBones )
  {
    v54 = (char *)((char *)v52 - (char *)v53);
    v55 = v7;
    p_trans = (__int64)&v53[v7].trans;
    while ( 1 )
    {
      if ( v7 >= 0x100 )
      {
        LODWORD(v100) = 256;
        LODWORD(v99) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v99, v100) )
          __debugbreak();
      }
      v57 = 0x80000000 >> (v7 & 0x1F);
      if ( (v57 & v114.array[v55 >> 5]) != 0 )
      {
        v59 = *(__m128 *)&v54[p_trans - 16];
        v112.m128_i32[3] = 0;
        v61 = v112;
        v61.m128_f32[0] = *(float *)&v54[p_trans];
        _XMM9 = v61;
        __asm
        {
          vinsertps xmm9, xmm9, dword ptr [rbx+r13+4], 10h
          vinsertps xmm9, xmm9, dword ptr [rbx+r13+8], 20h ; ' '
        }
        v64 = _mm_shuffle_ps(v59, v59, 255);
        v65 = _mm_shuffle_ps(v42, v42, 255);
        v66 = _mm128_mul_ps(v42, v64);
        _XMM1 = _mm128_mul_ps(v42, v59);
        __asm
        {
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm3, xmm2, xmm2
        }
        _XMM6 = _mm128_sub_ps(_mm128_mul_ps(v64, v65), _XMM3);
        v72 = _mm128_add_ps(_mm128_mul_ps(*(__m128 *)v109.m256i_i8, _mm_shuffle_ps(_XMM9, _XMM9, 0)), _mm128_add_ps(_mm128_mul_ps(*(__m128 *)&v109.m256i_u64[2], _mm_shuffle_ps(_XMM9, _XMM9, 85)), _mm128_add_ps(_mm128_mul_ps(v50, _mm_shuffle_ps(_XMM9, _XMM9, 170)), v49)));
        _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v42, v42, 201), _mm_shuffle_ps(v59, v59, 210)), _mm128_mul_ps(_mm_shuffle_ps(v42, v42, 210), _mm_shuffle_ps(v59, v59, 201))), _mm128_add_ps(v66, _mm128_mul_ps(v59, v65)));
        __asm { vblendps xmm1, xmm6, xmm0, 7 }
        v74 = _mm_shuffle_ps(v72, _mm_shuffle_ps(v72, (__m128)_xmm, 250), 132);
        *(_OWORD *)(p_trans - 16) = _XMM1;
        v112 = _XMM9;
        *(__m128 *)p_trans = v74;
        if ( ((v74.m128_i32[0] & 0x7F800000) == 2139095040 || (*(_DWORD *)(p_trans + 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(p_trans + 8) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1510, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] )") )
          __debugbreak();
        if ( (*(_DWORD *)(p_trans - 16) & 0x7F800000) != 2139095040 && (*(_DWORD *)(p_trans - 12) & 0x7F800000) != 2139095040 && (*(_DWORD *)(p_trans - 8) & 0x7F800000) != 2139095040 && (*(_DWORD *)(p_trans - 4) & 0x7F800000) != 2139095040 )
          goto LABEL_56;
        v58 = 1511;
      }
      else
      {
        if ( v7 >= 0x100 )
        {
          LODWORD(v100) = 256;
          LODWORD(v99) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v99, v100) )
            __debugbreak();
        }
        if ( (v57 & v113.array[v55 >> 5]) == 0 )
          goto LABEL_56;
        *(__m256i *)(p_trans - 16) = *(__m256i *)&v54[p_trans - 16];
        if ( ((*(_DWORD *)p_trans & 0x7F800000) == 2139095040 || (*(_DWORD *)(p_trans + 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(p_trans + 8) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1494, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] )") )
          __debugbreak();
        if ( (*(_DWORD *)(p_trans - 16) & 0x7F800000) != 2139095040 && (*(_DWORD *)(p_trans - 12) & 0x7F800000) != 2139095040 && (*(_DWORD *)(p_trans - 8) & 0x7F800000) != 2139095040 && (*(_DWORD *)(p_trans - 4) & 0x7F800000) != 2139095040 )
          goto LABEL_56;
        v58 = 1495;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", v58, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] )") )
        __debugbreak();
LABEL_56:
      v20 = numBones;
      ++v7;
      ++v55;
      p_trans += 32i64;
      if ( v7 >= numBones )
      {
        v2 = dstObj;
        v52 = v105;
        p_anim = &v108->partBits.anim;
        break;
      }
    }
  }
  if ( (v114.array[7] & 2) != 0 )
  {
    v75 = v102;
    if ( v20 >= v102 )
      goto LABEL_91;
    v76 = (char *)v53 - (char *)v52;
    v77 = v102 - v20;
    p_z = (__int64)&v52[v20].trans.z;
    do
    {
      v79 = *(__m128 *)(p_z - 24);
      v112.m128_i32[3] = 0;
      v81 = v112;
      v81.m128_f32[0] = *(float *)(p_z - 8);
      _XMM9 = v81;
      __asm
      {
        vinsertps xmm9, xmm9, dword ptr [rbx-4], 10h
        vinsertps xmm9, xmm9, dword ptr [rbx], 20h ; ' '
      }
      v84 = _mm_shuffle_ps(v79, v79, 255);
      v85 = _mm_shuffle_ps(v42, v42, 255);
      v86 = _mm128_mul_ps(v42, v84);
      _XMM1 = _mm128_mul_ps(v42, v79);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm3, xmm2, xmm2
      }
      _XMM6 = _mm128_sub_ps(_mm128_mul_ps(v84, v85), _XMM3);
      v92 = _mm128_add_ps(_mm128_mul_ps(*(__m128 *)v109.m256i_i8, _mm_shuffle_ps(_XMM9, _XMM9, 0)), _mm128_add_ps(_mm128_mul_ps(*(__m128 *)&v109.m256i_u64[2], _mm_shuffle_ps(_XMM9, _XMM9, 85)), _mm128_add_ps(_mm128_mul_ps(v50, _mm_shuffle_ps(_XMM9, _XMM9, 170)), v49)));
      _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v42, v42, 201), _mm_shuffle_ps(v79, v79, 210)), _mm128_mul_ps(_mm_shuffle_ps(v42, v42, 210), _mm_shuffle_ps(v79, v79, 201))), _mm128_add_ps(v86, _mm128_mul_ps(v79, v85)));
      __asm { vblendps xmm1, xmm6, xmm0, 7 }
      *(_OWORD *)(p_z + v76 - 24) = _XMM1;
      v94 = _mm_shuffle_ps(v92, _mm_shuffle_ps(v92, (__m128)_xmm, 250), 132);
      v112 = _XMM9;
      *(__m128 *)(p_z + v76 - 8) = v94;
      if ( ((v94.m128_i32[0] & 0x7F800000) == 2139095040 || (*(_DWORD *)(v76 + p_z - 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v76 + p_z) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1537, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] )") )
        __debugbreak();
      if ( ((*(_DWORD *)(p_z + v76 - 24) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v76 + p_z - 20) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v76 + p_z - 16) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v76 + p_z - 12) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1538, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] )") )
        __debugbreak();
      p_z += 32i64;
      --v77;
    }
    while ( v77 );
LABEL_89:
    v2 = dstObj;
    goto LABEL_90;
  }
  if ( (v113.array[7] & 2) != 0 )
  {
    v75 = v102;
    if ( v20 >= v102 )
      goto LABEL_91;
    v95 = v102 - v20;
    v96 = (_DWORD *)&v53[v20].trans.v[1];
    do
    {
      *(__m256i *)(v96 - 5) = *(__m256i *)((char *)v96 + (char *)v105 - (char *)v53 - 20);
      if ( ((*(v96 - 1) & 0x7F800000) == 2139095040 || (*v96 & 0x7F800000) == 2139095040 || (v96[1] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1551, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->trans )[0] ) && !IS_NAN( ( dstBoneMat->trans )[1] ) && !IS_NAN( ( dstBoneMat->trans )[2] )") )
        __debugbreak();
      if ( ((*(v96 - 5) & 0x7F800000) == 2139095040 || (*(v96 - 4) & 0x7F800000) == 2139095040 || (*(v96 - 3) & 0x7F800000) == 2139095040 || (*(v96 - 2) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1552, ASSERT_TYPE_SANITY, "( !IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( dstBoneMat->quat )[0] ) && !IS_NAN( ( dstBoneMat->quat )[1] ) && !IS_NAN( ( dstBoneMat->quat )[2] ) && !IS_NAN( ( dstBoneMat->quat )[3] )") )
        __debugbreak();
      v96 += 8;
      --v95;
    }
    while ( v95 );
    goto LABEL_89;
  }
LABEL_90:
  v75 = v102;
LABEL_91:
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(p_anim, &srcSkel->partBits.anim);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v2->skel.partBits.skel, &srcSkel->partBits.skel);
  if ( srcSkel->partBits.blendShapesCalculated )
  {
    v2->skel.partBits.blendShapesCalculated = 1;
    if ( DObjHasClientFlag(v2) && (v97 = v2->numClientBones) != 0 )
      v98 = v97;
    else
      v98 = 0i64;
    memcpy_0(&v2->skel.mat[v98 + v2->numBones], &srcSkel->mat[v75], 4i64 * v2->blendShapeTargetCount);
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
  unsigned int v4; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1164, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1165, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  v4 = 0;
  _RSI = &obj->hidePartBits;
  do
  {
    __asm { vlddqu  xmm6, xmmword ptr [rsi] }
    *(_OWORD *)partBits->array = _XMM6;
    partBits = (DObjPartBitsAligned *)((char *)partBits + 16);
    ++v4;
    _RSI = (DObjPartBits *)((char *)_RSI + 16);
  }
  while ( v4 < 2 );
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
  if ( !outDObjModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1179, ASSERT_TYPE_ASSERT, "(outDObjModel)", (const char *)&queryFormat, "outDObjModel") )
    __debugbreak();
  outDObjModel->model = model;
  outDObjModel->boneName = boneName;
  outDObjModel->parentSlot = -1;
  *(_QWORD *)outDObjModel->offsets.v = 0i64;
  outDObjModel->offsets.v[2] = 0.0;
  outDObjModel->ignoreCollision = ignoreCollision;
  outDObjModel->stowedWeapon = stowedWeapon;
  outDObjModel->quat = quat_identity;
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
  if ( !outDObjModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1179, ASSERT_TYPE_ASSERT, "(outDObjModel)", (const char *)&queryFormat, "outDObjModel") )
    __debugbreak();
  outDObjModel->model = model;
  outDObjModel->boneName = boneName;
  outDObjModel->parentSlot = -1;
  *(_QWORD *)outDObjModel->offsets.v = 0i64;
  outDObjModel->offsets.v[2] = 0.0;
  outDObjModel->ignoreCollision = ignoreCollision;
  outDObjModel->stowedWeapon = stowedWeapon;
  outDObjModel->quat = quat_identity;
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
  outDObjModel->offsets = *offsets;
  outDObjModel->quat = *quat;
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
void DObjRecordSkelOnSkinning(const DObj *obj, float radius)
{
  DObjPartBits *SkelRecord; 
  DObjPartBits *v4; 
  unsigned int v5; 

  if ( !R_Screenshot_InProcess() )
  {
    SkelRecord = (DObjPartBits *)Com_GetSkelRecord(obj);
    v4 = SkelRecord;
    if ( SkelRecord )
    {
      *SkelRecord = obj->skel.partBits.anim;
      SkelRecord[1] = obj->skel.partBits.control;
      SkelRecord[2] = obj->skel.partBits.worldCtrl;
      SkelRecord[3] = obj->skel.partBits.skel;
      *(_OWORD *)SkelRecord[4].array = *(_OWORD *)&obj->skel.partBits.animCalculated;
      *(float *)&SkelRecord[4].array[6] = radius;
      SkelRecord[4].array[4] = obj->numBones;
      if ( DObjHasClientFlag(obj) && (LOWORD(v5) = obj->numClientBones, (_WORD)v5) )
        v5 = (unsigned __int16)v5;
      else
        v5 = 0;
      v4[4].array[5] = v5;
    }
  }
}

/*
==============
DObjSetAngles
==============
*/
void DObjSetAngles(DObjAnimMat *rotTrans, const vec3_t *angles)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float s; 
  float c; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  FastSinCos(0.0087266462 * angles->v[1], &s, &c);
  FastSinCos(0.0087266462 * angles->v[0], &v12, &v13);
  FastSinCos(0.0087266462 * angles->v[2], &v14, &v15);
  v4 = v14;
  v5 = v15;
  LODWORD(v6) = COERCE_UNSIGNED_INT(s * v12) ^ _xmm;
  v7 = c * v12;
  v8 = c * v13;
  v9 = s * v13;
  rotTrans->quat.v[0] = (float)((float)(c * v13) * v14) + (float)(v6 * v15);
  rotTrans->quat.v[1] = (float)(v9 * v4) + (float)(v7 * v5);
  rotTrans->quat.v[2] = (float)(v9 * v5) - (float)(v7 * v4);
  rotTrans->quat.v[3] = (float)(v8 * v5) - (float)(v6 * v4);
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
  __int64 v4; 
  DObjAnimMat *mat; 
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float s; 
  float c; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  v4 = boneIndex;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 34, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  mat = obj->skel.mat;
  if ( mat )
  {
    v9 = v4;
    if ( angles )
    {
      FastSinCos(0.0087266462 * angles->v[1], &s, &c);
      FastSinCos(0.0087266462 * angles->v[0], &v17, &v18);
      FastSinCos(0.0087266462 * angles->v[2], &v19, &v20);
      LODWORD(v10) = COERCE_UNSIGNED_INT(s * v17) ^ _xmm;
      v11 = (float)((float)(c * v18) * v20) - (float)(v10 * v19);
      v12 = (float)((float)(s * v18) * v20) - (float)((float)(c * v17) * v19);
      v13 = (float)((float)(s * v18) * v19) + (float)((float)(c * v17) * v20);
      v14 = (float)((float)(c * v18) * v19) + (float)(v10 * v20);
    }
    else
    {
      v11 = FLOAT_1_0;
      v12 = 0.0;
      v13 = 0.0;
      v14 = 0.0;
    }
    mat[v9].quat.v[0] = v14;
    mat[v9].quat.v[1] = v13;
    mat[v9].quat.v[2] = v12;
    mat[v9].quat.v[3] = v11;
    mat[v9].transWeight = 0.0;
    mat[v9].trans.v[0] = trans->v[0];
    mat[v9].trans.v[1] = trans->v[1];
    mat[v9].trans.v[2] = trans->v[2];
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
  unsigned int v5; 

  _RBP = partBits;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 858, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 859, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  _RSI = &obj->skel;
  if ( obj == (const DObj *)-56i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 862, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  v5 = 0;
  while ( 1 )
  {
    _RDI = 2i64 * v5;
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rbp+rdi*8+0]
      vlddqu  xmm0, xmmword ptr [rsi+rdi*8+60h]
      vptest  xmm0, xmm6
    }
    if ( !_CF )
      break;
    if ( ++v5 >= 2 )
      return 1i64;
  }
  return 0i64;
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
  DObjPartBits *SkelRecord; 
  unsigned __int16 numClientBones; 
  unsigned int v19; 
  int v20; 
  unsigned int AllocSkelSize; 
  DObjAnimMat *v22; 
  signed int v23; 
  scr_string_t v24; 
  unsigned int v25; 
  const XModel **v26; 
  const XModel *v27; 
  const scr_string_t *v28; 
  scr_string_t v29; 
  bool v30; 
  unsigned int v31; 
  const XModel **v32; 
  const scr_string_t *v33; 
  scr_string_t v34; 
  bool v35; 
  __int64 v36; 
  __int64 v37; 
  const XModel *v38; 
  const scr_string_t *v40; 
  const XModel **v41; 

  v41 = dstModels;
  v40 = dstPartNames;
  v12 = dstModels;
  v13 = dstPartNames;
  if ( !R_Screenshot_InProcess() )
  {
    if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1717, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
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
        SkelRecord = (DObjPartBits *)Com_GetSkelRecord(obj);
        SkelRecord[4].array[4] = obj->numBones;
        if ( DObjHasClientFlag(obj) && (numClientBones = obj->numClientBones) != 0 )
          v19 = numClientBones;
        else
          v19 = 0;
        SkelRecord[4].array[5] = v19;
        if ( skelRecord0 )
          v20 = *((_DWORD *)skelRecord0 + 33);
        else
          v20 = *((_DWORD *)skelRecord1 + 33);
        if ( !obj->skel.mat )
        {
          DObjLock(obj);
          AllocSkelSize = DObjGetAllocSkelSize(obj);
          v22 = (DObjAnimMat *)CL_Pose_AllocSkelMemory(obj, AllocSkelSize);
          if ( v22 )
          {
            obj->skel.mat = v22;
            DObjCreateSkel(obj, (char *)v22, v20);
          }
          DObjUnlock(obj);
        }
        *SkelRecord = obj->skel.partBits.anim;
        SkelRecord[1] = obj->skel.partBits.control;
        SkelRecord[2] = obj->skel.partBits.worldCtrl;
        SkelRecord[3] = obj->skel.partBits.skel;
        *(_OWORD *)SkelRecord[4].array = *(_OWORD *)&obj->skel.partBits.animCalculated;
        SkelRecord[4].array[1] = v20;
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(SkelRecord);
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(SkelRecord + 1, &obj->skel.partBits.control);
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(SkelRecord + 2, &obj->skel.partBits.worldCtrl);
        bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(SkelRecord + 3);
        v23 = 0;
        if ( (int)SkelRecord[4].array[4] > 0 )
        {
          while ( 1 )
          {
            v24 = *v13;
            v38 = *v12;
            if ( v15 )
            {
              if ( *((_QWORD *)v15 + 17) )
              {
                v25 = 0;
                if ( (int)v15[36] > 0 )
                {
                  v26 = srcModels0;
                  v27 = *v12;
                  v28 = srcPartNames0;
                  while ( 1 )
                  {
                    if ( v25 >= 0x100 )
                    {
                      LODWORD(v37) = 256;
                      LODWORD(v36) = v25;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v36, v37) )
                        __debugbreak();
                    }
                    if ( ((0x80000000 >> (v25 & 0x1F)) & srcParts0->array[(unsigned __int64)v25 >> 5]) == 0 )
                      goto LABEL_48;
                    v29 = *v28;
                    if ( !matchModels )
                      break;
                    if ( v24 == v29 )
                    {
                      v30 = v27 == *v26;
                      goto LABEL_46;
                    }
LABEL_48:
                    ++v25;
                    ++v28;
                    ++v26;
                    if ( (signed int)v25 >= v15[36] )
                    {
                      v16 = (int *)skelRecord1;
                      v12 = v41;
                      goto LABEL_50;
                    }
                  }
                  v30 = v24 == v29;
LABEL_46:
                  if ( v30 )
                  {
                    bitarray_base<bitarray<256>>::setBit(SkelRecord, v23);
                    bitarray_base<bitarray<256>>::setBit(SkelRecord + 3, v23);
                    *(__m256i *)(*(_QWORD *)&SkelRecord[4].array[2] + 32i64 * v23) = *(__m256i *)(*((_QWORD *)v15 + 17) + 32i64 * (int)v25);
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
                v31 = 0;
                if ( v16[36] > 0 )
                  break;
              }
            }
LABEL_66:
            v13 = v40 + 1;
            ++v12;
            ++v23;
            ++v40;
            v41 = v12;
            if ( v23 >= (signed int)SkelRecord[4].array[4] )
              return;
          }
          v32 = srcModels1;
          v33 = srcPartNames1;
          while ( 1 )
          {
            if ( v31 >= 0x100 )
            {
              LODWORD(v37) = 256;
              LODWORD(v36) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v36, v37) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v31 & 0x1F)) & srcParts1->array[(unsigned __int64)v31 >> 5]) == 0 )
              goto LABEL_64;
            v34 = *v33;
            if ( !matchModels )
              break;
            if ( v24 == v34 )
            {
              v35 = v38 == *v32;
              goto LABEL_62;
            }
LABEL_64:
            ++v31;
            ++v33;
            ++v32;
            if ( (int)v31 >= v16[36] )
            {
              v15 = skelRecord0;
              v12 = v41;
              goto LABEL_66;
            }
          }
          v35 = v24 == v34;
LABEL_62:
          if ( v35 )
          {
            bitarray_base<bitarray<256>>::setBit(SkelRecord, v23);
            bitarray_base<bitarray<256>>::setBit(SkelRecord + 3, v23);
            *(__m256i *)(*(_QWORD *)&SkelRecord[4].array[2] + 32i64 * v23) = *(__m256i *)(*((_QWORD *)v16 + 17) + 32i64 * (int)v31);
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
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned int i; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v19; 
  unsigned int j; 
  unsigned int k; 
  unsigned int v27; 
  DSkel *v28; 
  unsigned int v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  DObjAnimMat *mat; 
  DObjAnimMat *v33; 
  float v34; 
  DObjAnimMat *v35; 
  DObjAnimMat *v36; 
  DObjAnimMat *v37; 
  __int64 v38; 
  unsigned __int64 v39; 
  DObjAnimMat *v40; 
  DObjAnimMat *v41; 
  float v42; 
  DObjAnimMat *v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v51; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v52; 
  __int128 v53; 

  v53 = _XMM7;
  v8 = &v51;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = numBones;
  __asm { vpxor   xmm7, xmm7, xmm7 }
  do
  {
    *(_OWORD *)v8->array = _XMM7;
    v8 = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)v8 + 16);
    ++v10;
  }
  while ( v10 < 2 );
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v51, curBits);
  _RBP = (char *)prevBits - (char *)&v51;
  _RDI = &v51;
  for ( i = 0; i < 2; ++i )
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rdi+rbp]
      vlddqu  xmm0, xmmword ptr [rdi]
      vpxor   xmm6, xmm0, xmm6
    }
    *(_OWORD *)_RDI->array = _XMM6;
    _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::nandAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v51, copiedBits);
  v19 = &v52;
  for ( j = 0; j < 2; ++j )
  {
    *(_OWORD *)v19->array = _XMM7;
    v19 = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)v19 + 16);
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v52, &v51);
  _RBP = (char *)curBits - (char *)&v52;
  _RDI = &v52;
  for ( k = 0; k < 2; ++k )
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rdi+rbp]
      vlddqu  xmm0, xmmword ptr [rdi]
      vpand   xmm6, xmm0, xmm6
    }
    *(_OWORD *)_RDI->array = _XMM6;
    _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
  }
  v27 = v52.array[0];
LABEL_10:
  v28 = savedSkel;
  while ( v27 )
  {
LABEL_14:
    v29 = __lzcnt(v27);
    v30 = v29 + 32 * (_DWORD)v9;
    if ( v29 >= 0x20 )
    {
      LODWORD(v45) = 32;
      LODWORD(v44) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v44, v45) )
        __debugbreak();
    }
    if ( (v27 & (0x80000000 >> v29)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v27 &= ~(0x80000000 >> v29);
    if ( (unsigned int)v30 >= (unsigned int)v11 )
    {
      if ( (unsigned int)v30 >= 0x100 )
      {
        LODWORD(v47) = 256;
        LODWORD(v46) = v29 + 32 * v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v46, v47) )
          __debugbreak();
      }
      v51.array[(unsigned __int64)(v29 + 32 * (_DWORD)v9) >> 5] &= ~(0x80000000 >> ((v29 + 32 * v9) & 0x1F));
      goto LABEL_10;
    }
    v31 = v30;
    if ( (LODWORD(curSkel->mat[v31].transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1317, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[it.index].transWeight ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[it.index].transWeight )") )
      __debugbreak();
    mat = curSkel->mat;
    if ( ((LODWORD(mat[v31].trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v31].trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v31].trans.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1318, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[it.index].trans[0] ) && !IS_NAN( curSkel->mat[it.index].trans[1] ) && !IS_NAN( curSkel->mat[it.index].trans[2] ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[it.index].trans[0] ) && !IS_NAN( curSkel->mat[it.index].trans[1] ) && !IS_NAN( curSkel->mat[it.index].trans[2] )") )
      __debugbreak();
    v33 = curSkel->mat;
    if ( (LODWORD(v33[v31].quat.v[0]) & 0x7F800000) == 2139095040 || (v33[v31].quat.v[1] == 0.0 || (LODWORD(v33[v31].quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v33[v31].quat.v[3]) & 0x7F800000) == 2139095040 ? (v34 = 0.0) : (v34 = FLOAT_1_0), (LODWORD(v34) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1319, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[it.index].quat[0] ) && !IS_NAN( curSkel->mat[it.index].quat[1] && !IS_NAN( curSkel->mat[it.index].quat[2] ) && !IS_NAN( curSkel->mat[it.index].quat[3] ) ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[it.index].quat[0] ) && !IS_NAN( curSkel->mat[it.index].quat[1] && !IS_NAN( curSkel->mat[it.index].quat[2] ) && !IS_NAN( curSkel->mat[it.index].quat[3] ) )") )
        __debugbreak();
    }
    v28 = savedSkel;
    savedSkel->mat[v31].transWeight = curSkel->mat[v31].transWeight;
    v35 = curSkel->mat;
    v36 = savedSkel->mat;
    v36[v31].trans.v[0] = v35[v31].trans.v[0];
    v36[v31].trans.v[1] = v35[v31].trans.v[1];
    v36[v31].trans.v[2] = v35[v31].trans.v[2];
    v36[v31].quat.v[0] = v35[v31].quat.v[0];
    v36[v31].quat.v[1] = v35[v31].quat.v[1];
    v36[v31].quat.v[2] = v35[v31].quat.v[2];
    v36[v31].quat.v[3] = v35[v31].quat.v[3];
  }
  while ( 1 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 8 )
      break;
    v27 = v52.array[v9];
    if ( v27 )
      goto LABEL_14;
  }
  if ( (v52.array[7] & 2) != 0 )
  {
    v51.array[7] |= 2u;
    if ( (unsigned int)v11 < (unsigned int)v11 + numClientBones )
    {
      v37 = curSkel->mat;
      v38 = numClientBones;
      v39 = v11;
      do
      {
        if ( (LODWORD(v37[v39].transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1332, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[skelBoneIndex].transWeight ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[skelBoneIndex].transWeight )") )
          __debugbreak();
        v40 = curSkel->mat;
        if ( ((LODWORD(v40[v39].trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v40[v39].trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v40[v39].trans.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1333, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[skelBoneIndex].trans[0] ) && !IS_NAN( curSkel->mat[skelBoneIndex].trans[1] ) && !IS_NAN( curSkel->mat[skelBoneIndex].trans[2] ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[skelBoneIndex].trans[0] ) && !IS_NAN( curSkel->mat[skelBoneIndex].trans[1] ) && !IS_NAN( curSkel->mat[skelBoneIndex].trans[2] )") )
          __debugbreak();
        v41 = curSkel->mat;
        if ( (LODWORD(v41[v39].quat.v[0]) & 0x7F800000) == 2139095040 || (v41[v39].quat.v[1] == 0.0 || (LODWORD(v41[v39].quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v41[v39].quat.v[3]) & 0x7F800000) == 2139095040 ? (v42 = 0.0) : (v42 = FLOAT_1_0), (LODWORD(v42) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_utils.cpp", 1334, ASSERT_TYPE_ASSERT, "(!IS_NAN( curSkel->mat[skelBoneIndex].quat[0] ) && !IS_NAN( curSkel->mat[skelBoneIndex].quat[1] && !IS_NAN( curSkel->mat[skelBoneIndex].quat[2] ) && !IS_NAN( curSkel->mat[skelBoneIndex].quat[3] ) ))", (const char *)&queryFormat, "!IS_NAN( curSkel->mat[skelBoneIndex].quat[0] ) && !IS_NAN( curSkel->mat[skelBoneIndex].quat[1] && !IS_NAN( curSkel->mat[skelBoneIndex].quat[2] ) && !IS_NAN( curSkel->mat[skelBoneIndex].quat[3] ) )") )
            __debugbreak();
        }
        v28->mat[v39].transWeight = curSkel->mat[v39].transWeight;
        v37 = curSkel->mat;
        v43 = v28->mat;
        v43[v39].trans.v[0] = v37[v39].trans.v[0];
        v43[v39].trans.v[1] = v37[v39].trans.v[1];
        v43[v39].trans.v[2] = v37[v39].trans.v[2];
        v43[v39].quat.v[0] = v37[v39].quat.v[0];
        v43[v39].quat.v[1] = v37[v39].quat.v[1];
        v43[v39].quat.v[2] = v37[v39].quat.v[2];
        v43[v39].quat.v[3] = v37[v39].quat.v[3];
        ++v39;
        --v38;
      }
      while ( v38 );
    }
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(copiedBits, &v51);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(prevBits, curBits);
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

