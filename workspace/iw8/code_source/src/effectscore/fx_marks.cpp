/*
==============
FX_MarkEntUpdateEnd
==============
*/

void __fastcall FX_MarkEntUpdateEnd(FxMarkDObjUpdateContext *context, LocalClientNum_t localClientNum, int entnum, DObj *obj, bool isBrush, unsigned __int16 brushIndex, const bool forceTransferMarks)
{
  ?FX_MarkEntUpdateEnd@@YAXPEAUFxMarkDObjUpdateContext@@W4LocalClientNum_t@@HPEAUDObj@@_NG_N@Z(context, localClientNum, entnum, obj, isBrush, brushIndex, forceTransferMarks);
}

/*
==============
FX_GenerateMarkVertsForGlassCmd
==============
*/

void __fastcall FX_GenerateMarkVertsForGlassCmd(const void *const cmdInfo)
{
  ?FX_GenerateMarkVertsForGlassCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
FX_GetDynEntModelListHead
==============
*/

unsigned __int16 __fastcall FX_GetDynEntModelListHead(FxMarksSystem *marksSystem, const unsigned int dynEntId)
{
  return ?FX_GetDynEntModelListHead@@YAGPEAUFxMarksSystem@@I@Z(marksSystem, dynEntId);
}

/*
==============
FX_GenerateMarkVertsForViewmodelDObj
==============
*/

void __fastcall FX_GenerateMarkVertsForViewmodelDObj(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int viewmodelClientIndex, unsigned int *indexCount, const DObj *remoteDobj)
{
  ?FX_GenerateMarkVertsForViewmodelDObj@@YAXPEAUFxMarksSystem@@PEBUFxCamera@@W4LocalClientNum_t@@HPEAIPEBUDObj@@@Z(marksSystem, camera, localClientNum, viewmodelClientIndex, indexCount, remoteDobj);
}

/*
==============
FX_MarkEntUpdateBegin
==============
*/

void __fastcall FX_MarkEntUpdateBegin(FxMarkDObjUpdateContext *context, DObj *obj, bool isBrush, unsigned __int16 brushIndex)
{
  ?FX_MarkEntUpdateBegin@@YAXPEAUFxMarkDObjUpdateContext@@PEAUDObj@@_NG@Z(context, obj, isBrush, brushIndex);
}

/*
==============
FX_InitDynEntMarks
==============
*/

void __fastcall FX_InitDynEntMarks(DynEntityClient *dynEntClient)
{
  ?FX_InitDynEntMarks@@YAXPEAUDynEntityClient@@@Z(dynEntClient);
}

/*
==============
FX_GetDynEntModelListHead
==============
*/

unsigned __int16 __fastcall FX_GetDynEntModelListHead(FxMarksSystem *marksSystem, const GfxMarkContext *context)
{
  return ?FX_GetDynEntModelListHead@@YAGPEAUFxMarksSystem@@AEBUGfxMarkContext@@@Z(marksSystem, context);
}

/*
==============
FX_GetDynEntModelMarkFromIterator
==============
*/

bool __fastcall FX_GetDynEntModelMarkFromIterator(FxDynEntModelMarkIterator *markIterator, FxMarkResult *markResult)
{
  return ?FX_GetDynEntModelMarkFromIterator@@YA_NPEAUFxDynEntModelMarkIterator@@AEAUFxMarkResult@@@Z(markIterator, markResult);
}

/*
==============
FX_DeriveMarkSize
==============
*/

vec4_t *__fastcall FX_DeriveMarkSize(vec4_t *result, const vec4_t *markSizeOrig)
{
  return ?FX_DeriveMarkSize@@YA?ATvec4_t@@AEBT1@@Z(result, markSizeOrig);
}

/*
==============
FX_GetDobjMarkFromIterator
==============
*/

bool __fastcall FX_GetDobjMarkFromIterator(FxDobjMarkIterator *markIterator, FxMarkResult *markResult)
{
  return ?FX_GetDobjMarkFromIterator@@YA_NPEAUFxDobjMarkIterator@@AEAUFxMarkResult@@@Z(markIterator, markResult);
}

/*
==============
FX_MarksCacheWorldCells
==============
*/

void __fastcall FX_MarksCacheWorldCells(GfxWorldDraw *worldDraw)
{
  ?FX_MarksCacheWorldCells@@YAXPEAUGfxWorldDraw@@@Z(worldDraw);
}

/*
==============
FX_FreeRewoundMarks
==============
*/

void __fastcall FX_FreeRewoundMarks(FxMarksSystem *marksSystem, int cutoffTime)
{
  ?FX_FreeRewoundMarks@@YAXPEAUFxMarksSystem@@H@Z(marksSystem, cutoffTime);
}

/*
==============
FX_GenerateMarkVertsForEntBrush
==============
*/

void __fastcall FX_GenerateMarkVertsForEntBrush(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int entId, unsigned int *indexCount, const GfxPlacement *placement)
{
  ?FX_GenerateMarkVertsForEntBrush@@YAXPEAUFxMarksSystem@@PEBUFxCamera@@W4LocalClientNum_t@@HPEAIPEBUGfxPlacement@@@Z(marksSystem, camera, localClientNum, entId, indexCount, placement);
}

/*
==============
FX_GetModelMarkFromIterator
==============
*/

bool __fastcall FX_GetModelMarkFromIterator(FxModelMarkIterator *markIterator, FxMarkResult *markResult)
{
  return ?FX_GetModelMarkFromIterator@@YA_NPEAUFxModelMarkIterator@@AEAUFxMarkResult@@@Z(markIterator, markResult);
}

/*
==============
FX_GetMarksSystem
==============
*/

FxMarksSystem *__fastcall FX_GetMarksSystem(LocalClientNum_t localClientNum)
{
  return ?FX_GetMarksSystem@@YAPEAUFxMarksSystem@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_MarkVfxName
==============
*/

const char *__fastcall FX_MarkVfxName(LocalClientNum_t clientIndex, unsigned __int16 markHandle)
{
  return ?FX_MarkVfxName@@YAPEBDW4LocalClientNum_t@@G@Z(clientIndex, markHandle);
}

/*
==============
FX_ClearViewmodelMarks
==============
*/

void __fastcall FX_ClearViewmodelMarks(LocalClientNum_t localClientNum)
{
  ?FX_ClearViewmodelMarks@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_StopImpactMark
==============
*/

void __fastcall FX_StopImpactMark(LocalClientNum_t localClientNum, unsigned int handle)
{
  ?FX_StopImpactMark@@YAXW4LocalClientNum_t@@I@Z(localClientNum, handle);
}

/*
==============
FX_InitMarksSystem
==============
*/

void __fastcall FX_InitMarksSystem(LocalClientNum_t localClientNum)
{
  ?FX_InitMarksSystem@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_ClearMarks
==============
*/

void __fastcall FX_ClearMarks(LocalClientNum_t localClientNum)
{
  ?FX_ClearMarks@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_EntHasMarks
==============
*/

unsigned int __fastcall FX_EntHasMarks(LocalClientNum_t clientIndex, unsigned int entNum, unsigned int modelIndex)
{
  return ?FX_EntHasMarks@@YAIW4LocalClientNum_t@@II@Z(clientIndex, entNum, modelIndex);
}

/*
==============
FX_ReleaseDynEntMarks
==============
*/

void __fastcall FX_ReleaseDynEntMarks(LocalClientNum_t localClientNum, DynEntityClient *dynEntClient)
{
  ?FX_ReleaseDynEntMarks@@YAXW4LocalClientNum_t@@PEAUDynEntityClient@@@Z(localClientNum, dynEntClient);
}

/*
==============
FX_DynEntModelHasMarks
==============
*/

unsigned int __fastcall FX_DynEntModelHasMarks(const DynEntityClient *dynEntClient)
{
  return ?FX_DynEntModelHasMarks@@YAIPEBUDynEntityClient@@@Z(dynEntClient);
}

/*
==============
FX_GenerateMarkVertsForEntDObj
==============
*/

void __fastcall FX_GenerateMarkVertsForEntDObj(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int entId, unsigned int *indexCount, const DObj *remoteDobj)
{
  ?FX_GenerateMarkVertsForEntDObj@@YAXPEAUFxMarksSystem@@PEBUFxCamera@@W4LocalClientNum_t@@HPEAIPEBUDObj@@@Z(marksSystem, camera, localClientNum, entId, indexCount, remoteDobj);
}

/*
==============
FX_ClearEntImpactMarks
==============
*/

void __fastcall FX_ClearEntImpactMarks(LocalClientNum_t localClientNum)
{
  ?FX_ClearEntImpactMarks@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_TransferDObjMarksFromEntToEnt
==============
*/

void __fastcall FX_TransferDObjMarksFromEntToEnt(LocalClientNum_t localClientNum, int entnumFrom, DObj *objFrom, int entnumTo, const XModel *modelTo)
{
  ?FX_TransferDObjMarksFromEntToEnt@@YAXW4LocalClientNum_t@@HPEAUDObj@@HPEBUXModel@@@Z(localClientNum, entnumFrom, objFrom, entnumTo, modelTo);
}

/*
==============
FX_BeginDynEntModelMarkIterator
==============
*/

void __fastcall FX_BeginDynEntModelMarkIterator(FxDynEntModelMarkIterator *markIterator, LocalClientNum_t clientIndex, unsigned int dynEntityId, unsigned __int16 dynEntClientId, const vec3_t *viewOffset)
{
  ?FX_BeginDynEntModelMarkIterator@@YAXPEAUFxDynEntModelMarkIterator@@W4LocalClientNum_t@@IGAEBTvec3_t@@@Z(markIterator, clientIndex, dynEntityId, dynEntClientId, viewOffset);
}

/*
==============
FX_GenerateMarkVertsForGlass
==============
*/

void __fastcall FX_GenerateMarkVertsForGlass(LocalClientNum_t localClientNum)
{
  ?FX_GenerateMarkVertsForGlass@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_GenerateMarkVertsForEntXModel
==============
*/

void __fastcall FX_GenerateMarkVertsForEntXModel(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int entId, unsigned int *indexCount, const GfxScaledPlacement *placement, const DObj *dobj)
{
  ?FX_GenerateMarkVertsForEntXModel@@YAXPEAUFxMarksSystem@@PEBUFxCamera@@W4LocalClientNum_t@@HPEAIPEBUGfxScaledPlacement@@PEBUDObj@@@Z(marksSystem, camera, localClientNum, entId, indexCount, placement, dobj);
}

/*
==============
FX_MarkEntDetachAll
==============
*/

void __fastcall FX_MarkEntDetachAll(LocalClientNum_t localClientNum, int entnum)
{
  ?FX_MarkEntDetachAll@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entnum);
}

/*
==============
FX_GenerateMarkVertsForEntDObj_internal
==============
*/

void __fastcall FX_GenerateMarkVertsForEntDObj_internal(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, unsigned int *indexCount, const DObj *remoteDObj, unsigned __int16 entMarkListHead)
{
  ?FX_GenerateMarkVertsForEntDObj_internal@@YAXPEAUFxMarksSystem@@PEBUFxCamera@@W4LocalClientNum_t@@PEAIPEBUDObj@@G@Z(marksSystem, camera, localClientNum, indexCount, remoteDObj, entMarkListHead);
}

/*
==============
FX_EntHasMarks
==============
*/

unsigned int __fastcall FX_EntHasMarks(LocalClientNum_t clientIndex, unsigned int entNum)
{
  return ?FX_EntHasMarks@@YAIW4LocalClientNum_t@@I@Z(clientIndex, entNum);
}

/*
==============
FX_MarkAllocateClientMemory
==============
*/

void __fastcall FX_MarkAllocateClientMemory(HunkUser *hunkUser, int maxLocalClients)
{
  ?FX_MarkAllocateClientMemory@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
FX_ImpactMark
==============
*/

unsigned int __fastcall FX_ImpactMark(LocalClientNum_t localClientNum, Material *material, unsigned __int16 fadeInfo, unsigned __int16 waitInfo, unsigned __int16 lerpInfo, unsigned __int16 fadeOutInfo, unsigned __int16 stoppableFadeOutInfo, const vec3_t *origin, const vec4_t *quat, float orientation, const unsigned __int8 *nativeColor, const unsigned __int8 *nativeColorLerp, const vec4_t *markSizeOrig, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int viewmodelClientIndex, unsigned __int8 markBoneIndex, FxMarkProjectionAxis projectionAxis, const FX_ImpactMark_AtlasInfo *atlasInfo, const float4 *boltOffsetPos, const float4 *boltOffsetQuat, bool decalSpray, bool bypassStackingLimiter, bool markDynEnt, bool affectsGameplay, bool killOnKillcamTransition, const char *vfxName)
{
  return ?FX_ImpactMark@@YAIW4LocalClientNum_t@@PEAUMaterial@@GGGGGAEBTvec3_t@@AEBTvec4_t@@MQEBE43I_N5HEW4FxMarkProjectionAxis@@PEBUFX_ImpactMark_AtlasInfo@@PEBUfloat4@@855555PEBD@Z(localClientNum, material, fadeInfo, waitInfo, lerpInfo, fadeOutInfo, stoppableFadeOutInfo, origin, quat, orientation, nativeColor, nativeColorLerp, markSizeOrig, markEntnum, markGivenModelsOnly, markViewmodel, viewmodelClientIndex, markBoneIndex, projectionAxis, atlasInfo, boltOffsetPos, boltOffsetQuat, decalSpray, bypassStackingLimiter, markDynEnt, affectsGameplay, killOnKillcamTransition, vfxName);
}

/*
==============
FX_BeginMarks
==============
*/

void __fastcall FX_BeginMarks(LocalClientNum_t localClientNum, int serverTime)
{
  ?FX_BeginMarks@@YAXW4LocalClientNum_t@@H@Z(localClientNum, serverTime);
}

/*
==============
FX_MarkFreeClientMemory
==============
*/

void FX_MarkFreeClientMemory(void)
{
  ?FX_MarkFreeClientMemory@@YAXXZ();
}

/*
==============
FX_OrientDecalProjectionAxis
==============
*/

tmat33_t<vec3_t> *__fastcall FX_OrientDecalProjectionAxis(tmat33_t<vec3_t> *result, const tmat33_t<vec3_t> *originalAxis, FxMarkProjectionAxis projectionAxis, float rotationAngle)
{
  return ?FX_OrientDecalProjectionAxis@@YA?AT?$tmat33_t@Tvec3_t@@@@AEBT1@W4FxMarkProjectionAxis@@M@Z(result, originalAxis, projectionAxis, rotationAngle);
}

/*
==============
FX_GenerateMarkVertsForStaticModels
==============
*/

void __fastcall FX_GenerateMarkVertsForStaticModels(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int smodelCount, const unsigned int *smodelVisLods, unsigned int *indexCount)
{
  ?FX_GenerateMarkVertsForStaticModels@@YAXPEAUFxMarksSystem@@PEBUFxCamera@@W4LocalClientNum_t@@HPEBIPEAI@Z(marksSystem, camera, localClientNum, smodelCount, smodelVisLods, indexCount);
}

/*
==============
FX_GenerateMarkVertsCmd
==============
*/

void __fastcall FX_GenerateMarkVertsCmd(const void *const cmdInfo)
{
  ?FX_GenerateMarkVertsCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
FX_FillGenerateModelMarksCmd
==============
*/

void __fastcall FX_FillGenerateModelMarksCmd(LocalClientNum_t localClientNum, FxGenerateModelMarksCmd *genModelMarksCmd)
{
  ?FX_FillGenerateModelMarksCmd@@YAXW4LocalClientNum_t@@PEAUFxGenerateModelMarksCmd@@@Z(localClientNum, genModelMarksCmd);
}

/*
==============
FX_BeginModelMarkIterator
==============
*/

void __fastcall FX_BeginModelMarkIterator(FxModelMarkIterator *markIterator, LocalClientNum_t clientIndex, unsigned int modelIndex)
{
  ?FX_BeginModelMarkIterator@@YAXPEAUFxModelMarkIterator@@W4LocalClientNum_t@@I@Z(markIterator, clientIndex, modelIndex);
}

/*
==============
FX_MarkGlassDetachAll
==============
*/

void __fastcall FX_MarkGlassDetachAll(LocalClientNum_t localClientNum, int glassPieceIndex)
{
  ?FX_MarkGlassDetachAll@@YAXW4LocalClientNum_t@@H@Z(localClientNum, glassPieceIndex);
}

/*
==============
FX_EndDobjMarkIterator
==============
*/

void __fastcall FX_EndDobjMarkIterator(FxDobjMarkIterator *markIterator)
{
  ?FX_EndDobjMarkIterator@@YAXPEAUFxDobjMarkIterator@@@Z(markIterator);
}

/*
==============
FX_BeginDobjMarkIterator
==============
*/

void __fastcall FX_BeginDobjMarkIterator(FxDobjMarkIterator *markIterator, LocalClientNum_t clientIndex, unsigned int dobjIndex, unsigned int modelIndex, const vec3_t *viewOffset)
{
  ?FX_BeginDobjMarkIterator@@YAXPEAUFxDobjMarkIterator@@W4LocalClientNum_t@@IIAEBTvec3_t@@@Z(markIterator, clientIndex, dobjIndex, modelIndex, viewOffset);
}

/*
==============
FX_CopyMarkVfxDebugName
==============
*/

void __fastcall FX_CopyMarkVfxDebugName(const char *vfxName, char *dstName)
{
  ?FX_CopyMarkVfxDebugName@@YAXPEBDQEAD@Z(vfxName, dstName);
}

/*
==============
FX_GenerateDynMarkVertsCmd
==============
*/

void __fastcall FX_GenerateDynMarkVertsCmd(const void *const cmdInfo)
{
  ?FX_GenerateDynMarkVertsCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
FX_AddDecalVolumeMark
==============
*/
void FX_AddDecalVolumeMark(const FxMarksSystem *marksSystem, const FxMark *mark, unsigned int markFlags)
{
  float v3; 
  float v4; 
  __int128 v5; 
  float v6; 
  int atlasIndex; 
  unsigned __int16 uid; 
  unsigned __int8 outColor[8]; 
  tmat33_t<vec3_t> axis; 

  v3 = mark->texCoordAxisZ.v[1];
  axis.m[0].v[0] = mark->texCoordAxisZ.v[0];
  v4 = mark->texCoordAxisZ.v[2];
  axis.m[0].v[1] = v3;
  v5 = *(_OWORD *)mark->texCoordAxisX.v;
  axis.m[0].v[2] = v4;
  v6 = mark->texCoordAxisY.v[2];
  *(_OWORD *)axis.row1.v = v5;
  axis.m[2].v[1] = mark->texCoordAxisY.v[1];
  axis.m[2].v[2] = v6;
  FX_ExpandMarkVerts_GetColor(marksSystem, mark, outColor);
  atlasIndex = FX_CalculateMarkAtlasFrame(marksSystem, mark);
  uid = FX_MarkToHandle(marksSystem, mark);
  R_AddMarkDecalVolume(&mark->origin, &mark->halfSize, &axis, outColor, mark->material, atlasIndex, markFlags, uid);
}

/*
==============
FX_AddDecalVolumeMarkAnimated
==============
*/
void FX_AddDecalVolumeMarkAnimated(const FxMarksSystem *marksSystem, const FxMark *mark, const vec3_t *markCenter, const tmat43_t<vec3_t> *transformMatrix, unsigned int markFlags)
{
  const tmat33_t<vec3_t> *atlasIndex; 
  unsigned __int16 uid; 
  unsigned __int8 outColor[8]; 
  tmat33_t<vec3_t> out; 

  atlasIndex = (const tmat33_t<vec3_t> *)transformMatrix;
  MatrixTransformVector(&mark->texCoordAxisZ, (const tmat33_t<vec3_t> *)transformMatrix, out.m);
  MatrixTransformVector(&mark->texCoordAxisX, atlasIndex, &out.m[1]);
  MatrixTransformVector(&mark->texCoordAxisY, atlasIndex, &out.m[2]);
  FX_ExpandMarkVerts_GetColor(marksSystem, mark, outColor);
  LODWORD(atlasIndex) = FX_CalculateMarkAtlasFrame(marksSystem, mark);
  uid = FX_MarkToHandle(marksSystem, mark);
  R_AddMarkDecalVolume(markCenter, &mark->halfSize, &out, outColor, mark->material, (int)atlasIndex, markFlags, uid);
}

/*
==============
FX_AllocAndConstructMark
==============
*/
__int64 FX_AllocAndConstructMark(LocalClientNum_t localClientNum, const GfxMarkContext *context, Material *material, unsigned __int16 fadeInfo, unsigned __int16 waitInfo, unsigned __int16 lerpInfo, unsigned __int16 fadeOutInfo, unsigned __int16 stoppableFadeOutInfo, const vec3_t *origin, const vec4_t *markSize, const vec3_t *texCoordAxisX, const vec3_t *texCoordAxisY, const vec3_t *texCoordAxisZ, const unsigned __int8 *nativeColor, const unsigned __int8 *nativeColorLerp, int viewmodelClientIndex, const FX_ImpactMark_AtlasInfo *atlasInfo, bool transparentSurface, bool decalSpray, bool bypassStackingLimiter, bool affectsGameplay, bool killOnKillcamTransition, bool hasSkinnedSurface, const char *vfxName)
{
  __int64 v25; 
  volatile signed __int32 *v26; 
  FxMarksSystem *MarksSystem; 
  float v28; 
  unsigned __int64 v29; 
  FxMark *v30; 
  int modelType; 
  unsigned __int8 v32; 
  int v33; 
  unsigned int MarkContext_DynEntModel; 
  unsigned __int16 DynEntModelListHead; 
  unsigned __int16 firstGlassMarkHandle; 
  unsigned __int16 MarkContext_ModelIndex; 
  float v38; 
  FxMarksSystem *v39; 
  const vec3_t *v40; 
  unsigned __int16 firstFreeMarkHandle; 
  unsigned int v42; 
  FxMark *v43; 
  const GfxMarkContext *p_context; 
  __int64 v45; 
  unsigned int v46; 
  DynEntityClient *Client; 
  unsigned __int16 v48; 
  unsigned __int16 *p_firstGlassMarkHandle; 
  unsigned __int64 v50; 
  unsigned int v51; 
  const FX_ImpactMark_AtlasInfo *v52; 
  float fps1; 
  const vec4_t *v54; 
  float v55; 
  float value; 
  const char *v57; 
  float v58; 
  const vec3_t *fmt; 
  __int64 v61; 
  bool v62; 
  bool bypassStackLimiter; 
  char v64; 
  unsigned __int8 v65; 
  unsigned __int16 v66; 
  unsigned __int16 head; 
  unsigned __int16 v69; 
  int v70; 
  const char *v71; 
  __int64 v72; 
  Material *v73; 
  const FX_ImpactMark_AtlasInfo *v74; 
  const vec4_t *v75; 
  __int64 v76; 
  vec3_t halfSize; 
  tmat33_t<vec3_t> axis; 

  v76 = -2i64;
  v73 = material;
  v25 = localClientNum;
  v75 = markSize;
  v70 = viewmodelClientIndex;
  v74 = atlasInfo;
  v71 = vfxName;
  if ( !material->decalVolumeMaterial )
    R_WarnOncePerFrame(R_WARN_UNSUPPORTED_DECAL_VOLUME_MATERIAL, material->name);
  Sys_ProfBeginNamedEvent(0xFF808080, "FX_AllocAndConstructMark");
  Sys_EnterCriticalSection(CRITSECT_ALLOC_MARK);
  v26 = &g_markThread[v25];
  v72 = (unsigned __int8)v26 & 3;
  if ( ((unsigned __int8)v26 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[v25]) )
    __debugbreak();
  if ( _InterlockedIncrement(v26) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 764, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1") )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem((LocalClientNum_t)v25);
  v28 = markSize->v[3];
  v29 = 0i64;
  v30 = NULL;
  if ( !lerpInfo || (v64 = 1, nativeColorLerp[3]) )
    v64 = 0;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  modelType = context->modelType;
  if ( modelType == 4 && FX_GetMarkContext_DObjIsViewmodel(context) )
  {
    v32 = MarksSystem->viewmodelMarksCount[v70];
    v65 = v32;
    if ( fx_marks_limit_stacking_distance->current.value != 0.0 )
    {
      if ( v32 >= 0x10u )
        goto LABEL_21;
      v30 = FX_MarkCheckNearby(MarksSystem, MarksSystem->firstViewmodelMarkHandle[v70], origin, v28, texCoordAxisZ, decalSpray, bypassStackingLimiter);
      v32 = v65;
    }
    if ( v32 >= 0x10u )
    {
LABEL_21:
      if ( v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v26) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(v26, 0xFFFFFFFF) == 1 )
        goto LABEL_52;
      v33 = 822;
LABEL_50:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", v33, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
        __debugbreak();
LABEL_52:
      Sys_LeaveCriticalSection(CRITSECT_ALLOC_MARK);
      v42 = -1;
      goto LABEL_118;
    }
    goto LABEL_40;
  }
  if ( fx_marks_limit_stacking_distance->current.value == 0.0 || v64 )
    goto LABEL_43;
  if ( (unsigned __int8)(modelType - 3) <= 1u )
  {
    firstGlassMarkHandle = MarksSystem->entFirstMarkHandles[FX_GetMarkContext_EntNum(context)];
  }
  else if ( (_BYTE)modelType == 5 )
  {
    MarkContext_DynEntModel = FX_GetMarkContext_DynEntModel(context);
    DynEntModelListHead = FX_GetDynEntModelListHead(MarksSystem, MarkContext_DynEntModel);
    if ( DynEntModelListHead == 0xFFFF )
      goto LABEL_43;
    firstGlassMarkHandle = DynEntModelListHead;
  }
  else
  {
    if ( (_BYTE)modelType != 2 )
    {
      bypassStackLimiter = bypassStackingLimiter;
      v38 = v28;
      v39 = MarksSystem;
      v62 = decalSpray;
      fmt = texCoordAxisZ;
      v40 = origin;
      if ( (_BYTE)modelType == 6 )
        firstGlassMarkHandle = MarksSystem->firstGlassMarkHandle;
      else
        firstGlassMarkHandle = MarksSystem->firstActiveWorldMarkHandle;
      goto LABEL_39;
    }
    MarkContext_ModelIndex = FX_GetMarkContext_ModelIndex(context);
    firstGlassMarkHandle = FX_FindModelHead(MarksSystem, MarkContext_ModelIndex, modelType);
  }
  bypassStackLimiter = bypassStackingLimiter;
  v62 = decalSpray;
  fmt = texCoordAxisZ;
  v38 = v28;
  v40 = origin;
  v39 = MarksSystem;
LABEL_39:
  v30 = FX_MarkCheckNearby(v39, firstGlassMarkHandle, v40, v38, fmt, v62, bypassStackLimiter);
LABEL_40:
  if ( v30 )
  {
    if ( !fx_marks_limit_stacking_freeold->current.enabled )
      goto LABEL_21;
    FX_FreeMark(MarksSystem, v30, -5);
  }
LABEL_43:
  firstFreeMarkHandle = MarksSystem->firstFreeMarkHandle;
  v66 = firstFreeMarkHandle;
  if ( firstFreeMarkHandle == 0xFFFF )
  {
    FX_FreeLruMark(MarksSystem);
    firstFreeMarkHandle = MarksSystem->firstFreeMarkHandle;
    v66 = firstFreeMarkHandle;
    if ( firstFreeMarkHandle == 0xFFFF )
    {
      if ( v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v26) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(v26, 0xFFFFFFFF) == 1 )
        goto LABEL_52;
      v33 = 843;
      goto LABEL_50;
    }
  }
  v43 = FX_MarkFromHandle(MarksSystem, firstFreeMarkHandle);
  if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 854, ASSERT_TYPE_ASSERT, "(newMark)", (const char *)&queryFormat, "newMark") )
    __debugbreak();
  MarksSystem->firstFreeMarkHandle = v43->nextMark;
  v69 = ++v43->markGeneration;
  if ( MarksSystem->time <= 0 )
  {
    LODWORD(v61) = MarksSystem->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 858, ASSERT_TYPE_ASSERT, "( ( marksSystem->time > 0 ) )", "( marksSystem->time ) = %i", v61) )
      __debugbreak();
  }
  p_context = &v43->context;
  v43->context = *context;
  v43->material = v73;
  v43->fadeInfo = fadeInfo;
  v43->waitInfo = waitInfo;
  v43->lerpInfo = lerpInfo;
  v43->fadeOutInfo = fadeOutInfo;
  v43->stoppableFadeOutInfo = stoppableFadeOutInfo;
  v43->radius = v28;
  v43->origin = *origin;
  v43->texCoordAxisX = *texCoordAxisX;
  v43->texCoordAxisY.v[0] = COERCE_FLOAT(LODWORD(texCoordAxisY->v[0]) ^ _xmm);
  v43->texCoordAxisY.v[1] = COERCE_FLOAT(LODWORD(texCoordAxisY->v[1]) ^ _xmm);
  v43->texCoordAxisY.v[2] = COERCE_FLOAT(LODWORD(texCoordAxisY->v[2]) ^ _xmm);
  *(_DWORD *)v43->nativeColor = *(_DWORD *)nativeColor;
  *(_DWORD *)v43->nativeColorLerp = *(_DWORD *)nativeColorLerp;
  *((_BYTE *)v43 + 103) &= 0xF0u;
  *((_BYTE *)v43 + 103) = (affectsGameplay | *((_BYTE *)v43 + 103)) & 0xCF | (4 * (transparentSurface & 0xF1 | (2 * (decalSpray & 0xF9 | (2 * ((2 * killOnKillcamTransition) | hasSkinnedSurface & 0xFD))))));
  if ( (_BYTE)modelType == 4 )
  {
    if ( FX_GetMarkContext_DObjIsViewmodel(&v43->context) )
    {
      v45 = v70;
      FX_LinkMarkIntoList(MarksSystem, &MarksSystem->firstViewmodelMarkHandle[v70], v43);
      ++MarksSystem->viewmodelMarksCount[v70];
      if ( MarksSystem->viewmodelMarksCount[v45] > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 887, ASSERT_TYPE_ASSERT, "(marksSystem->viewmodelMarksCount[viewmodelClientIndex] <= 16)", (const char *)&queryFormat, "marksSystem->viewmodelMarksCount[viewmodelClientIndex] <= FX_MAX_VIEWMODEL_MARKS") )
        __debugbreak();
      goto LABEL_84;
    }
    p_context = &v43->context;
  }
  else if ( (_BYTE)modelType != 3 )
  {
    switch ( (_BYTE)modelType )
    {
      case 5:
        v46 = FX_GetMarkContext_DynEntModel(context);
        Client = DynEnt_GetClient(MarksSystem->localClientNum, v46, DYNENT_BASIS_MODEL);
        if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 901, ASSERT_TYPE_ASSERT, "(dynEntityClient)", (const char *)&queryFormat, "dynEntityClient") )
          __debugbreak();
        FX_LinkMarkIntoList(MarksSystem, &Client->fxMarkListHead, v43);
        goto LABEL_84;
      case 2:
        v48 = FX_GetMarkContext_ModelIndex(&v43->context);
        head = FX_FindModelHead(MarksSystem, v48, modelType);
        if ( head == firstFreeMarkHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 916, ASSERT_TYPE_ASSERT, "(staticModelMarkHead != newMarkHandle)", (const char *)&queryFormat, "staticModelMarkHead != newMarkHandle") )
          __debugbreak();
        FX_LinkMarkIntoList(MarksSystem, &head, v43);
        goto LABEL_84;
      case 6:
        p_firstGlassMarkHandle = &MarksSystem->firstGlassMarkHandle;
        break;
      default:
        if ( (unsigned __int8)modelType >= 2u )
        {
          LODWORD(v61) = modelType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 935, ASSERT_TYPE_ASSERT, "( ( modelType == MARK_MODEL_TYPE_WORLD_BRUSH || modelType == MARK_MODEL_TYPE_WORLD_BRUSH_DISPLACED ) )", "( modelType ) = %i", v61) )
            __debugbreak();
        }
        p_firstGlassMarkHandle = &MarksSystem->firstActiveWorldMarkHandle;
        break;
    }
    goto LABEL_83;
  }
  p_firstGlassMarkHandle = &MarksSystem->entFirstMarkHandles[FX_GetMarkContext_EntNum(p_context)];
