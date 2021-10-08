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
  const FxMark *v10; 
  int atlasIndex; 
  unsigned __int16 uid; 
  unsigned __int8 outColor[8]; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx+68h]
    vmovss  xmm1, dword ptr [rdx+6Ch]
    vmovss  dword ptr [rsp+98h+axis], xmm0
    vmovss  xmm0, dword ptr [rdx+70h]
    vmovss  dword ptr [rsp+98h+axis+4], xmm1
    vmovups xmm1, xmmword ptr [rdx+20h]
    vmovss  dword ptr [rsp+98h+axis+8], xmm0
    vmovss  xmm0, dword ptr [rdx+34h]
    vmovups xmmword ptr [rsp+98h+axis+0Ch], xmm1
    vmovss  xmm1, dword ptr [rdx+30h]
  }
  v10 = mark;
  __asm
  {
    vmovss  dword ptr [rsp+98h+axis+1Ch], xmm1
    vmovss  dword ptr [rsp+98h+axis+20h], xmm0
  }
  FX_ExpandMarkVerts_GetColor(marksSystem, mark, outColor);
  atlasIndex = FX_CalculateMarkAtlasFrame(marksSystem, v10);
  uid = FX_MarkToHandle(marksSystem, v10);
  R_AddMarkDecalVolume(&v10->origin, &v10->halfSize, &axis, outColor, v10->material, atlasIndex, markFlags, uid);
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
  __int64 v28; 
  volatile signed __int32 *v31; 
  FxMarksSystem *MarksSystem; 
  unsigned __int64 v34; 
  FxMark *v35; 
  int modelType; 
  bool v37; 
  bool IsViewmodel; 
  unsigned __int8 v39; 
  int v43; 
  unsigned int MarkContext_DynEntModel; 
  unsigned __int16 DynEntModelListHead; 
  unsigned __int16 firstGlassMarkHandle; 
  unsigned __int16 MarkContext_ModelIndex; 
  FxMarksSystem *v50; 
  const vec3_t *v51; 
  unsigned __int16 firstFreeMarkHandle; 
  unsigned int v53; 
  const GfxMarkContext *p_context; 
  __int64 v70; 
  unsigned int v71; 
  DynEntityClient *Client; 
  unsigned __int16 v73; 
  unsigned __int16 *p_firstGlassMarkHandle; 
  unsigned __int64 v75; 
  unsigned int v89; 
  char v100; 
  bool v101; 
  const char *v106; 
  __int64 result; 
  const vec3_t *fmt; 
  char *fmta; 
  __int64 v117; 
  bool v118; 
  bool bypassStackLimiter; 
  char v120; 
  unsigned __int8 v121; 
  unsigned __int16 v122; 
  unsigned __int16 head; 
  unsigned __int16 v125; 
  int v126; 
  const char *v127; 
  __int64 v128; 
  Material *v129; 
  const FX_ImpactMark_AtlasInfo *v130; 
  const vec4_t *v131; 
  __int64 v132; 
  vec3_t halfSize; 
  tmat33_t<vec3_t> axis; 
  char v135; 
  void *retaddr; 

  _RAX = &retaddr;
  v132 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v129 = material;
  v28 = localClientNum;
  _RBP = markSize;
  v131 = markSize;
  _R13 = texCoordAxisZ;
  v126 = viewmodelClientIndex;
  v130 = atlasInfo;
  v127 = vfxName;
  if ( !material->decalVolumeMaterial )
    R_WarnOncePerFrame(R_WARN_UNSUPPORTED_DECAL_VOLUME_MATERIAL, material->name);
  Sys_ProfBeginNamedEvent(0xFF808080, "FX_AllocAndConstructMark");
  Sys_EnterCriticalSection(CRITSECT_ALLOC_MARK);
  v31 = &g_markThread[v28];
  v128 = (unsigned __int8)v31 & 3;
  if ( ((unsigned __int8)v31 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[v28]) )
    __debugbreak();
  if ( _InterlockedIncrement(v31) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 764, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[localClientNum] ) == 1") )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem((LocalClientNum_t)v28);
  __asm { vmovss  xmm6, dword ptr [rbp+0Ch] }
  v34 = 0i64;
  v35 = NULL;
  if ( !lerpInfo || (v120 = 1, nativeColorLerp[3]) )
    v120 = 0;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  modelType = context->modelType;
  v37 = modelType == 4;
  if ( modelType == 4 )
  {
    IsViewmodel = FX_GetMarkContext_DObjIsViewmodel(context);
    v37 = !IsViewmodel;
    if ( IsViewmodel )
    {
      v39 = MarksSystem->viewmodelMarksCount[v126];
      v121 = v39;
      __asm { vxorps  xmm7, xmm7, xmm7 }
      _RAX = fx_marks_limit_stacking_distance;
      __asm { vucomiss xmm7, dword ptr [rax+28h] }
      if ( !v37 )
      {
        if ( v39 >= 0x10u )
          goto LABEL_21;
        __asm { vmovaps xmm3, xmm6; radius }
        v35 = FX_MarkCheckNearby(MarksSystem, MarksSystem->firstViewmodelMarkHandle[v126], origin, *(float *)&_XMM3, texCoordAxisZ, decalSpray, bypassStackingLimiter);
        v39 = v121;
      }
      if ( v39 >= 0x10u )
      {
LABEL_21:
        if ( v128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v31) )
          __debugbreak();
        if ( _InterlockedExchangeAdd(v31, 0xFFFFFFFF) == 1 )
          goto LABEL_52;
        v43 = 822;
LABEL_50:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", v43, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
          __debugbreak();
LABEL_52:
        Sys_LeaveCriticalSection(CRITSECT_ALLOC_MARK);
        v53 = -1;
        goto LABEL_118;
      }
      goto LABEL_40;
    }
  }
  __asm { vxorps  xmm7, xmm7, xmm7 }
  _RAX = fx_marks_limit_stacking_distance;
  __asm { vucomiss xmm7, dword ptr [rax+28h] }
  if ( v37 || v120 )
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
      __asm { vmovaps xmm3, xmm6 }
      v50 = MarksSystem;
      v118 = decalSpray;
      fmt = texCoordAxisZ;
      v51 = origin;
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
  v118 = decalSpray;
  fmt = texCoordAxisZ;
  __asm { vmovaps xmm3, xmm6; radius }
  v51 = origin;
  v50 = MarksSystem;
LABEL_39:
  v35 = FX_MarkCheckNearby(v50, firstGlassMarkHandle, v51, *(float *)&_XMM3, fmt, v118, bypassStackLimiter);
LABEL_40:
  if ( v35 )
  {
    if ( !fx_marks_limit_stacking_freeold->current.enabled )
      goto LABEL_21;
    FX_FreeMark(MarksSystem, v35, -5);
  }
LABEL_43:
  firstFreeMarkHandle = MarksSystem->firstFreeMarkHandle;
  v122 = firstFreeMarkHandle;
  if ( firstFreeMarkHandle == 0xFFFF )
  {
    FX_FreeLruMark(MarksSystem);
    firstFreeMarkHandle = MarksSystem->firstFreeMarkHandle;
    v122 = firstFreeMarkHandle;
    if ( firstFreeMarkHandle == 0xFFFF )
    {
      if ( v128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v31) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(v31, 0xFFFFFFFF) == 1 )
        goto LABEL_52;
      v43 = 843;
      goto LABEL_50;
    }
  }
  _RDI = FX_MarkFromHandle(MarksSystem, firstFreeMarkHandle);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 854, ASSERT_TYPE_ASSERT, "(newMark)", (const char *)&queryFormat, "newMark") )
    __debugbreak();
  MarksSystem->firstFreeMarkHandle = _RDI->nextMark;
  v125 = ++_RDI->markGeneration;
  if ( MarksSystem->time <= 0 )
  {
    LODWORD(v117) = MarksSystem->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 858, ASSERT_TYPE_ASSERT, "( ( marksSystem->time > 0 ) )", "( marksSystem->time ) = %i", v117) )
      __debugbreak();
  }
  p_context = &_RDI->context;
  _RDI->context = *context;
  _RDI->material = v129;
  _RDI->fadeInfo = fadeInfo;
  _RDI->waitInfo = waitInfo;
  _RDI->lerpInfo = lerpInfo;
  _RDI->fadeOutInfo = fadeOutInfo;
  _RDI->stoppableFadeOutInfo = stoppableFadeOutInfo;
  __asm { vmovss  dword ptr [rdi+1Ch], xmm6 }
  _RCX = origin;
  _RDI->origin.v[0] = origin->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rdi+14h], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vmovss  dword ptr [rdi+18h], xmm1
  }
  _RCX = texCoordAxisX;
  _RDI->texCoordAxisX.v[0] = texCoordAxisX->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rdi+24h], xmm0
    vmovss  xmm1, dword ptr [rcx+8]
    vmovss  dword ptr [rdi+28h], xmm1
  }
  _RAX = texCoordAxisY;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rdi+2Ch], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rdi+30h], xmm2
    vmovss  xmm0, dword ptr [rax+8]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdi+34h], xmm1
  }
  *(_DWORD *)_RDI->nativeColor = *(_DWORD *)nativeColor;
  *(_DWORD *)_RDI->nativeColorLerp = *(_DWORD *)nativeColorLerp;
  *((_BYTE *)_RDI + 103) &= 0xF0u;
  *((_BYTE *)_RDI + 103) = (affectsGameplay | *((_BYTE *)_RDI + 103)) & 0xCF | (4 * (transparentSurface & 0xF1 | (2 * (decalSpray & 0xF9 | (2 * ((2 * killOnKillcamTransition) | hasSkinnedSurface & 0xFD))))));
  if ( (_BYTE)modelType == 4 )
  {
    if ( FX_GetMarkContext_DObjIsViewmodel(&_RDI->context) )
    {
      v70 = v126;
      FX_LinkMarkIntoList(MarksSystem, &MarksSystem->firstViewmodelMarkHandle[v126], _RDI);
      ++MarksSystem->viewmodelMarksCount[v126];
      if ( MarksSystem->viewmodelMarksCount[v70] > 0x10u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 887, ASSERT_TYPE_ASSERT, "(marksSystem->viewmodelMarksCount[viewmodelClientIndex] <= 16)", (const char *)&queryFormat, "marksSystem->viewmodelMarksCount[viewmodelClientIndex] <= FX_MAX_VIEWMODEL_MARKS") )
        __debugbreak();
      goto LABEL_84;
    }
    p_context = &_RDI->context;
  }
  else if ( (_BYTE)modelType != 3 )
  {
    switch ( (_BYTE)modelType )
    {
      case 5:
        v71 = FX_GetMarkContext_DynEntModel(context);
        Client = DynEnt_GetClient(MarksSystem->localClientNum, v71, DYNENT_BASIS_MODEL);
        if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 901, ASSERT_TYPE_ASSERT, "(dynEntityClient)", (const char *)&queryFormat, "dynEntityClient") )
          __debugbreak();
        FX_LinkMarkIntoList(MarksSystem, &Client->fxMarkListHead, _RDI);
        goto LABEL_84;
      case 2:
        v73 = FX_GetMarkContext_ModelIndex(&_RDI->context);
        head = FX_FindModelHead(MarksSystem, v73, modelType);
        if ( head == firstFreeMarkHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 916, ASSERT_TYPE_ASSERT, "(staticModelMarkHead != newMarkHandle)", (const char *)&queryFormat, "staticModelMarkHead != newMarkHandle") )
          __debugbreak();
        FX_LinkMarkIntoList(MarksSystem, &head, _RDI);
        goto LABEL_84;
      case 6:
        p_firstGlassMarkHandle = &MarksSystem->firstGlassMarkHandle;
        break;
      default:
        if ( (unsigned __int8)modelType >= 2u )
        {
          LODWORD(v117) = modelType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 935, ASSERT_TYPE_ASSERT, "( ( modelType == MARK_MODEL_TYPE_WORLD_BRUSH || modelType == MARK_MODEL_TYPE_WORLD_BRUSH_DISPLACED ) )", "( modelType ) = %i", v117) )
            __debugbreak();
        }
        p_firstGlassMarkHandle = &MarksSystem->firstActiveWorldMarkHandle;
        break;
    }
    goto LABEL_83;
  }
  p_firstGlassMarkHandle = &MarksSystem->entFirstMarkHandles[FX_GetMarkContext_EntNum(p_context)];
LABEL_83:
  FX_LinkMarkIntoList(MarksSystem, p_firstGlassMarkHandle, _RDI);
