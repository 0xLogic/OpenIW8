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
void CG_SetDigitalDistortParams(const LocalClientNum_t localClientNum, const float intensity, const float timeScale)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->refdef.digitalDistort.intensity = intensity;
  LocalClientGlobals->refdef.digitalDistort.timeScale = timeScale;
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
  double Lerp; 

  Lerp = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[16], time);
  if ( *(float *)&Lerp == 0.0 )
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
  unsigned __int64 v3; 
  cg_t *LocalClientGlobals; 
  int v7; 
  unsigned int v8; 
  char *v9; 
  int v10; 
  unsigned int v11; 
  char *v12; 
  int i; 
  int v14; 
  visionSetBlend_t::ChildRef *v15; 
  cg_t *v16; 
  int v17; 
  int m_index; 
  int v19; 
  __int64 v20; 
  BOOL v21; 
  BOOL v22; 
  double Lerp; 
  int v24; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  visionSetBlend_t::ChildRef *j; 
  cg_t *v31; 

  v3 = length;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= cg_t::ms_allocatedCount )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v31 = LocalClientGlobals;
  if ( !LocalClientGlobals->cvsData.archived.visionInitialized )
    return 0;
  v7 = Com_sprintf(buffer, v3, "%d,", 25i64);
  v8 = v3 - v7;
  v9 = &buffer[v7];
  v10 = Com_sprintf(v9, v8, "%d,", 24i64);
  v11 = v8 - v10;
  v12 = &v9[v10];
  for ( i = 0; i < 25; ++i )
  {
    v14 = Com_sprintf(v12, v11, "%s,", LocalClientGlobals->cvsData.archived.visionLeaves[i].name);
    if ( v14 < 0 )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442D56D8, 1157i64);
      return 0;
    }
    v11 -= v14;
    v12 += v14;
  }
  v15 = &LocalClientGlobals->cvsData.archived.visionBlends[0].childRefs[1];
  v16 = LocalClientGlobals;
  v17 = 0;
  for ( j = &LocalClientGlobals->cvsData.archived.visionBlends[0].childRefs[1]; ; j += 610 )
  {
    m_index = v15[-1].m_index;
    v19 = v15->m_index;
    v20 = v17;
    v21 = v15->m_type != Type_Blend;
    v22 = v15[-1].m_type != Type_Blend;
    Lerp = CG_VisionSetGetLerp(&v16->cvsData.archived.visionBlends[v20], v16->time - v16->cvsData.transitory.playbackDelta);
    LODWORD(v29) = v19;
    LODWORD(v28) = v21;
    LODWORD(v27) = m_index;
    LODWORD(v26) = v22;
    v24 = Com_sprintf(v12, v11, "%s,%f,%d,%d,%d,%d,", v31->cvsData.archived.visionBlends[v20].name, *(float *)&Lerp, v26, v27, v28, v29);
    if ( v24 < 0 )
      break;
    v16 = v31;
    v11 -= v24;
    ++v17;
    v12 += v24;
    v15 = j + 610;
    if ( v17 >= 24 )
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
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const ClientVisionSetData *p_cvsData; 
  int v6; 
  bool v7; 
  const ScreenPlacement *v8; 
  float y; 
  float x; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_cvsData = &LocalClientGlobals->cvsData;
  v6 = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
  {
LABEL_7:
    v8 = &scrPlaceFull;
    goto LABEL_8;
  }
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v7 )
      __debugbreak();
    goto LABEL_7;
  }
  v8 = &scrPlaceViewDisplay[v2];
LABEL_8:
  x = 0.0;
  y = 0.0;
  switch ( printMode )
  {
    case VISIONSET_PRINT_MINIMAL:
      CG_VisionSetDebugDrawMinimalDepthFirstPrint(1.0, p_cvsData, v6, v8, &x, &y, p_cvsData->archived.visionBlends, 0, VISIONSET_PRINT_MINIMAL);
      break;
    case VISIONSET_PRINT_ARTIST_FRIENDLY:
      CG_VisionSetDebugDrawArtistFriendlyDepthFirstPrint(1.0, p_cvsData, v6, v8, &x, &y, p_cvsData->archived.visionBlends, 0, VISIONSET_PRINT_ARTIST_FRIENDLY);
      break;
    case VISIONSET_PRINT_BLEND:
      CG_VisionSetDebugDrawBlendTreeDepthFirstPrint(p_cvsData, v6, v8, &x, &y, p_cvsData->archived.visionBlends, 0, VISIONSET_PRINT_BLEND);
      break;
    case VISIONSET_PRINT_ROOT_CONTENTS:
      CG_VisionSetDebugDrawRootContents(p_cvsData, v8, &x, &y);
      break;
    case VISIONSET_CURRENT_HDR_VALUES:
      CG_VisionSetDebugHdrValues(p_cvsData, v8, &x, &y, rgp.world);
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
  int v11; 
  __int128 v15; 
  double Lerp; 
  const visionSetVarsBase_t *Child; 
  const visionSetVarsBase_t *v18; 
  __int128 v19; 

  visionBlends = cvsData->archived.visionBlends;
  v11 = time;
  v15 = *(_OWORD *)&weight;
  while ( node >= visionBlends && node <= &cvsData->archived.visionBlends[23] )
  {
    CG_VisionSetDebugDrawNode(*(float *)&v15, (const visionSetBlend_t *)node, v11, scrPlace, x, y, level, printMode);
    Lerp = CG_VisionSetGetLerp((const visionSetBlend_t *)node, time);
    ++level;
    Child = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1].r_primaryLightTweakDiffuseStrength + 1);
    CG_VisionSetDebugDrawArtistFriendlyDepthFirstPrint(*(float *)&Lerp * *(float *)&v15, cvsData, time, scrPlace, x, y, Child, level, printMode);
    v18 = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1]);
    v11 = time;
    node = v18;
    v19 = v15;
    *(float *)&v19 = *(float *)&v15 * (float)(1.0 - *(float *)&Lerp);
    v15 = v19;
  }
  CG_VisionSetDebugDrawLeaf(*(float *)&v15, (const visionSetVars_t *)node, scrPlace, x, y, level, printMode);
}

/*
==============
CG_VisionSetDebugDrawBlendTreeDepthFirstPrint
==============
*/
void CG_VisionSetDebugDrawBlendTreeDepthFirstPrint(const ClientVisionSetData *cvsData, const int time, const ScreenPlacement *scrPlace, float *x, float *y, const visionSetVarsBase_t *node, int level, visionSetPrintMode_t printMode)
{
  double Lerp; 
  vec4_t *v14; 
  GfxFont *font; 
  const char *s; 
  const visionSetBlend_t::ChildRef *v19; 
  __int64 v20; 
  const visionSetVarsBase_t *Child; 
  GfxFont *smallDevFont; 
  char *name; 
  const char *v24; 
  const vec4_t *nodea; 

  if ( node < cvsData->archived.visionBlends || node > &cvsData->archived.visionBlends[23] )
  {
    if ( printMode == VISIONSET_PRINT_BLEND )
    {
      smallDevFont = cls.smallDevFont;
      name = "---";
      if ( node->name[0] )
        name = node->name;
      v24 = j_va((const char *)&queryFormat, name);
      *y = (float)CG_DrawDevString(scrPlace, (float)(6 * level) + *x, *y, 0.60000002, 0.60000002, v24, &colorCyan, 5, smallDevFont) + *y;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 448, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported printMode, %d", printMode) )
    {
      __debugbreak();
    }
  }
  else
  {
    Lerp = CG_VisionSetGetLerp((const visionSetBlend_t *)node, time);
    if ( *(float *)&Lerp == 0.0 )
    {
      v14 = &colorLtBlue;
    }
    else
    {
      v14 = &colorGreen;
      if ( *(float *)&Lerp != 1.0 )
        v14 = &colorOrange;
    }
    nodea = v14;
    if ( printMode == VISIONSET_PRINT_BLEND )
    {
      font = cls.smallDevFont;
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm3, 1 }
      s = j_va("%s (%d%%)", node->name, (unsigned int)(int)*(float *)&_XMM4);
      *y = (float)CG_DrawDevString(scrPlace, (float)(6 * level) + *x, *y, 0.60000002, 0.60000002, s, nodea, 5, font) + *y;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 435, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported printMode, %d", printMode) )
    {
      __debugbreak();
    }
    v19 = (const visionSetBlend_t::ChildRef *)&node[1];
    v20 = 2i64;
    do
    {
      Child = CG_VisionSet_GetChild(cvsData, v19);
      CG_VisionSetDebugDrawBlendTreeDepthFirstPrint(cvsData, time, scrPlace, x, y, Child, level + 1, printMode);
      ++v19;
      --v20;
    }
    while ( v20 );
  }
}

/*
==============
CG_VisionSetDebugDrawLeaf
==============
*/
void CG_VisionSetDebugDrawLeaf(float weight, const visionSetVars_t *node, const ScreenPlacement *scrPlace, float *x, float *y, int level, visionSetPrintMode_t printMode)
{
  const vec4_t *color; 
  GfxFont *font; 
  char *name; 
  const char *v15; 

  if ( (unsigned int)(printMode - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 396, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported printMode, %d", printMode) )
    __debugbreak();
  if ( weight == 0.0 )
  {
    color = &colorDkCyan;
  }
  else
  {
    color = &colorCyan;
    if ( weight != 1.0 )
      color = &colorYellow;
  }
  font = cls.smallDevFont;
  name = "---";
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  if ( node->name[0] )
    name = node->name;
  v15 = j_va("%s (%d%%)", name, (unsigned int)(int)*(float *)&_XMM4);
  *y = (float)CG_DrawDevString(scrPlace, (float)(6 * level) + *x, *y, 0.60000002, 0.60000002, v15, color, 5, font) + *y;
}

/*
==============
CG_VisionSetDebugDrawMinimalDepthFirstPrint
==============
*/

void __fastcall CG_VisionSetDebugDrawMinimalDepthFirstPrint(double weight, const ClientVisionSetData *cvsData, const int time, const ScreenPlacement *scrPlace, float *x, float *y, const visionSetVarsBase_t *node, int level, visionSetPrintMode_t printMode)
{
  __int128 v11; 
  const ScreenPlacement *v12; 
  visionSetBlend_t *visionBlends; 
  visionSetPrintMode_t v16; 
  visionSetBlend_t *v17; 
  double Lerp; 
  const visionSetVarsBase_t *Child; 
  bool v20; 
  const visionSetVarsBase_t *v21; 
  bool v22; 
  int v23; 
  const visionSetVarsBase_t *v24; 
  __int128 v25; 

  v11 = *(_OWORD *)&weight;
  if ( *(float *)&weight != 0.0 )
  {
    v12 = scrPlace;
    visionBlends = cvsData->archived.visionBlends;
    v16 = printMode;
    while ( 1 )
    {
      if ( node < visionBlends || (v17 = &cvsData->archived.visionBlends[23], node > &cvsData->archived.visionBlends[23]) )
      {
        CG_VisionSetDebugDrawLeaf(*(float *)&v11, (const visionSetVars_t *)node, v12, x, y, level, v16);
        return;
      }
      Lerp = CG_VisionSetGetLerp((const visionSetBlend_t *)node, time);
      Child = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1]);
      v20 = Child < visionBlends || Child > v17;
      v21 = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1].r_primaryLightTweakDiffuseStrength + 1);
      v22 = v21 < visionBlends || v21 > v17;
      if ( *(float *)&Lerp == 0.0 )
        goto LABEL_16;
      if ( *(float *)&Lerp == 1.0 )
        break;
      if ( v20 || v22 )
      {
        v20 = 1;
LABEL_21:
        CG_VisionSetDebugDrawNode(*(float *)&v11, (const visionSetBlend_t *)node, time, scrPlace, x, y, level, printMode);
      }
LABEL_22:
      v23 = level + 1;
      if ( !v20 )
        v23 = level;
      level = v23;
      v24 = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1].r_primaryLightTweakDiffuseStrength + 1);
      v16 = printMode;
      v12 = scrPlace;
      CG_VisionSetDebugDrawMinimalDepthFirstPrint(*(float *)&Lerp * *(float *)&v11, cvsData, time, scrPlace, x, y, v24, level, printMode);
      v25 = v11;
      *(float *)&v25 = *(float *)&v11 * (float)(1.0 - *(float *)&Lerp);
      v11 = v25;
      node = CG_VisionSet_GetChild(cvsData, (const visionSetBlend_t::ChildRef *)&node[1]);
      if ( *(float *)&v25 == 0.0 )
        return;
    }
    v20 = v22;