LABEL_83:
  FX_LinkMarkIntoList(MarksSystem, p_firstGlassMarkHandle, v43);
LABEL_84:
  if ( v43->timeDrawn != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 942, ASSERT_TYPE_ASSERT, "(newMark->timeDrawn == FX_MARK_FREE)", (const char *)&queryFormat, "newMark->timeDrawn == FX_MARK_FREE") )
    __debugbreak();
  v43->timeDrawn = MarksSystem->time - 1;
  v43->timeAlloced = MarksSystem->time;
  v50 = -1i64;
  v43->timeStopped = -1;
  if ( ((unsigned __int8)v26 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v26) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v26, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 948, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
    __debugbreak();
  ++MarksSystem->allocedMarkCount;
  Sys_LeaveCriticalSection(CRITSECT_ALLOC_MARK);
  if ( R_DecalVolumesMarks_DebugEnabled() )
  {
    *(_QWORD *)axis.m[0].v = *(_QWORD *)v43->texCoordAxisZ.v;
    axis.m[0].v[2] = v43->texCoordAxisZ.v[2];
    *(_OWORD *)axis.row1.v = *(_OWORD *)v43->texCoordAxisX.v;
    *(_QWORD *)&axis.row2.y = *(_QWORD *)&v43->texCoordAxisY.y;
    halfSize.v[0] = (float)(v28 * v43->halfSize.v[0]) * 0.5;
    halfSize.v[1] = v28 * v43->halfSize.v[1];
    halfSize.v[2] = (float)(v28 * v43->halfSize.v[2]) * 0.5;
    R_DecalVolumesMarks_DebugAdd(origin, &halfSize, &axis, &colorRed);
    Com_Printf(21, "D+ FX_AllocAndConstructMark: material: %s, time=%d \n", v43->material->name, (unsigned int)v43->timeAlloced);
  }
  v43->texCoordAxisZ = *texCoordAxisZ;
  v51 = v43->material->textureAtlasRowCount * v43->material->textureAtlasColumnCount;
  if ( v51 <= 1 )
  {
    *(_DWORD *)&v43->atlasLoopCount = -65536;
    v43->atlasFrameDurationMS = 0;
    v43->atlasNumEntries = 0;
  }
  else
  {
    v52 = v74;
    v43->atlasStartFrame = truncate_cast<short,int>(v74->startFrame);
    fps1 = v52->fps1;
    if ( COERCE_FLOAT(LODWORD(fps1) & _xmm) <= 0.00000011920929 )
      v43->atlasFrameDurationMS = 0;
    else
      v43->atlasFrameDurationMS = truncate_cast<short,int>((int)(float)(1000.0 / fps1));
    v43->atlasLoopCount = truncate_cast<short,int>(v52->loopCount);
    if ( v51 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v51, "unsigned", v51) )
      __debugbreak();
    v43->atlasNumEntries = v51;
  }
  v54 = v75;
  v43->halfSize.v[0] = v75->v[0];
  v43->halfSize.v[1] = v54->v[1];
  v43->halfSize.v[2] = v54->v[2];
  if ( (unsigned __int8)(modelType - 4) <= 1u )
  {
    v55 = v43->halfSize.v[0];
    if ( v55 < 3.0 )
      v43->halfSize.v[0] = v55 * 2.0;
  }
  value = fx_mark_max_thickness->current.value;
  v57 = v71;
  if ( value > 0.0 )
  {
    v58 = v43->halfSize.v[0];
    if ( v58 > value )
    {
      Com_PrintWarning(21, "FxMark '%s' thickness '%3.3f' is larger than allowed '%3.3f' and will be clamped\n", v71, v58, value);
      v43->halfSize.v[0] = value;
    }
  }
  if ( R_DecalVolumesMarks_DebugEnabled() )
    Com_Printf(8, "Mark with material '%s' added\n", v43->material->name);
  do
    ++v50;
  while ( v57[v50] );
  if ( v50 > 0x1F )
    v29 = v50 - 31;
  memcpy_0(v43->vfxName, &v57[v29], v50 - v29 + 1);
  if ( v29 )
    *(_WORD *)v43->vfxName = 11822;
  v42 = v66 | (v69 << 16);
LABEL_118:
  Sys_ProfEndNamedEvent();
  return v42;
}

/*
==============
FX_BeginDobjMarkIterator
==============
*/
void FX_BeginDobjMarkIterator(FxDobjMarkIterator *markIterator, LocalClientNum_t clientIndex, unsigned int dobjIndex, unsigned int modelIndex, const vec3_t *viewOffset)
{
  __int64 v7; 
  volatile signed __int32 *v9; 
  FxMarksSystem *MarksSystem; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  const dvar_t *v14; 
  const DObj *obj; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  int SkelTimeStamp; 
  __int64 v19; 

  v7 = dobjIndex;
  v9 = &g_markThread[clientIndex];
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[clientIndex]) )
    __debugbreak();
  if ( _InterlockedIncrement(v9) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2980, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1") )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem(clientIndex);
  if ( (unsigned int)v7 >= 0x200 )
  {
    LODWORD(v19) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2984, ASSERT_TYPE_ASSERT, "(unsigned)( dobjIndex ) < (unsigned)( 512 )", "dobjIndex doesn't index MAX_SCENE_DOBJ\n\t%i not in [0, %i)", v19, 512) )
      __debugbreak();
  }
  v11 = v7;
  v12 = *((_DWORD *)&scene.sceneDObj[v7] + 346) >> 10;
  markIterator->clientIndex = clientIndex;
  v13 = v12 & 0xFFF;
  markIterator->dobjIndex = v7;
  markIterator->modelIndex = modelIndex;
  markIterator->unlockDobj = 0;
  v14 = DVARBOOL_cg_riotshield_decalfix_enable;
  if ( !DVARBOOL_cg_riotshield_decalfix_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_riotshield_decalfix_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  obj = scene.sceneDObj[v11].obj;
  if ( v14->current.enabled )
  {
    if ( !obj )
      goto LABEL_26;
    if ( (_DWORD)v13 == 2048 )
    {
      v16 = MarksSystem->firstViewmodelMarkHandle[0];
      markIterator->markHandle = v16;
    }
    else if ( (unsigned int)v13 < 0x801 )
    {
      v16 = MarksSystem->entFirstMarkHandles[v13];
      markIterator->markHandle = v16;
    }
    else
    {
      v16 = -1;
      markIterator->markHandle = -1;
    }
  }
  else
  {
    if ( !obj || (unsigned int)v13 >= gfxCfg.entnumOrdinaryEnd )
      goto LABEL_26;
    v17 = MarksSystem->entFirstMarkHandles[v13];
    markIterator->markHandle = v17;
    v16 = v17;
  }
  if ( v16 == 0xFFFF )
    return;
  DObjLock(scene.sceneDObj[v11].obj);
  markIterator->unlockDobj = 1;
  SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
  if ( DObjSkelExists(scene.sceneDObj[v11].obj, SkelTimeStamp) )
  {
    markIterator->entnum = v13;
    markIterator->viewOffset = *viewOffset;
    DObjGetHidePartBits(scene.sceneDObj[v11].obj, &markIterator->hidePartBits);
    return;
  }
LABEL_26:
  markIterator->markHandle = -1;
}

/*
==============
FX_BeginDynEntModelMarkIterator
==============
*/
void FX_BeginDynEntModelMarkIterator(FxDynEntModelMarkIterator *markIterator, LocalClientNum_t clientIndex, unsigned int dynEntityId, unsigned __int16 dynEntClientId, const vec3_t *viewOffset)
{
  volatile signed __int32 *v9; 
  FxMarksSystem *MarksSystem; 

  v9 = &g_markThread[clientIndex];
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[clientIndex]) )
    __debugbreak();
  if ( _InterlockedIncrement(v9) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3229, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1") )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem(clientIndex);
  markIterator->clientIndex = clientIndex;
  markIterator->dynEntityId = dynEntityId;
  markIterator->dynEntClientId = dynEntClientId;
  markIterator->viewOffset = *viewOffset;
  markIterator->markHandle = FX_GetDynEntModelListHead(MarksSystem, dynEntityId);
}

/*
==============
FX_BeginMarks
==============
*/
void FX_BeginMarks(LocalClientNum_t localClientNum, int serverTime)
{
  int v2; 
  FxMarksSystem *MarksSystem; 
  FxMarksSystem *v4; 

  v2 = serverTime + 1;
  MarksSystem = FX_GetMarksSystem(localClientNum);
  v4 = MarksSystem;
  if ( v2 >= MarksSystem->time )
  {
    MarksSystem->time = v2;
  }
  else
  {
    FX_FreeRewoundMarks(MarksSystem, v2);
    v4->time = v2;
  }
}

/*
==============
FX_BeginModelMarkIterator
==============
*/
void FX_BeginModelMarkIterator(FxModelMarkIterator *markIterator, LocalClientNum_t clientIndex, unsigned int modelIndex)
{
  __int64 v4; 
  volatile signed __int32 *v6; 
  FxMarksSystem *MarksSystem; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int16 v10; 

  v4 = modelIndex;
  v6 = &g_markThread[clientIndex];
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[clientIndex]) )
    __debugbreak();
  if ( _InterlockedIncrement(v6) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2897, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1") )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem(clientIndex);
  v8 = v4;
  v9 = (*((_DWORD *)&scene.sceneModel[v4] + 30) >> 10) & 0xFFF;
  markIterator->clientIndex = clientIndex;
  if ( scene.sceneModel[v4].obj && (unsigned int)v9 < gfxCfg.entnumOrdinaryEnd )
  {
    v10 = MarksSystem->entFirstMarkHandles[v9];
    markIterator->markHandle = v10;
    if ( v10 != 0xFFFF )
    {
      markIterator->modelIndex = v4;
      markIterator->entnum = v9;
      DObjGetHidePartBits(scene.sceneModel[v8].obj, &markIterator->hidePartBits);
      FX_GenerateMarkVertsForMark_MatrixFromScaledPlacement(&scene.sceneModel[v8].placement, &vec3_origin, &markIterator->transformMatrix);
    }
  }
  else
  {
    markIterator->markHandle = -1;
  }
}

/*
==============
FX_CalculateMarkAtlasFrame
==============
*/
__int64 FX_CalculateMarkAtlasFrame(const FxMarksSystem *marksSystem, const FxMark *mark)
{
  __int64 result; 
  int atlasStartFrame; 
  __int16 atlasFrameDurationMS; 
  signed int v6; 
  int v7; 
  __int16 v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  __int16 atlasLoopCount; 
  int atlasNumEntries; 
  unsigned int v16; 
  int v17; 

  result = (unsigned int)mark->atlasStartFrame;
  atlasStartFrame = mark->atlasStartFrame;
  if ( mark->atlasStartFrame >= 0 )
  {
    atlasFrameDurationMS = mark->atlasFrameDurationMS;
    if ( atlasFrameDurationMS >= 0 )
    {
      if ( atlasFrameDurationMS <= 0 )
        return result;
      v13 = atlasStartFrame + (marksSystem->time - mark->timeAlloced) / atlasFrameDurationMS;
      atlasLoopCount = mark->atlasLoopCount;
      if ( atlasLoopCount >= 0 )
      {
        atlasNumEntries = mark->atlasNumEntries;
        if ( v13 >= atlasNumEntries * atlasLoopCount )
          v13 = atlasNumEntries - 1;
      }
      v11 = v13 % mark->atlasNumEntries;
      if ( v11 < mark->atlasNumEntries )
        return v11;
      v17 = mark->atlasNumEntries;
      v12 = 2043;
    }
    else
    {
      v6 = mark->atlasNumEntries;
      v7 = (marksSystem->time - mark->timeAlloced) / atlasFrameDurationMS;
      v8 = mark->atlasLoopCount;
      v9 = atlasStartFrame + v7 - v6;
      if ( v8 >= 0 && v9 <= -(v6 * v8) )
        v9 = 0;
      v10 = mark->atlasNumEntries;
      if ( v9 % v6 >= 0 )
        v10 = 0;
      v11 = v9 % v6 + v10;
      if ( v11 < v6 )
        return v11;
      v17 = mark->atlasNumEntries;
      v12 = 2027;
    }
    v16 = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", v12, ASSERT_TYPE_ASSERT, "(unsigned)( indexClamped ) < (unsigned)( mark->atlasNumEntries )", "indexClamped doesn't index mark->atlasNumEntries\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
    return v11;
  }
  return result;
}