LABEL_84:
  if ( _RDI->timeDrawn != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 942, ASSERT_TYPE_ASSERT, "(newMark->timeDrawn == FX_MARK_FREE)", (const char *)&queryFormat, "newMark->timeDrawn == FX_MARK_FREE") )
    __debugbreak();
  _RDI->timeDrawn = MarksSystem->time - 1;
  _RDI->timeAlloced = MarksSystem->time;
  v75 = -1i64;
  _RDI->timeStopped = -1;
  if ( ((unsigned __int8)v31 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v31) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v31, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 948, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &g_markThread[localClientNum] ) == 0") )
    __debugbreak();
  ++MarksSystem->allocedMarkCount;
  Sys_LeaveCriticalSection(CRITSECT_ALLOC_MARK);
  if ( R_DecalVolumesMarks_DebugEnabled() )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+68h]
      vmovss  dword ptr [rsp+148h+axis], xmm0
      vmovss  xmm1, dword ptr [rdi+6Ch]
      vmovss  dword ptr [rsp+148h+axis+4], xmm1
      vmovss  xmm0, dword ptr [rdi+70h]
      vmovss  dword ptr [rsp+148h+axis+8], xmm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rsp+148h+axis+0Ch], xmm1
      vmovss  xmm1, dword ptr [rdi+30h]
      vmovss  dword ptr [rsp+148h+axis+1Ch], xmm1
      vmovss  xmm0, dword ptr [rdi+34h]
      vmovss  dword ptr [rsp+148h+axis+20h], xmm0
      vmulss  xmm0, xmm6, dword ptr [rdi+74h]
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vmovss  dword ptr [rsp+148h+halfSize], xmm0
      vmulss  xmm1, xmm6, dword ptr [rdi+78h]
      vmovss  dword ptr [rsp+148h+halfSize+4], xmm1
      vmulss  xmm0, xmm6, dword ptr [rdi+7Ch]
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  dword ptr [rsp+148h+halfSize+8], xmm1
    }
    R_DecalVolumesMarks_DebugAdd(origin, &halfSize, &axis, &colorRed);
    Com_Printf(21, "D+ FX_AllocAndConstructMark: material: %s, time=%d \n", _RDI->material->name, (unsigned int)_RDI->timeAlloced);
  }
  _RDI->texCoordAxisZ.v[0] = texCoordAxisZ->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [r13+4]
    vmovss  dword ptr [rdi+6Ch], xmm0
    vmovss  xmm1, dword ptr [r13+8]
    vmovss  dword ptr [rdi+70h], xmm1
  }
  v89 = _RDI->material->textureAtlasRowCount * _RDI->material->textureAtlasColumnCount;
  if ( v89 <= 1 )
  {
    *(_DWORD *)&_RDI->atlasLoopCount = -65536;
    _RDI->atlasFrameDurationMS = 0;
    _RDI->atlasNumEntries = 0;
  }
  else
  {
    _R14 = v130;
    _RDI->atlasStartFrame = truncate_cast<short,int>(v130->startFrame);
    __asm
    {
      vmovss  xmm1, dword ptr [r14+8]
      vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@34000000
    }
    if ( v101 || v37 )
    {
      _RDI->atlasFrameDurationMS = 0;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@447a0000
        vdivss  xmm1, xmm0, xmm1
        vcvttss2si ecx, xmm1; val
      }
      _RDI->atlasFrameDurationMS = truncate_cast<short,int>(_ECX);
    }
    _RDI->atlasLoopCount = truncate_cast<short,int>(_R14->loopCount);
    if ( v89 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v89, "unsigned", v89) )
      __debugbreak();
    _RDI->atlasNumEntries = v89;
  }
  _RAX = v131;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rdi+74h], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rdi+78h], xmm0
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rdi+7Ch], xmm1
  }
  v101 = (_BYTE)modelType == 4;
  v100 = modelType - 4;
  if ( v101 || v100 == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+74h]
      vcomiss xmm0, cs:__real@40400000
    }
    if ( v101 )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@40000000
        vmovss  dword ptr [rdi+74h], xmm0
      }
    }
  }
  _RAX = fx_mark_max_thickness;
  __asm { vmovss  xmm6, dword ptr [rax+28h] }
  v106 = v127;
  __asm { vcomiss xmm6, xmm7 }
  if ( !v101 && v100 != 1 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+74h]
      vcomiss xmm1, xmm6
    }
    if ( !v101 && v100 != 1 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vcvtss2sd xmm3, xmm1, xmm1
        vmovsd  [rsp+148h+fmt], xmm0
        vmovq   r9, xmm3
      }
      Com_PrintWarning(21, "FxMark '%s' thickness '%3.3f' is larger than allowed '%3.3f' and will be clamped\n", v127, _R9, fmta);
      __asm { vmovss  dword ptr [rdi+74h], xmm6 }
    }
  }
  if ( R_DecalVolumesMarks_DebugEnabled() )
    Com_Printf(8, "Mark with material '%s' added\n", _RDI->material->name);
  do
    ++v75;
  while ( v106[v75] );
  if ( v75 > 0x1F )
    v34 = v75 - 31;
  memcpy_0(_RDI->vfxName, &v106[v34], v75 - v34 + 1);
  if ( v34 )
    *(_WORD *)_RDI->vfxName = 11822;
  v53 = v122 | (v125 << 16);
LABEL_118:
  Sys_ProfEndNamedEvent();
  result = v53;
  _R11 = &v135;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
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
  __int16 v16; 
  unsigned __int16 v17; 
  int SkelTimeStamp; 
  __int64 v21; 

  v7 = dobjIndex;
  _RBX = markIterator;
  v9 = &g_markThread[clientIndex];
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[clientIndex]) )
    __debugbreak();
  if ( _InterlockedIncrement(v9) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2980, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1") )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem(clientIndex);
  if ( (unsigned int)v7 >= 0x200 )
  {
    LODWORD(v21) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2984, ASSERT_TYPE_ASSERT, "(unsigned)( dobjIndex ) < (unsigned)( 512 )", "dobjIndex doesn't index MAX_SCENE_DOBJ\n\t%i not in [0, %i)", v21, 512) )
      __debugbreak();
  }
  v11 = v7;
  v12 = *((_DWORD *)&scene.sceneDObj[v7] + 346) >> 10;
  _RBX->clientIndex = clientIndex;
  v13 = v12 & 0xFFF;
  _RBX->dobjIndex = v7;
  _RBX->modelIndex = modelIndex;
  _RBX->unlockDobj = 0;
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
      _RBX->markHandle = v16;
    }
    else if ( (unsigned int)v13 < 0x801 )
    {
      v16 = MarksSystem->entFirstMarkHandles[v13];
      _RBX->markHandle = v16;
    }
    else
    {
      v16 = -1;
      _RBX->markHandle = -1;
    }
  }
  else
  {
    if ( !obj || (unsigned int)v13 >= gfxCfg.entnumOrdinaryEnd )
      goto LABEL_26;
    v17 = MarksSystem->entFirstMarkHandles[v13];
    _RBX->markHandle = v17;
    v16 = v17;
  }
  if ( v16 == -1 )
    return;
  DObjLock(scene.sceneDObj[v11].obj);
  _RBX->unlockDobj = 1;
  SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
  if ( DObjSkelExists(scene.sceneDObj[v11].obj, SkelTimeStamp) )
  {
    _RAX = viewOffset;
    _RBX->entnum = v13;
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vmovsd  qword ptr [rbx+34h], xmm0
    }
    _RBX->viewOffset.v[2] = viewOffset->v[2];
    DObjGetHidePartBits(scene.sceneDObj[v11].obj, &_RBX->hidePartBits);
    return;
  }
