/*
==============
CG_VisionSetRegisterLeafByFile
==============
*/

bool __fastcall CG_VisionSetRegisterLeafByFile(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *name)
{
  return ?CG_VisionSetRegisterLeafByFile@@YA_NPEAUClientVisionSetData@@W4visionSetCodeLeafType_t@@PEBD@Z(cvsData, leaf, name);
}

/*
==============
CG_VisionSetApplyToRefdef
==============
*/

void __fastcall CG_VisionSetApplyToRefdef(refdef_t *refDef, ClientVisionSetData *cvsData)
{
  ?CG_VisionSetApplyToRefdef@@YAXPEAUrefdef_t@@PEAUClientVisionSetData@@@Z(refDef, cvsData);
}

/*
==============
CG_VisionSetMergeBlendToLeaf
==============
*/

void __fastcall CG_VisionSetMergeBlendToLeaf(ClientVisionSetData *cvsData, const int time, const visionSetCodeBlendType_t blend, const visionSetCodeLeafType_t leaf)
{
  ?CG_VisionSetMergeBlendToLeaf@@YAXPEAUClientVisionSetData@@HW4visionSetCodeBlendType_t@@W4visionSetCodeLeafType_t@@@Z(cvsData, time, blend, leaf);
}

/*
==============
CG_VisionSet_ValidateImageFree
==============
*/

void __fastcall CG_VisionSet_ValidateImageFree(const GfxImage *image)
{
  ?CG_VisionSet_ValidateImageFree@@YAXPEBUGfxImage@@@Z(image);
}

/*
==============
CG_VisionSetSetBlendPush
==============
*/

void __fastcall CG_VisionSetSetBlendPush(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const float lerp)
{
  ?CG_VisionSetSetBlendPush@@YAXPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@M@Z(cvsData, blend, lerp);
}

/*
==============
CG_VisionSetMapInit
==============
*/

void __fastcall CG_VisionSetMapInit(const LocalClientNum_t localClientNum)
{
  ?CG_VisionSetMapInit@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VisionSetDebugResult
==============
*/

bool __fastcall CG_VisionSetDebugResult(const LocalClientNum_t localClientNum, char *buffer, unsigned int length)
{
  return ?CG_VisionSetDebugResult@@YA_NW4LocalClientNum_t@@PEADI@Z(localClientNum, buffer, length);
}

/*
==============
CG_VisionSetSetBlendOff
==============
*/

void __fastcall CG_VisionSetSetBlendOff(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend)
{
  ?CG_VisionSetSetBlendOff@@YAXPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@@Z(cvsData, blend);
}

/*
==============
CG_VisionSetRegisterLeafByFileSimple
==============
*/

void __fastcall CG_VisionSetRegisterLeafByFileSimple(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *name)
{
  ?CG_VisionSetRegisterLeafByFileSimple@@YAXPEAUClientVisionSetData@@W4visionSetCodeLeafType_t@@PEBD@Z(cvsData, leaf, name);
}

/*
==============
CG_VisionSetFromScript
==============
*/

void __fastcall CG_VisionSetFromScript(const LocalClientNum_t localClientNum, const visionSetMode_t visMode, const visionSetCodeLeafType_t leaf, const char *name, const int duration)
{
  ?CG_VisionSetFromScript@@YAXW4LocalClientNum_t@@W4visionSetMode_t@@W4visionSetCodeLeafType_t@@PEBDH@Z(localClientNum, visMode, leaf, name, duration);
}

/*
==============
CG_VisionSetSetBlendStop
==============
*/

void __fastcall CG_VisionSetSetBlendStop(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time)
{
  ?CG_VisionSetSetBlendStop@@YAXPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@H@Z(cvsData, blend, time);
}

/*
==============
CG_VisionSetDebugHdrValues
==============
*/

void __fastcall CG_VisionSetDebugHdrValues(const ClientVisionSetData *cvsData, const ScreenPlacement *scrPlace, float *x, float *y, const GfxWorld *gfxWorld)
{
  ?CG_VisionSetDebugHdrValues@@YAXPEBUClientVisionSetData@@PEBUScreenPlacement@@PEAM2PEBUGfxWorld@@@Z(cvsData, scrPlace, x, y, gfxWorld);
}

/*
==============
CG_VisionSetUpdate
==============
*/

void __fastcall CG_VisionSetUpdate(ClientVisionSetData *cvsData, const int time)
{
  ?CG_VisionSetUpdate@@YAXPEAUClientVisionSetData@@H@Z(cvsData, time);
}

/*
==============
CG_VisionSetRegisterBlendStart
==============
*/

void __fastcall CG_VisionSetRegisterBlendStart(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time, const int duration, const int forward, const visionSetLerpStyle_t style)
{
  ?CG_VisionSetRegisterBlendStart@@YAXPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@HHHW4visionSetLerpStyle_t@@@Z(cvsData, blend, time, duration, forward, style);
}

/*
==============
CG_VisionSetRegisterLeafByParameters
==============
*/

void __fastcall CG_VisionSetRegisterLeafByParameters(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *kvps)
{
  ?CG_VisionSetRegisterLeafByParameters@@YAXPEAUClientVisionSetData@@W4visionSetCodeLeafType_t@@PEBD@Z(cvsData, leaf, kvps);
}

/*
==============
CG_VisionSetSpecialVision
==============
*/

void __fastcall CG_VisionSetSpecialVision(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *name)
{
  ?CG_VisionSetSpecialVision@@YAXPEAUClientVisionSetData@@W4visionSetCodeLeafType_t@@PEBD@Z(cvsData, leaf, name);
}

/*
==============
CG_VisionSetUpdateCmd
==============
*/

void __fastcall CG_VisionSetUpdateCmd(const void *const cmdData)
{
  ?CG_VisionSetUpdateCmd@@YAXQEBX@Z(cmdData);
}

/*
==============
CG_VisionSetsUpdate_PrePlayerStatePrediction
==============
*/

void __fastcall CG_VisionSetsUpdate_PrePlayerStatePrediction(const LocalClientNum_t localClientNum)
{
  ?CG_VisionSetsUpdate_PrePlayerStatePrediction@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VisionSetIsComplete
==============
*/

int __fastcall CG_VisionSetIsComplete(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time)
{
  return ?CG_VisionSetIsComplete@@YAHPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@H@Z(cvsData, blend, time);
}

/*
==============
CG_VisionSetMyChanges
==============
*/

void CG_VisionSetMyChanges(void)
{
  ?CG_VisionSetMyChanges@@YAXXZ();
}

/*
==============
CG_VisionSetDebugBlendTree
==============
*/

bool __fastcall CG_VisionSetDebugBlendTree(const LocalClientNum_t localClientNum, char *buffer, unsigned int length)
{
  return ?CG_VisionSetDebugBlendTree@@YA_NW4LocalClientNum_t@@PEADI@Z(localClientNum, buffer, length);
}

/*
==============
CG_VisionSetIsBlending
==============
*/

int __fastcall CG_VisionSetIsBlending(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time)
{
  return ?CG_VisionSetIsBlending@@YAHPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@H@Z(cvsData, blend, time);
}

/*
==============
CG_VisionSetClearLeaf
==============
*/

void __fastcall CG_VisionSetClearLeaf(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf)
{
  ?CG_VisionSetClearLeaf@@YAXPEAUClientVisionSetData@@W4visionSetCodeLeafType_t@@@Z(cvsData, leaf);
}

/*
==============
CG_VisionSet_ArchiveMP
==============
*/

void __fastcall CG_VisionSet_ArchiveMP(MemoryFile *memFile, ClientVisionSetData *cvsData)
{
  ?CG_VisionSet_ArchiveMP@@YAXPEAUMemoryFile@@PEAUClientVisionSetData@@@Z(memFile, cvsData);
}

/*
==============
CG_VisionSet_AssetFound
==============
*/

bool __fastcall CG_VisionSet_AssetFound(const VisionSetAssetKey *key)
{
  return ?CG_VisionSet_AssetFound@@YA_NPEBUVisionSetAssetKey@@@Z(key);
}

/*
==============
CG_VisionSet_ArchiveSP
==============
*/

void __fastcall CG_VisionSet_ArchiveSP(MemoryFile *memFile, ClientVisionSetData *cvsData)
{
  ?CG_VisionSet_ArchiveSP@@YAXPEAUMemoryFile@@PEAUClientVisionSetData@@@Z(memFile, cvsData);
}

/*
==============
CG_VisionSetShutdown
==============
*/

void CG_VisionSetShutdown(void)
{
  ?CG_VisionSetShutdown@@YAXXZ();
}

/*
==============
CG_VisionSetParamCmd
==============
*/

void __fastcall CG_VisionSetParamCmd(const LocalClientNum_t localClientNum, const int duration, const char *kvps)
{
  ?CG_VisionSetParamCmd@@YAXW4LocalClientNum_t@@HPEBD@Z(localClientNum, duration, kvps);
}

/*
==============
CG_VisionSetReverseBlend
==============
*/

void __fastcall CG_VisionSetReverseBlend(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time, const int duration)
{
  ?CG_VisionSetReverseBlend@@YAXPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@HH@Z(cvsData, blend, time, duration);
}

/*
==============
CG_VisionSets_UpdateWeaponADS
==============
*/

void __fastcall CG_VisionSets_UpdateWeaponADS(const LocalClientNum_t localClientNum)
{
  ?CG_VisionSets_UpdateWeaponADS@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VisionSetLoadVisionArtTweaks
==============
*/

bool __fastcall CG_VisionSetLoadVisionArtTweaks(ClientVisionSetData *cvsData, const char *buffer)
{
  return ?CG_VisionSetLoadVisionArtTweaks@@YA_NPEAUClientVisionSetData@@PEBD@Z(cvsData, buffer);
}

/*
==============
CG_VisionSetsUpdate_PostPlayerStatePrediction
==============
*/

void __fastcall CG_VisionSetsUpdate_PostPlayerStatePrediction(const LocalClientNum_t localClientNum)
{
  ?CG_VisionSetsUpdate_PostPlayerStatePrediction@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VisionSets_UpdateKillcam
==============
*/

void __fastcall CG_VisionSets_UpdateKillcam(const LocalClientNum_t localClientNum)
{
  ?CG_VisionSets_UpdateKillcam@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_VisionSetDebugDraw
==============
*/

void __fastcall CG_VisionSetDebugDraw(const LocalClientNum_t localClientNum, visionSetPrintMode_t printMode)
{
  ?CG_VisionSetDebugDraw@@YAXW4LocalClientNum_t@@W4visionSetPrintMode_t@@@Z(localClientNum, printMode);
}

/*
==============
CG_VisionSetChangeLeafParameter
==============
*/

void __fastcall CG_VisionSetChangeLeafParameter(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *key, const char *val)
{
  ?CG_VisionSetChangeLeafParameter@@YAXPEAUClientVisionSetData@@W4visionSetCodeLeafType_t@@PEBD2@Z(cvsData, leaf, key, val);
}

/*
==============
CG_VisionSetScriptOverride
==============
*/

void __fastcall CG_VisionSetScriptOverride(ClientVisionSetData *cvsData, const char *name, const int time, const int duration)
{
  ?CG_VisionSetScriptOverride@@YAXPEAUClientVisionSetData@@PEBDHH@Z(cvsData, name, time, duration);
}

/*
==============
CG_VisionSet_ValidateGradingClutFree
==============
*/

void __fastcall CG_VisionSet_ValidateGradingClutFree(const GfxGradingClut *gradingClut)
{
  ?CG_VisionSet_ValidateGradingClutFree@@YAXPEBUGfxGradingClut@@@Z(gradingClut);
}

/*
==============
CG_LookingThroughNightVision
==============
*/

bool __fastcall CG_LookingThroughNightVision(const LocalClientNum_t localClientNum)
{
  return ?CG_LookingThroughNightVision@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SetDigitalDistortParams
==============
*/

void __fastcall CG_SetDigitalDistortParams(const LocalClientNum_t localClientNum, const float intensity, const float timeScale)
{
  ?CG_SetDigitalDistortParams@@YAXW4LocalClientNum_t@@MM@Z(localClientNum, intensity, timeScale);
}

/*
==============
CG_VisionSetSetBlendOn
==============
*/

void __fastcall CG_VisionSetSetBlendOn(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend)
{
  ?CG_VisionSetSetBlendOn@@YAXPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@@Z(cvsData, blend);
}

/*
==============
CG_VisionSetForward
==============
*/

int __fastcall CG_VisionSetForward(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend)
{
  return ?CG_VisionSetForward@@YAHPEAUClientVisionSetData@@W4visionSetCodeBlendType_t@@@Z(cvsData, blend);
}

/*
==============
CG_VisionSets_GetVisionName
==============
*/

const char *__fastcall CG_VisionSets_GetVisionName(int visionSetIndex)
{
  return ?CG_VisionSets_GetVisionName@@YAPEBDH@Z(visionSetIndex);
}

/*
==============
CG_VisionSetUpdateToNode
==============
*/

void __fastcall CG_VisionSetUpdateToNode(ClientVisionSetData *cvsData, const int time, visionSetCodeBlendType_t node)
{
  ?CG_VisionSetUpdateToNode@@YAXPEAUClientVisionSetData@@HW4visionSetCodeBlendType_t@@@Z(cvsData, time, node);
}

/*
==============
CG_VisionSetIsLeafDifferent
==============
*/

int __fastcall CG_VisionSetIsLeafDifferent(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *name)
{
  return ?CG_VisionSetIsLeafDifferent@@YAHPEAUClientVisionSetData@@W4visionSetCodeLeafType_t@@PEBD@Z(cvsData, leaf, name);
}

/*
==============
CG_VisionSetClearScriptBlendInUseIfNeeded
==============
*/

void __fastcall CG_VisionSetClearScriptBlendInUseIfNeeded(ClientVisionSetData *cvsData, const int time)
{
  ?CG_VisionSetClearScriptBlendInUseIfNeeded@@YAXPEAUClientVisionSetData@@H@Z(cvsData, time);
}

/*
==============
CG_VisionSet_ValidateFogSplineFree
==============
*/

void __fastcall CG_VisionSet_ValidateFogSplineFree(const GfxFogSpline *fogSpline)
{
  ?CG_VisionSet_ValidateFogSplineFree@@YAXPEBUGfxFogSpline@@@Z(fogSpline);
}

/*
==============
CG_VisionSetGetLerp
==============
*/

double __fastcall CG_VisionSetGetLerp(const visionSetBlend_t *blend, const int time)
{
  double result; 

  *(float *)&result = ?CG_VisionSetGetLerp@@YAMPEBUvisionSetBlend_t@@H@Z(blend, time);
  return result;
}

/*
==============
CG_LookingThroughNightVision
==============
*/
bool CG_LookingThroughNightVision(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  cg_t *LocalClientGlobals; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_predictedPlayerState; 

  v1 = DVARBOOL_nightVisionDisableEffects;
  if ( !DVARBOOL_nightVisionDisableEffects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "nightVisionDisableEffects") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 0;
  if ( CG_View_IsKillCamEntityView(localClientNum) )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)&LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals->cvsData.transitory.thermalVisionActive || LocalClientGlobals->cvsData.transitory.remoteMissileCam )
    return 0;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2245, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_predictedPlayerState + 229, ACTIVE, 7u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_predictedPlayerState + 229, ACTIVE, 9u);
}

/*
==============
CG_SetDigitalDistortParams
==============
*/

void __fastcall CG_SetDigitalDistortParams(const LocalClientNum_t localClientNum, double intensity, double timeScale)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  dword ptr [rax+17080h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rax+17084h], xmm7
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

/*
==============
CG_VisionSetApplyToRefdef
==============
*/
void CG_VisionSetApplyToRefdef(refdef_t *refDef, ClientVisionSetData *cvsData)
{
  bool v4; 

  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_CG_VISIONSETUPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2110, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_CG_VISIONSETUPDATE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_CG_VISIONSETUPDATE )") )
    __debugbreak();
  if ( !cvsData->transitory.visionSetUpdateSentinel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2112, ASSERT_TYPE_ASSERT, "(cvsData->transitory.visionSetUpdateSentinel)", (const char *)&queryFormat, "cvsData->transitory.visionSetUpdateSentinel") )
    __debugbreak();
  v4 = !cvsData->archived.visionInitialized;
  cvsData->transitory.visionSetUpdateSentinel = 0;
  if ( !v4 )
  {
    Sys_ProfBeginNamedEvent(0xFF000000, "CG_VisionSetApplyToRefdef");
    if ( cvsData->transitory.playbackDelta < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2129, ASSERT_TYPE_ASSERT, "(cvsData->transitory.playbackDelta >= 0)", (const char *)&queryFormat, "cvsData->transitory.playbackDelta >= 0") )
      __debugbreak();
    CG_VisionSetApplyToRefdef_Internal(refDef, cvsData->archived.visionBlends, 1);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CG_VisionSetBuildBlendTree
==============
*/
void CG_VisionSetBuildBlendTree(ClientVisionSetData *cvsData)
{
  visionSetBlend_t::ChildRef *childRefs; 
  __int64 v3; 
  visionSetBlend_t::ChildRef *v4; 
  __int64 v5; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 289, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  memset_0(cvsData, 0, 0xE72Cui64);
  childRefs = cvsData->archived.visionBlends[0].childRefs;
  cvsData->archived.visionBlends[0].childRefs[0] = (visionSetBlend_t::ChildRef)257;
  cvsData->archived.visionBlends[0].childRefs[1] = (visionSetBlend_t::ChildRef)258;
  Core_strcpy(cvsData->archived.visionBlends[0].name, 0x40ui64, "Root");
  cvsData->archived.visionBlends[0].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  *(_DWORD *)&cvsData->archived.visionBlends[1].childRefs[0].m_type = 66050;
  Core_strcpy(cvsData->archived.visionBlends[1].name, 0x40ui64, "Game");
  cvsData->archived.visionBlends[1].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[2].childRefs[0].m_type = 50397954;
  Core_strcpy(cvsData->archived.visionBlends[2].name, 0x40ui64, "Client Code");
  cvsData->archived.visionBlends[2].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[3].childRefs[0].m_type = 33620994;
  Core_strcpy(cvsData->archived.visionBlends[3].name, 0x40ui64, "Cinematic Camera");
  cvsData->archived.visionBlends[3].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[4].childRefs[0].m_type = 67175682;
  Core_strcpy(cvsData->archived.visionBlends[4].name, 0x40ui64, "Fade Black");
  cvsData->archived.visionBlends[4].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[5].childRefs[0].m_type = 83953154;
  Core_strcpy(cvsData->archived.visionBlends[5].name, 0x40ui64, "NVG Fade Black");
  cvsData->archived.visionBlends[5].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[6].childRefs[0].m_type = 100730626;
  Core_strcpy(cvsData->archived.visionBlends[6].name, 0x40ui64, "Vehicle");
  cvsData->archived.visionBlends[6].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[7].childRefs[0].m_type = 184616962;
  Core_strcpy(cvsData->archived.visionBlends[7].name, 0x40ui64, "Thermal");
  cvsData->archived.visionBlends[7].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[8].childRefs[0].m_type = 201394434;
  Core_strcpy(cvsData->archived.visionBlends[8].name, 0x40ui64, "Missile Cam");
  cvsData->archived.visionBlends[8].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[9].childRefs[0].m_type = 117508610;
  Core_strcpy(cvsData->archived.visionBlends[9].name, 0x40ui64, "NVG Blind");
  cvsData->archived.visionBlends[9].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[10].childRefs[0].m_type = 134286082;
  Core_strcpy(cvsData->archived.visionBlends[10].name, 0x40ui64, "NVG Blind Weighted");
  cvsData->archived.visionBlends[10].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[11].childRefs[0].m_type = 151063554;
  Core_strcpy(cvsData->archived.visionBlends[11].name, 0x40ui64, "Night Vision");
  cvsData->archived.visionBlends[11].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[12].childRefs[0].m_type = 167841026;
  Core_strcpy(cvsData->archived.visionBlends[12].name, 0x40ui64, "NVG Exposure");
  cvsData->archived.visionBlends[12].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[13].childRefs[0].m_type = 218172930;
  Core_strcpy(cvsData->archived.visionBlends[13].name, 0x40ui64, "Killstreak");
  cvsData->archived.visionBlends[13].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[14].childRefs[0].m_type = 234950402;
  Core_strcpy(cvsData->archived.visionBlends[14].name, 0x40ui64, "Weapon ADS");
  cvsData->archived.visionBlends[14].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[15].childRefs[0].m_type = 251727874;
  Core_strcpy(cvsData->archived.visionBlends[15].name, 0x40ui64, "Killcam Thirdperson");
  cvsData->archived.visionBlends[15].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[16].childRefs[0].m_type = 352456962;
  Core_strcpy(cvsData->archived.visionBlends[16].name, 0x40ui64, "Script Override");
  cvsData->archived.visionBlends[16].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[17].childRefs[0].m_type = 302126594;
  Core_strcpy(cvsData->archived.visionBlends[17].name, 0x40ui64, "Client Trigger");
  cvsData->archived.visionBlends[17].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[18].childRefs[0].m_type = 335680258;
  Core_strcpy(cvsData->archived.visionBlends[18].name, 0x40ui64, "Client Trigger Blend");
  cvsData->archived.visionBlends[18].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[19].childRefs[0].m_type = 285282305;
  Core_strcpy(cvsData->archived.visionBlends[19].name, 0x40ui64, "Client Trigger Alternate A");
  cvsData->archived.visionBlends[19].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  *(_DWORD *)&cvsData->archived.visionBlends[20].childRefs[0].m_type = 318837249;
  Core_strcpy(cvsData->archived.visionBlends[20].name, 0x40ui64, "Client Trigger Alternate B");
  cvsData->archived.visionBlends[20].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  *(_DWORD *)&cvsData->archived.visionBlends[21].childRefs[0].m_type = 402724609;
  Core_strcpy(cvsData->archived.visionBlends[21].name, 0x40ui64, "Script Blend");
  cvsData->archived.visionBlends[21].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  *(_DWORD *)&cvsData->archived.visionBlends[22].childRefs[0].m_type = 386012161;
  Core_strcpy(cvsData->archived.visionBlends[22].name, 0x40ui64, "Default");
  cvsData->archived.visionBlends[22].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  *(_DWORD *)&cvsData->archived.visionBlends[23].childRefs[0].m_type = 369169665;
  Core_strcpy(cvsData->archived.visionBlends[23].name, 0x40ui64, "Worldspawn Alternate");
  cvsData->archived.visionBlends[23].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  v3 = 24i64;
  do
  {
    v4 = childRefs;
    v5 = 2i64;
    do
    {
      if ( v4->m_type == Type_Null && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 325, ASSERT_TYPE_ASSERT, "(cvsData->archived.visionBlends[blend].childRefs[child].m_type != visionSetBlend_t::ChildRef::Type_Null)", (const char *)&queryFormat, "cvsData->archived.visionBlends[blend].childRefs[child].m_type != visionSetBlend_t::ChildRef::Type_Null") )
        __debugbreak();
      ++v4;
      --v5;
    }
    while ( v5 );
    childRefs += 610;
    --v3;
  }
  while ( v3 );
  cvsData->archived.visionLeaves[0].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[1].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[2].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[3].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[4].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[5].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[6].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[7].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[8].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[9].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[10].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[11].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[12].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[13].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[14].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[15].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[16].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[17].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[18].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[19].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[20].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[21].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[22].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[23].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionLeaves[24].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[0].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[1].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[2].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[3].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[4].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[5].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[6].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[7].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[8].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[9].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[10].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[11].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[12].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[13].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[14].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[15].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[16].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[17].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[18].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[19].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[20].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[21].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[22].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
  cvsData->archived.visionBlends[23].assetTableResetCounter = s_CG_VisionSet.m_resetCounter;
}

/*
==============
CG_VisionSetChangeLeafParameter
==============
*/
void CG_VisionSetChangeLeafParameter(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *key, const char *val)
{
  visionSetVars_t *v8; 
  signed int v9; 
  visField_t *v10; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1097, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  v8 = &cvsData->archived.visionLeaves[(unsigned __int8)leaf];
  if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1101, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
    __debugbreak();
  if ( v8->assetTableResetCounter != s_CG_VisionSet.m_resetCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1102, ASSERT_TYPE_ASSERT, "(vision->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", (const char *)&queryFormat, "vision->assetTableResetCounter == s_CG_VisionSet.m_resetCounter") )
    __debugbreak();
  v9 = 0;
  v10 = visionDefFields;
  do
  {
    if ( !I_strncmp(key, v10->name, 0x7FFFFFFFui64) )
      CG_VisionSetApplyTokenToField(v9, val, v8);
    ++v9;
    ++v10;
  }
  while ( v9 < 218 );
}