/*
==============
FX_ClearEntImpactMarks
==============
*/
void FX_ClearEntImpactMarks(LocalClientNum_t localClientNum)
{
  unsigned int v1; 
  __int64 v2; 
  LocalClientNum_t v3; 
  unsigned int v4; 
  signed int v5; 
  FxMarksSystem *MarksSystem; 
  unsigned __int16 v7; 
  FxMarksSystem *v8; 
  unsigned __int16 *v9; 
  __int64 v10; 
  __int64 v11; 
  int v13; 

  v1 = g_cgameData.entFxMarkClearRequests.array[0];
  LODWORD(v2) = 0;
  v13 = 0;
  v3 = localClientNum;
  while ( v1 )
  {
LABEL_5:
    v4 = __lzcnt(v1);
    v5 = v4 + 32 * v2;
    if ( v4 >= 0x20 )
    {
      LODWORD(v11) = 32;
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( (v1 & (0x80000000 >> v4)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v1 &= ~(0x80000000 >> v4);
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = v4 + 32 * v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1595, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( sizeof( *array_counter( FxMarksSystem::entFirstMarkHandles ) ) + 0 ) )", "entnum doesn't index ARRAY_COUNT( FxMarksSystem::entFirstMarkHandles )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    MarksSystem = FX_GetMarksSystem(v3);
    v7 = MarksSystem->entFirstMarkHandles[v5];
    v8 = MarksSystem;
    v9 = &MarksSystem->entFirstMarkHandles[v5];
    if ( v7 != 0xFFFF )
    {
      do
      {
        if ( v7 >= 0x200u )
        {
          LODWORD(v11) = 512;
          LODWORD(v10) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
          __debugbreak();
        FX_FreeMark(v8, &v8->marks[v7], -7);
        v7 = *v9;
      }
      while ( *v9 != 0xFFFF );
      LODWORD(v2) = v13;
      v3 = localClientNum;
    }
  }
  while ( 1 )
  {
    v2 = (unsigned int)(v2 + 1);
    v13 = v2;
    if ( (unsigned int)v2 >= 0x40 )
      break;
    v1 = g_cgameData.entFxMarkClearRequests.array[v2];
    if ( v1 )
      goto LABEL_5;
  }
}

/*
==============
FX_ClearMarks
==============
*/
void FX_ClearMarks(LocalClientNum_t localClientNum)
{
  FxMarksSystem *MarksSystem; 
  FxMark *marks; 
  FxMark *i; 

  if ( localClientNum < s_markMaxLocalClients )
  {
    MarksSystem = FX_GetMarksSystem(localClientNum);
    marks = MarksSystem->marks;
    for ( i = marks + 512; marks != i; ++marks )
    {
      if ( marks->timeDrawn != -1 && marks->context.modelType == 5 )
        FX_FreeMark(MarksSystem, marks, -2);
    }
    FX_InitMarksSystemInternal(localClientNum, -2);
  }
}

/*
==============
FX_ClearViewmodelMarks
==============
*/
void FX_ClearViewmodelMarks(LocalClientNum_t localClientNum)
{
  FxMarksSystem *MarksSystem; 
  unsigned __int16 nextMark; 
  FxMark *v3; 
  __int64 v4; 
  __int64 v5; 

  MarksSystem = FX_GetMarksSystem(localClientNum);
  nextMark = MarksSystem->firstViewmodelMarkHandle[0];
  while ( nextMark != 0xFFFF )
  {
    if ( nextMark >= 0x200u )
    {
      LODWORD(v5) = 512;
      LODWORD(v4) = nextMark;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = &MarksSystem->marks[nextMark];
    nextMark = v3->nextMark;
    FX_FreeMark(MarksSystem, v3, -20);
  }
}

/*
==============
FX_CopyMarkVfxDebugName
==============
*/
void FX_CopyMarkVfxDebugName(const char *vfxName, char *dstName)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 

  v3 = -1i64;
  do
    ++v3;
  while ( vfxName[v3] );
  if ( v3 <= 0x1F )
    v4 = 0i64;
  else
    v4 = v3 - 31;
  memcpy_0(dstName, &vfxName[v4], v3 - v4 + 1);
  if ( v4 )
    *(_WORD *)dstName = 11822;
}

/*
==============
FX_DeriveMarkSize
==============
*/
vec4_t *FX_DeriveMarkSize(vec4_t *result, const vec4_t *markSizeOrig)
{
  *(float *)&_XMM3 = markSizeOrig->v[2];
  _XMM1 = LODWORD(markSizeOrig->v[1]);
  _XMM2 = LODWORD(markSizeOrig->v[0]);
  if ( *(float *)&_XMM3 == 0.0 )
    __asm { vmaxss  xmm3, xmm2, xmm1 }
  __asm
  {
    vcmpeqss xmm0, xmm1, xmm0
    vblendvps xmm1, xmm1, xmm2, xmm0
    vmaxss  xmm0, xmm1, xmm2
  }
  result->v[2] = *(float *)&_XMM1;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  result->v[3] = *(float *)&_XMM1;
  result->v[0] = *(float *)&_XMM3;
  result->v[1] = *(float *)&_XMM2;
  return result;
}

/*
==============
FX_DynEntModelHasMarks
==============
*/
_BOOL8 FX_DynEntModelHasMarks(const DynEntityClient *dynEntClient)
{
  return dynEntClient->fxMarkListHead != 0xFFFF;
}

/*
==============
FX_EndDobjMarkIterator
==============
*/
void FX_EndDobjMarkIterator(FxDobjMarkIterator *markIterator)
{
  __int64 clientIndex; 
  volatile signed __int32 *v3; 

  if ( markIterator->unlockDobj )
    DObjUnlock(scene.sceneDObj[markIterator->dobjIndex].obj);
  clientIndex = markIterator->clientIndex;
  v3 = &g_markThread[clientIndex];
  if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[clientIndex]) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3061, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[markIterator->clientIndex] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[markIterator->clientIndex] ) == 0") )
    __debugbreak();
}

/*
==============
FX_EntHasMarks
==============
*/
_BOOL8 FX_EntHasMarks(LocalClientNum_t clientIndex, unsigned int entNum)
{
  __int64 v2; 
  FxMarksSystem *MarksSystem; 

  v2 = entNum;
  MarksSystem = FX_GetMarksSystem(clientIndex);
  if ( (_DWORD)v2 == 2048 )
    return MarksSystem->firstViewmodelMarkHandle[0] != 0xFFFF;
  if ( (unsigned int)v2 < 0x801 )
    return MarksSystem->entFirstMarkHandles[v2] != 0xFFFF;
  return 0i64;
}

/*
==============
FX_EntHasMarks
==============
*/
_BOOL8 FX_EntHasMarks(LocalClientNum_t clientIndex, unsigned int entNum, unsigned int modelIndex)
{
  __int64 v4; 
  FxMarksSystem *MarksSystem; 
  FxMarksSystem *v6; 
  unsigned __int16 nextMark; 
  FxMark *v9; 
  const GfxMarkContext *p_context; 

  v4 = entNum;
  MarksSystem = FX_GetMarksSystem(clientIndex);
  v6 = MarksSystem;
  if ( (_DWORD)v4 == 2048 )
    return MarksSystem->firstViewmodelMarkHandle[0] != 0xFFFF;
  if ( (unsigned int)v4 < 0x801 )
  {
    nextMark = MarksSystem->entFirstMarkHandles[v4];
    if ( nextMark != 0xFFFF )
    {
      while ( nextMark != 0xFFFF )
      {
        v9 = FX_MarkFromHandle(v6, nextMark);
        nextMark = v9->nextMark;
        p_context = &v9->context;
        if ( FX_GetMarkContext_ModelType(&v9->context) == 4 && FX_GetMarkContext_DObjModelIndex(p_context) == modelIndex )
          return 1i64;
      }
    }
  }
  return 0i64;
}

/*
==============
FX_ExpandMarkVerts_GetColor
==============
*/
void FX_ExpandMarkVerts_GetColor(const FxMarksSystem *marksSystem, const FxMark *mark, unsigned __int8 *outColor)
{
  int integer; 
  unsigned __int16 fadeInfo; 
  int lerpInfo; 
  int v9; 
  char v10; 
  int v11; 
  int fadeOutInfo; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  unsigned __int8 v19; 
  bool v20; 
  unsigned int v21; 
  char v22; 
  int timeStopped; 
  int v24; 
  unsigned __int8 v25; 
  int v26; 
  unsigned __int8 v27; 

  *(_DWORD *)outColor = *(_DWORD *)mark->nativeColor;
  integer = fx_mark_max_life->current.integer;
  if ( integer >= 0 && marksSystem->time - mark->timeAlloced > 1000 * integer )
    *((_BYTE *)mark + 103) |= 2u;
  fadeInfo = mark->fadeInfo;
  if ( fadeInfo || mark->lerpInfo || mark->fadeOutInfo )
  {
    lerpInfo = mark->lerpInfo;
    v9 = marksSystem->time - mark->timeAlloced;
    v10 = 0;
    v11 = 125 * fadeInfo;
    fadeOutInfo = mark->fadeOutInfo;
    v13 = 125 * fadeOutInfo;
    v14 = 125 * mark->waitInfo;
    v15 = 125 * lerpInfo;
    if ( v9 >= v11 )
    {
      if ( v9 >= v14 + v11 )
      {
        if ( v9 >= v11 + v15 + v14 )
        {
          if ( v9 >= v11 + v14 + 125 * (fadeOutInfo + lerpInfo) )
          {
            if ( v13 )
            {
              outColor[3] = 0;
              *((_BYTE *)mark + 103) |= 2u;
              goto LABEL_24;
            }
            if ( !v15 )
              goto LABEL_24;
            v21 = *(_DWORD *)mark->nativeColorLerp;
            *(_DWORD *)outColor = v21;
            *((_BYTE *)mark + 103) &= ~2u;
            v20 = HIBYTE(v21) == 0;
          }
          else
          {
            v17 = v9 - (v11 + v15 + v14);
            if ( v15 )
              v18 = *(_DWORD *)mark->nativeColorLerp;
            else
              v18 = *(_DWORD *)mark->nativeColor;
            *(_DWORD *)outColor = v18;
            v19 = HIBYTE(v18) - (int)(v17 * HIBYTE(v18)) / v13;
            outColor[3] = v19;
            *((_BYTE *)mark + 103) &= ~2u;
            v20 = v19 == 0;
          }
          v22 = 0;
          if ( v20 )
            v22 = 2;
          *((_BYTE *)mark + 103) |= v22;
          goto LABEL_24;
        }
        v16 = v9 - (v14 + v11);
        *outColor = mark->nativeColor[0] + v16 * (mark->nativeColorLerp[0] - mark->nativeColor[0]) / v15;
        outColor[1] = mark->nativeColor[1] + v16 * (mark->nativeColorLerp[1] - mark->nativeColor[1]) / v15;
        outColor[2] = mark->nativeColor[2] + v16 * (mark->nativeColorLerp[2] - mark->nativeColor[2]) / v15;
        outColor[3] = mark->nativeColor[3] + v16 * (mark->nativeColorLerp[3] - mark->nativeColor[3]) / v15;
      }
    }
    else
    {
      outColor[3] = v9 * outColor[3] / v11;
    }
LABEL_24:
    timeStopped = mark->timeStopped;
    if ( timeStopped > 0 && (*((_BYTE *)mark + 103) & 2) == 0 )
    {
      v24 = marksSystem->time - timeStopped;
      v25 = 0;
      v26 = outColor[3] * v24 / (-125 * mark->stoppableFadeOutInfo) + outColor[3];
      v27 = outColor[3] * v24 / (-125 * mark->stoppableFadeOutInfo) + outColor[3];
      if ( v26 > 0 )
        v25 = v27;
      outColor[3] = v25;
      *((_BYTE *)mark + 103) &= ~2u;
      if ( !v25 )
        v10 = 2;
      *((_BYTE *)mark + 103) |= v10;
    }
  }
}

/*
==============
FX_FillGenerateModelMarksCmd
==============
*/
void FX_FillGenerateModelMarksCmd(LocalClientNum_t localClientNum, FxGenerateModelMarksCmd *genModelMarksCmd)
{
  genModelMarksCmd->localClientNum = localClientNum;
  genModelMarksCmd->system = FX_GetSystem(localClientNum);
  genModelMarksCmd->marksSystem = FX_GetMarksSystem(localClientNum);
  genModelMarksCmd->marksEnabled = fx_marks_all->current.enabled;
  genModelMarksCmd->marksSmodels = fx_marks_smodels->current.enabled;
  genModelMarksCmd->marksEnts = fx_marks_ents->current.enabled;
}

/*
==============
FX_FindModelHead
==============
*/
unsigned __int16 FX_FindModelHead(FxMarksSystem *marksSystem, unsigned __int16 modelIndex, int type)
{
  FxMark *marks; 
  FxMark *v7; 

  marks = marksSystem->marks;
  v7 = marks + 512;
  if ( marks == &marks[512] )
    return -1;
  while ( 1 )
  {
    if ( marks->timeDrawn != -1 && marks->prevMark == 0xFFFF )
    {
      if ( marks == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
      if ( marks->context.modelType == type )
      {
        if ( marks == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2128, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( *(_WORD *)marks->context.typeSpecificIndex.modelIndex == modelIndex )
          break;
      }
    }
    if ( ++marks == v7 )
      return -1;
  }
  return FX_MarkToHandle(marksSystem, marks);
}

/*
==============
FX_FindSpotForMark
==============
*/
void FX_FindSpotForMark(unsigned __int16 *outSpotMarkPrev, unsigned __int16 **outSpotHandlePrev, FxMarksSystem *marksSystem, unsigned __int16 *head, FxMark *mark)
{
  unsigned __int16 *p_nextMark; 
  unsigned __int16 nextMark; 
  unsigned __int16 v10; 
  FxMark *v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  __int64 v17; 

  p_nextMark = head;
  *outSpotMarkPrev = -1;
  *outSpotHandlePrev = head;
  nextMark = *head;
  v10 = -1;
  if ( *head != 0xFFFF )
  {
    do
    {
      if ( nextMark >= 0x200u )
      {
        LODWORD(v17) = 512;
        LODWORD(v16) = nextMark;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
        __debugbreak();
      v11 = &marksSystem->marks[nextMark];
      if ( v11->material == mark->material && *(_QWORD *)&v11->context == *(_QWORD *)&mark->context || (v12 = v11->origin.v[0] - mark->origin.v[0], v13 = v11->origin.v[1] - mark->origin.v[1], v14 = v11->origin.v[2] - mark->origin.v[2], v15 = v11->radius + mark->radius, (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) < (float)(v15 * v15)) )
      {
        *outSpotMarkPrev = v10;
        *outSpotHandlePrev = p_nextMark;
      }
      v10 = *p_nextMark;
      nextMark = v11->nextMark;
      p_nextMark = &v11->nextMark;
    }
    while ( nextMark != 0xFFFF );
    nextMark = **outSpotHandlePrev;
  }
  if ( nextMark != 0xFFFF )
  {
    *outSpotMarkPrev = nextMark;
    *outSpotHandlePrev = &FX_MarkFromHandle(marksSystem, **outSpotHandlePrev)->nextMark;
  }
}

/*
==============
FX_FreeLruMark
==============
*/
void FX_FreeLruMark(FxMarksSystem *marksSystem)
{
  FxMarksSystem *v1; 
  FxMark *marks; 
  int v3; 
  FxMark *v4; 
  FxMark *v5; 
  GfxMarkContext *p_context; 
  int timeDrawn; 
  FxMark *v8; 
  int v9; 
  int v10; 
  GfxMarkContext *v11; 
  char *fmt; 
  __int64 v13; 

  v1 = marksSystem;
  Profile_Begin(225);
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 484, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
    __debugbreak();
  marks = v1->marks;
  v3 = 0;
  v4 = NULL;
  v5 = marks + 512;
  if ( marks == &marks[512] )
    goto LABEL_27;
  do
  {
    if ( marks->timeDrawn != -1 )
    {
      p_context = &marks->context;
      if ( marks == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
      if ( p_context->modelType != 4 )
        goto LABEL_22;
      if ( marks == (FxMark *)-76i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2011, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
      }
      if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2012, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
        __debugbreak();
      if ( (marks->context.surfIndex & 0x80u) == 0 )
      {
LABEL_22:
        if ( !v4 || (timeDrawn = marks->timeDrawn, timeDrawn < v4->timeDrawn) || timeDrawn == v4->timeDrawn && marks->timeAlloced < v4->timeAlloced )
          v4 = marks;
      }
    }
    ++marks;
  }
  while ( marks != v5 );
  v1 = marksSystem;
  if ( !v4 )
  {
LABEL_27:
    v8 = v1->marks;
    v9 = 0;
    v10 = 0;
    if ( v8 != v5 )
    {
      do
      {
        if ( v8->timeDrawn == -1 )
        {
          ++v3;
        }
        else
        {
          v11 = &v8->context;
          if ( v8 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          if ( v11->modelType != 4 )
            goto LABEL_44;
          if ( v8 == (FxMark *)-76i64 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2011, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
              __debugbreak();
          }
          if ( v11->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2012, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
            __debugbreak();
          if ( (v8->context.surfIndex & 0x80u) != 0 )
            ++v9;
          else
LABEL_44:
            ++v10;
        }
        ++v8;
      }
      while ( v8 != v5 );
      v1 = marksSystem;
    }
    LODWORD(v13) = v9;
    LODWORD(fmt) = v3;
    Com_PrintError(1, "No freeable marks: firstFreeMarkHandle 0x%x.  freedMarkCount = %d freeCount = %d viewModelCount = %d otherCount = %d\n", v1->firstFreeMarkHandle, v1->freedMarkCount, fmt, v13, v10);
  }
  else
  {
    FX_FreeMark(marksSystem, v4, -4);
  }
  Profile_EndInternal(NULL);
}

/*
==============
FX_FreeMark
==============
*/
void FX_FreeMark(FxMarksSystem *marksSystem, FxMark *mark, int debugValue)
{
  unsigned int MarkContext_ModelType; 
  GfxMarkContext *p_context; 
  unsigned __int64 v8; 
  unsigned __int16 MarkContext_EntNum; 
  unsigned int MarkContext_DynEntModel; 
  DynEntityClient *Client; 

  if ( R_DecalVolumesMarks_DebugEnabled() )
  {
    MarkContext_ModelType = FX_GetMarkContext_ModelType(&mark->context);
    Com_Printf(21, "D+ FX_FreeMark: material: %s, model type %d\n", mark->material->name, MarkContext_ModelType);
  }
  p_context = &mark->context;
  if ( mark == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  switch ( p_context->modelType )
  {
    case 0u:
    case 1u:
      FX_FreeMarkFromList(marksSystem, mark, &marksSystem->firstActiveWorldMarkHandle, debugValue);
      break;
    case 2u:
      FX_FreeMarkFromList(marksSystem, mark, NULL, debugValue);
      break;
    case 3u:
      goto $LN16_101;
    case 4u:
      if ( FX_GetMarkContext_DObjIsViewmodel(&mark->context) )
      {
        if ( mark == (FxMark *)-76i64 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2019, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
        }
        if ( p_context->modelType != 4 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2020, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
            __debugbreak();
          if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2012, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
            __debugbreak();
        }
        if ( (mark->context.surfIndex & 0x80u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2021, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_DObjIsViewmodel( context ))", (const char *)&queryFormat, "FX_GetMarkContext_DObjIsViewmodel( context )") )
          __debugbreak();
        v8 = ((unsigned __int64)mark->context.surfIndex >> 5) & 3;
        FX_FreeMarkFromList(marksSystem, mark, &marksSystem->firstViewmodelMarkHandle[v8], debugValue);
        if ( !marksSystem->viewmodelMarksCount[(unsigned int)v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 356, ASSERT_TYPE_ASSERT, "(marksSystem->viewmodelMarksCount[vmClientIndex])", (const char *)&queryFormat, "marksSystem->viewmodelMarksCount[vmClientIndex]") )
          __debugbreak();
        --marksSystem->viewmodelMarksCount[(unsigned int)v8];
      }
      else
      {
$LN16_101:
        MarkContext_EntNum = FX_GetMarkContext_EntNum(&mark->context);
        FX_FreeMarkFromList(marksSystem, mark, &marksSystem->entFirstMarkHandles[MarkContext_EntNum], debugValue);
      }
      break;
    case 5u:
      MarkContext_DynEntModel = FX_GetMarkContext_DynEntModel(&mark->context);
      Client = DynEnt_GetClient(marksSystem->localClientNum, MarkContext_DynEntModel, DYNENT_BASIS_MODEL);
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 374, ASSERT_TYPE_ASSERT, "(dynEntityClient)", (const char *)&queryFormat, "dynEntityClient") )
        __debugbreak();
      FX_FreeMarkFromList(marksSystem, mark, &Client->fxMarkListHead, debugValue);
      break;
    case 6u:
      FX_FreeMarkFromList(marksSystem, mark, &marksSystem->firstGlassMarkHandle, debugValue);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 398, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled case.\n") )
        __debugbreak();
      break;
  }
  ++marksSystem->freedMarkCount;
}

/*
==============
FX_FreeMarkFromList
==============
*/
void FX_FreeMarkFromList(FxMarksSystem *marksSystem, FxMark *mark, unsigned __int16 *listHead, int debugValue)
{
  unsigned __int16 v8; 
  unsigned __int16 nextMark; 
  unsigned __int16 v10; 
  unsigned __int16 prevMark; 
  unsigned __int16 v12; 

  v8 = FX_MarkToHandle(marksSystem, mark);
  nextMark = mark->nextMark;
  v10 = v8;
  if ( nextMark != 0xFFFF )
  {
    prevMark = mark->prevMark;
    FX_MarkFromHandle(marksSystem, nextMark)->prevMark = prevMark;
  }
  if ( mark->prevMark == 0xFFFF )
  {
    if ( listHead )
    {
      if ( *listHead != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 318, ASSERT_TYPE_ASSERT, "(*listHead == markHandle)", "%s\n\t%i %i", "*listHead == markHandle", *listHead, v10) )
        __debugbreak();
      *listHead = mark->nextMark;
    }
  }
  else
  {
    v12 = mark->nextMark;
    FX_MarkFromHandle(marksSystem, mark->prevMark)->nextMark = v12;
  }
  ++mark->markGeneration;
  mark->timeDrawn = -1;
  mark->nextMark = marksSystem->firstFreeMarkHandle;
  mark->timeStopped = debugValue;
  marksSystem->firstFreeMarkHandle = v10;
}

/*
==============
FX_FreeRewoundMarks
==============
*/
void FX_FreeRewoundMarks(FxMarksSystem *marksSystem, int cutoffTime)
{
  FxMark *marks; 
  FxMark *v5; 
  const GfxMarkContext *p_context; 
  unsigned __int16 *p_firstActiveWorldMarkHandle; 
  unsigned __int64 v8; 
  unsigned int MarkContext_DynEntModel; 
  DynEntityClient *Client; 

  if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 463, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
    __debugbreak();
  marks = marksSystem->marks;
  v5 = marks + 512;
  if ( marks != &marks[512] )
  {
    p_context = &marks->context;
    do
    {
      if ( *(_DWORD *)&p_context[-9].modelType != -1 && (signed int)p_context[-9].typeSpecificIndex.dynEntId >= cutoffTime )
      {
        if ( R_DecalVolumesMarks_DebugEnabled() )
        {
          if ( !p_context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          Com_Printf(21, "D+ FX_FreeMark: material: %s, model type %d\n", **(const char ***)p_context[-2].typeSpecificIndex.modelIndex, p_context->modelType);
        }
        if ( !p_context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        switch ( p_context->modelType )
        {
          case 0u:
          case 1u:
            p_firstActiveWorldMarkHandle = &marksSystem->firstActiveWorldMarkHandle;
            goto LABEL_18;
          case 2u:
            p_firstActiveWorldMarkHandle = NULL;
            goto LABEL_18;
          case 3u:
            goto LABEL_38;
          case 4u:
            if ( FX_GetMarkContext_DObjIsViewmodel(p_context) )
            {
              if ( !p_context )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2019, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
                  __debugbreak();
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
                  __debugbreak();
              }
              if ( p_context->modelType != 4 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2020, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
                  __debugbreak();
                if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2012, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
                  __debugbreak();
              }
              if ( (p_context->surfIndex & 0x80u) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2021, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_DObjIsViewmodel( context ))", (const char *)&queryFormat, "FX_GetMarkContext_DObjIsViewmodel( context )") )
                __debugbreak();
              v8 = ((unsigned __int64)p_context->surfIndex >> 5) & 3;
              FX_FreeMarkFromList(marksSystem, marks, &marksSystem->firstViewmodelMarkHandle[v8], -3);
              if ( !marksSystem->viewmodelMarksCount[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 356, ASSERT_TYPE_ASSERT, "(marksSystem->viewmodelMarksCount[vmClientIndex])", (const char *)&queryFormat, "marksSystem->viewmodelMarksCount[vmClientIndex]") )
                __debugbreak();
              --marksSystem->viewmodelMarksCount[v8];
            }
            else
            {
LABEL_38:
              p_firstActiveWorldMarkHandle = &marksSystem->entFirstMarkHandles[FX_GetMarkContext_EntNum(p_context)];
LABEL_18:
              FX_FreeMarkFromList(marksSystem, marks, p_firstActiveWorldMarkHandle, -3);
            }
LABEL_47:
            ++marksSystem->freedMarkCount;
            break;
          case 5u:
            MarkContext_DynEntModel = FX_GetMarkContext_DynEntModel(p_context);
            Client = DynEnt_GetClient(marksSystem->localClientNum, MarkContext_DynEntModel, DYNENT_BASIS_MODEL);
            if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 374, ASSERT_TYPE_ASSERT, "(dynEntityClient)", (const char *)&queryFormat, "dynEntityClient") )
              __debugbreak();
            FX_FreeMarkFromList(marksSystem, marks, &Client->fxMarkListHead, -3);
            goto LABEL_47;
          case 6u:
            p_firstActiveWorldMarkHandle = &marksSystem->firstGlassMarkHandle;
            goto LABEL_18;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 398, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled case.\n") )
              __debugbreak();
            goto LABEL_47;
        }
      }
      ++marks;
      p_context += 20;
    }
    while ( marks != v5 );
  }
}

/*
==============
FX_GenerateDynMarkVertsCmd
==============
*/
void FX_GenerateDynMarkVertsCmd(const void *const cmdInfo)
{
  __int64 v2; 
  volatile signed __int32 *v3; 
  FxMarksSystem *v4; 
  __int64 v5; 
  int v6; 
  volatile int *v7; 
  unsigned int indexCount; 

  if ( *((_BYTE *)cmdInfo + 84) && (*((_BYTE *)cmdInfo + 85) || *((_BYTE *)cmdInfo + 86)) )
  {
    v2 = *((int *)cmdInfo + 20);
    v3 = &g_markThread[v2];
    if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[v2]) )
      __debugbreak();
    if ( _InterlockedIncrement(v3) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2733, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[cmd->localClientNum] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[cmd->localClientNum] ) == 1") )
      __debugbreak();
    v4 = (FxMarksSystem *)*((_QWORD *)cmdInfo + 9);
    v5 = *((_QWORD *)cmdInfo + 8);
    if ( *((_BYTE *)cmdInfo + 85) )
    {
      v6 = *((_DWORD *)cmdInfo + 10);
      if ( v6 )
        FX_GenerateMarkVertsForStaticModels(v4, (const FxCamera *)(v5 + 96), *((LocalClientNum_t *)cmdInfo + 20), v6, *(const unsigned int **)cmdInfo, &indexCount);
    }
    if ( *((_BYTE *)cmdInfo + 86) )
      R_GenerateMarkVertsForDynamicModels(v4, (const FxCamera *)(v5 + 96), (const GfxSceneMarkDrawData *)cmdInfo, &indexCount, 0);
    v7 = &g_markThread[*((int *)cmdInfo + 20)];
    if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v7) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2760, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[cmd->localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[cmd->localClientNum] ) == 0") )
      __debugbreak();
  }
}

/*
==============
FX_GenerateMarkVertsCmd
==============
*/
void FX_GenerateMarkVertsCmd(const void *const cmdInfo)
{
  __int64 v2; 
  FxMarksSystem *v3; 
  volatile int *v4; 
  unsigned int indexCount; 

  if ( fx_marks_all->current.enabled )
  {
    v2 = *((int *)cmdInfo + 4);
    v3 = (FxMarksSystem *)*((_QWORD *)cmdInfo + 1);
    Profile_Begin(229);
    v4 = &g_markThread[v2];
    if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v4) )
      __debugbreak();
    if ( _InterlockedIncrement(v4) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2793, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1") )
      __debugbreak();
    FX_GenerateMarkVertsForList_WorldBrush(v3, v3->firstActiveWorldMarkHandle, (const FxCamera *)((char *)cmdInfo + 32), &indexCount);
    if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v4) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2801, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
      __debugbreak();
    Profile_EndInternal(NULL);
  }
}