LABEL_26:
  _RBX->markHandle = -1;
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

  _RDI = markIterator;
  v9 = &g_markThread[clientIndex];
  if ( ((unsigned __int8)v9 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_markThread[clientIndex]) )
    __debugbreak();
  if ( _InterlockedIncrement(v9) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3229, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &g_markThread[clientIndex] ) == 1") )
    __debugbreak();
  MarksSystem = FX_GetMarksSystem(clientIndex);
  _RCX = viewOffset;
  _RDI->clientIndex = clientIndex;
  _RDI->dynEntityId = dynEntityId;
  _RDI->dynEntClientId = dynEntClientId;
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr [rdi+0Ch], xmm0
  }
  _RDI->viewOffset.v[2] = viewOffset->v[2];
  _RDI->markHandle = FX_GetDynEntModelListHead(MarksSystem, dynEntityId);
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
  char v2; 

  __asm
  {
    vmovss  xmm3, dword ptr [rdx+8]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rdx]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm3, xmm0
  }
  if ( v2 )
    __asm { vmaxss  xmm3, xmm2, xmm1 }
  __asm
  {
    vcmpeqss xmm0, xmm1, xmm0
    vblendvps xmm1, xmm1, xmm2, xmm0
    vmaxss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rcx+8], xmm1
    vmovss  [rsp+arg_0], xmm1
    vmaxss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rcx+0Ch], xmm1
    vmovss  dword ptr [rcx], xmm3
    vmovss  dword ptr [rcx+4], xmm2
  }
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
  Material *material; 
  bool v13; 
  GfxMarkContext context; 
  __int64 v29; 
  __int64 v30; 

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
        LODWORD(v30) = 512;
        LODWORD(v29) = nextMark;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
        __debugbreak();
      material = mark->material;
      _RCX = &marksSystem->marks[nextMark];
      v13 = _RCX->material < material;
      if ( _RCX->material == material )
      {
        context = _RCX->context;
        v13 = *(unsigned __int64 *)&context < *(_QWORD *)&mark->context;
        if ( context == *(_QWORD *)&mark->context )
          goto LABEL_11;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+10h]
        vsubss  xmm3, xmm0, dword ptr [rsi+10h]
        vmovss  xmm1, dword ptr [rcx+14h]
        vsubss  xmm2, xmm1, dword ptr [rsi+14h]
        vmovss  xmm0, dword ptr [rcx+18h]
        vsubss  xmm4, xmm0, dword ptr [rsi+18h]
        vmovss  xmm1, dword ptr [rcx+1Ch]
        vaddss  xmm5, xmm1, dword ptr [rsi+1Ch]
        vmulss  xmm0, xmm3, xmm3
        vmulss  xmm2, xmm2, xmm2
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm0, xmm5, xmm5
        vcomiss xmm4, xmm0
      }
      if ( v13 )
      {
LABEL_11:
        *outSpotMarkPrev = v10;
        *outSpotHandlePrev = p_nextMark;
      }
      v10 = *p_nextMark;
      nextMark = _RCX->nextMark;
      p_nextMark = &_RCX->nextMark;
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
  const FxCamera *v7; 
  unsigned int frustumPlaneCount; 
  int v18; 
  unsigned __int16 uid; 
  int v35; 
  unsigned __int16 v36; 
  __int64 atlasIndex; 
  __int64 markFlags; 
  unsigned __int8 outColor[4]; 
  unsigned __int8 color[4]; 
  const FxCamera *v43; 
  float4 posWorld; 
  vec3_t out; 
  tmat33_t<vec3_t> in1; 
  __int128 v47; 
  tmat43_t<vec3_t> outTransform; 
  tmat33_t<vec3_t> v49; 

  v43 = camera;
  v7 = camera;
  FX_GenerateMarkVertsForMark_MatrixFromPlacement(placement, &vec3_origin, &outTransform);
  if ( head != 0xFFFF )
  {
    __asm
    {
      vmovaps [rsp+150h+var_40], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    do
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
      _RDI = &marksSystem->marks[head];
      head = _RDI->nextMark;
      if ( _RDI == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
        __debugbreak();
      if ( _RDI->context.modelType == 3 )
      {
        if ( (*((_BYTE *)_RDI + 103) & 2) != 0 )
        {
          FX_FreeMark(marksSystem, _RDI, -14);
        }
        else
        {
          MatrixTransformVector43(&_RDI->origin, &outTransform, &out);
          __asm { vmovss  xmm0, dword ptr [rsp+150h+out] }
          frustumPlaneCount = v7->frustumPlaneCount;
          __asm { vmovss  xmm3, dword ptr [rdi+1Ch]; radius }
          HIDWORD(v47) = 0;
          __asm
          {
            vmovups xmm4, xmmword ptr [rbp-60h]
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [rsp+150h+out+4], 50h+var_40
            vinsertps xmm4, xmm4, dword ptr [rsp+150h+out+8], 50h+var_30
            vmovups xmmword ptr [rbp-60h], xmm4
            vmovups xmmword ptr [rsp+150h+posWorld.v], xmm4
          }
          if ( !FX_CullSphere(v7, frustumPlaneCount, &posWorld, *(float *)&_XMM3, 0) )
          {
            MatrixTransformVector(&_RDI->texCoordAxisZ, (const tmat33_t<vec3_t> *)&outTransform, in1.m);
            MatrixTransformVector(&_RDI->texCoordAxisX, (const tmat33_t<vec3_t> *)&outTransform, &in1.m[1]);
            MatrixTransformVector(&_RDI->texCoordAxisY, (const tmat33_t<vec3_t> *)&outTransform, &in1.m[2]);
            FX_ExpandMarkVerts_GetColor(marksSystem, _RDI, outColor);
            v18 = FX_CalculateMarkAtlasFrame(marksSystem, _RDI);
            uid = FX_MarkToHandle(marksSystem, _RDI);
            R_AddMarkDecalVolume(&out, &_RDI->halfSize, &in1, outColor, _RDI->material, v18, 2u, uid);
            if ( (*((_BYTE *)_RDI + 103) & 4) != 0 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+68h]
                vmovss  xmm2, dword ptr [rdi+6Ch]
                vxorps  xmm1, xmm0, xmm6
                vxorps  xmm0, xmm2, xmm6
                vmovss  dword ptr [rsp+150h+in1], xmm1
                vmovss  xmm1, dword ptr [rdi+70h]
                vxorps  xmm2, xmm1, xmm6
                vmovss  dword ptr [rsp+150h+in1+4], xmm0
                vmovss  xmm0, dword ptr [rdi+20h]
                vxorps  xmm1, xmm0, xmm6
                vmovss  dword ptr [rsp+150h+in1+8], xmm2
                vmovss  xmm2, dword ptr [rdi+24h]
                vxorps  xmm0, xmm2, xmm6
                vmovss  dword ptr [rbp+50h+var_D4+4], xmm0
                vmovss  xmm0, dword ptr [rdi+2Ch]
                vmovss  dword ptr [rsp+150h+var_D4], xmm1
                vmovss  xmm1, dword ptr [rdi+28h]
                vxorps  xmm2, xmm1, xmm6
                vmovss  xmm1, dword ptr [rdi+30h]
                vmovss  dword ptr [rbp+50h+var_C8], xmm0
                vmovss  xmm0, dword ptr [rdi+34h]
                vmovss  dword ptr [rbp+50h+var_C8+8], xmm0
                vmovss  dword ptr [rbp+50h+var_D4+8], xmm2
                vmovss  dword ptr [rbp+50h+var_C8+4], xmm1
              }
              MatrixTransformVector(in1.m, (const tmat33_t<vec3_t> *)&outTransform, v49.m);
              MatrixTransformVector(&in1.m[1], (const tmat33_t<vec3_t> *)&outTransform, &v49.m[1]);
              MatrixTransformVector(&in1.m[2], (const tmat33_t<vec3_t> *)&outTransform, &v49.m[2]);
              FX_ExpandMarkVerts_GetColor(marksSystem, _RDI, color);
              v35 = FX_CalculateMarkAtlasFrame(marksSystem, _RDI);
              v36 = FX_MarkToHandle(marksSystem, _RDI);
              R_AddMarkDecalVolume(&out, &_RDI->halfSize, &v49, color, _RDI->material, v35, 2u, v36);
            }
            v7 = v43;
          }
        }
      }
    }
    while ( head != 0xFFFF );
    __asm { vmovaps xmm6, [rsp+150h+var_40] }
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
  GfxMarkContext *p_context; 
  unsigned int v13; 
  const char *v14; 
  unsigned int v15; 
  unsigned int frustumPlaneCount; 
  const char *Name; 
  unsigned int NumModels; 
  __int64 v25; 
  __int64 v26; 
  float4 posWorld; 
  vec3_t out; 
  __int128 v30; 
  tmat43_t<vec3_t> outTransform; 

  v7 = -1;
  nextMark = head;
  DobjModelGlobalBoneBase = -1;
  while ( nextMark != 0xFFFF )
  {
    if ( nextMark >= 0x200u )
    {
      LODWORD(v26) = 512;
      LODWORD(v25) = nextMark;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    _RBX = &marksSystem->marks[nextMark];
    nextMark = _RBX->nextMark;
    p_context = &_RBX->context;
    if ( _RBX == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( p_context->modelType == 4 )
    {
      if ( _RBX == (FxMark *)-76i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2003, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
      }
      if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
        __debugbreak();
      v13 = _RBX->context.surfIndex & 0x1F;
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
          LODWORD(v25) = DobjModelGlobalBoneBase;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2273, ASSERT_TYPE_ASSERT, "( ( markModelGlobalBoneBase >= 0 ) )", "( markModelGlobalBoneBase ) = %i", v25) )
            __debugbreak();
        }
        v15 = DobjModelGlobalBoneBase + _RBX->context.lmapIndex;
        if ( (*((_BYTE *)_RBX + 103) & 2) != 0 )
        {
          FX_FreeMark(marksSystem, _RBX, -12);
        }
        else if ( !bitarray_base<bitarray<256>>::testBit(hidePartBits, v15) && DObjSkelIsBoneUpToDate(dobj, v15) )
        {
          FX_GenerateMarkVertsForMark_MatrixFromAnim(_RBX, dobj, &boneMtxList[v15], &camera->viewOffset, &outTransform);
          MatrixTransformVector43(&_RBX->origin, &outTransform, &out);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0F8h+out]
            vmovss  xmm3, dword ptr [rbx+1Ch]; radius
          }
          HIDWORD(v30) = 0;
          __asm { vmovups xmm4, xmmword ptr [rsp+70h] }
          frustumPlaneCount = camera->frustumPlaneCount;
          __asm
          {
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [rsp+0F8h+out+4], 10h
            vinsertps xmm4, xmm4, dword ptr [rsp+0F8h+out+8], arg_18
            vmovups xmmword ptr [rsp+70h], xmm4
            vmovups xmmword ptr [rsp+0F8h+posWorld.v], xmm4
          }
          if ( !FX_CullSphere(camera, frustumPlaneCount, &posWorld, *(float *)&_XMM3, 0) )
            FX_AddDecalVolumeMarkAnimated(marksSystem, _RBX, &out, &outTransform, 0);
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
  char v6; 
  GfxMarkContext *p_context; 
  unsigned __int64 lmapIndex; 
  unsigned int frustumPlaneCount; 
  __int64 v24; 
  double v25; 
  __int64 v26; 
  float4 posWorld; 
  vec3_t out; 
  __int128 v29; 
  DObjPartBits partBits; 
  tmat43_t<vec3_t> outTransform; 

  _RDI = placement;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vucomiss xmm0, cs:__real@3f800000
  }
  if ( !v6 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+108h+var_E0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2079, ASSERT_TYPE_ASSERT, "( ( placement->scale == 1.0f ) )", "( placement->scale ) = %g", v25) )
      __debugbreak();
  }
  FX_GenerateMarkVertsForMark_MatrixFromPlacement(&placement->base, &vec3_origin, &outTransform);
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2314, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  DObjGetHidePartBits(dobj, &partBits);
  while ( head != 0xFFFF )
  {
    if ( head >= 0x200u )
    {
      LODWORD(v26) = 512;
      LODWORD(v24) = head;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v24, v26) )
        __debugbreak();
    }
    if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
      __debugbreak();
    _RBX = &marksSystem->marks[head];
    head = _RBX->nextMark;
    p_context = &_RBX->context;
    if ( _RBX == (FxMark *)-76i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
      __debugbreak();
    if ( p_context->modelType == 4 )
    {
      if ( _RBX == (FxMark *)-76i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2003, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
          __debugbreak();
      }
      if ( p_context->modelType != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2004, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_ENT_MODEL") )
        __debugbreak();
      if ( (_RBX->context.surfIndex & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2326, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_DObjModelIndex( &mark->context ) == 0)", (const char *)&queryFormat, "FX_GetMarkContext_DObjModelIndex( &mark->context ) == 0") )
        __debugbreak();
      lmapIndex = _RBX->context.lmapIndex;
      if ( (*((_BYTE *)_RBX + 103) & 2) != 0 )
      {
        FX_FreeMark(marksSystem, _RBX, -13);
      }
      else
      {
        if ( (unsigned int)lmapIndex >= 0x100 )
        {
          LODWORD(v26) = 256;
          LODWORD(v24) = _RBX->context.lmapIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v26) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (lmapIndex & 0x1F)) & partBits.array[lmapIndex >> 5]) == 0 )
        {
          MatrixTransformVector43(&_RBX->origin, &outTransform, &out);
          __asm { vmovss  xmm0, dword ptr [rsp+108h+out] }
          frustumPlaneCount = camera->frustumPlaneCount;
          __asm { vmovss  xmm3, dword ptr [rbx+1Ch]; radius }
          HIDWORD(v29) = 0;
          __asm
          {
            vmovups xmm4, xmmword ptr [rsp+60h]
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [rsp+108h+out+4], 10h
            vinsertps xmm4, xmm4, dword ptr [rsp+108h+out+8], arg_18
            vmovups xmmword ptr [rsp+60h], xmm4
            vmovups xmmword ptr [rsp+108h+posWorld.v], xmm4
          }
          if ( !FX_CullSphere(camera, frustumPlaneCount, &posWorld, *(float *)&_XMM3, 0) )
            FX_AddDecalVolumeMarkAnimated(marksSystem, _RBX, &out, &outTransform, 0);
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
  __int64 dynEntId_low; 
  __int64 v27; 
  bool v28; 
  bool v50; 
  int v98; 
  unsigned __int16 v99; 
  unsigned __int8 *v100; 
  vec3_t *p_origin; 
  __int64 atlasIndex; 
  double atlasIndexa; 
  __int64 markFlags; 
  double markFlagsa; 
  double uid; 
  double v134; 
  double v135; 
  unsigned __int8 outColor[4]; 
  unsigned __int8 color[4]; 
  tmat33_t<vec3_t> axis; 
  int v140[4]; 
  vec3_t origin; 
  void *retaddr; 

  _R11 = &retaddr;
  _R12 = camera;
  nextMark = head;
  enabled = fx_marks->current.enabled;
  if ( head != 0xFFFF )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovss  xmm8, cs:__real@40000000
      vmovaps xmmword ptr [r11-0B8h], xmm13
      vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps xmmword ptr [r11-0C8h], xmm14
      vmovss  xmm14, cs:__real@3f800000
      vmovaps xmmword ptr [r11-0D8h], xmm15
      vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps xmmword ptr [r11-0A8h], xmm12
    }
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
      _RDI = &marksSystem->marks[nextMark];
      nextMark = _RDI->nextMark;
      if ( (*((_BYTE *)_RDI + 103) & 1) != 0 || enabled )
      {
        if ( _RDI == (FxMark *)-76i64 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2157, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
            __debugbreak();
        }
        if ( _RDI->context.modelType != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2158, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
          __debugbreak();
        dynEntId_low = LOWORD(_RDI->context.typeSpecificIndex.dynEntId);
        if ( (unsigned int)dynEntId_low >= 0xFFF0 )
        {
          LODWORD(markFlags) = 65520;
          LODWORD(atlasIndex) = LOWORD(_RDI->context.typeSpecificIndex.dynEntId);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2456, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( 65008 + 512 )", "pieceIndex doesn't index MAX_MAP_GLASS_PIECES + MAX_GLASS_BROKEN_PIECES\n\t%i not in [0, %i)", atlasIndex, markFlags) )
            __debugbreak();
        }
        if ( R_GetSceneGlass(dynEntId_low)->rendered )
        {
          if ( (*((_BYTE *)_RDI + 103) & 2) != 0 )
          {
            FX_FreeMark(marksSystem, _RDI, -16);
          }
          else
          {
            _RAX = fxWorld.glassSys.halfThickness;
            _RCX = dynEntId_low;
            v27 = dynEntId_low;
            v28 = __CFADD__(fxWorld.glassSys.piecePlaces, v27 * 32);
            _RBX = &fxWorld.glassSys.piecePlaces[v27];
            __asm
            {
              vmovss  xmm11, dword ptr [rax+rcx*4]
              vmovss  xmm4, dword ptr [rbx+4]
              vmovss  xmm5, dword ptr [rbx]
              vmovss  xmm6, dword ptr [rbx+8]
              vmovss  xmm7, dword ptr [rbx+0Ch]
              vmulss  xmm1, xmm5, xmm5
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm7, xmm7
              vaddss  xmm2, xmm3, xmm0
              vsubss  xmm1, xmm2, xmm14
              vandps  xmm1, xmm1, xmm15
              vcomiss xmm1, cs:__real@3b03126f
            }
            if ( !v28 )
            {
              __asm
              {
                vsqrtss xmm0, xmm2, xmm2
                vcvtss2sd xmm1, xmm0, xmm0
                vmovsd  [rsp+180h+var_138], xmm1
                vcvtss2sd xmm0, xmm4, xmm4
                vcvtss2sd xmm2, xmm7, xmm7
                vmovsd  [rsp+180h+var_140], xmm2
                vcvtss2sd xmm3, xmm6, xmm6
                vmovsd  qword ptr [rsp+180h+uid], xmm3
                vmovsd  qword ptr [rsp+180h+markFlags], xmm0
                vcvtss2sd xmm4, xmm5, xmm5
                vmovsd  qword ptr [rsp+180h+atlasIndex], xmm4
              }
              v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 38, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", atlasIndexa, markFlagsa, uid, v134, v135);
              v28 = 0;
              if ( v50 )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm5, dword ptr [rbx+4]
              vmovss  xmm4, dword ptr [rbx]
              vmulss  xmm1, xmm4, dword ptr [rbx+8]
              vmulss  xmm0, xmm5, dword ptr [rbx+0Ch]
              vmulss  xmm2, xmm5, dword ptr [rbx+8]
              vaddss  xmm1, xmm1, xmm0
              vmulss  xmm0, xmm4, dword ptr [rbx+0Ch]
              vmulss  xmm10, xmm1, xmm8
              vsubss  xmm1, xmm2, xmm0
              vmulss  xmm7, xmm1, xmm8
              vmulss  xmm0, xmm5, xmm5
              vmulss  xmm3, xmm4, xmm4
              vaddss  xmm1, xmm3, xmm0
              vmovss  xmm0, dword ptr [r12]
              vsubss  xmm9, xmm0, dword ptr [rbx+10h]
              vmovss  xmm0, dword ptr [r12+8]
              vmulss  xmm2, xmm1, xmm8
              vsubss  xmm8, xmm0, dword ptr [rbx+18h]
              vmovss  xmm1, dword ptr [r12+4]
              vsubss  xmm6, xmm1, dword ptr [rbx+14h]
              vsubss  xmm5, xmm14, xmm2
              vmulss  xmm2, xmm6, xmm7
              vmulss  xmm1, xmm9, xmm10
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm5, xmm8
              vaddss  xmm4, xmm3, xmm0
              vxorps  xmm1, xmm11, xmm13
              vxorps  xmm0, xmm0, xmm0
              vcmpless xmm0, xmm0, xmm4
              vmovss  xmm4, dword ptr [rdi+6Ch]
              vblendvps xmm2, xmm1, xmm11, xmm0
              vmulss  xmm12, xmm5, xmm2
              vmovss  xmm5, dword ptr [rdi+68h]
              vmulss  xmm11, xmm7, xmm2
              vmovss  xmm7, dword ptr [rdi+70h]
              vmulss  xmm1, xmm6, xmm4
              vmulss  xmm0, xmm9, xmm5
              vmovss  [rsp+180h+var_128], xmm2
              vmulss  xmm10, xmm10, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm7, xmm8
              vaddss  xmm3, xmm2, xmm1
              vcomiss xmm3, cs:__real@00000000
            }
            if ( v28 )
            {
              __asm
              {
                vmovss  xmm2, dword ptr [rdi+24h]
                vxorps  xmm0, xmm5, xmm13
                vmovss  dword ptr [rsp+180h+axis], xmm0
                vxorps  xmm0, xmm7, xmm13
                vmovss  dword ptr [rsp+180h+axis+8], xmm0
                vxorps  xmm1, xmm4, xmm13
                vmovss  dword ptr [rsp+180h+axis+4], xmm1
                vmovss  xmm1, dword ptr [rdi+20h]
                vxorps  xmm0, xmm1, xmm13
                vmovss  dword ptr [rsp+180h+axis+0Ch], xmm0
                vmovss  xmm0, dword ptr [rdi+28h]
                vxorps  xmm1, xmm2, xmm13
                vxorps  xmm2, xmm0, xmm13
                vmovss  xmm0, dword ptr [rdi+2Ch]
                vmovss  dword ptr [rsp+180h+axis+18h], xmm0
                vmovss  xmm0, dword ptr [rdi+34h]
                vmovss  dword ptr [rbp+80h+axis+20h], xmm0
                vaddss  xmm0, xmm10, dword ptr [rdi+10h]
                vmovss  dword ptr [rsp+180h+axis+10h], xmm1
                vmovss  xmm1, dword ptr [rdi+30h]
                vmovss  dword ptr [rbp+80h+origin], xmm0
                vaddss  xmm0, xmm12, dword ptr [rdi+18h]
                vmovss  dword ptr [rsp+180h+axis+1Ch], xmm1
                vaddss  xmm1, xmm11, dword ptr [rdi+14h]
                vmovss  dword ptr [rbp+80h+origin+8], xmm0
                vmovss  dword ptr [rsp+180h+axis+14h], xmm2
                vmovss  dword ptr [rbp+80h+origin+4], xmm1
              }
              FX_ExpandMarkVerts_GetColor(marksSystem, _RDI, color);
              v98 = FX_CalculateMarkAtlasFrame(marksSystem, _RDI);
              v99 = FX_MarkToHandle(marksSystem, _RDI);
              v100 = color;
              p_origin = &origin;
            }
            else
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [rdi+20h]
                vmovss  xmm1, dword ptr [rdi+34h]
                vmovups xmmword ptr [rsp+180h+axis+0Ch], xmm0
                vmovss  xmm0, dword ptr [rdi+30h]
                vmovss  dword ptr [rsp+180h+axis+1Ch], xmm0
                vaddss  xmm0, xmm10, dword ptr [rdi+10h]
                vmovss  [rbp+80h+var_F8], xmm0
                vaddss  xmm0, xmm12, dword ptr [rdi+18h]
                vmovss  dword ptr [rbp+80h+axis+20h], xmm1
                vaddss  xmm1, xmm11, dword ptr [rdi+14h]
                vmovss  [rbp+80h+var_F0], xmm0
                vmovss  dword ptr [rsp+180h+axis], xmm5
                vmovss  dword ptr [rsp+180h+axis+4], xmm4
                vmovss  dword ptr [rsp+180h+axis+8], xmm7
                vmovss  [rbp+80h+var_F4], xmm1
              }
              FX_ExpandMarkVerts_GetColor(marksSystem, _RDI, outColor);
              v98 = FX_CalculateMarkAtlasFrame(marksSystem, _RDI);
              v99 = FX_MarkToHandle(marksSystem, _RDI);
              v100 = outColor;
              p_origin = (vec3_t *)v140;
            }
            R_AddMarkDecalVolume(p_origin, &_RDI->halfSize, &axis, v100, _RDI->material, v98, 0, v99);
            __asm { vmovss  xmm8, cs:__real@40000000 }
          }
        }
      }
    }
    while ( nextMark != 0xFFFF );
    __asm
    {
      vmovaps xmm15, [rsp+180h+var_D0]
      vmovaps xmm14, [rsp+180h+var_C0]
      vmovaps xmm13, [rsp+180h+var_B0]
      vmovaps xmm12, [rsp+180h+var_A0]
      vmovaps xmm11, [rsp+180h+var_90]
      vmovaps xmm10, [rsp+180h+var_80]
      vmovaps xmm9, [rsp+180h+var_70]
      vmovaps xmm8, [rsp+180h+var_60]
      vmovaps xmm7, [rsp+180h+var_50]
      vmovaps xmm6, [rsp+180h+var_40]
    }
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
  unsigned int frustumPlaneCount; 
  char v19; 
  int v35; 
  unsigned __int16 uid; 
  __int64 atlasIndex; 
  __int64 markFlags; 
  unsigned __int8 outColor[16]; 
  float4 posWorld; 
  __int128 v43; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  nextMark = head;
  enabled = fx_marks->current.enabled;
  if ( head != 0xFFFF )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
    }
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
      _RDI = &marksSystem->marks[nextMark];
      nextMark = _RDI->nextMark;
      if ( (*((_BYTE *)_RDI + 103) & 1) != 0 || enabled )
      {
        __asm { vmovss  xmm0, dword ptr [rdi+10h] }
        frustumPlaneCount = camera->frustumPlaneCount;
        __asm { vmovss  xmm3, dword ptr [rdi+1Ch]; radius }
        HIDWORD(v43) = 0;
        __asm
        {
          vmovups xmm4, xmmword ptr [rsp+60h]
          vmovss  xmm4, xmm4, xmm0
          vinsertps xmm4, xmm4, dword ptr [rdi+14h], 10h
          vinsertps xmm4, xmm4, dword ptr [rdi+18h], 20h ; ' '
          vmovups xmmword ptr [rsp+60h], xmm4
          vmovups xmmword ptr [rsp+0E8h+posWorld.v], xmm4
        }
        if ( !FX_CullSphere(camera, frustumPlaneCount, &posWorld, *(float *)&_XMM3, 0) )
        {
          v19 = *((_BYTE *)_RDI + 103);
          if ( (v19 & 2) != 0 )
          {
            FX_FreeMark(marksSystem, _RDI, -17);
          }
          else
          {
            FX_AddDecalVolumeMark(marksSystem, _RDI, 0);
            if ( (v19 & 4) != 0 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+68h]
                vmovss  xmm2, dword ptr [rdi+6Ch]
                vxorps  xmm1, xmm0, xmm6
                vxorps  xmm0, xmm2, xmm6
                vmovss  dword ptr [rsp+0E8h+axis], xmm1
                vmovss  xmm1, dword ptr [rdi+70h]
                vxorps  xmm2, xmm1, xmm6
                vmovss  dword ptr [rsp+0E8h+axis+4], xmm0
                vmovss  xmm0, dword ptr [rdi+20h]
                vxorps  xmm1, xmm0, xmm6
                vmovss  dword ptr [rsp+0E8h+axis+8], xmm2
                vmovss  xmm2, dword ptr [rdi+24h]
                vxorps  xmm0, xmm2, xmm6
                vmovss  dword ptr [rsp+0E8h+axis+10h], xmm0
                vmovss  xmm0, dword ptr [rdi+2Ch]
                vmovss  dword ptr [rsp+0E8h+axis+0Ch], xmm1
                vmovss  xmm1, dword ptr [rdi+28h]
                vxorps  xmm2, xmm1, xmm6
                vmovss  xmm1, dword ptr [rdi+30h]
                vmovss  dword ptr [rsp+0E8h+axis+18h], xmm0
                vmovss  xmm0, dword ptr [rdi+34h]
                vmovss  dword ptr [rsp+0E8h+axis+20h], xmm0
                vmovss  dword ptr [rsp+0E8h+axis+14h], xmm2
                vmovss  dword ptr [rsp+0E8h+axis+1Ch], xmm1
              }
              FX_ExpandMarkVerts_GetColor(marksSystem, _RDI, outColor);
              v35 = FX_CalculateMarkAtlasFrame(marksSystem, _RDI);
              uid = FX_MarkToHandle(marksSystem, _RDI);
              R_AddMarkDecalVolume(&_RDI->origin, &_RDI->halfSize, &axis, outColor, _RDI->material, v35, 0, uid);
            }
          }
        }
      }
    }
    while ( nextMark != 0xFFFF );
    __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
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
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+110h+skelMat.axis+4]
    vmovss  xmm0, dword ptr [rsp+110h+skelMat.axis]
    vmovss  dword ptr [rbp+4Fh+in2], xmm0
    vmovss  xmm0, dword ptr [rsp+110h+skelMat.axis+8]
    vmovss  dword ptr [rbp+4Fh+in2+4], xmm1
    vmovss  xmm1, dword ptr [rsp+110h+skelMat.axis+10h]
    vmovss  dword ptr [rbp+4Fh+in2+8], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+skelMat.axis+14h]
    vmovss  dword ptr [rbp+4Fh+in2+0Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+skelMat.axis+18h]
    vmovss  dword ptr [rbp+4Fh+in2+10h], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+skelMat.axis+20h]
    vmovss  dword ptr [rbp+4Fh+in2+14h], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+skelMat.axis+24h]
    vmovss  dword ptr [rbp+4Fh+in2+18h], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+skelMat.axis+28h]
    vmovss  dword ptr [rbp+4Fh+in2+1Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+skelMat.origin]
    vaddss  xmm2, xmm1, dword ptr [r14]
    vmovss  dword ptr [rbp+4Fh+in2+20h], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+skelMat.origin+4]
    vaddss  xmm1, xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rbp+4Fh+in2+24h], xmm2
    vmovss  xmm2, dword ptr [rbp+4Fh+skelMat.origin+8]
    vaddss  xmm0, xmm2, dword ptr [r14+8]
    vmovss  dword ptr [rbp+4Fh+in2+2Ch], xmm0
    vmovss  dword ptr [rbp+4Fh+in2+28h], xmm1
  }
  Model = DObjGetModel(dobj, MarkContext_DObjModelIndex);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  LocalConvertQuatToInverseSkelMat(&Model->baseMat[lmapIndex], &skelMat);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+110h+skelMat.axis]
    vmovss  xmm1, dword ptr [rsp+110h+skelMat.axis+4]
    vmovss  dword ptr [rbp+4Fh+in1], xmm0
    vmovss  xmm0, dword ptr [rsp+110h+skelMat.axis+8]
    vmovss  dword ptr [rbp+4Fh+in1+4], xmm1
    vmovss  xmm1, dword ptr [rsp+110h+skelMat.axis+10h]
    vmovss  dword ptr [rbp+4Fh+in1+8], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+skelMat.axis+14h]
    vmovss  dword ptr [rbp+4Fh+in1+0Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+skelMat.axis+18h]
    vmovss  dword ptr [rbp+4Fh+in1+10h], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+skelMat.axis+20h]
    vmovss  dword ptr [rbp+4Fh+in1+14h], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+skelMat.axis+24h]
    vmovss  dword ptr [rbp+4Fh+in1+18h], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+skelMat.axis+28h]
    vmovss  dword ptr [rbp+4Fh+in1+1Ch], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+skelMat.origin]
    vmovss  dword ptr [rbp+4Fh+in1+20h], xmm0
    vmovss  xmm0, dword ptr [rbp+4Fh+skelMat.origin+4]
    vmovss  dword ptr [rbp+4Fh+in1+24h], xmm1
    vmovss  xmm1, dword ptr [rbp+4Fh+skelMat.origin+8]
    vmovss  dword ptr [rbp+4Fh+in1+28h], xmm0
    vmovss  dword ptr [rbp+4Fh+in1+2Ch], xmm1
  }
  MatrixMultiply43(&in1, &in2, outTransform);
}