/*
==============
CG_VisionSetClearLeaf
==============
*/
void CG_VisionSetClearLeaf(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf)
{
  __int64 v4; 

  if ( (unsigned __int8)leaf >= VISIONSET_LEAFTYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1119, ASSERT_TYPE_ASSERT, "(unsigned)( leaf ) < (unsigned)( VISIONSET_LEAFTYPE_COUNT )", "leaf doesn't index VISIONSET_LEAFTYPE_COUNT\n\t%i not in [0, %i)", (unsigned __int8)leaf, 25) )
    __debugbreak();
  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1120, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  v4 = (unsigned __int8)leaf;
  *(_QWORD *)cvsData->archived.visionLeaves[v4].inUse.array = 0i64;
  *(_QWORD *)&cvsData->archived.visionLeaves[v4].inUse.array[2] = 0i64;
  *(_QWORD *)&cvsData->archived.visionLeaves[v4].inUse.array[4] = 0i64;
  cvsData->archived.visionLeaves[v4].inUse.array[6] = 0;
}

/*
==============
CG_VisionSetClearScriptBlendInUseIfNeeded
==============
*/
void CG_VisionSetClearScriptBlendInUseIfNeeded(ClientVisionSetData *cvsData, const int time)
{
  char v6; 

  *(double *)&_XMM0 = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[16], time);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  if ( v6 )
  {
    *(_QWORD *)cvsData->archived.visionBlends[21].inUse.array = 0i64;
    *(_QWORD *)&cvsData->archived.visionBlends[21].inUse.array[2] = 0i64;
    *(_QWORD *)&cvsData->archived.visionBlends[21].inUse.array[4] = 0i64;
    cvsData->archived.visionBlends[21].inUse.array[6] = 0;
  }
}

/*
==============
CG_VisionSetDebugBlendTree
==============
*/
char CG_VisionSetDebugBlendTree(const LocalClientNum_t localClientNum, char *buffer, unsigned int length)
{
  unsigned __int64 v4; 
  cg_t *LocalClientGlobals; 
  int v8; 
  unsigned int v9; 
  char *v10; 
  int v11; 
  unsigned int v12; 
  char *v13; 
  int i; 
  int v15; 
  visionSetBlend_t::ChildRef *v16; 
  cg_t *v17; 
  int v18; 
  int m_index; 
  int v20; 
  __int64 v21; 
  BOOL v22; 
  BOOL v23; 
  int v25; 
  char *fmt; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  visionSetBlend_t::ChildRef *j; 
  cg_t *v33; 

  v4 = length;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= cg_t::ms_allocatedCount )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v33 = LocalClientGlobals;
  if ( !LocalClientGlobals->cvsData.archived.visionInitialized )
    return 0;
  v8 = Com_sprintf(buffer, v4, "%d,", 25i64);
  v9 = v4 - v8;
  v10 = &buffer[v8];
  v11 = Com_sprintf(v10, v9, "%d,", 24i64);
  v12 = v9 - v11;
  v13 = &v10[v11];
  for ( i = 0; i < 25; ++i )
  {
    v15 = Com_sprintf(v13, v12, "%s,", LocalClientGlobals->cvsData.archived.visionLeaves[i].name);
    if ( v15 < 0 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442D56D8, 1157i64);
      return 0;
    }
    v12 -= v15;
    v13 += v15;
  }
  v16 = &LocalClientGlobals->cvsData.archived.visionBlends[0].childRefs[1];
  v17 = LocalClientGlobals;
  v18 = 0;
  for ( j = &LocalClientGlobals->cvsData.archived.visionBlends[0].childRefs[1]; ; j += 610 )
  {
    m_index = v16[-1].m_index;
    v20 = v16->m_index;
    v21 = v18;
    v22 = v16->m_type != Type_Blend;
    v23 = v16[-1].m_type != Type_Blend;
    *(double *)&_XMM0 = CG_VisionSetGetLerp(&v17->cvsData.archived.visionBlends[v21], v17->time - v17->cvsData.transitory.playbackDelta);
    LODWORD(v31) = v20;
    LODWORD(v30) = v22;
    __asm { vcvtss2sd xmm1, xmm0, xmm0 }
    LODWORD(v29) = m_index;
    LODWORD(v28) = v23;
    __asm { vmovsd  [rsp+88h+fmt], xmm1 }
    v25 = Com_sprintf(v13, v12, "%s,%f,%d,%d,%d,%d,", v33->cvsData.archived.visionBlends[v21].name, *(double *)&fmt, v28, v29, v30, v31);
    if ( v25 < 0 )
      break;
    v17 = v33;
    v12 -= v25;
    ++v18;
    v13 += v25;
    v16 = j + 610;
    if ( v18 >= 24 )
      return 1;
  }
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442D56D8, 1158i64);
  return 0;
}

/*
==============
CG_VisionSetDebugDraw
==============
*/
void CG_VisionSetDebugDraw(const LocalClientNum_t localClientNum, visionSetPrintMode_t printMode)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  const ClientVisionSetData *p_cvsData; 
  int v7; 
  bool v8; 
  const ScreenPlacement *v9; 
  float y; 
  float x; 

  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_cvsData = &LocalClientGlobals->cvsData;
  v7 = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
  {
LABEL_7:
    v9 = &scrPlaceFull;
    goto LABEL_8;
  }
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v8 )
      __debugbreak();
    goto LABEL_7;
  }
  v9 = &scrPlaceViewDisplay[v3];
LABEL_8:
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+68h+x], xmm0
    vmovss  [rsp+68h+arg_8], xmm0
  }
  switch ( printMode )
  {
    case VISIONSET_PRINT_MINIMAL:
      __asm { vmovss  xmm0, cs:__real@3f800000; weight }
      CG_VisionSetDebugDrawMinimalDepthFirstPrint(*(float *)&_XMM0, p_cvsData, v7, v9, &x, &y, p_cvsData->archived.visionBlends, 0, printMode);
      break;
    case VISIONSET_PRINT_ARTIST_FRIENDLY:
      __asm { vmovss  xmm0, cs:__real@3f800000; weight }
      CG_VisionSetDebugDrawArtistFriendlyDepthFirstPrint(*(float *)&_XMM0, p_cvsData, v7, v9, &x, &y, p_cvsData->archived.visionBlends, 0, printMode);
      break;
    case VISIONSET_PRINT_BLEND:
      CG_VisionSetDebugDrawBlendTreeDepthFirstPrint(p_cvsData, v7, v9, &x, &y, p_cvsData->archived.visionBlends, 0, VISIONSET_PRINT_BLEND);
      break;
    case VISIONSET_PRINT_ROOT_CONTENTS:
      CG_VisionSetDebugDrawRootContents(p_cvsData, v9, &x, &y);
      break;
    case VISIONSET_CURRENT_HDR_VALUES:
      CG_VisionSetDebugHdrValues(p_cvsData, v9, &x, &y, rgp.world);
      break;
  }
}

/*
==============
CG_VisionSetDebugDrawArtistFriendlyDepthFirstPrint
==============
*/

void __fastcall CG_VisionSetDebugDrawArtistFriendlyDepthFirstPrint(double weight, const ClientVisionSetData *cvsData, const int time, const ScreenPlacement *scrPlace, float *x, float *y, const visionSetVarsBase_t *node, int level, visionSetPrintMode_t printMode)
{
  visionSetBlend_t *visionBlends; 
  int v15; 
  const visionSetVarsBase_t *Child; 
  const visionSetVarsBase_t *v25; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  visionBlends = cvsData->archived.visionBlends;
  v15 = time;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmm7, xmm0
  }
  while ( node >= visionBlends && node <= &cvsData->archived.visionBlends[23] )
  {
    __asm { vmovaps xmm0, xmm7; weight }
    CG_VisionSetDebugDrawNode(*(float *)&_XMM0, (const visionSetBlend_t *)node, v15, scrPlace, x, y, level, printMode);
    *(double *)&_XMM0 = CG_VisionSetGetLerp((const visionSetBlend_t *)node, time);
    __asm { vmovaps xmm6, xmm0 }
    ++level;
    Child = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1].r_primaryLightTweakDiffuseStrength + 1);
    __asm { vmulss  xmm0, xmm6, xmm7; weight }
    CG_VisionSetDebugDrawArtistFriendlyDepthFirstPrint(*(float *)&_XMM0, cvsData, time, scrPlace, x, y, Child, level, printMode);
    v25 = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1]);
    v15 = time;
    node = v25;
    __asm
    {
      vsubss  xmm0, xmm8, xmm6
      vmulss  xmm7, xmm7, xmm0
    }
  }
  __asm
  {
    vmovaps xmm0, xmm7
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  _R11 = &v34;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
  CG_VisionSetDebugDrawLeaf(*(float *)&_XMM0, (const visionSetVars_t *)node, scrPlace, x, y, level, printMode);
}

/*
==============
CG_VisionSetDebugDrawBlendTreeDepthFirstPrint
==============
*/
void CG_VisionSetDebugDrawBlendTreeDepthFirstPrint(const ClientVisionSetData *cvsData, const int time, const ScreenPlacement *scrPlace, float *x, float *y, const visionSetVarsBase_t *node, int level, visionSetPrintMode_t printMode)
{
  char v15; 
  vec4_t *v18; 
  GfxFont *font; 
  const char *s; 
  const visionSetBlend_t::ChildRef *v35; 
  __int64 v36; 
  const visionSetVarsBase_t *Child; 
  GfxFont *smallDevFont; 
  char *name; 
  const char *v40; 
  float yScale; 
  float yScalea; 
  const vec4_t *nodea; 

  if ( node < cvsData->archived.visionBlends || node > &cvsData->archived.visionBlends[23] )
  {
    if ( printMode == VISIONSET_PRINT_BLEND )
    {
      smallDevFont = cls.smallDevFont;
      name = "---";
      if ( node->name[0] )
        name = node->name;
      v40 = j_va((const char *)&queryFormat, name);
      __asm { vmovss  xmm3, cs:__real@3f19999a; xScale }
      _RDI = y;
      __asm
      {
        vmovss  xmm2, dword ptr [rdi]; y
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vaddss  xmm1, xmm0, dword ptr [r12]; x
        vmovss  [rsp+78h+yScale], xmm3
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, yScalea, v40, &colorCyan, 5, smallDevFont);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm0, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm0
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 448, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported printMode, %d", printMode) )
    {
      __debugbreak();
    }
  }
  else
  {
    *(double *)&_XMM0 = CG_VisionSetGetLerp((const visionSetBlend_t *)node, time);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
    }
    if ( v15 )
    {
      v18 = &colorLtBlue;
    }
    else
    {
      __asm { vucomiss xmm0, cs:__real@3f800000 }
      v18 = &colorGreen;
      if ( !v15 )
        v18 = &colorOrange;
    }
    _R15 = y;
    nodea = v18;
    if ( printMode == VISIONSET_PRINT_BLEND )
    {
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@42c80000
        vaddss  xmm2, xmm0, cs:__real@3f000000
      }
      font = cls.smallDevFont;
      __asm
      {
        vmovss  xmm3, xmm1, xmm2
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm3, 1
        vcvttss2si r8d, xmm4
      }
      s = j_va("%s (%d%%)", node->name, _R8);
      __asm
      {
        vmovss  xmm3, cs:__real@3f19999a; xScale
        vmovss  xmm2, dword ptr [r15]; y
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vaddss  xmm1, xmm0, dword ptr [r12]; x
        vmovss  [rsp+78h+yScale], xmm3
      }
      CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, yScale, s, nodea, 5, font);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm0, xmm0, dword ptr [r15]
        vmovss  dword ptr [r15], xmm0
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 435, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported printMode, %d", printMode) )
    {
      __debugbreak();
    }
    v35 = (const visionSetBlend_t::ChildRef *)&node[1];
    v36 = 2i64;
    do
    {
      Child = CG_VisionSet_GetChild(cvsData, v35);
      CG_VisionSetDebugDrawBlendTreeDepthFirstPrint(cvsData, time, scrPlace, x, y, Child, level + 1, printMode);
      ++v35;
      --v36;
    }
    while ( v36 );
  }
}

/*
==============
CG_VisionSetDebugDrawLeaf
==============
*/

void __fastcall CG_VisionSetDebugDrawLeaf(double weight, const visionSetVars_t *node, const ScreenPlacement *scrPlace, float *x, float *y, int level, visionSetPrintMode_t printMode)
{
  const ScreenPlacement *v9; 
  bool v12; 
  bool v13; 
  const vec4_t *color; 
  GfxFont *font; 
  char *name; 
  const char *v24; 
  float fmt; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  v9 = scrPlace;
  __asm { vmovaps xmm6, xmm0 }
  v12 = printMode == VISIONSET_PRINT_ARTIST_FRIENDLY;
  if ( (unsigned int)(printMode - 1) > 1 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 396, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported printMode, %d", printMode);
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( v12 )
  {
    color = &colorDkCyan;
  }
  else
  {
    __asm { vucomiss xmm6, cs:__real@3f800000 }
    color = &colorCyan;
    if ( !v12 )
      color = &colorYellow;
  }
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@42c80000
    vaddss  xmm2, xmm0, cs:__real@3f000000
  }
  font = cls.smallDevFont;
  name = "---";
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si r8d, xmm4
  }
  if ( node->name[0] )
    name = node->name;
  v24 = j_va("%s (%d%%)", name, scrPlace);
  __asm { vmovss  xmm3, cs:__real@3f19999a; xScale }
  _RBX = y;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vaddss  xmm1, xmm0, dword ptr [rbp+0]; x
    vmovss  dword ptr [rsp+68h+fmt], xmm3
  }
  CG_DrawDevString(v9, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v24, color, 5, font);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm0, xmm0, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
}

/*
==============
CG_VisionSetDebugDrawMinimalDepthFirstPrint
==============
*/

void __fastcall CG_VisionSetDebugDrawMinimalDepthFirstPrint(double weight, const ClientVisionSetData *cvsData, const int time, const ScreenPlacement *scrPlace, float *x, float *y, const visionSetVarsBase_t *node, int level, visionSetPrintMode_t printMode)
{
  const ScreenPlacement *v18; 
  visionSetBlend_t *visionBlends; 
  visionSetPrintMode_t v22; 
  visionSetBlend_t *v24; 
  const visionSetVarsBase_t *Child; 
  bool v27; 
  const visionSetVarsBase_t *v28; 
  bool v29; 
  char v30; 
  int v32; 
  const visionSetVarsBase_t *v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm0, xmm8
    vmovaps xmm7, xmm0
  }
  v18 = scrPlace;
  visionBlends = cvsData->archived.visionBlends;
  v22 = printMode;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmmword ptr [rax-38h], xmm6
  }
  while ( node >= visionBlends )
  {
    v24 = &cvsData->archived.visionBlends[23];
    if ( node > &cvsData->archived.visionBlends[23] )
      break;
    weight = CG_VisionSetGetLerp((const visionSetBlend_t *)node, time);
    __asm { vmovaps xmm6, xmm0 }
    Child = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1]);
    v27 = Child < visionBlends || Child > v24;
    v28 = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1].r_primaryLightTweakDiffuseStrength + 1);
    v29 = v28 == visionBlends;
    if ( v28 < visionBlends || (v29 = v28 == v24, v28 > v24) )
    {
      v30 = 1;
    }
    else
    {
      v30 = 0;
      v29 = 1;
    }
    __asm { vucomiss xmm6, xmm8 }
    if ( !v29 )
    {
      __asm { vucomiss xmm6, xmm9 }
      if ( !v29 )
      {
        if ( !v27 && !v30 )
          goto LABEL_21;
        v27 = 1;
LABEL_20:
        __asm { vmovaps xmm0, xmm7; weight }
        CG_VisionSetDebugDrawNode(*(float *)&_XMM0, (const visionSetBlend_t *)node, time, scrPlace, x, y, level, printMode);
        goto LABEL_21;
      }
      v27 = v30;
    }
    if ( v27 )
      goto LABEL_20;