/*
==============
FX_GenerateMarkVertsForEntBrush
==============
*/
void FX_GenerateMarkVertsForEntBrush(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int entId, unsigned int *indexCount, const GfxPlacement *placement)
{
  __int64 v7; 
  unsigned __int16 v9; 

  v7 = entId;
  if ( !placement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2620, ASSERT_TYPE_ASSERT, "(placement)", (const char *)&queryFormat, "placement") )
    __debugbreak();
  v9 = marksSystem->entFirstMarkHandles[v7];
  if ( v9 != 0xFFFF )
  {
    Profile_Begin(228);
    FX_GenerateMarkVertsForList_EntBrush(marksSystem, camera, v9, indexCount, placement);
    Profile_EndInternal(NULL);
  }
}

/*
==============
FX_GenerateMarkVertsForEntDObj
==============
*/
void FX_GenerateMarkVertsForEntDObj(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int entId, unsigned int *indexCount, const DObj *remoteDobj)
{
  FX_GenerateMarkVertsForEntDObj_internal(marksSystem, camera, localClientNum, indexCount, remoteDobj, marksSystem->entFirstMarkHandles[entId]);
}

/*
==============
FX_GenerateMarkVertsForEntDObj_internal
==============
*/
void FX_GenerateMarkVertsForEntDObj_internal(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, unsigned int *indexCount, const DObj *remoteDObj, unsigned __int16 entMarkListHead)
{
  int SkelTimeStamp; 
  DObjAnimMat *boneMtxList; 
  DObjPartBits partBits; 

  if ( !remoteDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2568, ASSERT_TYPE_ASSERT, "(remoteDObj)", (const char *)&queryFormat, "remoteDObj") )
    __debugbreak();
  if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2569, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
    __debugbreak();
  if ( entMarkListHead != 0xFFFF )
  {
    Profile_Begin(228);
    DObjLock(remoteDObj);
    SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
    if ( DObjSkelExists(remoteDObj, SkelTimeStamp) )
    {
      boneMtxList = remoteDObj->skel.mat;
      DObjGetHidePartBits(remoteDObj, &partBits);
      FX_GenerateMarkVertsForList_EntDObj(marksSystem, entMarkListHead, camera, indexCount, remoteDObj, boneMtxList, &partBits);
    }
    DObjUnlock(remoteDObj);
    Profile_EndInternal(NULL);
  }
}

/*
==============
FX_GenerateMarkVertsForEntXModel
==============
*/
void FX_GenerateMarkVertsForEntXModel(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int entId, unsigned int *indexCount, const GfxScaledPlacement *placement, const DObj *dobj)
{
  unsigned __int16 v9; 

  v9 = marksSystem->entFirstMarkHandles[entId];
  if ( v9 != 0xFFFF )
  {
    Profile_Begin(228);
    FX_GenerateMarkVertsForList_EntXModel(marksSystem, v9, camera, indexCount, dobj, placement);
    Profile_EndInternal(NULL);
  }
}

/*
==============
FX_GenerateMarkVertsForGlass
==============
*/
void FX_GenerateMarkVertsForGlass(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  volatile int *v2; 
  FxMarksSystem *MarksSystem; 
  FxSystem *System; 
  unsigned int indexCount; 

  v1 = localClientNum;
  if ( fx_marks_all->current.enabled )
  {
    v2 = &g_markThread[localClientNum];
    if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v2) )
      __debugbreak();
    if ( _InterlockedIncrement(v2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2695, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1") )
      __debugbreak();
    MarksSystem = FX_GetMarksSystem((LocalClientNum_t)v1);
    System = FX_GetSystem(v1);
    FX_GenerateMarkVertsForList_Glass(MarksSystem, MarksSystem->firstGlassMarkHandle, &System->camera, &indexCount);
    if ( ((unsigned __int64)&g_markThread[v1] & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[v1]) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2705, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
      __debugbreak();
  }
}

/*
==============
FX_GenerateMarkVertsForGlassCmd
==============
*/
void FX_GenerateMarkVertsForGlassCmd(const void *const cmdInfo)
{
  __int64 v1; 
  volatile int *v2; 
  FxMarksSystem *MarksSystem; 
  FxSystem *System; 
  unsigned int indexCount; 

  if ( fx_marks_all->current.enabled )
  {
    v1 = *(int *)cmdInfo;
    v2 = &g_markThread[v1];
    if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v2) )
      __debugbreak();
    if ( _InterlockedIncrement(v2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2695, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1") )
      __debugbreak();
    MarksSystem = FX_GetMarksSystem((LocalClientNum_t)v1);
    System = FX_GetSystem(v1);
    FX_GenerateMarkVertsForList_Glass(MarksSystem, MarksSystem->firstGlassMarkHandle, &System->camera, &indexCount);
    if ( ((unsigned __int64)&g_markThread[v1] & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v2) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2705, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
      __debugbreak();
  }
}

/*
==============
FX_GenerateMarkVertsForList_EntBrush
==============
*/
char FX_GenerateMarkVertsForList_EntBrush(FxMarksSystem *marksSystem, const FxCamera *camera, unsigned __int16 head, unsigned int *indexCount, const GfxPlacement *placement)
{
  const FxCamera *v6; 
  FxMark *v8; 
  unsigned int frustumPlaneCount; 
  float radius; 
  __m128 v12; 
  int v15; 
  unsigned __int16 uid; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  unsigned __int16 v24; 
  __int64 atlasIndex; 
  __int64 markFlags; 
  unsigned __int8 outColor[4]; 
  unsigned __int8 color[4]; 
  const FxCamera *v30; 
  float4 posWorld; 
  vec3_t out; 
  tmat33_t<vec3_t> in1; 
  __m128 v34; 
  tmat43_t<vec3_t> outTransform; 
  tmat33_t<vec3_t> v36; 

  v30 = camera;
  v6 = camera;
  FX_GenerateMarkVertsForMark_MatrixFromPlacement(placement, &vec3_origin, &outTransform);
  while ( head != 0xFFFF )
  {
    if ( head >= 0x200u )
    {
      LODWORD(markFlags) = 512;
      LODWORD(atlasIndex) = head;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", atlasIndex, markFlags) )
        __debugbreak();
    }
    if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    v8 = &marksSystem->marks[head];
    head = v8->nextMark;
    if ( v8 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( v8->context.modelType == 3 )
    {
      if ( (*((_BYTE *)v8 + 103) & 2) != 0 )
      {
        FX_FreeMark(marksSystem, v8, -14);
      }
      else
      {
        MatrixTransformVector43(&v8->origin, &outTransform, &out);
        frustumPlaneCount = v6->frustumPlaneCount;
        radius = v8->radius;
        v34.m128_i32[3] = 0;
        v12 = v34;
        v12.m128_f32[0] = out.v[0];
        _XMM4 = v12;
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rsp+150h+out+4], 50h+var_40
          vinsertps xmm4, xmm4, dword ptr [rsp+150h+out+8], 50h+var_30
        }
        v34 = _XMM4;
        posWorld.v = _XMM4;
        if ( !FX_CullSphere(v6, frustumPlaneCount, &posWorld, radius, 0) )
        {
          MatrixTransformVector(&v8->texCoordAxisZ, (const tmat33_t<vec3_t> *)&outTransform, in1.m);
          MatrixTransformVector(&v8->texCoordAxisX, (const tmat33_t<vec3_t> *)&outTransform, &in1.m[1]);
          MatrixTransformVector(&v8->texCoordAxisY, (const tmat33_t<vec3_t> *)&outTransform, &in1.m[2]);
          FX_ExpandMarkVerts_GetColor(marksSystem, v8, outColor);
          v15 = FX_CalculateMarkAtlasFrame(marksSystem, v8);
          uid = FX_MarkToHandle(marksSystem, v8);
          R_AddMarkDecalVolume(&out, &v8->halfSize, &in1, outColor, v8->material, v15, 2u, uid);
          if ( (*((_BYTE *)v8 + 103) & 4) != 0 )
          {
            LODWORD(v17) = LODWORD(v8->texCoordAxisZ.v[1]) ^ _xmm;
            LODWORD(in1.m[0].v[0]) = LODWORD(v8->texCoordAxisZ.v[0]) ^ _xmm;
            LODWORD(v18) = LODWORD(v8->texCoordAxisZ.v[2]) ^ _xmm;
            in1.m[0].v[1] = v17;
            LODWORD(v19) = LODWORD(v8->texCoordAxisX.v[0]) ^ _xmm;
            in1.m[0].v[2] = v18;
            LODWORD(in1.m[1].v[1]) = LODWORD(v8->texCoordAxisX.v[1]) ^ _xmm;
            v20 = v8->texCoordAxisY.v[0];
            in1.m[1].v[0] = v19;
            LODWORD(v21) = LODWORD(v8->texCoordAxisX.v[2]) ^ _xmm;
            v22 = v8->texCoordAxisY.v[1];
            in1.m[2].v[0] = v20;
            in1.m[2].v[2] = v8->texCoordAxisY.v[2];
            in1.m[1].v[2] = v21;
            in1.m[2].v[1] = v22;
            MatrixTransformVector(in1.m, (const tmat33_t<vec3_t> *)&outTransform, v36.m);
            MatrixTransformVector(&in1.m[1], (const tmat33_t<vec3_t> *)&outTransform, &v36.m[1]);
            MatrixTransformVector(&in1.m[2], (const tmat33_t<vec3_t> *)&outTransform, &v36.m[2]);
            FX_ExpandMarkVerts_GetColor(marksSystem, v8, color);
            v23 = FX_CalculateMarkAtlasFrame(marksSystem, v8);
            v24 = FX_MarkToHandle(marksSystem, v8);
            R_AddMarkDecalVolume(&out, &v8->halfSize, &v36, color, v8->material, v23, 2u, v24);
          }
          v6 = v30;
        }
      }
    }
  }
  return 1;
}

/*
==============
FX_GenerateMarkVertsForList_EntDObj
==============
*/
void FX_GenerateMarkVertsForList_EntDObj(FxMarksSystem *marksSystem, unsigned __int16 head, const FxCamera *camera, unsigned int *indexCount, const DObj *dobj, const DObjAnimMat *boneMtxList, DObjPartBits *hidePartBits)
{
  int v7; 
  unsigned __int16 nextMark; 
  int DobjModelGlobalBoneBase; 
  FxMark *v11; 
  GfxMarkContext *p_context; 
  unsigned int v13; 
  const char *v14; 
  unsigned int v15; 
  float radius; 
  unsigned int frustumPlaneCount; 
  __m128 v19; 
  const char *Name; 
  unsigned int NumModels; 
  __int64 v24; 
  __int64 v25; 
  float4 posWorld; 
  vec3_t out; 
  __m128 v29; 
  tmat43_t<vec3_t> outTransform; 

  v7 = -1;
  nextMark = head;
  DobjModelGlobalBoneBase = -1;
  while ( nextMark != 0xFFFF )
  {
    if ( nextMark >= 0x200u )
    {
      LODWORD(v25) = 512;
      LODWORD(v24) = nextMark;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    v11 = &marksSystem->marks[nextMark];
    nextMark = v11->nextMark;
    p_context = &v11->context;
    if ( v11 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( p_context->modelType == 4 )
    {
      if ( v11 == (FxMark *)-76i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2003, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
      }
      if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
        __debugbreak();
      v13 = v11->context.surfIndex & 0x1F;
      if ( (int)v13 >= DObjGetNumModels(dobj) )
      {
        Name = DObjGetName(dobj);
        NumModels = DObjGetNumModels(dobj);
        Com_PrintError(21, "FX MARKS: Invalid model index %d for number of models %d for dobj %s. Please report the situation that caused this.\n", v13, NumModels, Name);
      }
      else if ( DObjGetModel(dobj, v13) )
      {
        if ( v13 != v7 )
        {
          v7 = v13;
          DobjModelGlobalBoneBase = FX_GetDobjModelGlobalBoneBase(dobj, v13);
        }
        if ( DobjModelGlobalBoneBase < 0 )
        {
          LODWORD(v24) = DobjModelGlobalBoneBase;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2273, ASSERT_TYPE_ASSERT, "( ( markModelGlobalBoneBase >= 0 ) )", "( markModelGlobalBoneBase ) = %i", v24) )
            __debugbreak();
        }
        v15 = DobjModelGlobalBoneBase + v11->context.lmapIndex;
        if ( (*((_BYTE *)v11 + 103) & 2) != 0 )
        {
          FX_FreeMark(marksSystem, v11, -12);
        }
        else if ( !bitarray_base<bitarray<256>>::testBit(hidePartBits, v15) && DObjSkelIsBoneUpToDate(dobj, v15) )
        {
          FX_GenerateMarkVertsForMark_MatrixFromAnim(v11, dobj, &boneMtxList[v15], &camera->viewOffset, &outTransform);
          MatrixTransformVector43(&v11->origin, &outTransform, &out);
          radius = v11->radius;
          v29.m128_i32[3] = 0;
          frustumPlaneCount = camera->frustumPlaneCount;
          v19 = v29;
          v19.m128_f32[0] = out.v[0];
          _XMM4 = v19;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [rsp+0F8h+out+4], 10h
            vinsertps xmm4, xmm4, dword ptr [rsp+0F8h+out+8], arg_18
          }
          v29 = _XMM4;
          posWorld.v = _XMM4;
          if ( !FX_CullSphere(camera, frustumPlaneCount, &posWorld, radius, 0) )
            FX_AddDecalVolumeMarkAnimated(marksSystem, v11, &out, &outTransform, 0);
        }
      }
      else
      {
        v14 = DObjGetName(dobj);
        Com_PrintError(21, "FX MARKS: Invalid model with mark index %d for dobj %s. Please report the situation that caused this.\n", v13, v14);
      }
    }
  }
}

/*
==============
FX_GenerateMarkVertsForList_EntXModel
==============
*/
char FX_GenerateMarkVertsForList_EntXModel(FxMarksSystem *marksSystem, unsigned __int16 head, const FxCamera *camera, unsigned int *indexCount, const DObj *dobj, const GfxScaledPlacement *placement)
{
  float scale; 
  FxMark *v10; 
  GfxMarkContext *p_context; 
  unsigned __int64 lmapIndex; 
  unsigned int frustumPlaneCount; 
  float radius; 
  __m128 v16; 
  __int64 v20; 
  __int64 v21; 
  float4 posWorld; 
  vec3_t out; 
  __m128 v24; 
  DObjPartBits partBits; 
  tmat43_t<vec3_t> outTransform; 

  scale = placement->scale;
  if ( scale != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2079, ASSERT_TYPE_ASSERT, "( ( placement->scale == 1.0f ) )", "( placement->scale ) = %g", scale) )
    __debugbreak();
  FX_GenerateMarkVertsForMark_MatrixFromPlacement(&placement->base, &vec3_origin, &outTransform);
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2314, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  DObjGetHidePartBits(dobj, &partBits);
  while ( head != 0xFFFF )
  {
    if ( head >= 0x200u )
    {
      LODWORD(v21) = 512;
      LODWORD(v20) = head;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    v10 = &marksSystem->marks[head];
    head = v10->nextMark;
    p_context = &v10->context;
    if ( v10 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( p_context->modelType == 4 )
    {
      if ( v10 == (FxMark *)-76i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2003, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
      }
      if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
        __debugbreak();
      if ( (v10->context.surfIndex & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2326, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_DObjModelIndex( &mark->context ) == 0)", (const char *)&queryFormat, "FX_GetMarkContext_DObjModelIndex( &mark->context ) == 0") )
        __debugbreak();
      lmapIndex = v10->context.lmapIndex;
      if ( (*((_BYTE *)v10 + 103) & 2) != 0 )
      {
        FX_FreeMark(marksSystem, v10, -13);
      }
      else
      {
        if ( (unsigned int)lmapIndex >= 0x100 )
        {
          LODWORD(v21) = 256;
          LODWORD(v20) = v10->context.lmapIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v20, v21) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (lmapIndex & 0x1F)) & partBits.array[lmapIndex >> 5]) == 0 )
        {
          MatrixTransformVector43(&v10->origin, &outTransform, &out);
          frustumPlaneCount = camera->frustumPlaneCount;
          radius = v10->radius;
          v24.m128_i32[3] = 0;
          v16 = v24;
          v16.m128_f32[0] = out.v[0];
          _XMM4 = v16;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [rsp+108h+out+4], 10h
            vinsertps xmm4, xmm4, dword ptr [rsp+108h+out+8], arg_18
          }
          v24 = _XMM4;
          posWorld.v = _XMM4;
          if ( !FX_CullSphere(camera, frustumPlaneCount, &posWorld, radius, 0) )
            FX_AddDecalVolumeMarkAnimated(marksSystem, v10, &out, &outTransform, 0);
        }
      }
    }
  }
  return 1;
}