/*
==============
FX_GenerateMarkVertsForMark_MatrixFromPlacement
==============
*/
void FX_GenerateMarkVertsForMark_MatrixFromPlacement(const GfxPlacement *placement, const vec3_t *viewOffset, tmat43_t<vec3_t> *outTransform)
{
  DObjAnimMat mat; 
  DObjSkelMat skelMat; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+10h]
    vmovaps xmmword ptr [rsp+98h+mat.quat], xmm0
    vmovss  xmm0, cs:__real@40000000
    vmovss  [rsp+98h+mat.transWeight], xmm0
    vmovss  xmm0, dword ptr [rcx+14h]
    vmovss  dword ptr [rsp+98h+mat.trans], xmm1
    vmovss  xmm1, dword ptr [rcx+18h]
  }
  _RBX = viewOffset;
  _RDI = outTransform;
  __asm
  {
    vmovss  dword ptr [rsp+98h+mat.trans+4], xmm0
    vmovss  dword ptr [rsp+98h+mat.trans+8], xmm1
  }
  LocalConvertQuatToSkelMat(&mat, &skelMat);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+98h+skelMat.origin]
    vmovss  xmm0, dword ptr [rsp+98h+skelMat.axis]
    vmovss  xmm1, dword ptr [rsp+98h+skelMat.axis+4]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rsp+98h+skelMat.axis+8]
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+skelMat.axis+10h]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  xmm0, dword ptr [rsp+98h+skelMat.axis+14h]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+skelMat.axis+18h]
    vmovss  dword ptr [rdi+10h], xmm0
    vmovss  xmm0, dword ptr [rsp+98h+skelMat.axis+20h]
    vmovss  dword ptr [rdi+14h], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+skelMat.axis+24h]
    vmovss  dword ptr [rdi+18h], xmm0
    vmovss  xmm0, dword ptr [rsp+98h+skelMat.axis+28h]
    vmovss  dword ptr [rdi+20h], xmm0
    vmovss  xmm0, dword ptr [rsp+98h+skelMat.origin+4]
    vmovss  dword ptr [rdi+1Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+98h+skelMat.origin+8]
    vmovss  dword ptr [rdi+24h], xmm2
    vmovss  dword ptr [rdi+28h], xmm0
    vmovss  dword ptr [rdi+2Ch], xmm1
    vaddss  xmm0, xmm2, dword ptr [rbx]
    vmovss  dword ptr [rdi+24h], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vaddss  xmm2, xmm1, dword ptr [rdi+28h]
    vmovss  dword ptr [rdi+28h], xmm2
    vmovss  xmm0, dword ptr [rbx+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rdi+2Ch], xmm1
  }
}