LABEL_21:
    v32 = level + 1;
    if ( !v27 )
      v32 = level;
    level = v32;
    v33 = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1].r_primaryLightTweakDiffuseStrength + 1);
    v22 = printMode;
    v18 = scrPlace;
    __asm { vmulss  xmm0, xmm6, xmm7; weight }
    CG_VisionSetDebugDrawMinimalDepthFirstPrint(*(float *)&_XMM0, cvsData, time, scrPlace, x, y, v33, level, printMode);
    __asm
    {
      vsubss  xmm0, xmm9, xmm6
      vmulss  xmm7, xmm7, xmm0
      vucomiss xmm7, xmm8
    }
    node = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1]);
    if ( v29 )
      goto LABEL_26;
  }
  __asm { vmovaps xmm0, xmm7; weight }
  CG_VisionSetDebugDrawLeaf(*(double *)&_XMM0, (const visionSetVars_t *)node, v18, x, y, level, v22);
LABEL_26:
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovaps xmm9, [rsp+0C8h+var_68]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm8, [rsp+0C8h+var_58]
  }
}

/*
==============
CG_VisionSetDebugDrawNode
==============
*/

void __fastcall CG_VisionSetDebugDrawNode(double weight, const visionSetBlend_t *node, __int64 time, const ScreenPlacement *scrPlace, float *x, float *y, int level, visionSetPrintMode_t printMode)
{
  bool v13; 
  bool v14; 
  const vec4_t *color; 
  GfxFont *font; 
  const char *v24; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  v13 = printMode == VISIONSET_PRINT_ARTIST_FRIENDLY;
  if ( (unsigned int)(printMode - 1) > 1 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 383, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported printMode, %d", printMode);
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  color = &colorDkGrey;
  if ( !v13 )
    color = &colorLtGrey;
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@42c80000
    vaddss  xmm2, xmm0, cs:__real@3f000000
  }
  font = cls.smallDevFont;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si r8d, xmm4
  }
  v24 = j_va("%s Blender (%d%%)", node->name, time);
  __asm { vmovss  xmm3, cs:__real@3f19999a; xScale }
  _RDI = y;
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]; y
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vaddss  xmm1, xmm0, dword ptr [rcx]; x
    vmovss  dword ptr [rsp+68h+fmt], xmm3
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v24, color, 5, font);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm0, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
  }
}

/*
==============
CG_VisionSetDebugDrawRootContents
==============
*/
void CG_VisionSetDebugDrawRootContents(const ClientVisionSetData *cvsData, const ScreenPlacement *scrPlace, float *x, float *y)
{
  int v18; 
  unsigned __int16 *p_offset; 
  const char *UnobfuscatedName; 
  int v22; 
  const char *v23; 
  GfxFont *font; 
  const char *s; 
  char *v43; 
  __int64 v44; 
  char v45; 
  const char *AssetName; 
  float fmt; 
  char *fmta; 
  char *fmtb; 
  float fmtc; 
  int v64; 
  unsigned __int16 *v65; 
  visionSetBlend_t *visionBlends; 
  char dest[64]; 
  char v68[1024]; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  _RDI = cvsData->archived.visionBlends;
  visionBlends = cvsData->archived.visionBlends;
  _RBP = y;
  _R12 = x;
  if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 555, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
    __debugbreak();
  if ( _RDI->assetTableResetCounter != s_CG_VisionSet.m_resetCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 556, ASSERT_TYPE_ASSERT, "(root->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", (const char *)&queryFormat, "root->assetTableResetCounter == s_CG_VisionSet.m_resetCounter") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [rbp+0]
    vmovss  xmm9, cs:__real@43480000
    vmovss  xmm6, cs:__real@3ef5c290
    vmovss  xmm7, cs:__real@3ec8c8ca
  }
  v18 = 0;
  p_offset = &visionDefFields[0].offset;
  v64 = 0;
  v65 = &visionDefFields[0].offset;
  do
  {
    if ( v18 > 0 && v18 == 62 * (v18 / 0x3Eu) )
    {
      __asm
      {
        vaddss  xmm1, xmm9, dword ptr [r12]
        vmovss  dword ptr [r12], xmm1
        vmovss  dword ptr [rbp+0], xmm8
      }
    }
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(*((const char **)p_offset - 1));
    v22 = *((_DWORD *)p_offset + 1);
    switch ( v22 )
    {
      case 0:
        v23 = "false";
        font = cls.smallDevFont;
        if ( *((_BYTE *)&_RDI->r_primaryLightTweakDiffuseStrength + *p_offset) )
          v23 = "true";
        s = j_va("%s = %s\n", UnobfuscatedName, v23);
        goto LABEL_15;
      case 1:
        _RAX = *p_offset;
        font = cls.smallDevFont;
        __asm
        {
          vmovss  xmm2, dword ptr [rax+rdi]
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r8, xmm2
        }
        s = j_va("%s = %.5f\n", UnobfuscatedName, _R8);
LABEL_15:
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+0]; y
          vmovss  xmm1, dword ptr [r12]; x
          vmovaps xmm3, xmm6; xScale
          vmovss  dword ptr [rsp+548h+fmt], xmm6
        }
        CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, s, &colorCyan, 5, font);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm0, xmm0, dword ptr [rbp+0]
          vmovss  dword ptr [rbp+0], xmm0
        }
        goto LABEL_30;
      case 2:
        _RAX = *p_offset;
        font = cls.smallDevFont;
        __asm
        {
          vmovss  xmm3, dword ptr [rax+rdi+4]
          vmovss  xmm2, dword ptr [rax+rdi]
          vmovss  xmm0, dword ptr [rax+rdi+8]
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm0, xmm0, xmm0
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+548h+fmt], xmm0
        }
        s = j_va("%s = %.2f %.2f %.2f\n", UnobfuscatedName, _R8, _R9, fmta);
        goto LABEL_15;
    }
    if ( (unsigned int)(v22 - 3) <= 2 )
    {
      Com_sprintf(dest, 0x40ui64, "%s = ", UnobfuscatedName);
      v43 = (char *)_RDI + *p_offset;
      v44 = 0i64;
      do
      {
        v45 = v43[2 * v44 + 1];
        if ( !v45 )
          break;
        AssetName = CG_VisionSetGetAssetName((const CG_VisionSet_Asset *)&s_CG_VisionSet.m_assetNodes[16 * (unsigned __int8)v43[2 * v44] - 4080]);
        if ( v45 == -1 )
        {
          Com_sprintf(v68, 0x400ui64, "%s%s\n", dest, AssetName);
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm7
            vcvtss2sd xmm2, xmm1, xmm1
            vmovsd  [rsp+548h+fmt], xmm2
          }
          Com_sprintf(v68, 0x400ui64, "%s%4.1f%% %s\n", dest, *(double *)&fmtb, AssetName);
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+0]; y
          vmovss  xmm1, dword ptr [r12]; x
          vmovaps xmm3, xmm6; xScale
          vmovss  dword ptr [rsp+548h+fmt], xmm6
        }
        CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v68, &colorCyan, 5, cls.smallDevFont);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vaddss  xmm0, xmm0, dword ptr [rbp+0]
        }
        v44 = (unsigned int)(v44 + 1);
        __asm { vmovss  dword ptr [rbp+0], xmm0 }
      }
      while ( (_DWORD)v44 != 9 );
      v18 = v64;
      p_offset = v65;
      _RDI = visionBlends;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 621, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown field type") )
    {
      __debugbreak();
    }
LABEL_30:
    ++v18;
    p_offset += 20;
    v64 = v18;
    v65 = p_offset;
  }
  while ( v18 < 218 );
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
CG_VisionSetDebugHdrValues
==============
*/
void CG_VisionSetDebugHdrValues(const ClientVisionSetData *cvsData, const ScreenPlacement *scrPlace, float *x, float *y, const GfxWorld *gfxWorld)
{
  const char *v16; 
  const char *v17; 
  char v22; 
  bool v23; 
  char v65; 
  char v66; 
  GfxFont *font; 
  const char *v81; 
  GfxFont *smallDevFont; 
  const char *v93; 
  GfxFont *v100; 
  const char *v103; 
  const char *v118; 
  int v127; 
  __int64 v128; 
  unsigned __int8 m_weight; 
  unsigned __int8 m_assetIndex; 
  const char *AssetName; 
  char *v132; 
  float fmt; 
  char *fmta; 
  float fmtb; 
  char *fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  char *sa; 
  char *s; 
  vec4_t *colora; 
  vec4_t *color; 
  vec3_t outSunColorGammaSrgb; 
  char v160[64]; 
  char dest[1024]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm8
  }
  _RDI = y;
  __asm { vmovaps xmmword ptr [r11-58h], xmm6 }
  _R15 = x;
  _R13 = cvsData;
  if ( !gfxWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 798, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
    __debugbreak();
  _RBX = &gfxWorld->primaryLights[frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].stageInfo.activeStage.sunPrimaryLightIndex];
  if ( R_LightTweak_Enabled() )
  {
    R_LightTweak_GetSunColorGammaSrgb(&outSunColorGammaSrgb);
    *(double *)&_XMM0 = R_LightTweak_GetSunGameIntensity();
    v16 = " (light_tweak)";
    v17 = " (light_tweak)";
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    v16 = " (script)";
    __asm { vmovaps [rsp+538h+var_88], xmm13 }
    if ( rg.useSunColorLinearSrgbOverride )
    {
      __asm
      {
        vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride; r_globals_t rg
        vmovss  xmm7, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride+4; r_globals_t rg
        vmovss  xmm6, dword ptr cs:?rg@@3Ur_globals_t@@A.sunColorLinearSrgbOverride+8; r_globals_t rg
        vmovss  dword ptr [rsp+538h+outSunColorGammaSrgb], xmm0
        vmovss  dword ptr [rsp+538h+outSunColorGammaSrgb+4], xmm7
      }
      v17 = " (script)";
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+14h]; X
        vmovss  dword ptr [rsp+538h+outSunColorGammaSrgb], xmm0
        vmovss  xmm7, dword ptr [rbx+18h]
        vmovss  dword ptr [rsp+538h+outSunColorGammaSrgb+4], xmm7
        vmovss  xmm6, dword ptr [rbx+1Ch]
      }
      v17 = (char *)&queryFormat.fmt + 3;
    }
    v22 = 0;
    v23 = !rg.useSunIntensityOverride;
    __asm { vmovss  dword ptr [rsp+538h+outSunColorGammaSrgb+8], xmm6 }
    if ( rg.useSunIntensityOverride )
    {
      __asm { vmovss  xmm13, cs:?rg@@3Ur_globals_t@@A.sunIntensityOverride; r_globals_t rg }
    }
    else
    {
      __asm { vmovss  xmm13, dword ptr [rbx+10h] }
      v16 = (char *)&queryFormat.fmt + 3;
    }
    __asm
    {
      vcomiss xmm0, cs:__real@3b4d2e1c
      vmovss  xmm8, cs:__real@414eb852
    }
    if ( rg.useSunIntensityOverride )
    {
      __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f870a3d
        vsubss  xmm1, xmm1, cs:__real@3d6147ae
      }
    }
    else
    {
      __asm { vmulss  xmm1, xmm0, xmm8 }
    }
    __asm
    {
      vcomiss xmm7, cs:__real@3b4d2e1c
      vmovss  dword ptr [rsp+538h+outSunColorGammaSrgb], xmm1
    }
    if ( v22 | v23 )
    {
      __asm { vmulss  xmm0, xmm7, xmm8 }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3ed55555; Y
        vmovaps xmm0, xmm7; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f870a3d
        vsubss  xmm0, xmm1, cs:__real@3d6147ae
      }
    }
    __asm
    {
      vcomiss xmm6, cs:__real@3b4d2e1c
      vmovss  dword ptr [rsp+538h+outSunColorGammaSrgb+4], xmm0
    }
    if ( v22 | v23 )
    {
      __asm { vmulss  xmm0, xmm6, xmm8 }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3ed55555; Y
        vmovaps xmm0, xmm6; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f870a3d
        vsubss  xmm0, xmm1, cs:__real@3d6147ae
      }
    }
    __asm
    {
      vmulss  xmm6, xmm13, cs:__real@40490fdb
      vmovaps xmm13, [rsp+538h+var_88]
      vmovss  dword ptr [rsp+538h+outSunColorGammaSrgb+8], xmm0
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f19999a
    vmovss  xmm2, dword ptr [rdi]; y
    vmovss  xmm1, dword ptr [r15]; x
    vmovaps xmm3, xmm7; xScale
    vmovss  dword ptr [rsp+538h+fmt], xmm7
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, "Sunlight:", &colorWhite, 5, cls.smallDevFont);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+538h+outSunColorGammaSrgb+8]
    vmovss  xmm2, dword ptr [rsp+538h+outSunColorGammaSrgb+4]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm0, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rsp+538h+outSunColorGammaSrgb]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+538h+color], xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+538h+s], xmm2
    vmovsd  [rsp+538h+fmt], xmm0
  }
  Com_sprintf(dest, 0x400ui64, "color%s: %g %g %g", v17, *(double *)&fmta, *(double *)&sa, *(double *)&colora);
  __asm
  {
    vmovss  xmm8, cs:__real@40c00000
    vaddss  xmm1, xmm8, dword ptr [r15]; x
    vmovss  xmm2, dword ptr [rdi]; y
    vmovaps xmm3, xmm7; xScale
    vmovss  dword ptr [rsp+538h+fmt], xmm7
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, dest, &colorWhite, 5, cls.smallDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm0, xmm0, dword ptr [rdi]
    vcvtss2sd xmm1, xmm6, xmm6
    vmovss  dword ptr [rdi], xmm0
    vmovsd  [rsp+538h+fmt], xmm1
  }
  Com_sprintf(dest, 0x400ui64, "intensity%s: %g ", v16, *(double *)&fmtc);
  __asm
  {
    vaddss  xmm1, xmm8, dword ptr [r15]; x
    vmovss  xmm2, dword ptr [rdi]; y
    vmovaps xmm3, xmm7; xScale
    vmovss  dword ptr [rsp+538h+fmt], xmm7
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, dest, &colorWhite, 5, cls.smallDevFont);
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm2, xmm0, dword ptr [rdi]; y
    vmovss  dword ptr [rdi], xmm2
    vcomiss xmm1, dword ptr [r13+76A4h]
  }
  v65 = v22;
  __asm { vcomiss xmm1, dword ptr [r13+76A8h] }
  v66 = v22;
  __asm
  {
    vmovss  xmm1, dword ptr [r15]; x
    vmovaps xmm3, xmm7; xScale
    vmovss  dword ptr [rsp+538h+fmt], xmm7
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, "Exposure:", &colorWhite, 5, cls.smallDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm2, xmm0, dword ptr [rdi]; y
    vmovss  dword ptr [rdi], xmm2
    vaddss  xmm1, xmm8, dword ptr [r15]; x
    vmovaps xmm3, xmm7; xScale
  }
  if ( v65 )
  {
    __asm { vmovss  dword ptr [rsp+538h+fmt], xmm7 }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, "Enabled", &colorGreen, 5, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm0, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr [r13+76B4h]
    }
    font = cls.smallDevFont;
    __asm
    {
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v81 = j_va("Min exposure: %f", _RDX);
    __asm
    {
      vmovss  xmm6, cs:__real@41400000
      vaddss  xmm1, xmm6, dword ptr [r15]; x
      vmovss  xmm2, dword ptr [rdi]; y
      vmovaps xmm3, xmm7; xScale
      vmovss  dword ptr [rsp+538h+fmt], xmm7
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, v81, &colorWhite, 5, font);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm0, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr [r13+76B8h]
    }
    smallDevFont = cls.smallDevFont;
    __asm
    {
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v93 = j_va("Exposure Adjust: %f", _RDX);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [r15]; x
      vmovss  xmm2, dword ptr [rdi]; y
      vmovaps xmm3, xmm7; xScale
      vmovss  dword ptr [rsp+538h+fmt], xmm7
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, v93, &colorWhite, 5, smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm0, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr [r13+76BCh]
    }
    v100 = cls.smallDevFont;
    __asm
    {
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   rdx, xmm1
    }
    v103 = j_va("Exposure Adapt Speed: %f", _RDX);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [r15]; x
      vmovss  xmm2, dword ptr [rdi]; y
      vmovaps xmm3, xmm7; xScale
      vmovss  dword ptr [rsp+538h+fmt], xmm7
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmti, v103, &colorWhite, 5, v100);
  }
  else
  {
    __asm { vmovss  dword ptr [rsp+538h+fmt], xmm7 }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, "Disabled", &colorRed, 5, cls.smallDevFont);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm2, xmm0, dword ptr [rdi]; y
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm1, dword ptr [r15]; x
    vmovaps xmm3, xmm7; xScale
    vmovss  dword ptr [rsp+538h+fmt], xmm7
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, "Exposure Adjust:", &colorWhite, 5, cls.smallDevFont);
  __asm
  {
    vmovaps xmm6, [rsp+538h+var_58]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm2, xmm0, dword ptr [rdi]; y
    vmovss  dword ptr [rdi], xmm2
    vaddss  xmm1, xmm8, dword ptr [r15]; x
    vmovaps xmm3, xmm7; xScale
  }
  if ( v66 )
  {
    color = &colorGreen;
    v118 = "Enabled";
  }
  else
  {
    v118 = "Disabled";
    color = &colorRed;
  }
  __asm { vmovss  dword ptr [rsp+538h+fmt], xmm7 }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, v118, color, 5, cls.smallDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm2, xmm0, dword ptr [rdi]; y
    vmovss  dword ptr [rdi], xmm2
    vmovss  xmm1, dword ptr [r15]; x
    vmovaps xmm3, xmm7; xScale
    vmovss  dword ptr [rsp+538h+fmt], xmm7
  }
  CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, "CLUTs:", &colorWhite, 5, cls.smallDevFont);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm1
  }
  v127 = Com_sprintf(v160, 0x40ui64, "clut0: ");
  v128 = 0i64;
  do
  {
    m_weight = _R13->archived.visionBlends[0].clutSet.m_assets[v128].m_weight;
    if ( !m_weight )
      break;
    m_assetIndex = _R13->archived.visionBlends[0].clutSet.m_assets[v128].m_assetIndex;
    AssetName = CG_VisionSetGetAssetName((const CG_VisionSet_Asset *)&s_CG_VisionSet.m_assetNodes[16 * m_assetIndex - 4080]);
    v132 = v160;
    if ( m_assetIndex )
      v132 = (char *)&queryFormat.fmt + 3;
    if ( m_weight == 0xFF )
    {
      Com_sprintf(dest, 0x400ui64, "%*s%s\n", v127, v132, AssetName);
    }
    else
    {
      LODWORD(s) = (100 * (unsigned int)m_weight + 127) / 0xFF;
      Com_sprintf(dest, 0x400ui64, "%*s%3d%% %s\n", v127, v132, s, AssetName);
    }
    __asm
    {
      vaddss  xmm1, xmm8, dword ptr [r15]; x
      vmovss  xmm2, dword ptr [rdi]; y
      vmovaps xmm3, xmm7; xScale
      vmovss  dword ptr [rsp+538h+fmt], xmm7
    }
    CG_DrawDevString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtn, dest, &colorWhite, 5, cls.smallDevFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm1, xmm0, dword ptr [rdi]
    }
    v128 = (unsigned int)(v128 + 1);
    __asm { vmovss  dword ptr [rdi], xmm1 }
  }
  while ( (_DWORD)v128 != 9 );
  __asm
  {
    vmovaps xmm7, [rsp+538h+var_68]
    vmovaps xmm8, [rsp+538h+var_78]
  }
}