/*
==============
FX_GenerateMarkVertsForList_Glass
==============
*/
char FX_GenerateMarkVertsForList_Glass(FxMarksSystem *marksSystem, unsigned __int16 head, const FxCamera *camera, unsigned int *indexCount)
{
  unsigned __int16 nextMark; 
  bool enabled; 
  float v8; 
  FxMark *v9; 
  __int64 dynEntId_low; 
  __int64 v11; 
  FxGlassPiecePlace *v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v29; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  int v37; 
  int v38; 
  int v39; 
  unsigned __int16 uid; 
  unsigned __int8 *v41; 
  vec3_t *p_origin; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  __int64 atlasIndex; 
  __int64 markFlags; 
  unsigned __int8 outColor[4]; 
  unsigned __int8 color[4]; 
  int v55; 
  tmat33_t<vec3_t> axis; 
  int v57[4]; 
  vec3_t origin; 

  nextMark = head;
  enabled = fx_marks->current.enabled;
  if ( head != 0xFFFF )
  {
    v8 = FLOAT_2_0;
    do
    {
      if ( nextMark >= 0x200u )
      {
        LODWORD(markFlags) = 512;
        LODWORD(atlasIndex) = nextMark;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", atlasIndex, markFlags) )
          __debugbreak();
      }
      if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
        __debugbreak();
      v9 = &marksSystem->marks[nextMark];
      nextMark = v9->nextMark;
      if ( (*((_BYTE *)v9 + 103) & 1) != 0 || enabled )
      {
        if ( v9 == (FxMark *)-76i64 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2157, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
        }
        if ( v9->context.modelType != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2158, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
          __debugbreak();
        dynEntId_low = LOWORD(v9->context.typeSpecificIndex.dynEntId);
        if ( (unsigned int)dynEntId_low >= 0xFFF0 )
        {
          LODWORD(markFlags) = 65520;
          LODWORD(atlasIndex) = LOWORD(v9->context.typeSpecificIndex.dynEntId);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2456, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( 65008 + 512 )", "pieceIndex doesn't index MAX_MAP_GLASS_PIECES + MAX_GLASS_BROKEN_PIECES\n\t%i not in [0, %i)", atlasIndex, markFlags) )
            __debugbreak();
        }
        if ( R_GetSceneGlass(dynEntId_low)->rendered )
        {
          if ( (*((_BYTE *)v9 + 103) & 2) != 0 )
          {
            FX_FreeMark(marksSystem, v9, -16);
          }
          else
          {
            v11 = dynEntId_low;
            v12 = &fxWorld.glassSys.piecePlaces[dynEntId_low];
            v13 = LODWORD(fxWorld.glassSys.halfThickness[v11]);
            v14 = v12->frame.quat.v[1];
            v15 = v12->frame.quat.v[0];
            v16 = v12->frame.quat.v[2];
            v17 = v12->frame.quat.v[3];
            v18 = (float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16)) + (float)(v17 * v17);
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v15, v14, v16, v17, fsqrt(v18)) )
              __debugbreak();
            v19 = v12->frame.quat.v[1];
            v20 = (float)((float)(v12->frame.quat.v[0] * v12->frame.quat.v[2]) + (float)(v19 * v12->frame.quat.v[3])) * v8;
            v21 = (float)((float)(v19 * v12->frame.quat.v[2]) - (float)(v12->frame.quat.v[0] * v12->frame.quat.v[3])) * v8;
            v22 = camera->origin.v[0] - v12->frame.origin.v[0];
            v23 = (float)((float)(v12->frame.quat.v[0] * v12->frame.quat.v[0]) + (float)(v19 * v19)) * v8;
            v24 = camera->origin.v[2] - v12->frame.origin.v[2];
            v25 = 1.0 - v23;
            _XMM1 = v13 ^ (unsigned int)_xmm;
            _XMM0 = 0i64;
            __asm { vcmpless xmm0, xmm0, xmm4 }
            v29 = v9->texCoordAxisZ.v[1];
            __asm { vblendvps xmm2, xmm1, xmm11, xmm0 }
            v31 = v25 * *(float *)&_XMM2;
            v32 = v9->texCoordAxisZ.v[0];
            v33 = v21 * *(float *)&_XMM2;
            v34 = v9->texCoordAxisZ.v[2];
            *(float *)&_XMM1 = (float)(camera->origin.v[1] - v12->frame.origin.v[1]) * v29;
            v55 = _XMM2;
            v35 = v20 * *(float *)&_XMM2;
            if ( (float)((float)(*(float *)&_XMM1 + (float)(v22 * v32)) + (float)(v34 * v24)) < 0.0 )
            {
              v43 = v9->texCoordAxisX.v[1];
              LODWORD(axis.m[0].v[0]) = LODWORD(v32) ^ _xmm;
              LODWORD(axis.m[0].v[2]) = LODWORD(v34) ^ _xmm;
              LODWORD(axis.m[0].v[1]) = LODWORD(v29) ^ _xmm;
              LODWORD(axis.m[1].v[0]) = LODWORD(v9->texCoordAxisX.v[0]) ^ _xmm;
              LODWORD(v44) = LODWORD(v43) ^ _xmm;
              LODWORD(v45) = LODWORD(v9->texCoordAxisX.v[2]) ^ _xmm;
              axis.m[2].v[0] = v9->texCoordAxisY.v[0];
              axis.m[2].v[2] = v9->texCoordAxisY.v[2];
              v46 = v35 + v9->origin.v[0];
              axis.m[1].v[1] = v44;
              v47 = v9->texCoordAxisY.v[1];
              origin.v[0] = v46;
              v48 = v31 + v9->origin.v[2];
              axis.m[2].v[1] = v47;
              v49 = v33 + v9->origin.v[1];
              origin.v[2] = v48;
              axis.m[1].v[2] = v45;
              origin.v[1] = v49;
              FX_ExpandMarkVerts_GetColor(marksSystem, v9, color);
              v39 = FX_CalculateMarkAtlasFrame(marksSystem, v9);
              uid = FX_MarkToHandle(marksSystem, v9);
              v41 = color;
              p_origin = &origin;
            }
            else
            {
              v36 = v9->texCoordAxisY.v[2];
              *(_OWORD *)axis.row1.v = *(_OWORD *)v9->texCoordAxisX.v;
              axis.m[2].v[1] = v9->texCoordAxisY.v[1];
              *(float *)v57 = v35 + v9->origin.v[0];
              *(float *)&v37 = v31 + v9->origin.v[2];
              axis.m[2].v[2] = v36;
              *(float *)&v38 = v33 + v9->origin.v[1];
              v57[2] = v37;
              axis.m[0].v[0] = v32;
              axis.m[0].v[1] = v29;
              axis.m[0].v[2] = v34;
              v57[1] = v38;
              FX_ExpandMarkVerts_GetColor(marksSystem, v9, outColor);
              v39 = FX_CalculateMarkAtlasFrame(marksSystem, v9);
              uid = FX_MarkToHandle(marksSystem, v9);
              v41 = outColor;
              p_origin = (vec3_t *)v57;
            }
            R_AddMarkDecalVolume(p_origin, &v9->halfSize, &axis, v41, v9->material, v39, 0, uid);
            v8 = FLOAT_2_0;
          }
        }
      }
    }
    while ( nextMark != 0xFFFF );
  }
  return 1;
}

/*
==============
FX_GenerateMarkVertsForList_WorldBrush
==============
*/
char FX_GenerateMarkVertsForList_WorldBrush(FxMarksSystem *marksSystem, unsigned __int16 head, const FxCamera *camera, unsigned int *indexCount)
{
  unsigned __int16 nextMark; 
  bool enabled; 
  FxMark *v8; 
  float v9; 
  unsigned int frustumPlaneCount; 
  float radius; 
  __m128 v13; 
  char v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  unsigned __int16 uid; 
  __int64 atlasIndex; 
  __int64 markFlags; 
  unsigned __int8 outColor[16]; 
  float4 posWorld; 
  __m128 v30; 
  tmat33_t<vec3_t> axis; 

  nextMark = head;
  enabled = fx_marks->current.enabled;
  while ( nextMark != 0xFFFF )
  {
    if ( nextMark >= 0x200u )
    {
      LODWORD(markFlags) = 512;
      LODWORD(atlasIndex) = nextMark;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", atlasIndex, markFlags) )
        __debugbreak();
    }
    if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    v8 = &marksSystem->marks[nextMark];
    nextMark = v8->nextMark;
    if ( (*((_BYTE *)v8 + 103) & 1) != 0 || enabled )
    {
      v9 = v8->origin.v[0];
      frustumPlaneCount = camera->frustumPlaneCount;
      radius = v8->radius;
      v30.m128_i32[3] = 0;
      v13 = v30;
      v13.m128_f32[0] = v9;
      _XMM4 = v13;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rdi+14h], 10h
        vinsertps xmm4, xmm4, dword ptr [rdi+18h], 20h ; ' '
      }
      v30 = _XMM4;
      posWorld.v = _XMM4;
      if ( !FX_CullSphere(camera, frustumPlaneCount, &posWorld, radius, 0) )
      {
        v16 = *((_BYTE *)v8 + 103);
        if ( (v16 & 2) != 0 )
        {
          FX_FreeMark(marksSystem, v8, -17);
        }
        else
        {
          FX_AddDecalVolumeMark(marksSystem, v8, 0);
          if ( (v16 & 4) != 0 )
          {
            LODWORD(v17) = LODWORD(v8->texCoordAxisZ.v[1]) ^ _xmm;
            LODWORD(axis.m[0].v[0]) = LODWORD(v8->texCoordAxisZ.v[0]) ^ _xmm;
            LODWORD(v18) = LODWORD(v8->texCoordAxisZ.v[2]) ^ _xmm;
            axis.m[0].v[1] = v17;
            LODWORD(v19) = LODWORD(v8->texCoordAxisX.v[0]) ^ _xmm;
            axis.m[0].v[2] = v18;
            LODWORD(axis.m[1].v[1]) = LODWORD(v8->texCoordAxisX.v[1]) ^ _xmm;
            v20 = v8->texCoordAxisY.v[0];
            axis.m[1].v[0] = v19;
            LODWORD(v21) = LODWORD(v8->texCoordAxisX.v[2]) ^ _xmm;
            v22 = v8->texCoordAxisY.v[1];
            axis.m[2].v[0] = v20;
            axis.m[2].v[2] = v8->texCoordAxisY.v[2];
            axis.m[1].v[2] = v21;
            axis.m[2].v[1] = v22;
            FX_ExpandMarkVerts_GetColor(marksSystem, v8, outColor);
            v23 = FX_CalculateMarkAtlasFrame(marksSystem, v8);
            uid = FX_MarkToHandle(marksSystem, v8);
            R_AddMarkDecalVolume(&v8->origin, &v8->halfSize, &axis, outColor, v8->material, v23, 0, uid);
          }
        }
      }
    }
  }
  return 1;
}

/*
==============
FX_GenerateMarkVertsForMark_MatrixFromAnim
==============
*/
void FX_GenerateMarkVertsForMark_MatrixFromAnim(FxMark *mark, const DObj *dobj, const DObjAnimMat *boneMtx, const vec3_t *viewOffset, tmat43_t<vec3_t> *outTransform)
{
  unsigned __int16 lmapIndex; 
  int MarkContext_DObjModelIndex; 
  float v11; 
  float v12; 
  const XModel *Model; 
  DObjSkelMat skelMat; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> in1; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2095, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !boneMtx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2096, ASSERT_TYPE_ASSERT, "(boneMtx)", (const char *)&queryFormat, "boneMtx") )
    __debugbreak();
  lmapIndex = mark->context.lmapIndex;
  MarkContext_DObjModelIndex = FX_GetMarkContext_DObjModelIndex(&mark->context);
  LocalConvertQuatToSkelMat(boneMtx, &skelMat);
  in2.m[0].v[0] = skelMat.axis.m[0].v[0];
  in2.m[0].v[1] = skelMat.axis.m[0].v[1];
  in2.m[0].v[2] = skelMat.axis.m[0].v[2];
  in2.m[1] = skelMat.axis.m[1].xyz;
  in2.m[2].v[0] = skelMat.axis.m[2].v[0];
  in2.m[2].v[1] = skelMat.axis.m[2].v[1];
  v11 = skelMat.origin.v[0] + viewOffset->v[0];
  in2.m[2].v[2] = skelMat.axis.m[2].v[2];
  v12 = skelMat.origin.v[1] + viewOffset->v[1];
  in2.m[3].v[0] = v11;
  in2.m[3].v[2] = skelMat.origin.v[2] + viewOffset->v[2];
  in2.m[3].v[1] = v12;
  Model = DObjGetModel(dobj, MarkContext_DObjModelIndex);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LocalConvertQuatToInverseSkelMat(&Model->baseMat[lmapIndex], &skelMat);
  in1.m[0].v[0] = skelMat.axis.m[0].v[0];
  in1.m[0].v[1] = skelMat.axis.m[0].v[1];
  in1.m[0].v[2] = skelMat.axis.m[0].v[2];
  in1.m[1] = skelMat.axis.m[1].xyz;
  in1.m[2] = skelMat.axis.m[2].xyz;
  in1.m[3] = skelMat.origin.xyz;
  MatrixMultiply43(&in1, &in2, outTransform);
}

/*
==============
FX_GenerateMarkVertsForMark_MatrixFromPlacement
==============
*/
void FX_GenerateMarkVertsForMark_MatrixFromPlacement(const GfxPlacement *placement, const vec3_t *viewOffset, tmat43_t<vec3_t> *outTransform)
{
  float v3; 
  float v4; 
  float v5; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  DObjAnimMat mat; 
  DObjSkelMat skelMat; 

  v3 = placement->origin.v[0];
  mat.quat = placement->quat;
  mat.transWeight = FLOAT_2_0;
  v4 = placement->origin.v[1];
  mat.trans.v[0] = v3;
  v5 = placement->origin.v[2];
  mat.trans.v[1] = v4;
  mat.trans.v[2] = v5;
  LocalConvertQuatToSkelMat(&mat, &skelMat);
  v8 = skelMat.origin.v[0];
  v9 = skelMat.axis.m[0].v[1];
  outTransform->m[0].v[0] = skelMat.axis.m[0].v[0];
  v10 = skelMat.axis.m[0].v[2];
  outTransform->m[0].v[1] = v9;
  v11 = skelMat.axis.m[1].v[0];
  outTransform->m[0].v[2] = v10;
  v12 = skelMat.axis.m[1].v[1];
  outTransform->m[1].v[0] = v11;
  v13 = skelMat.axis.m[1].v[2];
  outTransform->m[1].v[1] = v12;
  v14 = skelMat.axis.m[2].v[0];
  outTransform->m[1].v[2] = v13;
  v15 = skelMat.axis.m[2].v[1];
  outTransform->m[2].v[0] = v14;
  outTransform->m[2].v[2] = skelMat.axis.m[2].v[2];
  v16 = skelMat.origin.v[1];
  outTransform->m[2].v[1] = v15;
  v17 = skelMat.origin.v[2];
  outTransform->m[3].v[0] = v8;
  outTransform->m[3].v[1] = v16;
  outTransform->m[3].v[2] = v17;
  outTransform->m[3].v[0] = v8 + viewOffset->v[0];
  outTransform->m[3].v[1] = viewOffset->v[1] + outTransform->m[3].v[1];
  outTransform->m[3].v[2] = viewOffset->v[2] + outTransform->m[3].v[2];
}

/*
==============
FX_GenerateMarkVertsForMark_MatrixFromScaledPlacement
==============
*/
void FX_GenerateMarkVertsForMark_MatrixFromScaledPlacement(const GfxScaledPlacement *placement, const vec3_t *viewOffset, tmat43_t<vec3_t> *outTransform)
{
  float scale; 

  scale = placement->scale;
  if ( scale != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2079, ASSERT_TYPE_ASSERT, "( ( placement->scale == 1.0f ) )", "( placement->scale ) = %g", scale) )
    __debugbreak();
  FX_GenerateMarkVertsForMark_MatrixFromPlacement(&placement->base, viewOffset, outTransform);
}

/*
==============
FX_GenerateMarkVertsForStaticModels
==============
*/
void FX_GenerateMarkVertsForStaticModels(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int smodelCount)
{
  bool enabled; 
  FxMark *marks; 
  unsigned __int16 v8; 
  FxMark *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  FxMark *i; 
  unsigned __int16 nextMark; 
  FxMark *v14; 
  float v15; 
  unsigned int frustumPlaneCount; 
  float radius; 
  __m128 v19; 
  __int64 v22; 
  __int64 v23; 
  bool v24; 
  FxMark *v25; 
  float4 posWorld; 
  __m128 v27; 

  if ( !fx_marks_smodels->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2644, ASSERT_TYPE_ASSERT, "(fx_marks_smodels->current.enabled)", (const char *)&queryFormat, "fx_marks_smodels->current.enabled") )
    __debugbreak();
  enabled = fx_marks->current.enabled;
  v24 = enabled;
  Profile_Begin(227);
  marks = marksSystem->marks;
  v8 = 0;
  v9 = marks + 512;
  v25 = marks + 512;
  if ( !marks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 172, ASSERT_TYPE_ASSERT, "(mark)", (const char *)&queryFormat, "mark") )
    __debugbreak();
  v10 = (__int64)((unsigned __int128)(((char *)marks - (char *)marksSystem->marks) * (__int128)0x6666666666666667i64) >> 64) >> 6;
  v11 = (v10 >> 63) + v10;
  if ( (unsigned __int16)v11 >= 0x200u )
  {
    LODWORD(v22) = (unsigned __int16)v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v22, 512) )
      __debugbreak();
  }
  if ( (_WORD)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2655, ASSERT_TYPE_ASSERT, "(FX_MarkToHandle( marksSystem, &marksSystem->marks[0] ) == 0)", (const char *)&queryFormat, "FX_MarkToHandle( marksSystem, &marksSystem->marks[0] ) == 0") )
    __debugbreak();
  for ( i = marksSystem->marks; i != v9; ++v8 )
  {
    if ( ((*((_BYTE *)i + 103) & 1) != 0 || enabled) && i->timeDrawn != -1 && i->prevMark == 0xFFFF )
    {
      if ( i == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
      if ( i->context.modelType == 2 )
      {
        nextMark = v8;
        if ( v8 != 0xFFFF )
        {
          do
          {
            if ( nextMark >= 0x200u )
            {
              LODWORD(v23) = 512;
              LODWORD(v22) = nextMark;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v22, v23) )
                __debugbreak();
            }
            v14 = &marksSystem->marks[nextMark];
            nextMark = v14->nextMark;
            if ( (*((_BYTE *)v14 + 103) & 2) != 0 )
            {
              FX_FreeMark(marksSystem, v14, -15);
            }
            else
            {
              v15 = v14->origin.v[0];
              frustumPlaneCount = camera->frustumPlaneCount;
              radius = v14->radius;
              v27.m128_i32[3] = 0;
              v19 = v27;
              v19.m128_f32[0] = v15;
              _XMM4 = v19;
              __asm
              {
                vinsertps xmm4, xmm4, dword ptr [rbx+14h], 10h
                vinsertps xmm4, xmm4, dword ptr [rbx+18h], 20h ; ' '
              }
              v27 = _XMM4;
              posWorld.v = _XMM4;
              if ( !FX_CullSphere(camera, frustumPlaneCount, &posWorld, radius, 0) )
                FX_AddDecalVolumeMark(marksSystem, v14, 0);
            }
          }
          while ( nextMark != 0xFFFF );
          v9 = v25;
          enabled = v24;
        }
      }
    }
    ++i;
  }
  Profile_EndInternal(NULL);
}

/*
==============
FX_GenerateMarkVertsForViewmodelDObj
==============
*/
void FX_GenerateMarkVertsForViewmodelDObj(FxMarksSystem *marksSystem, const FxCamera *camera, LocalClientNum_t localClientNum, int viewmodelClientIndex, unsigned int *indexCount, const DObj *remoteDobj)
{
  FX_GenerateMarkVertsForEntDObj_internal(marksSystem, camera, localClientNum, indexCount, remoteDobj, marksSystem->firstViewmodelMarkHandle[viewmodelClientIndex]);
}

/*
==============
FX_GetDobjMarkFromIterator
==============
*/
char FX_GetDobjMarkFromIterator(FxDobjMarkIterator *markIterator, FxMarkResult *markResult)
{
  __int128 v2; 
  __int128 v3; 
  FxMarksSystem *v6; 
  unsigned __int16 markHandle; 
  int DobjModelGlobalBoneBase; 
  const DObj *obj; 
  FxMark *v10; 
  int MarkContext_DObjModelIndex; 
  unsigned int v12; 
  const XModel *Model; 
  const XModel *v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  signed int v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  const char *Name; 
  unsigned int NumModels; 
  char *fmt; 
  __int64 v38; 
  int v39; 
  FxMarksSystem *marksSystem; 
  tmat43_t<vec3_t> outTransform; 
  __int128 v42; 
  __int128 v43; 

  v6 = FX_GetMarksSystem(markIterator->clientIndex);
  markHandle = markIterator->markHandle;
  marksSystem = v6;
  v39 = -1;
  DobjModelGlobalBoneBase = -1;
  obj = scene.sceneDObj[markIterator->dobjIndex].obj;
  if ( markHandle == 0xFFFF )
    return 0;
  while ( 1 )
  {
    v10 = FX_MarkFromHandle(v6, markHandle);
    markResult->markHandle = markIterator->markHandle;
    markIterator->markHandle = v10->nextMark;
    if ( FX_GetMarkContext_ModelType(&v10->context) == 4 )
    {
      MarkContext_DObjModelIndex = FX_GetMarkContext_DObjModelIndex(&v10->context);
      v12 = MarkContext_DObjModelIndex;
      if ( MarkContext_DObjModelIndex == markIterator->modelIndex )
      {
        if ( MarkContext_DObjModelIndex < 0 || MarkContext_DObjModelIndex >= DObjGetNumModels(obj) )
        {
          Name = DObjGetName(obj);
          NumModels = DObjGetNumModels(obj);
          Com_PrintError(21, "FX MARKS: Invalid model index %d for number of models %d for dobj %s. Please report the situation that caused this.\n", v12, NumModels, Name);
          goto LABEL_33;
        }
        Model = DObjGetModel(obj, v12);
        v14 = Model;
        if ( !Model )
        {
          v15 = DObjGetName(obj);
          Com_PrintError(21, "FX MARKS: Invalid model with mark index %d for dobj %s. Please report the situation that caused this.\n", v12, v15);
          goto LABEL_33;
        }
        v16 = XModelNumBones(Model);
        if ( v10->context.lmapIndex >= v16 )
        {
          v17 = XModelGetName(v14);
          LODWORD(fmt) = v16;
          Com_PrintError(21, "FX MARKS: Mark bone index %d is larger than model '%s' bone count %d. Please report the situation that caused this.\n", v10->context.lmapIndex, v17, fmt);
          goto LABEL_33;
        }
        if ( v12 != v39 )
        {
          v39 = v12;
          DobjModelGlobalBoneBase = FX_GetDobjModelGlobalBoneBase(obj, v12);
        }
        if ( DobjModelGlobalBoneBase < 0 )
        {
          LODWORD(v38) = DobjModelGlobalBoneBase;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3135, ASSERT_TYPE_ASSERT, "( ( markModelGlobalBoneBase >= 0 ) )", "( markModelGlobalBoneBase ) = %i", v38) )
            __debugbreak();
        }
        v18 = DobjModelGlobalBoneBase + v10->context.lmapIndex;
        if ( (*((_BYTE *)v10 + 103) & 2) != 0 )
        {
          FX_FreeMark(marksSystem, v10, -11);
          goto LABEL_33;
        }
        if ( !bitarray_base<bitarray<256>>::testBit(&markIterator->hidePartBits, v18) && DObjSkelIsBoneUpToDate(obj, v18) )
          break;
      }
    }