/*
==============
FX_GenerateMarkVertsForMark_MatrixFromScaledPlacement
==============
*/
void FX_GenerateMarkVertsForMark_MatrixFromScaledPlacement(const GfxScaledPlacement *placement, const vec3_t *viewOffset, tmat43_t<vec3_t> *outTransform)
{
  const GfxScaledPlacement *v6; 
  double v8; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vucomiss xmm0, cs:__real@3f800000
  }
  v6 = placement;
  __asm
  {
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+38h+var_10], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2079, ASSERT_TYPE_ASSERT, "( ( placement->scale == 1.0f ) )", "( placement->scale ) = %g", v8) )
    __debugbreak();
  FX_GenerateMarkVertsForMark_MatrixFromPlacement(&v6->base, viewOffset, outTransform);
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
  unsigned int frustumPlaneCount; 
  __int64 v22; 
  __int64 v23; 
  bool v24; 
  FxMark *v25; 
  float4 posWorld; 
  __int128 v27; 

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
            _RBX = &marksSystem->marks[nextMark];
            nextMark = _RBX->nextMark;
            if ( (*((_BYTE *)_RBX + 103) & 2) != 0 )
            {
              FX_FreeMark(marksSystem, _RBX, -15);
            }
            else
            {
              __asm { vmovss  xmm0, dword ptr [rbx+10h] }
              frustumPlaneCount = camera->frustumPlaneCount;
              __asm { vmovss  xmm3, dword ptr [rbx+1Ch]; radius }
              HIDWORD(v27) = 0;
              __asm
              {
                vmovups xmm4, xmmword ptr [rsp+60h]
                vmovss  xmm4, xmm4, xmm0
                vinsertps xmm4, xmm4, dword ptr [rbx+14h], 10h
                vinsertps xmm4, xmm4, dword ptr [rbx+18h], 20h ; ' '
                vmovups xmmword ptr [rsp+60h], xmm4
                vmovups xmmword ptr [rsp+0B8h+posWorld.v], xmm4
              }
              if ( !FX_CullSphere(camera, frustumPlaneCount, &posWorld, *(float *)&_XMM3, 0) )
                FX_AddDecalVolumeMark(marksSystem, _RBX, 0);
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
  FxMarksSystem *v9; 
  unsigned __int16 markHandle; 
  int DobjModelGlobalBoneBase; 
  const DObj *obj; 
  int MarkContext_DObjModelIndex; 
  unsigned int v15; 
  const XModel *Model; 
  const XModel *v17; 
  const char *v18; 
  int v19; 
  const char *v20; 
  signed int v21; 
  const DObjAnimMat *v22; 
  char v23; 
  bool v47; 
  float v72; 
  float v74; 
  float v76; 
  char v77; 
  bool v99; 
  int v123; 
  const char *Name; 
  unsigned int NumModels; 
  char *fmt; 
  __int64 v132; 
  double v133; 
  double v134; 
  double v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
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
  int v161; 
  FxMarksSystem *marksSystem; 
  tmat43_t<vec3_t> outTransform; 

  _R15 = markResult;
  v9 = FX_GetMarksSystem(markIterator->clientIndex);
  markHandle = markIterator->markHandle;
  marksSystem = v9;
  v161 = -1;
  DobjModelGlobalBoneBase = -1;
  obj = scene.sceneDObj[markIterator->dobjIndex].obj;
  if ( markHandle == 0xFFFF )
    return 0;
  while ( 1 )
  {
    _RDI = FX_MarkFromHandle(v9, markHandle);
    _R15->markHandle = markIterator->markHandle;
    markIterator->markHandle = _RDI->nextMark;
    if ( FX_GetMarkContext_ModelType(&_RDI->context) == 4 )
    {
      MarkContext_DObjModelIndex = FX_GetMarkContext_DObjModelIndex(&_RDI->context);
      v15 = MarkContext_DObjModelIndex;
      if ( MarkContext_DObjModelIndex == markIterator->modelIndex )
      {
        if ( MarkContext_DObjModelIndex < 0 || MarkContext_DObjModelIndex >= DObjGetNumModels(obj) )
        {
          Name = DObjGetName(obj);
          NumModels = DObjGetNumModels(obj);
          Com_PrintError(21, "FX MARKS: Invalid model index %d for number of models %d for dobj %s. Please report the situation that caused this.\n", v15, NumModels, Name);
          goto LABEL_33;
        }
        Model = DObjGetModel(obj, v15);
        v17 = Model;
        if ( !Model )
        {
          v18 = DObjGetName(obj);
          Com_PrintError(21, "FX MARKS: Invalid model with mark index %d for dobj %s. Please report the situation that caused this.\n", v15, v18);
          goto LABEL_33;
        }
        v19 = XModelNumBones(Model);
        if ( _RDI->context.lmapIndex >= v19 )
        {
          v20 = XModelGetName(v17);
          LODWORD(fmt) = v19;
          Com_PrintError(21, "FX MARKS: Mark bone index %d is larger than model '%s' bone count %d. Please report the situation that caused this.\n", _RDI->context.lmapIndex, v20, fmt);
          goto LABEL_33;
        }
        if ( v15 != v161 )
        {
          v161 = v15;
          DobjModelGlobalBoneBase = FX_GetDobjModelGlobalBoneBase(obj, v15);
        }
        if ( DobjModelGlobalBoneBase < 0 )
        {
          LODWORD(v132) = DobjModelGlobalBoneBase;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3135, ASSERT_TYPE_ASSERT, "( ( markModelGlobalBoneBase >= 0 ) )", "( markModelGlobalBoneBase ) = %i", v132) )
            __debugbreak();
        }
        v21 = DobjModelGlobalBoneBase + _RDI->context.lmapIndex;
        if ( (*((_BYTE *)_RDI + 103) & 2) != 0 )
        {
          FX_FreeMark(marksSystem, _RDI, -11);
          goto LABEL_33;
        }
        if ( !bitarray_base<bitarray<256>>::testBit(&markIterator->hidePartBits, v21) && DObjSkelIsBoneUpToDate(obj, v21) )
          break;
      }
    }