LABEL_16:
    if ( v20 )
      goto LABEL_21;
    goto LABEL_22;
  }
}

/*
==============
CG_VisionSetDebugDrawNode
==============
*/
void CG_VisionSetDebugDrawNode(float weight, const visionSetBlend_t *node, const int time, const ScreenPlacement *scrPlace, float *x, float *y, int level, visionSetPrintMode_t printMode)
{
  const vec4_t *color; 
  GfxFont *font; 
  const char *v14; 

  if ( (unsigned int)(printMode - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 383, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported printMode, %d", printMode) )
    __debugbreak();
  color = &colorDkGrey;
  if ( weight != 0.0 )
    color = &colorLtGrey;
  font = cls.smallDevFont;
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  v14 = j_va("%s Blender (%d%%)", node->name, (unsigned int)(int)*(float *)&_XMM4);
  *y = (float)CG_DrawDevString(scrPlace, (float)(6 * level) + *x, *y, 0.60000002, 0.60000002, v14, color, 5, font) + *y;
}

/*
==============
CG_VisionSetDebugDrawRootContents
==============
*/
void CG_VisionSetDebugDrawRootContents(const ClientVisionSetData *cvsData, const ScreenPlacement *scrPlace, float *x, float *y)
{
  visionSetBlend_t *visionBlends; 
  float v8; 
  int v9; 
  unsigned __int16 *p_offset; 
  const char *UnobfuscatedName; 
  int v12; 
  const char *v13; 
  GfxFont *font; 
  const char *s; 
  char *v16; 
  __int64 v17; 
  unsigned __int8 v18; 
  const char *AssetName; 
  int v20; 
  unsigned __int16 *v21; 
  visionSetBlend_t *v22; 
  char dest[64]; 
  char v24[1024]; 

  visionBlends = cvsData->archived.visionBlends;
  v22 = cvsData->archived.visionBlends;
  if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 555, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
    __debugbreak();
  if ( visionBlends->assetTableResetCounter != s_CG_VisionSet.m_resetCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 556, ASSERT_TYPE_ASSERT, "(root->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", (const char *)&queryFormat, "root->assetTableResetCounter == s_CG_VisionSet.m_resetCounter") )
    __debugbreak();
  v8 = *y;
  v9 = 0;
  p_offset = &visionDefFields[0].offset;
  v20 = 0;
  v21 = &visionDefFields[0].offset;
  do
  {
    if ( v9 > 0 && v9 == 62 * (v9 / 0x3Eu) )
    {
      *x = *x + 200.0;
      *y = v8;
    }
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(*((const char **)p_offset - 1));
    v12 = *((_DWORD *)p_offset + 1);
    switch ( v12 )
    {
      case 0:
        v13 = "false";
        font = cls.smallDevFont;
        if ( *((_BYTE *)&visionBlends->r_primaryLightTweakDiffuseStrength + *p_offset) )
          v13 = "true";
        s = j_va("%s = %s\n", UnobfuscatedName, v13);
        goto LABEL_15;
      case 1:
        font = cls.smallDevFont;
        s = j_va("%s = %.5f\n", UnobfuscatedName, *(float *)((char *)&visionBlends->r_primaryLightTweakDiffuseStrength + *p_offset));
LABEL_15:
        *y = (float)CG_DrawDevString(scrPlace, *x, *y, 0.48000002, 0.48000002, s, &colorCyan, 5, font) + *y;
        goto LABEL_30;
      case 2:
        font = cls.smallDevFont;
        s = j_va("%s = %.2f %.2f %.2f\n", UnobfuscatedName, *(float *)((char *)&visionBlends->r_primaryLightTweakDiffuseStrength + *p_offset), *(float *)((char *)&visionBlends->r_primaryLightTweakSpecularStrength + *p_offset), *(float *)((char *)visionBlends->r_charLightAmbient.v + *p_offset));
        goto LABEL_15;
    }
    if ( (unsigned int)(v12 - 3) <= 2 )
    {
      Com_sprintf(dest, 0x40ui64, "%s = ", UnobfuscatedName);
      v16 = (char *)visionBlends + *p_offset;
      v17 = 0i64;
      do
      {
        v18 = v16[2 * v17 + 1];
        if ( !v18 )
          break;
        AssetName = CG_VisionSetGetAssetName((const CG_VisionSet_Asset *)&s_CG_VisionSet.m_assetNodes[16 * (unsigned __int8)v16[2 * v17] - 4080]);
        if ( v18 == 0xFF )
          Com_sprintf(v24, 0x400ui64, "%s%s\n", dest, AssetName);
        else
          Com_sprintf(v24, 0x400ui64, "%s%4.1f%% %s\n", dest, (float)((float)v18 * 0.3921569), AssetName);
        v17 = (unsigned int)(v17 + 1);
        *y = (float)CG_DrawDevString(scrPlace, *x, *y, 0.48000002, 0.48000002, v24, &colorCyan, 5, cls.smallDevFont) + *y;
      }
      while ( (_DWORD)v17 != 9 );
      v9 = v20;
      p_offset = v21;
      visionBlends = v22;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 621, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown field type") )
    {
      __debugbreak();
    }
LABEL_30:
    ++v9;
    p_offset += 20;
    v20 = v9;
    v21 = p_offset;
  }
  while ( v9 < 218 );
}

/*
==============
CG_VisionSetDebugHdrValues
==============
*/
void CG_VisionSetDebugHdrValues(const ClientVisionSetData *cvsData, const ScreenPlacement *scrPlace, float *x, float *y, const GfxWorld *gfxWorld)
{
  __int128 v5; 
  __int128 v6; 
  GfxLight *v11; 
  double SunGameIntensity; 
  const char *v13; 
  const char *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float sunIntensityOverride; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  float v24; 
  float v25; 
  float v26; 
  bool v27; 
  bool v28; 
  float v29; 
  float v30; 
  GfxFont *font; 
  const char *v32; 
  GfxFont *smallDevFont; 
  const char *v34; 
  GfxFont *v35; 
  const char *v36; 
  int v37; 
  float v38; 
  float v39; 
  float v40; 
  int v41; 
  const char *v42; 
  float v43; 
  int v44; 
  __int64 v45; 
  unsigned __int8 m_weight; 
  unsigned __int8 m_assetIndex; 
  const char *AssetName; 
  char *v49; 
  char *s; 
  vec3_t outSunColorGammaSrgb; 
  char v52[64]; 
  char dest[1024]; 
  __int128 v54; 
  __int128 v55; 

  v55 = v5;
  if ( !gfxWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 798, ASSERT_TYPE_ASSERT, "(gfxWorld)", (const char *)&queryFormat, "gfxWorld") )
    __debugbreak();
  v11 = &gfxWorld->primaryLights[frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex].stageInfo.activeStage.sunPrimaryLightIndex];
  if ( R_LightTweak_Enabled() )
  {
    R_LightTweak_GetSunColorGammaSrgb(&outSunColorGammaSrgb);
    SunGameIntensity = R_LightTweak_GetSunGameIntensity();
    v13 = " (light_tweak)";
    v14 = " (light_tweak)";
    v15 = *(float *)&SunGameIntensity;
  }
  else
  {
    v13 = " (script)";
    v54 = v6;
    if ( rg.useSunColorLinearSrgbOverride )
    {
      v16 = rg.sunColorLinearSrgbOverride.v[0];
      v17 = rg.sunColorLinearSrgbOverride.v[1];
      v18 = rg.sunColorLinearSrgbOverride.v[2];
      outSunColorGammaSrgb.v[0] = rg.sunColorLinearSrgbOverride.v[0];
      outSunColorGammaSrgb.v[1] = rg.sunColorLinearSrgbOverride.v[1];
      v14 = " (script)";
    }
    else
    {
      v16 = v11->colorLinearSrgb.v[0];
      outSunColorGammaSrgb.v[0] = v16;
      v17 = v11->colorLinearSrgb.v[1];
      outSunColorGammaSrgb.v[1] = v17;
      v18 = v11->colorLinearSrgb.v[2];
      v14 = (char *)&queryFormat.fmt + 3;
    }
    outSunColorGammaSrgb.v[2] = v18;
    if ( rg.useSunIntensityOverride )
    {
      sunIntensityOverride = rg.sunIntensityOverride;
    }
    else
    {
      sunIntensityOverride = v11->intensity;
      v13 = (char *)&queryFormat.fmt + 3;
    }
    if ( v16 > 0.0031308001 )
      v20 = (float)(powf_0(v16, 0.41666666) * 1.0549999) - 0.055;
    else
      v20 = v16 * 12.92;
    outSunColorGammaSrgb.v[0] = v20;
    if ( v17 > 0.0031308001 )
      v21 = (float)(powf_0(v17, 0.41666666) * 1.0549999) - 0.055;
    else
      v21 = v17 * 12.92;
    outSunColorGammaSrgb.v[1] = v21;
    if ( v18 > 0.0031308001 )
      v22 = (float)(powf_0(v18, 0.41666666) * 1.0549999) - 0.055;
    else
      v22 = v18 * 12.92;
    v15 = sunIntensityOverride * 3.1415927;
    outSunColorGammaSrgb.v[2] = v22;
  }
  v23 = CG_DrawDevString(scrPlace, *x, *y, 0.60000002, 0.60000002, "Sunlight:", &colorWhite, 5, cls.smallDevFont);
  v24 = outSunColorGammaSrgb.v[2];
  v25 = outSunColorGammaSrgb.v[1];
  *y = (float)v23 + *y;
  Com_sprintf(dest, 0x400ui64, "color%s: %g %g %g", v14, outSunColorGammaSrgb.v[0], v25, v24);
  *y = (float)CG_DrawDevString(scrPlace, *x + 6.0, *y, 0.60000002, 0.60000002, dest, &colorWhite, 5, cls.smallDevFont) + *y;
  Com_sprintf(dest, 0x400ui64, "intensity%s: %g ", v13, v15);
  v26 = (float)CG_DrawDevString(scrPlace, *x + 6.0, *y, 0.60000002, 0.60000002, dest, &colorWhite, 5, cls.smallDevFont) + *y;
  *y = v26;
  v27 = cvsData->archived.visionBlends[0].tonemapAuto > 0.5;
  v28 = cvsData->archived.visionBlends[0].tonemapAutoExposureAdjustCurve > 0.5;
  v29 = (float)CG_DrawDevString(scrPlace, *x, v26, 0.60000002, 0.60000002, "Exposure:", &colorWhite, 5, cls.smallDevFont) + *y;
  *y = v29;
  v30 = *x + 6.0;
  if ( v27 )
  {
    *y = (float)CG_DrawDevString(scrPlace, v30, v29, 0.60000002, 0.60000002, "Enabled", &colorGreen, 5, cls.smallDevFont) + *y;
    font = cls.smallDevFont;
    v32 = j_va("Min exposure: %f", cvsData->archived.visionBlends[0].tonemapMaxExposure);
    *y = (float)CG_DrawDevString(scrPlace, *x + 12.0, *y, 0.60000002, 0.60000002, v32, &colorWhite, 5, font) + *y;
    smallDevFont = cls.smallDevFont;
    v34 = j_va("Exposure Adjust: %f", cvsData->archived.visionBlends[0].tonemapExposureAdjust);
    *y = (float)CG_DrawDevString(scrPlace, *x + 12.0, *y, 0.60000002, 0.60000002, v34, &colorWhite, 5, smallDevFont) + *y;
    v35 = cls.smallDevFont;
    v36 = j_va("Exposure Adapt Speed: %f", cvsData->archived.visionBlends[0].tonemapAdaptSpeed);
    v37 = CG_DrawDevString(scrPlace, *x + 12.0, *y, 0.60000002, 0.60000002, v36, &colorWhite, 5, v35);
  }
  else
  {
    v37 = CG_DrawDevString(scrPlace, v30, v29, 0.60000002, 0.60000002, "Disabled", &colorRed, 5, cls.smallDevFont);
  }
  v38 = (float)v37 + *y;
  *y = v38;
  v39 = (float)CG_DrawDevString(scrPlace, *x, v38, 0.60000002, 0.60000002, "Exposure Adjust:", &colorWhite, 5, cls.smallDevFont) + *y;
  *y = v39;
  v40 = *x + 6.0;
  if ( !v28 )
  {
    v42 = "Disabled";
    goto LABEL_30;
  }
  if ( !v27 )
  {
    v42 = "Enabled, but autoExposure is disabled rendering this non-functional";
LABEL_30:
    v41 = CG_DrawDevString(scrPlace, v40, v39, 0.60000002, 0.60000002, v42, &colorRed, 5, cls.smallDevFont);
    goto LABEL_31;
  }
  v41 = CG_DrawDevString(scrPlace, v40, v39, 0.60000002, 0.60000002, "Enabled", &colorGreen, 5, cls.smallDevFont);
LABEL_31:
  v43 = (float)v41 + *y;
  *y = v43;
  *y = (float)CG_DrawDevString(scrPlace, *x, v43, 0.60000002, 0.60000002, "CLUTs:", &colorWhite, 5, cls.smallDevFont) + *y;
  v44 = Com_sprintf(v52, 0x40ui64, "clut0: ");
  v45 = 0i64;
  do
  {
    m_weight = cvsData->archived.visionBlends[0].clutSet.m_assets[v45].m_weight;
    if ( !m_weight )
      break;
    m_assetIndex = cvsData->archived.visionBlends[0].clutSet.m_assets[v45].m_assetIndex;
    AssetName = CG_VisionSetGetAssetName((const CG_VisionSet_Asset *)&s_CG_VisionSet.m_assetNodes[16 * m_assetIndex - 4080]);
    v49 = v52;
    if ( m_assetIndex )
      v49 = (char *)&queryFormat.fmt + 3;
    if ( m_weight == 0xFF )
    {
      Com_sprintf(dest, 0x400ui64, "%*s%s\n", v44, v49, AssetName);
    }
    else
    {
      LODWORD(s) = (100 * (unsigned int)m_weight + 127) / 0xFF;
      Com_sprintf(dest, 0x400ui64, "%*s%3d%% %s\n", v44, v49, s, AssetName);
    }
    v45 = (unsigned int)(v45 + 1);
    *y = (float)CG_DrawDevString(scrPlace, *x + 6.0, *y, 0.60000002, 0.60000002, dest, &colorWhite, 5, cls.smallDevFont) + *y;
  }
  while ( (_DWORD)v45 != 9 );
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
  float *v10; 
  int v11; 
  __int64 v12; 
  unsigned __int8 v13; 
  const char *v14; 
  int v15; 
  int v16; 
  char *fmt; 

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
        v10 = (float *)((char *)&visionBlends->r_primaryLightTweakDiffuseStrength + v7->offset);
        if ( fieldType == FTYPE_BOOL )
        {
          LODWORD(fmt) = *(unsigned __int8 *)v10;
          v16 = Com_sprintf(buffer, length, "%s \"%d\"\n", v7->name, fmt);
          goto LABEL_21;
        }
        if ( fieldType == FTYPE_FLOAT )
          break;
        if ( fieldType == FTYPE_VEC3 )
        {
          v16 = Com_sprintf(buffer, length, "%s \"%g %g %g\"\n", v7->name, *v10, v10[1], v10[2]);
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
            if ( !*((_BYTE *)v10 + 2 * v12 + 1) )
              break;
            v13 = *((_BYTE *)v10 + 2 * v12);
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
      v16 = Com_sprintf(buffer, length, "%s \"%g\"\n", v7->name, *v10);
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
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  cg_t *v10; 
  double Lerp; 
  visionSetVars_t *v12; 
  __int64 v13; 
  visionSetBlend_t *v14; 
  __int128 v15; 
  int v16; 

  v7 = (unsigned int)visMode;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 2562, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v10 = LocalClientGlobals;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 5 )
    {
      if ( *name )
      {
        CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_FADE_BLACK, name);
        v16 = 1;
      }
      else
      {
        v16 = 0;
      }
      CG_VisionSetRegisterBlendStart(&v10->cvsData, VISIONSET_BLENDTYPE_FADE_BLACK, v10->time, duration, v16, VISIONSETLERP_SMOOTH);
    }
    else if ( CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, leaf, name) && (_DWORD)v7 == 6 )
    {
      v10->hasKillcamThirdpersonVisionSet = 1;
    }
  }
  else
  {
    if ( *name )
    {
      CG_VisionSetUpdateToNode(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B);
      Lerp = CG_VisionSetGetLerp(&v10->cvsData.archived.visionBlends[16], v10->time);
      if ( *(float *)&Lerp == 0.0 )
      {
        *(_QWORD *)v10->cvsData.archived.visionBlends[21].inUse.array = v7;
        *(_QWORD *)&v10->cvsData.archived.visionBlends[21].inUse.array[2] = v7;
        *(_QWORD *)&v10->cvsData.archived.visionBlends[21].inUse.array[4] = v7;
        v10->cvsData.archived.visionBlends[21].inUse.array[6] = 0;
      }
      v12 = &v10->cvsData.archived.visionLeaves[23];
      v13 = 9i64;
      v14 = &v10->cvsData.archived.visionBlends[21];
      do
      {
        v12 = (visionSetVars_t *)((char *)v12 + 128);
        v15 = *(_OWORD *)&v14->r_primaryLightTweakDiffuseStrength;
        v14 = (visionSetBlend_t *)((char *)v14 + 128);
        *(_OWORD *)v12[-1].hdrColorizeGain.v = v15;
        *(_OWORD *)&v12[-1].name[4] = *(_OWORD *)&v14[-1].name[28];
        *(_OWORD *)&v12[-1].name[20] = *(_OWORD *)&v14[-1].name[44];
        *(_OWORD *)&v12[-1].name[36] = *(_OWORD *)&v14[-1].name[60];
        *(_OWORD *)&v12[-1].name[52] = *(_OWORD *)&v14[-1].inUse.array[3];
        *(_OWORD *)&v12[-1].inUse.array[1] = *(_OWORD *)&v14[-1].decalVolumeDrawDistance;
        *(_OWORD *)&v12[-1].inUse.array[5] = *(_OWORD *)&v14[-1].dummy2;
        *(_OWORD *)&v12[-1].scopedNVG = *(_OWORD *)&v14[-1].lerpInfo.style;
        --v13;
      }
      while ( v13 );
      *(_OWORD *)&v12->r_primaryLightTweakDiffuseStrength = *(_OWORD *)&v14->r_primaryLightTweakDiffuseStrength;
      *(_OWORD *)&v12->r_charLightAmbient.z = *(_OWORD *)&v14->r_charLightAmbient.z;
      *(_QWORD *)&v12->r_viewModelLightAmbient.y = *(_QWORD *)&v14->r_viewModelLightAmbient.y;
      v12->r_lightTweakUVIntensityScale = v14->r_lightTweakUVIntensityScale;
      CG_VisionSetRegisterLeafByFile(&v10->cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, name);
      CG_VisionSetRegisterBlendStart(&v10->cvsData, VISIONSET_BLENDTYPE_SCRIPT_BLEND, v10->time, duration, 1, VISIONSETLERP_SMOOTH);
    }
    CG_VisionSetScriptOverride(&v10->cvsData, name, v10->time, duration);
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
  int duration; 
  double v5; 

  type = blend->lerpInfo.type;
  if ( type == VISIONSETBLENDTYPE_TIME )
  {
    duration = blend->lerpInfo.timeData.duration;
    LODWORD(v5) = 0;
    if ( duration > 0 )
    {
      v5 = I_fclamp((float)(time - blend->lerpInfo.timeData.startTime) / (float)duration, 0.0, 1.0);
      if ( !blend->lerpInfo.timeData.forward )
        *(float *)&v5 = 1.0 - *(float *)&v5;
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
          *(float *)&v5 = FLOAT_1_0;
          return *(float *)&v5;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 368, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_VisionSetGetLerp found an unsupported blend type %d", blend->lerpInfo.type) )
          __debugbreak();
      }
      LODWORD(v5) = 0;
      return *(float *)&v5;
    }
    LODWORD(v5) = blend->lerpInfo.timeData.startTime;
  }
  return *(float *)&v5;
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
  __int64 v6; 
  double v7; 
  double Lerp; 
  _BOOL8 result; 
  __int64 v10; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1204, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v10) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1205, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v10, 24) )
      __debugbreak();
  }
  v6 = (unsigned __int8)blend;
  result = 1;
  if ( !CG_VisionSetForward(cvsData, blend) || (v7 = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[v6], time), *(float *)&v7 != 1.0) )
  {
    if ( CG_VisionSetForward(cvsData, blend) )
      return 0;
    Lerp = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[v6], time);
    if ( *(float *)&Lerp != 0.0 )
      return 0;
  }
  return result;
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
void CG_VisionSetLerp(const visionSetVarsBase_t *a, const visionSetVarsBase_t *b, float lerp, const visionSetLerpStyle_t style, visionSetVarsBase_t *result)
{
  const visionSetVarsBase_t *v5; 
  const visionSetVarsBase_t *v6; 
  unsigned int m_resetCounter; 
  double v8; 
  float v9; 
  unsigned int v10; 
  VisionFieldType *p_fieldType; 
  unsigned __int64 v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  const float *v17; 
  float *v18; 
  const float *v19; 
  VisionFieldType v20; 
  float v21; 
  float v22; 
  char v23; 
  char v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 

  v5 = b;
  v6 = a;
  if ( !a && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1492, ASSERT_TYPE_ASSERT, "(a)", (const char *)&queryFormat, "a") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1493, ASSERT_TYPE_ASSERT, "(b)", (const char *)&queryFormat, "b") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1494, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !s_CG_VisionSet.m_wasReset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1496, ASSERT_TYPE_ASSERT, "(s_CG_VisionSet.m_wasReset)", (const char *)&queryFormat, "s_CG_VisionSet.m_wasReset") )
    __debugbreak();
  m_resetCounter = s_CG_VisionSet.m_resetCounter;
  if ( v6->assetTableResetCounter != s_CG_VisionSet.m_resetCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1497, ASSERT_TYPE_ASSERT, "(a->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", "%s\n\ta->assetTableResetCounter=%d, s_CG_VisionSet.m_resetCounter=%d", "a->assetTableResetCounter == s_CG_VisionSet.m_resetCounter", v6->assetTableResetCounter, s_CG_VisionSet.m_resetCounter) )
      __debugbreak();
    m_resetCounter = s_CG_VisionSet.m_resetCounter;
  }
  if ( v5->assetTableResetCounter != m_resetCounter )
  {
    LODWORD(v27) = m_resetCounter;
    LODWORD(v26) = v5->assetTableResetCounter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1498, ASSERT_TYPE_ASSERT, "(b->assetTableResetCounter == s_CG_VisionSet.m_resetCounter)", "%s\n\tb->assetTableResetCounter=%d, s_CG_VisionSet.m_resetCounter=%d", "b->assetTableResetCounter == s_CG_VisionSet.m_resetCounter", v26, v27) )
      __debugbreak();
    m_resetCounter = s_CG_VisionSet.m_resetCounter;
  }
  result->assetTableResetCounter = m_resetCounter;
  v8 = I_fclamp(lerp, 0.0, 1.0);
  v9 = *(float *)&v8;
  v10 = 0;
  p_fieldType = &visionDefFields[0].fieldType;
  while ( 1 )
  {
    if ( v10 >= 0xE0 )
    {
      LODWORD(v26) = 224;
      LODWORD(v25) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v25, v26) )
        __debugbreak();
    }
    v12 = (unsigned __int64)v10 >> 5;
    v13 = 0x80000000 >> (v10 & 0x1F);
    v14 = v13 & v6->inUse.array[v12];
    if ( v10 >= 0xE0 )
    {
      LODWORD(v26) = 224;
      LODWORD(v25) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v25, v26) )
        __debugbreak();
    }
    v15 = v13 & v5->inUse.array[v12];
    if ( v14 || v15 )
    {
      bitarray_base<bitarray<224>>::setBit(&result->inUse, v10);
      v16 = *((unsigned __int16 *)p_fieldType - 2);
      v17 = (const float *)((char *)&v6->r_primaryLightTweakDiffuseStrength + v16);
      v18 = (float *)((char *)&result->r_primaryLightTweakDiffuseStrength + v16);
      v19 = (const float *)((char *)&b->r_primaryLightTweakDiffuseStrength + v16);
      v20 = *p_fieldType;
      if ( *p_fieldType )
      {
        if ( v20 != FTYPE_FLOAT )
        {
          if ( v20 == FTYPE_VEC3 )
          {
            if ( v14 )
            {
              if ( v15 )
              {
                *v18 = CG_VisionSetLerpFloat(*v17, *v19, v9, style);
                v18[1] = CG_VisionSetLerpFloat(v17[1], v19[1], v9, style);
                v18[2] = CG_VisionSetLerpFloat(v17[2], v19[2], v9, style);
              }
              else
              {
                *v18 = *v17;
                v18[1] = v17[1];
                v18[2] = v17[2];
              }
            }
            else
            {
              *v18 = *v19;
              v18[1] = v19[1];
              v18[2] = v19[2];
            }
          }
          else
          {
            if ( (unsigned int)(v20 - 3) > 2 )
            {
              CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1577, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
              __debugbreak();
            }
            if ( v14 )
            {
              if ( v15 )
              {
                v21 = CG_VisionSetLerpFloat(0.0, 1.0, v9, style);
                CG_VisionSetLerpAssetBlendSet((const CG_VisionSet_AssetBlendSet *)v17, (const CG_VisionSet_AssetBlendSet *)v19, v21, (CG_VisionSet_AssetBlendSet *)v18);
              }
              else
              {
                *(_OWORD *)v18 = *(_OWORD *)v17;
                *((_WORD *)v18 + 8) = *((_WORD *)v17 + 8);
              }
            }
            else
            {
              *(_OWORD *)v18 = *(_OWORD *)v19;
              *((_WORD *)v18 + 8) = *((_WORD *)v19 + 8);
            }
          }
          goto LABEL_58;
        }
        v22 = *v17;
        if ( v14 )
        {
          if ( v15 )
          {
            *v18 = CG_VisionSetLerpFloat(v22, *v19, v9, style);
            goto LABEL_58;
          }
        }
        else
        {
          v22 = *v19;
        }
        *v18 = v22;
        goto LABEL_58;
      }
      v23 = *(_BYTE *)v17;
      v24 = *(_BYTE *)v19;
      if ( v14 )
      {
        if ( !v15 )
        {
          *(_BYTE *)v18 = v23;
          goto LABEL_58;
        }
        if ( v24 || v23 )
          v24 = 1;
      }
      *(_BYTE *)v18 = v24;
LABEL_58:
      v6 = a;
      goto LABEL_59;
    }
    if ( v10 >= 0xE0 )
    {
      LODWORD(v28) = 224;
      LODWORD(v27) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v27, v28) )
        __debugbreak();
    }
    result->inUse.array[v12] &= ~v13;