LABEL_33:
    markHandle = markIterator->markHandle;
    if ( markHandle == 0xFFFF )
      return 0;
    v6 = marksSystem;
  }
  v43 = v2;
  v42 = v3;
  FX_GenerateMarkVertsForMark_MatrixFromAnim(v10, obj, &obj->skel.mat[v18], &markIterator->viewOffset, &outTransform);
  v19 = v10->texCoordAxisZ.v[0];
  v20 = v10->texCoordAxisX.v[0];
  v21 = (float)((float)(v10->texCoordAxisZ.v[1] * v10->texCoordAxisX.v[1]) + (float)(v20 * v19)) + (float)(v10->texCoordAxisZ.v[2] * v10->texCoordAxisX.v[2]);
  if ( COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3153, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( mark->texCoordAxisZ, mark->texCoordAxisX ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v19, v10->texCoordAxisZ.v[1], v10->texCoordAxisZ.v[2], v20, v10->texCoordAxisX.v[1], v10->texCoordAxisX.v[2], v21) )
    __debugbreak();
  v22 = v10->texCoordAxisZ.v[0];
  v23 = v10->texCoordAxisY.v[0];
  v24 = (float)((float)(v10->texCoordAxisZ.v[1] * v10->texCoordAxisY.v[1]) + (float)(v23 * v22)) + (float)(v10->texCoordAxisZ.v[2] * v10->texCoordAxisY.v[2]);
  if ( COERCE_FLOAT(LODWORD(v24) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3154, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( mark->texCoordAxisZ, mark->texCoordAxisY ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v22, v10->texCoordAxisZ.v[1], v10->texCoordAxisZ.v[2], v23, v10->texCoordAxisY.v[1], v10->texCoordAxisY.v[2], v24) )
    __debugbreak();
  *(double *)markResult->center.v = *(double *)v10->origin.v;
  markResult->center.v[2] = v10->origin.v[2];
  v25 = v10->texCoordAxisZ.v[2];
  *(double *)markResult->axis.m[0].v = *(double *)v10->texCoordAxisZ.v;
  markResult->axis.m[0].v[2] = v25;
  v26 = v10->texCoordAxisX.v[2];
  *(double *)markResult->axis.row1.v = *(double *)v10->texCoordAxisX.v;
  markResult->axis.m[1].v[2] = v26;
  v27 = v10->texCoordAxisY.v[2];
  *(double *)markResult->axis.row2.v = *(double *)v10->texCoordAxisY.v;
  markResult->axis.m[2].v[2] = v27;
  MatrixTransformVector43(&v10->origin, &outTransform, &markResult->worldCenter);
  MatrixTransformVector(&v10->texCoordAxisZ, (const tmat33_t<vec3_t> *)&outTransform, markResult->worldAxis.m);
  MatrixTransformVector(&v10->texCoordAxisX, (const tmat33_t<vec3_t> *)&outTransform, &markResult->worldAxis.m[1]);
  MatrixTransformVector(&v10->texCoordAxisY, (const tmat33_t<vec3_t> *)&outTransform, &markResult->worldAxis.m[2]);
  v28 = markResult->worldAxis.m[1].v[0];
  v29 = markResult->worldAxis.m[0].v[0];
  v30 = (float)((float)(markResult->worldAxis.m[1].v[1] * markResult->worldAxis.m[0].v[1]) + (float)(v29 * v28)) + (float)(markResult->worldAxis.m[1].v[2] * markResult->worldAxis.m[0].v[2]);
  if ( COERCE_FLOAT(LODWORD(v30) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3167, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( markResult.worldAxis[0], markResult.worldAxis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v29, markResult->worldAxis.m[0].v[1], markResult->worldAxis.m[0].v[2], v28, markResult->worldAxis.m[1].v[1], markResult->worldAxis.m[1].v[2], v30) )
    __debugbreak();
  v31 = markResult->worldAxis.m[2].v[0];
  v32 = markResult->worldAxis.m[0].v[0];
  v33 = (float)((float)(markResult->worldAxis.m[2].v[1] * markResult->worldAxis.m[0].v[1]) + (float)(v31 * v32)) + (float)(markResult->worldAxis.m[2].v[2] * markResult->worldAxis.m[0].v[2]);
  if ( COERCE_FLOAT(LODWORD(v33) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3168, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( markResult.worldAxis[0], markResult.worldAxis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v32, markResult->worldAxis.m[0].v[1], markResult->worldAxis.m[0].v[2], v31, markResult->worldAxis.m[2].v[1], markResult->worldAxis.m[2].v[2], v33) )
    __debugbreak();
  FX_ExpandMarkVerts_GetColor(marksSystem, v10, markResult->color);
  markResult->atlasIndex = FX_CalculateMarkAtlasFrame(marksSystem, v10);
  *(double *)markResult->halfSize.v = *(double *)v10->halfSize.v;
  markResult->halfSize.v[2] = v10->halfSize.v[2];
  markResult->material = v10->material;
  markResult->skinned = (*((_BYTE *)v10 + 103) & 0x10) != 0;
  return 1;
}

/*
==============
FX_GetDobjModelGlobalBoneBase
==============
*/
__int64 FX_GetDobjModelGlobalBoneBase(const DObj *obj, int modelIndex)
{
  const char *Name; 
  unsigned int v5; 
  int v6; 
  const XModel *Model; 
  int NumModels; 

  if ( modelIndex >= DObjGetNumModels(obj) )
  {
    Name = DObjGetName(obj);
    NumModels = DObjGetNumModels(obj);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 124, ASSERT_TYPE_ASSERT, "(modelIndex < DObjGetNumModels( obj ))", "%s\n\tmodelIndex:%i numModels:%i modelName:%s", "modelIndex < DObjGetNumModels( obj )", modelIndex, NumModels, Name) )
      __debugbreak();
  }
  v5 = 0;
  v6 = 0;
  if ( modelIndex )
  {
    do
    {
      Model = DObjGetModel(obj, v6);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 136, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      ++v6;
      v5 += Model->numBones;
    }
    while ( v6 != modelIndex );
  }
  return v5;
}

/*
==============
FX_GetDynEntModelListHead
==============
*/
unsigned __int16 FX_GetDynEntModelListHead(FxMarksSystem *marksSystem, const GfxMarkContext *context)
{
  unsigned int MarkContext_DynEntModel; 

  MarkContext_DynEntModel = FX_GetMarkContext_DynEntModel(context);
  return FX_GetDynEntModelListHead(marksSystem, MarkContext_DynEntModel);
}

/*
==============
FX_GetDynEntModelListHead
==============
*/
__int64 FX_GetDynEntModelListHead(FxMarksSystem *marksSystem, const unsigned int dynEntId)
{
  DynEntityClient *Client; 

  Client = DynEnt_GetClient(marksSystem->localClientNum, dynEntId, DYNENT_BASIS_MODEL);
  if ( Client )
    return Client->fxMarkListHead;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 290, ASSERT_TYPE_ASSERT, "(dynEntityClient)", (const char *)&queryFormat, "dynEntityClient") )
    __debugbreak();
  return MEMORY[0x34];
}

/*
==============
FX_GetDynEntModelMarkFromIterator
==============
*/
char FX_GetDynEntModelMarkFromIterator(FxDynEntModelMarkIterator *markIterator, FxMarkResult *markResult)
{
  FxMarksSystem *MarksSystem; 
  unsigned __int16 markHandle; 
  FxMarksSystem *v6; 
  FxMark *v7; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  DynEntityPose *PoseFromClientId; 
  const vec4_t *p_quat; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 

  MarksSystem = FX_GetMarksSystem(markIterator->clientIndex);
  markHandle = markIterator->markHandle;
  v6 = MarksSystem;
  if ( markHandle == 0xFFFF )
  {
LABEL_7:
    if ( Sys_InterlockedDecrement(&g_markThread[markIterator->clientIndex]) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3287, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[markIterator->clientIndex] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[markIterator->clientIndex] ) == 0") )
        __debugbreak();
    }
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = FX_MarkFromHandle(v6, markHandle);
      markResult->markHandle = markIterator->markHandle;
      markIterator->markHandle = v7->nextMark;
      if ( FX_GetMarkContext_ModelType(&v7->context) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3251, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( &mark->context ) == MARK_MODEL_TYPE_DYN_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( &mark->context ) == MARK_MODEL_TYPE_DYN_ENT_MODEL") )
        __debugbreak();
      if ( (*((_BYTE *)v7 + 103) & 2) == 0 )
        break;
      FX_FreeMark(v6, v7, -9);
      markHandle = markIterator->markHandle;
      if ( markHandle == 0xFFFF )
        goto LABEL_7;
    }
    v9 = v7->texCoordAxisZ.v[0];
    v10 = v7->texCoordAxisX.v[0];
    v11 = (float)((float)(v7->texCoordAxisZ.v[1] * v7->texCoordAxisX.v[1]) + (float)(v10 * v9)) + (float)(v7->texCoordAxisZ.v[2] * v7->texCoordAxisX.v[2]);
    if ( COERCE_FLOAT(LODWORD(v11) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3259, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( mark->texCoordAxisZ, mark->texCoordAxisX ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v9, v7->texCoordAxisZ.v[1], v7->texCoordAxisZ.v[2], v10, v7->texCoordAxisX.v[1], v7->texCoordAxisX.v[2], v11) )
      __debugbreak();
    v12 = v7->texCoordAxisZ.v[0];
    v13 = v7->texCoordAxisY.v[0];
    v14 = (float)((float)(v7->texCoordAxisZ.v[1] * v7->texCoordAxisY.v[1]) + (float)(v13 * v12)) + (float)(v7->texCoordAxisZ.v[2] * v7->texCoordAxisY.v[2]);
    if ( COERCE_FLOAT(LODWORD(v14) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3260, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( mark->texCoordAxisZ, mark->texCoordAxisY ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v12, v7->texCoordAxisZ.v[1], v7->texCoordAxisZ.v[2], v13, v7->texCoordAxisY.v[1], v7->texCoordAxisY.v[2], v14) )
      __debugbreak();
    *(double *)markResult->center.v = *(double *)v7->origin.v;
    markResult->center.v[2] = v7->origin.v[2];
    v15 = v7->texCoordAxisZ.v[2];
    *(double *)markResult->axis.m[0].v = *(double *)v7->texCoordAxisZ.v;
    markResult->axis.m[0].v[2] = v15;
    v16 = v7->texCoordAxisX.v[2];
    *(double *)markResult->axis.row1.v = *(double *)v7->texCoordAxisX.v;
    markResult->axis.m[1].v[2] = v16;
    v17 = v7->texCoordAxisY.v[2];
    *(double *)markResult->axis.row2.v = *(double *)v7->texCoordAxisY.v;
    markResult->axis.m[2].v[2] = v17;
    PoseFromClientId = DynEnt_GetPoseFromClientId(markIterator->clientIndex, markIterator->dynEntClientId, DYNENT_BASIS_MODEL);
    p_quat = &PoseFromClientId->pose.quat;
    QuatTrans_TransformPoint(&PoseFromClientId->pose.quat, &PoseFromClientId->pose.origin, &v7->origin, &markResult->worldCenter);
    QuatTransform(p_quat, &v7->texCoordAxisZ, markResult->worldAxis.m);
    QuatTransform(p_quat, &v7->texCoordAxisX, &markResult->worldAxis.m[1]);
    QuatTransform(p_quat, &v7->texCoordAxisY, &markResult->worldAxis.m[2]);
    v20 = markResult->worldAxis.m[1].v[0];
    v21 = markResult->worldAxis.m[0].v[0];
    v22 = (float)((float)(markResult->worldAxis.m[1].v[1] * markResult->worldAxis.m[0].v[1]) + (float)(v21 * v20)) + (float)(markResult->worldAxis.m[1].v[2] * markResult->worldAxis.m[0].v[2]);
    if ( COERCE_FLOAT(LODWORD(v22) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3273, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( markResult.worldAxis[0], markResult.worldAxis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v21, markResult->worldAxis.m[0].v[1], markResult->worldAxis.m[0].v[2], v20, markResult->worldAxis.m[1].v[1], markResult->worldAxis.m[1].v[2], v22) )
      __debugbreak();
    v23 = markResult->worldAxis.m[0].v[0];
    v24 = markResult->worldAxis.m[2].v[0];
    v25 = (float)((float)(markResult->worldAxis.m[2].v[1] * markResult->worldAxis.m[0].v[1]) + (float)(v24 * v23)) + (float)(markResult->worldAxis.m[2].v[2] * markResult->worldAxis.m[0].v[2]);
    if ( COERCE_FLOAT(LODWORD(v25) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3274, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( markResult.worldAxis[0], markResult.worldAxis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v23, markResult->worldAxis.m[0].v[1], markResult->worldAxis.m[0].v[2], v24, markResult->worldAxis.m[2].v[1], markResult->worldAxis.m[2].v[2], v25) )
      __debugbreak();
    FX_ExpandMarkVerts_GetColor(v6, v7, markResult->color);
    markResult->atlasIndex = FX_CalculateMarkAtlasFrame(v6, v7);
    *(double *)markResult->halfSize.v = *(double *)v7->halfSize.v;
    markResult->halfSize.v[2] = v7->halfSize.v[2];
    markResult->material = v7->material;
    markResult->skinned = (*((_BYTE *)v7 + 103) & 0x10) != 0;
    return 1;
  }
}

/*
==============
FX_GetMarkWorldCellCache
==============
*/
FxMarkSystemWorldCellCache *FX_GetMarkWorldCellCache()
{
  FxMarkSystemWorldCellCache *result; 

  result = s_markWorldCellCache;
  if ( !s_markWorldCellCache )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 193, ASSERT_TYPE_ASSERT, "(s_markWorldCellCache)", (const char *)&queryFormat, "s_markWorldCellCache") )
      __debugbreak();
    return s_markWorldCellCache;
  }
  return result;
}

/*
==============
FX_GetMarksSystem
==============
*/
FxMarksSystem *FX_GetMarksSystem(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = localClientNum;
  if ( !s_marksSystemPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 180, ASSERT_TYPE_ASSERT, "(s_marksSystemPool)", (const char *)&queryFormat, "s_marksSystemPool") )
    __debugbreak();
  if ( (unsigned int)v1 >= s_markMaxLocalClients )
  {
    v4 = s_markMaxLocalClients;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( s_markMaxLocalClients )", "localClientNum doesn't index s_markMaxLocalClients\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_marksSystemPool[v1];
}

/*
==============
FX_GetModelMarkFromIterator
==============
*/
char FX_GetModelMarkFromIterator(FxModelMarkIterator *markIterator, FxMarkResult *markResult)
{
  FxMarksSystem *MarksSystem; 
  unsigned __int16 markHandle; 
  FxMark *v6; 
  tmat43_t<vec3_t> *p_transformMatrix; 
  float v8; 
  float v9; 
  float v10; 

  MarksSystem = FX_GetMarksSystem(markIterator->clientIndex);
  while ( 1 )
  {
    markHandle = markIterator->markHandle;
    if ( markHandle == 0xFFFF )
      break;
    v6 = FX_MarkFromHandle(MarksSystem, markHandle);
    markResult->markHandle = markIterator->markHandle;
    markIterator->markHandle = v6->nextMark;
    if ( FX_GetMarkContext_ModelType(&v6->context) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2935, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( &mark->context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( &mark->context ) == MARK_MODEL_TYPE_ENT_MODEL") )
      __debugbreak();
    if ( FX_GetMarkContext_DObjModelIndex(&v6->context) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2936, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_DObjModelIndex( &mark->context ) == 0)", (const char *)&queryFormat, "FX_GetMarkContext_DObjModelIndex( &mark->context ) == 0") )
        __debugbreak();
    }
    if ( (*((_BYTE *)v6 + 103) & 2) != 0 )
    {
      FX_FreeMark(MarksSystem, v6, -10);
    }
    else if ( !bitarray_base<bitarray<256>>::testBit(&markIterator->hidePartBits, v6->context.lmapIndex) )
    {
      p_transformMatrix = &markIterator->transformMatrix;
      *(double *)markResult->center.v = *(double *)v6->origin.v;
      markResult->center.v[2] = v6->origin.v[2];
      v8 = v6->texCoordAxisZ.v[2];
      *(double *)markResult->axis.m[0].v = *(double *)v6->texCoordAxisZ.v;
      markResult->axis.m[0].v[2] = v8;
      v9 = v6->texCoordAxisX.v[2];
      *(double *)markResult->axis.row1.v = *(double *)v6->texCoordAxisX.v;
      markResult->axis.m[1].v[2] = v9;
      v10 = v6->texCoordAxisY.v[2];
      *(double *)markResult->axis.row2.v = *(double *)v6->texCoordAxisY.v;
      markResult->axis.m[2].v[2] = v10;
      MatrixTransformVector43(&v6->origin, p_transformMatrix, &markResult->worldCenter);
      MatrixTransformVector(&v6->texCoordAxisZ, (const tmat33_t<vec3_t> *)p_transformMatrix, markResult->worldAxis.m);
      MatrixTransformVector(&v6->texCoordAxisX, (const tmat33_t<vec3_t> *)p_transformMatrix, &markResult->worldAxis.m[1]);
      MatrixTransformVector(&v6->texCoordAxisY, (const tmat33_t<vec3_t> *)p_transformMatrix, &markResult->worldAxis.m[2]);
      FX_ExpandMarkVerts_GetColor(MarksSystem, v6, markResult->color);
      markResult->atlasIndex = FX_CalculateMarkAtlasFrame(MarksSystem, v6);
      *(double *)markResult->halfSize.v = *(double *)v6->halfSize.v;
      markResult->halfSize.v[2] = v6->halfSize.v[2];
      markResult->material = v6->material;
      markResult->skinned = (*((_BYTE *)v6 + 103) & 0x10) != 0;
      return 1;
    }
  }
  if ( Sys_InterlockedDecrement(&g_markThread[markIterator->clientIndex]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2970, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[markIterator->clientIndex] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[markIterator->clientIndex] ) == 0") )
    __debugbreak();
  return 0;
}

/*
==============
FX_ImpactMark
==============
*/
__int64 FX_ImpactMark(LocalClientNum_t localClientNum, Material *material, unsigned __int16 fadeInfo, unsigned __int16 waitInfo, unsigned __int16 lerpInfo, unsigned __int16 fadeOutInfo, unsigned __int16 stoppableFadeOutInfo, const vec3_t *origin, const vec4_t *quat, float orientation, const unsigned __int8 *nativeColor, const unsigned __int8 *nativeColorLerp, const vec4_t *markSizeOrig, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int viewmodelClientIndex, unsigned __int8 markBoneIndex, FxMarkProjectionAxis projectionAxis, const FX_ImpactMark_AtlasInfo *atlasInfo, const float4 *boltOffsetPos, const float4 *boltOffsetQuat, bool decalSpray, bool bypassStackingLimiter, bool markDynEnt, bool affectsGameplay, bool killOnKillcamTransition, const char *vfxName)
{
  signed __int64 v28; 
  void *v29; 
  vec4_t v; 
  const vec4_t *p_boltOffsetQuat; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  FxMarkSystemWorldCellCache *MarkWorldCellCache; 
  unsigned int v49; 
  unsigned __int8 v50; 
  MarkInfo markInfo; 
  tmat33_t<vec3_t> axis; 
  vec4_t markSize; 
  vec3_t halfSize; 
  tmat33_t<vec3_t> result; 
  R_CollInfo collInfo; 

  v29 = alloca(v28);
  collInfo.nodeCount = 0;
  collInfo.planeCount = 0;
  FX_GetMarksSystem(localClientNum);
  if ( !affectsGameplay && !fx_marks->current.enabled || !fx_marks_all->current.enabled )
    return 0xFFFFFFFFi64;
  *(float *)&_XMM9 = markSizeOrig->v[2];
  _XMM1 = LODWORD(markSizeOrig->v[1]);
  _XMM7 = LODWORD(markSizeOrig->v[0]);
  if ( *(float *)&_XMM9 == 0.0 )
    __asm { vmaxss  xmm9, xmm7, xmm1 }
  __asm
  {
    vcmpeqss xmm0, xmm1, xmm2
    vblendvps xmm14, xmm1, xmm7, xmm0
    vmaxss  xmm0, xmm14, xmm7
    vmaxss  xmm8, xmm0, xmm9
  }
  markSize.v[3] = *(float *)&_XMM8;
  markSize.v[0] = *(float *)&_XMM9;
  markSize.v[1] = *(float *)&_XMM7;
  markSize.v[2] = *(float *)&_XMM14;
  if ( *(float *)&_XMM8 < 0.1 )
    return 0xFFFFFFFFi64;
  if ( *(float *)&_XMM8 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1429, ASSERT_TYPE_ASSERT, "( ( radius > 0 ) )", "( radius ) = %g", *(float *)&_XMM8) )
    __debugbreak();
  if ( boltOffsetPos )
  {
    if ( !boltOffsetQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1433, ASSERT_TYPE_SANITY, "( boltOffsetQuat != nullptr )", (const char *)&queryFormat, "boltOffsetQuat != nullptr") )
      __debugbreak();
    _XMM1 = boltOffsetPos->v;
    v = (vec4_t)boltOffsetQuat->v;
    LODWORD(markInfo.boltOffsetPos.v[0]) = *(const float4 *)boltOffsetPos->v.m128_f32;
    __asm
    {
      vextractps dword ptr [rsp+4A58h+markInfo.boltOffsetPos+4], xmm1, 1
      vextractps dword ptr [rsp+4A58h+markInfo.boltOffsetPos+8], xmm1, 2
    }
    markInfo.boltOffsetQuat = v;
    markInfo.boltOffsetValid = 1;
    p_boltOffsetQuat = &markInfo.boltOffsetQuat;
  }
  else
  {
    markInfo.boltOffsetValid = 0;
    p_boltOffsetQuat = quat;
  }
  UnitQuatToAxis(p_boltOffsetQuat, &axis);
  axis = *FX_OrientDecalProjectionAxis(&result, &axis, projectionAxis, orientation);
  v41 = axis.m[0].v[0];
  v42 = axis.m[0].v[1];
  v43 = axis.m[0].v[2];
  v44 = (float)((float)(axis.m[0].v[0] * axis.m[1].v[0]) + (float)(axis.m[0].v[1] * axis.m[1].v[1])) + (float)(axis.m[0].v[2] * axis.m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v44) & _xmm) >= 0.001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1448, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis.m[0].v[0], axis.m[0].v[1], axis.m[0].v[2], axis.m[1].v[0], axis.m[1].v[1], axis.m[1].v[2], v44) )
      __debugbreak();
    v41 = axis.m[0].v[0];
    v42 = axis.m[0].v[1];
    v43 = axis.m[0].v[2];
  }
  v45 = (float)((float)(axis.m[2].v[0] * v41) + (float)(axis.m[2].v[1] * v42)) + (float)(axis.m[2].v[2] * v43);
  if ( COERCE_FLOAT(LODWORD(v45) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1449, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v41, v42, v43, axis.m[2].v[0], axis.m[2].v[1], axis.m[2].v[2], v45) )
    __debugbreak();
  if ( R_DecalVolumesMarks_DebugEnabled() )
  {
    *(_OWORD *)result.m[0].v = *(_OWORD *)axis.row1.v;
    result.m[1].v[1] = axis.m[2].v[1];
    result.m[1].v[2] = axis.m[2].v[2];
    result.m[2] = axis.m[0];
    halfSize.v[0] = FLOAT_0_40000001;
    halfSize.v[1] = FLOAT_7_0;
    halfSize.v[2] = FLOAT_1_25;
    R_DecalVolumesMarks_DebugAdd(origin, &halfSize, &result, &colorYellow);
  }
  v46 = origin->v[1];
  collInfo.sphere.origin.v[0] = origin->v[0];
  v47 = origin->v[2];
  collInfo.sphere.origin.v[1] = v46;
  collInfo.sphere.origin.v[2] = v47;
  collInfo.sphere.radiusSq = *(float *)&_XMM8 * *(float *)&_XMM8;
  collInfo.sphere.radius = *(float *)&_XMM8;
  MarkWorldCellCache = FX_GetMarkWorldCellCache();
  R_SetupSphereStaticGeo(&collInfo, &MarkWorldCellCache->transientDrawContext);
  markInfo.localClientNum = localClientNum;
  markInfo.collInfo = &collInfo;
  v49 = -1;
  v50 = markBoneIndex;
  markInfo.affectsGameplay = affectsGameplay;
  markInfo.staticModelOrWorldBrushAdded = 0;
  if ( markBoneIndex == 0xFE )
    v50 = 0;
  markInfo.bypassStackingLimiter = bypassStackingLimiter;
  markInfo.decalSpray = decalSpray;
  markInfo.killOnKillcamTransition = killOnKillcamTransition;
  markInfo.markBoneIndex = v50;
  markInfo.vfxName = vfxName;
  markInfo.markSize.v[0] = *(float *)&_XMM9;
  markInfo.markSize.v[1] = *(float *)&_XMM7;
  markInfo.markSize.v[2] = *(float *)&_XMM14;
  markInfo.markSize.v[3] = *(float *)&_XMM8;
  Profile_Begin(222);
  if ( !markGivenModelsOnly )
    v49 = FX_ImpactMark_Generate(&markInfo, localClientNum, MARK_FRAGMENTS_AGAINST_BRUSHES, material, material, fadeInfo, waitInfo, lerpInfo, fadeOutInfo, stoppableFadeOutInfo, origin, &axis, orientation, nativeColor, nativeColorLerp, &markSize, markEntnum, 0, markViewmodel, viewmodelClientIndex, markDynEnt, atlasInfo);
  Profile_EndInternal(NULL);
  if ( fx_marks_smodels->current.enabled || fx_marks_ents->current.enabled || fx_marks_dynents->current.enabled )
  {
    Profile_Begin(223);
    v49 = FX_ImpactMark_Generate(&markInfo, localClientNum, MARK_FRAGMENTS_AGAINST_MODELS, material, NULL, fadeInfo, waitInfo, lerpInfo, fadeOutInfo, stoppableFadeOutInfo, origin, &axis, orientation, nativeColor, nativeColorLerp, &markSize, markEntnum, markGivenModelsOnly, markViewmodel, viewmodelClientIndex, markDynEnt, atlasInfo);
    Profile_EndInternal(NULL);
  }
  return v49;
}