LABEL_33:
    markHandle = markIterator->markHandle;
    if ( markHandle == 0xFFFF )
      return 0;
    v9 = marksSystem;
  }
  __asm
  {
    vmovaps [rsp+138h+var_48], xmm6
    vmovaps [rsp+138h+var_58], xmm7
    vmovaps [rsp+138h+var_68], xmm8
  }
  v22 = &obj->skel.mat[v21];
  __asm
  {
    vmovaps [rsp+138h+var_78], xmm9
    vmovaps [rsp+138h+var_88], xmm10
  }
  FX_GenerateMarkVertsForMark_MatrixFromAnim(_RDI, obj, v22, &markIterator->viewOffset, &outTransform);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+6Ch]
    vmulss  xmm2, xmm0, dword ptr [rdi+24h]
    vmovss  xmm0, dword ptr [rdi+70h]
    vmovss  xmm9, dword ptr [rdi+68h]
    vmovss  xmm10, dword ptr [rdi+20h]
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3a83126f
    vmulss  xmm1, xmm10, xmm9
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [rdi+28h]
    vaddss  xmm0, xmm3, xmm2
    vandps  xmm1, xmm0, xmm7
    vcomiss xmm1, xmm8
  }
  if ( !v23 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+28h]
      vmovss  xmm4, dword ptr [rdi+24h]
      vmovss  xmm5, dword ptr [rdi+70h]
      vmovss  xmm6, dword ptr [rdi+6Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+138h+var_E0], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+138h+var_E8], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+138h+var_F0], xmm4
      vcvtss2sd xmm1, xmm10, xmm10
      vmovsd  [rsp+138h+var_F8], xmm1
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+138h+var_100], xmm5
      vcvtss2sd xmm2, xmm9, xmm9
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+138h+var_108], xmm6
      vmovsd  [rsp+138h+var_110], xmm2
    }
    v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3153, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( mark->texCoordAxisZ, mark->texCoordAxisX ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v133, v137, v141, v145, v149, v153, v157);
    v23 = 0;
    if ( v47 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+6Ch]
    vmulss  xmm2, xmm0, dword ptr [rdi+30h]
    vmovss  xmm0, dword ptr [rdi+70h]
    vmovss  xmm9, dword ptr [rdi+68h]
    vmovss  xmm10, dword ptr [rdi+2Ch]
    vmulss  xmm1, xmm10, xmm9
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [rdi+34h]
    vaddss  xmm0, xmm3, xmm2
    vandps  xmm1, xmm0, xmm7
    vcomiss xmm1, xmm8
  }
  if ( !v23 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+34h]
      vmovss  xmm4, dword ptr [rdi+30h]
      vmovss  xmm5, dword ptr [rdi+70h]
      vmovss  xmm6, dword ptr [rdi+6Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+138h+var_E0], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+138h+var_E8], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+138h+var_F0], xmm4
      vcvtss2sd xmm1, xmm10, xmm10
      vmovsd  [rsp+138h+var_F8], xmm1
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+138h+var_100], xmm5
      vcvtss2sd xmm2, xmm9, xmm9
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+138h+var_108], xmm6
      vmovsd  [rsp+138h+var_110], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3154, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( mark->texCoordAxisZ, mark->texCoordAxisY ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v134, v138, v142, v146, v150, v154, v158) )
      __debugbreak();
  }
  _RCX = &_RDI->origin;
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx]
    vmovsd  qword ptr [r15], xmm0
  }
  _R15->center.v[2] = _RDI->origin.v[2];
  __asm { vmovsd  xmm0, qword ptr [rdi+68h] }
  v72 = _RDI->texCoordAxisZ.v[2];
  __asm { vmovsd  qword ptr [r15+0Ch], xmm0 }
  _R15->axis.m[0].v[2] = v72;
  __asm { vmovsd  xmm0, qword ptr [rdi+20h] }
  v74 = _RDI->texCoordAxisX.v[2];
  __asm { vmovsd  qword ptr [r15+18h], xmm0 }
  _R15->axis.m[1].v[2] = v74;
  __asm { vmovsd  xmm0, qword ptr [rdi+2Ch] }
  v76 = _RDI->texCoordAxisY.v[2];
  __asm { vmovsd  qword ptr [r15+24h], xmm0 }
  _R15->axis.m[2].v[2] = v76;
  MatrixTransformVector43(&_RDI->origin, &outTransform, &_R15->worldCenter);
  MatrixTransformVector(&_RDI->texCoordAxisZ, (const tmat33_t<vec3_t> *)&outTransform, _R15->worldAxis.m);
  MatrixTransformVector(&_RDI->texCoordAxisX, (const tmat33_t<vec3_t> *)&outTransform, &_R15->worldAxis.m[1]);
  MatrixTransformVector(&_RDI->texCoordAxisY, (const tmat33_t<vec3_t> *)&outTransform, &_R15->worldAxis.m[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4Ch]
    vmulss  xmm2, xmm0, dword ptr [r15+40h]
    vmovss  xmm0, dword ptr [r15+50h]
    vmovss  xmm9, dword ptr [r15+48h]
    vmovss  xmm10, dword ptr [r15+3Ch]
    vmulss  xmm1, xmm10, xmm9
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [r15+44h]
    vaddss  xmm0, xmm3, xmm2
    vandps  xmm1, xmm0, xmm7
    vcomiss xmm1, xmm8
  }
  if ( !v77 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r15+50h]
      vmovss  xmm4, dword ptr [r15+4Ch]
      vmovss  xmm5, dword ptr [r15+44h]
      vmovss  xmm6, dword ptr [r15+40h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+138h+var_E0], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+138h+var_E8], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+138h+var_F0], xmm4
      vcvtss2sd xmm1, xmm9, xmm9
      vmovsd  [rsp+138h+var_F8], xmm1
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+138h+var_100], xmm5
      vcvtss2sd xmm2, xmm10, xmm10
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+138h+var_108], xmm6
      vmovsd  [rsp+138h+var_110], xmm2
    }
    v99 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3167, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( markResult.worldAxis[0], markResult.worldAxis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v135, v139, v143, v147, v151, v155, v159);
    v77 = 0;
    if ( v99 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r15+58h]
    vmulss  xmm2, xmm0, dword ptr [r15+40h]
    vmovss  xmm0, dword ptr [r15+5Ch]
    vmovss  xmm9, dword ptr [r15+54h]
    vmovss  xmm10, dword ptr [r15+3Ch]
    vmulss  xmm1, xmm9, xmm10
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, dword ptr [r15+44h]
    vaddss  xmm0, xmm3, xmm2
    vandps  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+138h+var_58]
    vcomiss xmm1, xmm8
    vmovaps xmm8, [rsp+138h+var_68]
  }
  if ( !v77 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r15+5Ch]
      vmovss  xmm4, dword ptr [r15+58h]
      vmovss  xmm5, dword ptr [r15+44h]
      vmovss  xmm6, dword ptr [r15+40h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+138h+var_E0], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+138h+var_E8], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+138h+var_F0], xmm4
      vcvtss2sd xmm1, xmm9, xmm9
      vmovsd  [rsp+138h+var_F8], xmm1
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+138h+var_100], xmm5
      vcvtss2sd xmm2, xmm10, xmm10
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+138h+var_108], xmm6
      vmovsd  [rsp+138h+var_110], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3168, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( markResult.worldAxis[0], markResult.worldAxis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v136, v140, v144, v148, v152, v156, v160) )
      __debugbreak();
  }
  FX_ExpandMarkVerts_GetColor(marksSystem, _RDI, _R15->color);
  v123 = FX_CalculateMarkAtlasFrame(marksSystem, _RDI);
  __asm
  {
    vmovaps xmm10, [rsp+138h+var_88]
    vmovaps xmm9, [rsp+138h+var_78]
    vmovaps xmm6, [rsp+138h+var_48]
  }
  _R15->atlasIndex = v123;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+74h]
    vmovsd  qword ptr [r15+60h], xmm0
  }
  _R15->halfSize.v[2] = _RDI->halfSize.v[2];
  _R15->material = _RDI->material;
  _R15->skinned = (*((_BYTE *)_RDI + 103) & 0x10) != 0;
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
  FxMarksSystem *v11; 
  float v60; 
  float v62; 
  float v64; 
  DynEntityPose *PoseFromClientId; 
  const vec4_t *p_quat; 
  char v67; 
  bool v89; 
  double v117; 
  double v118; 
  double v119; 
  double v120; 
  double v121; 
  double v122; 
  double v123; 
  double v124; 
  double v125; 
  double v126; 
  double v127; 
  double v128; 
  double v129; 
  double v130; 
  double v131; 
  double v132; 
  double v133; 
  double v134; 
  double v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  double v143; 
  double v144; 

  _RBP = markResult;
  MarksSystem = FX_GetMarksSystem(markIterator->clientIndex);
  markHandle = markIterator->markHandle;
  v11 = MarksSystem;
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
      _RSI = FX_MarkFromHandle(v11, markHandle);
      _RBP->markHandle = markIterator->markHandle;
      markIterator->markHandle = _RSI->nextMark;
      if ( FX_GetMarkContext_ModelType(&_RSI->context) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3251, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( &mark->context ) == MARK_MODEL_TYPE_DYN_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( &mark->context ) == MARK_MODEL_TYPE_DYN_ENT_MODEL") )
        __debugbreak();
      if ( (*((_BYTE *)_RSI + 103) & 2) == 0 )
        break;
      FX_FreeMark(v11, _RSI, -9);
      markHandle = markIterator->markHandle;
      if ( markHandle == 0xFFFF )
        goto LABEL_7;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+6Ch]
      vmulss  xmm2, xmm0, dword ptr [rsi+24h]
      vmovss  xmm0, dword ptr [rsi+70h]
      vmovaps [rsp+0D8h+var_38], xmm6
      vmovaps [rsp+0D8h+var_48], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0D8h+var_58], xmm8
      vmovss  xmm8, cs:__real@3a83126f
      vmovaps [rsp+0D8h+var_68], xmm9
      vmovss  xmm9, dword ptr [rsi+68h]
      vmovaps [rsp+0D8h+var_78], xmm10
      vmovss  xmm10, dword ptr [rsi+20h]
      vmulss  xmm1, xmm10, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm0, dword ptr [rsi+28h]
      vaddss  xmm0, xmm3, xmm2
      vandps  xmm1, xmm0, xmm7
      vcomiss xmm1, xmm8
      vmovss  xmm3, dword ptr [rsi+28h]
      vmovss  xmm4, dword ptr [rsi+24h]
      vmovss  xmm5, dword ptr [rsi+70h]
      vmovss  xmm6, dword ptr [rsi+6Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0D8h+var_80], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0D8h+var_88], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0D8h+var_90], xmm4
      vcvtss2sd xmm1, xmm10, xmm10
      vmovsd  [rsp+0D8h+var_98], xmm1
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+0D8h+var_A0], xmm5
      vcvtss2sd xmm2, xmm9, xmm9
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A8], xmm6
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3259, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( mark->texCoordAxisZ, mark->texCoordAxisX ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v117, v121, v125, v129, v133, v137, v141) )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+6Ch]
      vmulss  xmm2, xmm0, dword ptr [rsi+30h]
      vmovss  xmm0, dword ptr [rsi+70h]
      vmovss  xmm9, dword ptr [rsi+68h]
      vmovss  xmm10, dword ptr [rsi+2Ch]
      vmulss  xmm1, xmm10, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm0, dword ptr [rsi+34h]
      vaddss  xmm0, xmm3, xmm2
      vandps  xmm1, xmm0, xmm7
      vcomiss xmm1, xmm8
      vmovss  xmm3, dword ptr [rsi+34h]
      vmovss  xmm4, dword ptr [rsi+30h]
      vmovss  xmm5, dword ptr [rsi+70h]
      vmovss  xmm6, dword ptr [rsi+6Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0D8h+var_80], xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0D8h+var_88], xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0D8h+var_90], xmm4
      vcvtss2sd xmm1, xmm10, xmm10
      vmovsd  [rsp+0D8h+var_98], xmm1
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+0D8h+var_A0], xmm5
      vcvtss2sd xmm2, xmm9, xmm9
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_A8], xmm6
      vmovsd  [rsp+0D8h+var_B0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3260, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( mark->texCoordAxisZ, mark->texCoordAxisY ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v118, v122, v126, v130, v134, v138, v142) )
      __debugbreak();
    __asm
    {
      vmovsd  xmm0, qword ptr [rsi+10h]
      vmovsd  qword ptr [rbp+0], xmm0
    }
    _RBP->center.v[2] = _RSI->origin.v[2];
    __asm { vmovsd  xmm0, qword ptr [rsi+68h] }
    v60 = _RSI->texCoordAxisZ.v[2];
    __asm { vmovsd  qword ptr [rbp+0Ch], xmm0 }
    _RBP->axis.m[0].v[2] = v60;
    __asm { vmovsd  xmm0, qword ptr [rsi+20h] }
    v62 = _RSI->texCoordAxisX.v[2];
    __asm { vmovsd  qword ptr [rbp+18h], xmm0 }
    _RBP->axis.m[1].v[2] = v62;
    __asm { vmovsd  xmm0, qword ptr [rsi+2Ch] }
    v64 = _RSI->texCoordAxisY.v[2];
    __asm { vmovsd  qword ptr [rbp+24h], xmm0 }
    _RBP->axis.m[2].v[2] = v64;
    PoseFromClientId = DynEnt_GetPoseFromClientId(markIterator->clientIndex, markIterator->dynEntClientId, DYNENT_BASIS_MODEL);
    p_quat = &PoseFromClientId->pose.quat;
    QuatTrans_TransformPoint(&PoseFromClientId->pose.quat, &PoseFromClientId->pose.origin, &_RSI->origin, &_RBP->worldCenter);
    QuatTransform(p_quat, &_RSI->texCoordAxisZ, _RBP->worldAxis.m);
    QuatTransform(p_quat, &_RSI->texCoordAxisX, &_RBP->worldAxis.m[1]);
    QuatTransform(p_quat, &_RSI->texCoordAxisY, &_RBP->worldAxis.m[2]);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4Ch]
      vmulss  xmm2, xmm0, dword ptr [rbp+40h]
      vmovss  xmm0, dword ptr [rbp+50h]
      vmovss  xmm9, dword ptr [rbp+48h]
      vmovss  xmm10, dword ptr [rbp+3Ch]
      vmulss  xmm1, xmm10, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm0, dword ptr [rbp+44h]
      vaddss  xmm0, xmm3, xmm2
      vandps  xmm1, xmm0, xmm7
      vcomiss xmm1, xmm8
    }
    if ( !v67 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+50h]
        vmovss  xmm4, dword ptr [rbp+4Ch]
        vmovss  xmm5, dword ptr [rbp+44h]
        vmovss  xmm6, dword ptr [rbp+40h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0D8h+var_80], xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0D8h+var_88], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+0D8h+var_90], xmm4
        vcvtss2sd xmm1, xmm9, xmm9
        vmovsd  [rsp+0D8h+var_98], xmm1
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+0D8h+var_A0], xmm5
        vcvtss2sd xmm2, xmm10, xmm10
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+0D8h+var_A8], xmm6
        vmovsd  [rsp+0D8h+var_B0], xmm2
      }
      v89 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3273, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( markResult.worldAxis[0], markResult.worldAxis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v119, v123, v127, v131, v135, v139, v143);
      v67 = 0;
      if ( v89 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+58h]
      vmulss  xmm2, xmm0, dword ptr [rbp+40h]
      vmovss  xmm0, dword ptr [rbp+5Ch]
      vmovss  xmm9, dword ptr [rbp+3Ch]
      vmovss  xmm10, dword ptr [rbp+54h]
      vmulss  xmm1, xmm10, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm0, dword ptr [rbp+44h]
      vaddss  xmm0, xmm3, xmm2
      vandps  xmm1, xmm0, xmm7
      vmovaps xmm7, [rsp+0D8h+var_48]
      vcomiss xmm1, xmm8
      vmovaps xmm8, [rsp+0D8h+var_58]
    }
    if ( !v67 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+5Ch]
        vmovss  xmm4, dword ptr [rbp+58h]
        vmovss  xmm5, dword ptr [rbp+44h]
        vmovss  xmm6, dword ptr [rbp+40h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0D8h+var_80], xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0D8h+var_88], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+0D8h+var_90], xmm4
        vcvtss2sd xmm1, xmm10, xmm10
        vmovsd  [rsp+0D8h+var_98], xmm1
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+0D8h+var_A0], xmm5
        vcvtss2sd xmm2, xmm9, xmm9
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+0D8h+var_A8], xmm6
        vmovsd  [rsp+0D8h+var_B0], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 3274, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( markResult.worldAxis[0], markResult.worldAxis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v120, v124, v128, v132, v136, v140, v144) )
        __debugbreak();
    }
    FX_ExpandMarkVerts_GetColor(v11, _RSI, _RBP->color);
    __asm
    {
      vmovaps xmm10, [rsp+0D8h+var_78]
      vmovaps xmm9, [rsp+0D8h+var_68]
      vmovaps xmm6, [rsp+0D8h+var_38]
    }
    _RBP->atlasIndex = FX_CalculateMarkAtlasFrame(v11, _RSI);
    __asm
    {
      vmovsd  xmm0, qword ptr [rsi+74h]
      vmovsd  qword ptr [rbp+60h], xmm0
    }
    _RBP->halfSize.v[2] = _RSI->halfSize.v[2];
    _RBP->material = _RSI->material;
    _RBP->skinned = (*((_BYTE *)_RSI + 103) & 0x10) != 0;
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
  tmat43_t<vec3_t> *p_transformMatrix; 
  float v11; 
  float v13; 
  float v15; 

  _R13 = markResult;
  MarksSystem = FX_GetMarksSystem(markIterator->clientIndex);
  while ( 1 )
  {
    markHandle = markIterator->markHandle;
    if ( markHandle == 0xFFFF )
      break;
    _RBX = FX_MarkFromHandle(MarksSystem, markHandle);
    _R13->markHandle = markIterator->markHandle;
    markIterator->markHandle = _RBX->nextMark;
    if ( FX_GetMarkContext_ModelType(&_RBX->context) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2935, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( &mark->context ) == MARK_MODEL_TYPE_ENT_MODEL)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( &mark->context ) == MARK_MODEL_TYPE_ENT_MODEL") )
      __debugbreak();
    if ( FX_GetMarkContext_DObjModelIndex(&_RBX->context) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 2936, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_DObjModelIndex( &mark->context ) == 0)", (const char *)&queryFormat, "FX_GetMarkContext_DObjModelIndex( &mark->context ) == 0") )
        __debugbreak();
    }
    if ( (*((_BYTE *)_RBX + 103) & 2) != 0 )
    {
      FX_FreeMark(MarksSystem, _RBX, -10);
    }
    else if ( !bitarray_base<bitarray<256>>::testBit(&markIterator->hidePartBits, _RBX->context.lmapIndex) )
    {
      _RCX = &_RBX->origin;
      p_transformMatrix = &markIterator->transformMatrix;
      __asm
      {
        vmovsd  xmm0, qword ptr [rcx]
        vmovsd  qword ptr [r13+0], xmm0
      }
      _R13->center.v[2] = _RBX->origin.v[2];
      __asm { vmovsd  xmm0, qword ptr [rbx+68h] }
      v11 = _RBX->texCoordAxisZ.v[2];
      __asm { vmovsd  qword ptr [r13+0Ch], xmm0 }
      _R13->axis.m[0].v[2] = v11;
      __asm { vmovsd  xmm0, qword ptr [rbx+20h] }
      v13 = _RBX->texCoordAxisX.v[2];
      __asm { vmovsd  qword ptr [r13+18h], xmm0 }
      _R13->axis.m[1].v[2] = v13;
      __asm { vmovsd  xmm0, qword ptr [rbx+2Ch] }
      v15 = _RBX->texCoordAxisY.v[2];
      __asm { vmovsd  qword ptr [r13+24h], xmm0 }
      _R13->axis.m[2].v[2] = v15;
      MatrixTransformVector43(&_RBX->origin, p_transformMatrix, &_R13->worldCenter);
      MatrixTransformVector(&_RBX->texCoordAxisZ, (const tmat33_t<vec3_t> *)p_transformMatrix, _R13->worldAxis.m);
      MatrixTransformVector(&_RBX->texCoordAxisX, (const tmat33_t<vec3_t> *)p_transformMatrix, &_R13->worldAxis.m[1]);
      MatrixTransformVector(&_RBX->texCoordAxisY, (const tmat33_t<vec3_t> *)p_transformMatrix, &_R13->worldAxis.m[2]);
      FX_ExpandMarkVerts_GetColor(MarksSystem, _RBX, _R13->color);
      _R13->atlasIndex = FX_CalculateMarkAtlasFrame(MarksSystem, _RBX);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx+74h]
        vmovsd  qword ptr [r13+60h], xmm0
      }
      _R13->halfSize.v[2] = _RBX->halfSize.v[2];
      _R13->material = _RBX->material;
      _R13->skinned = (*((_BYTE *)_RBX + 103) & 0x10) != 0;
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
  void *v38; 
  bool v44; 
  const vec4_t *p_boltOffsetQuat; 
  char v63; 
  bool v85; 
  bool v102; 
  FxMarkSystemWorldCellCache *MarkWorldCellCache; 
  unsigned int v120; 
  unsigned __int8 v121; 
  __int64 v122; 
  double fadeInfoa; 
  double fadeInfob; 
  double fadeInfoc; 
  double waitInfoa; 
  double waitInfob; 
  double lerpInfoa; 
  double lerpInfob; 
  double fadeOutInfoa; 
  double fadeOutInfob; 
  double stoppableFadeOutInfoa; 
  double stoppableFadeOutInfob; 
  vec3_t *v140; 
  vec3_t *v141; 
  tmat33_t<vec3_t> *v142; 
  tmat33_t<vec3_t> *v143; 
  float v144; 
  float v145; 
  MarkInfo markInfo; 
  tmat33_t<vec3_t> axis; 
  vec4_t markSize; 
  vec3_t halfSize; 
  tmat33_t<vec3_t> result; 
  R_CollInfo collInfo; 
  char v165; 

  v38 = alloca(v28);
  __asm
  {
    vmovaps [rsp+4A58h+var_48], xmm7
    vmovaps [rsp+4A58h+var_58], xmm8
    vmovaps [rsp+4A58h+var_68], xmm9
    vmovaps [rsp+4A58h+var_98], xmm14
    vmovaps [rsp+4A58h+var_A8], xmm15
  }
  _R15 = origin;
  _RBX = markSizeOrig;
  __asm { vmovss  xmm15, [rsp+4A58h+arg_48] }
  _RDI = boltOffsetQuat;
  collInfo.nodeCount = 0;
  collInfo.planeCount = 0;
  FX_GetMarksSystem(localClientNum);
  if ( (affectsGameplay || fx_marks->current.enabled) && (v44 = !fx_marks_all->current.enabled, fx_marks_all->current.enabled) )
  {
    __asm
    {
      vmovss  xmm9, dword ptr [rbx+8]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  xmm7, dword ptr [rbx]
      vxorps  xmm2, xmm2, xmm2
      vucomiss xmm9, xmm2
    }
    if ( !fx_marks_all->current.enabled )
      __asm { vmaxss  xmm9, xmm7, xmm1 }
    __asm
    {
      vcmpeqss xmm0, xmm1, xmm2
      vblendvps xmm14, xmm1, xmm7, xmm0
      vmaxss  xmm0, xmm14, xmm7
      vmaxss  xmm8, xmm0, xmm9
      vcomiss xmm8, cs:__real@3dcccccd
      vmovss  dword ptr [rsp+4A58h+var_4180+0Ch], xmm8
      vmovss  dword ptr [rsp+4A58h+var_4180], xmm9
      vmovss  dword ptr [rsp+4A58h+var_4180+4], xmm7
      vmovss  dword ptr [rsp+4A58h+var_4180+8], xmm14
      vmovss  dword ptr [rsp+4A58h+var_4180+0Ch], xmm8
      vmovss  dword ptr [rsp+4A58h+var_4180], xmm9
      vmovss  dword ptr [rsp+4A58h+var_4180+4], xmm7
      vmovss  dword ptr [rsp+4A58h+var_4180+8], xmm14
      vmovss  [rsp+4A58h+var_4978], xmm14
      vcomiss xmm8, xmm2
      vmovaps [rsp+4A58h+var_38], xmm6
      vmovaps [rsp+4A58h+var_78], xmm10
      vmovaps [rsp+4A58h+var_88], xmm11
    }
    if ( v44 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm8, xmm8
        vmovsd  qword ptr [rsp+4A58h+fadeInfo], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1429, ASSERT_TYPE_ASSERT, "( ( radius > 0 ) )", "( radius ) = %g", fadeInfoa) )
        __debugbreak();
    }
    _RBX = boltOffsetPos;
    if ( boltOffsetPos )
    {
      if ( !boltOffsetQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1433, ASSERT_TYPE_SANITY, "( boltOffsetQuat != nullptr )", (const char *)&queryFormat, "boltOffsetQuat != nullptr") )
        __debugbreak();
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx]
        vmovups xmm0, xmmword ptr [rdi]
        vmovss  dword ptr [rsp+4A58h+markInfo.boltOffsetPos], xmm1
        vextractps dword ptr [rsp+4A58h+markInfo.boltOffsetPos+4], xmm1, 1
        vextractps dword ptr [rsp+4A58h+markInfo.boltOffsetPos+8], xmm1, 2
        vmovaps xmmword ptr [rsp+4A58h+markInfo.boltOffsetQuat], xmm0
      }
      markInfo.boltOffsetValid = 1;
      p_boltOffsetQuat = &markInfo.boltOffsetQuat;
    }
    else
    {
      markInfo.boltOffsetValid = 0;
      p_boltOffsetQuat = quat;
    }
    UnitQuatToAxis(p_boltOffsetQuat, &axis);
    __asm { vmovaps xmm3, xmm15; rotationAngle }
    _RAX = FX_OrientDecalProjectionAxis(&result, &axis, projectionAxis, *(float *)&_XMM3);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+4A58h+axis], ymm0
      vmovss  xmm6, dword ptr [rsp+4A58h+axis]
      vmovss  xmm3, dword ptr [rsp+4A58h+axis+0Ch]
      vmovss  xmm5, dword ptr [rsp+4A58h+axis+4]
      vmovss  xmm10, dword ptr [rsp+4A58h+axis+10h]
      vmovss  xmm4, dword ptr [rsp+4A58h+axis+8]
      vmovss  xmm11, dword ptr [rsp+4A58h+axis+14h]
      vmulss  xmm1, xmm6, xmm3
      vmulss  xmm0, xmm5, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm4, xmm11
      vaddss  xmm0, xmm2, xmm0
      vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@3a83126f
    }
    axis.m[2].v[2] = _RAX->m[2].v[2];
    if ( !v63 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+4A58h+var_4A00], xmm0
        vcvtss2sd xmm1, xmm11, xmm11
        vmovsd  [rsp+4A58h+var_4A08], xmm1
        vcvtss2sd xmm2, xmm10, xmm10
        vmovsd  qword ptr [rsp+4A58h+stoppableFadeOutInfo], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  qword ptr [rsp+4A58h+fadeOutInfo], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  qword ptr [rsp+4A58h+lerpInfo], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  qword ptr [rsp+4A58h+waitInfo], xmm5
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  qword ptr [rsp+4A58h+fadeInfo], xmm6
      }
      v85 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1448, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", fadeInfob, waitInfoa, lerpInfoa, fadeOutInfoa, stoppableFadeOutInfoa, *(double *)&v140, *(double *)&v142);
      v63 = 0;
      if ( v85 )
        __debugbreak();
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+4A58h+axis]
        vmovss  xmm5, dword ptr [rsp+4A58h+axis+4]
        vmovss  xmm4, dword ptr [rsp+4A58h+axis+8]
      }
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+4A58h+axis+18h]
      vmovss  xmm10, dword ptr [rsp+4A58h+axis+1Ch]
      vmovss  xmm11, dword ptr [rsp+4A58h+axis+20h]
      vmulss  xmm1, xmm3, xmm6
      vmulss  xmm0, xmm10, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, xmm4
      vaddss  xmm1, xmm2, xmm1
      vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( !v63 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  [rsp+4A58h+var_4A00], xmm0
        vcvtss2sd xmm1, xmm11, xmm11
        vmovsd  [rsp+4A58h+var_4A08], xmm1
        vcvtss2sd xmm2, xmm10, xmm10
        vmovsd  qword ptr [rsp+4A58h+stoppableFadeOutInfo], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  qword ptr [rsp+4A58h+fadeOutInfo], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  qword ptr [rsp+4A58h+lerpInfo], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  qword ptr [rsp+4A58h+waitInfo], xmm5
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  qword ptr [rsp+4A58h+fadeInfo], xmm6
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1449, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", fadeInfoc, waitInfob, lerpInfob, fadeOutInfob, stoppableFadeOutInfob, *(double *)&v141, *(double *)&v143) )
        __debugbreak();
    }
    v102 = R_DecalVolumesMarks_DebugEnabled();
    __asm
    {
      vmovaps xmm11, [rsp+4A58h+var_88]
      vmovaps xmm10, [rsp+4A58h+var_78]
      vmovaps xmm6, [rsp+4A58h+var_38]
    }
    if ( v102 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+4A58h+axis+0Ch]
        vmovss  xmm1, dword ptr [rsp+4A58h+axis+20h]
        vmovups xmmword ptr [rsp+4A58h+result], xmm0
        vmovss  xmm0, dword ptr [rsp+4A58h+axis+1Ch]
        vmovss  dword ptr [rsp+4A58h+result+10h], xmm0
        vmovss  xmm0, dword ptr [rsp+4A58h+axis]
        vmovss  dword ptr [rsp+4A58h+result+14h], xmm1
        vmovss  xmm1, dword ptr [rsp+4A58h+axis+4]
        vmovss  dword ptr [rsp+4A58h+result+18h], xmm0
        vmovss  xmm0, dword ptr [rsp+4A58h+axis+8]
        vmovss  dword ptr [rsp+4A58h+result+1Ch], xmm1
        vmovss  xmm1, cs:__real@3ecccccd
        vmovss  dword ptr [rsp+4A58h+result+20h], xmm0
        vmovss  xmm0, cs:__real@40e00000
        vmovss  dword ptr [rsp+4A58h+halfSize], xmm1
        vmovss  xmm1, cs:__real@3fa00000
        vmovss  dword ptr [rsp+4A58h+halfSize+4], xmm0
        vmovss  dword ptr [rsp+4A58h+halfSize+8], xmm1
      }
      R_DecalVolumesMarks_DebugAdd(origin, &halfSize, &result, &colorYellow);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vmovss  xmm1, dword ptr [r15+4]
      vmovss  dword ptr [rsp+4A58h+collInfo.sphere.origin], xmm0
      vmovss  xmm0, dword ptr [r15+8]
      vmovss  dword ptr [rsp+4A58h+collInfo.sphere.origin+4], xmm1
      vmulss  xmm1, xmm8, xmm8
      vmovss  dword ptr [rsp+4A58h+collInfo.sphere.origin+8], xmm0
      vmovss  [rsp+4A58h+collInfo.sphere.radiusSq], xmm1
      vmovss  [rsp+4A58h+collInfo.sphere.radius], xmm8
    }
    MarkWorldCellCache = FX_GetMarkWorldCellCache();
    R_SetupSphereStaticGeo(&collInfo, &MarkWorldCellCache->transientDrawContext);
    markInfo.localClientNum = localClientNum;
    markInfo.collInfo = &collInfo;
    v120 = -1;
    v121 = markBoneIndex;
    markInfo.affectsGameplay = affectsGameplay;
    markInfo.staticModelOrWorldBrushAdded = 0;
    if ( markBoneIndex == 0xFE )
      v121 = 0;
    markInfo.bypassStackingLimiter = bypassStackingLimiter;
    markInfo.decalSpray = decalSpray;
    markInfo.killOnKillcamTransition = killOnKillcamTransition;
    markInfo.markBoneIndex = v121;
    markInfo.vfxName = vfxName;
    __asm
    {
      vmovss  dword ptr [rsp+4A58h+markInfo.markSize], xmm9
      vmovss  dword ptr [rsp+4A58h+markInfo.markSize+4], xmm7
      vmovss  dword ptr [rsp+4A58h+markInfo.markSize+8], xmm14
      vmovss  dword ptr [rsp+4A58h+markInfo.markSize+0Ch], xmm8
    }
    Profile_Begin(222);
    if ( !markGivenModelsOnly )
    {
      __asm { vmovss  [rsp+4A58h+var_49F8], xmm15 }
      v120 = FX_ImpactMark_Generate(&markInfo, localClientNum, MARK_FRAGMENTS_AGAINST_BRUSHES, material, material, fadeInfo, waitInfo, lerpInfo, fadeOutInfo, stoppableFadeOutInfo, origin, &axis, v144, nativeColor, nativeColorLerp, &markSize, markEntnum, 0, markViewmodel, viewmodelClientIndex, markDynEnt, atlasInfo);
    }
    Profile_EndInternal(NULL);
    if ( fx_marks_smodels->current.enabled || fx_marks_ents->current.enabled || fx_marks_dynents->current.enabled )
    {
      Profile_Begin(223);
      __asm { vmovss  [rsp+4A58h+var_49F8], xmm15 }
      v120 = FX_ImpactMark_Generate(&markInfo, localClientNum, MARK_FRAGMENTS_AGAINST_MODELS, material, NULL, fadeInfo, waitInfo, lerpInfo, fadeOutInfo, stoppableFadeOutInfo, origin, &axis, v145, nativeColor, nativeColorLerp, &markSize, markEntnum, markGivenModelsOnly, markViewmodel, viewmodelClientIndex, markDynEnt, atlasInfo);
      Profile_EndInternal(NULL);
    }
    v122 = v120;
  }
  else
  {
    v122 = 0xFFFFFFFFi64;
  }
  _R11 = &v165;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm14, xmmword ptr [r11-70h]
    vmovaps xmm15, xmmword ptr [r11-80h]
  }
  return v122;
}