LABEL_59:
    ++v10;
    p_fieldType += 10;
    if ( (int)v10 >= 218 )
      break;
    v5 = b;
  }
}

/*
==============
CG_VisionSetLerpAssetBlendSet
==============
*/
void CG_VisionSetLerpAssetBlendSet(const CG_VisionSet_AssetBlendSet *fromAssetBlendSet, const CG_VisionSet_AssetBlendSet *toAssetBlendSet, float t, CG_VisionSet_AssetBlendSet *outAssetBlendSet)
{
  bool v7; 
  float v8; 
  float v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  int v15; 
  int v16; 
  __int128 v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  unsigned __int8 v20; 
  unsigned __int8 v21; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  float v24; 
  __int64 v25; 
  __int128 v26; 
  unsigned int v27; 
  float v28; 
  char v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  float v34; 
  __int64 v37; 
  char v38; 
  char v39; 
  unsigned int v40; 
  float v41; 
  int v42; 
  __int128 v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  __int64 v48; 
  unsigned int v49; 
  unsigned __int8 v50; 
  unsigned __int8 v51; 
  unsigned __int8 m_weight; 
  CG_VisionSet_AssetBlendSet *v53; 
  CG_VisionSet_AssetBlendSet *v54; 
  unsigned __int8 m_assetIndex; 
  CG_VisionSet_AssetBlendSet *v56; 
  CG_VisionSet_AssetBlendSet *v57; 
  CG_VisionSet_AssetBlendSet *v58; 
  unsigned __int8 v59; 
  CG_VisionSet_AssetBlendSet *v60; 
  CG_VisionSet_AssetBlend v61; 
  _QWORD v62[2]; 
  float v63; 
  float v64; 
  char v65; 
  char v66; 

  if ( (!fromAssetBlendSet->m_assets[0].m_weight || !toAssetBlendSet->m_assets[0].m_weight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1362, ASSERT_TYPE_ASSERT, "(fromAssetBlendSet->m_assets[0].m_weight && toAssetBlendSet->m_assets[0].m_weight)", (const char *)&queryFormat, "fromAssetBlendSet->m_assets[0].m_weight && toAssetBlendSet->m_assets[0].m_weight") )
    __debugbreak();
  v7 = fromAssetBlendSet->m_assets[0].m_weight == 0;
  v8 = (float)(1.0 - t) * 0.0039215689;
  v9 = t * 0.0039215689;
  LOWORD(v62[0]) = 255;
  if ( !v7 )
  {
    v10 = 1;
    while ( fromAssetBlendSet->m_assets[v10].m_weight )
    {
      if ( fromAssetBlendSet->m_assets[v10 - 1].m_assetIndex >= fromAssetBlendSet->m_assets[v10].m_assetIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1375, ASSERT_TYPE_ASSERT, "(CG_VisionSet_AreAssetsSortedByIndex( fromAssetBlendSet->m_assets ))", (const char *)&queryFormat, "CG_VisionSet_AreAssetsSortedByIndex( fromAssetBlendSet->m_assets )", v62[0]) )
          __debugbreak();
        break;
      }
      if ( ++v10 == 9 )
        break;
    }
  }
  if ( toAssetBlendSet->m_assets[0].m_weight )
  {
    v11 = 1;
    while ( toAssetBlendSet->m_assets[v11].m_weight )
    {
      if ( toAssetBlendSet->m_assets[v11 - 1].m_assetIndex >= toAssetBlendSet->m_assets[v11].m_assetIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1376, ASSERT_TYPE_ASSERT, "(CG_VisionSet_AreAssetsSortedByIndex( toAssetBlendSet->m_assets ))", (const char *)&queryFormat, "CG_VisionSet_AreAssetsSortedByIndex( toAssetBlendSet->m_assets )") )
          __debugbreak();
        break;
      }
      if ( ++v11 == 9 )
        break;
    }
  }
  v12 = 0i64;
  LODWORD(v13) = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0i64;
  while ( 1 )
  {
    v18 = (unsigned __int8 *)(v15 == 9 ? v62 : &fromAssetBlendSet->m_assets[v15]);
    v19 = (unsigned __int8 *)(v16 == 9 ? v62 : &toAssetBlendSet->m_assets[v16]);
    v20 = v18[1];
    v21 = v19[1];
    if ( !v20 )
      break;
    v22 = *v18;
LABEL_32:
    v23 = -1;
    if ( v21 )
      v23 = *v19;
    v24 = (float)v20 * v8;
    if ( v22 == v23 )
    {
      v24 = (float)((float)v21 * v9) + v24;
      ++v15;
    }
    else
    {
      if ( v22 < v23 )
      {
        ++v15;
        goto LABEL_40;
      }
      v22 = v23;
      v24 = (float)v21 * v9;
    }
    ++v16;
LABEL_40:
    v25 = (unsigned int)v13;
    LODWORD(v13) = v13 + 1;
    v26 = v17;
    *(float *)&v26 = *(float *)&v17 + v24;
    v17 = v26;
    *(&v63 + v25) = v24;
    *(&v65 + v25) = v22;
    v27 = v14 + 1;
    if ( !v22 )
      v27 = v14;
    v14 = v27;
  }
  if ( v21 )
  {
    v22 = -1;
    goto LABEL_32;
  }
  if ( !(_DWORD)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 124, ASSERT_TYPE_ASSERT, "(assetCount > 0)", (const char *)&queryFormat, "assetCount > 0") )
    __debugbreak();
  if ( (_DWORD)v13 != 1 )
  {
    if ( (_DWORD)v13 == 2 )
    {
      v28 = v63;
      if ( v64 > v63 )
      {
        v29 = v65;
        v65 = v66;
        v66 = v29;
        v63 = v64;
        v64 = v28;
      }
    }
    else
    {
      v30 = 0;
      if ( (_DWORD)v13 )
      {
        do
        {
          v31 = v30 + 1;
          v32 = v30;
          v33 = v30 + 1;
          v34 = *(&v63 + v30);
          *(float *)&_XMM1 = v34;
          if ( v30 + 1 != (_DWORD)v13 )
          {
            do
            {
              _XMM0 = *((unsigned int *)&v63 + v33);
              v37 = v33;
              if ( *(float *)&_XMM0 <= *(float *)&_XMM1 )
                v37 = v32;
              ++v33;
              v32 = v37;
              __asm { vmaxss  xmm1, xmm0, xmm1 }
            }
            while ( v33 != (_DWORD)v13 );
            if ( (_DWORD)v37 != v30 )
            {
              v38 = *(&v65 + v30);
              *(&v65 + v30) = *(&v65 + v37);
              *(&v63 + v30) = *(&v63 + (unsigned int)v37);
              *(&v63 + (unsigned int)v37) = v34;
              *(&v65 + (unsigned int)v37) = v38;
            }
          }
          ++v30;
        }
        while ( v31 != (_DWORD)v13 );
      }
    }
  }
  if ( v14 > 8 )
  {
    v39 = 0;
    do
    {
      v13 = (unsigned int)(v13 - 1);
      v40 = v14 - 1;
      v41 = *(&v63 + v13);
      if ( !*(&v65 + v13) )
        v40 = v14;
      v14 = v40;
      v42 = (int)(float)((float)((float)(v41 * 255.0) / *(float *)&v17) + 0.5);
      v43 = v17;
      *(float *)&v43 = *(float *)&v17 - v41;
      v17 = v43;
      if ( v42 )
        v39 = 1;
    }
    while ( v14 > 8 );
    if ( v39 )
      R_WarnOncePerFrame(R_WARN_TOO_MANY_VISIONSET_ASSETS, 8i64);
  }
  v44 = 255;
  v45 = 0;
  v46 = 0;
  if ( (_DWORD)v13 )
  {
    do
    {
      v47 = (int)(float)((float)((float)(255.0 / *(float *)&v17) * *(&v63 + v46)) + 0.5);
      if ( v47 > v44 )
        v47 = v44;
      if ( v47 )
      {
        v44 -= v47;
        v48 = v45++;
        outAssetBlendSet->m_assets[v48].m_assetIndex = *(&v65 + v46);
        outAssetBlendSet->m_assets[v48].m_weight = v47;
      }
      ++v46;
    }
    while ( v46 != (_DWORD)v13 );
  }
  for ( ; v44; v44 -= v49 )
  {
    if ( (_DWORD)v12 == v45 )
      break;
    v49 = (v45 - (_DWORD)v12 + v44 - 1) / (v45 - (unsigned int)v12);
    outAssetBlendSet->m_assets[v12].m_weight += v49;
    v12 = (unsigned int)(v12 + 1);
  }
  if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 171, ASSERT_TYPE_ASSERT, "(assetCount > 0)", (const char *)&queryFormat, "assetCount > 0") )
    __debugbreak();
  if ( v45 == 1 )
  {
LABEL_93:
    if ( v45 < 9 )
      goto LABEL_94;
    return;
  }
  if ( v45 != 2 )
  {
    v53 = outAssetBlendSet;
    v54 = (CG_VisionSet_AssetBlendSet *)((char *)outAssetBlendSet + 2 * v45);
    if ( outAssetBlendSet != v54 )
    {
      do
      {
        m_assetIndex = v53->m_assets[0].m_assetIndex;
        v56 = (CG_VisionSet_AssetBlendSet *)&v53->m_assets[1];
        v57 = v53;
        v58 = (CG_VisionSet_AssetBlendSet *)&v53->m_assets[1];
        if ( &v53->m_assets[1] != (CG_VisionSet_AssetBlend *)v54 )
        {
          do
          {
            v59 = v58->m_assets[0].m_assetIndex;
            v60 = v58;
            if ( v58->m_assets[0].m_assetIndex >= m_assetIndex )
              v60 = v57;
            v58 = (CG_VisionSet_AssetBlendSet *)((char *)v58 + 2);
            v57 = v60;
            if ( v59 >= m_assetIndex )
              v59 = m_assetIndex;
            m_assetIndex = v59;
          }
          while ( v58 != v54 );
          if ( v60 != v53 )
          {
            v61 = v53->m_assets[0];
            v53->m_assets[0] = v57->m_assets[0];
            v57->m_assets[0] = v61;
          }
        }
        v53 = (CG_VisionSet_AssetBlendSet *)((char *)v53 + 2);
      }
      while ( v56 != v54 );
    }
    goto LABEL_93;
  }
  v50 = outAssetBlendSet->m_assets[0].m_assetIndex;
  v51 = outAssetBlendSet->m_assets[1].m_assetIndex;
  m_weight = outAssetBlendSet->m_assets[0].m_weight;
  if ( v51 < outAssetBlendSet->m_assets[0].m_assetIndex )
  {
    outAssetBlendSet->m_assets[0].m_assetIndex = v51;
    outAssetBlendSet->m_assets[0].m_weight = outAssetBlendSet->m_assets[1].m_weight;
    outAssetBlendSet->m_assets[1].m_assetIndex = v50;
    outAssetBlendSet->m_assets[1].m_weight = m_weight;
  }