/*
==============
FX_ImpactMark_Generate
==============
*/
__int64 FX_ImpactMark_Generate(MarkInfo *markInfo, LocalClientNum_t localClientNum, MarkFragmentsAgainstEnum markAgainst, Material *material, Material *displacementMaterial, unsigned __int16 fadeInfo, unsigned __int16 waitInfo, unsigned __int16 lerpInfo, unsigned __int16 fadeOutInfo, unsigned __int16 stoppableFadeOutInfo, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float orientation, const unsigned __int8 *nativeColor, const unsigned __int8 *nativeColorLerp, const vec4_t *markSize, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int viewmodelClientIndex, bool markDynEnt, const FX_ImpactMark_AtlasInfo *atlasInfo)
{
  FxSystem *System; 
  vec4_t v26; 
  bool decalSpray; 
  bool bypassStackingLimiter; 
  bool killOnKillcamTransition; 
  bool affectsGameplay; 
  const char *vfxName; 
  Material *v33; 
  LocalClientNum_t callbackContext; 
  Material *v36; 
  Material *v37; 
  vec4_t v38; 
  const unsigned __int8 *v39; 
  const unsigned __int8 *v40; 
  unsigned __int16 v41; 
  unsigned __int16 v42; 
  unsigned __int16 v43; 
  unsigned __int16 v44; 
  unsigned __int16 v45; 
  int v46; 
  const FX_ImpactMark_AtlasInfo *v47; 
  unsigned int v48; 
  bool v49; 
  bool v50; 
  bool v51; 
  bool v52; 
  const char *v53; 

  System = FX_GetSystem(localClientNum);
  v26 = *markSize;
  v44 = fadeOutInfo;
  v45 = stoppableFadeOutInfo;
  decalSpray = markInfo->decalSpray;
  v41 = fadeInfo;
  v49 = decalSpray;
  bypassStackingLimiter = markInfo->bypassStackingLimiter;
  v42 = waitInfo;
  v50 = bypassStackingLimiter;
  killOnKillcamTransition = markInfo->killOnKillcamTransition;
  v43 = lerpInfo;
  affectsGameplay = markInfo->affectsGameplay;
  v52 = killOnKillcamTransition;
  vfxName = markInfo->vfxName;
  v40 = nativeColorLerp;
  v53 = vfxName;
  callbackContext = localClientNum;
  v36 = material;
  v37 = displacementMaterial;
  v39 = nativeColor;
  v46 = viewmodelClientIndex;
  v47 = atlasInfo;
  v48 = -1;
  v51 = affectsGameplay;
  v38 = v26;
  if ( (affectsGameplay || fx_marks->current.enabled) && fx_marks_all->current.enabled && (markAgainst != MARK_FRAGMENTS_AGAINST_MODELS || fx_marks_ents->current.enabled || fx_marks_smodels->current.enabled) )
  {
    R_MarkFragments_Begin(markInfo, markAgainst, axis, &System->camera.viewOffset, material, displacementMaterial, markGivenModelsOnly, markDynEnt, viewmodelClientIndex);
    if ( !markDynEnt )
    {
      if ( fx_marks_ents->current.enabled )
      {
        if ( (unsigned int)markAgainst > MARK_FRAGMENTS_AGAINST_MODELS )
        {
          LODWORD(v33) = markAgainst;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1309, ASSERT_TYPE_ASSERT, "( ( markAgainst == MARK_FRAGMENTS_AGAINST_MODELS || markAgainst == MARK_FRAGMENTS_AGAINST_BRUSHES ) )", "( markAgainst ) = %i", v33) )
            __debugbreak();
        }
        if ( markAgainst == MARK_FRAGMENTS_AGAINST_MODELS )
        {
          if ( markViewmodel )
            FX_ImpactMark_Generate_AddViewmodel(localClientNum, markInfo, origin, markSize->v[3], viewmodelClientIndex);
          else
            FX_ImpactMark_Generate_AddEntityModel(localClientNum, markInfo, markEntnum, origin, markSize->v[3]);
        }
        else
        {
          FX_ImpactMark_Generate_AddEntityBrush(localClientNum, markInfo, markEntnum, origin, markSize->v[3]);
        }
      }
      goto LABEL_20;
    }
    if ( fx_marks_dynents->current.enabled && markAgainst == MARK_FRAGMENTS_AGAINST_MODELS )
    {
      R_MarkFragments_AddDynEnt(markInfo, markEntnum);
LABEL_20:
      R_MarkFragments_Go(markInfo, FX_ImpactMark_Generate_Callback, &callbackContext);
      return v48;
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
FX_ImpactMark_Generate_AddEntityBrush
==============
*/
void FX_ImpactMark_Generate_AddEntityBrush(LocalClientNum_t localClientNum, MarkInfo *markInfo, unsigned int entityIndex, const vec3_t *origin, float radius)
{
  centity_t *Entity; 
  centity_t *v10; 
  GfxBrushModel *BrushModel; 
  float v12; 
  __m128 v14; 
  float v17; 
  __m128 v19; 
  float v22; 
  __m128 v24; 
  __int64 v35; 
  vec3_t outOrigin; 
  __int64 v37; 
  Float4Bounds baseBounds; 
  Float4Bounds rotatedBounds; 
  __m128 v; 
  tmat33_t<vec3_t> axis; 

  if ( entityIndex != 2047 )
  {
    v37 = -2i64;
    Profile_Begin(224);
    Entity = CG_GetEntity(localClientNum, entityIndex);
    v10 = Entity;
    if ( (Entity->flags & 1) == 0 || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u) )
      goto LABEL_14;
    if ( v10 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((v10->nextState.eType - 12) & 0xFFFD) != 0 )
    {
      BrushModel = R_GetBrushModel(v10->nextState.index.brushModel);
      AnglesToAxis(&v10->pose.angles, &axis);
      v12 = BrushModel->bounds.midPoint.v[0];
      v.m128_i32[3] = 0;
      v14 = v;
      v14.m128_f32[0] = v12;
      _XMM3 = v14;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsi+3Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+40h], 20h ; ' '
      }
      v = _XMM3.v;
      baseBounds.midPoint = (float4)_XMM3.v;
      v17 = BrushModel->bounds.halfSize.v[0];
      v.m128_i32[3] = 0;
      v19 = v;
      v19.m128_f32[0] = v17;
      _XMM3 = v19;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsi+48h], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+4Ch], 20h ; ' '
      }
      v = _XMM3.v;
      baseBounds.halfSize = (float4)_XMM3.v;
      CG_GetPoseOrigin(&v10->pose, &outOrigin);
      Float4Bounds_Transform(&baseBounds, &outOrigin, &axis, &rotatedBounds);
      v22 = origin->v[0];
      v.m128_i32[3] = 0;
      v24 = v;
      v24.m128_f32[0] = v22;
      _XMM3 = v24;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r15+4], 10h
        vinsertps xmm3, xmm3, dword ptr [r15+8], 20h ; ' '
      }
      _mm128_sub_ps(_XMM3, rotatedBounds.midPoint.v);
      _XMM0 = g_negativeZero.v;
      __asm { vandnps xmm1, xmm0, xmm1 }
      _XMM2 = _mm128_sub_ps(_XMM1, rotatedBounds.halfSize.v);
      __asm { vmaxps  xmm1, xmm2, xmm0 }
      _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
      __asm
      {
        vinsertps xmm0, xmm2, xmm2, 8
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
      }
      if ( *(float *)&_XMM2 < (float)(radius * radius) )
      {
        if ( (unsigned __int16)entityIndex != entityIndex )
        {
          LODWORD(v35) = entityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1096, ASSERT_TYPE_ASSERT, "( ( entityIndexAsUnsignedShort == entityIndex ) )", "( entityIndex ) = %i", v35) )
            __debugbreak();
        }
        R_MarkFragments_AddBModel(markInfo, BrushModel, &v10->pose, entityIndex);
      }
      Profile_EndInternal(NULL);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    else
    {
LABEL_14:
      Profile_EndInternal(NULL);
    }
  }
}

/*
==============
FX_ImpactMark_Generate_AddEntityModel
==============
*/
void FX_ImpactMark_Generate_AddEntityModel(LocalClientNum_t localClientNum, MarkInfo *markInfo, unsigned int entityIndex, const vec3_t *origin, float radius)
{
  centity_t *Entity; 
  cpose_t *p_pose; 
  unsigned int number; 
  unsigned int v12; 
  unsigned int v13; 
  DObj *v14; 
  double v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  vec3_t outOrigin; 
  __int64 v20; 

  if ( entityIndex != 2047 )
  {
    v20 = -2i64;
    Profile_Begin(224);
    Entity = CG_GetEntity(localClientNum, entityIndex);
    p_pose = &Entity->pose;
    if ( (Entity->flags & 1) == 0 )
      goto LABEL_23;
    number = Entity->nextState.number;
    if ( number > 0x9E4 )
    {
      v18 = Entity->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v18) )
        __debugbreak();
    }
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v12 = 2533 * localClientNum + number;
    if ( v12 >= 0x13CA )
    {
      LODWORD(v17) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v17) )
        __debugbreak();
    }
    v13 = clientObjMap[v12];
    if ( !v13 )
      goto LABEL_23;
    if ( v13 >= (unsigned int)s_objCount )
    {
      LODWORD(v17) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v17) )
        __debugbreak();
    }
    v14 = (DObj *)s_objBuf[v13];
    if ( v14 )
    {
      v15 = DObjGetRadius(v14);
      CG_GetPoseOrigin(p_pose, &outOrigin);
      if ( (float)((float)((float)((float)(outOrigin.v[1] - origin->v[1]) * (float)(outOrigin.v[1] - origin->v[1])) + (float)((float)(outOrigin.v[0] - origin->v[0]) * (float)(outOrigin.v[0] - origin->v[0]))) + (float)((float)(outOrigin.v[2] - origin->v[2]) * (float)(outOrigin.v[2] - origin->v[2]))) <= (float)((float)(*(float *)&v15 + radius) * (float)(*(float *)&v15 + radius)) )
      {
        if ( (unsigned __int16)entityIndex != entityIndex )
        {
          LODWORD(v16) = entityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1149, ASSERT_TYPE_ASSERT, "( ( entityIndexAsUnsignedShort == entityIndex ) )", "( entityIndex ) = %i", v16) )
            __debugbreak();
        }
        R_MarkFragments_AddDObj(markInfo, v14, p_pose, entityIndex);
      }
      Profile_EndInternal(NULL);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    else
    {
LABEL_23:
      Profile_EndInternal(NULL);
    }
  }
}

/*
==============
FX_ImpactMark_Generate_AddViewmodel
==============
*/
void FX_ImpactMark_Generate_AddViewmodel(LocalClientNum_t localClientNum, MarkInfo *markInfo, const vec3_t *origin, float radius, int viewmodelClientIndex)
{
  __int64 v7; 
  cg_t *v8; 
  DObj *viewModelDObj; 
  cpose_t *p_viewModelPose; 
  double v11; 
  __int64 v12; 
  __int64 v13; 
  vec3_t outOrigin; 
  __int64 v15; 

  v15 = -2i64;
  v7 = localClientNum;
  Profile_Begin(224);
  if ( viewmodelClientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1176, ASSERT_TYPE_ASSERT, "(viewmodelClientIndex == 0)", (const char *)&queryFormat, "viewmodelClientIndex == 0") )
    __debugbreak();
  if ( (unsigned int)v7 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v12, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v7] )
  {
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v13) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v13) )
      __debugbreak();
  }
  v8 = cg_t::ms_cgArray[v7];
  viewModelDObj = v8->m_weaponHand[0].viewModelDObj;
  p_viewModelPose = &v8->viewModelPose;
  if ( viewModelDObj )
  {
    v11 = DObjGetRadius(v8->m_weaponHand[0].viewModelDObj);
    CG_GetPoseOrigin(p_viewModelPose, &outOrigin);
    if ( (float)((float)((float)((float)(outOrigin.v[1] - origin->v[1]) * (float)(outOrigin.v[1] - origin->v[1])) + (float)((float)(outOrigin.v[0] - origin->v[0]) * (float)(outOrigin.v[0] - origin->v[0]))) + (float)((float)(outOrigin.v[2] - origin->v[2]) * (float)(outOrigin.v[2] - origin->v[2]))) <= (float)((float)(*(float *)&v11 + radius) * (float)(*(float *)&v11 + radius)) )
      R_MarkFragments_AddViewModelDObj(markInfo, viewModelDObj, p_viewModelPose);
    Profile_EndInternal(NULL);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    Profile_EndInternal(NULL);
  }
}

/*
==============
FX_ImpactMark_Generate_Callback
==============
*/
void FX_ImpactMark_Generate_Callback(void *context, const GfxMarkContext *markContext, const vec3_t *markOrigin, const vec3_t *markTexCoordAxisX, const vec3_t *markTexCoordAxisY, const vec3_t *markTexCoordAxisZ, bool transparentSurface, bool skinnedSurface)
{
  *((_DWORD *)context + 20) = FX_AllocAndConstructMark((LocalClientNum_t)*(_DWORD *)context, markContext, *((Material **)context + 1), *((_WORD *)context + 28), *((_WORD *)context + 29), *((_WORD *)context + 30), *((_WORD *)context + 31), *((_WORD *)context + 32), markOrigin, (const vec4_t *)((char *)context + 24), markTexCoordAxisX, markTexCoordAxisY, markTexCoordAxisZ, *((const unsigned __int8 **)context + 5), *((const unsigned __int8 **)context + 6), *((_DWORD *)context + 17), *((const FX_ImpactMark_AtlasInfo **)context + 9), transparentSurface, *((_BYTE *)context + 84), *((_BYTE *)context + 85), *((_BYTE *)context + 86), *((_BYTE *)context + 87), skinnedSurface, *((const char **)context + 11));
}

/*
==============
FX_InitDynEntMarks
==============
*/
void FX_InitDynEntMarks(DynEntityClient *dynEntClient)
{
  dynEntClient->fxMarkListHead = -1;
}

/*
==============
FX_InitMarksSystem
==============
*/
void FX_InitMarksSystem(LocalClientNum_t localClientNum)
{
  FX_InitMarksSystemInternal(localClientNum, -1);
}

/*
==============
FX_InitMarksSystemInternal
==============
*/
void FX_InitMarksSystemInternal(LocalClientNum_t localClientNum, int debugValue)
{
  __int64 v2; 
  FxMarksSystem *MarksSystem; 
  bool v5; 
  FxMarksSystem *v6; 
  __int64 v7; 
  unsigned __int16 *entFirstMarkHandles; 
  __int64 i; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  FxMark *marks; 
  __int64 v18; 
  __int64 v19; 

  v2 = localClientNum;
  MarksSystem = FX_GetMarksSystem(localClientNum);
  v5 = s_markBuffers == NULL;
  v6 = MarksSystem;
  MarksSystem->localClientNum = v2;
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 204, ASSERT_TYPE_ASSERT, "(s_markBuffers)", (const char *)&queryFormat, "s_markBuffers") )
    __debugbreak();
  if ( (unsigned int)v2 >= s_markMaxLocalClients )
  {
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( s_markMaxLocalClients )", "localClientNum doesn't index s_markMaxLocalClients\n\t%i not in [0, %i)", v18, s_markMaxLocalClients) )
      __debugbreak();
  }
  v7 = v2;
  entFirstMarkHandles = v6->entFirstMarkHandles;
  v6->marks = s_markBuffers[v7].marksBuf;
  for ( i = 2048i64; i; --i )
    *entFirstMarkHandles++ = -1;
  *(_QWORD *)v6->firstViewmodelMarkHandle = -1i64;
  v10 = 0i64;
  v6->firstFreeMarkHandle = FX_MarkToHandle(v6, v6->marks);
  v11 = 0i64;
  v12 = 511i64;
  v13 = 1i64;
  do
  {
    v6->marks[v10].prevMark = -1;
    v14 = (__int64)&v6->marks[v13];
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 172, ASSERT_TYPE_ASSERT, "(mark)", (const char *)&queryFormat, "mark") )
      __debugbreak();
    v15 = (__int64)((unsigned __int128)((v14 - (unsigned __int64)v6->marks) * (__int128)0x6666666666666667i64) >> 64) >> 6;
    v16 = (v15 >> 63) + v15;
    if ( (unsigned __int16)v16 >= 0x200u )
    {
      LODWORD(v19) = 512;
      LODWORD(v18) = (unsigned __int16)v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    ++v13;
    v6->marks[v10].nextMark = v16;
    v6->marks[v10].timeDrawn = -1;
    v6->marks[v10++].timeStopped = debugValue;
    marks = v6->marks;
    *(_QWORD *)marks[v11].vfxName = 0i64;
    *(_QWORD *)&marks[v11].vfxName[8] = 0i64;
    *(_QWORD *)&marks[v11].vfxName[16] = 0i64;
    *(_QWORD *)&marks[v11++].vfxName[24] = 0i64;
    --v12;
  }
  while ( v12 );
  v6->marks[511].prevMark = -1;
  v6->marks[511].nextMark = -1;
  v6->marks[511].timeDrawn = -1;
  v6->marks[511].timeStopped = debugValue;
  *(_DWORD *)&v6->firstActiveWorldMarkHandle = -1;
  *(_DWORD *)v6->viewmodelMarksCount = 0;
  *(_QWORD *)&v6->allocedMarkCount = 0i64;
  v6->time = 1;
}

/*
==============
FX_LinkMarkIntoList
==============
*/
void FX_LinkMarkIntoList(FxMarksSystem *marksSystem, unsigned __int16 *head, FxMark *mark)
{
  unsigned __int16 v5; 
  unsigned __int16 *v6; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  FxMark *v10; 
  unsigned __int16 outSpotMarkPrev; 
  unsigned __int16 *outSpotHandlePrev; 

  FX_FindSpotForMark(&outSpotMarkPrev, &outSpotHandlePrev, marksSystem, head, mark);
  v5 = FX_MarkToHandle(marksSystem, mark);
  v6 = outSpotHandlePrev;
  v7 = v5;
  v8 = outSpotMarkPrev;
  v9 = *outSpotHandlePrev;
  mark->nextMark = *outSpotHandlePrev;
  mark->prevMark = v8;
  if ( v9 != 0xFFFF )
  {
    v10 = FX_MarkFromHandle(marksSystem, v9);
    if ( v10->prevMark != mark->prevMark && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 615, ASSERT_TYPE_ASSERT, "(nextMark->prevMark == mark->prevMark)", (const char *)&queryFormat, "nextMark->prevMark == mark->prevMark") )
      __debugbreak();
    v10->prevMark = v7;
  }
  *v6 = v7;
}

/*
==============
FX_MarkAllocateClientMemory
==============
*/
void FX_MarkAllocateClientMemory(HunkUser *hunkUser, int maxLocalClients)
{
  __int64 v2; 
  unsigned __int64 v4; 
  unsigned __int64 FreeReserveAmount; 
  int v7; 

  v2 = maxLocalClients;
  if ( maxLocalClients > 2 )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 142, ASSERT_TYPE_ASSERT, "( maxLocalClients ) <= ( (2) )", "%s <= %s\n\t%i, %i", "maxLocalClients", "FX_MARKS_SYSTEM_MAX_COUNT", maxLocalClients, v7) )
      __debugbreak();
  }
  s_markMaxLocalClients = v2;
  s_marksSystemPool = (FxMarksSystem *)Mem_HunkUser_AllocInternal(hunkUser, 4144 * v2, 0x80ui64, "FX_MarkAllocateClientMemory");
  v4 = 81920 * v2;
  s_markBuffers = (FxMarksSystemBuffers *)Mem_HunkUser_AllocInternal(hunkUser, v4, 0x80ui64, "FX_MarkAllocateClientMemory");
  memset_0(s_markBuffers, 0, v4);
  s_markWorldCellCache = (FxMarkSystemWorldCellCache *)Mem_HunkUser_AllocInternal(hunkUser, 0x4B008ui64, 0x40ui64, "FX_MarkAllocateClientMemory");
  memset_0(s_markWorldCellCache, 0, sizeof(FxMarkSystemWorldCellCache));
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(hunkUser);
  Com_Printf(10, "GameAllocate: Free client hunk memory (Post-FX Marks): %zu kb\n", FreeReserveAmount >> 10);
}

/*
==============
FX_MarkCheckNearby
==============
*/

FxMark *__fastcall FX_MarkCheckNearby(FxMarksSystem *marksSystem, const unsigned __int16 firstActiveMarkHandle, const vec3_t *origin, double radius, const vec3_t *dir, bool decalSpray, bool bypassStackLimiter)
{
  __int64 v7; 
  unsigned int v9; 
  unsigned __int16 nextMark; 
  __int128 v14; 
  __m128 v18; 
  float v21; 
  __m128 v22; 
  FxMark *v23; 
  __m128 radius_low; 
  __m128 v26; 
  __m128 v29; 
  __m128 v30; 
  __m128 v35; 
  __int64 v47; 
  __int64 v48; 
  __int128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  __int64 v53[4]; 

  v7 = 0i64;
  _RAX = fx_marks_limit_stacking_distance;
  v9 = 1;
  nextMark = firstActiveMarkHandle;
  __asm { vbroadcastss xmm11, dword ptr [rax+28h] }
  HIDWORD(v49) = 0;
  v14 = v49;
  *(float *)&v14 = origin->v[0];
  _XMM7 = v14;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [r8+4], 10h
    vinsertps xmm7, xmm7, dword ptr [r8+8], 20h ; ' '
  }
  v50 = _XMM7;
  v50.m128_i32[3] = 0;
  v18 = v50;
  v18.m128_f32[0] = dir->v[0];
  _XMM8 = v18;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [r9+4], 10h
    vinsertps xmm8, xmm8, dword ptr [r9+8], 20h ; ' '
  }
  if ( bypassStackLimiter )
    v9 = 4;
  v51 = _XMM8;
  v21 = *(float *)&radius;
  v22 = _mm_shuffle_ps(*(__m128 *)&radius, *(__m128 *)&radius, 0);
  if ( firstActiveMarkHandle == 0xFFFF )
    return 0i64;
  while ( 1 )
  {
    if ( nextMark >= 0x200u )
    {
      LODWORD(v48) = 512;
      LODWORD(v47) = nextMark;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v47, v48) )
        __debugbreak();
    }
    if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    v23 = &marksSystem->marks[nextMark];
    nextMark = v23->nextMark;
    if ( !v23->lerpInfo || v23->nativeColorLerp[3] )
    {
      radius_low = (__m128)LODWORD(v23->radius);
      v51.m128_i32[3] = 0;
      v26 = v51;
      v26.m128_f32[0] = v23->origin.v[0];
      _XMM3 = v26;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rcx+14h], 10h
        vinsertps xmm3, xmm3, dword ptr [rcx+18h], 20h ; ' '
      }
      v52.m128_i32[3] = 0;
      v29 = _mm128_mul_ps(_XMM11, _mm128_add_ps(v22, _mm_shuffle_ps(radius_low, radius_low, 0)));
      _mm128_mul_ps(v29, v29);
      v30 = _mm128_sub_ps(_XMM7, _XMM3);
      _XMM1 = _mm128_mul_ps(v30, v30);
      __asm
      {
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm4, xmm2, xmm2
      }
      v35 = v52;
      v35.m128_f32[0] = v23->texCoordAxisZ.v[0];
      _XMM2 = v35;
      __asm
      {
        vinsertps xmm2, xmm2, dword ptr [rcx+6Ch], 10h
        vinsertps xmm2, xmm2, dword ptr [rcx+70h], 20h ; ' '
      }
      _XMM0 = _mm128_mul_ps(_XMM8, _XMM2);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vcmpltps xmm0, xmm4, xmm5
        vmovmskps eax, xmm0
      }
      v51 = _XMM3;
      v52 = _XMM2;
      if ( (_EAX & 0xF) == 15 )
      {
        _XMM0 = s_markCheckAngleThreshold.v;
        __asm
        {
          vhaddps xmm1, xmm1, xmm1
          vcmpltps xmm1, xmm0, xmm1
          vmovmskps eax, xmm1
        }
        if ( (_EAX & 0xF) == 15 && v21 < (float)(radius_low.m128_f32[0] * 4.0) && ((*((_BYTE *)v23 + 103) & 8) != 0) == decalSpray )
        {
          v53[v7] = (__int64)v23;
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= v9 )
            break;
        }
      }
    }
    if ( nextMark == 0xFFFF )
      return 0i64;
  }
  return (FxMark *)v53[0];
}