/*
==============
FX_ImpactMark_Generate
==============
*/
__int64 FX_ImpactMark_Generate(MarkInfo *markInfo, LocalClientNum_t localClientNum, MarkFragmentsAgainstEnum markAgainst, Material *material, Material *displacementMaterial, unsigned __int16 fadeInfo, unsigned __int16 waitInfo, unsigned __int16 lerpInfo, unsigned __int16 fadeOutInfo, unsigned __int16 stoppableFadeOutInfo, const vec3_t *origin, const tmat33_t<vec3_t> *axis, float orientation, const unsigned __int8 *nativeColor, const unsigned __int8 *nativeColorLerp, const vec4_t *markSize, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int viewmodelClientIndex, bool markDynEnt, const FX_ImpactMark_AtlasInfo *atlasInfo)
{
  FxSystem *System; 
  FxSystem *v27; 
  const char *vfxName; 
  float materiala; 
  float materialb; 
  Material *v36; 
  LocalClientNum_t callbackContext; 
  Material *v39; 
  Material *v40; 
  const unsigned __int8 *v42; 
  const unsigned __int8 *v43; 
  unsigned __int16 v44; 
  unsigned __int16 v45; 
  unsigned __int16 v46; 
  unsigned __int16 v47; 
  unsigned __int16 v48; 
  int v49; 
  const FX_ImpactMark_AtlasInfo *v50; 
  unsigned int v51; 
  char v52; 
  char v53; 
  char v54; 
  char v55; 
  const char *v56; 

  System = FX_GetSystem(localClientNum);
  _RCX = markSize;
  v27 = System;
  __asm { vmovups xmm0, xmmword ptr [rcx] }
  v47 = fadeOutInfo;
  v48 = stoppableFadeOutInfo;
  LOBYTE(System) = markInfo->decalSpray;
  v44 = fadeInfo;
  v52 = (char)System;
  LOBYTE(System) = markInfo->bypassStackingLimiter;
  v45 = waitInfo;
  v53 = (char)System;
  LOBYTE(System) = markInfo->killOnKillcamTransition;
  v46 = lerpInfo;
  LOBYTE(_RCX) = markInfo->affectsGameplay;
  v55 = (char)System;
  vfxName = markInfo->vfxName;
  v43 = nativeColorLerp;
  v56 = vfxName;
  callbackContext = localClientNum;
  v39 = material;
  v40 = displacementMaterial;
  v42 = nativeColor;
  v49 = viewmodelClientIndex;
  v50 = atlasInfo;
  v51 = -1;
  v54 = (char)_RCX;
  __asm { vmovups [rbp+3Fh+var_98], xmm0 }
  if ( ((_BYTE)_RCX || fx_marks->current.enabled) && fx_marks_all->current.enabled && (markAgainst != MARK_FRAGMENTS_AGAINST_MODELS || fx_marks_ents->current.enabled || fx_marks_smodels->current.enabled) )
  {
    R_MarkFragments_Begin(markInfo, markAgainst, axis, &v27->camera.viewOffset, material, displacementMaterial, markGivenModelsOnly, markDynEnt, viewmodelClientIndex);
    if ( !markDynEnt )
    {
      if ( fx_marks_ents->current.enabled )
      {
        if ( (unsigned int)markAgainst > MARK_FRAGMENTS_AGAINST_MODELS )
        {
          LODWORD(v36) = markAgainst;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1309, ASSERT_TYPE_ASSERT, "( ( markAgainst == MARK_FRAGMENTS_AGAINST_MODELS || markAgainst == MARK_FRAGMENTS_AGAINST_BRUSHES ) )", "( markAgainst ) = %i", v36) )
            __debugbreak();
        }
        _RAX = markSize;
        __asm { vmovss  xmm0, dword ptr [rax+0Ch] }
        if ( markAgainst == MARK_FRAGMENTS_AGAINST_MODELS )
        {
          if ( markViewmodel )
          {
            __asm { vmovaps xmm3, xmm0; radius }
            FX_ImpactMark_Generate_AddViewmodel(localClientNum, markInfo, origin, *(float *)&_XMM3, viewmodelClientIndex);
          }
          else
          {
            __asm { vmovss  dword ptr [rsp+120h+material], xmm0 }
            FX_ImpactMark_Generate_AddEntityModel(localClientNum, markInfo, markEntnum, origin, materiala);
          }
        }
        else
        {
          __asm { vmovss  dword ptr [rsp+120h+material], xmm0 }
          FX_ImpactMark_Generate_AddEntityBrush(localClientNum, markInfo, markEntnum, origin, materialb);
        }
      }
      goto LABEL_20;
    }
    if ( fx_marks_dynents->current.enabled && markAgainst == MARK_FRAGMENTS_AGAINST_MODELS )
    {
      R_MarkFragments_AddDynEnt(markInfo, markEntnum);
LABEL_20:
      R_MarkFragments_Go(markInfo, FX_ImpactMark_Generate_Callback, &callbackContext);
      return v51;
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
  centity_t *v9; 
  vec3_t outOrigin; 
  __int64 v39; 
  Float4Bounds baseBounds; 
  Float4Bounds rotatedBounds; 
  __int128 v42; 
  tmat33_t<vec3_t> axis; 

  if ( entityIndex != 2047 )
  {
    v39 = -2i64;
    _R15 = origin;
    Profile_Begin(224);
    Entity = CG_GetEntity(localClientNum, entityIndex);
    v9 = Entity;
    if ( (Entity->flags & 1) == 0 || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u) )
      goto LABEL_9;
    if ( v9 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((v9->nextState.eType - 12) & 0xFFFD) != 0 )
    {
      _RSI = R_GetBrushModel(v9->nextState.index.brushModel);
      AnglesToAxis(&v9->pose.angles, &axis);
      __asm { vmovss  xmm0, dword ptr [rsi+38h] }
      HIDWORD(v42) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp-21h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsi+3Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+40h], 20h ; ' '
        vmovups xmmword ptr [rbp-21h], xmm3
        vmovups xmmword ptr [rbp+4Fh+baseBounds.midPoint.v], xmm3
        vmovss  xmm0, dword ptr [rsi+44h]
      }
      HIDWORD(v42) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp-21h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsi+48h], 10h
        vinsertps xmm3, xmm3, dword ptr [rsi+4Ch], 20h ; ' '
        vmovups xmmword ptr [rbp-21h], xmm3
        vmovups xmmword ptr [rbp+4Fh+baseBounds.halfSize.v], xmm3
      }
      CG_GetPoseOrigin(&v9->pose, &outOrigin);
      Float4Bounds_Transform(&baseBounds, &outOrigin, &axis, &rotatedBounds);
      __asm { vmovss  xmm0, dword ptr [r15] }
      HIDWORD(v42) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp-21h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r15+4], 10h
        vinsertps xmm3, xmm3, dword ptr [r15+8], 20h ; ' '
        vsubps  xmm1, xmm3, xmmword ptr [rbp+4Fh+rotatedBounds.midPoint.v]
        vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vandnps xmm1, xmm0, xmm1
        vsubps  xmm2, xmm1, xmmword ptr [rbp+4Fh+rotatedBounds.halfSize.v]
        vxorps  xmm0, xmm0, xmm0
        vmaxps  xmm1, xmm2, xmm0
        vmulps  xmm2, xmm1, xmm1
        vinsertps xmm0, xmm2, xmm2, 8
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm2, xmm1, xmm1
        vmovss  xmm0, [rbp+4Fh+radius]
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm2, xmm1
      }
      Profile_EndInternal(NULL);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    else
    {
LABEL_9:
      Profile_EndInternal(NULL);
    }
  }
}