LABEL_94:
  outAssetBlendSet->m_assets[v45].m_weight = 0;
}

/*
==============
CG_VisionSetLerpFloat
==============
*/
float CG_VisionSetLerpFloat(const float from, const float to, const float lerp, const visionSetLerpStyle_t style)
{
  if ( style == VISIONSETLERP_LINEAR )
    return (float)((float)(to - from) * lerp) + from;
  if ( style == VISIONSETLERP_SMOOTH )
    return (float)((float)((float)(3.0 - (float)(lerp * 2.0)) * (float)(lerp * lerp)) * (float)(to - from)) + from;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1340, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unsupported visionSetLerpStyle_t") )
    __debugbreak();
  return 0.0;
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
  __m256i *v10; 
  __int64 v11; 
  visionSetVars_t *v12; 
  __m256i v13; 
  __int128 v14; 
  __int64 v15; 
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
  v10 = (__m256i *)&cvsData->archived.visionLeaves[21];
  v11 = 9i64;
  v12 = &cvsData->archived.visionLeaves[20];
  do
  {
    v10 += 4;
    v13 = *(__m256i *)&v12->r_primaryLightTweakDiffuseStrength;
    v14 = *(_OWORD *)&v12->volumetricOmniBrightness;
    v12 = (visionSetVars_t *)((char *)v12 + 128);
    v10[-4] = v13;
    v10[-3] = *(__m256i *)&v12[-1].name[20];
    v10[-2] = *(__m256i *)&v12[-1].name[52];
    *(_OWORD *)v10[-1].m256i_i8 = *(_OWORD *)&v12[-1].inUse.array[5];
    *(_OWORD *)&v10[-1].m256i_u64[2] = v14;
    --v11;
  }
  while ( v11 );
  v15 = *(_QWORD *)&v12->r_viewModelLightAmbient.y;
  *v10 = *(__m256i *)&v12->r_primaryLightTweakDiffuseStrength;
  v10[1].m256i_i64[0] = v15;
  v10[1].m256i_i32[2] = LODWORD(v12->r_lightTweakUVIntensityScale);
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
  visionSetBlend_t *v8; 
  visionSetVars_t *v9; 
  __int128 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( (unsigned __int8)leaf >= VISIONSET_LEAFTYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1619, ASSERT_TYPE_ASSERT, "(unsigned)( leaf ) < (unsigned)( VISIONSET_LEAFTYPE_COUNT )", "leaf doesn't index VISIONSET_LEAFTYPE_COUNT\n\t%i not in [0, %i)", (unsigned __int8)leaf, 25) )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v12) = 24;
    LODWORD(v11) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1620, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v7 = 9i64;
  v8 = &cvsData->archived.visionBlends[(unsigned __int8)blend];
  v9 = &cvsData->archived.visionLeaves[(unsigned __int8)leaf];
  do
  {
    v9 = (visionSetVars_t *)((char *)v9 + 128);
    v10 = *(_OWORD *)&v8->r_primaryLightTweakDiffuseStrength;
    v8 = (visionSetBlend_t *)((char *)v8 + 128);
    *(_OWORD *)v9[-1].hdrColorizeGain.v = v10;
    *(_OWORD *)&v9[-1].name[4] = *(_OWORD *)&v8[-1].name[28];
    *(_OWORD *)&v9[-1].name[20] = *(_OWORD *)&v8[-1].name[44];
    *(_OWORD *)&v9[-1].name[36] = *(_OWORD *)&v8[-1].name[60];
    *(_OWORD *)&v9[-1].name[52] = *(_OWORD *)&v8[-1].inUse.array[3];
    *(_OWORD *)&v9[-1].inUse.array[1] = *(_OWORD *)&v8[-1].decalVolumeDrawDistance;
    *(_OWORD *)&v9[-1].inUse.array[5] = *(_OWORD *)&v8[-1].dummy2;
    *(_OWORD *)&v9[-1].scopedNVG = *(_OWORD *)&v8[-1].lerpInfo.style;
    --v7;
  }
  while ( v7 );
  *(_OWORD *)&v9->r_primaryLightTweakDiffuseStrength = *(_OWORD *)&v8->r_primaryLightTweakDiffuseStrength;
  *(_OWORD *)&v9->r_charLightAmbient.z = *(_OWORD *)&v8->r_charLightAmbient.z;
  *(_QWORD *)&v9->r_viewModelLightAmbient.y = *(_QWORD *)&v8->r_viewModelLightAmbient.y;
  v9->r_lightTweakUVIntensityScale = v8->r_lightTweakUVIntensityScale;
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
  double Lerp; 
  visionSetVars_t *v8; 
  __int64 v9; 
  visionSetBlend_t *v10; 
  __int128 v11; 
  int time; 
  int v13; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_cvsData = &LocalClientGlobals->cvsData;
  CG_VisionSetUpdateToNode(&LocalClientGlobals->cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B);
  Lerp = CG_VisionSetGetLerp(&LocalClientGlobals->cvsData.archived.visionBlends[16], LocalClientGlobals->time);
  if ( *(float *)&Lerp == 0.0 )
  {
    *(_QWORD *)LocalClientGlobals->cvsData.archived.visionBlends[21].inUse.array = 0i64;
    *(_QWORD *)&LocalClientGlobals->cvsData.archived.visionBlends[21].inUse.array[2] = 0i64;
    *(_QWORD *)&LocalClientGlobals->cvsData.archived.visionBlends[21].inUse.array[4] = 0i64;
    LocalClientGlobals->cvsData.archived.visionBlends[21].inUse.array[6] = 0;
  }
  v8 = &LocalClientGlobals->cvsData.archived.visionLeaves[23];
  v9 = 9i64;
  v10 = &LocalClientGlobals->cvsData.archived.visionBlends[21];
  do
  {
    v8 = (visionSetVars_t *)((char *)v8 + 128);
    v11 = *(_OWORD *)&v10->r_primaryLightTweakDiffuseStrength;
    v10 = (visionSetBlend_t *)((char *)v10 + 128);
    *(_OWORD *)v8[-1].hdrColorizeGain.v = v11;
    *(_OWORD *)&v8[-1].name[4] = *(_OWORD *)&v10[-1].name[28];
    *(_OWORD *)&v8[-1].name[20] = *(_OWORD *)&v10[-1].name[44];
    *(_OWORD *)&v8[-1].name[36] = *(_OWORD *)&v10[-1].name[60];
    *(_OWORD *)&v8[-1].name[52] = *(_OWORD *)&v10[-1].inUse.array[3];
    *(_OWORD *)&v8[-1].inUse.array[1] = *(_OWORD *)&v10[-1].decalVolumeDrawDistance;
    *(_OWORD *)&v8[-1].inUse.array[5] = *(_OWORD *)&v10[-1].dummy2;
    *(_OWORD *)&v8[-1].scopedNVG = *(_OWORD *)&v10[-1].lerpInfo.style;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)&v8->r_primaryLightTweakDiffuseStrength = *(_OWORD *)&v10->r_primaryLightTweakDiffuseStrength;
  *(_OWORD *)&v8->r_charLightAmbient.z = *(_OWORD *)&v10->r_charLightAmbient.z;
  *(_QWORD *)&v8->r_viewModelLightAmbient.y = *(_QWORD *)&v10->r_viewModelLightAmbient.y;
  v8->r_lightTweakUVIntensityScale = v10->r_lightTweakUVIntensityScale;
  time = LocalClientGlobals->time;
  if ( LocalClientGlobals == (cg_t *)-304604i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 982, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( duration )
  {
    if ( LocalClientGlobals->cvsData.transitory.playbackDelta < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 994, ASSERT_TYPE_ASSERT, "(cvsData->transitory.playbackDelta >= 0)", (const char *)&queryFormat, "cvsData->transitory.playbackDelta >= 0") )
      __debugbreak();
    v13 = 1;
    LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.timeData.startTime = time - LocalClientGlobals->cvsData.transitory.playbackDelta;
    LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.timeData.forward = 1;
    LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.timeData.duration = duration;
  }
  else
  {
    v13 = 3;
  }
  LocalClientGlobals->cvsData.archived.visionBlends[21].lerpInfo.type = v13;
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
  visionSetVars_t *v6; 
  bool VisionSet; 
  __int64 v9; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1069, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)leaf >= VISIONSET_LEAFTYPE_COUNT )
  {
    LODWORD(v9) = (unsigned __int8)leaf;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1070, ASSERT_TYPE_ASSERT, "(unsigned)( leaf ) < (unsigned)( VISIONSET_LEAFTYPE_COUNT )", "leaf doesn't index VISIONSET_LEAFTYPE_COUNT\n\t%i not in [0, %i)", v9, 25) )
      __debugbreak();
  }
  v6 = &cvsData->archived.visionLeaves[(unsigned __int8)leaf];
  if ( !I_strncmp(name, v6->name, 0x7FFFFFFFui64) )
    return 0;
  VisionSet = CG_VisionSetGetVisionSet(name, v6);
  if ( !VisionSet )
    Com_PrintError(14, "Failed to load visionset of name '%s'\n", name);
  if ( leaf == VISIONSET_LEAFTYPE_NIGHTVISION && v6->nightAndThermalVisionCombo == 0.0 )
    Com_PrintWarning(14, "Vision Set Night called on a vision set that does not have night vision enabled.\n");
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
  __int64 v6; 
  __int64 v9; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1018, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v9) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1019, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v9, 24) )
      __debugbreak();
  }
  v6 = (unsigned __int8)blend;
  if ( cvsData->archived.visionBlends[v6].lerpInfo.type != VISIONSETBLENDTYPE_TIME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1022, ASSERT_TYPE_ASSERT, "(blendNode->lerpInfo.type == VISIONSETBLENDTYPE_TIME)", (const char *)&queryFormat, "blendNode->lerpInfo.type == VISIONSETBLENDTYPE_TIME") )
    __debugbreak();
  if ( !cvsData->archived.visionBlends[v6].lerpInfo.timeData.duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1024, ASSERT_TYPE_ASSERT, "(blendNode->lerpInfo.timeData.duration)", (const char *)&queryFormat, "blendNode->lerpInfo.timeData.duration") )
    __debugbreak();
  cvsData->archived.visionBlends[v6].lerpInfo.timeData.forward = cvsData->archived.visionBlends[v6].lerpInfo.timeData.forward == 0;
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm4, 1 }
  cvsData->archived.visionBlends[v6].lerpInfo.timeData.startTime = (int)*(float *)&_XMM3;
}