/*
==============
CG_VisionSetDebugResult
==============
*/
char CG_VisionSetDebugResult(const LocalClientNum_t localClientNum, char *buffer, unsigned int length)
{
  ClientVisionSetData *p_cvsData; 
  visField_t *v7; 
  visionSetBlend_t *visionBlends; 
  VisionFieldType fieldType; 
  int v11; 
  __int64 v12; 
  unsigned __int8 v13; 
  const char *v14; 
  int v15; 
  int v16; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  double v29; 
  double v30; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum < cg_t::ms_allocatedCount )
  {
    p_cvsData = &CG_GetLocalClientGlobals(localClientNum)->cvsData;
    if ( p_cvsData->archived.visionInitialized )
    {
      v7 = visionDefFields;
      visionBlends = p_cvsData->archived.visionBlends;
      while ( 1 )
      {
        fieldType = v7->fieldType;
        _RSI = (unsigned __int8 *)visionBlends + v7->offset;
        if ( fieldType == FTYPE_BOOL )
        {
          LODWORD(fmt) = *_RSI;
          v16 = Com_sprintf(buffer, length, "%s \"%d\"\n", v7->name, fmt);
          goto LABEL_21;
        }
        if ( fieldType == FTYPE_FLOAT )
          break;
        if ( fieldType == FTYPE_VEC3 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+8]
            vmovss  xmm1, dword ptr [rsi+4]
            vmovss  xmm2, dword ptr [rsi]
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+68h+var_38], xmm0
            vcvtss2sd xmm1, xmm1, xmm1
            vcvtss2sd xmm2, xmm2, xmm2
            vmovsd  [rsp+68h+var_40], xmm1
            vmovsd  [rsp+68h+fmt], xmm2
          }
          v16 = Com_sprintf(buffer, length, "%s \"%g %g %g\"\n", v7->name, *(double *)&fmta, v29, v30);
LABEL_21:
          buffer += v16;
          length -= v16;
          goto LABEL_22;
        }
        if ( (unsigned int)(fieldType - 3) <= 2 )
        {
          v11 = Com_sprintf(buffer, length, (const char *)&queryFormat, v7->name);
          length -= v11;
          buffer += v11;
          v12 = 0i64;
          do
          {
            if ( !_RSI[2 * v12 + 1] )
              break;
            v13 = _RSI[2 * v12];
            v14 = v13 ? CG_VisionSetGetAssetName((const CG_VisionSet_Asset *)&s_CG_VisionSet.m_assetNodes[16 * v13 - 4080]) : (char *)&queryFormat.fmt + 3;
            v15 = Com_sprintf(buffer, length, " \"%s\"", v14);
            length -= v15;
            buffer += v15;
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (_DWORD)v12 != 9 );
          v16 = Com_sprintf(buffer, length, "\n");
          goto LABEL_21;
        }
LABEL_22:
        if ( (__int64)++v7 >= (__int64)visionDefFieldsNotInUse )
          return 1;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+68h+fmt], xmm0
      }
      v16 = Com_sprintf(buffer, length, "%s \"%g\"\n", v7->name, fmtb);
      goto LABEL_21;
    }
  }
  return 0;
}

/*
==============
CG_VisionSetDefaultAlternates
==============
*/
void CG_VisionSetDefaultAlternates(ClientVisionSetData *cvsData)
{
  char i; 
  const char *v3; 
  char v4; 
  char v5; 
  const char *v6; 
  const char *v7; 
  __int64 numDefaultAlternates; 
  char *data_p; 
  char *v10; 
  char dest[512]; 

  data_p = cm.mapEnts->entityString;
  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2143, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData", data_p) )
    __debugbreak();
  Com_BeginParseSession("CG_VisionSetDefaultAlternates");
  for ( i = *Com_Parse((const char **)&data_p); i; i = *Com_Parse((const char **)&data_p) )
  {
    if ( i == 123 )
      break;
  }
  v3 = Com_Parse((const char **)&data_p);
  v4 = *v3;
  if ( *v3 )
  {
    while ( v4 != 125 )
    {
      if ( v4 == 48 )
      {
        v3 = Com_Parse((const char **)&data_p);
        if ( !*v3 || *v3 == 125 )
          break;
      }
      if ( atoi(v3) == 857 )
      {
        v6 = Com_Parse((const char **)&data_p);
        if ( *v6 )
        {
          if ( *v6 != 125 )
          {
            cvsData->transitory.numDefaultAlternates = 0;
            v10 = dest;
            Core_strcpy(dest, 0x200ui64, v6);
            v7 = Com_Parse((const char **)&v10);
            if ( *v6 )
            {
              while ( 1 )
              {
                numDefaultAlternates = cvsData->transitory.numDefaultAlternates;
                if ( (int)numDefaultAlternates >= 8 )
                  break;
                Core_strcpy(cvsData->transitory.defaultAlternates[numDefaultAlternates], 0x40ui64, v7);
                ++cvsData->transitory.numDefaultAlternates;
                v7 = Com_Parse((const char **)&v10);
                if ( !*v6 )
                  goto LABEL_24;
              }
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442D6700, 1164i64);
            }
          }
        }
        break;
      }
      v5 = *Com_Parse((const char **)&data_p);
      if ( v5 )
      {
        if ( v5 != 125 )
        {
          v3 = Com_Parse((const char **)&data_p);
          v4 = *v3;
          if ( *v3 )
            continue;
        }
      }
      break;
    }
  }
LABEL_24:
  Com_EndParseSession();
}

/*
==============
CG_VisionSetForward
==============
*/
__int64 CG_VisionSetForward(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend)
{
  __int64 v4; 
  int v6; 
  int v7; 

  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    v7 = 24;
    v6 = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1216, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v4 = (unsigned __int8)blend;
  if ( cvsData->archived.visionBlends[v4].lerpInfo.type == VISIONSETBLENDTYPE_TIME )
    return (unsigned int)cvsData->archived.visionBlends[v4].lerpInfo.timeData.forward;
  else
    return 1i64;
}

/*
==============
CG_VisionSetFromScript
==============
*/
void CG_VisionSetFromScript(const LocalClientNum_t localClientNum, const visionSetMode_t visMode, const visionSetCodeLeafType_t leaf, const char *name, const int duration)
{
  __int64 v9; 
  cg_t *LocalClientGlobals; 
  cg_t *v12; 
  char v14; 
  __int64 v16; 
  int v28; 

  v9 = (unsigned int)visMode;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2562, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v12 = LocalClientGlobals;
  if ( (_DWORD)v9 )
  {
    if ( (_DWORD)v9 == 5 )
    {
      if ( *name )
      {
        CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_FADE_BLACK, name);
        v28 = 1;
      }
      else
      {
        v28 = 0;
      }
      CG_VisionSetRegisterBlendStart(&v12->cvsData, VISIONSET_BLENDTYPE_FADE_BLACK, v12->time, duration, v28, VISIONSETLERP_SMOOTH);
    }
    else if ( CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, leaf, name) && (_DWORD)v9 == 6 )
    {
      v12->hasKillcamThirdpersonVisionSet = 1;
    }
  }
  else
  {
    if ( *name )
    {
      CG_VisionSetUpdateToNode(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B);
      *(double *)&_XMM0 = CG_VisionSetGetLerp(&v12->cvsData.archived.visionBlends[16], v12->time);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm0, xmm1
      }
      if ( v14 )
      {
        *(_QWORD *)v12->cvsData.archived.visionBlends[21].inUse.array = v9;
        *(_QWORD *)&v12->cvsData.archived.visionBlends[21].inUse.array[2] = v9;
        *(_QWORD *)&v12->cvsData.archived.visionBlends[21].inUse.array[4] = v9;
        v12->cvsData.archived.visionBlends[21].inUse.array[6] = 0;
      }
      _RCX = &v12->cvsData.archived.visionLeaves[23];
      v16 = 9i64;
      _RDX = &v12->cvsData.archived.visionBlends[21];
      do
      {
        _RCX = (visionSetVars_t *)((char *)_RCX + 128);
        __asm { vmovups xmm0, xmmword ptr [rdx] }
        _RDX = (visionSetBlend_t *)((char *)_RDX + 128);
        __asm
        {
          vmovups xmmword ptr [rcx-80h], xmm0
          vmovups xmm1, xmmword ptr [rdx-70h]
          vmovups xmmword ptr [rcx-70h], xmm1
          vmovups xmm0, xmmword ptr [rdx-60h]
          vmovups xmmword ptr [rcx-60h], xmm0
          vmovups xmm1, xmmword ptr [rdx-50h]
          vmovups xmmword ptr [rcx-50h], xmm1
          vmovups xmm0, xmmword ptr [rdx-40h]
          vmovups xmmword ptr [rcx-40h], xmm0
          vmovups xmm1, xmmword ptr [rdx-30h]
          vmovups xmmword ptr [rcx-30h], xmm1
          vmovups xmm0, xmmword ptr [rdx-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmm1, xmmword ptr [rdx-10h]
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v16;
      }
      while ( v16 );
      __asm
      {
        vmovups xmm0, xmmword ptr [rdx]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmm1, xmmword ptr [rdx+10h]
        vmovups xmmword ptr [rcx+10h], xmm1
      }
      *(_QWORD *)&_RCX->r_viewModelLightAmbient.y = *(_QWORD *)&_RDX->r_viewModelLightAmbient.y;
      _RCX->r_lightTweakUVIntensityScale = _RDX->r_lightTweakUVIntensityScale;
      CG_VisionSetRegisterLeafByFile(&v12->cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, name);
      CG_VisionSetRegisterBlendStart(&v12->cvsData, VISIONSET_BLENDTYPE_SCRIPT_BLEND, v12->time, duration, 1, VISIONSETLERP_SMOOTH);
    }
    CG_VisionSetScriptOverride(&v12->cvsData, name, v12->time, duration);
  }
}

/*
==============
CG_VisionSetGetLerp
==============
*/
float CG_VisionSetGetLerp(const visionSetBlend_t *blend, const int time)
{
  visionBlendType_t type; 
  const visionSetBlend_t *v6; 

  type = blend->lerpInfo.type;
  v6 = blend;
  if ( type == VISIONSETBLENDTYPE_TIME )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( blend->lerpInfo.timeData.duration > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edx
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm0, xmm1, xmm0; val
        vmovaps [rsp+48h+var_18], xmm6
        vmovss  xmm6, cs:__real@3f800000
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm6; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      if ( !v6->lerpInfo.timeData.forward )
        __asm { vsubss  xmm0, xmm6, xmm0 }
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
  }
  else
  {
    if ( type != VISIONSETBLENDTYPE_PUSH )
    {
      if ( type != VISIONSETBLENDTYPE_OFF )
      {
        if ( type == VISIONSETBLENDTYPE_ON )
        {
          __asm { vmovss  xmm0, cs:__real@3f800000 }
          return *(float *)&_XMM0;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 368, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_VisionSetGetLerp found an unsupported blend type %d", blend->lerpInfo.type) )
          __debugbreak();
      }
      __asm { vxorps  xmm0, xmm0, xmm0 }
      return *(float *)&_XMM0;
    }
    __asm { vmovss  xmm0, dword ptr [rcx+4B8h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_VisionSetIsBlending
==============
*/
_BOOL8 CG_VisionSetIsBlending(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time)
{
  __int64 v6; 
  int startTime; 
  _BOOL8 result; 
  int v9; 
  int v10; 

  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    v10 = 24;
    v9 = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1184, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v6 = (unsigned __int8)blend;
  result = 0;
  if ( cvsData->archived.visionBlends[v6].lerpInfo.type == VISIONSETBLENDTYPE_TIME && time > 0 )
  {
    startTime = cvsData->archived.visionBlends[v6].lerpInfo.timeData.startTime;
    if ( time > startTime && time < startTime + cvsData->archived.visionBlends[v6].lerpInfo.timeData.duration )
      return 1;
  }
  return result;
}

/*
==============
CG_VisionSetIsComplete
==============
*/
_BOOL8 CG_VisionSetIsComplete(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time)
{
  __int64 v8; 
  char v9; 
  __int64 v12; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1204, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v12) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1205, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v12, 24) )
      __debugbreak();
  }
  v8 = (unsigned __int8)blend;
  if ( CG_VisionSetForward(cvsData, blend) )
  {
    *(double *)&_XMM0 = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[v8], time);
    __asm { vucomiss xmm0, cs:__real@3f800000 }
    if ( v9 )
      return 1i64;
  }
  if ( CG_VisionSetForward(cvsData, blend) )
    return 0i64;
  *(double *)&_XMM0 = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[v8], time);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  return v9 != 0;
}

/*
==============
CG_VisionSetIsLeafDifferent
==============
*/
__int64 CG_VisionSetIsLeafDifferent(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *name)
{
  __int64 v5; 
  char *v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  int v14; 
  int v15; 
  char dest[64]; 

  v5 = 64i64;
  Com_sprintf(dest, 0x40ui64, "vision/%s.vision", name);
  if ( (unsigned __int8)leaf >= VISIONSET_LEAFTYPE_COUNT )
  {
    v15 = 25;
    v14 = (unsigned __int8)leaf;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1175, ASSERT_TYPE_ASSERT, "(unsigned)( leaf ) < (unsigned)( VISIONSET_LEAFTYPE_COUNT )", "leaf doesn't index VISIONSET_LEAFTYPE_COUNT\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v6 = dest;
  v7 = 1196i64 * (unsigned __int8)leaf;
  v8 = 1;
  if ( (ClientVisionSetData *)((char *)cvsData + v7) == (ClientVisionSetData *)-1080i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v9 = v7 - (_QWORD)dest;
  while ( 1 )
  {
    v10 = cvsData->archived.visionLeaves[0].name[v9 + (_QWORD)v6];
    v11 = v5;
    v12 = *v6++;
    --v5;
    if ( !v11 )
      return 0i64;
    if ( v10 != v12 )
      break;
    if ( !v10 )
      return 0i64;
  }
  if ( v10 < v12 )
    return (unsigned int)-1;
  return v8;
}

/*
==============
CG_VisionSetLerp
==============
*/

void __fastcall CG_VisionSetLerp(const visionSetVarsBase_t *a, const visionSetVarsBase_t *b, double lerp, const visionSetLerpStyle_t style, visionSetVarsBase_t *result)
{
  const visionSetVarsBase_t *v10; 
  const visionSetVarsBase_t *v11; 
  unsigned int m_resetCounter; 
  unsigned int v20; 
  VisionFieldType *p_fieldType; 
  unsigned __int64 v22; 
  unsigned int v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  VisionFieldType v30; 
  char v51; 
  char v52; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v10 = b;
  __asm { vmovaps xmmword ptr [rax-58h], xmm7 }
  v11 = a;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmm6, xmm2
  }
  if ( !a && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1492, ASSERT_TYPE_ASSERT, "(a)", (const char *)&queryFormat, "a") )
    __debugbreak();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1493, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1494, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1496, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
    __debugbreak();
  m_resetCounter = s_CG_VisionSet.m_resetCounter;
  if ( v11->assetTableResetCounter != s_CG_VisionSet.m_resetCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1497, ASSERT_TYPE_ASSERT, "(a->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", "%s\n\ta->assetTableResetCounter=%d, s_CG_VisionSet.m_resetCounter=%d", "a->assetTableResetCounter == s_CG_VisionSet.m_resetCounter", v11->assetTableResetCounter, s_CG_VisionSet.m_resetCounter) )
      __debugbreak();
    m_resetCounter = s_CG_VisionSet.m_resetCounter;
  }
  if ( v10->assetTableResetCounter != m_resetCounter )
  {
    LODWORD(v58) = m_resetCounter;
    LODWORD(v57) = v10->assetTableResetCounter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1498, ASSERT_TYPE_ASSERT, "(b->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", "%s\n\tb->assetTableResetCounter=%d, s_CG_VisionSet.m_resetCounter=%d", "b->assetTableResetCounter == s_CG_VisionSet.m_resetCounter", v57, v58) )
      __debugbreak();
    m_resetCounter = s_CG_VisionSet.m_resetCounter;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm6; val
  }
  result->assetTableResetCounter = m_resetCounter;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  v20 = 0;
  p_fieldType = &visionDefFields[0].fieldType;
  while ( 1 )
  {
    if ( v20 >= 0xE0 )
    {
      LODWORD(v57) = 224;
      LODWORD(v56) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v56, v57) )
        __debugbreak();
    }
    v22 = (unsigned __int64)v20 >> 5;
    v23 = 0x80000000 >> (v20 & 0x1F);
    v24 = v23 & v11->inUse.array[v22];
    if ( v20 >= 0xE0 )
    {
      LODWORD(v57) = 224;
      LODWORD(v56) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v56, v57) )
        __debugbreak();
    }
    v25 = v23 & v10->inUse.array[v22];
    if ( v24 || v25 )
    {
      bitarray_base<bitarray<224>>::setBit(&result->inUse, v20);
      v26 = *((unsigned __int16 *)p_fieldType - 2);
      _R14 = (char *)v11 + v26;
      _RBX = (char *)result + v26;
      _RDI = (char *)b + v26;
      v30 = *p_fieldType;
      if ( *p_fieldType )
      {
        if ( v30 != FTYPE_FLOAT )
        {
          if ( v30 == FTYPE_VEC3 )
          {
            if ( v24 )
            {
              if ( v25 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rdi]; to
                  vmovss  xmm0, dword ptr [r14]; from
                  vmovaps xmm2, xmm6; lerp
                }
                *(float *)&_XMM0 = CG_VisionSetLerpFloat(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, style);
                __asm
                {
                  vmovss  dword ptr [rbx], xmm0
                  vmovss  xmm1, dword ptr [rdi+4]; to
                  vmovss  xmm0, dword ptr [r14+4]; from
                  vmovaps xmm2, xmm6; lerp
                }
                *(float *)&_XMM0 = CG_VisionSetLerpFloat(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, style);
                __asm
                {
                  vmovss  dword ptr [rbx+4], xmm0
                  vmovss  xmm1, dword ptr [rdi+8]; to
                  vmovss  xmm0, dword ptr [r14+8]; from
                  vmovaps xmm2, xmm6; lerp
                }
                *(float *)&_XMM0 = CG_VisionSetLerpFloat(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, style);
                __asm { vmovss  dword ptr [rbx+8], xmm0 }
              }
              else
              {
                *(_DWORD *)_RBX = *(_DWORD *)_R14;
                *((_DWORD *)_RBX + 1) = *((_DWORD *)_R14 + 1);
                __asm
                {
                  vmovss  xmm0, dword ptr [r14+8]
                  vmovss  dword ptr [rbx+8], xmm0
                }
              }
            }
            else
            {
              *(_DWORD *)_RBX = *(_DWORD *)_RDI;
              *((_DWORD *)_RBX + 1) = *((_DWORD *)_RDI + 1);
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+8]
                vmovss  dword ptr [rbx+8], xmm0
              }
            }
          }
          else
          {
            if ( (unsigned int)(v30 - 3) > 2 )
            {
              CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1577, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
              __debugbreak();
            }
            if ( v24 )
            {
              if ( v25 )
              {
                __asm
                {
                  vmovaps xmm2, xmm6; lerp
                  vmovaps xmm1, xmm7; to
                  vmovaps xmm0, xmm8; from
                }
                *(float *)&_XMM0 = CG_VisionSetLerpFloat(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, style);
                __asm { vmovaps xmm2, xmm0; t }
                CG_VisionSetLerpAssetBlendSet((const CG_VisionSet_AssetBlendSet *)_R14, (const CG_VisionSet_AssetBlendSet *)_RDI, *(float *)&_XMM2, (CG_VisionSet_AssetBlendSet *)_RBX);
              }
              else
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [r14]
                  vmovups xmmword ptr [rbx], xmm0
                }
                *((_WORD *)_RBX + 8) = *((_WORD *)_R14 + 8);
              }
            }
            else
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [rdi]
                vmovups xmmword ptr [rbx], xmm0
              }
              *((_WORD *)_RBX + 8) = *((_WORD *)_RDI + 8);
            }
          }
          goto LABEL_58;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r14]; from
          vmovss  xmm1, dword ptr [rdi]; to
        }
        if ( v24 )
        {
          if ( v25 )
          {
            __asm { vmovaps xmm2, xmm6; lerp }
            *(float *)&_XMM0 = CG_VisionSetLerpFloat(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, style);
            __asm { vmovss  dword ptr [rbx], xmm0 }
            goto LABEL_58;
          }
        }
        else
        {
          __asm { vmovaps xmm0, xmm1 }
        }
        __asm { vmovss  dword ptr [rbx], xmm0 }
        goto LABEL_58;
      }
      v51 = *_R14;
      v52 = *_RDI;
      if ( v24 )
      {
        if ( !v25 )
        {
          *_RBX = v51;
          goto LABEL_58;
        }
        if ( v52 || v51 )
          v52 = 1;
      }
      *_RBX = v52;