/*
==============
FX_ImpactMark_Generate_AddEntityModel
==============
*/
void FX_ImpactMark_Generate_AddEntityModel(LocalClientNum_t localClientNum, MarkInfo *markInfo, unsigned int entityIndex, const vec3_t *origin)
{
  centity_t *Entity; 
  cpose_t *p_pose; 
  unsigned int number; 
  unsigned int v12; 
  unsigned int v13; 
  DObj *v14; 
  char v28; 
  char v29; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  vec3_t outOrigin; 
  __int64 v35; 

  if ( entityIndex != 2047 )
  {
    v35 = -2i64;
    __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
    Profile_Begin(224);
    Entity = CG_GetEntity(localClientNum, entityIndex);
    p_pose = &Entity->pose;
    if ( (Entity->flags & 1) == 0 )
      goto LABEL_23;
    number = Entity->nextState.number;
    if ( number > 0x9E4 )
    {
      v33 = Entity->nextState.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v33) )
        __debugbreak();
    }
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v32) = 2;
      LODWORD(v31) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    v12 = 2533 * localClientNum + number;
    if ( v12 >= 0x13CA )
    {
      LODWORD(v32) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v32) )
        __debugbreak();
    }
    v13 = clientObjMap[v12];
    if ( !v13 )
      goto LABEL_23;
    if ( v13 >= (unsigned int)s_objCount )
    {
      LODWORD(v32) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v32) )
        __debugbreak();
    }
    v14 = (DObj *)s_objBuf[v13];
    if ( v14 )
    {
      *(double *)&_XMM0 = DObjGetRadius(v14);
      __asm
      {
        vaddss  xmm1, xmm0, [rsp+0A8h+arg_20]
        vmulss  xmm6, xmm1, xmm1
      }
      CG_GetPoseOrigin(p_pose, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0A8h+outOrigin]
        vsubss  xmm3, xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [rsp+0A8h+outOrigin+4]
        vsubss  xmm2, xmm1, dword ptr [r14+4]
        vmovss  xmm0, dword ptr [rsp+0A8h+outOrigin+8]
        vsubss  xmm4, xmm0, dword ptr [r14+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, xmm6
      }
      if ( v28 | v29 )
      {
        if ( (unsigned __int16)entityIndex != entityIndex )
        {
          LODWORD(v31) = entityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1149, ASSERT_TYPE_ASSERT, "( ( entityIndexAsUnsignedShort == entityIndex ) )", "( entityIndex ) = %i", v31) )
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
    __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
  }
}

/*
==============
FX_ImpactMark_Generate_AddViewmodel
==============
*/

void __fastcall FX_ImpactMark_Generate_AddViewmodel(LocalClientNum_t localClientNum, MarkInfo *markInfo, const vec3_t *origin, double radius, int viewmodelClientIndex)
{
  __int64 v10; 
  cg_t *v11; 
  DObj *viewModelDObj; 
  cpose_t *p_viewModelPose; 
  char v27; 
  char v28; 
  __int64 v30; 
  __int64 v31; 
  vec3_t outOrigin; 
  __int64 v33; 
  void *retaddr; 

  _RAX = &retaddr;
  v33 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmm6, xmm3
  }
  v10 = localClientNum;
  Profile_Begin(224);
  if ( viewmodelClientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1176, ASSERT_TYPE_ASSERT, "(viewmodelClientIndex == 0)", (const char *)&queryFormat, "viewmodelClientIndex == 0") )
    __debugbreak();
  if ( (unsigned int)v10 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v30) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v30, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v10] )
  {
    LODWORD(v31) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v31) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v31) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v31) )
      __debugbreak();
  }
  v11 = cg_t::ms_cgArray[v10];
  viewModelDObj = v11->m_weaponHand[0].viewModelDObj;
  p_viewModelPose = &v11->viewModelPose;
  if ( viewModelDObj )
  {
    *(double *)&_XMM0 = DObjGetRadius(v11->m_weaponHand[0].viewModelDObj);
    __asm
    {
      vaddss  xmm1, xmm0, xmm6
      vmulss  xmm6, xmm1, xmm1
    }
    CG_GetPoseOrigin(p_viewModelPose, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
      vsubss  xmm3, xmm0, dword ptr [rbp+0]
      vmovss  xmm1, dword ptr [rsp+88h+outOrigin+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+4]
      vmovss  xmm0, dword ptr [rsp+88h+outOrigin+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, xmm6
    }
    if ( v27 | v28 )
      R_MarkFragments_AddViewModelDObj(markInfo, viewModelDObj, p_viewModelPose);
    Profile_EndInternal(NULL);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    Profile_EndInternal(NULL);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
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

FxMark *__fastcall FX_MarkCheckNearby(FxMarksSystem *marksSystem, const unsigned __int16 firstActiveMarkHandle, const vec3_t *origin, double radius, const vec3_t *dir)
{
  unsigned __int16 nextMark; 
  FxMark *result; 
  __int64 v71; 
  __int64 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  _R9 = dir;
  _RAX = fx_marks_limit_stacking_distance;
  __asm { vmovss  xmm0, dword ptr [r8] }
  nextMark = firstActiveMarkHandle;
  __asm
  {
    vmovaps xmm12, xmm3
    vbroadcastss xmm11, dword ptr [rax+28h]
  }
  HIDWORD(v73) = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+40h]
    vmovss  xmm7, xmm7, xmm0
    vinsertps xmm7, xmm7, dword ptr [r8+4], 10h
    vinsertps xmm7, xmm7, dword ptr [r8+8], 20h ; ' '
    vmovss  xmm0, dword ptr [r9]
    vmovups xmmword ptr [rsp+40h], xmm7
  }
  HIDWORD(v74) = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rsp+40h]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [r9+4], 10h
    vinsertps xmm8, xmm8, dword ptr [r9+8], 20h ; ' '
    vmovups xmmword ptr [rsp+40h], xmm8
    vmovaps xmm9, xmm3
    vshufps xmm12, xmm12, xmm12, 0
  }
  if ( firstActiveMarkHandle != 0xFFFF )
  {
    __asm { vmovss  xmm10, cs:__real@40800000 }
    do
    {
      if ( nextMark >= 0x200u )
      {
        LODWORD(v72) = 512;
        LODWORD(v71) = nextMark;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v71, v72) )
          __debugbreak();
      }
      if ( !marksSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 183, ASSERT_TYPE_ASSERT, "(marksSystem)", (const char *)&queryFormat, "marksSystem") )
        __debugbreak();
      _RCX = &marksSystem->marks[nextMark];
      nextMark = _RCX->nextMark;
      if ( !_RCX->lerpInfo || _RCX->nativeColorLerp[3] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+10h]
          vmovss  xmm6, dword ptr [rcx+1Ch]
        }
        HIDWORD(v75) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+40h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rcx+14h], 10h
          vinsertps xmm3, xmm3, dword ptr [rcx+18h], 20h ; ' '
        }
        HIDWORD(v76) = 0;
        __asm
        {
          vmovaps xmm0, xmm6
          vshufps xmm0, xmm0, xmm0, 0
          vaddps  xmm0, xmm12, xmm0
          vmulps  xmm1, xmm11, xmm0
          vmulps  xmm5, xmm1, xmm1
          vsubps  xmm0, xmm7, xmm3
          vmulps  xmm1, xmm0, xmm0
          vmovss  xmm0, dword ptr [rcx+68h]
          vhaddps xmm2, xmm1, xmm1
          vhaddps xmm4, xmm2, xmm2
          vmovups xmm2, xmmword ptr [rsp+50h]
          vmovss  xmm2, xmm2, xmm0
          vinsertps xmm2, xmm2, dword ptr [rcx+6Ch], 10h
          vinsertps xmm2, xmm2, dword ptr [rcx+70h], 20h ; ' '
          vmulps  xmm0, xmm8, xmm2
          vhaddps xmm1, xmm0, xmm0
          vcmpltps xmm0, xmm4, xmm5
          vmovmskps eax, xmm0
          vmovups xmmword ptr [rsp+40h], xmm3
          vmovups xmmword ptr [rsp+50h], xmm2
        }
        if ( (_EAX & 0xF) == 15 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr cs:s_markCheckAngleThreshold.v
            vhaddps xmm1, xmm1, xmm1
            vcmpltps xmm1, xmm0, xmm1
            vmovmskps eax, xmm1
          }
          if ( (_EAX & 0xF) == 15 )
          {
            __asm
            {
              vmulss  xmm0, xmm6, xmm10
              vcomiss xmm9, xmm0
            }
          }
        }
      }
    }
    while ( nextMark != 0xFFFF );
  }
  result = NULL;
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
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

tmat33_t<vec3_t> *__fastcall FX_OrientDecalProjectionAxis(tmat33_t<vec3_t> *result, const tmat33_t<vec3_t> *originalAxis, FxMarkProjectionAxis projectionAxis, double rotationAngle)
{
  vec3_t *v25; 
  const vec3_t *v26; 
  tmat33_t<vec3_t> *v35; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx], ymm0
  }
  _RBX = result;
  result->m[2].v[2] = originalAxis->m[2].v[2];
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  switch ( projectionAxis )
  {
    case FX_MARK_PROJECTION_AXIS_POS_X:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]; jumptable 000000014200FE9D case 0
        vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm0, xmm0, xmm2
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr [rbx+4]
        vxorps  xmm0, xmm1, xmm2
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm1, dword ptr [rbx+8]
        vxorps  xmm0, xmm1, xmm2
        vmovss  dword ptr [rbx+8], xmm0
      }
      goto LABEL_3;
    case FX_MARK_PROJECTION_AXIS_NEG_X:
LABEL_3:
      __asm { vmulss  xmm3, xmm6, cs:__real@42652ee0; jumptable 000000014200FE9D case 1 }
      _RDI = &result->m[2];
      goto LABEL_12;
    case FX_MARK_PROJECTION_AXIS_POS_Y:
      __asm { vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000; jumptable 000000014200FE9D case 2 }
      _RCX = &result->m[1];
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr [rcx+4]
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm3, dword ptr [rcx+8]
        vxorps  xmm0, xmm0, xmm2
        vmovss  dword ptr [rbx], xmm0
        vxorps  xmm0, xmm3, xmm2
        vxorps  xmm1, xmm1, xmm2
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
      goto LABEL_5;
    case FX_MARK_PROJECTION_AXIS_NEG_Y:
      _RCX = &result->m[1];
      _RBX->m[0].v[0] = _RBX->m[1].v[0];
      _RBX->m[0].v[1] = _RBX->m[1].v[1];
      _RBX->m[0].v[2] = _RBX->m[1].v[2];
LABEL_5:
      __asm { vmulss  xmm3, xmm6, cs:__real@42652ee0 }
      v25 = &_RBX->m[2];
      v26 = _RCX;
      _RDI = (vec3_t *)_RBX;
      goto LABEL_13;
    case FX_MARK_PROJECTION_AXIS_POS_Z:
      __asm { vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000; jumptable 000000014200FE9D case 4 }
      _RDI = &result->m[2];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm3, dword ptr [rdi+8]
        vxorps  xmm0, xmm0, xmm2
        vmovss  dword ptr [rbx], xmm0
        vxorps  xmm0, xmm3, xmm2
        vxorps  xmm1, xmm1, xmm2
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
      goto LABEL_11;
    case FX_MARK_PROJECTION_AXIS_NEG_Z:
      goto $LN4_118;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.cpp", 1373, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported projection axis in FX_OrientDecalProjectionAxis().") )
        __debugbreak();
$LN4_118:
      _RDI = &_RBX->m[2];
      _RBX->m[0].v[0] = _RBX->m[2].v[0];
      _RBX->m[0].v[1] = _RBX->m[2].v[1];
      _RBX->m[0].v[2] = _RBX->m[2].v[2];
LABEL_11:
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@42652ee0
        vsubss  xmm3, xmm0, cs:__real@42b40000; degrees
      }
LABEL_12:
      v25 = &_RBX->m[1];
      _RCX = _RDI;
      v26 = (const vec3_t *)_RBX;
LABEL_13:
      RotatePointAroundVector(_RCX, _RBX->m, v25, *(float *)&_XMM3);
      Vec3Cross(v26, _RDI, v25);
      v35 = _RBX;
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
      return v35;
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