/*
==============
CG_VisionSetScriptOverride
==============
*/
void CG_VisionSetScriptOverride(ClientVisionSetData *cvsData, const char *name, const int time, const int duration)
{
  double v8; 
  double Lerp; 
  BOOL v10; 
  visionBlendType_t type; 
  int startTime; 
  bool v13; 
  int v14; 
  int forward; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1204, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  v10 = 1;
  if ( cvsData->archived.visionBlends[16].lerpInfo.type == VISIONSETBLENDTYPE_TIME && !cvsData->archived.visionBlends[16].lerpInfo.timeData.forward || (v8 = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[16], time), *(float *)&v8 != 1.0) )
  {
    if ( cvsData->archived.visionBlends[16].lerpInfo.type != VISIONSETBLENDTYPE_TIME || cvsData->archived.visionBlends[16].lerpInfo.timeData.forward || (Lerp = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[16], time), *(float *)&Lerp != 0.0) )
      v10 = 0;
  }
  type = cvsData->archived.visionBlends[16].lerpInfo.type;
  if ( type != VISIONSETBLENDTYPE_TIME || time <= 0 || (startTime = cvsData->archived.visionBlends[16].lerpInfo.timeData.startTime, time <= startTime) || (v13 = time < cvsData->archived.visionBlends[16].lerpInfo.timeData.duration + startTime, v14 = 1, !v13) )
    v14 = 0;
  if ( type == VISIONSETBLENDTYPE_TIME )
    forward = cvsData->archived.visionBlends[16].lerpInfo.timeData.forward;
  else
    forward = 1;
  if ( !*name )
  {
    if ( v10 )
    {
      if ( !forward )
        return;
    }
    else if ( v14 )
    {
      if ( !forward )
        return;
      goto LABEL_33;
    }
    CG_VisionSetRegisterBlendStart(cvsData, VISIONSET_BLENDTYPE_SCRIPT_OVERRIDE, time, duration, 0, VISIONSETLERP_SMOOTH);
    return;
  }
  if ( v10 )
  {
    if ( !forward )
    {
LABEL_23:
      CG_VisionSetRegisterBlendStart(cvsData, VISIONSET_BLENDTYPE_SCRIPT_OVERRIDE, time, duration, 1, VISIONSETLERP_SMOOTH);
      return;
    }
    return;
  }
  if ( !v14 )
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
void CG_VisionSetSetBlendPush(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const float lerp)
{
  __int64 v5; 
  double v6; 
  __int64 v7; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1051, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v7) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1052, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v7, 24) )
      __debugbreak();
  }
  v5 = (unsigned __int8)blend;
  cvsData->archived.visionBlends[v5].lerpInfo.type = VISIONSETBLENDTYPE_PUSH;
  v6 = I_fclamp(lerp, 0.0, 1.0);
  cvsData->archived.visionBlends[v5].lerpInfo.pushData.lerp = *(float *)&v6;
}