LABEL_58:
      v11 = a;
      goto LABEL_59;
    }
    if ( v20 >= 0xE0 )
    {
      LODWORD(v59) = 224;
      LODWORD(v58) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v58, v59) )
        __debugbreak();
    }
    result->inUse.array[v22] &= ~v23;
LABEL_59:
    ++v20;
    p_fieldType += 10;
    if ( (int)v20 >= 218 )
      break;
    v10 = b;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
    vmovaps xmm8, [rsp+0B8h+var_68]
  }
}

/*
==============
CG_VisionSetLerpAssetBlendSet
==============
*/

void __fastcall CG_VisionSetLerpAssetBlendSet(const CG_VisionSet_AssetBlendSet *fromAssetBlendSet, const CG_VisionSet_AssetBlendSet *toAssetBlendSet, double t, CG_VisionSet_AssetBlendSet *outAssetBlendSet)
{
  bool v12; 
  int v17; 
  int v18; 
  __int64 v19; 
  unsigned int v21; 
  int v22; 
  int v23; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  unsigned __int8 v27; 
  unsigned __int8 v28; 
  unsigned __int8 v29; 
  unsigned int v35; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v42; 
  bool v45; 
  __int64 v48; 
  char v49; 
  char v52; 
  unsigned int v53; 
  unsigned int v59; 
  unsigned int v60; 
  int v61; 
  __int64 v66; 
  unsigned int v67; 
  unsigned __int8 v68; 
  unsigned __int8 v69; 
  unsigned __int8 m_weight; 
  CG_VisionSet_AssetBlendSet *v71; 
  CG_VisionSet_AssetBlendSet *v72; 
  unsigned __int8 m_assetIndex; 
  CG_VisionSet_AssetBlendSet *v74; 
  CG_VisionSet_AssetBlendSet *v75; 
  CG_VisionSet_AssetBlendSet *v76; 
  unsigned __int8 v77; 
  CG_VisionSet_AssetBlendSet *v78; 
  CG_VisionSet_AssetBlend v79; 
  _QWORD v84[2]; 
  _BYTE v85[81]; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmm6, xmm2
  }
  if ( (!fromAssetBlendSet->m_assets[0].m_weight || !toAssetBlendSet->m_assets[0].m_weight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1362, ASSERT_TYPE_ASSERT, "(fromAssetBlendSet->m_assets[0].m_weight && toAssetBlendSet->m_assets[0].m_weight)", (const char *)&queryFormat, "fromAssetBlendSet->m_assets[0].m_weight && toAssetBlendSet->m_assets[0].m_weight") )
    __debugbreak();
  v12 = fromAssetBlendSet->m_assets[0].m_weight == 0;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm7, xmm1, cs:__real@3b808081
    vmulss  xmm6, xmm6, cs:__real@3b808081
  }
  LOWORD(v84[0]) = 255;
  if ( !v12 )
  {
    v17 = 1;
    while ( fromAssetBlendSet->m_assets[v17].m_weight )
    {
      if ( fromAssetBlendSet->m_assets[v17 - 1].m_assetIndex >= fromAssetBlendSet->m_assets[v17].m_assetIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1375, ASSERT_TYPE_ASSERT, "(CG_VisionSet_AreAssetsSortedByIndex( fromAssetBlendSet->m_assets ))", (const char *)&queryFormat, "CG_VisionSet_AreAssetsSortedByIndex( fromAssetBlendSet->m_assets )", v84[0]) )
          __debugbreak();
        break;
      }
      if ( ++v17 == 9 )
        break;
    }
  }
  if ( toAssetBlendSet->m_assets[0].m_weight )
  {
    v18 = 1;
    while ( toAssetBlendSet->m_assets[v18].m_weight )
    {
      if ( toAssetBlendSet->m_assets[v18 - 1].m_assetIndex >= toAssetBlendSet->m_assets[v18].m_assetIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1376, ASSERT_TYPE_ASSERT, "(CG_VisionSet_AreAssetsSortedByIndex( toAssetBlendSet->m_assets ))", (const char *)&queryFormat, "CG_VisionSet_AreAssetsSortedByIndex( toAssetBlendSet->m_assets )") )
          __debugbreak();
        break;
      }
      if ( ++v18 == 9 )
        break;
    }
  }
  v19 = 0i64;
  LODWORD(_RDI) = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  while ( 1 )
  {
    v25 = (unsigned __int8 *)(v22 == 9 ? v84 : &fromAssetBlendSet->m_assets[v22]);
    v26 = (unsigned __int8 *)(v23 == 9 ? v84 : &toAssetBlendSet->m_assets[v23]);
    v27 = v26[1];
    if ( !v25[1] )
      break;
    v28 = *v25;
LABEL_32:
    v29 = -1;
    if ( v27 )
      v29 = *v26;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm2, xmm0, xmm7
      vmulss  xmm0, xmm1, xmm6
    }
    if ( v28 == v29 )
    {
      __asm { vaddss  xmm2, xmm0, xmm2 }
      ++v22;
    }
    else
    {
      if ( v28 < v29 )
      {
        ++v22;
        goto LABEL_40;
      }
      v28 = v29;
      __asm { vmovaps xmm2, xmm0 }
    }
    ++v23;
LABEL_40:
    _RAX = (unsigned int)_RDI;
    LODWORD(_RDI) = _RDI + 1;
    __asm
    {
      vaddss  xmm8, xmm8, xmm2
      vmovss  [rsp+rax*4+108h+var_C8], xmm2
    }
    v85[_RAX + 80] = v28;
    v35 = v21 + 1;
    if ( !v28 )
      v35 = v21;
    v21 = v35;
  }
  if ( v27 )
  {
    v28 = -1;
    goto LABEL_32;
  }
  if ( !(_DWORD)_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 124, ASSERT_TYPE_ASSERT, "(assetCount > 0)", (const char *)&queryFormat, "assetCount > 0") )
    __debugbreak();
  if ( (_DWORD)_RDI != 1 )
  {
    if ( (_DWORD)_RDI == 2 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_C8]
        vmovss  xmm1, [rsp+108h+var_C4]
        vcomiss xmm1, xmm0
      }
    }
    else
    {
      v38 = 0;
      if ( (_DWORD)_RDI )
      {
        do
        {
          v39 = v38 + 1;
          _R10 = v38;
          LODWORD(_R8) = v38;
          v42 = v38 + 1;
          __asm
          {
            vmovss  xmm2, [rsp+r10*4+108h+var_C8]
            vmovaps xmm1, xmm2
          }
          v45 = v38 + 1 <= (unsigned int)_RDI;
          if ( v38 + 1 != (_DWORD)_RDI )
          {
            do
            {
              _RAX = v42;
              __asm
              {
                vmovss  xmm0, [rsp+rax*4+108h+var_C8]
                vcomiss xmm0, xmm1
              }
              v48 = v42;
              if ( v45 )
                v48 = (unsigned int)_R8;
              ++v42;
              _R8 = (unsigned int)v48;
              __asm { vmaxss  xmm1, xmm0, xmm1 }
              v45 = v42 <= (unsigned int)_RDI;
            }
            while ( v42 != (_DWORD)_RDI );
            if ( (_DWORD)v48 != v38 )
            {
              v49 = v85[v38 + 80];
              v85[v38 + 80] = v85[v48 + 80];
              *(_DWORD *)&v85[4 * v38] = *(_DWORD *)&v85[4 * (unsigned int)v48];
              __asm { vmovss  [rsp+r8*4+108h+var_C8], xmm2 }
              v85[(unsigned int)v48 + 80] = v49;
            }
          }
          ++v38;
        }
        while ( v39 != (_DWORD)_RDI );
      }
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@437f0000
    vmovss  xmm6, cs:__real@3f000000
  }
  if ( v21 > 8 )
  {
    v52 = 0;
    do
    {
      _RDI = (unsigned int)(_RDI - 1);
      v53 = v21 - 1;
      __asm { vmovss  xmm3, [rsp+rdi*4+108h+var_C8] }
      if ( !v85[_RDI + 80] )
        v53 = v21;
      v21 = v53;
      __asm
      {
        vmulss  xmm0, xmm3, xmm7
        vdivss  xmm1, xmm0, xmm8
        vaddss  xmm2, xmm1, xmm6
        vcvttss2si rax, xmm2
        vsubss  xmm8, xmm8, xmm3
      }
      if ( (_DWORD)_RAX )
        v52 = 1;
    }
    while ( v21 > 8 );
    if ( v52 )
      R_WarnOncePerFrame(R_WARN_TOO_MANY_VISIONSET_ASSETS, 8i64);
  }
  v59 = 255;
  v60 = 0;
  v61 = 0;
  __asm { vdivss  xmm2, xmm7, xmm8 }
  if ( (_DWORD)_RDI )
  {
    do
    {
      __asm
      {
        vmulss  xmm0, xmm2, [rsp+rax*4+108h+var_C8]
        vaddss  xmm1, xmm0, xmm6
        vcvttss2si rdx, xmm1
      }
      if ( (unsigned int)_RDX > v59 )
        LODWORD(_RDX) = v59;
      if ( (_DWORD)_RDX )
      {
        v59 -= _RDX;
        v66 = v60++;
        outAssetBlendSet->m_assets[v66].m_assetIndex = v85[v61 + 80];
        outAssetBlendSet->m_assets[v66].m_weight = _RDX;
      }
      ++v61;
    }
    while ( v61 != (_DWORD)_RDI );
  }
  for ( ; v59; v59 -= v67 )
  {
    if ( (_DWORD)v19 == v60 )
      break;
    v67 = (v60 - (_DWORD)v19 + v59 - 1) / (v60 - (unsigned int)v19);
    outAssetBlendSet->m_assets[v19].m_weight += v67;
    v19 = (unsigned int)(v19 + 1);
  }
  if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 171, ASSERT_TYPE_ASSERT, "(assetCount > 0)", (const char *)&queryFormat, "assetCount > 0") )
    __debugbreak();
  if ( v60 == 1 )
  {
LABEL_92:
    if ( v60 < 9 )
      goto LABEL_93;
    goto LABEL_94;
  }
  if ( v60 != 2 )
  {
    v71 = outAssetBlendSet;
    v72 = (CG_VisionSet_AssetBlendSet *)((char *)outAssetBlendSet + 2 * v60);
    if ( outAssetBlendSet != v72 )
    {
      do
      {
        m_assetIndex = v71->m_assets[0].m_assetIndex;
        v74 = (CG_VisionSet_AssetBlendSet *)&v71->m_assets[1];
        v75 = v71;
        v76 = (CG_VisionSet_AssetBlendSet *)&v71->m_assets[1];
        if ( &v71->m_assets[1] != (CG_VisionSet_AssetBlend *)v72 )
        {
          do
          {
            v77 = v76->m_assets[0].m_assetIndex;
            v78 = v76;
            if ( v76->m_assets[0].m_assetIndex >= m_assetIndex )
              v78 = v75;
            v76 = (CG_VisionSet_AssetBlendSet *)((char *)v76 + 2);
            v75 = v78;
            if ( v77 >= m_assetIndex )
              v77 = m_assetIndex;
            m_assetIndex = v77;
          }
          while ( v76 != v72 );
          if ( v78 != v71 )
          {
            v79 = v71->m_assets[0];
            v71->m_assets[0] = v75->m_assets[0];
            v75->m_assets[0] = v79;
          }
        }
        v71 = (CG_VisionSet_AssetBlendSet *)((char *)v71 + 2);
      }
      while ( v74 != v72 );
    }
    goto LABEL_92;
  }
  v68 = outAssetBlendSet->m_assets[0].m_assetIndex;
  v69 = outAssetBlendSet->m_assets[1].m_assetIndex;
  m_weight = outAssetBlendSet->m_assets[0].m_weight;
  if ( v69 < outAssetBlendSet->m_assets[0].m_assetIndex )
  {
    outAssetBlendSet->m_assets[0].m_assetIndex = v69;
    outAssetBlendSet->m_assets[0].m_weight = outAssetBlendSet->m_assets[1].m_weight;
    outAssetBlendSet->m_assets[1].m_assetIndex = v68;
    outAssetBlendSet->m_assets[1].m_weight = m_weight;
  }
LABEL_93:
  outAssetBlendSet->m_assets[v60].m_weight = 0;
LABEL_94:
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_VisionSetLerpFloat
==============
*/

float __fastcall CG_VisionSetLerpFloat(double from, double to, double lerp, const visionSetLerpStyle_t style)
{
  __asm
  {
    vmovaps xmm3, xmm2
    vmovaps xmm5, xmm1
    vmovaps xmm4, xmm0
  }
  if ( style == VISIONSETLERP_LINEAR )
  {
    __asm
    {
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm2
      vaddss  xmm0, xmm2, xmm0
    }
  }
  else if ( style )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1340, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported visionSetLerpStyle_t") )
      __debugbreak();
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm3, cs:__real@40000000
      vmovss  xmm0, cs:__real@40400000
      vsubss  xmm2, xmm0, xmm1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm3, xmm0
      vaddss  xmm0, xmm2, xmm4
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_VisionSetLoadDefault
==============
*/
void CG_VisionSetLoadDefault(ClientVisionSetData *cvsData, const char *mapname)
{
  char *name; 
  __int64 v5; 
  char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  __int64 v11; 
  __int64 v18; 
  char dest[64]; 

  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2226, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !*mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2227, ASSERT_TYPE_ASSERT, "(mapname[0])", (const char *)&queryFormat, "mapname[0]") )
    __debugbreak();
  Com_sprintf(dest, 0x40ui64, "vision/%s.vision", mapname);
  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1069, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  name = cvsData->archived.visionLeaves[20].name;
  v5 = 0x7FFFFFFFi64;
  if ( cvsData == (ClientVisionSetData *)-25000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v6 = (char *)(dest - name);
  do
  {
    v7 = name[(_QWORD)v6];
    v8 = v5;
    v9 = *name++;
    --v5;
    if ( !v8 )
      break;
    if ( v7 != v9 )
    {
      if ( !CG_VisionSetGetVisionSet(dest, &cvsData->archived.visionLeaves[20]) )
        Com_PrintError(14, "Failed to load visionset of name '%s'\n", dest);
      break;
    }
  }
  while ( v7 );
  _RDX = &cvsData->archived.visionLeaves[21];
  v11 = 9i64;
  _R8 = &cvsData->archived.visionLeaves[20];
  do
  {
    _RDX = (visionSetVars_t *)((char *)_RDX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [r8]
      vmovups xmm1, xmmword ptr [r8+70h]
    }
    _R8 = (visionSetVars_t *)((char *)_R8 + 128);
    __asm
    {
      vmovups ymmword ptr [rdx-80h], ymm0
      vmovups ymm0, ymmword ptr [r8-60h]
      vmovups ymmword ptr [rdx-60h], ymm0
      vmovups ymm0, ymmword ptr [r8-40h]
      vmovups ymmword ptr [rdx-40h], ymm0
      vmovups xmm0, xmmword ptr [r8-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v11;
  }
  while ( v11 );
  v18 = *(_QWORD *)&_R8->r_viewModelLightAmbient.y;
  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rdx], ymm0
  }
  *(_QWORD *)&_RDX->r_viewModelLightAmbient.y = v18;
  _RDX->r_lightTweakUVIntensityScale = _R8->r_lightTweakUVIntensityScale;
  cvsData->archived.visionBlends[17].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  CG_VisionSetValidateIsComplete(cvsData, VISIONSET_LEAFTYPE_DEFAULT);
  CG_VisionSetDefaultAlternates(cvsData);
}

/*
==============
CG_VisionSetLoadVisionArtTweaks
==============
*/
bool CG_VisionSetLoadVisionArtTweaks(ClientVisionSetData *cvsData, const char *buffer)
{
  int m_type; 
  int v6; 
  unsigned __int8 m_index; 
  visionSetBlend_t *v8; 
  unsigned __int8 v9; 
  visionSetVars_t *v10; 

  if ( !cvsData->archived.visionInitialized )
    return 0;
  m_type = (unsigned __int8)cvsData->archived.visionBlends[0].childRefs[0].m_type;
  if ( m_type )
  {
    v6 = m_type - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 259, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
        __debugbreak();
      }
      m_index = cvsData->archived.visionBlends[0].childRefs[0].m_index;
      if ( m_index >= 0x18u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 255, ASSERT_TYPE_ASSERT, "(blendIndex < ( sizeof( *array_counter( cvsData->archived.visionBlends ) ) + 0 ))", (const char *)&queryFormat, "blendIndex < ARRAY_COUNT( cvsData->archived.visionBlends )") )
        __debugbreak();
      v8 = &cvsData->archived.visionBlends[m_index];
    }
    else
    {
      v9 = cvsData->archived.visionBlends[0].childRefs[0].m_index;
      if ( v9 >= 0x19u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 249, ASSERT_TYPE_ASSERT, "(leafIndex < ( sizeof( *array_counter( cvsData->archived.visionLeaves ) ) + 0 ))", (const char *)&queryFormat, "leafIndex < ARRAY_COUNT( cvsData->archived.visionLeaves )") )
        __debugbreak();
      v8 = (visionSetBlend_t *)&cvsData->archived.visionLeaves[v9];
    }
  }
  else
  {
    v8 = NULL;
  }
  v10 = &cvsData->archived.visionLeaves[1];
  if ( v8 != (visionSetBlend_t *)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 270, ASSERT_TYPE_ASSERT, "(CG_VisionSet_GetChild( cvsData, &cvsData->archived.visionBlends[VISIONSET_BLENDTYPE_ROOT].childRefs[0] ) == &cvsData->archived.visionLeaves[VISIONSET_LEAFTYPE_ART_TWEAKS])", (const char *)&queryFormat, "CG_VisionSet_GetChild( cvsData, &cvsData->archived.visionBlends[VISIONSET_BLENDTYPE_ROOT].childRefs[0] ) == &cvsData->archived.visionLeaves[VISIONSET_LEAFTYPE_ART_TWEAKS]") )
    __debugbreak();
  return CG_VisionSetLoadVisionSettingsFromBuffer(buffer, "Rembrandt", v10);
}