/*
==============
FX_MarkEntDetachAll
==============
*/
void FX_MarkEntDetachAll(LocalClientNum_t localClientNum, int entnum)
{
  __int64 v2; 
  FxMarksSystem *MarksSystem; 
  unsigned __int16 *v5; 
  unsigned __int16 i; 
  __int64 v7; 
  __int64 v8; 

  v2 = entnum;
  if ( (unsigned int)entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1595, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( sizeof( *array_counter( FxMarksSystem::entFirstMarkHandles ) ) + 0 ) )", "entnum doesn't index ARRAY_COUNT( FxMarksSystem::entFirstMarkHandles )\n\t%i not in [0, %i)", entnum, 2048) )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem(localClientNum);
  v5 = &MarksSystem->entFirstMarkHandles[v2];
  for ( i = *v5; *v5 != 0xFFFF; i = *v5 )
  {
    if ( i >= 0x200u )
    {
      LODWORD(v8) = 512;
      LODWORD(v7) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( !MarksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    FX_FreeMark(MarksSystem, &MarksSystem->marks[i], -7);
  }
}

/*
==============
FX_MarkEntDetachAllOfType
==============
*/
void FX_MarkEntDetachAllOfType(LocalClientNum_t localClientNum, int entnum, int markType)
{
  __int64 v4; 
  FxMarksSystem *MarksSystem; 
  unsigned __int16 nextMark; 
  FxMark *v7; 
  __int64 v8; 
  __int64 v9; 

  v4 = entnum;
  MarksSystem = FX_GetMarksSystem(localClientNum);
  nextMark = MarksSystem->entFirstMarkHandles[v4];
  while ( nextMark != 0xFFFF )
  {
    if ( nextMark >= 0x200u )
    {
      LODWORD(v9) = 512;
      LODWORD(v8) = nextMark;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( !MarksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    v7 = &MarksSystem->marks[nextMark];
    nextMark = v7->nextMark;
    if ( v7 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( v7->context.modelType == markType )
      FX_FreeMark(MarksSystem, v7, -8);
  }
}

/*
==============
FX_MarkEntUpdateBegin
==============
*/
void FX_MarkEntUpdateBegin(FxMarkDObjUpdateContext *context, DObj *obj, bool isBrush, unsigned __int16 brushIndex)
{
  int NumModels; 
  int v9; 
  __int64 v10; 
  __int64 v11; 

  if ( obj )
  {
    NumModels = DObjGetNumModels(obj);
    v9 = 0;
    context->modelCount = NumModels;
    v10 = NumModels;
    if ( NumModels )
    {
      v11 = 0i64;
      do
      {
        context->models[v11] = DObjGetModel(obj, v9);
        context->modelParentBones[v11++] = DObjGetModelParentBoneName(obj, v9++);
      }
      while ( v11 != v10 );
    }
    context->brushIndex = brushIndex;
    context->isBrush = isBrush;
  }
  else
  {
    context->isBrush = isBrush;
    context->modelCount = 0;
    context->brushIndex = brushIndex;
  }
}

/*
==============
FX_MarkEntUpdateEnd
==============
*/
void FX_MarkEntUpdateEnd(FxMarkDObjUpdateContext *context, LocalClientNum_t localClientNum, int entnum, DObj *obj, bool isBrush, unsigned __int16 brushIndex, const bool forceTransferMarks)
{
  int v8; 
  FxMarksSystem *v11; 
  __int64 modelCount; 
  int NumModels; 
  __int64 v14; 
  __int64 v15; 
  const XModel *v16; 
  int v17; 
  const char *name; 
  FxMarksSystem *marksSystem; 
  int oldToNewMap[256]; 

  v8 = entnum;
  if ( context->isBrush && (!isBrush || context->brushIndex != brushIndex) )
  {
    FX_MarkEntDetachAllOfType(localClientNum, entnum, 3);
    v8 = entnum;
  }
  if ( context->modelCount )
  {
    if ( obj )
    {
      v11 = FX_GetMarksSystem(localClientNum);
      modelCount = context->modelCount;
      marksSystem = v11;
      NumModels = DObjGetNumModels(obj);
      v14 = modelCount;
      if ( (int)modelCount > 0 )
      {
        v15 = 0i64;
        do
        {
          v16 = context->models[v15];
          v17 = 0;
          oldToNewMap[v15] = -1;
          name = v16->name;
          if ( NumModels > 0 )
          {
            while ( DObjGetModel(obj, v17)->name != name && !forceTransferMarks )
            {
              if ( ++v17 >= NumModels )
                goto LABEL_15;
            }
            oldToNewMap[v15] = v17;
          }
LABEL_15:
          ++v15;
        }
        while ( v15 < v14 );
      }
      FX_TransferMarksToNewModels(marksSystem, entnum, context, oldToNewMap);
    }
    else
    {
      FX_MarkEntDetachAllOfType(localClientNum, v8, 4);
    }
  }
}

/*
==============
FX_MarkFreeClientMemory
==============
*/
void FX_MarkFreeClientMemory(void)
{
  s_markMaxLocalClients = 0;
  s_markBuffers = NULL;
  s_marksSystemPool = NULL;
  s_markWorldCellCache = NULL;
}

/*
==============
FX_MarkGlassDetachAll
==============
*/
void FX_MarkGlassDetachAll(LocalClientNum_t localClientNum, int glassPieceIndex)
{
  FxMarksSystem *MarksSystem; 
  unsigned __int16 firstGlassMarkHandle; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  MarksSystem = FX_GetMarksSystem(localClientNum);
  firstGlassMarkHandle = MarksSystem->firstGlassMarkHandle;
  while ( firstGlassMarkHandle != 0xFFFF )
  {
    if ( firstGlassMarkHandle >= 0x200u )
    {
      LODWORD(v7) = 512;
      LODWORD(v6) = firstGlassMarkHandle;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    v5 = (__int64)&MarksSystem->marks[firstGlassMarkHandle];
    firstGlassMarkHandle = *(_WORD *)(v5 + 2);
    if ( v5 == -76 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2157, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
    }
    if ( *(_BYTE *)(v5 + 76) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2158, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
      __debugbreak();
    if ( *(unsigned __int16 *)(v5 + 80) == glassPieceIndex )
      FX_FreeMark(MarksSystem, (FxMark *)v5, -18);
  }
}

/*
==============
FX_MarkVfxName
==============
*/
char *FX_MarkVfxName(LocalClientNum_t clientIndex, unsigned __int16 markHandle)
{
  FxMarksSystem *MarksSystem; 

  MarksSystem = FX_GetMarksSystem(clientIndex);
  return FX_MarkFromHandle(MarksSystem, markHandle)->vfxName;
}

/*
==============
FX_MarksCacheWorldCells
==============
*/
void FX_MarksCacheWorldCells(GfxWorldDraw *worldDraw)
{
  FxMarkSystemWorldCellCache *v1; 

  v1 = s_markWorldCellCache;
  if ( !s_markWorldCellCache )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 193, ASSERT_TYPE_ASSERT, "(s_markWorldCellCache)", (const char *)&queryFormat, "s_markWorldCellCache") )
      __debugbreak();
    v1 = s_markWorldCellCache;
  }
  R_GenerateWorldTransientCache(worldDraw, &v1->transientDrawContext, &v1->transientDrawCache);
}

/*
==============
FX_OrientDecalProjectionAxis
==============
*/
tmat33_t<vec3_t> *FX_OrientDecalProjectionAxis(tmat33_t<vec3_t> *result, const tmat33_t<vec3_t> *originalAxis, FxMarkProjectionAxis projectionAxis, float rotationAngle)
{
  float v6; 
  tmat33_t<vec3_t> *v7; 
  vec3_t *v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t *v12; 
  tmat33_t<vec3_t> *v13; 
  float v14; 
  float v15; 
  float v16; 

  *result = *originalAxis;
  switch ( projectionAxis )
  {
    case FX_MARK_PROJECTION_AXIS_POS_X:
      result->m[0].v[0] = COERCE_FLOAT(LODWORD(result->m[0].v[0]) ^ _xmm);
      result->m[0].v[1] = COERCE_FLOAT(LODWORD(result->m[0].v[1]) ^ _xmm);
      result->m[0].v[2] = COERCE_FLOAT(LODWORD(result->m[0].v[2]) ^ _xmm);
      goto LABEL_3;
    case FX_MARK_PROJECTION_AXIS_NEG_X:
LABEL_3:
      v6 = rotationAngle * 57.295776;
      v7 = (tmat33_t<vec3_t> *)&result->m[2];
      goto LABEL_12;
    case FX_MARK_PROJECTION_AXIS_POS_Y:
      v8 = &result->m[1];
      v9 = result->m[1].v[0];
      result->m[0].v[0] = v9;
      v10 = result->m[1].v[1];
      result->m[0].v[1] = v10;
      v11 = result->m[1].v[2];
      result->m[0].v[0] = COERCE_FLOAT(LODWORD(v9) ^ _xmm);
      result->m[0].v[2] = COERCE_FLOAT(LODWORD(v11) ^ _xmm);
      result->m[0].v[1] = COERCE_FLOAT(LODWORD(v10) ^ _xmm);
      goto LABEL_5;
    case FX_MARK_PROJECTION_AXIS_NEG_Y:
      v8 = &result->m[1];
      result->m[0].v[0] = result->m[1].v[0];
      result->m[0].v[1] = result->m[1].v[1];
      result->m[0].v[2] = result->m[1].v[2];
LABEL_5:
      v6 = rotationAngle * 57.295776;
      v12 = &result->m[2];
      v13 = (tmat33_t<vec3_t> *)v8;
      v7 = result;
      goto LABEL_13;
    case FX_MARK_PROJECTION_AXIS_POS_Z:
      v7 = (tmat33_t<vec3_t> *)&result->m[2];
      v14 = result->m[2].v[0];
      result->m[0].v[0] = v14;
      v15 = result->m[2].v[1];
      result->m[0].v[1] = v15;
      v16 = result->m[2].v[2];
      result->m[0].v[0] = COERCE_FLOAT(LODWORD(v14) ^ _xmm);
      result->m[0].v[2] = COERCE_FLOAT(LODWORD(v16) ^ _xmm);
      result->m[0].v[1] = COERCE_FLOAT(LODWORD(v15) ^ _xmm);
      goto LABEL_11;
    case FX_MARK_PROJECTION_AXIS_NEG_Z:
      goto $LN4_118;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1373, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported projection axis in FX_OrientDecalProjectionAxis().") )
        __debugbreak();
$LN4_118:
      v7 = (tmat33_t<vec3_t> *)&result->m[2];
      result->m[0].v[0] = result->m[2].v[0];
      result->m[0].v[1] = result->m[2].v[1];
      result->m[0].v[2] = result->m[2].v[2];
LABEL_11:
      v6 = (float)(rotationAngle * 57.295776) - 90.0;
LABEL_12:
      v12 = &result->m[1];
      v8 = (vec3_t *)v7;
      v13 = result;
LABEL_13:
      RotatePointAroundVector(v8, result->m, v12, v6);
      Vec3Cross(v13->m, v7->m, v12);
      return result;
  }
}

/*
==============
FX_ReleaseDynEntMarks
==============
*/
void FX_ReleaseDynEntMarks(LocalClientNum_t localClientNum, DynEntityClient *dynEntClient)
{
  __int64 v2; 
  volatile signed __int32 *v4; 
  unsigned __int16 *p_fxMarkListHead; 
  int v6; 
  FxMarksSystem *MarksSystem; 
  unsigned __int16 v8; 
  FxMarksSystem *v9; 
  const FxMark *v10; 
  unsigned __int16 v11; 
  unsigned __int16 nextMark; 
  unsigned __int16 v13; 
  unsigned __int16 prevMark; 
  unsigned __int16 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v2 = localClientNum;
  v4 = &g_markThread[localClientNum];
  if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[localClientNum]) )
    __debugbreak();
  if ( _InterlockedIncrement(v4) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3194, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1") )
    __debugbreak();
  p_fxMarkListHead = &dynEntClient->fxMarkListHead;
  if ( *p_fxMarkListHead == 0xFFFF )
  {
    if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[v2]) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) != 1 )
    {
      v6 = 3200;
      goto LABEL_35;
    }
  }
  else
  {
    MarksSystem = FX_GetMarksSystem((LocalClientNum_t)v2);
    v8 = *p_fxMarkListHead;
    v9 = MarksSystem;
    do
    {
      if ( v8 >= 0x200u )
      {
        LODWORD(v17) = 512;
        LODWORD(v16) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
        __debugbreak();
      v10 = &v9->marks[v8];
      v11 = FX_MarkToHandle(v9, v10);
      nextMark = v10->nextMark;
      v13 = v11;
      if ( nextMark != 0xFFFF )
      {
        prevMark = v10->prevMark;
        FX_MarkFromHandle(v9, nextMark)->prevMark = prevMark;
      }
      if ( v10->prevMark == 0xFFFF )
      {
        if ( p_fxMarkListHead )
        {
          if ( *p_fxMarkListHead != v13 )
          {
            LODWORD(v18) = v13;
            LODWORD(v17) = *p_fxMarkListHead;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 318, ASSERT_TYPE_ASSERT, "(*listHead == markHandle)", "%s\n\t%i %i", "*listHead == markHandle", v17, v18) )
              __debugbreak();
          }
          *p_fxMarkListHead = v10->nextMark;
        }
      }
      else
      {
        v15 = v10->nextMark;
        FX_MarkFromHandle(v9, v10->prevMark)->nextMark = v15;
      }
      ++v10->markGeneration;
      v10->timeDrawn = -1;
      v10->nextMark = v9->firstFreeMarkHandle;
      v10->timeStopped = -21;
      v9->firstFreeMarkHandle = v13;
      v8 = *p_fxMarkListHead;
    }
    while ( *p_fxMarkListHead != 0xFFFF );
    if ( ((unsigned __int8)v4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v4) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) != 1 )
    {
      v6 = 3215;
LABEL_35:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", v6, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
        __debugbreak();
    }
  }
}

/*
==============
FX_StopImpactMark
==============
*/
void FX_StopImpactMark(LocalClientNum_t localClientNum, unsigned int handle)
{
  __int64 v2; 
  unsigned int v3; 
  unsigned __int16 v4; 
  FxMarksSystem *MarksSystem; 
  volatile int *v6; 
  FxMark *v7; 

  v2 = localClientNum;
  v3 = HIWORD(handle);
  v4 = handle;
  MarksSystem = FX_GetMarksSystem(localClientNum);
  Sys_EnterCriticalSection(CRITSECT_ALLOC_MARK);
  v6 = &g_markThread[v2];
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v6) )
    __debugbreak();
  if ( _InterlockedIncrement(v6) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1537, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1") )
    __debugbreak();
  v7 = FX_MarkFromHandle(MarksSystem, v4);
  if ( v7->markGeneration == (_WORD)v3 )
  {
    if ( v7->stoppableFadeOutInfo )
      v7->timeStopped = MarksSystem->time;
    else
      FX_FreeMark(MarksSystem, v7, -6);
  }
  else
  {
    Com_PrintError(21, "FX MARKS: Attempting to stop impact mark using stale handle\n");
  }
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v6) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1560, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
    __debugbreak();
  Sys_LeaveCriticalSection(CRITSECT_ALLOC_MARK);
}

/*
==============
FX_TransferDObjMarksFromEntToEnt
==============
*/
void FX_TransferDObjMarksFromEntToEnt(LocalClientNum_t localClientNum, int entnumFrom, DObj *objFrom, int entnumTo, const XModel *modelTo)
{
  __int64 v5; 
  int v6; 
  FxMarksSystem *MarksSystem; 
  int v10; 
  int NumModels; 
  XModel *v12; 
  unsigned __int16 name; 
  __int64 v14; 
  _BYTE *v15; 
  unsigned __int16 *v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  unsigned __int8 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  const XModel *modelToa; 

  v5 = entnumFrom;
  v6 = entnumTo;
  if ( !objFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1829, ASSERT_TYPE_ASSERT, "(objFrom)", (const char *)&queryFormat, "objFrom") )
    __debugbreak();
  if ( !modelTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1830, ASSERT_TYPE_ASSERT, "(modelTo)", (const char *)&queryFormat, "modelTo") )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem(localClientNum);
  v10 = 0;
  NumModels = DObjGetNumModels(objFrom);
  if ( NumModels > 0 )
  {
    do
    {
      if ( DObjGetModel(objFrom, v10) == modelTo )
        break;
      ++v10;
    }
    while ( v10 < NumModels );
  }
  if ( v10 == NumModels )
  {
    Com_PrintWarning(14, "FX_TransferDObjMarksFromEntToEnt(): couldn't find a match for destination model \"%s\" in the source dobj.\n", modelTo->name);
  }
  else
  {
    v12 = (XModel *)&MarksSystem->entFirstMarkHandles[v5];
    name = (unsigned __int16)v12->name;
    modelToa = v12;
    while ( name != 0xFFFF )
    {
      if ( name >= 0x200u )
      {
        LODWORD(v24) = 512;
        LODWORD(v23) = name;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( !MarksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
        __debugbreak();
      v14 = (__int64)&MarksSystem->marks[name];
      name = *(_WORD *)(v14 + 2);
      v15 = (_BYTE *)(v14 + 76);
      if ( v14 == -76 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
      if ( *v15 == 4 )
      {
        if ( v14 == -76 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2003, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
        }
        if ( *v15 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
          __debugbreak();
        if ( (*(_BYTE *)(v14 + 77) & 0x1F) == v10 )
        {
          v16 = &MarksSystem->entFirstMarkHandles[v6];
          if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1799, ASSERT_TYPE_ASSERT, "(listHeadFrom)", (const char *)&queryFormat, "listHeadFrom") )
            __debugbreak();
          if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1800, ASSERT_TYPE_ASSERT, "(listHeadTo)", (const char *)&queryFormat, "listHeadTo") )
            __debugbreak();
          v17 = FX_MarkToHandle(MarksSystem, (const FxMark *)v14);
          v18 = *(_WORD *)(v14 + 2);
          v19 = v17;
          if ( v18 != 0xFFFF )
          {
            v20 = *(_WORD *)v14;
            FX_MarkFromHandle(MarksSystem, v18)->prevMark = v20;
            v12 = (XModel *)modelToa;
          }
          if ( *(_WORD *)v14 == 0xFFFF )
          {
            if ( LOWORD(v12->name) != v19 )
            {
              LODWORD(v25) = v19;
              LODWORD(v24) = LOWORD(v12->name);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1814, ASSERT_TYPE_ASSERT, "(*listHeadFrom == markHandle)", "%s\n\t%i %i", "*listHeadFrom == markHandle", v24, v25) )
                __debugbreak();
            }
            LOWORD(v12->name) = *(_WORD *)(v14 + 2);
          }
          else
          {
            v21 = *(_WORD *)(v14 + 2);
            FX_MarkFromHandle(MarksSystem, *(_WORD *)v14)->nextMark = v21;
            v12 = (XModel *)modelToa;
          }
          FX_LinkMarkIntoList(MarksSystem, v16, (FxMark *)v14);
          if ( v14 == -76 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2066, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          *(_BYTE *)(v14 + 77) &= 0xE0u;
          if ( *v15 != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
            __debugbreak();
          if ( (*(_BYTE *)(v14 + 77) & 0x1F) != 0 )
          {
            LODWORD(v23) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2071, ASSERT_TYPE_ASSERT, "( ( dobjModelIndex == FX_GetMarkContext_DObjModelIndex( context ) ) )", "( dobjModelIndex ) = %i", v23) )
              __debugbreak();
          }
          if ( v14 == -76 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2148, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
              __debugbreak();
          }
          if ( (unsigned __int8)(*v15 - 3) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2149, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH") )
            __debugbreak();
          v6 = entnumTo;
          v22 = *v15 - 3;
          *(_WORD *)(v14 + 80) = entnumTo;
          if ( v22 > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2142, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL || FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_BRUSH") )
            __debugbreak();
          if ( (_WORD)entnumTo != *(_WORD *)(v14 + 80) )
          {
            LODWORD(v23) = (unsigned __int16)entnumTo;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2152, ASSERT_TYPE_ASSERT, "( ( entnum == FX_GetMarkContext_EntNum( context ) ) )", "( entnum ) = %u", v23) )
              __debugbreak();
          }
        }
      }
    }
  }
}

/*
==============
FX_TransferMarksToNewModels
==============
*/
void FX_TransferMarksToNewModels(FxMarksSystem *marksSystem, int entnum, FxMarkDObjUpdateContext *context, int *oldToNewMap)
{
  unsigned __int16 nextMark; 
  FxMark *v8; 
  GfxMarkContext *p_context; 
  __int64 modelCount; 
  __int64 v11; 
  const char *name; 
  int v13; 
  __int64 v14; 
  __int64 v15; 

  nextMark = marksSystem->entFirstMarkHandles[entnum];
  while ( nextMark != 0xFFFF )
  {
    if ( nextMark >= 0x200u )
    {
      LODWORD(v15) = 512;
      LODWORD(v14) = nextMark;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    v8 = &marksSystem->marks[nextMark];
    nextMark = v8->nextMark;
    p_context = &v8->context;
    if ( v8 == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( p_context->modelType == 4 )
    {
      if ( v8 == (FxMark *)-76i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2003, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
      }
      if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
        __debugbreak();
      modelCount = (unsigned int)context->modelCount;
      v11 = v8->context.surfIndex & 0x1F;
      if ( (int)modelCount <= 0 )
        name = "No DObj Name";
      else
        name = context->models[0]->name;
      if ( (int)v11 >= (int)modelCount )
      {
        Com_PrintError(21, "FX MARKS: Invalid model index %d for number of models %d for dobj %s. Please report the situation that caused this.\n", v11, modelCount, name);
      }
      else
      {
        v13 = oldToNewMap[v11];
        if ( v13 == -1 )
        {
          if ( v8->timeDrawn == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1724, ASSERT_TYPE_ASSERT, "(mark->timeDrawn != FX_MARK_FREE)", (const char *)&queryFormat, "mark->timeDrawn != FX_MARK_FREE") )
            __debugbreak();
          FX_FreeMark(marksSystem, v8, -19);
          if ( v8->timeDrawn != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1726, ASSERT_TYPE_ASSERT, "(mark->timeDrawn == FX_MARK_FREE)", (const char *)&queryFormat, "mark->timeDrawn == FX_MARK_FREE") )
            __debugbreak();
        }
        else
        {
          FX_SetMarkContext_DObjModelIndex(&v8->context, v13);
        }
      }
    }
  }
}