/*
==============
CG_VisionSetSetBlendStop
==============
*/
void CG_VisionSetSetBlendStop(ClientVisionSetData *cvsData, const visionSetCodeBlendType_t blend, const int time)
{
  __int64 v6; 
  double Lerp; 
  __int64 v8; 

  if ( !cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1059, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
    __debugbreak();
  if ( (unsigned __int8)blend >= VISIONSET_BLENDTYPE_COUNT )
  {
    LODWORD(v8) = (unsigned __int8)blend;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1060, ASSERT_TYPE_ASSERT, "(unsigned)( blend ) < (unsigned)( VISIONSET_BLENDTYPE_COUNT )", "blend doesn't index VISIONSET_BLENDTYPE_COUNT\n\t%i not in [0, %i)", v8, 24) )
      __debugbreak();
  }
  v6 = (unsigned __int8)blend;
  Lerp = CG_VisionSetGetLerp(&cvsData->archived.visionBlends[v6], time);
  cvsData->archived.visionBlends[v6].lerpInfo.pushData.lerp = *(float *)&Lerp;
  cvsData->archived.visionBlends[v6].lerpInfo.type = VISIONSETBLENDTYPE_PUSH;
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
  __int64 v6; 
  visionSetLerpStyle_t v7; 
  double Lerp; 
  const visionSetVarsBase_t *Child; 
  const visionSetVarsBase_t *v10; 
  __int64 v11; 

  if ( (unsigned __int8)node <= VISIONSET_BLENDTYPE_WORLDSPAWN_ALTERNATES )
  {
    childRefs = cvsData->archived.visionBlends[23].childRefs;
    v6 = 24 - (unsigned int)(unsigned __int8)node;
    do
    {
      if ( !*(_DWORD *)&childRefs[2].m_type )
      {
        LODWORD(v11) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1592, ASSERT_TYPE_ASSERT, "( ( blend->lerpInfo.type != VISIONSETBLENDTYPE_UNSET ) )", "( blend->lerpInfo.type ) = %i", v11) )
          __debugbreak();
      }
      if ( (childRefs->m_type == Type_Null || childRefs[1].m_type == Type_Null) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1593, ASSERT_TYPE_ASSERT, "(blend->childRefs[0].m_type != visionSetBlend_t::ChildRef::Type_Null && blend->childRefs[1].m_type != visionSetBlend_t::ChildRef::Type_Null)", (const char *)&queryFormat, "blend->childRefs[0].m_type != visionSetBlend_t::ChildRef::Type_Null && blend->childRefs[1].m_type != visionSetBlend_t::ChildRef::Type_Null") )
        __debugbreak();
      v7 = *(_DWORD *)&childRefs[4].m_type;
      Lerp = CG_VisionSetGetLerp((const visionSetBlend_t *)&childRefs[-598], time);
      Child = CG_VisionSet_GetChild(cvsData, childRefs + 1);
      v10 = CG_VisionSet_GetChild(cvsData, childRefs);
      CG_VisionSetLerp(v10, Child, *(float *)&Lerp, v7, (visionSetVarsBase_t *)&childRefs[-598]);
      childRefs -= 610;
      --v6;
    }
    while ( v6 );
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
  double Float; 
  unsigned int p; 

  MemFile_ReadData(memFile, 0x4ACui64, cvsData);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[3]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[1]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[2]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[4]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[5]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[6]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[9]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[11]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[12]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[16]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[17]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[18]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[19]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[20]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[21]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[22]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[23]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[24]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[14]);
  MemFile_ReadData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[15]);
  MemFile_ReadData(memFile, 0x4C4ui64, cvsData->archived.visionBlends);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[1]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[2]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[3]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[4]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[5]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[6]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[7]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[8]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[11]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[12]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[9]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[10]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[13]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[16]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[17]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[18]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[19]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[20]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[21]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[22]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[23]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[14]);
  MemFile_ReadData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[15]);
  MemFile_ReadData(memFile, 1ui64, &p);
  cvsData->archived.visionInitialized = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  cvsData->archived.prevTrigA = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  cvsData->archived.prevTrigB = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  cvsData->archived.stagedVisionStateTo = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  cvsData->archived.stagedVisionDuration = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  cvsData->archived.stagedVisionStart = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  cvsData->archived.painVisionActive = p;
  Float = MemFile_ReadFloat(memFile);
  cvsData->archived.painVisionLerp = *(float *)&Float;
  CG_VisionSet_LoadAssetList(memFile, cvsData);
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

  MemFile_WriteData(memFile, 0x4ACui64, cvsData);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[3]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[1]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[2]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[4]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[5]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[6]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[9]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[11]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[12]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[16]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[17]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[18]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[19]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[20]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[21]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[22]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[23]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[24]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[14]);
  MemFile_WriteData(memFile, 0x4ACui64, &cvsData->archived.visionLeaves[15]);
  MemFile_WriteData(memFile, 0x4C4ui64, cvsData->archived.visionBlends);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[1]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[2]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[3]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[4]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[5]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[6]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[7]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[8]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[11]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[12]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[9]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[10]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[13]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[16]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[17]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[18]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[19]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[20]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[21]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[22]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[23]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[14]);
  MemFile_WriteData(memFile, 0x4C4ui64, &cvsData->archived.visionBlends[15]);
  LOBYTE(p) = cvsData->archived.visionInitialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = cvsData->archived.prevTrigA;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = cvsData->archived.prevTrigB;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = cvsData->archived.stagedVisionStateTo;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = cvsData->archived.stagedVisionDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = cvsData->archived.stagedVisionStart;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = cvsData->archived.painVisionActive;
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteFloat(memFile, cvsData->archived.painVisionLerp);
  CG_VisionSet_SaveAssetList(memFile, cvsData);
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
  LocalClientNum_t v1; 
  cg_t *LocalClientGlobals; 
  ClientVisionSetData *p_cvsData; 
  char v4; 
  cg_t *v5; 
  const dvar_t *v6; 
  ClientVisionSetData *v7; 
  int v8; 
  int integer; 
  unsigned __int64 i; 
  visionSetCodeBlendType_t v11; 
  double Lerp; 
  int thermalOverrideVisionSetIndex; 
  const char *VisionName; 
  int missileOverrideVisionSetIndex; 
  const char *v16; 
  cg_t *v17; 
  ClientVisionSetData *v18; 
  ClientVisionSetData *v19; 
  int painOverrideVisionSetIndex; 
  char *v21; 
  unsigned int v22; 
  CgMLGSpectator *MLGSpectator; 
  CgMLGCameraManager *CameraManager; 
  CoDCasterCameraType MLGCameraType; 
  bool v26; 
  int killstreakOverrideVisionSetIndex; 
  const char *v28; 
  cg_t *v29; 
  unsigned int *p_visionSetIndex; 
  visionSetVars_t *v32; 
  __int64 v33; 
  visionSetBlend_t *v34; 
  __int128 v35; 
  char *v36; 
  __int64 style; 
  __int64 v38; 
  char *outVisionSetName; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_cvsData = &LocalClientGlobals->cvsData;
  LocalClientGlobals->cvsData.transitory.nightVisionCanBlendInPostPlayerState = 0;
  LOBYTE(outVisionSetName) = CG_View_IsKillCamEntityView(v1);
  v4 = (char)outVisionSetName;
  if ( (_BYTE)outVisionSetName )
  {
    v5 = CG_GetLocalClientGlobals(v1);
    v6 = DCONST_DVARINT_visionSetKillcamEntBlendDuration;
    v7 = &v5->cvsData;
    v8 = v5->time - v5->predictedPlayerState.deltaTime;
    if ( !DCONST_DVARINT_visionSetKillcamEntBlendDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "visionSetKillcamEntBlendDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = v6->current.integer;
    for ( i = 0i64; i < 6; ++i )
    {
      v11 = byte_1442D636C[i];
      Lerp = CG_VisionSetGetLerp(&v7->archived.visionBlends[(unsigned __int8)v11], v8);
      if ( (*(float *)&Lerp != 0.0 || CG_VisionSetIsBlending(v7, v11, v8)) && (!CG_VisionSetIsBlending(v7, v11, v8) || CG_VisionSetForward(v7, v11)) )
        CG_VisionSetRegisterBlendStart(v7, v11, v8, integer, 0, VISIONSETLERP_SMOOTH);
    }
    v4 = (char)outVisionSetName;
    p_cvsData = &LocalClientGlobals->cvsData;
    LocalClientGlobals->cvsData.transitory.prevThermalOverrideVisionSetIndex = 0;
    LocalClientGlobals->cvsData.transitory.prevMissileOverrideVisionSetIndex = 0;
    v1 = localClientNum;
  }
  else if ( LocalClientGlobals->cvsData.transitory.thermalVisionActive )
  {
    thermalOverrideVisionSetIndex = LocalClientGlobals->predictedPlayerState.thermalOverrideVisionSetIndex;
    if ( LocalClientGlobals->cvsData.transitory.prevThermalOverrideVisionSetIndex != thermalOverrideVisionSetIndex )
    {
      LocalClientGlobals->cvsData.transitory.prevThermalOverrideVisionSetIndex = thermalOverrideVisionSetIndex;
      VisionName = CG_VisionSets_GetVisionName(thermalOverrideVisionSetIndex);
      if ( VisionName )
      {
        if ( *VisionName )
          CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_THERMAL, VisionName);
      }
    }
    if ( !LocalClientGlobals->cvsData.archived.visionLeaves[11].name[0] )
      Com_Error_impl(ERR_SCRIPT, (const ObfuscateErrorText)&stru_1442D63D0, 1160i64);
    LocalClientGlobals->cvsData.archived.visionBlends[6].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    LocalClientGlobals->cvsData.archived.visionBlends[7].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  }
  else if ( LocalClientGlobals->cvsData.transitory.remoteMissileCam )
  {
    missileOverrideVisionSetIndex = LocalClientGlobals->predictedPlayerState.missileOverrideVisionSetIndex;
    if ( LocalClientGlobals->cvsData.transitory.prevMissileOverrideVisionSetIndex != missileOverrideVisionSetIndex )
    {
      LocalClientGlobals->cvsData.transitory.prevMissileOverrideVisionSetIndex = missileOverrideVisionSetIndex;
      v16 = CG_VisionSets_GetVisionName(missileOverrideVisionSetIndex);
      if ( v16 )
      {
        if ( *v16 )
          CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_PREDATOR, v16);
      }
    }
    if ( !LocalClientGlobals->cvsData.archived.visionLeaves[12].name[0] )
      Com_Error_impl(ERR_SCRIPT, (const ObfuscateErrorText)&stru_1442D6420, 1161i64);
    LocalClientGlobals->cvsData.archived.visionBlends[6].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    LocalClientGlobals->cvsData.archived.visionBlends[7].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    LocalClientGlobals->cvsData.archived.visionBlends[8].lerpInfo.type = VISIONSETBLENDTYPE_ON;
  }
  else
  {
    LocalClientGlobals->cvsData.transitory.nightVisionCanBlendInPostPlayerState = 1;
  }
  if ( LocalClientGlobals->cvsData.archived.visionLeaves[15].name[0] )
  {
    if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v38) = 2;
      LODWORD(style) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1861, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", style, v38) )
        __debugbreak();
    }
    v17 = CG_GetLocalClientGlobals(v1);
    if ( v17->inKillCam && v17->killCamEntityType )
    {
      v18 = &v17->cvsData;
      if ( v17 == (cg_t *)-304604i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1035, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      v18->archived.visionBlends[15].lerpInfo.type = VISIONSETBLENDTYPE_ON;
    }
    else
    {
      v19 = &v17->cvsData;
      if ( v17 == (cg_t *)-304604i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      v19->archived.visionBlends[15].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    }
  }
  painOverrideVisionSetIndex = LocalClientGlobals->predictedPlayerState.painOverrideVisionSetIndex;
  v21 = (char *)&queryFormat.fmt + 3;
  if ( LocalClientGlobals->cvsData.transitory.prevPainOverrideVisionSetIndex != painOverrideVisionSetIndex )
  {
    LocalClientGlobals->cvsData.transitory.prevPainOverrideVisionSetIndex = painOverrideVisionSetIndex;
    v22 = painOverrideVisionSetIndex;
    if ( painOverrideVisionSetIndex > 0 && NetConstStrings_GetVisionSetStringCount() )
    {
      if ( !NetConstStrings_GetVisionSetName(v22, (const char **)&outVisionSetName) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 1159i64, v22);
      if ( outVisionSetName && *outVisionSetName )
        CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_PAIN, outVisionSetName);
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
  }
  if ( LocalClientGlobals->m_isMLGSpectator && LocalClientGlobals->cvsData.transitory.prevKillstreakOverrideVisionSetIndex )
  {
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(v1);
    CameraManager = CgMLGSpectator::GetCameraManager(MLGSpectator);
    MLGCameraType = CgMLGCameraManager::GetMLGCameraType(CameraManager, v1);
    v26 = MLGCameraType == SPECTATOR;
    if ( MLGCameraType && CgMLGSpectator::GetVisionSetMode(MLGSpectator) == IN_KILLSTREAK_VISION_SET )
    {
      if ( !p_cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1043, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      p_cvsData->archived.visionBlends[13].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
      CgMLGSpectator::SetVisionSetMode(MLGSpectator, NO_VISION_SET);
      return;
    }
    if ( v26 && CgMLGSpectator::GetVisionSetMode(MLGSpectator) == NO_VISION_SET )
    {
      if ( !p_cvsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1035, ASSERT_TYPE_ASSERT, "(cvsData)", (const char *)&queryFormat, "cvsData") )
        __debugbreak();
      p_cvsData->archived.visionBlends[13].lerpInfo.type = VISIONSETBLENDTYPE_ON;
      CgMLGSpectator::SetVisionSetMode(MLGSpectator, IN_KILLSTREAK_VISION_SET);
    }
  }
  killstreakOverrideVisionSetIndex = LocalClientGlobals->predictedPlayerState.killstreakOverrideVisionSetIndex;
  if ( LocalClientGlobals->cvsData.transitory.prevKillstreakOverrideVisionSetIndex != killstreakOverrideVisionSetIndex )
  {
    LocalClientGlobals->cvsData.transitory.prevKillstreakOverrideVisionSetIndex = killstreakOverrideVisionSetIndex;
    v28 = CG_VisionSets_GetVisionName(killstreakOverrideVisionSetIndex);
    if ( v28 && *v28 )
    {
      CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_KILLSTREAK, v28);
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
  v29 = CG_GetLocalClientGlobals(v1);
  p_visionSetIndex = &v29->predictedPlayerState.visionSetOverride.visionSetIndex;
  if ( v29->cvsData.transitory.prevOverride.duration == v29->predictedPlayerState.visionSetOverride.duration && v29->cvsData.transitory.prevOverride.startTime == v29->predictedPlayerState.visionSetOverride.startTime && v29->cvsData.transitory.prevOverride.visionSetIndex == *p_visionSetIndex )
    p_visionSetIndex = NULL;
  if ( v4 )
  {
    *(_QWORD *)&LocalClientGlobals->cvsData.transitory.prevOverride.visionSetIndex = 0i64;
    LocalClientGlobals->cvsData.transitory.prevOverride.duration = 0;
  }
  else if ( p_visionSetIndex && NetConstStrings_GetVisionSetStringCount() )
  {
    *(double *)&LocalClientGlobals->cvsData.transitory.prevOverride.visionSetIndex = *(double *)p_visionSetIndex;
    LocalClientGlobals->cvsData.transitory.prevOverride.duration = p_visionSetIndex[2];
    if ( *p_visionSetIndex )
    {
      if ( !NetConstStrings_GetVisionSetName(*p_visionSetIndex, (const char **)&outVisionSetName) )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442C6BC8, 1163i64, *p_visionSetIndex);
        return;
      }
      v21 = outVisionSetName;
      if ( *outVisionSetName )
      {
        CG_VisionSetUpdateToNode(p_cvsData, LocalClientGlobals->time, VISIONSET_BLENDTYPE_CT_B);
        CG_VisionSetClearScriptBlendInUseIfNeeded(p_cvsData, LocalClientGlobals->time);
        v32 = &LocalClientGlobals->cvsData.archived.visionLeaves[23];
        v33 = 9i64;
        v34 = &LocalClientGlobals->cvsData.archived.visionBlends[21];
        do
        {
          v32 = (visionSetVars_t *)((char *)v32 + 128);
          v35 = *(_OWORD *)&v34->r_primaryLightTweakDiffuseStrength;
          v34 = (visionSetBlend_t *)((char *)v34 + 128);
          *(_OWORD *)v32[-1].hdrColorizeGain.v = v35;
          *(_OWORD *)&v32[-1].name[4] = *(_OWORD *)&v34[-1].name[28];
          *(_OWORD *)&v32[-1].name[20] = *(_OWORD *)&v34[-1].name[44];
          *(_OWORD *)&v32[-1].name[36] = *(_OWORD *)&v34[-1].name[60];
          *(_OWORD *)&v32[-1].name[52] = *(_OWORD *)&v34[-1].inUse.array[3];
          *(_OWORD *)&v32[-1].inUse.array[1] = *(_OWORD *)&v34[-1].decalVolumeDrawDistance;
          *(_OWORD *)&v32[-1].inUse.array[5] = *(_OWORD *)&v34[-1].dummy2;
          *(_OWORD *)&v32[-1].scopedNVG = *(_OWORD *)&v34[-1].lerpInfo.style;
          --v33;
        }
        while ( v33 );
        v36 = outVisionSetName;
        *(_OWORD *)&v32->r_primaryLightTweakDiffuseStrength = *(_OWORD *)&v34->r_primaryLightTweakDiffuseStrength;
        *(_OWORD *)&v32->r_charLightAmbient.z = *(_OWORD *)&v34->r_charLightAmbient.z;
        *(_QWORD *)&v32->r_viewModelLightAmbient.y = *(_QWORD *)&v34->r_viewModelLightAmbient.y;
        v32->r_lightTweakUVIntensityScale = v34->r_lightTweakUVIntensityScale;
        CG_VisionSetRegisterLeafByFile(p_cvsData, VISIONSET_LEAFTYPE_SCRIPT_TO, v36);
        CG_VisionSetRegisterBlendStart(p_cvsData, VISIONSET_BLENDTYPE_SCRIPT_BLEND, p_visionSetIndex[1], p_visionSetIndex[2], 1, VISIONSETLERP_SMOOTH);
        v21 = outVisionSetName;
      }
    }
    else
    {
      outVisionSetName = (char *)&queryFormat.fmt + 3;
    }
    CG_VisionSetScriptOverride(p_cvsData, v21, p_visionSetIndex[1], p_visionSetIndex[2]);
  }
  if ( LocalClientGlobals->predictedPlayerState.pm_type >= 7 )
  {
    LocalClientGlobals->cvsData.archived.visionBlends[5].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
    LocalClientGlobals->cvsData.archived.visionBlends[12].lerpInfo.type = VISIONSETBLENDTYPE_OFF;
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v4; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  bool v6; 
  bool v7; 
  int EquippedWeaponIndex; 
  __int64 v9; 
  bool v10; 
  CgHandler *Handler; 
  bool v12; 
  double Lerp; 
  int time; 
  int startTime; 
  bool v16; 
  BgAdsVisionSetInfo outVisionSetInfo; 
  bool outIsAlternate; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1794, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v1];
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(v4, p_predictedPlayerState, &outIsAlternate);
  v6 = LocalClientGlobals->renderingThirdPerson || BG_IsThirdPersonMode(v4, p_predictedPlayerState);
  v7 = 0;
  if ( BG_IsUsingOffhandGestureWeaponADSSupport(v4, p_predictedPlayerState) && BG_HasThermalScope(p_predictedPlayerState, ViewmodelOrOffhandADSSupportWeapon, 0) )
  {
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v7 = 0;
    if ( ViewmodelOrOffhandADSSupportWeapon->weaponIdx )
    {
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v4, p_predictedPlayerState, ViewmodelOrOffhandADSSupportWeapon);
      if ( EquippedWeaponIndex >= 0 )
      {
        v9 = EquippedWeaponIndex;
        if ( (const playerState_s *)((char *)p_predictedPlayerState + 4 * v9) != (const playerState_s *)-1540i64 && !p_predictedPlayerState->weapEquippedData[v9].thermalEnabled )
          v7 = 1;
      }
    }
  }
  memset(&outVisionSetInfo, 0, sizeof(outVisionSetInfo));
  v12 = 0;
  if ( !v6 )
  {
    v10 = outIsAlternate;
    Handler = CgHandler::getHandler((LocalClientNum_t)v1);
    if ( BG_IsAdsVisionSetActive(Handler, p_predictedPlayerState, ViewmodelOrOffhandADSSupportWeapon, v10, &outVisionSetInfo) && !CG_View_IsEMPJammed((const LocalClientNum_t)v1) && !v7 )
      v12 = 1;
  }
  Lerp = CG_VisionSetGetLerp(&LocalClientGlobals->cvsData.archived.visionBlends[14], LocalClientGlobals->time);
  time = LocalClientGlobals->time;
  v16 = 0;
  if ( LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.type == VISIONSETBLENDTYPE_TIME && time > 0 )
  {
    startTime = LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.startTime;
    if ( time > startTime && time < LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.duration + startTime )
      v16 = 1;
  }
  if ( v12 )
  {
    if ( !outVisionSetInfo.visionSetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_visionsets.cpp", 1827, ASSERT_TYPE_ASSERT, "(adsVisionSetInfo.visionSetName)", (const char *)&queryFormat, "adsVisionSetInfo.visionSetName") )
      __debugbreak();
    if ( I_strncmp(outVisionSetInfo.visionSetName, LocalClientGlobals->cvsData.archived.visionLeaves[14].name, 0x7FFFFFFFui64) )
    {
      CG_VisionSetRegisterLeafByFile(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_WEAPON_ADS, outVisionSetInfo.visionSetName);
LABEL_43:
      CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_WEAPON_ADS, LocalClientGlobals->time, outVisionSetInfo.visionSetBlendInTimeMs, 1, VISIONSETLERP_SMOOTH);
      return;
    }
    if ( (!v16 || !LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.forward) && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&Lerp - 1.0) & _xmm) > 0.000001 )
      goto LABEL_43;
  }
  else if ( (!v16 || LocalClientGlobals->cvsData.archived.visionBlends[14].lerpInfo.timeData.forward) && *(float *)&Lerp > 0.000001 )
  {
    CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_WEAPON_ADS, time, outVisionSetInfo.visionSetBlendOutTimeMs, 0, VISIONSETLERP_SMOOTH);
  }
}