/*
==============
CG_VisionSetMapInit
==============
*/
void CG_VisionSetMapInit(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const char *visionSetName; 
  cg_t_vtbl *v3; 
  int v4; 
  int v5; 
  ClientVisionSetData *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2261, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2262, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
    __debugbreak();
  visionSetName = cm.visionSetName;
  if ( !cm.visionSetName )
  {
    if ( cls.m_activeGameMapName[0] == LOBYTE(cm.visionSetName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
      __debugbreak();
    visionSetName = cls.m_activeGameMapName;
  }
  CG_VisionSetBuildBlendTree(&LocalClientGlobals->cvsData);
  CG_VisionSetLoadDefault(&LocalClientGlobals->cvsData, visionSetName);
  CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_NVG_FADE, HARDCODED_NVG_BLOOM_TRANSITION_VISIONSETNAME);
  CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_NVG_EXPOSURE, HARDCODED_NVG_EXPOSURE_TRANSITION_VISIONSETNAME);
  CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_NVG_BLIND, HARDCODED_NVG_BLIND_VISIONSETNAME);
  CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_NVG_BLIND_WEIGHTED, HARDCODED_NVG_BLIND_WEIGHTED_VISIONSETNAME);
  v3 = LocalClientGlobals->__vftable;
  LocalClientGlobals->cvsData.archived.visionInitialized = 1;
  v4 = 0;
  v5 = v3->GetPIPViewCount(LocalClientGlobals);
  if ( v5 > 0 )
  {
    do
    {
      v6 = LocalClientGlobals->GetPIPVisionSetData(LocalClientGlobals, v4);
      CG_VisionSetBuildBlendTree(v6);
      CG_VisionSetLoadDefault(v6, visionSetName);
      v7 = HARDCODED_NVG_BLOOM_TRANSITION_VISIONSETNAME;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1069, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      if ( I_strncmp(v7, v6->archived.visionLeaves[5].name, 0x7FFFFFFFui64) && !CG_VisionSetGetVisionSet(v7, &v6->archived.visionLeaves[5]) )
        Com_PrintError(14, "Failed to load visionset of name '%s'\n", v7);
      v8 = HARDCODED_NVG_EXPOSURE_TRANSITION_VISIONSETNAME;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1069, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      if ( I_strncmp(v8, v6->archived.visionLeaves[10].name, 0x7FFFFFFFui64) && !CG_VisionSetGetVisionSet(v8, &v6->archived.visionLeaves[10]) )
        Com_PrintError(14, "Failed to load visionset of name '%s'\n", v8);
      v9 = HARDCODED_NVG_BLIND_VISIONSETNAME;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1069, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      if ( I_strncmp(v9, v6->archived.visionLeaves[7].name, 0x7FFFFFFFui64) && !CG_VisionSetGetVisionSet(v9, &v6->archived.visionLeaves[7]) )
        Com_PrintError(14, "Failed to load visionset of name '%s'\n", v9);
      v10 = HARDCODED_NVG_BLIND_WEIGHTED_VISIONSETNAME;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1069, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      if ( I_strncmp(v10, v6->archived.visionLeaves[8].name, 0x7FFFFFFFui64) )
      {
        if ( !CG_VisionSetGetVisionSet(v10, &v6->archived.visionLeaves[8]) )
          Com_PrintError(14, "Failed to load visionset of name '%s'\n", v10);
      }
      ++v4;
      v6->archived.visionInitialized = 1;
    }
    while ( v4 < v5 );
  }
}

/*
==============
CG_VisionSetMergeBlendToLeaf
==============
*/
void CG_VisionSetMergeBlendToLeaf(ClientVisionSetData *cvsData, const int time, const visionSetCodeBlendType_t blend, const visionSetCodeLeafType_t leaf)
{
  __int64 v7; 
  __int64 v20; 
  __int64 v21; 

  if ( (unsigned __int8)leaf >= VISIONSET_LEAFTYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1619, ASSERT_TYPE_ASSERT, "(unsigned)( leaf ) < (unsigned)( VISIONSET_LEAFTYPE_COUNT )", "leaf doesn't index VISIONSET_LEAFTYPE_COUNT\n\t%i not in [0, %i)", (unsigned __int8)leaf, 25) )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v21) = 24;
    LODWORD(v20) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1620, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  v7 = 9i64;
  _RAX = &cvsData->archived.visionBlends[(unsigned __int8)blend];
  _R8 = &cvsData->archived.visionLeaves[(unsigned __int8)leaf];
  do
  {
    _R8 = (visionSetVars_t *)((char *)_R8 + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (visionSetBlend_t *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [r8-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [r8-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [r8-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [r8-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [r8-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [r8-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [r8-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [r8-10h], xmm1
    }
    --v7;
  }
  while ( v7 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [r8], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [r8+10h], xmm1
  }
  *(_QWORD *)&_R8->r_viewModelLightAmbient.y = *(_QWORD *)&_RAX->r_viewModelLightAmbient.y;
  _R8->r_lightTweakUVIntensityScale = _RAX->r_lightTweakUVIntensityScale;
}

/*
==============
CG_VisionSetMyChanges
==============
*/
void CG_VisionSetMyChanges(void)
{
  unsigned int v0; 
  cg_t **v1; 
  connstate_t *p_connectionState; 
  const char *name; 
  __int64 v4; 
  unsigned int v5; 
  _DWORD *v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  Mem_LargeLocal v10; 
  connstate_t *v11; 
  cg_t *v12; 

  v0 = 0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v1 = cg_t::ms_cgArray;
    p_connectionState = &clientUIActives[0].connectionState;
    v11 = &clientUIActives[0].connectionState;
    do
    {
      if ( v0 >= 2 )
      {
        LODWORD(v9) = 2;
        LODWORD(v8) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
      {
        if ( v0 >= cg_t::ms_allocatedCount )
        {
          LODWORD(v9) = cg_t::ms_allocatedCount;
          LODWORD(v8) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        if ( !*v1 )
        {
          LODWORD(v9) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v9) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
        {
          LODWORD(v9) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v9) )
            __debugbreak();
        }
        v12 = *v1;
        if ( (*v1)->nextSnap )
        {
          name = (*v1)->cvsData.archived.visionLeaves[0].name;
          v4 = 25i64;
          do
          {
            Mem_LargeLocal::Mem_LargeLocal(&v10, 0x18000ui64, "max_raw_buf buf");
            if ( *name )
            {
              v7 = RawBufferOpen(name, (const char *)&queryFormat, (char *)v10.m_ptr, 98304);
              if ( v7 && !CG_VisionSetLoadVisionSettingsFromBuffer(v7, name, (visionSetVars_t *)(name - 1080)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2094, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tMyChanges failed to reload visionset of name %s", "success", name) )
                __debugbreak();
            }
            else
            {
              v5 = 0;
              v6 = name + 64;
              while ( !*v6 )
              {
                ++v5;
                ++v6;
                if ( v5 >= 7 )
                {
                  *((_DWORD *)name - 197) = s_CG_VisionSet.m_resetCounter;
                  goto LABEL_30;
                }
              }
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2085, ASSERT_TYPE_ASSERT, "(cgameGlob->cvsData.archived.visionLeaves[i].inUse.noBitsOn())", (const char *)&queryFormat, "cgameGlob->cvsData.archived.visionLeaves[i].inUse.noBitsOn()") )
                __debugbreak();
              *((_DWORD *)name - 197) = s_CG_VisionSet.m_resetCounter;
            }
LABEL_30:
            Mem_LargeLocal::~Mem_LargeLocal(&v10);
            name += 1196;
            --v4;
          }
          while ( v4 );
          CG_VisionSetValidateIsComplete(&v12->cvsData, VISIONSET_LEAFTYPE_DEFAULT);
          p_connectionState = v11;
        }
      }
      ++v0;
      p_connectionState += 110;
      v11 = p_connectionState;
      ++v1;
    }
    while ( (int)v0 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
CG_VisionSetParamCmd
==============
*/
void CG_VisionSetParamCmd(const LocalClientNum_t localClientNum, const int duration, const char *kvps)
{
  cg_t *LocalClientGlobals; 
  ClientVisionSetData *p_cvsData; 
  __int64 v11; 
  int time; 
  int v24; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_cvsData = &LocalClientGlobals->cvsData;
  CG_VisionSetUpdateToNode(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B);
  *(double *)&_XMM0 = CG_VisionSetGetLerp(&LocalClientGlobals->cvsData.archived.visionBlends[16], LocalClientGlobals->time);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  *(_QWORD *)LocalClientGlobals->cvsData.archived.visionBlends[21].inUse.array = 0i64;
  *(_QWORD *)&LocalClientGlobals->cvsData.archived.visionBlends[21].inUse.array[2] = 0i64;
  *(_QWORD *)&LocalClientGlobals->cvsData.archived.visionBlends[21].inUse.array[4] = 0i64;
  LocalClientGlobals->cvsData.archived.visionBlends[21].inUse.array[6] = 0;
  _RCX = &LocalClientGlobals->cvsData.archived.visionLeaves[23];
  v11 = 9i64;
  _RDX = &LocalClientGlobals->cvsData.archived.visionBlends[21];
  do
  {
    _RCX = (visionSetVars_t *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rdx] }
    _RDX = (visionSetBlend_t *)((char *)_RDX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rdx-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rdx-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rdx-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rdx-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rdx-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rdx-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v11;
  }
  while ( v11 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
  }
  *(_QWORD *)&_RCX->r_viewModelLightAmbient.y = *(_QWORD *)&_RDX->r_viewModelLightAmbient.y;
  _RCX->r_lightTweakUVIntensityScale = _RDX->r_lightTweakUVIntensityScale;
  time = LocalClientGlobals->time;
  if ( LocalClientGlobals == (cg_t *)-304604i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 982, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( duration )
  {
    if ( LocalClientGlobals->cvsData.transitory.playbackDelta < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 994, ASSERT_TYPE_ASSERT, "(cvsData->transitory.playbackDelta >= 0)", (const char *)&queryFormat, "cvsData->transitory.playbackDelta >= 0") )
      __debugbreak();
    v24 = 1;
    LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.timeData.startTime = time - LocalClientGlobals->cvsData.transitory.playbackDelta;
    LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.timeData.forward = 1;
    LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.timeData.duration = duration;
  }
  else
  {
    v24 = 3;
  }
  LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.type = v24;
  LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.style = VISIONSETLERP_SMOOTH;
  CG_VisionSetRegisterLeafByParameters(p_cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, kvps);
  CG_VisionSetScriptOverride(p_cvsData, kvps, LocalClientGlobals->time, duration);
}

/*
==============
CG_VisionSetRegisterBlendStart
==============
*/
void CG_VisionSetRegisterBlendStart(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time, const int duration, const int forward, const visionSetLerpStyle_t style)
{
  __int64 v10; 
  __int64 v11; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 982, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v11) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 983, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v11, 24) )
      __debugbreak();
  }
  if ( CG_VisionSetIsBlending(cvsData, blend, time) && blend != VISIONSET_BLENDTYPE_SCRIPT_BLEND && blend != VISIONSET_BLENDTYPE_NVG_BLIND )
    Com_PrintWarning(1, "Blend node %d is in the middle of a blend. This will stop the current blend and start a new blend.", (unsigned __int8)blend);
  if ( duration )
  {
    if ( cvsData->transitory.playbackDelta < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 994, ASSERT_TYPE_ASSERT, "(cvsData->transitory.playbackDelta >= 0)", (const char *)&queryFormat, "cvsData->transitory.playbackDelta >= 0") )
      __debugbreak();
    v10 = (unsigned __int8)blend;
    cvsData->archived.visionBlends[v10].lerpInfo.timeData.startTime = time - cvsData->transitory.playbackDelta;
    cvsData->archived.visionBlends[v10].lerpInfo.timeData.duration = duration;
    cvsData->archived.visionBlends[v10].lerpInfo.timeData.forward = forward;
    cvsData->archived.visionBlends[v10].lerpInfo.type = VISIONSETBLENDTYPE_TIME;
  }
  else
  {
    v10 = (unsigned __int8)blend;
    cvsData->archived.visionBlends[v10].lerpInfo.type = (forward != 0) + 2;
  }
  cvsData->archived.visionBlends[v10].lerpInfo.style = style;
}

/*
==============
CG_VisionSetRegisterLeafByFile
==============
*/
bool CG_VisionSetRegisterLeafByFile(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *name)
{
  bool VisionSet; 
  __int64 v11; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1069, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)leaf >= VISIONSET_LEAFTYPE_COUNT )
  {
    LODWORD(v11) = (unsigned __int8)leaf;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1070, ASSERT_TYPE_ASSERT, "(unsigned)( leaf ) < (unsigned)( VISIONSET_LEAFTYPE_COUNT )", "leaf doesn't index VISIONSET_LEAFTYPE_COUNT\n\t%i not in [0, %i)", v11, 25) )
      __debugbreak();
  }
  _RDI = &cvsData->archived.visionLeaves[(unsigned __int8)leaf];
  if ( !I_strncmp(name, _RDI->name, 0x7FFFFFFFui64) )
    return 0;
  VisionSet = CG_VisionSetGetVisionSet(name, _RDI);
  if ( !VisionSet )
    Com_PrintError(14, "Failed to load visionset of name '%s'\n", name);
  if ( leaf == VISIONSET_LEAFTYPE_NIGHTVISION )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rdi+2FCh]
    }
    Com_PrintWarning(14, "Vision Set Night called on a vision set that does not have night vision enabled.\n");
  }
  return VisionSet;
}

/*
==============
CG_VisionSetRegisterLeafByFileSimple
==============
*/
void CG_VisionSetRegisterLeafByFileSimple(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *name)
{
  char dest[64]; 

  Com_sprintf(dest, 0x40ui64, "vision/%s.vision", name);
  CG_VisionSetRegisterLeafByFile(cvsData, leaf, dest);
}

/*
==============
CG_VisionSetRegisterLeafByParameters
==============
*/
void CG_VisionSetRegisterLeafByParameters(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *kvps)
{
  char *v5; 
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  const char *v9; 
  visionSetVars_t *v10; 
  signed int v11; 
  visField_t *v12; 
  const char *name; 
  __int64 v14; 
  char *v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  const char *v19; 
  __int64 v20; 
  char *filename; 
  __int64 v22; 
  char dest[64]; 
  char token[64]; 

  filename = (char *)kvps;
  if ( !kvps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1146, ASSERT_TYPE_ASSERT, "(kvps)", (const char *)&queryFormat, "kvps") )
    __debugbreak();
  if ( (unsigned __int8)leaf >= VISIONSET_LEAFTYPE_COUNT )
  {
    LODWORD(v20) = (unsigned __int8)leaf;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1119, ASSERT_TYPE_ASSERT, "(unsigned)( leaf ) < (unsigned)( VISIONSET_LEAFTYPE_COUNT )", "leaf doesn't index VISIONSET_LEAFTYPE_COUNT\n\t%i not in [0, %i)", v20, 25) )
      __debugbreak();
  }
  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1120, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  v5 = filename;
  v6 = (unsigned __int8)leaf;
  v7 = (unsigned __int8)leaf;
  v22 = (unsigned __int8)leaf;
  *(_QWORD *)cvsData->archived.visionLeaves[v7].inUse.array = 0i64;
  *(_QWORD *)&cvsData->archived.visionLeaves[v7].inUse.array[2] = 0i64;
  *(_QWORD *)&cvsData->archived.visionLeaves[v7].inUse.array[4] = 0i64;
  cvsData->archived.visionLeaves[v7].inUse.array[6] = 0;
  Com_BeginParseSession(v5);
  v8 = Com_Parse((const char **)&filename);
  Core_strcpy(dest, 0x40ui64, v8);
  for ( ; dest[0]; v6 = v22 )
  {
    v9 = Com_Parse((const char **)&filename);
    Core_strcpy(token, 0x40ui64, v9);
    if ( !token[0] )
      break;
    if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1097, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
      __debugbreak();
    v10 = &cvsData->archived.visionLeaves[v6];
    if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1101, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
      __debugbreak();
    if ( v10->assetTableResetCounter != s_CG_VisionSet.m_resetCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1102, ASSERT_TYPE_ASSERT, "(vision->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", (const char *)&queryFormat, "vision->assetTableResetCounter == s_CG_VisionSet.m_resetCounter") )
      __debugbreak();
    v11 = 0;
    v12 = visionDefFields;
    do
    {
      name = v12->name;
      v14 = 0x7FFFFFFFi64;
      if ( !v12->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v15 = (char *)(dest - name);
      do
      {
        v16 = name[(_QWORD)v15];
        v17 = v14;
        v18 = *name++;
        --v14;
        if ( !v17 )
          break;
        if ( v16 != v18 )
          goto LABEL_30;
      }
      while ( v16 );
      CG_VisionSetApplyTokenToField(v11, token, v10);
LABEL_30:
      ++v11;
      ++v12;
    }
    while ( v11 < 218 );
    v19 = Com_Parse((const char **)&filename);
    Core_strcpy(dest, 0x40ui64, v19);
  }
  Com_EndParseSession();
}

/*
==============
CG_VisionSetReverseBlend
==============
*/
void CG_VisionSetReverseBlend(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time, const int duration)
{
  __int64 v9; 
  __int64 v27; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1018, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v27) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1019, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v27, 24) )
      __debugbreak();
  }
  v9 = (unsigned __int8)blend;
  if ( cvsData->archived.visionBlends[v9].lerpInfo.type != VISIONSETBLENDTYPE_TIME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1022, ASSERT_TYPE_ASSERT, "(blendNode->lerpInfo.type == VISIONSETBLENDTYPE_TIME)", (const char *)&queryFormat, "blendNode->lerpInfo.type == VISIONSETBLENDTYPE_TIME") )
    __debugbreak();
  if ( !cvsData->archived.visionBlends[v9].lerpInfo.timeData.duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1024, ASSERT_TYPE_ASSERT, "(blendNode->lerpInfo.timeData.duration)", (const char *)&queryFormat, "blendNode->lerpInfo.timeData.duration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+rbx+7988h]
  }
  cvsData->archived.visionBlends[v9].lerpInfo.timeData.forward = cvsData->archived.visionBlends[v9].lerpInfo.timeData.forward == 0;
  __asm
  {
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, esi
    vcvtsi2ss xmm1, xmm1, esi
    vdivss  xmm2, xmm1, xmm0
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebp
    vmulss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm4, xmm2
    vaddss  xmm4, xmm1, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm4, 1
    vcvttss2si eax, xmm3
  }
  cvsData->archived.visionBlends[v9].lerpInfo.timeData.startTime = _EAX;
}

/*
==============
CG_VisionSetScriptOverride
==============
*/
void CG_VisionSetScriptOverride(ClientVisionSetData *cvsData, const char *name, const int time, const int duration)
{
  char v10; 
  int v12; 
  visionBlendType_t type; 
  int startTime; 
  bool v15; 
  int v16; 
  int forward; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1204, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( cvsData->archived.visionBlends[16].lerpInfo.type != VISIONSETBLENDTYPE_TIME || cvsData->archived.visionBlends[16].lerpInfo.timeData.forward )
  {
    *(double *)&_XMM0 = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[16], time);
    __asm { vucomiss xmm0, cs:__real@3f800000 }
    if ( v10 )
      goto LABEL_11;
  }
  if ( cvsData->archived.visionBlends[16].lerpInfo.type != VISIONSETBLENDTYPE_TIME )
    goto LABEL_10;
  if ( cvsData->archived.visionBlends[16].lerpInfo.timeData.forward )
    goto LABEL_10;
  *(double *)&_XMM0 = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[16], time);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  if ( v10 )
LABEL_11:
    v12 = 1;
  else
LABEL_10:
    v12 = 0;
  type = cvsData->archived.visionBlends[16].lerpInfo.type;
  if ( type != VISIONSETBLENDTYPE_TIME || time <= 0 || (startTime = cvsData->archived.visionBlends[16].lerpInfo.timeData.startTime, time <= startTime) || (v15 = time < cvsData->archived.visionBlends[16].lerpInfo.timeData.duration + startTime, v16 = 1, !v15) )
    v16 = 0;
  if ( type == VISIONSETBLENDTYPE_TIME )
    forward = cvsData->archived.visionBlends[16].lerpInfo.timeData.forward;
  else
    forward = 1;
  if ( !*name )
  {
    if ( v12 )
    {
      if ( !forward )
        return;
    }
    else if ( v16 )
    {
      if ( !forward )
        return;
      goto LABEL_33;
    }
    CG_VisionSetRegisterBlendStart(cvsData, VISIONSET_BLENDTYPE_SCRIPT_OVERRIDE, time, duration, 0, VISIONSETLERP_SMOOTH);
    return;
  }
  if ( v12 )
  {
    if ( !forward )
    {
LABEL_23:
      CG_VisionSetRegisterBlendStart(cvsData, VISIONSET_BLENDTYPE_SCRIPT_OVERRIDE, time, duration, 1, VISIONSETLERP_SMOOTH);
      return;
    }
    return;
  }
  if ( !v16 )
    goto LABEL_23;
  if ( !forward )
LABEL_33:
    CG_VisionSetReverseBlend(cvsData, VISIONSET_BLENDTYPE_SCRIPT_OVERRIDE, time, duration);
}

/*
==============
CG_VisionSetSetBlendOff
==============
*/
void CG_VisionSetSetBlendOff(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend)
{
  __int64 v4; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v4) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1044, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v4, 24) )
      __debugbreak();
  }
  cvsData->archived.visionBlends[(unsigned __int8)blend].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
}

/*
==============
CG_VisionSetSetBlendOn
==============
*/
void CG_VisionSetSetBlendOn(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend)
{
  __int64 v4; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1035, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v4) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1036, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v4, 24) )
      __debugbreak();
  }
  cvsData->archived.visionBlends[(unsigned __int8)blend].lerpInfo.type = VISIONSETBLENDTYPE_ON;
}

/*
==============
CG_VisionSetSetBlendPush
==============
*/

void __fastcall CG_VisionSetSetBlendPush(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, double lerp)
{
  __int64 v13; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = cvsData;
  __asm { vmovaps xmm6, xmm2 }
  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1051, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v13) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1052, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v13, 24) )
      __debugbreak();
  }
  __asm { vmovss  xmm2, cs:__real@3f800000; max }
  _RBX = (unsigned __int8)blend;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm6; val
  }
  _RDI->archived.visionBlends[_RBX].lerpInfo.type = VISIONSETBLENDTYPE_PUSH;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rbx+rdi+7984h], xmm0
  }
}

/*
==============
CG_VisionSetSetBlendStop
==============
*/
void CG_VisionSetSetBlendStop(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time)
{
  __int64 v8; 

  _RDI = cvsData;
  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1059, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v8) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1060, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v8, 24) )
      __debugbreak();
  }
  _RBX = (unsigned __int8)blend;
  *(double *)&_XMM0 = CG_VisionSetGetLerp(&_RDI->archived.visionBlends[_RBX], time);
  __asm { vmovss  dword ptr [rbx+rdi+7984h], xmm0 }
  _RDI->archived.visionBlends[_RBX].lerpInfo.type = VISIONSETBLENDTYPE_PUSH;
}

/*
==============
CG_VisionSetShutdown
==============
*/
void CG_VisionSetShutdown(void)
{
  unsigned int v0; 
  connstate_t *p_connectionState; 
  cg_t **v2; 
  __int64 v3; 
  __int64 v4; 

  CG_VisionSet_ResetAssets();
  v0 = 0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    v2 = cg_t::ms_cgArray;
    do
    {
      if ( v0 >= 2 )
      {
        LODWORD(v4) = 2;
        LODWORD(v3) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
      {
        if ( v0 >= cg_t::ms_allocatedCount )
        {
          LODWORD(v4) = cg_t::ms_allocatedCount;
          LODWORD(v3) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
            __debugbreak();
        }
        if ( !*v2 )
        {
          LODWORD(v4) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v4) )
            __debugbreak();
        }
        if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
        {
          LODWORD(v4) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v4) )
            __debugbreak();
        }
        (*v2)->cvsData.archived.visionInitialized = 0;
      }
      ++v0;
      p_connectionState += 110;
      ++v2;
    }
    while ( (int)v0 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
CG_VisionSetSpecialVision
==============
*/
void CG_VisionSetSpecialVision(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf, const char *name)
{
  char dest[64]; 

  CG_VisionSetSpecialVisionBlend(cvsData, leaf);
  Com_sprintf(dest, 0x40ui64, "vision/%s.vision", name);
  CG_VisionSetRegisterLeafByFile(cvsData, leaf, dest);
}

/*
==============
CG_VisionSetSpecialVisionBlend
==============
*/
void CG_VisionSetSpecialVisionBlend(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf)
{
  if ( leaf == VISIONSET_LEAFTYPE_PREDATOR )
  {
    if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
      __debugbreak();
    cvsData->archived.visionBlends[8].lerpInfo.type = VISIONSETBLENDTYPE_ON;
LABEL_16:
    cvsData->archived.visionBlends[7].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    cvsData->archived.visionBlends[6].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    return;
  }
  if ( leaf != VISIONSET_LEAFTYPE_THERMAL )
  {
    if ( leaf != VISIONSET_LEAFTYPE_NIGHTVISION )
      return;
    if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
      __debugbreak();
    cvsData->archived.visionBlends[8].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    cvsData->archived.visionBlends[11].lerpInfo.type = VISIONSETBLENDTYPE_ON;
    goto LABEL_16;
  }
  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  cvsData->archived.visionBlends[7].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  cvsData->archived.visionBlends[6].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
}

/*
==============
CG_VisionSetUpdate
==============
*/
void CG_VisionSetUpdate(ClientVisionSetData *cvsData, const int time)
{
  CG_VisionSetUpdateToNode(cvsData, time - cvsData->transitory.playbackDelta, VISIONSET_BLENDTYPE_ROOT);
  cvsData->transitory.visionSetUpdateSentinel = 1;
}

/*
==============
CG_VisionSetUpdateCmd
==============
*/
void CG_VisionSetUpdateCmd(const void *const cmdData)
{
  ClientVisionSetData *v1; 

  v1 = *(ClientVisionSetData **)cmdData;
  CG_VisionSetUpdateToNode(v1, *((_DWORD *)cmdData + 2) - v1->transitory.playbackDelta, VISIONSET_BLENDTYPE_ROOT);
  v1->transitory.visionSetUpdateSentinel = 1;
}

/*
==============
CG_VisionSetUpdateToNode
==============
*/
void CG_VisionSetUpdateToNode(ClientVisionSetData *cvsData, const int time, visionSetCodeBlendType_t node)
{
  visionSetBlend_t::ChildRef *childRefs; 
  __int64 v9; 
  visionSetLerpStyle_t v10; 
  const visionSetVarsBase_t *Child; 
  const visionSetVarsBase_t *v13; 
  __int64 v16; 
  void *retaddr; 

  _RAX = &retaddr;
  if ( (unsigned __int8)node <= VISIONSET_BLENDTYPE_WORLDSPAWN_ALTERNATES )
  {
    childRefs = cvsData->archived.visionBlends[23].childRefs;
    v9 = 24 - (unsigned int)(unsigned __int8)node;
    __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
    do
    {
      if ( !*(_DWORD *)&childRefs[2].m_type )
      {
        LODWORD(v16) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1592, ASSERT_TYPE_ASSERT, "( ( blend->lerpInfo.type != VISIONSETBLENDTYPE_UNSET ) )", "( blend->lerpInfo.type ) = %i", v16) )
          __debugbreak();
      }
      if ( (childRefs->m_type == Type_Null || childRefs[1].m_type == Type_Null) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1593, ASSERT_TYPE_ASSERT, "(blend->childRefs[0].m_type != visionSetBlend_t::ChildRef::Type_Null && blend->childRefs[1].m_type != visionSetBlend_t::ChildRef::Type_Null)", (const char *)&queryFormat, "blend->childRefs[0].m_type != visionSetBlend_t::ChildRef::Type_Null && blend->childRefs[1].m_type != visionSetBlend_t::ChildRef::Type_Null") )
        __debugbreak();
      v10 = *(_DWORD *)&childRefs[4].m_type;
      *(double *)&_XMM0 = CG_VisionSetGetLerp((const visionSetBlend_t *)&childRefs[-598], time);
      __asm { vmovaps xmm6, xmm0 }
      Child = CG_VisionSet_GetChild(cvsData, childRefs + 1);
      v13 = CG_VisionSet_GetChild(cvsData, childRefs);
      __asm { vmovaps xmm2, xmm6; lerp }
      CG_VisionSetLerp(v13, Child, *(double *)&_XMM2, v10, (visionSetVarsBase_t *)&childRefs[-598]);
      childRefs -= 610;
      --v9;
    }
    while ( v9 );
    __asm { vmovaps xmm6, [rsp+68h+var_38] }
  }
}

/*
==============
CG_VisionSetValidateIsComplete
==============
*/
void CG_VisionSetValidateIsComplete(ClientVisionSetData *cvsData, const visionSetCodeLeafType_t leaf)
{
  visField_t *v4; 
  unsigned int v5; 
  visionSetVars_t *v6; 
  unsigned int v7; 
  unsigned int *v8; 
  const char *UnobfuscatedName; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( (unsigned __int8)leaf >= VISIONSET_LEAFTYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1128, ASSERT_TYPE_ASSERT, "(unsigned)( leaf ) < (unsigned)( VISIONSET_LEAFTYPE_COUNT )", "leaf doesn't index VISIONSET_LEAFTYPE_COUNT\n\t%i not in [0, %i)", (unsigned __int8)leaf, 25) )
    __debugbreak();
  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1129, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  v4 = visionDefFields;
  v5 = 0;
  v6 = &cvsData->archived.visionLeaves[(unsigned __int8)leaf];
  do
  {
    if ( v5 >= 0xE0 )
    {
      LODWORD(v11) = 224;
      LODWORD(v10) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    v7 = 0x80000000 >> (v5 & 0x1F);
    v8 = &v6->inUse.array[(unsigned __int64)v5 >> 5];
    if ( (v7 & *v8) == 0 )
    {
      CG_VisionSetApplyDefaultToField(v5, v6);
      if ( v5 >= 0xE0 )
      {
        LODWORD(v13) = 224;
        LODWORD(v12) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v12, v13) )
          __debugbreak();
      }
      *v8 |= v7;
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(v4->name);
      Com_PrintWarning(1, "WARNING: VisionSet '%s' is missing field %s.\n", v6->name, UnobfuscatedName);
    }
    ++v5;
    ++v4;
  }
  while ( (int)v5 < 218 );
}

/*
==============
CG_VisionSet_ArchiveMP
==============
*/
void CG_VisionSet_ArchiveMP(MemoryFile *memFile, ClientVisionSetData *cvsData)
{
  if ( MemFile_IsWriting(memFile) )
  {
    MemFile_WriteData(memFile, 0xE74Cui64, cvsData);
    CG_VisionSet_SaveAssetList(memFile, cvsData);
  }
  else
  {
    MemFile_ReadData(memFile, 0xE74Cui64, cvsData);
    CG_VisionSet_LoadAssetList(memFile, cvsData);
  }
}

/*
==============
CG_VisionSet_ArchiveSP
==============
*/
void CG_VisionSet_ArchiveSP(MemoryFile *memFile, ClientVisionSetData *cvsData)
{
  if ( MemFile_IsWriting(memFile) )
    CG_VisionSet_SaveSP(memFile, cvsData);
  else
    CG_VisionSet_LoadSP(memFile, cvsData);
}

/*
==============
CG_VisionSet_AssetFound
==============
*/
bool CG_VisionSet_AssetFound(const VisionSetAssetKey *key)
{
  unsigned int AssetHash; 
  VisionSetAssetKey *keya; 

  keya = (VisionSetAssetKey *)key;
  AssetHash = CG_VisionSetGetAssetHash(key);
  return IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey const *>(&s_CG_VisionSet.m_assetMap, (const VisionSetAssetKey *const *)&keya, AssetHash, s_CG_VisionSet.m_assetMap.buckets, 0x3FFu, s_CG_VisionSet.m_assetNodes) != 0xFF;
}

/*
==============
CG_VisionSet_GetChild
==============
*/
visionSetBlend_t *CG_VisionSet_GetChild(const ClientVisionSetData *cvsData, const visionSetBlend_t::ChildRef *childRef)
{
  unsigned __int8 v3; 
  unsigned __int8 m_index; 

  switch ( childRef->m_type )
  {
    case Type_Null:
      return 0i64;
    case Type_Leaf:
      m_index = childRef->m_index;
      if ( m_index >= 0x19u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 249, ASSERT_TYPE_ASSERT, "(leafIndex < ( sizeof( *array_counter( cvsData->archived.visionLeaves ) ) + 0 ))", (const char *)&queryFormat, "leafIndex < ARRAY_COUNT( cvsData->archived.visionLeaves )") )
        __debugbreak();
      return (visionSetBlend_t *)((char *)cvsData + 1196 * m_index);
    case Type_Blend:
      v3 = childRef->m_index;
      if ( v3 >= 0x18u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 255, ASSERT_TYPE_ASSERT, "(blendIndex < ( sizeof( *array_counter( cvsData->archived.visionBlends ) ) + 0 ))", (const char *)&queryFormat, "blendIndex < ARRAY_COUNT( cvsData->archived.visionBlends )") )
        __debugbreak();
      return &cvsData->archived.visionBlends[v3];
    default:
      CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 259, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
      __debugbreak();
  }
}

/*
==============
CG_VisionSet_LoadAssetList
==============
*/
void CG_VisionSet_LoadAssetList(MemoryFile *memFile, ClientVisionSetData *cvsData)
{
  unsigned __int8 v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned __int8 AssetIndex; 
  VisionSetAssetType v8; 
  const char *CString; 
  __int64 v10; 
  ClientVisionSetData *v11; 
  __int64 v12; 
  visionSetBlend_t *visionBlends; 
  __int64 v14; 
  char p[16]; 
  unsigned __int8 oldToNewAssetIndexMap[256]; 

  oldToNewAssetIndexMap[0] = 0;
  MemFile_ReadData(memFile, 1ui64, p);
  v4 = p[0];
  if ( !p[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2366, ASSERT_TYPE_ASSERT, "(oldAssetCount > 0)", (const char *)&queryFormat, "oldAssetCount > 0") )
    __debugbreak();
  v5 = v4;
  v6 = 1;
  if ( v5 != 1 )
  {
    do
    {
      AssetIndex = 0;
      MemFile_ReadData(memFile, 1ui64, p);
      v8 = p[0];
      if ( (unsigned __int8)(p[0] - 1) <= 2u )
      {
        CString = MemFile_ReadCString(memFile);
        AssetIndex = CG_VisionSet_LoadAssetIndex(v8, CString);
        if ( AssetIndex == 0xFF )
        {
          Com_PrintError(1, "Archived vision file missing asset: %s\n", CString);
          AssetIndex = 0;
        }
      }
      v10 = v6++;
      oldToNewAssetIndexMap[v10] = AssetIndex;
    }
    while ( v6 != v5 );
  }
  v11 = cvsData;
  v12 = 25i64;
  do
  {
    CG_VisionSet_FixupAssetIndices((visionSetVarsBase_t *)v11, oldToNewAssetIndexMap, v5);
    v11 = (ClientVisionSetData *)((char *)v11 + 1196);
    --v12;
  }
  while ( v12 );
  visionBlends = cvsData->archived.visionBlends;
  v14 = 24i64;
  do
  {
    CG_VisionSet_FixupAssetIndices(visionBlends++, oldToNewAssetIndexMap, v5);
    --v14;
  }
  while ( v14 );
}

/*
==============
CG_VisionSet_LoadSP
==============
*/
void CG_VisionSet_LoadSP(MemoryFile *memFile, ClientVisionSetData *cvsData)
{
  unsigned int p; 

  _RBX = cvsData;
  MemFile_ReadData(memFile, 0x4ACui64, cvsData);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[3]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[1]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[2]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[4]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[5]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[6]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[9]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[11]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[12]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[16]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[17]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[18]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[19]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[20]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[21]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[22]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[23]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[24]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[14]);
  MemFile_ReadData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[15]);
  MemFile_ReadData(memFile, 0x4C4ui64, _RBX->archived.visionBlends);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[1]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[2]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[3]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[4]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[5]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[6]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[7]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[8]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[11]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[12]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[9]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[10]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[13]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[16]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[17]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[18]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[19]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[20]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[21]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[22]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[23]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[14]);
  MemFile_ReadData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[15]);
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->archived.visionInitialized = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->archived.prevTrigA = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->archived.prevTrigB = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->archived.stagedVisionStateTo = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->archived.stagedVisionDuration = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->archived.stagedVisionStart = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->archived.painVisionActive = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0E748h], xmm0 }
  CG_VisionSet_LoadAssetList(memFile, _RBX);
}

/*
==============
CG_VisionSet_SaveAssetList
==============
*/
void CG_VisionSet_SaveAssetList(MemoryFile *memFile, const ClientVisionSetData *cvsData)
{
  unsigned __int8 m_assetCount; 
  int v4; 
  int i; 
  char v6; 
  char p; 

  m_assetCount = s_CG_VisionSet.m_assetCount;
  p = s_CG_VisionSet.m_assetCount;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( !m_assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2347, ASSERT_TYPE_ASSERT, "(assetCount > 0)", (const char *)&queryFormat, "assetCount > 0") )
    __debugbreak();
  v4 = m_assetCount;
  for ( i = 1; i != v4; ++i )
  {
    p = s_CG_VisionSet.m_assetArray[i].m_type;
    v6 = p;
    MemFile_WriteData(memFile, 1ui64, &p);
    if ( (unsigned __int8)(v6 - 1) <= 2u )
      MemFile_WriteCString(memFile, s_CG_VisionSet.m_assetArray[i].m_header.physicsLibrary->name);
  }
}

/*
==============
CG_VisionSet_SaveSP
==============
*/
void CG_VisionSet_SaveSP(MemoryFile *memFile, const ClientVisionSetData *cvsData)
{
  unsigned int p; 

  _RBX = cvsData;
  MemFile_WriteData(memFile, 0x4ACui64, cvsData);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[3]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[1]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[2]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[4]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[5]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[6]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[9]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[11]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[12]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[16]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[17]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[18]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[19]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[20]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[21]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[22]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[23]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[24]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[14]);
  MemFile_WriteData(memFile, 0x4ACui64, &_RBX->archived.visionLeaves[15]);
  MemFile_WriteData(memFile, 0x4C4ui64, _RBX->archived.visionBlends);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[1]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[2]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[3]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[4]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[5]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[6]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[7]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[8]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[11]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[12]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[9]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[10]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[13]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[16]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[17]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[18]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[19]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[20]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[21]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[22]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[23]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[14]);
  MemFile_WriteData(memFile, 0x4C4ui64, &_RBX->archived.visionBlends[15]);
  LOBYTE(p) = _RBX->archived.visionInitialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = _RBX->archived.prevTrigA;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->archived.prevTrigB;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->archived.stagedVisionStateTo;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->archived.stagedVisionDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->archived.stagedVisionStart;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = _RBX->archived.painVisionActive;
  MemFile_WriteData(memFile, 1ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbx+0E748h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  CG_VisionSet_SaveAssetList(memFile, _RBX);
}

/*
==============
CG_VisionSet_ValidateFogSplineFree
==============
*/
void CG_VisionSet_ValidateFogSplineFree(const GfxFogSpline *fogSpline)
{
  unsigned int AssetHash; 
  VisionSetAssetKey key; 
  VisionSetAssetKey *p_key; 

  key.m_name = fogSpline->name;
  p_key = &key;
  key.m_type = VISION_SET_ASSET_TYPE_FOG_SPLINE;
  AssetHash = CG_VisionSetGetAssetHash(&key);
  if ( IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey const *>(&s_CG_VisionSet.m_assetMap, (const VisionSetAssetKey *const *)&p_key, AssetHash, s_CG_VisionSet.m_assetMap.buckets, 0x3FFu, s_CG_VisionSet.m_assetNodes) != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 113, ASSERT_TYPE_ASSERT, "(!CG_VisionSet_AssetFound( &key ))", (const char *)&queryFormat, "!CG_VisionSet_AssetFound( &key )") )
    __debugbreak();
}

/*
==============
CG_VisionSet_ValidateGradingClutFree
==============
*/
void CG_VisionSet_ValidateGradingClutFree(const GfxGradingClut *gradingClut)
{
  unsigned int AssetHash; 
  VisionSetAssetKey key; 
  VisionSetAssetKey *p_key; 

  key.m_name = gradingClut->name;
  p_key = &key;
  key.m_type = VISION_SET_ASSET_TYPE_GRADING_CLUT;
  AssetHash = CG_VisionSetGetAssetHash(&key);
  if ( IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey const *>(&s_CG_VisionSet.m_assetMap, (const VisionSetAssetKey *const *)&p_key, AssetHash, s_CG_VisionSet.m_assetMap.buckets, 0x3FFu, s_CG_VisionSet.m_assetNodes) != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 101, ASSERT_TYPE_ASSERT, "(!CG_VisionSet_AssetFound( &key ))", (const char *)&queryFormat, "!CG_VisionSet_AssetFound( &key )") )
    __debugbreak();
}

/*
==============
CG_VisionSet_ValidateImageFree
==============
*/
void CG_VisionSet_ValidateImageFree(const GfxImage *image)
{
  unsigned int AssetHash; 
  VisionSetAssetKey key; 
  VisionSetAssetKey *p_key; 

  key.m_name = image->name;
  p_key = &key;
  key.m_type = VISION_SET_ASSET_TYPE_IMAGE;
  AssetHash = CG_VisionSetGetAssetHash(&key);
  if ( IWHashTable_Base<CG_VisionSet_AssetHashNode,CG_VisionSet_AssetHashNode::Hasher>::BaseFind<VisionSetAssetKey const *>(&s_CG_VisionSet.m_assetMap, (const VisionSetAssetKey *const *)&p_key, AssetHash, s_CG_VisionSet.m_assetMap.buckets, 0x3FFu, s_CG_VisionSet.m_assetNodes) != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 90, ASSERT_TYPE_ASSERT, "(!CG_VisionSet_AssetFound( &key ))", (const char *)&queryFormat, "!CG_VisionSet_AssetFound( &key )") )
    __debugbreak();
}

/*
==============
CG_VisionSetsUpdate_PostPlayerStatePrediction
==============
*/
void CG_VisionSetsUpdate_PostPlayerStatePrediction(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  cg_t *v4; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_predictedPlayerState; 
  char v6; 
  bool v7; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2033, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2036, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v3 = DVARBOOL_nightVisionDisableEffects;
  if ( !DVARBOOL_nightVisionDisableEffects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "nightVisionDisableEffects") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    goto LABEL_20;
  if ( CG_View_IsKillCamEntityView(localClientNum) )
    goto LABEL_20;
  v4 = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)&v4->predictedPlayerState;
  if ( v4->cvsData.transitory.thermalVisionActive || v4->cvsData.transitory.remoteMissileCam )
    goto LABEL_20;
  if ( v4 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2245, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_predictedPlayerState + 229, ACTIVE, 7u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_predictedPlayerState + 229, ACTIVE, 9u) )
LABEL_20:
    v6 = 0;
  else
    v6 = 1;
  v7 = !LocalClientGlobals->cvsData.transitory.nightVisionCanBlendInPostPlayerState;
  LocalClientGlobals->cvsData.transitory.nightVisionActive = v6;
  if ( !v7 )
  {
    if ( v6 )
    {
      if ( !LocalClientGlobals->cvsData.archived.visionLeaves[9].name[0] )
        Com_Error_impl(ERR_SCRIPT, (const ObfuscateErrorText)&stru_1442D6480, 1162i64);
      LocalClientGlobals->cvsData.archived.visionBlends[6].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
      LocalClientGlobals->cvsData.archived.visionBlends[11].lerpInfo.type = VISIONSETBLENDTYPE_ON;
    }
    else
    {
      LocalClientGlobals->cvsData.archived.visionBlends[11].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    }
    LocalClientGlobals->cvsData.archived.visionBlends[8].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    LocalClientGlobals->cvsData.archived.visionBlends[7].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  }
}

/*
==============
CG_VisionSetsUpdate_PrePlayerStatePrediction
==============
*/
void CG_VisionSetsUpdate_PrePlayerStatePrediction(const LocalClientNum_t localClientNum)
{
  LocalClientNum_t v3; 
  ClientVisionSetData *p_cvsData; 
  char v6; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v8; 
  ClientVisionSetData *v9; 
  int v10; 
  int integer; 
  unsigned __int64 v12; 
  visionSetCodeBlendType_t v14; 
  char v15; 
  int thermalOverrideVisionSetIndex; 
  const char *VisionName; 
  int missileOverrideVisionSetIndex; 
  const char *v20; 
  cg_t *v21; 
  ClientVisionSetData *v22; 
  ClientVisionSetData *v23; 
  int painOverrideVisionSetIndex; 
  char *v25; 
  unsigned int v26; 
  CgMLGSpectator *MLGSpectator; 
  CgMLGCameraManager *CameraManager; 
  CoDCasterCameraType MLGCameraType; 
  bool v30; 
  int killstreakOverrideVisionSetIndex; 
  const char *v32; 
  cg_t *v33; 
  __int64 v38; 
  char *v49; 
  __int64 style; 
  __int64 v52; 
  char *outVisionSetName; 

  v3 = localClientNum;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  p_cvsData = &_RBX->cvsData;
  _RBX->cvsData.transitory.nightVisionCanBlendInPostPlayerState = 0;
  LOBYTE(outVisionSetName) = CG_View_IsKillCamEntityView(v3);
  v6 = (char)outVisionSetName;
  if ( (_BYTE)outVisionSetName )
  {
    __asm { vmovaps [rsp+88h+var_48], xmm6 }
    LocalClientGlobals = CG_GetLocalClientGlobals(v3);
    v8 = DCONST_DVARINT_visionSetKillcamEntBlendDuration;
    v9 = &LocalClientGlobals->cvsData;
    v10 = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
    if ( !DCONST_DVARINT_visionSetKillcamEntBlendDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "visionSetKillcamEntBlendDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    integer = v8->current.integer;
    v12 = 0i64;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      v14 = byte_1442D636C[v12];
      *(double *)&_XMM0 = CG_VisionSetGetLerp(&v9->archived.visionBlends[(unsigned __int8)v14], v10);
      __asm { vucomiss xmm0, xmm6 }
      if ( (!v15 || CG_VisionSetIsBlending(v9, v14, v10)) && (!CG_VisionSetIsBlending(v9, v14, v10) || CG_VisionSetForward(v9, v14)) )
        CG_VisionSetRegisterBlendStart(v9, v14, v10, integer, 0, VISIONSETLERP_SMOOTH);
      ++v12;
    }
    while ( v12 < 6 );
    v6 = (char)outVisionSetName;
    p_cvsData = &_RBX->cvsData;
    __asm { vmovaps xmm6, [rsp+88h+var_48] }
    _RBX->cvsData.transitory.prevThermalOverrideVisionSetIndex = 0;
    _RBX->cvsData.transitory.prevMissileOverrideVisionSetIndex = 0;
    v3 = localClientNum;
  }
  else if ( _RBX->cvsData.transitory.thermalVisionActive )
  {
    thermalOverrideVisionSetIndex = _RBX->predictedPlayerState.thermalOverrideVisionSetIndex;
    if ( _RBX->cvsData.transitory.prevThermalOverrideVisionSetIndex != thermalOverrideVisionSetIndex )
    {
      _RBX->cvsData.transitory.prevThermalOverrideVisionSetIndex = thermalOverrideVisionSetIndex;
      VisionName = CG_VisionSets_GetVisionName(thermalOverrideVisionSetIndex);
      if ( VisionName )
      {
        if ( *VisionName )
          CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_THERMAL, VisionName);
      }
    }
    if ( !_RBX->cvsData.archived.visionLeaves[11].name[0] )
      Com_Error_impl(ERR_SCRIPT, (const ObfuscateErrorText)&stru_1442D63D0, 1160i64);
    _RBX->cvsData.archived.visionBlends[6].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    _RBX->cvsData.archived.visionBlends[7].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  }
  else if ( _RBX->cvsData.transitory.remoteMissileCam )
  {
    missileOverrideVisionSetIndex = _RBX->predictedPlayerState.missileOverrideVisionSetIndex;
    if ( _RBX->cvsData.transitory.prevMissileOverrideVisionSetIndex != missileOverrideVisionSetIndex )
    {
      _RBX->cvsData.transitory.prevMissileOverrideVisionSetIndex = missileOverrideVisionSetIndex;
      v20 = CG_VisionSets_GetVisionName(missileOverrideVisionSetIndex);
      if ( v20 )
      {
        if ( *v20 )
          CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_PREDATOR, v20);
      }
    }
    if ( !_RBX->cvsData.archived.visionLeaves[12].name[0] )
      Com_Error_impl(ERR_SCRIPT, (const ObfuscateErrorText)&stru_1442D6420, 1161i64);
    _RBX->cvsData.archived.visionBlends[6].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    _RBX->cvsData.archived.visionBlends[7].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    _RBX->cvsData.archived.visionBlends[8].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  }
  else
  {
    _RBX->cvsData.transitory.nightVisionCanBlendInPostPlayerState = 1;
  }
  if ( _RBX->cvsData.archived.visionLeaves[15].name[0] )
  {
    if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v52) = 2;
      LODWORD(style) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1861, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", style, v52) )
        __debugbreak();
    }
    v21 = CG_GetLocalClientGlobals(v3);
    if ( v21->inKillCam && v21->killCamEntityType )
    {
      v22 = &v21->cvsData;
      if ( v21 == (cg_t *)-304604i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1035, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      v22->archived.visionBlends[15].lerpInfo.type = VISIONSETBLENDTYPE_ON;
    }
    else
    {
      v23 = &v21->cvsData;
      if ( v21 == (cg_t *)-304604i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      v23->archived.visionBlends[15].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    }
  }
  painOverrideVisionSetIndex = _RBX->predictedPlayerState.painOverrideVisionSetIndex;
  v25 = (char *)&queryFormat.fmt + 3;
  if ( _RBX->cvsData.transitory.prevPainOverrideVisionSetIndex != painOverrideVisionSetIndex )
  {
    _RBX->cvsData.transitory.prevPainOverrideVisionSetIndex = painOverrideVisionSetIndex;
    v26 = painOverrideVisionSetIndex;
    if ( painOverrideVisionSetIndex > 0 && NetConstStrings_GetVisionSetStringCount() )
    {
      if ( !NetConstStrings_GetVisionSetName(v26, (const char **)&outVisionSetName) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 1159i64, v26);
      if ( outVisionSetName && *outVisionSetName )
        CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_PAIN, outVisionSetName);
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
  }
  if ( _RBX->m_isMLGSpectator && _RBX->cvsData.transitory.prevKillstreakOverrideVisionSetIndex )
  {
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(v3);
    CameraManager = CgMLGSpectator::GetCameraManager(MLGSpectator);
    MLGCameraType = CgMLGCameraManager::GetMLGCameraType(CameraManager, v3);
    v30 = MLGCameraType == SPECTATOR;
    if ( MLGCameraType && CgMLGSpectator::GetVisionSetMode(MLGSpectator) == IN_KILLSTREAK_VISION_SET )
    {
      if ( !p_cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      p_cvsData->archived.visionBlends[13].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
      CgMLGSpectator::SetVisionSetMode(MLGSpectator, NO_VISION_SET);
      return;
    }
    if ( v30 && CgMLGSpectator::GetVisionSetMode(MLGSpectator) == NO_VISION_SET )
    {
      if ( !p_cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1035, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      p_cvsData->archived.visionBlends[13].lerpInfo.type = VISIONSETBLENDTYPE_ON;
      CgMLGSpectator::SetVisionSetMode(MLGSpectator, IN_KILLSTREAK_VISION_SET);
    }
  }
  killstreakOverrideVisionSetIndex = _RBX->predictedPlayerState.killstreakOverrideVisionSetIndex;
  if ( _RBX->cvsData.transitory.prevKillstreakOverrideVisionSetIndex != killstreakOverrideVisionSetIndex )
  {
    _RBX->cvsData.transitory.prevKillstreakOverrideVisionSetIndex = killstreakOverrideVisionSetIndex;
    v32 = CG_VisionSets_GetVisionName(killstreakOverrideVisionSetIndex);
    if ( v32 && *v32 )
    {
      CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_KILLSTREAK, v32);
      if ( !p_cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1035, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      p_cvsData->archived.visionBlends[13].lerpInfo.type = VISIONSETBLENDTYPE_ON;
    }
    else
    {
      if ( !p_cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      p_cvsData->archived.visionBlends[13].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    }
  }
  v33 = CG_GetLocalClientGlobals(v3);
  _RDI = &v33->predictedPlayerState.visionSetOverride.visionSetIndex;
  if ( v33->cvsData.transitory.prevOverride.duration == v33->predictedPlayerState.visionSetOverride.duration && v33->cvsData.transitory.prevOverride.startTime == v33->predictedPlayerState.visionSetOverride.startTime && v33->cvsData.transitory.prevOverride.visionSetIndex == *_RDI )
    _RDI = NULL;
  if ( v6 )
  {
    *(_QWORD *)&_RBX->cvsData.transitory.prevOverride.visionSetIndex = 0i64;
    _RBX->cvsData.transitory.prevOverride.duration = 0;
  }
  else if ( _RDI && NetConstStrings_GetVisionSetStringCount() )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi]
      vmovsd  qword ptr [rbx+58F34h], xmm0
    }
    _RBX->cvsData.transitory.prevOverride.duration = _RDI[2];
    if ( *_RDI )
    {
      if ( !NetConstStrings_GetVisionSetName(*_RDI, (const char **)&outVisionSetName) )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 1163i64, *_RDI);
        return;
      }
      v25 = outVisionSetName;
      if ( *outVisionSetName )
      {
        CG_VisionSetUpdateToNode(p_cvsData, _RBX->time, VISIONSET_BLENDTYPE_CT_B);
        CG_VisionSetClearScriptBlendInUseIfNeeded(p_cvsData, _RBX->time);
        _RCX = &_RBX->cvsData.archived.visionLeaves[23];
        v38 = 9i64;
        _RDX = &_RBX->cvsData.archived.visionBlends[21];
        do
        {
          _RCX = (visionSetVars_t *)((char *)_RCX + 128);
          __asm { vmovups xmm0, xmmword ptr [rdx] }
          _RDX = (visionSetBlend_t *)((char *)_RDX + 128);
          __asm
          {
            vmovups xmmword ptr [rcx-80h], xmm0
            vmovups xmm1, xmmword ptr [rdx-70h]
            vmovups xmmword ptr [rcx-70h], xmm1
            vmovups xmm0, xmmword ptr [rdx-60h]
            vmovups xmmword ptr [rcx-60h], xmm0
            vmovups xmm1, xmmword ptr [rdx-50h]
            vmovups xmmword ptr [rcx-50h], xmm1
            vmovups xmm0, xmmword ptr [rdx-40h]
            vmovups xmmword ptr [rcx-40h], xmm0
            vmovups xmm1, xmmword ptr [rdx-30h]
            vmovups xmmword ptr [rcx-30h], xmm1
            vmovups xmm0, xmmword ptr [rdx-20h]
            vmovups xmmword ptr [rcx-20h], xmm0
            vmovups xmm1, xmmword ptr [rdx-10h]
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          --v38;
        }
        while ( v38 );
        __asm { vmovups xmm0, xmmword ptr [rdx] }
        v49 = outVisionSetName;
        __asm
        {
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmm1, xmmword ptr [rdx+10h]
          vmovups xmmword ptr [rcx+10h], xmm1
        }
        *(_QWORD *)&_RCX->r_viewModelLightAmbient.y = *(_QWORD *)&_RDX->r_viewModelLightAmbient.y;
        _RCX->r_lightTweakUVIntensityScale = _RDX->r_lightTweakUVIntensityScale;
        CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, v49);
        CG_VisionSetRegisterBlendStart(p_cvsData, VISIONSET_BLENDTYPE_SCRIPT_BLEND, _RDI[1], _RDI[2], 1, VISIONSETLERP_SMOOTH);
        v25 = outVisionSetName;
      }
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
    CG_VisionSetScriptOverride(p_cvsData, v25, _RDI[1], _RDI[2]);
  }
  if ( _RBX->predictedPlayerState.pm_type >= 7 )
  {
    _RBX->cvsData.archived.visionBlends[5].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    _RBX->cvsData.archived.visionBlends[12].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  }
}

/*
==============
CG_VisionSets_GetVisionName
==============
*/
char *CG_VisionSets_GetVisionName(int visionSetIndex)
{
  char *outVisionSetName; 

  if ( visionSetIndex <= 0 || !NetConstStrings_GetVisionSetStringCount() )
    return (char *)&queryFormat.fmt + 3;
  if ( !NetConstStrings_GetVisionSetName(visionSetIndex, (const char **)&outVisionSetName) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 1159i64, (unsigned int)visionSetIndex);
  return outVisionSetName;
}

/*
==============
CG_VisionSets_UpdateKillcam
==============
*/
void CG_VisionSets_UpdateKillcam(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  ClientVisionSetData *p_cvsData; 
  ClientVisionSetData *v4; 
  int v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1861, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->inKillCam && LocalClientGlobals->killCamEntityType )
  {
    p_cvsData = &LocalClientGlobals->cvsData;
    if ( LocalClientGlobals == (cg_t *)-304604i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1035, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
      __debugbreak();
    p_cvsData->archived.visionBlends[15].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  }
  else
  {
    v4 = &LocalClientGlobals->cvsData;
    if ( LocalClientGlobals == (cg_t *)-304604i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
      __debugbreak();
    v4->archived.visionBlends[15].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
  }
}

/*
==============
CG_VisionSets_UpdateWeaponADS
==============
*/
void CG_VisionSets_UpdateWeaponADS(const LocalClientNum_t localClientNum)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v6; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  bool v8; 
  bool v9; 
  int EquippedWeaponIndex; 
  __int64 v11; 
  bool v12; 
  CgHandler *Handler; 
  bool v14; 
  int time; 
  int startTime; 
  bool v18; 
  bool v19; 
  bool v23; 
  BgAdsVisionSetInfo outVisionSetInfo; 
  bool outIsAlternate; 

  v3 = localClientNum;
  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1794, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[v3];
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(v6, p_predictedPlayerState, &outIsAlternate);
  v8 = LocalClientGlobals->renderingThirdPerson || BG_IsThirdPersonMode(v6, p_predictedPlayerState);
  v9 = 0;
  if ( BG_IsUsingOffhandGestureWeaponADSSupport(v6, p_predictedPlayerState) && BG_HasThermalScope(p_predictedPlayerState, ViewmodelOrOffhandADSSupportWeapon, 0) )
  {
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v9 = 0;
    if ( ViewmodelOrOffhandADSSupportWeapon->weaponIdx )
    {
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v6, p_predictedPlayerState, ViewmodelOrOffhandADSSupportWeapon);
      if ( EquippedWeaponIndex >= 0 )
      {
        v11 = EquippedWeaponIndex;
        if ( (const playerState_s *)((char *)p_predictedPlayerState + 4 * v11) != (const playerState_s *)-1540i64 && !p_predictedPlayerState->weapEquippedData[v11].thermalEnabled )
          v9 = 1;
      }
    }
  }
  memset(&outVisionSetInfo, 0, sizeof(outVisionSetInfo));
  v14 = 0;
  if ( !v8 )
  {
    v12 = outIsAlternate;
    Handler = CgHandler::getHandler((LocalClientNum_t)v3);
    if ( BG_IsAdsVisionSetActive(Handler, p_predictedPlayerState, ViewmodelOrOffhandADSSupportWeapon, v12, &outVisionSetInfo) && !CG_View_IsEMPJammed((const LocalClientNum_t)v3) && !v9 )
      v14 = 1;
  }
  *(double *)&_XMM0 = CG_VisionSetGetLerp(&LocalClientGlobals->cvsData.archived.visionBlends[14], LocalClientGlobals->time);
  time = LocalClientGlobals->time;
  __asm { vmovaps xmm6, xmm0 }
  v18 = 0;
  if ( LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.type == VISIONSETBLENDTYPE_TIME && time > 0 )
  {
    startTime = LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.startTime;
    if ( time > startTime && time < LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.duration + startTime )
      v18 = 1;
  }
  if ( v14 )
  {
    if ( !outVisionSetInfo.visionSetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1827, ASSERT_TYPE_ASSERT, "(adsVisionSetInfo.visionSetName)", (const char *)&queryFormat, "adsVisionSetInfo.visionSetName") )
      __debugbreak();
    if ( I_strncmp(outVisionSetInfo.visionSetName, LocalClientGlobals->cvsData.archived.visionLeaves[14].name, 0x7FFFFFFFui64) )
    {
      CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_WEAPON_ADS, outVisionSetInfo.visionSetName);
LABEL_43:
      CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_WEAPON_ADS, LocalClientGlobals->time, outVisionSetInfo.visionSetBlendInTimeMs, 1, VISIONSETLERP_SMOOTH);
      goto LABEL_52;
    }
    v19 = !v18;
    if ( !v18 || (v19 = LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.forward == 0, !LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.forward) )
    {
      __asm
      {
        vsubss  xmm0, xmm6, cs:__real@3f800000
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcvtss2sd xmm0, xmm0, xmm0
        vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
      }
      if ( !v19 )
        goto LABEL_43;
    }
  }
  else
  {
    v23 = !v18;
    if ( !v18 || (v23 = LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.forward == 0, LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.forward) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
      }
      if ( !v23 )
        CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_WEAPON_ADS, time, outVisionSetInfo.visionSetBlendOutTimeMs, 0, VISIONSETLERP_SMOOTH);
    }
  }
LABEL_52:
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
}

